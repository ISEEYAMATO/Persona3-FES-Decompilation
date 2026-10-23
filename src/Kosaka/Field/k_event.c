#include "Kosaka/Field/k_event.h"
#include "Kosaka/Field/k_unit.h"
#include "Kosaka/Field/k_majorIds.h"
#include "Kosaka/Field/k_minorIds.h"
#include "Kosaka/Field/k_sceneDraw.h"
#include "Kosaka/Field/k_fldFrame.h"
#include "Scene/mt_scene.h"
#include "Scene/resrcManager.h"
#include "Graphics/Model/mdlManager.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "h_snd.h"
#include "Kosaka/Field/k_fldrc.h"
#include "Kosaka/Field/k_field.h"
#include "h_cdvd.h"
#include "Main/Game/game_support.h"

#include "Kosaka/k_misc.h"
#include "Kosaka/Field/k_encount.h"
extern void func_001956d0(void* resource, u32 flags, u32 value);
extern void* DAT_0096017c_y2[];
extern u32* PTR_DAT_007cd540;
extern u16* puGpffffa850;
extern s32* piGpffffa850;
extern u32 uGpffffb59c;
extern s32 iGpffffb598;
extern f32* iGpffffb5a0;
extern void* uGpffffb52c;
extern void* uGpffffb590;
extern f32 fGpffff8248;
extern u8 gp0xffff95d0[8];
extern u8* DAT_007ce290;
extern u32 DAT_007ce280;
extern u32 DAT_007ce284;
extern u32 DAT_007ce288;
extern u8* DAT_007ce294_y2;
extern void* DAT_0086b180[0x310];
extern u32 DAT_0086e690;
extern u32 DAT_0086e694;
extern u8 DAT_00871ec0[0x200];
extern char s__field_script_reserve_xxx_006837af[];
extern const char DAT_006836f0[];
extern RwV3d DAT_00683780[];
extern RwV3d DAT_00683910;
extern RwV3d DAT_00683920;
extern const char D_00683930[];
extern const char D_00683940[];
extern u64 DAT_00683960;
extern u32 DAT_00683968;
extern u64 DAT_00683970;
extern u32 DAT_00683978;
extern u64 DAT_00683980;
extern u32 DAT_00683988;
extern u64 DAT_00683990;
extern u32 DAT_00683998;
extern const char DAT_006839a0[];
extern const char DAT_006839c0[];
extern const char DAT_006839d8[];
extern const char DAT_006839f0[];
extern const char DAT_00683a10[];
extern void* DAT_0086bdc0[0x10];
extern u32 func_001a02c0(void);
extern u32 func_001a0310(void);
extern u8* func_001b9120_y2(void);
extern u32 func_001bff20(void);
extern u32 func_001d7300(u32 major, u16 minor, u32 area);
extern u16 func_001d75f0(u32 major, u16 minor, u32 area);
extern u16 func_001d76e0(u32 major, u16 minor, u32 area);
extern u16 func_001d77d0(u32 major, u16 minor, u16 area);
#pragma alias func_001d77d0_u32 func_001d77d0
extern u32 func_001d77d0_u32(u32 major, u32 minor, u16 area);
#pragma alias func_001d1db0_u32 func_001d1db0
extern void func_001d1db0_u32(void* work, const void* source, u32 resourceId);
extern u16* func_001d78c0(u32 major, u32 minor, u16 area);
extern FldUnit* func_001cf940(u32 encounter, void* unit);
extern u32 func_001cfdd0(u32 index);
extern void* func_001cd9a0(u32 charId);
extern u16 func_003b65d0(u16 id, void* table);
extern void* func_00318b60(void* model);
extern s32 func_00318ed0(void* model, s32 index, RwV3d* position);
extern u64 func_00318b70(void* model);
extern void func_00318a30(void* dst, void* src, u32 count);
extern void func_00318a50(void* src, void* dst, void* value, u32 count);
extern void func_00318a90(void* model, void* value, u32 count);
extern void func_00319230(void* model, u32 value);
extern void func_00318ad0(void* model, void* value);
extern void* func_00318b00(void* model);
extern void func_003174e0(void* model);
extern void* func_00317450(void* value);
extern void func_00317730(void* model);
extern void func_003182d0(void* model, u32 slot, u32 anim, u32 blend, u32 flags);
extern f32 func_00318910(void* model, u32 slot, u32 anim);
extern void func_00318770(void* model, u32 slot, f32 value);
extern void func_0031c1d0(void* model);
extern void func_00319190(void* model);
extern u32 func_0016f190(u32 flag);
extern u32 func_0016ef30(void);
extern u32 func_0017d920(void);
extern u32 func_0017da40(void);
extern u32 func_0017e480(u32 a, u32 b, u32 c, u32 d);
extern void func_003b7090(u16 resourceId);
extern void func_004c2f10(u64 value);
extern f32 RwV3dLength_y2(const RwV3d* value);
extern u32 func_00488f30(void);
extern void* func_00431670(u32 parent, s32 index, void* unit);
extern void* func_0044ad20(u32 parent, s32 index);
extern void func_00434f60();
extern void func_00452010(RwV3d* value);
extern f32 func_004c6ac0_y2(const RwV3d* value);
extern void func_004cb420(u64 left, u64 right);
extern f32 func_0052e878(f32 value);
extern u32 func_00523ac8_y2(char* buffer, const char* path, ...);
extern void func_0019d400(const char* file, s32 line, s32 value);
extern void func_00521250_y2(void* dst, const void* src, u32 size);
extern void func_00100ec0_y2(void* object);
extern void func_001023a0(void* object);
extern u32 func_001016b0_y2(void);
extern u32 func_0017d800(void);
extern void func_00195020(void* task);
extern void func_0019c2f0(void* task, u32 value);
extern KwlnTask* func_001a60d0(KwlnTask* parentTask, Model* mdl,
                               u32 targetAlpha, s32 frames);
extern u32 func_00195460(void);
#pragma alias func_00195460_marker func_00195460
extern u32 func_00195460_marker(u32 marker);
extern void func_001ad870(void* task, u32 flags);
extern void func_001add40(void* task);
extern void func_001ad8c0(f32 value, void* task);
#pragma alias func_001ad8c0_reordered func_001ad8c0
extern void func_001ad8c0_reordered(KwlnTask* task, f32 value);
extern f32 func_001ad8b0(void* task);
extern u32 func_001ad930(void* task);
extern void* func_001a91b0(void* task, const RwV3d* pos);
extern void func_001a92d0(void* task, void* handle, const RwV3d* pos);
extern void func_001a9390(void* task, void* handle, u32 value);
extern void func_001a9400(void* task, void* handle);
extern void func_001a0150(u16 resourceId, u32 value);
extern void* func_001dd460(u32 parent, u32 mode, u32 id);
extern void func_001dd5f0(void* task, void* model);
extern void func_001dd5e0(void* task, u32 value);
extern void* func_001af930(u32 parent, void* resource);
extern KwlnTask* func_00194b80(KwlnTask* parent, u32 priority,
                               const char* name, void* update,
                               void* destroy, void* work);
extern void* func_001828d0(s16 id, void* dst);
extern void* func_00182d90(s16 id, u32 mode, u8 value, void* dst);
extern u32 func_00316f70(void* model);
extern u32 func_001c65e0_y2(FldUnit* unit);
extern void func_001d0bc0(void* output, u32 count);
extern void* func_004c38c0(void);
extern void func_004c3880(void* matrix);
extern u32 func_00319770(Model* model, u16 slot);
extern u32 func_001c0040(void);
extern void func_001a0dc0(u16 resourceId, u32 value);
extern KwlnTask* func_001d3c40(KwlnTask* parent, u32 model);
#pragma alias func_001d3c40_ptr func_001d3c40
extern KwlnTask* func_001d3c40_ptr(KwlnTask* parent, Model* model);
extern KwlnTask* func_001d40e0(KwlnTask* parent, FldUnit* unit);
extern u32 func_0016c970(s16 pcId);
extern u16 func_0016c4f0(s16 pcId);
extern u32 func_0016c5f0(s16 pcId);
extern void func_0016cf40(s16 pcId, s64 value);
extern void func_001adc20(KwlnTask* collisCtlTask, const RwV3d* position);
extern s32 func_001dde00(s32 value);
extern u32 func_001a01c0(void);
extern void func_004350e0(s32 parent, s32 enabled);
extern void func_001adff0(KwlnTask* collisCtlTask,
                          const RwV3d* axis,
                          f32 angle);
extern void K_Assert(const char* file, s32 line);
FldUnitMdl gFldUnitsPcMdl[FLDUNIT_PC_MAX]; // 00871ea0
FldUnit gFldUnitsPc[FLDUNIT_PC_MAX];       // 008717a0
FldUnit gFldUnitsEc[FLDUNIT_EC_MAX];  // 0086eda0. Enemies
static u32 sFldUnitsEcCount;          // 007ce28c
static inline void FldUnit_SetPcFormationPosition(s32 index,
                                                    FldUnit* unit,
                                                    RwMatrix* reference,
                                                    const RwV3d* fieldPosition)
{
    RwV3d offset;
    RwV3d position;
    KwlnTask* collisCtlTask;

    collisCtlTask = ((ResrcModelChar*)unit->resrc)->collisCtlTask;
    switch (index)
    {
    case 0:
        func_001adc20(collisCtlTask, fieldPosition);
        break;
    case 1:
        position = reference->pos;
        offset = reference->right;
        RwV3dNormalize(&offset, &offset);
        position.x += offset.x * 120.0f;
        position.y += offset.y * 120.0f;
        position.z += offset.z * 120.0f;
        func_001adc20(collisCtlTask, &position);
        break;
    case 2:
        position = reference->pos;
        offset = reference->right;
        RwV3dNormalize(&offset, &offset);
        offset.x = -offset.x;
        offset.y = -offset.y;
        offset.z = -offset.z;
        position.x += offset.x * 120.0f;
        position.y += offset.y * 120.0f;
        position.z += offset.z * 120.0f;
        func_001adc20(collisCtlTask, &position);
        break;
    case 3:
        position = reference->pos;
        offset = reference->at;
        RwV3dNormalize(&offset, &offset);
        offset.x = -offset.x;
        offset.y = -offset.y;
        offset.z = -offset.z;
        position.x += offset.x * 150.0f;
        position.y += offset.y * 150.0f;
        position.z += offset.z * 150.0f;
        func_001adc20(collisCtlTask, &position);
        break;
    }
}
static inline void FldUnit_SetPcDungeonPosition(s32 index,
                                                 FldUnit* unit,
                                                 RwMatrix* reference,
                                                 RwV3d* axis)
{
    RwV3d position;
    RwV3d offset;
    KwlnTask* task;
    f32 angle;

    task = ((ResrcModelChar*)unit->resrc)->collisCtlTask;
    angle = *(f32*)((u8*)unit->unk_168 + 0x10c);
    switch (index)
    {
    case 0:
        func_001adff0(task, axis, angle);
        func_001adc20(task, (const RwV3d*)((u8*)unit->unk_168 + 0x100));
        break;
    case 1:
        position = reference->pos;
        offset = reference->right;
        RwV3dNormalize(&offset, &offset);
        position.x += offset.x * 90.0f;
        position.y += offset.y * 90.0f;
        position.z += offset.z * 90.0f;
        offset = reference->at;
        RwV3dNormalize(&offset, &offset);
        offset.x = -offset.x;
        offset.y = -offset.y;
        offset.z = -offset.z;
        position.x += offset.x * 70.0f;
        position.y += offset.y * 70.0f;
        position.z += offset.z * 70.0f;
        func_001adff0(task, axis, angle);
        func_001adc20(task, &position);
        break;
    case 2:
        position = reference->pos;
        offset = reference->right;
        RwV3dNormalize(&offset, &offset);
        offset.x = -offset.x;
        offset.y = -offset.y;
        offset.z = -offset.z;
        position.x += offset.x * 90.0f;
        position.y += offset.y * 90.0f;
        position.z += offset.z * 90.0f;
        offset = reference->at;
        RwV3dNormalize(&offset, &offset);
        offset.x = -offset.x;
        offset.y = -offset.y;
        offset.z = -offset.z;
        position.x += offset.x * 70.0f;
        position.y += offset.y * 70.0f;
        position.z += offset.z * 70.0f;
        func_001adff0(task, axis, angle);
        func_001adc20(task, &position);
        break;
    case 3:
        position = reference->pos;
        offset = reference->at;
        RwV3dNormalize(&offset, &offset);
        offset.x = -offset.x;
        offset.y = -offset.y;
        offset.z = -offset.z;
        position.x += offset.x * 150.0f;
        position.y += offset.y * 150.0f;
        position.z += offset.z * 150.0f;
        func_001adff0(task, axis, angle);
        func_001adc20(task, &position);
        break;
    }
}
typedef struct FldUnitNode
{
    Resrc base;
    RwV3d pos;
} FldUnitNode;


#pragma alias DAT_0086b180_y2 DAT_0086b180
#pragma alias DAT_0096017c_y2 DAT_0096017c
#pragma alias DAT_007ce294_y2 DAT_007ce294
#pragma alias func_001b9120_y2 func_001b9120
#pragma alias RwV3dLength_y2 RwV3dLength
#pragma alias func_004c6ac0_y2 func_004c6ac0
#pragma alias func_00523ac8_y2 func_00523ac8
#pragma alias func_00521250_y2 func_00521250
#pragma alias func_00100ec0_y2 func_00100ec0
#pragma alias func_001016b0_y2 func_001016b0
#pragma alias func_001c65e0_y2 func_001c65e0


KwlnTask* K_FldEvent_CreateDrawCmdTask(KwlnTask* fldEventTask);

extern void FUN_003b2cb0(f32 param_1, s32 param_2, s32 param_3, s32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, u32 param_9);
#pragma alias FUN_00318770_k_event_typed FUN_00318770
extern void FUN_00318770_k_event_typed(u32 model, u32 slot, f32 frame);
#pragma alias memset_k_event_typed memset
extern void* memset_k_event_typed(void* dst, s32 value, u32 size);
extern f32 acosf(f32 x);
#pragma alias sDegreesPerRadian D_007CAFA0
extern f32 sDegreesPerRadian;

extern const char D_006836F0[];
extern const char D_00683710[];
extern u32 func_002ff790(void* object);
extern s16 D_006836B0[];
extern f32 DAT_007caefc;
#pragma alias DAT_0086b180_abs DAT_0086b180_y2
extern u8 DAT_0086b180_abs[];
extern f32 func_004c6ac0(const RwV3d* vector);
extern s32 func_001c6dd0(const FldUnit* unit, f32 maxDist);
u32 K_FldEvent_IsPosWithinFov(const RwMatrix* viewerMat,
                               const RwV3d* targetPos,
                               f32 fov);

extern void* func_001b9120(void);
extern u32 func_001b0910(void);
extern u32 func_001008b0(const char* path);
extern void* func_00100d80(const char* path, u32 mode);
extern u32 func_001016b0(void* resource);
extern void* func_001021c0(const char* path, s32* size);
extern void func_00100ec0(void* resource);
extern void* func_001d8d80(void* script);
extern u32 func_001d8d50(void* list);
extern void* func_001d8d60(void* list, u32 index);
extern u32 func_0043a230(s32 index);
extern void* func_00316e00(u32 type, u32 id, u32 mode);
extern u16 func_003b6030(u32 id, u32 mode, void* model);
extern void* func_003b5d10(u16 resourceId);
extern void* DAT_00960184[];
extern void (*DAT_0096017c[])(void*);
#pragma alias DAT_0096017c_abs DAT_0096017c
extern u32 DAT_0096017c_abs[];
extern u8 D_0086B180[];
extern u8 D_008717A0[];
extern u8 DAT_00871948[];
extern RwV3d D_008717D0;
extern u8 DAT_0086be80[0x2700];
#pragma alias DAT_0086eda0_units DAT_0086eda0
extern FldUnit DAT_0086eda0_units[];
extern u8 DAT_0086e580[0x114];
extern const char D_00683730[];
extern void func_0019d3f0(const char* file, s32 line);
extern u32 gTraceCode;
extern u32 gFldScrMemory;
extern u32 gFldScrSize;
extern u32 DAT_007ce294;
extern u32 D_007CE284;
extern u32 D_007CE23C;
extern u8 DAT_007ce238[];
extern u8 DAT_007ce210[];
extern u32 D_007CE274;
#pragma alias D_008717E8_abs D_008717E8
extern u8 D_008717E8_abs[];
#pragma alias D_008717F0_abs D_008717F0
extern u8 D_008717F0_abs[];
#pragma alias D_008717F4_abs D_008717F4
extern u8 D_008717F4_abs[];
#pragma alias D_00871914_abs D_00871914
extern u8 D_00871914_abs[];
#pragma alias DAT_007e094e_abs DAT_007e094e
extern u8 DAT_007e094e_abs[];

extern u32 func_00523ac8(void* buffer, const char* format, ...);
extern u32 func_00521250(void* dst, u32 src, u32 size);
extern void K_Abort(const char* message, const char* file, s32 line);
extern void func_001c80c0(void);
extern u32 func_001c6080(void);
extern u32 func_001c65e0(const FldUnit* unit);
extern void* func_001c6a20(const FldUnit* unit, f32 maxDist, f32 fov);
extern FldUnit* func_001c6f50(const FldUnit* unit, f32 fov, f32 maxDist);
extern void func_001cd790(KwlnTask* task, u32 value);
extern void func_001ce880(void);
extern u32 func_001ce960(void);
extern u32 func_001d00b0(void);

static s32 FldEvent_GridCoord(f32 value)
{
    s32 cell;

    cell = (s32)((value + 400.0f) / 800.0f);
    if (cell < 0)
    {
        return (cell + 3) >> 2;
    }
    return cell >> 2;
}

static u8* FldEvent_MapCell(const RwV3d* position)
{
    s32 x;
    s32 z;

    x = FldEvent_GridCoord(position->x);
    z = FldEvent_GridCoord(position->z);
    return (u8*)0x0086b180 + x * 0xc4 + z * 0x310;
}

static u32 FldEvent_IsSceneBlocked(void)
{
    s32 major;
    s32 minor;

    major = gMtScene->fldMajorId;
    minor = gMtScene->fldMinorId;
    if (major == 4 || major == 5 || major == 6 || major == 7 || major == 8 ||
        major == 9 || major == 10 || major == 12 || major == 14 ||
        major == 33 || major == 39)
    {
        return true;
    }
    if ((major == 26 && (minor == 51 || minor == 52 || minor == 53)) ||
        (major == 27 && minor == 50) ||
        (major == 32 && (minor == 1 || minor == 2)) ||
        (major == 35 && minor == 1) ||
        (major == 37 && minor == 1))
    {
        return true;
    }
    return false;
}

