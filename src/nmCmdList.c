#include "temporary.h"
#ifndef SQRT
#define SQRT(x) sqrtf(x)
#endif
#pragma alias FUN_0052e878_f32 FUN_0052e878
extern f32 FUN_0052e878_f32(f32 value);
#pragma alias FUN_0052e9e8_f32 FUN_0052e9e8
extern f32 FUN_0052e9e8_f32(void);
typedef int (*code)(...);
typedef u32 undefined3;
typedef u32 int3;
#define CONCAT13(a,b) ((((u32)(a) & 0xffu) << 24) | ((u32)(b) & 0x00ffffffu))

extern u32 DAT_006a3e50;
#pragma alias DAT_006a3e50_abs DAT_006a3e50
extern u32 DAT_006a3e50_abs[];
extern u32 DAT_006a3e60;
#pragma alias DAT_006a3e60_abs DAT_006a3e60
extern u8 DAT_006a3e60_abs[];
#define DAT_006a3e60 (*(u32*)DAT_006a3e60_abs)
extern s32 DAT_006a3e90[];
extern s32 DAT_006a3eb0[];
extern f32 DAT_007cae18;
extern f32 DAT_007cb01c;
extern u16 DAT_007e094c;
extern u16 DAT_007e094e;
extern u16 DAT_007e0952;
extern u16 DAT_007e0956;
extern u16 DAT_007e0958;
extern u16 DAT_007e095a;
extern u32 DAT_0095be90;
extern u32 gp0xffffaa08;
extern char DAT_006a3e18[];
extern char DAT_006a3e30[];
#pragma alias DAT_0095be90_ptr DAT_0095be90
extern u32 DAT_0095be90_ptr[];
extern u32 DAT_0095be94;
extern u32 DAT_0095be95;
extern u32 DAT_0095be98;
extern u32 DAT_0095be9c;
extern u32 DAT_0095be9d;

#ifndef CONCAT44
#define CONCAT44(hi,lo) ((((u64)(hi)) << 32) | (u32)(lo))
#endif

extern void FUN_003b2cb0(float param_1,int param_2,int param_3,u32 param_4,
                         u32 param_5,u32 param_6,u32 param_7,u32 param_8,u32 param_9);
#pragma alias FUN_003b2cb0_color_first FUN_003b2cb0
extern void FUN_003b2cb0_color_first(float scale,u32 color,u32 active,
                                     int x,int y,u32 font,u32 text,
                                     u32 width,u32 flags);
#pragma alias FUN_003c63f0_typed FUN_003c63f0
extern u64 FUN_003c63f0_typed(int param_1);
#pragma alias FUN_003c4e70_typed FUN_003c4e70
extern void FUN_003c4e70_typed(int param_1);
#pragma alias FUN_003c6f80_typed FUN_003c6f80
extern u32 FUN_003c6f80_typed(int param_1);
#pragma alias FUN_003c75b0_typed FUN_003c75b0
extern u64 FUN_003c75b0_typed(void);
#pragma alias FUN_003a4360_typed FUN_003a4360
extern u64 FUN_003a4360_typed(u64 param_1,long param_2);
#pragma alias FUN_003a27c0_typed FUN_003a27c0
extern void FUN_003a27c0_typed(int param_1,s16 param_2);
#pragma alias FUN_003a2830_nm_typed FUN_003a2830
extern u32 FUN_003a2830_nm_typed(int param_1);
#pragma alias FUN_003a2750_nm_typed FUN_003a2750
extern int FUN_003a2750_nm_typed(int param_1);
#pragma alias DAT_0095be90_abs DAT_0095be90
extern u8 DAT_0095be90_abs[];
#pragma alias DAT_0095be94_abs DAT_0095be94
extern u8 DAT_0095be94_abs[];
#pragma alias DAT_0095be95_abs DAT_0095be95
extern u8 DAT_0095be95_abs[];
#pragma alias DAT_0095be98_abs DAT_0095be98
extern u32 DAT_0095be98_abs[];
#pragma alias DAT_0095be9c_abs DAT_0095be9c
extern u8 DAT_0095be9c_abs[];
#pragma alias DAT_0095be9d_abs DAT_0095be9d
extern u8 DAT_0095be9d_abs[];
#pragma alias FUN_003c7d50_ptr FUN_003c7d50
extern u8 *FUN_003c7d50_ptr(void);
#pragma alias FUN_003c8230_direct FUN_003c8230
extern u64 FUN_003c8230_direct(s32* param_1, int param_2);
#pragma alias FUN_003c6380_typed FUN_003c6380
extern u64 FUN_003c6380_typed(int param_1);
#pragma alias FUN_003c6900_typed FUN_003c6900
extern void FUN_003c6900_typed(int param_1);
#pragma alias FUN_003c69d0_typed FUN_003c69d0
extern void FUN_003c69d0_typed(int param_1);
#pragma alias FUN_003c6b70_typed FUN_003c6b70
extern u64 FUN_003c6b70_typed(int param_1);
#pragma alias FUN_003c6c50_typed FUN_003c6c50
extern u32 FUN_003c6c50_typed(int param_1);
#pragma alias FUN_003c6c80_typed FUN_003c6c80
extern u32 FUN_003c6c80_typed(int param_1);
#pragma alias FUN_003c7c90_typed FUN_003c7c90
extern void FUN_003c7c90_typed(int param_1);
#pragma alias FUN_005225a8_nm3 FUN_005225a8
extern void FUN_005225a8_nm3(const void *,const void *,int);
#pragma alias FUN_005225a8_nm1 FUN_005225a8
extern void FUN_005225a8_nm1(const void *);
#pragma alias FUN_001052b0_nm1 FUN_001052b0
extern void FUN_001052b0_nm1(const void *);
/* Region 0x390000-0x3CFFFF recovered prototypes */
void FUN_003c5e20(int param_1,u32 param_2);
void FUN_003c5e80(int param_1,u32 param_2);
void FUN_003c5ee0(int param_1,u32 param_2);
void FUN_003c5f40(int param_1,u32 param_2);
void FUN_003c5fa0(int param_1,int param_2);
u32 FUN_003c60c0(int param_1,int param_2);
u64 FUN_003c60f0(int param_1);
u32 FUN_003c6120(int param_1,int param_2);
u32 FUN_003c6270(int param_1);
u32 FUN_003c6380(int param_1);
u64 FUN_003c63f0(int param_1);
void FUN_003c6900(int param_1);
void FUN_003c69d0(int param_1);
u64 FUN_003c6b70(int param_1);
u32 FUN_003c6c50(int param_1);
u32 FUN_003c6c80(int param_1);
u32 FUN_003c6ca0(int param_1);
u32 FUN_003c6cc0(int param_1);
u32 FUN_003c6ce0(int param_1);
u32 FUN_003c6d10(int param_1);
void FUN_003c6d40(int param_1,u32 param_2,u32 param_3);
u64 FUN_003c6d60(int param_1,u32 param_2);
u32 FUN_003c6d80(int param_1);
u64 FUN_003c6e10(int param_1);
void FUN_003c6ea0(int param_1);
void FUN_003c6ec0(int param_1);
void FUN_003c6ee0(int param_1);
void FUN_003c6f10(int param_1);
void FUN_003c6f50(int param_1);
u32 FUN_003c6f80(int param_1);
int FUN_003c6fb0(int param_1);
void FUN_003c7000(int param_1);
void FUN_003c7070(float param_1,float *param_2,float *param_3,float *param_4);
void FUN_003c7270(void);
void FUN_003c72a0(int param_1);
#pragma alias FUN_003c72a0_typed FUN_003c72a0
extern void FUN_003c72a0_typed(u32 param_1);
u8 FUN_003c72d0(u64 param_1);
void FUN_003c7390(u64 param_1);
void FUN_003c73e0(u64 param_1);
u32 FUN_003c7430(u64 param_1);
u32 FUN_003c74e0(int param_1);
void FUN_003c7560(u8 param_1);
u32 FUN_003c75b0(void);
s8 FUN_003c7610(void);
u32 FUN_003c7650(int param_1);
u32 FUN_003c7700(void);
u32 FUN_003c77a0(void);
s8 FUN_003c7850(void);
u32 FUN_003c78d0(void);
void FUN_003c7990(long param_1);
#pragma alias FUN_003c7990_typed FUN_003c7990
extern void FUN_003c7990_typed(long param_1);
void FUN_003c7b90(void);
void FUN_003c7bc0(u64 param_1,u64 param_2);
void FUN_003c7c20(u64 param_1,u64 param_2,u64 param_3);
void FUN_003c7c90(int param_1);
u32 FUN_003c7d50(void);
u32 FUN_003c7d60(int param_1);
void FUN_003c7d80(int param_1,u64 param_2);
void FUN_003c7dd0(int param_1);
#pragma alias FUN_003a3060_typed FUN_003a3060
extern void FUN_003a3060_typed(s32 param_1);
void FUN_003c7e20(u32 p1,u32 p2,float p3,u32 p4,u32 p5,u32 p6,u32 p7,u32 p8);
u64  FUN_003c7e50(u32 param_1,u32 param_2,float param_3,u32 param_4,u32 param_5,u32 param_6,u32 param_7,u32 param_8,u32 param_9);
u64 FUN_003c8230(s32 *param_1,int param_2);
u64 FUN_003c82e0(int param_1);
u8 FUN_003c83b0(void);

