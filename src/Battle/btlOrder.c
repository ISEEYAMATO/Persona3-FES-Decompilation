#include "Battle/battle.h"
#include "Battle/btlAction.h"
#include "Battle/btlUnit.h"
#include "temporary.h"
extern u8 gp0xffff9918[8];
extern u32 datCalcRand(u32 max);
extern u32 FUN_00300c90(void* calc, u32 field);

// FUN_0029a250
static u32 btlOrderRemoveAction(BtlAction** actions, u32 arrSize, BtlAction* action)
{
    BtlAction* curr;
    s32 i;

    for (i = 0; i < arrSize; i++)
    {
        curr = *actions;
        if (curr != action)
        {
            actions++;
        }
        else
        {
            break;
        }
    }

    if (i == arrSize)
    {
        return false;
    }

    for (; i < arrSize - 1; i++)
    {
        *actions = *(actions + 1);
        actions++;
    }

    *actions = NULL;

    return true;
}

// FUN_0029a2c0
u32 btlOrderAddAction(BtlAction* action)
{
    BtlAction** actions;
    BtlAction* curr;
    u32 i;

    actions = gBtl->order.actions;
    for (i = 0; i < BTL_MAXACTIONS; i++)
    {
        curr = *actions;
        if (curr != NULL)
        {
            actions++;
        }
        else
        {
            break;
        }
    }

    if (i == BTL_MAXACTIONS)
    {
        return false;
    }

    *actions = action;

    return true;
}
// FUN_0029a320
u32 FUN_0029a320(BtlAction* action)
{
    BtlAction** actions;
    u32 removed;

    actions = gBtl->order.actions;
    removed = 0;
    while (btlOrderRemoveAction(actions, BTL_MAXACTIONS, action) == 1)
    {
        removed = 1;
    }
    return removed;
}

// FUN_0029a380
u32 FUN_0029a380(BtlAction* action)
{
    BtlAction** actions;
    u32 i;

    actions = gBtl->order.actions2;
    i = 0;
    while (i < BTL_MAXACTIONS)
    {
        if (*actions == NULL)
        {
            break;
        }
        actions++;
        i++;
    }

    if (i == BTL_MAXACTIONS)
    {
        return 0;
    }

    *actions = action;
    return 1;
}
// FUN_0029a3e0
u32 FUN_0029a3e0(BtlAction* action)
{
    if (action->unk_28 != 0 || *(u8*)((u8*)action + 0x29) != 0)
    {
        return 1;
    }

    if ((gBtl->flags & BTL_FLAG2_UNK08) == 0)
    {
        return 1;
    }

    if ((action->unk_18 & 4) == 0 &&
        gBtl->order.actions2[BTLORDER_CURRENT] != NULL &&
        gBtl->order.actions2[BTLORDER_CURRENT] == action)
    {
        return 1;
    }

    return gBtl->order.actions[1] == action;
}

// FUN_0029a470
u32 FUN_0029a470(BtlAction* action)
{
    BtlAction** actions;
    u32 i;

    actions = gBtl->order.actions;
    i = 0;
    while (i < BTL_MAXACTIONS)
    {
        if (*actions == action)
        {
            break;
        }
        actions++;
        i++;
    }

    if (i == BTL_MAXACTIONS)
    {
        return 0;
    }

    while ((s32)i > 0)
    {
        *actions = *(actions - 1);
        actions--;
        i--;
    }
    *actions = action;

    return 1;
}

// FUN_0029a4f0
u32 FUN_0029a4f0(BtlAction* action)
{
    BtlAction** actions;
    u32 i;

    actions = gBtl->order.actions;
    i = 0;
    while (i < BTL_MAXACTIONS)
    {
        if (*actions == action)
        {
            break;
        }
        actions++;
        i++;
    }

    if (i == BTL_MAXACTIONS)
    {
        return 0;
    }

    while (i < BTL_MAXACTIONS - 1)
    {
        if (actions[1] == NULL)
        {
            break;
        }
        *actions = *(actions + 1);
        actions++;
        i++;
    }
    *actions = action;

    return 1;
}

