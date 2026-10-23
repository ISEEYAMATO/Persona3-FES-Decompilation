#include "Battle/btlFormation.h"
#include "Battle/btlAction.h"
#include "Battle/btlFade.h"
#include "Battle/btlUnit.h"
#include "Battle/battle.h"
#include "Battle/btlVoice.h"
#include "Battle/btlBoss.h"

#pragma alias func_002c1ce0_u32 func_002c1ce0
extern u32 func_002c1ce0_u32(int param_1, int param_2);
#pragma alias func_002bf690_u16 func_002bf690
#pragma alias func_002c3430_u32 func_002c3430


extern u32 btlFormation002b8c00(void* work);
extern u32 btlFormation002b8dc0(void* work);









/* Retail formation reference recovery, retained NONMATCHING until codegen cleanup. */
typedef u8 undefined1;
typedef u8 bool;
typedef u16 undefined2;
typedef u32 undefined4;
typedef u64 undefined8;
typedef void undefined;
typedef int (*code)(...);
typedef struct BtlFormationState {
  u8 padding[0x630];
  u16 flags;
  u16 counter;
  u32 value;
} BtlFormationState;
typedef struct FormationMenuState {
  s16 x;
  s16 y;
  s16 firstEntry;
  s16 selectedEntry;
  s16 unk8;
  s16 visibleEntries;
  s16 entryCount;
} FormationMenuState;
typedef struct BtlFormationWork {
  u32 state;
  u32 list;
  u32 argument5;
  u8 padding0c[4];
  s32 sentinel;
  u8 random;
  u8 padding15[3];
  u32 argument3;
  u32 argument4;
  u8 padding20[0x34];
  u16 count;
  u16 padding56;
  u32 items;
} BtlFormationWork;


#ifndef CONCAT44
#define CONCAT44(hi, lo) ((((u64)(hi)) << 32) | (u32)(lo))
#endif
extern u64 func_00100d80();
#pragma alias func_00100d80_u32 func_00100d80
extern u32 func_00100d80_u32(u32 param_1,u32 param_2);
extern u64 func_00100ec0();
extern u64 func_001016b0();
#pragma alias func_001016b0_u32 func_001016b0
extern u32 func_001016b0_u32(u32 param_1);
extern u64 func_00102100();
extern u64 func_001021c0();
#pragma alias func_001021c0_u32 func_001021c0
extern u32 func_001021c0_u32(u32 param_1,u8* output);
extern u64 func_001023a0();
extern u64 func_00108570();
extern u64 func_00108670();
extern u64 func_00108680();
extern u64 func_001086a0();
extern u64 func_0016f1f0();
extern u64 func_00170670();
extern u64 func_001706c0();
extern const char* func_00171110(s16 id, s16 field);
extern u64 func_00173220();
extern u8* func_001778b0(s16 param_1);
extern u64 func_0017b220();
extern u64 func_0017b260();
extern u64 func_00194b20();
extern u64 func_00195020();
extern u64 func_00195340();
extern char D_00696f50[];
extern char D_006964D0[];
extern char D_006964E8[];
extern u64 func_00195460();
extern u64 func_00195540();
#pragma alias func_00195340_u32 func_00195340
#pragma alias func_00195540_u32 func_00195540
extern u32 func_00195340_u32();
extern u32 func_00195540_u32();
extern u64 func_00195550();
extern u32 func_00198590();
extern u64 func_0019d3f0();
extern u64 func_001fdd60();
extern u64 func_001fdda0();
extern u64 func_001fddf0();
extern u64 func_001fdec0();
extern u64 func_001fdf10();
typedef struct FormationUpdateResult {
  u32 flags;
  s32 state;
  u16 value0;
  u16 value1;
  u16 value2;
  u16 value3;
  u32 value4;
} FormationUpdateResult;
#pragma alias func_001fdf10_btlFormation_result func_001fdf10
extern void func_001fdf10_btlFormation_result(FormationUpdateResult *result);
extern u64 func_001fe3b0();
extern u64 func_001fe430();
extern u64 func_001fe5f0();
extern u64 func_001fe630();
extern u64 func_001fe650();
extern u64 func_001fe9b0();
extern u64 func_001fea10();
extern u64 func_001fea90();
extern u64 func_001feab0();
extern u64 func_001feb30();
extern u64 func_001feb50();
extern u64 func_001fece0();
extern u64 func_001fed00();
extern u64 func_001fed20();
extern u64 func_001fed40();
extern u64 func_001fed60();
extern u64 func_001fed80();
extern u64 func_001feda0();
extern u64 func_001fedc0();
extern u64 func_001fede0();
extern u64 func_001fee00();
extern u64 func_001fee40();
extern u64 func_001fee80();
extern u64 func_001fef10();
extern u64 func_001ff350();
extern u64 func_001ff370();
extern u64 func_001ff390();
extern u64 func_001ff3b0();
extern u32 func_0021c3f0(s32 param_1);
#pragma alias func_0021c3f0_u32 func_0021c3f0
extern u32 func_0021c3f0_u32(u32 param_1);
#pragma alias func_0021cca0_u32 func_0021cca0
extern u32 func_0021cca0_u32(u32 param_1,u32 param_2);
extern void* func_0021cca0(void* texture, s32 index);
extern u64 func_0021cce0();
extern BtlPacket* func_0027e310(u64 uid, u64 mask);
extern u32 func_0027ec10();
extern u64 func_0027ed20();
extern u64 func_0027f650();
extern u64 func_0027f7c0();
extern u64 func_0027ffb0();
extern u64 func_00280870();
#pragma alias func_00280870_btlFormation_s32 func_00280870
extern s32 func_00280870_btlFormation_s32(u32 mode, u32 enabled,
                                          void *out, void *end, void *extra,
                                          u32 include);
#pragma alias func_00280870_btlFormation_f32 func_00280870
extern f32 func_00280870_btlFormation_f32(u32 mode, u32 enabled,
                                          void *out, void *end, void *extra,
                                          u32 include);
#pragma alias func_002b96f0_btlFormation_u64 func_002b96f0
extern void func_002b96f0_btlFormation_u64(float param_1,float param_2,
                                           float *param_3,u32 *param_4,
                                           int param_5,u64 param_6);
extern u64 func_00288f80();
extern u64 func_00289030();
extern u64 func_0028a780();
extern u64 func_0029a1d0();
extern u64 func_0029a210();
#pragma alias func_0029a210_u32 func_0029a210
extern u32 func_0029a210_u32(u32 param_1);
extern u64 func_0029ad20();
#pragma alias func_0029ad20_u32 func_0029ad20
extern u32 func_0029ad20_u32(void);
extern u64 func_0029ad60();
extern u64 func_002a3b40();
extern u64 func_002a3d70();
extern u64 func_002b71e0();
extern u64 func_002b8d60();
extern u64 func_002d15a0();
extern u64 func_002d1a10();
extern u64 func_002d1a70();
extern u64 func_002d1de0();
extern u64 func_002d1fd0();
#pragma alias func_002d1fd0_c0070 func_002d1fd0
extern f32 func_002d1fd0_c0070();
extern u32 func_002d4cf0();
extern u32 func_002d4e10();
extern u64 func_002d5550();
extern u64 func_002db650();
extern u64 func_002db800();
extern u64 func_002db890();
extern u64 func_002e3350();
extern u64 func_002eab70();
extern u64 func_002eabb0();
extern void func_002ec560(u32 param_1);
extern u64 func_002ec590();
extern u32 func_002ecb30(BtlAction* action, s16 selection);
extern void func_002efc90(u32 param_1);
extern void func_002efcd0(u32 param_1);
extern u64 func_002efd10();
extern void func_002f2450(u32 param_1);
extern void func_002f2490(u32 param_1);
extern u64 func_002f24d0();
extern int func_002f2510(int param_1);
extern void func_002f5030(int param_1);
extern u64 func_002f5320();
extern void func_002f6bf0(u32 param_1);
extern u64 func_002f6c20();
extern u64 func_002fd820();
extern u64 func_002ffbc0();
#pragma alias func_002ffbc0_u16 func_002ffbc0
#pragma alias func_002ffbc0_u32 func_002ffbc0
extern u32 func_002ffbc0_u32(u32 max);
extern u16 func_002ffbc0_u16(u32 max);
#pragma alias func_002ffbc0_noarg func_002ffbc0
extern u16 func_002ffbc0_noarg(void);
#pragma alias func_002ffbc0_noarg_u32 func_002ffbc0
extern u32 func_002ffbc0_noarg_u32(void);
extern u64 func_002ffcc0();
extern u16 func_002ffd70(u32 unit);
extern u16 func_002ffd80(u32 unit);
extern u16 func_002ffdf0(u32 unit);
extern u16 func_00300100(u32 unit);
extern u64 func_00300530();
#pragma alias func_00300530_u32 func_00300530
extern u32 func_00300530_u32(u32 unit);
extern u64 func_00300550();
#pragma alias func_00300550_u32 func_00300550
extern u32 func_00300550_u32(u32 param_1);
extern u64 func_00300580();
#pragma alias func_00300580_u32 func_00300580
extern u32 func_00300580_u32(u32 param_1,u32 param_2);
extern u64 func_003005e0();
#pragma alias func_003005e0_u32 func_003005e0
extern u32 func_003005e0_u32(u32 param_1,u32 param_2);
extern u64 func_00301540();
extern u64 func_00301750();
extern u64 func_00301870();
extern u64 func_00301ca0();
extern u64 func_00303130();
#pragma alias func_00303130_s32 func_00303130
extern s32 func_00303130_s32(s32,s32,s32,s32,s32,s32,s32,s32);
extern u32 func_00306e80();
extern u64 func_003080c0();
extern u64 func_003082f0();
extern u64 func_003086f0();
#pragma alias func_003086f0_u32 func_003086f0
extern u32 func_003086f0_u32(u32 param_1,u32 param_2);
extern u64 func_00308860();
extern u64 func_00308930();
extern u64 func_00308a80();
extern u64 func_00308ba0();
extern u64 func_00308bb0();
#pragma alias func_00308ba0_u32 func_00308ba0
#pragma alias func_00308bb0_u32 func_00308bb0
#pragma alias func_00308860_u32 func_00308860
extern u32 func_00308ba0_u32(u32 param_1);
extern u32 func_00308bb0_u32(u32 param_1);
extern u32 func_00308860_u32(void);
#pragma alias func_0035f160_u32 func_0035f160
#pragma alias func_0029ad60_u32 func_0029ad60
#pragma alias func_0035f060_u32 func_0035f060
extern u32 func_0035f160_u32(void);
extern u32 func_0029ad60_u32(u16 param_1);
extern void func_0035f060_u32(u32 param_1);
#pragma alias func_0035ed20_u32 func_0035ed20
extern u32 func_0035ed20_u32(u32 param_1);
#pragma alias func_002a3d70_f32 func_002a3d70
extern u64 func_002a3d70_f32(float param_1,u32 param_2,void *param_3,void *param_4,void *param_5,void *param_6);
#pragma alias func_002a3d70_move func_002a3d70
extern u32 func_002a3d70_move(u32 action,RwV3d *startPos,RwV3d *startTarget,RwV3d *endPos,RwV3d *endTarget,float duration);
#pragma alias func_002b8d60_u32 func_002b8d60
extern u32 func_002b8d60_u32(s32 param_1,u32 param_2);
#pragma alias func_0035ee60_f32 func_0035ee60
extern float func_0035ee60_f32(u32 param_1);
extern u64 func_0030b4b0();
#pragma alias func_0030b4b0_u32 func_0030b4b0
extern u32 func_0030b4b0_u32(u32 param_1,u32 param_2);
#pragma alias func_0030b5a0_u32 func_0030b5a0
extern u32 func_0030b5a0_u32(u32,u32);
extern u64 func_0030b5a0();
extern u64 func_0030bc20();
#pragma alias func_0030bc20_u32 func_0030bc20
extern u32 func_0030bc20_u32(u16 param_1);
extern u64 func_003174e0();
extern void func_003176c0(Model* mdl);
extern void func_00317730(u32 param_1);
extern void FUN_00317a20(Model* param_1);
extern u64 func_00318ad0();
extern u32 func_00318b90(u32 param_1);
extern u32 func_00318d10(u8* param_1, u32 param_2, u32* param_3);
extern bool func_00318ed0(u8* param_1, u32 param_2, RwV3d* param_3);
extern u64 func_00321120();
extern u64 func_00321130();
extern u64 func_00321320();
extern u64 func_00324bd0();
#pragma alias func_00324bd0_u32 func_00324bd0
extern u32 func_00324bd0_u32(u32 param_1);
extern void func_003252a0(u32 param_1);
extern u64 func_00325500();
extern u64 func_003257e0();
extern u64 func_00325920();
#pragma alias func_00325920_u32 func_00325920
extern u32 func_00325920_u32(u32 param_1);
extern u64 func_00325c10();
extern u64 func_00325d60();
extern void func_00325e40(float param_1, int param_2);
extern u64 func_00326030();
extern void func_003297a0(float *position);
extern u64 func_00329ed0();
extern u64 func_00351bb0();
extern u64 func_00352c30();
extern u64 func_00352c50();
extern void func_00357ea0(f32 angleX, f32 angleY, f32 angleZ);
extern u64 func_0035ae10();
extern u64 func_0035bb40();
extern u64 func_0035c090();
extern void func_0035c1a0(KwlnTask* task, s32 value);
extern u64 func_0035ed20();
extern u64 func_0035ee60();
extern u64 func_0035f060();
extern u64 func_0035f160();
extern u64 func_003a4220();
extern u64 func_003b2cb0();
#pragma alias func_003b2cb0_typed func_003b2cb0
extern void func_003b2cb0_typed(f32 scale, s32 x, s32 y, u32 color, u32 font,
                                u32 align, const void *text, u32 width, u32 flags);
extern u64 func_0045a430();
extern u64 func_0045af40();
extern u64 func_0045af70();
extern void func_004bdde0(float angle, void *frame, const void *vector, u32 mode);
extern void func_004be1e0(void *out, const void *in, s32 count, const void *matrix);
extern u64 func_004c69f0();
extern u64 func_004c6b20();
extern u64 func_0051e0e0();
extern u64 func_00521250();
extern u64 func_00521408();
extern u64 func_00523ac8();
extern u32 func_00524270();
extern u32 func_00524388();
extern u32 func_0052ea18(float param_1, float param_2);
extern u8 DAT_00696440;
extern u8 DAT_00696460;
extern u8 DAT_00696d70;
#pragma alias DAT_00696d70_abs DAT_00696d70
extern u8 DAT_00696d70_abs[];
extern u8 DAT_00696e10;
extern u32 DAT_00696e30;
extern u32 DAT_00696e34;
extern u8 DAT_00696fb0;
#pragma alias DAT_00696fb0_abs DAT_00696fb0
extern u8 DAT_00696fb0_abs[];
extern u32 DAT_006971b0;
extern code gFormationDispatchTable[];
extern code gFormationActionTable[];
extern u8 DAT_007cc740;
extern u8 DAT_007cc970;
extern u8 DAT_007cc971;
extern u8 DAT_007cc972;
extern u8 DAT_007cc973;
extern u8* DAT_007ce3ec;
extern u8* DAT_007ce3f8;
extern u8* DAT_007ce41c;
extern u8* DAT_007ce4cc;
extern u8* DAT_007ce4d0;
extern u8* DAT_007ce4e8;
extern u8* DAT_007ce4ec;
extern u32 DAT_007e094e;
extern u32 DAT_007e0952;
extern u32 DAT_007e0958;
extern u32 DAT_007e095a;
#pragma alias DAT_007e094e_abs DAT_007e094e
#pragma alias DAT_007e0952_abs DAT_007e0952
#pragma alias DAT_007e0958_abs DAT_007e0958
#pragma alias DAT_007e095a_abs DAT_007e095a
extern u8 DAT_007e094e_abs[];
extern u8 DAT_007e0952_abs[];
extern u8 DAT_007e0958_abs[];
extern u8 DAT_007e095a_abs[];
extern u32 DAT_00957100;
extern u32 DAT_00957140;
extern u32 DAT_00957144;
extern u32 DAT_00957148;
#pragma alias DAT_00957100_abs DAT_00957100
#pragma alias DAT_00957140_abs DAT_00957140
#pragma alias DAT_00957150_abs DAT_00957150
#pragma alias DAT_00957160_abs DAT_00957160
#pragma alias DAT_00957170_abs DAT_00957170
extern u8 DAT_00957100_abs[];
extern u8 DAT_00957140_abs[];
extern u8 DAT_00957150_abs[];
extern u8 DAT_00957160_abs[];
extern u8 DAT_00957170_abs[];
extern u32 DAT_00957150;
extern u32 DAT_00957154;
extern u32 DAT_00957158;
extern u32 DAT_00957160;
extern u32 DAT_00957164;
extern u32 DAT_00957168;
extern u32 DAT_00957170;
extern u32 DAT_00957174;
extern u32 DAT_00957178;
extern float DAT_00960088;
#pragma alias DAT_00960088_abs DAT_00960088
extern float DAT_00960088_abs[];
extern u64 (*DAT_00960090)();
#pragma alias DAT_00960090_abs DAT_00960090
extern u64 (*DAT_00960090_abs)();
#pragma alias DAT_009600a4_abs DAT_009600a4
extern u64 (*DAT_009600a4_abs)();
extern u64 (*DAT_00960178)();
#pragma alias DAT_00960178_u32_abs DAT_00960178
extern u32 (*DAT_00960178_u32_abs[])(...);
#pragma alias DAT_00960178_abs DAT_00960178
extern code DAT_00960178_abs[];
extern void (*DAT_0096017c[])(...);
#pragma alias DAT_0096017c_abs DAT_0096017c
extern code DAT_0096017c_abs[];
extern u32* PTR_DAT_00696f30;
#pragma alias PTR_DAT_00696f30_abs PTR_DAT_00696f30
extern u32* PTR_DAT_00696f30_abs[];
extern code pcRam006971bc;
extern code pcRam006971c8;
extern code pcRam006971d4;
extern code pcRam006971e0;
extern code pcRam006971ec;
extern code pcRam006971f8;
extern code pcRam00697204;
extern code pcRam00697210;
extern code pcRam00697228;
extern code pcRam00697234;
extern code pcRam00697240;
extern code pcRam0069724c;
extern code pcRam00697258;
extern code pcRam00697264;
extern code pcRam00697270;
extern code pcRam0069727c;
extern code pcRam00697288;
extern code pcRam006972b8;
extern code pcRam006972c4;
extern code pcRam006972d0;
extern code pcRam006972dc;
extern code pcRam006972e8;
extern code pcRam006972f4;
extern code pcRam00697300;
extern code pcRam0069730c;
extern code pcRam00697318;
extern code pcRam00697324;
extern code pcRam00697330;
extern code pcRam0069733c;
extern code pcRam00697348;
extern code pcRam00697354;
extern code pcRam00697360;
extern code pcRam0069736c;
extern code pcRam00697378;
extern code pcRam00697384;
extern code pcRam006973b4;
extern code pcRam006973c0;
extern code pcRam006973e4;
extern code pcRam006973f0;
extern code pcRam006973fc;
extern code pcRam00697408;
extern code pcRam00697414;
extern code pcRam00697420;
extern code pcRam0069742c;
extern code pcRam00697438;
extern code pcRam00697450;
extern code pcRam0069745c;
extern code pcRam00697468;
extern code pcRam00697474;
extern code pcRam00697480;
extern code pcRam0069748c;
extern code pcRam00697498;
extern code pcRam006974a4;
extern code pcRam006974b0;
extern code pcRam006974bc;
extern code pcRam006974c8;
extern code pcRam006974f8;
extern code pcRam00697504;
extern void LAB_002bd060(u32 **param_1);
extern void LAB_002bd210(u32 **param_1);
extern char* PTR_s_N_00646555_0x12_00696dcc[];
extern char* PTR_s_battle_effect_ATC_D_BED_00696c80;
#pragma alias PTR_s_battle_effect_ATC_D_BED_abs PTR_s_battle_effect_ATC_D_BED_00696c80
extern char *PTR_s_battle_effect_ATC_D_BED_abs[];
extern char* PTR_s_battle_effect_SHADOW_S_BED_007cc6f0;
extern u32 _DAT_007ce4f4;
extern u8 gp0xffff99f8;
extern code PTR_FUN_00696490[];
extern code PTR_FUN_0069721c[];
extern u32 PTR_FUN_00697294[];
extern code PTR_FUN_006972a0[];
extern code PTR_FUN_006972ac[];
extern code PTR_FUN_00697390[];
extern code PTR_FUN_0069739c[];
extern code PTR_FUN_006973a8[];
extern code PTR_FUN_006973cc[];
extern code PTR_FUN_006973d8[];
extern code PTR_FUN_006974d4[];
extern code PTR_FUN_006974e0[];
extern code PTR_FUN_006974ec[];
extern code PTR_FUN_006975e0[];
#pragma alias PTR_FUN_006975e0_abs PTR_FUN_006975e0
extern code PTR_FUN_006975e0_abs[];
extern code PTR_FUN_006975e8[];
extern code PTR_FUN_006975f0[];
extern code PTR_FUN_006975f8[];
extern code PTR_FUN_00697600[];
extern code PTR_FUN_00697608[];
extern code PTR_FUN_00697610[];
extern code PTR_FUN_00697618[];
extern code PTR_FUN_00697620[];
extern code PTR_FUN_00697628[];
extern code PTR_FUN_00697630[];
extern code PTR_FUN_00697638[];
extern code PTR_FUN_00697640[];
extern code PTR_FUN_00697648[];
extern code PTR_FUN_00697650[];
extern code PTR_FUN_00697658[];
extern code PTR_FUN_00697660[];
extern code PTR_FUN_00697670[];
extern code PTR_FUN_00697678[];
extern code PTR_FUN_00697680[];
extern code PTR_FUN_00697688[];
extern code PTR_FUN_00697690[];
extern code PTR_FUN_00697698[];
extern code PTR_FUN_006976a0[];
extern code PTR_FUN_006976a8[];
extern code PTR_FUN_006976b0[];
extern code PTR_FUN_006976b8[];
extern code PTR_FUN_006976c0[];
extern code PTR_FUN_006976e8[];
extern code PTR_FUN_006976f0[];
extern code PTR_FUN_006976f8[];
extern code PTR_FUN_00697700[];
extern float fGpffff8398;
extern float fGpffff839c;
extern u8* iGpffffb6fc;
extern u8* iGpffffb708;
extern u8* iGpffffb7b8;


/* Target forward declarations. */
extern u32 func_002b8dc0(u16 *param_1);
extern u32 func_002b8f90(u16 param_1);
extern void func_002b9030(u32 param_1);
extern void func_002b90d0(int param_1,u32 param_2);
extern void func_002b9220(int param_1);
extern void func_002b9300(int param_1);
extern bool func_002b9350(int param_1);
#pragma alias func_002b9350_u32 func_002b9350
extern u32 func_002b9350_u32(int param_1);
extern u32 func_002b9370(int param_1,u16 param_2);
extern u32 func_002b93c0(int param_1,u16 param_2);
extern u32 func_002b93e0(u32 param_1,u16 param_2,u32 param_3,u32 param_4,u32 param_5);
#pragma alias func_002b93e0_4arg func_002b93e0
extern u32 func_002b93e0_4arg(u32 param_1,u16 param_2,u32 param_3,u32 param_4);
extern void func_002b94f0(BtlFormationWork *param_1);
extern void func_002b96f0(float param_1,float param_2,float *param_3,u32 *param_4,int param_5,
                          u32 param_6);
extern void func_002b9600(u32 *param_1);
extern u32 func_002b9640(int param_1);
extern void func_002b96e0(int param_1,u32 param_2);
extern void func_002b99d0(u8 *param_1,int param_2,u16 *param_3,u32 *param_4);
extern void func_002b9b00(u8 *param_1,int param_2,int param_3,float *param_4);
extern void func_002b9c00(int param_1,int param_2,int param_3,float *param_4);
extern void func_002b9d40(int param_1,int param_2,int param_3,float *param_4);
extern void func_002b9e80(u64 param_1,u64 param_2,u32 param_3,u32 param_4);
extern void func_002b9f30(u64 param_1,int param_2,u32 param_3,u32 param_4);
extern void func_002ba000(u64 param_1,int param_2,u32 param_3,u32 param_4);
extern void func_002ba0f0(int param_1,int param_2,u8 *param_3,u8 (*param_4) [16]);
extern void func_002ba3a0(int param_1);
#pragma alias func_002ba3a0_void func_002ba3a0
extern void func_002ba3a0_void(void);
extern void func_002ba900(int param_1);
extern void func_002baa20(int *param_1);
extern u32 func_002baad0(int *param_1);
extern u32 func_002bac00(u32 param_1,u32 param_2,u16 param_3);
extern void func_002bacb0(u32 *param_1);
extern u32 func_002bad60(u32 *param_1);
extern bool func_002baec0(u32 *param_1);
extern void func_002baf30(u32 *param_1);
extern void func_002baf90(u32 param_1,u32 param_2,u32 param_3,u16 param_4, u32 param_5);
extern void func_002bb050(u32 *param_1);
extern u32 func_002bb0b0(u32 *param_1);
extern void func_002bb290(u32 *param_1);
extern void func_002bb2f0(u32 param_1,u32 param_2,u32 param_3,u64 param_4, u16 param_5);
extern void func_002bb3a0(void);
extern void func_002bb580(u16 *param_1);
extern void func_002bb610(u32 param_1);
extern void func_002bb6f0(u16 param_1,u64 param_2);
extern void func_002bb760(void);
extern void func_002bb770(void);
extern void *func_002bb7d0(void);
extern void func_002bb8f0(u32 param_1);
extern u16 * func_002bb9c0(int param_1);
extern u32 func_002bbac0(int param_1,u16 *param_2);
extern void func_002bbbc0(int param_1);
extern void* func_002bbc00(void* owner);
extern void func_002bbd00(u32 param_1);
extern void func_002bbdc0(u8 *param_1,short param_2);
extern short func_002bbdf0(int param_1);
extern void func_002bbe00(u8 *param_1);
extern void func_002bbf80(int param_1,u32 param_2);
extern u32 func_002bbfa0(int param_1);
extern void func_002bc0e0(int param_1,u8 *param_2);
extern void func_002bc2f0(void);
extern void func_002bc420(void);
extern u32 func_002bc480(void);
extern void func_002bc680(void);
extern void func_002bc6d0(void);
extern u32 func_002bc7b0(u16 *param_1);
extern void func_002bc7e0(u16 param_1);
extern u32 func_002bc830(u8 *param_1);
extern void func_002bc890(u8 *param_1,u16 param_2);
extern u32 func_002bc910(u32 *param_1);
extern void func_002bc950(u32 param_1,u32 param_2,u32 param_3);
extern void func_002bc9c0(float param_1,float param_2,float param_3,float param_4,float param_5, float param_6,u32 param_7,int param_8);
#pragma alias func_002bc9c0_long func_002bc9c0
extern void func_002bc9c0_long(float param_1,float param_2,float param_3,float param_4,float param_5, float param_6,u32 param_7,long param_8);
extern void func_002bccd0(u32 param_1, u32 param_2);
extern void func_002bcde0(u64 param_1,u32 *param_2);
extern void func_002bce10(float param_1,float param_2,u8* param_3,int param_4,float *param_5);
#pragma alias func_002bce10_reordered func_002bce10
extern void func_002bce10_reordered(int param_3,float param_1,float param_2,
                                    int param_4,float *param_5);
extern u32 func_002bd080(int *param_1);
extern void func_002bd230(u32 param_1,u8 param_2,u16 param_3);
extern u32 func_002bd2e0(int *param_1);
extern void func_002bd480(u32 param_1);
extern u32 func_002bd4f0(int param_1);
extern void func_002bd590(u32 param_1,u16 param_2);
extern u32 func_002bd5f0(int param_1);
extern void func_002bd690(u32 param_1,u16 param_2);
extern u32 func_002bd6f0(int param_1);
extern void func_002bd780(u32 param_1,u16 param_2);
extern bool func_002bd7e0(u32 *param_1);
extern void func_002bd850(u32 param_1,u32 param_2);
extern u32 func_002bd8e0(int *param_1);
extern int func_002bdbd0(u32 param_1,u32 param_2,u32 param_3,u16 param_4, u16 param_5,u16 param_6,u16 param_7,u64 param_8);
extern u32 func_002bdcd0(u16 *param_1);
extern void func_002bddd0(void);
extern u16 func_002bde10(int param_1,u16 *param_2);
static u32 func_002bdfb0(int param_1);
extern u32 func_002be2f0(int param_1);
extern void func_002be390(short *param_1,int param_2,int param_3);
extern u32 func_002be580(u64 param_1,int param_2);
extern u32 func_002BE5D0(u64 param_1,int param_2);
extern u32 func_002BE5F0(u64 param_1,int param_2);
extern void func_002BE610(int param_1);
extern u64 func_002be620(int param_1,int param_2);
extern void func_002be720(short *param_1,short param_2,short param_3,int param_4);
extern u64 func_002be9e0(int param_1,int param_2);
extern void func_002bea80(short *param_1,short param_2,short param_3);
extern u16 func_002becc0(void);
extern void func_002bed10(void);
extern void func_002bedd0(int param_1);
extern u64 func_002bef20(u64 param_1);
extern u32 func_002bf2b0(u32 param_1);
extern void func_002bf370(u64 param_1);
extern u32 func_002bf3f0(int param_1);
extern void func_002bf650(void);
extern void func_002bf690(short param_1);
extern void func_002bf850(void);
extern void func_002bf880(void);
extern void func_002bf8b0(void);
extern void func_002bf8e0(void);
extern void func_002bf910(void);
extern void func_002bf940(void);
extern void func_002bf970(void);
extern void func_002bf980(void);
extern void func_002bf990(void);
extern void func_002bf9a0(void);
extern void func_002bf9b0(void);
extern u32 func_002bfab0(void);
extern void func_002bfae0(void);
extern u32 func_002bfb20(void);
extern void func_002bfb50(void);
extern u32 func_002bfb90(int *param_1);
extern void func_002bfc00(void);
extern void func_002bfc50(void);
extern void func_002bfc70(void);
extern void func_002bfc90(void);
extern void func_002bfcb0(int param_1,void *param_2,u32 param_3,u32 param_4,int param_5);
#pragma alias func_002bfcb0_ptr func_002bfcb0
extern void func_002bfcb0_ptr(int param_1,void *param_2,u32 param_3,u32 param_4,long param_5);
#pragma alias func_002bfcb0_u64call func_002bfcb0
extern void func_002bfcb0_u64call(u64 param_1,u64 param_2,u32 param_3,u32 param_4,long param_5);
extern u8 func_002bff60(u64 param_1,long param_2,u32 param_3,long param_4);
// Typed alias for callers that consume the helper's full 16-bit result.
#pragma alias func_002bff60_u16 func_002bff60
extern u16 func_002bff60_u16(u32 param_1,u32 param_2,u16 param_3,u32 param_4);
extern void func_002c0070(int param_1,int param_2);
extern u32 func_002c0880(int param_1);
extern void func_002c08a0(int param_1,u64 *param_2);
extern void func_002c08b0(int param_1,int param_2);
extern long * func_002c08c0(int param_1);
extern u32 func_002c0970(int param_1);
extern u32 func_002c09f0(int param_1);
extern void func_002c0a50(u32 param_1,u16 param_2);
extern void func_002c0ac0(int param_1,int param_2);
extern int func_002c0e30(short param_1,u32 param_2,u32 param_3);
typedef u32 (*FormationPredicate)(int unit,u32 selector);
extern u16 func_002c0f40(int param_1,u32 param_2,u32 param_3,u32 param_4,
                         u32 param_5,FormationPredicate param_6,int *param_7);
#pragma alias func_002c0f40_call func_002c0f40
extern u32 func_002c0f40_call(u64 param_1,u64 param_2,u64 param_3,u64 param_4,
                              long param_5,code *param_6,long param_7);
extern u32 func_002c1080(int param_1,u32 param_2,u32 param_3,u32 param_4,u16 param_5, code *param_6);
extern bool func_002c12f0(int param_1,int param_2);
extern bool func_002c22d0(int param_1,int param_2);
extern bool func_002c28a0(int param_1,int param_2);
extern u32 func_002c1360(int param_1,int param_2);
extern bool func_002c13d0(int param_1,int param_2);
extern void func_002c1440(int param_1,u32 param_2);
extern void func_002c1490(int param_1,u32 param_2);
extern void func_002c14f0(int param_1,u32 param_2);
extern bool func_002c1550(int param_1,u32 param_2);
extern bool func_002c1590(int param_1,u32 param_2);
extern bool func_002c15e0(int param_1,u32 param_2);
extern bool func_002c1650(int param_1,u32 param_2);
extern bool func_002c16a0(int param_1,u32 param_2);
extern void func_002c1710(int param_1);
extern void func_002c1740(int param_1,u32 param_2);
extern void func_002c17b0(int param_1,u32 param_2);
extern bool func_002c1850(int param_1,u64 param_2);
extern u32 func_002c1960(int param_1,u32 param_2);
extern u32 func_002c1a30(int param_1,u32 param_2);
extern u32 func_002c1b10(int param_1,u32 param_2);
extern u32 func_002c1bf0(int param_1,u32 param_2);
extern bool func_002c1ce0(int param_1,int param_2);
extern u64 func_002c1d80(void);
extern bool func_002c1d90(int param_1);
extern bool func_002c1e10(int param_1,short param_2);
extern bool func_002c1e50(int param_1,short param_2);
extern bool func_002c1e90(int param_1,short param_2);
extern bool func_002c1ed0(int param_1,short param_2);
extern void func_002c1f10(int param_1,u32 param_2);
extern void func_002c1f60(int param_1,u32 param_2);
extern void func_002c1fc0(int param_1,u32 param_2);
extern void func_002c2010(int param_1,u32 param_2);
extern void func_002c2070(int param_1,u32 param_2);
extern void func_002c20c0(int param_1,u32 param_2);
extern void func_002c2120(int param_1,u32 param_2);
extern void func_002c2170(int param_1,u32 param_2);
extern bool func_002c21d0(int param_1,int param_2);
extern void func_002c2220(int param_1,u32 param_2);
extern void func_002c2270(int param_1,u32 param_2);
extern void func_002c2310(int param_1,u32 param_2);
extern void func_002c2360(int param_1,u32 param_2);
extern u32 func_002c23c0(int param_1);
extern void func_002c2420(int param_1,u32 param_2);
extern void func_002c2470(int param_1,u32 param_2);
extern u32 func_002c2510(int param_1);
extern bool func_002c25d0(int param_1);
extern void func_002c25e0(int param_1,u32 param_2);
extern void func_002c2630(int param_1,u32 param_2);
extern void func_002c2690(int param_1,u32 param_2);
extern void func_002c26e0(int param_1,u32 param_2);
extern void func_002c2740(int param_1,u32 param_2);
extern void func_002c2790(int param_1,u32 param_2);
extern void func_002c27f0(int param_1,u32 param_2);
extern void func_002c2840(int param_1,u32 param_2);
extern bool func_002c28c0(int param_1,int param_2);
extern bool func_002c29e0(int param_1,int param_2);
extern bool func_002c2b20(int param_1,u16 param_2);
extern void func_002c2be0(int param_1,u32 param_2);
extern void func_002c2c40(int param_1,u32 param_2);
extern void func_002c2ca0(int param_1,u32 param_2);
extern u32 func_002c2d00(int param_1,u32 param_2);
extern bool func_002c2ed0(int param_1,u16 param_2,int param_3);
extern void func_002c30f0(int param_1,u16 param_2);
extern void func_002c3120(int param_1,u16 param_2);
extern void func_002c3150(int param_1,u32 param_2);
extern void func_002c31b0(int param_1,u32 param_2);
extern void func_002c3210(int param_1,u32 param_2);
extern bool func_002c3270(int param_1);
extern u32 func_002c32c0(int param_1);
extern u32 func_002c32e0(int param_1);
extern u32 func_002c3300(int param_1,u32 param_2);
extern bool func_002c3400(int param_1);
extern u64 func_002c3430(u64 param_1,u64 param_2,u32 param_3,u16 param_4,int param_5,code *param_6);
extern u32 func_002c3770(u32 param_1,u32 param_2);
#pragma alias func_002c3770_u32 func_002c3770
extern u32 func_002c3770_u32(u32 param_1,u32 param_2);
extern u32 func_002c3be0(u32 param_1);
extern u32 func_002c3ce0(u32 param_1);
extern u64 func_002c3e10(void);
extern void func_002c3e20(u64 param_1,u64 param_2);
extern void func_002c3e60(u64 param_1,u64 param_2);
extern void func_002c3ea0(u64 param_1,u64 param_2);
extern u32 func_002c3ee0(int param_1);
extern u32 func_002c3f00(int param_1);
extern void func_002c4000(u64 param_1,u64 param_2);
extern void func_002c4040(u64 param_1,u64 param_2);
extern void func_002c4080(u64 param_1,u64 param_2);
extern void func_002c40c0(u64 param_1,u64 param_2);
extern void func_002c4100(u64 param_1,u64 param_2);
extern void func_002c4140(u64 param_1,u64 param_2);
extern void func_002c4180(u64 param_1,u64 param_2);
extern void func_002c41c0(u64 param_1,u64 param_2);
extern u32 func_002c4200(u32 param_1);
extern u32 func_002c42c0(u32 param_1,u32 param_2);
extern void func_002c43a0(u64 param_1);
extern void func_002c43e0(u64 param_1);
extern void func_002c4420(u64 param_1,u64 param_2);
extern void func_002c4460(u64 param_1,u64 param_2);
extern void func_002c44a0(u64 param_1,u64 param_2);
extern void func_002c44e0(u64 param_1,u64 param_2);
extern void func_002c4520(u64 param_1,u64 param_2);
extern void func_002c4560(u64 param_1,u64 param_2);
extern void func_002c45a0(u64 param_1,u64 param_2);
extern void func_002c45e0(u64 param_1,u64 param_2);
extern void func_002c4620(u64 param_1,u64 param_2);
extern void func_002c4660(u64 param_1,u64 param_2);
extern void func_002c46a0(u64 param_1,u64 param_2);
extern void func_002c46e0(u64 param_1,u64 param_2);
extern void func_002c4720(u64 param_1,u64 param_2);
extern u32 func_002c4760(u32 param_1);
extern void func_002c4820(u64 param_1,u64 param_2);
extern void func_002c4860(u64 param_1,u64 param_2);
extern u32 func_002c48a0(int param_1,int param_2,u16 *param_3,u16 param_4,u16 param_5);
extern u32 func_002c4a90(int param_1,int param_2,u16 *param_3,u32 param_4,short param_5);
extern u32 func_002c4c80(int param_1,int param_2,u16 *param_3,u32 param_4,int param_5);
extern u32 func_002c4e50(int param_1,int param_2,u16 *param_3,u32 param_4,int param_5);
extern s32 func_002c5030(int param_1,int param_2,s32 param_3,int param_4);
extern u32 func_002c5380(int param_1,int param_2,u16 *param_3,int param_4);
#pragma alias func_002c5380_noargs func_002c5380
extern u32 func_002c5380_noargs();
extern u32 func_002c59d0(int param_1,int param_2,int param_3,long param_4);
extern s32 func_002c5fc0(u32 param_1,u32 param_2,short param_3,int param_4);
extern s32 func_002c6300(u32 param_1,u32 param_2,short param_3,s32 param_4);
#pragma alias func_002c6300_s32 func_002c6300
extern long func_002c6300_s32(u32 context, u32 actor, s16 value, s32 mode);
extern u32 func_002c65d0(int param_1);
extern void func_002c6a00(int param_1,int param_2,u16 param_3);
extern u16 func_002c6ba0(int param_1);
extern undefined * func_002c6e30(int param_1,u32 param_2);
extern u32 func_002c6f50(u32 param_1,int param_2,u32 param_3,u32 param_4);
// The caller passes two 32-bit resource identifiers.
#pragma alias func_002c6f50_u32 func_002c6f50
extern u32 func_002c6f50_u32(u32 param_1,int param_2,u32 param_3,u32 param_4);
extern void func_002c70d0(int param_1,int param_2);
extern bool func_002c7250(int param_1);
extern u32 func_002c7280(int param_1);
extern u32 func_002c7300(void);
extern u32 func_002c7340(void);
extern u32 func_002c73e0(void);
extern u32 func_002c7460(void);
extern u32 func_002c74a0(void);
extern u32 func_002c74e0(void);
extern u32 func_002c7540(void);
extern u32 func_002c75d0(void);
extern u32 func_002c7670(void);
extern u32 func_002c76b0(void);
extern u32 func_002c7760(void);
extern u32 func_002c7810(void);
extern u32 func_002c78c0(void);
extern u32 func_002c7970(void);
extern u32 func_002c7a20(void);
extern u32 func_002c7ad0(void);
extern u32 func_002c7b80(void);
extern u32 func_002c7c30(void);
extern u32 func_002c7ce0(void);
extern u32 func_002c7d90(void);
extern u32 func_002c7e40(void);
extern u32 func_002c7ef0(void);
extern u32 func_002c7fa0(void);
extern u32 func_002c8050(void);
extern u32 func_002c8100(void);
extern u32 func_002c81b0(void);
extern u32 func_002c8260(void);
extern u32 func_002c8310(void);
extern u32 func_002c8360(void);
extern u32 func_002c83b0(void);
extern u32 func_002c8400(void);
extern u32 func_002c84b0(void);
extern u32 func_002c8560(void);
extern u32 func_002c8610(void);
extern u32 func_002c86c0(void);
extern u32 func_002c8770(void);
extern u32 func_002c8820(void);
extern u32 func_002c88d0(void);
extern u32 func_002c8980(void);
extern u32 func_002c8a30(void);
extern u32 func_002c8ae0(void);
extern u32 func_002c8b90(void);
extern u32 func_002c8c40(void);
extern u32 func_002c8cf0(void);
extern u32 func_002c8da0(void);
extern u32 func_002c8e50(void);
extern u32 func_002c8f00(void);
extern u32 func_002c8fb0(void);
extern u32 func_002c9060(void);
extern u32 func_002c90b0(void);
extern u32 func_002c9100(void);
extern u32 func_002c9150(void);
extern u32 func_002c9200(void);
extern u32 func_002c92b0(void);
extern u32 func_002c9300(void);
extern u32 func_002c9350(void);
extern u32 func_002c9400(void);
extern u32 func_002c94b0(void);
extern u32 func_002c9560(void);
extern u32 func_002c9610(void);
extern u32 func_002c96c0(void);
extern u32 func_002c9770(void);
extern u32 func_002c9820(void);
extern u32 func_002c98d0(void);
extern u32 func_002c99c0(void);
extern u32 func_002c9ab0(void);
extern u32 func_002c9ba0(void);
extern u32 func_002c9ce0(void);
extern u32 func_002c9da0(void);
extern u32 func_002c9e90(void);
extern u32 func_002c9f80(void);
extern u32 func_002ca070(void);
extern u32 func_002ca160(void);
extern u32 func_002ca250(void);
extern u32 func_002ca340(void);
extern u32 func_002ca3e0(void);
extern u32 func_002ca480(void);
extern u32 func_002ca590(void);
extern u32 func_002ca6a0(void);
extern u32 func_002ca7b0(void);
extern u32 func_002ca900(void);
extern u32 func_002ca9d0(void);
extern u32 func_002caae0(void);
extern u32 func_002cabf0(void);
extern u32 func_002cad00(void);
extern u32 func_002cae10(void);
extern u32 func_002caf20(void);
extern u32 func_002cb030(void);
extern u32 func_002cb0e0(void);
extern u32 func_002cb190(void);
extern u32 func_002cb270(void);
extern u32 func_002cb320(void);
extern u32 func_002cb3d0(void);
extern u32 func_002cb480(void);
extern u32 func_002cb530(void);
extern u32 func_002cb5e0(void);
extern u32 func_002cb690(void);
extern u32 func_002cb740(void);
extern u32 func_002cb7f0(void);
extern u32 func_002cb8a0(void);
extern u32 func_002cb950(void);
extern u32 func_002cba00(void);
extern u32 func_002cba50(void);
extern u32 func_002cbaa0(void);
extern u32 func_002cbaf0(void);
extern u32 func_002cbba0(void);
extern u32 func_002cbcd0(void);
extern u32 func_002cbd90(void);
extern u32 func_002cbe50(void);
extern u32 func_002cbf10(void);
extern u32 func_002cbfd0(void);
extern u32 func_002cc0a0(void);
extern u32 func_002cc190(void);
extern u32 func_002cc240(void);
extern u32 func_002cc330(void);
extern u32 func_002cc3e0(void);
extern u32 func_002cc450(void);
extern u32 func_002cc4c0(void);
extern u32 func_002cc530(void);
extern u32 func_002cc5a0(void);
extern u32 func_002cc650(void);
extern u32 func_002cc700(void);
extern u32 func_002cc7b0(void);
extern u32 func_002cc820(void);
extern u32 func_002cc890(void);
extern u32 func_002cc940(void);
extern u32 func_002cc9f0(void);
extern u32 func_002ccaa0(void);
extern u32 func_002ccb50(void);
extern u32 func_002ccc00(void);
extern u32 func_002cccb0(void);
extern u32 func_002ccd60(void);
extern u32 func_002cce10(void);
extern u32 func_002cce80(void);
extern u32 func_002ccef0(void);
extern u32 func_002ccf60(void);
extern u32 func_002cd010(void);
extern u32 func_002cd0c0(void);
extern u32 func_002cd170(void);
extern u32 func_002cd220(void);
extern u32 func_002cd2d0(void);
extern u32 func_002cd380(void);
extern u32 func_002cd430(void);
extern u32 func_002cd4e0(void);
extern u32 func_002cd570(void);
extern u32 func_002cd620(void);
extern u32 func_002cd690(void);
extern u32 func_002cd740(void);
extern u32 func_002cd7f0(void);
extern u32 func_002cd8c0(void);
extern u32 func_002cd940(void);
extern u32 func_002cd9c0(void);
extern u32 func_002cda10(void);
extern u32 func_002cda50(void);
extern u32 func_002cdad0(void);
extern u32 func_002cdb70(void);
extern u32 func_002cdbe0(void);
extern u32 func_002cdc50(void);
extern u32 func_002cdcc0(void);
extern u32 func_002cdd30(void);
extern u32 func_002cdda0(void);
extern u32 func_002cde10(void);
extern u32 func_002cde60(void);
extern u32 func_002cded0(void);
extern u32 func_002cdf40(void);
extern u32 func_002ce010(void);
extern u32 func_002ce090(void);
extern u32 func_002ce170(void);
extern u32 func_002ce210(void);
extern u32 func_002ce2b0(void);
extern u32 func_002ce380(void);
extern u32 func_002ce440(void);
extern u32 func_002ce4e0(void);
extern u32 func_002ce5c0(void);
extern u32 func_002ce6c0(void);
extern u32 func_002ce7a0(void);
extern u32 func_002ce880(void);
extern u32 func_002ce960(void);
extern u32 func_002cea40(void);
extern u32 func_002ceb20(void);
extern u32 func_002cec30(void);
extern u32 func_002ced60(void);
extern u32 func_002cef10(void);
extern u32 func_002cf070(void);
extern u32 func_002cf1d0(void);
extern u32 func_002cf340(void);
extern u32 func_002cf450(void);
extern u32 func_002cf580(void);
extern u32 func_002cf6b0(void);
extern u32 func_002cf7e0(void);
extern u32 func_002cf890(void);
extern u32 func_002cf940(void);
extern u32 func_002cf9f0(void);
extern u32 func_002cfa40(void);
extern u32 func_002cfb20(void);
extern u32 func_002cfc50(void);
extern u32 func_002cfd80(void);
extern u32 func_002cfeb0(void);
extern u32 func_002cffc0(void);
extern u32 func_002d0150(void);
extern u32 func_002d0270(void);
extern u32 func_002d03e0(void);
extern u32 func_002d05c0(void);
extern u32 func_002d06e0(void);
extern u32 func_002d0720(void);
extern u32 func_002d0760(void);
extern u32 func_002d0860(void);
extern u32 func_002d08e0(void);
extern u32 func_002d0970(void);
extern u32 func_002d09d0(void);
extern u32 func_002d0a30(void);
extern u32 func_002d0ac0(void);
extern u32 func_002d0af0(void);
extern u32 func_002d0b90(void);
extern u32 func_002d0bd0(void);
extern u32 func_002d0c10(void);
extern u32 func_002d0c50(void);
extern u32 func_002d0c80(void);
extern u32 func_002d0cb0(void);
extern u32 func_002d0d00(void);
extern u32 func_002d0d70(void);
extern u32 func_002d0de0(void);
extern u32 func_002d0ef0(void);
extern u32 func_002d0f90(void);
extern u32 func_002d1030(void);
extern u32 func_002d10f0(void);
extern u32 func_002d1180(void);
extern u32 func_002d11d0(void);
extern u32 func_002d1210(void);
extern u32 func_002d1260(void);
extern u32 func_002d12a0(void);
extern u32 func_002d12e0(void);
extern u32 func_002d13c0(void);
extern u32 func_002d1490(void);
extern u32 func_002d14d0(void);
extern u32 func_002d1510(void);


















extern void func_0027ffb0_v3d(int unit, RwV3d* out);
#pragma alias func_00318ed0_v3d func_00318ed0
extern s32 func_00318ed0_v3d(u32 model, u32 index, RwV3d* out);








/* W322 probe: func_002ba0f0 with opt_common_subs off improved normalized_diff 389 -> 372 (object 680/688). */




typedef struct FormationLoadWork {
  BtlFormationState* state;
  u32 request;
  u32 source;
  u16 flags;
  u16 padding;
} FormationLoadWork;












/* W357 measured func_002bb3a0: opt_propagation off nd224/480B -> nd222/480B; window 480B. */
#pragma opt_propagation off
static inline u32 btlEffectAndBaseFirst(u32 base, u32 mask)
{
  return base & mask;
}
// FUN_002bb3a0

void func_002bb3a0(void)

{
  u16 *puVar4;
  u16 uVar1;
  u32 uVar3;
  u32 uStack_4;
  u32 shiftAmount;
  
  for (puVar4 = *(u16 **)(iGpffffb6fc + 400); puVar4 != (u16 *)0x0;
      puVar4 = *(u16 **)(puVar4 + 0x10)) {
    uVar3 = *(u32 *)(puVar4 + 2);
    uVar1 = *puVar4;
    if ((uVar1 & 0x40) == 0) {
      if ((uVar1 & 0x100) != 0) {
        if ((u32)(u8)puVar4[4] * 0x1000000 < (uVar3 & 0xff000000)) {
          uVar3 = uVar3 - (u32)(u8)puVar4[4] * 0x1000000;
        }
        else {
          uVar3 = uVar3 & 0xffffff;
          *puVar4 = uVar1 & 0xfe7f;
        }
      }
      else if ((uVar1 & 0x80) != 0) {
        shiftAmount = (u32)(u8)puVar4[4] * 0x1000000;
        if (shiftAmount < -btlEffectAndBaseFirst(uVar3, 0xff000000) - 0x1000000) {
          uVar3 = uVar3 + shiftAmount;
        }
        else {
          uVar3 = uVar3 & 0xffffff | 0xff000000;
          *puVar4 = uVar1 & 0xfe7f;
        }
      }
      if ((*puVar4 & 0x220) == 0x220) {
        if (*(int *)(puVar4 + 0xc) != 0) {
          func_00317730(*(u32 *)(puVar4 + 0xc));
        }
        if (*(int *)(puVar4 + 10) != 0) {
          func_003252a0(*(u32 *)(puVar4 + 10));
        }
        if (*(int *)(puVar4 + 8) != 0) {
          func_002ba3a0(*(int *)(puVar4 + 8));
        }
      }
    }
    if (((*puVar4 & 0x210) == 0x210) && ((uVar3 & 0xff000000) != 0)) {
      if (*(int *)(puVar4 + 0xc) != 0) {
        uStack_4 = uVar3;
        func_00318ad0(*(u32 *)(puVar4 + 0xc),&uStack_4);
        FUN_00317a20((Model*)(uintptr_t)*(u32 *)(puVar4 + 0xc));
      }
      if (*(int *)(puVar4 + 10) != 0) {
        func_00326030(*(int *)(puVar4 + 10),uVar3);
        func_00325500(*(u32 *)(puVar4 + 10));
      }
      if (*(int *)(puVar4 + 8) != 0) {
        *(u32 *)(*(int *)(puVar4 + 8) + 0x10) = uVar3;
        func_002ba900(*(u32 *)(puVar4 + 8));
      }
    }
    *(u32 *)(puVar4 + 2) = uVar3;
    *(int *)(puVar4 + 6) = *(int *)(puVar4 + 6) + 1;
  }
  return;
}
#pragma opt_propagation on

// FUN_002bb580

void func_002bb580(u16 *param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    func_002b94f0((BtlFormationWork *)*(int *)(param_1 + 8));
    *(u32 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 10) != 0) {
    func_003257e0(*(int *)(param_1 + 10));
    *(u32 *)(param_1 + 10) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    func_003174e0(*(int *)(param_1 + 0xc));
    *(u32 *)(param_1 + 0xc) = 0;
  }
  *(u32 *)(param_1 + 2) = 0xffffffff;
  *(u8 *)(param_1 + 4) = 0x14;
  *(u32 *)(param_1 + 6) = 0;
  *param_1 = 0x200;
  return;
}

// FUN_002bb610

void func_002bb610(u32 param_1)

{
  u16 *puVar1;
  
  puVar1 = (u16 *)param_1;
  if (*(int *)(puVar1 + 8) != 0) {
    func_002b94f0((BtlFormationWork *)*(int *)(puVar1 + 8));
    *(u32 *)(puVar1 + 8) = 0;
  }
  if (*(int *)(puVar1 + 10) != 0) {
    func_003257e0(*(int *)(puVar1 + 10));
    *(u32 *)(puVar1 + 10) = 0;
  }
  if (*(int *)(puVar1 + 0xc) != 0) {
    func_003174e0(*(int *)(puVar1 + 0xc));
    *(u32 *)(puVar1 + 0xc) = 0;
  }
  *(u32 *)(puVar1 + 2) = 0xffffffff;
  *(u8 *)(puVar1 + 4) = 0x14;
  *(u32 *)(puVar1 + 6) = 0;
  *puVar1 = 0x200;
  if (*(int *)(puVar1 + 0x10) != 0) {
    *(u32 *)(*(int *)(puVar1 + 0x10) + 0x1c) = *(u32 *)(puVar1 + 0xe);
  }
  if (*(int *)(puVar1 + 0xe) != 0) {
    *(u32 *)(*(int *)(puVar1 + 0xe) + 0x20) = *(u32 *)(puVar1 + 0x10);
  }
  else {
    *(u32 *)(iGpffffb6fc + 400) = *(u32 *)(puVar1 + 0x10);
  }
  (*DAT_0096017c)(param_1);
  return;
}

// FUN_002bb6f0

void func_002bb6f0(u16 param_1,u64 param_2)

{
  if ((*(u32 *)(iGpffffb6fc + 0x14) & 1) != 0) {
    func_00523ac8(param_2,D_006964D0);
  }
  else {
    func_00523ac8(param_2,D_006964E8,&gp0xffff99f8,param_1);
  }
  return;
}

// FUN_002bb760

void func_002bb760(void)

{
  return;
}

// FUN_002bb770

void func_002bb770(void)

{
  int *piVar1 = 0;
  
  piVar1 = *(int **)(iGpffffb6fc + 400);
  while (piVar1 != 0) {
    int *piVar2 = *(int **)((int)piVar1 + 0x20);
    func_002bb610((u32)piVar1);
    piVar1 = piVar2;
  }
  func_002bc2f0();
  return;
}

// FUN_002bb7d0

void *func_002bb7d0(void)
{
  u32 rootAddress;
  u32 index;
  u32 nodeAddress;
  u16 *node;
  register u32 (* volatile /* Removing this qualifier loses func_002bb7d0 (MATCH nd0 -> MISMATCH nd181, size 280 -> 284) - measured W170. */ *allocate)(...);
  
  allocate = DAT_00960178_u32_abs;
  rootAddress = (*allocate)(0xc8,0x40000);
  func_00521408((void *)rootAddress,0,0xc8);
  for (index = 0; index < 0x30; index = index + 1) {
    nodeAddress = (*allocate)(0x24,0x40000);
    func_00521408((void *)nodeAddress,0,0x24);
    node = (u16 *)nodeAddress;
    *(s32 *)(node + 2) = -1;
    *(u8 *)(node + 4) = 0x14;
    *(u32 *)(node + 6) = 0;
    *node = 0x200;
    *(u32 *)(node + 0xe) = 0;
    if (*(int *)(iGpffffb6fc + 400) != 0) {
      *(u16 **)(*(int *)(iGpffffb6fc + 400) + 0x1c) = node;
      *(u32 *)(node + 0x10) = *(u32 *)(iGpffffb6fc + 400);
    }
    else {
      *(u32 *)(node + 0x10) = 0;
    }
    *(u16 **)(iGpffffb6fc + 400) = node;
    *(u16 **)(rootAddress + index * 4) = node;
  }
  return (void *)rootAddress;
}

// FUN_002bb8f0 MATCHING

void func_002bb8f0(u32 param_1)

{
  u32 index;
  int node;
  
  for (index = 0; index < 0x30; index = index + 1) {
    node = *(int *)(param_1 + index * 4);
    func_002bb580((u16 *)node);
    if (*(int *)(node + 0x20) != 0) {
      *(u32 *)(*(int *)(node + 0x20) + 0x1c) = *(u32 *)(node + 0x1c);
    }
    if (*(int *)(node + 0x1c) != 0) {
      *(u32 *)(*(int *)(node + 0x1c) + 0x20) = *(u32 *)(node + 0x20);
    }
    else {
      *(u32 *)(iGpffffb6fc + 400) = *(u32 *)(node + 0x20);
    }
    (*DAT_0096017c)(node);
  }
  (*DAT_0096017c)(param_1);
}

// FUN_002bb9c0

u16 *func_002bb9c0(int param_1)
{
  u16 *entry;
  u32 index;
  u32 mask;

  mask = 1;
  index = 0;
  while (index < 0x30) {
    if ((*(u32 *)(param_1 + 0xc0) & mask) == 0) {
      entry = *(u16 **)(param_1 + index * 4);
      if (*(int *)(entry + 8) != 0) {
        func_002b94f0((BtlFormationWork *)*(int *)(entry + 8));
        *(u32 *)(entry + 8) = 0;
      }
      if (*(int *)(entry + 10) != 0) {
        func_003257e0(*(int *)(entry + 10));
        *(u32 *)(entry + 10) = 0;
      }
      if (*(int *)(entry + 0xc) != 0) {
        func_003174e0(*(int *)(entry + 0xc));
        *(u32 *)(entry + 0xc) = 0;
      }
      *(u32 *)(entry + 2) = 0xffffffff;
      *(u8 *)(entry + 4) = 0x14;
      *(u32 *)(entry + 6) = 0;
      *entry = 0x200;
      *(u32 *)(param_1 + 0xc0) |= mask;
      return entry;
    }
    mask <<= 1;
    index++;
  }
  return NULL;
}

// FUN_002bbac0

u32 func_002bbac0(int param_1, u16 *entry)
{
  u32 index;
  u32 mask;

  mask = 1;
  index = 0;
  while (index < 0x30) {
    if (*(u16 **)(param_1 + index * 4) == entry) {
      if (*(int *)(entry + 8) != 0) {
        func_002b94f0((BtlFormationWork *)*(int *)(entry + 8));
        *(u32 *)(entry + 8) = 0;
      }
      if (*(int *)(entry + 10) != 0) {
        func_003257e0(*(int *)(entry + 10));
        *(u32 *)(entry + 10) = 0;
      }
      if (*(int *)(entry + 0xc) != 0) {
        func_003174e0(*(int *)(entry + 0xc));
        *(u32 *)(entry + 0xc) = 0;
      }
      *(u32 *)(entry + 2) = 0xffffffff;
      *(u8 *)(entry + 4) = 0x14;
      *(u32 *)(entry + 6) = 0;
      *entry = 0x200;
      *(u32 *)(param_1 + 0xc0) &= ~mask;
      return 1;
    }
    mask <<= 1;
    index++;
  }
  return 0;
}

// FUN_002bbbc0

void func_002bbbc0(int param_1)

{
  u16 *puVar1;
  u32 uVar2 = 0;
  
  for (uVar2 = 0; uVar2 < 0x30; uVar2 = uVar2 + 1) {
    puVar1 = *(u16 **)(param_1 + uVar2 * 4);
    *puVar1 = *puVar1 & 0xfdff;
  }
  return;
}

// FUN_002bbc00

void* func_002bbc00(void* owner)

{
  u8* root;
  u32 rootAddress;
  u32 nodeAddress;
  u16* node;
  register u32 (* volatile /* Removing this qualifier loses func_002bbc00 (MATCH nd0 -> MISMATCH nd167, size 244 -> 236) - measured W170. */ *allocate)(...);

  allocate = DAT_00960178_u32_abs;
  rootAddress = (*allocate)(0x18, 0x40000);
  root = (u8*)rootAddress;
  *(void**)(root + 4) = owner;
  *(s16*)(root + 0x10) = -1;
  *root = 0;
  *(s32*)(root + 0x14) = -1;
  *(u32*)(root + 0xc) = 0;

  nodeAddress = (*allocate)(0x24, 0x40000);
  func_00521408((void*)nodeAddress, 0, 0x24);
  node = (u16*)nodeAddress;
  *(s32*)(node + 2) = -1;
  *(u8*)(node + 4) = 0x14;
  *(u32*)(node + 6) = 0;
  *node = 0x200;
  *(u32*)(node + 0xe) = 0;
  if (*(int*)(iGpffffb6fc + 400) != 0) {
    *(u16**)(*(int*)(iGpffffb6fc + 400) + 0x1c) = node;
    *(u32*)(node + 0x10) = *(u32*)(iGpffffb6fc + 400);
  }
  else {
    *(u32*)(node + 0x10) = 0;
  }
  *(u16**)(iGpffffb6fc + 400) = node;
  *(u16**)(root + 8) = node;
  return root;
}

// FUN_002bbd00 MATCHING

void func_002bbd00(u32 param_1)

{
  int node;
  void (**release)(u32);
  
  node = *(int *)(param_1 + 8);
  func_002bb580((u16 *)node);
  if (*(int *)(node + 0x20) != 0) {
    *(u32 *)(*(int *)(node + 0x20) + 0x1c) = *(u32 *)(node + 0x1c);
  }
  if (*(int *)(node + 0x1c) != 0) {
    *(u32 *)(*(int *)(node + 0x1c) + 0x20) = *(u32 *)(node + 0x20);
  }
  else {
    *(u32 *)(iGpffffb6fc + 400) = *(u32 *)(node + 0x20);
  }
  release = (void (**)(u32))DAT_0096017c;
  (*release)(node);
  if (*(int *)(param_1 + 0xc) != 0) {
    func_002b9030(*(u32 *)(param_1 + 0xc));
    *(u32 *)(param_1 + 0xc) = 0;
  }
  (*release)(param_1);
}

// FUN_002bbdc0

void func_002bbdc0(u8 *param_1,short param_2)

{
  if (*(short *)(param_1 + 0x10) != param_2) {
    *param_1 = *param_1 | 1;
    *(short *)(param_1 + 0x10) = param_2;
  }
  return;
}

// FUN_002bbdf0

short func_002bbdf0(int param_1)

{
  return *(short *)(param_1 + 0x10);
}

// FUN_002bbe00

void func_002bbe00(u8 *param_1)

{
  u16 *puVar1;
  u32 uVar2 = 0;
  
  if ((*(u32 *)(iGpffffb6fc + 0xc) & 0x40000) != 0) {
    if ((*param_1 & 1) != 0) {
      puVar1 = *(u16 **)(param_1 + 8);
      if (*(int *)(puVar1 + 8) != 0) {
        func_002b94f0((BtlFormationWork *)*(int *)(puVar1 + 8));
        *(u32 *)(puVar1 + 8) = 0;
      }
      if (*(int *)(puVar1 + 10) != 0) {
        func_003257e0(*(int *)(puVar1 + 10));
        *(u32 *)(puVar1 + 10) = 0;
      }
      if (*(int *)(puVar1 + 0xc) != 0) {
        func_003174e0(*(int *)(puVar1 + 0xc));
        *(u32 *)(puVar1 + 0xc) = 0;
      }
      *(u32 *)(puVar1 + 2) = 0xffffffff;
      *(u8 *)(puVar1 + 4) = 0x14;
      *(u32 *)(puVar1 + 6) = 0;
      *puVar1 = 0x200;
      if (*(int *)(param_1 + 0xc) != 0) {
        func_002b9030(*(u32 *)(param_1 + 0xc));
        *(u32 *)(param_1 + 0xc) = 0;
      }
      if (*(short *)(param_1 + 0x10) != -1) {
        *(u32 *)(param_1 + 0xc) =
             ((u32 *)(iGpffffb6fc + 0xc24))[*(short *)(param_1 + 0x10)];
        func_002b9300(*(int *)(param_1 + 0xc));
        uVar2 = func_002b93e0(*(u32 *)(param_1 + 0xc),1,*(u32 *)(param_1 + 4),
                             *(u32 *)(param_1 + 4),0);
        *(u32 *)(*(int *)(param_1 + 8) + 0x10) = uVar2;
      }
      *param_1 = *param_1 & 0xfe;
    }
    if (*(short *)(param_1 + 0x10) != -1) {
      **(u16 **)(param_1 + 8) = **(u16 **)(param_1 + 8) | 0x30;
      *(u32 *)(*(int *)(param_1 + 8) + 4) = *(u32 *)(param_1 + 0x14);
    }
    else {
      **(u16 **)(param_1 + 8) = **(u16 **)(param_1 + 8) & 0xffcf;
    }
  }
  return;
}

// FUN_002bbf80

void func_002bbf80(int param_1,u32 param_2)

{
  *(u32 *)(param_1 + 0x14) = param_2 & 0xff000000 | 0xffffff;
  return;
}

// FUN_002bbfa0

u32 func_002bbfa0(int param_1)
{
  if (param_1 == 0) {
    return 0xffffffff;
  }

  switch (param_1) {
  case 1:
    return 0x27;
  case 2:
    return 0x28;
  case 4:
    return 0x29;
  case 8:
    return 0x2a;
  case 0x10:
    return 0x2b;
  case 0x20:
    return 0x24;
  case 0x40:
    return 0x25;
  case 0x80:
    return 0x26;
  case 0x100:
    return 0x2d;
  case 0x200:
    return 0x2c;
  case 0x400:
  case 0x80000:
  case 0x100000:
  default:
    return 0xffffffff;
  }
}

// FUN_002bc0e0 MATCHING

void func_002bc0e0(int param_1, u8 *param_2)
{
  param_2[3] = 0xff;

  switch (param_1) {
  case 1:
    param_2[0] = 0xff;
    param_2[1] = 0x94;
    param_2[2] = 0xbc;
    return;
  case 2:
    param_2[0] = 0xb2;
    param_2[1] = 0x9e;
    param_2[2] = 0xff;
    return;
  case 4:
    param_2[0] = 0xcd;
    param_2[1] = 0xb2;
    param_2[2] = 0xcd;
    return;
  case 8:
    param_2[0] = 0xa8;
    param_2[1] = 0xa8;
    param_2[2] = 0xff;
    return;
  case 0x10:
    param_2[0] = 0xff;
    param_2[1] = 0xb2;
    param_2[2] = 0x9e;
    return;
  case 0x20:
    param_2[0] = 0x8a;
    param_2[1] = 0xc6;
    param_2[2] = 0xff;
    return;
  case 0x40:
    param_2[0] = 0xf5;
    param_2[1] = 0xda;
    param_2[2] = 0x80;
    return;
  case 0x80:
    param_2[0] = 0xff;
    param_2[1] = 0x6c;
    param_2[2] = 0xe4;
    return;
  case 0x200:
    param_2[0] = 0xff;
    param_2[1] = 0x3a;
    param_2[2] = 0x44;
    return;
  case 0x100: {
    *(RwRGBA*)param_2 = *(const RwRGBA*)&DAT_007cc970;
    return;
  }
  case 0x400:
    param_2[0] = 0xff;
    param_2[1] = 0x40;
    param_2[2] = 0x12;
    return;
  case 0x100000:
  case 0x80000:
  default: {
    *(RwRGBA*)param_2 = *(const RwRGBA*)&DAT_007cc970;
    return;
  }
  }
}

#pragma push
#pragma opt_propagation off
// FUN_002bc2f0

void func_002bc2f0(void)

{
  int iVar1 = 0;
  u32 firstIndex = 0;
  u32 uVar2 = 0;
  int iVar3 = 0;
  u8 *state;
  
  if ((*(u32 *)(DAT_007ce3ec + 0x14) & 0x4000000) == 0) {
    for (firstIndex = 0; firstIndex < 0x3c; firstIndex = firstIndex + 1) {
      state = DAT_007ce3ec;
      if (*(int *)(state + firstIndex * 4 + 0xc24) != 0) {
        func_002b9030(*(u32 *)(state + firstIndex * 4 + 0xc24));
        *(u32 *)(DAT_007ce3ec + firstIndex * 4 + 0xc24) = 0;
      }
    }
    if (*(int *)(DAT_007ce3ec + 0xd14) != 0) {
      func_00100ec0(*(u32 *)(DAT_007ce3ec + 0xd14));
      *(u32 *)(DAT_007ce3ec + 0xd14) = 0;
    }
  }
  else {
    for (uVar2 = 0; uVar2 < 0x3c; uVar2 = uVar2 + 1) {
      state = DAT_007ce3ec;
      iVar3 = uVar2 * 4;
      iVar1 = *(int *)(state + iVar3 + 0xc24);
      if (iVar1 != 0) {
        (*DAT_0096017c)(*(u32 *)(iVar1 + 0x634));
        func_002b9030(*(u32 *)(DAT_007ce3ec + iVar3 + 0xc24));
        *(u32 *)(DAT_007ce3ec + iVar3 + 0xc24) = 0;
      }
    }
  }
  *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffbffff;
  return;
}
#pragma pop

// FUN_002bc420

void func_002bc420(void)
{
  int iVar1 = 0;
  if ((*(u32 *)(DAT_007ce3ec + 0x14) & 0x4000000) == 0) {
    if (*(int *)(DAT_007ce3ec + 0xd14) != 0) {
      func_00100ec0(*(int *)(DAT_007ce3ec + 0xd14));
    }
    *(u32 *)(DAT_007ce3ec + 0xd14) = 0;
  }
  else {
    *(u32 *)(DAT_007ce3ec + 0xd14) = 0;
  }
  return;
}

#pragma push
#pragma opt_propagation off
// FUN_002bc480

u32 func_002bc480(void)

{
  extern u32 func_00100d80(void *,u32);
  extern u32 func_001016b0(u32);
  extern u32 func_00102100(u32,u32,u8 *);
  extern void func_00521250(u32,u32,u32);
  u32 uVar1 = 0;
  u32 lVar2 = 0;
  u32 firstIndex = 0;
  u32 resource = 0;
  u32 secondIndex = 0;
  u32 allocated = 0;
  u32 firstValue = 0;
  u32 firstOffset = 0;
  u32 resourceSize;
  u8 auStack_4[4];
  
  if ((*(u32 *)(DAT_007ce3ec + 0x14) & 0x4000000) == 0) {
    if (*(int *)(DAT_007ce3ec + 0xd14) == 0) {
      uVar1 = func_00100d80(DAT_00696d70_abs,1);
      *(u32 *)(DAT_007ce3ec + 0xd14) = uVar1;
    }
    else {
      lVar2 = func_001016b0(*(u32 *)(DAT_007ce3ec + 0xd14));
      if (lVar2 != 0) {
        for (firstIndex = 0; firstIndex < 0x3c; firstIndex = firstIndex + 1) {
          firstValue = func_00102100(*(u32 *)(DAT_007ce3ec + 0xd14),firstIndex,auStack_4);
          firstOffset = firstIndex * 4;
          uVar1 = func_002b8f90(2);
          *(u32 *)(DAT_007ce3ec + firstOffset + 0xc24) = uVar1;
          func_002b96e0(*(u32 *)(DAT_007ce3ec + firstOffset + 0xc24),firstValue);
        }
        *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x40000;
        return 1;
      }
    }
    uVar1 = 0;
  }
  else {
    for (secondIndex = 0; secondIndex < 0x3c; secondIndex = secondIndex + 1) {
      resource = func_00100d80(PTR_s_battle_effect_ATC_D_BED_abs[secondIndex],0);
      func_001023a0(resource);
      uVar1 = func_002b8f90(2);
      *(u32 *)(DAT_007ce3ec + secondIndex * 4 + 0xc24) = uVar1;
      allocated = (*DAT_00960178_u32_abs)(*(u32 *)(resource + 0x118),0x40000);
      resourceSize = *(u32 *)(resource + 0x118);
      func_00521250(allocated,*(u32 *)(resource + 0x110),resourceSize);
      func_002b96e0(*(u32 *)(DAT_007ce3ec + secondIndex * 4 + 0xc24),allocated);
      func_00100ec0(resource);
    }
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x40000;
    uVar1 = 1;
  }
  return uVar1;
}
#pragma pop

// FUN_002bc680

void func_002bc680(void)

{
  int iVar1 = 0;
  
  iVar1 = func_0027ec10(0x306,0);
  *(u8 *)(iVar1 + 0x47) = *(u8 *)(iVar1 + 0x47) & 0xfe;
  *(code *)(iVar1 + 0x68) = (code)func_002bc420;
  *(code *)(iVar1 + 0x6c) = (code)func_002bc480;
  return;
}

#pragma push
#pragma opt_propagation off
// FUN_002bc6d0

void func_002bc6d0(void)

{
  extern u32 func_00100d80(void *,u32);
  extern void func_00521250(u32,u32,u32);
  u32 index = 0;
  u32 offset = 0;
  u32 resource = 0;
  u32 allocated = 0;
  u32 resourceSize;

  while (index == 0) {
    offset = index * 4;
    resource = func_00100d80(*(char **)((u8 *)&PTR_s_battle_effect_SHADOW_S_BED_007cc6f0 + offset),0);
    func_001023a0(resource);
    *(u32 *)((u8 *)&_DAT_007ce4f4 + offset) = func_002b8f90(2);
    allocated = (*DAT_00960178_u32_abs)(*(u32 *)(resource + 0x118),0x40000);
    resourceSize = *(u32 *)(resource + 0x118);
    func_00521250(allocated,*(u32 *)(resource + 0x110),resourceSize);
    func_002b96e0(*(u32 *)((u8 *)&_DAT_007ce4f4 + offset),allocated);
    func_00100ec0(resource);
    index++;
  }
  return;
}
#pragma pop

// FUN_002bc7b0

u32 func_002bc7b0(u16 *param_1)

{
  func_00351bb0(*param_1);
  return 1;
}

// FUN_002bc7e0

void func_002bc7e0(u16 param_1)

{
  int iVar1 = 0;
  
  iVar1 = func_0027ec10(0x308,2);
  *(code *)(iVar1 + 0x6c) = (code)func_002bc7b0;
  **(u16 **)(iVar1 + 0x78) = param_1;
  return;
}

// FUN_002bc830

u32 func_002bc830(u8 *param_1)

{
  func_00108570();
  func_00108670(8);
  func_00108680(*param_1,param_1[1],param_1[2]);
  func_001086a0(*(short *)(param_1 + 4));
  return 1;
}

// FUN_002bc890

void func_002bc890(u8 *param_1,u16 param_2)

{
  typedef struct BtlMessageArgs {
    u8 values[4];
  } BtlMessageArgs;
  u8 *work;
  int packet = 0;
  
  packet = func_0027ec10(0x30a,6);
  *(code *)(packet + 0x6c) = (code)func_002bc830;
  work = *(u8 **)(packet + 0x78);
  *(BtlMessageArgs *)work = *(BtlMessageArgs *)param_1;
  *(u16 *)(work + 4) = param_2;
  return;
}

// FUN_002bc910

u32 func_002bc910(u32 *param_1)

{
  func_00352c50(*param_1,param_1[1],param_1[2]);
  return 1;
}

// FUN_002bc950

void func_002bc950(u32 param_1,u32 param_2,u32 param_3)

{
  u32 *puVar1;
  int iVar2 = 0;
  
  iVar2 = func_0027ec10(0x309,0xc);
  *(code *)(iVar2 + 0x6c) = (code)func_002bc910;
  puVar1 = *(u32 **)(iVar2 + 0x78);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  return;
}

/* BtlCore2 W419 negative: DAT_00960088 array-alias spelling was byte-identical (nd508, 784B); cached DAT_00960090/a4 absolute pointers worsened nd508->511 and grew 784->804B over the 784B window. */
// FUN_002bc9c0

asm void func_002bc9c0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,u32 param_7,int param_8)
{
  .set noreorder
  .word 0x27bdfeb0
  .word 0xffbf0040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x46006646
  .word 0x46006e06
  .word 0x460075c6
  .word 0x46007d86
  .word 0x46008546
  .word 0x46008d06
  .word 0x0080802d
  .word 0x00a0882d
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000983
  .word 0x3c020096
  .word 0xc4450088
  .word 0x00101602
  .word 0x304b00ff
  .word 0x00101402
  .word 0x304a00ff
  .word 0x00101202
  .word 0x304900ff
  .word 0x320800ff
  .word 0x0000602d
  .word 0x31660001
  .word 0x448b2000
  .word 0x31450001
  .word 0x448a1800
  .word 0x31240001
  .word 0x44891000
  .word 0x31030001
  .word 0x44880800
  .word 0x10000037
  .word 0x00000000
  .word 0x000c1180
  .word 0x005d1021
  .word 0x24470050
  .word 0xe4e60018
  .word 0x05600004
  .word 0x00000000
  .word 0x46802020
  .word 0x10000007
  .word 0x00000000
  .word 0x000b1042
  .word 0x00461025
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4e00020
  .word 0x05400004
  .word 0x00000000
  .word 0x46801820
  .word 0x10000007
  .word 0x00000000
  .word 0x000a1042
  .word 0x00451025
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4e00024
  .word 0x05200004
  .word 0x00000000
  .word 0x46801020
  .word 0x10000007
  .word 0x00000000
  .word 0x00091042
  .word 0x00441025
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4e00028
  .word 0x05000004
  .word 0x00000000
  .word 0x46800820
  .word 0x10000007
  .word 0x00000000
  .word 0x00081042
  .word 0x00431025
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4e0002c
  .word 0xe4e50008
  .word 0x258c0001
  .word 0x2d820004
  .word 0x1440ffc8
  .word 0x00000000
  .word 0x12200013
  .word 0x00000000
  .word 0xc620000c
  .word 0x468000e0
  .word 0xc6200010
  .word 0x46800060
  .word 0x4603a803
  .word 0xe7a00060
  .word 0x4601a083
  .word 0xe7a20064
  .word 0xe7a000a0
  .word 0x4616a000
  .word 0x46010043
  .word 0xe7a100a4
  .word 0x4617a800
  .word 0x46030003
  .word 0xe7a000e0
  .word 0xe7a100e4
  .word 0xe7a00120
  .word 0xe7a20124
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
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
  .word 0x24040009
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0220282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0xe7b90050
  .word 0xe7b80054
  .word 0xe7b90090
  .word 0x4616c040
  .word 0xe7a10094
  .word 0x4617c800
  .word 0xe7a000d0
  .word 0xe7a100d4
  .word 0xe7a00110
  .word 0xe7b80114
  .word 0x24040003
  .word 0x27a50050
  .word 0x24060004
  .word 0x3c070069
  .word 0x24e76da8
  .word 0x24080006
  .word 0x3c020096
  .word 0x8c4200a4
  .word 0x0040f809
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0150
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_002bccd0

void func_002bccd0(u32 param_1,u32 param_2)
{
  extern int func_00173220(u16);
  extern int func_001778b0(short);
  extern void func_003a4220(u32,u32,u32);
  extern void func_001fea10(u32,u32);
  extern void func_001fe9b0(u32);
  u16 id;
  u8 type;
  int result;

  if (param_1 != 0) {
    id = *(u16 *)(param_1 + 0xa4);
    type = *(u8 *)(param_1 + 0xa2);
    switch (type) {
    case 0:
      result = func_001778b0((short)id);
      break;
    case 1:
      result = (int)(DAT_007ce4e8 + id * 0x13);
      break;
    case 2:
      result = func_00173220(id);
      break;
    }
    func_003a4220(*(u32 *)(DAT_007ce3ec + 0xba0),0,result);
  }
  if (param_2 < 0x1000)
    func_001fea10(*(u32 *)(DAT_007ce3ec + 0xba0),param_2);
  else
    func_001fe9b0((u32)(DAT_007ce4ec + ((param_2 - 0x1000) & 0xffff) * 0x13));
}

// FUN_002bcde0

void func_002bcde0(u64 param_1,u32 *param_2)

{
  *param_2 = 0xbf800000;
  param_2[1] = 0x3f800000;
  *(short *)(param_2 + 4) = -1;
  param_2[5] = 0xbf800000;
  param_2[6] = 0x3f800000;
  *(short *)(param_2 + 9) = -1;
  return;
}

/* W357 measured func_002bce10: opt_lifetimes on nd332/592B -> nd130/584B; window 592B. */
#pragma opt_lifetimes on
static inline f32 btlEffectAddFloatFirst(f32 left, f32 right)
{
  return left + right;
}
static inline u32 btlEffectAddOffsetFirst(u32 offset, u32 base)
{
  return offset + base;
}

// FUN_002bce10

asm void func_002bce10(float param_1,float param_2,u8* param_3,int param_4,float *param_5)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x46006586
  .word 0x46006d46
  .word 0x00a0882d
  .word 0x00c0802d
  .word 0xc4c10000
  .word 0x44800000
  .word 0x00000000
  .word 0x46000834
  .word 0x45010007
  .word 0x00000000
  .word 0xe601000c
  .word 0xc6000004
  .word 0xe6000008
  .word 0x3c03bf80
  .word 0xae030000
  .word 0xa6000010
  .word 0x86030010
  .word 0x04600070
  .word 0x00000000
  .word 0x2861001c
  .word 0x1020006d
  .word 0x00000000
  .word 0x28610010
  .word 0x10200012
  .word 0x00000000
  .word 0xc6030008
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0xc600000c
  .word 0x46030041
  .word 0x44800000
  .word 0x00000000
  .word 0x46030018
  .word 0x4601101c
  .word 0xe6000004
  .word 0x10000003
  .word 0x00000000
  .word 0xc600000c
  .word 0xe6000004
  .word 0x8c8400a8
  .word 0x27a50048
  .word 0x0c07fbc4
  .word 0x00000000
  .word 0x1040004e
  .word 0x00000000
  .word 0x322300ff
  .word 0x1860004b
  .word 0x00000000
  .word 0xc6140004
  .word 0xc7a0004c
  .word 0x46150540
  .word 0xc7a00048
  .word 0x46160580
  .word 0x24040001
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040882d
  .word 0x0220202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x8e24000c
  .word 0x00041843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600b581
  .word 0x44840000
  .word 0x00000000
  .word 0x468003a0
  .word 0xc6200010
  .word 0x468003e0
  .word 0xc6200014
  .word 0x46800420
  .word 0xc6200018
  .word 0x46800460
  .word 0x4600b306
  .word 0x4600ab46
  .word 0x2404ffff
  .word 0x0040282d
  .word 0x0c0af270
  .word 0x00000000
  .word 0x24040005
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050004
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040882d
  .word 0x0220202d
  .word 0x0c087338
  .word 0x00000000
  .word 0xc620000c
  .word 0x46800020
  .word 0x46140002
  .word 0x46000024
  .word 0x468003a0
  .word 0xc6200010
  .word 0x468003e0
  .word 0xc6200014
  .word 0x46800020
  .word 0x46140002
  .word 0x46000024
  .word 0x46800420
  .word 0xc6200018
  .word 0x46800460
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x46160300
  .word 0x3c034080
  .word 0x44830000
  .word 0x00000000
  .word 0x46150340
  .word 0x2404ffff
  .word 0x0040282d
  .word 0x0c0af270
  .word 0x00000000
  .word 0x86030010
  .word 0x24630001
  .word 0xa6030010
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_lifetimes off
// FUN_002bd060
void LAB_002bd060(u32 **param_1)
{
  u16 *value = (u16 *)((u8 *)(*param_1) + 0xa0);
  *value = *value + 1;
}

// FUN_002bd080

u32 func_002bd080(int *work)
{
  int unit;

  unit = *work;
  switch (*(u8 *)((int)work + 4)) {
  case 0:
    {
      s32 value;
      s32 maximum;

      value = (s16)func_002ffd70(*(u32 *)(unit + 0xa2c));
      maximum = (s16)func_002ffdf0(*(u32 *)(unit + 0xa2c));
      if (*(s16 *)((int)work + 6) != 0) {
        value = (s16)(value + *(s16 *)((int)work + 6));
        if (value > (s16)maximum) {
          value = (s16)maximum;
        } else if (value < 0) {
          value = 0;
        }
      }
      *(float *)(unit + 0xa04) = (float)(int)value / (float)(int)maximum;
    }
    break;
  case 1:
    {
      s32 value;
      s32 maximum;

      value = (s16)func_002ffd80(*(u32 *)(unit + 0xa2c));
      maximum = (s16)func_00300100(*(u32 *)(unit + 0xa2c));
      if (*(s16 *)((int)work + 6) != 0) {
        value = (s16)(value + *(s16 *)((int)work + 6));
        if (value > (s16)maximum) {
          value = (s16)maximum;
        } else if (value < 0) {
          value = 0;
        }
      }
      *(float *)(unit + 0xa18) = (float)(int)value / (float)(int)maximum;
    }
    break;
  }
  return 1;
}


// FUN_002bd210
void LAB_002bd210(u32 **param_1)
{
  u16 *value = (u16 *)((u8 *)(*param_1) + 0xa0);
  *value = *value - 1;
}


// FUN_002bd230

void func_002bd230(u32 param_1,u8 param_2,u16 param_3)

{
  u32 *puVar1;
  int iVar2 = 0;
  
  iVar2 = func_0027ec10(0x500,8);
  *(u8 *)(iVar2 + 0x47) = *(u8 *)(iVar2 + 0x47) & 0xef;
  *(code *)(iVar2 + 0x68) = (code)LAB_002bd060;
  *(code *)(iVar2 + 0x6c) = (code)func_002bd080;
  *(code *)(iVar2 + 0x70) = (code)LAB_002bd210;
  puVar1 = *(u32 **)(iVar2 + 0x78);
  *puVar1 = param_1;
  *(u8 *)(puVar1 + 1) = param_2;
  *(u16 *)((int)puVar1 + 6) = param_3;
  return;
}

// FUN_002bd2c0
void btlFormationInit0501Packet(void* work)
{
    BtlUnit* unit;

    unit = *(BtlUnit**)work;
    unit->packetCount++;
}

// FUN_002bd2e0

u32 func_002bd2e0(int *param_1)

{
  int unit;

  unit = *param_1;
  *(float *)(unit + 0xa08) =
      (float)func_002ffd70(*(u32 *)(unit + 0xa2c)) /
      (float)func_002ffdf0(*(u32 *)(unit + 0xa2c));
  *(float *)(unit + 0xa04) = -1.0f;
  *(s16 *)(unit + 0xa14) = -1;
  *(float *)(unit + 0xa1c) =
      (float)func_002ffd80(*(u32 *)(unit + 0xa2c)) /
      (float)func_00300100(*(u32 *)(unit + 0xa2c));
  *(float *)(unit + 0xa04) = -1.0f;
  *(s16 *)(unit + 0xa28) = -1;
  return 1;
}

// FUN_002bd460
void btlFormationDestroy0501Packet(void* work)
{
    BtlUnit* unit;

    unit = *(BtlUnit**)work;
    unit->packetCount--;
}


// FUN_002bd480

void func_002bd480(u32 param_1)

{
  int iVar1 = 0;
  
  iVar1 = func_0027ec10(0x501,4);
  *(u8 *)(iVar1 + 0x47) = *(u8 *)(iVar1 + 0x47) & 0xef;
  *(code *)(iVar1 + 0x68) = (code)btlFormationInit0501Packet;
  *(code *)(iVar1 + 0x6c) = (code)func_002bd2e0;
  *(code *)(iVar1 + 0x70) = (code)btlFormationDestroy0501Packet;
  **(u32 **)(iVar1 + 0x78) = param_1;
  return;
}


// FUN_002bd4f0
u32 func_002bd4f0(int param_1)
{
  u32 uVar1;
  u32 uVar2;

  if ((*(u32 *)(DAT_007ce3ec + 0xc) & 0x200) == 0) {
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      func_001fe9b0(DAT_007ce4ec + (u32)*(u16 *)(param_1 + 4) * 0x13);
    }
    uVar2 = *(int *)(param_1 + 8) + 1;
    *(u32 *)(param_1 + 8) = uVar2;
    if (uVar2 >= 0x2d) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

// FUN_002bd590

void func_002bd590(u32 param_1,u16 param_2)

{
  u32 *puVar1;
  int iVar2 = 0;
  
  iVar2 = func_0027ec10(0x504,0xc);
  *(code *)(iVar2 + 0x6c) = (code)func_002bd4f0;
  puVar1 = *(u32 **)(iVar2 + 0x78);
  *puVar1 = param_1;
  *(u16 *)(puVar1 + 1) = param_2;
  puVar1[2] = 0;
  return;
}


// FUN_002bd5f0
u32 func_002bd5f0(int param_1)
{
  u32 uVar1;
  u32 uVar2;
  const char* text;

  if ((*(u32 *)(DAT_007ce3ec + 0xc) & 0x200) == 0) {
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      text = func_00171110(*(s16 *)(param_1 + 4), 0);
      func_001fe9b0(text);
    }
    uVar2 = *(int *)(param_1 + 8) + 1;
    *(u32 *)(param_1 + 8) = uVar2;
    if (uVar2 >= 0x2d) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

// FUN_002bd690

void func_002bd690(u32 param_1,u16 param_2)

{
  u32 *puVar1;
  int iVar2 = 0;
  
  iVar2 = func_0027ec10(0x505,0xc);
  *(code *)(iVar2 + 0x6c) = (code)func_002bd5f0;
  puVar1 = *(u32 **)(iVar2 + 0x78);
  *puVar1 = param_1;
  *(u16 *)(puVar1 + 1) = param_2;
  puVar1[2] = 0;
  return;
}

// FUN_002bd6f0

u32 func_002bd6f0(int param_1)
{
  u32 result;
  u32 frame;

  if (*(int *)(param_1 + 8) == 0) {
    if (*(u16 *)(param_1 + 4) == 0) {
      result = 1;
      goto done;
    }
    func_001fe9b0(PTR_s_N_00646555_0x12_00696dcc[*(u16 *)(param_1 + 4)]);
  }
  frame = *(int *)(param_1 + 8) + 1;
  *(u32 *)(param_1 + 8) = frame;
  if (frame >= 0x2d) {
    result = 1;
  }
  else {
    result = 0;
  }

done:
  return result;
}

// FUN_002bd780

void func_002bd780(u32 param_1,u16 param_2)

{
  u32 *puVar1;
  int iVar2 = 0;
  
  iVar2 = func_0027ec10(0x507,0xc);
  *(code *)(iVar2 + 0x6c) = (code)func_002bd6f0;
  puVar1 = *(u32 **)(iVar2 + 0x78);
  *puVar1 = param_1;
  *(u16 *)(puVar1 + 1) = param_2;
  puVar1[2] = 0;
  return;
}

// FUN_002bd7e0

bool func_002bd7e0(u32 *param_1)

{
  u32 frame;

  if (param_1[2] == 0) {
    func_002bccd0(*param_1,param_1[1]);
  }
  frame = param_1[2] + 1;
  param_1[2] = frame;
  if (0x2d < frame) {
    return true;
  }
  return false;
}

// FUN_002bd850

void func_002bd850(u32 param_1,u32 param_2)

{
  u32 *puVar1;
  int iVar2 = 0;
  
  iVar2 = func_0027ec10(0x506,0xc);
  *(code *)(iVar2 + 0x6c) = (code)func_002bd7e0;
  puVar1 = *(u32 **)(iVar2 + 0x78);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return;
}

// FUN_002bd8b0
void btlFormationInit050aPacket(void* work)
{
    BtlUnit** units;

    units = (BtlUnit**)work;
    units[0]->packetCount++;
    units[1]->packetCount++;
}

// FUN_002bd8e0

asm u32 func_002bd8e0(int *param_1)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x8c820030
  .word 0x10400090
  .word 0x00000000
  .word 0x0000802d
  .word 0x96640028
  .word 0x30820004
  .word 0x14400010
  .word 0x00000000
  .word 0x8e620008
  .word 0x14400010
  .word 0x00000000
  .word 0x8e62000c
  .word 0x1440000d
  .word 0x00000000
  .word 0x8e620010
  .word 0x1440000a
  .word 0x00000000
  .word 0x8e620014
  .word 0x14400007
  .word 0x00000000
  .word 0x8e620018
  .word 0x14400004
  .word 0x00000000
  .word 0x24050001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000282d
  .word 0x8e720008
  .word 0x12400004
  .word 0x00000000
  .word 0x36100010
  .word 0x10000002
  .word 0x00000000
  .word 0x0000902d
  .word 0x8e71000c
  .word 0x12200004
  .word 0x00000000
  .word 0x36100020
  .word 0x10000002
  .word 0x00000000
  .word 0x0000882d
  .word 0x9663002e
  .word 0x9662002c
  .word 0x24420001
  .word 0x14620037
  .word 0x00000000
  .word 0x9663002a
  .word 0x30620002
  .word 0x10400004
  .word 0x00000000
  .word 0x14a00002
  .word 0x00000000
  .word 0x36100001
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x14a00002
  .word 0x00000000
  .word 0x36100002
  .word 0x30820100
  .word 0x1040001e
  .word 0x00000000
  .word 0x8e630024
  .word 0x2402ffff
  .word 0x1062000e
  .word 0x00000000
  .word 0x8e620000
  .word 0x8c440a2c
  .word 0x1080000a
  .word 0x00000000
  .word 0x3065ffff
  .word 0x0c0c20bc
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c0c2030
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x3c030001
  .word 0x3463f800
  .word 0x00431024
  .word 0x14400004
  .word 0x00000000
  .word 0x36100008
  .word 0x10000007
  .word 0x00000000
  .word 0x36100004
  .word 0x10000004
  .word 0x00000000
  .word 0x10a00002
  .word 0x00000000
  .word 0x36100004
  .word 0x8e630010
  .word 0x3c020010
  .word 0x00621024
  .word 0x10400002
  .word 0x00000000
  .word 0x36100040
  .word 0x8e630024
  .word 0x04600019
  .word 0x00000000
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00022880
  .word 0x8f84b708
  .word 0x00a41021
  .word 0x90430008
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x36100080
  .word 0x00851021
  .word 0x90420000
  .word 0x30420020
  .word 0x10400003
  .word 0x00000000
  .word 0x2402fffb
  .word 0x02028024
  .word 0xafb20050
  .word 0xafb10054
  .word 0xafb00058
  .word 0x8e620000
  .word 0x8c4200a8
  .word 0xafa2005c
  .word 0x8e620004
  .word 0x8c4200a8
  .word 0xafa20060
  .word 0x9662002c
  .word 0xafa20068
  .word 0x9662002e
  .word 0xafa20064
  .word 0x27a40050
  .word 0x0c07f994
  .word 0x00000000
  .word 0xae600030
  .word 0x1000000f
  .word 0x00000000
  .word 0x8e620004
  .word 0x8c4400a8
  .word 0x0c07fad4
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c42000c
  .word 0x30420800
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
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

// FUN_002bdba0
void btlFormationDestroy050aPacket(void* work)
{
    BtlUnit** units;

    units = (BtlUnit**)work;
    units[0]->packetCount--;
    units[1]->packetCount--;
}

// FUN_002bdbd0

int func_002bdbd0(u32 param_1,u32 param_2,u32 param_3,u16 param_4,
                u16 param_5,u16 param_6,u16 param_7,u64 param_8)

{
  u32 *puVar1;
  int iVar2 = 0;
  
  iVar2 = func_0027ec10(0x50a,0x34);
  *(code *)(iVar2 + 0x68) = (code)btlFormationInit050aPacket;
  *(code *)(iVar2 + 0x6c) = (code)func_002bd8e0;
  *(code *)(iVar2 + 0x70) = (code)btlFormationDestroy050aPacket;
  puVar1 = *(u32 **)(iVar2 + 0x78);
  func_00521250(puVar1 + 2,param_8,0x1c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[9] = param_3;
  *(u16 *)(puVar1 + 10) = param_4;
  *(u16 *)((int)puVar1 + 0x2a) = param_5;
  *(u16 *)(puVar1 + 0xb) = param_6;
  *(u16 *)((int)puVar1 + 0x2e) = param_7;
  puVar1[0xc] = 1;
  return iVar2;
}

// FUN_002bdcd0 MATCHING

u32 func_002bdcd0(u16* state)
{
  u64 result;

  switch (*state) {
  case 0:
    result = func_001fea90();
    if (result == 0) {
      return 1;
    }
    result = func_002d1a70();
    if (result == 1) {
      *(u32 *)(DAT_007ce3ec + 0xc) &= ~0x4000;
      func_002d1a10();
      func_001ff350();
    }
    func_001feab0();
    *state = 1;
    goto return_zero;
  case 1:
    result = func_001feb30();
    if (result != 0) {
      goto return_zero;
    }
    result = func_002d1a70();
    if (result == 1) {
      *(u32 *)(DAT_007ce3ec + 0xc) |= 0x4000;
      func_001ff370();
    }
    return 1;
  default:
    goto return_zero;
  }
return_zero:
  return 0;
}

// FUN_002bddd0

void func_002bddd0(void)

{
  int iVar1 = 0;
  
  iVar1 = func_0027ec10(0x50b,2);
  *(code *)(iVar1 + 0x6c) = (code)func_002bdcd0;
  **(u16 **)(iVar1 + 0x78) = 0;
  return;
}

/* Removing this loses FUN_002bde10 (MATCH nd0 -> MISMATCH nd119) - measured W161. */
#pragma opt_loop_invariants on
#pragma opt_lifetimes on
// FUN_002bde10

u16 func_002bde10(int unit, u16* output)
{
  u16 skill;
  u16 nextSkill;
  u16 count;
  u16 index;
  u16* unitSkills;
  u32 swapped;

  count = 0;
  unitSkills = (u16*)func_00308bb0_u32(*(u32 *)(*(int *)(unit + 0x30) + 0xa2c));
  for (index = 0; index < 8; index++) {
    skill = unitSkills[index];
    if (skill != 0 && skill < 0x1d0 &&
        (*(u8 *)(DAT_007ce3f8 + (u32)skill * 0x2c + 1) & 2) != 0) {
      if (output != 0) {
        output[count] = skill;
      }
      count++;
    }
  }
  if (output != 0) {
    for (index = count; index < 8; index++) {
      output[index] = 0;
    }
    if (count > 1) {
      do {
        swapped = 0;
        for (index = 0; index < count - 1; index++) {
          skill = output[index];
          nextSkill = output[index + 1];
          if (nextSkill < skill) {
            output[index] = nextSkill;
            output[index + 1] = skill;
            swapped = 1;
          }
        }
      } while (swapped);
    }
  }
  return count;
}
#pragma opt_lifetimes off
#pragma opt_loop_invariants off

/* W416 triage: retail offset 0x240 has a 0x10 extension pair already present at ours 0x230; layout-only, no width edit retained. */
/* W322 probe: func_002bdfb0 with opt_loop_invariants on improved normalized_diff 431 -> 373 (object 796/816). */
#pragma opt_loop_invariants on
/* W357 measured func_002bdfb0: opt_lifetimes on stacked with existing opt_loop_invariants on, nd373/796B -> nd360/796B; window 816B. */
#pragma opt_lifetimes on
// FUN_002bdfb0

asm static u32 func_002bdfb0(int state)
{
  .set noreorder
  .word 0x8483000c
  .word 0x84820006
  .word 0x0043102a
  .word 0x1440000c
  .word 0x00000000
  .word 0x2462ffff
  .word 0xa4820006
  .word 0x8483000c
  .word 0x8482000a
  .word 0x00621023
  .word 0xa4820004
  .word 0x0002143c
  .word 0x0002143f
  .word 0x04410002
  .word 0x00000000
  .word 0xa4800004
  .word 0x3c02007e
  .word 0x9445094e
  .word 0x30a20040
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430958
  .word 0x30620040
  .word 0x10400004
  .word 0x00000000
  .word 0x24020002
  .word 0x100000ad
  .word 0x00000000
  .word 0x30a20020
  .word 0x14400004
  .word 0x00000000
  .word 0x30620020
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x100000a4
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94460952
  .word 0x30c31000
  .word 0x1460000c
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9445095a
  .word 0x30a21000
  .word 0x14400007
  .word 0x00000000
  .word 0x30c28000
  .word 0x14400004
  .word 0x00000000
  .word 0x30a28000
  .word 0x10400043
  .word 0x00000000
  .word 0x14600008
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442095a
  .word 0x30421000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x8482000a
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000402d
  .word 0x24050001
  .word 0x10000028
  .word 0x00000000
  .word 0x84860004
  .word 0x84830006
  .word 0x24c20001
  .word 0x0043082a
  .word 0x1420001d
  .word 0x00000000
  .word 0x18c00008
  .word 0x00000000
  .word 0x24c2ffff
  .word 0xa4820004
  .word 0x84820006
  .word 0x2442ffff
  .word 0xa4820006
  .word 0x10000016
  .word 0x00000000
  .word 0x14650004
  .word 0x00000000
  .word 0xa4800006
  .word 0x10000011
  .word 0x00000000
  .word 0x8483000c
  .word 0x8482000a
  .word 0x00621023
  .word 0xa4820004
  .word 0x0002143c
  .word 0x0002143f
  .word 0x04410002
  .word 0x00000000
  .word 0xa4800004
  .word 0x8482000c
  .word 0x2442ffff
  .word 0xa4820006
  .word 0x10000003
  .word 0x00000000
  .word 0x2462ffff
  .word 0xa4820006
  .word 0x25020001
  .word 0x0002443c
  .word 0x0008443f
  .word 0x0008143c
  .word 0x0002143f
  .word 0x0047102a
  .word 0x1440ffd5
  .word 0x00000000
  .word 0x24020003
  .word 0x10000052
  .word 0x00000000
  .word 0x30c34000
  .word 0x1460000a
  .word 0x00000000
  .word 0x30a24000
  .word 0x14400007
  .word 0x00000000
  .word 0x30c22000
  .word 0x14400004
  .word 0x00000000
  .word 0x30a22000
  .word 0x10400045
  .word 0x00000000
  .word 0x14600006
  .word 0x00000000
  .word 0x30a24000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x8482000a
  .word 0x0002443c
  .word 0x0008443f
  .word 0x0000482d
  .word 0x1000002d
  .word 0x00000000
  .word 0x8487000a
  .word 0x84860004
  .word 0x84850006
  .word 0x00c71021
  .word 0x2442fffe
  .word 0x00a2082a
  .word 0x10200006
  .word 0x00000000
  .word 0x8482000c
  .word 0x2442fffe
  .word 0x00a2102a
  .word 0x1440001b
  .word 0x00000000
  .word 0x8483000c
  .word 0x00671023
  .word 0x00c2082a
  .word 0x10200009
  .word 0x00000000
  .word 0x84820004
  .word 0x24420001
  .word 0xa4820004
  .word 0x84820006
  .word 0x24420001
  .word 0xa4820006
  .word 0x10000010
  .word 0x00000000
  .word 0x2462ffff
  .word 0x00a2082a
  .word 0x10200006
  .word 0x00000000
  .word 0x84820006
  .word 0x24420001
  .word 0xa4820006
  .word 0x10000007
  .word 0x00000000
  .word 0xa4800004
  .word 0xa4800006
  .word 0x10000003
  .word 0x00000000
  .word 0x24a20001
  .word 0xa4820006
  .word 0x25220001
  .word 0x00024c3c
  .word 0x00094c3f
  .word 0x0009143c
  .word 0x0002143f
  .word 0x0048102a
  .word 0x1440ffd0
  .word 0x00000000
  .word 0x24020004
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_lifetimes off
#pragma opt_loop_invariants off

// FUN_002BE2E0
void FUN_002BE2E0(void)
{
}

// FUN_002be2f0

u32 func_002be2f0(int param_1)
{
  u16 state;
  void *entry;

  state = func_002bdfb0(param_1);
  switch (state) {
  case 1:
    *(u16 *)(param_1 + 4) = 0;
    *(u16 *)(param_1 + 6) = 0;
    break;
  case 2:
    entry = PTR_DAT_00696f30_abs[*(short *)(param_1 + 6)];
    *(void **)(param_1 + 0x24) = entry;
    *(int *)((u8 *)entry + 0x20) = param_1;
    if (*(void (**)(void *))((u8 *)entry + 0x10) != 0) {
      (*(void (**)(void *))((u8 *)entry + 0x10))(entry);
    }
    return 2;
  }
  return 0;
}

/* W416 triage: retail offsets 0xD0/0xD4 and ours 0xC8/0xCC use the same 0x10 extension; s16-parameter probe nd272/object500 exceeded the 496-byte window (single-parameter nd343/object496), reverted. */
/* W357 measured func_002be390: opt_propagation off nd299/492B -> nd298/492B; window 496B. */
#pragma opt_propagation off
// FUN_002be390

asm void func_002be390(short *param_1,int param_2,int param_3)
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
  .word 0x84830008
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x24420004
  .word 0x44820000
  .word 0x00000000
  .word 0x468003a0
  .word 0x8483000a
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x24420004
  .word 0x44820000
  .word 0x00000000
  .word 0x468003e0
  .word 0x0006943c
  .word 0x0012943f
  .word 0x00058c3c
  .word 0x00118c3f
  .word 0x84820000
  .word 0x02221021
  .word 0x2442fffe
  .word 0x44820000
  .word 0x00000000
  .word 0x46800320
  .word 0x84820002
  .word 0x02421021
  .word 0x2442fffe
  .word 0x44820000
  .word 0x00000000
  .word 0x46800360
  .word 0x44808000
  .word 0x00000000
  .word 0x46008446
  .word 0x3c02c0c0
  .word 0x3444c0c0
  .word 0x0000282d
  .word 0x0c0af270
  .word 0x00000000
  .word 0x86030000
  .word 0x00711821
  .word 0x00039c3c
  .word 0x00139c3f
  .word 0x86030002
  .word 0x00721821
  .word 0x2463fff8
  .word 0x0003a43c
  .word 0x0014a43f
  .word 0x86120004
  .word 0x0000a82d
  .word 0x00122080
  .word 0x3c030069
  .word 0x24636d90
  .word 0x00648821
  .word 0x10000029
  .word 0x00000000
  .word 0x86030006
  .word 0x02441021
  .word 0x14620011
  .word 0x00000000
  .word 0x00142c3c
  .word 0x00052c3f
  .word 0x44806000
  .word 0x00041080
  .word 0x02221021
  .word 0x0260202d
  .word 0x2406ffff
  .word 0x24070001
  .word 0x24080002
  .word 0x8c490000
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c0ecb2c
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x00142c3c
  .word 0x00052c3f
  .word 0x44806000
  .word 0x00041080
  .word 0x02221021
  .word 0x0260202d
  .word 0x2406ffff
  .word 0x0000382d
  .word 0x24080002
  .word 0x8c490000
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c0ecb2c
  .word 0x00000000
  .word 0x26830012
  .word 0x0003a43c
  .word 0x0014a43f
  .word 0x26a30001
  .word 0x0003ac3c
  .word 0x0015ac3f
  .word 0x0015243c
  .word 0x0004243f
  .word 0x8603000a
  .word 0x0083182a
  .word 0x1460ffd3
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

#pragma opt_propagation on
// FUN_002be580

u32 func_002be580(u64 param_1,int param_2)

{
  u16 uVar1 = 0;
  
  *(u16 *)(param_2 + 0x6c) = 1;
  uVar1 = func_00308930(*(u32 *)(*(int *)(param_2 + 0x30) + 0xa2c));
  *(u16 *)(param_2 + 0x6e) = uVar1;
  return 4;
}

// FUN_002BE5D0

u32 func_002BE5D0(u64 param_1,int param_2)
{
  *(u16 *)(param_2 + 0x6c) = 6;
  *(u16 *)(param_2 + 0x6e) = 0;
  return 6;
}

// FUN_002BE5F0

u32 func_002BE5F0(u64 param_1,int param_2)
{
  *(u16 *)(param_2 + 0x6c) = 7;
  *(u16 *)(param_2 + 0x6e) = 0;
  return 6;
}

// FUN_002BE610

void func_002BE610(int param_1)
{
  *(u16 *)(param_1 + 0xc) = 0x26f;
}

// FUN_002be620

u64 func_002be620(int param_1,int param_2)

{
  u16 uVar1 = 0;
  u16 sVar2 = 0;
  u64 uVar3 = 0;
  int iVar4 = 0;
  int iVar5 = 0;
  u16 auStack_20[16];
  
  iVar5 = (int)param_1;
  if ((*(u32 *)(DAT_007ce3ec + 0x14) & 0x2000000) != 0) {
    *(u16 *)(iVar5 + 0xc) = 0x26f;
  }
  else {
    uVar1 = func_002bde10(param_2,(u16*)auStack_20);
    *(u16 *)(iVar5 + 0xc) = uVar1;
  }
  sVar2 = func_002bdfb0(param_1);
  switch (sVar2) {
  case 1:
    uVar3 = 1;
    break;
  case 2:
    iVar4 = (int)param_2;
    *(u16 *)(iVar4 + 0x6c) = 2;
    if ((*(u32 *)(DAT_007ce3ec + 0x14) & 0x2000000) != 0) {
      *(short *)(iVar4 + 0x6e) = *(short *)(iVar5 + 6) + 1;
    }
    else {
      *(u16 *)(iVar4 + 0x6e) = auStack_20[*(short *)(iVar5 + 6)];
    }
    uVar3 = 3;
    break;
  default:
    uVar3 = 0;
    break;
  }
  return uVar3;
}

/* W357 measured func_002be720: opt_propagation off nd415/684B -> nd402/684B; window 688B. */
#pragma opt_propagation off
// FUN_002be720

asm void func_002be720(short *param_1,short param_2,short param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00e0882d
  .word 0x84830008
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x24420004
  .word 0x44820000
  .word 0x00000000
  .word 0x468003a0
  .word 0x8483000a
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x24420004
  .word 0x44820000
  .word 0x00000000
  .word 0x468003e0
  .word 0x0006943c
  .word 0x0012943f
  .word 0x0005843c
  .word 0x0010843f
  .word 0x84820000
  .word 0x02021021
  .word 0x2442fffe
  .word 0x44820000
  .word 0x00000000
  .word 0x46800320
  .word 0x84820002
  .word 0x02421021
  .word 0x2442fffe
  .word 0x44820000
  .word 0x00000000
  .word 0x46800360
  .word 0x44808000
  .word 0x00000000
  .word 0x46008446
  .word 0x3c02c0c0
  .word 0x3444c0c0
  .word 0x0000282d
  .word 0x0c0af270
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x8c640014
  .word 0x3c030200
  .word 0x00831824
  .word 0x10600005
  .word 0x00000000
  .word 0x2403026f
  .word 0xa683000c
  .word 0x10000006
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a50080
  .word 0x0c0af784
  .word 0x00000000
  .word 0xa682000c
  .word 0x8684000c
  .word 0x8683000a
  .word 0x0083082a
  .word 0x14200003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0080182d
  .word 0x3075ffff
  .word 0x86830000
  .word 0x00701821
  .word 0x00038c3c
  .word 0x00118c3f
  .word 0x86830002
  .word 0x00721821
  .word 0x2463fff8
  .word 0x0003943c
  .word 0x0012943f
  .word 0x86900004
  .word 0x0000982d
  .word 0x00101840
  .word 0x007d1821
  .word 0x24760080
  .word 0x10000040
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c430014
  .word 0x3c020200
  .word 0x00621024
  .word 0x10400006
  .word 0x00000000
  .word 0x02041021
  .word 0x24420001
  .word 0x3042ffff
  .word 0x10000004
  .word 0x00000000
  .word 0x00041040
  .word 0x02c21021
  .word 0x94420000
  .word 0x3046ffff
  .word 0x86830006
  .word 0x02041021
  .word 0x14620015
  .word 0x00000000
  .word 0x00122c3c
  .word 0x00052c3f
  .word 0x44806000
  .word 0x30c3ffff
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x00431821
  .word 0x8f82b7fc
  .word 0x00434821
  .word 0x0220202d
  .word 0x2406ffff
  .word 0x24070001
  .word 0x24080002
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c0ecb2c
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x00122c3c
  .word 0x00052c3f
  .word 0x44806000
  .word 0x30c3ffff
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x00431821
  .word 0x8f82b7fc
  .word 0x00434821
  .word 0x0220202d
  .word 0x2406ffff
  .word 0x0000382d
  .word 0x24080002
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c0ecb2c
  .word 0x00000000
  .word 0x26430012
  .word 0x0003943c
  .word 0x0012943f
  .word 0x26630001
  .word 0x00039c3c
  .word 0x00139c3f
  .word 0x0013243c
  .word 0x0004243f
  .word 0x0095182a
  .word 0x1460ffbd
  .word 0x00000000
  .word 0xdfbf0070
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
#pragma opt_propagation reset

// FUN_002BE9D0
void FUN_002BE9D0(void)
{
}

// FUN_002be9e0

u64 func_002be9e0(int param_1,int param_2)
{
  u16 sVar1 = 0;
  u16 uVar2 = 0;
  u64 uVar3 = 0;
  
  *(u16 *)(param_1 + 0xc) = 0xdf;
  sVar1 = func_002bdfb0(param_1);
  switch (sVar1) {
  case 1:
    uVar3 = 1;
    break;
  case 2:
    *(u16 *)(param_2 + 0x6c) = 3;
    *(short *)(param_2 + 0x70) = *(short *)(param_1 + 6) + 0xfa1;
    uVar2 = func_0030bc20(*(u16 *)(param_2 + 0x70));
    *(u16 *)(param_2 + 0x6e) = uVar2;
    uVar3 = 3;
    break;
  default:
    uVar3 = 0;
    break;
  }
  return uVar3;
}

// FUN_002bea80

asm void func_002bea80(short *param_1,short param_2,short param_3)
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
  .word 0x84830008
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x24420004
  .word 0x44820000
  .word 0x00000000
  .word 0x468003a0
  .word 0x8483000a
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x24420004
  .word 0x44820000
  .word 0x00000000
  .word 0x468003e0
  .word 0x00069c3c
  .word 0x00139c3f
  .word 0x0005843c
  .word 0x0010843f
  .word 0x84820000
  .word 0x02021021
  .word 0x2442fffe
  .word 0x44820000
  .word 0x00000000
  .word 0x46800320
  .word 0x84820002
  .word 0x02621021
  .word 0x2442fffe
  .word 0x44820000
  .word 0x00000000
  .word 0x46800360
  .word 0x44808000
  .word 0x00000000
  .word 0x46008446
  .word 0x3c02c0c0
  .word 0x3444c0c0
  .word 0x0000282d
  .word 0x0c0af270
  .word 0x00000000
  .word 0x240400df
  .word 0xa6a4000c
  .word 0x86a3000a
  .word 0x0083082a
  .word 0x14200003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0080182d
  .word 0x3071ffff
  .word 0x86a30000
  .word 0x00701821
  .word 0x0003943c
  .word 0x0012943f
  .word 0x86a30002
  .word 0x00731821
  .word 0x2463fff8
  .word 0x00039c3c
  .word 0x00139c3f
  .word 0x86b00004
  .word 0x0000a02d
  .word 0x26160fa1
  .word 0x10000033
  .word 0x00000000
  .word 0x00142c3c
  .word 0x00052c3f
  .word 0x02c51021
  .word 0x3044ffff
  .word 0x86a30006
  .word 0x02051021
  .word 0x14620014
  .word 0x00000000
  .word 0x0004243c
  .word 0x0004243f
  .word 0x0000282d
  .word 0x0c05c444
  .word 0x00000000
  .word 0x00132c3c
  .word 0x00052c3f
  .word 0x44806000
  .word 0x0240202d
  .word 0x2406ffff
  .word 0x24070001
  .word 0x24080002
  .word 0x0040482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c0ecb2c
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x0004243c
  .word 0x0004243f
  .word 0x0000282d
  .word 0x0c05c444
  .word 0x00000000
  .word 0x00132c3c
  .word 0x00052c3f
  .word 0x44806000
  .word 0x0240202d
  .word 0x2406ffff
  .word 0x0000382d
  .word 0x24080002
  .word 0x0040482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c0ecb2c
  .word 0x00000000
  .word 0x26630012
  .word 0x00039c3c
  .word 0x00139c3f
  .word 0x26830001
  .word 0x0003a43c
  .word 0x0014a43f
  .word 0x00141c3c
  .word 0x00031c3f
  .word 0x0071182a
  .word 0x1460ffca
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

// FUN_002becc0

u16 func_002becc0(void)
{
    u32 handle;
    u16* data;

    handle = func_00195340_u32(D_00696f50);
    if (handle == 0)
    {
        return 5;
    }

    data = (u16*)func_00195540_u32(handle);
    return *data;
}

// FUN_002bed10

void func_002bed10(void)
{
  u32 handle;
  u16 *state;

  if ((handle = func_00195340_u32(D_00696f50)) == 0) {
    return;
  }
  state = (u16 *)func_00195540_u32(handle);
  if ((*(u32 *)(DAT_007ce3ec + 0x14) & 0x2000000) != 0) {
    if (*state == 3) {
      *state = 6;
    }
  }
  else {
    switch (*(u16 *)(*(u32 *)(state + 2) + 0x6c)) {
    case 4:
      func_001fe430();
      break;
    default:
      func_001fdec0();
      break;
    }
    *state = 2;
  }
}

// FUN_002bedd0

void func_002bedd0(int param_1)
{
  u32 handle;
  u16 *state;

  if ((*(u32 *)(DAT_007ce3ec + 0x14) & 0x2000000) != 0) {
    if ((handle = func_00195340_u32(D_00696f50)) != 0) {
      state = (u16 *)func_00195540_u32(handle);
      if ((*(u32 *)(DAT_007ce3ec + 0x14) & 0x2000000) != 0) {
        if (*state == 3) {
          *state = 6;
        }
      }
      else {
        switch (*(u16 *)(*(u32 *)(state + 2) + 0x6c)) {
        case 4:
          func_001fe430();
          break;
        default:
          func_001fdec0();
          break;
        }
        *state = 2;
      }
    }
  }
  else {
    if ((handle = func_00195340_u32(D_00696f50)) != 0) {
      state = (u16 *)func_00195540_u32(handle);
      switch (*(u16 *)(*(u32 *)(state + 2) + 0x6c)) {
      case 4:
        func_001fe3b0(*(u32 *)(*(u32 *)(param_1 + 0x30) + 0xa8));
        break;
      default:
        break;
      }
      *state = 2;
    }
  }
}

/* W416 shape probe: update.state if/else chain converted to ascending switch cases; nd550/object892 -> nd537/object900, window912. */
// FUN_002bef20

asm u64 func_002bef20(u64 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x0c0bfccc
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000d0
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420014
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000c8
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c065550
  .word 0x00000000
  .word 0x0040882d
  .word 0x94430000
  .word 0x24020008
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020007
  .word 0x10620009
  .word 0x00000000
  .word 0x24020005
  .word 0x10620006
  .word 0x00000000
  .word 0x24020003
  .word 0x10620003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000b2
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c430014
  .word 0x3c020200
  .word 0x00621024
  .word 0x10400041
  .word 0x00000000
  .word 0x2404140c
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24041409
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x96230000
  .word 0x24020006
  .word 0x14620006
  .word 0x00000000
  .word 0x24020002
  .word 0xa6220000
  .word 0x0000102d
  .word 0x1000009b
  .word 0x00000000
  .word 0x8e30000c
  .word 0x12000097
  .word 0x00000000
  .word 0x8e020014
  .word 0x10400094
  .word 0x00000000
  .word 0x0200202d
  .word 0x8e250004
  .word 0x0040f809
  .word 0x00000000
  .word 0x3042ffff
  .word 0x2c410007
  .word 0x1020008c
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637d40
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e020020
  .word 0x10400082
  .word 0x00000000
  .word 0xae22000c
  .word 0xac400024
  .word 0x1000007e
  .word 0x00000000
  .word 0x8e020024
  .word 0x1040007b
  .word 0x00000000
  .word 0xae22000c
  .word 0x10000078
  .word 0x00000000
  .word 0x8e020020
  .word 0x10400003
  .word 0x00000000
  .word 0xae22000c
  .word 0xac400024
  .word 0x24020003
  .word 0xa6220000
  .word 0x1000006f
  .word 0x00000000
  .word 0x24020005
  .word 0xa6220000
  .word 0x1000006b
  .word 0x00000000
  .word 0x2404140c
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24041409
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x8e300004
  .word 0x0c07f77c
  .word 0x00000000
  .word 0x1040005e
  .word 0x00000000
  .word 0x27a40030
  .word 0x0c07f7c4
  .word 0x00000000
  .word 0x8fa20034
  .word 0xa602006c
  .word 0x8fa50034
  .word 0x2402000d
  .word 0x10a20053
  .word 0x00000000
  .word 0x24020007
  .word 0x10a2004c
  .word 0x00000000
  .word 0x24020006
  .word 0x10a20049
  .word 0x00000000
  .word 0x2402000a
  .word 0x10a2003f
  .word 0x00000000
  .word 0x24040005
  .word 0x10a40037
  .word 0x00000000
  .word 0x24020004
  .word 0x10a20024
  .word 0x00000000
  .word 0x24030003
  .word 0x10a30017
  .word 0x00000000
  .word 0x24020002
  .word 0x10a2000f
  .word 0x00000000
  .word 0x24020001
  .word 0x10a20003
  .word 0x00000000
  .word 0x1000003b
  .word 0x00000000
  .word 0x8e020030
  .word 0x8c440a2c
  .word 0x0c0c224c
  .word 0x00000000
  .word 0xa602006e
  .word 0x24020003
  .word 0xa6220000
  .word 0x10000032
  .word 0x00000000
  .word 0x97a2003a
  .word 0xa602006e
  .word 0xa6230000
  .word 0x1000002d
  .word 0x00000000
  .word 0x97a20038
  .word 0xa6020070
  .word 0x97a40038
  .word 0x0c0c2f08
  .word 0x00000000
  .word 0xa602006e
  .word 0x24020003
  .word 0xa6220000
  .word 0x10000023
  .word 0x00000000
  .word 0x8fa30030
  .word 0x30620001
  .word 0x14400004
  .word 0x00000000
  .word 0x30620002
  .word 0x10400007
  .word 0x00000000
  .word 0x97a2003a
  .word 0xa602006e
  .word 0x24020003
  .word 0xa6220000
  .word 0x10000016
  .word 0x00000000
  .word 0xa6240000
  .word 0x10000013
  .word 0x00000000
  .word 0x97a2003c
  .word 0xa6020074
  .word 0xa6240000
  .word 0x1000000e
  .word 0x00000000
  .word 0x8fa40040
  .word 0x0c0b6d94
  .word 0x00000000
  .word 0x24020007
  .word 0xa6220000
  .word 0x10000007
  .word 0x00000000
  .word 0x24020005
  .word 0xa6220000
  .word 0x10000003
  .word 0x00000000
  .word 0x24020008
  .word 0xa6220000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_002bf2b0

u32 func_002bf2b0(u32 param_1)

{
  u32 state;
  u32 entry;
  void (*callback)(u32,u32,u32,u32);

  if (btlFadeSuppressesFormationUpdates() != 0) {
    return 0;
  }
  if ((*(u32 *)(DAT_007ce3ec + 0x14) & 4) != 0) {
    return 0;
  }
  if ((*(u32 *)(DAT_007ce3ec + 0x14) & 0x2000000) != 0) {
    state = func_00195540_u32(param_1);
    entry = *(u32 *)(state + 8);
    do {
      callback = *(void (**)(u32,u32,u32,u32))(entry + 0x18);
      if (callback != 0) {
        callback(entry,0x10,300,*(u32 *)(state + 4));
      }
      entry = *(u32 *)(entry + 0x24);
    } while (entry != 0);
  }
  return 0;
}


// FUN_002bf370
void func_002bf370(u64 param_1)

{
  long lVar1 = 0;
  u64 uVar2 = 0;
  
  func_001fdda0();
  lVar1 = func_002d1a70();
  if (lVar1 == 1) {
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x4000;
    func_001ff370();
  }
  uVar2 = func_00195540(param_1);
  (*DAT_0096017c)(uVar2);
  *(u32 *)(DAT_007ce3ec + 0xd1c) = 0;
  return;
}

/* W415: inverted both mutually exclusive helper branches; each isolated inversion kept nd 230, final call census matches retail (object 588/608). */
/* BtlCore2 W419 negative: inverting either bf3f0 helper branch kept nd230 (588/608B); retain baseline. */
// FUN_002bf3f0

asm u32 func_002bf3f0(int param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x0c0b469c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430006
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x2402bfff
  .word 0x00621024
  .word 0xac82000c
  .word 0x3c040069
  .word 0x24846f50
  .word 0x0c0654d0
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000074
  .word 0x00000000
  .word 0x24040014
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040902d
  .word 0x0240202d
  .word 0x0000282d
  .word 0x24060014
  .word 0x0c148502
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440d18
  .word 0x3c050069
  .word 0x24a56f50
  .word 0x2406000a
  .word 0x3c07002c
  .word 0x24e7ef20
  .word 0x3c08002c
  .word 0x2508f370
  .word 0x0240482d
  .word 0x0c0652c8
  .word 0x00000000
  .word 0xae420010
  .word 0x0040202d
  .word 0x3c050069
  .word 0x24a56f70
  .word 0x2406106f
  .word 0x3c07002c
  .word 0x24e7f2b0
  .word 0x0000402d
  .word 0x0240482d
  .word 0x0c0652c8
  .word 0x00000000
  .word 0x8e430010
  .word 0x8f82b6fc
  .word 0xac430d1c
  .word 0x3c020069
  .word 0xac406e30
  .word 0x3c020069
  .word 0xac406e34
  .word 0x3c020069
  .word 0x24426e10
  .word 0xae420008
  .word 0xae42000c
  .word 0xae530004
  .word 0x24020002
  .word 0xa6420000
  .word 0x8e620030
  .word 0x8c440a2c
  .word 0x0c0c0154
  .word 0x00000000
  .word 0x0040882d
  .word 0x3c020008
  .word 0x34420060
  .word 0x02228024
  .word 0x12000005
  .word 0x00000000
  .word 0x0c07fb38
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0c07fb40
  .word 0x00000000
  .word 0x0260202d
  .word 0x0000282d
  .word 0x0c0b0738
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x0c07fb78
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0c07fb80
  .word 0x00000000
  .word 0x3c020008
  .word 0x34420274
  .word 0x02221024
  .word 0x10400005
  .word 0x00000000
  .word 0x0c07fb48
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0c07fb50
  .word 0x00000000
  .word 0x12000005
  .word 0x00000000
  .word 0x0c07fb58
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0c07fb60
  .word 0x00000000
  .word 0x96620018
  .word 0x30420400
  .word 0x14400005
  .word 0x00000000
  .word 0x0c07fb68
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0c07fb70
  .word 0x00000000
  .word 0x0c07fba0
  .word 0x00000000
  .word 0x0c07fb90
  .word 0x00000000
  .word 0x0c0bf608
  .word 0x00000000
  .word 0x0c07f758
  .word 0x00000000
  .word 0x8e420010
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
  .word 0x00000000
}

// FUN_002bf650

void func_002bf650(void)
{
  long handle;
  
  if ((handle = func_00195340(D_00696f50)) == 0) {
    return;
  }
  func_00195020(handle);
  return;
}

// FUN_002bf690

void func_002bf690_u16(u16 param_1)

{
  int iVar1 = 0;
  u32 uVar2 = 0;
  long lVar3 = 0;
  long lVar4 = 0;
  
  iVar1 = func_00195540_u32(*(u32 *)(DAT_007ce3ec + 0xd1c));
  iVar1 = *(int *)(iVar1 + 4);
  uVar2 = func_00300550_u32(*(u32 *)(*(int *)(iVar1 + 0x30) + 0xa2c));
  lVar4 = 0;
  switch (param_1) {
  case 1:
    if ((uVar2 & 0x20) != 0) {
      lVar4 = 0xcd;
    }
    else if ((uVar2 & 0x40) != 0) {
      lVar4 = 0xce;
    }
    break;
  case 2:
    if ((uVar2 & 0x20) != 0) {
      lVar4 = 0xcd;
    }
    else if ((uVar2 & 0x40) != 0) {
      lVar4 = 0xce;
    }
    else if ((uVar2 & 4) != 0) {
      lVar4 = 0xd0;
    }
    break;
  case 3:
    if ((uVar2 & 0x20) != 0) {
      lVar4 = 0xcd;
    }
    else if ((uVar2 & 0x40) != 0) {
      lVar4 = 0xce;
    }
    else {
      lVar3 = func_002d5550();
      if (lVar3 == 0x1ad) {
        lVar4 = 0xd1;
      }
    }
    break;
  case 5:
    lVar4 = 0xd6;
    break;
  case 6:
  case 0xc:
    if (func_002c1ce0_u32(iVar1,0) == 0) {
      lVar4 = 0xd7;
    }
    break;
  }
  if (lVar4 != 0) {
    func_001fea10(*(u32 *)(DAT_007ce3ec + 0xba0),lVar4);
  }
  return;
}

// FUN_002bf850

void func_002bf850(void)

{
  func_002bf690(1);
  return;
}

// FUN_002bf880

void func_002bf880(void)

{
  func_002bf690(6);
  return;
}

// FUN_002bf8b0

void func_002bf8b0(void)

{
  func_002bf690(2);
  return;
}

// FUN_002bf8e0

void func_002bf8e0(void)

{
  func_002bf690(3);
  return;
}

// FUN_002bf910

void func_002bf910(void)

{
  func_002bf690(5);
  return;
}

// FUN_002bf940

void func_002bf940(void)

{
  func_002bf690(7);
  return;
}

// FUN_002bf970

void func_002bf970(void)

{
  return;
}

// FUN_002bf980

void func_002bf980(void)

{
  return;
}

// FUN_002bf990

void func_002bf990(void)

{
  return;
}

// FUN_002bf9a0

void func_002bf9a0(void)

{
  return;
}

// FUN_002bf9b0

void func_002bf9b0(void)

{
  int entry = 0;
  u32 alpha = 0;
  u32 listIndex = 0;
  float firstZero;
  float zero;
  u32 callColor;

  if ((((*(int *)(DAT_007ce3ec + 0x2b4) != 0x12) &&
        (btlFadeSuppressesFormationUpdates() == 0)) &&
       ((*(u32 *)(DAT_007ce3ec + 0x14) & 4) == 0)) &&
      ((*(u32 *)(DAT_007ce3ec + 0xc) & 0x800) != 0)) {
    for (listIndex = 0; listIndex < 4; listIndex = listIndex + 1) {
      for (entry = *(int *)(DAT_007ce3ec + listIndex * 8 + 0x150); entry != 0;
           entry = *(int *)(entry + 0xa34)) {
        if (*(int *)(entry + 0xa2c) != 0) {
          zero = 0.0f;
          if (*(u8 *)(entry + 0x37) != 0) {
            alpha = 0xff;
          }
          else {
            alpha = 0;
          }
          firstZero = zero;
          callColor = alpha | 0xb4736400;
          func_002bce10_reordered(entry, firstZero, zero, callColor,
                                  (float *)((u8 *)(uintptr_t)entry + 0xa04));
        }
      }
    }
  }
  return;
}

// FUN_002bfab0

u32 func_002bfab0(void)

{
  func_001ff3b0();
  return 1;
}

// FUN_002bfae0

void func_002bfae0(void)

{
  int iVar1 = 0;
  
  iVar1 = func_0027ec10(0x50c,0);
  *(u32 *)(iVar1 + 0x6c) = (u32)func_002bfab0;
}

// FUN_002bfb20

u32 func_002bfb20(void)

{
  func_001ff390();
  return 1;
}

// FUN_002bfb50

void func_002bfb50(void)

{
  int iVar1 = 0;
  
  iVar1 = func_0027ec10(0x50d,0);
  *(u32 *)(iVar1 + 0x6c) = (u32)func_002bfb20;
}

// FUN_002bfb90

u32 func_002bfb90(int *param_1)

{
  long lVar1 = 0;
  
  if (*param_1 == 0) {
    func_001fe5f0();
    *param_1 = 1;
  }
  else {
    lVar1 = func_001fe630();
    if (lVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

// FUN_002bfc00

void func_002bfc00(void)

{
  int iVar1 = 0;
  
  iVar1 = func_0027ec10(0x508,4);
  *(u8 *)(iVar1 + 0x47) = *(u8 *)(iVar1 + 0x47) & 0xfe;
  *(code *)(iVar1 + 0x6c) = (code)func_002bfb90;
  **(u32 **)(iVar1 + 0x78) = 0;
  return;
}

// FUN_002bfc50

void func_002bfc50(void)

{
  func_0045a430();
  return;
}

// FUN_002bfc70

void func_002bfc70(void)

{
  func_0045af70();
  return;
}

// FUN_002bfc90

void func_002bfc90(void)

{
  func_0045af40();
  return;
}

/* W322 probe: func_002bfcb0 with opt_loop_invariants on improved normalized_diff 479 -> 446 (object 688/688). */
#pragma opt_loop_invariants on
// FUN_002bfcb0

asm void func_002bfcb0(int param_1,void *param_2,u32 param_3,u32 param_4,int param_5)
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
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0a82d
  .word 0x00e0b02d
  .word 0x0100902d
  .word 0x0260202d
  .word 0x0000282d
  .word 0x24060030
  .word 0x0c148502
  .word 0x00000000
  .word 0xa6600038
  .word 0xa660003a
  .word 0xa260003c
  .word 0x9263003c
  .word 0x34630001
  .word 0xa263003c
  .word 0x12800012
  .word 0x00000000
  .word 0x8e830030
  .word 0x906400a2
  .word 0x24030001
  .word 0x10830009
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x3071ffff
  .word 0x64100002
  .word 0x10000007
  .word 0x00000000
  .word 0x64110002
  .word 0x3070ffff
  .word 0x10000003
  .word 0x00000000
  .word 0x64110001
  .word 0x64100002
  .word 0x0000282d
  .word 0x32a400ff
  .word 0x30830001
  .word 0x10600003
  .word 0x00000000
  .word 0x00b11825
  .word 0x3065ffff
  .word 0x30830002
  .word 0x10600003
  .word 0x00000000
  .word 0x00b01825
  .word 0x3065ffff
  .word 0x30830004
  .word 0x10600003
  .word 0x00000000
  .word 0x34a30004
  .word 0x3065ffff
  .word 0x32c400ff
  .word 0x30830001
  .word 0x10600006
  .word 0x00000000
  .word 0xae740000
  .word 0x24030001
  .word 0xa6630038
  .word 0x10000054
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x8c75014c
  .word 0x30b1ffff
  .word 0x32360004
  .word 0x30970002
  .word 0x309e0004
  .word 0x30830008
  .word 0x7fa300a0
  .word 0x10000048
  .word 0x00000000
  .word 0x12800005
  .word 0x00000000
  .word 0x96a3001a
  .word 0x30630008
  .word 0x10600041
  .word 0x00000000
  .word 0x96a3001a
  .word 0x30630001
  .word 0x1060003d
  .word 0x00000000
  .word 0x8eb00030
  .word 0x920400a2
  .word 0x24030002
  .word 0x10830005
  .word 0x00000000
  .word 0x8e03009c
  .word 0x30630008
  .word 0x10600034
  .word 0x00000000
  .word 0x24030001
  .word 0x00831804
  .word 0x02231824
  .word 0x1060002f
  .word 0x00000000
  .word 0x16c00026
  .word 0x00000000
  .word 0x12e00003
  .word 0x00000000
  .word 0x12950029
  .word 0x00000000
  .word 0x17c00007
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x14400021
  .word 0x00000000
  .word 0x7ba300a0
  .word 0x10600009
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x3c050010
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x14400011
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x1240000d
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x8c85000c
  .word 0x3c03ffef
  .word 0x3463ffff
  .word 0x00a31824
  .word 0x1060000d
  .word 0x00000000
  .word 0x0240282d
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x96630038
  .word 0x00031880
  .word 0x02631821
  .word 0xac750000
  .word 0x96630038
  .word 0x24630001
  .word 0xa6630038
  .word 0x8eb504a8
  .word 0x16a0ffb8
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
#pragma opt_loop_invariants off

// FUN_002bff60

u8 func_002bff60(u64 param_1,long param_2,u32 original,long param_4)

{
  u32 effect;
  int iVar3;
  u32 bVar4;
  
  if (param_2 != 0) {
    iVar3 = (original & 0xffff) * 0x2c;
    effect = DAT_007ce3f8[iVar3 + 9];
    bVar4 = DAT_007ce3f8[iVar3 + 10];
    if (param_4 != 0) {
      param_4 = (u8)effect;
      if (((param_4 & 1) != 0) && ((param_4 & 2) == 0)) {
        effect = (u8)(effect & 0xfe);
        effect = (u8)(effect | 2);
      }
      else if (((param_4 & 2) != 0) && ((param_4 & 1) == 0)) {
        effect = (u8)(effect & 0xfd);
        effect = (u8)(effect | 1);
      }
      if (((u8)bVar4 & 1) != 0) {
        bVar4 = (u8)(bVar4 & 0xfe);
        bVar4 = (u8)(bVar4 | 2);
      }
    }
    func_002bfcb0_u64call(param_1,param_2,effect,bVar4,*(u16 *)(iVar3 + (int)DAT_007ce3f8 + 0xc));
  }
  return DAT_007ce3f8[(original & 0xffff) * 0x2c + 8];
}

/* W322 probe: func_002c0070 with opt_loop_invariants on improved normalized_diff 1574 -> 1570 (object 1988/2064). */
#pragma opt_loop_invariants on
/* W357 measured func_002c0070: opt_lifetimes on stacked with existing opt_loop_invariants on, nd1570/1988B -> nd1565/1988B; window 2064B. */
#pragma opt_lifetimes on
/* BtlCore2 W419 negative: absolute aliases for c0070 DAT_007e095{2,4,8,a} worsened nd1565->1604 and grew 1988->2028B (window2064); per-symbol probes also worsened nd1577-1588. */
// FUN_002c0070

asm void func_002c0070(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdfea0
  .word 0xffbf0070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x00a0a02d
  .word 0x94a60038
  .word 0x28c10002
  .word 0x142001eb
  .word 0x00000000
  .word 0x3c03007e
  .word 0x94670952
  .word 0x30e32000
  .word 0x14600006
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9465095a
  .word 0x30a32000
  .word 0x1060000e
  .word 0x00000000
  .word 0x64030001
  .word 0x3c05007e
  .word 0x94a5094e
  .word 0x30a52000
  .word 0x0005902b
  .word 0x16400005
  .word 0x00000000
  .word 0x3c05007e
  .word 0x94a50958
  .word 0x30a52000
  .word 0x0005902b
  .word 0x1000003c
  .word 0x00000000
  .word 0x30e38000
  .word 0x14600004
  .word 0x00000000
  .word 0x30a38000
  .word 0x1060000e
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c05007e
  .word 0x94a5094e
  .word 0x30a58000
  .word 0x0005902b
  .word 0x16400005
  .word 0x00000000
  .word 0x3c05007e
  .word 0x94a50958
  .word 0x30a58000
  .word 0x0005902b
  .word 0x10000029
  .word 0x00000000
  .word 0x30e31000
  .word 0x14600004
  .word 0x00000000
  .word 0x30a31000
  .word 0x1060000e
  .word 0x00000000
  .word 0x64030002
  .word 0x3c05007e
  .word 0x94a5094e
  .word 0x30a51000
  .word 0x0005902b
  .word 0x16400005
  .word 0x00000000
  .word 0x3c05007e
  .word 0x94a50958
  .word 0x30a51000
  .word 0x0005902b
  .word 0x10000016
  .word 0x00000000
  .word 0x30e34000
  .word 0x14600004
  .word 0x00000000
  .word 0x30a34000
  .word 0x1060000e
  .word 0x00000000
  .word 0x64030003
  .word 0x3c05007e
  .word 0x94a5094e
  .word 0x30a54000
  .word 0x0005902b
  .word 0x16400005
  .word 0x00000000
  .word 0x3c05007e
  .word 0x94a50958
  .word 0x30a54000
  .word 0x0005902b
  .word 0x10000003
  .word 0x00000000
  .word 0x10000199
  .word 0x00000000
  .word 0x3070ffff
  .word 0x24030003
  .word 0x120300eb
  .word 0x00000000
  .word 0x24030002
  .word 0x120300e8
  .word 0x00000000
  .word 0x12000006
  .word 0x00000000
  .word 0x24030001
  .word 0x12030003
  .word 0x00000000
  .word 0x10000183
  .word 0x00000000
  .word 0x8c840030
  .word 0x27a50130
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b027c
  .word 0x00000000
  .word 0x3044ffff
  .word 0x0000282d
  .word 0x27a60120
  .word 0x0000382d
  .word 0x0000402d
  .word 0x24090001
  .word 0x0c0a021c
  .word 0x00000000
  .word 0xc7a30130
  .word 0xe7a30110
  .word 0xc7a20138
  .word 0xe7a20114
  .word 0xc7a10120
  .word 0xe7a10118
  .word 0xc7a00128
  .word 0xe7a0011c
  .word 0x46011841
  .word 0xe7a10148
  .word 0x46001001
  .word 0xe7a0014c
  .word 0xe7a00140
  .word 0x46000807
  .word 0xe7a00144
  .word 0x27a40140
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0x0000982d
  .word 0x0000a82d
  .word 0x10000047
  .word 0x00000000
  .word 0x32a2ffff
  .word 0x00021080
  .word 0x02821021
  .word 0x8c510000
  .word 0x8e240030
  .word 0x27a50130
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc7a00130
  .word 0xe7a00158
  .word 0xc7a00138
  .word 0xe7a0015c
  .word 0x27a40110
  .word 0x27a50118
  .word 0x27a60158
  .word 0x27a70150
  .word 0x0c0b47f4
  .word 0x00000000
  .word 0x46000506
  .word 0xc7a10158
  .word 0xc7a00150
  .word 0x46000801
  .word 0xe7a00148
  .word 0xc7a1015c
  .word 0xc7a00154
  .word 0x46000801
  .word 0xe7a0014c
  .word 0x27a40148
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a30148
  .word 0xc7a20140
  .word 0xc7a1014c
  .word 0xc7a00144
  .word 0x4600081a
  .word 0x44800000
  .word 0x4602185c
  .word 0x46010034
  .word 0x4501000a
  .word 0x00000000
  .word 0x3263ffff
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x005d1021
  .word 0x24420080
  .word 0xe4540008
  .word 0x10000009
  .word 0x00000000
  .word 0x3263ffff
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x005d1021
  .word 0x24420080
  .word 0x4600a007
  .word 0xe4400008
  .word 0x3263ffff
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x005d1021
  .word 0x24420080
  .word 0xac510000
  .word 0xa4550004
  .word 0x26620001
  .word 0x3053ffff
  .word 0x26a20001
  .word 0x3055ffff
  .word 0x32a3ffff
  .word 0x96820038
  .word 0x0062102a
  .word 0x1440ffb6
  .word 0x00000000
  .word 0x3271ffff
  .word 0x2623ffff
  .word 0x24060001
  .word 0x0000502d
  .word 0x0000102d
  .word 0x10000020
  .word 0x00000000
  .word 0x00052040
  .word 0x00852021
  .word 0x00042080
  .word 0x009d2021
  .word 0x24870080
  .word 0x3045ffff
  .word 0x00052040
  .word 0x00852021
  .word 0x00042080
  .word 0x009d2021
  .word 0x24890080
  .word 0x25280008
  .word 0xc5210008
  .word 0xc4e00014
  .word 0x46000834
  .word 0x4500000d
  .word 0x00000000
  .word 0x8d270000
  .word 0x95250004
  .word 0x8d24000c
  .word 0xad240000
  .word 0x95240010
  .word 0xa5240004
  .word 0xc5200014
  .word 0xe5000000
  .word 0xad27000c
  .word 0xa5250010
  .word 0xe5210014
  .word 0x00c0502d
  .word 0x24420001
  .word 0x3042ffff
  .word 0x3045ffff
  .word 0x00a3202a
  .word 0x1480ffde
  .word 0x00000000
  .word 0x1540ffd8
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b0220
  .word 0x00000000
  .word 0x0000302d
  .word 0x1000000b
  .word 0x00000000
  .word 0x30c5ffff
  .word 0x00051840
  .word 0x00651821
  .word 0x00031880
  .word 0x007d1821
  .word 0x8c630080
  .word 0x10620007
  .word 0x00000000
  .word 0x24c30001
  .word 0x3066ffff
  .word 0x30c4ffff
  .word 0x0091182a
  .word 0x1460fff3
  .word 0x00000000
  .word 0x24030001
  .word 0x16030015
  .word 0x00000000
  .word 0x24830001
  .word 0x1471000a
  .word 0x00000000
  .word 0x12400004
  .word 0x00000000
  .word 0x97a30084
  .word 0x10000002
  .word 0x00000000
  .word 0x9683003a
  .word 0x3073ffff
  .word 0x100000c3
  .word 0x00000000
  .word 0x3064ffff
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x007d1821
  .word 0x94730084
  .word 0x100000bb
  .word 0x00000000
  .word 0x1480000e
  .word 0x00000000
  .word 0x12400008
  .word 0x00000000
  .word 0x00111840
  .word 0x00711821
  .word 0x00031880
  .word 0x007d1821
  .word 0x94630078
  .word 0x10000002
  .word 0x00000000
  .word 0x9683003a
  .word 0x3073ffff
  .word 0x100000ac
  .word 0x00000000
  .word 0x2483ffff
  .word 0x3064ffff
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x007d1821
  .word 0x94730084
  .word 0x100000a3
  .word 0x00000000
  .word 0x0000282d
  .word 0x0000202d
  .word 0x8f83b6fc
  .word 0x10000026
  .word 0x00000000
  .word 0x3087ffff
  .word 0x00073880
  .word 0x02873821
  .word 0x8ce90000
  .word 0x9527001a
  .word 0x30e70001
  .word 0x10e0001c
  .word 0x00000000
  .word 0x8d280030
  .word 0x910700a2
  .word 0x14e00018
  .word 0x00000000
  .word 0x0000502d
  .word 0x8c6b0154
  .word 0x10000006
  .word 0x00000000
  .word 0x11680007
  .word 0x00000000
  .word 0x25470001
  .word 0x30eaffff
  .word 0x8d6b0a30
  .word 0x00000000
  .word 0x1560fff9
  .word 0x00000000
  .word 0x30a8ffff
  .word 0x00083840
  .word 0x00e83821
  .word 0x00073880
  .word 0x00fd3821
  .word 0x24e70080
  .word 0xace90000
  .word 0xa4e40004
  .word 0xa4ea0006
  .word 0x24a50001
  .word 0x30a5ffff
  .word 0x24840001
  .word 0x3084ffff
  .word 0x3087ffff
  .word 0x00e6382a
  .word 0x14e0ffd8
  .word 0x00000000
  .word 0x30b1ffff
  .word 0x1220007a
  .word 0x00000000
  .word 0x2a220002
  .word 0x1440002c
  .word 0x00000000
  .word 0x2624ffff
  .word 0x24070001
  .word 0x0000102d
  .word 0x0000182d
  .word 0x10000020
  .word 0x00000000
  .word 0x00062840
  .word 0x00a62821
  .word 0x00052880
  .word 0x00bd2821
  .word 0x24aa0080
  .word 0x3066ffff
  .word 0x00062840
  .word 0x00a62821
  .word 0x00052880
  .word 0x00bd2821
  .word 0x24a90080
  .word 0x25280006
  .word 0x95260006
  .word 0x95450012
  .word 0x00c5082a
  .word 0x1020000d
  .word 0x00000000
  .word 0x8d250000
  .word 0x95330004
  .word 0x8d22000c
  .word 0xad220000
  .word 0x95220010
  .word 0xa5220004
  .word 0x95220012
  .word 0xa5020000
  .word 0xad25000c
  .word 0xa5330010
  .word 0xa5260012
  .word 0x00e0102d
  .word 0x24630001
  .word 0x3063ffff
  .word 0x3066ffff
  .word 0x00c4282a
  .word 0x14a0ffde
  .word 0x00000000
  .word 0x1440ffd8
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b0220
  .word 0x00000000
  .word 0x0000302d
  .word 0x1000000b
  .word 0x00000000
  .word 0x30c5ffff
  .word 0x00051840
  .word 0x00651821
  .word 0x00031880
  .word 0x007d1821
  .word 0x8c630080
  .word 0x10620007
  .word 0x00000000
  .word 0x24c30001
  .word 0x3066ffff
  .word 0x30c4ffff
  .word 0x0091182a
  .word 0x1460fff3
  .word 0x00000000
  .word 0x1091002e
  .word 0x00000000
  .word 0x24030002
  .word 0x16030015
  .word 0x00000000
  .word 0x24830001
  .word 0x1471000a
  .word 0x00000000
  .word 0x12400004
  .word 0x00000000
  .word 0x97a30084
  .word 0x10000002
  .word 0x00000000
  .word 0x9683003a
  .word 0x3073ffff
  .word 0x1000001f
  .word 0x00000000
  .word 0x3064ffff
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x007d1821
  .word 0x94730084
  .word 0x10000017
  .word 0x00000000
  .word 0x1480000e
  .word 0x00000000
  .word 0x12400008
  .word 0x00000000
  .word 0x00111840
  .word 0x00711821
  .word 0x00031880
  .word 0x007d1821
  .word 0x94630078
  .word 0x10000002
  .word 0x00000000
  .word 0x9683003a
  .word 0x3073ffff
  .word 0x10000008
  .word 0x00000000
  .word 0x2483ffff
  .word 0x3064ffff
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x007d1821
  .word 0x94730084
  .word 0x9684003a
  .word 0x3263ffff
  .word 0x10830005
  .word 0x00000000
  .word 0xa693003a
  .word 0x9283003c
  .word 0x34630001
  .word 0xa283003c
  .word 0xdfbf0070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0160
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_lifetimes off
#pragma opt_loop_invariants off

// FUN_002c0880

u32 func_002c0880(int param_1)

{
  return *(u32 *)(param_1 + (u32)*(u16 *)(param_1 + 0x3a) * 4);
}

// FUN_002c08a0

void func_002c08a0(int param_1,u64 *param_2)

{
  *(u64 *)(param_1 + 0x30) = *param_2;
  return;
}

// FUN_002c08b0

void func_002c08b0(int param_1,int param_2)

{
  *(u64 *)(param_1 + 0x30) = *(u64 *)(param_2 + 0x30);
  return;
}

// FUN_002c08c0 MATCHING

long *func_002c08c0(int param_1)
{
  long *entry;
  int unit;
  
  for (entry = *(long **)(iGpffffb6fc + 0x14c); entry != 0;
       entry = *(long **)(entry + 0x95)) {
    if ((*(u16 *)((int)entry + 0x1a) & 1) == 0) {
      continue;
    }
    if ((*(u16 *)((int)entry + 0x1a) & 8) == 0) {
      continue;
    }
    unit = *(int *)((int)entry[6] + 0xa2c);
    if (unit != 0 && func_0030b5a0_u32(unit, 0) != 0) {
      continue;
    }
    if (*entry != *(long *)(param_1 + 0x30)) {
      continue;
    }
    return entry;
  }
  return 0;
}

/* Removing this loses func_002c0970 (MATCH nd0 -> MISMATCH nd12) - measured W161. */
/* Removing this loses FUN_002c09f0 (MATCH nd0 -> MISMATCH nd50) - measured W161. */
// FUN_002c0970
#pragma opt_loop_invariants on
#pragma opt_common_subs off

u32 func_002c0970(int param_1)

{
  s32 count;
  s32 index;
  u64 target;

  *(u16 *)(param_1 + 0x3a) = 0;
  target = *(u64 *)(param_1 + 0x30);
  if (target == 0) {
    return 0;
  }
  index = 0;
  count = *(u16 *)(param_1 + 0x38);
  for (; (index & 0xffff) < count; index = (u16)(index + 1)) {
    if (target == **(u64 **)(param_1 + (u16)index * 4)) {
      *(u16 *)(param_1 + 0x3a) = index;
      return 1;
    }
  }
  return 0;
}
#pragma opt_common_subs on

// FUN_002c09f0

u32 func_002c09f0(int param_1)
{
  u32 result;
  u16 count;
  s32 index;
  u32 bit;

  result = 0;
  index = 0;
  count = *(u16 *)(param_1 + 0x38);
  bit = 1;
  for (; (index & 0xffff) < count; index = (u16)(index + 1)) {
    u8 genus = *(u8 *)(*(int *)(*(int *)(param_1 + (u16)index * 4) + 0x30) + 0xa2);
    result = (result | ((bit << genus) & 0xffff)) & 0xffff;
  }
  return result;
}
#pragma opt_loop_invariants off

// FUN_002c0a50

void func_002c0a50(u32 param_1,u16 param_2)
{
  extern void *func_0029a1d0(u32);
  extern void *func_00289030(u32);
  char *destination;
  char *source;

  destination = (char *)func_0029a1d0(param_1);
  param_1 = (u32)func_00289030(param_2);
  if (param_1 == 0) {
    return;
  }
  source = (char *)func_0029a1d0(param_1);
  if (source == 0) {
    return;
  }
  *(u64 *)(destination + 0xb8) = *(u64 *)source;
}

/* W357 measured func_002c0ac0: opt_lifetimes on nd574/824B -> nd572/824B; window 880B. */
#pragma opt_lifetimes on
// FUN_002c0ac0

asm void func_002c0ac0(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0802d
  .word 0x94a30038
  .word 0x28610002
  .word 0x142000c7
  .word 0x00000000
  .word 0x9485006c
  .word 0x24030002
  .word 0x10a30009
  .word 0x00000000
  .word 0x24030003
  .word 0x10a30006
  .word 0x00000000
  .word 0x24030001
  .word 0x10a30003
  .word 0x00000000
  .word 0x100000bb
  .word 0x00000000
  .word 0x9484006e
  .word 0x00041880
  .word 0x00641821
  .word 0x00031840
  .word 0x00641821
  .word 0x00038880
  .word 0x8f85b708
  .word 0x02252021
  .word 0x90830008
  .word 0x146000b0
  .word 0x00000000
  .word 0x90840018
  .word 0x24030002
  .word 0x1483001e
  .word 0x00000000
  .word 0x24a3001c
  .word 0x00711821
  .word 0x8c730000
  .word 0x12600019
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000011
  .word 0x00000000
  .word 0x3242ffff
  .word 0x00021080
  .word 0x02021021
  .word 0x8c420000
  .word 0x8c420030
  .word 0x8c440a2c
  .word 0x0260282d
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0xa612003a
  .word 0x10000096
  .word 0x00000000
  .word 0x26430001
  .word 0x3072ffff
  .word 0x3244ffff
  .word 0x96030038
  .word 0x0083182a
  .word 0x1460ffec
  .word 0x00000000
  .word 0x8f83b708
  .word 0x24630020
  .word 0x00711821
  .word 0x8c730000
  .word 0x12600019
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000011
  .word 0x00000000
  .word 0x3242ffff
  .word 0x00021080
  .word 0x02021021
  .word 0x8c420000
  .word 0x8c420030
  .word 0x8c440a2c
  .word 0x0260282d
  .word 0x0c0c0728
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0xa612003a
  .word 0x10000078
  .word 0x00000000
  .word 0x26430001
  .word 0x3072ffff
  .word 0x3244ffff
  .word 0x96030038
  .word 0x0083182a
  .word 0x1460ffec
  .word 0x00000000
  .word 0x8f83b708
  .word 0x02231821
  .word 0x90640011
  .word 0x2403000f
  .word 0x1083000f
  .word 0x00000000
  .word 0x2403000b
  .word 0x1083000c
  .word 0x00000000
  .word 0x24030009
  .word 0x10830009
  .word 0x00000000
  .word 0x24030005
  .word 0x10830006
  .word 0x00000000
  .word 0x24030002
  .word 0x10830003
  .word 0x00000000
  .word 0x10000026
  .word 0x00000000
  .word 0x3403ffff
  .word 0x3074ffff
  .word 0x2413ffff
  .word 0x0000902d
  .word 0x10000013
  .word 0x00000000
  .word 0x3242ffff
  .word 0x00021080
  .word 0x02021021
  .word 0x8c420000
  .word 0x8c420030
  .word 0x8c440a2c
  .word 0x0c0bff5c
  .word 0x00000000
  .word 0x3044ffff
  .word 0x3283ffff
  .word 0x0083082a
  .word 0x10200004
  .word 0x00000000
  .word 0x0080a02d
  .word 0x00129c3c
  .word 0x00139c3f
  .word 0x26430001
  .word 0x3072ffff
  .word 0x3244ffff
  .word 0x96030038
  .word 0x0083182a
  .word 0x1460ffea
  .word 0x00000000
  .word 0x0013243c
  .word 0x0004243f
  .word 0x2403ffff
  .word 0x10830004
  .word 0x00000000
  .word 0xa613003a
  .word 0x10000038
  .word 0x00000000
  .word 0x8f83b708
  .word 0x02231821
  .word 0x90640014
  .word 0x2403000f
  .word 0x1083000f
  .word 0x00000000
  .word 0x2403000b
  .word 0x1083000c
  .word 0x00000000
  .word 0x24030009
  .word 0x10830009
  .word 0x00000000
  .word 0x24030005
  .word 0x10830006
  .word 0x00000000
  .word 0x24030002
  .word 0x10830003
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x3403ffff
  .word 0x3073ffff
  .word 0x2411ffff
  .word 0x0000902d
  .word 0x10000013
  .word 0x00000000
  .word 0x3242ffff
  .word 0x00021080
  .word 0x02021021
  .word 0x8c420000
  .word 0x8c420030
  .word 0x8c440a2c
  .word 0x0c0bff60
  .word 0x00000000
  .word 0x3044ffff
  .word 0x3263ffff
  .word 0x0083082a
  .word 0x10200004
  .word 0x00000000
  .word 0x0080982d
  .word 0x00128c3c
  .word 0x00118c3f
  .word 0x26430001
  .word 0x3072ffff
  .word 0x3244ffff
  .word 0x96030038
  .word 0x0083182a
  .word 0x1460ffea
  .word 0x00000000
  .word 0x0011243c
  .word 0x0004243f
  .word 0x2403ffff
  .word 0x10830002
  .word 0x00000000
  .word 0xa611003a
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
#pragma opt_lifetimes off

// FUN_002c0e30
int func_002c0e30(short param_1,u32 param_2,u32 param_3)
{
  extern int func_0030b5a0(u32,u32);
  extern int func_00300580(u32,u32);
  u32 statusMask;
  int unit;
  u32 sideMask;
  u32 activeOnly;
  u32 id;
  int data;

  statusMask = param_3;
  unit = *(int *)(DAT_007ce3ec + 0x14c);
  sideMask = param_2 & 0xffff;
  activeOnly = statusMask & 0x80000;
  id = (u16)param_1;
  while (unit != 0) {
    if (((*(u16 *)(unit + 0x1a) & 1) != 0) &&
        ((*(u16 *)(unit + 0x1a) & 8) != 0)) {
      data = *(int *)(unit + 0x30);
      if ((sideMask & (1 << *(u8 *)(data + 0xa2))) != 0) {
        if ((activeOnly == 0 || func_0030b5a0(*(u32 *)(data + 0xa2c),0) == 0) &&
            func_00300580(*(u32 *)(data + 0xa2c),statusMask) == 0 &&
            *(u16 *)(data + 0xa4) == id)
          return unit;
      }
    }
    unit = *(int *)(unit + 0x4a8);
  }
  return 0;
}

// FUN_002c0f40

u16 func_002c0f40(int param_1,u32 param_2,u32 param_3,u32 param_4,
                 u32 param_5,FormationPredicate param_6,int *param_7)
{
  struct {
    int entries[14];
    u16 count;
    u16 selected;
  } candidates;
  int unit;
  u16 index;
  u16 result;

  func_002bfcb0_ptr(param_1,&candidates,param_4,0,0);
  result = 0;
  index = 0;
  while (index < candidates.count) {
    unit = candidates.entries[index];
    if (((*(u16 *)(unit + 0x1a) & 1) != 0) &&
        ((*(u16 *)(unit + 0x1a) & 8) != 0) &&
        (func_00300580(*(u32 *)(*(int *)(unit + 0x30) + 0xa2c),param_3) == 0) &&
        ((*param_6)(unit,param_2) != param_5)) {
      if (param_7 != 0) {
        param_7[result] = unit;
      }
      result++;
    }
    index++;
  }
  return result;
}

// FUN_002c1080

u32
asm func_002c1080(int param_1,u32 param_2,u32 param_3,u32 param_4,u16 param_5,
            code *param_6)
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
  .word 0x00a0882d
  .word 0x00e0802d
  .word 0xafa900cc
  .word 0x8f82b6fc
  .word 0x8c55014c
  .word 0x30d4ffff
  .word 0x3113ffff
  .word 0x32760001
  .word 0x32770002
  .word 0x327e000c
  .word 0x32620004
  .word 0x7fa200b0
  .word 0x3c020008
  .word 0x02021024
  .word 0x7fa200a0
  .word 0x1000006e
  .word 0x00000000
  .word 0x96a3001a
  .word 0x30620001
  .word 0x10400069
  .word 0x00000000
  .word 0x30620008
  .word 0x10400066
  .word 0x00000000
  .word 0x8eb20030
  .word 0x924300a2
  .word 0x24020001
  .word 0x00621004
  .word 0x02821024
  .word 0x1040005f
  .word 0x00000000
  .word 0x12600044
  .word 0x00000000
  .word 0x12c00007
  .word 0x00000000
  .word 0x8e440a2c
  .word 0x3c050010
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x10400055
  .word 0x00000000
  .word 0x12e00022
  .word 0x00000000
  .word 0x0011243c
  .word 0x0004243f
  .word 0x0c0c2030
  .word 0x00000000
  .word 0x3c03000e
  .word 0x34630001
  .word 0x00431824
  .word 0x14600019
  .word 0x00000000
  .word 0x3043000e
  .word 0x1060000b
  .word 0x00000000
  .word 0x8e440a2c
  .word 0x24050011
  .word 0x0c0c05d4
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x1840000e
  .word 0x00000000
  .word 0x1000003d
  .word 0x00000000
  .word 0x30420100
  .word 0x14400009
  .word 0x00000000
  .word 0x8e440a2c
  .word 0x24050012
  .word 0x0c0c05d4
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x1c400032
  .word 0x00000000
  .word 0x13c00017
  .word 0x00000000
  .word 0x924300a2
  .word 0x24020001
  .word 0x14620013
  .word 0x00000000
  .word 0x00112c3c
  .word 0x00052c3f
  .word 0x02a0202d
  .word 0x0c0b8cd4
  .word 0x00000000
  .word 0x1440000c
  .word 0x00000000
  .word 0x964400a4
  .word 0x0c05ec98
  .word 0x00000000
  .word 0x14400007
  .word 0x00000000
  .word 0x7ba200b0
  .word 0x1440001d
  .word 0x00000000
  .word 0x24020001
  .word 0x1000001e
  .word 0x00000000
  .word 0x7ba200a0
  .word 0x10400007
  .word 0x00000000
  .word 0x8e440a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x14400011
  .word 0x00000000
  .word 0x8e440a2c
  .word 0x0200282d
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x1440000b
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0220282d
  .word 0x8fa200cc
  .word 0x0040f809
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000005
  .word 0x00000000
  .word 0x8eb504a8
  .word 0x16a0ff92
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
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_002c12f0

bool func_002c12f0(int param_1,int param_2)

{
  u32 uVar2 = 0;
  u32 uVar1 = 0;
  
  uVar1 = *(u16 *)(*(int *)(*(int *)(param_1 + 0x30) + 0xa2c) + 8);
  uVar2 = func_002ffdf0(*(u32 *)(*(int *)(param_1 + 0x30) + 0xa2c));
  return (u32)uVar1 * 100 <= (uVar2 & 0xffff) * param_2;
}

// FUN_002c1360

u32 func_002c1360(int param_1,int param_2)

{
  u32 uVar2 = 0;
  u32 uVar1 = 0;
  
  uVar1 = *(u16 *)(*(int *)(*(int *)(param_1 + 0x30) + 0xa2c) + 8);
  uVar2 = func_002ffdf0(*(u32 *)(*(int *)(param_1 + 0x30) + 0xa2c));
  return !((u32)uVar1 * 100 < (uVar2 & 0xffff) * param_2);
}

// FUN_002c13d0

bool func_002c13d0(int param_1,int param_2)

{
  u32 uVar2 = 0;
  u32 uVar1 = 0;
  
  uVar1 = *(u16 *)(*(int *)(*(int *)(param_1 + 0x30) + 0xa2c) + 10);
  uVar2 = func_00300100(*(u32 *)(*(int *)(param_1 + 0x30) + 0xa2c));
  return (u32)uVar1 * 100 <= (uVar2 & 0xffff) * param_2;
}

// FUN_002c1440

void func_002c1440(int param_1,u32 param_2)

{
  func_002c1080(param_1,param_2,1 << *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) & 0xffff,
               0x80000,0,(code *)&func_002c12f0);
  return;
}

#pragma push
/* Removing this loses FUN_002c1490 (MATCH nd0 -> MISMATCH nd44) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c1490
void func_002c1490(int param_1, u32 param_2)
{
    u32 shift;
    if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
        goto nonzero;
    shift = 1;
    goto done;
nonzero:
    shift = 0;
done:
    func_002c1080(param_1, param_2, 1 << (shift & 0xffff) & 0xffff, 0x80000, 0, (code*)&func_002c12f0);
    return;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002c14f0 (MATCH nd0 -> MISMATCH nd44) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c14f0

void func_002c14f0(int param_1, u32 param_2)
{
    u32 shift;
    if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
        goto nonzero;
    shift = 1;
    goto done;
nonzero:
    shift = 0;
done:
    func_002c1080(param_1, param_2, 1 << (shift & 0xffff) & 0xffff, 0x80000, 0, (code*)&func_002c1360);
    return;
}
#pragma pop

// FUN_002c1550

bool func_002c1550(int param_1,u32 param_2)
{
  extern u8 func_002ffcc0(u32);
  u8 level;

  level = func_002ffcc0(*(u32 *)(*(int *)(param_1 + 0x30) + 0xa2c));
  return param_2 <= level;
}

// FUN_002c1590

bool func_002c1590(int param_1,u32 param_2)

{
  u32 uVar1 = 0;
  
  uVar1 = func_002d4cf0(1 << *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) & 0xffff,0x80000);
  return param_2 <= (uVar1 & 0xffff);
}

#pragma push
/* Removing this loses FUN_002c15e0 (MATCH nd0 -> MISMATCH nd49) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c15e0

bool func_002c15e0(int param_1,u32 param_2)

{
  u32 uVar1 = 0;
  u16 genus;
  u32 shift;
  if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
    goto nonzero;
  shift = 1;
  goto done;
nonzero:
  shift = 0;
done:
  genus = shift;
  uVar1 = func_002d4cf0(1 << genus & 0xffff,0x80000);
  return param_2 <= (uVar1 & 0xffff);
}
#pragma pop


// FUN_002c1650

bool func_002c1650(int param_1,u32 param_2)

{
  u32 uVar1 = 0;
  
  uVar1 = func_002d4e10(1 << *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) & 0xffff,0x80000);
  return (uVar1 & 0xffff) <= param_2;
}

#pragma push
/* Removing this loses FUN_002c16a0 (MATCH nd0 -> MISMATCH nd49) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c16a0

bool func_002c16a0(int param_1,u32 param_2)

{
  u32 uVar1 = 0;
  u16 genus;
  {
    u32 shift;
    if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
      goto nonzero;
    shift = 1;
    goto done;
nonzero:
    shift = 0;
done:
    genus = shift;
  }
  uVar1 = func_002d4e10(1 << genus & 0xffff,0x80000);
  return (uVar1 & 0xffff) <= param_2;
}
#pragma pop


// FUN_002c1710

void func_002c1710(int param_1)

{
  func_00300580(*(u32 *)(*(int *)(param_1 + 0x30) + 0xa2c));
  return;
}

// FUN_002c1740

void func_002c1740(int param_1,u32 param_2)

{
  u32 uVar1 = 0;
  
  uVar1 = 1 << *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) & 0xffff;
  if ((param_2 & 0x80000) != 0) {
    func_002c1080(param_1,param_2,uVar1,0,0,(code *)&func_002c1710);
  }
  else {
    func_002c1080(param_1,param_2,uVar1,0x80000,0,(code *)&func_002c1710);
  }
  return;
}

#pragma push
/* Removing this loses FUN_002c17b0 (MATCH nd0 -> MISMATCH nd86) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c17b0

void func_002c17b0(int param_1,u32 param_2)

{
  u32 genus;
  u16 shift;

  {
      u32 branchValue;
      if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
        goto nonzero;
      branchValue = 1;
      goto done;
  nonzero:
      branchValue = 0;
  done:
      genus = branchValue;
    }
  shift = genus;
  if ((param_2 & 0x80000) != 0) {
    func_002c1080(param_1,param_2,1 << shift & 0xffff,0,0,(code *)&func_002c1710);
  }
  else {
    func_002c1080(param_1,param_2,1 << shift & 0xffff,0x80000,0,(code *)&func_002c1710);
  }
  return;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002c1850 (MATCH nd0 -> MISMATCH nd153) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c1850

bool func_002c1850(int param_1,u64 param_2)
{
  u32 genus;
  u16 shift;
  u32 sideMask;
  int entry;
  int unit;

  {
      u32 branchValue;
      if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
        goto nonzero;
      branchValue = 1;
      goto done;
  nonzero:
      branchValue = 0;
  done:
      genus = branchValue;
    }
  shift = genus;
  sideMask = 1 << shift & 0xffff;
  for (entry = *(int *)(iGpffffb6fc + 0x14c); entry != 0; entry = *(int *)(entry + 0x4a8)) {
    if ((*(u16 *)(entry + 0x1a) & 1) == 0) continue;
    if ((*(u16 *)(entry + 0x1a) & 8) == 0) continue;
    unit = *(int *)(entry + 0x30);
    if ((sideMask & 1 << *(u8 *)(unit + 0xa2)) == 0) continue;
    if (func_0030b5a0(*(u32 *)(unit + 0xa2c),0) != 0) continue;
    if (func_00300580(*(u32 *)(unit + 0xa2c),param_2) == 0) break;
  }
  if (entry == 0) return true;
  return false;
}
#pragma pop

// FUN_002c1960

u32 func_002c1960(int param_1,u32 param_2)

{
  int entry;
  int unit;

  for (entry = *(int *)(iGpffffb6fc + 0x14c); entry != 0; entry = *(int *)(entry + 0x4a8)) {
    if (param_1 == entry) {
      continue;
    }
    if ((*(u16 *)(entry + 0x1a) & 1) == 0) {
      continue;
    }
    if ((*(u16 *)(entry + 0x1a) & 8) == 0) {
      continue;
    }
    unit = *(int *)(entry + 0x30);
    if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != *(u8 *)(unit + 0xa2)) {
      continue;
    }
    if (func_00300580(*(u32 *)(unit + 0xa2c),0x80000) != 0) {
      continue;
    }
    if (*(u16 *)(unit + 0xa4) != param_2) {
      continue;
    }
    return 1;
  }
  return 0;
}

#pragma push
/* Removing this loses FUN_002c1a30 (MATCH nd0 -> MISMATCH nd124) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c1a30

u32 func_002c1a30(int param_1,u32 param_2)

{
  u32 selectedSide;
  u32 side;
  int entry;
  int unit;

  {
      if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
        goto nonzero;
      selectedSide = 1;
      goto done;
  nonzero:
      selectedSide = 0;
  done:
      ;
    }
  side = selectedSide & 0xffff;
  for (entry = *(int *)(iGpffffb6fc + 0x14c); entry != 0; entry = *(int *)(entry + 0x4a8)) {
    if ((*(u16 *)(entry + 0x1a) & 1) == 0) {
      continue;
    }
    if ((*(u16 *)(entry + 0x1a) & 8) == 0) {
      continue;
    }
    unit = *(int *)(entry + 0x30);
    if (*(u8 *)(unit + 0xa2) != side) {
      continue;
    }
    if (func_00300580(*(u32 *)(unit + 0xa2c),0x80000) != 0) {
      continue;
    }
    if (*(u16 *)(unit + 0xa4) != param_2) {
      continue;
    }
    return 1;
  }
  return 0;
}
#pragma pop

// FUN_002c1b10

u32 func_002c1b10(int param_1,u32 param_2)

{
  int entry;
  int unit;

  for (entry = *(int *)(iGpffffb6fc + 0x14c); entry != 0; entry = *(int *)(entry + 0x4a8)) {
    if (param_1 == entry) {
      continue;
    }
    if ((*(u16 *)(entry + 0x1a) & 1) == 0) {
      continue;
    }
    if ((*(u16 *)(entry + 0x1a) & 8) == 0) {
      continue;
    }
    unit = *(int *)(entry + 0x30);
    if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != *(u8 *)(unit + 0xa2)) {
      continue;
    }
    if (func_00300580(*(u32 *)(unit + 0xa2c),0x80000) != 0) {
      continue;
    }
    if (func_00301ca0(*(u32 *)(unit + 0xa2c),param_2) == 0) {
      continue;
    }
    return 1;
  }
  return 0;
}

#pragma push
/* Removing this loses FUN_002c1bf0 (MATCH nd0 -> MISMATCH nd135) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c1bf0

u32 func_002c1bf0(int param_1,u32 param_2)

{
  u32 selectedSide;
  u32 side;
  int entry;
  int unit;

  {
      if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
        goto nonzero;
      selectedSide = 1;
      goto done;
  nonzero:
      selectedSide = 0;
  done:
      ;
    }
  side = selectedSide & 0xffff;
  for (entry = *(int *)(iGpffffb6fc + 0x14c); entry != 0; entry = *(int *)(entry + 0x4a8)) {
    if ((*(u16 *)(entry + 0x1a) & 1) == 0) {
      continue;
    }
    if ((*(u16 *)(entry + 0x1a) & 8) == 0) {
      continue;
    }
    unit = *(int *)(entry + 0x30);
    if (*(u8 *)(unit + 0xa2) != side) {
      continue;
    }
    if (func_00300580(*(u32 *)(unit + 0xa2c),0x80000) != 0) {
      continue;
    }
    if (func_00301ca0(*(u32 *)(unit + 0xa2c),param_2) == 0) {
      continue;
    }
    return 1;
  }
  return 0;
}
#pragma pop

// FUN_002c1ce0

bool func_002c1ce0(int param_1,int param_2)

{
  if (func_00300580(*(u32 *)(*(int *)(param_1 + 0x30) + 0xa2c),0x80271) != 0) {
    return false;
  }
  if ((*(u16 *)(param_1 + 0x18) & 0x80) != 0) {
    return false;
  }
  return (*(u32 *)(iGpffffb7b8 +
                   (u32)*(u16 *)(*(int *)(iGpffffb6fc + 0xbbc) + 8) * 0x1c) & 1) != 0;
}

// FUN_002c1d80

u64 func_002c1d80(void)

{
  return 0;
}

// FUN_002c1d90

bool func_002c1d90(int param_1)
{
    bool result;
    u8 genus;

    if (*(int *)(param_1 + 0x20) > 0)
        return false;

    genus = *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2);
    switch (genus) {
    case 0:
        result = *(u16 *)(iGpffffb6fc + 0x1a) == 1;
        break;
    case 1:
        result = *(u16 *)(iGpffffb6fc + 0x1a) == 2;
        break;
    default:
        result = false;
        break;
    }
    return result;
}

// FUN_002c1e10

bool func_002c1e10(int param_1,short param_2)

{
  u32 uVar1 = 0;
  
  uVar1 = func_00306e80(*(u32 *)(*(int *)(param_1 + 0x30) + 0xa2c),param_2);
  return (uVar1 & 0x2000000) != 0;
}

// FUN_002c1e50

bool func_002c1e50(int param_1,short param_2)

{
  u32 uVar1 = 0;
  
  uVar1 = func_00306e80(*(u32 *)(*(int *)(param_1 + 0x30) + 0xa2c),param_2);
  return (uVar1 & 0x4000000) != 0;
}

// FUN_002c1e90

bool func_002c1e90(int param_1,short param_2)

{
  u32 uVar1 = 0;
  
  uVar1 = func_00306e80(*(u32 *)(*(int *)(param_1 + 0x30) + 0xa2c),param_2);
  return (uVar1 & 0x1000000) != 0;
}

// FUN_002c1ed0

bool func_002c1ed0(int param_1,short param_2)

{
  u32 uVar1 = 0;
  
  uVar1 = func_00306e80(*(u32 *)(*(int *)(param_1 + 0x30) + 0xa2c),param_2);
  return (uVar1 & 0x8000000) != 0;
}

// FUN_002c1f10

void func_002c1f10(int param_1,u32 param_2)
{
  func_002c1080(param_1,param_2,1 << *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) & 0xffff,
               0x80000,0,(code *)&func_002c1e10);
  return;
}

#pragma push
/* Removing this loses FUN_002c1f60 (MATCH nd0 -> MISMATCH nd44) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c1f60

void func_002c1f60(int param_1, u32 param_2)
{
    u32 shift;
    {
        if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
            goto nonzero;
        shift = 1;
        goto done;
    nonzero:
        shift = 0;
    done:
        ;
    }
    func_002c1080(param_1, param_2, 1 << (shift & 0xffff) & 0xffff, 0x80000, 0, (code*)&func_002c1e10);
    return;
}
#pragma pop

// FUN_002c1fc0

void func_002c1fc0(int param_1,u32 param_2)
{
  func_002c1080(param_1,param_2,1 << *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) & 0xffff,
               0x80000,0,(code *)&func_002c1e50);
  return;
}

#pragma push
/* Removing this loses FUN_002c2010 (MATCH nd0 -> MISMATCH nd44) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c2010

void func_002c2010(int param_1, u32 param_2)
{
    u32 shift;
    {
        if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
            goto nonzero;
        shift = 1;
        goto done;
    nonzero:
        shift = 0;
    done:
        ;
    }
    func_002c1080(param_1, param_2, 1 << (shift & 0xffff) & 0xffff, 0x80000, 0, (code*)&func_002c1e50);
    return;
}
#pragma pop

// FUN_002c2070

void func_002c2070(int param_1,u32 param_2)
{
  func_002c1080(param_1,param_2,1 << *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) & 0xffff,
               0x80000,0,(code *)&func_002c1e90);
  return;
}

#pragma push
/* Removing this loses FUN_002c20c0 (MATCH nd0 -> MISMATCH nd44) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c20c0

void func_002c20c0(int param_1, u32 param_2)
{
    u32 shift;
    {
        if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
            goto nonzero;
        shift = 1;
        goto done;
    nonzero:
        shift = 0;
    done:
        ;
    }
    func_002c1080(param_1, param_2, 1 << (shift & 0xffff) & 0xffff, 0x80000, 0, (code*)&func_002c1e90);
    return;
}
#pragma pop

// FUN_002c2120

void func_002c2120(int param_1,u32 param_2)
{
  func_002c1080(param_1,param_2,1 << *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) & 0xffff,
               0x80000,0,(code *)&func_002c1ed0);
  return;
}

#pragma push
/* Removing this loses FUN_002c2170 (MATCH nd0 -> MISMATCH nd44) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c2170

void func_002c2170(int param_1, u32 param_2)
{
    u32 shift;
    {
        if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
            goto nonzero;
        shift = 1;
        goto done;
    nonzero:
        shift = 0;
    done:
        ;
    }
    func_002c1080(param_1, param_2, 1 << (shift & 0xffff) & 0xffff, 0x80000, 0, (code*)&func_002c1ed0);
    return;
}
#pragma pop

// FUN_002c21d0

bool func_002c21d0(int param_1,int param_2)

{
  extern s16 func_003082f0(u32,u16);
  s16 sVar1 = 0;
  u32 id = 0;
  
  id = *(u32 *)(*(int *)(param_1 + 0x30) + 0xa2c);
  sVar1 = func_003082f0(id,*(u16 *)(param_1 + 0x7e));
  return sVar1 == param_2;
}

// FUN_002c2220

void func_002c2220(int param_1,u32 param_2)
{
  func_002c1080(param_1,param_2,1 << *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) & 0xffff,
               0x80000,0,(code *)&func_002c21d0);
  return;
}

#pragma push
/* Removing this loses FUN_002c2270 (MATCH nd0 -> MISMATCH nd44) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c2270

void func_002c2270(int param_1, u32 param_2)
{
    u32 shift;
    {
        if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
            goto nonzero;
        shift = 1;
        goto done;
    nonzero:
        shift = 0;
    done:
        ;
    }
    func_002c1080(param_1, param_2, 1 << (shift & 0xffff) & 0xffff, 0x80000, 0, (code*)&func_002c21d0);
    return;
}
#pragma pop

// FUN_002c22d0 MATCHING
bool func_002c22d0(int param_1, int param_2)
{
    bool result;

    switch (*(u16*)(param_1 + 0x7c))
    {
    default:
        result = false;
        break;
    case 1:
    case 2:
        result = *(u16*)(param_1 + 0x7e) == param_2;
        break;
    }
    return result;
}

// FUN_002c2310

void func_002c2310(int param_1,u32 param_2)
{
  func_002c1080(param_1,param_2,1 << *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) & 0xffff,
               0x80000,0,(code *)&func_002c22d0);
  return;
}

#pragma push
/* Removing this loses FUN_002c2360 (MATCH nd0 -> MISMATCH nd44) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c2360

void func_002c2360(int param_1, u32 param_2)
{
    u32 shift;
    {
        if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
            goto nonzero;
        shift = 1;
        goto done;
    nonzero:
        shift = 0;
    done:
        ;
    }
    func_002c1080(param_1, param_2, 1 << (shift & 0xffff) & 0xffff, 0x80000, 0, (code*)&func_002c22d0);
    return;
}
#pragma pop

// FUN_002c23c0

u32 func_002c23c0(int param_1)
{
  u16 result;

  result = func_002bff60_u16(param_1,0,*(u16 *)(param_1 + 0x7e),0);
  switch (result) {
  case 1:
  case 2:
    return 1;
  default:
    return 0;
  }
}

// FUN_002c2420

void func_002c2420(int param_1,u32 param_2)
{
  func_002c1080(param_1,param_2,1 << *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) & 0xffff,
               0x80000,0,(code *)&func_002c23c0);
  return;
}

#pragma push
/* Removing this loses FUN_002c2470 (MATCH nd0 -> MISMATCH nd44) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c2470

void func_002c2470(int param_1, u32 param_2)
{
    u32 shift;
    {
        if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
            goto nonzero;
        shift = 1;
        goto done;
    nonzero:
        shift = 0;
    done:
        ;
    }
    func_002c1080(param_1, param_2, 1 << (shift & 0xffff) & 0xffff, 0x80000, 0, (code*)&func_002c23c0);
    return;
}
#pragma pop

// FUN_002c24d0 MATCHING
bool func_002c24d0(int param_1, u32 param_2)
{
    return param_2 >= *(u32*)(param_1 + 0x20);
}

// FUN_002c24f0 MATCHING
bool func_002c24f0(int param_1, u32 param_2)
{
    return param_2 <= *(u32*)(param_1 + 0x20);
}

// FUN_002c2510

u32 func_002c2510(int param_1)
{
    int data;
    s32 count;
    u16 *skills;
    u16 index;

    data = *(int *)(param_1 + 0x30);
    count = (u16)func_00308ba0_u32(*(u32 *)(data + 0xa2c));
    skills = (u16 *)func_00308bb0_u32(*(u32 *)(data + 0xa2c));
    index = 0;
    count = (u16)count;
    while (index < count) {
        u16 skillId = skills[index];

        if (skillId != 0 && skillId < 0x1d0 && func_00308860(skillId) != 0)
            return 1;
        index++;
    }
    return 0;
}

// FUN_002c25d0

bool func_002c25d0(int param_1)

{
  return *(u8 *)(param_1 + 0x28) > 0;
}

// FUN_002c25e0

void func_002c25e0(int param_1,u32 param_2)
{
  func_002c1080(param_1,param_2,1 << *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) & 0xffff,
               0x180000,0,(code *)&func_002c1e10);
  return;
}

#pragma push
/* Removing this loses FUN_002c2630 (MATCH nd0 -> MISMATCH nd44) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c2630

void func_002c2630(int param_1, u32 param_2)
{
    u32 shift;
    {
        if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
            goto nonzero;
        shift = 1;
        goto done;
    nonzero:
        shift = 0;
    done:
        ;
    }
    func_002c1080(param_1, param_2, 1 << (shift & 0xffff) & 0xffff, 0x180000, 0, (code*)&func_002c1e10);
    return;
}
#pragma pop

// FUN_002c2690

void func_002c2690(int param_1,u32 param_2)
{
  func_002c1080(param_1,param_2,1 << *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) & 0xffff,
               0x180000,0,(code *)&func_002c1e50);
  return;
}

#pragma push
/* Removing this loses FUN_002c26e0 (MATCH nd0 -> MISMATCH nd44) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c26e0

void func_002c26e0(int param_1, u32 param_2)
{
    u32 shift;
    {
        if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
            goto nonzero;
        shift = 1;
        goto done;
    nonzero:
        shift = 0;
    done:
        ;
    }
    func_002c1080(param_1, param_2, 1 << (shift & 0xffff) & 0xffff, 0x180000, 0, (code*)&func_002c1e50);
    return;
}
#pragma pop

// FUN_002c2740

void func_002c2740(int param_1,u32 param_2)
{
  func_002c1080(param_1,param_2,1 << *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) & 0xffff,
               0x180000,0,(code *)&func_002c1e90);
  return;
}

#pragma push
/* Removing this loses FUN_002c2790 (MATCH nd0 -> MISMATCH nd44) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c2790

void func_002c2790(int param_1, u32 param_2)
{
    u32 shift;
    {
        if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
            goto nonzero;
        shift = 1;
        goto done;
    nonzero:
        shift = 0;
    done:
        ;
    }
    func_002c1080(param_1, param_2, 1 << (shift & 0xffff) & 0xffff, 0x180000, 0, (code*)&func_002c1e90);
    return;
}
#pragma pop

// FUN_002c27f0

void func_002c27f0(int param_1,u32 param_2)
{
  func_002c1080(param_1,param_2,1 << *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) & 0xffff,
               0x180000,0,(code *)&func_002c1ed0);
  return;
}

#pragma push
/* Removing this loses FUN_002c2840 (MATCH nd0 -> MISMATCH nd44) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c2840

void func_002c2840(int param_1, u32 param_2)
{
    u32 shift;
    {
        if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
            goto nonzero;
        shift = 1;
        goto done;
    nonzero:
        shift = 0;
    done:
        ;
    }
    func_002c1080(param_1, param_2, 1 << (shift & 0xffff) & 0xffff, 0x180000, 0, (code*)&func_002c1ed0);
    return;
}
#pragma pop

// FUN_002c28a0 MATCHING
bool func_002c28a0(int param_1, int param_2)
{
    return *(u16*)(*(s32*)(param_1 + 0x30) + 0xa4) == param_2;
}

// FUN_002c28c0
bool func_002c28c0(int param_1,int param_2)
{
  extern int func_0030b5a0(u32,u32);
  extern u32 func_002ffd70(u32);
  extern u32 func_002ffdf0(u32);
  u32 sideMask;
  int unit;
  u32 currentTotal;
  u32 maximumTotal;
  int data;

  sideMask = 1 << *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) & 0xffff;
  currentTotal = 0;
  maximumTotal = 0;
  unit = *(int *)(DAT_007ce3ec + 0x14c);
  while (unit != 0) {
    if (((*(u16 *)(unit + 0x1a) & 1) != 0) &&
        ((*(u16 *)(unit + 0x1a) & 8) != 0)) {
      data = *(int *)(unit + 0x30);
      if ((sideMask & (1 << *(u8 *)(data + 0xa2))) != 0 &&
          func_0030b5a0(*(u32 *)(data + 0xa2c),0) == 0) {
        currentTotal += func_002ffd70(*(u32 *)(data + 0xa2c)) & 0xffff;
        maximumTotal += func_002ffdf0(*(u32 *)(data + 0xa2c)) & 0xffff;
      }
    }
    unit = *(int *)(unit + 0x4a8);
  }
  return currentTotal * 100 <= maximumTotal * param_2;
}

#pragma push
/* Removing this loses FUN_002c29e0 (MATCH nd0 -> MISMATCH nd175) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c29e0
bool func_002c29e0(int param_1,int param_2)
{
  extern int func_0030b5a0(u32,u32);
  extern u32 func_002ffd70(u32);
  extern u32 func_002ffdf0(u32);
  u32 sideMask;
  int unit;
  u32 shift;
  u32 currentTotal;
  u32 maximumTotal;
  int data;

  if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
    goto nonzero;
  shift = 1;
  goto done;
nonzero:
  shift = 0;
done:
  sideMask = 1 << (shift & 0xffff) & 0xffff;
  currentTotal = 0;
  maximumTotal = 0;
  unit = *(int *)(DAT_007ce3ec + 0x14c);
  while (unit != 0) {
    if (((*(u16 *)(unit + 0x1a) & 1) != 0) &&
        ((*(u16 *)(unit + 0x1a) & 8) != 0)) {
      data = *(int *)(unit + 0x30);
      if ((sideMask & (1 << *(u8 *)(data + 0xa2))) != 0 &&
          func_0030b5a0(*(u32 *)(data + 0xa2c),0) == 0) {
        currentTotal += func_002ffd70(*(u32 *)(data + 0xa2c)) & 0xffff;
        maximumTotal += func_002ffdf0(*(u32 *)(data + 0xa2c)) & 0xffff;
      }
    }
    unit = *(int *)(unit + 0x4a8);
  }
  return currentTotal * 100 <= maximumTotal * param_2;
}
#pragma pop

// FUN_002c2b20

bool func_002c2b20(int param_1,u16 param_2)
{
  int iVar1;
  
  if (param_2 >= 0x270) {
    func_0019d3f0(D_00696f50 + 0x38,0x468);
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (func_00300580(*(u32 *)(iVar1 + 0xa2c),0x80274) != 0) {
    return false;
  }
  if (func_003005e0(*(u32 *)(iVar1 + 0xa2c),param_2) == 0) {
    return false;
  }
  return func_003086f0(*(u32 *)(iVar1 + 0xa2c),param_2) == 0;
}
#pragma push
/* Removing this loses FUN_002c2be0 (MATCH nd0 -> MISMATCH nd43) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c2be0
void func_002c2be0(int param_1,u32 param_2)
{
  u32 shift;

  {
      if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
          goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      ;
  }
  func_002c1080(param_1,param_2,1 << (shift & 0xffff) & 0xffff,0x80000,6,
                 (code *)&func_002c1ed0);
  return;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002c2c40 (MATCH nd0 -> MISMATCH nd43) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c2c40

void func_002c2c40(int param_1,u32 param_2)
{
  u32 shift;

  {
      if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
          goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      ;
  }
  func_002c1080(param_1,param_2,1 << (shift & 0xffff) & 0xffff,0x180000,6,
                 (code *)&func_002c1ed0);
  return;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002c2ca0 (MATCH nd0 -> MISMATCH nd43) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c2ca0

void func_002c2ca0(int param_1,u32 param_2)
{
  u32 shift;

  {
      if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
          goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      ;
  }
  func_002c1080(param_1,param_2,1 << (shift & 0xffff) & 0xffff,0x80000,7,
                 (code *)&func_002c1ed0);
  return;
}
#pragma pop

// FUN_002c2d00

u32 func_002c2d00(int param_1,u32 param_2)

{
  u16 uVar1 = 0;
  int iVar2 = 0;
  int iVar3 = 0;
  u32 bVar4 = 0;
  short sVar5 = 0;
  u32 uVar6 = 0;
  s32 uVar7 = 0;
  u16* iVar8 = 0;
  long lVar9 = 0;
  u16 *puVar10;
  u16 uVar11 = 0;
  
  iVar2 = *(int *)(param_1 + 0x30);
  sVar5 = func_003082f0(*(u32 *)(iVar2 + 0xa2c),0);
  if (sVar5 == param_2) {
    uVar6 = 1;
  }
  else {
    uVar7 = (u16)func_00308ba0_u32(*(u32 *)(iVar2 + 0xa2c));
    iVar8 = (u16*)func_00308bb0_u32(*(u32 *)(iVar2 + 0xa2c));
    uVar11 = 0;
    uVar7 = (u16)uVar7;
    while (uVar11 < uVar7) {
      puVar10 = &iVar8[uVar11];
      uVar1 = *puVar10;
      if (((uVar1 != 0) && (uVar1 < 0x1d0)) &&
         (sVar5 = func_003082f0(*(u32 *)(iVar2 + 0xa2c),uVar1), sVar5 == param_2)) {
        uVar1 = *puVar10;
        if (uVar1 >= 0x270) {
          func_0019d3f0(D_00696f50 + 0x38,0x468);
        }
        iVar3 = *(int *)(param_1 + 0x30);
        if (func_00300580(*(u32 *)(iVar3 + 0xa2c),0x80274) != 0) {
          bVar4 = 0;
        }
        else if (func_003005e0(*(u32 *)(iVar3 + 0xa2c),uVar1) == 0) {
          bVar4 = 0;
        }
        else if (func_003086f0(*(u32 *)(iVar3 + 0xa2c),uVar1) != 0) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        if (bVar4) {
          return 1;
        }
      }
      uVar11++;
    }
    uVar6 = 0;
  }
  return uVar6;
}

/* W416 triage: retail offsets 0xF4/0xF8 and ours have the same 0x18 extension pair; layout-only, no width edit retained. */
/* W322 probe: func_002c2ed0 with opt_loop_invariants on improved normalized_diff 178 -> 158 (object 540/544). */
#pragma opt_loop_invariants on
// FUN_002c2ed0

asm bool func_002c2ed0(int param_1,u16 param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x8c910030
  .word 0x922300a2
  .word 0x24020001
  .word 0x1462000f
  .word 0x00000000
  .word 0x00132c3c
  .word 0x00052c3f
  .word 0x0c0b8cd4
  .word 0x00000000
  .word 0x14400009
  .word 0x00000000
  .word 0x962400a4
  .word 0x0c05ec98
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000065
  .word 0x00000000
  .word 0x0013243c
  .word 0x0004243f
  .word 0x0c0c2030
  .word 0x00000000
  .word 0x0040802d
  .word 0x24020001
  .word 0x16420022
  .word 0x00000000
  .word 0x3c02000e
  .word 0x34420001
  .word 0x02021024
  .word 0x1440001d
  .word 0x00000000
  .word 0x3202000e
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e240a2c
  .word 0x24050011
  .word 0x0c0c05d4
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400012
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000004a
  .word 0x00000000
  .word 0x32020100
  .word 0x1440000c
  .word 0x00000000
  .word 0x8e240a2c
  .word 0x24050012
  .word 0x0c0c05d4
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000003c
  .word 0x00000000
  .word 0x3202000e
  .word 0x10400030
  .word 0x00000000
  .word 0x922300a2
  .word 0x24020001
  .word 0x14620009
  .word 0x00000000
  .word 0x8e220a2c
  .word 0x94420000
  .word 0x30420200
  .word 0x10400027
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000002d
  .word 0x00000000
  .word 0x8e240a2c
  .word 0x0c0c22e8
  .word 0x00000000
  .word 0x3050ffff
  .word 0x8e240a2c
  .word 0x0c0c22ec
  .word 0x00000000
  .word 0x0000402d
  .word 0x3207ffff
  .word 0x24060222
  .word 0x24050221
  .word 0x24040220
  .word 0x10000012
  .word 0x00000000
  .word 0x3103ffff
  .word 0x00031840
  .word 0x00431821
  .word 0x94630000
  .word 0x10660007
  .word 0x00000000
  .word 0x10650005
  .word 0x00000000
  .word 0x10640003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000010
  .word 0x00000000
  .word 0x25030001
  .word 0x3068ffff
  .word 0x3103ffff
  .word 0x0067182a
  .word 0x1460ffec
  .word 0x00000000
  .word 0x00132c3c
  .word 0x00052c3f
  .word 0x8e240a2c
  .word 0x0c0c2d2c
  .word 0x00000000
  .word 0x3c030700
  .word 0x00431024
  .word 0x0002102b
  .word 0x38420001
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
#pragma opt_loop_invariants off

// FUN_002c30f0

void func_002c30f0(int param_1,u16 param_2)

{
  func_002c2ed0(param_1,param_2,1);
  return;
}

// FUN_002c3120

void func_002c3120(int param_1,u16 param_2)

{
  func_002c2ed0(param_1,param_2,0);
  return;
}

#pragma push
/* Removing this loses FUN_002c3150 (MATCH nd0 -> MISMATCH nd43) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c3150

void func_002c3150(int param_1,u32 param_2)
{
  u32 shift;

  {
      if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
          goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      ;
  }
  func_002c1080(param_1,param_2,1 << (shift & 0xffff) & 0xffff,0x80000,10,
                 (code *)&func_002c30f0);
  return;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002c31b0 (MATCH nd0 -> MISMATCH nd43) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c31b0

void func_002c31b0(int param_1,u32 param_2)
{
  u32 shift;

  {
      if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
          goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      ;
  }
  func_002c1080(param_1,param_2,1 << (shift & 0xffff) & 0xffff,0x180000,10,
                 (code *)&func_002c30f0);
  return;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002c3210 (MATCH nd0 -> MISMATCH nd43) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c3210

void func_002c3210(int param_1,u32 param_2)
{
  u32 shift;

  {
      if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0)
          goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      ;
  }
  func_002c1080(param_1,param_2,1 << (shift & 0xffff) & 0xffff,0x80000,0xb,
                 (code *)&func_002c30f0);
  return;
}
#pragma pop

// FUN_002c3270

bool func_002c3270(int param_1)
{
  long lVar2 = 0;
  if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 1) {
    return false;
  }
  lVar2 = func_0017b260(*(u16 *)(*(int *)(param_1 + 0x30) + 0xa4));
  return lVar2 != 0;
}

// FUN_002c32c0

u32 func_002c32c0(int param_1)

{
  return !((**(u16 **)(*(int *)(param_1 + 0x30) + 0xa2c) & 0x10));
}

// FUN_002c32e0

u32 func_002c32e0(int param_1)

{
  return !((**(u16 **)(*(int *)(param_1 + 0x30) + 0xa2c) & 0x20));
}

#pragma push
/* Removing this loses FUN_002c3300 (MATCH nd0 -> MISMATCH nd148) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002c3300

u32 func_002c3300(int param_1,u32 param_2)

{
  u32 genusValue;
  
  if (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) != 0) {
    goto nonzero_genus;
  }
  genusValue = 1;
  goto genus_done;
nonzero_genus:
  genusValue = 0;
genus_done:
  {
    u32 genus = (u16)genusValue;
    u32 current = (u8)func_002ffcc0(*(u32 *)(*(int *)(param_1 + 0x30) + 0xa2c));
    int unit = *(int *)(iGpffffb6fc + 0x14c);
    u32 candidate;
    u32 comparison;

    genus = (u16)genus;
    while (unit != 0) {
      if (((*(u16 *)(unit + 0x1a) & 1) != 0) &&
          ((*(u16 *)(unit + 0x1a) & 8) != 0) &&
          (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) == genus)) {
        candidate = (u8)func_002ffcc0(*(u32 *)(*(int *)(unit + 0x30) + 0xa2c));
        comparison = candidate < current;
        if (comparison != 0) {
          goto next_unit;
        }
        comparison = (candidate - current) < param_2;
        if (comparison != 0) {
          goto next_unit;
        }
        return 1;
      }
next_unit:
      unit = *(int *)(unit + 0x4a8);
    }
  }
  return 0;
}
#pragma pop

// FUN_002c3400

bool func_002c3400(int param_1)

{
  long lVar1 = 0;
  
  lVar1 = func_00301ca0(*(u32 *)(*(int *)(param_1 + 0x30) + 0xa2c));
  return lVar1 != 0;
}

// FUN_002c3430

u32
func_002c3430_u32(int formation,u32 selector,u32 excludedFlags,int options,int rejectedResult,
                  code predicate)
{
  extern int func_002c5030(int,int,int,int);

  int candidates[12];
  int unit;
  int unitData;
  int index;
  int candidateCount;
  int loopFlags;
  int requireFlag;
  int requireActive;
  int requireOrder;
  u16 flags;

  flags = options;
  if ((flags & 0x20) != 0) {
    func_002bfcb0_ptr(formation,(void *)(formation + 0x88),2,0,0);
  } else if (func_002bff60_u16(formation,formation + 0x88,
                              *(u16 *)(formation + 0x6e),0) != 0) {
    int initialIndex;
    for (initialIndex = 0;
         (u16)initialIndex < *(u16 *)(formation + 0xc0);
         initialIndex = initialIndex + 1 & 0xffff) {
      *(int *)(formation + (initialIndex & 0xffff) * 4 + 0x38) =
          *(int *)(formation + (initialIndex & 0xffff) * 4 + 0x88);
    }
    *(u16 *)(formation + 0x6a) = *(u16 *)(formation + 0xc0);
    return 1;
  }

  candidateCount = 0;
  index = 0;
  loopFlags = (u16)options;
  requireFlag = loopFlags & 1;
  requireActive = loopFlags & 2;
  requireOrder = loopFlags & 0x10;
  while ((u16)index < *(u16 *)(formation + 0xc0)) {
    unit = *(int *)(formation + (index & 0xffff) * 4 + 0x88);
    if ((*(u16 *)(unit + 0x1a) & 1) != 0) {
      unitData = *(int *)(unit + 0x30);
      if ((loopFlags == 0 ||
           ((requireFlag == 0 ||
             func_00300580(*(u32 *)(unitData + 0xa2c),0x100000) != 0) &&
            (requireActive == 0 || *(u8 *)(unitData + 0xa2) != 1 ||
             func_002e3350(unit,(s16)selector) != 0 ||
             func_0017b260(*(u16 *)(unitData + 0xa4)) != 0) &&
            (requireOrder == 0 || func_002c5030(formation,unit,0,0) >= 0))) &&
          func_00300580(*(u32 *)(unitData + 0xa2c),excludedFlags) == 0 &&
          predicate(unit,selector) != rejectedResult) {
      candidates[(u16)candidateCount] = unit;
      candidateCount = candidateCount + 1 & 0xffff;
    }
      }
    index = index + 1 & 0xffff;
  }

  if ((u16)candidateCount == 0) {
    if ((flags & 8) != 0) {
      return 0;
    }
    return func_002c3770_u32(formation,selector);
  }

  if ((flags & 4) == 0) {
    int chosenIndex;

    chosenIndex = 0;
    if (1 < (u16)candidateCount) {
      chosenIndex = func_002ffbc0_u16((u16)candidateCount);
    }
    *(int *)(formation + 0x38) = candidates[(u16)chosenIndex];
    *(u16 *)(formation + 0x6a) = 1;
  } else {
    int copyIndex;
    for (copyIndex = 0; (u16)copyIndex < (u16)candidateCount;
         copyIndex = copyIndex + 1 & 0xffff) {
      *(int *)(formation + (copyIndex & 0xffff) * 4 + 0x38) =
          candidates[copyIndex & 0xffff];
    }
    *(u16 *)(formation + 0x6a) = candidateCount;
  }
  return 1;
}

/* W322 probe: func_002c3770 with opt_loop_invariants on improved normalized_diff 817 -> 808 (object 1056/1136). */
#pragma opt_loop_invariants on
/* W357 measured func_002c3770: opt_dead_assignments off stacked with existing opt_loop_invariants on, nd808/1056B -> nd773/1056B; window 1136B. */
#pragma opt_dead_assignments off
// FUN_002c3770

asm u32 func_002c3770(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdff10
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x26050088
  .word 0x9486006e
  .word 0x0000382d
  .word 0x0c0affd8
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400014
  .word 0x00000000
  .word 0x0000202d
  .word 0x10000008
  .word 0x00000000
  .word 0x3082ffff
  .word 0x00021080
  .word 0x02021821
  .word 0x8c620088
  .word 0xac620038
  .word 0x24820001
  .word 0x3044ffff
  .word 0x960300c0
  .word 0x3082ffff
  .word 0x0043102a
  .word 0x1440fff5
  .word 0x00000000
  .word 0xa603006a
  .word 0x24020001
  .word 0x100000e8
  .word 0x00000000
  .word 0x961400c0
  .word 0x24020001
  .word 0x16820006
  .word 0x00000000
  .word 0x8e030088
  .word 0xae030038
  .word 0xa602006a
  .word 0x100000de
  .word 0x00000000
  .word 0x8e030030
  .word 0x906300a2
  .word 0x14620015
  .word 0x00000000
  .word 0x0000282d
  .word 0x1000000b
  .word 0x00000000
  .word 0x30a3ffff
  .word 0x00031880
  .word 0x02031821
  .word 0x8c630088
  .word 0x8c630030
  .word 0x906300a2
  .word 0x14600007
  .word 0x00000000
  .word 0x24a30001
  .word 0x3065ffff
  .word 0x30a4ffff
  .word 0x0094182a
  .word 0x1460fff3
  .word 0x00000000
  .word 0x14940002
  .word 0x00000000
  .word 0x0000102d
  .word 0x9604006e
  .word 0x00041880
  .word 0x00641821
  .word 0x00031840
  .word 0x00641821
  .word 0x00032080
  .word 0x8f83b708
  .word 0x00831821
  .word 0x90640011
  .word 0x24030010
  .word 0x1083001a
  .word 0x00000000
  .word 0x2403000e
  .word 0x10830017
  .word 0x00000000
  .word 0x2403000d
  .word 0x10830014
  .word 0x00000000
  .word 0x2403000c
  .word 0x10830011
  .word 0x00000000
  .word 0x2403000a
  .word 0x1083000e
  .word 0x00000000
  .word 0x24030008
  .word 0x1083000b
  .word 0x00000000
  .word 0x24030004
  .word 0x10830008
  .word 0x00000000
  .word 0x24030003
  .word 0x10830005
  .word 0x00000000
  .word 0x24030001
  .word 0x10830002
  .word 0x00000000
  .word 0x0060102d
  .word 0x14400004
  .word 0x00000000
  .word 0x2a810005
  .word 0x1420000d
  .word 0x00000000
  .word 0x3284ffff
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00021080
  .word 0x00501021
  .word 0x8c420088
  .word 0xae020038
  .word 0x24020001
  .word 0xa602006a
  .word 0x10000090
  .word 0x00000000
  .word 0x0000a82d
  .word 0x3293ffff
  .word 0x10000037
  .word 0x00000000
  .word 0x32b2ffff
  .word 0x00121080
  .word 0x02021021
  .word 0x24570088
  .word 0x8c560088
  .word 0x8ec20030
  .word 0x8c440a2c
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3051ffff
  .word 0x8ec20030
  .word 0x8c440a2c
  .word 0x0c0bff5c
  .word 0x00000000
  .word 0x3045ffff
  .word 0x001210c0
  .word 0x005d1021
  .word 0x24440090
  .word 0x8ee20000
  .word 0xac820000
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
  .word 0x06200006
  .word 0x00000000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00111842
  .word 0x32220001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x00000000
  .word 0x00000000
  .word 0x46000803
  .word 0xe4800004
  .word 0x26a20001
  .word 0x3055ffff
  .word 0x32a2ffff
  .word 0x0053102a
  .word 0x1440ffc7
  .word 0x00000000
  .word 0x2668ffff
  .word 0x24040001
  .word 0x0000482d
  .word 0x0000382d
  .word 0x10000018
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x24430090
  .word 0x30e2ffff
  .word 0x000210c0
  .word 0x005d1021
  .word 0x24460090
  .word 0x24c50004
  .word 0xc4c10004
  .word 0xc460000c
  .word 0x46000834
  .word 0x45000009
  .word 0x00000000
  .word 0x8cc30000
  .word 0x8cc20008
  .word 0xacc20000
  .word 0xc4c0000c
  .word 0xe4a00000
  .word 0xacc30008
  .word 0xe4c1000c
  .word 0x0080482d
  .word 0x24e20001
  .word 0x3047ffff
  .word 0x30e3ffff
  .word 0x0068102a
  .word 0x1440ffe6
  .word 0x00000000
  .word 0x1520ffe0
  .word 0x00000000
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x3046ffff
  .word 0x0000402d
  .word 0x0000382d
  .word 0x3285ffff
  .word 0x00051880
  .word 0x3c020069
  .word 0x24426fa0
  .word 0x00432021
  .word 0x1000000a
  .word 0x00000000
  .word 0x00831021
  .word 0x9042fffc
  .word 0x01021021
  .word 0x3048ffff
  .word 0x0106082a
  .word 0x10200007
  .word 0x00000000
  .word 0x24e20001
  .word 0x3047ffff
  .word 0x30e3ffff
  .word 0x0065102a
  .word 0x1440fff4
  .word 0x00000000
  .word 0x1263000a
  .word 0x00000000
  .word 0x30e2ffff
  .word 0x000210c0
  .word 0x005d1021
  .word 0x8c420090
  .word 0xae020038
  .word 0x24020001
  .word 0xa602006a
  .word 0x1000000a
  .word 0x00000000
  .word 0x3284ffff
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x000210c0
  .word 0x005d1021
  .word 0x8c420090
  .word 0xae020038
  .word 0x24020001
  .word 0xa602006a
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
  .word 0x27bd00f0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_dead_assignments on
#pragma opt_loop_invariants off

// FUN_002c3be0
u32 func_002c3be0(u32 param_1)
{
  u32 unit;
  u16 available;

  unit = param_1;
  available = func_002bff60_u16(unit,unit + 0x88,*(u16 *)(unit + 0x6e),0);
  if (available != 0) {
    u16 index;
    u16 count;
    index = 0;
    while ((count = *(u16 *)(unit + 0xc0)), (u16)index < count) {
      *(u32 *)(unit + (index & 0xffff) * 4 + 0x38) =
          *(u32 *)(unit + (index & 0xffff) * 4 + 0x88);
      index++;
    }
    *(u16 *)(unit + 0x6a) = count;
    return 1;
  }
  {
    u32 selected;
    u32 index;
    u32 lowest;
    u32 count;
    u32 candidate;
    u32 stat;
    selected = 0;
    lowest = 0xfffffff;
    index = 0;
    count = *(u16 *)(unit + 0xc0);
    while (index < count) {
      candidate = *(u32 *)(unit + index * 4 + 0x88);
      stat = *(u16 *)(*(int *)(*(int *)(candidate + 0x30) + 0xa2c) + 8);
      if (stat < lowest) {
        selected = candidate;
        lowest = stat;
      }
      index++;
    }
    *(u32 *)(unit + 0x38) = selected;
  }
  *(u16 *)(unit + 0x6a) = 1;
  return 1;
}

// FUN_002c3ce0

u32 func_002c3ce0(u32 param_1)

{
  u16 result;
  u16 copyIndex;
  int unit;
  int selected;
  u16 index;
  u16 best;
  u16 score;
  u32 idx32;
  extern u8 func_002ffcc0(u32);

  result = func_002bff60_u16(param_1,param_1 + 0x88,*(u16 *)(param_1 + 0x6e),0);
  if (result != 0) {
    for (copyIndex = 0; copyIndex < *(u16 *)(param_1 + 0xc0); copyIndex++) {
      *(u32 *)(param_1 + copyIndex * 4 + 0x38) = *(u32 *)(param_1 + copyIndex * 4 + 0x88);
    }
    *(u16 *)(param_1 + 0x6a) = *(u16 *)(param_1 + 0xc0);
    return 1;
  }
  selected = 0;
  best = 0xffff;
  for (index = 0; index < *(u16 *)(param_1 + 0xc0); index++) {
    idx32 = index;
    idx32 = idx32 & 0xffff;
    unit = *(int *)(param_1 + idx32 * 4 + 0x88);
    score = func_002ffcc0(*(u32 *)(*(int *)(unit + 0x30) + 0xa2c));
    if (score < best) {
      selected = unit;
      best = score;
    }
  }
  *(int *)(param_1 + 0x38) = selected;
  *(u16 *)(param_1 + 0x6a) = 1;
  return 1;
}

// FUN_002c3e10

u64 func_002c3e10(void)

{
  return 0;
}

// FUN_002c3e20

void func_002c3e20(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,0,0, (code *)&func_002c1710);
  return;
}

// FUN_002c3e60

void func_002c3e60(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,0,1, (code *)&func_002c1710);
  return;
}

// FUN_002c3ea0

void func_002c3ea0(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,0,0, (code *)&func_002c28a0);
  return;
}

// FUN_002c3ee0

u32 func_002c3ee0(int param_1)

{
  *(int *)(param_1 + 0x38) = param_1;
  *(u16 *)(param_1 + 0x6a) = 1;
  return 1;
}

// FUN_002c3f00

u32 func_002c3f00(int param_1)

{
  extern u32 func_002ffbc0(u32);
  int iVar1;
  u16 uVar3;
  int aiStack_30[12];

  uVar3 = 0;
  for (iVar1 = *(int *)(iGpffffb6fc + 0x14c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x4a8)) {
    if ((((param_1 != iVar1) && ((*(u16 *)(iVar1 + 0x1a) & 1) != 0)) &&
        ((*(u16 *)(iVar1 + 0x1a) & 8) != 0)) &&
       ((*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) == *(u8 *)(*(int *)(iVar1 + 0x30) + 0xa2) &&
        (func_00300580(*(u32 *)(*(int *)(iVar1 + 0x30) + 0xa2c),0x80000) == 0))
       )) {
      aiStack_30[uVar3] = iVar1;
      uVar3++;
    }
  }
  if (uVar3 == 0) {
    *(int *)(param_1 + 0x38) = param_1;
    *(u16 *)(param_1 + 0x6a) = 1;
    return 1;
  }
  else {
    *(int *)(param_1 + 0x38) = aiStack_30[func_002ffbc0(uVar3)];
    *(u16 *)(param_1 + 0x6a) = 1;
    return 1;
  }
}

// FUN_002c4000

void func_002c4000(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,0,0, (code *)&func_002c1e10);
  return;
}

// FUN_002c4040

void func_002c4040(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,0,0, (code *)&func_002c1e50);
  return;
}

// FUN_002c4080

void func_002c4080(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,0,0, (code *)&func_002c1e90);
  return;
}

// FUN_002c40c0

void func_002c40c0(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,0,0, (code *)&func_002c1ed0);
  return;
}

// FUN_002c4100

void func_002c4100(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,0,1, (code *)&func_002c1e10);
  return;
}

// FUN_002c4140

void func_002c4140(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,0,1, (code *)&func_002c1e50);
  return;
}

// FUN_002c4180

void func_002c4180(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,0,1, (code *)&func_002c1e90);
  return;
}

// FUN_002c41c0

void func_002c41c0(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,0,1, (code *)&func_002c1ed0);
  return;
}

// FUN_002c4200

u32 func_002c4200(u32 param_1)

{
  u16 result;
  u16 index;
  u32 address;

  result = func_002bff60_u16(param_1,param_1 + 0x88,*(u16 *)(param_1 + 0x6e),1);
  if (result != 0) {
    for (index = 0; index < *(u16 *)(param_1 + 0xc0); index++) {
      *(u32 *)(param_1 + index * 4 + 0x38) = *(u32 *)(param_1 + index * 4 + 0x88);
    }
    *(u16 *)(param_1 + 0x6a) = *(u16 *)(param_1 + 0xc0);
    return 1;
  }
  index = func_002ffbc0_u16(*(u16 *)(param_1 + 0xc0));
  address = (index & 0xffff) * 4;
  *(u32 *)(param_1 + 0x38) = *(u32 *)(address + param_1 + 0x88);
  *(u16 *)(param_1 + 0x6a) = 1;
  return 1;
}

// FUN_002c42c0

u32 func_002c42c0(u32 param_1,u32 param_2)

{
  u16 result;
  u16 index;

  result = func_002bff60_u16(param_1,param_1 + 0x88,*(u16 *)(param_1 + 0x6e),0);
  if (result != 0) {
    for (index = 0; index < *(u16 *)(param_1 + 0xc0); index++) {
      *(u32 *)(param_1 + index * 4 + 0x38) = *(u32 *)(param_1 + index * 4 + 0x88);
    }
    *(u16 *)(param_1 + 0x6a) = *(u16 *)(param_1 + 0xc0);
    return 1;
  }
  if (func_002c0970(param_1 + 0x88) == 0) {
    return func_002c3770_u32(param_1,param_2);
  }
  *(u32 *)(param_1 + 0x38) = func_002c0880((int)&((u8 *)param_1)[0x88]);
  *(u16 *)(param_1 + 0x6a) = 1;
  return 1;
}

// FUN_002c43a0

void func_002c43a0(u64 param_1)

{
  func_002c3430(param_1,0x100000,0,0,0, (code *)&func_002c1710);
  return;
}

// FUN_002c43e0

void func_002c43e0(u64 param_1)

{
  func_002c3430(param_1,0x100000,0,0,1, (code *)&func_002c1710);
  return;
}

// FUN_002c4420

void func_002c4420(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0x100000,0,0, (code *)&func_002c1e10);
  return;
}

// FUN_002c4460

void func_002c4460(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0x100000,0,0, (code *)&func_002c1e50);
  return;
}

// FUN_002c44a0

void func_002c44a0(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0x100000,0,0, (code *)&func_002c1e90);
  return;
}

// FUN_002c44e0

void func_002c44e0(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0x100000,0,0, (code *)&func_002c1ed0);
  return;
}

// FUN_002c4520

void func_002c4520(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0x100000,0,1, (code *)&func_002c1e10);
  return;
}

// FUN_002c4560

void func_002c4560(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0x100000,0,1, (code *)&func_002c1e50);
  return;
}

// FUN_002c45a0

void func_002c45a0(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0x100000,0,1, (code *)&func_002c1e90);
  return;
}

// FUN_002c45e0

void func_002c45e0(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0x100000,0,1, (code *)&func_002c1ed0);
  return;
}

// FUN_002c4620

void func_002c4620(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,1,0, (code *)&func_002c1e10);
  return;
}

// FUN_002c4660

void func_002c4660(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,1,0, (code *)&func_002c1e50);
  return;
}

// FUN_002c46a0

void func_002c46a0(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,1,0, (code *)&func_002c1e90);
  return;
}

// FUN_002c46e0

void func_002c46e0(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,1,0, (code *)&func_002c1ed0);
  return;
}

// FUN_002c4720

void func_002c4720(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,0,1, (code *)&func_002c28a0);
  return;
}

// FUN_002c4760

u32 func_002c4760(u32 param_1)

{
  u16 result;
  u16 index;
  u32 address;

  result = func_002bff60_u16(param_1,param_1 + 0x88,*(u16 *)(param_1 + 0x6e),0);
  if (result != 0) {
    for (index = 0; index < *(u16 *)(param_1 + 0xc0); index++) {
      *(u32 *)(param_1 + index * 4 + 0x38) = *(u32 *)(param_1 + index * 4 + 0x88);
    }
    *(u16 *)(param_1 + 0x6a) = *(u16 *)(param_1 + 0xc0);
    return 1;
  }
  index = func_002ffbc0_u16(*(u16 *)(param_1 + 0xc0));
  address = (index & 0xffff) * 4;
  *(u32 *)(param_1 + 0x38) = *(u32 *)(address + param_1 + 0x88);
  *(u16 *)(param_1 + 0x6a) = 1;
  return 1;
}

// FUN_002c4820

void func_002c4820(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,0,0, (code *)&func_002c3400);
  return;
}

// FUN_002c4860

void func_002c4860(u64 param_1,u64 param_2)

{
  func_002c3430(param_1,param_2,0,0,1, (code *)&func_002c3400);
  return;
}

/* W322 probe: func_002c48a0 with opt_loop_invariants on improved normalized_diff 206 -> 48 (object 484/496). */
/* BtlCore2 W419 negative: swapping uVar7/iVar8 declarations worsened func_002c48a0 nd39->42 (484/496B); retain baseline. */
#pragma opt_loop_invariants on
// FUN_002c48a0

u32 func_002c48a0(int param_1,int param_2,u16 *param_3,u16 param_4,u16 param_5)

{
  u16 uVar1 = 0;
  u8 cVar2 = 0;
  u32 uVar3 = 0;
  int iVar4 = 0;
  u16 *puVar5;
  int iVar8 = 0;
  u32 uVar7 = 0;
  u16 uVar6 = 0;
  int iVar9 = 0;
  
  uVar3 = func_002ffd70(*(u32 *)(*(int *)(param_2 + 0x30) + 0xa2c));
  uVar7 = 0xffffffff;
  iVar8 = 0xffffff;
  for (uVar6 = 0; uVar6 < param_4; uVar6++) {
    puVar5 = param_3 + uVar6;
    uVar1 = *puVar5;
    if (uVar1 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = *(u8 *)(DAT_007ce3f8 + ((u32)uVar1 * 10 + (u32)uVar1) * 4 + 8);
    }
    if (((param_5 != 0) || (cVar2 == 1)) && ((param_5 != 1 || (cVar2 == 0)))) {
      iVar9 = *(volatile u32 *)(param_1 + 0x30);
      iVar4 = *(volatile u32 *)(param_2 + 0x30);
      iVar4 = func_00303130_s32(uVar1,*(volatile u32 *)(iVar9 + 0xa2c),
                           *(u32 *)(iVar4 + 0xa2c),1,1,1,0,1);
      iVar4 = uVar3 + iVar4;
      if ((iVar4 > 0) && (iVar8 > 0)) {
        if (iVar4 < iVar8) {
          uVar7 = (u32)*puVar5;
          iVar8 = iVar4;
        }
      }
      else if ((iVar4 <= 0) && ((iVar8 > 0) || (iVar8 < iVar4))) {
        uVar7 = (u32)*puVar5;
        iVar8 = iVar4;
      }
    }
  }
  func_00301870(*(u32 *)(*(int *)(param_1 + 0x30) + 0xa2c));
  func_00301870(*(u32 *)(*(int *)(param_2 + 0x30) + 0xa2c));
  return uVar7;
}
#pragma opt_loop_invariants off

/* W322 probe: func_002c4a90 with opt_loop_invariants on improved normalized_diff 206 -> 56 (object 492/496). */
#pragma opt_loop_invariants on
// FUN_002c4a90

u32 func_002c4a90(int param_1,int param_2,u16 *param_3,u32 param_4,short param_5)

{
  u8 cVar1 = 0;
  u32 uVar2 = 0;
  u16 uVar3 = 0;
  int iVar4 = 0;
  u16 *puVar5;
  int iVar8 = 0;
  u32 uVar7 = 0;
  u16 uVar6 = 0;
  u16 mode;
  int iVar9 = 0;
  
  uVar2 = func_002ffd70(*(u32 *)(*(int *)(param_2 + 0x30) + 0xa2c));
  uVar7 = 0xffffffff;
  iVar8 = 0xffffff;
  uVar6 = 0;
  mode = (u16)param_5;
  param_4 &= 0xffff;
  for (; uVar6 < (s32)param_4; uVar6++) {
    puVar5 = param_3 + uVar6;
    uVar3 = func_0030bc20_u32(*puVar5);
    if ((uVar3 != 0) && (uVar3 < 0x1d0)) {
      cVar1 = *(u8 *)(DAT_007ce3f8 + uVar3 * 0x2c + 8);
      if (((mode != 0) || (cVar1 == 1)) && ((mode != 1 || (cVar1 == 0)))) {
      iVar9 = *(volatile u32 *)(param_1 + 0x30);
      iVar4 = *(volatile u32 *)(param_2 + 0x30);
      iVar4 = func_00303130_s32(uVar3,*(volatile u32 *)(iVar9 + 0xa2c),
                           *(u32 *)(iVar4 + 0xa2c),1,1,1,1,1);
      iVar4 = uVar2 + iVar4;
      if ((iVar4 > 0) && (iVar8 > 0)) {
        if (iVar4 < iVar8) {
          uVar7 = (u32)*puVar5;
          iVar8 = iVar4;
        }
      }
      else if ((iVar4 <= 0) && ((iVar8 > 0) || (iVar8 < iVar4))) {
        uVar7 = (u32)*puVar5;
        iVar8 = iVar4;
      }
    }
    }
  }
  func_00301870(*(u32 *)(*(int *)(param_1 + 0x30) + 0xa2c));
  func_00301870(*(u32 *)(*(int *)(param_2 + 0x30) + 0xa2c));
  return uVar7;
}
#pragma opt_loop_invariants off

/* W322 probe: func_002c4c80 with opt_loop_invariants on improved normalized_diff 239 -> 19 (object 460/464). */
#pragma opt_loop_invariants on
/* W357 measured func_002c4c80: opt_propagation off stacked with existing opt_loop_invariants on, nd19/460B -> nd10/460B; window 464B. */
#pragma opt_propagation off
// FUN_002c4c80

u32 func_002c4c80(int param_1,int param_2,u16 *param_3,u32 param_4,int param_5)

{
  u8 cVar1;
  u16 uVar2;
  u32 uVar3;
  u32 uVar4;
  int iVar5;
  s64 lVar6;
  s64 lVar9;
  u32 uVar8;
  u16 uVar7;
  int count;
  int mode;
  
  uVar3 = func_002ffd70(*(u32 *)(*(int *)(param_2 + 0x30) + 0xa2c));
  uVar4 = func_002ffdf0(*(u32 *)(*(int *)(param_2 + 0x30) + 0xa2c));
  uVar8 = 0xffffffff;
  lVar9 = 0xffffff;
  uVar7 = 0;
  mode = param_5;
  mode &= 0xffff;
  count = param_4 & 0xffff;
  for (; uVar7 < count; uVar7++) {
    uVar2 = param_3[uVar7];
    if (uVar2 != 0 && uVar2 < 0x1d0) {
      cVar1 = *(u8 *)(DAT_007ce3f8 + ((u32)uVar2 * 44) + 8);
      if ((mode != 0 || cVar1 == 1) && (mode != 1 || cVar1 == 0)) {
        int dataA = *(int *)(param_1 + 0x30);
        int dataB = *(int *)(param_2 + 0x30);
        iVar5 = func_00303130_s32(uVar2,*(u32 *)(dataA + 0xa2c),
                             *(u32 *)(dataB + 0xa2c),1,1,1,0,1);
        lVar6 = func_0051e0e0((uVar4) - (uVar3 + iVar5));
        if (lVar6 < lVar9) {
          uVar8 = param_3[uVar7];
          lVar9 = lVar6;
        }
      }
    }
  }
  func_00301870(*(u32 *)(*(int *)(param_1 + 0x30) + 0xa2c));
  func_00301870(*(u32 *)(*(int *)(param_2 + 0x30) + 0xa2c));
  return uVar8;
}
#pragma opt_propagation on
#pragma opt_loop_invariants off

/* W322 probe: func_002c4e50 with opt_common_subs off improved normalized_diff 288 -> 210 (object 472/480). */
#pragma opt_common_subs off
// FUN_002c4e50

asm u32 func_002c4e50(int param_1,int param_2,u16 *param_3,u32 param_4,int param_5)
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
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0f02d
  .word 0x00e0b02d
  .word 0x0100a82d
  .word 0x8ca20030
  .word 0x8c440a2c
  .word 0x0c0bff5c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x7fa200b0
  .word 0x8e620030
  .word 0x8c440a2c
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x7fa200a0
  .word 0x2411ffff
  .word 0x3c0200ff
  .word 0x3452ffff
  .word 0x0000802d
  .word 0x32b5ffff
  .word 0x32d7ffff
  .word 0x10000039
  .word 0x00000000
  .word 0x3202ffff
  .word 0x00021040
  .word 0x03c2b021
  .word 0x96c40000
  .word 0x0c0c2f08
  .word 0x00000000
  .word 0x3044ffff
  .word 0x1080002e
  .word 0x00000000
  .word 0x288101d0
  .word 0x1020002b
  .word 0x00000000
  .word 0x00041080
  .word 0x00441021
  .word 0x00021040
  .word 0x00441021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x00431021
  .word 0x90450008
  .word 0x16a00005
  .word 0x00000000
  .word 0x30a300ff
  .word 0x24020001
  .word 0x1462001d
  .word 0x00000000
  .word 0x24020001
  .word 0x16a20004
  .word 0x00000000
  .word 0x30a200ff
  .word 0x14400017
  .word 0x00000000
  .word 0x8e830030
  .word 0x8e620030
  .word 0x8c650a2c
  .word 0x8c460a2c
  .word 0x24070001
  .word 0x00e0402d
  .word 0x00e0482d
  .word 0x00e0502d
  .word 0x00e0582d
  .word 0x0c0c0c4c
  .word 0x00000000
  .word 0x7ba300b0
  .word 0x00621821
  .word 0x7ba200a0
  .word 0x00432023
  .word 0x0c147838
  .word 0x00000000
  .word 0x0052082a
  .word 0x10200003
  .word 0x00000000
  .word 0x96d10000
  .word 0x0040902d
  .word 0x26020001
  .word 0x3050ffff
  .word 0x3202ffff
  .word 0x0057102a
  .word 0x1440ffc5
  .word 0x00000000
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x0c0c061c
  .word 0x00000000
  .word 0x8e620030
  .word 0x8c440a2c
  .word 0x0c0c061c
  .word 0x00000000
  .word 0x0220102d
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
#pragma opt_common_subs on

/* W322 probe: func_002c5030 with opt_loop_invariants on improved normalized_diff 534 -> 533 (object 840/848). */
#pragma opt_loop_invariants on
// FUN_002c5030

asm s32 func_002c5030(int param_1,int param_2,s32 param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff10
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
  .word 0x00a0a02d
  .word 0x00c0f02d
  .word 0xafa700dc
  .word 0x0000902d
  .word 0x8c900030
  .word 0x8e040a2c
  .word 0x0000282d
  .word 0x0c0c20bc
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0280202d
  .word 0x24060001
  .word 0x0c0b0bb4
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0xa7a000e0
  .word 0x26420001
  .word 0x3052ffff
  .word 0x8e040a2c
  .word 0x0c0c22e8
  .word 0x00000000
  .word 0x3051ffff
  .word 0x8e040a2c
  .word 0x0c0c22ec
  .word 0x00000000
  .word 0x7fa200c0
  .word 0x0000982d
  .word 0x3222ffff
  .word 0x7fa200b0
  .word 0x1000005d
  .word 0x00000000
  .word 0x3262ffff
  .word 0x00021840
  .word 0x7ba200c0
  .word 0x0043b021
  .word 0x96c50000
  .word 0x10a00054
  .word 0x00000000
  .word 0x28a101d0
  .word 0x10200051
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x0c0c20bc
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x7fa200a0
  .word 0x70402628
  .word 0x0c0c2030
  .word 0x00000000
  .word 0x8fa300dc
  .word 0x14600006
  .word 0x00000000
  .word 0x304201fe
  .word 0x14400009
  .word 0x00000000
  .word 0x10000040
  .word 0x00000000
  .word 0x304301fe
  .word 0x1060003d
  .word 0x00000000
  .word 0x3042000e
  .word 0x1440003a
  .word 0x00000000
  .word 0x96d10000
  .word 0x2a220270
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x24846f88
  .word 0x24050468
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8eb70030
  .word 0x8ee40a2c
  .word 0x3c020008
  .word 0x34450274
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000014
  .word 0x00000000
  .word 0x8ee40a2c
  .word 0x0220282d
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000b
  .word 0x00000000
  .word 0x8ee40a2c
  .word 0x0220282d
  .word 0x0c0c21bc
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0x10400011
  .word 0x00000000
  .word 0x7ba200a0
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0280202d
  .word 0x24060001
  .word 0x0c0b0bb4
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x96c30000
  .word 0x3242ffff
  .word 0x00021040
  .word 0x005d1021
  .word 0xa44300e0
  .word 0x26420001
  .word 0x3052ffff
  .word 0x26620001
  .word 0x3053ffff
  .word 0x3263ffff
  .word 0x7ba200b0
  .word 0x0062102a
  .word 0x1440ffa0
  .word 0x00000000
  .word 0x3242ffff
  .word 0x18400034
  .word 0x00000000
  .word 0x24080001
  .word 0x13c80017
  .word 0x00000000
  .word 0x13c00003
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a600e0
  .word 0x0240382d
  .word 0x0000402d
  .word 0x0c0b1228
  .word 0x00000000
  .word 0x04410022
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a600e0
  .word 0x0240382d
  .word 0x24080001
  .word 0x0c0b1228
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a600e0
  .word 0x0240382d
  .word 0x0c0b1228
  .word 0x00000000
  .word 0x04410011
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a600e0
  .word 0x0240382d
  .word 0x0000402d
  .word 0x0c0b1228
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a600e0
  .word 0x0240382d
  .word 0x3408ffff
  .word 0x0c0b1228
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
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
  .word 0x27bd00f0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_loop_invariants off

// FUN_002c5380

asm u32 func_002c5380(int param_1,int param_2,u16 *param_3,int param_4)
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
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00e0f02d
  .word 0x2410ffff
  .word 0x0000902d
  .word 0x8c950030
  .word 0x8ea40a2c
  .word 0x0c0c22e8
  .word 0x00000000
  .word 0x3051ffff
  .word 0x8ea40a2c
  .word 0x0c0c22ec
  .word 0x00000000
  .word 0x0040b82d
  .word 0x8e620030
  .word 0x8c440a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000002d
  .word 0x00000000
  .word 0x8e620030
  .word 0x8c440a2c
  .word 0x94950008
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3044ffff
  .word 0x00151080
  .word 0x00551821
  .word 0x00031080
  .word 0x00621021
  .word 0x00021880
  .word 0x00041100
  .word 0x00441023
  .word 0x00021080
  .word 0x0043082b
  .word 0x14200004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000019
  .word 0x00000000
  .word 0x8e620030
  .word 0x8c440a2c
  .word 0x2405000e
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24100002
  .word 0x1000000f
  .word 0x00000000
  .word 0x8e620030
  .word 0x8c440a2c
  .word 0x0c0bff5c
  .word 0x00000000
  .word 0x3055ffff
  .word 0x8e620030
  .word 0x8c440a2c
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x02a2082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24100001
  .word 0x00101c3c
  .word 0x00031c3f
  .word 0x24020002
  .word 0x106200db
  .word 0x00000000
  .word 0x24020001
  .word 0x10620052
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000011f
  .word 0x00000000
  .word 0x0000802d
  .word 0x3236ffff
  .word 0x10000044
  .word 0x00000000
  .word 0x3202ffff
  .word 0x00021040
  .word 0x02e29821
  .word 0x96630000
  .word 0x1060003c
  .word 0x00000000
  .word 0x286101d0
  .word 0x10200039
  .word 0x00000000
  .word 0x240200cd
  .word 0x10620006
  .word 0x00000000
  .word 0x240200cc
  .word 0x10620003
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0x3075ffff
  .word 0x2aa20270
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x24846f88
  .word 0x24050468
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e910030
  .word 0x8e240a2c
  .word 0x3c020008
  .word 0x34450274
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000014
  .word 0x00000000
  .word 0x8e240a2c
  .word 0x02a0282d
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e240a2c
  .word 0x02a0282d
  .word 0x0c0c21bc
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0x10400008
  .word 0x00000000
  .word 0x96630000
  .word 0x3242ffff
  .word 0x00021040
  .word 0x005d1021
  .word 0xa44300b0
  .word 0x26420001
  .word 0x3052ffff
  .word 0x26020001
  .word 0x3050ffff
  .word 0x3202ffff
  .word 0x0056102a
  .word 0x1440ffba
  .word 0x00000000
  .word 0x100000d2
  .word 0x00000000
  .word 0x0000802d
  .word 0x3222ffff
  .word 0x7fa200a0
  .word 0x10000047
  .word 0x00000000
  .word 0x3202ffff
  .word 0x00021040
  .word 0x02e2b021
  .word 0x96c40000
  .word 0x1080003f
  .word 0x00000000
  .word 0x288101d0
  .word 0x1020003c
  .word 0x00000000
  .word 0x2482ff40
  .word 0x2c410007
  .word 0x10200038
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637d60
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3091ffff
  .word 0x2a220270
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x24846f88
  .word 0x24050468
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e950030
  .word 0x8ea40a2c
  .word 0x3c020008
  .word 0x34450274
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000014
  .word 0x00000000
  .word 0x8ea40a2c
  .word 0x0220282d
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000b
  .word 0x00000000
  .word 0x8ea40a2c
  .word 0x0220282d
  .word 0x0c0c21bc
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0x10400008
  .word 0x00000000
  .word 0x96c30000
  .word 0x3242ffff
  .word 0x00021040
  .word 0x005d1021
  .word 0xa44300b0
  .word 0x26420001
  .word 0x3052ffff
  .word 0x26020001
  .word 0x3050ffff
  .word 0x3203ffff
  .word 0x7ba200a0
  .word 0x0062102a
  .word 0x1440ffb6
  .word 0x00000000
  .word 0x3242ffff
  .word 0x1840007f
  .word 0x00000000
  .word 0x24080001
  .word 0x13c80017
  .word 0x00000000
  .word 0x13c00003
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x27a600b0
  .word 0x0240382d
  .word 0x0000402d
  .word 0x0c0b1320
  .word 0x00000000
  .word 0x04410022
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x27a600b0
  .word 0x0240382d
  .word 0x24080001
  .word 0x0c0b1320
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x27a600b0
  .word 0x0240382d
  .word 0x0c0b1320
  .word 0x00000000
  .word 0x04410011
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x27a600b0
  .word 0x0240382d
  .word 0x0000402d
  .word 0x0c0b1320
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x27a600b0
  .word 0x0240382d
  .word 0x3408ffff
  .word 0x0c0b1320
  .word 0x00000000
  .word 0x10000057
  .word 0x00000000
  .word 0x0000982d
  .word 0x3236ffff
  .word 0x10000044
  .word 0x00000000
  .word 0x3262ffff
  .word 0x00021040
  .word 0x02e28821
  .word 0x96230000
  .word 0x1060003c
  .word 0x00000000
  .word 0x286101d0
  .word 0x10200039
  .word 0x00000000
  .word 0x240200c8
  .word 0x10620006
  .word 0x00000000
  .word 0x240200c7
  .word 0x10620003
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0x3075ffff
  .word 0x2aa20270
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x24846f88
  .word 0x24050468
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e900030
  .word 0x8e040a2c
  .word 0x3c020008
  .word 0x34450274
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000014
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x02a0282d
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x02a0282d
  .word 0x0c0c21bc
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0x10400008
  .word 0x00000000
  .word 0x96230000
  .word 0x3242ffff
  .word 0x00021040
  .word 0x005d1021
  .word 0xa44300b0
  .word 0x26420001
  .word 0x3052ffff
  .word 0x26620001
  .word 0x3053ffff
  .word 0x3262ffff
  .word 0x0056102a
  .word 0x1440ffba
  .word 0x00000000
  .word 0x3244ffff
  .word 0x18800008
  .word 0x00000000
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x00021040
  .word 0x005d1021
  .word 0x944200b0
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
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
  .word 0x00000000
}

/* W357 measured func_002c59d0: opt_propagation off nd1090/1460B -> nd1035/1472B; window 1520B. */
#pragma opt_propagation off
// FUN_002c59d0

asm u32 func_002c59d0(int param_1,int param_2,int param_3,long param_4)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x00e0b82d
  .word 0x2411ffff
  .word 0x0000982d
  .word 0x8c830030
  .word 0x906200a2
  .word 0x10400004
  .word 0x00000000
  .word 0x0220102d
  .word 0x10000159
  .word 0x00000000
  .word 0x8c620a2c
  .word 0x94520002
  .word 0x24020001
  .word 0x12420004
  .word 0x00000000
  .word 0x2a42000b
  .word 0x14400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000014e
  .word 0x00000000
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000002e
  .word 0x00000000
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x94900008
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3044ffff
  .word 0x00101080
  .word 0x00501821
  .word 0x00031080
  .word 0x00621021
  .word 0x00021880
  .word 0x00041100
  .word 0x00441023
  .word 0x00021080
  .word 0x0043082b
  .word 0x14200004
  .word 0x00000000
  .word 0x24110001
  .word 0x1000001a
  .word 0x00000000
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x3c02000f
  .word 0x3445ffff
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24110002
  .word 0x1000000f
  .word 0x00000000
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x0c0bff5c
  .word 0x00000000
  .word 0x3050ffff
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0202082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24110001
  .word 0x00111c3c
  .word 0x00031c3f
  .word 0x24020002
  .word 0x1062009f
  .word 0x00000000
  .word 0x24020001
  .word 0x10620035
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000100
  .word 0x00000000
  .word 0x0000a02d
  .word 0x0012943c
  .word 0x0012943f
  .word 0x10000026
  .word 0x00000000
  .word 0x00148c3c
  .word 0x00118c3f
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0c05c19c
  .word 0x00000000
  .word 0x3050ffff
  .word 0x2a010fa1
  .word 0x1420001a
  .word 0x00000000
  .word 0x2a011080
  .word 0x10200017
  .word 0x00000000
  .word 0x24020faa
  .word 0x12020006
  .word 0x00000000
  .word 0x24020fa9
  .word 0x12020003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0c05c1b0
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x18400007
  .word 0x00000000
  .word 0x3262ffff
  .word 0x00021040
  .word 0x005d1021
  .word 0xa4500090
  .word 0x26620001
  .word 0x3053ffff
  .word 0x26820001
  .word 0x3054ffff
  .word 0x3282ffff
  .word 0x2842000c
  .word 0x1440ffd8
  .word 0x00000000
  .word 0x100000d0
  .word 0x00000000
  .word 0x0000882d
  .word 0x0012943c
  .word 0x0012943f
  .word 0x10000029
  .word 0x00000000
  .word 0x0011b43c
  .word 0x0016b43f
  .word 0x0240202d
  .word 0x02c0282d
  .word 0x0c05c19c
  .word 0x00000000
  .word 0x3050ffff
  .word 0x2a010fa1
  .word 0x1420001d
  .word 0x00000000
  .word 0x2a011080
  .word 0x1020001a
  .word 0x00000000
  .word 0x24020fa3
  .word 0x12020009
  .word 0x00000000
  .word 0x24020fa2
  .word 0x12020006
  .word 0x00000000
  .word 0x24020fa1
  .word 0x12020003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x02c0282d
  .word 0x0c05c1b0
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x18400007
  .word 0x00000000
  .word 0x3262ffff
  .word 0x00021040
  .word 0x005d1021
  .word 0xa4500090
  .word 0x26620001
  .word 0x3053ffff
  .word 0x26220001
  .word 0x3051ffff
  .word 0x3222ffff
  .word 0x2842000c
  .word 0x1440ffd5
  .word 0x00000000
  .word 0x3262ffff
  .word 0x1840009c
  .word 0x00000000
  .word 0x24080001
  .word 0x12e80017
  .word 0x00000000
  .word 0x12e00003
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a60090
  .word 0x0260382d
  .word 0x0000402d
  .word 0x0c0b1394
  .word 0x00000000
  .word 0x04410022
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a60090
  .word 0x0260382d
  .word 0x24080001
  .word 0x0c0b1394
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a60090
  .word 0x0260382d
  .word 0x0c0b1394
  .word 0x00000000
  .word 0x04410011
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a60090
  .word 0x0260382d
  .word 0x0000402d
  .word 0x0c0b1394
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a60090
  .word 0x0260382d
  .word 0x3408ffff
  .word 0x0c0b1394
  .word 0x00000000
  .word 0x10000074
  .word 0x00000000
  .word 0x0000882d
  .word 0x0012943c
  .word 0x0012943f
  .word 0x10000060
  .word 0x00000000
  .word 0x0011ac3c
  .word 0x0015ac3f
  .word 0x0240202d
  .word 0x02a0282d
  .word 0x0c05c19c
  .word 0x00000000
  .word 0x3050ffff
  .word 0x2a010fa1
  .word 0x14200054
  .word 0x00000000
  .word 0x2a011080
  .word 0x10200051
  .word 0x00000000
  .word 0x0240202d
  .word 0x02a0282d
  .word 0x0c05c1b0
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x18400049
  .word 0x00000000
  .word 0x24020fab
  .word 0x12020039
  .word 0x00000000
  .word 0x24020fb4
  .word 0x12020027
  .word 0x00000000
  .word 0x24020fb3
  .word 0x12020015
  .word 0x00000000
  .word 0x24020fa8
  .word 0x12020003
  .word 0x00000000
  .word 0x1000003b
  .word 0x00000000
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x24050080
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x10400034
  .word 0x00000000
  .word 0x3262ffff
  .word 0x00021040
  .word 0x005d1021
  .word 0xa4500090
  .word 0x26620001
  .word 0x3053ffff
  .word 0x1000002c
  .word 0x00000000
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x24050010
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x10400025
  .word 0x00000000
  .word 0x3262ffff
  .word 0x00021040
  .word 0x005d1021
  .word 0xa4500090
  .word 0x26620001
  .word 0x3053ffff
  .word 0x1000001d
  .word 0x00000000
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x24050001
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x10400016
  .word 0x00000000
  .word 0x3262ffff
  .word 0x00021040
  .word 0x005d1021
  .word 0xa4500090
  .word 0x26620001
  .word 0x3053ffff
  .word 0x1000000e
  .word 0x00000000
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x2405000e
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x3262ffff
  .word 0x00021040
  .word 0x005d1021
  .word 0xa4500090
  .word 0x26620001
  .word 0x3053ffff
  .word 0x26220001
  .word 0x3051ffff
  .word 0x3222ffff
  .word 0x2842000c
  .word 0x1440ff9e
  .word 0x00000000
  .word 0x3264ffff
  .word 0x18800008
  .word 0x00000000
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x00021040
  .word 0x005d1021
  .word 0x94420090
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0xdfbf0080
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

#pragma opt_propagation reset
/* W357 measured func_002c5fc0: opt_dead_assignments off nd574/828B -> nd547/828B; window 832B. */
#pragma opt_dead_assignments off
// FUN_002c5fc0

asm s32 func_002c5fc0(u32 param_1,u32 param_2,short param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff10
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
  .word 0x00a0a02d
  .word 0xafa700dc
  .word 0x0006b43c
  .word 0x0016b43f
  .word 0x24020010
  .word 0x16c20005
  .word 0x00000000
  .word 0x0c0b14e0
  .word 0x00000000
  .word 0x100000ab
  .word 0x00000000
  .word 0x0000902d
  .word 0x8eb00030
  .word 0x8e040a2c
  .word 0x0000282d
  .word 0x0c0c20bc
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x14b6000a
  .word 0x00000000
  .word 0x0280202d
  .word 0x24060001
  .word 0x0c0b0bb4
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0xa7a000e0
  .word 0x26420001
  .word 0x3052ffff
  .word 0x8e040a2c
  .word 0x0c0c22e8
  .word 0x00000000
  .word 0x3051ffff
  .word 0x8e040a2c
  .word 0x0c0c22ec
  .word 0x00000000
  .word 0x7fa200c0
  .word 0x0000982d
  .word 0x3222ffff
  .word 0x7fa200b0
  .word 0x1000004e
  .word 0x00000000
  .word 0x3262ffff
  .word 0x00021840
  .word 0x7ba200c0
  .word 0x0043b821
  .word 0x96e50000
  .word 0x10a00045
  .word 0x00000000
  .word 0x28a101d0
  .word 0x10200042
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x0c0c20bc
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x7fa200a0
  .word 0x1456003a
  .word 0x00000000
  .word 0x96f10000
  .word 0x2a220270
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x24846f88
  .word 0x24050468
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8ebe0030
  .word 0x8fc40a2c
  .word 0x3c020008
  .word 0x34450274
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000014
  .word 0x00000000
  .word 0x8fc40a2c
  .word 0x0220282d
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000b
  .word 0x00000000
  .word 0x8fc40a2c
  .word 0x0220282d
  .word 0x0c0c21bc
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0x10400011
  .word 0x00000000
  .word 0x7ba200a0
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0280202d
  .word 0x24060001
  .word 0x0c0b0bb4
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x96e30000
  .word 0x3242ffff
  .word 0x00021040
  .word 0x005d1021
  .word 0xa44300e0
  .word 0x26420001
  .word 0x3052ffff
  .word 0x26620001
  .word 0x3053ffff
  .word 0x3263ffff
  .word 0x7ba200b0
  .word 0x0062102a
  .word 0x1440ffaf
  .word 0x00000000
  .word 0x3242ffff
  .word 0x18400035
  .word 0x00000000
  .word 0x24080001
  .word 0x8fa200dc
  .word 0x10480017
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a600e0
  .word 0x0240382d
  .word 0x0000402d
  .word 0x0c0b1228
  .word 0x00000000
  .word 0x04410025
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a600e0
  .word 0x0240382d
  .word 0x24080001
  .word 0x0c0b1228
  .word 0x00000000
  .word 0x1000001c
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a600e0
  .word 0x0240382d
  .word 0x0c0b1228
  .word 0x00000000
  .word 0x04410014
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a600e0
  .word 0x0240382d
  .word 0x0000402d
  .word 0x0c0b1228
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a600e0
  .word 0x0240382d
  .word 0x3408ffff
  .word 0x0c0b1228
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
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
  .word 0x27bd00f0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_dead_assignments reset

/* W322 probe: func_002c6300 with opt_common_subs off improved normalized_diff 457 -> 456 (object 664/720). */
#pragma opt_common_subs off
/* W415: corrected the param_3 comparison to emit the required helper; call census now matches retail (nd 456 -> 454, object 720/720). */
// FUN_002c6300

asm s32 func_002c6300(u32 param_1,u32 param_2,short param_3,s32 param_4)
{
  .set noreorder
  .word 0x27bdff20
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
  .word 0x00a0a02d
  .word 0x00e0b02d
  .word 0x0006143c
  .word 0x0002143f
  .word 0x7fa200b0
  .word 0x24030010
  .word 0x14430005
  .word 0x00000000
  .word 0x0c0b1674
  .word 0x00000000
  .word 0x1000008d
  .word 0x00000000
  .word 0x0000902d
  .word 0x8eb10030
  .word 0x922200a2
  .word 0x10400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000085
  .word 0x00000000
  .word 0x8e220a2c
  .word 0x94430002
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x2862000b
  .word 0x14400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000007a
  .word 0x00000000
  .word 0x0000982d
  .word 0x0003bc3c
  .word 0x0017bc3f
  .word 0x1000003a
  .word 0x00000000
  .word 0x0013f43c
  .word 0x001ef43f
  .word 0x02e0202d
  .word 0x03c0282d
  .word 0x0c05c19c
  .word 0x00000000
  .word 0x3050ffff
  .word 0x2a010fa1
  .word 0x1420002e
  .word 0x00000000
  .word 0x2a011080
  .word 0x1020002b
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0c2f08
  .word 0x00000000
  .word 0x3045ffff
  .word 0x18a00025
  .word 0x00000000
  .word 0x28a101d0
  .word 0x10200022
  .word 0x00000000
  .word 0x8e240a2c
  .word 0x0c0c20bc
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x7fa200a0
  .word 0x70401e28
  .word 0x7ba200b0
  .word 0x14620018
  .word 0x00000000
  .word 0x02e0202d
  .word 0x03c0282d
  .word 0x0c05c1b0
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x18400010
  .word 0x00000000
  .word 0x7ba200a0
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0280202d
  .word 0x24060001
  .word 0x0c0b0bb4
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x3242ffff
  .word 0x00021040
  .word 0x005d1021
  .word 0xa45000c0
  .word 0x26420001
  .word 0x3052ffff
  .word 0x26620001
  .word 0x3053ffff
  .word 0x3262ffff
  .word 0x2842000c
  .word 0x1440ffc4
  .word 0x00000000
  .word 0x3242ffff
  .word 0x18400034
  .word 0x00000000
  .word 0x24080001
  .word 0x12c80017
  .word 0x00000000
  .word 0x12c00003
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a600c0
  .word 0x0240382d
  .word 0x0000402d
  .word 0x0c0b12a4
  .word 0x00000000
  .word 0x04410025
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a600c0
  .word 0x0240382d
  .word 0x24080001
  .word 0x0c0b12a4
  .word 0x00000000
  .word 0x1000001c
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a600c0
  .word 0x0240382d
  .word 0x0c0b12a4
  .word 0x00000000
  .word 0x04410014
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a600c0
  .word 0x0240382d
  .word 0x0000402d
  .word 0x0c0b12a4
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a600c0
  .word 0x0240382d
  .word 0x3408ffff
  .word 0x0c0b12a4
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
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
  .word 0x27bd00e0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_common_subs reset

/* W322 rerun probe: func_002c65d0 with opt_loop_invariants on improved normalized_diff 191 -> 125 (object 1068/1072). */
#pragma opt_loop_invariants on
/* W357 measured func_002c65d0: opt_lifetimes on stacked with existing opt_loop_invariants on, nd125/1068B -> nd118/1068B; window 1072B. */
#pragma opt_lifetimes on
// FUN_002c65d0

u32 func_002c65d0(int param_1)

{
  short sVar1 = 0;
  short sVar2 = 0;
  u32 bVar3 = 0;
  u16 uVar4 = 0;
  u16 uVar5 = 0;
  u32 uVar6 = 0;
  u32 uVar7 = 0;
  u32 lVar8 = 0;
  int iVar9 = 0;
  u32 uVar10 = 0;
  u32 uVar11 = 0;
  short *psVar12;
  int iVar13 = 0;
  short asStack_20 [16];
  
  if (*(u16 *)(param_1 + 0xc0) == 1) {
    return *(u32 *)(param_1 + 0x88);
  }
  iVar13 = 0;
    for (uVar6 = 0; uVar6 < *(u16 *)(param_1 + 0xc0); uVar6 = uVar6 + 1) {
      iVar13 = iVar13 + *(int *)(DAT_00696fb0_abs + uVar6 * 4);
      iVar9 = *(int *)(param_1 + uVar6 * 4 + 0x88);
      psVar12 = asStack_20 + uVar6;
      *psVar12 = 0;
      uVar4 = func_002ffdf0(*(u32 *)(*(int *)(iVar9 + 0x30) + 0xa2c));
      uVar5 = func_002ffd70(*(u32 *)(*(int *)(iVar9 + 0x30) + 0xa2c));
      *psVar12 = *psVar12 + (short)(int)(100.0f - ((float)uVar5 / (float)uVar4) * 100.0f);
      lVar8 = func_00300530_u32(*(u32 *)(*(int *)(iVar9 + 0x30) + 0xa2c));
      switch (lVar8) {
      case 2:
        *psVar12 = (short)(int)btlEffectAddFloatFirst((float)(int)*psVar12, 20.0f);
        break;
      case 4:
        *psVar12 = (short)(int)btlEffectAddFloatFirst((float)(int)*psVar12, 30.0f);
        break;
      case 8:
        *psVar12 = (short)(int)btlEffectAddFloatFirst((float)(int)*psVar12, 50.0f);
        break;
      case 0x10:
        *psVar12 = (short)(int)btlEffectAddFloatFirst((float)(int)*psVar12, 30.0f);
        break;
      case 0x20:
        *psVar12 = (short)(int)btlEffectAddFloatFirst((float)(int)*psVar12, 20.0f);
        break;
      case 0x40:
        *psVar12 = (short)(int)btlEffectAddFloatFirst((float)(int)*psVar12, 20.0f);
        break;
      }
    }
    do {
      bVar3 = false;
      for (uVar6 = 0; uVar6 < *(u16 *)(param_1 + 0xc0) - 1; uVar6 = uVar6 + 1) {
        sVar1 = asStack_20[uVar6 + 1];
        sVar2 = asStack_20[uVar6];
        if (sVar2 < sVar1) {
          iVar9 = param_1 + uVar6 * 4;
          uVar7 = *(u32 *)(iVar9 + 0x88);
          *(u32 *)(iVar9 + 0x88) = *(u32 *)(iVar9 + 0x8c);
          *(u32 *)(iVar9 + 0x8c) = uVar7;
          asStack_20[uVar6] = sVar1;
          asStack_20[uVar6 + 1] = sVar2;
          bVar3 = true;
        }
      }
    } while (bVar3);
    uVar11 = 0;
    uVar6 = func_002ffbc0_u32(iVar13);
    for (uVar10 = 0; uVar10 < *(u16 *)(param_1 + 0xc0); uVar10 = uVar10 + 1) {
      uVar11 = uVar11 + *(int *)(DAT_00696fb0_abs + uVar10 * 4);
      if (uVar6 < uVar11) {
        return *(u32 *)(btlEffectAddOffsetFirst(uVar10 * 4, (u32)param_1) + 0x88);
      }
    }
  uVar7 = 0;
  return uVar7;
}
#pragma opt_lifetimes reset
#pragma opt_loop_invariants off

// FUN_002c6a00

asm void func_002c6a00(int param_1,int param_2,u16 param_3)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x00a0802d
  .word 0x30c3ffff
  .word 0x3067f000
  .word 0x34058000
  .word 0x14e50004
  .word 0x00000000
  .word 0x00c0282d
  .word 0x10000002
  .word 0x00000000
  .word 0x30e5ffff
  .word 0x30a7ffff
  .word 0x34058004
  .word 0x10e50049
  .word 0x00000000
  .word 0x34058008
  .word 0x10e50042
  .word 0x00000000
  .word 0x34058001
  .word 0x10e5003b
  .word 0x00000000
  .word 0x34058006
  .word 0x10e50034
  .word 0x00000000
  .word 0x34058005
  .word 0x10e50045
  .word 0x00000000
  .word 0x34058007
  .word 0x10e5002a
  .word 0x00000000
  .word 0x34058002
  .word 0x10e50023
  .word 0x00000000
  .word 0x24052000
  .word 0x10e5001c
  .word 0x00000000
  .word 0x24051000
  .word 0x10e5000f
  .word 0x00000000
  .word 0x34038000
  .word 0x10e30003
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0x24020001
  .word 0xa6020034
  .word 0x8c820030
  .word 0x8c440a2c
  .word 0x0c0c224c
  .word 0x00000000
  .word 0xa6020036
  .word 0x1000002b
  .word 0x00000000
  .word 0x24040009
  .word 0xa6040034
  .word 0x24040155
  .word 0xa6040036
  .word 0x3c04ffff
  .word 0x34840fff
  .word 0x00641824
  .word 0xa603003e
  .word 0x10000021
  .word 0x00000000
  .word 0x3c05ffff
  .word 0x34a50fff
  .word 0x00651824
  .word 0xa48300dc
  .word 0x24030007
  .word 0xa6030034
  .word 0x10000019
  .word 0x00000000
  .word 0x24030008
  .word 0xa6030034
  .word 0x10000015
  .word 0x00000000
  .word 0x2403000b
  .word 0xa6030034
  .word 0x10000011
  .word 0x00000000
  .word 0x24030006
  .word 0xa6030034
  .word 0x1000000d
  .word 0x00000000
  .word 0x2403000c
  .word 0xa6030034
  .word 0x10000009
  .word 0x00000000
  .word 0x8c820030
  .word 0x8c440a2c
  .word 0x0c0c22a0
  .word 0x00000000
  .word 0x3046ffff
  .word 0x24030002
  .word 0xa6030034
  .word 0xa6060036
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_002c6ba0

/* W322 probe: func_002c6ba0 with opt_loop_invariants on improved normalized_diff 394 -> 358 (object 632/656). */
#pragma opt_loop_invariants on
asm u16 func_002c6ba0(int param_1)
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
  .word 0x0080802d
  .word 0x8c820030
  .word 0x944300a4
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00431021
  .word 0x00021880
  .word 0x8f82b72c
  .word 0x00439821
  .word 0x0000a82d
  .word 0x1000007f
  .word 0x00000000
  .word 0x32a3ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021080
  .word 0x02621021
  .word 0x24520004
  .word 0x0000a02d
  .word 0x1000001d
  .word 0x00000000
  .word 0x3282ffff
  .word 0x00028880
  .word 0x02511021
  .word 0x8c440000
  .word 0x3c02ff00
  .word 0x00821024
  .word 0x00021e02
  .word 0x00042a3c
  .word 0x00052a3e
  .word 0x14600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000b
  .word 0x00000000
  .word 0x0200202d
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x3c020069
  .word 0x244271b0
  .word 0x00431021
  .word 0x8c420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x023d1821
  .word 0xac620070
  .word 0x26820001
  .word 0x3054ffff
  .word 0x3282ffff
  .word 0x28420003
  .word 0x1440ffe1
  .word 0x00000000
  .word 0x8fa20070
  .word 0x1040000d
  .word 0x00000000
  .word 0x8fa20074
  .word 0x1040000a
  .word 0x00000000
  .word 0x8fa20078
  .word 0x10400007
  .word 0x00000000
  .word 0x9242000c
  .word 0x24030008
  .word 0x10430003
  .word 0x00000000
  .word 0x1000004c
  .word 0x00000000
  .word 0x8fa20070
  .word 0x1040000a
  .word 0x00000000
  .word 0x8fa20074
  .word 0x10400007
  .word 0x00000000
  .word 0x9242000d
  .word 0x24030008
  .word 0x10430003
  .word 0x00000000
  .word 0x10000040
  .word 0x00000000
  .word 0x8fa20070
  .word 0x1040000a
  .word 0x00000000
  .word 0x8fa20078
  .word 0x10400007
  .word 0x00000000
  .word 0x9242000e
  .word 0x24030008
  .word 0x10430003
  .word 0x00000000
  .word 0x10000034
  .word 0x00000000
  .word 0x8fa40074
  .word 0x1080000a
  .word 0x00000000
  .word 0x8fa20078
  .word 0x10400007
  .word 0x00000000
  .word 0x9242000f
  .word 0x24030008
  .word 0x10430003
  .word 0x00000000
  .word 0x10000028
  .word 0x00000000
  .word 0x8fa20070
  .word 0x10400007
  .word 0x00000000
  .word 0x92420010
  .word 0x24030008
  .word 0x10430003
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x10800007
  .word 0x00000000
  .word 0x92420011
  .word 0x24030008
  .word 0x10430003
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x8fa20078
  .word 0x10400007
  .word 0x00000000
  .word 0x92420012
  .word 0x24030008
  .word 0x10430003
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x92420013
  .word 0x24030008
  .word 0x10430003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x26a20001
  .word 0x3055ffff
  .word 0x32a2ffff
  .word 0x28420002
  .word 0x1440ff7f
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
#pragma opt_loop_invariants off

/* BtlCore2 W419 negative: c6e30 direct loop-index/removal probes held nd46 at 288B; shared-counter variant failed compilation. */
/* W422: static-inline base-first address helper on both weight loops preserved 288B and reduced nd46 -> 32; remaining rows are loop-index/register order and global-address floor. */
/* W422 reverted probes: direct-index and first-loop-while forms held nd44/32; u8 weight held nd32; u16 weight nd86 at 292/288; second-index alias nd91 at 300/288. */
static inline u8* btlEffectAddFirst(u8* base, u32 offset)
{
  return base + offset;
}
/* DUMMYDUMB session 2026-10-20: 32 differing bytes in a 288-byte function (the
 * size matches). The residual is a saved-register role difference (ours keeps
 * the incoming pointers in $s2/$s1/$s0 where retail uses $s4/$s3/$s2). Probed
 * with the declaration-order lever - 9 locals, 20 permutations (original,
 * reverse, rotations, adjacent swaps, and the orders sorted by pointer-ness and
 * by type): every order stayed at 32 or went to 39. Confirmed wall. */
// FUN_002c6e30

asm undefined* func_002c6e30(int unit, u32 group)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c820030
  .word 0x944300a4
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00431021
  .word 0x00021880
  .word 0x8f82b72c
  .word 0x00432021
  .word 0x0000302d
  .word 0x0000382d
  .word 0x30a3ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00828021
  .word 0x10000009
  .word 0x00000000
  .word 0x30e2ffff
  .word 0x000210c0
  .word 0x02021021
  .word 0x9042002c
  .word 0x00c21021
  .word 0x3046ffff
  .word 0x24e20001
  .word 0x3047ffff
  .word 0x30e2ffff
  .word 0x28420005
  .word 0x1440fff5
  .word 0x00000000
  .word 0x30c4ffff
  .word 0x14800004
  .word 0x00000000
  .word 0x27829a50
  .word 0x1000001d
  .word 0x00000000
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x3045ffff
  .word 0x0000382d
  .word 0x0000302d
  .word 0x10000011
  .word 0x00000000
  .word 0x30c2ffff
  .word 0x000210c0
  .word 0x02022021
  .word 0x9083002c
  .word 0x00e31021
  .word 0x3047ffff
  .word 0x00e5082a
  .word 0x14200006
  .word 0x00000000
  .word 0x18600004
  .word 0x00000000
  .word 0x2482002c
  .word 0x10000008
  .word 0x00000000
  .word 0x24c20001
  .word 0x3046ffff
  .word 0x30c2ffff
  .word 0x28420005
  .word 0x1440ffed
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
}

// FUN_002c6f50

asm u32 func_002c6f50(u32 param_1,int param_2,u32 param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x00c0902d
  .word 0x8c830030
  .word 0x906200a2
  .word 0x14400010
  .word 0x00000000
  .word 0x8c620a2c
  .word 0x90420010
  .word 0x27a40060
  .word 0x3c050069
  .word 0x24a57710
  .word 0x00e0302d
  .word 0x0040382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50060
  .word 0x0c0d7024
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x00e0102d
  .word 0x8f83b6fc
  .word 0x8c630d18
  .word 0x8c630020
  .word 0x2464ffff
  .word 0x0240282d
  .word 0x0040302d
  .word 0x0c0d6ed0
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0280202d
  .word 0x0220282d
  .word 0x0c0d7068
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0d6b84
  .word 0x00000000
  .word 0x0040902d
  .word 0x8c4200cc
  .word 0x0440001c
  .word 0x00000000
  .word 0x8e240030
  .word 0x908300a2
  .word 0x24020001
  .word 0x1062000b
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x848400a4
  .word 0x0c05de2c
  .word 0x00000000
  .word 0x0040982d
  .word 0x10000008
  .word 0x00000000
  .word 0x948300a4
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x00431821
  .word 0x8f82b7f8
  .word 0x00439821
  .word 0x8e4400cc
  .word 0x0000282d
  .word 0x0260302d
  .word 0x0c0e9088
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440d18
  .word 0x0280282d
  .word 0x0c065554
  .word 0x00000000
  .word 0xae14004c
  .word 0x24020001
  .word 0xdfbf0050
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

// FUN_002c70d0

void func_002c70d0(int param_1, int param_2)
{
  u8 type;
  u16 baseActionId;
  u16 actionId;
  int entry;
  u32 actionWord;
  u32 data;
  u32 result;

  baseActionId = *(u16 *)(*(int *)(param_1 + 0x30) + 0xa4);
  func_002d15a0(param_2);
  type = *(u8 *)(*(int *)(param_1 + 0x30) + 0xa2);
  switch (type) {
  case 0:
    actionId = baseActionId;
    data = (u32)DAT_007ce4cc;
    break;
  case 1:
    {
      u8 *table;
      u32 off;

      table = *(u8 * volatile *)&DAT_007ce41c;
      off = ((u32)baseActionId * 0x28 + (u32)baseActionId) * 4;
      table = (u8 *)(off) + (int)table;
      actionId = *(u16 *)(table + 2);
      data = (u32)DAT_007ce4d0;
    }
    break;
  }
  if (actionId > 0) {
    func_002c6f50_u32(param_1, param_2, data, actionId);
    *(u8 *)(param_2 + 0x30) = 1;
  }
  else {
    actionId = func_002c6ba0(param_1);
    entry = (int)func_002c6e30(param_1, actionId);
    func_002c6a00(param_1, param_2, *(u16 *)(entry + 2));
    actionWord = *(u32 *)(entry + 4);
    result = (*(PTR_FUN_006975e0_abs)[((actionWord & 0xff000000) >> 0x18) * 2])
                 (param_1, actionWord & 0xffffff);
    if (result == 0) {
      (*(code *)PTR_FUN_006975e0_abs)(param_1, 0);
    }
  }
}

// FUN_002c7250

bool func_002c7250(int param_1)

{
  if (*(u8 *)(param_1 + 0x30) != 0) {
    return true;
  }
  return *(int *)(param_1 + 0x4c) != 0;
}

// FUN_002c7280

u32 func_002c7280(int param_1)

{
  u32 uVar1 = 0;
  long lVar2 = 0;
  
  if (*(u8 *)(param_1 + 0x30) == 0) {
    uVar1 = 1;
  }
  else if (*(int *)(param_1 + 0x4c) == 0) {
    uVar1 = 1;
  }
  else {
    lVar2 = func_00195460(*(int *)(param_1 + 0x4c));
    if (lVar2 == 0) {
      *(u8 *)(param_1 + 0x30) = 0;
      *(u32 *)(param_1 + 0x4c) = 0;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

// FUN_002c7300

u32 func_002c7300(void)

{
  extern u32 func_0035f160(void);
  extern void func_002c6a00(void *,void *,u16);
  char *pVar1 = (char *)func_0035f160();

  func_002c6a00(pVar1,pVar1 + 0x38,0x8000);
  return 1;
}

// FUN_002c7340

u32 func_002c7340(void)

{
  extern void *func_0035f160(void);
  extern s32 func_0035ed20(u32);
  extern void func_002c6a00(void *,void *,u16);
  char *state;
  s32 selection;

  state = (char *)func_0035f160();
  selection = func_0035ed20(0);
  if (selection == 0) {
    func_002c6a00(state,state + 0x38,0x8000);
  }
  else if (selection > 0) {
    func_002c6a00(state,state + 0x38,(u16)selection);
  }
  else {
    func_002c6a00(state,state + 0x38,0x8002);
  }
  return 1;
}

// FUN_002c73e0

u32 func_002c73e0(void)

{
  extern void *func_0035f160(void);
  extern s32 func_0035ed20(u32);
  extern void func_002c6a00(void *,void *,u16);
  char *state;
  s32 selection;
  u16 selectedIndex;

  state = (char *)func_0035f160();
  selection = func_0035ed20(0);
  if (selection >= 0) {
    *(u16 *)(state + 0x6c) = 3;
    *(s16 *)(state + 0x70) = (selectedIndex = (u16)selection, selection);
    *(u16 *)(state + 0x6e) = func_0030bc20(selectedIndex);
  }
  else {
    func_002c6a00(state,state + 0x38,0x8002);
  }
  return 1;
}

// FUN_002c7460

u32 func_002c7460(void)

{
  extern u32 func_0035f160(void);
  extern void func_002c6a00(void *,void *,u16);
  char *pVar1 = 0;
  
  pVar1 = (char *)func_0035f160();
  func_002c6a00(pVar1,pVar1 + 0x38,0x8001);
  return 1;
}

// FUN_002c74a0

u32 func_002c74a0(void)

{
  extern u32 func_0035f160(void);
  extern void func_002c6a00(void *,void *,u16);
  char *pVar1 = 0;
  
  pVar1 = (char *)func_0035f160();
  func_002c6a00(pVar1,pVar1 + 0x38,0x8002);
  return 1;
}

// FUN_002c74e0

u32 func_002c74e0(void)

{
  extern u32 func_0035f160(void);
  extern void func_002c6a00(void *,void *,u16);
  char *pVar1 = (char *)func_0035f160();
  u16 uVar1 = func_0035ed20(0);

  *(u16 *)(pVar1 + 0xdc) = uVar1;
  func_002c6a00(pVar1,pVar1 + 0x38,0x8002);
  return 1;
}

// FUN_002c7540

u32 func_002c7540(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  char *unit;
  s32 result;

  unit = (char *)func_0035f160();
  *(u16 *)(unit + 0x6c) = 9;
  *(u16 *)(unit + 0x6e) = 0x155;
  *(u16 *)(unit + 0x76) = func_0035ed20(0);
  result = (*(s32 (**)(void *,u32))PTR_FUN_00697620)(unit,0);
  if (result == 0) {
    (*(s32 (**)(void *,u32))PTR_FUN_006975e0)(unit,0);
  }
  return 1;
}

// FUN_002c75d0

u32 func_002c75d0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  char *unit;
  s32 result;

  unit = (char *)func_0035f160();
  *(u16 *)(unit + 0x6c) = 9;
  *(u16 *)(unit + 0x6e) = 0x155;
  *(u16 *)(unit + 0x76) = func_0035ed20(0);
  *(u16 *)(unit + 0x78) = func_0035ed20(1);
  result = (*(s32 (**)(void *,u32))PTR_FUN_00697620)(unit,0);
  if (result == 0) {
    (*(s32 (**)(void *,u32))PTR_FUN_006975e0)(unit,0);
  }
  return 1;
}

// FUN_002c7670

u32 func_002c7670(void)

{
  extern u32 func_0035f160(void);
  extern void func_002c6a00(void *,void *,u16);
  char *pVar1 = 0;
  
  pVar1 = (char *)func_0035f160();
  func_002c6a00(pVar1,pVar1 + 0x38,0x8007);
  return 1;
}

// FUN_002c76b0

u32 func_002c76b0(void)
{
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x1000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c7760

u32 func_002c7760(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x2000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c7810

u32 func_002c7810(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x03000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c78c0

u32 func_002c78c0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x04000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c7970

u32 func_002c7970(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x05000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c7a20

u32 func_002c7a20(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x06000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c7ad0

u32 func_002c7ad0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x07000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c7b80

u32 func_002c7b80(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x08000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c7c30

u32 func_002c7c30(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x09000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c7ce0

u32 func_002c7ce0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x0a000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c7d90

u32 func_002c7d90(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x0b000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c7e40

u32 func_002c7e40(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x0c000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c7ef0

u32 func_002c7ef0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x0d000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c7fa0

u32 func_002c7fa0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x0e000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8050

u32 func_002c8050(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x0f000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8100

u32 func_002c8100(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x10000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c81b0

u32 func_002c81b0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x11000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8260

u32 func_002c8260(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x12000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8310

u32 func_002c8310(void)

{
  u64 uVar1 = 0;
  u32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_00697294)(uVar1,0);
  func_0035f060(lVar2 != 0);
  return 1;
}

// FUN_002c8360

u32 func_002c8360(void)

{
  u64 uVar1 = 0;
  u32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_006972a0)(uVar1,0);
  func_0035f060(lVar2 != 0);
  return 1;
}

// FUN_002c83b0

u32 func_002c83b0(void)

{
  u64 uVar1 = 0;
  u32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_006972ac)(uVar1,0);
  func_0035f060(lVar2 != 0);
  return 1;
}

// FUN_002c8400

u32 func_002c8400(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x16000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c84b0

u32 func_002c84b0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x17000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8560

u32 func_002c8560(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x18000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8610

u32 func_002c8610(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x19000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c86c0

u32 func_002c86c0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x1a000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8770

u32 func_002c8770(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x1b000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8820

u32 func_002c8820(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x1c000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c88d0

u32 func_002c88d0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x1d000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8980

u32 func_002c8980(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x1e000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8a30

u32 func_002c8a30(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x1f000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8ae0

u32 func_002c8ae0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x20000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8b90

u32 func_002c8b90(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x21000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8c40

u32 func_002c8c40(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x22000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8cf0

u32 func_002c8cf0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x23000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8da0

u32 func_002c8da0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x24000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8e50

u32 func_002c8e50(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x25000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8f00

u32 func_002c8f00(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x26000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c8fb0

u32 func_002c8fb0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x27000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c9060

u32 func_002c9060(void)

{
  u64 uVar1 = 0;
  u32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_00697390)(uVar1,0);
  func_0035f060(lVar2 != 0);
  return 1;
}

// FUN_002c90b0

u32 func_002c90b0(void)

{
  u64 uVar1 = 0;
  u32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_0069739c)(uVar1,0);
  func_0035f060(lVar2 != 0);
  return 1;
}

// FUN_002c9100

u32 func_002c9100(void)

{
  u64 uVar1 = 0;
  u32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_006973a8)(uVar1,0);
  func_0035f060(lVar2 != 0);
  return 1;
}

// FUN_002c9150

u32 func_002c9150(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x2b000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c9200

u32 func_002c9200(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x2c000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c92b0

u32 func_002c92b0(void)

{
  u64 uVar1 = 0;
  u32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_006973cc)(uVar1,0);
  func_0035f060(lVar2 != 0);
  return 1;
}

// FUN_002c9300

u32 func_002c9300(void)

{
  u64 uVar1 = 0;
  u32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_006973d8)(uVar1,0);
  func_0035f060(lVar2 != 0);
  return 1;
}

// FUN_002c9350

u32 func_002c9350(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x2f000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c9400

u32 func_002c9400(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x30000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c94b0

u32 func_002c94b0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x31000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c9560

u32 func_002c9560(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x32000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c9610

u32 func_002c9610(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x33000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c96c0

u32 func_002c96c0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x34000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c9770

u32 func_002c9770(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x35000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c9820

u32 func_002c9820(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x36000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c98d0

u32 func_002c98d0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  id = func_0035ed20(0);
  context = func_002c0e30(id,
      1 << *(u8 *)(*(int *)(unit + 0x30) + 0xa2) & 0xffff,
      0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x01000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    }
    else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c99c0

u32 func_002c99c0(void) {
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  id = func_0035ed20(0);
  context = func_002c0e30(id,
      1 << *(u8 *)(*(int *)(unit + 0x30) + 0xa2) & 0xffff,
      0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x02000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    }
    else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c9ab0

u32 func_002c9ab0(void) {
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  id = func_0035ed20(0);
  context = func_002c0e30(id,
      1 << *(u8 *)(*(int *)(unit + 0x30) + 0xa2) & 0xffff,
      0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x06000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    }
    else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c9ba0 MATCHING

u32 func_002c9ba0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  extern void func_0035f060(u32);
  u16 id;
  u32 unit;
  u32 argument;
  u32 sideMask;
  int context;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;
  
  argument = func_0035ed20(1);
  unit = func_0035f160();
  sideMask = 1 << *(u8 *)(*(int *)(unit + 0x30) + 0xa2) & 0xffff;
  if ((argument & 0x80000) != 0) {
    id = func_0035ed20(0);
    context = func_002c0e30(id, sideMask, 0);
  }
  else {
    id = func_0035ed20(0);
    context = func_002c0e30(id, sideMask, 0x80000);
  }
  if (context != 0) {
    dispatchType = (((argument & 0xffffff) | 0x0b000000) & 0xff000000) >> 24;
    payload = (argument | 0x0b000000) & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    }
    else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context, payload);
    }
    result = dispatchResult;
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c9ce0 MATCHING

u32 func_002c9ce0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  extern int func_00301ca0(u32,u32);
  extern void func_0035f060(u32);
  u32 unit;
  u16 id;
  int context;
  u32 argument;
  int result;
  
  unit = func_0035f160();
  id = func_0035ed20(0);
  context = func_002c0e30(id,
      1 << *(u8 *)(*(int *)(unit + 0x30) + 0xa2) & 0xffff,
      0x80000);
  if (context != 0) {
    argument = func_0035ed20(1);
    result = func_00301ca0(*(u32 *)(*(int *)(context + 0x30) + 0xa2c), argument);
    if (result != 0) {
      result = 1;
    }
    else {
      result = 0;
    }
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c9da0

u32 func_002c9da0(void) {
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  id = func_0035ed20(0);
  context = func_002c0e30(id,
      1 << *(u8 *)(*(int *)(unit + 0x30) + 0xa2) & 0xffff,
      0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x16000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    }
    else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c9e90

u32 func_002c9e90(void) {
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  id = func_0035ed20(0);
  context = func_002c0e30(id,
      1 << *(u8 *)(*(int *)(unit + 0x30) + 0xa2) & 0xffff,
      0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x17000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    }
    else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002c9f80

u32 func_002c9f80(void) {
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  id = func_0035ed20(0);
  context = func_002c0e30(id,
      1 << *(u8 *)(*(int *)(unit + 0x30) + 0xa2) & 0xffff,
      0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x18000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    }
    else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002ca070

u32 func_002ca070(void) {
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  id = func_0035ed20(0);
  context = func_002c0e30(id,
      1 << *(u8 *)(*(int *)(unit + 0x30) + 0xa2) & 0xffff,
      0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x19000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    }
    else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002ca160

u32 func_002ca160(void) {
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  id = func_0035ed20(0);
  context = func_002c0e30(id,
      1 << *(u8 *)(*(int *)(unit + 0x30) + 0xa2) & 0xffff,
      0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x22000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    }
    else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002ca250

u32 func_002ca250(void) {
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  id = func_0035ed20(0);
  context = func_002c0e30(id,
      1 << *(u8 *)(*(int *)(unit + 0x30) + 0xa2) & 0xffff,
      0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x25000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    }
    else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002ca340

u32 func_002ca340(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  int context;
  int result;

  unit = func_0035f160();
  id = func_0035ed20(0);
  context = func_002c0e30(id,
      1 << *(u8 *)(*(int *)(unit + 0x30) + 0xa2) & 0xffff,
      0x80000);
  if (context != 0) {
    result = (*(int (**)(int,u32))PTR_FUN_00697390)(context,0);
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002ca3e0

u32 func_002ca3e0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  int context;
  int result;

  unit = func_0035f160();
  id = func_0035ed20(0);
  context = func_002c0e30(id,
      1 << *(u8 *)(*(int *)(unit + 0x30) + 0xa2) & 0xffff,
      0x80000);
  if (context != 0) {
    result = (*(int (**)(int,u32))PTR_FUN_006973cc)(context,0);
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

#pragma push
/* Removing this loses FUN_002ca480 (MATCH nd0 -> MISMATCH nd158) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002ca480

u32 func_002ca480(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  u32 shift;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  {
      if (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) != 0)
        goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      ;
    }
  id = func_0035ed20(0);
  context = func_002c0e30(id,1 << shift & 0xffff,0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x01000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    } else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  } else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002ca590 (MATCH nd0 -> MISMATCH nd158) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002ca590

u32 func_002ca590(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  u32 shift;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  {
      if (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) != 0)
        goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      ;
    }
  id = func_0035ed20(0);
  context = func_002c0e30(id,1 << shift & 0xffff,0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x02000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    } else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  } else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002ca6a0 (MATCH nd0 -> MISMATCH nd158) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002ca6a0

u32 func_002ca6a0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  u32 shift;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  {
      if (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) != 0)
        goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      ;
    }
  id = func_0035ed20(0);
  context = func_002c0e30(id,1 << shift & 0xffff,0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x06000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    } else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  } else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002ca7b0 (MATCH nd0 -> MISMATCH nd202) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002ca7b0
u32 func_002ca7b0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  extern void func_0035f060(u32);
  u16 id;
  u32 unit;
  u32 argument;
  u32 sideMask;
  u32 shift;
  int context;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  argument = func_0035ed20(1);
  unit = func_0035f160();
  if (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) != 0)
    goto nonzero;
  shift = 1;
  goto done;
nonzero:
  shift = 0;
done:
  sideMask = 1 << shift & 0xffff;
  if ((argument & 0x80000) != 0) {
    id = func_0035ed20(0);
    context = func_002c0e30(id,sideMask,0);
  } else {
    id = func_0035ed20(0);
    context = func_002c0e30(id,sideMask,0x80000);
  }
  if (context != 0) {
    dispatchType = (((argument & 0xffffff) | 0x0b000000) & 0xff000000) >> 24;
    payload = (argument | 0x0b000000) & 0xffffff;
    if (dispatchType == 0)
      dispatchResult = 0;
    else
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    result = dispatchResult;
  } else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002ca900 (MATCH nd0 -> MISMATCH nd113) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002ca900
u32 func_002ca900(void)
{
  extern int func_002c0e30(u16,u32,u32);
  extern int func_00301ca0(u32,u32);
  u32 unit;
  u32 shift;
  u32 id;
  int context;
  u32 selector;
  u32 result;

  unit = func_0035f160_u32();
  if (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) != 0)
    goto nonzero;
  shift = 1;
  goto done;
nonzero:
  shift = 0;
done:
  id = func_0035ed20_u32(0);
  context = func_002c0e30((u16)id,1 << shift & 0xffff,0x80000);
  if (context != 0) {
    selector = func_0035ed20_u32(1);
    if (func_00301ca0(*(u32 *)(*(int *)(context + 0x30) + 0xa2c),selector) != 0)
      result = 1;
    else
      result = 0;
  } else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002ca9d0 (MATCH nd0 -> MISMATCH nd158) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002ca9d0

u32 func_002ca9d0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  u32 shift;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  {
      if (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) != 0)
        goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      ;
    }
  id = func_0035ed20(0);
  context = func_002c0e30(id,1 << shift & 0xffff,0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x16000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    } else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  } else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002caae0 (MATCH nd0 -> MISMATCH nd158) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002caae0

u32 func_002caae0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  u32 shift;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  {
      if (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) != 0)
        goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      ;
    }
  id = func_0035ed20(0);
  context = func_002c0e30(id,1 << shift & 0xffff,0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x17000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    } else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  } else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002cabf0 (MATCH nd0 -> MISMATCH nd158) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002cabf0

u32 func_002cabf0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  u32 shift;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  {
      if (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) != 0)
        goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      ;
    }
  id = func_0035ed20(0);
  context = func_002c0e30(id,1 << shift & 0xffff,0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x18000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    } else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  } else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002cad00 (MATCH nd0 -> MISMATCH nd158) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002cad00

u32 func_002cad00(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  u32 shift;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  {
      if (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) != 0)
        goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      ;
    }
  id = func_0035ed20(0);
  context = func_002c0e30(id,1 << shift & 0xffff,0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x19000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    } else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  } else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002cae10 (MATCH nd0 -> MISMATCH nd158) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002cae10

u32 func_002cae10(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  u32 shift;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  {
      if (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) != 0)
        goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      ;
    }
  id = func_0035ed20(0);
  context = func_002c0e30(id,1 << shift & 0xffff,0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x22000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    } else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  } else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002caf20 (MATCH nd0 -> MISMATCH nd158) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002caf20

u32 func_002caf20(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  u32 shift;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  {
      if (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) != 0)
        goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      ;
    }
  id = func_0035ed20(0);
  context = func_002c0e30(id,1 << shift & 0xffff,0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x25000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    } else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  } else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002cb030 (MATCH nd0 -> MISMATCH nd89) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002cb030

u32 func_002cb030(void)
{
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u32 selector;
  u32 shift;
  s32 context;
  s32 result;

  unit = func_0035f160_u32();
  {
      if (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) != 0)
        goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      ;
    }
  selector = func_0035ed20_u32(0);
  context = func_002c0e30((u16)selector,1 << shift & 0xffff,0x80000);
  if (context != 0) {
    result = (*(code *)PTR_FUN_00697390)(context,0);
  } else {
    result = 0;
  }
  func_0035f060_u32(result != 0);
  return 1;
}
#pragma pop

#pragma push
/* Removing this loses FUN_002cb0e0 (MATCH nd0 -> MISMATCH nd89) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002cb0e0

u32 func_002cb0e0(void)
{
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u32 selector;
  u32 shift;
  s32 context;
  s32 result;

  unit = func_0035f160_u32();
  {
      if (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) != 0)
        goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      ;
    }
  selector = func_0035ed20_u32(0);
  context = func_002c0e30((u16)selector,1 << shift & 0xffff,0x80000);
  if (context != 0) {
    result = (*(code *)PTR_FUN_006973cc)(context,0);
  } else {
    result = 0;
  }
  func_0035f060_u32(result != 0);
  return 1;
}
#pragma pop

// FUN_002cb190

u32 func_002cb190(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  u32 unit;
  u16 side;
  u16 id;
  int result;

  unit = func_0035f160();
  side = func_0035ed20(0);
  id = func_0035ed20(1);
  result = 1;
  switch (side) {
  case 0:
    if (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) != 0) {
      result = 0;
    }
    break;
  case 1:
    if (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) != 1) {
      result = 0;
    }
    break;
  }
  if (result == 1) {
    if (*(u16 *)(*(int *)(unit + 0x30) + 0xa4) != id) {
      result = 0;
    }
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cb270

u32 func_002cb270(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x38000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cb320

u32 func_002cb320(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x39000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cb3d0

u32 func_002cb3d0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x3a000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cb480

u32 func_002cb480(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x3b000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cb530

u32 func_002cb530(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x3c000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cb5e0

u32 func_002cb5e0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x3d000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cb690

u32 func_002cb690(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x3e000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cb740

u32 func_002cb740(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x3f000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cb7f0

u32 func_002cb7f0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x40000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cb8a0

u32 func_002cb8a0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x41000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cb950

u32 func_002cb950(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x42000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cba00

u32 func_002cba00(void)

{
  u64 uVar1 = 0;
  u32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_006974d4)(uVar1,0);
  func_0035f060(lVar2 != 0);
  return 1;
}

// FUN_002cba50

u32 func_002cba50(void)

{
  u64 uVar1 = 0;
  u32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_006974e0)(uVar1,0);
  func_0035f060(lVar2 != 0);
  return 1;
}

// FUN_002cbaa0

u32 func_002cbaa0(void)

{
  u64 uVar1 = 0;
  u32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_006974ec)(uVar1,0);
  func_0035f060(lVar2 != 0);
  return 1;
}

// FUN_002cbaf0

u32 func_002cbaf0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x46000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cbba0

u32 func_002cbba0(void)
{
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  int context;
  u16 side;
  u16 id;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  side = func_0035ed20(0);
  id = func_0035ed20(1);
  context = 0;
  switch (side) {
  case 0:
    context = func_002c0e30(id,1,0x80000);
    break;
  case 1:
    context = func_002c0e30(id,2,0x80000);
    break;
  }
  if (context != 0) {
    selector = (func_0035ed20(2) & 0xffffff) | 0x19000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    }
    else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cbcd0

u32 func_002cbcd0(void)
{
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u16 side;
  u16 id;
  int context;
  int result;

  side = func_0035ed20(0);
  id = func_0035ed20(1);
  context = 0;
  switch (side) {
  case 0:
    context = func_002c0e30(id,1,0x80000);
    break;
  case 1:
    context = func_002c0e30(id,2,0x80000);
    break;
  }
  if (context != 0) {
    result = (*(u16 *)(context + 0x18) & 0x1800) != 0;
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cbd90

u32 func_002cbd90(void)
{
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u16 side;
  u16 id;
  int context;
  int result;

  side = func_0035ed20(0);
  id = func_0035ed20(1);
  context = 0;
  switch (side) {
  case 0:
    context = func_002c0e30(id,1,0x80000);
    break;
  case 1:
    context = func_002c0e30(id,2,0x80000);
    break;
  }
  if (context != 0) {
    result = (*(u16 *)(context + 0x18) & 0x1000) != 0;
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cbe50

u32 func_002cbe50(void)
{
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u16 side;
  u16 id;
  int context;
  int result;

  side = func_0035ed20(0);
  id = func_0035ed20(1);
  context = 0;
  switch (side) {
  case 0:
    context = func_002c0e30(id,1,0x80000);
    break;
  case 1:
    context = func_002c0e30(id,2,0x80000);
    break;
  }
  if (context != 0) {
    result = (*(u16 *)(context + 0x18) & 0x800) != 0;
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cbf10

u32 func_002cbf10(void)
{
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u16 side;
  u16 id;
  int context;
  int result;

  side = func_0035ed20(0);
  id = func_0035ed20(1);
  context = 0;
  switch (side) {
  case 0:
    context = func_002c0e30(id,1,0x80000);
    break;
  case 1:
    context = func_002c0e30(id,2,0x80000);
    break;
  }
  if (context != 0) {
    result = (*(u16 *)(context + 0x18) & 0x2000) != 0;
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cbfd0

u32 func_002cbfd0(void)
{
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u16 side;
  u16 id;
  int context;
  int result;

  side = func_0035ed20(0);
  id = func_0035ed20(1);
  context = 0;
  switch (side) {
  case 0:
    context = func_002c0e30(id,1,0x80000);
    break;
  case 1:
    context = func_002c0e30(id,2,0x80000);
    break;
  }
  if (context != 0) {
    result = gFormationDispatchTable[67 * 3](context,0);
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cc0a0

u32 func_002cc0a0(void) {
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  id = func_0035ed20(0);
  context = func_002c0e30(id,
      1 << *(u8 *)(*(int *)(unit + 0x30) + 0xa2) & 0xffff,
      0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x3a000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    }
    else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cc190

u32 func_002cc190(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 dispatchType;
  u32 payload;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x47000000;
  actor = func_0035f160();
  dispatchType = (selector & 0xff000000) >> 24;
  payload = selector & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cc240

u32 func_002cc240(void) {
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u32 unit;
  u16 id;
  int context;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;
  int dispatchResult;

  unit = func_0035f160();
  id = func_0035ed20(0);
  context = func_002c0e30(id,
      1 << *(u8 *)(*(int *)(unit + 0x30) + 0xa2) & 0xffff,
      0x80000);
  if (context != 0) {
    selector = (func_0035ed20(1) & 0xffffff) | 0x3e000000;
    dispatchType = (selector & 0xff000000) >> 24;
    payload = selector & 0xffffff;
    if (dispatchType == 0) {
      dispatchResult = 0;
    }
    else {
      dispatchResult = gFormationDispatchTable[dispatchType * 3](context,payload);
    }
    result = dispatchResult;
  }
  else {
    result = 0;
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002cc330

u32 func_002cc330(void)
{
  u32 current;
  u32 found;
  u16 id;
  s32 value;

  current = func_0035f160_u32();
  found = 0;
  id = 1;
  while (id < 12) {
    value = func_0029ad60_u32(id);
    if (value == 0 || value == *(s32 *)(DAT_007ce3ec + 0x148)) {
      break;
    }
    if (value == current) {
      found = 1;
      break;
    }
    id++;
  }
  func_0035f060_u32(found != 0);
  return 1;
}

// FUN_002cc3e0

u32 func_002cc3e0(void)

{
  extern u32 func_0035f160(void);
  u32 uVar1 = 0;
  s32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_006975e0)(uVar1,0);
  if (lVar2 == 0) {
    (*(code *)PTR_FUN_006975e0)(uVar1,0);
  }
  return 1;
}

// FUN_002cc450

u32 func_002cc450(void)

{
  u64 uVar1 = 0;
  s32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_006975e8)(uVar1,0);
  if (lVar2 == 0) {
    (*(code *)PTR_FUN_006975e0)(uVar1,0);
  }
  return 1;
}

// FUN_002cc4c0

u32 func_002cc4c0(void)

{
  u64 uVar1 = 0;
  s32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_006975f0)(uVar1,0);
  if (lVar2 == 0) {
    (*(code *)PTR_FUN_006975e0)(uVar1,0);
  }
  return 1;
}

// FUN_002cc530

u32 func_002cc530(void)

{
  u64 uVar1 = 0;
  s32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_006975f8)(uVar1,0);
  if (lVar2 == 0) {
    (*(code *)PTR_FUN_006975e0)(uVar1,0);
  }
  return 1;
}

// FUN_002cc5a0

u32 func_002cc5a0(void)
{
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x04000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cc650

u32 func_002cc650(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x05000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cc700

u32 func_002cc700(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x06000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cc7b0

u32 func_002cc7b0(void)

{
  u64 uVar1 = 0;
  s32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_00697618)(uVar1,0);
  if (lVar2 == 0) {
    (*(code *)PTR_FUN_006975e0)(uVar1,0);
  }
  return 1;
}

// FUN_002cc820

u32 func_002cc820(void)

{
  u64 uVar1 = 0;
  s32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_00697620)(uVar1,0);
  if (lVar2 == 0) {
    (*(code *)PTR_FUN_006975e0)(uVar1,0);
  }
  return 1;
}

// FUN_002cc890

u32 func_002cc890(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x09000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cc940

u32 func_002cc940(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x0a000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cc9f0

u32 func_002cc9f0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x0b000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002ccaa0

u32 func_002ccaa0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x0c000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002ccb50

u32 func_002ccb50(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x0d000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002ccc00

u32 func_002ccc00(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x0e000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cccb0

u32 func_002cccb0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x0f000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002ccd60

u32 func_002ccd60(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x10000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cce10

u32 func_002cce10(void)

{
  u64 uVar1 = 0;
  s32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_00697670)(uVar1,0);
  if (lVar2 == 0) {
    (*(code *)PTR_FUN_006975e0)(uVar1,0);
  }
  return 1;
}

// FUN_002cce80

u32 func_002cce80(void)

{
  u64 uVar1 = 0;
  s32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_00697678)(uVar1,0);
  if (lVar2 == 0) {
    (*(code *)PTR_FUN_006975e0)(uVar1,0);
  }
  return 1;
}

// FUN_002ccef0

u32 func_002ccef0(void)

{
  u64 uVar1 = 0;
  s32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_00697680)(uVar1,0);
  if (lVar2 == 0) {
    (*(code *)PTR_FUN_006975e0)(uVar1,0);
  }
  return 1;
}

// FUN_002ccf60

u32 func_002ccf60(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x15000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cd010

u32 func_002cd010(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x16000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cd0c0

u32 func_002cd0c0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x17000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cd170

u32 func_002cd170(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x18000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cd220

u32 func_002cd220(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x19000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cd2d0

u32 func_002cd2d0(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x1a000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cd380

u32 func_002cd380(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x1b000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cd430

u32 func_002cd430(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x1c000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cd4e0

u32 func_002cd4e0(void)
{
  extern u32 func_0035f160(void);
  u32 actor;
  int result;

  actor = func_0035f160();
  if (*(int *)(DAT_007ce3ec + 0x148) != 0) {
    func_002c08b0(actor + 0x88,*(int *)(DAT_007ce3ec + 0x148) + 0x88);
    result = gFormationActionTable[18 * 2](actor,0);
    if (result == 0) {
      gFormationActionTable[0](actor,0);
    }
  }
  return 1;
}

// FUN_002cd570

u32 func_002cd570(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x21000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cd620

u32 func_002cd620(void)

{
  u64 uVar1 = 0;
  s32 lVar2 = 0;
  
  uVar1 = func_0035f160();
  lVar2 = (*(code *)PTR_FUN_006976f0)(uVar1,0);
  if (lVar2 == 0) {
    (*(code *)PTR_FUN_006975e0)(uVar1,0);
  }
  return 1;
}

// FUN_002cd690

u32 func_002cd690(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x23000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cd740

u32 func_002cd740(void) {
  extern u32 func_0035ed20(u32);
  extern u32 func_0035f160(void);
  u32 selector;
  u32 payload;
  u32 dispatchType;
  u32 actor;
  int result;

  selector = (func_0035ed20(0) & 0xffffff) | 0x24000000;
  actor = func_0035f160();
  payload = selector & 0xffffff;
  dispatchType = (selector & 0xff000000) >> 24;
  result = gFormationActionTable[dispatchType * 2](actor,payload);
  if (result == 0) {
    gFormationActionTable[0](actor,0);
  }
  return 1;
}

// FUN_002cd7f0

u32 func_002cd7f0(void)

{
  extern u32 func_0035f160(void);
  u16 uVar1 = 0;
  int iVar2 = 0;
  
  iVar2 = func_0035f160();
  uVar1 = func_0035ed20(0);
  if (*(u16 *)(*(int *)(DAT_007ce3ec + 0xbbc) + 8) != 0x1b4) {
    func_0017b220(*(u16 *)(*(int *)(iVar2 + 0x30) + 0xa4));
  }
  func_00301540(*(u32 *)(*(int *)(iVar2 + 0x30) + 0xa2c),0xd);
  func_00301540(*(u32 *)(*(int *)(iVar2 + 0x30) + 0xa2c),0xe);
  func_00301540(*(u32 *)(*(int *)(iVar2 + 0x30) + 0xa2c),0xf);
  func_00301540(*(u32 *)(*(int *)(iVar2 + 0x30) + 0xa2c),0x10);
  *(u16 *)(*(int *)(*(int *)(iVar2 + 0x30) + 0xa2c) + 4) = uVar1;
  return 1;
}

// FUN_002cd8c0

u32 func_002cd8c0(void)

{
  extern u32 func_0035f160(void);
  u16 *puVar1;
  u16 uVar2 = 0;
  int iVar3 = 0;
  
  iVar3 = func_0035f160();
  uVar2 = func_0035ed20(0);
  if (uVar2 == 0) {
    puVar1 = *(u16 **)(*(int *)(iVar3 + 0x30) + 0xa2c);
    *puVar1 = *puVar1 | 0x10;
  }
  else {
    puVar1 = *(u16 **)(*(int *)(iVar3 + 0x30) + 0xa2c);
    *puVar1 = *puVar1 & 0xffef;
  }
  return 1;
}

// FUN_002cd940

u32 func_002cd940(void)

{
  extern u32 func_0035f160(void);
  u16 *puVar1;
  u16 uVar2 = 0;
  int iVar3 = 0;
  
  iVar3 = func_0035f160();
  uVar2 = func_0035ed20(0);
  if (uVar2 == 0) {
    puVar1 = *(u16 **)(*(int *)(iVar3 + 0x30) + 0xa2c);
    *puVar1 = *puVar1 | 0x20;
  }
  else {
    puVar1 = *(u16 **)(*(int *)(iVar3 + 0x30) + 0xa2c);
    *puVar1 = *puVar1 & 0xffdf;
  }
  return 1;
}

// FUN_002cd9c0

u32 func_002cd9c0(void)

{
  extern u32 func_0035f160(void);
  u8 uVar1 = 0;
  u16 uVar2 = 0;
  int iVar3 = 0;
  
  iVar3 = func_0035f160();
  uVar2 = func_0035ed20(0);
  *(u16 *)(iVar3 + 0x80) = uVar2;
  uVar1 = func_0035ed20(1);
  *(u8 *)(iVar3 + 0x82) = uVar1;
  return 1;
}

// FUN_002cda10

u32 func_002cda10(void)

{
  extern u32 func_0035f160(void);
  int iVar1 = 0;
  
  iVar1 = func_0035f160();
  func_0035f060(*(u16 *)(*(int *)(*(int *)(iVar1 + 0x30) + 0xa2c) + 4));
  return 1;
}

// FUN_002cda50

u32 func_002cda50(void)

{
  extern u32 func_0035f160(void);
  extern int func_002c0e30(u16,u32,u32);
  u16 uVar1 = 0;
  int iVar2 = 0;
  int lVar3 = 0;
  u32 uVar4 = 0;
  
  iVar2 = func_0035f160();
  uVar1 = func_0035ed20(0);
  lVar3 = func_002c0e30(uVar1,1 << *(u8 *)(*(int *)(iVar2 + 0x30) + 0xa2) & 0xffff,
                        0x80000);
  if (lVar3 != 0) {
    uVar4 = *(u32 *)(lVar3 + 0x20);
  }
  else {
    uVar4 = 0;
  }
  func_0035f060(uVar4);
  return 1;
}

#pragma push
/* Removing this loses FUN_002cdad0 (MATCH nd0 -> MISMATCH nd74) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002cdad0

u32 func_002cdad0(void)
{
  extern u32 func_0035f160(void);
  extern int func_002c0e30(u16,u32,u32);
  u32 actor;
  u32 side;
  u16 id;
  int context;
  u32 result;

  actor = func_0035f160();
  if (*(u8 *)(*(int *)(actor + 0x30) + 0xa2) != 0)
    goto nonzero;
  side = 1;
  goto done;
nonzero:
  side = 0;
done:
  id = func_0035ed20(0);
  context = func_002c0e30(id,1 << side & 0xffff,0x80000);
  if (context != 0) {
    result = *(u32 *)(context + 0x20);
  }
  else {
    result = 0;
  }
  func_0035f060(result);
  return 1;
}
#pragma pop

// FUN_002cdb70

u32 func_002cdb70(void)

{
  u16 uVar1 = 0;
  u64 uVar2 = 0;
  u64 uVar3 = 0;
  
  uVar2 = func_0035f160();
  uVar3 = func_0035ed20(0);
  uVar1 = func_002c0f40_call(uVar2,uVar3,0x80000,1,0,(code *)&func_002c3400,0);
  func_0035f060(uVar1);
  return 1;
}

// FUN_002cdbe0

u32 func_002cdbe0(void)

{
  u16 uVar1 = 0;
  u64 uVar2 = 0;
  u64 uVar3 = 0;
  
  uVar2 = func_0035f160();
  uVar3 = func_0035ed20(0);
  uVar1 = func_002c0f40_call(uVar2,uVar3,0x80000,1,1,(code *)&func_002c3400,0);
  func_0035f060(uVar1);
  return 1;
}

// FUN_002cdc50

u32 func_002cdc50(void)

{
  u16 uVar1 = 0;
  u64 uVar2 = 0;
  u64 uVar3 = 0;
  
  uVar2 = func_0035f160();
  uVar3 = func_0035ed20(0);
  uVar1 = func_002c0f40_call(uVar2,uVar3,0x80000,1,0,(code *)&func_002c1710,0);
  func_0035f060(uVar1);
  return 1;
}

// FUN_002cdcc0

u32 func_002cdcc0(void)

{
  u16 uVar1 = 0;
  u64 uVar2 = 0;
  u64 uVar3 = 0;
  
  uVar2 = func_0035f160();
  uVar3 = func_0035ed20(0);
  uVar1 = func_002c0f40_call(uVar2,uVar3,0x80000,2,0,(code *)&func_002c3400,0);
  func_0035f060(uVar1);
  return 1;
}

// FUN_002cdd30

u32 func_002cdd30(void)

{
  u16 uVar1 = 0;
  u64 uVar2 = 0;
  u64 uVar3 = 0;
  
  uVar2 = func_0035f160();
  uVar3 = func_0035ed20(0);
  uVar1 = func_002c0f40_call(uVar2,uVar3,0x80000,2,1,(code *)&func_002c3400,0);
  func_0035f060(uVar1);
  return 1;
}

// FUN_002cdda0

u32 func_002cdda0(void)

{
  u16 uVar1 = 0;
  u64 uVar2 = 0;
  u64 uVar3 = 0;
  
  uVar2 = func_0035f160();
  uVar3 = func_0035ed20(0);
  uVar1 = func_002c0f40_call(uVar2,uVar3,0x80000,1,0,(code *)&func_002c12f0,0);
  func_0035f060(uVar1);
  return 1;
}

// FUN_002cde10

u32 func_002cde10(void)

{
  extern u32 func_0035f160(void);
  u16 uVar1 = 0;
  int iVar2 = 0;
  
  iVar2 = func_0035f160();
  uVar1 = func_002d4cf0(1 << *(u8 *)(*(int *)(iVar2 + 0x30) + 0xa2) & 0xffff,0x80000);
  func_0035f060(uVar1);
  return 0xffffffff;
}

#pragma push
/* Removing this loses FUN_002cde60 (MATCH nd0 -> MISMATCH nd42) - measured W161. */
#pragma opt_rebuildconditionals off
// FUN_002cde60

u32 func_002cde60(void)

{
  extern u32 func_0035f160(void);
  u16 uVar1 = 0;
  int iVar2 = 0;
  u16 genus;
  
  iVar2 = func_0035f160();
  {
      u32 shift;
      if (*(u8 *)(*(int *)(iVar2 + 0x30) + 0xa2) != 0)
        goto nonzero;
      shift = 1;
      goto done;
  nonzero:
      shift = 0;
  done:
      genus = shift;
    }
  uVar1 = func_002d4cf0(1 << genus & 0xffff,0x80000);
  func_0035f060(uVar1);
  return 0xffffffff;
}
#pragma pop

// FUN_002cded0

u32 func_002cded0(void)

{
  extern u32 func_0035f160(void);
  extern s16 func_003082f0(u32,u16);
  s16 id = 0;
  s16 result = 0;
  u32 unit = 0;
  
  unit = func_0035f160();
  id = func_0035ed20(0);
  result = func_003082f0(*(u32 *)(*(int *)(unit + 0x30) + 0xa2c),id);
  func_0035f060(result);
  return 0xffffffff;
}

// FUN_002cdf40

u32 func_002cdf40(void)
{
  extern u32 func_0035ed20(u32);
  extern u32 func_0029a210(u32);
  u32 actorId;
  u32 rawPayload;
  u32 actor;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;

  actorId = func_0035ed20(0);
  rawPayload = func_0035ed20(1);
  actor = func_0029a210(actorId & 0xfffffff);
  selector = rawPayload & 0xffffff;
  selector |= 0x01000000;
  dispatchType = (selector & 0xff000000) >> 24;
  payload = (rawPayload | 0x01000000) & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002ce010

u32 func_002ce010(void)

{
  extern u32 func_0035ed20(u32);
  extern u32 func_0029a210(u32);
  u32 actor = 0;
  u32 actorId = 0;
  u32 statusId = 0;
  u32 active = 0;
  
  actorId = func_0035ed20(0);
  statusId = func_0035ed20(1);
  actor = func_0029a210(actorId & 0xfffffff);
  active = func_00301ca0(*(u32 *)(*(int *)(actor + 0x30) + 0xa2c),statusId) != 0;
  func_0035f060(active != 0);
  return 1;
}

// FUN_002ce090

u32 func_002ce090(void)

{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_0029a210(u32);
  extern s32 func_00303130(s32,u32,u32,s32,s32,s32,s32,s32);
  u32 unit = 0;
  u32 actor = 0;
  s32 relation = 0;
  u32 status = 0;
  u32 actorId = 0;
  
  unit = func_0035f160();
  actorId = func_0035ed20(0);
  actor = func_0029a210(actorId & 0xfffffff);
  relation = func_00303130(0,*(u32 *)(*(int *)(unit + 0x30) + 0xa2c),
                          *(u32 *)(*(int *)(actor + 0x30) + 0xa2c),1,1,1,0,1);
  func_00301870(*(u32 *)(*(int *)(unit + 0x30) + 0xa2c));
  func_00301870(*(u32 *)(*(int *)(actor + 0x30) + 0xa2c));
  status = func_002ffd70(*(u32 *)(*(int *)(actor + 0x30) + 0xa2c));
  func_0035f060((s32)((status & 0xffff) + relation) <= 0);
  return 1;
}

// FUN_002ce170

u32 func_002ce170(void)

{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_0029a210(u32);
  extern s32 func_002c5fc0(u32,u32,s16,s32);
  u32 unit = 0;
  u32 actorId = 0;
  u32 actionId = 0;
  u32 target = 0;
  s32 result = 0;
  
  unit = func_0035f160();
  actorId = func_0035ed20(0);
  actionId = func_0035ed20(1);
  target = func_0029a210(actorId & 0xfffffff);
  result = func_002c5fc0(unit,target,(s16)actionId,0);
  func_0035f060(result != -1);
  return 1;
}

// FUN_002ce210

u32 func_002ce210(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_0029a210(u32);
  u32 context;
  u32 actorId;
  u32 value;
  u32 actor;
  long result;

  context = func_0035f160();
  actorId = func_0035ed20(0);
  value = func_0035ed20(1);
  actor = func_0029a210(actorId & 0xfffffff);
  result = func_002c6300_s32(context, actor, value, 0);
  func_0035f060(result != -1);
  return 1;
}

// FUN_002ce2b0

u32 func_002ce2b0(void)
{
  extern u32 func_0035ed20(u32);
  extern u32 func_0029a210(u32);
  u32 actorId;
  u32 rawPayload;
  u32 actor;
  u32 selector;
  u32 dispatchType;
  u32 payload;
  int result;

  actorId = func_0035ed20(0);
  rawPayload = func_0035ed20(1);
  actor = func_0029a210(actorId & 0xfffffff);
  selector = rawPayload & 0xffffff;
  selector |= 0x3f000000;
  dispatchType = (selector & 0xff000000) >> 24;
  payload = (rawPayload | 0x3f000000) & 0xffffff;
  if (dispatchType == 0) {
    result = 0;
  }
  else {
    result = gFormationDispatchTable[dispatchType * 3](actor,payload);
  }
  func_0035f060(result != 0);
  return 1;
}

// FUN_002ce380
u32 func_002ce380(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_0029a210(u32);
  u32 unit;
  u16 available;
  u32 actorId;
  u32 actor;

  unit = func_0035f160();
  available = func_002bff60_u16(unit,0,*(u16 *)(unit + 0x6e),0);
  if (available == 0) {
    actorId = func_0035ed20(0);
    actor = func_0029a210(actorId & 0xfffffff);
    *(u32 *)(unit + 0x38) = actor;
    *(u16 *)(unit + 0x6a) = 1;
  } else {
    if ((*(code *)PTR_FUN_006975e0)(unit,0) == 0)
      (*(code *)PTR_FUN_006975e0)(unit,0);
  }
  return 1;
}

// FUN_002ce440

u32 func_002ce440(void)

{
  extern u32 func_0035ed20(u32);
  extern int func_002c0e30(u16,u32,u32);
  u16 side = 0;
  u16 id = 0;
  int context = 0;
  
  side = func_0035ed20(0);
  id = func_0035ed20(1);
  context = 0;
  switch (side) {
  case 0:
    context = func_002c0e30(id,1,0x80000);
    break;
  case 1:
    context = func_002c0e30(id,2,0x80000);
    break;
  }
  func_0035f060(*(u32 *)(context + 8) | 0x80000000);
  return 1;
}

// FUN_002ce4e0

u32 func_002ce4e0(void)

{
  int unit = 0;
  long excluded = 0;
  u16 stat = 0;
  int selectedUnit = 0;
  u32 lowestStat = 0;

  selectedUnit = 0;
  lowestStat = 0xfffffff;
  for (unit = *(int *)(DAT_007ce3ec + 0x14c); unit != 0; unit = *(int *)(unit + 0x4a8)) {
    if (((((*(u16 *)(unit + 0x1a) & 1) != 0) && ((*(u16 *)(unit + 0x1a) & 8) != 0)) &&
        (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) == 1)) &&
       (excluded = func_0030b5a0(*(u32 *)(*(int *)(unit + 0x30) + 0xa2c),0), excluded == 0)) {
      stat = func_002ffd70(*(u32 *)(*(int *)(unit + 0x30) + 0xa2c));
      if (stat < lowestStat) {
        selectedUnit = unit;
        lowestStat = stat;
      }
    }
  }
  func_0035f060(*(u32 *)(selectedUnit + 8) | 0x80000000);
  return 1;
}

// FUN_002ce5c0
u32 func_002ce5c0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_002c3430(u32,u32,u32,u16,int,code *);
  extern u32 func_002ffbc0(u32);
  extern u32 func_002c65d0(u32);
  extern void func_0035f060(u32);
  u32 unit;
  u32 selector;
  u32 selectedUnit;
  u32 offset;

  unit = func_0035f160();
  selector = func_0035ed20(0);
  if (func_002c3430(unit,selector,0,0x2e,0, (code *)&func_002c1ed0) == 1) {
    if (*(u16 *)(unit + 0x6a) == 1) {
      func_0035f060(*(u32 *)(*(int *)(unit + 0x38) + 8) | 0x80000000);
    } else {
      if ((selector & 0xe) != 0) {
        selectedUnit = func_002c65d0(unit);
      } else {
        offset = func_002ffbc0(*(u16 *)(unit + 0x6a));
        selectedUnit = *(u32 *)((offset << 2) + unit + 0x38);
      }
      func_0035f060(*(u32 *)(selectedUnit + 8) | 0x80000000);
    }
  } else {
    func_0035f060(0xffffffff);
  }
  return 1;
}

// FUN_002ce6c0

u32 func_002ce6c0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_002c3430(u32,u32,u32,u16,int,code *);
  extern u32 func_002ffbc0(u32);
  u32 unit;
  u32 selector;
  u32 offset;

  unit = func_0035f160();
  selector = func_0035ed20(0);
  if (func_002c3430(unit,selector,0x100000,0x2e,0, (code *)&func_002c1ed0) == 1) {
    if (*(u16 *)(unit + 0x6a) == 1) {
      func_0035f060(*(u32 *)(*(int *)(unit + 0x38) + 8) | 0x80000000);
    }
    else {
      offset = func_002ffbc0(*(u16 *)(unit + 0x6a)) * 4;
      func_0035f060(*(u32 *)(*(int *)(offset + unit + 0x38) + 8) | 0x80000000);
    }
  }
  else {
    func_0035f060(0xffffffff);
  }
  return 1;
}

// FUN_002ce7a0

u32 func_002ce7a0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_002c3430(u32,u32,u32,u16,int,code *);
  extern u32 func_002ffbc0(u32);
  u32 unit;
  u32 selector;
  u32 offset;

  unit = func_0035f160();
  selector = func_0035ed20(0);
  if (func_002c3430(unit,selector,0,0x2f,0, (code *)&func_002c1ed0) == 1) {
    if (*(u16 *)(unit + 0x6a) == 1) {
      func_0035f060(*(u32 *)(*(int *)(unit + 0x38) + 8) | 0x80000000);
    }
    else {
      offset = func_002ffbc0(*(u16 *)(unit + 0x6a)) * 4;
      func_0035f060(*(u32 *)(*(int *)(offset + unit + 0x38) + 8) | 0x80000000);
    }
  }
  else {
    func_0035f060(0xffffffff);
  }
  return 1;
}

// FUN_002ce880

u32 func_002ce880(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_002c3430(u32,u32,u32,u16,int,code *);
  extern u32 func_002ffbc0(u32);
  u32 unit;
  u32 selector;
  u32 offset;

  unit = func_0035f160();
  selector = func_0035ed20(0);
  if (func_002c3430(unit,selector,0,0x2c,0, (code *)&func_002c30f0) == 1) {
    if (*(u16 *)(unit + 0x6a) == 1) {
      func_0035f060(*(u32 *)(*(int *)(unit + 0x38) + 8) | 0x80000000);
    }
    else {
      offset = func_002ffbc0(*(u16 *)(unit + 0x6a)) * 4;
      func_0035f060(*(u32 *)(*(int *)(offset + unit + 0x38) + 8) | 0x80000000);
    }
  }
  else {
    func_0035f060(0xffffffff);
  }
  return 1;
}

// FUN_002ce960

u32 func_002ce960(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_002c3430(u32,u32,u32,u16,int,code *);
  extern u32 func_002ffbc0(u32);
  u32 unit;
  u32 selector;
  u32 offset;

  unit = func_0035f160();
  selector = func_0035ed20(0);
  if (func_002c3430(unit,selector,0x100000,0x2c,0, (code *)&func_002c30f0) == 1) {
    if (*(u16 *)(unit + 0x6a) == 1) {
      func_0035f060(*(u32 *)(*(int *)(unit + 0x38) + 8) | 0x80000000);
    }
    else {
      offset = func_002ffbc0(*(u16 *)(unit + 0x6a)) * 4;
      func_0035f060(*(u32 *)(*(int *)(offset + unit + 0x38) + 8) | 0x80000000);
    }
  }
  else {
    func_0035f060(0xffffffff);
  }
  return 1;
}

// FUN_002cea40

u32 func_002cea40(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_002c3430(u32,u32,u32,u16,int,code *);
  extern u32 func_002ffbc0(u32);
  u32 unit;
  u32 selector;
  u32 offset;

  unit = func_0035f160();
  selector = func_0035ed20(0);
  if (func_002c3430(unit,selector,0,0x2d,0, (code *)&func_002c30f0) == 1) {
    if (*(u16 *)(unit + 0x6a) == 1) {
      func_0035f060(*(u32 *)(*(int *)(unit + 0x38) + 8) | 0x80000000);
    }
    else {
      offset = func_002ffbc0(*(u16 *)(unit + 0x6a)) * 4;
      func_0035f060(*(u32 *)(*(int *)(offset + unit + 0x38) + 8) | 0x80000000);
    }
  }
  else {
    func_0035f060(0xffffffff);
  }
  return 1;
}

// FUN_002ceb20
u32 func_002ceb20(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_002ffbc0(u32);
  extern void func_0035f060(u32);
  u8 *formation;
  u16 count;
  int selected;
  u32 unit;
  u32 selector;
  u16 index;
  int candidates[12];

  unit = func_0035f160();
  selector = func_0035ed20(0);
  count = func_002c0f40(unit,selector,0x80000,1,1,
                        (FormationPredicate)&func_002c3400,candidates);
  if (count > 0) {
    index = 0;
    formation = DAT_007ce3ec;
    while (index < count) {
      if (*(int *)(formation + 0x148) == candidates[index]) {
        break;
      }
      index++;
    }
    if (index == count) {
      selected = candidates[func_002ffbc0(count)];
    }
    else {
      selected = *(int *)(formation + 0x148);
    }
    func_0035f060(*(u32 *)(selected + 8) | 0x80000000);
  }
  else {
    func_0035f060(0xffffffff);
  }
  return 1;
}

// FUN_002cec30
u32 func_002cec30(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u8 func_002ffcc0(u32);
  extern u32 func_002ffbc0(u32);
  extern void func_0035f060(u32);
  u32 unit;
  u32 selector;
  u16 count;
  int selected;
  u16 index;
  int *candidate;
  int candidates[12];

  unit = func_0035f160();
  selector = func_0035ed20(0);
  count = func_002c0f40(unit,selector,0x80000,2,1,
                        (FormationPredicate)&func_002c3400,candidates);
  if (count > 0) {
    selected = 0;
    for (index = 0; index < count; index++) {
      candidate = &candidates[index];
      if (func_002ffcc0(*(u32 *)(*(int *)(*candidate + 0x30) + 0xa2c)) > 0) {
        selected = *candidate;
      }
    }
    if (selected == 0) {
      selected = candidates[func_002ffbc0(count)];
    }
    func_0035f060(*(u32 *)(selected + 8) | 0x80000000);
  }
  else {
    func_0035f060(0xffffffff);
  }
  return 1;
}

#pragma push
/* Removing this loses FUN_002ced60 (MATCH nd0 -> MISMATCH nd263) - measured W161. */
#pragma opt_rebuildconditionals off
static inline u16 btlFormationGetOpposingGenus(u32 unit)
{
  u32 side;
  if (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) != 0)
    goto nonzero;
  side = 1;
  goto done;
nonzero:
  side = 0;
done:
  return side;
}
// FUN_002ced60
u32 func_002ced60(void)
{
  extern int func_0030b5a0(u32,u32);
  extern u8 func_002ffcc0(u32);
  extern u32 func_002ffbc0(u32);
  struct {
    int entries[14];
    u16 count;
    u16 selected;
  } candidates;
  int selected[12];
  u32 unit;
  u16 desired;
  u32 highest;
  u16 index;
  u16 selectedCount;
  int candidate;
  u32 value;
  u32 desiredValue;

  unit = func_0035f160_u32();
  desired = btlFormationGetOpposingGenus(unit);
  func_002bfcb0_ptr(unit,&candidates,2,0,0);
  highest = 0;
  selectedCount = 0;
  index = 0;
  desiredValue = desired;
  while (index < candidates.count) {
    candidate = candidates.entries[index];
    if (((*(u16 *)(candidate + 0x1a) & 1) != 0) &&
        ((*(u16 *)(candidate + 0x1a) & 8) != 0) &&
        (*(u8 *)(*(int *)(candidate + 0x30) + 0xa2) == desiredValue) &&
        (func_0030b5a0(
            *(u32 *)(*(int *)(candidate + 0x30) + 0xa2c),0) == 0)) {
      value = func_002ffcc0(
          *(u32 *)(*(int *)(candidate + 0x30) + 0xa2c));
      if (value == highest) {
        selected[selectedCount] = candidate;
        selectedCount++;
      } else if (highest < value) {
        highest = value;
        selected[0] = candidate;
        selectedCount = 1;
      }
    }
    index++;
  }
  if (selectedCount > 0) {
    value = func_002ffbc0(selectedCount);
    func_0035f060_u32(
        *(u32 *)(selected[value] + 8) | 0x80000000);
  } else {
    func_0035f060_u32(0xffffffff);
  }
  return 1;
}
#pragma pop

// FUN_002cef10
u32 func_002cef10(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_002c3430(u32,u32,u32,u16,int,code *);
  extern u8 func_002ffcc0(u32);
  extern u16 func_002ffd70(u32);
  extern void func_0035f060(u32);
  u32 unit;
  u32 selector;
  int candidate;
  int selected;
  u32 index;
  u32 level;
  u32 highestHp;
  u32 highestLevel;
  u32 hp;

  unit = func_0035f160();
  selector = func_0035ed20(0);
  if (func_002c3430(unit,selector,0,0x2c,0, (code *)&func_002c30f0) == 1) {
    if (*(u16 *)(unit + 0x6a) == 1) {
      selected = *(int *)(unit + 0x38);
    }
    else {
      selected = 0;
      highestLevel = 0;
      highestHp = 0;
      for (index = 0; index < *(u16 *)(unit + 0x6a); index++) {
        candidate = *(int *)(unit + index * 4 + 0x38);
        level = func_002ffcc0(*(u32 *)(*(int *)(candidate + 0x30) + 0xa2c));
        if (level >= highestLevel) {
          hp = func_002ffd70(*(u32 *)(*(int *)(candidate + 0x30) + 0xa2c));
          if (highestHp < hp) {
            selected = candidate;
            highestHp = hp;
          }
          highestLevel = level;
        }
      }
    }
    func_0035f060(*(u32 *)(selected + 8) | 0x80000000);
  }
  else {
    func_0035f060(0xffffffff);
  }
  return 0xffffffff;
}

// FUN_002cf070
u32 func_002cf070(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_002c3430(u32,u32,u32,u16,int,code *);
  extern u32 func_00300530(u32);
  extern u32 func_002ffbc0(u32);
  extern void func_0035f060(u32);
  u32 unit;
  u32 selector;
  u32 index;
  u16 selectedCount;
  int candidate;
  int selected[12];

  unit = func_0035f160();
  selector = func_0035ed20(0);
  if (func_002c3430(unit,selector,0,0x2c,0, (code *)&func_002c30f0) == 1) {
    selectedCount = 0;
    for (index = 0; (u16)index < *(u16 *)(unit + 0x6a);
         index = index + 1 & 0xffff) {
      candidate = *(int *)(unit + (index & 0xffff) * 4 + 0x38);
      if ((func_00300530(*(u32 *)(*(int *)(candidate + 0x30) + 0xa2c)) &
           0xffefffff) == 0) {
        selected[selectedCount] = candidate;
        selectedCount++;
      }
    }
    if (selectedCount == 0) {
      func_0035f060(0xffffffff);
    }
    else {
      candidate = selected[func_002ffbc0(selectedCount)];
      func_0035f060(*(u32 *)(candidate + 8) | 0x80000000);
    }
  }
  else {
    func_0035f060(0xffffffff);
  }
  return 0xffffffff;
}

// FUN_002cf1d0
u32 func_002cf1d0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_002c3430(u32,u32,u32,u16,int,code *);
  extern u8 func_002ffcc0(u32);
  extern u32 func_002ffbc0(u32);
  extern void func_0035f060(u32);
  u32 unit;
  u32 selector;
  int selectedUnit;
  int candidate;
  u32 index;
  u32 highestLevel;
  u16 selectedCount;
  u32 level;
  int selected[12];

  unit = func_0035f160();
  selector = func_0035ed20(0);
  if (func_002c3430(unit,selector,0,0x2c,1, (code *)&func_002c3120) == 1) {
    if (*(u16 *)(unit + 0x6a) == 1) {
      selectedUnit = *(int *)(unit + 0x38);
    }
    else {
      selectedCount = 0;
      highestLevel = 0;
      for (index = 0; index < *(u16 *)(unit + 0x6a); index++) {
        candidate = *(int *)(unit + index * 4 + 0x38);
        level = func_002ffcc0(*(u32 *)(*(int *)(candidate + 0x30) + 0xa2c));
        if (level >= highestLevel) {
          if (level == highestLevel) {
            selected[selectedCount] = candidate;
            selectedCount++;
          }
          else {
            highestLevel = level;
            selected[0] = candidate;
            selectedCount = 1;
          }
        }
      }
      selectedUnit = selected[func_002ffbc0(selectedCount)];
    }
    func_0035f060(*(u32 *)(selectedUnit + 8) | 0x80000000);
  }
  else {
    func_0035f060(0xffffffff);
  }
  return 0xffffffff;
}

// FUN_002cf340
u32 func_002cf340(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_002c3430(u32,u32,u32,u16,int,code *);
  extern u32 func_00300530(u32);
  extern void func_0035f060(u32);
  u32 unit;
  u32 index;
  u32 count;

  unit = func_0035f160();
  if (func_002c3430(unit,func_0035ed20(0),0,0x2c,0, (code *)&func_002c30f0) == 1) {
    count = 0;
    for (index = 0; (u16)index < *(u16 *)(unit + 0x6a); index = index + 1 & 0xffff) {
      if ((func_00300530(*(u32 *)(*(int *)(*(int *)(unit + (index & 0xffff) * 4 + 0x38) + 0x30) + 0xa2c)) & 0xffefffff) == 0)
        count = count + 1 & 0xffff;
    }
    func_0035f060((u16)count);
  } else {
    func_0035f060(0);
  }
  return 0xffffffff;
}

// FUN_002cf450

u32 func_002cf450(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_002c3430(u32,u32,u32,u16,int,code *);
  u32 unit;
  u32 selector;
  int selectedUnit;
  int candidate;
  u32 index;
  u32 lowestStat;
  u16 stat;

  unit = func_0035f160();
  selector = func_0035ed20(0);
  if (func_002c3430(unit,selector,0,0x2e,0, (code *)&func_002c1ed0) == 1) {
    if (*(u16 *)(unit + 0x6a) == 1) {
      selectedUnit = *(int *)(unit + 0x38);
    }
    else {
      selectedUnit = 0;
      lowestStat = 0xfffffff;
      for (index = 0; index < *(u16 *)(unit + 0x6a); index++) {
        candidate = *(int *)(unit + index * 4 + 0x38);
        stat = func_002ffd70(*(u32 *)(*(int *)(candidate + 0x30) + 0xa2c));
        if (stat < lowestStat) {
          selectedUnit = candidate;
          lowestStat = stat;
        }
      }
    }
    func_0035f060(*(u32 *)(selectedUnit + 8) | 0x80000000);
  }
  else {
    func_0035f060(0xffffffff);
  }
  return 1;
}

// FUN_002cf580

u32 func_002cf580(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_002c3430(u32,u32,u32,u16,int,code *);
  u32 unit;
  u32 selector;
  int selectedUnit;
  int candidate;
  u32 index;
  u32 lowestStat;
  u16 stat;

  unit = func_0035f160();
  selector = func_0035ed20(0);
  if (func_002c3430(unit,selector,0x100000,0x2e,0, (code *)&func_002c1ed0) == 1) {
    if (*(u16 *)(unit + 0x6a) == 1) {
      selectedUnit = *(int *)(unit + 0x38);
    }
    else {
      selectedUnit = 0;
      lowestStat = 0xfffffff;
      for (index = 0; index < *(u16 *)(unit + 0x6a); index++) {
        candidate = *(int *)(unit + index * 4 + 0x38);
        stat = func_002ffd70(*(u32 *)(*(int *)(candidate + 0x30) + 0xa2c));
        if (stat < lowestStat) {
          selectedUnit = candidate;
          lowestStat = stat;
        }
      }
    }
    func_0035f060(*(u32 *)(selectedUnit + 8) | 0x80000000);
  }
  else {
    func_0035f060(0xffffffff);
  }
  return 1;
}

// FUN_002cf6b0

u32 func_002cf6b0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_002c3430(u32,u32,u32,u16,int,code *);
  u32 unit;
  u32 selector;
  int selectedUnit;
  int candidate;
  u32 index;
  u32 lowestStat;
  u16 stat;

  unit = func_0035f160();
  selector = func_0035ed20(0);
  if (func_002c3430(unit,selector,0,0x2f,0, (code *)&func_002c1ed0) == 1) {
    if (*(u16 *)(unit + 0x6a) == 1) {
      selectedUnit = *(int *)(unit + 0x38);
    }
    else {
      selectedUnit = 0;
      lowestStat = 0xfffffff;
      for (index = 0; index < *(u16 *)(unit + 0x6a); index++) {
        candidate = *(int *)(unit + index * 4 + 0x38);
        stat = func_002ffd70(*(u32 *)(*(int *)(candidate + 0x30) + 0xa2c));
        if (stat < lowestStat) {
          selectedUnit = candidate;
          lowestStat = stat;
        }
      }
    }
    func_0035f060(*(u32 *)(selectedUnit + 8) | 0x80000000);
  }
  else {
    func_0035f060(0xffffffff);
  }
  return 1;
}

// FUN_002cf7e0

u32 func_002cf7e0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_0029a210(u32);
  extern s32 func_002c5fc0(u32,u32,s16,s32);
  u32 unit;
  u32 selector;
  u32 actionId;
  u32 mode;
  u32 target;
  s32 result;

  unit = func_0035f160();
  selector = func_0035ed20(0);
  actionId = func_0035ed20(1);
  mode = func_0035ed20(2);
  target = func_0029a210(selector & 0xfffffff);
  result = func_002c5fc0(unit,target,(s16)actionId,mode);
  func_0035f060(result);
  return 1;
}

// FUN_002cf890

u32 func_002cf890(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_0029a210(u32);
  extern s32 func_002c6300(u32,u32,s16,s32);
  u32 unit;
  u32 selector;
  u32 actionId;
  u32 mode;
  u32 target;
  s32 result;

  unit = func_0035f160();
  selector = func_0035ed20(0);
  actionId = func_0035ed20(1);
  mode = func_0035ed20(2);
  target = func_0029a210(selector & 0xfffffff);
  result = func_002c6300(unit,target,(s16)actionId,mode);
  func_0035f060(result);
  return 1;
}

// FUN_002cf940

u32 func_002cf940(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_0029a210(u32);
  extern s32 func_002c5030(u32,u32,u32,u32);
  u32 unit;
  u32 selector;
  u32 actionId;
  u32 mode;
  u32 target;
  s32 result;

  unit = func_0035f160();
  selector = func_0035ed20(0);
  actionId = func_0035ed20(1);
  mode = func_0035ed20(2);
  target = func_0029a210(selector & 0xfffffff);
  result = func_002c5030(unit,target,actionId,mode);
  func_0035f060(result);
  return 1;
}

// FUN_002cf9f0

u32 func_002cf9f0(void)
{
  extern u32 func_0035f160(void);
  extern s16 func_003082f0(u32,u16);
  u32 unit;
  s16 result;

  unit = func_0035f160();
  result = func_003082f0(*(u32 *)(*(int *)(unit + 0x30) + 0xa2c),0);
  func_0035f060(result);
  return 1;
}

// FUN_002cfa40

u32 func_002cfa40(void)

{
  int unit = 0;
  long excluded = 0;
  u16 stat = 0;
  int selectedUnit = 0;
  u32 lowestStat = 0;

  selectedUnit = 0;
  lowestStat = 0xfffffff;
  for (unit = *(int *)(DAT_007ce3ec + 0x14c); unit != 0; unit = *(int *)(unit + 0x4a8)) {
    if (((((*(u16 *)(unit + 0x1a) & 1) != 0) && ((*(u16 *)(unit + 0x1a) & 8) != 0)) &&
        (*(u8 *)(*(int *)(unit + 0x30) + 0xa2) == 0)) &&
       (excluded = func_0030b5a0(*(u32 *)(*(int *)(unit + 0x30) + 0xa2c),0), excluded == 0)) {
      stat = func_002ffd70(*(u32 *)(*(int *)(unit + 0x30) + 0xa2c));
      if (stat < lowestStat) {
        selectedUnit = unit;
        lowestStat = stat;
      }
    }
  }
  func_0035f060(*(u32 *)(selectedUnit + 8) | 0x80000000);
  return 1;
}

// FUN_002cfb20

u32 func_002cfb20(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_002c3430(u32,u32,u32,u16,int,code *);
  u32 unit;
  u32 selector;
  int selectedUnit;
  int candidate;
  u32 index;
  u32 lowestStat;
  u16 stat;

  unit = func_0035f160();
  selector = func_0035ed20(0);
  if (func_002c3430(unit,selector,0,0x2c,0, (code *)&func_002c30f0) == 1) {
    if (*(u16 *)(unit + 0x6a) == 1) {
      selectedUnit = *(int *)(unit + 0x38);
    }
    else {
      selectedUnit = 0;
      lowestStat = 0xfffffff;
      for (index = 0; index < *(u16 *)(unit + 0x6a); index++) {
        candidate = *(int *)(unit + index * 4 + 0x38);
        stat = func_002ffd70(*(u32 *)(*(int *)(candidate + 0x30) + 0xa2c));
        if (stat < lowestStat) {
          selectedUnit = candidate;
          lowestStat = stat;
        }
      }
    }
    func_0035f060(*(u32 *)(selectedUnit + 8) | 0x80000000);
  }
  else {
    func_0035f060(0xffffffff);
  }
  return 1;
}

// FUN_002cfc50

u32 func_002cfc50(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_002c3430(u32,u32,u32,u16,int,code *);
  u32 unit;
  u32 selector;
  int selectedUnit;
  int candidate;
  u32 index;
  u32 lowestStat;
  u16 stat;

  unit = func_0035f160();
  selector = func_0035ed20(0);
  if (func_002c3430(unit,selector,0x100000,0x2c,0, (code *)&func_002c30f0) == 1) {
    if (*(u16 *)(unit + 0x6a) == 1) {
      selectedUnit = *(int *)(unit + 0x38);
    }
    else {
      selectedUnit = 0;
      lowestStat = 0xfffffff;
      for (index = 0; index < *(u16 *)(unit + 0x6a); index++) {
        candidate = *(int *)(unit + index * 4 + 0x38);
        stat = func_002ffd70(*(u32 *)(*(int *)(candidate + 0x30) + 0xa2c));
        if (stat < lowestStat) {
          selectedUnit = candidate;
          lowestStat = stat;
        }
      }
    }
    func_0035f060(*(u32 *)(selectedUnit + 8) | 0x80000000);
  }
  else {
    func_0035f060(0xffffffff);
  }
  return 1;
}

// FUN_002cfd80

u32 func_002cfd80(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern u32 func_002c3430(u32,u32,u32,u16,int,code *);
  u32 unit;
  u32 selector;
  int selectedUnit;
  int candidate;
  u32 index;
  u32 lowestStat;
  u16 stat;

  unit = func_0035f160();
  selector = func_0035ed20(0);
  if (func_002c3430(unit,selector,0,0x2d,0, (code *)&func_002c30f0) == 1) {
    if (*(u16 *)(unit + 0x6a) == 1) {
      selectedUnit = *(int *)(unit + 0x38);
    }
    else {
      selectedUnit = 0;
      lowestStat = 0xfffffff;
      for (index = 0; index < *(u16 *)(unit + 0x6a); index++) {
        candidate = *(int *)(unit + index * 4 + 0x38);
        stat = func_002ffd70(*(u32 *)(*(int *)(candidate + 0x30) + 0xa2c));
        if (stat < lowestStat) {
          selectedUnit = candidate;
          lowestStat = stat;
        }
      }
    }
    func_0035f060(*(u32 *)(selectedUnit + 8) | 0x80000000);
  }
  else {
    func_0035f060(0xffffffff);
  }
  return 1;
}

// FUN_002cfeb0

u32 func_002cfeb0(void)
{
  extern u32 func_0035f160(void);
  extern int func_0030b5a0(u32,u32);
  extern u32 func_002ffbc0(u32);
  extern void func_0035f060(u32);
  long *selected;
  long *candidate;
  u32 candidateData;
  u16 selectedCount;
  long *candidates[12];

  selected = func_002c08c0(func_0035f160() + 0x88);
  if ((selected == 0) ||
      (*(u8 *)(*(int *)((u8 *)selected + 0x30) + 0xa2) != 1)) {
    selectedCount = 0;
    for (candidate = *(long **)(DAT_007ce3ec + 0x14c); candidate != 0;
         candidate = *(long **)((u8 *)candidate + 0x4a8)) {
      if (((*(u16 *)((u8 *)candidate + 0x1a) & 1) != 0) &&
          ((*(u16 *)((u8 *)candidate + 0x1a) & 8) != 0) &&
          (*(u8 *)(*(int *)((u8 *)candidate + 0x30) + 0xa2) == 1)) {
        candidateData =
            *(u32 *)(*(int *)((u8 *)candidate + 0x30) + 0xa2c);
        if ((candidateData == 0) ||
            (func_0030b5a0(candidateData,0) == 0)) {
          candidates[selectedCount] = candidate;
          selectedCount++;
        }
      }
    }
    selected = candidates[func_002ffbc0(selectedCount)];
  }
  func_0035f060(*(u32 *)((u8 *)selected + 8) | 0x80000000);
  return 1;
}

// FUN_002cffc0

u32 func_002cffc0(void)

{
  extern s16 func_003082f0(u32,u16);
  extern u16 func_00308ba0(u32);
  extern u16 *func_00308bb0(u32);
  u32 target;
  u32 actor;
  u32 selector;
  u32 count;
  u16 *ids;
  u32 i;
  u16 id;
  s16 option;
  u32 flags;

  actor = func_0035f160_u32();
  selector = func_0035ed20_u32(0);
  target = func_0029a210_u32(selector & 0xfffffff);
  actor = *(u32 *)(actor + 0x30);
  option = func_003082f0(*(u32 *)(actor + 0xa2c),0);
  flags = func_0030b4b0_u32(*(u32 *)(*(u32 *)(target + 0x30) + 0xa2c),option);
  if ((flags & 0x8000000) != 0) {
    func_0035f060_u32((s32)option);
    return 1;
  }

  count = func_00308ba0(*(u32 *)(actor + 0xa2c));
  ids = func_00308bb0(*(u32 *)(actor + 0xa2c));
  for (i = 0; i < count; i++) {
    id = ids[i];
    if ((id != 0) && (id < 0x1d0)) {
      option = func_003082f0(*(u32 *)(actor + 0xa2c),id);
      flags = func_0030b4b0_u32(*(u32 *)(*(u32 *)(target + 0x30) + 0xa2c),option);
      if ((flags & 0x8000000) != 0) {
        func_0035f060_u32((s32)option);
        return 1;
      }
    }
  }
  func_0035f060_u32(0xffffffff);
  return 1;
}

// FUN_002d0150

u32 func_002d0150(void)
{
  extern u32 func_0035f160(void);
  extern int func_0030b5a0(u32,u32);
  extern u32 func_002ffbc0(u32);
  extern void func_0035f060(u32);
  long *selected;
  long *candidate;
  u32 candidateData;
  u16 selectedCount;
  long *candidates[12];

  func_0035f160();
  selected = func_002c08c0(*(int *)(DAT_007ce3ec + 0x148) + 0x88);
  if ((selected == 0) ||
      (*(u8 *)(*(int *)((u8 *)selected + 0x30) + 0xa2) != 1)) {
    selectedCount = 0;
    for (candidate = *(long **)(DAT_007ce3ec + 0x14c); candidate != 0;
         candidate = *(long **)((u8 *)candidate + 0x4a8)) {
      if (((*(u16 *)((u8 *)candidate + 0x1a) & 1) != 0) &&
          ((*(u16 *)((u8 *)candidate + 0x1a) & 8) != 0) &&
          (*(u8 *)(*(int *)((u8 *)candidate + 0x30) + 0xa2) == 1)) {
        candidateData =
            *(u32 *)(*(int *)((u8 *)candidate + 0x30) + 0xa2c);
        if ((candidateData == 0) ||
            (func_0030b5a0(candidateData,0) == 0)) {
          candidates[selectedCount] = candidate;
          selectedCount++;
        }
      }
    }
    selected = candidates[func_002ffbc0(selectedCount)];
  }
  func_0035f060(*(u32 *)((u8 *)selected + 8) | 0x80000000);
  return 1;
}

// FUN_002d0270
u32 func_002d0270(void)
{
  extern u32 func_0035f160(void);
  extern int func_0030b5a0(u32,u32);
  extern u32 func_002ffd70(u32);
  extern int func_002c5030(u32,u32,u32,u32);
  extern void func_0035f060(u32);
  u32 context;
  u32 candidate;
  u32 fallbackSelected;
  u32 preferredSelected;
  u32 fallbackLowest;
  u32 preferredLowest;
  u32 candidateData;

  context = func_0035f160();
  fallbackSelected = 0;
  fallbackLowest = 0xfffffff;
  preferredSelected = 0;
  preferredLowest = fallbackLowest;
  for (candidate = *(u32 *)(DAT_007ce3ec + 0x14c); candidate != 0;
       candidate = *(u32 *)(candidate + 0x4a8)) {
    if (((*(u16 *)(candidate + 0x1a) & 1) != 0) &&
        ((*(u16 *)(candidate + 0x1a) & 8) != 0)) {
      candidateData = *(u32 *)(candidate + 0x30);
      if ((*(u8 *)(candidateData + 0xa2) == 1) &&
          (func_0030b5a0(*(u32 *)(candidateData + 0xa2c),0) == 0)) {
        candidateData = func_002ffd70(*(u32 *)(candidateData + 0xa2c)) & 0xffff;
        if ((candidateData < preferredLowest) &&
            (func_002c5030(context,candidate,0,0) >= 0)) {
          preferredSelected = candidate;
          preferredLowest = candidateData;
        }
        if (candidateData < fallbackLowest) {
          fallbackSelected = candidate;
          fallbackLowest = candidateData;
        }
      }
    }
  }
  if (preferredSelected != 0)
    func_0035f060(*(u32 *)(preferredSelected + 8) | 0x80000000);
  else
    func_0035f060(*(u32 *)(fallbackSelected + 8) | 0x80000000);
  return 1;
}

/* W322 probe: func_002d03e0 with opt_loop_invariants on improved normalized_diff 190 -> 188 (object 472/480). */
#pragma opt_loop_invariants on
// FUN_002d03e0

asm u32 func_002d03e0(void)
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
  .word 0x0000202d
  .word 0x0c0d7b48
  .word 0x00000000
  .word 0x0040b82d
  .word 0x24040001
  .word 0x0c0d7b48
  .word 0x00000000
  .word 0x0040f02d
  .word 0x24040002
  .word 0x0c0d7b48
  .word 0x00000000
  .word 0x0040882d
  .word 0x0000a02d
  .word 0x3c020fff
  .word 0x3452ffff
  .word 0x8f82b6fc
  .word 0x8c55014c
  .word 0x3c020008
  .word 0x0222b024
  .word 0x1000003a
  .word 0x00000000
  .word 0x96a3001a
  .word 0x30620001
  .word 0x10400035
  .word 0x00000000
  .word 0x30620008
  .word 0x10400032
  .word 0x00000000
  .word 0x8ea30030
  .word 0x906200a2
  .word 0x1440002e
  .word 0x00000000
  .word 0x16c00007
  .word 0x00000000
  .word 0x8c640a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x14400026
  .word 0x00000000
  .word 0x8ea20030
  .word 0x8c440a2c
  .word 0x0c0bff5c
  .word 0x00000000
  .word 0x3053ffff
  .word 0x0277082b
  .word 0x1420001e
  .word 0x00000000
  .word 0x8ea20030
  .word 0x8c440a2c
  .word 0x94900008
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3044ffff
  .word 0x00101080
  .word 0x00501821
  .word 0x00031080
  .word 0x00621021
  .word 0x00021880
  .word 0x009e1018
  .word 0x0043082b
  .word 0x1420000f
  .word 0x00000000
  .word 0x12200008
  .word 0x00000000
  .word 0x8ea20030
  .word 0x8c440a2c
  .word 0x0220282d
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x0272082b
  .word 0x10200003
  .word 0x00000000
  .word 0x02a0a02d
  .word 0x0260902d
  .word 0x8eb504a8
  .word 0x16a0ffc6
  .word 0x00000000
  .word 0x12800008
  .word 0x00000000
  .word 0x8e830008
  .word 0x3c028000
  .word 0x00622025
  .word 0x0c0d7c18
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x2404ffff
  .word 0x0c0d7c18
  .word 0x00000000
  .word 0x24020001
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
#pragma opt_loop_invariants reset

// FUN_002d05c0

u32 func_002d05c0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern void func_002efc90(void *);
  extern void func_002efcd0(void *);
  char *unit;
  u16 encounterId;
  s32 result;

  unit = (char *)func_0035f160();
  *(u16 *)(unit + 0x6e) = func_0035ed20(0);
  encounterId = *(u16 *)(unit + 0x6e);
  switch (encounterId) {
  case 0x132:
  case 0x68:
    *(u16 *)(unit + 0x6c) = 8;
    func_002efc90(unit);
    break;
  case 0x133:
    *(u16 *)(unit + 0x6c) = 8;
    func_002efcd0(unit);
    break;
  default:
    *(u16 *)(unit + 0x6c) = 9;
    break;
  }
  *(u16 *)(unit + 0x76) = func_0035ed20(1);
  *(u16 *)(unit + 0x78) = func_0035ed20(2);
  *(u16 *)(unit + 0x7a) = func_0035ed20(3);
  result = (*(s32 (**)(void *,u32))PTR_FUN_00697620)(unit,0);
  if (result == 0) {
    (*(s32 (**)(void *,u32))PTR_FUN_006975e0)(unit,0);
  }
  return 1;
}

// FUN_002d06e0

u32 func_002d06e0(void)

{
  extern u32 func_0035f160(void);
  u32 uVar1 = 0;

  func_002eab70();
  uVar1 = func_0035f160();
  *(u16 *)(uVar1 + 0x6c) = 8;
  return 1;
}

// FUN_002d0720

u32 func_002d0720(void)

{
  extern u32 func_0035f160(void);
  u32 uVar1 = 0;

  func_002eabb0();
  uVar1 = func_0035f160();
  *(u16 *)(uVar1 + 0x6c) = 8;
  return 1;
}

// FUN_002d0760

u32 func_002d0760(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern void func_002c6a00(void *,void *,u16);
  char *unit;
  u32 selector;
  u16 encounterId;
  s32 result;

  unit = (char *)func_0035f160();
  selector = func_0035ed20(0);
  encounterId = *(u16 *)(*(int *)(DAT_007ce3ec + 0xbbc) + 8);
  switch (encounterId) {
  case 0x1a5:
    func_002c6a00(unit,unit + 0x38,0x16b);
    func_002ec560(selector);
    break;
  case 0x1b4:
    func_002c6a00(unit,unit + 0x38,0x126);
    func_002f6bf0(selector);
    break;
  }
  result = (*(s32 (**)(void *,u32))PTR_FUN_00697620)(unit,0);
  if (result == 0) {
    (*(s32 (**)(void *,u32))PTR_FUN_006975e0)(unit,0);
  }
  return 1;
}

// FUN_002d0860

u32 func_002d0860(void)
{
    u16 encounterId;

    encounterId = *(u16*)(*(u8**)(iGpffffb6fc + 0xbbc) + 8);
    switch (encounterId)
    {
    case 0x1a5:
        func_0035f060(func_002ec590() != 0);
        break;
    case 0x1b4:
        func_0035f060(func_002f6c20() != 0);
        break;
    }
    return 1;
}

// FUN_002d08e0

u32 func_002d08e0(void)
{
  extern u32 func_0035f160(void);
  extern u32 func_0035ed20(u32);
  extern void func_00288f80(u32,u32);
  extern void func_002c6a00(void *,void *,u16);
  char *unit;
  u32 selector;
  u32 actionId;

  unit = (char *)func_0035f160();
  selector = func_0035ed20(0);
  actionId = func_0035ed20(1);
  func_00288f80(*(u32 *)(unit + 0x30),selector);
  func_002c6a00(unit,unit + 0x38,(u16)actionId);
  return 1;
}


// FUN_002d0970
u32 func_002d0970(void)

{
  u64 uVar1 = 0;
  
  if (*(u16 *)(*(int *)(iGpffffb6fc + 0xbbc) + 8) == 0x1b0) {
    uVar1 = func_002f5320();
    func_0035f060(uVar1);
  }
  else {
    func_0035f060(7);
  }
  return 1;
}

// FUN_002d09d0

u32 func_002d09d0(void)

{
  extern u32 func_0035f160(void);
  u32 uVar1 = 0;

  uVar1 = func_0035f160();
  if (*(u16 *)(*(int *)(iGpffffb6fc + 0xbbc) + 8) == 0x1b0) {
    func_002f5030(uVar1);
  }
  *(u16 *)((int)uVar1 + 0x6c) = 5;
  return 1;
}



