/* Region call-cast macros */
#define FUN_003c5e20(...) ((void (*)(...))FUN_003c5e20)(__VA_ARGS__)
#define FUN_003c5e80(...) ((void (*)(...))FUN_003c5e80)(__VA_ARGS__)
#define FUN_003c5ee0(...) ((void (*)(...))FUN_003c5ee0)(__VA_ARGS__)
#define FUN_003c5f40(...) ((void (*)(...))FUN_003c5f40)(__VA_ARGS__)
#define FUN_003c5fa0(...) ((void (*)(...))FUN_003c5fa0)(__VA_ARGS__)
#define FUN_003c60f0(...) ((u64 (*)(...))FUN_003c60f0)(__VA_ARGS__)
#define FUN_003c6120(...) ((u32 (*)(...))FUN_003c6120)(__VA_ARGS__)
#define FUN_003c6270(...) ((u32 (*)(...))FUN_003c6270)(__VA_ARGS__)
#define FUN_003c6380(...) ((u64 (*)(...))FUN_003c6380)(__VA_ARGS__)
#define FUN_003c63f0(...) ((u64 (*)(...))FUN_003c63f0)(__VA_ARGS__)
#define FUN_003c6900(...) ((void (*)(...))FUN_003c6900)(__VA_ARGS__)
#define FUN_003c69d0(...) ((void (*)(...))FUN_003c69d0)(__VA_ARGS__)
#define FUN_003c6b70(...) ((u64 (*)(...))FUN_003c6b70)(__VA_ARGS__)
#define FUN_003c6c50(...) ((u32 (*)(...))FUN_003c6c50)(__VA_ARGS__)
#define FUN_003c6c80(...) ((u32 (*)(...))FUN_003c6c80)(__VA_ARGS__)
#define FUN_003c6ca0(...) ((u32 (*)(...))FUN_003c6ca0)(__VA_ARGS__)
#define FUN_003c6cc0(...) ((u32 (*)(...))FUN_003c6cc0)(__VA_ARGS__)
#define FUN_003c6ce0(...) ((u32 (*)(...))FUN_003c6ce0)(__VA_ARGS__)
#define FUN_003c6d10(...) ((u32 (*)(...))FUN_003c6d10)(__VA_ARGS__)
#define FUN_003c6d40(...) ((void (*)(...))FUN_003c6d40)(__VA_ARGS__)
#define FUN_003c6d60(...) ((u64 (*)(...))FUN_003c6d60)(__VA_ARGS__)
#define FUN_003c6d80(...) ((u32 (*)(...))FUN_003c6d80)(__VA_ARGS__)
#define FUN_003c6e10(...) ((u64 (*)(...))FUN_003c6e10)(__VA_ARGS__)
#define FUN_003c6ea0(...) ((void (*)(...))FUN_003c6ea0)(__VA_ARGS__)
#define FUN_003c6ec0(...) ((void (*)(...))FUN_003c6ec0)(__VA_ARGS__)
#define FUN_003c6ee0(...) ((void (*)(...))FUN_003c6ee0)(__VA_ARGS__)
#define FUN_003c6f10(...) ((void (*)(...))FUN_003c6f10)(__VA_ARGS__)
#define FUN_003c6f50(...) ((void (*)(...))FUN_003c6f50)(__VA_ARGS__)
#define FUN_003c6f80(...) ((u32 (*)(...))FUN_003c6f80)(__VA_ARGS__)
#define FUN_003c6fb0(...) ((int (*)(...))FUN_003c6fb0)(__VA_ARGS__)
#define FUN_003c7000(...) ((void (*)(...))FUN_003c7000)(__VA_ARGS__)
#define FUN_003c7070(...) ((void (*)(...))FUN_003c7070)(__VA_ARGS__)
#define FUN_003c7270(...) ((void (*)(...))FUN_003c7270)(__VA_ARGS__)
#define FUN_003c72a0(...) ((void (*)(...))FUN_003c72a0)(__VA_ARGS__)
#define FUN_003c72d0(...) ((u8 (*)(...))FUN_003c72d0)(__VA_ARGS__)
#define FUN_003c7390(...) ((void (*)(...))FUN_003c7390)(__VA_ARGS__)
#define FUN_003c73e0(...) ((void (*)(...))FUN_003c73e0)(__VA_ARGS__)
#define FUN_003c7430(...) ((u32 (*)(...))FUN_003c7430)(__VA_ARGS__)
#define FUN_003c74e0(...) ((u32 (*)(...))FUN_003c74e0)(__VA_ARGS__)
#define FUN_003c7560(...) ((void (*)(...))FUN_003c7560)(__VA_ARGS__)
#define FUN_003c75b0(...) ((u64 (*)(...))FUN_003c75b0)(__VA_ARGS__)
#define FUN_003c7610(...) ((s8 (*)(...))FUN_003c7610)(__VA_ARGS__)
#define FUN_003c7650(...) ((u32 (*)(...))FUN_003c7650)(__VA_ARGS__)
#define FUN_003c7700(...) ((u32 (*)(...))FUN_003c7700)(__VA_ARGS__)
#define FUN_003c77a0(...) ((u32 (*)(...))FUN_003c77a0)(__VA_ARGS__)
#define FUN_003c7850(...) ((s8 (*)(...))FUN_003c7850)(__VA_ARGS__)
#define FUN_003c78d0(...) ((u32 (*)(...))FUN_003c78d0)(__VA_ARGS__)
#define FUN_003c7990(...) ((void (*)(...))FUN_003c7990)(__VA_ARGS__)
#define FUN_003c7b90(...) ((void (*)(...))FUN_003c7b90)(__VA_ARGS__)
#define FUN_003c7bc0(...) ((void (*)(...))FUN_003c7bc0)(__VA_ARGS__)
#define FUN_003c7c20(...) ((void (*)(...))FUN_003c7c20)(__VA_ARGS__)
#define FUN_003c7c90(...) ((void (*)(...))FUN_003c7c90)(__VA_ARGS__)
#define FUN_003c7d50(...) ((u32 (*)(...))FUN_003c7d50)(__VA_ARGS__)
#define FUN_003c7d60(...) ((u32 (*)(...))FUN_003c7d60)(__VA_ARGS__)
#define FUN_003c7d80(...) ((void (*)(...))FUN_003c7d80)(__VA_ARGS__)
#define FUN_003c7dd0(...) ((void (*)(...))FUN_003c7dd0)(__VA_ARGS__)
#define FUN_003c7e20(...) ((void (*)(...))FUN_003c7e20)(__VA_ARGS__)
#define FUN_003c7e50(...) ((u64 (*)(...))FUN_003c7e50)(__VA_ARGS__)
#define FUN_003c8230(...) ((u64 (*)(...))FUN_003c8230)(__VA_ARGS__)
#define FUN_003c82e0(...) ((u64 (*)(...))FUN_003c82e0)(__VA_ARGS__)
#define FUN_003c83b0(...) ((u8 (*)(...))FUN_003c83b0)(__VA_ARGS__)

#undef FUN_003c5e20
// FUN_003C5E20


void FUN_003c5e20(int param_1,u32 param_2)



{

  if (param_2 == 0) {

    FUN_0019d3f0("nmCmdList.c",0x144);

  }

  *(int *)(*(int *)(param_1 + 0x24) + 0x34) = (int)param_2;

  return;

}
#define FUN_003c5e20(...) ((void (*)(...))FUN_003c5e20)(__VA_ARGS__)
#undef FUN_003c5e80
// FUN_003C5E80


void FUN_003c5e80(int param_1,u32 param_2)



{

  if (param_2 == 0) {

    FUN_0019d3f0("nmCmdList.c",0x153);

  }

  *(int *)(*(int *)(param_1 + 0x24) + 0x38) = (int)param_2;

  return;

}
#define FUN_003c5e80(...) ((void (*)(...))FUN_003c5e80)(__VA_ARGS__)
#undef FUN_003c5ee0
// FUN_003C5EE0


void FUN_003c5ee0(int param_1,u32 param_2)



{

  if (param_2 == 0) {

    FUN_0019d3f0("nmCmdList.c",0x172);

  }

  *(int *)(*(int *)(param_1 + 0x24) + 0x30) = (int)param_2;

  return;

}
#define FUN_003c5ee0(...) ((void (*)(...))FUN_003c5ee0)(__VA_ARGS__)
#undef FUN_003c5f40
// FUN_003C5F40


void FUN_003c5f40(int param_1,u32 param_2)



{

  if (param_2 == 0) {

    FUN_0019d3f0("nmCmdList.c",0x181);

  }

  *(int *)(*(int *)(param_1 + 0x24) + 0x40) = (int)param_2;

  return;

}
#define FUN_003c5f40(...) ((void (*)(...))FUN_003c5f40)(__VA_ARGS__)
#undef FUN_003c5fa0
// FUN_003C5FA0


