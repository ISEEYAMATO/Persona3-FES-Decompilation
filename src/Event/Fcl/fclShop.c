#include "temporary.h"

/* auto-extern (generated) */
extern u32 gp0xffffaad8;
extern u32 gp0xffffaae8;
typedef int (*code)();
typedef unsigned int ShopU128 __attribute__((mode(TI)));
typedef struct {
    u8 auStack_f0[32];
    u8 auStack_d0[32];
    u32 *apuStack_b0[18];
    u32 _pad_table[2];
    u32 auStack_60[6];
    float uStack_48;
    float uStack_44;
    float uStack_40;
    u32 _pad_38;
    float uStack_38;
    float uStack_34;
    float uStack_30;
    float uStack_2c;
    float uStack_28;
    u32 _pad_20;
    float uStack_20;
    float uStack_1c;
    float uStack_18;
    u32 _pad_10;
    float uStack_10;
    float uStack_c;
    float uStack_8;
    u32 _pad_end;
} FclShopStack;
typedef struct {
    u32 camera[16];
    u8 path[76];
    u8 result[4];
} FclShopLoadStack;
typedef struct {
    s16 *entries;
    u32 count;
} FclShopDrawGroup;
typedef struct {
    u8 auStack_80[4];
    u8 _pad_7c[28];
    u8 auStack_60[4];
    u16 auStack_5c[4];
    u8 uStack_54;
    u8 _pad_6d[11];
    u16 uStack_48;
    u8 _pad_7a[6];
    u8 auStack_40[32];
    u8 auStack_20[32];
} FclShopManagerStack;
u32 uGpffffb998;
extern u8 DAT_006a6a90[];
extern char DAT_006a6af8[];
extern u8 DAT_006a9930[];
/* FUSION_EXACT_PROTOS */
void FUN_003e5e20(u8* param_1, u8* param_2);
void FUN_0040e3f0(float param_1, float param_2, float param_3, float param_4, s32 param_5, s32 param_6, u8 param_7, s32 param_8, s32 param_9, s32 param_10, s32 param_11);
#pragma alias FUN_0040e3f0_i2f1i3f3 FUN_0040e3f0
extern void FUN_0040e3f0_i2f1i3f3(s32 param_5, s32 param_6, f32 param_1, u8 param_7,
                                  s32 param_8, s32 param_9, s32 param_10, s32 param_11,
                                  f32 param_2, f32 param_3, f32 param_4);
#pragma alias FUN_0040eb50_i FUN_0040eb50
extern s32 FUN_0040eb50_i(s32 x, s32 y, f32 scale, u8 color, s16 font,
                           const void* text, s32 maxWidth);
#pragma alias FUN_0040e3c0_i FUN_0040e3c0
extern void FUN_0040e3c0_i(s32 x, s32 y, f32 scale, u8 color, s32 type,
                            s32 value);
void FUN_003e6130(int param_1);
void FUN_003e6400(u32 param_1,u8* param_2);
u64 FUN_003e6d40(void);
u32 FUN_003e6d70(void);
u32 FUN_003e6dc0(void);
u32 FUN_003e6e20(u32 param_1);
u64 FUN_003e6e80(void);
void FUN_003e86c0(u8* owner);
u32 FUN_003e8740(u8 *param_1);
u64 FUN_003e87c0(u64 param_1,u64 param_2);
u64 FUN_003e8830(u64 param_1,u64 param_2);
u8 * FUN_003e8860(u32 param_1,u32 param_2);
int FUN_003e8e20(u8* owner);
u32 FUN_003e8ff0(int param_1);
u64 FUN_003e90b0(u64 param_1,u64 param_2);
u64 FUN_003e9160(u64 param_1,u64 param_2);
u32 FUN_003e9200(u64 param_1,u64 param_2);
u64 FUN_003e94f0(u64 param_1,u64 param_2);
u64 FUN_003e96f0(u64 param_1,u64 param_2);
void FUN_003e9790(long param_1);
u32 FUN_003e97f0(u8* owner);
u32 FUN_003e98b0(int param_1);
u64 FUN_003e9970(u64 param_1,u64 param_2);
u64 FUN_003e9a90(u64 param_1,u64 param_2);
u8 * FUN_003e9af0(u32 param_1,u32 param_2);
u64 FUN_003ea4d0(u64 param_1,u64 param_2);
u32 FUN_003ea560(int param_1);
u32 FUN_003ea600(u8* owner);
u32 FUN_003ea6b0(int param_1);
u64 FUN_003ea770(u64 param_1,u64 param_2);
u64 FUN_003ea7e0(u64 param_1,u64 param_2);
u8 * FUN_003ea820(u64 param_1,u64 param_2);
u64 FUN_003eac40(u64 param_1,u64 param_2);
void FUN_003eacb0(long param_1);
u32 FUN_003ead10(u8* owner);
u32 FUN_003eadd0(int param_1);
u64 FUN_003eaeb0(u64 param_1,u64 param_2);
u64 FUN_003eaf30(u64 param_1,u64 param_2);
u8 * FUN_003eaf90(u32 param_1,u32 param_2);
u64 FUN_003eb940(u64 param_1,u64 param_2);
void FUN_003eb9b0(long param_1);
u32 FUN_003eba10(u8* owner);
u32 FUN_003ebad0(int param_1);
u64 FUN_003ebb90(u64 param_1,u64 param_2);
u64 FUN_003ebc70(u64 param_1,u64 param_2);
u8 * FUN_003ebcb0(u64 param_1,u64 param_2);
u64 FUN_003ebfe0(u64 param_1,u64 param_2);
void FUN_003ec030(long param_1);
u32 FUN_003ec090(u8* owner);
u32 FUN_003ec150(int param_1);
u64 FUN_003ec210(u64 param_1,u64 param_2);
u64 FUN_003ec280(u64 param_1,u64 param_2);
u8 * FUN_003ec2c0(u64 param_1,u64 param_2);
u64 FUN_003ec6a0(u64 param_1,u64 param_2);
u32 FUN_003ec6f0(u8* owner);
u32 FUN_003ec7b0(int param_1);
u64 FUN_003ec870(u64 param_1,u64 param_2);
u64 FUN_003ec8e0(u64 param_1,u64 param_2);
u8 * FUN_003ec920(u64 param_1,u64 param_2);
u64 FUN_003ecce0(u64 param_1,u64 param_2);
u32 FUN_003ecd30(u8* owner);
u32 FUN_003ecdf0(int param_1);
u64 FUN_003eceb0(u64 param_1,u64 param_2);
u64 FUN_003ecf80(u64 param_1,u64 param_2);
u8 * FUN_003ecfe0(u64 param_1,u64 param_2);
u64 FUN_003ed310(u64 param_1,u64 param_2);
u32 FUN_003ed380(u8* owner);
u32 FUN_003ed420(int param_1);
u64 FUN_003ed4e0(u64 param_1,u64 param_2);
u64 FUN_003ed5a0(u64 param_1,u64 param_2);
u8 * FUN_003ed5e0(u32 param_1,u32 param_2);
u64 FUN_003edd80(u64 param_1,u64 param_2);
u32 FUN_003eddd0(u8* owner);
u32 FUN_003ede80(int param_1);
u64 FUN_003edf20(u64 param_1,u64 param_2);
u64 FUN_003edf80(u64 param_1,u64 param_2);
u8 * FUN_003edfc0(u64 param_1,u64 param_2);
u64 FUN_003ee2d0(u64 param_1,u64 param_2);
u32 FUN_003ee310(u8* owner);
u32 FUN_003ee3d0(int *param_1);
u64 FUN_003ee480(u64 param_1,u64 param_2);
u64 FUN_003ee4e0(u64 param_1,u64 param_2);
u8 * FUN_003ee510(void);
void FUN_003ee570(u8* owner);
u64 FUN_003ee5f0(u64 param_1,u64 param_2);
u64 FUN_003ee640(u64 param_1,u64 param_2);
u64 FUN_003ee670(u64 param_1,u64 param_2);
u64 FUN_003ee920(u64 param_1,u64 param_2);
void FUN_003eec60(int param_1);
void FUN_003eed10(u32 param_1);
u32 FUN_003eed50(void);
void FUN_003eed90(u8* owner);
u64 FUN_003eee10(u64 param_1,u64 param_2);
u64 FUN_003eee50(u64 param_1,u64 param_2);
u64 FUN_003eee80(u64 param_1,u64 param_2);
u64 FUN_003ef2b0(u64 param_1,u64 param_2);
u64 FUN_003ef970(u64 param_1);
void FUN_003efb40(u8* owner);
u64 FUN_003efbc0(u64 param_1,u64 param_2);
u64 FUN_003efc20(u64 param_1,u64 param_2);
u64 FUN_003efc60(u64 param_1,u64 param_2);
u64 FUN_003efca0(u64 param_1,u64 param_2);
u64 FUN_003efce0(void);
u8 FUN_003efd70(void);
void FUN_003efde0(u64 param_1,u64 param_2);
u32 FUN_003efe60(void);
int FUN_003efed0(int param_1);
u8 ** FUN_003efef0(void);
extern u8 DAT_006b1f30[];
/* FUSION_GLOBALS */
float DAT_006a6f10;
float DAT_006a6f14;
float DAT_006a6f18;
float DAT_006a6f20;
float DAT_006a6f24;
float DAT_006a6f28;
float DAT_006a6f30;
float DAT_006a6f34;
float DAT_006a6f38;
float DAT_006a6f40;
float DAT_006a6f44;
float DAT_006a6f48;
u32 DAT_006a6f50;
u32 DAT_006a6f70;
u32 DAT_006a70a0;
u32 DAT_006a70a4;
u32 DAT_006a70a8;
u32 DAT_006a70ac;
extern u32 DAT_006a7290[];
extern u32 DAT_006a7310[];
extern u32 DAT_006a7360[];
extern u32 DAT_006a7390[];
extern u32 DAT_006a73b0[];
extern u32 DAT_006a73d0[];
extern u32 DAT_006a73f0[];
extern u32 DAT_006a7410[];
extern u32 DAT_006a7438[];
extern u32 DAT_006a7450[];
extern u32 DAT_006a7470[];
extern s16 DAT_006a74c0[];
extern s16 DAT_006a74e0[];
extern s16 DAT_006a7500[];
extern s16 DAT_006a7518[];
extern s16 DAT_006a7530[];
extern s16 DAT_006a7550[];
extern s16 DAT_006a7570[];
extern u32 DAT_006a7590;
#pragma alias DAT_006a7590_abs DAT_006a7590
extern u8 DAT_006a7590_abs[];
extern float DAT_007cad7c;
extern float DAT_007cad84;
extern float DAT_007cadd0;
extern float DAT_007cae00;
#pragma alias DAT_006a6f10_abs DAT_006a6f10
extern u8 DAT_006a6f10_abs[];
#pragma alias DAT_006a6f14_abs DAT_006a6f14
extern u8 DAT_006a6f14_abs[];
#pragma alias DAT_006a6f18_abs DAT_006a6f18
extern u8 DAT_006a6f18_abs[];
#pragma alias DAT_006a6f20_abs DAT_006a6f20
extern u8 DAT_006a6f20_abs[];
#pragma alias DAT_006a6f24_abs DAT_006a6f24
extern u8 DAT_006a6f24_abs[];
#pragma alias DAT_006a6f28_abs DAT_006a6f28
extern u8 DAT_006a6f28_abs[];
#pragma alias DAT_006a6f30_abs DAT_006a6f30
extern u8 DAT_006a6f30_abs[];
#pragma alias DAT_006a6f34_abs DAT_006a6f34
extern u8 DAT_006a6f34_abs[];
#pragma alias DAT_006a6f38_abs DAT_006a6f38
extern u8 DAT_006a6f38_abs[];
#pragma alias DAT_006a6f40_abs DAT_006a6f40
extern u8 DAT_006a6f40_abs[];
#pragma alias DAT_006a6f44_abs DAT_006a6f44
extern u8 DAT_006a6f44_abs[];
#pragma alias DAT_006a6f48_abs DAT_006a6f48
extern u8 DAT_006a6f48_abs[];
#define DAT_006a6f10 (*(float*)DAT_006a6f10_abs)
#define DAT_006a6f14 (*(float*)DAT_006a6f14_abs)
#define DAT_006a6f18 (*(float*)DAT_006a6f18_abs)
#define DAT_006a6f20 (*(float*)DAT_006a6f20_abs)
#define DAT_006a6f24 (*(float*)DAT_006a6f24_abs)
#define DAT_006a6f28 (*(float*)DAT_006a6f28_abs)
#define DAT_006a6f30 (*(float*)DAT_006a6f30_abs)
#define DAT_006a6f34 (*(float*)DAT_006a6f34_abs)
#define DAT_006a6f38 (*(float*)DAT_006a6f38_abs)
#define DAT_006a6f40 (*(float*)DAT_006a6f40_abs)
#define DAT_006a6f44 (*(float*)DAT_006a6f44_abs)
#define DAT_006a6f48 (*(float*)DAT_006a6f48_abs)
u32 DAT_007cd7d0;
u32 DAT_007cd7d4;
extern u32 DAT_007ce688;
extern u16 DAT_007e094e[];
extern u16 DAT_007e0958[];
u32 LAB_003c5170[];
u32 LAB_003e7330[];
u32 LAB_003e789c[];
u32 LAB_003e8b7c[];
u32 LAB_003ec618[];
u32 PTR_FUN_006a6fc0[];
u32 PTR_FUN_006a7040[];
u32 PTR_FUN_006a7070[];
u32 PTR_FUN_006a70b0[];
u32 PTR_FUN_006a70e0[];
u32 PTR_FUN_006a7110[];
u32 PTR_FUN_006a7140[];
u32 PTR_FUN_006a7170[];
u32 PTR_FUN_006a71a0[];
u32 PTR_FUN_006a71d0[];
u32 PTR_FUN_006a7200[];
u32 PTR_FUN_006a7230[];
u32 PTR_FUN_006a7260[];
u32 PTR_FUN_006a72e0[];
u32 PTR_FUN_006a75e0[];
u32 PTR_PTR_006a99c0[];
#include "Kosaka/k_assert.h"

#pragma alias FUN_003f03e0_y2 FUN_003f03e0
#pragma alias FUN_003f0830_y2 FUN_003f0830
#pragma alias FUN_003f9e30_y2 FUN_003f9e30
#pragma alias FUN_00403800_y2 FUN_00403800
#pragma alias FUN_00403830_y2 FUN_00403830
#pragma alias datGetFlag_y2 datGetFlag
#pragma alias sinf_y2 sinf_y2
#pragma alias cosf_y2 cosf_y2
#pragma alias datGetScenarioMode_y2 datGetScenarioMode_y2
#pragma alias FUN_003c9e30_y2 FUN_003c9e30_y2
#pragma alias FUN_003f0090_y2 FUN_003f0090_y2
#pragma alias FUN_003f00b0_y2 FUN_003f00b0_y2
#pragma alias FUN_003f0240_y2 FUN_003f0240_y2
#pragma alias FUN_003f0ac0_y2 FUN_003f0ac0_y2
#pragma alias FUN_003f0d60_y2 FUN_003f0d60_y2
#pragma alias FUN_003f10b0_y2 FUN_003f10b0_y2
#pragma alias FUN_003f12a0_y2 FUN_003f12a0_y2
#pragma alias FUN_003f1470_y2 FUN_003f1470_y2
#pragma alias FUN_003f1520_y2 FUN_003f1520_y2
#pragma alias FUN_003f15d0_y2 FUN_003f15d0_y2
#pragma alias FUN_0017c220_y2 FUN_0017c220_y2
#pragma alias FUN_003f1720_y2 FUN_003f1720_y2
#pragma alias FUN_003f1830_y2 FUN_003f1830_y2
#pragma alias FUN_003f2d60_y2 FUN_003f2d60_y2
#pragma alias FUN_003f33d0_y2 FUN_003f33d0_y2
#pragma alias FUN_003f3f00_y2 FUN_003f3f00_y2
#pragma alias FUN_003f9b20_y2 FUN_003f9b20_y2
#pragma alias FUN_003fa0d0_y2 FUN_003fa0d0_y2
#pragma alias FUN_003fa190_y2 FUN_003fa190_y2
#pragma alias FUN_003fa1b0_y2 FUN_003fa1b0_y2
#pragma alias FUN_003fb0c0_y2 FUN_003fb0c0_y2
#pragma alias FUN_003fb6b0_y2 FUN_003fb6b0_y2
#pragma alias FUN_003fbc00_y2 FUN_003fbc00_y2
#pragma alias FUN_003fbe70_y2 FUN_003fbe70_y2
#pragma alias FUN_003fbf10_y2 FUN_003fbf10_y2
#pragma alias FUN_003fbf20_y2 FUN_003fbf20_y2
#pragma alias FUN_003fc980_y2 FUN_003fc980_y2
#pragma alias FUN_003fd730_y2 FUN_003fd730_y2
#pragma alias FUN_003fd820_y2 FUN_003fd820_y2
#pragma alias FUN_003fd8a0_y2 FUN_003fd8a0_y2
#pragma alias FUN_003fd8e0_y2 FUN_003fd8e0_y2
#pragma alias FUN_003fd990_y2 FUN_003fd990_y2
#pragma alias FUN_003fdf80_y2 FUN_003fdf80_y2
#pragma alias FUN_003fe2b0_y2 FUN_003fe2b0_y2
#pragma alias FUN_003fe3e0_y2 FUN_003fe3e0_y2
#pragma alias FUN_003fe5d0_y2 FUN_003fe5d0_y2
#pragma alias FUN_003fe850_y2 FUN_003fe850_y2
#pragma alias FUN_003fe950_y2 FUN_003fe950_y2
#pragma alias FUN_003fee40_y2 FUN_003fee40_y2
#pragma alias FUN_003fef30_y2 FUN_003fef30_y2
#pragma alias FUN_003ff570_y2 FUN_003ff570_y2
#pragma alias FUN_003ffe00_y2 FUN_003ffe00_y2
#pragma alias FUN_003ffe60_y2 FUN_003ffe60_y2
#pragma alias FUN_004003a0_y2 FUN_004003a0_y2
#pragma alias FUN_004003f0_y2 FUN_004003f0_y2
#pragma alias FUN_00400690_y2 FUN_00400690_y2
#pragma alias FUN_00400e30_y2 FUN_00400e30_y2
#pragma alias FUN_00400d60_y2 FUN_00400d60_y2
#pragma alias FUN_00401170_y2 FUN_00401170_y2
#pragma alias FUN_00401420_y2 FUN_00401420_y2
#pragma alias FUN_004014e0_y2 FUN_004014e0_y2
#pragma alias FUN_004015a0_y2 FUN_004015a0_y2
#pragma alias FUN_004015e0_y2 FUN_004015e0_y2
#pragma alias FUN_00401890_y2 FUN_00401890_y2
#pragma alias FUN_00401950_y2 FUN_00401950_y2
#pragma alias FUN_00401de0_y2 FUN_00401de0_y2
#pragma alias FUN_00402400_y2 FUN_00402400_y2
#pragma alias FUN_00402480_y2 FUN_00402480_y2
#pragma alias FUN_004030b0_y2 FUN_004030b0_y2
#pragma alias FUN_004030f0_y2 FUN_004030f0_y2
#pragma alias FUN_004032f0_y2 FUN_004032f0_y2
#pragma alias FUN_00403340_y2 FUN_00403340_y2
#pragma alias FUN_00403410_y2 FUN_00403410_y2
#pragma alias FUN_00403520_y2 FUN_00403520_y2
#pragma alias FUN_00403610_y2 FUN_00403610_y2
#pragma alias FUN_004038a0_y2 FUN_004038a0_y2
#pragma alias FUN_004038e0_y2 FUN_004038e0_y2
#pragma alias FUN_00403970_y2 FUN_00403970_y2
#pragma alias FUN_00403e40_y2 FUN_00403e40_y2
#pragma alias FUN_00403f20_y2 FUN_00403f20_y2
#pragma alias FUN_00404120_y2 FUN_00404120_y2
#pragma alias FUN_004044c0_y2 FUN_004044c0_y2
#pragma alias FUN_00405970_y2 FUN_00405970_y2
#pragma alias FUN_00405ac0_y2 FUN_00405ac0_y2
#pragma alias FUN_00405d60_y2 FUN_00405d60_y2
#pragma alias FUN_00405e30_y2 FUN_00405e30_y2
#pragma alias FUN_00409f50_y2 FUN_00409f50_y2
#pragma alias FUN_0040a200_y2 FUN_0040a200_y2
#pragma alias FUN_0040a260_y2 FUN_0040a260_y2
#pragma alias FUN_0040a2b0_y2 FUN_0040a2b0_y2
#pragma alias FUN_0040a490_y2 FUN_0040a490_y2
#pragma alias FUN_0040a6d0_y2 FUN_0040a6d0_y2
#pragma alias FUN_0040b840_y2 FUN_0040b840_y2
#pragma alias FUN_0040b910_y2 FUN_0040b910_y2
#pragma alias FUN_0040c150_y2 FUN_0040c150_y2
#pragma alias FUN_0040c170_y2 FUN_0040c170_y2
#pragma alias FUN_0040c310_y2 FUN_0040c310_y2
#pragma alias FUN_0040c490_y2 FUN_0040c490_y2
#pragma alias FUN_0040c520_y2 FUN_0040c520_y2
#pragma alias FUN_0040c5b0_y2 FUN_0040c5b0_y2
#pragma alias FUN_0040c650_y2 FUN_0040c650_y2
#pragma alias FUN_0040c6a0_y2 FUN_0040c6a0_y2
#pragma alias FUN_0040c6f0_y2 FUN_0040c6f0_y2
#pragma alias FUN_0040c9a0_y2 FUN_0040c9a0_y2
#pragma alias FUN_0040ca00_y2 FUN_0040ca00_y2
#pragma alias FUN_0040cad0_y2 FUN_0040cad0_y2
#pragma alias FUN_0040e3c0_i_y2 FUN_0040e3c0_i_y2
#pragma alias FUN_0040eb50_i_y2 FUN_0040eb50_i_y2
#pragma alias DAT_007e094e_y2 DAT_007e094e_y2
#pragma alias DAT_007e0958_y2 DAT_007e0958_y2
#pragma alias FUN_0040e300_y2 FUN_0040e300_y2
#pragma alias FUN_0040e390_y2 FUN_0040e390_y2
#pragma alias H_Cdvd_CacheFindFile_y2 H_Cdvd_CacheFindFile_y2
#pragma alias FUN_003eec60_y2 FUN_003eec60_y2
#pragma alias FUN_0040e3f0_y2 FUN_0040e3f0_y2
#pragma alias datGetEquipmentIdx_y2 datGetEquipmentIdx_y2
#pragma alias FUN_0040e3c0_y2 FUN_0040e3c0_y2
#pragma alias FUN_0040eb50_y2 FUN_0040eb50_y2
#pragma alias func_00171110_y2 func_00171110_y2
#pragma alias FUN_003c6ce0_y2 FUN_003c6ce0_y2
#pragma alias FUN_003c6d10_y2 FUN_003c6d10_y2
#pragma alias FUN_003c6ca0_y2 FUN_003c6ca0_y2
#pragma alias FUN_003c6cc0_y2 FUN_003c6cc0_y2
#pragma alias FUN_0017c700_y2 FUN_0017c700_y2
#pragma alias datGetPersonaByCompendium_y2 datGetPersonaByCompendium_y2
#pragma alias memset_y2 memset_y2






#undef auStack_f0
#undef auStack_d0
#undef apuStack_b0
#undef auStack_60
#undef uStack_48
#undef uStack_44
#undef uStack_40
#undef uStack_38
#undef uStack_34
#undef uStack_30
#undef uStack_2c
#undef uStack_28
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef DAT_006a6f10
#undef DAT_006a6f14
#undef DAT_006a6f18
#undef DAT_006a6f20
#undef DAT_006a6f24
#undef DAT_006a6f28
#undef DAT_006a6f30
#undef DAT_006a6f34
#undef DAT_006a6f38
#undef DAT_006a6f40
#undef DAT_006a6f44
#undef DAT_006a6f48



// FUN_003E6DC0


u32 FUN_003e6dc0(void)



{

  u32 *puVar1;

  u32 uVar2;

  

  if (DAT_007ce688 == 0) {

    K_Assert(DAT_006a6af8,0x4a2);

  }

  if (DAT_007ce688 != 0) {

    puVar1 = (u32 *)FUN_003c5460(DAT_007ce688);

    uVar2 = *puVar1;

  }

  else {

    uVar2 = 0xffffffff;

  }

  return uVar2;

}

// FUN_003E6E20


u32 FUN_003e6e20(u32 param_1)
{
  int state;
  u32 result;

  if ((DAT_007ce688 != 0) &&
      (state = FUN_003c5460(DAT_007ce688), (*(u32 *)(state + 8) & param_1) != 0)) {
    result = 1;
  }
  else {
    result = 0;
  }
  return result;
}

// Exact-size sniper pass retained as NONMATCHING after diff characterization.
// 1065 non-relocation differing words span all 256-byte buckets of the body.
// The residual is diffuse register-bank/control-flow layout drift, not a
// localized type, signedness, addressing-mode, or operand-order mismatch.
// No source-level experiment improved the authoritative normalized_diff (3396).
/* Measured: opt_common_subs off gives FUN_003e6e80 nd3327/obj6208; reset gives nd3362/obj6208. */
// W415 probe: adding retail-only FUN_003efde0(0,0) at state 0x3e raised nd 3327 -> 3711 and object 6208 -> 6224 (window 6208); reverted.
#pragma opt_common_subs off
// FUN_003E6E80


