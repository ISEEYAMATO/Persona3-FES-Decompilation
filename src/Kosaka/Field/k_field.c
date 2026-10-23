#include "Kosaka/Field/k_field.h"
#include "Graphics/Model/mdlManager.h"
#include "rw/rwplcore.h"
#include "Kosaka/k_data.h"
#include "Kosaka/Field/k_event.h"
#include "Kosaka/Field/k_unit.h"
#include "Scene/mt_scene.h"
#include "Scene/resrcManager.h"
#include "Main/g_data.h"
#include "rw/rprandom.h"
extern u32 DAT_008717e8;
extern u8 DAT_008717f0[];
extern u32 DAT_008717f4;
#pragma alias D_008717F4_abs DAT_008717f4
extern u8 D_008717F4_abs[];
extern f32 fGpffff844c;
extern f32 fGpffff8450;
extern f32 fGpffff82fc;
extern f32 fGpffff82b8;
extern f32 fGpffffb544;
extern f32 fGpffffb540;
extern u32 uGpffffb53c;
extern u8 D_0067F578[];
extern u8 D_00869F64[];
extern u8 D_00869F78[];
extern u8 D_0086AFA8[];
extern u8 D_0086AFAC[];
extern u8 D_00869F88[];
extern u8 D_00869F8C[];
extern u8 D_00869F80[];
extern u8 D_00869F84[];

extern u8 D_0067F600[];
extern const char D_0067F5E0[];
extern const char D_0067F590[];
extern u8 D_0067F720[];
extern u8 D_0067FA26[];
extern u8 D_00681560[];
extern u8 D_00681866[];
extern u8 D_006833B0[];
extern u8 D_006833B8[];
extern u8 D_006833C0[];
extern u8 D_006833A0[];
extern u8 D_0086E580[];
extern u8 D_0086EDA0[];
extern u8 D_008717A0[];
extern const char D_0067F5C8[];
extern RwV3d D_0067F5B8;
extern u8 D_00869F98[];
extern u8 D_00869FA2[];
extern u8 D_00869FA3[];
extern u8 D_00869FA4[];

extern u32 FUN_00198590(void);
extern f32 FUN_001A5AA0(void* value);
extern u32 K_Scene_001a0250(void);
extern u32 func_001a02c0(void);
extern void K_Assert(const char* file, s32 line);
extern void func_0019ff10(void);
extern void func_001b3c90(void* resource);
extern void* func_001b5380(u32* resource, const RwV3d* position, u32 rotation);
extern u16 func_003b6790(u16 resourceId, void* resource);
extern u16 func_003b65d0(u16 resourceId, void* model);
extern u16 func_003b66b0(u16 resourceId, void* model);
extern u32 K_Misc_FindNextFreeResId(u16 resType);
extern u16 func_003b6870(u16 resourceId, const void* position, u32 packed,
                          f32 angleX, f32 angleY, f32 angleZ);
extern void func_001e6af0(void* position, void* model,
                          f32 x, f32 y, f32 z);
extern u16 func_003b6b90(u16 resourceId, const RwV3d* position, f32 angle);
extern u16 func_003b6c50(u16 resourceId, const RwV3d* position, f32 angle);
extern u16 func_003b6d10(u16 resourceId, const RwV3d* position, f32 angle);
extern RwMatrix* func_004c38c0(void);
extern void func_004c31b0(void* object, const void* axis, f32 angle, u32 mode);
extern void func_004c6be0(void* dst, const void* src, void* object);
extern void func_004c3880(RwMatrix* matrix);
extern u32 func_001c7160(const FldUnit* enemy, const FldUnit* party, f32 distance);
extern u16 func_003b6dd0(u16 resourceId, const RwV3d* position, f32 angle);
extern u32 FUN_0016F380(u32 parameter);
extern void FUN_0016F3E0(u32 parameter, u32 value);
extern s32 DAT_007ce250;
extern s32 DAT_007ce254;
static u32 sDungeonGenerationAttempts;  // 007ce260
static u32 sDungeonGenerationFailed;    // 007ce264
static u32 sDungeonRoomCounter;         // 007ce25c
#include "Kernel/Kwln/kwlnTask.h"
extern KwlnTask* gDungeonTask;
#include "temporary.h"

extern RwMatrix* FUN_00318b60(void* model);
extern u32 FUN_001d5a90(KwlnTask* task);
extern void func_001d8cb0(void);
extern u32 DAT_007ce24c;
#pragma alias DAT_007ce24c_abs DAT_007ce24c
extern u8 DAT_007ce24c_abs[];
extern u8 DAT_007cc2a0[];
extern u32 K_FldDungeon_GetCurrentFloor(void);
extern s16 FUN_0016DD60(s32 index);
typedef struct DungeonPattern DungeonPattern;
void func_001bb300(u16 patternId, u16 x, u16 y);
u32 func_001bc630(const DungeonPattern* pattern, s32* x, s32* y);
void func_001bcac0(u32 patternId, u32 x, u32 y, u32 fromX, u32 fromY);
void func_001bd450(u32 patternId);
void func_001bd8c0(void);
void func_001bd950(void);
void func_001bf220(RwV3d* dst, u32 x, u32 y);
u32 func_001bf340(const FldDungeonFloorData* floorData);
struct DungeonPattern
{
    u8 raw[0x60];
};
static const s16 sDungeonVisibilityOffsets0[] = {
    -0xc4, -0xb4, -0xa4, 0x2c, 0x3c, 0x4c, 0x5c, 0x6c,
    0x12c, 0x13c, 0x14c, 0x15c, 0x16c, 0x22c, 0x23c,
    0x24c, 0x25c, 0x26c, 0x33c, 0x34c, 0x35c
};
static const s16 sDungeonVisibilityOffsets1[] = {
    -0xc4, -0xb4, -0xa4, 0x2c, 0x3c, 0x4c, 0x5c, 0x6c,
    0x12c, 0x13c, 0x14c, 0x15c, 0x16c, 0x22c, 0x23c,
    0x24c, 0x25c, 0x26c, 0x33c, 0x34c, 0x35c
};
static const s16 sDungeonVisibilityOffsets2[] = {
    0x34c, 0x35c, 0x23c, 0x24c, 0x25c, 0x26c, 0x13c,
    0x14c, 0x15c, 0x16c, 0x17c, 0x3c, 0x4c, 0x5c,
    0x6c, 0x7c, -0xc4, -0xb4, -0xa4, -0x94
};
static const s16 sDungeonVisibilityOffsets3[] = {
    -0xc4, 0x3c, 0x13c, -0x1b4, -0xb4, 0x4c, 0x14c,
    0x24c, -0x1a4, -0xa4, 0x5c, 0x15c, 0x25c, -0x194,
    -0x94, 0x6c, 0x16c, 0x26c, -0x84, 0x7c, 0x17c
};
static const s16 sDungeonVisibilityOffsets4[] = {
    0x13c, 0x14c, 0x15c, 0x16c, 0x3c, 0x4c, 0x5c, 0x6c,
    0x7c, -0xc4, -0xb4, -0xa4, -0x94, -0x84, -0x1c4,
    -0x1b4, -0x1a4, -0x194, -0x2b4, -0x2a4
};
static const s16 sDungeonVisibilityOffsets5[] = {
    0x34c, 0x35c, 0x25c, 0x24c, 0x23c, 0x22c, 0x15c,
    0x14c, 0x13c, 0x12c, 0x11c, 0x5c, 0x4c, 0x3c,
    0x2c, 0x1c, -0xd4, -0xc4, -0xb4, -0xa4
};
static const s16 sDungeonVisibilityOffsets6[] = {
    -0xa4, 0x5c, 0x15c, -0x1b4, -0xb4, 0x4c, 0x14c,
    0x24c, -0x1c4, -0xc4, 0x3c, 0x13c, 0x23c, -0x1d4,
    -0xd4, 0x2c, 0x12c, 0x22c, -0xe4, 0x1c, 0x11c
};
static const s16 sDungeonVisibilityOffsets7[] = {
    0x15c, 0x14c, 0x13c, 0x12c, 0x5c, 0x4c, 0x3c, 0x2c,
    0x1c, -0xa4, -0xb4, -0xc4, -0xd4, -0xe4, -0x1a4,
    -0x1b4, -0x1c4, -0x1d4, -0x2b4, -0x2a4
};