// FUN_001c5ee0
u16 K_FldEvent_FindFldHitAt(const RwV3d* heroPos, ResrcFldHit** fldHitDst)
{
    u16 resTypeId;
    ResrcFldHit* hit;
    const RwV3d* tri[3];
    RwV3d normal;
    static const RwV3d sFldHitNormal = {0.0f, 1.0f, 0.0f}; // 006836c0

    resTypeId = -1;
    hit = (ResrcFldHit*)MT_Scene_GetResListHead(RESRC_TYPE_FLDHIT);

    if (K_Scene_001a0250() == true)
    {
        return -1;
    }

    while (hit != NULL)
    {
        normal = sFldHitNormal;

        tri[0] = &hit->vertices[0];
        tri[1] = &hit->vertices[1];
        tri[2] = &hit->vertices[2];
        if (K_FldFrame_IsPointInTriangle(heroPos, tri, &normal) == true)
        {
            if ((heroPos->y < tri[0]->y + 100.0f) && (heroPos->y > tri[0]->y - 100.0f))
            {
                resTypeId = hit->base.resTypeId;
                *fldHitDst = hit;
                break;
            }
        }

        tri[0] = &hit->vertices[1];
        tri[1] = &hit->vertices[2];
        tri[2] = &hit->vertices[3];
        if (K_FldFrame_IsPointInTriangle(heroPos, tri, &normal) == true)
        {
            if ((heroPos->y < tri[0]->y + 100.0f) && (heroPos->y > tri[0]->y - 100.0f))
            {
                resTypeId = hit->base.resTypeId;
                *fldHitDst = hit;
                break;
            }
        }

        hit = (ResrcFldHit*)hit->base.next;
    }  

    return resTypeId;
}

// FUN_001c6080
u32 func_001c6080(void)
{
    MtScene* scene;
    s32 major;
    u32 result;

    result = 1;
    scene = gMtScene;
    major = scene->fldMajorId;
    if (major == 4 || major == 5 || major == 6 || major == 7 || major == 8 ||
        major == 9 || major == 10 || major == 12 || major == 14 ||
        major == 0x21 || major == 0x27)
    {
        goto blocked;
    }
    if (major == 0x1A && scene->fldMinorId == 0x33)
    {
        goto blocked;
    }
    if (major == 0x1A && scene->fldMinorId == 0x34)
    {
        goto blocked;
    }
    if (major == 0x1A && scene->fldMinorId == 0x35)
    {
        goto blocked;
    }
    if (major == 0x1B && scene->fldMinorId == 0x32)
    {
        goto blocked;
    }
    if (major == 0x20 && scene->fldMinorId == 1)
    {
        goto blocked;
    }
    if (major == 0x20 && scene->fldMinorId == 2)
    {
        goto blocked;
    }
    if (major == 0x23 && scene->fldMinorId == 1)
    {
        goto blocked;
    }
    if (major == 0x25 && scene->fldMinorId == 1)
    {
        goto blocked;
    }
    goto done;

blocked:
    result = 0;
done:
    return result;
}

// FUN_001c6200
u32 K_FldEvent_IsPosWithinFov(const RwMatrix* viewerMat, const RwV3d* targetPos, f32 fov)
{
    u32 isWithinFov;
    RwV3d viewDir;
    RwV3d targetDir;
    RwV3d forward = {0.0f, 0.0f, 1.0f};
    f32 viewAngle;
    f32 halfFov;
    f32 targetAngle;

    isWithinFov = false;
    halfFov = fov / 2.0f;

    RwV3dNormalize(&viewDir, &viewerMat->at);

    targetDir.x = targetPos->x - viewerMat->pos.x;
    targetDir.y = targetPos->y - viewerMat->pos.y;
    targetDir.z = targetPos->z - viewerMat->pos.z;
    RwV3dNormalize(&targetDir, &targetDir);

    viewAngle = sDegreesPerRadian * acosf((viewDir.x * forward.x) +
                                         (viewDir.y * forward.y) +
                                         (viewDir.z * forward.z));
    if (viewDir.x < 0.0f)
    {
        viewAngle *= -1.0f;
    }
    viewAngle += 180.0f;

    targetAngle = sDegreesPerRadian * acosf((targetDir.x * forward.x) +
                                           (targetDir.y * forward.y) +
                                           (targetDir.z * forward.z));
    if (targetDir.x < 0.0f)
    {
        targetAngle *= -1.0f;
    }
    targetAngle += 180.0f;

    if (!(viewAngle + halfFov <= 360.0f))
    {
        if ((viewAngle - halfFov <= targetAngle) || !((viewAngle + halfFov) - 360.0f < targetAngle))
        {
            isWithinFov = true;
        }
    }
    else
    {
        if (viewAngle - halfFov < 0.0f)
        {
            if (!(viewAngle + halfFov < targetAngle) || ((viewAngle - halfFov) + 360.0f <= targetAngle))
            {
                isWithinFov = true;
            }
        }
        else if (!(viewAngle + halfFov < targetAngle) && (viewAngle - halfFov <= targetAngle))
        {
            isWithinFov = true;
        }
    }

    return isWithinFov;
}

// Reconstructed cell search, nearest-distance filtering, and collision raycast.
// Residual MWCC register/control-flow ordering remains; 744B object vs 768B retail window.
// FUN_001c6450
u32 func_001c6450(const RwMatrix* viewerMat,
                  const RwV3d* targetPos,
                  f32 fov,
                  f32 maxDist)
{
    RwV3d delta;
    RwV3d line[2];
    RwV3d hitPoint;
    s32 result;
    u32 rayResult;

    result = false;
    if (K_FldEvent_IsPosWithinFov(viewerMat, targetPos, fov) != true)
    {
        goto done;
    }
    delta.x = targetPos->x - viewerMat->pos.x;
    delta.y = targetPos->y - viewerMat->pos.y;
    delta.z = targetPos->z - viewerMat->pos.z;
    if (RwV3dLength(&delta) >= maxDist)
    {
        goto done;
    }

    line[0] = viewerMat->pos;
    line[1] = *targetPos;
    line[0].y += 100.0f;
    line[1].y += 100.0f;
    if (K_FldFrame_Raycast(line, &hitPoint) == true)
    {
        return false;
    }

    hitPoint = line[0];
    line[0] = line[1];
    line[1] = hitPoint;
    rayResult = K_FldFrame_Raycast(line, &hitPoint);
    result = true;
    if (rayResult == true)
    {
        return false;
    }
done:
    return result;
}

#pragma push
/* Removing this loses FUN_001c65e0 (MATCH nd0 -> MISMATCH nd169) - measured W161. */
#pragma opt_rebuildconditionals off
#pragma opt_loop_invariants on
// FUN_001c65e0 MATCHING
u32 func_001c65e0(const FldUnit* unit)
{
    s32 i;
    s32 j;
    s32 active;
    s32 sum;
    s32 average;
    u32 result;
    u32 expected;
    u32 valid;
    const FldUnit* target;
    target = unit;
    result = true;
    expected = result;
    if (datGetFlag(0xc65) == expected)
    {
        return expected;
    }
    sum = 0;
    active = 0;
    {
        FldUnit* units;
        i = 0;
        units = gFldUnitsPc;
        for (; i < FLDUNIT_PC_MAX; i++)
        {
            valid = false;
            if (units[i].genusBase != NULL && units[i].resrc != NULL)
            {
                valid = true;
            }
            valid = valid != false;
            if (valid == 1)
            {
                sum += units[i].unk_184;
                active++;
            }
        }
    }

    average = sum / active;
    for (j = 0; D_006836B0[j * 2] != -1; j++)
    {
        if (average <= D_006836B0[j * 2])
        {
            if ((average - target->unk_184) < D_006836B0[j * 2 + 1])
            {
                goto done;
            }
            result = false;
            goto done;
        }
    }
done:
    return result;
}
#pragma pop
// W419: moving z initialization after viewer-position setup improved
// func_001c6720 from 260/744 to 245/744; the base-pointer form reached
// 244/744. Explicit pointer-entry/while and do-while probes regressed to
// 300/748 and 285/748 respectively; rejected.
// W419: the same z setup reorder improved func_001c6a20 from 350/820 to
// 336/820; explicit do-while and declaration permutations made no further
// improvement.
// FUN_001c6720
asm void* func_001c6720(const FldUnit* unit, f32 maxDist)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080882d
  .word 0x46006586
  .word 0x0000802d
  .word 0xc795820c
  .word 0x8c840050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x24520030
  .word 0x0000982d
  .word 0x0c068094
  .word 0x00000000
  .word 0x10400013
  .word 0x00000000
  .word 0x3c0243c8
  .word 0x44820800
  .word 0xc6400000
  .word 0x46000800
  .word 0x46000024
  .word 0x46800060
  .word 0x3c024448
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00029883
  .word 0x04410003
  .word 0x00000000
  .word 0x24420003
  .word 0x00029883
  .word 0x8e240050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x24540030
  .word 0x0000902d
  .word 0x0c068094
  .word 0x00000000
  .word 0x10400014
  .word 0x00000000
  .word 0xc6810008
  .word 0x3c0243c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46000024
  .word 0x46800060
  .word 0x3c024448
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00029083
  .word 0x04410003
  .word 0x00000000
  .word 0x24420003
  .word 0x00029083
  .word 0x0000a02d
  .word 0x001210c0
  .word 0x00521823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021900
  .word 0x3c020087
  .word 0x2442b180
  .word 0x00432021
  .word 0x001310c0
  .word 0x00531823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x00449821
  .word 0x10000056
  .word 0x00000000
  .word 0x8c420048
  .word 0x10400052
  .word 0x00000000
  .word 0x00141080
  .word 0x02629021
  .word 0x8e420000
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540030
  .word 0x8e240050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400030
  .word 0x4600a001
  .word 0xe7a000b0
  .word 0x8e420000
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540034
  .word 0x8e240050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400034
  .word 0x4600a001
  .word 0xe7a000b4
  .word 0x8e420000
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540038
  .word 0x8e240050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400038
  .word 0x4600a001
  .word 0xe7a000b8
  .word 0x27a400b0
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x46000506
  .word 0x4616a034
  .word 0x45000028
  .word 0x00000000
  .word 0x4615a034
  .word 0x45000025
  .word 0x00000000
  .word 0x8e240050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20080
  .word 0xe7a10084
  .word 0xe7a00088
  .word 0x8ea20000
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a2008c
  .word 0xe7a10090
  .word 0xe7a00094
  .word 0xc7a00084
  .word 0x3c0242c8
  .word 0x44820800
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00084
  .word 0xc7a00090
  .word 0x46010000
  .word 0xe7a00090
  .word 0x27a40080
  .word 0x27a500a0
  .word 0x0c06b30c
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x8eb00000
  .word 0x4600a546
  .word 0x26940001
  .word 0x00141080
  .word 0x0262a821
  .word 0x8ea20000
  .word 0x1440ffa7
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_001c6a20
asm void* func_001c6a20(const FldUnit* unit, f32 maxDist, f32 fov)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf0080
  .word 0x7fb60070
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
  .word 0x0080882d
  .word 0x46006586
  .word 0x46006d46
  .word 0x0000802d
  .word 0xc794820c
  .word 0x8c840050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x24520030
  .word 0x0000982d
  .word 0x0c068094
  .word 0x00000000
  .word 0x10400013
  .word 0x00000000
  .word 0x3c0243c8
  .word 0x44820800
  .word 0xc6400000
  .word 0x46000800
  .word 0x46000024
  .word 0x46800060
  .word 0x3c024448
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00029883
  .word 0x04410003
  .word 0x00000000
  .word 0x24420003
  .word 0x00029883
  .word 0x8e240050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x24540030
  .word 0x0000902d
  .word 0x0c068094
  .word 0x00000000
  .word 0x10400014
  .word 0x00000000
  .word 0xc6810008
  .word 0x3c0243c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46000024
  .word 0x46800060
  .word 0x3c024448
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00029083
  .word 0x04410003
  .word 0x00000000
  .word 0x24420003
  .word 0x00029083
  .word 0x0000a02d
  .word 0x001210c0
  .word 0x00521823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021900
  .word 0x3c020087
  .word 0x2442b180
  .word 0x00432021
  .word 0x001310c0
  .word 0x00531823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x00449821
  .word 0x10000063
  .word 0x00000000
  .word 0x8e420048
  .word 0x1040005f
  .word 0x00000000
  .word 0x8e240050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040b02d
  .word 0x8e440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x02c0202d
  .word 0x24450030
  .word 0x4600ab06
  .word 0x0c071880
  .word 0x00000000
  .word 0x10400051
  .word 0x00000000
  .word 0x00141080
  .word 0x02629021
  .word 0x8e420000
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4570030
  .word 0x8e240050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400030
  .word 0x4600b801
  .word 0xe7a000c0
  .word 0x8e420000
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4570034
  .word 0x8e240050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400034
  .word 0x4600b801
  .word 0xe7a000c4
  .word 0x8e420000
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4570038
  .word 0x8e240050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400038
  .word 0x4600b801
  .word 0xe7a000c8
  .word 0x8e240050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20090
  .word 0xe7a10094
  .word 0xe7a00098
  .word 0x8e420000
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a2009c
  .word 0xe7a100a0
  .word 0xe7a000a4
  .word 0xc7a00094
  .word 0x3c0242c8
  .word 0x44820800
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00094
  .word 0xc7a000a0
  .word 0x46010000
  .word 0xe7a000a0
  .word 0x27a40090
  .word 0x27a500b0
  .word 0x0c06b30c
  .word 0x00000000
  .word 0x1440000c
  .word 0x00000000
  .word 0x27a400c0
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x46160034
  .word 0x45000006
  .word 0x00000000
  .word 0x46140034
  .word 0x45000003
  .word 0x00000000
  .word 0x8eb00000
  .word 0x46000506
  .word 0x26940001
  .word 0x00141080
  .word 0x0262a821
  .word 0x8eb20000
  .word 0x1640ff9a
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0080
  .word 0x7bb60070
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
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_001c6d70
FldUnit* func_001c6d70(const FldUnit* unit, f32 maxDist)
{
    FldUnit* result;
    s32 index;

    result = NULL;
    index = func_001c6dd0(unit, maxDist);
    if (index > -1)
    {
        result = &gFldUnitsPc[index];
    }
    return result;
}

// FUN_001c6dd0
s32 func_001c6dd0(const FldUnit* unit, f32 maxDist)
{
    RwV3d delta;
    f32 nearest;
    s32 i;
    s32 nearestIndex;

    nearest = DAT_007caefc;
    nearestIndex = -1;
    for (i = 0; i < FLDUNIT_PC_MAX; i++)
    {
        FldUnit* candidate;
        DatUnitGenusBase** genusBase;
        Model** candidateModel;

        candidate = &gFldUnitsPc[i];
        if (unit == candidate)
        {
            continue;
        }
        genusBase = &candidate->genusBase;
        if (*genusBase == NULL)
        {
            continue;
        }
        candidateModel = &candidate->mdl;
        delta.x = mdlGetMatrix(candidate->mdl)->pos.x -
                  mdlGetMatrix(unit->mdl)->pos.x;
        {
            f32 candidateY;

            candidateY = mdlGetMatrix(*candidateModel)->pos.y;
            delta.y = candidateY - mdlGetMatrix(unit->mdl)->pos.y;
        }
        {
            f32 candidateZ;

            candidateZ = mdlGetMatrix(*candidateModel)->pos.z;
            delta.z = candidateZ - mdlGetMatrix(unit->mdl)->pos.z;
        }
        if (func_002ff790(*genusBase) == true)
        {
            continue;
        }
        {
            f32 distance;

            distance = RwV3dLength(&delta);
            if (distance < maxDist && distance < nearest)
            {
                nearestIndex = i;
                nearest = distance;
            }
        }
    }
    return nearestIndex;
}

