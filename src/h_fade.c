#include "h_fade.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Kernel/Kwln/kwln.h"
#include "Main/g_data.h"
#include "h_cdvd.h"
#include "h_maestro.h"
#include "libm.h"




typedef struct FadeDayEpl FadeDayEpl;
typedef struct FadeDayTmx FadeDayTmx;
typedef struct HSfdAsyncEntry HSfdAsyncEntry;

extern f32 DAT_007caf38;
#pragma alias rwGlobals_abs rwGlobals
extern u8 rwGlobals_abs[];
typedef struct HFadeRwGlobals
{
    u8 pad[0x88];
    RwReal zBufferNear;
    RwReal zBufferFar;
    RwRenderStateSetFunc setRenderState;
    RwRenderStateGetFunc getRenderState;
    u8 unkData[0x08];
    RwIm2DRenderPrimitiveFunction fpIm2DRenderPrimitive;
} HFadeRwGlobals;


static inline f32 MaestroBig2_mulFirst(f32 left, f32 right)
{
    return right * left;
}

extern FadeDayEpl* func_0034fcd0(const void* eplBlob);
extern void func_0034fcf0(FadeDayEpl* epl);
extern void func_0034fd30(FadeDayEpl* epl);
extern void func_0034fd70(FadeDayEpl* epl, s32 layer);
extern void func_0034fdf0(FadeDayEpl* epl, const RwV3d* position);
extern void func_0034ff70(FadeDayEpl* epl, f32 scalar);
extern void func_0034ff90(FadeDayEpl* epl, const RwRGBA* color);
extern void* func_0010c1a0(void* param_1, const char* path, ...);
extern void* func_0010c3a0(void* stream, u32* finished, u32 param_3);
extern void func_001140d0(f32 depthOffset, u32 rgba, f32 x, f32 y,
                           s32 width, s32 height, const FadeDayTmx* texture);
extern void func_004d0f00(void* resource);

static s16 sFadeType;                  // 007cdf08
static s16 sFadeCounter;               // 007cdf04
static s16 sFadeDuration;              // 007cdf00. In frames
static s16 sFadeState;                 // 007cdefc
static u8 sFadeRed;                    // 007cdef8
static u8 sbssPadRed[3];
static u8 sFadeGreen;                  // 007cdef4
static u8 sbssPadGreen[3];
static u8 sFadeBlue;                   // 007cdef0
static s16 sFadeDayEplAlphaFrame;      // 007cdeec
static HSfdAsyncEntry* sFadeDayTmxRequest; // 007cdee8
static FadeDayTmx* sFadeDayTmx;        // 007cdee4
static FadeDayEpl* sFadeDayEpl;        // 007cdee0
static KwlnTask* sMaestroInTask;       // 007cdedc
static KwlnTask* sMaestroOutTask;      // 007cded8
static u32 sFadeActive;                // 007cded4
#pragma alias sFadeState_sda sFadeState
extern s16 sFadeState_sda __attribute__((section(".sdata")));

static HCdvd* cdvds[8]; // 007e39d0

static void H_Fade_Anim();
static void H_Fade_Transition();
static void H_Fade_White();
static void H_Fade_Day();
static void H_Fade_Custom();

// FUN_00107020
void H_Fade_ReadPak()
{
    HCdvd* cdvd;

    cdvd = H_Cdvd_Request("camp/fade_pak.pak", HCDVD_FILEARCHIVE);
    cdvds[0] = cdvd;
    H_Cdvd_ReadSync(cdvd);
}

// FUN_00107060
void H_Fade_Main()
{
    RwRenderStateSetFunc* setRenderState;

    setRenderState = &rwGlobals.device.setRenderState;

    (*setRenderState)(rwRENDERSTATEZTESTENABLE, (void*)true);
    (*setRenderState)(rwRENDERSTATESHADEMODE, (void*)rwSHADEMODEGOURAUD);
    (*setRenderState)(rwRENDERSTATEZWRITEENABLE, (void*)true);
    (*setRenderState)(rwRENDERSTATESRCBLEND, (void*)rwBLENDSRCALPHA);
    (*setRenderState)(rwRENDERSTATEDESTBLEND, (void*)rwBLENDINVSRCALPHA);
    (*setRenderState)(rwRENDERSTATETEXTUREFILTER, (void*)rwFILTERLINEAR);
    (*setRenderState)(rwRENDERSTATEVERTEXALPHAENABLE, (void*)true);

    if (sFadeActive)
    {
        switch (sFadeType)
        {
            case HFADE_ANMLR:   // fallthrough
            case HFADE_ANMTIME: // fallthrough
            case HFADE_ANMAREA: // fallthrough
            case HFADE_ANMMOVE: H_Fade_Anim(); break;

            case HFADE_TRANSITION:  H_Fade_Transition(); break;
            case HFADE_TRANSITION2: H_Fade_Transition(); break;

            case HFADE_WHITE:  H_Fade_White();  break;
            case HFADE_DAY:    H_Fade_Day();    break;
            case HFADE_CUSTOM: H_Fade_Custom();
        }
    }
}

// FUN_001071b0
void H_Fade_Clear()
{
    if (sFadeActive)
    {
        sFadeActive = false;

        if (sMaestroOutTask != NULL)
        {
            kwlnTaskDestroyWithHierarchy(sMaestroOutTask);
            sMaestroOutTask = NULL;
        }
    }
}