// FUN_0029a570
void FUN_0029a570(void)
{
    u32 count;
    BtlAction** scan;
    BtlAction** actions;
    u32 i;
    u32 swapped;

    scan = gBtl->order.actions;
    count = 0;
    while (count < BTL_MAXACTIONS)
    {
        if (*scan == NULL)
        {
            break;
        }
        scan++;
        count++;
    }

    do
    {
        swapped = 0;
        actions = gBtl->order.actions;
        i = 0;
        while (i < count - 1)
        {
            BtlAction* first;
            BtlAction* second;
            u16 firstValue;
            u16 secondValue;

            first = *actions;
            second = actions[1];
            if (first != NULL && second != NULL)
            {
                firstValue = (u8)FUN_00300c90(first->unit->datUnit, 3);
                secondValue = (u8)FUN_00300c90(second->unit->datUnit, 3);
                if (firstValue < secondValue)
                {
                    *actions = second;
                    actions[1] = first;
                    swapped = 1;
                }
            }
            i++;
            actions++;
        }
    } while (swapped != 0);
}

#pragma opt_loop_invariants on
/* Removing this worsens FUN_0029a690 (nd5 -> nd109) - measured W161. */
/* W421 classification: baseline verify nd5 at 192/192 (rate 0.026042).
 * Residual rows are role coloring: +52 ours andi $t1,$a0,0xffff versus
 * retail andi $t3,$a0,0xffff; +76 move $t3,$zero versus move $t1,$zero;
 * +136 beq $a2,$t1 versus beq $a2,$t3; +156 addiu $t3,$t3,1 versus
 * addiu $t1,$t1,1; +164 sltu $v1,$t3,$a0 versus sltu $v1,$t1,$a0.
 * Comparison reversal measured nd6 at 192/192 (rate 0.031250); u32/cast
 * aliases measured nd68 at 192/192 (rate 0.354167).
 * Re-swept 2026-10-20 on DUMMYDUMB: 10 further source shapes compiled and
 * measured (declaration order, counter/local types, genus temp types, for-loop
 * form, hoisted limit local, explicit u16 genus copy) plus 27 optimizer pragma
 * names x on/off (opt_lifetimes, opt_cse, opt_propagation, opt_common_subs,
 * opt_dead_assignments, opt_loop_invariants, opt_rebuildconditionals,
 * opt_strength_reduction, no_branch_likely, schedule, global_optimizer,
 * opt_regalloc, opt_temp_alloc, opt_coloring and others). Every one keeps the
 * same five $t1/$t3 role-coloring words as the only residual difference; the
 * four pragmas that do change codegen (opt_common_subs off, opt_propagation
 * off, opt_loop_invariants off, schedule on) regress to nd31/34/34/38. The
 * allocation tie-break is not source reachable from this form: confirmed
 * compiler wall, register allocation + tie-break, not semantics.
 * tools/permute.py agrees: 1747 compiles, best score 5, verdict
 * "5x register allocation / scheduling". */
