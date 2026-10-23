#include "temporary.h"
typedef int (*code)(); /* PC: unnamed varargs */
typedef u32 undefined3;
typedef u32 int3;
#define CONCAT13(a,b) ((((u32)(a) & 0xffu) << 24) | ((u32)(b) & 0x00ffffffu))

extern u32 DAT_006a1850;
extern u8 DAT_006a0000[];
extern u32 DAT_006a1870;
extern u8 DAT_006a1940[];
extern u8 DAT_006a1960[];
extern u8 DAT_006a1980[];
extern u8 DAT_006a19a0[];
extern u8 DAT_006a19c0[];
extern u8 DAT_006a19e0[];
extern u8 DAT_006a1a00[];
extern u8 DAT_006a1a20[];
extern u8 DAT_006a1a40[];
extern f32 DAT_007cae58;
extern f32 DAT_007caf30;
extern u32 DAT_007cd490;
extern u32 DAT_007cd494;
extern u32 DAT_007cd498;
extern u32 DAT_007cd4a0;
extern f32 DAT_007ce61c;
extern code DAT_00960178;
#pragma alias DAT_00960178_abs DAT_00960178
extern code DAT_00960178_abs[];
extern code DAT_0096017c;
#pragma alias DAT_0096017c_abs DAT_0096017c
extern code DAT_0096017c_abs[];
extern u32 gp0xffffa7b8;
extern u8 *FUN_003c3f40(u32 param_1);
extern s8 FUN_0016df30(s16 param_1);
extern int FUN_0030bbb0(u8 param_1);
extern u8 *FUN_003c4390(int param_1);
extern u32 FUN_0010c3a0(u32 param_1,int *param_2,int param_3);
#pragma alias FUN_0039f2a0_narg FUN_0039f2a0
extern void FUN_0039f2a0_narg(void);
#pragma alias FUN_0039f350_narg FUN_0039f350
extern void FUN_0039f350_narg(void);
#pragma alias FUN_003a25f0_typed FUN_003a25f0
extern void FUN_003a25f0_typed(s32, u8);
#pragma alias FUN_003a2a30_typed FUN_003a2a30
extern void FUN_003a2a30_typed(s32);
#pragma alias FUN_003a3420_typed FUN_003a3420
extern void FUN_003a3420_typed(s32, s32);
#pragma alias FUN_003a3e90_typed FUN_003a3e90
extern void FUN_003a3e90_typed(s32, u32);
extern u8 *FUN_003c3f80(int param_1);
extern u8 *FUN_0013bcb0(u64 param_1, u64 param_2);
extern void FUN_003189f0(u32 param_1, int param_2, float param_3);
#pragma alias FUN_003189f0_f32_evtmsg FUN_003189f0
extern void FUN_003189f0_f32_evtmsg(float param_1, u32 param_2, float param_3);
#pragma alias FUN_0019d3f0_ptr FUN_0019d3f0
extern void FUN_0019d3f0_ptr(void *param_1, int param_2);
extern s8 FUN_0016dba0(s16 param_1);
extern u32 FUN_003a51a0(int param_1);
#pragma alias FUN_00530da0_evtmsg FUN_00530da0
extern u32 FUN_00530da0_evtmsg(f32);
#pragma alias FUN_003a4010_evt FUN_003a4010
extern void FUN_003a4010_evt(int param_1, int param_2, s8 param_3, int param_4);
extern u32 FUN_003a5120(int param_1, int param_2);
extern void FUN_004d0f00(int param_1);
extern void FUN_003b7090(u16 param_1);
extern void FUN_00100ec0(int param_1);
extern void FUN_00133d30(int param_1,int param_2);
#pragma alias FUN_001021c0_evtmsg_typed FUN_001021c0
extern u32 FUN_001021c0_evtmsg_typed(u8 *param_1, u8 *param_2);
#pragma alias FUN_00195460_evtmsg_typed FUN_00195460
extern s32 FUN_00195460_evtmsg_typed(u32 param_1);
#pragma alias FUN_00194b20_evtmsg_typed FUN_00194b20
extern u32 FUN_00194b20_evtmsg_typed(u64 param_1, const char *param_2, u32 param_3,
                                      u64 (*param_4)(int), void *param_5, void *param_6);
extern u32 FUN_001021c0();
extern int FUN_00195460();
extern int FUN_00194b20();

extern void FUN_003877c0(float param_1, float param_2, float *param_3, float *param_4,
                         u32 param_5, u8 *param_6);
extern void FUN_00388000(float z, float alpha, float *pos, float *size,
                         float *uv0, float *uv1, u32 *texturePtr,
                         RwRGBA *color, u32 flags);
#ifndef CONCAT44
#define CONCAT44(hi,lo) ((((u64)(hi)) << 32) | (u32)(lo))
#endif

