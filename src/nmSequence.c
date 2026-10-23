#include "temporary.h"
typedef int (*code)(...);
typedef u32 undefined3;
typedef u32 int3;
#define CONCAT13(a,b) ((((u32)(a) & 0xffu) << 24) | ((u32)(b) & 0x00ffffffu))

extern u32 LAB_003c5438;
extern u32 LAB_003c5550;
extern u32 LAB_003c5594;
extern u32 LAB_003c5598;
extern u32 LAB_003c5700;
extern u32 LAB_003c5720;
extern u32 LAB_003c58a0;
extern u32 LAB_003c58b0;
extern u32 LAB_003c58c0;
#pragma alias LAB_003c58a0_abs LAB_003c58a0
extern u8 LAB_003c58a0_abs[];
#pragma alias LAB_003c58b0_abs LAB_003c58b0
extern u8 LAB_003c58b0_abs[];
#pragma alias LAB_003c58c0_abs LAB_003c58c0
extern u8 LAB_003c58c0_abs[];
#pragma alias LAB_003c58d0_abs LAB_003c58d0
extern u8 LAB_003c58d0_abs[];
#pragma alias LAB_003c58e0_abs LAB_003c58e0
extern u8 LAB_003c58e0_abs[];
extern u32 LAB_003c58d0;
extern u32 LAB_003c58e0;

#ifndef CONCAT44
#define CONCAT44(hi,lo) ((((u64)(hi)) << 32) | (u32)(lo))
#endif

/* Region 0x390000-0x3CFFFF recovered prototypes */
u32  FUN_003c5240(u32 param_1,u32 param_2,u32 param_3,u16 param_4,u16 param_5);
void FUN_003c53e0(u32 *param_1,u32 param_2);
#pragma alias FUN_003c53e0_3 FUN_003c53e0
extern void FUN_003c53e0_3(u32 *param_1,u32 param_2,u32 param_3);
#pragma alias FUN_003c5840_direct FUN_003c5840
extern void FUN_003c5840_direct(u32 param_1,u32 param_2);
#pragma alias FUN_003c5870_direct FUN_003c5870
extern void FUN_003c5870_direct(u32 param_1,int param_2);
u32 FUN_003c5460(int param_1);
u32 FUN_003c5470(int param_1);
int FUN_003c5480(int param_1);
u32 FUN_003c5490(u32 param_1);
u64 FUN_003c5760(u32 param_1);
u64 FUN_003c57e0(u64 param_1,int param_2);
u64 FUN_003c5810(u64 param_1,int param_2);
void FUN_003c5840(u64 param_1,int param_2);
u64 FUN_003c5870(u64 param_1,int param_2);
u32 FUN_003c58f0(u32 param_1,u32 param_2,u32 param_3,u32 param_4);
void FUN_003c5a20(void);
u32 FUN_003c5a40(u32 param_1,u32 param_2,u32 param_3,u32 param_4);
void FUN_003c5af0(u32 param_1);
void FUN_003c5bb0(u32 param_1);
u32 FUN_003c5c50(u32 param_1);
void FUN_003c5d40(u32 param_1,int param_2,int param_3);
u32 FUN_003c60c0(int param_1,int param_2);
u64 FUN_003c60f0(int param_1);
u32 FUN_003c6120(int param_1,int param_2);
#pragma alias FUN_003c4c80_nm_typed FUN_003c4c80
extern u32 FUN_003c4c80_nm_typed(int *param_1, int *param_2);

/* Region call-cast macros */
#define FUN_003c5240(...) FUN_003c5240(__VA_ARGS__)
#define FUN_003c53e0(...) FUN_003c53e0(__VA_ARGS__)
#define FUN_003c5460(...) FUN_003c5460(__VA_ARGS__)
#define FUN_003c5470(...) FUN_003c5470(__VA_ARGS__)
#define FUN_003c5480(...) FUN_003c5480(__VA_ARGS__)
#define FUN_003c5490(...) FUN_003c5490(__VA_ARGS__)
#define FUN_003c5760(...) FUN_003c5760(__VA_ARGS__)
#define FUN_003c57e0(...) FUN_003c57e0(__VA_ARGS__)
#define FUN_003c5810(...) FUN_003c5810(__VA_ARGS__)
#define FUN_003c5840(...) FUN_003c5840(__VA_ARGS__)
#define FUN_003c5870(...) FUN_003c5870(__VA_ARGS__)
#define FUN_003c58f0(...) FUN_003c58f0(__VA_ARGS__)
#define FUN_003c5a20(...) FUN_003c5a20(__VA_ARGS__)
#define FUN_003c5a40(...) FUN_003c5a40(__VA_ARGS__)
#define FUN_003c5af0(...) FUN_003c5af0(__VA_ARGS__)
#define FUN_003c5bb0(...) FUN_003c5bb0(__VA_ARGS__)
#define FUN_003c5c50(...) FUN_003c5c50(__VA_ARGS__)
#define FUN_003c5d40(...) FUN_003c5d40(__VA_ARGS__)