/* Removing this loses FUN_001071f0 (MATCH nd0 -> MISMATCH nd144) - measured W161. */
#pragma opt_loop_invariants on
// FUN_001071f0 MATCHING
static void H_Fade_Anim()
{
    RwIm2DVertex vertices[4];
    f32 recipZ;
    f32 z;
    f32 red;
    f32 green;
    f32 blue;
    f32 alpha;
    s32 i;

    switch (sFadeState)
    {
        case HFADE_STATE_INIT_OUT:
            switch (sFadeType)
            {
                case HFADE_ANMLR:
                    sMaestroOutTask = H_Maestro_CreateTask(NULL, 6325, "camp/fade/if_lr_0a.anm");
                    break;
                case HFADE_ANMTIME:
                    sMaestroOutTask = H_Maestro_CreateTask(NULL, 6325, "camp/fade/if_time_1a.anm");
                    break;
                case HFADE_ANMAREA:
                    sMaestroOutTask = H_Maestro_CreateTask(NULL, 6325, "camp/fade/if_area_2a.anm");
                    break;
                case HFADE_ANMMOVE:
                    sMaestroOutTask = H_Maestro_CreateTask(NULL, 6325, "camp/fade/if_move_4a.anm");
                    break;
            }

            H_Maestro_00111f20(sMaestroOutTask, true);
            sFadeState = HFADE_STATE_MAESTROOUT;
            // fallthrough

        case HFADE_STATE_MAESTROOUT:
            if (H_Maestro_FinishedInit(sMaestroOutTask))
            {
                H_Maestro_RequestDraw(sMaestroOutTask);
                sFadeState = HFADE_STATE_OUT;
            }
            goto anim_return;

        case HFADE_STATE_OUT:
            if (H_Maestro_00111cb0(sMaestroOutTask))
            {
                sFadeState = HFADE_STATE_HOLD;

                if (sMaestroOutTask != NULL)
                {
                    kwlnTaskDestroyWithHierarchy(sMaestroOutTask);
                    sMaestroOutTask = NULL;
                }
            }
            goto anim_return;

        case HFADE_STATE_HOLD: goto anim_render;
        
        case HFADE_STATE_INIT_IN: 
            switch (sFadeType)
            {
                case HFADE_ANMLR:
                    sMaestroInTask = H_Maestro_CreateTask(NULL, 6325, "camp/fade/if_lr_0b.anm");
                    break;
                case HFADE_ANMTIME:
                    sMaestroInTask = H_Maestro_CreateTask(NULL, 6325, "camp/fade/if_time_1b.anm");
                    break;
                case HFADE_ANMAREA:
                    sMaestroInTask = H_Maestro_CreateTask(NULL, 6325, "camp/fade/if_area_2b.anm");
                    break;
                case HFADE_ANMMOVE:
                    sMaestroInTask = H_Maestro_CreateTask(NULL, 6325, "camp/fade/if_move_4b.anm");
                    break;
            }
            H_Maestro_SetShouldLoop(sMaestroInTask, false);
            sFadeState = HFADE_STATE_MAESTROIN;
            goto anim_render;

        case HFADE_STATE_IN:
            if (kwlnTaskGetState(sMaestroInTask) != KWLNTASK_STATE_DESTROY)
            {
                goto anim_in_return;
            }
            sFadeActive = false;
            sMaestroInTask = NULL;

anim_in_return:
            return;

        case HFADE_STATE_MAESTROIN:
            if (H_Maestro_FinishedInit(sMaestroInTask))
            {
                H_Maestro_RequestDraw(sMaestroInTask);

                if (sMaestroOutTask != NULL)
                {
                    kwlnTaskDestroyWithHierarchy(sMaestroOutTask);
                    sMaestroOutTask = NULL;
                }

                sFadeState = HFADE_STATE_IN;
            }
            goto anim_render;

        default: goto anim_return;
    }

anim_return:
    return;

anim_render:
    recipZ = 1.0f / kwlnGetMainCamera()->nearPlane;
    red = 15.0f;
    green = 31.0f;
    blue = 40.0f;
    alpha = 255.0f;
    i = 0;
    z = ((HFadeRwGlobals*)rwGlobals_abs)->zBufferNear - 100.0f;
    for (; i < 4; i++)
    {
        vertices[i].u.els.scrVertex.z = z;
        vertices[i].u.els.recipZ = recipZ;
        vertices[i].u.els.color.r = red;
        vertices[i].u.els.color.g = green;
        vertices[i].u.els.color.b = blue;
        vertices[i].u.els.color.a = alpha;
    }

    vertices[0].u.els.scrVertex.x = 0.0f;
    vertices[0].u.els.scrVertex.y = 0.0f;

    vertices[1].u.els.scrVertex.x = SCREEN_WIDTH;
    vertices[1].u.els.scrVertex.y = 0.0f;

    vertices[2].u.els.scrVertex.x = 0.0f;
    vertices[2].u.els.scrVertex.y = SCREEN_HEIGHT;

    vertices[3].u.els.scrVertex.x = SCREEN_WIDTH;
    vertices[3].u.els.scrVertex.y = SCREEN_HEIGHT;
    (*((HFadeRwGlobals*)rwGlobals_abs)->setRenderState)(rwRENDERSTATETEXTURERASTER, NULL);
    (*((HFadeRwGlobals*)rwGlobals_abs)->fpIm2DRenderPrimitive)(rwPRIMTYPETRISTRIP, vertices, 4);
}
#pragma opt_loop_invariants off

/* Removing this loses FUN_001075b0 (MATCH nd0 -> MISMATCH nd176) and 2 more - measured W161. */
#pragma opt_loop_invariants on
// FUN_001075b0
static void H_Fade_Transition()
{
    RwRenderStateSetFunc* setRenderState;
    RwIm2DVertex vertices[4];
    s16 alpha;
    f32 recipZ;
    f32 z;
    s16 i;

    setRenderState = &rwGlobals.device.setRenderState;

    (*setRenderState)(rwRENDERSTATEZTESTENABLE, (void*)true);
    (*setRenderState)(rwRENDERSTATESHADEMODE, (void*)rwSHADEMODEGOURAUD);
    (*setRenderState)(rwRENDERSTATEZWRITEENABLE, (void*)true);
    (*setRenderState)(rwRENDERSTATESRCBLEND, (void*)rwBLENDSRCALPHA);
    (*setRenderState)(rwRENDERSTATEDESTBLEND, (void*)rwBLENDINVSRCALPHA);
    (*setRenderState)(rwRENDERSTATETEXTUREFILTER, (void*)rwFILTERLINEAR);
    (*setRenderState)(rwRENDERSTATEVERTEXALPHAENABLE, (void*)true);

    switch (sFadeState)
    {
        case HFADE_STATE_INIT_OUT:
            sFadeState = HFADE_STATE_OUT;
            sFadeCounter = 0;
            // fallthrough

        case HFADE_STATE_OUT:
            sFadeCounter++;
            if (sFadeCounter == sFadeDuration)
            {
                sFadeState = HFADE_STATE_HOLD;
            }
            break;

        case HFADE_STATE_HOLD:
            sFadeCounter = sFadeDuration;

            if (sMaestroOutTask != NULL)
            {
                kwlnTaskDestroyWithHierarchy(sMaestroOutTask);
                sMaestroOutTask = NULL;
            }

            if (sMaestroInTask != NULL)
            {
                kwlnTaskDestroyWithHierarchy(sMaestroInTask);
                sMaestroInTask = NULL;
            }
            break;

        case HFADE_STATE_INIT_IN:
            if (sMaestroOutTask != NULL)
            {
                kwlnTaskDestroyWithHierarchy(sMaestroOutTask);
                sMaestroOutTask = NULL;
            }

            if (sMaestroInTask != NULL)
            {
                kwlnTaskDestroyWithHierarchy(sMaestroInTask);
                sMaestroInTask = NULL;
            }

            sFadeCounter = sFadeDuration;
            sFadeState = HFADE_STATE_IN;
            break;

        case HFADE_STATE_IN:
            sFadeCounter--;
            if (sFadeCounter == 0)
            {
                sFadeActive = false;
            }
            break;
    }

    recipZ = 1.0f / kwlnGetMainCamera()->nearPlane;
    alpha = (sFadeCounter * 255) / sFadeDuration;
    i = 0;
    z = RwIm2DGetNearScreenZ() - 100.0f;
    for (; i < 4; i++)
    {
        vertices[i].u.els.scrVertex.z = z;
        vertices[i].u.els.recipZ = recipZ;
        vertices[i].u.els.color.r = 15.0f;
        vertices[i].u.els.color.g = 31.0f;
        vertices[i].u.els.color.b = 40.0f;
        vertices[i].u.els.color.a = (f32)alpha;
    }

    vertices[0].u.els.scrVertex.x = 0.0f;
    vertices[0].u.els.scrVertex.y = 0.0f;
    vertices[1].u.els.scrVertex.x = SCREEN_WIDTH;
    vertices[1].u.els.scrVertex.y = 0.0f;
    vertices[2].u.els.scrVertex.x = 0.0f;
    vertices[2].u.els.scrVertex.y = SCREEN_HEIGHT;
    vertices[3].u.els.scrVertex.x = SCREEN_WIDTH;
    vertices[3].u.els.scrVertex.y = SCREEN_HEIGHT;

    (*setRenderState)(rwRENDERSTATETEXTURERASTER, NULL);
    RwIm2DRenderPrimitive(rwPRIMTYPETRISTRIP, vertices, 4);
}