/* Region 0x390000-0x3CFFFF recovered prototypes */
int FUN_0039ec70(int *param_1,u64 param_2);
int FUN_0039ed20(int *param_1,u64 param_2);
int FUN_0039edd0(int *param_1,u64 param_2);
void FUN_0039ee80(int *param_1);
#pragma alias FUN_0039ee80_typed FUN_0039ee80
extern void FUN_0039ee80_typed(int *param_1);
u8 FUN_0039eee0(int *param_1);
void FUN_0039eef0(int *param_1,u64 param_2,u64 param_3);
void FUN_0039ef30(int *param_1);
void FUN_0039ef70(int *param_1,u64 param_2,int param_3);
void FUN_0039efd0(int *param_1,u64 param_2,u16 param_3);
void FUN_0039f050(int *param_1,int param_2,u16 param_3);
void FUN_0039f0c0(int *param_1,u64 param_2,u8 param_3);
void FUN_0039f120(int *param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_0039f190(int *param_1,u64 param_2,u16 param_3);
#pragma alias FUN_0039ec70_call FUN_0039ec70
extern int FUN_0039ec70_call(int *param_1, u32 param_2);
#pragma alias FUN_0039ed20_call FUN_0039ed20
extern int FUN_0039ed20_call(int *param_1, u32 param_2);
#pragma alias FUN_0039eef0_call FUN_0039eef0
extern void FUN_0039eef0_call(int *param_1, int param_2, int param_3);
#pragma alias FUN_0039ef70_call FUN_0039ef70
extern void FUN_0039ef70_call(int *param_1, int param_2, int param_3);
#pragma alias FUN_0039efd0_call FUN_0039efd0
extern void FUN_0039efd0_call(int *param_1, int param_2, int param_3);
#pragma alias FUN_0039f120_call FUN_0039f120
extern void FUN_0039f120_call(int *param_1, int param_2, int param_3, int param_4);
#pragma alias FUN_0039f190_call FUN_0039f190
extern void FUN_0039f190_call(int *param_1, int param_2, int param_3);
#pragma alias FUN_0039f950_call FUN_0039f950
extern void FUN_0039f950_call(int param_1);
void FUN_0039f210(int *param_1,int param_2,int param_3,int param_4);
void FUN_0039f2a0(int *param_1);
void FUN_0039f350(int *param_1);
void FUN_0039f410(int *param_1);
u8 FUN_0039f6e0(int *param_1);
#pragma alias FUN_0039f210_call FUN_0039f210
extern void FUN_0039f210_call(int *param_1, int param_2, int param_3, int param_4);
#pragma alias FUN_0039f6e0_call FUN_0039f6e0
extern int FUN_0039f6e0_call(int *param_1);
u32 FUN_0039f710(int *param_1);
void FUN_0039f750(int *param_1,int param_2);
void FUN_0039f7c0(int *param_1);
int FUN_0039f800(int *param_1);
u8 FUN_0039f850(int param_1);
u64 FUN_003a0220(int param_1);
void FUN_0039fb10(void);
void FUN_0039fbd0(int param_1);
void FUN_0039ffc0(int param_1,float *param_2,int param_3,u32 param_4);
#pragma alias FUN_0039fbd0_call FUN_0039fbd0
extern void FUN_0039fbd0_call(int param_1);
#pragma alias FUN_0039ffc0_call FUN_0039ffc0
extern void FUN_0039ffc0_call(int param_1, float *param_2, int param_3, u32 param_4);
u32 FUN_003a1c00(int param_1);
void FUN_003a05b0(int param_1,int param_2);
void FUN_003a0960(int param_1,int param_2,u64 param_3);
u32 FUN_003a0b50(int param_1);
u32 FUN_003a0e90(int param_1);
#pragma alias FUN_0039f410_call FUN_0039f410
extern void FUN_0039f410_call(int *param_1);
#pragma alias FUN_0039f850_call FUN_0039f850
extern int FUN_0039f850_call(int param_1);
#pragma alias FUN_0039fb10_call FUN_0039fb10
extern void FUN_0039fb10_call(void);
#pragma alias FUN_003a05b0_call FUN_003a05b0
extern void FUN_003a05b0_call(int param_1, int param_2);
#pragma alias FUN_003a0960_call FUN_003a0960
extern void FUN_003a0960_call(int param_1, int param_2, int param_3);
#pragma alias FUN_003a0b50_call FUN_003a0b50
extern int FUN_003a0b50_call(int param_1);
void FUN_003a1f30(int param_1);
void FUN_003a2090(u64 param_1,u16 param_2,u32 param_3,u16 param_4);

/* Region call-cast macros */
#define FUN_0039ec70(...) FUN_0039ec70(__VA_ARGS__)
#define FUN_0039ed20(...) FUN_0039ed20(__VA_ARGS__)
#define FUN_0039edd0(...) FUN_0039edd0(__VA_ARGS__)
#define FUN_0039ee80(...) FUN_0039ee80(__VA_ARGS__)
#define FUN_0039eee0(...) FUN_0039eee0(__VA_ARGS__)
#define FUN_0039eef0(...) FUN_0039eef0(__VA_ARGS__)
#define FUN_0039ef30(...) FUN_0039ef30(__VA_ARGS__)
#define FUN_0039ef70(...) FUN_0039ef70(__VA_ARGS__)
#define FUN_0039efd0(...) FUN_0039efd0(__VA_ARGS__)
#define FUN_0039f050(...) FUN_0039f050(__VA_ARGS__)
#define FUN_0039f0c0(...) FUN_0039f0c0(__VA_ARGS__)
#define FUN_0039f120(...) FUN_0039f120(__VA_ARGS__)
#define FUN_0039f190(...) FUN_0039f190(__VA_ARGS__)
#define FUN_0039f210(...) FUN_0039f210(__VA_ARGS__)
#define FUN_0039f2a0(...) FUN_0039f2a0(__VA_ARGS__)
#define FUN_0039f350(...) FUN_0039f350(__VA_ARGS__)
#define FUN_0039f410(...) FUN_0039f410(__VA_ARGS__)
#define FUN_0039f6e0(...) FUN_0039f6e0(__VA_ARGS__)
#define FUN_0039f710(...) FUN_0039f710(__VA_ARGS__)
#define FUN_0039f750(...) FUN_0039f750(__VA_ARGS__)
#define FUN_0039f7c0(...) FUN_0039f7c0(__VA_ARGS__)
#define FUN_0039f800(...) FUN_0039f800(__VA_ARGS__)
#define FUN_0039f850(...) FUN_0039f850(__VA_ARGS__)
#define FUN_0039f950(...) FUN_0039f950(__VA_ARGS__)
#define FUN_0039fb10(...) FUN_0039fb10(__VA_ARGS__)
#define FUN_0039fbd0(...) FUN_0039fbd0(__VA_ARGS__)
#define FUN_0039ffc0(...) FUN_0039ffc0(__VA_ARGS__)
#define FUN_003a0220(...) FUN_003a0220(__VA_ARGS__)
#define FUN_003a05b0(...) FUN_003a05b0(__VA_ARGS__)
#define FUN_003a0960(...) FUN_003a0960(__VA_ARGS__)
#define FUN_003a0b50(...) FUN_003a0b50(__VA_ARGS__)
#define FUN_003a0e90(...) FUN_003a0e90(__VA_ARGS__)
#define FUN_003a1c00(...) FUN_003a1c00(__VA_ARGS__)
#define FUN_003a1f30(...) FUN_003a1f30(__VA_ARGS__)
#define FUN_003a2090(...) FUN_003a2090(__VA_ARGS__)

#undef FUN_0039ec70
// FUN_0039EC70


int FUN_0039ec70(int *param_1,u64 param_2)



{

  int lVar1;

  u32 p;

  

  p = *param_1 != 0;
  if (p == 1) {

    FUN_0019d3f0("mt_evtMessage.c",0x1f);

  }

  param_1[1] = 0;

  lVar1 = FUN_003a2d80(param_2);

  FUN_003a4990(lVar1,4,0);

  param_1[2] = (int)lVar1;

  if (lVar1 < 0) {

    FUN_0019d3f0("mt_evtMessage.c",0x27);

  }

  *param_1 = 1;

  return lVar1;

}
#define FUN_0039ec70(...) FUN_0039ec70(__VA_ARGS__)
#undef FUN_0039ed20
// FUN_0039ED20


int FUN_0039ed20(int *param_1,u64 param_2)



{

  int lVar1;

  u32 p;

  

  p = *param_1 != 0;
  if (p == 1) {

    FUN_0019d3f0("mt_evtMessage.c",0x1f);

  }

  param_1[1] = 1;

  lVar1 = FUN_003a2d80(param_2);

  FUN_003a4990(lVar1,4,0);

  param_1[2] = (int)lVar1;

  if (lVar1 < 0) {

    FUN_0019d3f0("mt_evtMessage.c",0x27);

  }

  *param_1 = 1;

  return lVar1;

}
#define FUN_0039ed20(...) FUN_0039ed20(__VA_ARGS__)
#undef FUN_0039edd0
// FUN_0039EDD0


int FUN_0039edd0(int *param_1,u64 param_2)



{

  int lVar1;

  u32 p;

  

  p = *param_1 != 0;
  if (p == 1) {

    FUN_0019d3f0("mt_evtMessage.c",0x1f);

  }

  param_1[1] = 2;

  lVar1 = FUN_003a2d80(param_2);

  FUN_003a4990(lVar1,4,0);

  param_1[2] = (int)lVar1;

  if (lVar1 < 0) {

    FUN_0019d3f0("mt_evtMessage.c",0x27);

  }

  *param_1 = 1;

  return lVar1;

}
#define FUN_0039edd0(...) FUN_0039edd0(__VA_ARGS__)
#undef FUN_0039ee80


// FUN_0039EE80
void FUN_0039ee80(int *param_1)
{
  int *piVar1;
  u8 bVar1;

  piVar1 = param_1;

  bVar1 = *piVar1 != 0;
  if (bVar1) {
    FUN_0039f350_narg();
    FUN_003a3060(piVar1[2]);
    *piVar1 = 0;
    FUN_00521408(param_1,0,0x20);
  }
  return;
}

#define FUN_0039ee80(...) FUN_0039ee80(__VA_ARGS__)
#undef FUN_0039eee0
// FUN_0039eee0


u8 FUN_0039eee0(int *param_1)



{

  return *param_1 != 0;

}
#define FUN_0039eee0(...) FUN_0039eee0(__VA_ARGS__)
#undef FUN_0039eef0
// FUN_0039EEF0


void FUN_0039eef0(int *param_1,u64 param_2,u64 param_3)



{

  if ((u8)(*param_1 != 0)) {

    FUN_003a4010(param_1[2],param_2,param_3,0);

  }

  return;

}
#define FUN_0039eef0(...) FUN_0039eef0(__VA_ARGS__)
#undef FUN_0039ef30
// FUN_0039EF30


void FUN_0039ef30(int *param_1)



{

  if ((u8)(*param_1 != 0)) {

    FUN_003a4220(param_1[2]);

  }

  return;

}
#define FUN_0039ef30(...) FUN_0039ef30(__VA_ARGS__)
#undef FUN_0039ef70
// FUN_0039EF70


void FUN_0039ef70(int *param_1,u64 param_2,int param_3)



{

  u8 *uVar1;

  

  uVar1 = FUN_003c3f80(param_3);

  if ((u8)(*param_1 != 0) != 0) {

    FUN_003a4220(param_1[2],param_2,uVar1);

  }

  return;

}
#define FUN_0039ef70(...) FUN_0039ef70(__VA_ARGS__)
#undef FUN_0039efd0
// FUN_0039EFD0


void FUN_0039efd0(int *param_1,u64 param_2,u16 param_3)



{

  s8 uVar1;

  u32 uVar2;

  

  uVar1 = FUN_0016df30(param_3);

  uVar2 = FUN_0030bbb0(uVar1);

  if ((u8)(*param_1 != 0)) {

    FUN_003a4220(param_1[2],param_2,uVar2);

  }

  return;

}
#define FUN_0039efd0(...) FUN_0039efd0(__VA_ARGS__)
#undef FUN_0039f050
// FUN_0039F050


void FUN_0039f050(int *param_1,int param_2,u16 param_3)



{

  s8 uVar1;

  

  uVar1 = FUN_0016dba0(param_3);

  if ((u8)(*param_1 != 0)) {

    FUN_003a4010_evt(param_1[2],param_2,uVar1,0);

  }

  return;

}
#define FUN_0039f050(...) FUN_0039f050(__VA_ARGS__)
#undef FUN_0039f0c0
// FUN_0039F0C0


void FUN_0039f0c0(int *param_1,u64 param_2,u8 param_3)



{

  u8 *uVar1;

  

  uVar1 = FUN_003c3f40(param_3);

  if ((u8)(*param_1 != 0) != 0) {

    FUN_003a4220(param_1[2],param_2,uVar1);

  }

  return;

}
#define FUN_0039f0c0(...) FUN_0039f0c0(__VA_ARGS__)
#undef FUN_0039f120
// FUN_0039F120


void FUN_0039f120(int *param_1,u64 param_2,u64 param_3,u64 param_4)



{

  u8 *uVar1;

  

  uVar1 = FUN_0013bcb0(param_3,param_4);

  if ((u8)(*param_1 != 0) != 0) {

    FUN_003a4220(param_1[2],param_2,uVar1);

  }

  return;

}
#define FUN_0039f120(...) FUN_0039f120(__VA_ARGS__)
#undef FUN_0039f190
// FUN_0039F190


void FUN_0039f190(int *param_1,u64 param_2,u16 param_3)



{
  s8 uVar1;
  u8 *uVar2;

  

  uVar1 = FUN_0016df30(param_3);

  uVar2 = FUN_003c4390(uVar1);

  if ((u8)(*param_1 != 0)) {

    FUN_003a4220(param_1[2],param_2,uVar2);

  }

  return;

}
#define FUN_0039f190(...) FUN_0039f190(__VA_ARGS__)
#undef FUN_0039f210
// FUN_0039F210


void FUN_0039f210(int *param_1,int param_2,int param_3,int param_4)



{

  if ((u8)(*param_1 != 0)) {

    if (param_1[3] != 0) {

      FUN_0039f2a0_narg();

    }

    param_1[3] = 1;

    param_1[4] = param_2;

    param_1[5] = param_3;

    param_1[6] = param_4;

    param_1[7] = -1;

  }

  return;

}
#define FUN_0039f210(...) FUN_0039f210(__VA_ARGS__)
#undef FUN_0039f2a0
// FUN_0039F2A0


void FUN_0039f2a0(int *param_1)



{

  int iVar1;

  

  iVar1 = param_1[2];

  if ((u8)(*param_1 != 0)) {
    if (param_1[3] != 0) {
      FUN_003a25f0(iVar1,0);
      FUN_003a2a30(iVar1);
      FUN_003a3420(iVar1,0);
      FUN_003a3e90(iVar1,0x800000);
      FUN_003a3e90(iVar1,0x100000);
      FUN_003a25f0(iVar1,1);
      param_1[3] = 0;
    }
  }

  return;

}
#define FUN_0039f2a0(...) FUN_0039f2a0(__VA_ARGS__)
#undef FUN_0039f350


// FUN_0039F350
void FUN_0039f350(int *param_1)
{
  int iVar1;
  u8 bVar1;

  bVar1 = *param_1 != 0;
  if (bVar1 && (param_1[3] != 0)) {
    iVar1 = param_1[2];
    if (bVar1 && (param_1[3] != 0)) {
      FUN_003a25f0_typed(iVar1,0);
      FUN_003a2a30_typed(iVar1);
      FUN_003a3420_typed(iVar1,0);
      FUN_003a3e90_typed(iVar1,0x800000);
      FUN_003a3e90_typed(iVar1,0x100000);
      FUN_003a25f0_typed(iVar1,1);
      param_1[3] = 0;
    }
  }
  return;
}

#define FUN_0039f350(...) FUN_0039f350(__VA_ARGS__)
#undef FUN_0039f410
// FUN_0039F410


#ifndef PC_BUILD
asm void FUN_0039f410(int *param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c830000
  .word 0x0003302b
  .word 0x10c000a5
  .word 0x00000000
  .word 0x8e300008
  .word 0x8e25000c
  .word 0x2ca10006
  .word 0x102000a0
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484b060
  .word 0x00051880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x8e250010
  .word 0x04a00043
  .word 0x00000000
  .word 0x8e230004
  .word 0x24020002
  .word 0x10620021
  .word 0x00000000
  .word 0x24020001
  .word 0x1062000b
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000002b
  .word 0x00000000
  .word 0x0200202d
  .word 0x3c050020
  .word 0x0c0e8f84
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000302d
  .word 0x0c0e92e4
  .word 0x00000000
  .word 0x00021103
  .word 0x00021843
  .word 0x04410003
  .word 0x00000000
  .word 0x24420001
  .word 0x00021843
  .word 0x24020140
  .word 0x00431023
  .word 0x00022900
  .word 0x8e240008
  .word 0x240608a0
  .word 0x0c0e8f38
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000302d
  .word 0x0c0e92e4
  .word 0x00000000
  .word 0x00021103
  .word 0x00021843
  .word 0x04410003
  .word 0x00000000
  .word 0x24420001
  .word 0x00021843
  .word 0x24020140
  .word 0x00431023
  .word 0x00022900
  .word 0x8e240008
  .word 0x240605f0
  .word 0x0c0e8f38
  .word 0x00000000
  .word 0x8e240008
  .word 0x8e250010
  .word 0x0000302d
  .word 0x0c0e8c30
  .word 0x00000000
  .word 0x8e240008
  .word 0x2405ffff
  .word 0x0c0e89f0
  .word 0x00000000
  .word 0x24030002
  .word 0xae23000c
  .word 0x10000054
  .word 0x00000000
  .word 0x24030003
  .word 0xae23000c
  .word 0x10000050
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e8960
  .word 0x00000000
  .word 0x0441004b
  .word 0x00000000
  .word 0x24030003
  .word 0xae23000c
  .word 0x10000047
  .word 0x00000000
  .word 0x8e230014
  .word 0x0460000d
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c0e8f04
  .word 0x00000000
  .word 0x0200202d
  .word 0x8e250014
  .word 0x0c0e8df0
  .word 0x00000000
  .word 0x24030004
  .word 0xae23000c
  .word 0x10000038
  .word 0x00000000
  .word 0x24030005
  .word 0xae23000c
  .word 0x10000034
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e89d4
  .word 0x00000000
  .word 0x0441002f
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e8fc8
  .word 0x00000000
  .word 0x0040802d
  .word 0x8e240018
  .word 0x04800007
  .word 0x00000000
  .word 0x2881000a
  .word 0x10200004
  .word 0x00000000
  .word 0x0200282d
  .word 0x0c0e35ac
  .word 0x00000000
  .word 0xae30001c
  .word 0x24030005
  .word 0xae23000c
  .word 0x1000001d
  .word 0x00000000
  .word 0x10c0001b
  .word 0x00000000
  .word 0x10a00019
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c0e897c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e8a8c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c0e8d08
  .word 0x00000000
  .word 0x0200202d
  .word 0x3c050080
  .word 0x0c0e8fa4
  .word 0x00000000
  .word 0x0200202d
  .word 0x3c050010
  .word 0x0c0e8fa4
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c0e897c
  .word 0x00000000
  .word 0xae20000c
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_0039f410(...) FUN_0039f410(__VA_ARGS__)
#undef FUN_0039f6e0
// FUN_0039F6E0


u8 FUN_0039f6e0(int *param_1)



{

  u8 bVar1;

  

  if ((u8)(*param_1 != 0)) goto nonzero;

  return 1;

nonzero:

  return param_1[3] == 0;

}
#define FUN_0039f6e0(...) FUN_0039f6e0(__VA_ARGS__)
#undef FUN_0039f710
// FUN_0039F710


u32 FUN_0039f710(int *param_1)



{

  if ((u8)(*param_1 != 0)) goto nonzero;

  return 0;

nonzero:

  return FUN_003a51a0(param_1[2]);

}
#define FUN_0039f710(...) FUN_0039f710(__VA_ARGS__)
#undef FUN_0039f750
// FUN_0039F750


void FUN_0039f750(int *param_1,int param_2)



{

  if (!(u8)(*param_1 != 0)) {

    FUN_0019d3f0_ptr((void*)(DAT_006a0000 + 0x1840),0x15f);

  }

  FUN_003a5120(param_1[2],param_2);

  return;

}
#define FUN_0039f750(...) FUN_0039f750(__VA_ARGS__)
#undef FUN_0039f7c0
// FUN_0039F7C0


void FUN_0039f7c0(int *param_1)



{

  if ((u8)(*param_1 != 0)) {

    FUN_003a3ba0(param_1[2]);

  }

  return;

}
#define FUN_0039f7c0(...) FUN_0039f7c0(__VA_ARGS__)
#undef FUN_0039f800
// FUN_0039F800


int FUN_0039f800(int *param_1)



{

  if (!(u8)(*param_1 != 0)) {

    FUN_0019d3f0_ptr((void*)(DAT_006a0000 + 0x1840),0x173);

  }

  return param_1[7];

}
#define FUN_0039f800(...) FUN_0039f800(__VA_ARGS__)
#undef FUN_0039f850
// FUN_0039F850


u8 FUN_0039f850(int param_1)



{

  u32 uVar1;
  u32 *puVar4;
  u32 *puVar5;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_4;

  

  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x70); iVar3 = iVar3 + 1) {
    iVar2 = param_1 + iVar3 * 4;
    puVar4 = (u32 *)(iVar2 + 0x68);
    if (*puVar4 == 0) {
      puVar5 = (u32 *)(iVar2 + 0x60);
      uVar1 = FUN_0010c3a0(*puVar5,&iStack_4,0);
      if (iStack_4 == 1) {
        *puVar4 = uVar1;
        *puVar5 = 0;
      }
    }
  }

  uVar1 = 1;
  for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x70); iVar4 = iVar4 + 1) {
    if (*(int *)(param_1 + iVar4 * 4 + 0x68) == 0) {
      uVar1 = 0;
      break;
    }
  }
  if (uVar1 == 1) {
    return 1;
  }
  return 0;

}
#define FUN_0039f850(...) FUN_0039f850(__VA_ARGS__)
#undef FUN_0039f950
/* W415 census recheck: all six relocations resolve to the same ordered retail targets; the reported callee discrepancy is an offset shift, not a wrong callee. */
// FUN_0039F950


