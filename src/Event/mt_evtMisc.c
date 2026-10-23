#include "temporary.h"
extern int FUN_004c31b0();

typedef int (*code)(...);
typedef u8 bool;
#ifndef CONCAT44
#define CONCAT44(hi, lo) ((((u64)(hi)) << 32) | (u32)(lo))
#endif
typedef char *va_list;
#define va_start(ap,last) (ap = ((va_list)__builtin_next_arg(last) - (__builtin_args_info(2) >= 8 ? 0 : (8 - __builtin_args_info(2)) * 8)))
#define va_end(ap) ((void)0)
#pragma alias evtMenuVFormatText FUN_005288c8
extern void evtMenuVFormatText(u8 *text,const char *format,va_list args);
extern u32 FUN_00530da0(float);
#pragma alias FUN_00394040_evt_misc FUN_00394040
extern f32 FUN_00394040_evt_misc(f32 param_1,f32 param_2,f32 param_3,int param_4);
#pragma alias FUN_00394040_evt_misc_reordered FUN_00394040
extern f32 FUN_00394040_evt_misc_reordered(int param_1,f32 param_2,f32 param_3,f32 param_4);
#pragma alias FUN_00394070_evt_misc FUN_00394070
extern void FUN_00394070_evt_misc(f32 param_1,u32 param_2,u32 *param_3,u32 *param_4,u32 *param_5);
#pragma alias FUN_00394070_evt_misc_reordered FUN_00394070
extern void FUN_00394070_evt_misc_reordered(u32 param_1,f32 param_2,u32 *param_3,u32 *param_4,u32 *param_5);
#pragma alias FUN_001050e0_typed FUN_001050e0
extern void FUN_001050e0_typed(u64 param_1,float param_2,u32 param_3,u8 *param_4);
#pragma alias FUN_004cb2f0_evt_misc FUN_004cb2f0
extern u8 *FUN_004cb2f0_evt_misc(u32 param_1);
extern void FUN_00523ac8(u8 *,const char *,u32);
extern char DAT_006a0a20[];
#pragma alias DAT_006a0a20_abs DAT_006a0a20
extern u8 DAT_006a0a20_abs[];
extern u8 DAT_006a0ac0[];
typedef struct MtEvtMiscObj {
  u8 pad_928[0x928];
  int value_928;
} MtEvtMiscObj;

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
extern u32 DAT_0069e1a0;
extern u32 DAT_0069e1a2;
extern u32 DAT_0069e1aa;
extern u32 DAT_0069e420;
extern u32 DAT_0069e422;
extern u32 DAT_006a0270;
extern u32 DAT_006a0bf8;
extern u32 DAT_006a0c00;
extern u32 DAT_007cadc0;
extern u32 DAT_007cadd0;
extern u32 DAT_007cae18;
extern u32 DAT_007cafec;
#pragma alias DAT_007cadd0_f32 DAT_007cadd0
extern f32 DAT_007cadd0_f32;
#pragma alias DAT_007cafec_f32 DAT_007cafec
extern f32 DAT_007cafec_f32;
extern u32 DAT_007cb0cc;
extern u32 DAT_007cb110;
extern u32 DAT_007cb120;
extern u32 DAT_007cb124;
extern u16 DAT_007cca60;
extern u16 DAT_007cca64;
extern u32 DAT_007cca68;
extern u32 DAT_007cca6c;
extern u32 DAT_007ccd20;
extern u32 DAT_007cce48;
extern u32 DAT_007cce4c;
extern u32 DAT_007cce78;
extern u32 DAT_007ccf94;
extern u32 DAT_007cd130;
extern int DAT_007cdeac;
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
extern u32 DAT_007ce60c;
extern u32 DAT_007e094c;
extern u32 DAT_007e094e;
extern u32 DAT_007e0952;
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
extern u32 DAT_009585bc;
extern u32 DAT_009585c0;
extern u32 DAT_009585d0;
extern u32 DAT_00958700;
extern u32 DAT_00958704;
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
extern u32 DAT_00958850;
extern u32 DAT_00958890;
extern u32 DAT_00958894;
extern u32 DAT_00958898;
extern u32 DAT_009588a0;
extern u32 DAT_009588a4;
extern u32 DAT_009588a8;
extern u32 DAT_009588b0;
#pragma alias DAT_009588b0_f32 DAT_009588b0
extern f32 DAT_009588b0_f32[];
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
#pragma alias DAT_009588b0_abs DAT_009588b0
#pragma alias DAT_009588b4_abs DAT_009588b4
#pragma alias DAT_009588b8_abs DAT_009588b8
#pragma alias DAT_009588bc_abs DAT_009588bc
#pragma alias DAT_009588c0_abs DAT_009588c0
#pragma alias DAT_009588c4_abs DAT_009588c4
#pragma alias DAT_009588c8_abs DAT_009588c8
#pragma alias DAT_009588cc_abs DAT_009588cc
#pragma alias DAT_009588d0_abs DAT_009588d0
#pragma alias DAT_009588d4_abs DAT_009588d4
#pragma alias DAT_009588d8_abs DAT_009588d8
#pragma alias DAT_009588dc_abs DAT_009588dc
#pragma alias DAT_009588e0_abs DAT_009588e0
#pragma alias DAT_009588e4_abs DAT_009588e4
extern u8 DAT_009588b0_abs[];
extern u8 DAT_009588b4_abs[];
extern u8 DAT_009588b8_abs[];
extern u8 DAT_009588bc_abs[];
extern u8 DAT_009588c0_abs[];
extern u8 DAT_009588c4_abs[];
extern u8 DAT_009588c8_abs[];
extern u8 DAT_009588cc_abs[];
extern u8 DAT_009588d0_abs[];
extern u8 DAT_009588d4_abs[];
extern u8 DAT_009588d8_abs[];
extern u8 DAT_009588dc_abs[];
extern u8 DAT_009588e0_abs[];
extern u8 DAT_009588e4_abs[];
extern u32 DAT_009588e8;
extern u32 DAT_009588ec;
extern u32 DAT_00958970;
 #pragma alias DAT_00958970_abs DAT_00958970
 #pragma alias DAT_009589c8_abs DAT_009589c8
 extern u8 DAT_009589c8_abs[];
 #pragma alias DAT_009589cc_abs DAT_009589cc
 extern u8 DAT_009589cc_abs[];
 #pragma alias DAT_009589d0_abs DAT_009589d0
 extern u8 DAT_009589d0_abs[];
 extern u8 DAT_00958970_abs[];
extern u32 DAT_00958978;
#pragma alias DAT_00958978_abs DAT_00958978
extern u8 DAT_00958978_abs[];
#pragma alias DAT_0095897a_abs DAT_0095897a
extern u8 DAT_0095897a_abs[];
#pragma alias DAT_0095897c_abs DAT_0095897c
extern u8 DAT_0095897c_abs[];
#pragma alias DAT_0095897e_abs DAT_0095897e
extern u8 DAT_0095897e_abs[];
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
#pragma alias DAT_009589e0_abs DAT_009589e0
extern u8 DAT_009589e0_abs[];
#pragma alias DAT_00958a60_abs DAT_00958a60
extern u8 DAT_00958a60_abs[];
extern u32 DAT_00958a90;
#pragma alias DAT_00958a90_abs DAT_00958a90
extern u32 DAT_00958a90_abs[];
extern f32 DAT_00960088;
#pragma alias DAT_00960088_abs DAT_00960088
extern u8 DAT_00960088_abs[];
extern code DAT_00960090;
#pragma alias DAT_00960090_abs DAT_00960090
extern code DAT_00960090_abs[];
extern code DAT_009600a0;
#pragma alias DAT_009600a0_abs DAT_009600a0
extern code DAT_009600a0_abs[];
extern code DAT_0096017c;
#pragma alias DAT_0096017c_abs DAT_0096017c
extern void (*DAT_0096017c_abs[])(...);
extern code DAT_00960184;
 #pragma alias DAT_00960184_abs DAT_00960184
 #pragma alias FUN_0019d3f0_evt FUN_0019d3f0
 extern void FUN_0019d3f0_evt(const char *param_1,int param_2);
 #pragma alias FUN_0038b2c0_b550 FUN_0038b2c0
 extern void FUN_0038b2c0_b550(u16 *param_1,u32 *param_2,u32 *param_3,u32 *param_4,int param_5);
extern void FUN_003bb280(int param_1);
extern void FUN_00359380(f32 param_1,void *param_2,int param_3);
extern int FUN_0031b680(u16 param_1,u16 param_2,u32 *param_3,int *param_4);
extern u32 FUN_003b9500(int param_1,int param_2);
 extern int (*DAT_00960184_abs[])(...);
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
extern u8 *PTR_s_CREATE_0069da70;
extern u8 *PTR_s_CREATE_0069ee30;
extern u8 *PTR_s_DELETE_0069ee38;
extern u8 *PTR_s_DIRECT_0069e9c0;
extern u8 *PTR_s_DIRECT_0069f9a0;
extern u8 *PTR_s_DIRECT_0069fa88;
extern u8 *PTR_s_DIRECT_007ccda0;
extern u8 *PTR_s_DIRECT_007cd258;
extern u8 *PTR_s_DISABLE_0069e6c8;
extern u8 *PTR_s_DISPONOFF_007ccaa8;
extern u8 *PTR_s_FADEOUT_0069ee14;
extern u8 *PTR_s_FADEOUT_WAIT_007ccf9c;
extern u8 *PTR_s_FADE_IN_007cce88;
extern u8 *PTR_s_FALSE_007ccdb8;
extern u8 *PTR_s_GAKURYOKU_0069feb0;
extern u8 *PTR_s_HAMETU_006a01cc;
extern u8 *PTR_s_HIRU_SASO_0069d880;
extern u8 *PTR_s_KAIKIN_006a01c0;
extern u8 *PTR_s_KEYFREE_007ccfbc;
extern u8 *PTR_s_KUCHI_0069ee18;
extern u8 *PTR_s_LENGTH_007cd22c;
extern u8 *PTR_s_L_FLAG_NOTUSE_0069e990;
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
extern u8 *PTR_s_RELEASE_0069ee28;
extern u8 *PTR_s_REPEAT_007ccd88;
extern u8 *PTR_s_REVERSE_006a01c8;
extern u8 *PTR_s_SAVE_PROJ_;
extern u8 *PTR_s_SOUTAI_007ccd78;
extern u8 *PTR_s_SPEED_007cd228;
extern u8 *PTR_s_START_0069e100;
extern u8 *PTR_s_START_0069ee24;
extern u8 *PTR_s_START_007ccf50;
extern u32 fGpffff80d0;
extern u32 fGpffff8294;
extern u32 fGpffff8438;
extern u8 gp0xffff9d98;
extern u8 gp0xffff9db8;
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
extern u8 gp0xffffa3b8;
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
extern u32 uGpffffa628;
extern u32 uGpffffa62c;
extern u32 uGpffffa650;
extern u32 uGpffffa654;
extern u32 uGpffffb8ec;
extern u32 uGpffffb900;
extern u32 uGpffffb924;

