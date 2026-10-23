#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"

#include "Utils.h"
static u32* sBpEffect;
extern void func_0010a4e0(s32, s32, s32, s32);
extern void* func_0021c790(void* frame);
extern void func_0021d890(void* destination, const f32* vertices);
extern void func_0021d8e0(void* destination, const f32* layout);
extern void func_0021d950(void* destination, const u8* color);
extern void func_0021eac0(void* destination, f32 value);
extern void func_0021eb80(void* destination, const f32* layout);
extern f32 DAT_007cad60;
extern f32 DAT_007cafec;
extern void RpSkyRenderStateSet(s32 state, u32 value);
extern u32 D_00960090[];
extern u32 D_0096009c[];
typedef void (*BpEffectSetRenderState)(s32 state, u32 value);
typedef void (*BpEffectRenderQuad)(void* quad, s32 layer, s32 group, s32 pass, s32 blend);





#define BAI_MAIN_ACTIVE 1

static inline f32 baiMul(f32 left, f32 right)
{
    return left * right;
}

typedef struct
{
    u32 unk0;  // 0x00
    u32 flags; // 0x04. See BAI_MAIN_*
} BaiMainWork;

static BaiMainWork* sBaiMain; // DAT_007ce338

/* W419 negative probe: placing static sBpEffect in .sdata left FUN_0024C110 at nd1500/2888B, window2960B, rate51.94%; reverted. */
// FUN_0024C110
#ifndef PC_BUILD
asm void FUN_0024c110(void)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f83b648
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e980
  .word 0x24050037
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b648
  .word 0x8e040004
  .word 0x00801827
  .word 0x30630001
  .word 0x146002c7
  .word 0x00000000
  .word 0x8e03000c
  .word 0x2861003c
  .word 0x10200005
  .word 0x00000000
  .word 0x24620001
  .word 0xae02000c
  .word 0x10000006
  .word 0x00000000
  .word 0x2403fffe
  .word 0x00831824
  .word 0xae030004
  .word 0x100002ba
  .word 0x00000000
  .word 0x8e03000c
  .word 0x2402000e
  .word 0x14620007
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060007
  .word 0x24070005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030000
  .word 0x24020001
  .word 0x1062000b
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x3c024270
  .word 0x4482a800
  .word 0x3c02c220
  .word 0x4482a000
  .word 0x10000005
  .word 0x00000000
  .word 0x3c02c270
  .word 0x4482a800
  .word 0x3c024220
  .word 0x4482a000
  .word 0x8e02000c
  .word 0x2841000a
  .word 0x10200007
  .word 0x00000000
  .word 0x4480b000
  .word 0x00000000
  .word 0x4600b106
  .word 0x4600b046
  .word 0x10000040
  .word 0x00000000
  .word 0x2841000f
  .word 0x10200011
  .word 0x00000000
  .word 0x2442fff6
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d83
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46160001
  .word 0x4600a902
  .word 0x4600a042
  .word 0x1000002d
  .word 0x00000000
  .word 0x2841002a
  .word 0x10200008
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b000
  .word 0x44802000
  .word 0x00000000
  .word 0x46002046
  .word 0x10000023
  .word 0x00000000
  .word 0x28410032
  .word 0x1020001c
  .word 0x00000000
  .word 0x2442ffd6
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x460008c3
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46030581
  .word 0x3c024060
  .word 0x44820800
  .word 0x4600a807
  .word 0x46000802
  .word 0xc7828070
  .word 0x46001002
  .word 0x46030102
  .word 0x3c024040
  .word 0x44820800
  .word 0x4600a007
  .word 0x46000802
  .word 0x46001002
  .word 0x46030042
  .word 0x10000005
  .word 0x00000000
  .word 0x4480b000
  .word 0x00000000
  .word 0x4600b106
  .word 0x4600b046
  .word 0x3c024352
  .word 0x44820000
  .word 0x00000000
  .word 0x46040000
  .word 0xe7a00050
  .word 0x3c024332
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00054
  .word 0x8e030000
  .word 0x24020001
  .word 0x1062000e
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x240201a1
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00058
  .word 0x3c02437a
  .word 0xafa2005c
  .word 0x10000005
  .word 0x00000000
  .word 0x3c0243d6
  .word 0xafa20058
  .word 0x3c024380
  .word 0xafa2005c
  .word 0x26040110
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2006c
  .word 0xa3a2006d
  .word 0xa3a2006e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46160042
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
  .word 0xa3a3006f
  .word 0x26040110
  .word 0x27a5006c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e02000c
  .word 0x2841000a
  .word 0x10200008
  .word 0x00000000
  .word 0x4480a000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x00000000
  .word 0x4600a986
  .word 0x10000037
  .word 0x00000000
  .word 0x2841000f
  .word 0x10200013
  .word 0x00000000
  .word 0x2442fff6
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x3c023f80
  .word 0x4482a800
  .word 0xc78282fc
  .word 0x4614a841
  .word 0x44800000
  .word 0x00000000
  .word 0x46150018
  .word 0x4601119c
  .word 0x10000022
  .word 0x00000000
  .word 0x2841002d
  .word 0x10200008
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x00000000
  .word 0x4600ad06
  .word 0x4600a986
  .word 0x10000018
  .word 0x00000000
  .word 0x28410037
  .word 0x10200010
  .word 0x00000000
  .word 0x2442ffd3
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x00000000
  .word 0x4600ad01
  .word 0x4600a986
  .word 0x10000006
  .word 0x00000000
  .word 0x4480a000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x00000000
  .word 0x4600a986
  .word 0x3c024352
  .word 0xafa20050
  .word 0x3c024332
  .word 0xafa20054
  .word 0x8e030000
  .word 0x24020001
  .word 0x1062000e
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x240201a1
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00058
  .word 0x3c02437a
  .word 0xafa2005c
  .word 0x10000005
  .word 0x00000000
  .word 0x3c0243d6
  .word 0xafa20058
  .word 0x3c024380
  .word 0xafa2005c
  .word 0xc7a50050
  .word 0xe7a50030
  .word 0xc7a40054
  .word 0xe7a40034
  .word 0xc7a30058
  .word 0x46032800
  .word 0xe7a00038
  .word 0xe7a4003c
  .word 0xe7a00040
  .word 0xc7a2005c
  .word 0x46022000
  .word 0xe7a00044
  .word 0xe7a50048
  .word 0xe7a0004c
  .word 0x0000182d
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46011803
  .word 0x460028c0
  .word 0x46011003
  .word 0x00000000
  .word 0x00000000
  .word 0x46002040
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420030
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
  .word 0x24420030
  .word 0xc4400000
  .word 0x46060002
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46060002
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
  .word 0x24420030
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
  .word 0x26040210
  .word 0x27a50030
  .word 0x0c087624
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2006c
  .word 0xa3a2006d
  .word 0xa3a2006e
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
  .word 0xa3a3006f
  .word 0x26040210
  .word 0x27a5006c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e02000c
  .word 0x2841000c
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024140
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x28410030
  .word 0x10200003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x2442ffd0
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024140
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x4600ad41
  .word 0xafa00050
  .word 0xafa00054
  .word 0x3c024420
  .word 0xafa20058
  .word 0x3c0243e0
  .word 0xafa2005c
  .word 0x26040010
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e030000
  .word 0x24020001
  .word 0x1062000c
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0xa3a0006c
  .word 0x24020011
  .word 0xa3a2006d
  .word 0x24020048
  .word 0xa3a2006e
  .word 0x10000006
  .word 0x00000000
  .word 0x24020037
  .word 0xa3a2006c
  .word 0xa3a0006d
  .word 0x24020003
  .word 0xa3a2006e
  .word 0x3c024319
  .word 0x44820000
  .word 0x00000000
  .word 0x46150042
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
  .word 0xa3a3006f
  .word 0x26040010
  .word 0x27a5006c
  .word 0x0c087654
  .word 0x00000000
  .word 0x3c03c3b4
  .word 0xae030310
  .word 0x3c0543e0
  .word 0xae050314
  .word 0x3c044420
  .word 0xae040350
  .word 0x3c034314
  .word 0xae030354
  .word 0xae040390
  .word 0xae050394
  .word 0x8e040000
  .word 0x24030001
  .word 0x1083000c
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0xa3a0006c
  .word 0x24030044
  .word 0xa3a3006d
  .word 0x240300c8
  .word 0xa3a3006e
  .word 0x10000007
  .word 0x00000000
  .word 0x2403002d
  .word 0xa3a3006c
  .word 0x24030002
  .word 0xa3a3006d
  .word 0x24030008
  .word 0xa3a3006e
  .word 0xa3a0006f
  .word 0x93a3006c
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000330
  .word 0x93a3006d
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000334
  .word 0x93a3006e
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000338
  .word 0x93a3006f
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe600033c
  .word 0x93a3006c
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000370
  .word 0x93a3006d
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000374
  .word 0x93a3006e
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000378
  .word 0x93a3006f
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe600037c
  .word 0x3c03437f
  .word 0x44830000
  .word 0x00000000
  .word 0x46150042
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
  .word 0xa3a4006f
  .word 0x93a3006c
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe60003b0
  .word 0x93a3006d
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe60003b4
  .word 0x93a3006e
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe60003b8
  .word 0x93a3006f
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe60003bc
  .word 0xdfbf0020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */



/* DAT_007CE348: panel effect work installed by FUN_0024C100. */




// FUN_0024CCA0

void FUN_0024cca0(void)
{
    u8* work;
    BpEffectSetRenderState* setRenderState;
    BpEffectRenderQuad* renderQuad;

    K_ASSERT(sBpEffect != NULL, 0x37);
    work = (u8*)sBpEffect;
    if (~(*(u32*)(work + 4)) & 1)
    {
        return;
    }

    RpSkyRenderStateSet(3, 0x717fb);
    RpSkyRenderStateSet(2, 0x44);
    setRenderState = (BpEffectSetRenderState*)D_00960090;
    (*setRenderState)(8, 0);
    (*setRenderState)(6, 0);
    (*setRenderState)(1, 0);
    renderQuad = (BpEffectRenderQuad*)D_0096009c;
    (*renderQuad)(work + 0x10, 4, 0, 1, 2);
    (*renderQuad)(work + 0x10, 4, 0, 2, 3);

    (*setRenderState)(1, 0);
    (*renderQuad)(work + 0x310, 3, 0, 1, 2);

    (*setRenderState)(1, (u32)func_0021c790(*(void**)work));
    RpSkyRenderStateSet(3, 0x717fb);
    RpSkyRenderStateSet(2, 0x44);
    (*renderQuad)(work + 0x110, 4, 0, 1, 2);
    (*renderQuad)(work + 0x110, 4, 0, 2, 3);

    (*setRenderState)(1, (u32)func_0021c790(*(void**)work));
    RpSkyRenderStateSet(3, 0x71801);
    RpSkyRenderStateSet(2, 0x48);
    (*renderQuad)(work + 0x210, 4, 0, 1, 2);
    (*renderQuad)(work + 0x210, 4, 0, 2, 3);
}
// FUN_0024CF00
void FUN_0024cf00(s32 mode)
{
    u8* work;
    s32* metrics;
    f32 layout[4];
    s32 width;
    s32 height;

    K_ASSERT(sBpEffect != NULL, 0x37);
    work = (u8*)sBpEffect;
    metrics = (s32*)func_0021c790((void*)mode);
    width = metrics[3];
    height = metrics[4];

    switch (mode)
    {
    case 0:
        layout[0] = 1.0f / width;
        layout[1] = 1.0f / height;
        layout[2] = 417.0f / width;
        layout[3] = 250.0f / height;
        break;
    case 1:
        layout[0] = 0.0f / width;
        layout[1] = 0.0f / height;
        layout[2] = 428.0f / width;
        layout[3] = 256.0f / height;
        break;
    }
    func_0021eb80(work + 0x110, layout);
    func_0021eac0(work + 0x110, 0.0f);
    func_0021eb80(work + 0x210, layout);
    func_0021eac0(work + 0x210, 0.0f);
    func_0021eac0(work + 0x10, 0.0f);
    *(u32*)(work + 0x318) = 0;
    *(u32*)(work + 0x318) = 0;
    *(u32*)(work + 0x318) = 0;
    *(void**)(work + 0) = (void*)mode;
    *(u32*)(work + 8) = 0;
    *(u32*)(work + 0xc) = 0;
    *(u32*)(work + 4) |= 1;
}

// FUN_0024d0c0
u32 baiMainIsActive(void)
{
    K_ASSERT(sBaiMain != NULL, 0x37);
    return sBaiMain->flags & BAI_MAIN_ACTIVE;
}