// FUN_001078a0
static void H_Fade_White()
{
    RwRenderStateSetFunc* setRenderState;
    RwIm2DVertex vertices[4];
    s16 alpha;
    f32 recipZ;
    s16 i;
    f32 z;
    f32 col;
    setRenderState = &rwGlobals.device.setRenderState;

    (*setRenderState)(rwRENDERSTATEZTESTENABLE, (void*)true);
    (*setRenderState)(rwRENDERSTATESHADEMODE, (void*)rwSHADEMODEGOURAUD);
    (*setRenderState)(rwRENDERSTATEZWRITEENABLE, (void*)true);
    (*setRenderState)(rwRENDERSTATESRCBLEND, (void*)rwBLENDSRCALPHA);
    (*setRenderState)(rwRENDERSTATEDESTBLEND, (void*)rwBLENDINVSRCALPHA);
    (*setRenderState)(rwRENDERSTATETEXTUREFILTER, (void*)rwFILTERLINEAR);
    (*setRenderState)(rwRENDERSTATEVERTEXALPHAENABLE, (void*)true);

    switch (sFadeState)
    {
        case HFADE_STATE_INIT_OUT:
            sFadeState = HFADE_STATE_OUT;
            sFadeCounter = 0;
            // fallthrough
        case HFADE_STATE_OUT:
            sFadeCounter++;
            if (sFadeCounter == sFadeDuration)
            {
                sFadeState = HFADE_STATE_HOLD;
            }
            break;

        case HFADE_STATE_HOLD: break;
        
        case HFADE_STATE_INIT_IN: 
            sFadeCounter = sFadeDuration;
            sFadeState = HFADE_STATE_IN;
            break;

        case HFADE_STATE_IN:
            sFadeCounter--;
            if (sFadeCounter == 0)
            {
                sFadeActive = false;
            }
    }
    recipZ = 1.0f / kwlnGetMainCamera()->nearPlane;
    alpha = (sFadeCounter * 255) / sFadeDuration;
    i = 0;
    z = RwIm2DGetNearScreenZ() - 100.0f;
    col = 255.0f;
    for (; i < 4; i++)
    {
        vertices[i].u.els.scrVertex.z = z;
        vertices[i].u.els.recipZ = recipZ;
        vertices[i].u.els.color.r = col;
        vertices[i].u.els.color.g = col;
        vertices[i].u.els.color.b = col;
        vertices[i].u.els.color.a = (f32)alpha;
    }

    vertices[0].u.els.scrVertex.x = 0.0f;
    vertices[0].u.els.scrVertex.y = 0.0f;

    vertices[1].u.els.scrVertex.x = SCREEN_WIDTH;
    vertices[1].u.els.scrVertex.y = 0.0f;

    vertices[2].u.els.scrVertex.x = 0.0f;
    vertices[2].u.els.scrVertex.y = SCREEN_HEIGHT;

    vertices[3].u.els.scrVertex.x = SCREEN_WIDTH;
    vertices[3].u.els.scrVertex.y = SCREEN_HEIGHT;

    (*setRenderState)(rwRENDERSTATETEXTURERASTER, NULL);
    RwIm2DRenderPrimitive(rwPRIMTYPETRISTRIP, vertices, 4);
}

/* W420 sine temporary plus mixed-order mulFirst: nd30,obj1728/window1728 (rate 0.017361) -> nd28,obj1728/window1728 (rate 0.016204). */
/* W421 row classification: verify nd28, object1728/window1728, rate0.016204.
 * Offsets 0x650/0x654/0x658/0x660/0x664/0x668 are
 * mflo $a1 / mflo $a2; sra $v1,$a1,1 / sra $a1,$a2,1;
 * bgez $a1,0x108188 / bgez $a2,0x108188; addiu $v0,$a1,1 / addiu $v0,$a2,1;
 * sra $v1,$v0,1 / sra $a1,$v0,1; and negu $v0,$v1 / negu $v1,$a1.
 * Offsets 0x66c/0x670/0x674/0x678/0x67c are
 * mtc1 $v0,$f0 / addiu $v0,$zero,-0x60; nop / subu $v0,$v0,$a1;
 * cvt.s.w $f13,$f0 / mtc1 $v1,$f0; addiu $v0,$zero,-0x60 / nop;
 * subu $v0,$v0,$v1 / cvt.s.w $f13,$f0. Offset 0x694 is
 * addiu $a1,$a1,0x280 / addiu $a1,$a2,0x280 (candidate / retail):
 * travel/halfTravel register colouring and argument setup. */

