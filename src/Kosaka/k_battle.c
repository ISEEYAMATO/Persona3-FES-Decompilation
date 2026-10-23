#include "Kosaka/Field/k_encount.h"
#include "Kosaka/Field/k_field.h"
#include "Kosaka/Field/k_unit.h"
#include "Kosaka/Field/k_fldFrame.h"
#include "Kosaka/Field/k_event.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Graphics/Model/mdlManager.h"
#include "Main/g_data.h"
#include "Main/Battle/Data/datUnit.h"
#include "Main/Battle/Data/datPersona.h"
#include "Scene/resrcManager.h"
#include "Kosaka/k_assert.h"
#include "Script/scrScriptProcess.h"
#include "Scene/mt_scene.h"
#include "rw/rprandom.h"
#include "libm.h"







extern void* memset(void* dst, int value, u32 count);
extern s32 func_001c0040(void);
extern u32 RpRandom(void);
#pragma alias jtbl_0096017C_abs jtbl_0096017C
extern u32 jtbl_0096017C_abs[];

extern u8* DAT_007ce4ac;
extern u8* DAT_007ce4b0;
extern u8* DAT_007ce4b4;
extern u8* DAT_007ce4b8;
extern u32 iGpffffb418;
extern s32* PTR_DAT_007cd540;
extern RwMatrix* func_004c38c0(void);
extern void func_004c3880(RwMatrix* matrix);
extern f32 func_004c69f0(RwV3d* out, const RwV3d* in);
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
extern void* func_001a9180(KwlnTask* task);
extern void* func_001a91b0(KwlnTask* task, const RwV3d* position);
extern void func_001a9390(KwlnTask* task, void* handle, u32 value);
extern void func_001a9400(KwlnTask* task, void* handle);
extern void func_00434f70(void);
extern u32 func_001fc720(DatUnit* unit);
extern void func_001fc590(DatUnit* src, DatUnit* dst);
extern u32 func_002ff790(DatUnitGenusBase* genus);
#pragma alias func_002ffb00_u32 func_002ffb00
extern u32 func_002ffb00_u32(DatUnitGenusBase* genus);
extern u16 func_002ffb00(DatUnitGenusBase* genus);
extern u32 datGetMaxHp(s16 pcId);
extern void func_0035c1a0(KwlnTask* task, int record);
extern ScrHeader* D_007CE220;
extern void func_001b00c0(KwlnTask* task);
extern void func_0010a4e0(s32 bank, s32 cue, s32 variant, s32 pan);

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



/* W423 probes: allocator global alias stayed nd55/object348/window352
 * (0.157670); chained pc/ec count assignment was nd142/object344/window352
 * (0.412791), both reverted. */
// FUN_001d8b00
asm KwlnTask* func_001d8b00(KwlnTask* parent, FldUnit* pc, FldUnit* ec)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0802d
  .word 0x00c0982d
  .word 0x24040001
  .word 0x24050054
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040882d
  .word 0x16200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000003a
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000a
  .word 0x3c060068
  .word 0x24c63b58
  .word 0x3c07001d
  .word 0x24e77d40
  .word 0x3c08001e
  .word 0x250889b0
  .word 0x0220482d
  .word 0x0c0652e0
  .word 0x00000000
  .word 0x0040902d
  .word 0xae300018
  .word 0x24020001
  .word 0xae220010
  .word 0xae330028
  .word 0xae220014
  .word 0x0000802d
  .word 0x3c030087
  .word 0x24635a40
  .word 0x10000009
  .word 0x00000000
  .word 0x00101080
  .word 0x00621021
  .word 0x8c420000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020003
  .word 0x1440fff6
  .word 0x00000000
  .word 0x2410ffff
  .word 0x06010006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843b68
  .word 0x2405029c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xae300004
  .word 0x00101880
  .word 0x3c020087
  .word 0x24425a40
  .word 0x00431021
  .word 0xac520000
  .word 0x24020078
  .word 0xae22003c
  .word 0x8e620048
  .word 0x94430008
  .word 0x240201fa
  .word 0x14620003
  .word 0x00000000
  .word 0x24020001
  .word 0xae220040
  .word 0x0240102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_001d8c60