bool FUN_0036d320(int param_1);
bool FUN_0036f480(void);
bool FUN_00372c40(u64 param_1);
code * FUN_0036d500(void);
code * FUN_0036d5f0(void);
code * FUN_0036e140(int param_1);
code * FUN_0036e690(int param_1);
code * FUN_0036ed30(u64 param_1);
code * FUN_0036edd0(void);
code * FUN_0036ee30(void);
float FUN_0038a220(int param_1);
float FUN_0038a900(int param_1);
int FUN_00361830(int param_1);
int FUN_00361ee0(int param_1,int param_2);
int FUN_00361f20(int param_1);
int FUN_00361f60(int param_1,int param_2);
int FUN_00361fe0(long param_1,int param_2);
int FUN_0036be60(u64 param_1,long param_2,u64 param_3);
int FUN_0036fda0(u64 param_1,u64 param_2,u64 param_3);
int FUN_00371dd0(u64 param_1,u64 param_2,u64 param_3);
int FUN_00372790(u64 param_1,u64 param_2,u64 param_3);
int FUN_00375000(u64 param_1,u64 param_2,u64 param_3);
int FUN_0037caf0(u64 param_1,u64 param_2,u64 param_3);
int FUN_0037d5d0(u64 param_1,u64 param_2,u64 param_3);
int FUN_0037e1b0(u64 param_1,u64 param_2,u64 param_3);
int FUN_0037ead0(u64 param_1,u64 param_2,u64 param_3);
int FUN_0037f3d0(u64 param_1,u64 param_2,u64 param_3);
int FUN_0037fae0(u64 param_1,u64 param_2,u64 param_3);
int FUN_00380200(u64 param_1,u64 param_2,u64 param_3);
int FUN_003806f0(u64 param_1,u64 param_2,u64 param_3);
int FUN_00380d70(u64 param_1,u64 param_2,u64 param_3);
int FUN_00381280(u64 param_1,u64 param_2,u64 param_3);
int FUN_003819b0(u64 param_1,u64 param_2,u64 param_3);
int FUN_003820e0(u64 param_1,u64 param_2,u64 param_3);
int FUN_00382500(u64 param_1,u64 param_2,u64 param_3);
int FUN_00382840(u64 param_1,u64 param_2,u64 param_3);
int FUN_00382d60(u64 param_1,u64 param_2,u64 param_3);
int FUN_00383360(u64 param_1,u64 param_2,u64 param_3);
int FUN_00383d80(u64 param_1,u64 param_2,u64 param_3);
int FUN_00384370(u64 param_1,u64 param_2,u64 param_3);
int FUN_00384780(u64 param_1,u64 param_2,u64 param_3);
int FUN_00385520(u64 param_1,u64 param_2,u64 param_3);
int FUN_003863c0(void);
int FUN_00388df0(int param_1,int param_2);
int FUN_0038a480(int param_1,int param_2,int param_3,int param_4);
u32 FUN_00361350(int param_1,int param_2,int param_3);
long FUN_00361ca0(int param_1,u64 param_2);
long FUN_00361dd0(int param_1,u64 param_2,u16 param_3,u32 param_4);
long FUN_00374af0(u64 param_1,u64 param_2,u64 param_3);
int FUN_00386ae0(int param_1,int param_2);
int FUN_0038ab00(int param_1,u64 param_2);
short FUN_0036f640(int param_1);
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
u32 FUN_00373700(u64 param_1,u64 param_2,u64 param_3);
u32 FUN_00374c90(int param_1,int param_2,int param_3);
u32 FUN_00375350(int param_1,int param_2,int param_3);
u32 FUN_00375590(u64 param_1,u64 param_2,u64 param_3);
u32 FUN_003756e0(int param_1,int param_2,int param_3);
u32 FUN_00375900(u64 param_1,u64 param_2,u64 param_3);
u32 FUN_00375a40(int param_1,int param_2,int param_3);
u32 FUN_00375d70(u64 param_1,u64 param_2,u64 param_3);
u32 FUN_00375f30(int param_1,int param_2,int param_3);
u32 FUN_003798f0(u64 param_1,u64 param_2,u64 param_3);
u32 FUN_0037a150(int param_1,int param_2,int param_3);
u32 FUN_0037a2b0(u64 param_1,u64 param_2,u64 param_3);
u32 FUN_0037a4d0(int param_1,int param_2,int param_3);
u32 FUN_0037acc0(int param_1,int param_2,int param_3);
u32 FUN_0037afc0(u64 param_1,u64 param_2,u64 param_3);
u32 FUN_0037b2e0(int param_1,int param_2,int param_3);
u32 FUN_0037b5d0(u64 param_1,u64 param_2,u64 param_3);
u32 FUN_0037ba80(int param_1,int param_2,int param_3);
u32 FUN_0037be50(u64 param_1,u64 param_2,u64 param_3);
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
u32 FUN_00384d30(u64 param_1,u64 param_2,u64 param_3);
u32 FUN_003851f0(int param_1,int param_2,int param_3);
u32 FUN_00386cd0(void);
u32 FUN_00386e10(int param_1);
u32 FUN_00386e30(int param_1);
u32 FUN_0038a0b0(int param_1);
u32 FUN_0038a4b0(u64 param_1,u8 *param_2,u32 *param_3,u32 *param_4);
u32 FUN_0038d6f0(int param_1);
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
u32 FUN_0036f500(int param_1);
u64 FUN_003709d0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_003715b0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00379f30(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_0037a640(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_0037abd0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00385bd0(int param_1,u64 param_2);
u64 FUN_00385cd0(int param_1);
u64 FUN_00385e20(int param_1);
u64 FUN_00385f00(int param_1);
u64 FUN_00385f90(int param_1);
u64 FUN_00386060(int param_1);
u64 FUN_00386130(int param_1,u32 *param_2,u32 *param_3);
u64 FUN_00386230(int param_1,u32 *param_2,u32 *param_3);
u64 FUN_00386310(int param_1);
u64 FUN_00386430(int param_1,short param_2,u32 param_3);
u64 FUN_003865f0(int param_1);
u64 FUN_00386780(int param_1,u32 param_2,u32 param_3,u32 param_4);
u64 FUN_00386860(int param_1,u32 param_2,u32 param_3,u32 param_4);
u64 FUN_00386940(u32 param_1,int param_2,u32 param_3);
u64 FUN_00386a00(int param_1,u32 param_2);
u64 FUN_0038da10(u16 *param_1);
s8 FUN_0036fa40(int param_1);
u8 FUN_00373590(u64 param_1,u64 param_2,u64 param_3);
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
void FUN_003625e0(void);
void FUN_003628f0(void);
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
void FUN_0036f3b0(u64 param_1,u32 param_2);
void FUN_0036f490(int param_1);
void FUN_0036f4d0(void);
void FUN_0036f5f0(u32 param_1,u16 param_2,u16 param_3,int param_4);
void FUN_0036f680(long param_1,long param_2,int param_3,int param_4,u64 param_5, u16 param_6,u16 param_7);
void FUN_0036f900(u64 param_1,int param_2,int param_3,int param_4,int param_5, u64 param_6,u64 param_7,long param_8,code *param_9);
void FUN_0036fa80(int param_1,int param_2,int param_3,int param_4);
void FUN_003702a0(int param_1,int param_2,int param_3,u64 param_4);
void FUN_00371350(int param_1,int param_2,int param_3,int param_4);
void FUN_00371790(u64 param_1,u64 param_2,u32 param_3);
void FUN_003722d0(u64 param_1,u64 param_2,u32 param_3);
void FUN_003747a0(int param_1,int param_2,int param_3,u64 param_4);
void FUN_00374d30(u64 param_1,u64 param_2,u32 param_3);
void FUN_003753c0(u64 param_1,u64 param_2,u32 param_3);
void FUN_00375750(u64 param_1,u64 param_2,u32 param_3);
void FUN_00375ab0(u64 param_1,u64 param_2,u32 param_3);
void FUN_003760a0(int param_1,int param_2,u32 param_3,u16 *param_4,int param_5);
void FUN_003797b0(u64 param_1,u64 param_2,int param_3,int param_4);
void FUN_00379c30(int param_1,int param_2,int param_3,int param_4);
void FUN_0037a1e0(int param_1,int param_2,int param_3,int param_4);
void FUN_0037a560(int param_1,int param_2,int param_3,int param_4);
void FUN_0037a790(int param_1,int param_2,int param_3,u64 param_4);
void FUN_0037ad30(int param_1,int param_2,int param_3,int param_4);
void FUN_0037b350(int param_1,int param_2,int param_3,int param_4);
void FUN_0037baf0(int param_1,int param_2,int param_3,u64 param_4);
void FUN_0037c350(int param_1,int param_2,int param_3,u64 param_4);
void FUN_0037cf50(u32 *param_1,u32 *param_2,u32 *param_3);
void FUN_0037cfe0(void);
void FUN_0037d540(int param_1,int param_2,long param_3,int param_4);
void FUN_0037dfc0(int param_1,int param_2,int param_3,u64 param_4);
void FUN_0037e460(u64 param_1,u64 param_2,u32 param_3);
void FUN_0037f0c0(int param_1,int param_2,int param_3,int param_4);
void FUN_0037f650(u64 param_1,u64 param_2,u32 param_3);
void FUN_0037ff80(int param_1,int param_2,int param_3,u64 param_4);
void FUN_00380380(u64 param_1,u64 param_2,u32 param_3);
void FUN_00380a30(int param_1,int param_2,int param_3,int param_4);
void FUN_00381110(int param_1,int param_2,int param_3,int param_4);
void FUN_00381540(u64 param_1,u64 param_2,u32 param_3);
void FUN_00381c60(u64 param_1,u64 param_2,u32 param_3);
void FUN_00382390(int param_1,int param_2,int param_3,int param_4);
void FUN_00382760(int param_1,int param_2,int param_3,int param_4);
void FUN_00382c80(int param_1,int param_2,int param_3,int param_4);
void FUN_00382f30(int param_1,int param_2,int param_3,u64 param_4);
void FUN_00383880(int param_1,int param_2,int param_3,u64 param_4);
void FUN_003840d0(int param_1,int param_2,int param_3,u64 param_4);
void FUN_00384520(int param_1,int param_2,int param_3,u64 param_4);
void FUN_00384a50(int param_1,int param_2,int param_3,u64 param_4);
void FUN_00385260(int param_1,int param_2,int param_3,u64 param_4);
void FUN_003858c0(int param_1);
void FUN_00385990(u32 param_1,int param_2,int param_3,int param_4,u32 param_5, u32 param_6);
void FUN_00385b20(int param_1);
void FUN_00385b90(void);
void FUN_00385ba0(void);
void FUN_00386110(u32 *param_1,u32 *param_2);
void FUN_00386210(u32 *param_1,u32 *param_2);
void FUN_00386390(u32 *param_1,u32 *param_2,u32 *param_3,u32 *param_4);
void FUN_00386aa0(void);
void FUN_00386b70(u64 param_1,int param_2,int param_3);
void FUN_00386c40(int param_1,int param_2);
void FUN_00386d50(MtEvtMiscObj *param_1);
void FUN_00386e20(int param_1,u32 param_2);
void FUN_00386e40(int param_1,u32 param_2);
void FUN_00386e50(void);
void FUN_00386f70(float param_1,float *param_2,float *param_3,u8 *param_4);
void FUN_003877c0(float param_1,float param_2,float *param_3,float *param_4,u32 *param_5,u8 *param_6);
void FUN_00388000(float param_1,float param_2,float *param_3,float *param_4,float *param_5,float *param_6,u32 *param_7,RwRGBA *param_8,u32 param_9);
void FUN_00388a40(float param_1,float *param_2,float *param_3,u8 *param_4);
void FUN_00388ff0(int param_1);
void FUN_003890e0(int param_1);
void FUN_003897f0(int param_1);
void FUN_00389b50(int *param_1);
void FUN_00389d80(int param_1,int param_2);
void FUN_00389f40(void);
void FUN_0038a0c0(int param_1,int param_2);
void FUN_0038a140(u32 param_1,u32 *param_2);
void evtMenuDrawText(s32 x,s32 y,f32 depth,s32 color,const char *format,...);
void FUN_0038a590(int param_1,int param_2);
void FUN_0038a620(int param_1,int param_2);
void FUN_0038a6c0(int param_1);
void FUN_0038a730(int param_1);
void FUN_0038a7c0(RwV3d *param_1,RwV3d *param_2);
int FUN_0038a920(int param_1,u16 *param_2,int param_3);
void FUN_0038af70(u16 *param_1);
void FUN_0038b140(int param_1);
void FUN_0038b2c0(u16 *param_1,u32 *param_2,u32 *param_3,u32 *param_4, int param_5);
void FUN_0038b550(int param_1,u32 *param_2,u32 *param_3,u32 *param_4);
void FUN_0038b600(u32 *param_1,u32 *param_2);
void FUN_0038b6e0(int param_1,int param_2,int param_3);
void FUN_0038b960(int param_1,int param_2,int param_3);
void FUN_0038bc70(int param_1,int param_2,int param_3);
void FUN_0038c460(int param_1,int param_2,u8 **param_3,u32 *param_4);
#pragma alias FUN_0038c460_reordered FUN_0038c460
extern void FUN_0038c460_reordered(int param_1,int param_2,u32 *param_3,u8 **param_4);
void FUN_0038c540(int param_1,int param_2,int param_3,u32 *param_4, u32 *param_5,u32 *param_6);
void FUN_0038c830(int param_1,long param_2);
void FUN_0038ca00(void);
void FUN_0038ca80(int param_1);
void FUN_0038cc10(int param_1,u16 *param_2,int param_3);
void FUN_0038d560(int param_1,int param_2,u32 param_3,f32 *param_4, f32 *param_5,f32 *param_6);
void FUN_0038d6b0(int param_1,u32 param_2);
void FUN_0038d720(int param_1);
void FUN_0038d790(int param_1);
void FUN_0038d840(u8 *param_1,u8 *param_2,int param_3);
void FUN_0038d910(int param_1);
void FUN_0038dad0(u32 param_1,long param_2,u64 param_3);
void FUN_0038e660(u64 param_1,int param_2,int param_3);
void FUN_0038f0f0(u64 param_1);
void FUN_0038f440(int param_1,u64 param_2,int param_3);
void FUN_0038f8c0(long param_1,u64 param_2,long param_3,short param_4);
void FUN_0038fa10(int param_1,u64 param_2);
void FUN_0038ffb0(int param_1,u64 param_2);

// FUN_00386AE0


int FUN_00386ae0(int param_1,int param_2)



{

  int lVar1;

  

  lVar1 = (*DAT_00960184_abs)(1,param_1,0x40000);

  if (lVar1 == 0) {

    FUN_0019d3f0_evt("mt_evtMisc.c",0x3b);

  }

  FUN_00386c40(param_2,param_1);

  return lVar1;

}


// FUN_00386B70


void FUN_00386b70(u64 param_1,int param_2,int param_3)
{
  (*DAT_0096017c_abs)();
  if (param_2 >= 0xd) goto done_index;
  if (param_2 < 0) goto done_index;
  if (param_2 == 9) goto done_index;
  if (param_2 == 6) goto zero_index;
  if (param_2 == 5) goto zero_index;
  if (param_2 == 4) goto zero_index;
  switch (param_2) {
  case 0:
    goto zero_index;
  default:
    goto subtract_index;
  }
zero_index:
  *(u32 *)(&DAT_00958a60_abs[param_2 * 4]) = 0;
  goto done_index;
subtract_index:
  *(int *)(&DAT_00958a60_abs[param_2 * 4]) =
      *(int *)(&DAT_00958a60_abs[param_2 * 4]) - param_3;
done_index:
  return;
}


// FUN_00386C40


void FUN_00386c40(int param_1,int param_2)

{
  int* p;

  if (param_1 >= 0xd) goto done_index;
  if (param_1 < 0) goto done_index;
  switch (param_1) {
  case 0:
  case 4:
  case 5:
  case 6:
    p = (int *)((u8 *)DAT_00958a60_abs + (param_1 << 2));
    *p = param_2;
    goto done_index;
  default:
    p = ((int *)DAT_00958a60_abs) + param_1;
    *p = *p + param_2;
    goto done_index;
  }
done_index:
  return;
}



#pragma push
#pragma opt_loop_invariants on
// FUN_00386CD0


u32 FUN_00386cd0(void)



{
  int iVar1;

  for (iVar1 = 0; iVar1 < 0xd; iVar1 = iVar1 + 1) {
    if ((iVar1 != 0) && (iVar1 != 4) && (iVar1 != 5) &&
        (iVar1 != 6) && (((u32 *)DAT_00958a60_abs)[iVar1] != 0)) {
      return 0;
    }
  }
  return 1;
}
#pragma pop


// FUN_00386D50


void FUN_00386d50(MtEvtMiscObj *param_1)



{

  u32 uVar1;

  int iVar2;

  u8 auStack_20 [32];

  

  for (iVar2 = 0; iVar2 < 0xd; iVar2 = iVar2 + 1) {

  }

  if (DAT_007cdeac < param_1->value_928) {

    param_1->value_928 = DAT_007cdeac;

  }

  uVar1 = FUN_00530da0(((float)(DAT_007cdeac - param_1->value_928) / 1024.0f) / 1024.0f);
  FUN_00523ac8(auStack_20,(const char *)DAT_006a0a20_abs,uVar1);

  return;

}


// FUN_00386e10


u32 FUN_00386e10(int param_1)



{

  return *(u32 *)(param_1 + 0x968);

}


// FUN_00386E20

void FUN_00386e20(int param_1,u32 param_2)
{
  *(u32 *)(param_1 + 0x968) = param_2;
  DAT_007cca60 = (u16)param_2;
}


// FUN_00386e30


u32 FUN_00386e30(int param_1)



{

  return *(u32 *)(param_1 + 0x96c);

}


// FUN_00386E40

void FUN_00386e40(int param_1,u32 param_2)
{
  *(u32 *)(param_1 + 0x96c) = param_2;
  DAT_007cca64 = (u16)param_2;
}


// FUN_00386E50


void FUN_00386e50(void)



{

  int lVar1;
  code *fn;

  int iVar2;

  u8 auStack_60 [64];
  RwV3d stack10;

  RwV3d stack20;

  

  lVar1 = FUN_003b5d00();

  if (lVar1 != 0) {

    fn = (code *)&DAT_00960090_abs;
    (*fn)(1,0);

    (*fn)(7,2);

    (*fn)(0xc,1);

    (*fn)(10,3);

    (*fn)(0xb,6);

    for (iVar2 = *(int *)((int)lVar1 + 0x20); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xf8)) {

      stack10 = *(RwV3d *)(iVar2 + 4);

      stack20 = *(RwV3d *)(iVar2 + 0x10);

      FUN_003b79a0(auStack_60,&stack10,&stack20);

      FUN_00359380(15.0f,auStack_60,1);

    }

  }

  return;

}


// FUN_00386F70
void FUN_00386f70(float param_1,float *param_2,float *param_3,u8 *param_4)
{
  RwIm2DVertex vertices[6];
  RwRGBA color;
  f32 recipZ;
  f32 z;
  s32 left;
  s32 right;
  s32 top;
  s32 bottom;
  int camera;
  code *fn;

  left = (s32)*param_2;
  right = (s32)(*param_2 + *param_3);
  top = (s32)param_2[1];
  bottom = (s32)(param_2[1] + param_3[1]);
  color = *(RwRGBA *)param_4;

  camera = FUN_00198590();
  recipZ = 1.0f / *(float *)(camera + 0x80);
  z = *(float *)DAT_00960088_abs - param_1;

  vertices[0].u.els.scrVertex.x = (f32)left;
  vertices[0].u.els.scrVertex.y = (f32)top;
  vertices[0].u.els.scrVertex.z = z;
  vertices[0].u.els.color.r = (f32)color.r;
  vertices[0].u.els.color.g = (f32)color.g;
  vertices[0].u.els.color.b = (f32)color.b;
  vertices[0].u.els.color.a = (f32)color.a;
  vertices[0].u.els.recipZ = recipZ;

  vertices[1].u.els.scrVertex.x = (f32)right;
  vertices[1].u.els.scrVertex.y = (f32)top;
  vertices[1].u.els.scrVertex.z = z;
  vertices[1].u.els.color.r = (f32)color.r;
  vertices[1].u.els.color.g = (f32)color.g;
  vertices[1].u.els.color.b = (f32)color.b;
  vertices[1].u.els.color.a = (f32)color.a;
  vertices[1].u.els.recipZ = recipZ;

  vertices[2].u.els.scrVertex.x = (f32)left;
  vertices[2].u.els.scrVertex.y = (f32)bottom;
  vertices[2].u.els.scrVertex.z = z;
  vertices[2].u.els.color.r = (f32)color.r;
  vertices[2].u.els.color.g = (f32)color.g;
  vertices[2].u.els.color.b = (f32)color.b;
  vertices[2].u.els.color.a = (f32)color.a;
  vertices[2].u.els.recipZ = recipZ;

  vertices[3].u.els.scrVertex.x = (f32)left;
  vertices[3].u.els.scrVertex.y = (f32)bottom;
  vertices[3].u.els.scrVertex.z = z;
  vertices[3].u.els.color.r = (f32)color.r;
  vertices[3].u.els.color.g = (f32)color.g;
  vertices[3].u.els.color.b = (f32)color.b;
  vertices[3].u.els.color.a = (f32)color.a;
  vertices[3].u.els.recipZ = recipZ;

  vertices[4].u.els.scrVertex.x = (f32)right;
  vertices[4].u.els.scrVertex.y = (f32)top;
  vertices[4].u.els.scrVertex.z = z;
  vertices[4].u.els.color.r = (f32)color.r;
  vertices[4].u.els.color.g = (f32)color.g;
  vertices[4].u.els.color.b = (f32)color.b;
  vertices[4].u.els.color.a = (f32)color.a;
  vertices[4].u.els.recipZ = recipZ;

  vertices[5].u.els.scrVertex.x = (f32)right;
  vertices[5].u.els.scrVertex.y = (f32)bottom;
  vertices[5].u.els.scrVertex.z = z;
  vertices[5].u.els.color.r = (f32)color.r;
  vertices[5].u.els.color.g = (f32)color.g;
  vertices[5].u.els.color.b = (f32)color.b;
  vertices[5].u.els.color.a = (f32)color.a;
  vertices[5].u.els.recipZ = recipZ;
  fn = (code *)&DAT_00960090_abs;
  (*fn)(1,0);
  (*fn)(7,2);
  (*fn)(0xc,1);
  (*fn)(6,1);
  (*fn)(8,1);
  (*fn)(10,5);
  (*fn)(0xb,6);
  FUN_004d7f60(2,0x44);
  FUN_004d7f60(3,0x717fb);
  (*DAT_009600a0_abs)(3,vertices,6);
}


// FUN_003877C0
asm void FUN_003877c0(float param_1,float param_2,float *param_3,float *param_4,u32 *param_5,u8 *param_6)
{
  .set noreorder
  .word 0x27bdfdf0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x00c0882d
  .word 0x46006506
  .word 0x0000482d
  .word 0x10000010
  .word 0x00000000
  .word 0x000940c0
  .word 0x00881821
  .word 0x011d3021
  .word 0x24c20060
  .word 0xc4610000
  .word 0xc4600004
  .word 0xe4410000
  .word 0xe4400004
  .word 0x00a81821
  .word 0x24c20040
  .word 0xc4610000
  .word 0xc4600004
  .word 0xe4410000
  .word 0xe4400004
  .word 0x25290001
  .word 0x29220004
  .word 0x1440ffef
  .word 0x00000000
  .word 0x90e50000
  .word 0x90e40001
  .word 0x90e30002
  .word 0x90e20003
  .word 0xa3a5020c
  .word 0xa3a4020d
  .word 0xa3a3020e
  .word 0xa3a2020f
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000a43
  .word 0x3c020096
  .word 0xc4400088
  .word 0x46140201
  .word 0xc7a00060
  .word 0xe7a00080
  .word 0xc7a00064
  .word 0xe7a00084
  .word 0xe7a80088
  .word 0x93a2020c
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000a0
  .word 0x93a4020d
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00041842
  .word 0x30820001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000a4
  .word 0x93a3020e
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032842
  .word 0x30620001
  .word 0x00a22825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000a8
  .word 0x93a2020f
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00023042
  .word 0x30450001
  .word 0x00c53025
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000ac
  .word 0xc7a00040
  .word 0xe7a00090
  .word 0xc7a00044
  .word 0xe7a00094
  .word 0xe7a90098
  .word 0xc7a70068
  .word 0xe7a700c0
  .word 0xc7a6006c
  .word 0xe7a600c4
  .word 0xe7a800c8
  .word 0x93a5020c
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00053042
  .word 0x30a50001
  .word 0x00c53025
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000e0
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00043042
  .word 0x30850001
  .word 0x00c53025
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000e4
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00033042
  .word 0x30650001
  .word 0x00c53025
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000e8
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00023042
  .word 0x30450001
  .word 0x00c53025
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000ec
  .word 0xc7a50048
  .word 0xe7a500d0
  .word 0xc7a4004c
  .word 0xe7a400d4
  .word 0xe7a900d8
  .word 0xc7a30070
  .word 0xe7a30100
  .word 0xc7a20074
  .word 0xe7a20104
  .word 0xe7a80108
  .word 0x93a5020c
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00053042
  .word 0x30a50001
  .word 0x00c53025
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00120
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00043042
  .word 0x30850001
  .word 0x00c53025
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00124
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00033042
  .word 0x30650001
  .word 0x00c53025
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00128
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00023042
  .word 0x30450001
  .word 0x00c53025
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a0012c
  .word 0xc7a10050
  .word 0xe7a10110
  .word 0xc7a00054
  .word 0xe7a00114
  .word 0xe7a90118
  .word 0xe7a70140
  .word 0xe7a60144
  .word 0xe7a80148
  .word 0x93a5020c
  .word 0x04a00006
  .word 0x00000000
  .word 0x44853000
  .word 0x00000000
  .word 0x468031a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00053042
  .word 0x30a50001
  .word 0x00c53025
  .word 0x44863000
  .word 0x00000000
  .word 0x468031a0
  .word 0x46063180
  .word 0xe7a60160
  .word 0x04800006
  .word 0x00000000
  .word 0x44843000
  .word 0x00000000
  .word 0x468031a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00043042
  .word 0x30850001
  .word 0x00c53025
  .word 0x44863000
  .word 0x00000000
  .word 0x468031a0
  .word 0x46063180
  .word 0xe7a60164
  .word 0x04600006
  .word 0x00000000
  .word 0x44833000
  .word 0x00000000
  .word 0x468031a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00033042
  .word 0x30650001
  .word 0x00c53025
  .word 0x44863000
  .word 0x00000000
  .word 0x468031a0
  .word 0x46063180
  .word 0xe7a60168
  .word 0x04400006
  .word 0x00000000
  .word 0x44823000
  .word 0x00000000
  .word 0x468031a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00023042
  .word 0x30450001
  .word 0x00c53025
  .word 0x44863000
  .word 0x00000000
  .word 0x468031a0
  .word 0x46063180
  .word 0xe7a6016c
  .word 0xe7a50150
  .word 0xe7a40154
  .word 0xe7a90158
  .word 0xe7a30180
  .word 0xe7a20184
  .word 0xe7a80188
  .word 0x93a5020c
  .word 0x04a00006
  .word 0x00000000
  .word 0x44851000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00053042
  .word 0x30a50001
  .word 0x00c53025
  .word 0x44861000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe7a201a0
  .word 0x04800006
  .word 0x00000000
  .word 0x44841000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00043042
  .word 0x30850001
  .word 0x00c53025
  .word 0x44861000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe7a201a4
  .word 0x04600006
  .word 0x00000000
  .word 0x44831000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00033042
  .word 0x30650001
  .word 0x00c53025
  .word 0x44861000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe7a201a8
  .word 0x04400006
  .word 0x00000000
  .word 0x44821000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00023042
  .word 0x30450001
  .word 0x00c53025
  .word 0x44861000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe7a201ac
  .word 0xe7a10190
  .word 0xe7a00194
  .word 0xe7a90198
  .word 0xc7a00078
  .word 0xe7a001c0
  .word 0xc7a0007c
  .word 0xe7a001c4
  .word 0xe7a801c8
  .word 0x93a5020c
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00053042
  .word 0x30a50001
  .word 0x00c53025
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a001e0
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00042842
  .word 0x30840001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a001e4
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
  .word 0xe7a001e8
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a001ec
  .word 0xc7a00058
  .word 0xe7a001d0
  .word 0xc7a0005c
  .word 0xe7a001d4
  .word 0xe7a901d8
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040001
  .word 0x8e250000
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050005
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000b
  .word 0x24050006
  .word 0x8e020000
  .word 0x0040f809
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
  .word 0x24040003
  .word 0x27a50080
  .word 0x24060006
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0210
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}


// FUN_00388000
asm void FUN_00388000(float param_1,float param_2,float *param_3,float *param_4,float *param_5,float *param_6,u32 *param_7,RwRGBA *param_8,u32 param_9)
{
  .set noreorder
  .word 0x27bdfd20
  .word 0xffbf0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x00c0a82d
  .word 0x00e0a02d
  .word 0x0100982d
  .word 0x46006586
  .word 0x0140902d
  .word 0xc4850000
  .word 0x46002824
  .word 0x44110000
  .word 0xc4a40000
  .word 0x46042800
  .word 0x46000024
  .word 0x44100000
  .word 0xc4830004
  .word 0x46001824
  .word 0x44160000
  .word 0xc4a20004
  .word 0x46021800
  .word 0x46000024
  .word 0x44170000
  .word 0x91250000
  .word 0x91240001
  .word 0x91230002
  .word 0x91220003
  .word 0xa3a502dc
  .word 0xa3a402dd
  .word 0xa3a302de
  .word 0xa3a202df
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46012003
  .word 0x46002d40
  .word 0x46011003
  .word 0x46001d00
  .word 0x3c023f80
  .word 0xafa200c8
  .word 0xafa200b4
  .word 0xafa200a0
  .word 0xafa000b0
  .word 0xafa000a8
  .word 0xafa000a4
  .word 0xafa000c4
  .word 0xafa000c0
  .word 0xafa000b8
  .word 0xafa000d8
  .word 0xafa000d4
  .word 0xafa000d0
  .word 0x8fa300ac
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xafa200ac
  .word 0x27a400a0
  .word 0x3c05006a
  .word 0x24a52a80
  .word 0x46006b06
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0x461500c1
  .word 0xe7a302d0
  .word 0x44960000
  .word 0x00000000
  .word 0x46800020
  .word 0x46140081
  .word 0xe7a202d4
  .word 0xafa002d8
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0x46150041
  .word 0xe7a102c0
  .word 0xe7a202c4
  .word 0xafa002c8
  .word 0xe7a302b0
  .word 0x44970000
  .word 0x00000000
  .word 0x46800020
  .word 0x46140001
  .word 0xe7a002b4
  .word 0xafa002b8
  .word 0xe7a102a0
  .word 0xe7a002a4
  .word 0xafa002a8
  .word 0x27a40290
  .word 0x27a502d0
  .word 0x27a600a0
  .word 0x0c131af8
  .word 0x00000000
  .word 0x27a40280
  .word 0x27a502c0
  .word 0x27a600a0
  .word 0x0c131af8
  .word 0x00000000
  .word 0x27a40270
  .word 0x27a502b0
  .word 0x27a600a0
  .word 0x0c131af8
  .word 0x00000000
  .word 0x27a40260
  .word 0x27a502a0
  .word 0x27a600a0
  .word 0x0c131af8
  .word 0x00000000
  .word 0xc7a00290
  .word 0x46150000
  .word 0xe7a00290
  .word 0xc7a00294
  .word 0x46140000
  .word 0xe7a00294
  .word 0xc7a00280
  .word 0x46150000
  .word 0xe7a00280
  .word 0xc7a00284
  .word 0x46140000
  .word 0xe7a00284
  .word 0xc7a00270
  .word 0x46150000
  .word 0xe7a00270
  .word 0xc7a00274
  .word 0x46140000
  .word 0xe7a00274
  .word 0xc7a00260
  .word 0x46150000
  .word 0xe7a00260
  .word 0xc7a00264
  .word 0x46140000
  .word 0xe7a00264
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x460008c3
  .word 0x3c020096
  .word 0xc4400088
  .word 0x46160081
  .word 0xc7a00290
  .word 0xe7a000e0
  .word 0xc7a00294
  .word 0xe7a000e4
  .word 0xe7a200e8
  .word 0x93a202dc
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00100
  .word 0x93a402dd
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00041842
  .word 0x30820001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00104
  .word 0x93a302de
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032842
  .word 0x30620001
  .word 0x00a22825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00108
  .word 0x93a202df
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00023042
  .word 0x30450001
  .word 0x00c53025
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a0010c
  .word 0xc6a00000
  .word 0xe7a000f0
  .word 0xc6a00004
  .word 0xe7a000f4
  .word 0xe7a300f8
  .word 0xc7a10280
  .word 0xe7a10120
  .word 0xc7a00284
  .word 0xe7a00124
  .word 0xe7a20128
  .word 0x93a502dc
  .word 0x04a00006
  .word 0x00000000
  .word 0x44852000
  .word 0x00000000
  .word 0x46802120
  .word 0x10000008
  .word 0x00000000
  .word 0x00053042
  .word 0x30a50001
  .word 0x00c53025
  .word 0x44862000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe7a40140
  .word 0x04800006
  .word 0x00000000
  .word 0x44842000
  .word 0x00000000
  .word 0x46802120
  .word 0x10000008
  .word 0x00000000
  .word 0x00043042
  .word 0x30850001
  .word 0x00c53025
  .word 0x44862000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe7a40144
  .word 0x04600006
  .word 0x00000000
  .word 0x44832000
  .word 0x00000000
  .word 0x46802120
  .word 0x10000008
  .word 0x00000000
  .word 0x00033042
  .word 0x30650001
  .word 0x00c53025
  .word 0x44862000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe7a40148
  .word 0x04400006
  .word 0x00000000
  .word 0x44822000
  .word 0x00000000
  .word 0x46802120
  .word 0x10000008
  .word 0x00000000
  .word 0x00023042
  .word 0x30450001
  .word 0x00c53025
  .word 0x44862000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe7a4014c
  .word 0xc6840000
  .word 0xe7a40130
  .word 0xc6a40004
  .word 0xe7a40134
  .word 0xe7a30138
  .word 0xc7a60270
  .word 0xe7a60160
  .word 0xc7a50274
  .word 0xe7a50164
  .word 0xe7a20168
  .word 0x93a502dc
  .word 0x04a00006
  .word 0x00000000
  .word 0x44852000
  .word 0x00000000
  .word 0x46802120
  .word 0x10000008
  .word 0x00000000
  .word 0x00053042
  .word 0x30a50001
  .word 0x00c53025
  .word 0x44862000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe7a40180
  .word 0x04800006
  .word 0x00000000
  .word 0x44842000
  .word 0x00000000
  .word 0x46802120
  .word 0x10000008
  .word 0x00000000
  .word 0x00043042
  .word 0x30850001
  .word 0x00c53025
  .word 0x44862000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe7a40184
  .word 0x04600006
  .word 0x00000000
  .word 0x44832000
  .word 0x00000000
  .word 0x46802120
  .word 0x10000008
  .word 0x00000000
  .word 0x00033042
  .word 0x30650001
  .word 0x00c53025
  .word 0x44862000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe7a40188
  .word 0x04400006
  .word 0x00000000
  .word 0x44822000
  .word 0x00000000
  .word 0x46802120
  .word 0x10000008
  .word 0x00000000
  .word 0x00023042
  .word 0x30450001
  .word 0x00c53025
  .word 0x44862000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe7a4018c
  .word 0xc6a40000
  .word 0xe7a40170
  .word 0xc6840004
  .word 0xe7a40174
  .word 0xe7a30178
  .word 0xe7a601a0
  .word 0xe7a501a4
  .word 0xe7a201a8
  .word 0x93a502dc
  .word 0x04a00006
  .word 0x00000000
  .word 0x44852000
  .word 0x00000000
  .word 0x46802120
  .word 0x10000008
  .word 0x00000000
  .word 0x00053042
  .word 0x30a50001
  .word 0x00c53025
  .word 0x44862000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe7a401c0
  .word 0x04800006
  .word 0x00000000
  .word 0x44842000
  .word 0x00000000
  .word 0x46802120
  .word 0x10000008
  .word 0x00000000
  .word 0x00043042
  .word 0x30850001
  .word 0x00c53025
  .word 0x44862000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe7a401c4
  .word 0x04600006
  .word 0x00000000
  .word 0x44832000
  .word 0x00000000
  .word 0x46802120
  .word 0x10000008
  .word 0x00000000
  .word 0x00033042
  .word 0x30650001
  .word 0x00c53025
  .word 0x44862000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe7a401c8
  .word 0x04400006
  .word 0x00000000
  .word 0x44822000
  .word 0x00000000
  .word 0x46802120
  .word 0x10000008
  .word 0x00000000
  .word 0x00023042
  .word 0x30450001
  .word 0x00c53025
  .word 0x44862000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe7a401cc
  .word 0xc6a40000
  .word 0xe7a401b0
  .word 0xc6840004
  .word 0xe7a401b4
  .word 0xe7a301b8
  .word 0xe7a101e0
  .word 0xe7a001e4
  .word 0xe7a201e8
  .word 0x93a502dc
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00053042
  .word 0x30a50001
  .word 0x00c53025
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00200
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00043042
  .word 0x30850001
  .word 0x00c53025
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00204
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00033042
  .word 0x30650001
  .word 0x00c53025
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00208
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00023042
  .word 0x30450001
  .word 0x00c53025
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a0020c
  .word 0xc6800000
  .word 0xe7a001f0
  .word 0xc6a00004
  .word 0xe7a001f4
  .word 0xe7a301f8
  .word 0xc7a00260
  .word 0xe7a00220
  .word 0xc7a00264
  .word 0xe7a00224
  .word 0xe7a20228
  .word 0x93a502dc
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00053042
  .word 0x30a50001
  .word 0x00c53025
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00240
  .word 0x04800006
  .word 0x00000000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00042842
  .word 0x30840001
  .word 0x00a42825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00244
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
  .word 0xe7a00248
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a0024c
  .word 0xc6800000
  .word 0xe7a00230
  .word 0xc6800004
  .word 0xe7a00234
  .word 0xe7a30238
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040001
  .word 0x8e650000
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24020001
  .word 0x12420010
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x10000015
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
  .word 0x1000000a
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x27a500e0
  .word 0x24060006
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0xdfbf0090
  .word 0x7bb70080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd02e0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
// FUN_00388A40
void FUN_00388a40(float param_1,float *param_2,float *param_3,u8 *param_4)
{
  RwIm2DVertex vertices[6];
  RwRGBA color;
  f32 recipZ;
  f32 z;
  s32 left;
  s32 right;
  s32 top;
  s32 bottom;
  int camera;
  code *fn;

  left = (s32)*param_2;
  right = (s32)*param_3;
  top = (s32)param_2[1];
  bottom = (s32)param_3[1];
  color = *(RwRGBA *)param_4;

  camera = FUN_00198590();
  recipZ = 1.0f / *(float *)(camera + 0x80);
  z = *(float *)DAT_00960088_abs - param_1;

  vertices[0].u.els.scrVertex.x = (f32)left;
  vertices[0].u.els.scrVertex.y = (f32)top;
  vertices[0].u.els.scrVertex.z = z;
  vertices[0].u.els.color.r = (f32)color.r;
  vertices[0].u.els.color.g = (f32)color.g;
  vertices[0].u.els.color.b = (f32)color.b;
  vertices[0].u.els.color.a = (f32)color.a;
  vertices[0].u.els.recipZ = recipZ;

  vertices[1].u.els.scrVertex.x = (f32)right;
  vertices[1].u.els.scrVertex.y = (f32)bottom;
  vertices[1].u.els.scrVertex.z = z;
  vertices[1].u.els.color.r = (f32)color.r;
  vertices[1].u.els.color.g = (f32)color.g;
  vertices[1].u.els.color.b = (f32)color.b;
  vertices[1].u.els.color.a = (f32)color.a;
  vertices[1].u.els.recipZ = recipZ;

  fn = (code *)&DAT_00960090_abs;
  (*fn)(1,0);
  (*fn)(7,2);
  (*fn)(0xc,1);
  (*fn)(10,3);
  (*fn)(0xb,6);
  FUN_004d7f60(2,0x44);
  FUN_004d7f60(3,0x717fb);
  (*DAT_009600a0_abs)(1,vertices,2);
}


/* opt_loop_invariants on + opt_lifetimes on: default nd210 -> nd132 (loop-only nd154); accumulator/index role swap further nd132 -> nd126, object 500/512; measured W319. */
#pragma push
#pragma opt_loop_invariants on
#pragma opt_lifetimes on
// FUN_00388DF0


asm int FUN_00388df0(int param_1,int param_2)
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
  .word 0x00a0a82d
  .word 0x0000902d
  .word 0x0000a02d
  .word 0x0000982d
  .word 0x2a01000b
  .word 0x14200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a10
  .word 0x2405042d
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3c110096
  .word 0x263189e0
  .word 0x00101040
  .word 0x00501021
  .word 0x00023080
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0c148502
  .word 0x00000000
  .word 0x0000302d
  .word 0x2404ffff
  .word 0x10000019
  .word 0x00000000
  .word 0x00061080
  .word 0x02a21021
  .word 0x8c450000
  .word 0x14a0000a
  .word 0x00000000
  .word 0x00061040
  .word 0x00461021
  .word 0x00021080
  .word 0x02221021
  .word 0xac440000
  .word 0xac440004
  .word 0xac440008
  .word 0x1000000a
  .word 0x00000000
  .word 0x00061040
  .word 0x00461021
  .word 0x00021080
  .word 0x02221821
  .word 0xac720000
  .word 0x02459021
  .word 0x2642ffff
  .word 0xac620004
  .word 0xac650008
  .word 0x24c60001
  .word 0x00d0102a
  .word 0x1440ffe6
  .word 0x00000000
  .word 0x24040064
  .word 0x0c0e5480
  .word 0x00000000
  .word 0x0040902d
  .word 0x3c04006a
  .word 0x24840a30
  .word 0x0240282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0000102d
  .word 0x2404ffff
  .word 0x10000012
  .word 0x00000000
  .word 0x00021840
  .word 0x00621821
  .word 0x00031880
  .word 0x02232821
  .word 0x8ca30000
  .word 0x1064000a
  .word 0x00000000
  .word 0x0243082b
  .word 0x14200007
  .word 0x00000000
  .word 0x8ca30004
  .word 0x0072182b
  .word 0x14600003
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x24420001
  .word 0x0050182a
  .word 0x1460ffed
  .word 0x00000000
  .word 0x0000202d
  .word 0x2403ffff
  .word 0x1000000e
  .word 0x00000000
  .word 0x00041040
  .word 0x00441021
  .word 0x00021080
  .word 0x02221021
  .word 0x8c420008
  .word 0x10430006
  .word 0x00000000
  .word 0x0262082a
  .word 0x10200003
  .word 0x00000000
  .word 0x0040982d
  .word 0x0080a02d
  .word 0x24840001
  .word 0x0090102a
  .word 0x1440fff1
  .word 0x00000000
  .word 0x0280102d
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
#pragma opt_lifetimes reset
#pragma pop


// FUN_00388FF0


void FUN_00388ff0(int param_1)



{

  int iVar1;

  int iVar2;

  int iVar3;

  

  if (*(int *)(param_1 + 0x980) == 0) {

    *(u32 *)(param_1 + 0x97c) = 0;

  }

  else {

    iVar1 = *(int *)(param_1 + 0x97c);

    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {

      iVar2 = *(int *)(param_1 + 0x980);
      iVar2 = *(int *)(iVar2 + iVar3 * 4);

      if (iVar2 != 0) {

        if (iVar2 != 0) {
          (*DAT_0096017c_abs)(iVar2);
          *(u32 *)(*(int *)(param_1 + 0x980) + iVar3 * 4) = 0;
        }

      }

    }

    iVar1 = *(int *)(param_1 + 0x97c) * 4;

    (*DAT_0096017c_abs)(*(u32 *)(param_1 + 0x980));
    *DAT_00958a90_abs = *DAT_00958a90_abs - iVar1;

    *(u32 *)(param_1 + 0x980) = 0;

    *(u32 *)(param_1 + 0x97c) = 0;

  }

  return;

}


// FUN_003890E0


asm void FUN_003890e0(int param_1)
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
  .word 0x0080a02d
  .word 0x0000802d
  .word 0x0000a82d
  .word 0x0c0e23fc
  .word 0x00000000
  .word 0x24110001
  .word 0x10000030
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040282d
  .word 0x10a00029
  .word 0x00000000
  .word 0x94a40000
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x00831824
  .word 0x00032283
  .word 0x2403000c
  .word 0x10830012
  .word 0x00000000
  .word 0x24030007
  .word 0x1083000f
  .word 0x00000000
  .word 0x24030006
  .word 0x1083000c
  .word 0x00000000
  .word 0x24030005
  .word 0x10830009
  .word 0x00000000
  .word 0x24030003
  .word 0x10830006
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x24030001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x1060000a
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x26100001
  .word 0x8ca500f8
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x14a0fffa
  .word 0x00000000
  .word 0x26310001
  .word 0x2a230016
  .word 0x1460ffcf
  .word 0x00000000
  .word 0x12000176
  .word 0x00000000
  .word 0xae90097c
  .word 0x00108880
  .word 0x3c100096
  .word 0x26100184
  .word 0x24040001
  .word 0x0220282d
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040902d
  .word 0x16400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a10
  .word 0x2405003b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2404000c
  .word 0x0220282d
  .word 0x0c0e1b10
  .word 0x00000000
  .word 0xae920980
  .word 0x24110001
  .word 0x10000159
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040902d
  .word 0x12400152
  .word 0x00000000
  .word 0x96440000
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x00831824
  .word 0x00032283
  .word 0x2403000c
  .word 0x10830012
  .word 0x00000000
  .word 0x24030007
  .word 0x1083000f
  .word 0x00000000
  .word 0x24030006
  .word 0x1083000c
  .word 0x00000000
  .word 0x24030005
  .word 0x10830009
  .word 0x00000000
  .word 0x24030003
  .word 0x10830006
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x24030001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x10600133
  .word 0x00000000
  .word 0x1000012f
  .word 0x00000000
  .word 0x0000982d
  .word 0x96440000
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x00831824
  .word 0x00031a83
  .word 0x2c61000d
  .word 0x10200120
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484abb0
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x24040001
  .word 0x240501f0
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040982d
  .word 0x16600006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a10
  .word 0x2405003b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2404000c
  .word 0x240501f0
  .word 0x0c0e1b10
  .word 0x00000000
  .word 0x2404001f
  .word 0x0240302d
  .word 0x0260282d
  .word 0x78c30000
  .word 0x24c60010
  .word 0x2484ffff
  .word 0x7ca30000
  .word 0x24a50010
  .word 0x1c80fffa
  .word 0x00000000
  .word 0x100000fb
  .word 0x00000000
  .word 0x24040001
  .word 0x24050220
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040982d
  .word 0x16600006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a10
  .word 0x2405003b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050220
  .word 0x0c0e1b10
  .word 0x00000000
  .word 0x24050011
  .word 0x0240382d
  .word 0x0260302d
  .word 0x78e40000
  .word 0x78e30010
  .word 0x24e70020
  .word 0x24a5ffff
  .word 0x7cc40000
  .word 0x7cc30010
  .word 0x24c60020
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x100000db
  .word 0x00000000
  .word 0x24040001
  .word 0x240501b0
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040982d
  .word 0x16600006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a10
  .word 0x2405003b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2404000c
  .word 0x240501b0
  .word 0x0c0e1b10
  .word 0x00000000
  .word 0x2404001b
  .word 0x0240302d
  .word 0x0260282d
  .word 0x78c30000
  .word 0x24c60010
  .word 0x2484ffff
  .word 0x7ca30000
  .word 0x24a50010
  .word 0x1c80fffa
  .word 0x00000000
  .word 0x100000bd
  .word 0x00000000
  .word 0x24040001
  .word 0x24050108
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040982d
  .word 0x16600006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a10
  .word 0x2405003b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050108
  .word 0x0c0e1b10
  .word 0x00000000
  .word 0x24050021
  .word 0x0240382d
  .word 0x0260302d
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x1000009d
  .word 0x00000000
  .word 0x24040001
  .word 0x24050110
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040982d
  .word 0x16600006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a10
  .word 0x2405003b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050110
  .word 0x0c0e1b10
  .word 0x00000000
  .word 0x24050022
  .word 0x0240382d
  .word 0x0260302d
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x1000007d
  .word 0x00000000
  .word 0x24040001
  .word 0x24050100
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040982d
  .word 0x16600006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a10
  .word 0x2405003b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050100
  .word 0x0c0e1b10
  .word 0x00000000
  .word 0x24050020
  .word 0x0240382d
  .word 0x0260302d
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x1000005d
  .word 0x00000000
  .word 0x24040001
  .word 0x24050108
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040982d
  .word 0x16600006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a10
  .word 0x2405003b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050108
  .word 0x0c0e1b10
  .word 0x00000000
  .word 0x24050021
  .word 0x0240382d
  .word 0x0260302d
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x1000003d
  .word 0x00000000
  .word 0x24040001
  .word 0x24050130
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040982d
  .word 0x16600006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a10
  .word 0x2405003b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050130
  .word 0x0c0e1b10
  .word 0x00000000
  .word 0x24050026
  .word 0x0240382d
  .word 0x0260302d
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0x24040001
  .word 0x24050170
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040982d
  .word 0x16600006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a10
  .word 0x2405003b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050170
  .word 0x0c0e1b10
  .word 0x00000000
  .word 0x24040017
  .word 0x0240302d
  .word 0x0260282d
  .word 0x78c30000
  .word 0x24c60010
  .word 0x2484ffff
  .word 0x7ca30000
  .word 0x24a50010
  .word 0x1c80fffa
  .word 0x00000000
  .word 0x00152080
  .word 0x8e830980
  .word 0x00641821
  .word 0xac730000
  .word 0x8e5200f8
  .word 0x26b50001
  .word 0x1640fed1
  .word 0x00000000
  .word 0x26310001
  .word 0x2a230016
  .word 0x1460fea6
  .word 0x00000000
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


// FUN_003897F0


asm void FUN_003897f0(int param_1)
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
  .word 0x8c91097c
  .word 0x3c04006a
  .word 0x24840a50
  .word 0x0220282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0000982d
  .word 0x100000b4
  .word 0x00000000
  .word 0x8e840980
  .word 0x00131880
  .word 0x00831821
  .word 0x8c700000
  .word 0x120000ad
  .word 0x00000000
  .word 0x96040000
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040902d
  .word 0x120000a7
  .word 0x00000000
  .word 0x124000a5
  .word 0x00000000
  .word 0x96040000
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x00831824
  .word 0x00031a83
  .word 0x2c61000d
  .word 0x1020009d
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484abf0
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x2403001f
  .word 0x0240202d
  .word 0x7a020000
  .word 0x26100010
  .word 0x2463ffff
  .word 0x7c820000
  .word 0x24840010
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x10000085
  .word 0x00000000
  .word 0x24040011
  .word 0x0200302d
  .word 0x0240282d
  .word 0x78c30000
  .word 0x78c20010
  .word 0x24c60020
  .word 0x2484ffff
  .word 0x7ca30000
  .word 0x7ca20010
  .word 0x24a50020
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xc60c0004
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040b82d
  .word 0xc60c0008
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040f02d
  .word 0xc60c000c
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040802d
  .word 0xc64c0004
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040a82d
  .word 0xc64c0008
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040b02d
  .word 0xc64c000c
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a70
  .word 0x02e0282d
  .word 0x03c0302d
  .word 0x0200382d
  .word 0x02a0402d
  .word 0x02c0482d
  .word 0x0040502d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x10000056
  .word 0x00000000
  .word 0x2403001b
  .word 0x0240202d
  .word 0x7a020000
  .word 0x26100010
  .word 0x2463ffff
  .word 0x7c820000
  .word 0x24840010
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x1000004b
  .word 0x00000000
  .word 0x24040021
  .word 0x0240282d
  .word 0x8e030000
  .word 0x8e020004
  .word 0x26100008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x1000003e
  .word 0x00000000
  .word 0x24040022
  .word 0x0240282d
  .word 0x8e030000
  .word 0x8e020004
  .word 0x26100008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0x24040020
  .word 0x0240282d
  .word 0x8e030000
  .word 0x8e020004
  .word 0x26100008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x24040021
  .word 0x0240282d
  .word 0x8e030000
  .word 0x8e020004
  .word 0x26100008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x24040026
  .word 0x0240282d
  .word 0x8e030000
  .word 0x8e020004
  .word 0x26100008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x24030017
  .word 0x0240202d
  .word 0x7a020000
  .word 0x26100010
  .word 0x2463ffff
  .word 0x7c820000
  .word 0x24840010
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x0240202d
  .word 0x26450004
  .word 0x26460010
  .word 0x0000382d
  .word 0x0c0edd18
  .word 0x00000000
  .word 0x26730001
  .word 0x0271182a
  .word 0x1460ff4b
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
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
}


/* opt_common_subs off: FUN_00389B50 frame 0x70 -> 0x60, nd128 -> nd120, object 524 -> 552 / window 560; measured W319. */
#pragma push
 #pragma opt_common_subs off
// FUN_00389B50


asm void FUN_00389b50(int *param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x0000802d
  .word 0x8c840000
  .word 0x24030030
  .word 0x10830006
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x10000071
  .word 0x00000000
  .word 0x8e43006c
  .word 0x10000003
  .word 0x00000000
  .word 0x26100001
  .word 0x8c63004c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0x12000065
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c4289cc
  .word 0x10400003
  .word 0x00000000
  .word 0x0c0e27d0
  .word 0x00000000
  .word 0x001010c0
  .word 0x00501823
  .word 0x00031080
  .word 0x00431023
  .word 0x0002a080
  .word 0x3c110096
  .word 0x26310184
  .word 0x24040001
  .word 0x0280282d
  .word 0x3c060004
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040982d
  .word 0x16600006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a10
  .word 0x2405003b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24040001
  .word 0x0280282d
  .word 0x0c0e1b10
  .word 0x00000000
  .word 0x3c030096
  .word 0xac7389cc
  .word 0x3c030096
  .word 0xac7089c8
  .word 0x8e440000
  .word 0x3c030096
  .word 0xac6489d0
  .word 0x0000a02d
  .word 0x8e52006c
  .word 0x10000039
  .word 0x00000000
  .word 0x001418c0
  .word 0x00742023
  .word 0x00041880
  .word 0x00641823
  .word 0x00031880
  .word 0x02633021
  .word 0x24040015
  .word 0x0240282d
  .word 0x8ca30000
  .word 0x24a50004
  .word 0x2484ffff
  .word 0xacc30000
  .word 0x24c60004
  .word 0x1c80fffa
  .word 0x00000000
  .word 0x8e430040
  .word 0x10600025
  .word 0x00000000
  .word 0x24040001
  .word 0x24050130
  .word 0x3c060004
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040802d
  .word 0x16000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a10
  .word 0x2405003b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050130
  .word 0x0c0e1b10
  .word 0x00000000
  .word 0x001418c0
  .word 0x00742023
  .word 0x00041880
  .word 0x00641823
  .word 0x00031880
  .word 0x02631821
  .word 0xac700040
  .word 0x8e460040
  .word 0x24050026
  .word 0x8cc40000
  .word 0x8cc30004
  .word 0x24c60008
  .word 0x24a5ffff
  .word 0xae040000
  .word 0xae030004
  .word 0x26100008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x8e52004c
  .word 0x26940001
  .word 0x1640ffc7
  .word 0x00000000
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
#pragma opt_common_subs on
#pragma pop


// FUN_00389D80


void FUN_00389d80(int param_1,int param_2)



{

  u32 uVar1;

  u32 uVar2;

  int iVar3;

  int iVar4;

  int iVar10;
  u32 *puVar5;

  u32 *puVar8;

  u32 *puVar7;

  int iVar6;

  u32 *member;
  u32 *puVar9;

  u32 stack[21];

  


  iVar10 = *(int *)param_2;

  switch (iVar10) {
  case 1:
  case 0x30:
    iVar3 = *(int *)DAT_009589c8_abs;
    iVar4 = *(int *)DAT_009589cc_abs;
    if (iVar3 != 0) {

    for (iVar10 = 0; iVar10 < iVar3; iVar10 = iVar10 + 1) {

      puVar9 = (u32 *)(iVar4 + iVar10 * 0x54);

      puVar5 = (u32 *)FUN_00361350(param_2,*(u16 *)puVar9,param_1);

      {
        u32 *copySrc;
        u32 *copyDst;
        int copyWords;

        copyDst = stack;
        copyWords = 0x15;
        copySrc = puVar5;
        do {
          uVar1 = *copySrc;
          copySrc = copySrc + 1;
          copyWords = copyWords + -1;
          *copyDst = uVar1;
          copyDst = copyDst + 1;
        } while (0 < copyWords);

        copyWords = 0x15;
        copySrc = puVar9;
        copyDst = puVar5;
        do {
          uVar1 = *copySrc;
          copySrc = copySrc + 1;
          copyWords = copyWords + -1;
          *copyDst = uVar1;
          copyDst = copyDst + 1;
        } while (0 < copyWords);
      }

      if (*(int *)param_2 == 0x30) {

        puVar5[0xc] = stack[12];

      }

      else {

        puVar5[0xc] = 0;

      }

      puVar5[0x10] = stack[16];

      member = puVar9 + 0x10;
      if (*member != 0) {

        FUN_0038d790((int)puVar5);

        puVar8 = (u32 *)*member;

        puVar7 = (u32 *)puVar5[0x10];

        iVar6 = 0x26;

        do {

          uVar1 = *puVar8;

          uVar2 = puVar8[1];

          puVar8 = puVar8 + 2;

          iVar6 = iVar6 + -1;

          *puVar7 = uVar1;

          puVar7[1] = uVar2;

          puVar7 = puVar7 + 2;

        } while (0 < iVar6);

      }

      puVar5[0x13] = stack[19];

      puVar5[0x14] = stack[20];

    }

    }
  }

  return;

}


// FUN_00389F40


void FUN_00389f40(void)
{
  int *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar8;

  iVar3 = *(int *)DAT_009589c8_abs;
  iVar2 = *(int *)DAT_009589cc_abs;
  if (iVar3 != 0) {
    iVar4 = 0;
    goto LAB_0038a0b0;
LAB_00389fbc:
    pvVar8 = (void *)(iVar2 + iVar4 * 0x54);
    iVar5 = *(int *)((u8 *)pvVar8 + 0x40);
    if (iVar5 != 0) {
      (*DAT_0096017c_abs)(iVar5);
      *(u32 *)((u8 *)pvVar8 + 0x40) = 0;
    }
    iVar4 = iVar4 + 1;
LAB_0038a0b0:
    if (iVar4 < iVar3) goto LAB_00389fbc;
    (*DAT_0096017c_abs)(*(int *)DAT_009589cc_abs);
    iVar5 = iVar3 * 0x54;
    if (iVar5 >= 0xd) goto LAB_0038a080;
    if (iVar5 < 0) goto LAB_0038a080;
    if (iVar5 == 9) goto LAB_0038a080;
    if (iVar5 == 6) goto LAB_0038a048;
    if (iVar5 == 5) goto LAB_0038a048;
    if (iVar5 == 4) goto LAB_0038a048;
    switch (iVar5) {
    case 0:
      goto LAB_0038a048;
    default:
      goto LAB_0038a064;
    }
LAB_0038a048:
    *(u32 *)((u8 *)DAT_00958a60_abs + iVar5 * 4) = 0;
    goto LAB_0038a080;
LAB_0038a064:
    puVar1 = (int *)((u8 *)DAT_00958a60_abs + iVar5 * 4);
    *puVar1 = *puVar1 - 1;
LAB_0038a080:
    *(int *)DAT_009589cc_abs = 0;
    *(int *)DAT_009589c8_abs = 0;
  }
  return;
}


// FUN_0038a0b0


u32 FUN_0038a0b0(int param_1)



{

  return *(u32 *)(param_1 + 0x65c);

}


// FUN_0038A0C0


void FUN_0038a0c0(int param_1,int param_2)



{

  if (param_2 < 2) {

    switch (param_2) {
    case 0:
      FUN_003bb280(0x1e58);
      break;
    case 1:
      FUN_003bb280(0x1e59);
      break;
    }
store_mode:

    *(int *)(param_1 + 0x65c) = (int)param_2;

  }

  return;

}


// FUN_0038A140


void FUN_0038a140(u32 param_1,u32 *param_2)



{

  u32 *puVar3;

  int iVar2;

  u32 uVar1;

  

  uGpffffb924 = param_1;

  puVar3 = (u32 *)DAT_00958970_abs;

  iVar2 = 0x15;

  do {

    uVar1 = *param_2;

    param_2 = param_2 + 1;

    iVar2 = iVar2 + -1;

    *puVar3 = uVar1;

    puVar3 = puVar3 + 1;

  } while (0 < iVar2);

  return;

}


#pragma push
#pragma opt_loop_invariants on
// FUN_0038A180


void FUN_0038a180(int param_1,int param_2)
{
  float *pfVar5;
  float *pfOut;
  float *pfIn;
  s16 uVar1;
  s16 uVar2;
  s16 uVar3;
  s16 uVar4;
  int iVar4;

  if (iGpffffb924 != param_1) {
    return;
  }
  switch (iGpffffb924) {
  case 0x21:
    break;
  default:
    return;
  }
  *(u16 *)(param_2 + 2) = *(u16 *)DAT_0095897a_abs;
  iVar4 = 0;
  pfVar5 = (float *)DAT_00958970_abs;
  for (; iVar4 < 10; iVar4 = iVar4 + 1) {
    pfIn = (float *)((u8 *)pfVar5 + iVar4 * 4);
    /* Removing this barrier loses FUN_0038a180 (MATCH nd0 -> MISMATCH nd6) - measured W164. */
    asm volatile /* Removing this function's qualifier batch loses FUN_0038a180 (MATCH nd0 -> MISMATCH nd4, size 156 -> 156) - measured W170. */("" : "+r"(pfIn));
    pfOut = (float *)(param_2 + iVar4 * 4);
    /* Removing this barrier loses FUN_0038a180 (MATCH nd0 -> MISMATCH nd11) - measured W164. */
    asm volatile /* Removing this function's qualifier batch loses FUN_0038a180 (MATCH nd0 -> MISMATCH nd4, size 156 -> 156) - measured W170. */("" : "+r"(pfOut));
    pfOut[4] = pfIn[4];
    uVar4 = *(volatile /* Removing this function's qualifier batch loses FUN_0038a180 (MATCH nd0 -> MISMATCH nd4, size 156 -> 156) - measured W170. */ s16 *)DAT_00958978_abs;
    uVar1 = *(volatile /* Removing this function's qualifier batch loses FUN_0038a180 (MATCH nd0 -> MISMATCH nd4, size 156 -> 156) - measured W170. */ s16 *)DAT_0095897a_abs;
    uVar2 = *(volatile /* Removing this function's qualifier batch loses FUN_0038a180 (MATCH nd0 -> MISMATCH nd4, size 156 -> 156) - measured W170. */ s16 *)DAT_0095897c_abs;
    uVar3 = *(volatile /* Removing this function's qualifier batch loses FUN_0038a180 (MATCH nd0 -> MISMATCH nd4, size 156 -> 156) - measured W170. */ s16 *)DAT_0095897e_abs;
    *(u16 *)(param_2 + 8) = uVar4;
    *(u16 *)(param_2 + 0xa) = uVar1;
    *(u16 *)(param_2 + 0xc) = uVar2;
    *(u16 *)(param_2 + 0xe) = uVar3;
  }
  return;
}
#pragma pop


// FUN_0038A220


float FUN_0038a220(int param_1)



{

  return 100.0f - (float)param_1 * 10.0f;

}


#pragma alias evtMenuDrawText FUN_0038a260
// FUN_0038A260





void evtMenuDrawText(s32 x,s32 y,f32 depth,s32 style,const char *format,...)
{
  va_list args;
  u8 text[256];
  RwRGBA color;
  RwV2d position;

  va_start(args,format);
  evtMenuVFormatText(text,format,args);

  switch (style) {
  case 0:
    color.b = 0xe6;
    color.g = 0xe6;
    color.r = 0xe6;
    color.a = 0xff;
    break;
  case 1:
    color.g = 0x80;
    color.r = 0x80;
    color.b = 0xff;
    color.a = 0xff;
    break;
  case 2:
  case 3:
    break;
  case 4:
    color.g = 0x80;
    color.r = 0x80;
    color.b = 0xff;
    color.a = 0xff;
    break;
  case 5:
    color.g = 0x80;
    color.r = 0x80;
    color.b = 0xff;
    color.a = 0xff;
    break;
  case 6:
    color.r = 0xf0;
    color.g = 0xf0;
    color.b = 0x64;
    color.a = 0xff;
    break;
  case 0xe:
    color.r = 0x80;
    color.g = 0xc8;
    color.b = 0xc8;
    color.a = 0xff;
    break;
  default:
    color.b = 0x80;
    color.g = 0x80;
    color.r = 0x80;
    color.a = 0xff;
    break;
  }

  position.x = (f32)x;
  position.y = (f32)y;
  FUN_001050e0_typed(*(u64 *)&position,depth,*(u32 *)&color,text);
}


// FUN_0038A480

int FUN_0038a480(int param_1,int param_2,int param_3,int param_4)



{

  param_1 = param_1 + param_2;

  if (param_1 < param_3) {

    param_1 = param_3;

  }

  if (!(param_1 < param_4)) {

    param_1 = param_4;

  }

  return param_1;

}


// FUN_0038A4B0


u32 FUN_0038a4b0(u64 param_1,u8 *param_2,u32 *param_3,u32 *param_4)



{

  u32 uVar1;

  s32 lVar2;

  u16 uStack_2;
  s32 type;

  

  *param_3 = (int)*(short *)(param_2 + 0x10) & 0xfff;

  *param_4 = (int)*(short *)(param_2 + 0x10) >> 0xc & 0xf;
  type = *(s8 *)(param_2 + 0x15);

  switch(type) {
  case 1:

  case 2:

  case 3:

  case 4:

  case 5:

    uStack_2 = 0;

    lVar2 = FUN_00397580(param_1,*(s8 *)(param_2 + 0x15) + -1,&uStack_2);
    if (lVar2 == 1) {
      if (uStack_2 == 0xffff) {
        return 0;
      }
      *param_3 = *param_3 + (u32)uStack_2;
    }
    else {
      return 0;
    }
    goto success;

  case 6:

    uVar1 = 0;

    break;

  default:
  success:
    uVar1 = 1;

  }

  return uVar1;

}


// FUN_0038A590


void FUN_0038a590(int param_1,int param_2)



{

  u32 uVar1;

  u32 uVar2;

  u32 *puVar3;

  u32 *puVar5;

  int iVar4;
  int iVar6;

  

  puVar3 = (u32 *)FUN_003b5d10(0x1e59);

  if ((param_2 < 3) && (puVar3 != (u32 *)0x0)) {

    iVar6 = (int)param_2 * 0x110;
    puVar5 = (u32 *)(iVar6 + param_1 + 0x328);

    iVar4 = 0x22;

    do {

      uVar1 = *puVar3;

      uVar2 = puVar3[1];

      puVar3 = puVar3 + 2;

      iVar4 = iVar4 + -1;

      *puVar5 = uVar1;

      puVar5[1] = uVar2;

      puVar5 = puVar5 + 2;

    } while (0 < iVar4);

  }

  return;

}


// FUN_0038A620


void FUN_0038a620(int param_1,int param_2)



{

  u32 uVar1;

  u32 uVar2;

  u32 *puVar3;

  u32 *puVar5;

  int iVar4;
  int iVar6;

  

  puVar3 = (u32 *)FUN_003b5d10(0x1e59);

  if (((param_2 < 3) && (puVar3 != (u32 *)0x0)) && (param_2 == 2)) {
    iVar6 = (int)param_2 * 0x110;
    puVar5 = (u32 *)(iVar6 + param_1 + 0x328);

    iVar4 = 0x22;

    do {

      uVar1 = *puVar5;

      uVar2 = puVar5[1];

      puVar5 = puVar5 + 2;

      iVar4 = iVar4 + -1;

      *puVar3 = uVar1;

      puVar3[1] = uVar2;

      puVar3 = puVar3 + 2;

    } while (0 < iVar4);

  }

  return;

}


// FUN_0038A6C0


void FUN_0038a6c0(int param_1)



{

  u32 uVar1;

  u32 uVar2;

  u32 *puVar3;

  u32 *puVar5;

  int iVar4;

  

  puVar3 = (u32 *)FUN_003b5d10(0x1e59);

  if (puVar3 != (u32 *)0x0) {

    puVar5 = (u32 *)(param_1 + 0x328);
    iVar4 = 0x22;

    do {

      uVar1 = *puVar3;

      uVar2 = puVar3[1];

      puVar3 = puVar3 + 2;

      iVar4 = iVar4 + -1;

      *puVar5 = uVar1;

      puVar5[1] = uVar2;

      puVar5 = puVar5 + 2;

    } while (0 < iVar4);

  }

  *(u32 *)(param_1 + 0x658) = *(u32 *)(param_1 + 0x65c);

  return;

}


// FUN_0038A730


void FUN_0038a730(int param_1)



{

  int iVar1;

  

  FUN_003b5d10(0x1e59);

  iVar1 = *(int *)(param_1 + 0x658);

  if (iVar1 < 2) {

    switch (iVar1) {
    case 0:
      FUN_003bb280(0x1e58);
      break;
    case 1:
      FUN_003bb280(0x1e59);
      break;
    }

    *(int *)(param_1 + 0x65c) = iVar1;

  }

  return;

}


/* opt_lifetimes on: FUN_0038A7C0 nd12 -> nd0, object 320/320; measured W319. */
 #pragma push
 #pragma opt_lifetimes on
// FUN_0038A7C0


void FUN_0038a7c0(RwV3d *param_1,RwV3d *param_2)
{
  typedef struct {
    RwV3d vector0;
    u8 pad_0c[0x14];
    RwV3d vector20;
  } EvtMiscVectorSource;
  EvtMiscVectorSource *vectors;
  u8 *camera;
  u8 *cursor;
  s32 remaining;
  RwV3d input;
  RwV3d output1;
  RwV3d output2;

  camera = (u8 *)FUN_00198590();

  cursor = (u8 *)&output1;
  remaining = sizeof(RwV3d);
  if (cursor != NULL) {
    do {
      *cursor = 0;
      cursor++;
      remaining--;
    } while (remaining != 0);
  }

  cursor = (u8 *)&output2;
  remaining = sizeof(RwV3d);
  if (cursor != NULL) {
    do {
      *cursor = 0;
      cursor++;
      remaining--;
    } while (remaining != 0);
  }

  if (camera != NULL && *(int *)(camera + 4) != 0) {
    vectors = (EvtMiscVectorSource *)FUN_004cb2f0_evt_misc(*(u32 *)(camera + 4));

    input = vectors->vector20;
    input.y = 0;
    FUN_004c69f0(&output1,&input);

    input = vectors->vector0;
    input.y = 0;
    FUN_004c69f0(&output2,&input);

    *param_1 = output1;
    *param_2 = output2;
  }
}
#pragma opt_lifetimes reset
#pragma pop


// FUN_0038A900


float FUN_0038a900(int param_1)



{

  return (float)param_1 + 2.0f;

}


// FUN_0038A920


int FUN_0038a920(int param_1,u16 *param_2,int param_3)



{

  u16 uVar1;

  u16 *puVar2;

  int iVar3;

  u32 uVar4;

  u32 uVar5;

  u32 uVar6;
  u32 *src;
  u32 *dst;
  int count;

  f32 fVar4;

  f32 fVar5;

  f32 fVar6;

  f32 fVar7;

  

  uVar1 = *param_2;

  iVar3 = (int)(uVar1 & 0xffc00) >> 10;

  if (iVar3 == 3) {

    puVar2 = (u16 *)(param_1 + param_3 * 0x70);

    *puVar2 = uVar1;

    fVar7 = *(f32 *)(param_2 + 0x96);

    fVar6 = *(f32 *)(param_2 + 0x98);

    fVar4 = *(f32 *)(param_2 + 0x9a);

    fVar5 = *(f32 *)(param_2 + 0x9c);

    *(f32 *)(puVar2 + 2) = fVar7;

    *(f32 *)(puVar2 + 4) = fVar6;

    *(f32 *)(puVar2 + 6) = fVar4;

    *(f32 *)(puVar2 + 8) = fVar5;

    fVar7 = *(f32 *)(param_2 + 0x9e);

    fVar6 = *(f32 *)(param_2 + 0xa0);

    fVar4 = *(f32 *)(param_2 + 0xa2);

    fVar5 = *(f32 *)(param_2 + 0xa4);

    *(f32 *)(puVar2 + 10) = fVar7;

    *(f32 *)(puVar2 + 0xc) = fVar6;

    *(f32 *)(puVar2 + 0xe) = fVar4;

    *(f32 *)(puVar2 + 0x10) = fVar5;

    src = (u32 *)(param_2 + 0xa8);
    dst = (u32 *)(puVar2 + 0x18);
    count = 8;
    do {
      uVar4 = *src;
      uVar5 = src[1];
      src = src + 2;
      count = count + -1;
      *dst = uVar4;
      dst[1] = uVar5;
      dst = dst + 2;
    } while (0 < count);

  }

  else if (iVar3 == 1) {

    puVar2 = (u16 *)(param_1 + param_3 * 0x70);

    *puVar2 = uVar1;

    fVar7 = *(f32 *)(param_2 + 0x96);

    fVar6 = *(f32 *)(param_2 + 0x98);

    fVar4 = *(f32 *)(param_2 + 0x9a);

    fVar5 = *(f32 *)(param_2 + 0x9c);

    *(f32 *)(puVar2 + 2) = fVar7;

    *(f32 *)(puVar2 + 4) = fVar6;

    *(f32 *)(puVar2 + 6) = fVar4;

    *(f32 *)(puVar2 + 8) = fVar5;

    fVar7 = *(f32 *)(param_2 + 0x9e);

    fVar6 = *(f32 *)(param_2 + 0xa0);

    fVar4 = *(f32 *)(param_2 + 0xa2);

    fVar5 = *(f32 *)(param_2 + 0xa4);

    *(f32 *)(puVar2 + 10) = fVar7;

    *(f32 *)(puVar2 + 0xc) = fVar6;

    *(f32 *)(puVar2 + 0xe) = fVar4;

    *(f32 *)(puVar2 + 0x10) = fVar5;

    src = (u32 *)(param_2 + 0xa8);
    dst = (u32 *)(puVar2 + 0x18);
    count = 8;
    do {
      uVar4 = *src;
      uVar5 = src[1];
      src = src + 2;
      count = count + -1;
      *dst = uVar4;
      dst[1] = uVar5;
      dst = dst + 2;
    } while (0 < count);

  }

  else if (iVar3 == 0xc) {

    puVar2 = (u16 *)(param_1 + param_3 * 0x70);

    *puVar2 = uVar1;

    fVar7 = *(f32 *)(param_2 + 0x80);

    fVar6 = *(f32 *)(param_2 + 0x82);

    fVar4 = *(f32 *)(param_2 + 0x84);

    fVar5 = *(f32 *)(param_2 + 0x86);

    *(f32 *)(puVar2 + 2) = fVar7;

    *(f32 *)(puVar2 + 4) = fVar6;

    *(f32 *)(puVar2 + 6) = fVar4;

    *(f32 *)(puVar2 + 8) = fVar5;

    fVar7 = *(f32 *)(param_2 + 0x88);

    fVar6 = *(f32 *)(param_2 + 0x8a);

    fVar4 = *(f32 *)(param_2 + 0x8c);

    fVar5 = *(f32 *)(param_2 + 0x8e);

    *(f32 *)(puVar2 + 10) = fVar7;

    *(f32 *)(puVar2 + 0xc) = fVar6;

    *(f32 *)(puVar2 + 0xe) = fVar4;

    *(f32 *)(puVar2 + 0x10) = fVar5;

    src = (u32 *)(param_2 + 0x90);
    dst = (u32 *)(puVar2 + 0x18);
    count = 8;
    do {
      uVar4 = *src;
      uVar5 = src[1];
      src = src + 2;
      count = count + -1;
      *dst = uVar4;
      dst[1] = uVar5;
      dst = dst + 2;
    } while (0 < count);

  }

  return;

}


/* opt_common_subs off: FUN_0038AB00 nd753 -> nd734, object 1096/1136; measured W319. */
#pragma push
#pragma opt_common_subs off
// FUN_0038AB00


asm int FUN_0038ab00(int param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0080
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
  .word 0x0000982d
  .word 0x0000902d
  .word 0x16800004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000fd
  .word 0x00000000
  .word 0x24030001
  .word 0x1683000f
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0ed77c
  .word 0x00000000
  .word 0x02628021
  .word 0x24040001
  .word 0x0c0ed77c
  .word 0x00000000
  .word 0x02028021
  .word 0x2404000c
  .word 0x0c0ed77c
  .word 0x00000000
  .word 0x02029821
  .word 0x10000018
  .word 0x00000000
  .word 0x24020002
  .word 0x1682000b
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0ed77c
  .word 0x00000000
  .word 0x02628021
  .word 0x24040001
  .word 0x0c0ed77c
  .word 0x00000000
  .word 0x02029821
  .word 0x1000000b
  .word 0x00000000
  .word 0x24020003
  .word 0x16820004
  .word 0x00000000
  .word 0x0060982d
  .word 0x10000005
  .word 0x00000000
  .word 0xaf80b920
  .word 0x0000102d
  .word 0x100000d5
  .word 0x00000000
  .word 0xaf93b920
  .word 0x16600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000cf
  .word 0x00000000
  .word 0x001310c0
  .word 0x00531023
  .word 0x00028100
  .word 0x3c150096
  .word 0x26b50184
  .word 0x24040001
  .word 0x0200282d
  .word 0x3c060004
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040882d
  .word 0x16200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a10
  .word 0x2405003b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x001310c0
  .word 0x00531023
  .word 0x0002b900
  .word 0x2404000c
  .word 0x0200282d
  .word 0x0c0e1b10
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x02e0302d
  .word 0x0c148502
  .word 0x00000000
  .word 0x24020001
  .word 0x1682002d
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0220202d
  .word 0x0040282d
  .word 0x0240302d
  .word 0x0c0e2a48
  .word 0x00000000
  .word 0x8c4200f8
  .word 0x26520001
  .word 0x1440fff8
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0220202d
  .word 0x0040282d
  .word 0x0240302d
  .word 0x0c0e2a48
  .word 0x00000000
  .word 0x8c4200f8
  .word 0x26520001
  .word 0x1440fff8
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0220202d
  .word 0x0040282d
  .word 0x0240302d
  .word 0x0c0e2a48
  .word 0x00000000
  .word 0x8c4200f8
  .word 0x26520001
  .word 0x1440fff8
  .word 0x00000000
  .word 0x10000042
  .word 0x00000000
  .word 0x24020002
  .word 0x1682001f
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0220202d
  .word 0x0040282d
  .word 0x0240302d
  .word 0x0c0e2a48
  .word 0x00000000
  .word 0x8c4200f8
  .word 0x26520001
  .word 0x1440fff8
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0220202d
  .word 0x0040282d
  .word 0x0240302d
  .word 0x0c0e2a48
  .word 0x00000000
  .word 0x8c4200f8
  .word 0x26520001
  .word 0x1440fff8
  .word 0x00000000
  .word 0x10000021
  .word 0x00000000
  .word 0x24020003
  .word 0x1682001e
  .word 0x00000000
  .word 0x02c0202d
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x0220202d
  .word 0x0040282d
  .word 0x0000302d
  .word 0x0c0e2a48
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x8f83b920
  .word 0x000310c0
  .word 0x00431023
  .word 0x00028100
  .word 0x0220202d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c428a90
  .word 0x00501823
  .word 0x3c020096
  .word 0xac438a90
  .word 0x0000102d
  .word 0x10000040
  .word 0x00000000
  .word 0x24040001
  .word 0x24050070
  .word 0x3c060004
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040902d
  .word 0x16400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a10
  .word 0x2405003b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050070
  .word 0x0c0e1b10
  .word 0x00000000
  .word 0xae530000
  .word 0xae540004
  .word 0xae510008
  .word 0x0c068340
  .word 0x00000000
  .word 0x0040882d
  .word 0x0c068360
  .word 0x00000000
  .word 0x0040802d
  .word 0x12200009
  .word 0x00000000
  .word 0xc6230000
  .word 0xc6220004
  .word 0xc6210008
  .word 0xc620000c
  .word 0xe643000c
  .word 0xe6420010
  .word 0xe6410014
  .word 0xe6400018
  .word 0x0c068350
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0xc4430000
  .word 0xc4420004
  .word 0xc4410008
  .word 0xc440000c
  .word 0xe643001c
  .word 0xe6420020
  .word 0xe6410024
  .word 0xe6400028
  .word 0x1200000c
  .word 0x00000000
  .word 0x26450030
  .word 0x24040008
  .word 0x8e030000
  .word 0x8e020004
  .word 0x26100008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x0240102d
  .word 0xdfbf0080
  .word 0x7bb70070
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
}
#pragma pop


// FUN_0038AF70


void FUN_0038af70(u16 *param_1)



{

  int iVar1;

  int iVar2;

  u32 *puVar3;

  u32 uVar4;

  u32 uVar5;

  u32 uVar6;
  u32 *src;
  u32 *dst;
  int count;

  f32 fVar4;

  f32 fVar5;

  f32 fVar6;

  f32 fVar7;

  

  iVar1 = FUN_003b5d10(*param_1);

  iVar2 = (int)(*param_1 & 0xffc00) >> 10;

  if (iVar2 == 3) {

    fVar7 = *(f32 *)(param_1 + 2);

    fVar6 = *(f32 *)(param_1 + 4);

    fVar4 = *(f32 *)(param_1 + 6);

    fVar5 = *(f32 *)(param_1 + 8);

    *(f32 *)(iVar1 + 300) = fVar7;

    *(f32 *)(iVar1 + 0x130) = fVar6;

    *(f32 *)(iVar1 + 0x134) = fVar4;

    *(f32 *)(iVar1 + 0x138) = fVar5;

    fVar7 = *(f32 *)(param_1 + 10);

    fVar6 = *(f32 *)(param_1 + 0xc);

    fVar4 = *(f32 *)(param_1 + 0xe);

    fVar5 = *(f32 *)(param_1 + 0x10);

    *(f32 *)(iVar1 + 0x13c) = fVar7;

    *(f32 *)(iVar1 + 0x140) = fVar6;

    *(f32 *)(iVar1 + 0x144) = fVar4;

    *(f32 *)(iVar1 + 0x148) = fVar5;

    src = (u32 *)(param_1 + 0x18);
    dst = (u32 *)(iVar1 + 0x150);
    count = 8;
    do {
      uVar4 = *src;
      uVar5 = src[1];
      src = src + 2;
      count = count + -1;
      *dst = uVar4;
      dst[1] = uVar5;
      dst = dst + 2;
    } while (0 < count);

  }

  else if (iVar2 == 1) {

    fVar7 = *(f32 *)(param_1 + 2);

    fVar6 = *(f32 *)(param_1 + 4);

    fVar4 = *(f32 *)(param_1 + 6);

    fVar5 = *(f32 *)(param_1 + 8);

    *(f32 *)(iVar1 + 300) = fVar7;

    *(f32 *)(iVar1 + 0x130) = fVar6;

    *(f32 *)(iVar1 + 0x134) = fVar4;

    *(f32 *)(iVar1 + 0x138) = fVar5;

    fVar7 = *(f32 *)(param_1 + 10);

    fVar6 = *(f32 *)(param_1 + 0xc);

    fVar4 = *(f32 *)(param_1 + 0xe);

    fVar5 = *(f32 *)(param_1 + 0x10);

    *(f32 *)(iVar1 + 0x13c) = fVar7;

    *(f32 *)(iVar1 + 0x140) = fVar6;

    *(f32 *)(iVar1 + 0x144) = fVar4;

    *(f32 *)(iVar1 + 0x148) = fVar5;

    src = (u32 *)(param_1 + 0x18);
    dst = (u32 *)(iVar1 + 0x150);
    count = 8;
    do {
      uVar4 = *src;
      uVar5 = src[1];
      src = src + 2;
      count = count + -1;
      *dst = uVar4;
      dst[1] = uVar5;
      dst = dst + 2;
    } while (0 < count);

  }

  else if (iVar2 == 0xc) {

    fVar7 = *(f32 *)(param_1 + 2);

    fVar6 = *(f32 *)(param_1 + 4);

    fVar4 = *(f32 *)(param_1 + 6);

    fVar5 = *(f32 *)(param_1 + 8);

    *(f32 *)(iVar1 + 0x100) = fVar7;

    *(f32 *)(iVar1 + 0x104) = fVar6;

    *(f32 *)(iVar1 + 0x108) = fVar4;

    *(f32 *)(iVar1 + 0x10c) = fVar5;

    fVar7 = *(f32 *)(param_1 + 10);

    fVar6 = *(f32 *)(param_1 + 0xc);

    fVar4 = *(f32 *)(param_1 + 0xe);

    fVar5 = *(f32 *)(param_1 + 0x10);

    *(f32 *)(iVar1 + 0x110) = fVar7;

    *(f32 *)(iVar1 + 0x114) = fVar6;

    *(f32 *)(iVar1 + 0x118) = fVar4;

    *(f32 *)(iVar1 + 0x11c) = fVar5;

    src = (u32 *)(param_1 + 0x18);
    dst = (u32 *)(iVar1 + 0x120);
    count = 8;
    do {
      uVar4 = *src;
      uVar5 = src[1];
      src = src + 2;
      count = count + -1;
      *dst = uVar4;
      dst[1] = uVar5;
      dst = dst + 2;
    } while (0 < count);

  }

  return;

}


// FUN_0038B140


void FUN_0038b140(int param_1)



{

  int *piVar1;

  f32 *pfVar2;

  f32 *pfVar3;

  f32 fVar1;

  f32 fVar2;

  f32 fVar3;

  f32 fVar4;

  int iVar4;

  int *piVar5;

  int *piVar6;

  int iVar7;

  int iVar8;

  int iVar9;

  

  if (param_1 != 0) {

    for (iVar4 = 0; piVar6 = (int *)param_1, iVar4 < *piVar6; iVar4 = iVar4 + 1) {

      FUN_0038af70((u16 *)(piVar6[2] + iVar4 * 0x70));

    }

    pfVar2 = (f32 *)FUN_001a0d00();
    pfVar3 = (f32 *)FUN_001a0d00();

    piVar1 = (int *)FUN_001a0d80();

    if (pfVar2 != (f32 *)0x0) {

      fVar1 = ((f32 *)piVar6)[3];
      fVar2 = ((f32 *)piVar6)[4];
      fVar3 = ((f32 *)piVar6)[5];
      fVar4 = ((f32 *)piVar6)[6];
      pfVar2[0] = fVar1;
      pfVar2[1] = fVar2;
      pfVar2[2] = fVar3;
      pfVar2[3] = fVar4;

    }

    if (pfVar3 != (f32 *)0x0) {

      fVar1 = ((f32 *)piVar6)[7];
      fVar2 = ((f32 *)piVar6)[8];
      fVar3 = ((f32 *)piVar6)[9];
      fVar4 = ((f32 *)piVar6)[10];
      pfVar3[0] = fVar1;
      pfVar3[1] = fVar2;
      pfVar3[2] = fVar3;
      pfVar3[3] = fVar4;

    }

    if (piVar1 != (int *)0x0) {

      piVar5 = piVar6 + 0xc;

      iVar7 = 8;

      do {

        iVar8 = *piVar5;

        iVar9 = piVar5[1];

        piVar5 = piVar5 + 2;

        iVar7 = iVar7 + -1;

        *piVar1 = iVar8;

        piVar1[1] = iVar9;

        piVar1 = piVar1 + 2;

      } while (0 < iVar7);

    }

    iVar4 = iGpffffb920 * 0x70;
    {
      void (**freeFn)(...) = (void (**)(...))DAT_0096017c_abs;
      (*freeFn)(piVar6[2]);
      *DAT_00958a90_abs = *DAT_00958a90_abs - iVar4;
      (*freeFn)(param_1);
      *DAT_00958a90_abs = *DAT_00958a90_abs - 0x70;
    }

  }

  return;

}


/* W415 ORDER probes: explicit ascending switch plus f32 copy types lowered nd319 -> 12 (obj648/window656). The remaining five words are only post-call loop setup order at offsets 336/340/344 (move/addiu); no width-pair rows. Assignment reorder regressed to nd24; all six local declaration permutations were nd12,16,17,18,19,20; schedule-on was nd422/obj596. For-loop and while-loop rewrites of that setup both regressed to nd226/obj656 and nd227/obj656. */
/* W420 negative: post-call assignment reorder nd12/object648/window656/rate1.85% -> nd24/object648/window656/rate3.70%; rejected. */
/* DUMMYDUMB session 2026-10-20: two real words - retail sets up the copy
 * loop as src, count, dst (addiu a3,s0,336 / li a1,8 / move a2,v0) and this
 * source as dst, count, src (move a2,v0 / li a1,8 / addiu a3,s0,336). The
 * loop body and the rest of the function are byte-identical, so only the
 * order of the three initialisations differs. Probed: six permutations of the
 * three initialisations (with the call kept first, and moved) - baseline
 * (call, count, src) is the best of them; the others regress to nd12..nd21.
 * Confirmed wall: instruction scheduling / evaluation order. */
// FUN_0038B2C0


asm void FUN_0038b2c0(u16 *param_1,u32 *param_2,u32 *param_3,u32 *param_4,
                 int param_5)
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
  .word 0x00e0902d
  .word 0x0100882d
  .word 0x94840000
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000086
  .word 0x00000000
  .word 0x96a40000
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x00831824
  .word 0x00032283
  .word 0x24030003
  .word 0x1483004e
  .word 0x00000000
  .word 0xc6830000
  .word 0xc6820004
  .word 0xc6810008
  .word 0xc680000c
  .word 0xe603012c
  .word 0xe6020130
  .word 0xe6010134
  .word 0xe6000138
  .word 0xc6630000
  .word 0xc6620004
  .word 0xc6610008
  .word 0xc660000c
  .word 0xe603013c
  .word 0xe6020140
  .word 0xe6010144
  .word 0xe6000148
  .word 0x26040150
  .word 0x0240282d
  .word 0x0c0e2d80
  .word 0x00000000
  .word 0x24030003
  .word 0x12230031
  .word 0x00000000
  .word 0x24030002
  .word 0x12230006
  .word 0x00000000
  .word 0x24030001
  .word 0x12230003
  .word 0x00000000
  .word 0x1000005f
  .word 0x00000000
  .word 0x96040000
  .word 0x0000282d
  .word 0x0c06810c
  .word 0x00000000
  .word 0x0c068340
  .word 0x00000000
  .word 0xc603012c
  .word 0xc6020130
  .word 0xc6010134
  .word 0xc6000138
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x0c068350
  .word 0x00000000
  .word 0xc603013c
  .word 0xc6020140
  .word 0xc6010144
  .word 0xc6000148
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x0c068360
  .word 0x00000000
  .word 0x26070150
  .word 0x24050008
  .word 0x0040302d
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x10000037
  .word 0x00000000
  .word 0x96040000
  .word 0x24050001
  .word 0x0c06810c
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0x24030001
  .word 0x14830017
  .word 0x00000000
  .word 0xc6830000
  .word 0xc6820004
  .word 0xc6810008
  .word 0xc680000c
  .word 0xe603012c
  .word 0xe6020130
  .word 0xe6010134
  .word 0xe6000138
  .word 0xc6630000
  .word 0xc6620004
  .word 0xc6610008
  .word 0xc660000c
  .word 0xe603013c
  .word 0xe6020140
  .word 0xe6010144
  .word 0xe6000148
  .word 0x26040150
  .word 0x0240282d
  .word 0x0c0e2d80
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x2403000c
  .word 0x14830015
  .word 0x00000000
  .word 0xc6830000
  .word 0xc6820004
  .word 0xc6810008
  .word 0xc680000c
  .word 0xe6030100
  .word 0xe6020104
  .word 0xe6010108
  .word 0xe600010c
  .word 0xc6630000
  .word 0xc6620004
  .word 0xc6610008
  .word 0xc660000c
  .word 0xe6030110
  .word 0xe6020114
  .word 0xe6010118
  .word 0xe600011c
  .word 0x26040120
  .word 0x0240282d
  .word 0x0c0e2d80
  .word 0x00000000
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


// FUN_0038B550


void FUN_0038b550(int param_1,u32 *param_2,u32 *param_3,u32 *param_4)



{

  int iVar1;

  int *piVar2;

  

  if (param_1 != 0) {

    for (iVar1 = 0; piVar2 = (int *)param_1, iVar1 < *piVar2; iVar1 = iVar1 + 1) {

      FUN_0038b2c0_b550((u16 *)(piVar2[2] + iVar1 * 0x70),param_2,param_3,param_4,
                        piVar2[1]);

    }

  }

  return;

}


extern u8 D_006A2A70[];
extern u8 D_006A2A60[];
extern int FUN_004c31b0();
extern void FUN_004c31b0_cc10(void *matrix, void *axis, float angle, int mode);
#pragma alias FUN_004c31b0_cc10 FUN_004c31b0
extern void FUN_004c31b0_b600(void *matrix, void *axis, float angle, int mode);
#pragma alias FUN_004c31b0_b600 FUN_004c31b0
// FUN_0038B600


void FUN_0038b600(u32 *param_1,u32 *param_2)
{
  u32 uVar1;
  u32 uVar2;
  float *pfParam2;
  u32 *puVar4;
  int iVar3;
  u32 auStack_40[16];

  auStack_40[10] = 0x3f800000;
  auStack_40[5] = 0x3f800000;
  auStack_40[0] = 0x3f800000;
  auStack_40[4] = 0;
  auStack_40[2] = 0;
  auStack_40[1] = 0;
  auStack_40[9] = 0;
  auStack_40[8] = 0;
  auStack_40[6] = 0;
  auStack_40[14] = 0;
  auStack_40[13] = 0;
  auStack_40[12] = 0;
  auStack_40[3] = auStack_40[3] | 0x20003;
  pfParam2 = (float *)param_2;
  FUN_004c31b0_b600(auStack_40,D_006A2A70,pfParam2[1],1);
  FUN_004c31b0_b600(auStack_40,D_006A2A60,pfParam2[0],1);
  puVar4 = auStack_40;
  iVar3 = 8;
  do {
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    puVar4 = puVar4 + 2;
    iVar3 = iVar3 + -1;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1 = param_1 + 2;
  } while (0 < iVar3);
  return;
}


/* opt_loop_invariants on: FUN_0038B6E0 nd403 -> nd388, object 620/640; measured W319. W416 width casts at the lVar8 and three boundary param_2 flows lowered nd388 -> 385 (object/window 620/640); the unsigned-u16-use variant regressed to nd401/object624. */
#pragma push
#pragma opt_loop_invariants on
// FUN_0038B6E0


asm void FUN_0038b6e0(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c830080
  .word 0x18600095
  .word 0x00000000
  .word 0x8e020014
  .word 0x00451021
  .word 0x04410005
  .word 0x00000000
  .word 0x2402000a
  .word 0xae020014
  .word 0x10000002
  .word 0x00000000
  .word 0xae020014
  .word 0x8e02000c
  .word 0x00451021
  .word 0x04410005
  .word 0x00000000
  .word 0x2402000a
  .word 0xae02000c
  .word 0x10000002
  .word 0x00000000
  .word 0xae02000c
  .word 0x8e03000c
  .word 0x8e020018
  .word 0x0062082a
  .word 0x10200002
  .word 0x00000000
  .word 0xae030018
  .word 0x8e0c0084
  .word 0x24030003
  .word 0x2404001a
  .word 0x0005143c
  .word 0x0002143f
  .word 0x24070012
  .word 0x30aaffff
  .word 0x24080014
  .word 0x24090015
  .word 0x10000067
  .word 0x00000000
  .word 0x8d8b006c
  .word 0x10000061
  .word 0x00000000
  .word 0x85980020
  .word 0x956f0000
  .word 0x01f87021
  .word 0x01c6682a
  .word 0x15a0005a
  .word 0x00000000
  .word 0x00ae7021
  .word 0x01d8082a
  .word 0x10200004
  .word 0x00000000
  .word 0xa5600000
  .word 0x1000000c
  .word 0x00000000
  .word 0x8e0d000c
  .word 0x01ae082a
  .word 0x10200006
  .word 0x00000000
  .word 0x25adffff
  .word 0x01b86823
  .word 0xa56d0000
  .word 0x10000003
  .word 0x00000000
  .word 0x01ea6821
  .word 0xa56d0000
  .word 0x8d8d0000
  .word 0x11a90033
  .word 0x00000000
  .word 0x11a80031
  .word 0x00000000
  .word 0x11a7001b
  .word 0x00000000
  .word 0x11a40005
  .word 0x00000000
  .word 0x11a30003
  .word 0x00000000
  .word 0x1000003b
  .word 0x00000000
  .word 0x856d0012
  .word 0x11a00038
  .word 0x00000000
  .word 0x01a26821
  .word 0xa56d0012
  .word 0x000d6c3c
  .word 0x000d6c3f
  .word 0x05a10002
  .word 0x00000000
  .word 0xa5600012
  .word 0x8e0e000c
  .word 0x856d0012
  .word 0x01a56821
  .word 0x01cd082a
  .word 0x1020002b
  .word 0x00000000
  .word 0x25cdffff
  .word 0xa56d0012
  .word 0x10000027
  .word 0x00000000
  .word 0x856d0010
  .word 0x11a00024
  .word 0x00000000
  .word 0x01a26821
  .word 0xa56d0010
  .word 0x000d6c3c
  .word 0x000d6c3f
  .word 0x05a10002
  .word 0x00000000
  .word 0xa5600010
  .word 0x8e0e000c
  .word 0x856d0010
  .word 0x01a56821
  .word 0x01cd082a
  .word 0x10200017
  .word 0x00000000
  .word 0x25cdffff
  .word 0xa56d0010
  .word 0x10000013
  .word 0x00000000
  .word 0x856d0012
  .word 0x11a00010
  .word 0x00000000
  .word 0x01a26821
  .word 0xa56d0012
  .word 0x000d6c3c
  .word 0x000d6c3f
  .word 0x05a10002
  .word 0x00000000
  .word 0xa5600012
  .word 0x8e0e000c
  .word 0x856d0012
  .word 0x01a56821
  .word 0x01cd082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25cdffff
  .word 0xa56d0012
  .word 0x8d6b004c
  .word 0x1560ff9f
  .word 0x00000000
  .word 0x8d8c0094
  .word 0x1580ff99
  .word 0x00000000
  .word 0x8e02001c
  .word 0x2442ffff
  .word 0xae02001c
  .word 0x0200202d
  .word 0x0c0d8be8
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0d8890
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
}
#pragma pop


// FUN_0038B960


asm void FUN_0038b960(int param_1,int param_2,int param_3)
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
  .word 0x00a0a82d
  .word 0x00c0a02d
  .word 0x0000802d
  .word 0x8c930084
  .word 0x100000aa
  .word 0x00000000
  .word 0x8e72006c
  .word 0x100000a4
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000095
  .word 0x00000000
  .word 0x00911821
  .word 0x80640002
  .word 0x24030009
  .word 0x1083002c
  .word 0x00000000
  .word 0x2403000f
  .word 0x10830019
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x10000087
  .word 0x00000000
  .word 0x24030021
  .word 0x10a30084
  .word 0x00000000
  .word 0x96440002
  .word 0x10800081
  .word 0x00000000
  .word 0x96430000
  .word 0x0075082a
  .word 0x1020007d
  .word 0x00000000
  .word 0x00641821
  .word 0x0075082a
  .word 0x14200079
  .word 0x00000000
  .word 0x3283ffff
  .word 0x00831821
  .word 0xa6430002
  .word 0x10000074
  .word 0x00000000
  .word 0x96440002
  .word 0x10800071
  .word 0x00000000
  .word 0x96430000
  .word 0x0075082a
  .word 0x1020006d
  .word 0x00000000
  .word 0x00641821
  .word 0x0075082a
  .word 0x14200069
  .word 0x00000000
  .word 0x3283ffff
  .word 0x00831821
  .word 0xa6430002
  .word 0x10000064
  .word 0x00000000
  .word 0x24030015
  .word 0x10a30015
  .word 0x00000000
  .word 0x24030014
  .word 0x10a30012
  .word 0x00000000
  .word 0x24030012
  .word 0x10a3000c
  .word 0x00000000
  .word 0x2403001a
  .word 0x10a30006
  .word 0x00000000
  .word 0x24030003
  .word 0x10a30003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x86500012
  .word 0x1000000c
  .word 0x00000000
  .word 0x86500010
  .word 0x10000009
  .word 0x00000000
  .word 0x86500012
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a10
  .word 0x24050a72
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96430000
  .word 0x0075082a
  .word 0x10200041
  .word 0x00000000
  .word 0x0215082a
  .word 0x1420003e
  .word 0x00000000
  .word 0x1200003c
  .word 0x00000000
  .word 0x8e640000
  .word 0x24030015
  .word 0x10830027
  .word 0x00000000
  .word 0x24030014
  .word 0x10830024
  .word 0x00000000
  .word 0x24030012
  .word 0x10830015
  .word 0x00000000
  .word 0x2403001a
  .word 0x10830006
  .word 0x00000000
  .word 0x24030003
  .word 0x10830003
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x0014243c
  .word 0x0004243f
  .word 0x86430012
  .word 0x00641821
  .word 0xa6430012
  .word 0x00031c3c
  .word 0x00031c3f
  .word 0x04610021
  .word 0x00000000
  .word 0xa6400012
  .word 0x1000001e
  .word 0x00000000
  .word 0x0014243c
  .word 0x0004243f
  .word 0x86430010
  .word 0x00641821
  .word 0xa6430010
  .word 0x00031c3c
  .word 0x00031c3f
  .word 0x04610015
  .word 0x00000000
  .word 0xa6400010
  .word 0x10000012
  .word 0x00000000
  .word 0x0014243c
  .word 0x0004243f
  .word 0x86430012
  .word 0x00641821
  .word 0xa6430012
  .word 0x00031c3c
  .word 0x00031c3f
  .word 0x04610009
  .word 0x00000000
  .word 0xa6400012
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840a10
  .word 0x24050a89
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x26310001
  .word 0x8e650000
  .word 0x00051840
  .word 0x00651821
  .word 0x00032080
  .word 0x3c03006a
  .word 0x2463e1a0
  .word 0x00642021
  .word 0x84830000
  .word 0x0223182a
  .word 0x1460ff62
  .word 0x00000000
  .word 0x8e52004c
  .word 0x1640ff5c
  .word 0x00000000
  .word 0x8e730094
  .word 0x1660ff56
  .word 0x00000000
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


/* opt_loop_invariants on: FUN_0038BC70 nd1721 -> nd1565, object 2020/2032; measured W319. */
#pragma push
#pragma opt_loop_invariants on
// FUN_0038BC70


asm void FUN_0038bc70(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x8c8b0084
  .word 0x0006443c
  .word 0x0008443f
  .word 0x24030006
  .word 0x24070007
  .word 0x3c09007c
  .word 0x2529ac50
  .word 0x100001ef
  .word 0x00000000
  .word 0x8d6a006c
  .word 0x100001e9
  .word 0x00000000
  .word 0x8d6c0000
  .word 0x258cffda
  .word 0x2d810009
  .word 0x102001e3
  .word 0x00000000
  .word 0x000c6080
  .word 0x01896021
  .word 0x8d8c0000
  .word 0x01800008
  .word 0x00000000
  .word 0x854d0010
  .word 0x01a5602a
  .word 0x158001da
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c0010
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa5400010
  .word 0x8c8d000c
  .word 0x854c0010
  .word 0x01866021
  .word 0x01ac082a
  .word 0x102001cd
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c0010
  .word 0x100001c9
  .word 0x00000000
  .word 0x854d0010
  .word 0x01a5602a
  .word 0x15800010
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c0010
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa5400010
  .word 0x8c8d000c
  .word 0x854c0010
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c0010
  .word 0x854d0012
  .word 0x01a5602a
  .word 0x15800010
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c0012
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa5400012
  .word 0x8c8d000c
  .word 0x854c0012
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c0012
  .word 0x854d0014
  .word 0x01a5602a
  .word 0x15800010
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c0014
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa5400014
  .word 0x8c8d000c
  .word 0x854c0014
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c0014
  .word 0x854d0016
  .word 0x01a5602a
  .word 0x15800010
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c0016
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa5400016
  .word 0x8c8d000c
  .word 0x854c0016
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c0016
  .word 0x854d0018
  .word 0x01a5602a
  .word 0x15800010
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c0018
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa5400018
  .word 0x8c8d000c
  .word 0x854c0018
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c0018
  .word 0x854d001a
  .word 0x01a5602a
  .word 0x15800166
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c001a
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa540001a
  .word 0x8c8d000c
  .word 0x854c001a
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200159
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c001a
  .word 0x10000155
  .word 0x00000000
  .word 0x854d0010
  .word 0x01a5602a
  .word 0x15800010
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c0010
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa5400010
  .word 0x8c8d000c
  .word 0x854c0010
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c0010
  .word 0x854d0012
  .word 0x01a5602a
  .word 0x1580013e
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c0012
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa5400012
  .word 0x8c8d000c
  .word 0x854c0012
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200131
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c0012
  .word 0x1000012d
  .word 0x00000000
  .word 0x854d0018
  .word 0x01a5602a
  .word 0x15800010
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c0018
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa5400018
  .word 0x8c8d000c
  .word 0x854c0018
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c0018
  .word 0x854d001a
  .word 0x01a5602a
  .word 0x15800010
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c001a
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa540001a
  .word 0x8c8d000c
  .word 0x854c001a
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c001a
  .word 0x854d001c
  .word 0x01a5602a
  .word 0x15800010
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c001c
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa540001c
  .word 0x8c8d000c
  .word 0x854c001c
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c001c
  .word 0x854d001e
  .word 0x01a5602a
  .word 0x158000f0
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c001e
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa540001e
  .word 0x8c8d000c
  .word 0x854c001e
  .word 0x01866021
  .word 0x01ac082a
  .word 0x102000e3
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c001e
  .word 0x100000df
  .word 0x00000000
  .word 0x854d0018
  .word 0x01a5602a
  .word 0x15800010
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c0018
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa5400018
  .word 0x8c8d000c
  .word 0x854c0018
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c0018
  .word 0x854d001a
  .word 0x01a5602a
  .word 0x15800010
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c001a
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa540001a
  .word 0x8c8d000c
  .word 0x854c001a
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c001a
  .word 0x854d001c
  .word 0x01a5602a
  .word 0x15800010
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c001c
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa540001c
  .word 0x8c8d000c
  .word 0x854c001c
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c001c
  .word 0x854d001e
  .word 0x01a5602a
  .word 0x158000a2
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c001e
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa540001e
  .word 0x8c8d000c
  .word 0x854c001e
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200095
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c001e
  .word 0x10000091
  .word 0x00000000
  .word 0x854d0010
  .word 0x01a5602a
  .word 0x15800010
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c0010
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa5400010
  .word 0x8c8d000c
  .word 0x854c0010
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c0010
  .word 0x854d0012
  .word 0x01a5602a
  .word 0x1580007a
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c0012
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa5400012
  .word 0x8c8d000c
  .word 0x854c0012
  .word 0x01866021
  .word 0x01ac082a
  .word 0x1020006d
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c0012
  .word 0x10000069
  .word 0x00000000
  .word 0x814c0010
  .word 0x1187001a
  .word 0x00000000
  .word 0x11830003
  .word 0x00000000
  .word 0x10000062
  .word 0x00000000
  .word 0x854d0010
  .word 0x01a5602a
  .word 0x1580005e
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c0010
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa5400010
  .word 0x8c8d000c
  .word 0x854c0010
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200051
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c0010
  .word 0x1000004d
  .word 0x00000000
  .word 0x854d0014
  .word 0x01a5602a
  .word 0x15800010
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c0014
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa5400014
  .word 0x8c8d000c
  .word 0x854c0014
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c0014
  .word 0x854d0016
  .word 0x01a5602a
  .word 0x15800010
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c0016
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa5400016
  .word 0x8c8d000c
  .word 0x854c0016
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c0016
  .word 0x854d0018
  .word 0x01a5602a
  .word 0x15800010
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c0018
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa5400018
  .word 0x8c8d000c
  .word 0x854c0018
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c0018
  .word 0x854d001a
  .word 0x01a5602a
  .word 0x15800010
  .word 0x00000000
  .word 0x01a86021
  .word 0xa54c001a
  .word 0x000c643c
  .word 0x000c643f
  .word 0x05810002
  .word 0x00000000
  .word 0xa540001a
  .word 0x8c8d000c
  .word 0x854c001a
  .word 0x01866021
  .word 0x01ac082a
  .word 0x10200003
  .word 0x00000000
  .word 0x25acffff
  .word 0xa54c001a
  .word 0x8d4a004c
  .word 0x1540fe17
  .word 0x00000000
  .word 0x8d6b0094
  .word 0x1560fe11
  .word 0x00000000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma pop


// FUN_0038C460


void FUN_0038c460(int param_1,int param_2,u8 **param_3,u32 *param_4)



{

  int sVar1;


  int lVar3;

  u32 *puVar4;

  

  *param_3 = 0;

  *param_4 = 0;

  if (param_1 != 0) {
    puVar4 = (u32 *)param_1;
    sVar1 = *(short *)(puVar4 + 8);
    *param_4 = puVar4[0x1b];
    while (*param_4 != 0) {
      if ((int)((u32)*(u16 *)*param_4 + sVar1) > param_2) {
        break;
      }
      *param_4 = *(u32 *)((u16 *)*param_4 + 0x26);
    }

    if (*param_4 != 0) {
      *param_3 = *(u8 **)(*param_4 + 0x50);
    }
    else {
      *param_3 = (u8 *)puVar4[0x1c];
    }

    lVar3 = FUN_0036f500(*puVar4);
    if (lVar3 == 1) {
      while (*param_3 != 0) {
        lVar3 = FUN_00360ed0(*param_3);
        if (lVar3 == 1) {
          break;
        }
        *param_3 = *(u8 **)(*param_3 + 0x50);
      }
    }
  }

  return;

}


// FUN_0038C540


void FUN_0038c540(int param_1,int param_2,int param_3,u32 *param_4,
                  u32 *param_5,u32 *param_6)



{

  int iVar1;

  u32 uVar2;

  f32 *puVar3;

  f32 *puVar4;

  u32 uVar5;

  int iVar6;
  int iVar7;

  f32 *puVar7;

  f32 fVar8;

  f32 fVar13;

  f32 fVar11;

  f32 fVar12;

  f32 fVar9;

  f32 fVar10;

  int i;

  u16 *puStack_8;

  u16 *puStack_4;

  

  FUN_0038c460_reordered(param_2,param_3,(u32 *)&puStack_8,(u8 **)&puStack_4);


  if (puStack_8 != (u16 *)0x0) {

    uVar5 = (u32)*puStack_8;

  }

  else {

    uVar5 = *(u32 *)(param_1 + 0x10);

  }

  if (puStack_4 != (u16 *)0x0) {

    uVar2 = (u32)*puStack_4;

  }

  else {

    uVar2 = *(u32 *)(param_1 + 0x14);

  }

  if (uVar2 - uVar5 != 0) {

    fVar10 = (float)(int)((int)param_3 - uVar5) / (float)(int)(uVar2 - uVar5);

  }

  else {

    fVar10 = 0.0f;

  }

  puVar7 = (f32 *)param_4;

  if (puStack_8 == (u16 *)0x0) {
    goto C540_default;
  }

  iVar1 = *(int *)(puStack_8 + 0x24);

  fVar13 = *(f32 *)(puStack_8 + 8);

  fVar12 = *(f32 *)(puStack_8 + 10);

  iVar6 = *(int *)(puStack_8 + 2);

  goto C540_process;

C540_default:
  fVar8 = DAT_007cadd0_f32;
  *puVar7 = DAT_007cadd0_f32;

  puVar7[1] = fVar8;

  puVar7[2] = fVar8;

  puVar7[3] = 0;

  puVar7[4] = 0;

  puVar7[5] = 0;

  puVar7[6] = 0;

  puVar7[7] = 0;

  fVar8 = DAT_007cafec_f32;

  puVar7[8] = DAT_007cafec_f32;

  puVar7[9] = fVar8;
  puVar7[10] = fVar8;

  puVar7[0xb] = 0;

  *param_5 = 0x40e00000;

  *param_6 = 0;

  goto C540_done;

 C540_process:
  if (puStack_4 == (u16 *)0x0) {
    goto C540_copy_first;
  }

  iVar7 = *(int *)(puStack_4 + 0x24);

  fVar11 = *(f32 *)(puStack_4 + 8);

  fVar9 = *(f32 *)(puStack_4 + 10);

  goto C540_conditions;

C540_copy_first:
  for (i = 0; i < 4; i = i + 1) {

    puVar4 = (f32 *)(iVar1 + i * 4);

    puVar3 = puVar7 + i;

    *puVar3 = *puVar4;

    puVar3[4] = puVar4[4];

    puVar3[8] = puVar4[8];

  }

  *(f32 *)param_5 = fVar13;

  *(f32 *)param_6 = fVar12;

  goto C540_done;

C540_conditions:
  if (iVar1 != 0) {
    goto C540_type;
  }

  if (iVar7 != 0) {
    goto C540_type;
  }

C540_default2:
  fVar8 = DAT_007cadd0_f32;
  *puVar7 = DAT_007cadd0_f32;

  puVar7[1] = fVar8;

  puVar7[2] = fVar8;

  puVar7[3] = 0;

  puVar7[4] = 0;

  puVar7[5] = 0;

  puVar7[6] = 0;

  puVar7[7] = 0;

  fVar8 = DAT_007cafec_f32;

  puVar7[8] = DAT_007cafec_f32;

  puVar7[9] = fVar8;

  puVar7[10] = fVar8;

  puVar7[0xb] = 0;

  *param_5 = 0x40e00000;

  *param_6 = 0;

  goto C540_done;

C540_type:
  if (iVar6 != 0) {
    goto C540_calls;
  }

C540_copy_second:
  for (i = 0; i < 4; i = i + 1) {

    puVar4 = (f32 *)(iVar1 + i * 4);

    puVar3 = puVar7 + i;

    *puVar3 = *puVar4;

    puVar3[4] = puVar4[4];

    puVar3[8] = puVar4[8];

  }

  *(f32 *)param_5 = fVar13;

  *(f32 *)param_6 = fVar12;

  goto C540_done;

C540_calls:
  FUN_00394070_evt_misc_reordered(iVar6,fVar10,(u32 *)iVar1,(u32 *)iVar7,param_4);

  *(f32 *)param_5 = FUN_00394040_evt_misc_reordered(iVar6,fVar10,fVar13,fVar11);

  *(f32 *)param_6 = FUN_00394040_evt_misc_reordered(iVar6,fVar10,fVar12,fVar9);

C540_done:
  ;

  return;

}


// A named target-type local intended to reproduce retail's preheader constant
// was optimized back to identical nd235/size464 and was removed as unnecessary.
// The first divergence remains loop-preheader constant/branch scheduling.
// FUN_0038C830


asm void FUN_0038c830(int param_1,long param_2)
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
  .word 0x0080a02d
  .word 0x00a0a82d
  .word 0x8c930084
  .word 0x24030004
  .word 0x10000005
  .word 0x00000000
  .word 0x8e640000
  .word 0x10830006
  .word 0x00000000
  .word 0x8e730094
  .word 0x00000000
  .word 0x00000000
  .word 0x1660fff9
  .word 0x00000000
  .word 0x12600051
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000004b
  .word 0x00000000
  .word 0x0000882d
  .word 0x8e72006c
  .word 0x10000034
  .word 0x00000000
  .word 0x86430010
  .word 0x00031b03
  .word 0x3076000f
  .word 0x82430015
  .word 0x2c610007
  .word 0x1020001f
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484ac80
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0xa7a0008e
  .word 0x82420015
  .word 0x2445ffff
  .word 0x0280202d
  .word 0x27a6008e
  .word 0x0c0e5d60
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x97a4008e
  .word 0x3403ffff
  .word 0x1483000a
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000008
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000005
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000002
  .word 0x00000000
  .word 0x24030001
  .word 0x1060000b
  .word 0x00000000
  .word 0x96430000
  .word 0x02a3182a
  .word 0x1460000a
  .word 0x00000000
  .word 0x26c3ffff
  .word 0x14700004
  .word 0x00000000
  .word 0x24110001
  .word 0x10000004
  .word 0x00000000
  .word 0x8e52004c
  .word 0x1640ffcc
  .word 0x00000000
  .word 0x1620000f
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e35bc
  .word 0x00000000
  .word 0x2405ffff
  .word 0x10450009
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e35ac
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24840aa0
  .word 0x0200282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x26100001
  .word 0x2a03000a
  .word 0x1460ffb4
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
}


/* opt_loop_invariants on: FUN_0038CA00 nd50 -> nd0, object 128/128; measured W319. */
#pragma push
#pragma opt_loop_invariants on
// FUN_0038CA00


void FUN_0038ca00(void)
{
  f32 fVar1;
  f32 fVar2;
  s32 iVar3;
  f32 *pfVar4;
  f32 *pfVar5;
  u32 uVar6;

  iVar3 = 0;
  pfVar5 = DAT_009588b0_f32;
  fVar1 = DAT_007cadd0_f32;
  fVar2 = DAT_007cafec_f32;
  uVar6 = 0x40e00000;
  for (; iVar3 < 3; iVar3 = iVar3 + 1) {
    pfVar4 = &pfVar5[iVar3 * 0x10];
    pfVar4[2] = fVar1;
    pfVar4[3] = fVar1;
    pfVar4[4] = fVar1;
    pfVar4[5] = 0.0f;
    pfVar4[6] = 0.0f;
    pfVar4[7] = 0.0f;
    pfVar4[8] = 0.0f;
    pfVar4[9] = 0.0f;
    pfVar4[10] = fVar2;
    pfVar4[11] = fVar2;
    pfVar4[12] = fVar2;
    pfVar4[13] = 0.0f;
    ((u32 *)pfVar4)[14] = uVar6;
    pfVar4[15] = 0.0f;
    pfVar4[0] = 0.0f;
    pfVar4[1] = 0.0f;
  }
  return;
}
#pragma pop


/* W415 census recheck: all seven relocations resolve to the same ordered retail targets; the reported callee discrepancy is an offset shift, not a wrong callee. */
// FUN_0038CA80


asm void FUN_0038ca80(int param_1)
{
  .set noreorder
  .word 0x27bdfef0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x0000802d
  .word 0x0000882d
  .word 0x24040003
  .word 0x0c0ed77c
  .word 0x00000000
  .word 0x02028021
  .word 0x24040001
  .word 0x0c0ed77c
  .word 0x00000000
  .word 0x02028021
  .word 0x2404000c
  .word 0x0c0ed77c
  .word 0x00000000
  .word 0x02028021
  .word 0x2a010033
  .word 0x10200047
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x00111880
  .word 0x007d1821
  .word 0xac620040
  .word 0x26310001
  .word 0x8c4200f8
  .word 0x1440fffa
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x00111880
  .word 0x007d1821
  .word 0xac620040
  .word 0x26310001
  .word 0x8c4200f8
  .word 0x1440fffa
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040202d
  .word 0x10000006
  .word 0x00000000
  .word 0x00111880
  .word 0x007d1821
  .word 0xac640040
  .word 0x26310001
  .word 0x8c8400f8
  .word 0x1480fffa
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000001c
  .word 0x00000000
  .word 0x00111080
  .word 0x005d1021
  .word 0x24420040
  .word 0x8c450000
  .word 0x94a70000
  .word 0x8e44097c
  .word 0x0000402d
  .word 0x1000000b
  .word 0x00000000
  .word 0x00081880
  .word 0x8e420980
  .word 0x00431021
  .word 0x8c460000
  .word 0x94c20000
  .word 0x14470003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x25080001
  .word 0x0104102a
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000302d
  .word 0x0240202d
  .word 0x0c0e3304
  .word 0x00000000
  .word 0x26310001
  .word 0x0230182a
  .word 0x1460ffe3
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0110
  .word 0x03e00008
  .word 0x00000000
}


/* W419 address-mode probe: all DAT_009588*_abs aliases overran (2396/2384); retained b4+bc+d8+e0 subset (nd1723/object2324). */
// FUN_0038CC10


asm void FUN_0038cc10(int param_1,u16 *param_2,int param_3)
{
  .set noreorder
  .word 0x27bdfed0
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x2411ffff
  .word 0x0000802d
  .word 0x12600239
  .word 0x00000000
  .word 0x96640000
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x00831824
  .word 0x00032a83
  .word 0x24030003
  .word 0x10a30003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c06810c
  .word 0x00000000
  .word 0x0000382d
  .word 0x3c060096
  .word 0x24c688b0
  .word 0x24050003
  .word 0x10000017
  .word 0x00000000
  .word 0x00071980
  .word 0x00c32021
  .word 0x8c830000
  .word 0x14650011
  .word 0x00000000
  .word 0x8c830004
  .word 0x1473000e
  .word 0x00000000
  .word 0x00e0882d
  .word 0x96640000
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x00831824
  .word 0x00031a83
  .word 0x1465000a
  .word 0x00000000
  .word 0x24050001
  .word 0x0c06810c
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x24e70001
  .word 0x28e30003
  .word 0x1460ffe8
  .word 0x00000000
  .word 0x2403ffff
  .word 0x1623001b
  .word 0x00000000
  .word 0x96640000
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x00831824
  .word 0x00032283
  .word 0x2403000c
  .word 0x10830013
  .word 0x00000000
  .word 0x0000302d
  .word 0x3c050096
  .word 0x24a588b0
  .word 0x24040002
  .word 0x1000000a
  .word 0x00000000
  .word 0x00061980
  .word 0x00a31821
  .word 0x8c630000
  .word 0x14640004
  .word 0x00000000
  .word 0x00c0882d
  .word 0x10000005
  .word 0x00000000
  .word 0x24c60001
  .word 0x28c30003
  .word 0x1460fff5
  .word 0x00000000
  .word 0x2403ffff
  .word 0x16230013
  .word 0x00000000
  .word 0x0000302d
  .word 0x3c050096
  .word 0x24a588b0
  .word 0x24040001
  .word 0x1000000a
  .word 0x00000000
  .word 0x00061980
  .word 0x00a31821
  .word 0x8c630000
  .word 0x14640004
  .word 0x00000000
  .word 0x00c0882d
  .word 0x10000005
  .word 0x00000000
  .word 0x24c60001
  .word 0x28c30003
  .word 0x1460fff5
  .word 0x00000000
  .word 0x2403ffff
  .word 0x16230091
  .word 0x00000000
  .word 0x1240008d
  .word 0x00000000
  .word 0x96640000
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x00831824
  .word 0x00032283
  .word 0x2403000c
  .word 0x10830069
  .word 0x00000000
  .word 0x24030001
  .word 0x10830048
  .word 0x00000000
  .word 0x24030003
  .word 0x10830003
  .word 0x00000000
  .word 0x1000007d
  .word 0x00000000
  .word 0xc643012c
  .word 0xc6420130
  .word 0xc6410134
  .word 0xc6400138
  .word 0xe663012c
  .word 0xe6620130
  .word 0xe6610134
  .word 0xe6600138
  .word 0xc643013c
  .word 0xc6420140
  .word 0xc6410144
  .word 0xc6400148
  .word 0xe663013c
  .word 0xe6620140
  .word 0xe6610144
  .word 0xe6600148
  .word 0x26460150
  .word 0x26650150
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
  .word 0x0c068340
  .word 0x00000000
  .word 0x0040882d
  .word 0x0c068350
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c068360
  .word 0x00000000
  .word 0x0040382d
  .word 0xc6830870
  .word 0xc6820874
  .word 0xc6810878
  .word 0xc680087c
  .word 0xe6230000
  .word 0xe6220004
  .word 0xe6210008
  .word 0xe620000c
  .word 0xc6830880
  .word 0xc6820884
  .word 0xc6810888
  .word 0xc680088c
  .word 0xe6030000
  .word 0xe6020004
  .word 0xe6010008
  .word 0xe600000c
  .word 0x26860890
  .word 0x24050008
  .word 0x8cc40000
  .word 0x8cc30004
  .word 0x24c60008
  .word 0x24a5ffff
  .word 0xace40000
  .word 0xace30004
  .word 0x24e70008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x1000003b
  .word 0x00000000
  .word 0xc643012c
  .word 0xc6420130
  .word 0xc6410134
  .word 0xc6400138
  .word 0xe663012c
  .word 0xe6620130
  .word 0xe6610134
  .word 0xe6600138
  .word 0xc643013c
  .word 0xc6420140
  .word 0xc6410144
  .word 0xc6400148
  .word 0xe663013c
  .word 0xe6620140
  .word 0xe6610144
  .word 0xe6600148
  .word 0x26470150
  .word 0x26660150
  .word 0x24050008
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0xc6430100
  .word 0xc6420104
  .word 0xc6410108
  .word 0xc640010c
  .word 0xe6630100
  .word 0xe6620104
  .word 0xe6610108
  .word 0xe660010c
  .word 0xc6430110
  .word 0xc6420114
  .word 0xc6410118
  .word 0xc640011c
  .word 0xe6630110
  .word 0xe6620114
  .word 0xe6610118
  .word 0xe660011c
  .word 0x26470120
  .word 0x26660120
  .word 0x24050008
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x10000148
  .word 0x00000000
  .word 0x00112180
  .word 0x3c030096
  .word 0x246388b0
  .word 0x00641821
  .word 0x8c640000
  .word 0x24030002
  .word 0x10830004
  .word 0x00000000
  .word 0x24030001
  .word 0x1483000a
  .word 0x00000000
  .word 0x96640000
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x00831824
  .word 0x00032283
  .word 0x24030003
  .word 0x14830002
  .word 0x00000000
  .word 0x24100001
  .word 0x96640000
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x00831824
  .word 0x00032283
  .word 0x24030003
  .word 0x1483007e
  .word 0x00000000
  .word 0x00111980
  .word 0x3c020096
  .word 0x244288d8
  .word 0x00431021
  .word 0xc4400000
  .word 0xe660012c
  .word 0x3c020096
  .word 0x244288dc
  .word 0x00431021
  .word 0xc4400000
  .word 0xe6600130
  .word 0x3c020096
  .word 0x244288e0
  .word 0x00431021
  .word 0xc4400000
  .word 0xe6600134
  .word 0xae600138
  .word 0x3c020096
  .word 0x244288b8
  .word 0x00431021
  .word 0xc4400000
  .word 0xe660013c
  .word 0x3c020096
  .word 0x244288bc
  .word 0x00431021
  .word 0xc4400000
  .word 0xe6600140
  .word 0x3c020096
  .word 0x244288c0
  .word 0x00431021
  .word 0xc4400000
  .word 0xe6600144
  .word 0xae600148
  .word 0x3c020096
  .word 0x244288c8
  .word 0x00431021
  .word 0xc4540000
  .word 0x3c020096
  .word 0x244288cc
  .word 0x00431021
  .word 0xc44c0000
  .word 0x3c023f80
  .word 0xafa20118
  .word 0xafa20104
  .word 0xafa200f0
  .word 0xafa00100
  .word 0xafa000f8
  .word 0xafa000f4
  .word 0xafa00114
  .word 0xafa00110
  .word 0xafa00108
  .word 0xafa00128
  .word 0xafa00124
  .word 0xafa00120
  .word 0x8fa300fc
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xafa200fc
  .word 0x27a400f0
  .word 0x3c05006a
  .word 0x24a52a70
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a400f0
  .word 0x3c05006a
  .word 0x24a52a60
  .word 0x4600a306
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a700f0
  .word 0x26660150
  .word 0x24050008
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x24030001
  .word 0x160300d5
  .word 0x00000000
  .word 0x0c068340
  .word 0x00000000
  .word 0x0040882d
  .word 0x0c068350
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c068360
  .word 0x00000000
  .word 0x0040382d
  .word 0xc663012c
  .word 0xc6620130
  .word 0xc6610134
  .word 0xc6600138
  .word 0xe6230000
  .word 0xe6220004
  .word 0xe6210008
  .word 0xe620000c
  .word 0xc663013c
  .word 0xc6620140
  .word 0xc6610144
  .word 0xc6600148
  .word 0xe6030000
  .word 0xe6020004
  .word 0xe6010008
  .word 0xe600000c
  .word 0x26660150
  .word 0x24050008
  .word 0x8cc40000
  .word 0x8cc30004
  .word 0x24c60008
  .word 0x24a5ffff
  .word 0xace40000
  .word 0xace30004
  .word 0x24e70008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x100000af
  .word 0x00000000
  .word 0x24060001
  .word 0x14860056
  .word 0x00000000
  .word 0x00111980
  .word 0x3c020096
  .word 0x244288d8
  .word 0x00431021
  .word 0xc4400000
  .word 0xe660012c
  .word 0x3c020096
  .word 0x244288dc
  .word 0x00431021
  .word 0xc4400000
  .word 0xe6600130
  .word 0x3c020096
  .word 0x244288e0
  .word 0x00431021
  .word 0xc4400000
  .word 0xe6600134
  .word 0xae600138
  .word 0x3c020096
  .word 0x244288b8
  .word 0x00431021
  .word 0xc4400000
  .word 0xe660013c
  .word 0x3c020096
  .word 0x244288bc
  .word 0x00431021
  .word 0xc4400000
  .word 0xe6600140
  .word 0x3c020096
  .word 0x244288c0
  .word 0x00431021
  .word 0xc4400000
  .word 0xe6600144
  .word 0xae600148
  .word 0x3c020096
  .word 0x244288c8
  .word 0x00431021
  .word 0xc4540000
  .word 0x3c020096
  .word 0x244288cc
  .word 0x00431021
  .word 0xc44c0000
  .word 0x3c023f80
  .word 0xafa200d8
  .word 0xafa200c4
  .word 0xafa200b0
  .word 0xafa000c0
  .word 0xafa000b8
  .word 0xafa000b4
  .word 0xafa000d4
  .word 0xafa000d0
  .word 0xafa000c8
  .word 0xafa000e8
  .word 0xafa000e4
  .word 0xafa000e0
  .word 0x8fa300bc
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xafa200bc
  .word 0x27a400b0
  .word 0x3c05006a
  .word 0x24a52a70
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a400b0
  .word 0x3c05006a
  .word 0x24a52a60
  .word 0x4600a306
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a700b0
  .word 0x26660150
  .word 0x24050008
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x10000057
  .word 0x00000000
  .word 0x2403000c
  .word 0x14830054
  .word 0x00000000
  .word 0x00111980
  .word 0x3c020096
  .word 0x244288d8
  .word 0x00431021
  .word 0xc4400000
  .word 0xe6600100
  .word 0x3c020096
  .word 0x244288dc
  .word 0x00431021
  .word 0xc4400000
  .word 0xe6600104
  .word 0x3c020096
  .word 0x244288e0
  .word 0x00431021
  .word 0xc4400000
  .word 0xe6600108
  .word 0xae60010c
  .word 0x3c020096
  .word 0x244288b8
  .word 0x00431021
  .word 0xc4400000
  .word 0xe6600110
  .word 0x3c020096
  .word 0x244288bc
  .word 0x00431021
  .word 0xc4400000
  .word 0xe6600114
  .word 0x3c020096
  .word 0x244288c0
  .word 0x00431021
  .word 0xc4400000
  .word 0xe6600118
  .word 0xae60011c
  .word 0x3c020096
  .word 0x244288c8
  .word 0x00431021
  .word 0xc4540000
  .word 0x3c020096
  .word 0x244288cc
  .word 0x00431021
  .word 0xc44c0000
  .word 0x3c023f80
  .word 0xafa20098
  .word 0xafa20084
  .word 0xafa20070
  .word 0xafa00080
  .word 0xafa00078
  .word 0xafa00074
  .word 0xafa00094
  .word 0xafa00090
  .word 0xafa00088
  .word 0xafa000a8
  .word 0xafa000a4
  .word 0xafa000a0
  .word 0x8fa3007c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xafa2007c
  .word 0x27a40070
  .word 0x3c05006a
  .word 0x24a52a70
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40070
  .word 0x3c05006a
  .word 0x24a52a60
  .word 0x4600a306
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a70070
  .word 0x26660120
  .word 0x24050008
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0130
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}


// FUN_0038D560


void FUN_0038d560(int param_1,int param_2,u32 param_3,f32 *param_4,
                 f32 *param_5,f32 *param_6)



{

  int iVar1;

  

  if (param_1 < 3) {

    iVar1 = (int)param_1 * 0x40;

    *(f32 *)(DAT_009588b8_abs + iVar1) = param_4[0];
    *(f32 *)(DAT_009588bc_abs + iVar1) = param_4[1];
    *(f32 *)(DAT_009588c0_abs + iVar1) = param_4[2];
    *(f32 *)(DAT_009588c4_abs + iVar1) = 0.0f;
    *(f32 *)(DAT_009588c8_abs + iVar1) = param_5[0];
    *(f32 *)(DAT_009588cc_abs + iVar1) = param_5[1];
    *(f32 *)(DAT_009588d0_abs + iVar1) = param_5[2];
    *(f32 *)(DAT_009588d4_abs + iVar1) = param_5[3];
    *(f32 *)(DAT_009588d8_abs + iVar1) = param_6[0];
    *(f32 *)(DAT_009588dc_abs + iVar1) = param_6[1];
    *(f32 *)(DAT_009588e0_abs + iVar1) = param_6[2];
    *(f32 *)(DAT_009588e4_abs + iVar1) = 1.0f;
    *(int *)(DAT_009588b0_abs + iVar1) = param_2;
    if (param_2 == 3) {
      *(u32 *)(DAT_009588b4_abs + iVar1) = param_3;
    }
    else {
      *(u32 *)(DAT_009588b4_abs + iVar1) = 0;
    }


  }

  return;

}


// FUN_0038D6B0


void FUN_0038d6b0(int index,u32 value)
{
  /*
   * PTR_DAT_007cca5c is gp-0x6294. MWCC does not emit a relocation for the
   * symbol inside inline assembly, so preserve the retail displacement.
   */
  __asm__ (
      "slti $at, %0, 10\n"
      "beqz $at, 1f\n"
      "bgez %0, 2f\n"
      "1:\n"
      "b 3f\n"
      "2:\n"
      "sll %0, %0, 2\n"
      "lw $v1, -0x6294($gp)\n"
      "addu $v1, $v1, %0\n"
      "sw %1, 0x320($v1)\n"
      "3:"
      : "+r"(index) : "r"(value) : "$at", "$v1", "memory");

  return;
}

// FUN_0038D6F0


u32 FUN_0038d6f0(int param_1)



{

  if (param_1 < 10) {

    goto LAB_valid;

  }

  return 0xffffffff;

LAB_valid:
  return *(u32 *)(PTR_DAT_007cca5c + param_1 * 4 + 800);

}


// FUN_0038D720


void FUN_0038d720(int param_1)



{

  int iVar1;

  

  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x2ac); iVar1 = iVar1 + 1) {

    FUN_003952c0(*(u32 *)(*(int *)(param_1 + 8) + 0x120),

                 *(u32 *)(param_1 + iVar1 * 4 + 0x2b0));

  }

  *(u32 *)((u8 *)param_1 + 0x2ac) = 0;

  return;

}