#ifndef PC_BUILD
asm void FUN_0039f950(int param_1)
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
  .word 0x24040001
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0000982d
  .word 0x0000902d
  .word 0x10000003
  .word 0x00000000
  .word 0x26730001
  .word 0x8c4200f8
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040182d
  .word 0x10000003
  .word 0x00000000
  .word 0x26730001
  .word 0x8c6300f8
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0x12600043
  .word 0x00000000
  .word 0x00132100
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0xae0200e8
  .word 0x24040001
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040a02d
  .word 0x10000016
  .word 0x00000000
  .word 0x00128900
  .word 0x8e830128
  .word 0x8e0200e8
  .word 0x00511021
  .word 0xac430004
  .word 0x0280202d
  .word 0x0c0ee0e8
  .word 0x00000000
  .word 0x8e0300e8
  .word 0x00711821
  .word 0xac620008
  .word 0x8e820128
  .word 0xc44000f4
  .word 0x8e0200e8
  .word 0x00511021
  .word 0xe4400000
  .word 0x8e0200e8
  .word 0x00511021
  .word 0xac54000c
  .word 0x26520001
  .word 0x8e9400f8
  .word 0x1680ffea
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040a02d
  .word 0x10000016
  .word 0x00000000
  .word 0x00128900
  .word 0x8e830128
  .word 0x8e0200e8
  .word 0x00511021
  .word 0xac430004
  .word 0x0280202d
  .word 0x0c0ee0e8
  .word 0x00000000
  .word 0x8e0300e8
  .word 0x00711821
  .word 0xac620008
  .word 0x8e830128
  .word 0xc46000f4
  .word 0x8e0300e8
  .word 0x00711821
  .word 0xe4600000
  .word 0x8e0300e8
  .word 0x00711821
  .word 0xac74000c
  .word 0x26520001
  .word 0x8e9400f8
  .word 0x1680ffea
  .word 0x00000000
  .word 0xae1300e4
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_0039f950(...) FUN_0039f950(__VA_ARGS__)
#undef FUN_0039fb10
// FUN_0039FB10