asm u64 FUN_003e6e80(void)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040902d
  .word 0x0c0f1ee4
  .word 0x00000000
  .word 0x8e440098
  .word 0x0c0f8194
  .word 0x00000000
  .word 0x8e420004
  .word 0x2c410051
  .word 0x102005f8
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463b9e0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24020004
  .word 0xae420004
  .word 0x0240202d
  .word 0x0c0fbed0
  .word 0x00000000
  .word 0x100005ea
  .word 0x00000000
  .word 0x8e430000
  .word 0x24020004
  .word 0x1062000b
  .word 0x00000000
  .word 0x24020002
  .word 0x10620008
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x0c04215c
  .word 0x00000000
  .word 0x24040002
  .word 0x0c04219c
  .word 0x00000000
  .word 0x24020003
  .word 0xae420004
  .word 0x0c0421c4
  .word 0x00000000
  .word 0x24030001
  .word 0x144305d0
  .word 0x00000000
  .word 0x0060102d
  .word 0x100005ce
  .word 0x00000000
  .word 0x24020005
  .word 0xae420004
  .word 0x0240202d
  .word 0x0c0fa1b0
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0fa1d0
  .word 0x00000000
  .word 0x2403ffff
  .word 0x104305c2
  .word 0x00000000
  .word 0x24020006
  .word 0xae420004
  .word 0x100005be
  .word 0x00000000
  .word 0x24020009
  .word 0xae420004
  .word 0x2644008c
  .word 0x0000282d
  .word 0x24060008
  .word 0x0c148502
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0fb95c
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0fbb64
  .word 0x00000000
  .word 0x8e440064
  .word 0x0c0f1cb4
  .word 0x00000000
  .word 0x8e440000
  .word 0x0c0fc090
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e420008
  .word 0x34420004
  .word 0xae420008
  .word 0x8e430000
  .word 0x24020004
  .word 0x1062000b
  .word 0x00000000
  .word 0x24020002
  .word 0x10620008
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x24040038
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x0c042170
  .word 0x00000000
  .word 0x24040002
  .word 0x0c04219c
  .word 0x00000000
  .word 0x8e440000
  .word 0x0c0fc024
  .word 0x00000000
  .word 0x0002843c
  .word 0x0010843f
  .word 0x2402ffff
  .word 0x12020587
  .word 0x00000000
  .word 0x8e440000
  .word 0x0c0fc02c
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440057e
  .word 0x00000000
  .word 0x24020007
  .word 0xae420004
  .word 0x24040002
  .word 0x0c0f20b8
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f25e4
  .word 0x00000000
  .word 0x8e440000
  .word 0x0c0fc02c
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x1000056c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400568
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x24020008
  .word 0xae420004
  .word 0x10000562
  .word 0x00000000
  .word 0x0c0f20ec
  .word 0x00000000
  .word 0x1440055e
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f20b8
  .word 0x00000000
  .word 0x24020009
  .word 0xae420004
  .word 0x10000557
  .word 0x00000000
  .word 0x2402000a
  .word 0xae420004
  .word 0x8e440000
  .word 0x0c0fc20c
  .word 0x00000000
  .word 0x2403ffff
  .word 0x10430006
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x2402000d
  .word 0xae420004
  .word 0x10000546
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400542
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x8e440000
  .word 0x0c0fc090
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x2402000b
  .word 0xae420004
  .word 0x10000537
  .word 0x00000000
  .word 0x2402000d
  .word 0xae420004
  .word 0x10000533
  .word 0x00000000
  .word 0x2402000c
  .word 0xae420004
  .word 0x24040001
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x1440052a
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x2402000d
  .word 0xae420004
  .word 0x10000524
  .word 0x00000000
  .word 0x8e430000
  .word 0x24020008
  .word 0x10620015
  .word 0x00000000
  .word 0x24020004
  .word 0x10620003
  .word 0x00000000
  .word 0x10000066
  .word 0x00000000
  .word 0x27a40080
  .word 0x0c100920
  .word 0x00000000
  .word 0x24030001
  .word 0x14430006
  .word 0x00000000
  .word 0x24020021
  .word 0xae420004
  .word 0x0000102d
  .word 0x10000511
  .word 0x00000000
  .word 0x24020027
  .word 0xae420004
  .word 0x1000050c
  .word 0x00000000
  .word 0x8e420008
  .word 0x30420008
  .word 0x14400012
  .word 0x00000000
  .word 0x0c100d48
  .word 0x00000000
  .word 0x1040000e
  .word 0x00000000
  .word 0x0c100d84
  .word 0x00000000
  .word 0x8e420008
  .word 0x34420008
  .word 0xae420008
  .word 0x2402000e
  .word 0xae420004
  .word 0x8e420008
  .word 0x34420002
  .word 0xae420008
  .word 0x0000102d
  .word 0x100004f8
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000029
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c05f19c
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000022
  .word 0x00000000
  .word 0x86040000
  .word 0x0000182d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00031040
  .word 0x02421021
  .word 0x8442008c
  .word 0x14440004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000006
  .word 0x00000000
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff5
  .word 0x00000000
  .word 0x0000102d
  .word 0x1440000f
  .word 0x00000000
  .word 0x0c100e5c
  .word 0x00000000
  .word 0x1040000b
  .word 0x00000000
  .word 0x86020000
  .word 0xa642008a
  .word 0x8e420008
  .word 0x34420002
  .word 0xae420008
  .word 0x24020012
  .word 0xae420004
  .word 0x0000102d
  .word 0x100004ce
  .word 0x00000000
  .word 0x26310001
  .word 0x2a220003
  .word 0x1440ffd6
  .word 0x00000000
  .word 0x8e430008
  .word 0x30620002
  .word 0x10400010
  .word 0x00000000
  .word 0x2402fffd
  .word 0x00621024
  .word 0xae420008
  .word 0x2402001f
  .word 0xae420004
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x100004b6
  .word 0x00000000
  .word 0x24020027
  .word 0xae420004
  .word 0x100004b2
  .word 0x00000000
  .word 0x2404000f
  .word 0xae440004
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x144004aa
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x24020010
  .word 0xae420004
  .word 0x100004a4
  .word 0x00000000
  .word 0x24020011
  .word 0xae420004
  .word 0x0c10305c
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c05f410
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400497
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x2402000d
  .word 0xae420004
  .word 0x10000491
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x24020013
  .word 0xae420004
  .word 0x8e420008
  .word 0x30420010
  .word 0x14400006
  .word 0x00000000
  .word 0x24040008
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x2404000e
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x8e420008
  .word 0x34420010
  .word 0xae420008
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400474
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x24020014
  .word 0xae420004
  .word 0x1000046e
  .word 0x00000000
  .word 0x24020015
  .word 0xae420004
  .word 0x9644008a
  .word 0x0c100c3c
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400461
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x24020016
  .word 0xae420004
  .word 0x1000045b
  .word 0x00000000
  .word 0x8644008a
  .word 0x0000282d
  .word 0x0c101048
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x24020017
  .word 0xae420004
  .word 0x2404000c
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x1000044e
  .word 0x00000000
  .word 0x8644008a
  .word 0x0000282d
  .word 0x0c100fc8
  .word 0x00000000
  .word 0x24030002
  .word 0x1043000e
  .word 0x00000000
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x24020017
  .word 0xae420004
  .word 0x2404000b
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000043b
  .word 0x00000000
  .word 0x24020018
  .word 0xae420004
  .word 0x2404000a
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d38
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d58
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000042d
  .word 0x00000000
  .word 0x24020019
  .word 0xae420004
  .word 0x24040009
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000425
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400421
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x2402001d
  .word 0xae420004
  .word 0x1000041b
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400417
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x0c0f1d84
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x2402001a
  .word 0xae420004
  .word 0x1000040d
  .word 0x00000000
  .word 0x2402001d
  .word 0xae420004
  .word 0x10000409
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400405
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x2402001a
  .word 0xae420004
  .word 0x100003ff
  .word 0x00000000
  .word 0x0c0f20ec
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100003f9
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x00a0302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x2402001b
  .word 0xae420004
  .word 0x9644008a
  .word 0x0c100c2c
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x8644008a
  .word 0x0c100e28
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050002
  .word 0x0000302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x144003d6
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x2402001c
  .word 0xae420004
  .word 0x100003d0
  .word 0x00000000
  .word 0x0c0f20ec
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100003ca
  .word 0x00000000
  .word 0x8644008a
  .word 0x0c100e28
  .word 0x00000000
  .word 0x1040000b
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050002
  .word 0x24060001
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070006
  .word 0x0c042938
  .word 0x00000000
  .word 0x8644008a
  .word 0x24050001
  .word 0x0c100fc8
  .word 0x00000000
  .word 0x8644008a
  .word 0x0c101130
  .word 0x00000000
  .word 0x8e440000
  .word 0x0c0fc51c
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x24020038
  .word 0xae420004
  .word 0x100003a4
  .word 0x00000000
  .word 0x2402000d
  .word 0xae420004
  .word 0x100003a0
  .word 0x00000000
  .word 0x2402001e
  .word 0xae420004
  .word 0x2404000d
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400397
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x2402000d
  .word 0xae420004
  .word 0x8644008a
  .word 0x0000182d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00031040
  .word 0x02421021
  .word 0x8442008c
  .word 0x14440004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000006
  .word 0x00000000
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff5
  .word 0x00000000
  .word 0x0000102d
  .word 0x14400011
  .word 0x00000000
  .word 0x0000282d
  .word 0x1000000b
  .word 0x00000000
  .word 0x00051040
  .word 0x02421021
  .word 0x2443008c
  .word 0x8442008c
  .word 0x14400004
  .word 0x00000000
  .word 0xa4640000
  .word 0x10000005
  .word 0x00000000
  .word 0x24a50001
  .word 0x28a20004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x00a0302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x10000366
  .word 0x00000000
  .word 0x24020020
  .word 0xae420004
  .word 0x8e430008
  .word 0x2402fff7
  .word 0x00621824
  .word 0xae430008
  .word 0x2402ffef
  .word 0x00621024
  .word 0xae420008
  .word 0x24040010
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400356
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x24020027
  .word 0xae420004
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x00a0302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x10000348
  .word 0x00000000
  .word 0x24020022
  .word 0xae420004
  .word 0x24040014
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x1440033f
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x24020023
  .word 0xae420004
  .word 0x10000339
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05bd24
  .word 0x00000000
  .word 0x2403012c
  .word 0x00621023
  .word 0x1c400005
  .word 0x00000000
  .word 0x24020024
  .word 0xae420004
  .word 0x10000005
  .word 0x00000000
  .word 0x24020025
  .word 0xae420004
  .word 0x1000032a
  .word 0x00000000
  .word 0x24040016
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400323
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x24020027
  .word 0xae420004
  .word 0x1000031d
  .word 0x00000000
  .word 0x24020026
  .word 0xae420004
  .word 0x27a40060
  .word 0x0c05f088
  .word 0x00000000
  .word 0x27a40064
  .word 0x0c060c30
  .word 0x00000000
  .word 0x0c05f064
  .word 0x00000000
  .word 0x87a50078
  .word 0x8e440000
  .word 0x0c0fc358
  .word 0x00000000
  .word 0x93a5006c
  .word 0x0000202d
  .word 0x24060011
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x97a50064
  .word 0x24040001
  .word 0x24060011
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x97a40064
  .word 0x0c100624
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x24040017
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x24040018
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x97a40064
  .word 0x0c100654
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x144002f1
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x24020027
  .word 0xae420004
  .word 0x100002eb
  .word 0x00000000
  .word 0x2404121f
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24050001
  .word 0x14450004
  .word 0x00000000
  .word 0x24041407
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x8e440000
  .word 0x0c05f584
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x24020028
  .word 0xae420004
  .word 0x100002d9
  .word 0x00000000
  .word 0x2402002a
  .word 0xae420004
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x100002d1
  .word 0x00000000
  .word 0x24020029
  .word 0xae420004
  .word 0x24040003
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x144002c8
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x24020027
  .word 0xae420004
  .word 0x100002c2
  .word 0x00000000
  .word 0x8e420008
  .word 0x30420001
  .word 0x1040000e
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0fbf98
  .word 0x00000000
  .word 0x144002b9
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x24020038
  .word 0xae420004
  .word 0x100002b1
  .word 0x00000000
  .word 0x8e430000
  .word 0x24020008
  .word 0x14620014
  .word 0x00000000
  .word 0x2644008c
  .word 0x24050004
  .word 0x0c100f90
  .word 0x00000000
  .word 0x1040000e
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0fbf98
  .word 0x00000000
  .word 0x144002a2
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x2402000d
  .word 0xae420004
  .word 0x1000029a
  .word 0x00000000
  .word 0x8e440000
  .word 0x0c05f584
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0fbf98
  .word 0x00000000
  .word 0x14400290
  .word 0x00000000
  .word 0x24020028
  .word 0xae420004
  .word 0x1000028c
  .word 0x00000000
  .word 0x2402002b
  .word 0xae420004
  .word 0x0240202d
  .word 0x0c0fa388
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0fa3fc
  .word 0x00000000
  .word 0x2c41000e
  .word 0x10200281
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463b9a0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x2402002c
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050002
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x10000272
  .word 0x00000000
  .word 0x2402002d
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050002
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x1000026a
  .word 0x00000000
  .word 0x2402002e
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050002
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x10000262
  .word 0x00000000
  .word 0x24020030
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050003
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x1000025a
  .word 0x00000000
  .word 0x8e430000
  .word 0x24020008
  .word 0x14620009
  .word 0x00000000
  .word 0x24020032
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x1000024e
  .word 0x00000000
  .word 0x24020034
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x10000246
  .word 0x00000000
  .word 0x24020036
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x1000023e
  .word 0x00000000
  .word 0x24020045
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050006
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x10000236
  .word 0x00000000
  .word 0x24020047
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050007
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x1000022e
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c100920
  .word 0x00000000
  .word 0x2403ffff
  .word 0x14430011
  .word 0x00000000
  .word 0x24020041
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x0000282d
  .word 0x24060001
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x10000218
  .word 0x00000000
  .word 0x0c0ff8ac
  .word 0x00000000
  .word 0x14400011
  .word 0x00000000
  .word 0x24020043
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x0000282d
  .word 0x24060001
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x10000204
  .word 0x00000000
  .word 0x2402003f
  .word 0xae420004
  .word 0x0000202d
  .word 0x2405000a
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x100001fc
  .word 0x00000000
  .word 0x24020049
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x100001f4
  .word 0x00000000
  .word 0x2402004b
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x100001ec
  .word 0x00000000
  .word 0x2402004d
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x100001e4
  .word 0x00000000
  .word 0x2402004f
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x100001dc
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0fa5fc
  .word 0x00000000
  .word 0x2402002f
  .word 0xae420004
  .word 0x0240202d
  .word 0x0c0fa62c
  .word 0x00000000
  .word 0x2403ffff
  .word 0x104301d1
  .word 0x00000000
  .word 0x2402002a
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050004
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x100001c9
  .word 0x00000000
  .word 0x24020031
  .word 0xae420004
  .word 0x0240202d
  .word 0x0c0fa980
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0fa9ac
  .word 0x00000000
  .word 0x2403ffff
  .word 0x104301be
  .word 0x00000000
  .word 0x2402002a
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050005
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x100001b6
  .word 0x00000000
  .word 0x24020033
  .word 0xae420004
  .word 0x0240202d
  .word 0x0c0fb774
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0fb7a0
  .word 0x00000000
  .word 0x2403ffff
  .word 0x104301ab
  .word 0x00000000
  .word 0x2402002a
  .word 0xae420004
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x100001a3
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0fbf98
  .word 0x00000000
  .word 0x1440019e
  .word 0x00000000
  .word 0x24020035
  .word 0xae420004
  .word 0x0240202d
  .word 0x0c0fb8c4
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0fb8f4
  .word 0x00000000
  .word 0x2403ffff
  .word 0x10430193
  .word 0x00000000
  .word 0x2402002a
  .word 0xae420004
  .word 0x8e420008
  .word 0x30420001
  .word 0x1440018d
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x10000187
  .word 0x00000000
  .word 0x24020037
  .word 0xae420004
  .word 0x24020002
  .word 0xae420004
  .word 0x10000181
  .word 0x00000000
  .word 0x24020039
  .word 0xae420004
  .word 0x8e430008
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae420008
  .word 0x8e440000
  .word 0x0c0fc548
  .word 0x00000000
  .word 0x8e440000
  .word 0x24050001
  .word 0x0c0fc4a8
  .word 0x00000000
  .word 0x2403ffff
  .word 0x14430005
  .word 0x00000000
  .word 0x2402003a
  .word 0xae420004
  .word 0x1000016d
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400166
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x2402003a
  .word 0xae420004
  .word 0x10000160
  .word 0x00000000
  .word 0x2411ffff
  .word 0x24100001
  .word 0x8e430000
  .word 0x14600004
  .word 0x00000000
  .word 0x2411000f
  .word 0x1000000b
  .word 0x00000000
  .word 0x24020004
  .word 0x14620004
  .word 0x00000000
  .word 0x24110003
  .word 0x10000005
  .word 0x00000000
  .word 0x24020008
  .word 0x14620002
  .word 0x00000000
  .word 0x24110002
  .word 0x2402ffff
  .word 0x16220006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24846af8
  .word 0x2405078c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e440000
  .word 0x0c0fc0f8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430002
  .word 0x00000000
  .word 0x0000802d
  .word 0x0000202d
  .word 0x0220282d
  .word 0x0200302d
  .word 0x24070c00
  .word 0x0c0e8824
  .word 0x00000000
  .word 0xae420094
  .word 0x2402003b
  .word 0xae420004
  .word 0x8e440094
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24030003
  .word 0x14430130
  .word 0x00000000
  .word 0x2402003c
  .word 0xae420004
  .word 0x1000012c
  .word 0x00000000
  .word 0x2402003d
  .word 0xae420004
  .word 0x8e440000
  .word 0x24050002
  .word 0x0c0fc4a8
  .word 0x00000000
  .word 0x2403ffff
  .word 0x14430005
  .word 0x00000000
  .word 0x2402003e
  .word 0xae420004
  .word 0x1000011f
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400118
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x2402003e
  .word 0xae420004
  .word 0x10000112
  .word 0x00000000
  .word 0x8e420008
  .word 0x30420002
  .word 0x10400005
  .word 0x00000000
  .word 0x2402000d
  .word 0xae420004
  .word 0x1000010a
  .word 0x00000000
  .word 0x2402002a
  .word 0xae420004
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x10000102
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0fab44
  .word 0x00000000
  .word 0x24020040
  .word 0xae420004
  .word 0x0240202d
  .word 0x0c0fab74
  .word 0x00000000
  .word 0x24030001
  .word 0x10430006
  .word 0x00000000
  .word 0x2403ffff
  .word 0x104300f4
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x2402002a
  .word 0xae420004
  .word 0x100000ee
  .word 0x00000000
  .word 0x2402002a
  .word 0xae420004
  .word 0x0000202d
  .word 0x2405000d
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x100000e6
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0fbf98
  .word 0x00000000
  .word 0x144000e1
  .word 0x00000000
  .word 0x24020042
  .word 0xae420004
  .word 0x27a40040
  .word 0x0c100920
  .word 0x00000000
  .word 0x83a60042
  .word 0x27a400a0
  .word 0x2785aad8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0000202d
  .word 0x27a500a0
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x83a60043
  .word 0x27a400a0
  .word 0x2785aad8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x24040001
  .word 0x27a500a0
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040015
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x8e430000
  .word 0x24020004
  .word 0x14620009
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050011
  .word 0x24060001
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x144000b7
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x2402002a
  .word 0xae420004
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x8e430000
  .word 0x24020004
  .word 0x146200ab
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050011
  .word 0x0000302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x100000a1
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0fbf98
  .word 0x00000000
  .word 0x1440009c
  .word 0x00000000
  .word 0x24020044
  .word 0xae420004
  .word 0x24040019
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x8e430000
  .word 0x24020004
  .word 0x14620009
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050011
  .word 0x24060001
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400087
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x2402002a
  .word 0xae420004
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x8e430000
  .word 0x24020004
  .word 0x1462007b
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050011
  .word 0x0000302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x10000071
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0fae84
  .word 0x00000000
  .word 0x24020046
  .word 0xae420004
  .word 0x0240202d
  .word 0x0c0faeb4
  .word 0x00000000
  .word 0x2403ffff
  .word 0x10430066
  .word 0x00000000
  .word 0x2402002a
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050008
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x1000005e
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0fae84
  .word 0x00000000
  .word 0x24020048
  .word 0xae420004
  .word 0x0240202d
  .word 0x0c0faeb4
  .word 0x00000000
  .word 0x2403ffff
  .word 0x10430053
  .word 0x00000000
  .word 0x2402002a
  .word 0xae420004
  .word 0x0000202d
  .word 0x24050009
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x1000004b
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0fb024
  .word 0x00000000
  .word 0x2402004a
  .word 0xae420004
  .word 0x0240202d
  .word 0x0c0fb054
  .word 0x00000000
  .word 0x2403ffff
  .word 0x10430040
  .word 0x00000000
  .word 0x2402002a
  .word 0xae420004
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x10000038
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0fb1bc
  .word 0x00000000
  .word 0x2402004c
  .word 0xae420004
  .word 0x0240202d
  .word 0x0c0fb1ec
  .word 0x00000000
  .word 0x2403ffff
  .word 0x1043002d
  .word 0x00000000
  .word 0x2402002a
  .word 0xae420004
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0fb34c
  .word 0x00000000
  .word 0x2402004e
  .word 0xae420004
  .word 0x0240202d
  .word 0x0c0fb37c
  .word 0x00000000
  .word 0x2403ffff
  .word 0x1043001a
  .word 0x00000000
  .word 0x2402002a
  .word 0xae420004
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0fb4e0
  .word 0x00000000
  .word 0x24020050
  .word 0xae420004
  .word 0x0240202d
  .word 0x0c0fb508
  .word 0x00000000
  .word 0x2403ffff
  .word 0x10430007
  .word 0x00000000
  .word 0x2402002a
  .word 0xae420004
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
}
#pragma opt_common_subs reset

// FUN_003E86C0
void FUN_003e86c0(u8* owner)
{
    u32 descriptors[9];
    ShopU128* source;
    ShopU128* destination;
    ShopU128 value;
    s32 count;
    u32 resource;

    source = (ShopU128*)PTR_FUN_006a6fc0;
    destination = (ShopU128*)descriptors;
    count = 2;
    do
    {
        value = *source;
        source++;
        count--;
        *destination = value;
        destination++;
    } while (count > 0);
    *(f32*)destination = *(f32*)source;
    resource = FUN_003c5240(DAT_007ce688, 0x10, descriptors, 0, 2);
    if (owner != NULL)
    {
        *(u32*)(owner + 0x4c) = resource;
    }
}

// FUN_003E8740