// FUN_0038D790


void FUN_0038d790(int param_1)



{

  int lVar1;

  

  if (*(int *)(param_1 + 0x40) == 0) {

    lVar1 = (*DAT_00960184_abs)(1,0x130,0x40000);

    if (lVar1 == 0) {

      FUN_0019d3f0_evt("mt_evtMisc.c",0x3b);

    }

    FUN_00386c40(10,0x130);

    *(int *)(param_1 + 0x40) = (int)lVar1;

    if (lVar1 == 0) {

      FUN_0019d3f0_evt("mt_evtMisc.c",0x1261);

    }

  }

  return;

}


/* opt_loop_invariants on + opt_propagation off: FUN_0038D840 nd24 -> nd8 (loop-only nd10), object 196/208; measured W319. */
#pragma push
#pragma opt_loop_invariants on
#pragma opt_propagation off
// FUN_0038D840


void FUN_0038d840(u8 *param_1,u8 *param_2,int param_3)
{
  int count;
  int index;
  int reverseIndex;
  int selectedIndex;
  RwV3d *source;
  RwV3d *destination;

  if (*param_1 == 0) {
    count = (u32)param_1[1] * 3 + 1;
    *param_2 = param_1[1];
    index = 0;
    selectedIndex = 1;
    reverseIndex = count - 1;
    for (; index < count; index++) {
      if (param_3 == selectedIndex) {
        source = (RwV3d *)(param_1 + (reverseIndex - index) * 0xc + 4);
        destination = (RwV3d *)(param_2 + index * 0xc + 4);
        *destination = *source;
      } else {
        source = (RwV3d *)(param_1 + index * 0xc + 4);
        destination = (RwV3d *)(param_2 + index * 0xc + 4);
        *destination = *source;
      }
    }
  }
  return;
}
#pragma opt_propagation reset
#pragma pop
// FUN_0038D910



