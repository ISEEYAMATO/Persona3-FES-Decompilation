#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"

#include "Battle/btlUnit.h"
typedef int (*code)(...);
void FUN_00252e80(void);
void FUN_00252f30(void);
void FUN_002532b0(void);
void FUN_002534d0(void *param_1);
extern code DAT_00960090_y2;
extern code DAT_0096009c_y2;
#pragma alias DAT_00960090_abs DAT_00960090_y2
#pragma alias DAT_0096009c_abs DAT_0096009c_y2
extern code DAT_00960090_abs[];
extern code DAT_0096009c_abs[];
extern int iGpffffb6fc;
extern u32 uGpffffb660;
static u32* sBpd660; // puGpffffb660
static u32* sBpd664;
s32 FUN_0021c3f0_y2();
#pragma alias FUN_0021c3f0_u64 FUN_0021c3f0_y2
extern u64 FUN_0021c3f0_u64(u32 param_1);
s32 FUN_0021cca0_y2();
s32 FUN_0021cce0();
#pragma alias FUN_0021cce0_u32 FUN_0021cce0
#pragma alias FUN_0021cca0_u64_u32 FUN_0021cca0_y2
extern u32 FUN_0021cca0_u64_u32(u64 param_1, u32 param_2);
extern u32 FUN_0021cce0_u32(u32 param_1);
extern void FUN_002807a0(u32 param_1, RwV3d *position);
extern u32 FUN_002d20a0(const RwV3d *projected, RwV2d *screen);
extern u32 FUN_00300580(u32 param_1, u32 param_2);
extern s32 FUN_0027f930(s32 param_1);
extern f32 FUN_0052e878_y2(f32 param_1);
extern void FUN_0021d8e0_y2(void *destination, const RwV4d *rect);
extern void FUN_0021d950_y2(void *destination, const RwRGBA *color);


#pragma alias FUN_0021cce0_y2 FUN_0021cce0
#pragma alias DAT_00960090_y2 DAT_00960090
#pragma alias DAT_0096009c_y2 DAT_0096009c
#pragma alias FUN_0021c3f0_y2 FUN_0021c3f0
#pragma alias FUN_0021cca0_y2 FUN_0021cca0
#pragma alias FUN_0052e878_y2 FUN_0052e878
#pragma alias FUN_0021d8e0_y2 FUN_0021d8e0
#pragma alias FUN_0021d950_y2 FUN_0021d950



/* Recovered battle-misc support prelude */
typedef int (*code)(...);
void FUN_00251f40(s32 param_1);
void FUN_002520f0(void);
void FUN_00252340(void);
extern code DAT_00960090[];
extern code DAT_0096009c[];
extern f32 fGpffff8070;
extern f32 fGpffff8248;
extern f32 fGpffff83e0;

static u32* sBpo65c; // puGpffffb65c

void func_00252340(void);

static inline f32 bpoMul(f32 left, f32 right)
{
    return left * right;
}



// FUN_00251F40


void FUN_00251f40(s32 param_1)
{
    u32 uVar1;
    u32 *puVar2;
    s32 iVar3;
    s32 iVar4;

    K_ASSERT(sBpo65c != NULL, 0x36);
    puVar2 = sBpo65c;
    iVar3 = FUN_0021c3f0(1);
    *puVar2 = 0;
    puVar2[2] = param_1;
    switch (param_1) {
    case 0:
        iVar4 = FUN_0021cca0(iVar3, 0x39);
        break;
    case 1:
        iVar4 = FUN_0021cca0(iVar3, 0x3a);
        break;
    }
    FUN_0021d3b0(puVar2 + 4, iVar4);
    FUN_0021d3b0(puVar2 + 0x44, iVar4);
    FUN_0021d3b0(puVar2 + 0x84, iVar4);
    FUN_0010a4e0(1, 0xf, 2, 0xf);
    puVar2[1] = 0;
    uVar1 = *puVar2 | 1;
    *puVar2 = uVar1;
    *puVar2 = uVar1 | 2;
}

/* Recovered battle-misc harvest: 0x00251F40-0x00252340 */
// FUN_00252060
void bpo00252060(void)
{
    u32* p;

    K_ASSERT(sBpo65c != NULL, 0x36);
    p = sBpo65c;
    if ((~p[0] & 1) == 0)
    {
        if ((int)p[1] < 0x1e)
        {
            p[1] = p[1] + 1;
        }
        else
        {
            p[0] &= 0xfffffffe;
        }
        func_00252340();
    }
}

// FUN_002520F0