u32 FUN_003e8740(u8 *param_1)
{
  u32 *puVar1;
  u8 *puVar2;
  u32 *puVar3;
  u32 uVar2;

  puVar1 = *(u32 **)(param_1 + 0x4c);
  if ((puVar1 == 0) ||
      (puVar2 = (u8 *)puVar1[5], puVar2 == 0)) {
    uVar2 = 0xffffffff;
  }
  else if ((*(u32 *)(puVar2 + 0x14) & 8) != 0) {
    puVar3 = (u32 *)FUN_003c5470(puVar1);
    *(u32 *)(param_1 + 0x4c) = 0;
    uVar2 = *puVar3;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// FUN_003E87C0


u64 FUN_003e87c0(u64 param_1,u64 param_2)



{

  int iVar1;

  int *piVar2;

  int iVar3;

  

  piVar2 = (int *)FUN_003c5460();

  iVar3 = FUN_003c5470(param_2);

  iVar1 = *piVar2;

  *(int *)(iVar3 + 4) = iVar1;

  *(u32 *)(iVar3 + 0x50) = (u32)&DAT_006a6a90[iVar1 * 8];

  *(u32 *)(iVar3 + 0x54) = 0;

  *(u32 *)(iVar3 + 0x4c) = 0;

  *(u32 *)(iVar3 + 8) = 0;

  return 0;

}

// FUN_003E8830


u64 FUN_003e8830(u64 param_1,u64 param_2)



{

  FUN_003c5470(param_2);

  return 0;

}

// FUN_003E8860


asm u8 * FUN_003e8860(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdff20
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0802d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040902d
  .word 0x0200202d
  .word 0x0c0f151c
  .word 0x00000000
  .word 0x0040882d
  .word 0x0000982d
  .word 0x8e240050
  .word 0x8e220054
  .word 0x000218c0
  .word 0x8c820000
  .word 0x00438021
  .word 0x8e230008
  .word 0x24020001
  .word 0x106200b0
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000143
  .word 0x00000000
  .word 0x86020000
  .word 0x2c410008
  .word 0x102000a6
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463bb50
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e430000
  .word 0x24050004
  .word 0x1065000e
  .word 0x00000000
  .word 0x24020008
  .word 0x10620003
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x8e440080
  .word 0x24060005
  .word 0x00c0382d
  .word 0x0c0f2614
  .word 0x00000000
  .word 0xae420084
  .word 0x1000008e
  .word 0x00000000
  .word 0x8e440080
  .word 0x24050003
  .word 0x24060005
  .word 0x00c0382d
  .word 0x0c0f2614
  .word 0x00000000
  .word 0xae420084
  .word 0x10000085
  .word 0x00000000
  .word 0x8e240004
  .word 0x0c0fbfb4
  .word 0x00000000
  .word 0x0040202d
  .word 0x8e450058
  .word 0x0c1038c0
  .word 0x00000000
  .word 0x1000007c
  .word 0x00000000
  .word 0x82020003
  .word 0x000210c0
  .word 0x02421021
  .word 0x8c420060
  .word 0x10400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24846af8
  .word 0x240508a2
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x27a40090
  .word 0x3c05006a
  .word 0x24a56ff0
  .word 0x8e060004
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x27a40090
  .word 0x3c05006a
  .word 0x24a57010
  .word 0x8e060004
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x24130001
  .word 0x27a40090
  .word 0x27a500dc
  .word 0x0c040870
  .word 0x00000000
  .word 0x82030003
  .word 0x000318c0
  .word 0x02431821
  .word 0xac620064
  .word 0x82020003
  .word 0x000210c0
  .word 0x02421021
  .word 0x8c420064
  .word 0x14400050
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24846af8
  .word 0x240508ad
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000049
  .word 0x00000000
  .word 0x82020003
  .word 0x000210c0
  .word 0x02421021
  .word 0x8c420060
  .word 0x10400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24846af8
  .word 0x240508b3
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x27a40090
  .word 0x2785aae8
  .word 0x8e060004
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x24130001
  .word 0x27a40090
  .word 0x27a500dc
  .word 0x0c040870
  .word 0x00000000
  .word 0x82030003
  .word 0x000318c0
  .word 0x02431821
  .word 0xac620064
  .word 0x82020003
  .word 0x000210c0
  .word 0x02421021
  .word 0x8c420064
  .word 0x1440002a
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24846af8
  .word 0x240508b9
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x82040002
  .word 0x82050003
  .word 0x0c0ed5d8
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0fbf38
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x27a40090
  .word 0x3c05006a
  .word 0x24a57020
  .word 0x8e060004
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x27a40090
  .word 0x3c05006a
  .word 0x24a57030
  .word 0x8e060004
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a40090
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae420058
  .word 0x24020001
  .word 0xae220008
  .word 0x86020000
  .word 0x2c410008
  .word 0x10200085
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463bb30
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e440084
  .word 0x0c0f26ac
  .word 0x00000000
  .word 0x10400079
  .word 0x00000000
  .word 0x24130001
  .word 0x10000076
  .word 0x00000000
  .word 0x0c1038e4
  .word 0x00000000
  .word 0x10400072
  .word 0x00000000
  .word 0x24130001
  .word 0x1000006f
  .word 0x00000000
  .word 0x16600009
  .word 0x00000000
  .word 0x82020003
  .word 0x000210c0
  .word 0x02421021
  .word 0x8c440060
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x10400065
  .word 0x00000000
  .word 0x82020003
  .word 0x000210c0
  .word 0x02421821
  .word 0x8c620060
  .word 0x10400003
  .word 0x00000000
  .word 0x8c420110
  .word 0xac620064
  .word 0x24130001
  .word 0x1000005a
  .word 0x00000000
  .word 0x16600009
  .word 0x00000000
  .word 0x82020003
  .word 0x000210c0
  .word 0x02421021
  .word 0x8c440060
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x10400050
  .word 0x00000000
  .word 0x82020003
  .word 0x000210c0
  .word 0x02421821
  .word 0x8c620060
  .word 0x10400003
  .word 0x00000000
  .word 0x8c420110
  .word 0xac620064
  .word 0x24130001
  .word 0x82040002
  .word 0x82020003
  .word 0x000210c0
  .word 0x02421021
  .word 0x8c450064
  .word 0x0c0f1f60
  .word 0x00000000
  .word 0x1000003e
  .word 0x00000000
  .word 0x0c0ed684
  .word 0x00000000
  .word 0x1040003a
  .word 0x00000000
  .word 0x0c068454
  .word 0x00000000
  .word 0x27a60050
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
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x27a50050
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c068464
  .word 0x00000000
  .word 0x0200202d
  .word 0x46000306
  .word 0x0c069160
  .word 0x00000000
  .word 0x24040001
  .word 0x0080282d
  .word 0x0c068010
  .word 0x00000000
  .word 0x24130001
  .word 0x10000016
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0fbf5c
  .word 0x00000000
  .word 0x10400011
  .word 0x00000000
  .word 0x24130001
  .word 0x1000000e
  .word 0x00000000
  .word 0x16600006
  .word 0x00000000
  .word 0x8e440058
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x8e420058
  .word 0x10400003
  .word 0x00000000
  .word 0x8c420110
  .word 0xae42005c
  .word 0x24130001
  .word 0x1260000e
  .word 0x00000000
  .word 0x8e220054
  .word 0x24430001
  .word 0xae230054
  .word 0x8e220050
  .word 0x8c420004
  .word 0x0062102a
  .word 0x14400005
  .word 0x00000000
  .word 0x3c02003c
  .word 0x24425170
  .word 0x10000005
  .word 0x00000000
  .word 0xae200008
  .word 0x1660feaf
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00e0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

/* Reached only through a shop function-pointer table, never by jal, which is why nothing
 * in this file references it. Retail 0x003e8e10 is `daddu $v0, $zero, $zero; jr $ra; nop`. */
// FUN_003E8E10
u32 FUN_003e8e10(void)
{
    return 0;
}

// FUN_003E8E20
int FUN_003e8e20(u8* owner)
{
    u32 descriptors[9];
    ShopU128* source;
    ShopU128* destination;
    ShopU128 value;
    s32 count;
    u32 resource;
    u32 context;
    u8* work;

    if (owner == NULL)
    {
        K_Assert(DAT_006a6af8, 0x922);
    }
    context = FUN_003c5460(uGpffffb998);
    FUN_003e0c20(context, 4, 0);
    resource = *(u32*)(owner + 0x10);
    if (resource == 0)
    {
        source = (ShopU128*)PTR_FUN_006a7040;
        destination = (ShopU128*)descriptors;
        count = 2;
        do
        {
            value = *source;
            source++;
            count--;
            *destination = value;
            destination++;
        } while (count > 0);
        *(f32*)destination = *(f32*)source;
        resource = FUN_003c5240(uGpffffb998, 1, descriptors, 0, 2);
        *(u32*)(owner + 0x10) = resource;
        if (*(s32*)owner == 4)
        {
            context = FUN_003c5460(uGpffffb998);
            FUN_003e0c20(context, 0x11, 0);
        }
    }
    else
    {
        work = (u8*)FUN_003c5470(resource);
        if (*(s32*)owner == 8)
        {
            FUN_003c6ec0(*(u32*)(*(u8**)(work + 0x10) + 0xc));
            FUN_003c6ee0(*(u32*)(*(u8**)(work + 0x10) + 0xc));
            FUN_0040c310(*(u32*)(work + 0x10));
            FUN_0040c490(*(u32*)(work + 0x10));
            *(u32*)(work + 8) = 0;
        }
        else
        {
            FUN_003c6ec0(**(u32**)(work + 0xc));
            FUN_003ffe00(*(u32*)(work + 0xc));
            FUN_003c6ee0(**(u32**)(work + 0xc));
            *(u32*)(work + 4) |= 2;
            context = FUN_003c5460(uGpffffb998);
            FUN_003e0c20(context, 0, 1);
        }
    }
    return resource;
}

// FUN_003E8FF0
u32 FUN_003e8ff0(int owner)
{
    u8* resource;
    u8* child;
    u32* state;
    u32 context;
    u32 result;

    resource = *(u8**)(owner + 0x10);
    if (resource == NULL || (child = *(u8**)(resource + 0x14)) == NULL)
    {
        result = -1;
    }
    else
    {
        state = (u32*)FUN_003c5470(resource);
        if ((*(u32*)(child + 0x14) & 8) != 0 || (state[1] & 1) != 0)
        {
            context = FUN_003c5460(uGpffffb998);
            FUN_003e0c20(context, 4, 1);
            state[1] &= ~1;
            result = *state;
        }
        else
        {
            result = -1;
        }
    }
    return result;
}

// FUN_003E90B0
u64 FUN_003e90b0(u64 unused, u64 handle)
{
    u32* state;
    u8* work;
    u32 resource;
    u32 context;

    state = (u32*)FUN_003c5460();
    work = (u8*)FUN_003c5470(handle);
    if (*state == 8)
    {
        resource = FUN_0040c6f0(2);
        *(u32*)(work + 0x10) = resource;
        context = FUN_003c5460(uGpffffb998);
        FUN_003e0c20(context, 0, 0);
        *(u32*)(work + 8) = 0;
    }
    else
    {
        resource = FUN_003ffe60(*state);
        *(u32*)(work + 0xc) = resource;
        *(u32*)(work + 4) |= 2;
    }
    return 0;
}

// FUN_003E9160
u64 FUN_003e9160(u64 unused, u64 handle)
{
    u32* state;
    u8* work;
    u32 context;

    state = (u32*)FUN_003c5460();
    work = (u8*)FUN_003c5470(handle);
    if (*state == 8)
    {
        FUN_0040c9a0(*(u32*)(work + 0x10));
        context = FUN_003c5460(uGpffffb998);
        FUN_003e0c20(context, 1, 1);
    }
    else
    {
        FUN_004003a0(*(u32*)(work + 0xc));
    }
    return 0;
}

// FUN_003E9200


u32 FUN_003e9200(u64 unused, u64 handle)
{
    u8* work;
    u8* resource;
    u8* item;
    u8* event;
    u32 state;
    u32 context;
    u32 flag;
    s32 result;

    FUN_003c5460();
    work = (u8*)FUN_003c5470(handle);
    resource = *(u8**)(*(u8**)(work + 0x10) + 0xc);
    item = *(u8**)(*(u8**)(resource + 0x24) + 0x44);
    result = FUN_0040ca00(item);
    if (result != 3)
    {
        goto evaluate;
    }
    return -1;

evaluate:
    state = *(u32*)(work + 8);
    switch (state)
    {
    case 0:
        goto initialize;
    case 1:
        goto poll;
    default:
        goto poll;
    }

initialize:
    if (FUN_003dff30(*(u32*)(item + 8)) != 0)
    {
        goto initialize_ready;
    }
    return 0;

initialize_ready:
    context = FUN_003c5460(uGpffffb998);
    FUN_003e0c20(context, 1, 0);
    *(u32*)(work + 8) = 1;

poll:
    event = (u8*)FUN_003c6c50(resource);
    if (event == NULL)
    {
        goto no_event;
    }
    flag = **(u32**)(*(u8**)(event + 0x14) + 0x1c) & 1;
    if (flag == 0)
    {
        FUN_003c6ea0(resource);
        func_0010a4e0(0, 0, 0, 1);
        func_001a0040(0, 1);
        func_001a0150(0xc00, 0);
        func_001a0150(0xc01, 0);
        func_001a0150(0xc02, 0);
        FUN_003c6f50(resource);
        FUN_0040c520(item);
        context = FUN_003c5460(uGpffffb998);
        FUN_003e0c20(context, 1, 1);
        return *(u32*)event;
    }
    if (flag != 0)
    {
        func_0010a4e0(0, 0, 0, 8);
    }
    goto done;

no_event:
    if (FUN_003c6c80(resource) == 0)
    {
        goto poll_inputs;
    }
    FUN_003c6ea0(resource);
    func_0010a4e0(0, 0, 0, 2);
    FUN_003c6f50(resource);
    FUN_0040c520(item);
    context = FUN_003c5460(uGpffffb998);
    FUN_003e0c20(context, 1, 1);
    return 4;

poll_inputs:
    if (FUN_003c6ce0(resource) != 0)
    {
        goto input_sound;
    }
    if (FUN_003c6d10(resource) == 0)
    {
        goto alternate_inputs;
    }

input_sound:
    func_0010a4e0(0, 0, 0, 0);
    goto done;

alternate_inputs:
    if (FUN_003c6ca0(resource) != 0)
    {
        goto alternate_sound;
    }
    if (FUN_003c6cc0(resource) == 0)
    {
        goto done;
    }

alternate_sound:
    func_0010a4e0(0, 0, 0, 5);

done:
    return 0;
}

// FUN_003E94F0


u64 FUN_003e94f0(u64 owner, u64 handle)
{
    int* context;
    u32* state;
    s32 next;
    u32 flags;
    u32 current;

    context = (int*)FUN_003c5460();
    state = (u32*)FUN_003c5470(handle);
    if (*context != 8)
    {
        goto other_mode;
    }
    next = FUN_003e9200(owner, handle);
    if (next == -1)
    {
        goto first_minus_one;
    }
    if (next != 0)
    {
        goto first_nonzero;
    }
    goto done;

first_minus_one:
    if ((state[1] & 2) == 0)
    {
        goto done;
    }
    flags = state[1] & ~2;
    state[1] = flags;
    state[1] = flags | 1;
    state[0] = 4;
    goto done;

first_nonzero:
    if (next != 4)
    {
        goto first_other;
    }
    func_001a0040(1, 1);
    func_001a0150(0xc00, 1);
    func_001a0150(0xc01, 1);
    func_001a0150(0xc02, 1);
    current = FUN_003c5460(uGpffffb998);
    FUN_003e0c20(current, 0, 1);
    state[1] |= 2;
    goto done;

first_other:
    state[1] |= 1;
    state[0] = next;
    goto done;

other_mode:
    if ((state[1] & 2) == 0)
    {
        goto other_active;
    }
    return 0;

other_active:
    next = FUN_004003f0(state[3]);
    if (next == -1)
    {
        goto second_minus_one;
    }
    if (next != 0)
    {
        goto second_nonzero;
    }
    goto done;

second_minus_one:
    state[1] |= 2;
    goto done;

second_nonzero:
    state[1] |= 1;
    state[0] = next;
    if (next != 3)
    {
        current = FUN_003c5460(uGpffffb998);
        FUN_003e0c20(current, 0, 0);
    }

done:
    return 0;
}

// FUN_003E96F0


u64 FUN_003e96f0(u64 param_1,u64 param_2)



{

  int *piVar1;

  int iVar2;

  

  piVar1 = (int *)FUN_003c5460();

  iVar2 = FUN_003c5470(param_2);

  if (*piVar1 == 8) {

    FUN_0040cad0(*(u32 *)(iVar2 + 0x10));

    goto done;

  }

  if ((*(u32 *)(iVar2 + 4) & 2) != 0) {

    return 0;

  }

  FUN_00400690(*(u32 *)(iVar2 + 0xc));

done:
  return 0;

}

// FUN_003E9790


void FUN_003e9790(long param_1)



{

  int iVar1;

  

  iVar1 = FUN_003c5460(uGpffffb998);

  iVar1 = FUN_003c5470(*(u32 *)(iVar1 + 0x10));

  if (param_1 == 0) {

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) & 0xfffffffd;

  }

  return;

}

// FUN_003E97F0
u32 FUN_003e97f0(u8* owner)
{
    u32 descriptors[9];
    ShopU128* source;
    ShopU128* destination;
    ShopU128 value;
    s32 count;
    u32 resource;
    u32 context;

    source = (ShopU128*)PTR_FUN_006a7070;
    destination = (ShopU128*)descriptors;
    count = 2;
    do
    {
        value = *source;
        source++;
        count--;
        *destination = value;
        destination++;
    } while (count > 0);
    *(f32*)destination = *(f32*)source;
    resource = FUN_003c5240(uGpffffb998, 2, descriptors, 0, 2);
    if (owner != NULL)
    {
        *(u32*)(owner + 0x14) = resource;
    }
    FUN_003c5470(resource);
    context = FUN_003c5460(uGpffffb998);
    FUN_003e0c20(context, 5, 0);
    return resource;
}

// FUN_003E98B0
u32 FUN_003e98b0(int owner)
{
    u8* resource;
    u8* child;
    u32* state;
    u32 context;
    u32 result;

    resource = *(u8**)(owner + 0x14);
    if (resource == NULL || (child = *(u8**)(resource + 0x14)) == NULL)
    {
        result = -1;
    }
    else
    {
        state = (u32*)FUN_003c5470(resource);
        if ((*(u32*)(child + 0x14) & 8) != 0 || (state[1] & 1) != 0)
        {
            *(u32*)(owner + 0x14) = 0;
            context = FUN_003c5460(uGpffffb998);
            FUN_003e0c20(context, 5, 1);
            result = *state;
        }
        else
        {
            result = -1;
        }
    }
    return result;
}

// FUN_003E9970


u64 FUN_003e9970(u64 param_1,u64 param_2)



{

  int iVar1;

  int iVar2;

  int *piVar3;

  int iVar4;

  u32 uVar5;

  

  piVar3 = (int *)FUN_003c5460();

  iVar1 = *piVar3;

  iVar4 = FUN_003c5470(param_2);

  iVar2 = piVar3[1];

  if (iVar2 == 0x2c) {

    uVar5 = FUN_003f33d0(iVar1,0);

    *(u32 *)(iVar4 + 0x10) = uVar5;

  }

  else if (iVar2 == 0x2d) {

    uVar5 = FUN_003f33d0(iVar1,1);

    *(u32 *)(iVar4 + 0x10) = uVar5;

  }

  else if (iVar2 == 0x2e) {

    uVar5 = FUN_003f33d0(iVar1,2);

    *(u32 *)(iVar4 + 0x10) = uVar5;

  }

  if ((*piVar3 == 0) || (*piVar3 == 1)) {

    uVar5 = FUN_003fd820(iVar1);

    *(u32 *)(iVar4 + 0xe4) = uVar5;

  }

  else {

    *(u32 *)(iVar4 + 0xe4) = 0;

  }

  *(u32 *)(iVar4 + 8) = 1;

  *(u32 *)(iVar4 + 4) = *(u32 *)(iVar4 + 4) | 2;

  return 0;

}

// FUN_003E9A90


u64 FUN_003e9a90(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  FUN_003c5a20(*(u32 *)(iVar1 + 0x10));

  if (*(int *)(iVar1 + 0xe4) != 0) {

    FUN_003fd8a0(*(u32 *)(iVar1 + 0xe4));

  }

  return 0;

}

// FUN_003E9AF0


asm u8 * FUN_003e9af0(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0802d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040882d
  .word 0x0000982d
  .word 0x0200202d
  .word 0x0c0f151c
  .word 0x00000000
  .word 0x0040902d
  .word 0x8c420004
  .word 0x30420002
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000258
  .word 0x00000000
  .word 0x8e500010
  .word 0x8e5400e4
  .word 0x0200202d
  .word 0x0c0fcfc0
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c02003c
  .word 0x24425170
  .word 0x1000024d
  .word 0x00000000
  .word 0x12800005
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0ff664
  .word 0x00000000
  .word 0x0040982d
  .word 0x8e420008
  .word 0x2c410016
  .word 0x1020023f
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463bb70
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e430004
  .word 0x30620004
  .word 0x1040000a
  .word 0x00000000
  .word 0x2402fffb
  .word 0x00621024
  .word 0xae420004
  .word 0x2644004c
  .word 0x0c0fefc4
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f1bb8
  .word 0x00000000
  .word 0x24020002
  .word 0xae420008
  .word 0x0200202d
  .word 0x0c0f1bb0
  .word 0x00000000
  .word 0xae400014
  .word 0x0200202d
  .word 0x0c0f1b14
  .word 0x00000000
  .word 0x10400070
  .word 0x00000000
  .word 0x8c430014
  .word 0x8c71001c
  .word 0xae420014
  .word 0x8e230000
  .word 0x30620020
  .word 0x1040000e
  .word 0x00000000
  .word 0x24020007
  .word 0xae420008
  .word 0x0200202d
  .word 0x0c0f1ba8
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070008
  .word 0x0c042938
  .word 0x00000000
  .word 0x1000020c
  .word 0x00000000
  .word 0x30620010
  .word 0x10400009
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070008
  .word 0x0c042938
  .word 0x00000000
  .word 0x10000201
  .word 0x00000000
  .word 0x0000982d
  .word 0x8e220008
  .word 0x30421000
  .word 0x10400025
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05bd24
  .word 0x00000000
  .word 0x2403012c
  .word 0x1443000c
  .word 0x00000000
  .word 0x24020005
  .word 0xae420008
  .word 0x24130001
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070008
  .word 0x0c042938
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x24020009
  .word 0xae420008
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c042938
  .word 0x00000000
  .word 0x26440018
  .word 0x26250004
  .word 0x0c0feca4
  .word 0x00000000
  .word 0x24020001
  .word 0xae420020
  .word 0x0200202d
  .word 0x0c0f1ba8
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x24020003
  .word 0xae420008
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c042938
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0fbe5c
  .word 0x00000000
  .word 0x26440018
  .word 0x26250004
  .word 0x0c0feca4
  .word 0x00000000
  .word 0x26440018
  .word 0x0000282d
  .word 0x0c0fec30
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0fe864
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f1ba8
  .word 0x00000000
  .word 0x12600006
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0fbb44
  .word 0x00000000
  .word 0x100001b8
  .word 0x00000000
  .word 0x8e430030
  .word 0x8e420020
  .word 0x00622018
  .word 0x0c0fbb44
  .word 0x00000000
  .word 0x100001b1
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f1b20
  .word 0x00000000
  .word 0x10400010
  .word 0x00000000
  .word 0xae400008
  .word 0x0200202d
  .word 0x0c0f1bd4
  .word 0x00000000
  .word 0x8e420004
  .word 0x34420001
  .word 0xae420004
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c042938
  .word 0x00000000
  .word 0x1000019d
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f1b60
  .word 0x00000000
  .word 0x30420001
  .word 0x10400197
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9444094e
  .word 0x30820004
  .word 0x1440000c
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430958
  .word 0x30620004
  .word 0x14400007
  .word 0x00000000
  .word 0x30820008
  .word 0x14400004
  .word 0x00000000
  .word 0x30620008
  .word 0x10400187
  .word 0x00000000
  .word 0x8e230000
  .word 0x10600004
  .word 0x00000000
  .word 0x24020001
  .word 0x14620181
  .word 0x00000000
  .word 0x2402000b
  .word 0xae420008
  .word 0x0200202d
  .word 0x0c0f1bc4
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0fbb18
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0fbb18
  .word 0x00000000
  .word 0x10000174
  .word 0x00000000
  .word 0x24020004
  .word 0xae420008
  .word 0x26440018
  .word 0x0c0fedac
  .word 0x00000000
  .word 0x24030002
  .word 0x1043001c
  .word 0x00000000
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x10000167
  .word 0x00000000
  .word 0x24020011
  .word 0xae420008
  .word 0x8e420030
  .word 0x00022023
  .word 0x8e450020
  .word 0x0c0fc574
  .word 0x00000000
  .word 0x86440024
  .word 0x8e450020
  .word 0x0c0fc5c8
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0fcb58
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0fe86c
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0fbe5c
  .word 0x00000000
  .word 0x10000151
  .word 0x00000000
  .word 0x24020001
  .word 0xae420008
  .word 0x0200202d
  .word 0x0c0f1bb0
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0fe86c
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0fbe5c
  .word 0x00000000
  .word 0x10000144
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f1b60
  .word 0x00000000
  .word 0x30420005
  .word 0x1440013e
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0ff638
  .word 0x00000000
  .word 0x2402000c
  .word 0xae420008
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050005
  .word 0x24060001
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050008
  .word 0x0000302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x12600127
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050005
  .word 0x0000302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050008
  .word 0x24060001
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x24020001
  .word 0xae420008
  .word 0x0200202d
  .word 0x0c0f1bb8
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0fbb18
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0fbb18
  .word 0x00000000
  .word 0x1000010a
  .word 0x00000000
  .word 0x2402000a
  .word 0xae420008
  .word 0x8e430030
  .word 0x8e420020
  .word 0x00623018
  .word 0x27a40070
  .word 0x2785aad8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0000202d
  .word 0x27a50070
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040004
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d38
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d58
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x144000f0
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x0c0f1d84
  .word 0x00000000
  .word 0x14400029
  .word 0x00000000
  .word 0x8e420030
  .word 0x00022023
  .word 0x8e450020
  .word 0x0c0fc574
  .word 0x00000000
  .word 0x86440024
  .word 0x8e450020
  .word 0x0c0fc5c8
  .word 0x00000000
  .word 0xae42000c
  .word 0x0200202d
  .word 0x0c0fcb58
  .word 0x00000000
  .word 0x8e230000
  .word 0x10600004
  .word 0x00000000
  .word 0x24020001
  .word 0x14620012
  .word 0x00000000
  .word 0x86440024
  .word 0x0c05c4b4
  .word 0x00000000
  .word 0x30420020
  .word 0x1040000c
  .word 0x00000000
  .word 0x2402000d
  .word 0xae420008
  .word 0x2644004c
  .word 0x26450024
  .word 0x0c0fef9c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f1bc4
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x24020011
  .word 0xae420008
  .word 0x10000003
  .word 0x00000000
  .word 0x24020001
  .word 0xae420008
  .word 0x0000202d
  .word 0x0c0fbb44
  .word 0x00000000
  .word 0x100000bb
  .word 0x00000000
  .word 0x24020006
  .word 0xae420008
  .word 0x24040009
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x144000b2
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x24020001
  .word 0xae420008
  .word 0x100000ac
  .word 0x00000000
  .word 0x24020008
  .word 0xae420008
  .word 0x24040002
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x144000a3
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x24020001
  .word 0xae420008
  .word 0x1000009d
  .word 0x00000000
  .word 0x2402000e
  .word 0xae420008
  .word 0x3c02006a
  .word 0xc44370a0
  .word 0x3c02006a
  .word 0xc44270a4
  .word 0x3c02006a
  .word 0xc44170a8
  .word 0x3c02006a
  .word 0xc44070ac
  .word 0xe7a30060
  .word 0xe7a20064
  .word 0xe7a10068
  .word 0xe7a0006c
  .word 0x8e420028
  .word 0x30420f00
  .word 0x00021203
  .word 0x00021080
  .word 0x005d1021
  .word 0x8c440060
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d38
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d58
  .word 0x00000000
  .word 0x8e420004
  .word 0x34420004
  .word 0xae420004
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x1440007a
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x0c0f1d84
  .word 0x00000000
  .word 0x1440001b
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070007
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e420028
  .word 0x30420f00
  .word 0x00021203
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x8646000c
  .word 0x24040001
  .word 0x0c05b694
  .word 0x00000000
  .word 0x8e4200e4
  .word 0x8c420000
  .word 0x8c420004
  .word 0x8c450014
  .word 0x24040001
  .word 0x0c0ff5cc
  .word 0x00000000
  .word 0x2402000f
  .word 0xae420008
  .word 0x1000005a
  .word 0x00000000
  .word 0x24020011
  .word 0xae420008
  .word 0x10000056
  .word 0x00000000
  .word 0x24020010
  .word 0xae420008
  .word 0x2404000f
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x1440004d
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x24020011
  .word 0xae420008
  .word 0x10000047
  .word 0x00000000
  .word 0x24020012
  .word 0xae420008
  .word 0x86450024
  .word 0x8e240000
  .word 0x0c0fc42c
  .word 0x00000000
  .word 0x2403ffff
  .word 0x14430005
  .word 0x00000000
  .word 0x24020015
  .word 0xae420008
  .word 0x1000003a
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400033
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x24020015
  .word 0xae420008
  .word 0x1000002d
  .word 0x00000000
  .word 0x8e240000
  .word 0x86450024
  .word 0x0c0fc358
  .word 0x00000000
  .word 0x8e240000
  .word 0x0c0fc51c
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x24020013
  .word 0xae420008
  .word 0x10000020
  .word 0x00000000
  .word 0x24020001
  .word 0xae420008
  .word 0x1000001c
  .word 0x00000000
  .word 0x24020014
  .word 0xae420008
  .word 0x8e240000
  .word 0x0000282d
  .word 0x0c0fc4a8
  .word 0x00000000
  .word 0x2403ffff
  .word 0x10430004
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x1440000c
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f1bd4
  .word 0x00000000
  .word 0x8e420004
  .word 0x34420001
  .word 0xae420004
  .word 0x8e220008
  .word 0x34420001
  .word 0xae220008
  .word 0x2644004c
  .word 0x0c0fefc8
  .word 0x00000000
  .word 0x0000102d
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
}

// FUN_003EA4D0
u64 FUN_003ea4d0(u64 unused, u64 handle)
{
    u8* work;
    u32 resource;

    work = (u8*)FUN_003c5470(handle);
    if ((*(u32*)(work + 4) & 2) != 0)
    {
        return 0;
    }
    FUN_003c6380(*(u32*)(work + 0x10));
    resource = *(u32*)(work + 0xe4);
    if (resource != 0)
    {
        FUN_003fdf80(resource);
    }
    FUN_003fbc00(work + 0x18);
    FUN_003fc980(work + 0x4c);
    return 0;
}

// FUN_003EA560
u32 FUN_003ea560(int command)
{
    u8* context;
    u8* work;

    context = (u8*)FUN_003c5460(uGpffffb998);
    work = (u8*)FUN_003c5470(*(u32*)(context + 0x14));
    switch (command)
    {
    case 0:
        *(u32*)(work + 4) &= ~2;
        break;
    case 1:
        if ((**(u32**)(*(u8**)(*(u8**)(work + 0x10) + 0x24) + 0x44) & 2) != 0)
        {
            return 1;
        }
        break;
    }
    return 0;
}

// FUN_003EA600
u32 FUN_003ea600(u8* owner)
{
    u32 descriptors[9];
    ShopU128* source;
    ShopU128* destination;
    ShopU128 value;
    s32 count;
    u32 resource;
    u32 context;

    source = (ShopU128*)PTR_FUN_006a70b0;
    destination = (ShopU128*)descriptors;
    count = 2;
    do
    {
        value = *source;
        source++;
        count--;
        *destination = value;
        destination++;
    } while (count > 0);
    *(f32*)destination = *(f32*)source;
    resource = FUN_003c5240(uGpffffb998, 3, descriptors, 0, 2);
    if (owner != NULL)
    {
        *(u32*)(owner + 0x18) = resource;
    }
    context = FUN_003c5460(uGpffffb998);
    FUN_003e0c20(context, 6, 0);
    return resource;
}

// FUN_003EA6B0
u32 FUN_003ea6b0(int owner)
{
    u8* resource;
    u8* child;
    u32* state;
    u32 context;
    u32 result;

    resource = *(u8**)(owner + 0x18);
    if (resource == NULL || (child = *(u8**)(resource + 0x14)) == NULL)
    {
        result = -1;
    }
    else
    {
        state = (u32*)FUN_003c5470(resource);
        if ((*(u32*)(child + 0x14) & 8) != 0 || (state[1] & 1) != 0)
        {
            context = FUN_003c5460(uGpffffb998);
            FUN_003e0c20(context, 6, 1);
            *(u32*)(owner + 0x18) = 0;
            result = *state;
        }
        else
        {
            result = -1;
        }
    }
    return result;
}

// FUN_003EA770


u64 FUN_003ea770(u64 param_1,u64 param_2)



{

  u32 *puVar1;

  int iVar2;

  u32 uVar3;

  

  puVar1 = (u32 *)FUN_003c5460();

  iVar2 = FUN_003c5470(param_2);

  uVar3 = FUN_003f9e30_y2(*puVar1);

  *(u32 *)(iVar2 + 0xc) = uVar3;

  *(u32 *)(iVar2 + 8) = 1;

  *(u32 *)(iVar2 + 4) = *(u32 *)(iVar2 + 4) | 2;

  return 0;

}

// FUN_003EA7E0


u64 FUN_003ea7e0(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  FUN_003c5a20(*(u32 *)(iVar1 + 0xc));

  return 0;

}

// FUN_003EA820


u8 * FUN_003ea820(u64 unused, u64 handle)
{
    u8* work;
    u32 resource;
    u8* object;
    u32* item;
    char text[32];

    work = (u8*)FUN_003c5470(handle);
    if ((*(u32*)(work + 4) & 2) != 0)
    {
        return NULL;
    }

    resource = *(u32*)(work + 0xc);
    if (FUN_003fa0d0(resource) != 0)
    {
        return (u8*)&LAB_003c5170;
    }

    switch (*(u32*)(work + 8))
    {
    case 1:
        *(u32*)(work + 8) = 2;
        FUN_003c6ec0(resource);
        *(u32*)(work + 0x10) = 0;
        /* fallthrough */
    case 2:
        object = (u8*)FUN_003c6c50(resource);
        if (object != NULL)
        {
            item = *(u32**)(*(u8**)(object + 0x14) + 0x1c);
            *(u32*)(work + 0x10) = (u32)object;
            if ((*item & 0x40) != 0)
            {
                func_0010a4e0(0, 0, 0, 8);
                *(u32*)(work + 8) = 3;
                FUN_003c6ea0(resource);
                break;
            }
            if ((*item & 0x10) != 0)
            {
                break;
            }
            if ((item[2] & 0x1000) != 0)
            {
                func_0010a4e0(0, 0, 0, 1);
                *(u32*)(work + 8) = 7;
                fclShopMisc003fb290(work + 0x14, item + 1);
                *(u32*)(work + 0x1c) = 1;
                FUN_003c6ea0(resource);
                break;
            }

            func_0010a4e0(0, 0, 0, 1);
            *(u32*)(work + 8) = 5;
            FUN_003ef970(5);
            fclShopMisc003fb290(work + 0x14, item + 1);
            FUN_003fb0c0(work + 0x14, 1);
            FUN_003fa190(resource);
            FUN_003c6ea0(resource);
            break;
        }

        if (FUN_003c6c80(resource) != 0)
        {
            *(u32*)(work + 8) = 0;
            FUN_003c6f50(resource);
            *(u32*)(work + 4) |= 1;
            func_0010a4e0(0, 0, 0, 2);
        }
        break;
    case 3:
        *(u32*)(work + 8) = 4;
        FUN_003c7430(10);
        /* fallthrough */
    case 4:
        if (FUN_003c7850() == 0)
        {
            FUN_003c7700();
            *(u32*)(work + 8) = 1;
        }
        break;

    case 5:
        *(u32*)(work + 8) = 6;
        /* fallthrough */
    case 6:
        switch (FUN_003fb6b0(work + 0x14))
        {
        case 1:
            *(u32*)(work + 8) = 1;
            FUN_003f15d0(*(u32*)(work + 0x2c), *(u32*)(work + 0x1c));
            FUN_003f1830(work + 0x20, *(u32*)(work + 0x1c));
            FUN_003f9b20(resource, *(u32*)(work + 0x10));
            FUN_003fa1b0(resource);
            FUN_003ef970(4);
            break;
        case 2:
            *(u32*)(work + 8) = 1;
            FUN_003c6ec0(resource);
            FUN_003fa1b0(resource);
            FUN_003ef970(4);
            break;
        }
        break;
    case 7:
        *(u32*)(work + 8) = 8;
        FUN_003eed10(*(s32*)(work + 0x2c) * *(s32*)(work + 0x1c));
        sprintf(text, (const char*)&gp0xffffaad8,
                *(s32*)(work + 0x2c) * *(s32*)(work + 0x1c));
        FUN_003c7bc0(0, text);
        FUN_003c7430(6);
        FUN_003c74e0(0);
        FUN_003c7560(0);
        /* fallthrough */
    case 8:
        if (FUN_003c7850() == 0)
        {
            FUN_003c7700();
            if (FUN_003c7610() == 0)
            {
                FUN_003f15d0(*(u32*)(work + 0x2c), *(u32*)(work + 0x1c));
                FUN_003f1830(work + 0x20, *(u32*)(work + 0x1c));
                FUN_003f9b20(resource, *(u32*)(work + 0x10));
            }
            *(u32*)(work + 8) = 1;
            FUN_003eed10(0);
        }
        break;
    }

    return NULL;
}

// FUN_003EAC40


u64 FUN_003eac40(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  if ((*(u32 *)(iVar1 + 4) & 2) != 0) {

    return 0;

  }

  FUN_003c6380(*(u32 *)(iVar1 + 0xc));

  FUN_003fbc00(iVar1 + 0x14);

  return 0;

}

// FUN_003EACB0


void FUN_003eacb0(long param_1)



{

  int iVar1;

  

  iVar1 = FUN_003c5460(uGpffffb998);

  iVar1 = FUN_003c5470(*(u32 *)(iVar1 + 0x18));

  if (param_1 == 0) {

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) & 0xfffffffd;

  }

  return;

}

// FUN_003EAD10
u32 FUN_003ead10(u8* owner)
{
    u32 descriptors[9];
    ShopU128* source;
    ShopU128* destination;
    ShopU128 value;
    s32 count;
    u32 resource;
    u32 context;

    source = (ShopU128*)PTR_FUN_006a70e0;
    destination = (ShopU128*)descriptors;
    count = 2;
    do
    {
        value = *source;
        source++;
        count--;
        *destination = value;
        destination++;
    } while (count > 0);
    *(f32*)destination = *(f32*)source;
    resource = FUN_003c5240(uGpffffb998, 7, descriptors, 0, 2);
    if (owner != NULL)
    {
        *(u32*)(owner + 0x28) = resource;
    }
    context = FUN_003c5460(uGpffffb998);
    FUN_003e0c20(context, 5, 0);
    FUN_003c5470(resource);
    return resource;
}

// FUN_003EADD0
u32 FUN_003eadd0(int owner)
{
    u8* resource;
    u8* child;
    u32* state;
    u32 context;
    u32 result;

    resource = *(u8**)(owner + 0x28);
    if (resource == NULL || (child = *(u8**)(resource + 0x14)) == NULL)
    {
        result = -1;
    }
    else
    {
        state = (u32*)FUN_003c5470(resource);
        if ((*(u32*)(child + 0x14) & 8) != 0 || (state[1] & 1) != 0)
        {
            *(u32*)(owner + 0x28) = 0;
            context = FUN_003c5460(uGpffffb998);
            FUN_003e0c20(context, 5, 1);
            if ((state[1] & 8) != 0)
            {
                result = 1;
            }
            else
            {
                result = *state;
            }
        }
        else
        {
            result = -1;
        }
    }
    return result;
}

// FUN_003EAEB0


u64 FUN_003eaeb0(u64 param_1,u64 param_2)



{

  u32 *puVar1;

  int iVar2;

  u32 uVar3;

  

  puVar1 = (u32 *)FUN_003c5460();

  uVar3 = *puVar1;

  iVar2 = FUN_003c5470(param_2);

  uVar3 = FUN_003fe3e0(uVar3);

  *(u32 *)(iVar2 + 0xc) = uVar3;

  *(u32 *)(iVar2 + 0x10) = 0;

  *(u32 *)(iVar2 + 8) = 1;

  *(u32 *)(iVar2 + 4) = *(u32 *)(iVar2 + 4) | 2;

  return 0;

}

// FUN_003EAF30


u64 FUN_003eaf30(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  FUN_003c5a20(*(u32 *)(iVar1 + 0xc));

  if (*(int *)(iVar1 + 0x10) != 0) {

    FUN_003c5a20(*(u32 *)(iVar1 + 0x10));

  }

  return 0;

}

// FUN_003EAF90


asm u8 * FUN_003eaf90(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040802d
  .word 0x0220202d
  .word 0x0c0f151c
  .word 0x00000000
  .word 0x0040882d
  .word 0x8c420004
  .word 0x30420002
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000024f
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0c0ff974
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c02003c
  .word 0x24425170
  .word 0x10000246
  .word 0x00000000
  .word 0x8e240010
  .word 0x10800009
  .word 0x00000000
  .word 0x0c0ffa54
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x8e240010
  .word 0x0c0f1688
  .word 0x00000000
  .word 0xae200010
  .word 0x8e220008
  .word 0x2c410012
  .word 0x10200236
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463bc00
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e220004
  .word 0x34420001
  .word 0xae220004
  .word 0x1000022a
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0c0f1bb0
  .word 0x00000000
  .word 0x24020002
  .word 0xae220008
  .word 0x8e32000c
  .word 0x0240202d
  .word 0x0c0f1b14
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000016
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c042938
  .word 0x00000000
  .word 0xae300014
  .word 0x24020005
  .word 0xae220008
  .word 0x0240202d
  .word 0x0c0f1ba8
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0f1bc4
  .word 0x00000000
  .word 0x0000202d
  .word 0x2405000b
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x10000209
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0f1b20
  .word 0x00000000
  .word 0x10400204
  .word 0x00000000
  .word 0xae200008
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c042938
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0f1bd4
  .word 0x00000000
  .word 0x8e220004
  .word 0x34420001
  .word 0xae220004
  .word 0x100001f5
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050005
  .word 0x24060001
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050009
  .word 0x0000302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x8e220010
  .word 0x14400009
  .word 0x00000000
  .word 0x8e220014
  .word 0x8c420014
  .word 0x8c42001c
  .word 0x0000202d
  .word 0x24450004
  .word 0x0c0ffa14
  .word 0x00000000
  .word 0xae220010
  .word 0x8e240010
  .word 0x0c0f1bb0
  .word 0x00000000
  .word 0x24020006
  .word 0xae220008
  .word 0x8e320010
  .word 0x0240202d
  .word 0x0c0f1b14
  .word 0x00000000
  .word 0x10400029
  .word 0x00000000
  .word 0x8c430014
  .word 0x8c70001c
  .word 0xae220014
  .word 0x8e020000
  .word 0x30420010
  .word 0x144001c8
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c042938
  .word 0x00000000
  .word 0x2402000b
  .word 0xae220008
  .word 0x0240202d
  .word 0x0c0f1ba8
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0f1bc4
  .word 0x00000000
  .word 0x8e22000c
  .word 0x8c42000c
  .word 0x8c420014
  .word 0x8c42001c
  .word 0x26240018
  .word 0x24450004
  .word 0x8e060014
  .word 0x0c100778
  .word 0x00000000
  .word 0x26240018
  .word 0x26250034
  .word 0x0c100900
  .word 0x00000000
  .word 0x0000202d
  .word 0x2405000c
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x100001a7
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0f1b20
  .word 0x00000000
  .word 0x10400025
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c042938
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0f1bd4
  .word 0x00000000
  .word 0x24020001
  .word 0xae220008
  .word 0x8e24000c
  .word 0x0c0f1bb8
  .word 0x00000000
  .word 0x0000202d
  .word 0x2405000e
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050005
  .word 0x0000302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050009
  .word 0x24060001
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x1000017e
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420010
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420958
  .word 0x30420010
  .word 0x10400174
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070003
  .word 0x0c042938
  .word 0x00000000
  .word 0x24020007
  .word 0xae220008
  .word 0x8e240010
  .word 0x0c0f1bc4
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050011
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x8e220010
  .word 0x8c42000c
  .word 0x8c420014
  .word 0x8c51001c
  .word 0x8e040084
  .word 0x24050008
  .word 0x0c0f2740
  .word 0x00000000
  .word 0x8e040084
  .word 0x8e250014
  .word 0x0000302d
  .word 0x0c0f26c0
  .word 0x00000000
  .word 0x10000156
  .word 0x00000000
  .word 0x24020004
  .word 0xae220008
  .word 0x2404001a
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x1440014d
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x2402000b
  .word 0xae220008
  .word 0x10000147
  .word 0x00000000
  .word 0x2402000a
  .word 0xae220008
  .word 0x2404001b
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x1440013e
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x2402000b
  .word 0xae220008
  .word 0x10000138
  .word 0x00000000
  .word 0x24020008
  .word 0xae220008
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050009
  .word 0x24060001
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x2405000a
  .word 0x0000302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420020
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420958
  .word 0x30420020
  .word 0x1040011c
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050009
  .word 0x0000302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x2405000a
  .word 0x24060001
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070004
  .word 0x0c042938
  .word 0x00000000
  .word 0x24020005
  .word 0xae220008
  .word 0x8e240010
  .word 0x0c0f1bb8
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050012
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x8e040084
  .word 0x24050010
  .word 0x0c0f2740
  .word 0x00000000
  .word 0x100000f7
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0fbf98
  .word 0x00000000
  .word 0x144000f2
  .word 0x00000000
  .word 0x2402000c
  .word 0xae220008
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050009
  .word 0x24060001
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x2405000b
  .word 0x0000302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9444094e
  .word 0x30820040
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430958
  .word 0x30620040
  .word 0x1040002c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e22000c
  .word 0x8c42000c
  .word 0x8c420014
  .word 0x8c43001c
  .word 0x8c620000
  .word 0x30420040
  .word 0x1040000e
  .word 0x00000000
  .word 0x84700006
  .word 0x24040001
  .word 0x0000282d
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x16020005
  .word 0x00000000
  .word 0x24020003
  .word 0xae220008
  .word 0x100000bb
  .word 0x00000000
  .word 0x8e220010
  .word 0x8c42000c
  .word 0x8c420014
  .word 0x8c42001c
  .word 0x8c420000
  .word 0x30420040
  .word 0x10400005
  .word 0x00000000
  .word 0x24020009
  .word 0xae220008
  .word 0x100000af
  .word 0x00000000
  .word 0x2402000d
  .word 0xae220008
  .word 0x100000ab
  .word 0x00000000
  .word 0x30820020
  .word 0x14400004
  .word 0x00000000
  .word 0x30620020
  .word 0x104000a5
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c042938
  .word 0x00000000
  .word 0x24020005
  .word 0xae220008
  .word 0x8e240010
  .word 0x0c0f1bb8
  .word 0x00000000
  .word 0x8e230004
  .word 0x2402fffb
  .word 0x00621024
  .word 0xae220004
  .word 0x0000202d
  .word 0x2405000f
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050009
  .word 0x0000302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x2405000b
  .word 0x24060001
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x10000080
  .word 0x00000000
  .word 0x2402000e
  .word 0xae220008
  .word 0x8225003c
  .word 0x0000202d
  .word 0x24060011
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x86250034
  .word 0x24040001
  .word 0x24060011
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x86240034
  .word 0x0c100624
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x24040011
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x24040012
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d38
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d58
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x1440005d
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x0c0f1d84
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x2402000f
  .word 0xae220008
  .word 0x10000053
  .word 0x00000000
  .word 0x2402000b
  .word 0xae220008
  .word 0x1000004f
  .word 0x00000000
  .word 0x24020010
  .word 0xae220008
  .word 0x24060001
  .word 0x86220018
  .word 0x30420002
  .word 0x10400002
  .word 0x00000000
  .word 0x24060002
  .word 0x27a40040
  .word 0x2785aad8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0000202d
  .word 0x27a50040
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040013
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400038
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x24020011
  .word 0xae220008
  .word 0x8e230004
  .word 0x2402fffb
  .word 0x00621024
  .word 0xae220004
  .word 0x34420008
  .word 0xae220004
  .word 0x26240018
  .word 0x0c05f070
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050010
  .word 0x0c0fbf78
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x2405000b
  .word 0x24060001
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0xae200008
  .word 0x8e220010
  .word 0x8c42000c
  .word 0x8c420014
  .word 0x8c42001c
  .word 0x8c420014
  .word 0x94440002
  .word 0x0c05d2d0
  .word 0x00000000
  .word 0x8e22000c
  .word 0x8c42000c
  .word 0x8c420014
  .word 0x8c42001c
  .word 0x24440004
  .word 0x24050001
  .word 0x0c0fc60c
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0c0f1bd4
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_003EB940
u64 FUN_003eb940(u64 unused, u64 handle)
{
    u8* work;
    u32 secondary;

    work = (u8*)FUN_003c5470(handle);
    if ((*(u32*)(work + 4) & 2) != 0)
    {
        return 0;
    }
    FUN_003c6380(*(u32*)(work + 0xc));
    secondary = *(u32*)(work + 0x10);
    if (secondary != 0)
    {
        FUN_003c6380(secondary);
    }
    return 0;
}

// FUN_003EB9B0


void FUN_003eb9b0(long param_1)



{

  int iVar1;

  

  iVar1 = FUN_003c5460(uGpffffb998);

  iVar1 = FUN_003c5470(*(u32 *)(iVar1 + 0x28));

  if (param_1 == 0) {

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) & 0xfffffffd;

  }

  return;

}

// FUN_003EBA10
u32 FUN_003eba10(u8* owner)
{
    u32 descriptors[9];
    ShopU128* source;
    ShopU128* destination;
    ShopU128 value;
    s32 count;
    u32 resource;
    u32 context;

    source = (ShopU128*)PTR_FUN_006a7110;
    destination = (ShopU128*)descriptors;
    count = 2;
    do
    {
        value = *source;
        source++;
        count--;
        *destination = value;
        destination++;
    } while (count > 0);
    *(f32*)destination = *(f32*)source;
    resource = FUN_003c5240(uGpffffb998, 6, descriptors, 0, 2);
    if (owner != NULL)
    {
        *(u32*)(owner + 0x24) = resource;
    }
    FUN_003c5470(resource);
    context = FUN_003c5460(uGpffffb998);
    FUN_003e0c20(context, 7, 0);
    return resource;
}

// FUN_003EBAD0
u32 FUN_003ebad0(int owner)
{
    u8* resource;
    u8* child;
    u32* state;
    u32 context;
    u32 result;

    resource = *(u8**)(owner + 0x24);
    if (resource == NULL || (child = *(u8**)(resource + 0x14)) == NULL)
    {
        result = -1;
    }
    else
    {
        state = (u32*)FUN_003c5470(resource);
        if ((*(u32*)(child + 0x14) & 8) != 0 || (state[1] & 1) != 0)
        {
            context = FUN_003c5460(uGpffffb998);
            FUN_003e0c20(context, 7, 1);
            *(u32*)(owner + 0x24) = 0;
            result = *state;
        }
        else
        {
            result = -1;
        }
    }
    return result;
}

// FUN_003EBB90


u64 FUN_003ebb90(u64 param_1,u64 param_2)



{

  u32 *puVar1;

  int iVar2;

  u32 uVar3;

  

  puVar1 = (u32 *)FUN_003c5460();

  uVar3 = *puVar1;

  iVar2 = FUN_003c5470(param_2);

  if (puVar1[1] == 0x45) {

    uVar3 = FUN_003fef30(uVar3,0);

    *(u32 *)(iVar2 + 0xc) = uVar3;

  }

  else if (puVar1[1] == 0x47) {

    uVar3 = FUN_003fef30(uVar3,1);

    *(u32 *)(iVar2 + 0xc) = uVar3;

  }

  else {

    K_Assert(DAT_006a6af8,0xec7);

  }

  *(u32 *)(iVar2 + 8) = 1;

  *(u32 *)(iVar2 + 4) = *(u32 *)(iVar2 + 4) | 2;

  return 0;

}

// FUN_003EBC70


u64 FUN_003ebc70(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  FUN_003c5a20(*(u32 *)(iVar1 + 0xc));

  return 0;

}

// FUN_003EBCB0


u8 * FUN_003ebcb0(u64 unused, u64 handle)
{
    u8* work;
    u32 resource;
    u8* object;
    u8* item;
    u32 price;
    s32 amount;
    s32 statId;
    char text[32];

    FUN_003c5460();
    work = (u8*)FUN_003c5470(handle);
    if ((*(u32*)(work + 4) & 2) != 0)
    {
        return NULL;
    }

    resource = *(u32*)(work + 0xc);
    if (FUN_003ff570(resource) != 0)
    {
        return (u8*)&LAB_003c5170;
    }

    switch (*(u32*)(work + 8))
    {
    case 0:
        break;
    case 1:
        FUN_003c6ec0(resource);
        *(u32*)(work + 8) = 2;
        /* fallthrough */
    case 2:
        object = (u8*)FUN_003c6c50(resource);
        if (object != NULL)
        {
            item = *(u8**)(*(u8**)(object + 0x14) + 0x1c);
            *(u32*)(work + 0x10) = (u32)object;
            FUN_003c6ea0(resource);
            if ((*(u32*)item & 0x10) == 0)
            {
                func_0010a4e0(0, 0, 0, 1);
                *(u32*)(work + 8) = 5;
            }
            else if (*(s16*)(item + 0xe) >= 99)
            {
                func_0010a4e0(0, 0, 0, 8);
                *(u32*)(work + 8) = 3;
            }
            else
            {
                func_0010a4e0(0, 0, 0, 8);
                *(u32*)(work + 8) = 1;
            }
            break;
        }
        if (FUN_003c6c80(resource) != 0)
        {
            *(u32*)(work + 8) = 0;
            func_0010a4e0(0, 0, 0, 2);
            FUN_003c6f50(resource);
            *(u32*)(work + 4) |= 1;
        }
        break;

    case 3:
        *(u32*)(work + 8) = 4;
        FUN_003c7430(9);
        /* fallthrough */
    case 4:
        if (FUN_003c7850() == 0)
        {
            FUN_003c7700();
            *(u32*)(work + 8) = 1;
        }
        break;

    case 5:
        *(u32*)(work + 8) = 6;
        price = func_00171110(
            *(s16*)(*(u8**)(*(u8**)(*(u8**)(work + 0x10) + 0x14) + 0x1c) + 4), 2);
        sprintf(text, (const char*)&gp0xffffaae8, price);
        FUN_003c7bc0(0, text);
        FUN_003c7430(0x10);
        FUN_003c74e0(0);
        FUN_003c7560(0);
        /* fallthrough */
    case 6:
        if (FUN_003c7850() == 0)
        {
            FUN_003c7700();
            if (FUN_003c7610() == 0)
            {
                item = *(u8**)(*(u8**)(*(u8**)(work + 0x10) + 0x14) + 0x1c);
                FUN_003f1720(*(s16*)(item + 4), 1);
                amount = -*(s16*)(item + 0x16);
                FUN_003f1720(*(s16*)(item + 0x14), amount);
                amount = -*(volatile /* Removing this function's qualifier batch loses FUN_003ebcb0 (MATCH nd0 -> MISMATCH nd10, size 808 -> 808) - measured W170. */ s16*)(item + 0x1a);
                statId = *(volatile /* Removing this function's qualifier batch loses FUN_003ebcb0 (MATCH nd0 -> MISMATCH nd10, size 808 -> 808) - measured W170. */ s16*)(item + 0x18);
                FUN_003f1720(statId, amount);
                FUN_003fee40(resource);
                func_0010a4e0(0, 0, 0, 6);
            }
            *(u32*)(work + 8) = 1;
        }
        break;
    }

    return NULL;
}

// FUN_003EBFE0


u64 FUN_003ebfe0(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  if ((*(u32 *)(iVar1 + 4) & 2) != 0) {

    return 0;

  }

  FUN_003c6380(*(u32 *)(iVar1 + 0xc));

  return 0;

}

// FUN_003EC030


void FUN_003ec030(long param_1)



{

  int iVar1;

  

  iVar1 = FUN_003c5460(DAT_007ce688);

  iVar1 = FUN_003c5470(*(u32 *)(iVar1 + 0x24));

  if (param_1 == 0) {

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) & 0xfffffffd;

  }

  return;

}

