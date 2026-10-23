#include "temporary.h"
typedef int (*code)(); /* PC: unnamed varargs */
typedef u32 undefined3;
typedef u32 int3;
#define CONCAT13(a,b) ((((u32)(a) & 0xffu) << 24) | ((u32)(b) & 0x00ffffffu))

extern u32 DAT_006a3340;
#pragma alias DAT_006a3340_abs DAT_006a3340
extern u8 DAT_006a3340_abs[];
extern u8 * PTR_DAT_006a3590;
#pragma alias PTR_DAT_006a3590_abs PTR_DAT_006a3590
extern u8 *PTR_DAT_006a3590_abs[];
extern u8 * PTR_DAT_006a36a0;
extern u8 * PTR_DAT_006a38e0;
#pragma alias PTR_DAT_006a36a0_abs PTR_DAT_006a36a0
extern u8* PTR_DAT_006a36a0_abs[];
#pragma alias PTR_DAT_006a38e0_abs PTR_DAT_006a38e0
extern u8* PTR_DAT_006a38e0_abs[];

#ifndef CONCAT44
#define CONCAT44(hi,lo) ((((u64)(hi)) << 32) | (u32)(lo))
#endif

/* Region 0x390000-0x3CFFFF recovered prototypes */
u32 FUN_003bf130(void);
#pragma alias FUN_003c33c0_call FUN_003c33c0
extern u32 FUN_003c33c0_call();
u32 FUN_003c3e80(u8 *param_1);
u8 * FUN_003c3f40(u32 param_1);
u8 * FUN_003c3f80(int param_1);
u8 * FUN_003c3fe0(int param_1);

/* Region call-cast macros */
#define FUN_003c33c0(...) FUN_003c33c0(__VA_ARGS__)
#define FUN_003c3e80(...) FUN_003c3e80(__VA_ARGS__)
#define FUN_003c3f40(...) FUN_003c3f40(__VA_ARGS__)
#define FUN_003c3f80(...) FUN_003c3f80(__VA_ARGS__)
#define FUN_003c3fe0(...) FUN_003c3fe0(__VA_ARGS__)

#undef FUN_003c33c0
#pragma push
// W419 state-2 switch-shaped dispatch probe worsened 1436/2516 to 1466/2540 (rate 57.07% to 57.72%); if/else form retained.
/* W420 negative: duplicating the shared state-1 case body for states 0,2..7 produced nd1603/object2756 against window2752 (rate .5707 -> .5814); reverted. */
/* W455 retail state-one dispatch has eight distinct jump-table targets, so
 * repeated state assignments are kept as separate case bodies below. */
// FUN_003C33C0

