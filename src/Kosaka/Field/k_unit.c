#include "Kosaka/Field/k_unit.h"
#include "Kosaka/k_misc.h"
#include "Kosaka/Field/k_sceneDraw.h"
#include "Kosaka/Field/k_encount.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Graphics/Model/mdlManager.h"
#include "Scene/resrcManager.h"
#include "Scene/mt_scene.h"
#include "Battle/battle.h"
#include "Main/g_data.h"
#include "Main/Battle/Data/datUnit.h"
 
#include "h_cdvd.h"
 

extern void func_001956d0(void* resource, u32 flags, u32 value);
extern void* DAT_0096017c[];
extern void* DAT_00960184[];
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
extern u8* DAT_007ce294;
extern u8 DAT_0086be80[0x2700];
extern void* DAT_0086b180[0x310];
extern u8 DAT_0086e580[0x114];
extern u32 DAT_0086e690;
extern u32 DAT_0086e694;
extern u8 DAT_00871ec0[0x200];
extern char s__field_script_reserve_xxx_006837af[];
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
extern u8* func_001b9120(void);
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
extern u16 func_003b6030(u32 id, u32 mode, void* model);
extern u16 func_003b65d0(u16 id, void* table);
extern void* func_003b5d10(u16 resourceId);
extern void* func_00318b60(void* model);
/* Preserve the retail matrix-return ABI while targeting mdlGetMatrix. */
#pragma alias func_00318b60_u64 func_00318b60
extern u64 func_00318b60_u64(void* model);
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
extern f32 RwV3dLength(const RwV3d* value);
extern u32 func_00488f30(void);
extern void* func_00431670(u32 parent, s32 index, void* unit);
extern void* func_0044ad20(u32 parent, s32 index);
extern void func_00434f60();
extern void func_00452010(RwV3d* value);
extern f32 func_004c6ac0(const RwV3d* value);
extern void func_004cb420(u64 left, u64 right);
extern f32 func_0052e878(f32 value);
extern u32 func_00523ac8(char* buffer, const char* path, ...);
extern void func_0019d400(const char* file, s32 line, s32 value);
extern void func_00521250(void* dst, const void* src, u32 size);
extern u32 func_001008b0(const char* path);
extern void* func_00100d80(const char* path, u32 mode);
extern void func_00100ec0(void* object);
extern void func_001023a0(void* object);
extern u32 func_001016b0(void);
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
extern void* func_00316e00(u32 type, u32 id, u32 mode);
extern u32 func_001c65e0(FldUnit* unit);
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
extern void K_Abort(const char* message, const char* file, s32 line);
extern void K_Assert(const char* file, s32 line);

FldUnitMdl gFldUnitsPcMdl[FLDUNIT_PC_MAX]; // 00871ea0
FldUnit gFldUnitsPc[FLDUNIT_PC_MAX];       // 008717a0

FldUnit gFldUnitsEc[FLDUNIT_EC_MAX];  // 0086eda0. Enemies
static u32 sFldUnitsEcCount;          // 007ce28c

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


/* Removing this loses FUN_001cd8e0 (MATCH nd0 -> MISMATCH nd82) - measured W161. */

typedef struct FldUnitNode
{
    Resrc base;
    RwV3d pos;
} FldUnitNode;

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
    return RwV3dLength(&delta);
}
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

#pragma opt_loop_invariants off

// FUN_001cd870
void K_FldUnit_DestroyPcMdl(s32 unitId)
{
    if (gFldUnitsPcMdl[unitId].mdl != NULL)
    {
        mdlDestroy(gFldUnitsPcMdl[unitId].mdl);
        
        gFldUnitsPcMdl[unitId].mdl = NULL;
        gFldUnitsPcMdl[unitId].type = 0;
        gFldUnitsPcMdl[unitId].id = 0;
    }
}
#pragma opt_loop_invariants on

// FUN_001CD8E0
void func_001cd8e0(void)
{
    s32 i;

    for (i = 0; i < FLDUNIT_PC_MAX; i++)
    {
        gFldUnitsPc[i].unk_44 = 1;
        gFldUnitsPcMdl[i].mdl = NULL;
        gFldUnitsPcMdl[i].type = 0;
        gFldUnitsPcMdl[i].id = 0;
    }
}
#pragma opt_loop_invariants reset

// FUN_001cd940
FldUnit* K_FldUnit_FindFreePc()
{
    FldUnit* units;
    FldUnit* free;
    FldUnit* curr;
    s32 i;

    free = NULL;
    i = 0;
    units = gFldUnitsPc;
    for (; i < FLDUNIT_PC_MAX; i++)
    {
        curr = &units[i];
        if (curr->genusBase == NULL)
        {
            free = curr;
            break;
        }
    }

    return free;
}


// Retail offsets 0x21c-0x464 expand the scenario dispatch; offsets 0x684-0xedc re-fetch each PC model cache field per case.
// The remaining register coloring/layout differences are intentionally NONMATCHING.
// Measured opt_loop_invariants on: nd2603 -> 2599, object 3784/3808; retained (under window).
// Measured opt_propagation off: nd2599 -> 2592, object 3800/3808; stacked opt_loop_invariants on + opt_propagation off: nd2599 -> 2592, object 3800/3808; retained (under window).
#pragma opt_loop_invariants on
#pragma opt_propagation off
// FUN_001cd9a0
#pragma schedule on
asm void* func_001cd9a0(u32 charId)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x0000802d
  .word 0x0000902d
  .word 0x1000000c
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c05b758
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x16220004
  .word 0x00000000
  .word 0x26500001
  .word 0x10000005
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420003
  .word 0x1440fff3
  .word 0x00000000
  .word 0x2402000d
  .word 0x12220303
  .word 0x00000000
  .word 0x2402000a
  .word 0x122202b0
  .word 0x00000000
  .word 0x24040007
  .word 0x12240256
  .word 0x00000000
  .word 0x24050005
  .word 0x122501f1
  .word 0x00000000
  .word 0x24020002
  .word 0x122201a0
  .word 0x00000000
  .word 0x24030001
  .word 0x12230003
  .word 0x00000000
  .word 0x10000342
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000d
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x24020004
  .word 0x10620004
  .word 0x00000000
  .word 0x24020005
  .word 0x14620005
  .word 0x00000000
  .word 0x64040009
  .word 0x64051400
  .word 0x10000149
  .word 0x00000000
  .word 0x0c0680c4
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x64040009
  .word 0x64050104
  .word 0x10000140
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
  .word 0x1462000f
  .word 0x00000000
  .word 0x8c830004
  .word 0x24020001
  .word 0x1462000b
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304300ff
  .word 0x24020008
  .word 0x14620005
  .word 0x00000000
  .word 0x64040009
  .word 0x64050104
  .word 0x1000010f
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x24020021
  .word 0x14620005
  .word 0x00000000
  .word 0x64040009
  .word 0x64050106
  .word 0x10000106
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
  .word 0x14440009
  .word 0x00000000
  .word 0x8c640004
  .word 0x24030003
  .word 0x14830005
  .word 0x00000000
  .word 0x64040001
  .word 0x3225ffff
  .word 0x1000006f
  .word 0x00000000
  .word 0x24030007
  .word 0x1443000b
  .word 0x00000000
  .word 0x24040e00
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x64040009
  .word 0x64050105
  .word 0x10000062
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x24020006
  .word 0x1462000b
  .word 0x00000000
  .word 0x24040e60
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x64040009
  .word 0x64050104
  .word 0x10000053
  .word 0x00000000
  .word 0x8f83a850
  .word 0x8c640000
  .word 0x2402000e
  .word 0x14820009
  .word 0x00000000
  .word 0x8c630004
  .word 0x24020005
  .word 0x14620005
  .word 0x00000000
  .word 0x64040009
  .word 0x64050107
  .word 0x10000046
  .word 0x00000000
  .word 0x2402000e
  .word 0x1482001f
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304300ff
  .word 0x24020006
  .word 0x14620019
  .word 0x00000000
  .word 0x0c05f648
  .word 0x00000000
  .word 0x2403000b
  .word 0x14430006
  .word 0x00000000
  .word 0x0c05f690
  .word 0x00000000
  .word 0x24030012
  .word 0x1043000b
  .word 0x00000000
  .word 0x0c05f648
  .word 0x00000000
  .word 0x2403000b
  .word 0x1443000a
  .word 0x00000000
  .word 0x0c05f690
  .word 0x00000000
  .word 0x24030013
  .word 0x14430005
  .word 0x00000000
  .word 0x64040009
  .word 0x64050108
  .word 0x10000025
  .word 0x00000000
  .word 0x24040a89
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24050001
  .word 0x14450011
  .word 0x00000000
  .word 0x24040006
  .word 0x24060009
  .word 0x2407001e
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x64040009
  .word 0x64050103
  .word 0x10000013
  .word 0x00000000
  .word 0x64040009
  .word 0x64050102
  .word 0x1000000f
  .word 0x00000000
  .word 0x24040006
  .word 0x24060009
  .word 0x2407001e
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x64040009
  .word 0x64050101
  .word 0x10000003
  .word 0x00000000
  .word 0x64040009
  .word 0x64050100
  .word 0x0010a0c0
  .word 0x3c020087
  .word 0x24421ea0
  .word 0x00549821
  .word 0x3092ffff
  .word 0x96620000
  .word 0x1642000e
  .word 0x00000000
  .word 0x30a3ffff
  .word 0x3c020087
  .word 0x24421ea2
  .word 0x00541021
  .word 0x94420000
  .word 0x14620007
  .word 0x00000000
  .word 0x3c020087
  .word 0x24421ea4
  .word 0x00541021
  .word 0x8c510000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000882d
  .word 0x16200025
  .word 0x00000000
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0x0040882d
  .word 0x24020001
  .word 0x16420004
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0c7074
  .word 0x00000000
  .word 0x3c030087
  .word 0x24631ea4
  .word 0x00741021
  .word 0x8c440000
  .word 0x10800006
  .word 0x00000000
  .word 0x001010c0
  .word 0x00629021
  .word 0x0c0c5d38
  .word 0x00000000
  .word 0xae400000
  .word 0x001020c0
  .word 0x3c020087
  .word 0x24421ea4
  .word 0x00441821
  .word 0xac710000
  .word 0x962200d4
  .word 0xa6620000
  .word 0x8c620000
  .word 0x944300d6
  .word 0x3c020087
  .word 0x24421ea2
  .word 0x00441021
  .word 0xa4430000
  .word 0x100001ea
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0c6464
  .word 0x00000000
  .word 0x100001e5
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x24020006
  .word 0x10620003
  .word 0x00000000
  .word 0x14640005
  .word 0x00000000
  .word 0x64040009
  .word 0x64050200
  .word 0x10000003
  .word 0x00000000
  .word 0x64040001
  .word 0x3225ffff
  .word 0x0010a0c0
  .word 0x3c020087
  .word 0x24421ea0
  .word 0x00549821
  .word 0x3092ffff
  .word 0x96620000
  .word 0x1642000e
  .word 0x00000000
  .word 0x30a3ffff
  .word 0x3c020087
  .word 0x24421ea2
  .word 0x00541021
  .word 0x94420000
  .word 0x14620007
  .word 0x00000000
  .word 0x3c020087
  .word 0x24421ea4
  .word 0x00541021
  .word 0x8c510000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000882d
  .word 0x16200025
  .word 0x00000000
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0x0040882d
  .word 0x24020001
  .word 0x16420004
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0c7074
  .word 0x00000000
  .word 0x3c030087
  .word 0x24631ea4
  .word 0x00741021
  .word 0x8c440000
  .word 0x10800006
  .word 0x00000000
  .word 0x001010c0
  .word 0x00629021
  .word 0x0c0c5d38
  .word 0x00000000
  .word 0xae400000
  .word 0x001020c0
  .word 0x3c020087
  .word 0x24421ea4
  .word 0x00441821
  .word 0xac710000
  .word 0x962200d4
  .word 0xa6620000
  .word 0x8c620000
  .word 0x944300d6
  .word 0x3c020087
  .word 0x24421ea2
  .word 0x00441021
  .word 0xa4430000
  .word 0x1000019c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0c6464
  .word 0x00000000
  .word 0x10000197
  .word 0x00000000
  .word 0x8f84a850
  .word 0x8c830000
  .word 0x2402000e
  .word 0x14620008
  .word 0x00000000
  .word 0x8c820004
  .word 0x14450005
  .word 0x00000000
  .word 0x64040009
  .word 0x64050502
  .word 0x10000016
  .word 0x00000000
  .word 0x24040c2f
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24040001
  .word 0x14440005
  .word 0x00000000
  .word 0x64040009
  .word 0x64050500
  .word 0x1000000c
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x24020021
  .word 0x14620005
  .word 0x00000000
  .word 0x64040009
  .word 0x64050501
  .word 0x10000003
  .word 0x00000000
  .word 0x3084ffff
  .word 0x3225ffff
  .word 0x0010a0c0
  .word 0x3c020087
  .word 0x24421ea0
  .word 0x00549821
  .word 0x3092ffff
  .word 0x96620000
  .word 0x1642000e
  .word 0x00000000
  .word 0x30a3ffff
  .word 0x3c020087
  .word 0x24421ea2
  .word 0x00541021
  .word 0x94420000
  .word 0x14620007
  .word 0x00000000
  .word 0x3c020087
  .word 0x24421ea4
  .word 0x00541021
  .word 0x8c510000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000882d
  .word 0x16200025
  .word 0x00000000
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0x0040882d
  .word 0x24020001
  .word 0x16420004
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0c7074
  .word 0x00000000
  .word 0x3c030087
  .word 0x24631ea4
  .word 0x00741021
  .word 0x8c440000
  .word 0x10800006
  .word 0x00000000
  .word 0x001010c0
  .word 0x00629021
  .word 0x0c0c5d38
  .word 0x00000000
  .word 0xae400000
  .word 0x001020c0
  .word 0x3c020087
  .word 0x24421ea4
  .word 0x00441821
  .word 0xac710000
  .word 0x962200d4
  .word 0xa6620000
  .word 0x8c620000
  .word 0x944300d6
  .word 0x3c020087
  .word 0x24421ea2
  .word 0x00441021
  .word 0xa4430000
  .word 0x1000013a
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0c6464
  .word 0x00000000
  .word 0x10000135
  .word 0x00000000
  .word 0x8f83a850
  .word 0x8c640000
  .word 0x2402000e
  .word 0x14820009
  .word 0x00000000
  .word 0x8c630004
  .word 0x24020005
  .word 0x14620005
  .word 0x00000000
  .word 0x64040009
  .word 0x64050700
  .word 0x1000000a
  .word 0x00000000
  .word 0x24020021
  .word 0x14820005
  .word 0x00000000
  .word 0x64040009
  .word 0x64050701
  .word 0x10000003
  .word 0x00000000
  .word 0x64040001
  .word 0x3225ffff
  .word 0x0010a0c0
  .word 0x3c020087
  .word 0x24421ea0
  .word 0x00549821
  .word 0x3092ffff
  .word 0x96620000
  .word 0x1642000e
  .word 0x00000000
  .word 0x30a3ffff
  .word 0x3c020087
  .word 0x24421ea2
  .word 0x00541021
  .word 0x94420000
  .word 0x14620007
  .word 0x00000000
  .word 0x3c020087
  .word 0x24421ea4
  .word 0x00541021
  .word 0x8c510000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000882d
  .word 0x16200025
  .word 0x00000000
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0x0040882d
  .word 0x24020001
  .word 0x16420004
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0c7074
  .word 0x00000000
  .word 0x3c030087
  .word 0x24631ea4
  .word 0x00741021
  .word 0x8c440000
  .word 0x10800006
  .word 0x00000000
  .word 0x001010c0
  .word 0x00629021
  .word 0x0c0c5d38
  .word 0x00000000
  .word 0xae400000
  .word 0x001020c0
  .word 0x3c020087
  .word 0x24421ea4
  .word 0x00441821
  .word 0xac710000
  .word 0x962200d4
  .word 0xa6620000
  .word 0x8c620000
  .word 0x944300d6
  .word 0x3c020087
  .word 0x24421ea2
  .word 0x00441021
  .word 0xa4430000
  .word 0x100000e3
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0c6464
  .word 0x00000000
  .word 0x100000de
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
  .word 0x64040009
  .word 0x64050d00
  .word 0x10000003
  .word 0x00000000
  .word 0x64040001
  .word 0x3225ffff
  .word 0x0010a0c0
  .word 0x3c020087
  .word 0x24421ea0
  .word 0x00549821
  .word 0x3092ffff
  .word 0x96620000
  .word 0x1642000e
  .word 0x00000000
  .word 0x30a3ffff
  .word 0x3c020087
  .word 0x24421ea2
  .word 0x00541021
  .word 0x94420000
  .word 0x14620007
  .word 0x00000000
  .word 0x3c020087
  .word 0x24421ea4
  .word 0x00541021
  .word 0x8c510000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000882d
  .word 0x16200025
  .word 0x00000000
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0x0040882d
  .word 0x24020001
  .word 0x16420004
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0c7074
  .word 0x00000000
  .word 0x3c030087
  .word 0x24631ea4
  .word 0x00741021
  .word 0x8c440000
  .word 0x10800006
  .word 0x00000000
  .word 0x001010c0
  .word 0x00629021
  .word 0x0c0c5d38
  .word 0x00000000
  .word 0xae400000
  .word 0x001020c0
  .word 0x3c020087
  .word 0x24421ea4
  .word 0x00441821
  .word 0xac710000
  .word 0x962200d4
  .word 0xa6620000
  .word 0x8c620000
  .word 0x944300d6
  .word 0x3c020087
  .word 0x24421ea2
  .word 0x00441021
  .word 0xa4430000
  .word 0x10000093
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0c6464
  .word 0x00000000
  .word 0x1000008e
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
  .word 0x64040009
  .word 0x64050d00
  .word 0x10000003
  .word 0x00000000
  .word 0x64040001
  .word 0x3225ffff
  .word 0x0010a0c0
  .word 0x3c020087
  .word 0x24421ea0
  .word 0x00549821
  .word 0x3092ffff
  .word 0x96620000
  .word 0x1642000e
  .word 0x00000000
  .word 0x30a3ffff
  .word 0x3c020087
  .word 0x24421ea2
  .word 0x00541021
  .word 0x94420000
  .word 0x14620007
  .word 0x00000000
  .word 0x3c020087
  .word 0x24421ea4
  .word 0x00541021
  .word 0x8c510000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000882d
  .word 0x16200025
  .word 0x00000000
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0x0040882d
  .word 0x24020001
  .word 0x16420004
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0c7074
  .word 0x00000000
  .word 0x3c030087
  .word 0x24631ea4
  .word 0x00741021
  .word 0x8c440000
  .word 0x10800006
  .word 0x00000000
  .word 0x001010c0
  .word 0x00629021
  .word 0x0c0c5d38
  .word 0x00000000
  .word 0xae400000
  .word 0x001020c0
  .word 0x3c020087
  .word 0x24421ea4
  .word 0x00441821
  .word 0xac710000
  .word 0x962200d4
  .word 0xa6620000
  .word 0x8c620000
  .word 0x944300d6
  .word 0x3c020087
  .word 0x24421ea2
  .word 0x00441021
  .word 0xa4430000
  .word 0x10000043
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0c6464
  .word 0x00000000
  .word 0x1000003e
  .word 0x00000000
  .word 0x3225ffff
  .word 0x001098c0
  .word 0x3c020087
  .word 0x24421ea0
  .word 0x00539021
  .word 0x96420000
  .word 0x1443000e
  .word 0x00000000
  .word 0x30a3ffff
  .word 0x3c020087
  .word 0x24421ea2
  .word 0x00531021
  .word 0x94420000
  .word 0x14620007
  .word 0x00000000
  .word 0x3c020087
  .word 0x24421ea4
  .word 0x00531021
  .word 0x8c510000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000882d
  .word 0x16200023
  .word 0x00000000
  .word 0x24040001
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0x0040882d
  .word 0x0220202d
  .word 0x0c0c7074
  .word 0x00000000
  .word 0x3c030087
  .word 0x24631ea4
  .word 0x00731021
  .word 0x8c440000
  .word 0x10800006
  .word 0x00000000
  .word 0x001010c0
  .word 0x00629821
  .word 0x0c0c5d38
  .word 0x00000000
  .word 0xae600000
  .word 0x001020c0
  .word 0x3c020087
  .word 0x24421ea4
  .word 0x00441821
  .word 0xac710000
  .word 0x962200d4
  .word 0xa6420000
  .word 0x8c620000
  .word 0x944300d6
  .word 0x3c020087
  .word 0x24421ea2
  .word 0x00441021
  .word 0xa4430000
  .word 0x10000004
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0c6464
  .word 0x00000000
  .word 0x0220102d
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
#pragma schedule reset
#pragma opt_propagation on
#pragma opt_loop_invariants off



