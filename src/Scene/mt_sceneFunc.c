#include "temporary.h"
#include "Scene/mt_sceneFunc.h"
#include "Scene/mt_scene.h"
#include "Scene/resrcManager.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "libm.h"
#include "Event/Comu/comuFunction.h"

extern u32 DAT_007ce420;
extern u32 DAT_007ce66c;
#pragma alias DAT_0095b070_raw_abs DAT_0095b070
extern u8 DAT_0095b070_raw_abs[];
extern u32 FUN_0035bb40(u32 param_1,u32 param_2,u32 param_3);
extern u32 FUN_0017e050(long param_1,long param_2,long param_3);
extern u32 FUN_0027c2b0(void);
extern u32 FUN_0027c330(void);
extern u32 FUN_0016dce0(s16 param_1);
extern void K_Assert(const char *file,s32 line);
extern char D_006A3280[];
extern s8 datGetSocialLinkLevel(s16 socialLink);
extern u32 datSocialLinkLevelIsNotZero(s16 socialLink);
extern u32 func_00172a50(s32 socialLink);
extern u32 func_00171960(s32 socialLink,s16 value);
extern s8 func_0016dd20(s16 socialLink);
extern void func_0016e410(s16 socialLink,s8 level);
extern s32 func_003c2570(s32 socialLink);
extern s32 clndGetCurrentMonth(void);
extern s32 clndGetCurrentDay(void);
extern u32 func_003c2b40(s32 *month,s32 *day);
extern u32 func_003c2c50(u8 socialLink);
extern s8 func_0016df30(s16 socialLink);
extern u32 datGetNextExp(s16 pcId);
extern u32 func_0016d280(s32 exp);
extern s16 *datGetActiveSocialLinkPtr(void);
extern u32 func_003c3e80(s32 param_1);
extern u32 adminiGetNowSeqId(void);
extern u32 adminiGetNextSeqId(void);
extern s32 FUN_00172160(long socialLink);
extern s32 FUN_001717c0(long socialLink);
extern s32 FUN_00172660(long socialLink);
#pragma alias FUN_003be1c0_typed FUN_003be1c0
extern u32 FUN_003be1c0_typed(long param_1,s32 param_2);
#pragma alias FUN_003be1c0_wide FUN_003be1c0
extern u32 FUN_003be1c0_wide(long param_1,long param_2);
#pragma alias FUN_003be2a0_typed FUN_003be2a0
extern u32 FUN_003be2a0_typed();
#pragma alias FUN_003be020_typed FUN_003be020
extern u32 FUN_003be020_typed(u32 param_1, u8 *param_2, u32 param_3);
extern void adminiChangeSeq(s32 type,void *seq,s32 size,s32 arg4);
extern void FUN_0016f1f0(int param_1,int param_2);
#pragma alias FUN_0016f190_comu FUN_0016f190
extern u32 FUN_0016f190_comu(int param_1);
extern u32 DAT_0095b280;
extern u16* DAT_0095b2a0;
#pragma alias DAT_0095b2a0_abs DAT_0095b2a0
extern u8 DAT_0095b2a0_abs[];
#pragma alias DAT_0095b2a8_abs DAT_0095b2a8
extern u8 DAT_0095b2a8_abs[];
extern u32 DAT_0095b2a8;
#pragma alias DAT_0095b710_ptr_abs DAT_0095b710
extern u8 *DAT_0095b710_ptr_abs[];
extern u32 DAT_0095b730;
extern u32 LAB_003be5a0;

typedef int (*code)(); /* PC: unnamed varargs */
typedef u32 undefined3;
typedef u32 int3;
#define CONCAT13(a,b) ((((u32)(a) & 0xffu) << 24) | ((u32)(b) & 0x00ffffffu))
#ifndef CONCAT44
#define CONCAT44(hi,lo) ((((u64)(hi)) << 32) | (u32)(lo))
#endif
#ifndef ABS
#define ABS(x) ((x) < 0 ? -(x) : (x))
#endif
extern u32 DAT_0067ef00;
extern u32 DAT_006a2da0;
extern u32 DAT_006a2da8;
#pragma alias DAT_0067ef00_abs DAT_0067ef00
extern int DAT_0067ef00_abs[];
#pragma alias DAT_006a2da0_abs DAT_006a2da0
extern u8 DAT_006a2da0_abs[];
#pragma alias DAT_006a2da8_abs DAT_006a2da8
extern u8 DAT_006a2da8_abs[];
#pragma alias DAT_006a2f18_abs DAT_006a2f18
extern u8 DAT_006a2f18_abs[];
#pragma alias DAT_006a2f20_abs DAT_006a2f20
extern u8 DAT_006a2f20_abs[];
#pragma alias DAT_006a2f28_abs DAT_006a2f28
extern u8 DAT_006a2f28_abs[];
#pragma alias DAT_006a2f30_abs DAT_006a2f30
extern u8 DAT_006a2f30_abs[];
#pragma alias DAT_006a2f38_abs DAT_006a2f38
extern u8 DAT_006a2f38_abs[];
#pragma alias DAT_006a2f40_abs DAT_006a2f40
extern u8 DAT_006a2f40_abs[];
extern u32 DAT_006a2ed8;
extern u32 DAT_006a2ee0;
extern u32 DAT_006a2ee8;
extern u32 DAT_006a2ef0;
extern u32 DAT_006a2ef8;
extern u32 DAT_006a2f00;
extern u32 DAT_006a2f08;
extern u32 DAT_006a2f10;
#pragma alias DAT_006a2ed8_abs DAT_006a2ed8
extern u8 DAT_006a2ed8_abs[];
#pragma alias DAT_006a2ee0_abs DAT_006a2ee0
extern u8 DAT_006a2ee0_abs[];
#pragma alias DAT_006a2ee8_abs DAT_006a2ee8
extern u8 DAT_006a2ee8_abs[];
#pragma alias DAT_006a2ef0_abs DAT_006a2ef0
extern u8 DAT_006a2ef0_abs[];
#pragma alias DAT_006a2ef8_abs DAT_006a2ef8
extern u8 DAT_006a2ef8_abs[];
#pragma alias DAT_006a2f00_abs DAT_006a2f00
extern u8 DAT_006a2f00_abs[];
#pragma alias DAT_006a2f08_abs DAT_006a2f08
extern u8 DAT_006a2f08_abs[];
#pragma alias DAT_006a2f10_abs DAT_006a2f10
extern u8 DAT_006a2f10_abs[];
extern u32 DAT_006a2f18;
extern u32 DAT_006a2f20;
extern u32 DAT_006a2f28;
extern u32 DAT_006a2f30;
extern u32 DAT_006a2f38;
extern u32 DAT_006a2f40;
extern u32 DAT_006a2f48;
extern char DAT_006a2e10[];
extern char DAT_006a2df0[];
extern u32 DAT_006a2f50;
extern f32 DAT_007cad5c;
extern f32 DAT_007cada0;
extern u32 DAT_007caea4;
extern f32 DAT_007caf1c;
extern f32 DAT_007cb0b8;
extern f32 DAT_007cd560;
extern f32 DAT_007cd564;
extern u16 DAT_007ce658;
extern s16 DAT_007ce65c;
extern u16 DAT_007ce660;
extern u16 DAT_007ce664;
extern u32 DAT_007ce668;
extern f32 DAT_0095aff0;
extern f32 DAT_0095aff4;
extern f32 DAT_0095aff8;
extern f32 DAT_0095affc;
#pragma alias DAT_0095aff0_abs DAT_0095aff0
extern u8 DAT_0095aff0_abs[];
extern u32 DAT_0095b000;
extern u16 * DAT_0095b070;
#pragma alias DAT_0095b070_ptr DAT_0095b070
extern u8 DAT_0095b070_ptr[];
extern u32 DAT_0095b074;
extern u32 DAT_0095b078;
extern u32 DAT_0095b0f8;
extern u32 DAT_0095b178;
extern u32 DAT_0095b1f8;
extern u32 DAT_0095b204;
extern u32 DAT_0095b208;
extern u32 DAT_0095b20c;
extern u32 DAT_0095b210;
extern u32 DAT_0095b218;
extern u32 DAT_0095b21c;
extern u32 DAT_0095b220;
extern u32 DAT_0095b224;
extern u32 DAT_0095b238;
extern u32 DAT_0095b240;
extern u32 DAT_0095b244;
extern u32 DAT_0095b248;
extern u32 DAT_0095b24c;
extern u32 DAT_0095b254;
extern u32 DAT_0095b258;
extern u32 DAT_0095b25c;
extern u32 DAT_0095b260;
extern u32 DAT_0095b264;
extern u32 DAT_0095b268;
extern u32 DAT_0095b26c;
extern u32 DAT_0095b270;
extern u32 DAT_0095b274;
extern u32 DAT_0095b278;
extern u32 DAT_0095b27c;
extern u32 DAT_0095b284;
extern u32 DAT_0095b288;
extern u32 * DAT_0095b28c;
extern u32 DAT_0095b290;
extern u32 DAT_0095b294;
extern u32 DAT_0095b298;
extern u16 * DAT_0095b29c;
extern u32 DAT_0095b2a4;
extern u32 DAT_0095b2b4;
extern u32 DAT_0095b434;
extern u32 DAT_0095b440;
extern u32 DAT_0095b444;
extern u32 DAT_0095b448;
extern u32 DAT_0095b44c;
extern u32 DAT_0095b454;
extern u32 DAT_0095b458;
extern u32 DAT_0095b45c;
extern u32 DAT_0095b460;
extern u32 DAT_0095b474;
extern u32 DAT_0095b47c;
extern u32 DAT_0095b480;
extern u32 DAT_0095b484;
extern u32 DAT_0095b488;
extern u32 DAT_0095b4a0;
extern u32 DAT_0095b4a8;
extern u32 DAT_0095b4b4;
extern u32 DAT_0095b4c0;
extern u32 DAT_0095b4d0;
extern u32 DAT_0095b4d4;
extern u32 DAT_0095b4e0;
extern u32 DAT_0095b4f0;
extern u32 DAT_0095b568;
extern u32 DAT_0095b5e0;
extern u32 DAT_0095b658;
#pragma alias DAT_0095b658_ptr DAT_0095b658
extern u8 DAT_0095b658_ptr[];
extern u32 DAT_0095b65c;
extern u32 DAT_0095b660;
#pragma alias DAT_0095b660_ptr DAT_0095b660
extern u8 DAT_0095b660_ptr[];
extern u32 DAT_0095b664;
extern u32 DAT_0095b668;
#pragma alias DAT_0095b668_ptr DAT_0095b668
extern u8 DAT_0095b668_ptr[];
extern u32 DAT_0095b66c;
extern u32 DAT_0095b670;
extern u32 DAT_0095b674;
extern u32 DAT_0095b678;
extern u32 DAT_0095b67c;
extern u32 DAT_0095b680;
extern u32 DAT_0095b684;
extern u32 DAT_0095b688;
extern u32 DAT_0095b68c;
extern u32 DAT_0095b690;
extern u32 DAT_0095b694;
extern u32 DAT_0095b698;
extern u32 DAT_0095b69c;
extern u32 DAT_0095b6a0;
extern u32 DAT_0095b6a4;
extern u32 DAT_0095b6a8;
extern u32 DAT_0095b6ac;
extern u32 DAT_0095b6b0;
extern u32 DAT_0095b6b4;
extern u32 DAT_0095b6b8;
extern u32 DAT_0095b6bc;
extern u32 DAT_0095b6c0;
extern u32 DAT_0095b6c4;
extern u32 DAT_0095b6c8;
extern u32 DAT_0095b6cc;
extern u32 DAT_0095b6d0;
extern u32 DAT_0095b6d4;
extern u32 DAT_0095b6d8;
extern u32 DAT_0095b6dc;
extern u32 DAT_0095b6e0;
extern u32 DAT_0095b6e4;
extern u32 DAT_0095b6e8;
extern u32 DAT_0095b6ec;
extern u32 DAT_0095b6f0;
extern u32 * DAT_0095b6f4;
extern u32 DAT_0095b6f8;
extern u32 DAT_0095b6fc;
extern u32 DAT_0095b700;
extern u32 DAT_0095b704;
extern u32 DAT_0095b708;
extern u32 DAT_0095b70c;
extern u32 DAT_0095b710;
extern u32 DAT_0095b714;
extern u32 DAT_0095b718;
extern u32 DAT_0095b71c;
extern u32 DAT_0095b720;
extern u32 DAT_0095b724;
extern u32 DAT_0095b728;
#pragma alias DAT_0095b070_abs DAT_0095b070
extern u8 DAT_0095b070_abs[];

#pragma alias DAT_0095b074_abs DAT_0095b074
#pragma alias DAT_0095b078_abs DAT_0095b078
#pragma alias DAT_0095b0f8_abs DAT_0095b0f8
#pragma alias DAT_0095b178_abs DAT_0095b178
#pragma alias DAT_0095b1f8_abs DAT_0095b1f8
#pragma alias DAT_0095b204_abs DAT_0095b204
#pragma alias DAT_0095b208_abs DAT_0095b208
#pragma alias DAT_0095b20c_abs DAT_0095b20c
#pragma alias DAT_0095b210_abs DAT_0095b210
#pragma alias DAT_0095b218_abs DAT_0095b218
#pragma alias DAT_0095b21c_abs DAT_0095b21c
#pragma alias DAT_0095b220_abs DAT_0095b220
#pragma alias DAT_0095b224_abs DAT_0095b224
#pragma alias DAT_0095b238_abs DAT_0095b238
#pragma alias DAT_0095b240_abs DAT_0095b240
#pragma alias DAT_0095b244_abs DAT_0095b244
#pragma alias DAT_0095b248_abs DAT_0095b248
#pragma alias DAT_0095b24c_abs DAT_0095b24c
#pragma alias DAT_0095b254_abs DAT_0095b254
#pragma alias DAT_0095b258_abs DAT_0095b258
#pragma alias DAT_0095b25c_abs DAT_0095b25c
#pragma alias DAT_0095b260_abs DAT_0095b260
#pragma alias DAT_0095b264_abs DAT_0095b264
#pragma alias DAT_0095b268_abs DAT_0095b268
#pragma alias DAT_0095b26c_abs DAT_0095b26c
#pragma alias DAT_0095b270_abs DAT_0095b270
#pragma alias DAT_0095b274_abs DAT_0095b274
#pragma alias DAT_0095b278_abs DAT_0095b278
#pragma alias DAT_0095b27c_abs DAT_0095b27c
#pragma alias DAT_0095b284_abs DAT_0095b284
#pragma alias DAT_0095b288_abs DAT_0095b288
#pragma alias DAT_0095b290_abs DAT_0095b290
#pragma alias DAT_0095b294_abs DAT_0095b294
#pragma alias DAT_0095b298_abs DAT_0095b298
#pragma alias DAT_0095b2a4_abs DAT_0095b2a4
#pragma alias DAT_0095b2b4_abs DAT_0095b2b4
#pragma alias DAT_0095b434_abs DAT_0095b434
#pragma alias DAT_0095b440_abs DAT_0095b440
#pragma alias DAT_0095b444_abs DAT_0095b444
#pragma alias DAT_0095b448_abs DAT_0095b448
#pragma alias DAT_0095b44c_abs DAT_0095b44c
#pragma alias DAT_0095b454_abs DAT_0095b454
#pragma alias DAT_0095b458_abs DAT_0095b458
#pragma alias DAT_0095b45c_abs DAT_0095b45c
#pragma alias DAT_0095b460_abs DAT_0095b460
#pragma alias DAT_0095b474_abs DAT_0095b474
#pragma alias DAT_0095b47c_abs DAT_0095b47c
#pragma alias DAT_0095b480_abs DAT_0095b480
#pragma alias DAT_0095b484_abs DAT_0095b484
#pragma alias DAT_0095b488_abs DAT_0095b488
#pragma alias DAT_0095b4a0_abs DAT_0095b4a0
#pragma alias DAT_0095b4a8_abs DAT_0095b4a8
#pragma alias DAT_0095b4b4_abs DAT_0095b4b4
#pragma alias DAT_0095b4c0_abs DAT_0095b4c0
#pragma alias DAT_0095b4d0_abs DAT_0095b4d0
#pragma alias DAT_0095b4d4_abs DAT_0095b4d4
#pragma alias DAT_0095b4e0_abs DAT_0095b4e0
#pragma alias DAT_0095b4f0_abs DAT_0095b4f0
#pragma alias DAT_0095b568_abs DAT_0095b568
#pragma alias DAT_0095b5e0_abs DAT_0095b5e0
#pragma alias DAT_0095b658_abs DAT_0095b658
#pragma alias DAT_0095b65c_abs DAT_0095b65c
#pragma alias DAT_0095b660_abs DAT_0095b660
#pragma alias DAT_0095b664_abs DAT_0095b664
#pragma alias DAT_0095b668_abs DAT_0095b668
#pragma alias DAT_0095b66c_abs DAT_0095b66c
#pragma alias DAT_0095b670_abs DAT_0095b670
#pragma alias DAT_0095b674_abs DAT_0095b674
#pragma alias DAT_0095b678_abs DAT_0095b678
#pragma alias DAT_0095b67c_abs DAT_0095b67c
#pragma alias DAT_0095b680_abs DAT_0095b680
#pragma alias DAT_0095b684_abs DAT_0095b684
#pragma alias DAT_0095b688_abs DAT_0095b688
#pragma alias DAT_0095b68c_abs DAT_0095b68c
#pragma alias DAT_0095b690_abs DAT_0095b690
#pragma alias DAT_0095b694_abs DAT_0095b694
#pragma alias DAT_0095b698_abs DAT_0095b698
#pragma alias DAT_0095b69c_abs DAT_0095b69c
#pragma alias DAT_0095b6a0_abs DAT_0095b6a0
#pragma alias DAT_0095b6a4_abs DAT_0095b6a4
#pragma alias DAT_0095b6a8_abs DAT_0095b6a8
#pragma alias DAT_0095b6ac_abs DAT_0095b6ac
#pragma alias DAT_0095b6b0_abs DAT_0095b6b0
#pragma alias DAT_0095b6b4_abs DAT_0095b6b4
#pragma alias DAT_0095b6b8_abs DAT_0095b6b8
#pragma alias DAT_0095b6bc_abs DAT_0095b6bc
#pragma alias DAT_0095b6c0_abs DAT_0095b6c0
#pragma alias DAT_0095b6c4_abs DAT_0095b6c4
#pragma alias DAT_0095b6c8_abs DAT_0095b6c8
#pragma alias DAT_0095b6cc_abs DAT_0095b6cc
#pragma alias DAT_0095b6d0_abs DAT_0095b6d0
#pragma alias DAT_0095b6d4_abs DAT_0095b6d4
#pragma alias DAT_0095b6d8_abs DAT_0095b6d8
#pragma alias DAT_0095b6dc_abs DAT_0095b6dc
#pragma alias DAT_0095b6e0_abs DAT_0095b6e0
#pragma alias DAT_0095b6e4_abs DAT_0095b6e4
#pragma alias DAT_0095b6e8_abs DAT_0095b6e8
#pragma alias DAT_0095b6ec_abs DAT_0095b6ec
#pragma alias DAT_0095b6f0_abs DAT_0095b6f0
#pragma alias DAT_0095b6f4_abs DAT_0095b6f4
#pragma alias DAT_0095b6f8_abs DAT_0095b6f8
#pragma alias DAT_0095b6fc_abs DAT_0095b6fc
#pragma alias DAT_0095b700_abs DAT_0095b700
#pragma alias DAT_0095b704_abs DAT_0095b704
#pragma alias DAT_0095b708_abs DAT_0095b708
#pragma alias DAT_0095b70c_abs DAT_0095b70c
#pragma alias DAT_0095b710_abs DAT_0095b710
#pragma alias DAT_0095b714_abs DAT_0095b714
#pragma alias DAT_0095b718_abs DAT_0095b718
#pragma alias DAT_0095b71c_abs DAT_0095b71c
#pragma alias DAT_0095b720_abs DAT_0095b720
#pragma alias DAT_0095b724_abs DAT_0095b724
#pragma alias DAT_0095b728_abs DAT_0095b728
extern u8 DAT_0095b070_abs[];
extern u8 DAT_0095b074_abs[];
extern u8 DAT_0095b078_abs[];
extern u8 DAT_0095b0f8_abs[];
extern u8 DAT_0095b178_abs[];
extern u8 DAT_0095b1f8_abs[];
extern u8 DAT_0095b204_abs[];
extern u8 DAT_0095b208_abs[];
extern u8 DAT_0095b20c_abs[];
extern u8 DAT_0095b210_abs[];
extern u8 DAT_0095b218_abs[];
extern u8 DAT_0095b21c_abs[];
extern u8 DAT_0095b220_abs[];
extern u8 DAT_0095b224_abs[];
extern u8 DAT_0095b238_abs[];
extern u8 DAT_0095b240_abs[];
extern u8 DAT_0095b244_abs[];
extern u8 DAT_0095b248_abs[];
extern u8 DAT_0095b24c_abs[];
extern u8 DAT_0095b254_abs[];
extern u8 DAT_0095b258_abs[];
extern u8 DAT_0095b25c_abs[];
extern u8 DAT_0095b260_abs[];
extern u8 DAT_0095b264_abs[];
extern u8 DAT_0095b268_abs[];
extern u8 DAT_0095b26c_abs[];
extern u8 DAT_0095b270_abs[];
extern u8 DAT_0095b274_abs[];
extern u8 DAT_0095b278_abs[];
extern u8 DAT_0095b27c_abs[];
extern u8 DAT_0095b284_abs[];
extern u8 DAT_0095b288_abs[];
extern u8 DAT_0095b290_abs[];
extern u8 DAT_0095b294_abs[];
extern u8 DAT_0095b298_abs[];
extern u8 DAT_0095b2a4_abs[];
extern u8 DAT_0095b2b4_abs[];
extern u8 DAT_0095b434_abs[];
extern u8 DAT_0095b440_abs[];
extern u8 DAT_0095b444_abs[];
extern u8 DAT_0095b448_abs[];
extern u8 DAT_0095b44c_abs[];
extern u8 DAT_0095b454_abs[];
extern u8 DAT_0095b458_abs[];
extern u8 DAT_0095b45c_abs[];
extern u8 DAT_0095b460_abs[];
extern u8 DAT_0095b474_abs[];
extern u8 DAT_0095b47c_abs[];
extern u8 DAT_0095b480_abs[];
extern u8 DAT_0095b484_abs[];
extern u8 DAT_0095b488_abs[];
extern u8 DAT_0095b4a0_abs[];
extern u8 DAT_0095b4a8_abs[];
extern u8 DAT_0095b4b4_abs[];
extern u8 DAT_0095b4c0_abs[];
extern u8 DAT_0095b4d0_abs[];
extern u8 DAT_0095b4d4_abs[];
extern u8 DAT_0095b4e0_abs[];
extern u8 DAT_0095b4f0_abs[];
extern u8 DAT_0095b568_abs[];
extern u8 DAT_0095b5e0_abs[];
extern u8 DAT_0095b658_abs[];
extern u8 DAT_0095b65c_abs[];
extern u8 DAT_0095b660_abs[];
extern u8 DAT_0095b664_abs[];
extern u8 DAT_0095b668_abs[];
extern u8 DAT_0095b66c_abs[];
extern u8 DAT_0095b670_abs[];
extern u8 DAT_0095b674_abs[];
extern u8 DAT_0095b678_abs[];
extern u8 DAT_0095b67c_abs[];
extern u8 DAT_0095b680_abs[];
extern u8 DAT_0095b684_abs[];
extern u8 DAT_0095b688_abs[];
extern u8 DAT_0095b68c_abs[];
extern u8 DAT_0095b690_abs[];
extern u8 DAT_0095b694_abs[];
extern u8 DAT_0095b698_abs[];
extern u8 DAT_0095b69c_abs[];
extern u8 DAT_0095b6a0_abs[];
extern u8 DAT_0095b6a4_abs[];
extern u8 DAT_0095b6a8_abs[];
extern u8 DAT_0095b6ac_abs[];
extern u8 DAT_0095b6b0_abs[];
extern u8 DAT_0095b6b4_abs[];
extern u8 DAT_0095b6b8_abs[];
extern u8 DAT_0095b6bc_abs[];
extern u8 DAT_0095b6c0_abs[];
extern u8 DAT_0095b6c4_abs[];
extern u8 DAT_0095b6c8_abs[];
extern u8 DAT_0095b6cc_abs[];
extern u8 DAT_0095b6d0_abs[];
extern u8 DAT_0095b6d4_abs[];
extern u8 DAT_0095b6d8_abs[];
extern u8 DAT_0095b6dc_abs[];
extern u8 DAT_0095b6e0_abs[];
extern u8 DAT_0095b6e4_abs[];
extern u8 DAT_0095b6e8_abs[];
extern u8 DAT_0095b6ec_abs[];
extern u8 DAT_0095b6f0_abs[];
extern u8 DAT_0095b6f4_abs[];
extern u8 DAT_0095b6f8_abs[];
extern u8 DAT_0095b6fc_abs[];
extern u8 DAT_0095b700_abs[];
extern u8 DAT_0095b704_abs[];
extern u8 DAT_0095b708_abs[];
extern u8 DAT_0095b70c_abs[];
extern u8 DAT_0095b710_abs[];
extern u8 DAT_0095b714_abs[];
extern u8 DAT_0095b718_abs[];
extern u8 DAT_0095b71c_abs[];
extern u8 DAT_0095b720_abs[];
extern u8 DAT_0095b724_abs[];
extern u8 DAT_0095b728_abs[];

 

extern code DAT_00960178;
extern code DAT_0096017c;
extern code DAT_00960184;
extern u8 * PTR_s_event_SiteibiEvent_bf_007cd570;
extern u8 * PTR_s_event_comuPack_pak_007cd568;
extern u8 * PTR_s_event_comuTable_bin_007cd56c;
extern u8 * PTR_s_icon_ICON1_EPL_006a3130[];
extern u16 * puGpffffa850;
extern float fGpffff8228;
extern code DAT_00960178;
extern code DAT_0096017c;
extern code DAT_00960184;