// FUN_003EC090
u32 FUN_003ec090(u8* owner)
{
    u32 descriptors[9];
    ShopU128* source;
    ShopU128* destination;
    ShopU128 value;
    s32 count;
    u32 resource;
    u32 context;

    source = (ShopU128*)PTR_FUN_006a7140;
    destination = (ShopU128*)descriptors;
    count = 2;
    do
    {
        value = *source;
        source++;
        count--;
        *destination = value;
        destination++;
    } while (count > 0);
    *(f32*)destination = *(f32*)source;
    resource = FUN_003c5240(DAT_007ce688, 8, descriptors, 0, 2);
    if (owner != NULL)
    {
        *(u32*)(owner + 0x2c) = resource;
    }
    FUN_003c5470(resource);
    context = FUN_003c5460(DAT_007ce688);
    FUN_003e0c20(context, 5, 0);
    return resource;
}

// FUN_003EC150
u32 FUN_003ec150(int owner)
{
    u8* resource;
    u8* child;
    u32* state;
    u32 context;
    u32 result;

    resource = *(u8**)(owner + 0x2c);
    if (resource == NULL || (child = *(u8**)(resource + 0x14)) == NULL)
    {
        result = -1;
    }
    else
    {
        state = (u32*)FUN_003c5470(resource);
        if ((*(u32*)(child + 0x14) & 8) != 0 || (state[1] & 1) != 0)
        {
            context = FUN_003c5460(DAT_007ce688);
            FUN_003e0c20(context, 5, 1);
            *(u32*)(owner + 0x2c) = 0;
            result = *state;
        }
        else
        {
            result = -1;
        }
    }
    return result;
}

// FUN_003EC210


u64 FUN_003ec210(u64 param_1,u64 param_2)



{

  u32 *puVar1;

  int iVar2;

  u32 uVar3;

  

  puVar1 = (u32 *)FUN_003c5460();

  uVar3 = *puVar1;

  iVar2 = FUN_003c5470(param_2);

  uVar3 = FUN_00405ac0(uVar3,0);

  *(u32 *)(iVar2 + 0xc) = uVar3;

  *(u32 *)(iVar2 + 8) = 1;

  return 0;

}

// FUN_003EC280


u64 FUN_003ec280(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  FUN_00405d60(*(u32 *)(iVar1 + 0xc));

  return 0;

}

// FUN_003EC2C0
u8 * FUN_003ec2c0(u64 unused, u64 handle)
{
    u8* work;
    u32 resource;
    u8* object;
    u32* itemFlags;
    u8* item;
    s16 value;
    s32 mode;
    s32 available;
    char text[32];

    FUN_003c5460();
    work = (u8*)FUN_003c5470(handle);
    if ((*(u32*)(work + 4) & 2) != 0)
    {
        return NULL;
    }

    resource = *(u32*)(work + 0xc);
    if (FUN_00405e30(resource) != 0)
    {
        return (u8*)&LAB_003c5170;
    }

    switch (*(u32*)(work + 8))
    {
    case 0:
        break;
    case 1:
        FUN_003c6ec0(resource);
        *(u32*)(work + 8) = 2;
        /* fallthrough */
    case 2:
        object = (u8*)FUN_003c6c50(resource);
        if (object != NULL)
        {
            itemFlags = *(u32**)(*(u8**)(object + 0x14) + 0x1c);
            *(u32*)(work + 0x10) = (u32)object;
            if ((*itemFlags & 0x10) == 0)
            {
                available = FUN_0017c700() < 3;
                if (available == 0)
                {
                    func_0010a4e0(0, 0, 0, 1);
                    FUN_003c6ea0(resource);
                    *(u32*)(work + 8) = 7;
                }
                else
                {
                    *(u32*)(work + 8) = 3;
                    FUN_003c6ea0(resource);
                    func_0010a4e0(0, 0, 0, 1);
                }
            }
            else
            {
                func_0010a4e0(0, 0, 0, 8);
            }
            break;
        }
        if (FUN_003c6c80(resource) != 0)
        {
            *(u32*)(work + 8) = 0;
            func_0010a4e0(0, 0, 0, 2);
            FUN_003c6f50(resource);
            *(u32*)(work + 4) |= 1;
        }
        break;

    case 3:
        *(u32*)(work + 8) = 4;
        FUN_003c7430(1);
        FUN_003c74e0(0);
        FUN_003c7560(0);
        /* fallthrough */
    case 4:
        if (FUN_003c7850() == 0)
        {
            FUN_003c7700();
            if (FUN_003c7610() == 0)
            {
                if (FUN_004032f0(
                    *(s16*)(*(u8**)(*(u8**)(*(u8**)(work + 0x10) + 0x14) + 0x1c) + 4)) != 0)
                {
                    FUN_00405970(*(u32*)(work + 0xc), *(u32*)(work + 0x10));
                    *(u32*)(work + 8) = 5;
                }
                else
                {
                    *(u32*)(work + 8) = 1;
                }
            }
            else
            {
                *(u32*)(work + 8) = 1;
            }
        }
        break;

    case 5:
        *(u32*)(work + 8) = 6;
        item = *(u8**)(*(u8**)(*(u8**)(work + 0x10) + 0x14) + 0x1c);
        value = FUN_00403800_y2(*(s16*)(item + 4));
        sprintf(text, (const char*)&gp0xffffaad8, value);
        FUN_003c7bc0(0, text);
        value = FUN_00403830_y2(*(s16*)(item + 4));
        sprintf(text, (const char*)&gp0xffffaad8, value);
        FUN_003c7bc0(1, text);
        mode = FUN_00403410(*(s16*)(item + 4));
        switch (mode)
        {
        case 2:
            FUN_003c7430(4);
            break;
        case 3:
            FUN_003c7430(3);
            break;
        case 1:
        default:
            FUN_003c7430(2);
            break;
        }
        /* fallthrough */
    case 6:
        if (FUN_003c7850() == 0)
        {
            FUN_003c7700();
            *(u32*)(work + 8) = 1;
        }
        break;

    case 7:
        *(u32*)(work + 8) = 8;
        FUN_003c7430(5);
        /* fallthrough */
    case 8:
        if (FUN_003c7850() == 0)
        {
            FUN_003c7700();
            *(u32*)(work + 8) = 1;
        }
        break;
    }

    return NULL;
}

// FUN_003EC6A0


u64 FUN_003ec6a0(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  if ((*(u32 *)(iVar1 + 4) & 2) != 0) {

    return 0;

  }

  FUN_003c6380(*(u32 *)(iVar1 + 0xc));

  return 0;

}

// FUN_003EC6F0
u32 FUN_003ec6f0(u8* owner)
{
    u32 descriptors[9];
    ShopU128* source;
    ShopU128* destination;
    ShopU128 value;
    s32 count;
    u32 resource;
    u32 context;

    source = (ShopU128*)PTR_FUN_006a7170;
    destination = (ShopU128*)descriptors;
    count = 2;
    do
    {
        value = *source;
        source++;
        count--;
        *destination = value;
        destination++;
    } while (count > 0);
    *(f32*)destination = *(f32*)source;
    resource = FUN_003c5240(DAT_007ce688, 9, descriptors, 0, 2);
    if (owner != NULL)
    {
        *(u32*)(owner + 0x30) = resource;
    }
    FUN_003c5470(resource);
    context = FUN_003c5460(DAT_007ce688);
    FUN_003e0c20(context, 5, 0);
    return resource;
}

// FUN_003EC7B0
u32 FUN_003ec7b0(int owner)
{
    u8* resource;
    u8* child;
    u32* state;
    u32 context;
    u32 result;

    resource = *(u8**)(owner + 0x30);
    if (resource == NULL || (child = *(u8**)(resource + 0x14)) == NULL)
    {
        result = -1;
    }
    else
    {
        state = (u32*)FUN_003c5470(resource);
        if ((*(u32*)(child + 0x14) & 8) != 0 || (state[1] & 1) != 0)
        {
            *(u32*)(owner + 0x30) = 0;
            context = FUN_003c5460(DAT_007ce688);
            FUN_003e0c20(context, 5, 1);
            result = *state;
        }
        else
        {
            result = -1;
        }
    }
    return result;
}

// FUN_003EC870


u64 FUN_003ec870(u64 param_1,u64 param_2)



{

  u32 *puVar1;

  int iVar2;

  u32 uVar3;

  

  puVar1 = (u32 *)FUN_003c5460();

  uVar3 = *puVar1;

  iVar2 = FUN_003c5470(param_2);

  uVar3 = FUN_00405ac0(uVar3,1);

  *(u32 *)(iVar2 + 0xc) = uVar3;

  *(u32 *)(iVar2 + 8) = 1;

  return 0;

}

// FUN_003EC8E0


u64 FUN_003ec8e0(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  FUN_00405d60(*(u32 *)(iVar1 + 0xc));

  return 0;

}

// FUN_003EC920