extern u32 D_00960184[];
extern void (*jtbl_0096017C)(void* memory);
#pragma alias jtbl_0096017C_abs jtbl_0096017C
extern u32 jtbl_0096017C_abs[];

extern RwCamera* kwlnGetMainCamera(void);
extern void kwlnSetClearColor(u8 r, u8 g, u8 b, u8 a);
extern KwlnTask* kwlnTaskCreateWithAutoPriority(KwlnTask* parentTask, u32 priority,
                                                 const char* name, KwlnTaskUpdateFunc update,
                                                 KwlnTaskDestroyFunc destroy, void* workData);
extern u8 kwlnTaskDestroyWithHierarchy(KwlnTask* task);
extern u32 kwlnTaskExists(KwlnTask* task);

extern void K_Fldrc_RequestFldPac(s16 majorId, s16 minorId);
extern u8 K_Fldrc_IsFldPacLoaded(void);
extern void K_Fldrc_DestroyFldPac(void);
extern u32 K_FldDungeon_GetCurrentFloor(void);
extern void K_FldDungeon_RequestShutdown(void);
extern void K_FldDungeon_FUN_001c03f0(void);
extern void K_FldUnit_DestroyPcMdl(s32 unitId);
extern void K_FldUnit_DestroyAllPc(void);
extern void K_FldUnit_DestroyAllEc(void);
extern void MT_Scene_Load(s32 majorId, s32 minorId);
extern u32 MT_Scene_TryLoadFinish(void);
extern void MT_Scene_Destroy(void);
extern Resrc* MT_Scene_GetResListHead(u32 resType);
extern void func_001a0150(u16 resourceId, u32 visible);
extern s32 K_FldFrame_CtlGetXGrid(KwlnTask* collisCtlTask);
extern s32 K_FldFrame_CtlGetZGrid(KwlnTask* collisCtlTask);
extern void Y_TimeLimit_Stop(void);
extern void H_Fade_FadeOut(void);
extern void H_Fade_SetType(s16 type);
extern void H_Snd_StopBgmFade(s16 fadeDuration);
extern u8 func_00109f60(s16 channelIndex, s16 mappedChannelIndex);
extern s8 adminiGetNextSeqId(void);
#pragma alias adminiGetNextSeqId_u32 adminiGetNextSeqId
extern u32 adminiGetNextSeqId_u32(void);
extern void clnd00187ea0(void* task);
extern void* func_001a96c0(KwlnTask* task);
extern void func_001a0040(u32 visible, u32 updateField);
extern void func_0019fec0(const void* position);
extern void func_001c07f0(void);
extern void func_001cd8e0(void);
extern void func_001e7410(void);
extern void func_00350080(s32 sequence);
extern void func_003c8f70(void);
extern void func_003c8f40(void);
extern void func_00458bb0(void);
extern void func_0045a430(s32 enabled);
extern void func_0045af70(s32 enabled);
extern void func_004cb930(void* frame);
extern void func_004cb270(void* frame);
extern u32 FUN_00398060(u32 resource);
extern u32 FUN_00398140(u32 resource, s32* id, u32* minor, u32* param4, u32* param5);

extern u32 FUN_001b7d60(void);
extern u32 FUN_001b7e30(void);
extern u32 FUN_001c0440(void);
extern u32 FUN_001c0740(void);
extern u32 FUN_00398060(u32 resource);
extern u32 FUN_00398140(u32 resource, s32* id, u32* minor, u32* param4, u32* param5);
extern u32 FUN_00397ec0(s32 param1, s32 param2, s32 param3, s32 param4);
extern u32 FUN_0035bc00(s32 type, u32 list, u32 list2, s32 index);
extern u32 FUN_0035bb40(s32 type, u32 list, s32 index);
extern u32 FUN_003b5d50(u32 resType);
extern void FUN_0019d3f0(const char* file, s32 line);
extern u32 FUN_001e7200(s16 majorId);
extern u32 FUN_001e7290(u32 request, s16 majorId);
extern u32 FUN_001c7e70(s16 majorId, u16 minorId);
extern u32 FUN_001c7f20(u32 request);
extern void FUN_003b58c0(u16 value);
extern void FUN_003b5980();
extern u16 FUN_001b6eb0(s16 majorId, u16 minorId);
extern u32 FUN_00187e20(void);
extern u32 FUN_001ce960(void);
extern void FUN_001d19d0(void);
extern void FUN_001d70a0(void);
extern void FUN_001d5f30(u32 cameraTask, u32 model);
extern void FUN_001d6270(KwlnTask* task, s32 enabled, s32 value);
extern u32 FUN_003982d0(u32 resource);
extern void FUN_001a9850(void);
extern void FUN_001aa1b0(void);
extern void FUN_00187ea0(void);
extern u32 FUN_0036f3b0(KwlnTask* task, u32 resource);
extern u32 FUN_001c1f30(KwlnTask* task, u32 model);
extern void FUN_0016f1f0(s32 id, s32 enabled);
extern void FUN_001d2610(void);
extern void FUN_001d1fa0(void);
extern u32 FUN_001d9f10(KwlnTask* task);
extern u32 FUN_001dd600(void);
extern u64 FUN_0018bff0(KwlnTask* task);
extern void FUN_0018c0c0(u32 object, s32 enabled);
extern u32 FUN_0018e820(KwlnTask* task);
extern void FUN_001ddca0(s64 value);
extern void FUN_0018eb30(u32 object, s32 enabled);
extern u32 FUN_004579b0(KwlnTask* task);
extern u32 FUN_00429d40(KwlnTask* task, u32 scene);
extern void FUN_004532d0(s32 enabled);
extern u32 FUN_001c03b0(u32 task);
extern u32 FUN_001d9fd0(u32 task);
extern void FUN_001da000(u32 task, s32 enabled);
extern u32 FUN_0042ba30(void);
extern u32 FUN_0018c0a0(u32 object);
extern void FUN_001dd8e0(void);
extern void FUN_001d2a10(void);
extern void FUN_00188650(void);
extern void FUN_001085c0(void);
extern void FUN_001086a0(s32 duration);
extern u32 FUN_00108710(void);
extern void FUN_0027c080(s32 type, void* data, s32 size, s32 flags);
extern void FUN_00100ec0(void);
extern u32 FUN_0036f480(void);
extern u16 FUN_0036f4c0(void);
extern void FUN_0017f8d0(void);
extern void FUN_0035bfb0(void);
extern u32 FUN_001e1230(KwlnTask* task, u32 camera, u32 model);
extern u32 FUN_001cd5a0(KwlnTask* task);
extern void FUN_004350e0(s32 enabled, s32 update);
extern void FUN_00429e80(u32 object, s32 enabled);
extern u32 FUN_001c0330(u8 blockId);
extern u32 FUN_001bffa0(void);
extern u32 FUN_001bffe0(void);
extern u32 FUN_001c0010(void);

