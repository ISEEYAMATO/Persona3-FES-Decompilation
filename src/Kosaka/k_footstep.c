#include "Kosaka/k_footstep.h"
#include "Kosaka/Field/k_event.h"
#include "Kosaka/Field/k_fldFrame.h"
#include "Graphics/Model/mdlManager.h"
#include "Main/g_data.h"
#include "Scene/mt_scene.h"
#include "Scene/resrcManager.h"
#include "Kosaka/Field/k_field.h"
#include "Kosaka/Field/k_dungeon.h"
#include "h_cdvd.h"
#include "h_fade.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/Field/k_unit.h"
#include "Kernel/Kwln/kwln.h"
#include "rw/rwcore.h"

typedef struct
{
    u32 state;
    u32 mode;

    s32 timer;
    KwlnTask* eplTask;
} FldEffectWork;
typedef struct
{
    u32 state;
    u32 mode;
    u32 kind;
    f32 screenX;
    f32 screenY;
    f32 depth;
    u8 data[0x218];
} FldEffectDrawWork;
typedef struct
{
    u32 state;
    u8 data[0x4c];
    void* resource;
    u8 padding[0xc];
} FldEffectResourceWork;
typedef struct
{
    RwMatrix cameraMatrix;
    f32 translation[4];
    f32 rotationAxis[4];
    f32 inverse[4];
    f32 position[4];
} FootstepEffectScratch;
extern void* func_001a9080(KwlnTask* parent, const char* name, u32 priority, u32 flags);
extern u32 func_001a01c0(void);
extern u32 func_001a0310(void);
extern void* func_0018e5c0(void* owner, const void* data);
extern void* func_001a9180(KwlnTask* task);
extern void* func_001a91b0(KwlnTask* task, const RwV3d* position);
extern void func_001a9390(KwlnTask* task, void* handle, u32 value);
extern u32 func_002ff790(DatUnitGenusBase* genus);
extern void func_0018bee0(void* owner, s32 charId, u32 variant);
extern u8 datPersonaGetLevelByPcId(u16 pcId);
extern void func_0035bc00(s32 arg0, u32 arg1, u32 arg2, u32 arg3);
extern u8 D_006792E0[];
extern u8 D_006799FC[];
extern u8 D_00679A16[];
extern u8 D_00679A30[];
extern u8 D_00679A4A[];
extern u32 datGetMaxHp(s16 pcId);
#include "Kosaka/Field/k_encount.h"
#include "Main/Battle/Data/datUnit.h"
#include "Main/Battle/Data/datPersona.h"
#include "Kosaka/k_assert.h"
#include "Script/scrScriptProcess.h"
#include "libm.h"
extern s32 func_001c0040(void);
extern u8* DAT_007ce4ac;
extern u8* DAT_007ce4b0;
extern u8* DAT_007ce4b4;
extern u8* DAT_007ce4b8;
extern u32 iGpffffb418;
extern s32* PTR_DAT_007cd540;
extern RwMatrix* func_004c38c0(void);
extern void func_004c3880(RwMatrix* matrix);
extern f32 acosf(f32 value);
#pragma alias sDegreesPerRadian D_007CAFA0
extern f32 sDegreesPerRadian;
#pragma alias sEncountAxis D_00683B78
extern RwV3d sEncountAxis;
#pragma alias sEncountForward D_00683B88
extern RwV3d sEncountForward;
extern void* func_001d7d40(KwlnTask* task);
extern void func_001d89b0(KwlnTask* task);
typedef struct EncounterWork
{
    u32 state;
    u32 taskSlot;
    u32 paused;
    void* effectHandle;
    u32 pcCount;
    u32 ecCount;
    FldUnit* pc[4];
    FldUnit* ec[4];
    u32 progress;
    u32 duration;
    u32 reaperFlag;
    u32 totalActive;
    u32 pcTotal;
    u32 ecTotal;
    u32 selectedFlatIndex;
} EncounterWork;
typedef struct EncounterRecord
{
    u32 count;
    u32 ids[3];
} EncounterRecord;
typedef struct PeriodicWork
{
    u32 state;
    u32 disabled;
    u32 initialGate;
    u32 timestamp;
    KwlnTask* scriptTask[16];
    EncounterRecord records[16];
} PeriodicWork;
extern KwlnTask* D_00875A40[3];
extern void func_001a9400(KwlnTask* task, void* handle);
extern void func_00434f70(void);
extern u32 func_001fc720(DatUnit* unit);
extern void func_001fc590(DatUnit* src, DatUnit* dst);
#pragma alias func_002ffb00_u32 func_002ffb00
extern u32 func_002ffb00_u32(DatUnitGenusBase* genus);
extern u16 func_002ffb00(DatUnitGenusBase* genus);
extern void func_0035c1a0(KwlnTask* task, int record);
extern ScrHeader* D_007CE220;
extern void func_001b00c0(KwlnTask* task);




