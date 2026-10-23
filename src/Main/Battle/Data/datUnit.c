#include "Main/g_data.h"
#include "Battle/battle.h"
#include "Kosaka/k_assert.h"
#include "rw/rwplcore.h"
#include "temporary.h"
#include "Main/Battle/Data/datCalc.h"

extern u8* DAT_007CE410;
extern void func_00301540(DatUnit* unit, u8 index);

typedef struct DatEnemyUnitInit
{
    u16 flags;
    u8 unknown02;
    u8 level;
    u16 hp;
    u16 sp;
    u8 unknown08[6];
    u16 skills[8];
    u8 unknown1E[32];
} DatEnemyUnitInit;

// FUN_002ff340
DatUnitPc* datUnitCreatePc(u16 pcId)
{
    DatUnitPc* pc;

    pc = RwMalloc(sizeof(DatUnitPc), rwMEMHINTDUR_GLOBAL);
    memset(pc, 0, sizeof(DatUnitPc));

    pc->base.genus = UNIT_GENUS_PC;
    pc->base.count = 1;
    pc->base.unit = datGetUnit(pcId);

    datUnitInit(pc->base.unit, UNIT_GENUS_PC, pcId);

    return pc;
}

/* Removing this worsens FUN_002ff3e0 (nd12 -> nd169) - measured W161. */
#pragma opt_loop_invariants on
// MWCC b210 register-colouring floor: the residual is a consistent $s0/$s1 swap across
// the two u16 loop/index lifetimes; the loop-invariant setting above is the measured best form.
/* W389 sweep: six singles and all 15 knob pairs were neutral; final nd12/object348/352. */
// FUN_002ff3e0
#ifndef PC_BUILD
asm DatUnitEc* datUnitCreateEc(u16 encountId)
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
  .word 0x0000202d
  .word 0x3243ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x00028880
  .word 0x8f82b7b8
  .word 0x00511821
  .word 0x1000000b
  .word 0x00000000
  .word 0x3082ffff
  .word 0x00021040
  .word 0x00621021
  .word 0x94420008
  .word 0x10400003
  .word 0x00000000
  .word 0x26020001
  .word 0x3050ffff
  .word 0x24820001
  .word 0x3044ffff
  .word 0x3082ffff
  .word 0x2c420005
  .word 0x1440fff3
  .word 0x00000000
  .word 0x24040174
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040982d
  .word 0x0260202d
  .word 0x0000282d
  .word 0x24060174
  .word 0x0c148502
  .word 0x00000000
  .word 0x24020001
  .word 0xa6620000
  .word 0xa6700002
  .word 0xa6720008
  .word 0x2662000c
  .word 0xae620004
  .word 0x0000902d
  .word 0x0000802d
  .word 0x10000016
  .word 0x00000000
  .word 0x8f82b7b8
  .word 0x02221821
  .word 0x3202ffff
  .word 0x00021040
  .word 0x00621021
  .word 0x94460008
  .word 0x10c0000c
  .word 0x00000000
  .word 0x3243ffff
  .word 0x00031100
  .word 0x00431023
  .word 0x00021880
  .word 0x8e620004
  .word 0x00432021
  .word 0x24050001
  .word 0x0c0bfe24
  .word 0x00000000
  .word 0x26420001
  .word 0x3052ffff
  .word 0x26020001
  .word 0x3050ffff
  .word 0x3202ffff
  .word 0x2c420005
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x0260102d
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
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants off

// FUN_002ff540
DatUnit* datUnitEcAddEnemy(DatUnitEc* ec, u16 id)
{
    u16 i;
    DatUnit* curr;

    K_ASSERT(ec->base.genus == UNIT_GENUS_EC, 100);
    K_ASSERT(ec->base.count < 6, 101);

    for (i = 0; i < 6; i++)
    {
        curr = &ec->base.unit[i];

        if (curr->id == 0)
        {
            datUnitInit(curr, UNIT_GENUS_EC, id);
            ec->base.count++;

            break;
        }
    }

    K_ASSERT(i < 6, 117);

    return curr;
}