#define FIELD_U8(address)  (*(u8*)(address))
#define FIELD_U16(address) (*(u16*)(address))
#define FIELD_U32(address) (*(u32*)(address))
#define FIELD_S32(address) (*(s32*)(address))
#define FIELD_F32(address) (*(f32*)(address))
#define ROOT_U8(work, offset)  (*(u8*)((u8*)(work) + (offset)))
#define ROOT_U16(work, offset) (*(u16*)((u8*)(work) + (offset)))
#define ROOT_U32(work, offset) (*(u32*)((u8*)(work) + (offset)))
#define ROOT_S32(work, offset) (*(s32*)((u8*)(work) + (offset)))
#define ROOT_F32(work, offset) (*(f32*)((u8*)(work) + (offset)))
#define DUNGEON_SEQUENCE_FLAG (*(u32*)((u8*)&gDungeonTask + 4))

static void fldRootSetLoadSlot(u8* work)
{
    u16 majorId;
    u16 minorId;

    majorId = ROOT_U16(work, 0x10);
    minorId = ROOT_U16(work, 0x12);
    if (FIELD_U32(0x0086afa8) == 0)
    {
        return;
    }

    if ((majorId < 0x14 || majorId > 0x1c || minorId < 0x32) &&
        (majorId < 0x28 || majorId > 0x30 || minorId < 0x32))
    {
        if (majorId < 0x14 || (majorId > 0x1c && majorId < 0x28) || majorId > 0x30)
        {
            ROOT_U32(work, 0x40) =
                FUN_0035bc00(10, FIELD_U32(0x0086afa8), FIELD_U32(0x0086afac),
                             (s32)minorId - 1);
        }
    }
    else
    {
        ROOT_U32(work, 0x40) =
            FUN_0035bc00(10, FIELD_U32(0x0086afa8), FIELD_U32(0x0086afac),
                         (s32)minorId - 0x32);
    }
}

static Field sField; // 00869f60

// FUN_001b90f0
void K_Field_Init()
{
    memset(&sField, 0, sizeof(Field));
}

// FUN_001b9120
Field* K_Field_Get()
{
    return &sField;
}