extern void* memset(void* dst, int value, u32 count);
extern s32 func_001de630(s32 charId);
extern s32 func_001ded40(s32 charId);
extern void func_0010a4e0(s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern f32 DAT_00960084;
extern f32 DAT_00960088;
extern f32 DAT_0096008c;
extern u32 func_00318ed0();
#pragma alias func_00318ed0_v3d func_00318ed0
extern s32 func_00318ed0_v3d(u32 model, u32 index, RwV3d* out);
extern u8* FUN_00318b60(u32 model);
void func_001dd530(KwlnTask* task, const RwV3d* position);
extern void func_004c9d00(RwCamera* camera);
extern void func_004c9d10(RwCamera* camera);
extern u8* D_0067EF00[];
extern void (*D_00960090)(u32 state, u32 value);
extern void (*D_00960094)(u32 state, void* value);
extern void (*D_009600A0)(u32 primitive, void* vertices, s32 count);
#pragma alias D_00960090_abs D_00960090
extern u8 D_00960090_abs[];
#pragma alias D_00960094_abs D_00960094
extern u8 D_00960094_abs[];
#pragma alias D_009600A0_abs D_009600A0
extern u8 D_009600A0_abs[];
extern Model* D_008717F0;
extern u8 DAT_008717e8[];
extern u32 D_00875A50[RESRC_ID_MASK + 1];
extern u8 D_006791A0[];
extern u8 D_0067B160[];
extern u8 D_0067CFE0[];
extern u8 D_006799FC[];
extern u8 D_00679A16[];
extern u8 D_00679A30[];
extern u8 D_00679A4A[];
extern const char D_00683BC8[];
extern const char D_00683BE0[];
extern void* func_004d1260(const char* path, s32 mode);
extern u32 D_00875A60[];
extern const char D_00683C00[];
extern const char D_00683C20[];
extern const char D_00683C40[];
extern const char D_00683C60[];
extern const char D_00683C80[];
extern const char D_00683CA0[];
extern const char D_00683CC0[];
extern const char D_00683CE0[];
extern const char D_00683D00[];
extern const char D_00683D20[];
#pragma alias jtbl_0096017C_abs jtbl_0096017C
extern u32 jtbl_0096017C_abs[];
extern void func_004c69f0(RwV3d* output, const RwV3d* input);
extern RwMatrix* func_004c2fb0(RwMatrix* output, RwMatrix* input);
extern void func_004cb750(RwFrame* frame, const RwV3d* translation, s32 mode);
extern void func_004cb890(RwFrame* frame, f32 angle, const RwV3d* axis, s32 mode);
extern f32 func_0052ea00(f32 value);
extern f32 func_0052ea18(f32 x, f32 y);
extern s32 func_00530da0(f32 value);
extern f32 cosf(f32 value);
extern int printf(const char* format, ...);
extern f32 fGpffff8398;
extern f32 fGpffff8420;
extern f32 fGpffff8424;
extern f32 fGpffff8248;
extern const char gp0xffff95e0[];
extern u8 D_007E095E[];
extern u8 D_007E095F[];
extern u8 D_007E0960[];
extern u8 D_007E0961[];
extern u8 D_007E094C[];
extern u8 D_007E094E[];
extern const char D_00683D50[];


typedef s32 (*FootstepAnimSelector)(s32 charId);

static inline u32 K_Footstep_IsFrameWindow(f32 frame, f32 first, f32 second, f32 third, f32 fourth)
{
    return ((frame > first) && (frame < second)) ||
           ((frame > third) && (frame < fourth));
}

static u32 K_Footstep_IsNearPlayer(Model* mdl)
{
    RwMatrix* mdlMat = mdlGetMatrix(mdl);
    RwMatrix* playerMat = mdlGetMatrix(D_008717F0);
    return K_FldEvent_ArePosWithinDist(&mdlMat->pos, &playerMat->pos, 1600.0f) != 0;
}

static void K_Footstep_Play(u16 resTypeId, s32 material, s32 variant)
{
    u16 index = RESRC_GET_ID(resTypeId);
    u32* counter = &D_00875A50[index];

    func_0010a4e0(0, index + 1, variant, material * 4 + *counter);
    *counter += 1;
    if (*counter >= 4)
    {
        *counter = 0;
    }
}

static u32 K_Footstep_Try(Model* mdl, u16 charId, s16 animId, f32 frame,
                           FootstepAnimSelector selector, f32 first, f32 second,
                           f32 third, f32 fourth, u32 needProximity,
                           u16 resTypeId, s32 material, s32 variant)
{
    if (needProximity && !K_Footstep_IsNearPlayer(mdl))
    {
        return 0;
    }
    if (animId != selector(charId))
    {
        return 0;
    }
    if (!K_Footstep_IsFrameWindow(frame, first, second, third, fourth))
    {
        return 0;
    }
    K_Footstep_Play(resTypeId, material, variant);
    return 1;
}
#define K_FOOTSTEP_PLAY_INLINE(resId, mat, var) \
    do { \
        u16 _index = RESRC_GET_ID(resId); \
        u32* _counter = &D_00875A50[_index]; \
        func_0010a4e0(0, (s16)(_index + 1), var, (s16)(mat * 4 + *_counter)); \
        *_counter += 1; \
        if (*_counter >= 4) { \
            *_counter = 0; \
        } \
    } while (0)

#define K_FOOTSTEP_TRY_INLINE(mdl_, charId_, animId_, frame_, selector_, first_, second_, third_, fourth_, proximity_, resId_, mat_, var_) \
    do { \
        u32 _ok = 1; \
        if (proximity_) { \
            RwMatrix* _mdlMat = mdlGetMatrix(mdl_); \
            RwMatrix* _playerMat = mdlGetMatrix(D_008717F0); \
            _ok = K_FldEvent_ArePosWithinDist(&_mdlMat->pos, &_playerMat->pos, 1600.0f) != 0; \
        } \
        if (_ok && (animId_ == selector_(charId_)) && \
            ((frame_ > first_) && (frame_ < second_) || \
             (frame_ > third_) && (frame_ < fourth_))) { \
            K_FOOTSTEP_PLAY_INLINE(resId_, mat_, var_); \
        } \
    } while (0)


static s32 K_Footstep_Surface(Model* mdl, RwV3d* position)
{
    ResrcFldHit* hit;
    const RwV3d* tri[3];
    static const RwV3d normal = {0.0f, 1.0f, 0.0f};
    u32 primary = (u32)gMtScene->fldMajorId;
    u32 secondary = (u32)gMtScene->fldMinorId;
    u8* materialTable;
    s32 material = 0;

    if ((primary >= 0x14) && (primary < 0x1d) && (secondary >= 0x32))
    {
        secondary -= 0x31;
    }
    materialTable = D_0067EF00[primary];
    if (materialTable == NULL)
    {
        return 0;
    }
    material = materialTable[secondary];

    hit = (ResrcFldHit*)MT_Scene_GetResListHead(0x15);
    while (hit != NULL)
    {
        tri[0] = &hit->vertices[0];
        tri[1] = &hit->vertices[1];
        tri[2] = &hit->vertices[2];
        if ((K_FldFrame_IsPointInTriangle(position, tri, &normal) != 0) &&
            (position->y < tri[0]->y + 100.0f) &&
            (position->y > tri[0]->y - 100.0f))
        {
            return hit->unk_14c;
        }

        tri[0] = &hit->vertices[1];
        tri[1] = &hit->vertices[2];
        tri[2] = &hit->vertices[3];
        if ((K_FldFrame_IsPointInTriangle(position, tri, &normal) != 0) &&
            (position->y < tri[0]->y + 100.0f) &&
            (position->y > tri[0]->y - 100.0f))
        {
            return hit->unk_14c;
        }
        hit = (ResrcFldHit*)hit->base.next;
    }
    return material;
}

// Recovered the scene-hit material fallback path and signed 16-bit sound-call arguments.
// Recovered the model-id 4 fallback and the model-id 6 legacy selector paths.
// The remaining case dispatch/code layout still differs from retail.
// FUN_001d9860
#ifndef PC_BUILD
asm void* func_001d9860(KwlnTask* task)
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
  .word 0x8c91003c
  .word 0x8e220004
  .word 0x24040001
  .word 0x14440004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000185
  .word 0x00000000
  .word 0x8e230000
  .word 0x24020004
  .word 0x1062017d
  .word 0x00000000
  .word 0x24020003
  .word 0x10620160
  .word 0x00000000
  .word 0x1064000a
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000177
  .word 0x00000000
  .word 0x8f82b418
  .word 0xae22000c
  .word 0x8e220000
  .word 0x24420001
  .word 0xae220000
  .word 0x8e220008
  .word 0x14400031
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000007
  .word 0x00000000
  .word 0x00101080
  .word 0x02221021
  .word 0x8c420010
  .word 0x10400005
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020010
  .word 0x1440fff8
  .word 0x00000000
  .word 0x2a020010
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843b98
  .word 0x24050072
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x0c074e0c
  .word 0x00000000
  .word 0x38420002
  .word 0x2c420001
  .word 0x10400014
  .word 0x00000000
  .word 0x00101080
  .word 0x00511021
  .word 0x24520010
  .word 0x2404000a
  .word 0x8f85b530
  .word 0x24060002
  .word 0x0c0d6ed0
  .word 0x00000000
  .word 0xae420000
  .word 0x00101900
  .word 0x02231821
  .word 0x0040202d
  .word 0x24650050
  .word 0x0c0d7068
  .word 0x00000000
  .word 0x24020001
  .word 0xae220008
  .word 0x24020003
  .word 0xae220000
  .word 0x8e23000c
  .word 0x8f82b418
  .word 0x00431023
  .word 0x2c410385
  .word 0x14200139
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000007
  .word 0x00000000
  .word 0x00141080
  .word 0x02221021
  .word 0x8c420010
  .word 0x10400005
  .word 0x00000000
  .word 0x26940001
  .word 0x2a820010
  .word 0x1440fff8
  .word 0x00000000
  .word 0x2a820010
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843b98
  .word 0x24050072
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000a82d
  .word 0x00141100
  .word 0x02229021
  .word 0x26560050
  .word 0x02c0202d
  .word 0x0000282d
  .word 0x24060010
  .word 0x0c148502
  .word 0x00000000
  .word 0x24130001
  .word 0x10000021
  .word 0x00000000
  .word 0x0000282d
  .word 0x001310c0
  .word 0x00531023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00438021
  .word 0x8e040048
  .word 0x10800005
  .word 0x00000000
  .word 0x8e020054
  .word 0x10400002
  .word 0x00000000
  .word 0x24050001
  .word 0x0005102b
  .word 0x1040000f
  .word 0x00000000
  .word 0x0c0bfde4
  .word 0x00000000
  .word 0x24040001
  .word 0x1444000a
  .word 0x00000000
  .word 0x960301a8
  .word 0x8e420050
  .word 0x00021080
  .word 0x02421021
  .word 0xac430054
  .word 0x8e420050
  .word 0x24420001
  .word 0xae420050
  .word 0x0080a82d
  .word 0x26730001
  .word 0x2a620004
  .word 0x1440ffde
  .word 0x00000000
  .word 0x12a00010
  .word 0x00000000
  .word 0x00141080
  .word 0x00511021
  .word 0x24500010
  .word 0x2404000a
  .word 0x8f85b530
  .word 0x0000302d
  .word 0x0c0d6ed0
  .word 0x00000000
  .word 0xae020000
  .word 0x0040202d
  .word 0x02c0282d
  .word 0x0c0d7068
  .word 0x00000000
  .word 0x24020003
  .word 0xae220000
  .word 0x0000802d
  .word 0x10000007
  .word 0x00000000
  .word 0x00101080
  .word 0x02221021
  .word 0x8c420010
  .word 0x10400005
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020010
  .word 0x1440fff8
  .word 0x00000000
  .word 0x2a020010
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843b98
  .word 0x24050072
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x0c074e0c
  .word 0x00000000
  .word 0x38420001
  .word 0x2c420001
  .word 0x10400012
  .word 0x00000000
  .word 0x00101080
  .word 0x00511021
  .word 0x24520010
  .word 0x2404000a
  .word 0x8f85b530
  .word 0x24060001
  .word 0x0c0d6ed0
  .word 0x00000000
  .word 0xae420000
  .word 0x00101900
  .word 0x02231821
  .word 0x0040202d
  .word 0x24650050
  .word 0x0c0d7068
  .word 0x00000000
  .word 0x24020003
  .word 0xae220000
  .word 0x0000182d
  .word 0x10000007
  .word 0x00000000
  .word 0x00031080
  .word 0x02221021
  .word 0x8c420010
  .word 0x10400005
  .word 0x00000000
  .word 0x24630001
  .word 0x28620010
  .word 0x1440fff8
  .word 0x00000000
  .word 0x28620010
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843b98
  .word 0x24050072
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000007
  .word 0x00000000
  .word 0x00121080
  .word 0x02221021
  .word 0x8c420010
  .word 0x10400005
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420010
  .word 0x1440fff8
  .word 0x00000000
  .word 0x2a420010
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843b98
  .word 0x24050072
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00121100
  .word 0x02221021
  .word 0x24500050
  .word 0x0200202d
  .word 0x0c0764c4
  .word 0x00000000
  .word 0x10400010
  .word 0x00000000
  .word 0x00121080
  .word 0x00511021
  .word 0x24520010
  .word 0x2404000a
  .word 0x8f85b530
  .word 0x24060004
  .word 0x0c0d6ed0
  .word 0x00000000
  .word 0xae420000
  .word 0x0040202d
  .word 0x0200282d
  .word 0x0c0d7068
  .word 0x00000000
  .word 0x24020003
  .word 0xae220000
  .word 0x0000902d
  .word 0x10000007
  .word 0x00000000
  .word 0x00121080
  .word 0x02221021
  .word 0x8c420010
  .word 0x10400005
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420010
  .word 0x1440fff8
  .word 0x00000000
  .word 0x2a420010
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843b98
  .word 0x24050072
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00121100
  .word 0x02221021
  .word 0x24500050
  .word 0x0200202d
  .word 0x0c076534
  .word 0x00000000
  .word 0x10400010
  .word 0x00000000
  .word 0x00121080
  .word 0x00511021
  .word 0x24520010
  .word 0x2404000a
  .word 0x8f85b530
  .word 0x24060005
  .word 0x0c0d6ed0
  .word 0x00000000
  .word 0xae420000
  .word 0x0040202d
  .word 0x0200282d
  .word 0x0c0d7068
  .word 0x00000000
  .word 0x24020003
  .word 0xae220000
  .word 0x0000902d
  .word 0x10000007
  .word 0x00000000
  .word 0x00121080
  .word 0x02221021
  .word 0x8c420010
  .word 0x10400005
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420010
  .word 0x1440fff8
  .word 0x00000000
  .word 0x2a420010
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843b98
  .word 0x24050072
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00121100
  .word 0x02221021
  .word 0x24500050
  .word 0x0200202d
  .word 0x0c0765a8
  .word 0x00000000
  .word 0x10400010
  .word 0x00000000
  .word 0x00121080
  .word 0x00511021
  .word 0x24520010
  .word 0x2404000a
  .word 0x8f85b530
  .word 0x24060006
  .word 0x0c0d6ed0
  .word 0x00000000
  .word 0xae420000
  .word 0x0040202d
  .word 0x0200282d
  .word 0x0c0d7068
  .word 0x00000000
  .word 0x24020003
  .word 0xae220000
  .word 0x8f82b418
  .word 0xae22000c
  .word 0x1000001e
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000f
  .word 0x00000000
  .word 0x00101080
  .word 0x02221021
  .word 0x24520010
  .word 0x8c440010
  .word 0x0c065518
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000010
  .word 0x00000000
  .word 0xae400000
  .word 0x26100001
  .word 0x2a020010
  .word 0x1440fff0
  .word 0x00000000
  .word 0x8f82b418
  .word 0xae22000c
  .word 0x24020001
  .word 0xae220000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
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
}
#endif /* PC_BUILD: asm function omitted */





static u32 K_Footstep_GameState(void)
{
    return func_001a01c0();
}

// FUN_001d9ee0
void func_001d9ee0(KwlnTask* task)
{
    (*(void (**)(void*))jtbl_0096017C_abs)(task->workData);
}

// FUN_001d9f10
KwlnTask* func_001d9f10(KwlnTask* parent)
{
    PeriodicWork* work;
    if (func_001a01c0() == 0)
    {
        return NULL;
    }
    if (PTR_DAT_007cd540[0] == 0x21)
    {
        return NULL;
    }
    work = (PeriodicWork*)RwCalloc(1, sizeof(PeriodicWork), rwMEMHINTDUR_GLOBAL);
    if (work == NULL)
    {
        return NULL;
    }
    return kwlnTaskCreateWithAutoPriority(parent, 10, "field periodic",
                                          func_001d9860, func_001d9ee0, work);
}
// FUN_001d9fd0
u32 func_001d9fd0(KwlnTask* task)
{
    if (task == NULL)
    {
        return true;
    }
    return (s32)((PeriodicWork*)task->workData)->state > 0;
}

// FUN_001da000
void func_001da000(KwlnTask* task, u32 disabled)
{
    PeriodicWork* work;

    if (task == NULL)
    {
        return;
    }
    work = (PeriodicWork*)task->workData;
    work->disabled = disabled;
    work->timestamp = iGpffffb418;
}