void FUN_002520f0(void)
{
    u32 *puVar1;
    u32 uVar2;
    s32 iVar3;
    s32 iVar4;
    volatile /* Removing this qualifier loses FUN_002520f0 (MATCH nd0 -> MISMATCH nd332, size 584 -> 616) - measured W170. */ code *ppVar5;

    K_ASSERT(sBpo65c != NULL, 0x36);
    puVar1 = sBpo65c;
    iVar3 = FUN_0021c3f0(1);
    uVar2 = *puVar1;
    if ((~uVar2 & 1) == 0) {
        if ((uVar2 & 2) != 0) {
            FUN_00252340();
        }
        ppVar5 = DAT_00960090;
        (*ppVar5)(9, 2);
        (*ppVar5)(0x14, 2);
        (*ppVar5)(8, 0);
        (*ppVar5)(6, 0);
        switch (puVar1[2]) {
        case 0:
            iVar4 = FUN_0021cca0(iVar3, 0x39);
            break;
        case 1:
            iVar4 = FUN_0021cca0(iVar3, 0x3a);
            break;
        }
        (*ppVar5)(1, FUN_0021cce0_y2(iVar4));
        FUN_004d7f60(3, 0x71801);
        FUN_004d7f60(2, 0x48);
        ppVar5 = DAT_0096009c;
        (*ppVar5)(puVar1 + 4, 4, 0, 1, 2);
        (*ppVar5)(puVar1 + 4, 4, 0, 2, 3);
        (*ppVar5)(puVar1 + 0x44, 4, 0, 1, 2);
        (*ppVar5)(puVar1 + 0x44, 4, 0, 2, 3);
        (*ppVar5)(puVar1 + 0x84, 4, 0, 1, 2);
        (*ppVar5)(puVar1 + 0x84, 4, 0, 2, 3);
    }
}

