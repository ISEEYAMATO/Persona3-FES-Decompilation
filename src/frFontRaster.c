#include "temporary.h"
typedef int (*code)(...);
typedef u32 undefined3;
typedef u32 int3;
#define CONCAT13(a,b) ((((u32)(a) & 0xffu) << 24) | ((u32)(b) & 0x00ffffffu))

extern u32 DAT_006a28d0;
extern u8 DAT_006a28b0[];
extern u8 DAT_006a2130[];
#pragma alias DAT_006a2130_abs DAT_006a2130
extern u8 DAT_006a2130_abs[];
extern u8 DAT_006a29f0[];
#pragma alias DAT_006a28d0_abs DAT_006a28d0
extern u32 DAT_006a28d0_abs[];
extern u16 DAT_006a28f0[];
#pragma alias DAT_006a28f0_abs DAT_006a28f0
extern u16 DAT_006a28f0_abs[];
extern u32 DAT_0095ae10;
#pragma alias DAT_0095ae10_abs DAT_0095ae10
extern u32 DAT_0095ae10_abs[];
extern u32 DAT_00960088;
#pragma alias DAT_00960088_abs DAT_00960088
extern u32 DAT_00960088_abs[];
extern code DAT_00960090;
#pragma alias DAT_00960090_abs DAT_00960090
extern code DAT_00960090_abs[];
extern code DAT_009600a0;
#pragma alias DAT_009600a0_abs DAT_009600a0
extern code DAT_009600a0_abs[];
extern code DAT_00960178;
#pragma alias DAT_00960178_abs DAT_00960178
extern code DAT_00960178_abs[];
extern code DAT_0096017c;
#pragma alias DAT_0096017c_abs DAT_0096017c
extern code DAT_0096017c_abs[];
extern u8 *DAT_007ce644;
#define piGpffffb954 ((int *)DAT_007ce644)
#define uGpffffb954 (*(u32 *)DAT_007ce644)
#define iGpffffb954 DAT_007ce644

#ifndef CONCAT44
#define CONCAT44(hi,lo) ((((u64)(hi)) << 32) | (u32)(lo))
#endif

/* Region 0x390000-0x3CFFFF recovered prototypes */
void FUN_003b35e0(int param_1);
void FUN_003b3740(void);
void FUN_003b3770(void);
u64  FUN_003b38f0(float param_1,int param_2,int param_3,u32 *param_4,int param_5,int param_6,  int param_7,u32 param_8);
u32 FUN_003b3d60(u32 param_1,u32 param_2,u32 param_3);
u32 FUN_003b3dd0(u32 param_1,int param_2);
u32 FUN_003b3e00(u32 param_1,int param_2);
u32 FUN_003b3e60(u32 param_1,u32 param_2,u32 param_3);
void FUN_003b3f90(int param_1,u8 *param_2,int param_3);
/* Region call-cast macros */
#define FUN_003b35e0(...) ((void (*)(...))FUN_003b35e0)(__VA_ARGS__)
#define FUN_003b3740(...) ((void (*)(...))FUN_003b3740)(__VA_ARGS__)
#define FUN_003b3770(...) ((void (*)(...))FUN_003b3770)(__VA_ARGS__)
#define FUN_003b38f0(...) ((u64 (*)(...))FUN_003b38f0)(__VA_ARGS__)
#define FUN_003b3d60(...) ((long (*)(...))FUN_003b3d60)(__VA_ARGS__)
#define FUN_003b3dd0(...) ((long (*)(...))FUN_003b3dd0)(__VA_ARGS__)
#define FUN_003b3e00(...) ((u32 (*)(...))FUN_003b3e00)(__VA_ARGS__)
#define FUN_003b3e60(...) ((u32 (*)(...))FUN_003b3e60)(__VA_ARGS__)
#define FUN_003b3f90(...) ((void (*)(...))FUN_003b3f90)(__VA_ARGS__)

