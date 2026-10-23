#include "temporary.h"
typedef int (*code)(...);
typedef u32 undefined3;
typedef u32 int3;
#define CONCAT13(a,b) ((((u32)(a) & 0xffu) << 24) | ((u32)(b) & 0x00ffffffu))

extern u32 DAT_007ce670;
extern u32 DAT_007ce674;
extern u32 DAT_007ce678;
extern u8 DAT_0095b750[];
extern code DAT_00960178;
#pragma alias DAT_00960178_abs DAT_00960178
extern code DAT_00960178_abs[];
extern code DAT_0096017c;
extern u32 LAB_003c2530;
extern u32 _DAT_007ce678;
extern u32 uGpffffb980;
extern u32 FUN_003bf370(void);
extern u8 FUN_0016ef30(void);
extern u32 FUN_003bf510(void);
extern u64 FUN_003b91c0(float param_1,u16 param_2,u32 param_3,u32 param_4,u32 param_5,u32 param_6,u32 param_7);
extern u64 FUN_003b9320(float param_1,u16 param_2,u32 param_3,u32 param_4,u32 param_5,u32 param_6,u32 param_7);
extern void FUN_0039f210(u32 *param_1,int param_2,int param_3,int param_4);
extern u8 DAT_006a3308[];
#pragma alias FUN_00194b20_typed FUN_00194b20
extern void *FUN_00194b20_typed(u64 parent, const char *name, u32 priority,
                                void *(*update)(void *), void (*destroy)(void *),
                                u32 workData);

#ifndef CONCAT44
#define CONCAT44(hi,lo) ((((u64)(hi)) << 32) | (u32)(lo))
#endif

/* Region 0x390000-0x3CFFFF recovered prototypes */
u32 FUN_003bf720(void);
code * FUN_003bf8e0(void);
code * FUN_003bf950(void);
u32 FUN_003bfae0(void);
u32 FUN_003bffa0(u32 *param_1,u32 *param_2,u32 *param_3);
code * FUN_003bfdb0(void);
code * FUN_003bff40(void);
code * FUN_003bf610(void);
u32 FUN_003c03f0(void);
code * FUN_003c0570(void);
code * FUN_003c07c0(void);
code * FUN_003c09a0(void);
code * FUN_003c0b30(void);
code * FUN_003c0bd0(void);
u32 FUN_003c0c30(void);
code * FUN_003c0d20(void);
u32 FUN_003c0db0(u32 *param_1,u32 *param_2,u32 *param_3);
u32 FUN_003c0f20(void);
u32 FUN_003c1150(void);
code * FUN_003c1300(void);
u32 FUN_003c1340(void);
u8 * FUN_003c1430(void);
code * FUN_003c1440(void);
code * FUN_003c15d0(void);
code * FUN_003c1810(void);
u32 FUN_003c18c0(void);
void FUN_003c1a70(void);
u32 FUN_003c1ab0(u32 param_1,u32 param_2);
u32 FUN_003c1d20(u8 *param_1);
void FUN_003c22f0(int param_1);
void FUN_003c2350(u64 param_1,u16 param_2);
u32 FUN_003c23f0(u32 param_1,u32 param_2,u32 param_3);

/* Region call-cast macros */
#define FUN_003bf720(...) FUN_003bf720(__VA_ARGS__)
#define FUN_003bf8e0(...) FUN_003bf8e0(__VA_ARGS__)
#define FUN_003bf950(...) FUN_003bf950(__VA_ARGS__)
#define FUN_003bfae0(...) FUN_003bfae0(__VA_ARGS__)
#define FUN_003bfc50(...) FUN_003bfc50(__VA_ARGS__)
#define FUN_003bfdb0(...) FUN_003bfdb0(__VA_ARGS__)
#define FUN_003bff40(...) FUN_003bff40(__VA_ARGS__)
#define FUN_003bffa0(...) FUN_003bffa0(__VA_ARGS__)
#define FUN_003c03f0(...) FUN_003c03f0(__VA_ARGS__)
#define FUN_003c0570(...) FUN_003c0570(__VA_ARGS__)
#define FUN_003c07c0(...) FUN_003c07c0(__VA_ARGS__)
#define FUN_003c09a0(...) FUN_003c09a0(__VA_ARGS__)
#define FUN_003c0b30(...) FUN_003c0b30(__VA_ARGS__)
#define FUN_003c0bd0(...) FUN_003c0bd0(__VA_ARGS__)
#define FUN_003c0c30(...) FUN_003c0c30(__VA_ARGS__)
#define FUN_003c0d20(...) FUN_003c0d20(__VA_ARGS__)
#define FUN_003c0db0(...) FUN_003c0db0(__VA_ARGS__)
#define FUN_003c0f20(...) FUN_003c0f20(__VA_ARGS__)
#define FUN_003c1150(...) FUN_003c1150(__VA_ARGS__)
#define FUN_003c1300(...) FUN_003c1300(__VA_ARGS__)
#define FUN_003c1340(...) FUN_003c1340(__VA_ARGS__)
#define FUN_003c1430(...) FUN_003c1430(__VA_ARGS__)
#define FUN_003c1440(...) FUN_003c1440(__VA_ARGS__)
#define FUN_003c15d0(...) FUN_003c15d0(__VA_ARGS__)
#define FUN_003c1810(...) FUN_003c1810(__VA_ARGS__)
#define FUN_003c18c0(...) FUN_003c18c0(__VA_ARGS__)
#define FUN_003c1a70(...) FUN_003c1a70(__VA_ARGS__)
#define FUN_003c1ab0(...) FUN_003c1ab0(__VA_ARGS__)
#define FUN_003c1d20(...) FUN_003c1d20(__VA_ARGS__)
#define FUN_003c22f0(...) FUN_003c22f0(__VA_ARGS__)
#define FUN_003c2350(...) FUN_003c2350(__VA_ARGS__)
#define FUN_003c23f0(...) FUN_003c23f0(__VA_ARGS__)

#undef FUN_003bf720
/* W389 residual: switch scalar register-coloring cycle (retail keeps state in $v1 and constants in $v0/$a0; candidate uses $a0/$v1/$a1). Baseline nd=11/object=448 at the window; common-subs off exceeded it (nd=241/object=464), other singles and all pairs were neutral. Indexed, explicit-state, and volatile-load forms were neutral and reverted. */
// FUN_003BF720






asm u32 FUN_003bf720(void)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0c065550
  .word 0x00000000
  .word 0x0040802d
  .word 0x8c430000
  .word 0x24020003
  .word 0x1062004b
  .word 0x00000000
  .word 0x24020002
  .word 0x10620034
  .word 0x00000000
  .word 0x24040001
  .word 0x1064000a
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000055
  .word 0x00000000
  .word 0xae000004
  .word 0xae020008
  .word 0xae040000
  .word 0x10000050
  .word 0x00000000
  .word 0x8e030004
  .word 0x8e020008
  .word 0x0062102a
  .word 0x14400005
  .word 0x00000000
  .word 0xae000004
  .word 0xae000008
  .word 0x10000004
  .word 0x00000000
  .word 0x24620001
  .word 0xae020004
  .word 0x0000202d
  .word 0x24020001
  .word 0x14820041
  .word 0x00000000
  .word 0x8784b988
  .word 0x0c05ba48
  .word 0x00000000
  .word 0x8f91b988
  .word 0x27a40030
  .word 0x0000282d
  .word 0x2406001c
  .word 0x0c148502
  .word 0x00000000
  .word 0x24020329
  .word 0xafa2003c
  .word 0x24020001
  .word 0xafa20040
  .word 0xafb10044
  .word 0x24040003
  .word 0x27a50030
  .word 0x2406001c
  .word 0x0000382d
  .word 0x0c09f020
  .word 0x00000000
  .word 0x24020002
  .word 0xae020000
  .word 0x10000029
  .word 0x00000000
  .word 0x0c09f0ac
  .word 0x00000000
  .word 0x14400009
  .word 0x00000000
  .word 0x0c09f0cc
  .word 0x00000000
  .word 0x2403ffff
  .word 0x14430004
  .word 0x00000000
  .word 0x24030001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x24020001
  .word 0x14620019
  .word 0x00000000
  .word 0x24020003
  .word 0xae020000
  .word 0x10000015
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0e35bc
  .word 0x00000000
  .word 0x1440000d
  .word 0x00000000
  .word 0x0c0f0c2c
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843290
  .word 0x240501a9
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}
#define FUN_003bf720(...) FUN_003bf720(__VA_ARGS__)
#undef FUN_003bf8e0
// FUN_003BF8E0