// FUN_00107b20
#ifndef PC_BUILD
asm static void H_Fade_Day()
{
  .set noreorder
  .word 0x27bdfe90
  .word 0xffbf0040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050005
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000b
  .word 0x24050006
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000882d
  .word 0x8782b20c
  .word 0x2c410008
  .word 0x102000e7
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24635210
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24020002
  .word 0xa782b20c
  .word 0xa780b214
  .word 0x8782b214
  .word 0x24420001
  .word 0xa782b214
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x8782b210
  .word 0x146200d5
  .word 0x00000000
  .word 0x24020003
  .word 0xa782b20c
  .word 0x100000d1
  .word 0x00000000
  .word 0x8f82b1f0
  .word 0x1440000b
  .word 0x00000000
  .word 0x3c04005d
  .word 0x24843fb0
  .word 0x27a50168
  .word 0x0c040870
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0d3f34
  .word 0x00000000
  .word 0xaf82b1f0
  .word 0xa780b1fc
  .word 0xafa00158
  .word 0xafa00154
  .word 0xafa00150
  .word 0x8f84b1f0
  .word 0x27a50150
  .word 0x0c0d3f7c
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8f84b1f0
  .word 0x0c0d3fdc
  .word 0x00000000
  .word 0x8f84b1f0
  .word 0x0c0d3f4c
  .word 0x00000000
  .word 0x240400ff
  .word 0xa3a4016c
  .word 0xa3a4016d
  .word 0xa3a4016e
  .word 0x8783b1fc
  .word 0x28620064
  .word 0x14400004
  .word 0x00000000
  .word 0xa3a4016f
  .word 0x1000000b
  .word 0x00000000
  .word 0x24620001
  .word 0xa782b1fc
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x00031200
  .word 0x00431823
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001012
  .word 0xa3a2016f
  .word 0x8f84b1f0
  .word 0x27a5016c
  .word 0x0c0d3fe4
  .word 0x00000000
  .word 0x8f84b1f0
  .word 0x24050007
  .word 0x0c0d3f5c
  .word 0x00000000
  .word 0x8782b210
  .word 0xa782b214
  .word 0x10000094
  .word 0x00000000
  .word 0x8f84b1e8
  .word 0x10800004
  .word 0x00000000
  .word 0x0c065408
  .word 0x00000000
  .word 0xaf80b1e8
  .word 0x8f84b1ec
  .word 0x10800004
  .word 0x00000000
  .word 0x0c065408
  .word 0x00000000
  .word 0xaf80b1ec
  .word 0x8782b210
  .word 0xa782b214
  .word 0x8f82b1f0
  .word 0x1440000b
  .word 0x00000000
  .word 0x3c04005d
  .word 0x24843fb0
  .word 0x27a50164
  .word 0x0c040870
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0d3f34
  .word 0x00000000
  .word 0xaf82b1f0
  .word 0xa780b1fc
  .word 0xafa00158
  .word 0xafa00154
  .word 0xafa00150
  .word 0x8f84b1f0
  .word 0x27a50150
  .word 0x0c0d3f7c
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8f84b1f0
  .word 0x0c0d3fdc
  .word 0x00000000
  .word 0x8f84b1f0
  .word 0x0c0d3f4c
  .word 0x00000000
  .word 0x8f84b1f0
  .word 0x24050007
  .word 0x0c0d3f5c
  .word 0x00000000
  .word 0x8f84b1f4
  .word 0x10800004
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0xaf80b1f4
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24423ff0
  .word 0xffa20010
  .word 0x24020223
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05005d
  .word 0x24a53fd0
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xaf82b1f8
  .word 0x24020007
  .word 0xa782b20c
  .word 0x10000049
  .word 0x00000000
  .word 0x8782b214
  .word 0x2442ffff
  .word 0xa782b214
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1440000e
  .word 0x00000000
  .word 0x8f84b1f0
  .word 0x0c0d3f3c
  .word 0x00000000
  .word 0xaf80b1f0
  .word 0xaf80b1e4
  .word 0x8f84b1f4
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0xaf80b1f4
  .word 0x10000035
  .word 0x00000000
  .word 0xafa00158
  .word 0xafa00154
  .word 0xafa00150
  .word 0x8f84b1f0
  .word 0x27a50150
  .word 0x0c0d3f7c
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8f84b1f0
  .word 0x0c0d3fdc
  .word 0x00000000
  .word 0x8f84b1f0
  .word 0x0c0d3f4c
  .word 0x00000000
  .word 0x24110001
  .word 0x10000023
  .word 0x00000000
  .word 0xafa00158
  .word 0xafa00154
  .word 0xafa00150
  .word 0x8f84b1f0
  .word 0x27a50150
  .word 0x0c0d3f7c
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8f84b1f0
  .word 0x0c0d3fdc
  .word 0x00000000
  .word 0x8f84b1f0
  .word 0x0c0d3f4c
  .word 0x00000000
  .word 0x8f84b1f0
  .word 0x24050007
  .word 0x0c0d3f5c
  .word 0x00000000
  .word 0x8f84b1f8
  .word 0x27a50160
  .word 0x0000302d
  .word 0x0c0430e8
  .word 0x00000000
  .word 0xaf82b1f4
  .word 0x8fa20160
  .word 0x14400004
  .word 0x00000000
  .word 0xaf80b1f4
  .word 0x10000004
  .word 0x00000000
  .word 0xaf80b1f8
  .word 0x24020005
  .word 0xa782b20c
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000883
  .word 0x8783b214
  .word 0x00031200
  .word 0x00431823
  .word 0x8782b210
  .word 0x0062001a
  .word 0x00001012
  .word 0x0002343c
  .word 0x0006343f
  .word 0x0000382d
  .word 0x3c020096
  .word 0xc4410088
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000841
  .word 0x3c054170
  .word 0x3c0441f8
  .word 0x3c034220
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x1000000f
  .word 0x00000000
  .word 0x0007143c
  .word 0x0002143f
  .word 0x00021180
  .word 0x005d1021
  .word 0x24420050
  .word 0xe4410008
  .word 0xe4420018
  .word 0xac450020
  .word 0xac440024
  .word 0xac430028
  .word 0xe440002c
  .word 0x24e20001
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0007143c
  .word 0x0002143f
  .word 0x28420004
  .word 0x1440ffee
  .word 0x00000000
  .word 0xafa00050
  .word 0xafa00054
  .word 0x3c034420
  .word 0xafa30090
  .word 0xafa00094
  .word 0xafa000d0
  .word 0x3c0243e0
  .word 0xafa200d4
  .word 0xafa30110
  .word 0xafa20114
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x16200008
  .word 0x00000000
  .word 0x24040004
  .word 0x27a50050
  .word 0x0080302d
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0x1220004d
  .word 0x00000000
  .word 0x8783b20c
  .word 0x24020005
  .word 0x14620029
  .word 0x00000000
  .word 0x8783b214
  .word 0x1060000e
  .word 0x00000000
  .word 0x00031100
  .word 0x00431823
  .word 0x00031080
  .word 0x00431023
  .word 0x00021840
  .word 0x8782b210
  .word 0x0062001a
  .word 0x00001012
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000003
  .word 0x00000000
  .word 0x3c0242b4
  .word 0x44820800
  .word 0xc7808248
  .word 0x46010042
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c02437f
  .word 0x44820800
  .word 0x00000000
  .word 0x46010002
  .word 0x46000024
  .word 0x44030000
  .word 0x3c020024
  .word 0x34422000
  .word 0x00622025
  .word 0x10000003
  .word 0x00000000
  .word 0x3c020024
  .word 0x344420ff
  .word 0x8785b210
  .word 0x8782b214
  .word 0x00a21823
  .word 0x24021388
  .word 0x00621018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00003012
  .word 0x00062843
  .word 0x04c10003
  .word 0x00000000
  .word 0x24c20001
  .word 0x00022843
  .word 0x00051823
  .word 0x2402ffa0
  .word 0x00451023
  .word 0x44830000
  .word 0x00000000
  .word 0x46800360
  .word 0x44820000
  .word 0x00000000
  .word 0x468003a0
  .word 0x3c0242c6
  .word 0x44826000
  .word 0x24c50280
  .word 0x00a0302d
  .word 0x8f87b1f4
  .word 0x0c045034
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0x27bd0170
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_loop_invariants off
// FUN_001081e0
#ifndef PC_BUILD
asm static void H_Fade_Custom()
{
  .set noreorder
  .word 0x27bdfee0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050005
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000b
  .word 0x24050006
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8783b20c
  .word 0x24020005
  .word 0x1062003e
  .word 0x00000000
  .word 0x24020004
  .word 0x10620029
  .word 0x00000000
  .word 0x24020003
  .word 0x10620016
  .word 0x00000000
  .word 0x24020002
  .word 0x10620007
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000039
  .word 0x00000000
  .word 0xa782b20c
  .word 0xa780b214
  .word 0x8782b214
  .word 0x24420001
  .word 0xa782b214
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x8782b210
  .word 0x1462002f
  .word 0x00000000
  .word 0x24020003
  .word 0xa782b20c
  .word 0x1000002b
  .word 0x00000000
  .word 0x8782b210
  .word 0xa782b214
  .word 0x8f84b1e8
  .word 0x10800004
  .word 0x00000000
  .word 0x0c065408
  .word 0x00000000
  .word 0xaf80b1e8
  .word 0x8f84b1ec
  .word 0x10800020
  .word 0x00000000
  .word 0x0c065408
  .word 0x00000000
  .word 0xaf80b1ec
  .word 0x1000001b
  .word 0x00000000
  .word 0x8f84b1e8
  .word 0x10800004
  .word 0x00000000
  .word 0x0c065408
  .word 0x00000000
  .word 0xaf80b1e8
  .word 0x8f84b1ec
  .word 0x10800004
  .word 0x00000000
  .word 0x0c065408
  .word 0x00000000
  .word 0xaf80b1ec
  .word 0x8782b210
  .word 0xa782b214
  .word 0x24020005
  .word 0xa782b20c
  .word 0x10000009
  .word 0x00000000
  .word 0x8782b214
  .word 0x2442ffff
  .word 0xa782b214
  .word 0x0002143c
  .word 0x0002143f
  .word 0x14400002
  .word 0x00000000
  .word 0xaf80b1e4
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000983
  .word 0x8783b214
  .word 0x00031200
  .word 0x00431823
  .word 0x8782b210
  .word 0x0062001a
  .word 0x00001012
  .word 0x0002343c
  .word 0x0006343f
  .word 0x0000502d
  .word 0x9389b208
  .word 0x9388b204
  .word 0x9387b200
  .word 0x3c020096
  .word 0xc4410088
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000941
  .word 0x31250001
  .word 0x44892000
  .word 0x31040001
  .word 0x44881800
  .word 0x30e30001
  .word 0x44871000
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000030
  .word 0x00000000
  .word 0x000a143c
  .word 0x0002143f
  .word 0x00021180
  .word 0x005d1021
  .word 0x24460020
  .word 0xe4c50008
  .word 0xe4c60018
  .word 0x05200004
  .word 0x00000000
  .word 0x46802060
  .word 0x10000007
  .word 0x00000000
  .word 0x00091042
  .word 0x00451025
  .word 0x44820800
  .word 0x00000000
  .word 0x46800860
  .word 0x46010840
  .word 0xe4c10020
  .word 0x05000004
  .word 0x00000000
  .word 0x46801860
  .word 0x10000007
  .word 0x00000000
  .word 0x00081042
  .word 0x00441025
  .word 0x44820800
  .word 0x00000000
  .word 0x46800860
  .word 0x46010840
  .word 0xe4c10024
  .word 0x04e00004
  .word 0x00000000
  .word 0x46801060
  .word 0x10000007
  .word 0x00000000
  .word 0x00071042
  .word 0x00431025
  .word 0x44820800
  .word 0x00000000
  .word 0x46800860
  .word 0x46010840
  .word 0xe4c10028
  .word 0xe4c0002c
  .word 0x25420001
  .word 0x0002543c
  .word 0x000a543f
  .word 0x000a143c
  .word 0x0002143f
  .word 0x28420004
  .word 0x1440ffcd
  .word 0x00000000
  .word 0xafa00020
  .word 0xafa00024
  .word 0x3c034420
  .word 0xafa30060
  .word 0xafa00064
  .word 0xafa000a0
  .word 0x3c0243e0
  .word 0xafa200a4
  .word 0xafa300e0
  .word 0xafa200e4
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x27a50020
  .word 0x0080302d
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0120
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00108570
u32 H_Fade_FadeOut()
{
    if (!sFadeActive)
    {
        sFadeDuration = 15;
        sFadeActive = true;
        sFadeState = HFADE_STATE_INIT_OUT;
        sFadeRed = 0;
        sFadeBlue = 0;
        sFadeGreen = 0;
        sFadeType = HFADE_ANMLR;
    }
    else
    {
        return false;
    }

    return sFadeActive;
}

// FUN_001085c0
u32 H_Fade_FadeIn()
{
    if (sFadeActive && sFadeState == HFADE_STATE_HOLD)
    {
        sFadeDuration = 15;
        sFadeActive = true;
        sFadeState = HFADE_STATE_INIT_IN;

        if (datGetTime() == CALENDAR_TIME_DARK_HOUR && datGetFlag(5138))
        {
            datSetFlag(5138, false);

            sFadeDuration = 40;
            sFadeCounter = 40;
            sFadeType = HFADE_DAY;
        }

        return true;
    }

    return false;
}

// FUN_00108670
void H_Fade_SetType(s16 type)
{
    sFadeType = type;
}

// FUN_00108680
void H_Fade_SetCustomColor(u8 r, u8 g, u8 b)
{
    sFadeRed = r;
    sFadeGreen = g;
    sFadeBlue = b;
}

// FUN_001086a0
void H_Fade_SetDuration(s16 duration)
{
    sFadeDuration = duration;

    if (sFadeCounter > duration)
    {
        sFadeCounter = duration;
    }
}

// FUN_001086d0. Same thing as 'H_Fade_IsFadeOutDone'
u32 H_Fade_IsHolding()
{
    if (sFadeActive && sFadeState == HFADE_STATE_HOLD)
    {
        return true;
    }

    return false;
}

// FUN_00108710. Same thing as 'H_Fade_IsHolding'
u32 H_Fade_IsFadeOutDone()
{
    if (sFadeActive)
    {
        return sFadeState == HFADE_STATE_HOLD;
    }

    return true;
}


#include "h_snd.h"
#include "Kosaka/k_assert.h"
#include "rw/rwplcore.h"
#include "temporary.h"

#define HSND_CHANNEL_COUNT 6
#define HSND_SLOT_COUNT    6
typedef struct HsndBackendControl
{
    u32 flags;               /* 0x00 */
    u32 voiceCount;          /* 0x04 */
    u32 timeout;             /* 0x08 */
    u32 padC;                /* 0x0C */
    u32 pending;             /* 0x10 */
    u8 class;                /* 0x14 */
    u8 pad15[3];
    u32 data18;              /* 0x18 */
    u32 data1C;              /* 0x1C */
    u32 data20;              /* 0x20 */
    u32 data24;              /* 0x24 */
} HsndBackendControl;



static HsndChannel sChannels[16];
static HsndSlotWork sSlotWork[HSND_SLOT_COUNT];
#pragma alias sSlotWork_alt sSlotWork
extern u8 sSlotWork_alt[];
static HsndBackendControl sBackendControls[HSND_CHANNEL_COUNT];
static s16 sBgmRestartCountdown;
 #pragma alias sBgmRestartCountdown_alt sBgmRestartCountdown
 extern s16 sBgmRestartCountdown_alt[];
static void* sChannelData0[HSND_CHANNEL_COUNT];
static void* sChannelData1[HSND_CHANNEL_COUNT];
static void* sChannelData2[HSND_CHANNEL_COUNT];
static void* sChannelData3[HSND_CHANNEL_COUNT];
static u8 sChannelMap[HSND_CHANNEL_COUNT][8];

/* Retail D_005D4014: BGM id is the direct 12-byte-record index. */
static const char* const sBgmAdxStrings[116][3] =
{
    {"01.ADX", NULL, NULL},
    {"01.ADX", NULL, NULL},
    {"26.ADX", NULL, NULL},
    {NULL, NULL, NULL},
    {"26.ADX", NULL, NULL},
    {"26.ADX", NULL, NULL},
    {"26.ADX", NULL, NULL},
    {NULL, NULL, NULL},
    {"26.ADX", NULL, NULL},
    {NULL, NULL, NULL},
    {"26.ADX", NULL, NULL},
    {NULL, NULL, NULL},
    {"26.ADX", NULL, NULL},
    {NULL, NULL, NULL},
    {"26.ADX", NULL, NULL},
    {NULL, NULL, NULL},
    {"26.ADX", NULL, NULL},
    {NULL, NULL, NULL},
    {"26.ADX", NULL, NULL},
    {"19.ADX", NULL, NULL},
    {"20.ADX", NULL, NULL},
    {"21.ADX", NULL, NULL},
    {"22.ADX", NULL, NULL},
    {"23.ADX", NULL, NULL},
    {"24.ADX", NULL, NULL},
    {"25.ADX", NULL, NULL},
    {"26.ADX", NULL, NULL},
    {"27.ADX", NULL, NULL},
    {"28.ADX", NULL, NULL},
    {"29.ADX", NULL, NULL},
    {"30.ADX", NULL, NULL},
    {"31.ADX", NULL, NULL},
    {"32.ADX", NULL, NULL},
    {"26.ADX", NULL, NULL},
    {"26.ADX", NULL, NULL},
    {"35.ADX", NULL, NULL},
    {"36.ADX", NULL, NULL},
    {"37.ADX", NULL, NULL},
    {"38.ADX", NULL, NULL},
    {"39.ADX", NULL, NULL},
    {"40.ADX", NULL, NULL},
    {"THEME.ADX", NULL, NULL},
    {"THEME.ADX", NULL, NULL},
    {"43.ADX", NULL, NULL},
    {"44.ADX", NULL, NULL},
    {"45.ADX", NULL, NULL},
    {"46.ADX", NULL, NULL},
    {"THEME.ADX", NULL, NULL},
    {"THEME.ADX", NULL, NULL},
    {"THEME.ADX", NULL, NULL},
    {"50.ADX", NULL, NULL},
    {"51.ADX", NULL, NULL},
    {"52.ADX", NULL, NULL},
    {"53.ADX", NULL, NULL},
    {"54.ADX", NULL, NULL},
    {"55.ADX", NULL, NULL},
    {"56.ADX", NULL, NULL},
    {"THEME.ADX", NULL, NULL},
    {"THEME.ADX", NULL, NULL},
    {"THEME.ADX", NULL, NULL},
    {"60.ADX", NULL, NULL},
    {"61.ADX", NULL, NULL},
    {"62.ADX", NULL, NULL},
    {"63.ADX", NULL, NULL},
    {"THEME.ADX", NULL, NULL},
    {"THEME.ADX", NULL, NULL},
    {"THEME.ADX", NULL, NULL},
    {"THEME.ADX", NULL, NULL},
    {"THEME.ADX", NULL, NULL},
    {"THEME.ADX", NULL, NULL},
    {"70.ADX", NULL, NULL},
    {"71.ADX", NULL, NULL},
    {"72.ADX", NULL, NULL},
    {"73.ADX", NULL, NULL},
    {"74.ADX", NULL, NULL},
    {"75.ADX", NULL, NULL},
    {"76.ADX", NULL, NULL},
    {"77.ADX", NULL, NULL},
    {"78.ADX", NULL, NULL},
    {"79.ADX", NULL, NULL},
    {"80.ADX", NULL, NULL},
    {"81.ADX", NULL, NULL},
    {"82.ADX", NULL, NULL},
    {"83.ADX", NULL, NULL},
    {"84.ADX", NULL, NULL},
    {"85.ADX", NULL, NULL},
    {"86.ADX", NULL, NULL},
    {"87.ADX", NULL, NULL},
    {"88.ADX", NULL, NULL},
    {"89.ADX", NULL, NULL},
    {"90.ADX", NULL, NULL},
    {"91.ADX", NULL, NULL},
    {"92.ADX", NULL, NULL},
    {"93.ADX", NULL, NULL},
    {"94.ADX", NULL, NULL},
    {"95.ADX", NULL, NULL},
    {"96.ADX", NULL, NULL},
    {"97.ADX", NULL, NULL},
    {"98.ADX", NULL, NULL},
    {"99.ADX", NULL, NULL},
    {"100.ADX", NULL, NULL},
    {"101.ADX", NULL, NULL},
    {"102.ADX", NULL, NULL},
    {"103.ADX", NULL, NULL},
    {"104.ADX", NULL, NULL},
    {"105.ADX", NULL, NULL},
    {"106.ADX", NULL, NULL},
    {"107.ADX", NULL, NULL},
    {"108.ADX", NULL, NULL},
    {"109.ADX", NULL, NULL},
    {"110.ADX", NULL, NULL},
    {"111.ADX", NULL, NULL},
    {"112.ADX", NULL, NULL},
    {"113.ADX", NULL, NULL},
    {"114.ADX", NULL, NULL},
    {"115.ADX", NULL, NULL},
};

/* ACSSND entry points used by the retail sound state machine. */
typedef struct HsndInitParams
{
    f32 outputLevel;
    u32 enabled;
    u32 initialized;
    u32 reserved;
} HsndInitParams;

static HsndInitParams sSndInitParams;

extern const f32 DAT_007cad28;
extern void func_0057f768(void* params);
extern void func_0054cfe8(void);
extern void func_0054d468(void);
extern void func_005497b0(s32 frames);
extern void* func_0054d080(void* control);
extern void func_0054d250(void* handle, s32 value);
extern void func_0054d2e0(void* handle, s32 value);
extern void func_0054d4b8(s32 value);
extern void func_0054d4f0(s32 value);
extern void func_0054d528(s32 value);
extern void* func_0054d030(void* control, void* data0, void* data1);
extern void func_0054d220(void* handle, s32 frames);
extern void func_0054d238(void* handle, s32 value);
extern void func_0054d2b0(void* handle, s32 parameter);
extern u32 D_00960178[];
 #pragma alias H_Snd_FUN_00109df0_s16 H_Snd_FUN_00109df0
 extern u32 H_Snd_FUN_00109df0_s16(s16 slotIndex);

#define HSND_BACKEND_ALLOC(context, flags) \
    (*(void* (**)(void*, u32))D_00960178)((context), (flags))

// opt_loop_invariants on: func_00108740 normalized_diff 472 -> 451, object 1080/1152; off restores 472.
#pragma opt_loop_invariants on
// FUN_00108740
#ifndef PC_BUILD
asm void func_00108740(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0xc7808038
  .word 0x3c02007e
  .word 0xe4404410
  .word 0x24030001
  .word 0x3c02007e
  .word 0xac434414
  .word 0x3c02007e
  .word 0xac434418
  .word 0x3c02007e
  .word 0xac40441c
  .word 0x3c04007e
  .word 0x24844410
  .word 0x0c15fdda
  .word 0x00000000
  .word 0x0c1533fa
  .word 0x00000000
  .word 0x0c15351a
  .word 0x00000000
  .word 0x2404001e
  .word 0x0c1525ec
  .word 0x00000000
  .word 0x3c04007e
  .word 0x248442e0
  .word 0x0000282d
  .word 0x24060028
  .word 0x0c148502
  .word 0x00000000
  .word 0x24040001
  .word 0x3c02007e
  .word 0xa04442f4
  .word 0x3c02007e
  .word 0xac4042f8
  .word 0x3c02007e
  .word 0xac404300
  .word 0x3c02007e
  .word 0xac4042fc
  .word 0x24030003
  .word 0x3c02007e
  .word 0xac4342e0
  .word 0x24030002
  .word 0x3c02007e
  .word 0xac4342e4
  .word 0x3403bb80
  .word 0x3c02007e
  .word 0xac4342e8
  .word 0x3c02007e
  .word 0xac4442f0
  .word 0x3c04007e
  .word 0x248442e0
  .word 0x0c153420
  .word 0x00000000
  .word 0x0040882d
  .word 0x3c100096
  .word 0x26100178
  .word 0x0220202d
  .word 0x3c050004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c03007e
  .word 0xac6243f0
  .word 0x3c03007e
  .word 0xac7143d0
  .word 0x3c04007e
  .word 0x248442e0
  .word 0x0040282d
  .word 0x0220302d
  .word 0x0c15340c
  .word 0x00000000
  .word 0x3c03007e
  .word 0xac624440
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c15348e
  .word 0x00000000
  .word 0x3c02007e
  .word 0x8c444440
  .word 0x2405001e
  .word 0x0c153488
  .word 0x00000000
  .word 0x3c02007e
  .word 0x8c444440
  .word 0x24050023
  .word 0x0c1534ac
  .word 0x00000000
  .word 0x3c02007e
  .word 0x8c444440
  .word 0x2405000f
  .word 0x0c153494
  .word 0x00000000
  .word 0x2404003c
  .word 0x0c15354a
  .word 0x00000000
  .word 0x2404000f
  .word 0x0c15352e
  .word 0x00000000
  .word 0x240400b4
  .word 0x0c15353c
  .word 0x00000000
  .word 0x3c02007e
  .word 0x8c444440
  .word 0x2405000a
  .word 0x0c1534b8
  .word 0x00000000
  .word 0x3c04007e
  .word 0x24844330
  .word 0x0000282d
  .word 0x24060028
  .word 0x0c148502
  .word 0x00000000
  .word 0x24030002
  .word 0x3c02007e
  .word 0xa0434344
  .word 0x3c02007e
  .word 0xac404348
  .word 0x3c02007e
  .word 0xac404350
  .word 0x3c02007e
  .word 0xac40434c
  .word 0x24030003
  .word 0x3c02007e
  .word 0xac434330
  .word 0x24040001
  .word 0x3c02007e
  .word 0xac444334
  .word 0x24035dc0
  .word 0x3c02007e
  .word 0xac434338
  .word 0x3c02007e
  .word 0xac444340
  .word 0x3c04007e
  .word 0x24844330
  .word 0x0c153420
  .word 0x00000000
  .word 0x0040882d
  .word 0x0220202d
  .word 0x3c050004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c03007e
  .word 0xac6243f8
  .word 0x3c02007e
  .word 0xac5143d8
  .word 0x3c02007e
  .word 0xac4046a8
  .word 0x3c04007e
  .word 0x24844358
  .word 0x0000282d
  .word 0x24060028
  .word 0x0c148502
  .word 0x00000000
  .word 0x24030003
  .word 0x3c02007e
  .word 0xa043436c
  .word 0x3c02007e
  .word 0xac404370
  .word 0x3c02007e
  .word 0xac404378
  .word 0x3c02007e
  .word 0xac404374
  .word 0x24030002
  .word 0x3c02007e
  .word 0xac434358
  .word 0x3c02007e
  .word 0xac43435c
  .word 0x24035dc0
  .word 0x3c02007e
  .word 0xac434360
  .word 0x24030001
  .word 0x3c02007e
  .word 0xac434368
  .word 0x3c04007e
  .word 0x24844358
  .word 0x0c153420
  .word 0x00000000
  .word 0x0040882d
  .word 0x0220202d
  .word 0x3c050004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c03007e
  .word 0xac6243fc
  .word 0x3c02007e
  .word 0xac5143dc
  .word 0x3c02007e
  .word 0xac4047dc
  .word 0x3c04007e
  .word 0x24844380
  .word 0x0000282d
  .word 0x24060028
  .word 0x0c148502
  .word 0x00000000
  .word 0x24030003
  .word 0x3c02007e
  .word 0xa0434394
  .word 0x3c02007e
  .word 0xac404398
  .word 0x3c02007e
  .word 0xac4043a0
  .word 0x3c02007e
  .word 0xac40439c
  .word 0x24030002
  .word 0x3c02007e
  .word 0xac434380
  .word 0x3c02007e
  .word 0xac434384
  .word 0x24035dc0
  .word 0x3c02007e
  .word 0xac434388
  .word 0x24030001
  .word 0x3c02007e
  .word 0xac434390
  .word 0x3c04007e
  .word 0x24844380
  .word 0x0c153420
  .word 0x00000000
  .word 0x0040882d
  .word 0x0220202d
  .word 0x3c050004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c03007e
  .word 0xac624400
  .word 0x3c03007e
  .word 0xac7143e0
  .word 0x3c03007e
  .word 0xac604910
  .word 0x0000302d
  .word 0x3c04007e
  .word 0x24845770
  .word 0x1000000c
  .word 0x00000000
  .word 0x00062c3c
  .word 0x00052c3f
  .word 0x00051880
  .word 0x00651821
  .word 0x000318c0
  .word 0x00831821
  .word 0xa4600000
  .word 0xac600008
  .word 0x24c30001
  .word 0x0003343c
  .word 0x0006343f
  .word 0x00061c3c
  .word 0x00031c3f
  .word 0x28630006
  .word 0x1460fff1
  .word 0x00000000
  .word 0x0000382d
  .word 0x24060134
  .word 0x3c05007e
  .word 0x24a54430
  .word 0x2404ffff
  .word 0x1000000c
  .word 0x00000000
  .word 0x00071c3c
  .word 0x00031c3f
  .word 0x00661818
  .word 0x00a31821
  .word 0xac600000
  .word 0xa460000a
  .word 0xa460000c
  .word 0xa4640130
  .word 0x24e30001
  .word 0x00033c3c
  .word 0x00073c3f
  .word 0x00071c3c
  .word 0x00031c3f
  .word 0x28630010
  .word 0x1460fff1
  .word 0x00000000
  .word 0xaf80b21c
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants reset

extern void func_00540ec0(void);
extern void func_0051db00(s32 group, s32 left, s32 right, s32 rear);
extern void func_0054d060(void* handle);
extern void* func_0054d030(void* control, void* data0, void* data1);
extern void func_0054d0a0(void* handle, const char* name);
extern void func_0054d0b8(void* handle, void* data, s16 id);
extern void func_0054d0d0(void* handle, void* data0, void* data1);
extern void func_0054d0e8(void* handle, void* data, s32 parameter);
extern void func_0054d100(void* handle);
extern void func_0054d118(void* handle, s32 value);
extern s32 func_0054d130(void* handle);
extern s32 func_0054d148(void* handle);
extern void func_0054d1a8(void* handle, s32 value);
extern void func_0054d208(void* handle, s32 enabled);
extern void func_0054d220(void* handle, s32 frames);
extern void func_0054d238(void* handle, s32 value);
extern void func_0054d2b0(void* handle, s32 parameter);
extern void func_0054d328(void* handle);
extern void func_0054d3a8(void* handle, s32 value);
extern void func_00102530(void* handle, const char* name);
extern void func_001025c0(void* handle, const char* name);
extern void func_001024a0(void* source, const char* name, s32 flags, void* callback);
extern s32 func_0053c268(void* source);
extern void func_0010d6f0(s16 param1, s16 param2);
extern void func_0010d7b0(s16 param1, s16 param2, void* data0, u32 data0Size,
                           void* data1, u32 data1Size, void* data2, u32 data2Size);
extern s32 func_0010d910(s16 param1);
extern void func_0010da70(s16 bank, s16 cue);
extern void func_0010db60(s32 bank, s32 cue, s32 variant, s32 pan);
extern char D_007E39F0[];
extern u32 D_00960184[];
#define HSND_ALLOC(count, size, flags) (*(void* (**)(u32, u32, u32))D_00960184)(count, size, flags)

static HsndChannel* H_Snd_GetChannel(s32 index)
{
    if (index < 0 || index >= HSND_CHANNEL_COUNT)
    {
        return NULL;
    }

    return &sChannels[index];
}

static void H_Snd_ClearChannel(HsndChannel* channel)
{
    channel->active = false;
    channel->state = HSND_CHANNEL_INACTIVE;
    channel->id = HSND_BGM_NONE;
}

static void H_Snd_ApplyChannelFade(HsndChannel* channel, s32 frames)
{
    if (channel->handle != NULL)
    {
        func_0054d220(channel->handle, frames);
    }
}

// FUN_00108BC0
void func_00108bc0(void)
{
    func_00540ec0();
    func_0051db00(3, 0x80, 0x7F, 0x7F);

    {
        s16 i;

        for (i = 0; i < HSND_SLOT_COUNT; i++)
        {
            func_00108e80(&sSlotWork[i]);
        }
    }

    if (sChannels[0].active != false)
    {
        if (sChannels[0].gate != false && sBgmRestartCountdown_alt[0] != 0)
        {
            sBgmRestartCountdown_alt[0]--;
            if (sBgmRestartCountdown_alt[0] == 0)
            {
                func_0054d118(sChannels[0].handle, true);
            }
        }

        func_0054d3a8(sChannels[0].handle, false);
        {
            s32 status = func_0054d148(sChannels[0].handle);
            if (status == 3)
            {
                sChannels[0].active = false;
            }
            else if (status == 4)
            {
                func_00109070(0);
                H_Snd_00109180(0);
                func_0054d208(sChannels[0].handle, true);
            }
        }
    }

    {
        s32 i;
        s16 compareIndex;
        HsndChannel* channel;
        void** handle;
        s32 status;
        s16* state;

        compareIndex = 2;
        for (i = compareIndex; compareIndex < HSND_SLOT_COUNT; )
        {
            channel = &sChannels[compareIndex];
            if (channel->active != false)
            {
                handle = &channel->handle;
                status = func_0054d148(*handle);
                if (status == 3)
                {
                    channel->active = false;
                }
                else if (status == 4)
                {
                    func_00109070((s16)i);
                    H_Snd_00109180((s16)i);
                    func_0054d208(*handle, true);
                }
                else
                {
                    state = &channel->state;
                    switch (*state)
                    {
                        case HSND_CHANNEL_PLAYING:
                            func_0054d100(*handle);
                            *state = HSND_CHANNEL_STARTING;
                            break;

                        case HSND_CHANNEL_RELEASING:
                            H_Snd_00109180((s16)i);
                            *state = HSND_CHANNEL_STARTING;
                            break;
                    }
                }
            }
            {
                s16 next = (s16)(i + 1);
                i = next;
                compareIndex = (s16)i;
            }
        }
    }
}








/* Retail 0x1091A4-0x109994: reconstructed BGM and backend dispatch logic from retail instructions. */