extern float FUN_004c69f0(void *dst, const void *src);
#pragma alias FUN_003951d0_i32 FUN_003951d0
extern int FUN_003951d0_i32(int param_1);
extern float FUN_004c6ac0(const void *param_1);
#pragma alias FUN_004c6ac0_scene_vec FUN_004c6ac0
extern float FUN_004c6ac0_scene_vec(const RwV3d *param_1);
#pragma alias FUN_004c69f0_scene_typed FUN_004c69f0
extern float FUN_004c69f0_scene_typed(float *dst,const float *src);
#pragma alias FUN_0052e9a0_scene_typed FUN_0052e9a0
extern u32 FUN_0052e9a0_scene_typed(u32 value);
#pragma alias FUN_005318a0_scene_typed FUN_005318a0
extern float FUN_005318a0_scene_typed(u32 value);
typedef struct SceneVecBits {
  u64 xy;
  float z;
} __attribute__((packed)) SceneVecBits;
#pragma alias DAT_006a2f48_abs DAT_006a2f48
extern SceneVecBits DAT_006a2f48_abs[];
#pragma alias DAT_006a2f50_abs DAT_006a2f50
extern float DAT_006a2f50_abs[];
void FUN_003bcc80(void);
void FUN_003bceb0(int param);
void FUN_0034fd70(Model* mdl, s32 type);
void FUN_003bc940(void);
void FUN_003b9610(Resrc* param);
void FUN_003bb7a0(Resrc* param);

typedef struct ResrcType7 ResrcType7;
struct ResrcType7
{
    Resrc base;
    u8 unkData_100[8];
    s32 unk_108;
};

typedef struct SceneInterpWork SceneInterpWork;
struct SceneInterpWork
{
  u8 pad0[0x10];
  float value10;
  float value14;
  float value18;
  u8 pad1[0xc];
  u32 flags28;
  u8 pad2[0x38];
  float value64;
  float value68;
  float value6c;
  float value70;
  float value74;
  float value78;
  u8 value7c;
  u8 value7d;
  u8 pad3[2];
  u32 value80;
  u32 value84;
};