asm void FUN_003c5fa0(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0902d
  .word 0x8c900024
  .word 0x24110001
  .word 0x8c820008
  .word 0x14520002
  .word 0x00000000
  .word 0x0000882d
  .word 0x24850004
  .word 0x0240302d
  .word 0x0c0f1278
  .word 0x00000000
  .word 0x1220000f
  .word 0x00000000
  .word 0x0040282d
  .word 0x8e03002c
  .word 0x16430009
  .word 0x00000000
  .word 0xae02002c
  .word 0x10000006
  .word 0x00000000
  .word 0x8ca40014
  .word 0x8c83000c
  .word 0x2463ffff
  .word 0xac83000c
  .word 0x8ca50010
  .word 0x14a0fffa
  .word 0x00000000
  .word 0x8e05002c
  .word 0x00a0202d
  .word 0x8e060020
  .word 0x10000003
  .word 0x00000000
  .word 0x8c840010
  .word 0x24c6ffff
  .word 0x0004182b
  .word 0x38630001
  .word 0x14600003
  .word 0x00000000
  .word 0x14c0fff9
  .word 0x00000000
  .word 0x14800010
  .word 0x00000000
  .word 0x10c0000e
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x8ca5000c
  .word 0x10a00002
  .word 0x00000000
  .word 0xae05002c
  .word 0x24c6ffff
  .word 0x0006182b
  .word 0x38630001
  .word 0x14600003
  .word 0x00000000
  .word 0x14a0fff6
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
#define FUN_003c5fa0(...) ((void (*)(...))FUN_003c5fa0)(__VA_ARGS__)
#undef FUN_003c60c0
// FUN_003C60C0
u32 FUN_003c60c0(int param_1,int param_2)
{
  u32 *puVar1;
  u32 *puVar2;
  u32 uVar3;

  puVar1 = *(u32 **)(param_1 + 0x24);
  puVar2 = *(u32 **)(param_2 + 0x14);
  uVar3 = puVar1[4] + 1;
  puVar1[4] = uVar3;
  puVar2[3] = uVar3;
  return 0;
}
#define FUN_003c60c0(...) ((u32 (*)(...))FUN_003c60c0)(__VA_ARGS__)
#undef FUN_003c60f0
// FUN_003C60F0


u64 FUN_003c60f0(int param_1)



{

  (*(code *)(*(int *)(param_1 + 0x24) + 0x40))();

  return 0;

}
#define FUN_003c60f0(...) ((u64 (*)(...))FUN_003c60f0)(__VA_ARGS__)
#undef FUN_003c6120
// W419 staged call-argument locals for FUN_003c6120; nd28/object324 was unchanged.
// W420 reversed mixed-argument static inline helper measured nd29/object324/window336; commutative OR helper measured nd32/object324/window336; reverted.
// W423 color-first FUN_003b2cb0 ABI alias (scale,color,active,x,y,...) matches retail setup order; nd28 -> 5, object324/window336; retained.
// FUN_003C6120

u32 FUN_003c6120(int param_1,int param_2)
{
  u32 *puVar1;
  u32 *puVar2;
  int iVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  int iVar5;
  u32 uVar7;
  u32 uVar8;
  u32 uVar9;
  u32 uVar10;
  u32 uVar11;

  puVar1 = *(u32 **)(param_1 + 0x24);
  puVar2 = *(u32 **)(param_2 + 0x14);
  iVar3 = *(int *)(*(int *)(puVar1[0xb] + 0x14) + 0xc);
  uVar4 = puVar2[3];
  if ((int)uVar4 < iVar3) {
    return 0;
  }
  uVar11 = (u32)((int)uVar4 < (int)(puVar1[8] + iVar3));
  if (uVar11 == 0) {
    return 0;
  }
  uVar5 = puVar1[5];
  uVar6 = puVar1[6];
  iVar5 = puVar1[3] * ((int)uVar4 - iVar3);
  puVar2[4] = puVar1[7];
  if ((*puVar1 & 0x800) != 0) {
    puVar2[0] = uVar5 + iVar5;
    puVar2[1] = uVar6;
  } else {
    puVar2[0] = uVar5;
    puVar2[1] = uVar6 + iVar5;
  }
  if (puVar2[2] != 0) {
    FUN_003b2cb0_color_first(0.0f,puVar2[0],puVar2[1],
                             puVar2[4] | 0xffffff00,
                             (u32)(param_2 == *(int *)(param_1 + 0xc)),
                             4,puVar2[2],0x10,0);
  }
  ((code)puVar1[0xc])(puVar2[0],puVar2[1],puVar2[4],param_1,param_2);
  return 0;
}
#define FUN_003c6120(...) ((u32 (*)(...))FUN_003c6120)(__VA_ARGS__)
#undef FUN_003c6270
// FUN_003C6270

u32 FUN_003c6270(int param_1)
{
  u32 *puVar1;
  u32 uVar2;
  u32 uVar3;

  puVar1 = *(u32 **)(param_1 + 0x24);
  FUN_003c63f0_typed(param_1);
  FUN_003c6900_typed(param_1);
  FUN_003c69d0_typed(param_1);
  FUN_003c6b70_typed(param_1);
  ((code)puVar1[0xe])(param_1);
  if ((*puVar1 & 0x1000) == 0) {
    FUN_003c6380_typed(param_1);
  }
  if ((*puVar1 & 0x200) != 0) {
    uVar3 = FUN_003c6c50_typed(param_1);
    if (uVar3 != 0) {
      return *(u32 *)uVar3;
    }
    uVar3 = FUN_003c6c80_typed(param_1);
    if (uVar3 != 0) {
      return 1;
    }
  }
  if ((*puVar1 & 2) == 0) {
    uVar2 = ((*puVar1 & 1) != 0) ? 3 : 2;
  } else {
    uVar2 = 0;
  }
  return uVar2;
}
#define FUN_003c6270(...) ((u32 (*)(...))FUN_003c6270)(__VA_ARGS__)
#undef FUN_003c6380
// FUN_003C6380


u32 FUN_003c6380(int param_1)
{
  int iVar2;
  u32 *puVar1;

  iVar2 = param_1;
  puVar1 = *(u32 **)((int)param_1 + 0x24);

  ((code)puVar1[0xd])(puVar1[5],puVar1[6],puVar1[7],iVar2);

  if ((*puVar1 & 0x40) != 0) {
    FUN_003c4e70(iVar2);
  }

  return 0;
}
#define FUN_003c6380(...) ((u32 (*)(...))FUN_003c6380)(__VA_ARGS__)
#undef FUN_003c63f0
// FUN_003C63F0

asm u64 FUN_003c63f0(int param_1)
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
  .word 0x8c930024
  .word 0x8e630000
  .word 0x2402ffef
  .word 0x00621824
  .word 0xae630000
  .word 0x2402ffdf
  .word 0x00621824
  .word 0xae630000
  .word 0x2402bfff
  .word 0x00621824
  .word 0xae630000
  .word 0x2402dfff
  .word 0x00621824
  .word 0xae630000
  .word 0x3c02fffe
  .word 0x3442ffff
  .word 0x00621824
  .word 0xae630000
  .word 0x3c02ffff
  .word 0x34427fff
  .word 0x00621824
  .word 0xae630000
  .word 0x30620004
  .word 0x10400115
  .word 0x00000000
  .word 0x30620400
  .word 0x14400112
  .word 0x00000000
  .word 0x30620800
  .word 0x1040003f
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94440952
  .word 0x30828000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443095a
  .word 0x30628000
  .word 0x1040000b
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f16bc
  .word 0x00000000
  .word 0x1040006c
  .word 0x00000000
  .word 0x8e620000
  .word 0x34424000
  .word 0xae620000
  .word 0x10000067
  .word 0x00000000
  .word 0x30822000
  .word 0x14400004
  .word 0x00000000
  .word 0x30622000
  .word 0x10400061
  .word 0x00000000
  .word 0x8e110024
  .word 0x0200202d
  .word 0x26050004
  .word 0x0c0f1320
  .word 0x00000000
  .word 0x10400017
  .word 0x00000000
  .word 0x8e25002c
  .word 0x8ca30014
  .word 0x8c64000c
  .word 0x8e230020
  .word 0x00641821
  .word 0x2464ffff
  .word 0x8c430014
  .word 0x8c63000c
  .word 0x0064182b
  .word 0x14600008
  .word 0x00000000
  .word 0x96030010
  .word 0x10830009
  .word 0x00000000
  .word 0x8ca30010
  .word 0xae23002c
  .word 0x10000005
  .word 0x00000000
  .word 0x8e030004
  .word 0x14430002
  .word 0x00000000
  .word 0xae22002c
  .word 0x10400042
  .word 0x00000000
  .word 0x8e620000
  .word 0x34422000
  .word 0xae620000
  .word 0x1000003d
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94440952
  .word 0x30821000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443095a
  .word 0x30621000
  .word 0x1040000b
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f16bc
  .word 0x00000000
  .word 0x1040002e
  .word 0x00000000
  .word 0x8e620000
  .word 0x34424000
  .word 0xae620000
  .word 0x10000029
  .word 0x00000000
  .word 0x30824000
  .word 0x14400004
  .word 0x00000000
  .word 0x30624000
  .word 0x10400023
  .word 0x00000000
  .word 0x8e110024
  .word 0x0200202d
  .word 0x26050004
  .word 0x0c0f1320
  .word 0x00000000
  .word 0x10400017
  .word 0x00000000
  .word 0x8e25002c
  .word 0x8ca30014
  .word 0x8c64000c
  .word 0x8e230020
  .word 0x00641821
  .word 0x2464ffff
  .word 0x8c430014
  .word 0x8c63000c
  .word 0x0064182b
  .word 0x14600008
  .word 0x00000000
  .word 0x96030010
  .word 0x10830009
  .word 0x00000000
  .word 0x8ca30010
  .word 0xae23002c
  .word 0x10000005
  .word 0x00000000
  .word 0x8e030004
  .word 0x14430002
  .word 0x00000000
  .word 0xae22002c
  .word 0x10400004
  .word 0x00000000
  .word 0x8e620000
  .word 0x34422000
  .word 0xae620000
  .word 0x8e650000
  .word 0x30a24000
  .word 0x14400091
  .word 0x00000000
  .word 0x30a22000
  .word 0x1440008e
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94440952
  .word 0x30820001
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443095a
  .word 0x30620001
  .word 0x1040001d
  .word 0x00000000
  .word 0x0000102d
  .word 0x8e120024
  .word 0x8e510020
  .word 0x0000a02d
  .word 0x1000000c
  .word 0x00000000
  .word 0x8e44002c
  .word 0x8e030004
  .word 0x1083000b
  .word 0x00000000
  .word 0x8c82000c
  .word 0xae42002c
  .word 0x0200202d
  .word 0x26050004
  .word 0x0c0f1348
  .word 0x00000000
  .word 0x26940001
  .word 0x0291182a
  .word 0x1460fff3
  .word 0x00000000
  .word 0x1040006e
  .word 0x00000000
  .word 0x8e630000
  .word 0x3c020001
  .word 0x00621025
  .word 0xae620000
  .word 0x10000068
  .word 0x00000000
  .word 0x30820002
  .word 0x14400004
  .word 0x00000000
  .word 0x30620002
  .word 0x1040000b
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f1714
  .word 0x00000000
  .word 0x1040005d
  .word 0x00000000
  .word 0x8e620000
  .word 0x34428000
  .word 0xae620000
  .word 0x10000058
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9444094e
  .word 0x30820040
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430958
  .word 0x30620040
  .word 0x10400006
  .word 0x00000000
  .word 0x8e620000
  .word 0x34420010
  .word 0xae620000
  .word 0x10000049
  .word 0x00000000
  .word 0x30820020
  .word 0x14400004
  .word 0x00000000
  .word 0x30620020
  .word 0x10400006
  .word 0x00000000
  .word 0x8e620000
  .word 0x34420020
  .word 0xae620000
  .word 0x1000003e
  .word 0x00000000
  .word 0x30a20800
  .word 0x1040001f
  .word 0x00000000
  .word 0x24040001
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x30628000
  .word 0x14400007
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420956
  .word 0x30428000
  .word 0x14400002
  .word 0x00000000
  .word 0x0000202d
  .word 0x1480002d
  .word 0x00000000
  .word 0x30622000
  .word 0x0002102b
  .word 0x14400005
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420956
  .word 0x30422000
  .word 0x0002102b
  .word 0x14400023
  .word 0x00000000
  .word 0x0200202d
  .word 0x26050004
  .word 0x0c0f1370
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0x24040001
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x30621000
  .word 0x14400007
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420956
  .word 0x30421000
  .word 0x14400002
  .word 0x00000000
  .word 0x0000202d
  .word 0x1480000f
  .word 0x00000000
  .word 0x30624000
  .word 0x0002102b
  .word 0x14400005
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420956
  .word 0x30424000
  .word 0x0002102b
  .word 0x14400005
  .word 0x00000000
  .word 0x0200202d
  .word 0x26050004
  .word 0x0c0f1370
  .word 0x00000000
  .word 0x0200202d
  .word 0x8e62003c
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000102d
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
}
#define FUN_003c63f0(...) ((u64 (*)(...))FUN_003c63f0)(__VA_ARGS__)
#undef FUN_003c6900
// FUN_003C6900