/* W419 negative probes: bpoMul on FUN_00252340 rotation products left nd1201/2820B, window2848B, rate42.59%; float SDA aliases also left nd1201/2820B, window2848B, rate42.59%; reverted. */
// FUN_00252340
asm void FUN_00252340(void)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0080
  .word 0x7fb50070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f82b65c
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e9e0
  .word 0x24050036
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b65c
  .word 0x24040001
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040982d
  .word 0x8e030008
  .word 0x24020001
  .word 0x1062000c
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050039
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040902d
  .word 0x10000006
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405003a
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040902d
  .word 0x8e020004
  .word 0x28410003
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x28410014
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x10000013
  .word 0x00000000
  .word 0x2841001e
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442ffec
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010501
  .word 0x10000002
  .word 0x00000000
  .word 0x4480a000
  .word 0x3c023fc0
  .word 0x4482b000
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46000147
  .word 0xc640000c
  .word 0x46800120
  .word 0x46052002
  .word 0x3c024000
  .word 0x44821800
  .word 0x00000000
  .word 0x46030043
  .word 0x3c024305
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00090
  .word 0xc6400010
  .word 0x468000a0
  .word 0x46051002
  .word 0x46030043
  .word 0x3c024312
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00094
  .word 0x46162002
  .word 0xe7a00098
  .word 0x46161002
  .word 0xe7a0009c
  .word 0x26040010
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e030008
  .word 0x24020001
  .word 0x1062000d
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x24020066
  .word 0xa3a200bc
  .word 0x24020099
  .word 0xa3a200bd
  .word 0x240200ff
  .word 0xa3a200be
  .word 0x10000007
  .word 0x00000000
  .word 0x9242001c
  .word 0xa3a200bc
  .word 0x9242001d
  .word 0xa3a200bd
  .word 0x9242001e
  .word 0xa3a200be
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46140042
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
  .word 0xa3a300bf
  .word 0x26040010
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030008
  .word 0x24020001
  .word 0x10620017
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0xc6000004
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0xc7838070
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010081
  .word 0xc78183e0
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x46021d9c
  .word 0x1000000d
  .word 0x00000000
  .word 0xc6000004
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x460008c3
  .word 0xc7828070
  .word 0xc78183e0
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603159c
  .word 0x24020001
  .word 0x10620015
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0xc6000004
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d41
  .word 0x1000000f
  .word 0x00000000
  .word 0xc6000004
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x460008c3
  .word 0x3c02c1a0
  .word 0x44821000
  .word 0x3c024120
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603155c
  .word 0x8e020004
  .word 0x28410003
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x28410014
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x10000013
  .word 0x00000000
  .word 0x2841001e
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442ffec
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010501
  .word 0x10000002
  .word 0x00000000
  .word 0x4480a000
  .word 0xafa00090
  .word 0xafa00094
  .word 0xc640000c
  .word 0x46800020
  .word 0xe7a00098
  .word 0xafa0009c
  .word 0xe7a000a0
  .word 0xc6400010
  .word 0x46800020
  .word 0xe7a000a4
  .word 0xafa000a8
  .word 0xe7a000ac
  .word 0x0000182d
  .word 0x3c0242fe
  .word 0x44821000
  .word 0x3c024274
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420090
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
  .word 0x24420090
  .word 0xc4400000
  .word 0x46160002
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46160002
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000882d
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010602
  .word 0x1000001e
  .word 0x00000000
  .word 0x001110c0
  .word 0x005d1021
  .word 0x24550090
  .word 0x26b40004
  .word 0x4600c306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000586
  .word 0xc6950000
  .word 0x4600c306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xc6a10000
  .word 0x4600081a
  .word 0x4616addd
  .word 0x4600c306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000586
  .word 0xc6b50000
  .word 0x4600c306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xc6810000
  .word 0x4600081a
  .word 0x4616a81c
  .word 0xe6b70000
  .word 0xe6800000
  .word 0x26310001
  .word 0x2a220004
  .word 0x1440ffe1
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c0242fe
  .word 0x44821000
  .word 0x3c024274
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420090
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
  .word 0x0000182d
  .word 0x3c024305
  .word 0x44821000
  .word 0x3c024312
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420090
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
  .word 0x26040110
  .word 0x27a50090
  .word 0x0c087624
  .word 0x00000000
  .word 0x8e030008
  .word 0x24020001
  .word 0x1062000b
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0xa3a000bc
  .word 0xa3a000bd
  .word 0x240200cc
  .word 0xa3a200be
  .word 0x10000005
  .word 0x00000000
  .word 0x24020099
  .word 0xa3a200bc
  .word 0xa3a000bd
  .word 0xa3a000be
  .word 0x3c023f00
  .word 0x44820800
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46140002
  .word 0x46000842
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
  .word 0xa3a300bf
  .word 0x26040110
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030008
  .word 0x24020001
  .word 0x1062000c
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050039
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040902d
  .word 0x10000006
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405003a
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040902d
  .word 0x8e040004
  .word 0x04810004
  .word 0x00000000
  .word 0x4480a000
  .word 0x10000029
  .word 0x00000000
  .word 0x28810004
  .word 0x1020000d
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x28810014
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x10000013
  .word 0x00000000
  .word 0x2881001e
  .word 0x1020000f
  .word 0x00000000
  .word 0x2482ffec
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010501
  .word 0x10000002
  .word 0x00000000
  .word 0x4480a000
  .word 0x44803000
  .word 0x8e030008
  .word 0x24020001
  .word 0x10620022
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000003d
  .word 0x00000000
  .word 0x04810005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44823000
  .word 0x10000037
  .word 0x00000000
  .word 0x28810004
  .word 0x10200011
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c023fc0
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020001
  .word 0x46000980
  .word 0x10000024
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44823000
  .word 0x10000020
  .word 0x00000000
  .word 0x04810005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44823000
  .word 0x1000001a
  .word 0x00000000
  .word 0x28810004
  .word 0x10200015
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c02bf80
  .word 0x44821000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x46003018
  .word 0x4601119c
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44823000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46003001
  .word 0x46000147
  .word 0xc640000c
  .word 0x46800120
  .word 0x46052002
  .word 0x3c024000
  .word 0x44821800
  .word 0x00000000
  .word 0x46030043
  .word 0x3c024305
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00090
  .word 0xc6400010
  .word 0x468000a0
  .word 0x46051002
  .word 0x46030043
  .word 0x3c024312
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00094
  .word 0x46062002
  .word 0xe7a00098
  .word 0x46061002
  .word 0xe7a0009c
  .word 0x26040210
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e030008
  .word 0x24020001
  .word 0x1062000d
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x24020066
  .word 0xa3a200bc
  .word 0x24020099
  .word 0xa3a200bd
  .word 0x240200ff
  .word 0xa3a200be
  .word 0x10000007
  .word 0x00000000
  .word 0x9242001c
  .word 0xa3a200bc
  .word 0x9242001d
  .word 0xa3a200bd
  .word 0x9242001e
  .word 0xa3a200be
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46140042
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
  .word 0xa3a300bf
  .word 0x26040210
  .word 0x27a500bc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e040000
  .word 0x2403fffd
  .word 0x00831824
  .word 0xae030000
  .word 0xdfbf0080
  .word 0x7bb50070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}




/* Recovered battle-misc support prelude */


// FUN_00252e60
void bpd00252e60(u32* param_1)
{
    *param_1 = 0;
    param_1[0x2d5] = 0;
    sBpd660 = param_1;
}




/* Recovered battle-misc harvest: 0x00252E80-0x002534D0 */
// FUN_00252E80


void FUN_00252e80(void)



{

  uGpffffb660 = 0;

  return;

}



/* Removing this loses FUN_002534d0 (MATCH nd0 -> MISMATCH nd16) - measured W161. */
#pragma opt_loop_invariants off