// Reconstructed from the retail window: this is a billboard quad builder,
// not the screen-projection stub that previously stood here. Retail builds
// two 4-vertex quads (stride 0x40) at work+0x20 and work+0x120 with unit UVs
// and per-vertex colour, driven by a 6-entry jump table on work+8 whose case
// mapping was decoded from the retail table at 0x7b6d10 = cases 0/3/5 fade
// (work+0x220 -= 10, alpha from the byte), case 1 wraps at 9 using count>>1,
// cases 2/4 wrap at 5. Still short of the window: retail keeps eight floats
// (f20-f27) live giving a -0x70 frame, and has a second work+8 dispatch near
// offset 1896 that is not yet reconstructed.
/* W422 rejected direct-play probes: both explicit K_Footstep_Play callsites in this update inlined = 7405/10096/9936; first only = 7661/10016/9936; second only = 7642/10016/9936. mdlId reintroduction/order/no-type variants = 6856/9948/9936, 6852/9948/9936, and 2448/9936/9936. Baseline 2335/9936 retained. */
// FUN_001da020
#ifndef PC_BUILD
asm void K_Footstep_Update(Model* mdl, u16 charId, u16 resTypeId)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0b82d
  .word 0x00c0982d
  .word 0x949500d4
  .word 0x949e00d6
  .word 0x0000282d
  .word 0x0c0c6150
  .word 0x00000000
  .word 0x3050ffff
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0c0c6264
  .word 0x00000000
  .word 0x46000506
  .word 0x8f83a850
  .word 0x8c630000
  .word 0x286100c8
  .word 0x10200988
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x24560030
  .word 0x24040015
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040882d
  .word 0x8f83a850
  .word 0x8c640000
  .word 0x8c650004
  .word 0x2c830014
  .word 0x14600008
  .word 0x00000000
  .word 0x2c81001d
  .word 0x10200005
  .word 0x00000000
  .word 0x2ca30032
  .word 0x14600002
  .word 0x00000000
  .word 0x24a5ffcf
  .word 0x00042080
  .word 0x3c030068
  .word 0x2463ef00
  .word 0x00641821
  .word 0x8c630000
  .word 0x14600004
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000004c
  .word 0x00000000
  .word 0x00651821
  .word 0x90720000
  .word 0x10000046
  .word 0x00000000
  .word 0x27a600b0
  .word 0x3c020068
  .word 0xdc433bb8
  .word 0x3c020068
  .word 0xc4403bc0
  .word 0xffa300b0
  .word 0xe7a000b8
  .word 0x2622011c
  .word 0xafa200c0
  .word 0x26220128
  .word 0xafa200c4
  .word 0x26220134
  .word 0xafa200c8
  .word 0x02c0202d
  .word 0x27a500c0
  .word 0x0c06aab4
  .word 0x00000000
  .word 0x24030001
  .word 0x14430012
  .word 0x00000000
  .word 0x8fa300c0
  .word 0xc4630004
  .word 0xc6c20004
  .word 0x3c0342c8
  .word 0x44830800
  .word 0x00000000
  .word 0x46030800
  .word 0x46001034
  .word 0x45000008
  .word 0x00000000
  .word 0x46011801
  .word 0x46001036
  .word 0x45010004
  .word 0x00000000
  .word 0x8e32014c
  .word 0x10000023
  .word 0x00000000
  .word 0x26220128
  .word 0xafa200c0
  .word 0x26220134
  .word 0xafa200c4
  .word 0x26220140
  .word 0xafa200c8
  .word 0x02c0202d
  .word 0x27a500c0
  .word 0x27a600b0
  .word 0x0c06aab4
  .word 0x00000000
  .word 0x24030001
  .word 0x14430012
  .word 0x00000000
  .word 0x8fa300c0
  .word 0xc4630004
  .word 0xc6c20004
  .word 0x3c0342c8
  .word 0x44830800
  .word 0x00000000
  .word 0x46030800
  .word 0x46001034
  .word 0x45000008
  .word 0x00000000
  .word 0x46011801
  .word 0x46001036
  .word 0x45010004
  .word 0x00000000
  .word 0x8e32014c
  .word 0x10000004
  .word 0x00000000
  .word 0x8e3100f8
  .word 0x1620ffba
  .word 0x00000000
  .word 0x32f1ffff
  .word 0x2e21000e
  .word 0x1020091a
  .word 0x00000000
  .word 0x3c04007b
  .word 0x24846cb0
  .word 0x00111880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x14400167
  .word 0x00000000
  .word 0x32a4ffff
  .word 0x24030009
  .word 0x14830127
  .word 0x00000000
  .word 0x33c300ff
  .word 0x2c610009
  .word 0x10200907
  .word 0x00000000
  .word 0x3c04007b
  .word 0x24846c80
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c07798c
  .word 0x00000000
  .word 0x16020034
  .word 0x00000000
  .word 0x3c034120
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034130
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c0341c8
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x450108e8
  .word 0x00000000
  .word 0x3c0341d0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x450008e2
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060001
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x146008ca
  .word 0x00000000
  .word 0xae000000
  .word 0x100008c7
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x160208c2
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x450108b0
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x450008aa
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060001
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x14600892
  .word 0x00000000
  .word 0xae000000
  .word 0x1000088f
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c07798c
  .word 0x00000000
  .word 0x16020034
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c0341b8
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010877
  .word 0x00000000
  .word 0x3c0341c0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45000871
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060001
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x14600859
  .word 0x00000000
  .word 0xae000000
  .word 0x10000856
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x16020851
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x4501083f
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45000839
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060001
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x14600821
  .word 0x00000000
  .word 0xae000000
  .word 0x1000081e
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x16020818
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034120
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010806
  .word 0x00000000
  .word 0x3c0341a0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45000800
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060001
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x146007e8
  .word 0x00000000
  .word 0xae000000
  .word 0x100007e5
  .word 0x00000000
  .word 0x24030001
  .word 0x148307e2
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x160207dc
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x450107ca
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x450007c4
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060001
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x146007ac
  .word 0x00000000
  .word 0xae000000
  .word 0x100007a9
  .word 0x00000000
  .word 0x32a4ffff
  .word 0x24030009
  .word 0x14830072
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c07798c
  .word 0x00000000
  .word 0x16020034
  .word 0x00000000
  .word 0x3c034140
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034150
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c0341c0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x4501078d
  .word 0x00000000
  .word 0x3c0341c8
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45000787
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060001
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x1460076f
  .word 0x00000000
  .word 0xae000000
  .word 0x1000076c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x16020767
  .word 0x00000000
  .word 0x3c0340a0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c0340c0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034150
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010755
  .word 0x00000000
  .word 0x3c034160
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4500074f
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060001
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x14600737
  .word 0x00000000
  .word 0xae000000
  .word 0x10000734
  .word 0x00000000
  .word 0x24030001
  .word 0x14830731
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x1602072b
  .word 0x00000000
  .word 0x3c0340a0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c0340c0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034150
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010719
  .word 0x00000000
  .word 0x3c034160
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45000713
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060001
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x146006fb
  .word 0x00000000
  .word 0xae000000
  .word 0x100006f8
  .word 0x00000000
  .word 0x32a4ffff
  .word 0x24030009
  .word 0x1483003a
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x160206ee
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x450106dc
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x450006d6
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x146006be
  .word 0x00000000
  .word 0xae000000
  .word 0x100006bb
  .word 0x00000000
  .word 0x24030001
  .word 0x148306b8
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x3c0344c8
  .word 0x44836000
  .word 0x26840030
  .word 0x24450030
  .word 0x0c071c7c
  .word 0x00000000
  .word 0x104006a8
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x160206a2
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010690
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4500068a
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x14600672
  .word 0x00000000
  .word 0xae000000
  .word 0x1000066f
  .word 0x00000000
  .word 0x32a4ffff
  .word 0x24030009
  .word 0x1483003a
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x16020665
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010653
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4500064d
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x14600635
  .word 0x00000000
  .word 0xae000000
  .word 0x10000632
  .word 0x00000000
  .word 0x24030001
  .word 0x1483062f
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x3c0344c8
  .word 0x44836000
  .word 0x26840030
  .word 0x24450030
  .word 0x0c071c7c
  .word 0x00000000
  .word 0x1040061f
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x16020619
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010607
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45000601
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x146005e9
  .word 0x00000000
  .word 0xae000000
  .word 0x100005e6
  .word 0x00000000
  .word 0x32a4ffff
  .word 0x24030009
  .word 0x1483003a
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x160205dc
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x450105ca
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x450005c4
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x146005ac
  .word 0x00000000
  .word 0xae000000
  .word 0x100005a9
  .word 0x00000000
  .word 0x24030001
  .word 0x148305a6
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x3c0344c8
  .word 0x44836000
  .word 0x26840030
  .word 0x24450030
  .word 0x0c071c7c
  .word 0x00000000
  .word 0x10400596
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x16020590
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x4501057e
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45000578
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x14600560
  .word 0x00000000
  .word 0xae000000
  .word 0x1000055d
  .word 0x00000000
  .word 0x32a4ffff
  .word 0x24030009
  .word 0x1483003a
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x16020553
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010541
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4500053b
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x14600523
  .word 0x00000000
  .word 0xae000000
  .word 0x10000520
  .word 0x00000000
  .word 0x24030001
  .word 0x1483051d
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x3c0344c8
  .word 0x44836000
  .word 0x26840030
  .word 0x24450030
  .word 0x0c071c7c
  .word 0x00000000
  .word 0x1040050d
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x16020507
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x450104f5
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x450004ef
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x146004d7
  .word 0x00000000
  .word 0xae000000
  .word 0x100004d4
  .word 0x00000000
  .word 0x32a4ffff
  .word 0x24030009
  .word 0x1483003a
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x160204ca
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x450104b8
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x450004b2
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x1460049a
  .word 0x00000000
  .word 0xae000000
  .word 0x10000497
  .word 0x00000000
  .word 0x24030001
  .word 0x14830494
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x3c0344c8
  .word 0x44836000
  .word 0x26840030
  .word 0x24450030
  .word 0x0c071c7c
  .word 0x00000000
  .word 0x10400484
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x1602047e
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x4501046c
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45000466
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x1460044e
  .word 0x00000000
  .word 0xae000000
  .word 0x1000044b
  .word 0x00000000
  .word 0x32a4ffff
  .word 0x24030009
  .word 0x1483003a
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x16020441
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x4501042f
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45000429
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x14600411
  .word 0x00000000
  .word 0xae000000
  .word 0x1000040e
  .word 0x00000000
  .word 0x24030001
  .word 0x1483040b
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x3c0344c8
  .word 0x44836000
  .word 0x26840030
  .word 0x24450030
  .word 0x0c071c7c
  .word 0x00000000
  .word 0x104003fb
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x160203f5
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x450103e3
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x450003dd
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x146003c5
  .word 0x00000000
  .word 0xae000000
  .word 0x100003c2
  .word 0x00000000
  .word 0x32a4ffff
  .word 0x24030009
  .word 0x1483003a
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x160203b8
  .word 0x00000000
  .word 0x3c0340c0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c0340e0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034160
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x450103a6
  .word 0x00000000
  .word 0x3c034170
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x450003a0
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x14600388
  .word 0x00000000
  .word 0xae000000
  .word 0x10000385
  .word 0x00000000
  .word 0x24030001
  .word 0x14830382
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x3c0344c8
  .word 0x44836000
  .word 0x26840030
  .word 0x24450030
  .word 0x0c071c7c
  .word 0x00000000
  .word 0x10400372
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x1602036c
  .word 0x00000000
  .word 0x3c0340c0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c0340e0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034160
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x4501035a
  .word 0x00000000
  .word 0x3c034170
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45000354
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x1460033c
  .word 0x00000000
  .word 0xae000000
  .word 0x10000339
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x1440008a
  .word 0x00000000
  .word 0x32a4ffff
  .word 0x24030009
  .word 0x1483003a
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x1602032b
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010319
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45000313
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x146002fb
  .word 0x00000000
  .word 0xae000000
  .word 0x100002f8
  .word 0x00000000
  .word 0x24030001
  .word 0x148302f5
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x3c0344c8
  .word 0x44836000
  .word 0x26840030
  .word 0x24450030
  .word 0x0c071c7c
  .word 0x00000000
  .word 0x104002e5
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x160202df
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x450102cd
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x450002c7
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x146002af
  .word 0x00000000
  .word 0xae000000
  .word 0x100002ac
  .word 0x00000000
  .word 0x32a4ffff
  .word 0x24030009
  .word 0x1483003a
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x160202a2
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010290
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4500028a
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x14600272
  .word 0x00000000
  .word 0xae000000
  .word 0x1000026f
  .word 0x00000000
  .word 0x24030001
  .word 0x1483026c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x3c0344c8
  .word 0x44836000
  .word 0x26840030
  .word 0x24450030
  .word 0x0c071c7c
  .word 0x00000000
  .word 0x1040025c
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x16020256
  .word 0x00000000
  .word 0x3c0340c0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c0340e0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034160
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010244
  .word 0x00000000
  .word 0x3c034170
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4500023e
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x14600226
  .word 0x00000000
  .word 0xae000000
  .word 0x10000223
  .word 0x00000000
  .word 0x32a4ffff
  .word 0x24030009
  .word 0x1483003a
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x16020219
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010207
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45000201
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x146001e9
  .word 0x00000000
  .word 0xae000000
  .word 0x100001e6
  .word 0x00000000
  .word 0x24030001
  .word 0x148301e3
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x3c0344c8
  .word 0x44836000
  .word 0x26840030
  .word 0x24450030
  .word 0x0c071c7c
  .word 0x00000000
  .word 0x104001d3
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x160201cd
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x450101bb
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x450001b5
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x1460019d
  .word 0x00000000
  .word 0xae000000
  .word 0x1000019a
  .word 0x00000000
  .word 0x32a4ffff
  .word 0x24030009
  .word 0x1483003a
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x16020190
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x4501017e
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45000178
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x14600160
  .word 0x00000000
  .word 0xae000000
  .word 0x1000015d
  .word 0x00000000
  .word 0x24030001
  .word 0x1483015a
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x3c0344c8
  .word 0x44836000
  .word 0x26840030
  .word 0x24450030
  .word 0x0c071c7c
  .word 0x00000000
  .word 0x1040014a
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x16020144
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010132
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4500012c
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x14600114
  .word 0x00000000
  .word 0xae000000
  .word 0x10000111
  .word 0x00000000
  .word 0x32a4ffff
  .word 0x24030009
  .word 0x1483003a
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x16020107
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x450100f5
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x450000ef
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x146000d7
  .word 0x00000000
  .word 0xae000000
  .word 0x100000d4
  .word 0x00000000
  .word 0x24030001
  .word 0x148300d1
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x3c0344c8
  .word 0x44836000
  .word 0x26840030
  .word 0x24450030
  .word 0x0c071c7c
  .word 0x00000000
  .word 0x104000c1
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x160200bb
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x450100a9
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x450000a3
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x1460008b
  .word 0x00000000
  .word 0xae000000
  .word 0x10000088
  .word 0x00000000
  .word 0x32a4ffff
  .word 0x24030009
  .word 0x1483003a
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x1602007e
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x4501006c
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45000066
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x1460004e
  .word 0x00000000
  .word 0xae000000
  .word 0x1000004b
  .word 0x00000000
  .word 0x24030001
  .word 0x14830048
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x3c0344c8
  .word 0x44836000
  .word 0x26840030
  .word 0x24450030
  .word 0x0c071c7c
  .word 0x00000000
  .word 0x10400038
  .word 0x00000000
  .word 0x3210ffff
  .word 0x0220202d
  .word 0x0c077b50
  .word 0x00000000
  .word 0x16020032
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010020
  .word 0x00000000
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4500001a
  .word 0x00000000
  .word 0x3262ffff
  .word 0x304403ff
  .word 0x00041880
  .word 0x3c020087
  .word 0x24425a50
  .word 0x00438021
  .word 0x24820001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00121880
  .word 0x8e020000
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24630001
  .word 0xae030000
  .word 0x28630004
  .word 0x14600002
  .word 0x00000000
  .word 0xae000000
  .word 0xdfbf00a0
  .word 0x7bbe0090
  .word 0x7bb70080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001dc6f0