#undef FUN_003c5240
#undef FUN_003c53e0
// FUN_003C5240


u32

FUN_003c5240(u32 param_1,u32 param_2,u32 param_3,u16 param_4,u16 param_5)



{

  int iVar1;

  u32 *puVar2;

  u32 uVar3;

  u32 uVar4;

  u32 *puVar5;

  

  if (param_1 == 0) {

    FUN_0019d3f0("nmSequence.c",0x86);

  }

  if (param_3 == 0) {

    FUN_0019d3f0("nmSequence.c",0x87);

  }

  puVar5 = (u32 *)param_3;

  if ((int)puVar5 + 0x14 == 0) {

    FUN_0019d3f0("nmSequence.c",0x88);

  }

  iVar1 = *(int *)((int)param_1 + 0x24);

  if (param_2 == 0) {

    FUN_0019d3f0("nmSequence.c",0x8c);

  }

  uVar4 = FUN_003c4650(param_1,param_2,puVar5[4] + 0x30);

  puVar2 = (u32 *)((u32 *)uVar4)[5];

  uVar3 = FUN_003c4f80(puVar5 + 5);

  *puVar2 = uVar3;

  FUN_00521250(puVar2 + 1,puVar5 + 5,0x10);

  puVar2[5] = puVar2[5] | 4;

  puVar2[6] = *puVar5;

  puVar2[7] = puVar5[1];

  puVar2[8] = puVar5[2];

  puVar2[9] = puVar5[3];

  *(u16 *)(puVar2 + 0xb) = param_4;

  *(u16 *)((int)puVar2 + 0x2e) = param_5;

  if (puVar5[4] != 0) {

    puVar2[10] = (u32)(puVar2 + 0xc);

  }

  FUN_003c53e0_3((u32 *)(iVar1 + 0x10),*(u32 *)uVar4,uVar4);

  (*(code *)((int)param_1 + 0x14))(param_1,uVar4);

  return uVar4;

}
#define FUN_003c5240(...) FUN_003c5240(__VA_ARGS__)
#undef FUN_003c53e0
// FUN_003C53E0


void FUN_003c53e0(u32 *param_1,u32 param_2)

{
  u32 *puVar1;

  puVar1 = (u32 *)*param_1;
  while (puVar1 != (u32 *)0x0) {
    if (param_2 < *puVar1) {
      puVar1 = (u32 *)puVar1[3];
      goto found;
    }
    puVar1 = (u32 *)puVar1[4];
    if (puVar1 == (u32 *)0x0) {
      FUN_003c4710(param_1,param_1[1]);
      return;
    }
  }
found:
  FUN_003c4710(param_1,(u32)puVar1);
}

#define FUN_003c53e0(...) FUN_003c53e0(__VA_ARGS__)
#undef FUN_003c5460
// FUN_003C5460


u32 FUN_003c5460(int param_1)



{

  return *(u32 *)(*(int *)(param_1 + 0x24) + 0xc);

}
#define FUN_003c5460(...) FUN_003c5460(__VA_ARGS__)
#undef FUN_003c5470
// FUN_003C5470


u32 FUN_003c5470(int param_1)



{

  return *(u32 *)(*(int *)(param_1 + 0x14) + 0x28);

}
#define FUN_003c5470(...) FUN_003c5470(__VA_ARGS__)
#undef FUN_003c5480
// FUN_003C5480


int FUN_003c5480(int param_1)



{

  return *(int *)(param_1 + 0x14) + 0x28;

}
#define FUN_003c5480(...) FUN_003c5480(__VA_ARGS__)
#undef FUN_003c5490
// FUN_003C5490