void FUN_0038d910(int param_1)
{
  int iVar1;
  int lVar2;
  u32 uStack_8;
  int iStack_4;

  uStack_8 = 0;
  iStack_4 = 0;
  iVar1 = *(int *)(param_1 + 0x128);
  lVar2 = FUN_0031b680(*(u16 *)(iVar1 + 0xd4),*(u16 *)(iVar1 + 0xd6),
                       &uStack_8,&iStack_4);
  if ((lVar2 == 1) && (uStack_8 == 0)) {
    FUN_003b9500(param_1,0);
  }
}


// FUN_0038D980


u32 FUN_0038d980(void)



{

  int lVar1;

  u32 uVar2;

  

  lVar1 = FUN_0035ed20(0);

  if (lVar1 >= 10) {
    FUN_0019d3f0_evt("mt_evtMisc.c",0x12f2);
  }

  if (!(lVar1 >= 10)) goto valid_index;
  uVar2 = 0xffffffff;
  goto done_index;
valid_index:
  uVar2 = *(u32 *)(PTR_DAT_007cca5c + (int)lVar1 * 4 + 800);
done_index:

  FUN_0035f060(uVar2);

  return 1;

}


// FUN_0038DA10


u64 FUN_0038da10(u16 *param_1)
{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x1c);
  switch (iVar1) {
  case 1:
  case 0x30:
common_case:
    FUN_005225a8(DAT_006a0ac0,*param_1);
    if (*(char *)(param_1 + 8) != '\x01') goto done_index;
    if (*(char *)(param_1 + 10) != '\x01') goto done_index;
    return 1;
  case 0x29:
case_29:
    if (*(char *)(param_1 + 8) == '\0') return 1;
    if (*(char *)(param_1 + 8) == '\x05') return 1;
    break;
  }
done_index:
  return 0;
}