u8 * FUN_003ec920(u64 unused, u64 handle)
{
    u8* work;
    u32 resource;
    u8* object;
    u8* item;
    u32* itemFlags;
    s32 amount;
    char text[32];

    FUN_003c5460();
    work = (u8*)FUN_003c5470(handle);
    if ((*(u32*)(work + 4) & 2) != 0)
    {
        return NULL;
    }

    resource = *(u32*)(work + 0xc);
    if (FUN_00405e30(resource) != 0)
    {
        return (u8*)&LAB_003c5170;
    }

    switch (*(u32*)(work + 8))
    {
    case 0:
        break;
    case 1:
        FUN_003c6ec0(resource);
        *(u32*)(work + 8) = 2;
        /* fallthrough */
    case 2:
        object = (u8*)FUN_003c6c50(resource);
        if (object != NULL)
        {
            itemFlags = *(u32**)(*(u8**)(object + 0x14) + 0x1c);
            *(u32*)(work + 0x10) = (u32)object;
            if ((*itemFlags & 2) == 0)
            {
                func_0010a4e0(0, 0, 0, 1);
                *(u32*)(work + 8) = 3;
                FUN_003c6ea0(resource);
            }
            break;
        }
        if (FUN_003c6c80(resource) != 0)
        {
            *(u32*)(work + 8) = 0;
            func_0010a4e0(0, 0, 0, 2);
            FUN_003c6f50(resource);
            *(u32*)(work + 4) |= 1;
        }
        break;

    case 3:
        *(u32*)(work + 8) = 4;
        amount = FUN_004038e0(
            *(s16*)(*(u8**)(*(u8**)(*(u8**)(work + 0x10) + 0x14) + 0x1c) + 4));
        sprintf(text, (const char*)&gp0xffffaad8, amount / 2);
        FUN_003c7bc0(0, text);
        FUN_003c7430(6);
        FUN_003c74e0(0);
        FUN_003c7560(0);
        FUN_003e0c20(FUN_003c5460(DAT_007ce688), 2, 0);
        /* fallthrough */
    case 4:
        if (FUN_003c7850() == 0)
        {
            FUN_003c7700();
            if (FUN_003c7610() == 0)
            {
                *(u32*)(work + 8) = 5;
            }
            else
            {
                *(u32*)(work + 8) = 1;
                FUN_003e0c20(FUN_003c5460(DAT_007ce688), 2, 2);
            }
        }
        break;

    case 5:
        *(u32*)(work + 8) = 6;
        FUN_003c7430(7);
        /* fallthrough */
    case 6:
        if (FUN_003c7850() == 0)
        {
            FUN_003c7700();
            item = *(u8**)(*(u8**)(*(u8**)(work + 0x10) + 0x14) + 0x1c);
            amount = -FUN_004038e0(*(s16*)(item + 4));
            datAddMoney(amount / 2);
            FUN_00403340(*(s16*)(item + 4));
            FUN_003c5fa0(resource, *(u32*)(work + 0x10));
            *(u32*)(work + 0x10) = 0;
            *(u32*)(work + 8) = 9;
            FUN_003e0c20(FUN_003c5460(DAT_007ce688), 2, 1);
        }
        break;

    case 9:
        if (FUN_0017c700() == 0)
        {
            *(u32*)(work + 8) = 0;
            FUN_003c6f50(resource);
        }
        else
        {
            *(u32*)(work + 8) = 1;
        }
        break;

    case 7:
        *(u32*)(work + 8) = 8;
        FUN_003c7430(FUN_0040c170());
        FUN_0017d040();
        /* fallthrough */
    case 8:
        if (FUN_003c7850() == 0)
        {
            FUN_003c7700();
            *(u32*)(work + 8) = 9;
        }
        break;
    }

    return NULL;
}

// FUN_003ECCE0


u64 FUN_003ecce0(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  if ((*(u32 *)(iVar1 + 4) & 2) != 0) {

    return 0;

  }

  FUN_003c6380(*(u32 *)(iVar1 + 0xc));

  return 0;

}

// FUN_003ECD30
u32 FUN_003ecd30(u8* owner)
{
    u32 descriptors[9];
    ShopU128* source;
    ShopU128* destination;
    ShopU128 value;
    s32 count;
    u32 resource;
    u32 context;

    source = (ShopU128*)PTR_FUN_006a71a0;
    destination = (ShopU128*)descriptors;
    count = 2;
    do
    {
        value = *source;
        source++;
        count--;
        *destination = value;
        destination++;
    } while (count > 0);
    *(f32*)destination = *(f32*)source;
    resource = FUN_003c5240(DAT_007ce688, 10, descriptors, 0, 2);
    if (owner != NULL)
    {
        *(u32*)(owner + 0x34) = resource;
    }
    FUN_003c5470(resource);
    context = FUN_003c5460(DAT_007ce688);
    FUN_003e0c20(context, 0xc, 0);
    return resource;
}

// FUN_003ECDF0
u32 FUN_003ecdf0(int owner)
{
    u8* resource;
    u8* child;
    u32* state;
    u32 context;
    u32 result;

    resource = *(u8**)(owner + 0x34);
    if (resource == NULL || (child = *(u8**)(resource + 0x14)) == NULL)
    {
        result = -1;
    }
    else
    {
        state = (u32*)FUN_003c5470(resource);
        if ((*(u32*)(child + 0x14) & 8) != 0 || (state[1] & 1) != 0)
        {
            context = FUN_003c5460(DAT_007ce688);
            FUN_003e0c20(context, 0xc, 1);
            *(u32*)(owner + 0x34) = 0;
            result = *state;
        }
        else
        {
            result = -1;
        }
    }
    return result;
}

// FUN_003ECEB0
u64 FUN_003eceb0(u64 unused, u64 handle)
{
    u32* state;
    u8* work;
    u8* effect;
    u32 resource;
    u32 task;

    state = (u32*)FUN_003c5460();
    resource = *state;
    work = (u8*)FUN_003c5470(handle);
    *(u32*)(work + 0x10) = FUN_00409f50(resource, 0);
    effect = *(u8**)(*(u8**)(*(u8**)(work + 0x10) + 0x24) + 0x44);
    *(u32*)(effect + 8) = state[0x21];
    task = FUN_003cda60(state[0x20], 0);
    *(u32*)(effect + 0xc) = task;
    FUN_003cdee0(task, 1);
    FUN_003c9f10(*(u32*)(effect + 8), 5);
    FUN_003c9f60(*(u32*)(effect + 8), 5);
    *(u32*)(work + 8) = 1;
    return 0;
}

// FUN_003ECF80


u64 FUN_003ecf80(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  kwlnTaskDestroyWithHierarchy(*(u32 *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x24) + 0x44) + 0xc));

  FUN_0040a200(*(u32 *)(iVar1 + 0x10));

  return 0;

}

// FUN_003ECFE0


u8 * FUN_003ecfe0(u64 unused, u64 handle)
{
    u8* work;
    u32 resource;
    u8* selection;
    u32 context;

    FUN_003c5460();
    work = (u8*)FUN_003c5470(handle);
    if ((*(u32*)(work + 4) & 2) != 0)
    {
        return NULL;
    }

    resource = *(u32*)(work + 0x10);
    if (FUN_0040a2b0(resource) != 0)
    {
        return (u8*)&LAB_003c5170;
    }

    switch (*(u32*)(work + 8))
    {
    case 0:
        break;
    case 1:
        FUN_003c6ec0(resource);
        *(u32*)(work + 8) = 2;
        /* fallthrough */
    case 2:
        selection = (u8*)FUN_003c6c50(resource);
        if (selection != NULL)
        {
            func_0010a4e0(0, 0, 0, 1);
            *(u32*)(work + 0x14) = (u32)selection;
            *(u32*)(work + 8) = 3;
            FUN_003c6f10(resource);
            context = FUN_003c5460(DAT_007ce688);
            FUN_003e0c20(context, 0xc, 1);
            break;
        }
        if (FUN_003c6c80(resource) != 0)
        {
            *(u32*)(work + 8) = 0;
            func_0010a4e0(0, 0, 0, 2);
            FUN_003c6f50(resource);
            *(u32*)(work + 4) |= 1;
            break;
        }
        if ((DAT_007e094e[0] & 4) != 0 || (DAT_007e0958[0] & 4) != 0)
        {
            if (*(u32*)(work + 0xc) == 1)
            {
                func_0010a4e0(0, 0, 0, 5);
                FUN_0040a6d0(resource, 1);
            }
            *(u32*)(work + 0xc) = 0;
            break;
        }
        if ((DAT_007e094e[0] & 8) != 0 || (DAT_007e0958[0] & 8) != 0)
        {
            if (*(u32*)(work + 0xc) == 0)
            {
                func_0010a4e0(0, 0, 0, 5);
                FUN_0040a6d0(resource, 0);
            }
            *(u32*)(work + 0xc) = 1;
        }
        break;

    case 3:
        *(u32*)(work + 8) = 4;
        FUN_0040b840(resource);
        context = FUN_003c5460(DAT_007ce688);
        FUN_003e0c20(context, 2, 2);
        /* fallthrough */
    case 4:
        if (FUN_0040b910(resource) != 0)
        {
            *(u32*)(work + 8) = 1;
            FUN_003c6ee0(resource);
            context = FUN_003c5460(DAT_007ce688);
            FUN_003e0c20(context, 2, 0);
            context = FUN_003c5460(DAT_007ce688);
            FUN_003e0c20(context, 0xc, 0);
            context = FUN_003c5460(DAT_007ce688);
            FUN_003e0c20(context, 0xd, 1);
        }
        break;
    }

    return NULL;
}

// FUN_003ED310


u64 FUN_003ed310(u64 param_1,u64 param_2)



{

  u32 uVar1;

  int iVar2;

  

  iVar2 = FUN_003c5470(param_2);

  if ((*(u32 *)(iVar2 + 4) & 2) != 0) {

    return 0;

  }

  uVar1 = *(u32 *)(iVar2 + 0x10);

  FUN_003c6380(uVar1);

  FUN_0040c150(uVar1);

  return 0;

}

// FUN_003ED380
u32 FUN_003ed380(u8* owner)
{
    u32 descriptors[9];
    ShopU128* source;
    ShopU128* destination;
    ShopU128 value;
    s32 count;
    u32 resource;

    source = (ShopU128*)PTR_FUN_006a71d0;
    destination = (ShopU128*)descriptors;
    count = 2;
    do
    {
        value = *source;
        source++;
        count--;
        *destination = value;
        destination++;
    } while (count > 0);
    *(f32*)destination = *(f32*)source;
    resource = FUN_003c5240(DAT_007ce688, 0xb, descriptors, 0, 2);
    if (owner != NULL)
    {
        *(u32*)(owner + 0x38) = resource;
    }
    FUN_003c5470(resource);
    return resource;
}

// FUN_003ED420
u32 FUN_003ed420(int owner)
{
    u8* resource;
    u8* child;
    u32* state;
    u32 context;
    u32 result;

    resource = *(u8**)(owner + 0x38);
    if (resource == NULL || (child = *(u8**)(resource + 0x14)) == NULL)
    {
        result = -1;
    }
    else
    {
        state = (u32*)FUN_003c5470(resource);
        if ((*(u32*)(child + 0x14) & 8) != 0 || (state[1] & 1) != 0)
        {
            context = FUN_003c5460(DAT_007ce688);
            FUN_003e0c20(context, 0xf, 1);
            *(u32*)(owner + 0x38) = 0;
            result = *state;
        }
        else
        {
            result = -1;
        }
    }
    return result;
}

// FUN_003ED4E0


u64 FUN_003ed4e0(u64 param_1,u64 param_2)



{

  u32 uVar1;

  u32 *puVar2;

  int iVar3;

  int iVar4;

  

  puVar2 = (u32 *)FUN_003c5460();

  uVar1 = *puVar2;

  iVar3 = FUN_003c5470(param_2);

  iVar4 = FUN_00409f50(uVar1,1);

  *(int *)(iVar3 + 0xc) = iVar4;

  iVar4 = *(int *)(*(int *)(iVar4 + 0x24) + 0x44);

  uVar1 = puVar2[0x21];

  *(u32 *)(iVar4 + 8) = uVar1;

  FUN_003c9e00(uVar1,4);

  FUN_003c9e30(*(u32 *)(iVar4 + 8),2,0);

  FUN_003c9fb0(*(u32 *)(iVar4 + 8),8,8);

  *(u32 *)(iVar3 + 8) = 1;

  return 0;

}

// FUN_003ED5A0


u64 FUN_003ed5a0(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  FUN_0040a200(*(u32 *)(iVar1 + 0xc));

  return 0;

}

// FUN_003ED5E0


u8 * FUN_003ed5e0(u32 param_1,u32 param_2)



{

  int iVar1;

  int iVar2;

  char cVar3;

  int iVar4;
  u8 *work;


  s32 lVar5;

  u32 uVar6;

  u32 uVar7;











  

  FUN_003c5460(param_1);

  work = (u8*)FUN_003c5470(param_2);

  if ((*(u32 *)(work + 4) & 2) != 0) {

    return (u8 *)0x0;

  }

  iVar1 = *(int *)(work + 0xc);

  iVar2 = *(int *)(*(int *)(iVar1 + 0x24) + 0x44);

  lVar5 = FUN_0040a490(iVar1);


  if (lVar5 != 0) {
    return (u8 *)&LAB_003c5170;
  }
  switch(*(u32 *)(work + 8)) {
    case 0:

      FUN_003c9d00(*(u32 *)(iVar2 + 8),0x10);

      break;

    case 1:

      uVar7 = FUN_003c5460(DAT_007ce688);

      FUN_003e0c20(uVar7,0xf,0);

      FUN_003c6ec0(iVar1);

      *(u32 *)(work + 8) = 2;

      FUN_003c9d00(*(u32 *)(iVar2 + 8),0x10);

      FUN_003c7430(0x17);

      FUN_003c7390(0x4000000);

      FUN_003c7390(0x100000);

    case 2:

      lVar5 = FUN_003c6c50(iVar1);

      if (lVar5 != 0) {

        uVar7 = FUN_003c5460(DAT_007ce688);

        FUN_003e0c20(uVar7,0xf,1);

        uVar7 = FUN_003c5460(DAT_007ce688);

        FUN_003e0c20(uVar7,0x10,0);

        func_0010a4e0(0,0,0,1);

        FUN_003c9e70(*(u32 *)(iVar2 + 8),0);

        *(int *)(work + 0x10) = (int)lVar5;

        *(u32 *)(work + 8) = 3;

        FUN_003c6f10(iVar1);

        FUN_003c73e0(0x4000000);

        FUN_003c73e0(0x100000);

        FUN_003c7700();

      }

      else {

        lVar5 = FUN_003c6c80(iVar1);

        if (lVar5 != 0) {

          *(u32 *)(work + 8) = 0;

          func_0010a4e0(0,0,0,2);

          FUN_003c6f50(iVar1);

          *(u32 *)(work + 4) = *(u32 *)(work + 4) | 1;

          FUN_003c73e0(0x4000000);

          FUN_003c73e0(0x100000);

          FUN_003c7700();

        }

        else {

          if (((DAT_007e094e[0] & 0x80) != 0) || ((DAT_007e0958[0] & 0x80) != 0)) {

            func_0010a4e0(0,0,0,1);

            FUN_003c6ea0(iVar1);

            *(u32 *)(work + 8) = 0xb;

          }

        }

      }

      break;

    case 3:

      uVar6 = FUN_003c6d80(iVar1);

      if ((uVar6 & 5) != 0) {
        goto done;
      }


      *(u32 *)(work + 8) = 4;

      fclMisc003c9b00(*(u32 *)(iVar2 + 8),

                   *(u32 *)(*(int *)(*(int *)(*(int *)(iVar1 + 0xc) + 0x14) + 0x1c) + 4),0);

      FUN_003c9d00(*(u32 *)(iVar2 + 8),8);

      FUN_003c7700();

    case 4:

      if (((DAT_007e094e[0] & 0x40) != 0) || ((DAT_007e0958[0] & 0x40) != 0)) {

        func_0010a4e0(0,0,0,1);

        *(u32 *)(work + 8) = 5;

      }

      else {

        if (((DAT_007e094e[0] & 0x20) != 0) || ((DAT_007e0958[0] & 0x20) != 0)) {

          func_0010a4e0(0,0,0,2);

          *(u32 *)(work + 8) = 1;

          FUN_003c6ee0(iVar1);

          uVar7 = FUN_003c5460(DAT_007ce688);

          FUN_003e0c20(uVar7,0x10,1);

        }

        else {

          if (((DAT_007e094e[0] & 4) != 0) || ((DAT_007e0958[0] & 4) != 0)) {

            cVar3 = FUN_003c9ee0(*(u32 *)(iVar2 + 8));

            if (cVar3 == '\0') {

              iVar4 = *(int *)(*(int *)(*(int *)(iVar1 + 0xc) + 0x14) + 0x1c);
              uVar7 = datGetPersonaByCompendium(*(u16 *)(*(int *)(iVar4 + 4) + 2));
              lVar5 = fclMisc003c9c10(*(u32 *)(iVar2 + 8),*(u32 *)(iVar4 + 4),uVar7);

              if (lVar5 != 0) {

                func_0010a4e0(0,0,0,5);

                *(u32 *)(iVar2 + 0x18) = 1;

                FUN_003c9e70(*(u32 *)(iVar2 + 8),1);

              }

            }

          }

          else {

            if ((((DAT_007e094e[0] & 8) != 0) || ((DAT_007e0958[0] & 8) != 0)) &&

               (cVar3 = FUN_003c9ee0(*(u32 *)(iVar2 + 8)), cVar3 == '\x01')) {

              iVar4 = *(int *)(*(int *)(*(int *)(iVar1 + 0xc) + 0x14) + 0x1c);
              uVar7 = datGetPersonaByCompendium(*(u16 *)(*(int *)(iVar4 + 4) + 2));
              lVar5 = fclMisc003c9c10(*(u32 *)(iVar2 + 8),*(u32 *)(iVar4 + 4),uVar7);

              if (lVar5 != 0) {

                func_0010a4e0(0,0,0,5);

                *(u32 *)(iVar2 + 0x18) = 0;

                FUN_003c9e70(*(u32 *)(iVar2 + 8),0);

              }

            }

          }

        }

      }

      break;

    case 5:

      *(u32 *)(work + 8) = 6;

      FUN_003c7430(0x18);

      FUN_003c74e0(0);

      FUN_003c7560(1);

    case 6:

      lVar5 = FUN_003c7850();

      if (lVar5 == 0) {

        FUN_003c7700();

        lVar5 = FUN_003c7610();

        if (lVar5 == 0) {

          FUN_0017c960(*(u32 *)(*(int *)(*(int *)(*(int *)(work + 0x10) + 0x14) + 0x1c) + 4)

                      );

          FUN_003c5fa0(iVar1,*(u32 *)(work + 0x10));

          *(u32 *)(work + 0x10) = 0;

          *(u32 *)(work + 8) = 7;

        }

        else {

          FUN_003c6ee0(iVar1);

          *(u32 *)(work + 8) = 1;

          uVar7 = FUN_003c5460(DAT_007ce688);

          FUN_003e0c20(uVar7,0x10,1);

        }

      }

      break;

    case 7:

      *(u32 *)(work + 8) = 8;

      FUN_003c7430(0x19);

    case 8:

      lVar5 = FUN_003c7850();

      if (lVar5 == 0) {

        FUN_003c7700();

        if (*(u16 *)(iVar1 + 0x10) != 0) {

          FUN_003c6ee0(iVar1);

          *(u32 *)(work + 8) = 1;

        }

        else {

          *(u32 *)(work + 8) = 9;

          FUN_003c9d00(*(u32 *)(iVar2 + 8),0x10);

        }

        uVar7 = FUN_003c5460(DAT_007ce688);

        FUN_003e0c20(uVar7,0x10,1);

      }

      break;

    case 9:

      *(u32 *)(work + 8) = 10;

      FUN_003c7430(0x1d);

    case 10:

      lVar5 = FUN_003c7850();

      if (lVar5 == 0) {

        FUN_003c7700();

        FUN_003c6f50(iVar1);

        *(u32 *)(work + 8) = 0;

      }

      break;

    case 0xb:

      *(u32 *)(work + 8) = 0xc;

      FUN_003c7430(0x1a);

      FUN_003c74e0(0);

      FUN_003c7560(1);

      FUN_003c73e0(0x4000000);

    case 0xc:

      lVar5 = FUN_003c7850();

      if (lVar5 == 0) {

        FUN_003c7700();

        lVar5 = FUN_003c7610();

        if (lVar5 == 0) {

          *(u32 *)(work + 8) = 0xd;

          FUN_0040a260(iVar1);

        }

        else {

          *(u32 *)(work + 8) = 1;

        }

      }

      break;

    case 0xd:

      *(u32 *)(work + 8) = 0xe;

      FUN_003c7430(0x1b);

    case 0xe:

      lVar5 = FUN_003c7850();

      if (lVar5 == 0) {

        FUN_003c7700();

        *(u32 *)(work + 8) = 0;

        FUN_003c6f50(iVar1);

  }
  }
done:
  return (u8 *)0x0;
}
// FUN_003EDD80


u64 FUN_003edd80(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  if ((*(u32 *)(iVar1 + 4) & 2) != 0) {

    return 0;

  }

  FUN_003c6380(*(u32 *)(iVar1 + 0xc));

  return 0;

}

// FUN_003EDDD0
u32 FUN_003eddd0(u8* owner)
{
    u32 descriptors[9];
    ShopU128* source;
    ShopU128* destination;
    ShopU128 value;
    s32 count;
    u32 resource;
    u32 context;

    source = (ShopU128*)PTR_FUN_006a7200;
    destination = (ShopU128*)descriptors;
    count = 2;
    do
    {
        value = *source;
        source++;
        count--;
        *destination = value;
        destination++;
    } while (count > 0);
    *(f32*)destination = *(f32*)source;
    resource = FUN_003c5240(DAT_007ce688, 0xc, descriptors, 0, 2);
    if (owner != NULL)
    {
        *(u32*)(owner + 0x3c) = resource;
    }
    context = FUN_003c5460(DAT_007ce688);
    FUN_003e0c20(context, 5, 0);
    return resource;
}

// FUN_003EDE80
u32 FUN_003ede80(int owner)
{
    u8* resource;
    u8* child;
    u32* state;
    u32 context;
    u32 result;

    resource = *(u8**)(owner + 0x3c);
    if (resource == NULL || (child = *(u8**)(resource + 0x14)) == NULL)
    {
        result = -1;
    }
    else if ((*(u32*)(child + 0x14) & 8) != 0)
    {
        context = FUN_003c5460(DAT_007ce688);
        FUN_003e0c20(context, 5, 1);
        state = (u32*)FUN_003c5470(resource);
        *(u32*)(owner + 0x3c) = 0;
        result = *state;
    }
    else
    {
        result = -1;
    }
    return result;
}

// FUN_003EDF20


u64 FUN_003edf20(u64 param_1,u64 param_2)



{

  int iVar1;

  u32 uVar2;

  

  FUN_003c5460();

  iVar1 = FUN_003c5470(param_2);

  uVar2 = FUN_0040c6f0(1);

  *(u32 *)(iVar1 + 8) = uVar2;

  *(u32 *)(iVar1 + 4) = 2;

  return 0;

}

// FUN_003EDF80


u64 FUN_003edf80(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  FUN_0040c9a0(*(u32 *)(iVar1 + 8));

  return 0;

}

// FUN_003EDFC0


u8* FUN_003edfc0(u64 unused, u64 handle)
{
    u8* work;
    u8* resource;
    u8* shop;
    u8* event;
    u32 context;
    u32 result;

    work = (u8*)FUN_003c5470(handle);
    resource = *(u8**)(work + 8);
    shop = *(u8**)(resource + 0xc);
    result = FUN_0040ca00(resource);
    if (result == 3)
    {
        return (u8*)&LAB_003c5170;
    }
    if (FUN_003c6ce0(shop) != 0 || FUN_003c6d10(shop) != 0)
    {
        func_0010a4e0(0, 0, 0, 0);
    }
    if (FUN_003c6ca0(shop) != 0 || FUN_003c6cc0(shop) != 0)
    {
        func_0010a4e0(0, 0, 0, 5);
    }

    switch (*(u32*)(work + 4))
    {
    case 1:
        *(u32*)(work + 4) = 0;
        context = FUN_003c5460(DAT_007ce688);
        FUN_003e0c20(context, 1, 1);
        break;
    case 2:
        *(u32*)(work + 4) = 3;
    case 3:
        if (FUN_003dff30(*(u32*)(*(u8**)(work + 8) + 8)) != 0)
        {
            context = FUN_003c5460(DAT_007ce688);
            FUN_003e0c20(context, 1, 0);
            *(u32*)(work + 4) = 4;
            FUN_003c6ec0(shop);
        }
        else
        {
            break;
        }
    case 4:
        event = (u8*)FUN_003c6c50(shop);
        if (event != NULL)
        {
            func_0010a4e0(0, 0, 0, 1);
            FUN_003c6ea0(shop);
            *(u32*)(work + 4) = 5;
            context = FUN_003c5460(DAT_007ce688);
            FUN_003e0c20(context, 1, 1);
            context = FUN_003c5460(DAT_007ce688);
            FUN_003e0c20(context, 5, 1);
            FUN_0040c650(*(u32*)(work + 8));
        }
        else if (FUN_003c6c80(shop) != 0)
        {
            func_0010a4e0(0, 0, 0, 2);
            FUN_003c6f50(shop);
            *(u32*)(work + 4) = 1;
            FUN_0040c5b0(*(u32*)(work + 8));
        }
        break;
    case 5:
        if (FUN_003dff30(*(u32*)(*(u8**)(work + 8) + 8)) == 0)
        {
            break;
        }
        *(u32*)(work + 4) = 6;
        FUN_003c7430(
            *(u32*)(*(u8**)(*(u8**)(*(u8**)(*(u8**)(shop + 0xc) + 0x14) + 0x1c) + 4) + 0xc));
    case 6:
        if (FUN_003c7850() == 0)
        {
            FUN_003c7700();
            *(u32*)(work + 4) = 3;
            context = FUN_003c5460(DAT_007ce688);
            FUN_003e0c20(context, 5, 0);
            FUN_0040c6a0(*(u32*)(work + 8));
        }
        break;
    }
    return NULL;
}

// FUN_003EE2D0


u64 FUN_003ee2d0(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  FUN_0040cad0(*(u32 *)(iVar1 + 8));

  return 0;

}

// FUN_003EE310
u32 FUN_003ee310(u8* owner)
{
    u32 descriptors[9];
    ShopU128* source;
    ShopU128* destination;
    ShopU128 value;
    s32 count;
    u32 resource;
    u32 context;

    source = (ShopU128*)PTR_FUN_006a7230;
    destination = (ShopU128*)descriptors;
    count = 2;
    do
    {
        value = *source;
        source++;
        count--;
        *destination = value;
        destination++;
    } while (count > 0);
    *(f32*)destination = *(f32*)source;
    resource = FUN_003c5240(DAT_007ce688, 4, descriptors, 0, 2);
    if (owner != NULL)
    {
        *(u32*)(owner + 0x1c) = resource;
    }
    if (*(s32*)owner == 4)
    {
        context = FUN_003c5460(DAT_007ce688);
        FUN_003e0c20(context, 0x11, 1);
    }
    return resource;
}

// FUN_003EE3D0
u32 FUN_003ee3d0(int* owner)
{
    u8* resource;
    u8* child;
    u32* state;
    u32 context;
    u32 result;

    resource = (u8*)owner[7];
    if (resource == NULL || (child = *(u8**)(resource + 0x14)) == NULL)
    {
        result = -1;
    }
    else if ((*(u32*)(child + 0x14) & 8) != 0)
    {
        state = (u32*)FUN_003c5470(resource);
        owner[7] = 0;
        if (*owner == 4)
        {
            context = FUN_003c5460(DAT_007ce688);
            FUN_003e0c20(context, 0x11, 0);
        }
        result = *state;
    }
    else
    {
        result = -1;
    }
    return result;
}

// FUN_003EE480


u64 FUN_003ee480(u64 param_1,u64 param_2)



{

  u32 *puVar1;

  u32 uVar2;

  

  puVar1 = (u32 *)FUN_003c5460();

  FUN_003c5470(param_2);

  uVar2 = FUN_003f0ac0(*puVar1);

  FUN_003c7430(uVar2);

  return 0;

}

// FUN_003EE4E0


u64 FUN_003ee4e0(u64 param_1,u64 param_2)



{

  FUN_003c5470(param_2);

  return 0;

}

// FUN_003EE510
u8* FUN_003ee510(void)
{
    if (FUN_003c7850() == 0)
    {
        FUN_003c7700();
        return (u8*)&LAB_003c5170;
    }
    return NULL;
}

// FUN_003EE560
u64 FUN_003ee560(void)
{
    return 0;
}

// FUN_003EE570
void FUN_003ee570(u8* owner)
{
    u32 descriptors[9];
    ShopU128* source;
    ShopU128* destination;
    ShopU128 value;
    s32 count;
    u32 resource;

    source = (ShopU128*)PTR_FUN_006a7260;
    destination = (ShopU128*)descriptors;
    count = 2;
    do
    {
        value = *source;
        source++;
        count--;
        *destination = value;
        destination++;
    } while (count > 0);
    *(f32*)destination = *(f32*)source;
    resource = FUN_003c5240(DAT_007ce688, 0xe, descriptors, 0, 2);
    if (owner != NULL)
    {
        *(u32*)(owner + 0x44) = resource;
    }
}

// FUN_003EE5F0


u64 FUN_003ee5f0(u64 param_1,u64 param_2)



{

  int iVar1;

  u32 uVar2;

  

  FUN_003c5460();

  iVar1 = FUN_003c5470(param_2);

  uVar2 = datGetMoney();

  *(u32 *)(iVar1 + 0xc) = uVar2;

  *(u32 *)(iVar1 + 8) = uVar2;

  return 0;

}

// FUN_003EE640