asm u32 FUN_003c5490(u32 param_1)
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
  .word 0x0080802d
  .word 0x16000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000009a
  .word 0x00000000
  .word 0x8e130024
  .word 0x8e660020
  .word 0x10000011
  .word 0x00000000
  .word 0x8cc40014
  .word 0x9483002e
  .word 0x10600005
  .word 0x00000000
  .word 0x2462ffff
  .word 0xa482002e
  .word 0x14600008
  .word 0x00000000
  .word 0x0200202d
  .word 0x26650020
  .word 0x0c0f1278
  .word 0x00000000
  .word 0x0040302d
  .word 0x10400002
  .word 0x00000000
  .word 0x8cc60010
  .word 0x14c0ffef
  .word 0x00000000
  .word 0x8e120024
  .word 0x8e550010
  .word 0x1000001b
  .word 0x00000000
  .word 0x8eb10014
  .word 0x9623002c
  .word 0x10600005
  .word 0x00000000
  .word 0x2462ffff
  .word 0xa622002c
  .word 0x14600012
  .word 0x00000000
  .word 0x26440010
  .word 0x02a0282d
  .word 0x0c0f1208
  .word 0x00000000
  .word 0x0040a02d
  .word 0x8ea50000
  .word 0x26040004
  .word 0x02a0302d
  .word 0x0c0f14f8
  .word 0x00000000
  .word 0x8e230014
  .word 0x2402fffb
  .word 0x00621024
  .word 0xae220014
  .word 0x0280a82d
  .word 0x12800002
  .word 0x00000000
  .word 0x8eb50010
  .word 0x16a0ffe5
  .word 0x00000000
  .word 0x8e630000
  .word 0x30620001
  .word 0x10400013
  .word 0x00000000
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae620000
  .word 0x0200202d
  .word 0x26650010
  .word 0x0c0f12a4
  .word 0x00000000
  .word 0x0200202d
  .word 0x26650020
  .word 0x0c0f12a4
  .word 0x00000000
  .word 0x0200202d
  .word 0x26050004
  .word 0x0c0f12a4
  .word 0x00000000
  .word 0x24020001
  .word 0x1000004e
  .word 0x00000000
  .word 0x0200202d
  .word 0x8e620008
  .word 0x0040f809
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e620000
  .word 0x34420001
  .word 0xae620000
  .word 0x8e120004
  .word 0x1000003f
  .word 0x00000000
  .word 0xae12000c
  .word 0x8e510014
  .word 0x0200202d
  .word 0x0240282d
  .word 0x0c0f1610
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x8e230014
  .word 0x30630001
  .word 0x10600032
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x0200202d
  .word 0x0240282d
  .word 0x0040f809
  .word 0x00000000
  .word 0x1440fff9
  .word 0x00000000
  .word 0x8e230014
  .word 0x2402fffb
  .word 0x00621024
  .word 0xae220014
  .word 0x34420008
  .word 0xae220014
  .word 0x8e510010
  .word 0x26040004
  .word 0x0240282d
  .word 0x0c0f1208
  .word 0x00000000
  .word 0x8e430000
  .word 0x8e650020
  .word 0x10000012
  .word 0x00000000
  .word 0x8ca20000
  .word 0x0062082b
  .word 0x10200004
  .word 0x00000000
  .word 0x8ca5000c
  .word 0x1000000d
  .word 0x00000000
  .word 0x8ca50010
  .word 0x14a00008
  .word 0x00000000
  .word 0x26640020
  .word 0x8e650024
  .word 0x0240302d
  .word 0x0c0f11c4
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x14a0ffee
  .word 0x00000000
  .word 0x26640020
  .word 0x0240302d
  .word 0x0c0f11c4
  .word 0x00000000
  .word 0x0220902d
  .word 0x10000002
  .word 0x00000000
  .word 0x8e520010
  .word 0x1640ffc1
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
  .word 0x00000000
  .word 0x00000000
}
#define FUN_003c5490(...) FUN_003c5490(__VA_ARGS__)
#undef FUN_003c5760
// FUN_003C5760


u64 FUN_003c5760(u32 param_1)