#ifndef PC_BUILD
asm void* func_001dc6f0(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c90003c
  .word 0x8e030000
  .word 0x24020002
  .word 0x1062006b
  .word 0x00000000
  .word 0x24020001
  .word 0x10620029
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000067
  .word 0x00000000
  .word 0x8e04000c
  .word 0x0c06a460
  .word 0x00000000
  .word 0x10400062
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x27a50020
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20020
  .word 0xe7a10024
  .word 0xe7a00028
  .word 0xc7a10024
  .word 0x3c024370
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00024
  .word 0x8e04000c
  .word 0x0c06a46c
  .word 0x00000000
  .word 0x8e04000c
  .word 0x0040282d
  .word 0x24060005
  .word 0x0c06a4e4
  .word 0x00000000
  .word 0xae000008
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x10000043
  .word 0x00000000
  .word 0x8e020008
  .word 0x28410054
  .word 0x10200038
  .word 0x00000000
  .word 0x28410029
  .word 0x14200030
  .word 0x00000000
  .word 0x0c075060
  .word 0x00000000
  .word 0x0000402d
  .word 0x24050001
  .word 0x3c060087
  .word 0x24c617a0
  .word 0x2403fffd
  .word 0x10000015
  .word 0x00000000
  .word 0x0000382d
  .word 0x000810c0
  .word 0x00481023
  .word 0x00021180
  .word 0x00c22021
  .word 0x8c820048
  .word 0x10400005
  .word 0x00000000
  .word 0x8c820054
  .word 0x10400002
  .word 0x00000000
  .word 0x00a0382d
  .word 0x0007102b
  .word 0x10400005
  .word 0x00000000
  .word 0x8c840054
  .word 0x8c820028
  .word 0x00431024
  .word 0xac820028
  .word 0x25080001
  .word 0x2d020004
  .word 0x1440ffea
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x1462000c
  .word 0x00000000
  .word 0x0c04215c
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0421a8
  .word 0x00000000
  .word 0x24040006
  .word 0x0c04219c
  .word 0x00000000
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x8e020008
  .word 0x24420001
  .word 0xae020008
  .word 0x10000008
  .word 0x00000000
  .word 0x24620001
  .word 0xae020000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001dc8e0
void func_001dc8e0(KwlnTask* task)
{
    (*(void (**)(void*))jtbl_0096017C_abs)(task->workData);
}

// FUN_001dc910
KwlnTask* func_001dc910(KwlnTask* parent, u32 mode)
{
    KwlnTask* task;
    FldEffectWork* work;

    work = (FldEffectWork*)RwCalloc(1, sizeof(FldEffectWork), rwMEMHINTDUR_GLOBAL);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreateWithAutoPriority(parent, 10, D_00683BC8,
                                          func_001dc6f0, func_001dc8e0, work);
    work->mode = mode;
    if (mode == 0)
    {
        work->eplTask = (KwlnTask*)func_001a9080(task, D_00683BE0, 0x53, 0);
    }
    else if (mode == 1)
    {
        work->eplTask = (KwlnTask*)func_001a9080(task, D_00683BE0, 0x32, 0);
    }
    return task;
}

// FUN_001dca10
void func_001dca10(void)
{
    HCdvd* cdvd;

    cdvd = H_Cdvd_Request(D_00683C00, 1);
    H_Cdvd_ReadSync(cdvd);
    D_00875A60[0] = (u32)func_004d1260(D_00683C20, 0);
    D_00875A60[1] = (u32)func_004d1260(D_00683C40, 0);
    D_00875A60[2] = (u32)func_004d1260(D_00683C60, 0);
    D_00875A60[3] = (u32)func_004d1260(D_00683C80, 0);
    D_00875A60[4] = (u32)func_004d1260(D_00683CA0, 0);
    D_00875A60[5] = (u32)func_004d1260(D_00683CC0, 0);
    D_00875A60[6] = (u32)func_004d1260(D_00683CE0, 0);
    D_00875A60[7] = (u32)func_004d1260(D_00683D00, 0);
    D_00875A60[8] = (u32)func_004d1260(D_00683D20, 0);
    H_Cdvd_Destroy(cdvd);
}

// FUN_001dcb60
#ifndef PC_BUILD
asm void* func_001dcb60(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0050
  .word 0x7fb20040
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
  .word 0x0080802d
  .word 0x8c92003c
  .word 0x0c066164
  .word 0x00000000
  .word 0xc4420080
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020043
  .word 0x00000000
  .word 0x00000000
  .word 0x8e420000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000207
  .word 0x00000000
  .word 0x8e440224
  .word 0x10800041
  .word 0x00000000
  .word 0x24050002
  .word 0x27a60060
  .word 0x0c0c63b4
  .word 0x00000000
  .word 0x14400012
  .word 0x00000000
  .word 0x8e440224
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20060
  .word 0xe7a10064
  .word 0xe7a00068
  .word 0xc7a10064
  .word 0x3c0242f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00064
  .word 0x10000007
  .word 0x00000000
  .word 0xc7a10064
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00064
  .word 0x0200202d
  .word 0x27a50060
  .word 0x0c07754c
  .word 0x00000000
  .word 0x3c020096
  .word 0xc459008c
  .word 0x3c020096
  .word 0xc45b0088
  .word 0x0c066164
  .word 0x00000000
  .word 0xc45a0084
  .word 0x0c066164
  .word 0x00000000
  .word 0xc4440080
  .word 0xc6430014
  .word 0x4619d841
  .word 0x461a2001
  .word 0x46000843
  .word 0x461a1801
  .word 0x46010082
  .word 0x46032043
  .word 0x44800000
  .word 0x00000000
  .word 0x46190018
  .word 0x4602085c
  .word 0xe6410014
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe6400014
  .word 0xc6420014
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020043
  .word 0xc640000c
  .word 0x3c02c200
  .word 0x44821800
  .word 0x00000000
  .word 0x46030034
  .word 0x45010011
  .word 0x00000000
  .word 0xc6440010
  .word 0x46032034
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c024420
  .word 0x44821800
  .word 0x00000000
  .word 0x46030036
  .word 0x45000007
  .word 0x00000000
  .word 0x3c0243e0
  .word 0x44821800
  .word 0x00000000
  .word 0x46032036
  .word 0x45010004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100001aa
  .word 0x00000000
  .word 0x640200ff
  .word 0x8e430008
  .word 0x2c610006
  .word 0x102000b8
  .word 0x00000000
  .word 0x3c04007b
  .word 0x24846d10
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x8e420220
  .word 0x2442fff6
  .word 0xae420220
  .word 0x92420220
  .word 0xc640000c
  .word 0x46000606
  .word 0xc6570010
  .word 0x3c034200
  .word 0x44831800
  .word 0x00000000
  .word 0x46001d80
  .word 0x46000546
  .word 0x46171d00
  .word 0x100000a2
  .word 0x00000000
  .word 0x8e430220
  .word 0x24630001
  .word 0xae430220
  .word 0x2c610009
  .word 0x14200002
  .word 0x00000000
  .word 0xae400220
  .word 0x8e430220
  .word 0x00032842
  .word 0xc640000c
  .word 0x04a00006
  .word 0x00000000
  .word 0x44851800
  .word 0x00000000
  .word 0x468018e0
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44841800
  .word 0x00000000
  .word 0x468018e0
  .word 0x460318c0
  .word 0x46030540
  .word 0x4600ae06
  .word 0xc6450010
  .word 0x04a00006
  .word 0x00000000
  .word 0x44851800
  .word 0x00000000
  .word 0x468018e0
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44841800
  .word 0x00000000
  .word 0x468018e0
  .word 0x460318c0
  .word 0x46032dc0
  .word 0x3c034200
  .word 0x44831800
  .word 0x00000000
  .word 0x46001900
  .word 0x04a00006
  .word 0x00000000
  .word 0x44851800
  .word 0x00000000
  .word 0x468018e0
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44841800
  .word 0x00000000
  .word 0x468018e0
  .word 0x460318c0
  .word 0x46032581
  .word 0x3c034200
  .word 0x44831800
  .word 0x00000000
  .word 0x46051900
  .word 0x04a00006
  .word 0x00000000
  .word 0x44851800
  .word 0x00000000
  .word 0x468018e0
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44841800
  .word 0x00000000
  .word 0x468018e0
  .word 0x460318c0
  .word 0x46032501
  .word 0x10000050
  .word 0x00000000
  .word 0x8e430220
  .word 0x24630001
  .word 0xae430220
  .word 0x2c610005
  .word 0x14200002
  .word 0x00000000
  .word 0xae400220
  .word 0x8e450220
  .word 0xc640000c
  .word 0x04a00006
  .word 0x00000000
  .word 0x44851800
  .word 0x00000000
  .word 0x468018e0
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44841800
  .word 0x00000000
  .word 0x468018e0
  .word 0x460318c0
  .word 0x46030540
  .word 0x4600ae06
  .word 0xc6450010
  .word 0x04a00006
  .word 0x00000000
  .word 0x44851800
  .word 0x00000000
  .word 0x468018e0
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44841800
  .word 0x00000000
  .word 0x468018e0
  .word 0x460318c0
  .word 0x46032dc0
  .word 0x3c034200
  .word 0x44831800
  .word 0x00000000
  .word 0x46001900
  .word 0x04a00006
  .word 0x00000000
  .word 0x44851800
  .word 0x00000000
  .word 0x468018e0
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44841800
  .word 0x00000000
  .word 0x468018e0
  .word 0x460318c0
  .word 0x46032581
  .word 0x3c034200
  .word 0x44831800
  .word 0x00000000
  .word 0x46051900
  .word 0x04a00006
  .word 0x00000000
  .word 0x44851800
  .word 0x00000000
  .word 0x468018e0
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44841800
  .word 0x00000000
  .word 0x468018e0
  .word 0x460318c0
  .word 0x46032501
  .word 0xe6400020
  .word 0xc6400010
  .word 0xe6400024
  .word 0xe6420028
  .word 0xc640000c
  .word 0x3c034200
  .word 0x44831800
  .word 0x00000000
  .word 0x46001800
  .word 0xe6400060
  .word 0xc6400010
  .word 0xe6400064
  .word 0xe6420068
  .word 0xc640000c
  .word 0xe64000a0
  .word 0xc6400010
  .word 0x46001800
  .word 0xe64000a4
  .word 0xe64200a8
  .word 0xc640000c
  .word 0x46001800
  .word 0xe64000e0
  .word 0xc6400010
  .word 0x46001800
  .word 0xe64000e4
  .word 0xe64200e8
  .word 0xe6410038
  .word 0xe6410078
  .word 0xe64100b8
  .word 0xe64100f8
  .word 0xae400030
  .word 0xae400034
  .word 0x3c033f80
  .word 0xae430070
  .word 0xae400074
  .word 0xae4000b0
  .word 0xae4300b4
  .word 0xae4300f0
  .word 0xae4300f4
  .word 0xe6580120
  .word 0xe6570124
  .word 0xe6420128
  .word 0xe6560160
  .word 0xe6570164
  .word 0xe6420168
  .word 0xe65501a0
  .word 0xe65401a4
  .word 0xe64201a8
  .word 0xe65601e0
  .word 0xe65401e4
  .word 0xe64201e8
  .word 0xe6410138
  .word 0xe6410178
  .word 0xe64101b8
  .word 0xe64101f8
  .word 0xae400130
  .word 0xae400134
  .word 0xae430170
  .word 0xae400174
  .word 0xae4001b0
  .word 0xae4301b4
  .word 0xae4301f0
  .word 0xae4301f4
  .word 0x0000382d
  .word 0x3c05437f
  .word 0x30440001
  .word 0x44820800
  .word 0x10000017
  .word 0x00000000
  .word 0x00071980
  .word 0x02433021
  .word 0xacc50040
  .word 0xacc50044
  .word 0xacc50048
  .word 0xacc5004c
  .word 0xacc50140
  .word 0xacc50144
  .word 0xacc50148
  .word 0x04400004
  .word 0x00000000
  .word 0x46800820
  .word 0x10000007
  .word 0x00000000
  .word 0x00021842
  .word 0x00641825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4c0014c
  .word 0x24e70001
  .word 0x28e30004
  .word 0x1460ffe8
  .word 0x00000000
  .word 0x8e420004
  .word 0x10400012
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x2404000e
  .word 0x27a5006c
  .word 0x3c020096
  .word 0x8c420094
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000e
  .word 0x0000282d
  .word 0x3c020096
  .word 0x8c420090
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c110096
  .word 0x26310090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e420004
  .word 0x10400008
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x8e420008
  .word 0x2c410006
  .word 0x10200021
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636cf0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c425a60
  .word 0x24040001
  .word 0x8c450000
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c425a7c
  .word 0x24040001
  .word 0x8c450000
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c425a80
  .word 0x24040001
  .word 0x8c450000
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x261000a0
  .word 0x24040004
  .word 0x26450020
  .word 0x0080302d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e420008
  .word 0x00021880
  .word 0x3c020087
  .word 0x24425a64
  .word 0x00431021
  .word 0x8c420000
  .word 0x24040001
  .word 0x8c450000
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x26450120
  .word 0x0080302d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e420004
  .word 0x1040000b
  .word 0x00000000
  .word 0x2404000e
  .word 0x8fa5006c
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb20040
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
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001dd430
void func_001dd430(KwlnTask* task)
{
    (*(void (**)(void*))jtbl_0096017C_abs)(task->workData);
}

/* W328 hand probe: valid=0 before unit pointer plus opt_loop_invariants on; off nd278/obj524, on nd273/obj516 (original order off nd295/obj524). */
// FUN_001dd460
KwlnTask* func_001dd460(KwlnTask* parent, void* data, u32 kind)
{
    FldEffectDrawWork* work;
    KwlnTask* task;
    work = (FldEffectDrawWork*)RwCalloc(1, sizeof(FldEffectDrawWork), rwMEMHINTDUR_GLOBAL);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreate(parent, "field draw effect", kind,
                          func_001dcb60, func_001dd430, work);
    work->kind = (u32)data;
    if (kind == 0x1058)
    {
        work->mode = 1;
    }
    else
    {
        work->mode = 0;
    }
    return task;
}

// FUN_001dd530
void func_001dd530(KwlnTask* task, const RwV3d* position)
{
    FldEffectDrawWork* work;
    RwV3d view;
    RwMatrix* viewMatrix;
    work = (FldEffectDrawWork*)task->workData;
    viewMatrix = &kwlnGetMainCamera()->viewMatrix;
    RwV3dTransformPoint(&view, position, viewMatrix);
    work->screenX = 640.0f * (view.x / view.z) - 16.0f;
    work->screenY = 448.0f * (view.y / view.z) - 16.0f;
    work->depth = view.z;
}

// FUN_001dd5e0
void func_001dd5e0(KwlnTask* task, u32 value)
{
    *(u32*)task->workData = value;
}

// FUN_001dd5f0
void func_001dd5f0(KwlnTask* task, u32 value)
{
    *(u32*)((u8*)task->workData + 0x224) = value;
}

static u32 K_Footstep_StatusResult(u32 mode)
{
    u32 state = K_Footstep_GameState();
    if (mode == 1)
    {
        if (datGetScenarioMode() == SCENARIO_MODE_JOURNEY && (state == 4 || state == 5))
        {
            return datGetFlag(0xC35) == 0;
        }
        return func_001a0310() == 1 && datGetFlag(0xC35) == 0;
    }
    if (mode == 2)
    {
        return state != 6 && state != 7 && datGetBadStatusNoDown(1) != UNIT_BADSTATUS_POISON;
    }
    if (mode == 5)
    {
        return datGetFlag(0xC2F) == 0 && state != 0x21;
    }
    if (mode == 7 || mode == 10 || mode == 13)
    {
        return datGetBadStatusNoDown(1) == UNIT_BADSTATUS_POISON;
    }
    return datGetFlag(0xC35) == 0;
}

// FUN_001dd600
u32 func_001dd600(void)
{
    s32 major;
    u32 result;

    result = 0;
    if (func_001a01c0() == 1)
    {
        result = 1;
    }
    major = gMtScene->fldMajorId;
    if (major == 33)
    {
        result = 0;
    }
    if (datGetFlag(0xc27) == 1)
    {
        result = 1;
    }
    major = gMtScene->fldMajorId;
    if ((major == 21 && gMtScene->fldMinorId == 50) ||
        (major == 22 && gMtScene->fldMinorId == 50) ||
        (major == 22 && gMtScene->fldMinorId == 51) ||
        (major == 23 && gMtScene->fldMinorId == 50) ||
        (major == 23 && gMtScene->fldMinorId == 51) ||
        (major == 24 && gMtScene->fldMinorId == 50) ||
        (major == 26 && gMtScene->fldMinorId == 50) ||
        (major == 26 && gMtScene->fldMinorId == 51) ||
        (major == 26 && gMtScene->fldMinorId == 52) ||
        (major == 26 && gMtScene->fldMinorId == 53) ||
        (major == 27 && gMtScene->fldMinorId == 50))
    {
        result = 1;
    }
    if ((major == 4 && gMtScene->fldMinorId == 10) ||
        (major == 39 && gMtScene->fldMinorId == 1) ||
        (major == 39 && gMtScene->fldMinorId == 3))
    {
        result = 1;
    }
    if ((major == 41 && gMtScene->fldMinorId == 50) ||
        (major == 42 && gMtScene->fldMinorId == 50) ||
        (major == 43 && gMtScene->fldMinorId == 50) ||
        (major == 44 && gMtScene->fldMinorId == 50) ||
        (major == 45 && gMtScene->fldMinorId == 50) ||
        (major == 46 && gMtScene->fldMinorId == 50) ||
        (major == 47 && gMtScene->fldMinorId == 50))
    {
        result = 1;
    }
    return result;
}

#pragma opt_loop_invariants on
// FUN_001dd8e0
#ifndef PC_BUILD
asm void func_001dd8e0(void)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c430028
  .word 0x1060007e
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000078
  .word 0x00000000
  .word 0x0000282d
  .word 0x001418c0
  .word 0x00741823
  .word 0x00032180
  .word 0x3c030087
  .word 0x246317a0
  .word 0x00649821
  .word 0x8e640048
  .word 0x10800005
  .word 0x00000000
  .word 0x8e630054
  .word 0x10600002
  .word 0x00000000
  .word 0x24050001
  .word 0x0005182b
  .word 0x10600066
  .word 0x00000000
  .word 0x0c0bfde4
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000a
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x966501a8
  .word 0x8c440028
  .word 0x24060002
  .word 0x0c062fb8
  .word 0x00000000
  .word 0x10000058
  .word 0x00000000
  .word 0x001410c0
  .word 0x00541023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x245201a8
  .word 0x944401a8
  .word 0x0c05ccc0
  .word 0x00000000
  .word 0x305100ff
  .word 0x86440000
  .word 0x0c05b11c
  .word 0x00000000
  .word 0x304500ff
  .word 0x96500000
  .word 0x24020001
  .word 0x16020022
  .word 0x00000000
  .word 0x001410c0
  .word 0x00541023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431821
  .word 0x322200ff
  .word 0xac620184
  .word 0x24640188
  .word 0x8c630188
  .word 0x30a200ff
  .word 0x0062082b
  .word 0x1020000b
  .word 0x00000000
  .word 0xac820000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x96450000
  .word 0x8c440028
  .word 0x24060003
  .word 0x0c062fb8
  .word 0x00000000
  .word 0x1000002d
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x96450000
  .word 0x8c440028
  .word 0x0000302d
  .word 0x0c062fb8
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x26650184
  .word 0x8e620184
  .word 0x322400ff
  .word 0x0044082b
  .word 0x10200017
  .word 0x00000000
  .word 0x001410c0
  .word 0x00541023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00438021
  .word 0xaca40000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x96450000
  .word 0x8c440028
  .word 0x24060003
  .word 0x0c062fb8
  .word 0x00000000
  .word 0x2404000a
  .word 0x8e0501b4
  .word 0x8e0601b8
  .word 0x24070008
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x3205ffff
  .word 0x8c440028
  .word 0x0000302d
  .word 0x0c062fb8
  .word 0x00000000
  .word 0x26940001
  .word 0x2a830004
  .word 0x1460ff87
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants reset

// FUN_001ddb30
const void* func_001ddb30(void)
{
    u32 floor;
    u32 index;
    u16* table;

    floor = K_FldDungeon_GetCurrentFloor();
    if (floor == 0)
    {
        index = 0;
        table = *(u16**)(D_006791A0 + gMtScene->fldMajorId * 4);
        if (table != NULL)
        {
            index = table[gMtScene->fldMinorId];
        }
        return D_006792E0 + index * 0x1A;
    }
    switch (floor)
    {
    case 0x190:
        return D_006799FC;
    case 0x191:
        return D_00679A16;
    case 0x192:
        return D_00679A30;
    case 0x193:
        return D_00679A4A;
    default:
        if (datGetScenarioMode() == 0)
        {
            return D_0067B160 + floor * 0x1A;
        }
        return D_0067CFE0 + floor * 0x1A;
    }
}

// FUN_001ddca0
void func_001ddca0(s32 index)
{
    const void* data;
    Field* field;

    field = K_Field_Get();
    if (*(void**)((u8*)field + 0x2C) == NULL)
    {
        return;
    }
    if (index == -1)
    {
        data = func_001ddb30();
    }
    else
    {
        data = D_006792E0 + (u32)index * 0x1A;
    }
    field = K_Field_Get();
    func_0018e5c0(*(void**)((u8*)field + 0x2C), data);
}

// Reconstructed controller input, camera diagnostics, and frame transforms from retail.
// Remaining differences are compiler scheduling/register allocation in the large state-1 path.
// FUN_001ddd30
u32 func_001ddd30(void)
{
    u32 result = 0;
    MtScene* scene;
    s32 major;

    if (func_001a01c0() == 1)
        result = 1;
    scene = gMtScene;
    major = scene->fldMajorId;
    if (major == 0x20 && scene->fldMinorId == 2)
        goto footstep_ddd30_false;
    if (major == 0x1f && scene->fldMinorId == 1)
        goto footstep_ddd30_false;
    if (major == 0x23 && scene->fldMinorId == 1)
        goto footstep_ddd30_false;
    if (major == 0x25 && scene->fldMinorId == 1)
        goto footstep_ddd30_false;
    if (major == 0x21)
        goto footstep_ddd30_false;
    goto footstep_ddd30_success;

footstep_ddd30_false:
    result = 0;
footstep_ddd30_success:
    return result;
}

// FUN_001dde00
u32 func_001dde00(s32 mode)
{
    switch (mode)
    {
    case 1:
        if (datGetScenarioMode() == 1)
        {
            if (gMtScene->fldMajorId == 4 || gMtScene->fldMajorId == 5)
            {
                if (datGetFlag(0xC35) != 0)
                {
                    return 0;
                }
                return 1;
            }
        }
        if (func_001a0310() == 1)
        {
            if (datGetFlag(0xC35) == 0)
            {
                goto footstep_case1_func_true;
            }
            return 0;
footstep_case1_func_true:
            return 1;
        }
        if (gMtScene->fldMajorId == 7)
        {
            if (gMtScene->fldMinorId == 6)
            {
                if (datGetTime() == 8)
                {
                    goto footstep_case1_time;
                }
            }
        }
        if (gMtScene->fldMajorId == 8)
        {
            if (gMtScene->fldMinorId == 1)
            {
                if (datGetTime() == 8)
                {
                    goto footstep_case1_time;
                }
            }
        }
        if (gMtScene->fldMajorId != 9)
        {
            goto footstep_case1_after_time;
        }
        if (gMtScene->fldMinorId != 1)
        {
            goto footstep_case1_after_time;
        }
        if (datGetTime() != 8)
        {
            goto footstep_case1_after_time;
        }

footstep_case1_time:
        if (datGetFlag(0xC35) == 0)
        {
            goto footstep_case1_time_true;
        }
        return 0;
footstep_case1_time_true:
        return 1;

footstep_case1_after_time:
        if (gMtScene->fldMajorId == 14 && gMtScene->fldMinorId == 5)
        {
            return 0;
        }
        if (gMtScene->fldMajorId == 0x21)
        {
            if (datGetFlag(0xC35) == 0)
            {
                goto footstep_case1_scene_true;
            }
            return 0;
footstep_case1_scene_true:
            return 1;
        }
        if (gMtScene->fldMajorId == 7 && datGetFlag(0xE00) == 1)
        {
            return 0;
        }
        if (gMtScene->fldMajorId == 6 && datGetFlag(0xE60) == 1)
        {
            if (datGetFlag(0xC35) == 0)
            {
                goto footstep_case1_six_true;
            }
            return 0;
footstep_case1_six_true:
            return 1;
        }
        if (func_001a01c0() == 1)
        {
            goto footstep_case1_status;
        }
        if (gMtScene->fldMajorId == 0x15)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x16)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x16)
        {
            if (gMtScene->fldMinorId == 0x33)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x17)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x17)
        {
            if (gMtScene->fldMinorId == 0x33)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x18)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x18)
        {
            if (gMtScene->fldMinorId == 0x33)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x19)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x1A)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x1B)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x29)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x2A)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x2B)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x2C)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x2D)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x2E)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x2F)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x27)
        {
            if (gMtScene->fldMinorId == 1)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x27)
        {
            if (gMtScene->fldMinorId == 2)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId != 0x27)
        {
            goto footstep_case1_default;
        }
        if (gMtScene->fldMinorId != 3)
        {
            goto footstep_case1_default;
        }
