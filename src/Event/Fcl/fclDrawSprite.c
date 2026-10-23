#include "temporary.h"
typedef int (*code)();
/* FUSION_EXACT_PROTOS */
void FUN_0040e300(u32 param_1,u32 param_2);
void FUN_0040e360(void);
void FUN_0040e390(void);
void FUN_0040e3c0(int param_2,int param_3,float param_1,u8 param_4,int param_5,int param_6);
void FUN_0040e3f0(float param_1,float param_2,float param_3,float param_4,int param_5,int param_6,
                   u8 param_7,int param_8,int param_9,int param_10,int param_11);
#pragma alias FUN_0040e3f0_i2f1i3f3 FUN_0040e3f0
extern void FUN_0040e3f0_i2f1i3f3(int param_5,int param_6,float param_1,u8 param_7,int param_8,
                                  int param_9,int param_10,int param_11,float param_2,
                                  float param_3,float param_4);
void FUN_0040e420(float param_1,float param_2,float param_3,float param_4,int param_5,int param_6,
                   u8 param_7,int param_8,int param_9,int param_10,int param_11);
u32 FUN_0040e450(int param_1);
u32 FUN_0040e4f0(int *param_1);
void FUN_0040e580(u32 param_1);
u64 FUN_0040e610(int param_2,int param_3,float param_1,u8 param_4,int param_5,int param_6,int param_7);
u64 FUN_0040e710(int param_5, int param_6, float param_1, int param_7, int param_8, int param_9, int param_10, int param_11, int param_12, float param_2, float param_3, float param_4);
#pragma alias FUN_0040e710_i2f1u8i4i3f FUN_0040e710
extern void FUN_0040e710_i2f1u8i4i3f(int param_5,int param_6,float param_1,u8 param_7,
                                     int param_8,int param_9,int param_10,int param_11,
                                     int param_12,float param_2,float param_3,float param_4);
#pragma alias FUN_0040e930_i2f1u8i4i3f FUN_0040e930
extern void FUN_0040e930_i2f1u8i4i3f(int param_5,int param_6,float param_1,u8 param_7,
                                     int param_8,int param_9,int param_10,int param_11,
                                     int param_12,float param_2,float param_3,float param_4);
u64 FUN_0040e930(int param_5,int param_6,float param_1,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,float param_2,float param_3,float param_4);
#pragma alias fclDrawSpriteCreate_i FUN_001158b0
extern u32 fclDrawSpriteCreate_i(int param_1, u32 param_2, int param_3);
#pragma alias fclDrawSpriteEmit FUN_0040e3c0
extern void fclDrawSpriteEmit(int param_1,int param_2,float param_3,int param_4,int param_5,int param_6);
s32 FUN_0040eb50(float param_1,int param_2,int param_3,u8 param_4,int param_5,const void *param_6,int param_7);
s32 FUN_0040ebc0(float param_1,int param_2,int param_3,int param_4,int param_5,const void *param_6,int param_7);
void FUN_0040ec20(u32 param_1,int param_2,u32 param_3,u32 param_4,u32 param_5,u64 param_6,u32 param_7,int param_8);
#pragma alias FUN_0040ec20_typed FUN_0040ec20
void FUN_0040eef0(int param_2,int param_3,float param_1,int param_4,int param_5,

                  int param_6);
u32 FUN_0040ec50(float param_1,int param_2,u32 param_3,u32 param_4,
                 u32 param_5,u8 *param_6,u32 param_7,int param_8,code param_9,
                 u32 param_10);
u32 FUN_0040f030(int param_1,int param_2,int param_3);
u32 FUN_0040f430(int param_1,int param_2);
u32 FUN_0040f5d0(int param_1,int param_2,int param_3);
u64 FUN_0040fab0(u64 param_1,int param_2);
u64 FUN_0040fb90(u64 param_1,int param_2,int param_3);
void FUN_00521408(void *destination,s32 value,u32 size);
extern void *H_Cdvd_CacheFindFile(const char *path,u32 *fileSize);
extern u32 DAT_006af960[];
extern u32 DAT_006af980[];
float DAT_006af9d8;
float DAT_006af9dc;
float DAT_006af9e0;
#pragma alias DAT_006af9d8_abs DAT_006af9d8
#pragma alias DAT_006af9dc_abs DAT_006af9dc
#pragma alias DAT_006af9e0_abs DAT_006af9e0
extern float DAT_006af9d8_abs[];
extern float DAT_006af9dc_abs[];
extern float DAT_006af9e0_abs[];
typedef struct {
  float x;
  float y;
  float z;
} FclDrawSpriteVec3;
u32 DAT_006af9a0;
#pragma alias DAT_006af9a0_abs DAT_006af9a0
extern u32 DAT_006af9a0_abs[];
u16 DAT_006af9c0[];
typedef short DAT_006af9c0_abs_t;
#pragma alias DAT_006af9c0_abs DAT_006af9c0
extern DAT_006af9c0_abs_t DAT_006af9c0_abs[];
u32 DAT_006af9f0;
u32 DAT_006afa70;
int DAT_006afaf0[];
u32 DAT_006afb10;
#pragma alias DAT_006afb10_abs DAT_006afb10
extern u32 DAT_006afb10_abs[];
extern u32 DAT_007ce69c;
extern s32 DAT_007ce6a0;
extern code DAT_00960178[];
extern code DAT_0096017c[];
#pragma alias DAT_00960178_abs DAT_00960178
extern code DAT_00960178_abs[];
#pragma alias DAT_0096017c_abs DAT_0096017c
extern code DAT_0096017c_abs[];
#include "Kosaka/k_assert.h"

#pragma alias FUN_0040e3c0_y2 FUN_0040e3c0_y2
#pragma alias FUN_0040e3f0_y2 FUN_0040e3f0_y2
















#pragma opt_loop_invariants off





// W418 negative: float-only signature without direct callback typing measured nd467/obj652 -> nd483/obj680 (window672), over-window; reverted.
// W418 negative: fully typed draw callback measured nd411/obj664 -> nd430/obj644 (window672); nd increased and was reverted.
// W418 probe setup: float+pointer with code* and direct-pointer signature with an uncast callback literal failed compilation; no measurement.
// FUN_0040EC50