{

  int iVar1;

  

  if (param_1 == 0) {

    FUN_0019d3f0("nmSequence.c",0x1ce);

  }

  for (iVar1 = *(int *)((int)param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {

    FUN_003c5870_direct(param_1,iVar1);

  }

  return 0;

}
#define FUN_003c5760(...) FUN_003c5760(__VA_ARGS__)
#undef FUN_003c57e0
// FUN_003C57E0


u64 FUN_003c57e0(u64 param_1,int param_2)



{

  (*(code *)(*(int *)(param_2 + 0x14) + 0x18))();

  return 0;

}
#define FUN_003c57e0(...) FUN_003c57e0(__VA_ARGS__)
#undef FUN_003c5810
// FUN_003C5810


u64 FUN_003c5810(u64 param_1,int param_2)



{

  (*(code *)(*(int *)(param_2 + 0x14) + 0x1c))();

  return 0;

}
#define FUN_003c5810(...) FUN_003c5810(__VA_ARGS__)
#undef FUN_003c5840
// FUN_003C5840


void FUN_003c5840(u64 param_1,int param_2)



{

  (*(code *)(*(int *)(param_2 + 0x14) + 0x20))();

  return;

}
#define FUN_003c5840(...) FUN_003c5840(__VA_ARGS__)
#undef FUN_003c5870
// FUN_003C5870


u64 FUN_003c5870(u64 param_1,int param_2)



{

  (*(code *)(*(int *)(param_2 + 0x14) + 0x24))();

  return 0;

}
// FUN_003C58A0
void FUN_003c58a0(void)
{
  return;
}
// FUN_003C58B0
void FUN_003c58b0(void)
{
  return;
}
// FUN_003C58C0
void FUN_003c58c0(void)
{
  return;
}
// FUN_003C58D0
void FUN_003c58d0(void)
{
  return;
}
// FUN_003C58E0
void FUN_003c58e0(void)
{
  return;
}
#define FUN_003c5870(...) FUN_003c5870(__VA_ARGS__)
#undef FUN_003c58f0
// FUN_003C58F0


u32 FUN_003c58f0(u32 param_1,u32 param_2,u32 param_3,u32 param_4)



{

  u32 uVar3;

  u32 *puVar1;


  

  uVar3 = FUN_003c44d0(param_2 + 0x48,FUN_003c60c0,FUN_003c60f0,FUN_003c6120);

  puVar1 = *(u32 **)((int)uVar3 + 0x24);

  if (param_2 != 0) {

    puVar1[0x11] = (u32)(puVar1 + 0x12);

  }

  puVar1[3] = param_4;

  *(u16 *)((int)puVar1 + 6) = 5;

  *(u16 *)(puVar1 + 2) = 5;

  puVar1[8] = param_3;

  puVar1[0xc] = (u32)LAB_003c58c0_abs;

  puVar1[0xd] = (u32)LAB_003c58d0_abs;

  puVar1[0xe] = (u32)LAB_003c58a0_abs;

  puVar1[0xf] = (u32)LAB_003c58b0_abs;

  puVar1[0x10] = (u32)LAB_003c58e0_abs;

  *(u16 *)((int)puVar1 + 10) = 0;

  *puVar1 = *puVar1 | 8;

  *puVar1 = *puVar1 | 0x1000;

  if ((param_1 & 1) != 0) {

    FUN_003c6ee0(uVar3);

    *puVar1 = *puVar1 | 0x200;

  }

  return uVar3;

}
#define FUN_003c58f0(...) FUN_003c58f0(__VA_ARGS__)
#undef FUN_003c5a20
// FUN_003C5A20


void FUN_003c5a20(void)



{

  FUN_003c45f0();

  return;

}
#define FUN_003c5a20(...) FUN_003c5a20(__VA_ARGS__)
#undef FUN_003c5a40
// FUN_003C5A40


u32 FUN_003c5a40(u32 param_1,u32 param_2,u32 param_3,u32 param_4)



{

  u32 uVar1;

  int iVar2;

  int iVar3;

  

  iVar2 = (int)param_3;

  iVar3 = iVar2 + 0x20;

  if (param_4 != 0) {

    iVar3 = iVar3 + 0x20;

  }

  uVar1 = FUN_003c4910(param_1,param_2,iVar3);

  iVar3 = *(int *)((int)uVar1 + 0x14);

  if (param_3 != 0) {

    *(int *)(iVar3 + 0x1c) = iVar3 + 0x20;

  }

  if (param_4 != 0) {

    iVar2 = iVar2 + iVar3 + 0x20;

    *(int *)(iVar3 + 8) = iVar2;

    FUN_00524270(iVar2,param_4);

  }

  *(u32 *)(*(int *)((int)param_1 + 0x24) + 0x2c) = *(u32 *)((int)param_1 + 4);

  return uVar1;

}
#define FUN_003c5a40(...) FUN_003c5a40(__VA_ARGS__)
#undef FUN_003c5af0
// FUN_003C5AF0


asm void FUN_003c5af0(u32 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c900024
  .word 0x26250004
  .word 0x0c0f1348
  .word 0x00000000
  .word 0x1040001f
  .word 0x00000000
  .word 0x8e05002c
  .word 0x8ca30014
  .word 0x8c64000c
  .word 0x8c430014
  .word 0x8c63000c
  .word 0x0083082a
  .word 0x14200007
  .word 0x00000000
  .word 0x8ca3000c
  .word 0x10600014
  .word 0x00000000
  .word 0xae03002c
  .word 0x10000011
  .word 0x00000000
  .word 0x8e230008
  .word 0x1443000e
  .word 0x00000000
  .word 0x8e030020
  .word 0x2464ffff
  .word 0x10000006
  .word 0x00000000
  .word 0x8c43000c
  .word 0x10600006
  .word 0x00000000
  .word 0x0060102d
  .word 0x2484ffff
  .word 0x00000000
  .word 0x1c80fff9
  .word 0x00000000
  .word 0xae02002c
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#define FUN_003c5af0(...) FUN_003c5af0(__VA_ARGS__)
#undef FUN_003c5bb0
// FUN_003C5BB0


void FUN_003c5bb0(u32 param_1)
{
  u32 *puVar1;
  int iVar2;
  int iVar3;
  u32 uVar4;

  puVar1 = *(u32 **)(param_1 + 0x24);
  iVar3 = (int)param_1;
  iVar2 = FUN_003c4c80(param_1,iVar3 + 4);
  if (iVar2 != 0) {
    uVar4 = (puVar1[8] + *(int *)(*(int *)(puVar1[0xb] + 0x14) + 0xc)) - 1;
    if (*(u32 *)(*(int *)(iVar2 + 0x14) + 0xc) >= uVar4) {
      if (uVar4 != *(u16 *)(iVar3 + 0x10)) {
        puVar1[0xb] = *(u32 *)(puVar1[0xb] + 0x10);
      }
    }
    else if (iVar2 == *(int *)(iVar3 + 4)) {
      puVar1[0xb] = iVar2;
    }
  }
  return;
}
#define FUN_003c5bb0(...) FUN_003c5bb0(__VA_ARGS__)
#undef FUN_003c5c50
// FUN_003C5C50


u32 FUN_003c5c50(u32 param_1)



{

  int iVar1;

  int iVar2;

  u32 uVar7;

  int iVar4;

  int iVar5;

  int iVar6;
  int iVar7;
  int iVar8;

  int iVar3;

  

  uVar7 = 0;

  iVar4 = (int)param_1;

  iVar1 = *(int *)(iVar4 + 0x24);

  iVar2 = *(int *)(iVar1 + 0x20);

  iVar6 = *(int *)(iVar1 + 0x2c);
  iVar7 = FUN_003c6f80();
  iVar5 = 0;
  iVar8 = iVar7 - 1;
  while (iVar5 < iVar8) {
    if (iVar6 == 0) {
      return 0;
    }
    iVar6 = *(int *)(iVar6 + 0x10);
    iVar5 = iVar5 + 1;
  }

  iVar3 = 0;
  while (iVar3 < iVar2) {
    if (iVar6 == *(int *)(iVar4 + 8)) {
      break;
    }
    iVar6 = *(int *)(iVar6 + 0x10);
    *(u32 *)(iVar1 + 0x2c) = *(u32 *)(*(int *)(iVar1 + 0x2c) + 0x10);
    uVar7 = FUN_003c4c80_nm_typed((int *)param_1,((int *)param_1) + 1);
    iVar3 = iVar3 + 1;
  }

  return uVar7;

}
#define FUN_003c5c50(...) FUN_003c5c50(__VA_ARGS__)
#undef FUN_003c5d40
// FUN_003C5D40


asm void FUN_003c5d40(u32 param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x00c0982d
  .word 0x8c900024
  .word 0x0c0f1be0
  .word 0x00000000
  .word 0x0220302d
  .word 0x12200022
  .word 0x00000000
  .word 0x0000282d
  .word 0x00531823
  .word 0x2464ffff
  .word 0x10000006
  .word 0x00000000
  .word 0x8cc30010
  .word 0x10600006
  .word 0x00000000
  .word 0x0060302d
  .word 0x24a50001
  .word 0x00a4182a
  .word 0x1460fff9
  .word 0x00000000
  .word 0x2443ffff
  .word 0x10000003
  .word 0x00000000
  .word 0x2463ffff
  .word 0x8cc6000c
  .word 0x0006102b
  .word 0x38420001
  .word 0x14400003
  .word 0x00000000
  .word 0x1460fff9
  .word 0x00000000
  .word 0x14c00002
  .word 0x00000000
  .word 0x8e460004
  .word 0xae06002c
  .word 0x0240202d
  .word 0x26450004
  .word 0x0220302d
  .word 0x0c0f1378
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}
#define FUN_003c5d40(...) FUN_003c5d40(__VA_ARGS__)