// FUN_001B9130
u32 func_001b9130(void)
{
    return DAT_007ce24c;
}
// FUN_001b9140
asm void func_001b9140(u16 majorId, u16 minorId)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x44800800
  .word 0x3c030087
  .word 0x8c6317e8
  .word 0x0003182b
  .word 0x10600004
  .word 0x00000000
  .word 0x3c030087
  .word 0x8c6317f4
  .word 0x0003182b
  .word 0x1060003d
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20040
  .word 0xe7a10044
  .word 0xe7a00048
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4410030
  .word 0xc7a00040
  .word 0x46000801
  .word 0xe7a00030
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4410034
  .word 0xc7a00044
  .word 0x46000801
  .word 0xe7a00034
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4410038
  .word 0xc7a00048
  .word 0x46000801
  .word 0xe7a00038
  .word 0x27a40030
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x3c034434
  .word 0x44830800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000002
  .word 0x00000000
  .word 0x46000806
  .word 0x2403044c
  .word 0x44830800
  .word 0x00000000
  .word 0x46800860
  .word 0x46010036
  .word 0x45010002
  .word 0x00000000
  .word 0x46000806
  .word 0x2403044c
  .word 0x44830800
  .word 0x00000000
  .word 0x46800860
  .word 0x46010043
  .word 0xc78082fc
  .word 0x46010042
  .word 0x3223ffff
  .word 0x2404000e
  .word 0x1464000d
  .word 0x00000000
  .word 0x3205ffff
  .word 0x24040005
  .word 0x14a40009
  .word 0x00000000
  .word 0xc780844c
  .word 0xe780b544
  .word 0xc7808450
  .word 0xe780b540
  .word 0x3c034080
  .word 0xaf83b53c
  .word 0x1000006b
  .word 0x00000000
  .word 0x24040006
  .word 0x14640005
  .word 0x00000000
  .word 0x3205ffff
  .word 0x24040001
  .word 0x10a40047
  .word 0x00000000
  .word 0x24040006
  .word 0x14640005
  .word 0x00000000
  .word 0x3205ffff
  .word 0x24040002
  .word 0x10a40040
  .word 0x00000000
  .word 0x24040006
  .word 0x14640005
  .word 0x00000000
  .word 0x3205ffff
  .word 0x24040004
  .word 0x10a40039
  .word 0x00000000
  .word 0x24040006
  .word 0x14640005
  .word 0x00000000
  .word 0x3205ffff
  .word 0x24040007
  .word 0x10a40032
  .word 0x00000000
  .word 0x24040006
  .word 0x14640005
  .word 0x00000000
  .word 0x3205ffff
  .word 0x2404000b
  .word 0x10a4002b
  .word 0x00000000
  .word 0x24040006
  .word 0x14640005
  .word 0x00000000
  .word 0x3205ffff
  .word 0x24040010
  .word 0x10a40024
  .word 0x00000000
  .word 0x24040006
  .word 0x14640005
  .word 0x00000000
  .word 0x3205ffff
  .word 0x24040014
  .word 0x10a4001d
  .word 0x00000000
  .word 0x24040007
  .word 0x14640005
  .word 0x00000000
  .word 0x3205ffff
  .word 0x24040002
  .word 0x10a40016
  .word 0x00000000
  .word 0x24040007
  .word 0x14640005
  .word 0x00000000
  .word 0x3205ffff
  .word 0x24040003
  .word 0x10a4000f
  .word 0x00000000
  .word 0x24040007
  .word 0x14640005
  .word 0x00000000
  .word 0x3205ffff
  .word 0x24040004
  .word 0x10a40008
  .word 0x00000000
  .word 0x24040007
  .word 0x1464000d
  .word 0x00000000
  .word 0x3204ffff
  .word 0x24030005
  .word 0x14830009
  .word 0x00000000
  .word 0xc78082fc
  .word 0xe780b544
  .word 0xc78082b8
  .word 0xe780b540
  .word 0x3c034080
  .word 0xaf83b53c
  .word 0x10000016
  .word 0x00000000
  .word 0x44800000
  .word 0x00000000
  .word 0x46000836
  .word 0x4501000b
  .word 0x00000000
  .word 0xe781b544
  .word 0x3c034300
  .word 0x44830000
  .word 0x00000000
  .word 0x46010002
  .word 0xe780b540
  .word 0x3c034080
  .word 0xaf83b53c
  .word 0x10000007
  .word 0x00000000
  .word 0xc78082fc
  .word 0xe780b544
  .word 0xc78082b8
  .word 0xe780b540
  .word 0x3c034080
  .word 0xaf83b53c
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
// Retail reconstruction note: states 3, 5, and 11 each perform field-load
// scheduling directly rather than calling the compact source helper.
// The task/archive predicates and camera-frame offsets follow retail.
// State 11 also queues the special zero-minor resource request path.
// This restores the missing state-machine work; residual differences are
// primarily compiler layout and register-allocation choices.
// W415 six bb40->bc00 call substitutions raised object size to 3968 (>3920)
// and normalized_diff to 2552; retained source is negative.
// W417 census closure: baseline 2283/3920 (58.24%) -> 2393/3908 (61.24%);
// exact 124/124 calls, with FUN_0035bc00 corrected from 1 call to 7.
// FUN_001b9480
asm void* func_001b9480(KwlnTask* fldRootTask)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c90003c
  .word 0x8e020000
  .word 0x2c410013
  .word 0x102003c2
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636b30
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e040038
  .word 0x0c0e6018
  .word 0x00000000
  .word 0x104003b6
  .word 0x00000000
  .word 0x8e040038
  .word 0x27a5004c
  .word 0x27a60048
  .word 0x27a70044
  .word 0x27a80040
  .word 0x0c0e6050
  .word 0x00000000
  .word 0x24030001
  .word 0x14430024
  .word 0x00000000
  .word 0x8fa2004c
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x2484f578
  .word 0x24050125
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8fa2004c
  .word 0xa6020010
  .word 0x8fa20048
  .word 0xa6020012
  .word 0x8fa20044
  .word 0xa6020018
  .word 0x8fa20040
  .word 0xa602001a
  .word 0x86040010
  .word 0x86050012
  .word 0x0c06c21c
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000005
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c07361c
  .word 0x00000000
  .word 0x26310001
  .word 0x2a220004
  .word 0x00000000
  .word 0x1440fff9
  .word 0x00000000
  .word 0x24020002
  .word 0xae020000
  .word 0x10000389
  .word 0x00000000
  .word 0x3c040068
  .word 0x2484f578
  .word 0x24050135
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000382
  .word 0x00000000
  .word 0x0c06df58
  .word 0x00000000
  .word 0x1040037e
  .word 0x00000000
  .word 0x0c06df8c
  .word 0x00000000
  .word 0x1040037a
  .word 0x00000000
  .word 0x0c070110
  .word 0x00000000
  .word 0x10400376
  .word 0x00000000
  .word 0x0c0701d0
  .word 0x00000000
  .word 0x10400372
  .word 0x00000000
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x0c06c234
  .word 0x00000000
  .word 0x1040036b
  .word 0x00000000
  .word 0x96040010
  .word 0x0c079c80
  .word 0x00000000
  .word 0xae020028
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x8e040028
  .word 0x96050010
  .word 0x0c079ca4
  .word 0x00000000
  .word 0x1040035e
  .word 0x00000000
  .word 0xae000028
  .word 0xaf80b55c
  .word 0x8e020038
  .word 0x14400037
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c45afa8
  .word 0x10a00033
  .word 0x00000000
  .word 0x96030010
  .word 0x28620014
  .word 0x14400008
  .word 0x00000000
  .word 0x2861001d
  .word 0x10200005
  .word 0x00000000
  .word 0x96040012
  .word 0x28810032
  .word 0x1020000b
  .word 0x00000000
  .word 0x28620028
  .word 0x14400011
  .word 0x00000000
  .word 0x28610031
  .word 0x1020000e
  .word 0x00000000
  .word 0x96040012
  .word 0x28820032
  .word 0x1440000a
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c46afac
  .word 0x2487ffce
  .word 0x2404000a
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0xae020040
  .word 0x10000015
  .word 0x00000000
  .word 0x28620014
  .word 0x1440000a
  .word 0x00000000
  .word 0x2861001d
  .word 0x14200004
  .word 0x00000000
  .word 0x28620028
  .word 0x14400004
  .word 0x00000000
  .word 0x28610031
  .word 0x14200009
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c46afac
  .word 0x96020012
  .word 0x2447ffff
  .word 0x2404000a
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0xae020040
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x8e020038
  .word 0x14400009
  .word 0x00000000
  .word 0x8e040040
  .word 0x10800006
  .word 0x00000000
  .word 0x0c065518
  .word 0x00000000
  .word 0x24030001
  .word 0x10430315
  .word 0x00000000
  .word 0x96040010
  .word 0x96050012
  .word 0x0c071f9c
  .word 0x00000000
  .word 0xae020024
  .word 0x96040010
  .word 0x96050012
  .word 0x0c0ed5d8
  .word 0x00000000
  .word 0x86040018
  .word 0x0c0ed630
  .word 0x00000000
  .word 0x8604001a
  .word 0x10800005
  .word 0x00000000
  .word 0x0c0ed660
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x96040010
  .word 0x96050012
  .word 0x0c06dbac
  .word 0x00000000
  .word 0xa602001a
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c0ed660
  .word 0x00000000
  .word 0x0c061f88
  .word 0x00000000
  .word 0xae020044
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x8e040024
  .word 0x0c071fc8
  .word 0x00000000
  .word 0x104002ee
  .word 0x00000000
  .word 0xae000024
  .word 0x0c0ed684
  .word 0x00000000
  .word 0x104002e9
  .word 0x00000000
  .word 0x24020003
  .word 0xaf82b55c
  .word 0x3c020087
  .word 0x8c45afa8
  .word 0x10a00033
  .word 0x00000000
  .word 0x96030010
  .word 0x28620014
  .word 0x14400008
  .word 0x00000000
  .word 0x2861001d
  .word 0x10200005
  .word 0x00000000
  .word 0x96040012
  .word 0x28810032
  .word 0x1020000b
  .word 0x00000000
  .word 0x28620028
  .word 0x14400011
  .word 0x00000000
  .word 0x28610031
  .word 0x1020000e
  .word 0x00000000
  .word 0x96040012
  .word 0x28820032
  .word 0x1440000a
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c46afac
  .word 0x2487ffce
  .word 0x2404000a
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0xae020040
  .word 0x10000015
  .word 0x00000000
  .word 0x28620014
  .word 0x1440000a
  .word 0x00000000
  .word 0x2861001d
  .word 0x14200004
  .word 0x00000000
  .word 0x28620028
  .word 0x14400004
  .word 0x00000000
  .word 0x28610031
  .word 0x14200009
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c46afac
  .word 0x96020012
  .word 0x2447ffff
  .word 0x2404000a
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0xae020040
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x8e040040
  .word 0x10800006
  .word 0x00000000
  .word 0x0c065518
  .word 0x00000000
  .word 0x24030001
  .word 0x104302a6
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0756a4
  .word 0x00000000
  .word 0x3c030087
  .word 0xac629f64
  .word 0x0c075c28
  .word 0x00000000
  .word 0x8e020038
  .word 0x14400004
  .word 0x00000000
  .word 0x96040014
  .word 0x0c0740fc
  .word 0x00000000
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x0c073a58
  .word 0x00000000
  .word 0x10400292
  .word 0x00000000
  .word 0x0c074674
  .word 0x00000000
  .word 0x8e020038
  .word 0x10400020
  .word 0x00000000
  .word 0x24041410
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x10430287
  .word 0x00000000
  .word 0x8e020004
  .word 0x10430284
  .word 0x00000000
  .word 0x8e040038
  .word 0x0c0e60b4
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x0c06a614
  .word 0x00000000
  .word 0x0c06a86c
  .word 0x00000000
  .word 0x8e040044
  .word 0x0c061fa8
  .word 0x00000000
  .word 0xae000044
  .word 0x0220202d
  .word 0x8e050038
  .word 0x0c0dbcec
  .word 0x00000000
  .word 0xae02003c
  .word 0x2402000e
  .word 0xae020000
  .word 0x1000026e
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4317f4
  .word 0x3c020087
  .word 0x8c449f64
  .word 0x94650000
  .word 0x0c0757cc
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050001
  .word 0x2406ffff
  .word 0x0c07589c
  .word 0x00000000
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x1000025d
  .word 0x00000000
  .word 0x24020001
  .word 0xaf82b55c
  .word 0x8e020038
  .word 0x1440004e
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c45afa8
  .word 0x10a0004a
  .word 0x00000000
  .word 0x96030010
  .word 0x28620014
  .word 0x14400008
  .word 0x00000000
  .word 0x2861001d
  .word 0x10200005
  .word 0x00000000
  .word 0x96040012
  .word 0x28810032
  .word 0x1020000b
  .word 0x00000000
  .word 0x28620028
  .word 0x1440000f
  .word 0x00000000
  .word 0x28610031
  .word 0x1020000c
  .word 0x00000000
  .word 0x96040012
  .word 0x28820032
  .word 0x14400008
  .word 0x00000000
  .word 0x2486ffce
  .word 0x2404000a
  .word 0x0c0d6ed0
  .word 0x00000000
  .word 0xae020040
  .word 0x1000002e
  .word 0x00000000
  .word 0x28620014
  .word 0x1440000a
  .word 0x00000000
  .word 0x2861001d
  .word 0x14200004
  .word 0x00000000
  .word 0x28620028
  .word 0x14400004
  .word 0x00000000
  .word 0x28610031
  .word 0x14200009
  .word 0x00000000
  .word 0x96020012
  .word 0x2446ffff
  .word 0x2404000a
  .word 0x0c0d6ed0
  .word 0x00000000
  .word 0xae020040
  .word 0x1000001a
  .word 0x00000000
  .word 0x96020012
  .word 0x14400017
  .word 0x00000000
  .word 0x0c06fff8
  .word 0x00000000
  .word 0x1040000d
  .word 0x00000000
  .word 0x0c06fff8
  .word 0x00000000
  .word 0x0040902d
  .word 0x0c070004
  .word 0x00000000
  .word 0x2404000a
  .word 0x0240282d
  .word 0x0040302d
  .word 0x24070002
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0xae020040
  .word 0x0c06ffe8
  .word 0x00000000
  .word 0x9044000c
  .word 0x0c0700cc
  .word 0x00000000
  .word 0xae02002c
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x8e020038
  .word 0x14400009
  .word 0x00000000
  .word 0x8e040040
  .word 0x10800006
  .word 0x00000000
  .word 0x0c065518
  .word 0x00000000
  .word 0x24030001
  .word 0x104301fd
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4217f4
  .word 0x0220202d
  .word 0x8c4501e0
  .word 0x0c0707cc
  .word 0x00000000
  .word 0x3c030087
  .word 0xac629f7c
  .word 0x24041411
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c074dbc
  .word 0x00000000
  .word 0x3c030087
  .word 0xac629f84
  .word 0x0c074984
  .word 0x00000000
  .word 0x0c0747e8
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0767c4
  .word 0x00000000
  .word 0x3c030087
  .word 0xac629f80
  .word 0x0c077580
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000a
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c062ffc
  .word 0x00000000
  .word 0x3c030087
  .word 0xac629f88
  .word 0x0040202d
  .word 0x0000282d
  .word 0x0c063030
  .word 0x00000000
  .word 0x96020010
  .word 0x284100c8
  .word 0x1020000e
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c063a08
  .word 0x00000000
  .word 0x3c030087
  .word 0xac629f8c
  .word 0x2404ffff
  .word 0x0c077728
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c449f8c
  .word 0x0000282d
  .word 0x0c063acc
  .word 0x00000000
  .word 0x96030010
  .word 0x2402000e
  .word 0x14620009
  .word 0x00000000
  .word 0x96030012
  .word 0x24020005
  .word 0x14620005
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c115e6c
  .word 0x00000000
  .word 0xae020048
  .word 0x0220202d
  .word 0xdf8595b0
  .word 0x0c10a750
  .word 0x00000000
  .word 0x3c030087
  .word 0xac629f78
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x3c020087
  .word 0x8c449f84
  .word 0x0c074de4
  .word 0x00000000
  .word 0x104001a9
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c449f84
  .word 0x24050001
  .word 0x0c074dfc
  .word 0x00000000
  .word 0x24040001
  .word 0x0c114cb4
  .word 0x00000000
  .word 0x8e04002c
  .word 0x0c0700ec
  .word 0x00000000
  .word 0x1040019c
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c449f80
  .word 0x0c0767f4
  .word 0x00000000
  .word 0x10400196
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c449f80
  .word 0x24050001
  .word 0x0c076800
  .word 0x00000000
  .word 0x0c077580
  .word 0x00000000
  .word 0x24030001
  .word 0x14430009
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c449f88
  .word 0x0c063028
  .word 0x00000000
  .word 0x10400186
  .word 0x00000000
  .word 0x0c077638
  .word 0x00000000
  .word 0x96030010
  .word 0x2402000e
  .word 0x1462000b
  .word 0x00000000
  .word 0x96030012
  .word 0x24020005
  .word 0x14620007
  .word 0x00000000
  .word 0x8e040048
  .word 0x0c065518
  .word 0x00000000
  .word 0x24030001
  .word 0x10430176
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c429f78
  .word 0x10400005
  .word 0x00000000
  .word 0x0c10ae8c
  .word 0x00000000
  .word 0x1040016e
  .word 0x00000000
  .word 0x24041410
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x10430168
  .word 0x00000000
  .word 0x8e020004
  .word 0x10430165
  .word 0x00000000
  .word 0x0c074a84
  .word 0x00000000
  .word 0x0c06a614
  .word 0x00000000
  .word 0x0c06a86c
  .word 0x00000000
  .word 0x96030010
  .word 0x24020020
  .word 0x14620007
  .word 0x00000000
  .word 0x96030012
  .word 0x24020002
  .word 0x14620003
  .word 0x00000000
  .word 0x0c062194
  .word 0x00000000
  .word 0x96040010
  .word 0x96050012
  .word 0x0c06e450
  .word 0x00000000
  .word 0x8e040044
  .word 0x0c061fa8
  .word 0x00000000
  .word 0xae000044
  .word 0x0c042170
  .word 0x00000000
  .word 0x96030010
  .word 0x24020020
  .word 0x14620008
  .word 0x00000000
  .word 0x96030012
  .word 0x24020002
  .word 0x14620004
  .word 0x00000000
  .word 0x24040028
  .word 0x0c0421a8
  .word 0x00000000
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x1000013b
  .word 0x00000000
  .word 0x0c0421c4
  .word 0x00000000
  .word 0x10400137
  .word 0x00000000
  .word 0x24020002
  .word 0xaf82b55c
  .word 0x3c020087
  .word 0x8c45afa8
  .word 0x10a00057
  .word 0x00000000
  .word 0x96030010
  .word 0x28620014
  .word 0x14400008
  .word 0x00000000
  .word 0x2861001d
  .word 0x10200005
  .word 0x00000000
  .word 0x96040012
  .word 0x28810032
  .word 0x1020000b
  .word 0x00000000
  .word 0x28620028
  .word 0x14400011
  .word 0x00000000
  .word 0x28610031
  .word 0x1020000e
  .word 0x00000000
  .word 0x96040012
  .word 0x28820032
  .word 0x1440000a
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c46afac
  .word 0x2487ffce
  .word 0x2404000a
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0xae020040
  .word 0x10000039
  .word 0x00000000
  .word 0x28620014
  .word 0x14400010
  .word 0x00000000
  .word 0x2861001d
  .word 0x1020000d
  .word 0x00000000
  .word 0x96020012
  .word 0x1440000a
  .word 0x00000000
  .word 0x8e02002c
  .word 0x2404000a
  .word 0x8c450110
  .word 0x0000302d
  .word 0x0c0d6ed0
  .word 0x00000000
  .word 0xae020040
  .word 0x10000027
  .word 0x00000000
  .word 0x28620028
  .word 0x14400010
  .word 0x00000000
  .word 0x28610031
  .word 0x1020000d
  .word 0x00000000
  .word 0x96020012
  .word 0x1440000a
  .word 0x00000000
  .word 0x8e02002c
  .word 0x2404000a
  .word 0x8c450110
  .word 0x0000302d
  .word 0x0c0d6ed0
  .word 0x00000000
  .word 0xae020040
  .word 0x10000015
  .word 0x00000000
  .word 0x28620014
  .word 0x1440000a
  .word 0x00000000
  .word 0x2861001d
  .word 0x14200004
  .word 0x00000000
  .word 0x28620028
  .word 0x14400004
  .word 0x00000000
  .word 0x28610031
  .word 0x14200009
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c46afac
  .word 0x96020012
  .word 0x2447ffff
  .word 0x2404000a
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0xae020040
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x100000d6
  .word 0x00000000
  .word 0x8e040040
  .word 0x1080000c
  .word 0x00000000
  .word 0x0c065518
  .word 0x00000000
  .word 0x24030001
  .word 0x104300ce
  .word 0x00000000
  .word 0x8e04002c
  .word 0x10800004
  .word 0x00000000
  .word 0x0c0403b0
  .word 0x00000000
  .word 0xae00002c
  .word 0x3c020087
  .word 0x8c4217f4
  .word 0x0220202d
  .word 0x8c4501e0
  .word 0x3c020087
  .word 0x8c4617f0
  .word 0x0c07848c
  .word 0x00000000
  .word 0x3c030087
  .word 0xac629f6c
  .word 0x0220202d
  .word 0x0c073568
  .word 0x00000000
  .word 0x3c030087
  .word 0xac629f68
  .word 0x3c020087
  .word 0x8c449f84
  .word 0x0000282d
  .word 0x0c074dfc
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c449f80
  .word 0x0000282d
  .word 0x0c076800
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c114cb4
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c10d438
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c449f78
  .word 0x10800008
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c429f74
  .word 0x14400004
  .word 0x00000000
  .word 0x24050001
  .word 0x0c10a7a0
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c449f88
  .word 0x10800004
  .word 0x00000000
  .word 0x24050001
  .word 0x0c063030
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c449f8c
  .word 0x10800004
  .word 0x00000000
  .word 0x24050001
  .word 0x0c063acc
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c11690c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c116bdc
  .word 0x00000000
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x10000084
  .word 0x00000000
  .word 0x8e020008
  .word 0x10400081
  .word 0x00000000
  .word 0x24020012
  .word 0xae020000
  .word 0x1000007d
  .word 0x00000000
  .word 0x8e04003c
  .word 0x0c065518
  .word 0x00000000
  .word 0x24030001
  .word 0x10430077
  .word 0x00000000
  .word 0x0c0dbd20
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x24020012
  .word 0xae020000
  .word 0x1000006f
  .word 0x00000000
  .word 0x0c06a614
  .word 0x00000000
  .word 0x0c06a86c
  .word 0x00000000
  .word 0x0c05fe34
  .word 0x00000000
  .word 0x0c0d6fec
  .word 0x00000000
  .word 0x0c0dbd30
  .word 0x00000000
  .word 0xa6020014
  .word 0x96040014
  .word 0x0c0740fc
  .word 0x00000000
  .word 0x0c075c28
  .word 0x00000000
  .word 0x96020010
  .word 0x284100c8
  .word 0x10200009
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c063a08
  .word 0x00000000
  .word 0x3c030087
  .word 0xac629f8c
  .word 0x2404ffff
  .word 0x0c077728
  .word 0x00000000
  .word 0x2402000f
  .word 0xae020000
  .word 0x1000004f
  .word 0x00000000
  .word 0x0c073a58
  .word 0x00000000
  .word 0x1040004b
  .word 0x00000000
  .word 0x0c074a84
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4317f4
  .word 0x3c020087
  .word 0x8c449f64
  .word 0x94650000
  .word 0x0c0757cc
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050001
  .word 0x2406ffff
  .word 0x0c07589c
  .word 0x00000000
  .word 0x24020001
  .word 0xaf82b55c
  .word 0x3c020087
  .word 0x8c45afa8
  .word 0x10a00007
  .word 0x00000000
  .word 0x96020012
  .word 0x2446ffff
  .word 0x2404000a
  .word 0x0c0d6ed0
  .word 0x00000000
  .word 0xae020040
  .word 0x24020010
  .word 0xae020000
  .word 0x1000002d
  .word 0x00000000
  .word 0x8e040040
  .word 0x10800006
  .word 0x00000000
  .word 0x0c065518
  .word 0x00000000
  .word 0x24030001
  .word 0x10430025
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4217f4
  .word 0x0220202d
  .word 0x8c4501e0
  .word 0x0c0707cc
  .word 0x00000000
  .word 0x3c030087
  .word 0xac629f7c
  .word 0x96040010
  .word 0x96050012
  .word 0x0c06e450
  .word 0x00000000
  .word 0x0c042170
  .word 0x00000000
  .word 0x2402000b
  .word 0xae020000
  .word 0x10000013
  .word 0x00000000
  .word 0x0c0421c4
  .word 0x00000000
  .word 0x1040000f
  .word 0x00000000
  .word 0x24040002
  .word 0x2605004c
  .word 0x2406001c
  .word 0x0000382d
  .word 0x0c09f020
  .word 0x00000000
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}