asm u32 FUN_0040ec50(float param_1,int param_2,u32 param_3,u32 param_4,
                 u32 param_5,u8 *param_6,u32 param_7,int param_8,code param_9,
                 u32 param_10)
{
  .set noreorder
  .word 0x27bdfef0
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a82d
  .word 0xafa500ec
  .word 0x46006506
  .word 0xafa600e8
  .word 0xafa700e4
  .word 0x0100b82d
  .word 0x0120b02d
  .word 0xafaa00e0
  .word 0xafab00dc
  .word 0x0000982d
  .word 0x0000882d
  .word 0x27a400f0
  .word 0x0000282d
  .word 0x24060020
  .word 0x0c148502
  .word 0x00000000
  .word 0x02e0202d
  .word 0x0c1490e2
  .word 0x00000000
  .word 0x0040802d
  .word 0x8fa200e0
  .word 0x02021018
  .word 0x7fa200c0
  .word 0x0000902d
  .word 0x0000a02d
  .word 0x32c20008
  .word 0x7fa200b0
  .word 0x02f22021
  .word 0x80830000
  .word 0x24020020
  .word 0x14620007
  .word 0x00000000
  .word 0x2403ffff
  .word 0x029d1021
  .word 0xa04300f0
  .word 0x26520001
  .word 0x1000002c
  .word 0x00000000
  .word 0x7ba200b0
  .word 0x10400011
  .word 0x00000000
  .word 0x2e010004
  .word 0x1420000e
  .word 0x00000000
  .word 0x1240000c
  .word 0x00000000
  .word 0x02121823
  .word 0x24020003
  .word 0x0062001b
  .word 0x00001010
  .word 0x14400006
  .word 0x00000000
  .word 0x2403000a
  .word 0x029d1021
  .word 0xa04300f0
  .word 0x26310001
  .word 0x26940001
  .word 0x029d1021
  .word 0x245e00f0
  .word 0x80820000
  .word 0x2442ffd0
  .word 0xa3c20000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x04410006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484f950
  .word 0x24050115
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x83c20000
  .word 0x2842000a
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484f950
  .word 0x24050116
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x26520001
  .word 0x26940001
  .word 0x0250102b
  .word 0x1440ffc7
  .word 0x00000000
  .word 0x00111040
  .word 0x00511021
  .word 0x00021840
  .word 0x7ba200c0
  .word 0x00438021
  .word 0x32c20001
  .word 0x10400004
  .word 0x00000000
  .word 0x02b0a823
  .word 0x10000006
  .word 0x00000000
  .word 0x32c20002
  .word 0x10400003
  .word 0x00000000
  .word 0x00101042
  .word 0x02a2a823
  .word 0x0000902d
  .word 0x10000020
  .word 0x00000000
  .word 0x025d1021
  .word 0x245100f0
  .word 0x82280000
  .word 0x2402ffff
  .word 0x1102000c
  .word 0x00000000
  .word 0x02b32021
  .word 0x8fa500ec
  .word 0x4600a306
  .word 0x8fa600e8
  .word 0x8fa700e4
  .word 0x0240482d
  .word 0x0280502d
  .word 0x8fab0110
  .word 0x8fa200dc
  .word 0x0040f809
  .word 0x00000000
  .word 0x82220000
  .word 0x2403000a
  .word 0x14430004
  .word 0x00000000
  .word 0x26730005
  .word 0x10000007
  .word 0x00000000
  .word 0x82220001
  .word 0x14430002
  .word 0x00000000
  .word 0x26730001
  .word 0x8fa200e0
  .word 0x02629821
  .word 0x26520001
  .word 0x0254102a
  .word 0x1440ffdf
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf00a0
  .word 0x7bbe0090
  .word 0x7bb70080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0110
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0040EEF0


void FUN_0040eef0(int param_2,int param_3,float param_1,int param_4,int param_5,

                 int param_6)



{

  u32 uVar1;
  u32 uVar2;

  u32 maestro;

  u32 *puVar5;
  u32 *puVar4;
  int iVar3;

  u32 auStack_20 [8];

  

  puVar5 = DAT_006af9a0_abs;

  puVar4 = auStack_20;

  iVar3 = 5;

  do {

    uVar1 = *puVar5;

    puVar5 = puVar5 + 1;

    iVar3 = iVar3 + -1;

    *puVar4 = uVar1;

    puVar4 = puVar4 + 1;

  } while (0 < iVar3);

  maestro = H_Maestro_001120a0(auStack_20[param_5]);

  if (param_5 - 3U < 2) {

    param_6 = param_6 + 0xb;

  }

  uVar2 = fclDrawSpriteCreate(0,maestro,param_6);

  iVar3 = (int)uVar2;

  *(float *)(iVar3 + 0x10) = (float)param_2;

  *(float *)(iVar3 + 0x14) = (float)param_3;

  *(float *)(iVar3 + 0x2c) = param_1;

  *(u8 *)(iVar3 + 0x19) = 0xff - (param_4 & 0xff);

  *(char *)(iVar3 + 0x30) = (char)((u32)param_4 >> 0x18);

  *(char *)(iVar3 + 0x31) = (char)((u32)param_4 >> 0x10);

  *(char *)(iVar3 + 0x32) = (char)((u32)param_4 >> 8);

  func_001127d0(uVar2,1);

  FUN_00115980(uVar2);

  return;

}

// FUN_0040F030


asm u32 FUN_0040f030(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00c0902d
  .word 0x8cb0000c
  .word 0x3c06006b
  .word 0x24c6f9c0
  .word 0x27a50040
  .word 0x24040006
  .word 0x84c30000
  .word 0x84c20002
  .word 0x24c60004
  .word 0x2484ffff
  .word 0xa4a30000
  .word 0xa4a20002
  .word 0x24a50004
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x0c0f9b5c
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x24020002
  .word 0x100000dc
  .word 0x00000000
  .word 0x12400046
  .word 0x00000000
  .word 0x86430006
  .word 0x24020004
  .word 0x10620038
  .word 0x00000000
  .word 0x24020002
  .word 0x1062003f
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000003a
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x24060028
  .word 0x0c148502
  .word 0x00000000
  .word 0x24020140
  .word 0xa6020008
  .word 0xa6020004
  .word 0x8e22001c
  .word 0x000210c0
  .word 0x005d1021
  .word 0x84420040
  .word 0xa6020006
  .word 0x8e22001c
  .word 0x000210c0
  .word 0x005d1021
  .word 0x84420042
  .word 0xa602000e
  .word 0x8e020000
  .word 0x34420001
  .word 0xae020000
  .word 0x2403fff7
  .word 0x00431024
  .word 0xae020000
  .word 0x24020280
  .word 0xa602001c
  .word 0xa6020018
  .word 0x8e22001c
  .word 0x000210c0
  .word 0x005d1021
  .word 0x84420040
  .word 0xa602001a
  .word 0x24020030
  .word 0xa6020024
  .word 0x8e22001c
  .word 0x000210c0
  .word 0x005d1021
  .word 0x84420042
  .word 0xa6020022
  .word 0x8e020014
  .word 0x34420004
  .word 0xae020014
  .word 0x00431024
  .word 0xae020014
  .word 0xae000028
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420002
  .word 0xae020000
  .word 0x34420008
  .word 0xae020000
  .word 0x8e020014
  .word 0x34420002
  .word 0xae020014
  .word 0x34420008
  .word 0xae020014
  .word 0x8e030028
  .word 0x24020002
  .word 0x10620090
  .word 0x00000000
  .word 0x24020001
  .word 0x1062008d
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000089
  .word 0x00000000
  .word 0x0000382d
  .word 0x0000402d
  .word 0x240afffd
  .word 0x2403000a
  .word 0x2402fffe
  .word 0x2405fffb
  .word 0x24040280
  .word 0x10000075
  .word 0x00000000
  .word 0x00083080
  .word 0x00c83021
  .word 0x00063080
  .word 0x02063021
  .word 0x8ccb0000
  .word 0x31690004
  .word 0x11200018
  .word 0x00000000
  .word 0x31690008
  .word 0x11200004
  .word 0x00000000
  .word 0x24e70001
  .word 0x10000066
  .word 0x00000000
  .word 0x84c90010
  .word 0x2529ffff
  .word 0xa4c90010
  .word 0x00094c3c
  .word 0x00094c3f
  .word 0x1d20005f
  .word 0x00000000
  .word 0xa4c00010
  .word 0x8cc90000
  .word 0x01254824
  .word 0xacc90000
  .word 0x35290001
  .word 0xacc90000
  .word 0xa4c40008
  .word 0xa4c40004
  .word 0x10000055
  .word 0x00000000
  .word 0x84c90010
  .word 0x25290001
  .word 0xa4c90010
  .word 0x84c90004
  .word 0x29210065
  .word 0x10200007
  .word 0x00000000
  .word 0x8ccb0000
  .word 0x31690002
  .word 0x15200003
  .word 0x00000000
  .word 0x35690002
  .word 0xacc90000
  .word 0x84cb0010
  .word 0x000b4880
  .word 0x012b4821
  .word 0x00095843
  .word 0x05210003
  .word 0x00000000
  .word 0x25290001
  .word 0x00095843
  .word 0x84c90008
  .word 0x012b4823
  .word 0xa4c90004
  .word 0x8ccb0000
  .word 0x31690001
  .word 0x11200019
  .word 0x00000000
  .word 0x84c90012
  .word 0x25290001
  .word 0xa4c90012
  .word 0x84cb000e
  .word 0x00094c3c
  .word 0x00094c3f
  .word 0x01694818
  .word 0x0123001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00004812
  .word 0xa4c9000c
  .word 0x84c90012
  .word 0x2929000a
  .word 0x15200029
  .word 0x00000000
  .word 0x8cc90000
  .word 0x01224824
  .word 0xacc90000
  .word 0x84c9000e
  .word 0xa4c9000c
  .word 0xa4c00012
  .word 0x10000021
  .word 0x00000000
  .word 0x31690002
  .word 0x1120001e
  .word 0x00000000
  .word 0x84c90012
  .word 0x25290001
  .word 0xa4c90012
  .word 0x84cb000e
  .word 0x00094c3c
  .word 0x00094c3f
  .word 0x01694818
  .word 0x0123001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00004812
  .word 0x01694823
  .word 0xa4c9000c
  .word 0x84c90012
  .word 0x2929000a
  .word 0x1520000d
  .word 0x00000000
  .word 0x8cc90000
  .word 0x012a4824
  .word 0xacc90000
  .word 0x35290004
  .word 0xacc90000
  .word 0xa4c0000c
  .word 0xa4c00012
  .word 0x8e29001c
  .word 0x000948c0
  .word 0x013d4821
  .word 0x85290044
  .word 0xa4c90010
  .word 0x25080001
  .word 0x29060002
  .word 0x14c0ff8a
  .word 0x00000000
  .word 0x28e20002
  .word 0x14400006
  .word 0x00000000
  .word 0x24020001
  .word 0xae020028
  .word 0x24020002
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0040F430


u32 FUN_0040f430(int param_1,int param_2)



{

  int iVar1;

  u32 uVar2;
  int iVar3;

  u32 lVar4;


  int iVar5;

  FclDrawSpriteVec3 auStack_10;

  

  iVar1 = *(int *)(param_2 + 0xc);

  auStack_10 = *(FclDrawSpriteVec3 *)DAT_006af9d8_abs;


  lVar4 = FUN_003e6d70();

  if (lVar4 == 0) {

    uVar2 = 2;

  }

  else {

    switch (*(int *)(param_1 + 0x1c)) {
    case 2:
      for (iVar5 = 0; iVar5 < 2; iVar5 = iVar5 + 1) {
        iVar3 = iVar1 + iVar5 * 0x14;

        fclDrawSpriteEmit(*(short *)(iVar3 + 4),*(short *)(iVar3 + 6),0.0f,

                          *(u8 *)(iVar3 + 0xc),0x56,0);

        fclDrawSpriteEmit(*(short *)(iVar3 + 4),*(short *)(iVar3 + 6),0.0f,

                          *(u8 *)(iVar3 + 0xc),0x57,0);

        fclDrawSpriteEmit(*(short *)(iVar3 + 4),*(short *)(iVar3 + 6),0.0f,

                          *(u8 *)(iVar3 + 0xc),0x58,0);

        fclDrawSpriteEmit(*(short *)(iVar3 + 4),*(short *)(iVar3 + 6),0.0f,

                          *(u8 *)(iVar3 + 0xc),0x59,0);
      }
      break;
    default:
      for (iVar5 = 0; iVar5 < 2; iVar5 = iVar5 + 1) {
        iVar3 = iVar1 + iVar5 * 0x14;

        fclDrawSpriteEmit(*(short *)(iVar3 + 4),*(short *)(iVar3 + 6),0.0f,

                          *(u8 *)(iVar3 + 0xc),((u32 *)&auStack_10)[*(int *)(param_1 + 0x1c)],0);
      }
      break;
    }

    uVar2 = 0;

  }

  return uVar2;

}

// FUN_0040F5D0
#pragma opt_lifetimes on


asm u32 FUN_0040f5d0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdfee0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8cb0000c
  .word 0x3c07006b
  .word 0x24e7f9f0
  .word 0x27a500a0
  .word 0x2404000f
  .word 0x8ce30000
  .word 0x8ce20004
  .word 0x24e70008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c07006b
  .word 0x24e7fa70
  .word 0x27a50020
  .word 0x2404000f
  .word 0x8ce30000
  .word 0x8ce20004
  .word 0x24e70008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x10c0001e
  .word 0x00000000
  .word 0x84c30006
  .word 0x24020004
  .word 0x10620012
  .word 0x00000000
  .word 0x24020002
  .word 0x10620017
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a500a0
  .word 0x2406003c
  .word 0x0c148494
  .word 0x00000000
  .word 0xa600003c
  .word 0xa600003e
  .word 0x10000009
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a50020
  .word 0x2406003c
  .word 0x0c148494
  .word 0x00000000
  .word 0x24020002
  .word 0xa602003c
  .word 0xa600003e
  .word 0x8603003c
  .word 0x24020002
  .word 0x1062007a
  .word 0x00000000
  .word 0x24020001
  .word 0x106200ec
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000e8
  .word 0x00000000
  .word 0x8602003e
  .word 0x24420001
  .word 0xa602003e
  .word 0x0000302d
  .word 0x0000382d
  .word 0x10000060
  .word 0x00000000
  .word 0x00071040
  .word 0x00471021
  .word 0x00024080
  .word 0x02082821
  .word 0x84a40006
  .word 0x8603003e
  .word 0x0064102a
  .word 0x14400056
  .word 0x00000000
  .word 0x00642023
  .word 0x011d1021
  .word 0x244300a0
  .word 0x24620042
  .word 0x846a0042
  .word 0x0144082a
  .word 0x1420004d
  .word 0x00000000
  .word 0x84690000
  .word 0x8468003c
  .word 0x01094023
  .word 0x00884018
  .word 0x44880000
  .word 0x00000000
  .word 0x46800060
  .word 0x448a0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x44890000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x44080000
  .word 0x00000000
  .word 0xa4a80000
  .word 0x84690002
  .word 0x8468003e
  .word 0x01094023
  .word 0x70884018
  .word 0x44880000
  .word 0x00000000
  .word 0x46800060
  .word 0x84480000
  .word 0x44880000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x44890000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x44080000
  .word 0x00000000
  .word 0xa4a80002
  .word 0x84690004
  .word 0x84680040
  .word 0x01094023
  .word 0x00884018
  .word 0x44880000
  .word 0x00000000
  .word 0x46800060
  .word 0x84480000
  .word 0x44880000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x44890000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x44080000
  .word 0x00000000
  .word 0xa4a80004
  .word 0xc4620008
  .word 0xc4600044
  .word 0x46020041
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010042
  .word 0x84420000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0x00000000
  .word 0x46001000
  .word 0xe4a00008
  .word 0x10000002
  .word 0x00000000
  .word 0x24c60001
  .word 0x24e70001
  .word 0x28e20005
  .word 0x1440ff9f
  .word 0x00000000
  .word 0x28c20005
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0xa602003c
  .word 0xa600003e
  .word 0x0000102d
  .word 0x10000077
  .word 0x00000000
  .word 0x8602003e
  .word 0x24420001
  .word 0xa602003e
  .word 0x0000382d
  .word 0x0000302d
  .word 0x10000060
  .word 0x00000000
  .word 0x00061040
  .word 0x00461021
  .word 0x00024080
  .word 0x02082821
  .word 0x84a40006
  .word 0x8603003e
  .word 0x0064102a
  .word 0x14400056
  .word 0x00000000
  .word 0x00642023
  .word 0x011d1021
  .word 0x24430020
  .word 0x24620042
  .word 0x846a0042
  .word 0x0144082a
  .word 0x1420004d
  .word 0x00000000
  .word 0x84690000
  .word 0x8468003c
  .word 0x01094023
  .word 0x00884018
  .word 0x44880000
  .word 0x00000000
  .word 0x46800060
  .word 0x448a0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x44890000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x44080000
  .word 0x00000000
  .word 0xa4a80000
  .word 0x84690002
  .word 0x8468003e
  .word 0x01094023
  .word 0x70884018
  .word 0x44880000
  .word 0x00000000
  .word 0x46800060
  .word 0x84480000
  .word 0x44880000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x44890000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x44080000
  .word 0x00000000
  .word 0xa4a80002
  .word 0x84690004
  .word 0x84680040
  .word 0x01094023
  .word 0x00884018
  .word 0x44880000
  .word 0x00000000
  .word 0x46800060
  .word 0x84480000
  .word 0x44880000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x44890000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x44080000
  .word 0x00000000
  .word 0xa4a80004
  .word 0xc4620008
  .word 0xc4600044
  .word 0x46020041
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010042
  .word 0x84420000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0x00000000
  .word 0x46001000
  .word 0xe4a00008
  .word 0x10000002
  .word 0x00000000
  .word 0x24e70001
  .word 0x24c60001
  .word 0x28c20005
  .word 0x1440ff9f
  .word 0x00000000
  .word 0x28e20005
  .word 0x14400007
  .word 0x00000000
  .word 0x24020001
  .word 0xa602003c
  .word 0xa600003e
  .word 0x24020002
  .word 0x10000005
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0120
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma schedule reset
#pragma opt_lifetimes reset

// FUN_0040FAB0


u64 FUN_0040fab0(u64 param_1,int param_2)



{

  int iVar1;

  int iVar2;

  int iVar3;

  short *psVar4;

  int *piVar7;

  int *piVar6;

  int copyCount;

  int index;

  int aiStack_20 [8];

  

  iVar1 = *(int *)(param_2 + 0xc);

  piVar7 = (int *)&DAT_006afaf0;

  piVar6 = aiStack_20;

  copyCount = 4;

  do {

    iVar2 = *piVar7;

    iVar3 = piVar7[1];

    piVar7 = piVar7 + 2;

    copyCount = copyCount + -1;

    *piVar6 = iVar2;

    piVar6[1] = iVar3;

    piVar6 = piVar6 + 2;

  } while (0 < copyCount);

  for (index = 0; index < 8; index = index + 1) {
    psVar4 = (short *)(iVar1 + aiStack_20[index] * 0xc);
    FUN_0040e3f0_i2f1i3f3(*psVar4 + 0x10, psVar4[1] + 0xd, 0.0f,
                          (u8)psVar4[2], index + 0x5a, 0, 0, 0, 0.0f,
                          *(float *)(psVar4 + 4), *(float *)(psVar4 + 4));

  }

  return 0;

}

#pragma push
// FUN_0040FB90


asm u64 FUN_0040fb90(u64 param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8cb0000c
  .word 0x3c07006b
  .word 0x24e7fb10
  .word 0x27a50020
  .word 0x24040010
  .word 0x8ce30000
  .word 0x8ce20004
  .word 0x24e70008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x10c00047
  .word 0x00000000
  .word 0x84c20006
  .word 0x2c410009
  .word 0x10200040
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463bf40
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420001
  .word 0xae020000
  .word 0x24020002
  .word 0xa6020018
  .word 0xa600001a
  .word 0x10000031
  .word 0x00000000
  .word 0x26040008
  .word 0x27a50020
  .word 0x24060010
  .word 0x0c148494
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fffd
  .word 0x00621024
  .word 0xae020000
  .word 0x34420001
  .word 0xae020000
  .word 0xae000004
  .word 0xa6000018
  .word 0xa600001a
  .word 0x10000021
  .word 0x00000000
  .word 0x26040008
  .word 0x27a50030
  .word 0x24060010
  .word 0x0c148494
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fffd
  .word 0x00621024
  .word 0xae020000
  .word 0x34420001
  .word 0xae020000
  .word 0x24020001
  .word 0xae020004
  .word 0xa6000018
  .word 0xa600001a
  .word 0x10000010
  .word 0x00000000
  .word 0x26040008
  .word 0x27a50040
  .word 0x24060010
  .word 0x0c148494
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fffd
  .word 0x00621024
  .word 0xae020000
  .word 0x34420001
  .word 0xae020000
  .word 0x24020002
  .word 0xae020004
  .word 0xa6000018
  .word 0xa600001a
  .word 0x0000102d
  .word 0x10000128
  .word 0x00000000
  .word 0x86030018
  .word 0x24020002
  .word 0x106200f6
  .word 0x00000000
  .word 0x24080001
  .word 0x106800a3
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000011c
  .word 0x00000000
  .word 0x8602001a
  .word 0x24420001
  .word 0xa602001a
  .word 0x0000302d
  .word 0x8e070004
  .word 0x26050008
  .word 0x8604000e
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x0064102a
  .word 0x1440005e
  .word 0x00000000
  .word 0x00642023
  .word 0x00071100
  .word 0x005d1821
  .word 0x24620066
  .word 0x84470000
  .word 0x00e4082a
  .word 0x14200055
  .word 0x00000000
  .word 0x8e070000
  .word 0x34e70002
  .word 0xae070000
  .word 0x24670020
  .word 0x84e80000
  .word 0x84670060
  .word 0x00e83823
  .word 0x00873818
  .word 0x44870000
  .word 0x00000000
  .word 0x46800060
  .word 0x84470000
  .word 0x44870000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x44880000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x44070000
  .word 0x00000000
  .word 0xa4a70000
  .word 0x24670022
  .word 0x84e80000
  .word 0x84670062
  .word 0x00e83823
  .word 0x70873818
  .word 0x44870000
  .word 0x00000000
  .word 0x46800060
  .word 0x84470000
  .word 0x44870000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x44880000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x44070000
  .word 0x00000000
  .word 0xa4a70002
  .word 0x24670024
  .word 0x84e80000
  .word 0x84670064
  .word 0x00e83823
  .word 0x00873818
  .word 0x44870000
  .word 0x00000000
  .word 0x46800060
  .word 0x84470000
  .word 0x44870000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x44880000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x44070000
  .word 0x00000000
  .word 0xa4a70004
  .word 0x24670028
  .word 0xc4e20000
  .word 0xc4600068
  .word 0x46020041
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010042
  .word 0x84420000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0x00000000
  .word 0x46001000
  .word 0xe4a00008
  .word 0x10000002
  .word 0x00000000
  .word 0x0100302d
  .word 0x10c00031
  .word 0x00000000
  .word 0x24020001
  .word 0xa6020018
  .word 0x8e020000
  .word 0x30420001
  .word 0x10400015
  .word 0x00000000
  .word 0x96030016
  .word 0x00031100
  .word 0x00431823
  .word 0x00031080
  .word 0x00621021
  .word 0x000210c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3402ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa602001a
  .word 0x10000017
  .word 0x00000000
  .word 0x96030016
  .word 0x00031100
  .word 0x00431823
  .word 0x00031080
  .word 0x00621021
  .word 0x000210c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3402ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x3c024416
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa602001a
  .word 0x0000102d
  .word 0x1000007f
  .word 0x00000000
  .word 0x8602001a
  .word 0x24420001
  .word 0xa602001a
  .word 0x0002143c
  .word 0x0002143f
  .word 0x28420258
  .word 0x14400002
  .word 0x00000000
  .word 0xa600001a
  .word 0x8e020000
  .word 0x30420001
  .word 0x10400020
  .word 0x00000000
  .word 0x8603001a
  .word 0x00031400
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024416
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x3063ffff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x3063ffff
  .word 0xa6030016
  .word 0x10000052
  .word 0x00000000
  .word 0x8603001a
  .word 0x00031400
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024416
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3402ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010041
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x3063ffff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x3063ffff
  .word 0xa6030016
  .word 0x1000002e
  .word 0x00000000
  .word 0x8603001a
  .word 0x24630001
  .word 0xa603001a
  .word 0x00031c3c
  .word 0x00031c3f
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xc6020010
  .word 0x46001002
  .word 0x3c034120
  .word 0x44830800
  .word 0x00000000
  .word 0x46010003
  .word 0x46001001
  .word 0xe6000010
  .word 0x8604000c
  .word 0x8603001a
  .word 0x00831818
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010043
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010001
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0xa603000c
  .word 0x8603001a
  .word 0x2863000a
  .word 0x14600008
  .word 0x00000000
  .word 0x8e040000
  .word 0x2403fffd
  .word 0x00831824
  .word 0xae030000
  .word 0xa600001a
  .word 0x10000005
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#undef asStack_80
#undef afStack_7c
#undef auStack_70
#undef auStack_60
#undef afStack_40
#pragma pop


typedef int (*code)();
typedef void (*FclShopBgCallback)(float, float, float, int, int, int, int, int, int, int, int);
typedef struct {
    u32 *callbacks;
    int count;
} FclShopBgCallbackPair;

typedef union {
    float floats[4];
    u32 words[4];
} FclShopBgHeader;
typedef struct {
    FclShopBgHeader header;
    s16 table2[24];
    s16 table1[40];
} FclShopBgLocal;
u32 H_Maestro_CreateTask(u32 parent,u32 priority,u32 path);
u32 H_Maestro_FinishedInit(u32 task);
void H_Maestro_SetShouldLoop(u32 task,u32 shouldLoop);
void H_Maestro_00111f20(u32 task,u32 value);
void H_Maestro_00111c50(u32 task);
void H_Maestro_00111cb0(u32 task);
void H_Maestro_SetAlphaMult(float alpha,u32 task);
void func_00111f10(u32 task,u32 value);
void func_00111ca0(u32 task,u32 value);
float fGpffff80d0;
float fGpffff8110;
float fGpffff8168;
float fGpffff81f8;
float fGpffff81fc;
float fGpffff8204;
float fGpffffad18;
u32 uGpffff8208;
u32 uGpffffad1c;
#pragma alias fGpffffad1c uGpffffad1c
extern float fGpffffad1c;
u32 DAT_007cda50;

#pragma alias sinf_fclShop sinf
extern f32 sinf_fclShop(f32);
#pragma alias cosf_fclShop cosf
extern f32 cosf_fclShop(f32);
/* FUSION_EXACT_PROTOS */
void FUN_0040e3c0_y2(float, s32, s32, u8, s32, s32);
#pragma alias FUN_0040e3c0_i FUN_0040e3c0_y2
void FUN_0040e3c0_i(s32, s32, float, u8, s32, s32);
#pragma alias FUN_0040e3f0_typed FUN_0040e3f0_y2
void FUN_0040e3f0_typed(float, float, float, float, s32, s32, u8, s32, s32, s32, s32);
#pragma alias FUN_003b2cb0_typed FUN_003b2cb0
void FUN_003b2cb0_typed(float, s32, s32, u32, u32, u32, u32, u32, u32);
#pragma alias FUN_003b2cb0_i FUN_003b2cb0
void FUN_003b2cb0_i(s32, s32, float, u32, u32, u32, u32, u32, u32);
void FUN_003eec60(s32);
u64 FUN_004101b0(u64 param_1,int param_2);
u32 FUN_004105e0(int param_1, int param_2, int param_3);
u64 FUN_00410a10(u64 param_1,int param_2);
u32 FUN_00410d30(int param_1,int param_2);
u32 FUN_00410e70(u32 param_1,int param_2,int param_3);
u32 FUN_004110f0(u64 param_1,u64 param_2,int param_3);
u32 FUN_00411190(u64 param_1,u64 param_2,u32 param_3);
u32 FUN_00411340(u64 param_1,u64 param_2,s16 *param_3);
u32 FUN_004113f0(u64 param_1,int param_2,int param_3);
u64 FUN_00411710(u64 param_1,int param_2);
u32 FUN_00411790(u64 param_1,int param_2,int param_3);
u64 FUN_00411ee0(u64 param_1,int param_2);
u32 FUN_004120a0(u64 param_1, int param_2, int param_3);
u64 FUN_00412580(u64 param_1,int param_2);
u32 FUN_00412610(u64 param_1, int param_2, long param_3);
u64 FUN_00412af0(u64 param_1,int param_2);
u32 FUN_00412bc0(u64 param_1, int param_2, long param_3);
u64 FUN_00413010(u64 param_1,int param_2);
u32 FUN_004131a0(u64 param_1, int param_2, int param_3);
u64 FUN_00413680(u64 param_1,int param_2);
u64 FUN_004138e0(u64 param_1,int param_2,int param_3);
u64 FUN_00413b10(u64 param_1,int param_2);
u32 FUN_00413b70(u64 param_1, int param_2, int param_3);
void FUN_00414100(u64 param_1,u64 param_2,int param_3,int param_4,u64 param_5, u32 param_6);
void FUN_004141e0(u64 param_1,u64 param_2,int param_3,int param_4, int param_5,u32 param_6);
void FUN_00414280(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_00414320(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_00414500(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_004145f0(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_004146b0(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_00414770(u64 param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6);
void FUN_004148b0(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_00414950(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_004149f0(u64 param_1,u64 param_2,int param_3,int param_4,u64 param_5, u32 param_6);
void FUN_00414ad0(u64 param_1,u64 param_2,int param_3,int param_4,u64 param_5, u32 param_6);
void FUN_00414bd0(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_00414c70(u64 param_1,u64 param_2,int param_3,int param_4,u64 param_5, u32 param_6);
void FUN_00414d70(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
u64 FUN_00414e10(int param_1,int param_2);
u32 FUN_00414fe0(u64 param_1,int param_2,long param_3);
void FUN_004154e0(u64 param_1,u64 param_2,int param_3,int param_4, int param_5,int param_6);
void FUN_00415650(u64 param_1,u64 param_2,int param_3,int param_4, int param_5,int param_6);
void FUN_004157c0(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_00415880(u64 param_1,u64 param_2,int param_3,int param_4, int param_5,int param_6);
void FUN_00415a70(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_00415b30(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u8 param_6);
void FUN_00415b70(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
u64 FUN_00415c30(int param_1, int param_2);
u64 FUN_00415dc0(u64 param_1,int param_2,u8 *param_3);
void FUN_00416240(u64 param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6);
void FUN_004163f0(u64 param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6);
void FUN_004166d0(u64 param_1,int param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_004167d0(u64 param_1,int param_2,int param_3,int param_4,int param_5, u8 param_6);
void FUN_00416b90(u64 param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6);
void FUN_00416d20(u64 param_1,int param_2,int param_3,int param_4,int param_5, u8 param_6);
u64 FUN_00417030(int param_1, int param_2);
/* FUSION_GLOBALS */
float DAT_007cadc0;
u32 DAT_006afb90;
u32 DAT_006b0020;
u32 DAT_006b0050;
u32 DAT_006b0450;
u32 DAT_006b04d0;
u32 DAT_006b0a00;
u32 DAT_006b0a60;
float DAT_006b0ac0;
float DAT_006b0ac4;
float DAT_006b0ac8;
float DAT_006b0acc;
#pragma alias DAT_006b0ac0_abs DAT_006b0ac0
extern u8 DAT_006b0ac0_abs[];
#pragma alias DAT_006b0ac4_abs DAT_006b0ac4
extern u8 DAT_006b0ac4_abs[];
#pragma alias DAT_006b0ac8_abs DAT_006b0ac8
extern u8 DAT_006b0ac8_abs[];
#pragma alias DAT_006b0acc_abs DAT_006b0acc
extern u8 DAT_006b0acc_abs[];
u32 DAT_006b0ad0;
u32 DAT_006b0cb0;
u32 DAT_006b0dd4;
u32 DAT_006b0ddc;
u32 DAT_006b0de0;
#pragma alias DAT_006b0de0_abs DAT_006b0de0
extern u8 DAT_006b0de0_abs[];
u32 DAT_006b0e30;
#pragma alias DAT_006b0e30_abs DAT_006b0e30
extern u8 DAT_006b0e30_abs[];

u32 DAT_006b0e64;
u32 DAT_006b0e6c;
#pragma alias DAT_006b0e64_abs DAT_006b0e64
extern u8 DAT_006b0e64_abs[];
u32 DAT_006b10e0;
u32 DAT_006b1130;
u32 DAT_006b1178;
u32 DAT_006b1190;
u32 DAT_006b1220;
u32 DAT_006b1340;
u32 DAT_006b1370;
u32 DAT_006b13a0;
u32 DAT_006b1400;
u32 DAT_006b1460;
u32 DAT_006b14c0;
u32 DAT_006b14f0;
u32 DAT_006b1520;
u32 DAT_006b1580;
u32 DAT_006b1610;
u32 DAT_006b1640;
u32 DAT_006b16a0;
u32 DAT_006b16e0;
u32 DAT_006b1710;
float DAT_007cada4;
float DAT_007caee8;
float DAT_007caef0;
u32 DAT_007cda4c;
u32 DAT_007cda58;
u32 DAT_007cda5a;
u32 DAT_007cda5c;
u32 DAT_007cda5e;
u32 DAT_007cda64;
#pragma alias DAT_007cda64_f DAT_007cda64
extern float DAT_007cda64_f;
u8 *DAT_007ce420;
u8 *DAT_007ce4e4;
code DAT_00960090;
u32 PTR_FUN_006b1490[];
u32 PTR_FUN_006b1494[];
u32 PTR_FUN_006b1498[];
u32 PTR_FUN_006b14a0[];
u32 PTR_FUN_006b16c8[];
u32 PTR_FUN_006b16cc[];
u32 PTR_FUN_006b16d0[];
u32 PTR_FUN_006b1830[];
u32 PTR_FUN_007cda10[];
u32 PTR_FUN_007cda14[];
u32 PTR_FUN_007cda18[];
u32 PTR_FUN_007cda1c[];
u32 PTR_FUN_007cda20[];
u32 PTR_FUN_007cda24[];
u32 PTR_FUN_007cda28[];
u32 PTR_FUN_007cda30[];
u32 PTR_FUN_007cda34[];
u32 PTR_FUN_007cda38[];
u32 PTR_FUN_007cda40[];
u32 PTR_FUN_007cda44[];














// FUN_004101B0
asm u64 FUN_004101b0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8cb0000c
  .word 0x8e020000
  .word 0x30420002
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000eb
  .word 0x00000000
  .word 0x86140008
  .word 0x8613000a
  .word 0xc6140010
  .word 0x3c02437c
  .word 0x44820000
  .word 0x00000000
  .word 0x46140002
  .word 0x46000024
  .word 0x44120000
  .word 0x3c024369
  .word 0x44820000
  .word 0x00000000
  .word 0x46140002
  .word 0x46000024
  .word 0x44110000
  .word 0x8602000c
  .word 0x44820000
  .word 0x00000000
  .word 0x46800560
  .word 0x0271b023
  .word 0x0292a823
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46150036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a824
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a801
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x96020016
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0xc78081f8
  .word 0x46010042
  .word 0x3402ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0xc78080d0
  .word 0x46010342
  .word 0x44806000
  .word 0x02a0202d
  .word 0x02c0282d
  .word 0x24070056
  .word 0x0000402d
  .word 0x0240482d
  .word 0x0220502d
  .word 0x4600a386
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46150036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a824
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a801
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x96020016
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0xc78081f8
  .word 0x46010042
  .word 0x3402ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0xc78080d0
  .word 0x46010342
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0260282d
  .word 0x24070057
  .word 0x0000402d
  .word 0x0240482d
  .word 0x0000502d
  .word 0x4600a386
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46150036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a824
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a801
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x96020016
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0xc78081f8
  .word 0x46010042
  .word 0x3402ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0xc78080d0
  .word 0x46010342
  .word 0x44806000
  .word 0x0280202d
  .word 0x02c0282d
  .word 0x24070058
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0220502d
  .word 0x4600a386
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46150036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a824
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a801
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x96020016
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0xc78081f8
  .word 0x46010042
  .word 0x3402ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0xc78080d0
  .word 0x46010342
  .word 0x44806000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070059
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x4600a386
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#pragma opt_loop_invariants on
// FUN_004105E0


asm u32 FUN_004105e0(int param_1, int param_2, int param_3) 
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00c0882d
  .word 0x8cb0000c
  .word 0x3c07006b
  .word 0x24e7fb90
  .word 0x27a60040
  .word 0x24050009
  .word 0x8ce30000
  .word 0x8ce20004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc30000
  .word 0xacc20004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x12200040
  .word 0x00000000
  .word 0x86230006
  .word 0x24020006
  .word 0x1062001e
  .word 0x00000000
  .word 0x24020005
  .word 0x1062001b
  .word 0x00000000
  .word 0x24020004
  .word 0x10620013
  .word 0x00000000
  .word 0x24020001
  .word 0x10620006
  .word 0x00000000
  .word 0x24020002
  .word 0x1062002d
  .word 0x00000000
  .word 0x1000002b
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a50040
  .word 0x2406000c
  .word 0x0c148494
  .word 0x00000000
  .word 0xa600000c
  .word 0xa600000e
  .word 0xa6000010
  .word 0x10000021
  .word 0x00000000
  .word 0x24020003
  .word 0xa602000c
  .word 0xa600000e
  .word 0x1000001c
  .word 0x00000000
  .word 0x8c840008
  .word 0x24850004
  .word 0x24060004
  .word 0x0c0f12d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x8c520014
  .word 0x86220006
  .word 0x2451fffc
  .word 0x00111040
  .word 0x00511021
  .word 0x00021080
  .word 0x005d1021
  .word 0x0200202d
  .word 0x24450040
  .word 0x2406000c
  .word 0x0c148494
  .word 0x00000000
  .word 0xa600000c
  .word 0xa600000e
  .word 0xa6110010
  .word 0x12400004
  .word 0x00000000
  .word 0x8e42000c
  .word 0x84420012
  .word 0xa6020012
  .word 0x0000102d
  .word 0x100000af
  .word 0x00000000
  .word 0x8603000c
  .word 0x24020003
  .word 0x1062008c
  .word 0x00000000
  .word 0x24020002
  .word 0x1062007e
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000a0
  .word 0x00000000
  .word 0x8602000e
  .word 0x24420001
  .word 0xa602000e
  .word 0x0000282d
  .word 0x86060010
  .word 0x86040006
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x0064102a
  .word 0x1440005c
  .word 0x00000000
  .word 0x00642023
  .word 0x00061040
  .word 0x00461021
  .word 0x00021080
  .word 0x005d1821
  .word 0x2462006a
  .word 0x84480000
  .word 0x0104082a
  .word 0x14200051
  .word 0x00000000
  .word 0x24660040
  .word 0x84c70000
  .word 0x84660064
  .word 0x00c73023
  .word 0x00863018
  .word 0x44860000
  .word 0x00000000
  .word 0x46800060
  .word 0x44880000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x44870000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x44060000
  .word 0x00000000
  .word 0xa6060000
  .word 0x24660042
  .word 0x84c70000
  .word 0x84660066
  .word 0x00c73023
  .word 0x70863018
  .word 0x44860000
  .word 0x00000000
  .word 0x46800060
  .word 0x84460000
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x44870000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x44060000
  .word 0x00000000
  .word 0xa6060002
  .word 0x24660044
  .word 0x84c70000
  .word 0x84660068
  .word 0x00c73023
  .word 0x00863018
  .word 0x44860000
  .word 0x00000000
  .word 0x46800060
  .word 0x84460000
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x44870000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x44060000
  .word 0x00000000
  .word 0xa6060004
  .word 0x24660048
  .word 0xc4c20000
  .word 0xc460006c
  .word 0x46020041
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010042
  .word 0x84420000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0x00000000
  .word 0x46001000
  .word 0xe6000008
  .word 0x10000002
  .word 0x00000000
  .word 0x24a50001
  .word 0x10a0000c
  .word 0x00000000
  .word 0x8603000c
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0x24020002
  .word 0x10000032
  .word 0x00000000
  .word 0x24020002
  .word 0xa602000c
  .word 0x86020012
  .word 0xa602000e
  .word 0x0000102d
  .word 0x1000002b
  .word 0x00000000
  .word 0x8602000e
  .word 0x24420001
  .word 0xa602000e
  .word 0xa6020012
  .word 0x8602000e
  .word 0x284204b0
  .word 0x14400022
  .word 0x00000000
  .word 0xa600000e
  .word 0x1000001f
  .word 0x00000000
  .word 0x8602000e
  .word 0x24420001
  .word 0xa602000e
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x00031200
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6020004
  .word 0x8602000e
  .word 0x2842000a
  .word 0x14400005
  .word 0x00000000
  .word 0xa600000e
  .word 0x24020002
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_loop_invariants off

// FUN_00410A10


asm u64 FUN_00410a10(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8ca3000c
  .word 0xc4750008
  .word 0x3c02437c
  .word 0x44820000
  .word 0x00000000
  .word 0x46150042
  .word 0x84620000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010001
  .word 0x46000024
  .word 0x44130000
  .word 0x84620002
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010001
  .word 0x46000024
  .word 0x44120000
  .word 0x3c02437b
  .word 0x44820000
  .word 0x00000000
  .word 0x46150002
  .word 0x46000024
  .word 0x44110000
  .word 0x3c024379
  .word 0x44820000
  .word 0x00000000
  .word 0x46150002
  .word 0x46000024
  .word 0x44100000
  .word 0x84620004
  .word 0x44820000
  .word 0x00000000
  .word 0x468005a0
  .word 0x84620012
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc78081f8
  .word 0x46010042
  .word 0x3c024496
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46160036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600b024
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600b001
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x44806000
  .word 0x4600a047
  .word 0xc78080d0
  .word 0x46010342
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070055
  .word 0x0000402d
  .word 0x0220482d
  .word 0x0200502d
  .word 0x4600ab86
  .word 0x4600abc6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46160036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600b024
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600b001
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x44806000
  .word 0xc7808110
  .word 0x46140041
  .word 0xc78080d0
  .word 0x46010342
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070055
  .word 0x0000402d
  .word 0x0220482d
  .word 0x0200502d
  .word 0x4600ab86
  .word 0x4600abc6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46160036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600b024
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600b001
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x44806000
  .word 0xc78081fc
  .word 0x46140041
  .word 0xc78080d0
  .word 0x46010342
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070055
  .word 0x0000402d
  .word 0x0220482d
  .word 0x0200502d
  .word 0x4600ab86
  .word 0x4600abc6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46160036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600b024
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600b001
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x44806000
  .word 0xc7808168
  .word 0x46140041
  .word 0xc78080d0
  .word 0x46010342
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070055
  .word 0x0000402d
  .word 0x0220482d
  .word 0x0200502d
  .word 0x4600ab86
  .word 0x4600abc6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00410D30


u32 FUN_00410d30(int param_1,int param_2)


{

  int iVar1;

  u32 uVar2;

  u32 uVar3;

  u32 lVar4;

  

  iVar1 = *(int *)(param_2 + 0xc);

  if (*(int *)(iVar1 + 0xc) == 0) {

    uVar3 = H_Maestro_CreateTask(*(u32 *)(param_1 + 0xc),0x18b4,

                         *(u32 *)(*(int *)(param_2 + 8) + 0x18));

    *(u32 *)(iVar1 + 0xc) = uVar3;

  }

  lVar4 = H_Maestro_FinishedInit(*(u32 *)(iVar1 + 0xc));

  if (lVar4 != 0) {

    H_Maestro_SetShouldLoop(*(u32 *)(iVar1 + 0xc),0);

    func_00111f10(*(u32 *)(iVar1 + 0xc),0);

    H_Maestro_00111f20(*(u32 *)(iVar1 + 0xc),1);

    func_00111ca0(*(u32 *)(iVar1 + 0xc),1);

    uVar2 = *(u32 *)(*(int *)(param_2 + 8) + 0xc);

    if ((uVar2 & 1) != 0) {

      if ((uVar2 & 2) != 0) {

        H_Maestro_SetShouldLoop(*(u32 *)(iVar1 + 0xc),1);

      }

      if ((uVar2 & 4) != 0) {

        func_00111f10(*(u32 *)(iVar1 + 0xc),1);

      }

      if ((uVar2 & 8) != 0) {

        H_Maestro_00111f20(*(u32 *)(iVar1 + 0xc),0);

      }

      if ((uVar2 & 0x10) != 0) {

        func_00111ca0(*(u32 *)(iVar1 + 0xc),0);

      }

    }

    uVar3 = 1;

  }

  else {

    uVar3 = 0;

  }

  return uVar3;

}

/* W327 measured: opt_common_subs off normalized_diff 431 -> 409; object 640/640 -> 616/640 (without/with). */

#pragma opt_common_subs reset







/* W327 measured: opt_loop_invariants on normalized_diff 804 -> 786; object 1172/1248 -> 1164/1248 (without/with). */

#pragma opt_loop_invariants reset






#pragma opt_propagation reset
/* W327 measured: opt_loop_invariants on normalized_diff 792 -> 780; object 1172/1248 -> 1164/1248 (without/with). */

#pragma opt_loop_invariants reset






/* W327 measured: opt_loop_invariants on normalized_diff 1006 -> 986; object 1404/1424 -> 1404/1424 (without/with). */

#pragma opt_loop_invariants reset

















/* W327 measured: opt_loop_invariants on normalized_diff 719 -> 672; object 1252/1280 -> 1252/1280 (without/with). */

#pragma opt_loop_invariants reset








/* W327 measured: opt_loop_invariants on normalized_diff 573 -> 524; object 1116/1152 -> 1116/1152 (without/with). */

#pragma opt_loop_invariants reset

/* W327 measured: opt_common_subs off normalized_diff 555 -> 486; object 752/736 -> 736/736 (without/with). */

#pragma opt_common_subs reset



/* W327 measured: opt_common_subs off normalized_diff 582 -> 458; object 804/784 -> 784/784 (without/with). */

#pragma opt_common_subs reset