u64 FUN_003ee640(u64 param_1,u64 param_2)



{

  FUN_003c5470(param_2);

  return 0;

}

// FUN_003EE670


u64 FUN_003ee670(u64 unused, u64 handle)
{
    typedef struct ShopMoneyWork
    {
        u32 command;
        u32 flags;
        s32 displayedMoney;
        s32 targetMoney;
        s32 moneyTimer;
        u32 unknown14;
        s16 alpha0;
        s16 alpha1;
        s16 alphaTimer0;
        s16 alphaTimer1;
    } ShopMoneyWork;
    ShopMoneyWork* work;
    s32 money;
    s32 timer;

    money = datGetMoney();
    work = (ShopMoneyWork*)FUN_003c5470(handle);
    if (money != work->targetMoney)
    {
        if (work->moneyTimer == 0)
        {
            func_0010a4e0(0, 0, 0, 6);
            work->moneyTimer = 5;
        }
        timer = work->moneyTimer - 1;
        work->moneyTimer = timer;
        work->displayedMoney =
            (s32)((f32)money + (f32)(timer * (work->targetMoney - money)) / 5.0f);
        if (work->moneyTimer == 0)
        {
            work->displayedMoney = money;
            work->targetMoney = money;
        }
    }
    else
    {
        work->displayedMoney = money;
    }

    if ((work->flags & 1) != 0)
    {
        work->alphaTimer0++;
        work->alpha0 = (work->alphaTimer0 * 0xff) / 10;
        if (work->alphaTimer0 >= 10)
        {
            work->flags &= ~1;
            work->alpha0 = 0xff;
            work->alphaTimer0 = 0;
        }
    }
    else if ((work->flags & 2) != 0)
    {
        work->alphaTimer0++;
        work->alpha0 = 0xff - (work->alphaTimer0 * 0xff) / 10;
        if (work->alphaTimer0 >= 10)
        {
            work->flags &= ~2;
            work->alpha0 = 0;
            work->alphaTimer0 = 0;
        }
    }

    if ((work->flags & 4) != 0)
    {
        work->alphaTimer1++;
        work->alpha1 = (work->alphaTimer1 * 0xff) / 10;
        if (work->alphaTimer1 >= 10)
        {
            work->flags &= ~4;
            work->alpha1 = 0xff;
            work->alphaTimer1 = 0;
        }
    }
    else if ((work->flags & 8) != 0)
    {
        work->alphaTimer1++;
        work->alpha1 = 0xff - (work->alphaTimer1 * 0xff) / 10;
        if (work->alphaTimer1 >= 10)
        {
            work->flags &= ~8;
            work->alpha1 = 0;
            work->alphaTimer1 = 0;
        }
    }
    return 0;
}

// FUN_003EE920


u64 FUN_003ee920(u64 unused, u64 handle)
{
    extern float cosf(float);
    extern float sinf(float);
    extern void FUN_0040e3c0(float, s32, s32, u8, u32, s32);
    extern s32 FUN_0040eb50(float, s32, s32, u8, s16, const void*, s32);
    u32* state;
    u8* work;
    u32 value;
    u32 first;
    u32 second;
    u32* source;
    u32* destination;
    s32 count;
    float cosine;
    float zero;
    s32 x;
    s32 textX;
    char text[32];
    u32 descriptors[20];

    state = (u32*)FUN_003c5460();
    source = DAT_006a7290;
    destination = descriptors;
    count = 9;
    do
    {
        first = source[0];
        second = source[1];
        source += 2;
        count--;
        destination[0] = first;
        destination[1] = second;
        destination += 2;
    } while (count > 0);

    if (*state == 8)
    {
        return 0;
    }

    work = (u8*)FUN_003c5470(handle);
    value = *(u32*)(work + 8);
    cosine = cosf((DAT_007cae00 * (float)*(s16*)(work + 0x18)) / 255.0f);
    x = (s32)(sinf((DAT_007cae00 * (float)*(s16*)(work + 0x1a)) / 255.0f) * 300.0f + cosine * 300.0f);
    zero = 0.0f;
    FUN_0040e3c0(zero, x, 0, 0xff, descriptors[*state * 2], 0);
    FUN_0040e3c0(0.0f, x, -3, 0xff, descriptors[*state * 2 + 1], 0);
    sprintf(text, (const char*)&gp0xffffaad8, value);
    textX = x + 0x26d;
    FUN_0040eb50(0.0f, textX, 0x27, 0xff, 0, text, 9);

    cosine = cosf((DAT_007cae00 * (float)*(s16*)(work + 0x1a)) / 255.0f);
    x = (s32)(cosine * 300.0f);
    FUN_0040e3c0(0.0f, x, -0xc, 0xff, descriptors[*state * 2], 0);
    FUN_0040e3c0(0.0f, x, 10, 0xff, descriptors[*state * 2], 0);
    FUN_0040e3c0(0.0f, x, -3, 0xff, descriptors[*state * 2 + 1], 0);
    sprintf(text, (const char*)&gp0xffffaad8, value);
    textX = x + 0x26d;
    FUN_0040eb50(0.0f, textX, 0x1c, 0xff, 0, text, 9);
    sprintf(text, (const char*)&gp0xffffaad8, *(u32*)(work + 0x14));
    textX = x + 0x26d;
    FUN_0040eb50_i(textX, 0x31, 0.0f, 0xff, 0, text, 9);

    return 0;
}

// FUN_003EEC60


void FUN_003eec60(int param_1)



{

  int iVar1;

  

  iVar1 = FUN_003c5460(DAT_007ce688);

  iVar1 = FUN_003c5470(*(u32 *)(iVar1 + 0x44));

  if (param_1 == 0) {

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 1;

  }

  else if (param_1 == 1) {

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 2;

  }

  else if (param_1 == 2) {

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 4;

  }

  else if (param_1 == 3) {

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 8;

  }

  return;

}

// FUN_003EED10


void FUN_003eed10(u32 param_1)



{

  int iVar1;

  

  iVar1 = FUN_003c5460(DAT_007ce688);

  iVar1 = FUN_003c5470(*(u32 *)(iVar1 + 0x44));

  *(u32 *)(iVar1 + 0x14) = param_1;

  return;

}

// FUN_003EED50


u32 FUN_003eed50(void)



{

  int iVar1;

  

  iVar1 = FUN_003c5460(DAT_007ce688);

  iVar1 = FUN_003c5470(*(u32 *)(iVar1 + 0x44));

  return *(u32 *)(iVar1 + 8);

}

// FUN_003EED90
void FUN_003eed90(u8* owner)
{
    u32 descriptors[9];
    ShopU128* source;
    ShopU128* destination;
    ShopU128 value;
    s32 count;
    u32 resource;

    source = (ShopU128*)PTR_FUN_006a72e0;
    destination = (ShopU128*)descriptors;
    count = 2;
    do
    {
        value = *source;
        source++;
        count--;
        *destination = value;
        destination++;
    } while (count > 0);
    *(f32*)destination = *(f32*)source;
    resource = FUN_003c5240(DAT_007ce688, 0xf, descriptors, 0, 2);
    if (owner != NULL)
    {
        *(u32*)(owner + 0x48) = resource;
    }
}

// FUN_003EEE10


u64 FUN_003eee10(u64 param_1,u64 param_2)



{

  FUN_003c5460();

  FUN_003c5470(param_2);

  return 0;

}

// FUN_003EEE50


u64 FUN_003eee50(u64 param_1,u64 param_2)



{

  FUN_003c5470(param_2);

  return 0;

}

// FUN_003EEE80


#pragma push
/* Removing this loses FUN_003eee80 (MATCH nd0 -> MISMATCH nd364) - measured W161. */
#pragma opt_loop_invariants on
u64 FUN_003eee80(u64 unused, u64 handle)
{
    typedef struct ShopMaskPair
    {
        u32 active;
        u32 fading;
    } ShopMaskPair;
    typedef struct ShopEntry
    {
        s16 x;
        s16 y;
        s16 id;
    } ShopEntry;
    typedef struct ShopEntryGroup
    {
        ShopEntry* entries;
        u32 count;
    } ShopEntryGroup;
    typedef struct ShopAnimSlot
    {
        s16 x;
        s16 y;
        s8 id;
        u8 alpha;
        s16 timer;
    } ShopAnimSlot;
    typedef struct ShopAnimWork
    {
        u32 unused00;
        u32 flags;
        ShopAnimSlot slots[1];
    } ShopAnimWork;

    s16 group6Storage[8];
    ShopMaskPair masks[9];
    s32 durations[12];
    ShopEntry group0Storage[5];
    ShopEntry group1Storage[5];
    ShopEntry group2Storage[5];
    ShopEntry group3Storage[3];
    ShopEntry group4Storage[8];
    ShopEntry group8Storage[5];
    ShopEntryGroup groups[9];
    u32* source32;
    u32* dest32;
    s16* source16;
    s16* dest16;
    s32 count;
    s32 mode;
    u32 i;
    ShopAnimWork* work;
    ShopEntry* entry;
    ShopEntry* entries;
    u8* slotBase;
    ShopEntryGroup* group;
    s16* entryId;
    s32 divisor;
    s32 fullAlpha;
    ShopAnimSlot* slot;
    s16 id;
    u32 first32;
    u32 second32;
    s16 first16;
    s16 second16;
    s16* singleSource;
    s16* singleDest;
    s32 singleCount;
    s16 singleValue;

    mode = *(s32*)FUN_003c5460();

    source32 = (u32*)DAT_006a7310;
    dest32 = (u32*)masks;
    count = 9;
    do
    {
        first32 = source32[0];
        second32 = source32[1];
        source32 += 2;
        count--;
        dest32[0] = first32;
        dest32[1] = second32;
        dest32 += 2;
    } while (count > 0);

    source32 = (u32*)DAT_006a7360;
    dest32 = (u32*)durations;
    count = 5;
    do
    {
        first32 = source32[0];
        second32 = source32[1];
        source32 += 2;
        count--;
        dest32[0] = first32;
        dest32[1] = second32;
        dest32 += 2;
    } while (count > 0);

    singleSource = (s16*)DAT_006a7390;
    singleDest = (s16*)group0Storage;
    singleCount = 15;
    do
    {
        singleValue = *singleSource;
        singleSource++;
        singleCount--;
        *singleDest = singleValue;
        singleDest++;
    } while (singleCount > 0);

    singleSource = (s16*)DAT_006a73b0;
    singleDest = (s16*)group1Storage;
    singleCount = 15;
    do
    {
        singleValue = *singleSource;
        singleSource++;
        singleCount--;
        *singleDest = singleValue;
        singleDest++;
    } while (singleCount > 0);

    singleSource = (s16*)DAT_006a73d0;
    singleDest = (s16*)group2Storage;
    singleCount = 15;
    do
    {
        singleValue = *singleSource;
        singleSource++;
        singleCount--;
        *singleDest = singleValue;
        singleDest++;
    } while (singleCount > 0);

    singleSource = (s16*)DAT_006a73f0;
    singleDest = (s16*)group3Storage;
    singleCount = 9;
    do
    {
        singleValue = *singleSource;
        singleSource++;
        singleCount--;
        *singleDest = singleValue;
        singleDest++;
    } while (singleCount > 0);

    source16 = (s16*)DAT_006a7410;
    dest16 = (s16*)group4Storage;
    count = 9;
    do
    {
        first16 = source16[0];
        second16 = source16[1];
        source16 += 2;
        count--;
        dest16[0] = first16;
        dest16[1] = second16;
        dest16 += 2;
    } while (count > 0);

    source16 = (s16*)DAT_006a7438;
    dest16 = group6Storage;
    count = 3;
    do
    {
        first16 = source16[0];
        second16 = source16[1];
        source16 += 2;
        count--;
        dest16[0] = first16;
        dest16[1] = second16;
        dest16 += 2;
    } while (count > 0);

    singleSource = (s16*)DAT_006a7450;
    singleDest = (s16*)group8Storage;
    singleCount = 15;
    do
    {
        singleValue = *singleSource;
        singleSource++;
        singleCount--;
        *singleDest = singleValue;
        singleDest++;
    } while (singleCount > 0);

    source32 = (u32*)DAT_006a7470;
    dest32 = (u32*)groups;
    count = 9;
    do
    {
        first32 = source32[0];
        second32 = source32[1];
        source32 += 2;
        count--;
        dest32[0] = first32;
        dest32[1] = second32;
        dest32 += 2;
    } while (count > 0);

    groups[0].entries = group0Storage;
    groups[1].entries = group1Storage;
    groups[2].entries = group2Storage;
    groups[3].entries = group3Storage;
    groups[4].entries = group4Storage;
    groups[6].entries = (ShopEntry*)group6Storage;
    groups[8].entries = group8Storage;

    work = (ShopAnimWork*)FUN_003c5470(handle);
    group = &groups[mode];
    entries = group->entries;
    i = 0;
    divisor = 5;
    fullAlpha = 0xff;
    while (i < group->count)
    {
        entry = &entries[i];
        entryId = &entry->id;
        id = *entryId;
        if ((work->flags & masks[id].active) != 0)
        {
            slotBase = (u8*)work + i * 8;
            slot = (ShopAnimSlot*)(slotBase + 8);
            slot->id = (s8)id;
            slot->alpha = (u8)((slot->timer * fullAlpha) / divisor);
            slot->x = entry->x -
                ((slot->timer * entry->x) / divisor);
            slot->y = entry->y -
                ((slot->timer * entry->y) / divisor);
            slot->timer++;
            if (slot->timer >= durations[i])
            {
                work->flags &= ~masks[*entryId].active;
                slot->timer = 0;
                slot->alpha = 0xff;
                slot->x = 0;
                slot->y = 0;
            }
        }
        else if ((work->flags & masks[id].fading) != 0)
        {
            slotBase = (u8*)work + i * 8;
            slot = (ShopAnimSlot*)(slotBase + 8);
            slot->id = (s8)id;
            slot->alpha =
                (u8)(fullAlpha - ((slot->timer * fullAlpha) / divisor));
            slot->timer++;
            if (slot->timer >= divisor)
            {
                work->flags &= ~masks[*entryId].fading;
                slot->timer = 0;
                slot->alpha = 0;
                slot->x = 0;
                slot->y = 0;
            }
        }
        i++;
    }
    return 0;
}
#pragma pop

/* Measured: opt_loop_invariants on gives FUN_003ef2b0 nd989/obj1724; reset gives nd995/obj1728. */
#pragma opt_loop_invariants on
// FUN_003EF2B0
#pragma push
#pragma opt_lifetimes on


asm u64 FUN_003ef2b0(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdfe40
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
  .word 0x00a0802d
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x3c07006a
  .word 0x24e774c0
  .word 0x27a60190
  .word 0x24050005
  .word 0x84e40000
  .word 0x84e30002
  .word 0x24e70004
  .word 0x24a5ffff
  .word 0xa4c40000
  .word 0xa4c30002
  .word 0x24c60004
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x3c07006a
  .word 0x24e774e0
  .word 0x27a60170
  .word 0x24050005
  .word 0x84e40000
  .word 0x84e30002
  .word 0x24e70004
  .word 0x24a5ffff
  .word 0xa4c40000
  .word 0xa4c30002
  .word 0x24c60004
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x3c07006a
  .word 0x24e77500
  .word 0x27a60150
  .word 0x24050005
  .word 0x84e40000
  .word 0x84e30002
  .word 0x24e70004
  .word 0x24a5ffff
  .word 0xa4c40000
  .word 0xa4c30002
  .word 0x24c60004
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x3c07006a
  .word 0x24e77518
  .word 0x27a601b0
  .word 0x24050003
  .word 0x84e40000
  .word 0x84e30002
  .word 0x24e70004
  .word 0x24a5ffff
  .word 0xa4c40000
  .word 0xa4c30002
  .word 0x24c60004
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x3c07006a
  .word 0x24e77530
  .word 0x27a60130
  .word 0x24050006
  .word 0x84e40000
  .word 0x84e30002
  .word 0x24e70004
  .word 0x24a5ffff
  .word 0xa4c40000
  .word 0xa4c30002
  .word 0x24c60004
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x3c07006a
  .word 0x24e77550
  .word 0x27a60110
  .word 0x24050005
  .word 0x84e40000
  .word 0x84e30002
  .word 0x24e70004
  .word 0x24a5ffff
  .word 0xa4c40000
  .word 0xa4c30002
  .word 0x24c60004
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x3c07006a
  .word 0x24e77570
  .word 0x27a600f0
  .word 0x24050005
  .word 0x84e40000
  .word 0x84e30002
  .word 0x24e70004
  .word 0x24a5ffff
  .word 0xa4c40000
  .word 0xa4c30002
  .word 0x24c60004
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x3c07006a
  .word 0x24e77590
  .word 0x27a600a0
  .word 0x24050009
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x27a30190
  .word 0xafa300a0
  .word 0x27a30170
  .word 0xafa300a8
  .word 0x27a30150
  .word 0xafa300b0
  .word 0x27a301b0
  .word 0xafa300b8
  .word 0x27a30130
  .word 0xafa300c0
  .word 0x27a30110
  .word 0xafa300d0
  .word 0x27a300f0
  .word 0xafa300e0
  .word 0x8c420000
  .word 0x000210c0
  .word 0x005d1021
  .word 0x245400a0
  .word 0x8e970000
  .word 0x0200202d
  .word 0x0c0f151c
  .word 0x00000000
  .word 0x0040f02d
  .word 0x0000882d
  .word 0x1000010b
  .word 0x00000000
  .word 0x001110c0
  .word 0x03c21821
  .word 0x24620008
  .word 0x9070000d
  .word 0x12000104
  .word 0x00000000
  .word 0x84530000
  .word 0x84520002
  .word 0x00111080
  .word 0x02e2b021
  .word 0x86c70000
  .word 0x2402ffff
  .word 0x10e200f2
  .word 0x00000000
  .word 0x30e28000
  .word 0x104000e6
  .word 0x00000000
  .word 0x30e37fff
  .word 0x24020004
  .word 0x106200a3
  .word 0x00000000
  .word 0x24020003
  .word 0x10620069
  .word 0x00000000
  .word 0x24020002
  .word 0x10620037
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x106000e0
  .word 0x00000000
  .word 0x100000de
  .word 0x00000000
  .word 0x26420144
  .word 0x0002943c
  .word 0x0012943f
  .word 0x0013ac3c
  .word 0x0015ac3f
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x24070043
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x24070044
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x24070045
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x24070046
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x24070047
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100000af
  .word 0x00000000
  .word 0x26420143
  .word 0x0002943c
  .word 0x0012943f
  .word 0x0013ac3c
  .word 0x0015ac3f
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x2407003e
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x2407003f
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x24070040
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x24070041
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x24070042
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000080
  .word 0x00000000
  .word 0x26420143
  .word 0x0002943c
  .word 0x0012943f
  .word 0x0013ac3c
  .word 0x0015ac3f
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x24070038
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x24070039
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x2407003a
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x2407003b
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x2407003c
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x2407003d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000049
  .word 0x00000000
  .word 0x26420141
  .word 0x0002943c
  .word 0x0012943f
  .word 0x0013ac3c
  .word 0x0015ac3f
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x24070031
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x24070032
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x24070033
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x24070034
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x24070035
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x24070036
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x24070037
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x0013243c
  .word 0x0004243f
  .word 0x00122c3c
  .word 0x00052c3f
  .word 0x44806000
  .word 0x0200302d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0013243c
  .word 0x0004243f
  .word 0x00122c3c
  .word 0x00052c3f
  .word 0x44806000
  .word 0x86c70002
  .word 0x0200302d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26310001
  .word 0x8e820004
  .word 0x0222102b
  .word 0x1440fef3
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
  .word 0x27bd01c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma pop
#pragma opt_loop_invariants reset
#undef FUN_0040e3c0

// FUN_003EF970


u64 FUN_003ef970(u64 param_1)



{

  int iVar1;

  

  iVar1 = FUN_003c5460(DAT_007ce688);

  iVar1 = FUN_003c5470(*(u32 *)(iVar1 + 0x48));

  switch(param_1) {

  case 0:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 1;

    break;

  case 1:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 2;

    break;

  case 2:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 4;

    break;

  case 3:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 8;

    break;

  case 4:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x10;

    break;

  case 5:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x20;

    break;

  case 6:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x40;

    break;

  case 7:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x80;

    break;

  case 8:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x100;

    break;

  case 9:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x200;

    break;

  case 10:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x400;

    break;

  case 0xb:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x800;

    break;

  case 0xc:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x1000;

    break;

  case 0xd:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x2000;

    break;

  case 0xe:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x4000;

    break;

  case 0xf:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x8000;

    break;

  case 0x10:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x10000;

    break;

  case 0x11:

    *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) | 0x20000;

  }

  return 0;

}

// FUN_003EFB40
void FUN_003efb40(u8* owner)
{
    u32 descriptors[9];
    ShopU128* source;
    ShopU128* destination;
    ShopU128 value;
    s32 count;
    u32 resource;

    source = (ShopU128*)PTR_FUN_006a75e0;
    destination = (ShopU128*)descriptors;
    count = 2;
    do
    {
        value = *source;
        source++;
        count--;
        *destination = value;
        destination++;
    } while (count > 0);
    *(f32*)destination = *(f32*)source;
    resource = FUN_003c5240(DAT_007ce688, 0xd, descriptors, 0, 2);
    if (owner != NULL)
    {
        *(u32*)(owner + 0x40) = resource;
    }
}

// FUN_003EFBC0


u64 FUN_003efbc0(u64 param_1,u64 param_2)



{

  u32 *puVar1;

  int iVar2;

  int iVar3;

  

  puVar1 = (u32 *)FUN_003c5460();

  iVar2 = FUN_003c5470(param_2);

  iVar3 = FUN_00400d60();

  *(int *)(iVar2 + 8) = iVar3;

  *(u32 *)(iVar3 + 0x1c) = *puVar1;

  return 0;

}

// FUN_003EFC20


u64 FUN_003efc20(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  FUN_00400e30(*(u32 *)(iVar1 + 8));

  return 0;

}

// FUN_003EFC60


u64 FUN_003efc60(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  FUN_00400e90(*(u32 *)(iVar1 + 8));

  return 0;

}

// FUN_003EFCA0


u64 FUN_003efca0(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_003c5470(param_2);

  FUN_00401170(*(u32 *)(iVar1 + 8));

  return 0;

}

// FUN_003EFCE0
u64 FUN_003efce0(void)
{
    u8* state;
    u8* work;
    u32 resource;

    resource = 0;
    state = (u8*)FUN_003c5460(DAT_007ce688);
    if (state != NULL)
    {
        resource = *(u32*)(state + 0x40);
    }
    if (resource == 0)
    {
        return 0;
    }
    work = (u8*)FUN_003c5470(resource);
    FUN_00401420(*(u32*)(work + 8), DAT_006b1f30 + *(s32*)state * 0x10);
    return 0;
}

// FUN_003EFD70
u8 FUN_003efd70(void)
{
    u8* state;
    u8* work;
    u32 resource;

    resource = 0;
    state = (u8*)FUN_003c5460(DAT_007ce688);
    if (state != NULL)
    {
        resource = *(u32*)(state + 0x40);
    }
    if (resource == 0)
    {
        return 0;
    }
    work = (u8*)FUN_003c5470(resource);
    return FUN_004014e0(*(u32*)(work + 8)) != 0;
}

// FUN_003EFDE0
void FUN_003efde0(u64 unused, u64 value)
{
    u8* state;
    u8* work;
    u32 resource;

    resource = 0;
    state = (u8*)FUN_003c5460(DAT_007ce688);
    if (*(u32*)state != 8)
    {
        if (state != NULL)
        {
            resource = *(u32*)(state + 0x40);
        }
        if (resource != 0)
        {
            work = (u8*)FUN_003c5470(resource);
            FUN_004015a0(*(u32*)(work + 8), value);
        }
    }
}

// FUN_003EFE60
u32 FUN_003efe60(void)
{
    u8* state;
    u8* work;
    u32 resource;
    u32 result;

    resource = 0;
    state = (u8*)FUN_003c5460(DAT_007ce688);
    if (state != NULL)
    {
        resource = *(u32*)(state + 0x40);
    }
    if (resource == 0)
    {
        result = 0;
    }
    else
    {
        work = (u8*)FUN_003c5470(resource);
        result = FUN_004015e0(*(u32*)(work + 8));
    }
    return result;
}

// FUN_003EFED0


int FUN_003efed0(int param_1)



{

  return (int)(DAT_006a9930 + param_1 * 0x10);

}

// FUN_003EFEF0


u8 ** FUN_003efef0(void)



{

  return (u8 **)&PTR_PTR_006a99c0;

}


typedef struct FclShopDispatchResult {
  u32 value;
  u32 value_aux;
  s16 field08;
  s16 field0a;
  s16 field0c;
  s16 field0e;
  s16 field10;
  s16 field12;
  s16 field14;
  s16 field16;
  s16 field18;
  u16 field1a;
} FclShopDispatchResult;
typedef union FclShopFloatPair {
  f32 f[2];
  u32 u[2];
} FclShopFloatPair;

typedef struct FclShopDispatchSource {
  FclShopDispatchResult alternate[18];
  u8 pad1f8[8];
  FclShopDispatchResult primary[18];
  u8 pad3f8[8];
} FclShopDispatchSource;

typedef struct FclShopDispatchOutput {
  FclShopDispatchResult result;
  u8 pad1c[4];
} FclShopDispatchOutput;

typedef struct FclShopDispatchStack {
  FclShopDispatchSource source[8];
  FclShopDispatchOutput output[16];
} FclShopDispatchStack;
typedef struct FclShopDispatchRegion {
  FclShopDispatchResult result[18];
  u8 pad[0x118];
} FclShopDispatchRegion;

typedef struct FclShopDispatchStorage {
  FclShopDispatchResult tail0;
  u8 tail_gap[0x2f4];
  FclShopDispatchResult tail1;
  u8 tail_path_gap[0x2f4];
  FclShopDispatchRegion path[28];
  FclShopDispatchOutput output[30];
} FclShopDispatchStorage;

extern u32 D_006AF3E0[];
extern int FUN_003dffc0(int *param_1,int param_2,s32 param_3);
extern u32 fclCombineList003df100();