/* Region 0x390000-0x3CFFFF recovered prototypes */
void* MT_SceneFunc_UpdateSceneMngTask(KwlnTask* sceneMngTask);
void MT_SceneFunc_DestroySceneMngTask(KwlnTask* sceneMngTask);
void* MT_SceneFunc_UpdateSceneMngDrawTask(KwlnTask* sceneMngDrawTask);
KwlnTask* MT_SceneFunc_CreateTasks();
u32 FUN_003b88c0(float param_1,Resrc *param_2,u32 *param_3,u32 param_4,u32 param_5);
#pragma alias FUN_003b88c0_scene FUN_003b88c0
extern u32 FUN_003b88c0_scene(Resrc *param_1,u32 param_2,float param_3,u32 param_4);
u32 FUN_003b89f0(u32 param_1,u32 param_2,float param_3,u32 param_4);
u8 FUN_003b8a60(SceneInterpWork *param_1,float *param_2,u32 param_3,u8 param_4);
u32  FUN_003b8b30(u64 param_1,float *param_2,u32 param_3,u8 param_4);
u32 FUN_003b8c30(u64 param_1,float *param_2,u32 param_3);
u32 FUN_003b8ce0(u32 param_1,u8 param_2,u32 param_3,u32 param_4);
#pragma alias FUN_003b8ce0_scene FUN_003b8ce0
extern u64 FUN_003b8ce0_scene(u32 param_1,u64 param_2,u64 param_3,u64 param_4);
u64 FUN_003b8e10(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
u32 FUN_003b8e80(u32 param_1,float param_2,u32 param_3);
u32 FUN_003b8f30(void);
u32  FUN_003b8ff0(u32 param_1,u32 param_2,u32 param_3,u32 param_4,
                  u32 param_5,int param_6,float param_7);
 #pragma alias FUN_003b8ff0_typed FUN_003b8ff0
extern u32 FUN_003b8ff0_typed(u32 param_1,u32 param_2,u32 param_3,u32 param_4,
                               u32 param_5,u32 param_6,float param_7);
u32  FUN_003b91c0(u32 param_1,u32 param_2,u32 param_3,u32 param_4,
                  u32 param_5,u32 param_6,float param_7);
u32  FUN_003b9260(u32 *param_1,u32 param_2,u32 param_3,u32 param_4,  u32 param_5,u32 param_6,float param_7);
#pragma alias FUN_003b9260_typed FUN_003b9260
extern u32 FUN_003b9260_typed(u32 *param_1,u32 param_2,u32 param_3,u32 param_4,  u32 param_5,u32 param_6,float param_7);
u32  FUN_003b9320(u32 param_1,u32 param_2,u32 param_3,u32 param_4,  u32 param_5,u32 param_6,float param_7);
void FUN_003b93c0(u32 param_1,short param_2,short param_3,short param_4,

                 short param_5);
#pragma alias FUN_003b8ff0_scene FUN_003b8ff0
extern u32 FUN_003b8ff0_scene(float param_1,u32 param_2,u32 param_3,u16 param_4,u16 param_5,u32 param_6,u32 param_7);
#pragma alias FUN_00530da0_scene FUN_00530da0
extern u32 FUN_00530da0_scene(float param_1);
#pragma alias FUN_003bc0e0_scene FUN_003bc0e0
extern float FUN_003bc0e0_scene(char *param_1);
#pragma alias DAT_00960178_abs DAT_00960178
extern code DAT_00960178_abs[];
#pragma alias DAT_0096017c_abs DAT_0096017c
extern code DAT_0096017c_abs[];
#pragma alias FUN_00100d80_typed_scene FUN_00100d80
extern void *FUN_00100d80_typed_scene(const char *param_1,u32 param_2);
extern void FUN_005225f8(u32 base, int count, int size, int (*cmp)(int *, int *));

// Note: FUN_003bd130 keeps an absolute table base in retail.
#pragma alias DAT_0095b000_abs DAT_0095b000
extern u8 DAT_0095b000_abs[];

extern void FUN_0019d3f0(const char *param_1,u32 param_2);
#pragma alias FUN_003b9260_scene FUN_003b9260
extern u32 FUN_003b9260_scene(float param_1,u32 param_2,u32 param_3,u16 param_4,u16 param_5,u32 param_6,u32 param_7);
u32 FUN_003b9500(Resrc* param_1,int param_2);
u32 FUN_003b9550(u64 param_1,int param_2);
u32 FUN_003b95a0(void);
void FUN_003b9610(Resrc* param_1);
u32 FUN_003baa70(char *param_1);
u32 FUN_003bac40(Resrc *param_1,u32 param_2);
u32 FUN_003bb010(u64 param_1,u32 param_2);
void FUN_003bb060(u16 param_1,u8 param_2);
u32 FUN_003bb0c0(u16* param_1,int param_2);
u32 FUN_003bb180(u16 param_1,int param_2);
u32  FUN_003bb1d0(u16 param_1,u8 param_2,u8 param_3,u16 param_4,  u16 param_5);
u32 FUN_003bb280(void);
void FUN_003bb340(void);
#pragma alias FUN_004c31b0_sceneFunc FUN_004c31b0
extern void FUN_004c31b0_sceneFunc(RwMatrix *matrix, const RwV3d *axis,
                                   f32 angle, s32 mode);
#pragma alias FUN_001a4580_sceneF FUN_001a4580
extern void FUN_001a4580_sceneF(int handle, float value);
#pragma alias FUN_003bc900_sceneI FUN_003bc900
extern int FUN_003bc900_sceneI(float *out);
void FUN_003bb390(u32 param_2,u16 param_3,float param_1);
void FUN_003bb400(u32 param_1);
void FUN_003bb450(float *param_2,float param_1,float param_3,float param_4,float param_5,float *param_6);
#pragma alias FUN_003bb450_scene_typed FUN_003bb450
extern void FUN_003bb450_scene_typed(float *param_1,float param_2,float param_3,float param_4,float param_5,float *param_6);
void FUN_003bb620(u32 *param_2,int param_3,float param_1);
void FUN_003bb7a0(Resrc* param_1);
void FUN_003bb9b0(float *param_1);
#pragma alias FUN_003bb9b0_scene_typed FUN_003bb9b0
extern void FUN_003bb9b0_scene_typed(float *param_1);
void FUN_003bba70(int param_1);
void FUN_003bbaa0(float *param_1,float *param_2,float *param_3);
#pragma alias FUN_003bbaa0_scene_typed FUN_003bbaa0
extern void FUN_003bbaa0_scene_typed(float *param_1, float *param_2, float *param_3);
#pragma alias FUN_003baa70_scene_typed FUN_003baa70
extern u32 FUN_003baa70_scene_typed(char *param_1);
/* W418 negative: routing raw FUN_004c69f0/FUN_004c6ac0 calls through typed float aliases in FUN_003b9610/FUN_003bc220 produced no metric changes; reverted. */
void FUN_003bbb90(const float *param_1,float *param_2);
void FUN_003bbc90(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,  float *param_6,float *param_7);
void FUN_003bbd40(float param_1,char *param_2,float *param_3);
float FUN_003bbed0(u32 param_3,float param_1,float param_2);
float FUN_003bbfd0(float param_1,float param_2,float *param_3,float *param_4,
                  float *param_5,float *param_6,float *param_7);
float FUN_003bc0e0(char *param_1);
float FUN_003bc220(char *param_1,float param_2,float param_3,float *param_4,u32 *param_5);
/* Retail call: FUN_003b8ff0 + 0x160. */
#pragma alias FUN_00318770_scene_typed FUN_00318770
extern void FUN_00318770_scene_typed(u32 param_1, u16 param_2, float param_3);
// Retail animation helpers use the model/slot/id widths directly.
#pragma alias FUN_003186e0_scene_typed FUN_003186e0
extern u32 FUN_003186e0_scene_typed(u32 param_1, u16 param_2, s16 param_3);
#pragma alias FUN_003182d0_scene_typed FUN_003182d0
extern u32 FUN_003182d0_scene_typed(u32 param_1, u16 param_2, s16 param_3,
                                    u16 param_4, u16 param_5);
#pragma alias FUN_003189f0_scene_typed FUN_003189f0
extern void FUN_003189f0_scene_typed(u32 param_1, u16 param_2, float param_3);
/* Retail calls: FUN_003bc220 + 0x1e8, + 0x494. */
#pragma alias FUN_003bbb90_scene_typed FUN_003bbb90
extern void FUN_003bbb90_scene_typed(const float *param_1, u32 *param_2);
/* Retail calls: FUN_003bbd40 + 0x0ac, + 0x178; FUN_003bc220 + 0x110, + 0x138, + 0x2a0, + 0x2d8, + 0x3e0, + 0x408; FUN_003bc730 + 0x0e0, + 0x118. */
#pragma alias FUN_003bbc90_scene_typed FUN_003bbc90
extern void FUN_003bbc90_scene_typed(float param_1,...);
/* Retail call: FUN_003bbed0 + 0x0d4. */
#pragma alias FUN_003bbd40_scene_typed FUN_003bbd40
extern void FUN_003bbd40_scene_typed(char *param_1,float param_2,float *param_3);
/* Retail calls: FUN_003b9610 + 0x52c, + 0x978. */
#pragma alias FUN_003bbed0_scene_typed FUN_003bbed0
extern float FUN_003bbed0_scene_typed(float param_1,float param_2,...);
/* Retail call: FUN_003bc0e0 + 0x0d8. */
#pragma alias FUN_003bbfd0_scene_typed FUN_003bbfd0
extern float FUN_003bbfd0_scene_typed(float param_1,float param_2,...);
/* Retail call: FUN_003b9610 + 0x604. */
#pragma alias FUN_003bc220_scene_typed FUN_003bc220
extern float FUN_003bc220_scene_typed(char *param_1,float param_2,float param_3,...);
float FUN_003bc730(char *param_1,int param_2);
int FUN_003bc8f0(char *param_1);
u8 FUN_003bc900(float *param_1);
void FUN_003bc940(void);
void FUN_003bcbf0(int param_1,int param_2);
void FUN_003bcc80(void);
int FUN_003bcda0(int *param_1,int *param_2);
void FUN_003bceb0(int param_1);
void FUN_003bd130(void);
u32 FUN_003bd1c0(u32 param_1);
#pragma alias FUN_003bd1c0_mt FUN_003bd1c0
extern u32 FUN_003bd1c0_mt(u32 param_1);
u32 FUN_003bd230(void);
void FUN_003bd280(void);
short ** FUN_003bd870(void);
u32 * FUN_003bd880(void);
u32 * FUN_003bd890(void);
u32 * FUN_003bd8a0(void);
u32 FUN_003bd8b0(u32 param_1,u32 param_2,u32 param_3);
u16 FUN_003bd9a0(u32 param_1,u32 param_2);
u32 FUN_003bda60(u32 param_1,u32 param_2,u32 param_3,u32 param_4);
float FUN_003bdb80(void);
u32 FUN_003bdba0(void);
u16 FUN_003bdbb0(void);

/* Region call-cast macros */
#define FUN_003b88c0(...) FUN_003b88c0(__VA_ARGS__)
#define FUN_003b89f0(...) FUN_003b89f0(__VA_ARGS__)
#define FUN_003b8a60(...) FUN_003b8a60(__VA_ARGS__)
#define FUN_003b8b30(...) FUN_003b8b30(__VA_ARGS__)
#define FUN_003b8c30(...) FUN_003b8c30(__VA_ARGS__)
#define FUN_003b8ce0(...) FUN_003b8ce0(__VA_ARGS__)
#define FUN_003b8e10(...) FUN_003b8e10(__VA_ARGS__)
#define FUN_003b8e80(...) FUN_003b8e80(__VA_ARGS__)
#define FUN_003b8f30(...) FUN_003b8f30(__VA_ARGS__)
#define FUN_003b8ff0(...) FUN_003b8ff0(__VA_ARGS__)
#define FUN_003b91c0(...) FUN_003b91c0(__VA_ARGS__)
#define FUN_003b9260(...) FUN_003b9260(__VA_ARGS__)
#define FUN_003b9320(...) FUN_003b9320(__VA_ARGS__)
#define FUN_003b93c0(...) FUN_003b93c0(__VA_ARGS__)
#define FUN_003b9500(...) FUN_003b9500(__VA_ARGS__)
#define FUN_003b9550(...) FUN_003b9550(__VA_ARGS__)
#define FUN_003b95a0(...) FUN_003b95a0(__VA_ARGS__)
#define FUN_003b9610(...) FUN_003b9610(__VA_ARGS__)
#define FUN_003baa70(...) FUN_003baa70(__VA_ARGS__)
#define FUN_003bac40(...) FUN_003bac40(__VA_ARGS__)
#define FUN_003bb010(...) FUN_003bb010(__VA_ARGS__)
#define FUN_003bb060(...) FUN_003bb060(__VA_ARGS__)
#define FUN_003bb0c0(...) FUN_003bb0c0(__VA_ARGS__)
#define FUN_003bb180(...) FUN_003bb180(__VA_ARGS__)
#define FUN_003bb1d0(...) FUN_003bb1d0(__VA_ARGS__)
#define FUN_003bb280(...) FUN_003bb280(__VA_ARGS__)
#define FUN_003bb340(...) FUN_003bb340(__VA_ARGS__)
#define FUN_003bb390(...) FUN_003bb390(__VA_ARGS__)
#define FUN_003bb400(...) FUN_003bb400(__VA_ARGS__)
#define FUN_003bb450(...) FUN_003bb450(__VA_ARGS__)
#define FUN_003bb620(...) FUN_003bb620(__VA_ARGS__)
#define FUN_003bb7a0(...) FUN_003bb7a0(__VA_ARGS__)
#define FUN_003bb9b0(...) FUN_003bb9b0(__VA_ARGS__)
#define FUN_003bba70(...) FUN_003bba70(__VA_ARGS__)
#define FUN_003bbaa0(...) FUN_003bbaa0(__VA_ARGS__)
#define FUN_003bbb90(...) FUN_003bbb90(__VA_ARGS__)
#define FUN_003bbc90(...) FUN_003bbc90(__VA_ARGS__)
#define FUN_003bbd40(...) FUN_003bbd40(__VA_ARGS__)
#define FUN_003bbed0(...) FUN_003bbed0(__VA_ARGS__)
#define FUN_003bbfd0(...) FUN_003bbfd0(__VA_ARGS__)
#define FUN_003bc0e0(...) FUN_003bc0e0(__VA_ARGS__)
#define FUN_003bc220(...) FUN_003bc220(__VA_ARGS__)
#define FUN_003bc730(...) FUN_003bc730(__VA_ARGS__)
#define FUN_003bc8f0(...) FUN_003bc8f0(__VA_ARGS__)
#define FUN_003bc900(...) FUN_003bc900(__VA_ARGS__)
#define FUN_003bc940(...) FUN_003bc940(__VA_ARGS__)
#define FUN_003bcbf0(...) FUN_003bcbf0(__VA_ARGS__)
#define FUN_003bcc80(...) FUN_003bcc80(__VA_ARGS__)
#define FUN_003bcda0(...) FUN_003bcda0(__VA_ARGS__)
#define FUN_003bceb0(...) FUN_003bceb0(__VA_ARGS__)
#define FUN_003bd130(...) FUN_003bd130(__VA_ARGS__)
#define FUN_003bd1c0(...) FUN_003bd1c0(__VA_ARGS__)
#define FUN_003bd230(...) FUN_003bd230(__VA_ARGS__)
#define FUN_003bd280(...) FUN_003bd280(__VA_ARGS__)
#define FUN_003bd870(...) FUN_003bd870(__VA_ARGS__)
#define FUN_003bd880(...) FUN_003bd880(__VA_ARGS__)
#define FUN_003bd890(...) FUN_003bd890(__VA_ARGS__)
#define FUN_003bd8a0(...) FUN_003bd8a0(__VA_ARGS__)
#define FUN_003bd8b0(...) FUN_003bd8b0(__VA_ARGS__)
#define FUN_003bd9a0(...) FUN_003bd9a0(__VA_ARGS__)
#define FUN_003bda60(...) FUN_003bda60(__VA_ARGS__)
#define FUN_003bdb80(...) FUN_003bdb80(__VA_ARGS__)
#define FUN_003bdba0(...) FUN_003bdba0(__VA_ARGS__)
#define FUN_003bdbb0(...) FUN_003bdbb0(__VA_ARGS__)





#undef FUN_003b88c0
// FUN_003B88C0
u32 FUN_003b88c0(float param_1,Resrc *param_2,u32 *param_3,u32 param_4,u32 param_5)
{
  u32 uVar1;
  u32 uVar2;
  int iVar3;
  u32 *puVar4;
  int iVar5;
  float fVar6;

  if (param_2 == 0) {
    return 0;
  }

  iVar3 = (int)param_2;
  uVar1 = param_2->flags;
  uVar1 = uVar1 | 1;
  param_2->flags = uVar1;
  uVar1 = uVar1 & 0xffffffbf;
  param_2->flags = uVar1;
  if (param_4 == 1) {
    param_2->flags = param_2->flags | 0x40;
  }
  *(float *)(iVar3 + 0x58) = param_1;
  *(u8 *)(iVar3 + 0x50) = 2;
  *(u32 *)(iVar3 + 0x5c) = 0;
  if (*(u32 *)(iVar3 + 0x54) == 0) {
    uVar2 = (u32)(*DAT_00960178_abs)(0x130,0x40000);
    *(u32 *)(iVar3 + 0x54) = uVar2;
    if (uVar2 == 0) {
      FUN_0019d3f0("mt_sceneFunc.c",0x23b);
    }
  }
  puVar4 = *(u32 **)(iVar3 + 0x54);
  iVar5 = 0x26;
  do {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    param_3 += 2;
    iVar5--;
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
    puVar4 += 2;
  } while (0 < iVar5);
  fVar6 = FUN_003bc0e0_scene(*(char **)(iVar3 + 0x54));
  *(float *)(iVar3 + 0x60) = fVar6;
  uVar2 = FUN_00530da0_scene(fVar6);
  FUN_005225a8(DAT_006a2df0,uVar2);
  return 1;
}
#define FUN_003b88c0(...) FUN_003b88c0(__VA_ARGS__)
#undef FUN_003b89f0
// FUN_003B89F0

u32 FUN_003b89f0(u32 param_1,u32 param_2,float param_3,u32 param_4)



{

  u32 lVar1;
  u32 uVar2;

  

  lVar1 = FUN_003b5d10();

  if (lVar1 != 0) {

    uVar2 = FUN_003b88c0_scene((Resrc *)lVar1,param_2,param_3,param_4);

  }

  else {

    uVar2 = 0;

  }

  return uVar2;

}
#define FUN_003b89f0(...) FUN_003b89f0(__VA_ARGS__)
#undef FUN_003b8a60
#undef FUN_003bba70
#undef FUN_003bb9b0

// FUN_003B8A60


u8 FUN_003b8a60(SceneInterpWork *param_1,float *param_2,u32 param_3,u8 param_4)
{
  struct V3 {
    float x;
    float y;
    float z;
  } values;
  struct V3 *input;

  input = (struct V3 *)param_2;
  values = *input;

  if (param_1 == 0) {
    return 0;
  }

  FUN_003bba70((int)param_1);
  FUN_003bb9b0((float *)&values);
  param_1->flags28 |= 4;
  *(struct V3 *)&param_1->value64 =
      *(struct V3 *)&param_1->value10;
  *(struct V3 *)&param_1->value70 = values;
  param_1->value7c = 0;
  param_1->value7d = param_4;
  param_1->value80 = param_3;
  param_1->value84 = 0;

  return 1;
}

#define FUN_003bba70(...) FUN_003bba70(__VA_ARGS__)
#define FUN_003bb9b0(...) FUN_003bb9b0(__VA_ARGS__)
#define FUN_003b8a60(...) FUN_003b8a60(__VA_ARGS__)
#undef FUN_003b8b30
#undef FUN_003bba70
#undef FUN_003bb9b0
// FUN_003B8B30


u32

FUN_003b8b30(u64 param_1,float *param_2,u32 param_3,u8 param_4)



{

  u32 uVar1;


  int iVar3;

  struct V3 {
    float x;
    float y;
    float z;
  } values;
  struct V3 *input;
  

  iVar3 = FUN_003b5d10();

  if (iVar3 == 0) {

    uVar1 = 0;

  }

  else {

    input = (struct V3 *)param_2;
    values = *input;

    if (iVar3 == 0) {

      uVar1 = 0;

    }

    else {

      FUN_003bba70(iVar3);

      FUN_003bb9b0((float *)&values);


      *(u32 *)(iVar3 + 0x28) = *(u32 *)(iVar3 + 0x28) | 4;

      *(struct V3 *)(iVar3 + 0x64) = *(struct V3 *)(iVar3 + 0x10);
      *(struct V3 *)(iVar3 + 0x70) = values;
      *(u8 *)(iVar3 + 0x7c) = 0;

      *(u8 *)(iVar3 + 0x7d) = param_4;

      *(u32 *)(iVar3 + 0x80) = param_3;

      *(u32 *)(iVar3 + 0x84) = 0;

      uVar1 = 1;

    }

  }

  return uVar1;

}
#define FUN_003b8b30(...) FUN_003b8b30(__VA_ARGS__)
#define FUN_003bba70(...) FUN_003bba70(__VA_ARGS__)
#define FUN_003bb9b0(...) FUN_003bb9b0(__VA_ARGS__)
#undef FUN_003b8c30
// FUN_003B8C30


u32 FUN_003b8c30(u64 param_1,float *param_2,u32 param_3)


{

  int iVar1;

  u32 lVar2;


  u32 uVar3;
  u32 uVar4;
  float fVar1;

  float fVar2;

  float fVar3;

  

  lVar2 = FUN_003b5d10();

  if (lVar2 == 0) {

    uVar3 = 0;

  }

  else if (lVar2 == 0) {

    uVar3 = 0;

  }

  else {

    iVar1 = (int)lVar2;

    *(u32 *)(iVar1 + 0x28) = *(u32 *)(iVar1 + 0x28) | 0x8000;

    fVar1 = *(float *)(iVar1 + 0x1c);

    fVar2 = *(float *)(iVar1 + 0x20);

    fVar3 = *(float *)(iVar1 + 0x24);

    *(float *)(iVar1 + 0x88) = fVar1;

    *(float *)(iVar1 + 0x8c) = fVar2;

    *(float *)(iVar1 + 0x90) = fVar3;

    fVar2 = *(volatile /* Removing this function's qualifier batch loses FUN_003b8c30 (MATCH nd0 -> MISMATCH nd6, size 168 -> 168) - measured W170. */ float *)(param_2 + 0);
    fVar3 = *(volatile /* Removing this function's qualifier batch loses FUN_003b8c30 (MATCH nd0 -> MISMATCH nd6, size 168 -> 168) - measured W170. */ float *)(param_2 + 1);
    fVar1 = *(volatile /* Removing this function's qualifier batch loses FUN_003b8c30 (MATCH nd0 -> MISMATCH nd6, size 168 -> 168) - measured W170. */ float *)(param_2 + 2);

    *(float *)(iVar1 + 0x94) = fVar2;

    *(float *)(iVar1 + 0x98) = fVar3;

    *(float *)(iVar1 + 0x9c) = fVar1;

    *(u32 *)(iVar1 + 0xa0) = param_3;

    *(u32 *)(iVar1 + 0xa4) = 0;

    uVar3 = 1;

  }

  return uVar3;

}
#define FUN_003b8c30(...) FUN_003b8c30(__VA_ARGS__)
#undef FUN_003b8ce0
 
// FUN_003B8CE0

u32 FUN_003b8ce0(u32 param_1,u8 param_2,u32 param_3,u32 param_4)
{
    u32 uVar1;
    int iVar2;
    u16 *puVar3;
    volatile /* Removing this function's qualifier batch loses FUN_003b8ce0 (MATCH nd0 -> MISMATCH nd8, size 300 -> 300) - measured W170. */ u8 *puVar5;
    u8 bVar4;
    u8 bVar5;
    u8 bVar6;
    u8 bVar7;
    u8 bVar8;
    u8 auStack_8[8];

    if (param_1 == 0)
    {
        uVar1 = 0;
        goto end;
    }

    puVar3 = (u16 *)param_1;
    iVar2 = (int)(*puVar3 & 0xffc00) >> 10;
    if (iVar2 == 6)
    {
        goto type6;
    }
    switch (iVar2)
    {
    case 3:
        goto type3;
    default:
        goto unknown;
    }

type3:
    iVar2 = FUN_00318b00(*(u32 *)(puVar3 + 0x94));
    puVar5 = (volatile /* Removing this function's qualifier batch loses FUN_003b8ce0 (MATCH nd0 -> MISMATCH nd8, size 300 -> 300) - measured W170. */ u8 *)iVar2;
    bVar5 = puVar5[0];
    bVar6 = puVar5[1];
    bVar7 = puVar5[2];
    bVar8 = puVar5[3];
    auStack_8[4] = bVar5;
    auStack_8[5] = bVar6;
    auStack_8[6] = bVar7;
    auStack_8[7] = bVar8;
    bVar4 = auStack_8[7];

    if (param_4 == 1)
    {
        *(u8 *)(puVar3 + 0x60) = 1;
    }
    else
    {
        *(u8 *)(puVar3 + 0x60) = 0;
    }
    goto finish;

type6:
    FUN_00350040(*(u32 *)(puVar3 + 0x82), auStack_8);
    bVar4 = auStack_8[3];
    goto finish;

unknown:
    uVar1 = 0;
    goto end;

finish:
    *(u32 *)(puVar3 + 0x14) = *(u32 *)(puVar3 + 0x14) | 0x4000;
    *(u8 *)(puVar3 + 0x5a) = bVar4;
    *(u8 *)((int)puVar3 + 0xb5) = param_2;
    *(u32 *)(puVar3 + 0x5c) = param_3;
    *(u32 *)((u8 *)puVar3 + 0xbc) = 0;
    uVar1 = 1;
    goto end;

end:
    return uVar1;
}
#define FUN_003b8ce0(...) FUN_003b8ce0(__VA_ARGS__)
#undef FUN_003b8e10
// FUN_003B8E10

u64 FUN_003b8e10(u64 param_1,u64 param_2,u64 param_3,u64 param_4)



{

  u32 lVar1;

  u64 uVar2;
  

  lVar1 = FUN_003b5d10();

  if (lVar1 != 0) {

    uVar2 = FUN_003b8ce0_scene(lVar1,param_2,param_3,param_4);

  }

  else {

    uVar2 = 0;

  }

  return uVar2;

}
#define FUN_003b8e10(...) FUN_003b8e10(__VA_ARGS__)
#undef FUN_003b8e80
// FUN_003B8E80


u32 FUN_003b8e80(u32 param_1,float param_2,u32 param_3)


{

  u16 *puVar1;

  u32 uVar2;

  u32 lVar3;

  
  lVar3 = FUN_003b5d10();


  if (lVar3 == 0) {

    uVar2 = 0;

  }

  else if (lVar3 == 0) {

    uVar2 = 0;

  }

  else {

    puVar1 = (u16 *)lVar3;

    if ((int)(*puVar1 & 0xffc00) >> 10 != 7) {

      uVar2 = 0;

    }

    else {

      *(u32 *)(puVar1 + 0x14) = *(u32 *)(puVar1 + 0x14) | 0x400;

      *(float *)(puVar1 + 0x62) = *(float *)(puVar1 + 0x80);

      *(float *)(puVar1 + 100) = param_2;

      *(u32 *)(puVar1 + 0x66) = param_3;

      *(u32 *)(puVar1 + 0x68) = 0;

      uVar2 = 1;

    }

  }

  return uVar2;

}
#define FUN_003b8e80(...) FUN_003b8e80(__VA_ARGS__)
#undef FUN_003b8f30
// FUN_003B8F30


u32 FUN_003b8f30(void)



{

  u32 uVar1;

  int iVar2;

  u32 uVar3;

  u32 lVar4;

  

  lVar4 = FUN_003b5d10();

  if (lVar4 == 0) {

    uVar3 = 0;

  }

  else if (lVar4 == 0) {

    uVar3 = 0;

  }

  else {

    iVar2 = (int)lVar4;

    *(u32 *)(iVar2 + 0x28) = *(u32 *)(iVar2 + 0x28) & 0xfffffffe;
    *(u32 *)(iVar2 + 0x28) = *(u32 *)(iVar2 + 0x28) & 0xfffffffb;
    *(u32 *)(iVar2 + 0x28) = *(u32 *)(iVar2 + 0x28) & 0xffff7fff;
    *(u32 *)(iVar2 + 0x28) = *(u32 *)(iVar2 + 0x28) & 0xffffffbf;
    *(u32 *)(iVar2 + 0x28) = *(u32 *)(iVar2 + 0x28) & 0xfffffbff;
    *(u32 *)(iVar2 + 0x28) = *(u32 *)(iVar2 + 0x28) & 0xfffff7ff;
    *(u32 *)(iVar2 + 0x28) = *(u32 *)(iVar2 + 0x28) & 0xffffefff;
    *(u32 *)(iVar2 + 0x28) = *(u32 *)(iVar2 + 0x28) & 0xffffdfff;
    *(u32 *)(iVar2 + 0x28) = *(u32 *)(iVar2 + 0x28) & 0xffffbfff;

    uVar3 = 1;

  }

  return uVar3;

}
#define FUN_003b8f30(...) FUN_003b8f30(__VA_ARGS__)
#undef FUN_003b8ff0
// FUN_003B8FF0

u32 FUN_003b8ff0(u32 param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5,
                 int param_6,float param_7)
{
  u32 uVar3;
  u32 uVar1;
  u32 lVar2;
  int iVar3;

  if (param_1 == 0) {
    return 0;
  }
  iVar3 = (int)(*(u16 *)param_1 & 0xffc00) >> 10;
  if (iVar3 == 10) {
    goto type10;
  }
  if (iVar3 == 3) {
    goto type3;
  }
  if (iVar3 == 2) {
    goto type2;
  }
  switch (iVar3) {
  case 1:
    goto type1;
  default:
    goto unknown;
  }

type1:
  uVar1 = *(u32 *)(param_1 + 0x128);
  goto selected;
type2:
  uVar1 = *(u32 *)(param_1 + 0x118);
  goto selected;
type3:
  uVar1 = *(u32 *)(param_1 + 0x128);
  goto selected;
type10:
  uVar1 = *(u32 *)(param_1 + 0x104);
  goto selected;
unknown:
  return 0;

selected:
  uVar3 = 0;
  if (param_5 == 1) {
    uVar3 |= 1;
  }
  lVar2 = FUN_003186e0_scene_typed(uVar1,param_2,param_3);
  if (lVar2 != 0) {
    goto complete;
  }
  FUN_003189f0_scene_typed(uVar1,param_2,param_7);
  FUN_003182d0_scene_typed(uVar1,param_2,param_3,param_4,uVar3);
  if (0 < param_6) {
    FUN_00318770_scene_typed(uVar1,param_2,(float)(int)param_6);
  }
  FUN_005225a8(DAT_006a2e10,uVar1,param_2,param_3);
complete:
  *(u32 *)(param_1 + 0x28) = *(u32 *)(param_1 + 0x28) & 0xffffdfff;
  return 1;
}
#define FUN_003b8ff0(...) FUN_003b8ff0(__VA_ARGS__)
#undef FUN_003b91c0
// FUN_003B91C0


u32

FUN_003b91c0(u32 param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5,

            u32 param_6,float param_7)



{

  u32 lVar1;

  u32 uVar2;

  

  lVar1 = FUN_003b5d10();

  if (lVar1 != 0) {

    uVar2 = FUN_003b8ff0_typed((u32)lVar1,param_2,param_3,param_4,param_5,param_6,param_7);

  }

  else {

    uVar2 = 0;

  }

  return uVar2;

}
#define FUN_003b91c0(...) FUN_003b91c0(__VA_ARGS__)
#undef FUN_003b9260
// FUN_003B9260


u32
FUN_003b9260(u32 *param_1,u32 param_2,u32 param_3,u32 param_4,
              u32 param_5,u32 param_6,float param_7)
{
    u32 uVar1;
    int iVar2;
    u16 *puVar3;
    u16 *puVar4;

    puVar4 = (u16 *)param_1;
    if (param_1 == 0)
    {
        uVar1 = 0;
        goto end;
    }

    iVar2 = (int)(*puVar4 & 0xffc00) >> 10;
    if (iVar2 == 3)
    {
        goto type3;
    }
    if (iVar2 == 2)
    {
        goto type2;
    }
    switch (iVar2)
    {
    case 1:
        goto type1;
    default:
        goto unknown;
    }

type1:
    puVar3 = puVar4 + 0x88;
    goto finish;

type2:
    puVar3 = puVar4 + 0x80;
    goto finish;

type3:
    puVar3 = puVar4 + 0x88;
    goto finish;

unknown:
    uVar1 = 0;
    goto end;

finish:
    *(u32 *)(puVar4 + 0x14) = *(u32 *)(puVar4 + 0x14) | 0x2000;
    *(u32 *)puVar3 = param_2;
    *(u32 *)(puVar3 + 2) = param_3;
    *(u32 *)(puVar3 + 4) = param_4;
    *(u32 *)(puVar3 + 6) = param_5;
    *(u32 *)(puVar3 + 8) = param_6;
    *(float *)(puVar3 + 10) = param_7;
    uVar1 = 1;
    goto end;
end:
    return uVar1;
}

#define FUN_003b9260(...) FUN_003b9260(__VA_ARGS__)
#undef FUN_003b9320
#pragma push
/* Removing this loses FUN_003b9320 (MATCH nd0 -> MISMATCH nd34) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_003B9320


u32
FUN_003b9320(u32 param_1,u32 param_2,u32 param_3,u32 param_4,
             u32 param_5,u32 param_6,float param_7)
{
    u32 *puVar3;
    u32 uVar2;

    puVar3 = (u32 *)FUN_003b5d10();
    if (puVar3 == 0)
    {
        goto zero;
    }
    uVar2 = FUN_003b9260_typed(puVar3,param_2,param_3,param_4,
                               param_5,param_6,param_7);
    goto end;

zero:
    uVar2 = 0;

end:
    return uVar2;
}

#pragma pop
#define FUN_003b9320(...) FUN_003b9320(__VA_ARGS__)
#undef FUN_003b93c0
// FUN_003B93C0


void FUN_003b93c0(u32 param_1,short param_2,short param_3,short param_4,

                 short param_5)



{

  u32 uVar1;

  u32 uVar3;

  u32 lVar2;
  u32 lVar4;

  

  uVar1 = (u16)param_1;

  uVar1 = (u16)(uVar1 & 0x3ff | 0xc00);

  uVar3 = (u32)param_4;

  if (uVar3 == -1) {

    lVar2 = FUN_003b5d10(uVar1);

    if (lVar2 != 0) {

      FUN_003b8ff0_typed(lVar2,0,param_2,param_3,1,0,1.0f);

    }

    goto end;

  }

  lVar4 = FUN_003b5d10(uVar1);

  if (lVar4 == 0) {

    goto second_done;

  }

  FUN_003b8ff0_typed(lVar4,0,param_2,param_3,0,0,1.0f);

second_done:

  lVar2 = FUN_003b5d10(uVar1);

  if (lVar2 != 0) {

    FUN_003b9260_typed((u32 *)lVar2,0,uVar3,param_5,1,0,1.0f);

  }

end:

  return;

}
#define FUN_003b93c0(...) FUN_003b93c0(__VA_ARGS__)
#undef FUN_003b9500
// FUN_003B9500


u32 FUN_003b9500(Resrc* param_1,int param_2)



{

  u32 uVar1;

  int iVar2;

  

  iVar2 = (int)param_1;

  if (param_1 == 0) {

    uVar1 = 0;

  }

  else {

    if (param_2 == 1) {

      *(u32 *)(iVar2 + 0x28) = *(u32 *)(iVar2 + 0x28) | 2;

    }

    else {

      *(u32 *)(iVar2 + 0x28) = *(u32 *)(iVar2 + 0x28) & 0xfffffffd;

    }

    uVar1 = 1;

  }

  return uVar1;

}
#define FUN_003b9500(...) FUN_003b9500(__VA_ARGS__)
#undef FUN_003b9550
// FUN_003B9550


u32 FUN_003b9550(u64 param_1,int param_2)



{
  Resrc* lVar1;

  lVar1 = (Resrc*)FUN_003b5d10();

  if (lVar1 != 0) {
    return (FUN_003b9500)(lVar1,param_2);
  }

  return 0;
}
#define FUN_003b9550(...) FUN_003b9550(__VA_ARGS__)
#undef FUN_003b95a0
// FUN_003B95A0


u32 FUN_003b95a0(void)



{
  u32 uVar1;
  Resrc* lVar2;

  lVar2 = (Resrc*)FUN_003b5d10();

  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else if (lVar2 == 0) {
    uVar1 = 0;
  }
  else if ((*(u32 *)((int)lVar2 + 0x28) & 1) != 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }

  return uVar1;
}
#define FUN_003b95a0(...) FUN_003b95a0(__VA_ARGS__)
#undef FUN_003b9610
/* W420 negative: making FUN_003bc220's variadic alias fully typed left nd 3644, object 5116/5216 (window 5216), rate 0.712275 unchanged; reverted. */
// FUN_003B9610








#ifndef PC_BUILD
asm void FUN_003b9610(Resrc* param_1)
{
  .set noreorder
  .word 0x27bdff00
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080802d
  .word 0x0000982d
  .word 0x120004ff
  .word 0x00000000
  .word 0x8e030028
  .word 0x30620020
  .word 0x10400008
  .word 0x00000000
  .word 0x8e1300f4
  .word 0x2402ffdf
  .word 0x00621024
  .word 0xae020028
  .word 0xae0000f4
  .word 0x10000005
  .word 0x00000000
  .word 0x30620008
  .word 0x14400002
  .word 0x00000000
  .word 0x24130001
  .word 0x06610002
  .word 0x00000000
  .word 0x0000982d
  .word 0x8e020028
  .word 0x30420001
  .word 0x10400198
  .word 0x00000000
  .word 0xc6020038
  .word 0xc601003c
  .word 0xc6000040
  .word 0xe7a200e8
  .word 0xe7a100ec
  .word 0xe7a000f0
  .word 0x26040004
  .word 0xc6020004
  .word 0xc6010008
  .word 0xc600000c
  .word 0xe7a200d8
  .word 0xe7a100dc
  .word 0xe7a000e0
  .word 0x92030050
  .word 0x14600050
  .word 0x00000000
  .word 0xc7a100e8
  .word 0xc7a000d8
  .word 0x46000801
  .word 0xe7a000c8
  .word 0xc7a100ec
  .word 0xc7a000dc
  .word 0x46000801
  .word 0xe7a000cc
  .word 0xc7a100f0
  .word 0xc7a000e0
  .word 0x46000801
  .word 0xe7a000d0
  .word 0x27a400c8
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x46000506
  .word 0x0260882d
  .word 0xc6000058
  .word 0x4600a036
  .word 0x24020001
  .word 0x45010002
  .word 0x00000000
  .word 0x0000102d
  .word 0x38420001
  .word 0x14400011
  .word 0x00000000
  .word 0xc7a200e8
  .word 0xc7a100ec
  .word 0xc7a000f0
  .word 0xe6020004
  .word 0xe6010008
  .word 0xe600000c
  .word 0x8e030028
  .word 0x2402fffe
  .word 0x00622824
  .word 0xae050028
  .word 0x3c04006a
  .word 0x24842e40
  .word 0x0c14896a
  .word 0x00000000
  .word 0x1000001e
  .word 0x00000000
  .word 0x27a400b8
  .word 0x27a500c8
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x1a200015
  .word 0x00000000
  .word 0xc6020058
  .word 0xc7a100b8
  .word 0xc6000004
  .word 0x44801800
  .word 0x00000000
  .word 0x46001818
  .word 0x4602081c
  .word 0xe6000004
  .word 0xc6020058
  .word 0xc7a100bc
  .word 0xc6000008
  .word 0x46001818
  .word 0x4602081c
  .word 0xe6000008
  .word 0xc6020058
  .word 0xc7a100c0
  .word 0xc600000c
  .word 0x46001818
  .word 0x4602081c
  .word 0xe600000c
  .word 0x2631ffff
  .word 0x1e20ffcb
  .word 0x00000000
  .word 0x0200202d
  .word 0x26050004
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0edd18
  .word 0x00000000
  .word 0x10000139
  .word 0x00000000
  .word 0x24020001
  .word 0x146200f5
  .word 0x00000000
  .word 0xc601002c
  .word 0xc7a000e8
  .word 0x46010001
  .word 0xe7a000c8
  .word 0xc6010030
  .word 0xc7a000ec
  .word 0x46010001
  .word 0xe7a000cc
  .word 0xc6010034
  .word 0xc7a000f0
  .word 0x46010001
  .word 0xe7a000d0
  .word 0x8e020060
  .word 0x14400011
  .word 0x00000000
  .word 0xc7a200e8
  .word 0xc7a100ec
  .word 0xc7a000f0
  .word 0xe4820000
  .word 0xe4810004
  .word 0xe4800008
  .word 0x8e030028
  .word 0x2402fffe
  .word 0x00622824
  .word 0xae050028
  .word 0x3c04006a
  .word 0x24842e60
  .word 0x0c14896a
  .word 0x00000000
  .word 0x100000ce
  .word 0x00000000
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
  .word 0xc7a000c8
  .word 0x00000000
  .word 0x46010003
  .word 0x00000000
  .word 0xe7a000c8
  .word 0x8e020060
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
  .word 0xc7a000cc
  .word 0x00000000
  .word 0x46010003
  .word 0x00000000
  .word 0xe7a000cc
  .word 0x8e020060
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
  .word 0xc7a000d0
  .word 0x00000000
  .word 0x46010003
  .word 0xe7a000d0
  .word 0x92040051
  .word 0x2c810006
  .word 0x1020007d
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463b330
  .word 0x00041080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e02005c
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x460318c0
  .word 0xc7a200c8
  .word 0xc601002c
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe6000004
  .word 0x8e02005c
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x460318c0
  .word 0xc7a200cc
  .word 0xc6010030
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe6000008
  .word 0x8e02005c
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x460318c0
  .word 0xc7a200d0
  .word 0xc6010034
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe600000c
  .word 0x10000032
  .word 0x00000000
  .word 0x8e020060
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800320
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800320
  .word 0x460c6300
  .word 0x8e02005c
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800360
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800360
  .word 0x460d6b40
  .word 0x0c0eefb4
  .word 0x00000000
  .word 0xc7a200c8
  .word 0xc601002c
  .word 0x44801800
  .word 0x00000000
  .word 0x46011818
  .word 0x4600105c
  .word 0xe6010004
  .word 0xc7a200cc
  .word 0xc6010030
  .word 0x46011818
  .word 0x4600105c
  .word 0xe6010008
  .word 0xc7a200d0
  .word 0xc6010034
  .word 0x46011818
  .word 0x4600101c
  .word 0xe600000c
  .word 0x8e03005c
  .word 0x8e020060
  .word 0x0062102b
  .word 0x1440000d
  .word 0x00000000
  .word 0xc7a200e8
  .word 0xc7a100ec
  .word 0xc7a000f0
  .word 0xe6020004
  .word 0xe6010008
  .word 0xe600000c
  .word 0x8e030028
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae020028
  .word 0x10000003
  .word 0x00000000
  .word 0x00731021
  .word 0xae02005c
  .word 0x0200202d
  .word 0x26050004
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0edd18
  .word 0x00000000
  .word 0x10000042
  .word 0x00000000
  .word 0x24020002
  .word 0x1462003f
  .word 0x00000000
  .word 0x8e040054
  .word 0xc60c005c
  .word 0xc60d0060
  .word 0x27a500a8
  .word 0x27a60098
  .word 0x0c0ef088
  .word 0x00000000
  .word 0xc6010060
  .word 0xc600005c
  .word 0x46010034
  .word 0x4501000c
  .word 0x00000000
  .word 0x8e030028
  .word 0x30620040
  .word 0x10400005
  .word 0x00000000
  .word 0x46010001
  .word 0xe600005c
  .word 0x10000004
  .word 0x00000000
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae020028
  .word 0xc7a200a8
  .word 0xc7a100ac
  .word 0xc7a000b0
  .word 0xe6020004
  .word 0xe6010008
  .word 0xe600000c
  .word 0x0000182d
  .word 0x10000006
  .word 0x00000000
  .word 0xc6010058
  .word 0xc600005c
  .word 0x46010000
  .word 0xe600005c
  .word 0x24630001
  .word 0x0073102a
  .word 0x1440fff9
  .word 0x00000000
  .word 0x0200202d
  .word 0x26050004
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0edd18
  .word 0x00000000
  .word 0x8e020028
  .word 0x30420008
  .word 0x1440000d
  .word 0x00000000
  .word 0x26060010
  .word 0xc7a20098
  .word 0xc7a1009c
  .word 0xc7a000a0
  .word 0xe6020010
  .word 0xe6010014
  .word 0xe6000018
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0000382d
  .word 0x0c0edd18
  .word 0x00000000
  .word 0x8e020028
  .word 0x30420004
  .word 0x104000d3
  .word 0x00000000
  .word 0x8e020080
  .word 0x14400013
  .word 0x00000000
  .word 0x26060010
  .word 0xc6020070
  .word 0xc6010074
  .word 0xc6000078
  .word 0xe6020010
  .word 0xe6010014
  .word 0xe6000018
  .word 0x8e030028
  .word 0x2402fffb
  .word 0x00621024
  .word 0xae020028
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0000382d
  .word 0x0c0edd18
  .word 0x00000000
  .word 0x100000be
  .word 0x00000000
  .word 0x8e020084
  .word 0x14400005
  .word 0x00000000
  .word 0x00531021
  .word 0xae020084
  .word 0x100000b7
  .word 0x00000000
  .word 0x26040064
  .word 0x26050070
  .word 0x27a60088
  .word 0x0c0eeea8
  .word 0x00000000
  .word 0x8e050080
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00051842
  .word 0x30a20001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0xc7a00088
  .word 0x00000000
  .word 0x46010583
  .word 0xc7a0008c
  .word 0x46010543
  .word 0xc7a00090
  .word 0x46010503
  .word 0x00000000
  .word 0x9204007d
  .word 0x2c810006
  .word 0x10200075
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463b310
  .word 0x00041080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e040084
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x468000a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00041842
  .word 0x30820001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0x46021080
  .word 0xc6010064
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602b01c
  .word 0xe7a00078
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x468000a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00041842
  .word 0x30820001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0x46021080
  .word 0xc6010068
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602a81c
  .word 0xe7a0007c
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x468000a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00041842
  .word 0x30820001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0x46021080
  .word 0xc601006c
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602a01c
  .word 0xe7a00080
  .word 0x1000002f
  .word 0x00000000
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800320
  .word 0x10000008
  .word 0x00000000
  .word 0x00051842
  .word 0x30a20001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800320
  .word 0x460c6300
  .word 0x8e020084
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800360
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800360
  .word 0x460d6b40
  .word 0x308400ff
  .word 0x0c0eefb4
  .word 0x00000000
  .word 0xc6010064
  .word 0x44801000
  .word 0x00000000
  .word 0x46011018
  .word 0x4600b05c
  .word 0xe7a10078
  .word 0xc6010068
  .word 0x46011018
  .word 0x4600a85c
  .word 0xe7a1007c
  .word 0xc601006c
  .word 0x46011018
  .word 0x4600a01c
  .word 0xe7a00080
  .word 0x26040010
  .word 0xc7a20078
  .word 0xc7a1007c
  .word 0xc7a00080
  .word 0xe6020010
  .word 0xe6010014
  .word 0xe6000018
  .word 0x8e030084
  .word 0x8e020080
  .word 0x0062102b
  .word 0x1440000d
  .word 0x00000000
  .word 0xc6020070
  .word 0xc6010074
  .word 0xc6000078
  .word 0xe4820000
  .word 0xe4810004
  .word 0xe4800008
  .word 0x8e030028
  .word 0x2402fffb
  .word 0x00621024
  .word 0xae020028
  .word 0x10000003
  .word 0x00000000
  .word 0x00731021
  .word 0xae020084
  .word 0x12600007
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x26060010
  .word 0x0000382d
  .word 0x0c0edd18
  .word 0x00000000
  .word 0x26040010
  .word 0x0c0eee6c
  .word 0x00000000
  .word 0x8e030028
  .word 0x30638000
  .word 0x10600098
  .word 0x00000000
  .word 0x26060088
  .word 0x8e0300a0
  .word 0x14600014
  .word 0x00000000
  .word 0x2607001c
  .word 0xc4c2000c
  .word 0xc4c10010
  .word 0xc4c00014
  .word 0xe602001c
  .word 0xe6010020
  .word 0xe6000024
  .word 0x8e030028
  .word 0x3c02ffff
  .word 0x34427fff
  .word 0x00621024
  .word 0xae020028
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0edd18
  .word 0x00000000
  .word 0x10000081
  .word 0x00000000
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800120
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800120
  .word 0x46042100
  .word 0x8cc5001c
  .word 0xc4c30000
  .word 0xc4c0000c
  .word 0x46030001
  .word 0x46040083
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x44800000
  .word 0x00000000
  .word 0x46030018
  .word 0x4601101c
  .word 0xe7a00068
  .word 0xc4c30004
  .word 0xc4c00010
  .word 0x46030001
  .word 0x46040083
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x44800000
  .word 0x00000000
  .word 0x46030018
  .word 0x4601101c
  .word 0xe7a0006c
  .word 0xc4c30008
  .word 0xc4c00014
  .word 0x46030001
  .word 0x46040083
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x44800000
  .word 0x00000000
  .word 0x46030018
  .word 0x4601101c
  .word 0xe7a00070
  .word 0x2605001c
  .word 0xc7a20068
  .word 0xc7a1006c
  .word 0xc7a00070
  .word 0xe602001c
  .word 0xe6010020
  .word 0xe6000024
  .word 0x8cc4001c
  .word 0x8cc30018
  .word 0x0083182b
  .word 0x1460000e
  .word 0x00000000
  .word 0xc4c2000c
  .word 0xc4c10010
  .word 0xc4c00014
  .word 0xe4a20000
  .word 0xe4a10004
  .word 0xe4a00008
  .word 0x8e040028
  .word 0x3c03ffff
  .word 0x34637fff
  .word 0x00831824
  .word 0xae030028
  .word 0x10000003
  .word 0x00000000
  .word 0x00931821
  .word 0xacc3001c
  .word 0x12600007
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x2607001c
  .word 0x0c0edd18
  .word 0x00000000
  .word 0x8e040028
  .word 0x30834000
  .word 0x106000af
  .word 0x00000000
  .word 0x8e0600b8
  .word 0x14c00007
  .word 0x00000000
  .word 0x921100b5
  .word 0x2403bfff
  .word 0x00831824
  .word 0xae030028
  .word 0x10000066
  .word 0x00000000
  .word 0x8e0500bc
  .word 0x00a6182b
  .word 0x14600007
  .word 0x00000000
  .word 0x921100b5
  .word 0x2403bfff
  .word 0x00831824
  .word 0xae030028
  .word 0x1000005c
  .word 0x00000000
  .word 0x920300b4
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x468000e0
  .word 0x460318c0
  .word 0x920300b5
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
  .word 0x46030041
  .word 0x04c00006
  .word 0x00000000
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00062042
  .word 0x30c30001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x00000000
  .word 0x00000000
  .word 0x46000883
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x44800000
  .word 0x00000000
  .word 0x46030018
  .word 0x4601105c
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
  .word 0x309100ff
  .word 0x8e0300bc
  .word 0x00731821
  .word 0xae0300bc
  .word 0x96040000
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x00831824
  .word 0x00032283
  .word 0x24030006
  .word 0x10830030
  .word 0x00000000
  .word 0x24030003
  .word 0x10830003
  .word 0x00000000
  .word 0x10000034
  .word 0x00000000
  .word 0x8e040128
  .word 0x0c0c62c0
  .word 0x00000000
  .word 0x90450000
  .word 0x90440001
  .word 0x90430002
  .word 0x90420003
  .word 0xa3a500fc
  .word 0xa3a400fd
  .word 0xa3a300fe
  .word 0xa3a200ff
  .word 0xa3b100ff
  .word 0x93a200ff
  .word 0x284100ff
  .word 0x10200012
  .word 0x00000000
  .word 0x820200c0
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e040128
  .word 0x0c0c6414
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842e80
  .word 0x0c14896a
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x8e040128
  .word 0x0c0c641c
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x8e040128
  .word 0x0c0c641c
  .word 0x00000000
  .word 0x8e040128
  .word 0x27a500fc
  .word 0x0c0c62b4
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x8e040104
  .word 0x27a500f8
  .word 0x0c0d4010
  .word 0x00000000
  .word 0xa3b100fb
  .word 0x8e040104
  .word 0x27a500f8
  .word 0x0c0d3fe4
  .word 0x00000000
  .word 0x8e030028
  .word 0x30630400
  .word 0x10600040
  .word 0x00000000
  .word 0x96040000
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x00831824
  .word 0x00032283
  .word 0x24030007
  .word 0x10830003
  .word 0x00000000
  .word 0x10000036
  .word 0x00000000
  .word 0x8e0600cc
  .word 0xc60400c4
  .word 0xc60300c8
  .word 0x8e0500d0
  .word 0x1cc00008
  .word 0x00000000
  .word 0xe6030100
  .word 0x8e040028
  .word 0x2403fbff
  .word 0x00831824
  .word 0xae030028
  .word 0x10000029
  .word 0x00000000
  .word 0x46041841
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000883
  .word 0x00000000
  .word 0x00000000
  .word 0x8e03005c
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x44800000
  .word 0x00000000
  .word 0x46040018
  .word 0x4601101c
  .word 0xe6000100
  .word 0x00a6182a
  .word 0x14600008
  .word 0x00000000
  .word 0xe6030100
  .word 0x8e040028
  .word 0x2403fbff
  .word 0x00831824
  .word 0xae030028
  .word 0x10000004
  .word 0x00000000
  .word 0x8e0300d0
  .word 0x00731821
  .word 0xae0300d0
  .word 0x96040000
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x00831824
  .word 0x00032283
  .word 0x24030001
  .word 0x14830011
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000009
  .word 0x00000000
  .word 0x00111880
  .word 0x02031821
  .word 0x8c640100
  .word 0x10800003
  .word 0x00000000
  .word 0x0c0d3f4c
  .word 0x00000000
  .word 0x26310001
  .word 0x2a230003
  .word 0x1460fff6
  .word 0x00000000
  .word 0x1000001c
  .word 0x00000000
  .word 0x24030003
  .word 0x14830011
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000009
  .word 0x00000000
  .word 0x00111880
  .word 0x02031821
  .word 0x8c640100
  .word 0x10800003
  .word 0x00000000
  .word 0x0c0d3f4c
  .word 0x00000000
  .word 0x26310001
  .word 0x2a230003
  .word 0x1460fff6
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x24030006
  .word 0x14830006
  .word 0x00000000
  .word 0x8e040104
  .word 0x10800003
  .word 0x00000000
  .word 0x0c0d3f4c
  .word 0x00000000
  .word 0x8e030028
  .word 0x30632000
  .word 0x10600036
  .word 0x00000000
  .word 0x0000182d
  .word 0x0000302d
  .word 0x96050000
  .word 0x3c04000f
  .word 0x3484fc00
  .word 0x00a42024
  .word 0x00042a83
  .word 0x24040003
  .word 0x10a40011
  .word 0x00000000
  .word 0x24040002
  .word 0x10a4000a
  .word 0x00000000
  .word 0x24040001
  .word 0x10a40003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x26030110
  .word 0x8e060128
  .word 0x10000007
  .word 0x00000000
  .word 0x26030100
  .word 0x8e060118
  .word 0x10000003
  .word 0x00000000
  .word 0x26030110
  .word 0x8e060128
  .word 0x10600018
  .word 0x00000000
  .word 0x8c650000
  .word 0x00052080
  .word 0x00852021
  .word 0x000420c0
  .word 0x00852023
  .word 0x00042080
  .word 0x00862021
  .word 0x908600ee
  .word 0x24040001
  .word 0x14c4000d
  .word 0x00000000
  .word 0x0200202d
  .word 0x8c660004
  .word 0x8c670008
  .word 0x8c68000c
  .word 0x8c690010
  .word 0xc46c0014
  .word 0x0c0ee3fc
  .word 0x00000000
  .word 0x8e040028
  .word 0x2403dfff
  .word 0x00831824
  .word 0xae030028
  .word 0x261200a8
  .word 0x920400a8
  .word 0x24030002
  .word 0x10830008
  .word 0x00000000
  .word 0x24030001
  .word 0x10830005
  .word 0x00000000
  .word 0x10800073
  .word 0x00000000
  .word 0x10000071
  .word 0x00000000
  .word 0x24030001
  .word 0x1483001e
  .word 0x00000000
  .word 0x8e030028
  .word 0x30630001
  .word 0x1460003a
  .word 0x00000000
  .word 0xa2400000
  .word 0x26040004
  .word 0x0c0eea9c
  .word 0x00000000
  .word 0x261100a8
  .word 0x920500aa
  .word 0x920300a9
  .word 0x00021080
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060001
  .word 0x0c042938
  .word 0x00000000
  .word 0x92230001
  .word 0x24630001
  .word 0xa2230001
  .word 0x92230001
  .word 0x28630004
  .word 0x14600054
  .word 0x00000000
  .word 0xa2200001
  .word 0x10000051
  .word 0x00000000
  .word 0x24030002
  .word 0x1483004e
  .word 0x00000000
  .word 0x8e030028
  .word 0x30630004
  .word 0x1460001a
  .word 0x00000000
  .word 0xa2400000
  .word 0x26040004
  .word 0x0c0eea9c
  .word 0x00000000
  .word 0x261100a8
  .word 0x920500aa
  .word 0x920300a9
  .word 0x00021080
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060001
  .word 0x0c042938
  .word 0x00000000
  .word 0x92230001
  .word 0x24630001
  .word 0xa2230001
  .word 0x92230001
  .word 0x28630004
  .word 0x14600034
  .word 0x00000000
  .word 0xa2200001
  .word 0x10000031
  .word 0x00000000
  .word 0x1260002f
  .word 0x00000000
  .word 0x96430008
  .word 0x18600005
  .word 0x00000000
  .word 0x2463ffff
  .word 0xa6430008
  .word 0x10000028
  .word 0x00000000
  .word 0x96430004
  .word 0x14600017
  .word 0x00000000
  .word 0x26040004
  .word 0x0c0eea9c
  .word 0x00000000
  .word 0x261100a8
  .word 0x920500aa
  .word 0x920300a9
  .word 0x00021080
  .word 0x00621021
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000202d
  .word 0x24060001
  .word 0x0c042938
  .word 0x00000000
  .word 0x92230001
  .word 0x24630001
  .word 0xa2230001
  .word 0x92230001
  .word 0x28630004
  .word 0x14600002
  .word 0x00000000
  .word 0xa2200001
  .word 0x96430004
  .word 0x24630001
  .word 0xa6430004
  .word 0x96440006
  .word 0x96430004
  .word 0x0064182a
  .word 0x14600007
  .word 0x00000000
  .word 0x1c800004
  .word 0x00000000
  .word 0xa2400000
  .word 0x10000002
  .word 0x00000000
  .word 0xa6400004
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0100
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_003b9610(...) FUN_003b9610(__VA_ARGS__)
#undef FUN_003baa70
/* W390 measured: the `SceneVecBits` whole-aggregate copy of the 12-byte
 * {u64 xy; f32 z;} header is what reproduces retail's TWO separate
 * lui/LO16 materializations of DAT_006a2da0 (nd 57 -> 4, with the two
 * upper-bound comparison orientations flipped to `fVar5 < base + 100.0f`).
 * Splitting it back into typed per-field assignments
 * (`blk.xy = *(u64*)DAT_006a2da0_abs; blk.z = *(f32*)DAT_006a2da8_abs;`)
 * collapses those to ONE base register and measures nd 45 - do not retry.
 * Residual nd 4 is a b210 aggregate-copy WIDTH floor: retail moves the
 * tail as ld + lwc1/swc1 (12 bytes exactly), while b210 blits the packed
 * 12-byte struct as ld/sd + ld/sd (16 bytes, over-reading 4). No natural
 * 12-byte struct with a u64 member exists - alignment forces 16.
 *
 * W408 re-probed the split five more ways; the nd4 aggregate copy still wins
 * and every alternative is worse. Measured, all at 464/464 unless noted:
 *   8-byte {u64} aggregate + separate f32 assignment          nd 8
 *   same, with the f32 load through a volatile cast           nd 8
 *   same, sourcing the f32 from the DAT_006a2da8_abs alias    nd 8
 *   12-byte {u32,u32,f32} aggregate (dodges u64 alignment)    nd 241, 476B
 *   u64 field assignment + aggregate f32 assignment           nd 45
 * `opt_common_subs off` was tried to stop the two global addresses being
 * merged: it makes this function nd 327 at 508B, over its window. The two
 * separate lui/LO16 materializations retail needs are produced by the
 * aggregate copy itself, not by defeating CSE. Treat nd4 as final. */
/* W421 row classification: baseline nd=4/object=464/window=464 (rate
 * 0.008621). At offsets 164/172 candidate `ld $v0,8($v0)` +
 * `sd $v0,0x48($sp)` versus retail `lwc1 $f0,0x2da8($v0)` +
 * `swc1 $f0,0x48($sp)`: a 16-byte b210 aggregate blit versus retail's
 * 12-byte mixed-width copy, not a commutative operand swap. Explicit
 * scalar/staged/volatile forms measured nd=45/49/6 at 464B but did not
 * reproduce the retail direct stack stores; all were reverted. */
// FUN_003BAA70


#ifndef PC_BUILD
asm u32 FUN_003baa70(char *param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x24040015
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040802d
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x8c440004
  .word 0x2c620014
  .word 0x14400008
  .word 0x00000000
  .word 0x2c61001d
  .word 0x10200005
  .word 0x00000000
  .word 0x2c820032
  .word 0x14400002
  .word 0x00000000
  .word 0x2484ffcf
  .word 0x00031880
  .word 0x3c020068
  .word 0x2442ef00
  .word 0x00431021
  .word 0x8c420000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000004d
  .word 0x00000000
  .word 0x00441021
  .word 0x90510000
  .word 0x10000046
  .word 0x00000000
  .word 0x27a60040
  .word 0x3c02006a
  .word 0xdc432da0
  .word 0x3c02006a
  .word 0xc4402da8
  .word 0xffa30040
  .word 0xe7a00048
  .word 0x2602011c
  .word 0xafa20050
  .word 0x26020128
  .word 0xafa20054
  .word 0x26020134
  .word 0xafa20058
  .word 0x0240202d
  .word 0x27a50050
  .word 0x0c06aab4
  .word 0x00000000
  .word 0x24030001
  .word 0x14430012
  .word 0x00000000
  .word 0x8fa20050
  .word 0xc4430004
  .word 0xc6420004
  .word 0x3c0242c8
  .word 0x44820800
  .word 0x00000000
  .word 0x46030800
  .word 0x46001034
  .word 0x45000008
  .word 0x00000000
  .word 0x46011801
  .word 0x46001036
  .word 0x45010004
  .word 0x00000000
  .word 0x8e11014c
  .word 0x10000023
  .word 0x00000000
  .word 0x26020128
  .word 0xafa20050
  .word 0x26020134
  .word 0xafa20054
  .word 0x26020140
  .word 0xafa20058
  .word 0x0240202d
  .word 0x27a50050
  .word 0x27a60040
  .word 0x0c06aab4
  .word 0x00000000
  .word 0x24030001
  .word 0x14430012
  .word 0x00000000
  .word 0x8fa20050
  .word 0xc4430004
  .word 0xc6420004
  .word 0x3c0242c8
  .word 0x44820800
  .word 0x00000000
  .word 0x46030800
  .word 0x46001034
  .word 0x45000008
  .word 0x00000000
  .word 0x46011801
  .word 0x46001036
  .word 0x45010004
  .word 0x00000000
  .word 0x8e11014c
  .word 0x10000004
  .word 0x00000000
  .word 0x8e1000f8
  .word 0x1600ffba
  .word 0x00000000
  .word 0x0220102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_003baa70(...) FUN_003baa70(__VA_ARGS__)
#undef FUN_003bac40
/* W420 negative: rewriting the outer if-chain as a switch raised nd 594/object 912 (window 976, rate 0.651316) to nd 624/object 928 (rate 0.672414); reverted. */
// FUN_003BAC40


#ifndef PC_BUILD
asm u32 FUN_003bac40(Resrc *param_1,u32 param_2)
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
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x16400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000da
  .word 0x00000000
  .word 0x96430000
  .word 0x3c02000f
  .word 0x3442fc00
  .word 0x00621024
  .word 0x00021a83
  .word 0x24100001
  .word 0x14700066
  .word 0x00000000
  .word 0x322300ff
  .word 0x2402000a
  .word 0x14620022
  .word 0x00000000
  .word 0x8e440108
  .word 0x10800009
  .word 0x00000000
  .word 0x0c0d3f44
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842ea0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x100000c2
  .word 0x00000000
  .word 0x0060202d
  .word 0x0c0ef470
  .word 0x00000000
  .word 0x104000bd
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0d3f34
  .word 0x00000000
  .word 0xae420108
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842dd8
  .word 0x2405069a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842ec0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x100000ac
  .word 0x00000000
  .word 0x8242010c
  .word 0x14400005
  .word 0x00000000
  .word 0x0200102d
  .word 0x0000802d
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x00021080
  .word 0x00521021
  .word 0x24540100
  .word 0x8c530100
  .word 0x1260001a
  .word 0x00000000
  .word 0x24040001
  .word 0x24050008
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a82d
  .word 0x0000202d
  .word 0x3c05006a
  .word 0x24a52db0
  .word 0x24061cef
  .word 0x3c07003c
  .word 0x24e78210
  .word 0x3c08003c
  .word 0x25088270
  .word 0x02a0482d
  .word 0x0c0652c8
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24020002
  .word 0xaea20000
  .word 0xaeb30004
  .word 0xae800000
  .word 0x322400ff
  .word 0x0c0ef470
  .word 0x00000000
  .word 0x1040000f
  .word 0x00000000
  .word 0x00101880
  .word 0x00721821
  .word 0x24700100
  .word 0x0040202d
  .word 0x0c0d3f34
  .word 0x00000000
  .word 0xae020000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842dd8
  .word 0x240506b3
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8242010c
  .word 0x00401026
  .word 0x2c420001
  .word 0xa242010c
  .word 0x1000006c
  .word 0x00000000
  .word 0x24020003
  .word 0x14620066
  .word 0x00000000
  .word 0x322300ff
  .word 0x2402000a
  .word 0x14620023
  .word 0x00000000
  .word 0x8e440108
  .word 0x10800009
  .word 0x00000000
  .word 0x0c0d3f44
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842ea0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x1000005a
  .word 0x00000000
  .word 0x0060202d
  .word 0x0c0ef470
  .word 0x00000000
  .word 0x10400055
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0d3f34
  .word 0x00000000
  .word 0xae420108
  .word 0x3c04006a
  .word 0x24842ec0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e420108
  .word 0x1440004a
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842dd8
  .word 0x240506c8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000043
  .word 0x00000000
  .word 0x8242010c
  .word 0x14400005
  .word 0x00000000
  .word 0x0200182d
  .word 0x0000802d
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x00401026
  .word 0x2c420001
  .word 0xa242010c
  .word 0x00031080
  .word 0x00521021
  .word 0x24540100
  .word 0x8c530100
  .word 0x1260001a
  .word 0x00000000
  .word 0x24040001
  .word 0x24050008
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a82d
  .word 0x0000202d
  .word 0x3c05006a
  .word 0x24a52db0
  .word 0x24061cef
  .word 0x3c07003c
  .word 0x24e78210
  .word 0x3c08003c
  .word 0x25088270
  .word 0x02a0482d
  .word 0x0c0652c8
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24020002
  .word 0xaea20000
  .word 0xaeb30004
  .word 0xae800000
  .word 0x322400ff
  .word 0x0c0ef470
  .word 0x00000000
  .word 0x10400014
  .word 0x00000000
  .word 0x00101880
  .word 0x00721821
  .word 0x24700100
  .word 0x0040202d
  .word 0x0c0d3f34
  .word 0x00000000
  .word 0xae020000
  .word 0x1440000b
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24842dd8
  .word 0x240506e3
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
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
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_003bac40(...) FUN_003bac40(__VA_ARGS__)
#undef FUN_003bac40
#undef FUN_003bb010
// FUN_003BB010


u32 FUN_003bb010(u64 param_1,u32 param_2)



{

  Resrc *lVar1;


  

  lVar1 = (Resrc *)FUN_003b5d10();

  if (lVar1 != 0) {

    return FUN_003bac40(lVar1,param_2);

  }

  return 0;

}
#define FUN_003bb010(...) FUN_003bb010(__VA_ARGS__)
#undef FUN_003bb060
#undef FUN_003bac40
// FUN_003BB060


void FUN_003bb060(u16 param_1,u8 param_2)



{
  Resrc *lVar1;

  

  lVar1 = (Resrc *)FUN_003b5d10((u16)(param_1 & 0x3ff | 0xc00));

  if (lVar1 != 0) {

    FUN_003bac40(lVar1,(u8)(param_2 & 0xff));

  }

  return;

}
#define FUN_003bac40(...) FUN_003bac40(__VA_ARGS__)
#define FUN_003bb060(...) FUN_003bb060(__VA_ARGS__)
#undef FUN_003bb0c0
// FUN_003BB0C0


u32 FUN_003bb0c0(u16* param_1,int param_2)



{

  u32 uVar1;

  int iVar2;

  u16 *puVar3;

  int iVar4;

  

  iVar4 = 0;

  if (param_1 == 0) {

    uVar1 = 0;

  }

  else {

    puVar3 = (u16 *)param_1;

    iVar2 = (int)(*puVar3 & 0xffc00) >> 10;

    if (iVar2 == 3) goto case1;
    switch (iVar2) {
    case 1:
      goto case3;
    default:
      goto switch_end;
    }
case3:
    iVar4 = *(int *)(puVar3 + 0xf2);
    goto switch_end;
case1:
    iVar4 = *(int *)(puVar3 + 0xf8);
switch_end:
    if (iVar4 == 0) {

      uVar1 = 0;

    }

    else {

      if (param_2 == 1) {

        FUN_0019c310(iVar4,3);

      }

      else {

        FUN_0019c310(iVar4,0);

      }

      uVar1 = 1;

    }

  }

  return uVar1;

}
#define FUN_003bb0c0(...) FUN_003bb0c0(__VA_ARGS__)
#undef FUN_003bb180
// FUN_003BB180


u32 FUN_003bb180(u16 param_1,int param_2)
{
  Resrc *lVar1;

  lVar1 = MT_Scene_GetRes(param_1);
  if (lVar1 != 0) {
    return (FUN_003bb0c0)((u16 *)lVar1,param_2);
  }

  return 0;
}
#define FUN_003bb180(...) FUN_003bb180(__VA_ARGS__)
#undef FUN_003bb1d0
// FUN_003BB1D0


u32

FUN_003bb1d0(u16 param_1,u8 param_2,u8 param_3,u16 param_4,

            u16 param_5)



{
  u32 lVar3;
  u32 uVar2;
  u8 *puVar4;

  lVar3 = (u32)MT_Scene_GetRes(param_1);

  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    puVar4 = (u8 *)(lVar3 + 0xa8);
    FUN_00521408(puVar4,0,10);
    puVar4[0] = param_2;
    puVar4[1] = 0;
    puVar4[2] = param_3;
    *(u16 *)(puVar4 + 6) = param_4;
    *(u16 *)(puVar4 + 8) = param_5;
    uVar2 = 1;
  }

  return uVar2;

}
#define FUN_003bb1d0(...) FUN_003bb1d0(__VA_ARGS__)
#undef FUN_003bb280
// FUN_003BB280


u32 FUN_003bb280(void)



{

  int iVar1;

  u32 uVar2;

  u32 lVar3;

  u16 *puVar4;

  lVar3 = FUN_003b5d10();

  if (lVar3 == 0) {

    uVar2 = 0;

  }

  else if (lVar3 == 0) {

    uVar2 = 0;

  }

  else {

    puVar4 = (u16 *)lVar3;

    if (((*puVar4 & 0xffc00) >> 10) != 7) {

      uVar2 = 0;

    }

    else {

      for (iVar1 = FUN_003b5d50(7); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xf8)) {

        *(u32 *)(iVar1 + 0x108) = 0;

      }

      uVar2 = 1;

      *(u32 *)(lVar3 + 0x108) = uVar2;

    }
  }

  return uVar2;

}

#define FUN_003bb280(...) FUN_003bb280(__VA_ARGS__)
#undef FUN_003bb340
// FUN_003BB340


void FUN_003bb340(void)



{

  int iVar1;

  

  for (iVar1 = FUN_003b5d50(7); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xf8)) {

    *(u32 *)(iVar1 + 0x108) = 0;

  }

  return;

}
#define FUN_003bb340(...) FUN_003bb340(__VA_ARGS__)
#undef FUN_003bb390
// FUN_003BB390