void FUN_003c6900(int param_1)



{
  u32 *puVar1;
  int uVar2;

  puVar1 = *(u32 **)(param_1 + 0x24);
  uVar2 = *puVar1;
  if ((uVar2 & 8) != 0) {
    if ((uVar2 & 0x100000) != 0) {
      uVar2 = uVar2 & 0xfffffffb;
      *puVar1 = uVar2;
      uVar2 = uVar2 & 0xffefffff;
      *puVar1 = uVar2;
      uVar2 = uVar2 & 0xfffffffe;
      *puVar1 = uVar2;
      *(u16 *)((int)puVar1 + 10) = 1;
    } else if ((uVar2 & 0x200000) != 0) {
      uVar2 = uVar2 & 0xfffffffb;
      *puVar1 = uVar2;
      uVar2 = uVar2 & 0xffdfffff;
      *puVar1 = uVar2;
      *(u16 *)((int)puVar1 + 10) = 3;
    }
    uVar2 = *puVar1;
    if ((uVar2 & 0x400000) != 0) {
      uVar2 = uVar2 & 0xfffffffb;
      *puVar1 = uVar2;
      uVar2 = uVar2 & 0xffbfffff;
      *puVar1 = uVar2;
      uVar2 = uVar2 | 1;
      *puVar1 = uVar2;
  }
}
}
#define FUN_003c6900(...) ((void (*)(...))FUN_003c6900)(__VA_ARGS__)
#undef FUN_003c69d0


typedef struct {
  u32 flags;
  short counter;
  short duration1;
  short duration2;
  short state;
  u8 pad[0x10];
  u32 value;
} NmCmdState;

// FUN_003C69D0
void FUN_003c69d0(int param_1)
{
  NmCmdState *puVar1;
  short sVar2;
  u32 uVar3;

  puVar1 = *(NmCmdState **)(param_1 + 0x24);
  switch (puVar1->state) {
  case 0:
    break;
  case 1:
    puVar1->flags &= 0xfffffff7;
    puVar1->flags |= 2;
    puVar1->flags |= 0x40;
    puVar1->flags |= 0x80;
    puVar1->state = 2;
    puVar1->counter = 0;
  case 2:
    sVar2 = ++puVar1->counter;
    puVar1->value = (sVar2 * 0xff) / (int)puVar1->duration1;
    if (puVar1->counter < puVar1->duration1) {
      break;
    }
    puVar1->value = 0xff;
    puVar1->counter = 0;
    puVar1->flags |= 8;
    puVar1->flags |= 4;
    puVar1->flags &= 0xffffff7f;
    puVar1->state = 5;
    break;
  case 3:
    uVar3 = puVar1->flags & 0xfffffff7;
    puVar1->flags = uVar3;
    uVar3 &= 0xfffffffb;
    puVar1->flags = uVar3;
    uVar3 |= 0x100;
    puVar1->flags = uVar3;
    puVar1->state = 4;
    puVar1->counter = 0;
  case 4:
    sVar2 = ++puVar1->counter;
    puVar1->value = 0xff - (sVar2 * 0xff) / (int)puVar1->duration2;
    if (puVar1->counter < puVar1->duration2) {
      break;
    }
    puVar1->value = 0;
    puVar1->counter = 0;
    uVar3 = puVar1->flags;
    uVar3 |= 8;
    puVar1->flags = uVar3;
    uVar3 &= 0xfffffffd;
    puVar1->flags = uVar3;
    uVar3 |= 0x40;
    puVar1->flags = uVar3;
    uVar3 &= 0xfffffeff;
    puVar1->flags = uVar3;
    puVar1->state = 0;
    break;
  case 5:
    break;
  default:
    break;
  }
  return;
}
#define FUN_003c69d0(...) ((void (*)(...))FUN_003c69d0)(__VA_ARGS__)
#undef FUN_003c6b70
// FUN_003C6B70


u64 FUN_003c6b70(int param_1)



{

  u32 uVar1;

  int iVar2;

  int iVar3;

  int iVar4;
  int iVar6;

  int *piVar5;

  

  iVar2 = *(int *)(param_1 + 0x24);

  piVar5 = (int *)(iVar2 + 0x24);

  if (*(u16 *)(param_1 + 0x10) == 0) {

    *piVar5 = 0;

    piVar5[1] = 0;
    return 0;

  }

  else {

    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x14) + 0xc) - 1;
    iVar3 = *(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x14) + 0xc) - 1;
    iVar6 = *(u16 *)(param_1 + 0x10) - 1;
    if (iVar6 >= 1) {

      *piVar5 = (iVar4 * 0xffff) / iVar6;

    }

    else {

      *piVar5 = 0;

    }

    uVar1 = *(u16 *)(param_1 + 0x10);

    iVar6 = FUN_003c6f80_typed(param_1);

    iVar6 = (u32)uVar1 - iVar6;

    if (iVar6 >= 1) {

      piVar5[1] = (iVar3 * 0xffff) / iVar6;

    }

    else {

      piVar5[1] = 0;

    }

  }

  return 0;

}
#define FUN_003c6b70(...) ((u64 (*)(...))FUN_003c6b70)(__VA_ARGS__)
#undef FUN_003c6c50
// FUN_003C6C50


u32 FUN_003c6c50(int param_1)



{

  if ((**(u32 **)(param_1 + 0x24) & 0x10) != 0) {
    return *(u32 *)(param_1 + 0xc);
  }
  return 0;

}
#define FUN_003c6c50(...) ((u32 (*)(...))FUN_003c6c50)(__VA_ARGS__)
#undef FUN_003c6c80
// FUN_003C6C80


u32 FUN_003c6c80(int param_1)



{

  return **(u32 **)(param_1 + 0x24) & 0x20;

}
#define FUN_003c6c80(...) ((u32 (*)(...))FUN_003c6c80)(__VA_ARGS__)
#undef FUN_003c6ca0
// FUN_003C6CA0