#ifndef PC_BUILD
asm u8 FUN_003c33c0(u8 *param_1, int *param_2, long param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x8c90000c
  .word 0xaca00000
  .word 0x90870008
  .word 0x8c83000c
  .word 0x24050003
  .word 0x10650221
  .word 0x00000000
  .word 0x24040002
  .word 0x106400a2
  .word 0x00000000
  .word 0x24020001
  .word 0x10620028
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000028b
  .word 0x00000000
  .word 0x92440000
  .word 0x0c05ba48
  .word 0x00000000
  .word 0x0c05c9f8
  .word 0x00000000
  .word 0x92420000
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x0220202d
  .word 0x0c05ba14
  .word 0x00000000
  .word 0x0011243c
  .word 0x0004243f
  .word 0x3c03006a
  .word 0x24633340
  .word 0x00641821
  .word 0x80630000
  .word 0x0062082a
  .word 0x10200007
  .word 0x00000000
  .word 0x24040a2d
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x24040a2d
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0xa2400008
  .word 0x24020001
  .word 0xae42000c
  .word 0x1000026d
  .word 0x00000000
  .word 0x92420002
  .word 0x2c410008
  .word 0x10200056
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463b460
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x28e10004
  .word 0x10200004
  .word 0x00000000
  .word 0xae44000c
  .word 0x1000004e
  .word 0x00000000
  .word 0xae45000c
  .word 0x1000004b
  .word 0x00000000
  .word 0x28e10004
  .word 0x1020000a
  .word 0x00000000
  .word 0x14e00004
  .word 0x00000000
  .word 0x92440000
  .word 0x0c05c968
  .word 0x00000000
  .word 0x24020002
  .word 0xae42000c
  .word 0x1000003f
  .word 0x00000000
  .word 0xae45000c
  .word 0x1000003c
  .word 0x00000000
  .word 0x28e10004
  .word 0x10200004
  .word 0x00000000
  .word 0xae44000c
  .word 0x10000036
  .word 0x00000000
  .word 0xae45000c
  .word 0x10000033
  .word 0x00000000
  .word 0x28e10004
  .word 0x10200004
  .word 0x00000000
  .word 0xae44000c
  .word 0x1000002d
  .word 0x00000000
  .word 0xae45000c
  .word 0x1000002a
  .word 0x00000000
  .word 0x28e10004
  .word 0x10200004
  .word 0x00000000
  .word 0xae44000c
  .word 0x10000024
  .word 0x00000000
  .word 0xae45000c
  .word 0x10000021
  .word 0x00000000
  .word 0x28e10004
  .word 0x10200004
  .word 0x00000000
  .word 0xae44000c
  .word 0x1000001b
  .word 0x00000000
  .word 0xae45000c
  .word 0x10000018
  .word 0x00000000
  .word 0x28e10004
  .word 0x10200004
  .word 0x00000000
  .word 0xae44000c
  .word 0x10000012
  .word 0x00000000
  .word 0xae45000c
  .word 0x1000000f
  .word 0x00000000
  .word 0x28e10004
  .word 0x10200004
  .word 0x00000000
  .word 0xae44000c
  .word 0x10000009
  .word 0x00000000
  .word 0xae45000c
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843330
  .word 0x240500fb
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e43000c
  .word 0x24020002
  .word 0x1462020b
  .word 0x00000000
  .word 0x92420008
  .word 0x24420001
  .word 0xae220000
  .word 0x24040a14
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24040a15
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24040a16
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24040a17
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x100001f6
  .word 0x00000000
  .word 0x10c001f4
  .word 0x00000000
  .word 0x92420002
  .word 0x2c410008
  .word 0x10200111
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463b440
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x10e40065
  .word 0x00000000
  .word 0x24020001
  .word 0x10e20035
  .word 0x00000000
  .word 0x10e00003
  .word 0x00000000
  .word 0x1000006e
  .word 0x00000000
  .word 0x26440024
  .word 0x0c05c9d4
  .word 0x00000000
  .word 0x24030001
  .word 0x1443001a
  .word 0x00000000
  .word 0x0c05ca8c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0xa2430008
  .word 0x100000f8
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0ef868
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x92440001
  .word 0x0c05ba48
  .word 0x00000000
  .word 0x24020002
  .word 0xa2420008
  .word 0x100000eb
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420008
  .word 0x100000e7
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0ef868
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x92440001
  .word 0x0c05ba48
  .word 0x00000000
  .word 0x24020002
  .word 0xa2420008
  .word 0x100000da
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420008
  .word 0x100000d6
  .word 0x00000000
  .word 0x24040989
  .word 0x0c0e545c
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0ef868
  .word 0x00000000
  .word 0x24030001
  .word 0x14430021
  .word 0x00000000
  .word 0x92420001
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x0220202d
  .word 0x0c05ba48
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c05ba14
  .word 0x00000000
  .word 0x0011243c
  .word 0x0004243f
  .word 0x3c03006a
  .word 0x24633340
  .word 0x00641821
  .word 0x80630000
  .word 0x0062082a
  .word 0x10200007
  .word 0x00000000
  .word 0x24040a2d
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x24040a2d
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24020002
  .word 0xa2420008
  .word 0x100000ad
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420008
  .word 0x100000a9
  .word 0x00000000
  .word 0x92440001
  .word 0x0c05b840
  .word 0x00000000
  .word 0x24030001
  .word 0x14430007
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x92440001
  .word 0x0040282d
  .word 0x0c05b9e8
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420008
  .word 0x10000099
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843330
  .word 0x2405014a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000092
  .word 0x00000000
  .word 0x10e5004d
  .word 0x00000000
  .word 0x10e4003d
  .word 0x00000000
  .word 0x24020001
  .word 0x10e2002c
  .word 0x00000000
  .word 0x10e00003
  .word 0x00000000
  .word 0x10000048
  .word 0x00000000
  .word 0x26440024
  .word 0x0c05c9d4
  .word 0x00000000
  .word 0x24030001
  .word 0x1443001e
  .word 0x00000000
  .word 0x24040009
  .word 0x0c0e35bc
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x24020001
  .word 0xa2420008
  .word 0x10000078
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000f
  .word 0x00000000
  .word 0x2644002a
  .word 0x0c05c9d4
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x24020002
  .word 0xa2420008
  .word 0x1000006b
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420008
  .word 0x10000067
  .word 0x00000000
  .word 0xa2430008
  .word 0x10000064
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420008
  .word 0x10000060
  .word 0x00000000
  .word 0x2644002a
  .word 0x0c05c9d4
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x24020002
  .word 0xa2420008
  .word 0x10000056
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420008
  .word 0x10000052
  .word 0x00000000
  .word 0x26440030
  .word 0x0c05c9d4
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x24020003
  .word 0xa2420008
  .word 0x10000048
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420008
  .word 0x10000044
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420008
  .word 0x10000040
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843330
  .word 0x24050182
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000039
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420008
  .word 0x10000035
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420008
  .word 0x10000031
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420008
  .word 0x1000002d
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420008
  .word 0x10000029
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420008
  .word 0x10000025
  .word 0x00000000
  .word 0x10e00003
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x26440024
  .word 0x0c05c9d4
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843330
  .word 0x24050199
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24040008
  .word 0x0c0e35bc
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x24020001
  .word 0xa2420008
  .word 0x1000000e
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420008
  .word 0x1000000a
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420008
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843330
  .word 0x240501aa
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24020001
  .word 0xae42000c
  .word 0x24040a14
  .word 0x0c0e5474
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x0c05b750
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x24050001
  .word 0x0c05c710
  .word 0x00000000
  .word 0x24040a15
  .word 0x0c0e5474
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x0c05b750
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0000282d
  .word 0x0c05c710
  .word 0x00000000
  .word 0x24040a16
  .word 0x0c0e5474
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x0c05b750
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x24050001
  .word 0x0c05c880
  .word 0x00000000
  .word 0x24040a17
  .word 0x0c0e5474
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x0c05b750
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0000282d
  .word 0x0c05c880
  .word 0x00000000
  .word 0x24040007
  .word 0x0c0e35bc
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x24040007
  .word 0x0c0e35bc
  .word 0x00000000
  .word 0x24030002
  .word 0x1443009a
  .word 0x00000000
  .word 0x24040007
  .word 0x0c0e35bc
  .word 0x00000000
  .word 0x24030002
  .word 0x14430010
  .word 0x00000000
  .word 0x27a4004e
  .word 0x0c05cb14
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843330
  .word 0x240501ca
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x87a4004e
  .word 0x0c05cb30
  .word 0x00000000
  .word 0x0c05cac8
  .word 0x00000000
  .word 0x0c0f0c2c
  .word 0x00000000
  .word 0x14400081
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843330
  .word 0x240501d0
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x1000007a
  .word 0x00000000
  .word 0x92420002
  .word 0x2c410008
  .word 0x10200030
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463b420
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x92440000
  .word 0x0c05b99c
  .word 0x00000000
  .word 0x92440000
  .word 0x0c05c6d4
  .word 0x00000000
  .word 0x10000026
  .word 0x00000000
  .word 0x92420000
  .word 0x24440960
  .word 0x0c0e5468
  .word 0x00000000
  .word 0x92420000
  .word 0x24440990
  .word 0x0c0e5468
  .word 0x00000000
  .word 0x92440000
  .word 0x0c05c6d4
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x92440000
  .word 0x0c05c6d4
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x92440000
  .word 0x0c05c6d4
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x92420000
  .word 0x24440960
  .word 0x0c0e545c
  .word 0x00000000
  .word 0x92440000
  .word 0x0c05c6d4
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843330
  .word 0x240501f6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x92430002
  .word 0x24020007
  .word 0x10620008
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x92440000
  .word 0x0c05ca94
  .word 0x00000000
  .word 0x24030001
  .word 0x14430007
  .word 0x00000000
  .word 0x92440000
  .word 0x0c05caac
  .word 0x00000000
  .word 0x92440000
  .word 0x0c0ef6f4
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x92440000
  .word 0x0040282d
  .word 0x0c05b9e8
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b248
  .word 0x00000000
  .word 0x0c05ca18
  .word 0x00000000
  .word 0x92420002
  .word 0x2c410008
  .word 0x10200010
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463b400
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0c05ca24
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x0c05cab8
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843330
  .word 0x24050218
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843330
  .word 0x2405021c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3a020003
  .word 0x0002102b
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#undef FUN_003c33c0
#undef FUN_003c3e80
// FUN_003C3E80


u32 FUN_003c3e80(u8 *param_1)
{
  int iVar1;
  int iStack_4;

  iStack_4 = 0;
  if (FUN_003c33c0_call(param_1,&iStack_4,
                   (*(int *)(param_1 + 0xc) == 2) &&
                   (FUN_003bf130() == 1)) != 1) {
    goto return_zero;
  }
  if (iStack_4 != 0) {
    iVar1 = (int)(param_1 + (iStack_4 + -1) * 6);
    FUN_003bf180(*(u16 *)(iVar1 + 0x20),*(u8 *)(iVar1 + 0x22),
                 *(u8 *)(iVar1 + 0x23));
  }
  goto return_one;

return_zero:
  return 0;
return_one:
  return 1;
}

#define FUN_003c3e80(...) FUN_003c3e80(__VA_ARGS__)
#undef FUN_003c3f40
// FUN_003C3F40


u8 *FUN_003c3f40(u32 param_1)
{
  int index;

  index = param_1 & 0xff;
  if (index >= 0x2a) {
    return 0;
  }

  return PTR_DAT_006a3590_abs[index];
}

#define FUN_003c3f40(...) FUN_003c3f40(__VA_ARGS__)
#undef FUN_003c3f80
// FUN_003C3F80


u8* FUN_003c3f80(s32 socialLink)
{
  u8* result;

  if (FUN_0016dce0_direct((s16)socialLink) == 0)
  {
    result = NULL;
  }
  else
  {
    result = PTR_DAT_006a38e0_abs[socialLink];
  }

  return result;
}

#define FUN_003c3f80(...) FUN_003c3f80(__VA_ARGS__)
#undef FUN_003c3fe0
// FUN_003C3FE0


u8* FUN_003c3fe0(s32 socialLink)
{
  u8* result;

  if (FUN_0016dce0_direct((s16)socialLink) == 0)
  {
    result = NULL;
  }
  else
  {
    result = PTR_DAT_006a36a0_abs[socialLink];
  }

  return result;
}

#define FUN_003c3fe0(...) FUN_003c3fe0(__VA_ARGS__)