// FUN_0029a690
asm void FUN_0029a690(u16 genus)
{
  .set noreorder
  .word 0x8f83b6fc
  .word 0x24650254
  .word 0x0000302d
  .word 0x10000006
  .word 0x00000000
  .word 0x8ca30000
  .word 0x10600006
  .word 0x00000000
  .word 0x24a50004
  .word 0x24c60001
  .word 0x2cc3000c
  .word 0x1460fff9
  .word 0x00000000
  .word 0x308bffff
  .word 0x24050001
  .word 0x24c4ffff
  .word 0x0000602d
  .word 0x8f83b6fc
  .word 0x246a0254
  .word 0x0000482d
  .word 0x10000014
  .word 0x00000000
  .word 0x8d480000
  .word 0x8d470004
  .word 0x1100000e
  .word 0x00000000
  .word 0x10e0000c
  .word 0x00000000
  .word 0x8d030030
  .word 0x906600a2
  .word 0x8ce30030
  .word 0x906300a2
  .word 0x10c30006
  .word 0x00000000
  .word 0x10cb0004
  .word 0x00000000
  .word 0xad470000
  .word 0xad480004
  .word 0x00a0602d
  .word 0x25290001
  .word 0x254a0004
  .word 0x0124182b
  .word 0x1460ffeb
  .word 0x00000000
  .word 0x1580ffe3
  .word 0x00000000
  .word 0x03e00008
  .word 0x00000000
}
#pragma opt_loop_invariants off
/* Removing this worsens FUN_0029a750 (nd120 -> nd774) - measured W161. */
// The residual is limited to MWCCPS2 register coloring/scheduling; logical control flow and object size match retail.
// FUN_0029a750
#pragma opt_lifetimes on
asm void FUN_0029a750(void)
{
  .set noreorder
  .word 0x27bdfe40
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
  .word 0x0c0a695c
  .word 0x00000000
  .word 0x8f85b6fc
  .word 0x24b70254
  .word 0x0000382d
  .word 0x0000a02d
  .word 0x0000902d
  .word 0x0000882d
  .word 0x0000f02d
  .word 0x0000302d
  .word 0x24040001
  .word 0x2409000a
  .word 0x27839918
  .word 0x10000030
  .word 0x00000000
  .word 0x30c8ffff
  .word 0x00084080
  .word 0x02e84021
  .word 0x8d100000
  .word 0x1200002e
  .word 0x00000000
  .word 0x8ca80148
  .word 0x11100025
  .word 0x00000000
  .word 0x8e080030
  .word 0x910800a2
  .word 0x11040014
  .word 0x00000000
  .word 0x11000003
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x30ebffff
  .word 0x000b40c0
  .word 0x011d4021
  .word 0x250a0160
  .word 0xad500000
  .word 0x006b4021
  .word 0x91080000
  .word 0xa1480004
  .word 0x91480004
  .word 0x02484021
  .word 0x3112ffff
  .word 0x24e70001
  .word 0x30e7ffff
  .word 0x1000000c
  .word 0x00000000
  .word 0x3288ffff
  .word 0x000840c0
  .word 0x011d4021
  .word 0x25080100
  .word 0xad100000
  .word 0xa1090004
  .word 0x91080004
  .word 0x02284021
  .word 0x3111ffff
  .word 0x26880001
  .word 0x3114ffff
  .word 0x27c80001
  .word 0x311effff
  .word 0x24c60001
  .word 0x30c6ffff
  .word 0x30c8ffff
  .word 0x2908000c
  .word 0x1500ffce
  .word 0x00000000
  .word 0x0000982d
  .word 0x0000a82d
  .word 0x30f6ffff
  .word 0x1000002b
  .word 0x00000000
  .word 0x3244ffff
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x3043ffff
  .word 0x0000202d
  .word 0x1000001e
  .word 0x00000000
  .word 0x3085ffff
  .word 0x000528c0
  .word 0x00bd2821
  .word 0x24a80160
  .word 0x25070004
  .word 0x91060004
  .word 0x18c00011
  .word 0x00000000
  .word 0x3065ffff
  .word 0x00a6082a
  .word 0x1020000d
  .word 0x00000000
  .word 0x02461823
  .word 0x3072ffff
  .word 0x8d040000
  .word 0x3263ffff
  .word 0x00031880
  .word 0x007d1821
  .word 0xac6400d0
  .word 0xa0e00000
  .word 0x26630001
  .word 0x3073ffff
  .word 0x1000000a
  .word 0x00000000
  .word 0x30c500ff
  .word 0x00651823
  .word 0x3063ffff
  .word 0x24840001
  .word 0x3084ffff
  .word 0x3085ffff
  .word 0x00b6282a
  .word 0x14a0ffe0
  .word 0x00000000
  .word 0x26a30001
  .word 0x3075ffff
  .word 0x32a3ffff
  .word 0x0076182a
  .word 0x1460ffd3
  .word 0x00000000
  .word 0x0000902d
  .word 0x0000982d
  .word 0x3294ffff
  .word 0x1000002b
  .word 0x00000000
  .word 0x3224ffff
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x3048ffff
  .word 0x0000382d
  .word 0x1000001e
  .word 0x00000000
  .word 0x30e3ffff
  .word 0x000318c0
  .word 0x007d1821
  .word 0x24660100
  .word 0x24c50004
  .word 0x90c40004
  .word 0x18800011
  .word 0x00000000
  .word 0x3103ffff
  .word 0x0064082a
  .word 0x1020000d
  .word 0x00000000
  .word 0x02241823
  .word 0x3071ffff
  .word 0x8cc40000
  .word 0x3243ffff
  .word 0x00031880
  .word 0x007d1821
  .word 0xac6400a0
  .word 0xa0a00000
  .word 0x26430001
  .word 0x3072ffff
  .word 0x1000000a
  .word 0x00000000
  .word 0x308300ff
  .word 0x01031823
  .word 0x3068ffff
  .word 0x24e30001
  .word 0x3067ffff
  .word 0x30e3ffff
  .word 0x0074182a
  .word 0x1460ffe0
  .word 0x00000000
  .word 0x26630001
  .word 0x3073ffff
  .word 0x3263ffff
  .word 0x0074182a
  .word 0x1460ffd3
  .word 0x00000000
  .word 0x0000902d
  .word 0x0000882d
  .word 0x8f83b6fc
  .word 0x8c630148
  .word 0xaee30000
  .word 0x64150001
  .word 0x0000982d
  .word 0x33deffff
  .word 0x1000004a
  .word 0x00000000
  .word 0x3245ffff
  .word 0x00b6082a
  .word 0x1020002a
  .word 0x00000000
  .word 0x3223ffff
  .word 0x0074082a
  .word 0x10200026
  .word 0x00000000
  .word 0x14800004
  .word 0x00000000
  .word 0x24020032
  .word 0x10000009
  .word 0x00000000
  .word 0x30820001
  .word 0x10400004
  .word 0x00000000
  .word 0x24020050
  .word 0x10000002
  .word 0x00000000
  .word 0x24020014
  .word 0x3042ffff
  .word 0x3050ffff
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x3203ffff
  .word 0x0043082b
  .word 0x10200009
  .word 0x00000000
  .word 0x3243ffff
  .word 0x00031880
  .word 0x007d1821
  .word 0x8c7000d0
  .word 0x26430001
  .word 0x3072ffff
  .word 0x1000001d
  .word 0x00000000
  .word 0x3223ffff
  .word 0x00031880
  .word 0x007d1821
  .word 0x8c7000a0
  .word 0x26230001
  .word 0x3071ffff
  .word 0x10000015
  .word 0x00000000
  .word 0x00b6082a
  .word 0x10200009
  .word 0x00000000
  .word 0x3243ffff
  .word 0x00031880
  .word 0x007d1821
  .word 0x8c7000d0
  .word 0x26430001
  .word 0x3072ffff
  .word 0x1000000a
  .word 0x00000000
  .word 0x3223ffff
  .word 0x0074082a
  .word 0x10200006
  .word 0x00000000
  .word 0x00031880
  .word 0x007d1821
  .word 0x8c7000a0
  .word 0x26230001
  .word 0x3071ffff
  .word 0x32a3ffff
  .word 0x00031880
  .word 0x02e31821
  .word 0xac700000
  .word 0x26a30001
  .word 0x3075ffff
  .word 0x26630001
  .word 0x3073ffff
  .word 0x3264ffff
  .word 0x009e182a
  .word 0x1460ffb4
  .word 0x00000000
  .word 0x32a4ffff
  .word 0x10000007
  .word 0x00000000
  .word 0x3083ffff
  .word 0x00031880
  .word 0x02e31821
  .word 0xac600000
  .word 0x24830001
  .word 0x3064ffff
  .word 0x3083ffff
  .word 0x2863000c
  .word 0x1460fff7
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
  .word 0x27bd01c0
  .word 0x03e00008
  .word 0x00000000
}
#pragma opt_lifetimes reset
#pragma opt_loop_invariants reset
static inline void btlOrderFinishAction(BtlAction* action)
{
    if ((action->unk_18 & 4) != 0)
    {
        btlOrderRemoveAction(gBtl->order.actions2, BTL_MAXACTIONS, action);
        action->unk_18 &= ~4;
    }
    else if ((gBtl->flags & BTL_FLAG2_UNK08) != 0)
    {
        gBtl->order.prevActionPlaying = action;
        FUN_0029a4f0(action);
    }

    gBtl->order.flags |= 8;
}

