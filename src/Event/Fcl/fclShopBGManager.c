#include "temporary.h"
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
extern float fGpffff80d0;
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
void FUN_0040e3c0(float, s32, s32, u8, s32, s32);
#pragma alias FUN_0040e3c0_i FUN_0040e3c0
void FUN_0040e3c0_i(s32, s32, float, u8, s32, s32);
#pragma alias FUN_0040e3f0_typed FUN_0040e3f0
void FUN_0040e3f0_typed(float, float, float, float, s32, s32, u8, s32, s32, s32, s32);
#pragma alias FUN_0040e3f0_i2f1i3f3 FUN_0040e3f0
extern void FUN_0040e3f0_i2f1i3f3(s32, s32, float, u8, s32, s32, s32, s32, float, float, float);
#pragma alias FUN_003b2cb0_typed FUN_003b2cb0
void FUN_003b2cb0_typed(float, s32, s32, u32, u32, u32, u32, u32, u32);
#pragma alias FUN_003b2cb0_i FUN_003b2cb0
void FUN_003b2cb0_i(s32, s32, float, u32, u32, u32, u32, u32, u32);
#pragma alias FUN_003b32d0_typed FUN_003b32d0
void FUN_003b32d0_typed(float, s32, s32, u32, s32, s32, const void *, s32, s32);
#pragma alias FUN_0040eb50_typed FUN_0040eb50
void FUN_0040eb50_typed(float, s32, s32, u8, s32, const void *, s32);
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
#pragma alias DAT_006b0450_abs DAT_006b0450
extern u8 DAT_006b0450_abs[];
#pragma alias DAT_006b04d0_abs DAT_006b04d0
extern u8 DAT_006b04d0_abs[];
u32 DAT_006b0a00;
#pragma alias DAT_006b0a00_abs DAT_006b0a00
extern u8 DAT_006b0a00_abs[];
u32 DAT_006b0a60;
#pragma alias DAT_006b0a60_abs DAT_006b0a60
extern u8 DAT_006b0a60_abs[];
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
#pragma alias DAT_006b0ad0_abs DAT_006b0ad0
extern u8 DAT_006b0ad0_abs[];
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
#pragma alias DAT_006b10e0_abs DAT_006b10e0
extern u8 DAT_006b10e0_abs[];
u32 DAT_006b1130;
#pragma alias DAT_006b1130_abs DAT_006b1130
extern u8 DAT_006b1130_abs[];
u32 DAT_006b1178;
#pragma alias DAT_006b1178_abs DAT_006b1178
extern u8 DAT_006b1178_abs[];
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
extern float DAT_007cada4;
float DAT_007caee8;
extern float DAT_007caef0;
u32 DAT_007cda4c;
u32 DAT_007cda58;
u32 DAT_007cda5a;
u32 DAT_007cda5c;
u32 DAT_007cda5e;
u32 DAT_007cda64;
#pragma alias DAT_007cda64_f DAT_007cda64
extern float DAT_007cda64_f;
u8 *DAT_007ce420;
#pragma alias DAT_007ce420_sda DAT_007ce420
extern u8 *DAT_007ce420_sda __attribute__((section(".sdata")));
u8 *DAT_007ce4e4;
#pragma alias DAT_007ce4e4_sda DAT_007ce4e4
extern u8 *DAT_007ce4e4_sda __attribute__((section(".sdata")));
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
#include "Kosaka/k_assert.h"

















/* W327 measured: opt_common_subs off normalized_diff 431 -> 409; object 640/640 -> 616/640 (without/with). */
#pragma opt_common_subs off
// FUN_00410E70


#ifndef PC_BUILD
asm u32 FUN_00410e70(u32 param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8cb0000c
  .word 0x10c00034
  .word 0x00000000
  .word 0x84c60006
  .word 0x8e05000c
  .word 0x0c100580
  .word 0x00000000
  .word 0x24030004
  .word 0x1043001f
  .word 0x00000000
  .word 0x24030003
  .word 0x10430010
  .word 0x00000000
  .word 0x24030002
  .word 0x10430024
  .word 0x00000000
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e04000c
  .word 0x0c044754
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x44806000
  .word 0x8e04000c
  .word 0x0c044754
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420001
  .word 0xae020000
  .word 0x2402000a
  .word 0xa6020008
  .word 0xa6000006
  .word 0x1000000c
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e04000c
  .word 0x0c044754
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420002
  .word 0xae020000
  .word 0x2402000a
  .word 0xa602000a
  .word 0xa6000006
  .word 0x0000102d
  .word 0x1000005c
  .word 0x00000000
  .word 0x8e04000c
  .word 0x10800058
  .word 0x00000000
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24030003
  .word 0x14430006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484fbe0
  .word 0x2405033c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e030000
  .word 0x30620001
  .word 0x1040001e
  .word 0x00000000
  .word 0x86020006
  .word 0x24420001
  .word 0xa6020006
  .word 0x0002143c
  .word 0x0002143f
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x86020008
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x8e04000c
  .word 0x0c044754
  .word 0x00000000
  .word 0x86030006
  .word 0x86020008
  .word 0x0062102a
  .word 0x1440002d
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae020000
  .word 0x10000027
  .word 0x00000000
  .word 0x30620002
  .word 0x10400024
  .word 0x00000000
  .word 0x86020006
  .word 0x24420001
  .word 0xa6020006
  .word 0x0002143c
  .word 0x0002143f
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x8602000a
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010301
  .word 0x8e04000c
  .word 0x0c044754
  .word 0x00000000
  .word 0x86030006
  .word 0x8602000a
  .word 0x0062102a
  .word 0x1440000b
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fffd
  .word 0x00621024
  .word 0xae020000
  .word 0x8e04000c
  .word 0x0c044714
  .word 0x00000000
  .word 0x24020002
  .word 0x10000008
  .word 0x00000000
  .word 0x8e04000c
  .word 0x0c04472c
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_common_subs reset
// FUN_004110F0


u32 FUN_004110f0(u64 param_1,u64 param_2,int param_3)



{

  if (param_3 != 0) {

    switch(*(s16 *)(param_3 + 6)) {
    case 0:
      break;
    case 2:
    case 4:
      FUN_003eec60(1);
      break;
    case 1:
    case 3:
      FUN_003eec60(0);
      break;
    case 5:
      FUN_003eec60(2);
      break;
    case 6:
      FUN_003eec60(3);
    }

  }

  return 1;

}

// FUN_00411190


u32 FUN_00411190(u64 param_1,u64 param_2,u32 param_3)



{

  if (param_3 != 0) {

    switch(*(s16 *)((int)param_3 + 6)) {

    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      break;
    case 5:

      FUN_003ef970(0);

      break;

    case 10:

      FUN_003ef970(1);

      break;

    case 6:

      FUN_003ef970(2);

      break;

    case 0xb:

      FUN_003ef970(3);

      break;

    case 7:

      FUN_003ef970(4);

      break;

    case 0xc:

      FUN_003ef970(5);

      break;

    case 8:

      FUN_003ef970(6);

      break;

    case 0xd:

      FUN_003ef970(7);

      break;

    case 9:

      FUN_003ef970(8);

      break;

    case 0xe:

      FUN_003ef970(9);

      break;

    case 0xf:

      FUN_003ef970(10);

      break;

    case 0x10:

      FUN_003ef970(0xb);

      break;

    case 0x11:

      FUN_003ef970(0xc);

      break;

    case 0x12:

      FUN_003ef970(0xd);

      break;

    case 0x13:

      FUN_003ef970(0xe);

      break;

    case 0x14:

      FUN_003ef970(0xf);

      break;

    case 0x15:

      FUN_003ef970(0x10);

      break;

    case 0x16:

      FUN_003ef970(0x11);

    }

  }

  return 1;

}

// FUN_00411340


u32 FUN_00411340(u64 param_1,u64 param_2,s16 *param_3)



{

  if (param_3 != 0) {

    switch(param_3[3]) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      break;

    case 5:

      FUN_003e9790(0);

      break;

    case 6:

      FUN_003ea560(0);

      break;

    case 7:

      FUN_003eacb0(0);

      break;

    case 8:

      FUN_003eb9b0(0);

      break;

    case 9:

      FUN_003ec030(0);

    }

  }

  return 1;

}

// FUN_004113F0


#ifndef PC_BUILD
asm u32 FUN_004113f0(u64 param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8cb0000c
  .word 0x10c00043
  .word 0x00000000
  .word 0x84c30006
  .word 0x24020004
  .word 0x1062002b
  .word 0x00000000
  .word 0x24020002
  .word 0x1062003c
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000037
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x24060050
  .word 0x0c148502
  .word 0x00000000
  .word 0x240400ff
  .word 0xa604000e
  .word 0x8e020000
  .word 0x34420001
  .word 0xae020000
  .word 0x2403fff7
  .word 0x00431024
  .word 0xae020000
  .word 0xa6040022
  .word 0x8e020014
  .word 0x34420001
  .word 0xae020014
  .word 0x00431024
  .word 0xae020014
  .word 0xa6040036
  .word 0x8e020028
  .word 0x34420001
  .word 0xae020028
  .word 0x00431024
  .word 0xae020028
  .word 0xa604004a
  .word 0x8e02003c
  .word 0x34420001
  .word 0xae02003c
  .word 0x00431024
  .word 0xae02003c
  .word 0xa6000050
  .word 0x10000015
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
  .word 0x8e020028
  .word 0x34420002
  .word 0xae020028
  .word 0x34420008
  .word 0xae020028
  .word 0x8e02003c
  .word 0x34420002
  .word 0xae02003c
  .word 0x34420008
  .word 0xae02003c
  .word 0x86030050
  .word 0x24020002
  .word 0x10620075
  .word 0x00000000
  .word 0x24020001
  .word 0x10620072
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000006e
  .word 0x00000000
  .word 0x86020052
  .word 0x24420001
  .word 0xa6020052
  .word 0x0000382d
  .word 0x0000402d
  .word 0x240bfffd
  .word 0x2409007e
  .word 0x2403000a
  .word 0x2402fffe
  .word 0x2405ff9c
  .word 0x2404fffb
  .word 0x10000056
  .word 0x00000000
  .word 0x00083080
  .word 0x00c83021
  .word 0x00063080
  .word 0x02063021
  .word 0x8ccc0000
  .word 0x318a0004
  .word 0x11400016
  .word 0x00000000
  .word 0x318a0008
  .word 0x11400004
  .word 0x00000000
  .word 0x24e70001
  .word 0x10000047
  .word 0x00000000
  .word 0x84ca0010
  .word 0x254affff
  .word 0xa4ca0010
  .word 0x000a543c
  .word 0x000a543f
  .word 0x1d400040
  .word 0x00000000
  .word 0xa4c50010
  .word 0x8cca0000
  .word 0x01445024
  .word 0xacca0000
  .word 0x354a0001
  .word 0xacca0000
  .word 0x10000038
  .word 0x00000000
  .word 0x318a0001
  .word 0x11400019
  .word 0x00000000
  .word 0x84ca0012
  .word 0x254a0001
  .word 0xa4ca0012
  .word 0x84cc000e
  .word 0x000a543c
  .word 0x000a543f
  .word 0x018a5018
  .word 0x0143001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00005012
  .word 0xa4ca000c
  .word 0x84ca0012
  .word 0x294a000a
  .word 0x15400025
  .word 0x00000000
  .word 0x8cca0000
  .word 0x01425024
  .word 0xacca0000
  .word 0x84ca000e
  .word 0xa4ca000c
  .word 0xa4c00012
  .word 0x1000001d
  .word 0x00000000
  .word 0x318a0002
  .word 0x1140001a
  .word 0x00000000
  .word 0x84ca0012
  .word 0x254a0001
  .word 0xa4ca0012
  .word 0x84cc000e
  .word 0x000a543c
  .word 0x000a543f
  .word 0x018a5018
  .word 0x0143001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00005012
  .word 0x018a5023
  .word 0xa4ca000c
  .word 0x84ca0012
  .word 0x294a000a
  .word 0x15400009
  .word 0x00000000
  .word 0x8cca0000
  .word 0x014b5024
  .word 0xacca0000
  .word 0x354a0004
  .word 0xacca0000
  .word 0xa4c0000c
  .word 0xa4c00012
  .word 0xa4c90010
  .word 0x25080001
  .word 0x29060004
  .word 0x14c0ffa9
  .word 0x00000000
  .word 0x28e20004
  .word 0x14400006
  .word 0x00000000
  .word 0x24020001
  .word 0xa6020050
  .word 0x24020002
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00411710
u64 FUN_00411710(u64 param_1, int param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = *(int *)(param_2 + 0xc);
  for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
    f32 zero;
    s16 valueA;
    s16 valueB;
    u8 flag;
    int code;

    iVar2 = iVar1 + iVar3 * 0x14;
    zero = 0.0f;
    valueA = *(s16 *)(iVar2 + 4);
    valueB = *(s16 *)(iVar2 + 6);
    asm volatile("" : "+r" (valueA), "+r" (valueB));
    code = iVar3 + 0x61;
    FUN_0040e3c0(zero, valueA, valueB, *(volatile u8 *)(iVar2 + 0xc), code, 0);
  }
  return 0;
}

