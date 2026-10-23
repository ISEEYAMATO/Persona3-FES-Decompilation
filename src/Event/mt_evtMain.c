#include "temporary.h"

typedef int code(); /* PC: unnamed varargs */
typedef struct {
  u64 xy;
  f32 z;
} EvtPosition65430;
typedef u8 bool;
#pragma alias FUN_00393e30_evt_main FUN_00393e30
extern void FUN_00393e30_evt_main(u32 param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5,code *(*param_6)(int));

extern u8 D_0069DFF0[];
extern u8 D_0069E088[];
extern u8 DAT_006a0000[];
#pragma alias DAT_006a0000_65430_abs DAT_006a0000
extern u8 DAT_006a0000_65430_abs[];
extern u8 DAT_0069ffd0[];
extern u8 DAT_0069dd98[];
extern u8 DAT_0069de20[];
extern int FUN_003b5d10();
void FUN_003969b0(int param_1);
#pragma alias FUN_003b55b0_evt_main FUN_003b55b0
extern u8 *FUN_003b55b0_evt_main(int param_1);
#pragma alias FUN_003b5d10_evt_main FUN_003b5d10
extern u8 *FUN_003b5d10_evt_main(u16 param_1);
#pragma alias FUN_0039f710_evt_main FUN_0039f710
extern u32 FUN_0039f710_evt_main(int *param_1);
#pragma alias FUN_003bb390_evt FUN_003bb390
extern void FUN_003bb390_evt(u32 param_1,u16 param_2,float param_3);
extern u32 FUN_003b8e80(u32 param_1,float param_2,u32 param_3);
#pragma alias FUN_004c31b0_evt_main FUN_004c31b0
extern void FUN_004c31b0_evt_main(void *matrix, void *axis, f32 angle, s32 mode);
#pragma alias FUN_004c35d0_evt_main FUN_004c35d0
extern void FUN_004c35d0_evt_main(void *matrix, void *vector, s32 mode);
#pragma alias FUN_004c6c60_evt_main FUN_004c6c60
extern void FUN_004c6c60_evt_main(void *out, void *in, void *matrix);
/* W419 typed float + nested call: FUN_0036db20 nd 927 -> 869, object 1564 -> 1560. */
extern f32 FUN_001a4600(u32 param_1);
#pragma alias FUN_003bb010_evt_main FUN_003bb010
extern void FUN_003bb010_evt_main(u16 param_1,u8 param_2);
#pragma alias FUN_003bb1d0_evt_main FUN_003bb1d0
extern void FUN_003bb1d0_evt_main(u16 param_1,s32 param_2,u8 param_3,s8 param_4,s8 param_5);
extern u32 DAT_0069d590;
#pragma alias DAT_0069d590_abs DAT_0069d590
extern s8 DAT_0069d590_abs[];
#pragma alias DAT_0069d580_abs DAT_0069d580
extern s8 DAT_0069d580_abs[];
#pragma alias DAT_0069e068_abs DAT_0069e068
extern s8 DAT_0069e068_abs[];
#pragma alias DAT_0069e078_abs DAT_0069e078
extern s8 DAT_0069e078_abs[];
typedef struct {
  u8 pad_00[0x80];
  s32 count;
  int *head;
  int *tail;
} MtEvtNodeList;
#pragma alias mtEvtInsertPriorityNode FUN_00361b60
extern void mtEvtInsertPriorityNode(int *node, MtEvtNodeList *list);
#pragma alias mtEvtCreateMainTask FUN_0036f3b0
extern void mtEvtCreateMainTask(u64 taskArg,u32 mode);
extern u32 DAT_0069d5c8;
extern u32 DAT_0069d5d0;
extern u32 DAT_0069d5d8;
extern u32 DAT_0069d5e0;
extern u32 DAT_0069d5e8;
extern u32 DAT_0069d5f0;
#pragma alias DAT_0069d5c8_abs DAT_0069d5c8
extern u8 DAT_0069d5c8_abs[];
#pragma alias DAT_0069d5d0_abs DAT_0069d5d0
extern u8 DAT_0069d5d0_abs[];
#pragma alias DAT_0069d5d8_abs DAT_0069d5d8
extern u8 DAT_0069d5d8_abs[];
#pragma alias DAT_0069d5e0_abs DAT_0069d5e0
extern u8 DAT_0069d5e0_abs[];
#pragma alias DAT_0069d5e8_abs DAT_0069d5e8
extern u8 DAT_0069d5e8_abs[];
#pragma alias DAT_0069d5f0_abs DAT_0069d5f0
extern u8 DAT_0069d5f0_abs[];
extern u32 DAT_0069d5f8;
extern u32 DAT_0069d600;
extern u32 DAT_0069d608;
extern u32 DAT_0069d610;
extern u32 DAT_0069d618;
extern u32 DAT_0069d620;
extern u32 DAT_0069d628;
extern u32 DAT_0069d630;
#pragma alias DAT_0069d5f8_abs DAT_0069d5f8
#pragma alias DAT_0069d600_abs DAT_0069d600
#pragma alias DAT_0069d608_abs DAT_0069d608
#pragma alias DAT_0069d610_abs DAT_0069d610
#pragma alias DAT_0069d618_abs DAT_0069d618
#pragma alias DAT_0069d620_abs DAT_0069d620
#pragma alias DAT_0069d628_abs DAT_0069d628
#pragma alias DAT_0069d630_abs DAT_0069d630
extern u8 DAT_0069d5f8_abs[];
extern u8 DAT_0069d600_abs[];
extern u8 DAT_0069d608_abs[];
extern u8 DAT_0069d610_abs[];
extern u8 DAT_0069d618_abs[];
extern u8 DAT_0069d620_abs[];
extern u8 DAT_0069d628_abs[];
extern u8 DAT_0069d630_abs[];
extern f32 FUN_001a1190(void);
extern u64 DAT_0069d6e8;
extern f32 DAT_0069d6f0;
extern u8 DAT_0069d580[];
extern u8 DAT_0069d7a0[];
#pragma alias DAT_0069d6e8_abs DAT_0069d6e8
#pragma alias DAT_0069d6f0_abs DAT_0069d6f0
extern u64 DAT_0069d6e8_abs[];
extern f32 DAT_0069d6f0_abs[];
#pragma alias DAT_0069d700_abs DAT_0069d700
#pragma alias DAT_0069d720_abs DAT_0069d720
extern u8 DAT_0069d700_abs[];
extern u8 DAT_0069d720_abs[];
#pragma alias DAT_0069d738_abs DAT_0069d738
extern u8 DAT_0069d738_abs[];
#pragma alias DAT_0069d748_abs DAT_0069d748
extern u8 DAT_0069d748_abs[];
extern u8 DAT_0069d910;
extern u32 DAT_0069de40;
extern u32 DAT_0069e180;
extern u32 DAT_0069e1a0;
extern u32 DAT_0069e1a2;
#pragma alias DAT_0069e1a2_byte DAT_0069e1a2
extern char DAT_0069e1a2_byte[];
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
extern u32 DAT_007cb0cc;
extern u32 DAT_007cb110;
extern u32 DAT_007cb120;
extern u32 DAT_007cb124;
extern u32 DAT_007cca68;
extern u32 DAT_007cca6c;
extern u32 DAT_007ccd20;
extern u32 DAT_007cce48;
extern u32 DAT_007cce4c;
extern u32 DAT_007cce78;
extern u32 DAT_007ccf94;
extern u32 DAT_007cd130;
extern u32 DAT_007cdeac;
extern u32 DAT_007ce5d8;
extern int DAT_007ce5e4;
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
#pragma alias DAT_007e094e_abs DAT_007e094e
extern u8 DAT_007e094e_abs[];
extern u32 DAT_007e0952;
#pragma alias DAT_007e094c_2390 DAT_007e094c
extern u8 DAT_007e094c_2390[];
#pragma alias DAT_007e0952_2390 DAT_007e0952
extern u8 DAT_007e0952_2390[];
extern u32 DAT_007e095e;
extern u32 DAT_007e095f;
extern u32 DAT_007e0960;
extern u32 DAT_007e0961;
#pragma alias DAT_007e094c_628f0_abs DAT_007e094c
#pragma alias DAT_007e0952_628f0_abs DAT_007e0952
#pragma alias DAT_007e095e_628f0_abs DAT_007e095e
#pragma alias DAT_007e095f_628f0_abs DAT_007e095f
#pragma alias DAT_007e0960_628f0_abs DAT_007e0960
#pragma alias DAT_007e0961_628f0_abs DAT_007e0961
extern u8 DAT_007e094c_628f0_abs[];
extern u8 DAT_007e0952_628f0_abs[];
extern u8 DAT_007e095e_628f0_abs[];
extern u8 DAT_007e095f_628f0_abs[];
extern u8 DAT_007e0960_628f0_abs[];
extern u8 DAT_007e0961_628f0_abs[];
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
#pragma alias DAT_00958700_abs DAT_00958700
extern u8 DAT_00958700_abs[];
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
extern u32 DAT_00960090;
extern u32 DAT_009600a0;
extern u32 DAT_0096017c;
extern u32 DAT_00960184;
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
extern f32 fGpffff80d0;
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
#pragma alias s_FIELD_EDIT_GO_abs s_FIELD_EDIT_GO__0069ddc0
extern u8 s_FIELD_EDIT_GO_abs[];
 
extern char *s_FIELD_EFFECT_MODE_0069dbf0;
extern char *s_FRAME_SET_OK__0069dda8;
#pragma alias s_FRAME_SET_OK_abs s_FRAME_SET_OK__0069dda8
extern u8 s_FRAME_SET_OK_abs[];
 
extern char *s_HOKAN_MODE_0069db48;
extern char *s_KEYFREE_SELECT_0069dd20;
extern char *s_KOMA_MODE_0069dc28;
extern char *s_MESSAGE_STOP_0069dd08;
extern char *s_MESSAGE_TYPE_0069de08;
#pragma alias s_MESSAGE_TYPE_abs s_MESSAGE_TYPE_0069de08
extern u8 s_MESSAGE_TYPE_abs[];
 
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
#pragma alias s_VOICE_FILE_LOAD_abs s_VOICE_FILE_LOAD__0069ddd0
extern u8 s_VOICE_FILE_LOAD_abs[];
 
extern char *s_WAIT_MODE_SELECT_0069dcf0;
#pragma alias s_BATTLE_BLUR_USE_abs s_BATTLE_BLUR_USE__0069ddf0
extern u8 s_BATTLE_BLUR_USE_abs[];
extern u32 uGpffff841c;
#pragma alias fGpffff841c_evt uGpffff841c
extern f32 fGpffff841c_evt;
extern s16 uGpffff9d78;
extern s16 uGpffff9d7c;
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
code * FUN_0036ed30(int param_1);
code * FUN_0036edd0(void);
code * FUN_0036ee30(void);
float FUN_0038a220(int param_1);
float FUN_0038a900(int param_1);
u8 FUN_003b86c0(f32 param_1, u32 param_2, u32 param_3);
u32 FUN_003b8730(f32 param_1, u16 param_2, void *param_3);
u32 FUN_003b89f0(f32 param_1, u16 param_2, char *param_3, u32 param_4);
int FUN_00361830(int param_1);
int FUN_00361ee0(int param_1,int param_2);
int FUN_00361f20(int param_1);
int FUN_00361f60(int param_1,int param_2);
int FUN_00361fe0(int param_1,int param_2);
int FUN_0036be60(u64 param_1,int param_2,int param_3);
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
int FUN_00361ca0(int param_1,int param_2);
u32 FUN_00361350(int *param_1,int param_2,int param_3);
u32 FUN_00361dd0(int param_1,u32 param_2,u16 param_3,u32 param_4);
long FUN_00374af0(u64 param_1,u64 param_2,u64 param_3);
#pragma alias FUN_00386ae0_evt FUN_00386ae0
extern u32 FUN_00386ae0_evt(u32 param_1,u32 param_2);
long FUN_00386ae0(u64 param_1,u64 param_2);
#pragma alias FUN_0038c540_evt FUN_0038c540
extern void FUN_0038c540_evt(int param_1,int param_2,int param_3,u32 param_4,f32 *param_5,f32 *param_6);
#pragma alias FUN_003b5d10_evt FUN_003b5d10
#pragma alias FUN_003b8310_evt FUN_003b8310
extern u32 FUN_003b8310_evt(u16 param_1,int param_2);
extern u32 FUN_003b5d10_evt(u32 param_1);
u32 FUN_003976f0(int param_1,int param_2,u32 *param_3,u32 *param_4);
f32 FUN_00318870(u32 param_1,u16 param_2);
u32 FUN_003185b0(u32 param_1,u16 param_2);
#pragma alias FUN_00360ed0_evt FUN_00360ed0
extern u32 FUN_00360ed0_evt(u32 param_1);
#pragma alias FUN_003b9550_evt FUN_003b9550
extern void FUN_003b9550_evt(u32 param_1,u32 param_2);
#pragma alias FUN_00388df0_evt FUN_00388df0
extern u32 FUN_00388df0_evt(u32 param_1,u32 *param_2);
#pragma alias FUN_003b8ff0_evt FUN_003b8ff0
extern u32 FUN_003b8ff0_evt(u32 param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5,int param_6,float param_7);
#pragma alias FUN_003b9260_evt FUN_003b9260
extern u32 FUN_003b9260_evt(float param_1,u32 param_2,u32 param_3,u16 param_4,u16 param_5,u32 param_6,u32 param_7);
#pragma alias FUN_003b8ff0_evt_wide FUN_003b8ff0
extern u32 FUN_003b8ff0_evt_wide(float param_1,u32 param_2,u32 param_3,s32 param_4,s32 param_5,u32 param_6,s32 param_7);
#pragma alias FUN_003b9260_evt_wide FUN_003b9260
extern u32 FUN_003b9260_evt_wide(float param_1,u32 param_2,u32 param_3,s32 param_4,s32 param_5,u32 param_6,s32 param_7);
#pragma alias FUN_003b8e10_evt FUN_003b8e10
extern u64 FUN_003b8e10_evt(u16 param_1,u8 param_2,short param_3,u32 param_4);
u64 FUN_003952d0(u64 param_1,int param_2,s16 param_3);
u64 FUN_003952b0(u64 param_1,int param_2);
u64 FUN_003952a0(u64 param_1,int param_2);
u32 FUN_00397870(int param_1,long param_2,u32 *param_3,u32 *param_4,u32 *param_5,u32 *param_6);
void FUN_00396f50(int param_1);
u32 FUN_00396c70(int param_1,int param_2,int param_3,long param_4,long param_5,long param_6,long param_7,float param_8);
long FUN_0038ab00(int param_1,u64 param_2);
short FUN_0036f640(int param_1);
#pragma alias FUN_0036f640_evt FUN_0036f640
extern int FUN_0036f640_evt(int param_1);
u16 * FUN_00362290(int param_1);
u16 * FUN_00362310(int param_1);
u16 * FUN_00364470(u32 param_1,int param_2);
u16 * FUN_003645c0(u32 param_1,int param_2);
u16 * FUN_003646d0(u32 param_1,int param_2);
u16 * FUN_00364b10(u32 param_1,int param_2);
u16 * FUN_003655f0(u32 param_1,int param_2,int param_3);
u16 * FUN_00366540(u32 param_1,int param_2,int param_3,int param_4);
#pragma alias FUN_00366540_evt_u32 FUN_00366540
extern u32 FUN_00366540_evt_u32(u32 param_1,int param_2,int param_3,int param_4);
u32 FUN_00368d70(u64 param_1,u64 param_2,int param_3);
u32 FUN_0036d470(int param_1);
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
u32 FUN_0038a4b0(u32 param_1,int param_2,u32 *param_3,u32 *param_4);
u32 FUN_0038d6f0(long param_1);
u32 FUN_0038d980(void);
u32 FUN_0038e860(long param_1,u64 param_2);
#pragma alias FUN_0038e860_i FUN_0038e860
extern u32 FUN_0038e860_i(int param_1,int param_2);
u32 FUN_003670f0(int param_1,int param_2,int param_3);
u64 FUN_00366f90(u64 param_1,u64 param_2,u32 param_3);
u32 FUN_00367190(int param_1,int param_2,int param_3);
u32 FUN_00367440(int param_1,int param_2,int param_3);
u64 FUN_00367230(u64 param_1,u64 param_2,int param_3);
u64 FUN_003674b0(u64 param_1,u64 param_2,u32 *param_3);
u64 FUN_00367a20(u64 param_1,u64 param_2,int param_3);
u64 FUN_00367cb0(u64 param_1,u64 param_2,int param_3);
u64 FUN_00367d70(u64 param_1,u64 param_2,int param_3);
u64 FUN_00367e00(u64 param_1,u64 param_2,int param_3);
u64 FUN_00367ec0(u64 param_1,u64 param_2,int param_3);
u64 FUN_00368020(u64 param_1,u64 param_2,int param_3);
u64 FUN_003680e0(u64 param_1,u64 param_2,int param_3);
u64 FUN_003682f0(u64 param_1,u64 param_2,int param_3);
u64 FUN_003683a0(u64 param_1,u64 param_2,int param_3);
u64 FUN_00368440(u64 param_1,u64 param_2,int param_3);
u64 FUN_003684d0(u64 param_1,u64 param_2,int param_3,int param_4);
u64 FUN_003685c0(u64 param_1,u64 param_2,int param_3);
u64 FUN_00368680(u64 param_1,u64 param_2,int param_3);
u32 FUN_00368710(int param_1,int param_2,int param_3);
u64 FUN_003687b0(u64 param_1,u64 param_2,int param_3);
u64 FUN_00368830(u64 param_1,u64 param_2,int param_3);
u64 FUN_003688d0(u64 param_1,u64 param_2,int param_3,int param_4);
u32 FUN_003689c0(int param_1,int param_2,int param_3);
u64 FUN_00368a30(u64 param_1,u64 param_2,int param_3,int param_4);
u64 FUN_00368b00(u64 param_1,int param_2,int param_3);
u64 FUN_00368c10(u64 param_1,u64 param_2,int param_3);
u64 FUN_00368cb0(u64 param_1,u64 param_2,int param_3);
u64 FUN_00368f20(u64 param_1,int param_2,u8 *param_3);
u64 FUN_00369320(u64 param_1,int param_2,int param_3);
u32 FUN_003698a0(u64 param_1,u64 param_2,int param_3);
u64 FUN_00369a20(int param_1,u64 param_2,int param_3);
u64 FUN_0036be10(u64 param_1,u64 param_2,u32 param_3);
u64 FUN_0036cc30(u64 param_1,u64 param_2,u8 *param_3);
u64 FUN_0036f500(long param_1);
#pragma alias FUN_0036f500_s32 FUN_0036f500
extern s32 FUN_0036f500_s32(long param_1);
u64 FUN_003709d0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_003715b0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00379f30(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_0037a640(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_0037abd0(u64 param_1,u64 param_2,u64 param_3);
u32 FUN_00385bd0(int param_1,u64 param_2);
u32 FUN_00385cd0(int param_1);
u32 FUN_00385e20(int param_1);
u32 FUN_00385f00(int param_1);
u32 FUN_00385f90(int param_1);
u32 FUN_00386060(int param_1);
u32 FUN_00386130(int param_1,u32 *param_2,u32 *param_3);
u32 FUN_00386230(int param_1,u32 *param_2,u32 *param_3);
u32 FUN_00386310(int param_1);
u64 FUN_00386430(int param_1,short param_2,u32 param_3);
u32 FUN_003865f0(int param_1);
u32 FUN_00386780(int param_1,u32 param_2,u32 param_3,u32 param_4);
u32 FUN_00386860(int param_1,u32 param_2,u32 param_3,u32 param_4);
u32 FUN_00386940(u32 param_1,int param_2,u32 param_3);
u32 FUN_00386a00(int param_1,u32 param_2);
u64 FUN_0038da10(u16 *param_1);
s8 FUN_0036fa40(int param_1);
#pragma alias FUN_0036fa40_wide FUN_0036fa40
extern s32 FUN_0036fa40_wide(int param_1);
u8 FUN_00373590(u64 param_1,u64 param_2,u64 param_3);
void FUN_00361050(int param_1,u32 param_2);
void FUN_00361070(int param_1);
void FUN_00361140(u8 *param_1,u16 *param_2);
#pragma alias FUN_00361140_raw FUN_00361140
extern void FUN_00361140_raw();
void FUN_00361200(int param_1,int param_2);
void FUN_00361270(int param_1);
void FUN_00361890(int *param_1,int param_2);
void FUN_00361980(int param_1);
void FUN_00361b60(int *param_1,int param_2);
void FUN_00361c30(int param_1,int param_2);
void FUN_00361d60(int param_1,u16 param_2,u32 param_3);
void FUN_00362100(void);
void FUN_00362110(void);
void FUN_00362120(int param_1,int param_2,int param_3);
#pragma alias FUN_00362120_evt FUN_00362120
extern void FUN_00362120_evt(int param_1,int param_2,int param_3);
void FUN_00362240(int param_1);
void FUN_00362390(int param_1);
void FUN_003625e0(void);
void FUN_003628f0(void);
void FUN_00362f20(int param_1);
void FUN_00362fa0(int param_1);
void FUN_00362ff0(int param_1);
void FUN_00363030(int *param_1,u16 *param_2,u32 param_3,u8 *param_4);
void FUN_003638e0(int *param_1,int param_2,int param_3,u32 param_4,int param_5);
void FUN_003648e0(int param_1,u32 param_2,int param_3);
void FUN_00364a30(u32 param_1,int param_2);
void FUN_00364e40(u32 param_1,int param_2,int param_3);
void FUN_003650c0(int param_1,u64 param_2,int param_3);
void FUN_00365250(u32 param_1,u64 param_2,int param_3);
void FUN_00365360(u32 param_1,u64 param_2,int param_3);
#pragma alias FUN_003650c0_i FUN_003650c0
#pragma alias FUN_00365250_i FUN_00365250
#pragma alias FUN_00365360_i FUN_00365360
extern void FUN_003650c0_i(int param_1,int param_2,int param_3);
extern void FUN_00365250_i(u32 param_1,int param_2,int param_3);
extern void FUN_00365360_i(u32 param_1,int param_2,int param_3);
void FUN_00365430(int param_1,int param_2);
void FUN_003657e0(int param_1,int param_2);
void FUN_003658b0(u32 param_1,int param_2);
void FUN_00365a40(u32 param_1,int param_2);
void FUN_00365b70(u32 param_1,u32 param_2);
void FUN_00365cd0(u32 param_1,int param_2);
void FUN_00365f80(u32 param_1,u32 param_2);
void FUN_00366210(u32 param_1,int param_2);
void FUN_00366330(u32 param_1,int param_2);
void FUN_003663f0(u32 param_1,int param_2);
void FUN_00366660(u32 param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5);
void FUN_00366970(u32 param_1,u32 param_2);
void FUN_00366ac0(u32 param_1,u32 param_2);
void FUN_0036d030(int param_1);
void FUN_0036efb0(void);
void FUN_0036f000(int param_1);
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
void FUN_003858c0(void);
void FUN_00385990(u32 param_1,int param_2,int param_3,int param_4,u32 param_5, u32 param_6);
void FUN_00385b20(int param_1);
void FUN_00385b90(void);
#pragma alias FUN_00385b90_evt_main FUN_00385b90
extern void FUN_00385b90_evt_main(u32 param_1);
void FUN_00385ba0(void);
void FUN_00386110(u32 *param_1,u32 *param_2);
void FUN_00386210(u32 *param_1,u32 *param_2);
void FUN_00386390(u32 *param_1,u32 *param_2,u32 *param_3,u32 *param_4);
void FUN_00386aa0(void);
void FUN_00386b70(int param_1,int param_2,int param_3);
#pragma alias FUN_00386b70_evt_main FUN_00386b70
extern void FUN_00386b70_evt_main(int param_1,int param_2,int param_3);
#pragma alias FUN_005225a8_evt_main FUN_005225a8
extern void FUN_005225a8_evt_main(void *param_1);
#pragma alias FUN_00195020_evt_main FUN_00195020
extern void FUN_00195020_evt_main(u32 param_1);
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
void FUN_00389d80(u64 param_1,u64 param_2);
void FUN_00389f40(void);
void FUN_0038a0c0(int param_1,int param_2);
extern void FUN_001a4580(int param_1,float param_2);
void FUN_0038a140(u32 param_1,u32 *param_2);
void FUN_0038a180(int param_1,int param_2);
void FUN_0038a260(u32 param_1,int param_2,int param_3,int param_4,u32 param_5, u64 param_6,u64 param_7,u64 param_8,u64 param_9);
void FUN_0038a590(int param_1,long param_2);
void FUN_0038a620(int param_1,long param_2);
void FUN_0038a6c0(int param_1);
void FUN_0038a730(int param_1);
void FUN_0038a7c0(u32 *param_1,u32 *param_2);
void FUN_0038a920(int param_1,u16 *param_2,int param_3);
void FUN_0038af70(u16 *param_1);
void FUN_0038b140(long param_1);
void FUN_0038b2c0(u16 *param_1,u32 *param_2,u32 *param_3,u64 param_4, long param_5);
void FUN_0038b550(long param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_0038b600(u32 *param_1,u32 *param_2);
void FUN_0038b6e0(u64 param_1,int param_2,int param_3);
void FUN_0038b960(int param_1,long param_2,short param_3);
void FUN_0038bc70(int param_1,short param_2,int param_3);
void FUN_0038c460(long param_1,int param_2,int *param_3,u32 *param_4);
void FUN_0038c540(int param_1,u64 param_2,u64 param_3,u64 param_4, u32 *param_5,u32 *param_6);
void FUN_0038c830(u64 param_1,long param_2);
#pragma alias FUN_00362290_2390 FUN_00362290
extern u16 *FUN_00362290_2390();
#pragma alias FUN_00362310_2390 FUN_00362310
extern u16 *FUN_00362310_2390();
#pragma alias FUN_0038c830_2390 FUN_0038c830
extern void FUN_0038c830_2390(int param_1,int param_2);
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











// FUN_00361350


u32 FUN_00361350(int *param_1,int param_2,int param_3)



{

  u32 uVar1;

u32 lVar2;

  int *piVar3;

u32 lVar4;

  u16 *puVar5;

  int iVar6;

  u8 auStack_60[0x20];

  f32 uStack_4;

  f32 uStack_8;

  

  lVar4 = 0;

  piVar3 = param_1;

  iVar6 = *piVar3;

  if ((iVar6 == 0x19) || (iVar6 == 0x18)) {
    ;
  } else {
    switch (iVar6) {
    case 10:
      lVar4 = FUN_00386ae0_evt(0x30,9);

      if (lVar4 == 0) {
        FUN_0019d3f0((const char *)(DAT_006a0000 - 0x2a80),0x207);

      }

      FUN_0038c540_evt(param_3,(int)param_1,param_2,lVar4,&uStack_4,&uStack_8);

      break;
    default:
      break;
    }
  }

  lVar2 = FUN_00386ae0_evt(0x54,8);

  if (lVar2 == 0) {

    FUN_0019d3f0((const char *)(DAT_006a0000 - 0x2a80),0x232);

  }

  FUN_00521408(lVar2,0,0x54);

  puVar5 = (u16 *)lVar2;

  *puVar5 = (short)param_2;

  *(u32 *)(puVar5 + 2) = 0xffffffff;

  *(u32 *)(puVar5 + 0x20) = 0;

  *(int *)(puVar5 + 0x1c) = *piVar3;

  FUN_00361140((u8 *)param_1,(u16 *)lVar2);

  iVar6 = (int)param_3;

  switch(*piVar3) {



  case 2:

    *(f32 *)(puVar5 + 8) = fGpffff841c_evt;

    uVar1 = FUN_00361fe0(iVar6 + piVar3[2] * 0x20 + 0x54,param_3);

    *(u32 *)(puVar5 + 2) = uVar1;

    break;

  case 1:

    uVar1 = FUN_00361fe0(iVar6 + piVar3[2] * 0x20 + 0x54,param_3);

    *(u32 *)(puVar5 + 2) = uVar1;

    *(u8 *)(puVar5 + 8) = 0;

    *(u8 *)(puVar5 + 0xb) = 0;

    *(u8 *)((int)puVar5 + 0x17) = 0x14;

    break;

  case 0x30:

    *(u8 *)(puVar5 + 8) = 0;

    *(char *)(puVar5 + 0x18) = (char)piVar3[1];

    break;

  case 3:

    uVar1 = FUN_00361fe0(iVar6 + piVar3[2] * 0x20 + 0x54,param_3);

    *(u32 *)(puVar5 + 2) = uVar1;

    *(s8 *)(puVar5 + 8) = -1;

    puVar5[9] = 0;

    *(u8 *)(puVar5 + 10) = 0;

    *(s8 *)((int)puVar5 + 0x15) = -1;
    ((s16 *)puVar5)[0xb] = -1;

    puVar5[0xc] = 0;

    break;
  case 4:

  case 5:

  case 7:

  case 8:

  case 0xb:

  case 0xd:

  case 0xe:

  case 0xf:

  case 0x10:

  case 0x11:

  case 0x13:

  case 0x17:

  case 0x19:

  case 0x1b:

  case 0x1c:

  case 0x1d:

  case 0x1e:

  case 0x1f:

  case 0x20:

  case 0x22:

  case 0x25:

  case 0x26:

  case 0x28:

  case 0x2a:

  case 0x2b:

  case 0x2c:

  case 0x2d:

  case 0x2e:

  case 0x2f:

  case 0x31:

  case 0x32:

    break;

  case 0x12:

    uVar1 = FUN_00361fe0(iVar6 + piVar3[2] * 0x20 + 0x54,param_3);

    *(u32 *)(puVar5 + 2) = uVar1;

    puVar5[8] = 0;

    ((s16 *)puVar5)[9] = -1;

    *(u8 *)(puVar5 + 8) = 0;

    break;

  case 0x14:

  case 0x15:

    uVar1 = FUN_00361fe0(iVar6 + piVar3[2] * 0x20 + 0x54,param_3);

    *(u32 *)(puVar5 + 2) = uVar1;

    *(s8 *)(puVar5 + 8) = -1;

    *(u8 *)((int)puVar5 + 0x11) = 0;

    puVar5[9] = 0;

    *(s8 *)(puVar5 + 10) = -1;

    *(s8 *)((int)puVar5 + 0x15) = -1;

    *(s8 *)(puVar5 + 0xb) = -1;

    *(s8 *)((int)puVar5 + 0x17) = -1;

    puVar5[0xc] = 0;

    break;

  case 0x1a:

    uVar1 = FUN_00361fe0(iVar6 + piVar3[2] * 0x20 + 0x54,param_3);

    *(u32 *)(puVar5 + 2) = uVar1;

    *(s8 *)(puVar5 + 8) = -1;

    puVar5[9] = 0;

    *(u8 *)(puVar5 + 10) = 0;

    *(s8 *)((int)puVar5 + 0x15) = -1;

    ((s16 *)puVar5)[0xb] = -1;

    puVar5[0xc] = 0;

    break;

  case 9:

    uVar1 = FUN_00361fe0(iVar6 + piVar3[2] * 0x20 + 0x54,param_3);

    *(u32 *)(puVar5 + 2) = uVar1;

    ((s16 *)puVar5)[8] = -1;

    puVar5[9] = 1;

    break;

  case 0xc:

    puVar5[8] = 1;

    puVar5[9] = 0x80;

    *(u32 *)(puVar5 + 10) = 0;

    break;

  case 0x16:

    puVar5[8] = 1;

    break;

  case 10:

    *(int *)(puVar5 + 0x24) = (int)lVar4;

    *(f32 *)(puVar5 + 8) = uStack_4;

    *(f32 *)(puVar5 + 10) = uStack_8;

    puVar5[0xc] = (short)piVar3[1];

    *(u32 *)(puVar5 + 2) = 0;

    break;

  case 6:

    puVar5[8] = 0;

    ((s16 *)puVar5)[9] = -1;

    break;

  case 0x18:

    uVar1 = FUN_00361fe0(iVar6 + piVar3[2] * 0x20 + 0x54,param_3);

    *(u32 *)(puVar5 + 2) = uVar1;

    FUN_00521408(auStack_60,0,0x20);

    *(u8 *)(puVar5 + 8) = *(u32 *)(auStack_60 + 0x14);

    *(u8 *)((int)puVar5 + 0x11) = *(u32 *)(auStack_60 + 0x18);

    puVar5[10] = *(u32 *)auStack_60;

    puVar5[0xb] = *(u32 *)(auStack_60 + 4);

    *(u8 *)(puVar5 + 0xc) = auStack_60[8];

    *(u8 *)((int)puVar5 + 0x19) = auStack_60[9];

    *(u8 *)(puVar5 + 0xd) = auStack_60[10];

    *(u8 *)((int)puVar5 + 0x1b) = auStack_60[0xb];

    *(f32 *)(puVar5 + 0xe) = *(f32 *)(auStack_60 + 0x10);

    *(f32 *)(puVar5 + 0x10) = *(f32 *)(auStack_60 + 0xc);

    *(u8 *)(puVar5 + 0x12) = *(u32 *)(auStack_60 + 0x1c);

    break;

  case 0x21:

    puVar5[8] = 0x1e;

    *(u32 *)(puVar5 + 0xc) = 0;

    *(u32 *)(puVar5 + 0xe) = 0x44200000;

    *(u32 *)(puVar5 + 0x10) = 0xc4430000;

    *(u32 *)(puVar5 + 0x12) = 0x42000000;

    *(u32 *)(puVar5 + 0x14) = 0;

    *(u32 *)(puVar5 + 0x16) = 0x420c0000;

    break;

  case 0x23:

    *(char *)((int)puVar5 + 0x11) = (char)piVar3[1];

    if (piVar3[1] == 1) {

      puVar5[10] = 0x17c;

    }

    break;

  case 0x24:

    *(char *)((int)puVar5 + 0x11) = (char)piVar3[1];

    break;

  case 0x27:

    *(u8 *)(puVar5 + 8) = 0;

    break;

  case 0x29:

    *(u8 *)(puVar5 + 8) = 0;
    if (*(char *)(puVar5 + 8) == '\0') {
      FUN_0038d790(lVar2);
    }
    break;

  default:

    FUN_0019d3f0((const char *)(DAT_006a0000 - 0x2a80),0x375);

    break;

  }
  return lVar2;

}


// FUN_00361830


int FUN_00361830(int param_1)



{

  int iVar1;

  int iVar2;
  int iVar3;

  

  if (*(int *)(param_1 + 0x164) == 0) {

    iVar1 = 0;

  }

  else {

    iVar1 = *(int *)(*(int *)(param_1 + 0x164) + 0x6c);
    iVar2 = 0;
    iVar3 = *(int *)(param_1 + 0x160) + *(int *)(param_1 + 0x15c);

    while (iVar2 < iVar3 && iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x4c);
      iVar2 = iVar2 + 1;
    }

  }

  return iVar1;

}


// FUN_00361890


void FUN_00361890(int *param_1,int param_2)



{

  int iVar1;

  

  iVar1 = (int)param_2;

  if (*(int *)(iVar1 + 0x50) == 0) {

    param_1[0x1b] = *(int *)(iVar1 + 0x4c);

  }

  else {

    *(u32 *)(*(int *)(iVar1 + 0x50) + 0x4c) = *(u32 *)(iVar1 + 0x4c);

  }

  if (*(int *)(iVar1 + 0x4c) == 0) {

    param_1[0x1c] = *(int *)(iVar1 + 0x50);

  }

  else {

    *(u32 *)(*(int *)(iVar1 + 0x4c) + 0x50) = *(u32 *)(iVar1 + 0x50);

  }

  *(u32 *)(iVar1 + 0x50) = 0;

  *(u32 *)(iVar1 + 0x4c) = 0;

  param_1[0x1a] = param_1[0x1a] + -1;

  if (*(int *)(iVar1 + 0x48) != 0) {

    if (*param_1 != 0x12) {

      FUN_00386b70_evt_main(*(int *)(iVar1 + 0x48),9,0);

    }

    *(u32 *)(iVar1 + 0x48) = 0;

  }

  if (*(int *)(iVar1 + 0x40) != 0) {

    FUN_00386b70(*(int *)(iVar1 + 0x40),10,0x130);

    *(u32 *)(iVar1 + 0x40) = 0;

  }

  FUN_00386b70_evt_main(param_2,8,0x54);

  return;

}


// Transferred the matched node-walk shape: hoist the bound once, then advance
// the link before incrementing the counter. This improves nd216 -> nd189 at
// unchanged size 480/480; hidden-argument probes reached 504/480 and were reverted.
// FUN_00361980


#ifndef PC_BUILD
asm void FUN_00361980(int param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x8c910164
  .word 0x16200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d580
  .word 0x240503f5
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e420164
  .word 0x14400004
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000f
  .word 0x00000000
  .word 0x8c50006c
  .word 0x0000202d
  .word 0x8e430160
  .word 0x8e42015c
  .word 0x00621021
  .word 0x10000003
  .word 0x00000000
  .word 0x8e10004c
  .word 0x24840001
  .word 0x0082082a
  .word 0x10200003
  .word 0x00000000
  .word 0x1600fffa
  .word 0x00000000
  .word 0x8e230000
  .word 0x24020012
  .word 0x10620017
  .word 0x00000000
  .word 0x24020015
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020014
  .word 0x10620009
  .word 0x00000000
  .word 0x2402001a
  .word 0x10620006
  .word 0x00000000
  .word 0x24020003
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x82040010
  .word 0x04800009
  .word 0x00000000
  .word 0x0240282d
  .word 0x0c0d8840
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0d8844
  .word 0x00000000
  .word 0x0220202d
  .word 0x0200282d
  .word 0x0c0d8480
  .word 0x00000000
  .word 0x8e040048
  .word 0x1080000a
  .word 0x00000000
  .word 0x8e230000
  .word 0x24020012
  .word 0x10620005
  .word 0x00000000
  .word 0x24050009
  .word 0x0000302d
  .word 0x0c0e1adc
  .word 0x00000000
  .word 0xae000048
  .word 0x8e040040
  .word 0x10800006
  .word 0x00000000
  .word 0x2405000a
  .word 0x24060130
  .word 0x0c0e1adc
  .word 0x00000000
  .word 0xae000040
  .word 0x0200202d
  .word 0x24050008
  .word 0x24060054
  .word 0x0c0e1adc
  .word 0x00000000
  .word 0x8e440160
  .word 0x14800008
  .word 0x00000000
  .word 0x8e43015c
  .word 0x1860000e
  .word 0x00000000
  .word 0x2463ffff
  .word 0xae43015c
  .word 0x1000000a
  .word 0x00000000
  .word 0x8e43015c
  .word 0x18600005
  .word 0x00000000
  .word 0x2463ffff
  .word 0xae43015c
  .word 0x10000003
  .word 0x00000000
  .word 0x2483ffff
  .word 0xae430160
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_00361B60


void FUN_00361b60(int *param_1,int param_2)



{

  int *piVar1;
  MtEvtNodeList *list;

  list = (MtEvtNodeList *)param_2;
  piVar1 = list->head;
  if (piVar1 == (int *)0x0) {

    list->head = param_1;

    list->tail = param_1;

    param_1[0x25] = 0;

    param_1[0x26] = 0;

  }

  else {

    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x25]) {

      if (DAT_0069d590_abs[*param_1] < DAT_0069d590_abs[*piVar1]) {

        if (piVar1[0x26] == 0) {
          list->head = param_1;
          piVar1[0x26] = (int)param_1;
          param_1[0x26] = 0;
          param_1[0x25] = (int)piVar1;
        }
        else {
          *(int **)(piVar1[0x26] + 0x94) = param_1;
          param_1[0x26] = piVar1[0x26];
          param_1[0x25] = (int)piVar1;
          piVar1[0x26] = (int)param_1;
        }

        break;

      }

    }

    if (piVar1 == (int *)0x0) {

      *(int **)((int)list->tail + 0x94) = param_1;

      param_1[0x26] = (int)list->tail;

      param_1[0x25] = 0;

      list->tail = param_1;

    }

  }

  list->count = list->count + 1;

  return;

}


// FUN_00361c30


void FUN_00361c30(int param_1,int param_2)



{

  if (*(int *)(param_1 + 0x98) == 0) {

    *(u32 *)(param_2 + 0x84) = *(u32 *)(param_1 + 0x94);

  }

  else {

    *(u32 *)(*(int *)(param_1 + 0x98) + 0x94) = *(u32 *)(param_1 + 0x94);

  }

  if (*(int *)(param_1 + 0x94) == 0) {

    *(u32 *)(param_2 + 0x88) = *(u32 *)(param_1 + 0x98);

  }

  else {

    *(u32 *)(*(int *)(param_1 + 0x94) + 0x98) = *(u32 *)(param_1 + 0x98);

  }

  *(u32 *)(param_1 + 0x98) = 0;

  *(u32 *)(param_1 + 0x94) = 0;

  *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + -1;

  return;

}


// FUN_00361CA0

int FUN_00361ca0(int param_1,int param_2)



{

  int lVar1;

  int *piVar2;
  u32 iVar3;
  

  lVar1 = FUN_00386ae0_evt(0x9c,7);

  if (lVar1 == 0) {
    return 0;
  }

  FUN_00521408(lVar1,0,0x9c);

  piVar2 = (int *)lVar1;

  *piVar2 = param_1;

  iVar3 = piVar2[2] = -1;

  *(u16 *)(piVar2 + 3) = 0;

  piVar2[0x19] = 0;
  switch (param_1) {
  case 0x30:
    *(u8 *)((int)piVar2 + 0x22) = (u8)iVar3;
    break;
  }
  FUN_00361b60((int *)lVar1,param_2);


  return lVar1;

}


// FUN_00361D60


void FUN_00361d60(int param_1,u16 param_2,u32 param_3)



{

  int lVar1;

  int iVar2;

  

  if (param_1 != 0) {

    iVar2 = (int)param_1;

    *(u16 *)(iVar2 + 0xc) = param_2;

    lVar1 = FUN_003b5d10(*(u16 *)(iVar2 + 0xc));

    if (lVar1 != 0) {

      *(u32 *)(iVar2 + 0x58) = *(u32 *)(lVar1 + 0x28);

    }

    else {

      *(u32 *)(iVar2 + 0x58) = 0;

    }

    *(u32 *)(iVar2 + 0x38) = param_3;

  }

  return;

}


// FUN_00361DD0


u32 FUN_00361dd0(int param_1,u32 param_2,u16 param_3,u32 param_4)
{
  u32 lVar1;
  u32 lVar2;
  int *piVar3;
  int iVar4;
  u32 initValue;

  lVar1 = FUN_00386ae0_evt(0x9c,7);
  if (lVar1 == 0) {
    lVar1 = 0;
  } else {
    FUN_00521408(lVar1,0,0x9c);
    piVar3 = (int *)lVar1;
    *piVar3 = param_1;
    initValue = piVar3[2] = -1;
    *(u16 *)(piVar3 + 3) = 0;
    piVar3[0x19] = 0;
    switch (param_1) {
    case 0x30:
      *(u8 *)((int)piVar3 + 0x22) = (u8)initValue;
      break;
    }
    FUN_00361b60((int *)lVar1,param_2);
  }
  if ((lVar1 != 0) && (lVar1 != 0)) {
    iVar4 = (int)lVar1;
    *(u16 *)(iVar4 + 0xc) = param_3;
    lVar2 = FUN_003b5d10(*(u16 *)(iVar4 + 0xc));
    if (lVar2 != 0) {
      *(u32 *)(iVar4 + 0x58) = *(u32 *)((int)lVar2 + 0x28);
    } else {
      *(u32 *)(iVar4 + 0x58) = 0;
    }
    *(u32 *)(iVar4 + 0x38) = param_4;
  }
  return lVar1;
}


// FUN_00361ee0


int FUN_00361ee0(int param_1,int param_2)



{

  int iVar1;

  int *piVar2;

  

  iVar1 = 0;

  for (piVar2 = *(int **)(param_2 + 0x84); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x25]) {

    if (*piVar2 == param_1) {

      iVar1 = iVar1 + 1;

    }

  }

  return iVar1;

}


// FUN_00361f20


int FUN_00361f20(int param_1)



{

  int iVar1;

  int iVar2;

  

  iVar1 = 0;

  for (iVar2 = *(int *)(param_1 + 0x84); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x94)) {

    iVar1 = iVar1 + 1;

  }

  return iVar1;

}


/* W367 pragma probe: opt_loop_invariants on nd 61 -> 36; off nd 61; object 116/128. */
#pragma opt_loop_invariants on
// FUN_00361F60


int FUN_00361f60(int param_1,int param_2)
{
  int iVar1;
  int *piVar2;

  iVar1 = 0;
  for (piVar2 = *(int **)(param_2 + 0x84); piVar2 != (int *)0x0;
       piVar2 = (int *)piVar2[0x25]) {
    if (param_1 == 2) {
      if (*piVar2 == 5) {
        continue;
      }
      if (*piVar2 == 0x13) {
        continue;
      }
      goto add_value;
    }
    if (param_1 == 3) {
      if ((*piVar2 == 5) || (*piVar2 == 0x13)) {
        goto add_value;
      }
    }
    continue;
add_value:
    iVar1 = iVar1 + piVar2[0x1a];
  }
  return iVar1;
}


// Two honest branch-layout attempts were measured and reverted: an early return
// from the search loop regressed nd108 -> nd173/size260 -> 264; inverting the
// call test plus an early post-loop return regressed to nd118/size272.
#pragma opt_loop_invariants reset
// FUN_00361FE0


#ifndef PC_BUILD
asm int FUN_00361fe0(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x16400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d580
  .word 0x2405058b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x16400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d580
  .word 0x24050571
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000c
  .word 0x00000000
  .word 0x00101140
  .word 0x02221021
  .word 0x0240202d
  .word 0x24450054
  .word 0x0c14904a
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x26100001
  .word 0x8e220050
  .word 0x0202102a
  .word 0x1440fff2
  .word 0x00000000
  .word 0x2410ffff
  .word 0x06000004
  .word 0x00000000
  .word 0x0200102d
  .word 0x10000013
  .word 0x00000000
  .word 0x8e300050
  .word 0x1a000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d580
  .word 0x24050592
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00101140
  .word 0x02221021
  .word 0x24440054
  .word 0x0240282d
  .word 0x0c14909c
  .word 0x00000000
  .word 0x8e220050
  .word 0x24420001
  .word 0xae220050
  .word 0x0200102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_00362100


void FUN_00362100(void)



{

  return;

}


// FUN_00362110


void FUN_00362110(void)



{

  return;

}


// FUN_00362120


void FUN_00362120(int param_1,int param_2,int param_3)



{

  int *piVar4;

  u16 sVar1;

  u16 *puVar2;

  int iVar3;

  iVar3 = FUN_003b5d00();

  if (iVar3 != 0) {

    for (piVar4 = *(int **)(param_3 + 0x84); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[0x25]) {

      if (((*piVar4 == 1) || (*piVar4 == 0x30)) && (sVar1 = (u16)piVar4[3], sVar1 != 0)) {

        if (piVar4[0x19] == 1) {

          FUN_003b8310(sVar1,0);

        }

        else if (param_1 == 0) {

          FUN_003b8310_evt(sVar1,1);

        }

        else {

          FUN_003b8310(sVar1,0);

        }

      }

    }

    for (puVar2 = (u16 *)FUN_003b5d50(7); puVar2 != (u16 *)0x0;

        puVar2 = *(u16 **)(puVar2 + 0x7c)) {

      if (param_1 == 0) {

        FUN_003b8310(*puVar2,1);

      }

      else {

        FUN_003b8310(*puVar2,0);

      }

    }

  }

  return;

}


// FUN_00362240


void FUN_00362240(int param_1)



{

  if (*(int *)(param_1 + 0x77c) == 1) {

    FUN_00362120_evt(0,*(int *)(param_1 + 0x18),param_1);

  }

  else {

    FUN_00362120_evt(1,*(int *)(param_1 + 0x18),param_1);

  }

  return;

}


#pragma push
#pragma opt_loop_invariants on
// FUN_00362290


u16 * FUN_00362290(int param_1)



{

  u16 *puVar1;

  u16 *puVar2;

  int iVar3;

  int *piVar5;

  int iVar4;
  

  puVar2 = (u16 *)0x0;

  iVar4 = 99999;

  for (piVar5 = *(int **)(param_1 + 0x84); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[0x25]) {

    if (*piVar5 == 2) {

      for (puVar1 = (u16 *)piVar5[0x1b]; puVar1 != (u16 *)0x0;

          puVar1 = *(u16 **)(puVar1 + 0x26)) {

        if (*(int *)(param_1 + 0x18) < (int)(u32)*puVar1) {

          iVar3 = (u32)*puVar1 - *(int *)(param_1 + 0x18);

          if (iVar3 < iVar4) {

            iVar4 = iVar3;

            puVar2 = puVar1;

          }

        }

      }

    }

  }

  return puVar2;

}
#pragma pop


#pragma push
#pragma opt_loop_invariants on
// FUN_00362310


u16* FUN_00362310(int param_1)
{
    u16* candidate;
    u16* nearest;
    int distance;
    u32 candidateTime;
    int currentTime;
    int* group;
    int nearestDistance;

    nearest = NULL;
    nearestDistance = 99999;
    for (group = *(int**)(param_1 + 0x84); group != NULL; group = (int*)group[0x25])
    {
        if (*group == 2)
        {
            for (candidate = (u16*)group[0x1b]; candidate != NULL;
                 candidate = *(u16**)(candidate + 0x26))
            {
                candidateTime = *(volatile /* Removing this function's qualifier batch loses FUN_00362310 (MATCH nd0 -> MISMATCH nd74, size 128 -> 136) - measured W170. */ u16*)candidate;
                currentTime = *(volatile /* Removing this function's qualifier batch loses FUN_00362310 (MATCH nd0 -> MISMATCH nd74, size 128 -> 136) - measured W170. */ int*)(param_1 + 0x18);
                if ((int)candidateTime < currentTime)
                {
                    distance = currentTime - candidateTime;
                    if (distance < nearestDistance)
                    {
                        nearestDistance = distance;
                        nearest = candidate;
                    }
                }
            }
        }
    }
    return nearest;
}
#pragma pop

// FUN_00362390


void FUN_00362390(int param_1)



{

  int iVar2;

  int lVar3;

  int iVar4;

  int iVar5;

  int iVar6;

  

  iVar4 = 0;

  iVar5 = (int)param_1;

  if ((*(u16 *)DAT_007e0952_2390 & 2) != 0) {

    lVar3 = (int)FUN_00362290_2390();

    if (lVar3 != 0) {

      iVar4 = (u32)*(u16 *)lVar3 - *(int *)(iVar5 + 0x18);

    }

  }

  else {

    if ((*(u16 *)DAT_007e0952_2390 & 1) != 0) {

      lVar3 = (int)FUN_00362310_2390();

      if (lVar3 != 0) {

        iVar4 = (u32)*(u16 *)lVar3 - *(int *)(iVar5 + 0x18);

      }

    }

    else {
      if (((*(u16 *)DAT_007e094c_2390 & 0x2000) != 0) &&
          ((*(u16 *)DAT_007e0952_2390 & 8) != 0) &&
          (*(int *)(iVar5 + 0x18) > 0)) {
        iVar4 = 100;
      }
      else if (((*(u16 *)DAT_007e094c_2390 & 0x8000) != 0) &&
               ((*(u16 *)DAT_007e0952_2390 & 4) != 0) &&
               (*(int *)(iVar5 + 0x18) > 0)) {
        iVar4 = -100;
      }
      else if (((*(u16 *)DAT_007e0952_2390 & 0x8000) != 0) &&
               (*(int *)(iVar5 + 0x18) > 0)) {
        iVar4 = -1;
      }
      else if (((*(u16 *)DAT_007e0952_2390 & 0x2000) != 0) &&
               (*(int *)(iVar5 + 0x18) < *(int *)(iVar5 + 0xc) - 1)) {
        iVar4 = 1;
      }
      else if ((*(u16 *)DAT_007e0952_2390 & 4) != 0) {
        iVar4 = -10;
      }
      else if ((*(u16 *)DAT_007e0952_2390 & 8) != 0) {
        iVar4 = 10;
      }
      else if ((*(u16 *)DAT_007e094e_abs & 0x100) != 0) {
        if (*(int *)(iVar5 + 0x18) != *(int *)(iVar5 + 0x10)) {
          iVar4 = *(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0x18);
          *(u32 *)(iVar5 + 4) &= ~0x20;
          *(u32 *)(iVar5 + 4) &= ~0x8000;
        }
      }
    }

  }

  if (iVar4 != 0) {

    FUN_00362fa0(param_1);

    iVar6 = *(int *)(iVar5 + 0x18) + iVar4;

    if (iVar6 < 0) {

      iVar6 = 0;

    }

    iVar2 = *(int *)(iVar5 + 0xc) + -1;

    if (iVar2 < iVar6) {

      iVar6 = iVar2;

    }

    FUN_0038c830_2390(param_1,iVar6);

    *(int *)(iVar5 + 0x28) = iVar6;

    *(u32 *)(iVar5 + 0x24) = 1;

    if (0 < iVar4) {

      FUN_003b83d0(iVar4);

    }

  }

  return;

}


// FUN_003625E0


#ifndef PC_BUILD
asm void FUN_003625e0(void)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x3c02006a
  .word 0xdc43d5c8
  .word 0x3c02006a
  .word 0xc440d5d0
  .word 0xffa30080
  .word 0xe7a00088
  .word 0x3c02006a
  .word 0xdc43d5d8
  .word 0x3c02006a
  .word 0xc440d5e0
  .word 0xffa30070
  .word 0xe7a00078
  .word 0x3c02006a
  .word 0xdc43d5e8
  .word 0x3c02006a
  .word 0xc440d5f0
  .word 0xffa30060
  .word 0xe7a00068
  .word 0x0c0e282c
  .word 0x00000000
  .word 0x24030001
  .word 0x144300a5
  .word 0x00000000
  .word 0x24041e59
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040802d
  .word 0x1200009f
  .word 0x00000000
  .word 0x3c023f80
  .word 0xafa20048
  .word 0xafa20034
  .word 0xafa20020
  .word 0xafa00030
  .word 0xafa00028
  .word 0xafa00024
  .word 0xafa00044
  .word 0xafa00040
  .word 0xafa00038
  .word 0xafa00058
  .word 0xafa00054
  .word 0xafa00050
  .word 0x8fa3002c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xafa2002c
  .word 0x27a40020
  .word 0x27a50060
  .word 0xc60c0010
  .word 0x24060002
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40020
  .word 0x27a50070
  .word 0xc60c0014
  .word 0x24060002
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40020
  .word 0x26050004
  .word 0x24060002
  .word 0x0c130d74
  .word 0x00000000
  .word 0x27a40090
  .word 0x27a50080
  .word 0x27a60020
  .word 0x0c131b18
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9063095f
  .word 0x2861003c
  .word 0x10200016
  .word 0x00000000
  .word 0x3c034150
  .word 0x44831800
  .word 0xc7a10090
  .word 0xc6000004
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4601181c
  .word 0xe6000004
  .word 0xc7a10094
  .word 0xc6000008
  .word 0x46001018
  .word 0x4601181c
  .word 0xe6000008
  .word 0xc7a10098
  .word 0xc600000c
  .word 0x46001018
  .word 0x4601181c
  .word 0xe600000c
  .word 0x10000017
  .word 0x00000000
  .word 0x286100bc
  .word 0x14200014
  .word 0x00000000
  .word 0x3c034150
  .word 0x44831800
  .word 0xc7a10090
  .word 0xc6000004
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4601181d
  .word 0xe6000004
  .word 0xc7a10094
  .word 0xc6000008
  .word 0x46001018
  .word 0x4601181d
  .word 0xe6000008
  .word 0xc7a10098
  .word 0xc600000c
  .word 0x46001018
  .word 0x4601181d
  .word 0xe600000c
  .word 0x3c03007e
  .word 0x9063095e
  .word 0x2861003c
  .word 0x10200009
  .word 0x00000000
  .word 0xc6010014
  .word 0x3c034020
  .word 0x44830000
  .word 0x00000000
  .word 0x46000800
  .word 0xe6000014
  .word 0x1000003a
  .word 0x00000000
  .word 0x286100bc
  .word 0x14200009
  .word 0x00000000
  .word 0xc6010014
  .word 0x3c034020
  .word 0x44830000
  .word 0x00000000
  .word 0x46000801
  .word 0xe6000014
  .word 0x1000002f
  .word 0x00000000
  .word 0x3c03007e
  .word 0x90630960
  .word 0x2861003c
  .word 0x10200009
  .word 0x00000000
  .word 0xc6010014
  .word 0x3c034020
  .word 0x44830000
  .word 0x00000000
  .word 0x46000800
  .word 0xe6000014
  .word 0x10000022
  .word 0x00000000
  .word 0x286100bc
  .word 0x14200009
  .word 0x00000000
  .word 0xc6010014
  .word 0x3c034020
  .word 0x44830000
  .word 0x00000000
  .word 0x46000801
  .word 0xe6000014
  .word 0x10000017
  .word 0x00000000
  .word 0x3c03007e
  .word 0x90630961
  .word 0x2861003c
  .word 0x10200009
  .word 0x00000000
  .word 0xc6010010
  .word 0x3c034020
  .word 0x44830000
  .word 0x00000000
  .word 0x46000800
  .word 0xe6000010
  .word 0x1000000a
  .word 0x00000000
  .word 0x286100bc
  .word 0x14200007
  .word 0x00000000
  .word 0xc6010010
  .word 0x3c034020
  .word 0x44830000
  .word 0x00000000
  .word 0x46000801
  .word 0xe6000010
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


/* W367 pragma probe: opt_propagation off nd 1120 -> 1076; on nd 1120; object 1504/1584. */
/* W415: outer flag inversion + ascending state switch + state-1 float width + scalar declaration order nd1076->814; object1504->1508/window1584. Negative copy setup with iVar5 before puVar6 nd823->825 (object1508) was reverted. */
#pragma opt_propagation off
// FUN_003628F0
#ifndef PC_BUILD
asm void FUN_003628f0(void)
{
  .set noreorder
  .word 0x27bdfed0
  .word 0xffbf0020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x3c02006a
  .word 0xdc43d5f8
  .word 0x3c02006a
  .word 0xc440d600
  .word 0xffa30110
  .word 0xe7a00118
  .word 0x3c02006a
  .word 0xdc43d608
  .word 0x3c02006a
  .word 0xc440d610
  .word 0xffa30100
  .word 0xe7a00108
  .word 0x3c02006a
  .word 0xdc43d618
  .word 0x3c02006a
  .word 0xc440d620
  .word 0xffa300e0
  .word 0xe7a000e8
  .word 0x3c02006a
  .word 0xdc43d628
  .word 0x3c02006a
  .word 0xc440d630
  .word 0xffa300d0
  .word 0xe7a000d8
  .word 0x0c0e282c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430166
  .word 0x00000000
  .word 0x24041e59
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000160
  .word 0x00000000
  .word 0x3c023f80
  .word 0xafa20098
  .word 0xafa20084
  .word 0xafa20070
  .word 0x44806000
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
  .word 0x27a500d0
  .word 0x24060002
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40070
  .word 0x27a500e0
  .word 0xc60c0014
  .word 0x24060002
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40070
  .word 0x26050004
  .word 0x24060002
  .word 0x0c130d74
  .word 0x00000000
  .word 0x27a40120
  .word 0x27a50110
  .word 0x27a60070
  .word 0x0c131b18
  .word 0x00000000
  .word 0x27a400f0
  .word 0x27a50100
  .word 0x27a60070
  .word 0x0c131b18
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9463094c
  .word 0x30630010
  .word 0x10600072
  .word 0x00000000
  .word 0x3c03007e
  .word 0x94630952
  .word 0x30630008
  .word 0x10600129
  .word 0x00000000
  .word 0x8f86b8f0
  .word 0x10c0005c
  .word 0x00000000
  .word 0x24030003
  .word 0x10c3002e
  .word 0x00000000
  .word 0x24050002
  .word 0x10c50016
  .word 0x00000000
  .word 0x24040001
  .word 0x10c40003
  .word 0x00000000
  .word 0x10000051
  .word 0x00000000
  .word 0x240302f3
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6000008
  .word 0x3c0341a0
  .word 0xae030010
  .word 0x3c034359
  .word 0xae030014
  .word 0xae000018
  .word 0x3c03420c
  .word 0xae030100
  .word 0xaf84b8ec
  .word 0xaf85b8f0
  .word 0x1000010b
  .word 0x00000000
  .word 0x3c0243fa
  .word 0xae020008
  .word 0x3c0241a8
  .word 0xae020010
  .word 0x3c0242da
  .word 0xae020014
  .word 0xae000018
  .word 0x3c02420c
  .word 0xae020100
  .word 0xaf85b8ec
  .word 0x0c068474
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0xaf80b8f0
  .word 0x100000fa
  .word 0x00000000
  .word 0x24030003
  .word 0xaf83b8f0
  .word 0x100000f6
  .word 0x00000000
  .word 0xaf80b8f0
  .word 0xaf83b8ec
  .word 0x0c068474
  .word 0x00000000
  .word 0x24030001
  .word 0x144300ef
  .word 0x00000000
  .word 0x0c068464
  .word 0x00000000
  .word 0x46000506
  .word 0x0c068454
  .word 0x00000000
  .word 0x27a60030
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
  .word 0x27a40030
  .word 0x27a500c0
  .word 0x27a600b0
  .word 0x0c0edeb0
  .word 0x00000000
  .word 0xe6140100
  .word 0xc7a200b0
  .word 0xc7a100b4
  .word 0xc7a000b8
  .word 0xe6020004
  .word 0xe6010008
  .word 0xe600000c
  .word 0xc7a200c0
  .word 0xc7a100c4
  .word 0xc7a000c8
  .word 0xe6020010
  .word 0xe6010014
  .word 0xe6000018
  .word 0x100000cb
  .word 0x00000000
  .word 0x3c0343fa
  .word 0xae030008
  .word 0x3c0341d0
  .word 0xae030010
  .word 0x3c0342ec
  .word 0xae030014
  .word 0xae000018
  .word 0x3c03420c
  .word 0xae030100
  .word 0xaf80b8ec
  .word 0x24030001
  .word 0xaf83b8f0
  .word 0x100000bd
  .word 0x00000000
  .word 0xaf80b8ec
  .word 0xaf80b8f0
  .word 0x3c03007e
  .word 0x9063095f
  .word 0x2861003c
  .word 0x10200016
  .word 0x00000000
  .word 0x3c034120
  .word 0x44831800
  .word 0xc7a10120
  .word 0xc6000004
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4601181c
  .word 0xe6000004
  .word 0xc7a10124
  .word 0xc6000008
  .word 0x46001018
  .word 0x4601181c
  .word 0xe6000008
  .word 0xc7a10128
  .word 0xc600000c
  .word 0x46001018
  .word 0x4601181c
  .word 0xe600000c
  .word 0x10000017
  .word 0x00000000
  .word 0x286100bc
  .word 0x14200014
  .word 0x00000000
  .word 0x3c034120
  .word 0x44831800
  .word 0xc7a10120
  .word 0xc6000004
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4601181d
  .word 0xe6000004
  .word 0xc7a10124
  .word 0xc6000008
  .word 0x46001018
  .word 0x4601181d
  .word 0xe6000008
  .word 0xc7a10128
  .word 0xc600000c
  .word 0x46001018
  .word 0x4601181d
  .word 0xe600000c
  .word 0x3c03007e
  .word 0x9063095e
  .word 0x2861003c
  .word 0x10200016
  .word 0x00000000
  .word 0x3c034120
  .word 0x44831800
  .word 0xc7a100f0
  .word 0xc6000004
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4601181c
  .word 0xe6000004
  .word 0xc7a100f4
  .word 0xc6000008
  .word 0x46001018
  .word 0x4601181c
  .word 0xe6000008
  .word 0xc7a100f8
  .word 0xc600000c
  .word 0x46001018
  .word 0x4601181c
  .word 0xe600000c
  .word 0x10000017
  .word 0x00000000
  .word 0x286100bc
  .word 0x14200014
  .word 0x00000000
  .word 0x3c034120
  .word 0x44831800
  .word 0xc7a100f0
  .word 0xc6000004
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4601181d
  .word 0xe6000004
  .word 0xc7a100f4
  .word 0xc6000008
  .word 0x46001018
  .word 0x4601181d
  .word 0xe6000008
  .word 0xc7a100f8
  .word 0xc600000c
  .word 0x46001018
  .word 0x4601181d
  .word 0xe600000c
  .word 0x3c03007e
  .word 0x90630960
  .word 0x2861003c
  .word 0x10200009
  .word 0x00000000
  .word 0xc6010014
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46000800
  .word 0xe6000014
  .word 0x1000000a
  .word 0x00000000
  .word 0x286100bc
  .word 0x14200007
  .word 0x00000000
  .word 0xc6010014
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46000801
  .word 0xe6000014
  .word 0x3c03007e
  .word 0x94640952
  .word 0x30830004
  .word 0x10600009
  .word 0x00000000
  .word 0xc6010008
  .word 0x3c034120
  .word 0x44830000
  .word 0x00000000
  .word 0x46000800
  .word 0xe6000008
  .word 0x10000022
  .word 0x00000000
  .word 0x30830001
  .word 0x10600009
  .word 0x00000000
  .word 0xc6010008
  .word 0x3c034120
  .word 0x44830000
  .word 0x00000000
  .word 0x46000801
  .word 0xe6000008
  .word 0x10000017
  .word 0x00000000
  .word 0x3c03007e
  .word 0x90630961
  .word 0x2861003c
  .word 0x10200009
  .word 0x00000000
  .word 0xc6010010
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46000800
  .word 0xe6000010
  .word 0x1000000a
  .word 0x00000000
  .word 0x286100bc
  .word 0x14200007
  .word 0x00000000
  .word 0xc6010010
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46000801
  .word 0xe6000010
  .word 0x3c03007e
  .word 0x94640952
  .word 0x30830008
  .word 0x10600009
  .word 0x00000000
  .word 0xc6010100
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46000800
  .word 0xe6000100
  .word 0x1000000a
  .word 0x00000000
  .word 0x30830002
  .word 0x10600007
  .word 0x00000000
  .word 0xc6010100
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46000801
  .word 0xe6000100
  .word 0xdfbf0020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0130
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */




#pragma opt_propagation reset
// FUN_00362F20


void FUN_00362f20(int param_1)
{
  u32 lVar1;

  lVar1 = FUN_003b5d00();
  if (lVar1 == 0) {
    return;
  }

  lVar1 = FUN_0038a0b0(param_1);

  switch (lVar1) {
  case 0:
    FUN_0038a0c0(param_1,1);
    break;
  case 1:
    FUN_0038a0c0(param_1,0);
    break;
  default:
    break;
  }

  return;
}


// FUN_00362FA0


void FUN_00362fa0(int param_1)



{

  int lVar1;

  

  if ((*(int *)(param_1 + 8) != 0) && (lVar1 = FUN_0039eee0(param_1 + 0x82c), lVar1 != 0)) {

    FUN_0039f350(param_1 + 0x82c);

  }

  return;

}


// FUN_00362FF0


void FUN_00362ff0(int param_1)



{

  if ((param_1 != 0) && (*(int *)((int)param_1 + 0x8c) != 0)) {

    FUN_00386d50(param_1);

  }

  return;

}


/* W367 pragma probe: opt_dead_assignments off nd 1471 -> 1426; on nd 1471; object 2220/2224. Stacked loop invariants exceeded the window (nd 1465, object 2228/2224). */
#pragma opt_dead_assignments off
// FUN_00363030


#ifndef PC_BUILD
asm void FUN_00363030(int *param_1,u16 *param_2,u32 param_3,u8 *param_4)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0982d
  .word 0x00e0902d
  .word 0x8c830000
  .word 0x2404002e
  .word 0x106401ce
  .word 0x00000000
  .word 0x2404002d
  .word 0x10640186
  .word 0x00000000
  .word 0x2404002c
  .word 0x10640165
  .word 0x00000000
  .word 0x2404002a
  .word 0x10640138
  .word 0x00000000
  .word 0x24040020
  .word 0x1064020a
  .word 0x00000000
  .word 0x2404001d
  .word 0x1064011c
  .word 0x00000000
  .word 0x2404001c
  .word 0x10640104
  .word 0x00000000
  .word 0x24040007
  .word 0x106400e7
  .word 0x00000000
  .word 0x24040013
  .word 0x106400a9
  .word 0x00000000
  .word 0x24040032
  .word 0x1064008c
  .word 0x00000000
  .word 0x24040005
  .word 0x10640049
  .word 0x00000000
  .word 0x24040029
  .word 0x1064003e
  .word 0x00000000
  .word 0x24040012
  .word 0x106401f2
  .word 0x00000000
  .word 0x24040015
  .word 0x106401ef
  .word 0x00000000
  .word 0x24040014
  .word 0x106401ec
  .word 0x00000000
  .word 0x2404001a
  .word 0x106401e9
  .word 0x00000000
  .word 0x24040003
  .word 0x106401e6
  .word 0x00000000
  .word 0x2404001b
  .word 0x106401e3
  .word 0x00000000
  .word 0x24040017
  .word 0x106401e0
  .word 0x00000000
  .word 0x24040016
  .word 0x106401dd
  .word 0x00000000
  .word 0x24040011
  .word 0x106401da
  .word 0x00000000
  .word 0x24040010
  .word 0x106401d7
  .word 0x00000000
  .word 0x2404000f
  .word 0x106401d4
  .word 0x00000000
  .word 0x2404000e
  .word 0x106401d1
  .word 0x00000000
  .word 0x2404000d
  .word 0x106401ce
  .word 0x00000000
  .word 0x2404000b
  .word 0x106401cb
  .word 0x00000000
  .word 0x2404000a
  .word 0x106401c8
  .word 0x00000000
  .word 0x2404000c
  .word 0x106401c5
  .word 0x00000000
  .word 0x24040006
  .word 0x106401c2
  .word 0x00000000
  .word 0x24040002
  .word 0x106401bf
  .word 0x00000000
  .word 0x24040001
  .word 0x106401bc
  .word 0x00000000
  .word 0x106001ba
  .word 0x00000000
  .word 0x100001b8
  .word 0x00000000
  .word 0x96630000
  .word 0x14c301b5
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0e786c
  .word 0x00000000
  .word 0x100001b0
  .word 0x00000000
  .word 0x8e430004
  .word 0x30630010
  .word 0x0003202b
  .word 0x24030001
  .word 0x108301aa
  .word 0x00000000
  .word 0x96630000
  .word 0x14c301a7
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d640
  .word 0x00c0282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x82650012
  .word 0x24040003
  .word 0x10a40029
  .word 0x00000000
  .word 0x24030002
  .word 0x10a3001c
  .word 0x00000000
  .word 0x24030001
  .word 0x10a30014
  .word 0x00000000
  .word 0x10a00003
  .word 0x00000000
  .word 0x10000194
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0e1b84
  .word 0x00000000
  .word 0x86650010
  .word 0x0040202d
  .word 0x24060003
  .word 0x0c0e54b4
  .word 0x00000000
  .word 0x86650010
  .word 0x3c04006a
  .word 0x2484d660
  .word 0x0c14896a
  .word 0x00000000
  .word 0x10000185
  .word 0x00000000
  .word 0x86650010
  .word 0x0c0e54d4
  .word 0x00000000
  .word 0x10000180
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0e1b84
  .word 0x00000000
  .word 0x86650010
  .word 0x0040202d
  .word 0x24060004
  .word 0x0c0e54b4
  .word 0x00000000
  .word 0x10000176
  .word 0x00000000
  .word 0x86650010
  .word 0x24040004
  .word 0x0c0e54d4
  .word 0x00000000
  .word 0x10000170
  .word 0x00000000
  .word 0x96630000
  .word 0x14c3016d
  .word 0x00000000
  .word 0x82630010
  .word 0x24040001
  .word 0x1064000c
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000165
  .word 0x00000000
  .word 0x82650011
  .word 0x82660012
  .word 0x82670013
  .word 0x0c042938
  .word 0x00000000
  .word 0x1000015e
  .word 0x00000000
  .word 0x82650011
  .word 0x82660012
  .word 0x82670013
  .word 0x0000202d
  .word 0x0c042938
  .word 0x00000000
  .word 0x10000156
  .word 0x00000000
  .word 0x8e430004
  .word 0x30630010
  .word 0x0003202b
  .word 0x24030001
  .word 0x10830150
  .word 0x00000000
  .word 0x96630000
  .word 0x14c3014d
  .word 0x00000000
  .word 0x86630010
  .word 0x2c610007
  .word 0x10200028
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484a3e0
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x86640012
  .word 0x0c0e549c
  .word 0x00000000
  .word 0x1000013d
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0e1b84
  .word 0x00000000
  .word 0x86650012
  .word 0x0040202d
  .word 0x0c0e54ac
  .word 0x00000000
  .word 0x10000134
  .word 0x00000000
  .word 0x24040078
  .word 0x0c0423f4
  .word 0x00000000
  .word 0x1000012f
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0e1b84
  .word 0x00000000
  .word 0x86650012
  .word 0x0040202d
  .word 0x0c0e54a8
  .word 0x00000000
  .word 0x10000126
  .word 0x00000000
  .word 0x0c0423dc
  .word 0x00000000
  .word 0x10000122
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d580
  .word 0x24050a56
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x1000011b
  .word 0x00000000
  .word 0x96630002
  .word 0x1460000c
  .word 0x00000000
  .word 0x86630010
  .word 0x14600009
  .word 0x00000000
  .word 0x8e430004
  .word 0x2402fffd
  .word 0x00621024
  .word 0xae420004
  .word 0x0c0ef320
  .word 0x00000000
  .word 0x1000010d
  .word 0x00000000
  .word 0x96630000
  .word 0x14c3010a
  .word 0x00000000
  .word 0x8e420004
  .word 0x34420002
  .word 0xae420004
  .word 0x96640002
  .word 0x86650010
  .word 0x0c0ef2fc
  .word 0x00000000
  .word 0x10000101
  .word 0x00000000
  .word 0x96630000
  .word 0x14c300fe
  .word 0x00000000
  .word 0x82640010
  .word 0x14800009
  .word 0x00000000
  .word 0x86640014
  .word 0x86650016
  .word 0x86660018
  .word 0x8667001a
  .word 0x0c040f0c
  .word 0x00000000
  .word 0x100000f3
  .word 0x00000000
  .word 0x24030001
  .word 0x148300f0
  .word 0x00000000
  .word 0x0c040f2c
  .word 0x00000000
  .word 0x100000ec
  .word 0x00000000
  .word 0x8e440924
  .word 0x1080000a
  .word 0x00000000
  .word 0x0c065518
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x8e440924
  .word 0x0c065408
  .word 0x00000000
  .word 0xae400924
  .word 0x8e44092c
  .word 0x86650010
  .word 0x0c042f08
  .word 0x00000000
  .word 0xae420924
  .word 0x8e430004
  .word 0x34634000
  .word 0xae430004
  .word 0x100000d6
  .word 0x00000000
  .word 0x96630000
  .word 0x14c300d3
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x2405ffff
  .word 0x2c610006
  .word 0x10200018
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484a3c0
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x86650016
  .word 0x1000000e
  .word 0x00000000
  .word 0x86650018
  .word 0x1000000b
  .word 0x00000000
  .word 0x8665001a
  .word 0x10000008
  .word 0x00000000
  .word 0x86650014
  .word 0x10000005
  .word 0x00000000
  .word 0x86650012
  .word 0x10000002
  .word 0x00000000
  .word 0x86650010
  .word 0x2403ffff
  .word 0x10a300b1
  .word 0x00000000
  .word 0xae450028
  .word 0x24030001
  .word 0xae430024
  .word 0x100000ac
  .word 0x00000000
  .word 0x96630000
  .word 0x14c300a9
  .word 0x00000000
  .word 0x0c05b750
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x240300ff
  .word 0x108300a2
  .word 0x00000000
  .word 0x0c05b6e8
  .word 0x00000000
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x00031080
  .word 0x00432021
  .word 0x0c0e548c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x86630010
  .word 0x10000002
  .word 0x00000000
  .word 0x86630012
  .word 0xae430028
  .word 0x24030001
  .word 0xae430024
  .word 0x1000008e
  .word 0x00000000
  .word 0x96630000
  .word 0x14c3008b
  .word 0x00000000
  .word 0x82630010
  .word 0x10600088
  .word 0x00000000
  .word 0x2411ffff
  .word 0x0000802d
  .word 0x2464ffff
  .word 0x0c05b794
  .word 0x00000000
  .word 0x304400ff
  .word 0x92630014
  .word 0xafa30050
  .word 0x92630015
  .word 0xafa30054
  .word 0x92630016
  .word 0xafa30058
  .word 0x0000282d
  .word 0x1000000b
  .word 0x00000000
  .word 0x00051880
  .word 0x007d1821
  .word 0x8c630050
  .word 0x0064182a
  .word 0x14600004
  .word 0x00000000
  .word 0x00a0882d
  .word 0x10000005
  .word 0x00000000
  .word 0x24a50001
  .word 0x28a30004
  .word 0x1460fff4
  .word 0x00000000
  .word 0x2403ffff
  .word 0x1223001b
  .word 0x00000000
  .word 0x24030002
  .word 0x1223000e
  .word 0x00000000
  .word 0x24030001
  .word 0x12230008
  .word 0x00000000
  .word 0x12200003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x86700018
  .word 0x1000000f
  .word 0x00000000
  .word 0x8670001a
  .word 0x1000000c
  .word 0x00000000
  .word 0x8670001c
  .word 0x10000009
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d580
  .word 0x24050b21
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x8670001e
  .word 0xae500028
  .word 0x24030001
  .word 0xae430024
  .word 0x10000049
  .word 0x00000000
  .word 0x96630000
  .word 0x14c30046
  .word 0x00000000
  .word 0x0c05b750
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0000882d
  .word 0x240300ff
  .word 0x1083003e
  .word 0x00000000
  .word 0x0c0f0bb8
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000002
  .word 0x00000000
  .word 0x24110001
  .word 0x24030001
  .word 0x16230031
  .word 0x00000000
  .word 0x2644082c
  .word 0x24050007
  .word 0x8e060008
  .word 0x0c0e7bbc
  .word 0x00000000
  .word 0x8e040004
  .word 0x8e050008
  .word 0x0c0f104c
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x2644082c
  .word 0x24050008
  .word 0x0040302d
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x0000202d
  .word 0x2605000c
  .word 0x0c0efa88
  .word 0x00000000
  .word 0x304400ff
  .word 0x0c0f0fd0
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x2644082c
  .word 0x24050009
  .word 0x0040302d
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x27a4005e
  .word 0x0c05cb14
  .word 0x00000000
  .word 0x1040000b
  .word 0x00000000
  .word 0x87a4005e
  .word 0x0c0f0ff8
  .word 0x00000000
  .word 0x0040302d
  .word 0x10c00005
  .word 0x00000000
  .word 0x2644082c
  .word 0x2405000a
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x86630010
  .word 0x10000002
  .word 0x00000000
  .word 0x86630012
  .word 0xae430028
  .word 0x24030001
  .word 0xae430024
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
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


#pragma opt_dead_assignments reset
/* W367 pragma probe: opt_lifetimes on nd 1957 -> 1953; off nd 1957; object 2828/2960. */
#pragma opt_lifetimes on
// FUN_003638E0
#pragma push
#pragma schedule on


#ifndef PC_BUILD
asm void FUN_003638e0(int *param_1,int param_2,int param_3,u32 param_4,int param_5)
{
  .set noreorder
  .word 0x27bdff50
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
  .word 0x00c0882d
  .word 0x00e0982d
  .word 0x0100802d
  .word 0x24040001
  .word 0x8d060004
  .word 0x12200004
  .word 0x00000000
  .word 0x96280000
  .word 0x10000002
  .word 0x00000000
  .word 0x8e080010
  .word 0x10a00004
  .word 0x00000000
  .word 0x94a30000
  .word 0x10000002
  .word 0x00000000
  .word 0x8e030014
  .word 0x00683823
  .word 0x10e0000e
  .word 0x00000000
  .word 0x02681823
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x44870000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x44806000
  .word 0x8e430000
  .word 0x24070024
  .word 0x1067023b
  .word 0x00000000
  .word 0x2407002b
  .word 0x10670204
  .word 0x00000000
  .word 0x24070027
  .word 0x106701e6
  .word 0x00000000
  .word 0x24070019
  .word 0x1067029a
  .word 0x00000000
  .word 0x24070008
  .word 0x1067019c
  .word 0x00000000
  .word 0x24070011
  .word 0x1067017d
  .word 0x00000000
  .word 0x24070010
  .word 0x1067015e
  .word 0x00000000
  .word 0x2407001b
  .word 0x1067013f
  .word 0x00000000
  .word 0x24070017
  .word 0x10670120
  .word 0x00000000
  .word 0x2407000f
  .word 0x10670101
  .word 0x00000000
  .word 0x2407000e
  .word 0x106700e2
  .word 0x00000000
  .word 0x2407000d
  .word 0x106700c3
  .word 0x00000000
  .word 0x2407000b
  .word 0x106700b4
  .word 0x00000000
  .word 0x2407000a
  .word 0x1067004e
  .word 0x00000000
  .word 0x24040006
  .word 0x10640003
  .word 0x00000000
  .word 0x10000277
  .word 0x00000000
  .word 0x16200011
  .word 0x00000000
  .word 0x30c30008
  .word 0x14600272
  .word 0x00000000
  .word 0x8e0408dc
  .word 0x24030001
  .word 0x1483026e
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d670
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0c041c6c
  .word 0x00000000
  .word 0xae0008dc
  .word 0x10000265
  .word 0x00000000
  .word 0x30c30010
  .word 0x0003182b
  .word 0x24050001
  .word 0x10650260
  .word 0x00000000
  .word 0x96230000
  .word 0x1473025d
  .word 0x00000000
  .word 0x86230010
  .word 0x10650011
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000256
  .word 0x00000000
  .word 0xae0508dc
  .word 0x0c042170
  .word 0x00000000
  .word 0x96230002
  .word 0x10600250
  .word 0x00000000
  .word 0x0003243c
  .word 0x0004243f
  .word 0x0c0421a8
  .word 0x00000000
  .word 0x1000024a
  .word 0x00000000
  .word 0x86240012
  .word 0x24030007
  .word 0x14830006
  .word 0x00000000
  .word 0x8203004c
  .word 0x34630004
  .word 0xa203004c
  .word 0x10000241
  .word 0x00000000
  .word 0xae0508dc
  .word 0x0c04215c
  .word 0x00000000
  .word 0x24030001
  .word 0x1443023b
  .word 0x00000000
  .word 0x86240012
  .word 0x0c04219c
  .word 0x00000000
  .word 0x96230002
  .word 0x10600235
  .word 0x00000000
  .word 0x0003243c
  .word 0x0004243f
  .word 0x0c0421a8
  .word 0x00000000
  .word 0x1000022f
  .word 0x00000000
  .word 0x12200005
  .word 0x00000000
  .word 0x8e230048
  .word 0x8e240004
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x10a00004
  .word 0x00000000
  .word 0x8ca60048
  .word 0x10000002
  .word 0x00000000
  .word 0x0000302d
  .word 0x14600003
  .word 0x00000000
  .word 0x10c0021e
  .word 0x00000000
  .word 0x0060282d
  .word 0x3c070096
  .word 0x24e78440
  .word 0x0c0e501c
  .word 0x00000000
  .word 0x82450022
  .word 0x10a00216
  .word 0x00000000
  .word 0x24040001
  .word 0x14a4000f
  .word 0x00000000
  .word 0x12200211
  .word 0x00000000
  .word 0x8e440004
  .word 0x0000302d
  .word 0x3c070096
  .word 0x24e78440
  .word 0x3c080096
  .word 0x25088450
  .word 0x3c090096
  .word 0x25298460
  .word 0x0c0e3558
  .word 0x00000000
  .word 0x10000205
  .word 0x00000000
  .word 0x0000a02d
  .word 0x24030003
  .word 0x14a30013
  .word 0x00000000
  .word 0x96440024
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040a02d
  .word 0x128001fb
  .word 0x00000000
  .word 0x122001f9
  .word 0x00000000
  .word 0x96240002
  .word 0x1080001e
  .word 0x00000000
  .word 0x96230000
  .word 0x00641821
  .word 0x0073082a
  .word 0x10200019
  .word 0x00000000
  .word 0x100001ef
  .word 0x00000000
  .word 0x24030002
  .word 0x14a3000f
  .word 0x00000000
  .word 0x122001ea
  .word 0x00000000
  .word 0x96230000
  .word 0x1473000f
  .word 0x00000000
  .word 0x8623001c
  .word 0x1464000c
  .word 0x00000000
  .word 0x8e030004
  .word 0x30630001
  .word 0x14600008
  .word 0x00000000
  .word 0x100001de
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d580
  .word 0x24050d69
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x82450022
  .word 0x8e440004
  .word 0x0280302d
  .word 0x3c070096
  .word 0x24e78440
  .word 0x3c080096
  .word 0x25088450
  .word 0x3c090096
  .word 0x25298460
  .word 0x0c0e3558
  .word 0x00000000
  .word 0x100001cc
  .word 0x00000000
  .word 0x12200004
  .word 0x00000000
  .word 0x8e230048
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x146001c4
  .word 0x00000000
  .word 0x10a00001
  .word 0x00000000
  .word 0x100001c0
  .word 0x00000000
  .word 0x12200004
  .word 0x00000000
  .word 0x8e240048
  .word 0x10000002
  .word 0x00000000
  .word 0x0000202d
  .word 0x10a00004
  .word 0x00000000
  .word 0x8ca30048
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x14800003
  .word 0x00000000
  .word 0x106001b0
  .word 0x00000000
  .word 0x3c030096
  .word 0x8c638470
  .word 0x00031e02
  .word 0x14600004
  .word 0x00000000
  .word 0xae0000ec
  .word 0x100001a8
  .word 0x00000000
  .word 0x24030001
  .word 0xae0300ec
  .word 0x100001a4
  .word 0x00000000
  .word 0x12200004
  .word 0x00000000
  .word 0x8e240048
  .word 0x10000002
  .word 0x00000000
  .word 0x0000202d
  .word 0x10a00004
  .word 0x00000000
  .word 0x8ca30048
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x14800003
  .word 0x00000000
  .word 0x10600194
  .word 0x00000000
  .word 0x3c030096
  .word 0x8c6384a4
  .word 0x00031e02
  .word 0x14600004
  .word 0x00000000
  .word 0xae0000f0
  .word 0x1000018c
  .word 0x00000000
  .word 0x24030001
  .word 0xae0300f0
  .word 0x10000188
  .word 0x00000000
  .word 0x12200004
  .word 0x00000000
  .word 0x8e240048
  .word 0x10000002
  .word 0x00000000
  .word 0x0000202d
  .word 0x10a00004
  .word 0x00000000
  .word 0x8ca30048
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x14800003
  .word 0x00000000
  .word 0x10600178
  .word 0x00000000
  .word 0x3c030096
  .word 0x8c63852c
  .word 0x00031e02
  .word 0x14600004
  .word 0x00000000
  .word 0xae0000f4
  .word 0x10000170
  .word 0x00000000
  .word 0x24030001
  .word 0xae0300f4
  .word 0x1000016c
  .word 0x00000000
  .word 0x12200004
  .word 0x00000000
  .word 0x8e240048
  .word 0x10000002
  .word 0x00000000
  .word 0x0000202d
  .word 0x10a00004
  .word 0x00000000
  .word 0x8ca30048
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x14800003
  .word 0x00000000
  .word 0x1060015c
  .word 0x00000000
  .word 0x3c030096
  .word 0x8c63855c
  .word 0x00031e02
  .word 0x14600004
  .word 0x00000000
  .word 0xae000100
  .word 0x10000154
  .word 0x00000000
  .word 0x24030001
  .word 0xae030100
  .word 0x10000150
  .word 0x00000000
  .word 0x12200004
  .word 0x00000000
  .word 0x8e240048
  .word 0x10000002
  .word 0x00000000
  .word 0x0000202d
  .word 0x10a00004
  .word 0x00000000
  .word 0x8ca30048
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x14800003
  .word 0x00000000
  .word 0x10600140
  .word 0x00000000
  .word 0x3c030096
  .word 0x8c638580
  .word 0x00031e02
  .word 0x14600004
  .word 0x00000000
  .word 0xae000278
  .word 0x10000138
  .word 0x00000000
  .word 0x24030001
  .word 0xae030278
  .word 0x10000134
  .word 0x00000000
  .word 0x12200004
  .word 0x00000000
  .word 0x8e240048
  .word 0x10000002
  .word 0x00000000
  .word 0x0000202d
  .word 0x10a00004
  .word 0x00000000
  .word 0x8ca30048
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x14800003
  .word 0x00000000
  .word 0x10600124
  .word 0x00000000
  .word 0x3c030096
  .word 0x8c6384d0
  .word 0x00031e02
  .word 0x14600004
  .word 0x00000000
  .word 0xae0000f8
  .word 0x1000011c
  .word 0x00000000
  .word 0x24030001
  .word 0xae0300f8
  .word 0x10000118
  .word 0x00000000
  .word 0x12200004
  .word 0x00000000
  .word 0x8e240048
  .word 0x10000002
  .word 0x00000000
  .word 0x0000202d
  .word 0x10a00004
  .word 0x00000000
  .word 0x8ca30048
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x14800003
  .word 0x00000000
  .word 0x10600108
  .word 0x00000000
  .word 0x3c030096
  .word 0x8c6384fc
  .word 0x00031e02
  .word 0x14600004
  .word 0x00000000
  .word 0xae0000fc
  .word 0x10000100
  .word 0x00000000
  .word 0x24030001
  .word 0xae0300fc
  .word 0x100000fc
  .word 0x00000000
  .word 0x1220003d
  .word 0x00000000
  .word 0x86230014
  .word 0x14600005
  .word 0x00000000
  .word 0x86280010
  .word 0x86240012
  .word 0x10000023
  .word 0x00000000
  .word 0x8e27004c
  .word 0x14e00005
  .word 0x00000000
  .word 0x86280010
  .word 0x86240012
  .word 0x1000001c
  .word 0x00000000
  .word 0x96240000
  .word 0x02643023
  .word 0x94e30000
  .word 0x00642823
  .word 0x00a62023
  .word 0x86230010
  .word 0x00641818
  .word 0x84e30010
  .word 0x00000000
  .word 0x70661801
  .word 0x0065001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001812
  .word 0x0003443c
  .word 0x0008443f
  .word 0x86230012
  .word 0x70641818
  .word 0x84e30012
  .word 0x00000000
  .word 0x70661821
  .word 0x0065001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001812
  .word 0x0003243c
  .word 0x0004243f
  .word 0x00081c3c
  .word 0x00031c3f
  .word 0x1460000b
  .word 0x00000000
  .word 0x00041c3c
  .word 0x00031c3f
  .word 0x14600007
  .word 0x00000000
  .word 0x8e040004
  .word 0x2403fffb
  .word 0x00831824
  .word 0xae030004
  .word 0x100000c3
  .word 0x00000000
  .word 0x8e030004
  .word 0x34630004
  .word 0xae030004
  .word 0x100000be
  .word 0x00000000
  .word 0x8e040004
  .word 0x2403fffb
  .word 0x00831824
  .word 0xae030004
  .word 0x100000b8
  .word 0x00000000
  .word 0x122000b6
  .word 0x00000000
  .word 0x96230000
  .word 0x147300b3
  .word 0x00000000
  .word 0x82220010
  .word 0x14400007
  .word 0x00000000
  .word 0xaf80b904
  .word 0x0000202d
  .word 0x0c0dbd24
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0dbd24
  .word 0x00000000
  .word 0x86220014
  .word 0xaf82b904
  .word 0x3c04006a
  .word 0x2484d680
  .word 0x8f85b900
  .word 0x8f86b904
  .word 0x0c14896a
  .word 0x00000000
  .word 0x1000009d
  .word 0x00000000
  .word 0x1620000d
  .word 0x00000000
  .word 0x30c30008
  .word 0x14600098
  .word 0x00000000
  .word 0x8e030010
  .word 0x16630095
  .word 0x00000000
  .word 0x960508d4
  .word 0x24040001
  .word 0x0c05b5ac
  .word 0x00000000
  .word 0x1000008f
  .word 0x00000000
  .word 0x96230000
  .word 0x1663008c
  .word 0x00000000
  .word 0x2404ffff
  .word 0x82230010
  .word 0x2c610006
  .word 0x10200018
  .word 0x00000000
  .word 0x3c05007c
  .word 0x24a5a400
  .word 0x00031880
  .word 0x00651821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x24040005
  .word 0x1000000e
  .word 0x00000000
  .word 0x24040004
  .word 0x1000000b
  .word 0x00000000
  .word 0x24040003
  .word 0x10000008
  .word 0x00000000
  .word 0x0000202d
  .word 0x10000005
  .word 0x00000000
  .word 0x24040001
  .word 0x10000002
  .word 0x00000000
  .word 0x24040002
  .word 0x2403ffff
  .word 0x1083006d
  .word 0x00000000
  .word 0x0c05ca08
  .word 0x00000000
  .word 0x10000069
  .word 0x00000000
  .word 0x16200009
  .word 0x00000000
  .word 0x30c30008
  .word 0x14600064
  .word 0x00000000
  .word 0x8e440004
  .word 0x0c0e5c0c
  .word 0x00000000
  .word 0x1000005f
  .word 0x00000000
  .word 0x96230000
  .word 0x1663005c
  .word 0x00000000
  .word 0x82240010
  .word 0x24030002
  .word 0x10830055
  .word 0x00000000
  .word 0x24030001
  .word 0x10830030
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000051
  .word 0x00000000
  .word 0x0000b02d
  .word 0x0000a82d
  .word 0x0000a02d
  .word 0x0000982d
  .word 0x8637001c
  .word 0x863e001e
  .word 0x82220020
  .word 0x14400007
  .word 0x00000000
  .word 0x86360014
  .word 0x86350016
  .word 0x86340018
  .word 0x8633001a
  .word 0x10000012
  .word 0x00000000
  .word 0x14430010
  .word 0x00000000
  .word 0x82250021
  .word 0x0200202d
  .word 0x27a600ac
  .word 0x27a700a8
  .word 0x27a800a4
  .word 0x27a900a0
  .word 0x0c0e5e1c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x8fb600ac
  .word 0x8fb500a8
  .word 0x8fb400a4
  .word 0x8fb300a0
  .word 0x8e440004
  .word 0x02e0282d
  .word 0x03c0302d
  .word 0x02c0382d
  .word 0x02a0402d
  .word 0x0280482d
  .word 0x0260502d
  .word 0x0c0e5b1c
  .word 0x00000000
  .word 0x10000026
  .word 0x00000000
  .word 0x8e440004
  .word 0x0c0e5bb4
  .word 0x00000000
  .word 0x24040001
  .word 0x14440018
  .word 0x00000000
  .word 0x8e430004
  .word 0x24020002
  .word 0x10620011
  .word 0x00000000
  .word 0x1064000a
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x8e020004
  .word 0x34420200
  .word 0xae020004
  .word 0x10000009
  .word 0x00000000
  .word 0x8e020004
  .word 0x34420400
  .word 0xae020004
  .word 0x10000004
  .word 0x00000000
  .word 0x8e020004
  .word 0x34420800
  .word 0xae020004
  .word 0x8e440004
  .word 0x0c0e5b8c
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x8e440004
  .word 0x0c0e5bd4
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
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop


// b210 floor: the only residual is call-argument setup order. At +0xc8/+0xcc,
// retail loads a2 before a0; at +0xec..+0x100, retail loads v0/addiu/andi,
// a3/t0 before a0, while b210 emits the independent a0 load first.
#pragma opt_lifetimes reset
// FUN_00364470

u16 * FUN_00364470(u32 param_1,int param_2)
{
  u16 *puVar1;
  u32 uVar2;
  int lVar3;
  u16 *puVar5;
  u32 uVar4;
  f32 stack[3];

  uVar4 = 0xffffffff;
  puVar5 = (u16 *)0x0;
  for (puVar1 = *(u16 **)(param_2 + 0x6c); puVar1 != (u16 *)0x0;
      puVar1 = *(u16 **)(puVar1 + 0x26)) {
    if (((((char)puVar1[8] == '\x04') && (lVar3 = FUN_00360ed0(puVar1), lVar3 != 0)) &&
        (uVar2 = (u32)*puVar1, (int)uVar2 <= (int)param_1)) && ((int)uVar4 < (int)uVar2)) {
      uVar4 = uVar2;
      puVar5 = puVar1;
    }
  }
  if (puVar5 == (u16 *)0x0) {
    return puVar5;
  }
  if (*puVar5 != param_1) {
    return puVar5;
  }
  stack[0] = 0;
  stack[1] = *(f32 *)(puVar5 + 10);
  stack[2] = 0;
  {
    short third;
    u16 first;
    third = *(volatile short *)(puVar5 + 0x12);
    first = *(volatile u16 *)(param_2 + 0xc);
    FUN_003b8b30(first,stack,third,0);
  }
  if ((char)puVar5[0x14] != '\0') {
    FUN_003bb1d0_evt_main(*(u16 *)(param_2 + 0xc),2,(u8)(*(char *)((int)puVar5 + 0x29) + 1),
                          (char)puVar5[0x15],*(char *)((int)puVar5 + 0x2b));
    FUN_005225a8((const char *)(DAT_006a0000 - 0x2960));
  }
  return puVar5;
}

// W295: the "call-argument setup order" here was fixable: retail loads the lh
// (arg3) before the stack fills and the lhu (arg1) last - two volatile-ordered
// temps reproduce it (same lever as FUN_00364470).
// FUN_003645C0

u16 * FUN_003645c0(u32 param_1,int param_2)
{
  u16 *puVar1;
  u32 uVar2;
  int lVar3;
  u16 *puVar5;
  u32 uVar4;
  f32 stack[3];

  uVar4 = 0xffffffff;
  puVar5 = (u16 *)0x0;
  for (puVar1 = *(u16 **)(param_2 + 0x6c); puVar1 != (u16 *)0x0;
      puVar1 = *(u16 **)(puVar1 + 0x26)) {
    if (((((char)puVar1[8] == '\n') && (lVar3 = FUN_00360ed0(puVar1), lVar3 != 0)) &&
        (uVar2 = (u32)*puVar1, (int)uVar2 <= (int)param_1)) && ((int)uVar4 < (int)uVar2)) {
      uVar4 = uVar2;
      puVar5 = puVar1;
    }
  }
  if (puVar5 == (u16 *)0x0) {
    return puVar5;
  }
  if (*puVar5 != param_1) {
    return puVar5;
  }
  {
    short third;
    u16 first;
    third = *(volatile short *)(puVar5 + 10);
    stack[2] = *(f32 *)(puVar5 + 0xc);
    stack[1] = stack[2];
    stack[0] = stack[2];
    first = *(volatile u16 *)(param_2 + 0xc);
    FUN_003b8c30(first,stack,third);
  }
  return puVar5;
}


/* W415: reordering only the cVar1==0/1 branches regressed nd 280 -> 286; switching
   on explicit cases 0, 1, and 2 instead gives nd 272, object 504/528. */
/* W367 pragma probe: opt_common_subs off nd 296 -> 280; on nd 296; object 512/528. */
#pragma opt_common_subs off
// FUN_003646D0


asm u16 * FUN_003646d0(u32 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x2410ffff
  .word 0x0000902d
  .word 0x8cb1006c
  .word 0x10000017
  .word 0x00000000
  .word 0x82230010
  .word 0x24020003
  .word 0x14620012
  .word 0x00000000
  .word 0x86220016
  .word 0x1040000f
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0d83b4
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x96220000
  .word 0x0282082a
  .word 0x14200006
  .word 0x00000000
  .word 0x0202082a
  .word 0x10200003
  .word 0x00000000
  .word 0x0040802d
  .word 0x0220902d
  .word 0x8e31004c
  .word 0x1620ffe9
  .word 0x00000000
  .word 0x16400004
  .word 0x00000000
  .word 0x0240102d
  .word 0x1000004f
  .word 0x00000000
  .word 0x96420000
  .word 0x10540004
  .word 0x00000000
  .word 0x0240102d
  .word 0x10000049
  .word 0x00000000
  .word 0x86500016
  .word 0x82430014
  .word 0x24020002
  .word 0x10620043
  .word 0x00000000
  .word 0x24020001
  .word 0x1062000b
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000003c
  .word 0x00000000
  .word 0x3205ffff
  .word 0x9664000c
  .word 0x0c0ee11c
  .word 0x00000000
  .word 0x10000036
  .word 0x00000000
  .word 0x82440015
  .word 0x0c0e2a40
  .word 0x00000000
  .word 0x46000506
  .word 0xafa0007c
  .word 0x9664000c
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040882d
  .word 0x3204ffff
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040802d
  .word 0x12200023
  .word 0x00000000
  .word 0x12000021
  .word 0x00000000
  .word 0x0220202d
  .word 0x26050004
  .word 0x4600a306
  .word 0x0c0ee1b0
  .word 0x00000000
  .word 0x26240004
  .word 0x26050004
  .word 0x27a6007c
  .word 0x0c0ee1a4
  .word 0x00000000
  .word 0x24030001
  .word 0x14430014
  .word 0x00000000
  .word 0x27a30070
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
  .word 0xc7a0007c
  .word 0xe7a00074
  .word 0x0220202d
  .word 0x27a50070
  .word 0x2406000f
  .word 0x0000382d
  .word 0x0c0ee298
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d6b0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0240102d
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
}


#pragma opt_common_subs reset
// FUN_003648E0


void FUN_003648e0(int param_1,u32 param_2,int param_3)



{

  u16 *puVar1;

  int lVar2;

  u32 uVar3;

  u16 *puVar5;
  u32 uVar4;

  

  uVar4 = 0xffffffff;

  puVar5 = (u16 *)0x0;

  for (puVar1 = *(u16 **)(param_3 + 0x6c); puVar1 != (u16 *)0x0;

      puVar1 = *(u16 **)(puVar1 + 0x26)) {

    if (((((char)puVar1[8] == '\0') && (lVar2 = FUN_00360ed0(puVar1), lVar2 != 0)) &&

        (uVar3 = (u32)*puVar1, (int)uVar3 <= (int)param_2)) && ((int)uVar4 < (int)uVar3)) {

      uVar4 = uVar3;

      puVar5 = puVar1;

    }

  }

  if (puVar5 == (u16 *)0x0) {
    if ((*(u32 *)(param_1 + 4) & 8) == 0) {
      if ((*(u32 *)(param_3 + 0x58) & 2) != 0) {
        FUN_003b9550(*(u16 *)(param_3 + 0xc),1);
      }
      else {
        FUN_003b9550(*(u16 *)(param_3 + 0xc),0);
      }
    }
    return;
  }

  if (*puVar5 == param_2) {
    if ((char)puVar5[10] == '\0') {
      FUN_003b9550(*(u16 *)(param_3 + 0xc),1);
    }
    else {
      FUN_003b9550(*(u16 *)(param_3 + 0xc),0);
    }
  }

  return;

}


// FUN_00364A30


void FUN_00364a30(u32 param_1,int param_2)



{

  u16 *puVar1;

  int lVar2;

  u32 uVar3;

  u16 *puVar5;

  u32 uVar4;

  

  uVar4 = 0xffffffff;

  puVar5 = (u16 *)0x0;

  for (puVar1 = *(u16 **)(param_2 + 0x6c); puVar1 != (u16 *)0x0;

      puVar1 = *(u16 **)(puVar1 + 0x26)) {

    if (((char)puVar1[8] == '\t') && (lVar2 = FUN_00360ed0(puVar1), lVar2 != 0)) {

      uVar3 = (u32)*puVar1;

      if (((int)uVar3 <= (int)param_1) && ((int)uVar4 < (int)uVar3)) {

        uVar4 = uVar3;

        puVar5 = puVar1;

      }

    }

  }

  if ((puVar5 != (u16 *)0x0) && (*puVar5 == param_1)) {

    lVar2 = (char)puVar5[10] == '\0';
    FUN_003bb180(*(u16 *)(param_2 + 0xc),lVar2);

  }

  return;

}


// FUN_00364B10


asm u16 * FUN_00364b10(u32 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdfe20
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x2410ffff
  .word 0x0000902d
  .word 0x8cb1006c
  .word 0x10000014
  .word 0x00000000
  .word 0x82230010
  .word 0x24020001
  .word 0x1462000f
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0d83b4
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x96220000
  .word 0x0282082a
  .word 0x14200006
  .word 0x00000000
  .word 0x0202082a
  .word 0x10200003
  .word 0x00000000
  .word 0x0040802d
  .word 0x0220902d
  .word 0x8e31004c
  .word 0x1620ffec
  .word 0x00000000
  .word 0x16400004
  .word 0x00000000
  .word 0x0240102d
  .word 0x1000009a
  .word 0x00000000
  .word 0x96420000
  .word 0x10540004
  .word 0x00000000
  .word 0x0240102d
  .word 0x10000094
  .word 0x00000000
  .word 0x82430014
  .word 0x24020002
  .word 0x10620079
  .word 0x00000000
  .word 0x24020001
  .word 0x1062004a
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000088
  .word 0x00000000
  .word 0xc6400018
  .word 0xe7a001d0
  .word 0xc640001c
  .word 0xe7a001d4
  .word 0xc6400020
  .word 0xe7a001d8
  .word 0x82420015
  .word 0x1440007f
  .word 0x00000000
  .word 0x86440016
  .word 0x0c0e2a40
  .word 0x00000000
  .word 0x9664000c
  .word 0x27a501d0
  .word 0x46000306
  .word 0x0c0ee1cc
  .word 0x00000000
  .word 0x24050001
  .word 0x14450074
  .word 0x00000000
  .word 0x82420025
  .word 0x0002102b
  .word 0xae620064
  .word 0x82420034
  .word 0x10400009
  .word 0x00000000
  .word 0x82420035
  .word 0x24420001
  .word 0x304600ff
  .word 0x82470036
  .word 0x82480037
  .word 0x9664000c
  .word 0x0c0eec74
  .word 0x00000000
  .word 0x82420026
  .word 0x14400063
  .word 0x00000000
  .word 0x9664000c
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x24440004
  .word 0x27a501d0
  .word 0x27a601dc
  .word 0x0c0ee1a4
  .word 0x00000000
  .word 0x24030001
  .word 0x14430058
  .word 0x00000000
  .word 0x27a301c0
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
  .word 0xc7a001dc
  .word 0xe7a001c4
  .word 0x9664000c
  .word 0x27a501c0
  .word 0x2406000f
  .word 0x0000382d
  .word 0x0c0ee2cc
  .word 0x00000000
  .word 0x10000043
  .word 0x00000000
  .word 0x8e440040
  .word 0x27a50070
  .word 0x0000302d
  .word 0x0c0e3610
  .word 0x00000000
  .word 0x82420015
  .word 0x1440003b
  .word 0x00000000
  .word 0x86440016
  .word 0x0c0e2a40
  .word 0x00000000
  .word 0x46000506
  .word 0x82420024
  .word 0x0002882b
  .word 0x82420025
  .word 0x0002802b
  .word 0x82420034
  .word 0x1040000a
  .word 0x00000000
  .word 0x82420035
  .word 0x24420001
  .word 0x304600ff
  .word 0x82470036
  .word 0x82480037
  .word 0x9664000c
  .word 0x24050001
  .word 0x0c0eec74
  .word 0x00000000
  .word 0x83a20070
  .word 0x18400024
  .word 0x00000000
  .word 0x9664000c
  .word 0x27a50070
  .word 0x4600a306
  .word 0x0220302d
  .word 0x0c0ee27c
  .word 0x00000000
  .word 0xae700064
  .word 0x3c04006a
  .word 0x2484d6d0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x9664000c
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x10400012
  .word 0x00000000
  .word 0xc6400018
  .word 0xe7a001b0
  .word 0xc640001c
  .word 0xe7a001b4
  .word 0xc6400020
  .word 0xe7a001b8
  .word 0xc6400028
  .word 0xe7a001a0
  .word 0xc640002c
  .word 0xe7a001a4
  .word 0xafa001a8
  .word 0x0040202d
  .word 0x27a501b0
  .word 0x27a601a0
  .word 0x0000382d
  .word 0x0c0edd18
  .word 0x00000000
  .word 0x0240102d
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd01e0
  .word 0x03e00008
  .word 0x00000000
}


extern void FUN_00319090(void *param_1, f32 param_2);

// FUN_00364E40


#ifndef PC_BUILD
asm void FUN_00364e40(u32 param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x00c0a02d
  .word 0x0000902d
  .word 0x94c4000c
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x00831824
  .word 0x00032a83
  .word 0x24030001
  .word 0x10a3000d
  .word 0x00000000
  .word 0x24030003
  .word 0x10a30003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x8c520128
  .word 0x10000006
  .word 0x00000000
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x8c520128
  .word 0x0000982d
  .word 0x8e94006c
  .word 0x10000055
  .word 0x00000000
  .word 0x82840010
  .word 0x24030006
  .word 0x14830050
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0d83b4
  .word 0x00000000
  .word 0x1040004b
  .word 0x00000000
  .word 0x96830000
  .word 0x0223082a
  .word 0x14200047
  .word 0x00000000
  .word 0x0280982d
  .word 0x14710044
  .word 0x00000000
  .word 0x82840014
  .word 0x1480002f
  .word 0x00000000
  .word 0x1240003f
  .word 0x00000000
  .word 0x4480a000
  .word 0x82830015
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0xc79482fc
  .word 0x10000002
  .word 0x00000000
  .word 0xc79480e0
  .word 0x27a300b0
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
  .word 0xc6800018
  .word 0xe7a000c0
  .word 0xc680001c
  .word 0xe7a000c4
  .word 0xafa000c8
  .word 0x27a40070
  .word 0x27a500b0
  .word 0x27a600c0
  .word 0x0c0ede68
  .word 0x00000000
  .word 0x0240202d
  .word 0x4600a306
  .word 0x0c0c6424
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50090
  .word 0x0c0c6440
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x24030001
  .word 0x14830010
  .word 0x00000000
  .word 0x1240000e
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0c6474
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x0240202d
  .word 0xc78c82fc
  .word 0x0c0c6424
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0c6464
  .word 0x00000000
  .word 0x8e94004c
  .word 0x1680ffab
  .word 0x00000000
  .word 0x16600013
  .word 0x00000000
  .word 0x8e030010
  .word 0x14710010
  .word 0x00000000
  .word 0x1240000e
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0c6474
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x0240202d
  .word 0xc78c82fc
  .word 0x0c0c6424
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0c6464
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// The first divergence suggests a 0x000ffc00 mask, but that informed spelling
// regressed nd219 -> nd224 and size392 -> 396, so it was reverted.
/* W367 pragma probe: opt_common_subs off nd 239 -> 170; on nd 239; object 400/400. */
#pragma opt_common_subs off
// FUN_003650C0


#ifndef PC_BUILD
asm void FUN_003650c0(int param_1,u64 param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x0000802d
  .word 0x94c4000c
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x00831824
  .word 0x00032a83
  .word 0x24030001
  .word 0x10a3000d
  .word 0x00000000
  .word 0x24030003
  .word 0x10a30003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x8c500128
  .word 0x10000006
  .word 0x00000000
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x8c500128
  .word 0x12000036
  .word 0x00000000
  .word 0x0000882d
  .word 0x8e52006c
  .word 0x10000029
  .word 0x00000000
  .word 0x82440010
  .word 0x24030007
  .word 0x14830024
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0d83b4
  .word 0x00000000
  .word 0x1040001f
  .word 0x00000000
  .word 0x96430000
  .word 0x0283082a
  .word 0x1420001b
  .word 0x00000000
  .word 0x0240882d
  .word 0x14740018
  .word 0x00000000
  .word 0x82440014
  .word 0x1480000c
  .word 0x00000000
  .word 0x12000013
  .word 0x00000000
  .word 0x82460015
  .word 0x82470016
  .word 0x0260202d
  .word 0x0200282d
  .word 0x8e480018
  .word 0x0c0e7a20
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x24030001
  .word 0x14830007
  .word 0x00000000
  .word 0x12000005
  .word 0x00000000
  .word 0x82450015
  .word 0x0200202d
  .word 0x0c0e7a88
  .word 0x00000000
  .word 0x8e52004c
  .word 0x1640ffd7
  .word 0x00000000
  .word 0x16200006
  .word 0x00000000
  .word 0x12000004
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7a08
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
}
#endif /* PC_BUILD: asm function omitted */


// Corrected the case-0 byte contract to u8 (retail lbu). The seven remaining
// differing words are b210 call-argument setup order at +0x8c/+0x90 and
// +0xc8/+0xcc: retail materializes a1 before the independent a0 load.
#pragma opt_common_subs reset
// FUN_00365250


void FUN_00365250(u32 param_1,u64 param_2,int param_3)



{

  u16 *puVar1;

  u32 lVar2;

  u32 uStack_4;

  

  for (puVar1 = *(u16 **)(param_3 + 0x6c); puVar1 != (u16 *)0x0;

      puVar1 = *(u16 **)(puVar1 + 0x26)) {

    if (((((char)puVar1[8] == '\x05') && (lVar2 = FUN_00360ed0(puVar1), lVar2 != 0)) &&

        ((int)(u32)*puVar1 <= (int)param_1)) && (*puVar1 == param_1)) {

      switch (*(char *)((int)puVar1 + 0x15)) {
      case 0:
        FUN_003bb010_evt_main(*(u16 *)(param_3 + 0xc),(u8)puVar1[10]);
        break;
      case 1:
        uStack_4 = 0;
        lVar2 = FUN_00397630(param_2,(char)puVar1[10],&uStack_4);
        if (lVar2 == 1) {
          FUN_003bb010_evt_main(*(u16 *)(param_3 + 0xc),(u8)uStack_4);
        }
        break;
      }

    }

  }

  return;

}


// FUN_00365360


void FUN_00365360(u32 param_1,u64 param_2,int param_3)



{

  u16 *puVar1;

  int lVar2;

  u32 uVar3;

  u32 uVar4;

  u16 uVar7;

  u8 uVar8;

  short sVar6;

  u32 uVar5;

  

  uVar4 = 0xffffffff;

  for (puVar1 = *(u16 **)(param_3 + 0x6c); puVar1 != (u16 *)0x0;

      puVar1 = *(u16 **)(puVar1 + 0x26)) {

    if ((((char)puVar1[8] == '\b') && (lVar2 = FUN_00360ed0(puVar1), lVar2 != 0)) &&

       (uVar3 = (u32)*puVar1, (int)uVar3 <= (int)param_1)) {

      if ((int)uVar4 < (int)uVar3) {

        uVar4 = uVar3;

      }

      if (uVar3 == param_1) {

        uVar5 = 0;
        if (*(char *)((int)puVar1 + 0x19) != '\0') {
          uVar5 = 1;
        }
        sVar6 = *(volatile /* Removing this function's qualifier batch loses FUN_00365360 (MATCH nd0 -> MISMATCH nd6, size 208 -> 208) - measured W170. */ short *)((int)puVar1 + 0x14);
        uVar7 = *(volatile /* Removing this function's qualifier batch loses FUN_00365360 (MATCH nd0 -> MISMATCH nd6, size 208 -> 208) - measured W170. */ u16 *)(param_3 + 0xc);
        uVar8 = (u8)puVar1[0xc];
        FUN_003b8e10_evt(uVar7,uVar8,sVar6,uVar5);

      }

    }

  }

  return;

}


// Caller-specific absolute BYTE-base loads reproduce retail's shared DAT offsets.
// A typed aggregate assignment and early stack-pointer local now reproduce
// retail's load/store staging; five reloc-masked words remain as b210 choices:
// a1 setup, v0/v1 load coloring, and independent store/call setup.
/* W414 direct-width negative: replacing the EvtPosition65430 aggregate copy
 * with direct `xy`/`z` loads from DAT_006a0000_65430_abs emits lwc1/swc1,
 * but reorders the load/store schedule and measures nd17 (436/448) versus
 * the existing aggregate nd4. Reverted; do not retry this field split. */
// FUN_00365430


#ifndef PC_BUILD
asm void FUN_00365430(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x8cb00084
  .word 0x1000005b
  .word 0x00000000
  .word 0x8e040000
  .word 0x24030001
  .word 0x10830004
  .word 0x00000000
  .word 0x24030030
  .word 0x14830053
  .word 0x00000000
  .word 0x9604000c
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x1040004e
  .word 0x00000000
  .word 0x8e220004
  .word 0x30420008
  .word 0x1440001d
  .word 0x00000000
  .word 0x8e220010
  .word 0x1642001a
  .word 0x00000000
  .word 0x9604000c
  .word 0x2605003c
  .word 0x26060048
  .word 0x0c0ede2c
  .word 0x00000000
  .word 0x27a50040
  .word 0x3c02006a
  .word 0xdc43d6e8
  .word 0x3c02006a
  .word 0xc440d6f0
  .word 0xffa30040
  .word 0xe7a00048
  .word 0x9604000c
  .word 0x0c0ede4c
  .word 0x00000000
  .word 0x9604000c
  .word 0x0c0ee3cc
  .word 0x00000000
  .word 0x9604000c
  .word 0x92050057
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0ee384
  .word 0x00000000
  .word 0xae000064
  .word 0x0240202d
  .word 0x0200282d
  .word 0x0c0d91b4
  .word 0x00000000
  .word 0x0240202d
  .word 0x0200282d
  .word 0x0c0d92c4
  .word 0x00000000
  .word 0x0240202d
  .word 0x0200282d
  .word 0x0c0d911c
  .word 0x00000000
  .word 0x0240202d
  .word 0x0200282d
  .word 0x0c0d9170
  .word 0x00000000
  .word 0x0220202d
  .word 0x0240282d
  .word 0x0200302d
  .word 0x0c0d9238
  .word 0x00000000
  .word 0x0240202d
  .word 0x0200282d
  .word 0x0c0d928c
  .word 0x00000000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0200302d
  .word 0x0c0d9430
  .word 0x00000000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0200302d
  .word 0x0c0d9390
  .word 0x00000000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0200302d
  .word 0x0c0d9494
  .word 0x00000000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0200302d
  .word 0x0c0d94d8
  .word 0x00000000
  .word 0x8e100094
  .word 0x1600ffa5
  .word 0x00000000
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
#endif /* PC_BUILD: asm function omitted */


// FUN_003655F0


asm u16 * FUN_003655f0(u32 param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x0000802d
  .word 0x2413ffff
  .word 0x8cb4006c
  .word 0x10000010
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0d83b4
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x96820000
  .word 0x0242082a
  .word 0x14200006
  .word 0x00000000
  .word 0x0262082a
  .word 0x10200003
  .word 0x00000000
  .word 0x0040982d
  .word 0x0280802d
  .word 0x8e94004c
  .word 0x1680fff0
  .word 0x00000000
  .word 0x16000004
  .word 0x00000000
  .word 0x0200102d
  .word 0x10000050
  .word 0x00000000
  .word 0x96020000
  .word 0x10520004
  .word 0x00000000
  .word 0x0200102d
  .word 0x1000004a
  .word 0x00000000
  .word 0x9624000c
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0200102d
  .word 0x10000042
  .word 0x00000000
  .word 0x82030012
  .word 0x24020001
  .word 0x1062002b
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000039
  .word 0x00000000
  .word 0x24041e58
  .word 0x0c0eed00
  .word 0x00000000
  .word 0xc6000018
  .word 0xe7a00070
  .word 0xc600001c
  .word 0xe7a00074
  .word 0xc6000020
  .word 0xe7a00078
  .word 0xc6000024
  .word 0xe7a00060
  .word 0xc6000028
  .word 0xe7a00064
  .word 0xafa00068
  .word 0x96060002
  .word 0x9624000c
  .word 0x27a50070
  .word 0x82070030
  .word 0x0c0ee1fc
  .word 0x00000000
  .word 0x96060002
  .word 0x92070030
  .word 0x9624000c
  .word 0x27a50060
  .word 0x0c0ee2cc
  .word 0x00000000
  .word 0x96050002
  .word 0x9624000c
  .word 0xc60c002c
  .word 0x0c0ee3a0
  .word 0x00000000
  .word 0x96050002
  .word 0x3c04006a
  .word 0x2484d700
  .word 0x0c14896a
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x96050014
  .word 0x3c02000f
  .word 0x3442fc00
  .word 0x00a21024
  .word 0x00021283
  .word 0x1040000c
  .word 0x00000000
  .word 0x86020016
  .word 0x44820000
  .word 0x00000000
  .word 0x46800320
  .word 0x24041e58
  .word 0x0c0eece4
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d720
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
}


// FUN_003657E0


void FUN_003657e0(int param_1,int param_2)



{

  int iVar3;

  u32 lVar2;

  int *piVar1;

  

  iVar3 = (int)param_2;

  for (piVar1 = *(int **)(iVar3 + 0x84); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x25]) {

    if (*piVar1 == 0x21) {

      if (param_1 == *(int *)(iVar3 + 0x10)) {

        FUN_003bb400(0x1e58);

        FUN_003b78b0((u16)piVar1[3],piVar1 + 0xf,piVar1 + 0x12);

        FUN_003b8f30((u16)piVar1[3]);

        lVar2 = FUN_003b5d10(0x1e58);

        if (lVar2 != 0) {

          *(f32 *)((int)lVar2 + 0x100) = *(f32 *)(iVar3 + 0x8d0);

        }

      }

      FUN_003655f0(param_1,(int)piVar1,iVar3);

    }

  }

  return;

}


// FUN_003658B0


#ifndef PC_BUILD
asm void FUN_003658b0(u32 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x8cb20084
  .word 0x10000050
  .word 0x00000000
  .word 0x8e440000
  .word 0x2403002f
  .word 0x1483004b
  .word 0x00000000
  .word 0x2410ffff
  .word 0x8e51006c
  .word 0x10000045
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0d83b4
  .word 0x00000000
  .word 0x1040003f
  .word 0x00000000
  .word 0x96220000
  .word 0x0262082a
  .word 0x14200005
  .word 0x00000000
  .word 0x0202082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0040802d
  .word 0x96240012
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040202d
  .word 0x10800031
  .word 0x00000000
  .word 0x96230000
  .word 0x1473002e
  .word 0x00000000
  .word 0x82230010
  .word 0x24050001
  .word 0x10650011
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000026
  .word 0x00000000
  .word 0x82220014
  .word 0x14400005
  .word 0x00000000
  .word 0x0c0ee540
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c0ee540
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x82260014
  .word 0x0000402d
  .word 0x86290018
  .word 0x86270016
  .word 0x82220015
  .word 0x14400002
  .word 0x00000000
  .word 0x00a0402d
  .word 0x8622001a
  .word 0x1c400005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x10000008
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x0000282d
  .word 0x0c0ee3fc
  .word 0x00000000
  .word 0x8e31004c
  .word 0x1620ffbb
  .word 0x00000000
  .word 0x8e520094
  .word 0x1640ffb0
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00365A40

void FUN_00365a40(u32 param_1,int param_2)
{
  u16 uVar1;
  int *piVar6;
  u16 *puVar2;
  u32 uVar3;
  u32 lVar4;
  u32 uVar5;

  for (piVar6 = *(int **)(param_2 + 0x84); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[0x25]) {
    if (*piVar6 == 0x31) {
      uVar5 = 0xffffffff;
      for (puVar2 = (u16 *)piVar6[0x1b]; puVar2 != (u16 *)0x0;
          puVar2 = *(u16 **)(puVar2 + 0x26)) {
        lVar4 = FUN_00360ed0_evt((u32)puVar2);
        if (lVar4 != 0) {
          uVar3 = (u32)*puVar2;
          if (((int)uVar3 <= (int)param_1) && ((int)uVar5 < (int)uVar3)) {
            uVar5 = uVar3;
          }
          uVar1 = puVar2[9];
          lVar4 = FUN_003b5d10_evt(uVar1);
          if ((lVar4 != 0) && (*puVar2 == param_1)) {
            switch ((char)puVar2[8]) {
            case 0:
              if ((char)puVar2[10] == '\0') {
                FUN_003b9550_evt(uVar1,1);
              } else {
                FUN_003b9550_evt(uVar1,0);
              }
              break;
            }
          }
        }
      }
    }
  }
}



// FUN_00365B70


void FUN_00365b70(u32 param_1,u32 param_2)



{

  char cVar1;

  u32 lVar3;

  u32 uVar4;

  int *piVar7;

  

  for (piVar7 = *(int **)((int)param_2 + 0x84); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[0x25])

  {

    if (*piVar7 == 0x23) {


      u16 *puVar2;

      u16 *puVar6;

      u32 uVar5;

      for (puVar2 = (uVar5 = 0xffffffff, puVar6 = (u16 *)0x0, (u16 *)piVar7[0x1b]); puVar2 != (u16 *)0x0;

          puVar2 = *(u16 **)(puVar2 + 0x26)) {

        lVar3 = FUN_00360ed0(puVar2);

        if (lVar3 != 0) {

          uVar4 = (u32)*puVar2;

          if (((int)uVar4 <= (int)param_1) && ((int)uVar5 < (int)uVar4)) {

            uVar5 = uVar4;

            puVar6 = puVar2;

          }

          if (((uVar4 == param_1) && (cVar1 = (char)puVar2[8], cVar1 != '\x03')) &&

             (cVar1 != '\x02')) {

            switch (cVar1) {
            case 0:
              FUN_00395430(param_2,piVar7[1],(s16)puVar2[0xc],(s16)puVar2[0xd],(s16)puVar2[0xe]);
              break;
            case 1:
              FUN_003954e0(piVar7[1]);
              break;
            }

          }

        }

      }

      if ((puVar6 == (u16 *)0x0) && (*(u32 *)((int)param_2 + 0x10) == param_1)) {

        FUN_003954e0(piVar7[1]);

      }

    }

  }

  return;

}


/* W415 negatives: reordering cVar1 branches ascending made nd 368 -> 377
   (object 644/688); an explicit 0..3 switch made nd 368 -> 376
   (object 652/688). Both probes were reverted.
   W417 negatives: switch-only nd 368 -> 376; untyped float locals exceeded
   the window; vector aggregate form before width fixes exceeded the window.
   W422 negative: changing the first state load cast from int to u32 stayed
   nd2/object684/window688; the v1->a0 branch-load coloring was unchanged. */
// FUN_00365CD0


void FUN_00365cd0(u32 param_1,int param_2)



{

  char cVar1;
  u8 mode;

  short uVar2;

  int *piVar8;

  u16 *puVar3;

  int lVar7;

  u16 sVar4;

  u16 uVar5;

  u32 lVar6;

  RwV3d pos0;

  RwV3d pos1;

  RwV3d pos2;
  RwV3d pos3;

  


  if (*(int *)(param_2 + 0x710) != 0) {
    if (param_1 == *(u32 *)(param_2 + 0x10)) {
      FUN_003969b0(*(int *)(param_2 + 0x710));

    }

    for (piVar8 = *(int **)(param_2 + 0x84); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[0x25]) {

      if (*piVar8 == 0x25) {

        for (lVar7 = 0; lVar7 < 0x10; lVar7 = lVar7 + 1) {

          for (puVar3 = (u16 *)piVar8[0x1b]; puVar3 != (u16 *)0x0;

              puVar3 = *(u16 **)(puVar3 + 0x26)) {

            if ((((*(char *)((int)puVar3 + 0x11) == lVar7) &&

                 (lVar6 = FUN_00360ed0(puVar3), lVar6 != 0)) && ((int)(u32)*puVar3 <= (int)param_1)

                ) && (*puVar3 == param_1)) {

              cVar1 = (char)puVar3[8];
switch (cVar1) {
              case 0:
                FUN_00396760(*(u32 *)(param_2 + 0x710),lVar7,(char)puVar3[9],
                             *(char *)((int)puVar3 + 0x13) != '\0');
                sVar4 = FUN_003968a0(*(u32 *)(param_2 + 0x710),lVar7);
                if (sVar4 != 0) {
                  pos0.x = *(float *)((int)puVar3 + 0x14);
                  pos0.y = *(float *)((int)puVar3 + 0x18);
                  pos0.z = *(float *)((int)puVar3 + 0x1c);
                  pos1.x = *(float *)((int)puVar3 + 0x20);
                  pos1.y = *(float *)((int)puVar3 + 0x24);
                  pos1.z = *(float *)((int)puVar3 + 0x28);
                  FUN_003b78b0(sVar4,&pos0,&pos1);
                  FUN_005225a8(DAT_0069d738_abs);
                }
                break;
              case 1:
                sVar4 = FUN_003968a0(*(u32 *)(param_2 + 0x710),lVar7);
                if (sVar4 != 0) {
                  pos2.x = *(float *)((int)puVar3 + 0x14);
                  pos2.y = *(float *)((int)puVar3 + 0x18);
                  pos2.z = *(float *)((int)puVar3 + 0x1c);
                  pos3.x = *(float *)((int)puVar3 + 0x20);
                  pos3.y = *(float *)((int)puVar3 + 0x24);
                  pos3.z = *(float *)((int)puVar3 + 0x28);
                  uVar2 = puVar3[9];
                  FUN_003b87f0(sVar4,&pos2,uVar2,0);
                  FUN_003b8b30(sVar4,&pos3,uVar2,0);
                  FUN_005225a8(DAT_0069d748_abs);
                }
                break;
              case 2:
                FUN_00396910(*(u32 *)(param_2 + 0x710),lVar7);
                break;
              case 3:
                uVar5 = FUN_003968a0(*(u32 *)(param_2 + 0x710),lVar7);
                uVar2 = *(short *)((int)puVar3 + 0x14);
                mode = *(u8 *)((int)puVar3 + 0x12);
                FUN_003b8e10(uVar5,mode,uVar2,0);
                break;
              }
            }

          }

        }

      }

    }


  }
  return;

}


// FUN_00365F80


#ifndef PC_BUILD
asm void FUN_00365f80(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdff50
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
  .word 0x0080f02d
  .word 0x00a0a82d
  .word 0xafa000ac
  .word 0xafa000a8
  .word 0x0000902d
  .word 0x0000882d
  .word 0x2410ffff
  .word 0x0200b02d
  .word 0x0000b82d
  .word 0x12a00080
  .word 0x00000000
  .word 0x8ea30008
  .word 0x1060007d
  .word 0x00000000
  .word 0x26a4082c
  .word 0x0c0e7bb8
  .word 0x00000000
  .word 0x10400078
  .word 0x00000000
  .word 0x8eb40084
  .word 0x1000004f
  .word 0x00000000
  .word 0x8e840000
  .word 0x24030004
  .word 0x1483004a
  .word 0x00000000
  .word 0x8e93006c
  .word 0x10000045
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0d83b4
  .word 0x00000000
  .word 0x1040003f
  .word 0x00000000
  .word 0x8ea30004
  .word 0x30630010
  .word 0x0003202b
  .word 0x24030001
  .word 0x10830039
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0260282d
  .word 0x27a600ac
  .word 0x27a700a8
  .word 0x0c0e292c
  .word 0x00000000
  .word 0x10400031
  .word 0x00000000
  .word 0x96630000
  .word 0x147e002e
  .word 0x00000000
  .word 0x26a4082c
  .word 0x8fa500ac
  .word 0x0c0e7dd4
  .word 0x00000000
  .word 0x1440000d
  .word 0x00000000
  .word 0x8fb000ac
  .word 0x82630014
  .word 0x14600002
  .word 0x00000000
  .word 0x24120001
  .word 0x82640016
  .word 0x24030001
  .word 0x1483001f
  .word 0x00000000
  .word 0x0060882d
  .word 0x1000001c
  .word 0x00000000
  .word 0x1040001a
  .word 0x00000000
  .word 0x8fa200a8
  .word 0x10400004
  .word 0x00000000
  .word 0x2841000b
  .word 0x14200004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x2442ffff
  .word 0xa6a20266
  .word 0x8fa500ac
  .word 0x00a0b02d
  .word 0x0002bc3c
  .word 0x0017bc3f
  .word 0x82620014
  .word 0x14400002
  .word 0x00000000
  .word 0x24120001
  .word 0x26e7ff38
  .word 0x3c04006a
  .word 0x2484d760
  .word 0x03c0302d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e73004c
  .word 0x1660ffbb
  .word 0x00000000
  .word 0x8e940094
  .word 0x1680ffb1
  .word 0x00000000
  .word 0x2403ffff
  .word 0x16030003
  .word 0x00000000
  .word 0x12c30020
  .word 0x00000000
  .word 0x24030001
  .word 0x1643000b
  .word 0x00000000
  .word 0x16230006
  .word 0x00000000
  .word 0x8ea30004
  .word 0x34638000
  .word 0xaea30004
  .word 0x10000004
  .word 0x00000000
  .word 0x8ea30004
  .word 0x34630020
  .word 0xaea30004
  .word 0x24030001
  .word 0x1623000a
  .word 0x00000000
  .word 0x82a3004c
  .word 0x30630008
  .word 0x1060000c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f25e4
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x26a4082c
  .word 0x0200282d
  .word 0x02c0302d
  .word 0x02e0382d
  .word 0x0c0e7c84
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
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


/* W367 pragma probe: opt_loop_invariants on nd 103 -> 91; off nd 103; object 288/288. */
#pragma opt_loop_invariants on
// FUN_00366210


#ifndef PC_BUILD
asm void FUN_00366210(u32 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0xafa0003c
  .word 0xafa00038
  .word 0x8ca40084
  .word 0x24030022
  .word 0x10000005
  .word 0x00000000
  .word 0x8c850000
  .word 0x10a30006
  .word 0x00000000
  .word 0x8c840094
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fff9
  .word 0x00000000
  .word 0x1080002d
  .word 0x00000000
  .word 0x0220282d
  .word 0x27a6003c
  .word 0x27a70038
  .word 0x0c0e3118
  .word 0x00000000
  .word 0x8fa4003c
  .word 0x10800025
  .word 0x00000000
  .word 0x94830000
  .word 0x14710022
  .word 0x00000000
  .word 0x80840010
  .word 0x24030001
  .word 0x10830017
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x2604082c
  .word 0x0c0e7bb8
  .word 0x00000000
  .word 0x10400015
  .word 0x00000000
  .word 0x2604082c
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x14400010
  .word 0x00000000
  .word 0x8e020004
  .word 0x34420020
  .word 0xae020004
  .word 0x27849d80
  .word 0x0c14896a
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0c0421c4
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x8e030004
  .word 0x34632000
  .word 0xae030004
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


#pragma opt_loop_invariants reset
// FUN_00366330


void FUN_00366330(u32 param_1,int param_2)
{
  int *piVar3;

  u16 *puVar1;

  u32 lVar2;

  piVar3 = *(int **)(param_2 + 0x84);
  goto outer_check;
outer_body:
  if (*piVar3 == 0x26) {
    puVar1 = (u16 *)piVar3[0x1b];
    goto inner_check;
inner_body:
    lVar2 = FUN_00360ed0(puVar1);
    if ((lVar2 != 0) && (*puVar1 == param_1)) {
      *(int *)(param_2 + 0x28) = (int)(short)puVar1[8];
      *(u32 *)(param_2 + 0x24) = 1;
      return;
    }
    puVar1 = *(u16 **)(puVar1 + 0x26);
inner_check:
    if (puVar1 != (u16 *)0x0) goto inner_body;
  }
  piVar3 = (int *)piVar3[0x25];
outer_check:
  if (piVar3 != (int *)0x0) goto outer_body;
}


// FUN_003663F0


void FUN_003663f0(u32 param_1,int param_2)
{
  u16 *puVar1;
  u32 lVar2;
  int iVar3;
  int *piVar4;
  u32 aStack[4];

  piVar4 = *(int **)(param_2 + 0x84);
  goto outer_check;
outer_body:
  if (*piVar4 == 0x28) {
    puVar1 = (u16 *)piVar4[0x1b];
    goto inner_check;
inner_body:
    if ((FUN_00360ed0_evt((u32)puVar1) != 0) && (*puVar1 == param_1)) {
      iVar3 = 0;
      aStack[0] = (u32)(s32)(s8)*(u8 *)((u8 *)puVar1 + 0x10);
      aStack[1] = (u32)(s32)(s8)*(u8 *)((u8 *)puVar1 + 0x11);
      aStack[2] = (u32)(s32)(s8)*(u8 *)((u8 *)puVar1 + 0x12);
      aStack[3] = (u32)(s32)(s8)*(u8 *)((u8 *)puVar1 + 0x13);
      lVar2 = FUN_00388df0_evt(4,aStack);
      switch (lVar2) {
      case 0:
        iVar3 = (int)(short)puVar1[0xc];
        break;
      case 1:
        iVar3 = (int)(short)puVar1[0xd];
        break;
      case 2:
        iVar3 = (int)(short)puVar1[0xe];
        break;
      case 3:
        iVar3 = (int)(short)puVar1[0xf];
        break;
      }
      *(int *)(param_2 + 0x28) = iVar3;
      *(u32 *)(param_2 + 0x24) = 1;
      return;
    }
    puVar1 = *(u16 **)(puVar1 + 0x26);
inner_check:
    if (puVar1 != (u16 *)0x0) goto inner_body;
  }
  piVar4 = (int *)piVar4[0x25];
outer_check:
  if (piVar4 != (int *)0x0) goto outer_body;
}


// FUN_00366540


u16 * FUN_00366540(u32 param_1,int param_2,int param_3,int param_4)
{
  u16 *puVar1;
  char mode;
  u32 lVar2;
  u16 *puVar4;
  s32 uVar3;
  int iStack_4;
  u32 uStack_8;

  puVar4 = (u16 *)0x0;
  uVar3 = -1;
  puVar1 = *(u16 **)(param_2 + 0x6c);
  while (puVar1 != (u16 *)0x0) {
    if (*puVar1 <= param_3) {
      mode = (char)puVar1[0x11];
      if (mode == '\0') {
        lVar2 = (int)(char)puVar1[10];
      }
      else {
        if (mode != '\x01') {
          goto next;
        }
        iStack_4 = 0;
        uStack_8 = 0;
        lVar2 = FUN_003976f0(param_1,*(char *)((int)puVar1 + 0x15),(u32 *)&iStack_4,(u32 *)&uStack_8);
        if (lVar2 == 0) {
          goto next;
        }
        lVar2 = iStack_4;
      }
      if (((uVar3 < *puVar1) && ((char)puVar1[8] == '\x02')) &&
          (lVar2 == param_4) && (FUN_00360ed0(puVar1) == 1)) {
        uVar3 = *puVar1;
        puVar4 = puVar1;
      }
    }
next:
    puVar1 = *(u16 **)(puVar1 + 0x26);
  }
  return puVar4;
}


/* W367 pragma probe: opt_lifetimes on nd 404 -> 301; off nd 404; object 780/784. */
#pragma opt_lifetimes on
/* DUMMYDUMB session 2026-10-21: frame census says our frame is 16 bytes bigger than retail here; the address-taken locals (iStack_8, iStack_10, uStack_c and the auStack_4 buffer) are all out-parameters of FUN_003976f0, and that callee really does take four parameters (u32 FUN_003976f0(int,int,u32*,u32*) in mt_evtCutin.c), so the residency is genuine. The declaration-order lever (7 locals) gives nothing. Confirmed wall. */
// FUN_00366660


#ifndef PC_BUILD
asm void FUN_00366660(u32 param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5)
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
  .word 0x0080b02d
  .word 0x00a0a82d
  .word 0x00c0b82d
  .word 0x00e0a02d
  .word 0x0000982d
  .word 0x94a40000
  .word 0x3c03000f
  .word 0x3463fc00
  .word 0x00831824
  .word 0x00032283
  .word 0x24030001
  .word 0x14830004
  .word 0x00000000
  .word 0x8eb30128
  .word 0x10000005
  .word 0x00000000
  .word 0x24030003
  .word 0x14830002
  .word 0x00000000
  .word 0x8eb30128
  .word 0x12600096
  .word 0x00000000
  .word 0x0260202d
  .word 0x0000282d
  .word 0x0c0c616c
  .word 0x00000000
  .word 0x10400090
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000008a
  .word 0x00000000
  .word 0x3245ffff
  .word 0x0260202d
  .word 0x0c0c616c
  .word 0x00000000
  .word 0x10400083
  .word 0x00000000
  .word 0x0280202d
  .word 0x02e0282d
  .word 0x02c0302d
  .word 0x0240382d
  .word 0x0c0d9950
  .word 0x00000000
  .word 0x0040882d
  .word 0x1220007a
  .word 0x00000000
  .word 0x82230016
  .word 0x14600005
  .word 0x00000000
  .word 0x24030001
  .word 0xafa300ac
  .word 0x10000003
  .word 0x00000000
  .word 0x0000182d
  .word 0xafa000ac
  .word 0x82300022
  .word 0x14600005
  .word 0x00000000
  .word 0x3245ffff
  .word 0x0260202d
  .word 0x0c0c621c
  .word 0x00000000
  .word 0x96230000
  .word 0x14760067
  .word 0x00000000
  .word 0x16000006
  .word 0x00000000
  .word 0x823e0015
  .word 0x82220017
  .word 0xafa200b0
  .word 0x10000010
  .word 0x00000000
  .word 0x24020001
  .word 0x1602000d
  .word 0x00000000
  .word 0x82250015
  .word 0x0280202d
  .word 0x27a600cc
  .word 0x27a700c8
  .word 0x0c0e5dbc
  .word 0x00000000
  .word 0x24030001
  .word 0x14430054
  .word 0x00000000
  .word 0x8fbe00c8
  .word 0x82220017
  .word 0xafa200b0
  .word 0x86220020
  .word 0x18400008
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000024
  .word 0x44090000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000482d
  .word 0x86220028
  .word 0x1c400005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x10000008
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x03c0302d
  .word 0x8fa700b0
  .word 0x8fa800ac
  .word 0x0c0ee3fc
  .word 0x00000000
  .word 0x82240023
  .word 0x24030001
  .word 0x1483002a
  .word 0x00000000
  .word 0x16000005
  .word 0x00000000
  .word 0x0240282d
  .word 0x82260024
  .word 0x1000000e
  .word 0x00000000
  .word 0x16030025
  .word 0x00000000
  .word 0x82250024
  .word 0x0280202d
  .word 0x27a600c4
  .word 0x27a700c0
  .word 0x0c0e5dbc
  .word 0x00000000
  .word 0x24030001
  .word 0x1443001c
  .word 0x00000000
  .word 0x8fa500c4
  .word 0x8fa600c0
  .word 0x82220025
  .word 0x00404026
  .word 0x2d080001
  .word 0x86270026
  .word 0x8622002a
  .word 0x1c400005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x10000008
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x02a0202d
  .word 0x0000482d
  .word 0x0c0ee498
  .word 0x00000000
  .word 0x00121880
  .word 0x02e31821
  .word 0xac710074
  .word 0x26520001
  .word 0x2a430004
  .word 0x1460ff75
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
}
#endif /* PC_BUILD: asm function omitted */


#pragma opt_lifetimes reset
/* W367 pragma probe: opt_lifetimes on nd 135 -> 125; off nd 135; object 300/336. */
#pragma opt_lifetimes on
// FUN_00366970


#ifndef PC_BUILD
asm void FUN_00366970(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x0c0ed740
  .word 0x00000000
  .word 0x10400040
  .word 0x00000000
  .word 0x8c520004
  .word 0x1000001a
  .word 0x00000000
  .word 0x0000182d
  .word 0x8e060084
  .word 0x10000008
  .word 0x00000000
  .word 0x8cc20038
  .word 0x14520004
  .word 0x00000000
  .word 0x00c0182d
  .word 0x10000004
  .word 0x00000000
  .word 0x8cc60094
  .word 0x14c0fff8
  .word 0x00000000
  .word 0x14600004
  .word 0x00000000
  .word 0x8e5200f8
  .word 0x10000008
  .word 0x00000000
  .word 0x0220202d
  .word 0x0240282d
  .word 0x0200382d
  .word 0x0000402d
  .word 0x0c0d9998
  .word 0x00000000
  .word 0x8e5200f8
  .word 0x1640ffe6
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040902d
  .word 0x1000001a
  .word 0x00000000
  .word 0x0000202d
  .word 0x8e060084
  .word 0x10000008
  .word 0x00000000
  .word 0x8cc30038
  .word 0x14720004
  .word 0x00000000
  .word 0x00c0202d
  .word 0x10000004
  .word 0x00000000
  .word 0x8cc60094
  .word 0x14c0fff8
  .word 0x00000000
  .word 0x14800004
  .word 0x00000000
  .word 0x8e5200f8
  .word 0x10000008
  .word 0x00000000
  .word 0x0220202d
  .word 0x0240282d
  .word 0x0200382d
  .word 0x0000402d
  .word 0x0c0d9998
  .word 0x00000000
  .word 0x8e5200f8
  .word 0x1640ffe6
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
#endif /* PC_BUILD: asm function omitted */


#pragma opt_lifetimes reset
/* W367 stacked probe: opt_loop_invariants + opt_lifetimes nd 451 -> 431; singles 447/436; object 984/992. */
#pragma opt_loop_invariants on
#pragma opt_lifetimes on
// FUN_00366AC0


void FUN_00366ac0(u32 param_1,u32 param_2)



{

  u32 uVar1, masked;

  int *piVar2;

  u16 *puVar3;

  u32 bVar4;

  int lVar5;

  int iVar6;

  int iVar7;

  int unaff_s2;
  int isLess;

  

  iVar6 = (int)param_2;

  uVar1 = *(u32 *)(iVar6 + 4);

  masked = uVar1 & 0xfffffffd;
  *(u32 *)(iVar6 + 4) = masked;
  uVar1 = masked & 0xfffffffb;
  *(u32 *)(iVar6 + 4) = uVar1;

  *(u32 *)(iVar6 + 0xec) = 0;

  *(u32 *)(iVar6 + 0xf0) = 0;

  *(u32 *)(iVar6 + 0xf8) = 0;

  *(u32 *)(iVar6 + 0xfc) = 0;

  *(u32 *)(iVar6 + 0xf4) = 0;

  *(u32 *)(iVar6 + 0x100) = 0;

  *(u32 *)(iVar6 + 0x278) = 0;

  FUN_0038ca00();

  FUN_00366970(param_1,param_2);

  FUN_00365430(param_1,param_2);

  FUN_003657e0(param_1,param_2);

  FUN_003658b0(param_1,param_2);

  FUN_00365a40(param_1,param_2);

  FUN_00365b70(param_1,param_2);

  FUN_00365cd0(param_1,param_2);

  FUN_00365f80(param_1,param_2);

  for (piVar2 = *(int **)(iVar6 + 0x84); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x25]) {

    iVar7 = *piVar2;

    if (iVar7 != 1) {
      switch (iVar7) {
      case 0x29:
      case 5:
      case 0x32:
      case 0x13:
      case 7:
      case 0x1c:
      case 0x1d:
      case 0x2a:
      case 0x2c:
      case 0x2d:
      case 0x2e:
        bVar4 = true;
        break;
      default:
        bVar4 = false;
        break;
      }

      if (bVar4) {

        for (puVar3 = (u16 *)piVar2[0x1b]; puVar3 != (u16 *)0x0;

            puVar3 = *(u16 **)(puVar3 + 0x26)) {

          lVar5 = FUN_00360ed0(puVar3);

          if ((lVar5 != 0) &&
             (((unaff_s2 == 0 && (param_1 == *puVar3)) ||
              ((0 < unaff_s2 &&
               ((((isLess = ((int)param_1 < (int)(u32)*puVar3)) == 0) &&
                ((int)param_1 < (int)((u32)*puVar3 + (int)unaff_s2))))))))) {
            FUN_00363030(piVar2,puVar3,param_1,(u8 *)param_2);
          }

        }

      }

    }

  }

  for (piVar2 = *(int **)(iVar6 + 0x84); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x25]) {

    iVar7 = *piVar2;

    switch (iVar7) {
    case 6:
    case 10:
    case 0x27:
    case 0x2b:
    case 0x24:
      bVar4 = true;
      break;
    default:
      bVar4 = false;
      break;
    }

    if (bVar4) {
      iVar7 = piVar2[8];

      puVar3 = (u16 *)piVar2[0x1b];
      while (puVar3 != (u16 *)0x0) {
        lVar5 = FUN_00360ed0(puVar3);
        if ((lVar5 != 0) &&
            ((int)((u32)*puVar3 + (int)(short)iVar7) > (int)param_1)) {
          break;
        }
        puVar3 = *(u16 **)(puVar3 + 0x26);
      }

      if (puVar3 != (u16 *)0x0) {

        iVar7 = *(int *)(puVar3 + 0x28);

      }

      else {

        iVar7 = piVar2[0x1c];

      }

      lVar5 = FUN_0036f500_s32(*piVar2);

      if (lVar5 == 1) {

        while (iVar7 != 0) {
          lVar5 = FUN_00360ed0(iVar7);
          if (lVar5 == 1) {
            break;
          }
          iVar7 = *(int *)(iVar7 + 0x50);
        }

      }

      FUN_003638e0(piVar2,(u32)puVar3,iVar7,param_1,param_2);
    }
  }

  FUN_00366210(param_1,param_2);

  FUN_00366330(param_1,param_2);

  FUN_003663f0(param_1,param_2);

  if (((*(u32 *)(iVar6 + 4) & 1) != 0) && ((*(u32 *)(iVar6 + 4) & 2) == 0)) {

    FUN_003bcc80();

  }

  return;

}


#pragma opt_lifetimes reset
#pragma opt_loop_invariants reset
// FUN_00366EA0
u32 FUN_00366ea0(void)
{
  return 0;
}

// FUN_00366EB0


int FUN_00366eb0(int param_1,int param_2,int param_3)



{

  int iVar2;

  int iVar1;

  int iVar3;
  int iVar4;

  

  iVar3 = (int)param_3;

  if (*(int *)(iVar3 + 0x164) == 0) {

    iVar2 = 0;

  }

  else {


    iVar2 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);
    iVar1 = 0;
    iVar4 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);
    for (;
        (iVar1 < iVar4 && (iVar2 != 0));
        iVar2 = *(int *)(iVar2 + 0x4c), iVar1 = iVar1 + 1) {
    }

  }

  if (iVar2 == 0) {
    return 0;
  }
  *(u32 *)(iVar2 + 0x14) = *(u32 *)(iVar3 + 0x16c);

  *(short *)(iVar2 + 0x20) = (short)*(u32 *)(iVar3 + 0x198);

  *(char *)(iVar2 + 0x22) = (char)*(u32 *)(iVar3 + 0x19c);

  *(char *)(iVar2 + 0x23) = (char)*(u32 *)(iVar3 + 0x1a0);

  *(char *)(iVar2 + 0x24) = (char)*(u32 *)(iVar3 + 0x1a4);

  *(char *)(iVar2 + 0x25) = (char)*(u32 *)(iVar3 + 0x1a8);

  *(short *)(iVar2 + 0x26) = (short)*(u32 *)(iVar3 + 0x1ac);

  *(short *)(iVar2 + 0x28) = (short)*(u32 *)(iVar3 + 0x1b0);

  *(short *)(iVar2 + 0x2a) = (short)*(u32 *)(iVar3 + 0x1b4);

  FUN_0036f640(param_3);

  return 0;

}


// Removed an invented cast-only base local so the function uses param_3 directly.
// This improves nd245 -> nd244 at unchanged size348/352; the remaining first
// divergence is saved-register coloring and load/branch scheduling.
/* W367 pragma probe: opt_common_subs off nd 244 -> 212; on nd 244; object 348/352. */
#pragma opt_common_subs off
// FUN_00366F90


#ifndef PC_BUILD
asm u64 FUN_00366f90(u64 param_1,u64 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00c0902d
  .word 0x8cc30110
  .word 0x8cc20108
  .word 0x00431021
  .word 0x14400005
  .word 0x00000000
  .word 0x8e420164
  .word 0xa0400022
  .word 0x1000003c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x8e420164
  .word 0xa0430022
  .word 0x10000035
  .word 0x00000000
  .word 0x24030002
  .word 0x14430005
  .word 0x00000000
  .word 0x8e420164
  .word 0xa0430022
  .word 0x1000002e
  .word 0x00000000
  .word 0x24040003
  .word 0x8e420164
  .word 0xa0440022
  .word 0x0000882d
  .word 0x8e430108
  .word 0x8e420110
  .word 0x00621021
  .word 0x2450fffd
  .word 0x8e420164
  .word 0xa4400024
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x16300006
  .word 0x00000000
  .word 0x94430000
  .word 0x8e420164
  .word 0xa4430024
  .word 0x10000005
  .word 0x00000000
  .word 0x26310001
  .word 0x8c4200f8
  .word 0x1440fff6
  .word 0x00000000
  .word 0x8e420164
  .word 0x94420024
  .word 0x14400011
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x16300006
  .word 0x00000000
  .word 0x94430000
  .word 0x8e420164
  .word 0xa4430024
  .word 0x10000005
  .word 0x00000000
  .word 0x26310001
  .word 0x8c4200f8
  .word 0x1440fff6
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x0000102d
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
#endif /* PC_BUILD: asm function omitted */


#pragma opt_common_subs reset
// FUN_003670F0

u32 FUN_003670f0(int param_1,int param_2,int param_3)



{

  int iVar2;

  int iVar1;

  int iVar3;

  int iVar4;

  

  iVar3 = (int)param_3;

  if (*(int *)(iVar3 + 0x164) == 0) {

    iVar2 = 0;

  }

  else {

    iVar2 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);
    iVar1 = 0;
    iVar4 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);
    for (; (iVar1 < iVar4 && (iVar2 != 0)); iVar1 = iVar1 + 1) {
      iVar2 = *(int *)(iVar2 + 0x4c);
    }

  }

  if (iVar2 == 0) {
    return 0;
  }

  *(u32 *)(iVar2 + 0x14) = *(u32 *)(iVar3 + 0x16c);

  FUN_0036f640_evt(param_3);

  return 0;

}


// FUN_00367190


u32 FUN_00367190(int param_1,int param_2,int param_3)



{

  int iVar2;

  int iVar1;

  int iVar3;

  int iVar4;


  

  iVar3 = (int)param_3;

  if (*(int *)(iVar3 + 0x164) == 0) {

    iVar2 = 0;

  }

  else {

    iVar2 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);

    iVar1 = 0;

    iVar4 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);

    for (;

        (iVar1 < iVar4 && (iVar2 != 0));) {

      iVar2 = *(int *)(iVar2 + 0x4c);

      iVar1 = iVar1 + 1;

    }

  }

  if (iVar2 == 0) {

    return 0;

  }

  *(u32 *)(iVar2 + 0x14) = *(u32 *)(iVar3 + 0x19c);

  *(short *)(iVar2 + 0x18) = (short)*(u32 *)(iVar3 + 0x1a0);

  FUN_0036f640(param_3);

  return 0;

}


// FUN_00367230


#ifndef PC_BUILD
asm u64 FUN_00367230(u64 param_1,u64 param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x00c0802d
  .word 0x8cc50238
  .word 0x8cc40164
  .word 0x14800004
  .word 0x00000000
  .word 0x0000382d
  .word 0x1000000f
  .word 0x00000000
  .word 0x8c87006c
  .word 0x0000302d
  .word 0x8e030160
  .word 0x8e02015c
  .word 0x00621021
  .word 0x10000003
  .word 0x00000000
  .word 0x8ce7004c
  .word 0x24c60001
  .word 0x00c2082a
  .word 0x10200003
  .word 0x00000000
  .word 0x14e0fffa
  .word 0x00000000
  .word 0x10e00003
  .word 0x00000000
  .word 0x14a00004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000034
  .word 0x00000000
  .word 0x8c830000
  .word 0x24020030
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0x8e030190
  .word 0x24020003
  .word 0x14620013
  .word 0x00000000
  .word 0xae000190
  .word 0x80e20028
  .word 0xae0201b8
  .word 0x80e20029
  .word 0xae0201bc
  .word 0x80e2002a
  .word 0xae0201c0
  .word 0x80e2002b
  .word 0xae0201c4
  .word 0x2404002e
  .word 0x2405000c
  .word 0x24060018
  .word 0x0200382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000015
  .word 0x00000000
  .word 0xc6000198
  .word 0x46800020
  .word 0xe4e00014
  .word 0x8e02016c
  .word 0xa4e20024
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c0e2988
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d580
  .word 0x24051aa3
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_00367390


u64 FUN_00367390(u64 param_1,u64 param_2,int param_3)



{

  struct Pair {
    short a;
    short b;
    short c;
    short d;
  };
  struct Pair *src;
  struct Pair *dst;

  int iVar6;

  int iVar4;

  int iVar5;

  int iVar7;

  

  iVar5 = (int)param_3;

  if (*(int *)(iVar5 + 0x164) == 0) {

    iVar6 = 0;

  }

  else {

    iVar6 = *(int *)(*(int *)(iVar5 + 0x164) + 0x6c);

    iVar4 = 0;

    iVar7 = *(int *)(iVar5 + 0x160) + *(int *)(iVar5 + 0x15c);

    for (; (iVar4 < iVar7 && (iVar6 != 0));) {

      iVar6 = *(int *)(iVar6 + 0x4c);

      iVar4 = iVar4 + 1;

    }

  }

  if (iVar6 == 0) {

    return 0;

  }

  src = (struct Pair *)(iVar5 + 0x784);
  dst = (struct Pair *)(iVar6 + 8);
  *dst = *src;

  FUN_0036f640(param_3);

  return 0;

}


// FUN_00367440

u32 FUN_00367440(int param_1,int param_2,int param_3)



{

  int iVar1;

  int iVar2;

  int iVar3;
  int iVar4;

  

  iVar3 = (int)param_3;

  if (*(int *)(iVar3 + 0x164) != 0) {

    iVar1 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);
    iVar2 = 0;
    iVar4 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);

    for (; (iVar2 < iVar4 && (iVar1 != 0));) {
      iVar1 = *(int *)(iVar1 + 0x4c);
      iVar2 = iVar2 + 1;
    }

  }

  FUN_0036f640(param_3);

  return 0;

}


/* W367 pragma probe: opt_common_subs off nd 836 -> 766; on nd 836; object 1388/1392. */
#pragma opt_common_subs off
// FUN_003674B0


#ifndef PC_BUILD
asm u64 FUN_003674b0(u64 param_1,u64 param_2,u32 *param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00c0882d
  .word 0x8cc40164
  .word 0x14800004
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000f
  .word 0x00000000
  .word 0x8c90006c
  .word 0x0000282d
  .word 0x8e230160
  .word 0x8e22015c
  .word 0x00621021
  .word 0x10000003
  .word 0x00000000
  .word 0x8e10004c
  .word 0x24a50001
  .word 0x00a2082a
  .word 0x10200003
  .word 0x00000000
  .word 0x1600fffa
  .word 0x00000000
  .word 0x8e22016c
  .word 0x2c410012
  .word 0x10200135
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463a420
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e220198
  .word 0xa6020014
  .word 0x8e22019c
  .word 0xa6020016
  .word 0x8e2201a0
  .word 0xa6020018
  .word 0x8e2201a4
  .word 0xa602001a
  .word 0x8e2201a8
  .word 0xa602001c
  .word 0x10000122
  .word 0x00000000
  .word 0x8e220198
  .word 0xa6020014
  .word 0x8e22019c
  .word 0xa6020016
  .word 0x8e2201a0
  .word 0xa6020018
  .word 0x1000011a
  .word 0x00000000
  .word 0x8e220198
  .word 0xae22003c
  .word 0x8e22019c
  .word 0xae220040
  .word 0x8e2201a0
  .word 0xa2220046
  .word 0x8e2201a4
  .word 0xa6220048
  .word 0x10000110
  .word 0x00000000
  .word 0x8e220198
  .word 0xa2220044
  .word 0x1000010c
  .word 0x00000000
  .word 0x8e220198
  .word 0xa2220045
  .word 0x10000108
  .word 0x00000000
  .word 0x8c830000
  .word 0x24020030
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x100000ff
  .word 0x00000000
  .word 0x8e220198
  .word 0xa6020014
  .word 0x8e22019c
  .word 0xa2020018
  .word 0x8e2201a0
  .word 0xa2020019
  .word 0x100000f7
  .word 0x00000000
  .word 0x8c830000
  .word 0x24020025
  .word 0x10620003
  .word 0x00000000
  .word 0x100000f1
  .word 0x00000000
  .word 0x8e220198
  .word 0xa2020011
  .word 0x8e22019c
  .word 0xa6020014
  .word 0x8e2201a0
  .word 0xa2020012
  .word 0x100000e9
  .word 0x00000000
  .word 0x8e020048
  .word 0xc6200198
  .word 0xe4400020
  .word 0xc620019c
  .word 0xe4400024
  .word 0xc62001a0
  .word 0xe4400028
  .word 0xc62001a4
  .word 0xe4400000
  .word 0xc62001a8
  .word 0xe4400004
  .word 0xc62001ac
  .word 0xe4400008
  .word 0xc62001b4
  .word 0xe4400010
  .word 0xc62001b0
  .word 0xe4400014
  .word 0x8e240210
  .word 0x0c0e2c50
  .word 0x00000000
  .word 0x100000d3
  .word 0x00000000
  .word 0x8e220198
  .word 0xa6020014
  .word 0x8e22019c
  .word 0xa6020016
  .word 0x8e2201a0
  .word 0xa6020018
  .word 0x8e2201a4
  .word 0xa602001a
  .word 0x8e2201a8
  .word 0xa602001c
  .word 0x8e2201ac
  .word 0xa602001e
  .word 0x100000c5
  .word 0x00000000
  .word 0x82020010
  .word 0x10400003
  .word 0x00000000
  .word 0x100000c0
  .word 0x00000000
  .word 0x8e220198
  .word 0xa2020011
  .word 0x8e22019c
  .word 0xa2020012
  .word 0x8e2201a0
  .word 0xa2020013
  .word 0x100000b8
  .word 0x00000000
  .word 0x8e220198
  .word 0xa2020011
  .word 0x8e22019c
  .word 0xa6020012
  .word 0x100000b2
  .word 0x00000000
  .word 0x8c830000
  .word 0x24020030
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x100000a9
  .word 0x00000000
  .word 0x82030010
  .word 0x24020006
  .word 0x10620003
  .word 0x00000000
  .word 0x100000a3
  .word 0x00000000
  .word 0xafa0005c
  .word 0xafa00058
  .word 0x27a4005c
  .word 0x27a50058
  .word 0x0c0e1884
  .word 0x00000000
  .word 0x8fa20058
  .word 0xc4400000
  .word 0xe6000018
  .word 0x8fa20058
  .word 0xc4400004
  .word 0xe600001c
  .word 0xae000020
  .word 0x10000094
  .word 0x00000000
  .word 0x8e220198
  .word 0xa6020014
  .word 0x8e22019c
  .word 0xa6020016
  .word 0x8e2201a0
  .word 0xa6020018
  .word 0x8e2201a4
  .word 0xa602001a
  .word 0x1000008a
  .word 0x00000000
  .word 0x8c830000
  .word 0x24020030
  .word 0x10620023
  .word 0x00000000
  .word 0x24020001
  .word 0x10620020
  .word 0x00000000
  .word 0x24020025
  .word 0x10620003
  .word 0x00000000
  .word 0x1000007e
  .word 0x00000000
  .word 0xafa00054
  .word 0xafa00050
  .word 0x27a40054
  .word 0x27a50050
  .word 0x0c0e1844
  .word 0x00000000
  .word 0x8fa20054
  .word 0xc4400000
  .word 0xe6000014
  .word 0x8fa20054
  .word 0xc4400004
  .word 0xe6000018
  .word 0x8fa20054
  .word 0xc4400008
  .word 0xe600001c
  .word 0x8fa20050
  .word 0xc4400000
  .word 0xe6000020
  .word 0x8fa20050
  .word 0xc4400004
  .word 0xe6000024
  .word 0x8fa20050
  .word 0xc4400008
  .word 0xe6000028
  .word 0x10000064
  .word 0x00000000
  .word 0x82030010
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000005e
  .word 0x00000000
  .word 0xafa0004c
  .word 0xafa00048
  .word 0x27a4004c
  .word 0x27a50048
  .word 0x0c0e1844
  .word 0x00000000
  .word 0x82030014
  .word 0x24020002
  .word 0x10620010
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000050
  .word 0x00000000
  .word 0x8fa2004c
  .word 0xc4400000
  .word 0xe6000018
  .word 0x8fa2004c
  .word 0xc4400004
  .word 0xe600001c
  .word 0x8fa2004c
  .word 0xc4400008
  .word 0xe6000020
  .word 0x10000045
  .word 0x00000000
  .word 0x8fa2004c
  .word 0xc4400000
  .word 0xe6000018
  .word 0x8fa2004c
  .word 0xc4400004
  .word 0xe600001c
  .word 0x8fa2004c
  .word 0xc4400008
  .word 0xe6000020
  .word 0x8fa20048
  .word 0xc4400000
  .word 0xe6000028
  .word 0x8fa20048
  .word 0xc4400004
  .word 0xe600002c
  .word 0x10000034
  .word 0x00000000
  .word 0xc6200198
  .word 0xe6000018
  .word 0xc620019c
  .word 0xe600001c
  .word 0xc62001a0
  .word 0xe6000020
  .word 0xc62001a4
  .word 0xe6000024
  .word 0xc62001a8
  .word 0xe6000028
  .word 0xc62001ac
  .word 0xe600002c
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c0e2988
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0x8c830000
  .word 0x24020021
  .word 0x10620003
  .word 0x00000000
  .word 0x1000001c
  .word 0x00000000
  .word 0xafa00044
  .word 0x27a40044
  .word 0x27a50040
  .word 0x27a6003c
  .word 0x27a70038
  .word 0x0c0e18e4
  .word 0x00000000
  .word 0x8fa2003c
  .word 0x8c420000
  .word 0x00021840
  .word 0x8fa20044
  .word 0x00431021
  .word 0x94420000
  .word 0xa6020014
  .word 0x8fa20038
  .word 0x8c420000
  .word 0xa6020016
  .word 0x10000009
  .word 0x00000000
  .word 0x8e220198
  .word 0xa6020014
  .word 0xc620019c
  .word 0xe6000018
  .word 0x10000003
  .word 0x00000000
  .word 0x8e220198
  .word 0xa622004a
  .word 0x0220202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


#pragma opt_common_subs reset
// FUN_00367A20


u64 FUN_00367a20(u64 param_1,u64 param_2,int param_3)



{

  char cVar1;

  int iVar2;

  u32 uVar3;

  u8 *lVar4;

  int iVar5;

  int iVar6;

  int iVar7;
  int limit;

  RwV4d source1;
  RwV4d target1;
  RwV4d source2;
  RwV4d target2;

  

  iVar6 = (int)param_3;

  iVar2 = *(int *)(iVar6 + 0x164);

  if (iVar2 == 0) {

    iVar7 = 0;

  }

  else {

    iVar7 = *(int *)(iVar2 + 0x6c);
    iVar5 = 0;
    limit = *(int *)(iVar6 + 0x160) + *(int *)(iVar6 + 0x15c);
    while ((iVar5 < limit) && (iVar7 != 0)) {
      iVar7 = *(int *)(iVar7 + 0x4c);
      iVar5 = iVar5 + 1;
    }

  }

  *(char *)(iVar7 + 0x14) = (char)*(u32 *)(iVar6 + 0x198);

  *(char *)(iVar7 + 0x15) = (char)*(u32 *)(iVar6 + 0x19c);

  *(short *)(iVar7 + 0x16) = (short)*(u32 *)(iVar6 + 0x1a0);

  *(char *)(iVar7 + 0x24) = (char)*(u32 *)(iVar6 + 0x1a4);

  *(char *)(iVar7 + 0x25) = (char)*(u32 *)(iVar6 + 0x1a8);

  *(char *)(iVar7 + 0x26) = (char)*(u32 *)(iVar6 + 0x1ac);

  if ((*(char *)(iVar7 + 0x14) == '\x01') && (*(int *)(iVar7 + 0x40) == 0)) {

    FUN_0038d790(iVar7);

  }

  if ((*(int *)(iVar6 + 400) == 6) && (*(int *)(iVar6 + 0x198) != 2)) {

    *(u32 *)(param_3 + 400) = 0;

    *(int *)(iVar6 + 0x1b8) = (int)*(char *)(iVar7 + 0x34);

    *(int *)(iVar6 + 0x1bc) = (int)*(char *)(iVar7 + 0x35);

    *(int *)(iVar6 + 0x1c0) = (int)*(char *)(iVar7 + 0x36);

    *(int *)(iVar6 + 0x1c4) = (int)*(char *)(iVar7 + 0x37);

    FUN_0036f5f0(0x2e,0xc,0x18,param_3);

  }

  else if (*(int *)(iVar6 + 400) == 7) {

    cVar1 = *(char *)(iVar7 + 0x14);

    if (cVar1 == '\0') {

      source1.x = *(f32 *)(iVar7 + 0x18);
      source1.y = *(f32 *)(iVar7 + 0x1c);
      source1.z = *(f32 *)(iVar7 + 0x20);
      target1.x = 0.0f;
      target1.y = 0.0f;
      target1.z = 0.0f;
      uVar3 = FUN_00386130(param_3,(u32 *)&source1,(u32 *)&target1);

      *(u32 *)(iVar6 + 0xe8) = uVar3;

      FUN_0036f5f0(0x1a,0,0,param_3);

    }

    else if (cVar1 == '\x01') {

      lVar4 = FUN_003b5d10_evt_main(*(u16 *)(iVar2 + 0xc));

      if (lVar4 != 0) {

        FUN_0037cf50((u32 *)(*(u32 *)(iVar7 + 0x40)),(u32 *)(lVar4 + 4),(u32 *)(lVar4 + 0x10));

        FUN_0036f5f0(0x1c,0xc,0x1c,param_3);

      }

    }

    else if (cVar1 == '\x02') {

      source2.x = *(f32 *)(iVar7 + 0x18);
      source2.y = *(f32 *)(iVar7 + 0x1c);
      source2.z = *(f32 *)(iVar7 + 0x20);
      target2.x = *(f32 *)(iVar7 + 0x28);
      target2.y = *(f32 *)(iVar7 + 0x2c);
      target2.z = 0.0f;
      uVar3 = FUN_00386130(param_3,(u32 *)&source2,(u32 *)&target2);

      *(u32 *)(iVar6 + 0xe8) = uVar3;

      FUN_0036f5f0(0x1a,0,0,param_3);

    }

  }

  else {

    FUN_0036f640(param_3);

  }

  return 0;

}


// FUN_00367CB0


u64 FUN_00367cb0(u64 param_1,u64 param_2,int param_3)



{

  u32 uVar1;

  u32 uVar2;

  int iVar5;

  int iVar3;

  u32 *puVar7;

  u32 *puVar6;

  int iVar4;

  

  iVar4 = (int)param_3;

  if (*(int *)(iVar4 + 0x164) == 0) {

    iVar5 = 0;

  }

  else {

    iVar5 = *(int *)(*(int *)(iVar4 + 0x164) + 0x6c);
    iVar3 = 0;
    iVar4 = *(int *)(iVar4 + 0x160) + *(int *)(iVar4 + 0x15c);
    for (; (iVar3 < iVar4 && (iVar5 != 0));) {

      iVar5 = *(int *)(iVar5 + 0x4c);
      iVar3 = iVar3 + 1;

    }

  }

  puVar7 = *(u32 **)(iVar5 + 0x40);

  if (puVar7 != (u32 *)0x0) {

    puVar6 = (u32 *)DAT_00958700_abs;

    iVar4 = 0x26;

    do {

      uVar1 = *puVar6;

      uVar2 = puVar6[1];

      puVar6 = puVar6 + 2;

      iVar4 = iVar4 + -1;

      *puVar7 = uVar1;

      puVar7[1] = uVar2;

      puVar7 = puVar7 + 2;

    } while (0 < iVar4);

  }

  FUN_0036f640(param_3);

  return 0;

}


// FUN_00367D70


u64 FUN_00367d70(u64 param_1,u64 param_2,int param_3)



{

  int iVar2;

  int iVar1;

  int iVar3;

  int iVar4;

  

  iVar3 = (int)param_3;

  if (*(int *)(iVar3 + 0x164) == 0) {

    iVar2 = 0;

  }

  else {

    iVar2 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);

    iVar1 = 0;

    iVar4 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);

    for (; (iVar1 < iVar4 && (iVar2 != 0));) {

      iVar2 = *(int *)(iVar2 + 0x4c);

      iVar1 = iVar1 + 1;

    }

  }

  *(char *)(iVar2 + 0x15) = (char)*(u32 *)(iVar3 + 0x198);

  *(char *)(iVar2 + 0x14) = (char)*(u32 *)(iVar3 + 0x19c);

  FUN_0036f640(param_3);

  return 0;

}


// FUN_00367E00


u64 FUN_00367e00(u64 param_1,u64 param_2,int param_3)



{

  int iVar2;

  int iVar1;

  int iVar3;

  int iVar4;

  

  iVar3 = (int)param_3;

  if (*(int *)(iVar3 + 0x164) == 0) {

    iVar2 = 0;

  }

  else {

    iVar2 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);

    iVar1 = 0;

    iVar4 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);

    for (; (iVar1 < iVar4 && (iVar2 != 0));) {

      iVar2 = *(int *)(iVar2 + 0x4c);

      iVar1 = iVar1 + 1;

    }

  }

  *(short *)(iVar2 + 0x1c) = (short)*(u32 *)(iVar3 + 0x198);

  *(short *)(iVar2 + 0x1e) = (short)*(u32 *)(iVar3 + 0x19c);

  *(char *)(iVar2 + 0x20) = (char)*(u32 *)(iVar3 + 0x1a0);

  *(short *)(iVar2 + 0x14) = (short)*(u32 *)(iVar3 + 0x1a4);

  *(short *)(iVar2 + 0x16) = (short)*(u32 *)(iVar3 + 0x1a8);

  *(short *)(iVar2 + 0x18) = (short)*(u32 *)(iVar3 + 0x1ac);

  *(short *)(iVar2 + 0x1a) = (short)*(u32 *)(iVar3 + 0x1b0);

  *(char *)(iVar2 + 0x22) = (char)*(u32 *)(iVar3 + 0x1b4);

  FUN_0036f640(param_3);

  return 0;

}


// FUN_00367EC0


u64 FUN_00367ec0(u64 param_1,u64 param_2,int param_3)



{

  int iVar1;

  u32 uVar2;

  u32 lVar3;

  int iVar4;

  int iVar5;

  int iVar6;

  int limit;

  f32 source[3];

  f32 target[3];

  

  iVar5 = (int)param_3;

  iVar1 = *(int *)(iVar5 + 0x164);

  if (iVar1 == 0) {

    iVar6 = 0;

  }

  else {

    iVar6 = *(int *)(iVar1 + 0x6c);
    iVar4 = 0;
    limit = *(int *)(iVar5 + 0x160) + *(int *)(iVar5 + 0x15c);
    while ((iVar4 < limit) && (iVar6 != 0)) {
      iVar6 = *(int *)(iVar6 + 0x4c);
      iVar4 = iVar4 + 1;
    }

  }

  *(char *)(iVar6 + 0x14) = (char)*(u32 *)(iVar5 + 0x198);

  *(char *)(iVar6 + 0x15) = (char)*(u32 *)(iVar5 + 0x19c);

  if (*(int *)(iVar5 + 0x198) != 0) {

    *(u32 *)(iVar6 + 0x18) = 0;

    *(u32 *)(iVar6 + 0x1c) = 0;

    *(u32 *)(iVar6 + 0x20) = 0;

  }

  if ((*(int *)(iVar5 + 400) == 2) && (*(int *)(iVar5 + 0x198) == 0)) {

    if (((iVar1 != 0) && (lVar3 = FUN_003b5d10(*(u16 *)(iVar1 + 0xc)), lVar3 != 0)) &&

       (*(char *)(iVar6 + 0x14) == '\0')) {

      iVar1 = (int)lVar3;

      source[0] = *(f32 *)(iVar1 + 4);

      source[1] = *(f32 *)(iVar1 + 8);

      source[2] = *(f32 *)(iVar1 + 0xc);

      target[0] = *(f32 *)(iVar6 + 0x18);

      target[1] = *(f32 *)(iVar6 + 0x1c);

      target[2] = 0.0f;

      uVar2 = FUN_00386230(param_3,(u32 *)source,(u32 *)target);

      *(u32 *)(iVar5 + 0xe8) = uVar2;

      FUN_0036f5f0(0x1a,0,0,param_3);

    }

  }

  else {

    FUN_0036f640(param_3);

  }

  return 0;

}


// FUN_00368020


u64 FUN_00368020(u64 param_1,u64 param_2,int param_3)



{

  int iVar2;

  int iVar1;

  int iVar3;

  int iVar4;

  

  iVar3 = (int)param_3;

  if (*(int *)(iVar3 + 0x164) == 0) {

    iVar2 = 0;

  }

  else {

    iVar2 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);

    iVar1 = 0;

    iVar4 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);

    for (; (iVar1 < iVar4 && (iVar2 != 0));) {

      iVar2 = *(int *)(iVar2 + 0x4c);

      iVar1 = iVar1 + 1;

    }

  }

  *(char *)(iVar2 + 0x10) = (char)*(u32 *)(iVar3 + 0x198);

  *(char *)(iVar2 + 0x11) = (char)*(u32 *)(iVar3 + 0x19c);

  *(char *)(iVar2 + 0x12) = (char)*(u32 *)(iVar3 + 0x1a0);

  *(char *)(iVar2 + 0x13) = (char)*(u32 *)(iVar3 + 0x1a4);

  *(short *)(iVar2 + 0x18) = (short)*(u32 *)(iVar3 + 0x1a8);

  *(short *)(iVar2 + 0x1a) = (short)*(u32 *)(iVar3 + 0x1ac);

  *(short *)(iVar2 + 0x1c) = (short)*(u32 *)(iVar3 + 0x1b0);

  *(short *)(iVar2 + 0x1e) = (short)*(u32 *)(iVar3 + 0x1b4);

  FUN_0036f640(param_3);

  return 0;

}


// FUN_003680E0
u64 FUN_003680e0(u64 param_1,u64 param_2,int param_3)



{

  char cVar1;

  int *piVar2;

  u8 *puVar3;

  u8 *puVar4;

  u8 *puVar5;

  int iVar6;

  int iVar7;

  int iVar8;

  int limit;

  u8 auStack_20 [16];

  u8 auStack_10 [16];

  

  iVar7 = (int)param_3;

  piVar2 = *(int **)(iVar7 + 0x164);

  if (piVar2 == (int *)0x0) {

    iVar8 = 0;

  }

  else {

    iVar8 = piVar2[0x1b];
    iVar6 = 0;
    limit = *(int *)(iVar7 + 0x160) + *(int *)(iVar7 + 0x15c);
    while ((iVar6 < limit) && (iVar8 != 0)) {
      iVar8 = *(int *)(iVar8 + 0x4c);
      iVar6 = iVar6 + 1;
    }

  }

  iVar6 = *(int *)(iVar7 + 400);

  if (iVar6 == 0) {
    puVar3 = auStack_20;
    limit = 0xc;
    if (puVar3 != (u8 *)0x0) {
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
        limit = limit + -1;
      } while (limit != 0);
    }
    puVar3 = auStack_10;
    limit = 0xc;
    if (puVar3 != (u8 *)0x0) {
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
        limit = limit + -1;
      } while (limit != 0);
    }

    switch (*piVar2) {
    case 0x29:
      switch (*(char *)(iVar8 + 0x10)) {
      case '\0':
      case '\x05':
        if (*(int *)(iVar8 + 0x40) == 0) {
          FUN_0038d790(iVar8);
        }
        FUN_0037cf50((u32 *)(*(u32 *)(iVar8 + 0x40)),(u32 *)auStack_20,(u32 *)auStack_10);
        FUN_0036f5f0(0x1c,0xc,0x1c,param_3);
        break;
      }
      break;
    }

  }

  else if (iVar6 == 1) {

    switch (*piVar2) {
    case 0x29:
      switch (*(char *)(iVar8 + 0x10)) {
      case '\0':
      case '\x05':
      case '\x04':
      case '\x03':
        *(u32 *)(iVar7 + 0x108) = 0;
        *(u32 *)(iVar7 + 0x110) = 0;
        *(u32 *)(iVar7 + 0x660) = 3;
        FUN_0036f5f0(10,0x26,0xd,param_3);
        break;
      }
      break;
    }
  }

  else if (iVar6 == 2) {

    FUN_0036f640(param_3);

  }

  return 0;

}


// FUN_003682F0


u64 FUN_003682f0(u64 param_1,u64 param_2,int param_3)



{

  int iVar2;

  int iVar1;

  int iVar3;

  int iVar4;

  

  iVar3 = (int)param_3;

  if (*(int *)(iVar3 + 0x164) == 0) {

    iVar2 = 0;

  }

  else {

    iVar2 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);

    iVar1 = 0;

    iVar4 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);

    for (; (iVar1 < iVar4 && (iVar2 != 0));) {

      iVar2 = *(int *)(iVar2 + 0x4c);

      iVar1 = iVar1 + 1;

    }

  }

  *(short *)(iVar2 + 0x10) = (short)*(u32 *)(iVar3 + 0x198);

  *(short *)(iVar2 + 0x12) = (short)*(u32 *)(iVar3 + 0x19c);

  *(short *)(iVar2 + 0x14) = (short)*(u32 *)(iVar3 + 0x1a0);

  *(short *)(iVar2 + 0x16) = (short)*(u32 *)(iVar3 + 0x1a4);

  *(short *)(iVar2 + 0x18) = (short)*(u32 *)(iVar3 + 0x1a8);

  *(short *)(iVar2 + 0x1a) = (short)*(u32 *)(iVar3 + 0x1ac);

  FUN_0036f640(param_3);

  return 0;

}


// FUN_003683A0


u64 FUN_003683a0(u64 param_1,u64 param_2,int param_3)



{

  int iVar2;

  int iVar1;

  int iVar3;

  int iVar4;

  

  iVar3 = (int)param_3;

  if (*(int *)(iVar3 + 0x164) == 0) {

    iVar2 = 0;

  }

  else {

    iVar2 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);

    iVar1 = 0;

    iVar4 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);

    for (; (iVar1 < iVar4 && (iVar2 != 0));) {

      iVar2 = *(int *)(iVar2 + 0x4c);

      iVar1 = iVar1 + 1;

    }

  }

  *(char *)(iVar2 + 0x14) = (char)*(u32 *)(iVar3 + 0x198);

  *(char *)(iVar2 + 0x15) = (char)*(u32 *)(iVar3 + 0x19c);

  *(char *)(iVar2 + 0x16) = (char)*(u32 *)(iVar3 + 0x1a0);

  *(u32 *)(iVar2 + 0x18) = *(u32 *)(iVar3 + 0x1a4);

  FUN_0036f640(param_3);

  return 0;

}


// FUN_00368440


u64 FUN_00368440(u64 param_1,u64 param_2,int param_3)



{

  int iVar2;

  int iVar1;

  int iVar3;

  int iVar4;

  

  iVar3 = (int)param_3;

  if (*(int *)(iVar3 + 0x164) == 0) {

    iVar2 = 0;

  }

  else {

    iVar2 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);

    iVar1 = 0;

    iVar4 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);

    for (; (iVar1 < iVar4 && (iVar2 != 0));) {

      iVar2 = *(int *)(iVar2 + 0x4c);

      iVar1 = iVar1 + 1;

    }

  }

  *(short *)(iVar2 + 0x10) = (short)*(u32 *)(iVar3 + 0x198);

  *(short *)(iVar2 + 0x12) = (short)*(u32 *)(iVar3 + 0x19c);

  FUN_0036f640(param_3);

  return 0;

}


// FUN_003684D0


u64 FUN_003684d0(u64 param_1,u64 param_2,int param_3,int param_4)
{
  int iVar2;
  int iVar1;
  int iVar3;
  int iVar4;
  int context;

  iVar3 = param_3;
  context = iVar3;
  if (*(int *)(iVar3 + 0x164) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);
    iVar1 = 0;
    iVar4 = *(int *)(context + 0x160) + *(int *)(context + 0x15c);
    for (;
        (iVar1 < iVar4 && (iVar2 != 0));
        iVar2 = *(int *)(iVar2 + 0x4c), iVar1 = iVar1 + 1) {
    }
  }
  if (*(int *)(context + 400) == 6) {
    *(u32 *)(context + 0x108) = 0;
    *(u32 *)(context + 0x110) = 0;
    *(u32 *)(context + 0x660) = 3;
    FUN_0036f5f0(10,0x26,0xd,param_3);
  }
  else {
    *(char *)(iVar2 + 0x14) = (char)*(u32 *)(context + 0x198);
    *(char *)(iVar2 + 0x15) = (char)*(u32 *)(context + 0x19c);
    *(char *)(iVar2 + 0x18) = (char)*(u32 *)(context + 0x1a0);
    *(char *)(iVar2 + 0x19) = (char)*(u32 *)(context + 0x1a4);
    *(char *)(iVar2 + 0x1a) = (char)*(u32 *)(context + 0x1a8);
    *(char *)(iVar2 + 0x1b) = (char)*(u32 *)(context + 0x1ac);
    FUN_0036f640(param_3);
  }
  return 0;
}


// FUN_003685C0


u64 FUN_003685c0(u64 param_1,u64 param_2,int param_3)



{

  int iVar2;

  int iVar1;

  int iVar3;

  int iVar4;

  

  iVar3 = (int)param_3;

  if (*(int *)(iVar3 + 0x164) == 0) {

    iVar2 = 0;

  }

  else {

    iVar2 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);

    iVar1 = 0;

    iVar4 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);

    for (; (iVar1 < iVar4 && (iVar2 != 0));) {

      iVar2 = *(int *)(iVar2 + 0x4c);

      iVar1 = iVar1 + 1;

    }

  }

  *(char *)(iVar2 + 0x10) = (char)*(u32 *)(iVar3 + 0x198);

  *(char *)(iVar2 + 0x14) = (char)*(u32 *)(iVar3 + 0x19c);

  *(char *)(iVar2 + 0x15) = (char)*(u32 *)(iVar3 + 0x1a0);

  *(char *)(iVar2 + 0x16) = (char)*(u32 *)(iVar3 + 0x1a4);

  *(short *)(iVar2 + 0x18) = (short)*(u32 *)(iVar3 + 0x1a8);

  *(short *)(iVar2 + 0x1a) = (short)*(u32 *)(iVar3 + 0x1ac);

  *(short *)(iVar2 + 0x1c) = (short)*(u32 *)(iVar3 + 0x1b0);

  *(short *)(iVar2 + 0x1e) = (short)*(u32 *)(iVar3 + 0x1b4);

  FUN_0036f640(param_3);

  return 0;

}


// FUN_00368680


u64 FUN_00368680(u64 param_1,u64 param_2,int param_3)



{

  int iVar2;

  int iVar1;

  int iVar3;

  int iVar4;

  

  iVar3 = (int)param_3;

  if (*(int *)(iVar3 + 0x164) == 0) {

    iVar2 = 0;

  }

  else {

    iVar2 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);

    iVar1 = 0;

    iVar4 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);

    for (; (iVar1 < iVar4 && (iVar2 != 0));) {

      iVar2 = *(int *)(iVar2 + 0x4c);

      iVar1 = iVar1 + 1;

    }

  }

  *(short *)(iVar2 + 0x10) = (short)*(u32 *)(iVar3 + 0x198);

  *(short *)(iVar2 + 0x12) = (short)*(u32 *)(iVar3 + 0x19c);

  FUN_0036f640(param_3);

  return 0;

}


// FUN_00368710


u32 FUN_00368710(int param_1,int param_2,int param_3)



{

  int *piVar1;

  int iVar4;

  int iVar3;

  int iVar2;
  int iVar5;

  

  iVar3 = (int)param_3;

  piVar1 = *(int **)(iVar3 + 0x164);

  if (piVar1 == (int *)0x0) {

    iVar4 = 0;

  }

  else {

    iVar4 = piVar1[0x1b];

    iVar2 = 0;
    iVar5 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);

    for (;

        (iVar2 < iVar5 && (iVar4 != 0));) {

      iVar4 = *(int *)(iVar4 + 0x4c);

      iVar2 = iVar2 + 1;

    }

  }

  switch (*piVar1) {

  case 0x21:
    *(char *)(iVar4 + 0x30) = (char)*(u32 *)(iVar3 + 0x198);

    break;

  default:
    break;

  }

  FUN_0036f640(param_3);

  return 0;

}


// FUN_003687B0


u64 FUN_003687b0(u64 param_1,u64 param_2,int param_3)



{

  int iVar2;

  int iVar1;

  int iVar3;

  int iVar4;

  

  iVar3 = (int)param_3;

  if (*(int *)(iVar3 + 0x164) == 0) {

    iVar2 = 0;

  }

  else {

    iVar2 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);

    iVar1 = 0;

    iVar4 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);

    for (; (iVar1 < iVar4 && (iVar2 != 0));) {

      iVar2 = *(int *)(iVar2 + 0x4c);

      iVar1 = iVar1 + 1;

    }

  }

  *(short *)(iVar2 + 0x14) = (short)*(u32 *)(iVar3 + 0x198);

  FUN_0036f640(param_3);

  return 0;

}


// FUN_00368830


u64 FUN_00368830(u64 param_1,u64 param_2,int param_3)



{

  int iVar2;

  int iVar1;

  int iVar3;

  int iVar4;

  

  iVar3 = (int)param_3;

  if (*(int *)(iVar3 + 0x164) == 0) {

    iVar2 = 0;

  }

  else {

    iVar2 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);

    iVar1 = 0;

    iVar4 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);

    for (; (iVar1 < iVar4 && (iVar2 != 0));) {

      iVar2 = *(int *)(iVar2 + 0x4c);

      iVar1 = iVar1 + 1;

    }

  }

  *(char *)(iVar2 + 0x14) = (char)*(u32 *)(iVar3 + 0x198);

  *(char *)(iVar2 + 0x15) = (char)*(u32 *)(iVar3 + 0x19c);

  *(short *)(iVar2 + 0x16) = (short)*(u32 *)(iVar3 + 0x1a0);

  *(short *)(iVar2 + 0x18) = (short)*(u32 *)(iVar3 + 0x1a4);

  *(short *)(iVar2 + 0x1a) = (short)*(u32 *)(iVar3 + 0x1a8);

  FUN_0036f640(param_3);

  return 0;

}


// FUN_003688D0


u64 FUN_003688d0(u64 param_1,u64 param_2,int param_3,int param_4)



{

  int iVar2;

  int iVar1;

  int iVar3;
  int iVar4;

  int context;

  

  iVar3 = (int)param_3;
  context = iVar3;


  if (*(int *)(iVar3 + 0x164) == 0) {

    iVar2 = 0;

  }

  else {

    iVar2 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);

    iVar1 = 0;
    iVar4 = *(int *)(context + 0x160) + *(int *)(context + 0x15c);

    for (;
        (iVar1 < iVar4 && (iVar2 != 0));
        iVar2 = *(int *)(iVar2 + 0x4c), iVar1 = iVar1 + 1) {
    }

  }

  if (*(int *)(context + 400) == 4) {

    *(u32 *)(context + 0x108) = 0;

    *(u32 *)(context + 0x110) = 0;

    *(u32 *)(context + 0x660) = 3;

    FUN_0036f5f0(10,0x26,0xd,context);

  }

  else {

    *(short *)(iVar2 + 0x14) = (short)*(u32 *)(context + 0x198);

    *(short *)(iVar2 + 0x16) = (short)*(u32 *)(context + 0x19c);

    *(short *)(iVar2 + 0x18) = (short)*(u32 *)(context + 0x1a0);

    *(short *)(iVar2 + 0x1a) = (short)*(u32 *)(context + 0x1a4);

    *(short *)(iVar2 + 0x1e) = (short)*(u32 *)(context + 0x1ac);

    *(short *)(iVar2 + 0x20) = (short)*(u32 *)(context + 0x1b0);

    *(char *)(iVar2 + 0x24) = (char)*(short *)(context + 0x1b4);

    FUN_0036f640(context);

  }

  return 0;

}


// FUN_003689C0


u32 FUN_003689c0(int param_1,int param_2,int param_3)



{

  int iVar1;

  int iVar2;

  int iVar3;
  int iVar4;

  

  iVar3 = (int)param_3;

  if (*(int *)(iVar3 + 0x164) != 0) {

    iVar1 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);
    iVar2 = 0;
    iVar4 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);
    for (; (iVar2 < iVar4 && (iVar1 != 0));) {

      iVar1 = *(int *)(iVar1 + 0x4c);
      iVar2 = iVar2 + 1;

    }

  }

  FUN_0036f640(param_3);

  return 0;

}


// FUN_00368A30


u64 FUN_00368a30(u64 param_1,u64 param_2,int param_3,int param_4)



{

  int iVar2;

  int iVar1;

  int iVar3;

  int iVar4;
  int context;


  

  iVar3 = (int)param_3;

  context = iVar3;

  if (*(int *)(iVar3 + 0x164) == 0) {

    iVar2 = 0;

  }

  else {

    iVar2 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);

    iVar1 = 0;
    iVar4 = *(int *)(context + 0x160) + *(int *)(context + 0x15c);

    for (;
        (iVar1 < iVar4 && (iVar2 != 0));

        iVar2 = *(int *)(iVar2 + 0x4c), iVar1 = iVar1 + 1) {
    }

  }

  if (*(int *)(context + 400) == 1) {

    *(u32 *)(context + 0x108) = 0;

    *(u32 *)(context + 0x110) = 0;

    *(u32 *)(context + 0x660) = 3;

    FUN_0036f5f0(10,0xd,7,context);

  }

  else {

    *(char *)(iVar2 + 0x14) = (char)*(u32 *)(context + 0x198);

    *(char *)(iVar2 + 0x18) = (char)*(u32 *)(context + 0x1a0);

    FUN_0036f640(context);

  }

  return 0;

}


// FUN_00368B00


u64 FUN_00368b00(u64 param_1,int param_2,int param_3)



{

  int *piVar1;

  int iVar3;

  int iVar4;

  int iVar5;

  int iVar1;

  int iVar6;

  

  iVar3 = (int)param_3;

  piVar1 = *(int **)(iVar3 + 0x164);

  if (piVar1 == (int *)0x0) {

    iVar4 = 0;

  }

  else {
    iVar4 = piVar1[0x1b];
    {
      int iVar6 = 0;

      iVar1 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);
      for (; (iVar6 < iVar1 && (iVar4 != 0));
          iVar4 = *(int *)(iVar4 + 0x4c), iVar6 = iVar6 + 1) {
      }
    }


  }

  switch (*piVar1) {
  case 1:
  case 0x30:
    switch (*(char *)(iVar4 + 0x10)) {
    case 1:
      *(char *)(iVar4 + 0x34) = (char)*(u32 *)(iVar3 + 0x1b8);
      *(char *)(iVar4 + 0x35) = (char)*(u32 *)(iVar3 + 0x1bc);
      *(char *)(iVar4 + 0x36) = (char)*(u32 *)(iVar3 + 0x1c0);
      *(char *)(iVar4 + 0x37) = (char)*(u32 *)(iVar3 + 0x1c4);
      break;
    case 4:
      *(char *)(iVar4 + 0x28) = (char)*(u32 *)(iVar3 + 0x1b8);
      *(char *)(iVar4 + 0x29) = (char)*(u32 *)(iVar3 + 0x1bc);
      *(char *)(iVar4 + 0x2a) = (char)*(u32 *)(iVar3 + 0x1c0);
      *(char *)(iVar4 + 0x2b) = (char)*(u32 *)(iVar3 + 0x1c4);
      break;
    }
    break;
  }

  FUN_0036f640(param_3);

  return 0;

}


// FUN_00368C10


u64 FUN_00368c10(u64 param_1,u64 param_2,int param_3)



{

  int iVar2;

  int iVar1;

  int iVar3;

  int iVar4;

  

  iVar3 = (int)param_3;

  if (*(int *)(iVar3 + 0x164) == 0) {

    iVar2 = 0;

  }

  else {

    iVar2 = *(int *)(*(int *)(iVar3 + 0x164) + 0x6c);

    iVar1 = 0;

    iVar4 = *(int *)(iVar3 + 0x160) + *(int *)(iVar3 + 0x15c);

    for (; (iVar1 < iVar4 && (iVar2 != 0));) {

      iVar2 = *(int *)(iVar2 + 0x4c);

      iVar1 = iVar1 + 1;

    }

  }

  *(char *)(iVar2 + 0x10) = (char)*(u32 *)(iVar3 + 0x198);

  *(char *)(iVar2 + 0x11) = (char)*(u32 *)(iVar3 + 0x19c);

  *(char *)(iVar2 + 0x12) = (char)*(u32 *)(iVar3 + 0x1a0);

  *(char *)(iVar2 + 0x13) = (char)*(u32 *)(iVar3 + 0x1a4);

  FUN_0036f640(param_3);

  return 0;

}


// FUN_00368CB0


u64 FUN_00368cb0(u64 param_1,u64 param_2,int param_3)



{

  int iVar5;

  int iVar3;

  int iVar1;

  int iVar2;

  int iVar4;

  

  iVar2 = (int)param_3;

  iVar5 = *(int *)(iVar2 + 0x16c);

  if (*(int *)(iVar2 + 0x164) == 0) {

    iVar3 = 0;

  }

  else {

    iVar3 = *(int *)(*(int *)(iVar2 + 0x164) + 0x6c);

    iVar1 = 0;

    iVar4 = *(int *)(iVar2 + 0x160) + *(int *)(iVar2 + 0x15c);

    for (; (iVar1 < iVar4 && (iVar3 != 0));) {

      iVar3 = *(int *)(iVar3 + 0x4c);

      iVar1 = iVar1 + 1;

    }

  }

  if (iVar3 == 0) {

    return 0;

  }

  *(short *)(iVar3 + 0x10) = (short)iVar5;

  *(char *)(iVar3 + 0x15) = (char)*(u32 *)(iVar2 + 0x198);

  *(char *)(iVar3 + 0x16) = (char)*(u32 *)(iVar2 + 0x19c);

  if ((*(short *)(iVar3 + 0x10) >> 0xc & 0xfU) != 0) {

    *(u16 *)(iVar3 + 0x12) = 0;

  }

  FUN_0036f640(param_3);

  return 0;

}


// FUN_00368D70


u32 FUN_00368d70(u64 param_1,u64 param_2,int param_3)



{

  int iVar1;
  int iVar6;
  int bVar2;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;

  

  iVar6 = (int)param_3;
  bVar2 = false;
  iVar1 = *(int *)(iVar6 + 0x104);

  switch (iVar1) {
  case 0:
  case 1:
  case 2:

    FUN_00386e20(param_3,uGpffff9d78);

    FUN_00386e40(param_3,uGpffff9d7c);

    uVar4 = FUN_00386e10(param_3);

    uVar5 = FUN_00386e30(param_3);

    FUN_00523ac8(iVar6 + 0x144,(int)DAT_0069d7a0,uVar4,uVar5);

    iVar1 = *(int *)(iVar6 + 0x104);

    if (iVar1 == 0) {

      FUN_0038e860_i(1,param_3);

    }

    else if (iVar1 == 1) {

      uVar4 = FUN_00386e10(param_3);

      uVar5 = FUN_00386e30(param_3);

      FUN_00393e30_evt_main((u32)param_3,uVar4,uVar5,0,0,FUN_0036e690);

    }

    else if (iVar1 == 2) {

      uVar4 = FUN_00386e10(param_3);

      uVar5 = FUN_00386e30(param_3);

      FUN_00393e30_evt_main((u32)param_3,uVar4,uVar5,0,1,FUN_0036e690);

    }

    bVar2 = true;

    break;
  default:

    FUN_0019d3f0((int)DAT_0069d580,0x1efb);
  }


  if (bVar2) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }

  return uVar3;

}


/* W367 pragma probe: opt_loop_invariants on nd 296 -> 275; off nd 296; object 996/1024. */
#pragma opt_loop_invariants on
// FUN_00368F20


#ifndef PC_BUILD
asm u64 FUN_00368f20(u64 param_1,int param_2,u8 *param_3)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0a82d
  .word 0x00c0a02d
  .word 0x8cc20164
  .word 0x14400004
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000f
  .word 0x00000000
  .word 0x8c50006c
  .word 0x0000202d
  .word 0x8e830160
  .word 0x8e82015c
  .word 0x00621021
  .word 0x10000003
  .word 0x00000000
  .word 0x8e10004c
  .word 0x24840001
  .word 0x0082082a
  .word 0x10200003
  .word 0x00000000
  .word 0x1600fffa
  .word 0x00000000
  .word 0x16000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000d2
  .word 0x00000000
  .word 0x0c0ed740
  .word 0x00000000
  .word 0x0040882d
  .word 0x16200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000ca
  .word 0x00000000
  .word 0x8e830108
  .word 0x8e820110
  .word 0x00621021
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000001f
  .word 0x00000000
  .word 0x0000102d
  .word 0x0000982d
  .word 0x0000902d
  .word 0x10000017
  .word 0x00000000
  .word 0x8e830660
  .word 0x14720013
  .word 0x00000000
  .word 0x324500ff
  .word 0x0220202d
  .word 0x0c0ed50c
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x26730001
  .word 0x8e840108
  .word 0x8e830110
  .word 0x00831821
  .word 0x16630004
  .word 0x00000000
  .word 0x24120016
  .word 0x10000004
  .word 0x00000000
  .word 0x8c4200f8
  .word 0x1440fff5
  .word 0x00000000
  .word 0x26520001
  .word 0x2a430016
  .word 0x1460ffe8
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000002
  .word 0x00000000
  .word 0x94430000
  .word 0x3063ffff
  .word 0x24040017
  .word 0x16a40011
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x8e82016c
  .word 0xafa2007c
  .word 0xa7a3007e
  .word 0x8fa2007c
  .word 0xae82016c
  .word 0x1000008d
  .word 0x00000000
  .word 0x8e82016c
  .word 0xafa20078
  .word 0xa7a3007a
  .word 0x8fa20078
  .word 0xae82016c
  .word 0x10000086
  .word 0x00000000
  .word 0x8e820164
  .word 0x8c420000
  .word 0x00022040
  .word 0x00822021
  .word 0x00042880
  .word 0x3c04006a
  .word 0x2484e1a2
  .word 0x00852821
  .word 0x8e840158
  .word 0x00852021
  .word 0x80850000
  .word 0x24040013
  .word 0x10a40070
  .word 0x00000000
  .word 0x2404000a
  .word 0x10a40057
  .word 0x00000000
  .word 0x2404001c
  .word 0x10a40025
  .word 0x00000000
  .word 0x2404001d
  .word 0x10a40014
  .word 0x00000000
  .word 0x2403000d
  .word 0x10a30003
  .word 0x00000000
  .word 0x1000006a
  .word 0x00000000
  .word 0x24030015
  .word 0x10430006
  .word 0x00000000
  .word 0x24030014
  .word 0x10430003
  .word 0x00000000
  .word 0x10000062
  .word 0x00000000
  .word 0x2403ffff
  .word 0x8e820114
  .word 0x00501021
  .word 0xa0430014
  .word 0x1000005c
  .word 0x00000000
  .word 0x24040031
  .word 0x10440009
  .word 0x00000000
  .word 0x2404002f
  .word 0x10440003
  .word 0x00000000
  .word 0x10000054
  .word 0x00000000
  .word 0xa6030012
  .word 0x10000051
  .word 0x00000000
  .word 0xa6030012
  .word 0x1000004e
  .word 0x00000000
  .word 0x24040029
  .word 0x10440003
  .word 0x00000000
  .word 0x10000049
  .word 0x00000000
  .word 0x82020010
  .word 0x2c41000a
  .word 0x10200045
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484a470
  .word 0x00021080
  .word 0x00441021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0xa6030014
  .word 0x0003143c
  .word 0x0002143f
  .word 0xae820198
  .word 0x10000038
  .word 0x00000000
  .word 0xa603001c
  .word 0x3062ffff
  .word 0xae8201b0
  .word 0x10000033
  .word 0x00000000
  .word 0x8e840190
  .word 0x24020004
  .word 0x14820005
  .word 0x00000000
  .word 0xa603001c
  .word 0x0003143c
  .word 0x0002143f
  .word 0xae8201a8
  .word 0x3c04006a
  .word 0x2484d7b0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0xa6030016
  .word 0x0003143c
  .word 0x0002143f
  .word 0xae82019c
  .word 0x1000001f
  .word 0x00000000
  .word 0x24030012
  .word 0x10430010
  .word 0x00000000
  .word 0x24030009
  .word 0x10430019
  .word 0x00000000
  .word 0x2403001a
  .word 0x10430006
  .word 0x00000000
  .word 0x24030003
  .word 0x10430003
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x2402ffff
  .word 0xa6020016
  .word 0x1000000d
  .word 0x00000000
  .word 0x2402ffff
  .word 0xa6020012
  .word 0x10000009
  .word 0x00000000
  .word 0x82030010
  .word 0x24020003
  .word 0x10620003
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x2402ffff
  .word 0xa6020014
  .word 0x0280202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0060
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
#endif /* PC_BUILD: asm function omitted */


#pragma opt_loop_invariants reset
/* W367 pragma probe: opt_loop_invariants on nd 886 -> 879; off nd 886; object 1396/1408. */
#pragma opt_loop_invariants on
// FUN_00369320


#ifndef PC_BUILD
asm u64 FUN_00369320(u64 param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00c0882d
  .word 0x8cd0016c
  .word 0xc4c10184
  .word 0x8cc200dc
  .word 0x1440003c
  .word 0x00000000
  .word 0x8e230104
  .word 0x2402000b
  .word 0x10620026
  .word 0x00000000
  .word 0x24020006
  .word 0x1062000e
  .word 0x00000000
  .word 0x24020005
  .word 0x10620003
  .word 0x00000000
  .word 0x10000056
  .word 0x00000000
  .word 0x26020001
  .word 0xae22000c
  .word 0x0220202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000013c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0200282d
  .word 0x8e260018
  .word 0x0c0e2db8
  .word 0x00000000
  .word 0x0220202d
  .word 0x8e250018
  .word 0x0200302d
  .word 0x0c0e2e58
  .word 0x00000000
  .word 0x0220202d
  .word 0x8e250018
  .word 0x0200302d
  .word 0x0c0e2f1c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000127
  .word 0x00000000
  .word 0x0220202d
  .word 0x0200282d
  .word 0x0c0e5d44
  .word 0x00000000
  .word 0x0220202d
  .word 0x3c050037
  .word 0x24a5e690
  .word 0x0c0e4fcc
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000115
  .word 0x00000000
  .word 0x24060001
  .word 0x14460024
  .word 0x00000000
  .word 0x2402000f
  .word 0x10a20003
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x8e240164
  .word 0x8c830000
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x3c02006a
  .word 0x2442e422
  .word 0x00431821
  .word 0x8e220268
  .word 0x00431021
  .word 0x80430000
  .word 0x24020003
  .word 0x1062000a
  .word 0x00000000
  .word 0x24020002
  .word 0x10620008
  .word 0x00000000
  .word 0x10660006
  .word 0x00000000
  .word 0x10600004
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0xa0900022
  .word 0x0220202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000ef
  .word 0x00000000
  .word 0x8e250164
  .word 0x14a00004
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000f
  .word 0x00000000
  .word 0x8ca3006c
  .word 0x0000302d
  .word 0x8e240160
  .word 0x8e22015c
  .word 0x00821021
  .word 0x10000003
  .word 0x00000000
  .word 0x8c63004c
  .word 0x24c60001
  .word 0x00c2082a
  .word 0x10200003
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0x14600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000d6
  .word 0x00000000
  .word 0x8ca20000
  .word 0x00022040
  .word 0x00822021
  .word 0x00042880
  .word 0x3c04006a
  .word 0x2484e1a2
  .word 0x00852821
  .word 0x8e240158
  .word 0x00852021
  .word 0x80880000
  .word 0x24040019
  .word 0x110400c0
  .word 0x00000000
  .word 0x24040017
  .word 0x110400b1
  .word 0x00000000
  .word 0x24050013
  .word 0x110500bf
  .word 0x00000000
  .word 0x24070007
  .word 0x110700a8
  .word 0x00000000
  .word 0x24040015
  .word 0x110400b9
  .word 0x00000000
  .word 0x24060008
  .word 0x11060053
  .word 0x00000000
  .word 0x24040006
  .word 0x1104004b
  .word 0x00000000
  .word 0x24050005
  .word 0x110500b0
  .word 0x00000000
  .word 0x24040004
  .word 0x11040042
  .word 0x00000000
  .word 0x2404001c
  .word 0x11040029
  .word 0x00000000
  .word 0x24040003
  .word 0x11040013
  .word 0x00000000
  .word 0x24040002
  .word 0x11040009
  .word 0x00000000
  .word 0x24020001
  .word 0x11020003
  .word 0x00000000
  .word 0x1000009f
  .word 0x00000000
  .word 0xa4700002
  .word 0x1000009c
  .word 0x00000000
  .word 0x10470003
  .word 0x00000000
  .word 0x10000098
  .word 0x00000000
  .word 0xa4700010
  .word 0x10000095
  .word 0x00000000
  .word 0x2404001f
  .word 0x1044000e
  .word 0x00000000
  .word 0x2404000c
  .word 0x10440008
  .word 0x00000000
  .word 0x10460003
  .word 0x00000000
  .word 0x1000008b
  .word 0x00000000
  .word 0xa4700010
  .word 0x10000088
  .word 0x00000000
  .word 0xa4700012
  .word 0x10000085
  .word 0x00000000
  .word 0xa4700012
  .word 0x10000082
  .word 0x00000000
  .word 0x10450009
  .word 0x00000000
  .word 0x24040027
  .word 0x10440003
  .word 0x00000000
  .word 0x1000007b
  .word 0x00000000
  .word 0xa4700014
  .word 0x10000078
  .word 0x00000000
  .word 0x80640012
  .word 0x10800004
  .word 0x00000000
  .word 0x24020002
  .word 0x14820004
  .word 0x00000000
  .word 0xa4700010
  .word 0x1000006f
  .word 0x00000000
  .word 0xa4700014
  .word 0x1000006c
  .word 0x00000000
  .word 0xa4700012
  .word 0x10000069
  .word 0x00000000
  .word 0xc7808438
  .word 0x46010002
  .word 0xe4600010
  .word 0x10000064
  .word 0x00000000
  .word 0x24040030
  .word 0x1044004a
  .word 0x00000000
  .word 0x24040026
  .word 0x10440044
  .word 0x00000000
  .word 0x24040002
  .word 0x1044003e
  .word 0x00000000
  .word 0x2404001e
  .word 0x10440038
  .word 0x00000000
  .word 0x24040006
  .word 0x10440032
  .word 0x00000000
  .word 0x2404001d
  .word 0x1044002c
  .word 0x00000000
  .word 0x2404001c
  .word 0x1044004f
  .word 0x00000000
  .word 0x24040004
  .word 0x10440023
  .word 0x00000000
  .word 0x24040012
  .word 0x1044001d
  .word 0x00000000
  .word 0x2404000c
  .word 0x10440017
  .word 0x00000000
  .word 0x2404001a
  .word 0x10440011
  .word 0x00000000
  .word 0x24040003
  .word 0x1044000e
  .word 0x00000000
  .word 0x10450009
  .word 0x00000000
  .word 0x24040005
  .word 0x10440003
  .word 0x00000000
  .word 0x10000039
  .word 0x00000000
  .word 0xa4700010
  .word 0x10000036
  .word 0x00000000
  .word 0xa4700012
  .word 0x10000033
  .word 0x00000000
  .word 0xa0700015
  .word 0x10000030
  .word 0x00000000
  .word 0xac700014
  .word 0x1000002d
  .word 0x00000000
  .word 0xa0700014
  .word 0x1000002a
  .word 0x00000000
  .word 0xa4700010
  .word 0x10000027
  .word 0x00000000
  .word 0xa4700010
  .word 0x10000024
  .word 0x00000000
  .word 0xa4700012
  .word 0x10000021
  .word 0x00000000
  .word 0xa4700010
  .word 0x1000001e
  .word 0x00000000
  .word 0xa4700016
  .word 0x1000001b
  .word 0x00000000
  .word 0xa4700010
  .word 0x10000018
  .word 0x00000000
  .word 0xa0700031
  .word 0x10000015
  .word 0x00000000
  .word 0xa4700012
  .word 0x10000012
  .word 0x00000000
  .word 0x80640010
  .word 0x14800004
  .word 0x00000000
  .word 0xa4700014
  .word 0x1000000c
  .word 0x00000000
  .word 0x24020001
  .word 0x14820009
  .word 0x00000000
  .word 0xa4700014
  .word 0x10000006
  .word 0x00000000
  .word 0x80640010
  .word 0x24020002
  .word 0x14820002
  .word 0x00000000
  .word 0xa0700011
  .word 0x0220202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// Removing the decompiler's apparent t0 call-output assignment regressed
// nd224 -> nd234 at unchanged size376/384, so the assignment was restored.
#pragma opt_loop_invariants reset
// FUN_003698A0


#ifndef PC_BUILD
asm u32 FUN_003698a0(u64 param_1,u64 param_2,int param_3)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x00c0402d
  .word 0x8cc60164
  .word 0x14c00004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000f
  .word 0x00000000
  .word 0x8cc2006c
  .word 0x0000282d
  .word 0x8d040160
  .word 0x8d03015c
  .word 0x00831821
  .word 0x10000003
  .word 0x00000000
  .word 0x8c42004c
  .word 0x24a50001
  .word 0x00a3082a
  .word 0x10200003
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x10400043
  .word 0x00000000
  .word 0x8cc50000
  .word 0x00051840
  .word 0x00651821
  .word 0x00032080
  .word 0x3c03006a
  .word 0x2463e1a2
  .word 0x00642021
  .word 0x8d030158
  .word 0x00641821
  .word 0x80640000
  .word 0x2403000f
  .word 0x10830031
  .word 0x00000000
  .word 0x24030009
  .word 0x1083000e
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000002c
  .word 0x00000000
  .word 0x8d04016c
  .word 0x84c30020
  .word 0x00831823
  .word 0xa4430000
  .word 0x8d040164
  .word 0x0c0d849c
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x24030021
  .word 0x10a3001a
  .word 0x00000000
  .word 0x24030012
  .word 0x10a30013
  .word 0x00000000
  .word 0x24030015
  .word 0x10a3000c
  .word 0x00000000
  .word 0x24030014
  .word 0x10a30009
  .word 0x00000000
  .word 0x2403001a
  .word 0x10a30006
  .word 0x00000000
  .word 0x24030003
  .word 0x10a30003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x8d03016c
  .word 0xa4430012
  .word 0x1000000b
  .word 0x00000000
  .word 0x8d03016c
  .word 0xa4430010
  .word 0x10000007
  .word 0x00000000
  .word 0x8d03016c
  .word 0xa4430010
  .word 0x10000003
  .word 0x00000000
  .word 0x8d03016c
  .word 0xa4430002
  .word 0x0100202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


/* W455 retail dispatch table maps event states 0xe, 0x15, and 0x18 to the
 * shared empty target; keep those explicit no-op cases in the source. */
// FUN_00369A20
#ifndef PC_BUILD
asm u64 FUN_00369a20(int param_1,u64 param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00c0882d
  .word 0x2402fffc
  .word 0x14820012
  .word 0x00000000
  .word 0x8e220158
  .word 0x14400004
  .word 0x00000000
  .word 0xae200268
  .word 0x10000003
  .word 0x00000000
  .word 0x24020001
  .word 0xae220268
  .word 0x2404000f
  .word 0x2405000c
  .word 0x2406001c
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x0000102d
  .word 0x100008d9
  .word 0x00000000
  .word 0x8e250164
  .word 0x8e230160
  .word 0x8e22015c
  .word 0x00621821
  .word 0x8ca20068
  .word 0x0062082a
  .word 0x102008c9
  .word 0x00000000
  .word 0x2402fffe
  .word 0x14820015
  .word 0x00000000
  .word 0x2402ffff
  .word 0xae220168
  .word 0xae200118
  .word 0x24020003
  .word 0xae22011c
  .word 0x3c02006a
  .word 0x2442db30
  .word 0xae220120
  .word 0x3c02006a
  .word 0x2442d930
  .word 0xae220124
  .word 0x24040002
  .word 0x24050012
  .word 0x2406000b
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x0000102d
  .word 0x100008ba
  .word 0x00000000
  .word 0x2402fffd
  .word 0x108208b6
  .word 0x00000000
  .word 0x8ca30000
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x3c02006a
  .word 0x2442e1a2
  .word 0x00431821
  .word 0x8e220158
  .word 0x00431021
  .word 0x80420000
  .word 0xae220168
  .word 0x8e240164
  .word 0x14800004
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000f
  .word 0x00000000
  .word 0x8c90006c
  .word 0x0000282d
  .word 0x8e230160
  .word 0x8e22015c
  .word 0x00621021
  .word 0x10000003
  .word 0x00000000
  .word 0x8e10004c
  .word 0x24a50001
  .word 0x00a2082a
  .word 0x10200003
  .word 0x00000000
  .word 0x1600fffa
  .word 0x00000000
  .word 0x8e220168
  .word 0x2c41001e
  .word 0x10200893
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463a500
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x96030000
  .word 0x84820020
  .word 0x00621021
  .word 0xae22016c
  .word 0x8e220164
  .word 0x84420020
  .word 0xae220170
  .word 0x8e22000c
  .word 0x2442ffff
  .word 0xae220174
  .word 0x24040006
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000087a
  .word 0x00000000
  .word 0xae200170
  .word 0x24022710
  .word 0xae220174
  .word 0x8e220164
  .word 0x8c430000
  .word 0x24020021
  .word 0x10620872
  .word 0x00000000
  .word 0x24020012
  .word 0x10620019
  .word 0x00000000
  .word 0x24020015
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020014
  .word 0x10620009
  .word 0x00000000
  .word 0x2402001a
  .word 0x10620006
  .word 0x00000000
  .word 0x24020003
  .word 0x10620003
  .word 0x00000000
  .word 0x10000861
  .word 0x00000000
  .word 0x86020012
  .word 0xae22016c
  .word 0x24040006
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000857
  .word 0x00000000
  .word 0x86020010
  .word 0xae22016c
  .word 0x24040006
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000084d
  .word 0x00000000
  .word 0xae200170
  .word 0x24022710
  .word 0xae220174
  .word 0x96020002
  .word 0xae22016c
  .word 0x24040006
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000840
  .word 0x00000000
  .word 0x96020002
  .word 0xae22016c
  .word 0xae200170
  .word 0x24022710
  .word 0xae220174
  .word 0x8e240164
  .word 0x8c830000
  .word 0x2402000a
  .word 0x14620005
  .word 0x00000000
  .word 0x80830022
  .word 0x24020003
  .word 0x14620832
  .word 0x00000000
  .word 0x24040007
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000082a
  .word 0x00000000
  .word 0x8c820000
  .word 0x24040007
  .word 0x10440003
  .word 0x00000000
  .word 0x10000824
  .word 0x00000000
  .word 0x86020010
  .word 0xae22016c
  .word 0xae200170
  .word 0x24020bb8
  .word 0xae220174
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000818
  .word 0x00000000
  .word 0x8c830000
  .word 0x2402001f
  .word 0x10620018
  .word 0x00000000
  .word 0x2402000c
  .word 0x1062000d
  .word 0x00000000
  .word 0x24020008
  .word 0x10620003
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x86020010
  .word 0xae22016c
  .word 0xae200170
  .word 0x240200ff
  .word 0xae220174
  .word 0x1000000e
  .word 0x00000000
  .word 0x86020012
  .word 0xae22016c
  .word 0x2402ff01
  .word 0xae220170
  .word 0x240200ff
  .word 0xae220174
  .word 0x10000006
  .word 0x00000000
  .word 0x86020012
  .word 0xae22016c
  .word 0xae200170
  .word 0x240200ff
  .word 0xae220174
  .word 0x8e220164
  .word 0x8c430000
  .word 0x2402001f
  .word 0x14620004
  .word 0x00000000
  .word 0x86020010
  .word 0x104007f0
  .word 0x00000000
  .word 0x24040007
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100007e8
  .word 0x00000000
  .word 0x86020012
  .word 0xae22016c
  .word 0x2402ff01
  .word 0xae220170
  .word 0x240200ff
  .word 0xae220174
  .word 0x24040007
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100007da
  .word 0x00000000
  .word 0x8c830000
  .word 0x24020019
  .word 0x10620031
  .word 0x00000000
  .word 0x24020018
  .word 0x1062002a
  .word 0x00000000
  .word 0x24020017
  .word 0x10620023
  .word 0x00000000
  .word 0x2402000f
  .word 0x10620020
  .word 0x00000000
  .word 0x24020011
  .word 0x1062001d
  .word 0x00000000
  .word 0x24020010
  .word 0x1062001a
  .word 0x00000000
  .word 0x2402000e
  .word 0x10620017
  .word 0x00000000
  .word 0x2402000d
  .word 0x10620014
  .word 0x00000000
  .word 0x2402000b
  .word 0x10620011
  .word 0x00000000
  .word 0x2402000a
  .word 0x1062000a
  .word 0x00000000
  .word 0x24020008
  .word 0x10620003
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x86020014
  .word 0xae220118
  .word 0x1000000f
  .word 0x00000000
  .word 0x8e020004
  .word 0xae220118
  .word 0x1000000b
  .word 0x00000000
  .word 0x86020010
  .word 0xae220118
  .word 0x10000007
  .word 0x00000000
  .word 0x82020010
  .word 0xae220118
  .word 0x10000003
  .word 0x00000000
  .word 0x86020014
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442db48
  .word 0xae220120
  .word 0x27829dd0
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000796
  .word 0x00000000
  .word 0x8c830000
  .word 0x24020019
  .word 0x10620029
  .word 0x00000000
  .word 0x24020016
  .word 0x10620016
  .word 0x00000000
  .word 0x24020009
  .word 0x10620003
  .word 0x00000000
  .word 0x1000078a
  .word 0x00000000
  .word 0x86020012
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442db58
  .word 0xae220120
  .word 0x27829dd0
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000077a
  .word 0x00000000
  .word 0x86020010
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442db58
  .word 0xae220120
  .word 0x27829dd0
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000076a
  .word 0x00000000
  .word 0x86020010
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442db58
  .word 0xae220120
  .word 0x27829dd0
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000075a
  .word 0x00000000
  .word 0x8c830000
  .word 0x2402001a
  .word 0x10620010
  .word 0x00000000
  .word 0x24020003
  .word 0x1062000d
  .word 0x00000000
  .word 0x24020015
  .word 0x10620006
  .word 0x00000000
  .word 0x24020014
  .word 0x10620003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x82020011
  .word 0xae220118
  .word 0x10000003
  .word 0x00000000
  .word 0x82020014
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442db58
  .word 0xae220120
  .word 0x27829dd0
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000737
  .word 0x00000000
  .word 0x8c840000
  .word 0x2402002f
  .word 0x108201d6
  .word 0x00000000
  .word 0x2402002b
  .word 0x108201c1
  .word 0x00000000
  .word 0x24020029
  .word 0x108201ac
  .word 0x00000000
  .word 0x24020027
  .word 0x1082019a
  .word 0x00000000
  .word 0x24030004
  .word 0x10830188
  .word 0x00000000
  .word 0x24020022
  .word 0x10820175
  .word 0x00000000
  .word 0x2402001d
  .word 0x10820162
  .word 0x00000000
  .word 0x24020015
  .word 0x1082014f
  .word 0x00000000
  .word 0x24020014
  .word 0x1082014c
  .word 0x00000000
  .word 0x2402001a
  .word 0x10820149
  .word 0x00000000
  .word 0x24020003
  .word 0x10820146
  .word 0x00000000
  .word 0x24050018
  .word 0x10850133
  .word 0x00000000
  .word 0x24050020
  .word 0x10850120
  .word 0x00000000
  .word 0x2405001f
  .word 0x1085010d
  .word 0x00000000
  .word 0x2405001e
  .word 0x108500fa
  .word 0x00000000
  .word 0x2406000a
  .word 0x108600e8
  .word 0x00000000
  .word 0x2405001c
  .word 0x108500d6
  .word 0x00000000
  .word 0x24050025
  .word 0x108500c3
  .word 0x00000000
  .word 0x24050024
  .word 0x108500b0
  .word 0x00000000
  .word 0x24050023
  .word 0x1085009d
  .word 0x00000000
  .word 0x24050031
  .word 0x1085008a
  .word 0x00000000
  .word 0x24050021
  .word 0x10850078
  .word 0x00000000
  .word 0x24050030
  .word 0x10850064
  .word 0x00000000
  .word 0x24050001
  .word 0x10850050
  .word 0x00000000
  .word 0x24050013
  .word 0x1085003c
  .word 0x00000000
  .word 0x24050005
  .word 0x10850029
  .word 0x00000000
  .word 0x24030006
  .word 0x10830017
  .word 0x00000000
  .word 0x2403000c
  .word 0x10830003
  .word 0x00000000
  .word 0x100006e0
  .word 0x00000000
  .word 0x86030010
  .word 0xae230118
  .word 0xae22011c
  .word 0x3c02006a
  .word 0x2442db68
  .word 0xae220120
  .word 0x3c02006a
  .word 0x2442d940
  .word 0xae220124
  .word 0x24040002
  .word 0x240500d8
  .word 0x24060078
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100006cf
  .word 0x00000000
  .word 0x86020010
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442db78
  .word 0xae220120
  .word 0x27829df8
  .word 0xae220124
  .word 0x24050012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100006c0
  .word 0x00000000
  .word 0x82020012
  .word 0xae220118
  .word 0xae23011c
  .word 0x3c02006a
  .word 0x2442db88
  .word 0xae220120
  .word 0x3c02006a
  .word 0x2442d910
  .word 0xae220124
  .word 0x24040002
  .word 0x24050012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100006b0
  .word 0x00000000
  .word 0x86020010
  .word 0xae220118
  .word 0x24020007
  .word 0xae22011c
  .word 0x3c02006a
  .word 0x2442db98
  .word 0xae220120
  .word 0x3c02006a
  .word 0x2442d960
  .word 0xae220124
  .word 0x24040002
  .word 0x24050012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000069f
  .word 0x00000000
  .word 0x82020010
  .word 0xae220118
  .word 0x2402000b
  .word 0xae22011c
  .word 0x3c02006a
  .word 0x2442dbb0
  .word 0xae220120
  .word 0x3c02006a
  .word 0x2442da10
  .word 0xae220124
  .word 0x24040002
  .word 0x24050012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000068e
  .word 0x00000000
  .word 0x82020010
  .word 0xae220118
  .word 0x2402000b
  .word 0xae22011c
  .word 0x3c02006a
  .word 0x2442dbb0
  .word 0xae220120
  .word 0x3c02006a
  .word 0x2442da10
  .word 0xae220124
  .word 0x24040002
  .word 0x24050012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000067d
  .word 0x00000000
  .word 0x82020012
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442dbd0
  .word 0xae220120
  .word 0x27829e48
  .word 0xae220124
  .word 0x24050012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000066e
  .word 0x00000000
  .word 0x82020010
  .word 0xae220118
  .word 0x24020001
  .word 0xae22011c
  .word 0x3c02006a
  .word 0x2442dbf0
  .word 0xae220120
  .word 0x27829db8
  .word 0xae220124
  .word 0x24040002
  .word 0x24050012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000065e
  .word 0x00000000
  .word 0x82020010
  .word 0xae220118
  .word 0xae23011c
  .word 0x3c02006a
  .word 0x2442dc10
  .word 0xae220120
  .word 0x3c02006a
  .word 0x2442da50
  .word 0xae220124
  .word 0x24040002
  .word 0x24050012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000064e
  .word 0x00000000
  .word 0x82030010
  .word 0xae230118
  .word 0xae22011c
  .word 0x3c02006a
  .word 0x2442dc28
  .word 0xae220120
  .word 0x3c02006a
  .word 0x2442da60
  .word 0xae220124
  .word 0x24040002
  .word 0x24050012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000063e
  .word 0x00000000
  .word 0x82020010
  .word 0xae220118
  .word 0xae23011c
  .word 0x3c02006a
  .word 0x2442dc38
  .word 0xae220120
  .word 0x3c02006a
  .word 0x2442da70
  .word 0xae220124
  .word 0x24040002
  .word 0x24050012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000062e
  .word 0x00000000
  .word 0x82020010
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442dc48
  .word 0xae220120
  .word 0x27829e98
  .word 0xae220124
  .word 0x24050012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000061f
  .word 0x00000000
  .word 0x8602001c
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442dc60
  .word 0xae220120
  .word 0x27829ea8
  .word 0xae220124
  .word 0x24050012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000610
  .word 0x00000000
  .word 0x86020012
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442dc80
  .word 0xae220120
  .word 0x27829ec0
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000600
  .word 0x00000000
  .word 0x86020010
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442dc98
  .word 0xae220120
  .word 0x27829ed8
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100005f0
  .word 0x00000000
  .word 0x86020010
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442dca8
  .word 0xae220120
  .word 0x27829ee0
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100005e0
  .word 0x00000000
  .word 0x82020024
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442dcb8
  .word 0xae220120
  .word 0x27829ef8
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100005d0
  .word 0x00000000
  .word 0x82020018
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442dcc8
  .word 0xae220120
  .word 0x27829f00
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100005c0
  .word 0x00000000
  .word 0x82020014
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442dcd8
  .word 0xae220120
  .word 0x27829f08
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100005b0
  .word 0x00000000
  .word 0x82020010
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442dcf0
  .word 0xae220120
  .word 0x27829f10
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100005a0
  .word 0x00000000
  .word 0xae200118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442dd08
  .word 0xae220120
  .word 0x27829f20
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000591
  .word 0x00000000
  .word 0xae200118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442dd20
  .word 0xae220120
  .word 0x27829f30
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000582
  .word 0x00000000
  .word 0x82020010
  .word 0xae220118
  .word 0x2402000e
  .word 0xae22011c
  .word 0x3c02006a
  .word 0x2442dd40
  .word 0xae220120
  .word 0x3c02006a
  .word 0x2442d880
  .word 0xae220124
  .word 0x24040002
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000570
  .word 0x00000000
  .word 0x82020010
  .word 0xae220118
  .word 0x24020006
  .word 0xae22011c
  .word 0x3c02006a
  .word 0x2442dd60
  .word 0xae220120
  .word 0x3c02006a
  .word 0x2442db10
  .word 0xae220124
  .word 0x24040002
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000055e
  .word 0x00000000
  .word 0x82020010
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442dd80
  .word 0xae220120
  .word 0x27829d98
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000054e
  .word 0x00000000
  .word 0xc78180d0
  .word 0xc6000010
  .word 0x46000802
  .word 0xe6200184
  .word 0x3c023f80
  .word 0xae220188
  .word 0x3c024334
  .word 0xae22018c
  .word 0x24040008
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000053e
  .word 0x00000000
  .word 0x8c840000
  .word 0x24020026
  .word 0x108200c6
  .word 0x00000000
  .word 0x24030002
  .word 0x108300b6
  .word 0x00000000
  .word 0x24020001
  .word 0x108200a6
  .word 0x00000000
  .word 0x2402001e
  .word 0x10820096
  .word 0x00000000
  .word 0x2402001d
  .word 0x10820086
  .word 0x00000000
  .word 0x2402001c
  .word 0x1082052b
  .word 0x00000000
  .word 0x24020006
  .word 0x1082006d
  .word 0x00000000
  .word 0x24020004
  .word 0x1082005d
  .word 0x00000000
  .word 0x24020012
  .word 0x1082004e
  .word 0x00000000
  .word 0x2402000c
  .word 0x1082003e
  .word 0x00000000
  .word 0x2402001a
  .word 0x1082002d
  .word 0x00000000
  .word 0x24030003
  .word 0x1083002a
  .word 0x00000000
  .word 0x24020013
  .word 0x10820013
  .word 0x00000000
  .word 0x24020005
  .word 0x10820003
  .word 0x00000000
  .word 0x10000511
  .word 0x00000000
  .word 0x86020010
  .word 0xae22016c
  .word 0xae200170
  .word 0x24022710
  .word 0xae220174
  .word 0x24040007
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000504
  .word 0x00000000
  .word 0x86020012
  .word 0xae22016c
  .word 0x86020010
  .word 0x14430005
  .word 0x00000000
  .word 0x2402ffff
  .word 0xae220170
  .word 0x10000002
  .word 0x00000000
  .word 0xae200170
  .word 0x240200ff
  .word 0xae220174
  .word 0x24040007
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100004f0
  .word 0x00000000
  .word 0x82020015
  .word 0xae22016c
  .word 0x2402ffff
  .word 0xae220170
  .word 0x2402007f
  .word 0xae220174
  .word 0x24040007
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100004e2
  .word 0x00000000
  .word 0x8e020014
  .word 0xae22016c
  .word 0xae200170
  .word 0x240200ff
  .word 0xae220174
  .word 0x24040007
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100004d5
  .word 0x00000000
  .word 0x82020014
  .word 0xae22016c
  .word 0xae200170
  .word 0xae230174
  .word 0x24040007
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100004c9
  .word 0x00000000
  .word 0x86020010
  .word 0xae22016c
  .word 0xae200170
  .word 0x240201f4
  .word 0xae220174
  .word 0x24040007
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100004bc
  .word 0x00000000
  .word 0x86020012
  .word 0xae22016c
  .word 0x86020010
  .word 0x14400005
  .word 0x00000000
  .word 0x2402ffff
  .word 0xae220170
  .word 0x10000002
  .word 0x00000000
  .word 0xae200170
  .word 0x24040007
  .word 0xae240174
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100004a9
  .word 0x00000000
  .word 0x86020010
  .word 0xae22016c
  .word 0xae200170
  .word 0x240200b4
  .word 0xae220174
  .word 0x24040007
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000049c
  .word 0x00000000
  .word 0x86020010
  .word 0xae22016c
  .word 0xae200170
  .word 0x2402003c
  .word 0xae220174
  .word 0x24040007
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000048f
  .word 0x00000000
  .word 0x86020020
  .word 0xae22016c
  .word 0xae200170
  .word 0x240203e7
  .word 0xae220174
  .word 0x24040007
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000482
  .word 0x00000000
  .word 0x86020016
  .word 0xae22016c
  .word 0xae200170
  .word 0x240203e7
  .word 0xae220174
  .word 0x24040007
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000475
  .word 0x00000000
  .word 0x86020010
  .word 0xae22016c
  .word 0x8e220010
  .word 0xae220170
  .word 0x8e220014
  .word 0xae220174
  .word 0x24040007
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000467
  .word 0x00000000
  .word 0xae200190
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c0e2964
  .word 0x00000000
  .word 0x10000460
  .word 0x00000000
  .word 0x82030010
  .word 0x24020003
  .word 0x1062002f
  .word 0x00000000
  .word 0x24040002
  .word 0x1064001f
  .word 0x00000000
  .word 0x24020001
  .word 0x10620456
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000452
  .word 0x00000000
  .word 0x86020014
  .word 0xae220198
  .word 0x86020016
  .word 0xae22019c
  .word 0x86020018
  .word 0xae2201a0
  .word 0x8602001a
  .word 0xae2201a4
  .word 0x8602001c
  .word 0xae2201a8
  .word 0x0220202d
  .word 0x8e25092c
  .word 0x0c0e16f4
  .word 0x00000000
  .word 0xae2200e8
  .word 0x2404001a
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000043b
  .word 0x00000000
  .word 0xae200118
  .word 0xae24011c
  .word 0x27829e58
  .word 0xae220120
  .word 0x27829f58
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000042e
  .word 0x00000000
  .word 0xae200118
  .word 0x24040002
  .word 0xae24011c
  .word 0x27829e60
  .word 0xae220120
  .word 0x27829f58
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000420
  .word 0x00000000
  .word 0x82030010
  .word 0x24020003
  .word 0x1062003a
  .word 0x00000000
  .word 0x24020002
  .word 0x1062002a
  .word 0x00000000
  .word 0x24020001
  .word 0x10620017
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000412
  .word 0x00000000
  .word 0x82020011
  .word 0xae220198
  .word 0x82020012
  .word 0xae22019c
  .word 0x82020013
  .word 0xae2201a0
  .word 0x0220202d
  .word 0x0c0e17e4
  .word 0x00000000
  .word 0xae2200e8
  .word 0x2404001a
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000400
  .word 0x00000000
  .word 0x82020011
  .word 0xae220198
  .word 0x86020012
  .word 0xae22019c
  .word 0x0220202d
  .word 0x0c0e1818
  .word 0x00000000
  .word 0xae2200e8
  .word 0x2404001a
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100003f0
  .word 0x00000000
  .word 0x82020011
  .word 0xae22016c
  .word 0xae200170
  .word 0x24020010
  .word 0xae220174
  .word 0x24040007
  .word 0x2405000d
  .word 0x24060011
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100003e3
  .word 0x00000000
  .word 0x82050011
  .word 0x86060014
  .word 0x92070012
  .word 0x0220202d
  .word 0x0c0e1a18
  .word 0x00000000
  .word 0xae2200e8
  .word 0x2404001a
  .word 0x2405000a
  .word 0x24060012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100003d4
  .word 0x00000000
  .word 0x8c830000
  .word 0x24020025
  .word 0x10620003
  .word 0x00000000
  .word 0x100003ce
  .word 0x00000000
  .word 0x82030010
  .word 0x10600004
  .word 0x00000000
  .word 0x24020001
  .word 0x146203c8
  .word 0x00000000
  .word 0xc6000014
  .word 0xe7a00050
  .word 0xc6000018
  .word 0xe7a00054
  .word 0xc600001c
  .word 0xe7a00058
  .word 0xc6000020
  .word 0xe7a00040
  .word 0xc6000024
  .word 0xe7a00044
  .word 0xc6000028
  .word 0xe7a00048
  .word 0x0220202d
  .word 0x27a50050
  .word 0x27a60040
  .word 0x0c0e184c
  .word 0x00000000
  .word 0xae2200e8
  .word 0x2404001a
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100003ae
  .word 0x00000000
  .word 0x82030012
  .word 0x14600022
  .word 0x00000000
  .word 0x24041e59
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x104003a6
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c0e2964
  .word 0x00000000
  .word 0xc6000018
  .word 0xe6200198
  .word 0xc600001c
  .word 0xe620019c
  .word 0xc6000020
  .word 0xe62001a0
  .word 0xc6000024
  .word 0xe62001a4
  .word 0xc6000028
  .word 0xe62001a8
  .word 0xc600002c
  .word 0xe62001ac
  .word 0x0220202d
  .word 0x0c0e18c4
  .word 0x00000000
  .word 0xae2200e8
  .word 0x2404001a
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000038a
  .word 0x00000000
  .word 0x24020001
  .word 0x14620387
  .word 0x00000000
  .word 0x96050014
  .word 0x86060016
  .word 0x0220202d
  .word 0x0c0e190c
  .word 0x00000000
  .word 0xae2200e8
  .word 0x2404001a
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000379
  .word 0x00000000
  .word 0x86020012
  .word 0xae22016c
  .word 0xae200170
  .word 0x2402007f
  .word 0xae220174
  .word 0x24040007
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000036c
  .word 0x00000000
  .word 0xae200108
  .word 0xae200110
  .word 0x24020008
  .word 0xae220660
  .word 0x2404000a
  .word 0x2405000d
  .word 0x24060007
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000360
  .word 0x00000000
  .word 0x8c830000
  .word 0x2402002e
  .word 0x10620185
  .word 0x00000000
  .word 0x2406002d
  .word 0x10660169
  .word 0x00000000
  .word 0x2402002c
  .word 0x10620159
  .word 0x00000000
  .word 0x2405002a
  .word 0x10650141
  .word 0x00000000
  .word 0x24040029
  .word 0x106400be
  .word 0x00000000
  .word 0x2402001c
  .word 0x106200a3
  .word 0x00000000
  .word 0x2404002f
  .word 0x10640075
  .word 0x00000000
  .word 0x24020032
  .word 0x10620062
  .word 0x00000000
  .word 0x24020031
  .word 0x1062004a
  .word 0x00000000
  .word 0x24020021
  .word 0x1062002f
  .word 0x00000000
  .word 0x24020027
  .word 0x1062001f
  .word 0x00000000
  .word 0x24020028
  .word 0x10620003
  .word 0x00000000
  .word 0x10000339
  .word 0x00000000
  .word 0xae200190
  .word 0x82020010
  .word 0xae220198
  .word 0x82020011
  .word 0xae22019c
  .word 0x82020012
  .word 0xae2201a0
  .word 0x82020013
  .word 0xae2201a4
  .word 0x86020018
  .word 0xae2201a8
  .word 0x8602001a
  .word 0xae2201ac
  .word 0x8602001c
  .word 0xae2201b0
  .word 0x8602001e
  .word 0xae2201b4
  .word 0x24040020
  .word 0x2405000d
  .word 0x24060012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000320
  .word 0x00000000
  .word 0x86020014
  .word 0xae22016c
  .word 0xae200170
  .word 0x2402007f
  .word 0xae220174
  .word 0x24040007
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000313
  .word 0x00000000
  .word 0x82020012
  .word 0x14400310
  .word 0x00000000
  .word 0xae200190
  .word 0x82040030
  .word 0xae240198
  .word 0x0c0ed56c
  .word 0x00000000
  .word 0xc4430000
  .word 0xc4420004
  .word 0xc4410008
  .word 0xc440000c
  .word 0xe623084c
  .word 0xe6220850
  .word 0xe6210854
  .word 0xe6200858
  .word 0x24040028
  .word 0x2405000a
  .word 0x24060017
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100002fb
  .word 0x00000000
  .word 0x82020010
  .word 0x10400003
  .word 0x00000000
  .word 0x100002f6
  .word 0x00000000
  .word 0x82020014
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442db58
  .word 0xae220120
  .word 0x27829dd8
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100002e6
  .word 0x00000000
  .word 0xae200190
  .word 0x82020010
  .word 0xae220198
  .word 0x82020011
  .word 0xae22019c
  .word 0x82020012
  .word 0xae2201a0
  .word 0x82020013
  .word 0xae2201a4
  .word 0x2405000e
  .word 0x24060011
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100002d6
  .word 0x00000000
  .word 0x82030010
  .word 0x24020001
  .word 0x10620015
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100002ce
  .word 0x00000000
  .word 0x82020014
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442db58
  .word 0xae220120
  .word 0x27829dd8
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100002be
  .word 0x00000000
  .word 0xae200190
  .word 0x82020014
  .word 0xae220198
  .word 0x82020015
  .word 0xae22019c
  .word 0x86020016
  .word 0xae2201a0
  .word 0x86020018
  .word 0xae2201a4
  .word 0x8602001a
  .word 0xae2201a8
  .word 0x00a0202d
  .word 0x2405000e
  .word 0x24060010
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100002ab
  .word 0x00000000
  .word 0x82030010
  .word 0x24020001
  .word 0x106202a7
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100002a3
  .word 0x00000000
  .word 0x86050014
  .word 0x86060016
  .word 0x86070018
  .word 0x8608001a
  .word 0x0220202d
  .word 0x0c0e19a0
  .word 0x00000000
  .word 0xae2200e8
  .word 0x2404001a
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000293
  .word 0x00000000
  .word 0x82020010
  .word 0x2c41000a
  .word 0x1020028f
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463a4d0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0xae200190
  .word 0x86020014
  .word 0xae220198
  .word 0x24040021
  .word 0x2405000d
  .word 0x24060011
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000027d
  .word 0x00000000
  .word 0xae200190
  .word 0x86020014
  .word 0xae220198
  .word 0x24040021
  .word 0x2405000d
  .word 0x24060011
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000272
  .word 0x00000000
  .word 0xae200190
  .word 0x86020014
  .word 0xae220198
  .word 0x24040021
  .word 0x2405000d
  .word 0x24060011
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000267
  .word 0x00000000
  .word 0xae200190
  .word 0x86020014
  .word 0xae220198
  .word 0x24040021
  .word 0x2405000d
  .word 0x24060011
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000025c
  .word 0x00000000
  .word 0xae200190
  .word 0x82020014
  .word 0xae220198
  .word 0x82020015
  .word 0xae22019c
  .word 0x82020018
  .word 0xae2201a0
  .word 0x82020019
  .word 0xae2201a4
  .word 0x8202001a
  .word 0xae2201a8
  .word 0x8202001b
  .word 0xae2201ac
  .word 0x8602001c
  .word 0xae2201b0
  .word 0x24040025
  .word 0x2405000d
  .word 0x24060015
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000245
  .word 0x00000000
  .word 0xae200190
  .word 0x86020014
  .word 0xae220198
  .word 0x2405000d
  .word 0x24060011
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000023b
  .word 0x00000000
  .word 0xae200190
  .word 0x86020014
  .word 0xae220198
  .word 0x86020016
  .word 0xae22019c
  .word 0x86020018
  .word 0xae2201a0
  .word 0x8602001a
  .word 0xae2201a4
  .word 0x8602001c
  .word 0xae2201a8
  .word 0x8602001e
  .word 0xae2201ac
  .word 0x86020020
  .word 0xae2201b0
  .word 0x82020024
  .word 0xae2201b4
  .word 0x2404002b
  .word 0x2405000d
  .word 0x24060011
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000222
  .word 0x00000000
  .word 0xae200190
  .word 0x82020014
  .word 0xae220198
  .word 0x86020016
  .word 0xae22019c
  .word 0x82020018
  .word 0xae2201a0
  .word 0x00c0202d
  .word 0x2405000d
  .word 0x24060011
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000213
  .word 0x00000000
  .word 0xae200190
  .word 0x86020010
  .word 0xae220198
  .word 0x86020012
  .word 0xae22019c
  .word 0x86020014
  .word 0xae2201a0
  .word 0x86020016
  .word 0xae2201a4
  .word 0x86020018
  .word 0xae2201a8
  .word 0x8602001a
  .word 0xae2201ac
  .word 0x24040022
  .word 0x2405000d
  .word 0x24060015
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100001fe
  .word 0x00000000
  .word 0xae200190
  .word 0x86020010
  .word 0xae220198
  .word 0x86020012
  .word 0xae22019c
  .word 0x24040024
  .word 0x2405000d
  .word 0x24060015
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100001f1
  .word 0x00000000
  .word 0xae200190
  .word 0x82020010
  .word 0xae220198
  .word 0x92020014
  .word 0xae22019c
  .word 0x92020015
  .word 0xae2201a0
  .word 0x92020016
  .word 0xae2201a4
  .word 0x86020018
  .word 0xae2201a8
  .word 0x8602001a
  .word 0xae2201ac
  .word 0x8602001c
  .word 0xae2201b0
  .word 0x8602001e
  .word 0xae2201b4
  .word 0x24040026
  .word 0x2405000f
  .word 0x24060010
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100001d8
  .word 0x00000000
  .word 0xae200190
  .word 0x86020010
  .word 0xae220198
  .word 0x86020012
  .word 0xae22019c
  .word 0x24040027
  .word 0x2405000c
  .word 0x24060012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100001cb
  .word 0x00000000
  .word 0x8c830000
  .word 0x24020031
  .word 0x10620012
  .word 0x00000000
  .word 0x2402002f
  .word 0x10620003
  .word 0x00000000
  .word 0x100001c2
  .word 0x00000000
  .word 0xae200108
  .word 0xae200110
  .word 0xae200860
  .word 0x2404000a
  .word 0xae240660
  .word 0x2405000d
  .word 0x24060007
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100001b6
  .word 0x00000000
  .word 0xae200108
  .word 0xae200110
  .word 0xae200864
  .word 0x2402000b
  .word 0xae220660
  .word 0x2404000a
  .word 0x2405000d
  .word 0x24060007
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100001a9
  .word 0x00000000
  .word 0x8c830000
  .word 0x24020006
  .word 0x106201a5
  .word 0x00000000
  .word 0x24020019
  .word 0x10620080
  .word 0x00000000
  .word 0x24020018
  .word 0x10620071
  .word 0x00000000
  .word 0x24020011
  .word 0x1062019c
  .word 0x00000000
  .word 0x24020010
  .word 0x10620199
  .word 0x00000000
  .word 0x2402001b
  .word 0x10620196
  .word 0x00000000
  .word 0x24020017
  .word 0x10620193
  .word 0x00000000
  .word 0x2402000f
  .word 0x10620190
  .word 0x00000000
  .word 0x2402000e
  .word 0x1062018d
  .word 0x00000000
  .word 0x2405000d
  .word 0x1065018a
  .word 0x00000000
  .word 0x2402000b
  .word 0x10620187
  .word 0x00000000
  .word 0x24020024
  .word 0x1062003c
  .word 0x00000000
  .word 0x2402000a
  .word 0x10620012
  .word 0x00000000
  .word 0x24020015
  .word 0x10620006
  .word 0x00000000
  .word 0x24020014
  .word 0x10620003
  .word 0x00000000
  .word 0x10000179
  .word 0x00000000
  .word 0xae200114
  .word 0x2404000c
  .word 0x2405000a
  .word 0x24060007
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000170
  .word 0x00000000
  .word 0x8e100048
  .word 0x8e220164
  .word 0x80440022
  .word 0x94450024
  .word 0x0c0e2ac0
  .word 0x00000000
  .word 0xae220210
  .word 0xc6000020
  .word 0xe6200198
  .word 0xc6000024
  .word 0xe620019c
  .word 0xc6000028
  .word 0xe62001a0
  .word 0xc6000000
  .word 0xe62001a4
  .word 0xc6000004
  .word 0xe62001a8
  .word 0xc6000008
  .word 0xe62001ac
  .word 0xc6000014
  .word 0xe62001b0
  .word 0xc6000010
  .word 0xe62001b4
  .word 0xc6000018
  .word 0xe62001b8
  .word 0x24020004
  .word 0xae22016c
  .word 0x0220202d
  .word 0x0c0e1734
  .word 0x00000000
  .word 0xae2200e8
  .word 0x2404001a
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000149
  .word 0x00000000
  .word 0x82020010
  .word 0x14400146
  .word 0x00000000
  .word 0x8602001c
  .word 0xae220198
  .word 0x8602001e
  .word 0xae22019c
  .word 0x82020020
  .word 0xae2201a0
  .word 0x86020014
  .word 0xae2201a4
  .word 0x86020016
  .word 0xae2201a8
  .word 0x86020018
  .word 0xae2201ac
  .word 0x8602001a
  .word 0xae2201b0
  .word 0x82020022
  .word 0xae2201b4
  .word 0x2404001e
  .word 0x24060014
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000012f
  .word 0x00000000
  .word 0xae200274
  .word 0x24030001
  .word 0x8e220164
  .word 0xac430034
  .word 0x2404000b
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000123
  .word 0x00000000
  .word 0xae200284
  .word 0xae200288
  .word 0x24020001
  .word 0xae22028c
  .word 0x2404000b
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000117
  .word 0x00000000
  .word 0x82020015
  .word 0xae220198
  .word 0x86020010
  .word 0xae22016c
  .word 0x82020016
  .word 0xae22019c
  .word 0xae200214
  .word 0xae200170
  .word 0x2624082c
  .word 0x0c0e7dc4
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae220174
  .word 0x2404000d
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000102
  .word 0x00000000
  .word 0x86050008
  .word 0x8604000a
  .word 0x8603000c
  .word 0x8602000e
  .word 0xa6250784
  .word 0xa6240786
  .word 0xa6230788
  .word 0xa622078a
  .word 0x2404000e
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100000f2
  .word 0x00000000
  .word 0x82020010
  .word 0x2c41000b
  .word 0x102000ee
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463a4a0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x82020014
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442db58
  .word 0xae220120
  .word 0x27829dd8
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100000d7
  .word 0x00000000
  .word 0x9484000c
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x104000d2
  .word 0x00000000
  .word 0x8e030014
  .word 0xae23016c
  .word 0xae20021c
  .word 0xae200170
  .word 0x240303e8
  .word 0xae230174
  .word 0xae22023c
  .word 0x86020020
  .word 0xae220198
  .word 0x82020022
  .word 0xae22019c
  .word 0x82020023
  .word 0xae2201a0
  .word 0x82020024
  .word 0xae2201a4
  .word 0x82020025
  .word 0xae2201a8
  .word 0x86020026
  .word 0xae2201ac
  .word 0x86020028
  .word 0xae2201b0
  .word 0x8602002a
  .word 0xae2201b4
  .word 0x24040010
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x100000b3
  .word 0x00000000
  .word 0xae200190
  .word 0x82020014
  .word 0xae220198
  .word 0x82020015
  .word 0xae22019c
  .word 0x86020016
  .word 0xae2201a0
  .word 0x82020024
  .word 0xae2201a4
  .word 0x82020025
  .word 0xae2201a8
  .word 0x82020026
  .word 0xae2201ac
  .word 0x2404001b
  .word 0x2405000d
  .word 0x00a0302d
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000009e
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c0e2964
  .word 0x00000000
  .word 0xae200220
  .word 0x8e020014
  .word 0xae22016c
  .word 0x24040017
  .word 0x2405000f
  .word 0x24060019
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000008f
  .word 0x00000000
  .word 0x9484000c
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040902d
  .word 0x12400089
  .word 0x00000000
  .word 0xae200190
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c0e2964
  .word 0x00000000
  .word 0xae320238
  .word 0xc6420010
  .word 0xc6410014
  .word 0xc6400018
  .word 0xe622022c
  .word 0xe6210230
  .word 0xe6200234
  .word 0xae200170
  .word 0x24020258
  .word 0xae220174
  .word 0x86020024
  .word 0xae22016c
  .word 0xc6000014
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xae220198
  .word 0xae20019c
  .word 0x24040019
  .word 0x2405000c
  .word 0x0080302d
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000006a
  .word 0x00000000
  .word 0x86050014
  .word 0x0220202d
  .word 0xc60c0018
  .word 0x0c0e1a50
  .word 0x00000000
  .word 0xae2200e8
  .word 0x2404001a
  .word 0x2405000a
  .word 0x24060012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000005c
  .word 0x00000000
  .word 0xae200190
  .word 0x82020015
  .word 0xae220198
  .word 0x82020014
  .word 0xae22019c
  .word 0x2404001d
  .word 0x2405000c
  .word 0x24060017
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000004f
  .word 0x00000000
  .word 0x86050014
  .word 0x92060018
  .word 0x82070019
  .word 0x0220202d
  .word 0x0c0e19e0
  .word 0x00000000
  .word 0xae2200e8
  .word 0x2404001a
  .word 0x2405000a
  .word 0x24060012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000040
  .word 0x00000000
  .word 0xae200190
  .word 0x82020014
  .word 0xae220198
  .word 0x82020015
  .word 0xae22019c
  .word 0x2404001f
  .word 0x2405000c
  .word 0x24060017
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000033
  .word 0x00000000
  .word 0xae200190
  .word 0x82020014
  .word 0xae220198
  .word 0x82020015
  .word 0xae22019c
  .word 0x82020016
  .word 0xae2201a0
  .word 0x8e020018
  .word 0xae2201a4
  .word 0x24040023
  .word 0x2405000c
  .word 0x24060012
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0x82020014
  .word 0xae220118
  .word 0x24040002
  .word 0xae24011c
  .word 0x3c02006a
  .word 0x2442db58
  .word 0xae220120
  .word 0x27829dd8
  .word 0xae220124
  .word 0x24050012
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0xae200108
  .word 0xae200110
  .word 0x24040015
  .word 0x2405000f
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x24020001
  .word 0x14820005
  .word 0x00000000
  .word 0x00a0202d
  .word 0x8e250018
  .word 0x0c0d84d4
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
#endif /* PC_BUILD: asm function omitted */


// FUN_0036BE10


u64 FUN_0036be10(u64 param_1,u64 param_2,u32 param_3)



{

  FUN_0036f5f0(5,0xc,3,param_3);

  FUN_005225a8(&DAT_0069dd98);

  return 0;

}


// FUN_0036BE60


#ifndef PC_BUILD
asm int FUN_0036be60(u64 param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00c0902d
  .word 0x0000882d
  .word 0x24020005
  .word 0x10a200a1
  .word 0x00000000
  .word 0x2404000f
  .word 0x10a40090
  .word 0x00000000
  .word 0x24020001
  .word 0x10a20003
  .word 0x00000000
  .word 0x10000359
  .word 0x00000000
  .word 0x8e430104
  .word 0x24020008
  .word 0x10620068
  .word 0x00000000
  .word 0x10640055
  .word 0x00000000
  .word 0x24020010
  .word 0x10620041
  .word 0x00000000
  .word 0x2402000e
  .word 0x1062002d
  .word 0x00000000
  .word 0x24020004
  .word 0x10620018
  .word 0x00000000
  .word 0x24020003
  .word 0x10620003
  .word 0x00000000
  .word 0x10000345
  .word 0x00000000
  .word 0x8e420118
  .word 0x1440000b
  .word 0x00000000
  .word 0x8e430018
  .word 0xae430010
  .word 0x8e420014
  .word 0x0043082a
  .word 0x10200002
  .word 0x00000000
  .word 0xae430014
  .word 0x24110001
  .word 0x10000338
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x10000333
  .word 0x00000000
  .word 0x8e420118
  .word 0x1440000b
  .word 0x00000000
  .word 0x8e430018
  .word 0xae430014
  .word 0x8e420010
  .word 0x0062082a
  .word 0x10200002
  .word 0x00000000
  .word 0xae430010
  .word 0x24110001
  .word 0x10000326
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x10000321
  .word 0x00000000
  .word 0x8e420118
  .word 0x14400007
  .word 0x00000000
  .word 0x8243004c
  .word 0x2402fffe
  .word 0x00621024
  .word 0xa242004c
  .word 0x10000004
  .word 0x00000000
  .word 0x8242004c
  .word 0x34420001
  .word 0xa242004c
  .word 0x0240202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x10000310
  .word 0x00000000
  .word 0x8e420118
  .word 0x14400007
  .word 0x00000000
  .word 0x8243004c
  .word 0x2402fffb
  .word 0x00621024
  .word 0xa242004c
  .word 0x10000004
  .word 0x00000000
  .word 0x8242004c
  .word 0x34420004
  .word 0xa242004c
  .word 0x0240202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x100002ff
  .word 0x00000000
  .word 0x8e420118
  .word 0x14400007
  .word 0x00000000
  .word 0x8243004c
  .word 0x2402fffd
  .word 0x00621024
  .word 0xa242004c
  .word 0x10000004
  .word 0x00000000
  .word 0x8242004c
  .word 0x34420002
  .word 0xa242004c
  .word 0x0240202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x100002ee
  .word 0x00000000
  .word 0x8e420118
  .word 0x14400018
  .word 0x00000000
  .word 0x0c0ed740
  .word 0x00000000
  .word 0x10400014
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0e25fc
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0e23fc
  .word 0x00000000
  .word 0x0c0eecd0
  .word 0x00000000
  .word 0x0c0e5d14
  .word 0x00000000
  .word 0x0c0e7ae4
  .word 0x00000000
  .word 0x0c0e79f0
  .word 0x00000000
  .word 0x0c0dbbec
  .word 0x00000000
  .word 0x8e420004
  .word 0x34420100
  .word 0xae420004
  .word 0x0240202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x100002cf
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0dbe90
  .word 0x00000000
  .word 0x24030002
  .word 0x144302c9
  .word 0x00000000
  .word 0x8e430118
  .word 0x8e420164
  .word 0xa0430022
  .word 0x0240202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x100002c1
  .word 0x00000000
  .word 0x8e420164
  .word 0x14400004
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000f
  .word 0x00000000
  .word 0x8c50006c
  .word 0x0000202d
  .word 0x8e430160
  .word 0x8e42015c
  .word 0x00621021
  .word 0x10000003
  .word 0x00000000
  .word 0x8e10004c
  .word 0x24840001
  .word 0x0082082a
  .word 0x10200003
  .word 0x00000000
  .word 0x1600fffa
  .word 0x00000000
  .word 0x16000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d580
  .word 0x24052804
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e430168
  .word 0x2405000c
  .word 0x106500da
  .word 0x00000000
  .word 0x2402001c
  .word 0x106200bb
  .word 0x00000000
  .word 0x24020013
  .word 0x106200a8
  .word 0x00000000
  .word 0x24060017
  .word 0x10660098
  .word 0x00000000
  .word 0x24050010
  .word 0x1065007d
  .word 0x00000000
  .word 0x2404000b
  .word 0x10640061
  .word 0x00000000
  .word 0x24020005
  .word 0x10620025
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10620003
  .word 0x00000000
  .word 0x10000283
  .word 0x00000000
  .word 0x8e430118
  .word 0x14600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0d8660
  .word 0x00000000
  .word 0x10000280
  .word 0x00000000
  .word 0x24020002
  .word 0x1462027d
  .word 0x00000000
  .word 0x8e420164
  .word 0x1440000b
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d580
  .word 0x2405044c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0d8660
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0d860c
  .word 0x00000000
  .word 0x1440fff9
  .word 0x00000000
  .word 0x10000269
  .word 0x00000000
  .word 0x8e420164
  .word 0x8c430000
  .word 0x24020019
  .word 0x10620031
  .word 0x00000000
  .word 0x24020018
  .word 0x1062002a
  .word 0x00000000
  .word 0x2402001b
  .word 0x10620023
  .word 0x00000000
  .word 0x10660021
  .word 0x00000000
  .word 0x2402000f
  .word 0x1062001e
  .word 0x00000000
  .word 0x24020011
  .word 0x1062001b
  .word 0x00000000
  .word 0x10650019
  .word 0x00000000
  .word 0x2402000e
  .word 0x10620016
  .word 0x00000000
  .word 0x2402000d
  .word 0x10620013
  .word 0x00000000
  .word 0x10640011
  .word 0x00000000
  .word 0x2402000a
  .word 0x1062000a
  .word 0x00000000
  .word 0x24020008
  .word 0x10620003
  .word 0x00000000
  .word 0x10000244
  .word 0x00000000
  .word 0x8e420118
  .word 0xa6020014
  .word 0x10000240
  .word 0x00000000
  .word 0x8e420118
  .word 0xae020004
  .word 0x1000023c
  .word 0x00000000
  .word 0x8e420118
  .word 0xa6020010
  .word 0x10000238
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020010
  .word 0x10000234
  .word 0x00000000
  .word 0x8e420118
  .word 0xa6020014
  .word 0x10000230
  .word 0x00000000
  .word 0x8e420164
  .word 0x8c430000
  .word 0x24020019
  .word 0x10620011
  .word 0x00000000
  .word 0x24020016
  .word 0x1062000a
  .word 0x00000000
  .word 0x24020009
  .word 0x10620003
  .word 0x00000000
  .word 0x10000223
  .word 0x00000000
  .word 0x8e420118
  .word 0xa6020012
  .word 0x1000021f
  .word 0x00000000
  .word 0x8e420118
  .word 0xa6020010
  .word 0x1000021b
  .word 0x00000000
  .word 0x8e420118
  .word 0xa6020010
  .word 0x10000217
  .word 0x00000000
  .word 0x8e420164
  .word 0x8c430000
  .word 0x2402001a
  .word 0x10620010
  .word 0x00000000
  .word 0x24020003
  .word 0x1062000d
  .word 0x00000000
  .word 0x24020015
  .word 0x10620006
  .word 0x00000000
  .word 0x24020014
  .word 0x10620003
  .word 0x00000000
  .word 0x10000207
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020011
  .word 0x10000203
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020014
  .word 0x100001ff
  .word 0x00000000
  .word 0x82030010
  .word 0x24020003
  .word 0x10620006
  .word 0x00000000
  .word 0x24020002
  .word 0x10620003
  .word 0x00000000
  .word 0x100001f6
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020014
  .word 0x100001f2
  .word 0x00000000
  .word 0x82030010
  .word 0x24020009
  .word 0x10620009
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100001ea
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020014
  .word 0x100001e6
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020014
  .word 0x100001e2
  .word 0x00000000
  .word 0x8e420164
  .word 0x8c430000
  .word 0x24020031
  .word 0x10620014
  .word 0x00000000
  .word 0x2402002f
  .word 0x10620003
  .word 0x00000000
  .word 0x100001d8
  .word 0x00000000
  .word 0x82030010
  .word 0x14600005
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020014
  .word 0x100001d1
  .word 0x00000000
  .word 0x24020001
  .word 0x146201ce
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020014
  .word 0x100001ca
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020014
  .word 0x100001c6
  .word 0x00000000
  .word 0x8e420164
  .word 0x8c440000
  .word 0x2402001d
  .word 0x108201b8
  .word 0x00000000
  .word 0x24020015
  .word 0x108201b1
  .word 0x00000000
  .word 0x24020014
  .word 0x108201ae
  .word 0x00000000
  .word 0x2402001a
  .word 0x108201ab
  .word 0x00000000
  .word 0x24030003
  .word 0x108301a8
  .word 0x00000000
  .word 0x24020018
  .word 0x108201a1
  .word 0x00000000
  .word 0x24020025
  .word 0x10820165
  .word 0x00000000
  .word 0x24020024
  .word 0x1082015e
  .word 0x00000000
  .word 0x24020023
  .word 0x10820150
  .word 0x00000000
  .word 0x24020021
  .word 0x10820126
  .word 0x00000000
  .word 0x24020030
  .word 0x108200af
  .word 0x00000000
  .word 0x24020001
  .word 0x108200ac
  .word 0x00000000
  .word 0x2406002f
  .word 0x10860099
  .word 0x00000000
  .word 0x2406002b
  .word 0x10860092
  .word 0x00000000
  .word 0x24060029
  .word 0x10860086
  .word 0x00000000
  .word 0x24060027
  .word 0x1086007f
  .word 0x00000000
  .word 0x24060004
  .word 0x10860078
  .word 0x00000000
  .word 0x24060020
  .word 0x10860071
  .word 0x00000000
  .word 0x2406001f
  .word 0x1086006a
  .word 0x00000000
  .word 0x2406001e
  .word 0x10860063
  .word 0x00000000
  .word 0x2406000a
  .word 0x1086005c
  .word 0x00000000
  .word 0x24060022
  .word 0x10860055
  .word 0x00000000
  .word 0x24060031
  .word 0x1086004e
  .word 0x00000000
  .word 0x2406001c
  .word 0x10860041
  .word 0x00000000
  .word 0x24060013
  .word 0x1086003a
  .word 0x00000000
  .word 0x24060005
  .word 0x1086001a
  .word 0x00000000
  .word 0x24020006
  .word 0x1082000a
  .word 0x00000000
  .word 0x10850003
  .word 0x00000000
  .word 0x1000016f
  .word 0x00000000
  .word 0x8e420118
  .word 0xa6020010
  .word 0xae4000e4
  .word 0x1000016a
  .word 0x00000000
  .word 0x8e420118
  .word 0xa6020010
  .word 0x0002143c
  .word 0x0002143f
  .word 0x14400005
  .word 0x00000000
  .word 0x2402ffff
  .word 0xa6020012
  .word 0x10000160
  .word 0x00000000
  .word 0xa6000012
  .word 0x1000015d
  .word 0x00000000
  .word 0x86440118
  .word 0xa2040012
  .word 0x0004263c
  .word 0x0004263f
  .word 0x1083000d
  .word 0x00000000
  .word 0x1082000b
  .word 0x00000000
  .word 0x24020002
  .word 0x10820005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0xa6000010
  .word 0x1000014b
  .word 0x00000000
  .word 0x2402000a
  .word 0xa6020010
  .word 0x10000147
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d580
  .word 0x24052881
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000140
  .word 0x00000000
  .word 0x8e420118
  .word 0xa6020010
  .word 0x1000013c
  .word 0x00000000
  .word 0x82030010
  .word 0x8e420118
  .word 0x10620003
  .word 0x00000000
  .word 0xae000014
  .word 0xae000018
  .word 0x8e420118
  .word 0xa2020010
  .word 0x10000132
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020010
  .word 0x1000012e
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020010
  .word 0x1000012a
  .word 0x00000000
  .word 0x8e420118
  .word 0xa602001c
  .word 0x10000126
  .word 0x00000000
  .word 0x8e420118
  .word 0xa6020012
  .word 0x10000122
  .word 0x00000000
  .word 0x8e420118
  .word 0xa6020010
  .word 0x1000011e
  .word 0x00000000
  .word 0x8e420118
  .word 0xa6020010
  .word 0x1000011a
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020014
  .word 0x10000116
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020010
  .word 0x10000112
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020010
  .word 0xae000014
  .word 0xae000018
  .word 0xae00001c
  .word 0xae000020
  .word 0xae000024
  .word 0x10000109
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020010
  .word 0x10000105
  .word 0x00000000
  .word 0x82040010
  .word 0x8e430118
  .word 0x10830009
  .word 0x00000000
  .word 0xae000014
  .word 0xae000018
  .word 0x8e430118
  .word 0x14620004
  .word 0x00000000
  .word 0xa2020015
  .word 0x24020064
  .word 0xa602001a
  .word 0x8e420118
  .word 0xa2020010
  .word 0x100000f5
  .word 0x00000000
  .word 0x82030010
  .word 0x8e420118
  .word 0x1062006d
  .word 0x00000000
  .word 0xae000014
  .word 0xae000018
  .word 0xae00001c
  .word 0xae000020
  .word 0xae000024
  .word 0xae000028
  .word 0xae00002c
  .word 0x8e420118
  .word 0x2c41000b
  .word 0x1020005f
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463a580
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0xae000014
  .word 0xae000018
  .word 0xae00001c
  .word 0x10000056
  .word 0x00000000
  .word 0xa2000014
  .word 0xa2000015
  .word 0xa2000016
  .word 0xa2000017
  .word 0xae000018
  .word 0xae00001c
  .word 0xae000020
  .word 0x24020064
  .word 0xa6020028
  .word 0xa602002a
  .word 0x1000004a
  .word 0x00000000
  .word 0xa2000014
  .word 0xa2000015
  .word 0x24020005
  .word 0xa6020016
  .word 0xae000018
  .word 0xae00001c
  .word 0xae000020
  .word 0xae000024
  .word 0xae000028
  .word 0xae00002c
  .word 0xa2000034
  .word 0xa2000035
  .word 0x2402000d
  .word 0xa2020036
  .word 0x24020006
  .word 0xa2020037
  .word 0x10000038
  .word 0x00000000
  .word 0x24020001
  .word 0xa2020014
  .word 0x24020005
  .word 0xa2020015
  .word 0xa6000016
  .word 0xae000018
  .word 0xae00001c
  .word 0x1000002f
  .word 0x00000000
  .word 0xae000014
  .word 0xae000018
  .word 0xae00001c
  .word 0xae000020
  .word 0x24020014
  .word 0xa6020024
  .word 0xa2000028
  .word 0xa2000029
  .word 0x2402000d
  .word 0xa202002a
  .word 0x24020006
  .word 0xa202002b
  .word 0x10000021
  .word 0x00000000
  .word 0xae000014
  .word 0xae000018
  .word 0xae00001c
  .word 0xae000020
  .word 0x1000001b
  .word 0x00000000
  .word 0xa6000014
  .word 0x2402ffff
  .word 0xa2020018
  .word 0xa2000018
  .word 0x10000015
  .word 0x00000000
  .word 0xae000014
  .word 0xae000018
  .word 0xae00001c
  .word 0xae000020
  .word 0xae000024
  .word 0x1000000e
  .word 0x00000000
  .word 0xae000014
  .word 0xae000018
  .word 0xae00001c
  .word 0x10000009
  .word 0x00000000
  .word 0xa6000014
  .word 0x3c023f80
  .word 0xae020018
  .word 0x10000004
  .word 0x00000000
  .word 0xae000014
  .word 0xae000018
  .word 0xae00001c
  .word 0x8e420118
  .word 0xa2020010
  .word 0x10000081
  .word 0x00000000
  .word 0x82030012
  .word 0x8e420118
  .word 0x1062007d
  .word 0x00000000
  .word 0x2402001e
  .word 0xa6020010
  .word 0xae00002c
  .word 0xae000030
  .word 0x8e430118
  .word 0x24020001
  .word 0x10620010
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0xae000014
  .word 0xae000018
  .word 0x3c024420
  .word 0xae02001c
  .word 0x3c02c443
  .word 0xae020020
  .word 0x3c024200
  .word 0xae020024
  .word 0xae000028
  .word 0x10000009
  .word 0x00000000
  .word 0xae000014
  .word 0x24020384
  .word 0xa6020016
  .word 0xae000018
  .word 0xae00001c
  .word 0xae000020
  .word 0xae000024
  .word 0xae000028
  .word 0x8e420118
  .word 0xa2020012
  .word 0x1000005a
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020010
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x8e420118
  .word 0x10620053
  .word 0x00000000
  .word 0xae000014
  .word 0xae000018
  .word 0x1000004f
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020010
  .word 0x1000004b
  .word 0x00000000
  .word 0x82040010
  .word 0x8e420118
  .word 0x10820047
  .word 0x00000000
  .word 0xa2000011
  .word 0xa2000012
  .word 0xa2000013
  .word 0xae000014
  .word 0xae000018
  .word 0xae00001c
  .word 0xae000020
  .word 0xae000024
  .word 0xae000028
  .word 0x8e440118
  .word 0x10830023
  .word 0x00000000
  .word 0x24020002
  .word 0x1082001d
  .word 0x00000000
  .word 0x24020001
  .word 0x1082000f
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000001c
  .word 0x00000000
  .word 0xa2000011
  .word 0xa2000012
  .word 0xae000014
  .word 0xae000018
  .word 0xae00001c
  .word 0xae000020
  .word 0xae000024
  .word 0xae000028
  .word 0x10000012
  .word 0x00000000
  .word 0xa2000011
  .word 0x2402001e
  .word 0xa6020012
  .word 0xae000014
  .word 0xae000018
  .word 0xae00001c
  .word 0xae000020
  .word 0xae000024
  .word 0xae000028
  .word 0x10000007
  .word 0x00000000
  .word 0xa2000011
  .word 0x10000004
  .word 0x00000000
  .word 0x240200ff
  .word 0xa2020012
  .word 0xa6000014
  .word 0x8e420118
  .word 0xa2020010
  .word 0x10000012
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020024
  .word 0x1000000e
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020018
  .word 0x1000000a
  .word 0x00000000
  .word 0x8e420118
  .word 0xa2020014
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d580
  .word 0x240529c5
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x0011102b
  .word 0x00021023
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_0036CC30


u64 FUN_0036cc30(u64 param_1,u64 param_2,u8 *param_3)



{

  u32 uVar1;

  u32 lVar2;
  u32 flag;
  u32 menuFlag;

  u8 *iVar3;

  int iStack_4;

  

  iVar3 = param_3;

  switch(*(u32 *)(iVar3 + 0x104)) {

  case 0:

  case 1:

  case 2:

    *(u32 *)(iVar3 + 0x128) = 0;

    *(u32 *)(iVar3 + 300) = 0;

    FUN_0036f5f0(9,0x13,5,(int)param_3);

    break;

  case 5:

    *(int *)(iVar3 + 0x16c) = *(int *)(iVar3 + 0xc) + -1;

    *(u32 *)(iVar3 + 0x170) = *(u32 *)(iVar3 + 0x14);

    *(u32 *)(iVar3 + 0x174) = 10000;

    FUN_0036f5f0(7,0xf,10,(int)param_3);

    break;

  case 3:

  case 4:

    *(u32 *)(iVar3 + 0x118) = 0;

    *(u32 *)(iVar3 + 0x11c) = 2;

    *(char **)(iVar3 + 0x120) = (char *)s_FRAME_SET_OK_abs;

    *(u8 ***)(iVar3 + 0x124) = &PTR_DAT_007ccc50;

    FUN_0036f5f0(2,0x13,5,(int)param_3);

    break;

  case 6:

    *(u32 *)(iVar3 + 0x16c) = 0;

    *(u32 *)(iVar3 + 0x170) = 0xffffec78;

    *(u32 *)(iVar3 + 0x174) = 5000;

    FUN_0036f5f0(7,0xf,10,(int)param_3);

    break;

  case 7:

    *(u32 *)(iVar3 + 0x16c) = 2;

    *(u32 *)(iVar3 + 0x198) = *(u32 *)(iVar3 + 0x3c);

    *(u32 *)(iVar3 + 0x19c) = *(u32 *)(iVar3 + 0x40);

    *(u32 *)(iVar3 + 0x1a0) = (u32)*(u8 *)(iVar3 + 0x46);

    *(int *)(iVar3 + 0x1a4) = (int)*(short *)(iVar3 + 0x48);

    uVar1 = FUN_00385e20((int)param_3);

    *(u32 *)(iVar3 + 0xe8) = uVar1;

    FUN_0036f5f0(0x1a,0xf,10,(int)param_3);

    break;

  case 8:

    *(u32 *)(iVar3 + 0x118) = 0;

    *(u32 *)(iVar3 + 0x11c) = 2;

    *(char **)(iVar3 + 0x120) = (char *)s_FIELD_EDIT_GO_abs;

    *(u8 ***)(iVar3 + 0x124) = &PTR_DAT_007ccc50;

    FUN_0036f5f0(2,0x13,5,(int)param_3);

    break;

  case 9:

    *(u32 *)(iVar3 + 0x16c) = 3;

    uVar1 = FUN_00385f00((int)param_3);

    *(u32 *)(iVar3 + 0xe8) = uVar1;

    FUN_0036f5f0(0x1a,0xf,10,(int)param_3);

    break;

  case 10:

    uVar1 = FUN_003865f0((int)param_3);

    *(u32 *)(iVar3 + 0xe8) = uVar1;

    FUN_0036f5f0(0x1a,0xf,10,(int)param_3);

    break;

  case 0xb:

    lVar2 = FUN_00397520(param_3,&iStack_4);

    if (lVar2 == 1) {

      *(u32 *)(iVar3 + 0x170) = 0;

      uVar1 = FUN_00397500(param_3);

      *(u32 *)(iVar3 + 0x16c) = uVar1;

      *(int *)(iVar3 + 0x174) = iStack_4 + -1;

      FUN_0036f5f0(7,0xf,10,(int)param_3);

    }

    break;

  case 0xc:

    FUN_0036f5f0(0x2c,0xc,0x12,(int)param_3);

    break;

  case 0xd:

    flag = 0;
    if (*(u16 *)(iVar3 + 0x4a) != 0) {
      flag = 1;
    }
    uVar1 = FUN_00386a00((int)param_3,flag);

    *(u32 *)(iVar3 + 0xe8) = uVar1;

    FUN_0036f5f0(0x1a,0xf,10,(int)param_3);

    break;

  case 0xe:

    menuFlag = 0;
    if ((*(s8 *)(iVar3 + 0x4c) & 1) != 0) {
      menuFlag = 1;
    }
    *(u32 *)(iVar3 + 0x118) = menuFlag;

    *(u32 *)(iVar3 + 0x11c) = 2;

    *(char **)(iVar3 + 0x120) = (char *)s_VOICE_FILE_LOAD_abs;

    *(u8 ***)(iVar3 + 0x124) = &PTR_DAT_007ccc58;

    FUN_0036f5f0(2,0x13,5,(int)param_3);

    break;

  case 0x10:

    menuFlag = 0;
    if ((*(s8 *)(iVar3 + 0x4c) & 4) != 0) {
      menuFlag = 1;
    }
    *(u32 *)(iVar3 + 0x118) = menuFlag;

    *(u32 *)(iVar3 + 0x11c) = 2;

    *(char **)(iVar3 + 0x120) = (char *)s_BATTLE_BLUR_USE_abs;

    *(u8 ***)(iVar3 + 0x124) = &PTR_DAT_007ccc58;

    FUN_0036f5f0(2,0x13,5,(int)param_3);

    break;

  case 0xf:

    menuFlag = 0;
    if ((*(s8 *)(iVar3 + 0x4c) & 2) != 0) {
      menuFlag = 1;
    }
    *(u32 *)(iVar3 + 0x118) = menuFlag;

    *(u32 *)(iVar3 + 0x11c) = 2;

    *(char **)(iVar3 + 0x120) = (char *)s_MESSAGE_TYPE_abs;

    *(u8 ***)(iVar3 + 0x124) = &PTR_s_NORMAL_007ccc60;

    FUN_0036f5f0(2,0x13,5,(int)param_3);

    break;

  default:

    FUN_0019d3f0((int)DAT_0069d580,0x2aae);

  }

  return 0;

}


/* W367 pragma probe: opt_common_subs off nd 72 -> 61; on nd 72; object 744/752. */
/* W418 negative: typed FUN_00195460(u32) routing in FUN_0036d030 and FUN_0036db20 produced no metric changes; reverted. */
#pragma opt_common_subs off
// FUN_0036D030


#ifndef PC_BUILD
asm void FUN_0036d030(int param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x120000af
  .word 0x00000000
  .word 0x8e030004
  .word 0x30630020
  .word 0x1060000b
  .word 0x00000000
  .word 0x2604082c
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x8e040004
  .word 0x2403ffdf
  .word 0x00831824
  .word 0xae030004
  .word 0x8e030004
  .word 0x30638000
  .word 0x10600012
  .word 0x00000000
  .word 0x8203004c
  .word 0x30630008
  .word 0x1060000e
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x8e030004
  .word 0x3c02ffff
  .word 0x34427fff
  .word 0x00621024
  .word 0xae020004
  .word 0x0c0f1ee4
  .word 0x00000000
  .word 0x8e030004
  .word 0x30630200
  .word 0x1060000b
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0e5bb4
  .word 0x00000000
  .word 0x24030001
  .word 0x10430005
  .word 0x00000000
  .word 0x8e040004
  .word 0x2403fdff
  .word 0x00831824
  .word 0xae030004
  .word 0x8e030004
  .word 0x30630400
  .word 0x1060000b
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0e5bb4
  .word 0x00000000
  .word 0x24030001
  .word 0x10430005
  .word 0x00000000
  .word 0x8e040004
  .word 0x2403fbff
  .word 0x00831824
  .word 0xae030004
  .word 0x8e030004
  .word 0x30630800
  .word 0x1060000b
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0e5bb4
  .word 0x00000000
  .word 0x24030001
  .word 0x10430005
  .word 0x00000000
  .word 0x8e040004
  .word 0x2403f7ff
  .word 0x00831824
  .word 0xae030004
  .word 0x8e030004
  .word 0x30631000
  .word 0x10600009
  .word 0x00000000
  .word 0x0c0f3d8c
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x8e040004
  .word 0x2403efff
  .word 0x00831824
  .word 0xae030004
  .word 0x8e030004
  .word 0x30632000
  .word 0x1060000a
  .word 0x00000000
  .word 0x0c0421c4
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x8e040004
  .word 0x2403dfff
  .word 0x00831824
  .word 0xae030004
  .word 0x8e030004
  .word 0x30634000
  .word 0x1060000b
  .word 0x00000000
  .word 0x8e040924
  .word 0x0c065518
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x8e040004
  .word 0x2403bfff
  .word 0x00831824
  .word 0xae030004
  .word 0xae000924
  .word 0x8e040004
  .word 0x30830001
  .word 0x1460001d
  .word 0x00000000
  .word 0x30830020
  .word 0x1460001a
  .word 0x00000000
  .word 0x30830200
  .word 0x14600017
  .word 0x00000000
  .word 0x30830400
  .word 0x14600014
  .word 0x00000000
  .word 0x30830800
  .word 0x14600011
  .word 0x00000000
  .word 0x30831000
  .word 0x1460000e
  .word 0x00000000
  .word 0x3c030002
  .word 0x00831824
  .word 0x1460000a
  .word 0x00000000
  .word 0x30832000
  .word 0x14600007
  .word 0x00000000
  .word 0x30834000
  .word 0x14600004
  .word 0x00000000
  .word 0x30838000
  .word 0x10600004
  .word 0x00000000
  .word 0x24050001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000282d
  .word 0x8e03077c
  .word 0x10650014
  .word 0x00000000
  .word 0xae05077c
  .word 0x24040001
  .word 0x14a40008
  .word 0x00000000
  .word 0x0000202d
  .word 0x8e050018
  .word 0x0200302d
  .word 0x0c0d8848
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8e050018
  .word 0x0200302d
  .word 0x0c0d8848
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484de20
  .word 0x0c14896a
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


#pragma opt_common_subs reset
// FUN_0036D320


bool FUN_0036d320(int param_1)
{
  int iVar1;
  bool bVar2;

  iVar1 = *(int *)(param_1 + 0xd4);
  if (iVar1 == 0x1a) {
    iVar1 = *(int *)(param_1 + 0x16c);
    switch (iVar1) {
    case 4:
    case 0:
    case 1:
    case 6:
    case 8:
    case 9:
    case 10:
    case 0xc:
    case 0xd:
      return false;
    default:
      return true;
    }
  }
  else if (iVar1 == 0x17) {
    bVar2 = false;
  }
  else if (iVar1 == 0x19) {
    bVar2 = false;
  }
  else if (iVar1 == 0x18) {
    bVar2 = false;
  }
  else if (iVar1 == 0x13) {
    bVar2 = false;
  }
  else if (iVar1 == 0x1c) {
    bVar2 = false;
  }
  else if (iVar1 == 10) {
    bVar2 = false;
  }
  else if (iVar1 == 0x28) {
    bVar2 = false;
  }
  else {
    bVar2 = iVar1 != 0x2e;
  }
  return bVar2;
}


// FUN_0036D470


u32 FUN_0036d470(int param_1)
{
  int *piVar1;
  int iVar2;
  u32 uVar3;

  uVar3 = 0;
  if (param_1 == 0) {
    return uVar3;
  }
  piVar1 = *(int **)((int)param_1 + 0x164);
  if (piVar1 == (int *)0x0) {
    return uVar3;
  }
  iVar2 = *piVar1;
  if (*(int *)((int)param_1 + 0xd4) == 5) {
    if ((iVar2 == 3) || (iVar2 == 0x1a) || (iVar2 == 0x11)) {
      return uVar3;
    }
    if (iVar2 == 0x21) {
      uVar3 = 0xfffffffa;
    }
  }
  return uVar3;
}


// FUN_0036D500


code * FUN_0036d500(void)



{

  int iVar1;

  u32 uVar2;

  u32 lVar3;

  u32 uVar4;

  u32 uVar5;
  int iVar6;

  

  uVar2 = FUN_0035ae10();

  iVar1 = (int)uVar2;

  lVar3 = FUN_00195460(*(u32 *)(iVar1 + 0x930));

  if (lVar3 == 0) {
    iVar6 = DAT_007ce5e4;
    if (iVar6 >= 5) {

      uVar4 = FUN_00386e10(uVar2);

      uVar5 = FUN_00386e30(uVar2);

      FUN_00393e30(uVar2,uVar4,uVar5,0,0,FUN_0036e690);

      *(u32 *)(iVar1 + 4) = *(u32 *)(iVar1 + 4) & 0xfffffeff;

      FUN_0038a0c0(uVar2,FUN_0038a0b0(uVar2));

      DAT_007ce5e4 = 0;

      return (code *)FUN_0036e690;

    }

    DAT_007ce5e4 = iVar6 + 1;

  }

  else {

    DAT_007ce5e4 = 0;

  }

  return (code *)0x0;

}


/* W415: moving FUN_0036f5f0 before the conditional FUN_0035adb0 restored
   the retail adjacent call order and reduced nd 633 -> 630 (object 1024/1056). */
// FUN_0036D5F0


asm code * FUN_0036d5f0(void)
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
  .word 0x0000a82d
  .word 0x0000a02d
  .word 0x0c0d6b84
  .word 0x00000000
  .word 0x0040882d
  .word 0x0220202d
  .word 0x0c0e16c8
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0d8bfc
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0e5644
  .word 0x00000000
  .word 0x8e220004
  .word 0x30420100
  .word 0x10400009
  .word 0x00000000
  .word 0x8e24092c
  .word 0x0c0788dc
  .word 0x00000000
  .word 0xae220930
  .word 0x3c020037
  .word 0x2442d500
  .word 0x100000d6
  .word 0x00000000
  .word 0x24020003
  .word 0xa6220022
  .word 0x24130001
  .word 0x0000902d
  .word 0x10000089
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0db51c
  .word 0x00000000
  .word 0xa6220020
  .word 0x001318c0
  .word 0x02232021
  .word 0x84830092
  .word 0x0002143c
  .word 0x0002143f
  .word 0x0062b021
  .word 0x84830094
  .word 0x86220022
  .word 0x0062b821
  .word 0x24900090
  .word 0x84820090
  .word 0x28420030
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d580
  .word 0x24052c2d
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0db4c8
  .word 0x00000000
  .word 0x1440000e
  .word 0x00000000
  .word 0x86040000
  .word 0x8e2200d4
  .word 0x14440012
  .word 0x00000000
  .word 0x0260282d
  .word 0x02c0302d
  .word 0x02e0382d
  .word 0x0220402d
  .word 0x0c0e1618
  .word 0x00000000
  .word 0x0040a02d
  .word 0x10000009
  .word 0x00000000
  .word 0x86040000
  .word 0x0260282d
  .word 0x02c0302d
  .word 0x02e0382d
  .word 0x0220402d
  .word 0x0c0e1618
  .word 0x00000000
  .word 0x0040a02d
  .word 0x86050000
  .word 0x8e2200d4
  .word 0x14450028
  .word 0x00000000
  .word 0x2403000f
  .word 0x10a30025
  .word 0x00000000
  .word 0x24040005
  .word 0x10a40019
  .word 0x00000000
  .word 0x24020004
  .word 0x10a20003
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0x86220020
  .word 0x2446000c
  .word 0x86220022
  .word 0x24470003
  .word 0x0260282d
  .word 0x0220402d
  .word 0x0c0e1618
  .word 0x00000000
  .word 0x86220020
  .word 0x2446000c
  .word 0x86220022
  .word 0x2447001c
  .word 0x2404000f
  .word 0x0260282d
  .word 0x0220402d
  .word 0x0c0e1618
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x86220020
  .word 0x2446000c
  .word 0x86220022
  .word 0x2447001c
  .word 0x0060202d
  .word 0x0260282d
  .word 0x0220402d
  .word 0x0c0e1618
  .word 0x00000000
  .word 0x12800029
  .word 0x00000000
  .word 0x24020002
  .word 0x1282002c
  .word 0x00000000
  .word 0x2402ffff
  .word 0x16820006
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0dbd90
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x86020000
  .word 0x00021880
  .word 0x3c02006a
  .word 0x2442de40
  .word 0x00431021
  .word 0x8c420000
  .word 0x1040001c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0040f809
  .word 0x00000000
  .word 0x10400015
  .word 0x00000000
  .word 0x24040001
  .word 0x10440009
  .word 0x00000000
  .word 0x2403ffff
  .word 0x10430003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x0080a82d
  .word 0x1000000a
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000004a
  .word 0x00000000
  .word 0x86120000
  .word 0x26730001
  .word 0x8e2200d0
  .word 0x0053082a
  .word 0x1020ff75
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420010
  .word 0x10400028
  .word 0x00000000
  .word 0x8e2200dc
  .word 0x24050001
  .word 0x10450019
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000020
  .word 0x00000000
  .word 0x8e2400e8
  .word 0x10800004
  .word 0x00000000
  .word 0x0c0d6b6c
  .word 0x00000000
  .word 0xae2000e8
  .word 0xae2000d4
  .word 0xae2000d0
  .word 0x8e2200dc
  .word 0x24420001
  .word 0xae2200dc
  .word 0xae200780
  .word 0x24040004
  .word 0x24050001
  .word 0x24060003
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x8e2200d0
  .word 0x14450009
  .word 0x00000000
  .word 0x8e2400e8
  .word 0x10800004
  .word 0x00000000
  .word 0x0c0d6b6c
  .word 0x00000000
  .word 0xae2000e8
  .word 0xae2000dc
  .word 0x24150001
  .word 0x8e2200d4
  .word 0x14400002
  .word 0x00000000
  .word 0x24150001
  .word 0x12a00011
  .word 0x00000000
  .word 0xae2000d4
  .word 0xae2000d0
  .word 0xae2000dc
  .word 0x0220202d
  .word 0x0c0e29cc
  .word 0x00000000
  .word 0x2402ffff
  .word 0xae22001c
  .word 0x3c04006a
  .word 0x2484df00
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c020037
  .word 0x2442e690
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
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
  .word 0x00000000
  .word 0x00000000
}


// b210 floor after an informed type attempt regressed and was reverted: all 22
// remaining words are cyclic saved-register coloring (ours s1/s0/s3/s2 versus
// retail s3/s2/s1/s0), including the dependent moves/sign extensions/branches.
// FUN_0036DA10


#ifndef PC_BUILD
asm u32 FUN_0036da10(int param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c820008
  .word 0x8c430094
  .word 0x8c730010
  .word 0x8c720014
  .word 0x9062001a
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x8470001c
  .word 0x16600006
  .word 0x00000000
  .word 0x16400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000026
  .word 0x00000000
  .word 0x8c820004
  .word 0x30420008
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x1000001f
  .word 0x00000000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0c0ed588
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000016
  .word 0x00000000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0c0ed5d8
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0ed630
  .word 0x00000000
  .word 0x0010143c
  .word 0x0002143f
  .word 0x10400004
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0ed660
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484df20
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24020001
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


/* W415 negative: inserting the retail FUN_0019d3f0(..., 0x2d61) after
   FUN_003942f0 raised nd 927 -> 984 and object 1564 -> 1584, over the 1568-byte window. */
/* W367 pragma probe: opt_common_subs off nd 977 -> 927; on nd 977; object 1564/1568. */
#pragma opt_common_subs off
// FUN_0036DB20


#ifndef PC_BUILD
asm u32 FUN_0036db20(int param_1)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c90003c
  .word 0x26120960
  .word 0x8e020960
  .word 0x2c410011
  .word 0x10200171
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463a600
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0dbc00
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0d841c
  .word 0x00000000
  .word 0x8e020004
  .word 0x34420001
  .word 0xae020004
  .word 0x24020001
  .word 0xae020960
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c069180
  .word 0x00000000
  .word 0xe60008d0
  .word 0x8e020934
  .word 0x14400013
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e1b84
  .word 0x00000000
  .word 0x0040982d
  .word 0x0200202d
  .word 0x0c0e1b8c
  .word 0x00000000
  .word 0x0040882d
  .word 0x0200202d
  .word 0x0c0e5d40
  .word 0x00000000
  .word 0x0260202d
  .word 0x0220282d
  .word 0x0040302d
  .word 0x8e070964
  .word 0x0c0e5fe0
  .word 0x00000000
  .word 0xae020934
  .word 0x0200202d
  .word 0x0c0e1b84
  .word 0x00000000
  .word 0x0040882d
  .word 0x0200202d
  .word 0x0c0e1b8c
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484df50
  .word 0x0220282d
  .word 0x0040302d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24020002
  .word 0xae020960
  .word 0x8e040934
  .word 0x0c0e6018
  .word 0x00000000
  .word 0x10400130
  .word 0x00000000
  .word 0x24020003
  .word 0xae020960
  .word 0x8e040934
  .word 0x0c0e6038
  .word 0x00000000
  .word 0x0040882d
  .word 0x0c0e509c
  .word 0x00000000
  .word 0x0040982d
  .word 0x2604082c
  .word 0x0260282d
  .word 0x8e260034
  .word 0x8e270038
  .word 0x8e28003c
  .word 0x0c0e50bc
  .word 0x00000000
  .word 0x1660000a
  .word 0x00000000
  .word 0xae000008
  .word 0x3c04006a
  .word 0x2484d580
  .word 0x24052d61
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000116
  .word 0x00000000
  .word 0x8e220028
  .word 0xae620008
  .word 0x8e22002c
  .word 0xae620070
  .word 0x8e220030
  .word 0xae62007c
  .word 0x8e22001c
  .word 0xae620114
  .word 0x8e220020
  .word 0xae620118
  .word 0x8e220024
  .word 0xae62011c
  .word 0x8e22000c
  .word 0xae620120
  .word 0x8e220010
  .word 0xae620124
  .word 0xae130008
  .word 0x24020004
  .word 0xae420000
  .word 0x3c04006a
  .word 0x2484df70
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0db684
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x24020006
  .word 0xae020960
  .word 0x100000f5
  .word 0x00000000
  .word 0x24020005
  .word 0xae020960
  .word 0x3c04006a
  .word 0x2484dfa0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x100000ed
  .word 0x00000000
  .word 0x0c0ed684
  .word 0x00000000
  .word 0x104000e9
  .word 0x00000000
  .word 0x8e020004
  .word 0x30420008
  .word 0x1440000a
  .word 0x00000000
  .word 0x8e020008
  .word 0x8c420094
  .word 0x80420018
  .word 0x10400005
  .word 0x00000000
  .word 0x24020001
  .word 0xae020974
  .word 0x10000002
  .word 0x00000000
  .word 0xae000974
  .word 0x24020006
  .word 0xae020960
  .word 0x100000d7
  .word 0x00000000
  .word 0x8e020974
  .word 0x1c400005
  .word 0x00000000
  .word 0x24020008
  .word 0xae020960
  .word 0x100000d0
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050002
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0xaf82b8f8
  .word 0x24020007
  .word 0xae020960
  .word 0x100000c6
  .word 0x00000000
  .word 0x8f84b8f8
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x24030001
  .word 0x144300c0
  .word 0x00000000
  .word 0x0000202d
  .word 0x8f85b8f8
  .word 0x0c0ed800
  .word 0x00000000
  .word 0xa782b8fc
  .word 0x9784b8fc
  .word 0x24050001
  .word 0x0c068370
  .word 0x00000000
  .word 0x8e020974
  .word 0x2442ffff
  .word 0xae020974
  .word 0x24020006
  .word 0xae020960
  .word 0x100000b0
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040882d
  .word 0x10000005
  .word 0x00000000
  .word 0x8e240128
  .word 0x0c0c6fa0
  .word 0x00000000
  .word 0x8e3100f8
  .word 0x00000000
  .word 0x00000000
  .word 0x1620fff9
  .word 0x00000000
  .word 0x24020009
  .word 0xae020960
  .word 0x0c0e5930
  .word 0x00000000
  .word 0xae020710
  .word 0x0000882d
  .word 0x10000012
  .word 0x00000000
  .word 0x8c630040
  .word 0x00111100
  .word 0x00622021
  .word 0x8c830008
  .word 0x24020004
  .word 0x10620003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x8e020008
  .word 0x8c430010
  .word 0x8c820004
  .word 0x00622821
  .word 0x8e040710
  .word 0x0c0e5920
  .word 0x00000000
  .word 0x26310001
  .word 0x8e030008
  .word 0x8c620044
  .word 0x0222102a
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x8e040710
  .word 0x0c0e5974
  .word 0x00000000
  .word 0x2402000a
  .word 0xae020960
  .word 0x1000007d
  .word 0x00000000
  .word 0x8e040710
  .word 0x0c0e597c
  .word 0x00000000
  .word 0x10400078
  .word 0x00000000
  .word 0x2402000b
  .word 0xae020960
  .word 0x8e040008
  .word 0x0200282d
  .word 0x0c0e44bc
  .word 0x00000000
  .word 0x2402000c
  .word 0xae020960
  .word 0x2402000e
  .word 0xae020960
  .word 0x1000006c
  .word 0x00000000
  .word 0x8e0408d8
  .word 0x0c065518
  .word 0x00000000
  .word 0x24030001
  .word 0x10430066
  .word 0x00000000
  .word 0x2402000e
  .word 0xae020960
  .word 0x8202004c
  .word 0x30420001
  .word 0x10400015
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e1b84
  .word 0x00000000
  .word 0x0040882d
  .word 0x0200202d
  .word 0x0c0e1b8c
  .word 0x00000000
  .word 0x8e04092c
  .word 0x24050002
  .word 0x0000302d
  .word 0x00a0382d
  .word 0x0220402d
  .word 0x0040482d
  .word 0x0c0429dc
  .word 0x00000000
  .word 0xae02093c
  .word 0x2402000f
  .word 0xae020960
  .word 0x1000004c
  .word 0x00000000
  .word 0x24020010
  .word 0xae020960
  .word 0x10000048
  .word 0x00000000
  .word 0x8e04093c
  .word 0x0c0429c8
  .word 0x00000000
  .word 0x10400043
  .word 0x00000000
  .word 0x24020010
  .word 0xae020960
  .word 0x8e040934
  .word 0x0c0e6038
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e030004
  .word 0x2402ff7f
  .word 0x00621024
  .word 0xae020004
  .word 0x0200202d
  .word 0x0c0e1b84
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0200202d
  .word 0x0c0e1b8c
  .word 0x00000000
  .word 0x0040982d
  .word 0x0200202d
  .word 0x0c0e5d40
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0040302d
  .word 0x0c0ef62c
  .word 0x00000000
  .word 0x2403ffff
  .word 0x10430006
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0e549c
  .word 0x00000000
  .word 0x8e020004
  .word 0x30420008
  .word 0x14400004
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e2438
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a5006c
  .word 0x0c0e5d48
  .word 0x00000000
  .word 0x24030001
  .word 0x14430010
  .word 0x00000000
  .word 0x8e250014
  .word 0x8fa2006c
  .word 0x00a2082a
  .word 0x1020000b
  .word 0x00000000
  .word 0x04a00009
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e5d44
  .word 0x00000000
  .word 0x0200202d
  .word 0x3c050037
  .word 0x24a5e690
  .word 0x0c0e4fcc
  .word 0x00000000
  .word 0x8e420018
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
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
}
#endif /* PC_BUILD: asm function omitted */


#pragma opt_common_subs reset
// FUN_0036E140


code * FUN_0036e140(int param_1)
{
  u32 *puVar1;
  code *pcVar2;
  u32 lVar3;

  puVar1 = *(u32 **)(param_1 + 0x3c);
  if ((puVar1[1] & 8) != 0) {
    lVar3 = FUN_0039e6f0();
    if ((lVar3 == 1) && ((*(u16 *)DAT_007e094e_abs & 0x200) != 0)) {
      if (puVar1[0x23] != 0) {
        puVar1[0x23] = 0;
      }
      else {
        puVar1[0x23] = 1;
      }
    }
  }
  else {
    if ((*(u16 *)DAT_007e094e_abs & 0x200) != 0) {
      if (puVar1[0x23] != 0) {
        puVar1[0x23] = 0;
      }
      else {
        puVar1[0x23] = 1;
      }
    }
  }
  if ((puVar1 != 0) && (puVar1[0x23] != 0)) {
    FUN_00386d50((int)puVar1);
  }
  lVar3 = FUN_00195460(puVar1[0x24e]);
  if (lVar3 == 0) {
    puVar1[1] = puVar1[1] & 0xfffdffff;
    puVar1[0x24e] = 0;
    pcVar2 = (code *)FUN_0036e690;
  }
  else {
    pcVar2 = (code *)0x0;
  }
  return pcVar2;
}


// FUN_0036E260


u32 FUN_0036e260(int param_1)



{

  int iVar1;

  u32 uVar2;

  int lVar3;

  

  iVar1 = *(int *)(param_1 + 0x3c);

  lVar3 = FUN_00108710();
  if (lVar3 == 0) {
    FUN_005225a8(DAT_0069ffd0);
    uVar2 = 0;
    goto LAB_0036e2d0;
  }
  if ((*(s8 *)(iVar1 + 0x4c) & 4) == 0) {
    goto LAB_0036e2cc;
  }
  lVar3 = FUN_002ff310();
  if (lVar3 == 1) {
    goto LAB_0036e2cc;
  }
  uVar2 = 0;
  goto LAB_0036e2d0;
LAB_0036e2cc:
  uVar2 = 0xffffffff;
LAB_0036e2d0:
  return uVar2;

}


/* W415: swapping case-2's FUN_00316e00 and fallback FUN_003b5d10 layout
   restored the retail call order and reduced nd 645 -> 618 (object 928/928). */
// FUN_0036E2F0


#ifndef PC_BUILD
asm u32 FUN_0036e2f0(int param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c94003c
  .word 0x269008e0
  .word 0x8e8208e0
  .word 0x2c410006
  .word 0x102000d0
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463a650
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0c0e5d14
  .word 0x00000000
  .word 0x24020001
  .word 0xae020000
  .word 0x0c0ed740
  .word 0x00000000
  .word 0x144000c1
  .word 0x00000000
  .word 0x24020004
  .word 0xae020000
  .word 0x100000bd
  .word 0x00000000
  .word 0x0000982d
  .word 0x1000002d
  .word 0x00000000
  .word 0x26620384
  .word 0x304203ff
  .word 0x34420c00
  .word 0x3052ffff
  .word 0x00131080
  .word 0x02021021
  .word 0x8c42002c
  .word 0x14400023
  .word 0x00000000
  .word 0x2404009c
  .word 0x24050007
  .word 0x0c0e1ab8
  .word 0x00000000
  .word 0x0040882d
  .word 0x16200004
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000010
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x2406009c
  .word 0x0c148502
  .word 0x00000000
  .word 0x24020001
  .word 0xae220000
  .word 0x2402ffff
  .word 0xae220008
  .word 0xa620000c
  .word 0xae200064
  .word 0x0220202d
  .word 0x0280282d
  .word 0x0c0d86d8
  .word 0x00000000
  .word 0x00131080
  .word 0x02021021
  .word 0xac51002c
  .word 0x8e840008
  .word 0x0280282d
  .word 0x0220302d
  .word 0x0240382d
  .word 0x0c0e3e30
  .word 0x00000000
  .word 0x26730001
  .word 0x8e020004
  .word 0x0262102a
  .word 0x1440ffd1
  .word 0x00000000
  .word 0x24020002
  .word 0xae020000
  .word 0x10000086
  .word 0x00000000
  .word 0x8e050038
  .word 0x8e020004
  .word 0x00a2082a
  .word 0x1020002c
  .word 0x00000000
  .word 0x24a20384
  .word 0x304203ff
  .word 0x34420c00
  .word 0x3044ffff
  .word 0x00051040
  .word 0x00451021
  .word 0x00021080
  .word 0x00501821
  .word 0x8c62000c
  .word 0x14400017
  .word 0x00000000
  .word 0x00051080
  .word 0x00501021
  .word 0x8c51002c
  .word 0x1220000d
  .word 0x00000000
  .word 0xa624000c
  .word 0x9624000c
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x8c420028
  .word 0xae220058
  .word 0x10000002
  .word 0x00000000
  .word 0xae200058
  .word 0xae200038
  .word 0x8e020038
  .word 0x24420001
  .word 0xae020038
  .word 0x10000060
  .word 0x00000000
  .word 0x94640008
  .word 0x3045ffff
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0xae02003c
  .word 0x24020003
  .word 0xae020000
  .word 0x10000056
  .word 0x00000000
  .word 0x24020004
  .word 0xae020000
  .word 0x10000052
  .word 0x00000000
  .word 0x8e04003c
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x24030001
  .word 0x1443004c
  .word 0x00000000
  .word 0x8e130038
  .word 0x26620384
  .word 0x3044ffff
  .word 0x24050003
  .word 0x8e06003c
  .word 0x0c0ed89c
  .word 0x00000000
  .word 0x3051ffff
  .word 0x16200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d580
  .word 0x24052eb7
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c0ee554
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040902d
  .word 0x0240202d
  .word 0x0c0e3644
  .word 0x00000000
  .word 0x00131080
  .word 0x00501021
  .word 0x2454002c
  .word 0x8c53002c
  .word 0x1260000d
  .word 0x00000000
  .word 0xa671000c
  .word 0x9664000c
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x8c420028
  .word 0xae620058
  .word 0x10000002
  .word 0x00000000
  .word 0xae600058
  .word 0xae720038
  .word 0x8e440128
  .word 0x0c0c62c0
  .word 0x00000000
  .word 0x8e860000
  .word 0x90450000
  .word 0x90440001
  .word 0x90430002
  .word 0x90420003
  .word 0xa0c50054
  .word 0xa0c40055
  .word 0xa0c30056
  .word 0xa0c20057
  .word 0x8e020038
  .word 0x24420001
  .word 0xae020038
  .word 0x24020002
  .word 0xae020000
  .word 0x1000000d
  .word 0x00000000
  .word 0x24020005
  .word 0xae020000
  .word 0x10000009
  .word 0x00000000
  .word 0x8e830004
  .word 0x3c02fffe
  .word 0x3442ffff
  .word 0x00621024
  .word 0xae820004
  .word 0x8e020040
  .word 0x10000002
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
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


/* W367 pragma probe: opt_propagation off nd 1100 -> 1093; on nd 1100; object 1688/1696. */
#pragma opt_propagation off
// FUN_0036E690


asm code * FUN_0036e690(int param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c91003c
  .word 0x0000802d
  .word 0x0220202d
  .word 0x0c0e16c8
  .word 0x00000000
  .word 0x8e230004
  .word 0x3c020004
  .word 0x00621024
  .word 0x10400005
  .word 0x00000000
  .word 0x3c020037
  .word 0x2442e260
  .word 0x10000190
  .word 0x00000000
  .word 0x30620080
  .word 0x10400005
  .word 0x00000000
  .word 0x3c020037
  .word 0x2442db20
  .word 0x10000189
  .word 0x00000000
  .word 0x3c020001
  .word 0x00621024
  .word 0x10400005
  .word 0x00000000
  .word 0x3c020037
  .word 0x2442e2f0
  .word 0x10000181
  .word 0x00000000
  .word 0x3c020002
  .word 0x00621024
  .word 0x10400005
  .word 0x00000000
  .word 0x3c020037
  .word 0x2442e140
  .word 0x10000179
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0d8bfc
  .word 0x00000000
  .word 0x8e240018
  .word 0x8e22001c
  .word 0x10820004
  .word 0x00000000
  .word 0x0220282d
  .word 0x0c0d9ab0
  .word 0x00000000
  .word 0x8e220018
  .word 0xae22001c
  .word 0x8e2200dc
  .word 0x14400020
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420200
  .word 0x1040001b
  .word 0x00000000
  .word 0x8e220004
  .word 0x30420008
  .word 0x1040000f
  .word 0x00000000
  .word 0x0c0e79bc
  .word 0x00000000
  .word 0x24030001
  .word 0x14430012
  .word 0x00000000
  .word 0x8e22008c
  .word 0x10400004
  .word 0x00000000
  .word 0xae20008c
  .word 0x1000000c
  .word 0x00000000
  .word 0xae23008c
  .word 0x10000009
  .word 0x00000000
  .word 0x8e22008c
  .word 0x10400004
  .word 0x00000000
  .word 0xae20008c
  .word 0x10000003
  .word 0x00000000
  .word 0x24020001
  .word 0xae22008c
  .word 0x8e23008c
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0xaf82b8e8
  .word 0x10000002
  .word 0x00000000
  .word 0xaf80b8e8
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420001
  .word 0x10400028
  .word 0x00000000
  .word 0x8e220004
  .word 0x30420008
  .word 0x10400016
  .word 0x00000000
  .word 0x0c0e79bc
  .word 0x00000000
  .word 0x24030001
  .word 0x1443001f
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484dfe0
  .word 0x0c0654d0
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c069c08
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c069c18
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484dfe0
  .word 0x0c0654d0
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c069c08
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c069c18
  .word 0x00000000
  .word 0x8e230004
  .word 0x30620008
  .word 0x14400059
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420002
  .word 0x10400007
  .word 0x00000000
  .word 0x34620001
  .word 0xae220004
  .word 0x3c100037
  .word 0x2610d5f0
  .word 0x1000004e
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0d8978
  .word 0x00000000
  .word 0x0c0ed740
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420080
  .word 0x10400004
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0d8bc8
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420800
  .word 0x10400033
  .word 0x00000000
  .word 0x8e240004
  .word 0x30830001
  .word 0x1460001d
  .word 0x00000000
  .word 0x30820020
  .word 0x1440001a
  .word 0x00000000
  .word 0x30820200
  .word 0x14400017
  .word 0x00000000
  .word 0x30820400
  .word 0x14400014
  .word 0x00000000
  .word 0x30820800
  .word 0x14400011
  .word 0x00000000
  .word 0x30821000
  .word 0x1440000e
  .word 0x00000000
  .word 0x3c020002
  .word 0x00821024
  .word 0x1440000a
  .word 0x00000000
  .word 0x30822000
  .word 0x14400007
  .word 0x00000000
  .word 0x30824000
  .word 0x14400004
  .word 0x00000000
  .word 0x30828000
  .word 0x10400004
  .word 0x00000000
  .word 0x24040001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000202d
  .word 0x24020001
  .word 0x14820009
  .word 0x00000000
  .word 0x1060000a
  .word 0x00000000
  .word 0x8e230004
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae220004
  .word 0x10000004
  .word 0x00000000
  .word 0x8e220004
  .word 0x34420001
  .word 0xae220004
  .word 0x8e220004
  .word 0x30420001
  .word 0x10400004
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0d88e4
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0e32a0
  .word 0x00000000
  .word 0x8e220008
  .word 0x10400009
  .word 0x00000000
  .word 0x2624082c
  .word 0x0c0e7bb8
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x2624082c
  .word 0x0c0e7d04
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0db40c
  .word 0x00000000
  .word 0x8e220004
  .word 0x30420008
  .word 0x1040001b
  .word 0x00000000
  .word 0x0c0e79bc
  .word 0x00000000
  .word 0x24040001
  .word 0x14440016
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x30620004
  .word 0x10400011
  .word 0x00000000
  .word 0x30620008
  .word 0x1040000e
  .word 0x00000000
  .word 0x8222004c
  .word 0x30420004
  .word 0x10400003
  .word 0x00000000
  .word 0x0c0bfc98
  .word 0x00000000
  .word 0x8e230004
  .word 0x3c020004
  .word 0x00621025
  .word 0xae220004
  .word 0x0000102d
  .word 0x1000008c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0e1b84
  .word 0x00000000
  .word 0x24030050
  .word 0x14430007
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0e1b8c
  .word 0x00000000
  .word 0x24030001
  .word 0x1043000d
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0e1b84
  .word 0x00000000
  .word 0x24030050
  .word 0x14430020
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0e1b8c
  .word 0x00000000
  .word 0x24030005
  .word 0x1443001a
  .word 0x00000000
  .word 0x8e220018
  .word 0x2841001f
  .word 0x14200016
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420800
  .word 0x10400011
  .word 0x00000000
  .word 0x0c0423dc
  .word 0x00000000
  .word 0x8222004c
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0bfc98
  .word 0x00000000
  .word 0x8e230004
  .word 0x3c020004
  .word 0x00621025
  .word 0xae220004
  .word 0x0000102d
  .word 0x1000005b
  .word 0x00000000
  .word 0x8e220004
  .word 0x30440008
  .word 0x10800014
  .word 0x00000000
  .word 0x8e230018
  .word 0x8e220014
  .word 0x0062102a
  .word 0x1440000f
  .word 0x00000000
  .word 0x8222004c
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0bfc98
  .word 0x00000000
  .word 0x8e230004
  .word 0x3c020004
  .word 0x00621025
  .word 0xae220004
  .word 0x0000102d
  .word 0x10000044
  .word 0x00000000
  .word 0x8e230018
  .word 0x8e22077c
  .word 0x1440000d
  .word 0x00000000
  .word 0x8e220014
  .word 0x0062102a
  .word 0x14400008
  .word 0x00000000
  .word 0x14800007
  .word 0x00000000
  .word 0x8e220004
  .word 0x38420001
  .word 0xae220004
  .word 0x10000002
  .word 0x00000000
  .word 0x24630001
  .word 0x8e220024
  .word 0x10400003
  .word 0x00000000
  .word 0x8e230028
  .word 0xae200024
  .word 0xae230018
  .word 0x3c020037
  .word 0x2442d5f0
  .word 0x16020029
  .word 0x00000000
  .word 0xae2000d4
  .word 0xae2000d0
  .word 0xae2000dc
  .word 0x0220202d
  .word 0x0c0e29b0
  .word 0x00000000
  .word 0x24040001
  .word 0x24050002
  .word 0x00a0302d
  .word 0x0220382d
  .word 0x0c0dbd7c
  .word 0x00000000
  .word 0x8e220008
  .word 0x10400009
  .word 0x00000000
  .word 0x2624082c
  .word 0x0c0e7bb8
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x2624082c
  .word 0x0c0e7cd4
  .word 0x00000000
  .word 0x0c0e5c34
  .word 0x00000000
  .word 0x0c0f3d10
  .word 0x00000000
  .word 0x0c0423dc
  .word 0x00000000
  .word 0x8e2308dc
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0x0c041c6c
  .word 0x00000000
  .word 0xae2008dc
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c0e2830
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma schedule reset


#pragma opt_propagation reset
// FUN_0036ED30


code * FUN_0036ed30(int param_1)



{

  int iVar1;

  int uVar2;

  

  iVar1 = *(int *)(param_1 + 0x3c);

  FUN_003951a0(0xa10);

  FUN_003953e0(*(u32 *)(iVar1 + 0x92c));

  FUN_00396410(param_1);

  uVar2 = FUN_00198590();

  FUN_001a4580(uVar2,35.0f);

  FUN_001a0420(1);

  FUN_0038a0c0(iVar1,0);

  return (code *)FUN_0036e690;

}


// FUN_0036EDD0


code * FUN_0036edd0(void)
{
  int iVar1;

  iVar1 = FUN_0035ae10();
  if ((*(u32 *)(iVar1 + 4) & 0x80) != 0) {
    return (code *)FUN_0036db20;
  }
  FUN_005225a8(&D_0069DFF0);
  return (code *)FUN_0036ed30;
}


// FUN_0036EE30


code * FUN_0036ee30(void)



{


  u32 uVar2;

  u32 uVar3;


  u32 uVar5;

  int iVar6;

  

  uVar2 = FUN_0035ae10();

  FUN_0036f370(uVar2);

  iVar6 = (int)uVar2;

  if (*(int *)(iVar6 + 0x934) == 0) {

    FUN_0019d3f0((const char *)(DAT_006a0000 - 0x2a80),0x306f);

  }

  {
    int iVar1;

  iVar1 = FUN_003980e0(*(u32 *)(iVar6 + 0x934));

  FUN_00386e20(uVar2,*(u32 *)(iVar1 + 0xc));

  FUN_00386e40(uVar2,*(u32 *)(iVar1 + 0x10));

  FUN_00397510(uVar2,*(u32 *)(iVar1 + 0x14));
  }

  uVar5 = FUN_00386e10(uVar2);

  FUN_00523ac8(iVar6 + 0x144,(const char *)(DAT_006a0000 - 0x2860),uVar5,FUN_00386e30(uVar2));

  uVar5 = FUN_00386e10(uVar2);

  FUN_005225a8((const char *)(DAT_006a0000 - 0x1fd0),uVar5,FUN_00386e30(uVar2));

  *(u32 *)(iVar6 + 4) = 0;

  *(u32 *)(iVar6 + 0x8c) = 0;

  *(u32 *)(iVar6 + 4) = *(u32 *)(iVar6 + 4) | 8;

  uVar3 = FUN_00386e10(uVar2);

  FUN_00393e30(uVar2,uVar3,FUN_00386e30(uVar2),FUN_00397500(uVar2),0,FUN_0036edd0);

  return (code *)FUN_0036edd0;

}


// FUN_0036EFB0


void FUN_0036efb0(void)



{

  int lVar1;

  

  lVar1 = FUN_003b5d10(0x400);

  if (lVar1 != 0) {

    FUN_003174e0(*(u32 *)((u16 *)lVar1 + 0x94));

    FUN_003b7090(*(u16 *)lVar1);

  }

  return;

}


// FUN_0036F000


#ifndef PC_BUILD
asm void FUN_0036f000(int param_1)
/* DUMMYDUMB session 2026-10-21: 42 differing bytes.  Six of them are the
 * gp-relative vs absolute addressing of two globals (relocation-masked, so not
 * part of the residual).  The rest is the nested loop's block layout.
 * Ours:  +1a0 lw s1,132(s0) | +1a4 b 1f4 | +1ac move a0,s1
 *        +1b0 jal 0x361890 | +1b8 lw a1,108(s1) | +1c4 bnez a1,1ac
 *        +1f0 lw s1,132(s0) | +1f4 bnez s1,1b8
 * Retail: +1a0 b 1f0 | +1a8 b 1bc | +1b0 move a0,s1
 *        +1b4 jal 0x361890 | +1bc lw a1,108(s1) | +1c8 bnez a1,1b0
 *        +1f0 lw s1,132(s0) | +1f4 bnez s1,1a8
 * Both are the same while loop; retail's outer back-edge targets the inner
 * TEST and ours targets the inner BODY.  Probed: the inner while as a for over
 * the next-pointer (does not compile - no C99 declarations), the inner test
 * read into a local before the loop, the inner test reversed, an explicit
 * break at the end of the body, and the outer step through a local - all
 * byte-neutral.  Turning the inner while into a do/while gives 42 -> 37 but is
 * NOT semantically equivalent (retail's entry branches to the test, so the
 * body runs zero times on a null next-pointer), so it is rejected.
 * Confirmed wall: block layout / branch threading. */
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x0c0f3d10
  .word 0x00000000
  .word 0x0c0e5508
  .word 0x00000000
  .word 0x0c040f2c
  .word 0x00000000
  .word 0x0c0ef320
  .word 0x00000000
  .word 0x0c0e5c34
  .word 0x00000000
  .word 0x0c0e3280
  .word 0x00000000
  .word 0x8e020008
  .word 0x10400009
  .word 0x00000000
  .word 0x2604082c
  .word 0x0c0e7bb8
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x2604082c
  .word 0x0c0e7cd4
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e35c8
  .word 0x00000000
  .word 0x8e020004
  .word 0x30420008
  .word 0x14400003
  .word 0x00000000
  .word 0x0c0423dc
  .word 0x00000000
  .word 0x8e040924
  .word 0x10800004
  .word 0x00000000
  .word 0x0c065408
  .word 0x00000000
  .word 0xae000924
  .word 0x16000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484d580
  .word 0x24050167
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0c0e7ae4
  .word 0x00000000
  .word 0x8e040710
  .word 0x0c0e594c
  .word 0x00000000
  .word 0xae000710
  .word 0x8e020004
  .word 0x30420008
  .word 0x14400016
  .word 0x00000000
  .word 0x24040400
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040882d
  .word 0x12200007
  .word 0x00000000
  .word 0x8e240128
  .word 0x0c0c5d38
  .word 0x00000000
  .word 0x96240000
  .word 0x0c0edc24
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e23fc
  .word 0x00000000
  .word 0x0c0ed6ac
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484e068
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e020004
  .word 0x30420008
  .word 0x1440000c
  .word 0x00000000
  .word 0x8e0308dc
  .word 0x24020001
  .word 0x14620008
  .word 0x00000000
  .word 0x0c041c6c
  .word 0x00000000
  .word 0xae0008dc
  .word 0x3c04006a
  .word 0x2484e078
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0c0d6b94
  .word 0x00000000
  .word 0x0c0d6b98
  .word 0x00000000
  .word 0x0c0d6b9c
  .word 0x00000000
  .word 0x0c0d6ba0
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0d8624
  .word 0x00000000
  .word 0x8e25006c
  .word 0x00000000
  .word 0x00000000
  .word 0x14a0fff9
  .word 0x00000000
  .word 0x0220202d
  .word 0x0200282d
  .word 0x0c0d870c
  .word 0x00000000
  .word 0x24050007
  .word 0x2406009c
  .word 0x0c0e1adc
  .word 0x00000000
  .word 0x8e110084
  .word 0x1620ffec
  .word 0x00000000
  .word 0x8e040008
  .word 0x10800005
  .word 0x00000000
  .word 0x2605082c
  .word 0x0c0e530c
  .word 0x00000000
  .word 0xae000008
  .word 0x8e040938
  .word 0x1080000a
  .word 0x00000000
  .word 0x0c065518
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x8e040938
  .word 0x0c065408
  .word 0x00000000
  .word 0xae000938
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_0036F260


void FUN_0036f260(void)



{

  char cVar1;

  int uVar2;

  u32 *puVar3;

  

  uVar2 = FUN_0035ae10();

  FUN_0036f000(uVar2);

  puVar3 = (u32 *)uVar2;

  if ((puVar3[1] & 8) == 0) {

    FUN_00389f40();

  }

  FUN_003bb340();

  if ((((puVar3[1] & 8) != 0) && (cVar1 = *(char *)((int)puVar3 + 0x45), '\0' < cVar1)) &&

     (cVar1 < '\t')) {

    FUN_0016ddd0(cVar1 + -1);

  }

  if (((puVar3[1] & 8) == 0) && (puVar3[0x24d] != 0)) {

    FUN_00195020_evt_main(puVar3[0x24d]);

    puVar3[0x24d] = 0;

  }

  FUN_001a0420(0);

  FUN_00385b90_evt_main((u32)puVar3);

  FUN_003951a0(0x1419);

  FUN_003cf440();

  FUN_00386b70_evt_main(*puVar3,0,0x990);

  FUN_00386cd0();

  FUN_005225a8_evt_main(&D_0069E088);

  return;

}


// FUN_0036F370


void FUN_0036f370(int param_1)



{

  *(u32 *)(param_1 + 0x928) = DAT_007cdeac;

  FUN_003858c0();

  FUN_00386aa0();

  FUN_00395170(0x1419);

  return;

}


// FUN_0036F3B0


void FUN_0036f3b0(u64 param_1,u32 param_2)



{

  int iVar1;

  u32 uVar2;

  u32 lVar3;

  

  lVar3 = FUN_00386ae0_evt(0x990,0);

  iVar1 = (int)lVar3;

  if (lVar3 == 0) {

    FUN_0019d3f0((const char *)(DAT_006a0000 - 0x2a80),0x31aa);

  }

  FUN_00521408(lVar3,0,0x990);

  *(int *)iVar1 = iVar1;

  FUN_0036f4d0();

  FUN_0036f490(0);

  uVar2 = FUN_00194b20(param_1,(const char *)(DAT_006a0000 - 0x1f60),0xf,FUN_0036ee30,FUN_0036f260,lVar3);

  *(u32 *)(iVar1 + 0x92c) = uVar2;

  *(u32 *)(iVar1 + 0x934) = param_2;

  return;

}


// FUN_0036f480


bool FUN_0036f480(void)



{

  return DAT_007ce5f0 != 0;

}


// FUN_0036F490


void FUN_0036f490(int param_1)
{
  if (param_1 == 1) {
    DAT_007ce5f0 = 1;
  }
  else {
    DAT_007ce5f0 = 0;
  }
}



// FUN_0036f4c0


u32 FUN_0036f4c0(void)



{

  return DAT_007ce5f4;

}


// FUN_0036F4D0


void FUN_0036f4d0(void)



{

  FUN_00521408(&DAT_007ce5f0,0,8);

  return;

}