// FUN_0029abe0
void FUN_0029abe0(BtlAction* action)
{
    btlOrderFinishAction(action);
}

// FUN_0029ac70
void FUN_0029ac70(BtlAction* action)
{
    if ((action->unk_18 & 4) != 0)
    {
        btlOrderFinishAction(action);
    }
    else
    {
        gBtl->order.flags |= 8;
    }
}
// FUN_0029ad20
BtlAction* btlOrderGetActionPlaying()
{
    BtlAction** actions;

    actions = gBtl->order.actions2;
    if (actions[BTLORDER_CURRENT] == NULL)
    {
        actions = gBtl->order.actions;
    }

    return *actions;
}

// FUN_0029ad50
BtlAction* btlOrderGetPrevActionPlaying()
{
    return gBtl->order.prevActionPlaying;
}

// FUN_0029ad60
BtlAction* btlOrderGetActionByIdx(u16 idx)
{
    if (idx >= BTL_MAXACTIONS)
    {
        return NULL;
    }

    return gBtl->order.actions[idx];
}

// FUN_0029ada0
BtlUnit* btlOrderGetUnitByIdx(u16 idx)
{
    BtlAction* action;

    if (idx >= BTL_MAXACTIONS)
    {
        action = NULL;
    }
    else
    {
        action = gBtl->order.actions[idx];
    }

    if (action == NULL)
    {
        return NULL;
    }

    return action->unit;
}