code * FUN_003bf8e0(void)



{

  u32 *puVar1;

  code *pcVar2;

  int lVar3;

  

  puVar1 = (u32 *)FUN_00195540();

  lVar3 = FUN_003c3190((u32)&DAT_007ce678);

  if (lVar3 == 1) {

    *puVar1 = 0;

    puVar1[1] = 0;

    puVar1[2] = 0;

    puVar1[3] = 0;

    puVar1[4] = 0;

    puVar1[5] = 0;

    pcVar2 = (code *)&FUN_003bf720;

  }

  else {

    pcVar2 = (code *)0xffffffff;

  }

  return pcVar2;

}
#define FUN_003bf8e0(...) FUN_003bf8e0(__VA_ARGS__)
#undef FUN_003bf950
// FUN_003BF950


code * FUN_003bf950(void)
{
  int iVar1;
  int bVar2;
  int *piVar3;
  code *pcVar4;
  int lVar5;
  u8 auStack_20[0x1c];

  piVar3 = (int *)FUN_00195540();
  FUN_001717b0();
  iVar1 = *piVar3;
  switch (iVar1) {
  case 0:
    piVar3[1] = 0;
    piVar3[2] = 2;
    *piVar3 = 1;
    break;
  case 1:
    if (piVar3[1] >= piVar3[2]) {
      piVar3[1] = 0;
      piVar3[2] = 0;
      bVar2 = 1;
    }
    else {
      piVar3[1] = piVar3[1] + 1;
      bVar2 = 0;
    }
    if (bVar2 == 1) {
      FUN_00521408(auStack_20,0,0x1c);
      ((u32 *)auStack_20)[3] = 0x32b;
      ((u32 *)auStack_20)[4] = 1;
      ((u32 *)auStack_20)[5] = 0;
      FUN_0027c080(3,auStack_20,0x1c,0);
      *piVar3 = 2;
    }
    break;
  case 2:
    {
      int bVar3;
      lVar5 = FUN_0027c2b0();
      if ((lVar5 == 0) && (lVar5 = FUN_0027c330(), lVar5 == -1)) {
        bVar3 = 1;
      }
      else {
        bVar3 = 0;
      }
      if (bVar3 == 1) {
        *piVar3 = 3;
      }
    }
    break;
  case 3:
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    return (code *)&FUN_003bf8e0;
  }
  pcVar4 = (code *)0x0;
  return pcVar4;
}
#define FUN_003bf950(...) FUN_003bf950(__VA_ARGS__)
#undef FUN_003bfae0
// FUN_003BFAE0


u32 FUN_003bfae0(void)
{
  int iVar1;
  int bVar2;
  int *piVar3;
  u32 uVar4;
  int lVar5;
  u8 auStack_20[0x1c];

  piVar3 = (int *)FUN_00195540();
  FUN_001717b0();
  iVar1 = *piVar3;
  switch (iVar1) {
  case 0:
    piVar3[1] = 0;
    piVar3[2] = 2;
    *piVar3 = 1;
    break;
  case 1:
    if (piVar3[1] >= piVar3[2]) {
      piVar3[1] = 0;
      piVar3[2] = 0;
      bVar2 = 1;
    }
    else {
      piVar3[1] = piVar3[1] + 1;
      bVar2 = 0;
    }
    if (bVar2) {
      FUN_00521408(auStack_20,0,0x1c);
      ((u32 *)auStack_20)[3] = 0x328;
      ((u32 *)auStack_20)[4] = 1;
      ((u32 *)auStack_20)[5] = 0;
      FUN_0027c080(3,auStack_20,0x1c,0);
      *piVar3 = 2;
    }
    break;
  case 2:
    {
      int bVar3;
      lVar5 = FUN_0027c2b0();
      if ((lVar5 == 0) && (lVar5 = FUN_0027c330(), lVar5 == -1)) {
        bVar3 = 1;
      }
      else {
        bVar3 = 0;
      }
      if (bVar3 == 1) {
        *piVar3 = 3;
      }
    }
    break;
  case 3:
    return 0xffffffff;
  }
  uVar4 = 0;
  return uVar4;
}
#define FUN_003bfae0(...) FUN_003bfae0(__VA_ARGS__)
#undef FUN_003bfc50
// FUN_003BFC50


code * FUN_003bfc50(void)
{
  int iVar1;
  int bVar2;
  u32 uVar3;
  int *piVar4;
  code *pcVar5;
  int lVar6;
  u8 auStack_20[0x1c];

  piVar4 = (int *)FUN_00195540();
  iVar1 = *piVar4;
  switch (iVar1) {
  case 0:
    piVar4[1] = 0;
    piVar4[2] = 2;
    *piVar4 = 1;
    break;
  case 1:
    uVar3 = DAT_007ce674;
    FUN_00521408(auStack_20,0,0x1c);
    ((u32 *)auStack_20)[3] = 0x32a;
    ((u32 *)auStack_20)[4] = 1;
    ((u32 *)auStack_20)[5] = uVar3;
    FUN_0027c080(3,auStack_20,0x1c,0);
    *piVar4 = 2;
    break;
  case 2:
    lVar6 = FUN_0027c2b0();
    if ((lVar6 == 0) && (lVar6 = FUN_0027c330(), lVar6 == -1)) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
    if (bVar2 == 1) {
      FUN_00172b20();
      *piVar4 = 3;
    }
    break;
  case 3:
    *piVar4 = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar4[5] = 0;
    return (code *)&FUN_003bf950;
  }
  pcVar5 = (code *)0x0;
  return pcVar5;
}
#define FUN_003bfc50(...) FUN_003bfc50(__VA_ARGS__)
#undef FUN_003bfdb0
// FUN_003BFDB0


code * FUN_003bfdb0(void)



{

  char cVar1;

  u32 *puVar2;

  code *pcVar3;

  int lVar4;
  int iVar5;

  short sStack_2;

  

  puVar2 = (u32 *)FUN_00195540();

  iVar5 = FUN_00172c50(&sStack_2);

  if (iVar5 != 0) {
    cVar1 = FUN_0016dba0(sStack_2);
    if (cVar1 == '\n') {
      DAT_007ce674 = sStack_2 + 0x1e;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      pcVar3 = (code *)&FUN_003bfc50;
    }
    else {
      lVar4 = FUN_001717c0(sStack_2);
      if ((lVar4 == 1) || (lVar4 = FUN_00172160(sStack_2), lVar4 == 1)) {
        DAT_007ce674 = (int)sStack_2;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        pcVar3 = (code *)&FUN_003bfc50;
      }
      else {
        lVar4 = FUN_003c3050(sStack_2);
        if (lVar4 == 0) {
          FUN_0019d3f0("comuTimerSequence.c",0x249);
        }
        lVar4 = FUN_003c3120();
        if (lVar4 == 0) {
          FUN_0019d3f0("comuTimerSequence.c",0x24b);
        }
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        pcVar3 = (code *)&FUN_003bfae0;
      }
    }
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    pcVar3 = (code *)&FUN_003bf950;
  }

  return pcVar3;

}
#define FUN_003bfdb0(...) FUN_003bfdb0(__VA_ARGS__)
#undef FUN_003bff40
// FUN_003BFF40