void func_001d8c60(u32 paused)
{
    s32 i = 0;
    KwlnTask** tasks = D_00875A40;

    for (; i < 3; ++i)
    {
        if (tasks[i] != NULL)
        {
            ((EncounterWork*)tasks[i]->workData)->paused = paused;
        }
    }
}

// FUN_001d8cb0
void func_001d8cb0(void)
{
    memset(D_00875A40, 0, sizeof(KwlnTask*) * 3);
    func_00434f70();
}

// FUN_001d8cf0
void func_001d8cf0(void)
{
    s32 i;
    for (i = 0; i < 3; ++i)
    {
        if (D_00875A40[i] != NULL)
        {
            kwlnTaskDestroyWithHierarchy(D_00875A40[i]);
        }
    }
}

// FUN_001d8d50
u32 func_001d8d50(KwlnTask* task)
{
    return ((EncounterWork*)task->workData)->pcCount;
}

// FUN_001d8d60
FldUnit* func_001d8d60(KwlnTask* task, s32 index)
{
    EncounterWork* work;

    work = (EncounterWork*)task->workData;
    return work->pc[index];
}

// FUN_001d8d80
KwlnTask* func_001d8d80(FldUnit* unit)
{
    KwlnTask** tasks;
    s32 i;
    s32 j;

    if (unit == NULL)
    {
        return NULL;
    }
    i = 0;
    tasks = D_00875A40;
    while (i < 3)
    {
        KwlnTask* task;
        EncounterWork* work;
        s32 count;

        task = tasks[i];
        if (task != NULL)
        {
            work = (EncounterWork*)task->workData;
            j = 0;
            count = work->pcCount;
            while (j < count)
            {
                if (*(FldUnit**)((u8*)work + j * sizeof(FldUnit*) + 0x18) == unit)
                {
                    return task;
                }
                ++j;
            }
            j = 0;
            count = work->ecCount;
            while (j < count)
            {
                if (*(FldUnit**)((u8*)work + j * sizeof(FldUnit*) + 0x28) == unit)
                {
                    return task;
                }
                ++j;
            }
        }
        ++i;
    }
    return NULL;
}