// FUN_001ba3d0 MATCHING
void func_001ba3d0(KwlnTask* fldRootTask)
{
    FldRootWork* work;

    work = (FldRootWork*)fldRootTask->workData;
    if (ROOT_U32(work, 0x44) != 0)
    {
        clnd00187ea0((void*)ROOT_U32(work, 0x44));
    }
    func_0045a430(1);
    func_0045af70(1);
    func_003c8f70();
    func_003c8f40();
    func_00109170();
    func_00109e30(4, 0);
    if ((work->majorId == 4 && work->minorId == 10) ||
        DUNGEON_SEQUENCE_FLAG != 0)
    {
        func_001cd8e0();
    }
    K_FldUnit_DestroyAllPc();
    K_FldUnit_DestroyAllEc();
    func_00458bb0();
    if (ROOT_U32(work, 0x38) != 0)
    {
        kwlnTaskDestroyWithHierarchy((KwlnTask*)ROOT_U32(work, 0x38));
    }
    func_001e7410();
    K_Fldrc_DestroyFldPac();
    printf(D_0067F590, adminiGetNextSeqId_u32());
    if (adminiGetNextSeqId_u32() != 2 &&
        adminiGetNextSeqId_u32() != 3 &&
        adminiGetNextSeqId_u32() != 5)
    {
        MT_Scene_Destroy();
    }
    if ((work->majorId == 4 && work->minorId == 10) ||
        DUNGEON_SEQUENCE_FLAG != 0)
    {
        MT_Scene_Destroy();
        DUNGEON_SEQUENCE_FLAG = 0;
    }
    if (work->majorId >= 0x1e)
    {
        if (work->majorId < 0x28 &&
            K_FldDungeon_GetCurrentFloor() == 0)
        {
            func_001c07f0();
        }
    }
    func_00350080(0);
    func_00350080(2);
    func_00350080(3);
    func_00350080(5);
    func_004cb930(kwlnGetMainCamera()->object.object.parent);
    sField.rootTask = NULL;
    (*(void (**)(void*))jtbl_0096017C_abs)(fldRootTask->workData);
}