#define FCL_SHOP_DISPATCH_BUILD(SRC, OUT, OWNER, ID, COPY_OFFSET) do { \
  u32 *copy_src = D_006AF3E0; \
  u32 *copy_dst = (u32 *)(SRC); \
  int copy_count = 0x3f; \
  u32 copy_value0; \
  u32 copy_value1; \
  do { \
    copy_value0 = copy_src[0]; \
    copy_value1 = copy_src[1]; \
    copy_src += 2; \
    copy_count = copy_count - 1; \
    copy_dst[0] = copy_value0; \
    copy_dst[1] = copy_value1; \
    copy_dst += 2; \
  } while (copy_count > 0); \
  (SRC)[0].value = (ID); \
  (SRC)[0].field18 = 0; \
  (SRC)[1].value = (ID); \
  (SRC)[1].field18 = 0; \
  (SRC)[2].value = (ID); \
  (SRC)[2].field18 = 0; \
  (SRC)[3].value = (ID); \
  (SRC)[3].field18 = 0; \
  (SRC)[4].value = (ID); \
  (SRC)[4].field18 = 0; \
  (SRC)[5].value = (ID); \
  (SRC)[5].field18 = 0; \
  (SRC)[6].value = (ID); \
  (SRC)[6].field18 = 0; \
  (SRC)[7].value = (ID); \
  (SRC)[7].field18 = 0; \
  (SRC)[8].value = (ID); \
  (SRC)[8].field18 = 0; \
  (SRC)[9].value = (ID); \
  (SRC)[9].field18 = 0; \
  (SRC)[10].value = (ID); \
  (SRC)[10].field18 = 0; \
  (SRC)[11].value = (ID); \
  (SRC)[11].field18 = 0; \
  (SRC)[12].value = (ID); \
  (SRC)[12].field18 = 0; \
  (SRC)[13].value = (ID); \
  (SRC)[13].field18 = 0; \
  (SRC)[14].value = (ID); \
  (SRC)[14].field18 = 0; \
  (SRC)[15].value = (ID); \
  (SRC)[15].field18 = 0; \
  (SRC)[16].value = (ID); \
  (SRC)[16].field18 = 0; \
  (SRC)[17].value = (ID); \
  (SRC)[17].field18 = 0; \
  memcpy((OUT), (SRC) + (COPY_OFFSET), 0x1c); \
  fclCombineList003df100( \
      FUN_003dffc0((OWNER), (ID), *((volatile /* Removing this file's qualifier batch loses 2 MATCH(es) and worsens 0 other function(s) - measured W170. */ u32 *)((u8 *)(OUT) + 4))), \
      (OUT)); \
} while (0)
#define FCL_SHOP_MISC_BUILD(SRC, OUT, OWNER, ID, VALUE, FIELD, COPY_OFFSET) do { \
    u32 *copy_src = D_006AF3E0; \
    u32 *copy_dst = (u32 *)(SRC); \
    int copy_count = 0x62; \
    u32 copy_value0; \
    u32 copy_value1; \
    do { \
        copy_value0 = *copy_src++; \
        copy_value1 = *copy_src++; \
        copy_count--; \
        copy_dst[0] = copy_value0; \
        copy_dst[1] = copy_value1; \
        copy_dst += 2; \
    } while (copy_count > 0); \
    (SRC)[0].value = (VALUE); (SRC)[0].field18 = (FIELD); \
    (SRC)[1].value = (VALUE); (SRC)[1].field18 = (FIELD); \
    (SRC)[2].value = (VALUE); (SRC)[2].field18 = (FIELD); \
    (SRC)[3].value = (VALUE); (SRC)[3].field18 = (FIELD); \
    (SRC)[4].value = (VALUE); (SRC)[4].field18 = (FIELD); \
    (SRC)[5].value = (VALUE); (SRC)[5].field18 = (FIELD); \
    (SRC)[6].value = (VALUE); (SRC)[6].field18 = (FIELD); \
    (SRC)[7].value = (VALUE); (SRC)[7].field18 = (FIELD); \
    (SRC)[8].value = (VALUE); (SRC)[8].field18 = (FIELD); \
    (SRC)[9].value = (VALUE); (SRC)[9].field18 = (FIELD); \
    (SRC)[10].value = (VALUE); (SRC)[10].field18 = (FIELD); \
    (SRC)[11].value = (VALUE); (SRC)[11].field18 = (FIELD); \
    (SRC)[12].value = (VALUE); (SRC)[12].field18 = (FIELD); \
    (SRC)[13].value = (VALUE); (SRC)[13].field18 = (FIELD); \
    (SRC)[14].value = (VALUE); (SRC)[14].field18 = (FIELD); \
    (SRC)[15].value = (VALUE); (SRC)[15].field18 = (FIELD); \
    (SRC)[16].value = (VALUE); (SRC)[16].field18 = (FIELD); \
    (SRC)[17].value = (VALUE); (SRC)[17].field18 = (FIELD); \
    (SRC)[18].value = (VALUE); (SRC)[18].field18 = (FIELD); \
    (SRC)[19].value = (VALUE); (SRC)[19].field18 = (FIELD); \
    (SRC)[20].value = (VALUE); (SRC)[20].field18 = (FIELD); \
    (SRC)[21].value = (VALUE); (SRC)[21].field18 = (FIELD); \
    (SRC)[22].value = (VALUE); (SRC)[22].field18 = (FIELD); \
    (SRC)[23].value = (VALUE); (SRC)[23].field18 = (FIELD); \
    (SRC)[24].value = (VALUE); (SRC)[24].field18 = (FIELD); \
    (SRC)[25].value = (VALUE); (SRC)[25].field18 = (FIELD); \
    (SRC)[26].value = (VALUE); (SRC)[26].field18 = (FIELD); \
    (SRC)[27].value = (VALUE); (SRC)[27].field18 = (FIELD); \
    memcpy((OUT), (SRC) + (COPY_OFFSET), 0x1c); \
    fclCombineList003df100( \
        FUN_003dffc0((OWNER), (ID), \
            *((volatile /* Removing this file's qualifier batch loses 2 MATCH(es) and worsens 0 other function(s) - measured W170. */ u32 *)((u8 *)(OUT) + 4))), (OUT)); \
} while (0)
#define FCL_SHOP_MISC_AT(OFFSET) \
    ((volatile /* Removing this file's qualifier batch loses 2 MATCH(es) and worsens 0 other function(s) - measured W170. */ FclShopDispatchResult *)((u8 *)source + (OFFSET)))
u32 datSocialLinkLevelIsNotZero(s16 socialLink);
u64 FUN_00172660(s32 socialLink);
extern u8 DAT_006aede8[];
extern u8 DAT_006aede8_abs[];
#pragma alias DAT_006aede8_abs DAT_006aede8
#pragma alias DAT_006aeff0_abs DAT_006aeff0
extern s16 DAT_006aeff0_abs[];
extern char DAT_006af340[];
extern char DAT_006af360[];
extern char DAT_006af380[];
extern u32 gp0xffffac10;
extern u32 gp0xfffface0;
typedef int (*code)();
float fGpffff8084;
float fGpffff808c;
float fGpffff8090;
float fGpffff8110;
float fGpffff8230;
float fGpffff8234;
float fGpffff8238;
float fGpffff823c;
int *iGpffffabf8;
int iGpffffabfc;
int iGpffffac00;
u8 *iGpffffb730;
int *iGpffffb7f4;
int iGpffffb7f8;
extern u8 *pbGpffffabe8;
short *psGpffffabd0;
short *psGpffffabf0;
u32 *puGpffffabe0;
u32 uGpffffabd4;
u32 uGpffffabe4;
extern u32 uGpffffabec;
u32 uGpffffabf4;
u32 fGpffffacf0;
u32 fGpffffacf4;
u32 fGpffffacf8;
u32 fGpffffacfc;
u32 fGpffffad00;
u32 fGpffffad04;
u32 uGpffffb9a8;
/* FUSION_EXACT_PROTOS */
extern float sinf_y2(float);
extern float cosf_y2(float);
#pragma alias FUN_0040e3f0_f32 FUN_0040e3f0_y2
extern void FUN_0040e3f0_f32(float,float,float,float,int,int,int,int,int,int,int);
void FUN_003c45f0(int param_1);
u32 datGetScenarioMode_y2(void);
u16 FUN_001752b0(void);
void FUN_003c9e30_y2(u32 param_1,int param_2,s8 param_3);
f32 func_00171510(s16 row, s16 column);
void FUN_003eff00(u64 param_1,u8 *param_2);
u8 * FUN_003efff0(int param_1);
#pragma alias FUN_003efff0_u64 FUN_003efff0
u8 * FUN_003efff0_u64(u64 param_1);
s16 FUN_003f0090_y2(int param_1);
s16 FUN_003f00b0_y2(int param_1);
int FUN_003f00d0(int *param_1,int param_2,int *param_3);
 #pragma alias FUN_003f00d0_i FUN_003f00d0
 int *FUN_003f00d0_i(int *param_1,int param_2,int *param_3);
 #pragma alias FUN_003f25e0_i FUN_003f25e0
 u32 FUN_003f25e0_i(u32 param_1,int *param_2,u32 param_3);
 #pragma alias FUN_003f2940_i FUN_003f2940
 u32 FUN_003f2940_i(u32 param_1,short *param_2,int param_3,u32 param_4);
 #pragma alias FUN_003f2320_i FUN_003f2320
 u32 FUN_003f2320_i(u32 param_1,int *param_2);
void FUN_003f01d0(int param_1,int param_2,int *param_3);
u32 FUN_003f0240_y2(int param_1);
int FUN_003f0350(int param_1,int *param_2);
char FUN_003f03e0(int param_1);
#pragma alias FUN_003f03e0_u64 FUN_003f03e0
char FUN_003f03e0_u64(u64 param_1);
#pragma alias FUN_003f03e0_u32 FUN_003f03e0
u32 FUN_003f03e0_u32(u32 param_1);
u32 FUN_003f04f0(u32 param_1,int param_2);
u32 * FUN_003f06e0(int *param_1,u32 param_2);
short FUN_003f0830(int param_1);
short FUN_003f0ac0_y2(int param_1);
long FUN_003f0d60_y2(int param_1,u64 param_2);
u32 FUN_003f0ec0(u16 param_1);
#pragma alias FUN_003f0ec0_s16 FUN_003f0ec0
u32 FUN_003f0ec0_s16(s16 param_1);
s16 FUN_003f10b0_y2(int param_1,u16 param_2);
short FUN_003f12a0_y2(int param_1,int param_2);
u64 FUN_003f1470_y2(int param_1);
void FUN_003f1520_y2(int param_1);
int FUN_003f15d0_y2(int param_1,int param_2);
int FUN_003f1690(u64 param_1);
#pragma alias FUN_003f1690_i FUN_003f1690
int FUN_003f1690_i(int param_1);
int clndIsDateInRangeFromStart(s8 month, s8 day, u32 range);
#pragma alias clndIsDateInRangeFromStart_long clndIsDateInRangeFromStart
int clndIsDateInRangeFromStart_long(long month,long day,u32 range);
#pragma alias clndIsDateInRange_long clndIsDateInRange
int clndIsDateInRange_long(long startMonth,long startDay,long endMonth,long endDay);
void FUN_0017c220_y2(u16 *param_1);
u32 FUN_003f1720_y2(u32 param_1,short param_2);
u32 FUN_003f1830_y2(short *param_1,int param_2);
u32 FUN_003f1910(u64 param_1);
u32 FUN_003f1a10(u32 param_1);
void FUN_003f1ba0(int param_1,u32 param_2);
u32 FUN_003f1dc0(long param_1,int param_2,int param_3);
u8 FUN_003f2240(int param_1,long param_2);
u64 FUN_003f2320(int param_1,int param_2);
u32 FUN_003f2510(void);
u32 FUN_003f25e0(int param_1,int *param_2,u32 param_3);
u32 FUN_003f2940(int param_1,short *param_2,int param_3,u32 param_4);
u64 FUN_003f2d60_y2(int param_1);
u64 FUN_003f2dc0(int param_1,int param_2);
u32 FUN_003f2f70(u32 param_1,int param_2,u32 param_3);
#pragma alias FUN_003f2f70_i FUN_003f2f70
u32 FUN_003f2f70_i(int param_1,int param_2,int param_3);
 #pragma alias FUN_003f33d0_i FUN_003f33d0_y2
 u64 FUN_003f33d0_i(int param_1,u32 param_2);
 #pragma alias FUN_003f3970_i FUN_003f3970
 u32 FUN_003f3970_i(int param_1,u32 param_2);
 #pragma alias FUN_003f39a0_i FUN_003f39a0
 u32 FUN_003f39a0_i(int param_1,int param_2,u32 param_3);
 #pragma alias FUN_003f3e60_i FUN_003f3e60
 u32 FUN_003f3e60_i(u32 param_1,int *param_2);
 #pragma alias FUN_003f3dc0_i FUN_003f3dc0
 void FUN_003f3dc0_i(int param_1,u32 param_2);
 #pragma alias FUN_003c58f0_i FUN_003c58f0
 u32 FUN_003c58f0_i(u32 param_1,int param_2,u32 param_3,u32 param_4);
 #pragma alias FUN_0019d3f0_fcl FUN_0019d3f0
 void FUN_0019d3f0_fcl(const char *param_1,int param_2);