// Retail offsets 0x00-0x4a8 reconstruct unit registration, facing rotation,
// field updates, and active-count aggregation; 1196 of 1200 bytes are implemented.
// FUN_001d8e60
u32 func_001d8e60(KwlnTask* owner, FldUnit* pc, FldUnit* ec)
{
    EncounterWork* work;
    RwV3d delta;
    RwV3d axis;
    RwV3d forward;
    u32 changed;
    RwMatrix* matrix;
    f32 angle;
    s32 i;

    work = (EncounterWork*)owner->workData;
    changed = 0;
    axis = sEncountAxis;
    forward = sEncountForward;
    matrix = func_004c38c0();
    if (pc != NULL)
    {
        work->pc[work->pcCount] = pc;
        work->pcCount += 1;
        mdlAnimSet(pc->mdl, 0, 4, 0, 1);
        func_001b00c0(pc->unk_170);

        delta.x = mdlGetMatrix(work->ec[0]->mdl)->pos.x -
                  mdlGetMatrix(pc->mdl)->pos.x;
        delta.y = mdlGetMatrix(work->ec[0]->mdl)->pos.y -
                  mdlGetMatrix(pc->mdl)->pos.y;
        delta.z = mdlGetMatrix(work->ec[0]->mdl)->pos.z -
                  mdlGetMatrix(pc->mdl)->pos.z;
        RwV3dNormalize(&delta, &delta);
        angle = sDegreesPerRadian *
                acosf(delta.x * forward.x +
                      delta.y * forward.y +
                      delta.z * forward.z);
        if (delta.x < 0.0f)
        {
            angle *= -1.0f;
        }

        matrix->at.z = 1.0f;
        matrix->up.y = 1.0f;
        matrix->right.x = 1.0f;
        matrix->up.x = 0.0f;
        matrix->right.z = 0.0f;
        matrix->right.y = 0.0f;
        matrix->at.y = 0.0f;
        matrix->at.x = 0.0f;
        matrix->up.z = 0.0f;
        matrix->pos.z = 0.0f;
        matrix->pos.y = 0.0f;
        matrix->pos.x = 0.0f;
        matrix->flags |= 0x20003;
        RwMatrixRotate(matrix, &axis, angle, rwCOMBINEPRECONCAT);
        K_FldFrame_CtlUpdateMdlMat(pc->resrc->collisCtlTask, matrix);
        if (*(KwlnTask**)((u8*)K_Field_Get() + 0x28) != NULL)
        {
            func_0018bee0(
                *(KwlnTask**)((u8*)K_Field_Get() + 0x28), pc->charId, 1);
        }
        changed = 1;
    }
    if (ec != NULL)
    {
        work->ec[work->ecCount] = ec;
        work->ecCount += 1;
        mdlAnimSet(ec->mdl, 0, 3, 0, 1);
        func_001b00c0(ec->unk_170);

        delta.x = mdlGetMatrix(work->pc[0]->mdl)->pos.x -
                  mdlGetMatrix(ec->mdl)->pos.x;
        delta.y = mdlGetMatrix(work->pc[0]->mdl)->pos.y -
                  mdlGetMatrix(ec->mdl)->pos.y;
        delta.z = mdlGetMatrix(work->pc[0]->mdl)->pos.z -
                  mdlGetMatrix(ec->mdl)->pos.z;
        RwV3dNormalize(&delta, &delta);
        angle = sDegreesPerRadian *
                acosf(delta.x * forward.x +
                      delta.y * forward.y +
                      delta.z * forward.z);
        if (delta.x < 0.0f)
        {
            angle *= -1.0f;
        }

        matrix->at.z = 1.0f;
        matrix->up.y = 1.0f;
        matrix->right.x = 1.0f;
        matrix->up.x = 0.0f;
        matrix->right.z = 0.0f;
        matrix->right.y = 0.0f;
        matrix->at.y = 0.0f;
        matrix->at.x = 0.0f;
        matrix->up.z = 0.0f;
        matrix->pos.z = 0.0f;
        matrix->pos.y = 0.0f;
        matrix->pos.x = 0.0f;
        matrix->flags |= 0x20003;
        RwMatrixRotate(matrix, &axis, angle, rwCOMBINEPRECONCAT);
        K_FldFrame_CtlUpdateMdlMat(ec->resrc->collisCtlTask, matrix);
        changed = 1;
    }
    if (changed == 1)
    {
        EncounterWork* activeWork;

        activeWork = (EncounterWork*)owner->workData;
        activeWork->pcTotal = activeWork->pcCount;
        activeWork->ecTotal = 0;
        i = 0;
        while (i < (s32)activeWork->ecCount)
        {
            activeWork->ecTotal +=
                ((EncounterWork*)((u8*)activeWork +
                    i * sizeof(activeWork->ec[0])))->ec[0]->genusBase->count;
            i += 1;
        }
        activeWork->totalActive = activeWork->pcTotal + activeWork->ecTotal;
    }
    func_004c3880(matrix);
    return changed;
}

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