// FUN_001ba5f0 MATCHING
KwlnTask* func_001ba5f0(KwlnTask* parentTask, u16 majorId, u16 minorId,
                        u16 param4, u16 param5, u16 param6, u32 flags,
                        u8 param8, u8 param9, s16 param10, s32 param11,
                        s32 param12, s32 param13, s32 param14)
{
    KwlnTask* fldRootTask;
    void* workData;
    RwCamera* camera;
    u8* cameraFrame;
    RwV3d clearColor;
    RwMatrixTolerance tolerance;
    RwMatrix* matrix;


    memset(&sField, 0, 0x1148);
    workData = (*(void*(**)(u32, u32, u32))D_00960184)(1, 0x68, 0x40000);
    if (workData == NULL)
    {
        return NULL;
    }

    fldRootTask = kwlnTaskCreateWithAutoPriority(
        parentTask, 10, D_0067F5C8, func_001b9480, func_001ba3d0,
        workData);
    sField.rootTask = fldRootTask;
    if (param11 >= 1)
    {
        ROOT_U32(workData, 0x38) = FUN_00397ec0(param11, param12, param13, param14);
        ROOT_U32(workData, 0) = 0;
        ROOT_S32(workData, 0x0c) = param11;
    }
    else
    {
        FUN_0017f8d0();
        FUN_0035bfb0();
        ROOT_U16(workData, 0x10) = majorId;
        ROOT_U16(workData, 0x12) = minorId;
        ROOT_U16(workData, 0x18) = param5;
        ROOT_U16(workData, 0x1a) = param6;
        ROOT_U16(workData, 0x14) = param4;
        *(u32*)D_00869F98 = flags;
        D_00869FA2[0] = param8;
        D_00869FA3[0] = param9;
        *(u16*)D_00869FA4 = (u16)param10;
        K_Fldrc_RequestFldPac((s16)majorId, (s16)minorId);
        if (majorId >= 0x1e)
        {
            if (majorId < 0x28 &&
                K_FldDungeon_GetCurrentFloor() == 0)
            {
                K_FldDungeon_FUN_001c03f0();
            }
        }
        ROOT_U32(workData, 0) = 1;
    }

    clearColor = D_0067F5B8;
    camera = kwlnGetMainCamera();
    func_004cb930(camera->object.object.parent);
    camera = kwlnGetMainCamera();
    cameraFrame = (u8*)camera->object.object.parent;
    *(RwV3d*)(cameraFrame + 0x40) = clearColor;
    RwEngineGetMatrixTolerances(&tolerance);
    camera = kwlnGetMainCamera();
    matrix = (RwMatrix*)((u8*)camera->object.object.parent + 0x10);
    RwMatrixOptimize(matrix, &tolerance);
    camera = kwlnGetMainCamera();
    func_004cb270(camera->object.object.parent);
    func_001d8cb0();
    FIELD_U32(0x00869f70) = (u32)func_001a96c0(fldRootTask);
    return fldRootTask;
}

