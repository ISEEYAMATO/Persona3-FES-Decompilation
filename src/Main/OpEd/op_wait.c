#include "Kernel/Kwln/kwlnTask.h"
#include "Kernel/Kwln/kwln.h"
#include "Kosaka/k_assert.h"
#include "Main/OpEd/op_res.h"
#include "rw/rwcore.h"

#pragma alias D_00960088_abs D_00960088
extern u8 D_00960088_abs[];
extern void func_0021d890(void* destination, const f32* layout);
static inline void opWaitSetPoly(void* destination, f32* points, f32 x, f32 y,
                                 f32 width, f32 height, f32 scaleX, f32 scaleY)
{
    f32 halfW = width * 0.5f;
    f32 halfH = height * 0.5f;
    f32 centerX = x + halfW;
    f32 centerY = y + halfH;
    s32 i;

    points[0] = x;
    points[1] = y;
    points[2] = x + width;
    points[3] = y;
    points[4] = x + width;
    points[5] = y + height;
    points[6] = x;
    points[7] = y + height;
    for (i = 0; i < 4; i++)
    {
        points[i * 2] -= centerX;
        points[i * 2 + 1] -= centerY;
    }
    for (i = 0; i < 4; i++)
    {
        points[i * 2] *= scaleX;
        points[i * 2 + 1] *= scaleY;
    }
    for (i = 0; i < 4; i++)
    {
        points[i * 2] += centerX;
        points[i * 2 + 1] += centerY;
    }
    func_0021d890(destination, points);
}
static inline void opWaitSetPolyPivot(void* destination, f32* points,
                                      f32 width, f32 height, f32 pivotX,
                                      f32 pivotY, f32 scaleX, f32 scaleY)
{
    s32 i;

    points[0] = 0.0f;
    points[1] = 0.0f;
    points[2] = width;
    points[3] = 0.0f;
    points[4] = width;
    points[5] = height;
    points[6] = 0.0f;
    points[7] = height;
    for (i = 0; i < 4; i++)
    {
        points[i * 2] -= pivotX;
        points[i * 2 + 1] -= pivotY;
        points[i * 2] *= scaleX;
        points[i * 2 + 1] *= scaleY;
        points[i * 2] += pivotX;
        points[i * 2 + 1] += pivotY;
    }
    func_0021d890(destination, points);
}
extern f32 func_00269c80(f32 value);
extern f32 func_00269ca0(f32 value);
extern f32 func_0052ea18(f32 y, f32 x);
extern f32 sqrtf(f32 value);
extern f32 D_00960088;
extern u8* DAT_007ce420;
static inline u8 opWaitColorByte(f32 value)
{
    return (u8)(u32)value;
}
static inline void opWaitSetVertex(RwIm2DVertex* vertex, f32 x, f32 y,
                                   f32 u, f32 v, f32 alpha, f32 recipZ)
{
    vertex->u.els.scrVertex.x = x;
    vertex->u.els.scrVertex.y = y;
    vertex->u.els.scrVertex.z = *(f32*)D_00960088_abs;
    vertex->u.els.camVertex_z = 0.0f;
    vertex->u.els.u = u;
    vertex->u.els.v = v;
    vertex->u.els.recipZ = recipZ;
    vertex->u.els.color.r = 255.0f;
    vertex->u.els.color.g = 255.0f;
    vertex->u.els.color.b = 255.0f;
    vertex->u.els.color.a = (f32)opWaitColorByte(alpha);
}
#include "Main/OpEd/op_fade.h"
typedef void (*OpFadeSetRenderState)(u32 state, u32 value);
typedef void (*OpFadeRenderQuad)(void* quad, u32 layer, u32 group, u32 pass, u32 blend);
extern void func_0021d8e0_y2(void* destination, f32* layout);
extern u32 D_00960090_y2[];
extern u32 D_0096009C_y2[];
static OpFadeWork* sWork; // 007ce3bc


#pragma alias func_0021d8e0_y2 func_0021d8e0_y2
#pragma alias func_00198590_y2 func_00198590_y2
#pragma alias func_0021d3b0_y2 func_0021d3b0_y2
#pragma alias func_0021cca0_y2 func_0021cca0_y2
#pragma alias func_0021cce0_y2 func_0021cce0_y2
#pragma alias func_0021eac0_y2 func_0021eac0_y2


void opWait0026ec50(void);
void opWait0026eca0(void);
void opWait0026eed0(void);
void opWait0026edd0(void);
extern void opWait0026ed40(void);
extern void func_0021eae0(void* destination, const f32* layout);
extern void func_0021eac0(void* destination, f32 value);
extern void func_0021eb80(void* destination, const f32* layout);
extern void func_0021d8e0(void* destination, const f32* layout);
extern void func_0021d950(void* destination, const u8* color);
extern void* func_0021cca0(void* resource, u32 index);
extern void* func_0021cce0(void* frame);
#pragma alias opWaitGetTitleResourceU32 func_0021cca0
extern u32 opWaitGetTitleResourceU32(void* resource, u32 index);
#pragma alias opWaitGetTitleFrameU32 func_0021cce0
extern u32 opWaitGetTitleFrameU32(u32 frame);
extern void func_002699d0(void* value);
extern void func_002699a0(void* value);
extern void func_004d7f60(s32 state, u32 value);
#pragma alias opWaitGetTitleRasterU32 opResGetTitleRaster
extern u32 opWaitGetTitleRasterU32(u32 id);
extern u32 D_00960090[];
extern u32 D_0096009C[];
extern void func_00269a10(u32 id, void* callback);
extern void func_00271230(u32* param);
extern void func_002716d0(u32* param);
extern s32 func_00488f30(void);
extern f32 func_0052e878(f32 value);
extern f32 func_0052e6d8(f32 value);
extern f32 func_00269c80(f32 value);
extern f32 func_00269ca0(f32 value);
extern u32 FUN_00269690(s32 mode, s32 index, u32 flags);
extern f32 DAT_007caf38;
extern f32 DAT_007cad84;
extern f32 DAT_007cad94;
extern f32 DAT_007cafec;
extern f32 DAT_007cb080;
extern f32 DAT_007cadb0;
extern f32 DAT_007cb15c;
extern f32 DAT_007cb160;
extern f32 DAT_007cb10c;
extern f32 fGpffff839c;
extern f32 fGpffff81f8;
extern f32 fGpffff8248;
extern f32 fGpffff82fc;
extern f32 fGpffff8294;
extern void* func_00198590(void);

static u32* sOpWait; // DAT_007ce3b8

typedef struct OpWaitPart
{
    s32 startFrame;
    u8 pad_004[0x0c];
    u8 quad[0x100];
} OpWaitPart;