code * FUN_003bff40(void)



{

  u32 *puVar1;

  

  puVar1 = (u32 *)FUN_00195540();

  FUN_003bdde0();

  *puVar1 = 0;

  puVar1[1] = 0;

  puVar1[2] = 0;

  puVar1[3] = 0;

  puVar1[4] = 0;

  puVar1[5] = 0;

  return (code *)&FUN_003bfdb0;

}
#define FUN_003bff40(...) FUN_003bff40(__VA_ARGS__)
#undef FUN_003bffa0
// FUN_003BFFA0


asm u32 FUN_003bffa0(u32 *param_1,u32 *param_2,u32 *param_3)
{
  .set noreorder
  .word 0x27bdfec0
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
  .word 0x0080902d
  .word 0x00a0b02d
  .word 0x00c0b82d
  .word 0x0c0ef750
  .word 0x00000000
  .word 0x0040982d
  .word 0x0000a82d
  .word 0x0c05f648
  .word 0x00000000
  .word 0x0040882d
  .word 0x0c05f690
  .word 0x00000000
  .word 0x0040802d
  .word 0x8e620000
  .word 0x7fa20100
  .word 0x8e620004
  .word 0x7fa200f0
  .word 0x0000a02d
  .word 0x1000002a
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x7fa200e0
  .word 0x7ba30100
  .word 0x00621021
  .word 0x90440001
  .word 0x90430000
  .word 0x240200ff
  .word 0x1462000d
  .word 0x00000000
  .word 0x0220282d
  .word 0x0200302d
  .word 0x0c05f814
  .word 0x00000000
  .word 0x24030001
  .word 0x14430003
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000009
  .word 0x00000000
  .word 0x16230006
  .word 0x00000000
  .word 0x16040004
  .word 0x00000000
  .word 0x24030001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x24020001
  .word 0x14620008
  .word 0x00000000
  .word 0x0040a82d
  .word 0x7ba300e0
  .word 0x7ba20100
  .word 0x00621021
  .word 0x905e0002
  .word 0x10000006
  .word 0x00000000
  .word 0x26940001
  .word 0x7ba200f0
  .word 0x0282102a
  .word 0x1440ffd4
  .word 0x00000000
  .word 0x24020001
  .word 0x16a20007
  .word 0x00000000
  .word 0x24030322
  .word 0xae430000
  .word 0xaec20000
  .word 0xaefe0000
  .word 0x100000b1
  .word 0x00000000
  .word 0x8e620008
  .word 0x7fa200d0
  .word 0x8e62000c
  .word 0x7fa200c0
  .word 0x0000a02d
  .word 0x1000002a
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x7fa200b0
  .word 0x7ba300d0
  .word 0x00621021
  .word 0x90440001
  .word 0x90430000
  .word 0x240200ff
  .word 0x1462000d
  .word 0x00000000
  .word 0x0220282d
  .word 0x0200302d
  .word 0x0c05f814
  .word 0x00000000
  .word 0x24030001
  .word 0x14430003
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000009
  .word 0x00000000
  .word 0x16230006
  .word 0x00000000
  .word 0x16040004
  .word 0x00000000
  .word 0x24030001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x24020001
  .word 0x14620008
  .word 0x00000000
  .word 0x0040a82d
  .word 0x7ba300b0
  .word 0x7ba200d0
  .word 0x00621021
  .word 0x905e0002
  .word 0x10000006
  .word 0x00000000
  .word 0x26940001
  .word 0x7ba200c0
  .word 0x0282102a
  .word 0x1440ffd4
  .word 0x00000000
  .word 0x24020001
  .word 0x16a20007
  .word 0x00000000
  .word 0x24030323
  .word 0xae430000
  .word 0xaec20000
  .word 0xaefe0000
  .word 0x10000074
  .word 0x00000000
  .word 0x8e7e0010
  .word 0x8e620014
  .word 0x7fa200a0
  .word 0x0000a82d
  .word 0x0000a02d
  .word 0x10000017
  .word 0x00000000
  .word 0x00141080
  .word 0x00541021
  .word 0x03c21021
  .word 0x90460000
  .word 0x90470001
  .word 0x90480002
  .word 0x90490003
  .word 0x0220202d
  .word 0x0200282d
  .word 0x0c0efc9c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x00151080
  .word 0x005d1021
  .word 0xac540110
  .word 0x26b50001
  .word 0x2aa1000a
  .word 0x10200006
  .word 0x00000000
  .word 0x26940001
  .word 0x7ba200a0
  .word 0x0282102a
  .word 0x1440ffe7
  .word 0x00000000
  .word 0x1aa00018
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0c0e5480
  .word 0x00000000
  .word 0x00021080
  .word 0x005d1021
  .word 0x8c430110
  .word 0x00031080
  .word 0x00431021
  .word 0x005e1021
  .word 0x90540004
  .word 0x24040014
  .word 0x0c0e548c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x24020322
  .word 0xae420000
  .word 0xaec30000
  .word 0xaef40000
  .word 0x0060102d
  .word 0x1000003a
  .word 0x00000000
  .word 0x8e750018
  .word 0x8e7e001c
  .word 0x0000a02d
  .word 0x0000982d
  .word 0x10000017
  .word 0x00000000
  .word 0x00131080
  .word 0x00531021
  .word 0x02a21021
  .word 0x90460000
  .word 0x90470001
  .word 0x90480002
  .word 0x90490003
  .word 0x0220202d
  .word 0x0200282d
  .word 0x0c0efc9c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x00141080
  .word 0x005d1021
  .word 0xac530110
  .word 0x26940001
  .word 0x2a81000a
  .word 0x10200005
  .word 0x00000000
  .word 0x26730001
  .word 0x027e102a
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x1a800018
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0e5480
  .word 0x00000000
  .word 0x00021080
  .word 0x005d1021
  .word 0x8c430110
  .word 0x00031080
  .word 0x00431021
  .word 0x00551021
  .word 0x90500004
  .word 0x24040014
  .word 0x0c0e548c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x24020323
  .word 0xae420000
  .word 0xaec30000
  .word 0xaef00000
  .word 0x0060102d
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
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
  .word 0x27bd0140
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#define FUN_003bffa0(...) FUN_003bffa0(__VA_ARGS__)
#undef FUN_003c03f0
// FUN_003C03F0


u32 FUN_003c03f0(void)
{
  int iVar1;
  int bVar2;
  int *piVar3;
  u32 uVar4;
  int lVar5;
  u8 auStack_20[0x1c];

  piVar3 = (int *)FUN_00195540();
  iVar1 = *piVar3;
  switch (iVar1) {
  case 0:
    if (DAT_007ce670 == 0) {
      *piVar3 = 3;
    }
    piVar3[1] = 0;
    piVar3[2] = 2;
    *piVar3 = 1;
    break;
  case 1:
    if (piVar3[1] >= piVar3[2]) {
      piVar3[1] = 0;
      piVar3[2] = 0;
      bVar2 = 1;
    }
    else {
      piVar3[1] = piVar3[1] + 1;
      bVar2 = 0;
    }
    if (bVar2) {
      FUN_00521408(auStack_20,0,0x1c);
      ((u32 *)auStack_20)[3] = 0x8c;
      ((u32 *)auStack_20)[4] = 4;
      ((u32 *)auStack_20)[5] = 0;
      FUN_0027c080(3,auStack_20,0x1c,0);
      *piVar3 = 2;
    }
    break;
  case 2:
    {
      int bVar3;
      lVar5 = FUN_0027c2b0();
      if ((lVar5 == 0) && (lVar5 = FUN_0027c330(), lVar5 == -1)) {
        bVar3 = 1;
      }
      else {
        bVar3 = 0;
      }
      if (bVar3 == 1) {
        *piVar3 = 3;
      }
    }
    break;
  case 3:
    return 0xffffffff;
  }
  uVar4 = 0;
  return uVar4;
}
#define FUN_003c03f0(...) FUN_003c03f0(__VA_ARGS__)
#undef FUN_003c0570
// FUN_003C0570


code * FUN_003c0570(void)
{
  int iVar1;
  int bVar2;
  int *piVar3;
  code *pcVar4;
  int lVar5;
  int lVar6;
  u8 auStack_40 [28];
  u8 auStack_20 [28];

  piVar3 = (int *)FUN_00195540();
  iVar1 = *piVar3;
  switch (iVar1) {
  case 0:
    piVar3[1] = 0;
    piVar3[2] = 2;
    *piVar3 = 1;
    break;
  case 1:
    if (piVar3[1] >= piVar3[2]) {
      piVar3[1] = 0;
      piVar3[2] = 0;
      bVar2 = 1;
    }
    else {
      piVar3[1] = piVar3[1] + 1;
      bVar2 = 0;
    }
    if (bVar2) {
      lVar5 = FUN_0017d920();
      lVar6 = FUN_0017da40();
      if ((lVar5 == 4) && (lVar6 == 0x15)) {
        FUN_00395170(0x24);
        DAT_007ce670 = 0;
        FUN_00521408(auStack_40,0,0x1c);
        ((u32 *)auStack_40)[3] = 0x8d;
        ((u32 *)auStack_40)[4] = 1;
        ((u32 *)auStack_40)[5] = 0;
        FUN_0027c080(3,auStack_40,0x1c,0);
        *piVar3 = 2;
      }
      else if ((lVar5 == 4) && (lVar6 == 0x1b)) {
        FUN_00395170(0x10a);
        DAT_007ce670 = 0;
        FUN_00521408(auStack_20,0,0x1c);
        ((u32 *)auStack_20)[3] = 0x6f;
        ((u32 *)auStack_20)[4] = 2;
        ((u32 *)auStack_20)[5] = 0;
        FUN_0027c080(3,auStack_20,0x1c,0);
        *piVar3 = 2;
      }
      else {
        *piVar3 = 3;
      }
    }
    break;
  case 2:
    {
      int bVar3;
      lVar5 = FUN_0027c2b0();
      if ((lVar5 == 0) && (lVar5 = FUN_0027c330(), lVar5 == -1)) {
        bVar3 = 1;
      }
      else {
        bVar3 = 0;
      }
      if (bVar3 == 1) {
        *piVar3 = 3;
      }
    }
    break;
  case 3:
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    return (code *)&FUN_003c03f0;
  }
  pcVar4 = (code *)0x0;
  return pcVar4;
}
#define FUN_003c0570(...) FUN_003c0570(__VA_ARGS__)
#undef FUN_003c07c0
// FUN_003C07C0


code * FUN_003c07c0(void)
{
  int iVar1;
  int bVar2;
  int *piVar3;
  code *pcVar4;
  int lVar5;
  u8 auStack_30 [28];
  u32 uStack_4;
  u32 uStack_8;
  u32 uStack_c;
  u32 result0;
  u32 result1;
  u32 result2;
  int ready;

  piVar3 = (int *)FUN_00195540();
  uStack_4 = 0;
  uStack_8 = 0;
  uStack_c = 0;
  iVar1 = *piVar3;
  switch (iVar1) {
  case 0:
    piVar3[1] = 0;
    piVar3[2] = 2;
    *piVar3 = 1;
    break;
  case 1:
    if (piVar3[1] >= piVar3[2]) {
      piVar3[1] = 0;
      piVar3[2] = 0;
      ready = 1;
    }
    else {
      piVar3[1] = piVar3[1] + 1;
      ready = 0;
    }
    if (ready) {
      lVar5 = (FUN_003bffa0)(&uStack_4,&uStack_8,&uStack_c);
      if (lVar5 == 0) {
        *piVar3 = 3;
      }
      else {
        DAT_007ce670 = 0;
        result2 = uStack_c;
        result1 = uStack_8;
        result0 = uStack_4;
        FUN_00521408(auStack_30,0,0x1c);
        ((u32 *)auStack_30)[3] = result0;
        ((u32 *)auStack_30)[4] = result1;
        ((u32 *)auStack_30)[5] = result2;
        FUN_0027c080(3,auStack_30,0x1c,0);
        *piVar3 = 2;
      }
    }
    break;
  case 2:
    lVar5 = FUN_0027c2b0();
    if ((lVar5 == 0) && (lVar5 = FUN_0027c330(), lVar5 == -1)) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
    if (bVar2 == 1) {
      *piVar3 = 3;
    }
    break;
  case 3:
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    return (code *)&FUN_003c0570;
  }
  pcVar4 = (code *)0x0;
  return pcVar4;
}
#define FUN_003c07c0(...) FUN_003c07c0(__VA_ARGS__)
#undef FUN_003c09a0
// FUN_003C09A0


code * FUN_003c09a0(void)
{
  int iVar1;
  int bVar2;
  int *piVar3;
  int lVar4;
  u8 auStack_20[0x1c];

  piVar3 = (int *)FUN_00195540();
  iVar1 = *piVar3;
  switch (iVar1) {
  case 0:
    piVar3[1] = 0;
    piVar3[2] = 2;
    *piVar3 = 1;
    break;
  case 1:
    if (piVar3[1] >= piVar3[2]) {
      piVar3[1] = 0;
      piVar3[2] = 0;
      bVar2 = 1;
    }
    else {
      piVar3[1] = piVar3[1] + 1;
      bVar2 = 0;
    }
    if (bVar2) {
      uGpffffb980 = 0;
      FUN_00521408(auStack_20,0,0x1c);
      ((u32 *)auStack_20)[3] = 0x321;
      ((u32 *)auStack_20)[4] = 1;
      ((u32 *)auStack_20)[5] = 0;
      FUN_0027c080(3,auStack_20,0x1c,0);
      *piVar3 = 2;
    }
    break;
  case 2:
    {
      int bVar3;
      lVar4 = FUN_0027c2b0();
      if ((lVar4 == 0) && (lVar4 = FUN_0027c330(), lVar4 == -1)) {
        bVar3 = 1;
      }
      else {
        bVar3 = 0;
      }
      if (bVar3 == 1) {
        lVar4 = FUN_0038d6f0(0);
        if (lVar4 == 0) {
          return (code *)0xffffffff;
        }
        *piVar3 = 0;
        piVar3[1] = 0;
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[4] = 0;
        piVar3[5] = 0;
        return (code *)&FUN_003c07c0;
      }
    }
    break;
  }
  return (code *)0x0;
}
#define FUN_003c09a0(...) FUN_003c09a0(__VA_ARGS__)
#undef FUN_003c0b30
// FUN_003C0B30


code * FUN_003c0b30(void)



{

  u32 *puVar1;

  code *pcVar2;

  int lVar3;

  

  puVar1 = (u32 *)FUN_00195540();

  FUN_0016c920(1);

  lVar3 = FUN_003951d0(0xbde);

  if (lVar3 == 1) {

    *puVar1 = 0;

    puVar1[1] = 0;

    puVar1[2] = 0;

    puVar1[3] = 0;

    puVar1[4] = 0;

    puVar1[5] = 0;

    pcVar2 = (code *)&FUN_003c09a0;

  }

  else {

    *puVar1 = 0;

    puVar1[1] = 0;

    puVar1[2] = 0;

    puVar1[3] = 0;

    puVar1[4] = 0;

    puVar1[5] = 0;

    pcVar2 = (code *)&FUN_003c07c0;

  }

  return pcVar2;

}
#define FUN_003c0b30(...) FUN_003c0b30(__VA_ARGS__)
#undef FUN_003c0bd0
// FUN_003C0BD0


code * FUN_003c0bd0(void)



{

  u32 *puVar1;

  

  puVar1 = (u32 *)FUN_00195540();

  FUN_003bdde0();

  uGpffffb980 = 1;

  *puVar1 = 0;

  puVar1[1] = 0;

  puVar1[2] = 0;

  puVar1[3] = 0;

  puVar1[4] = 0;

  puVar1[5] = 0;

  return (code *)&FUN_003c0b30;

}
#define FUN_003c0bd0(...) FUN_003c0bd0(__VA_ARGS__)
#undef FUN_003c0c30
// FUN_003C0C30


u32 FUN_003c0c30(void)
{
  int *piVar2;
  int lVar3;
  u16 auStack_20[0xe];

  piVar2 = (int *)FUN_00195540();
  switch (*piVar2) {
  case 0:
    FUN_00521408(auStack_20,0,0x1c);
    auStack_20[0] = 7;
    auStack_20[1] = 1;
    auStack_20[2] = 0;
    auStack_20[4] = 0;
    FUN_0027c080(2,auStack_20,0x1c,0);
    *piVar2 = 1;
    break;
  case 1:
    {
      int bVar1;
      lVar3 = FUN_0027c2b0();
      if ((lVar3 == 0) && (lVar3 = FUN_0027c330(), lVar3 == -1)) {
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
      if (bVar1 == 1) {
        return 0xffffffff;
      }
    }
    break;
  }
  return 0;
}
#define FUN_003c0c30(...) FUN_003c0c30(__VA_ARGS__)
#undef FUN_003c0d20
// FUN_003C0D20


code * FUN_003c0d20(void)



{

  u32 *puVar1;

  code *pcVar2;

  int lVar3;

  u16 auStack_2;

  

  puVar1 = (u32 *)FUN_00195540();

  lVar3 = FUN_00172c50(&auStack_2);

  if (lVar3 != 0) {

    *puVar1 = 0;

    puVar1[1] = 0;

    puVar1[2] = 0;

    puVar1[3] = 0;

    puVar1[4] = 0;

    puVar1[5] = 0;

    pcVar2 = (code *)&FUN_003c0c30;

  }

  else {

    *puVar1 = 0;

    puVar1[1] = 0;

    puVar1[2] = 0;

    puVar1[3] = 0;

    puVar1[4] = 0;

    puVar1[5] = 0;

    pcVar2 = (code *)&FUN_003bf510;

  }

  return pcVar2;

}
#define FUN_003c0d20(...) FUN_003c0d20(__VA_ARGS__)
#undef FUN_003c0db0
/* W389 pragma pair: opt_loop_invariants on + opt_lifetimes on; without nd=173/object=324, with nd=145/object=324; window=368. */
#pragma push
#pragma opt_loop_invariants on
#pragma opt_lifetimes on
// FUN_003C0DB0


asm u32 FUN_003c0db0(u32 *param_1,u32 *param_2,u32 *param_3)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x00c0982d
  .word 0x0c0ef61c
  .word 0x00000000
  .word 0x0040902d
  .word 0x8c510664
  .word 0x0c05f648
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c05f690
  .word 0x00000000
  .word 0x0040b02d
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304700ff
  .word 0x0000402d
  .word 0x24030004
  .word 0x24040002
  .word 0x1000002e
  .word 0x00000000
  .word 0x8e450660
  .word 0x00081040
  .word 0x00481021
  .word 0x00021080
  .word 0x00a23021
  .word 0x90c50000
  .word 0x16050025
  .word 0x00000000
  .word 0x90c50001
  .word 0x16c50022
  .word 0x00000000
  .word 0x8cc50004
  .word 0x14a00010
  .word 0x00000000
  .word 0x14e4001d
  .word 0x00000000
  .word 0x94c30008
  .word 0xaea30000
  .word 0x8e430660
  .word 0x00431821
  .word 0x9063000a
  .word 0xae830000
  .word 0x8e430660
  .word 0x00431021
  .word 0x9042000b
  .word 0xae620000
  .word 0x24020001
  .word 0x10000015
  .word 0x00000000
  .word 0x14e3000e
  .word 0x00000000
  .word 0x94c30008
  .word 0xaea30000
  .word 0x8e430660
  .word 0x00431821
  .word 0x9063000a
  .word 0xae830000
  .word 0x8e430660
  .word 0x00431021
  .word 0x9042000b
  .word 0xae620000
  .word 0x24020001
  .word 0x10000006
  .word 0x00000000
  .word 0x25080001
  .word 0x0111102a
  .word 0x1440ffd1
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma pop
#pragma opt_lifetimes reset
#pragma opt_loop_invariants reset
#define FUN_003c0db0(...) FUN_003c0db0(__VA_ARGS__)
#undef FUN_003c0f20
// FUN_003C0F20


u32 FUN_003c0f20(void)
{
  int iVar1;
  int bVar2;
  u8 cVar3;
  int *piVar4;
  u32 uVar5;
  u32 a;
  u32 b;
  u32 c;
  s32 lVar6;
  struct {
    u8 data[0x24];
    u32 c;
    u32 b;
    u32 a;
  } stack;

  piVar4 = (int *)FUN_00195540();
  FUN_001717b0();
  FUN_0017d920();
  FUN_0017da40();
  iVar1 = *piVar4;
  switch (iVar1) {
  case 0:
    cVar3 = FUN_0016ef30();
    if ((cVar3 == '\x04') && (lVar6 = FUN_003951d0(0x98c), lVar6 == 1)) {
      return 0xffffffff;
    }
    piVar4[1] = 0;
    piVar4[2] = 2;
    *piVar4 = 1;
    break;
  case 1:
    if (piVar4[1] >= piVar4[2]) {
      piVar4[1] = 0;
      piVar4[2] = 0;
      bVar2 = 1;
    }
    else {
      piVar4[1] = piVar4[1] + 1;
      bVar2 = 0;
    }
    if (bVar2) {
      lVar6 = (FUN_003c0db0)(&stack.a,&stack.b,&stack.c);
      if (lVar6 == 1) {
        c = stack.c;
        b = stack.b;
        a = stack.a;
        FUN_00521408(stack.data,0,0x1c);
        ((u32 *)stack.data)[3] = a;
        ((u32 *)stack.data)[4] = b;
        ((u32 *)stack.data)[5] = c;
        FUN_0027c080(3,stack.data,0x1c,0);
        *piVar4 = 2;
      }
      else {
        return 0xffffffff;
      }
    }
    break;
  case 2:
    {
      int bVar3;
      lVar6 = FUN_0027c2b0();
      if ((lVar6 == 0) && (lVar6 = FUN_0027c330(), lVar6 == -1)) {
        bVar3 = 1;
      }
      else {
        bVar3 = 0;
      }
      if (bVar3 == 1) {
        *piVar4 = 3;
      }
    }
    break;
  case 3:
    cVar3 = FUN_0016ef30();
    if (cVar3 == '\x02') {
      FUN_00395170(0x98c);
    }
    return 0xffffffff;
  }
  uVar5 = 0;
  return uVar5;
}
#define FUN_003c0f20(...) FUN_003c0f20(__VA_ARGS__)
#undef FUN_003c1150
// FUN_003C1150


u32 FUN_003c1150(void)
{
  int iVar1;
  int bVar2;
  int *piVar3;
  u32 uVar4;
  int lVar5;
  u8 auStack_20[0x1c];

  piVar3 = (int *)FUN_00195540();
  iVar1 = *piVar3;
  switch (iVar1) {
  case 0:
    piVar3[1] = 0;
    piVar3[2] = 2;
    *piVar3 = 1;
    break;
  case 1:
    if (piVar3[1] >= piVar3[2]) {
      piVar3[1] = 0;
      piVar3[2] = 0;
      bVar2 = 1;
    }
    else {
      piVar3[1] = piVar3[1] + 1;
      bVar2 = 0;
    }
    if (bVar2) {
      lVar5 = FUN_003c2630(0,0,0);
      if (lVar5 == 1) {
        *piVar3 = 2;
      }
      else {
        return 0xffffffff;
      }
    }
    break;
  case 2:
    FUN_00521408(auStack_20,0,0x1c);
    ((u32 *)auStack_20)[3] = 0x32c;
    ((u32 *)auStack_20)[4] = 2;
    ((u32 *)auStack_20)[5] = 0;
    FUN_0027c080(3,auStack_20,0x1c,0);
    *piVar3 = 3;
    break;
  case 3:
    {
      int bVar3;
      lVar5 = FUN_0027c2b0();
      if ((lVar5 == 0) && (lVar5 = FUN_0027c330(), lVar5 == -1)) {
        bVar3 = 1;
      }
      else {
        bVar3 = 0;
      }
      if (bVar3 == 1) {
        *piVar3 = 4;
      }
    }
    break;
  case 4:
    return 0xffffffff;
  }
  uVar4 = 0;
  return uVar4;
}
#define FUN_003c1150(...) FUN_003c1150(__VA_ARGS__)
#undef FUN_003c1300
// FUN_003C1300


code * FUN_003c1300(void)



{

  u32 *puVar1;

  

  puVar1 = (u32 *)FUN_00195540();

  *puVar1 = 0;

  puVar1[1] = 0;

  puVar1[2] = 0;

  puVar1[3] = 0;

  puVar1[4] = 0;

  puVar1[5] = 0;

  return (code *)&FUN_003c1150;

}
#define FUN_003c1300(...) FUN_003c1300(__VA_ARGS__)
#undef FUN_003c1340
// FUN_003C1340


u32 FUN_003c1340(void)
{
  int *piVar2;
  int lVar3;
  u16 auStack_20[0xe];

  piVar2 = (int *)FUN_00195540();
  switch (*piVar2) {
  case 0:
    FUN_00521408(auStack_20,0,0x1c);
    auStack_20[0] = 6;
    auStack_20[1] = 3;
    auStack_20[2] = 2;
    auStack_20[4] = 0;
    FUN_0027c080(2,auStack_20,0x1c,0);
    *piVar2 = 1;
    break;
  case 1:
    {
      int bVar1;
      lVar3 = FUN_0027c2b0();
      if ((lVar3 == 0) && (lVar3 = FUN_0027c330(), lVar3 == -1)) {
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
      if (bVar1 == 1) {
        return 0xffffffff;
      }
    }
    break;
  }
  return 0;
}
#define FUN_003c1340(...) FUN_003c1340(__VA_ARGS__)
#undef FUN_003c1430
// FUN_003C1430


u8 * FUN_003c1430(void)



{

  return DAT_0095b750;

}
#define FUN_003c1430(...) FUN_003c1430(__VA_ARGS__)
#undef FUN_003c1440
// FUN_003C1440


code * FUN_003c1440(void)
{
  int iVar1;
  int bVar2;
  int *piVar3;
  int lVar4;

  piVar3 = (int *)FUN_00195540();
  iVar1 = *piVar3;
  switch (iVar1) {
  case 0:
    piVar3[1] = 0;
    piVar3[2] = 2;
    *piVar3 = 1;
    break;
  case 1:
    if (piVar3[1] >= piVar3[2]) {
      piVar3[1] = 0;
      piVar3[2] = 0;
      bVar2 = 1;
    }
    else {
      piVar3[1] = piVar3[1] + 1;
      bVar2 = 0;
    }
    if (bVar2) {
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      return (code *)&FUN_003c1340;
    }
    break;
  case 2:
    {
      int bVar3;

      lVar4 = FUN_0027c2b0();
      if ((lVar4 == 0) && (lVar4 = FUN_0027c330(), lVar4 == -1)) {
        bVar3 = 1;
      }
      else {
        bVar3 = 0;
      }
      if (bVar3 == 1) {
        lVar4 = FUN_0038d6f0(0);
        if (lVar4 == 0) {
          FUN_001728d0(DAT_0095b750);
          *piVar3 = 0;
          piVar3[1] = 0;
          piVar3[2] = 0;
          piVar3[3] = 0;
          piVar3[4] = 0;
          piVar3[5] = 0;
          return (code *)&FUN_003bf370;
        }
        *piVar3 = 0;
        piVar3[1] = 0;
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[4] = 0;
        piVar3[5] = 0;
        return (code *)&FUN_003c1340;
      }
    }
    break;
  }
  return (code *)0x0;
}
#define FUN_003c1440(...) FUN_003c1440(__VA_ARGS__)
#undef FUN_003c15d0
// FUN_003C15D0


code * FUN_003c15d0(void)
{
  int *piVar5;
  int bVar1;
  int iVar2;
  int iVar3;
  int bVar4;
  int *piVar10;
  code *pcVar7;
  int lVar8;
  int *piVar9;
  int iVar6;
  u8 auStack_40[0x1c];
  u8 auStack_20[0x1c];

  piVar5 = (int *)FUN_00195540();
  piVar10 = (int *)(FUN_001717b0() + 0x1e4);
  piVar9 = piVar5 + 8;
  iVar6 = 7;
  do {
    iVar2 = *piVar10;
    iVar3 = piVar10[1];
    piVar10 = piVar10 + 2;
    iVar6 = iVar6 + -1;
    *piVar9 = iVar2;
    piVar9[1] = iVar3;
    piVar9 = piVar9 + 2;
  } while (0 < iVar6);
  bVar1 = *(u8 *)(piVar5 + 8);
  iVar6 = *piVar5;
  switch (iVar6) {
  case 0:
    piVar5[1] = 0;
    piVar5[2] = 2;
    *piVar5 = 3;
    break;
  case 1:
    if (piVar5[1] >= piVar5[2]) {
      piVar5[1] = 0;
      piVar5[2] = 0;
      bVar4 = 1;
    }
    else {
      piVar5[1] = piVar5[1] + 1;
      bVar4 = 0;
    }
    if (bVar4) {
      lVar8 = FUN_003c40f0(bVar1);
      switch (lVar8) {
      case 0:
      case 2:
        FUN_00521408(auStack_40,0,0x1c);
        ((u32 *)auStack_40)[3] = 0x334;
        ((u32 *)auStack_40)[4] = 1;
        ((u32 *)auStack_40)[5] = bVar1;
        FUN_0027c080(3,auStack_40,0x1c,0);
        break;
      case 1:
        FUN_00521408(auStack_20,0,0x1c);
        ((u32 *)auStack_20)[3] = 0x335;
        ((u32 *)auStack_20)[4] = 1;
        ((u32 *)auStack_20)[5] = bVar1;
        FUN_0027c080(3,auStack_20,0x1c,0);
        break;
      }
      *piVar5 = 2;
    }
    break;
  case 2:
    {
      int bVar11;
      lVar8 = FUN_0027c2b0();
      if ((lVar8 == 0) && (lVar8 = FUN_0027c330(), lVar8 == -1)) {
        bVar11 = 1;
      }
      else {
        bVar11 = 0;
      }
      if (bVar11 == 1) {
        *piVar5 = 3;
      }
    }
    break;
  case 3:
    *piVar5 = 0;
    piVar5[1] = 0;
    piVar5[2] = 0;
    piVar5[3] = 0;
    piVar5[4] = 0;
    piVar5[5] = 0;
    return (code *)&FUN_003bf370;
  }
  pcVar7 = (code *)0x0;
  return pcVar7;
}
#define FUN_003c15d0(...) FUN_003c15d0(__VA_ARGS__)
#undef FUN_003c1810
// FUN_003C1810


code * FUN_003c1810(void)



{

  int *piVar1;

  code *pcVar2;

  int lVar3;

  

  piVar1 = (int *)FUN_00195540();

  switch (*piVar1) {
  case 0:
    lVar3 = FUN_001729a0();
    if (lVar3 == 1) {
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      pcVar2 = (code *)&FUN_003c15d0;
    }
    else {
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      pcVar2 = (code *)&FUN_003c1440;
    }
    break;
  default:
    pcVar2 = (code *)0x0;
    break;
  }

  return pcVar2;

}
#define FUN_003c1810(...) FUN_003c1810(__VA_ARGS__)
#undef FUN_003c18c0
// FUN_003C18C0


u32 FUN_003c18c0(void)
{
  int iVar1;
  int bVar2;
  int *piVar3;
  int lVar4;
  u16 auStack_40[0xe];
  u16 auStack_20[0xe];

  piVar3 = (int *)FUN_00195540();
  iVar1 = *piVar3;
  switch (iVar1) {
  case 0:
    piVar3[1] = 0;
    piVar3[2] = 2;
    *piVar3 = 1;
    break;
  case 1:
    if (piVar3[1] >= piVar3[2]) {
      piVar3[1] = 0;
      piVar3[2] = 0;
      bVar2 = 1;
    }
    else {
      piVar3[1] = piVar3[1] + 1;
      bVar2 = 0;
    }
    if (bVar2) {
      lVar4 = FUN_003951d0(0xbd4);
      if (lVar4 == 1) {
        FUN_00521408(auStack_40,0,0x1c);
        auStack_40[0] = 7;
        auStack_40[1] = 1;
        auStack_40[2] = 5;
        auStack_40[4] = 0;
        FUN_0027c080(2,auStack_40,0x1c,0);
      }
      else {
        FUN_00521408(auStack_20,0,0x1c);
        auStack_20[0] = 7;
        auStack_20[1] = 2;
        auStack_20[2] = 0;
        auStack_20[4] = 0;
        FUN_0027c080(2,auStack_20,0x1c,0);
      }
      *piVar3 = 2;
    }
    break;
  case 2:
    {
      int bVar3;
      lVar4 = FUN_0027c2b0();
      if ((lVar4 == 0) && (lVar4 = FUN_0027c330(), lVar4 == -1)) {
        bVar3 = 1;
      }
      else {
        bVar3 = 0;
      }
      if (bVar3 == 1) {
        return 0xffffffff;
      }
    }
    break;
  }
  return 0;
}
#define FUN_003c18c0(...) FUN_003c18c0(__VA_ARGS__)
#undef FUN_003c1a70
// FUN_003C1A70


void FUN_003c1a70(void)



{

  int iVar1;
  
  iVar1 = FUN_00195540();

  (*(code *)0x96017c)(iVar1);

  return;

}
#define FUN_003c1a70(...) FUN_003c1a70(__VA_ARGS__)
#undef FUN_003c1ab0
/* W389 pragma pair: opt_lifetimes on + opt_propagation off; without nd=91/object=624, with nd=40/object=624; window=624. */
#pragma push
#pragma opt_lifetimes on
#pragma opt_propagation off
// FUN_003C1AB0


u32 FUN_003c1ab0(u32 param_1,u32 param_2)



{

  code *lVar4;

  u32 uVar1;

  u32 uVar2;

  s32 lVar3;

  

  lVar4 = 0;

  uVar1 = FUN_0017d920();

  uVar2 = FUN_0017da40();

  switch(param_2) {

  case 1:

    lVar3 = FUN_0017e050(100,uVar1,uVar2);

    if (lVar3 == 1) {

      lVar4 = (code *)&FUN_003bff40;

    }

    else {

      lVar4 = (code *)&FUN_003c0bd0;

    }

    break;

  case 2:

    lVar3 = FUN_0017e050(100,uVar1,uVar2);

    if (lVar3 != 1) {

      lVar4 = (code *)&FUN_003c0f20;

    }

    break;

  case 3:

    lVar3 = FUN_0017e050(100,uVar1,uVar2);

    if (lVar3 == 0) {

      lVar4 = (code *)&FUN_003c1300;

    }

    break;

  case 4:

    lVar3 = FUN_0017e050(100,uVar1,uVar2);

    if (lVar3 == 1) {

      FUN_003bec50();

      lVar4 = (code *)&FUN_003c0d20;

    }

    else {

      lVar3 = FUN_0017db00();

      if ((lVar3 != 6) && (lVar3 = FUN_0017e050(100,uVar1,uVar2), lVar3 == 0)) {

        lVar4 = (code *)&FUN_003c0f20;

      }

    }

    break;

  case 5:

    lVar3 = FUN_0017e050(100,uVar1,uVar2);

    if (lVar3 == 0) {

      lVar4 = (code *)&FUN_003c1810;

    }

    break;

  case 6:

    lVar4 = (code *)&FUN_003c18c0;

    break;

  case 7:

    lVar4 = (code *)&FUN_003bf610;

  case 8:
    break;
  }

  if (lVar4 == 0) {

    uVar1 = 0;

  }

  else {

    lVar3 = (*(u32 (**)(u32, u32))DAT_00960178_abs)(0x58, 0x40000);

    if (lVar3 == 0) {

      FUN_0019d3f0((const char *)(DAT_006a3308 - 0x78),0x836);

    }

    FUN_00521408(lVar3,0,0x58);

    return *(u32 *)((u8 *)lVar3 + 0x18) = FUN_00194b20(param_1,(const char *)(DAT_006a3308 - 0x58),0xe,(void *(*)(void *))lVar4,(code *)&FUN_003c1a70,lVar3);

  }

  return uVar1;

}
#pragma pop
#pragma opt_propagation reset
#pragma opt_lifetimes reset
#define FUN_003c1ab0(...) FUN_003c1ab0(__VA_ARGS__)
#undef FUN_003c1d20
// FUN_003C1D20


asm u32 FUN_003c1d20(u8 *param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c90003c
  .word 0x26110094
  .word 0x8e020000
  .word 0x2c410016
  .word 0x1020015c
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463b3a0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x26040018
  .word 0x0c05cb5c
  .word 0x00000000
  .word 0xae020010
  .word 0x14400005
  .word 0x00000000
  .word 0x24020015
  .word 0xae020000
  .word 0x1000014b
  .word 0x00000000
  .word 0x24020001
  .word 0xae020000
  .word 0x10000147
  .word 0x00000000
  .word 0x3c04006a
  .word 0x248432d0
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae0200b4
  .word 0x24020002
  .word 0xae020000
  .word 0x1000013d
  .word 0x00000000
  .word 0x8e0400b4
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x24030001
  .word 0x14430137
  .word 0x00000000
  .word 0x3c04006a
  .word 0x248432f0
  .word 0x27a5004c
  .word 0x0c040870
  .word 0x00000000
  .word 0x0220202d
  .word 0x0040282d
  .word 0x0c0e7b1c
  .word 0x00000000
  .word 0x24020003
  .word 0xae020000
  .word 0x1000012a
  .word 0x00000000
  .word 0xae000014
  .word 0x24020004
  .word 0xae020000
  .word 0x10000125
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050003
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020005
  .word 0xae020000
  .word 0x1000011b
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430115
  .word 0x00000000
  .word 0x24020006
  .word 0xae020000
  .word 0x10000111
  .word 0x00000000
  .word 0x8e030014
  .word 0x8e020010
  .word 0x0062102a
  .word 0x14400005
  .word 0x00000000
  .word 0x24020015
  .word 0xae020000
  .word 0x10000108
  .word 0x00000000
  .word 0x00031080
  .word 0x00501021
  .word 0x8c440018
  .word 0x0c0ef7f0
  .word 0x00000000
  .word 0x24020007
  .word 0xae020000
  .word 0x100000ff
  .word 0x00000000
  .word 0x9604000c
  .word 0x24050011
  .word 0x0c0eec04
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050065
  .word 0x24060003
  .word 0x0c0e54b4
  .word 0x00000000
  .word 0xae000004
  .word 0x24020032
  .word 0xae020008
  .word 0x24020008
  .word 0xae020000
  .word 0x100000ef
  .word 0x00000000
  .word 0x8e030008
  .word 0x8e020004
  .word 0x0043082a
  .word 0x14200004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x24420001
  .word 0xae020004
  .word 0x0000102d
  .word 0x104000e2
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x9604000c
  .word 0x0000282d
  .word 0x24060013
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x9604000c
  .word 0x0000282d
  .word 0x24060014
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x24020009
  .word 0xae020000
  .word 0x100000ca
  .word 0x00000000
  .word 0x8e020014
  .word 0x00021080
  .word 0x00501021
  .word 0x8c440018
  .word 0x0c0f0ff8
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0040302d
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x8e020014
  .word 0x00021080
  .word 0x00501021
  .word 0x84440018
  .word 0x0c05b7cc
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x304400ff
  .word 0x0c0c2eec
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050001
  .word 0x0040302d
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x2402000a
  .word 0xae020000
  .word 0x100000a5
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x1443009f
  .word 0x00000000
  .word 0x2402000b
  .word 0xae020000
  .word 0x1000009b
  .word 0x00000000
  .word 0x8e020014
  .word 0x00021080
  .word 0x00501021
  .word 0x8c420018
  .word 0x24450005
  .word 0x0220202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x2402000c
  .word 0xae020000
  .word 0x1000008d
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430087
  .word 0x00000000
  .word 0x8e020014
  .word 0x00021080
  .word 0x00501021
  .word 0x8c520018
  .word 0x0240202d
  .word 0x0c05c6b0
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x18400005
  .word 0x00000000
  .word 0x24020013
  .word 0xae020000
  .word 0x10000078
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c05c5f0
  .word 0x00000000
  .word 0x24030001
  .word 0x10430007
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c05c858
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x24020013
  .word 0xae020000
  .word 0x10000068
  .word 0x00000000
  .word 0x2402000d
  .word 0xae020000
  .word 0x10000064
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050001
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x2402000e
  .word 0xae020000
  .word 0x1000005a
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430054
  .word 0x00000000
  .word 0x2402000f
  .word 0xae020000
  .word 0x10000050
  .word 0x00000000
  .word 0x8e020014
  .word 0x00021080
  .word 0x00501021
  .word 0x8c450018
  .word 0x24060002
  .word 0x9607000c
  .word 0x0c0e8824
  .word 0x00000000
  .word 0xae020090
  .word 0x24020010
  .word 0xae020000
  .word 0x10000043
  .word 0x00000000
  .word 0x8e040090
  .word 0x0c065518
  .word 0x00000000
  .word 0x1440003e
  .word 0x00000000
  .word 0x8e020014
  .word 0x00021080
  .word 0x00501021
  .word 0x8c440018
  .word 0x24050001
  .word 0x0c05c710
  .word 0x00000000
  .word 0x24020013
  .word 0xae020000
  .word 0x10000033
  .word 0x00000000
  .word 0x24020014
  .word 0xae020000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x9604000c
  .word 0x0000282d
  .word 0x24060015
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x9604000c
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0xae000004
  .word 0x2402001e
  .word 0xae020008
  .word 0x10000018
  .word 0x00000000
  .word 0x8e030008
  .word 0x8e020004
  .word 0x0043082a
  .word 0x14200004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x24420001
  .word 0xae020004
  .word 0x0000102d
  .word 0x1040000b
  .word 0x00000000
  .word 0x8e020014
  .word 0x24420001
  .word 0xae020014
  .word 0x24020006
  .word 0xae020000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0e7d04
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#define FUN_003c1d20(...) FUN_003c1d20(__VA_ARGS__)
#undef FUN_003c22f0
// FUN_003C22F0


void FUN_003c22f0(int param_1)



{

  int iVar1;


  

  iVar1 = *(int *)(param_1 + 0x3c);

  if (*(int *)(iVar1 + 0xb4) != 0) {

    FUN_00100ec0(*(u32 *)(iVar1 + 0xb4));

    *(u32 *)(iVar1 + 0xb4) = 0;

  }

  FUN_0039ee80(iVar1 + 0x94);

  (*(void (**)(...))0x0096017c)(iVar1);

  return;

}
#define FUN_003c22f0(...) FUN_003c22f0(__VA_ARGS__)
#undef FUN_003c2350
// FUN_003C2350


void FUN_003c2350(u64 param_1,u16 param_2)



{

  u32 uVar1;

  

  uVar1 = (*DAT_00960178_abs)(0xb8,0x40000);

  FUN_00521408(uVar1,0,0xb8);

  *(u16 *)((int)uVar1 + 0xc) = param_2;

  FUN_00194b20_typed(param_1,(const char *)DAT_006a3308,0x10,
                     (void *(*)(void *))FUN_003c1d20,
                     (void (*)(void *))FUN_003c22f0,uVar1);

  return;
}
#define FUN_003c2350(...) FUN_003c2350(__VA_ARGS__)
#undef FUN_003c23f0
// FUN_003C23F0

asm u32 FUN_003c23f0(u32 param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x00c0982d
  .word 0x0c0ef61c
  .word 0x00000000
  .word 0x8c510628
  .word 0x0c0ef61c
  .word 0x00000000
  .word 0x8c50062c
  .word 0x0000902d
  .word 0x1000003e
  .word 0x00000000
  .word 0x00121080
  .word 0x00521021
  .word 0x02221821
  .word 0x90620000
  .word 0x16a20037
  .word 0x00000000
  .word 0x90680003
  .word 0x240200ff
  .word 0x1502000f
  .word 0x00000000
  .word 0x90660001
  .word 0x10c2000c
  .word 0x00000000
  .word 0x90670002
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0c0efc80
  .word 0x00000000
  .word 0x24030001
  .word 0x14430028
  .word 0x00000000
  .word 0x0060102d
  .word 0x1000002a
  .word 0x00000000
  .word 0x240200ff
  .word 0x15020012
  .word 0x00000000
  .word 0x90660001
  .word 0x14c2000f
  .word 0x00000000
  .word 0x00121080
  .word 0x00521021
  .word 0x02221021
  .word 0x90470002
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0c0efc80
  .word 0x00000000
  .word 0x24030001
  .word 0x14430014
  .word 0x00000000
  .word 0x0060102d
  .word 0x10000016
  .word 0x00000000
  .word 0x00121080
  .word 0x00521021
  .word 0x02221021
  .word 0x90460001
  .word 0x90470002
  .word 0x90490004
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0c05f948
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x0060102d
  .word 0x10000006
  .word 0x00000000
  .word 0x26520001
  .word 0x0250102a
  .word 0x1440ffc1
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#define FUN_003c23f0(...) FUN_003c23f0(__VA_ARGS__)