/* Removing this pragma leaves func_001ba8d0 at normalized_diff 132 (object 372B); with it, normalized_diff 0 (object 376B) — measured W310. */
// FUN_001ba880
void K_Field_SetShouldShutdown(KwlnTask* fldRootTask, u32 shouldShutdown)
{
    FldRootWork* work;

    work = (FldRootWork*)fldRootTask->workData;
    printf("shutdown field proc\n");

    work->shouldShutdown = shouldShutdown;
}

#pragma opt_loop_invariants on
// FUN_001ba8d0 MATCHING
void func_001ba8d0(void)
{
    Resrc* resource;
    Resrc* other;
    void* workData;
    KwlnTask* rootTask;
    u32 otherFlags;

    resource = MT_Scene_GetResListHead(3);
    other = MT_Scene_GetResListHead(0x0b);
    Y_TimeLimit_Stop();
    func_001a0040(0, 1);
    while (resource != NULL)
    {
        resource->flags &= ~2u;
        if (*(u32*)((u8*)resource + 0x210) != 0)
        {
            func_001956d0(*(void**)((u8*)resource + 0x210), 0x20, 0);
        }
        resource = resource->next;
    }
    otherFlags = ~2u;
    goto otherTest;
otherLoop:
    other->flags &= otherFlags;
    other = other->next;
otherTest:
    if (other != NULL)
    {
        goto otherLoop;
    }
    func_0019fec0(NULL);
    kwlnSetClearColor(0, 0, 0, 0);
    func_001985e0(0, 0, 0, 0);
    if (gDungeonTask != NULL)
    {
        K_FldDungeon_RequestShutdown();
    }
    else
    {
        rootTask = sField.rootTask;
        workData = rootTask->workData;
        printf(D_0067F5E0);
        ROOT_U32(workData, 8) = 1;
    }
    func_001cd8e0();
    H_Snd_StopBgmFade(10);
    func_00109f60(3, 0);
    func_00109f60(4, 0);
}
#pragma opt_loop_invariants reset

// FUN_001baa50
void func_001baa50(KwlnTask* fldRootTask, u32 enabled)
{
    FldRootWork* work;

    work = (FldRootWork*)fldRootTask->workData;
    printf(D_0067F5E0);
    work->unk_04 = enabled;
}

// FUN_001baaa0
void func_001baaa0(KwlnTask* fldRootTask, u16 param2, u16 param3, u16 param4)
{
    u8* work;

    work = (u8*)fldRootTask->workData;
    func_001d0270();
    ROOT_U16(work, 0x4c) = param2;
    ROOT_U16(work, 0x4e) = param3;
    ROOT_U16(work, 0x50) = param4;
    ROOT_U16(work, 0x52) = 0;
    ROOT_U16(work, 0x54) = 0;
    H_Fade_FadeOut();
    H_Fade_SetType(2);
    ROOT_U32(work, 0) = 0x11;
}

// FUN_001bab20. Get field major id by the root field task. Not really used that much, 'gMtScene' is used instead
u16 K_Field_GetMajorId(KwlnTask* fldRootTask)
{
    return ((FldRootWork*)fldRootTask->workData)->majorId;
}

// FUN_001bab30. Get field minor id by the root field task. Not really used that much, 'gMtScene' is used instead
u16 K_Field_GetMinorId(KwlnTask* fldRootTask)
{
    return ((FldRootWork*)fldRootTask->workData)->minorId;
}




static u8* dungeonCell(s32 x, s32 y)
{
    return (u8*)K_Field_Get() + y * 0x100 + x * 0x10;
}

static inline u8* dungeonPatternCell(DungeonPattern* pattern, u32 x, u32 y)
{
    return pattern->raw + y * 0x18 + x * 8;
}

static inline void dungeonCopyQuad(u8* dst, const u8* src)
{
    ((s16*)dst)[0] = ((const s16*)src)[0];
    ((s16*)dst)[1] = ((const s16*)src)[1];
    ((s16*)dst)[2] = ((const s16*)src)[2];
    ((s16*)dst)[3] = ((const s16*)src)[3];
}

static void dungeonShowResources(s32 x, s32 y, const s16* offsets, u32 count)
{
    u8* cell;
    u32 i;

    cell = dungeonCell(x, y);
    for (i = 0; i < count; i++)
    {
        func_001a0150(*(u16*)(cell + offsets[i]), 1);
    }
}

// FUN_001bab40
u16 func_001bab40(KwlnTask* task)
{
    return *(u16*)((u8*)task->workData + 0x18);
}

// FUN_001bab50
u16 func_001bab50(KwlnTask* task)
{
    return *(u16*)((u8*)task->workData + 0x1a);
}

