#include "Kosaka/Field/k_dungeon.h"
#include "Kosaka/k_data.h"
#include "Kosaka/Field/k_field.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Main/g_data.h"
#include "Scene/mt_scene.h"
#include "Scene/resrcManager.h"
#include "Graphics/Model/mdlManager.h"
#include "rw/rwplcore.h"
#include "temporary.h"
#include "h_cdvd.h"
#include "Main/admini.h"
#include "Kosaka/k_sequence.h"
#include "Kosaka/Field/k_unit.h"
#include "Script/scrTraceCode.h"

#pragma alias K_Scene_001a0250_y2 K_Scene_001a0250
#pragma alias func_001a02c0_y2 func_001a02c0
#pragma alias K_FldDungeon_GetCurrentFloor_y2 K_FldDungeon_GetCurrentFloor
#pragma alias MT_Scene_GetResListHead_y2 MT_Scene_GetResListHead
#pragma alias adminiGetNextSeqId_y2 adminiGetNextSeqId
#pragma alias D_006833C0_y2 D_006833C0_y2
#pragma alias D_0086E580_y2 D_0086E580_y2
#pragma alias kwlnGetMainCamera_y2 kwlnGetMainCamera_y2
#pragma alias kwlnTaskDestroyWithHierarchy_y2 kwlnTaskDestroyWithHierarchy_y2
#pragma alias kwlnTaskExists_y2 kwlnTaskExists_y2
#pragma alias K_FldDungeon_RequestShutdown_y2 K_FldDungeon_RequestShutdown_y2
#pragma alias FUN_001c1f30_y2 FUN_001c1f30_y2
#pragma alias func_001bf340_y2 func_001bf340_y2


KwlnTask* gDungeonTask; // 007ce268. NULL when not in tartarus. Task name = "automatic dungeon"
Model* gDungeonTpMdl;   // 007ce280. FOBJ000.RMD, model for the teleport pad. Maybe a cache ?

#define DUNGEON_GET_WORK() ((FldDungeon*)gDungeonTask->workData)

static HCdvd* sDngBtlEffectCdvd; // 007ce258. field/btl_effect/btl_eff.pac

extern void* D_0086BDC0[];
extern u32 D_0086E580[];
extern u32 D_0086E694[];
extern u32 D_006833C0[];
extern void* DAT_0096017c[];
extern void* DAT_00960184[];

HCdvd* K_FldDungeon_RequestScript(void);
void K_FldDungeon_DestroyScrMemory(void);
u32 K_FldDungeon_CreateScrMemory(HCdvd* scrCdvd);
void K_FldDungeon_FUN_001c03f0(void);

s32 func_001bf340(FldDungeonFloorData* floorData);
u32 func_001c0440(void);
u32 func_001c0740(void);
void func_001c07f0(void);
KwlnTask* func_001a9080(KwlnTask* parentTask, const char* path, s32 param_3, HCdvd* cdvd);
u32 func_001a9180(KwlnTask* eplTask);
s32 func_001a91b0(KwlnTask* eplTask, void* data);
KwlnTask* func_001ba5f0(KwlnTask* parentTask, u16 majorId, u16 minorId, u16 param_4,
                         u16 param_5, u16 param_6, u32 flags, u8 param_8, u8 param_9,
                         s16 param_10, s32 param_11, s32 param_12, s32 param_13,
                         s32 param_14);
void func_001baa50(KwlnTask* fldRootTask, u32 enabled);
KwlnTask* func_00447e70(KwlnTask* parentTask, u8 param_2, u8 param_3);
void func_001b3c90(void* resource);

extern void func_001d4180(void);
extern void* func_001a9470(void* resource);
extern void* func_00195020(void* task);
extern void* func_001ad050(void* clump, const RwV4d* center,
                           const RwV3d* extents, void* result);
extern f32 K_FldFrame_CtlGetSphereCollisRadius(KwlnTask* collisCtlTask);
extern void K_FldFrame_CtlCopyPos(RwV3d* dst, KwlnTask* collisCtlTask);
extern void* func_001ad220(void* object, const RwV3d* point, void* result);
extern void* func_00198590(void);
extern RwMatrix* func_004cb2f0(void* camera);
extern void func_004c69f0(RwV3d* out, const RwV3d* in);
extern void* func_00318b00(void* model);
extern void* func_00318b80(void* model);
extern void* kwlnGetMainCamera(void);


typedef struct
{
    u32 state;
    u8 unkData[0x200];
    KwlnTask* collisionTask;
    u8 reserved[4];
} TransWallCtlWork;
typedef struct
{
    Resrc base;
    s32 unk_100;
    Model* model;
    KwlnTask* fadeTask;
    u32 fadeTimer;
    u8 unkData[0x20];
} DungeonModelFld;
typedef struct DungeonNode
{
    u8 unk_00[8];
    u32 active;
    u8 unk_0c[0x0c];
    f32 alpha;
    KwlnTask* fadeTask;
    u32 fadeTimer;
    struct DungeonNode* next;
} DungeonNode;
extern void K_FldFrame_CtlCopyPos(RwV3d* dst, KwlnTask* collisCtlTask);
extern void func_001c1e20(KwlnTask* transWallTask);
extern void func_0017f8d0(void);
extern void func_001d0270(void);
extern void func_00171b50(u32 socialLink);
extern void datSetActiveSocialLink_s16(s16 activeSocialLink);
extern u32 adminiGetNowSeqId_u32(void);
extern u32 adminiGetNextSeqId_u32(void);
typedef struct
{
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u8 unkData[0x12];
} FieldSequenceData;
typedef struct
{
    u8 unkData[0x0c];
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
} SocialLinkSequenceData;
#define DUNGEON_SEQUENCE_FLAG (*(u32*)((u8*)&gDungeonTask + 4)) // 007ce26c
#include "Kosaka/Field/k_event.h"
#include "rw/rprandom.h"
extern u32 DAT_008717e8;
extern u32 DAT_008717f0;
extern u32 DAT_008717f4;
extern f32 fGpffff844c;
extern f32 fGpffff8450;
extern f32 fGpffff82fc;
extern f32 fGpffff82b8;
extern f32 fGpffffb544;
extern f32 fGpffffb540;
extern u32 uGpffffb53c;
extern u8 D_0067F600[];
extern const char D_0067F5E0[];
extern const char D_0067F590[];
extern u8 D_0067F720[];
extern u8 D_0067FA26[];
extern u8 D_00681560[];
extern u8 D_00681866[];
extern u8 D_006833B0[];
extern u8 D_006833B8[];
extern u8 D_006833C0_y2[];
extern u8 D_006833A0[];
extern u8 D_0086E580_y2[];
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
extern KwlnTask* gDungeonTask;
extern u32 D_00960184[];
extern void (*jtbl_0096017C)(void* memory);
extern u32 jtbl_0096017C_abs[];
extern RwCamera* kwlnGetMainCamera_y2(void);
extern void kwlnSetClearColor(u8 r, u8 g, u8 b, u8 a);
extern KwlnTask* kwlnTaskCreateWithAutoPriority(KwlnTask* parentTask, u32 priority,
                                                 const char* name, KwlnTaskUpdateFunc update,
                                                 KwlnTaskDestroyFunc destroy, void* workData);
extern u8 kwlnTaskDestroyWithHierarchy_y2(KwlnTask* task);
extern u32 kwlnTaskExists_y2(KwlnTask* task);
extern void K_Fldrc_RequestFldPac(s16 majorId, s16 minorId);
extern u8 K_Fldrc_IsFldPacLoaded(void);
extern void K_Fldrc_DestroyFldPac(void);
extern u32 K_FldDungeon_GetCurrentFloor(void);
extern void K_FldDungeon_RequestShutdown_y2(void);
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
extern void clnd00187ea0(void* task);
extern void* func_001a96c0(KwlnTask* task);
extern void func_001a0040(u32 visible, u32 updateField);
extern void func_0019fec0(const void* position);
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
extern u32 FUN_001c1f30_y2(KwlnTask* task, u32 model);
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
static Field sField; // 00869f60
extern RwMatrix* FUN_00318b60(void* model);
extern u32 FUN_001d5a90(KwlnTask* task);
extern void func_001d8cb0(void);
extern u32 DAT_007ce24c;
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
u32 func_001bf340_y2(const FldDungeonFloorData* floorData);
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

void* func_001c0880(KwlnTask* task);
void func_001c0920(KwlnTask* task);
static inline void K_Dungeon_ProcessFieldNodes(
    KwlnTask* parentTask,
    DungeonNode* node,
    const RwV4d* collisionQueryPosition,
    void* cameraFrame,
    const RwV3d* cameraDirection,
    u8* queryData,
    RwV3d* probe,
    RwV3d* special,
    u32 extendedProbes)
{
    void* camera;
    u8* fadeWork;
    KwlnTask* child;
    f32 alpha;

    while (node != NULL)
    {
        if (node->active != 0)
        {
            memset(queryData, 0, 0x208);

            probe[0] = *(RwV3d*)((u8*)cameraFrame + 0x30);
            probe[0].x += cameraDirection->x;
            probe[0].y += cameraDirection->y;
            probe[0].z += cameraDirection->z;
            func_001ad220(node, &probe[0], queryData);

            probe[1] = probe[0];
            probe[0] = *(RwV3d*)collisionQueryPosition;
            *(RwV3d*)collisionQueryPosition = probe[1];
            func_001ad220(node, &probe[0], queryData);

            probe[1] = probe[0];
            probe[0] = *(RwV3d*)collisionQueryPosition;
            *(RwV3d*)collisionQueryPosition = probe[1];
            func_001ad220(node, &probe[0], queryData);

            probe[1] = probe[0];
            probe[0] = *(RwV3d*)collisionQueryPosition;
            *(RwV3d*)collisionQueryPosition = probe[1];
            func_001ad220(node, &probe[0], queryData);

            if (extendedProbes != 0)
            {
                if (func_001a01c0() == 0)
                {
                    probe[0] = *(RwV3d*)((u8*)cameraFrame + 0x30);
                    func_001ad220(node, &probe[0], queryData);
                }

                if (gMtScene->fldMajorId == 0x23)
                {
                    camera = kwlnGetMainCamera();
                    cameraFrame = func_004cb2f0(*(void**)((u8*)camera + 4));
                    special[0] = *(RwV3d*)cameraFrame;
                    func_004c69f0(&special[0], &special[0]);
                    special[1] = special[0];
                    special[0].x *= 100.0f;
                    special[0].y *= 100.0f;
                    special[0].z *= 100.0f;
                    special[1].x *= -100.0f;
                    special[1].y *= -100.0f;
                    special[1].z *= -100.0f;
                    special[0].x += *(f32*)((u8*)cameraFrame + 0x30);
                    special[0].y += *(f32*)((u8*)cameraFrame + 0x34);
                    special[0].z += *(f32*)((u8*)cameraFrame + 0x38);
                    special[1].x += *(f32*)((u8*)cameraFrame + 0x30);
                    special[1].y += *(f32*)((u8*)cameraFrame + 0x34);
                    special[1].z += *(f32*)((u8*)cameraFrame + 0x38);
                    func_001ad220(node, &special[0], queryData);
                }
            }

            if (*(u32*)(queryData + 4) > 0)
            {
                if (node->fadeTask == NULL)
                {
                    alpha = node->alpha;
                    if (alpha == 1.0f)
                    {
                        fadeWork = (u8*)((void* (*)(u32, u32, u32))DAT_00960184[0])(
                            1, 0x14, rwMEMHINTDUR_GLOBAL);
                        child = NULL;
                        if (fadeWork != NULL)
                        {
                            child = kwlnTaskCreateWithAutoPriority(
                                parentTask, 10, "field npc alpha",
                                func_001c0880, func_001c0920, fadeWork);
                            *(DungeonNode**)(fadeWork + 4) = node;
                            *(u32*)(fadeWork + 8) = 5;
                            *(f32*)(fadeWork + 0x0c) = 0.0f;
                        }
                        node->fadeTask = child;
                        node->fadeTimer = 0;
                    }
                }
            }
            else if (node->fadeTask == NULL)
            {
                alpha = node->alpha;
                if (alpha == 0.0f)
                {
                    if (node->fadeTimer >= 0xb)
                    {
                        fadeWork = (u8*)((void* (*)(u32, u32, u32))DAT_00960184[0])(
                            1, 0x14, rwMEMHINTDUR_GLOBAL);
                        child = NULL;
                        if (fadeWork != NULL)
                        {
                            child = kwlnTaskCreateWithAutoPriority(
                                parentTask, 10, "field npc alpha",
                                func_001c0880, func_001c0920, fadeWork);
                            *(DungeonNode**)(fadeWork + 4) = node;
                            *(u32*)(fadeWork + 8) = 10;
                            *(f32*)(fadeWork + 0x0c) = 1.0f;
                        }
                        node->fadeTask = child;
                        node->fadeTimer = 0;
                    }
                    else
                    {
                        node->fadeTimer += 1;
                    }
                }
            }
        }
        node = node->next;
    }
}
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

/* W417 failed probe: a switch around only the occupied test (assignment
 * left outside) was byte-identical at nd401/object612; wrapping the normal
 * assignment in case 0 and the assert/continue in default gave nd375/object620
 * and the exact 13-call order. */
/* W418 negatives: removing either/both startX/startY u16 casts was neutral at nd375/object620; changing both locals to u16 regressed nd399/object656 and exceeded the 624-byte window. */
/* W418 accepted: u8 directionLocal assigned from direction before the loops and used for cell->direction; nd375/object620 -> nd301/object624 (rate 60.48% -> 48.24%). */
// W419 accepted: swapping the independent row/col declarations reduced func_001bb090 from nd301/object624/window624 (48.24%) to nd296/object624/window624 (47.44%); no size change.
/* W419 rejected probes: direct direction was nd375/object620/window624 (60.48%), row/col plus direct direction nd376/620/624 (60.65%), u16 directionLocal nd302/624/624 (48.40%), u8 volatile directionLocal nd337/620/624 (54.35%), a direction stack store nd398/632/624 (62.97%), and a direction array nd297/624/624 (47.60%). */
/* W419 rejected start-width probes: startX u16 was nd316/object644/window624 (49.07%), startY u16 with row/col swap nd403/640/624 (62.97%), and both starts u16 nd414/660/624 (62.73%); direction pointer/deref/volatile-pointer and inert placed-local/declaration probes stayed at nd296/624/624 (47.44%) or nd301/624/624 (48.24%). A volatile direction parameter made all 46 scanned functions COMPILE_ERROR. */
// FUN_001bb090
#ifndef PC_BUILD
asm void func_001bb090(const DungeonPattern* pattern, u16 x, u16 y, u16 direction)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0882d
  .word 0x00c0802d
  .word 0xa7a700ae
  .word 0x3235ffff
  .word 0x90820001
  .word 0x02a21021
  .word 0x2442ffff
  .word 0x28420010
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248433a0
  .word 0x24050106
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3216ffff
  .word 0x92820002
  .word 0x02c21021
  .word 0x2442ffff
  .word 0x28420010
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248433a0
  .word 0x24050107
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24120001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x3203ffff
  .word 0x00031a00
  .word 0x00432021
  .word 0x3223ffff
  .word 0x00031900
  .word 0x00831821
  .word 0xa0720049
  .word 0x0000982d
  .word 0x10000055
  .word 0x00000000
  .word 0x0000902d
  .word 0x02d31821
  .word 0x00038a00
  .word 0x00131840
  .word 0x00731821
  .word 0x000318c0
  .word 0x0283f021
  .word 0x10000047
  .word 0x00000000
  .word 0x02b21021
  .word 0x00028100
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02221021
  .word 0x00501021
  .word 0x90420048
  .word 0x14400038
  .word 0x00000000
  .word 0x02b21021
  .word 0x00028100
  .word 0x24170001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02221021
  .word 0x00501021
  .word 0xa0570048
  .word 0x001210c0
  .word 0x03c21021
  .word 0x9057000e
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02221021
  .word 0x00501021
  .word 0xa0570053
  .word 0x92970001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02221021
  .word 0x00501021
  .word 0xa057004f
  .word 0x92970002
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02221021
  .word 0x00501021
  .word 0xa0570050
  .word 0x82970000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02221021
  .word 0x00501021
  .word 0xa057004a
  .word 0x93a200ae
  .word 0x0040b82d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02221021
  .word 0x00501021
  .word 0xa057004e
  .word 0x92970003
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02221021
  .word 0x00501021
  .word 0xa0570052
  .word 0x9397b56c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02221821
  .word 0x00701821
  .word 0xa0770051
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248433a0
  .word 0x24050124
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x26520001
  .word 0x92830001
  .word 0x0243182a
  .word 0x1460ffb7
  .word 0x00000000
  .word 0x26730001
  .word 0x92830002
  .word 0x0263182a
  .word 0x1460ffa9
  .word 0x00000000
  .word 0x8f83b56c
  .word 0x24630001
  .word 0xaf83b56c
  .word 0xdfbf0090
  .word 0x7bbe0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_propagation off