void FUN_003bb390(u32 param_2,u16 param_3,float param_1)



{

  u16 localParam3;
  u16 localParam2;
  Resrc *lVar1;
  localParam3 = param_3;
  localParam2 = param_2;
  if ((RESRC_GET_TYPE(localParam2) == RESRC_TYPE_07) && (lVar1 = (Resrc*)FUN_003b5d10(param_2), lVar1 != 0)) {

    *(u16 *)((u8*)lVar1 + 0x10c) = localParam3;

    *(float *)((u8*)lVar1 + 0x104) = param_1;

  }

  return;

}
#define FUN_003bb390(...) FUN_003bb390(__VA_ARGS__)
#undef FUN_003bb400
// FUN_003BB400


void FUN_003bb400(u32 param_1)



{

  u16 localParam1;
  Resrc *lVar1;
  localParam1 = (u16)param_1;
  if ((RESRC_GET_TYPE(localParam1) == RESRC_TYPE_07) && (lVar1 = (Resrc*)FUN_003b5d10(param_1), lVar1 != 0)) {

    *(u16 *)((int)lVar1 + 0x10c) = 0;
    *(u32 *)((int)lVar1 + 0x104) = 0;

  }

  return;

}
#define FUN_003bb400(...) FUN_003bb400(__VA_ARGS__)
#undef FUN_003bb450
/* W386 measurement: retail emits two consecutive sw $v0, 0x68($sp)
 * stores of 1.0f from one lui $v0, 0x3f80; our source emits one.
 * The eleven downstream scanner offset rows are the resulting one-slot
 * shift, not independent defects. Measured source forms: plain duplicate
 * (460 bytes), volatile-cast first (460), volatile-cast second (460), and
 * pointer-to-volatile (472), against this function's 464-byte window.
 * The pointer form preserves both stores only as addiu $v1,$sp,0x68 plus
 * indirect sws, so it cannot match retail and exceeds the window. The stack
 * map is matrix at sp+0x40, matrix.at.z at sp+0x68; axis3 starts at
 * sp+0x80 (axis2 +0x90, axis1 +0xa0, transformed +0xd0, source +0xc0,
 * axis0 +0xe0), with no local overlap at sp+0x68.
 */
/* W390 measured: nd 72 -> 4 by copying the axis2 {u64 xy; f32 z;} header as
 * ONE `SceneVecBits` aggregate instead of two per-field assignments, which
 * reproduces retail's two separate lui/LO16 materializations of DAT_006a2ef8
 * and removed the offset shift the W386 note above describes. The two dead
 * `xy`/`z` loads that used to feed axis2 were deleted with no nd change.
 * Residual nd 4 is the same b210 aggregate-copy WIDTH floor as FUN_003BAA70:
 * retail moves the tail via lwc1/swc1 (12 bytes), b210 blits ld/sd (16). */
/* W414 direct-width probes: replacing the aggregate with
 * `axis2.raw.xy = *(u64 *)DAT_006a2ef8_abs; axis2.raw.z =
 * *(f32 *)(DAT_006a2ef8_abs + 8);` emits the right lwc1/swc1 width but
 * reorders the surrounding load/store schedule (nd 68, 460/464). A byte
 * destination-pointer split reduces this only to nd 10 (460/464) but emits
 * indirect stores through the materialized stack pointer. RwV3d aggregate
 * and memcpy(12) forms exceed the 464-byte window (nd255/472 and nd302/472).
 * All were reverted; the existing nd4 aggregate copy remains the best form. */
/* W421 row classification: baseline nd=4/object=460/window=464 (rate
 * 0.008696). At offsets 112/120 candidate `ld $v0,8($v0)` + `sd
 * $v0,0x98($sp)` versus retail `lwc1 $f0,0x2f00($v0)` + `swc1
 * $f0,0x98($sp)`: the same 16-byte b210 aggregate blit versus retail's
 * 12-byte mixed-width copy. Direct scalar, memcpy, and pointer variants
 * measured nd=10/302/10 (the latter at 472B); none matched and all were
 * reverted. */
// FUN_003BB450