#pragma alias fclShopNmlistFind FUN_003c4bf0
extern int fclShopNmlistFind(int *list,int *head,int id);
#pragma alias fclShopNmlistRemove FUN_003c49e0
extern int fclShopNmlistRemove(int *list,int *head,int node);
// Measured FUN_00400740: direct call nd8; alias alone nd8; typed byte-pointer a1 nd0 (object 432).
#pragma alias FUN_003c49e0_ro FUN_003c49e0
extern int FUN_003c49e0_ro(int *list,int *head,int node);
u64 FUN_003f33d0_y2(int param_1,u32 param_2);
u64 FUN_003f3970(long param_1,u32 param_2);
u64 FUN_003f39a0(long param_1,long param_2,u32 param_3);
void FUN_003f3dc0(int param_1,int *param_2);
u32 FUN_003f3e60(int param_1,int *param_2);
u32 FUN_003f3f00_y2(u64 param_1);
void FUN_003f3fc0(int param_1,int param_2,u32 param_3,int param_4);
void FUN_003f4350(int param_1,int param_2,int param_3,int param_4);
void FUN_003f45e0(int param_1,int param_2,int param_3,int param_4);
void FUN_003f4870(int param_1,int param_2,int param_3,int param_4);
int FUN_003f4a90(int param_1,int param_2,int param_3,int param_4,int param_5,short *param_6);
void FUN_003f4de0(int param_1,int param_2,u32 param_3,int param_4);
void FUN_003f55b0(int param_1,int param_2,int param_3,int param_4,int param_5, u32 param_6);
#pragma alias FUN_003f55b0_i FUN_003f55b0
void FUN_003f55b0_i(int,int,int,int,int,int);
void FUN_003f5830(int param_1,int param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_003f5ab0(u32 param_1,u32 param_2,u32 param_3,u64 param_4, int param_5);
#pragma alias FUN_003f5ab0_i FUN_003f5ab0
void FUN_003f5ab0_i(int,int,int,int,int);
void FUN_003f5d10(u32 param_1,u32 param_2,u32 param_3,u64 param_4, int param_5);
void FUN_003f5f50(u32 param_1,u32 param_2,u8 param_3,u64 param_4, int param_5);
void FUN_003f61d0(int param_1,int param_2,u32 param_3,u64 param_4,int param_5);
#pragma alias FUN_003f61d0_i FUN_003f61d0
void FUN_003f61d0_i(int,int,int,int,int);
void FUN_003f67e0(int param_1,int param_2,u32 param_3,int param_4,int param_5, int param_6);
void FUN_003f6f20(int param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_003f7390(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003f7730(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003f7890(int param_1,int param_2,u8 param_3,int param_4,int param_5,int param_6);
void FUN_003f7a80(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003f7c60(u32 param_1,u32 param_2,u32 param_3,int param_4,int param_5);
void FUN_003f7d50(int param_1,int param_2,u32 param_3,int param_4, int param_5);
#pragma alias FUN_003f7d50_i FUN_003f7d50
void FUN_003f7d50_i(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003f7fe0(int param_1,int param_2,u32 param_3,int param_4,int param_5 );
#pragma alias FUN_003f7fe0_i FUN_003f7fe0
void FUN_003f7fe0_i(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003f8180(int param_1,int param_2,u32 param_3,int param_4,int param_5 );
void FUN_003f85a0(int param_1,int param_2,u32 param_3,int param_4, int param_5);
void FUN_003f86a0(int param_1,int param_2,u32 param_3,int param_4,int param_5 );
void FUN_003f8a00(int param_1,int param_2,u32 param_3,int param_4,int param_5 );
void FUN_003f8e10(int param_1,int param_2,u32 param_3,int param_4,int param_5 );
void FUN_003f9220(int param_1,int param_2,u32 param_3,int param_4,int param_5 );
void FUN_003f9510(int param_1,int param_2,u32 param_3,int param_4,int param_5 );
u32 FUN_003f98f0(u16 param_1);
u64 FUN_003f99d0(u32 param_1,u32 param_2);
u64 FUN_003f9b20_y2(u64 param_1,int param_2);
s32 FUN_003f9cb0(u32 *param_1, u32 *param_2);
u32 FUN_003f9e30(int param_1);
u32 FUN_003fa0d0_y2(u64 param_1);
u64 FUN_003fa190_y2(int param_1);
u64 FUN_003fa1b0_y2(int param_1);
u8 FUN_003fa1e0(void);
#pragma alias FUN_003fa1e0_u32 FUN_003fa1e0
u32 FUN_003fa1e0_u32(void);
void FUN_003fa210(int param_1);
void FUN_003fa520(int param_1);
void FUN_003fa800(int param_1);
void FUN_003faae0(int param_1);
void FUN_003fadc0(int param_1);
void FUN_003fb0c0_y2(u32 param_1,u32 param_2);
int FUN_003fb2f0(u32 *param_1);
int FUN_003fb530(u32 *param_1);
int FUN_003fb6b0_y2(u64 param_1);
u32 FUN_003fbc00_y2(u32 *param_1);
void FUN_003fbe70_y2(u8 *param_1,u8 *param_2);
void FUN_003fbf10_y2(u16 *param_1);
u64 FUN_003fbf20_y2(short *param_1);
u64 FUN_003fc060(int param_1);
#pragma alias FUN_003fc060_u32 FUN_003fc060
u32 FUN_003fc060_u32(int param_1);
#pragma alias FUN_003fc540_u32 FUN_003fc540
u32 FUN_003fc540_u32(int param_1);
u64 FUN_003fc540(int param_1);
u32 FUN_003fc980_y2(int param_1);
void FUN_003fca00(u64 param_1,u64 param_2,u32 param_3);
void FUN_003fcad0(u64 param_1,u64 param_2,u32 param_3,int param_4);
void FUN_003fcbe0(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003fcdc0(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003fd010(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003fd030(u64 param_1,u64 param_2,u32 param_3,int param_4);
void FUN_003fd140(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003fd320(int param_1,int param_2,u32 param_3,int param_4,int param_5);
u64 FUN_003fd570(int param_1,u32 *param_2);
u64 FUN_003fd730_y2(u64 param_1,int param_2);
u64 FUN_003fd7e0(u64 param_1,int param_2);
int * FUN_003fd820_y2(int param_1);
void FUN_003fd8a0_y2(u32 *param_1);
void FUN_003fd8e0_y2(int *param_1);
u64 FUN_003fd990_y2(int *param_1);
void FUN_003fdcc0(int *param_3,int param_2,int param_1);
u64 FUN_003fdf80_y2(u32 *param_1);
u32 FUN_003fe020(int param_1,u64 param_2);
u32 FUN_003fe1f0(u64 param_1);
u32 FUN_003fe2b0_y2(void);
u32 FUN_003fe3e0_y2(u16 param_1);
u32 FUN_003fe5d0_y2(u64 param_1);
u64 FUN_003fe690(u32 param_1,u8 *param_2);
#pragma alias FUN_003fe690_p FUN_003fe690
u64 FUN_003fe690_p(u32 param_1,u64 param_2,int param_3);
#pragma alias FUN_003fe690_3 FUN_003fe690
u64 FUN_003fe690_3(u64 param_1,u64 param_2,int param_3);
#pragma alias FUN_003c5e80_p FUN_003c5e80
void FUN_003c5e80_p(u32 param_1,code param_2);
#pragma alias FUN_003c5e20_p FUN_003c5e20
void FUN_003c5e20_p(u32 param_1,code param_2);
#pragma alias FUN_003c5ee0_p FUN_003c5ee0
void FUN_003c5ee0_p(u32 param_1,code param_2);
u64 FUN_003fe7d0(u64 param_1,int param_2);
#pragma alias FUN_003fe7d0_i FUN_003fe7d0
u64 FUN_003fe7d0_i(u32 param_1,int param_2);
u32 FUN_003fe850_y2(u16 param_1,u64 param_2);
#pragma alias FUN_003fea10_3 FUN_003fea10
u64 FUN_003fea10_3(int param_1,u32 *param_2,int param_3);
u32 FUN_003fe950_y2(u64 param_1);
u64 FUN_003fea10(u32 param_1,u32 *param_2);
u64 FUN_003feb30(u32 param_1,int param_2);
u64 FUN_003fee40_y2(int param_1);
#pragma alias FUN_003ff150_i FUN_003ff150
u64 FUN_003ff150_i(int param_1,int param_2);
#pragma alias FUN_003ff150_u32 FUN_003ff150
u32 FUN_003ff150_u32(int param_1,int param_2);
u32 FUN_003fef30_y2(int param_1,int param_2);
u64 FUN_003ff150(int param_1,int param_2);
void FUN_003ff460(int param_1,u32 param_2);
u32 FUN_003ff570_y2(u64 param_1);
void FUN_003ff630(u32 param_1,u64 param_2,u64 param_3,u64 param_4, u8 param_5,short param_6,short param_7,u32 param_8);
#pragma alias FUN_003ff630_f32 FUN_003ff630
void FUN_003ff630_f32(float param_1,int param_2,int param_3,int param_4,int param_5,short param_6,short param_7,u32 param_8);
u8 FUN_003ffa20(u64 param_1,u64 param_2,int param_3);
#pragma alias FUN_003ffa20_3 FUN_003ffa20
int FUN_003ffa20_3(u64 param_1,u64 param_2,short *param_3);
void FUN_003ffbb0(int param_1,int param_2);
void FUN_003ffe00_y2(int param_1);
int * FUN_003ffe60_y2(int param_1);
void FUN_004003a0_y2(int param_1);
u32 FUN_004003f0_y2(int *param_1);
u64 FUN_00400690_y2(u32 *param_1);
void FUN_004006c0(int param_1,int param_2,int param_3,int param_4);
void FUN_00400740(int param_1,int param_2,int param_3,int param_4);
void FUN_004008f0(int param_1,int param_2,u8 param_3,int param_4);
void FUN_00400a90(int param_1,int param_2,int param_3,int param_4,u32 *param_5);
void FUN_00400b90(int param_1,int param_2,int param_3,int param_4,u32 *param_5);
void FUN_00400e30_y2(int param_1);
int FUN_00400d60_y2(void);
u32 FUN_00401210(int param_1);
void FUN_00401170_y2(int param_1);
u64 FUN_004012c0(int param_1);
u64 FUN_00401370(int param_1);
void FUN_00401420_y2(int param_1,int param_2);
u32 FUN_004014e0_y2(u32 param_1);
void FUN_004015a0_y2(u32 *param_1,u32 param_2);
u8 FUN_004015e0_y2(u32 *param_1);
int FUN_00401600(u64 param_1,u64 param_2,int param_3);
u32 FUN_004016d0(u32 param_1);
int FUN_00401800(short param_1);
u32 FUN_00401890_y2(short param_1);
u32 FUN_00401950_y2(u16 param_1);
u32 FUN_00401a00(u16 param_1,u16 *param_2,short *param_3);
#pragma alias FUN_00401a00_i FUN_00401a00
u32 FUN_00401a00_i(short param_1,int param_2,short *param_3);
u8 * FUN_00401c90(u32 *param_1,int param_2);
u8 * FUN_00401cf0(int param_1);
short * FUN_00401d90(int param_1);
u32 FUN_00401de0_y2(u32 param_1,int param_2,int param_3);
void FUN_00402400_y2(int param_1,u16 *param_2);
u32 FUN_00402480_y2(u16 *param_1);
u32 FUN_00402510(u32 param_1,long param_2,u32 param_3,short param_4);
u32 FUN_004026b0(int param_1,int param_2,u32 param_3);
void FUN_00402800(int param_1);
void FUN_00402c80(int param_1);
s16 FUN_004030b0_y2(u16 param_1);
s16 FUN_004030f0_y2(u16 param_1);
void FUN_00403130(u64 param_1,u64 param_2,int param_3,u64 param_4, u64 param_5,u64 param_6,s16 param_7);
void FUN_00403220(u64 param_1,u64 param_2,int param_3,u64 param_4, u64 param_5,u64 param_6,s16 param_7);
void FUN_004032f0_y2(u64 param_1);
void FUN_00403340_y2(u16 param_1);
u8 FUN_00403380(u64 param_1);
#pragma alias FUN_00403380_i FUN_00403380
int FUN_00403380_i(u64 param_1);
u8 FUN_00403410_y2(short param_1);
u32 FUN_00403520_y2(void);
int FUN_00403610_y2(void);
s16 FUN_00403740(short param_1);
s16 FUN_00403760(short param_1);
s16 FUN_00403780(short param_1);
s16 FUN_004037a0(short param_1);
s16 FUN_004037c0(short param_1);
int FUN_004037e0(short param_1);
long FUN_00403800(short param_1);
long FUN_00403830(short param_1);
int FUN_00403860(short param_1);
int FUN_00403880(short param_1);
u32 FUN_004038a0_y2(short param_1);
u32 FUN_004038e0_y2(short param_1);
#pragma alias FUN_00403740_i FUN_00403740
int FUN_00403740_i(int param_1);
#pragma alias FUN_00403800_i FUN_00403800
int FUN_00403800_i(int param_1);
#pragma alias FUN_00403830_i FUN_00403830
int FUN_00403830_i(int param_1);
#pragma alias FUN_00403860_i FUN_00403860
int FUN_00403860_i(int param_1);
#pragma alias FUN_00403880_i FUN_00403880
int FUN_00403880_i(int param_1);
#pragma alias FUN_004038e0_i FUN_004038e0_y2
int FUN_004038e0_i(int param_1);
s16 FUN_00403900(short param_1);
u32 FUN_00403920(short param_1,short param_2);
u32 FUN_00403970_y2(short param_1);
u32 FUN_00403e40_y2(int param_1,int param_2);
u32 FUN_00403f20_y2(short param_1,int param_2);
u32 FUN_00404120_y2(short param_1,int param_2);
void FUN_00404470(short param_1);
#pragma alias FUN_00404470_alt FUN_00404470
void FUN_00404470_alt(short param_1,int param_2);
#pragma alias FUN_00404470_long FUN_00404470
void FUN_00404470_long(long param_1,int param_2);
void FUN_004044c0_y2(short param_1);
void FUN_004045d0(u64 param_1);
#pragma alias FUN_004045d0_u32 FUN_004045d0
void FUN_004045d0_u32(u32 param_1);
void FUN_00404750(u32 param_1,u32 param_2,u32 param_3);
u64 FUN_00405970_y2(u64 param_1,int param_2);
void FUN_00405a90(u64 param_1,int param_2);
u32 FUN_00405ac0_y2(u64 param_1,long param_2);
void FUN_00405d60_y2(int param_1);
void FUN_00405e00(u64 param_1);
#pragma alias FUN_00405e00_u32 FUN_00405e00
void FUN_00405e00_u32(u32 param_1);
extern int FUN_00405db0(u32* param_1, u32* param_2);
u32 FUN_00405e30_y2(u32 param_1);
void FUN_00405f70(s32 param_1,s32 param_2,s32 param_3,int param_4,u64 param_5, int param_6,int param_7);
#pragma alias FUN_00405f70_i FUN_00405f70
void FUN_00405f70_i(s32 param_1,s32 param_2,s32 param_3,int param_4,int param_5,
                    int param_6,int param_7);
void FUN_004064e0(int param_1,int param_2,int param_3,int param_4);
void FUN_00406aa0(int param_1,int param_2,u32 param_3);
void FUN_00406ca0(int param_1,int param_2,int *param_3);
void FUN_00407180(u32 param_1,u32 param_2,u16 param_3,int param_4);
void FUN_00407210(u32 param_1,u32 param_2,u16 param_3,int param_4,int param_5);
void FUN_004072d0(int param_1,long param_2,long param_3);
 #pragma alias FUN_004072d0_i FUN_004072d0
 void FUN_004072d0_i(u32 param_1,int param_2,int param_3);
u32 FUN_00409c80(u32 param_1);
 #pragma alias FUN_00409c80_i FUN_00409c80
 u32 FUN_00409c80_i(u32 param_1);
u32 FUN_00409e90(void);
void FUN_00409f20(u64 param_1,int param_2);
u32 FUN_00409f50_y2(u32 param_1,int param_2);
void FUN_0040a200_y2(int param_1);
void FUN_0040a260_y2(int param_1);
u32 FUN_0040a2b0_y2(u32 param_1);
u32 FUN_0040a490_y2(u32 param_1);
void FUN_0040a6d0_y2(u32 param_1,int param_2);
 #pragma alias FUN_0040a6d0_i FUN_0040a6d0_y2
 void FUN_0040a6d0_i(u32 param_1,int param_2);
 #pragma alias FUN_00174a90_fcl FUN_00174a90
 u32 FUN_00174a90_fcl(short param_1);
void FUN_0040a7c0(u64 param_1,u64 param_2,u8 param_3);
void FUN_0040ec20_y2(float scale,int x,int y,u32 color,int type,const void *text,int width,int shadow,code callback);
void FUN_0040a7f0(u64 param_1,int param_2,int *param_3);
void FUN_0040b3a0(u64 param_1,int param_2,int param_3);
void FUN_0040b630(u32 param_1,u32 param_2,u16 param_3,int param_4);
void FUN_0040b780(u32 param_1,u32 param_2,u16 param_3,int param_4,int param_5);
void FUN_0040b840_y2(int param_1);
u32 FUN_0040b910_y2(u32 param_1);
void FUN_0040c150_y2(u32 param_1);
u32 FUN_0040c170_y2(void);
void FUN_0040c1e0(int param_1,int param_2,int param_3);
#pragma alias FUN_0040c1e0_2 FUN_0040c1e0
void FUN_0040c1e0_2(int param_1,int param_2);
void FUN_0040c310_y2(int param_1);
void FUN_0040c460(u64 param_1,int param_2);
void FUN_0040c490_y2(u64 param_1);
void FUN_0040c520_y2(u64 param_1);
void FUN_0040c5b0_y2(u64 param_1);
void FUN_0040c650_y2(u64 param_1);
void FUN_0040c6a0_y2(u64 param_1);
int FUN_0040c6f0_y2(int param_1);
void FUN_0040c9a0_y2(int param_1);
u32 FUN_0040ca00_y2(int param_1);
void FUN_0040cad0_y2(int param_1);
void FUN_0040cc30(u64 param_1,int param_2,int *param_3);
void FUN_0040d330(int param_1);
void FUN_0040d3b0(u32 param_1,u32 param_2,u16 param_3,int param_4);
void FUN_0040d400(void);
u32 FUN_0040d410(void);
u32 FUN_0040d490(void);
u32 FUN_0040d540(void);
void FUN_0040d5b0(int param_1,int param_2,int param_3,int param_4,u32 param_5);
void FUN_0040d5e0(float param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6);
void FUN_0040d610(float param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6,long param_7);
void FUN_0040d640(float param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6, long param_7,long param_8);
void FUN_0040dcc0(float param_1,int param_2,int param_3,int param_4,int param_5,int param_6, u32 param_7,int param_8,long param_9);
#pragma alias datGetFlag_s32 datGetFlag
s32 datGetFlag_s32(s32 param_1);
#pragma alias datGetFlag_u32 datGetFlag
u32 datGetFlag_u32();
#pragma alias datGetFlag_u32_arg datGetFlag
u32 datGetFlag_u32_arg(int param_1);
#pragma alias datSocialLinkLevelIsNotZero_s32 datSocialLinkLevelIsNotZero
u32 datSocialLinkLevelIsNotZero_s32(s32 socialLink);
void FUN_001725a0(u64 socialLink);
#pragma alias datGetEquipmentIdx_s16 datGetEquipmentIdx_y2
s16 datGetEquipmentIdx_s16(s16 param_1,s16 param_2);
#pragma alias FUN_0017c610_u64 FUN_0017c610
s32 FUN_0017c610_u64(u64 param_1);
#pragma alias FUN_004037e0_u64 FUN_004037e0
int FUN_004037e0_u64(u64 param_1);
#pragma alias FUN_003f04f0_u32 FUN_003f04f0
u32 FUN_003f04f0_u32(u32 param_1,int param_2);
#pragma alias FUN_003f1dc0_u32 FUN_003f1dc0
u32 FUN_003f1dc0_u32(s32 param_1,void *param_2,s32 param_3);
#pragma alias FUN_003f1dc0_u64 FUN_003f1dc0
u32 FUN_003f1dc0_u64(u64 param_1,void *param_2,s32 param_3);
#pragma alias FUN_003f2240_u32 FUN_003f2240
u32 FUN_003f2240_u32();
#pragma alias FUN_0040e3c0_f32 FUN_0040e3c0_y2
void FUN_0040e3c0_f32(float param_1,int param_2,int param_3,u8 param_4,int param_5,int param_6);
#pragma alias FUN_0040e3c0_u32 FUN_0040e3c0_y2
void FUN_0040e3c0_u32(float param_1,int param_2,int param_3,u32 param_4,int param_5,int param_6);
void FUN_0040e3c0_i_y2(s32 x,s32 y,f32 scale,u8 color,s32 type,s32 value);
#pragma alias FUN_003b2cb0_f32 FUN_003b2cb0
void FUN_003b2cb0_f32(f32 scale,s32 x,s32 y,u32 color,s8 font,s32 align,const void *text,s32 width,s32 shadow);
#pragma alias FUN_003b2cb0_i FUN_003b2cb0
void FUN_003b2cb0_i(s32 x,s32 y,f32 scale,u32 color,u32 font,u32 align,const void *text,u32 width,u32 shadow);
#pragma alias FUN_003b32d0_f32 FUN_003b32d0
void FUN_003b32d0_f32(f32 scale,s32 x,s32 y,u32 color,s8 font,s32 align,const void *text,s32 width,s32 shadow);
#pragma alias FUN_003b32d0_i FUN_003b32d0
void FUN_003b32d0_i(s32 x,s32 y,f32 scale,u32 color,s8 font,s32 align,const void *text,s32 width,s32 shadow);
#pragma alias FUN_0040eb50_f32 FUN_0040eb50_y2
s32 FUN_0040eb50_f32(f32 scale,s32 x,s32 y,u8 color,s32 font,const void *text,s32 width);
s32 FUN_0040eb50_i_y2(s32 x,s32 y,f32 scale,u8 color,s32 font,const void *text,s32 width);
#pragma alias FUN_0040ebc0_f32 FUN_0040ebc0
s32 FUN_0040ebc0_f32(f32 scale,s32 x,s32 y,u32 color,s32 font,const void *text,s32 width);
#pragma alias func_00171110_ptr func_00171110_y2
const char *func_00171110_ptr(s16 id,s16 field);
#pragma alias FUN_003c7e20_f32 FUN_003c7e20
void FUN_003c7e20_f32(f32 p1,s32 p2,s32 p3,u32 p4,s32 p5,s32 p6,s32 p7,u32 p8);
#pragma alias FUN_003c7e20_f32_u64 FUN_003c7e20
void FUN_003c7e20_f32_u64(f32 p1,u64 p2,u64 p3,u64 p4,u64 p5,u64 p6,s32 p7,u32 p8);
#pragma alias FUN_003c7e20_mid FUN_003c7e20
void FUN_003c7e20_mid(u64 p1,u64 p2,f32 p3,u64 p4,u64 p5,u64 p6,s32 p7,u32 p8);
#pragma alias FUN_003c6270_u32 FUN_003c6270
u32 FUN_003c6270_u32(u32 param_1);
#pragma alias FUN_003c6ce0_u32 FUN_003c6ce0_y2
u32 FUN_003c6ce0_u32(u32 param_1);
#pragma alias FUN_003c6d10_u32 FUN_003c6d10_y2
u32 FUN_003c6d10_u32(u32 param_1);
#pragma alias FUN_003c6ca0_u32 FUN_003c6ca0_y2
u32 FUN_003c6ca0_u32(u32 param_1);
#pragma alias FUN_003c6cc0_u32 FUN_003c6cc0_y2
u32 FUN_003c6cc0_u32(u32 param_1);
#pragma alias FUN_0017c700_u32 FUN_0017c700_y2
u32 FUN_0017c700_u32(void);
#pragma alias FUN_00175410_u32 FUN_00175410
u32 FUN_00175410_u32(void);
#pragma alias datPersonaGetHeroPersona_u32 datPersonaGetHeroPersona
u32 datPersonaGetHeroPersona_u32(s16 param_1);
#pragma alias datGetPersonaByCompendium_ptr datGetPersonaByCompendium_y2
void *datGetPersonaByCompendium_ptr(s32 idx);
#pragma alias datPersonaGetTotalStat_u16 datPersonaGetTotalStat
u16 datPersonaGetTotalStat_u16(void *persona,u16 statId);
#pragma alias FUN_0017ca10_u32 FUN_0017ca10
u32 FUN_0017ca10_u32(u32 param_1);
#pragma alias FUN_00173a00_u32 FUN_00173a00
u32 FUN_00173a00_u32(u32 param_1,u32 param_2);
#pragma alias FUN_00173a00_s32 FUN_00173a00
s32 FUN_00173a00_s32(u32 param_1,u32 param_2);
#pragma alias FUN_003e0680_typed FUN_003e0680
void FUN_003e0680_typed(int param_1,code param_2,void *param_3);
#pragma alias memset_typed memset_y2
void memset_typed(void *param_1,int param_2,u32 param_3);
#pragma alias memcpy_typed memcpy
void memcpy_typed(void *param_1,const void *param_2,u32 param_3);
#pragma alias H_Maestro_00111c50_i H_Maestro_00111c50
void H_Maestro_00111c50_i(u64 param_1);
#pragma alias H_Maestro_SetAlphaMult_f32 H_Maestro_SetAlphaMult
void H_Maestro_SetAlphaMult_f32(float param_1,u64 param_2);
#pragma alias H_Maestro_RequestDraw_i H_Maestro_RequestDraw
#pragma alias FUN_003c4e70_u64 FUN_003c4e70
void FUN_003c4e70_u64(int param_1);
#pragma alias scrGetIntPara_u32 scrGetIntPara
u32 scrGetIntPara_u32(int param_1);
#pragma alias FUN_003e0700_u32 FUN_003e0700
void FUN_003e0700_u32(u32 param_1);
#pragma alias fclCombine003d02f0_i fclCombine003d02f0
void fclCombine003d02f0_i(void);
#pragma alias FUN_00175410_u32 FUN_00175410
u32 FUN_00175410_u32(void);
#pragma alias datPersonaGetHeroPersona_s16 datPersonaGetHeroPersona
u32 datPersonaGetHeroPersona_s16(s16 param_1);
#pragma alias FUN_0017ca10_u32 FUN_0017ca10
u32 FUN_0017ca10_u32(u32 param_1);


/* FUSION_GLOBALS */
u32 DAT_006ac9e8;
u32 DAT_006ad4b4;
float DAT_007cada4;
u32 DAT_007ce420;
u32 DAT_007ce4e8;
extern u8 DAT_006ac9d0[];
#pragma alias DAT_006acc60_abs DAT_006acc60
extern u8 DAT_006acc60_abs[];
u32 DAT_006acc60;
extern u8 DAT_006acc70[];
extern u8 DAT_006acc72[];
#pragma alias DAT_006acca0_abs DAT_006acca0
extern u16 DAT_006acca0_abs[];
u32 DAT_006acca0;
u32 DAT_006aedc0[];
u32 DAT_006aedc4[];
u32 DAT_006aee60;
u32 DAT_006aeea0;
u32 DAT_006aeee0;
u32 DAT_006aef00;
#pragma alias DAT_006aef00_abs DAT_006aef00
extern u8 DAT_006aef00_abs[];
u32 DAT_006aef30;
#pragma alias DAT_006aef30_abs DAT_006aef30
extern s16 DAT_006aef30_abs[];
u32 DAT_006aef40;
#pragma alias DAT_006aef40_abs DAT_006aef40
extern s16 DAT_006aef40_abs[];
u32 DAT_006aef50;
#pragma alias DAT_006aef50_abs DAT_006aef50
extern s16 DAT_006aef50_abs[];
u32 DAT_006aef60;
u32 DAT_006aef98;
u32 DAT_006aefa8;
u8 DAT_006aefb8[];
u32 DAT_006aefd0;
#pragma alias DAT_006aefd0_abs DAT_006aefd0
extern s16 DAT_006aefd0_abs[];
u32 DAT_006aeff0;
u32 DAT_006af000;
u32 DAT_006af004;
u32 DAT_006af008;
u32 DAT_006af010;
#pragma alias DAT_006af010_abs DAT_006af010
extern u8 DAT_006af010_abs[];
u32 DAT_006af0b0;
u32 DAT_006af140;
#pragma alias DAT_006af140_003fd570 DAT_006af140
extern int DAT_006af140_003fd570[];
typedef struct {
  f32 x, y, z, w;
} FclShopFloatQuad;
typedef union {
  FclShopFloatQuad vector;
  u8 *value[4];
} FclShopDataSet;
typedef struct {
  u8 *default_data;
  u32 pad04;
  u8 *alternate_data;
  u32 pad0c;
  u8 *entry_table;
  int entry_count;
} FclShopStockConfig;
#pragma alias fclShopStockConfig PTR_DAT_006ad4a0
extern FclShopStockConfig fclShopStockConfig;
FclShopDataSet DAT_006af170;
u32 DAT_006af180;
extern u16 DAT_006af180_abs[];
#pragma alias DAT_006af180_abs DAT_006af180
u32 DAT_006af188;
u32 DAT_006af18c;
u32 DAT_006af190;
u32 DAT_006af1c0;
u32 DAT_006af240;
u32 DAT_006af270;
u32 DAT_006af290;
u32 DAT_006af2b0;
u32 DAT_006af2d0;
u32 DAT_006af300;
u32 DAT_006af320;
#pragma alias fclShopEquipmentPairTable DAT_006af190
extern u16 fclShopEquipmentPairTable[];
#pragma alias fclShopEquipmentIndexTable DAT_006af1c0
extern u8 fclShopEquipmentIndexTable[];
#pragma alias fclShopEquipmentValues0 DAT_006af240
extern u16 fclShopEquipmentValues0[];
#pragma alias fclShopEquipmentValues1 DAT_006af270
extern u16 fclShopEquipmentValues1[];
#pragma alias fclShopEquipmentValues2 DAT_006af290
extern u16 fclShopEquipmentValues2[];
#pragma alias fclShopEquipmentValues3 DAT_006af2b0
extern u16 fclShopEquipmentValues3[];
#pragma alias fclShopEquipmentValues4 DAT_006af2d0
extern u16 fclShopEquipmentValues4[];
#pragma alias fclShopEquipmentValues5 DAT_006af300
extern u16 fclShopEquipmentValues5[];
#pragma alias fclShopEquipmentValues6 DAT_006af320
extern u16 fclShopEquipmentValues6[];
extern u32 DAT_006af3a0;
extern u8 DAT_006af3a0_abs[];
#pragma alias DAT_006af3a0_abs DAT_006af3a0
#pragma alias fclShopEmptyFormat DAT_006af3d0
extern char fclShopEmptyFormat[];
extern char DAT_007cd900;
u32 DAT_006af5e0;
u32 DAT_006af600;
u32 DAT_006af620;
u32 DAT_006af930;
extern float DAT_007cad74;
float DAT_007cad78;
float DAT_007cad80;
float DAT_007cad94;
float DAT_007caef0;
float DAT_007caf14;
float DAT_007caf38;
u32 DAT_007cd8f4;
f32 DAT_007cd8f8;
f32 DAT_007cd8fc;
f32 DAT_007cd908;
f32 DAT_007cd90c;
u32 DAT_007cd910;
u32 DAT_007cd918;
u32 DAT_007cd920;
u32 DAT_007cd928;
u32 DAT_007cd930;
u32 DAT_007cd932;
u32 DAT_007cd934;
u32 DAT_007cd936;
u32 DAT_007cd938;
u32 DAT_007cd940;
u32 DAT_007cd942;
u32 DAT_007cd944;
u32 DAT_007cd946;
u32 DAT_007cd948;
s16 DAT_007cd950;
s16 DAT_007cd952;
u32 DAT_007cd958;
u32 DAT_007cd95c;
u32 DAT_007cd960;
u32 DAT_007cd964;
u32 DAT_007cd968;
u32 DAT_007cd96c;
u32 DAT_007cd980;
u32 DAT_007cd988;
u32 DAT_007cd990;
u32 DAT_007cd998;
u32 DAT_007cd9a0;
u32 DAT_007cd9a8;
u32 DAT_007cd9b0;
u32 DAT_007cd9b8;
u32 DAT_007cd9c0;
u32 DAT_007cd9c8;
u32 DAT_007cd9f8;
u32 DAT_007cd9fc;
u32 DAT_007cda00;
u8 *DAT_007ce4e4;
u32 DAT_007e094e_y2;
u32 DAT_007e0952;
u32 DAT_007e0958_y2;
u32 DAT_007e095a;
#pragma alias DAT_007e0952_abs DAT_007e0952
#pragma alias DAT_007e095a_abs DAT_007e095a
extern u8 DAT_007e0952_abs[];
extern u8 DAT_007e095a_abs[];
u32 DAT_00960088;
code DAT_00960090;
code DAT_009600a0;
u32 DAT_0098967f;
u32 LAB_003eff84[];
u32 LAB_003f0748[];
u32 LAB_003f07f4[];
u32 LAB_003f23a8[];
u32 LAB_003fe35c[];
u32 LAB_003fee10[];
u32 LAB_00401910[];
u32 LAB_004019d0[];
u32 LAB_00401aa4[];
u32 LAB_00401b60[];
u32 LAB_00401bc4[];
u32 LAB_00401c48[];
u32 LAB_00401ea8[];
u32 LAB_00401fa8[];
u32 LAB_0040203c[];
u32 LAB_00402100[];
u32 LAB_0040370c[];
u32 LAB_00403b38[];
u32 LAB_00403d20[];
u32 LAB_00403ec0[];
u32 LAB_004046bc[];
u32 LAB_004062e0[];
u32 LAB_00406468[];
u32 LAB_0040c3c4[];
u32 PTR_DAT_006ac9ec[];
u32 PTR_DAT_006ac9f0[];
u32 PTR_DAT_006ad4a0[];
u32 PTR_DAT_006ad4b0[];
u32 PTR_DAT_007cd8f0[];
#pragma alias PTR_DAT_007cd8f0_ptr PTR_DAT_007cd8f0
extern u8 *PTR_DAT_007cd8f0_ptr;
u32 PTR_FUN_006aee00[];
u32 PTR_FUN_006aee20[];
u32 PTR_FUN_006aee40[];
u32 PTR_FUN_006af050[];
u32 PTR_FUN_006af070[];
u32 PTR_FUN_006af090[];
#pragma alias PTR_FUN_006af050_abs PTR_FUN_006af050
extern u8 PTR_FUN_006af050_abs[];
#pragma alias PTR_FUN_006af070_abs PTR_FUN_006af070
extern u8 PTR_FUN_006af070_abs[];
#pragma alias PTR_FUN_006af090_abs PTR_FUN_006af090
extern u8 PTR_FUN_006af090_abs[];
typedef struct {
  f32 x, y;
} FclShopFloatVector2;
typedef union {
  FclShopFloatVector2 vector;
  u8 *value[2];
} FclShopCallbackPair;
FclShopCallbackPair PTR_FUN_007cd970;
FclShopCallbackPair PTR_FUN_007cd978;
typedef struct {
  FclShopDataSet data;
  FclShopCallbackPair callbacks[2];
} FclShopCallbackData;
u32 PTR_LAB_007bbde0[];
u32 PTR_PTR_006ac9d4[];
u32 _DAT_006af180;
u32 _DAT_006af184;

#pragma alias FUN_0040ec20_y2 FUN_0040ec20
#pragma alias FUN_0040e3c0_y2 FUN_0040e3c0_y2
#pragma alias FUN_0040eb50_y2 FUN_0040eb50_y2
#pragma alias FUN_0040ebc0_y2 FUN_0040ebc0_y2
#pragma alias H_Maestro_00111c50_y2 H_Maestro_00111c50_y2
#pragma alias H_Maestro_SetAlphaMult_y2 H_Maestro_SetAlphaMult_y2
#pragma alias FUN_0040e3c0_i_y2 FUN_0040e3c0_i_y2
#pragma alias FUN_003b2cb0_i_y2 FUN_003b2cb0_i_y2
#pragma alias DAT_007ce420_y2 DAT_007ce420_y2
#pragma alias sinf_y2 sinf_y2
#pragma alias cosf_y2 cosf_y2
#pragma alias FUN_003b2cb0_y2 FUN_003b2cb0_y2


// HARVESTED 3D-42FF

// FUN_003EFF00


void FUN_003eff00(u64 param_1,u8 *param_2)
{
  u8 *puVar1;
  u8 *puVar2;
  u32 uStack_20[4];
  int iVar1;
  int iStack_4;

  puVar1 = FUN_003efff0_u64(param_1);
  iStack_4 = 0;
  while ((puVar2 = (u8 *)FUN_003f0350((int)puVar1,&iStack_4)) != 0) {
    iVar1 = *(int *)puVar2;
    if ((datGetLevel(1) & 0xff) < iVar1) {
      iStack_4 = iStack_4 - 1;
      break;
    }
  }
  *param_2 = (u8)iStack_4;
  param_2[1] = (u8)FUN_003f03e0_u64(param_1);
  *(u16 *)(param_2 + 2) = (u16)FUN_003f2510();
  iStack_4 = 0;
  FUN_003f01d0((int)puVar1,0,&iStack_4);
  *(u32 *)(param_2 + 4) = (u32)iStack_4;
}









/* Reconstructed the packed shop-date availability gate and all date-mode paths. */


#pragma alias fclShopSelectStockItemId FUN_003f0830


// Confirmed b210 floor: only five branch immediates differ at +136/+148/+160/+172/+184;
// our inner-switch exits target the final join, while retail targets the shared exit branch.














#pragma alias fclShopPopulateEquipmentEntry FUN_003f1ba0


// Confirmed b210 floor: only +128/+132 differ, with the signed halfword extension
// routed through $v0 here versus directly through $a0 in retail.

typedef struct {
  s16 id;
  u8 pad[3];
  s8 flags;
  s16 value;
} FclShopListEntry;






// W212: narrowing the maintained result to short measured nd187 -> nd227 and 416/432 -> 444/432; rejected as over-window.


// Retail sibling begins at 0x3f3280; comparator body reconstructed from 0x3f3280-0x3f33c8.


#pragma opt_loop_invariants reset
#pragma alias FUN_003f39a0_u32ret FUN_003f39a0
u32 FUN_003f39a0_u32ret(long param_1,long param_2,u32 param_3);






// Typed integer call views preserve the retail 32-bit ABI for these draw helpers.
#pragma alias FUN_003f7730_i FUN_003f7730
void FUN_003f7730_i(int,int,int,int,int);
#pragma alias FUN_003f5d10_i FUN_003f5d10
void FUN_003f5d10_i(int,int,int,int,int);
#pragma alias FUN_003f5f50_i FUN_003f5f50
void FUN_003f5f50_i(int,int,int,int,int);
#pragma alias FUN_003f7a80_i FUN_003f7a80
void FUN_003f7a80_i(int,int,int,int,int);










#undef auStack_30
#undef acStack_20
#undef sStack_10
#undef sStack_e
#undef sStack_c
#undef sStack_a
#undef acStack_8

#undef auStack_30
#undef acStack_20
#undef sStack_10
#undef sStack_e
#undef sStack_c
#undef sStack_a
#undef acStack_8







// Filled in from retail disassembly: sibling FUN_003f7fe0's pattern (3/3/1
// true-branch, 2/2/0 false-branch constants to FUN_003f55b0/FUN_003f5830)
// applies here too, except the "else" sub-case in each branch substitutes
// iVar6 (a computed draw-x offset) and iVar5 (a computed fade alpha) for
// param_1/param_3 - a background/unselected variant of the same draw call.



// Filled in from retail disassembly, same dispatch family as the sibling
// functions above (3/3/1 true-branch, 2/2/0 false-branch constants to
// func_003f55b0/func_003f5830). Residual: a register-bank floor (obj
// 1088B vs 1056B window); logic and constants verified against retail.



// Retyped params to match retail's dispatch to func_003f7d50/7fe0/8180
// (int coords/index, not u64); case 0xc/1 now byte-identical to retail.
// Residual: case 0x14's two adds route through a scratch reg instead of
// landing directly in $a0/$a1 - compiler scheduling floor.








// Window was wrongly 784B (should be 400B) - see FUN_003f9cb0 split below.
// Full logic rewritten from retail disasm: if/else order, switch-based
// dispatch, and int/long typing all fixed. Residual: register-bank
// choice for param_1/param_2 (s2/s1 in retail vs s5/s4 here).
// Exact remaining words are the +164/+168/+172 ordering of the $s3 sign extension
// and the independent initialization of $s5; their values and uses are identical.

// Hidden sibling: only referenced via FUN_003c7000(uVar7,0x3f9cb0,0) as a
// raw callback pointer literal in FUN_003f9e30 below, never via jal, so
// Ghidra's boundary scan absorbed it into FUN_003f9b20_y2's window (784B
// instead of the true 400B). Splitting it out here as its own function
// per the p3-window-nullsub-discovery Case C procedure.


#pragma alias fclShopCreateEquipmentItemList FUN_003f9e30























// W325 pragma sweep: opt_common_subs off nd91 -> nd89 (obj 260/272).






// W325 pragma sweep: opt_common_subs off nd156 -> nd131 (obj 440/448).












// W212: rotating the copied-table loop to retail's apparent branch target measured nd206 -> nd295 (488 -> 492 bytes); rejected.







// Confirmed pre-JAL setup-order floor: +160/+164/+168 contain the same address
// computation and signed extension, with retail materializing $a1 before $a0.


// W212: signed short result local measured nd94 -> nd117 and 240/240 -> 248/240; rejected as over-window.





// W325 pragma sweep: opt_common_subs off nd718 -> nd713 (obj 1004/1008).




// W212: signed-byte and typed-callback transfer measured nd914 -> nd972 (1344 -> 1320 bytes); rejected.
// W212: retaining the final callback across calls fixed the 0x100-byte frame but measured nd914 -> nd942 and 1344/1344 -> 1352/1344; rejected as over-window.
// W325 pragma sweep: opt_loop_invariants on nd953 -> nd939 (obj 1328/1344).












// Confirmed cyclic register-coloring floor: +60 through +100 use $a2/$a1 here
// where retail uses $a1/$a2; all five loads and their dataflow are otherwise identical.



















































// W325 pragma sweep: opt_common_subs off nd564 -> nd463 (obj 840/848).


// Confirmed b210 floor: only +0xd0 differs in commutative addu operand order
// (`addu $v0,$v1,$v0` versus `$v0,$v0,$v1`); all table loads and remaining words match.































// W325 pragma sweep: opt_loop_invariants on nd953 -> nd872 (obj 1460/1472).
#undef bStack_3c
#undef FORMAT_SHOP_RECORD_TEXT

// Addressing-signal audit: retail really uses the same two $gp-relative format-string
// addresses and the same $gp-relative float load. Only +440/+444/+448 call setup differs.





// Confirmed control-flow placement floor: +400 through +444 booleanizes the clamp
// switch here; a direct if/else measured worse (nd16 -> nd19) and was reverted.










// Typed callback values preserve retail's call setup order.


/* Measured with schedule on: opt_common_subs on/off gives 2772B/2748B (window 2992B); retained off. */
#pragma schedule off
#pragma opt_common_subs reset
#undef FUN_0040e3f0_y2





// W325 pragma sweep: opt_common_subs off nd1235 -> nd1212 (obj 2112/2112).











// W212: absolute u32 alias for DAT_006af930 measured nd290 -> nd295 (588 -> 592 bytes); rejected.

















































































typedef int (*code)();
/* FUSION_EXACT_PROTOS */
void FUN_0040e300_y2(u32 param_1,u32 param_2);
void FUN_0040e360(void);
void FUN_0040e390_y2(void);
#pragma alias FUN_0040e3c0_draw FUN_0040e3c0_y2
void FUN_0040e3c0_draw(int param_2,int param_3,float param_1,u8 param_4,int param_5,int param_6);
void FUN_0040e3f0_draw(float param_1,float param_2,float param_3,float param_4,int param_5,int param_6,
                   u8 param_7,int param_8,int param_9,int param_10,int param_11);
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
#pragma alias fclDrawSpriteEmit FUN_0040e3c0_draw
extern void fclDrawSpriteEmit(int param_1,int param_2,float param_3,int param_4,int param_5,int param_6);
s32 FUN_0040eb50_y2(float param_1,int param_2,int param_3,u8 param_4,int param_5,const void *param_6,int param_7);
s32 FUN_0040ebc0_y2(float param_1,int param_2,int param_3,int param_4,int param_5,const void *param_6,int param_7);
void FUN_0040ec20(u32 param_1,int param_2,u32 param_3,u32 param_4,u32 param_5,u64 param_6,u32 param_7,int param_8);
#pragma alias FUN_0040ec20_typed FUN_0040ec20
void FUN_0040eef0(int param_2,int param_3,float param_1,int param_4,int param_5,

                  int param_6);
u32 FUN_0040ec50();
u32 FUN_0040f030(int param_1,int param_2,int param_3);
u32 FUN_0040f430(int param_1,int param_2);
u32 FUN_0040f5d0(int param_1,int param_2,int param_3);
u64 FUN_0040fab0(u64 param_1,int param_2);
u64 FUN_0040fb90(u64 param_1,int param_2,int param_3);
void FUN_00521408(void *destination,s32 value,u32 size);
extern void *H_Cdvd_CacheFindFile_y2(const char *path,u32 *fileSize);
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

















#pragma opt_loop_invariants off











#undef asStack_80
#undef afStack_7c
#undef auStack_70
#undef auStack_60
#undef afStack_40


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
void H_Maestro_00111c50_y2(u32 task);
void H_Maestro_00111cb0(u32 task);
void H_Maestro_SetAlphaMult_y2(float alpha,u32 task);
void func_00111f10(u32 task,u32 value);
void func_00111ca0(u32 task,u32 value);
float fGpffff80d0;
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

#pragma alias sinf_fclShop sinf_y2
extern f32 sinf_fclShop(f32);
#pragma alias cosf_fclShop cosf_y2
extern f32 cosf_fclShop(f32);
/* FUSION_EXACT_PROTOS */
void FUN_0040e3c0_y2(float, s32, s32, u8, s32, s32);
void FUN_0040e3c0_i_y2(s32, s32, float, u8, s32, s32);
#pragma alias FUN_0040e3f0_typed FUN_0040e3f0_y2
void FUN_0040e3f0_typed(float, float, float, float, s32, s32, u8, s32, s32, s32, s32);
#pragma alias FUN_003b2cb0_typed FUN_003b2cb0_y2
void FUN_003b2cb0_typed(float, s32, s32, u32, u32, u32, u32, u32, u32);
void FUN_003b2cb0_i_y2(s32, s32, float, u32, u32, u32, u32, u32, u32);
void FUN_003eec60_y2(s32);
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
float DAT_007caee8;
u32 DAT_007cda4c;
u32 DAT_007cda58;
u32 DAT_007cda5a;
u32 DAT_007cda5c;
u32 DAT_007cda5e;
u32 DAT_007cda64;
#pragma alias DAT_007cda64_f DAT_007cda64
extern float DAT_007cda64_f;
u8 *DAT_007ce420_y2;
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