#undef FUN_003b35e0
/* W389 residual: register-coloring cycle in the loop (retail keeps limit in $a0 and node in $a1; candidate swaps them) plus commutative addu. Six-knob singles left nd=7/object=344 unchanged for lifetimes, propagation, strength-reduction, and dead-assignments; loop-invariants/common-subs worsened nd to 81/151; pair sweep had no win; declaration swaps were neutral. */
/* W421 row classification: baseline nd=7/object=344/window=352 (rate
 * 0.020349). Offsets 172/188/192/196/200/204/212 are a register-role cycle:
 * candidate uses `$a1,$a0,$a0,$a0,$a0,$a0,$a1` where retail uses
 * `$a0,$a1,$a1,$a1,$a1,$a1,$a0` for the loop limit/node pair. Declaration
 * permutations and bound helpers stayed nd=7/344 and were reverted. */
// FUN_003B35E0
asm void FUN_003b35e0(int count)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x00101100
  .word 0x00501823
  .word 0x000310c0
  .word 0x00621021
  .word 0x00021080
  .word 0x24510018
  .word 0x8f82b954
  .word 0x10400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842898
  .word 0x24050024
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0220202d
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0xaf82b954
  .word 0x0040202d
  .word 0x0000282d
  .word 0x0220302d
  .word 0x0c148502
  .word 0x00000000
  .word 0x8f83b954
  .word 0xac700000
  .word 0x8f84b954
  .word 0x24830018
  .word 0xac830004
  .word 0x8f83b954
  .word 0x8c660004
  .word 0x24c3001c
  .word 0xacc3000c
  .word 0x8f83b954
  .word 0xac660010
  .word 0x0000382d
  .word 0x2604ffff
  .word 0x10000008
  .word 0x00000000
  .word 0x8cc3000c
  .word 0x24650200
  .word 0xacc50018
  .word 0x00a0302d
  .word 0x24a3001c
  .word 0xaca3000c
  .word 0x24e70001
  .word 0x00e4182a
  .word 0x1460fff7
  .word 0x00000000
  .word 0x8f83b954
  .word 0xac660014
  .word 0x8f83b954
  .word 0x8c700010
  .word 0x10000011
  .word 0x00000000
  .word 0x24040020
  .word 0x0080282d
  .word 0x24060004
  .word 0x24074504
  .word 0x0c13383c
  .word 0x00000000
  .word 0xae020014
  .word 0x14400007
  .word 0x00000000
  .word 0x3c04006a
  .word 0x248428b0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x8e100018
  .word 0x1600ffef
  .word 0x00000000
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#define FUN_003b35e0(...) ((void (*)(...))FUN_003b35e0)(__VA_ARGS__)
#undef FUN_003b3740
// FUN_003B3740


void FUN_003b3740(void)



{

  (*DAT_0096017c_abs)(DAT_007ce644);

  DAT_007ce644 = 0;

  return;

}
#define FUN_003b3740(...) ((void (*)(...))FUN_003b3740)(__VA_ARGS__)
#undef FUN_003b3770
// FUN_003B3770