u32 FUN_003c6ca0(int param_1)



{

  return **(u32 **)(param_1 + 0x24) & 0x8000;

}
#define FUN_003c6ca0(...) ((u32 (*)(...))FUN_003c6ca0)(__VA_ARGS__)
#undef FUN_003c6cc0
// FUN_003C6CC0


u32 FUN_003c6cc0(int param_1)



{

  return **(u32 **)(param_1 + 0x24) & 0x10000;

}
#define FUN_003c6cc0(...) ((u32 (*)(...))FUN_003c6cc0)(__VA_ARGS__)
#undef FUN_003c6ce0
// FUN_003C6CE0


u32 FUN_003c6ce0(int param_1)



{

  if ((**(u32 **)(param_1 + 0x24) & 0x2000) != 0) {
    return *(u32 *)(param_1 + 0xc);
  }
  return 0;

}
#define FUN_003c6ce0(...) ((u32 (*)(...))FUN_003c6ce0)(__VA_ARGS__)
#undef FUN_003c6d10
// FUN_003C6D10


u32 FUN_003c6d10(int param_1)



{

  if ((**(u32 **)(param_1 + 0x24) & 0x4000) != 0) {
    return *(u32 *)(param_1 + 0xc);
  }
  return 0;

}
#define FUN_003c6d10(...) ((u32 (*)(...))FUN_003c6d10)(__VA_ARGS__)
#undef FUN_003c6d40
// FUN_003C6D40


void FUN_003c6d40(int param_1,u32 param_2,u32 param_3)



{

  int iVar1;

  

  iVar1 = *(int *)(param_1 + 0x24);

  *(u32 *)(iVar1 + 0x14) = param_2;

  *(u32 *)(iVar1 + 0x18) = param_3;

  return;

}
#define FUN_003c6d40(...) ((void (*)(...))FUN_003c6d40)(__VA_ARGS__)
#undef FUN_003c6d60
// FUN_003C6D60


u64 FUN_003c6d60(int param_1,u32 param_2)



{

  **(u32 **)(param_1 + 0x24) = **(u32 **)(param_1 + 0x24) | param_2;

  return 0;

}
#define FUN_003c6d60(...) ((u64 (*)(...))FUN_003c6d60)(__VA_ARGS__)
#undef FUN_003c6d80
// FUN_003C6D80


u32 FUN_003c6d80(int param_1)
{
  u32 flags;
  u32 result;

  result = 0;
  flags = **(u32 **)(param_1 + 0x24);
  if ((flags & 0x400) != 0) {
    result |= 0x80000000;
  }
  if ((flags & 4) != 0) {
    result |= 0x40000000;
  }
  if ((flags & 2) != 0) {
    if ((flags & 0x100) != 0) {
      return result | 0x14;
    }
    if ((flags & 0x80) != 0) {
      return result | 0xc;
    }
    return result | 1;
  }
  return result | 2;
}
#define FUN_003c6d80(...) ((u32 (*)(...))FUN_003c6d80)(__VA_ARGS__)
#undef FUN_003c6e10
// FUN_003C6E10
 
 
u64 FUN_003c6e10(int param_1)
{
  u32 flags;
  u32 result;
  u32 temp;

  result = 0;
  flags = **(u32 **)(param_1 + 0x24);
  if ((flags & 0x400) != 0) {
    result |= 0x80000000;
  }
  if ((flags & 4) != 0) {
    result |= 0x40000000;
  }
  if ((flags & 2) != 0) {
    if ((flags & 0x100) != 0) {
      temp = result | 0x14;
      goto ret;
    }
    if ((flags & 0x80) != 0) {
      temp = result | 0xc;
      goto ret;
    }
    temp = result | 1;
    goto ret;
  }
  temp = result | 2;
ret:
  return temp & 0xfffffff;
}
#define FUN_003c6e10(...) ((u64 (*)(...))FUN_003c6e10)(__VA_ARGS__)
#undef FUN_003c6ea0
// FUN_003C6EA0


void FUN_003c6ea0(int param_1)



{

  **(u32 **)(param_1 + 0x24) = **(u32 **)(param_1 + 0x24) | 0x400;

  return;

}
#define FUN_003c6ea0(...) ((void (*)(...))FUN_003c6ea0)(__VA_ARGS__)
#undef FUN_003c6ec0
// FUN_003C6EC0


void FUN_003c6ec0(int param_1)



{

  **(u32 **)(param_1 + 0x24) = **(u32 **)(param_1 + 0x24) & 0xfffffbff;

  return;

}
#define FUN_003c6ec0(...) ((void (*)(...))FUN_003c6ec0)(__VA_ARGS__)
#undef FUN_003c6ee0
// FUN_003C6EE0


void FUN_003c6ee0(int param_1)



{

  u32 uVar1;

  

  uVar1 = **(u32 **)(param_1 + 0x24);

  if ((uVar1 & 2) == 0) {

    **(u32 **)(param_1 + 0x24) = uVar1 | 0x100000;

  }

  return;

}
#define FUN_003c6ee0(...) ((void (*)(...))FUN_003c6ee0)(__VA_ARGS__)
#undef FUN_003c6f10
// FUN_003C6F10


void FUN_003c6f10(int param_1)



{

  u32 uVar1;

  

  uVar1 = **(u32 **)(param_1 + 0x24);

  if (((uVar1 & 2) != 0) && ((uVar1 & 0x100) == 0)) {

    **(u32 **)(param_1 + 0x24) = uVar1 | 0x200000;

  }

  return;

}
#define FUN_003c6f10(...) ((void (*)(...))FUN_003c6f10)(__VA_ARGS__)
#undef FUN_003c6f50
// FUN_003C6F50


void FUN_003c6f50(int param_1)



{

  u32 *puVar1;

  u32 uVar2;

  

  puVar1 = *(u32 **)(param_1 + 0x24);

  uVar2 = *puVar1;

  *puVar1 = uVar2 | 0x400000;
  *puVar1 |= 0x200000;

  return;

}
#define FUN_003c6f50(...) ((void (*)(...))FUN_003c6f50)(__VA_ARGS__)
#undef FUN_003c6f80
// FUN_003C6F80


u32 FUN_003c6f80(int param_1)



{
  u32 uVar1;
  u32 uVar2;


  uVar2 = (u32)*(u16 *)(param_1 + 0x10);
  uVar1 = *(u32 *)(*(int *)(param_1 + 0x24) + 0x20);
  if ((int)uVar1 < (int)uVar2) {
    return uVar1;
  }
  return uVar2;

}
#define FUN_003c6f80(...) ((u32 (*)(...))FUN_003c6f80)(__VA_ARGS__)
#undef FUN_003c6fb0
// FUN_003C6FB0


int FUN_003c6fb0(int param_1)
{
    int count;
    int current;
    int targetOwner;
    u32 atEnd;

    count = 0;
    targetOwner = *(volatile /* Removing this function's qualifier batch loses FUN_003c6fb0 (MATCH nd0 -> MISMATCH nd4, size 72 -> 72) - measured W170. */ int *)(param_1 + 0x24);
    current = *(volatile /* Removing this function's qualifier batch loses FUN_003c6fb0 (MATCH nd0 -> MISMATCH nd4, size 72 -> 72) - measured W170. */ int *)(param_1 + 0xc);
    param_1 = *(int *)(targetOwner + 0x2c);
    if (param_1 == 0)
    {
        goto done;
    }
    goto check;
loop:
    current = *(int *)(current + 0xc);
    count++;
check:
    atEnd = (current != 0) ^ 1;
    if (atEnd)
    {
        goto done;
    }
    if (param_1 != current)
    {
        goto loop;
    }
done:
    return count;
}

#define FUN_003c6fb0(...) ((int (*)(...))FUN_003c6fb0)(__VA_ARGS__)
#undef FUN_003c7000
// FUN_003C7000


void FUN_003c7000(int param_1)



{

  int iVar2;

  int iVar1;

  int iVar3;

  

  FUN_003c4fc0();

  iVar1 = 1;

  iVar3 = (int)param_1;

  iVar2 = *(int *)(iVar3 + 4);

  while (iVar2 != 0) {

    *(int *)(*(int *)(iVar2 + 0x14) + 0xc) = iVar1;

    iVar2 = *(int *)(iVar2 + 0x10);

    iVar1 = iVar1 + 1;

  }

  *(u32 *)(*(int *)(iVar3 + 0x24) + 0x2c) = *(u32 *)(iVar3 + 4);

  FUN_003c6b70_typed(param_1);

  return;

}
#define FUN_003c7000(...) ((void (*)(...))FUN_003c7000)(__VA_ARGS__)
#undef FUN_003c7070
// FUN_003C7070