footstep_case1_status:
        if (datGetBadStatusNoDown((s16)mode) != 0x80)
        {
            goto footstep_case1_status_zero;
        }
        return 1;
footstep_case1_status_zero:
        return 0;
footstep_case1_default:
        if (datGetFlag(0xC35) != 0)
        {
            return 0;
        }
        return 1;
    case 2:
        if (gMtScene->fldMajorId == 6 || gMtScene->fldMajorId == 7)
        {
            return 0;
        }
        if (gMtScene->fldMajorId == 14 && gMtScene->fldMinorId == 5)
        {
            return 0;
        }
        if (datGetBadStatusNoDown((s16)mode) != 0x80)
        {
            goto footstep_case2_status_zero;
        }
        return 1;
footstep_case2_status_zero:
        return 0;

    case 5:
        if (gMtScene->fldMajorId == 14 && gMtScene->fldMinorId == 5)
        {
            return 0;
        }
        if (datGetFlag(0xC2F) == 1)
        {
            return 0;
        }
        if (gMtScene->fldMajorId == 0x21)
        {
            return 0;
        }
        if (datGetBadStatusNoDown((s16)mode) != 0x80)
        {
            goto footstep_case5_status_zero;
        }
        return 1;
footstep_case5_status_zero:
        return 0;

    case 7:
        if (gMtScene->fldMajorId == 14 && gMtScene->fldMinorId == 5)
        {
            return 0;
        }
        if (gMtScene->fldMajorId == 0x21)
        {
            return 0;
        }
        if (datGetBadStatusNoDown((s16)mode) != 0x80)
        {
            goto footstep_case7_status_zero;
        }
        return 1;