typedef struct OpWaitWork
{
    u32 flags;                  /* 0x0000 */
    s32 mode;                   /* 0x0004 */
    s32 timer;                  /* 0x0008 */
    u32 counters[10];           /* 0x000c..0x0033 */
    u8 reserved_34[0x0c];       /* 0x0034..0x003f */
    u8 quads[14][0x100];        /* 0x0040..0x0e3f */
    OpWaitPart parts[3];        /* 0x0e40..0x116f */
    void* resources[2];         /* 0x1170/0x1174 */
    f32 alpha;                  /* 0x1178 */
} OpWaitWork;
static inline u32 opWaitU32(const u8* work, u32 offset)
{
    return *(const u32*)(work + offset);
}

static inline s32 opWaitS32(const u8* work, u32 offset)
{
    return *(const s32*)(work + offset);
}

static inline void opWaitPutU32(u8* work, u32 offset, u32 value)
{
    *(u32*)(work + offset) = value;
}

static inline void opWaitSetColor(void* quad, f32 alpha, u8* color)
{
    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = (u8)alpha;
    func_0021d950(quad, color);
}

static inline f32 opWaitClamp01(s32 value, s32 begin, s32 end)
{
    if (value < begin)
        return 0.0f;
    if (value < end)
        return (f32)(value - begin) / (f32)(end - begin);
    return 1.0f;
}

// FUN_0026dd10
void opWait0026dd10(u32* param_1)
{
    K_ASSERT(sOpWait == NULL, 0xe2);
    *param_1 = 0;
    sOpWait = param_1;
}

// FUN_0026dd60
void opWait0026dd60(void)
{
    K_ASSERT(sOpWait != NULL, 0xdb);
    if (*sOpWait & 2)
        opWait0026ed40();
    sOpWait = NULL;
}

// FUN_0026DDC0
void opWait0026ddc0(void)
{
    s32* work;

    K_ASSERT(sOpWait != NULL, 0xdb);
    work = (s32*)sOpWait;
    if ((~*work & 1) == 0)
    {
        work[3]++;
        work[3] %= 0x5a;
        work[4]++;
        work[4] %= 0x32;
        work[5]++;
        work[5] %= 0x1e;
        work[6]++;
        work[6] %= 0x2b2;
        work[7]++;
        work[7] %= 0x46;
        work[8]++;
        work[8] %= 0x2b2;
        work[9]++;
        work[9] %= 0x400;
        work[11]++;
        work[11] %= 0x168;
        work[12]++;
        work[12] %= 0x400;

        if ((*work & 8) != 0)
        {
            if (work[10] < 0xbe)
                work[10]++;
            else
                *work &= ~8;
        }

        if ((*work & 4) != 0)
        {
            switch (work[1])
            {
                case 0:
                    if (work[2] < 0xdc)
                        work[2]++;
                    else
                        *work &= ~4;
                    break;
                case 1:
                    if (work[2] < 0xdc)
                        work[2]++;
                    else
                        *work &= ~4;
                    break;
            }
        }
        opWait0026eed0();
    }
}

// FUN_0026E000
#ifndef PC_BUILD
asm void opWait0026e000(void)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82b6c8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ed30
  .word 0x240500db
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f92b6c8
  .word 0x0000202d
  .word 0x0c099b14
  .word 0x00000000
  .word 0x0040a82d
  .word 0x8e430000
  .word 0x00601827
  .word 0x30630001
  .word 0x146001ba
  .word 0x00000000
  .word 0x3c110096
  .word 0x26310090
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050002
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040006
  .word 0x0c099afc
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26440040
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440040
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040007
  .word 0x0c099afc
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440140
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440140
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040008
  .word 0x0c099afc
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440240
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440240
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000032
  .word 0x00000000
  .word 0x00141100
  .word 0x00541021
  .word 0x00021100
  .word 0x02421021
  .word 0x24500e40
  .word 0x24020002
  .word 0x1282000e
  .word 0x00000000
  .word 0x24020001
  .word 0x12820008
  .word 0x00000000
  .word 0x12800003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x24130009
  .word 0x10000005
  .word 0x00000000
  .word 0x2413000a
  .word 0x10000002
  .word 0x00000000
  .word 0x2413000b
  .word 0x0260202d
  .word 0x0c099afc
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c160096
  .word 0x26d6009c
  .word 0x26040010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26940001
  .word 0x2a820003
  .word 0x1440ffcd
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c099afc
  .word 0x00000000
  .word 0x3c110096
  .word 0x26310090
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26440340
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440340
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c099afc
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440440
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440440
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000d
  .word 0x0c099afc
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x8e441170
  .word 0x0c09a674
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x8e441174
  .word 0x0c09a674
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050054
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050013
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440940
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440940
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050026
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440a40
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440a40
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x02a0202d
  .word 0x2405000a
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440b40
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440b40
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050010
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440d40
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440d40
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_0026E780
void opWait0026e780(void)
{
    u8* work;
    void* atlas;
    void* frame;
    f32 layout[8];
    s32 order[3];
    s32 i;
    s32 j;
    s32 k;
    s32 width;
    s32 height;

    K_ASSERT(sOpWait != NULL, 0xdb);
    work = (u8*)sOpWait;
    atlas = opResGetTitleSprite(0);
    kwlnGetMainCamera();
    layout[0] = 0.0f;
    layout[1] = 0.0f;
    layout[2] = 1.0f;
    layout[3] = 1.0f;
    func_0021eae0(work + 0x40, layout);
    func_0021eac0(work + 0x40, 0.0f);
    layout[0] = 0.0f;
    layout[1] = 0.0f;
    layout[2] = 1.0f;
    layout[3] = 1.0f;
    func_0021eae0(work + 0x140, layout);
    func_0021eac0(work + 0x140, 0.0f);
    layout[0] = 0.0f;
    layout[1] = 0.0f;
    layout[2] = 1.0f;
    layout[3] = 1.0f;
    func_0021eae0(work + 0x240, layout);
    func_0021eac0(work + 0x240, 0.0f);
    layout[0] = 0.0f;
    layout[1] = 0.0f;
    layout[2] = 1.0f;
    layout[3] = 1.0f;
    for (i = 0; i < 3; i++)
        order[i] = i;
    for (j = 0; j < 0x10; j++)
    {
        s32 a = (u32)func_00488f30() % 3;
        s32 b = func_00488f30() & 1;
        s32 t;
        if (b < a)
        {
        }
        else
            b++;
        t = order[a];
        order[a] = order[b];
        order[b] = t;
    }
    for (k = 0; k < 3; k++)
    {
        u8* item = work + 0xe40 + (u32)k * 0x110;
        *(u32*)item = (u32)(order[k] * 100 + 0x3c);
        func_0021eae0(item + 0x10, layout);
        func_0021eac0(item + 0x10, 0.0f);
    }
    frame = opResGetTitleRaster(0xc);
    width = *(s32*)((u8*)frame + 0x0c);
    height = *(s32*)((u8*)frame + 0x10);
    layout[0] = 2.0f / (f32)width;
    layout[1] = 2.0f / (f32)height;
    layout[2] = 640.0f / (f32)width;
    layout[3] = 448.0f / (f32)height;
    func_0021eb80(work + 0x340, layout);
    func_0021eac0(work + 0x340, 0.0f);
    layout[0] = 651.0f / (f32)width;
    layout[1] = 2.0f / (f32)height;
    layout[2] = 232.0f / (f32)width;
    layout[3] = 416.0f / (f32)height;
    func_0021eb80(work + 0x440, layout);
    func_0021eac0(work + 0x440, 0.0f);
    layout[0] = 0.0f;
    layout[1] = 0.0f;
    layout[2] = 1.0f;
    layout[3] = 1.0f;
    func_0021eb80(work + 0x840, layout);
    func_0021eac0(work + 0x840, 0.0f);
    frame = func_0021cca0(atlas, 0x13);
    func_0021d3b0(work + 0x940, frame);
    frame = func_0021cca0(atlas, 0x26);
    func_0021d3b0(work + 0xa40, frame);
    frame = func_0021cca0(atlas, 0xa);
    func_0021d3b0(work + 0xb40, frame);
    frame = func_0021cca0(atlas, 0xb);
    func_0021d3b0(work + 0xc40, frame);
    frame = func_0021cca0(atlas, 0x10);
    func_0021d3b0(work + 0xd40, frame);
    opWait0026ec50();
    *(u32*)(work + 0x0c) = 0;
    *(u32*)(work + 0x10) = 0;
    *(u32*)(work + 0x14) = 0;
    *(u32*)(work + 0x18) = 0;
    *(u32*)(work + 0x1c) = 0;
    *(u32*)(work + 0x20) = 0;
    *(u32*)(work + 0x24) = 0;
    *(u32*)(work + 0x28) = 0;
    *(u32*)work |= 8;
    opWait0026eca0();
    opWait0026eed0();
    *(u32*)(work + 0x2c) = 0;
    *(u32*)(work + 0x30) = 0;
    *(u32*)work |= 1;
}