void FUN_0039fb10(void)



{

  u16 *puVar1;

  

  FUN_003b5d50(1);

  for (puVar1 = (u16 *)FUN_003b5d50(1); puVar1 != (u16 *)0x0;

      puVar1 = *(u16 **)(puVar1 + 0x7c)) {

    FUN_003189f0(*(u32 *)(puVar1 + 0x94),0,0.0f);

    FUN_003b8310(*puVar1,1);

  }

  for (puVar1 = (u16 *)FUN_003b5d50(3); puVar1 != (u16 *)0x0;

      puVar1 = *(u16 **)(puVar1 + 0x7c)) {

    FUN_003189f0(*(u32 *)(puVar1 + 0x94),0,0.0f);

    FUN_003b8310(*puVar1,1);

  }

  return;

}
#define FUN_0039fb10(...) FUN_0039fb10(__VA_ARGS__)
#undef FUN_0039fbd0
// FUN_0039FBD0
#pragma push
#pragma opt_lifetimes on


#ifndef PC_BUILD
asm void FUN_0039fbd0(int param_1)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080882d
  .word 0x26300094
  .word 0xc780a79c
  .word 0xe7a0009c
  .word 0x3c06006a
  .word 0x24c61850
  .word 0x27a50070
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
  .word 0x3c06006a
  .word 0x24c61870
  .word 0x27a50050
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
  .word 0x9205001c
  .word 0x9204001d
  .word 0x9203001e
  .word 0x9202001f
  .word 0xa3a5009c
  .word 0xa3a4009d
  .word 0xa3a3009e
  .word 0xa3a2009f
  .word 0x8e020008
  .word 0xa3a2009f
  .word 0x3c0242fe
  .word 0xafa20090
  .word 0x3c02c302
  .word 0xafa20094
  .word 0xafa00098
  .word 0x27a40090
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc6000028
  .word 0x46800060
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0xc7808168
  .word 0x46010302
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14b80e
  .word 0x00000000
  .word 0x3c033ff0
  .word 0x0003203c
  .word 0x0040282d
  .word 0x0c14c472
  .word 0x00000000
  .word 0x0040902d
  .word 0x3c024248
  .word 0x44820800
  .word 0xc7a00090
  .word 0x46000b02
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0240282d
  .word 0x0c14c48c
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14c628
  .word 0x00000000
  .word 0x46000546
  .word 0xc6000028
  .word 0x46800060
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0xc7808168
  .word 0x46010302
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14b80e
  .word 0x00000000
  .word 0x3c033ff0
  .word 0x0003203c
  .word 0x0040282d
  .word 0x0c14c472
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c024248
  .word 0x44820800
  .word 0xc7a00094
  .word 0x46000b02
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0200282d
  .word 0x0c14c48c
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14c628
  .word 0x00000000
  .word 0x46000506
  .word 0x3c0242fe
  .word 0x44820800
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c0243a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46020041
  .word 0xe7a10070
  .word 0x3c0242c0
  .word 0xafa20074
  .word 0x46020000
  .word 0xe7a00078
  .word 0xafa2007c
  .word 0xe7a10080
  .word 0x3c024373
  .word 0xafa20084
  .word 0xe7a00088
  .word 0x3c0242e2
  .word 0xafa2008c
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420070
  .word 0xc4400000
  .word 0x46150000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46140000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0xafa00050
  .word 0xafa00054
  .word 0x3c033f80
  .word 0xafa30058
  .word 0xafa0005c
  .word 0xafa00060
  .word 0x3c023f13
  .word 0xafa20064
  .word 0xafa30068
  .word 0x3c023d88
  .word 0xafa2006c
  .word 0x3c024120
  .word 0x44826000
  .word 0x3c024220
  .word 0x44826800
  .word 0x27a40070
  .word 0x27a50050
  .word 0x8e26006c
  .word 0x27a7009c
  .word 0x0c0e1df0
  .word 0x00000000
  .word 0x3c0242fe
  .word 0x44820800
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c0243a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46020041
  .word 0xe7a10070
  .word 0x3c024373
  .word 0xafa20074
  .word 0x46020000
  .word 0xe7a00078
  .word 0x3c0242e2
  .word 0xafa2007c
  .word 0xe7a10080
  .word 0x3c024382
  .word 0xafa20084
  .word 0xe7a00088
  .word 0xafa2008c
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24420070
  .word 0xc4400000
  .word 0x46150001
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46140001
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0xafa00050
  .word 0x3c023f13
  .word 0xafa20054
  .word 0x3c033f80
  .word 0xafa30058
  .word 0x3c023d88
  .word 0xafa2005c
  .word 0xafa00060
  .word 0x3c023f23
  .word 0xafa20064
  .word 0xafa30068
  .word 0xafa2006c
  .word 0x3c024110
  .word 0x44826000
  .word 0x3c024220
  .word 0x44826800
  .word 0x27a40070
  .word 0x27a50050
  .word 0x8e26006c
  .word 0x27a7009c
  .word 0x0c0e1df0
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#define FUN_0039fbd0(...) FUN_0039fbd0(__VA_ARGS__)
#undef FUN_0039ffc0
// FUN_0039FFC0