footstep_case7_status_zero:
        return 0;

    case 10:
        if (gMtScene->fldMajorId == 14 && gMtScene->fldMinorId == 5)
        {
            return 0;
        }
        if (datGetBadStatusNoDown((s16)mode) != 0x80)
        {
            goto footstep_case10_status_zero;
        }
        return 1;
footstep_case10_status_zero:
        return 0;

    case 13:
        if (gMtScene->fldMajorId == 14 && gMtScene->fldMinorId == 5)
        {
            return 0;
        }
        if (datGetBadStatusNoDown((s16)mode) != 0x80)
        {
            goto footstep_case13_status_zero;
        }
        return 1;
footstep_case13_status_zero:
        return 0;

    default:
        if (datGetBadStatusNoDown((s16)mode) != 0x80)
        {
            goto footstep_default_status_zero;
        }
        return 1;
footstep_default_status_zero:
        return 0;
    }
}

// mwcc folds `major == 6 || major == 7` into a range check (`addiu/sltiu`),
// but retail keeps two direct compares (reusing the switch-dispatch
// constants). Making the second comparison unsigned keeps the fold from
// recognizing the pair (`== 6 || (u32)== 7U`) and reproduces retail's code.
// FUN_001de630
s32 func_001de630(s32 charId)
{
    s32 result = 0;
    s32 major;
    s32 minor;

    switch (charId)
    {
    case 1:
        if (datGetScenarioMode() == 1)
        {
            if (gMtScene->fldMajorId == 4 || gMtScene->fldMajorId == 5)
            {
                result = 3;
                if (datGetFlag(0xC35) != 0)
                {
                    result -= 1;
                }
                break;
            }
        }
        if (func_001a0310() == 1)
        {
            result = 3;
            if (datGetFlag(0xC35) != 0)
            {
                result -= 1;
            }
            break;
        }
        if (gMtScene->fldMajorId == 7)
        {
            if (gMtScene->fldMinorId == 6)
            {
                if (datGetTime() == 8)
                {
                    goto footstep_case1_time;
                }
            }
        }
        if (gMtScene->fldMajorId == 8)
        {
            if (gMtScene->fldMinorId == 1)
            {
                if (datGetTime() == 8)
                {
                    goto footstep_case1_time;
                }
            }
        }
        if (gMtScene->fldMajorId == 9)
        {
            if (gMtScene->fldMinorId == 1)
            {
                if (datGetTime() == 8)
                {
                    goto footstep_case1_time;
                }
            }
        }
        goto footstep_case1_after_time;

footstep_case1_time:
        result = 3;
        if (datGetFlag(0xC35) != 0)
        {
            result -= 1;
        }
        break;

footstep_case1_after_time:
        if (gMtScene->fldMajorId == 14 && gMtScene->fldMinorId == 5)
        {
            result = 1;
            break;
        }
        if (gMtScene->fldMajorId == 0x21)
        {
            result = 3;
            if (datGetFlag(0xC35) != 0)
            {
                result -= 1;
            }
            break;
        }
        if (gMtScene->fldMajorId == 7 && datGetFlag(0xE00) == 1)
        {
            result = 1;
            break;
        }
        if (gMtScene->fldMajorId == 6 && datGetFlag(0xE60) == 1)
        {
            result = 3;
            if (datGetFlag(0xC35) != 0)
            {
                result -= 1;
            }
            break;
        }
        if (func_001a01c0() == 1)
        {
            goto footstep_case1_status;
        }
        if (gMtScene->fldMajorId == 0x15)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x16)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x16)
        {
            if (gMtScene->fldMinorId == 0x33)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x17)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x17)
        {
            if (gMtScene->fldMinorId == 0x33)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x18)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x18)
        {
            if (gMtScene->fldMinorId == 0x33)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x19)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x1A)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x1B)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x29)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x2A)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x2B)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x2C)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x2D)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x2E)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x2F)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x27)
        {
            if (gMtScene->fldMinorId == 1)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId == 0x27)
        {
            if (gMtScene->fldMinorId == 2)
            {
                goto footstep_case1_status;
            }
        }
        if (gMtScene->fldMajorId != 0x27)
        {
            goto footstep_case1_default_e630;
        }
        if (gMtScene->fldMinorId != 3)
        {
            goto footstep_case1_default_e630;
        }
footstep_case1_status:
        result = 3;
        break;

footstep_case1_default_e630:
        result = 3;
        if (datGetFlag(0xC35) != 0)
        {
            result -= 1;
        }
        break;

    case 2:
        major = gMtScene->fldMajorId;
        if (major == 6 || (u32)major == 7U)
        {
            result = 1;
        }
        else if (major == 14 && gMtScene->fldMinorId == 5)
        {
            result = 1;
        }
        else
        {
            result = 3;
        }
        break;

    case 5:
        major = gMtScene->fldMajorId;
        if (major == 14 && gMtScene->fldMinorId == 5)
        {
            result = 1;
        }
        else if (datGetFlag(0xC2F) == 1)
        {
            result = 1;
        }
        else if (gMtScene->fldMajorId == 33)
        {
            result = 1;
        }
        else
        {
            result = 3;
        }
        break;

    case 7:
        major = gMtScene->fldMajorId;
        if (major == 14 && gMtScene->fldMinorId == 5)
        {
            result = 1;
        }
        else if (major == 33)
        {
            result = 1;
        }
        else
        {
            result = 3;
        }
        break;

    case 10:
        major = gMtScene->fldMajorId;
        if (major == 14 && gMtScene->fldMinorId == 5)
        {
            result = 1;
        }
        else
        {
            result = 3;
        }
        break;

    case 13:
        major = gMtScene->fldMajorId;
        if (major == 14 && gMtScene->fldMinorId == 5)
        {
            result = 1;
        }
        else
        {
            result = 3;
        }
        break;

    case 6:
        if (gMtScene->fldMajorId == 14 && gMtScene->fldMinorId == 5)
        {
            result = 1;
        }
        break;

    default:
        result = 3;
        break;
    }

    return result;
}












static u32 K_Encount_Now(KwlnTask* task)
{
    return task != NULL ? kwlnTaskGetTimer(task) : 0;
}

static void* K_Encount_FieldWord(u32 offset)
{
    Field* field = K_Field_Get();
    return field != NULL ? *(void**)((u8*)field + offset) : NULL;
}

static void K_Encount_Face(FldUnit* unit, FldUnit* target)
{
    RwMatrix matrix;
    RwV3d axis = {0.0f, 1.0f, 0.0f};
    RwV3d delta;
    f32 heading;

    if (unit == NULL || target == NULL || unit->mdl == NULL || target->mdl == NULL ||
        unit->resrc == NULL)
    {
        return;
    }
    delta = mdlGetMatrix(target->mdl)->pos;
    delta.x -= mdlGetMatrix(unit->mdl)->pos.x;
    delta.y = 0.0f;
    delta.z -= mdlGetMatrix(unit->mdl)->pos.z;
    heading = atan2f(delta.x, delta.z) * (180.0f / 3.14159265f);
    memset(&matrix, 0, sizeof(matrix));
    matrix.right.x = 1.0f;
    matrix.up.y = 1.0f;
    matrix.at.z = 1.0f;
    matrix.pos = mdlGetMatrix(unit->mdl)->pos;
    matrix.flags = 0x20003;
    RwMatrixRotate(&matrix, &axis, heading, rwCOMBINEPRECONCAT);
    K_FldFrame_CtlUpdateMdlMat(unit->resrc->collisCtlTask, &matrix);
}




static void K_Encount_CompactEc(EncounterWork* work)
{
    u32 i;
    u32 out = 0;
    for (i = 0; i < work->ecCount && i < 4; ++i)
    {
        if (work->ec[i] != NULL)
        {
            work->ec[out++] = work->ec[i];
        }
    }
    while (out < 4)
    {
        work->ec[out++] = NULL;
    }
}










// Retail offsets 0x00-0x4a8 reconstruct unit registration, facing rotation,
// field updates, and active-count aggregation; 1196 of 1200 bytes are implemented.

static u32 K_Encount_AppendRecord(EncounterRecord* out, u16 id)
{
    if (out->count >= 3)
    {
        return 0;
    }
    out->ids[out->count++] = id;
    return 1;
}

static u32 K_Encount_HpRatio(u16 id, f32* ratio)
{
    u32 maxHp = datGetMaxHp((s16)id);
    if (maxHp == 0)
    {
        return 0;
    }
    *ratio = (f32)datGetHp((s16)id) / (f32)maxHp;
    return 1;
}





static KwlnTask* K_Encount_CreatePeriodicScript(PeriodicWork* work, u32 slot, u32 procedure)
{
    KwlnTask* child;
    if (slot >= 16)
    {
        return NULL;
    }
    child = scrCreateTaskFromHeader(10, D_007CE220, procedure);
    work->scriptTask[slot] = child;
    if (child != NULL)
    {
        func_0035c1a0(child, (int)&work->records[slot]);
    }
    return child;
}