#ifndef PC_BUILD
asm void FUN_003bb450(float *input, float scale, float angle_y, float angle_x,
                 float angle_z, float *result)
{
  .set noreorder
  .word 0x27bdff10
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080882d
  .word 0x46006506
  .word 0x46006d86
  .word 0x46007d46
  .word 0x00a0802d
  .word 0x3c02006a
  .word 0xdc432ed8
  .word 0x3c02006a
  .word 0xc4402ee0
  .word 0xffa300e0
  .word 0xe7a000e8
  .word 0x3c02006a
  .word 0xdc432ee8
  .word 0x3c02006a
  .word 0xc4402ef0
  .word 0xffa300a0
  .word 0xe7a000a8
  .word 0x27a50090
  .word 0x3c02006a
  .word 0xdc432ef8
  .word 0x3c02006a
  .word 0xc4402f00
  .word 0xffa30090
  .word 0xe7a00098
  .word 0x3c02006a
  .word 0xdc432f08
  .word 0x3c02006a
  .word 0xc4402f10
  .word 0xffa30080
  .word 0xe7a00088
  .word 0x3c023f80
  .word 0xafa20068
  .word 0xafa20054
  .word 0xafa20040
  .word 0xafa00050
  .word 0xafa00048
  .word 0xafa00044
  .word 0xafa00064
  .word 0xafa00060
  .word 0xafa00058
  .word 0xafa00078
  .word 0xafa00074
  .word 0xafa00070
  .word 0x8fa3004c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xafa2004c
  .word 0x27a40040
  .word 0x46007306
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40040
  .word 0x27a500a0
  .word 0x4600b306
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40040
  .word 0x27a50080
  .word 0x4600ab06
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a400d0
  .word 0x27a500e0
  .word 0x27a60040
  .word 0x0c131b18
  .word 0x00000000
  .word 0xc6220000
  .word 0xc6210004
  .word 0xc6200008
  .word 0xe7a200c0
  .word 0xe7a100c4
  .word 0xe7a000c8
  .word 0xc7a100d0
  .word 0xc7a000c0
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614081d
  .word 0xe7a000b0
  .word 0xc7a100d4
  .word 0xc7a000c4
  .word 0x46001018
  .word 0x4614081d
  .word 0xe7a000b4
  .word 0xc7a100d8
  .word 0xc7a000c8
  .word 0x46001018
  .word 0x4614081d
  .word 0xe7a000b8
  .word 0xc7a200b0
  .word 0xc7a100b4
  .word 0xc7a000b8
  .word 0xe6020000
  .word 0xe6010004
  .word 0xe6000008
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00f0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_003bb450(...) FUN_003bb450(__VA_ARGS__)
#undef FUN_003bb450
#undef FUN_003bb620
/* W406 aggregate-width probes: the packed-pragma local aggregate measured normalized_diff 132 with object/window 384/384, while explicit no-local member-copy forms measured normalized_diff 13/14. The volatile scalar-source copy below is the best measured form (normalized_diff 4, object/window 376/384); do not alter the shared SceneVecBits typedef. */
/* W414 direct stack-store negative: removing the `dest` pointer and writing
 * `direction` directly emits stack-addressed stores but reorders the local
 * aggregate staging, measuring nd17 (376/384) versus retained nd4. Reverted. */
/* W421 row classification: baseline nd=4/object=376/window=384 (rate
 * 0.010638). At offsets 216/220 candidate `sd $v0,0($a1)` + `swc1
 * $f0,8($a1)` versus retail `sd $v0,0xd0($sp)` + `swc1 $f0,0xd8($sp)`.
 * The aggregate values and widths agree; only the candidate's cached
 * destination pointer survives where retail uses direct stack-relative
 * stores. Direct stack, pointer, and staged forms measured nd=17/4/4
 * (best object 376B) and did not improve the retained form. */
// FUN_003BB620


#ifndef PC_BUILD
asm void FUN_003bb620(u32 *param_2,int param_3,float param_1)
{
  .set noreorder
  .word 0x27bdfef0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080802d
  .word 0x00a0882d
  .word 0x46006506
  .word 0xc4a20004
  .word 0xc4a10008
  .word 0xc4a0000c
  .word 0xe7a20100
  .word 0xe7a10104
  .word 0xe7a00108
  .word 0xc4a20010
  .word 0xc4a10014
  .word 0xc4a00018
  .word 0xe7a200f0
  .word 0xe7a100f4
  .word 0xe7a000f8
  .word 0x94a4010c
  .word 0x10800033
  .word 0x00000000
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x1040002f
  .word 0x00000000
  .word 0xc4400004
  .word 0xe7a00100
  .word 0xc4400008
  .word 0xe7a00104
  .word 0xc440000c
  .word 0xe7a00108
  .word 0xc6340104
  .word 0x27a40040
  .word 0x27a50100
  .word 0x27a600f0
  .word 0x0c0ede68
  .word 0x00000000
  .word 0x27a60040
  .word 0x27a50080
  .word 0x24040008
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x27a500d0
  .word 0xdfa20080
  .word 0xc7a00088
  .word 0xffa200d0
  .word 0xe7a000d8
  .word 0x27a400c0
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c024170
  .word 0x44821800
  .word 0xc7a100c0
  .word 0xc7a00100
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4601181d
  .word 0xe7a00100
  .word 0xc7a100c8
  .word 0xc7a00108
  .word 0x46001018
  .word 0x4601181d
  .word 0xe7a00108
  .word 0x27a40100
  .word 0x4600a306
  .word 0xc7ad00f0
  .word 0xc7ae00f4
  .word 0xc7af00f8
  .word 0x27a500e0
  .word 0x0c0eed14
  .word 0x00000000
  .word 0xc7a200e0
  .word 0xc7a100e4
  .word 0xc7a000e8
  .word 0xe6020000
  .word 0xe6010004
  .word 0xe6000008
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0110
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_003bb450(...) FUN_003bb450(__VA_ARGS__)
#define FUN_003bb620(...) FUN_003bb620(__VA_ARGS__)
#undef FUN_003bb7a0
// FUN_003BB7A0


void FUN_003bb7a0(Resrc* param_1)



{

  int lVar2;

  int lVar4;

  int iVar1;

  u32 *puVar3;

  float outv[4];

  float vec0[4];
  float vec1[4];
  float vec2[4];

  struct { u64 pad0; float v[6]; } sc;

  u64 txy;
  f32 tz;
  f32 fc;
  f32 fb;
  f32 fa;

  

  lVar4 = FUN_00198590();

  txy = *(volatile u64 *)DAT_006a2f18_abs;
  tz = *(volatile f32 *)DAT_006a2f20_abs;
  *(volatile u64 *)vec0 = txy;
  *(volatile f32 *)&vec0[2] = tz;
  txy = *(volatile u64 *)DAT_006a2f28_abs;
  tz = *(volatile f32 *)DAT_006a2f30_abs;
  *(volatile u64 *)vec1 = txy;
  *(volatile f32 *)&vec1[2] = tz;
  txy = *(volatile u64 *)DAT_006a2f38_abs;
  tz = *(volatile f32 *)DAT_006a2f40_abs;
  *(volatile u64 *)vec2 = txy;
  *(volatile f32 *)&vec2[2] = tz;

  iVar1 = *(int *)((int)lVar4 + 4);

  if (((param_1 == 0) || (lVar4 == 0)) || (iVar1 == 0)) {
    return;
  }
  else {

    (FUN_003bb620)((u32 *)outv,(int)param_1,0.0f);

    fa = *(volatile f32 *)&outv[0];
    fb = *(volatile f32 *)&outv[1];
    fc = *(volatile f32 *)&outv[2];
    *(float *)((int)param_1 + 4) = fa;
    *(float *)((int)param_1 + 8) = fb;
    *(float *)((int)param_1 + 0xc) = fc;

    puVar3 = (u32 *)FUN_004c38c0();

    puVar3[10] = 0x3f800000;

    puVar3[5] = 0x3f800000;

    *puVar3 = 0x3f800000;

    puVar3[4] = 0;

    puVar3[2] = 0;

    puVar3[1] = 0;

    puVar3[9] = 0;

    puVar3[8] = 0;

    puVar3[6] = 0;

    puVar3[0xe] = 0;

    puVar3[0xd] = 0;

    puVar3[0xc] = 0;

    puVar3[3] = puVar3[3] | 0x20003;

    FUN_004c31b0_sceneFunc((RwMatrix *)puVar3,(const RwV3d *)vec0,*(f32 *)((int)param_1 + 0x14),1);
    FUN_004c31b0_sceneFunc((RwMatrix *)puVar3,(const RwV3d *)vec1,*(f32 *)((int)param_1 + 0x10),1);
    FUN_004c31b0_sceneFunc((RwMatrix *)puVar3,(const RwV3d *)vec2,*(f32 *)((int)param_1 + 0x18),1);

    FUN_004c35d0((int)puVar3,outv,2);

    lVar2 = FUN_003bc900_sceneI(&sc.v[4]);

    if (lVar2 == 1) {

      sc.v[0] = sc.v[4];
      sc.v[1] = sc.v[5];
      sc.v[2] = 0.0f;
      FUN_004c35d0((int)puVar3,sc.v,1);

    }

    FUN_004cb930(iVar1);

    FUN_004cb7f0(iVar1,(int)puVar3,0);

    FUN_004c3880((int)puVar3);

    FUN_001a4580_sceneF((int)lVar4,*(f32 *)((int)param_1 + 0x100));

  }

  return;

}
#define FUN_003bb7a0(...) FUN_003bb7a0(__VA_ARGS__)
#undef FUN_003bb9b0
#pragma push
/* Removing this loses FUN_003bb9b0 (MATCH nd0 -> MISMATCH nd143) - measured W161. */
#pragma opt_loop_invariants on
// FUN_003BB9B0


void FUN_003bb9b0(float *param_1)



{

  int iVar2;
  float afStack_10 [4];

  afStack_10[0] = *param_1;
  afStack_10[1] = param_1[1];
  afStack_10[2] = param_1[2];
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    while (afStack_10[iVar2] >= 360.0f) {
      afStack_10[iVar2] = afStack_10[iVar2] - 360.0f;
    }
    while (afStack_10[iVar2] < 0.0f) {
      afStack_10[iVar2] = afStack_10[iVar2] + 360.0f;
    }
  }

  *param_1 = afStack_10[0];

  param_1[1] = afStack_10[1];

  param_1[2] = afStack_10[2];

  return;

}
#pragma pop
#define FUN_003bb9b0(...) FUN_003bb9b0(__VA_ARGS__)
#undef FUN_003bba70
// FUN_003BBA70


void FUN_003bba70(int param_1)



{

  (FUN_003bb9b0)((float *)(param_1 + 0x10));

  return;

}
#define FUN_003bba70(...) FUN_003bba70(__VA_ARGS__)
#undef FUN_003bbaa0
#pragma push
/* opt_loop_invariants on: measured off nd 95, object 236/240; on nd 0, object 228/240 (MATCH); retain on. */
#pragma opt_loop_invariants on
// FUN_003BBAA0


void FUN_003bbaa0(float *param_1,float *param_2,float *param_3)
{
  int iVar1;
  float delta[4];
  float adjusted[4];
  const float wrap = 360.0f;
  const float limit = 180.0f;

  delta[0] = param_2[0] - param_1[0];
  delta[1] = param_2[1] - param_1[1];
  delta[2] = param_2[2] - param_1[2];
  FUN_003bb9b0_scene_typed(delta);
  adjusted[0] = delta[0];
  adjusted[1] = delta[1];
  adjusted[2] = delta[2];
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    if (adjusted[iVar1] <= limit) {
      continue;
    }
    adjusted[iVar1] = -(wrap - adjusted[iVar1]);
  }
  param_3[0] = adjusted[0];
  param_3[1] = adjusted[1];
  param_3[2] = adjusted[2];
}
#pragma pop
#define FUN_003bbaa0(...) FUN_003bbaa0(__VA_ARGS__)
#undef FUN_003bbb90
// FUN_003BBB90


void FUN_003bbb90(const float *param_1,float *param_2)
{
  u32 uVar1;
  float fVar2;
  u64 txy;
  float tz;
  SceneVecBits source;
  float afStack_20 [4];

  txy = ((volatile SceneVecBits *)DAT_006a2f48_abs)->xy;
  tz = *(volatile float *)DAT_006a2f50_abs;
  *(volatile u64 *)&source.xy = txy;
  *(volatile float *)&source.z = tz;
  fVar2 = FUN_004c69f0_scene_typed(afStack_20,param_1);
  if (fVar2 == 0.0f) {
    param_2[0] = 0.0f;
    param_2[1] = 0.0f;
    param_2[2] = 0.0f;
  }
  else {
    afStack_20[1] = 0.0f;
    uVar1 = FUN_00530da0_scene(afStack_20[0] * ((float *)&source.xy)[0] +
                         afStack_20[1] * ((float *)&source.xy)[1] +
                         afStack_20[2] * source.z);
    uVar1 = FUN_0052e9a0_scene_typed(uVar1);
    fVar2 = fGpffff8228 * FUN_005318a0_scene_typed(uVar1);
    if (afStack_20[0] < 0.0f) {
      fVar2 = fVar2 * -1.0f;
    }
    param_2[1] = fVar2;
    param_2[0] = 0.0f;
    param_2[2] = 0.0f;
  }
}
#define FUN_003bbb90(...) FUN_003bbb90(__VA_ARGS__)
#undef FUN_003bbc90
// FUN_003BBC90


void FUN_003bbc90(float t, float *x, float *y, float *z, float *outX,
                  float *outY, float *outZ)
{
  float oneMinus = 1.0f - t;
  float oneMinusSquared = oneMinus * oneMinus;
  float w0;
  float w1;
  float w2;
  float w3;
  float tSquared;
  float rx;

  RwV3d result;
  w0 = oneMinus * oneMinusSquared;
  rx = x[0] * w0;
  w1 = t * (3.0f * oneMinusSquared);
  rx += x[1] * w1;
  tSquared = t * t;
  w2 = (3.0f * oneMinus) * tSquared;
  rx += x[2] * w2;
  w3 = t * tSquared;
  rx += x[3] * w3;
  result.x = rx;
  rx = y[0] * w0;
  rx += y[1] * w1;
  rx += y[2] * w2;
  rx += y[3] * w3;
  result.y = rx;
  rx = z[0] * w0;
  rx += z[1] * w1;
  rx += z[2] * w2;
  rx += z[3] * w3;
  result.z = rx;

  *outX = result.x;
  *outY = result.y;
  *outZ = result.z;
}
#define FUN_003bbc90(...) FUN_003bbc90(__VA_ARGS__)
#undef FUN_003bbd40
/* opt_lifetimes on: measured nd 62 -> 0, object 400/400 -> 400/400. */
#pragma opt_lifetimes on
// FUN_003BBD40


void FUN_003bbd40(float param_1,char *param_2,float *param_3)



{

  char cVar1;

  int iVar2;

  int segmentIndex;
  int iVar3;


  float fVar5;

  float auStack_10 [4];

  float auStack_20 [4];

  float auStack_30 [4];

  

  cVar1 = *param_2;

  if ('\0' < cVar1) {


    if (!(param_1 < 1.0f)) {

      iVar3 = 0;
      segmentIndex = cVar1 - 1;
      param_2 += segmentIndex * 0x24;

      for (; iVar3 < 4; iVar3 = iVar3 + 1) {

        iVar2 = iVar3 * 0xc;

        auStack_10[iVar3] = *(float *)(param_2 + iVar2 + 4);

        auStack_20[iVar3] = *(float *)(param_2 + iVar2 + 8);

        auStack_30[iVar3] = *(float *)(param_2 + iVar2 + 0xc);

      }

      FUN_003bbc90_scene_typed(1.0f,auStack_10,auStack_20,auStack_30,param_3,param_3 + 1,param_3 + 2);

    }

    else {

      fVar5 = 1.0f / (float)(int)cVar1;

      segmentIndex = (int)(param_1 / fVar5);
      iVar3 = 0;
      param_2 += segmentIndex * 0x24;

      for (; iVar3 < 4; iVar3 = iVar3 + 1) {

        iVar2 = iVar3 * 0xc;

        auStack_10[iVar3] = *(float *)(param_2 + iVar2 + 4);

        auStack_20[iVar3] = *(float *)(param_2 + iVar2 + 8);

        auStack_30[iVar3] = *(float *)(param_2 + iVar2 + 0xc);

      }

      while (param_1 > fVar5) {

        param_1 = param_1 - fVar5;

      }

      FUN_003bbc90_scene_typed(param_1 / fVar5,auStack_10,auStack_20,auStack_30,param_3,param_3 + 1,param_3 + 2);

    }

  }

  return;

}
#define FUN_003bbd40(...) FUN_003bbd40(__VA_ARGS__)
#pragma opt_lifetimes reset
#undef FUN_003bbed0
// FUN_003BBED0


float FUN_003bbed0(u32 param_3,float param_1,float param_2)
{
  float *pfVar1;
  u8 auStack[0x138];

  if (param_3 >= 6) {
    FUN_0019d3f0("mt_sceneFunc.c",0x980);
  }
  if (param_1 == 0.0f) {
    param_2 = 1.0f;
  }
  else {
    param_2 = param_2 / param_1;
  }
  auStack[0] = 1;
  *(u32 *)(auStack + 4) = 0;
  *(u32 *)(auStack + 8) = 0;
  *(u32 *)(auStack + 0xc) = 0;
  pfVar1 = (float *)FUN_003b55b0(param_3);
  *(float *)(auStack + 0x10) = pfVar1[0];
  *(float *)(auStack + 0x14) = pfVar1[2];
  *(u32 *)(auStack + 0x18) = 0;
  *(float *)(auStack + 0x1c) = pfVar1[1];
  *(float *)(auStack + 0x20) = pfVar1[3];
  *(u32 *)(auStack + 0x24) = 0;
  *(u32 *)(auStack + 0x28) = 0x3f800000;
  *(u32 *)(auStack + 0x2c) = 0x3f800000;
  *(u32 *)(auStack + 0x30) = 0;
  FUN_003bbd40_scene_typed((char *)auStack,param_2,(float *)(auStack + 0x130));
  return *(float *)(auStack + 0x134) * param_1;
}
#define FUN_003bbed0(...) FUN_003bbed0(__VA_ARGS__)
#undef FUN_003bbfd0
// FUN_003BBFD0

float FUN_003bbfd0(float param_1,float param_2,float *param_3,float *param_4,
                  float *param_5,float *param_6,float *param_7)
{
  RwV3d delta;
  float first_x;
  float second_x;
  float first_y;
  float second_y;
  float first_z;
  float second_z;
  float first_len;

  FUN_003bbc90_scene_typed(param_1,param_3,param_4,param_5,&first_x,&first_y,&first_z);
  FUN_003bbc90_scene_typed(param_2,param_3,param_4,param_5,&second_x,&second_y,&second_z);
  delta.x = second_x - first_x;
  delta.y = second_y - first_y;
  delta.z = second_z - first_z;
  first_len = FUN_004c6ac0_scene_vec(&delta);
  *param_6 = first_x;
  param_6[1] = first_y;
  param_6[2] = first_z;
  *param_7 = second_x;
  param_7[1] = second_y;
  param_7[2] = second_z;
  return first_len;
}
#define FUN_003bbfd0(...) FUN_003bbfd0(__VA_ARGS__)
#undef FUN_003bc0e0
// FUN_003BC0E0


float FUN_003bc0e0(char *param_1)



{

  int iVar1;

  int lVar2;

  int iVar3;

  float fVar4;

  float fVar5;

  float fVar6;

  float scale;

  float auStack_10 [4];

  float auStack_20 [4];

  float auStack_30 [4];

  float auStack_40 [4];

  float auStack_50 [4];

  

  fVar5 = 0.0f;

  for (lVar2 = 0; lVar2 < *param_1; lVar2 = lVar2 + 1) {

    {
      char *curve;
      int copyIndex;

      copyIndex = 0;
      curve = param_1 + lVar2 * 0x24;
      for (; copyIndex < 4; copyIndex = copyIndex + 1) {

        iVar1 = copyIndex * 0xc;

        auStack_30[copyIndex] = *(float *)(curve + iVar1 + 4);

        auStack_40[copyIndex] = *(float *)(curve + iVar1 + 8);

        auStack_50[copyIndex] = *(float *)(curve + iVar1 + 0xc);

      }
    }

    fVar6 = 0.0f;

    for (iVar3 = 0; iVar3 < 0x14; iVar3 = iVar3 + 1) {

      fVar4 = (float)iVar3;
      scale = DAT_007cb0b8;
      fVar4 = fVar4 * scale;
      fVar4 = FUN_003bbfd0_scene_typed(fVar4,(float)(iVar3 + 1) * scale,
                   auStack_30,auStack_40,auStack_50,auStack_10,auStack_20);

      fVar6 = fVar6 + fVar4;

    }

    fVar5 = fVar5 + fVar6;

  }

  return fVar5;

}
#define FUN_003bc0e0(...) FUN_003bc0e0(__VA_ARGS__)
#undef FUN_003bc220
/* opt_lifetimes on: measured nd 952 -> 949, object 1272/1296 -> 1272/1296. */
#pragma opt_lifetimes on
// FUN_003BC220