// FUN_0026ebf0
void opWait0026ebf0(void)
{
    u32 uVar1;

    K_ASSERT(sOpWait != NULL, 0xdb);
    uVar1 = *sOpWait & 0xfffffffe;
    *sOpWait = uVar1;
    if (uVar1 & 2)
        opWait0026ed40();
}

// FUN_0026ec50
void opWait0026ec50(void)
{
    u32* work;

    K_ASSERT(sOpWait != NULL, 0xdb);
    work = sOpWait;
    work[2] = 0;
    work[1] = 0;
    *work |= 4;
}

// FUN_0026eca0
void opWait0026eca0(void)
{
    u32* work;
    u32 uVar2;

    K_ASSERT(sOpWait != NULL, 0xdb);
    work = sOpWait;
    if (*work & 2)
        opWait0026ed40();
    uVar2 = FUN_00269690(1, 0xc, 9);
    work[0x45c] = uVar2;
    uVar2 = FUN_00269690(1, 0xc, 9);
    work[0x45d] = uVar2;
    *work |= 2;
}

// FUN_0026ed40
void opWait0026ed40(void)
{
    u8* work;

    K_ASSERT(sOpWait != NULL, 0xdb);
    work = (u8*)sOpWait;
    func_002699a0(*(void**)(work + 0x1170));
    func_002699a0(*(void**)(work + 0x1174));
    opWaitPutU32(work, 0, opWaitU32(work, 0) & ~2u);
}

// FUN_0026edb0
void opWait0026edb0(void)
{
    opWait0026edd0();
}

// FUN_0026edd0
void opWait0026edd0(void)
{
    u32* puVar1;

    K_ASSERT(sOpWait != NULL, 0xdb);
    puVar1 = sOpWait;
    sOpWait[2] = 0;
    puVar1[1] = 1;
    *puVar1 |= 4;
}

// FUN_0026ee30
u32 opWait0026ee30(void)
{
    K_ASSERT(sOpWait != NULL, 0xdb);
    return *sOpWait & 4;
}

// FUN_0026ee80
u32 opWait0026ee80(void)
{
    K_ASSERT(sOpWait != NULL, 0xdb);
    return *sOpWait & 8;
}