// FUN_001c6f50
asm FldUnit* func_001c6f50(const FldUnit* unit, f32 fov, f32 maxDist)
{
  .set noreorder
  .word 0x27bdff70
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
  .word 0x0080982d
  .word 0x460065c6
  .word 0x46006d86
  .word 0xc795820c
  .word 0x0000882d
  .word 0x0000902d
  .word 0x10000052
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00438021
  .word 0x12700049
  .word 0x00000000
  .word 0x8e040048
  .word 0x10800046
  .word 0x00000000
  .word 0x0c0bfde4
  .word 0x00000000
  .word 0x24030001
  .word 0x10430041
  .word 0x00000000
  .word 0x26150050
  .word 0x8e640050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x8ea40000
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0280202d
  .word 0x24450030
  .word 0x4600bb06
  .word 0x0c071880
  .word 0x00000000
  .word 0x24030001
  .word 0x14430031
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x24540050
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540030
  .word 0x8e640050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400030
  .word 0x4600a001
  .word 0xe7a00080
  .word 0x8e840000
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540034
  .word 0x8e640050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400034
  .word 0x4600a001
  .word 0xe7a00084
  .word 0x8e840000
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540038
  .word 0x8e640050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400038
  .word 0x4600a001
  .word 0xe7a00088
  .word 0x27a40080
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x46160034
  .word 0x45000006
  .word 0x00000000
  .word 0x46150034
  .word 0x45000003
  .word 0x00000000
  .word 0x0200882d
  .word 0x46000546
  .word 0x26520001
  .word 0x2a420004
  .word 0x1440ffad
  .word 0x00000000
  .word 0x0220102d
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
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_001c7130
u32 K_FldEvent_IsUnitWithinDistOfHero(const FldUnit* fldUnit, f32 maxDist)
{
    return K_FldEvent_AreUnitsWithinDist(fldUnit, &gFldUnitsPc[FLDUNIT_PC_HERO], maxDist);
}
// FUN_001c7160
u32 K_FldEvent_AreUnitsWithinDist(const FldUnit* fldUnitA, const FldUnit* fldUnitB, f32 maxDist)
{
    u32 withinDist;

    withinDist = false;
    if (fldUnitA->genusBase != NULL && fldUnitB->genusBase != NULL)
    {
        withinDist = K_FldEvent_ArePosWithinDist(&mdlGetMatrix(fldUnitA->mdl)->pos,
                                                 &mdlGetMatrix(fldUnitB->mdl)->pos,
                                                 maxDist);
    }

    return withinDist;
}

// FUN_001c71f0
u32 K_FldEvent_ArePosWithinDist(const RwV3d* posA, const RwV3d* posB, f32 maxDist)
{
    RwV3d diff;
    u32 withinDist;

    withinDist = false;

    diff.x = posA->x - posB->x;
    diff.y = posA->y - posB->y;
    diff.z = posA->z - posB->z;

    if (RwV3dLength(&diff) < maxDist)
    {
        withinDist = true;
    }

    return withinDist;
}

// FUN_001c7270
asm void* func_001c7270(const FldUnit* unit, f32 maxDist)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a82d
  .word 0x46006506
  .word 0x8c840050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x24500030
  .word 0x0000882d
  .word 0x0c068094
  .word 0x00000000
  .word 0x10400013
  .word 0x00000000
  .word 0x3c0243c8
  .word 0x44820800
  .word 0xc6000000
  .word 0x46000800
  .word 0x46000024
  .word 0x46800060
  .word 0x3c024448
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00028883
  .word 0x04410003
  .word 0x00000000
  .word 0x24420003
  .word 0x00028883
  .word 0x8ea40050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x24520030
  .word 0x0000802d
  .word 0x0c068094
  .word 0x00000000
  .word 0x10400014
  .word 0x00000000
  .word 0xc6410008
  .word 0x3c0243c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46000024
  .word 0x46800060
  .word 0x3c024448
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00028083
  .word 0x04410003
  .word 0x00000000
  .word 0x24420003
  .word 0x00028083
  .word 0x0000a02d
  .word 0x001010c0
  .word 0x00501823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00029900
  .word 0x001110c0
  .word 0x00511823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00029080
  .word 0x3c020087
  .word 0x2442b180
  .word 0x00531021
  .word 0x02428821
  .word 0x1000002e
  .word 0x00000000
  .word 0x8c420000
  .word 0x1040002a
  .word 0x00000000
  .word 0x00141080
  .word 0x02221021
  .word 0x24500060
  .word 0x8ea40050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4410030
  .word 0x8e020000
  .word 0xc440010c
  .word 0x46010001
  .word 0xe7a00090
  .word 0x8ea40050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4410034
  .word 0x8e020000
  .word 0xc4400110
  .word 0x46010001
  .word 0xe7a00094
  .word 0x8ea40050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4410038
  .word 0x8e020000
  .word 0xc4400114
  .word 0x46010001
  .word 0xe7a00098
  .word 0x27a40090
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x46140034
  .word 0x45000009
  .word 0x00000000
  .word 0x3c020087
  .word 0x2442b1e0
  .word 0x00531021
  .word 0x02421021
  .word 0x02c21021
  .word 0x8c420000
  .word 0x10000008
  .word 0x00000000
  .word 0x26940001
  .word 0x0014b080
  .word 0x02361021
  .word 0x8c420060
  .word 0x1440ffcf
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_001c74c0
ResrcModelNpc* K_FldEvent_FindInteractableNpc()
{
    ResrcModelNpc* npc;
    ResrcModelNpc* interactableNpc;
    RwV3d lookAtPos;
    RwV3d distDiff;
    u32 isWithinFov;
    s32 currAnimId;

    npc = (ResrcModelNpc*)MT_Scene_GetResListHead(RESRC_TYPE_MODELNPC);
    interactableNpc = NULL;
    while (npc != NULL)
    {
        isWithinFov = K_FldEvent_IsPosWithinFov(mdlGetMatrix(gFldUnitsPc[FLDUNIT_PC_HERO].mdl),
                                                &mdlGetMatrix(npc->mdl)->pos,
                                                120.0f);
        if (isWithinFov == true)
        {
            distDiff.x = mdlGetMatrix(npc->mdl)->pos.x - mdlGetMatrix(gFldUnitsPc[FLDUNIT_PC_HERO].mdl)->pos.x;
            distDiff.y = mdlGetMatrix(npc->mdl)->pos.y - mdlGetMatrix(gFldUnitsPc[FLDUNIT_PC_HERO].mdl)->pos.y;
            distDiff.z = mdlGetMatrix(npc->mdl)->pos.z - mdlGetMatrix(gFldUnitsPc[FLDUNIT_PC_HERO].mdl)->pos.z;

            if (RwV3dLength(&distDiff) < 200.0f)
            {
                lookAtPos = mdlGetMatrix(gFldUnitsPc[FLDUNIT_PC_HERO].mdl)->pos;
                lookAtPos.y += 140.0f;

                mdlLookAtSetTargetPosXYZ(npc->mdl, &lookAtPos);
                mdlLookAtSetFlags(npc->mdl, mdlLookAtGetFlags(npc->mdl) | MDLLOOKAT_FLAG_UNK1000);

                if (interactableNpc == NULL)
                {
                    interactableNpc = npc;
                }

                if (gMtScene->fldMajorId == FLD_MAJOR_DORM)
                {
                    currAnimId = mdlAnimGetId(npc->mdl, 0);
                    if (currAnimId >= 4)
                    {
                        if (currAnimId % 2 == 0)
                        {
                            mdlAnimSet(npc->mdl, 0, currAnimId + 1, 7, MDLANIM_FLAG_LOOP);
                        }
                    }
                }
            }
            else
            {
                mdlLookAtDisableTarget(npc->mdl);

                if (gMtScene->fldMajorId == FLD_MAJOR_DORM)
                {
                    currAnimId = mdlAnimGetId(npc->mdl, 0);
                    if (currAnimId >= 4)
                    {
                        if (currAnimId % 2 == 1)
                        {
                            mdlAnimSet(npc->mdl, 0, currAnimId - 1, 7, MDLANIM_FLAG_LOOP);
                        }
                    }
                }
            }
        }
        else
        {
            mdlLookAtDisableTarget(npc->mdl);

            if (gMtScene->fldMajorId == FLD_MAJOR_DORM)
            {
                currAnimId = mdlAnimGetId(npc->mdl, 0);
                if (currAnimId >= 4)
                {
                    if (currAnimId % 2 == 1)
                    {
                        mdlAnimSet(npc->mdl, 0, currAnimId - 1, 7, MDLANIM_FLAG_LOOP);
                    }
                }
            }
        }

        npc = (ResrcModelNpc*)npc->base.next;
    }

    return interactableNpc;
}

/* W415 negative probes: moving 001d8d60 ahead of 001d8d50 via found/sentinel/do-while loop forms raised nd 334 to 385, 391, 398, 434, 461, 482, 485, or 489; baseline retained. */
// FUN_001c7830
#ifndef PC_BUILD
asm void func_001c7830(void* output, void* script)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0090
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
  .word 0x00a0802d
  .word 0x0200202d
  .word 0x0c076360
  .word 0x00000000
  .word 0x0040a82d
  .word 0x0280202d
  .word 0x0000282d
  .word 0x24060034
  .word 0x0c148502
  .word 0x00000000
  .word 0x3c030087
  .word 0x8c6317e8
  .word 0xae830004
  .word 0x8e030048
  .word 0xae830014
  .word 0x24110001
  .word 0x0000802d
  .word 0x0220982d
  .word 0x10000086
  .word 0x00000000
  .word 0x001318c0
  .word 0x00731823
  .word 0x00032180
  .word 0x3c030087
  .word 0x246317a0
  .word 0x0064b821
  .word 0x8ee30048
  .word 0x1060007c
  .word 0x00000000
  .word 0x0000b02d
  .word 0x12a00014
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000000b
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0c076358
  .word 0x00000000
  .word 0x14570004
  .word 0x00000000
  .word 0x24160001
  .word 0x10000008
  .word 0x00000000
  .word 0x26520001
  .word 0x02a0202d
  .word 0x0c076354
  .word 0x00000000
  .word 0x0242102b
  .word 0x1440fff1
  .word 0x00000000
  .word 0x0013263c
  .word 0x0004263f
  .word 0x0c10e88c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430003
  .word 0x00000000
  .word 0x12c0005d
  .word 0x00000000
  .word 0x001310c0
  .word 0x00531023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x24520050
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540030
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400030
  .word 0x4600a001
  .word 0xe7a000a0
  .word 0x8e440000
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540034
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400034
  .word 0x4600a001
  .word 0xe7a000a4
  .word 0x8e440000
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540038
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400038
  .word 0x4600a001
  .word 0xe7a000a8
  .word 0x27a400a0
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x8f85a850
  .word 0x8ca40000
  .word 0x24030033
  .word 0x14830006
  .word 0x00000000
  .word 0x8ca40004
  .word 0x24030001
  .word 0x14830002
  .word 0x00000000
  .word 0x44800000
  .word 0x3c0344fa
  .word 0x44830800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000012
  .word 0x00000000
  .word 0x001318c0
  .word 0x00731823
  .word 0x00032180
  .word 0x3c030087
  .word 0x246317a0
  .word 0x00642821
  .word 0x8ca40048
  .word 0x9483000a
  .word 0x34630001
  .word 0xa483000a
  .word 0x8ca40048
  .word 0x00111880
  .word 0x02831821
  .word 0xac640004
  .word 0x26310001
  .word 0x10000011
  .word 0x00000000
  .word 0x001318c0
  .word 0x00731823
  .word 0x00032180
  .word 0x3c030087
  .word 0x246317a0
  .word 0x00642821
  .word 0x8ca40048
  .word 0x9483000a
  .word 0x3063fffe
  .word 0xa483000a
  .word 0x001018c0
  .word 0x02832021
  .word 0x8ca30048
  .word 0xac83001c
  .word 0xe4800020
  .word 0x26100001
  .word 0x26730001
  .word 0x2a630004
  .word 0x1460ff79
  .word 0x00000000
  .word 0xdfbf0090
  .word 0x7bb70080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001c7b10
u32 K_FldEvent_IsUnitHero(const FldUnit* fldUnit)
{
    return fldUnit == &gFldUnitsPc[FLDUNIT_PC_HERO];
}

// FUN_001c7b30. Temp name ? First condition is weird
u32 K_FldEvent_IsUnitNearFldHit(const FldUnit* unit)
{
    u32 isNear;
    ResrcFldHit* hit;
    RwV3d unitPos;
    const RwV3d* tri[3];
    RwV3d normal;
    static const RwV3d sFldHitNormal = {0.0f, 1.0f, 0.0f}; // 006836e0

    isNear = false;
    hit = (ResrcFldHit*)MT_Scene_GetResListHead(RESRC_TYPE_FLDHIT);

    if (!K_Scene_001a0250())
    {
        return false;
    }

    unitPos = mdlGetMatrix(unit->mdl)->pos;
    while (hit != NULL)
    {
        normal = sFldHitNormal;

        tri[0] = &hit->vertices[0];
        tri[1] = &hit->vertices[1];
        tri[2] = &hit->vertices[2];
        if (K_FldFrame_IsPointInTriangle(&unitPos, tri, &normal) == true)
        {
            if ((unitPos.y < tri[0]->y + 100.0f) && (unitPos.y > tri[0]->y - 100.0f))
            {
                isNear = true;
                break;
            }
        }

        tri[0] = &hit->vertices[1];
        tri[1] = &hit->vertices[2];
        tri[2] = &hit->vertices[3];
        if (K_FldFrame_IsPointInTriangle(&unitPos, tri, &normal) == true)
        {
            if ((unitPos.y < tri[0]->y + 100.0f) && (unitPos.y > tri[0]->y - 100.0f))
            {
                isNear = true;
                break;
            }
        }

        hit = (ResrcFldHit*)hit->base.next;
    }  

    return isNear;
}

// FUN_001c7ce0. Temp name maybe
u32 K_FldEvent_IsCharNearHeroBeforeBtl(u32 charId)
{
    u32 ret;
    s32 i;
    FldUnit* currUnit;
    RwV3d distDiff;
    u32 isNear;
    u32 fldMajor;

    ret = false;
    for (i = 0; i < FLDUNIT_PC_MAX; i++)
    {
        currUnit = &gFldUnitsPc[i];

        if (currUnit->genusBase != NULL &&
           (charId == currUnit->charId))
        {
            isNear = false;

            distDiff.x = gFldUnitsPc[FLDUNIT_PC_HERO].matBeforeBtl.pos.x - currUnit->matBeforeBtl.pos.x;
            distDiff.y = gFldUnitsPc[FLDUNIT_PC_HERO].matBeforeBtl.pos.y - currUnit->matBeforeBtl.pos.y;
            distDiff.z = gFldUnitsPc[FLDUNIT_PC_HERO].matBeforeBtl.pos.z - currUnit->matBeforeBtl.pos.z;

            if (RwV3dLength(&distDiff) < 1600.0f)
            {
                isNear = true;
            }

            if (isNear == true)
            {
                ret = true;
                break;
            }
        }
    }

    fldMajor = gMtScene->fldMajorId;
    if (fldMajor == FLD_MAJOR_ADAMAH && gMtScene->fldMinorId == 0x33  ||
       (fldMajor == FLD_MAJOR_ADAMAH && gMtScene->fldMinorId == 0x34) ||
       (fldMajor == FLD_MAJOR_ADAMAH && gMtScene->fldMinorId == 0x35) ||
       (fldMajor == FLD_MAJOR_DUNGEON && gMtScene->fldMinorId == FLD_MINOR_DUNGEON_FIRST_FLOOR))
    {
        ret = true;
    }

    return ret;
}

// FUN_001c7e70
u32 func_001c7e70(u16 resourceId, u16 variant)
{
    char path[128];
    void* loaded;

    if ((s32)resourceId == -1)
    {
        return false;
    }
    if (func_001b0910() == false)
    {
        func_00523ac8(path, D_006836F0, resourceId, variant);
        if (func_001008b0(path) == 0)
        {
            return false;
        }
        loaded = func_00100d80(path, 0);
        return (u32)loaded;
    }
    return true;
}

/* W415: retail has no zero comparison before either copy; both memcpy destinations are loaded through K_Field_Get, restoring the two 0x001b9120 calls (nd207->202). Direct/alias helper probes were nd207-neutral; retaining null guards was nd247/object432 over the 416-byte window. */
/* W419: outer/cache gotos plus direct allocator stores and volatile cache-size dereferences reduce 001c7f20 to nd66/object416 (previous nd202/object416); residual is confined to the CDVD path. */
/* W419 MATCH: CDVD field alias plus volatile allocator/memcpy size loads reproduce the retail CDVD path at 416/416 (nd0). */
// FUN_001c7f20
u32 func_001c7f20(void* resource)
{
    char path[76];
    void* source;
    u32 size;
    HCdvd* cdvd = (HCdvd*)resource;

    if (cdvd == NULL)
    {
        return true;
    }
    if (K_Fldrc_GetFldPacCdvd() == NULL)
    {
        if (H_Cdvd_IsFileLoaded(cdvd) == false)
        {
            goto failed;
        }
        func_001c80c0();
        *(s32*)((u8*)K_Field_Get() + 0x1144) = cdvd->fileSize / 0x2c;
        *(void**)((u8*)K_Field_Get() + 0x1148) =
            ((void* (*)(u32, u32, u32))DAT_00960184[0])(
                1, *(volatile u32*)&cdvd->fileSize, 0x40000);
        memcpy(*(void**)((u8*)K_Field_Get() + 0x1148),
               cdvd->fileMemory, *(volatile u32*)&cdvd->fileSize);
        H_Cdvd_Destroy(cdvd);
        return true;
    }
    sprintf(path, D_00683710, gMtScene->fldMajorId, gMtScene->fldMinorId);
    source = H_Cdvd_CacheFindFile(path, (u32*)&size);
    if (source == NULL)
    {
        goto success;
    }
    func_001c80c0();
    *(s32*)((u8*)K_Field_Get() + 0x1144) = size / 0x2c;
    *(void**)((u8*)K_Field_Get() + 0x1148) =
        ((void* (*)(u32, u32, u32))DAT_00960184[0])(
            1, *(volatile u32*)&size, 0x40000);
    memcpy(*(void**)((u8*)K_Field_Get() + 0x1148),
           source, *(volatile u32*)&size);
success:
    return true;
failed:
    return false;
}

// FUN_001c80c0
void func_001c80c0(void)
{
    if (*(void**)((u8*)func_001b9120() + 0x1148) != NULL)
    {
        *(s32*)((u8*)func_001b9120() + 0x1144) = 0;
        (*(void (**)(void*))DAT_0096017c_abs)(
            *(void**)((u8*)func_001b9120() + 0x1148));
        *(void**)((u8*)func_001b9120() + 0x1148) = NULL;
    }
}

// FUN_001c8120
#ifndef PC_BUILD
asm void func_001c8120(void* work)
{
  .set noreorder
  .word 0x27bdfef0
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080b82d
  .word 0x0c068094
  .word 0x00000000
  .word 0x10400125
  .word 0x00000000
  .word 0x3c0343c8
  .word 0x44831000
  .word 0x3c030087
  .word 0xc46017d0
  .word 0x46001000
  .word 0x3c034448
  .word 0x44831800
  .word 0x00000000
  .word 0x46030003
  .word 0x46000064
  .word 0x3c030087
  .word 0xc46017d8
  .word 0x46001000
  .word 0x46030003
  .word 0x460000a4
  .word 0x46800820
  .word 0x46001842
  .word 0xe7a10090
  .word 0x3c030087
  .word 0xc46517d4
  .word 0xe7a50094
  .word 0x46801020
  .word 0x46001902
  .word 0xe7a40098
  .word 0x3c03437a
  .word 0x44830000
  .word 0x00000000
  .word 0x460100c0
  .word 0xe7a3009c
  .word 0xe7a500a0
  .word 0x46040080
  .word 0xe7a200a4
  .word 0x46000841
  .word 0xe7a100a8
  .word 0xe7a500ac
  .word 0x46002001
  .word 0xe7a000b0
  .word 0xe7a300b4
  .word 0xe7a500b8
  .word 0xe7a000bc
  .word 0xe7a100c0
  .word 0xe7a500c4
  .word 0xe7a200c8
  .word 0x0000a82d
  .word 0x100000f4
  .word 0x00000000
  .word 0x001518c0
  .word 0x02e33021
  .word 0x8cc3001c
  .word 0x106000ee
  .word 0x00000000
  .word 0x9463000a
  .word 0x30630001
  .word 0x106000ea
  .word 0x00000000
  .word 0x24140001
  .word 0x3c050087
  .word 0x24a517a0
  .word 0x100000e2
  .word 0x00000000
  .word 0x001418c0
  .word 0x00741823
  .word 0x00031980
  .word 0x00a38021
  .word 0x8e030048
  .word 0x106000da
  .word 0x00000000
  .word 0x8cc3001c
  .word 0x8c630004
  .word 0x94640002
  .word 0x960301a8
  .word 0x148300d4
  .word 0x00000000
  .word 0x0000982d
  .word 0x100000b9
  .word 0x00000000
  .word 0x0000902d
  .word 0x00131840
  .word 0x00731821
  .word 0x00031880
  .word 0x007d1821
  .word 0x24710090
  .word 0x10000027
  .word 0x00000000
  .word 0x001218c0
  .word 0x00721823
  .word 0x00032180
  .word 0x3c030087
  .word 0x246317a0
  .word 0x00642021
  .word 0x8c830048
  .word 0x1060001d
  .word 0x00000000
  .word 0x1292001b
  .word 0x00000000
  .word 0x0000b02d
  .word 0xc6210000
  .word 0xc4800030
  .word 0x46000801
  .word 0xe7a00100
  .word 0xc6210004
  .word 0xc4800034
  .word 0x46000801
  .word 0xe7a00104
  .word 0xc6210008
  .word 0xc4800038
  .word 0x46000801
  .word 0xe7a00108
  .word 0x27a40100
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x3c03428c
  .word 0x44830800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000002
  .word 0x00000000
  .word 0x24160001
  .word 0x24030001
  .word 0x12c30005
  .word 0x00000000
  .word 0x26520001
  .word 0x2a430004
  .word 0x1460ffd8
  .word 0x00000000
  .word 0x2a430004
  .word 0x14600084
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000025
  .word 0x00000000
  .word 0x001218c0
  .word 0x00721823
  .word 0x00032180
  .word 0x3c030087
  .word 0x2463eda0
  .word 0x00642021
  .word 0x8c830048
  .word 0x1060001b
  .word 0x00000000
  .word 0x0000b02d
  .word 0xc6210000
  .word 0xc4800030
  .word 0x46000801
  .word 0xe7a000f0
  .word 0xc6210004
  .word 0xc4800034
  .word 0x46000801
  .word 0xe7a000f4
  .word 0xc6210008
  .word 0xc4800038
  .word 0x46000801
  .word 0xe7a000f8
  .word 0x27a400f0
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x3c03428c
  .word 0x44830800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000002
  .word 0x00000000
  .word 0x24160001
  .word 0x24030001
  .word 0x12c30005
  .word 0x00000000
  .word 0x26520001
  .word 0x2a430018
  .word 0x1460ffda
  .word 0x00000000
  .word 0x2a430018
  .word 0x14600057
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000027
  .word 0x00000000
  .word 0x00121880
  .word 0x00721821
  .word 0x000318c0
  .word 0x00721823
  .word 0x000320c0
  .word 0x3c030087
  .word 0x2463be80
  .word 0x00642021
  .word 0x8c830000
  .word 0x1060001b
  .word 0x00000000
  .word 0x0000b02d
  .word 0xc6210000
  .word 0xc480010c
  .word 0x46000801
  .word 0xe7a000e0
  .word 0xc6210004
  .word 0xc4800110
  .word 0x46000801
  .word 0xe7a000e4
  .word 0xc6210008
  .word 0xc4800114
  .word 0x46000801
  .word 0xe7a000e8
  .word 0x27a400e0
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x3c03428c
  .word 0x44830800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000002
  .word 0x00000000
  .word 0x24160001
  .word 0x24030001
  .word 0x12c30005
  .word 0x00000000
  .word 0x26520001
  .word 0x2a430020
  .word 0x1460ffd8
  .word 0x00000000
  .word 0x2a430020
  .word 0x14600028
  .word 0x00000000
  .word 0x3c030087
  .word 0x8c64e580
  .word 0x24030001
  .word 0x14830027
  .word 0x00000000
  .word 0x0000882d
  .word 0x00131040
  .word 0x00531021
  .word 0x00021080
  .word 0x005d1021
  .word 0x24430090
  .word 0xc4610000
  .word 0x3c020087
  .word 0xc440e684
  .word 0x46000801
  .word 0xe7a000d0
  .word 0xc4610004
  .word 0x3c020087
  .word 0xc440e688
  .word 0x46000801
  .word 0xe7a000d4
  .word 0xc4610008
  .word 0x3c020087
  .word 0xc440e68c
  .word 0x46000801
  .word 0xe7a000d8
  .word 0x27a400d0
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x3c03428c
  .word 0x44830800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000002
  .word 0x00000000
  .word 0x24110001
  .word 0x24030001
  .word 0x16230005
  .word 0x00000000
  .word 0x26730001
  .word 0x2a630005
  .word 0x1460ff46
  .word 0x00000000
  .word 0x2a630005
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843730
  .word 0x24050502
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00131840
  .word 0x00731821
  .word 0x00031880
  .word 0x007d1821
  .word 0x24630090
  .word 0xc4620000
  .word 0xc4610004
  .word 0xc4600008
  .word 0xe6020030
  .word 0xe6010034
  .word 0xe6000038
  .word 0x10000005
  .word 0x00000000
  .word 0x26940001
  .word 0x2a830004
  .word 0x1460ff1d
  .word 0x00000000
  .word 0x26b50001
  .word 0x2aa30003
  .word 0x1460ff0b
  .word 0x00000000
  .word 0xdfbf0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0110
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// Retail routes the camera aggregate through an aligned 0x60-byte scratch area before copying six quadwords back; this preserves that real data flow even though the wider function remains NONMATCHING.
// FUN_001c8620
asm void* K_FldEvent_UpdateFldEventTask(KwlnTask* fldEventTask)
{
  .set noreorder
  .word 0x27bdfca0
  .word 0xffbf0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080902d
  .word 0x8c93003c
  .word 0x0000b82d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440008
  .word 0x8f85b51c
  .word 0x0c073594
  .word 0x00000000
  .word 0x8e620000
  .word 0x18400033
  .word 0x00000000
  .word 0x8e620064
  .word 0x14400030
  .word 0x00000000
  .word 0x0c116bd0
  .word 0x00000000
  .word 0x1440002c
  .word 0x00000000
  .word 0x8e620010
  .word 0x14400029
  .word 0x00000000
  .word 0x24040003
  .word 0x0000282d
  .word 0x0c0427d8
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050087
  .word 0x24060003
  .word 0x0c0e54b4
  .word 0x00000000
  .word 0x0c04215c
  .word 0x00000000
  .word 0x2404005a
  .word 0x0c0421a8
  .word 0x00000000
  .word 0x24040006
  .word 0x0c04219c
  .word 0x00000000
  .word 0x2404005a
  .word 0x0c0423f4
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0e5bd4
  .word 0x00000000
  .word 0x0c0f23dc
  .word 0x00000000
  .word 0x0c0f23c8
  .word 0x00000000
  .word 0x8e640060
  .word 0x10800003
  .word 0x00000000
  .word 0x0c065408
  .word 0x00000000
  .word 0x2404141d
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x2402001d
  .word 0xae620000
  .word 0x24020001
  .word 0xae620010
  .word 0x8e6200f8
  .word 0x14400008
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c114cf8
  .word 0x00000000
  .word 0x2402ffff
  .word 0xae6200f8
  .word 0x10000005
  .word 0x00000000
  .word 0x18400003
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae6200f8
  .word 0x8e6200fc
  .word 0x18400003
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae6200fc
  .word 0x8e640000
  .word 0x2c810021
  .word 0x1020133c
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636bd0
  .word 0x00041080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24040400
  .word 0x0c0ed744
  .word 0x00000000
  .word 0xae620014
  .word 0x8e620000
  .word 0x24420001
  .word 0xae620000
  .word 0x1000132c
  .word 0x00000000
  .word 0x8e620004
  .word 0x24030001
  .word 0x10431328
  .word 0x00000000
  .word 0x8e620008
  .word 0x10431325
  .word 0x00000000
  .word 0x8e64005c
  .word 0x0000282d
  .word 0x0c0735e4
  .word 0x00000000
  .word 0xae6000e0
  .word 0x0c114d18
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x28410000
  .word 0x14200054
  .word 0x00000000
  .word 0x0c114d18
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021980
  .word 0x3c020087
  .word 0x2442eda0
  .word 0x00431021
  .word 0xae620024
  .word 0x8c440048
  .word 0x0c0bfde4
  .word 0x00000000
  .word 0x24030001
  .word 0x10431308
  .word 0x00000000
  .word 0x26640028
  .word 0x8e650024
  .word 0x0c071e0c
  .word 0x00000000
  .word 0x96620028
  .word 0x34420001
  .word 0xa6620028
  .word 0x96620028
  .word 0x34420002
  .word 0xa6620028
  .word 0x8e620024
  .word 0x8c44004c
  .word 0x94830012
  .word 0x14600004
  .word 0x00000000
  .word 0x94820014
  .word 0x10400006
  .word 0x00000000
  .word 0xa6630040
  .word 0x94820014
  .word 0xa6620042
  .word 0x10000007
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c420000
  .word 0x244200c8
  .word 0xa6620040
  .word 0x24020001
  .word 0xa6620042
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x24050001
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x24050001
  .word 0x0c074dfc
  .word 0x00000000
  .word 0x24040001
  .word 0x0c114cb4
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c10d438
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x24050001
  .word 0x0c076800
  .word 0x00000000
  .word 0x8e620024
  .word 0x8c440050
  .word 0x0000282d
  .word 0x24060003
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x24020004
  .word 0xae620000
  .word 0x100012c6
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420080
  .word 0x10400057
  .word 0x00000000
  .word 0x0c071820
  .word 0x00000000
  .word 0x24030001
  .word 0x14430052
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x2404000a
  .word 0x8f85b538
  .word 0x24060002
  .word 0x0c0d6ed0
  .word 0x00000000
  .word 0xae620060
  .word 0x0040202d
  .word 0x0000282d
  .word 0x0c0d7068
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x24050001
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x24040001
  .word 0x0c076318
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x24050001
  .word 0x0c076800
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x24050001
  .word 0x0c074dfc
  .word 0x00000000
  .word 0x24040001
  .word 0x0c114cb4
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c10d438
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x0000282d
  .word 0x0c10a7a0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440028
  .word 0x0000282d
  .word 0x0c063030
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44002c
  .word 0x0000282d
  .word 0x0c063acc
  .word 0x00000000
  .word 0x24020002
  .word 0xae620000
  .word 0x1000126b
  .word 0x00000000
  .word 0x24040171
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440009b
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420010
  .word 0x10400096
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42000c
  .word 0x10400009
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x0c065408
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac40000c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400009
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x0c065408
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac400018
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400009
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440028
  .word 0x0c065408
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac400028
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44002c
  .word 0x0000282d
  .word 0x0c063acc
  .word 0x00000000
  .word 0x24040001
  .word 0x0c074618
  .word 0x00000000
  .word 0x0c074644
  .word 0x00000000
  .word 0x0c0746d8
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x24050001
  .word 0x0c074dfc
  .word 0x00000000
  .word 0x24040001
  .word 0x0c114cb4
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c10d438
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x24050001
  .word 0x0c076800
  .word 0x00000000
  .word 0x24040001
  .word 0x0c11690c
  .word 0x00000000
  .word 0x24040001
  .word 0x0c116bdc
  .word 0x00000000
  .word 0x0c075060
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421200
  .word 0x10400006
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441200
  .word 0x0c06a51c
  .word 0x00000000
  .word 0x0c0f23dc
  .word 0x00000000
  .word 0x0c0f23c8
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4210d4
  .word 0x1040002b
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000000d
  .word 0x00000000
  .word 0x00118080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0x8c4410d4
  .word 0x0c065408
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0xac4010d4
  .word 0x26310001
  .word 0x2a220004
  .word 0x1440fff2
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000013
  .word 0x00000000
  .word 0x00108880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c4210e4
  .word 0x1040000b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c4410e4
  .word 0x0c065408
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0xac4010e4
  .word 0x26100001
  .word 0x2a020018
  .word 0x1440ffec
  .word 0x00000000
  .word 0x24020017
  .word 0xae620000
  .word 0x100011cc
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4217e8
  .word 0x8c440004
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x304300ff
  .word 0xae6300ec
  .word 0x00031040
  .word 0x00431021
  .word 0x000218c0
  .word 0x8f82b5a4
  .word 0x00431821
  .word 0xae630100
  .word 0x3c024334
  .word 0x44826800
  .word 0x3c040087
  .word 0x248417a0
  .word 0xc46c0014
  .word 0x0c071a88
  .word 0x00000000
  .word 0xae620024
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x10400005
  .word 0x00000000
  .word 0x8e620024
  .word 0x144005f6
  .word 0x00000000
  .word 0x24170001
  .word 0x3c040087
  .word 0x248417a0
  .word 0x0c071ecc
  .word 0x00000000
  .word 0x24030001
  .word 0x14430058
  .word 0x00000000
  .word 0x8e620024
  .word 0x14400002
  .word 0x00000000
  .word 0xae6300e0
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x1040119e
  .word 0x00000000
  .word 0x0c06fff8
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c070004
  .word 0x00000000
  .word 0x2404000a
  .word 0x0200282d
  .word 0x0040302d
  .word 0x0000382d
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0xae620060
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x24050001
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x24040001
  .word 0x0c076318
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x24050001
  .word 0x0c076800
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x24050001
  .word 0x0c074dfc
  .word 0x00000000
  .word 0x24040001
  .word 0x0c114cb4
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c10d438
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x0000282d
  .word 0x0c10a7a0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440028
  .word 0x0000282d
  .word 0x0c063030
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44002c
  .word 0x0000282d
  .word 0x0c063acc
  .word 0x00000000
  .word 0xae6000e0
  .word 0x24020002
  .word 0xae620000
  .word 0x10001150
  .word 0x00000000
  .word 0x0000882d
  .word 0x0c068094
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000038
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4217e8
  .word 0x10400034
  .word 0x00000000
  .word 0x24042bff
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040802d
  .word 0x16000003
  .word 0x00000000
  .word 0x1000002c
  .word 0x00000000
  .word 0x8e040104
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540030
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400030
  .word 0x4600a001
  .word 0xe7a00280
  .word 0x8e040104
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540034
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400034
  .word 0x4600a001
  .word 0xe7a00284
  .word 0x8e040104
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540038
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400038
  .word 0x4600a001
  .word 0xe7a00288
  .word 0x27a40280
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x3c024348
  .word 0x44820800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000002
  .word 0x00000000
  .word 0x24110001
  .word 0x24030001
  .word 0x16230058
  .word 0x00000000
  .word 0x8e620024
  .word 0x14400002
  .word 0x00000000
  .word 0xae6300e0
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x10401106
  .word 0x00000000
  .word 0x0c06fff8
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c070004
  .word 0x00000000
  .word 0x2404000a
  .word 0x0200282d
  .word 0x0040302d
  .word 0x24070001
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0xae620060
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x24050001
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x24040001
  .word 0x0c076318
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x24050001
  .word 0x0c076800
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x24050001
  .word 0x0c074dfc
  .word 0x00000000
  .word 0x24040001
  .word 0x0c114cb4
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c10d438
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x0000282d
  .word 0x0c10a7a0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440028
  .word 0x0000282d
  .word 0x0c063030
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44002c
  .word 0x0000282d
  .word 0x0c063acc
  .word 0x00000000
  .word 0xae6000e0
  .word 0x24020002
  .word 0xae620000
  .word 0x100010b8
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x24510030
  .word 0x0000802d
  .word 0x0c068094
  .word 0x00000000
  .word 0x10400013
  .word 0x00000000
  .word 0x3c0243c8
  .word 0x44820800
  .word 0xc6200000
  .word 0x46000800
  .word 0x46000024
  .word 0x46800060
  .word 0x3c024448
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00028083
  .word 0x04410003
  .word 0x00000000
  .word 0x24420003
  .word 0x00028083
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x24520030
  .word 0x0000882d
  .word 0x0c068094
  .word 0x00000000
  .word 0x10400014
  .word 0x00000000
  .word 0xc6410008
  .word 0x3c0243c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46000024
  .word 0x46800060
  .word 0x3c024448
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00028883
  .word 0x04410003
  .word 0x00000000
  .word 0x24420003
  .word 0x00028883
  .word 0x0000a02d
  .word 0x001110c0
  .word 0x00511823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00029100
  .word 0x001010c0
  .word 0x00501823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00028880
  .word 0x3c020087
  .word 0x2442b180
  .word 0x00521021
  .word 0x0222a821
  .word 0x10000034
  .word 0x00000000
  .word 0x8c420000
  .word 0x10400030
  .word 0x00000000
  .word 0x00141080
  .word 0x02a21021
  .word 0x24500060
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4410030
  .word 0x8e020000
  .word 0xc440010c
  .word 0x46010001
  .word 0xe7a00270
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4410034
  .word 0x8e020000
  .word 0xc4400110
  .word 0x46010001
  .word 0xe7a00274
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4410038
  .word 0x8e020000
  .word 0xc4400114
  .word 0x46010001
  .word 0xe7a00278
  .word 0x27a40270
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x3c024348
  .word 0x44820800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000009
  .word 0x00000000
  .word 0x3c020087
  .word 0x2442b1e0
  .word 0x00521021
  .word 0x02221021
  .word 0x02c21021
  .word 0x8c430000
  .word 0x10000008
  .word 0x00000000
  .word 0x26940001
  .word 0x0014b080
  .word 0x02b61021
  .word 0x8c420060
  .word 0x1440ffc9
  .word 0x00000000
  .word 0x0000182d
  .word 0xaf83b594
  .word 0x10600059
  .word 0x00000000
  .word 0x8c620004
  .word 0x1440102f
  .word 0x00000000
  .word 0x8e620024
  .word 0x14400003
  .word 0x00000000
  .word 0x24020001
  .word 0xae6200e0
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x10401025
  .word 0x00000000
  .word 0x24020001
  .word 0xac620004
  .word 0x8f86b534
  .word 0x2404000a
  .word 0x8f85b538
  .word 0x0000382d
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0xae620060
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x24050001
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x24040001
  .word 0x0c076318
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x24050001
  .word 0x0c076800
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x24050001
  .word 0x0c074dfc
  .word 0x00000000
  .word 0x24040001
  .word 0x0c114cb4
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c10d438
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x0000282d
  .word 0x0c10a7a0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440028
  .word 0x0000282d
  .word 0x0c063030
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44002c
  .word 0x0000282d
  .word 0x0c063acc
  .word 0x00000000
  .word 0xae6000e0
  .word 0x24020002
  .word 0xae620000
  .word 0x10000fda
  .word 0x00000000
  .word 0x0c071d30
  .word 0x00000000
  .word 0xae62001c
  .word 0x104001ee
  .word 0x00000000
  .word 0x8c4201f4
  .word 0x104001eb
  .word 0x00000000
  .word 0x24040001
  .word 0xae6400e0
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x104001e4
  .word 0x00000000
  .word 0x8e6200fc
  .word 0x144001e1
  .word 0x00000000
  .word 0xae6000e0
  .word 0x8e65001c
  .word 0x8ca301f4
  .word 0x1464010b
  .word 0x00000000
  .word 0x8ca401f8
  .word 0x8c830008
  .word 0x2402ffff
  .word 0x10620081
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441154
  .word 0x0c0f1cb4
  .word 0x00000000
  .word 0x8e62001c
  .word 0x8c4201f8
  .word 0x8c440008
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x24050001
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x24050001
  .word 0x0c076800
  .word 0x00000000
  .word 0x8e62001c
  .word 0x8c440128
  .word 0x0000282d
  .word 0x0c0c6150
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0xae620020
  .word 0x8f82a850
  .word 0x8c440000
  .word 0x24020007
  .word 0x10820004
  .word 0x00000000
  .word 0x24020004
  .word 0x1482000f
  .word 0x00000000
  .word 0x24020007
  .word 0x14820005
  .word 0x00000000
  .word 0x8e620020
  .word 0x2c420004
  .word 0x14400008
  .word 0x00000000
  .word 0x24020004
  .word 0x14820020
  .word 0x00000000
  .word 0x8e620020
  .word 0x2c410004
  .word 0x1020001c
  .word 0x00000000
  .word 0x8e630020
  .word 0x24020007
  .word 0x10820004
  .word 0x00000000
  .word 0x24020004
  .word 0x14820004
  .word 0x00000000
  .word 0x24630001
  .word 0x10000007
  .word 0x00000000
  .word 0x14600004
  .word 0x00000000
  .word 0x24030003
  .word 0x10000002
  .word 0x00000000
  .word 0x24630001
  .word 0x8e62001c
  .word 0x0003343c
  .word 0x0006343f
  .word 0x8c440128
  .word 0x0000282d
  .word 0x24070007
  .word 0x0000402d
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x8e62001c
  .word 0x8c440128
  .word 0x0c0c6480
  .word 0x00000000
  .word 0x3043ffff
  .word 0x2402f7ff
  .word 0x00621024
  .word 0x3045ffff
  .word 0x8e62001c
  .word 0x8c440128
  .word 0x0c0c647c
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x0000282d
  .word 0x0c10a7a0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440028
  .word 0x0000282d
  .word 0x0c063030
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44002c
  .word 0x0000282d
  .word 0x0c063acc
  .word 0x00000000
  .word 0x24020015
  .word 0xae620000
  .word 0x10000f3e
  .word 0x00000000
  .word 0x8c91000c
  .word 0x12220f3b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c461150
  .word 0x2404000a
  .word 0x8e05114c
  .word 0x0220382d
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0xae620060
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x24050001
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x24050001
  .word 0x0c076800
  .word 0x00000000
  .word 0x8e62001c
  .word 0x8c440128
  .word 0x0000282d
  .word 0x0c0c6150
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0xae620020
  .word 0x8f82a850
  .word 0x8c440000
  .word 0x24020007
  .word 0x10820004
  .word 0x00000000
  .word 0x24020004
  .word 0x1482000f
  .word 0x00000000
  .word 0x24020007
  .word 0x14820005
  .word 0x00000000
  .word 0x8e620020
  .word 0x2c420004
  .word 0x14400008
  .word 0x00000000
  .word 0x24020004
  .word 0x14820020
  .word 0x00000000
  .word 0x8e620020
  .word 0x2c410004
  .word 0x1020001c
  .word 0x00000000
  .word 0x8e630020
  .word 0x24020007
  .word 0x10820004
  .word 0x00000000
  .word 0x24020004
  .word 0x14820004
  .word 0x00000000
  .word 0x24630001
  .word 0x10000007
  .word 0x00000000
  .word 0x14600004
  .word 0x00000000
  .word 0x24030003
  .word 0x10000002
  .word 0x00000000
  .word 0x24630001
  .word 0x8e62001c
  .word 0x0003343c
  .word 0x0006343f
  .word 0x8c440128
  .word 0x0000282d
  .word 0x24070007
  .word 0x0000402d
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x8e62001c
  .word 0x8c440128
  .word 0x0c0c6480
  .word 0x00000000
  .word 0x3043ffff
  .word 0x2402f7ff
  .word 0x00621024
  .word 0x3045ffff
  .word 0x8e62001c
  .word 0x8c440128
  .word 0x0c0c647c
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x0000282d
  .word 0x0c10a7a0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440028
  .word 0x0000282d
  .word 0x0c063030
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44002c
  .word 0x0000282d
  .word 0x0c063acc
  .word 0x00000000
  .word 0x24020016
  .word 0xae620000
  .word 0x10000eb9
  .word 0x00000000
  .word 0x24020002
  .word 0x14620eb6
  .word 0x00000000
  .word 0x8ca401fc
  .word 0x8c83006c
  .word 0x2402ffff
  .word 0x10620067
  .word 0x00000000
  .word 0x8ca40208
  .word 0x0c0f1cb4
  .word 0x00000000
  .word 0x8e62001c
  .word 0x8c4401fc
  .word 0x8c450200
  .word 0x8c460204
  .word 0x0c06e3f4
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x24050001
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x24050001
  .word 0x0c076800
  .word 0x00000000
  .word 0x8e62001c
  .word 0x8c440128
  .word 0x0000282d
  .word 0x0c0c6150
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0xae640020
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x24020007
  .word 0x10620004
  .word 0x00000000
  .word 0x24020004
  .word 0x14620004
  .word 0x00000000
  .word 0x24830001
  .word 0x10000007
  .word 0x00000000
  .word 0x14800004
  .word 0x00000000
  .word 0x24030003
  .word 0x10000002
  .word 0x00000000
  .word 0x24830001
  .word 0x8e62001c
  .word 0x0003343c
  .word 0x0006343f
  .word 0x8c440128
  .word 0x0000282d
  .word 0x24070007
  .word 0x0000402d
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e62001c
  .word 0x8c440210
  .word 0x10800004
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c077578
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x0000282d
  .word 0x0c10a7a0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440028
  .word 0x0000282d
  .word 0x0c063030
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44002c
  .word 0x0000282d
  .word 0x0c063acc
  .word 0x00000000
  .word 0x24020015
  .word 0xae620000
  .word 0x10000e4b
  .word 0x00000000
  .word 0x8c870070
  .word 0x10e20e48
  .word 0x00000000
  .word 0x8f86b548
  .word 0x2404000a
  .word 0x8f85b54c
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0xae620060
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x24050001
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x24050001
  .word 0x0c076800
  .word 0x00000000
  .word 0x8e62001c
  .word 0x8c440128
  .word 0x0000282d
  .word 0x0c0c6150
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0xae640020
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x24020007
  .word 0x10620004
  .word 0x00000000
  .word 0x24020004
  .word 0x14620004
  .word 0x00000000
  .word 0x24830001
  .word 0x10000007
  .word 0x00000000
  .word 0x14800004
  .word 0x00000000
  .word 0x24030003
  .word 0x10000002
  .word 0x00000000
  .word 0x24830001
  .word 0x8e62001c
  .word 0x0003343c
  .word 0x0006343f
  .word 0x8c440128
  .word 0x0000282d
  .word 0x24070007
  .word 0x0000402d
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e62001c
  .word 0x8c440210
  .word 0x10800004
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c077578
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x0000282d
  .word 0x0c10a7a0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440028
  .word 0x0000282d
  .word 0x0c063030
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44002c
  .word 0x0000282d
  .word 0x0c063acc
  .word 0x00000000
  .word 0x24020016
  .word 0xae620000
  .word 0x10000de8
  .word 0x00000000
  .word 0x8e620014
  .word 0x8c440128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x24440030
  .word 0x27a5035c
  .word 0x0c0717b8
  .word 0x00000000
  .word 0x3050ffff
  .word 0x3402ffff
  .word 0x120201b3
  .word 0x00000000
  .word 0x321103ff
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421144
  .word 0x0222102b
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843730
  .word 0x24050756
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00111080
  .word 0x00511021
  .word 0x00021040
  .word 0x00511021
  .word 0x00029080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421148
  .word 0x00522821
  .word 0x0000302d
  .word 0x0000a02d
  .word 0x2403ffff
  .word 0x1000000a
  .word 0x00000000
  .word 0x8ca40000
  .word 0x10830005
  .word 0x00000000
  .word 0x00141080
  .word 0x005d1021
  .word 0xac440350
  .word 0x26940001
  .word 0x24c60001
  .word 0x24a50004
  .word 0x2cc20003
  .word 0x1440fff5
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000009
  .word 0x00000000
  .word 0x00111080
  .word 0x005d1021
  .word 0x8c440350
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1040018a
  .word 0x00000000
  .word 0x26310001
  .word 0x0234102b
  .word 0x1440fff6
  .word 0x00000000
  .word 0x14400184
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421148
  .word 0x02421021
  .word 0x9442000e
  .word 0x10400011
  .word 0x00000000
  .word 0x8e7100e4
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421148
  .word 0x02421021
  .word 0x9442000e
  .word 0x12220009
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421148
  .word 0x02421021
  .word 0x9444000e
  .word 0xae6400e4
  .word 0x0c077728
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421148
  .word 0x02421021
  .word 0x9043000c
  .word 0x24020001
  .word 0x1462008f
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421148
  .word 0x02421021
  .word 0x8c430020
  .word 0x24020004
  .word 0x10620065
  .word 0x00000000
  .word 0x24020003
  .word 0x10620048
  .word 0x00000000
  .word 0x24020002
  .word 0x1062002b
  .word 0x00000000
  .word 0x24020001
  .word 0x1062000e
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000006e
  .word 0x00000000
  .word 0x8fa2035c
  .word 0xc4420104
  .word 0xc4410108
  .word 0xc440010c
  .word 0xe7a20340
  .word 0xe7a10344
  .word 0xe7a00348
  .word 0x10000065
  .word 0x00000000
  .word 0x8fa2035c
  .word 0xc441011c
  .word 0xc4400128
  .word 0x46000900
  .word 0xe7a40340
  .word 0xc4410120
  .word 0xc440012c
  .word 0x460008c0
  .word 0xe7a30344
  .word 0xc4410124
  .word 0xc4400130
  .word 0x46000880
  .word 0xe7a20348
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46012003
  .word 0xe7a00340
  .word 0x46011803
  .word 0xe7a00344
  .word 0x46011003
  .word 0x00000000
  .word 0x00000000
  .word 0xe7a00348
  .word 0x1000004b
  .word 0x00000000
  .word 0x8fa2035c
  .word 0xc441011c
  .word 0xc4400134
  .word 0x46000900
  .word 0xe7a40340
  .word 0xc4410120
  .word 0xc4400138
  .word 0x460008c0
  .word 0xe7a30344
  .word 0xc4410124
  .word 0xc440013c
  .word 0x46000880
  .word 0xe7a20348
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46012003
  .word 0xe7a00340
  .word 0x46011803
  .word 0xe7a00344
  .word 0x46011003
  .word 0x00000000
  .word 0x00000000
  .word 0xe7a00348
  .word 0x10000031
  .word 0x00000000
  .word 0x8fa2035c
  .word 0xc4410134
  .word 0xc4400140
  .word 0x46000900
  .word 0xe7a40340
  .word 0xc4410138
  .word 0xc4400144
  .word 0x460008c0
  .word 0xe7a30344
  .word 0xc441013c
  .word 0xc4400148
  .word 0x46000880
  .word 0xe7a20348
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46012003
  .word 0xe7a00340
  .word 0x46011803
  .word 0xe7a00344
  .word 0x46011003
  .word 0x00000000
  .word 0x00000000
  .word 0xe7a00348
  .word 0x10000017
  .word 0x00000000
  .word 0x8fa2035c
  .word 0xc4410128
  .word 0xc4400140
  .word 0x46000900
  .word 0xe7a40340
  .word 0xc441012c
  .word 0xc4400144
  .word 0x460008c0
  .word 0xe7a30344
  .word 0xc4410130
  .word 0xc4400148
  .word 0x46000880
  .word 0xe7a20348
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46012003
  .word 0xe7a00340
  .word 0x46011803
  .word 0xe7a00344
  .word 0x46011003
  .word 0xe7a00348
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x3c0342f0
  .word 0x44836000
  .word 0x0040202d
  .word 0x27a50340
  .word 0x0c071880
  .word 0x00000000
  .word 0x104000d7
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421148
  .word 0x02421021
  .word 0x9042000d
  .word 0x10400003
  .word 0x00000000
  .word 0x24020001
  .word 0xae6200e0
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421148
  .word 0x02421021
  .word 0x94430010
  .word 0x3402ffff
  .word 0x1462005e
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421148
  .word 0x02421021
  .word 0x9042000d
  .word 0x10400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x10400cdc
  .word 0x00000000
  .word 0xae600018
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421148
  .word 0x02421021
  .word 0x94420018
  .word 0x1040002b
  .word 0x00000000
  .word 0x2404000a
  .word 0x0c0ed754
  .word 0x00000000
  .word 0xae620018
  .word 0x1000000c
  .word 0x00000000
  .word 0x8e740018
  .word 0x96910000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421148
  .word 0x02421021
  .word 0x94420018
  .word 0x12220006
  .word 0x00000000
  .word 0x8e8200f8
  .word 0xae620018
  .word 0x8e740018
  .word 0x1680fff3
  .word 0x00000000
  .word 0x12800016
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840104
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421148
  .word 0x02421021
  .word 0x8446001a
  .word 0x8e620018
  .word 0x8c440104
  .word 0x0000282d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0xae600018
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421148
  .word 0x02421021
  .word 0x8c43001c
  .word 0x2402ffff
  .word 0x1062000b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421148
  .word 0x02421021
  .word 0x8447001c
  .word 0x0000202d
  .word 0x24050006
  .word 0x24060002
  .word 0x0c042938
  .word 0x00000000
  .word 0xae6000e0
  .word 0xa670000c
  .word 0x24020003
  .word 0xae620000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x24050001
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x10000c8b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421148
  .word 0x02421021
  .word 0x9042000d
  .word 0x10400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x10400c7f
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x0040882d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c50104c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421148
  .word 0x02421021
  .word 0x94470010
  .word 0x2404000a
  .word 0x8e251048
  .word 0x0200302d
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0xae620060
  .word 0x24040001
  .word 0x0c076318
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x24050001
  .word 0x0c076800
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x24050001
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x24050001
  .word 0x0c074dfc
  .word 0x00000000
  .word 0x24040001
  .word 0x0c114cb4
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c10d438
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x0000282d
  .word 0x0c10a7a0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440028
  .word 0x0000282d
  .word 0x0c063030
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44002c
  .word 0x0000282d
  .word 0x0c063acc
  .word 0x00000000
  .word 0x0c116224
  .word 0x00000000
  .word 0xae6000e0
  .word 0x24020002
  .word 0xae620000
  .word 0x10000c2a
  .word 0x00000000
  .word 0x8e6200e4
  .word 0x10400005
  .word 0x00000000
  .word 0xae6000e4
  .word 0x2404ffff
  .word 0x0c077728
  .word 0x00000000
  .word 0x3c0242b4
  .word 0x44826000
  .word 0x3c024348
  .word 0x44826800
  .word 0x3c040087
  .word 0x248417a0
  .word 0x0c071bd4
  .word 0x00000000
  .word 0x0040802d
  .word 0x1200005c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c10d4fc
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x24030001
  .word 0x14430054
  .word 0x00000000
  .word 0x8e620024
  .word 0x14400002
  .word 0x00000000
  .word 0xae6300e0
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x1040004b
  .word 0x00000000
  .word 0x2404000a
  .word 0x8e0501b4
  .word 0x24060009
  .word 0x0c0d6ed0
  .word 0x00000000
  .word 0xae620060
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x24050001
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x24040001
  .word 0x0c076318
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x24050001
  .word 0x0c076800
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x24050001
  .word 0x0c074dfc
  .word 0x00000000
  .word 0x24040001
  .word 0x0c114cb4
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c10d438
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x0000282d
  .word 0x0c10a7a0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440028
  .word 0x0000282d
  .word 0x0c063030
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44002c
  .word 0x0000282d
  .word 0x0c063acc
  .word 0x00000000
  .word 0x0c116224
  .word 0x00000000
  .word 0xae6000e0
  .word 0x24020002
  .word 0xae620000
  .word 0x10000bbd
  .word 0x00000000
  .word 0x24020001
  .word 0x16e20bba
  .word 0x00000000
  .word 0x0c068070
  .word 0x00000000
  .word 0x10400bb6
  .word 0x00000000
  .word 0x8f85a850
  .word 0x8ca40000
  .word 0x24020020
  .word 0x14820005
  .word 0x00000000
  .word 0x8ca30004
  .word 0x24020002
  .word 0x10620bad
  .word 0x00000000
  .word 0x24020023
  .word 0x14820005
  .word 0x00000000
  .word 0x8ca30004
  .word 0x24020001
  .word 0x10620ba6
  .word 0x00000000
  .word 0x24020025
  .word 0x14820005
  .word 0x00000000
  .word 0x8ca30004
  .word 0x24020001
  .word 0x10620b9f
  .word 0x00000000
  .word 0x24020021
  .word 0x10820b9c
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x24050001
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x24030001
  .word 0x14430009
  .word 0x00000000
  .word 0x3c024000
  .word 0x44826000
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0xae6000e8
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0000282d
  .word 0x24060004
  .word 0x0000382d
  .word 0x24080020
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4217e8
  .word 0x8c440004
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x304300ff
  .word 0xae6300ec
  .word 0x00031040
  .word 0x00431021
  .word 0x000218c0
  .word 0x8f82b5a4
  .word 0x00431021
  .word 0xae620100
  .word 0x84420000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800320
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0000282d
  .word 0x0c0c61dc
  .word 0x00000000
  .word 0x8e6200ec
  .word 0x2c410008
  .word 0x1020003e
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636bb0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24040001
  .word 0x24050008
  .word 0x0080302d
  .word 0x24070044
  .word 0x0c042938
  .word 0x00000000
  .word 0x1000002f
  .word 0x00000000
  .word 0x24040001
  .word 0x24050008
  .word 0x0080302d
  .word 0x24070045
  .word 0x0c042938
  .word 0x00000000
  .word 0x10000027
  .word 0x00000000
  .word 0x24040001
  .word 0x24050008
  .word 0x0080302d
  .word 0x24070046
  .word 0x0c042938
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x24040001
  .word 0x24050008
  .word 0x0080302d
  .word 0x24070047
  .word 0x0c042938
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x24040001
  .word 0x24050008
  .word 0x0080302d
  .word 0x24070048
  .word 0x0c042938
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x24040001
  .word 0x24050008
  .word 0x0080302d
  .word 0x24070049
  .word 0x0c042938
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x24040001
  .word 0x24050008
  .word 0x24060004
  .word 0x2407000a
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e620100
  .word 0x84430004
  .word 0x84420000
  .word 0x00621823
  .word 0xae630104
  .word 0x1060000c
  .word 0x00000000
  .word 0x8e620100
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0xc4400008
  .word 0x46010003
  .word 0x00000000
  .word 0x00000000
  .word 0xe660010c
  .word 0x10000002
  .word 0x00000000
  .word 0xae60010c
  .word 0x8e620100
  .word 0x84430002
  .word 0x84420006
  .word 0x00621823
  .word 0xae630108
  .word 0x1060000c
  .word 0x00000000
  .word 0x8e620100
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0xc4400008
  .word 0x46010003
  .word 0x00000000
  .word 0x00000000
  .word 0xe6600110
  .word 0x10000002
  .word 0x00000000
  .word 0xae600110
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe6620114
  .word 0xe6610118
  .word 0xe660011c
  .word 0x24040001
  .word 0x0c076318
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c075700
  .word 0x00000000
  .word 0xae6200f4
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440004
  .word 0x24050001
  .word 0x0c075704
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x24050001
  .word 0x0c10a7a4
  .word 0x00000000
  .word 0x24020008
  .word 0xae620000
  .word 0x10000adc
  .word 0x00000000
  .word 0x8e640060
  .word 0x0c065518
  .word 0x00000000
  .word 0x24030001
  .word 0x10430ad6
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x0000282d
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c076318
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x0000282d
  .word 0x0c076800
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x0000282d
  .word 0x0c074dfc
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c114cb4
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c10d438
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x24050001
  .word 0x0c10a7a0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440028
  .word 0x24050001
  .word 0x0c063030
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44002c
  .word 0x24050001
  .word 0x0c063acc
  .word 0x00000000
  .word 0x0c11624c
  .word 0x00000000
  .word 0xae600060
  .word 0x24020001
  .word 0xae620000
  .word 0x10000a92
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x0040902d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441148
  .word 0x9662000c
  .word 0x304303ff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021080
  .word 0x00448821
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441148
  .word 0x9662000c
  .word 0x304303ff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021080
  .word 0x00448021
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441148
  .word 0x9662000c
  .word 0x304303ff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021080
  .word 0x00441021
  .word 0x8e440000
  .word 0x96250012
  .word 0x96060014
  .word 0x94470016
  .word 0x0c06eaa8
  .word 0x00000000
  .word 0x24020020
  .word 0xae620000
  .word 0x10000a64
  .word 0x00000000
  .word 0x8e620024
  .word 0x8c440050
  .word 0x0000282d
  .word 0x0c0c6264
  .word 0x00000000
  .word 0x3c024150
  .word 0x44820800
  .word 0x00000000
  .word 0x46010034
  .word 0x45010a59
  .word 0x00000000
  .word 0x0c114d20
  .word 0x00000000
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217f0
  .word 0x00431021
  .word 0x8c440000
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20330
  .word 0xe7a10334
  .word 0xe7a00338
  .word 0xc7a10334
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00334
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4411f4
  .word 0x27a50330
  .word 0x0c06a46c
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4411f4
  .word 0x0200282d
  .word 0x24060003
  .word 0x0c06a4e4
  .word 0x00000000
  .word 0x24040003
  .word 0x240500ff
  .word 0x0080302d
  .word 0x0000382d
  .word 0x0c040f0c
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050007
  .word 0x24060003
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x0c114d20
  .word 0x00000000
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217f0
  .word 0x00431021
  .word 0x8c440000
  .word 0x0000282d
  .word 0x24060002
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x24040001
  .word 0x0c11690c
  .word 0x00000000
  .word 0x0c0f23dc
  .word 0x00000000
  .word 0x0c0f23c8
  .word 0x00000000
  .word 0x24020005
  .word 0xae620000
  .word 0x10000a0a
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4411f4
  .word 0x2405ffff
  .word 0x0c06a4f4
  .word 0x00000000
  .word 0x28420005
  .word 0x14400a01
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0bfc98
  .word 0x00000000
  .word 0x24020009
  .word 0xae620000
  .word 0x100009fa
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x24050001
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x24050001
  .word 0x0c074dfc
  .word 0x00000000
  .word 0x24040001
  .word 0x0c114cb4
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c10d438
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x24050001
  .word 0x0c076800
  .word 0x00000000
  .word 0x44806000
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x8e620024
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20320
  .word 0xe7a10324
  .word 0xe7a00328
  .word 0xc7a10324
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00324
  .word 0x0c05f600
  .word 0x00000000
  .word 0x24030001
  .word 0x1443003d
  .word 0x00000000
  .word 0x3c020068
  .word 0xdc433740
  .word 0x3c020068
  .word 0xc4403748
  .word 0xffa30310
  .word 0xe7a00318
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441214
  .word 0x27a50320
  .word 0x0c06a46c
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x27a60220
  .word 0x24050008
  .word 0x8c440000
  .word 0x8c430004
  .word 0x24420008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0xafa00258
  .word 0xafa00254
  .word 0xafa00250
  .word 0x3c024334
  .word 0x44826000
  .word 0x27a40220
  .word 0x27a50310
  .word 0x24060002
  .word 0x0c130c6c
  .word 0x00000000
  .word 0xc7a20320
  .word 0xc7a10324
  .word 0xc7a00328
  .word 0xe7a20250
  .word 0xe7a10254
  .word 0xe7a00258
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441214
  .word 0x0200282d
  .word 0x27a60220
  .word 0x0c06a4cc
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441214
  .word 0x0200282d
  .word 0x24060003
  .word 0x0c06a4e4
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4411f4
  .word 0x27a50320
  .word 0x0c06a46c
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4411f4
  .word 0x0200282d
  .word 0x24060003
  .word 0x0c06a4e4
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050007
  .word 0x24060003
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e620024
  .word 0x8c440050
  .word 0x0000282d
  .word 0x24060002
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x24040001
  .word 0x0c11690c
  .word 0x00000000
  .word 0x0c0f23dc
  .word 0x00000000
  .word 0x0c0f23c8
  .word 0x00000000
  .word 0x24020007
  .word 0xae620000
  .word 0x10000963
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000c
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441214
  .word 0x2405ffff
  .word 0x0c06a4f4
  .word 0x00000000
  .word 0x28410004
  .word 0x1020000c
  .word 0x00000000
  .word 0x10000953
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4411f4
  .word 0x2405ffff
  .word 0x0c06a4f4
  .word 0x00000000
  .word 0x28420005
  .word 0x1440094a
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0bfc98
  .word 0x00000000
  .word 0x24020009
  .word 0xae620000
  .word 0x1000093c
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0000282d
  .word 0x0c0c6264
  .word 0x00000000
  .word 0x3c024f00
  .word 0x44820800
  .word 0x00000000
  .word 0x46000836
  .word 0x45010005
  .word 0x00000000
  .word 0x46000024
  .word 0x44110000
  .word 0x10000006
  .word 0x00000000
  .word 0x46010001
  .word 0x46000024
  .word 0x44110000
  .word 0x3c028000
  .word 0x02228825
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040802d
  .word 0xc4420020
  .word 0xc4410024
  .word 0xc4400028
  .word 0xe7a20300
  .word 0xe7a10304
  .word 0xe7a00308
  .word 0x24140004
  .word 0x8e620100
  .word 0x84420004
  .word 0x0222082b
  .word 0x1020001e
  .word 0x00000000
  .word 0xc7a00300
  .word 0x46000007
  .word 0xe7a002f0
  .word 0xc7a00304
  .word 0x46000007
  .word 0xe7a002f4
  .word 0xc7a00308
  .word 0x46000007
  .word 0xe7a002f8
  .word 0x27a402f0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a002f0
  .word 0xc661010c
  .word 0x46010002
  .word 0xe7a002f0
  .word 0xc7a002f4
  .word 0x46010002
  .word 0xe7a002f4
  .word 0xc7a002f8
  .word 0x46010002
  .word 0xe7a002f8
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x27a502f0
  .word 0x24060002
  .word 0x0c0c628c
  .word 0x00000000
  .word 0x8e620100
  .word 0x84420006
  .word 0x0051082b
  .word 0x10200015
  .word 0x00000000
  .word 0x27a40300
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00300
  .word 0xc6610110
  .word 0x46010002
  .word 0xe7a00300
  .word 0xc7a00304
  .word 0x46010002
  .word 0xe7a00304
  .word 0xc7a00308
  .word 0x46010002
  .word 0xe7a00308
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x27a50300
  .word 0x24060002
  .word 0x0c0c628c
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x24030001
  .word 0x14430037
  .word 0x00000000
  .word 0x8e6200e8
  .word 0x14400034
  .word 0x00000000
  .word 0x06200006
  .word 0x00000000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00111842
  .word 0x32220001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010020
  .word 0x00000000
  .word 0x24040001
  .word 0x24050009
  .word 0x24060002
  .word 0x2407000c
  .word 0x0c042938
  .word 0x00000000
  .word 0x24020001
  .word 0xae6200e8
  .word 0x3c020087
  .word 0x8c4217f0
  .word 0x8c4403b8
  .word 0x2405012c
  .word 0x27a601e0
  .word 0x0c0c6344
  .word 0x00000000
  .word 0x1040000f
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441210
  .word 0x27a50210
  .word 0x0c06a46c
  .word 0x00000000
  .word 0x0040902d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441210
  .word 0x0240282d
  .word 0x27a601e0
  .word 0x0c06a4cc
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x24030001
  .word 0x14430086
  .word 0x00000000
  .word 0x8e620100
  .word 0x8c42000c
  .word 0x24420005
  .word 0x16220081
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x27a601a0
  .word 0x24050008
  .word 0x8c440000
  .word 0x8c430004
  .word 0x24420008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0xc7a201d0
  .word 0xc7a101d4
  .word 0xc7a001d8
  .word 0xe7a20260
  .word 0xe7a10264
  .word 0xe7a00268
  .word 0xdfa20260
  .word 0xc7a00268
  .word 0xffa202e0
  .word 0xe7a002e8
  .word 0x27a402d0
  .word 0xc7a201c0
  .word 0xc7a101c4
  .word 0xc7a001c8
  .word 0xe7a202d0
  .word 0xe7a102d4
  .word 0xe7a002d8
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x8e620100
  .word 0xc4410014
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46000841
  .word 0xc7a002d0
  .word 0x460100c2
  .word 0xe7a302d0
  .word 0xc7a002d4
  .word 0x46010082
  .word 0xe7a202d4
  .word 0xc7a002d8
  .word 0x46010042
  .word 0xe7a102d8
  .word 0xc7a002e0
  .word 0x46030000
  .word 0xe7a002e0
  .word 0xc7a002e4
  .word 0x46020000
  .word 0xe7a002e4
  .word 0xc7a002e8
  .word 0x46010000
  .word 0xe7a002e8
  .word 0x27a40180
  .word 0xdfa20260
  .word 0xc7a00268
  .word 0xffa20180
  .word 0xe7a00188
  .word 0xc7a202e0
  .word 0xc7a102e4
  .word 0xc7a002e8
  .word 0xe7a2018c
  .word 0xe7a10190
  .word 0xe7a00194
  .word 0xc7a00184
  .word 0x3c024396
  .word 0x44820800
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00184
  .word 0xc7a00190
  .word 0x46010000
  .word 0xe7a00190
  .word 0x27a502c0
  .word 0x0c06b30c
  .word 0x00000000
  .word 0x1440002d
  .word 0x00000000
  .word 0xc7a202e0
  .word 0xc7a102e4
  .word 0xc7a002e8
  .word 0xe7a2018c
  .word 0xe7a10190
  .word 0xe7a00194
  .word 0x27a40180
  .word 0xc7a2018c
  .word 0xc7a10190
  .word 0xc7a00194
  .word 0xe7a20180
  .word 0xe7a10184
  .word 0xe7a00188
  .word 0xc7a00184
  .word 0x3c02447a
  .word 0x44820800
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00184
  .word 0xc7a00190
  .word 0x46010001
  .word 0xe7a00190
  .word 0x27a502c0
  .word 0x0c06b30c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430003
  .word 0x00000000
  .word 0xc7a002c4
  .word 0xe7a002e4
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441218
  .word 0x27a502e0
  .word 0x0c06a46c
  .word 0x00000000
  .word 0x0040902d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441218
  .word 0x0240282d
  .word 0x24060003
  .word 0x0c06a4e4
  .word 0x00000000
  .word 0x8e620100
  .word 0x8c43000c
  .word 0x0223102b
  .word 0x144000d7
  .word 0x00000000
  .word 0x24620005
  .word 0x0222082b
  .word 0x102000d3
  .word 0x00000000
  .word 0x0c10d4b8
  .word 0x00000000
  .word 0x144000cf
  .word 0x00000000
  .word 0x8e620100
  .word 0x3c040087
  .word 0x248417a0
  .word 0xc44c0014
  .word 0xc44d0010
  .word 0x0c071a88
  .word 0x00000000
  .word 0x0040902d
  .word 0x12400008
  .word 0x00000000
  .word 0x8e440048
  .word 0x0c0bfde4
  .word 0x00000000
  .word 0x24030001
  .word 0x14430002
  .word 0x00000000
  .word 0x0000902d
  .word 0xae720024
  .word 0x124000bb
  .word 0x00000000
  .word 0x8f82b520
  .word 0x1440005f
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x24050001
  .word 0x0c074dfc
  .word 0x00000000
  .word 0x24040001
  .word 0x0c114cb4
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c10d438
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x24050001
  .word 0x0c076800
  .word 0x00000000
  .word 0x26640028
  .word 0x8e650024
  .word 0x0c071e0c
  .word 0x00000000
  .word 0x8e640024
  .word 0x0c10d4fc
  .word 0x00000000
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x24020003
  .word 0x10620004
  .word 0x00000000
  .word 0x24020005
  .word 0x14620004
  .word 0x00000000
  .word 0x96620028
  .word 0x34420002
  .word 0xa6620028
  .word 0x8e640024
  .word 0x0c076360
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x96620028
  .word 0x34420004
  .word 0xa6620028
  .word 0x8e640024
  .word 0x0c071978
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x96620028
  .word 0x34420008
  .word 0xa6620028
  .word 0x8e620024
  .word 0x8c44004c
  .word 0x94830012
  .word 0x14600004
  .word 0x00000000
  .word 0x94820014
  .word 0x10400006
  .word 0x00000000
  .word 0xa6630040
  .word 0x94820014
  .word 0xa6620042
  .word 0x10000007
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c420000
  .word 0x244200c8
  .word 0xa6620040
  .word 0x24020001
  .word 0xa6620042
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440004
  .word 0x8e6500f4
  .word 0x0c075704
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x24020006
  .word 0xae620000
  .word 0x1000079a
  .word 0x00000000
  .word 0x8e440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a202b0
  .word 0xe7a102b4
  .word 0xe7a002b8
  .word 0xc7a102b4
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a002b4
  .word 0x24040001
  .word 0x24050008
  .word 0x24060002
  .word 0x00a0382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441204
  .word 0x27a502b0
  .word 0x0c06a46c
  .word 0x00000000
  .word 0x8e640024
  .word 0x0c074044
  .word 0x00000000
  .word 0x8e6300ec
  .word 0x24020006
  .word 0x14620002
  .word 0x00000000
  .word 0x0000a02d
  .word 0x0c05f600
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x24040001
  .word 0x0c077780
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x3287ffff
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0000282d
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x0000282d
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c076318
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440004
  .word 0x8e6500f4
  .word 0x0c075704
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x0000282d
  .word 0x0c10a7a4
  .word 0x00000000
  .word 0x24020001
  .word 0xae620000
  .word 0x10000741
  .word 0x00000000
  .word 0x0c114d18
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x28410000
  .word 0x14200066
  .word 0x00000000
  .word 0x0c114d18
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021980
  .word 0x3c020087
  .word 0x2442eda0
  .word 0x00431021
  .word 0xae620024
  .word 0x8c440048
  .word 0x0c0bfde4
  .word 0x00000000
  .word 0x24030001
  .word 0x10430729
  .word 0x00000000
  .word 0x26640028
  .word 0x8e650024
  .word 0x0c071e0c
  .word 0x00000000
  .word 0x96620028
  .word 0x34420001
  .word 0xa6620028
  .word 0x96620028
  .word 0x34420002
  .word 0xa6620028
  .word 0x8e620024
  .word 0x8c44004c
  .word 0x94830012
  .word 0x14600004
  .word 0x00000000
  .word 0x94820014
  .word 0x10400006
  .word 0x00000000
  .word 0xa6630040
  .word 0x94820014
  .word 0xa6620042
  .word 0x10000007
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c420000
  .word 0x244200c8
  .word 0xa6620040
  .word 0x24020001
  .word 0xa6620042
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x24050001
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x24050001
  .word 0x0c074dfc
  .word 0x00000000
  .word 0x24040001
  .word 0x0c114cb4
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c10d438
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x24050001
  .word 0x0c076800
  .word 0x00000000
  .word 0x8e620024
  .word 0x8c440050
  .word 0x0000282d
  .word 0x24060003
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440004
  .word 0x8e6500f4
  .word 0x0c075704
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x24020004
  .word 0xae620000
  .word 0x100006d5
  .word 0x00000000
  .word 0x8e620100
  .word 0x84420002
  .word 0x0222102b
  .word 0x144006d0
  .word 0x00000000
  .word 0x8e6300ec
  .word 0x24020006
  .word 0x14620002
  .word 0x00000000
  .word 0x0000a02d
  .word 0x0c05f600
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0xc6620114
  .word 0xc6610118
  .word 0xc660011c
  .word 0xe6020030
  .word 0xe6010034
  .word 0xe6000038
  .word 0x24040001
  .word 0x0c077780
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x3287ffff
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0000282d
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x0000282d
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c076318
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440004
  .word 0x8e6500f4
  .word 0x0c075704
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x0000282d
  .word 0x0c10a7a4
  .word 0x00000000
  .word 0x24020001
  .word 0xae620000
  .word 0x1000068f
  .word 0x00000000
  .word 0x0c0bfcc4
  .word 0x00000000
  .word 0x1040068b
  .word 0x00000000
  .word 0x0c07402c
  .word 0x00000000
  .word 0x10400687
  .word 0x00000000
  .word 0x0c070034
  .word 0x00000000
  .word 0x8e64005c
  .word 0x0000282d
  .word 0x0c0735e4
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42001c
  .word 0x10400009
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44001c
  .word 0x0c065408
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac40001c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400009
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x0c065408
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac400018
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400009
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440028
  .word 0x0c065408
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac400028
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42000c
  .word 0x10400009
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x0c065408
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac40000c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420004
  .word 0x1040001b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x27a40120
  .word 0x8c450004
  .word 0x0c075a38
  .word 0x00000000
  .word 0x27a60120
  .word 0x26650080
  .word 0x24040003
  .word 0x78c30000
  .word 0x78c20010
  .word 0x24c60020
  .word 0x2484ffff
  .word 0x7ca30000
  .word 0x7ca20010
  .word 0x24a50020
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c065408
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac400004
  .word 0x0c079d04
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44002c
  .word 0x0000282d
  .word 0x0c063acc
  .word 0x00000000
  .word 0x0c075060
  .word 0x00000000
  .word 0x0c1156d4
  .word 0x00000000
  .word 0x0c073a20
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0745e0
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0745fc
  .word 0x00000000
  .word 0x0c07633c
  .word 0x00000000
  .word 0x0c0701fc
  .word 0x00000000
  .word 0x0c068094
  .word 0x00000000
  .word 0x24030001
  .word 0x10430006
  .word 0x00000000
  .word 0x0c0680b0
  .word 0x00000000
  .word 0x24030001
  .word 0x14430012
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000000c
  .word 0x00000000
  .word 0x00111880
  .word 0x3c020087
  .word 0x2442bdc0
  .word 0x00438021
  .word 0x8e040000
  .word 0x10800004
  .word 0x00000000
  .word 0x0c06cf24
  .word 0x00000000
  .word 0xae000000
  .word 0x26310001
  .word 0x2e220009
  .word 0x1440fff3
  .word 0x00000000
  .word 0x0c0ed6ac
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0d4020
  .word 0x00000000
  .word 0x8e620000
  .word 0x24420001
  .word 0xae620000
  .word 0x100005ec
  .word 0x00000000
  .word 0x24820001
  .word 0xae620000
  .word 0x100005e8
  .word 0x00000000
  .word 0x8e62003c
  .word 0x94430008
  .word 0x240201d5
  .word 0x1062001e
  .word 0x00000000
  .word 0x240201d4
  .word 0x10620015
  .word 0x00000000
  .word 0x240201d3
  .word 0x1062000c
  .word 0x00000000
  .word 0x240201d2
  .word 0x10620003
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x24040df6
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x24040df7
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x24040df8
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x24040df9
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4210d4
  .word 0x1040002b
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000000d
  .word 0x00000000
  .word 0x00118080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0x8c4410d4
  .word 0x0c065408
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0xac4010d4
  .word 0x26310001
  .word 0x2a220004
  .word 0x1440fff2
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000013
  .word 0x00000000
  .word 0x00108880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c4210e4
  .word 0x1040000b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c4410e4
  .word 0x0c065408
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0xac4010e4
  .word 0x26100001
  .word 0x2a020018
  .word 0x1440ffec
  .word 0x00000000
  .word 0x26640028
  .word 0x0c09f474
  .word 0x00000000
  .word 0xae620064
  .word 0x2402000f
  .word 0xae620000
  .word 0x1000058b
  .word 0x00000000
  .word 0x8e640064
  .word 0x0c065518
  .word 0x00000000
  .word 0x24030001
  .word 0x10430585
  .word 0x00000000
  .word 0x0c06c234
  .word 0x00000000
  .word 0x10400581
  .word 0x00000000
  .word 0x0c06c26c
  .word 0x00000000
  .word 0x1040057d
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440000
  .word 0x0c06eac8
  .word 0x00000000
  .word 0x0002843c
  .word 0x0010843f
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440000
  .word 0x0c06eacc
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0200202d
  .word 0x0c06c21c
  .word 0x00000000
  .word 0x0c116bd0
  .word 0x00000000
  .word 0x1440001c
  .word 0x00000000
  .word 0x0c06c248
  .word 0x00000000
  .word 0x0c06c27c
  .word 0x00000000
  .word 0x24040003
  .word 0x0000282d
  .word 0x0c0427d8
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050087
  .word 0x24060003
  .word 0x0c0e54b4
  .word 0x00000000
  .word 0xaf80b58c
  .word 0x8e640060
  .word 0x10800003
  .word 0x00000000
  .word 0x0c065408
  .word 0x00000000
  .word 0x2404141d
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x2402001e
  .word 0xae620000
  .word 0x1000054d
  .word 0x00000000
  .word 0x18400007
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c11690c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c116bdc
  .word 0x00000000
  .word 0x8e62003c
  .word 0x94430008
  .word 0x240201fa
  .word 0x10620005
  .word 0x00000000
  .word 0x8e640024
  .word 0x0c074044
  .word 0x00000000
  .word 0xae600024
  .word 0x3c020087
  .word 0x8c4417e8
  .word 0x0c0bfde4
  .word 0x00000000
  .word 0x24100001
  .word 0x14500016
  .word 0x00000000
  .word 0x0c116900
  .word 0x00000000
  .word 0x0c06c248
  .word 0x00000000
  .word 0x0c06c27c
  .word 0x00000000
  .word 0x8f86b534
  .word 0x2404000a
  .word 0x8f85b538
  .word 0x0200382d
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0xae620060
  .word 0x2404141d
  .word 0x0200282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x2402001f
  .word 0xae620000
  .word 0x10000520
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x001010c0
  .word 0x00501023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x8c440048
  .word 0x1080001a
  .word 0x00000000
  .word 0x0c0bfde4
  .word 0x00000000
  .word 0x24030001
  .word 0x14430015
  .word 0x00000000
  .word 0x24040c21
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24050001
  .word 0x1445000f
  .word 0x00000000
  .word 0x001010c0
  .word 0x00501023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x245101a8
  .word 0x844401a8
  .word 0x0c05b3d0
  .word 0x00000000
  .word 0x86240000
  .word 0x3c050008
  .word 0x0c05b674
  .word 0x00000000
  .word 0x26100001
  .word 0x2e020004
  .word 0x1440ffdb
  .word 0x00000000
  .word 0x0c0700fc
  .word 0x00000000
  .word 0x0c07446c
  .word 0x00000000
  .word 0xae600064
  .word 0x24020010
  .word 0xae620000
  .word 0x100004ef
  .word 0x00000000
  .word 0x0c06c234
  .word 0x00000000
  .word 0x104004eb
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440000
  .word 0x0c06eacc
  .word 0x00000000
  .word 0x3050ffff
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440000
  .word 0x0c06eac8
  .word 0x00000000
  .word 0x3051ffff
  .word 0x2402ffff
  .word 0x16220004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000001b
  .word 0x00000000
  .word 0x0c06c244
  .word 0x00000000
  .word 0x14400016
  .word 0x00000000
  .word 0x3207ffff
  .word 0x27a400a0
  .word 0x3c050068
  .word 0x24a536f0
  .word 0x0220302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a400a0
  .word 0x0c04022c
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000008
  .word 0x00000000
  .word 0x27a400a0
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0xae62006c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440000
  .word 0x0c06eac8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c079c80
  .word 0x00000000
  .word 0xae620070
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440038
  .word 0x3c038000
  .word 0x00831825
  .word 0xac430038
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440000
  .word 0x0c06eac8
  .word 0x00000000
  .word 0x3050ffff
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440000
  .word 0x0c06eacc
  .word 0x00000000
  .word 0x3045ffff
  .word 0x0200202d
  .word 0x0c0ed5d8
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440000
  .word 0x0c06ead0
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c0ed630
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440000
  .word 0x0c06ead4
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c0ed660
  .word 0x00000000
  .word 0x24020011
  .word 0xae620000
  .word 0x1000048a
  .word 0x00000000
  .word 0x8e64006c
  .word 0x0c071fc8
  .word 0x00000000
  .word 0x10400485
  .word 0x00000000
  .word 0xae60006c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440000
  .word 0x0c06eac8
  .word 0x00000000
  .word 0x8e640070
  .word 0x0040282d
  .word 0x0c079ca4
  .word 0x00000000
  .word 0x10400479
  .word 0x00000000
  .word 0xae600070
  .word 0x0c070110
  .word 0x00000000
  .word 0x10400474
  .word 0x00000000
  .word 0x0c0701d0
  .word 0x00000000
  .word 0x10400470
  .word 0x00000000
  .word 0x0c0744b4
  .word 0x00000000
  .word 0x1040046c
  .word 0x00000000
  .word 0x0c0ed684
  .word 0x00000000
  .word 0x10400468
  .word 0x00000000
  .word 0x0c077580
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c062ffc
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac500028
  .word 0x24020012
  .word 0xae620000
  .word 0x10000458
  .word 0x00000000
  .word 0x0c077580
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440028
  .word 0x0c063028
  .word 0x00000000
  .word 0x1040044c
  .word 0x00000000
  .word 0x2404ffff
  .word 0x0c114d1c
  .word 0x00000000
  .word 0x26640028
  .word 0x0c072048
  .word 0x00000000
  .word 0x24040001
  .word 0x0c074394
  .word 0x00000000
  .word 0x0c077580
  .word 0x00000000
  .word 0x24030001
  .word 0x14430003
  .word 0x00000000
  .word 0x0c077638
  .word 0x00000000
  .word 0x0c0744d8
  .word 0x00000000
  .word 0x24041411
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x24050002
  .word 0x0c074e34
  .word 0x00000000
  .word 0x24041411
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x8e620024
  .word 0x1040000e
  .word 0x00000000
  .word 0x8e64003c
  .word 0x0c0bfde4
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x0c074e70
  .word 0x00000000
  .word 0x8e640024
  .word 0x0c074044
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x0000282d
  .word 0x0c074dfc
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c114cb4
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c10d438
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x0000282d
  .word 0x0c076800
  .word 0x00000000
  .word 0x0c074984
  .word 0x00000000
  .word 0x0c074884
  .word 0x00000000
  .word 0x0c074a84
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44002c
  .word 0x24050001
  .word 0x0c063acc
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440000
  .word 0x0c0756a4
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac500004
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440004
  .word 0x26650080
  .word 0x0c075a78
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x3c030087
  .word 0x8c6317f4
  .word 0x8c440004
  .word 0x94650000
  .word 0x0c0757cc
  .word 0x00000000
  .word 0x0c068070
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000a
  .word 0x00000000
  .word 0xdf8595c0
  .word 0xffa502a8
  .word 0x0240202d
  .word 0x0c10a750
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac500018
  .word 0x0240202d
  .word 0x24050002
  .word 0x0000302d
  .word 0x00a0382d
  .word 0x240801ea
  .word 0x24090001
  .word 0x0c0429dc
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501054
  .word 0x24020013
  .word 0xae620000
  .word 0x100003c1
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400005
  .word 0x00000000
  .word 0x0c10ae8c
  .word 0x00000000
  .word 0x104003b8
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421054
  .word 0x1040000b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441054
  .word 0x0c0429c8
  .word 0x00000000
  .word 0x104003ac
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac401054
  .word 0x0c06e448
  .word 0x00000000
  .word 0x3c030087
  .word 0x8c6317f4
  .word 0x8c440004
  .word 0x94650000
  .word 0x0c0757cc
  .word 0x00000000
  .word 0x0c068070
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000c
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420014
  .word 0x14400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x24050001
  .word 0x0c10a7a0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x3c030087
  .word 0x8c6317f4
  .word 0x8c440000
  .word 0x8c6501e0
  .word 0x3c020087
  .word 0x8c4617f0
  .word 0x0c07848c
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac50000c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x3c030087
  .word 0x8c6317f4
  .word 0x8c440000
  .word 0x8c6501e0
  .word 0x0c0707cc
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac50001c
  .word 0x24040400
  .word 0x0c0ed744
  .word 0x00000000
  .word 0xae620014
  .word 0x0c06a614
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x2402001f
  .word 0x14620012
  .word 0x00000000
  .word 0x24040e39
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x0000202d
  .word 0x240502cf
  .word 0x24060003
  .word 0x0c0e54b4
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x0000202d
  .word 0x240502d0
  .word 0x24060003
  .word 0x0c0e54b4
  .word 0x00000000
  .word 0x0c070044
  .word 0x00000000
  .word 0x24040001
  .word 0x0c114cf8
  .word 0x00000000
  .word 0x0c042170
  .word 0x00000000
  .word 0x24020014
  .word 0xae620000
  .word 0x10000350
  .word 0x00000000
  .word 0x0c0421c4
  .word 0x00000000
  .word 0x1040034c
  .word 0x00000000
  .word 0x24020096
  .word 0xae6200f8
  .word 0x24020001
  .word 0xae620000
  .word 0x10000346
  .word 0x00000000
  .word 0x0c0f1ee4
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x24020007
  .word 0x10620004
  .word 0x00000000
  .word 0x24020004
  .word 0x1462000f
  .word 0x00000000
  .word 0x24020007
  .word 0x14620005
  .word 0x00000000
  .word 0x8e620020
  .word 0x2c420004
  .word 0x14400008
  .word 0x00000000
  .word 0x24020004
  .word 0x14620027
  .word 0x00000000
  .word 0x8e620020
  .word 0x2c410004
  .word 0x10200023
  .word 0x00000000
  .word 0x8e62001c
  .word 0x8c440128
  .word 0x908300ee
  .word 0x24020001
  .word 0x1462001d
  .word 0x00000000
  .word 0x8e700020
  .word 0x0000282d
  .word 0x0c0c6150
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x12020015
  .word 0x00000000
  .word 0x8e62001c
  .word 0x0010343c
  .word 0x0006343f
  .word 0x8c440128
  .word 0x0000282d
  .word 0x24070007
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e62001c
  .word 0x8c440128
  .word 0x0000282d
  .word 0x0c0c6150
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x3c040068
  .word 0x24843750
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400308
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x0c0f1de8
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x24020007
  .word 0x10620004
  .word 0x00000000
  .word 0x24020004
  .word 0x1462000f
  .word 0x00000000
  .word 0x24020007
  .word 0x14620005
  .word 0x00000000
  .word 0x8e620020
  .word 0x2c420004
  .word 0x14400008
  .word 0x00000000
  .word 0x24020004
  .word 0x14620018
  .word 0x00000000
  .word 0x8e620020
  .word 0x2c410004
  .word 0x10200014
  .word 0x00000000
  .word 0x8e700020
  .word 0x8e62001c
  .word 0x8c440128
  .word 0x0000282d
  .word 0x0c0c6150
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1202000a
  .word 0x00000000
  .word 0x8e62001c
  .word 0x0010343c
  .word 0x0006343f
  .word 0x8c440128
  .word 0x0000282d
  .word 0x24070010
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e62001c
  .word 0x8c440210
  .word 0x10800004
  .word 0x00000000
  .word 0x24050001
  .word 0x0c077578
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x0000282d
  .word 0x0c076800
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x0000282d
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x24050001
  .word 0x0c10a7a0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440028
  .word 0x24050001
  .word 0x0c063030
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44002c
  .word 0x24050001
  .word 0x0c063acc
  .word 0x00000000
  .word 0x2402000a
  .word 0xae6200fc
  .word 0x24020001
  .word 0xae620000
  .word 0x100002a1
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x24020007
  .word 0x10620004
  .word 0x00000000
  .word 0x24020004
  .word 0x1462000f
  .word 0x00000000
  .word 0x24020007
  .word 0x14620005
  .word 0x00000000
  .word 0x8e620020
  .word 0x2c420004
  .word 0x14400008
  .word 0x00000000
  .word 0x24020004
  .word 0x1462001c
  .word 0x00000000
  .word 0x8e620020
  .word 0x2c410004
  .word 0x10200018
  .word 0x00000000
  .word 0x8e62001c
  .word 0x8c440128
  .word 0x908300ee
  .word 0x24020001
  .word 0x14620012
  .word 0x00000000
  .word 0x8e700020
  .word 0x0000282d
  .word 0x0c0c6150
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1202000a
  .word 0x00000000
  .word 0x8e62001c
  .word 0x0010343c
  .word 0x0006343f
  .word 0x8c440128
  .word 0x0000282d
  .word 0x24070007
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e640060
  .word 0x0c065518
  .word 0x00000000
  .word 0x24030001
  .word 0x1043026e
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x24020007
  .word 0x10620004
  .word 0x00000000
  .word 0x24020004
  .word 0x1462000f
  .word 0x00000000
  .word 0x24020007
  .word 0x14620005
  .word 0x00000000
  .word 0x8e620020
  .word 0x2c420004
  .word 0x14400008
  .word 0x00000000
  .word 0x24020004
  .word 0x14620018
  .word 0x00000000
  .word 0x8e620020
  .word 0x2c410004
  .word 0x10200014
  .word 0x00000000
  .word 0x8e700020
  .word 0x8e62001c
  .word 0x8c440128
  .word 0x0000282d
  .word 0x0c0c6150
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1202000a
  .word 0x00000000
  .word 0x8e62001c
  .word 0x0010343c
  .word 0x0006343f
  .word 0x8c440128
  .word 0x0000282d
  .word 0x24070010
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e62001c
  .word 0x8c440210
  .word 0x10800004
  .word 0x00000000
  .word 0x24050001
  .word 0x0c077578
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x0000282d
  .word 0x0c076800
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x0000282d
  .word 0x0c0784c0
  .word 0x00000000
  .word 0xae600060
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x24050001
  .word 0x0c10a7a0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440028
  .word 0x24050001
  .word 0x0c063030
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44002c
  .word 0x24050001
  .word 0x0c063acc
  .word 0x00000000
  .word 0x2402000a
  .word 0xae6200fc
  .word 0x24020001
  .word 0xae620000
  .word 0x1000020a
  .word 0x00000000
  .word 0x0c0746a4
  .word 0x00000000
  .word 0x10400206
  .word 0x00000000
  .word 0x0c074738
  .word 0x00000000
  .word 0x10400202
  .word 0x00000000
  .word 0x0c07402c
  .word 0x00000000
  .word 0x104001fe
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44001c
  .word 0x24050020
  .word 0x24060002
  .word 0x0c0655b4
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440004
  .word 0x24050020
  .word 0x24060002
  .word 0x0c0655b4
  .word 0x00000000
  .word 0x0c1156d4
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0745e0
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0745fc
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4217e8
  .word 0x8c440004
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x304200ff
  .word 0xae6200ec
  .word 0x24040001
  .word 0x0080282d
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0xae6200f0
  .word 0x0240202d
  .word 0x0c0469dc
  .word 0x00000000
  .word 0xae620068
  .word 0x24020018
  .word 0xae620000
  .word 0x100001ce
  .word 0x00000000
  .word 0x8e640068
  .word 0x0c065518
  .word 0x00000000
  .word 0x24030001
  .word 0x104301c8
  .word 0x00000000
  .word 0x24041417
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000f
  .word 0x00000000
  .word 0x24041417
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x2404000a
  .word 0x8f85b538
  .word 0x24060003
  .word 0x0c0d6ed0
  .word 0x00000000
  .word 0xae620060
  .word 0x2402001c
  .word 0xae620000
  .word 0x100001b4
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4217e8
  .word 0x8c440004
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x305000ff
  .word 0x24040001
  .word 0x0080282d
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x8e6300ec
  .word 0x14700055
  .word 0x00000000
  .word 0x24040439
  .word 0x14440004
  .word 0x00000000
  .word 0x8e6300f0
  .word 0x1464004f
  .word 0x00000000
  .word 0x24040439
  .word 0x10440004
  .word 0x00000000
  .word 0x8e6300f0
  .word 0x10640049
  .word 0x00000000
  .word 0x24040452
  .word 0x14440004
  .word 0x00000000
  .word 0x8e6300f0
  .word 0x14640043
  .word 0x00000000
  .word 0x24040452
  .word 0x10440004
  .word 0x00000000
  .word 0x8e6300f0
  .word 0x1064003d
  .word 0x00000000
  .word 0x24040453
  .word 0x14440004
  .word 0x00000000
  .word 0x8e6300f0
  .word 0x14640037
  .word 0x00000000
  .word 0x24040453
  .word 0x10440004
  .word 0x00000000
  .word 0x8e6300f0
  .word 0x10640031
  .word 0x00000000
  .word 0x2404040e
  .word 0x14440004
  .word 0x00000000
  .word 0x8e6300f0
  .word 0x1464002b
  .word 0x00000000
  .word 0x2404040e
  .word 0x10440004
  .word 0x00000000
  .word 0x8e6300f0
  .word 0x10640025
  .word 0x00000000
  .word 0x24040466
  .word 0x14440004
  .word 0x00000000
  .word 0x8e6300f0
  .word 0x1464001f
  .word 0x00000000
  .word 0x24040466
  .word 0x10440004
  .word 0x00000000
  .word 0x8e6300f0
  .word 0x10640019
  .word 0x00000000
  .word 0x2404043d
  .word 0x14440004
  .word 0x00000000
  .word 0x8e6300f0
  .word 0x14640013
  .word 0x00000000
  .word 0x2404043d
  .word 0x10440004
  .word 0x00000000
  .word 0x8e6300f0
  .word 0x1064000d
  .word 0x00000000
  .word 0x24040464
  .word 0x14440004
  .word 0x00000000
  .word 0x8e6300f0
  .word 0x14640007
  .word 0x00000000
  .word 0x24030464
  .word 0x10430010
  .word 0x00000000
  .word 0x8e6200f0
  .word 0x1443000d
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c07361c
  .word 0x00000000
  .word 0x0c1310ec
  .word 0x00000000
  .word 0x24040001
  .word 0x0c073668
  .word 0x00000000
  .word 0x3c030087
  .word 0xac6217f0
  .word 0x10000013
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000007
  .word 0x00000000
  .word 0x3205ffff
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c65bc
  .word 0x00000000
  .word 0x26100001
  .word 0x2e020005
  .word 0x1440fff8
  .word 0x00000000
  .word 0x0c1310ec
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c7074
  .word 0x00000000
  .word 0x24020019
  .word 0xae620000
  .word 0x1000012b
  .word 0x00000000
  .word 0x24110001
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x10400124
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000c
  .word 0x00000000
  .word 0x3205ffff
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c65dc
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000005
  .word 0x00000000
  .word 0x26100001
  .word 0x2e020005
  .word 0x1440fff3
  .word 0x00000000
  .word 0x12200111
  .word 0x00000000
  .word 0x0c077580
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c062ffc
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac500028
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44002c
  .word 0x24050001
  .word 0x0c063acc
  .word 0x00000000
  .word 0x8f85a850
  .word 0x8ca40000
  .word 0x24020020
  .word 0x14820005
  .word 0x00000000
  .word 0x8ca30004
  .word 0x24020002
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020027
  .word 0x14820005
  .word 0x00000000
  .word 0x8ca30004
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x24020027
  .word 0x14820007
  .word 0x00000000
  .word 0x8ca30004
  .word 0x24020003
  .word 0x14620003
  .word 0x00000000
  .word 0x0c0c3110
  .word 0x00000000
  .word 0x2402001a
  .word 0xae620000
  .word 0x100000dd
  .word 0x00000000
  .word 0x0c077580
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440028
  .word 0x0c063028
  .word 0x00000000
  .word 0x104000d1
  .word 0x00000000
  .word 0x24040001
  .word 0x0c074394
  .word 0x00000000
  .word 0x0c074674
  .word 0x00000000
  .word 0x0c077580
  .word 0x00000000
  .word 0x24030001
  .word 0x14430003
  .word 0x00000000
  .word 0x0c077638
  .word 0x00000000
  .word 0x0c0744d8
  .word 0x00000000
  .word 0x0c074708
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440024
  .word 0x0000282d
  .word 0x0c074dfc
  .word 0x00000000
  .word 0x0c068070
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000a
  .word 0x00000000
  .word 0xdf8595c8
  .word 0xffa502a0
  .word 0x0240202d
  .word 0x0c10a750
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac500018
  .word 0x2402001b
  .word 0xae620000
  .word 0x100000a9
  .word 0x00000000
  .word 0x0c073a58
  .word 0x00000000
  .word 0x104000a5
  .word 0x00000000
  .word 0x0c07402c
  .word 0x00000000
  .word 0x104000a1
  .word 0x00000000
  .word 0x0c0746a4
  .word 0x00000000
  .word 0x1040009d
  .word 0x00000000
  .word 0x0c074738
  .word 0x00000000
  .word 0x10400099
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x10400005
  .word 0x00000000
  .word 0x0c10ae8c
  .word 0x00000000
  .word 0x10400090
  .word 0x00000000
  .word 0x24040400
  .word 0x0c0ed744
  .word 0x00000000
  .word 0xae620014
  .word 0x0c06e448
  .word 0x00000000
  .word 0x3c030087
  .word 0x8c6317f4
  .word 0x8c44001c
  .word 0x8c6501e0
  .word 0x0c070800
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44001c
  .word 0x24050020
  .word 0x24060002
  .word 0x0c0655c4
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x3c030087
  .word 0x8c6317f4
  .word 0x8c440004
  .word 0x94650000
  .word 0x0c0757cc
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440004
  .word 0x24050020
  .word 0x24060002
  .word 0x0c0655c4
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c074618
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420018
  .word 0x1040000c
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420014
  .word 0x14400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440018
  .word 0x24050001
  .word 0x0c10a7a0
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c11690c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c116bdc
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x3c030087
  .word 0x8c6317f4
  .word 0x8c440000
  .word 0x8c6501e0
  .word 0x3c020087
  .word 0x8c4617f0
  .word 0x0c07848c
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac50000c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440008
  .word 0x0000282d
  .word 0x0c073594
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c114cb4
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c10d438
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440020
  .word 0x0000282d
  .word 0x0c076800
  .word 0x00000000
  .word 0x24020001
  .word 0xae620000
  .word 0x10000030
  .word 0x00000000
  .word 0x8e640060
  .word 0x0c065518
  .word 0x00000000
  .word 0x1000002b
  .word 0x00000000
  .word 0x0c0421c4
  .word 0x00000000
  .word 0x10400027
  .word 0x00000000
  .word 0x0c116900
  .word 0x00000000
  .word 0x8f86b534
  .word 0x2404000a
  .word 0x8f85b538
  .word 0x24070001
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0xae620060
  .word 0x2402001f
  .word 0xae620000
  .word 0x1000001a
  .word 0x00000000
  .word 0x8f82b58c
  .word 0x2841005a
  .word 0x10200008
  .word 0x00000000
  .word 0x0c116900
  .word 0x00000000
  .word 0x8f82b58c
  .word 0x24420001
  .word 0xaf82b58c
  .word 0x1000000f
  .word 0x00000000
  .word 0x8f86b534
  .word 0x2404000a
  .word 0x8f85b538
  .word 0x24070001
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0xae620060
  .word 0x2402001f
  .word 0xae620000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000002b
  .word 0x00000000
  .word 0x8e6300e0
  .word 0x24020001
  .word 0x1462001f
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x27a50290
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20290
  .word 0xe7a10294
  .word 0xe7a00298
  .word 0xc7a10294
  .word 0x3c024348
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00294
  .word 0x3c020087
  .word 0x8c441914
  .word 0x10800011
  .word 0x00000000
  .word 0x0c07754c
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c441914
  .word 0x24050001
  .word 0x0c077578
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c441914
  .word 0x10800004
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c077578
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0090
  .word 0x7bb70080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0360
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_001cd570
void K_FldEvent_DestroyFldEventTask(KwlnTask* fldEventTask)
{
    RwFree(fldEventTask->workData);
}

// FUN_001cd5a0. Create 'field event' and 'draw command' tasks
KwlnTask* K_FldEvent_CreateTasks(KwlnTask* fldRootTask)
{
    KwlnTask* fldEventTask;
    FldEvent* fldEvent;

    fldEvent = (FldEvent*)RwCalloc(1, sizeof(FldEvent), rwMEMHINTDUR_GLOBAL);
    if (fldEvent == NULL)
    {
        return NULL;
    }

    fldEventTask = kwlnTaskCreateWithAutoPriority(fldRootTask, 10, "field event", K_FldEvent_UpdateFldEventTask, K_FldEvent_DestroyFldEventTask, fldEvent);
    
    fldEvent->drawCmdTask = K_FldEvent_CreateDrawCmdTask(fldEventTask);

    return fldEventTask;
}

// FUN_001cd650
void K_FldEvent_001cd650(KwlnTask* fldEventTask, u32 param_2)
{
    if (fldEventTask != NULL)
    {
        ((u32*)fldEventTask->workData)[1] = param_2;
    }
}

// FUN_001cd670
void K_FldEvent_001cd670(KwlnTask* fldEventTask, u32 param_2)
{
    if (fldEventTask != NULL)
    {
        ((u32*)fldEventTask->workData)[2] = param_2;
    }
}

// FUN_001cd690
void* K_FldEvent_UpdateDrawCmdTask(KwlnTask* drawCmdTask)
{
    FUN_003b2cb0(0.0f, 0x140, 0xe0, -1, 0, 0, *(u32*)drawCmdTask->workData, 0, 0);

    return KWLNTASK_CONTINUE;
}

// FUN_001cd6e0
void K_FldEvent_DestroyDrawCmdTask(KwlnTask* drawCmdTask)
{
    RwFree(drawCmdTask->workData);
}

// FUN_001cd710
KwlnTask* K_FldEvent_CreateDrawCmdTask(KwlnTask* fldEventTask)
{
    FldDrawCmd* drawCmd;

    drawCmd = (FldDrawCmd*)RwCalloc(1, sizeof(FldDrawCmd), rwMEMHINTDUR_GLOBAL);
    if (drawCmd == NULL)
    {
        return NULL;
    }

    return kwlnTaskCreateWithAutoPriority(fldEventTask, 4207, "draw command", K_FldEvent_UpdateDrawCmdTask, K_FldEvent_DestroyDrawCmdTask, drawCmd);
}


// FUN_001cd790
void func_001cd790(KwlnTask* task, u32 value)
{
    *(u32*)task->workData = value;
}

 
 





static void FldUnit_ClearPcMdlSlot(s32 index)
{
    if (gFldUnitsPcMdl[index].mdl != NULL)
    {
        mdlDestroy(gFldUnitsPcMdl[index].mdl);
        gFldUnitsPcMdl[index].mdl = NULL;
        gFldUnitsPcMdl[index].type = 0;
        gFldUnitsPcMdl[index].id = 0;
    }
}

// FUN_001CD7A0
void func_001cd7a0(void)
{
    memset(gFldUnitsPcMdl, 0, sizeof(gFldUnitsPcMdl));
    memset(gFldUnitsPc, 0, sizeof(gFldUnitsPc));
    memset(gFldUnitsEc, 0, sizeof(gFldUnitsEc));
    sFldUnitsEcCount = 0;
    memset(DAT_0086e580, 0, 0x118);
    memset(DAT_0086be80, 0, 0x2700);
    DAT_007ce288 = 0;
    DAT_007ce284 = 0;
    memset(DAT_0086bdc0, 0, 0x40);
    DAT_007ce280 = 0;
    memset(DAT_0086b180, 0, 0xc40);
}

/* Removing this loses FUN_001cd8e0 (MATCH nd0 -> MISMATCH nd82) - measured W161. */


static inline void* FldUnit_LoadPcModel(s32 slot, u16 type, u16 id)
{
    Model* model;

    model = NULL;
    if (gFldUnitsPcMdl[slot].type == type)
    {
        if (gFldUnitsPcMdl[slot].id == id)
        {
            model = gFldUnitsPcMdl[slot].mdl;
        }
    }
    if (model == NULL)
    {
        model = (Model*)func_00316e00(type, id, 0);
        if (type == 1)
        {
            func_0031c1d0(model);
        }
        if (gFldUnitsPcMdl[slot].mdl != NULL)
        {
            func_003174e0(gFldUnitsPcMdl[slot].mdl);
            gFldUnitsPcMdl[slot].mdl = NULL;
        }
        gFldUnitsPcMdl[slot].mdl = model;
        gFldUnitsPcMdl[slot].type = model->type;
        gFldUnitsPcMdl[slot].id = gFldUnitsPcMdl[slot].mdl->id;
    }
    else
    {
        func_00319190(model);
    }
    return model;
}

// Retail offsets 0x21c-0x464 expand the scenario dispatch; offsets 0x684-0xedc re-fetch each PC model cache field per case.
// The remaining register coloring/layout differences are intentionally NONMATCHING.
// Measured opt_loop_invariants on: nd2603 -> 2599, object 3784/3808; retained (under window).
// Measured opt_propagation off: nd2599 -> 2592, object 3800/3808; stacked opt_loop_invariants on + opt_propagation off: nd2599 -> 2592, object 3800/3808; retained (under window).
#pragma opt_propagation on
#pragma opt_loop_invariants off




/* Removing this worsens FUN_001ce960 (nd2894 -> nd3129) - measured W161. */








static u8* FldUnit_FindModelNode(u16 id)
{
    u8* node;

    node = (u8*)MT_Scene_GetResListHead(RESRC_TYPE_14);
    while (node != NULL && ((*(u16*)node & 0x3ff) != id))
    {
        node = *(u8**)(node + 0x1f0);
    }
    return node;
}

static void FldUnit_InitPcUnit(FldUnit* unit, u16 charId, u8* modelNode)
{
    unit->genusBase = (DatUnitGenusBase*)datUnitCreatePc(charId);
    unit->mdl = (Model*)func_001cd9a0(charId);
    unit->charId = charId;
    unit->unk_44 = 0;
    unit->unk_184 = datPersonaGetLevelByPcId(charId) & 0xff;
    unit->unk_168 = modelNode;
    if (charId == 1)
    {
        unit->unk_188 = datGetLevel(1) & 0xff;
        unit->unk_174 = (KwlnTask*)func_001dd460(0, 0, 0x106f);
    }
    else
    {
        unit->scrCdvd = (HCdvd*)func_00100d80(
            s__field_script_reserve_xxx_006837af + charId * 0x20 + 1, 0);
    }
}

// Measured opt_common_subs off: nd506 -> 418, object 812/816; retained (under window).
#pragma opt_common_subs reset


static inline RwV3d* FldUnit_NodePos(u8* node)
{
    return &((FldUnitNode*)node)->pos;
}

static inline f32 FldUnit_NodeDistance(const RwV3d* a, const RwV3d* b)
{
    RwV3d delta;

    delta.x = a->x - b->x;
    delta.y = a->y - b->y;
    delta.z = a->z - b->z;
    return RwV3dLength_y2(&delta);
}


/* Removing this worsens FUN_001d0880 (nd485 -> nd512) - measured W161. */


// Measured opt_loop_invariants on: nd491 -> 418, object 804/864; retained (under window).


/* Removing this worsens FUN_001d1360 (nd448 -> nd516) - measured W161. */













/* Removing this worsens FUN_001d2300 (nd502 -> nd511) - measured W161. */

static inline s32 FldUnit_GridCoord(f32 value)
{
    s32 cell;

    cell = (s32)((s32)(value + 400.0f) / 800);
    if (cell < 0)
    {
        return (cell + 3) >> 2;
    }
    return cell >> 2;
}

// Measured opt_dead_assignments off: nd1517 -> 1499, object 2116/2192; retained (under window).

// Measured opt_lifetimes on: nd425 -> 424, object 1024/1056; stacked opt_loop_invariants on + opt_lifetimes on: nd425 -> 424, object 1024/1056; retained (under window).
/* Removing this worsens FUN_001d32a0 (nd588 -> nd637) - measured W161. */
















// Address-expression probe floor: retained nd7 form; typed byte/base-local and postTask shapes measured worse (nd23, nd62-64, nd171). Residuals are offsets 164/168 (task load/branch register) and 196/200 (clear-address addu/reload versus retail base addu/addiu).
#pragma opt_propagation reset
#pragma opt_loop_invariants reset