#ifndef PC_BUILD
asm float FUN_003bc220(char *param_1,float param_2,float param_3,float *param_4,u32 *param_5)
{
  .set noreorder
  .word 0x27bdfe90
  .word 0xffbf0070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x46006606
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x4480b800
  .word 0x80830000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d43
  .word 0x00000000
  .word 0x4600bd06
  .word 0x46186836
  .word 0x45000060
  .word 0x00000000
  .word 0x0003163c
  .word 0x0002163f
  .word 0x2443ffff
  .word 0x00031040
  .word 0x00431821
  .word 0x0000282d
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x02822021
  .word 0x1000000e
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00021080
  .word 0x00821821
  .word 0x00051080
  .word 0xc4600004
  .word 0x005d1021
  .word 0xe44000a0
  .word 0xc4600008
  .word 0xe4400090
  .word 0xc460000c
  .word 0xe4400080
  .word 0x24a50001
  .word 0x28a20004
  .word 0x1440fff1
  .word 0x00000000
  .word 0xc78c81b4
  .word 0x27a400a0
  .word 0x27a50090
  .word 0x27a60080
  .word 0x27a7016c
  .word 0x27a80164
  .word 0x27a9015c
  .word 0x0c0eef24
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x27a400a0
  .word 0x27a50090
  .word 0x27a60080
  .word 0x27a70168
  .word 0x27a80160
  .word 0x27a90158
  .word 0x0c0eef24
  .word 0x00000000
  .word 0xc7a10168
  .word 0xc7a0016c
  .word 0x46000801
  .word 0xe7a000d8
  .word 0xc7a10160
  .word 0xc7a00164
  .word 0x46000801
  .word 0xe7a000dc
  .word 0xc7a10158
  .word 0xc7a0015c
  .word 0x46000801
  .word 0xe7a000e0
  .word 0x27a400d8
  .word 0x0c131ab0
  .word 0x00000000
  .word 0xc7a50168
  .word 0xe7a50118
  .word 0xc7a40160
  .word 0xe7a4011c
  .word 0xc7a30158
  .word 0xe7a30120
  .word 0xc7a20118
  .word 0xc7a1011c
  .word 0xc7a00120
  .word 0xe6620000
  .word 0xe6610004
  .word 0xe6600008
  .word 0xc7a0016c
  .word 0x46002801
  .word 0xe7a00108
  .word 0xc7a00164
  .word 0x46002001
  .word 0xe7a0010c
  .word 0xc7a0015c
  .word 0x46001801
  .word 0xe7a00110
  .word 0x27a400e8
  .word 0x27a50108
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x27a400e8
  .word 0x0240282d
  .word 0x0c0eeee4
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x100000b6
  .word 0x00000000
  .word 0x0000882d
  .word 0x100000ae
  .word 0x00000000
  .word 0x0000282d
  .word 0x00111040
  .word 0x00512021
  .word 0x1000000f
  .word 0x00000000
  .word 0x00a41821
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x02821821
  .word 0x00051080
  .word 0xc4600004
  .word 0x005d1021
  .word 0xe44000a0
  .word 0xc4600008
  .word 0xe4400090
  .word 0xc460000c
  .word 0xe4400080
  .word 0x24a50001
  .word 0x28a20004
  .word 0x1440fff0
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000091
  .word 0x00000000
  .word 0x44900000
  .word 0x00000000
  .word 0x46800060
  .word 0xc780806c
  .word 0x46000d82
  .word 0x4600b306
  .word 0x27a400a0
  .word 0x27a50090
  .word 0x27a60080
  .word 0x27a70154
  .word 0x27a8014c
  .word 0x27a90144
  .word 0x0c0eef24
  .word 0x00000000
  .word 0x26020001
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc780806c
  .word 0x46000b02
  .word 0x27a400a0
  .word 0x27a50090
  .word 0x27a60080
  .word 0x27a70150
  .word 0x27a80148
  .word 0x27a90140
  .word 0x0c0eef24
  .word 0x00000000
  .word 0xc7a10150
  .word 0xc7a00154
  .word 0x46000801
  .word 0xe7a000c8
  .word 0xc7a10148
  .word 0xc7a0014c
  .word 0x46000801
  .word 0xe7a000cc
  .word 0xc7a10140
  .word 0xc7a00144
  .word 0x46000801
  .word 0xe7a000d0
  .word 0x27a400c8
  .word 0x0c131ab0
  .word 0x00000000
  .word 0xc7a90154
  .word 0xc7a8014c
  .word 0xc7a70144
  .word 0xc7a20150
  .word 0xe7a20118
  .word 0xc7a60148
  .word 0xe7a6011c
  .word 0xc7a50140
  .word 0xe7a50120
  .word 0x4600bdc0
  .word 0x4618b834
  .word 0x45010057
  .word 0x00000000
  .word 0x4618b841
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010101
  .word 0x4604a8c2
  .word 0x4603a500
  .word 0x46091081
  .word 0xe7a20108
  .word 0x46083001
  .word 0xe7a0010c
  .word 0x46072801
  .word 0xe7a00110
  .word 0x44800800
  .word 0x00000000
  .word 0x46090818
  .word 0x4604101c
  .word 0xe6600000
  .word 0xc7a0010c
  .word 0x46080818
  .word 0x4604001c
  .word 0xe6600004
  .word 0xc7a00110
  .word 0x46070818
  .word 0x4604001c
  .word 0xe6600008
  .word 0x4603b540
  .word 0x4600ab06
  .word 0x27a400a0
  .word 0x27a50090
  .word 0x27a60080
  .word 0x27a7013c
  .word 0x27a80134
  .word 0x27a9012c
  .word 0x0c0eef24
  .word 0x00000000
  .word 0xc780822c
  .word 0x4600ab01
  .word 0x27a400a0
  .word 0x27a50090
  .word 0x27a60080
  .word 0x27a70138
  .word 0x27a80130
  .word 0x27a90128
  .word 0x0c0eef24
  .word 0x00000000
  .word 0xc7a10138
  .word 0xc7a0013c
  .word 0x46000801
  .word 0xe7a000b8
  .word 0xc7a10130
  .word 0xc7a00134
  .word 0x46000801
  .word 0xe7a000bc
  .word 0xc7a10128
  .word 0xc7a0012c
  .word 0x46000801
  .word 0xe7a000c0
  .word 0x27a400b8
  .word 0x0c131ab0
  .word 0x00000000
  .word 0xc7a1013c
  .word 0xc7a00138
  .word 0x46000801
  .word 0xe7a000f8
  .word 0xc7a10134
  .word 0xc7a00130
  .word 0x46000801
  .word 0xe7a000fc
  .word 0xc7a1012c
  .word 0xc7a00128
  .word 0x46000801
  .word 0xe7a00100
  .word 0x27a400e8
  .word 0x27a500f8
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x27a400e8
  .word 0x0240282d
  .word 0x0c0eeee4
  .word 0x00000000
  .word 0x4600a006
  .word 0x1000000c
  .word 0x00000000
  .word 0x4615a500
  .word 0x26100001
  .word 0x2a020014
  .word 0x1440ff6e
  .word 0x00000000
  .word 0x26310001
  .word 0x82820000
  .word 0x0222102a
  .word 0x1440ff50
  .word 0x00000000
  .word 0x44800000
  .word 0xdfbf0070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0170
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_003bc220(...) FUN_003bc220(__VA_ARGS__)
#pragma opt_lifetimes reset
#undef FUN_003bc730
// FUN_003BC730


float FUN_003bc730(char *param_1,int param_2)
{
  int iVar1;
  int lVar4;
  int iVar3;
  int iVar2;
  float fVar5;
  float fVar6;
  float auStack_40 [4];
  float auStack_50 [4];
  float auStack_60 [4];
  RwV3d delta;
  float fStack_4;
  float fStack_8;
  float fStack_c;
  float fStack_10;
  float fStack_14;
  float fStack_18;

  fVar6 = 0.0f;
  iVar3 = 0;
  lVar4 = 0;
  while (lVar4 < *param_1) {
    if (iVar3 == param_2) {
      return fVar6;
    }
    {
      int pointBase;
      int copyIndex;

      copyIndex = 0;
      pointBase = lVar4 * 3;
      for (; copyIndex < 4; copyIndex = copyIndex + 1) {
        iVar1 = copyIndex + pointBase;
        auStack_40[copyIndex] = *(float *)(param_1 + iVar1 * 0xc + 4);
        auStack_50[copyIndex] = *(float *)(param_1 + iVar1 * 0xc + 8);
        auStack_60[copyIndex] = *(float *)(param_1 + iVar1 * 0xc + 0xc);
      }
    }
    for (iVar2 = 0; iVar2 < 0x14; iVar2 = iVar2 + 1) {
      FUN_003bbc90_scene_typed((float)iVar2 * DAT_007cb0b8,auStack_40,auStack_50,auStack_60,&fStack_4,&fStack_c,
                   &fStack_14);
      FUN_003bbc90_scene_typed((float)(iVar2 + 1) * DAT_007cb0b8,auStack_40,auStack_50,auStack_60,&fStack_8,
                   &fStack_10,&fStack_18);
      delta.x = fStack_8 - fStack_4;
      delta.y = fStack_10 - fStack_c;
      delta.z = fStack_18 - fStack_14;
      fVar5 = FUN_004c6ac0_scene_vec(&delta);
      fVar6 = fVar6 + fVar5;
    }
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + 1;
  }
  return 0.0f;
}
#define FUN_003bc730(...) FUN_003bc730(__VA_ARGS__)
#undef FUN_003bc8f0
// FUN_003BC8F0


int FUN_003bc8f0(char *param_1)



{

  return *param_1 + -1;

}
#define FUN_003bc8f0(...) FUN_003bc8f0(__VA_ARGS__)
/* optimization_level 1: measured O2 nd 18, object 56/64; O1 nd 0, object 60/64 (MATCH); retain O1. */
#pragma optimization_level 1
#undef FUN_003bc900
// FUN_003BC900


u8 FUN_003bc900(float *param_1)



{

  if (*(u16 *)&DAT_007ce658 == 0) {
    return 0;
  }
  param_1[0] = *(float *)(uintptr_t)0x0095aff0;
  param_1[1] = *(float *)(uintptr_t)0x0095aff4;
  return 1;

}
#define FUN_003bc900(...) FUN_003bc900(__VA_ARGS__)
#pragma optimization_level 2
#undef FUN_003bc940
// FUN_003BC940








#ifndef PC_BUILD
asm void FUN_003bc940(void)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0xc781a870
  .word 0xc780a874
  .word 0xe7a10040
  .word 0xe7a00044
  .word 0x9783b968
  .word 0x1460000b
  .word 0x00000000
  .word 0x3c030096
  .word 0xac60aff0
  .word 0x3c030096
  .word 0xac60aff4
  .word 0x3c030096
  .word 0xac60aff8
  .word 0x3c030096
  .word 0xac60affc
  .word 0x1000008e
  .word 0x00000000
  .word 0x8783b96c
  .word 0x14600004
  .word 0x00000000
  .word 0xa780b968
  .word 0x10000088
  .word 0x00000000
  .word 0x9783b970
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0xc78080b0
  .word 0x46010002
  .word 0xe7a00048
  .word 0x9783b974
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0xc78080b0
  .word 0x46010002
  .word 0xe7a0004c
  .word 0x0000802d
  .word 0x10000049
  .word 0x00000000
  .word 0x00101880
  .word 0x007d1821
  .word 0x24630048
  .word 0xc4740000
  .word 0x44800000
  .word 0x00000000
  .word 0x46140032
  .word 0x4501003f
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0d600c
  .word 0x00000000
  .word 0x00102880
  .word 0x00bd2021
  .word 0x24830048
  .word 0xc4640000
  .word 0x3c033f00
  .word 0x44830800
  .word 0x00000000
  .word 0x46002002
  .word 0x4600081a
  .word 0x44801800
  .word 0x46040d5c
  .word 0x3c030096
  .word 0x2463aff0
  .word 0x00658821
  .word 0xc6220000
  .word 0x46001045
  .word 0xc4800040
  .word 0x46002002
  .word 0x46000834
  .word 0x4501000c
  .word 0x00000000
  .word 0x46031036
  .word 0x45000005
  .word 0x00000000
  .word 0x46151000
  .word 0xe6200000
  .word 0x10000015
  .word 0x00000000
  .word 0x46151001
  .word 0xe6200000
  .word 0x10000011
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0d600c
  .word 0x00000000
  .word 0x3c033f00
  .word 0x44830800
  .word 0x00000000
  .word 0x46010001
  .word 0x4600a8c2
  .word 0x3c034000
  .word 0x44831000
  .word 0xc6210000
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe6200000
  .word 0x4600a047
  .word 0xc6200000
  .word 0x46010034
  .word 0x45000002
  .word 0x00000000
  .word 0xe6210000
  .word 0xc6200000
  .word 0x46140036
  .word 0x45010002
  .word 0x00000000
  .word 0xe6340000
  .word 0x26100001
  .word 0x2a030002
  .word 0x1460ffb6
  .word 0x00000000
  .word 0x8786b96c
  .word 0x18c0000e
  .word 0x00000000
  .word 0x24c50005
  .word 0x9784b970
  .word 0x0085001a
  .word 0x00001812
  .word 0x3063ffff
  .word 0x00831823
  .word 0xa783b970
  .word 0x9784b974
  .word 0x7085001a
  .word 0x70001812
  .word 0x3063ffff
  .word 0x00831823
  .word 0xa783b974
  .word 0x18c00004
  .word 0x00000000
  .word 0x8783b96c
  .word 0x2463ffff
  .word 0xa783b96c
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_003bc940(...) FUN_003bc940(__VA_ARGS__)
#undef FUN_003bcbf0
// FUN_003BCBF0


void FUN_003bcbf0(int param_1,int param_2)



{
  if (param_2 == 0) {
    *(u16 *)&DAT_007ce658 = 0;
  }
  else {
    *(u16 *)&DAT_007ce658 = 1;
    if (param_1 == 0) {
      *(short *)&DAT_007ce65c = -1;
    }
    else {
      *(u16 *)&DAT_007ce65c = (short)param_1;
    }
    *(u16 *)&DAT_007ce664 = param_2 * 10;
    *(u16 *)&DAT_007ce660 = (*(u16 *)&DAT_007ce664 << 2) / 10;
    FUN_003500a0(param_1,(short)param_2);
  }
  return;

}
#define FUN_003bcbf0(...) FUN_003bcbf0(__VA_ARGS__)
#undef FUN_003bcc80
// FUN_003BCC80


void FUN_003bcc80(void)



{

  *(u16 *)&DAT_007ce658 = 0;

  FUN_003500e0();

  return;

}
#define FUN_003bcc80(...) FUN_003bcc80(__VA_ARGS__)
#pragma push
/* Removing this loses FUN_003bccb0 (MATCH nd0 -> MISMATCH nd14) - measured W161. */
#pragma opt_loop_invariants on
// FUN_003bccb0
void* MT_SceneFunc_UpdateSceneMngTask(KwlnTask* sceneMngTask)
{
    s32 i;
    Resrc* res;
    ResrcType7* type7Res;
    s32 type7Status;

    (FUN_003bc940)();
    for (i = 1; i < RESRC_TYPE_MAX; i++)
    {
        for (res = MT_Scene_GetResListHead(i); res != NULL; res = res->next)
        {
            (FUN_003b9610)(res);
        }
    }

    type7Res = (ResrcType7*)MT_Scene_GetResListHead(7);
    type7Status = 1;
    for (; type7Res != NULL; type7Res = (ResrcType7*)type7Res->base.next)
    {
        if (type7Res->unk_108 == type7Status)
        {
            (FUN_003bb7a0)((Resrc*)type7Res);
            break;
        }
    }

    return KWLNTASK_CONTINUE;
}
#pragma pop

// FUN_003bcd80
void MT_SceneFunc_DestroySceneMngTask(KwlnTask* sceneMngTask)
{
    (FUN_003bcc80)();
}
#undef FUN_003bcda0
// FUN_003BCDA0


int FUN_003bcda0(int *param_1,int *param_2)
{
  int matrix;
  int second;
  struct {
    RwV3d origin;
    u32 pad0;
    RwV3d secondDelta;
    u32 pad1;
    RwV3d firstDelta;
    u32 pad2;
  } vectors;
  RwMatrix secondPos;
  RwMatrix first;
  RwV3d *firstPosition;
  RwV3d *secondPosition;
  float oy;
  float oz;

  matrix = FUN_00198590();
  matrix = FUN_004cb2f0(*(u32 *)(matrix + 4));
  vectors.origin = ((RwMatrix *)matrix)->pos;

  second = *param_2;
  FUN_0034ffc0(*(u32 *)(*param_1 + 0x104),&secondPos);
  FUN_0034ffc0(*(u32 *)(second + 0x104),&first);
  firstPosition = &secondPos.pos;
  secondPosition = &first.pos;

  vectors.firstDelta.x = firstPosition->x - vectors.origin.x;
  oy = *(volatile float *)&vectors.origin.y;
  vectors.firstDelta.y = firstPosition->y - oy;
  oz = *(volatile float *)&vectors.origin.z;
  vectors.firstDelta.z = firstPosition->z - oz;
  vectors.secondDelta.x = secondPosition->x - vectors.origin.x;
  vectors.secondDelta.y = secondPosition->y - oy;
  vectors.secondDelta.z = secondPosition->z - oz;

  return (int)(FUN_004c6ac0(&vectors.firstDelta) - FUN_004c6ac0(&vectors.secondDelta));
}
#define FUN_003bcda0(...) FUN_003bcda0(__VA_ARGS__)
#undef FUN_003bceb0
// FUN_003BCEB0


void FUN_003bceb0(int param_1)



{

  u32 uVar1;

  int iVar2;

  int j;
  int iVar3;
  int originalHead;

  

  iVar3 = 0;

  originalHead = param_1;

  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xf8)) {

    if (((*(u32 *)(param_1 + 0x28) & 2) != 0) && (*(int *)(param_1 + 0x104) != 0)) {

      switch (*(char *)(param_1 + 0x100)) {

      case 0:

        iVar3 = iVar3 + 1;

      }

    }

  }

  uVar1 = (*DAT_00960178_abs)(iVar3 << 2,0x40000);

  j = 0;

  param_1 = originalHead;

  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xf8)) {

    if (((*(u32 *)(param_1 + 0x28) & 2) != 0) && (*(int *)(param_1 + 0x104) != 0)) {

      switch (*(char *)(param_1 + 0x100)) {

      case 0:

        *(int *)((int)uVar1 + j * 4) = param_1;

        j = j + 1;

      }

    }

  }

  FUN_005225f8(uVar1,iVar3,4,FUN_003bcda0);

  for (iVar2 = 0; iVar2 < iVar3; iVar2 = iVar2 + 1) {

    FUN_0034fd70((Model *)*(u32 *)(*(int *)((int)uVar1 + iVar2 * 4) + 0x104),3);

  }

  (*DAT_0096017c_abs)(uVar1);

  return;

}
#define FUN_003bceb0(...) FUN_003bceb0(__VA_ARGS__)
// FUN_003bd010
void* MT_SceneFunc_UpdateSceneMngDrawTask(KwlnTask* sceneMngDrawTask)
{
    Resrc* res;

    res = MT_Scene_GetResListHead(6);
    (FUN_003bceb0)((int)res);
    for (; res != NULL; res = res->next)
    {
        if ((res->flags & 2) != 0 && *(Model**)((u8*)res + 0x104) != NULL)
        {
            switch (*(s8*)((u8*)res + 0x100))
            {
            case 0:
                break;
            case 1:
                FUN_0034fd70(*(Model**)((u8*)res + 0x104), 6);
                break;
            default:
                break;
            }
        }
    }

    return KWLNTASK_CONTINUE;
}
// FUN_003bd0b0
KwlnTask* MT_SceneFunc_CreateTasks()
{
    KwlnTask* sceneMngTask;

    sceneMngTask = kwlnTaskCreate(NULL,
                                  "SceneManager Task",
                                  110,
                                  MT_SceneFunc_UpdateSceneMngTask,
                                  MT_SceneFunc_DestroySceneMngTask,
                                  NULL);


    kwlnTaskCreate(sceneMngTask,
                   "SceneManager Draw",
                   2109,
                   MT_SceneFunc_UpdateSceneMngDrawTask,
                   NULL,
                   NULL);

    return sceneMngTask;
}
#undef FUN_003bd130
// FUN_003BD130


void FUN_003bd130(void)



{

  void *pVar1;

  void **ppVar2;

  int iVar2;

  

  for (iVar2 = 0; iVar2 < 0x19; iVar2 = iVar2 + 1) {

    if (PTR_s_icon_ICON1_EPL_006a3130[iVar2] != (u8 *)0x0) {

      ppVar2 = (void **)(DAT_0095b000_abs + iVar2 * 4);
      /* Removing this barrier loses FUN_003bd130 (MATCH nd0 -> MISMATCH nd18) - measured W164. */
      asm ("" : "+m"(*ppVar2));

      pVar1 = FUN_00100d80_typed_scene((const char *)PTR_s_icon_ICON1_EPL_006a3130[iVar2],0);

      *ppVar2 = pVar1;

      FUN_001023a0(pVar1);

    }

  }

  return;

}
#define FUN_003bd130(...) FUN_003bd130(__VA_ARGS__)
#undef FUN_003bd1c0
// FUN_003BD1C0


u32 FUN_003bd1c0(u32 param_1)
{
  u8 auStack_4[4];
  u8 **ppuVar1;

  if (0x19 < param_1) {
    return 0;
  }

  ppuVar1 = (u8 **)PTR_s_icon_ICON1_EPL_006a3130 + param_1;
  if (*ppuVar1 == (u8 *)0x0) {
    return 0;
  }

  return FUN_001021c0(*ppuVar1, auStack_4);
}
#define FUN_003bd1c0(...) FUN_003bd1c0(__VA_ARGS__)
#undef FUN_003bd230
// FUN_003BD230


u32 FUN_003bd230(void)



{

  u8 uVar1;

  

  FUN_0035ed20(0);

  uVar1 = FUN_0035ed20(1);

  (FUN_003bb010)(0x400,uVar1);

  return 1;

}
#define FUN_003bd230(...) FUN_003bd230(__VA_ARGS__)
#define DAT_0095b074 (*(u32 *)DAT_0095b074_abs)
#define DAT_0095b1f8 (*(u32 *)DAT_0095b1f8_abs)
#define DAT_0095b208 (*(u32 *)DAT_0095b208_abs)
#define DAT_0095b20c (*(u32 *)DAT_0095b20c_abs)
#define DAT_0095b210 (*(u32 *)DAT_0095b210_abs)
#define DAT_0095b218 (*(u32 *)DAT_0095b218_abs)
#define DAT_0095b21c (*(u32 *)DAT_0095b21c_abs)
#define DAT_0095b220 (*(u32 *)DAT_0095b220_abs)
#define DAT_0095b224 (*(u32 *)DAT_0095b224_abs)
#define DAT_0095b238 (*(u32 *)DAT_0095b238_abs)
#define DAT_0095b240 (*(u32 *)DAT_0095b240_abs)
#define DAT_0095b244 (*(u32 *)DAT_0095b244_abs)
#define DAT_0095b248 (*(u32 *)DAT_0095b248_abs)
#define DAT_0095b24c (*(u32 *)DAT_0095b24c_abs)
#define DAT_0095b254 (*(u32 *)DAT_0095b254_abs)
#define DAT_0095b258 (*(u32 *)DAT_0095b258_abs)
#define DAT_0095b25c (*(u32 *)DAT_0095b25c_abs)
#define DAT_0095b260 (*(u32 *)DAT_0095b260_abs)
#define DAT_0095b264 (*(u32 *)DAT_0095b264_abs)
#define DAT_0095b268 (*(u32 *)DAT_0095b268_abs)
#define DAT_0095b26c (*(u32 *)DAT_0095b26c_abs)
#define DAT_0095b270 (*(u32 *)DAT_0095b270_abs)
#define DAT_0095b274 (*(u32 *)DAT_0095b274_abs)
#define DAT_0095b278 (*(u32 *)DAT_0095b278_abs)
#define DAT_0095b27c (*(u32 *)DAT_0095b27c_abs)
#define DAT_0095b284 (*(u32 *)DAT_0095b284_abs)
#define DAT_0095b288 (*(u32 *)DAT_0095b288_abs)
#define DAT_0095b290 (*(u32 *)DAT_0095b290_abs)
#define DAT_0095b294 (*(u32 *)DAT_0095b294_abs)
#define DAT_0095b298 (*(u32 *)DAT_0095b298_abs)
#define DAT_0095b2a4 (*(u32 *)DAT_0095b2a4_abs)
#define DAT_0095b434 (*(u32 *)DAT_0095b434_abs)
#define DAT_0095b440 (*(u32 *)DAT_0095b440_abs)
#define DAT_0095b444 (*(u32 *)DAT_0095b444_abs)
#define DAT_0095b448 (*(u32 *)DAT_0095b448_abs)
#define DAT_0095b44c (*(u32 *)DAT_0095b44c_abs)
#define DAT_0095b454 (*(u32 *)DAT_0095b454_abs)
#define DAT_0095b458 (*(u32 *)DAT_0095b458_abs)
#define DAT_0095b45c (*(u32 *)DAT_0095b45c_abs)
#define DAT_0095b460 (*(u32 *)DAT_0095b460_abs)
#define DAT_0095b474 (*(u32 *)DAT_0095b474_abs)
#define DAT_0095b47c (*(u32 *)DAT_0095b47c_abs)
#define DAT_0095b480 (*(u32 *)DAT_0095b480_abs)
#define DAT_0095b484 (*(u32 *)DAT_0095b484_abs)
#define DAT_0095b488 (*(u32 *)DAT_0095b488_abs)
#define DAT_0095b4a0 (*(u32 *)DAT_0095b4a0_abs)
#define DAT_0095b4a8 (*(u32 *)DAT_0095b4a8_abs)
#define DAT_0095b4b4 (*(u32 *)DAT_0095b4b4_abs)
#define DAT_0095b4c0 (*(u32 *)DAT_0095b4c0_abs)
#define DAT_0095b4d0 (*(u32 *)DAT_0095b4d0_abs)
#define DAT_0095b4d4 (*(u32 *)DAT_0095b4d4_abs)
#define DAT_0095b4e0 (*(u32 *)DAT_0095b4e0_abs)
#define DAT_0095b658 (*(u32 *)DAT_0095b658_abs)
#define DAT_0095b65c (*(u32 *)DAT_0095b65c_abs)
#define DAT_0095b660 (*(u32 *)DAT_0095b660_abs)
#define DAT_0095b664 (*(u32 *)DAT_0095b664_abs)
#define DAT_0095b668 (*(u32 *)DAT_0095b668_abs)
#define DAT_0095b66c (*(u32 *)DAT_0095b66c_abs)
#define DAT_0095b670 (*(u32 *)DAT_0095b670_abs)
#define DAT_0095b674 (*(u32 *)DAT_0095b674_abs)
#define DAT_0095b678 (*(u32 *)DAT_0095b678_abs)
#define DAT_0095b67c (*(u32 *)DAT_0095b67c_abs)
#define DAT_0095b680 (*(u32 *)DAT_0095b680_abs)
#define DAT_0095b684 (*(u32 *)DAT_0095b684_abs)
#define DAT_0095b688 (*(u32 *)DAT_0095b688_abs)
#define DAT_0095b68c (*(u32 *)DAT_0095b68c_abs)
#define DAT_0095b690 (*(u32 *)DAT_0095b690_abs)
#define DAT_0095b694 (*(u32 *)DAT_0095b694_abs)
#define DAT_0095b698 (*(u32 *)DAT_0095b698_abs)
#define DAT_0095b69c (*(u32 *)DAT_0095b69c_abs)
#define DAT_0095b6a0 (*(u32 *)DAT_0095b6a0_abs)
#define DAT_0095b6a4 (*(u32 *)DAT_0095b6a4_abs)
#define DAT_0095b6a8 (*(u32 *)DAT_0095b6a8_abs)
#define DAT_0095b6ac (*(u32 *)DAT_0095b6ac_abs)
#define DAT_0095b6b0 (*(u32 *)DAT_0095b6b0_abs)
#define DAT_0095b6b4 (*(u32 *)DAT_0095b6b4_abs)
#define DAT_0095b6b8 (*(u32 *)DAT_0095b6b8_abs)
#define DAT_0095b6bc (*(u32 *)DAT_0095b6bc_abs)
#define DAT_0095b6c4 (*(u32 *)DAT_0095b6c4_abs)
#define DAT_0095b6c8 (*(u32 *)DAT_0095b6c8_abs)
#define DAT_0095b6cc (*(u32 *)DAT_0095b6cc_abs)
#define DAT_0095b6d0 (*(u32 *)DAT_0095b6d0_abs)
#define DAT_0095b6d4 (*(u32 *)DAT_0095b6d4_abs)
#define DAT_0095b6d8 (*(u32 *)DAT_0095b6d8_abs)
#define DAT_0095b6dc (*(u32 *)DAT_0095b6dc_abs)
#define DAT_0095b6e0 (*(u32 *)DAT_0095b6e0_abs)
#define DAT_0095b6e4 (*(u32 *)DAT_0095b6e4_abs)
#define DAT_0095b6e8 (*(u32 *)DAT_0095b6e8_abs)
#define DAT_0095b6ec (*(u32 *)DAT_0095b6ec_abs)
#define DAT_0095b6f0 (*(u32 *)DAT_0095b6f0_abs)
#define DAT_0095b6f4 (*(u32 **)DAT_0095b6f4_abs)
#define DAT_0095b6f8 (*(u32 *)DAT_0095b6f8_abs)
#define DAT_0095b6fc (*(u32 *)DAT_0095b6fc_abs)
#define DAT_0095b700 (*(u32 *)DAT_0095b700_abs)
#define DAT_0095b704 (*(u32 *)DAT_0095b704_abs)
#define DAT_0095b708 (*(u32 *)DAT_0095b708_abs)
#define DAT_0095b70c (*(u32 *)DAT_0095b70c_abs)
#define DAT_0095b710 (*(u32 *)DAT_0095b710_abs)
#define DAT_0095b714 (*(u32 *)DAT_0095b714_abs)
#define DAT_0095b718 (*(u32 *)DAT_0095b718_abs)
#define DAT_0095b71c (*(u32 *)DAT_0095b71c_abs)
#define DAT_0095b720 (*(u32 *)DAT_0095b720_abs)
#define DAT_0095b724 (*(u32 *)DAT_0095b724_abs)
#define DAT_0095b728 (*(u32 *)DAT_0095b728_abs)
#define DAT_0095b070 (*(u16 **)DAT_0095b070_abs)

#undef FUN_003bd280
/* opt_loop_invariants on: measured nd 725 -> 716, object 1520/1520 -> 1516/1520; opt_lifetimes on alone: nd 725 -> 721, object 1520/1520 -> 1520/1520; stacked: nd 717, object 1516/1520 (worse than loop alone; retained loop only). */
#pragma opt_loop_invariants on
// FUN_003BD280