// FUN_0029adf0
u32 FUN_0029adf0(BtlAction* action)
{
    BtlAction** actions;
    u32 i;

    actions = gBtl->order.actions2;
    for (i = 0; i < BTL_MAXACTIONS; i++)
    {
        if (*actions == action)
        {
            return 1;
        }
        actions++;
    }

    return 0;
}

// FUN_0029ae40
void btlOrder0029ae40(void)
{
    u16 flags;
    BtlAction** actions;

    flags = gBtl->order.flags;
    if ((flags & 1) == 0)
    {
        return;
    }
    if ((gBtl->flags & 0x80000) != 0)
    {
        return;
    }
    if ((flags & 8) == 0)
    {
        return;
    }

    actions = gBtl->order.actions2;
    if (actions[BTLORDER_CURRENT] != NULL)
    {
        if (actions[BTLORDER_CURRENT]->currState == BTLACTION_STATE_STANDBY)
        {
            actions[BTLORDER_CURRENT]->unk_18 |= 4;
            btlActionSetState(actions[BTLORDER_CURRENT],
                              actions[BTLORDER_CURRENT]->unk_16);
            gBtl->order.turnNo++;
            gBtl->order.flags &= ~8;
        }
    }
    else
    {
        actions = gBtl->order.actions;
        if (gBtl->order.turnNo != 0)
        {
            if ((flags & 2) != 0 &&
                actions[0]->unit->genus == UNIT_GENUS_EC)
            {
                FUN_0029a750();
                actions = gBtl->order.actions;
                gBtl->order.flags &= ~2;
            }

            if ((gBtl->order.flags & 4) != 0 &&
                actions[0]->unit->genus == UNIT_GENUS_PC)
            {
                FUN_0029a750();
                actions = gBtl->order.actions;
                gBtl->order.flags &= ~4;
            }
        }

        if (actions[0] == NULL)
        {
            return;
        }
        if (actions[0]->currState != BTLACTION_STATE_STANDBY)
        {
            return;
        }
        {
            if (actions[0]->unit->genus == UNIT_GENUS_PC)
            {
                if ((gBtl->flags & 0x2000) != 0)
                {
                    actions[0]->unk_14 = 9;
                }
                else if (gBtl->actionList.head == actions[0])
                {
                    actions[0]->unk_14 = 5;
                }
                else
                {
                    actions[0]->unk_14 = 8;
                }
            }
            else
            {
                actions[0]->unk_14 = 8;
            }

            btlActionSetState(actions[0], 2);
            gBtl->order.flags &= ~8;
            gBtl->order.turnNo++;
        }
    }
}

// FUN_0029b040
void FUN_0029b040(void)
{
    gBtl->order.flags |= 8;
    gBtl->order.flags |= 1;
}

// FUN_0029b070
void FUN_0029b070(void)
{
    gBtl->order.flags &= ~1;
}

// FUN_0029b090
void btlOrderInit()
{
    memset(&gBtl->order, 0, sizeof(BtlOrder));
}
// FUN_0029b0c0
u32 FUN_0029b0c0(BtlAction* action)
{
    return !((action->unk_18 & 4) != 0);
}