/* W410: the lone residual is offset 128, ours `addu $v1,$v1,$a0` against retail
 * `addu $v1,$a0,$v1` - the address of model->attachedWpns[j]. This IS a genuine
 * compiler floor, not an untested assumption. The decisive measurement: writing
 * the address base-first `*(Model**)((u8*)model + 0x3b8 + j*12)` and index-first
 * `*(Model**)(j*12 + (u8*)model + 0x3b8)` compile to IDENTICAL bytes (both nd14),
 * so source operand order does not propagate through MWCC's address folding.
 * Note the compiler is not canonicalizing globally - offset 120's `addu $v1,$a1,$s1`
 * matches retail exactly - it is specific to this fold.
 * Eight spellings measured: struct index nd1 (best, current), inlined unit->mdl
 * nd1, both explicit byte forms nd14, index-in-a-named-local nd14, model hoisted
 * out of the inner loop nd163 at 228 bytes. A local AttachedWpn* does not compile. */
/* W420: base-first inline helper fixes the sole operand swap at offset 128
 * (nd1 -> nd0, object 220/224). */
static inline u32 unitAddBaseFirst(u32 base, u32 offset) { return base + offset; }

// FUN_001CE880
void func_001ce880(void)
{
    s32 i;
    s32 j;
    s32 hasResources;
    FldUnit* unit;
    Model* model;
    Model* weapon;

    for (i = 0; i < FLDUNIT_PC_MAX; i++)
    {
        hasResources = false;
        unit = &gFldUnitsPc[i];
        if (unit->genusBase != NULL && unit->resrc != NULL)
        {
            hasResources = true;
        }
        hasResources = (hasResources != 0);
        if (hasResources)
        {
            for (j = 0; j < 5; j++)
            {
                model = unit->mdl;
                weapon = *(Model**)(unitAddBaseFirst((u32)model, j * 12) + 0x3b8);
                if (weapon != NULL)
                {
                    func_00319230(weapon,
                                  *(u16*)((u8*)unit + 0x19e + j * sizeof(u16)));
                }
            }
        }
    }
}