asm void FUN_003c7070(float param_1,float *param_2,float *param_3,float *param_4)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x00c0802d
  .word 0x46006506
  .word 0xc4a40000
  .word 0xc4c10008
  .word 0xc4a00008
  .word 0x460100c2
  .word 0xc4c20000
  .word 0xc4a10004
  .word 0xc4c00004
  .word 0x4600081a
  .word 0x4602201c
  .word 0x46001800
  .word 0x46001b00
  .word 0xc780832c
  .word 0x46006036
  .word 0x45010033
  .word 0x00000000
  .word 0xc7808128
  .word 0x46006034
  .word 0x4500002f
  .word 0x00000000
  .word 0x0c14ba7a
  .word 0x00000000
  .word 0x46000586
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46140001
  .word 0x4600b302
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000546
  .word 0x4614b302
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000506
  .word 0x4600b306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xc6220000
  .word 0xc6010000
  .word 0x4614081a
  .word 0x4615105c
  .word 0x46000843
  .word 0xe6410000
  .word 0xc6220004
  .word 0xc6010004
  .word 0x4614081a
  .word 0x4615105c
  .word 0x46000843
  .word 0xe6410004
  .word 0xc6220008
  .word 0xc6010008
  .word 0x4614081a
  .word 0x4615105c
  .word 0x46000843
  .word 0xe6410008
  .word 0xc622000c
  .word 0xc601000c
  .word 0x4614081a
  .word 0x4615105c
  .word 0x46000803
  .word 0x00000000
  .word 0x00000000
  .word 0xe640000c
  .word 0x10000028
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46140041
  .word 0x4614281a
  .word 0x4601201c
  .word 0xe6400000
  .word 0xc6200004
  .word 0x4614281a
  .word 0x4601001c
  .word 0xe6400004
  .word 0xc6200008
  .word 0x4614281a
  .word 0x4601001c
  .word 0xe6400008
  .word 0xc620000c
  .word 0x4614281a
  .word 0x4601001c
  .word 0xe640000c
  .word 0xc6430004
  .word 0xc6420000
  .word 0xc6410008
  .word 0xc640000c
  .word 0x4603181a
  .word 0x4602101e
  .word 0x4601081e
  .word 0x4600001c
  .word 0x46000044
  .word 0x46011003
  .word 0xe6400000
  .word 0xc6400004
  .word 0x46010003
  .word 0xe6400004
  .word 0xc6400008
  .word 0x46010003
  .word 0xe6400008
  .word 0xc640000c
  .word 0x46010003
  .word 0xe640000c
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#define FUN_003c7070(...) ((void (*)(...))FUN_003c7070)(__VA_ARGS__)
#undef FUN_003c7270
// FUN_003C7270


void FUN_003c7270(void)



{

  FUN_003c72a0_typed((u32)DAT_0095be90_ptr);

  return;

}
#define FUN_003c7270(...) ((void (*)(...))FUN_003c7270)(__VA_ARGS__)
#undef FUN_003c72a0
// FUN_003C72A0


void FUN_003c72a0(int param_1)



{

  u32 *puVar1;

  

  puVar1 = (u32 *)param_1;

  if (param_1 != 0) {

    *puVar1 = 0xffffffff;

    *(u8 *)(puVar1 + 1) = 0;

    *(u8 *)((int)puVar1 + 5) = 0;

    puVar1[2] = 0xffffffff;

    *(u8 *)(puVar1 + 3) = 1;

    *(u8 *)((int)puVar1 + 0xd) = 1;

  }

  return;

}
#define FUN_003c72a0(...) ((void (*)(...))FUN_003c72a0)(__VA_ARGS__)
#undef FUN_003c72d0
// FUN_003C72D0


u8 FUN_003c72d0(u64 param_1)
{
    s32* command;

    if (DAT_0095be90_abs != NULL)
    {
        *(u32*)DAT_0095be90_abs = 0xffffffff;
        DAT_0095be94_abs[0] = 0;
        DAT_0095be95_abs[0] = 0;
        DAT_0095be98_abs[0] = 0xffffffff;
        DAT_0095be9c_abs[0] = 1;
        DAT_0095be9d_abs[0] = 1;
    }

    command = (s32*)FUN_003c7d50_direct();
    if (*command < 0)
    {
        *command = FUN_003a2d80(param_1);
        FUN_003c8230_direct(command, 0);
        return 1;
    }

    return 0;
}
#define FUN_003c72d0(...) ((u8 (*)(...))FUN_003c72d0)(__VA_ARGS__)
#undef FUN_003c7390
// FUN_003C7390


void FUN_003c7390(u64 param_1)



{
  extern u8 *FUN_003c7d50_direct(void);

  u8 *lVar1;

  

  lVar1 = FUN_003c7d50_direct();

  if (lVar1 == 0)
    return;

  if (*(int *)lVar1 < 0)
    return;

  FUN_003a3e10(*(int *)lVar1,param_1);

  return;

}
#define FUN_003c7390(...) ((void (*)(...))FUN_003c7390)(__VA_ARGS__)
#undef FUN_003c73e0
// FUN_003C73E0


void FUN_003c73e0(u64 param_1)



{
  extern u8 *FUN_003c7d50_direct(void);

  u8 *lVar1;

  

  lVar1 = FUN_003c7d50_direct();

  if (lVar1 == 0)
    return;

  if (*(int *)lVar1 < 0)
    return;

  FUN_003a3e90(*(int *)lVar1,param_1);

  return;

}
#define FUN_003c73e0(...) ((void (*)(...))FUN_003c73e0)(__VA_ARGS__)
#undef FUN_003c7430
// FUN_003C7430


u32 FUN_003c7430(u64 param_1)



{

  extern u8 *FUN_003c7d50_direct(void);
  u32 uVar1;

  u8 *lVar2;

  int *piVar3;

  

  lVar2 = FUN_003c7d50_direct();

  if (lVar2 == 0) {

    uVar1 = 0;

  }

  else {

    piVar3 = (int *)lVar2;

    if (*piVar3 < 0) {

      uVar1 = 0;

    }

    else {

      FUN_003a4360(*piVar3,4);

      FUN_003a3e10(*piVar3,0x200000);

      FUN_003a30c0(*piVar3,param_1,0);

      FUN_003a27c0_typed(*piVar3,-1);

      uVar1 = 1;

      *(u8 *)(piVar3 + 1) = 1;

    }

  }

  return uVar1;

}
#define FUN_003c7430(...) ((u32 (*)(...))FUN_003c7430)(__VA_ARGS__)
#undef FUN_003c74e0
// FUN_003C74E0


u32 FUN_003c74e0(int param_1)



{

  extern u8 *FUN_003c7d50_direct(void);
  u8 uVar1;

  u32 uVar2;

  u8 *lVar3;

  int *piVar4;

  

  lVar3 = FUN_003c7d50_direct();

  if (lVar3 == 0) {

    uVar2 = 0;

  }

  else {

    piVar4 = (int *)lVar3;

    if (*piVar4 < 0) {

      uVar2 = 0;

    }

    else {

      piVar4[2] = param_1;

      uVar1 = FUN_003c75b0_typed();

      *(u8 *)((int)piVar4 + 0xd) = uVar1;

      uVar2 = 1;

    }

  }

  return uVar2;

}
#define FUN_003c74e0(...) ((u32 (*)(...))FUN_003c74e0)(__VA_ARGS__)
#undef FUN_003c7560
// FUN_003C7560


void FUN_003c7560(u8 param_1)



{
  extern u8 *FUN_003c7d50_direct(void);

  u8 *lVar1;

  

  lVar1 = FUN_003c7d50_direct();

  if (lVar1 == 0)
    return;

  if (*(int *)lVar1 < 0)
    return;

  *(u8 *)(lVar1 + 0xc) = param_1;

  return;

}
#define FUN_003c7560(...) ((void (*)(...))FUN_003c7560)(__VA_ARGS__)
#undef FUN_003c75b0
// FUN_003C75B0


u32 FUN_003c75b0(void)
{
  extern u8 *FUN_003c7d50_direct(void);
  int *piVar1;
  u32 uVar2;
  piVar1 = (int *)FUN_003c7d50_direct();

  if (piVar1 == 0) {
    uVar2 = 0xffffffffffffffff;
  } else if (0 > *piVar1) {
    uVar2 = 0xffffffffffffffff;
  } else {
    uVar2 = FUN_003a2830_nm_typed(*piVar1);
  }

  return uVar2;
}
#define FUN_003c75b0(...) ((u64 (*)(...))FUN_003c75b0)(__VA_ARGS__)
#undef FUN_003c7610
// FUN_003C7610


s8 FUN_003c7610(void)
{
  s8 uVar1;

  u8 *lVar2;
  extern u8 *FUN_003c7d50_direct(void);

  

  lVar2 = FUN_003c7d50_direct();

  if (lVar2 == 0) {

    uVar1 = 1;

  }

  else {

    uVar1 = *(s8 *)(lVar2 + 0xd);

  }

  return uVar1;

}
#define FUN_003c7610(...) ((s8 (*)(...))FUN_003c7610)(__VA_ARGS__)
#undef FUN_003c7650
// FUN_003C7650


u32 FUN_003c7650(int param_1)



{
  extern u8 *FUN_003c7d50_direct(void);

  u32 uVar1;

  u8 *lVar2;

  int *piVar3;

  

  lVar2 = FUN_003c7d50_direct();

  if (lVar2 == 0) {

    uVar1 = 0;

  }

  else {

    piVar3 = (int *)lVar2;

    if (*piVar3 < 0) {

      uVar1 = 0;

    }

    else {

      FUN_003a25f0(*piVar3,0);

      if (param_1 != 0) {

        FUN_003a2a30(*piVar3);

      }

      FUN_003a3420(*piVar3,0);

      FUN_003c7c90_typed(1);

      *(u8 *)(piVar3 + 1) = 0;

      uVar1 = 1;

    }

  }

  return uVar1;

}
#define FUN_003c7650(...) ((u32 (*)(...))FUN_003c7650)(__VA_ARGS__)
#undef FUN_003c7700
// FUN_003C7700