// FUN_00411790


#ifndef PC_BUILD
asm u32 FUN_00411790(u64 param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8cb0000c
  .word 0x3c07006b
  .word 0x24e70020
  .word 0x27a50060
  .word 0x24040005
  .word 0x8ce30000
  .word 0x8ce20004
  .word 0x24e70008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x10c000ee
  .word 0x00000000
  .word 0x84c30006
  .word 0x2402000c
  .word 0x106200e0
  .word 0x00000000
  .word 0x24020007
  .word 0x106200a3
  .word 0x00000000
  .word 0x2402000b
  .word 0x10620094
  .word 0x00000000
  .word 0x24020006
  .word 0x10620057
  .word 0x00000000
  .word 0x2402000a
  .word 0x10620043
  .word 0x00000000
  .word 0x24020005
  .word 0x10620006
  .word 0x00000000
  .word 0x24020002
  .word 0x106200d8
  .word 0x00000000
  .word 0x100000d6
  .word 0x00000000
  .word 0xa6000064
  .word 0xa6000066
  .word 0x0200202d
  .word 0x0000282d
  .word 0x24060064
  .word 0x0c148502
  .word 0x00000000
  .word 0x24021bf0
  .word 0xa6020008
  .word 0xa6020004
  .word 0x240203d0
  .word 0xa602000a
  .word 0xa6020006
  .word 0x240400ff
  .word 0xa604000e
  .word 0x24020002
  .word 0xa6020010
  .word 0x8e020000
  .word 0x34420004
  .word 0xae020000
  .word 0x34420001
  .word 0xae020000
  .word 0x2403fff7
  .word 0x00431024
  .word 0xae020000
  .word 0x24020b10
  .word 0xa602001c
  .word 0xa6020018
  .word 0x24020310
  .word 0xa602001e
  .word 0xa602001a
  .word 0xa6040022
  .word 0x24020006
  .word 0xa6020024
  .word 0x8e020014
  .word 0x34420004
  .word 0xae020014
  .word 0x34420001
  .word 0xae020014
  .word 0x00431024
  .word 0xae020014
  .word 0x24021fe0
  .word 0xa6020030
  .word 0xa602002c
  .word 0x24020fe0
  .word 0xa6020032
  .word 0xa602002e
  .word 0xa6040036
  .word 0xa6000038
  .word 0x8e020028
  .word 0x34420004
  .word 0xae020028
  .word 0x34420001
  .word 0xae020028
  .word 0x00431024
  .word 0xae020028
  .word 0x1000009c
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
  .word 0x8e020028
  .word 0x34420002
  .word 0xae020028
  .word 0x34420008
  .word 0xae020028
  .word 0x1000008b
  .word 0x00000000
  .word 0xa6000064
  .word 0xa6000066
  .word 0x0200202d
  .word 0x0000282d
  .word 0x24060064
  .word 0x0c148502
  .word 0x00000000
  .word 0x8e020000
  .word 0x34430004
  .word 0xae030000
  .word 0x2402fff7
  .word 0x00621824
  .word 0xae030000
  .word 0x8e030014
  .word 0x34630004
  .word 0xae030014
  .word 0x00621824
  .word 0xae030014
  .word 0x8e030028
  .word 0x34630004
  .word 0xae030028
  .word 0x00621824
  .word 0xae030028
  .word 0x24031ae0
  .word 0xa6030044
  .word 0xa6030040
  .word 0x24030270
  .word 0xa6030046
  .word 0xa6030042
  .word 0x240400ff
  .word 0xa604004a
  .word 0x24030002
  .word 0xa603004c
  .word 0x8e03003c
  .word 0x34630004
  .word 0xae03003c
  .word 0x34630001
  .word 0xae03003c
  .word 0x00621824
  .word 0xae03003c
  .word 0x24030740
  .word 0xa6030058
  .word 0xa6030054
  .word 0x240316f0
  .word 0xa603005a
  .word 0xa6030056
  .word 0xa604005e
  .word 0x24030006
  .word 0xa6030060
  .word 0x8e030050
  .word 0x34630004
  .word 0xae030050
  .word 0x34630001
  .word 0xae030050
  .word 0x00621024
  .word 0xae020050
  .word 0x10000051
  .word 0x00000000
  .word 0x8e02003c
  .word 0x34420002
  .word 0xae02003c
  .word 0x34420008
  .word 0xae02003c
  .word 0x8e020050
  .word 0x34420002
  .word 0xae020050
  .word 0x34420008
  .word 0xae020050
  .word 0x10000045
  .word 0x00000000
  .word 0xa6000064
  .word 0xa6000066
  .word 0x0200202d
  .word 0x0000282d
  .word 0x24060064
  .word 0x0c148502
  .word 0x00000000
  .word 0x8e020000
  .word 0x34430004
  .word 0xae030000
  .word 0x2402fff7
  .word 0x00621824
  .word 0xae030000
  .word 0x8e030014
  .word 0x34630004
  .word 0xae030014
  .word 0x00621824
  .word 0xae030014
  .word 0x8e030028
  .word 0x34630004
  .word 0xae030028
  .word 0x00621824
  .word 0xae030028
  .word 0x240319a0
  .word 0xa6030044
  .word 0xa6030040
  .word 0x240302a0
  .word 0xa6030046
  .word 0xa6030042
  .word 0x240400ff
  .word 0xa604004a
  .word 0x24030002
  .word 0xa603004c
  .word 0x8e03003c
  .word 0x34630004
  .word 0xae03003c
  .word 0x34630001
  .word 0xae03003c
  .word 0x00621824
  .word 0xae03003c
  .word 0x24030740
  .word 0xa6030058
  .word 0xa6030054
  .word 0x24031730
  .word 0xa603005a
  .word 0xa6030056
  .word 0xa604005e
  .word 0x24030006
  .word 0xa6030060
  .word 0x8e030050
  .word 0x34630004
  .word 0xae030050
  .word 0x34630001
  .word 0xae030050
  .word 0x00621024
  .word 0xae020050
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e02003c
  .word 0x34420002
  .word 0xae02003c
  .word 0x34420008
  .word 0xae02003c
  .word 0x8e020050
  .word 0x34420002
  .word 0xae020050
  .word 0x34420008
  .word 0xae020050
  .word 0x86030064
  .word 0x24020002
  .word 0x106200c1
  .word 0x00000000
  .word 0x24020001
  .word 0x106200be
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000ba
  .word 0x00000000
  .word 0x0000982d
  .word 0x0000a02d
  .word 0x100000ab
  .word 0x00000000
  .word 0x00141080
  .word 0x00541021
  .word 0x00021080
  .word 0x02029021
  .word 0x8e430000
  .word 0x30620004
  .word 0x1040001b
  .word 0x00000000
  .word 0x30620008
  .word 0x10400004
  .word 0x00000000
  .word 0x26730001
  .word 0x1000009c
  .word 0x00000000
  .word 0x86420010
  .word 0x2442ffff
  .word 0xa6420010
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1c400095
  .word 0x00000000
  .word 0xa6400010
  .word 0x8e430000
  .word 0x2402fffb
  .word 0x00621024
  .word 0xae420000
  .word 0x34420001
  .word 0xae420000
  .word 0x86420008
  .word 0xa6420004
  .word 0x8642000a
  .word 0xa6420006
  .word 0x10000088
  .word 0x00000000
  .word 0x86420010
  .word 0x24420001
  .word 0xa6420010
  .word 0x0002143c
  .word 0x0002143f
  .word 0x28420050
  .word 0x14400007
  .word 0x00000000
  .word 0x8e430000
  .word 0x30620002
  .word 0x14400003
  .word 0x00000000
  .word 0x34620002
  .word 0xae420000
  .word 0x001410c0
  .word 0x005d1021
  .word 0x24440060
  .word 0x8642000c
  .word 0x240300ff
  .word 0x00621023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024280
  .word 0x44821800
  .word 0xc4800000
  .word 0x46001802
  .word 0x46000802
  .word 0x3c02437f
  .word 0x44821000
  .word 0x00000000
  .word 0x46020043
  .word 0x86420004
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6420004
  .word 0x8642000c
  .word 0x00621023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc4800004
  .word 0x46001802
  .word 0x46000802
  .word 0x46020043
  .word 0x86420006
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6420006
  .word 0x8e430000
  .word 0x30620001
  .word 0x10400019
  .word 0x00000000
  .word 0x86420012
  .word 0x24420001
  .word 0xa6420012
  .word 0x8643000e
  .word 0x0002143c
  .word 0x0002143f
  .word 0x00621818
  .word 0x2402000a
  .word 0x0062001a
  .word 0x00001012
  .word 0xa642000c
  .word 0x86420012
  .word 0x2842000a
  .word 0x1440003a
  .word 0x00000000
  .word 0x8e430000
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae420000
  .word 0x8642000e
  .word 0xa642000c
  .word 0xa6400012
  .word 0x10000031
  .word 0x00000000
  .word 0x30620002
  .word 0x1040002e
  .word 0x00000000
  .word 0x86420012
  .word 0x24420001
  .word 0xa6420012
  .word 0x8651000e
  .word 0x0002143c
  .word 0x0002143f
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808110
  .word 0x46010042
  .word 0x3c024160
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x44910800
  .word 0x00000000
  .word 0x468008a0
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600101d
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa642000c
  .word 0x86420012
  .word 0x2842000e
  .word 0x1440000b
  .word 0x00000000
  .word 0x8e430000
  .word 0x2402fffd
  .word 0x00621024
  .word 0xae420000
  .word 0x34420004
  .word 0xae420000
  .word 0xa640000c
  .word 0xa6400012
  .word 0x24020019
  .word 0xa6420010
  .word 0x26940001
  .word 0x2a820005
  .word 0x1440ff54
  .word 0x00000000
  .word 0x2a620005
  .word 0x14400006
  .word 0x00000000
  .word 0x24020001
  .word 0xa6020064
  .word 0x24020002
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// W419 negative: DAT_006b0050 array/absolute alias changed FUN_00411ee0 nd298/object424 to nd303/object428 (window448); regressed and reverted.
// FUN_00411EE0
#pragma opt_lifetimes on


#ifndef PC_BUILD
asm u64 FUN_00411ee0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8cb2000c
  .word 0x3c05006b
  .word 0x24a50050
  .word 0x27a40050
  .word 0x24030005
  .word 0x8ca20000
  .word 0x24a50004
  .word 0x2463ffff
  .word 0xac820000
  .word 0x24840004
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000047
  .word 0x00000000
  .word 0x00131080
  .word 0x00531021
  .word 0x00021080
  .word 0x02428821
  .word 0x8622000c
  .word 0x1040003f
  .word 0x00000000
  .word 0x24020003
  .word 0x1662002a
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020003
  .word 0x3445200d
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x44806000
  .word 0x24040102
  .word 0x2405001d
  .word 0x24060080
  .word 0x24070002
  .word 0x0000402d
  .word 0x24090001
  .word 0x0c103584
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x3445000d
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x86220004
  .word 0x00022103
  .word 0x86220006
  .word 0x00022903
  .word 0x3c023f80
  .word 0x44826000
  .word 0x9226000c
  .word 0x00131080
  .word 0x005d1021
  .word 0x8c470050
  .word 0x44806800
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0xc78e8208
  .word 0x460073c6
  .word 0x0c103908
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620005
  .word 0x1440ffb8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule reset
#pragma opt_lifetimes reset

/* W327 measured: opt_loop_invariants on normalized_diff 804 -> 786; object 1172/1248 -> 1164/1248 (without/with). */
#pragma opt_loop_invariants on
// FUN_004120A0


#ifndef PC_BUILD
asm u32 FUN_004120a0(u64 param_1, int param_2, int param_3) 
{
  .set noreorder
  .word 0x27bdfee0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8cb0000c
  .word 0x3c07006b
  .word 0x24e70450
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
  .word 0x24e704d0
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
#endif /* PC_BUILD: asm function omitted */

#pragma opt_loop_invariants reset
// FUN_00412580
#pragma push
#pragma opt_propagation off
u64 FUN_00412580(u64 param_1,int param_2)
{
  int work;
  s16 *entry;
  int i;
  float scale;
  float zero;
  s32 x;
  s32 y;
  u8 alpha;
  s32 extra0;
  s32 extra1;
  s32 extra2;
  s32 spriteId;

  work = *(int *)(param_2 + 0xc);
  for (i = 0; i < 5; i = i + 1) {
    entry = (s16 *)(work + i * 0xc);
    scale = *(float *)(entry + 4);
    x = *entry;
    y = entry[1];
    zero = 0.0f;
    alpha = *(u8 *)(entry + 2);
    spriteId = i + 0x51;
    extra0 = 0;
    extra1 = 0;
    extra2 = 0;
    FUN_0040e3f0_typed(zero,zero,scale,scale,x,y,alpha,spriteId,extra0,extra1,extra2);
  }
  return 0;
}
#pragma pop

// FUN_00412610


#ifndef PC_BUILD
asm u32 FUN_00412610(u64 param_1, int param_2, long param_3) 
{
  .set noreorder
  .word 0x27bdff20
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8cb0000c
  .word 0x3c07006b
  .word 0x24e70a00
  .word 0x27a50080
  .word 0x2404000c
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
  .word 0x24e70a60
  .word 0x27a50020
  .word 0x2404000c
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
  .word 0x27a50080
  .word 0x24060030
  .word 0x0c148494
  .word 0x00000000
  .word 0xa6000030
  .word 0xa6000032
  .word 0x10000009
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a50020
  .word 0x24060030
  .word 0x0c148494
  .word 0x00000000
  .word 0x24020002
  .word 0xa6020030
  .word 0xa6000032
  .word 0x86030030
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
  .word 0x86020032
  .word 0x24420001
  .word 0xa6020032
  .word 0x0000302d
  .word 0x0000382d
  .word 0x10000060
  .word 0x00000000
  .word 0x00071040
  .word 0x00471021
  .word 0x00024080
  .word 0x02082821
  .word 0x84a40006
  .word 0x86030032
  .word 0x0064102a
  .word 0x14400056
  .word 0x00000000
  .word 0x00642023
  .word 0x011d1021
  .word 0x24430080
  .word 0x24620036
  .word 0x846a0036
  .word 0x0144082a
  .word 0x1420004d
  .word 0x00000000
  .word 0x84690000
  .word 0x84680030
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
  .word 0x84680032
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
  .word 0x84680034
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
  .word 0xc4600038
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
  .word 0x28e20004
  .word 0x1440ff9f
  .word 0x00000000
  .word 0x28c20004
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0xa6020030
  .word 0xa6000032
  .word 0x0000102d
  .word 0x10000077
  .word 0x00000000
  .word 0x86020032
  .word 0x24420001
  .word 0xa6020032
  .word 0x0000382d
  .word 0x0000302d
  .word 0x10000060
  .word 0x00000000
  .word 0x00061040
  .word 0x00461021
  .word 0x00024080
  .word 0x02082821
  .word 0x84a40006
  .word 0x86030032
  .word 0x0064102a
  .word 0x14400056
  .word 0x00000000
  .word 0x00642023
  .word 0x011d1021
  .word 0x24430020
  .word 0x24620036
  .word 0x846a0036
  .word 0x0144082a
  .word 0x1420004d
  .word 0x00000000
  .word 0x84690000
  .word 0x84680030
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
  .word 0x84680032
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
  .word 0x84680034
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
  .word 0xc4600038
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
  .word 0x28c20004
  .word 0x1440ff9f
  .word 0x00000000
  .word 0x28e20004
  .word 0x14400007
  .word 0x00000000
  .word 0x24020001
  .word 0xa6020030
  .word 0xa6000032
  .word 0x24020002
  .word 0x10000005
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd00e0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00412AF0
#pragma push
#pragma opt_propagation off
u64 FUN_00412af0(u64 param_1,int param_2)



{

  int iVar1;
  s16 *puVar2;
  int iVar3;
  float fVar3;
  float fVar2;
  float fVar1;
  float fVar0;
  float afStack_10[4];
  float scale;
  float zero;
  s32 x;
  s32 y;
  u8 alpha;
  s32 spriteId;
  s32 extra0;
  s32 extra1;
  s32 extra2;

  

  iVar1 = *(int *)(param_2 + 0xc);

  fVar3 = *(float *)DAT_006b0ac0_abs;
  fVar2 = *(float *)DAT_006b0ac4_abs;
  fVar1 = *(float *)DAT_006b0ac8_abs;
  fVar0 = *(float *)DAT_006b0acc_abs;
  afStack_10[0] = fVar3;
  afStack_10[1] = fVar2;
  afStack_10[2] = fVar1;
  afStack_10[3] = fVar0;

  for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
    puVar2 = (s16 *)(iVar1 + iVar3 * 0xc);
    scale = *(float *)(puVar2 + 4);
    x = *puVar2;
    y = puVar2[1];
    zero = 0.0f;
    alpha = *(u8 *)(puVar2 + 2);
    spriteId = *(s32 *)&afStack_10[iVar3];
    extra0 = 0;
    extra1 = 0;
    extra2 = 0;
    FUN_0040e3f0_typed(zero,zero,scale,scale,x,y,alpha,spriteId,extra0,extra1,extra2);
  }

  return 0;
}
#pragma pop


// FUN_00412BC0


#ifndef PC_BUILD
asm u32 FUN_00412bc0(u64 param_1, int param_2, long param_3) 
{
  .set noreorder
  .word 0x27bdfcd0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8cb0000c
  .word 0x3c08006b
  .word 0x25080ad0
  .word 0x27a70150
  .word 0x2405003c
  .word 0x8d040000
  .word 0x8d030004
  .word 0x25080008
  .word 0x24a5ffff
  .word 0xace40000
  .word 0xace30004
  .word 0x24e70008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x3c08006b
  .word 0x25080cb0
  .word 0x27a70030
  .word 0x24050024
  .word 0x8d040000
  .word 0x8d030004
  .word 0x25080008
  .word 0x24a5ffff
  .word 0xace40000
  .word 0xace30004
  .word 0x24e70008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x3c03006b
  .word 0xc4630dd0
  .word 0x3c03006b
  .word 0xc4620dd4
  .word 0x3c03006b
  .word 0xc4610dd8
  .word 0x3c03006b
  .word 0xc4600ddc
  .word 0xe7a30020
  .word 0xe7a20024
  .word 0xe7a10028
  .word 0xe7a0002c
  .word 0x27a30150
  .word 0xafa30020
  .word 0x27a30030
  .word 0xafa30028
  .word 0x10c00031
  .word 0x00000000
  .word 0x84c40006
  .word 0x2403000a
  .word 0x10830015
  .word 0x00000000
  .word 0x24030005
  .word 0x1083000f
  .word 0x00000000
  .word 0x24030004
  .word 0x10830009
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000008
  .word 0x00000000
  .word 0x24020001
  .word 0x10000005
  .word 0x00000000
  .word 0x24020002
  .word 0x10000002
  .word 0x00000000
  .word 0x24020003
  .word 0xae02007c
  .word 0x00021843
  .word 0x000318c0
  .word 0x007d1821
  .word 0x24630020
  .word 0x8c650000
  .word 0x8c630004
  .word 0x00032082
  .word 0x30420001
  .word 0x00021040
  .word 0x00441818
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00a22821
  .word 0x00041040
  .word 0x00441021
  .word 0x00023080
  .word 0x0200202d
  .word 0x0c148494
  .word 0x00000000
  .word 0xa6000078
  .word 0xa600007a
  .word 0x8e06007c
  .word 0x86030078
  .word 0x24020001
  .word 0x10620081
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000a3
  .word 0x00000000
  .word 0x00061043
  .word 0x000210c0
  .word 0x005d1021
  .word 0x24420020
  .word 0x8c450000
  .word 0x8c420004
  .word 0x00024882
  .word 0x8602007a
  .word 0x24420001
  .word 0xa602007a
  .word 0x0000502d
  .word 0x0000582d
  .word 0x30c80001
  .word 0x00082040
  .word 0x24820001
  .word 0x00491818
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00a23821
  .word 0x70891818
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00a23021
  .word 0x10000051
  .word 0x00000000
  .word 0x000b1040
  .word 0x004b1021
  .word 0x00026080
  .word 0x020c2821
  .word 0x84a40006
  .word 0x8603007a
  .word 0x0064102a
  .word 0x14400047
  .word 0x00000000
  .word 0x00642023
  .word 0x00ec1821
  .word 0x24620006
  .word 0x846f0006
  .word 0x01e4082a
  .word 0x1420003f
  .word 0x00000000
  .word 0x00cc7021
  .word 0x85cd0000
  .word 0x846c0000
  .word 0x018d6023
  .word 0x008c6018
  .word 0x448c0000
  .word 0x00000000
  .word 0x46800060
  .word 0x448f0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x440c0000
  .word 0x00000000
  .word 0xa4ac0000
  .word 0x85cd0002
  .word 0x846c0002
  .word 0x018d6023
  .word 0x708c6018
  .word 0x448c0000
  .word 0x00000000
  .word 0x46800060
  .word 0x844c0000
  .word 0x448c0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x440c0000
  .word 0x00000000
  .word 0xa4ac0002
  .word 0x85cc0004
  .word 0x84630004
  .word 0x006c1823
  .word 0x00831818
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x84420000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x448c0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa4a20004
  .word 0x10000002
  .word 0x00000000
  .word 0x254a0001
  .word 0x256b0001
  .word 0x0169102a
  .word 0x1440ffae
  .word 0x00000000
  .word 0x0149102a
  .word 0x14400009
  .word 0x00000000
  .word 0x24020001
  .word 0xa6020078
  .word 0xa600007a
  .word 0x11000004
  .word 0x00000000
  .word 0x24020002
  .word 0x1000002b
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000028
  .word 0x00000000
  .word 0x00061043
  .word 0x000210c0
  .word 0x005d1021
  .word 0x24420020
  .word 0x8c440000
  .word 0x8c420004
  .word 0x00022882
  .word 0x0000382d
  .word 0x30c20001
  .word 0x00021040
  .word 0x24420001
  .word 0x00451818
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00822021
  .word 0xc7818110
  .word 0x44801000
  .word 0x10000010
  .word 0x00000000
  .word 0x00071040
  .word 0x00471021
  .word 0x00021080
  .word 0x02021821
  .word 0x00821021
  .word 0xc4430008
  .word 0xc4600008
  .word 0x46030000
  .word 0xe4600008
  .word 0x46020034
  .word 0x45000003
  .word 0x00000000
  .word 0x46010000
  .word 0xe4600008
  .word 0x24e70001
  .word 0x00e5102a
  .word 0x1440ffef
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0330
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_propagation off
/* W442: MATCH at 400/400 via the interleaved FUN_0040e3f0_i2f1i3f3 alias, the
 * fGpffff80d0 extern, and scalar staging of x/y/zero/color/z/one. */
// FUN_00413010


u64 FUN_00413010(u64 param_1,int param_2)



{

  s16 uVar1;

  s16 uVar2;

  short sVar3;

  int iVar4;

  int iVar5;

  s16 *puVar6;




  int iVar10;

  int iVar11;

  FclShopBgLocal stack;






  

  iVar4 = *(int *)(param_2 + 0xc);

  {
    s16 *src;
    s16 *dst;
    int count;

    src = (s16 *)DAT_006b0de0_abs;
    dst = stack.table1;
    count = 0x14;

    do {
      uVar1 = *src;
      uVar2 = src[1];
      src = src + 2;
      count = count + -1;
      *dst = uVar1;
      dst[1] = uVar2;
      dst = dst + 2;
    } while (0 < count);
  }

  {
    s16 *src;
    s16 *dst;
    int count;

    src = (s16 *)DAT_006b0e30_abs;
    dst = stack.table2;
    count = 0xc;

    do {
      uVar1 = *src;
      uVar2 = src[1];
      src = src + 2;
      count = count + -1;
      *dst = uVar1;
      dst[1] = uVar2;
      dst = dst + 2;
    } while (0 < count);
  }

  stack.header = *(FclShopBgHeader *)((u8 *)DAT_006b0e64_abs - 4);

  stack.header.words[0] = (u32)stack.table1;

  stack.header.words[2] = (u32)stack.table2;

  iVar5 = *(int *)(iVar4 + 0x7c) >> 1;


  puVar6 = (s16 *)stack.header.words[iVar5 * 2];

  iVar5 = stack.header.words[iVar5 * 2 + 1];


  for (iVar11 = 0; iVar11 < iVar5; iVar11 = iVar11 + 1) {
    s16 *psVar8;
    short *psVar9;

    psVar9 = (short *)(iVar4 + iVar11 * 0xc);

    psVar8 = (s16 *)(puVar6 + iVar11 * 4);

    {
      int x;
      int y;
      float zero;
      u8 color;
      s16 z;
      float one;

      sVar3 = psVar8[2];
      iVar10 = (int)sVar3 >> 1;
      x = ((int)*psVar9 + (int)*psVar8) - (int)sVar3;
      y = ((int)psVar9[1] + (int)psVar8[1]) - (int)sVar3;
      zero = 0.0f;
      color = (u8)psVar9[2];
      z = psVar8[3];
      one = fGpffff80d0 * *(float *)(psVar9 + 4);

      FUN_0040e3f0_i2f1i3f3(x,y,zero,color,z,0,
                            iVar10,iVar10,one,1.0f,1.0f);
    }

  }

  return 0;

}

#pragma opt_propagation reset
/* W327 measured: opt_loop_invariants on normalized_diff 792 -> 780; object 1172/1248 -> 1164/1248 (without/with). */
#pragma opt_loop_invariants on
// FUN_004131A0


#ifndef PC_BUILD
asm u32 FUN_004131a0(u64 param_1, int param_2, int param_3) 
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8cb0000c
  .word 0x3c07006b
  .word 0x24e710e0
  .word 0x27a50070
  .word 0x24040009
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
  .word 0x24e71130
  .word 0x27a50020
  .word 0x24040009
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
  .word 0x27a50070
  .word 0x24060024
  .word 0x0c148494
  .word 0x00000000
  .word 0xa6000024
  .word 0xa6000026
  .word 0x10000009
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a50020
  .word 0x24060024
  .word 0x0c148494
  .word 0x00000000
  .word 0x24020002
  .word 0xa6020024
  .word 0xa6000026
  .word 0x86030024
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
  .word 0x86020026
  .word 0x24420001
  .word 0xa6020026
  .word 0x0000302d
  .word 0x0000382d
  .word 0x10000060
  .word 0x00000000
  .word 0x00071040
  .word 0x00471021
  .word 0x00024080
  .word 0x02082821
  .word 0x84a40006
  .word 0x86030026
  .word 0x0064102a
  .word 0x14400056
  .word 0x00000000
  .word 0x00642023
  .word 0x011d1021
  .word 0x24430070
  .word 0x2462002a
  .word 0x846a002a
  .word 0x0144082a
  .word 0x1420004d
  .word 0x00000000
  .word 0x84690000
  .word 0x84680024
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
  .word 0x84680026
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
  .word 0x84680028
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
  .word 0xc460002c
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
  .word 0x28e20003
  .word 0x1440ff9f
  .word 0x00000000
  .word 0x28c20003
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0xa6020024
  .word 0xa6000026
  .word 0x0000102d
  .word 0x10000077
  .word 0x00000000
  .word 0x86020026
  .word 0x24420001
  .word 0xa6020026
  .word 0x0000382d
  .word 0x0000302d
  .word 0x10000060
  .word 0x00000000
  .word 0x00061040
  .word 0x00461021
  .word 0x00024080
  .word 0x02082821
  .word 0x84a40006
  .word 0x86030026
  .word 0x0064102a
  .word 0x14400056
  .word 0x00000000
  .word 0x00642023
  .word 0x011d1021
  .word 0x24430020
  .word 0x2462002a
  .word 0x846a002a
  .word 0x0144082a
  .word 0x1420004d
  .word 0x00000000
  .word 0x84690000
  .word 0x84680024
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
  .word 0x84680026
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
  .word 0x84680028
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
  .word 0xc460002c
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
  .word 0x28c20003
  .word 0x1440ff9f
  .word 0x00000000
  .word 0x28e20003
  .word 0x14400007
  .word 0x00000000
  .word 0x24020001
  .word 0xa6020024
  .word 0xa6000026
  .word 0x24020002
  .word 0x10000005
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_loop_invariants reset
// W415 census: 8 calls exactly match retail; cosf/sinf aliases resolve to 0x0052e6d8/0x0052e878, so no source defect was found.
// FUN_00413680


#ifndef PC_BUILD
asm u64 FUN_00413680(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8cb5000c
  .word 0x3c06006b
  .word 0x24c61178
  .word 0x27a50080
  .word 0x24040003
  .word 0x84c30000
  .word 0x84c20002
  .word 0x24c60004
  .word 0x2484ffff
  .word 0xa4a30000
  .word 0xa4a20002
  .word 0x24a50004
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000069
  .word 0x00000000
  .word 0x00141840
  .word 0x00741021
  .word 0x00021080
  .word 0x02a28821
  .word 0x2a810002
  .word 0x10200045
  .word 0x00000000
  .word 0xc7818204
  .word 0xc6200008
  .word 0x46000d02
  .word 0x86300000
  .word 0x4600a306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x46000586
  .word 0x44900000
  .word 0x00000000
  .word 0x46800560
  .word 0x4600a306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x86220002
  .word 0x44820800
  .word 0x00000000
  .word 0x46800860
  .word 0x4600081a
  .word 0x4616a85c
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010001
  .word 0x46000024
  .word 0x44130000
  .word 0x4600a306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000586
  .word 0x86220000
  .word 0x00021023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800560
  .word 0x4600a306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x86220002
  .word 0x44820800
  .word 0x00000000
  .word 0x46800860
  .word 0x4600081a
  .word 0x44806000
  .word 0x4616a81c
  .word 0x46000801
  .word 0x46000024
  .word 0x44120000
  .word 0x00141040
  .word 0x005d1021
  .word 0x24500080
  .word 0x92260004
  .word 0x86070000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x92260004
  .word 0x86070006
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0xc62e0008
  .word 0x007d1021
  .word 0x24500080
  .word 0x86240000
  .word 0x86250002
  .word 0x44806000
  .word 0x92260004
  .word 0x86070000
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0xc62e0008
  .word 0x86240000
  .word 0x86250002
  .word 0x44806000
  .word 0x92260004
  .word 0x86070006
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x26940001
  .word 0x2a820003
  .word 0x1440ff96
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// W418 negative: declaring fGpffffad18 extern instead of defining it left nd356/obj532 unchanged (window 560); neutral and rejected.
// FUN_004138E0


#ifndef PC_BUILD
asm u64 FUN_004138e0(u64 param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x8ca3000c
  .word 0xc781ad18
  .word 0xc780ad1c
  .word 0xe7a10008
  .word 0xe7a0000c
  .word 0x10c0001c
  .word 0x00000000
  .word 0x84c50006
  .word 0x24040002
  .word 0x10a40018
  .word 0x00000000
  .word 0x2402000a
  .word 0x10a2000e
  .word 0x00000000
  .word 0x24020005
  .word 0x10a20003
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0xa460000a
  .word 0xc7a00008
  .word 0xe4600004
  .word 0xa4600008
  .word 0xa4600000
  .word 0xa4600002
  .word 0x10000008
  .word 0x00000000
  .word 0xa460000a
  .word 0xc7a0000c
  .word 0xe4600004
  .word 0x240200ff
  .word 0xa4620008
  .word 0xa4640000
  .word 0xa4600002
  .word 0x84640000
  .word 0x24020002
  .word 0x10820030
  .word 0x00000000
  .word 0x24060001
  .word 0x1086005c
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000058
  .word 0x00000000
  .word 0x84620002
  .word 0x24420001
  .word 0xa4620002
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x8462000a
  .word 0x000210c0
  .word 0x005d2021
  .word 0x24820008
  .word 0xc4420000
  .word 0xc480000c
  .word 0x46020041
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010002
  .word 0x3c024100
  .word 0x44820800
  .word 0x00000000
  .word 0x46010003
  .word 0x46001000
  .word 0xe4600004
  .word 0x00051200
  .word 0x00451023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010003
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa4620008
  .word 0x28a20008
  .word 0x14400003
  .word 0x00000000
  .word 0xa4660000
  .word 0xa4600002
  .word 0x0000102d
  .word 0x10000031
  .word 0x00000000
  .word 0x84640002
  .word 0x24840001
  .word 0xa4640002
  .word 0x0004343c
  .word 0x0006343f
  .word 0x8464000a
  .word 0x000420c0
  .word 0x009d2821
  .word 0x24a40008
  .word 0xc4820000
  .word 0xc4a0000c
  .word 0x46020041
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010002
  .word 0x3c0440c0
  .word 0x44840800
  .word 0x00000000
  .word 0x46010003
  .word 0x46001000
  .word 0xe4600004
  .word 0x00062200
  .word 0x00c42023
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010043
  .word 0x3c04437f
  .word 0x44840000
  .word 0x00000000
  .word 0x46010000
  .word 0x46000024
  .word 0x44040000
  .word 0x00000000
  .word 0xa4640008
  .word 0x28c40006
  .word 0x14800006
  .word 0x00000000
  .word 0x24040001
  .word 0xa4640000
  .word 0xa4600002
  .word 0x10000005
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00413B10
#pragma push
#pragma opt_propagation off


u64 FUN_00413b10(u64 param_1,int param_2)
{
  volatile u8 *puVar1;
  float zero;
  float fVar3;
  float one;
  s32 x;
  s32 y;
  s32 a3;
  s32 t0;
  s32 t1;
  s32 t2;
  u8 bVar2;

  puVar1 = *(u8 **)(param_2 + 0xc);
  zero = 0.0f;
  bVar2 = puVar1[8];
  fVar3 = fGpffff80d0 * *(float *)(puVar1 + 4);
  one = 1.0f;
  x = 0;
  y = 0;
  a3 = 0x68;
  t0 = 0;
  t1 = 0x74;
  t2 = 0x7d;
  FUN_0040e3f0_typed(zero, fVar3, one, one, x, y, bVar2,
                     a3, t0, t1, t2);
  return 0;
}
#pragma pop




/* W327 measured: opt_loop_invariants on normalized_diff 1006 -> 986; object 1404/1424 -> 1404/1424 (without/with). */
#pragma opt_loop_invariants on
// W419 negative: DAT_006b1190 array/absolute alias changed FUN_00413b70 nd986/object1404 to nd990/object1408 (window1424; rate .702279 -> .703125); regressed and reverted.
// FUN_00413B70


#ifndef PC_BUILD
asm u32 FUN_00413b70(u64 param_1, int param_2, int param_3) 
{
  .set noreorder
  .word 0x27bdfcc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00c0902d
  .word 0x8cb0000c
  .word 0x3c06006b
  .word 0x24c61190
  .word 0x27a502b0
  .word 0x24040012
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c61220
  .word 0x27a50190
  .word 0x24040024
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c61340
  .word 0x27a50160
  .word 0x24040006
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c61370
  .word 0x27a50130
  .word 0x24040006
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c613a0
  .word 0x27a500d0
  .word 0x2404000c
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c61400
  .word 0x27a50070
  .word 0x2404000c
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c61460
  .word 0x27a50040
  .word 0x24040006
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x27a202b0
  .word 0xafa20040
  .word 0x27a20190
  .word 0xafa20048
  .word 0x27a20160
  .word 0xafa20050
  .word 0x27a20130
  .word 0xafa20058
  .word 0x27a200d0
  .word 0xafa20060
  .word 0x27a20070
  .word 0xafa20068
  .word 0x12400056
  .word 0x00000000
  .word 0x86420006
  .word 0x2451ffe9
  .word 0xae110098
  .word 0x86430006
  .word 0x24020019
  .word 0x10620004
  .word 0x00000000
  .word 0x2402001a
  .word 0x14620012
  .word 0x00000000
  .word 0x0c0f8250
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x8c440028
  .word 0x0c0f151c
  .word 0x00000000
  .word 0x8c42000c
  .word 0x8c42000c
  .word 0x8c420014
  .word 0x8c42001c
  .word 0x26040078
  .word 0x24450004
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x86420006
  .word 0x2442ffe9
  .word 0x2c41000c
  .word 0x10200036
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463c020
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x00111043
  .word 0x000210c0
  .word 0x005d1021
  .word 0x24420040
  .word 0x8c450000
  .word 0x8c420004
  .word 0x00022082
  .word 0x32220001
  .word 0x00021040
  .word 0x00441818
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00a22821
  .word 0x00041040
  .word 0x00441021
  .word 0x00023080
  .word 0x0200202d
  .word 0x0c148494
  .word 0x00000000
  .word 0xa6000094
  .word 0xa6000096
  .word 0x10000017
  .word 0x00000000
  .word 0x00111043
  .word 0x000210c0
  .word 0x005d1021
  .word 0x24420040
  .word 0x8c450000
  .word 0x8c420004
  .word 0x00022082
  .word 0x32220001
  .word 0x00021040
  .word 0x00441818
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00a22821
  .word 0x00041040
  .word 0x00441021
  .word 0x00023080
  .word 0x0200202d
  .word 0x0c148494
  .word 0x00000000
  .word 0xa6000094
  .word 0xa6000096
  .word 0x8e040098
  .word 0x86030094
  .word 0x24020001
  .word 0x10620090
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000008c
  .word 0x00000000
  .word 0x00041043
  .word 0x000210c0
  .word 0x005d1021
  .word 0x24420040
  .word 0x8c450000
  .word 0x8c420004
  .word 0x00025082
  .word 0x86020096
  .word 0x24420001
  .word 0xa6020096
  .word 0x0000582d
  .word 0x0000602d
  .word 0x30890001
  .word 0x00092040
  .word 0x24820001
  .word 0x004a1818
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00a24021
  .word 0x708a1818
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00a23821
  .word 0x10000060
  .word 0x00000000
  .word 0x000c1040
  .word 0x004c1021
  .word 0x00026880
  .word 0x020d3021
  .word 0x84c40006
  .word 0x86030096
  .word 0x0064102a
  .word 0x14400056
  .word 0x00000000
  .word 0x00642823
  .word 0x010d2021
  .word 0x24830006
  .word 0x848f0006
  .word 0x01e5082a
  .word 0x1420004e
  .word 0x00000000
  .word 0x00ed1021
  .word 0x844e0000
  .word 0x848d0000
  .word 0x01ae6823
  .word 0x00ad6818
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800060
  .word 0x448f0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x448e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x440d0000
  .word 0x00000000
  .word 0xa4cd0000
  .word 0x844e0002
  .word 0x848d0002
  .word 0x01ae6823
  .word 0x70ad6818
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800060
  .word 0x846d0000
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x448e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x440d0000
  .word 0x00000000
  .word 0xa4cd0002
  .word 0x844e0004
  .word 0x848d0004
  .word 0x01ae6823
  .word 0x00ad6818
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800060
  .word 0x846d0000
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x448e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x440d0000
  .word 0x00000000
  .word 0xa4cd0004
  .word 0xc4420008
  .word 0xc4800008
  .word 0x46020041
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010042
  .word 0x84620000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0x00000000
  .word 0x46001000
  .word 0xe4c00008
  .word 0x10000002
  .word 0x00000000
  .word 0x256b0001
  .word 0x258c0001
  .word 0x018a102a
  .word 0x1440ff9f
  .word 0x00000000
  .word 0x016a102a
  .word 0x14400009
  .word 0x00000000
  .word 0x24020001
  .word 0xa6020094
  .word 0xa6000096
  .word 0x11200004
  .word 0x00000000
  .word 0x24020002
  .word 0x10000005
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0340
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_loop_invariants reset
#pragma push
#pragma opt_common_subs off
// FUN_00414100


void FUN_00414100(u64 param_1,u64 param_2,int param_3,int param_4,u64 param_5,

                 u32 param_6)



{

  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x23, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x24, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x25, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x27, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x29, 0);
  return;

}

// FUN_004141E0


void FUN_004141e0(u64 param_1,u64 param_2,int param_3,int param_4,
                  int param_5,u32 param_6)
{
  FUN_0040e3c0((float)param_5, param_3, param_4, param_6 & 0xff, 0x81, 0);
  FUN_0040e3c0((float)param_5, param_3, param_4, param_6 & 0xff, 0x82, 0);
  return;
}


// FUN_00414280


void FUN_00414280(u64 param_1,u64 param_2,int param_3,int param_4,int param_5,

                 u32 param_6)



{

  FUN_0040e3c0((float)param_5, param_3 + 0xf9, param_4 + 0x12a, param_6, 0x2f, 0);

  FUN_0040e3c0((float)param_5, param_3 + 0xf9, param_4 + 0x12a, param_6 & 0xff, 0x30, 0);

  return;

}

// W419 negative: DAT_007cada4 array/absolute alias changed FUN_00414320 nd216/object460 to nd247/object464 (window480); reverted.
// FUN_00414320


#ifndef PC_BUILD
asm void FUN_00414320(u64 param_1,u64 param_2,int param_3,int param_4,int param_5,
                 u32 param_6)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x00c0982d
  .word 0x00e0902d
  .word 0x0100882d
  .word 0x0120802d
  .word 0x44910000
  .word 0x00000000
  .word 0x46800320
  .word 0x26640020
  .word 0x26450065
  .word 0x320600ff
  .word 0x24070092
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800320
  .word 0x26640020
  .word 0x26450065
  .word 0x320600ff
  .word 0x2407008d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44900000
  .word 0x00000000
  .word 0x46800060
  .word 0xc78080b4
  .word 0x46010502
  .word 0x44910000
  .word 0x00000000
  .word 0x46800320
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x26640020
  .word 0x26450065
  .word 0x2407008e
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800320
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x26640020
  .word 0x26450065
  .word 0x2407008f
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800320
  .word 0x26640020
  .word 0x26450065
  .word 0x320600ff
  .word 0x24070090
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800320
  .word 0x26640020
  .word 0x26450065
  .word 0x320600ff
  .word 0x24070091
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00414500


void FUN_00414500(u64 param_1,u64 param_2,int param_3,int param_4,int param_5,

                 u32 param_6)



{

  FUN_0040e3c0((float)param_5, param_3 + 0x178, param_4 + 0x5c, param_6, 0x99, 0);

  FUN_0040e3c0((float)param_5, param_3 + 0x178, param_4 + 0x5c, param_6, 0x9a, 0);

  FUN_0040e3c0((float)param_5, param_3 + 0x178, param_4 + 0x5c, param_6, 0x9b, 0);

  FUN_0040e3c0((float)param_5, param_3 + 0x178, param_4 + 0x5c, param_6, 0x9c, 0);

  return;

}

// FUN_004145F0


void FUN_004145f0(u64 param_1,u64 param_2,int param_3,int param_4,int param_5,

                 u32 param_6)



{

  FUN_0040e3c0((float)param_5, param_3 + -0xc, param_4 + -0xe, param_6, 0x93, 0);

  FUN_0040e3c0((float)param_5, param_3 + -0xc, param_4 + -0xe, param_6, 0x94, 0);

  FUN_0040e3c0((float)param_5, param_3 + -0xc, param_4 + -0xe, param_6, 0x95, 0);

  return;

}

// FUN_004146B0


void FUN_004146b0(u64 param_1,u64 param_2,int param_3,int param_4,int param_5,

                 u32 param_6)



{

  FUN_0040e3c0((float)param_5, param_3 + 0xf8, param_4 + -1, param_6, 0x96, 0);

  FUN_0040e3c0((float)param_5, param_3 + 0xf8, param_4 + -1, param_6, 0x97, 0);

  FUN_0040e3c0((float)param_5, param_3 + 0xf8, param_4 + -1, param_6, 0x98, 0);

  return;

}

// FUN_00414770


void FUN_00414770(u64 param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6)



{

  u32 uVar2;
  u8 *puVar1;

  

  puVar1 = *(u8 **)(param_2 + 0xc);

  FUN_0040e3c0((float)param_5,param_3 + 0x139,param_4 + 0x27,param_6 & 0xff,0x8a,0);

  FUN_0040e3c0((float)param_5,param_3 + 0x139,param_4 + 0x27,param_6 & 0xff,0x8b,0);

  FUN_0040e3c0((float)param_5,param_3 + 0x139,param_4 + 0x27,param_6 & 0xff,0x8c,0);

  FUN_0040e3c0_i(param_3 + 0x16a,param_4 + 0x2a,0.0f,param_6 & 0xff,0,
                 (u32)puVar1[0x7c] * 2 + 1);

  uVar2 = func_00171110(*(s16 *)(puVar1 + 0x78),2);

  FUN_003b2cb0_i(param_3 + 0x18a,param_4 + 0x2c,0.0f,param_6 | 0xffffff00,6,1,uVar2,0,0);

  return;

}

// FUN_004148B0


void FUN_004148b0(u64 param_1,u64 param_2,int param_3,int param_4,int param_5,

                 u32 param_6)



{

  FUN_0040e3c0((float)param_5, param_3 + 0xf9, param_4 + 0x11d, param_6, 0x2d, 0);

  FUN_0040e3c0((float)param_5, param_3 + 0xf9, param_4 + 0x11d, param_6 & 0xff, 0x2e, 0);

  return;

}

// FUN_00414950


void FUN_00414950(u64 param_1,u64 param_2,int param_3,int param_4,int param_5,

                 u32 param_6)



{

  FUN_0040e3c0((float)param_5, param_3 + 0xf9, param_4 + 0x12f, param_6, 0x2b, 0);

  FUN_0040e3c0((float)param_5, param_3 + 0xf9, param_4 + 0x12f, param_6 & 0xff, 0x2c, 0);

  return;

}

#pragma push
// FUN_004149F0


void FUN_004149f0(u64 param_1,u64 param_2,int param_3,int param_4,u64 param_5,
                 u32 param_6)
{
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x23, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x24, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x26, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x28, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x29, 0);
  return;
}
#pragma pop

// FUN_00414AD0


void FUN_00414ad0(u64 param_1,u64 param_2,int param_3,int param_4,u64 param_5,

                 u32 param_6)



{

  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x23, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x24, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x25, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x27, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x29, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0xd7, 0);

  return;

}

// FUN_00414BD0


void FUN_00414bd0(u64 param_1,u64 param_2,int param_3,int param_4,int param_5,

                 u32 param_6)



{

  FUN_0040e3c0((float)param_5, param_3 + 0x122, param_4 + 0xde, param_6, 0x2b, 0);

  FUN_0040e3c0((float)param_5, param_3 + 0x122, param_4 + 0xde, param_6 & 0xff, 0x2c, 0);

  return;

}

// FUN_00414C70


void FUN_00414c70(u64 param_1,u64 param_2,int param_3,int param_4,u64 param_5,

                 u32 param_6)



{

  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x23, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x24, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x25, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x27, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0x2a, 0);
  FUN_0040e3c0_i(param_3 + -6, param_4 + -10, 0.0f, param_6 & 0xff, 0xd7, 0);

  return;

}
#pragma pop

// FUN_00414D70


void FUN_00414d70(u64 param_1,u64 param_2,int param_3,int param_4,int param_5,

                 u32 param_6)



{

  FUN_0040e3c0((float)param_5, param_3 + 0x122, param_4 + 0xde, param_6, 0x2b, 0);

  FUN_0040e3c0((float)param_5, param_3 + 0x122, param_4 + 0xde, param_6 & 0xff, 0x2c, 0);

  return;

}

/* W419 negative: dereferencing PTR_FUN_006b1490/1494/1498 into the three pointer locals left FUN_00414e10 at nd266/object368 (baseline nd266/object368, window464); reverted. */
// FUN_00414E10
#pragma push
#pragma opt_lifetimes on


#ifndef PC_BUILD
asm u64 FUN_00414e10(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdff20
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x8cb4000c
  .word 0x3c02006b
  .word 0xc4421490
  .word 0x3c02006b
  .word 0xc4411494
  .word 0x3c02006b
  .word 0xc4401498
  .word 0xe7a200c8
  .word 0xe7a100cc
  .word 0xe7a000d0
  .word 0x3c06006b
  .word 0x24c614a0
  .word 0x27a500a0
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
  .word 0xc780ad20
  .word 0xe7a000dc
  .word 0xc780ad24
  .word 0xe7a000d8
  .word 0xc781ad28
  .word 0xc780ad2c
  .word 0xe7a100c0
  .word 0xe7a000c4
  .word 0xc781ad30
  .word 0xc780ad34
  .word 0xe7a100b8
  .word 0xe7a000bc
  .word 0x3c06006b
  .word 0x24c614c0
  .word 0x27a50070
  .word 0x24040006
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x27a200c8
  .word 0xafa20070
  .word 0x27a200a0
  .word 0xafa20078
  .word 0x27a200dc
  .word 0xafa20080
  .word 0x27a200d8
  .word 0xafa20088
  .word 0x27a200c0
  .word 0xafa20090
  .word 0x27a200b8
  .word 0xafa20098
  .word 0x8e820098
  .word 0x00021043
  .word 0x000210c0
  .word 0x005d1021
  .word 0x8c530070
  .word 0x8c520074
  .word 0x0000a82d
  .word 0x10000016
  .word 0x00000000
  .word 0x00151040
  .word 0x00551021
  .word 0x00021080
  .word 0x02821021
  .word 0xc44d0008
  .word 0x84460000
  .word 0x84470002
  .word 0x84490004
  .word 0x44806000
  .word 0x0220202d
  .word 0x0200282d
  .word 0x0000402d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x46006b86
  .word 0x00151080
  .word 0x02621021
  .word 0x8c420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26b50001
  .word 0x02b2102a
  .word 0x1440ffe9
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00e0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop

/* W327 measured: opt_loop_invariants on normalized_diff 719 -> 672; object 1252/1280 -> 1252/1280 (without/with). */
#pragma opt_loop_invariants on
// FUN_00414FE0


#ifndef PC_BUILD
asm u32 FUN_00414fe0(u64 param_1,int param_2,long param_3)
{
  .set noreorder
  .word 0x27bdfe00
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8cb0000c
  .word 0x3c07006b
  .word 0x24e714f0
  .word 0x27a501d0
  .word 0x24040006
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
  .word 0x24e71520
  .word 0x27a50170
  .word 0x2404000c
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
  .word 0x24e71580
  .word 0x27a500e0
  .word 0x24040012
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
  .word 0x24e71610
  .word 0x27a500b0
  .word 0x24040006
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
  .word 0x24e71640
  .word 0x27a50050
  .word 0x2404000c
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
  .word 0x24e716a0
  .word 0x27a50020
  .word 0x24040005
  .word 0x8ce30000
  .word 0x8ce20004
  .word 0x24e70008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x27a201d0
  .word 0xafa20020
  .word 0x27a20170
  .word 0xafa20028
  .word 0x27a200e0
  .word 0xafa20030
  .word 0x27a200b0
  .word 0xafa20038
  .word 0x27a20050
  .word 0xafa20040
  .word 0x10c00049
  .word 0x00000000
  .word 0xa6000094
  .word 0xa6000096
  .word 0x84c20006
  .word 0x2442fffb
  .word 0x2c41000a
  .word 0x1020002d
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463c050
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0xae000098
  .word 0x10000023
  .word 0x00000000
  .word 0x24020001
  .word 0xae020098
  .word 0x1000001f
  .word 0x00000000
  .word 0x24020002
  .word 0xae020098
  .word 0x1000001b
  .word 0x00000000
  .word 0x24020003
  .word 0xae020098
  .word 0x10000017
  .word 0x00000000
  .word 0x24020004
  .word 0xae020098
  .word 0x10000013
  .word 0x00000000
  .word 0x24020005
  .word 0xae020098
  .word 0x1000000f
  .word 0x00000000
  .word 0x24020006
  .word 0xae020098
  .word 0x1000000b
  .word 0x00000000
  .word 0x24020007
  .word 0xae020098
  .word 0x10000007
  .word 0x00000000
  .word 0x24020008
  .word 0xae020098
  .word 0x10000003
  .word 0x00000000
  .word 0x24020009
  .word 0xae020098
  .word 0x8e030098
  .word 0x00031043
  .word 0x000210c0
  .word 0x005d1021
  .word 0x24420020
  .word 0x8c450000
  .word 0x8c420004
  .word 0x00022082
  .word 0x30620001
  .word 0x00021040
  .word 0x00441818
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00a22821
  .word 0x00041040
  .word 0x00441021
  .word 0x00023080
  .word 0x0200202d
  .word 0x0c148494
  .word 0x00000000
  .word 0x8e040098
  .word 0x86030094
  .word 0x24020001
  .word 0x10620090
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000008c
  .word 0x00000000
  .word 0x00041043
  .word 0x000210c0
  .word 0x005d1021
  .word 0x24420020
  .word 0x8c450000
  .word 0x8c420004
  .word 0x00025082
  .word 0x86020096
  .word 0x24420001
  .word 0xa6020096
  .word 0x0000582d
  .word 0x0000602d
  .word 0x30890001
  .word 0x00092040
  .word 0x24820001
  .word 0x004a1818
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00a24021
  .word 0x708a1818
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00a23821
  .word 0x10000060
  .word 0x00000000
  .word 0x000c1040
  .word 0x004c1021
  .word 0x00026880
  .word 0x020d3021
  .word 0x84c40006
  .word 0x86030096
  .word 0x0064102a
  .word 0x14400056
  .word 0x00000000
  .word 0x00642823
  .word 0x010d2021
  .word 0x24830006
  .word 0x848f0006
  .word 0x01e5082a
  .word 0x1420004e
  .word 0x00000000
  .word 0x00ed1021
  .word 0x844e0000
  .word 0x848d0000
  .word 0x01ae6823
  .word 0x00ad6818
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800060
  .word 0x448f0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x448e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x440d0000
  .word 0x00000000
  .word 0xa4cd0000
  .word 0x844e0002
  .word 0x848d0002
  .word 0x01ae6823
  .word 0x70ad6818
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800060
  .word 0x846d0000
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x448e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x440d0000
  .word 0x00000000
  .word 0xa4cd0002
  .word 0x844e0004
  .word 0x848d0004
  .word 0x01ae6823
  .word 0x00ad6818
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800060
  .word 0x846d0000
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x448e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x440d0000
  .word 0x00000000
  .word 0xa4cd0004
  .word 0xc4420008
  .word 0xc4800008
  .word 0x46020041
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010042
  .word 0x84620000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0x00000000
  .word 0x46001000
  .word 0xe4c00008
  .word 0x10000002
  .word 0x00000000
  .word 0x256b0001
  .word 0x258c0001
  .word 0x018a102a
  .word 0x1440ff9f
  .word 0x00000000
  .word 0x016a102a
  .word 0x14400009
  .word 0x00000000
  .word 0x24020001
  .word 0xa6020094
  .word 0xa6000096
  .word 0x11200004
  .word 0x00000000
  .word 0x24020002
  .word 0x10000005
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0200
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_loop_invariants reset
// FUN_004154E0
#ifndef PC_BUILD
asm void FUN_004154e0(u64 param_1,u64 param_2,int param_3,int param_4,
                 int param_5,int param_6)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x00c0902d
  .word 0x00e0882d
  .word 0x0100802d
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44890000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000d02
  .word 0x44900000
  .word 0x00000000
  .word 0x46800320
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x44806800
  .word 0x3c024020
  .word 0x44827000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407005a
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x44900000
  .word 0x00000000
  .word 0x46800320
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x262500d8
  .word 0x44806800
  .word 0x3c024020
  .word 0x44827000
  .word 0x0240202d
  .word 0x2407005b
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00415650
#ifndef PC_BUILD
asm void FUN_00415650(u64 param_1,u64 param_2,int param_3,int param_4,
                 int param_5,int param_6)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x00c0902d
  .word 0x00e0882d
  .word 0x0100802d
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44890000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000d02
  .word 0x44900000
  .word 0x00000000
  .word 0x46800320
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x44806800
  .word 0x3c024020
  .word 0x44827000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407005c
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x44900000
  .word 0x00000000
  .word 0x46800320
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x26250196
  .word 0x44806800
  .word 0x3c024020
  .word 0x44827000
  .word 0x0240202d
  .word 0x2407005d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_004157C0


void FUN_004157c0(u64 param_1,u64 param_2,int param_3,int param_4,int param_5,

                 u32 param_6)



{

  FUN_0040e3c0((float)param_5, param_3 + 0x2c, param_4 + 100, param_6, 0x5e, 0);

  FUN_0040e3c0((float)param_5, param_3 + -0x14, param_4 + 0x32, param_6, 0x5f, 0);

  FUN_0040e3c0((float)param_5, param_3 + -0x1a, param_4 + 0xb8, param_6, 0x60, 0);

  return;

}

// FUN_00415880
#ifndef PC_BUILD
asm void FUN_00415880(u64 param_1,u64 param_2,int param_3,int param_4,
                 int param_5,int param_6)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x00c0902d
  .word 0x00e0882d
  .word 0x0100802d
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44890000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000d02
  .word 0x44900000
  .word 0x00000000
  .word 0x46800320
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x44806800
  .word 0x3c024020
  .word 0x44827000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070061
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x44900000
  .word 0x00000000
  .word 0x46800320
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x26250132
  .word 0x44806800
  .word 0x3c024020
  .word 0x44827000
  .word 0x0240202d
  .word 0x24070062
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x44900000
  .word 0x00000000
  .word 0x46800320
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x26250197
  .word 0x44806800
  .word 0x3c024020
  .word 0x44827000
  .word 0x0240202d
  .word 0x24070063
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00415A70


void FUN_00415a70(u64 param_1,u64 param_2,int param_3,int param_4,int param_5,

                 u32 param_6)



{

  FUN_0040e3c0((float)param_5, param_3 + 0x5b, param_4 + 0x31, param_6, 0x65, 0);

  FUN_0040e3c0((float)param_5, param_3 + -0x14, param_4 + 0x2f, param_6, 0x66, 0);

  FUN_0040e3c0((float)param_5, param_3 + -0x26, param_4 + 0x95, param_6, 0x67, 0);

  return;

}

// FUN_00415B30


void FUN_00415b30(u64 param_1,u64 param_2,int param_3,int param_4,int param_5,

                 u8 param_6)



{

  FUN_0040e3c0((float)param_5, param_3 + 0x191, param_4 + 0x96, param_6 & 0xff, 100, 0);

  return;

}

// FUN_00415B70


void FUN_00415b70(u64 param_1,u64 param_2,int param_3,int param_4,int param_5,

                 u32 param_6)



{

  FUN_0040e3c0((float)param_5, param_3 + 0x160, param_4 + 0x5c, param_6, 0x69, 0);

  FUN_0040e3c0((float)param_5, param_3 + 0x160, param_4 + 0x5c, param_6, 0x6a, 0);

  FUN_0040e3c0((float)param_5, param_3 + 0x160, param_4 + 0x5c, param_6, 0x6b, 0);

  return;

}

// W418 negative: typed 11-arg callback measured nd241/336 -> nd236/328 (window 400); size rate worsened 71.73% -> 71.95%, reverted.
// W420 negative: _sda aliases for PTR_FUN_007cda28/007cda30 changed FUN_00415c30 nd241/object336 to nd243/object328 (window 400); rate 71.73% -> 74.09%, reverted.
// FUN_00415C30


#ifndef PC_BUILD
asm u64 FUN_00415c30(int param_1, int param_2) 
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x8cb4000c
  .word 0xc780ad38
  .word 0xe7a000bc
  .word 0xc781ad40
  .word 0xc780ad44
  .word 0xe7a100b0
  .word 0xe7a000b4
  .word 0x3c02006b
  .word 0xc44216c8
  .word 0x3c02006b
  .word 0xc44116cc
  .word 0x3c02006b
  .word 0xc44016d0
  .word 0xe7a200a0
  .word 0xe7a100a4
  .word 0xe7a000a8
  .word 0xc780ad48
  .word 0xe7a000b8
  .word 0xc781ad50
  .word 0xc780ad54
  .word 0xe7a10098
  .word 0xe7a0009c
  .word 0x3c06006b
  .word 0x24c616e0
  .word 0x27a50070
  .word 0x24040005
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x27a200bc
  .word 0xafa20070
  .word 0x27a200b0
  .word 0xafa20078
  .word 0x27a200a0
  .word 0xafa20080
  .word 0x27a200b8
  .word 0xafa20088
  .word 0x27a20098
  .word 0xafa20090
  .word 0x8e820098
  .word 0x00021043
  .word 0x000210c0
  .word 0x005d1021
  .word 0x8c530070
  .word 0x8c520074
  .word 0x0000a82d
  .word 0x10000016
  .word 0x00000000
  .word 0x00151040
  .word 0x00551021
  .word 0x00021080
  .word 0x02821021
  .word 0xc44d0008
  .word 0x84460000
  .word 0x84470002
  .word 0x84490004
  .word 0x44806000
  .word 0x0220202d
  .word 0x0200282d
  .word 0x0000402d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x46006b86
  .word 0x00151080
  .word 0x02621021
  .word 0x8c420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26b50001
  .word 0x02b2102a
  .word 0x1440ffe9
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* W327 measured: opt_loop_invariants on normalized_diff 573 -> 524; object 1116/1152 -> 1116/1152 (without/with). */
#pragma opt_loop_invariants on
// W419 negative: DAT_006b1710 array/absolute alias changed FUN_00415dc0 nd524/object1116 to nd724/object1120 (window1152; rate .469534 -> .646429); regressed and reverted.
// FUN_00415DC0


#ifndef PC_BUILD
asm u64 FUN_00415dc0(u64 param_1,int param_2,u8 *param_3)
{
  .set noreorder
  .word 0x27bdfe70
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8cb0000c
  .word 0x3c07006b
  .word 0x24e71710
  .word 0x27a50060
  .word 0x24040024
  .word 0x8ce30000
  .word 0x8ce20004
  .word 0x24e70008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xc781ad58
  .word 0xc780ad5c
  .word 0xe7a10188
  .word 0xe7a0018c
  .word 0x27a20060
  .word 0xafa20188
  .word 0x10c00061
  .word 0x00000000
  .word 0x84c40006
  .word 0x24030001
  .word 0x14830004
  .word 0x00000000
  .word 0xae00004c
  .word 0x10000005
  .word 0x00000000
  .word 0x24020004
  .word 0x14820002
  .word 0x00000000
  .word 0xae03004c
  .word 0x84c30006
  .word 0x24020002
  .word 0x10620034
  .word 0x00000000
  .word 0x24020004
  .word 0x1062002f
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000002c
  .word 0x00000000
  .word 0xa6000048
  .word 0xa600004a
  .word 0x0c0f8250
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x8c440028
  .word 0x0c0f151c
  .word 0x00000000
  .word 0x0040882d
  .word 0x260400a0
  .word 0x26250034
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x260400bc
  .word 0x26250018
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x8e220010
  .word 0x8c42000c
  .word 0x8c420014
  .word 0x8c42001c
  .word 0x2604006c
  .word 0x8c450014
  .word 0x24060034
  .word 0x0c148494
  .word 0x00000000
  .word 0x8e22000c
  .word 0x8c42000c
  .word 0x8c420014
  .word 0x8c42001c
  .word 0x26040050
  .word 0x24450004
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0xa6000048
  .word 0xa600004a
  .word 0x8e03004c
  .word 0x00031043
  .word 0x000210c0
  .word 0x005d1021
  .word 0x24420188
  .word 0x8c530000
  .word 0x8c420004
  .word 0x00029082
  .word 0x0000a02d
  .word 0x30620001
  .word 0x00021040
  .word 0x00528818
  .word 0x1000000e
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00021080
  .word 0x02022021
  .word 0x02911821
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x02622821
  .word 0x2406000c
  .word 0x0c148494
  .word 0x00000000
  .word 0x26940001
  .word 0x0292102a
  .word 0x1440fff1
  .word 0x00000000
  .word 0x8e04004c
  .word 0x86030048
  .word 0x24020002
  .word 0x10620095
  .word 0x00000000
  .word 0x24020001
  .word 0x10620090
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000008e
  .word 0x00000000
  .word 0x00041043
  .word 0x000210c0
  .word 0x005d1021
  .word 0x24420188
  .word 0x8c450000
  .word 0x8c420004
  .word 0x00025082
  .word 0x8602004a
  .word 0x24420001
  .word 0xa602004a
  .word 0x0000602d
  .word 0x0000582d
  .word 0x30890001
  .word 0x00092040
  .word 0x24820001
  .word 0x004a1818
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00a24021
  .word 0x708a1818
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00a23821
  .word 0x10000060
  .word 0x00000000
  .word 0x000b1040
  .word 0x004b1021
  .word 0x00026880
  .word 0x020d3021
  .word 0x84c40006
  .word 0x8603004a
  .word 0x0064102a
  .word 0x14400056
  .word 0x00000000
  .word 0x00642823
  .word 0x010d2021
  .word 0x24830006
  .word 0x848f0006
  .word 0x01e5082a
  .word 0x1420004e
  .word 0x00000000
  .word 0x00ed1021
  .word 0x844e0000
  .word 0x848d0000
  .word 0x01ae6823
  .word 0x00ad6818
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800060
  .word 0x448f0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x448e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x440d0000
  .word 0x00000000
  .word 0xa4cd0000
  .word 0x844e0002
  .word 0x848d0002
  .word 0x01ae6823
  .word 0x70ad6818
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800060
  .word 0x846d0000
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x448e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x440d0000
  .word 0x00000000
  .word 0xa4cd0002
  .word 0x844e0004
  .word 0x848d0004
  .word 0x01ae6823
  .word 0x00ad6818
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800060
  .word 0x846d0000
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x448e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x440d0000
  .word 0x00000000
  .word 0xa4cd0004
  .word 0xc4420008
  .word 0xc4800008
  .word 0x46020041
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010042
  .word 0x84620000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0x00000000
  .word 0x46001000
  .word 0xe4c00008
  .word 0x10000002
  .word 0x00000000
  .word 0x258c0001
  .word 0x256b0001
  .word 0x016a102a
  .word 0x1440ff9f
  .word 0x00000000
  .word 0x018a102a
  .word 0x14400009
  .word 0x00000000
  .word 0x24020001
  .word 0xa6020048
  .word 0xa600004a
  .word 0x11200004
  .word 0x00000000
  .word 0x24020002
  .word 0x10000006
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000003
  .word 0x00000000
  .word 0x10000001
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0190
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_loop_invariants reset
// FUN_00416240


#ifndef PC_BUILD
asm void FUN_00416240(u64 param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6)
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
  .word 0x00c0a82d
  .word 0x00e0b02d
  .word 0x0100a02d
  .word 0x0120982d
  .word 0x8ca2000c
  .word 0x24500050
  .word 0x26b20038
  .word 0x26d1002b
  .word 0x44940000
  .word 0x00000000
  .word 0x46800320
  .word 0x326600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700a4
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800320
  .word 0x326600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700a5
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2644000b
  .word 0x26250012
  .word 0x44806000
  .word 0x326600ff
  .word 0x92020004
  .word 0x00024040
  .word 0x0000382d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x82050008
  .word 0x86040000
  .word 0x0c05c444
  .word 0x00000000
  .word 0x2644002b
  .word 0x26250014
  .word 0x44806000
  .word 0x2403ff00
  .word 0x02633025
  .word 0x24070005
  .word 0x24080001
  .word 0x0040482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c0ecb2c
  .word 0x00000000
  .word 0x26b1ffeb
  .word 0x26d0ffe6
  .word 0x44940000
  .word 0x00000000
  .word 0x46800320
  .word 0x326600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x240700a1
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800320
  .word 0x326600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x240700a2
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800320
  .word 0x326600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x240700a3
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
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
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* W327 measured: opt_common_subs off normalized_diff 555 -> 486; object 752/736 -> 736/736 (without/with). */
#pragma opt_common_subs off
// FUN_004163F0


#ifndef PC_BUILD
asm void FUN_004163f0(u64 param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00c0a82d
  .word 0x00e0b02d
  .word 0x0100a02d
  .word 0x0120982d
  .word 0x8ca2000c
  .word 0x2450006c
  .word 0x26b2014e
  .word 0x26d1002b
  .word 0x44940000
  .word 0x00000000
  .word 0x46800320
  .word 0x326600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700a9
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800320
  .word 0x326600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700aa
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800320
  .word 0x26250001
  .word 0x326600ff
  .word 0x0240202d
  .word 0x240700ab
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800320
  .word 0x26250001
  .word 0x326600ff
  .word 0x0240202d
  .word 0x240700ac
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800320
  .word 0x326600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700ad
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800320
  .word 0x326600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700ae
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26440058
  .word 0x26250007
  .word 0x44806000
  .word 0x326600ff
  .word 0x96030002
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021840
  .word 0x8f82b730
  .word 0x00621021
  .word 0x90420002
  .word 0x2442ffff
  .word 0x00021040
  .word 0x24480001
  .word 0x24070003
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x92060004
  .word 0x27a40088
  .word 0x2785ad60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x92020004
  .word 0x2841000a
  .word 0x1020000c
  .word 0x00000000
  .word 0x26440047
  .word 0x26250024
  .word 0x44806000
  .word 0x326600ff
  .word 0x24070002
  .word 0x27a80088
  .word 0x00e0482d
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x26440042
  .word 0x26250024
  .word 0x44806000
  .word 0x326600ff
  .word 0x24070002
  .word 0x27a80088
  .word 0x00e0482d
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x26440060
  .word 0x2625001b
  .word 0x44806000
  .word 0x2402ff00
  .word 0x02623025
  .word 0x96030002
  .word 0x00031100
  .word 0x00431821
  .word 0x8f82b7f4
  .word 0x00434821
  .word 0x24070005
  .word 0x24080001
  .word 0x0000502d
  .word 0x240b0078
  .word 0x0c0eccb4
  .word 0x00000000
  .word 0x26b10143
  .word 0x26d0000d
  .word 0x44940000
  .word 0x00000000
  .word 0x46800320
  .word 0x326600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x240700a6
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800320
  .word 0x326600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x240700a7
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800320
  .word 0x326600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x240700a8
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_common_subs reset
// FUN_004166D0


void FUN_004166d0(u64 param_1,int param_2,int param_3,int param_4,int param_5,

                 u32 param_6)



{

  f32 zero;
  u32 uVar2;
  u8 *puVar1;
  s32 call_a0;
  s32 call_a1;

  

  zero = 0.0f;
  puVar1 = (u8 *)(*(int *)(param_2 + 0xc) + 0xa0);
  call_a0 = param_3 + 0x7b;
  call_a1 = param_4 + 100;
  asm volatile("" : "+r" (call_a0), "+r" (call_a1));
  FUN_0040e3c0(zero,call_a0,call_a1,param_6,0xaf,0);
  call_a0 = param_3 + 0x7b;
  call_a1 = param_4 + 100;
  asm volatile("" : "+r" (call_a0), "+r" (call_a1));
  FUN_0040e3c0(zero,call_a0,call_a1,param_6,0xb0,0);

  call_a0 = param_3 + 0xcb;
  call_a1 = param_4 + 0x76;
  asm volatile("" : "+r" (call_a0), "+r" (call_a1));
  FUN_0040e3c0(zero,call_a0,call_a1,param_6,4,
               (u32)puVar1[4] * 2 + 1);

  uVar2 = func_00171110(*(s16 *)puVar1,2);
  call_a0 = param_3 + 0xed;
  call_a1 = param_4 + 0x79;
  asm volatile("" : "+r" (call_a0), "+r" (call_a1));
  FUN_003b2cb0_typed(zero,call_a0,call_a1,param_6 | 0xffffff00,6,1,uVar2,0,0);

  return;

}

// FUN_004167D0
#pragma push
#pragma schedule on


#ifndef PC_BUILD
asm void FUN_004167d0(u64 param_1,int param_2,int param_3,int param_4,int param_5,
                 u8 param_6)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00c0a02d
  .word 0x00e0982d
  .word 0x0100902d
  .word 0x0120882d
  .word 0x8ca6000c
  .word 0x8785ad68
  .word 0x8784ad6a
  .word 0x8783ad6c
  .word 0x8782ad6e
  .word 0xa7a50098
  .word 0xa7a4009a
  .word 0xa7a3009c
  .word 0xa7a2009e
  .word 0x24d00050
  .word 0x24d500a0
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684017d
  .word 0x26650097
  .word 0x322600ff
  .word 0x240700b1
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684017d
  .word 0x26650097
  .word 0x322600ff
  .word 0x240700b2
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684017d
  .word 0x26650097
  .word 0x322600ff
  .word 0x240700b5
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x268401ed
  .word 0x2665009f
  .word 0x322600ff
  .word 0x92a80004
  .word 0x24070005
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684017d
  .word 0x26650097
  .word 0x322600ff
  .word 0x240700b3
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684017d
  .word 0x26650097
  .word 0x322600ff
  .word 0x240700b4
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684017d
  .word 0x266500b3
  .word 0x322600ff
  .word 0x240700b5
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x92030004
  .word 0x2402000d
  .word 0x10620015
  .word 0x00000000
  .word 0x86060010
  .word 0x27a40090
  .word 0x2785ad60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x2683017d
  .word 0x87a20098
  .word 0x00622021
  .word 0x266300b3
  .word 0x87a2009a
  .word 0x00622821
  .word 0x44806000
  .word 0x322600ff
  .word 0x24070001
  .word 0x27a80090
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684017d
  .word 0x266500b3
  .word 0x322600ff
  .word 0x240700b7
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684017d
  .word 0x266500b3
  .word 0x322600ff
  .word 0x240700b6
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x86a60010
  .word 0x27a40090
  .word 0x2785ad60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x87b7009e
  .word 0x87a3009c
  .word 0x2682017d
  .word 0x0043b021
  .word 0x266200b3
  .word 0x00572821
  .word 0x44806000
  .word 0x322600ff
  .word 0x02c0202d
  .word 0x24070001
  .word 0x27a80090
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684017d
  .word 0x266500cf
  .word 0x322600ff
  .word 0x240700b5
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x92030004
  .word 0x2402000d
  .word 0x10620015
  .word 0x00000000
  .word 0x86060012
  .word 0x27a40090
  .word 0x2785ad60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x2683017d
  .word 0x87a20098
  .word 0x00622021
  .word 0x266300cf
  .word 0x87a2009a
  .word 0x00622821
  .word 0x44806000
  .word 0x322600ff
  .word 0x24070001
  .word 0x27a80090
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684017d
  .word 0x266500cf
  .word 0x322600ff
  .word 0x240700b7
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684017d
  .word 0x266500cf
  .word 0x322600ff
  .word 0x240700b6
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x86a60012
  .word 0x27a40090
  .word 0x2785ad60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x266200cf
  .word 0x00572821
  .word 0x44806000
  .word 0x322600ff
  .word 0x02c0202d
  .word 0x24070001
  .word 0x27a80090
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0xdfbf0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop

// W415 probes (all reverted): direct arithmetic for CONCAT12 gave nd 199 -> 209, obj 388 -> 384; masked composition gave nd 199 -> 216, obj 396; typed f32 alias plus masked composition gave nd 199 -> 207, obj 384.
// W419 negative: DAT_007caef0 array/absolute alias changed FUN_00416b90 nd199/object388 to nd242/object392 (window400); reverted.
// FUN_00416B90


#ifndef PC_BUILD
asm void FUN_00416b90(u64 param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x00c0a02d
  .word 0x00e0982d
  .word 0x0100902d
  .word 0x0120882d
  .word 0x8ca2000c
  .word 0x245000a0
  .word 0x44910000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808200
  .word 0x46010502
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x26840126
  .word 0x266500f5
  .word 0x240700f8
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x26840126
  .word 0x266500f5
  .word 0x240700f9
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26840148
  .word 0x266500f9
  .word 0x44806000
  .word 0x2402ff00
  .word 0x02223025
  .word 0x92020009
  .word 0x00021c00
  .word 0x3c02ffff
  .word 0x00621824
  .word 0x86020000
  .word 0x3042ffff
  .word 0x00435025
  .word 0x24070001
  .word 0x24080005
  .word 0x00e0482d
  .word 0x0c0f1f88
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* W327 measured: opt_common_subs off normalized_diff 582 -> 458; object 804/784 -> 784/784 (without/with). */
#pragma opt_common_subs off
// FUN_00416D20


#ifndef PC_BUILD
asm void FUN_00416d20(u64 param_1,int param_2,int param_3,int param_4,int param_5,
                 u8 param_6)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x00c0a02d
  .word 0x00e0982d
  .word 0x0100902d
  .word 0x0120882d
  .word 0x8ca2000c
  .word 0x245000bc
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684fff9
  .word 0x26650047
  .word 0x322600ff
  .word 0x240700ba
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684fff9
  .word 0x26650047
  .word 0x322600ff
  .word 0x240700bb
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684fff9
  .word 0x26650047
  .word 0x322600ff
  .word 0x240700bc
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684fff9
  .word 0x26650047
  .word 0x322600ff
  .word 0x240700bd
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684fff9
  .word 0x26650047
  .word 0x322600ff
  .word 0x240700be
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684fff9
  .word 0x26650047
  .word 0x322600ff
  .word 0x240700bf
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684fff9
  .word 0x26650047
  .word 0x322600ff
  .word 0x240700c0
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x82080002
  .word 0x2901000a
  .word 0x1020000c
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684001d
  .word 0x2665009c
  .word 0x322600ff
  .word 0x24070006
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684000c
  .word 0x2665009c
  .word 0x322600ff
  .word 0x2402000a
  .word 0x0102001a
  .word 0x00004012
  .word 0x24070006
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x26840021
  .word 0x2665009c
  .word 0x322600ff
  .word 0x82030002
  .word 0x2402000a
  .word 0x0062001a
  .word 0x00004010
  .word 0x24070006
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x82080003
  .word 0x2901000a
  .word 0x1020000c
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684005f
  .word 0x2665009f
  .word 0x322600ff
  .word 0x24070007
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x26840050
  .word 0x2665009f
  .word 0x322600ff
  .word 0x2402000a
  .word 0x0102001a
  .word 0x00004012
  .word 0x24070007
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800320
  .word 0x2684006a
  .word 0x2665009f
  .word 0x322600ff
  .word 0x82030003
  .word 0x2402000a
  .word 0x0062001a
  .word 0x00004010
  .word 0x24070007
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800520
  .word 0x82040002
  .word 0x82050003
  .word 0x0c05f62c
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c05f6b8
  .word 0x00000000
  .word 0x24430006
  .word 0x24020007
  .word 0x0062001a
  .word 0x00004010
  .word 0x2684006b
  .word 0x266500b9
  .word 0x322600ff
  .word 0x4600a306
  .word 0x24070008
  .word 0x0c1038f0
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_common_subs reset
// W419 negative: PTR_FUN_006b1830 array/absolute alias left FUN_00417030 at nd119/object292 (baseline nd119/object292, window304); neutral and reverted.
// FUN_00417030


#ifndef PC_BUILD
asm u64 FUN_00417030(int param_1, int param_2) 
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x8cb4000c
  .word 0x3c06006b
  .word 0x24c61830
  .word 0x27a50070
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
  .word 0xc781ad70
  .word 0xc780ad74
  .word 0xe7a10088
  .word 0xe7a0008c
  .word 0x27a20070
  .word 0xafa20088
  .word 0x8e82004c
  .word 0x00021043
  .word 0x000210c0
  .word 0x005d1021
  .word 0x8c530088
  .word 0x8c52008c
  .word 0x0000a82d
  .word 0x10000016
  .word 0x00000000
  .word 0x00151040
  .word 0x00551021
  .word 0x00021080
  .word 0x02821021
  .word 0xc44d0008
  .word 0x84460000
  .word 0x84470002
  .word 0x84490004
  .word 0x44806000
  .word 0x0220202d
  .word 0x0200282d
  .word 0x0000402d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x46006b86
  .word 0x00151080
  .word 0x02621021
  .word 0x8c420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26b50001
  .word 0x02b2102a
  .word 0x1440ffe9
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