/* Removing this worsens FUN_001ce960 (nd2894 -> nd3129) - measured W161. */
#pragma opt_loop_invariants on
// Retail offsets 0x000-0x2f0 re-fetch gFldUnitsPc fields; 0x478-0x4b0 and 0x8d8-0x930 copy matrices inline; 0x52c-0x79c and 0x9d8-0xe44 expand formation/dungeon dispatches.
// FUN_001CE960
asm u32 func_001ce960(void)
{
  .set noreorder
  .word 0x27bdfbf0
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x3c020068
  .word 0xdc433910
  .word 0x3c020068
  .word 0xc4403918
  .word 0xffa30400
  .word 0xe7a00408
  .word 0x0000982d
  .word 0x10000066
  .word 0x00000000
  .word 0x001310c0
  .word 0x00531023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00438021
  .word 0x8e020048
  .word 0x1040005c
  .word 0x00000000
  .word 0x8e020054
  .word 0x14400059
  .word 0x00000000
  .word 0x8e040050
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100003c5
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000000b
  .word 0x00000000
  .word 0x3225ffff
  .word 0x8e040050
  .word 0x0c0c65dc
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100003b9
  .word 0x00000000
  .word 0x26310001
  .word 0x2a220005
  .word 0x1440fff4
  .word 0x00000000
  .word 0x8e0401b0
  .word 0x1080003e
  .word 0x00000000
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100003ab
  .word 0x00000000
  .word 0x001310c0
  .word 0x00531023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00439021
  .word 0x265101b0
  .word 0x265001b4
  .word 0x8e4201b0
  .word 0x8c450118
  .word 0x24040001
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0xae020000
  .word 0x8e220000
  .word 0x8c420118
  .word 0xae4201b8
  .word 0x8e220000
  .word 0x8c460118
  .word 0x8e040000
  .word 0x8c450110
  .word 0x0c148494
  .word 0x00000000
  .word 0x8e240000
  .word 0x0c0403b0
  .word 0x00000000
  .word 0xae200000
  .word 0x0000802d
  .word 0x10000013
  .word 0x00000000
  .word 0x8e430050
  .word 0x00102840
  .word 0x00b01021
  .word 0x00022080
  .word 0x00641021
  .word 0x8c4203b8
  .word 0x1040000a
  .word 0x00000000
  .word 0x94430418
  .word 0x02451021
  .word 0xa443019e
  .word 0x8e420050
  .word 0x00441021
  .word 0x8c4403b8
  .word 0x24050003
  .word 0x0c0c648c
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020005
  .word 0x1440ffec
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620004
  .word 0x1440ff99
  .word 0x00000000
  .word 0x0c130e30
  .word 0x00000000
  .word 0x0040982d
  .word 0x0000902d
  .word 0x10000346
  .word 0x00000000
  .word 0x3c020068
  .word 0xdc433920
  .word 0x3c020068
  .word 0xc4403928
  .word 0xffa303e0
  .word 0xe7a003e8
  .word 0x64050001
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00438821
  .word 0x26370048
  .word 0x8e220048
  .word 0x10400334
  .word 0x00000000
  .word 0x26300054
  .word 0x8e220054
  .word 0x14400330
  .word 0x00000000
  .word 0x8f84a850
  .word 0x8c830000
  .word 0x2402000e
  .word 0x14620006
  .word 0x00000000
  .word 0x8c830004
  .word 0x24020005
  .word 0x14620002
  .word 0x00000000
  .word 0x0000282d
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x24550050
  .word 0x3244ffff
  .word 0x8c460050
  .word 0x0c0ed80c
  .word 0x00000000
  .word 0x3044ffff
  .word 0x0c0ed744
  .word 0x00000000
  .word 0xae020000
  .word 0x16400009
  .word 0x00000000
  .word 0x8e030000
  .word 0x3c024270
  .word 0x44826000
  .word 0x8c6401e0
  .word 0x0c06b630
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x8e030000
  .word 0x3c02420c
  .word 0x44826000
  .word 0x8c6401e0
  .word 0x0c06b630
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x24540054
  .word 0x8f84b52c
  .word 0x0c0c5d14
  .word 0x00000000
  .word 0x8e830000
  .word 0xac6201e8
  .word 0x8e820000
  .word 0x8c4401e0
  .word 0x0c06b62c
  .word 0x00000000
  .word 0xe7a003d8
  .word 0xe7a003d4
  .word 0xe7a003d0
  .word 0x8e820000
  .word 0x8c4401e8
  .word 0x27a503d0
  .word 0x24060002
  .word 0x0c0c62a4
  .word 0x00000000
  .word 0x8ea40000
  .word 0x0c0c62dc
  .word 0x00000000
  .word 0x0040b02d
  .word 0x8e820000
  .word 0x8c4401e8
  .word 0x0c0c62dc
  .word 0x00000000
  .word 0x02c0202d
  .word 0x0040282d
  .word 0x0c132d08
  .word 0x00000000
  .word 0x8e820000
  .word 0x8c4401e8
  .word 0x0c0c5dcc
  .word 0x00000000
  .word 0x0c068094
  .word 0x00000000
  .word 0x24030001
  .word 0x14430124
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x9042003c
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
  .word 0x3c024448
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0xe7a003c0
  .word 0x3c024000
  .word 0xafa203c4
  .word 0x0c06e448
  .word 0x00000000
  .word 0x9042003d
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
  .word 0x3c024448
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0xe7a003c8
  .word 0x3c020087
  .word 0x8c4217f4
  .word 0x8c440128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x24050008
  .word 0x0260302d
  .word 0x8c440000
  .word 0x8c430004
  .word 0x24420008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x9042003d
  .word 0x00028a00
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00518821
  .word 0x0c06e448
  .word 0x00000000
  .word 0x9042003c
  .word 0x00021100
  .word 0x02221021
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
  .word 0x8e020000
  .word 0x8c4401e0
  .word 0x27a50400
  .word 0x0c06b7fc
  .word 0x00000000
  .word 0x0c070010
  .word 0x00000000
  .word 0x24030004
  .word 0x10430098
  .word 0x00000000
  .word 0x24020003
  .word 0x12420067
  .word 0x00000000
  .word 0x24020002
  .word 0x12420036
  .word 0x00000000
  .word 0x24020001
  .word 0x1242000c
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x10000239
  .word 0x00000000
  .word 0x8e020000
  .word 0x8c4401e0
  .word 0x27a503c0
  .word 0x0c06b708
  .word 0x00000000
  .word 0x10000232
  .word 0x00000000
  .word 0x27a403f0
  .word 0xc6620000
  .word 0xc6610004
  .word 0xc6600008
  .word 0xe7a203f0
  .word 0xe7a103f4
  .word 0xe7a003f8
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c0242f0
  .word 0x44821000
  .word 0xc7a003f0
  .word 0x46020042
  .word 0xe7a103f0
  .word 0xc7a003f4
  .word 0x46020002
  .word 0xe7a003f4
  .word 0xc7a003f8
  .word 0x46020002
  .word 0xe7a003f8
  .word 0xc6600030
  .word 0x46010000
  .word 0xe6600030
  .word 0xc6610034
  .word 0xc7a003f4
  .word 0x46000800
  .word 0xe6600034
  .word 0xc6610038
  .word 0xc7a003f8
  .word 0x46000800
  .word 0xe6600038
  .word 0x8e020000
  .word 0x8c4401e0
  .word 0x26650030
  .word 0x0c06b708
  .word 0x00000000
  .word 0x1000020b
  .word 0x00000000
  .word 0x27a403f0
  .word 0xc6620000
  .word 0xc6610004
  .word 0xc6600008
  .word 0xe7a203f0
  .word 0xe7a103f4
  .word 0xe7a003f8
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a003f0
  .word 0x46000047
  .word 0xe7a103f0
  .word 0xc7a003f4
  .word 0x46000107
  .word 0xe7a403f4
  .word 0xc7a003f8
  .word 0x460000c7
  .word 0xe7a303f8
  .word 0x3c0242f0
  .word 0x44821000
  .word 0x00000000
  .word 0x46020842
  .word 0xe7a103f0
  .word 0x46022002
  .word 0xe7a003f4
  .word 0x46021802
  .word 0xe7a003f8
  .word 0xc6600030
  .word 0x46010000
  .word 0xe6600030
  .word 0xc6610034
  .word 0xc7a003f4
  .word 0x46000800
  .word 0xe6600034
  .word 0xc6610038
  .word 0xc7a003f8
  .word 0x46000800
  .word 0xe6600038
  .word 0x8e020000
  .word 0x8c4401e0
  .word 0x26650030
  .word 0x0c06b708
  .word 0x00000000
  .word 0x100001dd
  .word 0x00000000
  .word 0x27a403f0
  .word 0xc6620020
  .word 0xc6610024
  .word 0xc6600028
  .word 0xe7a203f0
  .word 0xe7a103f4
  .word 0xe7a003f8
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a003f0
  .word 0x46000047
  .word 0xe7a103f0
  .word 0xc7a003f4
  .word 0x46000107
  .word 0xe7a403f4
  .word 0xc7a003f8
  .word 0x460000c7
  .word 0xe7a303f8
  .word 0x3c024316
  .word 0x44821000
  .word 0x00000000
  .word 0x46020842
  .word 0xe7a103f0
  .word 0x46022002
  .word 0xe7a003f4
  .word 0x46021802
  .word 0xe7a003f8
  .word 0xc6600030
  .word 0x46010000
  .word 0xe6600030
  .word 0xc6610034
  .word 0xc7a003f4
  .word 0x46000800
  .word 0xe6600034
  .word 0xc6610038
  .word 0xc7a003f8
  .word 0x46000800
  .word 0xe6600038
  .word 0x8e020000
  .word 0x8c4401e0
  .word 0x26650030
  .word 0x0c06b708
  .word 0x00000000
  .word 0x100001af
  .word 0x00000000
  .word 0x16400008
  .word 0x00000000
  .word 0x8e020000
  .word 0x8c4401e0
  .word 0x27a503c0
  .word 0x0c06b708
  .word 0x00000000
  .word 0x100001a6
  .word 0x00000000
  .word 0x0000a02d
  .word 0x0000882d
  .word 0x1000000a
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c05b758
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x18400002
  .word 0x00000000
  .word 0x26940001
  .word 0x26310001
  .word 0x2a220003
  .word 0x1440fff5
  .word 0x00000000
  .word 0x27a40090
  .word 0x0280282d
  .word 0x0c0742f0
  .word 0x00000000
  .word 0x8e040000
  .word 0x2643ffff
  .word 0x00031100
  .word 0x00431021
  .word 0x00021100
  .word 0x005d1021
  .word 0x8c8401e0
  .word 0x24450190
  .word 0x0c06b708
  .word 0x00000000
  .word 0x10000186
  .word 0x00000000
  .word 0x26340168
  .word 0x8e220168
  .word 0x14400020
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00438821
  .word 0x8e020000
  .word 0x8c4401e0
  .word 0x27a503e0
  .word 0x0c06b708
  .word 0x00000000
  .word 0x26340050
  .word 0x8e240050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c130bc4
  .word 0x00000000
  .word 0x962401a8
  .word 0x0c077780
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x8e840000
  .word 0x0000282d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x10000161
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4217f4
  .word 0x8c440128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x24050008
  .word 0x0260302d
  .word 0x8c440000
  .word 0x8c430004
  .word 0x24420008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x8ee40000
  .word 0x0c0bfde4
  .word 0x00000000
  .word 0x14400014
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x944401a8
  .word 0x0c077780
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x8ea40000
  .word 0x0000282d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x1000001c
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x24510050
  .word 0x8c440050
  .word 0x0000282d
  .word 0x24060015
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e240000
  .word 0x0000282d
  .word 0x24060015
  .word 0x0c0c6244
  .word 0x00000000
  .word 0x3c024120
  .word 0x44820800
  .word 0x00000000
  .word 0x46010301
  .word 0x8e240000
  .word 0x0000282d
  .word 0x0c0c61dc
  .word 0x00000000
  .word 0x24020003
  .word 0x124200e1
  .word 0x00000000
  .word 0x24020002
  .word 0x1242007b
  .word 0x00000000
  .word 0x24020001
  .word 0x1242001c
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x10000111
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x24510168
  .word 0x24540054
  .word 0x8c430054
  .word 0x8c420168
  .word 0x8c6401e0
  .word 0x27a50400
  .word 0xc44c010c
  .word 0x0c06b7fc
  .word 0x00000000
  .word 0x8e830000
  .word 0x8e220000
  .word 0x8c6401e0
  .word 0x24450100
  .word 0x0c06b708
  .word 0x00000000
  .word 0x100000fa
  .word 0x00000000
  .word 0x27a403f0
  .word 0xc6620000
  .word 0xc6610004
  .word 0xc6600008
  .word 0xe7a203f0
  .word 0xe7a103f4
  .word 0xe7a003f8
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c0242b4
  .word 0x44821000
  .word 0xc7a003f0
  .word 0x46020042
  .word 0xe7a103f0
  .word 0xc7a003f4
  .word 0x46020002
  .word 0xe7a003f4
  .word 0xc7a003f8
  .word 0x46020002
  .word 0xe7a003f8
  .word 0xc6600030
  .word 0x46010000
  .word 0xe6600030
  .word 0xc6610034
  .word 0xc7a003f4
  .word 0x46000800
  .word 0xe6600034
  .word 0xc6610038
  .word 0xc7a003f8
  .word 0x46000800
  .word 0xe6600038
  .word 0x27a403f0
  .word 0xc6620020
  .word 0xc6610024
  .word 0xc6600028
  .word 0xe7a203f0
  .word 0xe7a103f4
  .word 0xe7a003f8
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a003f0
  .word 0x46000047
  .word 0xe7a103f0
  .word 0xc7a003f4
  .word 0x46000107
  .word 0xe7a403f4
  .word 0xc7a003f8
  .word 0x460000c7
  .word 0xe7a303f8
  .word 0x3c02428c
  .word 0x44821000
  .word 0x00000000
  .word 0x46020842
  .word 0xe7a103f0
  .word 0x46022002
  .word 0xe7a003f4
  .word 0x46021802
  .word 0xe7a003f8
  .word 0xc6600030
  .word 0x46010000
  .word 0xe6600030
  .word 0xc6610034
  .word 0xc7a003f4
  .word 0x46000800
  .word 0xe6600034
  .word 0xc6610038
  .word 0xc7a003f8
  .word 0x46000800
  .word 0xe6600038
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x24510054
  .word 0x8c430054
  .word 0x8e820000
  .word 0x8c6401e0
  .word 0x27a50400
  .word 0xc44c010c
  .word 0x0c06b7fc
  .word 0x00000000
  .word 0x8e220000
  .word 0x8c4401e0
  .word 0x26650030
  .word 0x0c06b708
  .word 0x00000000
  .word 0x1000009e
  .word 0x00000000
  .word 0x27a403f0
  .word 0xc6620000
  .word 0xc6610004
  .word 0xc6600008
  .word 0xe7a203f0
  .word 0xe7a103f4
  .word 0xe7a003f8
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a003f0
  .word 0x46000047
  .word 0xe7a103f0
  .word 0xc7a003f4
  .word 0x46000107
  .word 0xe7a403f4
  .word 0xc7a003f8
  .word 0x460000c7
  .word 0xe7a303f8
  .word 0x3c0242b4
  .word 0x44821000
  .word 0x00000000
  .word 0x46020842
  .word 0xe7a103f0
  .word 0x46022002
  .word 0xe7a003f4
  .word 0x46021802
  .word 0xe7a003f8
  .word 0xc6600030
  .word 0x46010000
  .word 0xe6600030
  .word 0xc6610034
  .word 0xc7a003f4
  .word 0x46000800
  .word 0xe6600034
  .word 0xc6610038
  .word 0xc7a003f8
  .word 0x46000800
  .word 0xe6600038
  .word 0x27a403f0
  .word 0xc6620020
  .word 0xc6610024
  .word 0xc6600028
  .word 0xe7a203f0
  .word 0xe7a103f4
  .word 0xe7a003f8
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a003f0
  .word 0x46000047
  .word 0xe7a103f0
  .word 0xc7a003f4
  .word 0x46000107
  .word 0xe7a403f4
  .word 0xc7a003f8
  .word 0x460000c7
  .word 0xe7a303f8
  .word 0x3c02428c
  .word 0x44821000
  .word 0x00000000
  .word 0x46020842
  .word 0xe7a103f0
  .word 0x46022002
  .word 0xe7a003f4
  .word 0x46021802
  .word 0xe7a003f8
  .word 0xc6600030
  .word 0x46010000
  .word 0xe6600030
  .word 0xc6610034
  .word 0xc7a003f4
  .word 0x46000800
  .word 0xe6600034
  .word 0xc6610038
  .word 0xc7a003f8
  .word 0x46000800
  .word 0xe6600038
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x24510054
  .word 0x8c430054
  .word 0x8e820000
  .word 0x8c6401e0
  .word 0x27a50400
  .word 0xc44c010c
  .word 0x0c06b7fc
  .word 0x00000000
  .word 0x8e220000
  .word 0x8c4401e0
  .word 0x26650030
  .word 0x0c06b708
  .word 0x00000000
  .word 0x1000003b
  .word 0x00000000
  .word 0x27a403f0
  .word 0xc6620020
  .word 0xc6610024
  .word 0xc6600028
  .word 0xe7a203f0
  .word 0xe7a103f4
  .word 0xe7a003f8
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a003f0
  .word 0x46000047
  .word 0xe7a103f0
  .word 0xc7a003f4
  .word 0x46000107
  .word 0xe7a403f4
  .word 0xc7a003f8
  .word 0x460000c7
  .word 0xe7a303f8
  .word 0x3c024316
  .word 0x44821000
  .word 0x00000000
  .word 0x46020842
  .word 0xe7a103f0
  .word 0x46022002
  .word 0xe7a003f4
  .word 0x46021802
  .word 0xe7a003f8
  .word 0xc6600030
  .word 0x46010000
  .word 0xe6600030
  .word 0xc6610034
  .word 0xc7a003f4
  .word 0x46000800
  .word 0xe6600034
  .word 0xc6610038
  .word 0xc7a003f8
  .word 0x46000800
  .word 0xe6600038
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x24510054
  .word 0x8c430054
  .word 0x8e820000
  .word 0x8c6401e0
  .word 0x27a50400
  .word 0xc44c010c
  .word 0x0c06b7fc
  .word 0x00000000
  .word 0x8e220000
  .word 0x8c4401e0
  .word 0x26650030
  .word 0x0c06b708
  .word 0x00000000
  .word 0x0c068070
  .word 0x00000000
  .word 0x12400013
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00438821
  .word 0x0000202d
  .word 0x8e050000
  .word 0x0c06be4c
  .word 0x00000000
  .word 0xae220170
  .word 0x00122e3c
  .word 0x00052e3f
  .word 0x0000202d
  .word 0x0220302d
  .word 0x0c10c59c
  .word 0x00000000
  .word 0xae22016c
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00438821
  .word 0x0000202d
  .word 0x0220282d
  .word 0x0c075038
  .word 0x00000000
  .word 0xae220180
  .word 0x8ea40000
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c130bc4
  .word 0x00000000
  .word 0x26300054
  .word 0x8e220054
  .word 0x94440000
  .word 0x24050001
  .word 0x0c068370
  .word 0x00000000
  .word 0x8e020000
  .word 0x8c4401e0
  .word 0x3c054000
  .word 0x0c06b61c
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420004
  .word 0x1440fcb9
  .word 0x00000000
  .word 0x8f84a850
  .word 0x8c830000
  .word 0x2402000e
  .word 0x14620005
  .word 0x00000000
  .word 0x8c830004
  .word 0x24020005
  .word 0x10620006
  .word 0x00000000
  .word 0x0c068094
  .word 0x00000000
  .word 0x24040001
  .word 0x14440006
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c10d3d8
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0c10d3d8
  .word 0x00000000
  .word 0x0c070010
  .word 0x00000000
  .word 0x24030004
  .word 0x14430005
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c10d438
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c130e20
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0410
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_loop_invariants off
// Measured opt_propagation off: nd535 -> 529, object 744/784; opt_dead_assignments off: nd535 -> 529, object 744/784; stacked opt_propagation off + opt_dead_assignments off: nd535 -> 529, object 744/784; retained (under window).
#pragma opt_propagation off
#pragma opt_dead_assignments off
// FUN_001CF940
asm FldUnit* func_001cf940(u32 encounter, void* unitData)
{
  .set noreorder
  .word 0x27bdfeb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x0000882d
  .word 0x0000282d
  .word 0x3c040087
  .word 0x2484eda0
  .word 0x1000000c
  .word 0x00000000
  .word 0x000510c0
  .word 0x00451023
  .word 0x00021180
  .word 0x00821821
  .word 0x8c620048
  .word 0x14400004
  .word 0x00000000
  .word 0x0060882d
  .word 0x10000005
  .word 0x00000000
  .word 0x24a50001
  .word 0x28a20018
  .word 0x1440fff3
  .word 0x00000000
  .word 0x16200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000099
  .word 0x00000000
  .word 0x3270ffff
  .word 0x0200202d
  .word 0x0c0bfcf8
  .word 0x00000000
  .word 0xae220048
  .word 0x001010c0
  .word 0x00501023
  .word 0x00021880
  .word 0x8f82b7b8
  .word 0x00431021
  .word 0xae22004c
  .word 0xa62001a8
  .word 0x8e220048
  .word 0x94430002
  .word 0x28610004
  .word 0x14200005
  .word 0x00000000
  .word 0x24020003
  .word 0xae220190
  .word 0x1000000c
  .word 0x00000000
  .word 0x28610002
  .word 0x14200005
  .word 0x00000000
  .word 0x24020002
  .word 0xae220190
  .word 0x10000005
  .word 0x00000000
  .word 0x24020001
  .word 0x14620002
  .word 0x00000000
  .word 0xae220190
  .word 0x00131402
  .word 0x3050ffff
  .word 0x24020004
  .word 0x1202001c
  .word 0x00000000
  .word 0x24020002
  .word 0x12020016
  .word 0x00000000
  .word 0x24050001
  .word 0x12050003
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x8f84a850
  .word 0x8c830000
  .word 0x24020033
  .word 0x14620008
  .word 0x00000000
  .word 0x8c820004
  .word 0x14450005
  .word 0x00000000
  .word 0x24020005
  .word 0xae22018c
  .word 0x10000018
  .word 0x00000000
  .word 0x24020001
  .word 0xae22018c
  .word 0x10000014
  .word 0x00000000
  .word 0xae22018c
  .word 0x10000011
  .word 0x00000000
  .word 0x24020003
  .word 0xae22018c
  .word 0x1000000d
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c050068
  .word 0x24a53930
  .word 0x0260302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c050068
  .word 0x24a53940
  .word 0x24060430
  .word 0x0c067500
  .word 0x00000000
  .word 0x3205ffff
  .word 0x24040008
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0xae220050
  .word 0x26250058
  .word 0x24040022
  .word 0x0240302d
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x26220058
  .word 0xae220168
  .word 0xc6400100
  .word 0x3c0243c8
  .word 0x44821000
  .word 0x00000000
  .word 0x46001000
  .word 0x3c024448
  .word 0x44820800
  .word 0x00000000
  .word 0x46010003
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6220194
  .word 0xc6400108
  .word 0x46001000
  .word 0x46010003
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6220196
  .word 0x0000382d
  .word 0x0000302d
  .word 0x8e220048
  .word 0x94450002
  .word 0x1000000a
  .word 0x00000000
  .word 0x8e240048
  .word 0x00071100
  .word 0x00471023
  .word 0x00021880
  .word 0x8c820004
  .word 0x00431021
  .word 0x90420006
  .word 0x00c23021
  .word 0x24e70001
  .word 0x00e5102b
  .word 0x1440fff5
  .word 0x00000000
  .word 0x30a2ffff
  .word 0x00c2001b
  .word 0x00001012
  .word 0xae220184
  .word 0x8e23018c
  .word 0x24020003
  .word 0x14620003
  .word 0x00000000
  .word 0x240203e8
  .word 0xae220184
  .word 0x8f82b59c
  .word 0x24420001
  .word 0xaf82b59c
  .word 0x0220102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0150
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_dead_assignments reset
#pragma opt_propagation reset

// FUN_001cfc50
FldUnit* K_FldUnit_CreateReaper(u32 unused, const RwV3d* spawnPos)
{
    FldUnit* units;
    FldUnit* curr;
    FldUnit* unit;
    s32 i;

    unit = NULL;
    i = 0;
    units = gFldUnitsEc;
    for (; i < FLDUNIT_EC_MAX; i++)
    {
        curr = &units[i];
        if (curr->genusBase == NULL)
        {
            unit = curr;
            break;
        }
    }

    if (datGetFlag(5141) == true)
    {
        return NULL;
    }
    else if (unit == NULL)
    {
        return NULL;
    }

    unit->genusBase = (DatUnitGenusBase*)datUnitCreateEc(BTLENCOUNT_REAPER);
    unit->encount = &gEncountTbl[BTLENCOUNT_REAPER];
    unit->unk_18c = 4;
    unit->scaleIdx = 0;
    unit->charId = 0;
    unit->mdl = mdlCreateAndResolvePath(MODEL_TYPE_ENEMYSYMBOL, 3, MDL_READASYNC);
    unit->spawnPos = *spawnPos;
    unit->unk_168 = &unit->unk_58;
    unit->xGrid = (spawnPos->x + 400.0f) / 800.0f;
    unit->zGrid = (spawnPos->z + 400.0f) / 800.0f;
    unit->unk_184 = 1000;

    sFldUnitsEcCount++;

    return unit;
}

// FUN_001CFDD0
asm u32 func_001cfdd0(u32 index)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x3c020068
  .word 0xdc433950
  .word 0x3c020068
  .word 0xc4403958
  .word 0xffa30050
  .word 0xe7a00058
  .word 0x001110c0
  .word 0x00511023
  .word 0x00021980
  .word 0x3c020087
  .word 0x2442eda0
  .word 0x00438021
  .word 0x8e020048
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000099
  .word 0x00000000
  .word 0x8e020054
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000093
  .word 0x00000000
  .word 0x8e040050
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000008b
  .word 0x00000000
  .word 0x26220064
  .word 0x3044ffff
  .word 0x0000282d
  .word 0x8e060050
  .word 0x0c0ed80c
  .word 0x00000000
  .word 0x3044ffff
  .word 0x0c0ed744
  .word 0x00000000
  .word 0xae020054
  .word 0x8e040050
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070010
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e030190
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x3c020068
  .word 0x24423780
  .word 0x00432821
  .word 0x8e040050
  .word 0x24060002
  .word 0x0c0c62a4
  .word 0x00000000
  .word 0x8e040050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c130bc4
  .word 0x00000000
  .word 0x8e030054
  .word 0x8e020168
  .word 0x8c6401e0
  .word 0x27a50050
  .word 0xc44c010c
  .word 0x0c06b7fc
  .word 0x00000000
  .word 0x8e030054
  .word 0x8e020168
  .word 0x8c6401e0
  .word 0x24450100
  .word 0x0c06b708
  .word 0x00000000
  .word 0x8e020054
  .word 0x94440000
  .word 0x24050001
  .word 0x0c068370
  .word 0x00000000
  .word 0x8e020054
  .word 0x8c4401e0
  .word 0x3c054000
  .word 0x0c06b61c
  .word 0x00000000
  .word 0x8e030054
  .word 0x3c02420c
  .word 0x44826000
  .word 0x8c6401e0
  .word 0x0c06b630
  .word 0x00000000
  .word 0x8f84b52c
  .word 0x0c0c5d14
  .word 0x00000000
  .word 0x8e030054
  .word 0xac6201e8
  .word 0x8e020054
  .word 0x8c4401e0
  .word 0x0c06b62c
  .word 0x00000000
  .word 0xe7a00048
  .word 0xe7a00044
  .word 0xe7a00040
  .word 0x8e020054
  .word 0x8c4401e8
  .word 0x27a50040
  .word 0x24060002
  .word 0x0c0c62a4
  .word 0x00000000
  .word 0x8e040050
  .word 0x0c0c62dc
  .word 0x00000000
  .word 0x0040902d
  .word 0x8e020054
  .word 0x8c4401e8
  .word 0x0c0c62dc
  .word 0x00000000
  .word 0x0240202d
  .word 0x0040282d
  .word 0x0c132d08
  .word 0x00000000
  .word 0x8e020054
  .word 0x8c4401e8
  .word 0x0c0c5dcc
  .word 0x00000000
  .word 0x0000202d
  .word 0x8e050054
  .word 0x0c06be4c
  .word 0x00000000
  .word 0xae020170
  .word 0x00112e3c
  .word 0x00052e3f
  .word 0x0000202d
  .word 0x0c112b48
  .word 0x00000000
  .word 0xae02016c
  .word 0x8e03018c
  .word 0x24020002
  .word 0x14620007
  .word 0x00000000
  .word 0x8e020054
  .word 0x0000202d
  .word 0x8c450128
  .word 0x0c074f10
  .word 0x00000000
  .word 0xae020178
  .word 0x0200202d
  .word 0x0c071978
  .word 0x00000000
  .word 0x1440000f
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050005
  .word 0x24061058
  .word 0x0c077518
  .word 0x00000000
  .word 0xae020174
  .word 0x0040202d
  .word 0x8e050050
  .word 0x0c07757c
  .word 0x00000000
  .word 0x8e040174
  .word 0x24050001
  .word 0x0c077578
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_001D00B0
u32 func_001d00b0(void)
{
    s32 i;

    for (i = 0; i < FLDUNIT_EC_MAX; i++)
    {
        if (func_001cfdd0((u32)i) == false)
        {
            return false;
        }
    }
    return true;
}

// FUN_001d0110
void K_FldUnit_Destroy(FldUnit* unit)
{
    if (unit->genusBase == NULL)
    {
        return;
    }

    datUnitDestroyGenus(unit->genusBase);

    if (unit->resrc != NULL)
    {
        func_003b7090(unit->resrc->base.resTypeId);
    }

    if (unit->mdl != NULL)
    {
        if (unit->charId == 0 || unit->unk_44 == 1)
        {
            K_Misc_CreateDelayMdlFreeTask(unit->mdl);
        }
    }

    if (unit->unk_16c != NULL)
    {
        kwlnTaskDestroyWithHierarchy(unit->unk_16c);
    }
    if (unit->unk_170 != NULL)
    {
        kwlnTaskDestroyWithHierarchy(unit->unk_170);
    }
    if (unit->unk_1b4 != NULL)
    {
        ((void (*)(void*))DAT_0096017c[0])(unit->unk_1b4);
    }
    if (unit->unk_174 != NULL)
    {
        kwlnTaskDestroyWithHierarchy(unit->unk_174);
    }
    if (unit->unk_178 != NULL)
    {
        kwlnTaskDestroyWithHierarchy(unit->unk_178);
    }
    if (unit->unk_180 != NULL)
    {
        kwlnTaskDestroyWithHierarchy(unit->unk_180);
    }

    unit->genusBase = NULL;
    unit->mdl = NULL;
    unit->resrc = NULL;
    unit->unk_16c = NULL;
    unit->unk_170 = NULL;
    unit->unk_1b4 = NULL;
    unit->unk_174 = NULL;
    unit->unk_178 = NULL;
    unit->unk_180 = NULL;

    if (unit->unk_18c != 0)
    {
        sFldUnitsEcCount--;
    }

    memset((u8*)unit + 0x198, 0, 5);
    func_001d2a10();
}

// FUN_001d0270
void func_001d0270(void)
{
    s32 i;

    for (i = 0; i < FLDUNIT_PC_MAX; i++)
    {
        if (*(void**)((u8*)gFldUnitsPc + i * sizeof(FldUnit) + 0x16c) != NULL)
        {
            func_001956d0(*(void**)((u8*)gFldUnitsPc + i * sizeof(FldUnit) + 0x16c),
                          0x20, 0);
        }
    }
    for (i = 0; i < FLDUNIT_EC_MAX; i++)
    {
        if (*(void**)((u8*)gFldUnitsEc + i * sizeof(FldUnit) + 0x16c) != NULL)
        {
            func_001956d0(*(void**)((u8*)gFldUnitsEc + i * sizeof(FldUnit) + 0x16c),
                          0x20, 0);
        }
    }
}

// FUN_001d0330
void K_FldUnit_DestroyAllPc()
{
    s32 i;

    for (i = 0; i < FLDUNIT_PC_MAX; i++)
    {
        K_FldUnit_Destroy(&gFldUnitsPc[i]);
    }
}

// FUN_001d0390
void K_FldUnit_DestroyAllEc()
{
    s32 i;

    for (i = 0; i < FLDUNIT_EC_MAX; i++)
    {
        K_FldUnit_Destroy(&gFldUnitsEc[i]);
    }
}



// Measured opt_common_subs off: nd506 -> 418, object 812/816; cached gFldUnitsPcMdl base: nd418 -> 399, object 812/816; retained (under window).
#pragma opt_common_subs off
/* Removing this worsens FUN_001d03f0 (nd506 -> nd517) - measured W161. */
#pragma opt_loop_invariants on
// FUN_001d03f0
asm void func_001d03f0(u16 charId)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x2404000e
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040a02d
  .word 0x16800005
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3402ffff
  .word 0x1062000c
  .word 0x00000000
  .word 0x3203ffff
  .word 0x10000006
  .word 0x00000000
  .word 0x96820000
  .word 0x304203ff
  .word 0x10430005
  .word 0x00000000
  .word 0x8e9400f8
  .word 0x00000000
  .word 0x1680fff9
  .word 0x00000000
  .word 0x0c073650
  .word 0x00000000
  .word 0x0040802d
  .word 0x1200001c
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0bfcd0
  .word 0x00000000
  .word 0xae020048
  .word 0x24040001
  .word 0x0c073668
  .word 0x00000000
  .word 0xae020050
  .word 0x24040001
  .word 0xa60401a8
  .word 0xae000044
  .word 0x0c05ccc0
  .word 0x00000000
  .word 0x304200ff
  .word 0xae020184
  .word 0x24040001
  .word 0x0c05b11c
  .word 0x00000000
  .word 0x304200ff
  .word 0xae020188
  .word 0x0000202d
  .word 0x0000282d
  .word 0x2406106f
  .word 0x0c077518
  .word 0x00000000
  .word 0xae020174
  .word 0xae140168
  .word 0x0c0680c4
  .word 0x00000000
  .word 0x24030001
  .word 0x1043000a
  .word 0x00000000
  .word 0x8f85a850
  .word 0x8ca40000
  .word 0x24030008
  .word 0x1483001b
  .word 0x00000000
  .word 0x8ca40004
  .word 0x24030003
  .word 0x14830017
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000000f
  .word 0x00000000
  .word 0x001220c0
  .word 0x3c030087
  .word 0x24631ea0
  .word 0x00648821
  .word 0x2630000c
  .word 0x8e24000c
  .word 0x10800006
  .word 0x00000000
  .word 0x0c0c5d38
  .word 0x00000000
  .word 0xae000000
  .word 0xa6200008
  .word 0xa620000a
  .word 0x26520001
  .word 0x2a430003
  .word 0x1460fff0
  .word 0x00000000
  .word 0x10000063
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000005d
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c05b758
  .word 0x00000000
  .word 0x0002843c
  .word 0x0010843f
  .word 0x1a000048
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c05b25c
  .word 0x00000000
  .word 0x3c030008
  .word 0x00431024
  .word 0x1040000e
  .word 0x00000000
  .word 0x24040c21
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24050001
  .word 0x14450008
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c05b3d0
  .word 0x00000000
  .word 0x0200202d
  .word 0x3c050008
  .word 0x0c05b674
  .word 0x00000000
  .word 0x0c073650
  .word 0x00000000
  .word 0x0040882d
  .word 0x1220003c
  .word 0x00000000
  .word 0x3213ffff
  .word 0x0260202d
  .word 0x0c0bfcd0
  .word 0x00000000
  .word 0xae220048
  .word 0x3270ffff
  .word 0x0200202d
  .word 0x0c073668
  .word 0x00000000
  .word 0xae220050
  .word 0xa63301a8
  .word 0xae200044
  .word 0x0260202d
  .word 0x0c05ccc0
  .word 0x00000000
  .word 0x304200ff
  .word 0xae220184
  .word 0x24020001
  .word 0x1602000f
  .word 0x00000000
  .word 0x0013243c
  .word 0x0004243f
  .word 0x0c05b11c
  .word 0x00000000
  .word 0x304200ff
  .word 0xae220188
  .word 0x0000202d
  .word 0x0000282d
  .word 0x2406106f
  .word 0x0c077518
  .word 0x00000000
  .word 0xae220174
  .word 0x1000000a
  .word 0x00000000
  .word 0x0200102d
  .word 0x00021940
  .word 0x3c020068
  .word 0x244237b0
  .word 0x00432021
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae2201b0
  .word 0xae340168
  .word 0x1000000e
  .word 0x00000000
  .word 0x001220c0
  .word 0x3c030087
  .word 0x24631ea0
  .word 0x00648821
  .word 0x2630000c
  .word 0x8e24000c
  .word 0x10800006
  .word 0x00000000
  .word 0x0c0c5d38
  .word 0x00000000
  .word 0xae000000
  .word 0xa6200008
  .word 0xa620000a
  .word 0x26520001
  .word 0x2a430003
  .word 0x1460ffa2
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
}
#pragma opt_loop_invariants off
#pragma opt_common_subs reset




// FUN_001d0720
asm s32 func_001d0720(s32 targetCount)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x0000802d
  .word 0x24041415
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000040
  .word 0x00000000
  .word 0x8f84a850
  .word 0x8c830000
  .word 0x28620014
  .word 0x14400004
  .word 0x00000000
  .word 0x2861001d
  .word 0x14200007
  .word 0x00000000
  .word 0x28620028
  .word 0x1440002d
  .word 0x00000000
  .word 0x28610031
  .word 0x1020002a
  .word 0x00000000
  .word 0x8c820004
  .word 0x10400027
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000002c
  .word 0x00000000
  .word 0x8f93a850
  .word 0x0c06ffc8
  .word 0x00000000
  .word 0x3046ffff
  .word 0x96640000
  .word 0x96650004
  .word 0x0c075cc0
  .word 0x00000000
  .word 0x8f85a850
  .word 0x8ca40000
  .word 0x24030033
  .word 0x14830008
  .word 0x00000000
  .word 0x8ca40004
  .word 0x24030001
  .word 0x14830004
  .word 0x00000000
  .word 0x260301d2
  .word 0x3c020001
  .word 0x00621025
  .word 0x3044ffff
  .word 0x3403ffff
  .word 0x14830007
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843940
  .word 0x2405057c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24020001
  .word 0x0040202d
  .word 0x0220282d
  .word 0x0c073e50
  .word 0x00000000
  .word 0x26100001
  .word 0x0200202d
  .word 0x0240282d
  .word 0x0c074220
  .word 0x00000000
  .word 0x0040882d
  .word 0x1440ffd7
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}

