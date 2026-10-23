#include "temporary.h"

typedef int (*code)(...);
typedef u8 bool;
#pragma alias FUN_00396270_f32 FUN_00396270
extern void FUN_00396270_f32(f32, int, f32 *);
typedef u32 undefined3;
typedef struct {
  u8 _pad_d8[0xd8];
  int menuId;
  u32 _pad_dc;
  u32 menuArg;
  u8 _pad_e4[0x860];
  u32 resourceHandles[7];
} EvtMenuState;
typedef struct {
  f32 x;
  f32 y;
  f32 z;
} EvtVec3;
typedef struct {
  f32 x;
  f32 y;
  f32 z;
  f32 dx;
  f32 dy;
  f32 dz;
} EvtRay;

void FUN_003957d0(f32 value, u64 object, u32* data);

extern u32 DAT_0069d590;
extern u32 DAT_0069d5c8;
extern u32 DAT_0069d5d0;
extern u32 DAT_0069d5d8;
extern u32 DAT_0069d5e0;
extern u32 DAT_0069d5e8;
extern u32 DAT_0069d5f0;
extern u32 DAT_0069d5f8;
extern u32 DAT_0069d600;
extern u32 DAT_0069d608;
extern u32 DAT_0069d610;
extern u32 DAT_0069d618;
extern u32 DAT_0069d620;
extern u32 DAT_0069d628;
extern u32 DAT_0069d630;
extern u32 DAT_0069d6e8;
extern u32 DAT_0069d6f0;
extern u8 DAT_0069d910;
extern u32 DAT_0069de40;
extern u32 DAT_0069e180;
#pragma alias DAT_0069e180_char DAT_0069e180
extern char DAT_0069e180_char[];
extern char DAT_0069e1a0[];
extern char DAT_0069e1a2[];
extern char DAT_0069e1aa[];
#pragma alias s_evtMenu_0069ea10 DAT_0069ea10
extern char s_evtMenu_0069ea10[];
#pragma alias s_evtMenu_0069ea00 DAT_0069ea00
extern char s_evtMenu_0069ea00[];
#pragma alias s_evtMenu_0069e9e0 DAT_0069e9e0
extern char s_evtMenu_0069e9e0[];
extern char DAT_0069ebd8[];
#pragma alias s_evtMenuTextFormat_007ccd58 DAT_007ccd58
extern char s_evtMenuTextFormat_007ccd58[];
extern char DAT_007cd010;
extern char DAT_007cd020;
extern char DAT_007cd02c;
extern char DAT_007cd038;
extern char DAT_007cd09c;
#pragma alias DAT_0069e888_abs DAT_0069e888
extern u8 DAT_0069e888_abs[];
#pragma alias DAT_0069f948_abs DAT_0069f948
extern u8 DAT_0069f948_abs[];
#pragma alias DAT_0069f958_abs DAT_0069f958
extern u8 DAT_0069f958_abs[];
#pragma alias DAT_0069f968_abs DAT_0069f968
extern u8 DAT_0069f968_abs[];
#pragma alias DAT_0069f978_abs DAT_0069f978
extern u8 DAT_0069f978_abs[];
#pragma alias DAT_0069fdf0_abs DAT_0069fdf0
extern u8 DAT_0069fdf0_abs[];
#pragma alias DAT_0069fe30_abs DAT_0069fe30
#pragma alias DAT_0069fe10_abs DAT_0069fe10
extern u8 DAT_0069fe10_abs[];
extern u8 DAT_0069fe30_abs[];
#pragma alias DAT_0069ff60_abs DAT_0069ff60
extern u8 DAT_0069ff60_abs[];
#pragma alias DAT_0069ff80_abs DAT_0069ff80
extern u8 DAT_0069ff80_abs[];
#pragma alias DAT_0069ffa0_abs DAT_0069ffa0
extern u8 DAT_0069ffa0_abs[];
#pragma alias DAT_0069ffc0_abs DAT_0069ffc0
extern u8 DAT_0069ffc0_abs[];
extern u32 DAT_0069e420;
#pragma alias DAT_0069e420_abs DAT_0069e420
extern u8 DAT_0069e420_abs[];
#pragma alias DAT_0069e422_abs DAT_0069e422
extern u8 DAT_0069e422_abs[];
extern s8 DAT_0069e422[];
extern code DAT_006a0270[];
extern u32 DAT_006a0bf8;
extern u32 DAT_006a0c00;
extern char DAT_006a0330[];
extern f32 DAT_007cadc0;
extern u32 DAT_007cadd0;
extern u32 DAT_007cae18;
extern u32 DAT_007cafec;
extern f32 DAT_007cb088;
extern f32 DAT_007cb0cc;
extern f32 DAT_007cb110;
typedef struct EvtMenuClampWork {
  u8 pad_000[0xd4];
  s32 state;
  u8 pad_0d8[0xac];
  f32 value;
  f32 minimum;
  f32 maximum;
} EvtMenuClampWork;
extern u32 DAT_007cb120;
#pragma alias DAT_007cb120_f32 DAT_007cb120
extern f32 DAT_007cb120_f32;
#pragma alias DAT_007cb124_f32 DAT_007cb124
extern f32 DAT_007cb124_f32;
extern u32 DAT_007cb124;
extern s16 DAT_007cca68;
extern s16 DAT_007cca6c;
extern u32 DAT_007ccd20;
extern f32 DAT_007cce48;
extern f32 DAT_007cce4c;
extern u32 DAT_007cce78;
extern u32 DAT_007ccf94;
extern u32 DAT_007cd130;
extern u32 DAT_007cdeac;
extern u32 DAT_007ce5d8;
extern u32 DAT_007ce5e4;
extern u32 DAT_007ce5e8;
extern u32 DAT_007ce5ec;
extern u32 DAT_007ce5f0;
extern u32 DAT_007ce5f4;
extern u32 DAT_007ce5f8;
extern u32 DAT_007ce5fc;
extern u32 DAT_007ce600;
extern u32 DAT_007ce604;
extern u32 DAT_007ce608;
extern s32 DAT_007ce60c;
extern u16 DAT_007e094c;
#pragma alias DAT_007e094c_abs DAT_007e094c
extern u8 DAT_007e094c_abs[];
extern u16 DAT_007e094e;
#pragma alias DAT_007e094e_abs DAT_007e094e
extern u8 DAT_007e094e_abs[];
extern u16 DAT_007e0952;
#pragma alias DAT_007e0952_abs DAT_007e0952
extern u8 DAT_007e0952_abs[];
extern u32 DAT_007e095e;
extern u32 DAT_007e095f;
extern u32 DAT_007e0960;
extern u32 DAT_007e0961;
extern u32 DAT_00958470;
extern u32 DAT_009584a4;
extern u32 DAT_009584d0;
extern u32 DAT_009584fc;
extern u32 DAT_0095852c;
extern u32 DAT_0095855c;
extern u32 DAT_00958580;
extern u32 DAT_009585a8;
extern u32 DAT_009585ac;
extern u32 DAT_009585b0;
extern u32 DAT_009585b8;
#pragma alias DAT_009585b8_f32 DAT_009585b8
extern f32 DAT_009585b8_f32;
#pragma alias DAT_009585bc_f32 DAT_009585bc
extern f32 DAT_009585bc_f32;
#pragma alias DAT_009585c0_f32 DAT_009585c0
extern f32 DAT_009585c0_f32;
#pragma alias DAT_009585b8_abs DAT_009585b8
extern u8 DAT_009585b8_abs[];
#pragma alias DAT_009585a8_abs DAT_009585a8
extern u8 DAT_009585a8_abs[];
extern u32 DAT_009585bc;
extern u32 DAT_009585c0;
extern u32 DAT_009585d0;
extern u32 DAT_00958700;
#pragma alias DAT_00958700_abs DAT_00958700
extern u8 DAT_00958700_abs[];
#pragma alias DAT_00958700_f32 DAT_00958700
extern f32 DAT_00958700_f32[];
extern u32 DAT_00958704;
#pragma alias DAT_00958704_f32 DAT_00958704
extern f32 DAT_00958704_f32;
#pragma alias DAT_00958708_f32 DAT_00958708
extern f32 DAT_00958708_f32;
#pragma alias DAT_0095870c_f32 DAT_0095870c
extern f32 DAT_0095870c_f32;
#pragma alias DAT_00958710_f32 DAT_00958710
extern f32 DAT_00958710_f32;
#pragma alias DAT_00958714_f32 DAT_00958714
extern f32 DAT_00958714_f32;
#pragma alias DAT_00958718_f32 DAT_00958718
extern f32 DAT_00958718_f32;
#pragma alias DAT_0095871c_f32 DAT_0095871c
extern f32 DAT_0095871c_f32;
#pragma alias DAT_00958720_f32 DAT_00958720
extern f32 DAT_00958720_f32;
#pragma alias DAT_00958724_f32 DAT_00958724
extern f32 DAT_00958724_f32;
#pragma alias DAT_00958728_f32 DAT_00958728
extern f32 DAT_00958728_f32;
#pragma alias DAT_0095872c_f32 DAT_0095872c
extern f32 DAT_0095872c_f32;
#pragma alias DAT_00958730_f32 DAT_00958730
extern f32 DAT_00958730_f32;
#pragma alias DAT_00958734_f32 DAT_00958734
extern f32 DAT_00958734_f32;
#pragma alias DAT_00958738_f32 DAT_00958738
extern f32 DAT_00958738_f32;
#pragma alias DAT_0095873c_f32 DAT_0095873c
extern f32 DAT_0095873c_f32;
#pragma alias DAT_00958740_f32 DAT_00958740
extern f32 DAT_00958740_f32;
#pragma alias DAT_00958744_f32 DAT_00958744
extern f32 DAT_00958744_f32;
#pragma alias DAT_00958748_f32 DAT_00958748
extern f32 DAT_00958748_f32;
#pragma alias DAT_0095874c_f32 DAT_0095874c
extern f32 DAT_0095874c_f32;
#pragma alias DAT_00958750_f32 DAT_00958750
extern f32 DAT_00958750_f32;
#pragma alias DAT_00958754_f32 DAT_00958754
extern f32 DAT_00958754_f32;
#pragma alias DAT_009585b8_f32_abs DAT_009585b8
extern f32 DAT_009585b8_f32_abs[];
#pragma alias DAT_009585bc_f32_abs DAT_009585bc
extern f32 DAT_009585bc_f32_abs[];
#pragma alias DAT_009585c0_f32_abs DAT_009585c0
extern f32 DAT_009585c0_f32_abs[];
#pragma alias DAT_00958700_f32_abs DAT_00958700
extern f32 DAT_00958700_f32_abs[];
#pragma alias DAT_00958704_f32_abs DAT_00958704
extern f32 DAT_00958704_f32_abs[];
#pragma alias DAT_00958708_f32_abs DAT_00958708
extern f32 DAT_00958708_f32_abs[];
#pragma alias DAT_0095870c_f32_abs DAT_0095870c
extern f32 DAT_0095870c_f32_abs[];
#pragma alias DAT_00958710_f32_abs DAT_00958710
extern f32 DAT_00958710_f32_abs[];
#pragma alias DAT_00958714_f32_abs DAT_00958714
extern f32 DAT_00958714_f32_abs[];
#pragma alias DAT_00958718_f32_abs DAT_00958718
extern f32 DAT_00958718_f32_abs[];
#pragma alias DAT_0095871c_f32_abs DAT_0095871c
extern f32 DAT_0095871c_f32_abs[];
#pragma alias DAT_00958720_f32_abs DAT_00958720
extern f32 DAT_00958720_f32_abs[];
#pragma alias DAT_00958724_f32_abs DAT_00958724
extern f32 DAT_00958724_f32_abs[];
#pragma alias DAT_00958728_f32_abs DAT_00958728
extern f32 DAT_00958728_f32_abs[];
#pragma alias DAT_0095872c_f32_abs DAT_0095872c
extern f32 DAT_0095872c_f32_abs[];
#pragma alias DAT_00958730_f32_abs DAT_00958730
extern f32 DAT_00958730_f32_abs[];
#pragma alias DAT_00958734_f32_abs DAT_00958734
extern f32 DAT_00958734_f32_abs[];
#pragma alias DAT_00958738_f32_abs DAT_00958738
extern f32 DAT_00958738_f32_abs[];
#pragma alias DAT_0095873c_f32_abs DAT_0095873c
extern f32 DAT_0095873c_f32_abs[];
#pragma alias DAT_00958740_f32_abs DAT_00958740
extern f32 DAT_00958740_f32_abs[];
#pragma alias DAT_00958744_f32_abs DAT_00958744
extern f32 DAT_00958744_f32_abs[];
#pragma alias DAT_00958748_f32_abs DAT_00958748
extern f32 DAT_00958748_f32_abs[];
#pragma alias DAT_0095874c_f32_abs DAT_0095874c
extern f32 DAT_0095874c_f32_abs[];
#pragma alias DAT_00958750_f32_abs DAT_00958750
extern f32 DAT_00958750_f32_abs[];
#pragma alias DAT_00958754_f32_abs DAT_00958754
extern f32 DAT_00958754_f32_abs[];
extern u32 DAT_00958708;
extern u32 DAT_0095870c;
extern u32 DAT_00958710;
extern u32 DAT_00958714;
extern u32 DAT_00958718;
extern u32 DAT_0095871c;
extern u32 DAT_00958720;
extern u32 DAT_00958724;
extern u32 DAT_00958728;
extern u32 DAT_0095872c;
extern u32 DAT_00958730;
extern u32 DAT_00958734;
extern u32 DAT_00958738;
extern u32 DAT_0095873c;
extern u32 DAT_00958740;
extern u32 DAT_00958744;
extern u32 DAT_00958748;
extern u32 DAT_0095874c;
extern u32 DAT_00958750;
extern u32 DAT_00958754;
extern u32 DAT_00958830;
extern u32 DAT_00958834;
extern u32 DAT_00958838;
extern u32 DAT_00958840;
extern u32 DAT_00958844;
extern u32 DAT_00958848;
#pragma alias DAT_00958830_f32_abs DAT_00958830
extern f32 DAT_00958830_f32_abs[];
#pragma alias DAT_00958834_f32_abs DAT_00958834
extern f32 DAT_00958834_f32_abs[];
#pragma alias DAT_00958838_f32_abs DAT_00958838
extern f32 DAT_00958838_f32_abs[];
#pragma alias DAT_00958840_f32_abs DAT_00958840
extern f32 DAT_00958840_f32_abs[];
#pragma alias DAT_00958844_f32_abs DAT_00958844
extern f32 DAT_00958844_f32_abs[];
#pragma alias DAT_00958848_f32_abs DAT_00958848
extern f32 DAT_00958848_f32_abs[];
extern u32 DAT_00958850;
#pragma alias DAT_00958a60_abs DAT_00958a60
extern u8 DAT_00958a60_abs[];
#pragma alias DAT_00958850_abs DAT_00958850
extern u8 DAT_00958850_abs[];
extern u32 DAT_00958890;
extern u32 DAT_00958894;
extern u32 DAT_00958898;
extern u32 DAT_009588a0;
extern u32 DAT_009588a4;
extern u32 DAT_009588a8;
#pragma alias DAT_00958890_abs DAT_00958890
#pragma alias DAT_00958894_abs DAT_00958894
#pragma alias DAT_00958898_abs DAT_00958898
#pragma alias DAT_009588a0_abs DAT_009588a0
#pragma alias DAT_009588a4_abs DAT_009588a4
#pragma alias DAT_009588a8_abs DAT_009588a8
extern u8 DAT_00958890_abs[];
extern u8 DAT_00958894_abs[];
extern u8 DAT_00958898_abs[];
extern u8 DAT_009588a0_abs[];
extern u8 DAT_009588a4_abs[];
extern u8 DAT_009588a8_abs[];
#pragma alias DAT_006a0030_abs DAT_006a0030
extern u8 DAT_006a0030_abs[];
#pragma alias DAT_006a0080_abs DAT_006a0080
extern u8 DAT_006a0080_abs[];
#pragma alias DAT_006a01e0_abs DAT_006a01e0
extern u8 DAT_006a01e0_abs[];
#pragma alias DAT_006a01a0_abs DAT_006a01a0
extern u8 DAT_006a01a0_abs[];
#pragma alias DAT_006a01c0_abs PTR_s_KAIKIN_006a01c0
extern f32 DAT_006a01c0_abs[];
#pragma alias DAT_006a01c4_abs PTR_DAT_006a01c4
extern f32 DAT_006a01c4_abs[];
#pragma alias DAT_006a01c8_abs PTR_s_REVERSE_006a01c8
extern f32 DAT_006a01c8_abs[];
#pragma alias DAT_006a01cc_abs PTR_s_HAMETU_006a01cc
extern f32 DAT_006a01cc_abs[];
#pragma alias DAT_006a01d0_abs DAT_006a01d0
extern u8 DAT_006a01d0_abs[];
#pragma alias DAT_006a0230_abs DAT_006a0230
extern u8 DAT_006a0230_abs[];
#pragma alias DAT_006a0350_abs DAT_006a0350
extern u8 DAT_006a0350_abs[];
#pragma alias DAT_006a03f0_abs DAT_006a03f0
extern u8 DAT_006a03f0_abs[];
#pragma alias DAT_006a0530_abs DAT_006a0530
extern u8 DAT_006a0530_abs[];
#pragma alias DAT_006a05c0_abs DAT_006a05c0
extern u8 DAT_006a05c0_abs[];
#pragma alias DAT_006a0610_abs DAT_006a0610
extern u8 DAT_006a0610_abs[];
#pragma alias DAT_006a0670_abs DAT_006a0670
extern u8 DAT_006a0670_abs[];
#pragma alias DAT_006a06b0_abs DAT_006a06b0
extern u8 DAT_006a06b0_abs[];
#pragma alias DAT_006a06d0_abs DAT_006a06d0
extern u8 DAT_006a06d0_abs[];
#pragma alias DAT_006a06f0_abs DAT_006a06f0
extern u8 DAT_006a06f0_abs[];
#pragma alias DAT_006a0730_abs DAT_006a0730
extern u8 DAT_006a0730_abs[];
#pragma alias DAT_006a0780_abs DAT_006a0780
extern u8 DAT_006a0780_abs[];
#pragma alias DAT_006a07e0_abs DAT_006a07e0
extern u8 DAT_006a07e0_abs[];
#pragma alias DAT_006a0890_abs DAT_006a0890
extern u8 DAT_006a0890_abs[];
#pragma alias DAT_006a0920_abs DAT_006a0920
extern u8 DAT_006a0920_abs[];
#pragma alias DAT_006a0990_abs DAT_006a0990
extern u8 DAT_006a0990_abs[];
#pragma alias DAT_006a09f0_abs DAT_006a09f0
extern u8 DAT_006a09f0_abs[];
extern u32 DAT_009588b0;
extern u32 DAT_009588b4;
extern u32 DAT_009588b8;
extern u32 DAT_009588bc;
extern u32 DAT_009588c0;
extern u32 DAT_009588c4;
extern u32 DAT_009588c8;
extern u32 DAT_009588cc;
extern u32 DAT_009588d0;
extern u32 DAT_009588d4;
extern u32 DAT_009588d8;
extern u32 DAT_009588dc;
extern u32 DAT_009588e0;
extern u32 DAT_009588e4;
extern u32 DAT_009588e8;
extern u32 DAT_009588ec;
extern u32 DAT_00958970;
extern u32 DAT_00958978;
extern u32 DAT_0095897a;
extern u32 DAT_0095897c;
extern u32 DAT_0095897e;
extern u32 DAT_00958980;
extern u32 DAT_009589c8;
extern u32 DAT_009589cc;
extern u32 DAT_009589d0;
extern u32 DAT_009589e0;
extern u32 DAT_009589e4;
extern u32 DAT_009589e8;
extern u32 DAT_00958a60;
extern u32 DAT_00958a90;
extern u32 DAT_00960088;
extern code DAT_00960090;
extern code DAT_009600a0;
extern code DAT_0096017c;
extern code DAT_00960184;
extern u8 *PTR_DAT_0069d930;
extern u8 *PTR_DAT_0069d960;
extern u8 *PTR_DAT_0069da10;
extern u8 *PTR_DAT_0069da50;
extern u8 *PTR_DAT_0069da60;
extern u8 *PTR_DAT_0069db10;
extern u8 *PTR_DAT_0069ed90;
extern u8 *PTR_DAT_0069ede0;
extern u8 *PTR_DAT_0069ee10;
extern u8 *PTR_DAT_0069ee20;
extern u8 *PTR_DAT_0069ee40;
extern u8 *PTR_DAT_0069ee44;
extern u8 *PTR_DAT_0069ee48;
extern u8 *PTR_DAT_0069ee50;
extern u8 *PTR_DAT_0069ee54;
extern u8 *PTR_DAT_0069ee58;
extern u8 *PTR_DAT_0069eeb0;
extern u8 *PTR_DAT_0069eed0;
extern u8 *PTR_DAT_0069f9a4;
extern u8 *PTR_DAT_0069f9a8;
extern u8 *PTR_DAT_0069f9d8;
extern u8 *PTR_DAT_0069f9e0;
extern u8 *PTR_DAT_0069fa80;
extern u8 *PTR_DAT_006a01c4;
extern u8 *PTR_DAT_007cca5c;
extern u8 *PTR_DAT_007cca88;
extern u8 *PTR_DAT_007ccc50;
extern u8 *PTR_DAT_007ccc58;
extern u8 *PTR_DAT_007ccd8c;
extern u8 *PTR_DAT_007ccda4;
extern u8 *PTR_DAT_007ccdbc;
extern u8 *PTR_DAT_007ccf54;
extern u8 *PTR_DAT_007ccf60;
extern u8 *PTR_DAT_007ccf64;
extern u8 *PTR_DAT_007ccf7c;
extern u8 *PTR_DAT_007ccfa8;
extern u8 *PTR_DAT_007cd230;
extern u8 *PTR_DAT_007cd234;
extern u8 *PTR_DAT_007cd238;
extern u8 *PTR_DAT_007cd23c;
extern u8 *PTR_DAT_007cd25c;
extern u8 *PTR_DAT_007cd2d4;
extern u8 *PTR_DAT_007cd3d0;
extern code PTR_LAB_007ba6f0[];
extern code PTR_LAB_007ba740[];
extern code PTR_LAB_007ba7f0[];
extern code PTR_LAB_007ba810[];
extern code PTR_LAB_007ba830[];
extern code PTR_LAB_007ba850[];
extern code PTR_LAB_007ba9f0[];
extern code PTR_LAB_007baa30[];
extern code PTR_LAB_007baa70[];
extern code PTR_LAB_007baaf0[];
extern code PTR_LAB_007bab30[];
extern u8 *PTR_s_ACTIVE_0069f9dc;
extern u8 *PTR_s_ACTIVE_007ccf14;
extern u8 *PTR_s_ALPHA_0069ee3c;
extern u8 *PTR_s_BEZIER_0069fa84;
extern u8 *PTR_s_CAPTURE_007ccf78;
extern u8 *PTR_s_COMSE_007cd3d4;
#pragma alias PTR_DAT_007cd3d0_f32 PTR_DAT_007cd3d0
extern f32 PTR_DAT_007cd3d0_f32;
#pragma alias PTR_s_COMSE_007cd3d4_f32 PTR_s_COMSE_007cd3d4
extern f32 PTR_s_COMSE_007cd3d4_f32;
extern u8 *PTR_s_CREATE_0069da70;
extern u8 *PTR_s_CREATE_0069ee30;
extern u8 *PTR_s_DELETE_0069ee38;
extern u8 *PTR_s_DIRECT_0069e9c0;
#pragma alias PTR_s_DIRECT_0069e9c0_abs PTR_s_DIRECT_0069e9c0
extern u8 *PTR_s_DIRECT_0069e9c0_abs[];
extern u8 *PTR_s_DIRECT_0069f9a0;
extern u8 *PTR_s_DIRECT_0069fa88;
extern u8 *PTR_s_DIRECT_007ccda0;
extern u8 *PTR_s_DIRECT_007cd258;
#pragma alias PTR_s_DIRECT_007cd258_f32 PTR_s_DIRECT_007cd258
extern f32 PTR_s_DIRECT_007cd258_f32;
extern f32 PTR_DAT_007cd25c_f32;
#pragma alias PTR_DAT_007cd25c_f32 PTR_DAT_007cd25c
#pragma alias PTR_s_DISABLE_0069e6c8_abs PTR_s_DISABLE_0069e6c8
extern u8 *PTR_s_DISABLE_0069e6c8_abs[];
extern u8 *PTR_s_DISPONOFF_007ccaa8;
extern u8 *PTR_s_FADEOUT_0069ee14;
extern u8 *PTR_s_FADEOUT_WAIT_007ccf9c;
extern u8 *PTR_s_FADE_IN_007cce88;
extern u8 *PTR_s_FALSE_007ccdb8;
extern u8 *PTR_s_GAKURYOKU_0069feb0;
#pragma alias PTR_s_GAKURYOKU_0069feb0_abs PTR_s_GAKURYOKU_0069feb0
extern u8 *PTR_s_GAKURYOKU_0069feb0_abs[];
extern u8 *PTR_s_HAMETU_006a01cc;
extern u8 *PTR_s_HIRU_SASO_0069d880;
extern u8 *PTR_s_KAIKIN_006a01c0;
extern u8 *PTR_s_KEYFREE_007ccfbc;
extern u8 gp0xffffa2d0;
extern u8 *PTR_s_KUCHI_0069ee18;
extern u8 *PTR_s_LENGTH_007cd22c;
extern u8 *PTR_s_L_FLAG_NOTUSE_0069e990;
#pragma alias PTR_s_L_FLAG_NOTUSE_0069e990_abs PTR_s_L_FLAG_NOTUSE_0069e990
extern u8 *PTR_s_L_FLAG_NOTUSE_0069e990_abs[];
extern u8 *PTR_s_MEPACHI_0069ee1c;
extern u8 *PTR_s_MES_WAIT_007ccf98;
extern u8 *PTR_s_MOVE_D_0069ee34;
extern u8 *PTR_s_MOVE_D_007ccf10;
extern u8 *PTR_s_NORMAL_0069d940;
extern u8 *PTR_s_NORMAL_007ccc60;
extern u8 *PTR_s_NORMAL_007cd2d0;
extern u8 *PTR_s_NOSTOP_007ccfac;
extern u8 *PTR_s_NO_KEYFREE_007ccfb8;
extern u8 *PTR_s_OFFSET_0069e6a0;
#pragma alias PTR_s_OFFSET_0069e6a0_abs PTR_s_OFFSET_0069e6a0
extern u8 *PTR_s_OFFSET_0069e6a0_abs[];
extern u8 *PTR_s_RELEASE_0069ee28;
extern u8 *PTR_s_REPEAT_007ccd88;
extern u8 *PTR_s_REVERSE_006a01c8;
extern u8 *PTR_s_SAVE_PROJ_;
#pragma alias PTR_s_SAVE_PROJ_abs PTR_s_SAVE_PROJ_
extern u8 *PTR_s_SAVE_PROJ_abs[];
extern u8 *PTR_s_SOUTAI_007ccd78;
extern u8 *PTR_s_SPEED_007cd228;
extern u8 *PTR_s_START_0069e100;
#pragma alias PTR_s_START_0069e100_abs PTR_s_START_0069e100
extern u8 *PTR_s_START_0069e100_abs[];
extern u8 *PTR_s_START_0069ee24;
extern u8 *PTR_s_START_007ccf50;
extern u32 fGpffff80d0;
extern f32 fGpffff8294;
extern u32 fGpffff8438;
extern s16 gp0xffff9d78;
extern s16 gp0xffff9d7c;
extern u8 gp0xffff9dd0;
extern u8 gp0xffff9dd8;
extern u8 gp0xffff9df8;
extern u8 gp0xffff9e48;
extern u8 gp0xffff9e58;
extern u8 gp0xffff9e60;
extern u8 gp0xffff9e98;
extern u8 gp0xffff9ea8;
extern u8 gp0xffff9ec0;
extern u8 gp0xffff9ed8;
extern u8 gp0xffff9ee0;
extern u8 gp0xffff9ef8;
extern u8 gp0xffff9f00;
extern u8 gp0xffff9f08;
extern u8 gp0xffff9f10;
extern u8 gp0xffff9f20;
extern u8 gp0xffff9f30;
extern u8 gp0xffff9f58;
extern u8 gp0xffffa050;
extern u8 gp0xffffa100;
extern u8 gp0xffffa000;
extern u8 gp0xffffa028;
extern u8 gp0xffffa058;
extern u8 gp0xffffa060;
extern u8 gp0xffffa068;
extern u8 gp0xffffa070;
extern u8 gp0xffffa0b8;
extern u8 gp0xffffa130;
extern u8 gp0xffffa134;
extern u8 gp0xffffa138;
extern u8 gp0xffffa140;
extern u8 gp0xffffa148;
extern u8 gp0xffffa150;
extern u8 gp0xffffa350;
extern u8 gp0xffffa108;
extern u8 DAT_0069ea58[];
extern u8 DAT_0069e6f0[];
extern u8 DAT_0069f170[];
#pragma alias DAT_0069e6b8_abs DAT_0069e6b8
extern u8 DAT_0069e6b8_abs[];
#pragma alias DAT_0069e878_abs DAT_0069e878
extern u8 DAT_0069e878_abs[];
#pragma alias DAT_0069fc20_abs DAT_0069fc20
extern u8 DAT_0069fc20_abs[];
#pragma alias DAT_0069fcf0_abs DAT_0069fcf0
extern u8 DAT_0069fcf0_abs[];
#pragma alias DAT_0069fd60_abs DAT_0069fd60
extern u8 DAT_0069fd60_abs[];
#pragma alias DAT_0069fdb0_abs DAT_0069fdb0
extern u8 DAT_0069fdb0_abs[];
#pragma alias DAT_0069fa40_abs DAT_0069fa40
extern u8 DAT_0069fa40_abs[];
#pragma alias DAT_0069fa50_abs DAT_0069fa50
extern u8 DAT_0069fa50_abs[];
#pragma alias DAT_0069fa60_abs DAT_0069fa60
extern u8 DAT_0069fa60_abs[];
#pragma alias DAT_0069fd08_abs DAT_0069fd08
extern u8 DAT_0069fd08_abs[];
#pragma alias DAT_0069fd18_abs DAT_0069fd18
extern u8 DAT_0069fd18_abs[];
#pragma alias DAT_0069fd30_abs DAT_0069fd30
extern u8 DAT_0069fd30_abs[];
#pragma alias DAT_0069fd48_abs DAT_0069fd48
extern u8 DAT_0069fd48_abs[];
#pragma alias DAT_007cd020_abs DAT_007cd020
extern u8 DAT_007cd020_abs[];
#pragma alias DAT_007cd0a8_abs DAT_007cd0a8
extern u8 DAT_007cd0a8_abs[];
#pragma alias DAT_007cd2f0_abs DAT_007cd2f0
extern u8 DAT_007cd2f0_abs[];
#pragma alias DAT_0069ea58_abs DAT_0069ea58
extern u8 DAT_0069ea58_abs[];
extern u8 DAT_0069ea68[];
extern u8 DAT_0069eb28[];
extern u8 DAT_0069eb48[];
extern u8 DAT_0069eb58[];
extern u8 DAT_0069ea78[];
#pragma alias DAT_0069ea78_abs DAT_0069ea78
extern u8 DAT_0069ea78_abs[];
extern u8 DAT_0069ea88[];
extern u8 DAT_0069eaa0[];
#pragma alias DAT_0069ea88_abs DAT_0069ea88
extern u8 DAT_0069ea88_abs[];
extern u8 DAT_0069ec48[];
extern u8 DAT_0069ec60[];
extern u8 DAT_0069ec80[];
extern u8 DAT_0069fd78[];
#pragma alias DAT_0069f8b0_abs DAT_0069f8b0
extern u8 DAT_0069f990[];
extern u8 DAT_0069f8b0_abs[];
#pragma alias DAT_0069fb70_abs DAT_0069fb70
extern u8 DAT_0069fb70_abs[];
extern u8 DAT_0069fd88[];
extern u8 DAT_0069fd98[];
extern u8 DAT_0069ec08[];
extern u8 DAT_0069ec18[];
extern u8 DAT_0069ec28[];
#pragma alias DAT_0069ec08_abs DAT_0069ec08
extern u8 DAT_0069ec08_abs[];
#pragma alias DAT_0069ec18_abs DAT_0069ec18
extern u8 DAT_0069ec18_abs[];
#pragma alias DAT_0069ec28_abs DAT_0069ec28
extern u8 DAT_0069ec28_abs[];
extern u8 DAT_0069ec38[];
extern u8 DAT_0069ecb8[];
extern u8 DAT_0069eca0[];
#pragma alias DAT_0069eca0_abs DAT_0069eca0
extern u8 DAT_0069eca0_abs[];
extern u8 DAT_0069ecc8[];
extern u8 DAT_0069ece0[];
extern u8 DAT_0069ed00[];
extern u8 DAT_0069ed20[];
extern u8 DAT_0069ed40[];
extern u8 DAT_0069ed60[];
extern u8 DAT_0069eb38[];
extern u8 DAT_0069fc68[];
extern u8 DAT_0069fc50[];
extern u8 DAT_0069f9c0[];
extern u8 DAT_0069fa70[];
extern u8 DAT_0069fa30[];
extern u8 DAT_0069fb58[];
extern u8 DAT_0069fb88[];
extern u8 DAT_0069fbd8[];
extern u8 DAT_0069fbf0[];
extern u8 DAT_0069fc10[];
#pragma alias DAT_0069fb98_abs DAT_0069fb98
extern u8 DAT_0069fb98_abs[];
#pragma alias DAT_0069fba8_abs DAT_0069fba8
extern u8 DAT_0069fba8_abs[];
#pragma alias DAT_0069fbc0_abs DAT_0069fbc0
extern u8 DAT_0069fbc0_abs[];
extern u8 DAT_007ccca8[];
extern u8 DAT_007cd260[];
extern u8 DAT_0069fc78[];
extern u8 DAT_0069fc88[];
extern u8 DAT_0069fc98[];
extern u8 DAT_0069fca8[];
extern u8 DAT_0069fcb8[];
extern u8 DAT_0069fcc8[];
extern u8 DAT_0069fcd8[];
extern u8 DAT_0069ff10[];
extern u8 DAT_0069ff20[];
extern u8 DAT_0069ff30[];
extern u8 DAT_0069ff40[];
extern u8 DAT_0069ff50[];
#pragma alias DAT_0069ead8_f32 DAT_0069ead8
extern f32 DAT_0069ead8_f32[];
#pragma alias DAT_0069eadc_f32 DAT_0069eadc
extern f32 DAT_0069eadc_f32[];
#pragma alias DAT_0069eae0_f32 DAT_0069eae0
extern f32 DAT_0069eae0_f32[];
#pragma alias DAT_0069eb18_f32 DAT_0069eb18
extern f32 DAT_0069eb18_f32[];
#pragma alias DAT_0069eb1c_f32 DAT_0069eb1c
extern f32 DAT_0069eb1c_f32[];
#pragma alias DAT_0069eb20_f32 DAT_0069eb20
extern f32 DAT_0069eb20_f32[];
extern u8 gp0xffff9fb8;
extern u8 gp0xffffa118;
extern u8 gp0xffffa120;
extern u8 gp0xffffa128;
extern u8 gp0xffffa160;
extern u8 gp0xffffa168;
extern u8 gp0xffffa170;
extern u8 gp0xffffa178;
extern u8 gp0xffffa180;
extern u8 gp0xffffa570;
#pragma alias gp0xffffa578_f32 gp0xffffa578
extern f32 gp0xffffa578_f32[];
#pragma alias gp0xffffa578_f32v gp0xffffa578
extern f32 gp0xffffa578_f32v;


extern u8 gp0xffffa580;
extern u8 gp0xffffa588;
extern u8 gp0xffffa590;
extern u8 gp0xffffa598;
extern u8 gp0xffffa5a0;
extern u8 gp0xffffa5a8;
extern u8 gp0xffffa5b0;
extern u8 gp0xffffa5b8;
extern u8 gp0xffffa5c0;
extern u8 gp0xffffa5c8;
extern u8 gp0xffffa5d0;
extern u8 gp0xffffa668;
extern u8 gp0xffffa670;
extern u8 gp0xffffa678;
extern u8 gp0xffffa680;
extern u8 gp0xffffa6e8;
extern u8 gp0xffffa0b8;
extern u8 gp0xffffa0c0;
extern u8 gp0xffffa3b8;
extern u8 gp0xffffa330;
extern u8 gp0xffffa600;
extern u8 gp0xffffa068;
extern u8 gp0xffffa6c8;
#pragma alias gp0xffffa3b8_arr gp0xffffa3b8
extern u8 gp0xffffa3b8_arr[];
extern u8 DAT_0069ffe0[];
#pragma alias DAT_0069ffe0_abs DAT_0069ffe0
extern u8 DAT_0069ffe0_abs[];
extern u8 gp0xffffa608;
extern u8 gp0xffffa610;
extern u8 gp0xffffa618;
extern u8 gp0xffffa460;
extern u8 gp0xffffa498;
extern u8 gp0xffffa4a0;
extern u8 gp0xffffa4a8;
extern u8 gp0xffffa4b0;
extern u8 gp0xffffa4c0;
extern u8 gp0xffffa4c8;
extern u8 gp0xffffa4d0;
extern u8 gp0xffffa4d8;
extern u8 gp0xffffa4e8;
extern u8 gp0xffffa4f0;
extern u8 gp0xffffa4f8;
extern u8 gp0xffffa500;
extern u8 gp0xffffa508;
extern u8 gp0xffffa510;
extern u8 gp0xffffa518;
extern u8 gp0xffffa630;
extern u8 gp0xffffa638;
extern u8 gp0xffffa640;
extern u8 gp0xffffa648;
extern u8 gp0xffffa688;
extern u8 gp0xffffa690;
extern u8 gp0xffffa698;
extern u8 gp0xffffa6a0;
extern u32 iGpffffb8f0;
extern u32 iGpffffb904;
extern u32 iGpffffb920;
extern u32 iGpffffb924;
extern char *s_1234567890A_0069f7c0;
#pragma alias s_1234567890A_0069f7c0_abs s_1234567890A_0069f7c0
extern u8 s_1234567890A_0069f7c0_abs[];
extern char *s_ADX_SE_MODE_0069db88;
extern char *s_BATTLE_BLUR_USE__0069ddf0;
extern char *s_BISTA_MODE_0069dca8;
extern char *s_B_UP_CONTROL_SELECT_0069dc10;
extern char *s_CAMERA_CONTROL_TYPE_0069dbd0;
extern char *s_COND_ON_SELECT_0069dd60;
extern char *s_CONFIG_DRAW_STOP_0069dc60;
extern char *s_CONTROL_TYPE_0069db98;
extern char *s_CUSTOM_EVENT_SELECT_0069dd40;
extern char *s_DELETE_FRAME_OK__0069db30;
extern char *s_EFFECT_MODE_0069dc38;
extern char *s_END_STOP_MODE_0069dcd8;
extern char *s_FADE_MODE_0069dcc8;
extern char *s_FADE_TYPE_0069db78;
extern char *s_FIELDOBJ_EDIT_PARAM_0069dd80;
extern char *s_FIELD_EDIT_GO__0069ddc0;
extern char *s_FIELD_EFFECT_MODE_0069dbf0;
extern char *s_FRAME_SET_OK__0069dda8;
extern char *s_HOKAN_MODE_0069db48;
extern char *s_KEYFREE_SELECT_0069dd20;
extern char *s_KOMA_MODE_0069dc28;
extern char *s_MESSAGE_STOP_0069dd08;
extern char *s_MESSAGE_TYPE_0069de08;
extern char *s_ON_OFF_MODE_0069db58;
extern char *s_PADACT_TYPE_0069dc48;
extern char *s_PATH_APPLY_MODE_0069e6e0;
extern char *s_PRIORITY_0069dcb8;
extern char *s_SELECT_MODE_0069dc98;
extern char *s_STAGE_0069f1b0;
extern char *s_TIMEI_FADE_DOWN_UP_0069dc80;
extern char *s_TRANS_MODE_0069db68;
extern char *s_UNIT_CONTROL_TYPE_0069dbb0;
extern char *s_VOICE_FILE_LOAD__0069ddd0;
extern char *s_WAIT_MODE_SELECT_0069dcf0;
extern u32 uGpffff841c;
extern u32 uGpffff9d78;
extern u32 uGpffff9d7c;
extern u32 uGpffffa4b8;
extern u32 uGpffffa4bc;
extern f32 uGpffffa628;
extern f32 uGpffffa62c;
extern u32 uGpffffa650;
extern u32 uGpffffa654;
#pragma alias gp0xffffa650_f32 uGpffffa650
extern f32 gp0xffffa650_f32;
#pragma alias gp0xffffa654_f32 uGpffffa654
extern f32 gp0xffffa654_f32;
extern u32 uGpffffb8ec;
extern u32 uGpffffb900;
extern u32 uGpffffb924;

u32 FUN_00524388(const char *param_1);
u32 FUN_003b5d00(void);
bool FUN_0036d320(int param_1);
bool FUN_0036f480(void);
bool FUN_00372c40(int param_1);
#pragma alias FUN_00372c40_ptr FUN_00372c40
extern bool FUN_00372c40_ptr(int param_1);
code * FUN_0036e690(int param_1);
code * FUN_0036ed30(u64 param_1);
code * FUN_0036edd0(void);
code * FUN_0036ee30(void);
float FUN_0038a220(int param_1);
#pragma alias FUN_00523ac8_evt4 FUN_00523ac8
extern void FUN_00523ac8_evt4(u8 *param_1,const char *param_2,void *param_3,void *param_4);
float FUN_0038a900(int param_1);
int FUN_00361830(int param_1);
#pragma alias FUN_00361830_ptr FUN_00361830
extern u8 *FUN_00361830_ptr(int param_1);
int FUN_00361ee0(int param_1,int param_2);
int FUN_00361f20(int param_1);
int FUN_00361f60(int param_1,int param_2);
int FUN_00361fe0(long param_1,int param_2);
int FUN_0036be60(u64 param_1,long param_2,u64 param_3);
int FUN_0036fda0(int param_1,int param_2,int param_3);
int FUN_00371dd0(int param_1,int param_2,int param_3);
int FUN_00372790(int param_1,int param_2,int param_3);
int FUN_00375000(int param_1,int param_2,int param_3);
int FUN_0037caf0(int param_1,int param_2,int param_3);
int FUN_0037d5d0(int param_1,int param_2,int param_3);
int FUN_0037e1b0(int param_1,int param_2,int param_3);
int FUN_0037ead0(int param_1,int param_2,int param_3);
int FUN_0037f3d0(int param_1,int param_2,int param_3);
int FUN_0037fae0(u64 param_1,u64 param_2,u64 param_3);
int FUN_00380200(int param_1,int param_2,int param_3);
int FUN_003806f0(int param_1,int param_2,int param_3);
int FUN_00380d70(int param_1,int param_2,int param_3);
int FUN_00381280(int param_1,int param_2,int param_3);
int FUN_003819b0(int param_1,int param_2,int param_3);
int FUN_003820e0(int param_1,int param_2,int param_3);
int FUN_00382500(int param_1,int param_2,int param_3);
int FUN_00382840(int param_1,int param_2,int param_3);
int FUN_00382d60(int param_1,int param_2,int param_3);
int FUN_00383360(int param_1,int param_2,int param_3);
int FUN_00383d80(int param_1,int param_2,int param_3);
int FUN_00384370(int param_1,int param_2,int param_3);
int FUN_00384780(int param_1,int param_2,int param_3);
int FUN_00385520(int param_1,int param_2,int param_3);
int FUN_003863c0(void);
int FUN_00388df0(int param_1,int param_2);
int FUN_0038a480(int param_1,int param_2,int param_3,int param_4);
long FUN_00361350(u64 param_1,u64 param_2,u64 param_3);
long FUN_00361ca0(int param_1,u64 param_2);
long FUN_00361dd0(int param_1,u64 param_2,u16 param_3,u32 param_4);
s32 FUN_00374af0(s32 param_1,s32 param_2,s32 param_3);
long FUN_00386ae0(u64 param_1,u64 param_2);
long FUN_0038ab00(int param_1,u64 param_2);
int FUN_0036f640(int param_1);
u16 * FUN_00362290(int param_1);
u16 * FUN_00362310(int param_1);
u16 * FUN_00364470(u32 param_1,int param_2);
u16 * FUN_003645c0(u32 param_1,int param_2);
u16 * FUN_003646d0(u32 param_1,int param_2);
u16 * FUN_00364b10(u32 param_1,int param_2);
u16 * FUN_003655f0(u32 param_1,int param_2);
u16 * FUN_00366540(u64 param_1,int param_2,long param_3,long param_4);
u32 FUN_00368d70(u64 param_1,u64 param_2,u64 param_3);
u32 FUN_0036d470(long param_1);
u32 FUN_0036da10(int param_1);
u32 FUN_0036db20(int param_1);
u32 FUN_0036e260(int param_1);
u32 FUN_0036e2f0(int param_1);
u32 FUN_0036f4c0(void);
u32 FUN_00370230(int param_1,int param_2,int param_3);
u32 FUN_00371710(int param_1,int param_2,int param_3);
u32 FUN_00372260(int param_1,int param_2,int param_3);
u32 FUN_00373700(int param_1,int param_2,int param_3);
u32 FUN_00374c90(int param_1,int param_2,int param_3);
u32 FUN_00375350(int param_1,int param_2,int param_3);
u32 FUN_00375590(int param_1,int param_2,int param_3);
u32 FUN_003756e0(int param_1,int param_2,int param_3);
u32 FUN_00375900(int param_1,int param_2,int param_3);
u32 FUN_00375a40(int param_1,int param_2,int param_3);
u32 FUN_00375d70(int param_1,int param_2,int param_3);
u32 FUN_00375f30(int param_1,int param_2,int param_3);
u32 FUN_003798f0(int param_1,int param_2,int param_3);
u32 FUN_0037a150(int param_1,int param_2,u8 *param_3);
u32 FUN_0037a2b0(int param_1,int param_2,int param_3);
u32 FUN_0037a4d0(int param_1,int param_2,int param_3);
u32 FUN_0037acc0(int param_1,int param_2,int param_3);
u32 FUN_0037afc0(int param_1,int param_2,int param_3);
u32 FUN_0037b2e0(int param_1,int param_2,int param_3);
u32 FUN_0037b5d0(int param_1,int param_2,int param_3);
u32 FUN_0037ba80(int param_1,int param_2,int param_3);
u32 FUN_0037be50(int param_1,int param_2,int param_3);
u32 FUN_0037c2e0(int param_1,int param_2,int param_3);
u32 FUN_0037d4d0(int param_1,int param_2,int param_3);
u32 FUN_0037df50(int param_1,int param_2,int param_3);
u32 FUN_0037e3f0(int param_1,int param_2,int param_3);
u32 FUN_0037f050(int param_1,int param_2,int param_3);
u32 FUN_0037f5e0(int param_1,int param_2,int param_3);
u32 FUN_0037ff10(int param_1,int param_2,int param_3);
u32 FUN_00380310(int param_1,int param_2,int param_3);
u32 FUN_003809c0(int param_1,int param_2,int param_3);
u32 FUN_003810a0(int param_1,int param_2,int param_3);
u32 FUN_003814d0(int param_1,int param_2,int param_3);
u32 FUN_00381bf0(int param_1,int param_2,int param_3);
u32 FUN_00382320(int param_1,int param_2,int param_3);
u32 FUN_003826f0(int param_1,int param_2,int param_3);
u32 FUN_00382c10(int param_1,int param_2,int param_3);
u32 FUN_00382ec0(int param_1,int param_2,int param_3);
u32 FUN_00383810(int param_1,int param_2,int param_3);
u32 FUN_00384060(int param_1,int param_2,int param_3);
u32 FUN_003844b0(int param_1,int param_2,int param_3);
u32 FUN_003849e0(int param_1,int param_2,int param_3);
u32 FUN_00384d30(int param_1,int param_2,int param_3);
u32 FUN_003851f0(int param_1,int param_2,int param_3);
u32 FUN_00386cd0(void);
u32 FUN_00386e10(int param_1);
u32 FUN_00386e30(int param_1);
u32 FUN_0038a0b0(int param_1);
u32 FUN_0038a4b0(u64 param_1,int param_2,u32 *param_3,u32 *param_4);
u32 FUN_0038d6f0(long param_1);
u32 FUN_0038d980(void);
u32 FUN_0038e860(long param_1,u64 param_2);
u64 FUN_00366eb0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00366f90(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_003670f0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00367190(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00367230(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00367390(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00367440(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_003674b0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00367a20(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00367cb0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00367d70(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00367e00(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00367ec0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00368020(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_003680e0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_003682f0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_003683a0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00368440(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_003684d0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_003685c0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00368680(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00368710(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_003687b0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00368830(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_003688d0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_003689c0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00368a30(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00368b00(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00368c10(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00368cb0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00368f20(u64 param_1,long param_2,u64 param_3);
u64 FUN_00369320(u64 param_1,long param_2,u64 param_3);
u64 FUN_003698a0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00369a20(int param_1,u64 param_2,u64 param_3);
u64 FUN_0036be10(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_0036cc30(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_0036f500(int param_1);
u64 FUN_003709d0(int param_1,int param_2,u8 *param_3);
u32 FUN_003715b0(int param_1,int param_2,int param_3);
u64 FUN_00379f30(int param_1,int param_2,int param_3);
u32 FUN_0037a640(int param_1,int param_2,int param_3);
u32 FUN_0037abd0(int param_1,int param_2,int param_3);
u32 FUN_00385bd0(int param_1,u64 param_2);
u32 FUN_00385cd0(int param_1);
u32 FUN_00385e20(int param_1);
u32 FUN_00385f00(int param_1);
u32 FUN_00386060(int param_1);
u32 FUN_00386130(int param_1,f32 *param_2,f32 *param_3);
u32 FUN_00386230(int param_1,u32 *param_2,u32 *param_3);
u32 FUN_00386310(int param_1);
u32 FUN_00386430(int param_1,u16 param_2,u32 param_3);
u32 FUN_003865f0(int param_1);
u32 FUN_00386780(int param_1,u32 param_2,u32 param_3,u32 param_4);
u32 FUN_00386860(int param_1,u32 param_2,u32 param_3,u32 param_4);
u32 FUN_00386940(int param_1,int param_2,f32 param_3);
u32 FUN_00386a00(int param_1,u32 param_2);
u64 FUN_0038da10(u16 *param_1);
s8 FUN_0036fa40(int param_1);
u64 FUN_00373590(u64 param_1,u64 param_2,int param_3);
void FUN_00361050(int param_1,u32 param_2);
void FUN_00361070(u64 param_1);
void FUN_00361140(int param_1,u16 *param_2);
void FUN_00361200(int param_1,int param_2);
void FUN_00361270(long param_1);
void FUN_00361890(int *param_1,u64 param_2);
void FUN_00361980(u64 param_1);
void FUN_00361b60(int *param_1,int param_2);
void FUN_00361c30(int param_1,int param_2);
void FUN_00361d60(long param_1,u16 param_2,u32 param_3);
void FUN_00362100(void);
void FUN_00362110(void);
void FUN_00362120(long param_1,u64 param_2,int param_3);
void FUN_00362240(int param_1);
void FUN_00362390(u64 param_1);
void FUN_003625e0(u64 param_1);
#pragma alias FUN_003625e0_i FUN_003625e0
extern void FUN_003625e0_i(s32 param_1);
void FUN_003628f0(u64 param_1);
void FUN_00362f20(u64 param_1);
void FUN_00362fa0(int param_1);
void FUN_00362ff0(long param_1);
void FUN_00363030(int *param_1,u16 *param_2,u32 param_3,u64 param_4);
void FUN_003638e0(int *param_1,long param_2,long param_3,u32 param_4,u64 param_5);
void FUN_003648e0(int param_1,u32 param_2,int param_3);
void FUN_00364a30(u32 param_1,int param_2);
void FUN_00364e40(u32 param_1,int param_2,int param_3);
void FUN_003650c0(u32 param_1,u64 param_2,int param_3);
void FUN_00365250(u32 param_1,u64 param_2,int param_3);
void FUN_00365360(u32 param_1,u64 param_2,int param_3);
void FUN_00365430(int param_1,u64 param_2);
void FUN_003657e0(int param_1,u64 param_2);
void FUN_003658b0(u32 param_1,int param_2);
void FUN_00365a40(u32 param_1,int param_2);
void FUN_00365b70(u32 param_1,u64 param_2);
void FUN_00365cd0(u32 param_1,int param_2);
void FUN_00365f80(u32 param_1,long param_2);
void FUN_00366210(u32 param_1,int param_2);
void FUN_00366330(u32 param_1,int param_2);
void FUN_003663f0(u32 param_1,int param_2);
void FUN_00366660(u32 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_00366970(u64 param_1,u64 param_2);
void FUN_00366ac0(u32 param_1,u64 param_2);
void FUN_0036d030(long param_1);
void FUN_0036efb0(void);
void FUN_0036f000(long param_1);
void FUN_0036f260(void);
void FUN_0036f370(int param_1);
void FUN_00350040(int param_1,u32 *param_2);
void FUN_003722d0(u32 param_1,u32 param_2,u32 param_3,u8 *param_4);
void FUN_0036f490(int param_1);
void FUN_0036f4d0(void);
void FUN_0036f5f0(u32 param_1,u16 param_2,u16 param_3,int param_4);
static void FUN_0036f680(int param_1,int param_2,int param_3,int param_4,u64 param_5, int param_6,int param_7);
#pragma alias FUN_0036f680_ptr2 FUN_0036f680
extern void FUN_0036f680_ptr2(int param_1,u32 *param_2,int param_3,int param_4,
                              u64 param_5,int param_6,int param_7);
void FUN_0036f900(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,code *param_9);
#pragma alias FUN_0036f900_evt FUN_0036f900
extern void FUN_0036f900_evt(int param_1,int param_2,int param_3,int param_4,
                             int param_5,int param_6,int param_7,code *param_8,
                             code *param_9);
void FUN_0036fa80(int param_1,int param_2,int param_3,int param_4);
void FUN_003702a0(int param_1,int param_2,int param_3,int param_4);
void FUN_00371350(int param_1,int param_2,int param_3,u8 *param_4);
void FUN_00371790(int param_1,int param_2,u32 param_3,u8 *param_4);
void FUN_003722d0(u32 param_1,u32 param_2,u32 param_3,u8 *param_4);
void FUN_003747a0(int param_1,int param_2,int param_3,int param_4);
void FUN_00374d30(int param_1,int param_2,u32 param_3,u8 *param_4);
void FUN_003753c0(int param_1,int param_2,u32 param_3,u8 *param_4);
void FUN_00375750(int param_1,int param_2,u32 param_3,u8 *param_4);
void FUN_00375ab0(int param_1,int param_2,u32 param_3,u8 *param_4);
void FUN_003760a0(int param_1,int param_2,u32 param_3,u16 *param_4,int param_5);
void FUN_003797b0(int param_1,int param_2,int param_3,int param_4);
void FUN_00379c30(int param_1,int param_2,int param_3,int param_4);
void FUN_0037a1e0(int param_1,int param_2,int param_3,int param_4);
void FUN_0037a560(int param_1,int param_2,int param_3,int param_4);
void FUN_0037a790(int param_1,int param_2,int param_3,int param_4);
void FUN_0037ad30(int param_1,int param_2,int param_3,int param_4);
void FUN_0037b350(int param_1,int param_2,int param_3,int param_4);
void FUN_0037baf0(int param_1,int param_2,int param_3,int param_4);
void FUN_0037c350(int param_1,int param_2,int param_3,int param_4);
void FUN_0037cf50(u32 *param_1,u32 *param_2,u32 *param_3);
void FUN_0037cfe0(void);
void FUN_0037d540(int param_1,int param_2,long param_3,int param_4);
void FUN_0037e460(u32 param_1,u32 param_2,u32 param_3,u8 *param_4);


void FUN_0037f0c0(int param_1,int param_2,int param_3,int param_4);
void FUN_0037f650(int param_1,int param_2,u32 param_3,u8 *param_4);
void FUN_0037ff80(int param_1,int param_2,int param_3,int param_4);
void FUN_00380380(int param_1,int param_2,u32 param_3,u8 *param_4);
void FUN_00380a30(int param_1,int param_2,int param_3,int param_4);
void FUN_00381110(int param_1,int param_2,int param_3,int param_4);
void FUN_00381540(int param_1,int param_2,u32 param_3,u8 *param_4);
int FUN_00382d60(int param_1,int param_2,int param_3);
void FUN_00382390(int param_1,int param_2,int param_3,int param_4);
void FUN_00382760(int param_1,int param_2,int param_3,int param_4);
void FUN_00382c80(int param_1,int param_2,int param_3,int param_4);
void FUN_00382f30(int param_1,int param_2,int param_3,int param_4);
void FUN_00383880(int param_1,int param_2,int param_3,int param_4);
void FUN_003840d0(int param_1,int param_2,int param_3,int param_4);
void FUN_00384520(int param_1,int param_2,int param_3,int param_4);
void FUN_00384a50(int param_1,int param_2,int param_3,int param_4);
void FUN_00385260(int param_1,int param_2,int param_3,int param_4);
void FUN_003858c0(int param_1);
void FUN_00385990(u32 param_1,int param_2,int param_3,int param_4,u32 param_5, f32 param_6);
#pragma alias FUN_00385990_f32 FUN_00385990
extern void FUN_00385990_f32(u32 param_1,int param_2,int param_3,int param_4,
                              int param_5,f32 param_6);
void FUN_00100710(u32 task,RwV2d pos);
void FUN_00100740(u32 task,RwRect rect);
void FUN_00100770(u32 task,f32 zOffset);
void FUN_00100780(u32 task,RwRGBA color);
void FUN_00385b20(int param_1);
void FUN_00385b90(void);
void FUN_00385ba0(void);
void FUN_00386110(u32 *param_1,u32 *param_2);
void FUN_00386210(u32 *param_1,u32 *param_2);
void FUN_00386390(u32 *param_1,u32 *param_2,u32 *param_3,u32 *param_4);
void FUN_00386aa0(void);
void FUN_00386b70(u64 param_1,long param_2,int param_3);
void FUN_00386c40(int param_1,int param_2);
void FUN_00386d50(int param_1);
void FUN_00386e20(int param_1,u32 param_2);
void FUN_00386e40(int param_1,u32 param_2);
void FUN_00386e50(void);
void FUN_00386f70(float param_1,float *param_2,float *param_3,u8 *param_4);
void FUN_003877c0(float param_1,int param_2,int param_3,u32 *param_4,u8 *param_5);
void FUN_00388000(float param_1,float param_2,float *param_3,float *param_4,float *param_5,float *param_6,u32 *param_7,RwRGBA *param_8,u32 param_9);
void FUN_00388a40(float param_1,float *param_2,float *param_3,u8 *param_4);
void FUN_00388ff0(int param_1);
void FUN_003890e0(int param_1);
void FUN_003897f0(int param_1);
void FUN_00389b50(int *param_1);
void FUN_00389d80(int param_1,int param_2);
void FUN_00389f40(void);
void FUN_0038a0c0(int param_1,long param_2);
void FUN_0038a140(u32 param_1,u32 *param_2);
void FUN_0038a180(int param_1,int param_2);
#pragma alias evtMenuDrawText FUN_0038a260
extern void evtMenuDrawText(s32 x, s32 y, f32 depth, s32 color,
                            const char *format, ...);
#pragma alias FUN_003185b0_evt_u32 FUN_003185b0
extern u32 FUN_003185b0_evt_u32(u32 param_1,u16 param_2);
#pragma alias FUN_00318620_evt_u32 FUN_00318620
extern u32 FUN_00318620_evt_u32(u32 param_1,u16 param_2,s16 param_3);
#pragma alias FUN_00530da0_evt FUN_00530da0
extern u32 FUN_00530da0_evt(f32 param_1);

u32 FUN_00397870(int param_1,long param_2,u32 *param_3,u32 *param_4,u32 *param_5,u32 *param_6);
#pragma alias FUN_00397870_i FUN_00397870
extern u32 FUN_00397870_i(int param_1,int param_2,u32 *param_3,u32 *param_4,u32 *param_5,u32 *param_6);
void FUN_0038a590(int param_1,long param_2);
void FUN_0038a620(int param_1,long param_2);
void FUN_0038a6c0(int param_1);
void FUN_0038a730(int param_1);
void FUN_0038a7c0(u32 *param_1,u32 *param_2);
#pragma alias FUN_0038a7c0_vec FUN_0038a7c0
void FUN_0038a7c0_vec(EvtVec3 *param_1,EvtVec3 *param_2);
#pragma alias FUN_001acc30_vec FUN_001acc30
u32 FUN_001acc30_vec(EvtRay *param_1,EvtVec3 *param_2);
#pragma alias FUN_003bb9b0_vec FUN_003bb9b0
void FUN_003bb9b0_vec(EvtVec3 *param_1);
#pragma alias FUN_003b79a0_vec FUN_003b79a0
void FUN_003b79a0_vec(u8 *param_1,EvtVec3 *param_2,EvtVec3 *param_3);
void FUN_0038a920(int param_1,u16 *param_2,int param_3);
void FUN_0038af70(u16 *param_1);
void FUN_0038b140(long param_1);
void FUN_0038b2c0(u16 *param_1,u32 *param_2,u32 *param_3,u32 *param_4, long param_5);
void FUN_0038b550(long param_1,u32 *param_2,u32 *param_3,u32 *param_4);
void FUN_0038b600(u32 *param_1,u32 *param_2);
void FUN_0038b6e0(u64 param_1,int param_2,int param_3);
void FUN_0038b960(int param_1,long param_2,short param_3);
void FUN_0038bc70(int param_1,short param_2,int param_3);
void FUN_0038c460(long param_1,int param_2,int *param_3,u32 *param_4);
void FUN_0038c540(int param_1,u64 param_2,u64 param_3,u64 param_4, u32 *param_5,u32 *param_6);
void FUN_0038c830(u64 param_1,long param_2);
void FUN_0038ca00(void);
void FUN_0038ca80(u64 param_1);
void FUN_0038cc10(int param_1,u16 *param_2,long param_3);
void FUN_0038d560(long param_1,long param_2,u32 param_3,u32 *param_4, u32 *param_5,u32 *param_6);
void FUN_0038d6b0(long param_1,u32 param_2);
void FUN_0038d720(int param_1);
void FUN_0038d790(int param_1);
void FUN_0038d840(char *param_1,u8 *param_2,int param_3);
void FUN_0038d910(u64 param_1);
void FUN_0038dad0(u32 param_1,long param_2,u64 param_3);
void FUN_0038e660(u64 param_1,int param_2,int param_3);
void FUN_0038f0f0(u64 param_1);
void FUN_0038f440(int param_1,u64 param_2,int param_3);
void FUN_0038f8c0(long param_1,u64 param_2,long param_3,short param_4);
void FUN_0038fa10(int param_1,u64 param_2);
void FUN_0038ffb0(int param_1,u64 param_2);

extern u8 DAT_006a0000[];
#pragma alias DAT_006a0000_abs DAT_006a0000
extern u8 DAT_006a0000_abs[];
#pragma push
#pragma opt_propagation off
// FUN_0036F500


u64 FUN_0036f500(int param_1)



{

  extern void FUN_0019d3f0(const char *,int);
  u64 uVar1;

  int iVar2;

  char *pcVar3;
  char *pcVar4;

  int iVar5;
  int iVar6;
  int iVar7;
  int lVar4;

  

  if (param_1 < 0x33) goto valid_param;
  FUN_0019d3f0((const char *)(DAT_006a0000 - 0x1bf8),0xa0);
valid_param:
  ;

  iVar2 = param_1 * 0xc;

  pcVar3 = (char *)(DAT_006a0000 - 0x1e56) + iVar2;

  if (*pcVar3 == '\x01') {

    uVar1 = 1;

  }

  else if (*pcVar3 == '\x02') {

    uVar1 = 0;

  }

  else {
    lVar4 = 0;
    pcVar4 = (char *)(DAT_006a0000 - 0x1e60) + iVar2;
    iVar5 = *(short *)pcVar4;
    iVar7 = 0x12;


    for (; lVar4 < iVar5; lVar4 = lVar4 + 1) {

      iVar6 = *(char *)(pcVar4 + lVar4 + 2);
      if (iVar6 != iVar7) {
        continue;
      }

      *pcVar3 = '\x01';
      return 1;

    }

    *pcVar3 = '\x02';
    uVar1 = 0;

  }

  return uVar1;

}
#pragma pop


// FUN_0036F5F0


void FUN_0036f5f0(u32 param_1,u16 param_2,u16 param_3,int param_4)



{

  int iVar1;

  

  iVar1 = *(int *)(param_4 + 0xd0) + 1;

  *(int *)(param_4 + 0xd0) = iVar1;

  iVar1 = iVar1 * 8;
  *(short *)(iVar1 + param_4 + 0x90) = (short)(param_1 & 0xff);
  iVar1 = *(int *)(param_4 + 0xd0) * 8;
  *(u16 *)(iVar1 + param_4 + 0x92) = param_2;
  iVar1 = *(int *)(param_4 + 0xd0) * 8;
  *(u16 *)(iVar1 + param_4 + 0x94) = param_3;

  *(u32 *)(param_4 + 0xd4) = param_1 & 0xff;

  return;

}


// FUN_0036F640


int FUN_0036f640(int param_1)



{

  int sVar1;

  int iVar2;

  

  if (*(int *)((u8 *)param_1 + 0xd0) == 0) {

    *(u32 *)(param_1 + 0xd4) = 0;

    sVar1 = 0;

  }

  else {

    iVar2 = *(int *)(param_1 + 0xd0) + -1;

    *(int *)(param_1 + 0xd0) = iVar2;

    iVar2 = iVar2 * 8;
    iVar2 += param_1;

    sVar1 = *(short *)(iVar2 + 0x90);

    *(int *)(param_1 + 0xd4) = (int)sVar1;

  }

  return sVar1;

}


extern u8 DAT_007e0000[];
// Force absolute addressing to match retail's DAT_007e0000 accesses.
#pragma alias DAT_007e0000_abs DAT_007e0000
extern u8 DAT_007e0000_abs[];
// FUN_0036F680


static void FUN_0036f680(int param_1,int param_2,int param_3,int param_4,u64 param_5,

                 int param_6,int param_7)



{

  int *piVar1;

  int *piVar2;

  

  if ((param_2 != 0) && (1 < param_3)) {

    piVar2 = (int *)param_2;

    piVar1 = (int *)param_1;

    if ((*(u16 *)(DAT_007e0000_abs + 0x94e) & param_7) != 0) {
      if (param_1 == 0) {
        if (0 < *piVar2) {
          *piVar2 = *piVar2 + -1;
        }
        else if (param_3 < param_4) {
          *piVar2 = param_3 + -1;
        }
        else {
          *piVar2 = param_4 + -1;
        }
      }
      else if (0 < *piVar2) {
        *piVar2 = *piVar2 + -1;
      }
      else if (0 < *piVar1) {
        *piVar1 = *piVar1 + -1;
      }
      else if (param_4 < param_3) {
        *piVar1 = param_3 - param_4;
        *piVar2 = param_4 + -1;
      }
      else {
        *piVar2 = param_3 + -1;
      }
    }
    else if ((*(u16 *)(DAT_007e0000_abs + 0x952) & param_7) != 0) {
      if (param_1 == 0) {
        if (0 < *piVar2) {
          *piVar2 = *piVar2 + -1;
        }
      }
      else if (0 < *piVar2) {
        *piVar2 = *piVar2 + -1;
      }
      else if (0 < *piVar1) {
        *piVar1 = *piVar1 + -1;
      }
    }
    if ((*(u16 *)(DAT_007e0000_abs + 0x94e) & param_6) != 0) {
      if (param_1 == 0) {
        if (*piVar2 < param_4 + -1) {
          *piVar2 = *piVar2 + 1;
        }
        else {
          *piVar2 = 0;
        }
      }
      else if (*piVar2 < param_4 + -1) {
        *piVar2 = *piVar2 + 1;
      }
      else if (*piVar1 + param_4 < param_3) {
        *piVar1 = *piVar1 + 1;
      }
      else {
        *piVar1 = 0;
        *piVar2 = 0;
      }
    }
    else if ((*(u16 *)(DAT_007e0000_abs + 0x952) & param_6) != 0) {
      if (param_1 == 0) {
        if (*piVar2 < param_4 + -1) {
          *piVar2 = *piVar2 + 1;
        }
      }
      else if (*piVar2 < param_4 + -1) {
        *piVar2 = *piVar2 + 1;
      }
      else if (*piVar1 + param_4 < param_3) {
        *piVar1 = *piVar1 + 1;
      }
    }

  }

  return;

}


/* W414: switch, while, explicit-else, and goto layout probes left the nd1 branch landing unchanged.
   W422 one-shot while callback probe produced nd32/object336/window320 and was reverted. */
// FUN_0036F900


void FUN_0036f900(int param_1,int param_2,int param_3,int param_4,int param_5,
                 int param_6,int param_7,int param_8,code *param_9)



{

  int iVar1;
  int iVar2;
  u32 callbackValue;


  

  iVar1 = 0;

  FUN_00385990_f32(param_7,(int)param_1 * 0xc,param_2 * 0xc,param_3 * 0xc,
                   param_4 * 0xc,(float)FUN_0038a220(*(u32 *)((int)param_7 + 0xe0)) + 1.0f);

  if (param_8 != 0) {
    iVar2 = ((code)param_8)(param_1,param_2,param_7);
    param_2 = param_2 + iVar2;
    iVar1 = iVar1 + iVar2;
  }

  callbackValue = (u32)param_9;
  for (; iVar1 < param_4; iVar1 = iVar1 + 1) {
    switch (callbackValue) {
    case 0:
      break;
    default:
      ((code)param_9)(param_1,param_2,param_5,param_7);
      param_5 = param_5 + 1;
      param_2 = param_2 + 1;
      break;
    }
  }
  return;

}


// FUN_0036FA40


s8 FUN_0036fa40(int object)
{
    s32 index = **(s32**)(object + 0x164);
    s8* entry;

    index *= 3;
    entry = DAT_0069e422 + index * 4;
    return *(entry + *(s32*)(object + 0x268));
}


// FUN_0036FA80
/* W417 cVar1 declaration/width probes were neutral except char cVar1, which worsened nd54 -> 431; reverted. */


#ifndef PC_BUILD
asm void FUN_0036fa80(int param_1,int param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff30
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
  .word 0xafa400cc
  .word 0x00e0a02d
  .word 0x0000b02d
  .word 0x8ce30164
  .word 0x7fa300a0
  .word 0x24030001
  .word 0x10c300a7
  .word 0x00000000
  .word 0x10c00003
  .word 0x00000000
  .word 0x100000a3
  .word 0x00000000
  .word 0x0000a82d
  .word 0x00051840
  .word 0x00651821
  .word 0x00031880
  .word 0xafa300b0
  .word 0x24a40001
  .word 0x00041840
  .word 0x00641821
  .word 0x00039080
  .word 0x1000008c
  .word 0x00000000
  .word 0x00951021
  .word 0x80500002
  .word 0x8fa200cc
  .word 0x00561821
  .word 0x00031040
  .word 0x00431021
  .word 0x00028880
  .word 0x8e8400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00101880
  .word 0x3c02006a
  .word 0x2442e6a0
  .word 0x00431021
  .word 0x0220202d
  .word 0x8fa500b0
  .word 0x46000306
  .word 0x2406000e
  .word 0x8c470000
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e830268
  .word 0x16a30008
  .word 0x00000000
  .word 0x8e8400d4
  .word 0x2403000f
  .word 0x14830004
  .word 0x00000000
  .word 0x24130004
  .word 0x10000002
  .word 0x00000000
  .word 0x0000982d
  .word 0x24030003
  .word 0x12030058
  .word 0x00000000
  .word 0x24030002
  .word 0x12030039
  .word 0x00000000
  .word 0x24030001
  .word 0x12030013
  .word 0x00000000
  .word 0x12000003
  .word 0x00000000
  .word 0x1000005a
  .word 0x00000000
  .word 0x8e8400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x8e820164
  .word 0x84480020
  .word 0x0220202d
  .word 0x0240282d
  .word 0x46000306
  .word 0x0260302d
  .word 0x2787a060
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000004c
  .word 0x00000000
  .word 0x8e970164
  .word 0x82fe0022
  .word 0x2bc10003
  .word 0x10200012
  .word 0x00000000
  .word 0x8e8400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x001e1880
  .word 0x3c02006a
  .word 0x2442e6c8
  .word 0x00431021
  .word 0x0220202d
  .word 0x0240282d
  .word 0x46000306
  .word 0x0260302d
  .word 0x2787a068
  .word 0x8c480000
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000036
  .word 0x00000000
  .word 0x8e8400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x96e80024
  .word 0x0220202d
  .word 0x0240282d
  .word 0x46000306
  .word 0x0260302d
  .word 0x2787a070
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x8e820164
  .word 0x80420022
  .word 0x1440000d
  .word 0x00000000
  .word 0x8e8400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x0220202d
  .word 0x0240282d
  .word 0x46000306
  .word 0x0260302d
  .word 0x2787a078
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x8e8400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x0220202d
  .word 0x0240282d
  .word 0x46000306
  .word 0x0260302d
  .word 0x2787a080
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x8e8400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x8e820164
  .word 0x80480022
  .word 0x0220202d
  .word 0x0240282d
  .word 0x46000306
  .word 0x0260302d
  .word 0x2787a060
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x2783a030
  .word 0x00701821
  .word 0x80630000
  .word 0x02c3b021
  .word 0x26b50001
  .word 0x7ba300a0
  .word 0x8c640000
  .word 0x00041840
  .word 0x00641821
  .word 0x00032080
  .word 0x3c03006a
  .word 0x2463e420
  .word 0x00642021
  .word 0x84830000
  .word 0x02a3182a
  .word 0x1460ff6a
  .word 0x00000000
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
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_0036FDA0


#ifndef PC_BUILD
asm int FUN_0036fda0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00c0882d
  .word 0x8cd00164
  .word 0x16000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000114
  .word 0x00000000
  .word 0x8e030000
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x3c02006a
  .word 0x2442e420
  .word 0x00431021
  .word 0x84420000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000107
  .word 0x00000000
  .word 0x3c020037
  .word 0x2442fa80
  .word 0xffa20000
  .word 0x2406001c
  .word 0x24070003
  .word 0x0000402d
  .word 0x24090001
  .word 0x0220502d
  .word 0x0000582d
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e2300d4
  .word 0x2402000f
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000f5
  .word 0x00000000
  .word 0x8e030000
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x3c02006a
  .word 0x2442e420
  .word 0x00431021
  .word 0x84430000
  .word 0x8e220268
  .word 0x0043102a
  .word 0x14400005
  .word 0x00000000
  .word 0x18600003
  .word 0x00000000
  .word 0x2462ffff
  .word 0xae220268
  .word 0x8e030000
  .word 0x00031040
  .word 0x00431021
  .word 0x00023080
  .word 0x8e240268
  .word 0x3c02006a
  .word 0x2442e422
  .word 0x00461021
  .word 0x00821021
  .word 0x80450000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30622000
  .word 0x10400010
  .word 0x00000000
  .word 0x3c02006a
  .word 0x2442e420
  .word 0x00461021
  .word 0x84420000
  .word 0x2442ffff
  .word 0x0082082a
  .word 0x10200005
  .word 0x00000000
  .word 0x24820001
  .word 0xae220268
  .word 0x100000c5
  .word 0x00000000
  .word 0xae200268
  .word 0x100000c2
  .word 0x00000000
  .word 0x30628000
  .word 0x10400014
  .word 0x00000000
  .word 0x18800005
  .word 0x00000000
  .word 0x2482ffff
  .word 0xae220268
  .word 0x100000b9
  .word 0x00000000
  .word 0x3c02006a
  .word 0x2442e420
  .word 0x00461021
  .word 0x84420000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae220268
  .word 0x100000ac
  .word 0x00000000
  .word 0x30620040
  .word 0x10400077
  .word 0x00000000
  .word 0x24020003
  .word 0x10a20058
  .word 0x00000000
  .word 0x24040002
  .word 0x10a40039
  .word 0x00000000
  .word 0x24020001
  .word 0x10a20020
  .word 0x00000000
  .word 0x10a00003
  .word 0x00000000
  .word 0x10000067
  .word 0x00000000
  .word 0x8e220164
  .word 0x84420020
  .word 0xae22016c
  .word 0xae200170
  .word 0x8e22000c
  .word 0x2442ffff
  .word 0xae220174
  .word 0x8e2200d0
  .word 0x24420001
  .word 0xae2200d0
  .word 0x24040007
  .word 0x000210c0
  .word 0x00511021
  .word 0xa4440090
  .word 0x2403000f
  .word 0x8e2200d0
  .word 0x000210c0
  .word 0x00511021
  .word 0xa4430092
  .word 0x2403000a
  .word 0x8e2200d0
  .word 0x000210c0
  .word 0x00511021
  .word 0xa4430094
  .word 0xae2400d4
  .word 0x1000004c
  .word 0x00000000
  .word 0xae200108
  .word 0xae200110
  .word 0x8e2200d0
  .word 0x24420001
  .word 0xae2200d0
  .word 0x24040011
  .word 0x000210c0
  .word 0x00511021
  .word 0xa4440090
  .word 0x2403000f
  .word 0x8e2200d0
  .word 0x000210c0
  .word 0x00511021
  .word 0xa4430092
  .word 0x2403000a
  .word 0x8e2200d0
  .word 0x000210c0
  .word 0x00511021
  .word 0xa4430094
  .word 0xae2400d4
  .word 0x10000036
  .word 0x00000000
  .word 0x8e220164
  .word 0x80420022
  .word 0xae220118
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442e6e0
  .word 0xae220120
  .word 0x2782a088
  .word 0xae220124
  .word 0x8e2200d0
  .word 0x24420001
  .word 0xae2200d0
  .word 0x000210c0
  .word 0x00511021
  .word 0xa4440090
  .word 0x24030012
  .word 0x8e2200d0
  .word 0x000210c0
  .word 0x00511021
  .word 0xa4430092
  .word 0x2403000a
  .word 0x8e2200d0
  .word 0x000210c0
  .word 0x00511021
  .word 0xa4430094
  .word 0xae2400d4
  .word 0x1000001a
  .word 0x00000000
  .word 0x8e220164
  .word 0x80420022
  .word 0xae22016c
  .word 0x2402ffff
  .word 0xae220170
  .word 0x24020004
  .word 0xae220174
  .word 0x8e2200d0
  .word 0x24420001
  .word 0xae2200d0
  .word 0x24040007
  .word 0x000210c0
  .word 0x00511021
  .word 0xa4440090
  .word 0x2403000f
  .word 0x8e2200d0
  .word 0x000210c0
  .word 0x00511021
  .word 0xa4430092
  .word 0x2403000a
  .word 0x8e2200d0
  .word 0x000210c0
  .word 0x00511021
  .word 0xa4430094
  .word 0xae2400d4
  .word 0x24020001
  .word 0x10000038
  .word 0x00000000
  .word 0x30621000
  .word 0x10400021
  .word 0x00000000
  .word 0x14800004
  .word 0x00000000
  .word 0xae200158
  .word 0x10000003
  .word 0x00000000
  .word 0x24020001
  .word 0xae220158
  .word 0x0000182d
  .word 0x8e02006c
  .word 0x10000003
  .word 0x00000000
  .word 0x24630001
  .word 0x8c42004c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x2462ffec
  .word 0x04400007
  .word 0x00000000
  .word 0x2462ffed
  .word 0xae220160
  .word 0x24020013
  .word 0xae22015c
  .word 0x10000003
  .word 0x00000000
  .word 0xae200160
  .word 0xae23015c
  .word 0x2402ffff
  .word 0x10000015
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000d
  .word 0x00000000
  .word 0x14800004
  .word 0x00000000
  .word 0xae200158
  .word 0x10000003
  .word 0x00000000
  .word 0x24020001
  .word 0xae220158
  .word 0xae200160
  .word 0xae20015c
  .word 0x2402ffff
  .word 0x10000006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_00370230


u32 FUN_00370230(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069e6f0);

  return 2;

}


/* opt_common_subs off: default nd919/1840B -> nd274/1836B; retained. */
#pragma opt_common_subs off
/* opt_lifetimes on: default nd274/1836B -> nd134/1836B; retained. */
#pragma push
#pragma opt_lifetimes on
/* W414: scalar f32/pointer alias probes scored nd125; paired RwV2d accessors scored nd104. */
// FUN_003702A0


void FUN_003702a0(int param_1,int param_2,int param_3,int param_4)



{

  int lVar1;

  int iVar2;

  u32 uVar3;

  u32 uVar4;

  int iVar5;

  int iVar6;

  u32 uVar7;

  u32 uVar9;

  f32 uVar8;

  u8 *apuStack_30 [8];

  u32 uStack_4;

  u32 uStack_8;

  u32 uStack_c;

  u32 uStack_10;

  

  uVar3 = 0;

  iVar6 = 0;

  *(RwV2d *)&apuStack_30[4] = *(RwV2d *)&PTR_s_REPEAT_007ccd88;

  *(RwV2d *)&apuStack_30[2] = *(RwV2d *)&PTR_s_DIRECT_007ccda0;

  *(RwV2d *)&apuStack_30[0] = *(RwV2d *)&PTR_s_FALSE_007ccdb8;

  iVar2 = (int)param_4;

  uVar9 = *(u32 *)(*(int *)(iVar2 + 0x23c) + 0x128);

  FUN_00521408(&uStack_4,0,4);

  uStack_4 = *(u32 *)(iVar2 + 0x16c);

  if (*(int *)(iVar2 + 0x21c) == param_3) {

    uVar3 = 4;

  }

  for (uVar4 = 0; (int)uVar4 < 4; uVar4 = uVar4 + 1) {

    lVar1 = FUN_003185b0_evt_u32(uVar9,uVar4 & 0xffff);

    if (lVar1 == 1) {

      iVar6 = iVar6 + 1;

    }

  }

  uVar7 = (u32)(char)uStack_4;

  iVar5 = *(int *)(iVar2 + 0x19c);

  switch(param_3) {

  case 0:

    uVar8 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));

    evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar8, uVar3, (s_evtMenu_0069ea10 - 0x308), apuStack_30[iVar5 + 2]);

    break;

  case 1:

    if (iVar5 == 0) {

      uVar8 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));

      evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar8, uVar3, (s_evtMenu_0069ea10 - 0x2f0), uVar7, iVar6);

    }

    else if (iVar5 == 1) {

      uVar8 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));

      evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar8, uVar3, (s_evtMenu_0069ea10 - 0x2d0));

    }

    break;

  case 2:

    if (iVar5 == 0) {

      iVar5 = 0;

      iVar6 = 0;

      for (; iVar6 < 0x40; iVar6 = iVar6 + 1) {

        lVar1 = FUN_00318620_evt_u32(uVar9,uVar7 & 0xffff,(short)iVar6);

        if (lVar1 == 1) {

          iVar5 = iVar5 + 1;

        }

      }

      uVar8 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));

      evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar8, uVar3, (s_evtMenu_0069ea10 - 0x2c0), (((s8 *)&uStack_4)[1]), iVar5);

    }

    else if (iVar5 == 1) {

      lVar1 = FUN_003976f0(param_4,(((s8 *)&uStack_4)[1]),&uStack_8,&uStack_c);

      if (lVar1 == 1) {

        uVar8 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));

        evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar8, uVar3, (s_evtMenu_0069ea10 - 0x2a0), (((s8 *)&uStack_4)[1]), uStack_8, uStack_c);

      }

      else {

        uVar8 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));

        evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar8, uVar3, (s_evtMenu_0069ea10 - 0x280), (((s8 *)&uStack_4)[1]));

      }

    }

    break;

  case 3:

    uVar8 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));

    evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar8, uVar3, (s_evtMenu_0069ea10 - 0x268), apuStack_30[(((s8 *)&uStack_4)[2]) + 4]);

    break;

  case 4:

    uVar8 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));

    evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar8, uVar3, (s_evtMenu_0069ea10 - 0x258), (((s8 *)&uStack_4)[3]));

    break;

  case 5:

    uVar8 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));

    evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar8, uVar3, (s_evtMenu_0069ea10 - 0x248), *(u32 *)(iVar2 + 0x198));

    break;

  case 6:

    uVar8 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));

    evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar8, uVar3, (s_evtMenu_0069ea10 - 0x238), *(u32 *)(iVar2 + 0x1b0));

    break;

  case 7:

    iVar6 = *(int *)(iVar2 + 0x1a0);

    if (iVar6 < 2) {

      uVar8 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));

      evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar8, uVar3, (s_evtMenu_0069ea10 - 0x228), apuStack_30[iVar6]);

    }

    break;

  case 8:

    if (iVar5 == 0) {

      uVar8 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));

      evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar8, uVar3, (s_evtMenu_0069ea10 - 0x218), *(u32 *)(iVar2 + 0x1a4));

    }

    else if (iVar5 == 1) {

      lVar1 = FUN_003976f0(param_4,*(u32 *)(iVar2 + 0x1a4),&uStack_10,apuStack_30 + 7);

      if (lVar1 == 1) {

        uVar8 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));

        evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar8, uVar3, (s_evtMenu_0069ea10 - 0x200), *(u32 *)(iVar2 + 0x1a4), uStack_10, apuStack_30[7]);

      }

      else {

        uVar8 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));

        evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar8, uVar3, (s_evtMenu_0069ea10 - 0x1e0), *(u32 *)(iVar2 + 0x1a4));

      }

    }

    break;

  case 9:

    iVar6 = *(int *)(iVar2 + 0x1a8);

    if (iVar6 < 2) {

      uVar8 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));

      evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar8, uVar3, (s_evtMenu_0069ea10 - 0x1c8), apuStack_30[iVar6 + 4]);

    }

    break;

  case 10:

    uVar8 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));

    evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar8, uVar3, (s_evtMenu_0069ea10 - 0x1b8), *(u32 *)(iVar2 + 0x1ac));

    break;

  case 0xb:

    uVar8 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));

    evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar8, uVar3, (s_evtMenu_0069ea10 - 0x1a8), *(u32 *)(iVar2 + 0x1b4));

  }

  return;

}
#pragma pop
#pragma opt_common_subs reset


/* opt_loop_invariants on: default nd1738/2420B -> nd1719/2424B; retained. */
#pragma opt_loop_invariants on
// FUN_003709D0


#ifndef PC_BUILD
asm u64 FUN_003709d0(int param_1,int param_2,u8 *param_3)
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
  .word 0x0080a02d
  .word 0x00a0a82d
  .word 0x00c0982d
  .word 0x0000902d
  .word 0x0000802d
  .word 0x27a4008c
  .word 0x0000282d
  .word 0x24060004
  .word 0x0c148502
  .word 0x00000000
  .word 0x8e62023c
  .word 0x10400004
  .word 0x00000000
  .word 0x8c510128
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000023b
  .word 0x00000000
  .word 0x8e62019c
  .word 0x28420002
  .word 0x14400002
  .word 0x00000000
  .word 0xae60019c
  .word 0x3c020037
  .word 0x244202a0
  .word 0xffa20000
  .word 0x0280202d
  .word 0x02a0282d
  .word 0x24060019
  .word 0x2407000f
  .word 0x0000402d
  .word 0x24090001
  .word 0x0260502d
  .word 0x3c0b0037
  .word 0x256b0230
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e6300d4
  .word 0x24020010
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000221
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e62021c
  .word 0x14400005
  .word 0x00000000
  .word 0x2402000b
  .word 0xae62021c
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae62021c
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e63021c
  .word 0x2402000b
  .word 0x14620004
  .word 0x00000000
  .word 0xae60021c
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae62021c
  .word 0x8e62016c
  .word 0xafa2008c
  .word 0x0002ae3c
  .word 0x0015ae3f
  .word 0x12200013
  .word 0x00000000
  .word 0x0000902d
  .word 0x0000a02d
  .word 0x1000000c
  .word 0x00000000
  .word 0x32a5ffff
  .word 0x0014343c
  .word 0x0006343f
  .word 0x0220202d
  .word 0x0c0c6188
  .word 0x00000000
  .word 0x24030001
  .word 0x14430002
  .word 0x00000000
  .word 0x26520001
  .word 0x26940001
  .word 0x2a820040
  .word 0x1440fff3
  .word 0x00000000
  .word 0x8e74019c
  .word 0x24020001
  .word 0x16820002
  .word 0x00000000
  .word 0xa3a0008c
  .word 0x8e62021c
  .word 0x2c41000c
  .word 0x102001c8
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463a6a0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30422000
  .word 0x1040000d
  .word 0x00000000
  .word 0x1a800004
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000002
  .word 0x00000000
  .word 0x26940001
  .word 0xa3a0008c
  .word 0xa3a0008d
  .word 0xae6001a0
  .word 0xae6001a4
  .word 0xae6001a8
  .word 0xae6001ac
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30428000
  .word 0x104001ab
  .word 0x00000000
  .word 0x16800004
  .word 0x00000000
  .word 0x24140001
  .word 0x10000002
  .word 0x00000000
  .word 0x2694ffff
  .word 0xa3a0008c
  .word 0xa3a0008d
  .word 0xae6001a0
  .word 0xae6001a4
  .word 0xae6001a8
  .word 0xae6001ac
  .word 0x1000019d
  .word 0x00000000
  .word 0x1680019b
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400012
  .word 0x00000000
  .word 0x83a2008c
  .word 0x28410003
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xa3a2008c
  .word 0x10000002
  .word 0x00000000
  .word 0xa3a0008c
  .word 0x83a5008c
  .word 0x0220202d
  .word 0x0c0c616c
  .word 0x00000000
  .word 0x1040fff2
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x30628000
  .word 0x10400010
  .word 0x00000000
  .word 0x83a2008c
  .word 0x18400005
  .word 0x00000000
  .word 0x2442ffff
  .word 0xa3a2008c
  .word 0x10000003
  .word 0x00000000
  .word 0x24020003
  .word 0xa3a2008c
  .word 0x83a5008c
  .word 0x0220202d
  .word 0x0c0c616c
  .word 0x00000000
  .word 0x1040fff2
  .word 0x00000000
  .word 0x83b0008c
  .word 0x0000902d
  .word 0x0000a82d
  .word 0x1000000c
  .word 0x00000000
  .word 0x3205ffff
  .word 0x0015343c
  .word 0x0006343f
  .word 0x0220202d
  .word 0x0c0c6188
  .word 0x00000000
  .word 0x24030001
  .word 0x14430002
  .word 0x00000000
  .word 0x26520001
  .word 0x26b50001
  .word 0x2aa20040
  .word 0x1440fff3
  .word 0x00000000
  .word 0x83a2008d
  .word 0x0052102a
  .word 0x1440015c
  .word 0x00000000
  .word 0xa3a0008d
  .word 0x10000159
  .word 0x00000000
  .word 0x16800020
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x1040000d
  .word 0x00000000
  .word 0x83a3008d
  .word 0x2642ffff
  .word 0x0062082a
  .word 0x10200005
  .word 0x00000000
  .word 0x24620001
  .word 0xa3a2008d
  .word 0x10000149
  .word 0x00000000
  .word 0xa3a0008d
  .word 0x10000146
  .word 0x00000000
  .word 0x30628000
  .word 0x10400143
  .word 0x00000000
  .word 0x83a2008d
  .word 0x18400005
  .word 0x00000000
  .word 0x2442ffff
  .word 0xa3a2008d
  .word 0x1000013c
  .word 0x00000000
  .word 0x2642ffff
  .word 0xa3a2008d
  .word 0x10000138
  .word 0x00000000
  .word 0x24020001
  .word 0x16820135
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x1040000c
  .word 0x00000000
  .word 0x83a3008d
  .word 0x28620009
  .word 0x14400004
  .word 0x00000000
  .word 0xa3a0008d
  .word 0x10000129
  .word 0x00000000
  .word 0x24620001
  .word 0xa3a2008d
  .word 0x10000125
  .word 0x00000000
  .word 0x30628000
  .word 0x10400122
  .word 0x00000000
  .word 0x83a2008d
  .word 0x14400005
  .word 0x00000000
  .word 0x24020009
  .word 0xa3a2008d
  .word 0x1000011b
  .word 0x00000000
  .word 0x2442ffff
  .word 0xa3a2008d
  .word 0x10000117
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x14400004
  .word 0x00000000
  .word 0x30628000
  .word 0x1040010f
  .word 0x00000000
  .word 0x83a2008e
  .word 0x00401026
  .word 0x2c420001
  .word 0xa3a2008e
  .word 0x10000109
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x1040000a
  .word 0x00000000
  .word 0x83a2008f
  .word 0x28410064
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xa3a2008f
  .word 0x10000002
  .word 0x00000000
  .word 0xa3a0008f
  .word 0x30628000
  .word 0x104000f8
  .word 0x00000000
  .word 0x83a2008f
  .word 0x18400005
  .word 0x00000000
  .word 0x2442ffff
  .word 0xa3a2008f
  .word 0x100000f1
  .word 0x00000000
  .word 0x24020064
  .word 0xa3a2008f
  .word 0x100000ed
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e620198
  .word 0x24420001
  .word 0xae620198
  .word 0x10000017
  .word 0x00000000
  .word 0x30620008
  .word 0x10400006
  .word 0x00000000
  .word 0x8e620198
  .word 0x2442000a
  .word 0xae620198
  .word 0x1000000f
  .word 0x00000000
  .word 0x30628000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e620198
  .word 0x2442ffff
  .word 0xae620198
  .word 0x10000007
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x8e620198
  .word 0x2442fff6
  .word 0xae620198
  .word 0x8e620198
  .word 0x044100ca
  .word 0x00000000
  .word 0xae600198
  .word 0x100000c7
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000011
  .word 0x00000000
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x2410ffff
  .word 0x1000000b
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x2410fff6
  .word 0x10000005
  .word 0x00000000
  .word 0x30620008
  .word 0x10400002
  .word 0x00000000
  .word 0x2410000a
  .word 0x8e6201b0
  .word 0x00501021
  .word 0xae6201b0
  .word 0x284101f5
  .word 0x14200003
  .word 0x00000000
  .word 0x240201f4
  .word 0xae6201b0
  .word 0x8e6201b0
  .word 0x2841000a
  .word 0x102000a3
  .word 0x00000000
  .word 0x2402000a
  .word 0xae6201b0
  .word 0x1000009f
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x14400004
  .word 0x00000000
  .word 0x30628000
  .word 0x10400097
  .word 0x00000000
  .word 0x8e6201a0
  .word 0x00401026
  .word 0x2c420001
  .word 0xae6201a0
  .word 0x10000091
  .word 0x00000000
  .word 0x16800020
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x1040000d
  .word 0x00000000
  .word 0x8e6301a4
  .word 0x2642ffff
  .word 0x0062082a
  .word 0x10200005
  .word 0x00000000
  .word 0x24620001
  .word 0xae6201a4
  .word 0x10000081
  .word 0x00000000
  .word 0xae6001a4
  .word 0x1000007e
  .word 0x00000000
  .word 0x30628000
  .word 0x1040007b
  .word 0x00000000
  .word 0x8e6201a4
  .word 0x18400005
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae6201a4
  .word 0x10000074
  .word 0x00000000
  .word 0x2642ffff
  .word 0xae6201a4
  .word 0x10000070
  .word 0x00000000
  .word 0x24020001
  .word 0x1682006d
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e6301a4
  .word 0x28620009
  .word 0x14400004
  .word 0x00000000
  .word 0xae6001a4
  .word 0x10000061
  .word 0x00000000
  .word 0x24620001
  .word 0xae6201a4
  .word 0x1000005d
  .word 0x00000000
  .word 0x30628000
  .word 0x1040005a
  .word 0x00000000
  .word 0x8e6201a4
  .word 0x14400005
  .word 0x00000000
  .word 0x24020009
  .word 0xae6201a4
  .word 0x10000053
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae6201a4
  .word 0x1000004f
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x14400004
  .word 0x00000000
  .word 0x30628000
  .word 0x10400047
  .word 0x00000000
  .word 0x8e6201a8
  .word 0x00401026
  .word 0x2c420001
  .word 0xae6201a8
  .word 0x10000041
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000005
  .word 0x00000000
  .word 0x30628000
  .word 0x10400002
  .word 0x00000000
  .word 0x2410ffff
  .word 0x8e6201ac
  .word 0x00501021
  .word 0xae6201ac
  .word 0x28410065
  .word 0x14200003
  .word 0x00000000
  .word 0x24020064
  .word 0xae6201ac
  .word 0x8e6201ac
  .word 0x0441002a
  .word 0x00000000
  .word 0xae6001ac
  .word 0x10000027
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000011
  .word 0x00000000
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x2410ffff
  .word 0x1000000b
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x2410fff6
  .word 0x10000005
  .word 0x00000000
  .word 0x30620008
  .word 0x10400002
  .word 0x00000000
  .word 0x2410000a
  .word 0x8e6201b4
  .word 0x00501021
  .word 0xae6201b4
  .word 0x284101f5
  .word 0x14200003
  .word 0x00000000
  .word 0x240201f4
  .word 0xae6201b4
  .word 0x8e6201b4
  .word 0x2841000a
  .word 0x10200003
  .word 0x00000000
  .word 0x2402000a
  .word 0xae6201b4
  .word 0x8fa2008c
  .word 0xae62016c
  .word 0xae74019c
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x1040000c
  .word 0x00000000
  .word 0x83a5008c
  .word 0x83a6008d
  .word 0x0220202d
  .word 0x0c0c6188
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x0060102d
  .word 0x1000000a
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420020
  .word 0x10400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants reset


/* opt_lifetimes on: default nd326/592B -> nd320/592B; retained. */
#pragma push
#pragma opt_lifetimes on
// FUN_00371350


#ifndef PC_BUILD
asm void FUN_00371350(int param_1,int param_2,int param_3,u8 *param_4)
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
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x00e0a82d
  .word 0x0000882d
  .word 0x8ce30108
  .word 0x8ce20110
  .word 0x00621021
  .word 0x16420004
  .word 0x00000000
  .word 0x24100004
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x16400011
  .word 0x00000000
  .word 0x8ea400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a050
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000028
  .word 0x00000000
  .word 0x24020001
  .word 0x16420011
  .word 0x00000000
  .word 0x8ea400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a058
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000052
  .word 0x00000000
  .word 0x24020002
  .word 0x16420012
  .word 0x00000000
  .word 0x8ea400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x46000306
  .word 0x0200302d
  .word 0x3c07006a
  .word 0x24e7e6b8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000003e
  .word 0x00000000
  .word 0x26310003
  .word 0x24040003
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040b02d
  .word 0x10000017
  .word 0x00000000
  .word 0x16320013
  .word 0x00000000
  .word 0x8ea400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x96c80000
  .word 0x46000306
  .word 0x0200302d
  .word 0x3c07006a
  .word 0x24e7e878
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x8ed600f8
  .word 0x26310001
  .word 0x16c0ffe9
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040b02d
  .word 0x10000017
  .word 0x00000000
  .word 0x16320013
  .word 0x00000000
  .word 0x8ea400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x96c80000
  .word 0x46000306
  .word 0x0200302d
  .word 0x3c07006a
  .word 0x24e7e878
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8ed600f8
  .word 0x26310001
  .word 0x16c0ffe9
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
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop


// W419 exhaustive declaration sweep: all 24 permutations of iVar1/iVar2/uVar3/iVar4 stayed nd34/object348; no scheduling gain.
// W419 declaration-sweep negative: nd34/object348/window352/rate9.77% for every permutation.
// FUN_003715B0


#ifndef PC_BUILD
asm u32 FUN_003715b0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x2411000f
  .word 0x0000802d
  .word 0x24040003
  .word 0x0c0ed77c
  .word 0x00000000
  .word 0x02028021
  .word 0x24040001
  .word 0x0c0ed77c
  .word 0x00000000
  .word 0x02028021
  .word 0x3c020037
  .word 0x24421350
  .word 0xffa20000
  .word 0x26090003
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24060014
  .word 0x0220382d
  .word 0x8e480108
  .word 0x0240502d
  .word 0x0000582d
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e4300d4
  .word 0x24020011
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000027
  .word 0x00000000
  .word 0x26020003
  .word 0x2841000f
  .word 0x10200002
  .word 0x00000000
  .word 0x0040882d
  .word 0x26060003
  .word 0x26440108
  .word 0x26450110
  .word 0x0220382d
  .word 0x0000402d
  .word 0x24094000
  .word 0x240a1000
  .word 0x0c0dbda0
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x24060001
  .word 0x00c0382d
  .word 0x0000402d
  .word 0x24092000
  .word 0x340a8000
  .word 0x0c0dbda0
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x00c0102d
  .word 0x10000008
  .word 0x00000000
  .word 0x30620020
  .word 0x10400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_00371710


u32 FUN_00371710(int param_1,int param_2,int param_3)



{

  u32 uVar1;

  f32 uVar2;

  

  uVar1 = *(u32 *)(param_3 + 0xe0);

  uVar2 = FUN_0038a220(uVar1);

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar2, 0, (const char *)DAT_0069e888_abs, uVar1);

  return 2;

}


/* W416 ORDER probe rejected: inverted case-1 condition/body raised nd758 -> 801, object/window 1520/1600. */
// FUN_00371790
#ifndef PC_BUILD
asm void FUN_00371790(int param_1,int param_2,u32 param_3,u8 *param_4)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00e0902d
  .word 0x0000882d
  .word 0x3c07006a
  .word 0x24e7e990
  .word 0x27a500a0
  .word 0x2404000b
  .word 0x8ce30000
  .word 0x24e70004
  .word 0x2484ffff
  .word 0xaca30000
  .word 0x24a50004
  .word 0x1c80fffa
  .word 0x00000000
  .word 0x3c07006a
  .word 0x24e7e9c0
  .word 0x27a50080
  .word 0x24040007
  .word 0x8ce30000
  .word 0x24e70004
  .word 0x2484ffff
  .word 0xaca30000
  .word 0x24a50004
  .word 0x1c80fffa
  .word 0x00000000
  .word 0x8e550198
  .word 0xa7a000ce
  .word 0x8e450214
  .word 0x14a60002
  .word 0x00000000
  .word 0x24110004
  .word 0x8e56016c
  .word 0x32d00fff
  .word 0x2cc10009
  .word 0x10200155
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484a6f0
  .word 0x00061880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x00151080
  .word 0x005d1021
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a100
  .word 0x8c480080
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000013b
  .word 0x00000000
  .word 0x24030001
  .word 0x14a30002
  .word 0x00000000
  .word 0x24110004
  .word 0x2ea10006
  .word 0x10200134
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484a6d0
  .word 0x00151880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00029880
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a108
  .word 0x0200402d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x2644082c
  .word 0x0200282d
  .word 0x0c0e7dd4
  .word 0x00000000
  .word 0x14400011
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830012
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7e9e0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000107
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830012
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7e9f0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100000f7
  .word 0x00000000
  .word 0x26a5ffff
  .word 0x0240202d
  .word 0x27a600ce
  .word 0x0c0e5d60
  .word 0x00000000
  .word 0x24030001
  .word 0x144300ef
  .word 0x00000000
  .word 0x97b500ce
  .word 0x3402ffff
  .word 0x12a20023
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00029880
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a108
  .word 0x0200402d
  .word 0x02a0482d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830009
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x97a800ce
  .word 0x0260282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ea00
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000020
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00029880
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a108
  .word 0x0200402d
  .word 0x02a0482d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830009
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ea10
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x97a400ce
  .word 0x3403ffff
  .word 0x108300a6
  .word 0x00000000
  .word 0x02042821
  .word 0x2644082c
  .word 0x0c0e7dd4
  .word 0x00000000
  .word 0x14400011
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830012
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7e9e0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000090
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830012
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7e9f0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000080
  .word 0x00000000
  .word 0x24030006
  .word 0x12a3007d
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x00161303
  .word 0x3042000f
  .word 0x00021080
  .word 0x005d1021
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a100
  .word 0x8c4800a0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000068
  .word 0x00000000
  .word 0x8e42019c
  .word 0x14400012
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ea20
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000054
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ea40
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000043
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ea58
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000032
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ea68
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000021
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ea78
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ea88
  .word 0x0c0e2898
  .word 0x00000000
  .word 0xdfbf0070
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
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


/* opt_propagation off: default nd701/1124B -> nd691/1124B; retained. */
#pragma push
#pragma opt_propagation off
// FUN_00371DD0


#ifndef PC_BUILD
asm int FUN_00371dd0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00c0a02d
  .word 0x0000982d
  .word 0xa7a0007e
  .word 0x3c020037
  .word 0x24421790
  .word 0xffa20000
  .word 0x2406001e
  .word 0x2407000a
  .word 0x0000402d
  .word 0x24090001
  .word 0x0280502d
  .word 0x3c0b0037
  .word 0x256b1710
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e8300d4
  .word 0x2402000d
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000ff
  .word 0x00000000
  .word 0x8e900198
  .word 0x8e82016c
  .word 0x30510fff
  .word 0x00021303
  .word 0x3052000f
  .word 0x8e830214
  .word 0x24020003
  .word 0x10620083
  .word 0x00000000
  .word 0x24020002
  .word 0x10620064
  .word 0x00000000
  .word 0x24040001
  .word 0x10640022
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000085
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30628000
  .word 0x1040000b
  .word 0x00000000
  .word 0x16000004
  .word 0x00000000
  .word 0x24100006
  .word 0x10000002
  .word 0x00000000
  .word 0x2610ffff
  .word 0x0000882d
  .word 0x0000902d
  .word 0x10000076
  .word 0x00000000
  .word 0x30622000
  .word 0x10400073
  .word 0x00000000
  .word 0x2a020006
  .word 0x14400004
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000002
  .word 0x00000000
  .word 0x26100001
  .word 0x0000882d
  .word 0x0000902d
  .word 0x10000068
  .word 0x00000000
  .word 0x2e010006
  .word 0x10200065
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463a720
  .word 0x00101080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x2413ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x30622000
  .word 0x10400002
  .word 0x00000000
  .word 0x0080982d
  .word 0x02338821
  .word 0x8e820170
  .word 0x0222082a
  .word 0x10200002
  .word 0x00000000
  .word 0x8e910174
  .word 0x8e820174
  .word 0x0051082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0000882d
  .word 0x00121300
  .word 0x02221025
  .word 0xae82016c
  .word 0x10000042
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x2413ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x30622000
  .word 0x10400002
  .word 0x00000000
  .word 0x0080982d
  .word 0x02338821
  .word 0x97a4007e
  .word 0x8e830174
  .word 0x02241021
  .word 0x0062082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0000882d
  .word 0x0621002c
  .word 0x00000000
  .word 0x00648823
  .word 0x10000029
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30628000
  .word 0x10400009
  .word 0x00000000
  .word 0x16400004
  .word 0x00000000
  .word 0x2412000a
  .word 0x1000000e
  .word 0x00000000
  .word 0x2652ffff
  .word 0x1000000b
  .word 0x00000000
  .word 0x30622000
  .word 0x10400008
  .word 0x00000000
  .word 0x2a41000a
  .word 0x10200004
  .word 0x00000000
  .word 0x26520001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000902d
  .word 0x00121300
  .word 0x02221025
  .word 0xae82016c
  .word 0x1000000d
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30628000
  .word 0x14400004
  .word 0x00000000
  .word 0x30622000
  .word 0x10400005
  .word 0x00000000
  .word 0x8e82019c
  .word 0x00401026
  .word 0x2c420001
  .word 0xae82019c
  .word 0x00121300
  .word 0x02221025
  .word 0xae82016c
  .word 0xae900198
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e820214
  .word 0x14400005
  .word 0x00000000
  .word 0x24020003
  .word 0xae820214
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae820214
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e820214
  .word 0x28410003
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae820214
  .word 0x10000002
  .word 0x00000000
  .word 0xae800214
  .word 0x2645ffff
  .word 0x0280202d
  .word 0x27a6007e
  .word 0x0c0e5d60
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9463094e
  .word 0x30630040
  .word 0x10600039
  .word 0x00000000
  .word 0x14400015
  .word 0x00000000
  .word 0x24020005
  .word 0x1202000f
  .word 0x00000000
  .word 0x24020004
  .word 0x1202000c
  .word 0x00000000
  .word 0x24020003
  .word 0x12020009
  .word 0x00000000
  .word 0x24020002
  .word 0x12020006
  .word 0x00000000
  .word 0x24020001
  .word 0x12020003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000028
  .word 0x00000000
  .word 0x2684082c
  .word 0x0c0e7bb8
  .word 0x00000000
  .word 0x24030001
  .word 0x1443001d
  .word 0x00000000
  .word 0x2602ffff
  .word 0x2c410005
  .word 0x10200004
  .word 0x00000000
  .word 0x0060102d
  .word 0x1000001b
  .word 0x00000000
  .word 0x1640000a
  .word 0x00000000
  .word 0x2684082c
  .word 0x0220282d
  .word 0x0c0e7dd4
  .word 0x00000000
  .word 0x1440000e
  .word 0x00000000
  .word 0x24020001
  .word 0x10000010
  .word 0x00000000
  .word 0x2684082c
  .word 0x0220282d
  .word 0x0c0e7dd4
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x0060102d
  .word 0x10000006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop


// FUN_00372260


u32 FUN_00372260(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069eaa0);

  return 2;

}


/* opt_dead_assignments off: default nd638/1192B -> nd620/1192B; retained. */
#pragma push
#pragma opt_dead_assignments off
// FUN_003722D0


#ifndef PC_BUILD
asm void FUN_003722d0(u32 param_1,u32 param_2,u32 param_3,u8 *param_4)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0982d
  .word 0x00e0882d
  .word 0x0000802d
  .word 0x3c03006a
  .word 0xc462ead8
  .word 0x3c03006a
  .word 0xc461eadc
  .word 0x3c03006a
  .word 0xc460eae0
  .word 0xe7a20060
  .word 0xe7a10064
  .word 0xe7a00068
  .word 0x3c03006a
  .word 0xc462eb18
  .word 0x3c03006a
  .word 0xc461eb1c
  .word 0x3c03006a
  .word 0xc460eb20
  .word 0xe7a20050
  .word 0xe7a10054
  .word 0xe7a00058
  .word 0x8ce30218
  .word 0x14660002
  .word 0x00000000
  .word 0x24100004
  .word 0x2cc10009
  .word 0x10200103
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484a740
  .word 0x00061880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x82220788
  .word 0x00021080
  .word 0x005d1021
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a118
  .word 0x8c480060
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100000e8
  .word 0x00000000
  .word 0x82220788
  .word 0x10400003
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00029880
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a120
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00029880
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x86280784
  .word 0x0260282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x3c07006a
  .word 0x24e7eb28
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e7eb38
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100000b1
  .word 0x00000000
  .word 0x82220788
  .word 0x10400003
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00029880
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a120
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00029880
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x86280786
  .word 0x0260282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a128
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e7eb48
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000007b
  .word 0x00000000
  .word 0x82230788
  .word 0x24020002
  .word 0x14620016
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00029880
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x9222078a
  .word 0x00021080
  .word 0x005d1021
  .word 0x0260282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a118
  .word 0x8c480050
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00029880
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a120
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e7eb58
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000043
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x46000306
  .word 0x0200302d
  .word 0x3c07006a
  .word 0x24e7ea58
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000032
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x46000306
  .word 0x0200302d
  .word 0x3c07006a
  .word 0x24e7ea68
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000021
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x46000306
  .word 0x0200302d
  .word 0x3c07006a
  .word 0x24e7ea78
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x46000306
  .word 0x0200302d
  .word 0x3c07006a
  .word 0x24e7ea88
  .word 0x0c0e2898
  .word 0x00000000
  .word 0xdfbf0040
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
#endif /* PC_BUILD: asm function omitted */
#pragma pop


/* opt_lifetimes on: default nd795/1128B -> nd792/1128B; retained. */
#pragma push
#pragma opt_lifetimes on
// FUN_00372790


#ifndef PC_BUILD
asm int FUN_00372790(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00c0902d
  .word 0x0000882d
  .word 0x0000802d
  .word 0x80c20788
  .word 0x04400004
  .word 0x00000000
  .word 0x28420003
  .word 0x14400002
  .word 0x00000000
  .word 0xa2400788
  .word 0x86420784
  .word 0x04410002
  .word 0x00000000
  .word 0xa6400784
  .word 0x3c020037
  .word 0x244222d0
  .word 0xffa20000
  .word 0x2406001b
  .word 0x2407000c
  .word 0x0000402d
  .word 0x24090001
  .word 0x0240502d
  .word 0x3c0b0037
  .word 0x256b2260
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e4300d4
  .word 0x2402000e
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000fe
  .word 0x00000000
  .word 0x8e450218
  .word 0x24020003
  .word 0x10a200b9
  .word 0x00000000
  .word 0x24040002
  .word 0x10a40070
  .word 0x00000000
  .word 0x24030001
  .word 0x10a30028
  .word 0x00000000
  .word 0x10a00003
  .word 0x00000000
  .word 0x100000c9
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30628000
  .word 0x1040000e
  .word 0x00000000
  .word 0x82420788
  .word 0x18400005
  .word 0x00000000
  .word 0x2442ffff
  .word 0xa2420788
  .word 0x10000002
  .word 0x00000000
  .word 0xa2440788
  .word 0xa6400786
  .word 0xa6400784
  .word 0xa240078a
  .word 0x100000b7
  .word 0x00000000
  .word 0x30622000
  .word 0x104000b4
  .word 0x00000000
  .word 0x82430788
  .word 0x28620002
  .word 0x14400004
  .word 0x00000000
  .word 0xa2400788
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xa2420788
  .word 0xa6400786
  .word 0xa6400784
  .word 0xa240078a
  .word 0x100000a6
  .word 0x00000000
  .word 0x82420788
  .word 0x1044000d
  .word 0x00000000
  .word 0x10430008
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000005
  .word 0x00000000
  .word 0x24100009
  .word 0x10000002
  .word 0x00000000
  .word 0x24101387
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x2411ffff
  .word 0x1000001d
  .word 0x00000000
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24110001
  .word 0x10000017
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x2411fff6
  .word 0x10000011
  .word 0x00000000
  .word 0x30620008
  .word 0x10400004
  .word 0x00000000
  .word 0x2411000a
  .word 0x1000000b
  .word 0x00000000
  .word 0x30620001
  .word 0x10400004
  .word 0x00000000
  .word 0x2411ff9c
  .word 0x10000005
  .word 0x00000000
  .word 0x30620002
  .word 0x10400002
  .word 0x00000000
  .word 0x24110064
  .word 0x00111c3c
  .word 0x00031c3f
  .word 0x86420784
  .word 0x00431021
  .word 0xa6420784
  .word 0x0002143c
  .word 0x0002143f
  .word 0x04410002
  .word 0x00000000
  .word 0xa6400784
  .word 0x86420784
  .word 0x0050102a
  .word 0x14400064
  .word 0x00000000
  .word 0xa6500784
  .word 0x10000061
  .word 0x00000000
  .word 0x82430788
  .word 0x1064000e
  .word 0x00000000
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x2410000a
  .word 0x10000005
  .word 0x00000000
  .word 0x2410000a
  .word 0x10000002
  .word 0x00000000
  .word 0x24100001
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x2411ffff
  .word 0x1000001d
  .word 0x00000000
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24110001
  .word 0x10000017
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x2411fff6
  .word 0x10000011
  .word 0x00000000
  .word 0x30620008
  .word 0x10400004
  .word 0x00000000
  .word 0x2411000a
  .word 0x1000000b
  .word 0x00000000
  .word 0x30620001
  .word 0x10400004
  .word 0x00000000
  .word 0x2411ff9c
  .word 0x10000005
  .word 0x00000000
  .word 0x30620002
  .word 0x10400002
  .word 0x00000000
  .word 0x24110064
  .word 0x00111c3c
  .word 0x00031c3f
  .word 0x86420786
  .word 0x00431021
  .word 0xa6420786
  .word 0x0002143c
  .word 0x0002143f
  .word 0x04410002
  .word 0x00000000
  .word 0xa6400786
  .word 0x86420786
  .word 0x0050102a
  .word 0x1440001e
  .word 0x00000000
  .word 0xa6500786
  .word 0x1000001b
  .word 0x00000000
  .word 0x82430788
  .word 0x24020002
  .word 0x14620017
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x2411ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x30622000
  .word 0x10400002
  .word 0x00000000
  .word 0x24110001
  .word 0x9242078a
  .word 0x00511021
  .word 0x04410002
  .word 0x00000000
  .word 0x24020002
  .word 0x28410003
  .word 0x14200002
  .word 0x00000000
  .word 0x0000102d
  .word 0xa242078a
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e420218
  .word 0x1c400005
  .word 0x00000000
  .word 0x24020003
  .word 0xae420218
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae420218
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e430218
  .word 0x28620003
  .word 0x14400004
  .word 0x00000000
  .word 0xae400218
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae420218
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop


/* W419 assertion-only negative: nd1534/object2372/window2384/rate64.67% -> nd1386/object2408/window2384/rate57.56%; over-window by24B, reverted. */
// FUN_00372C40
/* W417 adding the census-missing FUN_0019d3f0 assertion lowered nd1534 -> 1386 but grew 2372B -> 2408B past the 2384B window; reverted. */
/* W419 landed: census-missing assertion plus pointer-return declaration lowered nd1534 -> 1370 and object2372B -> 2344B (window2384B). */


#ifndef PC_BUILD
asm bool FUN_00372c40(int param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080902d
  .word 0x8c820164
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484e408
  .word 0x24050869
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0d860c
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e420274
  .word 0x14400004
  .word 0x00000000
  .word 0x24100006
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x24040078
  .word 0x0080282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a130
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x86280014
  .word 0x24040078
  .word 0x0080282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a060
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e430274
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0x24100006
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x24040078
  .word 0x24050084
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a134
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x86280016
  .word 0x24040078
  .word 0x24050084
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a060
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e430274
  .word 0x24020005
  .word 0x14620004
  .word 0x00000000
  .word 0x24100006
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x24040078
  .word 0x240500b4
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a138
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x9228001b
  .word 0x24040078
  .word 0x240500b4
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a060
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e420274
  .word 0x24100006
  .word 0x14500003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x24040078
  .word 0x240500c0
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a140
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x82230011
  .word 0x24020002
  .word 0x10620022
  .word 0x00000000
  .word 0x24020001
  .word 0x10620012
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000026
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x24040078
  .word 0x240500c0
  .word 0x46000306
  .word 0x0200302d
  .word 0x3c07006a
  .word 0x24e7eb68
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x24040078
  .word 0x240500c0
  .word 0x46000306
  .word 0x0200302d
  .word 0x3c07006a
  .word 0x24e7eb78
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x24040078
  .word 0x240500c0
  .word 0x46000306
  .word 0x0200302d
  .word 0x3c07006a
  .word 0x24e7eb88
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e430274
  .word 0x24020007
  .word 0x14620004
  .word 0x00000000
  .word 0x24100006
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x24040078
  .word 0x240500cc
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a148
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x46000506
  .word 0xc62c001c
  .word 0x0c14c368
  .word 0x00000000
  .word 0x24040078
  .word 0x240500cc
  .word 0x4600a306
  .word 0x0200302d
  .word 0x3c07006a
  .word 0x24e7eb98
  .word 0x0040402d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e430274
  .word 0x24020008
  .word 0x14620004
  .word 0x00000000
  .word 0x24100006
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x24040078
  .word 0x240500d8
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a150
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x46000506
  .word 0xc62c0020
  .word 0x0c14c368
  .word 0x00000000
  .word 0x24040078
  .word 0x240500d8
  .word 0x4600a306
  .word 0x0200302d
  .word 0x3c07006a
  .word 0x24e7eb98
  .word 0x0040402d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x0000102d
  .word 0x3c03007e
  .word 0x94640952
  .word 0x30834000
  .word 0x1060000c
  .word 0x00000000
  .word 0x8e440274
  .word 0x28830008
  .word 0x14600004
  .word 0x00000000
  .word 0xae400274
  .word 0x10000029
  .word 0x00000000
  .word 0x24830001
  .word 0xae430274
  .word 0x10000025
  .word 0x00000000
  .word 0x30831000
  .word 0x1060000c
  .word 0x00000000
  .word 0x8e430274
  .word 0x1c600005
  .word 0x00000000
  .word 0x24030008
  .word 0xae430274
  .word 0x1000001b
  .word 0x00000000
  .word 0x2463ffff
  .word 0xae430274
  .word 0x10000017
  .word 0x00000000
  .word 0x30838000
  .word 0x10600004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000011
  .word 0x00000000
  .word 0x30832000
  .word 0x10600004
  .word 0x00000000
  .word 0x24020001
  .word 0x1000000b
  .word 0x00000000
  .word 0x30830001
  .word 0x10600004
  .word 0x00000000
  .word 0x2402fff6
  .word 0x10000005
  .word 0x00000000
  .word 0x30830002
  .word 0x10600002
  .word 0x00000000
  .word 0x2402000a
  .word 0x10400116
  .word 0x00000000
  .word 0x8e430274
  .word 0x2c610009
  .word 0x10200112
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484a770
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x86220014
  .word 0x00431021
  .word 0xa6220014
  .word 0x0002143c
  .word 0x0002143f
  .word 0x2841fe0c
  .word 0x10200003
  .word 0x00000000
  .word 0x2402fe0c
  .word 0xa6220014
  .word 0x86220014
  .word 0x284103e9
  .word 0x142000fb
  .word 0x00000000
  .word 0x240203e8
  .word 0xa6220014
  .word 0x100000f7
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x86220016
  .word 0x00431021
  .word 0xa6220016
  .word 0x0002143c
  .word 0x0002143f
  .word 0x2841fe0c
  .word 0x10200003
  .word 0x00000000
  .word 0x2402fe0c
  .word 0xa6220016
  .word 0x86220016
  .word 0x284103e9
  .word 0x142000e7
  .word 0x00000000
  .word 0x240203e8
  .word 0xa6220016
  .word 0x100000e3
  .word 0x00000000
  .word 0x26260018
  .word 0x92250018
  .word 0x00a22021
  .word 0x288300ff
  .word 0x14600005
  .word 0x00000000
  .word 0x240200ff
  .word 0xa0c20000
  .word 0x100000d9
  .word 0x00000000
  .word 0x1c800004
  .word 0x00000000
  .word 0xa0c00000
  .word 0x100000d4
  .word 0x00000000
  .word 0x304200ff
  .word 0x00a21021
  .word 0xa0c20000
  .word 0x100000cf
  .word 0x00000000
  .word 0x26260019
  .word 0x92250019
  .word 0x00a22021
  .word 0x288300ff
  .word 0x14600005
  .word 0x00000000
  .word 0x240200ff
  .word 0xa0c20000
  .word 0x100000c5
  .word 0x00000000
  .word 0x1c800004
  .word 0x00000000
  .word 0xa0c00000
  .word 0x100000c0
  .word 0x00000000
  .word 0x304200ff
  .word 0x00a21021
  .word 0xa0c20000
  .word 0x100000bb
  .word 0x00000000
  .word 0x2626001a
  .word 0x9225001a
  .word 0x00a22021
  .word 0x288300ff
  .word 0x14600005
  .word 0x00000000
  .word 0x240200ff
  .word 0xa0c20000
  .word 0x100000b1
  .word 0x00000000
  .word 0x1c800004
  .word 0x00000000
  .word 0xa0c00000
  .word 0x100000ac
  .word 0x00000000
  .word 0x304200ff
  .word 0x00a21021
  .word 0xa0c20000
  .word 0x100000a7
  .word 0x00000000
  .word 0x2626001b
  .word 0x9225001b
  .word 0x00a22021
  .word 0x288300ff
  .word 0x14600005
  .word 0x00000000
  .word 0x240200ff
  .word 0xa0c20000
  .word 0x1000009d
  .word 0x00000000
  .word 0x1c800004
  .word 0x00000000
  .word 0xa0c00000
  .word 0x10000098
  .word 0x00000000
  .word 0x304200ff
  .word 0x00a21021
  .word 0xa0c20000
  .word 0x10000093
  .word 0x00000000
  .word 0x0002263c
  .word 0x0004263f
  .word 0x82230011
  .word 0x00641821
  .word 0xa2230011
  .word 0x00031e3c
  .word 0x00031e3f
  .word 0x0043082a
  .word 0x14200005
  .word 0x00000000
  .word 0x04410003
  .word 0x00000000
  .word 0x24030002
  .word 0xa2230011
  .word 0x82240011
  .word 0x24430002
  .word 0x0083182a
  .word 0x14600004
  .word 0x00000000
  .word 0x18400002
  .word 0x00000000
  .word 0xa2200011
  .word 0x82220011
  .word 0x04410002
  .word 0x00000000
  .word 0xa2200011
  .word 0x82220011
  .word 0x28410003
  .word 0x14200075
  .word 0x00000000
  .word 0x24020002
  .word 0xa2220011
  .word 0x10000071
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0xc620001c
  .word 0x46020040
  .word 0xe621001c
  .word 0x3c02c120
  .word 0x44820000
  .word 0x00000000
  .word 0x46020000
  .word 0x46000836
  .word 0x45000008
  .word 0x00000000
  .word 0x44800000
  .word 0x00000000
  .word 0x46001034
  .word 0x45000003
  .word 0x00000000
  .word 0x3c024120
  .word 0xae22001c
  .word 0xc621001c
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46020000
  .word 0x46000834
  .word 0x45010008
  .word 0x00000000
  .word 0x44800000
  .word 0x00000000
  .word 0x46001036
  .word 0x45010003
  .word 0x00000000
  .word 0x3c02c120
  .word 0xae22001c
  .word 0xc621001c
  .word 0x3c02c120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe620001c
  .word 0xc621001c
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x4501003b
  .word 0x00000000
  .word 0xe620001c
  .word 0x10000038
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0xc6200020
  .word 0x46020040
  .word 0xe6210020
  .word 0x3c02c120
  .word 0x44820000
  .word 0x00000000
  .word 0x46020000
  .word 0x46000836
  .word 0x45000008
  .word 0x00000000
  .word 0x44800000
  .word 0x00000000
  .word 0x46001034
  .word 0x45000003
  .word 0x00000000
  .word 0x3c024120
  .word 0xae220020
  .word 0xc6210020
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46020000
  .word 0x46000834
  .word 0x45010008
  .word 0x00000000
  .word 0x44800000
  .word 0x00000000
  .word 0x46001036
  .word 0x45010003
  .word 0x00000000
  .word 0x3c02c120
  .word 0xae220020
  .word 0xc6210020
  .word 0x3c02c120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe6200020
  .word 0xc6210020
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010002
  .word 0x00000000
  .word 0xe6200020
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420020
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e420164
  .word 0xac400034
  .word 0x3c04006a
  .word 0x2484eba8
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
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


// FUN_00373590
u64 FUN_00373590(u64 param_1,u64 param_2,int param_3)
{
  int iVar1;
  char cVar2;
  u64 uVar3;
  int iVar4;

  iVar4 = param_3;
  cVar2 = '\x01';
  iVar1 = **(int **)(iVar4 + 0x164);
  FUN_00361830(param_3);
  switch (iVar1) {
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x17:
  case 0x1b:
    break;

  case 0x10:
    iVar1 = *(int *)(iVar4 + 0xe8);
    if (iVar1 == 0) {
      return cVar2;
    }
    break;

  case 0x11:
    iVar1 = *(int *)(iVar4 + 0xe8);
    if (iVar1 == 0) {
      return cVar2;
    }
    break;

  case 0x18:
    cVar2 = FUN_00372c40_ptr(param_3);
    break;

  case 0x19:
  case 6:
    break;

  default:
    if ((*(u16 *)DAT_007e094e_abs & 0x800) != 0) {
      cVar2 = '\0';
    }
    break;
  }
LAB_003736a4:
  if (!cVar2) {
    if (*(int *)(iVar4 + 0xe8) != 0) {
      FUN_0035adb0(*(int *)(iVar4 + 0xe8),1);
      *(u32 *)(iVar4 + 0xe8) = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


#pragma alias FUN_001a42f0_evt_f32 FUN_001a42f0
extern f32 *FUN_001a42f0_evt_f32(int param_1,int param_2);
/* opt_dead_assignments off: default nd3053/4240B -> nd3051/4240B; retained. W416 ORDER call swap (case-4 integer fetch before the f32 fetches) lowered nd3051 -> 2969, object/window 4240/4256. */
#pragma push
#pragma opt_dead_assignments off
// FUN_00373700


#ifndef PC_BUILD
asm u32 FUN_00373700(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdfdd0
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x00c0a02d
  .word 0x24130001
  .word 0x3c0240a0
  .word 0x4482a800
  .word 0x3c024000
  .word 0x4482a000
  .word 0x8cd2016c
  .word 0x2e410013
  .word 0x102003b7
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463a7a0
  .word 0x00121080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae820198
  .word 0x8e8400e8
  .word 0x0260282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae82019c
  .word 0x8e8400e8
  .word 0x24050002
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae8201a0
  .word 0x8e8400e8
  .word 0x24050003
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae8201a4
  .word 0x8e8400e8
  .word 0x24050004
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae8201a8
  .word 0x0280202d
  .word 0x8e850198
  .word 0x8e86019c
  .word 0x0c0e5554
  .word 0x00000000
  .word 0x10000391
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae820198
  .word 0x8e8400e8
  .word 0x0260282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae82019c
  .word 0x8e8400e8
  .word 0x24050002
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae8201a0
  .word 0x0280202d
  .word 0x8e850198
  .word 0x8e86019c
  .word 0x0c0e5554
  .word 0x00000000
  .word 0x10000378
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae820198
  .word 0x8e8400e8
  .word 0x0260282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae82019c
  .word 0x8e8400e8
  .word 0x24050002
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae8201a0
  .word 0x8e8400e8
  .word 0x24050003
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae8201a4
  .word 0x1000035e
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae820198
  .word 0x10000356
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae820198
  .word 0x1000034e
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x0000282d
  .word 0x0c0690bc
  .word 0x00000000
  .word 0xc4400000
  .word 0xe6800198
  .word 0x8e8400e8
  .word 0x0260282d
  .word 0x0c0690bc
  .word 0x00000000
  .word 0xc4400000
  .word 0xe680019c
  .word 0x8e8400e8
  .word 0x24050002
  .word 0x0c0690bc
  .word 0x00000000
  .word 0xc4400000
  .word 0xe68001a0
  .word 0x8e8400e8
  .word 0x24050003
  .word 0x0c0690bc
  .word 0x00000000
  .word 0xc4400000
  .word 0xe68001a4
  .word 0x8e8400e8
  .word 0x24050004
  .word 0x0c0690bc
  .word 0x00000000
  .word 0xc4400000
  .word 0xe68001a8
  .word 0x8e8400e8
  .word 0x24050005
  .word 0x0c0690bc
  .word 0x00000000
  .word 0xc4400000
  .word 0xe68001ac
  .word 0x8e8400e8
  .word 0x24050006
  .word 0x0c06906c
  .word 0x00000000
  .word 0xc4400000
  .word 0x46800020
  .word 0xe68001b0
  .word 0x8e8400e8
  .word 0x24050007
  .word 0x0c06906c
  .word 0x00000000
  .word 0xc4400000
  .word 0x46800020
  .word 0xe68001b4
  .word 0xc6800198
  .word 0xe7a00160
  .word 0xc680019c
  .word 0xe7a00164
  .word 0xc68001a0
  .word 0xe7a00168
  .word 0xafa0016c
  .word 0xc68001a4
  .word 0xe7a00150
  .word 0xc68001a8
  .word 0xe7a00154
  .word 0xc68001ac
  .word 0xe7a00158
  .word 0xafa0015c
  .word 0xc68001b0
  .word 0xe7a001ec
  .word 0xc68001b4
  .word 0xe7a001e8
  .word 0xafa001f0
  .word 0x8e840210
  .word 0x27a50160
  .word 0x27a60150
  .word 0x27a701e8
  .word 0x0c0e2d54
  .word 0x00000000
  .word 0x27a301d8
  .word 0x2402000c
  .word 0x10600008
  .word 0x00000000
  .word 0xa0600000
  .word 0x24630001
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040802d
  .word 0x27a40110
  .word 0x27a501e8
  .word 0x0c0e2d80
  .word 0x00000000
  .word 0x1200001c
  .word 0x00000000
  .word 0x8e040004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x3c034220
  .word 0x44831800
  .word 0xc4410020
  .word 0xc4400030
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4601181c
  .word 0xe7a001c8
  .word 0xc4410024
  .word 0xc4400034
  .word 0x46001018
  .word 0x4601181c
  .word 0xe7a001cc
  .word 0xc4410028
  .word 0xc4400038
  .word 0x46001018
  .word 0x4601181c
  .word 0xe7a001d0
  .word 0x27a40110
  .word 0x27a501c8
  .word 0x24060002
  .word 0x0c130d74
  .word 0x00000000
  .word 0x3c024120
  .word 0x44826000
  .word 0x0280202d
  .word 0x27a50110
  .word 0x0c0e55f4
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0d8978
  .word 0x00000000
  .word 0x100002c9
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x24050002
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae820198
  .word 0x8e8400e8
  .word 0x24050003
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae82019c
  .word 0x8e8400e8
  .word 0x24050004
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae8201a0
  .word 0x8e8400e8
  .word 0x24050005
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae8201a4
  .word 0x8e8400e8
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae8201a8
  .word 0x8e8400e8
  .word 0x0260282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae8201ac
  .word 0x100002a3
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae820198
  .word 0x8e8400e8
  .word 0x0260282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae82019c
  .word 0x8e8400e8
  .word 0x24050002
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae8201a0
  .word 0x1000028f
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae820198
  .word 0x8e8400e8
  .word 0x0260282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae82019c
  .word 0x10000281
  .word 0x00000000
  .word 0x8e820164
  .word 0x8c510000
  .word 0x0280202d
  .word 0x0c0d860c
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c02007e
  .word 0x9442094c
  .word 0x30420010
  .word 0x10400006
  .word 0x00000000
  .word 0x3c0240a0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600ad42
  .word 0x4600a502
  .word 0x0280202d
  .word 0x0c0d8978
  .word 0x00000000
  .word 0x27a40208
  .word 0x27a501f8
  .word 0x0c0e29f0
  .word 0x00000000
  .word 0x27a4022c
  .word 0x27a50228
  .word 0x0c0e1844
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x30621000
  .word 0x10400017
  .word 0x00000000
  .word 0xc7a10208
  .word 0x8fa2022c
  .word 0xc4400000
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4615081c
  .word 0xe4400000
  .word 0xc7a1020c
  .word 0x8fa2022c
  .word 0xc4400004
  .word 0x46001018
  .word 0x4615081c
  .word 0xe4400004
  .word 0xc7a10210
  .word 0x8fa2022c
  .word 0xc4400008
  .word 0x46001018
  .word 0x4615081c
  .word 0xe4400008
  .word 0x10000018
  .word 0x00000000
  .word 0x30624000
  .word 0x10400015
  .word 0x00000000
  .word 0xc7a10208
  .word 0x8fa2022c
  .word 0xc4400000
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4615081d
  .word 0xe4400000
  .word 0xc7a1020c
  .word 0x8fa2022c
  .word 0xc4400004
  .word 0x46001018
  .word 0x4615081d
  .word 0xe4400004
  .word 0xc7a10210
  .word 0x8fa2022c
  .word 0xc4400008
  .word 0x46001018
  .word 0x4615081d
  .word 0xe4400008
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x30622000
  .word 0x10400017
  .word 0x00000000
  .word 0xc7a101f8
  .word 0x8fa2022c
  .word 0xc4400000
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4615081d
  .word 0xe4400000
  .word 0xc7a101fc
  .word 0x8fa2022c
  .word 0xc4400004
  .word 0x46001018
  .word 0x4615081d
  .word 0xe4400004
  .word 0xc7a10200
  .word 0x8fa2022c
  .word 0xc4400008
  .word 0x46001018
  .word 0x4615081d
  .word 0xe4400008
  .word 0x10000018
  .word 0x00000000
  .word 0x30628000
  .word 0x10400015
  .word 0x00000000
  .word 0xc7a101f8
  .word 0x8fa2022c
  .word 0xc4400000
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4615081c
  .word 0xe4400000
  .word 0xc7a101fc
  .word 0x8fa2022c
  .word 0xc4400004
  .word 0x46001018
  .word 0x4615081c
  .word 0xe4400004
  .word 0xc7a10200
  .word 0x8fa2022c
  .word 0xc4400008
  .word 0x46001018
  .word 0x4615081c
  .word 0xe4400008
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x30620004
  .word 0x1040000c
  .word 0x00000000
  .word 0x8fa3022c
  .word 0xc4610004
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a803
  .word 0x00000000
  .word 0x46000800
  .word 0xe4600004
  .word 0x1000000c
  .word 0x00000000
  .word 0x30620001
  .word 0x10400009
  .word 0x00000000
  .word 0x8fa3022c
  .word 0xc4610004
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a803
  .word 0x46000801
  .word 0xe4600004
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x30620008
  .word 0x10400007
  .word 0x00000000
  .word 0x8fa20228
  .word 0xc4400004
  .word 0x46140001
  .word 0xe4400004
  .word 0x10000008
  .word 0x00000000
  .word 0x30620002
  .word 0x10400005
  .word 0x00000000
  .word 0x8fa20228
  .word 0xc4400004
  .word 0x46140000
  .word 0xe4400004
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30620100
  .word 0x10400017
  .word 0x00000000
  .word 0x8fa2022c
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0x3c020096
  .word 0xe4428840
  .word 0x3c020096
  .word 0xe4418844
  .word 0x3c020096
  .word 0xe4408848
  .word 0x8fa20228
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0x3c020096
  .word 0xe4428830
  .word 0x3c020096
  .word 0xe4418834
  .word 0x3c020096
  .word 0xe4408838
  .word 0x10000018
  .word 0x00000000
  .word 0x30620800
  .word 0x10400015
  .word 0x00000000
  .word 0x8fa3022c
  .word 0x3c020096
  .word 0xc4428840
  .word 0x3c020096
  .word 0xc4418844
  .word 0x3c020096
  .word 0xc4408848
  .word 0xe4620000
  .word 0xe4610004
  .word 0xe4600008
  .word 0x8fa30228
  .word 0x3c020096
  .word 0xc4428830
  .word 0x3c020096
  .word 0xc4418834
  .word 0x3c020096
  .word 0xc4408838
  .word 0xe4620000
  .word 0xe4610004
  .word 0xe4600008
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420200
  .word 0x10400018
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484ebc0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24020025
  .word 0x16220008
  .word 0x00000000
  .word 0x82020010
  .word 0x14400005
  .word 0x00000000
  .word 0x82030013
  .word 0x24020001
  .word 0x10620007
  .word 0x00000000
  .word 0x24020001
  .word 0x12220004
  .word 0x00000000
  .word 0x24020030
  .word 0x16220004
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0d8bc8
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094c
  .word 0x30420080
  .word 0x10400022
  .word 0x00000000
  .word 0x8fa2022c
  .word 0x27a400f0
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a200f0
  .word 0xe7a100f4
  .word 0xe7a000f8
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a200fc
  .word 0xe7a10100
  .word 0xe7a00104
  .word 0xc7a10100
  .word 0x3c02447a
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a00100
  .word 0x27a501b8
  .word 0x0c06b30c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x8fa2022c
  .word 0xc7a201b8
  .word 0xc7a101bc
  .word 0xc7a001c0
  .word 0xe4420000
  .word 0xe4410004
  .word 0xe4400008
  .word 0x8fa2022c
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a201a8
  .word 0xe7a101ac
  .word 0xe7a001b0
  .word 0x8fa20228
  .word 0x27a40198
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a20198
  .word 0xe7a1019c
  .word 0xe7a001a0
  .word 0x0c0eee6c
  .word 0x00000000
  .word 0xc7a00198
  .word 0x8fa20228
  .word 0xe4400000
  .word 0xc7a0019c
  .word 0x8fa20228
  .word 0xe4400004
  .word 0xc7a001a0
  .word 0x8fa20228
  .word 0xe4400008
  .word 0x27a400b0
  .word 0x27a501a8
  .word 0x27a60198
  .word 0x0c0ede68
  .word 0x00000000
  .word 0x3c0242c8
  .word 0x44826000
  .word 0x0280202d
  .word 0x27a500b0
  .word 0x0c0e55f4
  .word 0x00000000
  .word 0x1000013a
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0d8978
  .word 0x00000000
  .word 0x27a4022c
  .word 0x27a50228
  .word 0x0c0e1884
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x30622000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8fa30228
  .word 0xc4610004
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe4600004
  .word 0x1000000b
  .word 0x00000000
  .word 0x30628000
  .word 0x10400008
  .word 0x00000000
  .word 0x8fa30228
  .word 0xc4610004
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe4600004
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x30621000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8fa30228
  .word 0xc4610000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe4600000
  .word 0x1000000b
  .word 0x00000000
  .word 0x30624000
  .word 0x10400008
  .word 0x00000000
  .word 0x8fa30228
  .word 0xc4610000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe4600000
  .word 0x3c02007e
  .word 0x9442094c
  .word 0x30420100
  .word 0x10400005
  .word 0x00000000
  .word 0x8fa20228
  .word 0xac400000
  .word 0x8fa20228
  .word 0xac400004
  .word 0x8fa2022c
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a20188
  .word 0xe7a1018c
  .word 0xe7a00190
  .word 0x8fa20228
  .word 0x27a40178
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a20178
  .word 0xe7a1017c
  .word 0xe7a00180
  .word 0x0c0eee6c
  .word 0x00000000
  .word 0xc7a00178
  .word 0x8fa20228
  .word 0xe4400000
  .word 0xc7a0017c
  .word 0x8fa20228
  .word 0xe4400004
  .word 0xc7a00180
  .word 0x8fa20228
  .word 0xe4400008
  .word 0x27a40070
  .word 0x27a50188
  .word 0x27a60178
  .word 0x0c0ede68
  .word 0x00000000
  .word 0x3c0242c8
  .word 0x44826000
  .word 0x0280202d
  .word 0x27a50070
  .word 0x0c0e55f4
  .word 0x00000000
  .word 0x100000d3
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae820198
  .word 0x8e8400e8
  .word 0x0260282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae82019c
  .word 0x100000c5
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae820198
  .word 0x8e8400e8
  .word 0x0260282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae82019c
  .word 0x8e8400e8
  .word 0x24050002
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae8201a0
  .word 0x8e8400e8
  .word 0x24050003
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae8201a4
  .word 0x100000ab
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae820198
  .word 0x8e8400e8
  .word 0x0260282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae82019c
  .word 0x8e8400e8
  .word 0x24050002
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae8201a0
  .word 0x10000097
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae820198
  .word 0x8e8400e8
  .word 0x0260282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae82019c
  .word 0x8e8400e8
  .word 0x24050002
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae8201a0
  .word 0x10000083
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae820198
  .word 0x8e8400e8
  .word 0x0260282d
  .word 0x0c0690bc
  .word 0x00000000
  .word 0xc4400000
  .word 0xe680019c
  .word 0x10000075
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xae820198
  .word 0x1000006d
  .word 0x00000000
  .word 0x24041e59
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000067
  .word 0x00000000
  .word 0xc6800198
  .word 0xe6000004
  .word 0xc680019c
  .word 0xe6000008
  .word 0xc68001a0
  .word 0xe600000c
  .word 0xc68001a4
  .word 0xe6000010
  .word 0xc68001a8
  .word 0xe6000014
  .word 0xc68001ac
  .word 0xe6000100
  .word 0x0280202d
  .word 0x0c0d8a3c
  .word 0x00000000
  .word 0xc6000004
  .word 0xe6800198
  .word 0xc6000008
  .word 0xe680019c
  .word 0xc600000c
  .word 0xe68001a0
  .word 0xc6000010
  .word 0xe68001a4
  .word 0xc6000014
  .word 0xe68001a8
  .word 0xc6000100
  .word 0xe68001ac
  .word 0x1000004a
  .word 0x00000000
  .word 0xafa00224
  .word 0x0280202d
  .word 0x0c0d8978
  .word 0x00000000
  .word 0x27a40224
  .word 0x27a50220
  .word 0x27a6021c
  .word 0x27a70218
  .word 0x0c0e18e4
  .word 0x00000000
  .word 0x8fa2021c
  .word 0x8c420000
  .word 0x00021840
  .word 0x8fa20224
  .word 0x00431021
  .word 0x94440000
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x3c034234
  .word 0x44836000
  .word 0x0280202d
  .word 0x24450004
  .word 0x0c0e589c
  .word 0x00000000
  .word 0x0c0e18f0
  .word 0x00000000
  .word 0x24030001
  .word 0x1443002b
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x1040000f
  .word 0x00000000
  .word 0x8fa4021c
  .word 0x8c830000
  .word 0x8fa20220
  .word 0x8c420000
  .word 0x2442ffff
  .word 0x14620004
  .word 0x00000000
  .word 0xac800000
  .word 0x1000001c
  .word 0x00000000
  .word 0x24620001
  .word 0xac820000
  .word 0x10000018
  .word 0x00000000
  .word 0x30628000
  .word 0x10400015
  .word 0x00000000
  .word 0x8fa3021c
  .word 0x8c620000
  .word 0x14400007
  .word 0x00000000
  .word 0x8fa20220
  .word 0x8c420000
  .word 0x2442ffff
  .word 0xac620000
  .word 0x1000000b
  .word 0x00000000
  .word 0x2442ffff
  .word 0xac620000
  .word 0x10000007
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420800
  .word 0x10400002
  .word 0x00000000
  .word 0x0000982d
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620020
  .word 0x10400024
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x10800037
  .word 0x00000000
  .word 0x0c065408
  .word 0x00000000
  .word 0xae8000e8
  .word 0x24020008
  .word 0x12420014
  .word 0x00000000
  .word 0x24020009
  .word 0x1242000b
  .word 0x00000000
  .word 0x24020004
  .word 0x12420003
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x8e840210
  .word 0x0c0e2c50
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050002
  .word 0x0c0e2988
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050001
  .word 0x0c0e2830
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000024
  .word 0x00000000
  .word 0x30620040
  .word 0x10400014
  .word 0x00000000
  .word 0x8e8200e8
  .word 0x10400011
  .word 0x00000000
  .word 0x24020008
  .word 0x12420003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050001
  .word 0x0c0e2830
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x0c065408
  .word 0x00000000
  .word 0xae8000e8
  .word 0x24020001
  .word 0x1000000e
  .word 0x00000000
  .word 0x1660000b
  .word 0x00000000
  .word 0x8e8400e8
  .word 0x10800005
  .word 0x00000000
  .word 0x24050001
  .word 0x0c0d6b6c
  .word 0x00000000
  .word 0xae8000e8
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0230
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop


// FUN_003747A0


void FUN_003747a0(int param_1,int param_2,int param_3,int param_4)



{

  int iVar4;

  u16 *puVar5;

  u8 *puVar6;

  int lVar7;

  int iVar8;

  u32 uVar9;

  int iVar10;

  u32 uVar11;

  f32 uVar12;

  u8 auStack_50 [72];

  f32 fStack_4;

  f32 fStack_8;

  

  iVar8 = (int)param_4;

  if (param_3 == *(int *)(iVar8 + 0x108) + *(int *)(iVar8 + 0x110)) {

    uVar11 = 4;

  }

  else {

    uVar11 = 0;

  }

  if (param_3 == 0) {

    uVar12 = FUN_0038a220(*(u32 *)(iVar8 + 0xe0));

    evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar12, uVar11, (const char *)&gp0xffffa160);

  }

  else {

    lVar7 = FUN_003b5d00();

    if (lVar7 != 0) {

      if (*(int *)(iVar8 + 0x108) + *(int *)(iVar8 + 0x110) == 0) {

        if (*(int *)(iVar8 + 0x660) == 10) {

          if (*(int *)(iVar8 + 0x860) != 0) {

            FUN_00318ad0(*(int *)(iVar8 + 0x860),iVar8 + 0x85c);

            *(u32 *)(iVar8 + 0x860) = 0;

          }

        }

        else if ((*(int *)(iVar8 + 0x660) == 0xb) && (*(int *)(iVar8 + 0x864) != 0)) {

          FUN_0034ff90(*(int *)(iVar8 + 0x864),iVar8 + 0x85c);

          *(u32 *)(iVar8 + 0x864) = 0;

        }

      }

      iVar10 = 0;

      for (uVar9 = 0; (int)uVar9 < 0x16; uVar9 = uVar9 + 1) {

        if (*(u32 *)(iVar8 + 0x660) == uVar9) {

          for (puVar5 = (u16 *)FUN_003b5430(lVar7,uVar9 & 0xff); puVar5 != (u16 *)0x0;

              puVar5 = *(u16 **)(puVar5 + 0x7c)) {

            iVar10 = iVar10 + 1;

            if ((iVar10 == *(int *)(iVar8 + 0x108) + *(int *)(iVar8 + 0x110)) &&

               (puVar5 != (u16 *)0x0)) {

              if (*(int *)(iVar8 + 0x660) == 10) {

                fStack_4 = DAT_007cce48;

                iVar4 = *(int *)(iVar8 + 0x860);

                if (iVar4 != *(int *)(puVar5 + 0x82)) {

                  if (iVar4 != 0) {

                    FUN_00318ad0(iVar4,iVar8 + 0x85c);

                    *(u32 *)(iVar8 + 0x860) = 0;

                  }

                  puVar6 = (u8 *)FUN_00318b00(*(u32 *)(puVar5 + 0x82));

                  *(RwRGBA *)(iVar8 + 0x85c) = *(RwRGBA *)puVar6;

                  *(u32 *)(iVar8 + 0x860) = *(u32 *)(puVar5 + 0x82);

                  FUN_00318ad0(*(u32 *)(puVar5 + 0x82),&fStack_4);

                }

              }

              else if (*(int *)(iVar8 + 0x660) == 0xb) {

                fStack_8 = DAT_007cce4c;

                iVar4 = *(int *)(iVar8 + 0x864);

                if (iVar4 != *(int *)(puVar5 + 0x82)) {

                  if (iVar4 != 0) {

                    FUN_0034ff90(iVar4,iVar8 + 0x85c);

                    *(u32 *)(iVar8 + 0x864) = 0;

                  }

                  FUN_00350040(*(u32 *)(puVar5 + 0x82),(u32 *)(iVar8 + 0x85c));

                  *(u32 *)(iVar8 + 0x864) = *(u32 *)(puVar5 + 0x82);

                  FUN_0034ff90(*(u32 *)(puVar5 + 0x82),&fStack_8);

                }

              }

              else {

                FUN_00396270_f32(50.0f,param_4,(f32 *)(puVar5 + 2));

              }

            }

            if (iVar10 == param_3) {

              FUN_00523ac8(auStack_50,DAT_0069ebd8,*puVar5 & 0x3ff);

              uVar12 = FUN_0038a220(*(u32 *)(iVar8 + 0xe0));

              evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar12, uVar11, (const char *)&gp0xffffa068, auStack_50);

              return;

            }

          }

        }

      }

    }

  }

  return;

}


// W419 exhaustive declaration sweep: all 120 permutations of iVar1/result/iVar3/iVar4/callCount stayed nd32/object412; inline count probe nd32 -> nd34, object412 unchanged.
// W419 declaration-sweep negative: nd32/object412/window416/rate7.77% for every permutation; inline count probe nd34/object412/rate8.25%.
// FUN_00374AF0


#ifndef PC_BUILD
asm s32 FUN_00374af0(s32 param_1,s32 param_2,s32 param_3)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x2411000d
  .word 0x8cc40660
  .word 0x0c0ed77c
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c020037
  .word 0x244247a0
  .word 0xffa20000
  .word 0x26090001
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2406000c
  .word 0x0220382d
  .word 0x8e480108
  .word 0x0240502d
  .word 0x0000582d
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e4300d4
  .word 0x2402000a
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000003c
  .word 0x00000000
  .word 0x26020001
  .word 0x2841000d
  .word 0x10200002
  .word 0x00000000
  .word 0x0040882d
  .word 0x0240202d
  .word 0x0c0d8978
  .word 0x00000000
  .word 0x26060001
  .word 0x26440108
  .word 0x26450110
  .word 0x0220382d
  .word 0x0000402d
  .word 0x24094000
  .word 0x240a1000
  .word 0x0c0dbda0
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x24060001
  .word 0x00c0382d
  .word 0x0000402d
  .word 0x24092000
  .word 0x340a8000
  .word 0x0c0dbda0
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x00c0802d
  .word 0x10000008
  .word 0x00000000
  .word 0x30620020
  .word 0x10400004
  .word 0x00000000
  .word 0x2410ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x2402ffff
  .word 0x12020004
  .word 0x00000000
  .word 0x24020001
  .word 0x1602000c
  .word 0x00000000
  .word 0x8e430660
  .word 0x2402000a
  .word 0x14620008
  .word 0x00000000
  .word 0x8e440860
  .word 0x10800005
  .word 0x00000000
  .word 0x2645085c
  .word 0x0c0c62b4
  .word 0x00000000
  .word 0xae400860
  .word 0x0200102d
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_00374C90


u32 FUN_00374c90(int param_1,int param_2,int param_3)



{
  f32 uVar1;
  u8 auStack_20 [32];

  

  FUN_00523ac8(auStack_20,DAT_006a0000_abs - 0x1410,
               *(s16 *)((u8 *)&DAT_007cca68 - 0x6288),
               *(s16 *)((u8 *)&DAT_007cca6c - 0x6284));

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));
  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)&gp0xffffa068 - 0x5f98, (void *)auStack_20);
  return 2;

}


// FUN_00374D30


void FUN_00374d30(int param_1,int param_2,u32 param_3,u8 *param_4)
{
  int iVar2;
  int iVar3;
  u8 *pcVar4;
  f32 fVar1;

  pcVar4 = param_4;
  iVar3 = 0;
  if (*(int *)(pcVar4 + 0x12c) == (int)param_3) {
    iVar3 = 4;
  }

  switch (param_3) {
  case 0: {
    s32 scaledY = param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(pcVar4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, fVar1, 0xe, (const char *)&gp0xffffa168);
    fVar1 = FUN_0038a220(*(u32 *)(pcVar4 + 0xe0));
    evtMenuDrawText((param_1 + 8) * 0xc, scaledY, fVar1, iVar3, (const char *)&gp0xffffa170, (u32)*(s16 *)&gp0xffff9d78);
    break;
  }
  case 1:
    iVar2 = param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(pcVar4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, iVar2, fVar1, 0xe, (const char *)&gp0xffffa178);
    fVar1 = FUN_0038a220(*(u32 *)(pcVar4 + 0xe0));
    evtMenuDrawText((param_1 + 8) * 0xc, iVar2, fVar1, iVar3, (const char *)&gp0xffffa180, (u32)*(s16 *)&gp0xffff9d7c);
    break;
  case 2:
    break;
  case 3:
    fVar1 = FUN_0038a220(*(u32 *)(pcVar4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, fVar1, iVar3, (const char *)DAT_0069ec08_abs);
    break;
  case 4:
    fVar1 = FUN_0038a220(*(u32 *)(pcVar4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, fVar1, iVar3, (const char *)DAT_0069ec18_abs);
    break;
  case 5:
    fVar1 = FUN_0038a220(*(u32 *)(pcVar4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, fVar1, iVar3, (const char *)DAT_0069ea78_abs);
    break;
  case 6:
    fVar1 = FUN_0038a220(*(u32 *)(pcVar4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, fVar1, iVar3, (const char *)DAT_0069ea88_abs);
    break;
  case 7:
    fVar1 = FUN_0038a220(*(u32 *)(pcVar4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, fVar1, iVar3, (const char *)DAT_0069ec28_abs);
    break;
  }
}


// FUN_00375000


#ifndef PC_BUILD
asm int FUN_00375000(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb00010
  .word 0x00c0802d
  .word 0x3c020037
  .word 0x24424d30
  .word 0xffa20000
  .word 0x24060012
  .word 0x2407000b
  .word 0x0000402d
  .word 0x24090008
  .word 0x0200502d
  .word 0x3c0b0037
  .word 0x256b4c90
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e0300d4
  .word 0x24020009
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000b8
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30421000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e02012c
  .word 0x38420001
  .word 0xae02012c
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30424000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e02012c
  .word 0x38420001
  .word 0xae02012c
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30438000
  .word 0x10600016
  .word 0x00000000
  .word 0x8e04012c
  .word 0x24030001
  .word 0x1083000c
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x87839d78
  .word 0x1860000b
  .word 0x00000000
  .word 0x2463ffff
  .word 0xa7839d78
  .word 0x10000007
  .word 0x00000000
  .word 0x87839d7c
  .word 0x28610002
  .word 0x14200003
  .word 0x00000000
  .word 0x2463ffff
  .word 0xa7839d7c
  .word 0x30432000
  .word 0x10600017
  .word 0x00000000
  .word 0x8e04012c
  .word 0x24030001
  .word 0x1083000d
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x87839d78
  .word 0x286103e7
  .word 0x1020000b
  .word 0x00000000
  .word 0x24630001
  .word 0xa7839d78
  .word 0x10000007
  .word 0x00000000
  .word 0x87839d7c
  .word 0x286103e7
  .word 0x10200003
  .word 0x00000000
  .word 0x24630001
  .word 0xa7839d7c
  .word 0x30430004
  .word 0x10600019
  .word 0x00000000
  .word 0x8e03012c
  .word 0x24040001
  .word 0x1064000a
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x87839d78
  .word 0x2463fff6
  .word 0xa7839d78
  .word 0x1000000c
  .word 0x00000000
  .word 0x87839d7c
  .word 0x28610002
  .word 0x14200008
  .word 0x00000000
  .word 0x2463fff6
  .word 0xa7839d7c
  .word 0x00031c3c
  .word 0x00031c3f
  .word 0x1c600002
  .word 0x00000000
  .word 0xa7849d7c
  .word 0x30430001
  .word 0x10600011
  .word 0x00000000
  .word 0x8e04012c
  .word 0x24030001
  .word 0x1083000a
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x87839d78
  .word 0x2463ff9c
  .word 0xa7839d78
  .word 0x10000004
  .word 0x00000000
  .word 0x87839d7c
  .word 0x2463ff9c
  .word 0xa7839d7c
  .word 0x30430008
  .word 0x10600011
  .word 0x00000000
  .word 0x8e04012c
  .word 0x24030001
  .word 0x1083000a
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x87839d78
  .word 0x2463000a
  .word 0xa7839d78
  .word 0x10000004
  .word 0x00000000
  .word 0x87839d7c
  .word 0x2463000a
  .word 0xa7839d7c
  .word 0x30420002
  .word 0x10400011
  .word 0x00000000
  .word 0x8e03012c
  .word 0x24020001
  .word 0x1062000a
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x87829d78
  .word 0x24420064
  .word 0xa7829d78
  .word 0x10000004
  .word 0x00000000
  .word 0x87829d7c
  .word 0x24420064
  .word 0xa7829d7c
  .word 0x87829d78
  .word 0x284203e8
  .word 0x14400003
  .word 0x00000000
  .word 0x240203e7
  .word 0xa7829d78
  .word 0x87829d78
  .word 0x04410002
  .word 0x00000000
  .word 0xa7809d78
  .word 0x87829d7c
  .word 0x1c400003
  .word 0x00000000
  .word 0x24020001
  .word 0xa7829d7c
  .word 0x87829d7c
  .word 0x284203e8
  .word 0x14400003
  .word 0x00000000
  .word 0x240203e7
  .word 0xa7829d7c
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0020
  .word 0x7bb00010
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_00375350


u32 FUN_00375350(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069ec38);

  return 2;

}


// FUN_003753C0


void FUN_003753c0(int param_1,int param_2,u32 param_3,u8 *param_4)



{

  f32 fVar1;

  u32 uVar1;



  switch (param_3) {

  case 0:

    fVar1 = FUN_0038a220(*(u32 *)((u8 *)param_4 + 0xe0));

    uVar1 = FUN_00530da0_evt(*(f32 *)((u8 *)param_4 + 0x184));

    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 4, (const char *)DAT_0069ec48, uVar1);

    break;

  case 1:
    break;

  case 2:

    fVar1 = FUN_0038a220(*(u32 *)((u8 *)param_4 + 0xe0));

    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 0, (const char *)DAT_0069ec60);

    break;

  case 3:

    fVar1 = FUN_0038a220(*(u32 *)((u8 *)param_4 + 0xe0));

    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 0, (const char *)DAT_0069ec80);

    break;

  case 4:

    fVar1 = FUN_0038a220(*(u32 *)((u8 *)param_4 + 0xe0));

    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 0, (const char *)DAT_0069ea78);

    break;

  case 5:

    fVar1 = FUN_0038a220(*(u32 *)((u8 *)param_4 + 0xe0));

    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 0, (const char *)DAT_0069ea88);

    break;

  }

}


// b210 floor: the remaining nd19 is callback argument setup ordering at +0x1c..+0x34;
// the clamp/input body and its 332-byte object otherwise match retail instruction-for-instruction.
// FUN_00375590


u32 FUN_00375590(int param_1,int param_2,int param_3)



{

  u32 uVar1;

  EvtMenuClampWork *work;

  float fVar3;

  

  FUN_0036f900_evt(param_1,param_2,0x16,9,0,1,param_3,(code *)FUN_00375350,
                   (code *)FUN_003753c0);

  work = (EvtMenuClampWork *)param_3;

  if (work->state != 8) {

    uVar1 = 0;

  }

  else {

    if ((*(u16 *)DAT_007e094e_abs & 0x40) != 0) {

      uVar1 = 1;

    }

    else {

      if ((*(u16 *)DAT_007e094e_abs & 0x20) != 0) {

        uVar1 = 0xffffffff;

      }

      else {

        fVar3 = 0.0f;
        if ((*(u16 *)DAT_007e0952_abs & 0x8000) != 0) {
          fVar3 = DAT_007cb0cc;
        }
        else if ((*(u16 *)DAT_007e0952_abs & 0x2000) != 0) {
          fVar3 = DAT_007cb088;
        }

        if ((*(u16 *)DAT_007e0952_abs & 0x1000) != 0) {

          fVar3 = -1.0;

        }

        else {

          if ((*(u16 *)DAT_007e0952_abs & 0x4000) != 0) {

            fVar3 = 1.0;

          }

        }
        work->value = work->value + fVar3;

        if (work->value < work->minimum) {

          work->value = work->minimum;

        }

        if (!(work->value < work->maximum)) {

          work->value = work->maximum;

        }

        uVar1 = 0;

      }

    }

  }

  return uVar1;

}


// FUN_003756E0


u32 FUN_003756e0(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069ec38);

  return 2;

}


// FUN_00375750


void FUN_00375750(int param_1,int param_2,u32 param_3,u8 *param_4)
{
  f32 fVar1;

  switch (param_3) {
  case 0:
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 4, (const char *)&gp0xffffa108, *(u32 *)(param_4 + 0x16c));
    break;
  case 1:
    break;
  case 2:
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 0, (const char *)DAT_0069ea58_abs);
    break;
  case 3:
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 0, (const char *)DAT_0069eca0_abs);
    break;
  case 4:
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 0, (const char *)DAT_0069ea78_abs);
    break;
  case 5:
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 0, (const char *)DAT_0069ea88_abs);
    break;
  }
}


// FUN_00375900


u32 FUN_00375900(int param_1,int param_2,int param_3)



{

  typedef struct {
    u8 pad0[0xd4];
    int state;
    u8 padD8[0x94];
    int value;
    int lowerBound;
    int upperBound;
  } EvtMenuRangeState;
  int iVar2;
  u32 uVar1;
  EvtMenuRangeState *menu;
  int *value;

  

  FUN_0036f900_evt(param_1,param_2,0x16,9,0,1,param_3,(code *)FUN_003756e0,
                   (code *)FUN_00375750);

  menu = (EvtMenuRangeState *)param_3;

  if (menu->state != 7) {

    uVar1 = 0;

  }

  else {

    if ((*(u16 *)DAT_007e094e_abs & 0x40) != 0) {

      uVar1 = 1;

    }

    else {

      if ((*(u16 *)DAT_007e094e_abs & 0x20) != 0) {

        uVar1 = 0xffffffff;

      }

      else {

        iVar2 = 0;

        if ((*(u16 *)DAT_007e0952_abs & 0x8000) != 0) {

          iVar2 = -1;

        }

        else {

          if ((*(u16 *)DAT_007e0952_abs & 0x2000) != 0) {

            iVar2 = 1;

          }

        }

        if ((*(u16 *)DAT_007e0952_abs & 0x1000) != 0) {

          iVar2 = -10;

        }

        else {

          if ((*(u16 *)DAT_007e0952_abs & 0x4000) != 0) {

            iVar2 = 10;

          }

        }

        value = &menu->value;
        *value += iVar2;
        iVar2 = *value;

        if (iVar2 < menu->lowerBound) {

          menu->value = menu->lowerBound;

        }

        if (menu->value >= menu->upperBound) {
          menu->value = menu->upperBound;

        }

        uVar1 = 0;

      }

    }

  }

  return uVar1;

}


// FUN_00375A40


u32 FUN_00375a40(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069ecb8);

  return 2;

}


// FUN_00375AB0


void FUN_00375ab0(int param_1,int param_2,u32 param_3,u8 *param_4)
{
  f32 fVar1;

  switch (param_3) {
  case 0:
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 0, (const char *)(void *)&gp0xffffa108, *(u32 *)(param_4 + 0x16c));
    break;
  case 1:
    break;
  case 2:
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 0, (const char *)(void *)DAT_0069ecc8);
    break;
  case 3:
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 0, (const char *)(void *)DAT_0069ece0);
    break;
  case 4:
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 0, (const char *)(void *)DAT_0069ed00);
    break;
  case 5:
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 0, (const char *)(void *)DAT_0069ea78);
    break;
  case 6:
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 0, (const char *)(void *)DAT_0069ea88);
    break;
  case 7:
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 0, (const char *)(void *)DAT_0069ed20);
    break;
  case 8:
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 0, (const char *)(void *)DAT_0069ed40);
    break;
  case 9:
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((int)(param_1 * 0xc), (int)(param_2 * 0xc), fVar1, 0, (const char *)(void *)DAT_0069ed60);
    break;
  }
}


// FUN_00375D70
/* W417 direct state-update expression probe was neutral at nd113/object444; reverted. */


#ifndef PC_BUILD
asm u32 FUN_00375d70(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb00010
  .word 0x00c0802d
  .word 0x3c020037
  .word 0x24425ab0
  .word 0xffa20000
  .word 0x24060016
  .word 0x2407000b
  .word 0x0000402d
  .word 0x24090001
  .word 0x0200502d
  .word 0x3c0b0037
  .word 0x256b5a40
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e0300d4
  .word 0x24020006
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000052
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9444094e
  .word 0x30820040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x1000004a
  .word 0x00000000
  .word 0x30820020
  .word 0x10400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000044
  .word 0x00000000
  .word 0x0000282d
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x2405ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x30622000
  .word 0x10400002
  .word 0x00000000
  .word 0x24050001
  .word 0x30621000
  .word 0x10400004
  .word 0x00000000
  .word 0x2405fff6
  .word 0x10000005
  .word 0x00000000
  .word 0x30624000
  .word 0x10400002
  .word 0x00000000
  .word 0x2405000a
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x2405ff9c
  .word 0x10000005
  .word 0x00000000
  .word 0x30620008
  .word 0x10400002
  .word 0x00000000
  .word 0x24050064
  .word 0x30820080
  .word 0x10400004
  .word 0x00000000
  .word 0x8e030018
  .word 0x8e02016c
  .word 0x00622823
  .word 0x8e02016c
  .word 0x00451821
  .word 0xae03016c
  .word 0x8e020170
  .word 0x0062082a
  .word 0x10200002
  .word 0x00000000
  .word 0xae02016c
  .word 0x8e030174
  .word 0x8e02016c
  .word 0x0043102a
  .word 0x14400002
  .word 0x00000000
  .word 0xae03016c
  .word 0x3c02007e
  .word 0x9442094c
  .word 0x30420800
  .word 0x10400009
  .word 0x00000000
  .word 0x8e03016c
  .word 0x8e020018
  .word 0x10430005
  .word 0x00000000
  .word 0xae030018
  .word 0x0200202d
  .word 0x0c0d8890
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb00010
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_00375F30


u32 FUN_00375f30(int param_1,int param_2,int param_3)



{

  char cVar1;

  int iVar2;

  int iVar5;

  int iVar6;

  short *psVar3;

  int iVar4;

  int iVar7;

  f32 uVar6;

  

  iVar7 = **(int **)(param_3 + 0x164);
  iVar5 = iVar7;
  iVar5 = 0;
  psVar3 = (short *)(DAT_0069e1a0 + iVar7 * 0xc);
  iVar6 = param_2 * 0xc;

  while (iVar5 < *psVar3) {

    iVar4 = iVar5;

    cVar1 = *(char *)((int)psVar3 + iVar4 + 2);

    if (cVar1 == '\x15') {

      *(u8 **)(param_3 + 0x27c) = (u8 *)&DAT_007cce78;

      *(u32 *)(param_3 + 0x280) = 0;

      uVar6 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

      evtMenuDrawText(param_1 * 0xc, iVar6, uVar6, 0xe, (const char *)&gp0xffffa068, *(u32 *)(param_3 + 0x27c));

      iVar2 = *(int *)(param_3 + 0x280);
      param_1 = param_1 + iVar2;

    }

    else {

      uVar6 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

      evtMenuDrawText(param_1 * 0xc, iVar6, uVar6, 0xe, (const char *)&gp0xffffa068, *(u32 *)(PTR_s_START_0069e100_abs + cVar1));

      iVar2 = (int)DAT_0069e180_char[*(char *)((int)psVar3 + iVar4 + 2)];
      param_1 = param_1 + iVar2;

    }


    iVar5 = iVar4 + 1;

  }

  return 1;

}


/* opt_lifetimes on: default nd10238/14020B -> nd10038/14020B; retained. */
#pragma push
#pragma opt_lifetimes on
/* W419 global-address probes reverted: first four PTR globals nd10038/object14020/window14096/rate71.60% -> nd10105/object14036/window14096/rate71.99%; extending to seven -> nd10083/object14048/window14096/rate71.78%. */
// FUN_003760A0


#ifndef PC_BUILD
asm void FUN_003760a0(int param_1,int param_2_in,u32 param_3,u16 *param_4,int param_5)
{
  .set noreorder
  .word 0x27bdfe20
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
  .word 0xe7b40020
  .word 0x0080a02d
  .word 0xafa6010c
  .word 0x00e0982d
  .word 0x0100902d
  .word 0xc781a220
  .word 0xc780a224
  .word 0xe7a101d8
  .word 0xe7a001dc
  .word 0x3c03006a
  .word 0xc463ee10
  .word 0x3c03006a
  .word 0xc462ee14
  .word 0x3c03006a
  .word 0xc461ee18
  .word 0x3c03006a
  .word 0xc460ee1c
  .word 0xe7a30160
  .word 0xe7a20164
  .word 0xe7a10168
  .word 0xe7a0016c
  .word 0x3c03006a
  .word 0xc462ee20
  .word 0x3c03006a
  .word 0xc461ee24
  .word 0x3c03006a
  .word 0xc460ee28
  .word 0xe7a201c8
  .word 0xe7a101cc
  .word 0xe7a001d0
  .word 0x3c03006a
  .word 0xc463ee30
  .word 0x3c03006a
  .word 0xc462ee34
  .word 0x3c03006a
  .word 0xc461ee38
  .word 0x3c03006a
  .word 0xc460ee3c
  .word 0xe7a30150
  .word 0xe7a20154
  .word 0xe7a10158
  .word 0xe7a0015c
  .word 0xc781a260
  .word 0xc780a264
  .word 0xe7a101c0
  .word 0xe7a001c4
  .word 0xc781a270
  .word 0xc780a274
  .word 0xe7a101b8
  .word 0xe7a001bc
  .word 0xc781a288
  .word 0xc780a28c
  .word 0xe7a101b0
  .word 0xe7a001b4
  .word 0x3c03006a
  .word 0xc462ee40
  .word 0x3c03006a
  .word 0xc461ee44
  .word 0x3c03006a
  .word 0xc460ee48
  .word 0xe7a201a0
  .word 0xe7a101a4
  .word 0xe7a001a8
  .word 0x3c03006a
  .word 0xc462ee50
  .word 0x3c03006a
  .word 0xc461ee54
  .word 0x3c03006a
  .word 0xc460ee58
  .word 0xe7a20190
  .word 0xe7a10194
  .word 0xe7a00198
  .word 0xc781a2a8
  .word 0xc780a2ac
  .word 0xe7a10188
  .word 0xe7a0018c
  .word 0xc781a2b8
  .word 0xc780a2bc
  .word 0xe7a10180
  .word 0xe7a00184
  .word 0xc781a2c8
  .word 0xc780a2cc
  .word 0xe7a10178
  .word 0xe7a0017c
  .word 0x3c08006a
  .word 0x2508eeb0
  .word 0x27a70130
  .word 0x24060003
  .word 0x8d040000
  .word 0x8d030004
  .word 0x25080008
  .word 0x24c6ffff
  .word 0xace40000
  .word 0xace30004
  .word 0x24e70008
  .word 0x1cc0fff8
  .word 0x00000000
  .word 0x0000b02d
  .word 0x8e430164
  .word 0x8c750000
  .word 0x0000b82d
  .word 0x00151840
  .word 0x00751821
  .word 0x00032080
  .word 0x3c03006a
  .word 0x2463e1a0
  .word 0x00641821
  .word 0x7fa300e0
  .word 0x00051840
  .word 0x00651821
  .word 0x00038080
  .word 0x10000d34
  .word 0x00000000
  .word 0x8e430158
  .word 0x14770004
  .word 0x00000000
  .word 0x8fb1010c
  .word 0x10000002
  .word 0x00000000
  .word 0x0000882d
  .word 0x7ba300e0
  .word 0x00772021
  .word 0x24830002
  .word 0x7fa300d0
  .word 0x80830002
  .word 0x2c61001e
  .word 0x10200d18
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484a930
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x8e420164
  .word 0x84430020
  .word 0x96620000
  .word 0x00434021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a320
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000d04
  .word 0x00000000
  .word 0x24020021
  .word 0x12a2001e
  .word 0x00000000
  .word 0x24020015
  .word 0x12a20018
  .word 0x00000000
  .word 0x24020014
  .word 0x12a20015
  .word 0x00000000
  .word 0x24020012
  .word 0x12a2000f
  .word 0x00000000
  .word 0x2402001a
  .word 0x12a20009
  .word 0x00000000
  .word 0x24020003
  .word 0x12a20003
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x86760012
  .word 0x1000000b
  .word 0x00000000
  .word 0x86760012
  .word 0x10000008
  .word 0x00000000
  .word 0x86760010
  .word 0x10000005
  .word 0x00000000
  .word 0x86760012
  .word 0x10000002
  .word 0x00000000
  .word 0x86760010
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a320
  .word 0x02c0402d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000cd4
  .word 0x00000000
  .word 0x2402001a
  .word 0x12a2000c
  .word 0x00000000
  .word 0x24020015
  .word 0x12a20009
  .word 0x00000000
  .word 0x24020014
  .word 0x12a20006
  .word 0x00000000
  .word 0x24020003
  .word 0x12a20003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x96760002
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a320
  .word 0x02c0402d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000cb6
  .word 0x00000000
  .word 0x2402000a
  .word 0x12a20003
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x8e420164
  .word 0x80430022
  .word 0x24020003
  .word 0x1062000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a328
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000c9e
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x96680002
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a320
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000c8f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x96680002
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a320
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000c80
  .word 0x00000000
  .word 0x24030024
  .word 0x16a30012
  .word 0x00000000
  .word 0x82630010
  .word 0x1060000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a330
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000c6c
  .word 0x00000000
  .word 0x24030024
  .word 0x16a30026
  .word 0x00000000
  .word 0x82630010
  .word 0x14600023
  .word 0x00000000
  .word 0x82640020
  .word 0x1480000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a334
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000c55
  .word 0x00000000
  .word 0x24030001
  .word 0x14830c52
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a338
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000c44
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a33c
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000c36
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x46000506
  .word 0xc66c0010
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040f02d
  .word 0xc66c0014
  .word 0x0c14c368
  .word 0x00000000
  .word 0x00141840
  .word 0x00741821
  .word 0x00032080
  .word 0x0200282d
  .word 0x4600a306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7eef0
  .word 0x03c0402d
  .word 0x0040482d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000c1d
  .word 0x00000000
  .word 0x24030007
  .word 0x12a30003
  .word 0x00000000
  .word 0x10000c18
  .word 0x00000000
  .word 0x86760010
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a320
  .word 0x02c0402d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000c08
  .word 0x00000000
  .word 0x2402001f
  .word 0x12a2000f
  .word 0x00000000
  .word 0x2402000c
  .word 0x12a20009
  .word 0x00000000
  .word 0x24020008
  .word 0x12a20003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x86760010
  .word 0x10000005
  .word 0x00000000
  .word 0x86760012
  .word 0x10000002
  .word 0x00000000
  .word 0x86760012
  .word 0x2402001f
  .word 0x16a20012
  .word 0x00000000
  .word 0x86620010
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a340
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000be2
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a320
  .word 0x02c0402d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000bd3
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86680012
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a320
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000bc4
  .word 0x00000000
  .word 0x24020019
  .word 0x12a20030
  .word 0x00000000
  .word 0x24020018
  .word 0x12a2002a
  .word 0x00000000
  .word 0x2402001b
  .word 0x12a20024
  .word 0x00000000
  .word 0x24020017
  .word 0x12a20021
  .word 0x00000000
  .word 0x2402000f
  .word 0x12a2001e
  .word 0x00000000
  .word 0x24020011
  .word 0x12a2001b
  .word 0x00000000
  .word 0x24020010
  .word 0x12a20018
  .word 0x00000000
  .word 0x2402000e
  .word 0x12a20015
  .word 0x00000000
  .word 0x2402000d
  .word 0x12a20012
  .word 0x00000000
  .word 0x2402000b
  .word 0x12a2000f
  .word 0x00000000
  .word 0x2402000a
  .word 0x12a20009
  .word 0x00000000
  .word 0x24020008
  .word 0x12a20003
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x86760014
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e760004
  .word 0x10000008
  .word 0x00000000
  .word 0x86760010
  .word 0x10000005
  .word 0x00000000
  .word 0x82760010
  .word 0x10000002
  .word 0x00000000
  .word 0x86760014
  .word 0x12c0000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a344
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000b81
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a348
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000b73
  .word 0x00000000
  .word 0x24030004
  .word 0x12a302bc
  .word 0x00000000
  .word 0x24030022
  .word 0x12a302a7
  .word 0x00000000
  .word 0x2403001d
  .word 0x12a30284
  .word 0x00000000
  .word 0x24030015
  .word 0x12a30262
  .word 0x00000000
  .word 0x24030014
  .word 0x12a3025f
  .word 0x00000000
  .word 0x2403001a
  .word 0x12a3025c
  .word 0x00000000
  .word 0x24050003
  .word 0x12a50259
  .word 0x00000000
  .word 0x24030018
  .word 0x12a30237
  .word 0x00000000
  .word 0x24030020
  .word 0x12a30215
  .word 0x00000000
  .word 0x2403001f
  .word 0x12a30200
  .word 0x00000000
  .word 0x2403001e
  .word 0x12a301de
  .word 0x00000000
  .word 0x24030005
  .word 0x12a30192
  .word 0x00000000
  .word 0x2403000a
  .word 0x12a30170
  .word 0x00000000
  .word 0x2403001c
  .word 0x12a3015b
  .word 0x00000000
  .word 0x2403002f
  .word 0x12a30144
  .word 0x00000000
  .word 0x2403002b
  .word 0x12a3012f
  .word 0x00000000
  .word 0x24030029
  .word 0x12a30118
  .word 0x00000000
  .word 0x24030027
  .word 0x12a30100
  .word 0x00000000
  .word 0x24030025
  .word 0x12a300eb
  .word 0x00000000
  .word 0x24030024
  .word 0x12a300d6
  .word 0x00000000
  .word 0x24030023
  .word 0x12a300c1
  .word 0x00000000
  .word 0x24030031
  .word 0x12a300aa
  .word 0x00000000
  .word 0x24030021
  .word 0x12a30095
  .word 0x00000000
  .word 0x24030030
  .word 0x12a3007e
  .word 0x00000000
  .word 0x24050001
  .word 0x12a50067
  .word 0x00000000
  .word 0x24030013
  .word 0x12a30050
  .word 0x00000000
  .word 0x24030006
  .word 0x12a3003a
  .word 0x00000000
  .word 0x2403000c
  .word 0x12a30003
  .word 0x00000000
  .word 0x10000b1d
  .word 0x00000000
  .word 0x86640010
  .word 0x24030002
  .word 0x10830023
  .word 0x00000000
  .word 0x10850013
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000b13
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a350
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000b05
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a358
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000af7
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a35c
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000ae9
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86620010
  .word 0x00021880
  .word 0x2782a198
  .word 0x00431021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480000
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000ad6
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86620010
  .word 0x00021880
  .word 0x3c02006a
  .word 0x2442ed90
  .word 0x00431021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480000
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000ac2
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82620010
  .word 0x00021880
  .word 0x3c02006a
  .word 0x2442ede0
  .word 0x00431021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480000
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000aae
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82620010
  .word 0x00021880
  .word 0x3c02006a
  .word 0x2442ede0
  .word 0x00431021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480000
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000a9a
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82620012
  .word 0x00021080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c4801d8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000a88
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82620010
  .word 0x00021880
  .word 0x3c02007d
  .word 0x2442caa8
  .word 0x00431021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480000
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000a74
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82620010
  .word 0x00021080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480160
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000a62
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82620010
  .word 0x00021080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c4801c8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000a50
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82620010
  .word 0x00021080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480150
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000a3e
  .word 0x00000000
  .word 0x827e0010
  .word 0x2bc10002
  .word 0x10200a3a
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x001e1080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480178
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000a29
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82620010
  .word 0x00021880
  .word 0x3c02006a
  .word 0x2442d880
  .word 0x00431021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480000
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000a15
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82620010
  .word 0x00021080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480130
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000a03
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82620010
  .word 0x00021880
  .word 0x3c02007d
  .word 0x2442ca88
  .word 0x00431021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480000
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100009ef
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82620010
  .word 0x00021080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c4801c0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100009dd
  .word 0x00000000
  .word 0x8662001c
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a360
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100009cc
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a368
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100009be
  .word 0x00000000
  .word 0x82640012
  .word 0x10850038
  .word 0x00000000
  .word 0x24030002
  .word 0x10830026
  .word 0x00000000
  .word 0x24030001
  .word 0x10830014
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x100009b1
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ef00
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100009a2
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ef10
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000993
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ef20
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000984
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ef30
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000975
  .word 0x00000000
  .word 0x86620012
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a370
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000964
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a378
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000956
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86620010
  .word 0x00021080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c4801b0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000944
  .word 0x00000000
  .word 0x86620010
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a380
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000933
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a388
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000925
  .word 0x00000000
  .word 0x82620024
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a390
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000914
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a398
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000906
  .word 0x00000000
  .word 0x82620018
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3a0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100008f5
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3a8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100008e7
  .word 0x00000000
  .word 0x82620014
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a350
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100008d6
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ef40
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100008c7
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82620010
  .word 0x00021080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480188
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100008b5
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82620014
  .word 0x00021080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480180
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100008a3
  .word 0x00000000
  .word 0x24020019
  .word 0x12a2000f
  .word 0x00000000
  .word 0x24020016
  .word 0x12a20009
  .word 0x00000000
  .word 0x24020009
  .word 0x12a20003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x86760012
  .word 0x10000005
  .word 0x00000000
  .word 0x86760010
  .word 0x10000002
  .word 0x00000000
  .word 0x86760010
  .word 0x12c0000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3ac
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000881
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a348
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000873
  .word 0x00000000
  .word 0x2402001a
  .word 0x12a2000f
  .word 0x00000000
  .word 0x24020003
  .word 0x12a2000c
  .word 0x00000000
  .word 0x24020015
  .word 0x12a20006
  .word 0x00000000
  .word 0x24020014
  .word 0x12a20003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x82760011
  .word 0x10000002
  .word 0x00000000
  .word 0x82760014
  .word 0x12c0000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3ac
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000851
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a348
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000843
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x46000506
  .word 0xc78180d0
  .word 0xc6600010
  .word 0x46000b02
  .word 0x0c14c368
  .word 0x00000000
  .word 0x00141840
  .word 0x00741821
  .word 0x00032080
  .word 0x0200282d
  .word 0x4600a306
  .word 0x0220302d
  .word 0x2787a3b0
  .word 0x0040402d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000082e
  .word 0x00000000
  .word 0x24020026
  .word 0x12a20048
  .word 0x00000000
  .word 0x24020002
  .word 0x12a20042
  .word 0x00000000
  .word 0x24020006
  .word 0x12a2003c
  .word 0x00000000
  .word 0x2402001e
  .word 0x12a20036
  .word 0x00000000
  .word 0x2402001d
  .word 0x12a20030
  .word 0x00000000
  .word 0x2402001c
  .word 0x12a2003a
  .word 0x00000000
  .word 0x24020004
  .word 0x12a20027
  .word 0x00000000
  .word 0x24020012
  .word 0x12a20021
  .word 0x00000000
  .word 0x2402000c
  .word 0x12a2001b
  .word 0x00000000
  .word 0x2402001a
  .word 0x12a20015
  .word 0x00000000
  .word 0x24020003
  .word 0x12a2000f
  .word 0x00000000
  .word 0x24020013
  .word 0x12a20009
  .word 0x00000000
  .word 0x24020005
  .word 0x12a20003
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x86760010
  .word 0x10000020
  .word 0x00000000
  .word 0x86760012
  .word 0x1000001d
  .word 0x00000000
  .word 0x82760015
  .word 0x1000001a
  .word 0x00000000
  .word 0x82760015
  .word 0x10000017
  .word 0x00000000
  .word 0x8e760014
  .word 0x10000014
  .word 0x00000000
  .word 0x82760014
  .word 0x10000011
  .word 0x00000000
  .word 0x86760010
  .word 0x1000000e
  .word 0x00000000
  .word 0x86760010
  .word 0x1000000b
  .word 0x00000000
  .word 0x86760010
  .word 0x10000008
  .word 0x00000000
  .word 0x86760012
  .word 0x10000005
  .word 0x00000000
  .word 0x86760016
  .word 0x10000002
  .word 0x00000000
  .word 0x86760010
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3b8
  .word 0x02c0402d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100007d4
  .word 0x00000000
  .word 0x0000b02d
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3b8
  .word 0x0000402d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100007c4
  .word 0x00000000
  .word 0x24020012
  .word 0x12a20015
  .word 0x00000000
  .word 0x24020009
  .word 0x12a2000f
  .word 0x00000000
  .word 0x2402001a
  .word 0x12a20009
  .word 0x00000000
  .word 0x24020003
  .word 0x12a20003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x86760016
  .word 0x10000008
  .word 0x00000000
  .word 0x86760016
  .word 0x10000005
  .word 0x00000000
  .word 0x86760010
  .word 0x10000002
  .word 0x00000000
  .word 0x86760012
  .word 0x06c10010
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ef50
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000079b
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x00161140
  .word 0x02421021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3c0
  .word 0x24480054
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000078a
  .word 0x00000000
  .word 0x827e0015
  .word 0x86760010
  .word 0x2fc10007
  .word 0x10200033
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484a910
  .word 0x001e1880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x32c80fff
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3c8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x27c8ffff
  .word 0x32c90fff
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3d0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3d8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x2fc10006
  .word 0x10200750
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484a8f0
  .word 0x001e1880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x00161303
  .word 0x305e000f
  .word 0x17c00010
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830006
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a2a0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000736
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830006
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x27c8ffff
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3dc
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000726
  .word 0x00000000
  .word 0x8264000c
  .word 0x1480000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3e0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000715
  .word 0x00000000
  .word 0x24030002
  .word 0x10830017
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x1000070d
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86680008
  .word 0x8669000a
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ef60
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100006fc
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x0002f080
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x86680008
  .word 0x8669000a
  .word 0x03c0202d
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ef70
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x9264000e
  .word 0x1480000d
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x03c0202d
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3e4
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100006dd
  .word 0x00000000
  .word 0x24030001
  .word 0x1483000d
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x03c0202d
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3e8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100006ce
  .word 0x00000000
  .word 0x24030002
  .word 0x148306cb
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x03c0202d
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3ec
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100006bf
  .word 0x00000000
  .word 0x82630010
  .word 0x2c61000b
  .word 0x10200217
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484a8c0
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x82620014
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3ac
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100006a3
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a348
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000695
  .word 0x00000000
  .word 0x82620014
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3ac
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000684
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a348
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000676
  .word 0x00000000
  .word 0x82640022
  .word 0x14800019
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x86620020
  .word 0xffa20000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82680014
  .word 0x82690015
  .word 0x82620016
  .word 0x00021080
  .word 0x005d1021
  .word 0x826b0017
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ef80
  .word 0x8c4a01b8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000065b
  .word 0x00000000
  .word 0x24030001
  .word 0x14830658
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82680015
  .word 0x82620016
  .word 0x00021080
  .word 0x005d1021
  .word 0x826a0017
  .word 0x866b0020
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ef98
  .word 0x8c4901b8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000642
  .word 0x00000000
  .word 0x82640014
  .word 0x24030002
  .word 0x10830024
  .word 0x00000000
  .word 0x24030001
  .word 0x10830013
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3f0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3f4
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3f8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x82640014
  .word 0x24030002
  .word 0x1083060b
  .word 0x00000000
  .word 0x82640015
  .word 0x24030001
  .word 0x1083003c
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000603
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830002
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x86620016
  .word 0x24480001
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3fc
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x82640024
  .word 0x24030001
  .word 0x14830010
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830006
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x86620016
  .word 0x24480001
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a400
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x82640025
  .word 0x24030001
  .word 0x148305dd
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830008
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x86620016
  .word 0x24480001
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a294
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100005cc
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830002
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x86680016
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a408
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100005bc
  .word 0x00000000
  .word 0x86760016
  .word 0x16c00010
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7ef50
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100005aa
  .word 0x00000000
  .word 0x827e0014
  .word 0x2bc10004
  .word 0x10200010
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x001e1080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c4801a0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x827e0015
  .word 0x2bc10003
  .word 0x10200011
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830002
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x001e1080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480190
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830004
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a410
  .word 0x02c0402d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000573
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x46000506
  .word 0xc66c0014
  .word 0x0c14c368
  .word 0x00000000
  .word 0x00141840
  .word 0x00741821
  .word 0x00032080
  .word 0x0200282d
  .word 0x4600a306
  .word 0x0220302d
  .word 0x2787a418
  .word 0x0040402d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830007
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x86680024
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a420
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000552
  .word 0x00000000
  .word 0x82640015
  .word 0x24030001
  .word 0x10830014
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000054a
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82680014
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3c8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000053b
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82680014
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a428
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000052c
  .word 0x00000000
  .word 0x82640014
  .word 0x24030001
  .word 0x10830026
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000524
  .word 0x00000000
  .word 0x82620015
  .word 0x14400010
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7efa8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000512
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7efb8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000503
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7efc8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100004f4
  .word 0x00000000
  .word 0x82620014
  .word 0x14400010
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82680015
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a430
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100004e2
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82680015
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a438
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100004d3
  .word 0x00000000
  .word 0x82620019
  .word 0x10400004
  .word 0x00000000
  .word 0x279ea440
  .word 0x10000002
  .word 0x00000000
  .word 0x279ea2a4
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86680014
  .word 0x92690018
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7efd8
  .word 0x03c0502d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100004ba
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x46000506
  .word 0xc66c0018
  .word 0x0c14c368
  .word 0x00000000
  .word 0x00141840
  .word 0x00741821
  .word 0x00032080
  .word 0x86680014
  .word 0x0200282d
  .word 0x4600a306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7efe8
  .word 0x0040482d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100004a5
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a444
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000497
  .word 0x00000000
  .word 0x0000b02d
  .word 0x24020011
  .word 0x12a2000c
  .word 0x00000000
  .word 0x24020017
  .word 0x12a20009
  .word 0x00000000
  .word 0x2402000f
  .word 0x12a20006
  .word 0x00000000
  .word 0x2402000e
  .word 0x12a20003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x86760018
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484e408
  .word 0x24051363
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x16c0000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a448
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000470
  .word 0x00000000
  .word 0x24020001
  .word 0x16c2000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a44c
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000045f
  .word 0x00000000
  .word 0x26d6fffe
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x00161140
  .word 0x02421021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x24480054
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000044d
  .word 0x00000000
  .word 0x82640010
  .word 0x14800013
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86680018
  .word 0x8669001a
  .word 0x866a001c
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7eff8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000438
  .word 0x00000000
  .word 0x24030001
  .word 0x1483000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a330
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000427
  .word 0x00000000
  .word 0x24030002
  .word 0x14830020
  .word 0x00000000
  .word 0x82620014
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a348
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000413
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3ac
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000405
  .word 0x00000000
  .word 0x24030003
  .word 0x14830402
  .word 0x00000000
  .word 0x82620014
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a348
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100003f1
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3ac
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100003e3
  .word 0x00000000
  .word 0x24030025
  .word 0x12a30003
  .word 0x00000000
  .word 0x100003de
  .word 0x00000000
  .word 0x82630010
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a450
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100003c8
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a330
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100003ba
  .word 0x00000000
  .word 0x82640012
  .word 0x1480000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a458
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100003a9
  .word 0x00000000
  .word 0x24030001
  .word 0x148303a6
  .word 0x00000000
  .word 0x867e0014
  .word 0x3c02000f
  .word 0x3442fc00
  .word 0x03c21024
  .word 0x00021283
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3e0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000391
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x33c803ff
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a460
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000382
  .word 0x00000000
  .word 0x82640010
  .word 0x24030003
  .word 0x1083003b
  .word 0x00000000
  .word 0x24030002
  .word 0x10830029
  .word 0x00000000
  .word 0x24030001
  .word 0x10830016
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000374
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82680011
  .word 0x82690012
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f008
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000363
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82680011
  .word 0x86690012
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a468
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000353
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82680011
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3dc
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000344
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82680011
  .word 0x86690014
  .word 0x926a0012
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f018
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000332
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a470
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000324
  .word 0x00000000
  .word 0x2403002c
  .word 0x12a302ce
  .word 0x00000000
  .word 0x2403002a
  .word 0x12a302b4
  .word 0x00000000
  .word 0x24030029
  .word 0x12a30172
  .word 0x00000000
  .word 0x2403002e
  .word 0x12a3015e
  .word 0x00000000
  .word 0x2403002f
  .word 0x12a30106
  .word 0x00000000
  .word 0x24030031
  .word 0x12a300e4
  .word 0x00000000
  .word 0x24030032
  .word 0x12a300ac
  .word 0x00000000
  .word 0x24030027
  .word 0x12a30099
  .word 0x00000000
  .word 0x24030005
  .word 0x12a30088
  .word 0x00000000
  .word 0x2403001c
  .word 0x12a3005b
  .word 0x00000000
  .word 0x24030021
  .word 0x12a30037
  .word 0x00000000
  .word 0x2403002d
  .word 0x12a30021
  .word 0x00000000
  .word 0x24030028
  .word 0x12a30003
  .word 0x00000000
  .word 0x100002fb
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x86620018
  .word 0xffa20000
  .word 0x8662001a
  .word 0xffa20008
  .word 0x8662001c
  .word 0xffa20010
  .word 0x8662001e
  .word 0xffa20018
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82680010
  .word 0x82690011
  .word 0x826a0012
  .word 0x826b0013
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f030
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100002e0
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86680018
  .word 0x8669001a
  .word 0x866a001c
  .word 0x866b001e
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f050
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100002cd
  .word 0x00000000
  .word 0x82620012
  .word 0x14400010
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82680030
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3b8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100002bb
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f060
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100002ac
  .word 0x00000000
  .word 0x82640010
  .word 0x24030001
  .word 0x10830018
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x100002a4
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86680014
  .word 0x86690016
  .word 0x866a0018
  .word 0x866b001a
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f070
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000291
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f088
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000282
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a33c
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000274
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86680014
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f098
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000264
  .word 0x00000000
  .word 0x82630010
  .word 0x24020001
  .word 0x10620013
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a478
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a47c
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830002
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x82680011
  .word 0x82690012
  .word 0x826a0013
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f0a8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000022f
  .word 0x00000000
  .word 0x82620014
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3ac
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000021e
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a348
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000210
  .word 0x00000000
  .word 0x82640010
  .word 0x24030001
  .word 0x10830024
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000208
  .word 0x00000000
  .word 0x82620014
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3ac
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100001f7
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a348
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100001e9
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x82680014
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a480
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x82620015
  .word 0x14400010
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830005
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a268
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100001ca
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830005
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a26c
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100001bb
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86680010
  .word 0x86690012
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f0b8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100001aa
  .word 0x00000000
  .word 0x82630010
  .word 0x2c61000d
  .word 0x102001a6
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484a880
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a33c
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000191
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a330
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000183
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a33c
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000175
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a33c
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000167
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a33c
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000159
  .word 0x00000000
  .word 0x82620014
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a488
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a290
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x3c06006a
  .word 0x24c6eed0
  .word 0x27a50110
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
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830002
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x82620015
  .word 0x00021080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480110
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830006
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x82680018
  .word 0x82690019
  .word 0x826a001a
  .word 0x826b001b
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f0c8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000010a
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86680014
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f0d8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100000fa
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86680014
  .word 0x86690016
  .word 0x866a0018
  .word 0x866b001a
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a33c
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100000e8
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a330
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100000da
  .word 0x00000000
  .word 0x82640014
  .word 0x24030003
  .word 0x1083003f
  .word 0x00000000
  .word 0x24030002
  .word 0x1083002b
  .word 0x00000000
  .word 0x24030001
  .word 0x10830017
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x100000cc
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86620016
  .word 0x304803ff
  .word 0x82690018
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f0e8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100000ba
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86620016
  .word 0x304803ff
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f0f8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100000a9
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86620016
  .word 0x304803ff
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f108
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000098
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86620016
  .word 0x304803ff
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f118
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000087
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a330
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000079
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a330
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000006b
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x86620018
  .word 0xffa20000
  .word 0x8662001a
  .word 0xffa20008
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86680010
  .word 0x86690012
  .word 0x866a0014
  .word 0x866b0016
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f130
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000054
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x86680010
  .word 0x86690012
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f148
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000043
  .word 0x00000000
  .word 0x0000f02d
  .word 0xafa000f0
  .word 0x0000182d
  .word 0x24020031
  .word 0x12a2000f
  .word 0x00000000
  .word 0x2402002f
  .word 0x12a20003
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x96630012
  .word 0x3c02000f
  .word 0x3442fc00
  .word 0x00621024
  .word 0x0002f283
  .word 0x306203ff
  .word 0xafa200f0
  .word 0x10000008
  .word 0x00000000
  .word 0x96630012
  .word 0x3c02000f
  .word 0x3442fc00
  .word 0x00621024
  .word 0x0002f283
  .word 0x306203ff
  .word 0xafa200f0
  .word 0x3062ffff
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a490
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f158
  .word 0x03c0402d
  .word 0x8fa900f0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484e408
  .word 0x240514fe
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x7ba300d0
  .word 0x80640000
  .word 0x3c03006a
  .word 0x2463e180
  .word 0x00641821
  .word 0x80630000
  .word 0x0283a021
  .word 0x26f70001
  .word 0x7ba300e0
  .word 0x84630000
  .word 0x02e3182a
  .word 0x1460f2c9
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
  .word 0xc7b40020
  .word 0x27bd01e0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop


// FUN_003797B0


void FUN_003797b0(int param_1,int param_2,int param_3,int param_4)
{
  int count;
  int iVar1;
  u16 *entry;
  int state;
  s32 style;
  f32 depth;

  count = *(int *)(*(int *)(param_4 + 0x164) + 0x68);
  if (param_3 < count + 1) {
    if (param_3 == count) {
      entry = NULL;
    }
    else {
      entry = *(u16 **)(*(int *)(param_4 + 0x164) + 0x6c);
      for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
        entry = *(u16 **)((u8 *)entry + 0x4c);
      }
    }
    if (param_3 == *(int *)(param_4 + 0x160) + *(int *)(param_4 + 0x15c)) {
      state = *(int *)(param_4 + 0xd4);
      if (state == 5) {
        style = 4;
      }
      else {
        style = 5;
      }
    }
    else {
      style = 0;
    }
    if (entry != NULL) {
      FUN_003760a0(param_1,param_2,style,entry,param_4);
    }
    else {
      if (style == 0) {
        style = 8;
      }
      depth = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
      evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, depth, style, (const char *)DAT_0069f170);
    }
  }
}


/* W416 ORDER probe rejected: inverted flag condition/body left nd506 unchanged, object/window 784/832. */
// FUN_003798F0


#ifndef PC_BUILD
asm u32 FUN_003798f0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00c0902d
  .word 0x24110011
  .word 0x8cc20080
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000bd
  .word 0x00000000
  .word 0x8e500164
  .word 0x8e030000
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x3c02006a
  .word 0x2442e1a0
  .word 0x00431021
  .word 0x84420000
  .word 0x14400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x100000af
  .word 0x00000000
  .word 0x3c020038
  .word 0x244297b0
  .word 0xffa20000
  .word 0x8e020068
  .word 0x24490001
  .word 0x24060028
  .word 0x24070012
  .word 0x8e480160
  .word 0x0240502d
  .word 0x3c0b0037
  .word 0x256b5f30
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e4300d4
  .word 0x24020005
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000009b
  .word 0x00000000
  .word 0x8e020068
  .word 0x24460001
  .word 0x28c10011
  .word 0x10200002
  .word 0x00000000
  .word 0x00c0882d
  .word 0x8e030000
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x3c02006a
  .word 0x2442e1a0
  .word 0x00441021
  .word 0x84420000
  .word 0x3c03006a
  .word 0x2463e420
  .word 0x00641821
  .word 0x84630000
  .word 0x10600024
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9464094e
  .word 0x30831000
  .word 0x10600009
  .word 0x00000000
  .word 0x8e440160
  .word 0x8e43015c
  .word 0x00831821
  .word 0x1460001a
  .word 0x00000000
  .word 0x2402fffc
  .word 0x1000007a
  .word 0x00000000
  .word 0x30834000
  .word 0x10600014
  .word 0x00000000
  .word 0x0000282d
  .word 0x8e03006c
  .word 0x10000003
  .word 0x00000000
  .word 0x24a50001
  .word 0x8c63004c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0x8e440160
  .word 0x8e43015c
  .word 0x00831821
  .word 0x14a30004
  .word 0x00000000
  .word 0x2402fffc
  .word 0x10000064
  .word 0x00000000
  .word 0x26440160
  .word 0x2645015c
  .word 0x0220382d
  .word 0x0000402d
  .word 0x24094000
  .word 0x240a1000
  .word 0x0c0dbda0
  .word 0x00000000
  .word 0x0000202d
  .word 0x26450158
  .word 0x0040302d
  .word 0x0040382d
  .word 0x0000402d
  .word 0x24092000
  .word 0x340a8000
  .word 0x0c0dbda0
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24110001
  .word 0x10000008
  .word 0x00000000
  .word 0x30620020
  .word 0x10400004
  .word 0x00000000
  .word 0x2411ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000882d
  .word 0x3c02007e
  .word 0x9442094c
  .word 0x30420010
  .word 0x1040001a
  .word 0x00000000
  .word 0x30620100
  .word 0x10400008
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484f188
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e26d4
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420800
  .word 0x1040002f
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484f198
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0240202d
  .word 0x0200282d
  .word 0x0c0e2760
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x30620080
  .word 0x10400002
  .word 0x00000000
  .word 0x2411fffe
  .word 0x30620100
  .word 0x1040000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0d860c
  .word 0x00000000
  .word 0x10400019
  .word 0x00000000
  .word 0x8e040000
  .word 0x0040282d
  .word 0x0c0e2850
  .word 0x00000000
  .word 0x2784a498
  .word 0x0c14896a
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x30620800
  .word 0x1040000d
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0d860c
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x8e040000
  .word 0x0040282d
  .word 0x0c0e2860
  .word 0x00000000
  .word 0x2784a4a0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0220102d
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


/* opt_loop_invariants on: default nd380/756B -> nd364/744B; retained. */
#pragma opt_loop_invariants on
/* opt_propagation off: default nd364/744B -> nd346/744B; retained. */
#pragma push
#pragma opt_propagation off
// FUN_00379C30


#ifndef PC_BUILD
asm void FUN_00379c30(int param_1,int param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdf980
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00e0902d
  .word 0x3c08006a
  .word 0x2508f1b0
  .word 0x27a70080
  .word 0x240502fd
  .word 0x81040000
  .word 0x81030001
  .word 0x25080002
  .word 0x24a5ffff
  .word 0xa0e40000
  .word 0xa0e30001
  .word 0x24e70002
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x8e430080
  .word 0x1060009a
  .word 0x00000000
  .word 0x00c3082a
  .word 0x10200097
  .word 0x00000000
  .word 0x8e500084
  .word 0x0000182d
  .word 0x10000003
  .word 0x00000000
  .word 0x8e100094
  .word 0x24630001
  .word 0x0066102a
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x8e430154
  .word 0x8e420150
  .word 0x00621021
  .word 0x14c20024
  .word 0x00000000
  .word 0x8e4200d4
  .word 0x24110004
  .word 0x14510007
  .word 0x00000000
  .word 0xae400158
  .word 0xae40015c
  .word 0xae400160
  .word 0xae500164
  .word 0x10000002
  .word 0x00000000
  .word 0x24110005
  .word 0x86420022
  .word 0x24550002
  .word 0x8e160008
  .word 0x06c00015
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2683000e
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x00151040
  .word 0x00551021
  .word 0x00022880
  .word 0x00161140
  .word 0x02421021
  .word 0x46000306
  .word 0x0000302d
  .word 0x24470054
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000882d
  .word 0x9604000c
  .word 0x3c02000f
  .word 0x3442fc00
  .word 0x00821024
  .word 0x00021a83
  .word 0x24020003
  .word 0x1462001a
  .word 0x00000000
  .word 0x309503ff
  .word 0x2aa20384
  .word 0x14400016
  .word 0x00000000
  .word 0x2aa10387
  .word 0x10200013
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x26a8fc7c
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7f7b0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000042
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00029880
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x8e030000
  .word 0x00031100
  .word 0x00431023
  .word 0x00021040
  .word 0x005d1021
  .word 0x0260282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x24470080
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x9615000c
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x02a31824
  .word 0x00032283
  .word 0x24030001
  .word 0x14830011
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830004
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x32a803ff
  .word 0x0260282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a4a8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x24030003
  .word 0x14830013
  .word 0x00000000
  .word 0x8e040000
  .word 0x24030030
  .word 0x1083000f
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830004
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x32a803ff
  .word 0x0260282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a460
  .word 0x0c0e2898
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0680
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_loop_invariants reset


// FUN_00379F30


#ifndef PC_BUILD
asm u64 FUN_00379f30(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00c0902d
  .word 0x2411000f
  .word 0x3c020038
  .word 0x24429c30
  .word 0xffa20000
  .word 0x24060009
  .word 0x0220382d
  .word 0x8e480154
  .word 0x8e490080
  .word 0x0240502d
  .word 0x0000582d
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e500164
  .word 0x12000035
  .word 0x00000000
  .word 0x8e040000
  .word 0x24020001
  .word 0x1482000e
  .word 0x00000000
  .word 0x9604000c
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x1040002b
  .word 0x00000000
  .word 0x3c034248
  .word 0x44836000
  .word 0x0240202d
  .word 0x24450004
  .word 0x0c0e589c
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x2402000a
  .word 0x14820012
  .word 0x00000000
  .word 0x82030022
  .word 0x24020003
  .word 0x1462000e
  .word 0x00000000
  .word 0x96040024
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x10400017
  .word 0x00000000
  .word 0x3c034248
  .word 0x44836000
  .word 0x0240202d
  .word 0x24450004
  .word 0x0c0e589c
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x24020030
  .word 0x1482000c
  .word 0x00000000
  .word 0x9604000c
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x3c034248
  .word 0x44836000
  .word 0x0240202d
  .word 0x24450004
  .word 0x0c0e589c
  .word 0x00000000
  .word 0xae500780
  .word 0x8e4300d4
  .word 0x24020004
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000002f
  .word 0x00000000
  .word 0x8e460080
  .word 0x14c00004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000029
  .word 0x00000000
  .word 0x28c1000f
  .word 0x10200002
  .word 0x00000000
  .word 0x00c0882d
  .word 0x26440154
  .word 0x26450150
  .word 0x0220382d
  .word 0x0000402d
  .word 0x24094000
  .word 0x240a1000
  .word 0x0c0dbda0
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x24060001
  .word 0x00c0382d
  .word 0x0000402d
  .word 0x24092000
  .word 0x340a8000
  .word 0x0c0dbda0
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x00c0802d
  .word 0x10000008
  .word 0x00000000
  .word 0x30620020
  .word 0x10400004
  .word 0x00000000
  .word 0x2410ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x0240202d
  .word 0x0c0d8978
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_0037A150


u32 FUN_0037a150(int param_1,int param_2,u8 *param_3)



{

  f32 uVar1;

  u8 auStack_10 [16];
  FUN_00523ac8_evt4(auStack_10,(const char *)&gp0xffffa4b0,(void *)(param_3 + 0x130),(void *)(param_3 + 0x13c));

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)auStack_10);

  return 2;

}


// FUN_0037A1E0


void FUN_0037a1e0(int param_1,int param_2,int param_3,int param_4)



{

  int iVar1;
  int iVar2;
  u8 *puVar1;
  f32 uVar2;


  param_1 = param_1 + 0xc;
  iVar1 = 0;
  puVar1 = (u8 *)s_1234567890A_0069f7c0_abs + param_3 * 0xc;
  iVar2 = param_2 * 0xc;

  for (; iVar1 < 0xb;) {
    uVar2 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));

    evtMenuDrawText(param_1 * 0xc, iVar2, uVar2, 0, (const char *)*(s8 *)(puVar1 + iVar1));

    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0xc0;
  }

  return;

}


/* opt_lifetimes on: default nd371/524B -> nd370/524B; retained. */
#pragma push
#pragma opt_lifetimes on
// FUN_0037A2B0


#ifndef PC_BUILD
asm u32 FUN_0037a2b0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb00010
  .word 0x00c0802d
  .word 0x3c020038
  .word 0x2442a1e0
  .word 0xffa20000
  .word 0x2406000e
  .word 0x24070006
  .word 0x0000402d
  .word 0x24090004
  .word 0x0200502d
  .word 0x3c0b0038
  .word 0x256ba150
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e0300d4
  .word 0x24020003
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000006d
  .word 0x00000000
  .word 0x0000202d
  .word 0x2605012c
  .word 0x24060004
  .word 0x00c0382d
  .word 0x0000402d
  .word 0x24094000
  .word 0x240a1000
  .word 0x0c0dbda0
  .word 0x00000000
  .word 0x0000202d
  .word 0x26050128
  .word 0x2406000b
  .word 0x00c0382d
  .word 0x0000402d
  .word 0x24092000
  .word 0x340a8000
  .word 0x0c0dbda0
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24030001
  .word 0x10000008
  .word 0x00000000
  .word 0x30620020
  .word 0x10400004
  .word 0x00000000
  .word 0x2403ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x04610004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000047
  .word 0x00000000
  .word 0x24020001
  .word 0x14620043
  .word 0x00000000
  .word 0x8e060128
  .word 0x8e04012c
  .word 0x00041040
  .word 0x00441021
  .word 0x00021880
  .word 0x3c02006a
  .word 0x2442f7c0
  .word 0x00431021
  .word 0x00c21021
  .word 0x80450000
  .word 0x24020003
  .word 0x14820027
  .word 0x00000000
  .word 0x28c20004
  .word 0x14400024
  .word 0x00000000
  .word 0x2402004b
  .word 0x10a2001b
  .word 0x00000000
  .word 0x2402004f
  .word 0x10a20018
  .word 0x00000000
  .word 0x24020053
  .word 0x10a20006
  .word 0x00000000
  .word 0x24020042
  .word 0x10a20003
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x0000202d
  .word 0x10000002
  .word 0x00000000
  .word 0x24840001
  .word 0x02041821
  .word 0x80620130
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x18800019
  .word 0x00000000
  .word 0xa060012f
  .word 0x10000016
  .word 0x00000000
  .word 0x82020130
  .word 0x10400013
  .word 0x00000000
  .word 0x24020001
  .word 0x10000011
  .word 0x00000000
  .word 0x0000302d
  .word 0x10000002
  .word 0x00000000
  .word 0x24c60001
  .word 0x02062021
  .word 0x24830130
  .word 0x80820130
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x28c10008
  .word 0x10200003
  .word 0x00000000
  .word 0xa0650000
  .word 0xa0800131
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb00010
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop


// FUN_0037A4D0


u32 FUN_0037a4d0(int param_1,int param_2,int param_3)



{

  int iVar1;

  u32 uVar2;

  f32 fVar3;

  

  iVar1 = *(int *)(param_3 + 0x120);

  if (iVar1 == 0) {

    uVar2 = 0;

  }

  else {

    fVar3 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

    evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, fVar3, 0, (const char *)(void *)iVar1);

    uVar2 = 2;

  }

  return uVar2;

}


// FUN_0037A560


void FUN_0037a560(int param_1,int param_2,int param_3,int param_4)



{

  u32 uVar1;

  f32 uVar2;

  

  if (param_3 < *(int *)(param_4 + 0x11c)) {

    if (*(int *)(param_4 + 0x118) == param_3) {

      if (*(int *)(param_4 + 0xd4) == 2) {

        uVar1 = 4;

      }

      else {

        uVar1 = 5;

      }

    }

    else {

      uVar1 = 0;

    }

    uVar2 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));

    evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar2, (int)uVar1, (const char *)(void *)*(u32 *)(*(int *)(param_4 + 0x124) + param_3 * 4));

  }

  return;

}


/* W414: shared-value, parameter-return, and switch/goto layout probes did not improve nd4. */
// FUN_0037A640


u32 FUN_0037a640(int param_1,int param_2,int param_3)
{
  int rowCount;
  u16 buttons;
  if (*(int *)(param_3 + 0x120) == 0) {
    rowCount = 10;
  }
  else {
    rowCount = FUN_00524388((const char *)(u32)*(int *)(param_3 + 0x120));
    if (rowCount < 6) {
      rowCount = 6;
    }
  }
  FUN_0036f900_evt(param_1,param_2,rowCount,*(int *)(param_3 + 0x11c) + 3,0,
               *(int *)(param_3 + 0x11c),param_3,(code *)FUN_0037a4d0,
               (code *)FUN_0037a560);
  if (*(int *)(param_3 + 0xd4) != 2) {
    return 0;
  }
  FUN_0036f680_ptr2(0,(u32 *)((u8 *)(uintptr_t)param_3 + 0x118),
               *(u32 *)(param_3 + 0x11c),
               *(u32 *)(param_3 + 0x11c),0,0x4000,0x1000);
  FUN_0036f680(0,0,1,1,0,0x2000,0x8000);
  buttons = *(u16 *)DAT_007e094e_abs;
  if ((buttons & 0x40) != 0) {
    return 1;
  }
  if ((buttons & 0x20) != 0) {
    return -1;
  }
  return 0;
}


// FUN_0037A790


void FUN_0037a790(int param_1,int param_2,int param_3,int param_4)



{

  char cVar1;

  u8 *puVar2;

  int lVar3;

  u32 uVar4;

  u8 **ppuVar7;

  u32 *puVar6;

  int iVar5;

  u32 uVar8;
  int y;

  f32 uVar9;

  u32 auStack_60 [17];

  RwV2d auStack_10;

  u8 auStack_4 [4];

  

  ppuVar7 = PTR_s_SAVE_PROJ_abs;

  puVar6 = auStack_60;

  iVar5 = 0x11;

  do {

    puVar2 = *ppuVar7;

    ppuVar7 = ppuVar7 + 1;

    iVar5 = iVar5 + -1;

    *puVar6 = (u32)puVar2;

    puVar6 = puVar6 + 1;

  } while (0 < iVar5);

  auStack_10 = *(RwV2d *)&uGpffffa4b8;

  if (param_3 < 0x11) {

    iVar5 = (int)param_4;

    if (*(int *)(iVar5 + 0x104) == param_3) {

      if (*(int *)(iVar5 + 0xd4) == 1) {

        uVar8 = 4;

      }

      else {

        uVar8 = 5;

      }

    }

    else {

      uVar8 = 0;

    }

    y = param_2 * 0xc;

    uVar9 = FUN_0038a220(*(u32 *)(iVar5 + 0xe0));

    evtMenuDrawText(param_1 * 0xc, y, uVar9, uVar8, (const char *)(void *)auStack_60[param_3]);

    if (param_3 == 7) {

      uVar9 = FUN_0038a220(*(u32 *)(iVar5 + 0xe0));

      evtMenuDrawText((param_1 + 9) * 0xc, y, uVar9, uVar8, (const char *)DAT_0069f948_abs, *(u32 *)(iVar5 + 0x3c), *(u32 *)(iVar5 + 0x40), *(u8 *)(iVar5 + 0x46), *(s16 *)(iVar5 + 0x48));

    }

    else if (param_3 == 10) {

      cVar1 = *(char *)(iVar5 + 0x45);

      if (cVar1 == '\0') {

        uVar9 = FUN_0038a220(*(u32 *)(iVar5 + 0xe0));

        evtMenuDrawText((param_1 + 10) * 0xc, y, uVar9, uVar8, (const char *)DAT_0069f958_abs);

      }

      else {

        uVar9 = FUN_0038a220(*(u32 *)(iVar5 + 0xe0));

        evtMenuDrawText((param_1 + 10) * 0xc, y, uVar9, uVar8, (const char *)&gp0xffffa4c0, cVar1);

      }

    }

    else if (param_3 == 9) {

      uVar9 = FUN_0038a220(*(u32 *)(iVar5 + 0xe0));

      evtMenuDrawText((param_1 + 10) * 0xc, y, uVar9, uVar8, (const char *)&gp0xffffa4c8, ((u32 *)&auStack_10)[*(char *)(iVar5 + 0x44)]);

    }

    else if (param_3 == 0xb) {

      lVar3 = FUN_00397520(param_4,auStack_4);

      if (lVar3 == 0) {

        uVar9 = FUN_0038a220(*(u32 *)(iVar5 + 0xe0));

        evtMenuDrawText((param_1 + 10) * 0xc, y, uVar9, uVar8, (const char *)DAT_0069f968_abs);

      }

      else {

        uVar9 = FUN_0038a220(*(u32 *)(iVar5 + 0xe0));

        uVar4 = FUN_00397500(param_4);

        evtMenuDrawText((param_1 + 10) * 0xc, y, uVar9, uVar8, (const char *)DAT_0069f978_abs, (void *)uVar4);

      }

    }

    else if (param_3 == 0xe) {

      if ((*(s8 *)(iVar5 + 0x4c) & 1) != 0) {

        uVar9 = FUN_0038a220(*(u32 *)(iVar5 + 0xe0));

        evtMenuDrawText((param_1 + 0xb) * 0xc, y, uVar9, uVar8, (const char *)&gp0xffffa4d8);

      }

      else {

        uVar9 = FUN_0038a220(*(u32 *)(iVar5 + 0xe0));

        evtMenuDrawText((param_1 + 0xb) * 0xc, y, uVar9, uVar8, (const char *)&gp0xffffa4d0);

      }

    }

    else if (param_3 == 0x10) {

      if ((*(s8 *)(iVar5 + 0x4c) & 4) != 0) {

        uVar9 = FUN_0038a220(*(u32 *)(iVar5 + 0xe0));

        evtMenuDrawText((param_1 + 0xc) * 0xc, y, uVar9, uVar8, (const char *)&gp0xffffa4d8);

      }

      else {

        uVar9 = FUN_0038a220(*(u32 *)(iVar5 + 0xe0));

        evtMenuDrawText((param_1 + 0xc) * 0xc, y, uVar9, uVar8, (const char *)&gp0xffffa4d0);

      }

    }

  }

  return;

}


/* W414: result/argument-local probes kept nd5; returning the call result or extraout exceeded the window. */
/* DUMMYDUMB session 2026-10-20: the only real residual is a two-instruction
 * order swap at +88/+92 - ours addiu $a1,$a0,0x104 then move $v0,$zero, retail
 * move $v0,$zero then addiu $a1,$a0,0x104. The rest of the differences are
 * gp-relative and call relocations (masked by the verifier). Retail materializes
 * the literal 0 argument before the address, so argument evaluation order is the
 * lever. Probed: inlining ptr into the call, (u32)/(int) casts on the address,
 * ptr as u32, and moving the local out of the else block - all byte-neutral
 * (9 raw differences, 2 real, unchanged). tools/permute.py agrees: 521
 * compiles, no match, verdict "2x other/structural". Confirmed wall: instruction
 * scheduling / subexpression evaluation order. */
// FUN_0037ABD0


#ifndef PC_BUILD
asm u32 FUN_0037abd0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb00010
  .word 0x00c0802d
  .word 0x3c020038
  .word 0x2442a790
  .word 0xffa20000
  .word 0x24060016
  .word 0x24070011
  .word 0x0000402d
  .word 0x00e0482d
  .word 0x0200502d
  .word 0x0000582d
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e0300d4
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000022
  .word 0x00000000
  .word 0x0000202d
  .word 0x26050104
  .word 0x24060011
  .word 0x00c0382d
  .word 0x0000402d
  .word 0x24094000
  .word 0x240a1000
  .word 0x0c0dbda0
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0040302d
  .word 0x00c0382d
  .word 0x0000402d
  .word 0x24092000
  .word 0x340a8000
  .word 0x0c0dbda0
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x00e0102d
  .word 0x10000008
  .word 0x00000000
  .word 0x30620020
  .word 0x10400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb00010
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* DUMMYDUMB session 2026-10-21: 8 differing bytes, all of them the order of
 * independent instructions.  The pair that matters is "move a0,zero" and
 * "addiu a1,s0,0x104": mwcc sets the second call's a0 up before the first
 * call's a1 here, retail does it the other way round.
 * Probed: the pointer inlined into the call, the pointer local declared as u32,
 * s32 or void*, the call written on one line, and the pointer local declared at
 * the top of the function - all keep the same order.
 * Confirmed wall: instruction scheduling.
 */


// FUN_0037ACC0


u32 FUN_0037acc0(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069f990);

  return 2;

}


/* W416 ORDER shape probes rejected: ascending switch nd417 -> 427 and descending switch nd417 -> 389, both object 660/window656 (over-window); removing the final break did not reduce the descending 660-byte object. W453 retained an ascending if/else-if chain (nd414, object/window 652/656). */
// FUN_0037AD30


#ifndef PC_BUILD
asm void FUN_0037ad30(int param_1,int param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00e0882d
  .word 0x0000802d
  .word 0x3c03006a
  .word 0xc462f9a0
  .word 0x3c03006a
  .word 0xc461f9a4
  .word 0x3c03006a
  .word 0xc460f9a8
  .word 0xe7a200a0
  .word 0xe7a100a4
  .word 0xe7a000a8
  .word 0x8ce3016c
  .word 0xafa300ac
  .word 0x8ce30220
  .word 0x14660002
  .word 0x00000000
  .word 0x24100004
  .word 0x24030002
  .word 0x10c30050
  .word 0x00000000
  .word 0x24030001
  .word 0x10c30028
  .word 0x00000000
  .word 0x10c00003
  .word 0x00000000
  .word 0x10000078
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00029880
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e7f9b0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x83a200ac
  .word 0x00021080
  .word 0x005d1021
  .word 0x0260282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a068
  .word 0x8c4800a0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000055
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00029880
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a4e8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x83a200ad
  .word 0x24460001
  .word 0x27a40060
  .word 0x2785a4f0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a068
  .word 0x27a80060
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000030
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x0002a080
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0280282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a4f8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x87b300ae
  .word 0x16600010
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0280282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a500
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0280282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a070
  .word 0x0260402d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


/* W416 ORDER flag-branch swap lowered nd505 -> 503, object/window 800/800; ordered calls now match retail (b5d50 before b5da0). */
// FUN_0037AFC0


#ifndef PC_BUILD
asm u32 FUN_0037afc0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0020
  .word 0x7fb00010
  .word 0x00c0802d
  .word 0x3c020038
  .word 0x2442ad30
  .word 0xffa20000
  .word 0x24060014
  .word 0x24070006
  .word 0x0000402d
  .word 0x24090001
  .word 0x0200502d
  .word 0x3c0b0038
  .word 0x256bacc0
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e0300d4
  .word 0x24020017
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000ad
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e020220
  .word 0x14400005
  .word 0x00000000
  .word 0x24020002
  .word 0xae020220
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae020220
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e030220
  .word 0x24020003
  .word 0x14620004
  .word 0x00000000
  .word 0xae000220
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae020220
  .word 0x8e02016c
  .word 0xafa2003c
  .word 0x0200202d
  .word 0x0c0d8978
  .word 0x00000000
  .word 0x8e030220
  .word 0x24040002
  .word 0x10640043
  .word 0x00000000
  .word 0x24020001
  .word 0x10620022
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000068
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x1040000c
  .word 0x00000000
  .word 0x83a2003c
  .word 0x24420001
  .word 0x28410003
  .word 0x10200004
  .word 0x00000000
  .word 0xa3a2003c
  .word 0x1000005b
  .word 0x00000000
  .word 0xa3a0003c
  .word 0x10000058
  .word 0x00000000
  .word 0x30628000
  .word 0x10400055
  .word 0x00000000
  .word 0x83a2003c
  .word 0x18400005
  .word 0x00000000
  .word 0x2442ffff
  .word 0xa3a2003c
  .word 0x1000004e
  .word 0x00000000
  .word 0xa3a4003c
  .word 0x1000004b
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x1040000c
  .word 0x00000000
  .word 0x83a2003d
  .word 0x24420001
  .word 0x28410064
  .word 0x10200004
  .word 0x00000000
  .word 0xa3a2003d
  .word 0x1000003e
  .word 0x00000000
  .word 0xa3a0003d
  .word 0x1000003b
  .word 0x00000000
  .word 0x30628000
  .word 0x10400038
  .word 0x00000000
  .word 0x83a2003d
  .word 0x18400005
  .word 0x00000000
  .word 0x2442ffff
  .word 0xa3a2003d
  .word 0x10000031
  .word 0x00000000
  .word 0x24020063
  .word 0xa3a2003d
  .word 0x1000002d
  .word 0x00000000
  .word 0x97a4003e
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x3c03007e
  .word 0x94640952
  .word 0x30832000
  .word 0x1060000b
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x24040008
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x8c4200f8
  .word 0x1000000c
  .word 0x00000000
  .word 0x30838000
  .word 0x10600009
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x24040008
  .word 0x0c0ed768
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x8c4200fc
  .word 0x10400005
  .word 0x00000000
  .word 0x94430000
  .word 0xa7a3003e
  .word 0x10000002
  .word 0x00000000
  .word 0xa7a0003e
  .word 0x10400007
  .word 0x00000000
  .word 0x3c0341a0
  .word 0x44836000
  .word 0x0200202d
  .word 0x24450004
  .word 0x0c0e589c
  .word 0x00000000
  .word 0x8fa2003c
  .word 0xae02016c
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400008
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c0e2988
  .word 0x00000000
  .word 0x24020001
  .word 0x1000000c
  .word 0x00000000
  .word 0x30620020
  .word 0x10400008
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c0e2988
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb00010
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_0037B2E0


u32 FUN_0037b2e0(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069f9c0);

  return 2;

}


/* opt_common_subs off + opt_propagation off: default nd383/636B -> nd307/636B; retained. */
#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
/* W414: RwV3d table access scored nd307; absolute-array aliases grew past the 640-byte window. */
// FUN_0037B350


#ifndef PC_BUILD
asm void FUN_0037b350(int param_1,int param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00e0882d
  .word 0x0000802d
  .word 0x3c03006a
  .word 0xc462f9d8
  .word 0x3c03006a
  .word 0xc461f9dc
  .word 0x3c03006a
  .word 0xc460f9e0
  .word 0xe7a20060
  .word 0xe7a10064
  .word 0xe7a00068
  .word 0x8ce3019c
  .word 0xafa3006c
  .word 0x8ce30228
  .word 0x14660002
  .word 0x00000000
  .word 0x24100004
  .word 0x24030002
  .word 0x10c3005c
  .word 0x00000000
  .word 0x24030001
  .word 0x10c30028
  .word 0x00000000
  .word 0x10c00003
  .word 0x00000000
  .word 0x10000073
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00029880
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e7f9e8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x83a2006c
  .word 0x00021080
  .word 0x005d1021
  .word 0x0260282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a068
  .word 0x8c480060
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000050
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x0002a080
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0280282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a4f8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x87b3006e
  .word 0x16600010
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0280282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a500
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000002f
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0280282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a070
  .word 0x0260402d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00029880
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e7f9f8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a3b8
  .word 0x8e2801a0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0xdfbf0050
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
#pragma pop


/* W416 ORDER probe rejected: ascending switch cases 0..2 raised nd725 -> 774, object/window 1200/1200. */
// FUN_0037B5D0


#ifndef PC_BUILD
asm u32 FUN_0037b5d0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x00c0902d
  .word 0x0c0ed740
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000115
  .word 0x00000000
  .word 0x3c020038
  .word 0x2442b350
  .word 0xffa20000
  .word 0x0220202d
  .word 0x0200282d
  .word 0x24060014
  .word 0x24070007
  .word 0x0000402d
  .word 0x24090001
  .word 0x0240502d
  .word 0x3c0b0038
  .word 0x256bb2e0
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e4300d4
  .word 0x24020018
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000100
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e420228
  .word 0x14400005
  .word 0x00000000
  .word 0x24020002
  .word 0xae420228
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae420228
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e430228
  .word 0x24020002
  .word 0x14620004
  .word 0x00000000
  .word 0xae400228
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae420228
  .word 0x8e42019c
  .word 0xafa2005c
  .word 0x0240202d
  .word 0x0c0d8978
  .word 0x00000000
  .word 0x8e430228
  .word 0x24040002
  .word 0x106400a3
  .word 0x00000000
  .word 0x24020001
  .word 0x10620024
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000bb
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x1040000d
  .word 0x00000000
  .word 0x83a2005c
  .word 0x24420001
  .word 0x28410003
  .word 0x10200004
  .word 0x00000000
  .word 0xa3a2005c
  .word 0x10000002
  .word 0x00000000
  .word 0xa3a0005c
  .word 0xa7a0005e
  .word 0x100000aa
  .word 0x00000000
  .word 0x30628000
  .word 0x104000a7
  .word 0x00000000
  .word 0x83a2005c
  .word 0x18400005
  .word 0x00000000
  .word 0x2442ffff
  .word 0xa3a2005c
  .word 0x10000002
  .word 0x00000000
  .word 0xa3a4005c
  .word 0xa7a0005e
  .word 0x1000009c
  .word 0x00000000
  .word 0x0000882d
  .word 0x97a4005e
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040802d
  .word 0x83a3005c
  .word 0x24020002
  .word 0x10620015
  .word 0x00000000
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x24110008
  .word 0x1000000b
  .word 0x00000000
  .word 0x16000004
  .word 0x00000000
  .word 0x24110003
  .word 0x10000006
  .word 0x00000000
  .word 0x96030000
  .word 0x3c02000f
  .word 0x3442fc00
  .word 0x00621024
  .word 0x00028a83
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400026
  .word 0x00000000
  .word 0x16000010
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040802d
  .word 0x24020003
  .word 0x16220041
  .word 0x00000000
  .word 0x1600003f
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040802d
  .word 0x10000039
  .word 0x00000000
  .word 0x8e1000f8
  .word 0x16000010
  .word 0x00000000
  .word 0x24020003
  .word 0x1622000b
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c04006a
  .word 0x2484fa10
  .word 0x0c14896a
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x10000027
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x30628000
  .word 0x10400022
  .word 0x00000000
  .word 0x16000016
  .word 0x00000000
  .word 0x24020003
  .word 0x1622000d
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ed768
  .word 0x00000000
  .word 0x0040802d
  .word 0x16000017
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0ed768
  .word 0x00000000
  .word 0x0040802d
  .word 0x10000011
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0ed768
  .word 0x00000000
  .word 0x0040802d
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e1000fc
  .word 0x16000008
  .word 0x00000000
  .word 0x24020001
  .word 0x16220005
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0ed768
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000005
  .word 0x00000000
  .word 0x96020000
  .word 0xa7a2005e
  .word 0x10000002
  .word 0x00000000
  .word 0xa7a0005e
  .word 0x12000028
  .word 0x00000000
  .word 0x3c0241a0
  .word 0x44826000
  .word 0x0240202d
  .word 0x26050004
  .word 0x0c0e589c
  .word 0x00000000
  .word 0x10000020
  .word 0x00000000
  .word 0x0000282d
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24050001
  .word 0x10000011
  .word 0x00000000
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x2405ffff
  .word 0x1000000b
  .word 0x00000000
  .word 0x30620008
  .word 0x10400004
  .word 0x00000000
  .word 0x2405000a
  .word 0x10000005
  .word 0x00000000
  .word 0x30620004
  .word 0x10400002
  .word 0x00000000
  .word 0x2405fff6
  .word 0x8e4401a0
  .word 0x0000302d
  .word 0x240707d0
  .word 0x0c0e2920
  .word 0x00000000
  .word 0xae4201a0
  .word 0x8fa2005c
  .word 0xae42019c
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400008
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0e2988
  .word 0x00000000
  .word 0x24020001
  .word 0x1000000c
  .word 0x00000000
  .word 0x30620020
  .word 0x10400008
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0e2988
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_0037BA80


u32 FUN_0037ba80(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069fa30);

  return 2;

}


// FUN_0037BAF0


void FUN_0037baf0(int param_1,int param_2,int param_3,int param_4)
{
  int iVar1;
  u32 uVar2;
  int iVar3;
  f32 uVar4;
  int y;

  uVar2 = 0;
  iVar1 = FUN_00361830(param_4);
  iVar3 = (int)param_4;
  if (*(int *)(iVar3 + 400) == param_3) {
    uVar2 = 4;
  }
  switch (param_3) {
  case 0:
    y = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, y, uVar4, 0, (const char *)&gp0xffffa508);
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText((param_1 + 0xc) * 0xc, y, uVar4, uVar2,
                    (const char *)&gp0xffffa3b8, *(u32 *)(iVar3 + 0x198));
    break;
  case 1:
    y = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, y, uVar4, 0, (const char *)&gp0xffffa510);
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText((param_1 + 0xc) * 0xc, y, uVar4, uVar2,
                    (const char *)&gp0xffffa3b8, *(u32 *)(iVar3 + 0x19c));
    break;
  case 2:
    y = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, y, uVar4, 0, (const char *)DAT_0069fa40_abs);
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText((param_1 + 0xc) * 0xc, y, uVar4, uVar2,
                    (const char *)&gp0xffffa3b8, *(u32 *)(iVar3 + 0x16c));
    break;
  case 3:
    y = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, y, uVar4, 0, (const char *)DAT_0069fa50_abs);
    switch (**(int **)(iVar3 + 0x164)) {
    case 1:
    case 0x30:
      if (*(char *)(iVar1 + 0x28) != '\0') {
        uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
        evtMenuDrawText((param_1 + 0xc) * 0xc, y, uVar4, uVar2,
                        (const char *)DAT_0069fa60_abs, *(char *)(iVar1 + 0x29),
                        *(char *)(iVar1 + 0x2a), *(char *)(iVar1 + 0x2b));
      }
      else {
        uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
        evtMenuDrawText((param_1 + 0xc) * 0xc, y, uVar4, uVar2,
                        (const char *)&gp0xffffa0b8);
      }
      break;
    default:
      uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
      evtMenuDrawText((param_1 + 0xd) * 0xc, y, uVar4, uVar2,
                      (const char *)&gp0xffffa518);
      break;
    }
    break;
  }
}


// FUN_0037BE50


#ifndef PC_BUILD
asm u32 FUN_0037be50(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x0000882d
  .word 0x8cd00238
  .word 0x0c0ed740
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000109
  .word 0x00000000
  .word 0x3c020038
  .word 0x2442baf0
  .word 0xffa20000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2406001b
  .word 0x24070006
  .word 0x0000402d
  .word 0x24090001
  .word 0x0240502d
  .word 0x3c0b0038
  .word 0x256bba80
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e4300d4
  .word 0x24020019
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000f4
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e420190
  .word 0x14400005
  .word 0x00000000
  .word 0x24020003
  .word 0xae420190
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae420190
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e430190
  .word 0x24020003
  .word 0x14620004
  .word 0x00000000
  .word 0xae400190
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae420190
  .word 0x0240202d
  .word 0x0c0d8978
  .word 0x00000000
  .word 0x8e430190
  .word 0x24020002
  .word 0x10620052
  .word 0x00000000
  .word 0x24020001
  .word 0x1062002a
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000063
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e420198
  .word 0x24420005
  .word 0xae420198
  .word 0x10000017
  .word 0x00000000
  .word 0x30620008
  .word 0x10400006
  .word 0x00000000
  .word 0x8e420198
  .word 0x2442000a
  .word 0xae420198
  .word 0x1000000f
  .word 0x00000000
  .word 0x30628000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e420198
  .word 0x2442fffb
  .word 0xae420198
  .word 0x10000007
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x8e420198
  .word 0x2442fff6
  .word 0xae420198
  .word 0x26040010
  .word 0x0c0eee6c
  .word 0x00000000
  .word 0x1000003e
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e42019c
  .word 0x24420005
  .word 0xae42019c
  .word 0x10000017
  .word 0x00000000
  .word 0x30620008
  .word 0x10400006
  .word 0x00000000
  .word 0x8e42019c
  .word 0x2442000a
  .word 0xae42019c
  .word 0x1000000f
  .word 0x00000000
  .word 0x30628000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e42019c
  .word 0x2442fffb
  .word 0xae42019c
  .word 0x10000007
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x8e42019c
  .word 0x2442fff6
  .word 0xae42019c
  .word 0x26040010
  .word 0x0c0eee6c
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24110001
  .word 0x10000011
  .word 0x00000000
  .word 0x30620008
  .word 0x10400004
  .word 0x00000000
  .word 0x2411000a
  .word 0x1000000b
  .word 0x00000000
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x2411ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x30620004
  .word 0x10400002
  .word 0x00000000
  .word 0x2411fff6
  .word 0xc6020004
  .word 0xc6010008
  .word 0xc600000c
  .word 0xe7a200c0
  .word 0xe7a100c4
  .word 0xe7a000c8
  .word 0xc640019c
  .word 0x46800020
  .word 0xe7a000b0
  .word 0xc6400198
  .word 0x46800020
  .word 0xe7a000b4
  .word 0xafa000b8
  .word 0x27a400b0
  .word 0x0c0eee6c
  .word 0x00000000
  .word 0xc7a000b0
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xae42019c
  .word 0xc7a000b4
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xae420198
  .word 0x27a40070
  .word 0x27a500c0
  .word 0x27a600b0
  .word 0x0c0ede68
  .word 0x00000000
  .word 0x3c024316
  .word 0x44826000
  .word 0x0240202d
  .word 0x27a50070
  .word 0x0c0e55f4
  .word 0x00000000
  .word 0x8e44016c
  .word 0x0220282d
  .word 0x8e460170
  .word 0x8e470174
  .word 0x0c0e2920
  .word 0x00000000
  .word 0xae42016c
  .word 0x0200202d
  .word 0x0000282d
  .word 0x26060010
  .word 0x0000382d
  .word 0x0c0edd18
  .word 0x00000000
  .word 0x96030000
  .word 0x3c02000f
  .word 0x3442fc00
  .word 0x00621024
  .word 0x00021a83
  .word 0x24020007
  .word 0x14620009
  .word 0x00000000
  .word 0x3c0241a0
  .word 0x44826000
  .word 0x0240202d
  .word 0x26050004
  .word 0x0c0e589c
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x3c024248
  .word 0x44826000
  .word 0x0240202d
  .word 0x26050004
  .word 0x0c0e589c
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000018
  .word 0x00000000
  .word 0x30620020
  .word 0x10400014
  .word 0x00000000
  .word 0x26060010
  .word 0xc642022c
  .word 0xc6410230
  .word 0xc6400234
  .word 0xe6020010
  .word 0xe6010014
  .word 0xe6000018
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0000382d
  .word 0x0c0edd18
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0e2988
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_0037C2E0


u32 FUN_0037c2e0(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069fa70);

  return 2;

}


/* W416 ORDER probes rejected: inverted case-6 body nd1296 -> 1312 (obj1940/window1952); nested switch nd1296 -> 1300 (obj1948/window1952). */
// FUN_0037C350


#ifndef PC_BUILD
asm void FUN_0037c350(int param_1,int param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdfee0
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0a82d
  .word 0x00e0902d
  .word 0x0000882d
  .word 0x3c02006a
  .word 0xc442fa80
  .word 0x3c02006a
  .word 0xc441fa84
  .word 0x3c02006a
  .word 0xc440fa88
  .word 0xe7a20110
  .word 0xe7a10114
  .word 0xe7a00118
  .word 0xc781a538
  .word 0xc780a53c
  .word 0xe7a10108
  .word 0xe7a0010c
  .word 0xc781a540
  .word 0xc780a544
  .word 0xe7a10100
  .word 0xe7a00104
  .word 0xc781a548
  .word 0xc780a54c
  .word 0xe7a100f8
  .word 0xe7a000fc
  .word 0x0240202d
  .word 0x0c0d860c
  .word 0x00000000
  .word 0x0040802d
  .word 0x8e430190
  .word 0x14750002
  .word 0x00000000
  .word 0x24110004
  .word 0x2ea10008
  .word 0x102001b1
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484a9b0
  .word 0x00151880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00028080
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e7fa90
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2683000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x8e420198
  .word 0x00021080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480110
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000187
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00028080
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e7faa0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e430198
  .word 0x24020002
  .word 0x14620010
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2683000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a550
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000164
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2683000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x8e42019c
  .word 0x00021080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480108
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000151
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00028080
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e7fab0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e430198
  .word 0x24020002
  .word 0x14620010
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2683000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a550
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000012e
  .word 0x00000000
  .word 0x8e42019c
  .word 0x14400017
  .word 0x00000000
  .word 0x8e4201a0
  .word 0x24460001
  .word 0x27a400b0
  .word 0x2785a4f0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2683000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x27a800b0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000115
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2683000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3b8
  .word 0x8e4801a0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000105
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00028080
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e7fac0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4201a4
  .word 0x28410002
  .word 0x14200002
  .word 0x00000000
  .word 0xae4001a4
  .word 0x8e430198
  .word 0x24020002
  .word 0x14620010
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2683000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a550
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100000dd
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2683000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x8e4201a4
  .word 0x00021080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480100
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100000ca
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00028080
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e7fad0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4201a8
  .word 0x28410002
  .word 0x14200002
  .word 0x00000000
  .word 0xae4001a8
  .word 0x8e430198
  .word 0x24020002
  .word 0x14620010
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2683000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a550
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100000a2
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2683000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x8e4201a8
  .word 0x00021080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c480100
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000008f
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00028080
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e7fae0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4201a8
  .word 0x28410002
  .word 0x14200002
  .word 0x00000000
  .word 0xae4001a8
  .word 0x8e420198
  .word 0x10400010
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2683000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a550
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000068
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2683000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x8e4201ac
  .word 0x00021080
  .word 0x005d1021
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x8c4800f8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000055
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00029880
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a558
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e430198
  .word 0x24020002
  .word 0x14620010
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2683000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a560
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000033
  .word 0x00000000
  .word 0x82020034
  .word 0x14400008
  .word 0x00000000
  .word 0x27a40070
  .word 0x2785a068
  .word 0x2786a0b8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x82070035
  .word 0x82080036
  .word 0x82090037
  .word 0x27a40070
  .word 0x3c05006a
  .word 0x24a5faf0
  .word 0x2786a0c0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2683000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a068
  .word 0x27a80070
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e7fb00
  .word 0x0c0e2898
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0120
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_0037CAF0


#ifndef PC_BUILD
asm int FUN_0037caf0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x00c0802d
  .word 0x0c0ed740
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000103
  .word 0x00000000
  .word 0x3c020038
  .word 0x2442c350
  .word 0xffa20000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2406001a
  .word 0x2407000b
  .word 0x0000402d
  .word 0x24090001
  .word 0x0200502d
  .word 0x3c0b0038
  .word 0x256bc2e0
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e0300d4
  .word 0x2402001b
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000ee
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e020190
  .word 0x14400005
  .word 0x00000000
  .word 0x24020007
  .word 0xae020190
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae020190
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e030190
  .word 0x24020007
  .word 0x14620004
  .word 0x00000000
  .word 0xae000190
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae020190
  .word 0x8e020190
  .word 0x2c410006
  .word 0x102000c3
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463a9d0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e020198
  .word 0x28410002
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae020198
  .word 0x100000af
  .word 0x00000000
  .word 0xae000198
  .word 0x100000ac
  .word 0x00000000
  .word 0x30628000
  .word 0x104000a9
  .word 0x00000000
  .word 0x8e020198
  .word 0x18400005
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae020198
  .word 0x100000a2
  .word 0x00000000
  .word 0x24020002
  .word 0xae020198
  .word 0x1000009e
  .word 0x00000000
  .word 0x8e030198
  .word 0x24020002
  .word 0x1062009a
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e02019c
  .word 0x1c400005
  .word 0x00000000
  .word 0x24420001
  .word 0xae02019c
  .word 0x10000002
  .word 0x00000000
  .word 0xae00019c
  .word 0xae0001a0
  .word 0x1000008a
  .word 0x00000000
  .word 0x30628000
  .word 0x10400087
  .word 0x00000000
  .word 0x8e02019c
  .word 0x18400005
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae02019c
  .word 0x10000003
  .word 0x00000000
  .word 0x24020001
  .word 0xae02019c
  .word 0xae0001a0
  .word 0x1000007b
  .word 0x00000000
  .word 0x8e030198
  .word 0x24020002
  .word 0x10620044
  .word 0x00000000
  .word 0x8e02019c
  .word 0x1440001f
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e0201a0
  .word 0x28410063
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae0201a0
  .word 0x10000067
  .word 0x00000000
  .word 0xae0001a0
  .word 0x10000064
  .word 0x00000000
  .word 0x30628000
  .word 0x10400061
  .word 0x00000000
  .word 0x8e0201a0
  .word 0x18400005
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae0201a0
  .word 0x1000005a
  .word 0x00000000
  .word 0x24020063
  .word 0xae0201a0
  .word 0x10000056
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e0201a0
  .word 0x24420001
  .word 0xae0201a0
  .word 0x1000004c
  .word 0x00000000
  .word 0x30620008
  .word 0x10400006
  .word 0x00000000
  .word 0x8e0201a0
  .word 0x2442000a
  .word 0xae0201a0
  .word 0x10000044
  .word 0x00000000
  .word 0x30628000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e0201a0
  .word 0x2442ffff
  .word 0xae0201a0
  .word 0x1000003c
  .word 0x00000000
  .word 0x30620004
  .word 0x10400039
  .word 0x00000000
  .word 0x8e0201a0
  .word 0x2442fff6
  .word 0xae0201a0
  .word 0x10000034
  .word 0x00000000
  .word 0x8e030198
  .word 0x24020002
  .word 0x10620030
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x14400004
  .word 0x00000000
  .word 0x30628000
  .word 0x10400028
  .word 0x00000000
  .word 0x8e0201a4
  .word 0x00401026
  .word 0x2c420001
  .word 0xae0201a4
  .word 0x10000022
  .word 0x00000000
  .word 0x8e030198
  .word 0x24020002
  .word 0x1062001e
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x14400004
  .word 0x00000000
  .word 0x30628000
  .word 0x10400016
  .word 0x00000000
  .word 0x8e0201a8
  .word 0x00401026
  .word 0x2c420001
  .word 0xae0201a8
  .word 0x10000010
  .word 0x00000000
  .word 0x8e020198
  .word 0x1440000d
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x14400004
  .word 0x00000000
  .word 0x30628000
  .word 0x10400005
  .word 0x00000000
  .word 0x8e0201ac
  .word 0x00401026
  .word 0x2c420001
  .word 0xae0201ac
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_0037CF50


void FUN_0037cf50(u32 *param_1,u32 *param_2,u32 *param_3)



{

  u32 uVar1;

  u32 uVar2;
  struct Vec3 { f32 x; f32 y; f32 z; };

  u32 *puVar4;
  int iVar3;

  

  DAT_007ce5fc = 0;

  puVar4 = (u32 *)DAT_00958700_abs;
  iVar3 = 0x26;

  do {

    uVar1 = *param_1;

    uVar2 = param_1[1];

    param_1 = param_1 + 2;

    iVar3 = iVar3 + -1;

    *puVar4 = uVar1;

    puVar4[1] = uVar2;

    puVar4 = puVar4 + 2;

  } while (0 < iVar3);

  *(struct Vec3 *)DAT_009585b8_abs = *(struct Vec3 *)param_2;
  *(struct Vec3 *)DAT_009585a8_abs = *(struct Vec3 *)param_3;

  return;

}


/* opt_loop_invariants on: default nd749/1072B -> nd748/1052B; retained. */
#pragma opt_loop_invariants on
/* opt_propagation off: default nd748/1044B -> nd714/1044B; retained. */
#pragma push
#pragma opt_propagation off
/* W455 retail else-path continues through the shared output-counter
 * increment after the three vector stores; that tail is now represented. */
// FUN_0037CFE0


#ifndef PC_BUILD
asm void FUN_0037cfe0(void)
{
  .set noreorder
  .word 0x27bdff00
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x3c030096
  .word 0x90638701
  .word 0x28610008
  .word 0x1020012b
  .word 0x00000000
  .word 0x18600025
  .word 0x00000000
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000004
  .word 0x00000000
  .word 0x2463ffff
  .word 0x00031040
  .word 0x00438021
  .word 0x0000282d
  .word 0x00101040
  .word 0x00501021
  .word 0x00021880
  .word 0x3c020096
  .word 0x24428700
  .word 0x00432021
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
  .word 0x1000006f
  .word 0x00000000
  .word 0x3c020096
  .word 0xc44085b8
  .word 0xe7a000a0
  .word 0x3c020096
  .word 0xc44085bc
  .word 0xe7a00090
  .word 0x3c020096
  .word 0xc44085c0
  .word 0xe7a00080
  .word 0x27a40040
  .word 0x3c050096
  .word 0x24a585b8
  .word 0x3c060096
  .word 0x24c685a8
  .word 0x0c0ede68
  .word 0x00000000
  .word 0x27a500b0
  .word 0xc7a20060
  .word 0xc7a10064
  .word 0xc7a00068
  .word 0xe7a200b0
  .word 0xe7a100b4
  .word 0xe7a000b8
  .word 0x27a400c0
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c020096
  .word 0xc44285b8
  .word 0x3c020096
  .word 0xc44185bc
  .word 0x3c020096
  .word 0xc44085c0
  .word 0x3c020096
  .word 0xe4428704
  .word 0x3c020096
  .word 0xe4418708
  .word 0x3c020096
  .word 0xe440870c
  .word 0xc7a000c0
  .word 0x3c024348
  .word 0x44822000
  .word 0x00000000
  .word 0x46002202
  .word 0xc7818430
  .word 0x460808c2
  .word 0xe7a300d0
  .word 0xc7a000c4
  .word 0x460021c2
  .word 0x46070882
  .word 0xe7a200d4
  .word 0xc7a000c8
  .word 0x46002182
  .word 0x46060842
  .word 0xe7a100d8
  .word 0x3c020096
  .word 0xc44585b8
  .word 0x46032800
  .word 0x3c020096
  .word 0xe4408710
  .word 0x3c020096
  .word 0xc44485bc
  .word 0x46022000
  .word 0x3c020096
  .word 0xe4408714
  .word 0x3c020096
  .word 0xc44385c0
  .word 0x46011800
  .word 0x3c020096
  .word 0xe4408718
  .word 0xc7818434
  .word 0x46080802
  .word 0xe7a000d0
  .word 0x46070882
  .word 0xe7a200d4
  .word 0x46060842
  .word 0xe7a100d8
  .word 0x46002800
  .word 0x3c020096
  .word 0xe440871c
  .word 0x46022000
  .word 0x3c020096
  .word 0xe4408720
  .word 0x46011800
  .word 0x3c020096
  .word 0xe4408724
  .word 0xe7a800d0
  .word 0xe7a700d4
  .word 0xe7a600d8
  .word 0x46082800
  .word 0x3c020096
  .word 0xe4408728
  .word 0x46072000
  .word 0x3c020096
  .word 0xe440872c
  .word 0x46061800
  .word 0x3c020096
  .word 0xe4408730
  .word 0x3c04006a
  .word 0x2484fb20
  .word 0x0000282d
  .word 0x24060004
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c030096
  .word 0x90638701
  .word 0x24640001
  .word 0x3c030096
  .word 0xa0648701
  .word 0x10000097
  .word 0x00000000
  .word 0xc78c8128
  .word 0x27a400a0
  .word 0x27a50090
  .word 0x27a60080
  .word 0x27a700f0
  .word 0x27a800f4
  .word 0x27a900f8
  .word 0x0c0eef24
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x27a400a0
  .word 0x27a50090
  .word 0x27a60080
  .word 0x27a700e0
  .word 0x27a800e4
  .word 0x27a900e8
  .word 0x0c0eef24
  .word 0x00000000
  .word 0xc7a100e0
  .word 0xc7a000f0
  .word 0x46000801
  .word 0xe7a000d0
  .word 0xc7a100e4
  .word 0xc7a000f4
  .word 0x46000801
  .word 0xe7a000d4
  .word 0xc7a100e8
  .word 0xc7a000f8
  .word 0x46000801
  .word 0xe7a000d8
  .word 0x27a400c0
  .word 0x27a500d0
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7ac00d0
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040902d
  .word 0xc7ac00d4
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040882d
  .word 0xc7ac00d8
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484fb40
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0040382d
  .word 0x0c14896a
  .word 0x00000000
  .word 0xc7a000c0
  .word 0x3c034348
  .word 0x44832000
  .word 0x00000000
  .word 0x46002182
  .word 0xc7818430
  .word 0x460608c2
  .word 0xe7a300d0
  .word 0xc7a000c4
  .word 0x46002142
  .word 0x46050882
  .word 0xe7a200d4
  .word 0xc7a000c8
  .word 0x46002102
  .word 0x46040842
  .word 0xe7a100d8
  .word 0x00101840
  .word 0x00701821
  .word 0x00031880
  .word 0x3c040096
  .word 0x24848728
  .word 0x00833821
  .word 0xc4e00000
  .word 0x46030000
  .word 0x3c040096
  .word 0x24848734
  .word 0x00832021
  .word 0xe4800000
  .word 0x3c040096
  .word 0x2484872c
  .word 0x00833021
  .word 0xc4c00000
  .word 0x46020000
  .word 0x3c040096
  .word 0x24848738
  .word 0x00832021
  .word 0xe4800000
  .word 0x3c040096
  .word 0x24848730
  .word 0x00832821
  .word 0xc4a00000
  .word 0x46010000
  .word 0x3c040096
  .word 0x2484873c
  .word 0x00832021
  .word 0xe4800000
  .word 0xc7808434
  .word 0x460600c2
  .word 0xe7a300d0
  .word 0x46050082
  .word 0xe7a200d4
  .word 0x46040042
  .word 0xe7a100d8
  .word 0xc4e00000
  .word 0x46030000
  .word 0x3c040096
  .word 0x24848740
  .word 0x00832021
  .word 0xe4800000
  .word 0xc4c00000
  .word 0x46020000
  .word 0x3c040096
  .word 0x24848744
  .word 0x00832021
  .word 0xe4800000
  .word 0xc4a00000
  .word 0x46010000
  .word 0x3c040096
  .word 0x24848748
  .word 0x00832021
  .word 0xe4800000
  .word 0xe7a600d0
  .word 0xe7a500d4
  .word 0xe7a400d8
  .word 0xc4e00000
  .word 0x46060000
  .word 0x3c040096
  .word 0x2484874c
  .word 0x00832021
  .word 0xe4800000
  .word 0xc4c00000
  .word 0x46050000
  .word 0x3c040096
  .word 0x24848750
  .word 0x00832021
  .word 0xe4800000
  .word 0xc4a00000
  .word 0x46040000
  .word 0x3c040096
  .word 0x24848754
  .word 0x00831821
  .word 0xe4600000
  .word 0x3c030096
  .word 0x90638701
  .word 0x24640001
  .word 0x3c030096
  .word 0xa0648701
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0100
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_loop_invariants reset


// FUN_0037D4D0


u32 FUN_0037d4d0(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069fb58);

  return 2;

}


// FUN_0037D540

void FUN_0037d540(int param_1,int param_2,long param_3,int param_4)



{
  f32 uVar1;

  switch (param_3) {
  case 0:
    uVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));

    evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069fb70_abs, *(u8 *)(0x958700 + 1));
    break;
  default:
    break;
  }
  return;
}


/* opt_loop_invariants on: default nd1666/2300B -> nd1637/2268B; retained. */
#pragma opt_loop_invariants on
/* opt_lifetimes on: default nd1637/2268B -> nd1633/2268B; retained. */
#pragma push
#pragma opt_lifetimes on
// FUN_0037D5D0


#ifndef PC_BUILD
asm int FUN_0037d5d0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x00c0802d
  .word 0x27a30090
  .word 0x2402000c
  .word 0x10600008
  .word 0x00000000
  .word 0xa0600000
  .word 0x24630001
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x27a30080
  .word 0x2402000c
  .word 0x10600008
  .word 0x00000000
  .word 0xa0600000
  .word 0x24630001
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x0c0ed740
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000232
  .word 0x00000000
  .word 0x3c020038
  .word 0x2442d540
  .word 0xffa20000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24060014
  .word 0x24070004
  .word 0x0000402d
  .word 0x24090001
  .word 0x0200502d
  .word 0x3c0b0038
  .word 0x256bd4d0
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x0200202d
  .word 0x3c050096
  .word 0x24a58700
  .word 0x8f86b90c
  .word 0x0c0e564c
  .word 0x00000000
  .word 0x8e0300d4
  .word 0x2402001c
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000217
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0d8978
  .word 0x00000000
  .word 0x27a40090
  .word 0x27a50080
  .word 0x0c0e29f0
  .word 0x00000000
  .word 0x8f82b90c
  .word 0x00021840
  .word 0x00621821
  .word 0x00031880
  .word 0x3c060096
  .word 0x24c68700
  .word 0x00c31821
  .word 0x24710004
  .word 0x3c03007e
  .word 0x9465094c
  .word 0x30a30010
  .word 0x10600110
  .word 0x00000000
  .word 0x3c030096
  .word 0x90658701
  .word 0x00051840
  .word 0x00651821
  .word 0x24700001
  .word 0x3c03007e
  .word 0x9464094e
  .word 0x30830008
  .word 0x10600005
  .word 0x00000000
  .word 0x0c0df3f8
  .word 0x00000000
  .word 0x10000028
  .word 0x00000000
  .word 0x30830002
  .word 0x10600015
  .word 0x00000000
  .word 0x1ca00005
  .word 0x00000000
  .word 0x3c030096
  .word 0xa0608701
  .word 0x10000004
  .word 0x00000000
  .word 0x24a4ffff
  .word 0x3c030096
  .word 0xa0648701
  .word 0x3c030096
  .word 0x90648701
  .word 0x00041840
  .word 0x00642021
  .word 0x24830001
  .word 0x0043102a
  .word 0x14400014
  .word 0x00000000
  .word 0xaf84b90c
  .word 0x10000011
  .word 0x00000000
  .word 0x30820080
  .word 0x1040000e
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000008
  .word 0x00000000
  .word 0xc6200004
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00c21021
  .word 0xe4400008
  .word 0x24630001
  .word 0x0070102a
  .word 0x1440fff7
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9444094c
  .word 0x30821000
  .word 0x10400021
  .word 0x00000000
  .word 0x0000282d
  .word 0x3c0240a0
  .word 0x44820800
  .word 0xc7a00090
  .word 0x460008c2
  .word 0xc7a00094
  .word 0x46000882
  .word 0xc7a00098
  .word 0x46000842
  .word 0x3c030096
  .word 0x24638700
  .word 0x1000000f
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00021080
  .word 0x00621021
  .word 0xc4400004
  .word 0x46030000
  .word 0xe4400004
  .word 0xc4400008
  .word 0x46020000
  .word 0xe4400008
  .word 0xc440000c
  .word 0x46010000
  .word 0xe440000c
  .word 0x24a50001
  .word 0x00b0102a
  .word 0x1440fff0
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0x30824000
  .word 0x1040001f
  .word 0x00000000
  .word 0x0000282d
  .word 0x3c0240a0
  .word 0x44820800
  .word 0xc7a00090
  .word 0x460008c2
  .word 0xc7a00094
  .word 0x46000882
  .word 0xc7a00098
  .word 0x46000842
  .word 0x3c030096
  .word 0x24638700
  .word 0x1000000f
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00021080
  .word 0x00621021
  .word 0xc4400004
  .word 0x46030001
  .word 0xe4400004
  .word 0xc4400008
  .word 0x46020001
  .word 0xe4400008
  .word 0xc440000c
  .word 0x46010001
  .word 0xe440000c
  .word 0x24a50001
  .word 0x00b0102a
  .word 0x1440fff0
  .word 0x00000000
  .word 0x30822000
  .word 0x10400021
  .word 0x00000000
  .word 0x0000202d
  .word 0x3c0240a0
  .word 0x44820800
  .word 0xc7a00080
  .word 0x460008c2
  .word 0xc7a00084
  .word 0x46000882
  .word 0xc7a00088
  .word 0x46000842
  .word 0x3c030096
  .word 0x24638700
  .word 0x1000000f
  .word 0x00000000
  .word 0x00041040
  .word 0x00441021
  .word 0x00021080
  .word 0x00621021
  .word 0xc4400004
  .word 0x46030001
  .word 0xe4400004
  .word 0xc4400008
  .word 0x46020001
  .word 0xe4400008
  .word 0xc440000c
  .word 0x46010001
  .word 0xe440000c
  .word 0x24840001
  .word 0x0090102a
  .word 0x1440fff0
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0x30828000
  .word 0x1040001f
  .word 0x00000000
  .word 0x0000202d
  .word 0x3c0240a0
  .word 0x44820800
  .word 0xc7a00080
  .word 0x460008c2
  .word 0xc7a00084
  .word 0x46000882
  .word 0xc7a00088
  .word 0x46000842
  .word 0x3c030096
  .word 0x24638700
  .word 0x1000000f
  .word 0x00000000
  .word 0x00041040
  .word 0x00441021
  .word 0x00021080
  .word 0x00621021
  .word 0xc4400004
  .word 0x46030000
  .word 0xe4400004
  .word 0xc4400008
  .word 0x46020000
  .word 0xe4400008
  .word 0xc440000c
  .word 0x46010000
  .word 0xe440000c
  .word 0x24840001
  .word 0x0090102a
  .word 0x1440fff0
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94440952
  .word 0x30820004
  .word 0x10400015
  .word 0x00000000
  .word 0x0000282d
  .word 0x3c030096
  .word 0x24638700
  .word 0x3c0240a0
  .word 0x44820800
  .word 0x10000009
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00021080
  .word 0x00621021
  .word 0xc4400008
  .word 0x46010000
  .word 0xe4400008
  .word 0x24a50001
  .word 0x00b0102a
  .word 0x1440fff6
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x30820001
  .word 0x10400013
  .word 0x00000000
  .word 0x0000282d
  .word 0x3c030096
  .word 0x24638700
  .word 0x3c0240a0
  .word 0x44820800
  .word 0x10000009
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00021080
  .word 0x00621021
  .word 0xc4400008
  .word 0x46010001
  .word 0xe4400008
  .word 0x24a50001
  .word 0x00b0102a
  .word 0x1440fff6
  .word 0x00000000
  .word 0x30820100
  .word 0x1040000f
  .word 0x00000000
  .word 0x3c050096
  .word 0x24a58700
  .word 0x3c040096
  .word 0x248485d0
  .word 0x24030013
  .word 0x78a20000
  .word 0x24a50010
  .word 0x2463ffff
  .word 0x7c820000
  .word 0x24840010
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x100000fa
  .word 0x00000000
  .word 0x30820800
  .word 0x104000f7
  .word 0x00000000
  .word 0x3c050096
  .word 0x24a585d0
  .word 0x3c040096
  .word 0x24848700
  .word 0x24030013
  .word 0x78a20000
  .word 0x24a50010
  .word 0x2463ffff
  .word 0x7c820000
  .word 0x24840010
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x100000e9
  .word 0x00000000
  .word 0x3c03007e
  .word 0x94640952
  .word 0x30830008
  .word 0x1060000f
  .word 0x00000000
  .word 0x3c030096
  .word 0x90648701
  .word 0x00041840
  .word 0x00641821
  .word 0x0043082a
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xaf82b90c
  .word 0x10000012
  .word 0x00000000
  .word 0xaf80b90c
  .word 0x1000000f
  .word 0x00000000
  .word 0x30830002
  .word 0x1060000c
  .word 0x00000000
  .word 0x18400005
  .word 0x00000000
  .word 0x2442ffff
  .word 0xaf82b90c
  .word 0x10000006
  .word 0x00000000
  .word 0x3c020096
  .word 0x90438701
  .word 0x00031040
  .word 0x00431021
  .word 0xaf82b90c
  .word 0x30a21000
  .word 0x10400016
  .word 0x00000000
  .word 0x3c0240a0
  .word 0x44821800
  .word 0xc7a10090
  .word 0xc6200000
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4601181c
  .word 0xe6200000
  .word 0xc7a10094
  .word 0xc6200004
  .word 0x46001018
  .word 0x4601181c
  .word 0xe6200004
  .word 0xc7a10098
  .word 0xc6200008
  .word 0x46001018
  .word 0x4601181c
  .word 0xe6200008
  .word 0x10000017
  .word 0x00000000
  .word 0x30a24000
  .word 0x10400014
  .word 0x00000000
  .word 0x3c0240a0
  .word 0x44821800
  .word 0xc7a10090
  .word 0xc6200000
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4601181d
  .word 0xe6200000
  .word 0xc7a10094
  .word 0xc6200004
  .word 0x46001018
  .word 0x4601181d
  .word 0xe6200004
  .word 0xc7a10098
  .word 0xc6200008
  .word 0x46001018
  .word 0x4601181d
  .word 0xe6200008
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x30622000
  .word 0x10400016
  .word 0x00000000
  .word 0x3c0240a0
  .word 0x44821800
  .word 0xc7a10080
  .word 0xc6200000
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4601181d
  .word 0xe6200000
  .word 0xc7a10084
  .word 0xc6200004
  .word 0x46001018
  .word 0x4601181d
  .word 0xe6200004
  .word 0xc7a10088
  .word 0xc6200008
  .word 0x46001018
  .word 0x4601181d
  .word 0xe6200008
  .word 0x10000017
  .word 0x00000000
  .word 0x30628000
  .word 0x10400014
  .word 0x00000000
  .word 0x3c0240a0
  .word 0x44821800
  .word 0xc7a10080
  .word 0xc6200000
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4601181c
  .word 0xe6200000
  .word 0xc7a10084
  .word 0xc6200004
  .word 0x46001018
  .word 0x4601181c
  .word 0xe6200004
  .word 0xc7a10088
  .word 0xc6200008
  .word 0x46001018
  .word 0x4601181c
  .word 0xe6200008
  .word 0x3c02007e
  .word 0x9442094c
  .word 0x30420080
  .word 0x1040001f
  .word 0x00000000
  .word 0x27a40050
  .word 0xc6220000
  .word 0xc6210004
  .word 0xc6200008
  .word 0xe7a20050
  .word 0xe7a10054
  .word 0xe7a00058
  .word 0xe7a2005c
  .word 0xe7a10060
  .word 0xe7a00064
  .word 0xc7a10060
  .word 0x3c02447a
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a00060
  .word 0x27a50070
  .word 0x0c06b30c
  .word 0x00000000
  .word 0x24030001
  .word 0x1443001f
  .word 0x00000000
  .word 0xc7a20070
  .word 0xc7a10074
  .word 0xc7a00078
  .word 0xe6220000
  .word 0xe6210004
  .word 0xe6200008
  .word 0x10000017
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30620004
  .word 0x10400009
  .word 0x00000000
  .word 0xc6210004
  .word 0x3c0240a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe6200004
  .word 0x1000000a
  .word 0x00000000
  .word 0x30620001
  .word 0x10400007
  .word 0x00000000
  .word 0xc6210004
  .word 0x3c0240a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe6200004
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30620100
  .word 0x10400019
  .word 0x00000000
  .word 0x8f83b90c
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x3c020096
  .word 0x24428704
  .word 0x00431021
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0x3c020096
  .word 0xe4428840
  .word 0x3c020096
  .word 0xe4418844
  .word 0x3c020096
  .word 0xe4408848
  .word 0x3c020096
  .word 0xac408838
  .word 0x3c020096
  .word 0xac408834
  .word 0x3c020096
  .word 0xac408830
  .word 0x10000014
  .word 0x00000000
  .word 0x30620800
  .word 0x10400011
  .word 0x00000000
  .word 0x8f83b90c
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x3c020096
  .word 0x24428704
  .word 0x00431821
  .word 0x3c020096
  .word 0xc4428840
  .word 0x3c020096
  .word 0xc4418844
  .word 0x3c020096
  .word 0xc4408848
  .word 0xe4620000
  .word 0xe4610004
  .word 0xe4600008
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_loop_invariants reset


// FUN_0037DF50


u32 FUN_0037df50(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069fb88);

  return 2;

}


// FUN_0037DFC0


void FUN_0037dfc0(int column, int row, int item, int menu)
{
  typedef union EvtMenuLabel {
    f32 storage;
    u8 *text;
  } EvtMenuLabel;
  u32 colour = 0;
  EvtMenuLabel labels[2];

  *(RwV2d *)labels = *(RwV2d *)&PTR_s_DIRECT_007cd258_f32;

  if (*(int *)(menu + 0x190) == item) {
    colour = 4;
  }

  switch (item) {
  case 0:
    if (*(int *)(menu + 0x198) < 2) {
      int y = row * 0xc;
      int x = column * 0xc;
      f32 scale = FUN_0038a220(*(u32 *)(menu + 0xe0));

      evtMenuDrawText(x, y, scale, 0, (const char *)&gp0xffff9fb8);
      scale = FUN_0038a220(*(u32 *)(menu + 0xe0));
      evtMenuDrawText(x, y, scale, colour, (const char *)DAT_0069fb98_abs,
                      labels[*(int *)(menu + 0x198)].text);
    }
    break;

  case 1:
    {
      int y = row * 0xc;
      int x = column * 0xc;
      u8 *detail;
      f32 scale = FUN_0038a220(*(u32 *)(menu + 0xe0));

      evtMenuDrawText(x, y, scale, 0, (const char *)&gp0xffffa570);
      scale = FUN_0038a220(*(u32 *)(menu + 0xe0));
      evtMenuDrawText(x, y, scale, colour, (const char *)DAT_0069fba8_abs,
                      *(u32 *)(menu + 0x19c));

      if (*(int *)(menu + 0x198) == 1) {
        detail = 0;
        if (FUN_00397630(menu, *(u32 *)(menu + 0x19c), &detail) == 1) {
          scale = FUN_0038a220(*(u32 *)(menu + 0xe0));
          evtMenuDrawText(x, y, scale, colour,
                          (const char *)DAT_0069fbc0_abs, detail);
        }
      }
    }
    break;
  }
}


/* opt_lifetimes on: default nd397/556B -> nd384/556B; retained. */
#pragma push
#pragma opt_lifetimes on
// FUN_0037E1B0


#ifndef PC_BUILD
asm int FUN_0037e1b0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00c0882d
  .word 0x0000802d
  .word 0x3c020038
  .word 0x2442dfc0
  .word 0xffa20000
  .word 0x24060014
  .word 0x24070005
  .word 0x0000402d
  .word 0x24090001
  .word 0x0220502d
  .word 0x3c0b0038
  .word 0x256bdf50
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e2300d4
  .word 0x2402001d
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000072
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e220190
  .word 0x14400005
  .word 0x00000000
  .word 0x24020001
  .word 0xae220190
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae220190
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e230190
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0xae200190
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae220190
  .word 0x8e220190
  .word 0x24040001
  .word 0x10440023
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000043
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e220198
  .word 0x1c400005
  .word 0x00000000
  .word 0x24420001
  .word 0xae220198
  .word 0x10000002
  .word 0x00000000
  .word 0xae200198
  .word 0xae20019c
  .word 0x10000033
  .word 0x00000000
  .word 0x30628000
  .word 0x10400030
  .word 0x00000000
  .word 0x8e220198
  .word 0x14400004
  .word 0x00000000
  .word 0xae240198
  .word 0x10000003
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae220198
  .word 0xae20019c
  .word 0x10000025
  .word 0x00000000
  .word 0x8e220198
  .word 0x14400004
  .word 0x00000000
  .word 0x24100019
  .word 0x10000004
  .word 0x00000000
  .word 0x14440002
  .word 0x00000000
  .word 0x2410000a
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e22019c
  .word 0x24420001
  .word 0xae22019c
  .word 0x10000007
  .word 0x00000000
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e22019c
  .word 0x2442ffff
  .word 0xae22019c
  .word 0x8e23019c
  .word 0x0070102a
  .word 0x14400004
  .word 0x00000000
  .word 0xae20019c
  .word 0x10000005
  .word 0x00000000
  .word 0x04610003
  .word 0x00000000
  .word 0x2602ffff
  .word 0xae22019c
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop


// FUN_0037E3F0


u32 FUN_0037e3f0(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));
  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069fbd8);

  return 2;

}


// FUN_0037E460
void FUN_0037e460(u32 param_1,u32 param_2,u32 param_3,u8 *param_4)
{
  RwV2d local0;
  u32 local1_3;
  u32 local1_2;
  u32 local1_1;
  u32 local1_0;
  int iVar3;
  f32 fVar1;
  iVar3 = 0;
  local0 = *(RwV2d *)&gp0xffffa578_f32v;
  if (*(int *)(param_4 + 0x190) == (int)param_3) {
    iVar3 = 4;
  }
  switch (param_3) {
  case 0: {
    s32 scaledY = param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, fVar1, 0, (const char *)&gp0xffffa580);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((param_1 + 0xa) * 0xc, scaledY, fVar1, iVar3, (const char *)&gp0xffffa588, *(u32 *)(param_4 + 0x198));
    break;
  }
  case 1: {
    s32 scaledY = param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, fVar1, 0, (const char *)&gp0xffffa590);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((param_1 + 0xa) * 0xc, scaledY, fVar1, iVar3, (const char *)&gp0xffffa588, *(u32 *)(param_4 + 0x19c));
    break;
  }
  case 2: {
    if (*(int *)(param_4 + 0x1a0) < 2) {
      s32 scaledY = param_2 * 0xc;
      fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
      evtMenuDrawText(param_1 * 0xc, scaledY, fVar1, 0, (const char *)&gp0xffffa570);
      fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
      evtMenuDrawText((param_1 + 0xa) * 0xc, scaledY, fVar1, iVar3, (const char *)&gp0xffffa598, ((u32 *)&local0)[*(int *)(param_4 + 0x1a0)]);
    }
    break;
  }
  case 3: {
    s32 scaledY = param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, fVar1, 0, (const char *)&gp0xffffa5a0);
    if (*(int *)(param_4 + 0x1a0) == 0) {
      fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
      evtMenuDrawText((param_1 + 0xa) * 0xc, scaledY, fVar1, iVar3, (const char *)&gp0xffffa588, *(u32 *)(param_4 + 0x1a4));
    }
    else {
      fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
      evtMenuDrawText((param_1 + 0xa) * 0xc, scaledY, fVar1, iVar3, (const char *)&gp0xffffa5a8);
    }
    break;
  }
  case 4: {
    s32 scaledY = param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, fVar1, 0, (const char *)&gp0xffffa5b0);
    if (*(int *)(param_4 + 0x1a0) == 0) {
      fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
      evtMenuDrawText((param_1 + 0xa) * 0xc, scaledY, fVar1, iVar3, (const char *)&gp0xffffa588, *(u32 *)(param_4 + 0x1a8));
    }
    else {
      fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
      evtMenuDrawText((param_1 + 0xa) * 0xc, scaledY, fVar1, iVar3, (const char *)&gp0xffffa5a8);
    }
    break;
  }
  case 5: {
    s32 scaledY = param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, fVar1, 0, (const char *)&gp0xffffa5b8);
    if (*(int *)(param_4 + 0x1a0) == 0) {
      fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
      evtMenuDrawText((param_1 + 0xa) * 0xc, scaledY, fVar1, iVar3, (const char *)&gp0xffffa588, *(u32 *)(param_4 + 0x1ac));
    }
    else {
      fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
      evtMenuDrawText((param_1 + 0xa) * 0xc, scaledY, fVar1, iVar3, (const char *)&gp0xffffa5a8);
    }
    break;
  }
  case 6: {
    s32 scaledY = param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, fVar1, 0, (const char *)&gp0xffffa5c8);
    if (*(int *)(param_4 + 0x1a0) == 0) {
      fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
      evtMenuDrawText((param_1 + 0xa) * 0xc, scaledY, fVar1, iVar3, (const char *)&gp0xffffa588, *(u32 *)(param_4 + 0x1b0));
    }
    else {
      fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
      evtMenuDrawText((param_1 + 0xa) * 0xc, scaledY, fVar1, iVar3, (const char *)&gp0xffffa5a8);
    }
    break;
  }
  case 7: {
    s32 scaledY = param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, fVar1, 0, (const char *)&gp0xffffa5d0);
    if (*(int *)(param_4 + 0x1a0) == 0) {
      fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
      evtMenuDrawText((param_1 + 0xa) * 0xc, scaledY, fVar1, iVar3, (const char *)&gp0xffffa588);
    }
    else {
      if (FUN_00397870_i((int)param_4,*(int *)(param_4 + 0x1b4),&local1_3,&local1_2,&local1_1,&local1_0) == 1) {
        fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
        evtMenuDrawText((param_1 + 0xa) * 0xc, scaledY, fVar1, iVar3, (const char *)DAT_0069fbf0, *(u32 *)(param_4 + 0x1b4), local1_3, local1_2, local1_1, local1_0);
      }
      else {
        fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
        evtMenuDrawText((param_1 + 0xa) * 0xc, scaledY, fVar1, iVar3, (const char *)DAT_0069fc10);
      }
    }
    break;
  }
  }
}


// FUN_0037EAD0
#ifndef PC_BUILD
asm int FUN_0037ead0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00c0882d
  .word 0x0000802d
  .word 0x3c020038
  .word 0x2442e460
  .word 0xffa20000
  .word 0x24060019
  .word 0x2407000b
  .word 0x0000402d
  .word 0x24090001
  .word 0x0220502d
  .word 0x3c0b0038
  .word 0x256be3f0
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e2300d4
  .word 0x2402001e
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000142
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e220190
  .word 0x14400005
  .word 0x00000000
  .word 0x24020007
  .word 0xae220190
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae220190
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e230190
  .word 0x24020007
  .word 0x14620004
  .word 0x00000000
  .word 0xae200190
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae220190
  .word 0x8e220190
  .word 0x2c410008
  .word 0x10200117
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463aa10
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000011
  .word 0x00000000
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x2410ffff
  .word 0x1000000b
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x2410fff6
  .word 0x10000005
  .word 0x00000000
  .word 0x30620008
  .word 0x10400002
  .word 0x00000000
  .word 0x2410000a
  .word 0x8e220198
  .word 0x00501821
  .word 0xae230198
  .word 0x28620200
  .word 0x14400005
  .word 0x00000000
  .word 0x24020200
  .word 0xae220198
  .word 0x100000ee
  .word 0x00000000
  .word 0x2861fe00
  .word 0x102000eb
  .word 0x00000000
  .word 0x2402fe00
  .word 0xae220198
  .word 0x100000e7
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000011
  .word 0x00000000
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x2410ffff
  .word 0x1000000b
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x2410fff6
  .word 0x10000005
  .word 0x00000000
  .word 0x30620008
  .word 0x10400002
  .word 0x00000000
  .word 0x2410000a
  .word 0x8e22019c
  .word 0x00501821
  .word 0xae23019c
  .word 0x28620200
  .word 0x14400005
  .word 0x00000000
  .word 0x24020200
  .word 0xae22019c
  .word 0x100000c5
  .word 0x00000000
  .word 0x2861fe00
  .word 0x102000c2
  .word 0x00000000
  .word 0x2402fe00
  .word 0xae22019c
  .word 0x100000be
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x1040000b
  .word 0x00000000
  .word 0x8e2201a0
  .word 0x1c400005
  .word 0x00000000
  .word 0x24420001
  .word 0xae2201a0
  .word 0x10000010
  .word 0x00000000
  .word 0xae2001a0
  .word 0x1000000d
  .word 0x00000000
  .word 0x30628000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e2201a0
  .word 0x14400005
  .word 0x00000000
  .word 0x24020001
  .word 0xae2201a0
  .word 0x10000003
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae2201a0
  .word 0x8e2301a0
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000009b
  .word 0x00000000
  .word 0xae2001b4
  .word 0x10000098
  .word 0x00000000
  .word 0xae2001a4
  .word 0xae2001a8
  .word 0xae2001ac
  .word 0xae2001b0
  .word 0x10000092
  .word 0x00000000
  .word 0x8e2201a0
  .word 0x1440008f
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000005
  .word 0x00000000
  .word 0x30628000
  .word 0x10400002
  .word 0x00000000
  .word 0x2410ffff
  .word 0x8e2201a4
  .word 0x00501021
  .word 0xae2201a4
  .word 0x28410100
  .word 0x14200005
  .word 0x00000000
  .word 0x240200ff
  .word 0xae2201a4
  .word 0x10000079
  .word 0x00000000
  .word 0x04410077
  .word 0x00000000
  .word 0xae2001a4
  .word 0x10000074
  .word 0x00000000
  .word 0x8e2201a0
  .word 0x14400071
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000005
  .word 0x00000000
  .word 0x30628000
  .word 0x10400002
  .word 0x00000000
  .word 0x2410ffff
  .word 0x8e2201a8
  .word 0x00501021
  .word 0xae2201a8
  .word 0x28410100
  .word 0x14200005
  .word 0x00000000
  .word 0x240200ff
  .word 0xae2201a8
  .word 0x1000005b
  .word 0x00000000
  .word 0x04410059
  .word 0x00000000
  .word 0xae2001a8
  .word 0x10000056
  .word 0x00000000
  .word 0x8e2201a0
  .word 0x14400053
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000005
  .word 0x00000000
  .word 0x30628000
  .word 0x10400002
  .word 0x00000000
  .word 0x2410ffff
  .word 0x8e2201ac
  .word 0x00501021
  .word 0xae2201ac
  .word 0x28410010
  .word 0x14200005
  .word 0x00000000
  .word 0x2402000f
  .word 0xae2201ac
  .word 0x1000003d
  .word 0x00000000
  .word 0x0441003b
  .word 0x00000000
  .word 0xae2001ac
  .word 0x10000038
  .word 0x00000000
  .word 0x8e2201a0
  .word 0x14400035
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000005
  .word 0x00000000
  .word 0x30628000
  .word 0x10400002
  .word 0x00000000
  .word 0x2410ffff
  .word 0x8e2201b0
  .word 0x00501021
  .word 0xae2201b0
  .word 0x28410010
  .word 0x14200005
  .word 0x00000000
  .word 0x2402000f
  .word 0xae2201b0
  .word 0x1000001f
  .word 0x00000000
  .word 0x0441001d
  .word 0x00000000
  .word 0xae2001b0
  .word 0x1000001a
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000005
  .word 0x00000000
  .word 0x30628000
  .word 0x10400002
  .word 0x00000000
  .word 0x2410ffff
  .word 0x8e2201b4
  .word 0x00501021
  .word 0xae2201b4
  .word 0x2841000a
  .word 0x14200005
  .word 0x00000000
  .word 0x24020009
  .word 0xae2201b4
  .word 0x10000004
  .word 0x00000000
  .word 0x04410002
  .word 0x00000000
  .word 0xae2001b4
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_0037F050


u32 FUN_0037f050(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069fc20_abs);

  return 2;

}


/* opt_lifetimes on: default nd504/780B -> nd503/780B; retained. */
#pragma push
#pragma opt_lifetimes on
// FUN_0037F0C0


#ifndef PC_BUILD
asm void FUN_0037f0c0(int param_1,int param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0982d
  .word 0x00e0882d
  .word 0x0000802d
  .word 0xc781a5e0
  .word 0xc780a5e4
  .word 0xe7a10068
  .word 0xe7a0006c
  .word 0x8ce30190
  .word 0x14660002
  .word 0x00000000
  .word 0x24100004
  .word 0x24030002
  .word 0x10c3007b
  .word 0x00000000
  .word 0x24030001
  .word 0x10c3003c
  .word 0x00000000
  .word 0x10c00003
  .word 0x00000000
  .word 0x1000009d
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00029880
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a5e8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e240198
  .word 0x24030001
  .word 0x10830015
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000086
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26430009
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x3c07006a
  .word 0x24e7fc30
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000076
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26430009
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x3c07006a
  .word 0x24e7efc8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000066
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x0002a080
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0280282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a528
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e240198
  .word 0x24030001
  .word 0x1083001b
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000004f
  .word 0x00000000
  .word 0x8e33019c
  .word 0x2a610002
  .word 0x1020004b
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26430009
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x00131080
  .word 0x005d1021
  .word 0x0280282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a068
  .word 0x8c480068
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000039
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26430009
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0280282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a5f0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000002a
  .word 0x00000000
  .word 0x8e240198
  .word 0x24030001
  .word 0x10830017
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26430009
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x46000306
  .word 0x0200302d
  .word 0x3c07006a
  .word 0x24e7fc40
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26430009
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x00131040
  .word 0x00531021
  .word 0x00022880
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a5f8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0xdfbf0050
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
#pragma pop


// FUN_0037F3D0


#ifndef PC_BUILD
asm int FUN_0037f3d0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb00010
  .word 0x00c0802d
  .word 0x3c020038
  .word 0x2442f0c0
  .word 0xffa20000
  .word 0x24060014
  .word 0x24070005
  .word 0x0000402d
  .word 0x24090001
  .word 0x0200502d
  .word 0x3c0b0038
  .word 0x256bf050
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e0300d4
  .word 0x2402001f
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000068
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e020190
  .word 0x14400005
  .word 0x00000000
  .word 0x24020002
  .word 0xae020190
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae020190
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e030190
  .word 0x24020002
  .word 0x14620004
  .word 0x00000000
  .word 0xae000190
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae020190
  .word 0x8e020190
  .word 0x24040001
  .word 0x10440023
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000039
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e020198
  .word 0x1c400005
  .word 0x00000000
  .word 0x24420001
  .word 0xae020198
  .word 0x10000002
  .word 0x00000000
  .word 0xae000198
  .word 0xae00019c
  .word 0x10000029
  .word 0x00000000
  .word 0x30628000
  .word 0x10400026
  .word 0x00000000
  .word 0x8e020198
  .word 0x14400004
  .word 0x00000000
  .word 0xae040198
  .word 0x10000003
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae020198
  .word 0xae00019c
  .word 0x1000001b
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x1040000b
  .word 0x00000000
  .word 0x8e02019c
  .word 0x1c400005
  .word 0x00000000
  .word 0x24420001
  .word 0xae02019c
  .word 0x1000000f
  .word 0x00000000
  .word 0xae00019c
  .word 0x1000000c
  .word 0x00000000
  .word 0x30628000
  .word 0x10400009
  .word 0x00000000
  .word 0x8e02019c
  .word 0x14400004
  .word 0x00000000
  .word 0xae04019c
  .word 0x10000003
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae02019c
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0020
  .word 0x7bb00010
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_0037F5E0


u32 FUN_0037f5e0(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069fc50);

  return 2;

}


// FUN_0037F650


void FUN_0037f650(int param_1,int param_2,u32 param_3,u8 *param_4)
{
  int iVar3;


  f32 fVar1;

  iVar3 = 0;
  if (*(int *)(param_4 + 0x190) == (int)param_3) {
    iVar3 = 4;
  }

  switch (param_3) {
  case 0: {
    s32 scaledY = (int)param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)(param_1 * 0xc), scaledY, fVar1, 0, (const char *)DAT_0069fc68);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)((param_1 + 0xd) * 0xc), scaledY, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x198));
    break;
  }
  case 1: {
    s32 scaledY = (int)param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)(param_1 * 0xc), scaledY, fVar1, 0, (const char *)DAT_0069fc78);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)((param_1 + 0xd) * 0xc), scaledY, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x19c));
    break;
  }
  case 2: {
    s32 scaledY = (int)param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)(param_1 * 0xc), scaledY, fVar1, 0, (const char *)DAT_0069fc88);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)((param_1 + 0xd) * 0xc), scaledY, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1a0));
    break;
  }
  case 3: {
    s32 scaledY = (int)param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)(param_1 * 0xc), scaledY, fVar1, 0, (const char *)DAT_0069fc98);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)((param_1 + 0xd) * 0xc), scaledY, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1a4));
    break;
  }
  case 4: {
    s32 scaledY = ((int)param_2 + 1) * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)(param_1 * 0xc), scaledY, fVar1, 0, (const char *)DAT_0069fca8);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)((param_1 + 0xd) * 0xc), scaledY, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1a8));
    break;
  }
  case 5: {
    s32 scaledY = ((int)param_2 + 1) * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)(param_1 * 0xc), scaledY, fVar1, 0, (const char *)DAT_0069fcb8);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)((param_1 + 0xd) * 0xc), scaledY, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1ac));
    break;
  }
  case 6: {
    s32 scaledY = ((int)param_2 + 1) * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)(param_1 * 0xc), scaledY, fVar1, 0, (const char *)DAT_0069fcc8);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)((param_1 + 0xd) * 0xc), scaledY, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1b0));
    break;
  }
  case 7: {
    s32 scaledY = ((int)param_2 + 1) * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)(param_1 * 0xc), scaledY, fVar1, 0, (const char *)DAT_0069fcd8);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)((param_1 + 0xd) * 0xc), scaledY, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1b4));
    break;
  }
  }
}


// FUN_0037FAE0


#ifndef PC_BUILD
asm int FUN_0037fae0(u64 param_1,u64 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00c0902d
  .word 0x0000882d
  .word 0x0000802d
  .word 0x3c020038
  .word 0x2442f650
  .word 0xffa20000
  .word 0x24060017
  .word 0x2407000c
  .word 0x0000402d
  .word 0x24090001
  .word 0x0240502d
  .word 0x3c0b0038
  .word 0x256bf5e0
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e4300d4
  .word 0x24020020
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000eb
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e420190
  .word 0x14400005
  .word 0x00000000
  .word 0x24020007
  .word 0xae420190
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae420190
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e430190
  .word 0x24020007
  .word 0x14620004
  .word 0x00000000
  .word 0xae400190
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae420190
  .word 0x8e420190
  .word 0x2c410008
  .word 0x102000c0
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484aa50
  .word 0x00021880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x3c03007e
  .word 0x94640952
  .word 0x30832000
  .word 0x10600004
  .word 0x00000000
  .word 0x24110001
  .word 0x1000001d
  .word 0x00000000
  .word 0x30830008
  .word 0x10600004
  .word 0x00000000
  .word 0x2411000a
  .word 0x10000017
  .word 0x00000000
  .word 0x30830002
  .word 0x10600004
  .word 0x00000000
  .word 0x24110064
  .word 0x10000011
  .word 0x00000000
  .word 0x30838000
  .word 0x10600004
  .word 0x00000000
  .word 0x2411ffff
  .word 0x1000000b
  .word 0x00000000
  .word 0x30830004
  .word 0x10600004
  .word 0x00000000
  .word 0x2411fff6
  .word 0x10000005
  .word 0x00000000
  .word 0x30830001
  .word 0x10600002
  .word 0x00000000
  .word 0x2411ff9c
  .word 0x24030003
  .word 0x10430014
  .word 0x00000000
  .word 0x24030002
  .word 0x1043000e
  .word 0x00000000
  .word 0x24030001
  .word 0x10430008
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e500198
  .word 0x10000008
  .word 0x00000000
  .word 0x8e50019c
  .word 0x10000005
  .word 0x00000000
  .word 0x8e5001a0
  .word 0x10000002
  .word 0x00000000
  .word 0x8e5001a4
  .word 0x02118021
  .word 0x2a010065
  .word 0x14200002
  .word 0x00000000
  .word 0x24100064
  .word 0x06010002
  .word 0x00000000
  .word 0x0000802d
  .word 0x24030003
  .word 0x10430014
  .word 0x00000000
  .word 0x24030002
  .word 0x1043000e
  .word 0x00000000
  .word 0x24030001
  .word 0x10430008
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000069
  .word 0x00000000
  .word 0xae500198
  .word 0x10000066
  .word 0x00000000
  .word 0xae50019c
  .word 0x10000063
  .word 0x00000000
  .word 0xae5001a0
  .word 0x10000060
  .word 0x00000000
  .word 0xae5001a4
  .word 0x1000005d
  .word 0x00000000
  .word 0x3c03007e
  .word 0x94640952
  .word 0x30832000
  .word 0x10600004
  .word 0x00000000
  .word 0x24110001
  .word 0x1000001d
  .word 0x00000000
  .word 0x30830008
  .word 0x10600004
  .word 0x00000000
  .word 0x2411000a
  .word 0x10000017
  .word 0x00000000
  .word 0x30830002
  .word 0x10600004
  .word 0x00000000
  .word 0x24110064
  .word 0x10000011
  .word 0x00000000
  .word 0x30838000
  .word 0x10600004
  .word 0x00000000
  .word 0x2411ffff
  .word 0x1000000b
  .word 0x00000000
  .word 0x30830004
  .word 0x10600004
  .word 0x00000000
  .word 0x2411fff6
  .word 0x10000005
  .word 0x00000000
  .word 0x30830001
  .word 0x10600002
  .word 0x00000000
  .word 0x2411ff9c
  .word 0x24030007
  .word 0x10430015
  .word 0x00000000
  .word 0x24030006
  .word 0x1043000f
  .word 0x00000000
  .word 0x24030005
  .word 0x10430009
  .word 0x00000000
  .word 0x24030004
  .word 0x10430003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e5001a8
  .word 0x10000008
  .word 0x00000000
  .word 0x8e5001ac
  .word 0x10000005
  .word 0x00000000
  .word 0x8e5001b0
  .word 0x10000002
  .word 0x00000000
  .word 0x8e5001b4
  .word 0x02118021
  .word 0x2a017531
  .word 0x14200002
  .word 0x00000000
  .word 0x24107530
  .word 0x06010002
  .word 0x00000000
  .word 0x0000802d
  .word 0x24030007
  .word 0x10430015
  .word 0x00000000
  .word 0x24030006
  .word 0x1043000f
  .word 0x00000000
  .word 0x24030005
  .word 0x10430009
  .word 0x00000000
  .word 0x24030004
  .word 0x10430003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0xae5001a8
  .word 0x10000008
  .word 0x00000000
  .word 0xae5001ac
  .word 0x10000005
  .word 0x00000000
  .word 0xae5001b0
  .word 0x10000002
  .word 0x00000000
  .word 0xae5001b4
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_0037FF10


u32 FUN_0037ff10(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069fcf0_abs);

  return 2;

}


// FUN_0037FF80


void FUN_0037ff80(int param_1,int param_2,int param_3,int param_4)
{
  int iVar1;
  u32 uVar2;
  int iVar3;
  f32 uVar4;
  int y;

  uVar2 = 0;
  iVar1 = FUN_00361830(param_4);
  iVar3 = (int)param_4;
  if (*(int *)(iVar3 + 400) == param_3) {
    uVar2 = 4;
  }
  switch (param_3) {
  case 0:
    y = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, y, uVar4, 0, (const char *)DAT_0069fd08_abs);
    switch (*(char *)(iVar1 + 0x10)) {
    case 0:
    case 5:
      uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
      evtMenuDrawText((param_1 + 0x10) * 0xc, y, uVar4, uVar2,
                      (const char *)DAT_0069fd18_abs);
      break;
    default:
      uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
      evtMenuDrawText((param_1 + 0x10) * 0xc, y, uVar4, uVar2,
                      (const char *)&gp0xffffa330);
      break;
    }
    break;
  case 1:
    y = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, y, uVar4, 0,
                    (const char *)DAT_0069fd30_abs);
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText((param_1 + 0x10) * 0xc, y, uVar4, uVar2,
                    (const char *)&gp0xffffa3b8, *(u32 *)(iVar3 + 0x198) & 0x3ff);
    break;
  case 2:
    y = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, y, uVar4, 0,
                    (const char *)&gp0xffffa600);
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText((param_1 + 0x10) * 0xc, y, uVar4, uVar2,
                    (const char *)DAT_0069fd48_abs);
    break;
  }
}


// FUN_00380200


int FUN_00380200(int param_1,int param_2,int param_3)



{

  typedef struct {
    u8 pad0[0xd4];
    int state;
    u8 padD8[0xb8];
    int selection;
  } EvtMenuSelectionState;
  int result;
  EvtMenuSelectionState *menu;

  

  FUN_0036f900_evt(param_1,param_2,0x17,6,0,1,param_3,(code *)FUN_0037ff10,
                   (code *)FUN_0037ff80);

  menu = (EvtMenuSelectionState *)param_3;

  if (menu->state != 0x21) {

    result = 0;

  }

  else {

    if ((*(u16 *)DAT_007e0952_abs & 0x1000) != 0) {
      if (menu->selection == 0) {
        menu->selection = 2;
      }
      else {
        menu->selection = menu->selection - 1;
      }
    }
    else if ((*(u16 *)DAT_007e0952_abs & 0x4000) != 0) {
      if (menu->selection == 2) {
        menu->selection = 0;
      }
      else {
        menu->selection = menu->selection + 1;
      }
    }

    if ((*(u16 *)DAT_007e094e_abs & 0x40) != 0) {

      result = 1;

    }

    else {

      result = -(u32)((*(u16 *)DAT_007e094e_abs & 0x20) != 0);

    }

  }

  return result;

}


// FUN_00380310


u32 FUN_00380310(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069fd60_abs);
  return 2;

}
// FUN_00380380


void FUN_00380380(int param_1,int param_2,u32 param_3,u8 *param_4)
{
  int iVar3;
  f32 fVar1;

  iVar3 = 0;
  if (*(int *)(param_4 + 0x190) == (int)param_3) {
    iVar3 = 4;
  }

  switch (param_3) {
  case 0: {
    int iVar2;
    iVar2 = param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, iVar2, fVar1, 0, (const char *)&gp0xffffa608);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((param_1 + 0x10) * 0xc, iVar2, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x198));
    break;
  }
  case 1: {
    int iVar2;
    iVar2 = param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, iVar2, fVar1, 0, (const char *)DAT_0069fd78);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((param_1 + 0x10) * 0xc, iVar2, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x19c));
    break;
  }
  case 2: {
    int iVar2;
    iVar2 = param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, iVar2, fVar1, 0, (const char *)&gp0xffffa610);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((param_1 + 0x10) * 0xc, iVar2, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1a0));
    break;
  }
  case 3: {
    int iVar2;
    iVar2 = param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, iVar2, fVar1, 0, (const char *)&gp0xffffa618);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((param_1 + 0x10) * 0xc, iVar2, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1a4));
    break;
  }
  case 4: {
    int iVar2;
    iVar2 = param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, iVar2, fVar1, 0, (const char *)DAT_0069fd88);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((param_1 + 0x10) * 0xc, iVar2, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1a8));
    break;
  }
  case 5: {
    int iVar2;
    iVar2 = param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, iVar2, fVar1, 0, (const char *)DAT_0069fd98);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((param_1 + 0x10) * 0xc, iVar2, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1ac));
    break;
  }
  }
}

// FUN_003806F0


#ifndef PC_BUILD
asm int FUN_003806f0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00c0902d
  .word 0x0000882d
  .word 0x0000802d
  .word 0x3c020038
  .word 0x24420380
  .word 0xffa20000
  .word 0x24060017
  .word 0x2407000a
  .word 0x0000402d
  .word 0x24090001
  .word 0x0240502d
  .word 0x3c0b0038
  .word 0x256b0310
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e4300d4
  .word 0x24020022
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000093
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e420190
  .word 0x14400005
  .word 0x00000000
  .word 0x24020005
  .word 0xae420190
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae420190
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e430190
  .word 0x24020005
  .word 0x14620004
  .word 0x00000000
  .word 0xae400190
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae420190
  .word 0x8e440190
  .word 0x2c810006
  .word 0x10200068
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463aad0
  .word 0x00041080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24110001
  .word 0x1000001d
  .word 0x00000000
  .word 0x30620008
  .word 0x10400004
  .word 0x00000000
  .word 0x2411000a
  .word 0x10000017
  .word 0x00000000
  .word 0x30620002
  .word 0x10400004
  .word 0x00000000
  .word 0x24110064
  .word 0x10000011
  .word 0x00000000
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x2411ffff
  .word 0x1000000b
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x2411fff6
  .word 0x10000005
  .word 0x00000000
  .word 0x30620001
  .word 0x10400002
  .word 0x00000000
  .word 0x2411ff9c
  .word 0x2c810006
  .word 0x10200018
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463aab0
  .word 0x00041080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e500198
  .word 0x1000000e
  .word 0x00000000
  .word 0x8e50019c
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e5001a0
  .word 0x10000008
  .word 0x00000000
  .word 0x8e5001a4
  .word 0x10000005
  .word 0x00000000
  .word 0x8e5001a8
  .word 0x10000002
  .word 0x00000000
  .word 0x8e5001ac
  .word 0x02118021
  .word 0x2a017531
  .word 0x14200002
  .word 0x00000000
  .word 0x24107530
  .word 0x06010002
  .word 0x00000000
  .word 0x0000802d
  .word 0x2c810006
  .word 0x10200018
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463aa90
  .word 0x00041080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0xae500198
  .word 0x1000000e
  .word 0x00000000
  .word 0xae50019c
  .word 0x1000000b
  .word 0x00000000
  .word 0xae5001a0
  .word 0x10000008
  .word 0x00000000
  .word 0xae5001a4
  .word 0x10000005
  .word 0x00000000
  .word 0xae5001a8
  .word 0x10000002
  .word 0x00000000
  .word 0xae5001ac
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_003809C0


u32 FUN_003809c0(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069fdb0_abs);

  return 2;

}


// FUN_00380A30


void FUN_00380a30(int param_1,int param_2,int param_3,int param_4)



{

  int iVar1;

  u32 uVar2;

  f32 uVar3;

  RwV2d auStack_8;

  

  uVar2 = 0;

  auStack_8 = *(RwV2d *)&uGpffffa628;

  if (*(int *)(param_4 + 400) == param_3) {

    uVar2 = 4;

  }

  switch (param_3) {
  case 0: {
    s32 scaledY = param_2 * 0xc;
    uVar3 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar3, 0, (const char *)&gp0xffffa630);
    iVar1 = *(int *)(param_4 + 0x198);
    if (iVar1 < 2) {
      uVar3 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
      evtMenuDrawText((param_1 + 0x10) * 0xc, scaledY, uVar3, uVar2, (const char *)&gp0xffffa068, ((u32 *)&auStack_8)[iVar1]);
    }
    break;
  }
  case 1: {
    s32 scaledY = param_2 * 0xc;
    uVar3 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar3, 0, (const char *)&gp0xffffa638);
    uVar3 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((param_1 + 0x10) * 0xc, scaledY, uVar3, uVar2, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x19c));
    break;
  }
  case 2: {
    s32 scaledY = param_2 * 0xc;
    uVar3 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar3, 0, (const char *)(DAT_006a0000_abs - 0x238));
    if (*(int *)(param_4 + 0x198) == 0) {
      uVar3 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
      evtMenuDrawText((param_1 + 0x10) * 0xc, scaledY, uVar3, uVar2, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1a0));
    } else {
      uVar3 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
      evtMenuDrawText((param_1 + 0x10) * 0xc, scaledY, uVar3, uVar2, (const char *)&gp0xffffa640);
    }
    break;
  }
  case 3: {
    s32 scaledY = param_2 * 0xc;
    uVar3 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar3, 0, (const char *)(DAT_006a0000_abs - 0x228));
    if (*(int *)(param_4 + 0x198) == 0) {
      uVar3 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
      evtMenuDrawText((param_1 + 0x10) * 0xc, scaledY, uVar3, uVar2, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1a4));
    } else {
      uVar3 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
      evtMenuDrawText((param_1 + 0x10) * 0xc, scaledY, uVar3, uVar2, (const char *)&gp0xffffa640);
    }
    break;
  }
  }

  return;

}


/* W453 button-polarity chain reshaping: case-1, case-2, and case-3 positive tests lowered verify nd254 -> 175 without changing object/window 816/816; retained. */
// FUN_00380D70


#ifndef PC_BUILD
asm int FUN_00380d70(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00c0882d
  .word 0x0000802d
  .word 0x3c020038
  .word 0x24420a30
  .word 0xffa20000
  .word 0x24060017
  .word 0x24070007
  .word 0x0000402d
  .word 0x24090001
  .word 0x0220502d
  .word 0x3c0b0038
  .word 0x256b09c0
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e2300d4
  .word 0x24020023
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000ae
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e220190
  .word 0x14400005
  .word 0x00000000
  .word 0x24020003
  .word 0xae220190
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae220190
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e230190
  .word 0x24020003
  .word 0x14620004
  .word 0x00000000
  .word 0xae200190
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae220190
  .word 0x8e230190
  .word 0x24020003
  .word 0x10620050
  .word 0x00000000
  .word 0x24020002
  .word 0x10620031
  .word 0x00000000
  .word 0x24040001
  .word 0x10640016
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000079
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30628000
  .word 0x14400004
  .word 0x00000000
  .word 0x30622000
  .word 0x10400071
  .word 0x00000000
  .word 0x8e220198
  .word 0x00401026
  .word 0x2c420001
  .word 0xae220198
  .word 0xae2001a4
  .word 0xae2001a0
  .word 0xae20019c
  .word 0x10000068
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x0080802d
  .word 0x10000005
  .word 0x00000000
  .word 0x30628000
  .word 0x10400002
  .word 0x00000000
  .word 0x2410ffff
  .word 0x8e22019c
  .word 0x00501021
  .word 0x28410003
  .word 0x14200002
  .word 0x00000000
  .word 0x24020002
  .word 0x04410002
  .word 0x00000000
  .word 0x0000102d
  .word 0xae22019c
  .word 0x10000050
  .word 0x00000000
  .word 0x8e220198
  .word 0x24040001
  .word 0x1044004c
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x0080802d
  .word 0x10000005
  .word 0x00000000
  .word 0x30628000
  .word 0x10400002
  .word 0x00000000
  .word 0x2410ffff
  .word 0x8e2201a0
  .word 0x00501021
  .word 0x2841000a
  .word 0x14200002
  .word 0x00000000
  .word 0x24020009
  .word 0x04410002
  .word 0x00000000
  .word 0x0000102d
  .word 0xae2201a0
  .word 0x10000034
  .word 0x00000000
  .word 0x8e220198
  .word 0x24040001
  .word 0x10440030
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x0080802d
  .word 0x1000001d
  .word 0x00000000
  .word 0x30620008
  .word 0x10400004
  .word 0x00000000
  .word 0x2410000a
  .word 0x10000017
  .word 0x00000000
  .word 0x30620002
  .word 0x10400004
  .word 0x00000000
  .word 0x24100064
  .word 0x10000011
  .word 0x00000000
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x2410ffff
  .word 0x1000000b
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x2410fff6
  .word 0x10000005
  .word 0x00000000
  .word 0x30620001
  .word 0x10400002
  .word 0x00000000
  .word 0x2410ff9c
  .word 0x8e2201a4
  .word 0x00501021
  .word 0x3c010001
  .word 0x0041082a
  .word 0x14200002
  .word 0x00000000
  .word 0x3402ffff
  .word 0x04410002
  .word 0x00000000
  .word 0x0000102d
  .word 0xae2201a4
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_003810A0


u32 FUN_003810a0(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069fdf0_abs);

  return 2;

}


// FUN_00381110


void FUN_00381110(int param_1,int param_2,int param_3,int param_4)



{

  int iVar1;
  int iVar2;
  f32 uVar2;


  iVar1 = 0;
  if (*(int *)(param_4 + 400) == param_3) {
    iVar1 = 4;
  }

  switch (param_3) {
  case 0:
    goto FUN_00381110_case0;
  case 1:
    goto FUN_00381110_case1;
  default:
    goto FUN_00381110_done;
  }

FUN_00381110_case0:
  iVar2 = param_2 * 0xc;
  uVar2 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
  evtMenuDrawText(param_1 * 0xc, iVar2, uVar2, 0, (const char *)(void *)DAT_0069fe10_abs);

  uVar2 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
  evtMenuDrawText((param_1 + 0x18) * 0xc, iVar2, uVar2, iVar1, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x198));
  goto FUN_00381110_done;

FUN_00381110_case1:
  iVar2 = param_2 * 0xc;
  uVar2 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
  evtMenuDrawText(param_1 * 0xc, iVar2, uVar2, 0, (const char *)(void *)&gp0xffffa648);

  uVar2 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
  evtMenuDrawText((param_1 + 0x18) * 0xc, iVar2, uVar2, iVar1, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x19c));

FUN_00381110_done:

  return;

}


// FUN_00381280


#ifndef PC_BUILD
asm int FUN_00381280(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00c0902d
  .word 0x0000882d
  .word 0x0000802d
  .word 0x3c020038
  .word 0x24421110
  .word 0xffa20000
  .word 0x2406001d
  .word 0x24070007
  .word 0x0000402d
  .word 0x24090001
  .word 0x0240502d
  .word 0x3c0b0038
  .word 0x256b10a0
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e4300d4
  .word 0x24020024
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000072
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e420190
  .word 0x14400005
  .word 0x00000000
  .word 0x24020001
  .word 0xae420190
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae420190
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e430190
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0xae400190
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae420190
  .word 0x8e440190
  .word 0x24020001
  .word 0x10820005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000043
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24110001
  .word 0x1000001d
  .word 0x00000000
  .word 0x30620008
  .word 0x10400004
  .word 0x00000000
  .word 0x2411000a
  .word 0x10000017
  .word 0x00000000
  .word 0x30620002
  .word 0x10400004
  .word 0x00000000
  .word 0x24110064
  .word 0x10000011
  .word 0x00000000
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x2411ffff
  .word 0x1000000b
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x2411fff6
  .word 0x10000005
  .word 0x00000000
  .word 0x30620001
  .word 0x10400002
  .word 0x00000000
  .word 0x2411ff9c
  .word 0x24020001
  .word 0x10820008
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8e500198
  .word 0x10000002
  .word 0x00000000
  .word 0x8e50019c
  .word 0x02118021
  .word 0x2a017531
  .word 0x14200002
  .word 0x00000000
  .word 0x24107530
  .word 0x06010002
  .word 0x00000000
  .word 0x0000802d
  .word 0x24020001
  .word 0x10820008
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0xae500198
  .word 0x10000002
  .word 0x00000000
  .word 0xae50019c
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_003814D0


u32 FUN_003814d0(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069fe30_abs);

  return 2;

}


/* opt_lifetimes on: default nd762/1124B -> nd761/1124B; retained. */
#pragma push
#pragma opt_lifetimes on
// FUN_00381540
#ifndef PC_BUILD
asm void FUN_00381540(int param_1,int param_2,u32 param_3,u8 *param_4)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00e0882d
  .word 0x0000802d
  .word 0xc781a650
  .word 0xc780a654
  .word 0xe7a10088
  .word 0xe7a0008c
  .word 0x3c09006a
  .word 0x2529feb0
  .word 0x27a80060
  .word 0x24070004
  .word 0x8d240000
  .word 0x8d230004
  .word 0x25290008
  .word 0x24e7ffff
  .word 0xad040000
  .word 0xad030004
  .word 0x25080008
  .word 0x1ce0fff8
  .word 0x00000000
  .word 0x8e230190
  .word 0x14660002
  .word 0x00000000
  .word 0x24100004
  .word 0x2cc10007
  .word 0x102000f0
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484aaf0
  .word 0x00061880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x0002a080
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0280282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a570
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e330198
  .word 0x2a610002
  .word 0x102000d6
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x00131080
  .word 0x005d1021
  .word 0x0280282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a068
  .word 0x8c480088
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x100000c4
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x0002a080
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0280282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a000
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e33019c
  .word 0x2a610008
  .word 0x102000b1
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x00131080
  .word 0x005d1021
  .word 0x0280282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a068
  .word 0x8c480060
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000009f
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00029880
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e7fed0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a3b8
  .word 0x8e2801a0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000007f
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00029880
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e7fee0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a3b8
  .word 0x8e2801a4
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000005f
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00029880
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e7fef0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a3b8
  .word 0x8e2801a8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000003f
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00029880
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e7ff00
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a3b8
  .word 0x8e2801ac
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00029880
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a028
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e2400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x2643000c
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x8e2201b0
  .word 0x304803ff
  .word 0x0260282d
  .word 0x46000306
  .word 0x0200302d
  .word 0x2787a3b8
  .word 0x0c0e2898
  .word 0x00000000
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
#pragma pop


/* opt_common_subs off + opt_lifetimes on: default nd379/576B -> nd278/576B; retained. */
#pragma push
#pragma opt_common_subs off
#pragma opt_lifetimes on
// FUN_003819B0


#ifndef PC_BUILD
asm int FUN_003819b0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00c0882d
  .word 0x0000802d
  .word 0x3c020038
  .word 0x24421540
  .word 0xffa20000
  .word 0x24060019
  .word 0x24070009
  .word 0x0000402d
  .word 0x24090001
  .word 0x0220502d
  .word 0x3c0b0038
  .word 0x256b14d0
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e2300d4
  .word 0x24020025
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000072
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e220190
  .word 0x14400005
  .word 0x00000000
  .word 0x24020006
  .word 0xae220190
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae220190
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e230190
  .word 0x24020006
  .word 0x14620004
  .word 0x00000000
  .word 0xae200190
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae220190
  .word 0x8e240190
  .word 0x2c810006
  .word 0x10200047
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463ab10
  .word 0x00041080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x14400004
  .word 0x00000000
  .word 0x30628000
  .word 0x10400038
  .word 0x00000000
  .word 0x8e220198
  .word 0x00401026
  .word 0x2c420001
  .word 0xae220198
  .word 0x10000032
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000005
  .word 0x00000000
  .word 0x30628000
  .word 0x10400002
  .word 0x00000000
  .word 0x2410ffff
  .word 0x8e22019c
  .word 0x00501021
  .word 0x28410008
  .word 0x14200002
  .word 0x00000000
  .word 0x0000102d
  .word 0x04410002
  .word 0x00000000
  .word 0x24020007
  .word 0xae22019c
  .word 0x1000001a
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000005
  .word 0x00000000
  .word 0x30628000
  .word 0x10400002
  .word 0x00000000
  .word 0x2410ffff
  .word 0x00041080
  .word 0x00511021
  .word 0x24430198
  .word 0x8c420198
  .word 0x00501021
  .word 0x28410015
  .word 0x14200002
  .word 0x00000000
  .word 0x24020014
  .word 0x04410002
  .word 0x00000000
  .word 0x0000102d
  .word 0xac620000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop


// FUN_00381BF0


u32 FUN_00381bf0(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069ff10);

  return 2;

}


// FUN_00381C60


void FUN_00381c60(int param_1,int param_2,u32 param_3,u8 *param_4)
{
  int iVar3;
  f32 fVar1;

  iVar3 = 0;
  if (*(int *)(param_4 + 0x190) == (int)param_3) {
    iVar3 = 4;
  }

  switch (param_3) {
  case 0: {
    s32 scaledY = param_2 * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)(param_1 * 0xc), scaledY, fVar1, 0, (const char *)DAT_0069ff20);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)((param_1 + 0x10) * 0xc), scaledY, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x198));
    break;
  }
  case 1: {
    s32 scaledY = (param_2 + 1) * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)(param_1 * 0xc), scaledY, fVar1, 0, (const char *)DAT_0069ff30);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)((param_1 + 0x10) * 0xc), scaledY, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x19c));
    break;
  }
  case 2: {
    s32 scaledY = (param_2 + 1) * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)(param_1 * 0xc), scaledY, fVar1, 0, (const char *)DAT_0069ff40);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)((param_1 + 0x10) * 0xc), scaledY, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1a0));
    break;
  }
  case 3: {
    s32 scaledY = (param_2 + 1) * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)(param_1 * 0xc), scaledY, fVar1, 0, (const char *)DAT_0069ff50);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)((param_1 + 0x10) * 0xc), scaledY, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1a4));
    break;
  }
  case 4: {
    s32 scaledY = (param_2 + 2) * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)(param_1 * 0xc), scaledY, fVar1, 0, (const char *)&gp0xffffa668);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)((param_1 + 0x10) * 0xc), scaledY, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1a8));
    break;
  }
  case 5: {
    s32 scaledY = (param_2 + 2) * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)(param_1 * 0xc), scaledY, fVar1, 0, (const char *)&gp0xffffa670);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)((param_1 + 0x10) * 0xc), scaledY, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1ac));
    break;
  }
  case 6: {
    s32 scaledY = (param_2 + 2) * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)(param_1 * 0xc), scaledY, fVar1, 0, (const char *)&gp0xffffa678);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)((param_1 + 0x10) * 0xc), scaledY, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1b0));
    break;
  }
  case 7: {
    s32 scaledY = (param_2 + 2) * 0xc;
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)(param_1 * 0xc), scaledY, fVar1, 0, (const char *)&gp0xffffa680);
    fVar1 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((u32)((param_1 + 0x10) * 0xc), scaledY, fVar1, iVar3, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x1b4));
    break;
  }
  }
}


// FUN_003820E0


#ifndef PC_BUILD
asm int FUN_003820e0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00c0902d
  .word 0x0000882d
  .word 0x0000802d
  .word 0x3c020038
  .word 0x24421c60
  .word 0xffa20000
  .word 0x24060019
  .word 0x2407000d
  .word 0x0000402d
  .word 0x24090001
  .word 0x0240502d
  .word 0x3c0b0038
  .word 0x256b1bf0
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e4300d4
  .word 0x24020026
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000006d
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e420190
  .word 0x14400005
  .word 0x00000000
  .word 0x24020007
  .word 0xae420190
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae420190
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e430190
  .word 0x24020007
  .word 0x14620004
  .word 0x00000000
  .word 0xae400190
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae420190
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24110001
  .word 0x1000001d
  .word 0x00000000
  .word 0x30620008
  .word 0x10400004
  .word 0x00000000
  .word 0x2411000a
  .word 0x10000017
  .word 0x00000000
  .word 0x30620002
  .word 0x10400004
  .word 0x00000000
  .word 0x24110064
  .word 0x10000011
  .word 0x00000000
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x2411ffff
  .word 0x1000000b
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x2411fff6
  .word 0x10000005
  .word 0x00000000
  .word 0x30620001
  .word 0x10400002
  .word 0x00000000
  .word 0x2411ff9c
  .word 0x12200020
  .word 0x00000000
  .word 0x8e440190
  .word 0x2c810008
  .word 0x1020000f
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463ab50
  .word 0x00041080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24100008
  .word 0x10000005
  .word 0x00000000
  .word 0x241000fa
  .word 0x10000002
  .word 0x00000000
  .word 0x3410ea60
  .word 0x00041080
  .word 0x00521021
  .word 0x24430198
  .word 0x8c420198
  .word 0x00511021
  .word 0x0202082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0200102d
  .word 0x04410002
  .word 0x00000000
  .word 0x0000102d
  .word 0xac620000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_00382320


u32 FUN_00382320(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069ff60_abs);

  return 2;

}


// FUN_00382390


void FUN_00382390(int param_1,int param_2,int param_3,int param_4)
{
  int uVar1;
  f32 uVar2;
  int iVar2;

  uVar1 = 0;
  if (*(int *)(param_4 + 400) == param_3) {
    uVar1 = 4;
  }

  switch (param_3) {
  case 0:
    goto FUN_00382390_case0;
  case 1:
    goto FUN_00382390_case1;
  default:
    goto FUN_00382390_done;
  }

FUN_00382390_case0:
  iVar2 = param_2 * 0xc;
  uVar2 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
  evtMenuDrawText(param_1 * 0xc, iVar2, uVar2, 0, (const char *)DAT_0069ff80_abs);

  uVar2 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
  evtMenuDrawText((param_1 + 0x1a) * 0xc, iVar2, uVar2, uVar1, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x198));
  goto FUN_00382390_done;

FUN_00382390_case1:
  iVar2 = param_2 * 0xc;
  uVar2 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
  evtMenuDrawText(param_1 * 0xc, iVar2, uVar2, 0, (const char *)DAT_0069ffa0_abs);

  uVar2 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
  evtMenuDrawText((param_1 + 0x1a) * 0xc, iVar2, uVar2, uVar1, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x19c));

FUN_00382390_done:
  return;
}


// FUN_00382500


#ifndef PC_BUILD
asm int FUN_00382500(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00c0882d
  .word 0x0000802d
  .word 0x3c020038
  .word 0x24422390
  .word 0xffa20000
  .word 0x2406001e
  .word 0x24070005
  .word 0x0000402d
  .word 0x24090001
  .word 0x0220502d
  .word 0x3c0b0038
  .word 0x256b2320
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e2300d4
  .word 0x24020027
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000005d
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e220190
  .word 0x14400005
  .word 0x00000000
  .word 0x24020002
  .word 0xae220190
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae220190
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e230190
  .word 0x24020002
  .word 0x14620004
  .word 0x00000000
  .word 0xae200190
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae220190
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400004
  .word 0x00000000
  .word 0x24100001
  .word 0x1000001d
  .word 0x00000000
  .word 0x30620008
  .word 0x10400004
  .word 0x00000000
  .word 0x2410000a
  .word 0x10000017
  .word 0x00000000
  .word 0x30620002
  .word 0x10400004
  .word 0x00000000
  .word 0x24100064
  .word 0x10000011
  .word 0x00000000
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x2410ffff
  .word 0x1000000b
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x2410fff6
  .word 0x10000005
  .word 0x00000000
  .word 0x30620001
  .word 0x10400002
  .word 0x00000000
  .word 0x2410ff9c
  .word 0x12000010
  .word 0x00000000
  .word 0x8e220190
  .word 0x00021080
  .word 0x00511021
  .word 0x24430198
  .word 0x8c420198
  .word 0x00501021
  .word 0x3401ea61
  .word 0x0041082a
  .word 0x14200002
  .word 0x00000000
  .word 0x3402ea60
  .word 0x04410002
  .word 0x00000000
  .word 0x0000102d
  .word 0xac620000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_003826F0


u32 FUN_003826f0(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069ffc0_abs);

  return 2;

}


// FUN_00382760
void FUN_00382760(int param_1,int param_2,int param_3,int param_4)
{
  u32 uVar1;
  f32 fVar2;
  int iVar3;

  uVar1 = 0;
  if (*(int *)(param_4 + 400) == param_3) {
    uVar1 = 4;
  }
  switch (param_3) {
  case 0:
    iVar3 = param_2 * 0xc;
    fVar2 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((int)(param_1 * 0xc), iVar3, fVar2, 0, (const char *)(void *)DAT_0069ffe0_abs);
    fVar2 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((int)((param_1 + 0x1a) * 0xc), iVar3, fVar2, uVar1, (const char *)(void *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x198));
    break;
  default:
    return;
  }
}


#pragma alias FUN_003b55b0_evt_f32 FUN_003b55b0
extern f32 *FUN_003b55b0_evt_f32(int param_1);
/* opt_propagation off: default nd701/944B -> nd654/944B; retained. */
#pragma push
#pragma opt_propagation off
// FUN_00382840


#ifndef PC_BUILD
asm int FUN_00382840(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb00010
  .word 0x00c0802d
  .word 0x3c020038
  .word 0x24422760
  .word 0xffa20000
  .word 0x2406001e
  .word 0x24070005
  .word 0x0000402d
  .word 0x24090001
  .word 0x0200502d
  .word 0x3c0b0038
  .word 0x256b26f0
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e0300d4
  .word 0x24020028
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000d9
  .word 0x00000000
  .word 0x8e020190
  .word 0x10400003
  .word 0x00000000
  .word 0x1000003e
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400017
  .word 0x00000000
  .word 0x8e020198
  .word 0x28410005
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae020198
  .word 0x10000002
  .word 0x00000000
  .word 0xae000198
  .word 0x8e040198
  .word 0x0c0ed56c
  .word 0x00000000
  .word 0xc4430000
  .word 0xc4420004
  .word 0xc4410008
  .word 0xc440000c
  .word 0xe603084c
  .word 0xe6020850
  .word 0xe6010854
  .word 0xe6000858
  .word 0x10000018
  .word 0x00000000
  .word 0x30628000
  .word 0x10400015
  .word 0x00000000
  .word 0x8e020198
  .word 0x1c400005
  .word 0x00000000
  .word 0x24020005
  .word 0xae020198
  .word 0x10000003
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae020198
  .word 0x8e040198
  .word 0x0c0ed56c
  .word 0x00000000
  .word 0xc4430000
  .word 0xc4420004
  .word 0xc4410008
  .word 0xc440000c
  .word 0xe603084c
  .word 0xe6020850
  .word 0xe6010854
  .word 0xe6000858
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30420080
  .word 0x10400007
  .word 0x00000000
  .word 0x8e040198
  .word 0x10800004
  .word 0x00000000
  .word 0x2605084c
  .word 0x0c0ed574
  .word 0x00000000
  .word 0x8e020198
  .word 0x10400085
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9042095f
  .word 0x2841003c
  .word 0x10200007
  .word 0x00000000
  .word 0xc6010854
  .word 0xc7808294
  .word 0x46000800
  .word 0xe6000854
  .word 0x10000008
  .word 0x00000000
  .word 0x284100bc
  .word 0x14200005
  .word 0x00000000
  .word 0xc6010854
  .word 0xc7808294
  .word 0x46000801
  .word 0xe6000854
  .word 0x3c02007e
  .word 0x9042095e
  .word 0x2841003c
  .word 0x10200007
  .word 0x00000000
  .word 0xc601084c
  .word 0xc7808294
  .word 0x46000801
  .word 0xe600084c
  .word 0x10000008
  .word 0x00000000
  .word 0x284100bc
  .word 0x14200005
  .word 0x00000000
  .word 0xc601084c
  .word 0xc7808294
  .word 0x46000800
  .word 0xe600084c
  .word 0x3c02007e
  .word 0x90420961
  .word 0x2841003c
  .word 0x10200007
  .word 0x00000000
  .word 0xc6010858
  .word 0xc7808294
  .word 0x46000800
  .word 0xe6000858
  .word 0x10000008
  .word 0x00000000
  .word 0x284100bc
  .word 0x14200005
  .word 0x00000000
  .word 0xc6010858
  .word 0xc7808294
  .word 0x46000801
  .word 0xe6000858
  .word 0x3c02007e
  .word 0x90420960
  .word 0x2841003c
  .word 0x10200007
  .word 0x00000000
  .word 0xc6010850
  .word 0xc7808294
  .word 0x46000801
  .word 0xe6000850
  .word 0x10000008
  .word 0x00000000
  .word 0x284100bc
  .word 0x14200005
  .word 0x00000000
  .word 0xc6010850
  .word 0xc7808294
  .word 0x46000800
  .word 0xe6000850
  .word 0xc6010854
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010002
  .word 0x00000000
  .word 0xe6000854
  .word 0xc6010854
  .word 0x44800000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe6000854
  .word 0xc601084c
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010002
  .word 0x00000000
  .word 0xe600084c
  .word 0xc601084c
  .word 0x44800000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe600084c
  .word 0xc6010858
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010002
  .word 0x00000000
  .word 0xe6000858
  .word 0xc6010858
  .word 0x44800000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe6000858
  .word 0xc6010850
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010002
  .word 0x00000000
  .word 0xe6000850
  .word 0xc6010850
  .word 0x44800000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe6000850
  .word 0x0200202d
  .word 0x2605084c
  .word 0x0c0e5894
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0020
  .word 0x7bb00010
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop


// FUN_00382C10


u32 FUN_00382c10(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_006a0000_abs - 8);

  return 2;

}


// FUN_00382C80
void FUN_00382c80(int param_1,int param_2,int param_3,int param_4)
{
  u32 uVar1;
  f32 fVar2;
  int iVar3;

  uVar1 = 0;
  if (*(int *)(param_4 + 400) == param_3) {
    uVar1 = 4;
  }
  switch (param_3) {
  case 0:
    iVar3 = param_2 * 0xc;
    fVar2 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, iVar3, fVar2, 0, (const char *)(void *)(DAT_006a0000_abs + 0x10));
    fVar2 = FUN_0038a220(*(u32 *)(param_4 + 0xe0));
    evtMenuDrawText((param_1 + 0x19) * 0xc, iVar3, fVar2, uVar1, (const char *)&gp0xffffa3b8, *(u32 *)(param_4 + 0x198));
    break;
  default:
    return;
  }
}


// FUN_00382D60


int FUN_00382d60(int param_1,int param_2,int param_3)



{

  int iVar1;

  int iVar2;

  

  iVar1 = 0;

  FUN_0036f900_evt(param_1,param_2,0x1e,5,0,1,param_3,(code *)FUN_00382c10,(code *)FUN_00382c80);

  iVar2 = (int)param_3;

  if (*(int *)(iVar2 + 0xd4) != 0x29) {
    return 0;
  }

    switch (*(int *)(iVar2 + 400)) {
    case 0:

      if ((*(u16 *)DAT_007e0952_abs & 0x2000) != 0) {
        iVar1 = 1;
      }
      else if ((*(u16 *)DAT_007e0952_abs & 0x8000) != 0) {
        iVar1 = -1;
      }

      if ((*(u16 *)DAT_007e0952_abs & 8) != 0) {

        iVar1 = 10;

      }

      if ((*(u16 *)DAT_007e0952_abs & 4) != 0) {

        iVar1 = -10;

      }

      if ((*(u16 *)DAT_007e0952_abs & 2) != 0) {

        iVar1 = 100;

      }

      if ((*(u16 *)DAT_007e0952_abs & 1) != 0) {

        iVar1 = -100;

      }
      *(int *)(iVar2 + 0x198) = *(int *)(iVar2 + 0x198) + iVar1;

      if (*(int *)(iVar2 + 0x198) < 0) {
        *(int *)(param_3 + 0x198) = 0;

      }

      if (30000 < *(int *)(iVar2 + 0x198)) {

        *(int *)(param_3 + 0x198) = 30000;

      }

    break;
    }

    if ((*(u16 *)DAT_007e094e_abs & 0x40) != 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = -(u32)((*(u16 *)DAT_007e094e_abs & 0x20) != 0);
    }
  return iVar1;


}


// FUN_00382EC0


u32 FUN_00382ec0(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_006a0030_abs);

  return 2;

}


/* opt_lifetimes on: default nd364/1072B -> nd344/1072B; retained. */
#pragma push
#pragma opt_lifetimes on
/* W416 width audit: retail offsets 0xfc/0x100 use 0x10 extension shifts; ours' corresponding pair is 0xf8/0xfc with the same 0x10 shifts. The existing (short)iVar1 use-site cast already supplies the candidate width; no edit was justified. */
// FUN_00382F30


#ifndef PC_BUILD
asm void FUN_00382f30(int param_1,int param_2,int param_3,int param_4)
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
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0802d
  .word 0x00e0902d
  .word 0x0000882d
  .word 0x0240202d
  .word 0x0c0d860c
  .word 0x00000000
  .word 0x0040a82d
  .word 0x8e430190
  .word 0x14700002
  .word 0x00000000
  .word 0x24110004
  .word 0x24030004
  .word 0x120300cc
  .word 0x00000000
  .word 0x24030003
  .word 0x120300a9
  .word 0x00000000
  .word 0x24030002
  .word 0x12030086
  .word 0x00000000
  .word 0x24030001
  .word 0x1203004e
  .word 0x00000000
  .word 0x12000003
  .word 0x00000000
  .word 0x100000dc
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00028080
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a688
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x0000802d
  .word 0x96a40012
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x10400013
  .word 0x00000000
  .word 0x8c560104
  .word 0x0000a82d
  .word 0x1000000c
  .word 0x00000000
  .word 0x0015343c
  .word 0x0006343f
  .word 0x02c0202d
  .word 0x0000282d
  .word 0x0c0c6188
  .word 0x00000000
  .word 0x24030001
  .word 0x14430002
  .word 0x00000000
  .word 0x26100001
  .word 0x26b50001
  .word 0x2aa20040
  .word 0x1440fff3
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00029880
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830010
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3b8
  .word 0x8e480198
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830013
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0260282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x3c07006a
  .word 0x24e70048
  .word 0x0200402d
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x10000093
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00028080
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a690
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e44019c
  .word 0x24030001
  .word 0x10830014
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000007c
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830010
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a698
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000006d
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830010
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a6a0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000005e
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00028080
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e70058
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830010
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3b8
  .word 0x8e4801a0
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000003e
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00028080
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x3c07006a
  .word 0x24e70068
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830010
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3b8
  .word 0x8e4801a4
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x1000001e
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x00028080
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0000302d
  .word 0x2787a4e8
  .word 0x0c0e2898
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x0c0e2888
  .word 0x00000000
  .word 0x26830010
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x0200282d
  .word 0x46000306
  .word 0x0220302d
  .word 0x2787a3b8
  .word 0x8e4801a8
  .word 0x0c0e2898
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
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop


/* opt_lifetimes on: default nd912/1172B -> nd908/1172B; retained. */
#pragma push
#pragma opt_lifetimes on
// FUN_00383360


#ifndef PC_BUILD
asm int FUN_00383360(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x0080982d
  .word 0x00a0882d
  .word 0x00c0902d
  .word 0x0240202d
  .word 0x0c0d860c
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c020038
  .word 0x24422f30
  .word 0xffa20000
  .word 0x0260202d
  .word 0x0220282d
  .word 0x2406001e
  .word 0x24070009
  .word 0x0000402d
  .word 0x24090001
  .word 0x0240502d
  .word 0x3c0b0038
  .word 0x256b2ec0
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e4300d4
  .word 0x2402002a
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000103
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e420190
  .word 0x14400005
  .word 0x00000000
  .word 0x24020005
  .word 0xae420190
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae420190
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e430190
  .word 0x24020005
  .word 0x14620004
  .word 0x00000000
  .word 0xae400190
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae420190
  .word 0x8e430190
  .word 0x24020004
  .word 0x106200ac
  .word 0x00000000
  .word 0x24020003
  .word 0x10620083
  .word 0x00000000
  .word 0x24020002
  .word 0x1062005a
  .word 0x00000000
  .word 0x24020001
  .word 0x10620049
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000cb
  .word 0x00000000
  .word 0x0000882d
  .word 0x96040012
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x10400013
  .word 0x00000000
  .word 0x8c530104
  .word 0x0000802d
  .word 0x1000000c
  .word 0x00000000
  .word 0x0010343c
  .word 0x0006343f
  .word 0x0260202d
  .word 0x0000282d
  .word 0x0c0c6188
  .word 0x00000000
  .word 0x24030001
  .word 0x14430002
  .word 0x00000000
  .word 0x26310001
  .word 0x26100001
  .word 0x2a020040
  .word 0x1440fff3
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e420198
  .word 0x24420001
  .word 0xae420198
  .word 0x10000017
  .word 0x00000000
  .word 0x30620008
  .word 0x10400006
  .word 0x00000000
  .word 0x8e420198
  .word 0x2442000a
  .word 0xae420198
  .word 0x1000000f
  .word 0x00000000
  .word 0x30628000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e420198
  .word 0x2442ffff
  .word 0xae420198
  .word 0x10000007
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x8e420198
  .word 0x2442fff6
  .word 0xae420198
  .word 0x8e420198
  .word 0x0051102a
  .word 0x14400003
  .word 0x00000000
  .word 0x2622ffff
  .word 0xae420198
  .word 0x8e420198
  .word 0x0441008a
  .word 0x00000000
  .word 0xae400198
  .word 0x10000087
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x14400004
  .word 0x00000000
  .word 0x30628000
  .word 0x1040007f
  .word 0x00000000
  .word 0x8e42019c
  .word 0x00401026
  .word 0x2c420001
  .word 0xae42019c
  .word 0x10000079
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e4201a0
  .word 0x24420001
  .word 0xae4201a0
  .word 0x10000017
  .word 0x00000000
  .word 0x30620008
  .word 0x10400006
  .word 0x00000000
  .word 0x8e4201a0
  .word 0x2442000a
  .word 0xae4201a0
  .word 0x1000000f
  .word 0x00000000
  .word 0x30628000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e4201a0
  .word 0x2442ffff
  .word 0xae4201a0
  .word 0x10000007
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x8e4201a0
  .word 0x2442fff6
  .word 0xae4201a0
  .word 0x8e4201a0
  .word 0x04410056
  .word 0x00000000
  .word 0xae4001a0
  .word 0x10000053
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e4201a4
  .word 0x24420001
  .word 0xae4201a4
  .word 0x10000017
  .word 0x00000000
  .word 0x30620008
  .word 0x10400006
  .word 0x00000000
  .word 0x8e4201a4
  .word 0x2442000a
  .word 0xae4201a4
  .word 0x1000000f
  .word 0x00000000
  .word 0x30628000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e4201a4
  .word 0x2442ffff
  .word 0xae4201a4
  .word 0x10000007
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x8e4201a4
  .word 0x2442fff6
  .word 0xae4201a4
  .word 0x8e4201a4
  .word 0x04410030
  .word 0x00000000
  .word 0xae4001a4
  .word 0x1000002d
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e4201a8
  .word 0x24420001
  .word 0xae4201a8
  .word 0x10000017
  .word 0x00000000
  .word 0x30620008
  .word 0x10400006
  .word 0x00000000
  .word 0x8e4201a8
  .word 0x2442000a
  .word 0xae4201a8
  .word 0x1000000f
  .word 0x00000000
  .word 0x30628000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e4201a8
  .word 0x2442ffff
  .word 0xae4201a8
  .word 0x10000007
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x8e4201a8
  .word 0x2442fff6
  .word 0xae4201a8
  .word 0x8e4201a8
  .word 0x284101f5
  .word 0x14200003
  .word 0x00000000
  .word 0x240201f4
  .word 0xae4201a8
  .word 0x8e4201a8
  .word 0x2841000a
  .word 0x10200003
  .word 0x00000000
  .word 0x2402000a
  .word 0xae4201a8
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop


// FUN_00383810


u32 FUN_00383810(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_006a0080_abs);

  return 2;

}


// FUN_00383880


void FUN_00383880(int param_1,int param_2,int param_3,int param_4)
{
  int iVar1;
  u32 uVar2;
  int iVar3;
  f32 uVar4;

  uVar2 = 0;
  iVar1 = FUN_00361830(param_4);
  iVar3 = (int)param_4;
  if (*(int *)(iVar3 + 400) == param_3) {
    uVar2 = 4;
  }
  switch (param_3) {
  case 0: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar4, 0,
                    (const char *)(void *)(DAT_006a0000_abs + 0xa0));
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText((param_1 + 0x18) * 0xc, scaledY, uVar4, uVar2,
                    (const char *)&gp0xffffa3b8, *(u32 *)(iVar3 + 0x198));
    break;
  }
  case 1: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar4, 0,
                    (const char *)(void *)(DAT_006a0000_abs + 0xc0));
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText((param_1 + 0x18) * 0xc, scaledY, uVar4, uVar2,
                    (const char *)&gp0xffffa3b8, *(u32 *)(iVar3 + 0x19c));
    break;
  }
  case 2: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar4, 0,
                    (const char *)(void *)(DAT_006a0000_abs + 0xe0));
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText((param_1 + 0x18) * 0xc, scaledY, uVar4, uVar2,
                    (const char *)&gp0xffffa3b8, *(u32 *)(iVar3 + 0x1a0));
    break;
  }
  case 3: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar4, 0,
                    (const char *)(void *)(DAT_006a0000_abs + 0x100));
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText((param_1 + 0x18) * 0xc, scaledY, uVar4, uVar2,
                    (const char *)&gp0xffffa3b8, *(u32 *)(iVar3 + 0x1a4));
    break;
  }
  case 4: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar4, 0,
                    (const char *)(void *)(DAT_006a0000_abs + 0x118));
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText((param_1 + 0x18) * 0xc, scaledY, uVar4, uVar2,
                    (const char *)&gp0xffffa3b8, *(u32 *)(iVar3 + 0x1a8) & 0x3ff);
    break;
  }
  case 5: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar4, 0,
                    (const char *)(void *)(DAT_006a0000_abs + 0x130));
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText((param_1 + 0x18) * 0xc, scaledY, uVar4, uVar2,
                    (const char *)&gp0xffffa3b8, *(u32 *)(iVar3 + 0x1ac) & 0x3ff);
    break;
  }
  case 6: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar4, 0,
                    (const char *)(void *)(DAT_006a0000_abs + 0x148));
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText((param_1 + 0x18) * 0xc, scaledY, uVar4, uVar2,
                    (const char *)&gp0xffffa3b8, *(u32 *)(iVar3 + 0x1b0) & 0x3ff);
    break;
  }
  case 7: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar4, 0,
                    (const char *)&gp0xffffa630);
    switch (*(int *)(iVar3 + 0x1b4)) {
    case 0:
      uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
      evtMenuDrawText((param_1 + 0x18) * 0xc, scaledY, uVar4, uVar2,
                      (const char *)&gp0xffffa350);
      break;
    case 1:
      uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
      evtMenuDrawText((param_1 + 0x18) * 0xc, scaledY, uVar4, uVar2,
                      (const char *)(void *)(DAT_006a0000_abs + 0x158));
      break;
    }
    break;
  }
  }
}


// FUN_00383D80


#ifndef PC_BUILD
asm int FUN_00383d80(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x00c0802d
  .word 0x0200202d
  .word 0x0c0d860c
  .word 0x00000000
  .word 0x3c020038
  .word 0x24423880
  .word 0xffa20000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24060023
  .word 0x2407000b
  .word 0x0000402d
  .word 0x24090001
  .word 0x0200502d
  .word 0x3c0b0038
  .word 0x256b3810
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e0300d4
  .word 0x2402002b
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000090
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e020190
  .word 0x14400005
  .word 0x00000000
  .word 0x24020007
  .word 0xae020190
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae020190
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e030190
  .word 0x24020007
  .word 0x14620004
  .word 0x00000000
  .word 0xae000190
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae020190
  .word 0x8e020190
  .word 0x2c410008
  .word 0x10200065
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463ab90
  .word 0x00022880
  .word 0x00a31821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x3c03007e
  .word 0x94640952
  .word 0x30832000
  .word 0x10600007
  .word 0x00000000
  .word 0x00b02021
  .word 0x8c830198
  .word 0x24630001
  .word 0xac830198
  .word 0x1000001a
  .word 0x00000000
  .word 0x30830008
  .word 0x10600007
  .word 0x00000000
  .word 0x00b02021
  .word 0x8c830198
  .word 0x2463000a
  .word 0xac830198
  .word 0x10000011
  .word 0x00000000
  .word 0x30838000
  .word 0x10600007
  .word 0x00000000
  .word 0x00b02021
  .word 0x8c830198
  .word 0x2463ffff
  .word 0xac830198
  .word 0x10000008
  .word 0x00000000
  .word 0x30830004
  .word 0x10600005
  .word 0x00000000
  .word 0x00b02021
  .word 0x8c830198
  .word 0x2463fff6
  .word 0xac830198
  .word 0x00021080
  .word 0x00501021
  .word 0x24430198
  .word 0x8c420198
  .word 0x04410002
  .word 0x00000000
  .word 0xac600000
  .word 0x8c620000
  .word 0x28417531
  .word 0x1420002f
  .word 0x00000000
  .word 0x24027530
  .word 0xac620000
  .word 0x1000002b
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e0201b4
  .word 0x24420001
  .word 0xae0201b4
  .word 0x10000017
  .word 0x00000000
  .word 0x30620008
  .word 0x10400006
  .word 0x00000000
  .word 0x8e0201b4
  .word 0x2442000a
  .word 0xae0201b4
  .word 0x1000000f
  .word 0x00000000
  .word 0x30628000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e0201b4
  .word 0x2442ffff
  .word 0xae0201b4
  .word 0x10000007
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x8e0201b4
  .word 0x2442fff6
  .word 0xae0201b4
  .word 0x8e0201b4
  .word 0x04410003
  .word 0x00000000
  .word 0x24020001
  .word 0xae0201b4
  .word 0x8e0201b4
  .word 0x28420002
  .word 0x14400002
  .word 0x00000000
  .word 0xae0001b4
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_00384060


u32 FUN_00384060(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_0069f8b0_abs);

  return 2;

}


// FUN_003840D0


void FUN_003840d0(int param_1,int param_2,int param_3,int param_4)
{
  u32 uVar1;
  int iVar2;
  f32 uVar3;

  uVar1 = 0;
  FUN_00361830(param_4);
  iVar2 = (int)param_4;
  if (*(int *)(iVar2 + 400) == param_3) {
    uVar1 = 4;
  }
  switch (param_3) {
  case 0: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar3, 0, (const char *)(void *)(DAT_006a0000_abs + 0x168));
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText((param_1 + 0x18) * 0xc, scaledY, uVar3, uVar1, (const char *)&gp0xffffa3b8, *(u32 *)(iVar2 + 0x198));
    break;
  }
  case 1: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar3, 0, (const char *)(void *)DAT_0069ff20);
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText((param_1 + 0x18) * 0xc, scaledY, uVar3, uVar1, (const char *)&gp0xffffa3b8, *(u32 *)(iVar2 + 0x198));
    break;
  }
  case 2: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar3, 0, (const char *)(void *)(DAT_006a0000_abs + 0x178));
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText((param_1 + 0x18) * 0xc, scaledY, uVar3, uVar1, (const char *)&gp0xffffa3b8, *(u32 *)(iVar2 + 0x198));
    break;
  }
  case 3: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar3, 0, (const char *)(void *)(DAT_006a0000_abs + 0x188));
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText((param_1 + 0x18) * 0xc, scaledY, uVar3, uVar1, (const char *)&gp0xffffa2d0, *(u32 *)(iVar2 + 0x198));
    break;
  }
  }
  return;
}


// FUN_00384370


int FUN_00384370(int param_1,int param_2,int param_3)



{

  int iVar1;
  int iVar2;
  typedef struct {
    u8 pad[0x190];
    int field190;
  } EvtMenuState;
  EvtMenuState *pState;
  pState = (EvtMenuState *)param_3;
  FUN_00361830(param_3);

  FUN_0036f900_evt(param_1,param_2,0x1e,9,0,1,param_3,
                   (code *)&FUN_00384060,(code *)&FUN_003840d0);

  iVar1 = *(int *)(param_3 + 0xd4);

  if (iVar1 != 0x2c) {

    iVar1 = 0;

  }

  else {

    if ((*(u16 *)DAT_007e0952_abs & 0x1000) != 0) {

      iVar2 = pState->field190;
      if (iVar2 == 0) {
        pState->field190 = 3;

      }

      else {

        pState->field190 = iVar2 + -1;

      }

    }

    else {

      if ((*(u16 *)DAT_007e0952_abs & 0x4000) != 0) {

        iVar2 = pState->field190;
        if (iVar2 == 3) {
          pState->field190 = 0;

        }

        else {

          pState->field190 = iVar2 + 1;

        }

      }

    }
    if ((*(u16 *)DAT_007e094e_abs & 0x40) != 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = -(u32)((*(u16 *)DAT_007e094e_abs & 0x20) != 0);
    }


  }

  return iVar1;

}


// FUN_003844B0


u32 FUN_003844b0(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_006a01a0_abs);

  return 2;

}


// FUN_00384520


void FUN_00384520(int param_1,int param_2,int param_3,int param_4)
{
  u32 uVar1;
  int iVar2;
  f32 uVar3;
  RwV4d apuStack_10;

  uVar1 = 0;
  apuStack_10 = *(RwV4d *)DAT_006a01c0_abs;
  FUN_00361830(param_4);
  iVar2 = (int)param_4;
  if (*(int *)(iVar2 + 400) == param_3) {
    uVar1 = 4;
  }
  switch (param_3) {
  case 0: {
    s32 scaledY = param_2 * 0xc;
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar3, 0, (const char *)&gp0xffffa630);
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText((param_1 + 0x14) * 0xc, scaledY, uVar3, uVar1,
                    (const char *)&gp0xffffa068, ((u32 *)&apuStack_10)[*(int *)(iVar2 + 0x198)]);
    break;
  }
  case 1: {
    s32 scaledY = param_2 * 0xc;
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar3, 0, (const char *)DAT_006a01d0_abs);
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText((param_1 + 0x14) * 0xc, scaledY, uVar3, uVar1,
                    (const char *)&gp0xffffa3b8, *(u32 *)(iVar2 + 0x19c) & 0x3ff);
    break;
  }
  case 2:
    if (*(int *)(iVar2 + 0x198) == 0) {
      s32 scaledY = param_2 * 0xc;
      uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
      evtMenuDrawText(param_1 * 0xc, scaledY, uVar3, 0, (const char *)&gp0xffffa6c8);
      uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
      evtMenuDrawText((param_1 + 0x14) * 0xc, scaledY, uVar3, uVar1,
                      (const char *)&gp0xffffa3b8, *(u32 *)(iVar2 + 0x1a0));
    }
    break;
  }
}


/* opt_lifetimes on: default nd337/572B -> nd331/572B; retained. */
#pragma push
#pragma opt_lifetimes on
/* W419 global-address probe negative: base+0x952 grew object 572 -> 588B and nd331 -> 346 (window608); rate 57.87% -> 58.84%; reverted. */
// FUN_00384780


#ifndef PC_BUILD
asm int FUN_00384780(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x24100001
  .word 0x0220202d
  .word 0x0c0d860c
  .word 0x00000000
  .word 0x3c020038
  .word 0x24424520
  .word 0xffa20000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x2406001e
  .word 0x24070006
  .word 0x0000402d
  .word 0x0200482d
  .word 0x0220502d
  .word 0x3c0b0038
  .word 0x256b44b0
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e2300d4
  .word 0x2402002d
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000006e
  .word 0x00000000
  .word 0x8e220198
  .word 0x14400002
  .word 0x00000000
  .word 0x24100002
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000b
  .word 0x00000000
  .word 0x8e220190
  .word 0x14400004
  .word 0x00000000
  .word 0xae300190
  .word 0x10000010
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae220190
  .word 0x1000000c
  .word 0x00000000
  .word 0x30624000
  .word 0x10400009
  .word 0x00000000
  .word 0x8e220190
  .word 0x14500004
  .word 0x00000000
  .word 0xae200190
  .word 0x10000003
  .word 0x00000000
  .word 0x24420001
  .word 0xae220190
  .word 0x8e230190
  .word 0x24020002
  .word 0x10620026
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000003d
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30422000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e220198
  .word 0x24420001
  .word 0xae220198
  .word 0xae20019c
  .word 0xae2001a0
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30428000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e220198
  .word 0x2442ffff
  .word 0xae220198
  .word 0xae20019c
  .word 0xae2001a0
  .word 0x8e230198
  .word 0x28620004
  .word 0x14400004
  .word 0x00000000
  .word 0xae200198
  .word 0x10000022
  .word 0x00000000
  .word 0x04610020
  .word 0x00000000
  .word 0x24020003
  .word 0xae220198
  .word 0x1000001c
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30422000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e2201a0
  .word 0x24420001
  .word 0xae2201a0
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30428000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e2201a0
  .word 0x2442ffff
  .word 0xae2201a0
  .word 0x8e2301a0
  .word 0x2862001e
  .word 0x14400004
  .word 0x00000000
  .word 0xae2001a0
  .word 0x10000005
  .word 0x00000000
  .word 0x04610003
  .word 0x00000000
  .word 0x2402001d
  .word 0xae2201a0
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop


// FUN_003849E0


u32 FUN_003849e0(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_006a01e0_abs);

  return 2;

}


// FUN_00384A50


void FUN_00384a50(int param_1,int param_2,int param_3,int param_4)



{

  u32 uVar1;

  int iVar2;

  f32 uVar3;

  

  uVar1 = 0;

  FUN_00361830(param_4);

  iVar2 = (int)param_4;

  if (*(int *)(iVar2 + 400) == param_3) {

    uVar1 = 4;

  }

  switch (param_3) {
  case 0: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar3, 0, (const char *)(void *)(DAT_006a0000_abs + 0x1f0));
    if (*(int *)(iVar2 + 0x1b8) == 0) {
      uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
      evtMenuDrawText((param_1 + 0x14) * 0xc, scaledY, uVar3, uVar1, (const char *)&gp0xffffa0b8);
    }
    else {
      uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
      evtMenuDrawText((param_1 + 0x14) * 0xc, scaledY, uVar3, uVar1, (const char *)&gp0xffffa0c0);
    }
    break;
  }
  case 1: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar3, 0, (const char *)(void *)(DAT_006a0000_abs + 0x200));
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText((param_1 + 0x14) * 0xc, scaledY, uVar3, uVar1, (const char *)&gp0xffffa3b8, *(u32 *)(iVar2 + 0x1bc));
    break;
  }
  case 2: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar3, 0, (const char *)(void *)(DAT_006a0000_abs + 0x210));
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText((param_1 + 0x14) * 0xc, scaledY, uVar3, uVar1, (const char *)&gp0xffffa3b8, *(u32 *)(iVar2 + 0x1c0));
    break;
  }
  case 3: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar3, 0, (const char *)(void *)(DAT_006a0000_abs + 0x220));
    uVar3 = FUN_0038a220(*(u32 *)(iVar2 + 0xe0));
    evtMenuDrawText((param_1 + 0x14) * 0xc, scaledY, uVar3, uVar1, (const char *)&gp0xffffa3b8, *(u32 *)(iVar2 + 0x1c4));
    break;
  }
  }

  return;

}


// FUN_00384D30






#ifndef PC_BUILD
asm u32 FUN_00384d30(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x0220202d
  .word 0x0c0d860c
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c020038
  .word 0x24424a50
  .word 0xffa20000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x2406001e
  .word 0x24070006
  .word 0x0000402d
  .word 0x24090001
  .word 0x0220502d
  .word 0x3c0b0038
  .word 0x256b49e0
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e2300d4
  .word 0x2402002e
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000104
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e220190
  .word 0x14400005
  .word 0x00000000
  .word 0x24020003
  .word 0xae220190
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae220190
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e230190
  .word 0x24020003
  .word 0x14620004
  .word 0x00000000
  .word 0xae200190
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae220190
  .word 0x3c02007e
  .word 0x9442094c
  .word 0x30420010
  .word 0x10400030
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400006
  .word 0x00000000
  .word 0x9382b908
  .word 0x24420001
  .word 0xa382b908
  .word 0x10000007
  .word 0x00000000
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x9382b908
  .word 0x2442ffff
  .word 0xa382b908
  .word 0x9382b908
  .word 0x28410003
  .word 0x14200002
  .word 0x00000000
  .word 0xa380b908
  .word 0x9382b908
  .word 0x04410003
  .word 0x00000000
  .word 0x24020002
  .word 0xa382b908
  .word 0x9383b908
  .word 0x24020002
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000007f
  .word 0x00000000
  .word 0x2402000d
  .word 0xae2201c0
  .word 0x24020006
  .word 0xae2201c4
  .word 0x10000079
  .word 0x00000000
  .word 0x24020008
  .word 0xae2201c0
  .word 0x24020006
  .word 0xae2201c4
  .word 0x10000073
  .word 0x00000000
  .word 0xa380b908
  .word 0x8e230190
  .word 0x24020003
  .word 0x10620053
  .word 0x00000000
  .word 0x24020002
  .word 0x10620033
  .word 0x00000000
  .word 0x24020001
  .word 0x10620013
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000064
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x14400004
  .word 0x00000000
  .word 0x30628000
  .word 0x1040005c
  .word 0x00000000
  .word 0x8e2201b8
  .word 0x00401026
  .word 0x2c420001
  .word 0xae2201b8
  .word 0x10000056
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30422000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e2201bc
  .word 0x24420001
  .word 0xae2201bc
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30428000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e2201bc
  .word 0x2442ffff
  .word 0xae2201bc
  .word 0x8e2301bc
  .word 0x28620004
  .word 0x14400004
  .word 0x00000000
  .word 0xae2001bc
  .word 0x1000003f
  .word 0x00000000
  .word 0x0461003d
  .word 0x00000000
  .word 0x24020003
  .word 0xae2201bc
  .word 0x10000039
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30422000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e2201c0
  .word 0x24420001
  .word 0xae2201c0
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30428000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e2201c0
  .word 0x2442ffff
  .word 0xae2201c0
  .word 0x8e2301c0
  .word 0x2862003d
  .word 0x14400004
  .word 0x00000000
  .word 0xae2001c0
  .word 0x10000022
  .word 0x00000000
  .word 0x04610020
  .word 0x00000000
  .word 0x2402003c
  .word 0xae2201c0
  .word 0x1000001c
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30422000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e2201c4
  .word 0x24420001
  .word 0xae2201c4
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30428000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e2201c4
  .word 0x2442ffff
  .word 0xae2201c4
  .word 0x8e2301c4
  .word 0x2862003d
  .word 0x14400004
  .word 0x00000000
  .word 0xae2001c4
  .word 0x10000005
  .word 0x00000000
  .word 0x04610003
  .word 0x00000000
  .word 0x2402003c
  .word 0xae2201c4
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x1040001d
  .word 0x00000000
  .word 0x8e220164
  .word 0x8c430000
  .word 0x24020030
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x82030010
  .word 0x24020004
  .word 0x1062000a
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x24020006
  .word 0xae220190
  .word 0x10000003
  .word 0x00000000
  .word 0x24020003
  .word 0xae220190
  .word 0x24020001
  .word 0x10000021
  .word 0x00000000
  .word 0x30620020
  .word 0x1040001d
  .word 0x00000000
  .word 0x8e220164
  .word 0x8c430000
  .word 0x24020030
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x82030010
  .word 0x24020004
  .word 0x1062000a
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x24020006
  .word 0xae220190
  .word 0x10000003
  .word 0x00000000
  .word 0x24020003
  .word 0xae220190
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_003851F0


u32 FUN_003851f0(int param_1,int param_2,int param_3)



{

  f32 uVar1;

  

  uVar1 = FUN_0038a220(*(u32 *)(param_3 + 0xe0));

  evtMenuDrawText(param_1 * 0xc, param_2 * 0xc, uVar1, 0, (const char *)DAT_006a0230_abs);

  return 2;

}


// FUN_00385260


void FUN_00385260(int param_1,int param_2,int param_3,int param_4)



{

  int iVar1;

  u32 uVar2;

  int iVar3;

  f32 uVar4;

  RwV2d afStack_8;

  

  uVar2 = 0;
  afStack_8 = *(RwV2d *)&PTR_DAT_007cd3d0_f32;


  FUN_00361830(param_4);

  iVar3 = (int)param_4;

  if (*(int *)(iVar3 + 400) == param_3) {

    uVar2 = 4;

  }

  switch (param_3) {
  case 0: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar4, 0, (const char *)(void *)(DAT_006a0000_abs + 0x240));
    iVar1 = *(int *)(iVar3 + 0x198);
    if (iVar1 < 2) {
      uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
      evtMenuDrawText((param_1 + 0x14) * 0xc, scaledY, uVar4, uVar2, (const char *)&gp0xffffa068, ((u32 *)&afStack_8)[iVar1]);
    }
    break;
  }
  case 1: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar4, 0, (const char *)&gp0xffffa6e8);
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText((param_1 + 0x14) * 0xc, scaledY, uVar4, uVar2, (const char *)&gp0xffffa3b8, *(u32 *)(iVar3 + 0x19c));
    break;
  }
  case 2: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar4, 0, (const char *)(void *)(DAT_006a0000_abs + 0x250));
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText((param_1 + 0x14) * 0xc, scaledY, uVar4, uVar2, (const char *)&gp0xffffa3b8, *(u32 *)(iVar3 + 0x1a0));
    break;
  }
  case 3: {
    s32 scaledY;
    scaledY = param_2 * 0xc;
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText(param_1 * 0xc, scaledY, uVar4, 0, (const char *)(void *)(DAT_006a0000_abs + 0x260));
    uVar4 = FUN_0038a220(*(u32 *)(iVar3 + 0xe0));
    evtMenuDrawText((param_1 + 0x14) * 0xc, scaledY, uVar4, uVar2, (const char *)&gp0xffffa3b8, *(u32 *)(iVar3 + 0x1a4));
    break;
  }
  }

  return;

}


// FUN_00385520


#ifndef PC_BUILD
asm int FUN_00385520(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x00c0802d
  .word 0x0200202d
  .word 0x0c0d860c
  .word 0x00000000
  .word 0x3c020038
  .word 0x24425260
  .word 0xffa20000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2406001e
  .word 0x24070006
  .word 0x0000402d
  .word 0x24090001
  .word 0x0200502d
  .word 0x3c0b0038
  .word 0x256b51f0
  .word 0x0c0dbe40
  .word 0x00000000
  .word 0x8e0300d4
  .word 0x2402002f
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000a8
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e020190
  .word 0x14400005
  .word 0x00000000
  .word 0x24020003
  .word 0xae020190
  .word 0x10000011
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae020190
  .word 0x1000000d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e030190
  .word 0x24020003
  .word 0x14620004
  .word 0x00000000
  .word 0xae000190
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae020190
  .word 0x8e030190
  .word 0x24020003
  .word 0x10620062
  .word 0x00000000
  .word 0x24020002
  .word 0x10620042
  .word 0x00000000
  .word 0x24020001
  .word 0x10620022
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000073
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30622000
  .word 0x10400006
  .word 0x00000000
  .word 0x8e020198
  .word 0x24420001
  .word 0xae020198
  .word 0x10000007
  .word 0x00000000
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e020198
  .word 0x2442ffff
  .word 0xae020198
  .word 0x8e030198
  .word 0x28620002
  .word 0x14400004
  .word 0x00000000
  .word 0xae000198
  .word 0x1000005c
  .word 0x00000000
  .word 0x0461005a
  .word 0x00000000
  .word 0x24020001
  .word 0xae020198
  .word 0x10000056
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30422000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e02019c
  .word 0x24420001
  .word 0xae02019c
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30428000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e02019c
  .word 0x2442ffff
  .word 0xae02019c
  .word 0x8e03019c
  .word 0x28620002
  .word 0x14400004
  .word 0x00000000
  .word 0xae00019c
  .word 0x1000003f
  .word 0x00000000
  .word 0x0461003d
  .word 0x00000000
  .word 0x24020001
  .word 0xae02019c
  .word 0x10000039
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30422000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e0201a0
  .word 0x24420001
  .word 0xae0201a0
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30428000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e0201a0
  .word 0x2442ffff
  .word 0xae0201a0
  .word 0x8e0301a0
  .word 0x28620005
  .word 0x14400004
  .word 0x00000000
  .word 0xae0001a0
  .word 0x10000022
  .word 0x00000000
  .word 0x04610020
  .word 0x00000000
  .word 0x24020004
  .word 0xae0201a0
  .word 0x1000001c
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30422000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e0201a4
  .word 0x24420001
  .word 0xae0201a4
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30428000
  .word 0x10400004
  .word 0x00000000
  .word 0x8e0201a4
  .word 0x2442ffff
  .word 0xae0201a4
  .word 0x8e0301a4
  .word 0x28620080
  .word 0x14400004
  .word 0x00000000
  .word 0xae0001a4
  .word 0x10000005
  .word 0x00000000
  .word 0x04610003
  .word 0x00000000
  .word 0x2402007f
  .word 0xae0201a4
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x30620020
  .word 0x0002102b
  .word 0x00021023
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_00385860


u32 FUN_00385860(int param_1,u32 param_2,u32 param_3,u32 param_4,EvtMenuState *param_5)



{

  u32 uVar1;
  code *entry;
  
  entry = &DAT_006a0270[param_1];
  if (*entry == 0) {
    uVar1 = 0;
  }
  else {
    param_5->menuId = param_1;
    param_5->menuArg = param_2;
    uVar1 = (*entry)(param_3,param_4,param_5);
  }
  return uVar1;

}


#pragma alias FUN_001005b0_evt FUN_001005b0
extern u32 FUN_001005b0_evt(f32 scale,u32 resource,u64 flags,void *params,u32 color);
// FUN_003858C0


void FUN_003858c0(int param_1)



{

  u32 *puVar1;


  int iVar3;


  u32 auStack_20[8];

  

  auStack_20[0] = 0;

  auStack_20[1] = 0;

  auStack_20[2] = 0x82;

  auStack_20[3] = 0x120;

  auStack_20[4] = 0;

  auStack_20[5] = 0;

  ((u8 *)(auStack_20 + 7))[3] = 0xb4;
  ((u8 *)(auStack_20 + 7))[0] = 0x0a;
  ((u8 *)(auStack_20 + 7))[2] = 0x0a;
  ((u8 *)(auStack_20 + 7))[1] = 0x40;


  for (iVar3 = 0; iVar3 < 7; iVar3 = iVar3 + 1) {
    ((EvtMenuState *)param_1)->resourceHandles[iVar3] =
        FUN_001005b0_evt(2.0f,*(u32 *)(param_1 + 0x92c),
                         *(u64 *)(auStack_20 + 4),
                         &auStack_20[0],auStack_20[7]);

    puVar1 = (u32 *)FUN_00100570(((EvtMenuState *)param_1)->resourceHandles[iVar3]);

    *puVar1 = 0;

  }

  return;

}


// FUN_00385990


void FUN_00385990(u32 param_1,int param_2,int param_3,int param_4,u32 param_5,
                  f32 param_6)



{

  char cVar1;

  int iVar2;
  int iVar4;

  u32 *puVar3;

  RwV2d pos;
  RwRect rect;
  RwRGBA color;


  

  if (*(char *)(param_1 + 0x940) < 7) goto skip_error;
  FUN_0019d3f0((const char *)(DAT_006a0000_abs - 0x1bf8),0x2bf7);
skip_error:
  ;

  cVar1 = *(char *)(param_1 + 0x940);
  *(char *)(param_1 + 0x940) = cVar1 + '\x01';

  iVar4 = cVar1 * 4;
  iVar4 = iVar4 + param_1;
  iVar2 = *(int *)(iVar4 + 0x944);

  if (iVar2 != 0) {

    puVar3 = (u32 *)FUN_00100570(iVar2);

    *puVar3 = 1;

    if (*(int *)(param_1 + 0xd8) != 0xb) {

      pos.x = (f32)param_2;
      pos.y = (f32)param_3;
      FUN_00100710(iVar2,pos);
      FUN_00100770(iVar2,param_6);
      rect.x = 0;
      rect.y = 0;
      rect.w = param_4;
      rect.h = param_5;
      FUN_00100740(iVar2,rect);
      if (*(int *)(param_1 + 0xd4) == *(int *)(param_1 + 0xd8)) {
        color.a = 0xd2;
        color.r = 0x1e;
        color.b = 0x1e;
        color.g = 0x50;
      }
      else {
        color.a = 0x64;
        color.r = 0x0a;
        color.b = 0x0a;
        color.g = 0x3c;
      }

      FUN_00100780(iVar2,color);

    }

  }

  return;

}


// FUN_00385B20


void FUN_00385b20(int param_1)



{

  u32 *puVar1;

  int iVar2;
  int iVar3;

  

  *(u8 *)(param_1 + 0x940) = 0;

  for (iVar2 = 0; iVar2 < 7; iVar2 = iVar2 + 1) {

    if ((iVar3 = *(int *)(param_1 + iVar2 * 4 + 0x944)) != 0) {

      puVar1 = (u32 *)FUN_00100570(iVar3);

      *puVar1 = 0;

    }

  }

  return;

}


// FUN_00385b90


void FUN_00385b90(void)



{

  return;

}


// FUN_00385BA0


void FUN_00385ba0(void)



{
  FUN_005225a8(DAT_006a0330,0);

  return;

}


// FUN_00385BD0


u32 FUN_00385bd0(int param_1,u64 param_2)



{

  u32 uVar1;

  u32 *puVar2;

  u32 uVar3;

  

  uVar3 = FUN_001a3ae0(param_2,0x10,0x40);

  FUN_001a3dc0(uVar3, DAT_006a0350_abs, 5);

  FUN_001a3bf0(uVar3,1);

  uVar1 = *(u32 *)(param_1 + 0x198);

  puVar2 = (u32 *)FUN_001a41b0(uVar3,0);

  *puVar2 = uVar1;

  uVar1 = *(u32 *)(param_1 + 0x19c);

  puVar2 = (u32 *)FUN_001a41b0(uVar3,1);

  *puVar2 = uVar1;

  uVar1 = *(u32 *)(param_1 + 0x1a0);

  puVar2 = (u32 *)FUN_001a41b0(uVar3,2);

  *puVar2 = uVar1;

  uVar1 = *(u32 *)(param_1 + 0x1a4);

  puVar2 = (u32 *)FUN_001a41b0(uVar3,3);

  *puVar2 = uVar1;

  uVar1 = *(u32 *)(param_1 + 0x1a8);

  puVar2 = (u32 *)FUN_001a41b0(uVar3,4);

  *puVar2 = uVar1;

  *(u32 *)(param_1 + 0x16c) = 0;

  return uVar3;

}


// FUN_00385CD0


u32 FUN_00385cd0(int param_1)



{

  u32 uVar3;
  int iVar6;

  u32 *puVar1;

  int *piVar2;

  float fVar4;

  float fVar5;

  

  uVar3 = FUN_001a3ae0(*(u32 *)(param_1 + 0x92c),200,0x140);

  FUN_001a3dc0(uVar3, DAT_006a03f0_abs, 8);

  FUN_001a3bf0(uVar3,1);

  fVar5 = *(float *)(param_1 + 0x198);

  puVar1 = (u32 *)FUN_001a42f0(uVar3,0);

  *(float *)puVar1 = fVar5;

  fVar5 = *(float *)(param_1 + 0x19c);

  puVar1 = (u32 *)FUN_001a42f0(uVar3,1);

  *(float *)puVar1 = fVar5;

  fVar5 = *(float *)(param_1 + 0x1a0);

  puVar1 = (u32 *)FUN_001a42f0(uVar3,2);

  *(float *)puVar1 = fVar5;

  fVar5 = *(float *)(param_1 + 0x1a4);

  puVar1 = (u32 *)FUN_001a42f0(uVar3,3);

  *(float *)puVar1 = fVar5;

  fVar5 = *(float *)(param_1 + 0x1a8);

  puVar1 = (u32 *)FUN_001a42f0(uVar3,4);

  *(float *)puVar1 = fVar5;

  fVar5 = *(float *)(param_1 + 0x1ac);

  puVar1 = (u32 *)FUN_001a42f0(uVar3,5);

  *(float *)puVar1 = fVar5;

  iVar6 = (int)*(float *)(param_1 + 0x1b0);

  piVar2 = (int *)FUN_001a41b0(uVar3,6);

  *piVar2 = iVar6;

  iVar6 = (int)*(float *)(param_1 + 0x1b4);

  piVar2 = (int *)FUN_001a41b0(uVar3,7);

  *piVar2 = iVar6;

  return uVar3;

}


// FUN_00385E20


u32 FUN_00385e20(int param_1)



{

  u32 uVar1;

  u32 *puVar2;

  u32 uVar3;

  

  uVar3 = FUN_001a3ae0(*(u32 *)(param_1 + 0x92c),0xf0,0x80);

  FUN_001a3dc0(uVar3, DAT_006a0530_abs, 4);

  FUN_001a3bf0(uVar3,1);

  uVar1 = *(u32 *)(param_1 + 0x198);

  puVar2 = (u32 *)FUN_001a41b0(uVar3,0);

  *puVar2 = uVar1;

  uVar1 = *(u32 *)(param_1 + 0x19c);

  puVar2 = (u32 *)FUN_001a41b0(uVar3,1);

  *puVar2 = uVar1;

  uVar1 = *(u32 *)(param_1 + 0x1a0);

  puVar2 = (u32 *)FUN_001a41b0(uVar3,2);

  *puVar2 = uVar1;

  uVar1 = *(u32 *)(param_1 + 0x1a4);

  puVar2 = (u32 *)FUN_001a41b0(uVar3,3);

  *puVar2 = uVar1;

  return uVar3;

}


// FUN_00385F00


u32 FUN_00385f00(int param_1)


{

  int cVar1;

  int *piVar2;

  u32 uVar3;
  

  uVar3 = FUN_001a3ae0(*(u32 *)(param_1 + 0x92c),0xf0,0x80);

  FUN_001a3dc0(uVar3, DAT_006a05c0_abs, 1);

  FUN_001a3bf0(uVar3,1);

  cVar1 = *(char *)(param_1 + 0x44);

  piVar2 = (int *)FUN_001a41b0(uVar3,0);

  *piVar2 = (int)cVar1;

  return uVar3;

}


// FUN_00385F90


u32 FUN_00385f90(int param_1)



{

  u32 uVar1;

  u32 *puVar2;

  u32 uVar3;

  

  uVar3 = FUN_001a3ae0(*(u32 *)(param_1 + 0x92c),0xaa,300);

  FUN_001a3dc0(uVar3, DAT_006a0610_abs, 3);

  FUN_001a3bf0(uVar3,1);

  *(u32 *)(param_1 + 0x16c) = 6;

  uVar1 = *(u32 *)(param_1 + 0x198);

  puVar2 = (u32 *)FUN_001a41b0(uVar3,0);

  *puVar2 = uVar1;

  uVar1 = *(u32 *)(param_1 + 0x19c);

  puVar2 = (u32 *)FUN_001a41b0(uVar3,1);

  *puVar2 = uVar1;

  uVar1 = *(u32 *)(param_1 + 0x1a0);

  puVar2 = (u32 *)FUN_001a41b0(uVar3,2);

  *puVar2 = uVar1;

  return uVar3;

}


// FUN_00386060


u32 FUN_00386060(int param_1)


{

  u32 uVar1;

  u32 *puVar2;

  u32 uVar3;
  

  uVar3 = FUN_001a3ae0(*(u32 *)(param_1 + 0x92c),0xaa,300);

  FUN_001a3dc0(uVar3, DAT_006a0670_abs, 2);

  FUN_001a3bf0(uVar3,1);

  *(u32 *)(param_1 + 0x16c) = 7;

  uVar1 = *(u32 *)(param_1 + 0x198);

  puVar2 = (u32 *)FUN_001a41b0(uVar3,0);

  *puVar2 = uVar1;

  uVar1 = *(u32 *)(param_1 + 0x19c);

  puVar2 = (u32 *)FUN_001a41b0(uVar3,1);

  *puVar2 = uVar1;

  return uVar3;

}


// FUN_00386110


void FUN_00386110(u32 *param_1,u32 *param_2)



{

  *param_1 = (u32)(uintptr_t)DAT_009588a0_abs;
  *param_2 = (u32)(uintptr_t)DAT_00958890_abs;

  return;

}


// FUN_00386130


u32 FUN_00386130(int param_1,f32 *param_2,f32 *param_3)


{

  u32 uVar1;
  struct Vec3 { f32 x; f32 y; f32 z; };
  

  uVar1 = FUN_001a3ae0(*(u32 *)(param_1 + 0x92c),0xaa,300);

  FUN_001a3dc0(uVar1, DAT_006a06b0_abs, 1);

  FUN_001a3bf0(uVar1,1);

  *(u32 *)(param_1 + 0x16c) = 8;
  *(struct Vec3 *)DAT_009588a0_abs = *(struct Vec3 *)param_2;
  *(struct Vec3 *)DAT_00958890_abs = *(struct Vec3 *)param_3;


  return uVar1;

}


// FUN_00386210


void FUN_00386210(u32 *param_1,u32 *param_2)



{

  *param_1 = (u32)(uintptr_t)DAT_009588a0_abs;
  *param_2 = (u32)(uintptr_t)DAT_00958890_abs;

  return;

}


// FUN_00386230


u32 FUN_00386230(int param_1,u32 *param_2,u32 *param_3)



{

  u32 uVar1;
  struct Vec3 { f32 x; f32 y; f32 z; };

  

  uVar1 = FUN_001a3ae0(*(u32 *)(param_1 + 0x92c),0xaa,300);

  FUN_001a3dc0(uVar1, DAT_006a06d0_abs, 1);

  FUN_001a3bf0(uVar1,1);

  *(u32 *)(param_1 + 0x16c) = 0xc;

  *(struct Vec3 *)DAT_009588a0_abs = *(struct Vec3 *)param_2;

  *(struct Vec3 *)DAT_00958890_abs = *(struct Vec3 *)param_3;

  return uVar1;

}


// FUN_00386310


u32 FUN_00386310(int param_1)



{

  u32 uVar1;

  

  uVar1 = FUN_001a3ae0(*(u32 *)(param_1 + 0x92c),0x10,0x60);

  FUN_001a3dc0(uVar1, DAT_006a06f0_abs, 1);

  FUN_001a3bf0(uVar1,1);

  *(u32 *)(param_1 + 0x16c) = 9;

  return uVar1;

}


// FUN_00386390


void FUN_00386390(u32 *param_1,u32 *param_2,u32 *param_3,u32 *param_4)



{

  *param_1 = (u32)(uintptr_t)DAT_00958850_abs;

  *param_2 = (u32)(uintptr_t)&DAT_007ce60c;

  *param_3 = (u32)(uintptr_t)&DAT_007ce608;

  *param_4 = DAT_007ce604;

  return;

}


// FUN_003863C0


int FUN_003863c0(void)



{

  int iVar1;
  int iVar2;
  
  iVar1 = -1;
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    if (FUN_001a4510(DAT_007ce600) == iVar2) {
      iVar1 = iVar2;
      break;
    }
  }


  return iVar1;

}
/* W414: loop-local declaration-order probes left nd18 unchanged. */
// FUN_00386430


#ifndef PC_BUILD
asm u32 FUN_00386430(int param_1,u16 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00a0882d
  .word 0x00c0902d
  .word 0x8c84092c
  .word 0x24050010
  .word 0x24060060
  .word 0x0c068eb8
  .word 0x00000000
  .word 0x0040802d
  .word 0xaf90b910
  .word 0x0200202d
  .word 0x3c05006a
  .word 0x24a50730
  .word 0x24060002
  .word 0x0c068f70
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c068efc
  .word 0x00000000
  .word 0x2402000a
  .word 0xae62016c
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0xaf82b914
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0xac520000
  .word 0xaf80b91c
  .word 0x24040003
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x3c040096
  .word 0x24848850
  .word 0x1000000c
  .word 0x00000000
  .word 0x8f86b91c
  .word 0x28c1001e
  .word 0x1020000a
  .word 0x00000000
  .word 0x94450000
  .word 0x00061840
  .word 0x00831821
  .word 0xa4650000
  .word 0x24c30001
  .word 0xaf83b91c
  .word 0x8c4200f8
  .word 0x1440fff4
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x3c040096
  .word 0x24848850
  .word 0x1000000c
  .word 0x00000000
  .word 0x8f86b91c
  .word 0x28c1001e
  .word 0x1020000a
  .word 0x00000000
  .word 0x94450000
  .word 0x00061840
  .word 0x00831821
  .word 0xa4650000
  .word 0x24c30001
  .word 0xaf83b91c
  .word 0x8c4200f8
  .word 0x1440fff4
  .word 0x00000000
  .word 0xaf80b918
  .word 0x0000302d
  .word 0x3225ffff
  .word 0x8f84b91c
  .word 0x3c030096
  .word 0x24638850
  .word 0x1000000c
  .word 0x00000000
  .word 0x00061040
  .word 0x00621021
  .word 0x94420000
  .word 0x14a20006
  .word 0x00000000
  .word 0x10a00004
  .word 0x00000000
  .word 0xaf86b918
  .word 0x10000005
  .word 0x00000000
  .word 0x24c60001
  .word 0x00c4102a
  .word 0x1440fff3
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_003865F0


u32 FUN_003865f0(int param_1)



{

  s32 cVar1;

  int *piVar2;

  u32 uVar3;

  

  uVar3 = FUN_001a3ae0(*(u32 *)(param_1 + 0x92c),0xf0,0x80);

  FUN_001a3dc0(uVar3, DAT_006a0780_abs, 1);

  FUN_001a3bf0(uVar3,1);

  *(u32 *)(param_1 + 0x16c) = 0xb;

  cVar1 = *(s8 *)(param_1 + 0x45);

  piVar2 = (int *)FUN_001a41b0(uVar3,0);

  *piVar2 = cVar1;

  return uVar3;

}


// FUN_00386680


u32

FUN_00386680(int param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5

            )



{

  u32 *puVar1;

  u32 uVar2;

  

  uVar2 = FUN_001a3ae0(*(u32 *)(param_1 + 0x92c),0xbe,0x100);

  FUN_001a3dc0(uVar2, DAT_006a07e0_abs, 4);

  FUN_001a3bf0(uVar2,1);

  *(u32 *)(param_1 + 0x16c) = 0xd;

  puVar1 = (u32 *)FUN_001a41b0(uVar2,0);

  *puVar1 = param_2;

  puVar1 = (u32 *)FUN_001a41b0(uVar2,1);

  *puVar1 = param_3;

  puVar1 = (u32 *)FUN_001a41b0(uVar2,2);

  *puVar1 = param_4;

  puVar1 = (u32 *)FUN_001a41b0(uVar2,3);

  *puVar1 = param_5;

  return uVar2;

}


// FUN_00386780


u32 FUN_00386780(int param_1,u32 param_2,u32 param_3,u32 param_4)



{

  u32 *puVar1;

  u32 uVar2;

  

  uVar2 = FUN_001a3ae0(*(u32 *)(param_1 + 0x92c),0xbe,0x100);

  FUN_001a3dc0(uVar2, DAT_006a0890_abs, 3);

  FUN_001a3bf0(uVar2,1);

  *(u32 *)(param_1 + 0x16c) = 0xe;

  puVar1 = (u32 *)FUN_001a41b0(uVar2,0);

  *puVar1 = param_2;

  puVar1 = (u32 *)FUN_001a41b0(uVar2,1);

  *puVar1 = param_3;

  puVar1 = (u32 *)FUN_001a41b0(uVar2,2);

  *puVar1 = param_4;

  return uVar2;

}


// FUN_00386860


u32 FUN_00386860(int param_1,u32 param_2,u32 param_3,u32 param_4)



{

  u32 *puVar1;

  u32 uVar2;

  

  uVar2 = FUN_001a3ae0(*(u32 *)(param_1 + 0x92c),0xbe,0x100);

  FUN_001a3dc0(uVar2, DAT_006a0920_abs, 3);

  FUN_001a3bf0(uVar2,1);

  *(u32 *)(param_1 + 0x16c) = 0xf;

  puVar1 = (u32 *)FUN_001a41b0(uVar2,0);

  *puVar1 = param_2;

  puVar1 = (u32 *)FUN_001a41b0(uVar2,1);

  *puVar1 = param_3;

  puVar1 = (u32 *)FUN_001a41b0(uVar2,2);

  *puVar1 = param_4;

  return uVar2;

}


// FUN_00386940


u32 FUN_00386940(int param_1,int param_2,f32 param_3)



{

  u32 *puVar1;

  u32 uVar2;

  

  uVar2 = FUN_001a3ae0(*(u32 *)(param_1 + 0x92c),0xbe,0x100);

  FUN_001a3dc0(uVar2, DAT_006a0990_abs, 2);

  FUN_001a3bf0(uVar2,1);

  *(u32 *)(param_1 + 0x16c) = 0x10;

  puVar1 = (u32 *)FUN_001a41b0(uVar2,0);

  *puVar1 = param_2;

  puVar1 = (u32 *)FUN_001a42f0(uVar2,1);

  *(f32 *)puVar1 = param_3;

  return uVar2;

}


// FUN_00386A00


u32 FUN_00386a00(int param_1,u32 param_2)


{

  u32 *puVar1;

  u32 uVar2;
  

  uVar2 = FUN_001a3ae0(*(u32 *)(param_1 + 0x92c),0xbe,0x100);

  FUN_001a3dc0(uVar2, DAT_006a09f0_abs, 1);

  FUN_001a3bf0(uVar2,1);

  *(u32 *)(param_1 + 0x16c) = 0x11;

  puVar1 = (u32 *)FUN_001a41b0(uVar2,0);

  *puVar1 = param_2;

  return uVar2;

}


// FUN_00386AA0


void FUN_00386aa0(void)
{
  int iVar1;
  u32 *puVar2;

  iVar1 = 0;
  puVar2 = (u32 *)DAT_00958a60_abs;
  while (iVar1 < 0xd) {
    if (iVar1 != 0) {
      puVar2[iVar1] = 0;
    }
    iVar1 = iVar1 + 1;
  }
}