u32 FUN_003c7700(void)



{
  extern u8 *FUN_003c7d50_direct(void);

  u32 uVar1;

  u8 *lVar2;

  int *piVar3;

  

  lVar2 = FUN_003c7d50_direct();

  if (lVar2 == 0) {

    uVar1 = 0;

  }

  else {

    piVar3 = (int *)lVar2;

    if (*piVar3 < 0) {

      uVar1 = 0;

    }

    else {

      FUN_003a25f0(*piVar3,0);

      FUN_003a2a30(*piVar3);

      FUN_003a3420(*piVar3,0);

      FUN_003c7c90_typed(1);

      *(u8 *)(piVar3 + 1) = 0;

      uVar1 = 1;

    }

  }

  return uVar1;

}
#define FUN_003c7700(...) ((u32 (*)(...))FUN_003c7700)(__VA_ARGS__)
#undef FUN_003c77a0
// FUN_003C77A0


u32 FUN_003c77a0(void)



{

  u32 uVar1;
  extern u8 *FUN_003c7d50_direct(void);

  u8 *lVar2;

  int *piVar3;

  

  lVar2 = FUN_003c7d50_direct();

  FUN_005225a8_nm3(&gp0xffffaa08,&DAT_006a3e18[0],0x158);

  FUN_005225a8_nm1(&DAT_006a3e30[0]);

  FUN_001052b0_nm1(&DAT_006a3e30[0]);

  if (lVar2 == 0) {

    uVar1 = 0;

  }

  else {

    piVar3 = (int *)lVar2;

    if (*(int *)lVar2 >= 0) {

      FUN_003a3060_typed(*piVar3);

      *piVar3 = -1;

      *(u8 *)(piVar3 + 1) = 0;

      *(u8 *)((int)piVar3 + 5) = 0;

    }

    FUN_003cf440();

    uVar1 = 1;

  }

  return uVar1;

}
#define FUN_003c77a0(...) ((u32 (*)(...))FUN_003c77a0)(__VA_ARGS__)
#undef FUN_003c7850
// FUN_003C7850


s8 FUN_003c7850(void)
{
  extern u8 *FUN_003c7d50_ptr(void);
  s8 uVar1;
  int *piVar2;
  u8 *lVar3;

  lVar3 = FUN_003c7d50_ptr();
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = (int *)lVar3;
    if (*piVar2 < 0) {
      uVar1 = 0;
    }
    else {
      if (*(char *)((int)piVar2 + 5) == '\0') {
        goto value;
      }
      if ((char)piVar2[1] != '\x02') {
        goto value;
      }
      uVar1 = 0;
      goto done;
value:
      uVar1 = *(s8 *)((int)piVar2 + 4);
done:
      ;
    }
  }
  return uVar1;
}
#define FUN_003c7850(...) ((u8 (*)(...))FUN_003c7850)(__VA_ARGS__)
#undef FUN_003c78d0
// FUN_003C78D0


u32 FUN_003c78d0(void)



{

  extern u8 *FUN_003c7d50_direct(void);
  u32 uVar1;

  u32 uVar2;

  u8 *lVar3;
  int lVar4;
  u8 *p;

  

  lVar3 = FUN_003c7d50_direct();

  if (lVar3 == 0) {

    uVar2 = 0;

  }

  else if (*(int *)lVar3 < 0) {

    uVar2 = 0;

  }

  else {

    lVar4 = FUN_003a2750_nm_typed(*(int *)lVar3);

    if (lVar4 < 0) {

      uVar2 = 0;

    }

    else {

      p = FUN_003c7d50_direct();

      if (p == 0) {

        uVar1 = -1;

      }

      else if (*(int *)p < 0) {

        uVar1 = -1;

      }

      else {

        uVar1 = FUN_003a2830_nm_typed(*(int *)p);

      }

      *(u8 *)((int)(int *)lVar3 + 0xd) = uVar1;

      uVar2 = 1;

    }

  }

  return uVar2;

}
#define FUN_003c78d0(...) ((u32 (*)(...))FUN_003c78d0)(__VA_ARGS__)
#undef FUN_003c7990
// FUN_003C7990