// Retail's frame-0x10 overlay uses a dynamic x offset and fixed 256/375/202 geometry.
// Keep the explicit atlas lookup and default-mode alpha path; strict endpoint
// tests in opWaitClamp01 reproduce the retail branch orientation.
// The frame dimensions and mode fallback were previously approximated.
// FUN_0026EED0
#ifndef PC_BUILD
asm void opWait0026eed0(void)
{
  .set noreorder
  .word 0x27bdfed0
  .word 0xffbf00c0
  .word 0x7fbe00b0
  .word 0x7fb700a0
  .word 0x7fb60090
  .word 0x7fb50080
  .word 0x7fb40070
  .word 0x7fb30060
  .word 0x7fb20050
  .word 0x7fb10040
  .word 0x7fb00030
  .word 0xe7bf002c
  .word 0xe7be0028
  .word 0xe7bd0024
  .word 0xe7bc0020
  .word 0xe7bb001c
  .word 0xe7ba0018
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f82b6c8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ed30
  .word 0x240500db
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b6c8
  .word 0x0000202d
  .word 0x0c099b14
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e030004
  .word 0x24020001
  .word 0x1062001e
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000035
  .word 0x00000000
  .word 0x8e020008
  .word 0x04410004
  .word 0x00000000
  .word 0x4480e800
  .word 0x10000012
  .word 0x00000000
  .word 0x28410064
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000f43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482e800
  .word 0x1000001c
  .word 0x00000000
  .word 0x8e020008
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000012
  .word 0x00000000
  .word 0x28410028
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024220
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010741
  .word 0xafa00100
  .word 0xafa00104
  .word 0x3c024420
  .word 0xafa20108
  .word 0x3c0243e0
  .word 0xafa2010c
  .word 0x26040040
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x461d0042
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3012f
  .word 0x26040040
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620020
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000037
  .word 0x00000000
  .word 0x8e020008
  .word 0x2841006e
  .word 0x10200004
  .word 0x00000000
  .word 0x4480e800
  .word 0x10000013
  .word 0x00000000
  .word 0x284100c8
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442ff92
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000f43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482e800
  .word 0x1000001c
  .word 0x00000000
  .word 0x8e020008
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000012
  .word 0x00000000
  .word 0x28410028
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024220
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010741
  .word 0xc600001c
  .word 0x46800060
  .word 0x3c02428c
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010302
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xc7838094
  .word 0x3c023f40
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x46001e1c
  .word 0x24020283
  .word 0x44820000
  .word 0x00000000
  .word 0x468005e0
  .word 0x240201a3
  .word 0x44820000
  .word 0x00000000
  .word 0x468005a0
  .word 0x3c04bf80
  .word 0xafa40100
  .word 0x3c0341e8
  .word 0xafa30104
  .word 0x24020282
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00108
  .word 0xafa3010c
  .word 0xe7a00110
  .word 0x3c0243e0
  .word 0xafa20114
  .word 0xafa40118
  .word 0xafa2011c
  .word 0x0000182d
  .word 0x44820800
  .word 0x10000007
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0xc4400104
  .word 0x46010001
  .word 0xe4400104
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff8
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c023f80
  .word 0x44820800
  .word 0x10000007
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0xc4400104
  .word 0x46010002
  .word 0xe4400104
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff8
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c0243e0
  .word 0x44820800
  .word 0x10000007
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0xc4400104
  .word 0x46010000
  .word 0xe4400104
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff8
  .word 0x00000000
  .word 0x26040140
  .word 0x27a50100
  .word 0x0c087624
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x461d0002
  .word 0x46180042
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3012f
  .word 0x26040140
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x1062001e
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000035
  .word 0x00000000
  .word 0x8e020008
  .word 0x04410004
  .word 0x00000000
  .word 0x4480e800
  .word 0x10000012
  .word 0x00000000
  .word 0x284100c8
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024348
  .word 0x44820000
  .word 0x00000000
  .word 0x46000f43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482e800
  .word 0x1000001c
  .word 0x00000000
  .word 0x8e020008
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000012
  .word 0x00000000
  .word 0x28410014
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010741
  .word 0xc6000020
  .word 0x46800060
  .word 0x240202b2
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000883
  .word 0x3c024352
  .word 0x4482d000
  .word 0x3c02428a
  .word 0x4482c800
  .word 0x3c02c1c0
  .word 0x4482c000
  .word 0x3c02c33c
  .word 0x44820000
  .word 0x44800800
  .word 0x00000000
  .word 0x461a0818
  .word 0x4600171c
  .word 0x3c02c2ba
  .word 0x44820000
  .word 0x00000000
  .word 0x46190818
  .word 0x460016dc
  .word 0xe7bc0100
  .word 0xe7bb0104
  .word 0x3c024380
  .word 0xafa20108
  .word 0xafa2010c
  .word 0x26040240
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x461d0042
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3012f
  .word 0x26040240
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620028
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000a4
  .word 0x00000000
  .word 0x8e020008
  .word 0x04410004
  .word 0x00000000
  .word 0x4480e800
  .word 0x10000012
  .word 0x00000000
  .word 0x2841003c
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024270
  .word 0x44820000
  .word 0x00000000
  .word 0x46000f43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482e800
  .word 0xafa00100
  .word 0xafa00104
  .word 0x3c024420
  .word 0xafa20108
  .word 0x3c0243e0
  .word 0xafa2010c
  .word 0x26040340
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x10000081
  .word 0x00000000
  .word 0x8e030008
  .word 0x04610004
  .word 0x00000000
  .word 0x44800000
  .word 0x10000012
  .word 0x00000000
  .word 0x2861001e
  .word 0x1020000d
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x3c023f80
  .word 0x44821800
  .word 0x00000000
  .word 0x46001f41
  .word 0x04610004
  .word 0x00000000
  .word 0x44801800
  .word 0x1000000e
  .word 0x00000000
  .word 0x28610028
  .word 0x1020000b
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024220
  .word 0x44820000
  .word 0x00000000
  .word 0x460008c3
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0xafa00100
  .word 0xafa00104
  .word 0x3c024420
  .word 0xafa20108
  .word 0xafa0010c
  .word 0xafa20110
  .word 0x3c0243e0
  .word 0xafa20114
  .word 0xafa00118
  .word 0xafa2011c
  .word 0x0000182d
  .word 0x3c02430c
  .word 0x44821000
  .word 0x3c024316
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420100
  .word 0xc4400000
  .word 0x46020001
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010001
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c024090
  .word 0x44820000
  .word 0x3c023f80
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4603011c
  .word 0x3c0240d8
  .word 0x44820000
  .word 0x00000000
  .word 0x46020818
  .word 0x4603005c
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420100
  .word 0xc4400000
  .word 0x46040002
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010002
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c02430c
  .word 0x44821000
  .word 0x3c024316
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420100
  .word 0xc4400000
  .word 0x46020000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x26040340
  .word 0x27a50100
  .word 0x0c087624
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x461d0042
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3012f
  .word 0x26040340
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x1062005c
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000103
  .word 0x00000000
  .word 0x8e030008
  .word 0x28610037
  .word 0x10200004
  .word 0x00000000
  .word 0x4480e800
  .word 0x10000013
  .word 0x00000000
  .word 0x2861003c
  .word 0x1020000e
  .word 0x00000000
  .word 0x2462ffc9
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000f43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482e800
  .word 0x28610037
  .word 0x10200004
  .word 0x00000000
  .word 0x44801000
  .word 0x10000013
  .word 0x00000000
  .word 0x28610064
  .word 0x1020000e
  .word 0x00000000
  .word 0x2462ffc9
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024234
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44821000
  .word 0x46021042
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46020002
  .word 0x46010681
  .word 0x3c02c3b9
  .word 0x44821000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x461a0041
  .word 0x46011702
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x460106c2
  .word 0x2402014f
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x461c0000
  .word 0xe7a00100
  .word 0x3c024200
  .word 0x44820000
  .word 0x00000000
  .word 0x461b0000
  .word 0xe7a00104
  .word 0x3c024368
  .word 0xafa20108
  .word 0x3c0243d0
  .word 0xafa2010c
  .word 0x26040440
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x100000ac
  .word 0x00000000
  .word 0x8e030008
  .word 0x2861000a
  .word 0x10200004
  .word 0x00000000
  .word 0x44800000
  .word 0x10000012
  .word 0x00000000
  .word 0x2861000a
  .word 0x1020000d
  .word 0x00000000
  .word 0x2462fff6
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x44800000
  .word 0x00000000
  .word 0x46000803
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x00000000
  .word 0x46000f41
  .word 0x04610004
  .word 0x00000000
  .word 0x44800800
  .word 0x1000000e
  .word 0x00000000
  .word 0x2861000a
  .word 0x1020000b
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x3c0243fa
  .word 0x44820000
  .word 0x00000000
  .word 0x46010682
  .word 0x3c0243c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010642
  .word 0x04610004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000012
  .word 0x00000000
  .word 0x2861000a
  .word 0x1020000d
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010080
  .word 0x2402014f
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x461a0040
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000f01
  .word 0x3c024200
  .word 0x44820000
  .word 0x00000000
  .word 0x461906c0
  .word 0x3c024368
  .word 0x4482b800
  .word 0x3c0243d0
  .word 0x4482b000
  .word 0x3c0242e8
  .word 0x44820000
  .word 0x00000000
  .word 0x4600e0c0
  .word 0x3c024350
  .word 0x44820000
  .word 0x00000000
  .word 0x4600d840
  .word 0xe7bc0100
  .word 0xe7bb0104
  .word 0x4617e000
  .word 0xe7a00108
  .word 0xe7bb010c
  .word 0xe7a00110
  .word 0x4616d800
  .word 0xe7a00114
  .word 0xe7bc0118
  .word 0xe7a0011c
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420100
  .word 0xc4400000
  .word 0x46030001
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010001
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420100
  .word 0xc4400000
  .word 0x46020002
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46020002
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420100
  .word 0xc4400000
  .word 0x46030000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x26040440
  .word 0x27a50100
  .word 0x0c087624
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x461d0042
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3012f
  .word 0x26040440
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620020
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000037
  .word 0x00000000
  .word 0x8e020008
  .word 0x28410064
  .word 0x10200004
  .word 0x00000000
  .word 0x4480e800
  .word 0x10000013
  .word 0x00000000
  .word 0x284100b4
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442ff9c
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000f43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482e800
  .word 0x1000001c
  .word 0x00000000
  .word 0x8e020008
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000012
  .word 0x00000000
  .word 0x28410014
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010741
  .word 0xc6000010
  .word 0x46800060
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010302
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xc7838094
  .word 0xc78280a4
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600185c
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x461d0002
  .word 0x46010042
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3012f
  .word 0x26040640
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620001
  .word 0x00000000
  .word 0xc600000c
  .word 0x46800060
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46020042
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602085d
  .word 0xc78082fc
  .word 0x460100c2
  .word 0x3c023f00
  .word 0x44821000
  .word 0x00000000
  .word 0x46031001
  .word 0xc7818390
  .word 0x46010001
  .word 0xe7a00100
  .word 0xe7a00104
  .word 0x46031000
  .word 0x46000800
  .word 0xe7a00108
  .word 0xe7a0010c
  .word 0x26040740
  .word 0x27a50100
  .word 0x0c087ab8
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0xa3a2012f
  .word 0x26040740
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620020
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000037
  .word 0x00000000
  .word 0x8e020008
  .word 0x28410028
  .word 0x10200004
  .word 0x00000000
  .word 0x4480e800
  .word 0x10000013
  .word 0x00000000
  .word 0x28410096
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442ffd8
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242dc
  .word 0x44820000
  .word 0x00000000
  .word 0x46000f43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482e800
  .word 0x1000001c
  .word 0x00000000
  .word 0x8e020008
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000012
  .word 0x00000000
  .word 0x28410028
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024220
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010741
  .word 0xe61d1178
  .word 0xc6000014
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x460107c2
  .word 0x4600fb06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xc783846c
  .word 0xc78280c0
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x46001f9c
  .word 0x4600fb06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xc783846c
  .word 0xc78280c0
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x460018dc
  .word 0xafa00100
  .word 0xafa00104
  .word 0x3c024420
  .word 0xafa20108
  .word 0xafa0010c
  .word 0xafa20110
  .word 0x3c0243e0
  .word 0xafa20114
  .word 0xafa00118
  .word 0xafa2011c
  .word 0x0000182d
  .word 0x3c0243a0
  .word 0x44821000
  .word 0x3c024360
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420100
  .word 0xc4400000
  .word 0x46020001
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010001
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420100
  .word 0xc4400000
  .word 0x461e0002
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46030002
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c0243a0
  .word 0x44821000
  .word 0x3c024360
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420100
  .word 0xc4400000
  .word 0x46020000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x26040840
  .word 0x27a50100
  .word 0x0c087624
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x461d0042
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3012f
  .word 0x26040840
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620023
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000042
  .word 0x00000000
  .word 0x8e020008
  .word 0x284100c8
  .word 0x10200004
  .word 0x00000000
  .word 0x4480e800
  .word 0x10000013
  .word 0x00000000
  .word 0x284100dc
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442ff38
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000f43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482e800
  .word 0x4480e000
  .word 0x00000000
  .word 0x4600e6c6
  .word 0x10000024
  .word 0x00000000
  .word 0x8e020008
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000012
  .word 0x00000000
  .word 0x2841000a
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010741
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010702
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x460106c2
  .word 0x0220202d
  .word 0x24050026
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0343af
  .word 0x44830000
  .word 0x00000000
  .word 0x461c0000
  .word 0xe7a00100
  .word 0x24030191
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x461b07c0
  .word 0xe7bf0104
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x26040a40
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x461d0782
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x461e0036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600f024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600f001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3012f
  .word 0x26040a40
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050013
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0343d0
  .word 0x44830000
  .word 0x00000000
  .word 0x461c0000
  .word 0xe7a00100
  .word 0xe7bf0104
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x26040940
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x461e0036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600f024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600f001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3012f
  .word 0x26040940
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620023
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000042
  .word 0x00000000
  .word 0x8e020008
  .word 0x284100aa
  .word 0x10200004
  .word 0x00000000
  .word 0x4480e800
  .word 0x10000013
  .word 0x00000000
  .word 0x284100d2
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442ff56
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024220
  .word 0x44820000
  .word 0x00000000
  .word 0x46000f43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482e800
  .word 0x4480e000
  .word 0x00000000
  .word 0x4600e6c6
  .word 0x10000024
  .word 0x00000000
  .word 0x8e020008
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000012
  .word 0x00000000
  .word 0x2841000a
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010741
  .word 0x3c02c2c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010702
  .word 0x3c02c248
  .word 0x44820000
  .word 0x00000000
  .word 0x460106c2
  .word 0x0220202d
  .word 0x2405000a
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034140
  .word 0x44830000
  .word 0x00000000
  .word 0x461c0000
  .word 0xe7a00100
  .word 0x3c034170
  .word 0x44830000
  .word 0x00000000
  .word 0x461b0000
  .word 0xe7a00104
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00108
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0010c
  .word 0x26040b40
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x461d0042
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3012f
  .word 0x26040b40
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620020
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000037
  .word 0x00000000
  .word 0x8e020008
  .word 0x284100d2
  .word 0x10200004
  .word 0x00000000
  .word 0x4480e800
  .word 0x10000013
  .word 0x00000000
  .word 0x284100dc
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442ff2e
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000f43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482e800
  .word 0x1000001c
  .word 0x00000000
  .word 0x8e020008
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000012
  .word 0x00000000
  .word 0x2841000a
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010741
  .word 0x24020001
  .word 0x10620021
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000039
  .word 0x00000000
  .word 0x8e020008
  .word 0x28410046
  .word 0x10200004
  .word 0x00000000
  .word 0x4480e800
  .word 0x10000013
  .word 0x00000000
  .word 0x28410096
  .word 0x1020000e
  .word 0x00000000
  .word 0x2442ffba
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000f43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482e800
  .word 0x4480d000
  .word 0x1000001d
  .word 0x00000000
  .word 0x8e020008
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000012
  .word 0x00000000
  .word 0x2841001e
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010741
  .word 0x4480d000
  .word 0xc6000018
  .word 0x46800060
  .word 0x240202b2
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x3c02c396
  .word 0x44820000
  .word 0x00000000
  .word 0x460107c2
  .word 0x461fd6c0
  .word 0x0220202d
  .word 0x24050010
  .word 0x0c087328
  .word 0x00000000
  .word 0x24020155
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x461b0000
  .word 0xe7a00100
  .word 0x3c024380
  .word 0xafa20104
  .word 0x3c0243bb
  .word 0xafa20108
  .word 0x3c02434a
  .word 0xafa2010c
  .word 0x26040d40
  .word 0x27a50100
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x461d0042
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3012f
  .word 0x26040d40
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0000882d
  .word 0x100001af
  .word 0x00000000
  .word 0x00111100
  .word 0x00511021
  .word 0x00021100
  .word 0x02021821
  .word 0x24620e40
  .word 0x7fa200f0
  .word 0x8c630e40
  .word 0x8e020024
  .word 0x0043082a
  .word 0x10200004
  .word 0x00000000
  .word 0x4480e800
  .word 0x1000005e
  .word 0x00000000
  .word 0x0043a023
  .word 0x24020002
  .word 0x1222000e
  .word 0x00000000
  .word 0x24020001
  .word 0x12220008
  .word 0x00000000
  .word 0x12200003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x24170064
  .word 0x10000005
  .word 0x00000000
  .word 0x24170064
  .word 0x10000002
  .word 0x00000000
  .word 0x24170064
  .word 0x24020002
  .word 0x1222000e
  .word 0x00000000
  .word 0x24020001
  .word 0x12220008
  .word 0x00000000
  .word 0x12200003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x241300a0
  .word 0x10000005
  .word 0x00000000
  .word 0x241300a0
  .word 0x10000002
  .word 0x00000000
  .word 0x241300a0
  .word 0x24020002
  .word 0x1222000e
  .word 0x00000000
  .word 0x24020001
  .word 0x12220008
  .word 0x00000000
  .word 0x12200003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x241200c8
  .word 0x10000005
  .word 0x00000000
  .word 0x24120064
  .word 0x10000002
  .word 0x00000000
  .word 0x241200c8
  .word 0x0297082a
  .word 0x1020000d
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800060
  .word 0x44970000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000f43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x0293082a
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482e800
  .word 0x10000014
  .word 0x00000000
  .word 0x0292082a
  .word 0x10200010
  .word 0x00000000
  .word 0x02931023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x02531023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010741
  .word 0x10000002
  .word 0x00000000
  .word 0x4480e800
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000001e
  .word 0x00000000
  .word 0x8e020008
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000012
  .word 0x00000000
  .word 0x28410014
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x460106c1
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482d800
  .word 0x24020002
  .word 0x1222001c
  .word 0x00000000
  .word 0x24020001
  .word 0x1222000f
  .word 0x00000000
  .word 0x12200003
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x3c024344
  .word 0x4482d000
  .word 0x3c0242a8
  .word 0x4482c800
  .word 0x3c02c2e6
  .word 0x4482f800
  .word 0x3c024369
  .word 0x4482c000
  .word 0x10000015
  .word 0x00000000
  .word 0x3c0242f6
  .word 0x4482d000
  .word 0x3c02436d
  .word 0x4482c800
  .word 0x3c02c2f6
  .word 0x4482f800
  .word 0x3c0241a8
  .word 0x4482c000
  .word 0x1000000b
  .word 0x00000000
  .word 0x3c02c29a
  .word 0x4482d000
  .word 0x3c02432d
  .word 0x4482c800
  .word 0x2402010f
  .word 0x44820000
  .word 0x00000000
  .word 0x468007e0
  .word 0x3c02423c
  .word 0x4482c000
  .word 0x24020002
  .word 0x1222000e
  .word 0x00000000
  .word 0x24020001
  .word 0x12220008
  .word 0x00000000
  .word 0x12200003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x241200c8
  .word 0x10000005
  .word 0x00000000
  .word 0x24120064
  .word 0x10000002
  .word 0x00000000
  .word 0x241200c8
  .word 0x24020002
  .word 0x12220014
  .word 0x00000000
  .word 0x24020001
  .word 0x1222000b
  .word 0x00000000
  .word 0x12200003
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x3c024380
  .word 0x4482b800
  .word 0x3c024300
  .word 0x4482b000
  .word 0x1000000b
  .word 0x00000000
  .word 0x3c024380
  .word 0x4482b800
  .word 0x3c024300
  .word 0x4482b000
  .word 0x10000005
  .word 0x00000000
  .word 0x3c024380
  .word 0x4482b800
  .word 0x00000000
  .word 0x4600bd86
  .word 0x44800800
  .word 0xafa00100
  .word 0xafa00104
  .word 0x46170800
  .word 0xe7a00108
  .word 0xafa0010c
  .word 0xe7a00110
  .word 0x46160800
  .word 0xe7a00114
  .word 0xafa00118
  .word 0xe7a0011c
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x4601b803
  .word 0xe7a000e8
  .word 0x4601b003
  .word 0x00000000
  .word 0xe7a000ec
  .word 0x24020002
  .word 0x12220010
  .word 0x00000000
  .word 0x24020001
  .word 0x12220009
  .word 0x00000000
  .word 0x12200003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0xc7958470
  .word 0xc794841c
  .word 0x10000007
  .word 0x00000000
  .word 0xc7958470
  .word 0xc794841c
  .word 0x10000003
  .word 0x00000000
  .word 0xc7958470
  .word 0xc794841c
  .word 0x44940000
  .word 0x00000000
  .word 0x46800060
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000f03
  .word 0x4615a001
  .word 0x44800800
  .word 0x00000000
  .word 0x46150818
  .word 0x4600e79c
  .word 0xafa00100
  .word 0xafa00104
  .word 0x46170800
  .word 0xe7a00108
  .word 0xafa0010c
  .word 0xe7a00110
  .word 0x46160800
  .word 0xe7a00114
  .word 0xafa00118
  .word 0xe7a0011c
  .word 0x0000182d
  .word 0x1000000d
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420100
  .word 0xc4410000
  .word 0xc7a000e8
  .word 0x46000801
  .word 0xe4400000
  .word 0xc4410004
  .word 0xc7a000ec
  .word 0x46000801
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff2
  .word 0x00000000
  .word 0x0000a82d
  .word 0x10000026
  .word 0x00000000
  .word 0x001510c0
  .word 0x005d1021
  .word 0x24560100
  .word 0x26de0004
  .word 0x4600f306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xe7a000e4
  .word 0xc7c00000
  .word 0xe7a000e0
  .word 0x4600f306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xc6c10000
  .word 0x4600081a
  .word 0xc7a100e0
  .word 0xc7a000e4
  .word 0x4600081d
  .word 0xe7a000dc
  .word 0x4600f306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xe7a000d8
  .word 0xc6c00000
  .word 0xe7a000d4
  .word 0x4600f306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xc7c10000
  .word 0x4600081a
  .word 0xc7a100d4
  .word 0xc7a000d8
  .word 0x4600085c
  .word 0xc7a000dc
  .word 0xe6c00000
  .word 0xe7c10000
  .word 0x26b50001
  .word 0x2aa20004
  .word 0x1440ffd9
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000d
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420100
  .word 0xc4410000
  .word 0xc7a000e8
  .word 0x46000800
  .word 0xe4400000
  .word 0xc4410004
  .word 0xc7a000ec
  .word 0x46000800
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff2
  .word 0x00000000
  .word 0x461af801
  .word 0x44800800
  .word 0x00000000
  .word 0x461a0818
  .word 0x4600e09c
  .word 0x4619c001
  .word 0x46190818
  .word 0x4600e05c
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420100
  .word 0xc4400000
  .word 0x46020000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x7ba200f0
  .word 0x24440010
  .word 0x27a50100
  .word 0x0c087624
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2012c
  .word 0xa3a2012d
  .word 0xa3a2012e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x461d0002
  .word 0x461b0042
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3012f
  .word 0x7ba200f0
  .word 0x24440010
  .word 0x27a5012c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26310001
  .word 0x2a220003
  .word 0x1440fe50
  .word 0x00000000
  .word 0xafb00124
  .word 0x3c020027
  .word 0x24421230
  .word 0xafa20120
  .word 0x8e041170
  .word 0x27a50120
  .word 0x0c09a684
  .word 0x00000000
  .word 0x3c020027
  .word 0x244216d0
  .word 0xafa20120
  .word 0x8e041174
  .word 0x27a50120
  .word 0x0c09a684
  .word 0x00000000
  .word 0xdfbf00c0
  .word 0x7bbe00b0
  .word 0x7bb700a0
  .word 0x7bb60090
  .word 0x7bb50080
  .word 0x7bb40070
  .word 0x7bb30060
  .word 0x7bb20050
  .word 0x7bb10040
  .word 0x7bb00030
  .word 0xc7bf002c
  .word 0xc7be0028
  .word 0xc7bd0024
  .word 0xc7bc0020
  .word 0xc7bb001c
  .word 0xc7ba0018
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0130
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

static inline RwIm2DVertex* opWaitVertex(u32* param)
{
    u8* stream;

    stream = *(u8**)(uintptr_t)param[0];
    return (RwIm2DVertex*)(stream + param[4] * sizeof(RwIm2DVertex));
}



// FUN_00271230
#ifndef PC_BUILD
asm void func_00271230(u32* param)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7ba0018
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080882d
  .word 0x8c90000c
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000e43
  .word 0xc600002c
  .word 0x46800060
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d43
  .word 0xc6000030
  .word 0x46800060
  .word 0x3c024400
  .word 0x44820000
  .word 0x00000000
  .word 0x46000dc3
  .word 0x3c024420
  .word 0x44820800
  .word 0xc6200004
  .word 0x46000882
  .word 0x3c0243e0
  .word 0x44820800
  .word 0xc6200008
  .word 0x46000842
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46001581
  .word 0x46000d01
  .word 0x4600a306
  .word 0x4600b346
  .word 0x0c14ba86
  .word 0x00000000
  .word 0x46000606
  .word 0x4614a01a
  .word 0x4616b01c
  .word 0x46000584
  .word 0x4600a847
  .word 0x3c024496
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b003
  .word 0x46000840
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010302
  .word 0x0c09a720
  .word 0x00000000
  .word 0x3c0241a0
  .word 0x44820800
  .word 0x00000000
  .word 0x46000882
  .word 0x44800000
  .word 0x00000000
  .word 0x46001036
  .word 0x45010005
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x46001082
  .word 0x3c0243c8
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b043
  .word 0x44800000
  .word 0x00000000
  .word 0x46160018
  .word 0x4601151c
  .word 0x4600b847
  .word 0x3c024420
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b003
  .word 0x46000840
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010302
  .word 0x0c09a720
  .word 0x00000000
  .word 0x44800000
  .word 0x00000000
  .word 0x4600c580
  .word 0x4600b306
  .word 0x0c09a728
  .word 0x00000000
  .word 0x3c0242c8
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600a61c
  .word 0x4600b306
  .word 0x0c09a720
  .word 0x00000000
  .word 0x3c0242c8
  .word 0x44821800
  .word 0x44800800
  .word 0x00000000
  .word 0x46030818
  .word 0x4600a5dc
  .word 0x3c024420
  .word 0x44820800
  .word 0xc6200004
  .word 0x46000882
  .word 0x3c0243e0
  .word 0x44820800
  .word 0xc6200008
  .word 0x46000802
  .word 0x46031681
  .word 0x46030581
  .word 0x4600b306
  .word 0x4600d346
  .word 0x0c14ba86
  .word 0x00000000
  .word 0x46000506
  .word 0x4616b01a
  .word 0x44801000
  .word 0x461ad01c
  .word 0x46000584
  .word 0x4600a847
  .word 0x3c024396
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b003
  .word 0x46000840
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46141018
  .word 0x4601031c
  .word 0x0c09a720
  .word 0x00000000
  .word 0xc6000030
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b003
  .word 0x00000000
  .word 0x00000000
  .word 0x46000b01
  .word 0x0c09a720
  .word 0x00000000
  .word 0xc78382fc
  .word 0x3c024496
  .word 0x44820800
  .word 0x00000000
  .word 0x4601b083
  .word 0xc78181f8
  .word 0x4601a043
  .word 0x46011080
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600185c
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010302
  .word 0x0c09a720
  .word 0x00000000
  .word 0x3c033f00
  .word 0x44830800
  .word 0x44801800
  .word 0x00000000
  .word 0x46011818
  .word 0x4600085c
  .word 0xc782839c
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46010041
  .word 0xc78082fc
  .word 0x46001818
  .word 0x4601109c
  .word 0x8e230010
  .word 0x00032180
  .word 0x8e230000
  .word 0x8c630000
  .word 0x00643021
  .word 0x3c034420
  .word 0x44830800
  .word 0xc6200004
  .word 0x46000902
  .word 0x3c0343e0
  .word 0x44830800
  .word 0xc6200008
  .word 0x460008c2
  .word 0x3c03437f
  .word 0x44830000
  .word 0x00000000
  .word 0x46020042
  .word 0xc6001178
  .word 0x46000842
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44040000
  .word 0x00000000
  .word 0x308400ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x308400ff
  .word 0x308500ff
  .word 0xe4c40000
  .word 0xe4c30004
  .word 0x3c034420
  .word 0x44830000
  .word 0x00000000
  .word 0x4600c003
  .word 0xe4c00010
  .word 0x3c0343e0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600b803
  .word 0xe4c00014
  .word 0x3c03437f
  .word 0xacc30020
  .word 0xacc30024
  .word 0xacc30028
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4c0002c
  .word 0x3c030096
  .word 0xc4600088
  .word 0xe4c00008
  .word 0xe4d90018
  .word 0xdfbf0040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7ba0018
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002716D0
#ifndef PC_BUILD
asm void func_002716d0(u32* param)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7bb001c
  .word 0xe7ba0018
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080882d
  .word 0x8c90000c
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000e83
  .word 0xc600002c
  .word 0x46800060
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000dc3
  .word 0xc6000030
  .word 0x46800060
  .word 0x3c024400
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d83
  .word 0x3c024420
  .word 0x44820800
  .word 0xc6200004
  .word 0x46000e42
  .word 0x3c0243e0
  .word 0x44820800
  .word 0xc6200008
  .word 0x46000e02
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x4600cec1
  .word 0x4600c541
  .word 0x4600ab06
  .word 0x4600db46
  .word 0x0c14ba86
  .word 0x00000000
  .word 0x46000506
  .word 0x4615a81a
  .word 0x461bd81c
  .word 0x46000544
  .word 0x4600b847
  .word 0x3c024496
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a803
  .word 0x46000840
  .word 0xc780846c
  .word 0x46010040
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010302
  .word 0x0c09a720
  .word 0x00000000
  .word 0x4600b047
  .word 0x3c024420
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a803
  .word 0x46000840
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010302
  .word 0x0c09a720
  .word 0x00000000
  .word 0xc7828294
  .word 0x44800800
  .word 0x00000000
  .word 0x46140818
  .word 0x4600155c
  .word 0x4600ab06
  .word 0x0c09a728
  .word 0x00000000
  .word 0x4600ab06
  .word 0x0c09a720
  .word 0x00000000
  .word 0x3c024420
  .word 0x44820800
  .word 0x00000000
  .word 0x4601cdc3
  .word 0x3c0243e0
  .word 0x44821000
  .word 0x00000000
  .word 0x4602c583
  .word 0xc6200004
  .word 0x46000842
  .word 0xc6200008
  .word 0x46001082
  .word 0x44800000
  .word 0x00000000
  .word 0x46000841
  .word 0x46001001
  .word 0x4600001a
  .word 0x4601081c
  .word 0x46000544
  .word 0xc6000030
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a803
  .word 0x00000000
  .word 0x00000000
  .word 0x46000b01
  .word 0x0c09a720
  .word 0x00000000
  .word 0xc78382fc
  .word 0x3c024496
  .word 0x44820800
  .word 0x00000000
  .word 0x4601a883
  .word 0xc78181f8
  .word 0x4601a043
  .word 0x46011080
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600185c
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010302
  .word 0x0c09a720
  .word 0x00000000
  .word 0xc78382fc
  .word 0xc782839c
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600191c
  .word 0x8e230010
  .word 0x00032180
  .word 0x8e230000
  .word 0x8c630000
  .word 0x00641821
  .word 0x3c044420
  .word 0x44840800
  .word 0xc6200004
  .word 0x460008c2
  .word 0x3c0443e0
  .word 0x44840800
  .word 0xc6200008
  .word 0x46000882
  .word 0x3c04434c
  .word 0x44840000
  .word 0x00000000
  .word 0x46040042
  .word 0xc6001178
  .word 0x46000842
  .word 0x3c044f00
  .word 0x44840000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44050000
  .word 0x00000000
  .word 0x30a500ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44050000
  .word 0x3c048000
  .word 0x00a42825
  .word 0x30a500ff
  .word 0x30a700ff
  .word 0xe4630000
  .word 0xe4620004
  .word 0xe4770010
  .word 0xe4760014
  .word 0x3c04437f
  .word 0x44840000
  .word 0x00000000
  .word 0x46040042
  .word 0x3c044f00
  .word 0x44840000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44060000
  .word 0x3c048000
  .word 0x00c43025
  .word 0x30c600ff
  .word 0x04c00006
  .word 0x00000000
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00062842
  .word 0x30c40001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4600020
  .word 0x3c044f00
  .word 0x44840000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44060000
  .word 0x3c048000
  .word 0x00c43025
  .word 0x30c600ff
  .word 0x04c00006
  .word 0x00000000
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00062842
  .word 0x30c40001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4600024
  .word 0x3c044f00
  .word 0x44840000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44060000
  .word 0x3c048000
  .word 0x00c43025
  .word 0x30c600ff
  .word 0x04c00006
  .word 0x00000000
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00062842
  .word 0x30c40001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4600028
  .word 0x04e00006
  .word 0x00000000
  .word 0x44870000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00072842
  .word 0x30e40001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe460002c
  .word 0x3c040096
  .word 0xc4800088
  .word 0xe4600008
  .word 0xe47a0018
  .word 0xdfbf0040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7bb001c
  .word 0xc7ba0018
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00271C10
void func_00271c10(void)
{
    u32* work;

    K_ASSERT(sOpWait != NULL, 0xdb);
    work = sOpWait;
    K_ASSERT((*work & 4) != 0, 0x7fe);
    K_ASSERT(work[1] == 0, 0x7ff);
    if ((s32)work[2] < 0xdc)
    {
        work[2] = 0xdc;
        work[10] = 0xdc;
        *work &= ~8u;
    }
}












// FUN_00271CD0
void func_00271cd0(OpFadeWork* work)
{
    f32 layout[8];

    work->flags = 0;

    layout[0] = 0.0f;
    layout[1] = 0.0f;
    layout[2] = 0.0f;
    layout[3] = 0.0f;
    func_0021eb80(&work->vertices[0], layout);
    layout[0] = 0.0f;
    layout[1] = 0.0f;
    layout[2] = 640.0f;
    layout[3] = 448.0f;
    func_0021d8e0_y2(&work->vertices[0], layout);
    work->state = OPFADE_STATE_START;
    work->timer = 0;
    work->duration = 0;
    work->color.r = 0;
    work->color.g = 0;
    work->color.b = 0;
    work->color.a = 0xff;
    sWork = work;
}