/* Removing this worsens FUN_001d0880 (nd485 -> nd512) - measured W161. */
#pragma opt_loop_invariants on
// FUN_001d0880
asm u8* func_001d0880(s32 ordinal, s32 targetCount)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x2404000f
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040802d
  .word 0x0000882d
  .word 0x0c06ffc8
  .word 0x00000000
  .word 0x3c0244fa
  .word 0x4482b800
  .word 0x0c070010
  .word 0x00000000
  .word 0x24030003
  .word 0x10430006
  .word 0x00000000
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x240205dc
  .word 0x44820000
  .word 0x00000000
  .word 0x468005e0
  .word 0x0c068094
  .word 0x00000000
  .word 0x24030001
  .word 0x1443008c
  .word 0x00000000
  .word 0x0c074390
  .word 0x00000000
  .word 0x0052082a
  .word 0x10200093
  .word 0x00000000
  .word 0x3c020080
  .word 0x4482b000
  .word 0x2404000f
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040982d
  .word 0x1000007b
  .word 0x00000000
  .word 0xc6620100
  .word 0xc6610104
  .word 0xc6600108
  .word 0xe7a20080
  .word 0xe7a10084
  .word 0xe7a00088
  .word 0x0000802d
  .word 0xc7b50084
  .word 0xc7b40088
  .word 0x10000033
  .word 0x00000000
  .word 0x0000202d
  .word 0x001010c0
  .word 0x00501023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431821
  .word 0x8c620048
  .word 0x10400005
  .word 0x00000000
  .word 0x8c620054
  .word 0x10400002
  .word 0x00000000
  .word 0x24040001
  .word 0x0004102b
  .word 0x10400021
  .word 0x00000000
  .word 0x001010c0
  .word 0x00501023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x24520050
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4410030
  .word 0xc7a00080
  .word 0x46010001
  .word 0xe7a00070
  .word 0x8e440000
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400034
  .word 0x4600a801
  .word 0xe7a00074
  .word 0x8e440000
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400038
  .word 0x4600a001
  .word 0xe7a00078
  .word 0x27a40070
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x46170034
  .word 0x45010005
  .word 0x00000000
  .word 0x26100001
  .word 0x2e020004
  .word 0x1440ffcc
  .word 0x00000000
  .word 0x2e010004
  .word 0x10200004
  .word 0x00000000
  .word 0x8e7300f8
  .word 0x10000035
  .word 0x00000000
  .word 0x0c074390
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0260102d
  .word 0x1000003f
  .word 0x00000000
  .word 0x4600b606
  .word 0x0220902d
  .word 0x0000802d
  .word 0x10000025
  .word 0x00000000
  .word 0x001010c0
  .word 0x00501023
  .word 0x00021980
  .word 0x3c020087
  .word 0x2442eda0
  .word 0x00431821
  .word 0x8c620048
  .word 0x1040001b
  .word 0x00000000
  .word 0x8c620168
  .word 0xc4410100
  .word 0xc7a00080
  .word 0x46010001
  .word 0xe7a00070
  .word 0xc4400104
  .word 0x4600a801
  .word 0xe7a00074
  .word 0xc4400108
  .word 0x4600a001
  .word 0xe7a00078
  .word 0x27a40070
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x46160036
  .word 0x45010003
  .word 0x00000000
  .word 0x46000586
  .word 0x0260882d
  .word 0x46170034
  .word 0x45000005
  .word 0x00000000
  .word 0x4600c586
  .word 0x0240882d
  .word 0x10000005
  .word 0x00000000
  .word 0x26100001
  .word 0x2e020018
  .word 0x1440ffda
  .word 0x00000000
  .word 0x8e7300f8
  .word 0x1660ff85
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000008
  .word 0x00000000
  .word 0x14530004
  .word 0x00000000
  .word 0x0200882d
  .word 0x10000005
  .word 0x00000000
  .word 0x8e1000f8
  .word 0x24420001
  .word 0x1600fff8
  .word 0x00000000
  .word 0x0220102d
  .word 0xdfbf0060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_loop_invariants off