#ifndef PC_BUILD
asm void FUN_0039ffc0(int param_1,float *param_2,int param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x00a0a02d
  .word 0x00c0982d
  .word 0x00e0902d
  .word 0x24910094
  .word 0xc780a7a0
  .word 0xe7a0009c
  .word 0x3c024334
  .word 0x44820800
  .word 0xc4a00000
  .word 0x46010043
  .word 0x00000000
  .word 0xc7808168
  .word 0x46010302
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14b8ca
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14c628
  .word 0x00000000
  .word 0x46000506
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a043
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010540
  .word 0xc6210014
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000841
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0xc7808168
  .word 0x46010302
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14b8ca
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c0242fe
  .word 0x44820000
  .word 0x00000000
  .word 0x46150302
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0200282d
  .word 0x0c14c48c
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14c628
  .word 0x00000000
  .word 0xe7a00088
  .word 0x3c024324
  .word 0x44820800
  .word 0x00000000
  .word 0x461508c2
  .word 0xe7a3008c
  .word 0x3c024000
  .word 0x44821000
  .word 0x00000000
  .word 0x46020043
  .word 0x3c0243a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0xe7a00090
  .word 0x46021843
  .word 0x3c024332
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0xe7a00094
  .word 0xafa00080
  .word 0xafa00084
  .word 0x3c023f80
  .word 0x44820000
  .word 0xafa20078
  .word 0x3c023f24
  .word 0xafa2007c
  .word 0x3c024300
  .word 0x44820800
  .word 0x00000000
  .word 0x46140001
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
  .word 0xa3a3009f
  .word 0x3c024080
  .word 0x44826000
  .word 0x27a40090
  .word 0x27a50088
  .word 0x27a60080
  .word 0x27a70078
  .word 0x0240402d
  .word 0x27a9009c
  .word 0xc62d0018
  .word 0x0000502d
  .word 0x0c0e2000
  .word 0x00000000
  .word 0x44930000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808240
  .word 0x46010002
  .word 0xe6800000
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_0039ffc0(...) FUN_0039ffc0(__VA_ARGS__)
#undef FUN_003a0220
/* W415 ORDER probe: invert the condition so the retail-sized body precedes the fallback call; nd595 -> 575 (obj892/window912). The ordered calls now follow retail; residual frame/local layout remains NONMATCHING. */
// FUN_003A0220


#ifndef PC_BUILD
asm u64 FUN_003a0220(int param_1)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c92003c
  .word 0x26500094
  .word 0xc780a7a4
  .word 0xe7a0007c
  .word 0xc781b92c
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe780b92c
  .word 0x8e4200b8
  .word 0x104000c8
  .word 0x00000000
  .word 0x27a30050
  .word 0x24020008
  .word 0x10600008
  .word 0x00000000
  .word 0xa0600000
  .word 0x24630001
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x27a50048
  .word 0xdf82a7a8
  .word 0xffa20048
  .word 0x27a60078
  .word 0xc780a7b0
  .word 0xe7a00078
  .word 0x8e02000c
  .word 0xa3a2007b
  .word 0x3c0242c8
  .word 0x44826000
  .word 0x27a40050
  .word 0x0c0e1bdc
  .word 0x00000000
  .word 0x9207001c
  .word 0x9206001d
  .word 0x9203001e
  .word 0x9202001f
  .word 0xa3a7007c
  .word 0xa3a6007d
  .word 0xa3a3007e
  .word 0xa3a2007f
  .word 0x8e020008
  .word 0xa3a2007f
  .word 0xc6000028
  .word 0x46800060
  .word 0x44800000
  .word 0x00000000
  .word 0x46010032
  .word 0x4500009c
  .word 0x00000000
  .word 0xe7a00060
  .word 0xe7a00064
  .word 0x3c023f80
  .word 0xafa20058
  .word 0x3c023f24
  .word 0xafa2005c
  .word 0xc6010014
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000035
  .word 0x00000000
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0xc7808168
  .word 0x46010302
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14b80e
  .word 0x00000000
  .word 0x0040882d
  .word 0x3c0242fe
  .word 0x44826000
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0220282d
  .word 0x0c14c48c
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14c628
  .word 0x00000000
  .word 0xe7a00068
  .word 0x3c024324
  .word 0xafa2006c
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010043
  .word 0x3c0243a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0xe7a00070
  .word 0x3c0242c0
  .word 0xafa20074
  .word 0x3c0240a0
  .word 0x44826000
  .word 0x27a40070
  .word 0x27a50068
  .word 0x27a60060
  .word 0x27a70058
  .word 0x8e480068
  .word 0x27a9007c
  .word 0xc60d0018
  .word 0x0000502d
  .word 0x0c0e2000
  .word 0x00000000
  .word 0x10000034
  .word 0x00000000
  .word 0x46000841
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0xc7808168
  .word 0x46010302
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14b8ca
  .word 0x00000000
  .word 0x0040882d
  .word 0x3c0242fe
  .word 0x44826000
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0220282d
  .word 0x0c14c48c
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14c628
  .word 0x00000000
  .word 0xe7a00068
  .word 0x3c024324
  .word 0xafa2006c
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010043
  .word 0x3c0243a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0xe7a00070
  .word 0x3c0242c0
  .word 0xafa20074
  .word 0x3c0240a0
  .word 0x44826000
  .word 0x27a40070
  .word 0x27a50068
  .word 0x27a60060
  .word 0x27a70058
  .word 0x8e48006c
  .word 0x27a9007c
  .word 0xc60d0018
  .word 0x0000502d
  .word 0x0c0e2000
  .word 0x00000000
  .word 0x26500094
  .word 0x0000882d
  .word 0x10000020
  .word 0x00000000
  .word 0x00111080
  .word 0x02021021
  .word 0x24440034
  .word 0x8c420034
  .word 0x18400003
  .word 0x00000000
  .word 0x24420001
  .word 0xac820000
  .word 0x8c820000
  .word 0x28410038
  .word 0x14200009
  .word 0x00000000
  .word 0x8e03003c
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0xac800000
  .word 0x10000002
  .word 0x00000000
  .word 0xac820000
  .word 0x8c860000
  .word 0x18c00008
  .word 0x00000000
  .word 0x00111080
  .word 0x02021021
  .word 0x0240202d
  .word 0x24450030
  .word 0x8e47006c
  .word 0x0c0e7ff0
  .word 0x00000000
  .word 0x26310001
  .word 0x1a20ffe0
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0e7ef4
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_003a0220(...) FUN_003a0220(__VA_ARGS__)
#undef FUN_003a05b0
// FUN_003A05B0


#ifndef PC_BUILD
asm void FUN_003a05b0(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdfe70
  .word 0xffbf00c0
  .word 0x7fbe00b0
  .word 0x7fb700a0
  .word 0x7fb60090
  .word 0x7fb50080
  .word 0x7fb40070
  .word 0x7fb30060
  .word 0x7fb20050
  .word 0x7fb10040
  .word 0x7fb00030
  .word 0xe7b80020
  .word 0xe7b7001c
  .word 0xe7b60018
  .word 0xe7b50014
  .word 0xe7b40010
  .word 0x00a0a82d
  .word 0x00151880
  .word 0x00641821
  .word 0x8c650074
  .word 0x10a000c3
  .word 0x00000000
  .word 0x00151040
  .word 0x00441021
  .word 0x245400ec
  .word 0x26a200fa
  .word 0x3044ffff
  .word 0x24060001
  .word 0x0c0ed930
  .word 0x00000000
  .word 0xa6820000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x27a600e0
  .word 0x24050008
  .word 0x8c440000
  .word 0x8c430004
  .word 0x24420008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x27a40178
  .word 0xc7a20100
  .word 0xc7a10104
  .word 0xc7a00108
  .word 0xe7a20178
  .word 0xe7a1017c
  .word 0xe7a00180
  .word 0xc7a200f0
  .word 0xc7a100f4
  .word 0xc7a000f8
  .word 0xe7a20168
  .word 0xe7a1016c
  .word 0xe7a00170
  .word 0xc7a20110
  .word 0xc7a10114
  .word 0xc7a00118
  .word 0xe7a20158
  .word 0xe7a1015c
  .word 0xe7a00160
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c024448
  .word 0x44821000
  .word 0xc7a00178
  .word 0xc7ac0158
  .word 0x44800800
  .word 0x00000000
  .word 0x460c0818
  .word 0x4600159c
  .word 0xe7b60148
  .word 0xc7b7015c
  .word 0xc7a0017c
  .word 0x46170818
  .word 0x4600155c
  .word 0xe7b5014c
  .word 0xc7b80160
  .word 0xc7a00180
  .word 0x46180818
  .word 0x4600151c
  .word 0xe7b40150
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040982d
  .word 0x4600bb06
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040902d
  .word 0x4600c306
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040882d
  .word 0x4600b306
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040802d
  .word 0x4600ab06
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040b02d
  .word 0x4600a306
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040b82d
  .word 0xc7a00158
  .word 0x4600b301
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040f02d
  .word 0x4617ab01
  .word 0x0c14c368
  .word 0x00000000
  .word 0x7fa200d0
  .word 0x4618a301
  .word 0x0c14c368
  .word 0x00000000
  .word 0x7ba300d0
  .word 0xffa30000
  .word 0xffa20008
  .word 0x3c04006a
  .word 0x24841890
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0220382d
  .word 0x0200402d
  .word 0x02c0482d
  .word 0x02e0502d
  .word 0x03c0582d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24020003
  .word 0x12a20003
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x3c0242aa
  .word 0x44821800
  .word 0xc7a10168
  .word 0xc7a00148
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4601181d
  .word 0xe7a00148
  .word 0xc7a1016c
  .word 0xc7a0014c
  .word 0x46001018
  .word 0x4601181d
  .word 0xe7a0014c
  .word 0xc7a10170
  .word 0xc7a00150
  .word 0x46001018
  .word 0x4601181d
  .word 0xe7a00150
  .word 0x10000014
  .word 0x00000000
  .word 0x3c024370
  .word 0x44821800
  .word 0xc7a10168
  .word 0xc7a00148
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4601181d
  .word 0xe7a00148
  .word 0xc7a1016c
  .word 0xc7a0014c
  .word 0x46001018
  .word 0x4601181d
  .word 0xe7a0014c
  .word 0xc7a10170
  .word 0xc7a00150
  .word 0x46001018
  .word 0x4601181d
  .word 0xe7a00150
  .word 0x27a400e0
  .word 0x27a50128
  .word 0x27a60138
  .word 0x0c0edeb0
  .word 0x00000000
  .word 0x96840000
  .word 0x27a50148
  .word 0x27a60128
  .word 0x0c0ede2c
  .word 0x00000000
  .word 0x24020006
  .word 0x12a20003
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x96840000
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040802d
  .word 0x8c440104
  .word 0x27a5018c
  .word 0x0c0d4010
  .word 0x00000000
  .word 0x27a50188
  .word 0xc7a0018c
  .word 0xe7a00188
  .word 0xa3a0018b
  .word 0x8e040104
  .word 0x0c0d3fe4
  .word 0x00000000
  .word 0x96840000
  .word 0x24050001
  .word 0x0c0ee554
  .word 0x00000000
  .word 0xdfbf00c0
  .word 0x7bbe00b0
  .word 0x7bb700a0
  .word 0x7bb60090
  .word 0x7bb50080
  .word 0x7bb40070
  .word 0x7bb30060
  .word 0x7bb20050
  .word 0x7bb10040
  .word 0x7bb00030
  .word 0xc7b80020
  .word 0xc7b7001c
  .word 0xc7b60018
  .word 0xc7b50014
  .word 0xc7b40010
  .word 0x27bd0190
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_003a05b0(...) FUN_003a05b0(__VA_ARGS__)
#undef FUN_003a0960
// FUN_003A0960


#ifndef PC_BUILD
asm void FUN_003a0960(int param_1,int param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x00c0802d
  .word 0x00111880
  .word 0x00721821
  .word 0x8c650074
  .word 0x10a00065
  .word 0x00000000
  .word 0x00111040
  .word 0x00521021
  .word 0x245300ec
  .word 0x262200fa
  .word 0x3044ffff
  .word 0x0000302d
  .word 0x0c0ed930
  .word 0x00000000
  .word 0xa6620000
  .word 0x0200202d
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040802d
  .word 0x27a40050
  .word 0x2403000c
  .word 0x10800008
  .word 0x00000000
  .word 0xa0800000
  .word 0x24840001
  .word 0x2463ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0x1200004b
  .word 0x00000000
  .word 0x96030000
  .word 0x3c02000f
  .word 0x3442fc00
  .word 0x00621024
  .word 0x00021a83
  .word 0x24020003
  .word 0x10620021
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000032
  .word 0x00000000
  .word 0x8e040128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x8e040128
  .word 0x24050002
  .word 0x27a60050
  .word 0x0c0c63b4
  .word 0x00000000
  .word 0x14400028
  .word 0x00000000
  .word 0x8e040128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20050
  .word 0xe7a10054
  .word 0xe7a00058
  .word 0xc7a10054
  .word 0x3c02432f
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00054
  .word 0x10000017
  .word 0x00000000
  .word 0x8e040128
  .word 0x24050002
  .word 0x27a60050
  .word 0x0c0c63b4
  .word 0x00000000
  .word 0x14400010
  .word 0x00000000
  .word 0x8e040128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20050
  .word 0xe7a10054
  .word 0xe7a00058
  .word 0xc7a10054
  .word 0x3c02432f
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00054
  .word 0x00111040
  .word 0x00521021
  .word 0x245000ec
  .word 0x944400ec
  .word 0x27a50050
  .word 0x0000302d
  .word 0x0c0ede2c
  .word 0x00000000
  .word 0x96040000
  .word 0x24050001
  .word 0x0c0ee554
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_003a0960(...) FUN_003a0960(__VA_ARGS__)
#undef FUN_003a0b50
// FUN_003A0B50


u32 FUN_003a0b50(int param_1)



{

  int iVar1;

  char cVar2;

  int lVar3;

  u32 *puVar4;

  

  puVar4 = (u32 *)(param_1 + 0xc0);

  switch(*(u32 *)(param_1 + 0xc0)) {

  case 0:

    iVar1 = *(int *)(param_1 + 8);
    switch (iVar1) {
    case 0:
      *puVar4 = 1;
      break;
    case 1:
      cVar2 = FUN_0016dba0(*(u16 *)(param_1 + 4));
      if (cVar2 == '\n') {
        *puVar4 = 7;
      }
      else {
        *puVar4 = 3;
      }
      break;
    case 2:
    case 3:
      *puVar4 = 0xf;
      break;
    }
    break;

  case 1:

    FUN_0039f210_call((int *)(param_1 + 0x3c),1,-1,-1);

    *puVar4 = 2;

    break;

  case 2:

    lVar3 = FUN_0039f6e0_call((int *)(param_1 + 0x3c));

    if (lVar3 == 1) {

      *puVar4 = 0xf;

    }

    break;

  case 3:

    FUN_0039f210_call((int *)(param_1 + 0x3c),2,-1,-1);

    *puVar4 = 4;

    break;

  case 4:

    lVar3 = FUN_0039f6e0_call((int *)(param_1 + 0x3c));

    if (lVar3 == 1) {

      *puVar4 = 5;

    }

    break;

  case 5:

    FUN_0039f210_call((int *)(param_1 + 0x3c),3,-1,-1);

    *puVar4 = 6;

    break;

  case 6:

    lVar3 = FUN_0039f6e0_call((int *)(param_1 + 0x3c));

    if (lVar3 == 1) {

      *puVar4 = 0xf;

    }

    break;

  case 7:

    FUN_0039f210_call((int *)(param_1 + 0x3c),4,-1,-1);

    *puVar4 = 8;

    break;

  case 8:

    lVar3 = FUN_0039f6e0_call((int *)(param_1 + 0x3c));

    if (lVar3 == 1) {

      *puVar4 = 9;

    }

    break;

  case 9:

    FUN_0039f210_call((int *)(param_1 + 0x3c),5,-1,-1);

    *puVar4 = 10;

    break;

  case 10:

    lVar3 = FUN_0039f6e0_call((int *)(param_1 + 0x3c));

    if (lVar3 == 1) {

      *puVar4 = 0xb;

    }

    break;

  case 0xb:

    lVar3 = *(short *)(param_1 + 4) * 2 + 6;
    FUN_0039f210_call((int *)(param_1 + 0x3c),lVar3,-1,-1);

    *puVar4 = 0xc;

    break;

  case 0xc:

    lVar3 = FUN_0039f6e0_call((int *)(param_1 + 0x3c));

    if (lVar3 == 1) {

      *puVar4 = 0xd;

    }

    break;

  case 0xd:

    lVar3 = *(short *)(param_1 + 4) * 2 + 7;
    FUN_0039f210_call((int *)(param_1 + 0x3c),lVar3,-1,-1);

    *puVar4 = 0xe;

    break;

  case 0xe:

    lVar3 = FUN_0039f6e0_call((int *)(param_1 + 0x3c));

    if (lVar3 == 1) {

      *puVar4 = 0xf;

    }

    break;

  case 0xf:

    return 1;

  }

  return 0;

}
#define FUN_003a0b50(...) FUN_003a0b50(__VA_ARGS__)
#undef FUN_003a0e90
// FUN_003A0E90


#ifndef PC_BUILD
asm u32 FUN_003a0e90(int param_1)
{
  .set noreorder
  .word 0x27bdfee0
  .word 0xffbf0080
  .word 0x7fb40070
  .word 0x7fb30060
  .word 0x7fb20050
  .word 0x7fb10040
  .word 0x7fb00030
  .word 0xe7b40020
  .word 0x8c91003c
  .word 0x26330094
  .word 0x2630001c
  .word 0x8e220094
  .word 0x2c410024
  .word 0x10200324
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463b0c0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3c05006a
  .word 0x24a518c0
  .word 0x2406106f
  .word 0x3c07003a
  .word 0x24e70220
  .word 0x0000402d
  .word 0x0220482d
  .word 0x0c0652c8
  .word 0x00000000
  .word 0x24020001
  .word 0xae620000
  .word 0x10000310
  .word 0x00000000
  .word 0x3c04006a
  .word 0x248418e0
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae220014
  .word 0x24020002
  .word 0xae620000
  .word 0x10000306
  .word 0x00000000
  .word 0x8e240014
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x24030001
  .word 0x14430300
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02006a
  .word 0x24421900
  .word 0xffa20010
  .word 0x24020340
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05006a
  .word 0x24a518e0
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae220060
  .word 0x24020001
  .word 0xae220070
  .word 0x24020003
  .word 0xae620000
  .word 0x100002e7
  .word 0x00000000
  .word 0x86240004
  .word 0x0c05b7cc
  .word 0x00000000
  .word 0x0002363c
  .word 0x0006363f
  .word 0x27a400d0
  .word 0x3c05006a
  .word 0x24a51920
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a400d0
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae220018
  .word 0x24020004
  .word 0xae620000
  .word 0x100002d4
  .word 0x00000000
  .word 0x8e240018
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x24030001
  .word 0x144302ce
  .word 0x00000000
  .word 0x86240004
  .word 0x0c05b7cc
  .word 0x00000000
  .word 0x0002363c
  .word 0x0006363f
  .word 0x27a40090
  .word 0x3c05006a
  .word 0x24a51920
  .word 0x0c148eb2
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02006a
  .word 0x24421900
  .word 0xffa20010
  .word 0x24020353
  .word 0xffa20018
  .word 0x0000202d
  .word 0x27a50090
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae220064
  .word 0x24020002
  .word 0xae220070
  .word 0x24020005
  .word 0xae620000
  .word 0x100002ac
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0e7e14
  .word 0x00000000
  .word 0x24040001
  .word 0x144402a6
  .word 0x00000000
  .word 0x240200ff
  .word 0xa262001d
  .word 0xa262001e
  .word 0xa262001c
  .word 0xa260001f
  .word 0x8e230008
  .word 0x24020003
  .word 0x1062000e
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000b
  .word 0x00000000
  .word 0x10640005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x24020006
  .word 0xae620000
  .word 0x10000003
  .word 0x00000000
  .word 0x2402000a
  .word 0xae620000
  .word 0x8e230008
  .word 0x24020003
  .word 0x10620022
  .word 0x00000000
  .word 0x24020002
  .word 0x1062001a
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x86240004
  .word 0x0c05b6e8
  .word 0x00000000
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x2402000a
  .word 0x14620006
  .word 0x00000000
  .word 0x2404002e
  .word 0x0c0e549c
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x24040056
  .word 0x0c0e549c
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x24040027
  .word 0x0c0e549c
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x24040027
  .word 0x0c0e549c
  .word 0x00000000
  .word 0x24020001
  .word 0xae620024
  .word 0x10000262
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020007
  .word 0xae620000
  .word 0x10000258
  .word 0x00000000
  .word 0x2402000a
  .word 0xae620000
  .word 0x10000254
  .word 0x00000000
  .word 0x24020009
  .word 0xae620000
  .word 0x10000250
  .word 0x00000000
  .word 0x2402000a
  .word 0xae620000
  .word 0x1000024c
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050005
  .word 0x0c0e816c
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060002
  .word 0x24070004
  .word 0x0c042938
  .word 0x00000000
  .word 0xae60000c
  .word 0x2402000b
  .word 0xae620000
  .word 0x1000023d
  .word 0x00000000
  .word 0x8e62000c
  .word 0x24420004
  .word 0xae62000c
  .word 0x28410081
  .word 0x14200237
  .word 0x00000000
  .word 0x24020080
  .word 0xae62000c
  .word 0x0c0e7ec4
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x1443022d
  .word 0x00000000
  .word 0x2402000d
  .word 0xae620000
  .word 0x26640040
  .word 0x0000282d
  .word 0x0c0e60e4
  .word 0x00000000
  .word 0x10000225
  .word 0x00000000
  .word 0x8e230008
  .word 0x24020003
  .word 0x1062000e
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000b
  .word 0x00000000
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0xae600014
  .word 0x10000003
  .word 0x00000000
  .word 0x3c024334
  .word 0xae620014
  .word 0x2402000c
  .word 0xae620000
  .word 0x1000020e
  .word 0x00000000
  .word 0x26640040
  .word 0x0c0e60e8
  .word 0x00000000
  .word 0x10400209
  .word 0x00000000
  .word 0x0000202d
  .word 0x240501f5
  .word 0x24060004
  .word 0x0c0e54b4
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0c0e816c
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050006
  .word 0x0c0e816c
  .word 0x00000000
  .word 0x26640040
  .word 0x2405001e
  .word 0x0c0e60e4
  .word 0x00000000
  .word 0x2402000e
  .word 0xae620000
  .word 0x100001f4
  .word 0x00000000
  .word 0x26640040
  .word 0x0c0e60e8
  .word 0x00000000
  .word 0x104001ef
  .word 0x00000000
  .word 0x8e620008
  .word 0x24420003
  .word 0xae620008
  .word 0x28410100
  .word 0x142001e9
  .word 0x00000000
  .word 0x240200ff
  .word 0xae620008
  .word 0x8e230008
  .word 0x24060003
  .word 0x10660018
  .word 0x00000000
  .word 0x24020002
  .word 0x10620015
  .word 0x00000000
  .word 0x24020001
  .word 0x1062000d
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100001d9
  .word 0x00000000
  .word 0x0000202d
  .word 0x240500b0
  .word 0x0c0e54b4
  .word 0x00000000
  .word 0x2402000f
  .word 0xae620000
  .word 0x100001d1
  .word 0x00000000
  .word 0xae620034
  .word 0x24020013
  .word 0xae620000
  .word 0x100001cc
  .word 0x00000000
  .word 0x24020013
  .word 0xae620000
  .word 0x100001c8
  .word 0x00000000
  .word 0xc6610014
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46000840
  .word 0xe6610014
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x450101bc
  .word 0x00000000
  .word 0xe6600014
  .word 0x24020010
  .word 0xae620000
  .word 0x100001b7
  .word 0x00000000
  .word 0xc6610014
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000840
  .word 0xe6610014
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x450101ab
  .word 0x00000000
  .word 0xe6600014
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c0e816c
  .word 0x00000000
  .word 0x24020001
  .word 0xae620034
  .word 0x26640040
  .word 0x24050014
  .word 0x0c0e60e4
  .word 0x00000000
  .word 0x24020011
  .word 0xae620000
  .word 0x1000019c
  .word 0x00000000
  .word 0x26640040
  .word 0x0c0e60e8
  .word 0x00000000
  .word 0x10400197
  .word 0x00000000
  .word 0x24020013
  .word 0xae620000
  .word 0x10000193
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0e82d4
  .word 0x00000000
  .word 0x24030001
  .word 0x1443018d
  .word 0x00000000
  .word 0x24020014
  .word 0xae620000
  .word 0x10000189
  .word 0x00000000
  .word 0x8e230008
  .word 0x24060003
  .word 0x1066001b
  .word 0x00000000
  .word 0x24020002
  .word 0x10620010
  .word 0x00000000
  .word 0x24020001
  .word 0x10620009
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000017b
  .word 0x00000000
  .word 0x2402001a
  .word 0xae620000
  .word 0x10000177
  .word 0x00000000
  .word 0x2402001a
  .word 0xae620000
  .word 0x10000173
  .word 0x00000000
  .word 0x24020015
  .word 0xae620000
  .word 0x0000202d
  .word 0x240501f6
  .word 0x0c0e54b4
  .word 0x00000000
  .word 0x1000016b
  .word 0x00000000
  .word 0x24020017
  .word 0xae620000
  .word 0x10000167
  .word 0x00000000
  .word 0x9262001d
  .word 0x28410015
  .word 0x14200007
  .word 0x00000000
  .word 0x2442fffa
  .word 0xa262001d
  .word 0x9262001d
  .word 0xa262001e
  .word 0x10000005
  .word 0x00000000
  .word 0x2402000e
  .word 0xa262001d
  .word 0x9262001d
  .word 0xa262001e
  .word 0x9262001d
  .word 0x284100a0
  .word 0x1020000e
  .word 0x00000000
  .word 0xc6610018
  .word 0x3c024140
  .word 0x44820000
  .word 0x00000000
  .word 0x46000840
  .word 0xe6610018
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45010002
  .word 0x00000000
  .word 0xe6600018
  .word 0x9263001d
  .word 0x2402000e
  .word 0x14620144
  .word 0x00000000
  .word 0xc6610018
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x4501013d
  .word 0x00000000
  .word 0x26640040
  .word 0x2405001e
  .word 0x0c0e60e4
  .word 0x00000000
  .word 0x2402001a
  .word 0xae620000
  .word 0x10000135
  .word 0x00000000
  .word 0x26640040
  .word 0x0c0e60e8
  .word 0x00000000
  .word 0x10400130
  .word 0x00000000
  .word 0xc6610018
  .word 0x3c024140
  .word 0x44820000
  .word 0x00000000
  .word 0x46000840
  .word 0xe6610018
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45010124
  .word 0x00000000
  .word 0xe6600018
  .word 0x26640040
  .word 0x2405000a
  .word 0x0c0e60e4
  .word 0x00000000
  .word 0x2402001a
  .word 0xae620000
  .word 0x1000011b
  .word 0x00000000
  .word 0x26640040
  .word 0x0c0e60e8
  .word 0x00000000
  .word 0x10400116
  .word 0x00000000
  .word 0x0000202d
  .word 0x240501f8
  .word 0x24060003
  .word 0x0c0e54b4
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050003
  .word 0x0c0e816c
  .word 0x00000000
  .word 0x24020018
  .word 0xae620000
  .word 0x10000109
  .word 0x00000000
  .word 0x8e620028
  .word 0x24420010
  .word 0xae620028
  .word 0x284200b4
  .word 0x14400103
  .word 0x00000000
  .word 0x240200b4
  .word 0xae620028
  .word 0x24020019
  .word 0xae620000
  .word 0x100000fd
  .word 0x00000000
  .word 0x8e620008
  .word 0x2442fffc
  .word 0xae620008
  .word 0x044100f8
  .word 0x00000000
  .word 0xae600008
  .word 0x26640040
  .word 0x24050014
  .word 0x0c0e60e4
  .word 0x00000000
  .word 0x24020020
  .word 0xae620000
  .word 0x100000ef
  .word 0x00000000
  .word 0x26640040
  .word 0x0c0e60e8
  .word 0x00000000
  .word 0x104000ea
  .word 0x00000000
  .word 0x8e230008
  .word 0x24020003
  .word 0x10620014
  .word 0x00000000
  .word 0x24020002
  .word 0x10620011
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x0000202d
  .word 0x240501f5
  .word 0x24060004
  .word 0x0c0e54b4
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c0e816c
  .word 0x00000000
  .word 0x24020001
  .word 0xae62003c
  .word 0x2402001b
  .word 0xae620000
  .word 0x100000cd
  .word 0x00000000
  .word 0x8e620008
  .word 0x2442fffc
  .word 0xae620008
  .word 0x1c4000c8
  .word 0x00000000
  .word 0xae600008
  .word 0x8e230008
  .word 0x24020003
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000b9
  .word 0x00000000
  .word 0x2402001c
  .word 0xae620000
  .word 0x100000b5
  .word 0x00000000
  .word 0x24020020
  .word 0xae620000
  .word 0x100000b1
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050004
  .word 0x9626000c
  .word 0x0c0e8258
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050003
  .word 0x00a0302d
  .word 0x0c0e54b4
  .word 0x00000000
  .word 0x26640040
  .word 0x2405003c
  .word 0x0c0e60e4
  .word 0x00000000
  .word 0x2402001d
  .word 0xae620000
  .word 0x1000009f
  .word 0x00000000
  .word 0x26640040
  .word 0x0c0e60e8
  .word 0x00000000
  .word 0x1040009a
  .word 0x00000000
  .word 0x24020020
  .word 0xae620000
  .word 0x10000096
  .word 0x00000000
  .word 0x2402001f
  .word 0xae620000
  .word 0x10000092
  .word 0x00000000
  .word 0x8e62000c
  .word 0x28410004
  .word 0x10200027
  .word 0x00000000
  .word 0xae60000c
  .word 0x24020022
  .word 0xae620000
  .word 0x8e2200e8
  .word 0x1040001b
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000014
  .word 0x00000000
  .word 0x8e2200e8
  .word 0x00149100
  .word 0x00521821
  .word 0xc4740000
  .word 0x8c620008
  .word 0x14400005
  .word 0x00000000
  .word 0x8c64000c
  .word 0x0000282d
  .word 0x0c0ee0b0
  .word 0x00000000
  .word 0x8e2200e8
  .word 0x00521021
  .word 0x8c440004
  .word 0x0000282d
  .word 0x4600a306
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x26940001
  .word 0x8e2200e4
  .word 0x0282102a
  .word 0x1440ffea
  .word 0x00000000
  .word 0x26640040
  .word 0x24050014
  .word 0x0c0e60e4
  .word 0x00000000
  .word 0x10000068
  .word 0x00000000
  .word 0x2442fffe
  .word 0xae62000c
  .word 0x10000064
  .word 0x00000000
  .word 0x8e230008
  .word 0x24020003
  .word 0x10620032
  .word 0x00000000
  .word 0x24050002
  .word 0x10650027
  .word 0x00000000
  .word 0x24020001
  .word 0x1062000c
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000002e
  .word 0x00000000
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x10000027
  .word 0x00000000
  .word 0x86240004
  .word 0x0c05b6e8
  .word 0x00000000
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x2402000a
  .word 0x14620009
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050004
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050003
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050005
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050006
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020021
  .word 0xae620000
  .word 0x10000025
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x1443001f
  .word 0x00000000
  .word 0x2402001e
  .word 0xae620000
  .word 0x1000001b
  .word 0x00000000
  .word 0x26640040
  .word 0x24050005
  .word 0x0c0e60e4
  .word 0x00000000
  .word 0x24020023
  .word 0xae620000
  .word 0x10000013
  .word 0x00000000
  .word 0x26640040
  .word 0x0c0e60e8
  .word 0x00000000
  .word 0x1040000e
  .word 0x00000000
  .word 0x862400e0
  .word 0x2402ffff
  .word 0x10820005
  .word 0x00000000
  .word 0x0c0e549c
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0c0423dc
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000001f
  .word 0x00000000
  .word 0x962400f8
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040902d
  .word 0x12400012
  .word 0x00000000
  .word 0x8e440104
  .word 0x27a5011c
  .word 0x0c0d4010
  .word 0x00000000
  .word 0xc7a0011c
  .word 0xe7a00118
  .word 0x8e630008
  .word 0x00031043
  .word 0x04610003
  .word 0x00000000
  .word 0x24620001
  .word 0x00021043
  .word 0xa3a2011b
  .word 0x8e440104
  .word 0x27a50118
  .word 0x0c0d3fe4
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7d04
  .word 0x00000000
  .word 0x2624003c
  .word 0x0c0e7d04
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0080
  .word 0x7bb40070
  .word 0x7bb30060
  .word 0x7bb20050
  .word 0x7bb10040
  .word 0x7bb00030
  .word 0xc7b40020
  .word 0x27bd0120
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_003a0e90(...) FUN_003a0e90(__VA_ARGS__)
#undef FUN_003a1c00
// FUN_003A1C00


u32 FUN_003a1c00(int param_1)



{

  int *piVar1;

  char cVar2;

  u16 uVar3;

  int iVar4;

  u32 uVar5;

  int lVar6;

  u32 uVar7;

  int *piVar8;

  u8 auStack_4 [4];

  

  piVar1 = *(int **)((int)param_1 + 0x3c);

  piVar8 = piVar1 + 7;

  iVar4 = *piVar1;
  switch (iVar4) {
  case 0:
    iVar4 = FUN_00100d80(DAT_006a1940,1);
    piVar1[4] = iVar4;
    *piVar1 = 1;
    break;
  case 1:
    lVar6 = FUN_001016b0(piVar1[4]);
    if (lVar6 == 1) {
      uVar7 = FUN_001021c0(DAT_006a1960,auStack_4);
      piVar1[0x17] = (int)uVar7;
      FUN_0039ec70_call(piVar8,uVar7);
      uVar3 = FUN_001099a0();
      *(u16 *)(piVar1 + 0x38) = uVar3;
      FUN_0039efd0_call(piVar8,0,(short)piVar1[1]);
      FUN_0039ef70_call(piVar8,2,(short)piVar1[1]);
      cVar2 = FUN_0016dba0((short)piVar1[1]);
      if ('\x01' < cVar2) {
        FUN_0039f120_call(piVar8,3,(short)piVar1[1],cVar2 + -1);
      }
      if ('\0' < cVar2) {
        FUN_0039f120_call(piVar8,4,(short)piVar1[1],cVar2);
      }
      FUN_0039eef0_call(piVar8,5,cVar2);
      uVar7 = FUN_001021c0(DAT_006a1980,auStack_4);
      FUN_0039ed20_call(piVar1 + 0xf,uVar7);
      FUN_0039efd0_call(piVar1 + 0xf,0,(short)piVar1[1]);
      FUN_0039f190_call(piVar1 + 0xf,1,(short)piVar1[1]);
      iVar4 = FUN_001021c0(DAT_006a19a0,auStack_4);
      piVar1[0x1d] = iVar4;
      iVar4 = FUN_001021c0(DAT_006a19c0,auStack_4);
      piVar1[0x1e] = iVar4;
      iVar4 = FUN_001021c0(DAT_006a19a0,auStack_4);
      piVar1[0x1f] = iVar4;
      iVar4 = FUN_001021c0(DAT_006a19e0,auStack_4);
      piVar1[0x20] = iVar4;
      iVar4 = FUN_001021c0(DAT_006a1a00,auStack_4);
      piVar1[0x21] = iVar4;
      iVar4 = FUN_001021c0(DAT_006a1a20,auStack_4);
      piVar1[0x22] = iVar4;
      iVar4 = FUN_001021c0(DAT_006a1a40,auStack_4);
      piVar1[0x23] = iVar4;
      for (iVar4 = 0; iVar4 < 7; iVar4 = iVar4 + 1) {
        *(u16 *)((int)piVar1 + iVar4 * 2 + 0xec) = 0;
      }
      *piVar1 = 2;
    }
    break;
  case 2:
    iVar4 = FUN_00194b20(param_1,&gp0xffffa7b8,0x10,FUN_003a0e90,0,piVar1);
    FUN_0039f950_call((int)piVar1);
    piVar1[0x24] = iVar4;
    *piVar1 = 3;
    break;
  case 3:
    lVar6 = FUN_00195460(piVar1[0x24]);
    if (lVar6 == 0) {
      *piVar1 = 4;
    }
    break;
  case 4:
    return 0xffffffff;
  }
  uVar5 = 0;

  return uVar5;

}
#define FUN_003a1c00(...) FUN_003a1c00(__VA_ARGS__)
#undef FUN_003a1f30
// FUN_003A1F30


void FUN_003a1f30(int param_1)



{

  int iVar2;
  int iVar1;


  

  iVar1 = *(int *)(param_1 + 0x3c);

  for (iVar2 = 0; iVar2 < *(int *)(iVar1 + 0x70); iVar2 = iVar2 + 1) {

    if (*(int *)(iVar1 + iVar2 * 4 + 0x68) != 0) {

      FUN_004d0f00(*(int *)(iVar1 + iVar2 * 4 + 0x68));

    }

  }

  for (iVar2 = 0; iVar2 < 7; iVar2 = iVar2 + 1) {

    if (*(u16 *)(iVar1 + iVar2 * 2 + 0xec) != 0) {

      FUN_003b7090(*(u16 *)(iVar1 + iVar2 * 2 + 0xec));

    }

  }

  if (*(int *)(iVar1 + 0x10) != 0) {

    FUN_00100ec0(*(int *)(iVar1 + 0x10));

    *(u32 *)(iVar1 + 0x10) = 0;

  }


  if (*(int *)(iVar1 + 0x14) != 0) {
    if (*(int *)(iVar1 + 0x60) != 0) {

      FUN_00133d30(*(int *)(iVar1 + 0x60),*(int *)(iVar1 + 0x14));

    }

    FUN_00100ec0(*(u32 *)(iVar1 + 0x14));

    *(u32 *)(iVar1 + 0x14) = 0;

  }

  if (*(int *)(iVar1 + 0x18) != 0) {

    if (*(int *)(iVar1 + 100) != 0) {
      FUN_00133d30(*(int *)(iVar1 + 0x64),*(int *)(iVar1 + 0x18));

    }

    FUN_00100ec0(*(u32 *)(iVar1 + 0x18));

    *(u32 *)(iVar1 + 0x18) = 0;

  }

  FUN_0039ee80_typed((int *)(iVar1 + 0x1c));

  FUN_0039ee80_typed((int *)(iVar1 + 0x3c));

  if (*(int *)(iVar1 + 0xe8) != 0) {
    (*(void (**)())0x0096017c)(*(int *)(iVar1 + 0xe8));

  }

  (*(void (**)())0x0096017c)(iVar1);


  return;

}
#define FUN_003a1f30(...) FUN_003a1f30(__VA_ARGS__)
#undef FUN_003a2090
// FUN_003A2090


void FUN_003a2090(u64 param_1,u16 param_2,u32 param_3,u16 param_4)



{

  int iVar2;
  u32 uVar1;

  

  uVar1 = (*DAT_00960178_abs)(0xfc,0x40000);

  FUN_00521408(uVar1,0,0xfc);

  iVar2 = (int)uVar1;

  *(u16 *)(iVar2 + 4) = param_2;

  *(u32 *)(iVar2 + 8) = param_3;

  *(u16 *)(iVar2 + 0xc) = param_4;

  FUN_00194b20_evtmsg_typed(param_1,(const char *)(DAT_006a0000 + 0x1a58),0x10,(u64 (*)(int))FUN_003a1c00,FUN_003a1f30,(void *)uVar1);

  return;

}
#define FUN_003a2090(...) FUN_003a2090(__VA_ARGS__)