// W415 census negative: adding the missing K_Field_Get before func_001b5380 (direction-expression and no-op probes) changed nd3024->3559/3561 and object4780->4788 against the 4912-byte window; the exact target call was present but the +535 nd rise for +8 bytes was non-proportional, so the probe was reverted.
// Direct census: ours omits one 0x001b9120 (K_Field_Get) immediately before
// 0x001b5380; retail has it there. Baseline 3024/4780 = 63.26% wrong;
// direction-expression probe 3559/4788 = 74.31%, no-op probe 3561/4788 =
// 74.35%. Both add 8 bytes without real code recovery, so retain baseline.
// FUN_001bb300
#ifndef PC_BUILD
asm void func_001bb300(u16 patternId, u16 x, u16 y)
{
  .set noreorder
  .word 0x27bdfe70
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
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080b82d
  .word 0x00a0a82d
  .word 0x00c0a02d
  .word 0x3c020068
  .word 0xdc4333b0
  .word 0x3c020068
  .word 0xc44033b8
  .word 0xffa30170
  .word 0xe7a00178
  .word 0x3282ffff
  .word 0x00028a00
  .word 0x32a2ffff
  .word 0x0002b100
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511821
  .word 0x00761821
  .word 0x90630048
  .word 0x1060049d
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511821
  .word 0x00761821
  .word 0x90630049
  .word 0x10600496
  .word 0x00000000
  .word 0x32a2ffff
  .word 0xafa20100
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00561021
  .word 0x9043004f
  .word 0x8fa20100
  .word 0x00431021
  .word 0x2442ffff
  .word 0x28420010
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248433a0
  .word 0x24050139
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3282ffff
  .word 0xafa20110
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00561021
  .word 0x90430050
  .word 0x8fa20110
  .word 0x00431021
  .word 0x2442ffff
  .word 0x28420010
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248433a0
  .word 0x2405013a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3282ffff
  .word 0x00029200
  .word 0x32a2ffff
  .word 0x00029900
  .word 0x3c024448
  .word 0x4482a800
  .word 0x06a00006
  .word 0x00000000
  .word 0x44950000
  .word 0x00000000
  .word 0x46800520
  .word 0x10000008
  .word 0x00000000
  .word 0x00151842
  .word 0x32a20001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800520
  .word 0x4614a500
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0x00531021
  .word 0x9042004f
  .word 0x2442ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0243c8
  .word 0x44820000
  .word 0x00000000
  .word 0x4601001a
  .word 0x4614a81c
  .word 0xe7a00180
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0x00531021
  .word 0x80420052
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024396
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0xe7a00184
  .word 0x3c024448
  .word 0x4482a800
  .word 0x06800006
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800520
  .word 0x10000008
  .word 0x00000000
  .word 0x00141842
  .word 0x32820001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800520
  .word 0x4614a500
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0x00531021
  .word 0x90420050
  .word 0x2442ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0243c8
  .word 0x44820000
  .word 0x00000000
  .word 0x4601001a
  .word 0x4614a81c
  .word 0xe7a00188
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0x00531021
  .word 0x9042004a
  .word 0x00028080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00508021
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0x00531021
  .word 0x9042004e
  .word 0x24430002
  .word 0x30620003
  .word 0x04610004
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2442fffc
  .word 0x3046ffff
  .word 0x8e04116c
  .word 0x27a50180
  .word 0x0c06d4e0
  .word 0x00000000
  .word 0xafa20124
  .word 0x02e0202d
  .word 0x0040282d
  .word 0x0c0ed9e4
  .word 0x00000000
  .word 0x3050ffff
  .word 0x0200202d
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x7fa200d0
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c067fc4
  .word 0x00000000
  .word 0x0000f02d
  .word 0x0253b821
  .word 0x10000018
  .word 0x00000000
  .word 0x0000902d
  .word 0x8fa20110
  .word 0x005e1021
  .word 0x00029a00
  .word 0x1000000a
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02621821
  .word 0x8fa20100
  .word 0x00521021
  .word 0x00021100
  .word 0x00621021
  .word 0xa450004c
  .word 0x26520001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02e21021
  .word 0x9042004f
  .word 0x0242102a
  .word 0x1440fff1
  .word 0x00000000
  .word 0x27de0001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02e21021
  .word 0x90420050
  .word 0x03c2102a
  .word 0x1440ffe3
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000002d
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x000218c0
  .word 0x8fa20124
  .word 0x00439821
  .word 0x9663011c
  .word 0x14600010
  .word 0x00000000
  .word 0x2404000a
  .word 0x0c069714
  .word 0x00000000
  .word 0x0040202d
  .word 0x8e650128
  .word 0x0c0ed974
  .word 0x00000000
  .word 0x3050ffff
  .word 0x0200202d
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x7ba300d0
  .word 0xac430100
  .word 0x10000011
  .word 0x00000000
  .word 0x24020001
  .word 0x1462000e
  .word 0x00000000
  .word 0x2404000b
  .word 0x0c069714
  .word 0x00000000
  .word 0x0040202d
  .word 0x8e65012c
  .word 0x0c0ed9ac
  .word 0x00000000
  .word 0x3050ffff
  .word 0x0200202d
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x7ba300d0
  .word 0xac430100
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x26520001
  .word 0x8fa20124
  .word 0x8c420118
  .word 0x0242102b
  .word 0x1440ffd0
  .word 0x00000000
  .word 0x8fa20124
  .word 0xac400118
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00561021
  .word 0x9042004a
  .word 0x00028080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501821
  .word 0x8c63116c
  .word 0x8c630a3c
  .word 0x10600394
  .word 0x00000000
  .word 0x0c130e30
  .word 0x00000000
  .word 0x0040902d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00561021
  .word 0x9042004a
  .word 0x00028080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0x8c42116c
  .word 0x8c500a3c
  .word 0x8e040004
  .word 0x3c030001
  .word 0x14830004
  .word 0x00000000
  .word 0x26130028
  .word 0x1000000e
  .word 0x00000000
  .word 0x34620001
  .word 0x14820004
  .word 0x00000000
  .word 0x26130030
  .word 0x10000008
  .word 0x00000000
  .word 0x34620002
  .word 0x14820004
  .word 0x00000000
  .word 0x26130038
  .word 0x10000002
  .word 0x00000000
  .word 0x26130048
  .word 0xafa000f0
  .word 0x1000006a
  .word 0x00000000
  .word 0x0c068094
  .word 0x00000000
  .word 0x24030001
  .word 0x14430061
  .word 0x00000000
  .word 0x96620000
  .word 0x304403ff
  .word 0x26650008
  .word 0xc66c0014
  .word 0xc66d0018
  .word 0xc66e001c
  .word 0x9a660004
  .word 0x8a660007
  .word 0x0c0eda1c
  .word 0x00000000
  .word 0x3044ffff
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x7fa200c0
  .word 0x70401e28
  .word 0x2464011c
  .word 0x24650104
  .word 0xc44c0110
  .word 0xc44d0114
  .word 0xc44e0118
  .word 0x0c079abc
  .word 0x00000000
  .word 0xafa000e0
  .word 0x10000044
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02e21021
  .word 0x9042004e
  .word 0x24430002
  .word 0x30620003
  .word 0x04610004
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2442fffc
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46010302
  .word 0x3c023f80
  .word 0xae420028
  .word 0xae420014
  .word 0xae420000
  .word 0xae400010
  .word 0xae400008
  .word 0xae400004
  .word 0xae400024
  .word 0xae400020
  .word 0xae400018
  .word 0xae400038
  .word 0xae400034
  .word 0xae400030
  .word 0x8e43000c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xae42000c
  .word 0x0240202d
  .word 0x27a50170
  .word 0x24060002
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x8fa200e0
  .word 0x00021840
  .word 0x00621021
  .word 0x00021880
  .word 0x7ba200c0
  .word 0x0043f021
  .word 0x27c4011c
  .word 0x0080282d
  .word 0x0240302d
  .word 0x0c131af8
  .word 0x00000000
  .word 0xc7c1011c
  .word 0xc7a00180
  .word 0x46000800
  .word 0xe7c0011c
  .word 0xc7c10120
  .word 0xc7a00184
  .word 0x46000800
  .word 0xe7c00120
  .word 0xc7c10124
  .word 0xc7a00188
  .word 0x46000800
  .word 0xe7c00124
  .word 0x8fa200e0
  .word 0x24420001
  .word 0xafa200e0
  .word 0x8fa200e0
  .word 0x28420004
  .word 0x1440ffba
  .word 0x00000000
  .word 0x8fa200f0
  .word 0x24420001
  .word 0xafa200f0
  .word 0x26730020
  .word 0x8e030008
  .word 0x8fa200f0
  .word 0x0043102b
  .word 0x1440ff93
  .word 0x00000000
  .word 0x0000202d
  .word 0x8e030010
  .word 0x10000003
  .word 0x00000000
  .word 0x24840001
  .word 0x26730014
  .word 0x0083102b
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x0000f02d
  .word 0x1000005e
  .word 0x00000000
  .word 0x0c068094
  .word 0x00000000
  .word 0x24030001
  .word 0x14430057
  .word 0x00000000
  .word 0xc6620004
  .word 0xc6610008
  .word 0xc660000c
  .word 0xe7a20160
  .word 0xe7a10164
  .word 0xe7a00168
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02e21021
  .word 0x9042004e
  .word 0x24430002
  .word 0x30620003
  .word 0x04610004
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2442fffc
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46010502
  .word 0x3c023f80
  .word 0xae420028
  .word 0xae420014
  .word 0xae420000
  .word 0xae400010
  .word 0xae400008
  .word 0xae400004
  .word 0xae400024
  .word 0xae400020
  .word 0xae400018
  .word 0xae400038
  .word 0xae400034
  .word 0xae400030
  .word 0x8e43000c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xae42000c
  .word 0x0240202d
  .word 0x27a50170
  .word 0x4600a306
  .word 0x24060002
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40160
  .word 0x0080282d
  .word 0x0240302d
  .word 0x0c131af8
  .word 0x00000000
  .word 0xc7a10160
  .word 0xc7a00180
  .word 0x46000800
  .word 0xe7a00160
  .word 0xc7a10164
  .word 0xc7a00184
  .word 0x46000800
  .word 0xe7a00164
  .word 0xc7a10168
  .word 0xc7a00188
  .word 0x46000800
  .word 0xe7a00168
  .word 0xc6600010
  .word 0x4600a500
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x10000002
  .word 0x00000000
  .word 0x4600a501
  .word 0x4600a036
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4500fffa
  .word 0x00000000
  .word 0x2404000f
  .word 0x0c069714
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a50160
  .word 0x4600a306
  .word 0x0c0edae4
  .word 0x00000000
  .word 0x27de0001
  .word 0x26730014
  .word 0x8e020018
  .word 0x03c2102b
  .word 0x1440ffa0
  .word 0x00000000
  .word 0x0000f02d
  .word 0x1000005e
  .word 0x00000000
  .word 0x0c068094
  .word 0x00000000
  .word 0x24030001
  .word 0x14430057
  .word 0x00000000
  .word 0xc6620004
  .word 0xc6610008
  .word 0xc660000c
  .word 0xe7a20150
  .word 0xe7a10154
  .word 0xe7a00158
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02e21021
  .word 0x9042004e
  .word 0x24430002
  .word 0x30620003
  .word 0x04610004
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2442fffc
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46010502
  .word 0x3c023f80
  .word 0xae420028
  .word 0xae420014
  .word 0xae420000
  .word 0xae400010
  .word 0xae400008
  .word 0xae400004
  .word 0xae400024
  .word 0xae400020
  .word 0xae400018
  .word 0xae400038
  .word 0xae400034
  .word 0xae400030
  .word 0x8e43000c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xae42000c
  .word 0x0240202d
  .word 0x27a50170
  .word 0x4600a306
  .word 0x24060002
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40150
  .word 0x0080282d
  .word 0x0240302d
  .word 0x0c131af8
  .word 0x00000000
  .word 0xc7a10150
  .word 0xc7a00180
  .word 0x46000800
  .word 0xe7a00150
  .word 0xc7a10154
  .word 0xc7a00184
  .word 0x46000800
  .word 0xe7a00154
  .word 0xc7a10158
  .word 0xc7a00188
  .word 0x46000800
  .word 0xe7a00158
  .word 0xc6600010
  .word 0x4600a500
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x10000002
  .word 0x00000000
  .word 0x4600a501
  .word 0x4600a036
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4500fffa
  .word 0x00000000
  .word 0x24040010
  .word 0x0c069714
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a50150
  .word 0x4600a306
  .word 0x0c0edb14
  .word 0x00000000
  .word 0x27de0001
  .word 0x26730014
  .word 0x8e020020
  .word 0x03c2102b
  .word 0x1440ffa0
  .word 0x00000000
  .word 0x8e020004
  .word 0x3c010001
  .word 0x34210001
  .word 0x0041082b
  .word 0x14200065
  .word 0x00000000
  .word 0x0000f02d
  .word 0x1000005e
  .word 0x00000000
  .word 0x0c068094
  .word 0x00000000
  .word 0x24030001
  .word 0x14430057
  .word 0x00000000
  .word 0xc6620004
  .word 0xc6610008
  .word 0xc660000c
  .word 0xe7a20140
  .word 0xe7a10144
  .word 0xe7a00148
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02e21021
  .word 0x9042004e
  .word 0x24430002
  .word 0x30620003
  .word 0x04610004
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2442fffc
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46010502
  .word 0x3c023f80
  .word 0xae420028
  .word 0xae420014
  .word 0xae420000
  .word 0xae400010
  .word 0xae400008
  .word 0xae400004
  .word 0xae400024
  .word 0xae400020
  .word 0xae400018
  .word 0xae400038
  .word 0xae400034
  .word 0xae400030
  .word 0x8e43000c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xae42000c
  .word 0x0240202d
  .word 0x27a50170
  .word 0x4600a306
  .word 0x24060002
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40140
  .word 0x0080282d
  .word 0x0240302d
  .word 0x0c131af8
  .word 0x00000000
  .word 0xc7a10140
  .word 0xc7a00180
  .word 0x46000800
  .word 0xe7a00140
  .word 0xc7a10144
  .word 0xc7a00184
  .word 0x46000800
  .word 0xe7a00144
  .word 0xc7a10148
  .word 0xc7a00188
  .word 0x46000800
  .word 0xe7a00148
  .word 0xc6600010
  .word 0x4600a500
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x10000002
  .word 0x00000000
  .word 0x4600a501
  .word 0x4600a036
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4500fffa
  .word 0x00000000
  .word 0x24040011
  .word 0x0c069714
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a50140
  .word 0x4600a306
  .word 0x0c0edb44
  .word 0x00000000
  .word 0x27de0001
  .word 0x26730014
  .word 0x8e020028
  .word 0x03c2102b
  .word 0x1440ffa0
  .word 0x00000000
  .word 0x8e030004
  .word 0x3c010001
  .word 0x34210002
  .word 0x0061082b
  .word 0x14200004
  .word 0x00000000
  .word 0x8e020030
  .word 0x00021140
  .word 0x02629821
  .word 0x3c010001
  .word 0x34210003
  .word 0x0061082b
  .word 0x142001b3
  .word 0x00000000
  .word 0x8e020038
  .word 0x2c410005
  .word 0x14200006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248433a0
  .word 0x24050212
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000f02d
  .word 0x10000060
  .word 0x00000000
  .word 0xc6620004
  .word 0xc6610008
  .word 0xc660000c
  .word 0xe7a20128
  .word 0xe7a1012c
  .word 0xe7a00130
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02e21021
  .word 0x9042004e
  .word 0x24430002
  .word 0x30620003
  .word 0x04610004
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2442fffc
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46010502
  .word 0x3c023f80
  .word 0xae420028
  .word 0xae420014
  .word 0xae420000
  .word 0xae400010
  .word 0xae400008
  .word 0xae400004
  .word 0xae400024
  .word 0xae400020
  .word 0xae400018
  .word 0xae400038
  .word 0xae400034
  .word 0xae400030
  .word 0x8e43000c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xae42000c
  .word 0x0240202d
  .word 0x27a50170
  .word 0x4600a306
  .word 0x24060002
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40128
  .word 0x0080282d
  .word 0x0240302d
  .word 0x0c131af8
  .word 0x00000000
  .word 0xc7a10128
  .word 0xc7a00180
  .word 0x46000800
  .word 0xe7a00128
  .word 0xc7a1012c
  .word 0xc7a00184
  .word 0x46000800
  .word 0xe7a0012c
  .word 0xc7a10130
  .word 0xc7a00188
  .word 0x46000800
  .word 0xe7a00130
  .word 0xc6600010
  .word 0x4600a500
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x10000002
  .word 0x00000000
  .word 0x4600a501
  .word 0x4600a036
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4500fffa
  .word 0x00000000
  .word 0x001e1040
  .word 0x005d1021
  .word 0x24420138
  .word 0x7fa200b0
  .word 0x24040012
  .word 0x0c069714
  .word 0x00000000
  .word 0x7ba300b0
  .word 0xa4620000
  .word 0x70601628
  .word 0x94440000
  .word 0x27a50128
  .word 0x4600a306
  .word 0x0c0edb74
  .word 0x00000000
  .word 0x27de0001
  .word 0x26730014
  .word 0x8e030038
  .word 0x03c3102b
  .word 0x1440ff9e
  .word 0x00000000
  .word 0x24020001
  .word 0x14620009
  .word 0x00000000
  .word 0x97b00138
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00561021
  .word 0xac500054
  .word 0x10000139
  .word 0x00000000
  .word 0x24020003
  .word 0x1462009b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00561021
  .word 0x9043004e
  .word 0x24020003
  .word 0x10620071
  .word 0x00000000
  .word 0x24020002
  .word 0x1062004c
  .word 0x00000000
  .word 0x24020001
  .word 0x10620027
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000124
  .word 0x00000000
  .word 0x3282ffff
  .word 0x00028a00
  .word 0x32a2ffff
  .word 0x00028100
  .word 0x2413ffff
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00501021
  .word 0xac530054
  .word 0x32a2ffff
  .word 0x0002a900
  .word 0x97b30138
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00551021
  .word 0xac530064
  .word 0x3282ffff
  .word 0x00028a00
  .word 0x97b3013a
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00501021
  .word 0xac530154
  .word 0x97b0013c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00551021
  .word 0xac500164
  .word 0x10000102
  .word 0x00000000
  .word 0x3282ffff
  .word 0x00029a00
  .word 0x32a2ffff
  .word 0x00028900
  .word 0x97b00138
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00511021
  .word 0xac500054
  .word 0x32a2ffff
  .word 0x00028100
  .word 0x97b5013c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0xac550064
  .word 0x3282ffff
  .word 0x00029a00
  .word 0x2414ffff
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00511021
  .word 0xac540154
  .word 0x97b1013a
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0xac510164
  .word 0x100000e0
  .word 0x00000000
  .word 0x3282ffff
  .word 0x00029a00
  .word 0x32a2ffff
  .word 0x00028900
  .word 0x97b0013c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00511021
  .word 0xac500054
  .word 0x32a2ffff
  .word 0x00028100
  .word 0x97b5013a
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0xac550064
  .word 0x3282ffff
  .word 0x0002a200
  .word 0x97b30138
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00541021
  .word 0x00511021
  .word 0xac530154
  .word 0x2411ffff
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00541021
  .word 0x00501021
  .word 0xac510164
  .word 0x100000be
  .word 0x00000000
  .word 0x3282ffff
  .word 0x00029a00
  .word 0x32a2ffff
  .word 0x00028900
  .word 0x97b0013a
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00511021
  .word 0xac500054
  .word 0x32a2ffff
  .word 0x00028100
  .word 0x2415ffff
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0xac550064
  .word 0x3282ffff
  .word 0x00029a00
  .word 0x97b4013c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00511021
  .word 0xac540154
  .word 0x97b10138
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0xac510164
  .word 0x1000009c
  .word 0x00000000
  .word 0x24020004
  .word 0x14620099
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00561021
  .word 0x9043004e
  .word 0x24020003
  .word 0x10620071
  .word 0x00000000
  .word 0x24020002
  .word 0x1062004c
  .word 0x00000000
  .word 0x24020001
  .word 0x10620027
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000087
  .word 0x00000000
  .word 0x3282ffff
  .word 0x00028a00
  .word 0x32a2ffff
  .word 0x00028100
  .word 0x97b30138
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00501021
  .word 0xac530054
  .word 0x32a2ffff
  .word 0x0002a900
  .word 0x97b3013a
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00551021
  .word 0xac530064
  .word 0x3282ffff
  .word 0x00028a00
  .word 0x97b3013c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00501021
  .word 0xac530154
  .word 0x97b0013e
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00551021
  .word 0xac500164
  .word 0x10000065
  .word 0x00000000
  .word 0x3282ffff
  .word 0x00028a00
  .word 0x32a2ffff
  .word 0x00028100
  .word 0x97b3013a
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00501021
  .word 0xac530054
  .word 0x32a2ffff
  .word 0x0002a900
  .word 0x97b3013e
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00551021
  .word 0xac530064
  .word 0x3282ffff
  .word 0x00028a00
  .word 0x97b30138
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00501021
  .word 0xac530154
  .word 0x97b0013c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00551021
  .word 0xac500164
  .word 0x10000043
  .word 0x00000000
  .word 0x3282ffff
  .word 0x00028a00
  .word 0x32a2ffff
  .word 0x00028100
  .word 0x97b3013e
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00501021
  .word 0xac530054
  .word 0x32a2ffff
  .word 0x0002a900
  .word 0x97b3013c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00551021
  .word 0xac530064
  .word 0x3282ffff
  .word 0x00028a00
  .word 0x97b3013a
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00501021
  .word 0xac530154
  .word 0x97b00138
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00551021
  .word 0xac500164
  .word 0x10000021
  .word 0x00000000
  .word 0x3282ffff
  .word 0x00028a00
  .word 0x32a2ffff
  .word 0x00028100
  .word 0x97b3013c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00501021
  .word 0xac530054
  .word 0x32a2ffff
  .word 0x0002a900
  .word 0x97b30138
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00551021
  .word 0xac530064
  .word 0x3282ffff
  .word 0x00028a00
  .word 0x97b3013e
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00501021
  .word 0xac530154
  .word 0x97b0013a
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00551021
  .word 0xac500164
  .word 0x0240202d
  .word 0x0c130e20
  .word 0x00000000
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
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0190
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_propagation reset

#pragma opt_loop_invariants on
#pragma opt_propagation off
// FUN_001bc630
#ifndef PC_BUILD
asm u32 func_001bc630(const DungeonPattern* pattern, s32* x, s32* y)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a82d
  .word 0xafa500ac
  .word 0xafa600a8
  .word 0x0000802d
  .word 0x8cd40000
  .word 0x1000002b
  .word 0x00000000
  .word 0x0000982d
  .word 0x8fa200ac
  .word 0x8c560000
  .word 0x10000020
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000015
  .word 0x00000000
  .word 0x0000882d
  .word 0x02921021
  .word 0x0002ba00
  .word 0x1000000b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02e21821
  .word 0x02d11021
  .word 0x00021100
  .word 0x00621021
  .word 0x90420048
  .word 0x1440000d
  .word 0x00000000
  .word 0x26310001
  .word 0x92a20001
  .word 0x0222102a
  .word 0x1440fff3
  .word 0x00000000
  .word 0x26520001
  .word 0x92a20002
  .word 0x0242102a
  .word 0x1440ffe9
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x26730001
  .word 0x26d6ffff
  .word 0x92a20001
  .word 0x0262102a
  .word 0x1440ffde
  .word 0x00000000
  .word 0x26100001
  .word 0x2694ffff
  .word 0x92a20002
  .word 0x0202102a
  .word 0x1440ffd3
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000d5
  .word 0x00000000
  .word 0xafb400a4
  .word 0x0000f02d
  .word 0x100000c7
  .word 0x00000000
  .word 0x0000982d
  .word 0x02c0b82d
  .word 0x001e1040
  .word 0x005e1021
  .word 0x000210c0
  .word 0x02a29021
  .word 0x00148a00
  .word 0x100000b8
  .word 0x00000000
  .word 0x2402000e
  .word 0x1682000a
  .word 0x00000000
  .word 0x001310c0
  .word 0x02421021
  .word 0x9042000e
  .word 0x30420040
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000bc
  .word 0x00000000
  .word 0x24020001
  .word 0x1682000a
  .word 0x00000000
  .word 0x001310c0
  .word 0x02421021
  .word 0x9042000e
  .word 0x30420010
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000b0
  .word 0x00000000
  .word 0x2402000e
  .word 0x16e2000a
  .word 0x00000000
  .word 0x001310c0
  .word 0x02421021
  .word 0x9042000e
  .word 0x30420080
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000a4
  .word 0x00000000
  .word 0x24020001
  .word 0x16e2000a
  .word 0x00000000
  .word 0x001310c0
  .word 0x02421021
  .word 0x9042000e
  .word 0x30420020
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000098
  .word 0x00000000
  .word 0x00178100
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02221021
  .word 0x00501021
  .word 0x9042ff48
  .word 0x1040001b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02221021
  .word 0x00501021
  .word 0x9042ff53
  .word 0x30420040
  .word 0x1040000a
  .word 0x00000000
  .word 0x001310c0
  .word 0x02421021
  .word 0x9042000e
  .word 0x30420010
  .word 0x1440000d
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000007f
  .word 0x00000000
  .word 0x001310c0
  .word 0x02421021
  .word 0x9042000e
  .word 0x30420010
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000076
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02221021
  .word 0x00501021
  .word 0x90420038
  .word 0x1040001b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02221021
  .word 0x00501021
  .word 0x90420043
  .word 0x30420080
  .word 0x1040000a
  .word 0x00000000
  .word 0x001310c0
  .word 0x02421021
  .word 0x9042000e
  .word 0x30420020
  .word 0x1440000d
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000005e
  .word 0x00000000
  .word 0x001310c0
  .word 0x02421021
  .word 0x9042000e
  .word 0x30420020
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000055
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02221021
  .word 0x00501021
  .word 0x90420148
  .word 0x1040001b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02221021
  .word 0x00501021
  .word 0x90420153
  .word 0x30420010
  .word 0x1040000a
  .word 0x00000000
  .word 0x001310c0
  .word 0x02421021
  .word 0x9042000e
  .word 0x30420040
  .word 0x1440000d
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000003d
  .word 0x00000000
  .word 0x001310c0
  .word 0x02421021
  .word 0x9042000e
  .word 0x30420040
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000034
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02221021
  .word 0x00501021
  .word 0x90420058
  .word 0x1040001b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02221021
  .word 0x00501021
  .word 0x90420063
  .word 0x30420020
  .word 0x1040000a
  .word 0x00000000
  .word 0x001310c0
  .word 0x02421021
  .word 0x9042000e
  .word 0x30420080
  .word 0x1440000d
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000001c
  .word 0x00000000
  .word 0x001310c0
  .word 0x02421021
  .word 0x9042000e
  .word 0x30420080
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000013
  .word 0x00000000
  .word 0x26730001
  .word 0x26f70001
  .word 0x92a20001
  .word 0x0262102a
  .word 0x1440ff46
  .word 0x00000000
  .word 0x27de0001
  .word 0x26940001
  .word 0x92a20002
  .word 0x03c2102a
  .word 0x1440ff37
  .word 0x00000000
  .word 0x8fa200ac
  .word 0xac560000
  .word 0x8fa300a4
  .word 0x8fa200a8
  .word 0xac430000
  .word 0x24020001
  .word 0xdfbf0090
  .word 0x7bbe0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_propagation reset
#pragma opt_loop_invariants reset

#pragma opt_common_subs off
#pragma opt_lifetimes on
// FUN_001bcac0
#ifndef PC_BUILD
asm void func_001bcac0(u32 patternId, u32 x, u32 y, u32 fromX, u32 fromY)
{
  .set noreorder
  .word 0x27bdfe90
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x00c0802d
  .word 0x00e0a82d
  .word 0x0100b02d
  .word 0x0010a200
  .word 0x00119900
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00541821
  .word 0x00731821
  .word 0x90630048
  .word 0x1460023e
  .word 0x00000000
  .word 0x8f84b574
  .word 0x24030001
  .word 0x1083023a
  .word 0x00000000
  .word 0x12200008
  .word 0x00000000
  .word 0x2403000f
  .word 0x12230005
  .word 0x00000000
  .word 0x12000003
  .word 0x00000000
  .word 0x16030003
  .word 0x00000000
  .word 0x1000022f
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x9043003e
  .word 0x1623003a
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x9043003f
  .word 0x16030035
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x14400011
  .word 0x00000000
  .word 0x2402035c
  .word 0x02421818
  .word 0x3c020068
  .word 0x2442fa26
  .word 0x00432821
  .word 0x27a40110
  .word 0x2403002b
  .word 0x84a20000
  .word 0x24a50002
  .word 0x2463ffff
  .word 0xa4820000
  .word 0x24840002
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x2402035c
  .word 0x02421818
  .word 0x3c020068
  .word 0x24421866
  .word 0x00432821
  .word 0x27a40110
  .word 0x2403002b
  .word 0x84a20000
  .word 0x24a50002
  .word 0x2463ffff
  .word 0xa4820000
  .word 0x24840002
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x90430041
  .word 0x24020001
  .word 0x00622804
  .word 0x27a40110
  .word 0x0c06ead8
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x90470041
  .word 0x3225ffff
  .word 0x3206ffff
  .word 0x27a40110
  .word 0x0c06ec24
  .word 0x00000000
  .word 0x10000192
  .word 0x00000000
  .word 0xaf80b570
  .word 0x02939821
  .word 0x00162200
  .word 0x00151900
  .word 0x0083b021
  .word 0x2403035c
  .word 0x02432018
  .word 0x3c030068
  .word 0x2463f720
  .word 0x0064b821
  .word 0x3c030068
  .word 0x24631560
  .word 0x0064f021
  .word 0x8f83b570
  .word 0x24630001
  .word 0xaf83b570
  .word 0x2c612711
  .word 0x14200005
  .word 0x00000000
  .word 0x24030001
  .word 0xaf83b574
  .word 0x100001da
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x9042003c
  .word 0x16220048
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x9042003d
  .word 0x16020043
  .word 0x00000000
  .word 0x0000a02d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02621021
  .word 0x9042ff48
  .word 0x10400009
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02621021
  .word 0x9042ff53
  .word 0x30420040
  .word 0x10400002
  .word 0x00000000
  .word 0x26940001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02621021
  .word 0x90420038
  .word 0x10400009
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02621021
  .word 0x90420043
  .word 0x30420080
  .word 0x10400002
  .word 0x00000000
  .word 0x26940001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02621021
  .word 0x90420148
  .word 0x10400009
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02621021
  .word 0x90420153
  .word 0x30420010
  .word 0x10400002
  .word 0x00000000
  .word 0x26940001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02621821
  .word 0x90630058
  .word 0x10600009
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02621821
  .word 0x90630063
  .word 0x30630020
  .word 0x10600002
  .word 0x00000000
  .word 0x26940001
  .word 0x2a810002
  .word 0x1020ffb1
  .word 0x00000000
  .word 0x24140005
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30550003
  .word 0x10000022
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30420007
  .word 0x24540001
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30550003
  .word 0x24020002
  .word 0x12820004
  .word 0x00000000
  .word 0x24020004
  .word 0x16820015
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02c21021
  .word 0x90420048
  .word 0x1040000f
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02c21821
  .word 0x9064004a
  .word 0x24030001
  .word 0x1083ff91
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02c21821
  .word 0x9064004a
  .word 0x24030003
  .word 0x1083ff8a
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x1440000f
  .word 0x00000000
  .word 0x24020056
  .word 0x02821018
  .word 0x02e22821
  .word 0x27a40110
  .word 0x2403002b
  .word 0x84a20000
  .word 0x24a50002
  .word 0x2463ffff
  .word 0xa4820000
  .word 0x24840002
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x24020056
  .word 0x02821018
  .word 0x03c22821
  .word 0x27a40110
  .word 0x2403002b
  .word 0x84a20000
  .word 0x24a50002
  .word 0x2463ffff
  .word 0xa4820000
  .word 0x24840002
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x24020001
  .word 0x02a22804
  .word 0x27a40110
  .word 0x0c06ead8
  .word 0x00000000
  .word 0xafb1016c
  .word 0xafb00168
  .word 0x27a40110
  .word 0x27a5016c
  .word 0x27a60168
  .word 0x0c06f18c
  .word 0x00000000
  .word 0x24030001
  .word 0x1443ff5d
  .word 0x00000000
  .word 0x97a5016c
  .word 0x97a60168
  .word 0x00153c3c
  .word 0x00073c3f
  .word 0x27a40110
  .word 0x0c06ec24
  .word 0x00000000
  .word 0x8fb1016c
  .word 0x8fb00168
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c430038
  .word 0x30630001
  .word 0x146000d2
  .word 0x00000000
  .word 0x0000a82d
  .word 0x100000cb
  .word 0x00000000
  .word 0x0000b02d
  .word 0x02151821
  .word 0x0003a200
  .word 0x2697ff48
  .word 0x269eff58
  .word 0x2683ff38
  .word 0x7fa300d0
  .word 0x2683fe48
  .word 0x7fa300c0
  .word 0x100000bb
  .word 0x00000000
  .word 0x02361021
  .word 0x00029900
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02e21021
  .word 0x00531021
  .word 0x90420000
  .word 0x14400029
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02821021
  .word 0x00531021
  .word 0x90420053
  .word 0x30420010
  .word 0x14400021
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x03c21021
  .word 0x00531021
  .word 0x90430000
  .word 0x24020001
  .word 0x10620019
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x7ba300d0
  .word 0x00621021
  .word 0x00531021
  .word 0x90430000
  .word 0x24020001
  .word 0x10620010
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x7ba300c0
  .word 0x00621021
  .word 0x00531021
  .word 0x90430000
  .word 0x24020001
  .word 0x10620007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02e21021
  .word 0x00531821
  .word 0x24020002
  .word 0xa0620000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02821021
  .word 0x00531021
  .word 0x90420038
  .word 0x14400028
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02821021
  .word 0x00531021
  .word 0x90420053
  .word 0x30420020
  .word 0x14400020
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x7ba300d0
  .word 0x00621021
  .word 0x00531021
  .word 0x90430000
  .word 0x24020001
  .word 0x10620017
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02821021
  .word 0x00531021
  .word 0x90430138
  .word 0x24020001
  .word 0x1062000f
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02821021
  .word 0x00531021
  .word 0x90430028
  .word 0x24020001
  .word 0x10620007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02821021
  .word 0x00531821
  .word 0x24020002
  .word 0xa0620038
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02821021
  .word 0x00531021
  .word 0x90420148
  .word 0x14400027
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02821021
  .word 0x00531021
  .word 0x90420053
  .word 0x30420040
  .word 0x1440001f
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02821021
  .word 0x00531021
  .word 0x90430158
  .word 0x24020001
  .word 0x10620017
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02821021
  .word 0x00531021
  .word 0x90430138
  .word 0x24020001
  .word 0x1062000f
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02821021
  .word 0x00531021
  .word 0x90430248
  .word 0x24020001
  .word 0x10620007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02821021
  .word 0x00531821
  .word 0x24020002
  .word 0xa0620148
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02821821
  .word 0x00731821
  .word 0x90630058
  .word 0x14600027
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02821821
  .word 0x00731821
  .word 0x90630053
  .word 0x30630080
  .word 0x1460001f
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x03c21821
  .word 0x00731821
  .word 0x90640000
  .word 0x24030001
  .word 0x10830017
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02821821
  .word 0x00731821
  .word 0x90640158
  .word 0x24030001
  .word 0x1083000f
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02821821
  .word 0x00731821
  .word 0x90640068
  .word 0x24030001
  .word 0x10830007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02821821
  .word 0x00732021
  .word 0x24030002
  .word 0xa0830058
  .word 0x26d60001
  .word 0x93a30111
  .word 0x02c3182b
  .word 0x1460ff43
  .word 0x00000000
  .word 0x26b50001
  .word 0x93a30112
  .word 0x02a3182b
  .word 0x1460ff33
  .word 0x00000000
  .word 0x0000b02d
  .word 0x10000059
  .word 0x00000000
  .word 0x0000b82d
  .word 0x0216a821
  .word 0x00151a00
  .word 0x7fa300b0
  .word 0x26beffff
  .word 0x26a30001
  .word 0xafa30100
  .word 0x1000004b
  .word 0x00000000
  .word 0x0000982d
  .word 0x0237a021
  .word 0x00142100
  .word 0x7ba300b0
  .word 0x00641821
  .word 0x7fa300a0
  .word 0x2683ffff
  .word 0xafa300f0
  .word 0x26830001
  .word 0xafa300e0
  .word 0x1000003b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x7ba300a0
  .word 0x00621821
  .word 0x90650053
  .word 0x26630004
  .word 0x24040001
  .word 0x00641804
  .word 0x00651824
  .word 0x1060002f
  .word 0x00000000
  .word 0x24030003
  .word 0x12630025
  .word 0x00000000
  .word 0x24030002
  .word 0x12630019
  .word 0x00000000
  .word 0x1264000e
  .word 0x00000000
  .word 0x12600003
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x0240202d
  .word 0x0280282d
  .word 0x03c0302d
  .word 0x0280382d
  .word 0x02a0402d
  .word 0x0c06f2b0
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x0240202d
  .word 0x8fa500f0
  .word 0x02a0302d
  .word 0x0280382d
  .word 0x02a0402d
  .word 0x0c06f2b0
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x0240202d
  .word 0x0280282d
  .word 0x8fa60100
  .word 0x0280382d
  .word 0x02a0402d
  .word 0x0c06f2b0
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0240202d
  .word 0x8fa500e0
  .word 0x02a0302d
  .word 0x0280382d
  .word 0x02a0402d
  .word 0x0c06f2b0
  .word 0x00000000
  .word 0x26730001
  .word 0x2e630004
  .word 0x1460ffc4
  .word 0x00000000
  .word 0x26f70001
  .word 0x93a30111
  .word 0x02e3182b
  .word 0x1460ffb3
  .word 0x00000000
  .word 0x26d60001
  .word 0x93a30112
  .word 0x02c3182b
  .word 0x1460ffa5
  .word 0x00000000
  .word 0xdfbf0090
  .word 0x7bbe0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0170
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_lifetimes reset
#pragma opt_common_subs reset

#pragma opt_loop_invariants on
// FUN_001bd450
#ifndef PC_BUILD
asm void func_001bd450(u32 patternId)
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
  .word 0x0080b02d
  .word 0x100000e2
  .word 0x00000000
  .word 0xaf80b574
  .word 0xaf80b56c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x24440048
  .word 0x0000282d
  .word 0x24061000
  .word 0x0c148502
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000000c
  .word 0x00000000
  .word 0x00118100
  .word 0x24120002
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0xa0520048
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0xa0520f48
  .word 0x26310001
  .word 0x2e220010
  .word 0x1440fff3
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000000c
  .word 0x00000000
  .word 0x00118200
  .word 0x24120002
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0xa0520048
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0xa0520138
  .word 0x26310001
  .word 0x2e220010
  .word 0x1440fff3
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0xa040003c
  .word 0x301000ff
  .word 0x0c06e448
  .word 0x00000000
  .word 0xa040003d
  .word 0x0200902d
  .word 0x1000001d
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x2403000c
  .word 0x0043001b
  .word 0x00001010
  .word 0x24420002
  .word 0x305000ff
  .word 0x0c06e448
  .word 0x00000000
  .word 0xa050003c
  .word 0x321000ff
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x2403000c
  .word 0x0043001b
  .word 0x00001010
  .word 0x24420002
  .word 0x305100ff
  .word 0x0c06e448
  .word 0x00000000
  .word 0xa051003d
  .word 0x323200ff
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30510003
  .word 0x0c06e448
  .word 0x00000000
  .word 0xa0510040
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00121a00
  .word 0x00431821
  .word 0x00101100
  .word 0x00621021
  .word 0x90420048
  .word 0x1440ffdc
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0xa040003e
  .word 0x301000ff
  .word 0x0c06e448
  .word 0x00000000
  .word 0xa040003f
  .word 0x0200902d
  .word 0x1000001d
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x2403000b
  .word 0x0043001b
  .word 0x00001010
  .word 0x24420002
  .word 0x305000ff
  .word 0x0c06e448
  .word 0x00000000
  .word 0xa050003e
  .word 0x321000ff
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x2403000b
  .word 0x0043001b
  .word 0x00001010
  .word 0x24420002
  .word 0x305100ff
  .word 0x0c06e448
  .word 0x00000000
  .word 0xa051003f
  .word 0x323200ff
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30510003
  .word 0x0c06e448
  .word 0x00000000
  .word 0xa0510041
  .word 0x00128a00
  .word 0x00108100
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00501021
  .word 0x90420048
  .word 0x1440ffdc
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00501021
  .word 0x90420058
  .word 0x1440ffd5
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00501021
  .word 0x90420148
  .word 0x1440ffce
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x00501021
  .word 0x90420158
  .word 0x1440ffc7
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x9050003e
  .word 0x0c06e448
  .word 0x00000000
  .word 0x9046003f
  .word 0x02c0202d
  .word 0x0200282d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c06f2b0
  .word 0x00000000
  .word 0x0000882d
  .word 0x0000982d
  .word 0x0000902d
  .word 0x1000001d
  .word 0x00000000
  .word 0x0000a02d
  .word 0x00118200
  .word 0x10000015
  .word 0x00000000
  .word 0x0014a900
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02021021
  .word 0x00551021
  .word 0x90430048
  .word 0x24020001
  .word 0x14620002
  .word 0x00000000
  .word 0x26730001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02021021
  .word 0x00551021
  .word 0x9043004a
  .word 0x24020004
  .word 0x14620002
  .word 0x00000000
  .word 0x26520001
  .word 0x26940001
  .word 0x2e820010
  .word 0x1440ffea
  .word 0x00000000
  .word 0x26310001
  .word 0x2e220010
  .word 0x1440ffe2
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x90420043
  .word 0x0053082a
  .word 0x14200007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x90420042
  .word 0x0262082a
  .word 0x10200003
  .word 0x00000000
  .word 0x24020001
  .word 0xaf82b574
  .word 0x2a410002
  .word 0x10200003
  .word 0x00000000
  .word 0x24020001
  .word 0xaf82b574
  .word 0x0c06e448
  .word 0x00000000
  .word 0x9042003d
  .word 0x00028200
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00508021
  .word 0x0c06e448
  .word 0x00000000
  .word 0x9042003c
  .word 0x00021100
  .word 0x02021021
  .word 0x90430048
  .word 0x24020001
  .word 0x1462ff10
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x9042003d
  .word 0x00028200
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00508021
  .word 0x0c06e448
  .word 0x00000000
  .word 0x9043003c
  .word 0x00031900
  .word 0x02031821
  .word 0x9064004a
  .word 0x24030004
  .word 0x1483ff00
  .word 0x00000000
  .word 0x8f84b574
  .word 0x24030001
  .word 0x1083fefc
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
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants reset

// FUN_001bd8c0
void func_001bd8c0(void)
{
    s32 y;
    s32 x;
    u32 rowOffset;
    u32 packed;

    for (y = 0; y < 0x10; y++)
    {
        x = 0;
        rowOffset = (u32)(y << 4);
        for (; x < 0x10; x++)
        {
            packed = (u32)x + rowOffset;
            func_001bb300((u16)packed, (u16)x, (u16)y);
        }
    }
}

#pragma opt_loop_invariants on
#pragma opt_dead_assignments off
// FUN_001bd950
#pragma push
#ifndef PC_BUILD
asm void func_001bd950(void)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0c068094
  .word 0x00000000
  .word 0x24030001
  .word 0x10430006
  .word 0x00000000
  .word 0x0c0680b0
  .word 0x00000000
  .word 0x24030001
  .word 0x1443061a
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040802d
  .word 0x24040400
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040982d
  .word 0x2404000a
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040902d
  .word 0x2404000b
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040882d
  .word 0x1260001c
  .word 0x00000000
  .word 0x8e6401e0
  .word 0x0c06b644
  .word 0x00000000
  .word 0xaf82b560
  .word 0x8e6401e0
  .word 0x0c06b648
  .word 0x00000000
  .word 0xaf82b564
  .word 0x2403fffd
  .word 0x10000005
  .word 0x00000000
  .word 0x8e020028
  .word 0x00431024
  .word 0xae020028
  .word 0x8e1000f8
  .word 0x00000000
  .word 0x1600fffa
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e020028
  .word 0x34420002
  .word 0xae020028
  .word 0x8e1000f8
  .word 0x00000000
  .word 0x1600fffa
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x8f90b560
  .word 0x8f93b564
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c420004
  .word 0x24440010
  .word 0x0c0696a8
  .word 0x00000000
  .word 0x3c0241b4
  .word 0x44820800
  .word 0x00000000
  .word 0x46010036
  .word 0x450000b3
  .word 0x00000000
  .word 0x3c02c1b4
  .word 0x44820800
  .word 0x00000000
  .word 0x46010034
  .word 0x450100ad
  .word 0x00000000
  .word 0x00139a00
  .word 0x00108100
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff3c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff4c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff5c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444002c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444003c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444004c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444005c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444006c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444012c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444013c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444014c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444015c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444016c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444022c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444023c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444024c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444025c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444026c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444033c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444034c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444035c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x100004ea
  .word 0x00000000
  .word 0x3c0241b4
  .word 0x44820800
  .word 0x00000000
  .word 0x46010036
  .word 0x450100ab
  .word 0x00000000
  .word 0x3c024287
  .word 0x44820800
  .word 0x00000000
  .word 0x46010036
  .word 0x450000a5
  .word 0x00000000
  .word 0x00139a00
  .word 0x00108100
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444034c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444035c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444023c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444024c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444025c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444026c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444013c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444014c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444015c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444016c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444017c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444003c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444004c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444005c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444006c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444007c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff3c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff4c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff5c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff6c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x1000043a
  .word 0x00000000
  .word 0x3c024287
  .word 0x44820800
  .word 0x00000000
  .word 0x46010036
  .word 0x450100b3
  .word 0x00000000
  .word 0x3c0242e1
  .word 0x44820800
  .word 0x00000000
  .word 0x46010036
  .word 0x450000ad
  .word 0x00000000
  .word 0x00139a00
  .word 0x00108100
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff3c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444003c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444013c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe4c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff4c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444004c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444014c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444024c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe5c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff5c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444005c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444015c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444025c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe6c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff6c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444006c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444016c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444026c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff7c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444007c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444017c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x10000382
  .word 0x00000000
  .word 0x3c0242e1
  .word 0x44820800
  .word 0x00000000
  .word 0x46010036
  .word 0x450100a9
  .word 0x00000000
  .word 0xc7818464
  .word 0x46010036
  .word 0x450000a5
  .word 0x00000000
  .word 0x00139a00
  .word 0x00108100
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444013c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444014c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444015c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444016c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444003c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444004c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444005c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444006c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444007c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff3c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff4c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff5c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff6c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff7c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe3c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe4c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe5c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe6c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fd4c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fd5c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x100002d4
  .word 0x00000000
  .word 0x3c02c1b4
  .word 0x44820800
  .word 0x00000000
  .word 0x46010034
  .word 0x450000ab
  .word 0x00000000
  .word 0x3c02c287
  .word 0x44820800
  .word 0x00000000
  .word 0x46010034
  .word 0x450100a5
  .word 0x00000000
  .word 0x00139a00
  .word 0x00108100
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444034c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444035c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444025c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444024c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444023c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444022c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444015c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444014c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444013c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444012c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444011c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444005c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444004c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444003c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444002c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444001c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff2c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff3c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff4c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff5c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x10000224
  .word 0x00000000
  .word 0x3c02c287
  .word 0x44820800
  .word 0x00000000
  .word 0x46010034
  .word 0x450000b3
  .word 0x00000000
  .word 0x3c02c2e1
  .word 0x44820800
  .word 0x00000000
  .word 0x46010034
  .word 0x450100ad
  .word 0x00000000
  .word 0x00139a00
  .word 0x00108100
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff5c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444005c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444015c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe4c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff4c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444004c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444014c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444024c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe3c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff3c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444003c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444013c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444023c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe2c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff2c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444002c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444012c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444022c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff1c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444001c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444011c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x1000016c
  .word 0x00000000
  .word 0x3c02c2e1
  .word 0x44820800
  .word 0x00000000
  .word 0x46010034
  .word 0x450000a9
  .word 0x00000000
  .word 0xc7818468
  .word 0x46010034
  .word 0x450100a5
  .word 0x00000000
  .word 0x00139a00
  .word 0x00108100
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444015c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444014c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444013c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444012c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444005c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444004c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444003c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444002c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444001c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff5c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff4c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff3c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff2c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff1c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe5c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe4c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe3c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe2c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fd4c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fd5c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x100000be
  .word 0x00000000
  .word 0x00139a00
  .word 0x00108100
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444013c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444014c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444015c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444002c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444003c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444004c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444005c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444006c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff2c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff3c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff4c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff5c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444ff6c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe2c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe3c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe4c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe5c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fe6c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fd3c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fd4c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00501021
  .word 0x9444fd5c
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x8e430100
  .word 0x1060000e
  .word 0x00000000
  .word 0x8c630028
  .word 0x30630002
  .word 0x10600006
  .word 0x00000000
  .word 0x8e430028
  .word 0x34630002
  .word 0xae430028
  .word 0x10000005
  .word 0x00000000
  .word 0x8e440028
  .word 0x2403fffd
  .word 0x00831824
  .word 0xae430028
  .word 0x8e5200f8
  .word 0x1640ffee
  .word 0x00000000
  .word 0x2404fffd
  .word 0x1000000f
  .word 0x00000000
  .word 0x8e230100
  .word 0x8c630028
  .word 0x30630002
  .word 0x10600006
  .word 0x00000000
  .word 0x8e230028
  .word 0x34630002
  .word 0xae230028
  .word 0x10000004
  .word 0x00000000
  .word 0x8e230028
  .word 0x00641824
  .word 0xae230028
  .word 0x8e3100f8
  .word 0x1620fff1
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000023
  .word 0x00000000
  .word 0x001018c0
  .word 0x00701823
  .word 0x00032180
  .word 0x3c030087
  .word 0x2463eda0
  .word 0x00642021
  .word 0x8c830048
  .word 0x10600019
  .word 0x00000000
  .word 0x24910054
  .word 0x8c830054
  .word 0x10600015
  .word 0x00000000
  .word 0x3c0244fa
  .word 0x44826000
  .word 0x3c050087
  .word 0x24a517a0
  .word 0x0c071c58
  .word 0x00000000
  .word 0x24030001
  .word 0x14430007
  .word 0x00000000
  .word 0x8e240000
  .word 0x8c830028
  .word 0x34630002
  .word 0xac830028
  .word 0x10000006
  .word 0x00000000
  .word 0x8e250000
  .word 0x8ca40028
  .word 0x2403fffd
  .word 0x00831824
  .word 0xaca30028
  .word 0x26100001
  .word 0x2a030018
  .word 0x1460ffdc
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_dead_assignments reset
#pragma opt_loop_invariants reset

// FUN_001bf220
void func_001bf220(RwV3d* dst, u32 x, u32 y)
{
    Resrc* resource;
    u8* cell;
    u32 offset;
    u32 id;
    u32 resourceTypeId;
    RwV3d result;
    resource = MT_Scene_GetResListHead(0x12);
    memset(&result, 0, sizeof(result));
    if (K_Scene_001a0250() == true || func_001a02c0() == true)
    {
        offset = ((u32)(u16)y << 8) + ((u32)(u16)x << 4);
        while (resource != NULL)
        {
            resourceTypeId = resource->resTypeId & 0x3ff;
            cell = (u8*)offset;
            cell += (u32)K_Field_Get();
            id = *(u32*)(cell + 0x54);
            if (resourceTypeId == (id & 0x3ff))
            {
                result = *(RwV3d*)((u8*)resource + 0x100);
                break;
            }
            resource = resource->next;
        }
    }
    *dst = result;
}

// FUN_001bf340 MATCHING
u32 func_001bf340_y2(const FldDungeonFloorData* floorData)
{
    s32 chance;
    u32 currentFloor;
    s32 random;
    s32 lower;
    s32 upper;
    s32 total;
    s32 choice;
    s32 i;

    chance = (s32)FUN_0016F380(0x3b);
    currentFloor = K_FldDungeon_GetCurrentFloor();
    if (currentFloor >= FUN_0016F380(0x0c))
    {
        return 0;
    }
    if (chance - 1 < 0)
    {
        FUN_0016F3E0(0x3b, FUN_0016F380(0x3a));
        goto done_reset;
    }
    if (floorData->minorId != 0)
    {
        goto done_reset;
    }
    if (chance - 1 == 0)
    {
        random = (s32)(RpRandom() % 100);
        lower = (s32)FUN_0016F380(0x3c);
        if (random >= lower)
        {
            goto done_reset;
        }
        lower = (s32)FUN_0016F380(0x3d);
        upper = (s32)FUN_0016F380(0x3e);
        total = (s32)FUN_0016F380(0x37);
        i = (s32)FUN_0016F380(0x36);
        total += lower + upper;
        choice = (s32)(RpRandom() % (i + total));
        FUN_0016F3E0(0x3b, FUN_0016F380(0x3a));
        if (choice < lower)
        {
            return 1;
        }
        if (choice >= lower && choice < lower + upper)
        {
            return 2;
        }
        if (choice >= lower + upper && choice < total)
        {
            return 3;
        }
        for (i = 0; i < 3; i++)
        {
            if (FUN_0016DD60(i) >= 1)
            {
                break;
            }
        }
        if (i < 3)
        {
            return 4;
        }
    }
    else
    {
        goto reset;
    }
done_loop:
    return 0;
reset:
    FUN_0016F3E0(0x3b, chance - 1);
done_reset:
    return 0;
}

// FUN_001bf570
void* K_FldDungeon_UpdateTask(KwlnTask* dungeonTask)
{
    FldDungeon* dungeon;
    char eplPath[48];
    u8 effectData[12];
    u8 reloadEffectData[12];
    u32 i;
    u8* effectDataPtr;
    s32 j;

    dungeon = (FldDungeon*)dungeonTask->workData;

    switch (dungeon->state)
    {
        case FLDDUNGEON_STATE_INITIALIZE:
            if (gDungeonTpMdl != NULL && !mdlStreamRead(gDungeonTpMdl))
            {
                break;
            }

            if (!K_FldDungeon_CreateScrMemory(dungeon->scrCdvd))
            {
                break;
            }

            dungeon->scrCdvd = NULL;
            if (!func_001c0440())
            {
                break;
            }

            if (!func_001c0740())
            {
                break;
            }

            dungeon->floorsData = gFldDngFloorsData;
            j = dungeon->currFloor << 4;
            if (*(u8*)(j + (s32)dungeon->floorsData + 0x1d) < 0xff)
            {
                sprintf(eplPath, "field/effect/DNG%02d.EPL",
                        *(u8*)(j + (s32)dungeon->floorsData + 0x0d));
                dungeon->effectEplTask = func_001a9080(dungeonTask, eplPath, -1, NULL);
            }
            else
            {
                dungeon->effectEplTask = NULL;
            }

            dungeon->state++;

        case FLDDUNGEON_STATE_WAIT_EFFECT:
            effectDataPtr = effectData;
            j = 12;
            if (effectDataPtr != NULL)
            {
                do
                {
                    *effectDataPtr++ = 0;
                    j--;
                } while (j != 0);
            }
            if (dungeon->effectEplTask != NULL)
            {
                if (!func_001a9180(dungeon->effectEplTask))
                {
                    break;
                }

                dungeon->effectEplSlot = func_001a91b0(dungeon->effectEplTask, effectData);
            }

            dungeon->state++;

        case FLDDUNGEON_STATE_CREATE_FIELD:
            dungeon->encounterResult = func_001bf340(&dungeon->floorsData[dungeon->currFloor]);
            D_0086E580[0] = 0;
            dungeon->fieldFlags = dungeon->floorsData[dungeon->currFloor].fieldFlags | 0x80000000;
            dungeon->fldRootTask = func_001ba5f0(dungeonTask,
                                                  dungeon->floorsData[dungeon->currFloor].majorId,
                                                  dungeon->floorsData[dungeon->currFloor].minorId,
                                                  (u16)dungeon->unk_08,
                                                  0,
                                                  0,
                                                  dungeon->fieldFlags,
                                                  dungeon->floorsData[dungeon->currFloor].unk_06,
                                                  dungeon->floorsData[dungeon->currFloor].unk_07,
                                                  dungeon->floorsData[dungeon->currFloor].unk_04,
                                                  -1,
                                                  -1,
                                                  -1,
                                                  -1);
            dungeon->fieldFlags = 0;

            i = 0;
            while (i < 6)
            {
                if (datGetScenarioMode() == SCENARIO_MODE_JOURNEY &&
                    dungeon->currFloor == D_006833C0[i])
                {
                    break;
                }
                i++;
            }

            if (i < 6)
            {
                func_001baa50(dungeon->fldRootTask, true);
                datSetFlag(0x1421, true);
                dungeon->transitionTask = func_00447e70(dungeonTask, 0, 0);
                dungeon->state = FLDDUNGEON_STATE_WAIT_TRANSITION;
            }
            else
            {
                dungeon->state++;
            }
            break;

        case FLDDUNGEON_STATE_IDLE:
            if (dungeon->shouldShutdown == true)
            {
                dungeon->state = FLDDUNGEON_STATE_STOP;
            }
            break;

        case FLDDUNGEON_STATE_UNK_04:
        case FLDDUNGEON_STATE_UNK_05:
        case FLDDUNGEON_STATE_UNK_06:
            dungeon->state++;
            break;

        case FLDDUNGEON_STATE_RELOAD_FIELD:
            effectDataPtr = reloadEffectData;
            j = 12;
            if (effectDataPtr != NULL)
            {
                do
                {
                    *effectDataPtr++ = 0;
                    j--;
                } while (j != 0);
            }

            if ((gDungeonTpMdl != NULL && !mdlStreamRead(gDungeonTpMdl)) ||
                !K_FldDungeon_CreateScrMemory(dungeon->scrCdvd))
            {
                break;
            }

            dungeon->scrCdvd = NULL;
            if (!func_001c0440() || !func_001c0740())
            {
                break;
            }

            if (dungeon->effectEplTask != NULL)
            {
                if (!func_001a9180(dungeon->effectEplTask))
                {
                    break;
                }

                dungeon->effectEplSlot = func_001a91b0(dungeon->effectEplTask, reloadEffectData);
            }

            dungeon->encounterResult = func_001bf340(&dungeon->floorsData[dungeon->currFloor]);
            D_0086E580[0] = 0;
            dungeon->fieldFlags |= dungeon->floorsData[dungeon->currFloor].fieldFlags;
            dungeon->fldRootTask = func_001ba5f0(dungeonTask,
                                                  dungeon->floorsData[dungeon->currFloor].majorId,
                                                  dungeon->floorsData[dungeon->currFloor].minorId,
                                                  (u16)dungeon->unk_08,
                                                  0,
                                                  0,
                                                  dungeon->fieldFlags,
                                                  dungeon->floorsData[dungeon->currFloor].unk_06,
                                                  dungeon->floorsData[dungeon->currFloor].unk_07,
                                                  dungeon->floorsData[dungeon->currFloor].unk_04,
                                                  -1,
                                                  -1,
                                                  -1,
                                                  -1);
            dungeon->fieldFlags = 0;

            i = 0;
            while (i < 6)
            {
                if (datGetScenarioMode() == SCENARIO_MODE_JOURNEY &&
                    dungeon->currFloor == D_006833C0[i])
                {
                    break;
                }
                i++;
            }

            if (i < 6)
            {
                func_001baa50(dungeon->fldRootTask, true);
                datSetFlag(0x1421, true);
                dungeon->transitionTask = func_00447e70(dungeonTask, 0, 0);
                dungeon->state = FLDDUNGEON_STATE_WAIT_TRANSITION;
            }
            else
            {
                dungeon->state = FLDDUNGEON_STATE_IDLE;
            }
            break;

        case FLDDUNGEON_STATE_WAIT_TRANSITION:
            if (kwlnTaskExists(dungeon->transitionTask) != true)
            {
                datSetFlag(0x1421, false);
                func_001baa50(dungeon->fldRootTask, false);
                dungeon->state = FLDDUNGEON_STATE_IDLE;
            }
            break;

        case FLDDUNGEON_STATE_STOP:
            return KWLNTASK_STOP;
    }

    return KWLNTASK_CONTINUE;
}

// FUN_001bfaf0
void K_FldDungeon_DestroyTask(KwlnTask* dungeonTask)
{
    s32 i;

    func_001c07f0();
    K_FldDungeon_DestroyScrMemory();
    gDungeonTask = NULL;
    gMtScene->fldMajorId = 0;

    for (i = 0; i < 9; i++)
    {
        if (D_0086BDC0[i] != NULL)
        {
            func_001b3c90(D_0086BDC0[i]);
            D_0086BDC0[i] = NULL;
        }
    }

    if (gDungeonTpMdl != NULL)
    {
        mdlDestroy(gDungeonTpMdl);
        gDungeonTpMdl = NULL;
        D_0086E694[0] = 0;
    }

    ((void (*)(void*))(*(void**)((u8*)&rwGlobals + 0x17c)))(dungeonTask->workData);
}

// FUN_001bfbc0
KwlnTask* K_FldDungeon_CreateTask(KwlnTask* parentTask, u32 floor, u32 param_3)
{
    KwlnTask* dungeonTask;
    FldDungeon* dungeon;

    dungeon = (FldDungeon*)RwCalloc(1, sizeof(FldDungeon), rwMEMHINTDUR_GLOBAL);
    if (dungeon == NULL)
    {
        return NULL;
    }

    gDungeonTask = dungeonTask = kwlnTaskCreateWithAutoPriority(parentTask,
                                                                10,
                                                                "automatic dungeon ",
                                                                K_FldDungeon_UpdateTask,
                                                                K_FldDungeon_DestroyTask,
                                                                dungeon);

    dungeon->currFloor = floor;
    dungeon->unk_08 = param_3;

    if (floor > 1)
    {
        gDungeonTpMdl = mdlCreateFromPath(MODEL_TYPE_FLD,
                                          0xffff,
                                          "field/grmd/fobj000.RMD",
                                          MDL_READASYNC);

        dungeon->scrCdvd = K_FldDungeon_RequestScript();

        K_FldDungeon_FUN_001c03f0();
    }

    return dungeonTask;
}

// FUN_001bfcc0
void func_001bfcc0(void)
{
    FldDungeon* dungeon;
    char eplPath[48];
    s32 i;
    if (gDungeonTask == NULL)
    {
        return;
    }

    dungeon = DUNGEON_GET_WORK();
    dungeon->unk_08 = 0;
    func_001a9470(*(void**)((u8*)K_Field_Get() + 0x1200));
    func_001d4180();

    if (dungeon->floorsData[dungeon->currFloor].effectId !=
        dungeon->floorsData[dungeon->currFloor + 1].effectId)
    {
        if (dungeon->effectEplTask != NULL)
        {
            kwlnTaskDestroyWithHierarchy(dungeon->effectEplTask);
        }
        if (dungeon->floorsData[dungeon->currFloor + 1].effectId < 0xff)
        {
            sprintf(eplPath, "field/effect/DNG%02d.EPL",
                    dungeon->floorsData[dungeon->currFloor + 1].effectId);
            dungeon->effectEplTask = func_001a9080(
                gDungeonTask, eplPath, -1, NULL);
        }
        else
        {
            dungeon->effectEplTask = NULL;
        }
    }
    else if (dungeon->effectEplTask != NULL)
    {
        func_001a9400(dungeon->effectEplTask, dungeon->effectEplSlot);
    }

    if (dungeon->currFloor + 1 > 1)
    {
        if (gDungeonTpMdl == NULL)
        {
            gDungeonTpMdl = mdlCreateFromPath(MODEL_TYPE_FLD, 0xffff,
                                               "field/grmd/fobj000.RMD",
                                               MDL_READASYNC);
        }
        dungeon->scrCdvd = K_FldDungeon_RequestScript();
        K_FldDungeon_FUN_001c03f0();
    }

    if (dungeon->floorsData[dungeon->currFloor].majorId !=
            dungeon->floorsData[dungeon->currFloor + 1].majorId ||
        dungeon->floorsData[dungeon->currFloor].minorId !=
            dungeon->floorsData[dungeon->currFloor + 1].minorId)
    {
        dungeon->fieldFlags |= 0x80000000;
        if (K_Scene_001a0250_y2() == true || func_001a02c0_y2() == true)
        {
            for (i = 0; i < 9; i++)
            {
                if (D_0086BDC0[i] != NULL)
                {
                    func_001b3c90(D_0086BDC0[i]);
                    D_0086BDC0[i] = NULL;
                }
            }
        }
    }

    dungeon->currFloor++;
    K_Field_SetShouldShutdown(dungeon->fldRootTask, true);
    dungeon->state = FLDDUNGEON_STATE_UNK_04;
}

// FUN_001bff00
void K_FldDungeon_RequestShutdown()
{
    if (gDungeonTask != NULL)
    {
        DUNGEON_GET_WORK()->shouldShutdown = true;
    }
}

// FUN_001bff20
u32 K_FldDungeon_GetCurrentFloor_y2()
{
    if (gDungeonTask == NULL)
    {
        return 0;
    }

    return DUNGEON_GET_WORK()->currFloor;
}

// FUN_001bff50
u8 K_FldDungeon_IsCurrentFloorExplorable()
{
    u32 currFloor;

    if (gDungeonTask == NULL)
    {
        currFloor = 0;
    }
    else 
    {
        currFloor = DUNGEON_GET_WORK()->currFloor;
    }

    if (currFloor >= 2 && currFloor < 400)
    {
        return true;
    }

    return false;
}

// FUN_001bffa0
FldDungeonFloorData* K_FldDungeon_GetCurrentFloorData()
{
    if (gDungeonTask == NULL)
    {
        return 0;
    }

    return &DUNGEON_GET_WORK()->floorsData[DUNGEON_GET_WORK()->currFloor];
}

// FUN_001bffe0
void* K_FldDungeon_GetScrMemory()
{
    if (gDungeonTask == NULL)
    {
        return NULL;
    }

    return DUNGEON_GET_WORK()->scrMemory;
}

// FUN_001c0010
u32 K_FldDungeon_GetScrSize()
{
    if (gDungeonTask == NULL)
    {
        return 0;
    }

    return DUNGEON_GET_WORK()->scrSize;
}

// FUN_001c0040
u32 func_001c0040(void)
{
    if (gDungeonTask == NULL)
    {
        return 0;
    }
    return DUNGEON_GET_WORK()->encounterResult;
}

// FUN_001c0070
f32 func_001c0070(void)
{
    f32 result;
    s32 encounterResult;

    result = 1.0f;
    if (gDungeonTask == NULL)
    {
        encounterResult = 0;
    }
    else
    {
        encounterResult = DUNGEON_GET_WORK()->encounterResult;
    }
    switch (encounterResult)
    {
        case 1:
        case 3:
            result = 2.0f;
            break;
        default:
            break;
    }
    return result;
}

// FUN_001c00d0
void func_001c00d0(void)
{
    if (gDungeonTask != NULL && DUNGEON_GET_WORK()->effectEplTask != NULL)
    {
        func_001a9400(DUNGEON_GET_WORK()->effectEplTask,
                      DUNGEON_GET_WORK()->effectEplSlot);
    }
}

// FUN_001c0110
void func_001c0110(void)
{
    FldDungeon* dungeon;
    u8 data[12];
    u8* dataPtr;
    s32 i;

    if (gDungeonTask == NULL)
    {
        return;
    }
    dungeon = DUNGEON_GET_WORK();
    if (dungeon->effectEplTask == NULL)
    {
        return;
    }
    dataPtr = data;
    i = sizeof(data);
    if (dataPtr != NULL)
    {
        do
        {
            *dataPtr = 0;
            dataPtr++;
            i--;
        } while (i != 0);
    }
    dungeon->effectEplSlot = func_001a91b0(dungeon->effectEplTask, data);
}
// FUN_001c0190. Request a cdvd stream to load main tartarus script
HCdvd* K_FldDungeon_RequestScript(void)
{
    HCdvd* cdvd;

    cdvd = NULL;
    if (gDungeonTask == NULL)
    {
        return NULL;
    }

    if (DUNGEON_GET_WORK()->scrMemory == NULL)
    {
        if (datGetScenarioMode() == SCENARIO_MODE_JOURNEY)
        {
            cdvd = H_Cdvd_Request("field/script/dungeonat.bf", HCDVD_FILENORMAL);
        }
        else
        {
            cdvd = H_Cdvd_Request("field/script/dungeonat_aegis.bf", HCDVD_FILENORMAL);
        }
    }

    return cdvd;
}

// FUN_001c0210. Allocate a new memory block to store tartarus main script by copying H_Cdvd's 'fileMemory'
u32 K_FldDungeon_CreateScrMemory(HCdvd* scrCdvd)
{
    FldDungeon* dungeon;
    s32 fileSize;

    if (gDungeonTask == NULL)
    {
        return true;
    }

    dungeon = DUNGEON_GET_WORK();
    if (scrCdvd == NULL)
    {
        return true;
    }

    if (H_Cdvd_IsFileLoaded(scrCdvd))
    {
        fileSize = scrCdvd->fileSize;
        dungeon->scrMemory = (*(void* (**)(u32, u32, u32))((u8*)&rwGlobals + 0x184))(1, fileSize, rwMEMHINTDUR_GLOBAL);
        dungeon->scrSize = scrCdvd->fileSize;
        memcpy(dungeon->scrMemory, scrCdvd->fileMemory, (s32)scrCdvd->fileSize);

        H_Cdvd_Destroy(scrCdvd);

        return true;
    }

    return false;
}


// FUN_001c02e0
void K_FldDungeon_DestroyScrMemory(void)
{
    FldDungeon* dungeon;

    if (gDungeonTask != NULL)
    {
        dungeon = DUNGEON_GET_WORK();
        if (dungeon->scrMemory != NULL)
        {
            RwFree(dungeon->scrMemory);
            dungeon->scrMemory = NULL;
        }
    }
}

// FUN_001c0330. Request a cdvd stream to load tartarus block specific script (thebel, arqa, etc...)
HCdvd* K_FldDungeon_RequestBlockScript(u32 blockId)
{
    char buffer[128];

    if (datGetScenarioMode() == SCENARIO_MODE_JOURNEY)
    {
        sprintf(buffer, "field/script/dungeonat%02d.bf", blockId);
    }
    else
    {
        sprintf(buffer, "field/script/dungeonat%02d_aegis.bf", blockId);
    }

    return H_Cdvd_Request(buffer, HCDVD_FILENORMAL);
}

// 0x20c bytes. The transition controller keeps its collision-controller task
// at offset 0x204; the remaining tail is reserved by the retail work layout.




// Retail uses a 100-unit normalized camera ray and reloads the frame origin
// for each model probe and before field-node traversal.
// The previous reconstruction reused a mutated origin and omitted this scale.
// Restoring those real probe semantics increases normalized_diff in this pass,
// but avoids silently testing the wrong collision locations.
// Field-node probes must reload the camera-frame origin at each node helper call.
// Passing the frame itself preserves that live-origin behavior when camera state
// changes during traversal; caching cameraPosition would probe stale locations.
// This intentional semantic correction currently has a larger normalized diff.
// FUN_001c03b0
u32 func_001c03b0(HCdvd* cdvd)
{
    if (cdvd == NULL)
    {
        return true;
    }
    return H_Cdvd_IsFileLoaded(cdvd) != false;
}


#pragma alias datSetActiveSocialLink_s16 datSetActiveSocialLink
#pragma alias adminiGetNowSeqId_u32 adminiGetNowSeqId
#pragma alias adminiGetNextSeqId_u32 adminiGetNextSeqId_y2


// 28-byte payload used when switching to the field sequence.

// 28-byte payload used when switching to the social-link event sequence.


// FUN_001c03f0
void K_FldDungeon_FUN_001c03f0(void)
{
    if (*(KwlnTask**)((u8*)K_Field_Get() + 0x11f4) == NULL && sDngBtlEffectCdvd == NULL)
    {
        sDngBtlEffectCdvd = H_Cdvd_Request("field/btl_effect/btl_eff.pac", HCDVD_FILEARCHIVE);
    }
}


// FUN_001c0440
u32 func_001c0440(void)
{
    if (sDngBtlEffectCdvd == NULL)
    {
        return true;
    }
    if (!H_Cdvd_IsFileLoaded(sDngBtlEffectCdvd))
    {
        return false;
    }

    if (*(KwlnTask**)((u8*)K_Field_Get() + 0x11f4) == NULL)
    {
        *(KwlnTask**)((u8*)K_Field_Get() + 0x11f4) =
            func_001a9080(NULL, "field/effect/DNG_BTL.EPL", 30,
                          sDngBtlEffectCdvd);
    }
    if (*(KwlnTask**)((u8*)K_Field_Get() + 0x11f8) == NULL)
    {
        *(KwlnTask**)((u8*)K_Field_Get() + 0x11f8) =
            func_001a9080(NULL, "field/effect/DNG_BTL2.EPL", -1,
                          sDngBtlEffectCdvd);
    }
    if (*(KwlnTask**)((u8*)K_Field_Get() + 0x11fc) == NULL)
    {
        *(KwlnTask**)((u8*)K_Field_Get() + 0x11fc) =
            func_001a9080(NULL, "field/effect/DNG_BTL3.EPL", 60,
                          sDngBtlEffectCdvd);
    }
    if (*(KwlnTask**)((u8*)K_Field_Get() + 0x1200) == NULL)
    {
        *(KwlnTask**)((u8*)K_Field_Get() + 0x1200) =
            func_001a9080(NULL, "field/effect/DNG_BTL4.EPL", -1,
                          sDngBtlEffectCdvd);
    }
    if (*(KwlnTask**)((u8*)K_Field_Get() + 0x1204) == NULL)
    {
        *(KwlnTask**)((u8*)K_Field_Get() + 0x1204) =
            func_001a9080(NULL, "field/effect/DNG_BTL5.EPL", 40,
                          sDngBtlEffectCdvd);
    }
    if (*(KwlnTask**)((u8*)K_Field_Get() + 0x1208) == NULL)
    {
        *(KwlnTask**)((u8*)K_Field_Get() + 0x1208) =
            func_001a9080(NULL, "field/effect/DNG_BTL6.EPL", 30,
                          sDngBtlEffectCdvd);
    }
    if (*(KwlnTask**)((u8*)K_Field_Get() + 0x120c) == NULL)
    {
        *(KwlnTask**)((u8*)K_Field_Get() + 0x120c) =
            func_001a9080(NULL, "field/effect/DNG_BTL7.EPL", 40,
                          sDngBtlEffectCdvd);
    }
    if (datGetScenarioMode() == SCENARIO_MODE_JOURNEY)
    {
        return true;
    }
    if (*(KwlnTask**)((u8*)K_Field_Get() + 0x1210) == NULL)
    {
        *(KwlnTask**)((u8*)K_Field_Get() + 0x1210) =
            func_001a9080(NULL, "field/effect/DNG_BTL8.EPL", 8,
                          sDngBtlEffectCdvd);
    }
    if (*(KwlnTask**)((u8*)K_Field_Get() + 0x1214) == NULL)
    {
        *(KwlnTask**)((u8*)K_Field_Get() + 0x1214) =
            func_001a9080(NULL, "field/effect/DNG_BTL9.EPL", 20,
                          sDngBtlEffectCdvd);
    }
    if (*(KwlnTask**)((u8*)K_Field_Get() + 0x1218) == NULL)
    {
        *(KwlnTask**)((u8*)K_Field_Get() + 0x1218) =
            func_001a9080(NULL, "field/effect/DNG_BTL10.EPL", 50,
                          sDngBtlEffectCdvd);
    }
    return true;
}

// FUN_001c0740
u32 func_001c0740(void)
{
    s32 i;

    for (i = 0; i < 10; i++)
    {
        if (*(KwlnTask**)((u8*)K_Field_Get() + 0x11f4 + i * 4) != NULL &&
            !func_001a9180(
                *(KwlnTask**)((u8*)K_Field_Get() + 0x11f4 + i * 4)))
        {
            return false;
        }
    }
    if (sDngBtlEffectCdvd != NULL)
    {
        H_Cdvd_Destroy(sDngBtlEffectCdvd);
        sDngBtlEffectCdvd = NULL;
    }
    return true;
}

// FUN_001c07f0
void func_001c07f0(void)
{
    s32 i;

    for (i = 0; i < 10; i++)
    {
        if (*(KwlnTask**)((u8*)K_Field_Get() + 0x11f4 + i * 4) != NULL)
        {
            kwlnTaskDestroyWithHierarchy(
                *(KwlnTask**)((u8*)K_Field_Get() + 0x11f4 + i * 4));
            *(KwlnTask**)((u8*)K_Field_Get() + 0x11f4 + i * 4) = NULL;
        }
    }
}

// FUN_001C0880
void* func_001c0880(KwlnTask* task)
{
    u8* work;
    s32 state;
    s32 frames;
    f32 alpha;

    work = (u8*)task->workData;
    state = *(s32*)work;
    switch (state)
    {
    case 0:
        frames = *(s32*)(work + 8);
        if (frames > 0)
        {
            alpha = *(f32*)(*(u8**)(work + 4) + 0x18) -
                    (*(f32*)(*(u8**)(work + 4) + 0x18) - *(f32*)(work + 0x0c)) /
                        (f32)frames;
            *(s32*)(work + 8) = frames - 1;
        }
        else
        {
            alpha = *(f32*)(work + 0x0c);
            *(s32*)work = state + 1;
        }
        *(f32*)(*(u8**)(work + 4) + 0x18) = alpha;
        break;
    case 1:
        return KWLNTASK_STOP;
    default:
        break;
    }
    return KWLNTASK_CONTINUE;
}

// FUN_001c0920
void func_001c0920(KwlnTask* task)
{
    *(u32*)((u8*)*(void**)((u8*)task->workData + 4) + 0x20) = 0;
    ((void (*)(void*))DAT_0096017c[0])(task->workData);
}

// FUN_001c0960
void* func_001c0960(KwlnTask* task)
{
    u8* work;
    u8* modelData;
    u8* node;
    RwRGBA* sourceColor;
    RwRGBA color;
    f32 alpha;
    f32 normalizedAlpha;
    void* result;

    work = (u8*)task->workData;
    sourceColor = mdlGetColor(*(Model**)(*(u8**)(work + 4) + 0x104));
    color = *sourceColor;
    switch (*(u32*)work)
    {
    case 0:
        if (*(s32*)(work + 8) > 0)
        {
            alpha = (f32)sourceColor->a;
            alpha -= *(f32*)(work + 0x0c);
            alpha /= (f32)*(s32*)(work + 8);
            alpha = (f32)sourceColor->a - alpha;
            color.a = (u8)alpha;
            *(s32*)(work + 8) -= 1;
        }
        else
        {
            alpha = *(f32*)(work + 0x0c);
            color.a = (u8)alpha;
            *(s32*)work += 1;
        }

        normalizedAlpha = (f32)color.a / 255.0f;
        modelData = *(u8**)(*(u8**)(*(u8**)(work + 4) + 0x104) + 0xe0);

        node = *(u8**)(modelData + 8);
        while (node != NULL)
        {
            *(f32*)(node + 0x18) = normalizedAlpha;
            node = *(u8**)(node + 0x28);
        }
        node = *(u8**)(modelData + 0x14);
        while (node != NULL)
        {
            *(f32*)(node + 0x18) = normalizedAlpha;
            node = *(u8**)(node + 0x28);
        }
        node = *(u8**)(modelData + 0x18);
        while (node != NULL)
        {
            *(f32*)(node + 0x18) = normalizedAlpha;
            node = *(u8**)(node + 0x28);
        }
        node = *(u8**)(modelData + 0x20);
        while (node != NULL)
        {
            *(f32*)(node + 0x18) = normalizedAlpha;
            node = *(u8**)(node + 0x28);
        }
        node = *(u8**)(modelData + 0x0c);
        while (node != NULL)
        {
            *(f32*)(node + 0x18) = normalizedAlpha;
            node = *(u8**)(node + 0x28);
        }
        node = *(u8**)(modelData + 0x10);
        while (node != NULL)
        {
            *(f32*)(node + 0x18) = normalizedAlpha;
            node = *(u8**)(node + 0x28);
        }
        node = *(u8**)(modelData + 0x1c);
        while (node != NULL)
        {
            *(f32*)(node + 0x18) = normalizedAlpha;
            node = *(u8**)(node + 0x28);
        }
        node = *(u8**)(modelData + 0x24);
        while (node != NULL)
        {
            *(f32*)(node + 0x18) = normalizedAlpha;
            node = *(u8**)(node + 0x28);
        }
        modelData = *(u8**)(modelData + 0x28);
        while (modelData != NULL)
        {
            *(f32*)(modelData + 0x18) = normalizedAlpha;
            modelData = *(u8**)(modelData + 0x28);
        }
        mdlSetColor(*(Model**)(*(u8**)(work + 4) + 0x104), &color);
        break;
    case 1:
        goto stop;
    }
    goto done;
stop:
    return KWLNTASK_STOP;
done:
    return KWLNTASK_CONTINUE;
}
// FUN_001c0d30
void func_001c0d30(KwlnTask* task)
{
    *(u32*)((u8*)*(void**)((u8*)task->workData + 4) + 0x108) = 0;
    ((void (*)(void*))DAT_0096017c[0])(task->workData);
}

// FUN_001c0d70
asm void* func_001c0d70(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdfc30
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x8c93003c
  .word 0x2404000a
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040802d
  .word 0x2404000c
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e630000
  .word 0x24020001
  .word 0x10620405
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000404
  .word 0x00000000
  .word 0x27a40390
  .word 0x8e650204
  .word 0x0c06b650
  .word 0x00000000
  .word 0xc7a20390
  .word 0xc7a10394
  .word 0xc7a00398
  .word 0xe7a202cc
  .word 0xe7a102d0
  .word 0xe7a002d4
  .word 0x8e640204
  .word 0x0c06b62c
  .word 0x00000000
  .word 0x3c024270
  .word 0x44820800
  .word 0x00000000
  .word 0x46000840
  .word 0xc7a002d0
  .word 0x46010000
  .word 0xe7a002d0
  .word 0xc7a202cc
  .word 0xc7a102d0
  .word 0xc7a002d4
  .word 0xe7a200a0
  .word 0xe7a100a4
  .word 0xe7a000a8
  .word 0x8e640204
  .word 0x0c06b62c
  .word 0x00000000
  .word 0xe7a000ac
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x0040982d
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0x27a403c0
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a203c0
  .word 0xe7a103c4
  .word 0xe7a003c8
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c0242c8
  .word 0x44820800
  .word 0xc7a003c0
  .word 0x46010002
  .word 0xe7a003c0
  .word 0xc7a003c4
  .word 0x46010002
  .word 0xe7a003c4
  .word 0xc7a003c8
  .word 0x46010002
  .word 0xe7a003c8
  .word 0x8f84a850
  .word 0x8c830000
  .word 0x24020018
  .word 0x14620005
  .word 0x00000000
  .word 0x8c830004
  .word 0x24020032
  .word 0x106203bc
  .word 0x00000000
  .word 0xc7a102c0
  .word 0xc7a002cc
  .word 0x46000832
  .word 0x450000a9
  .word 0x00000000
  .word 0xc7a102c4
  .word 0xc7a002d0
  .word 0x46000832
  .word 0x450000a4
  .word 0x00000000
  .word 0xc7a102c8
  .word 0xc7a002d4
  .word 0x46000832
  .word 0x450103ad
  .word 0x00000000
  .word 0x1000009d
  .word 0x00000000
  .word 0x8e020028
  .word 0x30420002
  .word 0x14400004
  .word 0x00000000
  .word 0x8e1000f8
  .word 0x10000096
  .word 0x00000000
  .word 0x27a400b0
  .word 0x0000282d
  .word 0x24060208
  .word 0x0c148502
  .word 0x00000000
  .word 0xc6620030
  .word 0xc6610034
  .word 0xc6600038
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a102c0
  .word 0xc7a003c0
  .word 0x46000800
  .word 0xe7a002c0
  .word 0xc7a102c4
  .word 0xc7a003c4
  .word 0x46000800
  .word 0xe7a002c4
  .word 0xc7a102c8
  .word 0xc7a003c8
  .word 0x46000800
  .word 0xe7a002c8
  .word 0x8e040104
  .word 0x0c0c62e0
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a500a0
  .word 0x27a602c0
  .word 0x27a700b0
  .word 0x0c06b414
  .word 0x00000000
  .word 0xc6620030
  .word 0xc6610034
  .word 0xc6600038
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a102c0
  .word 0xc7a003c0
  .word 0x46000801
  .word 0xe7a002c0
  .word 0xc7a102c4
  .word 0xc7a003c4
  .word 0x46000801
  .word 0xe7a002c4
  .word 0xc7a102c8
  .word 0xc7a003c8
  .word 0x46000801
  .word 0xe7a002c8
  .word 0x8e040104
  .word 0x0c0c62e0
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a500a0
  .word 0x27a602c0
  .word 0x27a700b0
  .word 0x0c06b414
  .word 0x00000000
  .word 0x8fa200b0
  .word 0x1840002b
  .word 0x00000000
  .word 0x8e020108
  .word 0x14400025
  .word 0x00000000
  .word 0x8e040104
  .word 0x0c0c62c0
  .word 0x00000000
  .word 0x90430003
  .word 0x240200ff
  .word 0x1462001e
  .word 0x00000000
  .word 0x24040001
  .word 0x24050014
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a02d
  .word 0x16800004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000010
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000a
  .word 0x3c060068
  .word 0x24c63640
  .word 0x3c07001c
  .word 0x24e70960
  .word 0x3c08001c
  .word 0x25080d30
  .word 0x0280482d
  .word 0x0c0652e0
  .word 0x00000000
  .word 0xae900004
  .word 0x24030005
  .word 0xae830008
  .word 0xae80000c
  .word 0xae020108
  .word 0xae00010c
  .word 0x1000002d
  .word 0x00000000
  .word 0x8e020108
  .word 0x1440002a
  .word 0x00000000
  .word 0x8e040104
  .word 0x0c0c62c0
  .word 0x00000000
  .word 0x90420003
  .word 0x14400024
  .word 0x00000000
  .word 0x8e02010c
  .word 0x2841000b
  .word 0x1420001e
  .word 0x00000000
  .word 0x24040001
  .word 0x24050014
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a02d
  .word 0x12800011
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000a
  .word 0x3c060068
  .word 0x24c63640
  .word 0x3c07001c
  .word 0x24e70960
  .word 0x3c08001c
  .word 0x25080d30
  .word 0x0280482d
  .word 0x0c0652e0
  .word 0x00000000
  .word 0xae900004
  .word 0x2402000a
  .word 0xae820008
  .word 0x3c02437f
  .word 0xae82000c
  .word 0xae00010c
  .word 0x10000003
  .word 0x00000000
  .word 0x24420001
  .word 0xae02010c
  .word 0x8e1000f8
  .word 0x1600ff63
  .word 0x00000000
  .word 0x10000304
  .word 0x00000000
  .word 0x8e220028
  .word 0x30420002
  .word 0x14400004
  .word 0x00000000
  .word 0x8e3100f8
  .word 0x100002fd
  .word 0x00000000
  .word 0x0000b02d
  .word 0x100002f4
  .word 0x00000000
  .word 0x00161080
  .word 0x00621021
  .word 0x8c550098
  .word 0x12a002ee
  .word 0x00000000
  .word 0x8eb00014
  .word 0x10000129
  .word 0x00000000
  .word 0x8e020008
  .word 0x10400125
  .word 0x00000000
  .word 0x27a400b0
  .word 0x0000282d
  .word 0x24060208
  .word 0x0c148502
  .word 0x00000000
  .word 0x27a502c0
  .word 0xc6620030
  .word 0xc6610034
  .word 0xc6600038
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a102c0
  .word 0xc7a003c0
  .word 0x46000800
  .word 0xe7a002c0
  .word 0xc7a102c4
  .word 0xc7a003c4
  .word 0x46000800
  .word 0xe7a002c4
  .word 0xc7a102c8
  .word 0xc7a003c8
  .word 0x46000800
  .word 0xe7a002c8
  .word 0x0200202d
  .word 0x27a600b0
  .word 0x0c06b488
  .word 0x00000000
  .word 0x27a502c0
  .word 0xdfa202c0
  .word 0xc7a002c8
  .word 0xffa203b0
  .word 0xe7a003b8
  .word 0xc7a202cc
  .word 0xc7a102d0
  .word 0xc7a002d4
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a203b0
  .word 0xc7a103b4
  .word 0xc7a003b8
  .word 0xe7a202cc
  .word 0xe7a102d0
  .word 0xe7a002d4
  .word 0x0200202d
  .word 0x27a600b0
  .word 0x0c06b488
  .word 0x00000000
  .word 0x27a502c0
  .word 0xdfa202c0
  .word 0xc7a002c8
  .word 0xffa202e0
  .word 0xe7a002e8
  .word 0xc7a202cc
  .word 0xc7a102d0
  .word 0xc7a002d4
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a202e0
  .word 0xc7a102e4
  .word 0xc7a002e8
  .word 0xe7a202cc
  .word 0xe7a102d0
  .word 0xe7a002d4
  .word 0xc6620030
  .word 0xc6610034
  .word 0xc6600038
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a102c0
  .word 0xc7a003c0
  .word 0x46000801
  .word 0xe7a002c0
  .word 0xc7a102c4
  .word 0xc7a003c4
  .word 0x46000801
  .word 0xe7a002c4
  .word 0xc7a102c8
  .word 0xc7a003c8
  .word 0x46000801
  .word 0xe7a002c8
  .word 0x0200202d
  .word 0x27a600b0
  .word 0x0c06b488
  .word 0x00000000
  .word 0x27a502c0
  .word 0xdfa202c0
  .word 0xc7a002c8
  .word 0xffa202f0
  .word 0xe7a002f8
  .word 0xc7a202cc
  .word 0xc7a102d0
  .word 0xc7a002d4
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a202f0
  .word 0xc7a102f4
  .word 0xc7a002f8
  .word 0xe7a202cc
  .word 0xe7a102d0
  .word 0xe7a002d4
  .word 0x0200202d
  .word 0x27a600b0
  .word 0x0c06b488
  .word 0x00000000
  .word 0xdfa202c0
  .word 0xc7a002c8
  .word 0xffa20300
  .word 0xe7a00308
  .word 0xc7a202cc
  .word 0xc7a102d0
  .word 0xc7a002d4
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a20300
  .word 0xc7a10304
  .word 0xc7a00308
  .word 0xe7a202cc
  .word 0xe7a102d0
  .word 0xe7a002d4
  .word 0x0c068070
  .word 0x00000000
  .word 0x1440000c
  .word 0x00000000
  .word 0x27a502c0
  .word 0xc6620030
  .word 0xc6610034
  .word 0xc6600038
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0x0200202d
  .word 0x27a600b0
  .word 0x0c06b488
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x24020023
  .word 0x1462003a
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x0040a02d
  .word 0x27a403a0
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a203a0
  .word 0xe7a103a4
  .word 0xe7a003a8
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a003a0
  .word 0x3c0242c8
  .word 0x44821800
  .word 0x00000000
  .word 0x46001a42
  .word 0xe7a90080
  .word 0xc7a203a4
  .word 0x46021a02
  .word 0xe7a80084
  .word 0xc7a103a8
  .word 0x460119c2
  .word 0xe7a70088
  .word 0x46000007
  .word 0x46001982
  .word 0xe7a6008c
  .word 0x46001007
  .word 0x46001942
  .word 0xe7a50090
  .word 0x46000807
  .word 0x46001902
  .word 0xe7a40094
  .word 0xc6830030
  .word 0x46034800
  .word 0xe7a00080
  .word 0xc6820034
  .word 0x46024000
  .word 0xe7a00084
  .word 0xc6810038
  .word 0x46013800
  .word 0xe7a00088
  .word 0x46033000
  .word 0xe7a0008c
  .word 0x46022800
  .word 0xe7a00090
  .word 0x46012000
  .word 0xe7a00094
  .word 0x0200202d
  .word 0x27a50080
  .word 0x27a600b0
  .word 0x0c06b488
  .word 0x00000000
  .word 0x8fa200b4
  .word 0x1840002b
  .word 0x00000000
  .word 0x8e020020
  .word 0x14400025
  .word 0x00000000
  .word 0xc6010018
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010032
  .word 0x4500001e
  .word 0x00000000
  .word 0x24040001
  .word 0x24050014
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a02d
  .word 0x16800004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000010
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000a
  .word 0x3c060068
  .word 0x24c63630
  .word 0x3c07001c
  .word 0x24e70880
  .word 0x3c08001c
  .word 0x25080920
  .word 0x0280482d
  .word 0x0c0652e0
  .word 0x00000000
  .word 0xae900004
  .word 0x24030005
  .word 0xae830008
  .word 0xae80000c
  .word 0xae020020
  .word 0xae000024
  .word 0x1000002e
  .word 0x00000000
  .word 0x8e020020
  .word 0x1440002b
  .word 0x00000000
  .word 0xc6010018
  .word 0x44800000
  .word 0x00000000
  .word 0x46010032
  .word 0x45000025
  .word 0x00000000
  .word 0x8e020024
  .word 0x2841000b
  .word 0x1420001f
  .word 0x00000000
  .word 0x24040001
  .word 0x24050014
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a02d
  .word 0x12800011
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000a
  .word 0x3c060068
  .word 0x24c63630
  .word 0x3c07001c
  .word 0x24e70880
  .word 0x3c08001c
  .word 0x25080920
  .word 0x0280482d
  .word 0x0c0652e0
  .word 0x00000000
  .word 0xae900004
  .word 0x2402000a
  .word 0xae820008
  .word 0x3c023f80
  .word 0xae82000c
  .word 0xae000020
  .word 0xae000024
  .word 0x10000003
  .word 0x00000000
  .word 0x24420001
  .word 0xae020024
  .word 0x8e100028
  .word 0x1600fed7
  .word 0x00000000
  .word 0x8eb00028
  .word 0x100000dc
  .word 0x00000000
  .word 0x8e020008
  .word 0x104000d8
  .word 0x00000000
  .word 0x27a400b0
  .word 0x0000282d
  .word 0x24060208
  .word 0x0c148502
  .word 0x00000000
  .word 0x27a502c0
  .word 0xc6620030
  .word 0xc6610034
  .word 0xc6600038
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a102c0
  .word 0xc7a003c0
  .word 0x46000800
  .word 0xe7a002c0
  .word 0xc7a102c4
  .word 0xc7a003c4
  .word 0x46000800
  .word 0xe7a002c4
  .word 0xc7a102c8
  .word 0xc7a003c8
  .word 0x46000800
  .word 0xe7a002c8
  .word 0x0200202d
  .word 0x27a600b0
  .word 0x0c06b488
  .word 0x00000000
  .word 0x27a502c0
  .word 0xdfa202c0
  .word 0xc7a002c8
  .word 0xffa20310
  .word 0xe7a00318
  .word 0xc7a202cc
  .word 0xc7a102d0
  .word 0xc7a002d4
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a20310
  .word 0xc7a10314
  .word 0xc7a00318
  .word 0xe7a202cc
  .word 0xe7a102d0
  .word 0xe7a002d4
  .word 0x0200202d
  .word 0x27a600b0
  .word 0x0c06b488
  .word 0x00000000
  .word 0x27a502c0
  .word 0xdfa202c0
  .word 0xc7a002c8
  .word 0xffa20320
  .word 0xe7a00328
  .word 0xc7a202cc
  .word 0xc7a102d0
  .word 0xc7a002d4
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a20320
  .word 0xc7a10324
  .word 0xc7a00328
  .word 0xe7a202cc
  .word 0xe7a102d0
  .word 0xe7a002d4
  .word 0xc6620030
  .word 0xc6610034
  .word 0xc6600038
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a102c0
  .word 0xc7a003c0
  .word 0x46000801
  .word 0xe7a002c0
  .word 0xc7a102c4
  .word 0xc7a003c4
  .word 0x46000801
  .word 0xe7a002c4
  .word 0xc7a102c8
  .word 0xc7a003c8
  .word 0x46000801
  .word 0xe7a002c8
  .word 0x0200202d
  .word 0x27a600b0
  .word 0x0c06b488
  .word 0x00000000
  .word 0x27a502c0
  .word 0xdfa202c0
  .word 0xc7a002c8
  .word 0xffa20330
  .word 0xe7a00338
  .word 0xc7a202cc
  .word 0xc7a102d0
  .word 0xc7a002d4
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a20330
  .word 0xc7a10334
  .word 0xc7a00338
  .word 0xe7a202cc
  .word 0xe7a102d0
  .word 0xe7a002d4
  .word 0x0200202d
  .word 0x27a600b0
  .word 0x0c06b488
  .word 0x00000000
  .word 0xdfa202c0
  .word 0xc7a002c8
  .word 0xffa20340
  .word 0xe7a00348
  .word 0xc7a202cc
  .word 0xc7a102d0
  .word 0xc7a002d4
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a20340
  .word 0xc7a10344
  .word 0xc7a00348
  .word 0xe7a202cc
  .word 0xe7a102d0
  .word 0xe7a002d4
  .word 0x8fa200b4
  .word 0x1840002b
  .word 0x00000000
  .word 0x8e020020
  .word 0x14400025
  .word 0x00000000
  .word 0xc6010018
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010032
  .word 0x4500001e
  .word 0x00000000
  .word 0x24040001
  .word 0x24050014
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a02d
  .word 0x16800004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000010
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000a
  .word 0x3c060068
  .word 0x24c63630
  .word 0x3c07001c
  .word 0x24e70880
  .word 0x3c08001c
  .word 0x25080920
  .word 0x0280482d
  .word 0x0c0652e0
  .word 0x00000000
  .word 0xae900004
  .word 0x24030005
  .word 0xae830008
  .word 0xae80000c
  .word 0xae020020
  .word 0xae000024
  .word 0x1000002e
  .word 0x00000000
  .word 0x8e020020
  .word 0x1440002b
  .word 0x00000000
  .word 0xc6010018
  .word 0x44800000
  .word 0x00000000
  .word 0x46010032
  .word 0x45000025
  .word 0x00000000
  .word 0x8e020024
  .word 0x2841000b
  .word 0x1420001f
  .word 0x00000000
  .word 0x24040001
  .word 0x24050014
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a02d
  .word 0x12800011
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000a
  .word 0x3c060068
  .word 0x24c63630
  .word 0x3c07001c
  .word 0x24e70880
  .word 0x3c08001c
  .word 0x25080920
  .word 0x0280482d
  .word 0x0c0652e0
  .word 0x00000000
  .word 0xae900004
  .word 0x2402000a
  .word 0xae820008
  .word 0x3c023f80
  .word 0xae82000c
  .word 0xae000020
  .word 0xae000024
  .word 0x10000003
  .word 0x00000000
  .word 0x24420001
  .word 0xae020024
  .word 0x8e100028
  .word 0x1600ff24
  .word 0x00000000
  .word 0x8eb00024
  .word 0x100000dc
  .word 0x00000000
  .word 0x8e020008
  .word 0x104000d8
  .word 0x00000000
  .word 0x27a400b0
  .word 0x0000282d
  .word 0x24060208
  .word 0x0c148502
  .word 0x00000000
  .word 0x27a502c0
  .word 0xc6620030
  .word 0xc6610034
  .word 0xc6600038
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a102c0
  .word 0xc7a003c0
  .word 0x46000800
  .word 0xe7a002c0
  .word 0xc7a102c4
  .word 0xc7a003c4
  .word 0x46000800
  .word 0xe7a002c4
  .word 0xc7a102c8
  .word 0xc7a003c8
  .word 0x46000800
  .word 0xe7a002c8
  .word 0x0200202d
  .word 0x27a600b0
  .word 0x0c06b488
  .word 0x00000000
  .word 0x27a502c0
  .word 0xdfa202c0
  .word 0xc7a002c8
  .word 0xffa20350
  .word 0xe7a00358
  .word 0xc7a202cc
  .word 0xc7a102d0
  .word 0xc7a002d4
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a20350
  .word 0xc7a10354
  .word 0xc7a00358
  .word 0xe7a202cc
  .word 0xe7a102d0
  .word 0xe7a002d4
  .word 0x0200202d
  .word 0x27a600b0
  .word 0x0c06b488
  .word 0x00000000
  .word 0x27a502c0
  .word 0xdfa202c0
  .word 0xc7a002c8
  .word 0xffa20360
  .word 0xe7a00368
  .word 0xc7a202cc
  .word 0xc7a102d0
  .word 0xc7a002d4
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a20360
  .word 0xc7a10364
  .word 0xc7a00368
  .word 0xe7a202cc
  .word 0xe7a102d0
  .word 0xe7a002d4
  .word 0xc6620030
  .word 0xc6610034
  .word 0xc6600038
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a102c0
  .word 0xc7a003c0
  .word 0x46000801
  .word 0xe7a002c0
  .word 0xc7a102c4
  .word 0xc7a003c4
  .word 0x46000801
  .word 0xe7a002c4
  .word 0xc7a102c8
  .word 0xc7a003c8
  .word 0x46000801
  .word 0xe7a002c8
  .word 0x0200202d
  .word 0x27a600b0
  .word 0x0c06b488
  .word 0x00000000
  .word 0x27a502c0
  .word 0xdfa202c0
  .word 0xc7a002c8
  .word 0xffa20370
  .word 0xe7a00378
  .word 0xc7a202cc
  .word 0xc7a102d0
  .word 0xc7a002d4
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a20370
  .word 0xc7a10374
  .word 0xc7a00378
  .word 0xe7a202cc
  .word 0xe7a102d0
  .word 0xe7a002d4
  .word 0x0200202d
  .word 0x27a600b0
  .word 0x0c06b488
  .word 0x00000000
  .word 0xdfa202c0
  .word 0xc7a002c8
  .word 0xffa20380
  .word 0xe7a00388
  .word 0xc7a202cc
  .word 0xc7a102d0
  .word 0xc7a002d4
  .word 0xe7a202c0
  .word 0xe7a102c4
  .word 0xe7a002c8
  .word 0xc7a20380
  .word 0xc7a10384
  .word 0xc7a00388
  .word 0xe7a202cc
  .word 0xe7a102d0
  .word 0xe7a002d4
  .word 0x8fa200b4
  .word 0x1840002b
  .word 0x00000000
  .word 0x8e020020
  .word 0x14400025
  .word 0x00000000
  .word 0xc6010018
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010032
  .word 0x4500001e
  .word 0x00000000
  .word 0x24040001
  .word 0x24050014
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a02d
  .word 0x16800004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000010
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000a
  .word 0x3c060068
  .word 0x24c63630
  .word 0x3c07001c
  .word 0x24e70880
  .word 0x3c08001c
  .word 0x25080920
  .word 0x0280482d
  .word 0x0c0652e0
  .word 0x00000000
  .word 0xae900004
  .word 0x24030005
  .word 0xae830008
  .word 0xae80000c
  .word 0xae020020
  .word 0xae000024
  .word 0x1000002e
  .word 0x00000000
  .word 0x8e020020
  .word 0x1440002b
  .word 0x00000000
  .word 0xc6010018
  .word 0x44800000
  .word 0x00000000
  .word 0x46010032
  .word 0x45000025
  .word 0x00000000
  .word 0x8e020024
  .word 0x2841000b
  .word 0x1420001f
  .word 0x00000000
  .word 0x24040001
  .word 0x24050014
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a02d
  .word 0x12800011
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000a
  .word 0x3c060068
  .word 0x24c63630
  .word 0x3c07001c
  .word 0x24e70880
  .word 0x3c08001c
  .word 0x25080920
  .word 0x0280482d
  .word 0x0c0652e0
  .word 0x00000000
  .word 0xae900004
  .word 0x2402000a
  .word 0xae820008
  .word 0x3c023f80
  .word 0xae82000c
  .word 0xae000020
  .word 0xae000024
  .word 0x10000003
  .word 0x00000000
  .word 0x24420001
  .word 0xae020024
  .word 0x8e100028
  .word 0x1600ff24
  .word 0x00000000
  .word 0x26d60001
  .word 0x8e230160
  .word 0x8c620014
  .word 0x02c2102b
  .word 0x1440fd09
  .word 0x00000000
  .word 0x8e3100f8
  .word 0x1620fcfc
  .word 0x00000000
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
  .word 0x27bd03d0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}



#pragma alias jtbl_0096017C_abs jtbl_0096017C









// Retail reconstruction note: states 3, 5, and 11 each perform field-load
// scheduling directly rather than calling the compact source helper.
// The task/archive predicates and camera-frame offsets follow retail.
// State 11 also queues the special zero-minor resource request path.
// This restores the missing state-machine work; residual differences are
// primarily compiler layout and register-allocation choices.





/* Removing this pragma leaves func_001ba8d0 at normalized_diff 132 (object 372B); with it, normalized_diff 0 (object 376B) — measured W310. */
















// FUN_001c1e20
void func_001c1e20(KwlnTask* transWallTask)
{
    ResrcModelFld* modelFld;
    void* fadeWork;

    modelFld = (ResrcModelFld*)MT_Scene_GetResListHead_y2(RESRC_TYPE_MODELFLD);
    while (modelFld != NULL)
    {
        if ((modelFld->base.flags & 2) == 0)
        {
            modelFld = (ResrcModelFld*)modelFld->base.next;
            continue;
        }

        if (mdlGetColor(modelFld->mdl)->a == 0)
        {
            fadeWork = (*(void* (**)(u32, u32, u32))((u8*)&rwGlobals + 0x184))(1, 0x14, rwMEMHINTDUR_GLOBAL);
            if (fadeWork != NULL)
            {
                kwlnTaskCreateWithAutoPriority(transWallTask,
                                               10,
                                               "RMD fade CTL",
                                               func_001c0960,
                                               func_001c0d30,
                                               fadeWork);
                ((void**)fadeWork)[1] = modelFld;
                ((u32*)fadeWork)[2] = 1;
                ((f32*)fadeWork)[3] = 255.0f;
            }
        }

        modelFld = (ResrcModelFld*)modelFld->base.next;
    }

    ((void (*)(void*))(*(void**)((u8*)&rwGlobals + 0x17c)))(transWallTask->workData);
}

/* W377: opt_propagation off improves func_001bb300 (nd3604 -> nd3024; object 4780/4912). */
// FUN_001C1F30
KwlnTask* FUN_001c1f30(KwlnTask* parentTask, KwlnTask* collisionTask)
{
    KwlnTask* task;
    TransWallCtlWork* work;
    void* camera;
    RwV3d collisionPosition;

    work = (TransWallCtlWork*)((void* (*)(u32, u32, u32))DAT_00960184[0])(
        1, sizeof(TransWallCtlWork), rwMEMHINTDUR_GLOBAL);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreateWithAutoPriority(parentTask,
                                          0x83d,
                                          "trans wall CTL",
                                          func_001c0d70,
                                          func_001c1e20,
                                          work);
    work->collisionTask = collisionTask;

    camera = kwlnGetMainCamera();
    func_004cb2f0(*(void**)((u8*)camera + 4));
    K_FldFrame_CtlCopyPos(&collisionPosition, collisionTask);

    return task;
}

// Residual MWCC register allocation and loop scheduling differ from retail; accepted floor.
// Candidate bounds now follow the pattern dimensions; remaining mismatch is compiler codegen.
/* W377: stacking opt_loop_invariants on and opt_propagation off improves func_001bc630 (nd756 -> nd667; object 996/1168). */
// FUN_001C2000
void FUN_001c2000(KwlnTask* transWallTask, KwlnTask* collisionTask)
{
    TransWallCtlWork* work;

    work = (TransWallCtlWork*)transWallTask->workData;
    work->collisionTask = collisionTask;
}

/* W377: stacking opt_common_subs off and opt_lifetimes on improves func_001bcac0 (nd1569 -> nd1551; object 2384/2448). */
// FUN_001C2010
u32 FUN_001c2010(void)
{
    FieldSequenceData data;

    func_0017f8d0();
    memset(&data, 0, sizeof(data));
    data.unk_00 = (u16)scrGetIntPara(0);
    data.unk_02 = (u16)scrGetIntPara(1);
    data.unk_04 = (u16)scrGetIntPara(2);
    data.unk_08 = (u16)scrGetIntPara(3);
    adminiChangeSeq(ADMINI_SEQ_FIELD, &data, 0x1c, false);
    func_001d0270();

    return true;
}

/* W377: opt_loop_invariants on improves func_001bd450 (nd439 -> nd431; object 1132/1136). */
// FUN_001C20B0
u32 FUN_001c20b0(void)
{
    FieldSequenceData data;

    gMtScene->unk_14 = -1;
    func_0017f8d0();
    memset(&data, 0, sizeof(data));
    data.unk_00 = (u16)scrGetIntPara(0);
    data.unk_02 = (u16)scrGetIntPara(1);
    data.unk_04 = (u16)scrGetIntPara(2);
    data.unk_08 = (u16)scrGetIntPara(3);
    adminiChangeSeq(ADMINI_SEQ_FIELD, &data, 0x1c, false);
    func_001d0270();

    return true;
}

// FUN_001C2160
u32 FUN_001c2160(void)
{
    SocialLinkSequenceData data;
    s32 cmdTimer;
    u32 result;

    datSetActiveSocialLink(0xff);
    data.unk_0c = (u32)scrGetIntPara(0);
    data.unk_10 = (u32)scrGetIntPara(1);
    data.unk_14 = (u32)scrGetIntPara(2);

    cmdTimer = scrGetCmdTimer();
    if (cmdTimer == 0)
    {
        adminiChangeSeq(ADMINI_SEQ_FIELD2, &data, 0x1c, false);
        goto common_false;
    }
    if ((s32)scrGetCmdTimer() <= 10)
    {
        goto common_false;
    }
    if (adminiGetNowSeqId_u32() != ADMINI_SEQ_NULL)
    {
        goto checks_false;
    }
    if (adminiGetNextSeqId_u32() != ADMINI_SEQ_INVALID)
    {
        goto checks_false;
    }
    result = true;
    goto done;
checks_false:
    result = false;
    goto done;
common_false:
    result = false;
done:
    return result;
}

/* W377: stacking opt_loop_invariants on and opt_dead_assignments off improves func_001bd950 (nd3513 -> nd2143; object 6328/6352). */
// FUN_001C2240
u32 FUN_001c2240(void)
{
    SocialLinkSequenceData data;
    s32 socialLink;
    s32 cmdTimer;
    u32 result;

    socialLink = scrGetIntPara(3);
    datSetActiveSocialLink_s16((s16)socialLink);
    data.unk_0c = (u32)scrGetIntPara(0);
    data.unk_10 = (u32)scrGetIntPara(1);
    data.unk_14 = (u32)scrGetIntPara(2);

    cmdTimer = scrGetCmdTimer();
    if (cmdTimer == 0)
    {
        adminiChangeSeq(ADMINI_SEQ_FIELD2, &data, 0x1c, false);
        goto common_false;
    }
    if ((s32)scrGetCmdTimer() <= 10)
    {
        goto common_false;
    }
    if (adminiGetNowSeqId_u32() != ADMINI_SEQ_NULL)
    {
        goto checks_false;
    }
    if (adminiGetNextSeqId_u32() != ADMINI_SEQ_INVALID)
    {
        goto checks_false;
    }
    func_00171b50(socialLink);
    result = true;
    goto done;
checks_false:
    result = false;
    goto done;
common_false:
    result = false;
done:
    return result;
}

// FUN_001C2340
u32 FUN_001c2340(void)
{
    SeqDungeon data;

    func_0017f8d0();
    data.floor = (u32)scrGetIntPara(0);
    data.unk_04 = 0;
    if (data.floor == 1)
    {
        DUNGEON_SEQUENCE_FLAG = 1;
    }
    adminiChangeSeq(ADMINI_SEQ_DUNGEON, &data, sizeof(data), false);
    func_001d0270();

    return true;
}

// FUN_001C23B0
u32 FUN_001c23b0(void)
{
    SeqDungeon data;
    s32 i;
    KwlnTask* task;

    func_0017f8d0();
    data.floor = (u32)scrGetIntPara(0);
    data.unk_04 = (u32)scrGetIntPara(1);
    if (data.floor == 1)
    {
        DUNGEON_SEQUENCE_FLAG = 1;
    }
    adminiChangeSeq(ADMINI_SEQ_DUNGEON, &data, sizeof(data), false);

    for (i = 0; i < FLDUNIT_PC_MAX; i++)
    {
        task = *(KwlnTask**)((u8*)gFldUnitsPc + i * sizeof(FldUnit) + 0x16c);
        if (task != NULL)
        {
            kwlnTaskEnableFlags(task, KWLNTASK_FLAG_SUSPENDED, 0);
        }
    }

    return true;
}