// FUN_001d0bc0
void func_001d0bc0(void* output, u32 count)
{
    u8* node;
    u8* dst;
    RwV3d nodePos;
    RwV3d delta;
    f32 distance;
    f32 bestDistance;
    u32 i;
    u32 k;
    u32 j;
    u8* selectedDst;
    u8* node2;
    typedef struct
    {
        u32 data[0x44];
    } SpawnCopy;

    node = (u8*)MT_Scene_GetResListHead(RESRC_TYPE_15);
    i = 0;
    memset(output, 0, 0x330);
    if (K_Scene_001a0250() == 1)
    {
        while (node != NULL)
        {
            i++;
            node = *(u8**)(node + 0xf8);
        }
        if (i < count)
        {
            K_Assert(__FILE__, 0x60d);
        }
        for (k = 0; k < count; k++)
        {
            bestDistance = 1.1754944e-38f;
            node2 = (u8*)MT_Scene_GetResListHead(RESRC_TYPE_15);
            selectedDst = (u8*)output + k * 0x110;
            while (node2 != NULL)
            {
                nodePos = *FldUnit_NodePos(node2);
                delta.x = nodePos.x - mdlGetMatrix(gFldUnitsPc[0].mdl)->pos.x;
                delta.y = nodePos.y - mdlGetMatrix(gFldUnitsPc[0].mdl)->pos.y;
                delta.z = nodePos.z - mdlGetMatrix(gFldUnitsPc[0].mdl)->pos.z;
                distance = func_004c6ac0(&delta);
                for (j = 0; j < k; j++)
                {
                    dst = (u8*)output + j * 0x110;
                    delta.x = nodePos.x - *(f32*)(dst + 0x100);
                    delta.y = nodePos.y - *(f32*)(dst + 0x104);
                    delta.z = nodePos.z - *(f32*)(dst + 0x108);
                    distance += func_004c6ac0(&delta);
                }
                if (distance > bestDistance)
                {
                    bestDistance = distance;
                    *(SpawnCopy*)selectedDst = *(SpawnCopy*)node2;
                }
                node2 = *(u8**)(node2 + 0xf8);
            }
        }
    }
}

// FUN_001d0e40
u32 func_001d0e40(void)
{
    return uGpffffb59c;
}

// Measured opt_loop_invariants on: nd491 -> 418, object 804/864; retained (under window).
#pragma opt_loop_invariants on
// FUN_001d0e50
asm void func_001d0e50(s32 isDungeon)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0004102b
  .word 0x38540001
  .word 0x100000af
  .word 0x00000000
  .word 0x001410c0
  .word 0x00541023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00439821
  .word 0x26750048
  .word 0x8e620048
  .word 0x104000a4
  .word 0x00000000
  .word 0x26720050
  .word 0x3284ffff
  .word 0x24050001
  .word 0x8e660050
  .word 0x0c0ed80c
  .word 0x00000000
  .word 0x3044ffff
  .word 0x26710054
  .word 0x0c0ed744
  .word 0x00000000
  .word 0xae220000
  .word 0x8e440000
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x24050008
  .word 0x0260302d
  .word 0x8cc40000
  .word 0x8cc30004
  .word 0x24c60008
  .word 0x24a5ffff
  .word 0xac440000
  .word 0xac430004
  .word 0x24420008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x8e440000
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c130bc4
  .word 0x00000000
  .word 0x8e220000
  .word 0x94440000
  .word 0x24050001
  .word 0x0c068370
  .word 0x00000000
  .word 0x8e220000
  .word 0x8c4401e0
  .word 0x3c054000
  .word 0x0c06b61c
  .word 0x00000000
  .word 0x8e220000
  .word 0x8c4401e0
  .word 0x0c06b750
  .word 0x00000000
  .word 0x16800009
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c024270
  .word 0x44826000
  .word 0x8c6401e0
  .word 0x0c06b630
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c02420c
  .word 0x44826000
  .word 0x8c6401e0
  .word 0x0c06b630
  .word 0x00000000
  .word 0x001410c0
  .word 0x00541023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x24500054
  .word 0x8f84b52c
  .word 0x0c0c5d14
  .word 0x00000000
  .word 0x8e030000
  .word 0xac6201e8
  .word 0x8e020000
  .word 0x8c4401e0
  .word 0x0c06b62c
  .word 0x00000000
  .word 0xe7a00088
  .word 0xe7a00084
  .word 0xe7a00080
  .word 0x8e020000
  .word 0x8c4401e8
  .word 0x27a50080
  .word 0x24060002
  .word 0x0c0c62a4
  .word 0x00000000
  .word 0x8e440000
  .word 0x0c0c62dc
  .word 0x00000000
  .word 0x0040b02d
  .word 0x8e020000
  .word 0x8c4401e8
  .word 0x0c0c62dc
  .word 0x00000000
  .word 0x02c0202d
  .word 0x0040282d
  .word 0x0c132d08
  .word 0x00000000
  .word 0x8e020000
  .word 0x8c4401e8
  .word 0x0c0c5dcc
  .word 0x00000000
  .word 0x8ea40000
  .word 0x0c0bfde4
  .word 0x00000000
  .word 0x14400012
  .word 0x00000000
  .word 0x001410c0
  .word 0x00541023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x944401a8
  .word 0x0c077780
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x8e440000
  .word 0x0000282d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x12800013
  .word 0x00000000
  .word 0x001410c0
  .word 0x00541023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00438021
  .word 0x0000202d
  .word 0x8e250000
  .word 0x0c06be4c
  .word 0x00000000
  .word 0xae020170
  .word 0x00142e3c
  .word 0x00052e3f
  .word 0x0000202d
  .word 0x0200302d
  .word 0x0c10c59c
  .word 0x00000000
  .word 0xae02016c
  .word 0x001410c0
  .word 0x00541023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00438021
  .word 0x0000202d
  .word 0x0200282d
  .word 0x0c075038
  .word 0x00000000
  .word 0xae020180
  .word 0x16800007
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x2406106f
  .word 0x0c077518
  .word 0x00000000
  .word 0xae620174
  .word 0x26940001
  .word 0x2a820004
  .word 0x1440ff50
  .word 0x00000000
  .word 0x0c068094
  .word 0x00000000
  .word 0x24040001
  .word 0x14440006
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c10d3d8
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0c10d3d8
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_loop_invariants off

// FUN_001d11b0
void func_001d11b0(void)
{
    s32 i;
    s32 kind;
    FldUnit* unit;

    i = 0;
    while (i < FLDUNIT_EC_MAX)
    {
        unit = &gFldUnitsEc[i];
        if (unit->genusBase != NULL)
        {
            kind = unit->unk_18c;
            switch (kind)
            {
                case 5:
                case 1:
                    unit->mdl = (Model*)func_00316e00(8, 1, 0);
                    break;
                case 2:
                    unit->mdl = (Model*)func_00316e00(8, 2, 0);
                    break;
                case 4:
                    unit->mdl = (Model*)func_00316e00(8, 3, 0);
                    break;
                case 3:
                    unit->mdl = (Model*)func_00316e00(8, 4, 0);
                    break;
            }
        }
        i++;
    }
}

// FUN_001d12d0
u32 func_001d12d0(void)
{
    s32 i;
    FldUnit* unit;

    for (i = 0; i < FLDUNIT_EC_MAX; i++)
    {
        unit = &gFldUnitsEc[i];
        if (unit->genusBase != NULL && func_00316f70(unit->mdl) == 0)
        {
            return 0;
        }
    }
    return 1;
}

/* Removing this worsens FUN_001d1360 (nd448 -> nd516) - measured W161. */
#pragma opt_loop_invariants on
// FUN_001d1360
void func_001d1360(void)
{
    s32 i;
    u16 resourceId;
    ResrcModelChar** resource;
    FldUnit* unit;
    Model** model;
    KwlnTask** taskSlot;
    RwV3d light;

    for (i = 0; i < FLDUNIT_EC_MAX; i++)
    {
        unit = &gFldUnitsEc[i];
        if (unit->genusBase != NULL)
        {
            model = &unit->mdl;
            resourceId = func_003b6030((u16)(i + 100), 0, unit->mdl);
            resource = &unit->resrc;
            *resource = (ResrcModelChar*)func_003b5d10(resourceId);
            func_00318a90(*model, &DAT_00683780[unit->scaleIdx], 2);
            *(RwMatrix*)func_00318b60(*model) = unit->matBeforeBtl;
            func_004c2f10(func_00318b60_u64(*model));
            func_001a0dc0((*resource)->base.resTypeId, 1);
            func_001ad870((*resource)->collisCtlTask, 0x40000000);
            func_001add40((*resource)->collisCtlTask);
            func_001ad8c0_reordered((*resource)->collisCtlTask, 35.0f);
            (*resource)->baseMdl = (Model*)func_00317450(uGpffffb52c);
            light.z = func_001ad8b0((*resource)->collisCtlTask);
            light.y = light.z;
            light.x = light.z;
            func_00318a90((*resource)->baseMdl, &light, 2);
            func_004cb420(func_00318b70(*model),
                          func_00318b70((*resource)->baseMdl));
            func_00317730((*resource)->baseMdl);
            unit->unk_170 = (KwlnTask*)func_001af930(0, *resource);
            unit->unk_16c = (KwlnTask*)func_0044ad20(0, (s32)(s8)i);
            if (unit->unk_18c == 2)
            {
                taskSlot = &unit->unk_178;
                if (unit->unk_178 == NULL)
                {
                    *taskSlot = (KwlnTask*)func_001d3c40_ptr(
                        NULL, (*resource)->mdl);
                }
            }
            if (func_001c65e0(unit) == 0)
            {
                gFldUnitsEc[i].unk_174 =
                    (KwlnTask*)func_001dd460(0, 5, 0x1058);
                func_001dd5f0(gFldUnitsEc[i].unk_174, *model);
                func_001dd5e0(gFldUnitsEc[i].unk_174, 1);
            }
        }
    }
    func_001d2a10();
}
#pragma opt_loop_invariants off
// FUN_001d1640
void func_001d1640(FldUnit* unit, s32 destroyModel)
{
    u32 valid;

    valid = unit->genusBase != NULL;
    if (valid != 0)
    {
        valid = unit->resrc != NULL;
    }
    if (valid != 0)
    {
        unit->matBeforeBtl = *mdlGetMatrix(unit->mdl);
        func_003b7090(unit->resrc->base.resTypeId);
        unit->resrc = NULL;
        if (unit->mdl != NULL && destroyModel == 1)
        {
            mdlDestroy(unit->mdl);
            unit->mdl = NULL;
        }
        if (unit->unk_16c != NULL) { func_00195020(unit->unk_16c); unit->unk_16c = NULL; }
        if (unit->unk_170 != NULL) { func_00195020(unit->unk_170); unit->unk_170 = NULL; }
        if (unit->unk_178 != NULL) { func_00195020(unit->unk_178); unit->unk_178 = NULL; }
        if (unit->unk_180 != NULL) { func_00195020(unit->unk_180); unit->unk_180 = NULL; }
        if (unit->unk_174 != NULL) { func_00195020(unit->unk_174); unit->unk_174 = NULL; }
    }
    }

// FUN_001d1780
void func_001d1780(s32 includeHero)
{
    s32 i;

    for (i = includeHero ? 0 : 1; i < FLDUNIT_PC_MAX; i++)
    {
        func_001d1640(&gFldUnitsPc[i], 0);
    }
}

// FUN_001d17f0
void func_001d17f0(s32 destroyModel)
{
    s32 i;

    for (i = 0; i < FLDUNIT_EC_MAX; i++)
    {
        func_001d1640(&gFldUnitsEc[i], destroyModel);
    }
}

// FUN_001d1860
void func_001d1860(u32 value)
{
    s32 i;
    FldUnit* unit;
    u32 valid;
    u32 predicate;

    for (i = 0; i < FLDUNIT_PC_MAX; i++)
    {
        valid = 0;
        unit = &gFldUnitsPc[i];
        if (unit->genusBase != NULL && unit->resrc != NULL)
        {
            valid = 1;
        }
        predicate = valid > 0;
        if (predicate == 1)
        {
            func_0019c2f0(unit->resrc->renderTexShadowTask, value);
        }
    }
}