// FUN_001d9310
#ifndef PC_BUILD
asm u32 func_001d9310(EncounterRecord* out)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080982d
  .word 0x0000882d
  .word 0x0000282d
  .word 0x24060010
  .word 0x0c148502
  .word 0x00000000
  .word 0x24120001
  .word 0x10000052
  .word 0x00000000
  .word 0x0000282d
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x8c440048
  .word 0x10800005
  .word 0x00000000
  .word 0x8c420054
  .word 0x10400002
  .word 0x00000000
  .word 0x24050001
  .word 0x0005102b
  .word 0x10400040
  .word 0x00000000
  .word 0x0c0bfde4
  .word 0x00000000
  .word 0x24030001
  .word 0x1043003b
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x245001a8
  .word 0x844401a8
  .word 0x0c05b17c
  .word 0x00000000
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800520
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800520
  .word 0x4614a500
  .word 0x86040000
  .word 0x0c05b13c
  .word 0x00000000
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x00000000
  .word 0x00000000
  .word 0x46140043
  .word 0x00000000
  .word 0xc7808390
  .word 0x46000834
  .word 0x4500000a
  .word 0x00000000
  .word 0x96030000
  .word 0x8e620000
  .word 0x00021080
  .word 0x02621021
  .word 0xac430004
  .word 0x8e620000
  .word 0x24420001
  .word 0xae620000
  .word 0x24110001
  .word 0x26520001
  .word 0x2a420004
  .word 0x1440ffad
  .word 0x00000000
  .word 0x0220102d
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001d94d0
#ifndef PC_BUILD
asm u32 func_001d94d0(EncounterRecord* out)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x0000902d
  .word 0x0000282d
  .word 0x24060010
  .word 0x0c148502
  .word 0x00000000
  .word 0x24130001
  .word 0x10000054
  .word 0x00000000
  .word 0x0000202d
  .word 0x001310c0
  .word 0x00531023
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
  .word 0x10400042
  .word 0x00000000
  .word 0x247101a8
  .word 0x846401a8
  .word 0x0c05b25c
  .word 0x00000000
  .word 0x30420080
  .word 0x1040003b
  .word 0x00000000
  .word 0x001310c0
  .word 0x00531023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x245001a8
  .word 0x844401a8
  .word 0x0c05b17c
  .word 0x00000000
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800520
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800520
  .word 0x4614a500
  .word 0x86040000
  .word 0x0c05b13c
  .word 0x00000000
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x00000000
  .word 0x00000000
  .word 0x46140043
  .word 0x00000000
  .word 0xc7808390
  .word 0x46000834
  .word 0x4501000a
  .word 0x00000000
  .word 0x96230000
  .word 0x8e820000
  .word 0x00021080
  .word 0x02821021
  .word 0xac430004
  .word 0x8e820000
  .word 0x24420001
  .word 0xae820000
  .word 0x24120001
  .word 0x26730001
  .word 0x2a620004
  .word 0x1440ffab
  .word 0x00000000
  .word 0x0240102d
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001d96a0
#ifndef PC_BUILD
asm u32 func_001d96a0(EncounterRecord* out)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080982d
  .word 0x0000882d
  .word 0x0000282d
  .word 0x24060010
  .word 0x0c148502
  .word 0x00000000
  .word 0x24120001
  .word 0x10000051
  .word 0x00000000
  .word 0x0000202d
  .word 0x001210c0
  .word 0x00521023
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
  .word 0x1040003f
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00431021
  .word 0x245001a8
  .word 0x844401a8
  .word 0x0c05b17c
  .word 0x00000000
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800520
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800520
  .word 0x4614a500
  .word 0x86040000
  .word 0x0c05b13c
  .word 0x00000000
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x00000000
  .word 0x00000000
  .word 0x46140043
  .word 0x00000000
  .word 0xc7808390
  .word 0x46000834
  .word 0x4501000e
  .word 0x00000000
  .word 0xc78080c4
  .word 0x46000834
  .word 0x4500000a
  .word 0x00000000
  .word 0x96030000
  .word 0x8e620000
  .word 0x00021080
  .word 0x02621021
  .word 0xac430004
  .word 0x8e620000
  .word 0x24420001
  .word 0xae620000
  .word 0x24110001
  .word 0x26520001
  .word 0x2a420004
  .word 0x1440ffae
  .word 0x00000000
  .word 0x0220102d
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


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
// W419 rejected probes (verify.py; nd/object/window and nd/object rate):
// func_001d8b00 ecCount literal: 55/348/352 (0.1580) -> 137/344/352 (0.3983); bound-first or explicit-loop shape: 56/348/352 (0.1609); combined: 139/344/352 (0.4041).
// func_001d9310 charId pointer: 203/436/448 (0.4656) -> 272/448/448 (0.6071).
// dataGetMaxHp u16 declaration variants: func_001d9310 203/436 (0.4656) -> 220/440 (0.5000), func_001d94d0 280/416 (0.6731) -> 294/420 (0.7000), func_001d96a0 208/440 (0.4727) -> 273/444 (0.6149).