// FUN_001ded40
#ifndef PC_BUILD
asm s32 func_001ded40(s32 charId)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0000802d
  .word 0x24070006
  .word 0x108701ab
  .word 0x00000000
  .word 0x2402000d
  .word 0x10820199
  .word 0x00000000
  .word 0x2402000a
  .word 0x10820187
  .word 0x00000000
  .word 0x24060007
  .word 0x1086016f
  .word 0x00000000
  .word 0x24050005
  .word 0x1085014e
  .word 0x00000000
  .word 0x24020002
  .word 0x10820136
  .word 0x00000000
  .word 0x24020001
  .word 0x10820003
  .word 0x00000000
  .word 0x100001a3
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x24030001
  .word 0x14430012
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x24020004
  .word 0x10620004
  .word 0x00000000
  .word 0x24020005
  .word 0x1462000a
  .word 0x00000000
  .word 0x24100005
  .word 0x24040c35
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400191
  .word 0x00000000
  .word 0x2610ffff
  .word 0x1000018e
  .word 0x00000000
  .word 0x0c0680c4
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000a
  .word 0x00000000
  .word 0x24100005
  .word 0x24040c35
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400183
  .word 0x00000000
  .word 0x2610ffff
  .word 0x10000180
  .word 0x00000000
  .word 0x8f84a850
  .word 0x8c830000
  .word 0x24020007
  .word 0x1462000b
  .word 0x00000000
  .word 0x8c830004
  .word 0x24020006
  .word 0x14620007
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304300ff
  .word 0x24020008
  .word 0x1062001f
  .word 0x00000000
  .word 0x8f84a850
  .word 0x8c830000
  .word 0x24020008
  .word 0x1462000b
  .word 0x00000000
  .word 0x8c830004
  .word 0x24020001
  .word 0x14620007
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304300ff
  .word 0x24020008
  .word 0x10620010
  .word 0x00000000
  .word 0x8f84a850
  .word 0x8c830000
  .word 0x24020009
  .word 0x14620014
  .word 0x00000000
  .word 0x8c830004
  .word 0x24020001
  .word 0x14620010
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304300ff
  .word 0x24020008
  .word 0x1462000a
  .word 0x00000000
  .word 0x24100005
  .word 0x24040c35
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1040014d
  .word 0x00000000
  .word 0x2610ffff
  .word 0x1000014a
  .word 0x00000000
  .word 0x8f83a850
  .word 0x8c640000
  .word 0x2402000e
  .word 0x14820008
  .word 0x00000000
  .word 0x8c630004
  .word 0x24020005
  .word 0x14620004
  .word 0x00000000
  .word 0x24100001
  .word 0x1000013e
  .word 0x00000000
  .word 0x24020021
  .word 0x1482000a
  .word 0x00000000
  .word 0x24100003
  .word 0x24040c35
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400135
  .word 0x00000000
  .word 0x2610ffff
  .word 0x10000132
  .word 0x00000000
  .word 0x24020007
  .word 0x14820009
  .word 0x00000000
  .word 0x24040e00
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24100001
  .word 0x14500003
  .word 0x00000000
  .word 0x10000127
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x24020006
  .word 0x14620010
  .word 0x00000000
  .word 0x24040e60
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000a
  .word 0x00000000
  .word 0x24100005
  .word 0x24040c35
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400116
  .word 0x00000000
  .word 0x2610ffff
  .word 0x10000113
  .word 0x00000000
  .word 0x0c068070
  .word 0x00000000
  .word 0x24030001
  .word 0x1043008f
  .word 0x00000000
  .word 0x8f83a850
  .word 0x8c620000
  .word 0x24040015
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040032
  .word 0x10a40086
  .word 0x00000000
  .word 0x24040016
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040032
  .word 0x10a4007f
  .word 0x00000000
  .word 0x24040016
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040033
  .word 0x10a40078
  .word 0x00000000
  .word 0x24040017
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040032
  .word 0x10a40071
  .word 0x00000000
  .word 0x24040017
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040033
  .word 0x10a4006a
  .word 0x00000000
  .word 0x24040018
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040032
  .word 0x10a40063
  .word 0x00000000
  .word 0x24040018
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040033
  .word 0x10a4005c
  .word 0x00000000
  .word 0x24040019
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040032
  .word 0x10a40055
  .word 0x00000000
  .word 0x2404001a
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040032
  .word 0x10a4004e
  .word 0x00000000
  .word 0x2404001b
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040032
  .word 0x10a40047
  .word 0x00000000
  .word 0x24040029
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040032
  .word 0x10a40040
  .word 0x00000000
  .word 0x2404002a
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040032
  .word 0x10a40039
  .word 0x00000000
  .word 0x2404002b
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040032
  .word 0x10a40032
  .word 0x00000000
  .word 0x2404002c
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040032
  .word 0x10a4002b
  .word 0x00000000
  .word 0x2404002d
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040032
  .word 0x10a40024
  .word 0x00000000
  .word 0x2404002e
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040032
  .word 0x10a4001d
  .word 0x00000000
  .word 0x2404002f
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040032
  .word 0x10a40016
  .word 0x00000000
  .word 0x24040027
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040001
  .word 0x10a4000f
  .word 0x00000000
  .word 0x24040027
  .word 0x14440005
  .word 0x00000000
  .word 0x8c650004
  .word 0x24040002
  .word 0x10a40008
  .word 0x00000000
  .word 0x24040027
  .word 0x14440008
  .word 0x00000000
  .word 0x8c630004
  .word 0x24020003
  .word 0x14620004
  .word 0x00000000
  .word 0x24100003
  .word 0x1000007d
  .word 0x00000000
  .word 0x24100005
  .word 0x24040c35
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400077
  .word 0x00000000
  .word 0x2610ffff
  .word 0x10000074
  .word 0x00000000
  .word 0x8f84a850
  .word 0x8c830000
  .word 0x10670003
  .word 0x00000000
  .word 0x14660004
  .word 0x00000000
  .word 0x24100002
  .word 0x1000006b
  .word 0x00000000
  .word 0x2402000e
  .word 0x14620007
  .word 0x00000000
  .word 0x8c820004
  .word 0x14450004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000062
  .word 0x00000000
  .word 0x24100003
  .word 0x1000005f
  .word 0x00000000
  .word 0x8f84a850
  .word 0x8c830000
  .word 0x2402000e
  .word 0x14620007
  .word 0x00000000
  .word 0x8c820004
  .word 0x14450004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000054
  .word 0x00000000
  .word 0x24040c2f
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24100001
  .word 0x14500004
  .word 0x00000000
  .word 0x24100002
  .word 0x1000004b
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x24020021
  .word 0x14620003
  .word 0x00000000
  .word 0x10000044
  .word 0x00000000
  .word 0x24100003
  .word 0x10000041
  .word 0x00000000
  .word 0x8f83a850
  .word 0x8c640000
  .word 0x2402000e
  .word 0x14820008
  .word 0x00000000
  .word 0x8c630004
  .word 0x24020005
  .word 0x14620004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000035
  .word 0x00000000
  .word 0x24020021
  .word 0x14820004
  .word 0x00000000
  .word 0x24100001
  .word 0x1000002f
  .word 0x00000000
  .word 0x24100003
  .word 0x1000002c
  .word 0x00000000
  .word 0x8f84a850
  .word 0x8c830000
  .word 0x2402000e
  .word 0x14620008
  .word 0x00000000
  .word 0x8c830004
  .word 0x24020005
  .word 0x14620004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000020
  .word 0x00000000
  .word 0x24100003
  .word 0x1000001d
  .word 0x00000000
  .word 0x8f84a850
  .word 0x8c830000
  .word 0x2402000e
  .word 0x14620008
  .word 0x00000000
  .word 0x8c830004
  .word 0x24020005
  .word 0x14620004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000011
  .word 0x00000000
  .word 0x24100003
  .word 0x1000000e
  .word 0x00000000
  .word 0x8f84a850
  .word 0x8c830000
  .word 0x2402000e
  .word 0x14620009
  .word 0x00000000
  .word 0x8c830004
  .word 0x24020005
  .word 0x14620005
  .word 0x00000000
  .word 0x24100001
  .word 0x10000002
  .word 0x00000000
  .word 0x24100003
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001df450
s32 func_001df450(s32 mode)
{
    u32 result = func_001dde00(mode);

    switch (mode)
    {
    case 1:
        goto footstep_target_mode1;
    default:
        goto footstep_target_done;
    }
footstep_target_mode1:
        if (datGetScenarioMode() == 1)
        {
            if (gMtScene->fldMajorId == 4 || gMtScene->fldMajorId == 5)
            {
                result = 6 + (s32)(RpRandom() % 3U);
                goto footstep_target_done;
            }
        }
        if (func_001a0310() == 1)
        {
            result = 6 + (s32)(RpRandom() % 3U);
            goto footstep_target_done;
        }
        if (gMtScene->fldMajorId == 7)
        {
            if (gMtScene->fldMinorId == 6)
            {
                if (datGetTime() == 8)
                {
                    goto footstep_target_time_random;
                }
            }
        }
        if (gMtScene->fldMajorId == 8)
        {
            if (gMtScene->fldMinorId == 1)
            {
                if (datGetTime() == 8)
                {
                    goto footstep_target_time_random;
                }
            }
        }
        if (gMtScene->fldMajorId == 9)
        {
            if (gMtScene->fldMinorId == 1)
            {
                if (datGetTime() == 8)
                {
                    goto footstep_target_time_random;
                }
            }
        }
        goto footstep_target_after_time_random;

footstep_target_time_random:
        result = 6 + (s32)(RpRandom() % 3U);
        goto footstep_target_done;

footstep_target_after_time_random:
        if (gMtScene->fldMajorId == 0xE && gMtScene->fldMinorId == 5)
        {
            goto footstep_target_done;
        }
        if (gMtScene->fldMajorId == 0xE)
        {
            if (datGetTime() == 6)
            {
                if (clndGetCurrentMonth() == 0xB)
                {
                    if (clndGetCurrentDay() == 0x12)
                    {
                        goto footstep_target_calendar_random;
                    }
                }
                if (clndGetCurrentMonth() == 0xB)
                {
                    if (clndGetCurrentDay() == 0x13)
                    {
                        goto footstep_target_calendar_random;
                    }
                }
            }
        }
        goto footstep_target_after_calendar_random;

footstep_target_calendar_random:
        result = 6 + (s32)(RpRandom() % 3U);
        goto footstep_target_done;

footstep_target_after_calendar_random:
        if (gMtScene->fldMajorId == 0x21)
        {
            goto footstep_target_done;
        }
        if (gMtScene->fldMajorId == 7 && datGetFlag(0xE00) == 1)
        {
            goto footstep_target_done;
        }
        if (gMtScene->fldMajorId == 6)
        {
            if (datGetFlag(0xE60) == 1)
            {
                goto footstep_target_major6_random;
            }
        }
        goto footstep_target_after_major6_random;

footstep_target_major6_random:
        result = 6 + (s32)(RpRandom() % 3U);
        goto footstep_target_done;

footstep_target_after_major6_random:
        if (func_001a01c0() == 1)
        {
            goto footstep_target_special;
        }
        if (gMtScene->fldMajorId == 0x15)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x16)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x16)
        {
            if (gMtScene->fldMinorId == 0x33)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x17)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x17)
        {
            if (gMtScene->fldMinorId == 0x33)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x18)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x18)
        {
            if (gMtScene->fldMinorId == 0x33)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x19)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x1A)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x1B)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x29)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x2A)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x2B)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x2C)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x2D)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x2E)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x2F)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x29)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x2A)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x2B)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x2C)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x2D)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x2E)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x2F)
        {
            if (gMtScene->fldMinorId == 0x32)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x27)
        {
            if (gMtScene->fldMinorId == 1)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x27)
        {
            if (gMtScene->fldMinorId == 2)
            {
                goto footstep_target_special;
            }
        }
        if (gMtScene->fldMajorId == 0x27)
        {
            if (gMtScene->fldMinorId == 3)
            {
                goto footstep_target_special;
            }
        }
    goto footstep_target_random_default;

footstep_target_special:
    result = 0xF;
    goto footstep_target_done;


footstep_target_random_default:
    result = 6 + (s32)(RpRandom() % 3U);
footstep_target_done:
    return (s32)result;
}