#ifndef PC_BUILD
asm void FUN_003bd280(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0000
  .word 0x8f84a878
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xaf82b978
  .word 0x0040202d
  .word 0x0c0408e8
  .word 0x00000000
  .word 0x8f84a87c
  .word 0x27a5001c
  .word 0x0c040870
  .word 0x00000000
  .word 0x3c030096
  .word 0xac62b070
  .word 0x8f84a880
  .word 0x27a5001c
  .word 0x0c040870
  .word 0x00000000
  .word 0x3c030096
  .word 0xac62b074
  .word 0x3c020096
  .word 0x8c42b070
  .word 0x94460000
  .word 0x24050001
  .word 0x10c50009
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843200
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c030096
  .word 0xac60b070
  .word 0x10000153
  .word 0x00000000
  .word 0x24470004
  .word 0x0000402d
  .word 0x3c040096
  .word 0x2484b070
  .word 0x3c020096
  .word 0x10000012
  .word 0x00000000
  .word 0x8ce50000
  .word 0x10a00008
  .word 0x00000000
  .word 0x00081880
  .word 0x00833021
  .word 0x8c43b070
  .word 0x00651821
  .word 0xacc30008
  .word 0x10000004
  .word 0x00000000
  .word 0x00081880
  .word 0x00833021
  .word 0xacc00008
  .word 0x8ce30004
  .word 0xacc30244
  .word 0x24e70008
  .word 0x25080001
  .word 0x29010090
  .word 0x1420ffed
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42b070
  .word 0x94450000
  .word 0x90460002
  .word 0x3c04006a
  .word 0x24843250
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0000302d
  .word 0x3c050096
  .word 0x24a5b070
  .word 0x10000006
  .word 0x00000000
  .word 0x00061880
  .word 0x00a32021
  .word 0x8c830008
  .word 0xac830480
  .word 0x24c60001
  .word 0x28c3001e
  .word 0x1460fff9
  .word 0x00000000
  .word 0x0000302d
  .word 0x3c050096
  .word 0x24a5b070
  .word 0x10000006
  .word 0x00000000
  .word 0x00061880
  .word 0x00a32021
  .word 0x8c830088
  .word 0xac8304f8
  .word 0x24c60001
  .word 0x28c3001e
  .word 0x1460fff9
  .word 0x00000000
  .word 0x0000302d
  .word 0x3c050096
  .word 0x24a5b070
  .word 0x10000006
  .word 0x00000000
  .word 0x00061880
  .word 0x00a32021
  .word 0x8c830108
  .word 0xac830570
  .word 0x24c60001
  .word 0x28c3001e
  .word 0x1460fff9
  .word 0x00000000
  .word 0x3c030096
  .word 0x8c64b1f8
  .word 0x1080000a
  .word 0x00000000
  .word 0x3c030096
  .word 0xac64b658
  .word 0x3c030096
  .word 0x8c64b434
  .word 0x24030018
  .word 0x0083001b
  .word 0x00002012
  .word 0x3c030096
  .word 0xac64b65c
  .word 0x3c030096
  .word 0x8c64b220
  .word 0x10800008
  .word 0x00000000
  .word 0x3c030096
  .word 0xac64b660
  .word 0x3c030096
  .word 0x8c63b45c
  .word 0x00032082
  .word 0x3c030096
  .word 0xac64b664
  .word 0x3c030096
  .word 0x8c64b224
  .word 0x1080000a
  .word 0x00000000
  .word 0x3c030096
  .word 0xac64b668
  .word 0x3c030096
  .word 0x8c64b460
  .word 0x24030006
  .word 0x0083001b
  .word 0x00002012
  .word 0x3c030096
  .word 0xac64b66c
  .word 0x3c030096
  .word 0x8c64b238
  .word 0x3c030096
  .word 0xac64b670
  .word 0x3c030096
  .word 0x8c64b474
  .word 0x2403000a
  .word 0x0083001b
  .word 0x00002012
  .word 0x3c030096
  .word 0xac64b674
  .word 0x3c030096
  .word 0x8c64b204
  .word 0x3c030096
  .word 0xac64b678
  .word 0x3c030096
  .word 0x8c63b440
  .word 0x24040003
  .word 0x0064001b
  .word 0x00002812
  .word 0x3c030096
  .word 0xac65b67c
  .word 0x3c030096
  .word 0x8c65b208
  .word 0x3c030096
  .word 0xac65b680
  .word 0x3c030096
  .word 0x8c63b444
  .word 0x0064001b
  .word 0x00002812
  .word 0x3c030096
  .word 0xac65b684
  .word 0x3c030096
  .word 0x8c65b20c
  .word 0x3c030096
  .word 0xac65b688
  .word 0x3c030096
  .word 0x8c65b448
  .word 0x24030005
  .word 0x00a3001b
  .word 0x00003012
  .word 0x3c050096
  .word 0xaca6b68c
  .word 0x3c050096
  .word 0x8ca6b210
  .word 0x3c050096
  .word 0xaca6b690
  .word 0x3c050096
  .word 0x8ca5b44c
  .word 0x00a3001b
  .word 0x00003012
  .word 0x3c050096
  .word 0xaca6b694
  .word 0x3c050096
  .word 0x8ca6b218
  .word 0x3c050096
  .word 0xaca6b698
  .word 0x3c050096
  .word 0x8ca5b454
  .word 0x00a3001b
  .word 0x00003012
  .word 0x3c050096
  .word 0xaca6b69c
  .word 0x3c050096
  .word 0x8ca6b21c
  .word 0x3c050096
  .word 0xaca6b6a0
  .word 0x3c050096
  .word 0x8ca5b458
  .word 0x00a4001b
  .word 0x00003012
  .word 0x3c050096
  .word 0xaca6b6a4
  .word 0x3c050096
  .word 0x8ca6b240
  .word 0x3c050096
  .word 0xaca6b6a8
  .word 0x3c050096
  .word 0x8ca6b47c
  .word 0x24050018
  .word 0x00c5001b
  .word 0x00003012
  .word 0x3c050096
  .word 0xaca6b6ac
  .word 0x3c050096
  .word 0x8ca6b244
  .word 0x3c050096
  .word 0xaca6b6b0
  .word 0x3c050096
  .word 0x8ca5b480
  .word 0x00053042
  .word 0x3c050096
  .word 0xaca6b6b4
  .word 0x3c050096
  .word 0x8ca6b248
  .word 0x3c050096
  .word 0xaca6b6b8
  .word 0x3c050096
  .word 0x8ca5b484
  .word 0x00053102
  .word 0x3c050096
  .word 0xaca6b6bc
  .word 0x3c050096
  .word 0x8ca6b2a4
  .word 0x3c050096
  .word 0xaca6b6c0
  .word 0x3c050096
  .word 0x8ca5b4e0
  .word 0x00a4001b
  .word 0x00002812
  .word 0x3c040096
  .word 0xac85b6c4
  .word 0x3c040096
  .word 0x8c85b24c
  .word 0x3c040096
  .word 0xac85b6c8
  .word 0x3c040096
  .word 0x8c84b488
  .word 0x00042842
  .word 0x3c040096
  .word 0xac85b6cc
  .word 0x3c040096
  .word 0x8c85b254
  .word 0x3c040096
  .word 0xac85b6f8
  .word 0x3c040096
  .word 0x8c85b274
  .word 0x3c040096
  .word 0xac85b6fc
  .word 0x3c040096
  .word 0x8c85b270
  .word 0x3c040096
  .word 0xac85b700
  .word 0x3c040096
  .word 0x8c85b258
  .word 0x3c040096
  .word 0xac85b704
  .word 0x3c040096
  .word 0x8c85b25c
  .word 0x3c040096
  .word 0xac85b708
  .word 0x3c040096
  .word 0x8c85b260
  .word 0x3c040096
  .word 0xac85b70c
  .word 0x3c040096
  .word 0x8c85b264
  .word 0x3c040096
  .word 0xac85b710
  .word 0x3c040096
  .word 0x8c85b4a0
  .word 0x2404001a
  .word 0x00a4001b
  .word 0x00002812
  .word 0x3c040096
  .word 0xac85b714
  .word 0x3c040096
  .word 0x8c85b278
  .word 0x3c040096
  .word 0xac85b6d8
  .word 0x3c040096
  .word 0x8c84b4b4
  .word 0x0083001b
  .word 0x00002012
  .word 0x3c030096
  .word 0xac64b6dc
  .word 0x3c030096
  .word 0x8c64b26c
  .word 0x3c030096
  .word 0xac64b6d0
  .word 0x3c030096
  .word 0x8c63b4a8
  .word 0x2405000c
  .word 0x0065001b
  .word 0x00002012
  .word 0x3c030096
  .word 0xac64b6d4
  .word 0x3c030096
  .word 0x8c64b268
  .word 0x3c030096
  .word 0xac64b718
  .word 0x3c030096
  .word 0x8c64b27c
  .word 0x3c030096
  .word 0xac64b6e0
  .word 0x3c030096
  .word 0x8c64b284
  .word 0x3c030096
  .word 0xac64b6e4
  .word 0x3c030096
  .word 0x8c63b4c0
  .word 0x0065001b
  .word 0x00002012
  .word 0x3c030096
  .word 0xac64b6e8
  .word 0x3c030096
  .word 0x8c64b288
  .word 0x3c030096
  .word 0xac64b6ec
  .word 0x3c030096
  .word 0x8c64b28c
  .word 0x3c030096
  .word 0xac64b6f4
  .word 0x3c030096
  .word 0x8c64b290
  .word 0x3c030096
  .word 0xac64b6f0
  .word 0x3c030096
  .word 0x8c64b294
  .word 0x3c030096
  .word 0xac64b71c
  .word 0x3c030096
  .word 0x8c64b4d0
  .word 0x24030006
  .word 0x0083001b
  .word 0x00002012
  .word 0x3c030096
  .word 0xac64b720
  .word 0x3c030096
  .word 0x8c64b298
  .word 0x3c030096
  .word 0xac64b724
  .word 0x3c030096
  .word 0x8c63b4d4
  .word 0x000320c2
  .word 0x3c030096
  .word 0xac64b728
  .word 0xdfbf0000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_003bd280(...) FUN_003bd280(__VA_ARGS__)
#pragma opt_loop_invariants reset
#undef DAT_0095b074
#undef DAT_0095b1f8
#undef DAT_0095b208
#undef DAT_0095b20c
#undef DAT_0095b210
#undef DAT_0095b218
#undef DAT_0095b21c
#undef DAT_0095b220
#undef DAT_0095b224
#undef DAT_0095b238
#undef DAT_0095b240
#undef DAT_0095b244
#undef DAT_0095b248
#undef DAT_0095b24c
#undef DAT_0095b254
#undef DAT_0095b258
#undef DAT_0095b25c
#undef DAT_0095b260
#undef DAT_0095b264
#undef DAT_0095b268
#undef DAT_0095b26c
#undef DAT_0095b270
#undef DAT_0095b274
#undef DAT_0095b278
#undef DAT_0095b27c
#undef DAT_0095b284
#undef DAT_0095b288
#undef DAT_0095b290
#undef DAT_0095b294
#undef DAT_0095b298
#undef DAT_0095b2a4
#undef DAT_0095b434
#undef DAT_0095b440
#undef DAT_0095b444
#undef DAT_0095b448
#undef DAT_0095b44c
#undef DAT_0095b454
#undef DAT_0095b458
#undef DAT_0095b45c
#undef DAT_0095b460
#undef DAT_0095b474
#undef DAT_0095b47c
#undef DAT_0095b480
#undef DAT_0095b484
#undef DAT_0095b488
#undef DAT_0095b4a0
#undef DAT_0095b4a8
#undef DAT_0095b4b4
#undef DAT_0095b4c0
#undef DAT_0095b4d0
#undef DAT_0095b4d4
#undef DAT_0095b4e0
#undef DAT_0095b658
#undef DAT_0095b65c
#undef DAT_0095b660
#undef DAT_0095b664
#undef DAT_0095b668
#undef DAT_0095b66c
#undef DAT_0095b670
#undef DAT_0095b674
#undef DAT_0095b678
#undef DAT_0095b67c
#undef DAT_0095b680
#undef DAT_0095b684
#undef DAT_0095b688
#undef DAT_0095b68c
#undef DAT_0095b690
#undef DAT_0095b694
#undef DAT_0095b698
#undef DAT_0095b69c
#undef DAT_0095b6a0
#undef DAT_0095b6a4
#undef DAT_0095b6a8
#undef DAT_0095b6ac
#undef DAT_0095b6b0
#undef DAT_0095b6b4
#undef DAT_0095b6b8
#undef DAT_0095b6bc
#undef DAT_0095b6c4
#undef DAT_0095b6c8
#undef DAT_0095b6cc
#undef DAT_0095b6d0
#undef DAT_0095b6d4
#undef DAT_0095b6d8
#undef DAT_0095b6dc
#undef DAT_0095b6e0
#undef DAT_0095b6e4
#undef DAT_0095b6e8
#undef DAT_0095b6ec
#undef DAT_0095b6f0
#undef DAT_0095b6f4
#undef DAT_0095b6f8
#undef DAT_0095b6fc
#undef DAT_0095b700
#undef DAT_0095b704
#undef DAT_0095b708
#undef DAT_0095b70c
#undef DAT_0095b710
#undef DAT_0095b714
#undef DAT_0095b718
#undef DAT_0095b71c
#undef DAT_0095b720
#undef DAT_0095b724
#undef DAT_0095b728
#undef DAT_0095b070
#undef FUN_003bd870
// FUN_003BD870


short ** FUN_003bd870(void)
{
  return (short **)DAT_0095b070_ptr;
}
#define FUN_003bd870(...) FUN_003bd870(__VA_ARGS__)
#undef FUN_003bd880
// FUN_003BD880


u32 * FUN_003bd880(void)
{
  return (u32 *)DAT_0095b658_ptr;
}
#define FUN_003bd880(...) FUN_003bd880(__VA_ARGS__)
#undef FUN_003bd890
// FUN_003BD890


u32 * FUN_003bd890(void)
{
  return (u32 *)DAT_0095b660_ptr;
}
#define FUN_003bd890(...) FUN_003bd890(__VA_ARGS__)
#undef FUN_003bd8a0
// FUN_003BD8A0


u32 * FUN_003bd8a0(void)
{
  return (u32 *)DAT_0095b668_ptr;
}
#define FUN_003bd8a0(...) FUN_003bd8a0(__VA_ARGS__)
#undef FUN_003bd8b0
#pragma push
/* opt_loop_invariants on: measured off nd 43, object 236/240; on nd 0, object 236/240 (MATCH); retain on. */
#pragma opt_loop_invariants on
// FUN_003BD8B0


u32 FUN_003bd8b0(u32 id, u32 variant, u32 subVariant)
{
  typedef struct SceneLookupEntry {
    u16 id;
    u8 variant;
    u8 subVariant;
    u8 result;
    u8 pad;
  } SceneLookupEntry;
  int index = 0;
  SceneLookupEntry *entries = *(SceneLookupEntry **)DAT_0095b71c_abs;
  int count = *(int *)DAT_0095b720_abs;
  u32 wildcard = 0xff;

  for (; index < count; index++) {
    SceneLookupEntry *entry = &entries[index];

    if (entry->subVariant == wildcard) {
      if (id == entry->id && variant == entry->variant) {
        return entry->result;
      }
    } else if (id == entry->id && variant == entry->variant
               && subVariant == entry->subVariant) {
      return entry->result;
    }
  }

  if ((s32)id >= 0 && (s32)id < 500) {
    return 0;
  }
  if ((s32)id >= 990 && (s32)id < 1000) {
    return 0;
  }
  return (u32)-1;
}
#pragma pop
#define FUN_003bd8b0(...) FUN_003bd8b0(__VA_ARGS__)
#undef FUN_003bd9a0
// FUN_003BD9A0


u16 FUN_003bd9a0(u32 param_1,u32 param_2)
{
  int iVar1;
  u32 base;
  int count;
  int iVar2;

  iVar2 = 0;
  base = *(u32 *)DAT_0095b724_abs;
  count = *(int *)DAT_0095b728_abs;
  goto LAB_003bd9f0;
LAB_003bd9b0:
  iVar1 = iVar2 * 8;
  if (param_1 != *(u16 *)(base + iVar1)) {
    goto LAB_003bda30;
  }
  if (param_2 != *(u8 *)(base + iVar1 + 2)) {
    goto LAB_003bda30;
  }
  if (FUN_003951d0_i32(0xa88) == 1) {
    return *(u16 *)(iVar1 + (int)*(u32 *)DAT_0095b724_abs + 4);
  }
  return *(u16 *)(iVar1 + (int)*(u32 *)DAT_0095b724_abs + 6);
LAB_003bda30:
  iVar2 = iVar2 + 1;
LAB_003bd9f0:
  if (iVar2 < count) {
    goto LAB_003bd9b0;
  }
  return 0;
}
#define FUN_003bd9a0(...) FUN_003bd9a0(__VA_ARGS__)
#undef FUN_003bda60
// FUN_003BDA60



u32 FUN_003bda60(u32 param_1,u32 param_2,u32 param_3,u32 param_4)



{

  int iVar1;

  int lVar2;

  u8 *pbVar3;

  int iVar4;
  int off;
  u32 uv;

  

  iVar1 = *(int *)DAT_0095b674_abs;

  for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {

    pbVar3 = (u8 *)*(int *)DAT_0095b670_abs;

    off = iVar4 * 10;

    pbVar3 = pbVar3 + off;

    if ((((param_1 == *pbVar3) && (param_2 == pbVar3[1])) && (param_3 == *(u16 *)(pbVar3 + 2)))

       && (param_4 == pbVar3[4])) {

      uv = *(u16 *)(pbVar3 + 8);

      if (uv == 0) goto ret1;

      lVar2 = FUN_003951d0(uv);

      if (lVar2 == 1) goto next;

      return (u32)*(u16 *)(off + *(int *)DAT_0095b670_abs + 6);

ret1:
      return (u32)*(u16 *)(pbVar3 + 6);

next:;

    }

  }

  return 0xffffffff;

}
#define FUN_003bda60(...) FUN_003bda60(__VA_ARGS__)
#undef FUN_003bdb80
// FUN_003BDB80


float FUN_003bdb80(void)



{

  return **(float **)0x0095b6f4;

}
#define FUN_003bdb80(...) FUN_003bdb80(__VA_ARGS__)
#undef FUN_003bdba0
// FUN_003BDBA0


u32 FUN_003bdba0(void)



{

  return *(u32 *)0x0095b6f0;

}
#define FUN_003bdba0(...) FUN_003bdba0(__VA_ARGS__)
#undef FUN_003bdbb0
// FUN_003BDBB0


u16 FUN_003bdbb0(void)



{

  return **(u16 **)0x0095b29c;

}
#define FUN_003bdbb0(...) FUN_003bdbb0(__VA_ARGS__)

/* W420 negatives: a named call-result temporary left nd 41/object 360 (window 368, rate 0.113889) unchanged; a volatile s16 raised nd 41/object 360 (rate 0.113889) to nd 48/object 368 (rate 0.130435). */
// FUN_003BDBD0


#ifndef PC_BUILD
asm void FUN_003bdbd0(int param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x0011243c
  .word 0x0004243f
  .word 0x0c05b738
  .word 0x00000000
  .word 0x1040004b
  .word 0x00000000
  .word 0x0011243c
  .word 0x0004243f
  .word 0x0c05ca94
  .word 0x00000000
  .word 0x10400045
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000003f
  .word 0x00000000
  .word 0x26030006
  .word 0x1223003b
  .word 0x00000000
  .word 0x0003243c
  .word 0x0004243f
  .word 0x0c05b738
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843280
  .word 0x240501b6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x26020006
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05b840
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000001d
  .word 0x00000000
  .word 0x26020006
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05ca94
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000013
  .word 0x00000000
  .word 0x26020006
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05b6e8
  .word 0x00000000
  .word 0x0002263c
  .word 0x0004263f
  .word 0x3c030096
  .word 0x8c63b2a8
  .word 0x00701821
  .word 0x90630000
  .word 0x0083182a
  .word 0x14600004
  .word 0x00000000
  .word 0x24030001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x10600008
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42b2a0
  .word 0x84420000
  .word 0x26040006
  .word 0x0040282d
  .word 0x0c05c658
  .word 0x00000000
  .word 0x26100001
  .word 0x2a030006
  .word 0x1460ffc0
  .word 0x00000000
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_003bdbd0(...) FUN_003bdbd0(__VA_ARGS__)
#undef FUN_003bdd40

// FUN_003BDD40

u32 *FUN_003bdd40(void)
{
  return (u32 *)DAT_0095b678_abs;
}
#define FUN_003bdd40(...) FUN_003bdd40(__VA_ARGS__)
#undef FUN_003bdd50

// FUN_003BDD50

u32 *FUN_003bdd50(void)
{
  return (u32 *)DAT_0095b6a8_abs;
}
#define FUN_003bdd50(...) FUN_003bdd50(__VA_ARGS__)
#undef FUN_003bdd60

// FUN_003BDD60


void FUN_003bdd60(u32 param_1,u32 param_2)



{

  FUN_0035bb40(param_1,*(u32 *)0x0095b074,param_2);

  return;

}
#define FUN_003bdd60(...) FUN_003bdd60(__VA_ARGS__)
#undef FUN_003bdd90

// FUN_003BDD90


u32 FUN_003bdd90(int param_1)



{

  u32 uVar1;
  int iVar2;
  u32 *puVar1;
  puVar1 = (u32 *)DAT_0095b070_raw_abs;

  

  if (0x1e < param_1) {

    uVar1 = 0;

  }

  else {

    uVar1 = puVar1[param_1 + 0x15c];

  }

  return uVar1;

}
#define FUN_003bdd90(...) FUN_003bdd90(__VA_ARGS__)
#undef FUN_003bddd0

// FUN_003BDDD0

u32 FUN_003bddd0(void)
{
  return *(u32 *)0x0095b280;
}
#define FUN_003bddd0(...) FUN_003bddd0(__VA_ARGS__)
#undef FUN_003bdde0

// FUN_003BDDE0


void FUN_003bdde0(void)



{
  extern u32 FUN_0016e100(s16 param_1);
  /* This caller uses the s32 ABI; the settled callers above intentionally materialize long arguments. */
  extern s32 FUN_001717c0(s32 param_1);
  extern s32 FUN_00172160(s32 param_1);
  extern s8 FUN_0016dba0(s16 param_1);
  extern void FUN_00171960(s32 param_1,s32 param_2);
  extern s16 FUN_00171ac0(s32 param_1);
  extern void FUN_00171c40(s32 param_1,s32 param_2);

  char cVar1;

  short sVar2;

  u32 uVar3;

  int iVar4;

  

  for (iVar4 = 0; iVar4 < 0x1e; iVar4 = iVar4 + 1) {


    if ((((uVar3 = FUN_0016e100((short)iVar4), uVar3 != 0) &&

          (uVar3 = FUN_001717c0(iVar4), uVar3 != 1)) &&

         (uVar3 = FUN_00172160(iVar4), uVar3 != 1)) &&

        (cVar1 = FUN_0016dba0((short)iVar4), cVar1 != '\n')) {

      FUN_00171960(iVar4,1);

      sVar2 = FUN_00171ac0(iVar4);

      if (sVar2 < 1) {

        FUN_00171c40(iVar4,1);

      }

    }

  }

  return;

}
#define FUN_003bdde0(...) FUN_003bdde0(__VA_ARGS__)
#undef FUN_003bded0

// FUN_003BDED0


u32 FUN_003bded0(u64 param_1)



{

  extern s8 FUN_0016dba0(s16 param_1);
  char cVar1;
  s32 lVar3;

  

  cVar1 = FUN_0016dba0((short)param_1);
  if (cVar1 == '\n') {
    return 5;
  }
  lVar3 = FUN_00172160(param_1);
  if (lVar3 == 1) {
    return 4;
  }
  lVar3 = FUN_001717c0(param_1);
  if (lVar3 == 1) {
    return 3;
  }
  lVar3 = FUN_00172660(param_1);
  if (lVar3 == 1) {
    lVar3 = FUN_003be1c0_typed(param_1,cVar1 + 1);
    if (lVar3 == 1) {
      return 2;
    }
    return 1;
  }
  return 0;

}
#define FUN_003bded0(...) FUN_003bded0(__VA_ARGS__)
#undef FUN_003bdfc0

// FUN_003BDFC0


u8 FUN_003bdfc0(int param_1)



{

  u32 lVar1;

  

  lVar1 = FUN_0016dce0((short)param_1);

  if (lVar1 == 0) {

    FUN_0019d3f0("comuFunction.c",0x291);

  }

  return *(u8 *)(*(u32 *)0x0095b700 + param_1);

}
#define FUN_003bdfc0(...) FUN_003bdfc0(__VA_ARGS__)
#undef FUN_003be020

/* W420 negative: all 720 permutations of the six scalar declarations stayed nd 199/object 384 (window 384, rate 0.518229); DAT_0095b6cc aliases exceeded the 384-byte window (nd 221/224, object 388, rates 0.569588/0.577320). */
// FUN_003BE020

#ifndef PC_BUILD
asm u32 FUN_003be020(int param_1,int param_2,u32 param_3)
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
  .word 0x00a0a82d
  .word 0x00c0a02d
  .word 0x3c020096
  .word 0x8c51b6c8
  .word 0x3c020096
  .word 0x8c50b6cc
  .word 0x0000982d
  .word 0x10000040
  .word 0x00000000
  .word 0x00131040
  .word 0x02221021
  .word 0x90520000
  .word 0x1692003a
  .word 0x00000000
  .word 0x90560001
  .word 0x0012243c
  .word 0x0004243f
  .word 0x0c05ca94
  .word 0x00000000
  .word 0x10400033
  .word 0x00000000
  .word 0x0012243c
  .word 0x0004243f
  .word 0x0c05b840
  .word 0x00000000
  .word 0x24030001
  .word 0x14430009
  .word 0x00000000
  .word 0x0012243c
  .word 0x0004243f
  .word 0x0c05b6e8
  .word 0x00000000
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x0076102a
  .word 0x14400020
  .word 0x00000000
  .word 0x1860000d
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c05c5f0
  .word 0x00000000
  .word 0x24030001
  .word 0x10430018
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c05c858
  .word 0x00000000
  .word 0x24030001
  .word 0x10430012
  .word 0x00000000
  .word 0x2643fffa
  .word 0x00031040
  .word 0x00431021
  .word 0x00021840
  .word 0x3c020096
  .word 0x8c42b70c
  .word 0x00431021
  .word 0x84440000
  .word 0x84430002
  .word 0x84420004
  .word 0xa6a4002a
  .word 0xa6a3002c
  .word 0xa6a2002e
  .word 0xa2b20001
  .word 0x24020001
  .word 0x10000006
  .word 0x00000000
  .word 0x26730001
  .word 0x0270102a
  .word 0x1440ffbf
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
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_003be020(...) FUN_003be020(__VA_ARGS__)
#undef FUN_003be1a0

// FUN_003BE1A0


u8 FUN_003be1a0(int param_1)



{

  return *(int *)(param_1 + 4) == 3;

}
#define FUN_003be1a0(...) FUN_003be1a0(__VA_ARGS__)
#undef FUN_003be1c0

// FUN_003BE1C0


u32 FUN_003be1c0(u32 param_1,s32 param_2)



{
  int iVar1;
  u32 lVar2;
  int iVar2;
  int iVar3;
  u8 *pbBase;

  iVar1 = *(u32 *)DAT_0095b714_abs;


  if (param_2 < 2) {
    return 0;
  }

  iVar3 = 0;
  iVar2 = (int)param_2 * 2;
  for (; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    pbBase = DAT_0095b710_ptr_abs[0];
    if (((param_1 == pbBase[iVar3 * 0x1a]) &&
        (*(u16 *)(iVar2 + (int)pbBase + iVar3 * 0x1a + 4) != 0)) &&
       (lVar2 = FUN_0016f190_comu(*(u16 *)(iVar2 + (int)pbBase +
                                            iVar3 * 0x1a + 4)),
        lVar2 == 0)) {
      return 1;
    }
  }

  return 0;
}
#define FUN_003be1c0(...) FUN_003be1c0(__VA_ARGS__)
#undef FUN_003be2a0

/* opt_loop_invariants on: measured nd 928 -> 876, object 1588/1600 -> 1588/1600; opt_lifetimes on alone: nd 928 -> 926, object 1588/1600 -> 1584/1600; stacked: nd 874, object 1584/1600 (retained). */
#pragma opt_loop_invariants on
#pragma opt_lifetimes on
/* W415 probes: two-argument aliases regressed nd874 -> 999 (object 1576/1600); retail passes the guarded byte as a third argument, retained below (nd888, object 1584/1600). */
// FUN_003BE2A0
#ifndef PC_BUILD
asm u32 FUN_003be2a0(int param_1,int *param_2,u32 param_3,u32 param_4,u8 *param_5)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080b02d
  .word 0x00a0b82d
  .word 0x00c0a02d
  .word 0x00e0982d
  .word 0x0100902d
  .word 0x3c150096
  .word 0x26b5b070
  .word 0x0000882d
  .word 0x0014243c
  .word 0x0004243f
  .word 0x0c05b738
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843280
  .word 0x2405032a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x24060038
  .word 0x0c148502
  .word 0x00000000
  .word 0xa2540000
  .word 0xa2530002
  .word 0x0014243c
  .word 0x0004243f
  .word 0x0c05b6e8
  .word 0x00000000
  .word 0x0002863c
  .word 0x0010863f
  .word 0x1e000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000154
  .word 0x00000000
  .word 0x2e610008
  .word 0x1020014f
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463b350
  .word 0x00131080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x00141080
  .word 0x00551021
  .word 0x24530480
  .word 0x8c420480
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843280
  .word 0x24050339
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0014243c
  .word 0x0004243f
  .word 0x0c05b748
  .word 0x00000000
  .word 0x0002263c
  .word 0x0004263f
  .word 0x2881000a
  .word 0x14200002
  .word 0x00000000
  .word 0x24040009
  .word 0x2603ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00821821
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021840
  .word 0x8e620000
  .word 0x00432821
  .word 0x26310002
  .word 0x84a40008
  .word 0x84a3000a
  .word 0x84a2000c
  .word 0xa644001e
  .word 0xa6430020
  .word 0xa6420022
  .word 0x84a4000e
  .word 0x84a30010
  .word 0x84a20012
  .word 0xa6440024
  .word 0xa6430026
  .word 0xa6420028
  .word 0x90a60014
  .word 0x10c00119
  .word 0x00000000
  .word 0x0280202d
  .word 0x0240282d
  .word 0x0c0ef808
  .word 0x00000000
  .word 0x24030001
  .word 0x14430112
  .word 0x00000000
  .word 0x26310001
  .word 0x1000010f
  .word 0x00000000
  .word 0x00141080
  .word 0x00551021
  .word 0x245104f8
  .word 0x8c4204f8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843280
  .word 0x24050351
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2603ffff
  .word 0x00031040
  .word 0x00431021
  .word 0x000218c0
  .word 0x8e220000
  .word 0x00432821
  .word 0x84a40008
  .word 0x84a3000a
  .word 0x84a2000c
  .word 0xa644001e
  .word 0xa6430020
  .word 0xa6420022
  .word 0x84a4000e
  .word 0x84a30010
  .word 0x84a20012
  .word 0xa6440024
  .word 0xa6430026
  .word 0xa6420028
  .word 0x84a40014
  .word 0x84a30016
  .word 0x84a20018
  .word 0xa644002a
  .word 0xa643002c
  .word 0xa642002e
  .word 0x84a4001a
  .word 0x84a3001c
  .word 0x84a2001e
  .word 0xa6440030
  .word 0xa6430032
  .word 0xa6420034
  .word 0x24110003
  .word 0x24020001
  .word 0x16c200e2
  .word 0x00000000
  .word 0x0014243c
  .word 0x0004243f
  .word 0x26020001
  .word 0x00022e3c
  .word 0x00052e3f
  .word 0x0c05b904
  .word 0x00000000
  .word 0x100000d9
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c45b714
  .word 0x0000302d
  .word 0x3c020096
  .word 0x8c44b710
  .word 0x1000000e
  .word 0x00000000
  .word 0x00061040
  .word 0x00461021
  .word 0x00021080
  .word 0x00461021
  .word 0x00021040
  .word 0x00821821
  .word 0x90620000
  .word 0x16820004
  .word 0x00000000
  .word 0x24700002
  .word 0x10000006
  .word 0x00000000
  .word 0x24c60001
  .word 0x00c5102a
  .word 0x1440fff1
  .word 0x00000000
  .word 0x0000802d
  .word 0x16000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843280
  .word 0x24050365
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x86040000
  .word 0x86030002
  .word 0x86020004
  .word 0xa644001e
  .word 0xa6430020
  .word 0xa6420022
  .word 0x24110001
  .word 0x100000b1
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00021840
  .word 0x3c020096
  .word 0x8c42b6f8
  .word 0x00431021
  .word 0x84440000
  .word 0x84430002
  .word 0x84420004
  .word 0xa644001e
  .word 0xa6430020
  .word 0xa6420022
  .word 0xa2400023
  .word 0x24110001
  .word 0x100000a1
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00021840
  .word 0x3c020096
  .word 0x8c42b704
  .word 0x00431021
  .word 0x84440000
  .word 0x84430002
  .word 0x84420004
  .word 0xa644001e
  .word 0xa6430020
  .word 0xa6420022
  .word 0x24110001
  .word 0x10000092
  .word 0x00000000
  .word 0x00141080
  .word 0x00551021
  .word 0x24500480
  .word 0x8c420480
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843280
  .word 0x2405037d
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e020000
  .word 0x844404f4
  .word 0x844304f6
  .word 0x844204f8
  .word 0xa644001e
  .word 0xa6430020
  .word 0xa6420022
  .word 0x24110001
  .word 0x1000007d
  .word 0x00000000
  .word 0x0014243c
  .word 0x0004243f
  .word 0x0c05ca94
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843280
  .word 0x24050388
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0f095c
  .word 0x00000000
  .word 0x2683fffa
  .word 0x00031880
  .word 0x00431821
  .word 0x00031040
  .word 0x00431021
  .word 0x00021840
  .word 0x3c020096
  .word 0x8c42b708
  .word 0x00431021
  .word 0x84440000
  .word 0x84430002
  .word 0x84420004
  .word 0xa644001e
  .word 0xa6430020
  .word 0xa6420022
  .word 0x24110001
  .word 0x1000005d
  .word 0x00000000
  .word 0x3c020096
  .word 0x2442b6a8
  .word 0x0000202d
  .word 0x8c510000
  .word 0x8c430004
  .word 0x0000282d
  .word 0x10000010
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x000210c0
  .word 0x02221021
  .word 0x90420000
  .word 0x16820008
  .word 0x00000000
  .word 0x28810020
  .word 0x10200009
  .word 0x00000000
  .word 0x00041040
  .word 0x005d1021
  .word 0xa4450090
  .word 0x24840001
  .word 0x24a50001
  .word 0x00a3102a
  .word 0x1440ffef
  .word 0x00000000
  .word 0x14800009
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843280
  .word 0x240503b3
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000003b
  .word 0x00000000
  .word 0x24020001
  .word 0x16c2000b
  .word 0x00000000
  .word 0x8ee20000
  .word 0x00021040
  .word 0x005d1021
  .word 0x94430090
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02223021
  .word 0x10000013
  .word 0x00000000
  .word 0x2a020002
  .word 0x14400004
  .word 0x00000000
  .word 0x2a02000a
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843280
  .word 0x240503ca
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00101040
  .word 0x005d1021
  .word 0x9443008c
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02223021
  .word 0x84c40002
  .word 0x84c30004
  .word 0x84c20006
  .word 0xa644001e
  .word 0xa6430020
  .word 0xa6420022
  .word 0x84c40008
  .word 0x84c3000a
  .word 0x84c2000c
  .word 0xa6440024
  .word 0xa6430026
  .word 0xa6420028
  .word 0x0000282d
  .word 0x10000007
  .word 0x00000000
  .word 0x00052040
  .word 0x00c41021
  .word 0x9443000e
  .word 0x02441021
  .word 0xa4430014
  .word 0x24a50001
  .word 0x28a20005
  .word 0x1440fff8
  .word 0x00000000
  .word 0x24110002
  .word 0xae510004
  .word 0x24020001
  .word 0xdfbf0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_003be2a0(...) FUN_003be2a0(__VA_ARGS__)
#pragma opt_lifetimes reset
#pragma opt_loop_invariants reset
#undef FUN_003be8e0

// FUN_003BE8E0
u32 FUN_003be8e0(long param_1,u64 param_2)
{
  s32 var_7;
  s8 cVar1;
  s32 lVar2;

  if ((param_1 >= 0x1e) || (param_1 < 0)) {
    K_Assert(D_006A3280,0x3e8);
  }

  cVar1 = datGetSocialLinkLevel((s16)param_1);
  if (cVar1 == '\n') {
    var_7 = 5;
  }
  else {
    lVar2 = FUN_00172160(param_1);
    if (lVar2 == 1) {
      var_7 = 4;
    }
    else {
      lVar2 = FUN_001717c0(param_1);
      if (lVar2 == 1) {
        var_7 = 3;
      }
      else {
        lVar2 = FUN_00172660(param_1);
        if (lVar2 == 1) {
          lVar2 = FUN_003be1c0_typed(param_1,cVar1 + 1);
          if (lVar2 == 1) {
            var_7 = 2;
          }
          else {
            var_7 = 1;
          }
        }
        else {
          var_7 = 0;
        }
      }
    }
  }

  FUN_003be2a0_typed(0,0,param_1,var_7,param_2);
  return 1;
}
#define FUN_003be8e0(...) FUN_003be8e0(__VA_ARGS__)
#undef FUN_003bea20

// FUN_003BEA20


u8 FUN_003bea20(int param_1,int param_2)



{
  u8 *pbVar1;
  int iVar2;
  int iVar3;

  if (!(param_1 < 4)) {

    FUN_0019d3f0("comuFunction.c",0x3f9);

  }

  iVar2 = (int)param_1 * 6;
  iVar3 = param_2;
  param_2 = iVar2;
  param_2 += iVar3;
  pbVar1 = (u8 *)(param_2 + 0x1e);
  if (!(*(u8 *)(param_2 + 0x1e) < 0x2a)) {

    FUN_0019d3f0("comuFunction.c",0x3fb);

  }

  return *pbVar1;

}
#define FUN_003bea20(...) FUN_003bea20(__VA_ARGS__)
#undef FUN_003beab0

// FUN_003BEAB0


u32 FUN_003beab0(u32 param_1,u32 param_2,int *param_3)



{
  u8 *pbVar1;
  u8 *pbBase;
  int iVar2;

  iVar2 = 0;
  pbBase = *(u8 **)(0x0095b718);
  goto check;
loop:
  pbVar1 = pbBase + iVar2 * 0x20;
  if (param_1 != *pbVar1) goto next;
  if (param_2 != pbVar1[1]) goto next;
  *param_3 = iVar2;
  return 1;
next:
  iVar2 = iVar2 + 1;
check:
  if (iVar2 < 0x40) goto loop;
  return 0;
}

#define FUN_003beab0(...) FUN_003beab0(__VA_ARGS__)
#undef FUN_003beb10

// FUN_003BEB10


int FUN_003beb10(int param_1)



{
  u32 base;

  if ((param_1 < 0) || !(param_1 < 0x40)) {

    FUN_0019d3f0("comuFunction.c",0x416);

  }

  base = *(u32 *)0x0095b718;
  return base + param_1 * 0x20;

}
#define FUN_003beb10(...) FUN_003beb10(__VA_ARGS__)
#undef FUN_003beb70

// FUN_003BEB70


void FUN_003beb70(int param_1)



{

  u32 lVar1;

  

  lVar1 = FUN_0016dce0((short)param_1);

  if (lVar1 == 0) {

    FUN_0019d3f0("comuFunction.c",0x422);

  }

  FUN_0016f1f0(param_1 + 0x9d0,1);

  return;

}
#define FUN_003beb70(...) FUN_003beb70(__VA_ARGS__)
#undef FUN_003bebd0

// FUN_003BEBD0


u8 FUN_003bebd0(int param_1)



{

  u32 lVar1;

  

  lVar1 = FUN_0016dce0((short)param_1);

  if (lVar1 == 0) {

    FUN_0019d3f0("comuFunction.c",0x42b);

  }

  lVar1 = FUN_0016f190_comu(param_1 + 0x9d0);

  if (lVar1 == 1) {

    return 1;

  }

  return 0;

}
#define FUN_003bebd0(...) FUN_003bebd0(__VA_ARGS__)
#undef FUN_003bec50

// FUN_003BEC50


void FUN_003bec50(void)



{

  int iVar1;

  

  for (iVar1 = 0; iVar1 < 0x1e; iVar1 = iVar1 + 1) {

    FUN_0016f1f0(iVar1 + 0x9d0,0);

  }

  return;

}
#define FUN_003bec50(...) FUN_003bec50(__VA_ARGS__)
#undef FUN_003beca0

/* opt_common_subs off: measured nd 279 -> 238, object 472/480 -> 472/480. */
#pragma opt_common_subs off
/* W420 negative: reversing FUN_003c2b40's two stack-pointer arguments raised nd 238/object 472 (window 480, rate 0.504237) to nd 239/object 472 (rate 0.506356); reverted. */
// FUN_003BECA0


#ifndef PC_BUILD
asm int FUN_003beca0(int param_1)
{
  .set noreorder
  .word 0x27bdff40
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
  .word 0x0080a82d
  .word 0x0000982d
  .word 0x3c020096
  .word 0x8c51b6dc
  .word 0x3c020096
  .word 0x8c50b6d8
  .word 0xafa000bc
  .word 0xafa000b8
  .word 0x0c05f648
  .word 0x00000000
  .word 0x0040b02d
  .word 0x0c05f690
  .word 0x00000000
  .word 0x0040b82d
  .word 0x27a400bc
  .word 0x27a500b8
  .word 0x0c0f0ad0
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000048
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000041
  .word 0x00000000
  .word 0x00141080
  .word 0x00541021
  .word 0x02021821
  .word 0x90620000
  .word 0x16c2003a
  .word 0x00000000
  .word 0x90620001
  .word 0x16e20037
  .word 0x00000000
  .word 0x90720002
  .word 0x907e0003
  .word 0x90620004
  .word 0x7fa200a0
  .word 0x0012243c
  .word 0x0004243f
  .word 0x0c05b6e8
  .word 0x00000000
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x007e082a
  .word 0x1420002a
  .word 0x00000000
  .word 0x7ba200a0
  .word 0x0043102a
  .word 0x14400026
  .word 0x00000000
  .word 0x24020009
  .word 0x14620007
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c05c998
  .word 0x00000000
  .word 0x24030001
  .word 0x1043001d
  .word 0x00000000
  .word 0x0012243c
  .word 0x0004243f
  .word 0x0c05b738
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843280
  .word 0x2405042b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x264409d0
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x38420001
  .word 0x2c430001
  .word 0x24020001
  .word 0x1062000a
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0f0b14
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x00131080
  .word 0x02a21021
  .word 0xac520000
  .word 0x26730001
  .word 0x26940001
  .word 0x0291102a
  .word 0x1440ffbe
  .word 0x00000000
  .word 0x0260102d
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
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_003beca0(...) FUN_003beca0(__VA_ARGS__)
#pragma opt_common_subs reset
#undef FUN_003bee80

/* opt_loop_invariants on: measured nd 441 -> 420, object 664/688 -> 664/688; opt_lifetimes on alone: nd 441 -> 438, object 664/688 -> 668/688; stacked: nd 419, object 664/688 (retained). */
#pragma opt_loop_invariants on
#pragma opt_lifetimes on
/* W420 negative: routing all DAT_0095b730 table accesses through its absolute alias raised nd 419/object 664 (window 688, rate 0.631024) to nd 460/object 680 (rate 0.676471); reverted. */
// FUN_003BEE80


#ifndef PC_BUILD
asm u8 * FUN_003bee80(u16 param_1,int *param_2)
{
  .set noreorder
  .word 0x27bdff60
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
  .word 0x0080a02d
  .word 0x00a0b02d
  .word 0x0014243c
  .word 0x0004243f
  .word 0x0c05b7cc
  .word 0x00000000
  .word 0x0002be3c
  .word 0x0017be3f
  .word 0x0000902d
  .word 0x24040001
  .word 0x0c05b1f8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c05b4a0
  .word 0x00000000
  .word 0x305e00ff
  .word 0x2411ffff
  .word 0x2410270f
  .word 0x24130001
  .word 0x10000038
  .word 0x00000000
  .word 0x8f83b730
  .word 0x001310c0
  .word 0x00531023
  .word 0x0002a840
  .word 0x00751821
  .word 0x90620002
  .word 0x16e2002f
  .word 0x00000000
  .word 0x94630000
  .word 0x30620010
  .word 0x1440002b
  .word 0x00000000
  .word 0x30620008
  .word 0x14400028
  .word 0x00000000
  .word 0x30620040
  .word 0x1040000a
  .word 0x00000000
  .word 0x0014243c
  .word 0x0004243f
  .word 0x0c05b6e8
  .word 0x00000000
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x2402000a
  .word 0x1462001c
  .word 0x00000000
  .word 0x8f82b730
  .word 0x00551021
  .word 0x90420003
  .word 0x03c2082a
  .word 0x14200011
  .word 0x00000000
  .word 0x2a42000f
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843280
  .word 0x240504b2
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00121840
  .word 0x3c020096
  .word 0x2442b730
  .word 0x00431021
  .word 0xa4530000
  .word 0x26520001
  .word 0x10000006
  .word 0x00000000
  .word 0x0050082a
  .word 0x10200003
  .word 0x00000000
  .word 0x0040802d
  .word 0x0260882d
  .word 0x26730001
  .word 0x2a620100
  .word 0x1440ffc7
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1222000f
  .word 0x00000000
  .word 0x2a42000f
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843280
  .word 0x240504c4
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00121840
  .word 0x3c020096
  .word 0x2442b730
  .word 0x00431021
  .word 0xa4510000
  .word 0x26520001
  .word 0xaed20000
  .word 0x0000102d
  .word 0x8f8bb730
  .word 0x3c0a0096
  .word 0x254ab730
  .word 0x2644ffff
  .word 0x1000001e
  .word 0x00000000
  .word 0x244c0001
  .word 0x00021840
  .word 0x01434821
  .word 0x10000015
  .word 0x00000000
  .word 0x95280000
  .word 0x000c1840
  .word 0x01433821
  .word 0x94e60000
  .word 0x000618c0
  .word 0x00661823
  .word 0x00031840
  .word 0x01631821
  .word 0x90650003
  .word 0x000818c0
  .word 0x00681823
  .word 0x00031840
  .word 0x01631821
  .word 0x90630003
  .word 0x00a3082a
  .word 0x10200003
  .word 0x00000000
  .word 0xa5260000
  .word 0xa4e80000
  .word 0x258c0001
  .word 0x0192182a
  .word 0x1460ffea
  .word 0x00000000
  .word 0x24420001
  .word 0x0044182a
  .word 0x1460ffe1
  .word 0x00000000
  .word 0x16400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24843280
  .word 0x240504dd
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3c020096
  .word 0x2442b730
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
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_003bee80(...) FUN_003bee80(__VA_ARGS__)
#pragma opt_lifetimes reset
#pragma opt_loop_invariants reset
#undef FUN_003bf130

// FUN_003BF130


u32 FUN_003bf130(void)



{

  u32 uVar1;

  u32 lVar2;

  

  lVar2 = FUN_0027c2b0();

  if ((lVar2 == 0) && (lVar2 = FUN_0027c330(), lVar2 == -1)) {

    uVar1 = 1;

  }

  else {

    uVar1 = 0;

  }

  return uVar1;

}
#define FUN_003bf130(...) FUN_003bf130(__VA_ARGS__)
#undef FUN_003bf180

// FUN_003BF180


void FUN_003bf180(u32 param_1,u32 param_2,u32 param_3)



{
  struct {
    u8 data[12];
    u32 param_1;
    u32 param_2;
    u32 param_3;
    u32 pad;
  } packet;

  FUN_00521408(packet.data,0,0x1c);

  packet.param_1 = param_1;
  packet.param_2 = param_2;
  packet.param_3 = param_3;

  FUN_0027c080(3,packet.data,0x1c,0);
  return;
}
#define FUN_003bf180(...) FUN_003bf180(__VA_ARGS__)
#undef FUN_003bf200

// FUN_003BF200


u32 FUN_003bf200(long param_1,long param_2,long param_3,long param_4)



{

  u32 bVar1;

  u32 lVar2;

  

  if (param_3 == 0xff) {

    lVar2 = FUN_0017e050(param_4,param_1,param_2);

    bVar1 = lVar2 == 1;

  }

  else if ((param_1 == param_3) && (param_2 == param_4)) {

    bVar1 = 1;

  }

  else {

    bVar1 = 0;

  }

  return bVar1;

}
#define FUN_003bf200(...) FUN_003bf200(__VA_ARGS__)
#undef FUN_003bf270

// FUN_003BF270


u32

FUN_003bf270(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)



{
  if (param_3 > param_5 || ((param_3 == param_5) && (param_6 < param_4))) {
    if (param_3 <= param_1) {
      if (param_3 == param_1) {
        if (param_4 <= param_2) {
          return 1;
        }
      } else {
        return 1;
      }
    } else {
      if (!(param_5 < param_1)) {
        if (param_5 == param_1) {
          if (!(param_6 < param_2)) {
            return 1;
          }
        } else {
          return 1;
        }
      }
    }
  } else if ((param_3 <= param_1) && (param_1 <= param_5)) {
    if (param_3 == param_1) {
      if (param_4 <= param_2) {
        return 1;
      }
    } else {
      if (param_5 == param_1) {
        if (!(param_6 < param_2)) {
          return 1;
        }
      } else {
        return 1;
      }
    }
  }
  return 0;
}
#define FUN_003bf270(...) FUN_003bf270(__VA_ARGS__)
#undef FUN_003bf370

// FUN_003BF370


u32 FUN_003bf370(void)
{
  int iVar1;
  u32 bVar2;
  u32 bVar3;
  int *piVar3;
  int iVar4;
  u32 lVar5;
  u8 auStack_20 [28];

  piVar3 = (int *)FUN_00195540();
  iVar4 = FUN_001717b0();
  iVar1 = *piVar3;
  switch (iVar1) {
  case 0:
    DAT_007ce66c = 0;
    *piVar3 = 1;
    break;
  case 1:
    lVar5 = FUN_003c3e80(iVar4 + 0x1e4);
    if (lVar5 == 0) {
      *piVar3 = 2;
    }
    break;
  case 2:
    piVar3[1] = 0;
    piVar3[2] = 2;
    *piVar3 = 3;
    break;
  case 3:
    if (piVar3[1] >= piVar3[2]) {
      piVar3[1] = 0;
      piVar3[2] = 0;
      bVar3 = 1;
    }
    else {
      piVar3[1] = piVar3[1] + 1;
      bVar3 = 0;
    }
    if (bVar3 == 0) {
      break;
    }
    FUN_00521408(auStack_20,0,0x1c);
    ((u32 *)auStack_20)[3] = 0x35d;
    ((u32 *)auStack_20)[4] = 1;
    ((u32 *)auStack_20)[5] = 0;
    FUN_0027c080(3,auStack_20,0x1c,0);
    *piVar3 = 4;
    break;
  case 4:
    lVar5 = FUN_0027c2b0();
    if (lVar5 != 0) goto case4_false;
    lVar5 = FUN_0027c330();
    if (lVar5 != -1) goto case4_false;
    bVar2 = 1;
    goto case4_check;
case4_false:
    bVar2 = 0;
case4_check:
    if (bVar2 != 1) {
      break;
    }
    return 0xffffffff;
  }
  return 0;
}
#define FUN_003bf370(...) FUN_003bf370(__VA_ARGS__)
#undef FUN_003bf510

// FUN_003BF510


u32 FUN_003bf510(void)



{
  int iVar1;
  int *piVar3;
  int iVar4;
  u32 lVar5;
  u32 bVar2;

  piVar3 = (int *)FUN_00195540();
  iVar4 = FUN_001717b0();
  iVar1 = *piVar3;

  switch (iVar1) {
  case 0:
    *piVar3 = 1;
    break;
  case 1:
    lVar5 = FUN_003c3e80(iVar4 + 0x248);
    if (lVar5 == 0) {
      *piVar3 = 2;
    }
    break;
  case 2:
    return 0xffffffff;
  case 3:
    lVar5 = FUN_0027c2b0();
    if (lVar5 != 0) goto case3_false;
    lVar5 = FUN_0027c330();
    if (lVar5 != -1) goto case3_false;
    bVar2 = 1;
    goto case3_check;
case3_false:
    bVar2 = 0;
case3_check:
    if (bVar2 != 1) {
      break;
    }
    return 0xffffffff;
  default:
    break;
  }

  return 0;
}
#define FUN_003bf510(...) FUN_003bf510(__VA_ARGS__)
#undef FUN_003bf610

// FUN_003BF610

u32 FUN_003bf610(void)
{
  int iVar1;
  u32 bVar2;
  int *piVar3;
  u32 lVar4;
  u16 auStack_20 [14];

  piVar3 = (int *)FUN_00195540();
  iVar1 = *piVar3;
  switch (iVar1) {
  case 0:
    piVar3[1] = 0;
    piVar3[2] = 2;
    *piVar3 = 1;
    break;
  case 1:
    FUN_00521408(auStack_20,0,0x1c);
    auStack_20[0] = 7;
    auStack_20[1] = 1;
    auStack_20[2] = 0;
    auStack_20[4] = 0;
    FUN_0027c080(2,auStack_20,0x1c,0);
    *piVar3 = 2;
    break;
  case 2:
    lVar4 = FUN_0027c2b0();
    if ((lVar4 == 0) && (lVar4 = FUN_0027c330(), lVar4 == -1)) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
    if (bVar2 == 1) {
      return 0xffffffff;
    }
    break;
  }
  return 0;
}
#define FUN_003bf610(...) FUN_003bf610(__VA_ARGS__)