// FUN_001d1910
void func_001d1910(void)
{
    s32 i;
    s32 offset;
    FldUnit* unit;
    FldUnit* unit2;
    u32 valid;
    u32 predicate;

    for (i = 0; i < FLDUNIT_PC_MAX; i++)
    {
        valid = 0;
        unit = &gFldUnitsPc[i];
        if (unit->genusBase != NULL && unit->resrc != NULL)
        {
            valid = 1;
        }
        predicate = valid > 0;
        if (predicate == 1)
        {
            offset = i * sizeof(FldUnit);
            unit2 = (FldUnit*)((int)gFldUnitsPc + offset);
            func_001a60d0(0, unit2->mdl, 0, 1);
            unit2->unk_17c = 0;
        }
    }
}
// FUN_001d19d0
void func_001d19d0(void)
{
    s32 i;
    s32 offset;
    FldUnit* unit;
    u32 valid;
    u32 predicate;

    for (i = 0; i < FLDUNIT_PC_MAX; i++)
    {
        valid = 0;
        unit = &gFldUnitsPc[i];
        if (unit->genusBase != NULL && unit->resrc != NULL)
        {
            valid = 1;
        }
        predicate = valid > 0;
        if (predicate == 1)
        {
            offset = i * sizeof(FldUnit);
            unit = (FldUnit*)((int)gFldUnitsPc + offset);
            unit->unk_17c = 0;
            func_001a60d0(0, unit->mdl, 0xff, 1);
        }
    }
}

// FUN_001d1a90
u32 func_001d1a90(void)
{
    s32 i;
    FldUnit* unit;
    u32 markerValue;
    u32* marker;
    u32 valid;
    u32 predicate;
    u32 result;

    result = 1;
    for (i = 0; i < FLDUNIT_PC_MAX; i++)
    {
        valid = 0;
        unit = &gFldUnitsPc[i];
        if (unit->genusBase != NULL && unit->resrc != NULL)
        {
            valid = 1;
        }
        predicate = valid > 0;
        if (predicate == 1)
        {
            marker = &unit->unk_17c;
            markerValue = *marker;
            if (markerValue == 0)
            {
                continue;
            }
            if (func_00195460_marker(markerValue) == 1)
            {
                result = 0;
            }
            else
            {
                *marker = 0;
            }
        }
    }
    return result;
}
// FUN_001d1b60
void func_001d1b60(void)
{
    s32 i;
    s32 offset;
    FldUnit* unit;
    FldUnit* unit2;
    u32 valid;
    u32 predicate;

    for (i = 0; i < FLDUNIT_EC_MAX; i++)
    {
        valid = 0;
        unit = &gFldUnitsEc[i];
        if (unit->genusBase != NULL && unit->resrc != NULL)
        {
            valid = 1;
        }
        predicate = valid > 0;
        if (predicate == 1)
        {
            offset = i * sizeof(FldUnit);
            unit2 = (FldUnit*)((int)gFldUnitsEc + offset);
            unit2->unk_17c = 0;
            func_001a60d0(0, unit2->mdl, 0, 1);
        }
    }
}

// FUN_001d1c20
void func_001d1c20(void)
{
    s32 i;
    s32 offset;
    FldUnit* unit;
    FldUnit* unit2;
    u32 valid;
    u32 predicate;

    for (i = 0; i < FLDUNIT_EC_MAX; i++)
    {
        valid = 0;
        unit = &gFldUnitsEc[i];
        if (unit->genusBase != NULL && unit->resrc != NULL)
        {
            valid = 1;
        }
        predicate = valid > 0;
        if (predicate == 1)
        {
            offset = i * sizeof(FldUnit);
            unit2 = (FldUnit*)((int)gFldUnitsEc + offset);
            unit2->unk_17c = 0;
            func_001a60d0(0, unit2->mdl, 0xff, 1);
        }
    }
}

// FUN_001d1ce0
u32 func_001d1ce0(void)
{
    s32 i;
    FldUnit* unit;
    u32 markerValue;
    u32* marker;
    u32 valid;
    u32 predicate;
    u32 result;

    result = 1;
    for (i = 0; i < FLDUNIT_EC_MAX; i++)
    {
        valid = 0;
        unit = &gFldUnitsEc[i];
        if (unit->genusBase != NULL && unit->resrc != NULL)
        {
            valid = 1;
        }
        predicate = valid > 0;
        if (predicate == 1)
        {
            marker = &unit->unk_17c;
            markerValue = *marker;
            if (markerValue != 0)
            {
                if (func_00195460_marker(markerValue) == 1)
                {
                    result = 0;
                }
                else
                {
                    *marker = 0;
                }
            }
        }
    }
    return result;
}

// FUN_001d1db0
asm void func_001d1db0(void* work, const void* source, u16 resourceId)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x00c0802d
  .word 0x3c030068
  .word 0xdc643960
  .word 0x3c030068
  .word 0xc4603968
  .word 0xffa40060
  .word 0xe7a00068
  .word 0x3c030068
  .word 0xdc643970
  .word 0x3c030068
  .word 0xc4603978
  .word 0xffa40050
  .word 0xe7a00058
  .word 0x1260005e
  .word 0x00000000
  .word 0x8e62011c
  .word 0x90420007
  .word 0x30420001
  .word 0x0002882b
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00111880
  .word 0x00431021
  .word 0x8c4411ec
  .word 0x0c0c5d14
  .word 0x00000000
  .word 0x3204ffff
  .word 0x0040282d
  .word 0x0c0ed974
  .word 0x00000000
  .word 0xa6620008
  .word 0x96640008
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040882d
  .word 0x8c440104
  .word 0x24050003
  .word 0x0c0c648c
  .word 0x00000000
  .word 0x8e240104
  .word 0x27a50060
  .word 0xc64c010c
  .word 0x24060002
  .word 0x0c0c6294
  .word 0x00000000
  .word 0x8e240104
  .word 0x26450100
  .word 0x24060002
  .word 0x0c0c628c
  .word 0x00000000
  .word 0x8f84b52c
  .word 0x0c0c5d14
  .word 0x00000000
  .word 0xae22012c
  .word 0x0040202d
  .word 0x27a50060
  .word 0xc64c010c
  .word 0x24060002
  .word 0x0c0c6294
  .word 0x00000000
  .word 0x8e24012c
  .word 0x27a50050
  .word 0x24060002
  .word 0x0c0c62a4
  .word 0x00000000
  .word 0x8e24012c
  .word 0x26450100
  .word 0x24060002
  .word 0x0c0c628c
  .word 0x00000000
  .word 0x8e24012c
  .word 0xae640134
  .word 0x0c0c5dcc
  .word 0x00000000
  .word 0xc6400100
  .word 0x3c0243c8
  .word 0x44821000
  .word 0x00000000
  .word 0x46001000
  .word 0x3c024448
  .word 0x44820800
  .word 0x00000000
  .word 0x46010003
  .word 0x46000024
  .word 0x44100000
  .word 0xc6400108
  .word 0x46001000
  .word 0x46010003
  .word 0x00000000
  .word 0x46000024
  .word 0x44120000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00121a00
  .word 0x00431821
  .word 0x00101100
  .word 0x00621021
  .word 0x9444004c
  .word 0x0c0ed744
  .word 0x00000000
  .word 0xae220100
  .word 0x96640008
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0x8f83b598
  .word 0x24630001
  .word 0xaf83b598
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
}

// FUN_001d1fa0
void func_001d1fa0(void)
{
    u8* spawn;
    u32 area;
    u32 count;
    s32 index;
    u16* model;
    u8* record;
    u8* candidate;
    s32 slot;
    u8* base;
    u16 spawnId;
    typedef struct
    {
        u32 data[0x44];
    } SpawnCopy;

    area = func_001bff20();
    memset(DAT_0086be80, 0, 0x2700);
    iGpffffb598 = 0;
    count = func_001d77d0_u32(*puGpffffa850, puGpffffa850[2], area);
    switch (func_001c0040())
    {
        case 0:
        case 1:
            break;
        case 2:
            count = 10;
            break;
        case 3:
        case 4:
            break;
    }
    if (count == 0)
    {
        return;
    }
    index = 0;
    while ((spawn = (u8*)func_001d2300(index, count)) != NULL)
    {
        model = func_001d78c0(*puGpffffa850, puGpffffa850[2], area);
        if (model == NULL)
        {
            K_Assert(D_00683940, 0x85c);
        }
        record = NULL;
        slot = 0;
        base = DAT_0086be80;
        while (slot < 0x20)
        {
            candidate = base + slot * 0x138;
            if (*(u32*)candidate == 0)
            {
                record = candidate;
                break;
            }
            slot++;
        }
        *(u32*)record = 1;
        *(u32*)(record + 0x11c) = (u32)model;
        *(SpawnCopy*)(record + 0x0c) = *(SpawnCopy*)spawn;
        func_001d1db0_u32(record, spawn, 0x3fe - index);
        spawnId = model[1];
        if (spawnId < 5000)
        {
            if (spawnId >= 4000)
            {
                func_001828d0(spawnId, record + 0x120);
            }
            else
            {
                if (*(u8*)((u8*)model + 5) == 0)
                {
                    func_001828d0(spawnId, record + 0x120);
                }
                else
                {
                    func_00182d90(spawnId, 2,
                                   *(u8*)((u8*)model + 5), record + 0x120);
                }
            }
        }
        index++;
    }
}

// FUN_001d2210
void func_001d2210(void)
{
    s32 i;
    u8* record;

    for (i = 0; i < 0x20; i++)
    {
        record = DAT_0086be80 + i * 0x138;
        if (*(u32*)record != 0)
        {
            func_001d1db0(record, record + 0x0c, *(u16*)(record + 8) & 0x3ff);
        }
    }
    func_001d2a10();
}

// FUN_001d22a0
void func_001d22a0(void* work)
{
    u8* record;

    record = (u8*)work;
    func_003b7090(*(u16*)(record + 8));
    memset(record, 0, 0x0c);
    iGpffffb598--;
    func_001d2a10();
}

/* Removing this worsens FUN_001d2300 (nd502 -> nd511) - measured W161. */
#pragma opt_loop_invariants on
// FUN_001d2300
asm u8* func_001d2300(s32 ordinal, s32 maxCount)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x24040010
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040982d
  .word 0x0000902d
  .word 0x0c06ffc8
  .word 0x00000000
  .word 0x0c068094
  .word 0x00000000
  .word 0x24030001
  .word 0x14430093
  .word 0x00000000
  .word 0x8f82b598
  .word 0x0050082a
  .word 0x1020009b
  .word 0x00000000
  .word 0x3c020080
  .word 0x4482b000
  .word 0x10000087
  .word 0x00000000
  .word 0xc6620100
  .word 0xc6610104
  .word 0xc6600108
  .word 0xe7a20070
  .word 0xe7a10074
  .word 0xe7a00078
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4410030
  .word 0xc7a00070
  .word 0x46010001
  .word 0xe7a00060
  .word 0xc7b50074
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400034
  .word 0x4600a801
  .word 0xe7a00064
  .word 0xc7b40078
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400038
  .word 0x4600a001
  .word 0xe7a00068
  .word 0x27a40060
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x3c0243fa
  .word 0x44820800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000004
  .word 0x00000000
  .word 0x8e7300f8
  .word 0x1000005d
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c43e580
  .word 0x24020001
  .word 0x1462001a
  .word 0x00000000
  .word 0xc7a10070
  .word 0x3c020087
  .word 0xc440e684
  .word 0x46000801
  .word 0xe7a00060
  .word 0x3c020087
  .word 0xc440e688
  .word 0x4600a801
  .word 0xe7a00064
  .word 0x3c020087
  .word 0xc440e68c
  .word 0x4600a001
  .word 0xe7a00068
  .word 0x27a40060
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x3c0243fa
  .word 0x44820800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000004
  .word 0x00000000
  .word 0x8e7300f8
  .word 0x1000003f
  .word 0x00000000
  .word 0x8f82b598
  .word 0x14400004
  .word 0x00000000
  .word 0x0260102d
  .word 0x1000004a
  .word 0x00000000
  .word 0x3c020080
  .word 0x4482b800
  .word 0x0000802d
  .word 0x0000882d
  .word 0x10000024
  .word 0x00000000
  .word 0x00111080
  .word 0x00511021
  .word 0x000210c0
  .word 0x00511023
  .word 0x000218c0
  .word 0x3c020087
  .word 0x2442be80
  .word 0x00431821
  .word 0x8c620000
  .word 0x10400018
  .word 0x00000000
  .word 0xc461010c
  .word 0xc7a00070
  .word 0x46010001
  .word 0xe7a00060
  .word 0xc4600110
  .word 0x4600a801
  .word 0xe7a00064
  .word 0xc4600114
  .word 0x4600a001
  .word 0xe7a00068
  .word 0x27a40060
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x3c0242c8
  .word 0x44820800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000006
  .word 0x00000000
  .word 0x4600bdc0
  .word 0x26310001
  .word 0x2a220020
  .word 0x1440ffdb
  .word 0x00000000
  .word 0x24020001
  .word 0x16020004
  .word 0x00000000
  .word 0x8e7300f8
  .word 0x10000007
  .word 0x00000000
  .word 0x4616b836
  .word 0x45010003
  .word 0x00000000
  .word 0x4600bd86
  .word 0x0260902d
  .word 0x8e7300f8
  .word 0x1660ff79
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000008
  .word 0x00000000
  .word 0x14510004
  .word 0x00000000
  .word 0x0260902d
  .word 0x10000005
  .word 0x00000000
  .word 0x8e7300f8
  .word 0x24420001
  .word 0x1660fff8
  .word 0x00000000
  .word 0x0240102d
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_loop_invariants off

// FUN_001d2610
asm void func_001d2610(void)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0c068094
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x0c0680b0
  .word 0x00000000
  .word 0x104000e8
  .word 0x00000000
  .word 0x3c030087
  .word 0x8c63e580
  .word 0x1460007f
  .word 0x00000000
  .word 0x0c0680b0
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x24100064
  .word 0x0c06e448
  .word 0x00000000
  .word 0xa4500044
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030064
  .word 0x0043001b
  .word 0x00008010
  .word 0x0c06e448
  .word 0x00000000
  .word 0x94430044
  .word 0x0203082b
  .word 0x10200068
  .word 0x00000000
  .word 0x0000882d
  .word 0x24040011
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040182d
  .word 0x10000003
  .word 0x00000000
  .word 0x26310001
  .word 0x8c6300f8
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000051
  .word 0x00000000
  .word 0x1a200045
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x0051001b
  .word 0x00008810
  .word 0x24040011
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040802d
  .word 0x0000102d
  .word 0x10000003
  .word 0x00000000
  .word 0x8e1000f8
  .word 0x24420001
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1451fffa
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4410030
  .word 0xc6000100
  .word 0x46000801
  .word 0xe7a00070
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4410034
  .word 0xc6000104
  .word 0x46000801
  .word 0xe7a00074
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4410038
  .word 0xc6000108
  .word 0x46000801
  .word 0xe7a00078
  .word 0x27a40070
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x3c0343fa
  .word 0x44830800
  .word 0x00000000
  .word 0x46010036
  .word 0x45010015
  .word 0x00000000
  .word 0x3c060087
  .word 0x24c6e584
  .word 0x24050022
  .word 0x8e040000
  .word 0x8e030004
  .word 0x26100008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x24040001
  .word 0x3c030087
  .word 0xac64e580
  .word 0x10000004
  .word 0x00000000
  .word 0x24040002
  .word 0x3c030087
  .word 0xac64e580
  .word 0x2a41000b
  .word 0x14200004
  .word 0x00000000
  .word 0x24040002
  .word 0x3c030087
  .word 0xac64e580
  .word 0x26520001
  .word 0x3c030087
  .word 0x8c63e580
  .word 0x1060ffad
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x24040002
  .word 0x3c030087
  .word 0xac64e580
  .word 0x3c030087
  .word 0x8c64e580
  .word 0x24030001
  .word 0x14830061
  .word 0x00000000
  .word 0x3c020068
  .word 0xdc433980
  .word 0x3c020068
  .word 0xc4403988
  .word 0xffa30060
  .word 0xe7a00068
  .word 0x3c020068
  .word 0xdc433990
  .word 0x3c020068
  .word 0xc4403998
  .word 0xffa30050
  .word 0xe7a00058
  .word 0x8f84b590
  .word 0x0c0c5d14
  .word 0x00000000
  .word 0x240403ff
  .word 0x0040282d
  .word 0x0c0ed974
  .word 0x00000000
  .word 0x3052ffff
  .word 0x0240202d
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040882d
  .word 0x8c440104
  .word 0x27a50060
  .word 0x3c020087
  .word 0xc44ce690
  .word 0x24060002
  .word 0x0c0c6294
  .word 0x00000000
  .word 0x8e240104
  .word 0x3c050087
  .word 0x24a5e684
  .word 0x24060002
  .word 0x0c0c628c
  .word 0x00000000
  .word 0x8f84b52c
  .word 0x0c0c5d14
  .word 0x00000000
  .word 0xae22012c
  .word 0x0040202d
  .word 0x27a50060
  .word 0x3c020087
  .word 0xc44ce690
  .word 0x24060002
  .word 0x0c0c6294
  .word 0x00000000
  .word 0x8e24012c
  .word 0x27a50050
  .word 0x24060002
  .word 0x0c0c62a4
  .word 0x00000000
  .word 0x8e24012c
  .word 0x3c050087
  .word 0x24a5e684
  .word 0x24060002
  .word 0x0c0c628c
  .word 0x00000000
  .word 0x8e24012c
  .word 0x3c020087
  .word 0xac44e694
  .word 0x0c0c5dcc
  .word 0x00000000
  .word 0x3c0243c8
  .word 0x44821000
  .word 0x3c020087
  .word 0xc440e684
  .word 0x46001000
  .word 0x3c024448
  .word 0x44820800
  .word 0x00000000
  .word 0x46010003
  .word 0x46000024
  .word 0x44100000
  .word 0x3c020087
  .word 0xc440e68c
  .word 0x46001000
  .word 0x46010003
  .word 0x00000000
  .word 0x46000024
  .word 0x44130000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00131a00
  .word 0x00431821
  .word 0x00101100
  .word 0x00621021
  .word 0x9444004c
  .word 0x0c0ed744
  .word 0x00000000
  .word 0xae220100
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c068054
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}