asm void FUN_003c7990(long param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x0c0f1f54
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000070
  .word 0x00000000
  .word 0x8e040000
  .word 0x0480006d
  .word 0x00000000
  .word 0x82050004
  .word 0x24030003
  .word 0x10a30051
  .word 0x00000000
  .word 0x24030002
  .word 0x10a30012
  .word 0x00000000
  .word 0x24030001
  .word 0x10a30007
  .word 0x00000000
  .word 0x10a00003
  .word 0x00000000
  .word 0x1000005f
  .word 0x00000000
  .word 0x1000005d
  .word 0x00000000
  .word 0x0c0e8960
  .word 0x00000000
  .word 0x04410059
  .word 0x00000000
  .word 0x24030002
  .word 0xa2030004
  .word 0x10000055
  .word 0x00000000
  .word 0x8e030008
  .word 0x0460000a
  .word 0x00000000
  .word 0x8205000c
  .word 0x0c0e8f04
  .word 0x00000000
  .word 0x8e040000
  .word 0x8e050008
  .word 0x0c0e8df0
  .word 0x00000000
  .word 0x2403ffff
  .word 0xae030008
  .word 0x82030005
  .word 0x14600046
  .word 0x00000000
  .word 0x0c0f1f54
  .word 0x00000000
  .word 0x0040882d
  .word 0x16200004
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000020
  .word 0x00000000
  .word 0x8e240000
  .word 0x04810004
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000001a
  .word 0x00000000
  .word 0x0c0e89d4
  .word 0x00000000
  .word 0x04410004
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000013
  .word 0x00000000
  .word 0x0c0f1f54
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x2403ffff
  .word 0x1000000a
  .word 0x00000000
  .word 0x8c440000
  .word 0x04810004
  .word 0x00000000
  .word 0x2403ffff
  .word 0x10000004
  .word 0x00000000
  .word 0x0c0e8a0c
  .word 0x00000000
  .word 0x0040182d
  .word 0xa223000d
  .word 0x24030001
  .word 0x1460001d
  .word 0x00000000
  .word 0x24030003
  .word 0xa2030004
  .word 0x10000019
  .word 0x00000000
  .word 0x0c0f1f54
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000014
  .word 0x00000000
  .word 0x8e040000
  .word 0x04800011
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c0e897c
  .word 0x00000000
  .word 0x12200004
  .word 0x00000000
  .word 0x8e040000
  .word 0x0c0e8a8c
  .word 0x00000000
  .word 0x8e040000
  .word 0x0000282d
  .word 0x0c0e8d08
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0f1f24
  .word 0x00000000
  .word 0xa2000004
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#define FUN_003c7990(...) ((void (*)(...))FUN_003c7990)(__VA_ARGS__)
#undef FUN_003c7b90
// FUN_003C7B90


void FUN_003c7b90(void)



{

  FUN_003c7990_typed(1);

  return;

}
#define FUN_003c7b90(...) ((void (*)(...))FUN_003c7b90)(__VA_ARGS__)
#undef FUN_003c7bc0
// FUN_003C7BC0


void FUN_003c7bc0(u64 param_1,u64 param_2)



{
  extern u8 *FUN_003c7d50_direct(void);

  u8 *lVar1;

  

  lVar1 = FUN_003c7d50_direct();

  if (lVar1 != 0) {

    FUN_003a4220(*(u32 *)lVar1,param_1,param_2);

  }

  return;

}
#define FUN_003c7bc0(...) ((void (*)(...))FUN_003c7bc0)(__VA_ARGS__)
#undef FUN_003c7c20
// FUN_003C7C20


void FUN_003c7c20(u64 param_1,u64 param_2,u64 param_3)



{
  extern u8 *FUN_003c7d50_direct(void);

  u8 *lVar1;

  

  lVar1 = FUN_003c7d50_direct();

  if (lVar1 != 0) {

    FUN_003a4010(*(u32 *)lVar1,param_1,param_2,param_3);

  }

  return;

}
#define FUN_003c7c20(...) ((void (*)(...))FUN_003c7c20)(__VA_ARGS__)
#undef FUN_003c7c90
// FUN_003C7C90


void FUN_003c7c90(int param_1)



{

  u32 lVar1;

  u32 *puVar2;

  

  lVar1 = FUN_003c7d50_direct();

  if (lVar1 != 0) {

    puVar2 = (u32 *)lVar1;

    if (param_1 != 0) {

      FUN_003a3e90(*puVar2,0x800000);

      FUN_003a3e90(*puVar2,0x100000);

      *(u8 *)((int)puVar2 + 5) = 0;

      FUN_003a25f0(*puVar2,1);

      *(u8 *)(puVar2 + 1) = 1;

    }

    else {

      FUN_003a3e10(*puVar2,0x800000);

      FUN_003a3e10(*puVar2,0x100000);

      *(u8 *)((int)puVar2 + 5) = 1;

    }

  }

  return;

}
#define FUN_003c7c90(...) ((void (*)(...))FUN_003c7c90)(__VA_ARGS__)
#undef FUN_003c7d50
// FUN_003C7D50


u32 FUN_003c7d50(void)
{
  return (u32)DAT_0095be90_ptr;
}
#define FUN_003c7d50(...) ((u32 (*)(...))FUN_003c7d50)(__VA_ARGS__)
#undef FUN_003c7d60
// FUN_003C7D60


u32 FUN_003c7d60(int param_1)



{

  return DAT_006a3e50_abs[param_1];

}
#define FUN_003c7d60(...) ((u32 (*)(...))FUN_003c7d60)(__VA_ARGS__)
#undef FUN_003c7d80
// FUN_003C7D80


void FUN_003c7d80(int param_1,u64 param_2)



{

  u32 uVar1;

  

  uVar1 = FUN_003a2d80(param_2);

  DAT_006a3e50_abs[param_1] = uVar1;

  return;

}
#define FUN_003c7d80(...) ((void (*)(...))FUN_003c7d80)(__VA_ARGS__)
#undef FUN_003c7dd0
// FUN_003C7DD0


void FUN_003c7dd0(int param_1)
{
  s32 value;

  value = DAT_006a3e50_abs[param_1];
  if (value >= 0) {
    FUN_003a3060_typed(value);
    DAT_006a3e50_abs[param_1] = -1;
  }
}
#define FUN_003c7dd0(...) ((void (*)(...))FUN_003c7dd0)(__VA_ARGS__)
#undef FUN_003c7e20
#undef FUN_003c7e50
#pragma alias FUN_003c7e50_call FUN_003c7e50
extern u64 FUN_003c7e50_call(u32 p1,u32 p2,float p3,u32 p4,u32 p5,u32 p6,u32 p7,u32 p8,u32 p9);
// FUN_003C7E20


void FUN_003c7e20(u32 p1,u32 p2,float p3,u32 p4,u32 p5,u32 p6,u32 p7,u32 p8)
{
  FUN_003c7e50_call(p1,p2,p3,p4,p5,p6,1,p7,p8);
}
#define FUN_003c7e50(...) ((u64 (*)(...))FUN_003c7e50)(__VA_ARGS__)
#define FUN_003c7e20(...) ((void (*)(...))FUN_003c7e20)(__VA_ARGS__)
#undef FUN_003c7e50
// FUN_003C7E50


asm u64 FUN_003c7e50(u32 param_1,u32 param_2,float param_3,u32 param_4,
            u32 param_5,u32 param_6,u32 param_7,u32 param_8,u32 param_9)
{
  .set noreorder
  .word 0x27bdfef0
  .word 0xffbf00b0
  .word 0x7fbe00a0
  .word 0x7fb70090
  .word 0x7fb60080
  .word 0x7fb50070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b40010
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x46006506
  .word 0x00c0982d
  .word 0x00e0902d
  .word 0x0100882d
  .word 0x0120b82d
  .word 0x0160802d
  .word 0x3c06006a
  .word 0x24c63e90
  .word 0x27a500f0
  .word 0x24040003
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c05006a
  .word 0x24a53eb0
  .word 0x27a400c0
  .word 0x24030009
  .word 0x8ca20000
  .word 0x24a50004
  .word 0x2463ffff
  .word 0xac820000
  .word 0x24840004
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x24020002
  .word 0x11420056
  .word 0x00000000
  .word 0x24020001
  .word 0x1142001a
  .word 0x00000000
  .word 0x11400003
  .word 0x00000000
  .word 0x10000096
  .word 0x00000000
  .word 0x2a021388
  .word 0x14400004
  .word 0x00000000
  .word 0x24020005
  .word 0x10000005
  .word 0x00000000
  .word 0x0010243c
  .word 0x0004243f
  .word 0x0c05c494
  .word 0x00000000
  .word 0x00021080
  .word 0x005d1021
  .word 0x8c5600f0
  .word 0x0010243c
  .word 0x0004243f
  .word 0x0c05c418
  .word 0x00000000
  .word 0x0002843c
  .word 0x0010843f
  .word 0x10000084
  .word 0x00000000
  .word 0x3216ffff
  .word 0x0016243c
  .word 0x0004243f
  .word 0x0c05c494
  .word 0x00000000
  .word 0x00021080
  .word 0x005d1021
  .word 0x8c4200f0
  .word 0x00021880
  .word 0x3c02006a
  .word 0x24423e50
  .word 0x00431021
  .word 0x8c570000
  .word 0x0016243c
  .word 0x0004243f
  .word 0x0c05c418
  .word 0x00000000
  .word 0x0002b43c
  .word 0x0016b43f
  .word 0x02e0202d
  .word 0x0c0e9468
  .word 0x00000000
  .word 0x0056082b
  .word 0x10200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000082
  .word 0x00000000
  .word 0x00108403
  .word 0x3c02006a
  .word 0x8c443e60
  .word 0x0c0e9468
  .word 0x00000000
  .word 0x0050082b
  .word 0x10200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000077
  .word 0x00000000
  .word 0x3c02006a
  .word 0x8c423e60
  .word 0xffa20000
  .word 0xffb00008
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x4600a306
  .word 0x0260302d
  .word 0x0240382d
  .word 0x0220402d
  .word 0x24090001
  .word 0x02e0502d
  .word 0x02c0582d
  .word 0x0c0e95bc
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000065
  .word 0x00000000
  .word 0x24040001
  .word 0x0200282d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3056ffff
  .word 0x0016243c
  .word 0x0004243f
  .word 0x0c05c494
  .word 0x00000000
  .word 0x00021080
  .word 0x005d1021
  .word 0x8c4200f0
  .word 0x00021880
  .word 0x3c02006a
  .word 0x24423e50
  .word 0x00431021
  .word 0x8c570000
  .word 0x0016243c
  .word 0x0004243f
  .word 0x0c05c418
  .word 0x00000000
  .word 0x0002b43c
  .word 0x0016b43f
  .word 0x02e0202d
  .word 0x0c0e9468
  .word 0x00000000
  .word 0x0056082b
  .word 0x10200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000045
  .word 0x00000000
  .word 0x3c02006a
  .word 0x8c443e60
  .word 0x0c0e9468
  .word 0x00000000
  .word 0x0040f02d
  .word 0x24040001
  .word 0x0200282d
  .word 0x0c05be40
  .word 0x00000000
  .word 0x304200ff
  .word 0x03c2082b
  .word 0x10200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000035
  .word 0x00000000
  .word 0x24040001
  .word 0x0200282d
  .word 0x0c05be40
  .word 0x00000000
  .word 0x304300ff
  .word 0x3c02006a
  .word 0x8c423e60
  .word 0xffa20000
  .word 0xffa30008
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x4600a306
  .word 0x0260302d
  .word 0x0240382d
  .word 0x0220402d
  .word 0x24090001
  .word 0x02e0502d
  .word 0x02c0582d
  .word 0x0c0e95bc
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000001e
  .word 0x00000000
  .word 0x000a1080
  .word 0x005d1021
  .word 0x8c5600c0
  .word 0x00161880
  .word 0x3c02006a
  .word 0x24423e50
  .word 0x00431021
  .word 0x8c560000
  .word 0x02c0202d
  .word 0x0c0e9468
  .word 0x00000000
  .word 0x0050082b
  .word 0x10200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000d
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x4600a306
  .word 0x0260302d
  .word 0x0240382d
  .word 0x0220402d
  .word 0x02e0482d
  .word 0x02c0502d
  .word 0x0200582d
  .word 0x0c0e955c
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf00b0
  .word 0x7bbe00a0
  .word 0x7bb70090
  .word 0x7bb60080
  .word 0x7bb50070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b40010
  .word 0x27bd0110
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#define FUN_003c7e50(...) ((u64 (*)(...))FUN_003c7e50)(__VA_ARGS__)
#undef FUN_003c8230
// FUN_003C8230


u64 FUN_003c8230(s32 *param_1,int param_2)
{
  switch (param_2) {
  case 0:
    FUN_003a4360_typed(*param_1,4);
    break;
  case 1:
    FUN_003a4360_typed(*param_1,5);
    break;
  case 2:
    FUN_003a4360_typed(*param_1,6);
    break;
  case 3:
    FUN_003a4360_typed(*param_1,7);
    break;
  }
  return 0;
}
#define FUN_003c8230(...) ((u64 (*)(...))FUN_003c8230)(__VA_ARGS__)
#undef FUN_003c82e0
// FUN_003C82E0






u64 FUN_003c82e0(int param_1)
{
  u8* p;
  p = DAT_0095be90_abs;
  if (p == (u8*)0) {
    return 0;
  }
  switch (param_1) {
  case 0:
    FUN_003a4360_typed(*(s32 *)p,4);
    break;
  case 1:
    FUN_003a4360_typed(*(s32 *)p,5);
    break;
  case 2:
    FUN_003a4360_typed(*(s32 *)p,6);
    break;
  case 3:
    FUN_003a4360_typed(*(s32 *)p,7);
    break;
  }
  return 0;
}
#define FUN_003c82e0(...) ((u64 (*)(...))FUN_003c82e0)(__VA_ARGS__)
#undef FUN_003c83b0
// FUN_003C83B0
extern u8 DAT_0095be90_abs[];

u8 FUN_003c83b0(void)
{
  u32 uVar1;
  u8* p;
  p = DAT_0095be90_abs;
  if (p != (u8*)0) goto nonzero;
  return 0;
nonzero:
  uVar1 = FUN_003a3da0(*(u32*)p);
  return (uVar1 & 0x3300) != 0;
}
#define FUN_003c83b0(...) ((u8 (*)(...))FUN_003c83b0)(__VA_ARGS__)