// FUN_002ff660
void datUnitEcRemoveEnemy(DatUnitEc* ec, DatUnit* unit)
{
    u16 i;
    DatUnit* curr;

    K_ASSERT(ec->base.genus == UNIT_GENUS_EC, 134);
    K_ASSERT(ec->base.count <= 6, 135);

    for (i = 0; i < 6; i++)
    {
        curr = &ec->base.unit[i];

        if (unit == curr)
        {
            curr->id = 0;
            ec->base.count--;

            break;
        }
    }

    K_ASSERT(i < 6, 147);
}

// FUN_002ff760
void datUnitDestroyGenus(DatUnitGenusBase* genusBase)
{
    RwFree(genusBase);
}

// FUN_002ff790
u32 func_002ff790(DatUnitGenusBase* genusBase)
{
    u16 i;

    if (genusBase->genus == UNIT_GENUS_EC)
    {
        for (i = 0; i < 6; i++)
        {
            DatUnit* unit = genusBase->unit;
            unit += i;

            if (unit->id != 0 && datCalcIsDead(unit, 0) == 0)
            {
                return 0;
            }
        }
    }
    else
    {
        K_ASSERT(genusBase->count == 1, 0xb9);

        if (datCalcIsDead(genusBase->unit, 0) == 0)
        {
            return 0;
        }
    }

    return 1;
}


/* Removing this loses FUN_002ff890 (MATCH nd0 -> MISMATCH nd56) - measured W161. */
#pragma opt_loop_invariants on
// FUN_002ff890
u32 datUnitInit(DatUnit* unit, u8 genus, u16 id)
{
    u32 i;
    u32 j;

    switch (genus)
    {
    case UNIT_GENUS_PC:
        if ((id & 0xFFFF) >= 0xB) K_Assert(__FILE__, 0xd3);
        unit->flags &= ~UNIT_FLAG_ENEMY;
        unit->flags &= ~0x10;
        unit->flags &= ~0x20;
        break;
    case UNIT_GENUS_EC:
        if ((id & 0xFFFF) >= 0x150) K_Assert(__FILE__, 0xd9);
        unit->flags = UNIT_FLAG_ENEMY;
        unit->level = DAT_007CE410[id * 0x3e + 3];
        unit->hp = *(u16*)((u8*)(uintptr_t)((u32)id * 0x3e) +
                          (uintptr_t)DAT_007CE410 + 4);
        unit->sp = *(u16*)((u8*)(uintptr_t)((u32)id * 0x3e) +
                          (uintptr_t)DAT_007CE410 + 6);
        unit->bad = 0;
        if (*(u16*)(DAT_007CE410 + id * 0x3e) & 8) unit->flags |= 0x10;
        if (*(u16*)(DAT_007CE410 + id * 0x3e) & 0x10) unit->flags |= 0x20;
        if (*(u16*)(DAT_007CE410 + id * 0x3e) & 0x100) unit->flags |= 0x80;
        if (*(u16*)(DAT_007CE410 + id * 0x3e) & 0x200) unit->flags |= 0x100;
        for (i = 0; i < 8; i++)
        {
            u16 skill = ((DatEnemyUnitInit*)DAT_007CE410)[id].skills[i];
            switch (skill)
            {
            case 0x220:
            case 0x221:
            case 0x222:
                unit->flags |= 0x200;
                break;
            }
        }
        break;
    default:
        K_Assert(__FILE__, 0xfd);
        break;
    }
    for (j = 0; j < 0x15; j++) func_00301540(unit, (u8)j);
    unit->id = id;
    unit->id2 = id;
    unit->flags |= UNIT_FLAG_ACTIVE;
    return true;
}
#pragma opt_loop_invariants reset

// FUN_002ffb00
u16 func_002ffb00(DatUnitGenusBase* genusBase)
{
    u16 pcId;
    u16 condition;

    if (genusBase->genus == UNIT_GENUS_PC)
    {
        pcId = genusBase->unit->id;
        FUN_0016ca90(pcId, -1);

        if (datGetFatigueCounter(pcId) == 0)
        {
            condition = datGetPhysicalCondition(pcId);
            if (condition == 2) goto improve_condition;
            if (condition == 1) goto improve_condition;
            switch (condition)
            {
            case 0:
                goto improve_condition;
            default:
                goto condition_done;
            }

improve_condition:
            datSetPhysicalCondition(pcId, 3);
        }
condition_done:
        return datGetPhysicalCondition(pcId);
    }
    return 0;
}