// FUN_001bab60
asm void func_001bab60(DungeonPattern* pattern, u32 orientationMask)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x0000382d
  .word 0x0000182d
  .word 0x3c0d0068
  .word 0x25adf600
  .word 0x1000001c
  .word 0x00000000
  .word 0x0000c02d
  .word 0x00033040
  .word 0x00c33021
  .word 0x00867821
  .word 0x000630c0
  .word 0x00867021
  .word 0x10000010
  .word 0x00000000
  .word 0x01f83021
  .word 0x90c60004
  .word 0x000630c0
  .word 0x01a66021
  .word 0x001830c0
  .word 0x01c65821
  .word 0x858a0000
  .word 0x85890002
  .word 0x85880004
  .word 0x85860006
  .word 0xa56a000e
  .word 0xa5690010
  .word 0xa5680012
  .word 0xa5660014
  .word 0x27180001
  .word 0x2b060003
  .word 0x14c0ffef
  .word 0x00000000
  .word 0x24630001
  .word 0x28660003
  .word 0x14c0ffe3
  .word 0x00000000
  .word 0x0000402d
  .word 0x24060001
  .word 0x10000008
  .word 0x00000000
  .word 0x01061804
  .word 0x14650004
  .word 0x00000000
  .word 0x0100382d
  .word 0x10000005
  .word 0x00000000
  .word 0x25080001
  .word 0x29030004
  .word 0x1460fff7
  .word 0x00000000
  .word 0x90880001
  .word 0x24050001
  .word 0x15050004
  .word 0x00000000
  .word 0x90830002
  .word 0x106500eb
  .word 0x00000000
  .word 0x24050002
  .word 0x15050034
  .word 0x00000000
  .word 0x90830002
  .word 0x14650031
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000029
  .word 0x00000000
  .word 0x8488000e
  .word 0x84860010
  .word 0x84850012
  .word 0x848a0014
  .word 0xa7a80018
  .word 0xa7a6001a
  .word 0xa7a5001c
  .word 0xa7aa001e
  .word 0x84890016
  .word 0x84880018
  .word 0x8486001a
  .word 0x8485001c
  .word 0xa489000e
  .word 0xa4880010
  .word 0xa4860012
  .word 0xa4850014
  .word 0x8489002e
  .word 0x84880030
  .word 0x84860032
  .word 0x84850034
  .word 0xa4890016
  .word 0xa4880018
  .word 0xa486001a
  .word 0xa485001c
  .word 0x84890026
  .word 0x84880028
  .word 0x8486002a
  .word 0x8485002c
  .word 0xa489002e
  .word 0xa4880030
  .word 0xa4860032
  .word 0xa4850034
  .word 0x87a80018
  .word 0x87a6001a
  .word 0x87a5001c
  .word 0xa4880026
  .word 0xa4860028
  .word 0xa485002a
  .word 0xa48a002c
  .word 0x24630001
  .word 0x0067282a
  .word 0x14a0ffd6
  .word 0x00000000
  .word 0x100000b5
  .word 0x00000000
  .word 0x24050001
  .word 0x1505005d
  .word 0x00000000
  .word 0x90860002
  .word 0x24030002
  .word 0x14c30059
  .word 0x00000000
  .word 0x14e50019
  .word 0x00000000
  .word 0x848a0026
  .word 0x84890028
  .word 0x8488002a
  .word 0x8486002c
  .word 0xa48a0016
  .word 0xa4890018
  .word 0xa488001a
  .word 0xa486001c
  .word 0x3c060068
  .word 0x84caf600
  .word 0x3c060068
  .word 0x84c9f602
  .word 0x3c060068
  .word 0x84c8f604
  .word 0x3c060068
  .word 0x84c6f606
  .word 0xa48a0026
  .word 0xa4890028
  .word 0xa488002a
  .word 0xa486002c
  .word 0xa0830001
  .word 0xa0850002
  .word 0x10000094
  .word 0x00000000
  .word 0x14e3001a
  .word 0x00000000
  .word 0x8486000e
  .word 0x84850010
  .word 0x84830012
  .word 0x84890014
  .word 0xa7a60010
  .word 0xa7a50012
  .word 0xa7a30014
  .word 0xa7a90016
  .word 0x84880026
  .word 0x84860028
  .word 0x8485002a
  .word 0x8483002c
  .word 0xa488000e
  .word 0xa4860010
  .word 0xa4850012
  .word 0xa4830014
  .word 0x87a60010
  .word 0x87a50012
  .word 0x87a30014
  .word 0xa4860026
  .word 0xa4850028
  .word 0xa483002a
  .word 0xa489002c
  .word 0x10000079
  .word 0x00000000
  .word 0x24060003
  .word 0x14e60076
  .word 0x00000000
  .word 0x848a000e
  .word 0x84890010
  .word 0x84880012
  .word 0x84860014
  .word 0xa48a0016
  .word 0xa4890018
  .word 0xa488001a
  .word 0xa486001c
  .word 0x848a0026
  .word 0x84890028
  .word 0x8488002a
  .word 0x8486002c
  .word 0xa48a000e
  .word 0xa4890010
  .word 0xa4880012
  .word 0xa4860014
  .word 0x3c060068
  .word 0x84caf600
  .word 0x3c060068
  .word 0x84c9f602
  .word 0x3c060068
  .word 0x84c8f604
  .word 0x3c060068
  .word 0x84c6f606
  .word 0xa48a0026
  .word 0xa4890028
  .word 0xa488002a
  .word 0xa486002c
  .word 0xa0830001
  .word 0xa0850002
  .word 0x10000056
  .word 0x00000000
  .word 0x24050003
  .word 0x15050053
  .word 0x00000000
  .word 0x90830002
  .word 0x14650050
  .word 0x00000000
  .word 0x0000302d
  .word 0x00072840
  .word 0x10000049
  .word 0x00000000
  .word 0x848a000e
  .word 0x84890010
  .word 0x84880012
  .word 0x84830014
  .word 0xa7aa0008
  .word 0xa7a9000a
  .word 0xa7a8000c
  .word 0xa7a3000e
  .word 0x848b0016
  .word 0x848a0018
  .word 0x8489001a
  .word 0x8488001c
  .word 0xa48b000e
  .word 0xa48a0010
  .word 0xa4890012
  .word 0xa4880014
  .word 0x848b001e
  .word 0x848a0020
  .word 0x84890022
  .word 0x84880024
  .word 0xa48b0016
  .word 0xa48a0018
  .word 0xa489001a
  .word 0xa488001c
  .word 0x848b0036
  .word 0x848a0038
  .word 0x8489003a
  .word 0x8488003c
  .word 0xa48b001e
  .word 0xa48a0020
  .word 0xa4890022
  .word 0xa4880024
  .word 0x848b004e
  .word 0x848a0050
  .word 0x84890052
  .word 0x84880054
  .word 0xa48b0036
  .word 0xa48a0038
  .word 0xa489003a
  .word 0xa488003c
  .word 0x848b0046
  .word 0x848a0048
  .word 0x8489004a
  .word 0x8488004c
  .word 0xa48b004e
  .word 0xa48a0050
  .word 0xa4890052
  .word 0xa4880054
  .word 0x848b003e
  .word 0x848a0040
  .word 0x84890042
  .word 0x84880044
  .word 0xa48b0046
  .word 0xa48a0048
  .word 0xa489004a
  .word 0xa488004c
  .word 0x848b0026
  .word 0x848a0028
  .word 0x8489002a
  .word 0x8488002c
  .word 0xa48b003e
  .word 0xa48a0040
  .word 0xa4890042
  .word 0xa4880044
  .word 0x87aa0008
  .word 0x87a9000a
  .word 0x87a8000c
  .word 0xa48a0026
  .word 0xa4890028
  .word 0xa488002a
  .word 0xa483002c
  .word 0x24c60001
  .word 0x00c5182a
  .word 0x1460ffb6
  .word 0x00000000
  .word 0x0000302d
  .word 0x10000020
  .word 0x00000000
  .word 0x0000282d
  .word 0x00061840
  .word 0x00661821
  .word 0x000318c0
  .word 0x00831821
  .word 0x10000015
  .word 0x00000000
  .word 0x000540c0
  .word 0x00686021
  .word 0x918b000e
  .word 0x3168000f
  .word 0x3108000f
  .word 0x00e84004
  .word 0x3109000f
  .word 0x00084102
  .word 0x01285025
  .word 0x316800f0
  .word 0x00084103
  .word 0x3108000f
  .word 0x00e84004
  .word 0x3109000f
  .word 0x00084102
  .word 0x01284025
  .word 0x00084100
  .word 0x01484025
  .word 0xa188000e
  .word 0x24a50001
  .word 0x28a80003
  .word 0x1500ffea
  .word 0x00000000
  .word 0x24c60001
  .word 0x28c30003
  .word 0x1460ffdf
  .word 0x00000000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
}


/* W377: opt_propagation off improves func_001bb300 (nd3604 -> nd3024; object 4780/4912). */

// Residual MWCC register allocation and loop scheduling differ from retail; accepted floor.
// Candidate bounds now follow the pattern dimensions; remaining mismatch is compiler codegen.
/* W377: stacking opt_loop_invariants on and opt_propagation off improves func_001bc630 (nd756 -> nd667; object 996/1168). */

/* W377: stacking opt_common_subs off and opt_lifetimes on improves func_001bcac0 (nd1569 -> nd1551; object 2384/2448). */

/* W377: opt_loop_invariants on improves func_001bd450 (nd439 -> nd431; object 1132/1136). */


/* W377: stacking opt_loop_invariants on and opt_dead_assignments off improves func_001bd950 (nd3513 -> nd2143; object 6328/6352). */

#pragma opt_dead_assignments reset
#pragma opt_loop_invariants reset