// Measured opt_dead_assignments off: nd1517 -> 1499, object 2116/2192; cached gFldUnitsEc base: nd1499 -> 1497, object 2060/2192; retained (under window).
#pragma opt_dead_assignments off
// FUN_001d2a10
asm void func_001d2a10(void)
{
  .set noreorder
  .word 0x27bdff10
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
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x3c040087
  .word 0x2484b180
  .word 0x0000282d
  .word 0x24060c40
  .word 0x0c148502
  .word 0x00000000
  .word 0x8f83a850
  .word 0x8c640000
  .word 0x2403ffff
  .word 0x108301fb
  .word 0x00000000
  .word 0x0c068094
  .word 0x00000000
  .word 0x104001ad
  .word 0x00000000
  .word 0x0000a02d
  .word 0x3c0342a0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000547
  .word 0x10000164
  .word 0x00000000
  .word 0x0000982d
  .word 0x001418c0
  .word 0x00742023
  .word 0x000418c0
  .word 0x00641823
  .word 0x00032100
  .word 0x3c030087
  .word 0x2463b180
  .word 0x00641821
  .word 0x7fa300b0
  .word 0x10000154
  .word 0x00000000
  .word 0x0000802d
  .word 0x0000902d
  .word 0x001318c0
  .word 0x00732023
  .word 0x000418c0
  .word 0x00641823
  .word 0x00032080
  .word 0x7ba300b0
  .word 0x00641821
  .word 0xafa300c0
  .word 0x10000089
  .word 0x00000000
  .word 0x001218c0
  .word 0x00721823
  .word 0x00032180
  .word 0x3c030087
  .word 0x2463eda0
  .word 0x0064a821
  .word 0x8ea30048
  .word 0x1060007f
  .word 0x00000000
  .word 0x8ea5018c
  .word 0x24030004
  .word 0x10a3007b
  .word 0x00000000
  .word 0x00052180
  .word 0x8f83b5a0
  .word 0x00641821
  .word 0xc4610000
  .word 0x24030003
  .word 0x14a30007
  .word 0x00000000
  .word 0x3c034040
  .word 0x44830000
  .word 0x00000000
  .word 0x46000d82
  .word 0x10000005
  .word 0x00000000
  .word 0x3c034000
  .word 0x44830000
  .word 0x00000000
  .word 0x46000d82
  .word 0x0000882d
  .word 0x4600b507
  .word 0x10000063
  .word 0x00000000
  .word 0x8ea40050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a200e0
  .word 0xe7a100e4
  .word 0xe7a000e8
  .word 0xc7a000e0
  .word 0x46160001
  .word 0xe7a000e0
  .word 0x44910000
  .word 0x00000000
  .word 0x46800060
  .word 0x44800000
  .word 0x00000000
  .word 0x46140018
  .word 0x4601b05c
  .word 0xc7a000e8
  .word 0x46010000
  .word 0xe7a000e8
  .word 0x0000b02d
  .word 0x10000046
  .word 0x00000000
  .word 0x0000b82d
  .word 0x0c068094
  .word 0x00000000
  .word 0x10400013
  .word 0x00000000
  .word 0x3c0243c8
  .word 0x44820800
  .word 0xc7a000e0
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
  .word 0x0002b883
  .word 0x04410003
  .word 0x00000000
  .word 0x24420003
  .word 0x0002b883
  .word 0x0000f02d
  .word 0x0c068094
  .word 0x00000000
  .word 0x10400013
  .word 0x00000000
  .word 0x3c0343c8
  .word 0x44830800
  .word 0xc7a000e8
  .word 0x46000800
  .word 0x46000024
  .word 0x46800060
  .word 0x3c034448
  .word 0x44830000
  .word 0x00000000
  .word 0x46000803
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0x0003f083
  .word 0x04610003
  .word 0x00000000
  .word 0x24630003
  .word 0x0003f083
  .word 0x16f30012
  .word 0x00000000
  .word 0x17d40010
  .word 0x00000000
  .word 0x2a030018
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843940
  .word 0x240509b3
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00102080
  .word 0x8fa300c0
  .word 0x00641821
  .word 0xac750000
  .word 0x26100001
  .word 0x1000000c
  .word 0x00000000
  .word 0x26d60001
  .word 0xc7a000e0
  .word 0x46160000
  .word 0xe7a000e0
  .word 0x2ac30003
  .word 0x1460ffb9
  .word 0x00000000
  .word 0x26310001
  .word 0x2a230003
  .word 0x1460ff9c
  .word 0x00000000
  .word 0x26520001
  .word 0x2a430018
  .word 0x1460ff76
  .word 0x00000000
  .word 0x0000902d
  .word 0x0000882d
  .word 0x10000078
  .word 0x00000000
  .word 0x00111880
  .word 0x00711821
  .word 0x000318c0
  .word 0x00711823
  .word 0x000320c0
  .word 0x3c030087
  .word 0x2463be80
  .word 0x00648021
  .word 0x8e030000
  .word 0x1060006c
  .word 0x00000000
  .word 0x0000a82d
  .word 0x10000066
  .word 0x00000000
  .word 0xc602010c
  .word 0xc6010110
  .word 0xc6000114
  .word 0xe7a200d0
  .word 0xe7a100d4
  .word 0xe7a000d8
  .word 0xc7a000d0
  .word 0x3c0342a0
  .word 0x44831000
  .word 0x00000000
  .word 0x46020001
  .word 0xe7a000d0
  .word 0x44950000
  .word 0x00000000
  .word 0x46800060
  .word 0x44800000
  .word 0x00000000
  .word 0x46150018
  .word 0x4601105c
  .word 0xc7a000d8
  .word 0x46010000
  .word 0xe7a000d8
  .word 0x0000f02d
  .word 0x10000049
  .word 0x00000000
  .word 0x0000b02d
  .word 0x0c068094
  .word 0x00000000
  .word 0x10400013
  .word 0x00000000
  .word 0x3c0243c8
  .word 0x44820800
  .word 0xc7a000d0
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
  .word 0x0002b083
  .word 0x04410003
  .word 0x00000000
  .word 0x24420003
  .word 0x0002b083
  .word 0x0000b82d
  .word 0x0c068094
  .word 0x00000000
  .word 0x10400013
  .word 0x00000000
  .word 0x3c0343c8
  .word 0x44830800
  .word 0xc7a000d8
  .word 0x46000800
  .word 0x46000024
  .word 0x46800060
  .word 0x3c034448
  .word 0x44830000
  .word 0x00000000
  .word 0x46000803
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0x0003b883
  .word 0x04610003
  .word 0x00000000
  .word 0x24630003
  .word 0x0003b883
  .word 0x16d30012
  .word 0x00000000
  .word 0x16f40010
  .word 0x00000000
  .word 0x2a430018
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843940
  .word 0x240509d0
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00122080
  .word 0x8fa300c0
  .word 0x00641821
  .word 0xac700060
  .word 0x26520001
  .word 0x1000000f
  .word 0x00000000
  .word 0x27de0001
  .word 0xc7a100d0
  .word 0x3c0342a0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a000d0
  .word 0x2bc30003
  .word 0x1460ffb6
  .word 0x00000000
  .word 0x26b50001
  .word 0x2aa30003
  .word 0x1460ff99
  .word 0x00000000
  .word 0x26310001
  .word 0x2a230020
  .word 0x1460ff87
  .word 0x00000000
  .word 0x3c030087
  .word 0x8c64e580
  .word 0x24030001
  .word 0x14830039
  .word 0x00000000
  .word 0x0000802d
  .word 0x0c068094
  .word 0x00000000
  .word 0x10400014
  .word 0x00000000
  .word 0x3c0243c8
  .word 0x44820800
  .word 0x3c020087
  .word 0xc440e684
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
  .word 0x0000882d
  .word 0x0c068094
  .word 0x00000000
  .word 0x10400014
  .word 0x00000000
  .word 0x3c0343c8
  .word 0x44830800
  .word 0x3c030087
  .word 0xc460e68c
  .word 0x46000800
  .word 0x46000024
  .word 0x46800060
  .word 0x3c034448
  .word 0x44830000
  .word 0x00000000
  .word 0x46000803
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0x00038883
  .word 0x04610003
  .word 0x00000000
  .word 0x24630003
  .word 0x00038883
  .word 0x16130007
  .word 0x00000000
  .word 0x16340005
  .word 0x00000000
  .word 0x3c040087
  .word 0x2484e580
  .word 0x8fa300c0
  .word 0xac6400c0
  .word 0x26730001
  .word 0x2a630004
  .word 0x1460feab
  .word 0x00000000
  .word 0x26940001
  .word 0x2a830004
  .word 0x1460fe9b
  .word 0x00000000
  .word 0x0000382d
  .word 0x3c040087
  .word 0x2484b180
  .word 0x240b0004
  .word 0x3c0d0087
  .word 0x25adeda0
  .word 0x10000033
  .word 0x00000000
  .word 0x0000302d
  .word 0x000718c0
  .word 0x00672823
  .word 0x000518c0
  .word 0x00651823
  .word 0x00031900
  .word 0x00831821
  .word 0x10000026
  .word 0x00000000
  .word 0x0000482d
  .word 0x0000282d
  .word 0x1000001e
  .word 0x00000000
  .word 0x000940c0
  .word 0x01094023
  .word 0x00084180
  .word 0x01a86021
  .word 0x8d880048
  .word 0x11000016
  .word 0x00000000
  .word 0x8d88018c
  .word 0x150b0013
  .word 0x00000000
  .word 0x000640c0
  .word 0x01064823
  .word 0x000940c0
  .word 0x01094023
  .word 0x00084080
  .word 0x00685021
  .word 0x10000002
  .word 0x00000000
  .word 0x24a50001
  .word 0x00054080
  .word 0x01484821
  .word 0x8d280000
  .word 0x00000000
  .word 0x1500fffa
  .word 0x00000000
  .word 0xad2c0000
  .word 0x10000005
  .word 0x00000000
  .word 0x25290001
  .word 0x29280018
  .word 0x1500ffe1
  .word 0x00000000
  .word 0x24c60001
  .word 0x28c50004
  .word 0x14a0ffd9
  .word 0x00000000
  .word 0x24e70001
  .word 0x28e30004
  .word 0x1460ffcc
  .word 0x00000000
  .word 0x1000004b
  .word 0x00000000
  .word 0x0000882d
  .word 0x0000902d
  .word 0x10000019
  .word 0x00000000
  .word 0x001218c0
  .word 0x00721823
  .word 0x00032180
  .word 0x3c030087
  .word 0x2463eda0
  .word 0x00648021
  .word 0x8e030048
  .word 0x1060000f
  .word 0x00000000
  .word 0x2a230018
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843940
  .word 0x24050a47
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00112080
  .word 0x3c030087
  .word 0x2463b180
  .word 0x00641821
  .word 0xac700000
  .word 0x26310001
  .word 0x26520001
  .word 0x2a430018
  .word 0x1460ffe6
  .word 0x00000000
  .word 0x0000882d
  .word 0x0000902d
  .word 0x1000001c
  .word 0x00000000
  .word 0x00121880
  .word 0x00721821
  .word 0x000318c0
  .word 0x00721823
  .word 0x000320c0
  .word 0x3c030087
  .word 0x2463be80
  .word 0x00648021
  .word 0x8e040000
  .word 0x24030001
  .word 0x1483000f
  .word 0x00000000
  .word 0x2a230018
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843940
  .word 0x24050a52
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00112080
  .word 0x3c030087
  .word 0x2463b180
  .word 0x00641821
  .word 0xac700060
  .word 0x26310001
  .word 0x26520001
  .word 0x2a430020
  .word 0x1460ffe3
  .word 0x00000000
  .word 0x3c030087
  .word 0x8c64e580
  .word 0x24030001
  .word 0x14830005
  .word 0x00000000
  .word 0x3c040087
  .word 0x2484e580
  .word 0x3c030087
  .word 0xac64b240
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
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00f0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_dead_assignments reset

// Measured opt_lifetimes on: nd425 -> 424, object 1024/1056; stacked opt_loop_invariants on + opt_lifetimes on: nd425 -> 424, object 1024/1056; retained (under window).
/* Removing this worsens FUN_001d32a0 (nd588 -> nd637) - measured W161. */
#pragma opt_loop_invariants on
#pragma opt_lifetimes on
// FUN_001d32a0
asm void* func_001d32a0(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x8c90003c
  .word 0x8f84a850
  .word 0x8c830000
  .word 0x2402000e
  .word 0x14620008
  .word 0x00000000
  .word 0x8c830004
  .word 0x24020005
  .word 0x14620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000e8
  .word 0x00000000
  .word 0x8e020004
  .word 0x24040001
  .word 0x14440004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000e1
  .word 0x00000000
  .word 0x8e020008
  .word 0x14440004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000db
  .word 0x00000000
  .word 0x8e030000
  .word 0x24020002
  .word 0x10620081
  .word 0x00000000
  .word 0x10640066
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000d0
  .word 0x00000000
  .word 0x0c068094
  .word 0x00000000
  .word 0x24030001
  .word 0x1443001f
  .word 0x00000000
  .word 0x0000982d
  .word 0x0000882d
  .word 0x10000014
  .word 0x00000000
  .word 0x0000902d
  .word 0x0013aa00
  .word 0x1000000c
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x02a21821
  .word 0x00121100
  .word 0x00621021
  .word 0x90430048
  .word 0x24020001
  .word 0x14620002
  .word 0x00000000
  .word 0x26310001
  .word 0x26520001
  .word 0x2a420010
  .word 0x1440fff3
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620010
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x00111080
  .word 0x00511021
  .word 0x00021040
  .word 0xae02000c
  .word 0xaf80b59c
  .word 0x8f91a850
  .word 0x0c06ffc8
  .word 0x00000000
  .word 0x3046ffff
  .word 0x96240000
  .word 0x96250004
  .word 0x0c075d7c
  .word 0x00000000
  .word 0x0040882d
  .word 0x0c070010
  .word 0x00000000
  .word 0x24030004
  .word 0x10430028
  .word 0x00000000
  .word 0x24030003
  .word 0x1043001c
  .word 0x00000000
  .word 0x24050002
  .word 0x10450013
  .word 0x00000000
  .word 0x24030001
  .word 0x10430005
  .word 0x00000000
  .word 0x1040001d
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x00118840
  .word 0x2e210013
  .word 0x14200002
  .word 0x00000000
  .word 0x24110012
  .word 0x0280202d
  .word 0x24050002
  .word 0x0c074e34
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x0000882d
  .word 0x0280202d
  .word 0x0c074e34
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x00118840
  .word 0x2e210013
  .word 0x14200002
  .word 0x00000000
  .word 0x24110012
  .word 0x0280202d
  .word 0x24050002
  .word 0x0c074e34
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0741c8
  .word 0x00000000
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x1000006f
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000000a
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c073f74
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000006
  .word 0x00000000
  .word 0x26310001
  .word 0x2a220018
  .word 0x1440fff5
  .word 0x00000000
  .word 0x24020001
  .word 0x1040005d
  .word 0x00000000
  .word 0x0c074a84
  .word 0x00000000
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x10000056
  .word 0x00000000
  .word 0x8f91a850
  .word 0x0c06ffc8
  .word 0x00000000
  .word 0x3046ffff
  .word 0x96240000
  .word 0x96250004
  .word 0x0c075db8
  .word 0x00000000
  .word 0x0040882d
  .word 0x0c070010
  .word 0x00000000
  .word 0x24030004
  .word 0x10430015
  .word 0x00000000
  .word 0x24030003
  .word 0x10430011
  .word 0x00000000
  .word 0x24030002
  .word 0x1043000b
  .word 0x00000000
  .word 0x24030001
  .word 0x10430005
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000005
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000002
  .word 0x00000000
  .word 0x0000882d
  .word 0x8f82b59c
  .word 0x0051082b
  .word 0x10200008
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0741c8
  .word 0x00000000
  .word 0x18400003
  .word 0x00000000
  .word 0x24020001
  .word 0xae020000
  .word 0x8e04000c
  .word 0x8e030010
  .word 0x2402001e
  .word 0x0062001b
  .word 0x00001012
  .word 0x0082082b
  .word 0x1020001e
  .word 0x00000000
  .word 0x1080001c
  .word 0x00000000
  .word 0x8e020014
  .word 0x14400019
  .word 0x00000000
  .word 0x27a40070
  .word 0x0c114804
  .word 0x00000000
  .word 0x27a50080
  .word 0xc7a20070
  .word 0xc7a10074
  .word 0xc7a00078
  .word 0xe7a20080
  .word 0xe7a10084
  .word 0xe7a00088
  .word 0x24040001
  .word 0x0c073f14
  .word 0x00000000
  .word 0x24041423
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x8e020014
  .word 0x24420001
  .word 0xae020014
  .word 0x24020001
  .word 0xae020000
  .word 0x10000004
  .word 0x00000000
  .word 0x8e020010
  .word 0x24420001
  .word 0xae020010
  .word 0x0000102d
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_lifetimes reset
#pragma opt_loop_invariants reset

// FUN_001d36c0
void func_001d36c0(KwlnTask* task)
{
    ((void (*)(void*))DAT_0096017c[0])(task->workData);
}

// FUN_001d36f0
KwlnTask* func_001d36f0(KwlnTask* parent)
{
    s32* work;
    KwlnTask* task;

    work = (s32*)((void* (*)(u32, u32, u32))DAT_00960184[0])(1, 0x18, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = (KwlnTask*)func_00194b80(parent, 10, DAT_006839a0,
                                    func_001d32a0, func_001d36c0, work);
    datSetFlag(0x1423, 0);
    return task;
}

// FUN_001d3790
u32 func_001d3790(KwlnTask* task)
{
    s32* work;

    work = (s32*)task->workData;
    if (piGpffffa850[0] == 0xe && piGpffffa850[1] == 5)
    {
        return 1;
    }
    if (work[0] == 2)
    {
        return 1;
    }
    return 0;
}

// FUN_001d37f0
void func_001d37f0(KwlnTask* task, u32 value)
{
    if (task != NULL)
    {
        ((s32*)task->workData)[1] = value;
    }
}

// FUN_001d3810
void func_001d3810(KwlnTask* task, u32 value)
{
    if (task != NULL)
    {
        ((s32*)task->workData)[2] = value;
    }
}

#pragma push
// FUN_001d3830
s32 func_001d3830(KwlnTask* task)
{
    s32 remaining;
    s32 result;

    result = -1;
    if (((s32*)task->workData)[3] == 0)
    {
        result = -1;
    }
    else
    {
        remaining = func_001d38a0(task);
        if (remaining == 0)
        {
            result = 2;
        }
        else if (remaining < 0x3c)
        {
            result = 1;
        }
    }
    return result;
}
#pragma pop

// FUN_001d38a0
s32 func_001d38a0(KwlnTask* task)
{
    s32* work;
    s32 remaining;

    work = (s32*)task->workData;
    remaining = work[3];
    remaining -= (s32)((u32)work[4] / 0x1e);
    return remaining < 0 ? 0 : remaining;
}

// FUN_001d38d0
void func_001d38d0(KwlnTask* task, s32 multiplier)
{
    s32* work;
    typedef struct KUnitGridValue
    {
        u8 reserved[0x48];
        u8 value;
    } KUnitGridValue;
    s32 i;
    s32 j;
    s32 count;
    s32 rowOffset;

    work = (s32*)task->workData;
    if (K_Scene_001a0250() == 1)
    {
        i = 0;
        count = 0;
        while (i < 0x10)
        {
            j = 0;
            rowOffset = i * 0x100;
            while (j < 0x10)
            {
                KUnitGridValue* gridValue;

                gridValue = (KUnitGridValue*)((u32)rowOffset +
                                             (u32)func_001b9120());
                gridValue = (KUnitGridValue*)((u8*)gridValue + j * 0x10);
                if (gridValue->value == 1)
                {
                    count++;
                }
                j++;
            }
            i++;
        }
        if ((u32)(count * multiplier) < (u32)work[3])
        {
            work[3] = count * multiplier;
        }
    }
}

#pragma push
#pragma opt_propagation off
// FUN_001d39c0
void func_001d39c0(KwlnTask* task)
{
    s32* work;
    RwV3d spawnPos;
    RwV3d* spawnPosPtr;
    RwV3d position;
    f32 x;
    f32 y;
    f32 z;

    work = (s32*)task->workData;
    func_00452010(&position);
    spawnPosPtr = &spawnPos;
    x = position.x;
    y = position.y;
    z = position.z;
    spawnPos.x = x;
    spawnPos.y = y;
    spawnPos.z = z;
    K_FldUnit_CreateReaper(1, spawnPosPtr);
    work[5]++;
    work[0] = 1;
}
#pragma pop

// FUN_001d3a30
void* func_001d3a30(KwlnTask* task)
{
    s32* work;
    f32 phase;
    RwRGBA color;

    work = (s32*)task->workData;
    phase = func_0052e878(fGpffff8248 * (f32)work[2] / 30.0f);
    color.r = (u8)(phase * 100.0f + 120.0f);
    color.g = (u8)(80.0f - phase * 30.0f);
    color.b = (u8)(phase * 40.0f + 120.0f);
    color.a = 0xff;
    work[2]++;
    if (work[2] > 0x1e) work[2] = 0;
    func_00318ad0((void*)work[1], &color);
    return NULL;
}

// FUN_001d3c10
void func_001d3c10(KwlnTask* task)
{
    ((void (*)(void*))DAT_0096017c[0])(task->workData);
}

// FUN_001d3c40
KwlnTask* func_001d3c40(KwlnTask* parent, u32 model)
{
    s32* work;
    KwlnTask* task;

    work = (s32*)((void* (*)(u32, u32, u32))DAT_00960184[0])(1, 0x0c, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = (KwlnTask*)func_00194b80(parent, 10, DAT_006839c0,
                                    func_001d3a30, func_001d3c10, work);
    work[1] = model;
    return task;
}

// FUN_001d3ce0
void* func_001d3ce0(KwlnTask* task)
{
    s32* work;
    RwV3d pos;
    RwRGBA colors[2];
    u32 status;
    u32 now;
    u32 deadline;
    u32 hp;
    s32 damage;
    s32 finalDamage;
    s16 pcId;
    u8* scene;
    s8* colorSrc;
    s8* colorDst;
    s32 i;
    s8 color0;
    s8 color1;

    u8* colorData;
    work = (s32*)task->workData;
    colorSrc = (s8*)gp0xffff95d0;
    colorDst = (s8*)colors;
    i = 4;
    do
    {
        color0 = colorSrc[0];
        color1 = colorSrc[1];
        colorSrc += 2;
        i--;
        colorDst[0] = color0;
        colorDst[1] = color1;
        colorDst += 2;
    } while (i > 0);
    status = func_0016c970((s16)((FldUnit*)work[1])->charId);
    if ((status & 0x80) != 0 &&
        !(piGpffffa850[0] == 0x20 && piGpffffa850[1] == 2) &&
        !(piGpffffa850[0] == 0x27 && piGpffffa850[1] == 3))
    {
        if (work[2] == 0)
        {
            if (func_00318ed0(((FldUnit*)work[1])->mdl, 2, &pos) == 0)
            {
                pos = ((RwMatrix*)func_00318b60(((FldUnit*)work[1])->mdl))->pos;
                pos.y += 200.0f;
            }
            scene = func_001b9120();
            work[3] = (s32)func_001a91b0(*(void**)(scene + 0x11f8), &pos);
            scene = func_001b9120();
            func_001a9390(*(void**)(scene + 0x11f8), (void*)work[3], 3);
            work[4] = func_001ad930(((FldUnit*)work[1])->resrc->collisCtlTask);
            work[2] = 1;
            goto done;
        }
        if (func_00318ed0(((FldUnit*)work[1])->mdl, 2, &pos) == 0)
        {
            pos = ((RwMatrix*)func_00318b60(((FldUnit*)work[1])->mdl))->pos;
            pos.y += 200.0f;
        }
        deadline = (u32)work[4] + 0x960;
        now = func_001ad930(((FldUnit*)work[1])->resrc->collisCtlTask);
        if (deadline < now)
        {
            hp = func_0016c5f0((s16)((FldUnit*)work[1])->charId);
            damage = (s32)(f32)hp;
            damage = (s32)((f32)damage / 20.0f);
            if (damage < 1) damage = 1;
            finalDamage = (s32)func_0016c4f0((s16)((FldUnit*)work[1])->charId) - damage;
            pcId = (s16)((FldUnit*)work[1])->charId;
            if (finalDamage < 1) finalDamage = 1;
            func_0016cf40(pcId, (s16)finalDamage);
            work[4] = func_001ad930(
                ((FldUnit*)work[1])->resrc->collisCtlTask);
        }
        {
            RwRGBA sourceColor;
            colorData = (u8*)func_00318b00(((FldUnit*)work[1])->mdl);
            sourceColor = *(RwRGBA*)colorData;
            colors[1].a = sourceColor.a;
        }
        func_00318ad0(((FldUnit*)work[1])->mdl, &colors[1]);
        scene = func_001b9120();
        func_001a92d0(*(void**)(scene + 0x11f8), (void*)work[3], &pos);
    }
    else
    {
        {
            RwRGBA sourceColor;
            colorData = (u8*)func_00318b00(((FldUnit*)work[1])->mdl);
            sourceColor = *(RwRGBA*)colorData;
            colors[0].a = sourceColor.a;
        }
        func_00318ad0(((FldUnit*)work[1])->mdl, &colors[0]);
        if (work[2] == 1)
        {
            work[2] = 0;
            scene = func_001b9120();
            func_001a9400(*(void**)(scene + 0x11f8), (void*)work[3]);
        }
    }
done:
    return NULL;
}

// FUN_001d40b0
void func_001d40b0(KwlnTask* task)
{
    ((void (*)(void*))DAT_0096017c[0])(task->workData);
}

// FUN_001d40e0
KwlnTask* func_001d40e0(KwlnTask* parent, FldUnit* unit)
{
    s32* work;
    KwlnTask* task;

    work = (s32*)((void* (*)(u32, u32, u32))DAT_00960184[0])(1, 0x14, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = (KwlnTask*)func_00194b80(parent, 10, DAT_006839d8,
                                    func_001d3ce0, func_001d40b0, work);
    work[1] = (s32)unit;
    return task;
}

// Address-expression probe floor: retained nd7 form; typed byte/base-local and postTask shapes measured worse (nd23, nd62-64, nd171). Residuals are offsets 164/168 (task load/branch register) and 196/200 (clear-address addu/reload versus retail base addu/addiu).
/* W421 address-lifetime probes: direct task-slot check nd117/object256/window272
 * (0.457031); postUnit element local nd171/object244/window272 (0.700820);
 * both reverted; retained nd7/object260/window272 (0.026923). */
/* W423 task-slot role probes: an outer FldUnit base local stayed
 * nd7/object260/window272 (0.026923); a cached KwlnTask local worsened
 * nd64/object240/window272 (0.266667), both reverted. */
// FUN_001d4180
asm void func_001d4180(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0000802d
  .word 0x10000030
  .word 0x00000000
  .word 0x0000282d
  .word 0x001018c0
  .word 0x00701823
  .word 0x00032180
  .word 0x3c030087
  .word 0x246317a0
  .word 0x00642021
  .word 0x8c830048
  .word 0x10600005
  .word 0x00000000
  .word 0x8c830054
  .word 0x10600002
  .word 0x00000000
  .word 0x24050001
  .word 0x0005182b
  .word 0x1060001e
  .word 0x00000000
  .word 0x24920180
  .word 0x8c830180
  .word 0x1060001a
  .word 0x00000000
  .word 0x8c71003c
  .word 0x8e240008
  .word 0x24030001
  .word 0x14830008
  .word 0x00000000
  .word 0xae200008
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4411f8
  .word 0x8e25000c
  .word 0x0c06a500
  .word 0x00000000
  .word 0x8e440000
  .word 0x1080000b
  .word 0x00000000
  .word 0x001010c0
  .word 0x00501023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x24510180
  .word 0x0c065408
  .word 0x00000000
  .word 0xae200000
  .word 0x26100001
  .word 0x2a030004
  .word 0x1460ffcf
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_001d4290
void func_001d4290(void)
{
    char path[128];
    HCdvd* object;
    u32 fileSize;
    void* fileMemory;

    if (func_0017d800() == 0)
    {
        func_00523ac8(path, DAT_006839f0);
    }
    else
    {
        func_00523ac8(path, DAT_00683a10);
    }
    if (func_001008b0(path) != 0)
    {
        object = (HCdvd*)func_00100d80(path, 0);
        func_001023a0(object);
        DAT_007ce290 = DAT_00871ec0;
        fileSize = ((volatile /* Removing this function's qualifier batch loses func_001d4290 (MATCH nd0 -> MISMATCH nd4, size 200 -> 200) - measured W170. */ HCdvd*)object)->fileSize;
        fileMemory = ((volatile /* Removing this function's qualifier batch loses func_001d4290 (MATCH nd0 -> MISMATCH nd4, size 200 -> 200) - measured W170. */ HCdvd*)object)->fileMemory;
        func_00521250(DAT_00871ec0, fileMemory, fileSize);
        DAT_007ce294 = DAT_007ce290 + 0x180;
        func_00100ec0(object);
    }
}