asm void FUN_003b3770(void)
{
  .set noreorder
  .word 0x0000182d
  .word 0x8f84b954
  .word 0x8c840008
  .word 0x10000056
  .word 0x00000000
  .word 0x8c850000
  .word 0x30a50001
  .word 0x10a00004
  .word 0x00000000
  .word 0x8c850010
  .word 0x14a00004
  .word 0x00000000
  .word 0x8485000a
  .word 0x24a5ffff
  .word 0xa485000a
  .word 0x8485000a
  .word 0x04a10047
  .word 0x00000000
  .word 0x1460001c
  .word 0x00000000
  .word 0x8c850018
  .word 0x8f83b954
  .word 0xac650008
  .word 0x8f85b954
  .word 0x8ca30008
  .word 0x14600002
  .word 0x00000000
  .word 0xaca0000c
  .word 0x8f83b954
  .word 0x24650014
  .word 0x8c630014
  .word 0x10600006
  .word 0x00000000
  .word 0xac640018
  .word 0x8f83b954
  .word 0xac640014
  .word 0x10000004
  .word 0x00000000
  .word 0xaca40000
  .word 0x8f83b954
  .word 0xac640010
  .word 0xac800018
  .word 0x0000182d
  .word 0x8f84b954
  .word 0x8c840008
  .word 0x1000002c
  .word 0x00000000
  .word 0x8c850018
  .word 0x14a00015
  .word 0x00000000
  .word 0x8f85b954
  .word 0xaca3000c
  .word 0xac600018
  .word 0x8f85b954
  .word 0x24a60014
  .word 0x8ca50014
  .word 0x10a00006
  .word 0x00000000
  .word 0xaca40018
  .word 0x8f85b954
  .word 0xaca40014
  .word 0x10000004
  .word 0x00000000
  .word 0xacc40000
  .word 0x8f85b954
  .word 0xaca40010
  .word 0xac800018
  .word 0x0000202d
  .word 0x10000015
  .word 0x00000000
  .word 0xac650018
  .word 0x8f85b954
  .word 0x24a60014
  .word 0x8ca50014
  .word 0x10a00006
  .word 0x00000000
  .word 0xaca40018
  .word 0x8f85b954
  .word 0xaca40014
  .word 0x10000004
  .word 0x00000000
  .word 0xacc40000
  .word 0x8f85b954
  .word 0xaca40010
  .word 0xac800018
  .word 0x8c640018
  .word 0x10000003
  .word 0x00000000
  .word 0x0080182d
  .word 0x8c840018
  .word 0x1480ffaa
  .word 0x00000000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#define FUN_003b3770(...) ((void (*)(...))FUN_003b3770)(__VA_ARGS__)
#undef FUN_003b38f0
/* W389 pragma pair: opt_loop_invariants on + opt_lifetimes on; without nd=740/object=1084, with nd=709/object=1072; window=1136. */
#pragma push
#pragma opt_loop_invariants on
#pragma opt_lifetimes on
// FUN_003B38F0
asm u64 FUN_003b38f0(float param_1,int param_2,int param_3,u32 *param_4,int param_5,int param_6,
            int param_7,u32 param_8)
{
  .set noreorder
  .word 0x27bdfe40
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
  .word 0x460065c6
  .word 0x00c0902d
  .word 0x00e0882d
  .word 0x0100a82d
  .word 0x0120a02d
  .word 0x0140802d
  .word 0x44840000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d83
  .word 0x44850000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000d03
  .word 0x321300ff
  .word 0x3c06006a
  .word 0x24c628d0
  .word 0x27a500a0
  .word 0x24040004
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x27a30080
  .word 0x24020020
  .word 0x10600008
  .word 0x00000000
  .word 0xa0600000
  .word 0x24630001
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0xe7b60080
  .word 0xe7b50084
  .word 0x06a00006
  .word 0x00000000
  .word 0x44950000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00151842
  .word 0x32a20001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x4600b040
  .word 0xe7a10088
  .word 0xe7b5008c
  .word 0xe7b60090
  .word 0x06800006
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00141842
  .word 0x32820001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x4600a800
  .word 0xe7a00094
  .word 0xe7a10098
  .word 0xe7a0009c
  .word 0x8e42001c
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842898
  .word 0x24050099
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e42001c
  .word 0x8c54000c
  .word 0x86820008
  .word 0x10510022
  .word 0x00000000
  .word 0x0240202d
  .word 0x8e850004
  .word 0x0c0ec10c
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e43001c
  .word 0x94620004
  .word 0x2442ffff
  .word 0xa4620004
  .word 0x8e45001c
  .word 0x10a00014
  .word 0x00000000
  .word 0x94a20004
  .word 0x14400011
  .word 0x00000000
  .word 0x8ca4000c
  .word 0x10800006
  .word 0x00000000
  .word 0x8c830000
  .word 0x2402fffe
  .word 0x00621024
  .word 0xac820000
  .word 0xac800010
  .word 0x8ca40008
  .word 0x0c0ed160
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42ae10
  .word 0x2443ffff
  .word 0x3c020096
  .word 0xac43ae10
  .word 0xae51001c
  .word 0x8e34000c
  .word 0x8e820000
  .word 0x34420001
  .word 0xae820000
  .word 0x16600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000006e
  .word 0x00000000
  .word 0x27a400c0
  .word 0x0000282d
  .word 0x24060100
  .word 0x0c148502
  .word 0x00000000
  .word 0x3c020096
  .word 0xc4400088
  .word 0x46170141
  .word 0x0000102d
  .word 0x00102e02
  .word 0x00102402
  .word 0x00101a02
  .word 0x30aa00ff
  .word 0x31490001
  .word 0x448a2000
  .word 0x308800ff
  .word 0x31070001
  .word 0x44881800
  .word 0x306600ff
  .word 0x30c50001
  .word 0x44861000
  .word 0x32640001
  .word 0x44930800
  .word 0x10000044
  .word 0x00000000
  .word 0x00021980
  .word 0x007d1821
  .word 0x246c00c0
  .word 0xe5850008
  .word 0xe5940018
  .word 0x000258c0
  .word 0x017d1821
  .word 0x246300a0
  .word 0xc4600000
  .word 0xe5800010
  .word 0xc4600004
  .word 0xe5800014
  .word 0x05400004
  .word 0x00000000
  .word 0x46802020
  .word 0x10000007
  .word 0x00000000
  .word 0x000a1842
  .word 0x00691825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe5800020
  .word 0x05000004
  .word 0x00000000
  .word 0x46801820
  .word 0x10000007
  .word 0x00000000
  .word 0x00081842
  .word 0x00671825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe5800024
  .word 0x04c00004
  .word 0x00000000
  .word 0x46801020
  .word 0x10000007
  .word 0x00000000
  .word 0x00061842
  .word 0x00651825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe5800028
  .word 0x06600004
  .word 0x00000000
  .word 0x46800820
  .word 0x10000007
  .word 0x00000000
  .word 0x00131842
  .word 0x00641825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe580002c
  .word 0x017d1821
  .word 0x24630080
  .word 0xc4600000
  .word 0xe5800000
  .word 0xc4600004
  .word 0xe5800004
  .word 0x24420001
  .word 0x28430004
  .word 0x1460ffbb
  .word 0x00000000
  .word 0x24040001
  .word 0x8e850014
  .word 0x3c020096
  .word 0x8c420090
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x27a500c0
  .word 0x0080302d
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000102d
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
  .word 0x27bd01c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma pop
#pragma opt_lifetimes reset
#pragma opt_loop_invariants reset
#define FUN_003b38f0(...) ((u64 (*)(...))FUN_003b38f0)(__VA_ARGS__)
#undef FUN_003b3d60
// FUN_003B3D60


u32 FUN_003b3d60(u32 param_1,u32 param_2,u32 param_3)
{
  u32 result;

  result = FUN_003b3e00_raw(param_1,param_3);
  if (result == 0) {
    result = FUN_003b3e60_raw(param_1,param_2,param_3);
    if (result == 0) {
      result = 0;
    }
  }

  return result;
}

#define FUN_003b3d60(...) ((long (*)(...))FUN_003b3d60)(__VA_ARGS__)
#undef FUN_003b3dd0
// FUN_003B3DD0


u32 FUN_003b3dd0(u32 param_1,int param_2)
{
  u32 result;

  result = FUN_003b3e00_typed(param_1,param_2);
  if (result == 0) {
    result = 0;
  }

  return result;
}

#define FUN_003b3dd0(...) ((long (*)(...))FUN_003b3dd0)(__VA_ARGS__)
#undef FUN_003b3e00
// FUN_003B3E00


u32 FUN_003b3e00(u32 param_1,int param_2)
{
  u32 *entry;

  entry = *(u32 **)(iGpffffb954 + 8);
  goto check;
body:
  if (entry[1] != param_1) {
    goto next;
  }
  if (*(s16 *)((u8 *)entry + 8) != param_2) {
    goto next;
  }
  *(u16 *)((u8 *)entry + 10) = 1;
  entry[0] |= 1;
  goto done;
next:
  entry = (u32 *)entry[6];
check:
  if (entry != 0) {
    goto body;
  }
  entry = 0;
done:
  return (u32)entry;
}

#define FUN_003b3e00(...) ((u32 (*)(...))FUN_003b3e00)(__VA_ARGS__)
#undef FUN_003b3e60
#undef FUN_003b3f90
// FUN_003B3E60


u32 FUN_003b3e60(u32 param_1,u32 param_2,u32 param_3)
{
  u32 *puVar1;

  if (param_2 == 0) {
    FUN_0019d3f0("frFontRaster.c",0x123);
  }
  puVar1 = *(u32 **)(iGpffffb954 + 0x10);
  if (puVar1 != (u32 *)0x0) {
    *(u32 *)(iGpffffb954 + 0x10) = puVar1[6];
    if (*(int *)(iGpffffb954 + 0x10) == 0) {
      *(u32 *)(iGpffffb954 + 0x14) = 0;
    }
    puVar1[6] = 0;
    if (*(int *)(iGpffffb954 + 0xc) != 0) {
      *(u32 *)(*(int *)(iGpffffb954 + 0xc) + 0x18) = (u32)puVar1;
      *(u32 *)(iGpffffb954 + 0xc) = (u32)puVar1;
    }
    else {
      *(u32 *)(iGpffffb954 + 0xc) = (u32)puVar1;
      *(u32 *)(iGpffffb954 + 8) = (u32)puVar1;
    }
    puVar1[4] = 0;
  }
  if (puVar1 == (u32 *)0x0) {
    return 0;
  }
  FUN_003b3f90((int)puVar1,(u8 *)param_2,param_3);
  puVar1[1] = param_1;
  *(u16 *)((int)puVar1 + 10) = 1;
  *puVar1 = *puVar1 | 1;
  FUN_00521250(puVar1[3],param_2,0x200);
  puVar1[4] = 0;
  return (u32)puVar1;
}
#define FUN_003b3e60(...) ((u32 (*)(...))FUN_003b3e60)(__VA_ARGS__)
#undef FUN_003b3f90
// FUN_003B3F90


void FUN_003b3f90(int param_1,u8 *param_2,int param_3)



{

  short uVar1;

  short uVar2;

  u32 lVar3;

  short *puVar8;

  u32 uVar7;

  u16 *puVar6;

  u32 uVar5;

  int iVar4;

  u32 base;
  u32 outer16;
  u32 inner16;
  u32 rowOffset;

  u8 rawByte;

  int uVar10;

  int uVar9;

  u8 *src;

  u8 *pbVar11;
  u16 auStack_100 [128];

  

  if (param_2 == (u8 *)0x0) {
    FUN_005225a8((u32)(uintptr_t)DAT_006a29f0);
    FUN_0019d3f0("frFontRaster.c",0x179);
    return;
  }
  puVar8 = (short *)DAT_006a28f0_abs;


    puVar6 = auStack_100;

    iVar4 = 0x40;

    do {

      uVar1 = *puVar8;

      uVar2 = puVar8[1];

      puVar8 = puVar8 + 2;

      iVar4 = iVar4 + -1;

      *puVar6 = uVar1;

      puVar6[1] = uVar2;

      puVar6 = puVar6 + 2;

    } while (0 < iVar4);

    src = param_2;
    iVar4 = FUN_004ce200(*(u32 *)(param_1 + 0x14),0,9);

    for (uVar5 = 0; (int)uVar5 < 0x20; uVar5 = uVar5 + 1) {

      uVar7 = 0;

      outer16 = uVar5 & 0xffff;
      puVar6 = auStack_100 + ((int)(outer16 & 7) >> 2) * 0x40 + (outer16 & 3) * 0x10;
      base = ((int)outer16 >> 2) * 0x80;

      while ((int)uVar7 < 0x20) {
        inner16 = uVar7 & 0xffff;

        uVar9 = (u32)puVar6[inner16 & 0xf];
        rowOffset = ((int)inner16 >> 4) * 0x20;
        rowOffset += base;
        uVar9 = (uVar9 + (rowOffset & 0xffffU)) & 0xffff;
        pbVar11 = (u8 *)(iVar4 + ((int)uVar9 >> 1));
        uVar10 = *src >> ((uVar7 & 1) << 2);
        rawByte = uVar10 & 0xf;
        if ((uVar9 & 1) == 0) {

          *pbVar11 = rawByte;
        }
        else {

          *pbVar11 = *pbVar11 | (u8)((rawByte << 4) & 0xf0);
        }

        if ((uVar7 & 1) != 0) {

          src = src + 1;

        }

        uVar7 = uVar7 + 1;
      }
    }

    FUN_004cde00(*(u32 *)(param_1 + 0x14));

    lVar3 = FUN_004cdf30(*(u32 *)(param_1 + 0x14),1);

    if (lVar3 == 0) {

      FUN_0019d3f0("frFontRaster.c",0x1ac);

    }

    FUN_00521250(lVar3,(u32)DAT_006a2130_abs + param_3 * 0x40,0x40);

    FUN_004cde40(*(u32 *)(param_1 + 0x14));

    *(short *)(param_1 + 8) = (short)param_3;


  return;

}
#define FUN_003b3f90(...) ((void (*)(...))FUN_003b3f90)(__VA_ARGS__)