// FUN_001dfa70
#pragma push
#pragma opt_lifetimes on
#ifndef PC_BUILD
asm void* func_001dfa70(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdff00
  .word 0xffbf0070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8c90003c
  .word 0x8e020050
  .word 0x8c540004
  .word 0x8e030000
  .word 0x24020002
  .word 0x10620277
  .word 0x00000000
  .word 0x24020001
  .word 0x10620016
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000273
  .word 0x00000000
  .word 0x26860010
  .word 0x26050010
  .word 0x24040008
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x10000262
  .word 0x00000000
  .word 0x0000982d
  .word 0x27b200d0
  .word 0x27a300c0
  .word 0x2402000c
  .word 0x10600008
  .word 0x00000000
  .word 0xa0600000
  .word 0x24630001
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x4480a000
  .word 0x3c02007e
  .word 0x9042095e
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x3c024300
  .word 0x44820000
  .word 0x00000000
  .word 0x46000881
  .word 0x3c02c240
  .word 0x44820000
  .word 0x00000000
  .word 0x46001034
  .word 0x45010007
  .word 0x00000000
  .word 0x3c024240
  .word 0x44820000
  .word 0x00000000
  .word 0x46001036
  .word 0x4501000a
  .word 0x00000000
  .word 0x44800800
  .word 0xae400000
  .word 0x3c023f80
  .word 0xae420004
  .word 0xae400008
  .word 0xc7808398
  .word 0x46140818
  .word 0x4602051d
  .word 0x24130001
  .word 0x3c02007e
  .word 0x9042095f
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x3c024300
  .word 0x44820000
  .word 0x00000000
  .word 0x46000881
  .word 0x3c02c240
  .word 0x44820000
  .word 0x00000000
  .word 0x46001034
  .word 0x45010007
  .word 0x00000000
  .word 0x3c024240
  .word 0x44820000
  .word 0x00000000
  .word 0x46001036
  .word 0x45010008
  .word 0x00000000
  .word 0x26920010
  .word 0xc7818398
  .word 0x44800000
  .word 0x00000000
  .word 0x46140018
  .word 0x46020d1d
  .word 0x24130001
  .word 0x3c02007e
  .word 0x90420961
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x3c024300
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d41
  .word 0x3c02c240
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a834
  .word 0x45010007
  .word 0x00000000
  .word 0x3c024240
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a836
  .word 0x45010017
  .word 0x00000000
  .word 0x27a400c0
  .word 0xc6820030
  .word 0xc6810034
  .word 0xc6800038
  .word 0xe7a200c0
  .word 0xe7a100c4
  .word 0xe7a000c8
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7808420
  .word 0x46150042
  .word 0xc7a000c0
  .word 0x46010002
  .word 0xe7a000c0
  .word 0xc7a000c4
  .word 0x46010002
  .word 0xe7a000c4
  .word 0xc7a000c8
  .word 0x46010002
  .word 0xe7a000c8
  .word 0x24130001
  .word 0x3c02007e
  .word 0x90420960
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x3c024300
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d41
  .word 0x3c02c240
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a834
  .word 0x45010007
  .word 0x00000000
  .word 0x3c024240
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a836
  .word 0x45010019
  .word 0x00000000
  .word 0x27a400c0
  .word 0xc6820010
  .word 0xc6810014
  .word 0xc6800018
  .word 0xe7a200c0
  .word 0xe7a100c4
  .word 0xe7a000c8
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7808420
  .word 0x46150042
  .word 0xc7a000c0
  .word 0x46010002
  .word 0xe7a000c0
  .word 0xc7a000c4
  .word 0x46010002
  .word 0xe7a000c4
  .word 0xc7a000c8
  .word 0x46010002
  .word 0xe7a000c8
  .word 0x24130001
  .word 0x100000ce
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x30620006
  .word 0x1040000a
  .word 0x00000000
  .word 0xc7a100c4
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a000c4
  .word 0x24130001
  .word 0x100000c0
  .word 0x00000000
  .word 0x30620009
  .word 0x1040000a
  .word 0x00000000
  .word 0xc7a100c4
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a000c4
  .word 0x24130001
  .word 0x100000b4
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30621000
  .word 0x10400028
  .word 0x00000000
  .word 0xae400000
  .word 0x3c023f80
  .word 0xae420004
  .word 0xae400008
  .word 0xc6820040
  .word 0xc6810044
  .word 0xc6800048
  .word 0xe7a200f0
  .word 0xe7a100f4
  .word 0xe7a000f8
  .word 0x3c02bf80
  .word 0x44820800
  .word 0xc7a000f0
  .word 0x46000802
  .word 0xe7a000e0
  .word 0xc7a000f4
  .word 0x46000802
  .word 0xe7a000e4
  .word 0xc7a000f8
  .word 0x46000802
  .word 0xe7a000e8
  .word 0x0280202d
  .word 0x27a500e0
  .word 0x24060002
  .word 0x0c132dd4
  .word 0x00000000
  .word 0x44806000
  .word 0x0280202d
  .word 0x0240282d
  .word 0x0000302d
  .word 0x0c132e24
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a500f0
  .word 0x24060002
  .word 0x0c132dd4
  .word 0x00000000
  .word 0x10000088
  .word 0x00000000
  .word 0x30624000
  .word 0x10400029
  .word 0x00000000
  .word 0xae400000
  .word 0x3c023f80
  .word 0xae420004
  .word 0xae400008
  .word 0xc6820040
  .word 0xc6810044
  .word 0xc6800048
  .word 0xe7a200f0
  .word 0xe7a100f4
  .word 0xe7a000f8
  .word 0x3c02bf80
  .word 0x44820800
  .word 0xc7a000f0
  .word 0x46000802
  .word 0xe7a000e0
  .word 0xc7a000f4
  .word 0x46000802
  .word 0xe7a000e4
  .word 0xc7a000f8
  .word 0x46000802
  .word 0xe7a000e8
  .word 0x0280202d
  .word 0x27a500e0
  .word 0x24060002
  .word 0x0c132dd4
  .word 0x00000000
  .word 0x3c024334
  .word 0x44826000
  .word 0x0280202d
  .word 0x0240282d
  .word 0x0000302d
  .word 0x0c132e24
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a500f0
  .word 0x24060002
  .word 0x0c132dd4
  .word 0x00000000
  .word 0x1000005d
  .word 0x00000000
  .word 0x30628000
  .word 0x10400029
  .word 0x00000000
  .word 0xae400000
  .word 0x3c023f80
  .word 0xae420004
  .word 0xae400008
  .word 0xc6820040
  .word 0xc6810044
  .word 0xc6800048
  .word 0xe7a200f0
  .word 0xe7a100f4
  .word 0xe7a000f8
  .word 0x3c02bf80
  .word 0x44820800
  .word 0xc7a000f0
  .word 0x46000802
  .word 0xe7a000e0
  .word 0xc7a000f4
  .word 0x46000802
  .word 0xe7a000e4
  .word 0xc7a000f8
  .word 0x46000802
  .word 0xe7a000e8
  .word 0x0280202d
  .word 0x27a500e0
  .word 0x24060002
  .word 0x0c132dd4
  .word 0x00000000
  .word 0x3c0242b4
  .word 0x44826000
  .word 0x0280202d
  .word 0x0240282d
  .word 0x0000302d
  .word 0x0c132e24
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a500f0
  .word 0x24060002
  .word 0x0c132dd4
  .word 0x00000000
  .word 0x10000032
  .word 0x00000000
  .word 0x30622000
  .word 0x10400029
  .word 0x00000000
  .word 0xae400000
  .word 0x3c023f80
  .word 0xae420004
  .word 0xae400008
  .word 0xc6820040
  .word 0xc6810044
  .word 0xc6800048
  .word 0xe7a200f0
  .word 0xe7a100f4
  .word 0xe7a000f8
  .word 0x3c02bf80
  .word 0x44820800
  .word 0xc7a000f0
  .word 0x46000802
  .word 0xe7a000e0
  .word 0xc7a000f4
  .word 0x46000802
  .word 0xe7a000e4
  .word 0xc7a000f8
  .word 0x46000802
  .word 0xe7a000e8
  .word 0x0280202d
  .word 0x27a500e0
  .word 0x24060002
  .word 0x0c132dd4
  .word 0x00000000
  .word 0x3c024387
  .word 0x44826000
  .word 0x0280202d
  .word 0x0240282d
  .word 0x0000302d
  .word 0x0c132e24
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a500f0
  .word 0x24060002
  .word 0x0c132dd4
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x30620020
  .word 0x10400004
  .word 0x00000000
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x10400096
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c510004
  .word 0xc62c0010
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040802d
  .word 0xc62c0014
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040a82d
  .word 0xc62c0018
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843d50
  .word 0x0200282d
  .word 0x02a0302d
  .word 0x0040382d
  .word 0x0c14896a
  .word 0x00000000
  .word 0xc62c0020
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040802d
  .word 0xc62c0024
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040a82d
  .word 0xc62c0028
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843d50
  .word 0x0200282d
  .word 0x02a0302d
  .word 0x0040382d
  .word 0x0c14896a
  .word 0x00000000
  .word 0xc62c0030
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040802d
  .word 0xc62c0034
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040a82d
  .word 0xc62c0038
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843d50
  .word 0x0200282d
  .word 0x02a0302d
  .word 0x0040382d
  .word 0x0c14896a
  .word 0x00000000
  .word 0xc62c0040
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040802d
  .word 0xc62c0044
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040a82d
  .word 0xc62c0048
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843d50
  .word 0x0200282d
  .word 0x02a0302d
  .word 0x0040382d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x278495e0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x26260010
  .word 0x27a50080
  .word 0x24040008
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x27a40080
  .word 0x0080282d
  .word 0x0c130bec
  .word 0x00000000
  .word 0x27b00090
  .word 0xc60c0008
  .word 0xc60d0004
  .word 0x0c14ba86
  .word 0x00000000
  .word 0x460005c6
  .word 0xc60c0000
  .word 0x0c14ba80
  .word 0x00000000
  .word 0x46000547
  .word 0x4600ab06
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xc7a100a0
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14ba80
  .word 0x00000000
  .word 0xc7ac0088
  .word 0xc7ad0080
  .word 0x0c14ba86
  .word 0x00000000
  .word 0x46000586
  .word 0xc7a10080
  .word 0x44800000
  .word 0x00000000
  .word 0x46000836
  .word 0x45000003
  .word 0x00000000
  .word 0xc7808248
  .word 0x461705c1
  .word 0xc7808424
  .word 0x4600bb02
  .word 0x4600b582
  .word 0x4600ad42
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040882d
  .word 0x4600b306
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040802d
  .word 0x4600ab06
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843d50
  .word 0x0220282d
  .word 0x0200302d
  .word 0x0040382d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24020001
  .word 0x1662002c
  .word 0x00000000
  .word 0xc6820040
  .word 0xc6810044
  .word 0xc6800048
  .word 0xe7a200f0
  .word 0xe7a100f4
  .word 0xe7a000f8
  .word 0x3c02bf80
  .word 0x44820800
  .word 0xc7a000f0
  .word 0x46000802
  .word 0xe7a000e0
  .word 0xc7a000f4
  .word 0x46000802
  .word 0xe7a000e4
  .word 0xc7a000f8
  .word 0x46000802
  .word 0xe7a000e8
  .word 0x0280202d
  .word 0x27a500e0
  .word 0x24060002
  .word 0x0c132dd4
  .word 0x00000000
  .word 0x0280202d
  .word 0x0240282d
  .word 0x4600a306
  .word 0x24060002
  .word 0x0c132e24
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a500c0
  .word 0x24060002
  .word 0x0c132dd4
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a500f0
  .word 0x24060002
  .word 0x0c132dd4
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0100
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop

// FUN_001e04e0
void func_001e04e0(KwlnTask* task)
{
    (*(void (**)(void*))jtbl_0096017C_abs)(task->workData);
}

// FUN_001e0510
KwlnTask* func_001e0510(KwlnTask* parent, void* resource)
{
    FldEffectResourceWork* work;
    KwlnTask* task;
    work = (FldEffectResourceWork*)RwCalloc(1, sizeof(FldEffectResourceWork), rwMEMHINTDUR_GLOBAL);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreateWithAutoPriority(parent, 10, "field runtime effect",
                                          func_001dfa70, func_001e04e0, work);
    work->resource = resource;
    return task;
}
// W419 rejected probes (verify.py; nd/object/window and nd/object rate):
// func_001d9860 moving rec first: 1129/1632/1664 (0.6918) -> 1130/1632/1664 (0.6924).
// func_001d9860 alternate switch case order: 1129/1632/1664 (0.6918) -> 1154/1632/1664 (0.7071).
// K_Footstep_Update inlining K_Footstep_Play: 7531/9896/9936 (0.7610) -> 7659/10136/9936 (0.7556; over window).
// func_001dc6f0 direct gFldUnitsPc indexing: 155/464/496 (0.3341) -> 161/476/496 (0.3382); unit-helper and mask-hoist variants stayed 155/464/496.
// func_001dcb60 task-local callback alias: 1685/2248/2256 (0.7496) -> 1685/2248/2256 (no change).
// func_001ded40 handler2 if/else/goto shape: 309/1796/1808 (0.1720) -> 356/1804/1808 (0.1973); separate case bodies were 333/1812/1808 (0.1838; over window).
