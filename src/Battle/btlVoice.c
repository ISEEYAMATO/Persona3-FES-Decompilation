#include "Battle/btlVoice.h"
#include "Battle/battle.h"
#include "Battle/btlAction.h"
#include "Battle/btlUnit.h"
#include "Battle/btlOrder.h"
#include "Battle/btlCamera.h"
#include "Battle/btlFormation.h"
#include "Main/Battle/Data/datCalc.h"
#include "Main/Battle/Data/datPersona.h"
#include "Main/Battle/Data/datUnit.h"
#include "Kernel/Kwln/kwlnTask.h"
typedef struct
{
  u32 result;
  u32 state;
  u16 voiceId;
} BtlVoicePacketA03Work;

typedef struct
{
  u16 arg0;
  u16 arg1;
  u16 arg2;
  u16 flags;
  u32 state;
} BtlVoicePacketA04Work;

typedef struct
{
  u16 arg0;
  u16 arg1;
  u16 state;
} BtlVoicePacketC00Work;

typedef struct
{
  u16 voiceId;
} BtlVoicePacketC03Work;

typedef struct
{
  u32 arg0;
  u32 arg1;
  u32 arg2;
  u16 state;
} BtlVoicePacketC06Work;

typedef struct
{
  u32 voiceId;
  u32 param;
} BtlVoicePacketC09Work;

typedef struct
{
  u16 voiceId;
} BtlVoicePacketC0BWork;

typedef struct
{
  s16 frame;
  u32 state;
} BtlVoicePacketWaitWork;

typedef struct
{
  s16 frame;
} BtlVoicePacketC0AWork;

typedef struct
{
  s8 genus;
  u8 pad;
  u16 charId;
} BtlVoiceUnitEntry;

typedef struct
{
  f32 x;
  f32 z;
} VoiceXZ;
typedef struct
{
    s16 values[3];
} VoiceSlots;
typedef struct
{
    s16 values[2];
} VoiceSlotPair;
typedef struct
{
  f32 values[4];
} VoicePositions;



extern u32 btlVoice002e2a60(void* work);


#include "Battle/btlVoice.h"
#include "Utils.h"
#define CONCAT13(a, b) ((((u32)(a) & 0xffu) << 24) | ((u32)(b) & 0x00ffffffu))
#define CONCAT44(a, b) ((((u64)(u32)(a)) << 32) | (u32)(b))
extern u8 DAT_0069a110[];
extern u8 DAT_0069a150[];
extern u8 DAT_0069a190[];
extern u8 DAT_0069a1d0[];
extern u8 DAT_0069a1d2[];
extern u8 DAT_0069a210[];
extern u8 DAT_0069a210_abs[];
extern s16 D_00699e60[];
extern s16 D_00699eb0[];
extern s16 D_00699f00[];
extern s16 D_00699f50[];
extern s16 D_00699f90[];
extern u8 DAT_0069a470[];
extern u8 DAT_0069a4f0[];
extern u8 DAT_0069a550[];
extern u8 DAT_0069a5c8[];
extern u32 DAT_0069a5cc;
extern u32 DAT_0069a5d0;
extern const char DAT_0069a5b8[];
extern u8 DAT_0069a5d8[];
extern u32 DAT_0069a5e0;
extern u8 DAT_0069a608[];
extern u32 DAT_0069a610;
extern u8 DAT_0069a618[];
extern u32 DAT_0069a61c;
extern u32 DAT_0069a620;
extern u8 DAT_0069a628[];
extern u8 DAT_0069a638[];
extern u8 DAT_0069a648[];
extern f32 D_00697880[];
extern const u8 D_006978B0[];
extern const u8 D_00699FE0[];
extern const u8 D_00699FF0[];
extern const char voiceStream115Both[];
extern const char voiceStream115First[];
extern const char voiceStream115Second[];
extern const u8 D_0069A368[];
extern RwV3d voicePartyCameraStarts[];
extern RwV3d voicePartyCameraEnds[];
extern RwV3d voicePartyCameraTargets[];
extern RwV3d voicePartyCameraUps[];
extern f32 voicePartyCameraDurations[];
extern const RwV3d voiceCameraStart66;
extern const RwV3d voiceCameraEnd66;
extern const RwV3d voiceCameraTarget66;
extern const RwV3d voiceCameraUp66;
extern const u8 D_0069A2D0[];
extern const u8 D_0069A2F0[];
extern const u8 D_0069A310[];
extern const u8 D_0069A330[];
extern u32 DAT_0069a650;
extern u8 DAT_0069a658[];
extern u32 DAT_0069a65c;
extern u32 DAT_0069a660;
extern u8 DAT_0069a668[];
extern u8 DAT_0069a678[];
extern u8 DAT_0069a690[];
extern u32 DAT_0069a698;
extern u8 DAT_0069a6b0[];
extern u32 DAT_0069a6b4;
extern u32 DAT_0069a6b8;
extern u8 DAT_0069a6d0[];
extern u8 DAT_0069a6f0[];
extern u8 DAT_006a0000[];
extern u8 DAT_007cc970;
extern u32 DAT_007cc9e0;
extern u32 DAT_007cc9e2;
extern u32 DAT_007cc9e4;
extern s16 DAT_007cc9e8[3];
extern s16 DAT_007cc9f0;
extern s16 DAT_007cc9f2;
extern s16 DAT_007cc9f4;
extern u32 DAT_007ce3ec;
extern u32 DAT_007ce4bc;
extern u32 DAT_007ce4d0;
extern u8* iGpffffb6fc;
extern u8* iGpffffb6fc_ptr;
#define iGpffffb6fc ((u8*)DAT_007ce3ec)
extern u32 iGpffffb708;
extern u32 gp0xffff9c80;
extern u32 uGpffff82dc;
extern u32 uGpffff82e0;
extern f32 uGpffff82dc_f32_voice;
extern f32 uGpffff82e0_f32_voice;
extern s16 uGpffff9cd0;
extern s16 uGpffff9cd2;
extern s16 uGpffff9cd4;
extern s16 uGpffff9cd8;
extern s16 uGpffff9cda;
extern s16 uGpffff9cdc;
extern s16 uGpffff9ce0;
extern s16 uGpffff9ce2;
extern s16 uGpffff9ce4;
extern s16 uGpffff9ce8;
extern s16 uGpffff9cea;
extern s16 uGpffff9cec;
extern u64 FUN_001757f0();
extern u64 FUN_0017b220();
extern u64 FUN_001fdd40();
extern u64 FUN_0027ce50();
extern u64 FUN_0027e390();
extern u64 FUN_0027ed20();
extern u64 FUN_0027f410();
extern u64 FUN_0027f650();
extern u64 FUN_0027f730();
extern u64 FUN_0027f930();
extern u64 FUN_0027fe90();
extern u64 FUN_00280050();
extern u64 FUN_00280480();
extern f32 FUN_002812d0(BtlUnit* unit, BtlUnit* target, s32 id);
extern u64 FUN_002822b0();
extern u64 FUN_002831c0();
extern s16 FUN_002835e0(f32 param_1, u32 param_2, u16 param_3);
extern u64 FUN_00284200();
extern u64 FUN_00285690();
extern u64 FUN_00285d30();
extern void FUN_00287490(BtlUnit* unit);
extern void FUN_00287510(BtlUnit* unit);
extern u64 FUN_00287580();
extern void FUN_00287b20(int param_1,u16 param_2);
extern u64 FUN_002889c0();
extern u64 FUN_00288f80();
extern BtlAction* FUN_00289650(u16 mode, u16 charId, void* data);
extern BtlAction* FUN_0029a1d0();
extern u64 FUN_0029a2c0();
extern u32 FUN_0029a320(BtlAction* action);
extern u64 FUN_0029ad20();
extern BtlAction* btlActionCurrent(void);
extern u64 FUN_0029ea60();
extern u64 FUN_0029ec00();
extern u64 FUN_0029ec50();
extern u64 FUN_0029ec80();
extern BtlPacket* FUN_0029f4b0(u32 param_1,u32 param_2,u32 param_3);
extern BtlPacket* FUN_0029fa50(u32 param);
extern BtlPacket* FUN_002a0050(u32 param_1,u32 param_2,u32 param_3,u32 param_4,u16 param_5);
extern BtlPacket* FUN_002a1080(s32 param, s16 mode);
extern BtlPacket* FUN_002a1280(u32 param_1,u32 param_2);
extern BtlPacket* FUN_002a16c0(s32 param);
extern void FUN_002a1b00(s32 param_1,s16 param_2,s32 param_3);
extern void FUN_002a1db0(s32 param_1);
extern void FUN_002a2170(void *param_1, const f32 *param_2);
extern void FUN_002a2290(void *param_1, const f32 *param_2, const f32 *param_3, int param_4);
extern void FUN_002a3110(void *param_1, float param_2);
extern u64 FUN_002a3b40();
extern u64 FUN_002a3d70();
extern void FUN_002a3e80(float param_1, u8 *param_2,
                         u8 *param_3, u8 *param_4, u32 param_5);
extern void FUN_002a4690(void *param_1, const void *param_2, const void *param_3, const void *axis);
extern u64 FUN_002b71e0();
extern u64 FUN_002b8d60();
extern u64 FUN_002b8f90();
extern u64 FUN_002b9030();
extern u64 FUN_002b90d0();
extern u64 FUN_002bac00();
extern u64 FUN_002baf90();
extern u64 FUN_002bb2f0();
extern u64 FUN_002bb6f0();
extern u64 FUN_002bc7e0();
extern u64 FUN_002bc890();
extern u64 FUN_002bd480();
extern u64 FUN_002bd590();
extern u64 FUN_002bd850();
extern u64 FUN_002bdbd0();
extern u64 FUN_002c3770();
extern u64 FUN_002d1d00();
extern void FUN_002d2280(s16* outX, s16* outZ, f32* position);
extern void FUN_002d5dc0(void* param_1);
extern u32 FUN_002d5e10(BtlAction* action);
extern u32 FUN_002d6370(s16 commandId);
extern u64 FUN_002d6620();
extern void FUN_002d7890(BtlAction* action, u64 mode);
extern u64 FUN_002d7e20();
extern u64 FUN_002db740();
extern BtlPacket* FUN_002db800(u16 command, u32 param);
extern u64 FUN_002db890();
extern u64 FUN_002dce90();
extern u64 FUN_002dd100();
extern u64 FUN_002dd4a0();
extern u64 FUN_002dd5e0();
extern u64 FUN_002dd690();
extern u64 FUN_002dd760();
extern u64 FUN_002e4220();
extern u32 FUN_002e4250();
extern u64 FUN_002f87e0();
extern u64 FUN_002f8810();
extern void FUN_002fddb0(BtlUnit* unit, RwV3d* position);
extern u64 FUN_002ff540();
extern u32 FUN_002ffbc0();
extern u64 FUN_002ffd90();
extern u64 FUN_002ffdc0();
extern u64 FUN_002ffdf0();
extern u64 FUN_00300100();
extern u64 FUN_00300560();
extern void FUN_00301540(int param_1,u32 param_2);
extern s8 FUN_00301750(int param_1,u32 param_2);
extern void FUN_00302380(u32 param_1,u32 param_2,u32 param_3);
extern u64 FUN_0030b5a0();
extern void FUN_00352c50(u32 param_1, u32 param_2, u32 param_3);
extern u64 FUN_00357fd0();
extern u32 FUN_0035c090();
extern void FUN_00395170(u64 param_1);
extern u32 FUN_003951d0();
extern float FUN_004c69f0(void* dst, const void* src);
extern u64 FUN_00521408();
extern u64 FUN_00523ac8();
u32 func_002f6c20(void);
void func_002e4220(u32 initFunc, u32 updateFunc, u32 action);
void func_002f3a80(BtlAction* action);
u32 func_002f43a0(BtlAction* action);
void func_002f4410(BtlAction* unused);
u32 func_002f4480(BtlAction* action);
void* func_002b8f90(s32 param);
void func_002b9030(void* object);
void func_002b90d0(void* object, void* file);
BtlPacket* func_002baf90(void* object, BtlUnit* source,
                         BtlUnit* target, u16 param, u32 flags);
BtlPacket* func_002bc890(u8* data, u16 param);
void* func_002f87e0(u16 index);
 extern u8* DAT_007ce3ec_ptr_voice;
 extern u32 FUN_002b8f90_u32_voice(u16 param);
 extern u32 FUN_002f87e0_u32_voice(u16 index);
 extern u32 FUN_002b8d60_u32_voice(u32 mode, u32 flags);
 extern u32 FUN_002baf90_u32_voice(u32 object, u32 source,
                                     u32 target, u16 param, u32 flags);
 extern u32 FUN_00284200_u32_voice(u32, u32, u32, u32, u32);
 extern u32 FUN_0027fe90_u32_voice(u32, u32, u32, u32);
 extern u32 FUN_002a3b40_u32_voice(u32, u32);
 extern void FUN_002b90d0_voice(u32 object, u32 file);
 extern void FUN_0027ed20_voice(u32 packet, u32 mode);
 extern u32 FUN_002bc950_u32_voice();
 extern BtlPacket* FUN_00284200_packet_voice(f32, BtlUnit*, u16, u16, u16);
 extern BtlPacket* FUN_002b8d60_packet_voice(u16, u16);
 extern BtlPacket* FUN_0027fe90_packet_voice(BtlUnit*, const void*, const void*, const void*);
 extern BtlPacket* FUN_002a3b40_packet_voice(void*, u32);
 extern BtlPacket* FUN_002baf90_packet_voice(void*, BtlUnit*, BtlUnit*, u16, u32);
extern BtlPacket* FUN_002d1d00_packet_voice(BtlAction*, u16, const char*);
extern BtlPacket* FUN_002bac00_packet_voice(u32, void*, u16);
extern u32 FUN_0029ec00_u32_voice(s32);
extern u32 FUN_0029ec50_u32_voice(s32);
extern BtlPacket* FUN_002d7e20_packet_voice(BtlAction*, BtlAction*, void*, u16, u16);
extern BtlPacket* FUN_002dd690_packet_voice(u16 channel, const char* streamName);
extern BtlPacket* FUN_002bd590_packet_voice(BtlUnit* unit, u16 id);
extern BtlPacket* FUN_002bc7e0_packet_voice(u16 type);
extern BtlPacket* FUN_002a3d70_packet_voice(BtlAction*, const RwV3d*, const RwV3d*, const RwV3d*, const RwV3d*, f32);
extern BtlPacket* FUN_002dd4a0_packet_voice(u16, u16);
extern BtlPacket* FUN_002dd5e0_packet_voice(u16);
extern BtlPacket* FUN_002bd850_packet_voice(BtlUnit*, s16);
extern BtlPacket* FUN_002db890_packet_voice(void);
extern BtlPacket* FUN_002db800_packet_voice(u16, u32);
extern BtlPacket* FUN_002dd760_packet_voice(u16, void*, u32);
extern BtlPacket* FUN_0027f410_packet_voice(u32, u32);
extern BtlPacket* FUN_002dd830_packet_voice(BtlUnit*, u16, u16, u16);
extern void* FUN_002f8810_ptr_voice(void);
extern BtlPacket* FUN_002822b0_packet_voice(BtlUnit*, RwV3d*, u32);
extern BtlPacket* FUN_00285d30_packet_voice(BtlUnit*, u32, u16, u16, u8, u8);
extern BtlPacket* FUN_00285690_packet_voice(BtlUnit*, u16, u16);
extern BtlPacket* FUN_0029f4b0_packet_voice(u32, u32, u32);
extern BtlPacket* FUN_002a0050_packet_voice(BtlPacket*, u32, u32, u32, u32);
extern BtlPacket* FUN_002a1280_packet_voice(BtlPacket*, u32);
extern BtlPacket* FUN_002bb2f0_packet_voice(u32, BtlUnit*, u32, u64, u32);
extern BtlPacket* FUN_002dd100_packet_voice(u32, u32, u32);
extern BtlPacket* FUN_002a1db0_packet_voice(u32);
extern BtlPacket* FUN_002a1b00_packet_voice(BtlAction*, s16, s32);
extern void FUN_002a1b00_voice(s32, s16, s32);
extern u16 FUN_002d4e10_u16_voice(u16, u32);
extern s16 FUN_002838d0_s16_voice(f32, BtlUnit*, u16);
extern u32 FUN_002ff540_u32_voice(u32, s16);
extern BtlAction* FUN_00289650_action_voice(u32, s16, u32);
void func_002f2550(BtlAction* action);
u32 func_002f2840(BtlAction* action);
void func_002f2890(BtlAction* param_1);
u32 func_002f2b40(BtlAction* action);
void func_002f6840(BtlAction* action);
u32 func_002f6ab0(BtlAction* action);
#include "Battle/btlVoice.h"
#include "Utils.h"
typedef u8 undefined1; typedef u16 undefined2; typedef u32 undefined4; typedef u64 undefined8;
typedef u8 undefined; typedef u32 uint3;
typedef u64 (*code)();
#define CONCAT44(a, b) ((((u64)(u32)(a)) << 32) | (u32)(b))
typedef struct {
  f32 x;
  f32 y;
  f32 z;
} VoiceVector;
extern s16 DAT_00697c80;
extern u8 DAT_00697c80_abs[];
extern u8 DAT_00697c84_abs[];
extern u8 DAT_00697c88_abs[];
extern u8 DAT_00697c8c_abs[];
extern u8 DAT_00697c90_abs[];
extern u8 DAT_00697c9c_abs[];
extern u8 DAT_00697ca0_abs[];
extern u8 DAT_00697ca4_abs[];
extern u8 DAT_00697ca8_abs[];
extern f32 DAT_00697c84;
extern f32 DAT_00697c88;
extern f32 DAT_00697c8c;
extern f32 DAT_00697c90;
extern f32 DAT_00697c9c;
extern f32 DAT_00697ca0;
extern f32 DAT_00697ca4;
extern f32 DAT_00697ca8;
extern u8 voiceCameraPathsPlayer[];
extern u8 voiceCameraPathType2[];
extern u8 voiceCameraPathType3_1[];
extern u8 voiceCameraPathType3_2[];
extern u8 voiceCameraPathType3_3[];
extern u8 voiceCameraPathType3_2Special[];
extern u8 voiceCameraPathType4[];
extern u8 voiceCameraPathType4Special[];
extern u8 voiceCameraPathType5[];
extern u8 voiceCameraPathType7[];
extern u8 voiceCameraPathType7Special[];
extern u8 voiceCameraPathType8[];
extern u8 voiceCameraPathType8Special[];
extern u8 voiceCameraPathType9[];
extern u8 DAT_00698d40[];
extern s16 DAT_00699240[];
extern f32 DAT_00699244[];
extern f32 DAT_00699248[];
extern f32 DAT_0069924c[];
extern f32 DAT_00699250[];
extern f32 DAT_0069925c[];
extern f32 DAT_00699260[];
extern f32 DAT_00699264[];
extern f32 DAT_00699268[];
extern u32 DAT_00699be0;
extern u32 DAT_00699be4;
extern u32 DAT_00699be8;
extern u32 DAT_00699bec;
extern f32 DAT_00699c80;
extern f32 DAT_00699c84;
extern f32 DAT_00699c88;
extern f32 DAT_00699c8c;
extern u8 DAT_00699c80_abs[];
extern u8 DAT_00699c84_abs[];
extern u8 DAT_00699c88_abs[];
extern u8 DAT_00699c8c_abs[];
extern u8 DAT_00699cc0[];
extern u8 DAT_00699d10[];
extern u8 DAT_00699db0[];
extern u8 DAT_00699e00[];
extern const char DAT_00699c10[];
extern const char DAT_00699cb0[];
extern const char DAT_00699d00[];
extern const char DAT_00699df0[];
extern const char DAT_0069a0f8[];
extern u8 DAT_0069a000[];
extern u32 DAT_0069a000_abs[];
extern u8 DAT_0069a060[];
extern f32 DAT_007cad20;
extern f32 DAT_007cad34;
extern f32 DAT_007cad38;
extern f32 DAT_007cad3c;
extern f32 DAT_007cad40;
extern f32 DAT_007cad44;
extern f32 DAT_007cad48;
extern f32 DAT_007cad50;
extern f32 DAT_007cad54;
extern f32 DAT_007cad58;
extern f32 DAT_007cad5c;
extern f32 DAT_007cad60;
extern f32 DAT_007cad78;
extern f32 DAT_007cad7c;
extern f32 DAT_007cad80;
extern f32 DAT_007cad84;
extern f32 DAT_007cad88;
extern f32 DAT_007cada4;
extern f32 DAT_007cadb4;
extern f32 DAT_007cadb8;
extern f32 DAT_007cadbc;
extern f32 DAT_007cadc4;
extern f32 DAT_007cadc8;
extern f32 DAT_007cadcc;
extern f32 DAT_007cadd0;
extern f32 DAT_007cafbc;
extern f32 DAT_007cafd4;
extern f32 DAT_007cafd8;
extern f32 DAT_007cafdc;
extern f32 DAT_007cafe0;
extern f32 DAT_007cafe4;
extern f32 DAT_007cafe8;
extern f32 DAT_007cafec;
extern RwV3d D_00697890;
extern RwV3d D_006978A0;
extern RwV3d D_006978A0_abs[];
extern u32 DAT_007cc9a0;
extern u32 DAT_007cc9a2;
extern u32 DAT_007cc9a4;
extern u32 DAT_007cc9a8;
extern u32 DAT_007cc9aa;
extern u32 DAT_007cc9ac;
extern u32 DAT_007cc9b0;
extern u32 DAT_007cc9b2;
extern u32 DAT_007cc9b4;
 extern s16 DAT_007cc9b0_s16;
 extern s16 DAT_007cc9b2_s16;
 extern s16 DAT_007cc9b4_s16;
extern s16 DAT_007cc9b8_s16;
extern s16 DAT_007cc9ba_s16;
extern s16 DAT_007cc9bc_s16;
extern u32 DAT_007ce3ec;
extern u32 DAT_007ce3f8;
extern u32 DAT_007ce418;
extern u16 DAT_007e094e[];
extern u16 DAT_007e0958[];
extern void (*DAT_0096017c[])(u32 handle);
extern u32 iGpffffb70c;
extern u32 iGpffffb810;
extern float uGpffff8108;
extern u32 uGpffffb21c;
extern s16 uGpffff9c98;
extern s16 gp0xffff9c98;
extern s16 gp0xffff9c9a;
extern s16 uGpffff9c9a;
extern s16 uGpffff9ca0;
extern s16 uGpffff9ca2;
extern s16 uGpffff9ca4;
extern s16 uGpffff9ca8;
extern s16 uGpffff9caa;
extern s16 uGpffff9cac;
extern u64 FUN_0010a100();
extern u64 FUN_0010a2e0();
extern s32 FUN_0010a500(s16 param);
extern u32 FUN_0010a720();
extern u32 FUN_0010a770();
extern u32 FUN_001166a0();
extern u32 FUN_00116760();
extern void FUN_00116780(u32 handle);
extern void FUN_001167a0(u32 handle);
extern u32 FUN_001167c0(u32 handle, s32 mode);
extern u32 FUN_00116e20();
extern u32 FUN_00116ed0();
extern void FUN_00116ef0(u32 handle);
extern s32 FUN_00116f10(u32 handle);
extern s32 FUN_00116f20(u32 handle);
extern u32 FUN_00116f30(u32 handle);
extern void FUN_00116f50(u32 handle);
extern u32 FUN_001192b0();
extern u32 FUN_00119380();
extern void FUN_001193a0(u32 handle);
extern u32 FUN_001193c0(u32 handle);
extern void FUN_0017b2e0(u16 charId, u16 index, s32 enabled);
extern u64 FUN_0017b3d0(u16 voiceId,u16 index);
extern u32 FUN_0018b360();
extern void FUN_0018b380(KwlnTask* task);
extern s32 FUN_0018b5f0(KwlnTask* task);
extern u32 FUN_0018b620();
extern u32 FUN_0018efb0();
extern u32 FUN_0018f060();
extern void FUN_0018f080(u32 handle);
extern s32 FUN_0018f0a0(u32 handle);
extern s32 FUN_0018f0b0(u32 handle);
extern u32 FUN_0018f0c0(u32 handle);
extern void FUN_0018f0e0(u32 handle);
extern u64 FUN_00195020();
extern u64 FUN_00195290();
extern u64 FUN_001fdd40();
extern u64 FUN_001ff3d0();
extern u64 FUN_001ff3f0();
extern u64 FUN_001ff410();
extern u64 FUN_0027e390();
extern u64 FUN_0027ec10();
extern u64 FUN_0027ed20();
extern u64 FUN_0027f410();
extern u64 FUN_0027f650();
extern u64 FUN_0027f680();
extern u64 FUN_0027f710(f32 param_1, u32 param_2);
extern void FUN_0027f710_btlVoice_typed(BtlUnit* unit, f32 scale);
extern u64 FUN_0027f730();
extern u64 FUN_0027fcf0();
extern u64 FUN_0027fe90();
extern u64 FUN_0027ffb0();
extern u64 FUN_00280050();
extern u64 FUN_00280130();
extern u64 FUN_00280480();
extern u64 FUN_00280870();
extern f32 FUN_00280870_btlVoice_typed(u32 mode, u32 flags, RwV3d* position,
                                        f32* value1, f32* value2, u32 option);
extern void FUN_0027ffb0_btlVoice_typed(BtlUnit* unit, RwV3d* position);
extern void FUN_00280130_btlVoice_typed(BtlUnit* unit, RwV3d* position);
extern void FUN_002b6070_btlVoice_typed(BtlCamera* camera, f32 param1,
                                         f32 param2);
extern void FUN_002b6460_btlVoice_typed(BtlCamera* camera);
extern f32 FUN_002812d0(BtlUnit* unit, BtlUnit* target, s32 id);
extern u64 FUN_002822b0();
extern u64 FUN_00282bc0();
extern u64 FUN_00282c30();
extern void FUN_00282d40(f32 speed, BtlUnit* unit, s16 id, u32 blend, s8 mode);
extern void FUN_00282d40_call(BtlUnit* unit, s16 id, u32 blend, s8 mode,
                              f32 speed);
extern u64 FUN_002831c0();
extern u64 FUN_002838d0();
extern u64 FUN_00283c50(f32 value, u32 handle);
extern u64 FUN_00284200();
extern u64 FUN_002843e0();
extern u64 FUN_00284c90();
extern u64 FUN_00285690();
extern u64 FUN_00285d30();
extern u64 FUN_00285e50();
extern u64 FUN_00285f20();
extern void FUN_00287510(BtlUnit* unit);
extern u64 FUN_002875a0();
extern u64 FUN_002878d0();
extern void FUN_002880e0(u32 unit, u16 mode);
extern u64 FUN_002889c0();
extern u64 FUN_00288f80();
extern u32 FUN_00289f40(BtlAction* action);
extern BtlAction* FUN_0029a1d0();
extern u64 FUN_0029a2c0();
extern u32 FUN_0029a320(BtlAction* action);
extern u64 FUN_0029ad20();
extern u64 FUN_0029ea60();
extern u64 FUN_0029ec00();
extern u64 FUN_0029ec50();
extern u64 FUN_0029ec80();
extern void FUN_002a2170(void *param_1, const f32 *param_2);
extern s32 FUN_002a3750(BtlCamera* camera, u32 unit);
extern u64 FUN_002a3b40();
extern u64 FUN_002a3d70();
extern void FUN_002a4470(f32* dst, f32* src);
extern void FUN_002a44b0(f32* dst, f32* src);
extern void FUN_002a44f0(f32* dst, f32* src);
extern void FUN_002a54f0(BtlCamera* camera, u32 closeView,
                         s32 nearScale, s32 farScale);
extern u64 FUN_002a5f40();
extern u64 FUN_002a7830();
extern u64 FUN_002ac540();
extern u64 FUN_002af960();
extern void FUN_002b0210(int param_1);
extern void FUN_002b0280(f32 weight, BtlCamera* camera, u32 arg2, u32 arg3);
extern void FUN_002b1e00(int param_1);
extern void FUN_002b2060(int param_1);
extern void FUN_002b2800(BtlCamera *camera);
extern void FUN_002b2880(int param_1);
extern void FUN_002b4db0(float);
extern void FUN_002b4f40(int param_1);
extern void FUN_002b6070(BtlCamera* camera, f32 param_1, f32 param_2);
extern void FUN_002b6460(BtlCamera *camera);
extern u64 FUN_002b6bf0();
extern u8* FUN_002b6cd0(int param_1);
extern u64 FUN_002b71e0();
extern u64 FUN_002b8d60();
extern u64 FUN_002b8f90();
extern u64 FUN_002b9030();
extern u64 FUN_002b90d0();
extern u64 FUN_002bac00();
extern u64 FUN_002baf90();
extern u64 FUN_002bb2f0();
extern u64 FUN_002bb6f0();
extern u64 FUN_002bc950();
extern u64 FUN_002bd480();
extern u64 FUN_002bd590();
extern u64 FUN_002bd850();
extern u64 FUN_002bdbd0();
extern void FUN_002bfcb0(BtlAction* action, void* target, u8 arg2,
                         u8 arg3, u16 value);
extern u64 FUN_002c09f0();
extern u32 FUN_002c1ce0(BtlAction* action, u32 param);
extern u64 FUN_002c3770();
extern u16 FUN_002d1600(BtlTarget* target);
extern void FUN_002d1de0(void* task, const void* from, const void* to);
extern void FUN_002d1de0_btlVoice_typed(RtQuat* out, const RwV3d* from,
                                         const RwV3d* to);
extern float FUN_002d1f30(const void* first, const void* second);
extern f32 FUN_002d1f30_btlVoice_typed(const f32* first, const f32* second);
extern float FUN_002d1fd0(void* from, void* to, void* eye, void* out);
extern float FUN_004c69f0(void* dst, const void* src);
extern void FUN_002d3e00(BtlUnit* unit, RwV3d* outPos);
extern void FUN_002d3fe0(BtlUnit* unit);
extern u16 FUN_002d4e10(u16 mask, u32 badStatus);
extern u32 FUN_002d5bf0(BtlUnit* unit);
extern void FUN_002d5dc0(void* param_1);
extern u32 FUN_002d5e10(BtlAction* action);
extern u32 FUN_002d6290(BtlAction* action);
extern u64 FUN_002d6620();
extern void FUN_002d7890(BtlAction* action, u64 mode);
extern u64 FUN_002d7e20();
extern void FUN_002d8090(BtlAction* action);
extern BtlPacket* FUN_002db800(u16 command, u32 param);
extern u64 FUN_002db890();
extern u64 FUN_002dd100();
extern u64 FUN_002dd4a0();
extern u64 FUN_002dd5e0();
extern u64 FUN_002dd690();
extern u64 FUN_002dd760();
extern u64 FUN_002dd830();
extern u32 FUN_002e2a60(int *param_1);
extern u64 FUN_002f6330();
extern u64 FUN_002f6510();
extern u64 FUN_002f87e0();
extern u64 FUN_002f8810();
extern u64 FUN_002f88c0();
extern u64 FUN_002f8a40();
extern u32 FUN_002fd2e0(u32 param_1, u16 param_2);
extern u32 FUN_002fd4a0(void);
extern u32 FUN_002fd500(void);
extern s32 FUN_002fdbb0(BtlAction* action, BtlUnit* unit);
extern u64 FUN_002fdfa0();
extern u64 FUN_002ff540();
extern u32 FUN_002ffbc0();
extern u32 FUN_002ffbc0_btlVoice_typed(u32 max);
extern u32 FUN_00351bb0_btlVoice_typed(u16 mode);
extern u64 FUN_002ffd70();
extern u64 FUN_002ffd90();
extern u64 FUN_002ffdf0();
extern u64 FUN_003004f0();
extern u64 FUN_00300560();
extern u64 FUN_00300580();
extern u8 FUN_00301ca0(u32 param_1, u32 param_2);
extern u32 func_00301ca0();
extern u32 FUN_003068d0(u32 param_1,s32 param_2,s32 param_3,u32 param_4);
extern s16 FUN_003082f0(DatUnit* unit, u32 id);
extern u16 FUN_00308930(void* param_1);
extern u32 FUN_00308a50(u16 id);
extern u64 FUN_00308c60();
extern u8 FUN_003093a0(u16 *param_1);
extern u64 FUN_0030b5a0();
extern u32 FUN_0030c3a0(void* param_1);
extern u64 FUN_00318540();
extern s32 FUN_00318d10();
extern u64 FUN_00318ed0();
extern s32 FUN_00318ed0_btlVoice_typed(u32 model, s32 id, f32* out);
extern u64 FUN_003195f0();
extern u32 FUN_00351bb0(u16 param_1);
extern void FUN_00352c50(u32 param_1, u32 param_2, u32 param_3);
extern u64 FUN_00357fd0();
extern u32 FUN_00357fd0_btlVoice_typed(u32 seed);
extern void FUN_00395170(u64 param_1);
extern u64 FUN_004be1e0();
extern void FUN_004be1e0_btlVoice_typed(RwV3d* out, const RwV3d* basis,
                                         s32 count, const RtQuat* source);
extern void FUN_004c6b20_btlVoice_typed(f32* out, const f32* in);
extern void FUN_00280050_btlVoice_typed(BtlUnit* unit, RwV3d* position);
extern void FUN_004be310(float *param_1,float *param_2,float *param_3);
extern void FUN_004be310_btlVoice_typed(const void* first, const void* second,
                                        void* out);
extern u64 FUN_004c31b0(float param_1, void* param_2, u32 param_3, u32 param_4);
extern float FUN_004c69f0(void* dst, const void* src);
extern float FUN_004c6b20(float *param_1,float *param_2);
extern void FUN_004c6be0(float* out, const RwV3d* basis, void* source);
extern u64 FUN_004c6c60(u64 param_1);
extern void FUN_004c6c60_btlVoice_typed(RwV3d* out, const RwV3d* src,
                                         const RwMatrix* matrix);
extern u64 FUN_00521408();
extern float FUN_0052e930(float x);
u32 func_002e2c70(u16 *param_1);
u32 func_002e2cb0(u16 param_1);
void func_002e2d00(u16 param_1);
void func_002e2d40(void);
u32 func_002e2d70(BtlVoicePacketA03Work* work);
void func_002e2f20(void);
void func_002e2f30(void);
u32 func_002e3010(BtlVoicePacketA04Work* work);
char * func_002e3120(int param_1);
u64 func_002e3350(BtlAction* action,s16 index);
s16 func_002e33f0(BtlAction* action);
void func_002e3560(u16 *param_1);
u32 func_002e35a0(void);
void func_002e35d0(u16 param_1,u16 param_2);
u32 func_002e3650(BtlVoicePacketWaitWork* work);
void func_002e36f0(void);
u32 func_002e3740(BtlVoicePacketWaitWork* work);
void func_002e37e0(void);
void func_002e3830(u16 *param_1);
u32 func_002e3870(void);
void func_002e38a0(u16 param_1);
u32 func_002e3900(BtlVoicePacketWaitWork* work);
void func_002e3990(void);
u32 func_002e39e0(BtlVoicePacketWaitWork* work);
void func_002e3a90(void);
void func_002e3ae0(u64 param_1);
u32 func_002e3b20(void);
void func_002e3b50(u32 param_1,u32 param_2,u32 param_3);
u32 func_002e3be0(BtlVoicePacketWaitWork* work);
void func_002e3c80(void);
u32 func_002e3cd0(void* work);
void func_002e3d10(void);
void func_002e3d50(int param_1);
u32 func_002e3db0(void);
void func_002e3de0(u32 param_1,u32 param_2);
u32 func_002e3e60(BtlVoicePacketC0AWork* work);
void func_002e3f20(void);
void func_002e3f70(u16 *param_1);
u32 func_002e3fb0(void);
void func_002e3fe0(u16 param_1);
u32 func_002e4040(BtlVoicePacketWaitWork* work);
void func_002e40d0(void);
u32 func_002e4120(BtlVoicePacketWaitWork* work);
void func_002e41d0(void);
void func_002e4220(u32 param_1,u32 param_2,u32 param_3);
void func_002e4240(u32 param_1);
u32 func_002e4250(void);
u32 func_002e4290(u32 param_1);
void func_002e42e0(u32 param_1);
void func_002e4310(void);
u32 func_002e4330(u32 param_1);
s32 func_002e43a0(void);
u32 func_002e4430(BtlAction* action, s32 skillId, u32 param_3);
u32 func_002e4520(int param_1,u32 param_2,u32 param_3);
u32 func_002e4720(u16 param_1);
u32 func_002e47a0(BtlAction* action, s32 skillId);
u32 func_002e4910(BtlAction* action, s32 skillId, u32 param_3);
void func_002e4a30(void);
void func_002e4a40(u64 param_1);
extern void func_002e4a40_camera(BtlCamera* camera);
void func_002e4f50(BtlCamera* camera);
void func_002e5040(void);
void func_002e5060(BtlCamera* camera);
void func_002e58a0(BtlCamera* param_1);
f32 func_002e6130(BtlUnit* param_1,BtlUnit* param_2,float* param_3,float* param_4);
void func_002e6a20(BtlCamera* camera, float weight);
void func_002e70b0(BtlCamera* camera);
void func_002e71c0(int param_1);
void func_002e7210(BtlCamera* camera);
void func_002e7320(void);
void func_002e7330(int param_1);
void func_002e7680(int param_1);
void func_002e76a0(BtlCamera* camera);
void func_002e7710(BtlCamera* camera);
void func_002e77c0(BtlCamera* camera);
void func_002e7810(int param_1);
void func_002e7880(void);
void func_002e7890(u32 param_1);
void func_002e7db0(BtlCamera* param_1);
void func_002e82b0(BtlCamera* camera);
void func_002e87b0(BtlCamera* camera);
void func_002e8820(BtlCamera* camera);
void func_002e8a40(BtlCamera* camera);
void func_002e8c80(void);
void func_002e8c90(int param_1);
void func_002e8d20(int param_1);
void func_002e8d40(void);
void func_002e8d70(void *param_1);
void func_002e8e20();
void func_002e8f40();
void func_002e9060(void);
void func_002e9170(void);
void func_002e92c0(void);
void func_002e9450(void);
void func_002e95f0(void);
int func_002e97e0(void);
void func_002e9950(void);
void func_002e9ac0(void);
void func_002e9c20(BtlAction* action);
u32 func_002e9f10(BtlAction* action);
void func_002ea060(void);
void func_002ea210(void);
void func_002ea400(void);
void func_002ea590(void);
void func_002ea860(void);
void func_002eaa40(void);
void func_002eab70(void);
void func_002eabb0(void);
void func_002eabf0(void);
u32 func_002eb250(BtlAction* action);
void func_002eb2c0(void);
u32 func_002eb9e0(BtlAction* action);
void func_002eba50(BtlAction* action);
u32 func_002ebec0(BtlAction* action);
void func_002ec000(void);
void func_002ec2c0(void);
void func_002ec4b0(BtlUnit* unit);
void func_002ec560(u32 param_1);
u32 func_002ec590(void);
void func_002ec5c0(void);
void func_002ec790(void);
void func_002ec990(BtlUnit* unit);
u32 func_002ecac0(void);
u32 func_002ecb30(BtlAction* action, s16 selection);
u32 func_002ecbe0(void);
u32 func_002ecc20(void);
void func_002ecc60(s16 *param_1, s16 *param_2);
u32 func_002ecf80(int param_1);
void func_002ed350(void);
u32 func_002ed360(u64 *param_1);
void func_002ee640(BtlAction* action);
u32 func_002eea10(BtlAction* action);
void func_002eeb70(BtlAction* action);
void func_002eec60(void);
u32 func_002eee20(BtlAction* param_1,float *param_2);
void func_002ef000(BtlAction* action);
u32 func_002ef250(BtlAction* action);
void func_002ef360(void);
void func_002ef5a0(void);
void func_002ef670(void);
void func_002ef7e0(void);
int func_002ef9d0(void);
void func_002efb40(BtlUnit* unit);
void func_002efc90(u32 param_1);
void func_002efcd0(u32 param_1);
u32 func_002efd10(void);
u32 func_002efd20(BtlUnit* unit);
u32 func_002efdb0(BtlUnit* unit);
void func_002efe50(BtlAction* action);
typedef struct
{
  RwV3d pos;
  RtQuat rot;
} BtlVoicePose6a20;
extern void FUN_002d1de0_6a20(RtQuat* out, const RwV3d* from,
                              const RwV3d* to);
extern void FUN_002a4690_6a20(RtQuat* out, const RwV3d* from,
                              const RwV3d* to, const RwV3d* config);
extern void FUN_004be1e0_6a20(RwV3d* out, const RwV3d* basis, s32 count,
                              const RtQuat* source);
extern void FUN_004c6b20_6a20(f32* out, const f32* in);
extern f32 FUN_004c69f0_6a20(RwV3d* out, const RwV3d* in);
extern f32 FUN_002d1f30_6a20(const RtQuat* first, const RtQuat* second);
extern f32 FUN_0052e930_6a20(f32 angle);
extern void FUN_002a44f0_6a20(f32* first, f32* second);
extern void FUN_002a4470_6a20(f32* dst, f32* src);
typedef struct
{
  u8 pad_00[0xe0];
  BtlAction *action;
  u8 pad_e4[0x2c];
  u16 mode;
  u8 pad_112[0xe];
  BtlUnit *unit;
  u16 unk_124;
} BtlVoiceCameraWork;
extern void FUN_002a3e80_short(f32 param_1, u8 *param_2,
                               u8 *param_3, u32 param_4);

static inline void btlVoicePlayCameraVoice(u8 *voiceData,
                                           f32 *startTransform,
                                           f32 *endTransform,
                                           RwV3d *startPosition,
                                           RwV3d *endPosition)
{
  f32 duration;

  FUN_002a4690(startTransform, voiceData + 4, voiceData + 0x10,
               D_00697880);
  *startPosition = *(RwV3d *)(voiceData + 4);
  FUN_002a4690(endTransform, voiceData + 0x1c, voiceData + 0x28,
               D_00697880);
  *endPosition = *(RwV3d *)(voiceData + 0x1c);
  duration = (f32)*(s16 *)voiceData / 30.0f;
  FUN_002a2290((u8 *)DAT_007ce3ec + 0x20,
               (f32 *)startPosition, (f32 *)endPosition, 1);
  FUN_002a3110((u8 *)DAT_007ce3ec + 0x20, duration);
}

// FUN_002e2be0
BtlPacket* btlVoice002e2be0(BtlAction* action, s32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    BtlPacket* packet;
    BtlVoicePacket002e2be0* work;

    packet = btlPacketCreate(BTLVOICE_PACKET_UNK01, sizeof(BtlVoicePacket002e2be0));

    packet->updateFunc = btlVoice002e2a60;

    work = (BtlVoicePacket002e2be0*)packet->workData;

    work->action = action;
    work->unk_04 = param_2;
    work->unk_08 = param_3;
    work->unk_0c = param_4;
    work->unk_10 = param_5;
    work->unk_14 = 0;

    return packet;
}

/* 2F battle runtime slice recovered from next_2f00_2fff_dump.c. */



#pragma alias DAT_0069a210_abs DAT_0069a210
#pragma alias voiceStream115Both DAT_00699d80
#pragma alias voiceStream115First DAT_00699d90
#pragma alias voiceStream115Second DAT_00699da0
#pragma alias voicePartyCameraStarts DAT_0069a3a0
#pragma alias voicePartyCameraEnds DAT_0069a3d0
#pragma alias voicePartyCameraTargets DAT_0069a400
#pragma alias voicePartyCameraUps DAT_0069a430
#pragma alias voicePartyCameraDurations DAT_0069a458
#pragma alias voiceCameraStart66 DAT_0069a250
#pragma alias voiceCameraEnd66 DAT_0069a270
#pragma alias voiceCameraTarget66 DAT_0069a290
#pragma alias voiceCameraUp66 DAT_0069a2b0
#pragma alias iGpffffb6fc_ptr DAT_007ce3ec
#pragma alias uGpffff82dc_f32_voice uGpffff82dc
#pragma alias uGpffff82e0_f32_voice uGpffff82e0
#pragma alias btlActionCurrent FUN_0029ad20
 #pragma alias DAT_007ce3ec_ptr_voice DAT_007ce3ec
 #pragma alias FUN_002b8f90_u32_voice FUN_002b8f90
 #pragma alias FUN_002f87e0_u32_voice FUN_002f87e0
 #pragma alias FUN_002b8d60_u32_voice FUN_002b8d60
 #pragma alias FUN_002baf90_u32_voice FUN_002baf90
 #pragma alias FUN_00284200_u32_voice FUN_00284200
 #pragma alias FUN_0027fe90_u32_voice FUN_0027fe90
 #pragma alias FUN_002a3b40_u32_voice FUN_002a3b40
 #pragma alias FUN_002b90d0_voice FUN_002b90d0
 #pragma alias FUN_0027ed20_voice FUN_0027ed20
 #pragma alias FUN_002bc950_u32_voice FUN_002bc950
 #pragma alias FUN_00284200_packet_voice FUN_00284200
 #pragma alias FUN_002b8d60_packet_voice FUN_002b8d60
 #pragma alias FUN_0027fe90_packet_voice FUN_0027fe90
 #pragma alias FUN_002a3b40_packet_voice FUN_002a3b40
 #pragma alias FUN_002baf90_packet_voice FUN_002baf90
#pragma alias FUN_002d1d00_packet_voice FUN_002d1d00
#pragma alias FUN_002bac00_packet_voice FUN_002bac00
#pragma alias FUN_0029ec00_u32_voice FUN_0029ec00
#pragma alias FUN_0029ec50_u32_voice FUN_0029ec50
 
 
#pragma alias FUN_002d7e20_packet_voice FUN_002d7e20
 
#pragma alias FUN_002dd690_packet_voice FUN_002dd690
#pragma alias FUN_002bd590_packet_voice FUN_002bd590
#pragma alias FUN_002bc7e0_packet_voice FUN_002bc7e0
#pragma alias FUN_002a3d70_packet_voice FUN_002a3d70
#pragma alias FUN_002dd4a0_packet_voice FUN_002dd4a0
#pragma alias FUN_002dd5e0_packet_voice FUN_002dd5e0
#pragma alias FUN_002bd850_packet_voice FUN_002bd850
#pragma alias FUN_002db890_packet_voice FUN_002db890
#pragma alias FUN_002db800_packet_voice FUN_002db800
#pragma alias FUN_002dd760_packet_voice FUN_002dd760
#pragma alias FUN_0027f410_packet_voice FUN_0027f410
#pragma alias FUN_002dd830_packet_voice FUN_002dd830
#pragma alias FUN_002f8810_ptr_voice FUN_002f8810
#pragma alias FUN_002822b0_packet_voice FUN_002822b0
#pragma alias FUN_00285d30_packet_voice FUN_00285d30
#pragma alias FUN_00285690_packet_voice FUN_00285690
#pragma alias FUN_0029f4b0_packet_voice FUN_0029f4b0
#pragma alias FUN_002a0050_packet_voice FUN_002a0050
#pragma alias FUN_002a1280_packet_voice FUN_002a1280
#pragma alias FUN_002bb2f0_packet_voice FUN_002bb2f0
#pragma alias FUN_002dd100_packet_voice FUN_002dd100
#pragma alias FUN_002a1db0_packet_voice FUN_002a1db0
#pragma alias FUN_002a1b00_packet_voice FUN_002a1b00
#pragma alias FUN_002a1b00_voice FUN_002a1b00
#pragma alias FUN_002d4e10_u16_voice FUN_002d4e10
#pragma alias FUN_002838d0_s16_voice FUN_002838d0
#pragma alias FUN_002ff540_u32_voice FUN_002ff540
#pragma alias FUN_00289650_action_voice FUN_00289650


// FUN_002e2c70
u32 func_002e2c70(u16 *param_1)

{
  FUN_0010a2e0(*(u16 *)(iGpffffb6fc + 0xaf8),4,*param_1);
  return 1;
}

/* W367 pragma probe: opt_common_subs off nd 1127 -> 1122; on nd 1127; object 2100/2112. The loop-invariants + common-subs pair also measured nd1122. */
// FUN_002e2cb0
u32 func_002e2cb0(u16 param_1)

{
  BtlPacket* packet;

  packet = btlPacketCreate(0xa02, 2);
  packet->updateFunc = (BtlPacketUpdateFunc)func_002e2c70;
  *(u16*)packet->workData = param_1;
  return (u32)packet;
}

// FUN_002e2d00
void func_002e2d00(u16 param_1)

{
  FUN_0010a2e0(*(u16 *)(iGpffffb6fc + 0xb02),2,param_1);
  return;
}

// FUN_002e2d40
void func_002e2d40(void)

{
  FUN_0010a100(2,0,8);
  return;
}

// FUN_002e2d70
u32 func_002e2d70(BtlVoicePacketA03Work* work)
{
  u32 result;
  u16 code;

  if (work->state == 0) {
    if (work->voiceId == 0) {
      code = 0x1c3;
    } else {
      code = 0x1c4;
    }
    switch (code) {
    case 0x1c3:
      *(u16 *)(iGpffffb6fc + 0xb02) = 4;
      break;
    case 0x1c4:
      *(u16 *)(iGpffffb6fc + 0xb02) = 5;
      break;
    }
    if (iGpffffb810 == 0) {
      *(u32 *)(iGpffffb6fc + 0xb04) = 0;
      result = FUN_0010a770(*(u32 *)(iGpffffb6fc + 0xd18),
                            *(u16 *)(iGpffffb6fc + 0xb02),
                            *(u32 *)(iGpffffb6fc + 0xb04),
                            2, code, 1);
    } else {
      result = 0;
    }
    work->result = result;
    work->state = 1;
  }
  if (work->result != 0) {
    if ((*(u16 *)(iGpffffb6fc + 0xb00) & 1) != 0) {
      result = 1;
    } else if (FUN_0010a720(work->result) != 0) {
      *(u16 *)(iGpffffb6fc + 0xb00) =
          *(u16 *)(iGpffffb6fc + 0xb00) | 1;
      result = 1;
    } else {
      result = 0;
    }
    return result != 0;
  }
  return 1;
}

// FUN_002e2ec0
BtlPacket* func_002e2ec0(u16 voiceId)
{
  BtlPacket* packet;
  BtlVoicePacketA03Work* work;

  packet = btlPacketCreate(0xa03, sizeof(BtlVoicePacketA03Work));
  packet->unk_47 &= 0xfe;
  packet->updateFunc = (BtlPacketUpdateFunc)func_002e2d70;
  work = (BtlVoicePacketA03Work*)packet->workData;
  work->voiceId = voiceId;
  work->result = 0;
  work->state = 0;
  return packet;
}

/* Removing this loses FUN_002f1810 (MATCH nd0 -> MISMATCH nd14) - measured W161. */
// FUN_002e2f20
void func_002e2f20(void)

{
  return;
}
// FUN_002e2f30
void func_002e2f30(void)

{
  FUN_00521408(iGpffffb6fc + 0xaf4,0,0x14);
  *(u16 *)(iGpffffb6fc + 0xaf8) = 3;
  *(u16 *)(iGpffffb6fc + 0xb02) = 0;
  uGpffffb21c = 1;
  return;
}

// FUN_002e2f80
void func_002e2f80(void)
{
  u32 handle;

  handle = *(u32 *)(iGpffffb6fc + 0xafc);
  if (handle != 0) {
    DAT_0096017c[0](handle);
    *(u32 *)(iGpffffb6fc + 0xafc) = 0;
    *(u16 *)(iGpffffb6fc + 0xaf6) &= 0xfffe;
  }
  handle = *(u32 *)(iGpffffb6fc + 0xb04);
  if (handle != 0) {
    DAT_0096017c[0](handle);
    *(u32 *)(iGpffffb6fc + 0xb04) = 0;
    *(u16 *)(iGpffffb6fc + 0xb00) &= 0xfffe;
  }
  uGpffffb21c = 0;
}

/* Removing this loses FUN_002f1d40 (MATCH nd0 -> MISMATCH nd14) - measured W161. */
// FUN_002e3010
u32 func_002e3010(BtlVoicePacketA04Work* work)
{
  u32 result;
  s32 status;

  if (work->state == 0) {
    FUN_0010a2e0(work->arg0,work->arg1,work->arg2);
    work->state = 1;
  }
  if ((work->flags & 1) == 0) {
    goto result_one;
  }
  status = FUN_0010a500((s16)work->arg1);
  if (status != 1) {
    goto result_one;
  }
  result = 0;
  goto done;

result_one:
  result = 1;
done:
  return result;
}
// FUN_002e30a0
BtlPacket* func_002e30a0(u16 arg0, u16 arg1, u16 arg2, u16 flags)
{
  BtlPacket* packet;
  BtlVoicePacketA04Work* work;

  packet = btlPacketCreate(0xa04, sizeof(BtlVoicePacketA04Work));
  packet->updateFunc = (BtlPacketUpdateFunc)func_002e3010;
  work = (BtlVoicePacketA04Work*)packet->workData;
  work->arg0 = arg0;
  work->arg1 = arg1;
  work->arg2 = arg2;
  work->flags = flags;
  work->state = 0;
  return packet;
}

/* Removing this loses FUN_002f2090 (MATCH nd0 -> MISMATCH nd14) - measured W161. */
// FUN_002e3120
#ifndef PC_BUILD
asm char * func_002e3120(int param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0000402d
  .word 0x2405ffff
  .word 0x10000022
  .word 0x00000000
  .word 0x8f87b6fc
  .word 0x3102ffff
  .word 0x00021080
  .word 0x00e21821
  .word 0x24660a60
  .word 0x80620a60
  .word 0x10450018
  .word 0x00000000
  .word 0x94630a62
  .word 0x000210c0
  .word 0x00e21021
  .word 0x8c470154
  .word 0x10000008
  .word 0x00000000
  .word 0x8ce20a2c
  .word 0x10400004
  .word 0x00000000
  .word 0x94420004
  .word 0x10620004
  .word 0x00000000
  .word 0x8ce70a30
  .word 0x14e0fff8
  .word 0x00000000
  .word 0x14e00007
  .word 0x00000000
  .word 0x3102ffff
  .word 0x00021880
  .word 0xa0c50000
  .word 0x8f82b6fc
  .word 0x00431021
  .word 0xa4400a62
  .word 0x25020001
  .word 0x3048ffff
  .word 0x3102ffff
  .word 0x2c42000c
  .word 0x1440ffdc
  .word 0x00000000
  .word 0x8c820030
  .word 0x0000902d
  .word 0x805100a2
  .word 0x8c420a2c
  .word 0x94500004
  .word 0x0000382d
  .word 0x8f86b6fc
  .word 0x2403ffff
  .word 0x10000014
  .word 0x00000000
  .word 0x30e2ffff
  .word 0x00021080
  .word 0x00c22021
  .word 0x24820a60
  .word 0x80850a60
  .word 0x14b10006
  .word 0x00000000
  .word 0x94840a62
  .word 0x14900003
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x16400004
  .word 0x00000000
  .word 0x14a30002
  .word 0x00000000
  .word 0x0040902d
  .word 0x24e20001
  .word 0x3047ffff
  .word 0x30e2ffff
  .word 0x2c42000c
  .word 0x1440ffea
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x24060004
  .word 0x0c148502
  .word 0x00000000
  .word 0xa2510000
  .word 0xa6500002
  .word 0x0240102d
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
// FUN_002e32a0
void func_002e32a0(BtlAction* action, BtlAction* target, u32 id)
{
  s16 index;
  BtlVoiceUnitEntry* entry;

  if (target->unit->genus == UNIT_GENUS_EC) {
    entry = (BtlVoiceUnitEntry*)func_002e3120((int)target);
    index = FUN_003082f0(action->unit->datUnit, id);
    if ((index != -1) && (index < 10)) {
      FUN_0017b2e0(entry->charId, index, 1);
    }
  }
}

// FUN_002e3350
u64 func_002e3350(BtlAction* action,s16 index)
{
  BtlUnit* unit;
  u8* entry;
  u64 result;

  unit = action->unit;
  if (unit->genus != 1) {
    result = 1;
  }
  else {
    entry = (u8*)func_002e3120((int)action);
    if (!((index != -1) && (index < 10))) {
      result = 1;
    }
    else if (index == 7) {
      result = 1;
    }
    else {
      result = FUN_0017b3d0(*(u16 *)(entry + 2),index);
    }
  }
  return result;
}

// FUN_002e33f0
s16 func_002e33f0(BtlAction* action)
{
    BtlUnit* unit;

    unit = action->unit;
    if (unit->genus == UNIT_GENUS_EC)
    {
        switch (unit->charId)
        {
        case 0x10b:
        case 0x110: return 0xf;
        case 0x10c:
        case 0x10f: return 0x10;
        case 0x108: return 0x11;
        case 0x126: return 0x67;
        case 0xe9: return 0xe9;
        case 0xea: return 0xea;
        case 0xeb: return 7;
        case 0xec: return 8;
        case 0xed: return 5;
        case 0xee: return 10;
        case 0xef: return 2;
        case 0xf0: return 4;
        default: return -1;
        }
    }
    return unit->charId;
}



// FUN_002e3560
void func_002e3560(u16 *param_1)

{
  u32 uVar1;
  
  uVar1 = FUN_001166a0(*(u32 *)(iGpffffb6fc + 0xd18),*param_1,param_1[1]);
  *(u32 *)(iGpffffb6fc + 0xd20) = uVar1;
  return;
}

// FUN_002e35a0
u32 func_002e35a0(void)

{
  s32 lVar1;
  
  lVar1 = FUN_00116760(*(u32 *)(iGpffffb6fc + 0xd20));
  return lVar1 == 1;
}

// FUN_002e35d0
void func_002e35d0(u16 arg0,u16 arg1)
{
  BtlPacket* packet;
  BtlVoicePacketC00Work* work;

  packet = btlPacketCreate(0xc00,sizeof(BtlVoicePacketC00Work));
  packet->unk_47 &= 0xee;
  packet->initFunc = (BtlPacketInitFunc)func_002e3560;
  packet->updateFunc = (BtlPacketUpdateFunc)func_002e35a0;
  work = (BtlVoicePacketC00Work*)packet->workData;
  work->arg0 = arg0;
  work->arg1 = arg1;
  work->state = 0;
}

// FUN_002e3650
u32 func_002e3650(BtlVoicePacketWaitWork* work)
{
  s32 endFrame;

  if (work->state == 0) {
    FUN_00116780(*(u32 *)(iGpffffb6fc + 0xd20));
    work->state = 1;
  }
  else {
    endFrame = FUN_001167c0(*(u32 *)(iGpffffb6fc + 0xd20),0);
    if (endFrame <= work->frame + 0x1b) {
      return 1;
    }
  }
  work->frame++;
  return 0;
}
// FUN_002e36f0
void func_002e36f0(void)
{
  BtlPacket* packet;
  BtlVoicePacketWaitWork* work;

  packet = btlPacketCreate(0xc01,sizeof(BtlVoicePacketWaitWork));
  packet->unk_47 &= 0xee;
  packet->updateFunc = (BtlPacketUpdateFunc)func_002e3650;
  work = (BtlVoicePacketWaitWork*)packet->workData;
  work->state = 0;
  work->frame = 0;
}

// FUN_002e3740
u32 func_002e3740(BtlVoicePacketWaitWork* work)
{
  s32 endFrame;

  if (work->state == 0) {
    FUN_001167a0(*(u32 *)(iGpffffb6fc + 0xd20));
    work->state = 1;
  }
  else {
    endFrame = FUN_001167c0(*(u32 *)(iGpffffb6fc + 0xd20),1);
    if (endFrame <= work->frame) {
      *(u32 *)(iGpffffb6fc + 0xd20) = 0;
      return 1;
    }
  }
  work->frame++;
  return 0;
}
// FUN_002e37e0
void func_002e37e0(void)
{
  BtlPacket* packet;
  BtlVoicePacketWaitWork* work;

  packet = btlPacketCreate(0xc02,sizeof(BtlVoicePacketWaitWork));
  packet->unk_47 &= 0xee;
  packet->updateFunc = (BtlPacketUpdateFunc)func_002e3740;
  work = (BtlVoicePacketWaitWork*)packet->workData;
  work->state = 0;
  work->frame = 0;
}

// FUN_002e3830
void func_002e3830(u16 *param_1)

{
  u32 uVar1;
  
  uVar1 = FUN_00116e20(*(u32 *)(iGpffffb6fc + 0xd18),*param_1);
  *(u32 *)(iGpffffb6fc + 0xd20) = uVar1;
  return;
}

// FUN_002e3870
u32 func_002e3870(void)

{
  s32 lVar1;
  
  lVar1 = FUN_00116ed0(*(u32 *)(iGpffffb6fc + 0xd20));
  return lVar1 == 1;
}

// FUN_002e38a0
void func_002e38a0(u16 voiceId)
{
  BtlPacket* packet;
  BtlVoicePacketC03Work* work;

  packet = btlPacketCreate(0xc03,sizeof(BtlVoicePacketC03Work));
  packet->unk_47 &= 0xee;
  packet->initFunc = (BtlPacketInitFunc)func_002e3830;
  packet->updateFunc = (BtlPacketUpdateFunc)func_002e3870;
  work = (BtlVoicePacketC03Work*)packet->workData;
  work->voiceId = voiceId;
}

// FUN_002e3900
u32 func_002e3900(BtlVoicePacketWaitWork* work)
{
  if (work->state == 0) {
    FUN_00116ef0(*(u32*)((u8*)gBtl + 0xd20));
    work->state = 1;
  }
  else {
    if (FUN_00116f30(*(u32*)((u8*)gBtl + 0xd20)) != 0) {
      return 1;
    }
  }
  work->frame++;
  return 0;
}

// FUN_002e3990
void func_002e3990(void)
{
  BtlPacket* packet;
  BtlVoicePacketWaitWork* work;

  packet = btlPacketCreate(0xc04,sizeof(BtlVoicePacketWaitWork));
  packet->unk_47 &= 0xee;
  packet->updateFunc = (BtlPacketUpdateFunc)func_002e3900;
  work = (BtlVoicePacketWaitWork*)packet->workData;
  work->state = 0;
  work->frame = 0;
}

// FUN_002e39e0
u32 func_002e39e0(BtlVoicePacketWaitWork* work)
{
  s32 endFrame;

  if (work->state == 0) {
    FUN_00116f50(*(u32 *)(iGpffffb6fc + 0xd20));
    work->state = 1;
    work->frame = FUN_00116f20(*(u32 *)(iGpffffb6fc + 0xd20));
  }
  else {
    endFrame = FUN_00116f10(*(u32 *)(iGpffffb6fc + 0xd20));
    if (endFrame <= work->frame) {
      *(u32 *)(iGpffffb6fc + 0xd20) = 0;
      return 1;
    }
  }
  work->frame++;
  return 0;
}

// FUN_002e3a90
void func_002e3a90(void)
{
  BtlPacket* packet;
  BtlVoicePacketWaitWork* work;

  packet = btlPacketCreate(0xc05,sizeof(BtlVoicePacketWaitWork));
  packet->unk_47 &= 0xee;
  packet->updateFunc = (BtlPacketUpdateFunc)func_002e39e0;
  work = (BtlVoicePacketWaitWork*)packet->workData;
  work->state = 0;
  work->frame = 0;
}

/* Removing this loses FUN_002f3840 (MATCH nd0 -> MISMATCH nd14) - measured W161. */
// FUN_002e3ae0
void func_002e3ae0(u64 param_1)

{
  u32 uVar1;
  
  uVar1 = FUN_001192b0(*(u32 *)(iGpffffb6fc + 0xd18),param_1);
  *(u32 *)(iGpffffb6fc + 0xd24) = uVar1;
  return;
}
// FUN_002e3b20
u32 func_002e3b20(void)

{
  s32 lVar1;
  
  lVar1 = FUN_00119380(*(u32 *)(iGpffffb6fc + 0xd24));
  return lVar1 == 1;
}

// FUN_002e3b50
void func_002e3b50(u32 arg0,u32 arg1,u32 arg2)
{
  BtlPacket* packet;
  BtlVoicePacketC06Work* work;

  packet = btlPacketCreate(0xc06,sizeof(BtlVoicePacketC06Work));
  packet->unk_47 &= 0xee;
  packet->initFunc = (BtlPacketInitFunc)func_002e3ae0;
  packet->updateFunc = (BtlPacketUpdateFunc)func_002e3b20;
  work = (BtlVoicePacketC06Work*)packet->workData;
  work->arg0 = arg0 & 0xffff;
  work->arg1 = arg1 & 0xffff;
  work->arg2 = arg2 & 0xffff;
  work->state = 0;
}

// FUN_002e3be0
u32 func_002e3be0(BtlVoicePacketWaitWork* work)
{
  s32 endFrame;

  if (work->state == 0) {
    FUN_001193a0(*(u32 *)(iGpffffb6fc + 0xd24));
    work->state = 1;
  }
  else {
    endFrame = FUN_001193c0(*(u32 *)(iGpffffb6fc + 0xd24));
    if (endFrame <= work->frame + 0xc) {
      *(u32 *)(iGpffffb6fc + 0xd24) = 0;
      return 1;
    }
  }
  work->frame++;
  return 0;
}

/* Removing this loses FUN_002f4410 (MATCH nd0 -> MISMATCH nd46) - measured W161. */
// FUN_002e3c80
void func_002e3c80(void)
{
  BtlPacket* packet;
  BtlVoicePacketWaitWork* work;

  packet = btlPacketCreate(0xc07,sizeof(BtlVoicePacketWaitWork));
  packet->unk_47 &= 0xee;
  packet->updateFunc = (BtlPacketUpdateFunc)func_002e3be0;
  work = (BtlVoicePacketWaitWork*)packet->workData;
  work->state = 0;
  work->frame = 0;
}
// FUN_002e3cd0
u32 func_002e3cd0(void* work)

{
  FUN_00195020(*(u32 *)(iGpffffb6fc + 0xd24));
  *(u32 *)(iGpffffb6fc + 0xd24) = 0;
  return 1;
}

// FUN_002e3d10
void func_002e3d10(void)
{
  BtlPacket* packet;

  packet = btlPacketCreate(0xc08,0);
  packet->unk_47 &= 0xee;
  packet->updateFunc = func_002e3cd0;
}

// FUN_002e3d50
void func_002e3d50(int param_1)

{
  u32 playbackHandle;
  int voiceId;
  u8 *voiceEntry;
  u32 params[2];

  voiceEntry = (u8 *)(uintptr_t)iGpffffb70c;
  voiceId = *(int *)(param_1 + 4);
  voiceEntry = (u8 *)(uintptr_t)(voiceId * 6) + (uintptr_t)voiceEntry;
  params[0] = (u32)*(u16 *)(voiceEntry - 0x65e);
  params[1] = (u32)*(u16 *)(voiceEntry - 0x65c);
  playbackHandle = FUN_0018b620(*(u32 *)(iGpffffb6fc + 0xd18), voiceId, params);
  *(u32 *)(iGpffffb6fc + 0xd20) = playbackHandle;
  return;
}

/* Removing this loses FUN_002f46d0 (MATCH nd0 -> MISMATCH nd14) - measured W161. */
// FUN_002e3db0
u32 func_002e3db0(void)

{
  s32 lVar1;
  
  lVar1 = FUN_0018b360(*(u32 *)(iGpffffb6fc + 0xd20));
  return lVar1 == 1;
}
// FUN_002e3de0
void func_002e3de0(u32 voiceId,u32 param)
{
  BtlPacket* packet;
  BtlVoicePacketC09Work* work;

  packet = btlPacketCreate(0xc09,sizeof(BtlVoicePacketC09Work));
  packet->unk_47 &= 0xee;
  packet->initFunc = (BtlPacketInitFunc)func_002e3d50;
  packet->updateFunc = (BtlPacketUpdateFunc)func_002e3db0;
  work = (BtlVoicePacketC09Work*)packet->workData;
  work->voiceId = voiceId & 0xffff;
  work->param = param & 0xffff;
}

// FUN_002e3e60
u32 func_002e3e60(BtlVoicePacketC0AWork* work)
{
    if (work->frame == 0)
    {
        FUN_0018b380((KwlnTask*)(uintptr_t)*(u32*)(iGpffffb6fc + 0xd20));
    }
    else
    {
        switch (kwlnTaskGetState(
            (KwlnTask*)(uintptr_t)*(u32*)(iGpffffb6fc + 0xd20)))
        {
            case KWLNTASK_STATE_STAGED:
                break;
            case KWLNTASK_STATE_RUNNING:
                if (FUN_0018b5f0(
                        (KwlnTask*)(uintptr_t)*(u32*)(iGpffffb6fc + 0xd20)) >= 30)
                {
                    *(u32*)(iGpffffb6fc + 0xd20) = 0;
                    return 1;
                }
                break;
        }
    }

    work->frame++;
    return 0;
}

/* Removing this loses FUN_002f4a40 (MATCH nd0 -> MISMATCH nd12) - measured W161. */
// FUN_002e3f20
void func_002e3f20(void)
{
    BtlPacket* packet;
    BtlVoicePacketC0AWork* work;

    packet = btlPacketCreate(0xc0a, sizeof(BtlVoicePacketC0AWork));
    packet->unk_47 &= 0xee;
    packet->updateFunc = (BtlPacketUpdateFunc)func_002e3e60;
    work = (BtlVoicePacketC0AWork*)packet->workData;
    work->frame = 0;
}
// FUN_002e3f70
void func_002e3f70(u16 *param_1)

{
  u32 uVar1;
  
  uVar1 = FUN_0018efb0(*(u32 *)(iGpffffb6fc + 0xd18),*param_1);
  *(u32 *)(iGpffffb6fc + 0xd20) = uVar1;
  return;
}

// FUN_002e3fb0
u32 func_002e3fb0(void)

{
  s32 lVar1;
  
  lVar1 = FUN_0018f060(*(u32 *)(iGpffffb6fc + 0xd20));
  return lVar1 == 1;
}

/* Removing this loses FUN_002f4e70 (MATCH nd0 -> MISMATCH nd12) - measured W161. */
// FUN_002e3fe0
void func_002e3fe0(u16 voiceId)
{
  BtlPacket* packet;
  BtlVoicePacketC0BWork* work;

  packet = btlPacketCreate(0xc0b,sizeof(BtlVoicePacketC0BWork));
  packet->unk_47 &= 0xee;
  packet->initFunc = (BtlPacketInitFunc)func_002e3f70;
  packet->updateFunc = (BtlPacketUpdateFunc)func_002e3fb0;
  work = (BtlVoicePacketC0BWork*)packet->workData;
  work->voiceId = voiceId;
}
// FUN_002e4040
u32 func_002e4040(BtlVoicePacketWaitWork* work)
{
  if (work->state == 0) {
    FUN_0018f080(*(u32*)((u8*)gBtl + 0xd20));
    work->state = 1;
  }
  else {
    if (FUN_0018f0c0(*(u32*)((u8*)gBtl + 0xd20)) != 0) {
      return 1;
    }
  }
  work->frame++;
  return 0;
}

// FUN_002e40d0
void func_002e40d0(void)
{
  BtlPacket* packet;
  BtlVoicePacketWaitWork* work;

  packet = btlPacketCreate(0xc0c,sizeof(BtlVoicePacketWaitWork));
  packet->unk_47 &= 0xee;
  packet->updateFunc = (BtlPacketUpdateFunc)func_002e4040;
  work = (BtlVoicePacketWaitWork*)packet->workData;
  work->state = 0;
  work->frame = 0;
}

// FUN_002e4120
u32 func_002e4120(BtlVoicePacketWaitWork* work)
{
  s32 endFrame;

  if (work->state == 0) {
    FUN_0018f0e0(*(u32 *)(DAT_007ce3ec + 0xd20));
    work->state = 1;
    work->frame = FUN_0018f0b0(*(u32 *)(DAT_007ce3ec + 0xd20));
  }
  else {
    endFrame = FUN_0018f0a0(*(u32 *)(DAT_007ce3ec + 0xd20));
    if (endFrame <= work->frame) {
      *(u32 *)(DAT_007ce3ec + 0xd20) = 0;
      return 1;
    }
  }
  work->frame++;
  return 0;
}

// FUN_002e41d0
void func_002e41d0(void)
{
  BtlPacket* packet;
  BtlVoicePacketWaitWork* work;

  packet = btlPacketCreate(0xc0d,sizeof(BtlVoicePacketWaitWork));
  packet->unk_47 &= 0xee;
  packet->updateFunc = (BtlPacketUpdateFunc)func_002e4120;
  work = (BtlVoicePacketWaitWork*)packet->workData;
  work->state = 0;
  work->frame = 0;
}

// FUN_002e4220
void func_002e4220(u32 param_1,u32 param_2,u32 param_3)

{
  *(u32 *)(DAT_007ce3ec + 0xb08) = param_1;
  *(u32 *)(DAT_007ce3ec + 0xb0c) = param_2;
  *(u32 *)(DAT_007ce3ec + 0xb10) = param_3;
  return;
}

// FUN_002e4240
void func_002e4240(u32 param_1)

{
  *(u32 *)(DAT_007ce3ec + 0xb10) = param_1;
  return;
}

// FUN_002e4250
u32 func_002e4250(void)

{
  u32 uVar1;
  
  if ((*(int *)(DAT_007ce3ec + 0xb08) != 0) ||
      (*(int *)(DAT_007ce3ec + 0xb0c) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// FUN_002e4290
u32 func_002e4290(u32 param_1)
{
  return FUN_002fd2e0(param_1, 0);
}


// FUN_002e42c0
void func_002e42c0(void)
{
  FUN_002fd4a0();
}
// FUN_002e42e0
void func_002e42e0(u32 param_1)
{
  FUN_002fd2e0(param_1, 1);
}

/* Removing this loses func_002f6120 (MATCH nd0 -> MISMATCH nd12) - measured W296. */
// FUN_002e4310
void func_002e4310(void)
{
  FUN_002fd4a0();
}
// FUN_002e4330
u32 func_002e4330(u32 param_1)

{
  void (*callback)(u32);

  if (FUN_002fd500() == 0) {
    callback = *(void (**)(u32))(DAT_007ce3ec + 0xb08);
    if (callback != NULL) {
      callback(*(u32 *)(DAT_007ce3ec + 0xb10));
      return 1;
    }
  }
  return FUN_002fd2e0(param_1, 2);
}

// FUN_002e43a0
s32 func_002e43a0(void)

{
  s32 (*callback)(u32);
  s32 result;

  result = 0;
  if (FUN_002fd500() == 0) {
    callback = *(s32 (**)(u32))(DAT_007ce3ec + 0xb0c);
    if (callback != NULL) {
      result = callback(*(u32 *)(DAT_007ce3ec + 0xb10));
      if (result == 0) {
        *(u32 *)(DAT_007ce3ec + 0xb08) = 0;
        *(u32 *)(DAT_007ce3ec + 0xb0c) = 0;
        *(u32 *)(DAT_007ce3ec + 0xb10) = 0;
      }
    }
  }
  if (result == 0) {
    result = FUN_002fd4a0();
  }
  return result;
}

// FUN_002e4430
u32 func_002e4430(BtlAction* action, s32 skillId, u32 param_3)
{
    u8* entry;
    s32 offset;
    u16 value;
    struct
    {
        u8 data[0x38];
        u16 count;
    } target;

    if (skillId < 1)
        return 0;
    offset = skillId * 0x2c;
    entry = (u8*)(DAT_007ce3f8 + offset);
    if ((*entry & 8) == 0)
        return 0;
    value = *(volatile /* Removing this qualifier loses func_002e4430 (MATCH nd0 -> MISMATCH nd11, size 240 -> 240) - measured W170. */ u16*)(entry + 0xc);
    FUN_002bfcb0(action, &target, entry[9], entry[10], value);
    if (target.count == 0)
        return 2;
    switch (*(u8*)(offset + DAT_007ce3f8 + 0x24))
    {
    case 6:
        if (FUN_002c1ce0(action, 0) == 0)
            return 6;
        break;
    }
    return 0;
}
// FUN_002e4520
u32 func_002e4520(int param_1,u32 param_2,u32 param_3)

{
  /* Caller-specific return widths keep these two results in the retail integer register class. */
  extern u32 FUN_00301ca0();
  extern u32 FUN_003068d0();
  u32 uVar1;
  s32 lVar2;
  u8 *pbVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 uVar7;
  
  if ((s32)param_2 <= 0) {
    return 0;
  }
  pbVar3 = (u8 *)(DAT_007ce3f8 + (int)param_2 * 0x2c);
  if ((*pbVar3 & 8) == 0) {
    return 0;
  }
  uVar4 = *(u32 *)(pbVar3 + 0x20);
  if (((uVar4 & 0x3ffffff) != 0) && ((uVar4 & 0xfc000000) == 0)) {
    for (uVar5 = 0; uVar5 < 0x20; uVar5 = uVar5 + 1) {
      uVar7 = 1 << uVar5;
      if ((uVar4 & uVar7) != 0) {
        uVar6 = 0;
        while (uVar6 < *(u16 *)(param_1 + 0x6a)) {
          lVar2 = FUN_00301ca0(*(u32 *)
                               (*(int *)(*(int *)(param_1 + uVar6 * 4 + 0x38) + 0x30) +
                               0xa2c), uVar7);
          if (lVar2 == 0) break;
          uVar6 = uVar6 + 1;
        }
        if (uVar6 != *(u16 *)(param_1 + 0x6a)) break;
      }
    }
    if (uVar5 == 0x20) {
      if ((uVar4 & 0x3000) != 0) {
        return 5;
      }
      return 3;
    }
  }
  uVar4 = 0;
  while (uVar4 < *(u16 *)(param_1 + 0x6a)) {
    lVar2 = FUN_003068d0(param_2 & 0xffff,
                          *(u32 *)(*(int *)(param_1 + 0x30) + 0xa2c),
                          *(u32 *)
                           (*(int *)(*(int *)(param_1 + uVar4 * 4 + 0x38) + 0x30) + 0xa2c)
                          ,param_3);
    if (lVar2 == 0 || lVar2 == 0xffff) break;
    uVar4 = uVar4 + 1;
  }
  if (uVar4 == *(u16 *)(param_1 + 0x6a)) {
    return 4;
  }
  return 0;
}

// FUN_002e4720
u32 func_002e4720(u16 param_1)

{
  switch (param_1) {
  case 2:
    return 200;
  case 3:
    return 0xc9;
  case 4:
    return 0xca;
  case 5:
    return 0xcb;
  case 6:
    return 0xcc;
  case 7:
    return 0xd9;
  default:
    return 0;
  }
}

// FUN_002e47a0
u32 func_002e47a0(BtlAction* action, s32 skillId)
{
    u8* entry;
    u32 flags;
    u32 i;
    u32 j;
    u32 bit;

    if (skillId < 1)
        return 0;
    entry = (u8*)(DAT_007ce3f8 + skillId * 0x2c);
    if ((*entry & 8) == 0)
        return 0;
    flags = *(u32*)(entry + 0x20);
    if (((flags & 0x3ffffff) != 0) && ((flags & 0xfc000000) == 0))
    {
        for (i = 0; i < 0x20; i++)
        {
            bit = 1 << i;
            if ((flags & bit) != 0)
            {
                for (j = 0; j < action->target.targetedCount; j++)
                {
                    if (func_00301ca0((*(BtlAction**)(action->target.targetedActions + j))->unit->datUnit, bit) == 0)
                        break;
                }
                if (j != action->target.targetedCount)
                    break;
            }
        }
        if (i == 0x20)
        {
            if ((flags & 0x3000) != 0)
                return 7;
            return 3;
        }
    }
    return 0;
}

// FUN_002e4910
u32 func_002e4910(BtlAction* action, s32 skillId, u32 param_3)
{
    u8* entry;
    u32 flags;
    u32 bit;
    u32 i;

    if (skillId < 1)
        return 0;
    entry = (u8*)(DAT_007ce3f8 + skillId * 0x2c);
    if ((*entry & 8) == 0)
        return 0;
    flags = *(u32*)(entry + 0x20);
    if (((flags & 0x3ffffff) != 0) && ((flags & 0xfc000000) == 0))
    {
        for (i = 0; i < 0x20; i++)
        {
            bit = 1 << i;
            if (((flags & bit) != 0) &&
                (func_00301ca0(action->unit->datUnit, bit) == 0))
            {
                break;
            }
        }
        if (i == 0x20)
        {
            if ((flags & 0x3000) != 0)
                return 7;
            return 3;
        }
    }
    return 0;
}

// FUN_002e4a30
void func_002e4a30(void)
{
}

#pragma opt_lifetimes on
#pragma opt_dead_assignments off
/* W419 negative: inverted the outer guard in func_002e4a40; nd895 -> 929 at object 1288/1296. */
// FUN_002e4a40
#ifndef PC_BUILD
asm void func_002e4a40(u64 param_1)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080902d
  .word 0x8c8400e0
  .word 0x14800004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000020
  .word 0x00000000
  .word 0x8c830030
  .word 0x906300a2
  .word 0x1460000e
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x94650104
  .word 0x2403001d
  .word 0x10a30006
  .word 0x00000000
  .word 0x2403001c
  .word 0x10a30003
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000f
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x94650104
  .word 0x2403001f
  .word 0x10a30006
  .word 0x00000000
  .word 0x24030012
  .word 0x10a30003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000002
  .word 0x00000000
  .word 0x24100001
  .word 0x8c910030
  .word 0xc6210090
  .word 0xc620002c
  .word 0x46000d02
  .word 0x8f86b6fc
  .word 0x94c50104
  .word 0x24030009
  .word 0x10a30003
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x8cc50b7c
  .word 0x8c830008
  .word 0x14a3000c
  .word 0x00000000
  .word 0x8cc30b80
  .word 0x10600007
  .word 0x00000000
  .word 0x44806000
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070008
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0x100000f7
  .word 0x00000000
  .word 0x8c820008
  .word 0xacc20b7c
  .word 0x8f82b6fc
  .word 0xac400b80
  .word 0x27a40050
  .word 0x2645009c
  .word 0x0c0a911c
  .word 0x00000000
  .word 0x922200a2
  .word 0x14400072
  .word 0x00000000
  .word 0x24040002
  .word 0x24050001
  .word 0x27a600c0
  .word 0x0000382d
  .word 0x0000402d
  .word 0x00a0482d
  .word 0x0c0a021c
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a500b0
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x44801000
  .word 0xafa000b4
  .word 0xafa000c4
  .word 0xc7a100b0
  .word 0xc7a000c0
  .word 0x46000801
  .word 0xe7a00090
  .word 0x46021001
  .word 0xe7a00094
  .word 0xc7a100b8
  .word 0xc7a000c8
  .word 0x46000801
  .word 0xe7a00098
  .word 0x27a40090
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7818060
  .word 0x46000842
  .word 0xc7a00090
  .word 0x460100c2
  .word 0xc7a00094
  .word 0x46010082
  .word 0xc7a00098
  .word 0x46010042
  .word 0xc7a000c0
  .word 0x46030000
  .word 0xe7a000c0
  .word 0xc7a000c4
  .word 0x46020000
  .word 0xe7a000c4
  .word 0xc7a000c8
  .word 0x46010000
  .word 0xe7a000c8
  .word 0xc7a000b0
  .word 0xe7a000a0
  .word 0xc621008c
  .word 0xc620002c
  .word 0x460008c2
  .word 0xc7828064
  .word 0xc7a100a4
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a000a4
  .word 0xc7a000b8
  .word 0xe7a000a8
  .word 0x27a40078
  .word 0x27a500a0
  .word 0x27a600c0
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc64000b8
  .word 0x46000b02
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x3c0240b0
  .word 0x44820800
  .word 0x00000000
  .word 0x46140842
  .word 0x46000d03
  .word 0xc7a100a0
  .word 0xc7a000c0
  .word 0x46000801
  .word 0xe7a00090
  .word 0xc7a100a4
  .word 0xc7a000c4
  .word 0x46000801
  .word 0xe7a00094
  .word 0xc7a100a8
  .word 0xc7a000c8
  .word 0x46000801
  .word 0xe7a00098
  .word 0x27a40090
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a10090
  .word 0xc7a000a0
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614081c
  .word 0xe7a0006c
  .word 0xc7a10094
  .word 0xc7a000a4
  .word 0x46001018
  .word 0x4614081c
  .word 0xe7a00070
  .word 0xc7a10098
  .word 0xc7a000a8
  .word 0x46001018
  .word 0x4614081c
  .word 0xe7a00074
  .word 0x1000002f
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420bbc
  .word 0x94430008
  .word 0x240201b4
  .word 0x14620006
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0bd8cc
  .word 0x00000000
  .word 0x14400070
  .word 0x00000000
  .word 0x24040002
  .word 0x24050001
  .word 0x27a600b0
  .word 0x27a700cc
  .word 0x0000402d
  .word 0x00a0482d
  .word 0x0c0a021c
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a500c0
  .word 0x0c0a004c
  .word 0x00000000
  .word 0xc7a20050
  .word 0xc7a10054
  .word 0xc7a00058
  .word 0xe7a2006c
  .word 0xe7a10070
  .word 0xe7a00074
  .word 0xc7a100cc
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7a00070
  .word 0x46010034
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a10070
  .word 0x27a40078
  .word 0x27a5006c
  .word 0x27a600c0
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a4005c
  .word 0x27a50078
  .word 0x0c0b47cc
  .word 0x00000000
  .word 0xc7818068
  .word 0x46010036
  .word 0x45010024
  .word 0x00000000
  .word 0x24030001
  .word 0x16030021
  .word 0x00000000
  .word 0x922200a2
  .word 0x1443000f
  .word 0x00000000
  .word 0x8e240a2c
  .word 0x0c0c30e8
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x3c024010
  .word 0x44826000
  .word 0x3c024000
  .word 0x44826800
  .word 0x0240202d
  .word 0x0c0ad81c
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0ad918
  .word 0x00000000
  .word 0x44806000
  .word 0x8e4400e0
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070008
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0x24040001
  .word 0x8f83b6fc
  .word 0xac640b80
  .word 0x10000022
  .word 0x00000000
  .word 0xc7a10054
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00054
  .word 0xc7a10070
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00070
  .word 0x0240202d
  .word 0x27a50050
  .word 0x27a6006c
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x12000005
  .word 0x00000000
  .word 0x3c024020
  .word 0x44826000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44826000
  .word 0x0240202d
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_dead_assignments reset
#pragma opt_lifetimes reset

/* 2E battle voice/runtime slice recovered from next_2e00_2eff_dump.c. */



#pragma alias voiceCameraPathsPlayer DAT_00697cc0
#pragma alias voiceCameraPathType2 DAT_00698460
#pragma alias voiceCameraPathType3_1 DAT_00698560
#pragma alias voiceCameraPathType3_2 DAT_00698654
#pragma alias voiceCameraPathType3_3 DAT_00698748
#pragma alias voiceCameraPathType3_2Special DAT_00698e40
#pragma alias voiceCameraPathType4 DAT_00698840
#pragma alias voiceCameraPathType4Special DAT_00698f40
#pragma alias voiceCameraPathType5 DAT_00698940
#pragma alias voiceCameraPathType7 DAT_00698a40
#pragma alias voiceCameraPathType7Special DAT_00699040
#pragma alias voiceCameraPathType8 DAT_00698b40
#pragma alias voiceCameraPathType8Special DAT_00699140
#pragma alias voiceCameraPathType9 DAT_00698c40
#pragma alias DAT_00699c80_abs DAT_00699c80
#pragma alias DAT_00699c84_abs DAT_00699c84
#pragma alias DAT_00699c88_abs DAT_00699c88
#pragma alias DAT_00699c8c_abs DAT_00699c8c
#pragma alias DAT_0069a000_abs DAT_0069a000
#pragma alias D_006978A0_abs D_006978A0
#pragma alias DAT_00697c80_abs DAT_00697c80
#pragma alias DAT_00697c84_abs DAT_00697c84
#pragma alias DAT_00697c88_abs DAT_00697c88
#pragma alias DAT_00697c8c_abs DAT_00697c8c
#pragma alias DAT_00697c90_abs DAT_00697c90
#pragma alias DAT_00697c9c_abs DAT_00697c9c
#pragma alias DAT_00697ca0_abs DAT_00697ca0
#pragma alias DAT_00697ca4_abs DAT_00697ca4
#pragma alias DAT_00697ca8_abs DAT_00697ca8
 #pragma alias DAT_007cc9b0_s16 DAT_007cc9b0
 #pragma alias DAT_007cc9b2_s16 DAT_007cc9b2
 #pragma alias DAT_007cc9b4_s16 DAT_007cc9b4
#pragma alias DAT_007cc9b8_s16 DAT_007cc9b8
#pragma alias DAT_007cc9ba_s16 DAT_007cc9ba
#pragma alias DAT_007cc9bc_s16 DAT_007cc9bc
#pragma alias gp0xffff9c98 uGpffff9c98
#pragma alias gp0xffff9c9a uGpffff9c9a
#pragma alias FUN_00280870_btlVoice_typed FUN_00280870
#pragma alias FUN_0027ffb0_btlVoice_typed FUN_0027ffb0
#pragma alias FUN_0027f710_btlVoice_typed FUN_0027f710
#pragma alias FUN_00280130_btlVoice_typed FUN_00280130
#pragma alias FUN_002b6070_btlVoice_typed FUN_002b6070
#pragma alias FUN_002b6460_btlVoice_typed FUN_002b6460
#pragma alias FUN_00282d40_call FUN_00282d40
/* Broad declarations in this block intentionally coexist with caller-local result-width aliases below. */
#pragma alias FUN_002d1de0_btlVoice_typed FUN_002d1de0
#pragma alias FUN_002d1f30_btlVoice_typed FUN_002d1f30
#pragma alias FUN_002ffbc0_btlVoice_typed FUN_002ffbc0
#pragma alias FUN_00351bb0_btlVoice_typed FUN_00351bb0
/* These spellings intentionally select different return widths at their respective call sites. */
#pragma alias FUN_00318ed0_btlVoice_typed FUN_00318ed0
#pragma alias FUN_00357fd0_btlVoice_typed FUN_00357fd0
#pragma alias FUN_004be1e0_btlVoice_typed FUN_004be1e0
#pragma alias FUN_004c6b20_btlVoice_typed FUN_004c6b20
#pragma alias FUN_00280050_btlVoice_typed FUN_00280050
#pragma alias FUN_004be310_btlVoice_typed FUN_004be310
#pragma alias FUN_004c6c60_btlVoice_typed FUN_004c6c60
#pragma alias func_002e4a40_camera func_002e4a40
// FUN_002e4f50
void func_002e4f50(BtlCamera* camera)
{
    BtlAction* action;
    u32 closeView;

    action = camera->action;
    if (action == NULL)
    {
        closeView = 1;
        goto checkSpecificId;
    }

    if (action->unit->genus == UNIT_GENUS_PC)
    {
        switch (*(u16*)(DAT_007ce3ec + 0x104))
        {
        case BTLCAMERA_STATE_COMMAND:
        case BTLCAMERA_STATE_TARGET:
            closeView = 0;
            goto checkSpecificId;
        }
    }
    else
    {
        switch (*(u16*)(DAT_007ce3ec + 0x104))
        {
        case BTLCAMERA_STATE_MOVETARGET:
        case BTLCAMERA_STATE_RESET:
            closeView = 0;
            goto checkSpecificId;
        }
    }

    closeView = 1;

checkSpecificId:
    if (FUN_00308a50(action->target.originalSpecificId) != 0)
        closeView = 1;

    FUN_002a54f0(camera, closeView, 10, 10);
}

// FUN_002e5040
void func_002e5040(void)

{
  FUN_002a5f40();
  return;
}

#pragma opt_propagation off
/* W417 negative: inverting func_002e5060 branch layout measured nd1395 -> 1400 at object 1924/2112; retained order. */
/* Retail algorithm: encounter guard, preset quaternion blend polynomial, and target-offset camera path; implemented 1916/2112 bytes (91%); remaining frame/branch-layout tail. */
// FUN_002e5060
#ifndef PC_BUILD
asm void func_002e5060(BtlCamera* camera)
{
  .set noreorder
  .word 0x27bdfea0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080902d
  .word 0x8f82b6fc
  .word 0x8c420bbc
  .word 0x94430008
  .word 0x240201b4
  .word 0x14620005
  .word 0x00000000
  .word 0x0c0bd944
  .word 0x00000000
  .word 0x144001f2
  .word 0x00000000
  .word 0x8e4400e0
  .word 0x14800004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000020
  .word 0x00000000
  .word 0x8c820030
  .word 0x904200a2
  .word 0x1440000e
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x94430104
  .word 0x2402001d
  .word 0x10620006
  .word 0x00000000
  .word 0x2402001c
  .word 0x10620003
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000f
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x94430104
  .word 0x2402001f
  .word 0x10620006
  .word 0x00000000
  .word 0x24020012
  .word 0x10620003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000002
  .word 0x00000000
  .word 0x24100001
  .word 0x8c910030
  .word 0x0220202d
  .word 0x27a50120
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x8e4200e0
  .word 0x8c420030
  .word 0x8c440a2c
  .word 0x0c0c30e8
  .word 0x00000000
  .word 0x10400121
  .word 0x00000000
  .word 0x24020001
  .word 0x1602011e
  .word 0x00000000
  .word 0x962300a4
  .word 0x24020110
  .word 0x10620006
  .word 0x00000000
  .word 0x2402010b
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a0b0c
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x24020004
  .word 0x10620004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x1600000c
  .word 0x00000000
  .word 0xc621008c
  .word 0xc620002c
  .word 0x460008c2
  .word 0x3c023e80
  .word 0x44821000
  .word 0xc7a10124
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a00124
  .word 0x8e4400e0
  .word 0x0c0b58a4
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x8e4200e0
  .word 0x8c420038
  .word 0x8c440030
  .word 0x27a50110
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x8e4200e0
  .word 0x24440038
  .word 0x0c0b4580
  .word 0x00000000
  .word 0x3044ffff
  .word 0x24050001
  .word 0x27a60110
  .word 0x0000382d
  .word 0x0000402d
  .word 0x00a0482d
  .word 0x0c0a021c
  .word 0x00000000
  .word 0x27a400c0
  .word 0x27a50120
  .word 0x27a60110
  .word 0x0c0b4778
  .word 0x00000000
  .word 0x27a40140
  .word 0x3c050069
  .word 0x24a57890
  .word 0x24060001
  .word 0x27a700c0
  .word 0x0c12f878
  .word 0x00000000
  .word 0x1200000e
  .word 0x00000000
  .word 0xc621002c
  .word 0xc6200090
  .word 0x46010042
  .word 0x3c024030
  .word 0x44820000
  .word 0x00000000
  .word 0x46010582
  .word 0x3c024010
  .word 0x44820000
  .word 0x00000000
  .word 0x46010502
  .word 0x10000008
  .word 0x00000000
  .word 0xc621002c
  .word 0xc6200090
  .word 0x46010042
  .word 0xc78080d8
  .word 0x46010582
  .word 0xc78080dc
  .word 0x46010502
  .word 0x1200000f
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0d5ff4
  .word 0x00000000
  .word 0x30420001
  .word 0x10400005
  .word 0x00000000
  .word 0x3c0241f0
  .word 0x4482a800
  .word 0x10000003
  .word 0x00000000
  .word 0x3c02c1f0
  .word 0x4482a800
  .word 0x10000014
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x24030001
  .word 0x10430009
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x3c0241f0
  .word 0x4482a800
  .word 0x10000006
  .word 0x00000000
  .word 0x3c02c1f0
  .word 0x4482a800
  .word 0x10000002
  .word 0x00000000
  .word 0x4480a800
  .word 0x12000005
  .word 0x00000000
  .word 0x3c02c220
  .word 0x44826000
  .word 0x10000014
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x24030001
  .word 0x10430009
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x3c024170
  .word 0x44826000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c02c170
  .word 0x44826000
  .word 0x10000002
  .word 0x00000000
  .word 0x44806000
  .word 0x27a400d0
  .word 0x3c050069
  .word 0x24a57870
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a400d0
  .word 0x3c050069
  .word 0x24a57880
  .word 0x4600ab06
  .word 0x24060002
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40150
  .word 0x27a50140
  .word 0x27a600d0
  .word 0x0c131b18
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc64000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600b043
  .word 0xc7a00150
  .word 0x46010142
  .word 0xe7a50150
  .word 0xc7a00154
  .word 0x46010102
  .word 0xe7a40154
  .word 0xc7a00158
  .word 0x460100c2
  .word 0xe7a30158
  .word 0xc7a00120
  .word 0xe7a00130
  .word 0xc7a20124
  .word 0xe7a20134
  .word 0xc7a10128
  .word 0xe7a10138
  .word 0x46050000
  .word 0xe7a00080
  .word 0x46041000
  .word 0xe7a00084
  .word 0x46030800
  .word 0xe7a00088
  .word 0x27a4008c
  .word 0x27a50080
  .word 0x27a60130
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc64000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a043
  .word 0xc7a00140
  .word 0x46010142
  .word 0xe7a50150
  .word 0xc7a00144
  .word 0x46010102
  .word 0xe7a40154
  .word 0xc7a00148
  .word 0x460100c2
  .word 0xe7a30158
  .word 0xc7a00120
  .word 0xe7a00130
  .word 0xc7a20124
  .word 0xe7a20134
  .word 0xc7a10128
  .word 0xe7a10138
  .word 0x46050000
  .word 0xe7a0009c
  .word 0x46041000
  .word 0xe7a000a0
  .word 0x46030800
  .word 0xe7a000a4
  .word 0x27a400a8
  .word 0x27a5009c
  .word 0x27a60130
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x44806000
  .word 0x8e4400e0
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0xc7a10084
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00084
  .word 0xc7a100a0
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a000a0
  .word 0x0240202d
  .word 0x27a50080
  .word 0x27a6009c
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x3c024040
  .word 0x44826000
  .word 0x0240202d
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0x100000a1
  .word 0x00000000
  .word 0xc621008c
  .word 0xc620002c
  .word 0x460008c2
  .word 0xc7828030
  .word 0xc7a10124
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101d
  .word 0xe7a00124
  .word 0x24040002
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x00021840
  .word 0x00621821
  .word 0x00031880
  .word 0x00621021
  .word 0x00021880
  .word 0x8f82b6fc
  .word 0x8c420b18
  .word 0x00431021
  .word 0x245101a4
  .word 0x24020001
  .word 0x16020011
  .word 0x00000000
  .word 0x27a4008c
  .word 0x26250004
  .word 0x26260010
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0xc6220004
  .word 0xc6210008
  .word 0xc620000c
  .word 0xe7a20080
  .word 0xe7a10084
  .word 0xe7a00088
  .word 0x24100001
  .word 0x10000006
  .word 0x00000000
  .word 0x27a40080
  .word 0x2645009c
  .word 0x0c0a911c
  .word 0x00000000
  .word 0x0000802d
  .word 0x27a400a8
  .word 0x27a50080
  .word 0x27a60120
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0xc7a20080
  .word 0xc7a10084
  .word 0xc7a00088
  .word 0xe7a2009c
  .word 0xe7a100a0
  .word 0xe7a000a4
  .word 0x27a4008c
  .word 0x27a500a8
  .word 0x27a60050
  .word 0x0c12f8c4
  .word 0x00000000
  .word 0xc781808c
  .word 0xc78080e0
  .word 0x8fa20074
  .word 0x14400028
  .word 0x00000000
  .word 0xc7ac0070
  .word 0x460c0902
  .word 0x460420c2
  .word 0xc78b8044
  .word 0xc78a8048
  .word 0x44804800
  .word 0x00000000
  .word 0x460a4818
  .word 0x4603585c
  .word 0xc788804c
  .word 0x46084818
  .word 0x4601185c
  .word 0xc7878050
  .word 0x46074818
  .word 0x4601185c
  .word 0xc7868054
  .word 0x46064818
  .word 0x4601185c
  .word 0xc7858058
  .word 0x46054818
  .word 0x4601189c
  .word 0x46041842
  .word 0x46044818
  .word 0x4602085c
  .word 0x460c0102
  .word 0x460420c2
  .word 0x460a4818
  .word 0x4603581c
  .word 0x46084818
  .word 0x4600181c
  .word 0x46074818
  .word 0x4600181c
  .word 0x46064818
  .word 0x4600181c
  .word 0x46054818
  .word 0x4600189c
  .word 0x46041802
  .word 0x46044818
  .word 0x4602001c
  .word 0xc7a20050
  .word 0x46011182
  .word 0xe7a600c0
  .word 0xc7a20054
  .word 0x46011142
  .word 0xe7a500c4
  .word 0xc7a20058
  .word 0x46011102
  .word 0xe7a400c8
  .word 0xc7a20060
  .word 0x44801800
  .word 0x00000000
  .word 0x46061818
  .word 0x4600109c
  .word 0xe7a200c0
  .word 0xc7a20064
  .word 0x46051818
  .word 0x4600109c
  .word 0xe7a200c4
  .word 0xc7a20068
  .word 0x46041818
  .word 0x4600109c
  .word 0xe7a200c8
  .word 0xc7a3005c
  .word 0xc7a2006c
  .word 0x4600101a
  .word 0x4601181c
  .word 0xe7a000cc
  .word 0xc7a300c0
  .word 0xc7a200c4
  .word 0xc7a100c8
  .word 0xc7a000cc
  .word 0xe7a300a8
  .word 0xe7a200ac
  .word 0xe7a100b0
  .word 0xe7a000b4
  .word 0x12000004
  .word 0x00000000
  .word 0x24040008
  .word 0x0c0d46ec
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50080
  .word 0x27a6009c
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x3c024000
  .word 0x44826000
  .word 0x0240202d
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0160
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_propagation reset

#pragma opt_dead_assignments off
/* W419 negative: inverted the tiny boolean assignment in func_002e58a0; nd1467 -> 1467 at object 2020/2192. */
/* W419 measured: absolute pilot globals plus scalar quaternion copy and bVar3-first tail => nd1474, object 2088/2192, rate .705939; retained as best rate. */
// FUN_002e58a0
#ifndef PC_BUILD
asm void func_002e58a0(BtlCamera* param_1)
{
  .set noreorder
  .word 0x27bdfe80
  .word 0xffbf0070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x8c8400e0
  .word 0x1080001c
  .word 0x00000000
  .word 0x8c900030
  .word 0x920200a2
  .word 0x14400018
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000000f
  .word 0x00000000
  .word 0x3222ffff
  .word 0x00021080
  .word 0x00821021
  .word 0x8c420038
  .word 0x8c440030
  .word 0x908300a2
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0x26050004
  .word 0x0c09ff3c
  .word 0x00000000
  .word 0x26220001
  .word 0x3051ffff
  .word 0x8e8400e0
  .word 0x3223ffff
  .word 0x9482006a
  .word 0x0062102a
  .word 0x1440ffed
  .word 0x00000000
  .word 0x14800004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000020
  .word 0x00000000
  .word 0x8c820030
  .word 0x904200a2
  .word 0x1440000e
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x94430104
  .word 0x2402001d
  .word 0x10620006
  .word 0x00000000
  .word 0x2402001c
  .word 0x10620003
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000f
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x94430104
  .word 0x2402001f
  .word 0x10620006
  .word 0x00000000
  .word 0x24020012
  .word 0x10620003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000002
  .word 0x00000000
  .word 0x24100001
  .word 0x8c920030
  .word 0x924200a2
  .word 0x14400009
  .word 0x00000000
  .word 0x8e8200e0
  .word 0x0240982d
  .word 0x8c420038
  .word 0x8c520030
  .word 0x0000882d
  .word 0x24150001
  .word 0x10000006
  .word 0x00000000
  .word 0x8e8200e0
  .word 0x8c420038
  .word 0x8c530030
  .word 0x24110001
  .word 0x0000a82d
  .word 0x926400a2
  .word 0x924200a2
  .word 0x1482000d
  .word 0x00000000
  .word 0x14800006
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0ba388
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0ba3d0
  .word 0x00000000
  .word 0x100001a5
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420bbc
  .word 0x94430008
  .word 0x240201b4
  .word 0x10620003
  .word 0x00000000
  .word 0x1000003e
  .word 0x00000000
  .word 0x1480003c
  .word 0x00000000
  .word 0x27a4008c
  .word 0x3c050069
  .word 0x24a57c84
  .word 0x3c060069
  .word 0x24c67c90
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x3c020069
  .word 0xc4427c84
  .word 0x3c020069
  .word 0xc4417c88
  .word 0x3c020069
  .word 0xc4407c8c
  .word 0xe7a20080
  .word 0xe7a10084
  .word 0xe7a00088
  .word 0x27a400a8
  .word 0x3c050069
  .word 0x24a57c9c
  .word 0x3c060069
  .word 0x24c67ca8
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a6009c
  .word 0x3c020069
  .word 0xc4427c9c
  .word 0x3c020069
  .word 0xc4417ca0
  .word 0x3c020069
  .word 0xc4407ca4
  .word 0xe7a2009c
  .word 0xe7a100a0
  .word 0xe7a000a4
  .word 0x3c020069
  .word 0x84427c80
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x8f82b6fc
  .word 0x24440020
  .word 0x27a50080
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x24440020
  .word 0x4600a306
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0x10000160
  .word 0x00000000
  .word 0x27a400e0
  .word 0x2685009c
  .word 0x0c0a911c
  .word 0x00000000
  .word 0x0260202d
  .word 0x27a50170
  .word 0x0c0a0014
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50160
  .word 0x0c0a0014
  .word 0x00000000
  .word 0xc661002c
  .word 0xc6600090
  .word 0x46010582
  .word 0xc7a50174
  .word 0xc660008c
  .word 0x46010002
  .word 0x3c023f00
  .word 0x44822000
  .word 0x44801800
  .word 0x00000000
  .word 0x46051818
  .word 0x4600255c
  .word 0xc7a20164
  .word 0xc641008c
  .word 0xc640002c
  .word 0x46000802
  .word 0x46021818
  .word 0x4600251c
  .word 0xc7a10170
  .word 0xc7a00160
  .word 0x46000801
  .word 0xe7a00130
  .word 0x46022801
  .word 0xe7a00134
  .word 0xc7a10178
  .word 0xc7a00168
  .word 0x46000801
  .word 0xe7a00138
  .word 0x27a40130
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7818094
  .word 0x46000842
  .word 0xc7a00130
  .word 0x46010082
  .word 0xe7a20150
  .word 0xc7a00134
  .word 0x460100c2
  .word 0xe7a30154
  .word 0xc7a00138
  .word 0x46010042
  .word 0xe7a10158
  .word 0xc7a00160
  .word 0x46001080
  .word 0xe7a20150
  .word 0xc7a00164
  .word 0x46001800
  .word 0xe7a00154
  .word 0xc7a00168
  .word 0x46000840
  .word 0xe7a10158
  .word 0xc680009c
  .word 0x46020001
  .word 0xe7a000d8
  .word 0xc68000a4
  .word 0x46010001
  .word 0xe7a000dc
  .word 0x27a400d8
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a40138
  .word 0xe7a400d0
  .word 0xc7a30130
  .word 0x46001887
  .word 0xe7a200d4
  .word 0xc7a100d8
  .word 0xc7a000dc
  .word 0x4600101a
  .word 0x460125dc
  .word 0x16200007
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x46160082
  .word 0x10000005
  .word 0x00000000
  .word 0x3c024020
  .word 0x44820000
  .word 0x00000000
  .word 0x46160082
  .word 0x44800800
  .word 0x00000000
  .word 0x4601b834
  .word 0x4501000b
  .word 0x00000000
  .word 0xc7a00170
  .word 0x46000818
  .word 0x4602201c
  .word 0xe7a00140
  .word 0xc7a00178
  .word 0x46000818
  .word 0x4602181d
  .word 0xe7a00148
  .word 0x10000009
  .word 0x00000000
  .word 0xc7a00170
  .word 0x46000818
  .word 0x4602201d
  .word 0xe7a00140
  .word 0xc7a00178
  .word 0x46000818
  .word 0x4602181c
  .word 0xe7a00148
  .word 0x1620001f
  .word 0x00000000
  .word 0x4614a834
  .word 0x4500000b
  .word 0x00000000
  .word 0xe7b50144
  .word 0xc7828094
  .word 0xc7a10154
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4614101d
  .word 0xe7a00154
  .word 0x1000000c
  .word 0x00000000
  .word 0xc7828030
  .word 0xc7a00174
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4615101d
  .word 0xe7a00144
  .word 0xc7a00154
  .word 0x46000818
  .word 0x4614101c
  .word 0xe7a00154
  .word 0x3c024020
  .word 0x44820000
  .word 0x00000000
  .word 0x46160502
  .word 0x1000000d
  .word 0x00000000
  .word 0xe7b50144
  .word 0xc7828094
  .word 0xc7a10154
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4614101d
  .word 0xe7a00154
  .word 0x3c024060
  .word 0x44820000
  .word 0x00000000
  .word 0x46160502
  .word 0x27a40108
  .word 0x27a50140
  .word 0x27a60150
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a40130
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a70108
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00150
  .word 0xe7a000c0
  .word 0xc7a00158
  .word 0xe7a000c4
  .word 0xc7a00140
  .word 0xe7a000c8
  .word 0xc7a00148
  .word 0xe7a000cc
  .word 0xc7a00170
  .word 0xe7a00128
  .word 0xc7a00178
  .word 0xe7a0012c
  .word 0x27a400c0
  .word 0x27a500c8
  .word 0x27a60128
  .word 0x27a70120
  .word 0x0c0b47f4
  .word 0x00000000
  .word 0x46140500
  .word 0xc7a00120
  .word 0xe7a00140
  .word 0xc7a00124
  .word 0xe7a00148
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a503
  .word 0xc7a00130
  .word 0x46140002
  .word 0xe7a00130
  .word 0xc7a00134
  .word 0x46140002
  .word 0xe7a00134
  .word 0xc7a00138
  .word 0x46140002
  .word 0xe7a00138
  .word 0x44800000
  .word 0x00000000
  .word 0x4600b834
  .word 0x45000026
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600a042
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000842
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d42
  .word 0xc7a00130
  .word 0xe7a00118
  .word 0xc7a00138
  .word 0xe7a0011c
  .word 0x27a40118
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a1011c
  .word 0xc7a00140
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4615081c
  .word 0xe7a00140
  .word 0xc7a10118
  .word 0xc7a00148
  .word 0x46001018
  .word 0x4615081d
  .word 0xe7a00148
  .word 0xc7a10140
  .word 0xc7a00130
  .word 0x46000800
  .word 0xe7a000fc
  .word 0xc7a10144
  .word 0xc7a00134
  .word 0x46000880
  .word 0xe7a20100
  .word 0xc7a10148
  .word 0xc7a00138
  .word 0x46000800
  .word 0xe7a00104
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46001034
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00100
  .word 0x27a400ec
  .word 0x27a50108
  .word 0x0c0b47cc
  .word 0x00000000
  .word 0x24020001
  .word 0x12a20005
  .word 0x00000000
  .word 0xc7818068
  .word 0x46010036
  .word 0x45010032
  .word 0x00000000
  .word 0x24060001
  .word 0x1606002f
  .word 0x00000000
  .word 0x27a70108
  .word 0xc7a30108
  .word 0xc7a2010c
  .word 0xc7a10110
  .word 0xc7a00114
  .word 0xe7a300ec
  .word 0xe7a200f0
  .word 0xe7a100f4
  .word 0xe7a000f8
  .word 0x27a40130
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x0c12f878
  .word 0x00000000
  .word 0x3c024348
  .word 0x44820000
  .word 0x00000000
  .word 0x46140080
  .word 0xc7a00130
  .word 0x460200c2
  .word 0xe7a30130
  .word 0xc7a00134
  .word 0x46020042
  .word 0xe7a10134
  .word 0xc7a00138
  .word 0x46020082
  .word 0xe7a20138
  .word 0xc7a00140
  .word 0x46030000
  .word 0xe7a000e0
  .word 0xc7a00144
  .word 0x46010040
  .word 0xe7a100e4
  .word 0xc7a00148
  .word 0x46020000
  .word 0xe7a000e8
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a000e4
  .word 0x24040008
  .word 0x0c0d46ec
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a500e0
  .word 0x27a600fc
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44826000
  .word 0x0280202d
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0180
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_dead_assignments reset

// FUN_002e6130
f32 func_002e6130(BtlUnit* param_1,BtlUnit* param_2,float* param_3,float* param_4)
{
  u16 sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  f32 fVar6;
  FUN_00280130(param_1,param_3);
  FUN_00280130(param_2,param_4);
  iVar5 = (int)param_1;
  iVar4 = (int)param_2;
  iVar2 = (int)param_4;
  iVar3 = (int)param_3;
  if ((*(u8 *)(iVar5 + 0xa2) == '\0') && (*(u8 *)(iVar4 + 0xa2) == '\1')) {
    sVar1 = *(u16 *)(iVar4 + 0xa4);
    switch (sVar1) {
    case 0x100:
      *(float *)(iVar3 + 4) =
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * DAT_007cad20 +
           *(float *)(iVar3 + 4) + 0.0f;
      *(float *)(iVar2 + 4) =
           (*(float *)(iVar2 + 4) + 0.0f) -
           (*(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c)) * 0.125f;
      fVar6 = 4.5f;
      break;
    case 0x101:
    case 0x102:
      *(float *)(iVar3 + 4) =
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * DAT_007cada4 +
           *(float *)(iVar3 + 4) + 0.0f;
      *(float *)(iVar2 + 4) =
           (*(float *)(iVar2 + 4) + 0.0f) -
           *(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c) * DAT_007cad20;
      fVar6 = 4.0f;
      break;
    case 0x103:
      *(float *)(iVar3 + 4) =
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * DAT_007cad84 +
           *(float *)(iVar3 + 4) + 0.0f;
      *(float *)(iVar2 + 4) =
           (*(float *)(iVar2 + 4) + 0.0f) -
           *(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c) * DAT_007cada4;
      fVar6 = 4.0f;
      break;
    case 0x104:
      *(float *)(iVar3 + 4) =
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * DAT_007cad54 +
           *(float *)(iVar3 + 4) + 0.0f;
      *(float *)(iVar2 + 4) =
           (*(float *)(iVar2 + 4) + 0.0f) -
           *(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c) * DAT_007cad80;
      fVar6 = 5.0f;
      break;
    case 0x105:
      *(float *)(iVar3 + 4) =
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * DAT_007cad78 +
           *(float *)(iVar3 + 4) + 0.0f;
      *(float *)(iVar2 + 4) =
           (*(float *)(iVar2 + 4) + 0.0f) -
           *(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c) * DAT_007cad84;
      fVar6 = 4.5f;
      break;
    case 0x106:
      *(float *)(iVar3 + 4) =
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * DAT_007cad54 +
           *(float *)(iVar3 + 4) + 0.0f;
      *(float *)(iVar2 + 4) =
           (*(float *)(iVar2 + 4) + 0.0f) -
           *(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c) * DAT_007cad78;
      fVar6 = 4.5f;
      break;
    case 0x115:
      *(float *)(iVar3 + 4) =
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * DAT_007cad88 +
           *(float *)(iVar3 + 4) + 0.0f;
      *(float *)(iVar2 + 4) =
           (*(float *)(iVar2 + 4) + 0.0f) -
           *(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c) * DAT_007cad84;
      fVar6 = 4.5f;
      break;
    case 0x107:
      *(float *)(iVar3 + 4) =
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * DAT_007cad54 +
           *(float *)(iVar3 + 4) + 0.0f;
      *(float *)(iVar2 + 4) =
           (*(float *)(iVar2 + 4) + 0.0f) -
           *(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c) * DAT_007cad84;
      fVar6 = 5.0f;
      break;
    case 0x10a:
      *(float *)(iVar3 + 4) =
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * DAT_007cadb4 +
           *(float *)(iVar3 + 4) + 0.0f;
      *(float *)(iVar2 + 4) =
           (*(float *)(iVar2 + 4) + 0.0f) -
           *(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c) * DAT_007cad84;
      fVar6 = 5.0f;
      break;
    case 0x10d:
      *(float *)(iVar3 + 4) =
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * DAT_007cad78 +
           *(float *)(iVar3 + 4) + 0.0f;
      *(float *)(iVar2 + 4) =
           (*(float *)(iVar2 + 4) + 0.0f) -
           *(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c) * DAT_007cad20;
      fVar6 = 4.0f;
      break;
    case 0x111:
    case 0x11a:
    case 0x11b:
    case 0x11c:
    case 0x11d:
    case 0x11e:
    case 0x11f:
    case 0x120:
    case 0x121:
    case 0x122:
    case 0x123:
    case 0x124:
    case 0x125:
    case 0x128:
      *(float *)(iVar3 + 4) =
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * 0.5f + *(float *)(iVar3 + 4) + 0.0f;
      *(float *)(iVar2 + 4) =
           (*(float *)(iVar2 + 4) + 0.0f) -
           *(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c) * DAT_007cadb8;
      fVar6 = 6.0f;
      break;
    case 0xf1:
      *(float *)(iVar3 + 4) =
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * 0.5f + *(float *)(iVar3 + 4) + 0.0f;
      *(float *)(iVar2 + 4) =
           (*(float *)(iVar2 + 4) + 0.0f) -
           *(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c) * DAT_007cadb8;
      fVar6 = 6.0f;
      break;
    default:
      *(float *)(iVar3 + 4) =
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * DAT_007cad20 +
           *(float *)(iVar3 + 4) + 0.0f;
      *(float *)(iVar2 + 4) =
           (*(float *)(iVar2 + 4) + 0.0f) -
           *(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c) * DAT_007cadbc;
      fVar6 = 4.0f;
      break;
    }
  }
  else if ((*(u8 *)(iVar5 + 0xa2) == '\1') && (*(u8 *)(iVar4 + 0xa2) == '\0')) {
    switch(*(u16 *)(iVar5 + 0xa4)) {
    case 0x101:
    case 0x102:
      *(float *)(iVar3 + 4) =
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * DAT_007cad5c +
           *(float *)(iVar3 + 4) + 0.0f;
      *(float *)(iVar2 + 4) =
           *(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c) * 0.5f + *(float *)(iVar2 + 4) + 0.0f;
      fVar6 = 5.5f;
      break;
    case 0x103:
      *(float *)(iVar3 + 4) =
           (*(float *)(iVar3 + 4) + 0.0f) -
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * 0.25f;
      *(float *)(iVar2 + 4) =
           *(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c) * DAT_007cadb4 +
           *(float *)(iVar2 + 4) + 0.0f;
      fVar6 = 5.5f;
      break;
    case 0x104:
      *(float *)(iVar3 + 4) =
           (*(float *)(iVar3 + 4) + 0.0f) - *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * 0.5f
      ;
      *(float *)(iVar2 + 4) = 170.0f;
      fVar6 = 6.5f;
      break;
    case 0x105:
      *(float *)(iVar3 + 4) =
           (*(float *)(iVar3 + 4) + 0.0f) -
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * 0.25f;
      *(float *)(iVar2 + 4) =
           *(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c) * 0.5f + *(float *)(iVar2 + 4) + 0.0f;
      fVar6 = 6.0f;
      break;
    case 0x107:
      *(float *)(iVar3 + 4) =
           (*(float *)(iVar3 + 4) + 0.0f) -
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * DAT_007cad20;
      *(float *)(iVar2 + 4) =
           *(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c) * 0.25f + *(float *)(iVar2 + 4) + 0.0f;
      fVar6 = 6.0f;
      break;
    case 0x10a:
      *(float *)(iVar3 + 4) =
           (*(float *)(iVar3 + 4) + 0.0f) -
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * 0.25f;
      *(float *)(iVar2 + 4) = 170.0f;
      fVar6 = 6.0f;
      break;
    default:
      *(float *)(iVar3 + 4) =
           *(float *)(iVar5 + 0x8c) * *(float *)(iVar5 + 0x2c) * DAT_007cad5c +
           *(float *)(iVar3 + 4) + 0.0f;
      *(float *)(iVar2 + 4) =
           *(float *)(iVar4 + 0x8c) * *(float *)(iVar4 + 0x2c) * 0.5f + *(float *)(iVar2 + 4) + 0.0f;
      fVar6 = 5.5f;
      break;
    }
  }
  else {
    fVar6 = 4.5f;
  }
  return fVar6;
}

#pragma opt_propagation off
// FUN_002e6a20
#ifndef PC_BUILD
asm void func_002e6a20(BtlCamera* camera, float weight)
{
  .set noreorder
  .word 0x27bdfea0
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x460065c6
  .word 0x8c8200e0
  .word 0x8c530030
  .word 0x8c420038
  .word 0x8c520030
  .word 0x0260202d
  .word 0x0240282d
  .word 0x27a60150
  .word 0x27a70140
  .word 0x0c0b984c
  .word 0x00000000
  .word 0x46000586
  .word 0xc6610090
  .word 0xc660002c
  .word 0x46000d42
  .word 0xc6410090
  .word 0xc640002c
  .word 0x46000d02
  .word 0xc681009c
  .word 0xc7a00150
  .word 0x46000801
  .word 0xe7a000b8
  .word 0xc68100a4
  .word 0xc7a00158
  .word 0x46000801
  .word 0xe7a000bc
  .word 0x27a400b8
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0x926200a2
  .word 0x14400048
  .word 0x00000000
  .word 0x27a400d0
  .word 0x27a50150
  .word 0x27a60140
  .word 0x0c0b4778
  .word 0x00000000
  .word 0x27a40110
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700d0
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00110
  .word 0x461400c2
  .word 0xe7a30110
  .word 0xc7a00114
  .word 0x46140082
  .word 0xe7a20114
  .word 0xc7a00118
  .word 0x46140042
  .word 0xe7a10118
  .word 0xc7a00140
  .word 0x460300c0
  .word 0xe7a30140
  .word 0xc7a00144
  .word 0x46020080
  .word 0xe7a20144
  .word 0xc7a00148
  .word 0x46010040
  .word 0xe7a10148
  .word 0xc7a00150
  .word 0x46030001
  .word 0xe7a00100
  .word 0xc7a00154
  .word 0x46020001
  .word 0xe7a00104
  .word 0xc7a00158
  .word 0x46010001
  .word 0xe7a00108
  .word 0x27a40100
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x0260802d
  .word 0x0240882d
  .word 0xdfa20150
  .word 0xc7a10158
  .word 0xffa20130
  .word 0xe7a10138
  .word 0xc6620090
  .word 0xc661002c
  .word 0x46011082
  .word 0x3c023fa0
  .word 0x44820800
  .word 0x00000000
  .word 0x46020842
  .word 0xc7828098
  .word 0x460010c2
  .word 0xc7a00100
  .word 0x46030082
  .word 0xe7a20120
  .word 0xc7a20104
  .word 0x46031082
  .word 0xe7a20124
  .word 0xc7a50108
  .word 0x46032882
  .word 0xe7a20128
  .word 0xc7b40134
  .word 0xe7b400f4
  .word 0x10000046
  .word 0x00000000
  .word 0x27a400d0
  .word 0x27a50140
  .word 0x27a60150
  .word 0x0c0b4778
  .word 0x00000000
  .word 0x27a40110
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700d0
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00110
  .word 0x461500c2
  .word 0xe7a30110
  .word 0xc7a00114
  .word 0x46150082
  .word 0xe7a20114
  .word 0xc7a00118
  .word 0x46150042
  .word 0xe7a10118
  .word 0xc7a00150
  .word 0x460300c0
  .word 0xe7a30150
  .word 0xc7a00154
  .word 0x46020080
  .word 0xe7a20154
  .word 0xc7a00158
  .word 0x46010040
  .word 0xe7a10158
  .word 0xc7a00140
  .word 0x46001801
  .word 0xe7a00100
  .word 0xc7a00144
  .word 0x46001001
  .word 0xe7a00104
  .word 0xc7a00148
  .word 0x46000801
  .word 0xe7a00108
  .word 0x27a40100
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x0240802d
  .word 0x0260882d
  .word 0xdfa20140
  .word 0xc7a10148
  .word 0xffa20130
  .word 0xe7a10138
  .word 0xc6420090
  .word 0xc641002c
  .word 0x46011082
  .word 0x3c023f00
  .word 0x44820800
  .word 0x00000000
  .word 0x46020842
  .word 0xc7828060
  .word 0x460010c2
  .word 0xc7a00100
  .word 0x46030082
  .word 0xe7a20120
  .word 0xc7a20104
  .word 0x46031082
  .word 0xe7a20124
  .word 0xc7a50108
  .word 0x46032882
  .word 0xe7a20128
  .word 0xc7b40134
  .word 0xe7b400f4
  .word 0xc7a30120
  .word 0xc7a20140
  .word 0x46021880
  .word 0xe7a20120
  .word 0xc7a30124
  .word 0xc7a20144
  .word 0x46021880
  .word 0xe7a20124
  .word 0xc7a30128
  .word 0xc7a20148
  .word 0x46021880
  .word 0xe7a20128
  .word 0xe7a500b0
  .word 0x460000c7
  .word 0xe7a300b4
  .word 0xc7a400b8
  .word 0xc7a200bc
  .word 0x4602181a
  .word 0x44801800
  .word 0x4604289c
  .word 0x46031034
  .word 0x4501000b
  .word 0x00000000
  .word 0xc7a20130
  .word 0x46021818
  .word 0x4601289c
  .word 0xe7a200f0
  .word 0xc7b50138
  .word 0x46151818
  .word 0x4601001d
  .word 0xe7a000f8
  .word 0x10000009
  .word 0x00000000
  .word 0xc7a20130
  .word 0x46021818
  .word 0x4601289d
  .word 0xe7a200f0
  .word 0xc7b50138
  .word 0x46151818
  .word 0x4601001c
  .word 0xe7a000f8
  .word 0x27a40098
  .word 0x27a500f0
  .word 0x27a60120
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a40100
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a70098
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00120
  .word 0xe7a000c0
  .word 0xc7a00128
  .word 0xe7a000c4
  .word 0xc7a000f0
  .word 0xe7a000c8
  .word 0xc7a000f8
  .word 0xe7a000cc
  .word 0xc7a00130
  .word 0xe7a000e8
  .word 0xe7b500ec
  .word 0x27a400c0
  .word 0x27a500c8
  .word 0x27a600e8
  .word 0x27a700e0
  .word 0x0c0b47f4
  .word 0x00000000
  .word 0xc6020090
  .word 0xc601002c
  .word 0x46011082
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4602b55c
  .word 0xc7a000e0
  .word 0xe7a000f0
  .word 0xe7b400f4
  .word 0xc7a000e4
  .word 0xe7a000f8
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a883
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46001034
  .word 0x45000002
  .word 0x00000000
  .word 0x46000086
  .word 0xc7a00100
  .word 0x460200c2
  .word 0xe7a30100
  .word 0xc7a00104
  .word 0x46020042
  .word 0xe7a10104
  .word 0xc7a00108
  .word 0x46020082
  .word 0xe7a20108
  .word 0xc7a000f0
  .word 0x46030000
  .word 0xe7a0008c
  .word 0xc7a000f4
  .word 0x46010040
  .word 0xe7a10090
  .word 0xc7a000f8
  .word 0x46020000
  .word 0xe7a00094
  .word 0x3c0241b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00090
  .word 0x27a40070
  .word 0x2685009c
  .word 0x0c0a911c
  .word 0x00000000
  .word 0x27a4007c
  .word 0x27a50098
  .word 0x0c0b47cc
  .word 0x00000000
  .word 0xc78180d4
  .word 0x46010036
  .word 0x45010008
  .word 0x00000000
  .word 0x27a40070
  .word 0x27a5008c
  .word 0x0c0a913c
  .word 0x00000000
  .word 0x64070003
  .word 0x10000002
  .word 0x00000000
  .word 0x64070033
  .word 0x3c024248
  .word 0x44826000
  .word 0x8e8400e0
  .word 0x26250004
  .word 0x27a6008c
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0x44800000
  .word 0x00000000
  .word 0x46170032
  .word 0x45000034
  .word 0x00000000
  .word 0x27a40070
  .word 0x27a5008c
  .word 0x0c0a913c
  .word 0x00000000
  .word 0x27a40100
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a7007c
  .word 0x0c12f878
  .word 0x00000000
  .word 0x3c024316
  .word 0x44821000
  .word 0xc7a00100
  .word 0x460200c2
  .word 0xe7a30100
  .word 0xc7a00104
  .word 0x46020042
  .word 0xe7a10104
  .word 0xc7a00108
  .word 0x46020082
  .word 0xe7a20108
  .word 0xc7a00070
  .word 0x46030000
  .word 0xe7a0008c
  .word 0xc7a00074
  .word 0x46010040
  .word 0xe7a10090
  .word 0xc7a00078
  .word 0x46020000
  .word 0xe7a00094
  .word 0x3c0241b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00090
  .word 0x0280202d
  .word 0x27a50070
  .word 0x27a6008c
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x3c024000
  .word 0x44826000
  .word 0x0280202d
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a50070
  .word 0x27a6008c
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x0280202d
  .word 0x4600bb06
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0160
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_propagation reset

// FUN_002e70b0
void func_002e70b0(BtlCamera* camera)

{
  BtlUnit* unit;
  u16 targetMask;
  
  *(u16 *)(DAT_007ce3ec + 0xb78) = 0;
  unit = camera->action->unit;
  targetMask = FUN_002d1600(&camera->action->target);
  if (unit->genus == 0) {
    if ((targetMask & 1) == 0) {
      if (FUN_002d5e10(camera->action) == 0) {
        func_002e6a20(camera,1.0f);
      }
    }
    else {
      FUN_002af960(camera);
      *(u16 *)(DAT_007ce3ec + 0xb78) = 1;
    }
  }
  else if ((targetMask & 2) == 0) {
    if (FUN_0030c3a0(unit->datUnit) != 0) {
      func_002e6a20(camera,1.0f);
    }
    else {
      FUN_002af960(camera);
      *(u16 *)(DAT_007ce3ec + 0xb78) = 1;
    }
  }
  return;
}

// FUN_002e71c0
void func_002e71c0(int param_1)

{

  if ((*(int *)(param_1 + 0xe0) != 0) &&
      ((*(u16 *)(*(int *)(param_1 + 0xe0) + 0x1a) & 1) != 0)) {
    if (*(u16 *)(DAT_007ce3ec + 0xb78) == 1) {
      FUN_002b0210(param_1);
    }
  }
  return;
}

// FUN_002e7210 MATCHING
void func_002e7210(BtlCamera* camera)
{
    BtlUnit* unit;
    BtlUnit* targetUnit;
    u16 index;

    if ((camera->action != NULL) && ((camera->action->unk_1a & 1) != 0)) {
        if (camera->action != NULL) {
            unit = camera->action->unit;
            if (unit->genus == 0) {
                for (index = 0; index < camera->action->target.targetedCount; index++) {
                    targetUnit = ((BtlAction *)camera->action)->target.targetedActions[index]->unit;
                    if (targetUnit->genus == 1) {
                        FUN_0027fcf0(targetUnit, &unit->pos);
                    }
                }
            }
        }
        if (camera->action->unit->genus == 0) {
            FUN_002b0280(0.0f, camera, 0, 1);
        } else {
            FUN_002b0280(0.0f, camera, 1, 0);
        }
    }
    return;
}

// FUN_002e7320 MATCHING
void func_002e7320(void)
{
    return;
}

// FUN_002e7330
#ifndef PC_BUILD
asm void func_002e7330(int param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x8c8200e0
  .word 0x8c420038
  .word 0x8c440030
  .word 0x0c0be290
  .word 0x00000000
  .word 0x1040009c
  .word 0x00000000
  .word 0x8e4300e0
  .word 0x8c630038
  .word 0xae430100
  .word 0x8e4300e0
  .word 0x8c700030
  .word 0x920300a2
  .word 0x146000b4
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0b56fc
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24020003
  .word 0x10000002
  .word 0x00000000
  .word 0x960200a4
  .word 0x3042ffff
  .word 0x2c41000b
  .word 0x10200073
  .word 0x00000000
  .word 0x3c03007c
  .word 0x246389d0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x304300ff
  .word 0x00031100
  .word 0x00431023
  .word 0x00021080
  .word 0x00431021
  .word 0x00021880
  .word 0x3c020069
  .word 0x24427cc0
  .word 0x00438821
  .word 0x1000005e
  .word 0x00000000
  .word 0x3c11006a
  .word 0x26318460
  .word 0x1000005a
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x0c0c24e8
  .word 0x00000000
  .word 0x304300ff
  .word 0x24020003
  .word 0x1062001b
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000a
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000004b
  .word 0x00000000
  .word 0x3c11006a
  .word 0x26318560
  .word 0x10000047
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420bbc
  .word 0x94430008
  .word 0x240201b4
  .word 0x10620005
  .word 0x00000000
  .word 0x3c11006a
  .word 0x26318654
  .word 0x1000003d
  .word 0x00000000
  .word 0x3c11006a
  .word 0x26318e40
  .word 0x10000039
  .word 0x00000000
  .word 0x3c11006a
  .word 0x26318748
  .word 0x10000035
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420bbc
  .word 0x94430008
  .word 0x240201b4
  .word 0x10620005
  .word 0x00000000
  .word 0x3c11006a
  .word 0x26318840
  .word 0x1000002b
  .word 0x00000000
  .word 0x3c11006a
  .word 0x26318f40
  .word 0x10000027
  .word 0x00000000
  .word 0x3c11006a
  .word 0x26318940
  .word 0x10000023
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420bbc
  .word 0x94430008
  .word 0x240201b4
  .word 0x10620005
  .word 0x00000000
  .word 0x3c11006a
  .word 0x26318a40
  .word 0x10000019
  .word 0x00000000
  .word 0x3c11006a
  .word 0x26319040
  .word 0x10000015
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420bbc
  .word 0x94430008
  .word 0x240201b4
  .word 0x10620005
  .word 0x00000000
  .word 0x3c11006a
  .word 0x26318b40
  .word 0x1000000b
  .word 0x00000000
  .word 0x3c11006a
  .word 0x26319140
  .word 0x10000007
  .word 0x00000000
  .word 0x3c11006a
  .word 0x26318c40
  .word 0x10000003
  .word 0x00000000
  .word 0x3c11006a
  .word 0x26318d40
  .word 0x64130001
  .word 0x0200202d
  .word 0x0c0bf7e8
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x36620004
  .word 0x3048ffff
  .word 0x10000003
  .word 0x00000000
  .word 0x36620008
  .word 0x3048ffff
  .word 0x8e4500e0
  .word 0x264400ec
  .word 0x8ca60038
  .word 0x0220382d
  .word 0x0c0adafc
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0ac780
  .word 0x00000000
  .word 0x264400ec
  .word 0x0c0adb34
  .word 0x00000000
  .word 0x10400017
  .word 0x00000000
  .word 0x9442001c
  .word 0x24070001
  .word 0x1447000b
  .word 0x00000000
  .word 0x44806000
  .word 0x8e4400e0
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0x24030001
  .word 0xae430110
  .word 0x10000009
  .word 0x00000000
  .word 0x44806000
  .word 0x8e4400e0
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070003
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0xae400110
  .word 0x24030001
  .word 0xae430114
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
#endif /* PC_BUILD: asm function omitted */

// FUN_002e7680
void func_002e7680(int param_1)

{
  FUN_002b2060(param_1);
  return;
}

// FUN_002e76a0
void func_002e76a0(BtlCamera* camera)
{
  BtlAction* action;
  BtlUnit* unit;

  action = camera->action;
  if (action != NULL) {
    *(u32 *)(DAT_007ce3ec + 0xb74) = (u32)action->target.targetedActions[0];
    unit = camera->action->unit;
    if (FUN_0030c3a0(unit->datUnit) == 0) {
      FUN_002b2800(camera);
    }
  }
}

// FUN_002e7710
void func_002e7710(BtlCamera* camera)
{
  BtlAction* action;
  BtlUnit* unit;

  action = camera->action;
  if ((action != NULL) && ((action->unk_1a & 1) != 0)) {
    unit = action->unit;
    if (FUN_0030c3a0(unit->datUnit) != 0) {
      action = camera->action;
      if ((action->target.targetedCount == 1) &&
          (*(BtlAction**)(DAT_007ce3ec + 0xb74) == action->target.targetedActions[0])) {
        func_002e6a20(camera,DAT_007cad50);
      }
    }
    else {
      FUN_002b2880((int)camera);
    }
  }
}

// FUN_002e77c0
void func_002e77c0(BtlCamera* camera)

{
  BtlAction* action;
  
  action = camera->action;
  if (((action != NULL) && ((action->unk_1a & 1) != 0)) &&
     (action->unit->genus != 0)) {
    func_002e70b0(camera);
  }
  return;
}

// FUN_002e7810
void func_002e7810(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  if ((((iVar1 != 0) && ((*(u16 *)(iVar1 + 0x1a) & 1) != 0)) &&
      (*(u8 *)(*(int *)(iVar1 + 0x30) + 0xa2) != '\0')) &&
     (((iVar1 != 0 && ((*(u16 *)(iVar1 + 0x1a) & 1) != 0)) &&
      (*(u16 *)(DAT_007ce3ec + 0xb78) == 1)))) {
    FUN_002b0210(param_1);
  }
  return;
}

// FUN_002e7880
void func_002e7880(void)
{
}

// FUN_002e7890
#ifndef PC_BUILD
asm void func_002e7890(u32 param_1)
{
  .set noreorder
  .word 0x27bdfee0
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080982d
  .word 0x8c8200e0
  .word 0x8c500030
  .word 0x8e120a00
  .word 0x1040001b
  .word 0x00000000
  .word 0x920200a2
  .word 0x14400018
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000000f
  .word 0x00000000
  .word 0x3222ffff
  .word 0x00021080
  .word 0x00821021
  .word 0x8c420038
  .word 0x8c440030
  .word 0x908300a2
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0x26050004
  .word 0x0c09ff3c
  .word 0x00000000
  .word 0x26220001
  .word 0x3051ffff
  .word 0x8e6400e0
  .word 0x3223ffff
  .word 0x9482006a
  .word 0x0062102a
  .word 0x1440ffed
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0a9e0c
  .word 0x00000000
  .word 0xa6620110
  .word 0x0012102b
  .word 0x10400006
  .word 0x00000000
  .word 0x8e6400e0
  .word 0x0240282d
  .word 0x0c0bf6ec
  .word 0x00000000
  .word 0x0002102b
  .word 0x10400013
  .word 0x00000000
  .word 0x96630110
  .word 0x24020001
  .word 0x1062000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0a1d44
  .word 0x00000000
  .word 0x92420030
  .word 0xa3a2011c
  .word 0x92420031
  .word 0xa3a2011d
  .word 0x92420032
  .word 0xa3a2011e
  .word 0xa3a0011f
  .word 0x0240202d
  .word 0x8fa5011c
  .word 0x0c09fdcc
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c0a2038
  .word 0x00000000
  .word 0x96630110
  .word 0x2c610007
  .word 0x102000ee
  .word 0x00000000
  .word 0x3c04007c
  .word 0x24848a00
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0ab150
  .word 0x00000000
  .word 0x8e6400e0
  .word 0x9485006a
  .word 0x24030001
  .word 0x14a300df
  .word 0x00000000
  .word 0x8c830030
  .word 0x906300a2
  .word 0x146000db
  .word 0x00000000
  .word 0x8c830038
  .word 0x108300d8
  .word 0x00000000
  .word 0x8c630030
  .word 0x906300a2
  .word 0x146000d4
  .word 0x00000000
  .word 0x44806000
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070008
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0x100000cc
  .word 0x00000000
  .word 0x8e6200e0
  .word 0x8c500030
  .word 0x24040002
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x3044ffff
  .word 0x820309f0
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00431021
  .word 0x000218c0
  .word 0x8f82b6fc
  .word 0x8c420b18
  .word 0x00431821
  .word 0x00041040
  .word 0x00441021
  .word 0x00021080
  .word 0x00441021
  .word 0x00021080
  .word 0x00621021
  .word 0x24500004
  .word 0x27a400ec
  .word 0x26050004
  .word 0x26060010
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0xc6020004
  .word 0xc6010008
  .word 0xc600000c
  .word 0xe7a200e0
  .word 0xe7a100e4
  .word 0xe7a000e8
  .word 0x27a40108
  .word 0x2605001c
  .word 0x26060028
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a600fc
  .word 0xc602001c
  .word 0xc6010020
  .word 0xc6000024
  .word 0xe7a200fc
  .word 0xe7a10100
  .word 0xe7a00104
  .word 0x86020000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x8f82b6fc
  .word 0x24440020
  .word 0x27a500e0
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x24440020
  .word 0x4600a306
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0x44806000
  .word 0x8e6400e0
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070040
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0x1000007f
  .word 0x00000000
  .word 0x8e6400e0
  .word 0x9483001a
  .word 0x30630001
  .word 0x1060007a
  .word 0x00000000
  .word 0x8c820030
  .word 0x904200a2
  .word 0x14400034
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420b18
  .word 0x245003ac
  .word 0x27a400ac
  .word 0x26050004
  .word 0x26060010
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0xc6020004
  .word 0xc6010008
  .word 0xc600000c
  .word 0xe7a200a0
  .word 0xe7a100a4
  .word 0xe7a000a8
  .word 0x27a400c8
  .word 0x2605001c
  .word 0x26060028
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a600bc
  .word 0xc602001c
  .word 0xc6010020
  .word 0xc6000024
  .word 0xe7a200bc
  .word 0xe7a100c0
  .word 0xe7a000c4
  .word 0x86020000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x8f82b6fc
  .word 0x24440020
  .word 0x27a500a0
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x24440020
  .word 0x4600a306
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0x1000003c
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x3043ffff
  .word 0x8f84b6fc
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00431021
  .word 0x00021880
  .word 0x8c820b18
  .word 0x00431021
  .word 0x2450020c
  .word 0x27a4006c
  .word 0x26050004
  .word 0x26060010
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0xc6020004
  .word 0xc6010008
  .word 0xc600000c
  .word 0xe7a20060
  .word 0xe7a10064
  .word 0xe7a00068
  .word 0x27a40088
  .word 0x2605001c
  .word 0x26060028
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a6007c
  .word 0xc602001c
  .word 0xc6010020
  .word 0xc6000024
  .word 0xe7a2007c
  .word 0xe7a10080
  .word 0xe7a00084
  .word 0x86020000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x8f82b6fc
  .word 0x24440020
  .word 0x27a50060
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x24440020
  .word 0x4600a306
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0x44806000
  .word 0x8e6400e0
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070040
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0120
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002e7db0
#ifndef PC_BUILD
asm void func_002e7db0(BtlCamera* param_1)
{
  .set noreorder
  .word 0x27bdfed0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080902d
  .word 0x8c8200e0
  .word 0x8c500030
  .word 0x8c420038
  .word 0x8c510030
  .word 0x0200202d
  .word 0x27a50120
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a50110
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc601002c
  .word 0xc600008c
  .word 0x46010102
  .word 0x3c023f00
  .word 0x44820000
  .word 0xc7a30124
  .word 0x44800800
  .word 0x00000000
  .word 0x46030818
  .word 0x4604009c
  .word 0x3c0243e1
  .word 0x44820000
  .word 0x00000000
  .word 0x46001034
  .word 0x45010005
  .word 0x00000000
  .word 0xc7808030
  .word 0x46030818
  .word 0x4604001d
  .word 0xe7a00124
  .word 0xc7a10120
  .word 0xc7a00110
  .word 0x46000801
  .word 0xe7a000e0
  .word 0xc7a10124
  .word 0xc7a00114
  .word 0x46000801
  .word 0xe7a000e4
  .word 0xc7a10128
  .word 0xc7a00118
  .word 0x46000801
  .word 0xe7a000e8
  .word 0x27a400e0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x46000506
  .word 0xc641009c
  .word 0xc7a00120
  .word 0x46000801
  .word 0xe7a00098
  .word 0xc64100a4
  .word 0xc7a00128
  .word 0x46000801
  .word 0xe7a0009c
  .word 0x27a40098
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7808098
  .word 0x46140082
  .word 0xc7a000e0
  .word 0x46020102
  .word 0xe7a400f0
  .word 0xc7a100e4
  .word 0x460208c2
  .word 0xe7a300f4
  .word 0xc7a600e8
  .word 0x46023082
  .word 0xe7a200f8
  .word 0xc7a10110
  .word 0x46012040
  .word 0xe7a100f0
  .word 0xc7a10114
  .word 0x46011840
  .word 0xe7a100f4
  .word 0xc7a10118
  .word 0x46011040
  .word 0xe7a100f8
  .word 0xe7a00090
  .word 0xe7a60094
  .word 0xdfa20110
  .word 0xc7a10118
  .word 0xffa20100
  .word 0xe7a10108
  .word 0xc6210090
  .word 0xc625002c
  .word 0x46050882
  .word 0x3c023fc0
  .word 0x44820800
  .word 0x00000000
  .word 0x46020902
  .word 0xe7a60090
  .word 0x460000c7
  .word 0xe7a30094
  .word 0xc7a20098
  .word 0xc7a1009c
  .word 0x4601181a
  .word 0x44801800
  .word 0x00000000
  .word 0x4602359c
  .word 0xc7b40104
  .word 0xc621008c
  .word 0x46050882
  .word 0x3c023e80
  .word 0x44820800
  .word 0x46141818
  .word 0x4602085c
  .word 0xe7a100d4
  .word 0x4603b034
  .word 0x4501000b
  .word 0x00000000
  .word 0xc7a10100
  .word 0x46011818
  .word 0x4604305c
  .word 0xe7a100d0
  .word 0xc7b50108
  .word 0x46151818
  .word 0x4604001d
  .word 0xe7a000d8
  .word 0x10000009
  .word 0x00000000
  .word 0xc7a10100
  .word 0x46011818
  .word 0x4604305d
  .word 0xe7a100d0
  .word 0xc7b50108
  .word 0x46151818
  .word 0x4604001c
  .word 0xe7a000d8
  .word 0xdfa200e0
  .word 0xc7a000e8
  .word 0xffa200c0
  .word 0xe7a000c8
  .word 0x27a4005c
  .word 0x27a500d0
  .word 0x27a600f0
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a400e0
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a7005c
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a000f0
  .word 0xe7a000a0
  .word 0xc7a000f8
  .word 0xe7a000a4
  .word 0xc7a000d0
  .word 0xe7a000a8
  .word 0xc7a000d8
  .word 0xe7a000ac
  .word 0xc7a00100
  .word 0xe7a000b8
  .word 0xe7b500bc
  .word 0x27a400a0
  .word 0x27a500a8
  .word 0x27a600b8
  .word 0x27a700b0
  .word 0x0c0b47f4
  .word 0x00000000
  .word 0xc6220090
  .word 0xc621002c
  .word 0x460110c2
  .word 0x3c024060
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4603155c
  .word 0xc7a000b0
  .word 0xe7a000d0
  .word 0xe7b400d4
  .word 0xc7a000b4
  .word 0xe7a000d8
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc64000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a8c3
  .word 0x3c0243fa
  .word 0x44820000
  .word 0x00000000
  .word 0x46001834
  .word 0x45000002
  .word 0x00000000
  .word 0x460000c6
  .word 0xc7a200e0
  .word 0x3c024170
  .word 0x44820000
  .word 0x00000000
  .word 0x46001901
  .word 0x46041342
  .word 0xc7a100e4
  .word 0x46040a02
  .word 0xc7a000e8
  .word 0x46040302
  .word 0x44803800
  .word 0x00000000
  .word 0x4607b034
  .word 0x4501000e
  .word 0x00000000
  .word 0xc6250090
  .word 0xc624002c
  .word 0x46042982
  .word 0xc7a500c8
  .word 0xc7a400d0
  .word 0x46043818
  .word 0x4606291d
  .word 0xe7a400d0
  .word 0xc7a500c0
  .word 0xc7a400d8
  .word 0x46043818
  .word 0x4606291c
  .word 0xe7a400d8
  .word 0xc625008c
  .word 0xc624002c
  .word 0x46042942
  .word 0x3c023e80
  .word 0x44822000
  .word 0x44805000
  .word 0x00000000
  .word 0x46145018
  .word 0x460522dc
  .word 0xe7ab00d4
  .word 0xc7a900d0
  .word 0x460d4900
  .word 0xe7a40050
  .word 0x46085900
  .word 0xe7a40054
  .word 0xc7a800d8
  .word 0x460c4100
  .word 0xe7a40058
  .word 0xc7a7005c
  .word 0xc7a60060
  .word 0xc7a50064
  .word 0xc7a40068
  .word 0xe7a70078
  .word 0xe7a6007c
  .word 0xe7a50080
  .word 0xe7a40084
  .word 0x3c0242aa
  .word 0x44822000
  .word 0x00000000
  .word 0x460320c0
  .word 0x46095018
  .word 0x4603109c
  .word 0xe7a2006c
  .word 0x460b5018
  .word 0x4603085c
  .word 0xe7a10070
  .word 0x46085018
  .word 0x4603001c
  .word 0xe7a00074
  .word 0xc7a10054
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00054
  .word 0xc7a10070
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00070
  .word 0x3c024248
  .word 0x44826000
  .word 0x8e4400e0
  .word 0x26050004
  .word 0x26260004
  .word 0x24070003
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50050
  .word 0x27a6006c
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x3c024000
  .word 0x44826000
  .word 0x0240202d
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0130
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002e82b0
void func_002e82b0(BtlCamera* camera)
{
  typedef struct {
    RwV3d startPosition;
    f32 startTransform[4];
    RwV3d endPosition;
    f32 endTransform[4];
  } BtlVoicePlayback;
  BtlVoiceCameraWork* work;
  u16 modeFlags;

  work = (BtlVoiceCameraWork*)camera;
  work->mode = (u16)FUN_002a7830();
  modeFlags = (u16)FUN_002d1600((BtlTarget*)((u8*)work->action + 0x38));
  work->unit = NULL;
  if ((work->action->unk_1a & 0x10) != 0) {
    switch (work->action->unit->charId) {
    case 0xe9:
    case 0xea:
    case 0xeb:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
    case 0xf0:
      FUN_002880e0((u32)(uintptr_t)work->action->unit->personaUnit, 0);
      work->unit = work->action->unit->personaUnit;
      work->unk_124 = 1;
      break;
    default:
      FUN_002880e0((u32)(uintptr_t)work->action->unit->personaUnit, 1);
    }
  }

  switch (work->mode) {
  case 1:
    if ((work->action->unk_1a & 0x10) == 0) {
      func_002e4a40_camera(camera);
    }
    else {
      FUN_002ac540(camera);
    }
    break;
  case 2:
    if ((modeFlags & 2) == 0) {
      func_002e7db0(camera);
      return;
    }
  case 4:
    if ((modeFlags & 2) == 0) {
      if ((FUN_0030c3a0(work->action->unit->datUnit) != 0) &&
          (FUN_00289f40(work->action) != 0)) {
        func_002e6a20(camera, 0.75f);
      }
      else {
        func_002e7db0(camera);
      }
      break;
    }
  case 3:
  case 5:
    if ((modeFlags & 2) != 0) {
      BtlVoicePlayback playbackA;
      u32 randomIndex;
      u8* voiceData;
      u8* voiceBase;

      randomIndex = (u16)FUN_002ffbc0(2);
      voiceBase = (u8 *)(*(int *)(iGpffffb6fc + 0xb18));
      randomIndex = randomIndex * 0x34;
      voiceData = voiceBase + randomIndex + 0x1a4;
      btlVoicePlayCameraVoice(voiceData, playbackA.startTransform,
                              playbackA.endTransform, &playbackA.startPosition,
                              &playbackA.endPosition);
      FUN_002a3e80(0.0f, (u8*)work->action, 0, 0, 0x40);
      break;
    }
    goto cameraVoiceState6;
  case 6:
cameraVoiceState6:
    if ((work->action->unk_1a & 1) != 0) {
      if (((u8*)work->action->unit)[0xa2] == 0) {
        BtlVoicePlayback playbackB;
        u8* voiceData;

        voiceData = (u8*)(uintptr_t)(*(u32*)((u8*)DAT_007ce3ec + 0xb18)) +
                    0x3ac;
        btlVoicePlayCameraVoice(voiceData, playbackB.startTransform,
                                playbackB.endTransform,
                                &playbackB.startPosition,
                                &playbackB.endPosition);
      }
      else {
        BtlVoicePlayback playbackC;
        u32 randomIndex;
        u8* voiceData;
        u8* voiceBase;

        randomIndex = (u16)FUN_002ffbc0(2);
        voiceBase = (u8 *)(*(int *)(iGpffffb6fc + 0xb18));
        randomIndex = randomIndex * 0x34;
        voiceData = voiceBase + randomIndex + 0x20c;
        btlVoicePlayCameraVoice(voiceData, playbackC.startTransform,
                                playbackC.endTransform,
                                &playbackC.startPosition,
                                &playbackC.endPosition);
      }
      FUN_002a3e80(0.0f, (u8*)work->action, 0, 0, 0x40);
    }
    break;
  }
}

// FUN_002e87b0
void func_002e87b0(BtlCamera* camera)
{
    typedef struct CameraVoiceWork
    {
        u8 pad_00[0xe0];
        BtlAction* action;
        u8 pad_e4[0x3c];
        u32 unit;
        u16 mode;
    } CameraVoiceWork;
    CameraVoiceWork* work;

    work = (CameraVoiceWork*)camera;
    if (work->unit != 0 &&
        work->action != NULL &&
        (work->action->unk_1a & 1) != 0 &&
        FUN_002a3750(camera, work->unit) != 0)
    {
        FUN_002880e0(work->unit, work->mode);
    }
}

// FUN_002e8820
void func_002e8820(BtlCamera *camera)
{
    struct {
        f32 start[7];
        VoiceVector position;
        f32 end[6];
    } work;
    BtlUnit *unit;
    f32 *voiceData;
    u16 voiceVariant;
    u32 useCurrentPosition;
    u16 mode;

    mode = *(u16 *)(iGpffffb6fc + 0x104);
    switch (mode) {
    case 0x1d:
    case 0x22:
    case 2:
        useCurrentPosition = 0;
        break;
    default:
        useCurrentPosition = 1;
        break;
    }

    voiceVariant = FUN_002f88c0();
    for (unit = *(BtlUnit **)(iGpffffb6fc + 0x158); unit != 0; unit = unit->next) {
        if ((unit->flags3 & 8) != 0 && unit->datUnit != 0 &&
            FUN_00300580(unit->datUnit, 0x100000) != 0) {
            break;
        }
    }

    FUN_002a4470(work.start, (f32 *)&camera->pos);
    if (unit == 0) {
        voiceData = (f32 *)(*(int *)(iGpffffb6fc + 0xb18) +
                            voiceVariant * 0x18 + 0x274);
        FUN_002a4690(work.end, voiceData, voiceData + 3, &D_00697880);
        work.position = *(VoiceVector *)voiceData;
    } else {
        voiceData = (f32 *)(*(int *)(iGpffffb6fc + 0xb18) +
                            voiceVariant * 0x18 + 0x2a4);
        FUN_002a4690(work.end, voiceData, voiceData + 3, &D_00697880);
        work.position = *(VoiceVector *)voiceData;
    }

    if (useCurrentPosition) {
        FUN_00351bb0(8);
        FUN_002a3e80(0.0f, (u8 *)camera->action, 0, 0, 0x40);
        FUN_002a2170(camera, (f32 *)&work.position);
    } else {
        FUN_002a2290(camera, work.start, (f32 *)&work.position, 1);
        FUN_002a3110(camera, 1.25f);
    }
}

// FUN_002e8a40
void func_002e8a40(BtlCamera* camera)
{
    struct {
        f32 start[7];
        VoiceVector position;
        f32 end[6];
    } work;
    f32* voiceData;
    u16 voiceVariant;
    u32 useCurrentPosition;
    u16 unitType;
    u16 mode;

    mode = *(u16*)(iGpffffb6fc + 0x104);
    switch (mode) {
    case 0x1c:
    case 0x22:
    case 2:
        useCurrentPosition = 0;
        break;
    default:
        useCurrentPosition = 1;
        break;
    }

    voiceVariant = FUN_002f88c0();
    unitType = FUN_002c09f0((u8*)camera->action + 0x88);
    FUN_002a4470(work.start, (f32*)&camera->pos);

    if (unitType == 2) {
        voiceData = (f32*)(*(int*)(iGpffffb6fc + 0xb18) +
                           voiceVariant * 0x18 + 0x2d4);
        FUN_002a4690(work.end, voiceData, voiceData + 3, &D_00697880);
        work.position = *(VoiceVector*)voiceData;
    } else if (unitType == 1) {
        voiceData = (f32*)(*(int*)(iGpffffb6fc + 0xb18) +
                           voiceVariant * 0x18 + 0x304);
        FUN_002a4690(work.end, voiceData, voiceData + 3, &D_00697880);
        work.position = *(VoiceVector*)voiceData;
    } else {
        voiceData = (f32*)(*(int*)(iGpffffb6fc + 0xb18) +
                           voiceVariant * 0x18 + 0x334);
        FUN_002a4690(work.end, voiceData, voiceData + 3, &D_00697880);
        work.position = *(VoiceVector*)voiceData;
    }

    if (useCurrentPosition) {
        FUN_002a3e80(0.0f, (u8*)camera->action, 0, 0, 0x40);
        FUN_002a2170(camera, (f32*)&work.position);
    } else {
        FUN_002a2290(camera, work.start, (f32*)&work.position, 1);
        FUN_002a3110(camera, 1.0f);
    }
}

// FUN_002e8c80
void func_002e8c80(void)
{
}

// FUN_002e8c90
void func_002e8c90(int param_1)
{
  f32 *voiceData;
  struct {
    VoiceVector position;
    u8 transform[20];
  } work;

  voiceData = (f32 *)(*(int *)(iGpffffb6fc + 0xb18) + 0x37c);
  FUN_002a4690(work.transform, voiceData, voiceData + 3, &D_00697880);
  work.position = *(VoiceVector *)voiceData;
  FUN_002a2170((void *)(iGpffffb6fc + 0x20), (f32 *)&work.position);
  FUN_002a44b0((f32 *)(param_1 + 0x9c), (f32 *)&work.position);
}

// FUN_002e8d20
void func_002e8d20(int param_1)

{
  FUN_002b4f40(param_1);
  return;
}

// FUN_002e8d40
void func_002e8d40(void)

{
  FUN_002b4db0(uGpffff8108);
  return;
}

// FUN_002e8d70
void func_002e8d70(void *param_1)
{
  void *action;
  f32 *voiceData;
  struct {
    f32 start[7];
    VoiceVector position;
    f32 end[6];
  } work;

  action = (void *)param_1;
  FUN_002a4470(work.start, (f32 *)((u8 *)param_1 + 0x9c));
  voiceData = (f32 *)(*(int *)(iGpffffb6fc + 0xb18) + 0x364);
  FUN_002a4690(work.end, voiceData, voiceData + 3, &D_00697880);
  work.position = *(VoiceVector *)voiceData;
  FUN_002a2290(action, work.start, (f32 *)&work.position, 1);
  FUN_002a3110(action, 0.75f);
}

// FUN_002e8e20
void func_002e8e20(void)
{
  struct {
    VoiceVector startPosition;
    f32 start[4];
    VoiceVector endPosition;
    f32 end[6];
  } work;
  u32 characterId;
  u8 *voiceData;
  u8 *base;
  float duration;

  characterId = (u16)FUN_002ffbc0(2);
  base = (u8 *)(*(int *)(iGpffffb6fc + 0xb18));
  characterId = characterId * 0x34;
  voiceData = base + characterId + 0x20c;
  FUN_002a4690(work.start, (f32 *)(voiceData + 4),
               (f32 *)(voiceData + 0x10), &D_00697880);
  work.startPosition = *(VoiceVector *)(voiceData + 4);
  FUN_002a4690(work.end, (f32 *)(voiceData + 0x1c),
               (f32 *)(voiceData + 0x28), &D_00697880);
  work.endPosition = *(VoiceVector *)(voiceData + 0x1c);
  duration = (float)*(s16 *)voiceData / 30.0f;
  FUN_002a2290((void *)(iGpffffb6fc + 0x20), (f32 *)&work.startPosition,
               (f32 *)&work.endPosition, 1);
  FUN_002a3110((void *)(iGpffffb6fc + 0x20), duration);
}

// FUN_002e8f40
void func_002e8f40(void)
{
  struct {
    VoiceVector startPosition;
    f32 start[4];
    VoiceVector endPosition;
    f32 end[6];
  } work;
  u32 characterId;
  u8 *voiceData;
  u8 *base;
  float duration;
  characterId = (u16)FUN_002ffbc0(2);
  base = (u8 *)(*(int *)(iGpffffb6fc + 0xb18));
  characterId = characterId * 0x34;
  voiceData = base + characterId + 0x1a4;
  FUN_002a4690(work.start, (f32 *)(voiceData + 4),
               (f32 *)(voiceData + 0x10), &D_00697880);
  work.startPosition = *(VoiceVector *)(voiceData + 4);
  FUN_002a4690(work.end, (f32 *)(voiceData + 0x1c),
               (f32 *)(voiceData + 0x28), &D_00697880);
  work.endPosition = *(VoiceVector *)(voiceData + 0x1c);
  duration = (float)*(s16 *)voiceData / 30.0f;
  FUN_002a2290((void *)(iGpffffb6fc + 0x20), (f32 *)&work.startPosition,
               (f32 *)&work.endPosition, 1);
  FUN_002a3110((void *)(iGpffffb6fc + 0x20), duration);
}

// FUN_002e9060
void func_002e9060(void)
{
  struct {
    VoiceVector startPosition;
    f32 start[4];
    VoiceVector endPosition;
    f32 end[6];
  } work;
  float duration;

  FUN_002a4690(work.start, DAT_00699244, DAT_00699250, &D_00697880);
  work.startPosition = *(VoiceVector *)DAT_00699244;
  FUN_002a4690(work.end, DAT_0069925c, DAT_00699268, &D_00697880);
  work.endPosition = *(VoiceVector *)DAT_0069925c;
  duration = (float)DAT_00699240[0] / 30.0f;
  FUN_002a2290((void *)(iGpffffb6fc + 0x20), (f32 *)&work.startPosition, (f32 *)&work.endPosition, 1);
  FUN_002a3110((void *)(iGpffffb6fc + 0x20), duration);
}

// FUN_002e9170
void func_002e9170(void)
{
    VoiceXZ positions[2] = {{0.0f, -250.0f}, {200.0f, 150.0f}};
    RwV3d position;
    BtlUnit* primaryUnit;
    BtlUnit* secondaryUnit;
    s16 index;
    VoiceXZ* selected;

    position.y = 0.0f;
    for (primaryUnit = gBtl->unitLists[UNIT_GENUS_PC].head;
         primaryUnit != NULL; primaryUnit = primaryUnit->next) {
        if (primaryUnit->charId == 1) {
            position.x = -300.0f;
            position.z = 200.0f;
            primaryUnit->unk_9f0 = 0;
        } else {
            position.x = 0.0f;
            position.z = 0.0f;
        }
        FUN_002d2280(&primaryUnit->unk_94, &primaryUnit->unk_96,
                     (f32*)&position);
        btlUnitSetPos(primaryUnit, &position);
    }

    index = 0;
    for (secondaryUnit = gBtl->unitLists[UNIT_GENUS_EC].head;
         secondaryUnit != NULL; secondaryUnit = secondaryUnit->next) {
        selected = &positions[index];
        position.x = selected->x;
        position.z = selected->z;
        index++;
        FUN_002d2280(&secondaryUnit->unk_94, &secondaryUnit->unk_96,
                     (f32*)&position);
        btlUnitSetPos(secondaryUnit, &position);
    }
}

// FUN_002e92c0
void func_002e92c0(void)

{
  RwV3d position;
  u16 sVar1;
  int iVar2;

  position.y = 0.0f;
  for (iVar2 = *(int *)(iGpffffb6fc + 0x150); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xa34)) {
    sVar1 = *(u16 *)(iVar2 + 0xa4);
    switch (sVar1) {
    case 1:
      position.x = -250.0f;
      position.z = 500.0f;
      *(u8 *)(iVar2 + 0x9f0) = 0;
      break;
    case 2:
      position.x = 250.0f;
      position.z = 500.0f;
      *(u8 *)(iVar2 + 0x9f0) = 2;
      break;
    case 5:
      position.x = 0.0f;
      position.z = 400.0f;
      *(u8 *)(iVar2 + 0x9f0) = 1;
      break;
    default:
      break;
    }
    FUN_002d2280((s16*)(iVar2 + 0x94),(s16*)(iVar2 + 0x96),&position.x);
    FUN_0027f650(iVar2,&position.x);
  }
  for (iVar2 = *(int *)(iGpffffb6fc + 0x158); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xa34)) {
    sVar1 = *(u16 *)(iVar2 + 0xa4);
    switch (sVar1) {
    case 0x100:
      position.x = 0.0f;
      position.z = -400.0f;
      break;
    case 0x113:
      position.x = -200.0f;
      position.z = 100.0f;
      break;
    case 0x114:
      position.x = 200.0f;
      position.z = 100.0f;
      break;
    default:
      break;
    }
    FUN_002d2280((s16*)(iVar2 + 0x94),(s16*)(iVar2 + 0x96),&position.x);
    FUN_0027f650(iVar2,&position.x);
  }
  return;
}

#pragma opt_loop_invariants on
// FUN_002e9450
void func_002e9450(void)
{
  BtlUnit* source;
  BtlUnit* target;
  void* object;
  BtlPacket* packet;
  BtlUnit* unit;
  BtlUnit* enemy;
  BtlUnit* arg0;
  BtlUnit* arg1;
  BtlUnit* arg2;
  u32 raw;

  object = (void*)FUN_002b8f90_u32_voice(0);
  func_002b90d0(object, (void*)FUN_002f87e0_u32_voice(1));
  source = NULL;
  arg0 = NULL;
  arg1 = NULL;
  arg2 = NULL;
  target = NULL;
  for (unit = gBtl->unitLists[UNIT_GENUS_PC].head;
       unit != NULL; unit = unit->next) {
    switch (unit->charId) {
    case 1:
      source = unit;
      break;
    case 2:
      arg0 = unit;
      break;
    case 5:
      arg1 = unit;
      break;
    default:
      arg2 = unit;
      break;
    }
  }
  for (enemy = gBtl->unitLists[UNIT_GENUS_EC].head;
       enemy != NULL; enemy = enemy->next) {
    switch (enemy->charId) {
    case 0x100:
      target = enemy;
      break;
    }
  }
  raw = FUN_002bc950_u32_voice(arg0, arg1, arg2);
  FUN_0027ed20_voice(raw, 1);
  packet = FUN_002baf90_packet_voice(object, source, target, 0, 0x200);
  FUN_0027ed20_voice((u32)packet, 2);
  raw = FUN_002bc950_u32_voice(0, 0, 0);
  *(u8*)raw = 4;
  *(u64*)((u8*)raw + 8) = *(u64*)((u8*)packet + 0x58);
  FUN_0027ed20_voice(raw, 1);
  func_002b9030(object);
}
#pragma opt_loop_invariants off

/* Removing this loses FUN_002e95f0 (MATCH nd0 -> MISMATCH nd14) - measured W161. */
#pragma opt_loop_invariants on
// FUN_002e95f0
void func_002e95f0(void)
{
    BtlUnit* target;
    void* object;
    BtlPacket* parent;
    BtlUnit* unit;
    BtlPacket* packet;

    gBtl->flags &= ~0x02000000;
    object = func_002b8f90(0);
    func_002b90d0(object, func_002f87e0(2));
    target = NULL;
    for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
         unit != NULL; unit = unit->next) {
        switch (unit->charId) {
        case 0x100:
            target = unit;
            break;
        }
    }
    packet = FUN_002dd690_packet_voice(3, DAT_00699c10);
    btlPacketRegister(packet, 1);
    parent = FUN_00284200_packet_voice(1.0f, target, 0x12, 0, 2);
    parent->preUpdateDelay = 3;
    btlPacketRegister(parent, 1);
    packet = FUN_002b8d60_packet_voice(3, 0xfff);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    btlPacketRegister(packet, 1);
    packet = FUN_0027fe90_packet_voice(target, NULL, D_006978B0, NULL);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    btlPacketRegister(packet, 1);
    packet = FUN_002a3b40_packet_voice(NULL, 1);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    btlPacketRegister(packet, 0);
    packet = FUN_002baf90_packet_voice(object, target, target, 0, 0x200);
    btlPacketRegister(packet, 2);
    func_002b9030(object);
}
#pragma opt_loop_invariants off


// FUN_002e97e0
int func_002e97e0(void)
{
  /* Caller-specific return width: retail consumes only the s32 result in this path. */
  extern s32 FUN_0030b5a0();
  BtlUnit* enemy;
  BtlAction* action;
  s32 found;
  BtlUnit* unit;
  BtlPacket* packet;
  u32 data[8];

  found = 0;
  for (enemy = gBtl->unitLists[UNIT_GENUS_EC].head;
       enemy != NULL; enemy = enemy->next) {
    if (enemy->charId == 0x100 &&
        FUN_0030b5a0(enemy->datUnit, 0) != 0) {
      found = 1;
      break;
    }
  }
  if (found != 0) {
    FUN_002d5dc0(data);
    data[0] = 0xfff00001;
    for (action = gBtl->actionList.tail;
         action != NULL; action = action->prev) {
      if ((action->unk_1a & 1) != 0) {
        unit = action->unit;
        if (unit->genus == UNIT_GENUS_EC &&
            unit->charId != 0x100 &&
            FUN_0030b5a0(unit->datUnit, 0) == 0) {
          packet = FUN_002d7e20_packet_voice(action, action, data, 1, 1);
          FUN_0027ed20_voice((u32)packet, 1);
          packet = FUN_00284200_packet_voice(1.0f, unit, 2, 0, 0);
          FUN_0027ed20_voice((u32)packet, 1);
        }
      }
    }
  }
  return found;
}

// FUN_002e9950
void func_002e9950(void)
{
  u16 sVar1;
  int iVar2;
  RwV3d position;
  
  position.y = 0.0f;
  for (iVar2 = *(int *)(iGpffffb6fc_ptr + 0x150); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xa34)) {
    sVar1 = *(u16 *)(iVar2 + 0xa4);
    switch (sVar1) {
    case 1:
      position.x = -300.0f;
      position.z = 250.0f;
      *(u8 *)(iVar2 + 0x9f0) = 0;
      break;
    case 5:
      position.x = 300.0f;
      position.z = 250.0f;
      *(u8 *)(iVar2 + 0x9f0) = 2;
      break;
    case 7:
      position.x = 0.0f;
      position.z = 350.0f;
      *(u8 *)(iVar2 + 0x9f0) = 1;
      break;
    }
    FUN_002d2280((s16*)(iVar2 + 0x94),(s16*)(iVar2 + 0x96),(f32*)&position);
    FUN_0027f650(iVar2,&position);
  }
  for (iVar2 = *(int *)(iGpffffb6fc_ptr + 0x158); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xa34)) {
    sVar1 = *(u16 *)(iVar2 + 0xa4);
    switch (sVar1) {
    case 0x101:
      position.x = -250.0f;
      position.z = -350.0f;
      break;
    case 0x102:
      position.x = 250.0f;
      position.z = -350.0f;
      break;
    }
    FUN_002d2280((s16*)(iVar2 + 0x94),(s16*)(iVar2 + 0x96),(f32*)&position);
    FUN_0027f650(iVar2,&position);
  }
}

#pragma opt_loop_invariants on
// FUN_002e9ac0
void func_002e9ac0(void)
{
  BtlUnit* target;
  void* object;
  BtlPacket* packet;
  BtlUnit* unit;
  BtlUnit* arg0;
  BtlUnit* arg1;
  BtlUnit* arg2;
  u32 raw;

  object = (void*)FUN_002b8f90_u32_voice(0);
  func_002b90d0(object, (void*)FUN_002f87e0_u32_voice(1));
  target = NULL;
  arg0 = NULL;
  arg1 = NULL;
  arg2 = NULL;
  for (unit = gBtl->unitLists[UNIT_GENUS_PC].head;
       unit != NULL; unit = unit->next) {
    switch (unit->charId) {
    case 1:
      target = unit;
      break;
    case 5:
      arg0 = unit;
      break;
    case 7:
      arg1 = unit;
      break;
    default:
      arg2 = unit;
      break;
    }
  }
  raw = FUN_002bc950_u32_voice(arg0, arg1, arg2);
  FUN_0027ed20_voice(raw, 1);
  packet = FUN_002baf90_packet_voice(object, target, target, 0, 0x200);
  FUN_0027ed20_voice((u32)packet, 2);
  raw = FUN_002bc950_u32_voice(0, 0, 0);
  *(u8*)raw = 4;
  *(u64*)((u8*)raw + 8) = *(u64*)((u8*)packet + 0x58);
  FUN_0027ed20_voice(raw, 1);
  func_002b9030(object);
}
#pragma opt_loop_invariants off


// FUN_002e9c20
void func_002e9c20(BtlAction* action)
{
    BtlUnit* unit;
    void* object;
    BtlPacket* parent;
    BtlPacket* packet;

    *(u32*)((u8*)gBtl + 0xc) &= ~0x02000000;
    *(u32*)((u8*)gBtl + 0xc) |= 0x00080000;
    unit = action->unit;
    object = func_002b8f90(0);
    switch (unit->charId) {
    case 0x101:
        func_002b90d0(object, func_002f87e0(2));
        packet = FUN_002dd690_packet_voice(
            3, (const char*)(DAT_006a0000 - 0x6398));
        btlPacketRegister(packet, 1);
        break;
    case 0x102:
        func_002b90d0(object, func_002f87e0(3));
        packet = FUN_002dd690_packet_voice(
            3, (const char*)(DAT_006a0000 - 0x63a8));
        btlPacketRegister(packet, 1);
        break;
    }
    parent = FUN_00284200_packet_voice(1.0f, unit, 0x12, 0, 2);
    parent->preUpdateDelay = 2;
    parent->actionUID = action->uid;
    btlPacketRegister(parent, 1);
    packet = FUN_002b8d60_packet_voice(3, 0xfff);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    packet->actionUID = action->uid;
    btlPacketRegister(packet, 1);
    packet = FUN_0027fe90_packet_voice(unit, NULL, D_006978B0, NULL);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    packet->actionUID = action->uid;
    btlPacketRegister(packet, 1);
    packet = FUN_002a3b40_packet_voice(NULL, 1);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    packet->actionUID = action->uid;
    btlPacketRegister(packet, 0);
    packet = FUN_002baf90_packet_voice(object, unit, unit, 0, 0x200);
    packet->actionUID = action->uid;
    btlPacketRegister(packet, 2);
    if (FUN_002d4e10_u16_voice(2, 0x80000) == 1) {
        packet = FUN_002db890_packet_voice();
        packet->preUpdateDelay = 0x2d;
        btlPacketRegister(packet, 1);
        packet = FUN_002db800_packet_voice(0x20, 0x17);
        packet->preUpdateDelay = 0x2d;
        btlPacketRegister(packet, 1);
    }
    *(u32*)((u8*)gBtl + 0xc) |= 0x00400000;
    *(u16*)((u8*)gBtl + 0x18) |= 7;
    func_002b9030(object);
}

// FUN_002e9f10
u32 func_002e9f10(BtlAction* action)
{
    BtlPacket* packet;

    if (action != btlActionCurrent())
    {
        if ((action->unit->flags3 & 0x10) != 0)
        {
            return 1;
        }
    }
    else
    {
        action->unit->flags3 &= ~0x10;
    }

    packet = btlPacketFindFirstByActionUID(action->uid, BTL_UIDMAX);
    if (packet == NULL)
    {
        gBtl->flags &= ~0x80000;
        FUN_002d7890(action, 0);
        FUN_0029a320(action);
        gBtl->flags |= 0x2000000;

        packet = FUN_0029fa50(0x10);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        packet = FUN_002a1080(0x10, 4);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        packet = FUN_002a16c0(0x10);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        return 0;
    }

    return 1;
}

// FUN_002ea060
void func_002ea060(void)
{
  int iVar1;
  int iVar2;
  u16 kind;
  s16 index;
  s16 slotIndex;
  f32 positions[4];
  f32* point;
  RwV3d position;
  VoiceSlotPair slots;
  *(VoicePositions *)positions = *(VoicePositions *)DAT_00699c80_abs;
  slots = *(VoiceSlotPair *)&gp0xffff9c98;
  index = 0;
  position.y = 0.0f;
  for (iVar1 = *(int *)(iGpffffb6fc + 0x150); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xa34)) {
    kind = *(u16 *)(iVar1 + 0xa4);
    if (kind == 1) {
      position.x = 150.0f;
      position.z = 450.0f;
      *(u8 *)(iVar1 + 0x9f0) = 2;
    }
    else if (kind == 2) {
      position.x = -150.0f;
      position.z = 450.0f;
      *(u8 *)(iVar1 + 0x9f0) = 1;
    }
    else {
      slotIndex = index;
      point = positions + slotIndex * 2;
      position.x = point[0];
      position.z = point[1];
      *(u8 *)(iVar1 + 0x9f0) = slots.values[slotIndex];
      index++;
    }
    FUN_002d2280((s16*)(iVar1 + 0x94),(s16*)(iVar1 + 0x96),(f32*)&position);
    FUN_0027f650(iVar1,&position);
  }
  for (iVar2 = *(int *)(iGpffffb6fc + 0x158); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xa34)) {
    kind = *(u16 *)(iVar2 + 0xa4);
    switch (kind) {
    case 0x103:
      position.x = 0.0f;
      position.z = -300.0f;
      break;
    }
    FUN_002d2280((s16*)(iVar2 + 0x94),(s16*)(iVar2 + 0x96),(f32*)&position);
    FUN_0027f650(iVar2,&position);
  }
}

#pragma opt_loop_invariants on
// FUN_002ea210
void func_002ea210(void)
{
    BtlUnit* target;
    void* object;
    BtlPacket* parent;
    BtlUnit* unit;
    BtlPacket* packet;

    gBtl->flags &= ~0x02000000;
    object = func_002b8f90(0);
    func_002b90d0(object, func_002f87e0(2));
    target = NULL;
    for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
         unit != NULL; unit = unit->next) {
        switch (unit->charId) {
        case 0x103:
            target = unit;
            break;
        }
    }
    packet = FUN_002dd690_packet_voice(3, DAT_00699cb0);
    btlPacketRegister(packet, 1);
    parent = FUN_00284200_packet_voice(1.0f, target, 0x12, 0, 2);
    parent->preUpdateDelay = 3;
    btlPacketRegister(parent, 1);
    packet = FUN_002b8d60_packet_voice(3, 0xfff);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    btlPacketRegister(packet, 1);
    packet = FUN_0027fe90_packet_voice(target, NULL, D_006978B0, NULL);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    btlPacketRegister(packet, 1);
    packet = FUN_002a3b40_packet_voice(NULL, 1);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    btlPacketRegister(packet, 0);
    packet = FUN_002baf90_packet_voice(object, target, target, 0, 0x200);
    btlPacketRegister(packet, 2);
    func_002b9030(object);
}
#pragma opt_loop_invariants off


// FUN_002ea400
void func_002ea400(void)
{
  u32 uVar1;
  u32 uVar2;
  u32 *puVar6;
  u32 *puVar5;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int sVar7;
  u32 auStack_40030 [49158];
  u16 auStack_10018 [32748];
  u32 auStack_30 [6];
  union {
    u32 raw[3];
    f32 vec[3];
  } uStack_10;
  s16 auStack_18[3];

  puVar6 = (u32*)DAT_00699cc0;
  puVar5 = auStack_30;
  iVar5 = 3;
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    iVar5 = iVar5 + -1;
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
  } while (0 < iVar5);
  *(VoiceSlots *)auStack_18 = *(VoiceSlots *)&uGpffff9ca0;
  sVar7 = 0;
  uStack_10.raw[1] = 0;
  for (iVar4 = *(int *)(iGpffffb6fc + 0x150); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xa34)) {
    if (*(u16 *)(iVar4 + 0xa4) == 1) {
      uStack_10.raw[0] = 0x43160000;
      uStack_10.raw[2] = 0x43e10000;
      *(u8 *)(iVar4 + 0x9f0) = 2;
    }
    else {
      uStack_10.vec[0] = *(f32 *)(auStack_30 + ((short)sVar7 * 2));
      uStack_10.vec[2] = *(f32 *)(auStack_30 + ((short)sVar7 * 2) + 1);
      *(char *)(iVar4 + 0x9f0) = (char)auStack_18[(short)sVar7];
      sVar7 = (short)((int)sVar7 + 1);
    }
    FUN_002d2280((s16*)(iVar4 + 0x94),(s16*)(iVar4 + 0x96),(f32*)&uStack_10);
    FUN_0027f650(iVar4,&uStack_10);
  }
  for (iVar6 = *(int *)(iGpffffb6fc + 0x158); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xa34)) {
    switch (*(u16 *)(iVar6 + 0xa4)) {
    case 0x104:
      uStack_10.raw[0] = 0;
      uStack_10.raw[2] = 0xc3960000;
      break;
    }
    FUN_002d2280((s16*)(iVar6 + 0x94),(s16*)(iVar6 + 0x96),(f32*)&uStack_10);
    FUN_0027f650(iVar6,&uStack_10);
  }
  return;
}

#pragma opt_loop_invariants on
// FUN_002ea590
void func_002ea590(void)
{
    BtlUnit* target;
    void* object;
    BtlPacket* parent;
    BtlUnit* unit;
    BtlPacket* packet;

    gBtl->flags &= ~0x02000000;
    object = func_002b8f90(0);
    func_002b90d0(object, func_002f87e0(2));
    target = NULL;
    for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
         unit != NULL; unit = unit->next) {
        switch (unit->charId) {
        case 0x104:
            target = unit;
            break;
        }
    }
    packet = FUN_002dd690_packet_voice(3, DAT_00699d00);
    btlPacketRegister(packet, 1);
    parent = FUN_00284200_packet_voice(1.0f, target, 0x12, 0, 2);
    parent->preUpdateDelay = 3;
    btlPacketRegister(parent, 1);
    packet = FUN_002b8d60_packet_voice(3, 0xfff);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    btlPacketRegister(packet, 1);
    packet = FUN_0027fe90_packet_voice(target, NULL, D_006978B0, NULL);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    btlPacketRegister(packet, 1);
    packet = FUN_002a3b40_packet_voice(NULL, 1);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    btlPacketRegister(packet, 0);
    packet = FUN_002baf90_packet_voice(object, target, target, 0, 0x200);
    btlPacketRegister(packet, 2);
    func_002b9030(object);
}
#pragma opt_loop_invariants off


// FUN_002ea780
void func_002ea780(BtlAction* action)
{
    BtlUnit* unit;

    if ((action->unk_1a & 1) != 0)
    {
        unit = action->unit;
        if (unit->genus == UNIT_GENUS_EC)
        {
            switch (unit->charId)
            {
            case 0x115:
                unit->datUnit->flags |= 0x40;
                unit->flags3 |= 0x400;
                return;
            case 0x105:
                unit->flags3 |= 0x400;
            case 0x106:
                unit->flags3 |= 0x100;
                unit->flags3 |= 0x200;
                unit->flags3 |= 0x40;
                unit->flags3 &= ~8;
                action->unk_1a &= ~8;
                FUN_0029a320(action);
                break;
            default:
                return;
            }
        }
    }
}

// FUN_002ea860
void func_002ea860(void)
{
  typedef struct {
    u32 data[6];
    s16 ids[4];
    RwV3d position;
  } VoicePositionWork;
  typedef struct {
    s16 a;
    s16 b;
    s16 c;
  } VoiceIds;
  VoicePositionWork work;
  u32 uVar1;
  u32 uVar2;
  int iVar4;
  u32 *puVar6;
  u32 *puVar5;
  int copyCount;
  int iVar3;
  s16 sVar7;

  puVar6 = (u32*)DAT_00699d10;
  puVar5 = work.data;
  copyCount = 3;
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    copyCount = copyCount + -1;
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
  } while (0 < copyCount);
  *(VoiceIds *)&work.ids[0] = *(VoiceIds *)&uGpffff9ca8;
  sVar7 = 0;
  work.position.y = 0.0f;
  for (iVar4 = *(int *)(DAT_007ce3ec + 0x150); iVar4 != 0;
       iVar4 = *(int *)(iVar4 + 0xa34)) {
    if (*(u16 *)(iVar4 + 0xa4) == 1) {
      work.position.x = -150.0f;
      work.position.z = 450.0f;
      *(u8 *)(iVar4 + 0x9f0) = 1;
    }
    else {
      iVar3 = (int)sVar7;
      work.position.x = *(f32*)((u8*)&work + iVar3 * 8);
      work.position.z = *(f32*)((u8*)&work + iVar3 * 8 + 4);
      *(u8 *)(iVar4 + 0x9f0) = (u8)work.ids[iVar3];
      sVar7++;
    }
    FUN_002d2280((s16*)(iVar4 + 0x94), (s16*)(iVar4 + 0x96), &work.position.x);
    FUN_0027f650(iVar4, &work.position.x);
  }
  for (iVar3 = *(int *)(DAT_007ce3ec + 0x158); iVar3 != 0;
       iVar3 = *(int *)(iVar3 + 0xa34)) {
    switch (*(u16 *)(iVar3 + 0xa4)) {
    case 0x105:
      work.position.x = -300.0f;
      work.position.z = -400.0f;
      break;
    case 0x106:
      work.position.x = 300.0f;
      work.position.z = -500.0f;
      break;
    case 0x115:
      work.position.x = 0.0f;
      work.position.z = -400.0f;
      break;
    default:
      break;
    }
    FUN_002d2280((s16*)(iVar3 + 0x94), (s16*)(iVar3 + 0x96), &work.position.x);
    FUN_0027f650(iVar3, &work.position.x);
  }
}

#pragma opt_propagation off
// FUN_002eaa40
void func_002eaa40(void)
{
    BtlUnit* unit;
    BtlUnit* selected;
    Model* model105;
    Model* model106;
    s8 voiceValue;

    selected = 0;
    model105 = 0;
    model106 = 0;
    for (unit = *(BtlUnit**)(iGpffffb6fc + 0x158);
         unit != 0;
         unit = unit->next)
    {
        if (unit->charId == 0x115)
        {
            goto char115;
        }
        if (unit->charId == 0x106)
        {
            goto char106;
        }
        switch (unit->charId)
        {
        case 0x105:
            goto char105;
        default:
            goto advance;
        }

char105:
        model105 = unit->mdl;
        FUN_002d3fe0(unit);
        goto advance;

char106:
        model106 = unit->mdl;
        FUN_002d3fe0(unit);
        goto advance;

char115:
        selected = unit;

advance:
        ;
    }
    FUN_003195f0(selected->mdl, 0, model105);
    FUN_003195f0(selected->mdl, 1, model106);
    FUN_002831c0(selected, 0);
    voiceValue = selected->unk_9e8;
    FUN_00282d40_call(selected, selected->unk_9e0, 0, voiceValue,
                      selected->unk_9e4);
    FUN_00282bc0(selected);
}
#pragma opt_propagation on


// FUN_002eab70
void func_002eab70(void)

{
  func_002e4220((u32)func_002eabf0,(u32)func_002eb250,0);
  return;
}

// FUN_002eabb0
void func_002eabb0(void)

{
  func_002e4220((u32)func_002eb2c0,(u32)func_002eb9e0,0);
  return;
}

#pragma opt_propagation off
// FUN_002eabf0
#ifndef PC_BUILD
asm void func_002eabf0(void)
{
  .set noreorder
  .word 0x27bdff10
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x240415f0
  .word 0x0c0e545c
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020008
  .word 0x00621025
  .word 0xac82000c
  .word 0xafa000e8
  .word 0xafa000ec
  .word 0x8f82b6fc
  .word 0x8c51014c
  .word 0x10000052
  .word 0x00000000
  .word 0x9624001a
  .word 0x30820001
  .word 0x1040004d
  .word 0x00000000
  .word 0x8e300030
  .word 0x920300a2
  .word 0x24020001
  .word 0x14620048
  .word 0x00000000
  .word 0x960300a4
  .word 0x24020106
  .word 0x10620025
  .word 0x00000000
  .word 0x24020105
  .word 0x10620022
  .word 0x00000000
  .word 0x24020115
  .word 0x10620003
  .word 0x00000000
  .word 0x1000003c
  .word 0x00000000
  .word 0x30820008
  .word 0x10400017
  .word 0x00000000
  .word 0x8e03009c
  .word 0x2402fff7
  .word 0x00621024
  .word 0xae02009c
  .word 0x9622001a
  .word 0x3042fff7
  .word 0xa622001a
  .word 0x0220202d
  .word 0x0c0a68c8
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0b4ff8
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x3c0200ff
  .word 0x3445ffff
  .word 0x0c0c0158
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050006
  .word 0x0c0a0c70
  .word 0x00000000
  .word 0x0220902d
  .word 0x10000020
  .word 0x00000000
  .word 0x30820008
  .word 0x14400017
  .word 0x00000000
  .word 0x8e02009c
  .word 0x34420008
  .word 0xae02009c
  .word 0x9622001a
  .word 0x34420008
  .word 0xa622001a
  .word 0x0220202d
  .word 0x0c0a68b0
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c0b4f80
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x3c0200ff
  .word 0x3445ffff
  .word 0x0c0c0158
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050006
  .word 0x0c0a0c70
  .word 0x00000000
  .word 0x960200a4
  .word 0x38420105
  .word 0x0002102b
  .word 0x00021080
  .word 0x005d1021
  .word 0xac5000e8
  .word 0x8e3104a8
  .word 0x1620ffae
  .word 0x00000000
  .word 0x0c07f750
  .word 0x00000000
  .word 0x8e420030
  .word 0x8c440a2c
  .word 0x0c0bff5c
  .word 0x00000000
  .word 0x3053ffff
  .word 0x16600002
  .word 0x00000000
  .word 0x64130001
  .word 0x8fa200e8
  .word 0x8c440a2c
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3045ffff
  .word 0x3271ffff
  .word 0x8fa200e8
  .word 0x00b1082a
  .word 0x10200003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0260282d
  .word 0x8c440a2c
  .word 0x0c0bff64
  .word 0x00000000
  .word 0x8fa200ec
  .word 0x24500a2c
  .word 0x8c440a2c
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0051082a
  .word 0x10200003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0260102d
  .word 0x3045ffff
  .word 0x8fb300ec
  .word 0x8e040000
  .word 0x0c0bff64
  .word 0x00000000
  .word 0x8fa400e8
  .word 0x24050006
  .word 0x0c0a0c70
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050006
  .word 0x0c0a0c70
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0b9090
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0x0040882d
  .word 0x24040166
  .word 0x27a50060
  .word 0x0c0aedbc
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a50060
  .word 0x0000302d
  .word 0x0c0aeb00
  .word 0x00000000
  .word 0x0040802d
  .word 0xde430000
  .word 0xfc430060
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040166
  .word 0x0000282d
  .word 0x0c0b7528
  .word 0x00000000
  .word 0x0040a02d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0x0280202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0220202d
  .word 0x8fa500e8
  .word 0x0260302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040982d
  .word 0x24040004
  .word 0xa0440000
  .word 0xde030058
  .word 0xfc430008
  .word 0xa0440010
  .word 0xde830058
  .word 0xfc430018
  .word 0xde430000
  .word 0xfc430060
  .word 0x0260202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0b7578
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420b44
  .word 0x14400016
  .word 0x00000000
  .word 0x0c0b6e24
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403001e
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040020
  .word 0x2405001f
  .word 0x0c0b6e00
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403001e
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24030001
  .word 0x8f82b6fc
  .word 0xac430b44
  .word 0x8e440030
  .word 0x0c0a17c8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24030003
  .word 0xa4430048
  .word 0xde430000
  .word 0xfc430060
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e440030
  .word 0x24050166
  .word 0x0c0af564
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xde430000
  .word 0xfc430060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa400e8
  .word 0x0c0a1794
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xde430000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fb000ec
  .word 0x0200202d
  .word 0x0c0a1794
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xde430000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8fa400e8
  .word 0x24050018
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xde430000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0200202d
  .word 0x24050018
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xde430000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa400e8
  .word 0x2405000e
  .word 0x0000302d
  .word 0x24070003
  .word 0x0c0b760c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xde430000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040003
  .word 0x24050fff
  .word 0x0c0ae358
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xde430000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xde430000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020040
  .word 0x00621025
  .word 0xac82000c
  .word 0x8f83b6fc
  .word 0x94620018
  .word 0x34420007
  .word 0xa4620018
  .word 0x0220202d
  .word 0x0c0ae40c
  .word 0x00000000
  .word 0xdfbf0050
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
#endif /* PC_BUILD: asm function omitted */
#pragma opt_propagation reset

// FUN_002eb250
u32 func_002eb250(BtlAction* action)
{
    BtlPacket* packet;

    packet = btlPacketFindFirstByActionUID(action->uid, BTL_UIDMAX);
    if (packet == NULL)
    {
        gBtl->flags &= ~0x80000;
        return 0;
    }

    return 1;
}

#pragma opt_propagation off
// FUN_002eb2c0
#ifndef PC_BUILD
asm void func_002eb2c0(void)
{
  .set noreorder
  .word 0x27bdff00
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020008
  .word 0x00621025
  .word 0xac82000c
  .word 0xafa000f8
  .word 0xafa000fc
  .word 0x8f82b6fc
  .word 0x8c51014c
  .word 0x10000052
  .word 0x00000000
  .word 0x9624001a
  .word 0x30820001
  .word 0x1040004d
  .word 0x00000000
  .word 0x8e300030
  .word 0x920300a2
  .word 0x24020001
  .word 0x14620048
  .word 0x00000000
  .word 0x960300a4
  .word 0x24020106
  .word 0x10620025
  .word 0x00000000
  .word 0x24020105
  .word 0x10620022
  .word 0x00000000
  .word 0x24020115
  .word 0x10620003
  .word 0x00000000
  .word 0x1000003c
  .word 0x00000000
  .word 0x30820008
  .word 0x14400017
  .word 0x00000000
  .word 0x8e02009c
  .word 0x34420008
  .word 0xae02009c
  .word 0x9622001a
  .word 0x34420008
  .word 0xa622001a
  .word 0x0220202d
  .word 0x0c0a68b0
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c0b4f80
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x3c0200ff
  .word 0x3445ffff
  .word 0x0c0c0158
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050006
  .word 0x0c0a0c70
  .word 0x00000000
  .word 0x0220a02d
  .word 0x10000020
  .word 0x00000000
  .word 0x30820008
  .word 0x10400017
  .word 0x00000000
  .word 0x8e03009c
  .word 0x2402fff7
  .word 0x00621024
  .word 0xae02009c
  .word 0x9622001a
  .word 0x3042fff7
  .word 0xa622001a
  .word 0x0220202d
  .word 0x0c0a68c8
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0b4ff8
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x3c0200ff
  .word 0x3445ffff
  .word 0x0c0c0158
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050006
  .word 0x0c0a0c70
  .word 0x00000000
  .word 0x960200a4
  .word 0x38420105
  .word 0x0002102b
  .word 0x00021080
  .word 0x005d1021
  .word 0xac5000f8
  .word 0x8e3104a8
  .word 0x1620ffae
  .word 0x00000000
  .word 0x0c07f750
  .word 0x00000000
  .word 0x8fa200f8
  .word 0x8c440a2c
  .word 0x0c0bff5c
  .word 0x00000000
  .word 0x3050ffff
  .word 0x8fa200fc
  .word 0x8c440a2c
  .word 0x0c0bff5c
  .word 0x00000000
  .word 0x3043ffff
  .word 0x3202ffff
  .word 0x00431821
  .word 0x00031043
  .word 0x04610003
  .word 0x00000000
  .word 0x24620001
  .word 0x00021043
  .word 0x3050ffff
  .word 0x16000002
  .word 0x00000000
  .word 0x64100001
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3045ffff
  .word 0x8e830030
  .word 0x3202ffff
  .word 0x00a2082a
  .word 0x10200003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0200282d
  .word 0x8c640a2c
  .word 0x0c0bff64
  .word 0x00000000
  .word 0x8e840030
  .word 0x24050006
  .word 0x0c0a0c70
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b9090
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0x0040982d
  .word 0x24040165
  .word 0x27a50070
  .word 0x0c0aedbc
  .word 0x00000000
  .word 0x0260202d
  .word 0x27a50070
  .word 0x0000302d
  .word 0x0c0aeb00
  .word 0x00000000
  .word 0x0040a82d
  .word 0xde830000
  .word 0xfc430060
  .word 0x02a0202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040165
  .word 0x0000282d
  .word 0x0c0b7528
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdea30058
  .word 0xfc430008
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fb000fc
  .word 0x0260202d
  .word 0x8fa500f8
  .word 0x0200302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040902d
  .word 0x24040004
  .word 0xa0440000
  .word 0xdea30058
  .word 0xfc430008
  .word 0xa0440010
  .word 0xde230058
  .word 0xfc430018
  .word 0x0240202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0b7578
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040003
  .word 0x24050fff
  .word 0x0c0ae358
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x24030003
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x24050165
  .word 0x0c0af564
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8fa400f8
  .word 0x24050017
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0200202d
  .word 0x24050017
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa400f8
  .word 0x0c0a1324
  .word 0x00000000
  .word 0x0040a82d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x02a0202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8fa400f8
  .word 0x24050019
  .word 0x24060008
  .word 0x24070001
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdea30058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0a1324
  .word 0x00000000
  .word 0x0040a82d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x02a0202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0200202d
  .word 0x24050019
  .word 0x24060008
  .word 0x24070001
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdea30058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040002
  .word 0x24050fff
  .word 0x0c0ae358
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405001f
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x2403001e
  .word 0xa443004a
  .word 0xde830000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x0c0a1794
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x0000282d
  .word 0x0c0a10f8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa400f8
  .word 0x0c0a17c8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0a17c8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0ae40c
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0100
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_propagation reset

// FUN_002eb9e0
u32 func_002eb9e0(BtlAction* action)
{
    BtlPacket* packet;

    packet = btlPacketFindFirstByActionUID(action->uid, BTL_UIDMAX);
    if (packet == NULL)
    {
        gBtl->flags &= ~0x80000;
        return 0;
    }

    return 1;
}

#pragma opt_common_subs off
#pragma opt_propagation off
/* W419 negative: moved the long non-null branch before the short null branch in func_002eba50; nd696 -> 760 at object 1100/1136. */
// FUN_002eba50
#ifndef PC_BUILD
asm void func_002eba50(BtlAction* action)
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
  .word 0x0080b82d
  .word 0x8f85b6fc
  .word 0x8ca4000c
  .word 0x3c03fdff
  .word 0x3463ffff
  .word 0x00831824
  .word 0xaca3000c
  .word 0x8f85b6fc
  .word 0x8ca4000c
  .word 0x3c030008
  .word 0x00831825
  .word 0xaca3000c
  .word 0x02e0a02d
  .word 0x16800015
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x8c74014c
  .word 0x24030115
  .word 0x24050001
  .word 0x1000000d
  .word 0x00000000
  .word 0x9684001a
  .word 0x30840001
  .word 0x10800008
  .word 0x00000000
  .word 0x8e860030
  .word 0x90c400a2
  .word 0x14850004
  .word 0x00000000
  .word 0x94c400a4
  .word 0x10830004
  .word 0x00000000
  .word 0x8e9404a8
  .word 0x1680fff3
  .word 0x00000000
  .word 0x0000902d
  .word 0xafa00090
  .word 0xafa00094
  .word 0x8f83b6fc
  .word 0x8c700158
  .word 0x10000015
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x1040000e
  .word 0x00000000
  .word 0x960400a4
  .word 0x24030106
  .word 0x10830009
  .word 0x00000000
  .word 0x24030105
  .word 0x10830003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0xafb00090
  .word 0x10000002
  .word 0x00000000
  .word 0xafb00094
  .word 0x8e100a34
  .word 0x1600ffeb
  .word 0x00000000
  .word 0x8fa30090
  .word 0x10600004
  .word 0x00000000
  .word 0x8fb00094
  .word 0x1600001c
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000014
  .word 0x00000000
  .word 0x00101880
  .word 0x007d1821
  .word 0x24630090
  .word 0x8c640000
  .word 0x1080000d
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x24050012
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040982d
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x26100001
  .word 0x2a030002
  .word 0x1460ffeb
  .word 0x00000000
  .word 0x100000a3
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0x0040a82d
  .word 0x16e00011
  .word 0x00000000
  .word 0x8fb10090
  .word 0xafb10098
  .word 0xafb0009c
  .word 0x0200b02d
  .word 0x24120002
  .word 0x24040003
  .word 0x3c05006a
  .word 0x24a59d80
  .word 0x0c0b75a4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x8e830030
  .word 0x8fa20090
  .word 0x14620011
  .word 0x00000000
  .word 0xafa20098
  .word 0xafa0009c
  .word 0x0040882d
  .word 0x0040b02d
  .word 0x24120003
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a59d90
  .word 0x0c0b75a4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x1470000f
  .word 0x00000000
  .word 0x0200882d
  .word 0xafb10098
  .word 0xafa0009c
  .word 0x0220b02d
  .word 0x24120004
  .word 0x24040003
  .word 0x3c05006a
  .word 0x24a59da0
  .word 0x0c0b75a4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3244ffff
  .word 0x0c0be1f8
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0040282d
  .word 0x0c0ae434
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000018
  .word 0x00000000
  .word 0x00101080
  .word 0x005d1021
  .word 0x24420098
  .word 0x8c440000
  .word 0x10800011
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x24050012
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040982d
  .word 0x24030003
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020002
  .word 0x1440ffe7
  .word 0x00000000
  .word 0x24040003
  .word 0x24050fff
  .word 0x0c0ae358
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c500158
  .word 0x10000013
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x3c060069
  .word 0x24c678b0
  .word 0x0000382d
  .word 0x0c09ffa4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e100a34
  .word 0x1600ffed
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0220282d
  .word 0x02c0302d
  .word 0x0000382d
  .word 0x24080200
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0c0ae40c
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
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_propagation reset
#pragma opt_common_subs reset

#pragma opt_loop_invariants on
// FUN_002ebec0
u32 func_002ebec0(BtlAction* action)
{
    BtlPacket* packet;
    u8 genus = UNIT_GENUS_EC;
    u16 charId = 0x115;

    if (action == NULL)
    {
        action = gBtl->actionList.tail;
        while (action != NULL)
        {
            if ((action->unk_1a & 1) == 0 ||
                action->unit->genus != genus ||
                action->unit->charId != charId)
            {
                action = action->prev;
            }
            else
            {
                break;
            }
        }
    }

    if (btlPacketFindFirstByActionUID(action->uid, BTL_UIDMAX) == NULL)
    {
        gBtl->flags &= ~0x80000;
        gBtl->flags |= 0x2000000;

        packet = FUN_0029fa50(0x10);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        packet = FUN_002a1080(0x10, 4);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        packet = FUN_002a16c0(0x10);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        return 0;
    }

    return 1;
}
#pragma opt_loop_invariants off


// FUN_002ec000
void func_002ec000(void)
{
  u32 uVar1;
  u32 uVar2;
  u32 *puVar6;
  u32 *puVar5;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int sVar7;
  u32 auStack_40030 [49158];
  u16 auStack_10018 [32748];
  u32 auStack_30 [6];
  union {
    u32 raw[3];
    f32 vec[3];
  } uStack_10;
  s16 auStack_18[3];

  puVar6 = (u32*)DAT_00699db0;
  puVar5 = auStack_30;
  iVar5 = 3;
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    iVar5 = iVar5 + -1;
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
  } while (0 < iVar5);
  *(VoiceSlots *)auStack_18 = *(VoiceSlots *)&DAT_007cc9a0;
  sVar7 = 0;
  uStack_10.raw[1] = 0;
  for (iVar4 = *(int *)(DAT_007ce3ec + 0x150); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xa34)) {
    if (*(u16 *)(iVar4 + 0xa4) == 1) {
      uStack_10.raw[0] = 0x43160000;
      uStack_10.raw[2] = 0x43e10000;
      *(u8 *)(iVar4 + 0x9f0) = 2;
    }
    else {
      uStack_10.vec[0] = *(f32 *)(auStack_30 + ((short)sVar7 * 2));
      uStack_10.vec[2] = *(f32 *)(auStack_30 + ((short)sVar7 * 2) + 1);
      *(char *)(iVar4 + 0x9f0) = (char)auStack_18[(short)sVar7];
      sVar7 = (short)((int)sVar7 + 1);
    }
    FUN_002d2280((s16*)(iVar4 + 0x94),(s16*)(iVar4 + 0x96),(f32*)&uStack_10);
    FUN_0027f650(iVar4,&uStack_10);
  }
  for (iVar6 = *(int *)(DAT_007ce3ec + 0x158); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xa34)) {
    switch (*(u16 *)(iVar6 + 0xa4)) {
    case 0x107:
      uStack_10.raw[0] = 0;
      uStack_10.raw[2] = 0xc3c80000;
      break;
    }
    FUN_002d2280((s16*)(iVar6 + 0x94),(s16*)(iVar6 + 0x96),(f32*)&uStack_10);
    FUN_0027f650(iVar6,&uStack_10);
  }
  return;
}

// FUN_002ec190
void func_002ec190(BtlAction* source, BtlAction* target, BtlTargetResult* result)
{
    if (source->unit->genus == UNIT_GENUS_EC &&
        source->unit->charId == 0x107 &&
        (result->flags & 0x80) != 0)
    {
        *(u32*)(DAT_007ce3ec + 0xb44) = 0;
    }

    if (target->unit->genus == UNIT_GENUS_EC && target->unit->charId == 0x107)
    {
        if ((result->statusFlags & 0x100000) != 0)
        {
            *(u32*)(DAT_007ce3ec + 0xb44) = 0;
            *(s16*)(DAT_007ce3ec + 0xb50) = 2;
        }
        else if (result->hpDelta < 0 && func_002ec590() == 1)
        {
            if (*(s16*)(DAT_007ce3ec + 0xb50) < 2)
            {
                (*(s16*)(DAT_007ce3ec + 0xb50))++;
            }
        }

        if (result->hpDelta < 0)
        {
            if (*(s32*)(DAT_007ce3ec + 0xb48) > -result->hpDelta)
            {
                *(s32*)(DAT_007ce3ec + 0xb48) += result->hpDelta;
            }
            else
            {
                *(s32*)(DAT_007ce3ec + 0xb48) = 0;
            }
        }
    }
}

#pragma opt_loop_invariants on
// FUN_002ec2c0
void func_002ec2c0(void)
{
    BtlUnit* target;
    void* object;
    BtlPacket* parent;
    BtlUnit* unit;
    BtlPacket* packet;

    gBtl->flags &= ~0x02000000;
    object = func_002b8f90(0);
    func_002b90d0(object, func_002f87e0(2));
    target = NULL;
    for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
         unit != NULL; unit = unit->next) {
        switch (unit->charId) {
        case 0x107:
            target = unit;
            break;
        }
    }
    packet = FUN_002dd690_packet_voice(3, DAT_00699df0);
    btlPacketRegister(packet, 1);
    parent = FUN_00284200_packet_voice(1.0f, target, 0x12, 0, 2);
    parent->preUpdateDelay = 3;
    btlPacketRegister(parent, 1);
    packet = FUN_002b8d60_packet_voice(3, 0xfff);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    btlPacketRegister(packet, 1);
    packet = FUN_0027fe90_packet_voice(target, NULL, D_006978B0, NULL);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    btlPacketRegister(packet, 1);
    packet = FUN_002a3b40_packet_voice(NULL, 1);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    btlPacketRegister(packet, 0);
    packet = FUN_002baf90_packet_voice(object, target, target, 0, 0x200);
    btlPacketRegister(packet, 2);
    func_002b9030(object);
}
#pragma opt_loop_invariants off


// FUN_002ec4b0
void func_002ec4b0(BtlUnit* unit)
{
    if (unit->genus == UNIT_GENUS_EC &&
        unit->charId == 0x107 &&
        (unit->flags2 & 2) != 0)
    {
        if (*(s32*)((u8*)gBtl + 0xb4c) != 0)
        {
            u8* field = (u8*)unit->mdl + 0x41d;
            if (*field < 0xdf)
                *field += 0x20;
            else
                *field = 0xff;
        }
        else
        {
            u8* field = (u8*)unit->mdl + 0x41d;
            if (0x20 < *field)
                *field -= 0x20;
            else
                *field = 0;
        }
    }
}

// FUN_002ec560
void func_002ec560(u32 param_1)

{
  if (*(u16 *)(*(int *)(DAT_007ce3ec + 0xbbc) + 8) == 0x1a5) {
    *(u32 *)(DAT_007ce3ec + 0xb44) = 1;
    *(u32 *)(DAT_007ce3ec + 0xb48) = param_1;
  }
  return;
}

// FUN_002ec590
u32 func_002ec590(void)

{
  u32 uVar1;
  
  if (*(u16 *)(*(int *)(DAT_007ce3ec + 0xbbc) + 8) == 0x1a5) {
    uVar1 = *(u32 *)(DAT_007ce3ec + 0xb44);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// FUN_002ec5c0
void func_002ec5c0(void)
{
  typedef struct {
    u32 data[6];
    s16 ids[4];
    RwV3d position;
  } VoicePositionWork;
  typedef struct {
    s16 a;
    s16 b;
    s16 c;
  } VoiceIds;
  VoicePositionWork work;
  u32 uVar1;
  u32 uVar2;
  int iVar4;
  u32 *puVar6;
  u32 *puVar5;
  int copyCount;
  int iVar3;
  s16 sVar7;

  puVar6 = (u32*)DAT_00699e00;
  puVar5 = work.data;
  copyCount = 3;
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    copyCount = copyCount + -1;
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
  } while (0 < copyCount);
  *(VoiceIds *)&work.ids[0] = *(VoiceIds *)&DAT_007cc9a8;
  sVar7 = 0;
  work.position.y = 0.0f;
  for (iVar4 = *(int *)(DAT_007ce3ec + 0x150); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xa34)) {
    if (*(u16 *)(iVar4 + 0xa4) == 1) {
      work.position.x = 150.0f;
      work.position.z = 550.0f;
      *(u8 *)(iVar4 + 0x9f0) = 2;
    }
    else {
      iVar3 = (int)sVar7;
      work.position.x = *(f32*)((u8*)&work + iVar3 * 8);
      work.position.z = *(f32*)((u8*)&work + iVar3 * 8 + 4);
      *(u8 *)(iVar4 + 0x9f0) = (u8)work.ids[iVar3];
      sVar7++;
    }
    FUN_002d2280((s16*)(iVar4 + 0x94), (s16*)(iVar4 + 0x96), &work.position.x);
    FUN_0027f650(iVar4, &work.position.x);
  }
  for (iVar3 = *(int *)(DAT_007ce3ec + 0x158); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xa34)) {
    switch (*(u16 *)(iVar3 + 0xa4)) {
    case 0x109:
      work.position.x = -400.0f;
      work.position.z = -300.0f;
      break;
    case 0x10a:
      work.position.x = 400.0f;
      work.position.z = -300.0f;
      break;
    default:
      break;
    }
    FUN_002d2280((s16*)(iVar3 + 0x94), (s16*)(iVar3 + 0x96), &work.position.x);
    FUN_0027f650(iVar3, &work.position.x);
  }
  return;
}

#pragma opt_loop_invariants on
// FUN_002ec790
void func_002ec790(void)
{
    void* object;
    BtlPacket* parent;
    BtlUnit* iVar8;
    BtlUnit* iVar6;
    BtlUnit* unit;
    BtlPacket* packet;

    iVar8 = NULL;
    iVar6 = NULL;
    for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
         unit != NULL; unit = unit->next) {
        switch (unit->charId) {
        case 0x109:
            iVar6 = unit;
            break;
        case 0x10a:
            iVar8 = unit;
            break;
        }
    }
    object = func_002b8f90(0);
    func_002b90d0(object, func_002f87e0(1));
    parent = FUN_002baf90_packet_voice(object, iVar8, iVar6, 0, 0x200);
    btlPacketRegister(parent, 2);
    packet = FUN_002dd830_packet_voice(iVar8, 10, 0, 6);
    packet->unk_00 = 5;
    packet->parentUID = parent->uid;
    packet->preUpdateDelay = 0x40;
    btlPacketRegister(packet, 1);
    packet = FUN_002dd830_packet_voice(iVar8, 0xc, 0, 7);
    packet->unk_00 = 5;
    packet->parentUID = parent->uid;
    packet->preUpdateDelay = 0x84;
    btlPacketRegister(packet, 1);
    packet = FUN_0027f410_packet_voice((u32)func_002ecbe0, (u32)iVar6);
    packet->unk_00 = 5;
    packet->parentUID = parent->uid;
    packet->preUpdateDelay = 0x8c;
    btlPacketRegister(packet, 1);
    packet = FUN_00284200_packet_voice(1.0f, iVar6, 0, 0, 1);
    packet->unk_00 = 5;
    packet->parentUID = parent->uid;
    packet->preUpdateDelay = 0x8c;
    btlPacketRegister(packet, 1);
    func_002b9030(object);
}
#pragma opt_loop_invariants off

/* W367 stacked probe: opt_lifetimes + opt_dead_assignments nd 911 -> 895; singles 910/896; object 1288/1296. */

// FUN_002ec990
void func_002ec990(BtlUnit* unit)
{
  u16 sVar2;
  
  if ((unit->genus == 1) && (unit->charId == 0x109) &&
      ((unit->flags2 & 2) != 0)) {
    sVar2 = (u16)FUN_00318540(unit->mdl, 0);
    if ((*(int *)((u8 *)gBtl + 0xb50) != 0) && (sVar2 == 6)) {
      void *model;
      model = unit->mdl;
      *(u16 *)((u8 *)model + 0xd8) =
          *(u16 *)((u8 *)model + 0xd8) | 0x80;
      if (unit->cols[4].a > 1) {
        u8 bVar1;
        bVar1 = unit->cols[4].a;
        if (bVar1 > 9) {
          unit->cols[4].a = bVar1 - 8;
        } else {
          unit->cols[4].a = 1;
        }
        unit->flags2 = unit->flags2 | 4;
      }
    } else {
      void *model;
      u8 bVar1;
      model = unit->mdl;
      *(u16 *)((u8 *)model + 0xd8) =
          *(u16 *)((u8 *)model + 0xd8) & 0xff7f;
      bVar1 = unit->cols[4].a;
      if (bVar1 < 0xff) {
        if (bVar1 < 0xf7) {
          unit->cols[4].a = bVar1 + 8;
        } else {
          unit->cols[4].a = 0xff;
        }
        unit->flags2 = unit->flags2 | 4;
      }
    }
  }
  return;
}

#pragma opt_loop_invariants on
// FUN_002ecac0
u32 func_002ecac0(void)
{
    BtlUnit* unit;

    for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
         unit != NULL;
         unit = unit->next)
    {
        if (unit->charId == 0x10a)
            return datCalcIsDead(unit->datUnit, 0) == 0;
    }
    return 0;
}
#pragma opt_loop_invariants off


// FUN_002ecb30
u32 func_002ecb30(BtlAction* action, s16 selection)
{
    u16 specificId;
    s32 result;

    *(u16*)((u8*)gBtl + 0xb54) = selection;
    result = datCalcChkBadStatus(action->unit->datUnit, 4);
    if (result == 0)
    {
        func_002e4220((u32)func_002ed350,
                      (u32)func_002ed360,
                      (u32)action);
    }
    else
    {
        action->target.commandId = 1;
        specificId = FUN_00308930(action->unit->datUnit);
        action->target.specificId = specificId;
        FUN_002c3770(action, 0);
        return 0;
    }
    return 1;
}

/* W367 pragma probe: opt_propagation off nd 1421 -> 1395; on nd 1421; object 1924/2112. */
// FUN_002ecbe0
u32 func_002ecbe0(void)

{
  BtlAction* action;

  action = FUN_0029a1d0();
  *(u32 *)(DAT_007ce3ec + 0xb50) = 1;
  action->unk_1a &= 0xfff7;
  return 1;
}

/* W367 pragma probe: opt_dead_assignments off nd 1472 -> 1467; on nd 1472; object 2020/2192. */
// FUN_002ecc20
u32 func_002ecc20(void)

{
  BtlAction* action;

  action = FUN_0029a1d0();
  *(u32 *)(DAT_007ce3ec + 0xb50) = 0;
  action->unk_1a |= 8;
  return 1;
}

// FUN_002ecc60
#ifndef PC_BUILD
asm void func_002ecc60(s16 *param_1, s16 *param_2)
{
  .set noreorder
  .word 0x27bdff10
  .word 0xffbf0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0a82d
  .word 0x8f84b6fc
  .word 0x8c820b44
  .word 0x944300a4
  .word 0x240200e6
  .word 0x1062001f
  .word 0x00000000
  .word 0x240200e5
  .word 0x10620018
  .word 0x00000000
  .word 0x240200e4
  .word 0x10620011
  .word 0x00000000
  .word 0x240200e3
  .word 0x1062000a
  .word 0x00000000
  .word 0x240200e2
  .word 0x10620003
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x3c13006a
  .word 0x26739e60
  .word 0x1000000f
  .word 0x00000000
  .word 0x3c13006a
  .word 0x26739eb0
  .word 0x1000000b
  .word 0x00000000
  .word 0x3c13006a
  .word 0x26739f00
  .word 0x10000007
  .word 0x00000000
  .word 0x3c13006a
  .word 0x26739f50
  .word 0x10000003
  .word 0x00000000
  .word 0x3c13006a
  .word 0x26739f90
  .word 0x2411ffff
  .word 0x0220b02d
  .word 0x8c820b48
  .word 0x8c4409f4
  .word 0x24050015
  .word 0x27a600e0
  .word 0x0c0c63b4
  .word 0x00000000
  .word 0x10400075
  .word 0x00000000
  .word 0xc7b500e0
  .word 0xc7b400e8
  .word 0x0000902d
  .word 0x10000068
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420b44
  .word 0x86050000
  .word 0x8c4409f4
  .word 0x27a600c0
  .word 0x0c0c63b4
  .word 0x00000000
  .word 0x1040005d
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420b44
  .word 0x86050002
  .word 0x8c4409f4
  .word 0x27a600cc
  .word 0x0c0c63b4
  .word 0x00000000
  .word 0x10400054
  .word 0x00000000
  .word 0xc7a100cc
  .word 0x44801800
  .word 0xc7a000c0
  .word 0x46001800
  .word 0x46000800
  .word 0x3c024040
  .word 0x44821000
  .word 0x00000000
  .word 0x46020003
  .word 0x46030001
  .word 0xe7a000a0
  .word 0xc7a100d4
  .word 0xc7a000c8
  .word 0x46001800
  .word 0x46000800
  .word 0x46020003
  .word 0x46030001
  .word 0xe7a000a4
  .word 0x27a400a0
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a200c8
  .word 0xc7a000c0
  .word 0x44800800
  .word 0x00000000
  .word 0x46010001
  .word 0xe7a000a8
  .word 0x46011001
  .word 0xe7a000ac
  .word 0x27a400a8
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a000cc
  .word 0x44800800
  .word 0x00000000
  .word 0x46010001
  .word 0xe7a000b0
  .word 0xc7a000d4
  .word 0x46010001
  .word 0xe7a000b4
  .word 0x27a400b0
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0x44800800
  .word 0x00000000
  .word 0x4601a801
  .word 0xe7a000b8
  .word 0x4601a001
  .word 0xe7a000bc
  .word 0x27a400b8
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a500a4
  .word 0xc7a400a0
  .word 0xc7a100b0
  .word 0xc7a000b4
  .word 0x4600281a
  .word 0x460120dc
  .word 0xc7a100b8
  .word 0xc7a000bc
  .word 0x4600281a
  .word 0x4601209c
  .word 0xc7a100a8
  .word 0xc7a000ac
  .word 0x4600281a
  .word 0x4601201c
  .word 0x46020036
  .word 0x4500000b
  .word 0x00000000
  .word 0x46021836
  .word 0x45000008
  .word 0x00000000
  .word 0x3243ffff
  .word 0x000318c0
  .word 0x86f10000
  .word 0x00731821
  .word 0x84760006
  .word 0x1000000b
  .word 0x00000000
  .word 0x26430001
  .word 0x3072ffff
  .word 0x3243ffff
  .word 0x000318c0
  .word 0x02638021
  .word 0x26170004
  .word 0x86040004
  .word 0x2403ffff
  .word 0x1483ff92
  .word 0x00000000
  .word 0x12800002
  .word 0x00000000
  .word 0xa6910000
  .word 0x12a00002
  .word 0x00000000
  .word 0xa6b60000
  .word 0xdfbf0090
  .word 0x7bb70080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00f0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


#pragma alias FUN_002d1de0_6a20 FUN_002d1de0
#pragma alias FUN_002a4690_6a20 FUN_002a4690
#pragma alias FUN_004be1e0_6a20 FUN_004be1e0
#pragma alias FUN_004c6b20_6a20 FUN_004c6b20
#pragma alias FUN_004c69f0_6a20 FUN_004c69f0
#pragma alias FUN_002d1f30_6a20 FUN_002d1f30
#pragma alias FUN_0052e930_6a20 FUN_0052e930
#pragma alias FUN_002a44f0_6a20 FUN_002a44f0
#pragma alias FUN_002a4470_6a20 FUN_002a4470

/* Retail 0x00-0x67f: reconstruct the paired-unit quaternion, projection, and playback paths; 1644/1680 bytes emitted, with no unjustified bytes. */
/* W367 pragma probe: opt_propagation off nd 1266 -> 1242; on nd 1266; object 1652/1680. */
// FUN_002ecf80
u32 func_002ecf80(int param_1)
{
  u16 sVar1;
  s32 lVar2;
  u64 uVar3;
  float* pfVar4;
  f32 value;
  struct {
    u8 auStack_80[48];
    float afStack_50[3];
    u8 pad_44[4];
    u8 auStack_40[24];
    float afStack_28[2];
    float afStack_20[3];
    u8 pad_14[4];
    float afStack_10[3];
    short sStack_4;
    short sStack_2;
  } stack;

  if (((*(u32 *)(*(int *)(DAT_007ce3ec + 0xb48) + 0x98) & 2) != 0) &&
     (lVar2 = FUN_00318d10(*(u32 *)(*(int *)(DAT_007ce3ec + 0xb48) + 0x9f4),0x14,stack.auStack_80),
     lVar2 != 0)) {
    FUN_004c6be0(stack.afStack_20,&D_00697890,stack.auStack_80);
    stack.afStack_10[0] = stack.afStack_50[0] + stack.afStack_20[0];
    stack.afStack_10[1] = stack.afStack_50[1] + stack.afStack_20[1];
    stack.afStack_10[2] = stack.afStack_50[2] + stack.afStack_20[2];
    FUN_002d1de0(stack.auStack_40,stack.afStack_50,stack.afStack_10);
    FUN_0027f680(*(u32 *)(param_1 + 0x30),stack.auStack_40);
  }
  func_002ecc60(&stack.sStack_2, &stack.sStack_4);
  sVar1 = *(short *)(DAT_007ce3ec + 0xb56);
  switch (sVar1) {
  case 0:
    *(u32 *)(DAT_007ce3ec + 0xb5c) = 0;
    *(u16 *)(DAT_007ce3ec + 0xb56) = 1;
    *(s16 *)(DAT_007ce3ec + 0xb60) = -1;
    *(s16 *)(DAT_007ce3ec + 0xb62) = -1;
    *(u32 *)(DAT_007ce3ec + 0xb64) = 0;
    stack.afStack_28[0] = 405;
    stack.afStack_28[1] = 347;
    FUN_001ff3d0();
    FUN_001ff410(stack.afStack_28);
    break;
  case 1:
    if (*(float *)(DAT_007ce3ec + 0xb5c) < 3.0f) {
      FUN_00283c50(*(float *)(DAT_007ce3ec + 0xb5c),*(u32 *)(DAT_007ce3ec + 0xb44));
      lVar2 = *(u32 *)(DAT_007ce3ec + 0xb48);
      FUN_00283c50(*(float *)(DAT_007ce3ec + 0xb5c),lVar2);
      *(float *)(DAT_007ce3ec + 0xb5c) = *(float *)(DAT_007ce3ec + 0xb5c) + DAT_007cafec;
      if (*(float *)(DAT_007ce3ec + 0xb5c) > 3.0f) {
        *(float *)(DAT_007ce3ec + 0xb5c) = 3.0f;
      }
    }
    else {
      *(u16 *)(DAT_007ce3ec + 0xb56) = 2;
    }
    break;
  case 2:
    if (((DAT_007e094e[0] & 0x40) != 0) || ((DAT_007e0958[0] & 0x40) != 0)) {
      *(u16 *)(DAT_007ce3ec + 0xb56) = 3;
      FUN_001ff3f0();
      uVar3 = FUN_002dd5e0(1);
      FUN_0027ed20(uVar3,1);
    }
    break;
  case 3:
    if (stack.sStack_2 != -1) {
      *(short *)(DAT_007ce3ec + 0xb60) = stack.sStack_2;
      *(u16 *)(DAT_007ce3ec + 0xb62) = stack.sStack_4;
    }
    pfVar4 = (float *)(DAT_007ce3ec + 0xb5c);
    value = *pfVar4;
    if (value > DAT_007cafbc) {
      *pfVar4 = value - DAT_007cafbc;
    }
    else if (*(short *)(DAT_007ce3ec + 0xb60) != -1) {
      *pfVar4 = 0.0f;
    }
    else {
      *pfVar4 = DAT_007cafbc;
    }
    lVar2 = *(u32 *)(DAT_007ce3ec + 0xb44);
    FUN_00283c50(*(float *)(DAT_007ce3ec + 0xb5c),lVar2);
    lVar2 = *(u32 *)(DAT_007ce3ec + 0xb48);
    FUN_00283c50(*(float *)(DAT_007ce3ec + 0xb5c),lVar2);
    if ((*(float *)(DAT_007ce3ec + 0xb5c) == 0.0f) && (*(short *)(DAT_007ce3ec + 0xb60) != -1)) {
      return 1;
    }
    break;
  }
  if (((*(u32 *)(*(int *)(DAT_007ce3ec + 0xb48) + 0x98) & 2) != 0) &&
     (*(float *)(DAT_007ce3ec + 0xb64) =
           (*(float *)(DAT_007ce3ec + 0xb5c) / 3.0f) * 0.5f + *(float *)(DAT_007ce3ec + 0xb64) + 0.0f,
     *(float *)(DAT_007ce3ec + 0xb64) >= 1.0f)) {
    uVar3 = FUN_002dd5e0(0);
    FUN_0027ed20(uVar3,1);
    *(u32 *)(DAT_007ce3ec + 0xb64) = 0;
  }
  return 0;
}
// FUN_002ed350
void func_002ed350(void)
{
    *(u16*)((u8*)gBtl + 0xb58) = 0;
}

/* W415 negative: suffixing the divisor and adding an absolute global alias removed soft calls but measured nd3177/4856 and nd3175/4852 versus nd3006/4824. */
// FUN_002ed360
#pragma push
#pragma schedule on
#pragma opt_lifetimes on
#ifndef PC_BUILD
asm u32 func_002ed360(u64 *param_1)
{
  .set noreorder
  .word 0x27bdfee0
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
  .word 0xdc900000
  .word 0x8f86b6fc
  .word 0x94c30b58
  .word 0x24020003
  .word 0x10620465
  .word 0x00000000
  .word 0x24020002
  .word 0x10620314
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000048f
  .word 0x00000000
  .word 0x8cc40158
  .word 0x2402010a
  .word 0x10000011
  .word 0x00000000
  .word 0x948300a4
  .word 0x1462000d
  .word 0x00000000
  .word 0x8c840a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x24160001
  .word 0x10000008
  .word 0x00000000
  .word 0x0000b02d
  .word 0x10000005
  .word 0x00000000
  .word 0x8c840a34
  .word 0x1480ffef
  .word 0x00000000
  .word 0x0000b02d
  .word 0x8f83b6fc
  .word 0x94710b54
  .word 0x24020172
  .word 0x1222001b
  .word 0x00000000
  .word 0x24020171
  .word 0x12220015
  .word 0x00000000
  .word 0x2402016f
  .word 0x1222000f
  .word 0x00000000
  .word 0x2402016e
  .word 0x12220009
  .word 0x00000000
  .word 0x2402016d
  .word 0x12220003
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x641200e2
  .word 0x1000000b
  .word 0x00000000
  .word 0x641200e3
  .word 0x10000008
  .word 0x00000000
  .word 0x641200e4
  .word 0x10000005
  .word 0x00000000
  .word 0x641200e5
  .word 0x10000002
  .word 0x00000000
  .word 0x641200e6
  .word 0xa4600b56
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020008
  .word 0x00621025
  .word 0xac82000c
  .word 0x24040001
  .word 0x0c0a1d68
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0xac620b44
  .word 0x24040001
  .word 0x0c0a1d68
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0xac620b48
  .word 0x24040001
  .word 0x0c0a1d68
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0xac620b4c
  .word 0x8f82b6fc
  .word 0x8c420b44
  .word 0xa45200a4
  .word 0x240300e7
  .word 0x8f82b6fc
  .word 0x8c420b48
  .word 0xa44300a4
  .word 0x240300e8
  .word 0x8f82b6fc
  .word 0x8c420b4c
  .word 0xa44300a4
  .word 0xafa000f8
  .word 0xafa000fc
  .word 0xafa00100
  .word 0x8f82b6fc
  .word 0x8c440b44
  .word 0x27a500f8
  .word 0x0c09fd94
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440b48
  .word 0x27a500f8
  .word 0x0c09fd94
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440b4c
  .word 0x27a500f8
  .word 0x0c09fd94
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x3c023f00
  .word 0x44826000
  .word 0x8c640b44
  .word 0x0c09fdc4
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x3c023f00
  .word 0x44826000
  .word 0x8c640b48
  .word 0x0c09fdc4
  .word 0x00000000
  .word 0x8f83b728
  .word 0x3c020001
  .word 0x00621021
  .word 0x9442d254
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
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440b4c
  .word 0x0c09fdc4
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420b44
  .word 0xac4009d4
  .word 0x8f82b6fc
  .word 0x8c420b48
  .word 0xac4009d4
  .word 0x8f82b6fc
  .word 0x8c440b48
  .word 0x8c450b44
  .word 0x8c460b4c
  .word 0x0c0d4b14
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000011
  .word 0x00000000
  .word 0x00131080
  .word 0x005d1021
  .word 0x24550108
  .word 0x0000202d
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0xaea20000
  .word 0x26620002
  .word 0x3044ffff
  .word 0x0c0be1f8
  .word 0x00000000
  .word 0x8ea40000
  .word 0x0040282d
  .word 0x0c0ae434
  .word 0x00000000
  .word 0x26730001
  .word 0x2e620003
  .word 0x1440ffee
  .word 0x00000000
  .word 0x8e840030
  .word 0x0220282d
  .word 0x0c0af564
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x12c0000b
  .word 0x00000000
  .word 0x3c04002f
  .word 0x2484cc20
  .word 0x8e850030
  .word 0x0c09fd04
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0c0b7528
  .word 0x00000000
  .word 0x0040f02d
  .word 0xfc500060
  .word 0x03c0202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x24050007
  .word 0x24060006
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040982d
  .word 0xfc500060
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040003
  .word 0x24050fff
  .word 0x0c0ae358
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050011
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x24050018
  .word 0x0c0a0e34
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x7fa200b0
  .word 0xde750058
  .word 0x0220202d
  .word 0x27a5011c
  .word 0x27a60118
  .word 0x0c0a7a98
  .word 0x00000000
  .word 0x8fa4011c
  .word 0x8fa50118
  .word 0x24060010
  .word 0x0c0a7d2c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc550008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a7b00
  .word 0x00000000
  .word 0x0040b82d
  .word 0x0220202d
  .word 0x27a5011c
  .word 0x27a60118
  .word 0x0c0a7b20
  .word 0x00000000
  .word 0x02e0202d
  .word 0x8fa5011c
  .word 0x8fa60118
  .word 0x24070010
  .word 0x0000402d
  .word 0x0c0a8014
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc550008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a7b14
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050010
  .word 0x0c0a84a0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc550008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x0220282d
  .word 0x24060010
  .word 0x0c0a86c0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc550008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440b44
  .word 0x0240282d
  .word 0x2406001e
  .word 0x0c0a15a4
  .word 0x00000000
  .word 0x0040b82d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc550008
  .word 0xa0430010
  .word 0xdfc30058
  .word 0xfc430018
  .word 0x7ba300b0
  .word 0x24630006
  .word 0xa4430048
  .word 0xfc500060
  .word 0x02e0202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440b48
  .word 0x240500e7
  .word 0x2406001e
  .word 0x0c0a15a4
  .word 0x00000000
  .word 0x0040902d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdee30058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440b4c
  .word 0x240500e8
  .word 0x2406001e
  .word 0x0c0a15a4
  .word 0x00000000
  .word 0x0040a82d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x02a0202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440b44
  .word 0x2405ffff
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0100482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdee30058
  .word 0xfc430008
  .word 0x24030002
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440b48
  .word 0x2405ffff
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0100482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x24030002
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440b4c
  .word 0x2405ffff
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0100482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdea30058
  .word 0xfc430008
  .word 0x24030002
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440ca8
  .word 0x8e850030
  .word 0x0000302d
  .word 0xdea70058
  .word 0x24080300
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050002
  .word 0x24060005
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e850030
  .word 0x8fa40108
  .word 0x00a0302d
  .word 0x0000382d
  .word 0x24080200
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040982d
  .word 0x24040004
  .word 0xa0440000
  .word 0xde430058
  .word 0xfc430008
  .word 0xa0440010
  .word 0xdea30058
  .word 0xfc430018
  .word 0xfc500060
  .word 0x0260202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c0be204
  .word 0x00000000
  .word 0x24040003
  .word 0x0040282d
  .word 0x0000302d
  .word 0x0c0b75d8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x8c620b68
  .word 0x14400020
  .word 0x00000000
  .word 0x0c0b6e24
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24030028
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040020
  .word 0x24050026
  .word 0x0c0b6e00
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24030028
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24030001
  .word 0x8f82b6fc
  .word 0xac430b68
  .word 0x10000049
  .word 0x00000000
  .word 0x24020171
  .word 0x16220023
  .word 0x00000000
  .word 0x8c620b6c
  .word 0x14400020
  .word 0x00000000
  .word 0x0c0b6e24
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24030034
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040020
  .word 0x24050028
  .word 0x0c0b6e00
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24030034
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24030001
  .word 0x8f82b6fc
  .word 0xac430b6c
  .word 0x10000024
  .word 0x00000000
  .word 0x24020172
  .word 0x16220021
  .word 0x00000000
  .word 0x8c620b70
  .word 0x1440001e
  .word 0x00000000
  .word 0x0c0b6e24
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24030034
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040020
  .word 0x24050029
  .word 0x0c0b6e00
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24030034
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24030001
  .word 0x8f82b6fc
  .word 0xac430b70
  .word 0x8e850030
  .word 0x8fa4010c
  .word 0x00a0302d
  .word 0x0000382d
  .word 0x24080200
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xc78082e4
  .word 0xe7a000e8
  .word 0xc78082e8
  .word 0xe7a000ec
  .word 0xc78082ec
  .word 0xe7a000f0
  .word 0xc78082f0
  .word 0xe7a000d8
  .word 0xc78082f4
  .word 0xe7a000dc
  .word 0xc78082f8
  .word 0xe7a000e0
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x27a700e8
  .word 0x27a800d8
  .word 0x0c0a8f5c
  .word 0x00000000
  .word 0x0040902d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c04002f
  .word 0x2484cf80
  .word 0x0280282d
  .word 0x0c09fd04
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x3c0341f0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0x00031c3c
  .word 0x00031c3f
  .word 0x2463fffc
  .word 0xa4430048
  .word 0x2403001e
  .word 0xa443004a
  .word 0xfc500060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x12c0000f
  .word 0x00000000
  .word 0x3c04002f
  .word 0x2484cbe0
  .word 0x8e850030
  .word 0x0c09fd04
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e850030
  .word 0x8fa40110
  .word 0x00a0302d
  .word 0x0000382d
  .word 0x24080200
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040902d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0240202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c0be204
  .word 0x00000000
  .word 0x24040003
  .word 0x0040282d
  .word 0x24060001
  .word 0x0c0b75d8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404ffff
  .word 0x24050014
  .word 0x0c0a84a0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x2403001e
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000007
  .word 0x00000000
  .word 0x00101080
  .word 0x005d1021
  .word 0x8c440108
  .word 0x0c0ae40c
  .word 0x00000000
  .word 0x26100001
  .word 0x2e020003
  .word 0x1440fff8
  .word 0x00000000
  .word 0x24030002
  .word 0x8f82b6fc
  .word 0xa4430b58
  .word 0x10000180
  .word 0x00000000
  .word 0x8cc40b48
  .word 0x8cc50b44
  .word 0x8cc60b4c
  .word 0x0c0d4b14
  .word 0x00000000
  .word 0xde840000
  .word 0x3c023fff
  .word 0x3442ffff
  .word 0x0002183c
  .word 0x3402ffff
  .word 0x00021438
  .word 0x3442ffff
  .word 0x00432825
  .word 0x0c09f8e4
  .word 0x00000000
  .word 0x1440016f
  .word 0x00000000
  .word 0x24020002
  .word 0xa682006c
  .word 0x8f82b6fc
  .word 0x84420b60
  .word 0xa682006e
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0c0b0ddc
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b5988
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000011
  .word 0x00000000
  .word 0x00111080
  .word 0x005d1021
  .word 0x24520108
  .word 0x0000202d
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0xae420000
  .word 0x26220005
  .word 0x3044ffff
  .word 0x0c0be1f8
  .word 0x00000000
  .word 0x8e440000
  .word 0x0040282d
  .word 0x0c0ae434
  .word 0x00000000
  .word 0x26310001
  .word 0x2e220002
  .word 0x1440ffee
  .word 0x00000000
  .word 0x8e850030
  .word 0x8fa40108
  .word 0x00a0302d
  .word 0x0000382d
  .word 0x24080200
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040b02d
  .word 0xfc500060
  .word 0x02c0202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040014
  .word 0x0c0a85b0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdec30058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000b82d
  .word 0x0000882d
  .word 0x10000087
  .word 0x00000000
  .word 0x00111080
  .word 0x02821021
  .word 0x8c530038
  .word 0x926200c8
  .word 0x7fa200a0
  .word 0x8e640030
  .word 0x0c0af520
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa40108
  .word 0x8e850030
  .word 0x8e660030
  .word 0x24070001
  .word 0x24080200
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040f02d
  .word 0xa4570048
  .word 0xfc500060
  .word 0x03c0202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000063
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021080
  .word 0x02621021
  .word 0x804500f8
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e640030
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040a82d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xdfc30058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x02a0202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x16200014
  .word 0x00000000
  .word 0x16400012
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x84450b62
  .word 0x2402ffff
  .word 0x10a2000d
  .word 0x00000000
  .word 0x8e840030
  .word 0x0c0af614
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xdfc30058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021080
  .word 0x02621021
  .word 0x244200e0
  .word 0xafa200c0
  .word 0x9686006e
  .word 0x3249ffff
  .word 0x7ba200a0
  .word 0x304affff
  .word 0x8e840030
  .word 0x8e650030
  .word 0x966700cc
  .word 0x966800ce
  .word 0x8fab00c0
  .word 0x0c0af6f4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdea30058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x8fa600c0
  .word 0x966700cc
  .word 0x966800ce
  .word 0x0c0b5f88
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdea30058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0b6024
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdea30058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x26520001
  .word 0x7ba200a0
  .word 0x0242102b
  .word 0x1440ff9b
  .word 0x00000000
  .word 0x26f70001
  .word 0x26310001
  .word 0x9682006a
  .word 0x0222102b
  .word 0x1440ff77
  .word 0x00000000
  .word 0x8e850030
  .word 0x8fa4010c
  .word 0x00a0302d
  .word 0x0000382d
  .word 0x24080200
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040882d
  .word 0x24040004
  .word 0xa0440000
  .word 0xdec30058
  .word 0xfc430008
  .word 0x12200004
  .word 0x00000000
  .word 0xa2240010
  .word 0xde220058
  .word 0xfe220018
  .word 0xfe300060
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c0be204
  .word 0x00000000
  .word 0x24040003
  .word 0x0040282d
  .word 0x24060002
  .word 0x0c0b75d8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0a7e94
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040010
  .word 0x0000282d
  .word 0x0c0a8420
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0a85b0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040008
  .word 0x0c0a876c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000007
  .word 0x00000000
  .word 0x00101080
  .word 0x005d1021
  .word 0x8c440108
  .word 0x0c0ae40c
  .word 0x00000000
  .word 0x26100001
  .word 0x2e020002
  .word 0x1440fff8
  .word 0x00000000
  .word 0x24030003
  .word 0x8f82b6fc
  .word 0xa4430b58
  .word 0x10000032
  .word 0x00000000
  .word 0x8cc40b48
  .word 0x8cc50b44
  .word 0x8cc60b4c
  .word 0x0c0d4b14
  .word 0x00000000
  .word 0xde840000
  .word 0x3c023fff
  .word 0x3442ffff
  .word 0x0002183c
  .word 0x3402ffff
  .word 0x00021438
  .word 0x3442ffff
  .word 0x00432825
  .word 0x0c09f8e4
  .word 0x00000000
  .word 0x14400021
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c02fff7
  .word 0x3442ffff
  .word 0x00621024
  .word 0xac82000c
  .word 0x8f82b6fc
  .word 0x8c440b44
  .word 0x0c0a1e34
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440b48
  .word 0x0c0a1e34
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440b4c
  .word 0x0c0a1e34
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0xac400b44
  .word 0x8f82b6fc
  .word 0xac400b48
  .word 0x8f82b6fc
  .word 0xac400b4c
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0d4b14
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
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
  .word 0x27bd0120
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop

#pragma opt_loop_invariants on
#pragma opt_lifetimes on
// FUN_002ee640
void func_002ee640(BtlAction* action)
{
  BtlUnit* other;
  BtlUnit* unit;
  void* object;
  BtlPacket* parent;
  BtlPacket* packet;

  gBtl->flags &= ~0x02000000;
  gBtl->flags |= 0x00080000;
  unit = action->unit;
  other = NULL;
  unit->packetCount++;
  object = func_002b8f90(0);
  switch (unit->charId) {
  case 0x10a:
    func_002b90d0(object, func_002f87e0(7));
    packet = FUN_002dd690_packet_voice(3, (const char*)D_00699FE0);
    btlPacketRegister(packet, 1);
    break;
  case 0x109:
    func_002b90d0(object, func_002f87e0(8));
    packet = FUN_002dd690_packet_voice(3, (const char*)D_00699FF0);
    btlPacketRegister(packet, 1);
    break;
  }
  if (unit->charId == 0x10a) {
    other = gBtl->unitLists[UNIT_GENUS_EC].head;
    while (other != NULL) {
      if (other->charId == 0x109) {
        break;
      }
      other = other->next;
    }
  }
  parent = FUN_00284200_packet_voice(1.0f, unit, 0x12, 0, 2);
  parent->preUpdateDelay = 2;
  parent->actionUID = action->uid;
  btlPacketRegister(parent, 1);
  packet = FUN_002b8d60_packet_voice(3, 0xfff);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_0027fe90_packet_voice(unit, NULL, D_006978B0, NULL);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_002a3b40_packet_voice(NULL, 1);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 0);
  packet = FUN_002baf90_packet_voice(object, unit, unit, 0, 0x200);
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 2);
  if (other != NULL) {
    parent = FUN_002baf90_packet_voice(object, other, other, 1, 0x200);
    parent->actionUID = action->uid;
    btlPacketRegister(parent, 2);
    packet = FUN_002dd830_packet_voice(other, 10, 0, 7);
    packet->unk_00 = 5;
    packet->parentUID = parent->uid;
    packet->actionUID = action->uid;
    packet->preUpdateDelay = 0x96;
    btlPacketRegister(packet, 1);
    packet = FUN_0027f410_packet_voice((u32)func_002ecc20, (u32)other);
    packet->unk_00 = 5;
    packet->parentUID = parent->uid;
    packet->preUpdateDelay = 8;
    packet->actionUID = action->uid;
    btlPacketRegister(packet, 1);
    packet = FUN_00284200_packet_voice(1.0f, other, 0, 0, 1);
    packet->unk_00 = 5;
    packet->parentUID = parent->uid;
    packet->preUpdateDelay = 8;
    btlPacketRegister(packet, 1);
  }
  func_002b9030(object);
}
#pragma opt_lifetimes reset
#pragma opt_loop_invariants reset

// FUN_002eea10
u32 func_002eea10(BtlAction* action)
{
    BtlPacket* packet;

    if (action != btlActionCurrent())
    {
        if ((action->unit->flags3 & BTLUNIT_FLAG3_ENDURE) != 0)
        {
            return 1;
        }
    }
    else
    {
        action->unit->flags3 &= ~BTLUNIT_FLAG3_ENDURE;
    }

    if (btlPacketFindFirstByActionUID(action->uid, BTL_UIDMAX) == NULL)
    {
        gBtl->flags &= ~0x80000;
        FUN_002d7890(action, 0);
        FUN_0029a320(action);
        action->unit->packetCount--;
        gBtl->flags |= 0x2000000;

        packet = FUN_0029fa50(0x10);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        packet = FUN_002a1080(0x10, 4);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        packet = FUN_002a16c0(0x10);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        return 0;
    }

    return 1;
}


// FUN_002eeb70
void func_002eeb70(BtlAction* action)
{
    BtlUnit* unit;

    if ((action->unk_1a & 1) != 0)
    {
        unit = action->unit;
        if (unit->genus == 1)
        {
            switch (unit->charId)
            {
                case 0x10b:
                case 0x10c:
                    action->unk_1a |= 0x10;
                    unit->flags3 |= 0x100;
                    unit->flags3 |= 0x40;
                    unit->flags3 |= 0x80;
                    unit->datUnit->flags |= 0x40;
                    break;
            }
            switch (unit->charId)
            {
                case 0x10b:
                    FUN_00288f80(unit, 0xd0);
                    break;
                case 0x10c:
                    FUN_00288f80(unit, 0xd1);
                    break;
            }
        }
    }
}

// FUN_002eec60
void func_002eec60(void)

{
  typedef struct {
    u32 data[6];
    s16 ids[4];
    RwV3d position;
  } VoicePositionWork;
  typedef struct {
    s16 a;
    s16 b;
    s16 c;
  } VoiceIds;
  VoicePositionWork work;
  u32 uVar1;
  u32 uVar2;
  int iVar4;
  u32 *puVar6;
  u32 *puVar5;
  int copyCount;
  int iVar3;
  s16 sVar7;
  puVar6 = (u32*)DAT_0069a000_abs;

  puVar5 = work.data;
  copyCount = 3;
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    copyCount = copyCount + -1;
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
  } while (0 < copyCount);
  *(VoiceIds *)&work.ids[0] = *(VoiceIds *)&DAT_007cc9b0_s16;
  sVar7 = 0;
  work.position.y = 0.0f;
  for (iVar4 = *(int *)(DAT_007ce3ec + 0x150); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xa34)) {
    if (*(u16 *)(iVar4 + 0xa4) == 1) {
      work.position.x = 150.0f;
      work.position.z = 350.0f;
      *(u8 *)(iVar4 + 0x9f0) = 2;
    }
    else {
      iVar3 = (int)sVar7;
      work.position.x = *(f32*)((u8*)&work + iVar3 * 8);
      work.position.z = *(f32*)((u8*)&work + iVar3 * 8 + 4);
      *(u8 *)(iVar4 + 0x9f0) = (u8)work.ids[iVar3];
      sVar7++;
    }
    FUN_002d2280((s16*)(iVar4 + 0x94),(s16*)(iVar4 + 0x96),&work.position.x);
    FUN_0027f650(iVar4,&work.position.x);
  }
  for (iVar3 = *(int *)(DAT_007ce3ec + 0x158); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xa34)) {
    switch (*(u16 *)(iVar3 + 0xa4)) {
    case 0x10b:
      work.position.x = -200.0f;
      work.position.z = -350.0f;
      break;
    case 0x10c:
      work.position.x = 200.0f;
      work.position.z = -350.0f;
      break;
    default:
      break;
    }
    FUN_002d2280((s16*)(iVar3 + 0x94),(s16*)(iVar3 + 0x96),&work.position.x);
    FUN_0027f650(iVar3,&work.position.x);
  }
  return;
}

// FUN_002eee20
u32 func_002eee20(BtlAction* action, f32* position)
{
  BtlUnit* unit;
  BtlUnit* target;
  RwV3d sourcePosition;
  RwV3d targetPosition;
  RwV3d direction;
  u16 moveId;
  f32 distance;
  u32 result;

  unit = action->unit;
  if (unit->genus != UNIT_GENUS_EC) {
    result = 0;
  }
  else {
    if (unit->charId != 0x10c) {
      result = 0;
    }
    else {
      if (action->target.targetedCount != 1) {
        result = 0;
      }
      else {
        if (action->target.commandId != 2) {
          result = 0;
        }
        else {
          if ((*(u8 *)(DAT_007ce3f8 + action->target.specificId * 0x2c) & 2) == 0) {
            result = 0;
          }
          else {
            target = action->target.targetedActions[0]->unit;
            FUN_00280050(unit, &sourcePosition);
            FUN_00280480(target, unit, &targetPosition);
            direction.x = sourcePosition.x - targetPosition.x;
            direction.z = sourcePosition.z - targetPosition.z;
            direction.y = 0.0f;
            FUN_004c69f0(&direction, &direction);
            if (FUN_002d5e10(action) != 0) {
              moveId = 0xb;
            }
            else {
              moveId = 4;
            }
            distance = FUN_002812d0(unit, target, moveId);
            direction.x *= distance;
            direction.y *= distance;
            direction.z *= distance;
            position[0] = targetPosition.x + direction.x;
            position[1] = targetPosition.y + direction.y;
            position[2] = targetPosition.z + direction.z;
            result = 1;
          }
        }
      }
    }
  }
  return result;
}

// FUN_002ef000
void func_002ef000(BtlAction* action)
{
  BtlUnit* unit;
  void* object;
  BtlPacket* parent;
  BtlPacket* packet;
  s32 state;

  gBtl->flags &= ~0x02000000;
  gBtl->flags |= 0x00080000;
  unit = action->unit;
  switch (unit->charId) {
  case 0x10b:
    state = 2;
    packet = (BtlPacket*)func_002e2cb0(0x2ff);
    packet->preUpdateDelay = 3;
    btlPacketRegister(packet, 1);
    break;
  case 0x10c:
    state = 3;
    packet = (BtlPacket*)func_002e2cb0(0x312);
    packet->preUpdateDelay = state;
    btlPacketRegister(packet, 1);
    break;
  }
  object = func_002b8f90(0);
  func_002b90d0(object, func_002f87e0(state));
  parent = FUN_00284200_packet_voice(1.0f, unit, 0x12, 0, 2);
  parent->preUpdateDelay = 3;
  parent->actionUID = action->uid;
  btlPacketRegister(parent, 1);
  packet = FUN_002b8d60_packet_voice(1, 0xfff);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_0027fe90_packet_voice(unit, NULL, D_006978B0, NULL);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_002a3b40_packet_voice(NULL, 1);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 0);
  packet = FUN_002baf90_packet_voice(object, unit, unit, 0, 0x200);
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 2);
  func_002b9030(object);
}

// FUN_002ef250
u32 func_002ef250(BtlAction* action)
{
    BtlPacket* packet;

    if (btlPacketFindFirstByActionUID(action->uid, BTL_UIDMAX) == NULL)
    {
        gBtl->flags &= ~0x80000;
        FUN_002d7890(action, 0);
        FUN_0029a320(action);
        gBtl->flags |= 0x2000000;

        packet = FUN_0029fa50(0x10);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        packet = FUN_002a1080(0x10, 4);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        packet = FUN_002a16c0(0x10);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        return 0;
    }

    return 1;
}

// FUN_002ef360
void func_002ef360(void)
{
  typedef struct {
    u32 data[6];
    s16 ids[4];
    RwV3d position;
  } VoicePositionWork;
  typedef struct {
    s16 a;
    s16 b;
    s16 c;
  } VoiceIds;
  VoicePositionWork work;
  u32 uVar1;
  u32 uVar2;
  int iVar4;
  u32 *puVar6;
  u32 *puVar5;
  int copyCount;
  int iVar3;
  s16 sVar7;

  puVar6 = (u32*)DAT_0069a060;
  puVar5 = work.data;
  copyCount = 3;
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    copyCount = copyCount + -1;
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
  } while (0 < copyCount);
  *(VoiceIds *)&work.ids[0] = *(VoiceIds *)&DAT_007cc9b8_s16;
  sVar7 = 0;
  work.position.y = 0.0f;
  for (iVar4 = *(int *)(DAT_007ce3ec + 0x150); iVar4 != 0;
       iVar4 = *(int *)(iVar4 + 0xa34)) {
    if (*(u16 *)(iVar4 + 0xa4) == 1) {
      work.position.x = 150.0f;
      work.position.z = 500.0f;
      *(u8 *)(iVar4 + 0x9f0) = 2;
    }
    else {
      iVar3 = (int)sVar7;
      work.position.x = *(f32*)((u8*)&work + iVar3 * 8);
      work.position.z = *(f32*)((u8*)&work + iVar3 * 8 + 4);
      *(u8 *)(iVar4 + 0x9f0) = (u8)work.ids[iVar3];
      sVar7++;
    }
    FUN_002d2280((s16*)(iVar4 + 0x94), (s16*)(iVar4 + 0x96), &work.position.x);
    FUN_0027f650(iVar4, &work.position.x);
  }
  for (iVar3 = *(int *)(DAT_007ce3ec + 0x158); iVar3 != 0;
       iVar3 = *(int *)(iVar3 + 0xa34)) {
    switch (*(u16 *)(iVar3 + 0xa4)) {
    case 0x10d:
      work.position.x = 0.0f;
      work.position.z = -500.0f;
      break;
    case 0x116:
      work.position.x = -250.0f;
      work.position.z = -450.0f;
      break;
    case 0x117:
      work.position.x = 0.0f;
      work.position.z = -200.0f;
      break;
    case 0x118:
      work.position.x = 250.0f;
      work.position.z = -450.0f;
      break;
    case 0x119:
      work.position.x = -250.0f;
      work.position.z = 100.0f;
      break;
    case 0x127:
      work.position.x = 250.0f;
      work.position.z = 100.0f;
      break;
    default:
      break;
    }
    FUN_002d2280((s16*)(iVar3 + 0x94), (s16*)(iVar3 + 0x96), &work.position.x);
    FUN_0027f650(iVar3, &work.position.x);
  }
}

// FUN_002ef5a0
void func_002ef5a0(void)
{
    BtlUnit* unit;

    for (unit = *(BtlUnit**)(DAT_007ce3ec + 0x158); unit != NULL; unit = unit->next)
    {
        switch (unit->charId)
        {
            case 0x10d:
                FUN_002d3fe0(unit);
                ((u8*)unit->mdl)[0x388] |= 0x20;
                ((u8*)unit->mdl)[0x388] |= 0x80;
                break;
            case 0x119:
                *(u32*)(DAT_007ce3ec + 0xb58) = 0;
                ((u8*)unit->mdl)[0x41d] = 0;
                break;
            case 0x127:
                *(u32*)(DAT_007ce3ec + 0xb5c) = 0;
                ((u8*)unit->mdl)[0x41d] = 0;
                break;
        }
    }
}
#pragma alias FUN_002a3e80_short FUN_002a3e80



/* W212: matched 002e82b0's per-branch playback aggregates plus the retail u32 pointer contract improve nd912/1272 to nd848/1268 (window 1312); residual begins at frame 0xd0 versus retail 0x120. */
#pragma opt_loop_invariants on
// FUN_002ef670
void func_002ef670(void)
{
  BtlUnit* target;
  void* object;
  BtlPacket* packet;
  BtlUnit* unit;
  BtlUnit* args[3];
  s16 count;
  u32 raw;

  object = (void*)FUN_002b8f90_u32_voice(0);
  FUN_002b90d0(object, (void*)FUN_002f87e0_u32_voice(1));
  count = 0;
  target = NULL;
  args[0] = NULL;
  args[1] = NULL;
  args[2] = NULL;
  for (unit = gBtl->unitLists[UNIT_GENUS_PC].head;
       unit != NULL; unit = unit->next) {
    switch (unit->charId) {
    case 1:
      target = unit;
      break;
    default:
      args[2 - count] = unit;
      count++;
      break;
    }
  }
  raw = FUN_002bc950_u32_voice(args[0], args[1], args[2]);
  FUN_0027ed20_voice(raw, 1);
  packet = FUN_002baf90_packet_voice(object, target, target, 0, 0x200);
  FUN_0027ed20_voice((u32)packet, 2);
  raw = FUN_002bc950_u32_voice(NULL, NULL, NULL);
  *(u8*)raw = 4;
  *(u64*)((u8*)raw + 8) = *(u64*)((u8*)packet + 0x58);
  FUN_0027ed20_voice(raw, 1);
  FUN_002b9030(object);
}
#pragma opt_loop_invariants off


/* W212: template 002f6510 confirms aggregate-based camera math, but this target remains an incomplete reconstruction at nd865/1156 (window 1280); residual begins at frame 0xf0 versus retail 0x130 and retail has 124 bytes of real tail code, so no honest local transfer was kept. */

/* Removing this loses FUN_002ef7e0 (MATCH nd0 -> MISMATCH nd14) - measured W161. */
#pragma opt_loop_invariants on
// FUN_002ef7e0
void func_002ef7e0(void)
{
    BtlUnit* target;
    void* object;
    BtlPacket* parent;
    BtlUnit* unit;
    BtlPacket* packet;

    gBtl->flags &= ~0x02000000;
    object = func_002b8f90(0);
    func_002b90d0(object, func_002f87e0(9));
    target = NULL;
    for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
         unit != NULL; unit = unit->next) {
        switch (unit->charId) {
        case 0x10d:
            target = unit;
            break;
        }
    }
    packet = FUN_002dd690_packet_voice(3, DAT_0069a0f8);
    btlPacketRegister(packet, 1);
    parent = FUN_00284200_packet_voice(1.0f, target, 0x12, 0, 2);
    parent->preUpdateDelay = 2;
    btlPacketRegister(parent, 1);
    packet = FUN_002b8d60_packet_voice(3, 0xfff);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    btlPacketRegister(packet, 1);
    packet = FUN_0027fe90_packet_voice(target, NULL, D_006978B0, NULL);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    btlPacketRegister(packet, 1);
    packet = FUN_002a3b40_packet_voice(NULL, 1);
    packet->unk_00 = 4;
    packet->parentUID = parent->uid;
    btlPacketRegister(packet, 0);
    packet = FUN_002baf90_packet_voice(object, target, target, 0, 0x200);
    btlPacketRegister(packet, 2);
    func_002b9030(object);
}
#pragma opt_loop_invariants reset

/* Retail reconstruction: action/mode dispatch 0x2e82d0-0x2e8464; playback A 0x2e8470-0x2e8584; playback B/C 0x2e8590-0x2e8784. Every added statement maps to these retail ranges; unjustified bytes: 0. */
// FUN_002ef9d0
int func_002ef9d0(void)
{
  /* Caller-specific return width: retail consumes only the s32 result in this path. */
  extern s32 FUN_0030b5a0();
  BtlUnit* enemy;
  BtlAction* action;
  s32 found;
  BtlUnit* unit;
  BtlPacket* packet;
  u32 data[8];

  found = 0;
  for (enemy = gBtl->unitLists[UNIT_GENUS_EC].head;
       enemy != NULL; enemy = enemy->next) {
    if (enemy->charId == 0x10d &&
        FUN_0030b5a0(enemy->datUnit, 0) != 0) {
      found = 1;
      break;
    }
  }
  if (found != 0) {
    FUN_002d5dc0(data);
    data[0] = 0xfff00001;
    for (action = gBtl->actionList.tail;
         action != NULL; action = action->prev) {
      if ((action->unk_1a & 1) != 0) {
        unit = action->unit;
        if (unit->genus == UNIT_GENUS_EC &&
            unit->charId != 0x10d &&
            FUN_0030b5a0(unit->datUnit, 0) == 0) {
          packet = FUN_002d7e20_packet_voice(action, action, data, 1, 1);
          FUN_0027ed20_voice((u32)packet, 1);
          packet = FUN_00284200_packet_voice(1.0f, unit, 2, 0, 0);
          FUN_0027ed20_voice((u32)packet, 1);
        }
      }
    }
  }
  return found;
}

// FUN_002efb40
void func_002efb40(BtlUnit* unit)
{
    u8* value;

    if (unit->genus == 1 && (unit->flags2 & 2) != 0)
    {
        switch (unit->charId)
        {
            case 0x119:
            case 0x127:
                if (datCalcChkBadStatus(unit->datUnit, 0x400) != 0)
                {
                    *(u32*)(((unit->charId != 0x119) << 2) + DAT_007ce3ec + 0xb58) = 1;
                }
                else
                {
                    *(u32*)(((unit->charId != 0x119) << 2) + DAT_007ce3ec + 0xb58) = 0;
                }
                if (*(u32*)(((unit->charId != 0x119) << 2) + DAT_007ce3ec + 0xb58) != 0)
                {
                    value = (u8*)unit->mdl + 0x41d;
                    if (*value < 0xdf)
                    {
                        *value += 0x20;
                    }
                    else
                    {
                        *value = 0xff;
                    }
                }
                else
                {
                    value = (u8*)unit->mdl + 0x41d;
                    if (*value > 0x20)
                    {
                        *value -= 0x20;
                    }
                    else
                    {
                        *value = 0;
                    }
                }
                break;
        }
    }
}

s32 func_002f0580(BtlAction* action);
void func_002f05f0(BtlAction* action);
s32 func_002f0e30(BtlAction* action);
// FUN_002efc90
void func_002efc90(u32 param_1)

{
  func_002e4220((u32)func_002efe50,(u32)func_002f0580,param_1);
  return;
}

// FUN_002efcd0
void func_002efcd0(u32 param_1)

{
  func_002e4220((u32)func_002f05f0,(u32)func_002f0e30,param_1);
  return;
}

// FUN_002efd10
u32 func_002efd10(void)

{
  return *(u32 *)(DAT_007ce3ec + 0xb54);
}

// FUN_002efd20
u32 func_002efd20(BtlUnit* unit)

{
  BtlAction* action;
  
  action = FUN_0029a1d0(unit);
  *(u32 *)(DAT_007ce3ec + 0xb54) = 0;
  action->unk_1a &= 0xfff7;
  FUN_00300560(unit->datUnit,0x100000);
  FUN_002831c0(unit,6);
  FUN_002d3fe0(unit);
  if ((unit->flags2 & 2) != 0) {
    *((u8*)unit->mdl + 0x388) |= 0x20;
  }
  return 1;
}

// FUN_002efdb0
u32 func_002efdb0(BtlUnit* unit)

{
  BtlAction* action;
  
  action = FUN_0029a1d0(unit);
  *(u32 *)(DAT_007ce3ec + 0xb54) = 1;
  action->unk_1a |= 8;
  FUN_003004f0(unit->datUnit,0x100000);
  FUN_002831c0(unit,6);
  FUN_002d3e00(unit,0);
  if ((unit->flags2 & 2) != 0) {
    *((u8*)unit->mdl + 0x388) &= 0xdf;
  }
  return 1;
}

// FUN_002efe50
#ifndef PC_BUILD
asm void func_002efe50(BtlAction* action)
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
  .word 0x0080a02d
  .word 0x8496006e
  .word 0xdc910000
  .word 0x84970076
  .word 0x0000202d
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0x0040a82d
  .word 0x0017f43c
  .word 0x001ef43f
  .word 0x24020119
  .word 0x17c2000a
  .word 0x00000000
  .word 0x24040007
  .word 0x0c0be1f8
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0040282d
  .word 0x0c0ae434
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x24040008
  .word 0x0c0be1f8
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0040282d
  .word 0x0c0ae434
  .word 0x00000000
  .word 0x32c5ffff
  .word 0x8e840030
  .word 0x0c0af564
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc510060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x24050007
  .word 0x24060006
  .word 0x24070002
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040902d
  .word 0xfc510060
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x24050007
  .word 0x0c0a0e34
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x7fa200a0
  .word 0xde500058
  .word 0x24040003
  .word 0x24050fff
  .word 0x0c0ae358
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc510060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x0000282d
  .word 0x3c060069
  .word 0x24c678b0
  .word 0x0000382d
  .word 0x0c09ffa4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc510060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc510060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050011
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc510060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x27a500b8
  .word 0x0c0bf76c
  .word 0x00000000
  .word 0x8e840030
  .word 0x27a500b8
  .word 0x0000302d
  .word 0x0c0a08ac
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc510060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c53014c
  .word 0x1000001a
  .word 0x00000000
  .word 0x12930017
  .word 0x00000000
  .word 0x9662001a
  .word 0x30420001
  .word 0x10400013
  .word 0x00000000
  .word 0x8e640030
  .word 0x3c0200ff
  .word 0x3445ffff
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080002
  .word 0x0000482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc510060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e7304a8
  .word 0x1660ffe6
  .word 0x00000000
  .word 0x32d2ffff
  .word 0x0240202d
  .word 0x27a500cc
  .word 0x27a600c8
  .word 0x0c0a7a98
  .word 0x00000000
  .word 0x8fa400cc
  .word 0x8fa500c8
  .word 0x24060010
  .word 0x0c0a7d2c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc500008
  .word 0xfc510060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0a7b00
  .word 0x00000000
  .word 0x0040982d
  .word 0x0240202d
  .word 0x27a500cc
  .word 0x27a600c8
  .word 0x0c0a7b20
  .word 0x00000000
  .word 0x0260202d
  .word 0x8fa500cc
  .word 0x8fa600c8
  .word 0x24070010
  .word 0x24080004
  .word 0x0c0a8014
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc500008
  .word 0xfc510060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0a7b14
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050010
  .word 0x0c0a84a0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc500008
  .word 0xfc510060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x0240282d
  .word 0x24060010
  .word 0x0c0a86c0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc500008
  .word 0xfc510060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x32f3ffff
  .word 0x8f82b6fc
  .word 0x8c440bbc
  .word 0x0260282d
  .word 0x0c0bfd50
  .word 0x00000000
  .word 0x24040001
  .word 0x0260282d
  .word 0x0040302d
  .word 0x0c0a2594
  .word 0x00000000
  .word 0x0040b02d
  .word 0x8c520030
  .word 0x0240202d
  .word 0x03c0282d
  .word 0x0c0a2270
  .word 0x00000000
  .word 0x0c0adc78
  .word 0x00000000
  .word 0xafa000b8
  .word 0x3c02c47a
  .word 0xafa200bc
  .word 0xafa000c0
  .word 0x0240202d
  .word 0x27a500b8
  .word 0x0c09fd94
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0d4b14
  .word 0x00000000
  .word 0x0240202d
  .word 0x0260282d
  .word 0x2406007e
  .word 0x0c0a15a4
  .word 0x00000000
  .word 0x0040982d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc500008
  .word 0x7ba300a0
  .word 0x24630006
  .word 0xa4430048
  .word 0xfc510060
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x02a0202d
  .word 0x8e850030
  .word 0x0240302d
  .word 0x0000382d
  .word 0x24080200
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040802d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xfc510060
  .word 0x0200202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405ffff
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0100482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24050001
  .word 0xa4450048
  .word 0xfc510060
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050025
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0x2403001e
  .word 0xa443004a
  .word 0xfc510060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c52014c
  .word 0x1000001b
  .word 0x00000000
  .word 0x12920018
  .word 0x00000000
  .word 0x12960016
  .word 0x00000000
  .word 0x9642001a
  .word 0x30420001
  .word 0x10400012
  .word 0x00000000
  .word 0x8e440030
  .word 0x2405ffff
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0xfc510060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e5204a8
  .word 0x1640ffe5
  .word 0x00000000
  .word 0x0c07f750
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0a7e94
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc510060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040010
  .word 0x24050004
  .word 0x0c0a8420
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc510060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0a85b0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc510060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040008
  .word 0x0c0a876c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc510060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0c0ae40c
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

// FUN_002f0580
s32 func_002f0580(BtlAction* action)
{
    if (btlPacketFindFirstByActionUID(action->uid, BTL_UIDMAX) == NULL)
    {
        FUN_00352c50(0, 0, 0);
        return 0;
    }

    return 1;
}

#pragma opt_common_subs off
// FUN_002f05f0
#ifndef PC_BUILD
asm void func_002f05f0(BtlAction *action)
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
  .word 0x0080802d
  .word 0x8496006e
  .word 0xdc920000
  .word 0x0000202d
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0x0040f02d
  .word 0x24040006
  .word 0x0c0be1f8
  .word 0x00000000
  .word 0x03c0202d
  .word 0x0040282d
  .word 0x0c0ae434
  .word 0x00000000
  .word 0x32c5ffff
  .word 0x8e040030
  .word 0x0c0af564
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc520060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e040030
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040a02d
  .word 0xfc520060
  .word 0x0280202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde910058
  .word 0x24040003
  .word 0x24050fff
  .word 0x0c0ae358
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xfc520060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e040030
  .word 0x0000282d
  .word 0x3c060069
  .word 0x24c678b0
  .word 0x0000382d
  .word 0x0c09ffa4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xfc520060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xfc520060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050011
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xfc520060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e040030
  .word 0x27a500b8
  .word 0x0c0bf76c
  .word 0x00000000
  .word 0x8e040030
  .word 0x27a500b8
  .word 0x0000302d
  .word 0x0c0a08ac
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xfc520060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c53014c
  .word 0x1000001a
  .word 0x00000000
  .word 0x12130017
  .word 0x00000000
  .word 0x9662001a
  .word 0x30420001
  .word 0x10400013
  .word 0x00000000
  .word 0x8e640030
  .word 0x3c0200ff
  .word 0x3445ffff
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080002
  .word 0x0000482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xfc520060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e7304a8
  .word 0x1660ffe6
  .word 0x00000000
  .word 0x32d3ffff
  .word 0x0260202d
  .word 0x27a500dc
  .word 0x27a600d8
  .word 0x0c0a7a98
  .word 0x00000000
  .word 0x8fa400dc
  .word 0x8fa500d8
  .word 0x24060010
  .word 0x0c0a7d2c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xfc520060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0a7b00
  .word 0x00000000
  .word 0x0040b02d
  .word 0x0260202d
  .word 0x27a500dc
  .word 0x27a600d8
  .word 0x0c0a7b20
  .word 0x00000000
  .word 0x02c0202d
  .word 0x8fa500dc
  .word 0x8fa600d8
  .word 0x24070010
  .word 0x0000402d
  .word 0x0c0a8014
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xfc520060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0a7b14
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050010
  .word 0x0c0a84a0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xfc520060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0200202d
  .word 0x0260282d
  .word 0x24060010
  .word 0x0c0a86c0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xfc520060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000b82d
  .word 0x0000b02d
  .word 0x10000044
  .word 0x00000000
  .word 0x00031040
  .word 0x02021021
  .word 0x84420076
  .word 0x7fa200a0
  .word 0x3055ffff
  .word 0x8f82b6fc
  .word 0x8c440bbc
  .word 0x02a0282d
  .word 0x0c0bfd50
  .word 0x00000000
  .word 0x24040001
  .word 0x02a0282d
  .word 0x0040302d
  .word 0x0c0a2594
  .word 0x00000000
  .word 0x8c530030
  .word 0x0017143c
  .word 0x0002143f
  .word 0x00021080
  .word 0x005d1021
  .word 0xac5300c8
  .word 0x26e20001
  .word 0x0002bc3c
  .word 0x0017bc3f
  .word 0x7ba200a0
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0260202d
  .word 0x0c0a2270
  .word 0x00000000
  .word 0x0260202d
  .word 0x02a0282d
  .word 0x2406017e
  .word 0x0c0a15a4
  .word 0x00000000
  .word 0x0040a82d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0x2403001e
  .word 0xa4430048
  .word 0xfc520060
  .word 0x02a0202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405ffff
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0100482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdea30058
  .word 0xfc430008
  .word 0x24050001
  .word 0xa4450048
  .word 0xfc520060
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x26c20001
  .word 0x0002b43c
  .word 0x0016b43f
  .word 0x00161c3c
  .word 0x00031c3f
  .word 0x28620003
  .word 0x1440ffb9
  .word 0x00000000
  .word 0x8fa400c8
  .word 0x8fa500cc
  .word 0x8fa600d0
  .word 0x0c0d4b14
  .word 0x00000000
  .word 0x0c0adc78
  .word 0x00000000
  .word 0xafa000b8
  .word 0x3c02c47a
  .word 0xafa200bc
  .word 0xafa000c0
  .word 0x0000882d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00031080
  .word 0x005d1021
  .word 0x8c4400c8
  .word 0x27a500b8
  .word 0x0c09fd94
  .word 0x00000000
  .word 0x26220001
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x00111c3c
  .word 0x00031c3f
  .word 0x28620003
  .word 0x1440fff3
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440ca8
  .word 0x8e050030
  .word 0x0000302d
  .word 0xdea70058
  .word 0x24080300
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050002
  .word 0x24060005
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e050030
  .word 0x03c0202d
  .word 0x00a0302d
  .word 0x0000382d
  .word 0x24080200
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdea30058
  .word 0xfc430008
  .word 0xfc520060
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c04002f
  .word 0x2484fd20
  .word 0x8e050030
  .word 0x0c09fd04
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x24030078
  .word 0xa4430048
  .word 0xfc520060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040003
  .word 0x24050fff
  .word 0x0c0ae358
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc520060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050025
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x2403001e
  .word 0xa443004a
  .word 0xfc520060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c53014c
  .word 0x10000019
  .word 0x00000000
  .word 0x12130016
  .word 0x00000000
  .word 0x9662001a
  .word 0x30420001
  .word 0x10400012
  .word 0x00000000
  .word 0x8e640030
  .word 0x2405ffff
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc520060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e7304a8
  .word 0x1660ffe7
  .word 0x00000000
  .word 0x0c07f750
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0a7e94
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc520060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040010
  .word 0x0000282d
  .word 0x0c0a8420
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc520060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0a85b0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc520060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040008
  .word 0x0c0a876c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc520060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x03c0202d
  .word 0x0c0ae40c
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
  .word 0x27bd00e0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_common_subs reset

// FUN_002f0e30
s32 func_002f0e30(BtlAction* action)
{
    if (btlPacketFindFirstByActionUID(action->uid, BTL_UIDMAX) == NULL)
    {
        FUN_00352c50(0, 0, 0);
        return 0;
    }

    return 1;
}

// FUN_002f0ea0
#ifndef PC_BUILD
asm void func_002f0ea0(u64 *param_1)
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
  .word 0x8f84b6fc
  .word 0x94900b50
  .word 0x8c83000c
  .word 0x3c020008
  .word 0x00621025
  .word 0xac82000c
  .word 0x0000b02d
  .word 0x0000882d
  .word 0x8f82b6fc
  .word 0x8c520158
  .word 0x1000001c
  .word 0x00000000
  .word 0x8e440a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x14400015
  .word 0x00000000
  .word 0x964300a4
  .word 0x24020118
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020117
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020116
  .word 0x10620009
  .word 0x00000000
  .word 0x2402010d
  .word 0x10620003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x0240b02d
  .word 0x10000003
  .word 0x00000000
  .word 0x26220001
  .word 0x3051ffff
  .word 0x8e520a34
  .word 0x1640ffe4
  .word 0x00000000
  .word 0x3210ffff
  .word 0x3222ffff
  .word 0x0050f026
  .word 0x2fde0001
  .word 0x0000202d
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0x0040902d
  .word 0x0000202d
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0x0040b82d
  .word 0x24020001
  .word 0x1602000a
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0be1f8
  .word 0x00000000
  .word 0x0240202d
  .word 0x0040282d
  .word 0x0c0ae434
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0be1f8
  .word 0x00000000
  .word 0x0240202d
  .word 0x0040282d
  .word 0x0c0ae434
  .word 0x00000000
  .word 0x13c0000a
  .word 0x00000000
  .word 0x24040005
  .word 0x0c0be1f8
  .word 0x00000000
  .word 0x02e0202d
  .word 0x0040282d
  .word 0x0c0ae434
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x24040004
  .word 0x0c0be1f8
  .word 0x00000000
  .word 0x02e0202d
  .word 0x0040282d
  .word 0x0c0ae434
  .word 0x00000000
  .word 0x0000982d
  .word 0x0000882d
  .word 0x0000a82d
  .word 0x10000019
  .word 0x00000000
  .word 0x32a2ffff
  .word 0x00021880
  .word 0x8f82b6fc
  .word 0x00431021
  .word 0x8c530b44
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e640030
  .word 0x24050012
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030002
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x26a20001
  .word 0x3055ffff
  .word 0x32a2ffff
  .word 0x0050102a
  .word 0x1440ffe5
  .word 0x00000000
  .word 0x0c0be204
  .word 0x00000000
  .word 0x24040003
  .word 0x0040282d
  .word 0x0000302d
  .word 0x0c0b75d8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030002
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040003
  .word 0x24050fff
  .word 0x0c0ae358
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000a82d
  .word 0x10000019
  .word 0x00000000
  .word 0x32a2ffff
  .word 0x00021880
  .word 0x8f82b6fc
  .word 0x00431021
  .word 0x8c530b44
  .word 0x8e640030
  .word 0x0000282d
  .word 0x3c060069
  .word 0x24c678b0
  .word 0x0000382d
  .word 0x0c09ffa4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x26a20001
  .word 0x3055ffff
  .word 0x32a2ffff
  .word 0x0050102a
  .word 0x1440ffe5
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e650030
  .word 0x0240202d
  .word 0x00a0302d
  .word 0x0000382d
  .word 0x24080200
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040982d
  .word 0xde830000
  .word 0xfc430060
  .word 0x0260202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000034
  .word 0x00000000
  .word 0x3222ffff
  .word 0x00021880
  .word 0x8f82b6fc
  .word 0x00431021
  .word 0x8c550b44
  .word 0x8ea50030
  .word 0x0240202d
  .word 0x00a0302d
  .word 0x24070001
  .word 0x24080200
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24030037
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8ea40030
  .word 0x24050002
  .word 0x0c0a1ec8
  .word 0x00000000
  .word 0x8ea40030
  .word 0x3c0200ff
  .word 0x3445ffff
  .word 0x24060006
  .word 0x0000382d
  .word 0x24080004
  .word 0x0000482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24030041
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x26220001
  .word 0x3051ffff
  .word 0x3222ffff
  .word 0x0050102a
  .word 0x1440ffca
  .word 0x00000000
  .word 0x13c00015
  .word 0x00000000
  .word 0x3c04002f
  .word 0x2484fdb0
  .word 0x02c0282d
  .word 0x0c09fd04
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c0a6b48
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x94430018
  .word 0x34630008
  .word 0xa4430018
  .word 0x02e0202d
  .word 0x02c0282d
  .word 0x02c0302d
  .word 0x0000382d
  .word 0x24080200
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040802d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x0200202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x13c00022
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420b60
  .word 0x1440001e
  .word 0x00000000
  .word 0x0c0b6e24
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0x24030041
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040020
  .word 0x24050031
  .word 0x0c0b6e00
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0x24030041
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24030001
  .word 0x8f82b6fc
  .word 0xac430b60
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020040
  .word 0x00621025
  .word 0xac82000c
  .word 0x8f83b6fc
  .word 0x94620018
  .word 0x34420007
  .word 0xa4620018
  .word 0x02e0202d
  .word 0x0c0ae40c
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0ae40c
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
#endif /* PC_BUILD: asm function omitted */

// FUN_002f14a0
#ifndef PC_BUILD
asm u32 func_002f14a0(BtlAction* action)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x8f82b6fc
  .word 0x94510b50
  .word 0x0000802d
  .word 0x10000019
  .word 0x00000000
  .word 0x3202ffff
  .word 0x00021880
  .word 0x8f82b6fc
  .word 0x00431021
  .word 0x8c530b44
  .word 0x0c0a6b48
  .word 0x00000000
  .word 0x12620009
  .word 0x00000000
  .word 0x8e620030
  .word 0x8c42009c
  .word 0x30420010
  .word 0x10400009
  .word 0x00000000
  .word 0x24020001
  .word 0x10000054
  .word 0x00000000
  .word 0x8e640030
  .word 0x8c83009c
  .word 0x2402ffef
  .word 0x00621024
  .word 0xac82009c
  .word 0x26020001
  .word 0x3050ffff
  .word 0x3202ffff
  .word 0x0051102a
  .word 0x1440ffe5
  .word 0x00000000
  .word 0xde440000
  .word 0x3c023fff
  .word 0x3442ffff
  .word 0x0002183c
  .word 0x3402ffff
  .word 0x00021438
  .word 0x3442ffff
  .word 0x00432825
  .word 0x0c09f8e4
  .word 0x00000000
  .word 0x1440003c
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c02fff7
  .word 0x3442ffff
  .word 0x00621024
  .word 0xac82000c
  .word 0x0000802d
  .word 0x1000000f
  .word 0x00000000
  .word 0x3202ffff
  .word 0x00021880
  .word 0x8f82b6fc
  .word 0x00431021
  .word 0x8c520b44
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c0b5e24
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0a68c8
  .word 0x00000000
  .word 0x26020001
  .word 0x3050ffff
  .word 0x3202ffff
  .word 0x0051102a
  .word 0x1440ffef
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0xa4400b50
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020200
  .word 0x00621025
  .word 0xac82000c
  .word 0x24040010
  .word 0x0c0a7e94
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040010
  .word 0x24050004
  .word 0x0c0a8420
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0a85b0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
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
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002f1680
void func_002f1680(void)

{
  u32 uVar1;
  u32 uVar2;
  u32 *puVar6;
  u32 *puVar5;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int sVar7;
  u32 auStack_40030 [49158];
  u16 auStack_10018 [32748];
  u32 auStack_30 [6];
  union {
    u32 raw[3];
    f32 vec[3];
  } uStack_10;
  s16 auStack_18[3];
  
  puVar6 = (u32*)DAT_0069a110;
  puVar5 = auStack_30;
  iVar5 = 3;
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    iVar5 = iVar5 + -1;
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
  } while (0 < iVar5);
  *(VoiceSlots *)auStack_18 = *(VoiceSlots *)&uGpffff9cd0;
  sVar7 = 0;
  uStack_10.raw[1] = 0;
  for (iVar4 = *(int *)(iGpffffb6fc + 0x150); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xa34)) {
    if (*(u16 *)(iVar4 + 0xa4) == 1) {
      uStack_10.raw[0] = 0xc3020000;
      uStack_10.raw[2] = 0x43480000;
      *(u8 *)(iVar4 + 0x9f0) = 1;
    }
    else {
      uStack_10.vec[0] = *(f32 *)(auStack_30 + ((short)sVar7 * 2));
      uStack_10.vec[2] = *(f32 *)(auStack_30 + ((short)sVar7 * 2) + 1);
      *(char *)(iVar4 + 0x9f0) = (char)auStack_18[(short)sVar7];
      sVar7 = (short)((int)sVar7 + 1);
    }
    FUN_002d2280((s16*)(iVar4 + 0x94),(s16*)(iVar4 + 0x96),(f32*)&uStack_10);
    FUN_0027f650(iVar4,&uStack_10);
  }
  for (iVar6 = *(int *)(iGpffffb6fc + 0x158); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xa34)) {
    switch (*(u16 *)(iVar6 + 0xa4)) {
    case 0x108:
      uStack_10.raw[0] = 0;
      uStack_10.raw[2] = 0xc3960000;
      break;
    default:
      break;
    }
    FUN_002d2280((s16*)(iVar6 + 0x94),(s16*)(iVar6 + 0x96),(f32*)&uStack_10);
    FUN_0027f650(iVar6,&uStack_10);
  }
  return;
}

#pragma opt_loop_invariants on
// FUN_002f1810
void func_002f1810(void)
{
  BtlUnit* target;
  void* object;
  BtlPacket* parent;
  BtlUnit* unit;
  BtlPacket* packet;

  gBtl->flags &= ~0x02000000;
  object = func_002b8f90(0);
  func_002b90d0(object, func_002f87e0(2));
  target = NULL;
  for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
       unit != NULL; unit = unit->next) {
    switch (unit->charId) {
    case 0x108:
      target = unit;
      break;
    }
  }
  parent = FUN_00284200_packet_voice(1.0f, target, 0x12, 0, 2);
  parent->preUpdateDelay = 3;
  btlPacketRegister(parent, 1);
  packet = FUN_002b8d60_packet_voice(3, 0xfff);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_0027fe90_packet_voice(target, NULL, D_006978B0, NULL);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_002a3b40_packet_voice(NULL, 1);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 0);
  packet = FUN_002baf90_packet_voice(object, target, target, 0, 0x200);
  btlPacketRegister(packet, 2);
  func_002b9030(object);
}
#pragma opt_loop_invariants off

// FUN_002f19d0
void func_002f19d0(void)
{
  u32 uVar1;
  u32 uVar2;
  u32 *puVar6;
  u32 *puVar5;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int sVar7;
  u32 auStack_40030 [49158];
  u16 auStack_10018 [32748];
  u32 auStack_30 [6];
  union {
    u32 raw[3];
    f32 vec[3];
  } uStack_10;
  s16 auStack_18[3];

  puVar6 = (u32*)DAT_0069a150;
  puVar5 = auStack_30;
  iVar5 = 3;
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    iVar5 = iVar5 + -1;
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
  } while (0 < iVar5);
  *(VoiceSlots *)auStack_18 = *(VoiceSlots *)&uGpffff9cd8;
  sVar7 = 0;
  uStack_10.raw[1] = 0;
  for (iVar4 = *(int *)(iGpffffb6fc + 0x150); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xa34)) {
    if (*(u16 *)(iVar4 + 0xa4) == 1) {
      uStack_10.raw[0] = 0xc3020000;
      uStack_10.raw[2] = 0x43480000;
      *(u8 *)(iVar4 + 0x9f0) = 1;
    }
    else {
      uStack_10.vec[0] = *(f32 *)(auStack_30 + ((short)sVar7 * 2));
      uStack_10.vec[2] = *(f32 *)(auStack_30 + ((short)sVar7 * 2) + 1);
      *(char *)(iVar4 + 0x9f0) = (char)auStack_18[(short)sVar7];
      sVar7 = (short)((int)sVar7 + 1);
    }
    FUN_002d2280((s16*)(iVar4 + 0x94),(s16*)(iVar4 + 0x96),(f32*)&uStack_10);
    FUN_0027f650(iVar4,&uStack_10);
  }
  for (iVar6 = *(int *)(iGpffffb6fc + 0x158); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xa34)) {
    switch (*(u16 *)(iVar6 + 0xa4)) {
    case 0x10f:
      uStack_10.raw[0] = 0;
      uStack_10.raw[2] = 0xc3960000;
      break;
    default:
      break;
    }
    FUN_002d2280((s16*)(iVar6 + 0x94),(s16*)(iVar6 + 0x96),(f32*)&uStack_10);
    FUN_0027f650(iVar6,&uStack_10);
  }
  return;
}
// FUN_002f1b60
u32 func_002f1b60(BtlAction* action, f32* position)
{
  BtlUnit* unit;
  BtlUnit* target;
  RwV3d sourcePosition;
  RwV3d targetPosition;
  RwV3d direction;
  u16 moveId;
  f32 distance;
  u32 result;

  unit = action->unit;
  if (unit->genus != UNIT_GENUS_EC) {
    result = 0;
  }
  else {
    if (unit->charId != 0x10f) {
      result = 0;
    }
    else {
      if (action->target.targetedCount != 1) {
        result = 0;
      }
      else {
        if (action->target.commandId != 2) {
          result = 0;
        }
        else {
          if ((*(u8 *)(iGpffffb708 + action->target.specificId * 0x2c) & 2) == 0) {
            result = 0;
          }
          else {
            target = action->target.targetedActions[0]->unit;
            FUN_00280050(unit, &sourcePosition);
            FUN_00280480(target, unit, &targetPosition);
            direction.x = sourcePosition.x - targetPosition.x;
            direction.z = sourcePosition.z - targetPosition.z;
            direction.y = 0.0f;
            FUN_004c69f0(&direction, &direction);
            if (FUN_002d5e10(action) != 0) {
              moveId = 0xb;
            }
            else {
              moveId = 4;
            }
            distance = FUN_002812d0(unit, target, moveId);
            direction.x *= distance;
            direction.y *= distance;
            direction.z *= distance;
            position[0] = targetPosition.x + direction.x;
            position[1] = targetPosition.y + direction.y;
            position[2] = targetPosition.z + direction.z;
            result = 1;
          }
        }
      }
    }
  }
  return result;
}

#pragma opt_loop_invariants on
// FUN_002f1d40
void func_002f1d40(void)
{
  BtlUnit* target;
  void* object;
  BtlPacket* parent;
  BtlUnit* unit;
  BtlPacket* packet;

  gBtl->flags &= ~0x02000000;
  object = func_002b8f90(0);
  func_002b90d0(object, func_002f87e0(2));
  target = NULL;
  for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
       unit != NULL; unit = unit->next) {
    switch (unit->charId) {
    case 0x10f:
      target = unit;
      break;
    }
  }
  parent = FUN_00284200_packet_voice(1.0f, target, 0x12, 0, 2);
  parent->preUpdateDelay = 3;
  btlPacketRegister(parent, 1);
  packet = FUN_002b8d60_packet_voice(3, 0xfff);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_0027fe90_packet_voice(target, NULL, D_006978B0, NULL);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_002a3b40_packet_voice(NULL, 1);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 0);
  packet = FUN_002baf90_packet_voice(object, target, target, 0, 0x200);
  btlPacketRegister(packet, 2);
  func_002b9030(object);
}
#pragma opt_loop_invariants off


// FUN_002f1f00
void func_002f1f00(void)

{
  u32 uVar1;
  u32 uVar2;
  u32 *puVar6;
  u32 *puVar5;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int sVar7;
  u32 auStack_40030 [49158];
  u16 auStack_10018 [32748];
  u32 auStack_30 [6];
  union {
    u32 raw[3];
    f32 vec[3];
  } uStack_10;
  s16 auStack_18[3];
  
  puVar6 = (u32*)DAT_0069a190;
  puVar5 = auStack_30;
  iVar5 = 3;
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    iVar5 = iVar5 + -1;
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
  } while (0 < iVar5);
  *(VoiceSlots *)auStack_18 = *(VoiceSlots *)&uGpffff9ce0;
  sVar7 = 0;
  uStack_10.raw[1] = 0;
  for (iVar4 = *(int *)(iGpffffb6fc + 0x150); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xa34)) {
    if (*(u16 *)(iVar4 + 0xa4) == 1) {
      uStack_10.raw[0] = 0xc3020000;
      uStack_10.raw[2] = 0x43480000;
      *(u8 *)(iVar4 + 0x9f0) = 1;
    }
    else {
      uStack_10.vec[0] = *(f32 *)(auStack_30 + ((short)sVar7 * 2));
      uStack_10.vec[2] = *(f32 *)(auStack_30 + ((short)sVar7 * 2) + 1);
      *(char *)(iVar4 + 0x9f0) = (char)auStack_18[(short)sVar7];
      sVar7 = (short)((int)sVar7 + 1);
    }
    FUN_002d2280((s16*)(iVar4 + 0x94),(s16*)(iVar4 + 0x96),(f32*)&uStack_10);
    FUN_0027f650(iVar4,&uStack_10);
  }
  for (iVar6 = *(int *)(iGpffffb6fc + 0x158); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xa34)) {
    switch (*(u16 *)(iVar6 + 0xa4)) {
    case 0x110:
      uStack_10.raw[0] = 0;
      uStack_10.raw[2] = 0xc3960000;
      break;
    default:
      break;
    }
    FUN_002d2280((s16*)(iVar6 + 0x94),(s16*)(iVar6 + 0x96),(f32*)&uStack_10);
    FUN_0027f650(iVar6,&uStack_10);
  }
  return;
}
#pragma opt_loop_invariants on
// FUN_002f2090
void func_002f2090(void)
{
  BtlUnit* target;
  void* object;
  BtlPacket* parent;
  BtlUnit* unit;
  BtlPacket* packet;

  gBtl->flags &= ~0x02000000;
  object = func_002b8f90(0);
  func_002b90d0(object, func_002f87e0(2));
  target = NULL;
  for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
       unit != NULL; unit = unit->next) {
    switch (unit->charId) {
    case 0x110:
      target = unit;
      break;
    }
  }
  parent = FUN_00284200_packet_voice(1.0f, target, 0x12, 0, 2);
  parent->preUpdateDelay = 3;
  btlPacketRegister(parent, 1);
  packet = FUN_002b8d60_packet_voice(3, 0xfff);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_0027fe90_packet_voice(target, NULL, D_006978B0, NULL);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_002a3b40_packet_voice(NULL, 1);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 0);
  packet = FUN_002baf90_packet_voice(object, target, target, 0, 0x200);
  btlPacketRegister(packet, 2);
  func_002b9030(object);
}
#pragma opt_loop_invariants off


// FUN_002f2250
void func_002f2250(void)

{
  u32 uVar1;
  u32 uVar2;
  u32 *puVar6;
  u32 *puVar5;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int sVar7;
  u32 auStack_40030 [49158];
  u16 auStack_10018 [32748];
  u32 auStack_30 [6];
  union {
    u32 raw[3];
    f32 vec[3];
  } uStack_10;
  s16 auStack_18[3];
  puVar6 = (u32*)DAT_0069a210;
  puVar5 = auStack_30;
  iVar5 = 3;
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    iVar5 = iVar5 + -1;
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
  } while (0 < iVar5);
  *(VoiceSlots *)auStack_18 = *(VoiceSlots *)&uGpffff9ce8;
  sVar7 = 0;
  uStack_10.raw[1] = 0;
  for (iVar4 = *(int *)(iGpffffb6fc_ptr + 0x150); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xa34)) {
    if (*(u16 *)(iVar4 + 0xa4) == 1) {
      uStack_10.raw[0] = 0x43160000;
      uStack_10.raw[2] = 0x43fa0000;
      *(u8 *)(iVar4 + 0x9f0) = 2;
    }
    else {
      uStack_10.vec[0] = *(f32 *)(auStack_30 + ((short)sVar7 * 2));
      uStack_10.vec[2] = *(f32 *)(auStack_30 + ((short)sVar7 * 2) + 1);
      *(char *)(iVar4 + 0x9f0) = (char)auStack_18[(short)sVar7];
      sVar7 = (short)((int)sVar7 + 1);
    }
    FUN_002d2280((s16*)(iVar4 + 0x94),(s16*)(iVar4 + 0x96),(f32*)&uStack_10);
    FUN_0027f650(iVar4,&uStack_10);
  }
  for (iVar6 = *(int *)(iGpffffb6fc_ptr + 0x158); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xa34)) {
    uStack_10.raw[0] = 0;
    uStack_10.raw[2] = 0xc3fa0000;
    FUN_002d2280((s16*)(iVar6 + 0x94),(s16*)(iVar6 + 0x96),(f32*)&uStack_10);
    FUN_0027f650(iVar6,&uStack_10);
  }
  return;
}

// FUN_002f23d0
u32 func_002f23d0(int param_1)

{
  FUN_00302380(*(u32 *)(param_1 + 0xa2c),0x4000000,1);
  *(u32 *)(iGpffffb6fc + 0xb50) = 1;
  return 1;
}

/* Removing this loses FUN_002ea210 (MATCH nd0 -> MISMATCH nd14) - measured W161. */
// FUN_002f2410
u32 func_002f2410(int param_1)

{
  FUN_00301540(*(u32 *)(param_1 + 0xa2c),0xb);
  *(u32 *)(iGpffffb6fc + 0xb50) = 0;
  return 1;
}
// FUN_002f2450
void func_002f2450(u32 param_1)

{
  *(u32 *)(iGpffffb6fc + 0xb4c) = *(u32 *)(param_1 + 0x20);
  FUN_002e4220((u32)func_002f2550,(u32)func_002f2840,param_1);
  return;
}

/* Removing this loses FUN_002ea590 (MATCH nd0 -> MISMATCH nd14) - measured W161. */
// FUN_002f2490
void func_002f2490(u32 param_1)

{
  FUN_002e4220((u32)func_002f2890,(u32)func_002f2b40,param_1);
  return;
}
// FUN_002f24d0
u32 func_002f24d0(void)

{
  char cVar1;
  
  cVar1 = FUN_00301750(*(u32 *)(*(int *)(iGpffffb6fc + 0x158) + 0xa2c),0xb);
  return '\0' < cVar1;
}

// FUN_002f2510
int func_002f2510(int param_1)

{
  int* frame;
  int previous;
  int current;
  int result;

  frame = (int *)(iGpffffb6fc + 0xb4c);
  previous = *frame;
  current = *(int *)(param_1 + 0x20);
  if (current >= previous) {
    result = current - previous;
  }
  else {
    *frame = current;
    result = 0;
  }
  return result;
}

/* W419 negative: swapped actionPacket/parent local declaration order in func_002f2550; nd17 -> 24 at object 752/752. */
/* W421 classification: baseline verify nd17 at 752/752 (rate 0.022606).
 * This is action-input versus parent-packet saved-register role coloring,
 * not a commutative or argument-setup difference.  At +28 ours move
 * $s4,$a0 versus retail move $s0,$a0; +104/+152/+196/+280/+320/+392/
 * +508/+620/+684 ours ld $v1,($s4) versus retail ld $v1,($s0);
 * +316/+592 ours move $s0,$v0 versus retail move $s4,$v0; +328/+628
 * ours move $a0,$s0 versus retail move $a0,$s4; +384/+500/+676 ours
 * ld $v1,0x58($s0) versus retail ld $v1,0x58($s4).  Declaration swap
 * measured nd24 at 752/752 (rate 0.031915); exhaustive declaration
 * permutations and const-pointer spelling stayed at or above nd17. */
// FUN_002f2550
#ifndef PC_BUILD
asm void func_002f2550(BtlAction* action)
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
  .word 0x8f82b6fc
  .word 0x8c530158
  .word 0x0000202d
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0x0040902d
  .word 0x24040003
  .word 0x0c0be1f8
  .word 0x00000000
  .word 0x0240202d
  .word 0x0040282d
  .word 0x0c0ae434
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050066
  .word 0x0c0af564
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040003
  .word 0x24050fff
  .word 0x0c0ae358
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030003
  .word 0xa4430048
  .word 0xde030000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040008
  .word 0x0c0af1f8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030003
  .word 0xa4430048
  .word 0xde030000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440148
  .word 0x3c05006a
  .word 0x24a5a250
  .word 0x3c06006a
  .word 0x24c6a270
  .word 0x3c07006a
  .word 0x24e7a290
  .word 0x3c08006a
  .word 0x2508a2b0
  .word 0xc78c82e0
  .word 0x0c0a8f5c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030003
  .word 0xa4430048
  .word 0xde030000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040066
  .word 0x0000282d
  .word 0x0c0b7528
  .word 0x00000000
  .word 0x0040a02d
  .word 0xde030000
  .word 0xfc430060
  .word 0x0280202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x0260282d
  .word 0x0260302d
  .word 0x0000382d
  .word 0x24080200
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xde030000
  .word 0xfc430060
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0b7578
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x0260282d
  .word 0x0260302d
  .word 0x24070001
  .word 0x24080200
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xde030000
  .word 0xfc430060
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0b7578
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050045
  .word 0x0c0af614
  .word 0x00000000
  .word 0x0040a02d
  .word 0x24030005
  .word 0xa0430020
  .word 0xde230058
  .word 0xfc430028
  .word 0x2403009b
  .word 0xa4430048
  .word 0xde030000
  .word 0xfc430060
  .word 0x0280202d
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c04002f
  .word 0x248423d0
  .word 0x0260282d
  .word 0x0c09fd04
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xde030000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0ae40c
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
// FUN_002f2840
u32 func_002f2840(BtlAction* action)
{
  u64 lVar1;

  lVar1 = FUN_0027e390(action->uid,0x3fffffffffffffff);
  return lVar1 != 0;

}

// FUN_002f2890
void func_002f2890(BtlAction* action)
{
  BtlUnit* unit;
  void* object;
  BtlPacket* actionPacket;
  BtlPacket* packet;
  BtlPacket* parent;
  u32 index;
  unit = gBtl->unitLists[UNIT_GENUS_EC].head;
  object = func_002b8f90(0);
  func_002b90d0(object, func_002f87e0(4));
  {
    BtlPacket* introPacket;
    introPacket = FUN_002bd590_packet_voice(unit, 0x67);
    introPacket->actionUID = action->uid;
    btlPacketRegister(introPacket, 3);
  }
  {
    BtlPacket* introPacket;
    introPacket = FUN_002b8d60_packet_voice(3, 0xfff);
    introPacket->preUpdateDelay = 3;
    introPacket->actionUID = action->uid;
    btlPacketRegister(introPacket, 0);
  }
  {
    BtlPacket* introPacket;
    introPacket = FUN_002bc7e0_packet_voice(8);
    introPacket->preUpdateDelay = 3;
    introPacket->actionUID = action->uid;
    btlPacketRegister(introPacket, 0);
  }
  index = (FUN_002ffbc0(100) < 0x32) * 0xc;
  {
    BtlPacket* introPacket;
    introPacket = FUN_002a3d70_packet_voice(*(BtlAction**)(DAT_007ce3ec + 0x148),
                                           (const RwV3d*)(D_0069A2D0 + index),
                                           (const RwV3d*)(D_0069A2F0 + index),
                                           (const RwV3d*)(D_0069A310 + index),
                                           (const RwV3d*)(D_0069A330 + index),
                                           uGpffff82dc_f32_voice);
    introPacket->preUpdateDelay = 3;
    introPacket->actionUID = action->uid;
    btlPacketRegister(introPacket, 0);
  }
  parent = FUN_002dd4a0_packet_voice(0x67, 0);
  parent->actionUID = action->uid;
  btlPacketRegister(parent, 1);
  actionPacket = FUN_002baf90_packet_voice(object, unit, unit, 0, 0x200);
  actionPacket->unk_00 = 4;
  actionPacket->parentUID = parent->uid;
  actionPacket->actionUID = action->uid;
  btlPacketRegister(actionPacket, 2);
  {
    BtlPacket* waitPacket;
    waitPacket = FUN_002dd5e0_packet_voice(0);
    waitPacket->unk_00 = 5;
    waitPacket->parentUID = actionPacket->uid;
    btlPacketRegister(waitPacket, 1);
  }
  packet = FUN_002bd850_packet_voice(unit, 0x47);
  packet->postUpdateWaits[0].type = 5;
  packet->postUpdateWaits[0].value = actionPacket->uid;
  packet->actionUID = action->uid;
  packet->preUpdateDelay = 0x28;
  btlPacketRegister(packet, 3);
  {
    BtlPacket* waitPacket;
    waitPacket = FUN_0027f410_packet_voice((u32)func_002f2410,
                                           (u32)unit);
    waitPacket->unk_00 = 5;
    waitPacket->parentUID = packet->uid;
    waitPacket->actionUID = action->uid;
    btlPacketRegister(waitPacket, 1);
  }
  func_002b9030(object);
}

/* W367 pragma probe: opt_propagation off nd 1029 -> 1024; on nd 1029; object 1620/1632. */
#pragma optimization_level 2
// FUN_002f2b40
u32 func_002f2b40(BtlAction* action)
{
  u64 lVar1;

  lVar1 = FUN_0027e390(action->uid,0x3fffffffffffffff);
  return lVar1 != 0;
}

// FUN_002f2b90
#ifndef PC_BUILD
asm void func_002f2b90(BtlAction* action)
{
  .set noreorder
  .word 0x27bdfee0
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0xdc900000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8c840030
  .word 0x24050017
  .word 0x0c0a0d78
  .word 0x00000000
  .word 0x0002bc3c
  .word 0x0017bc3f
  .word 0x8f82b6fc
  .word 0x94420b48
  .word 0x00021880
  .word 0x3c02006a
  .word 0x2442a1d2
  .word 0x00431021
  .word 0x94510000
  .word 0x0000202d
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0x0040b02d
  .word 0x24040001
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0x0040a82d
  .word 0x24040005
  .word 0x0c0be1f8
  .word 0x00000000
  .word 0x02c0202d
  .word 0x0040282d
  .word 0x0c0ae434
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050002
  .word 0x3c06006a
  .word 0x24c6a350
  .word 0x0c0b4740
  .word 0x00000000
  .word 0x0040a02d
  .word 0x2403001e
  .word 0xa4430048
  .word 0xde430000
  .word 0xfc430060
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040982d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0x24030010
  .word 0xa4430048
  .word 0x0260202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0017143c
  .word 0x0002143f
  .word 0x24460006
  .word 0x02c0202d
  .word 0x8e450030
  .word 0x0000382d
  .word 0x24080200
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xde430000
  .word 0xfc430060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e440030
  .word 0x24050017
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040a02d
  .word 0x24040004
  .word 0xa0440000
  .word 0xde630058
  .word 0xfc430008
  .word 0xa4440048
  .word 0xde430000
  .word 0xfc430060
  .word 0x0280202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040003
  .word 0x24050fff
  .word 0x0c0ae358
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e440030
  .word 0x0220282d
  .word 0x0c0af564
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a5011c
  .word 0x27a60118
  .word 0x0c0a7a98
  .word 0x00000000
  .word 0x8fa4011c
  .word 0x8fa50118
  .word 0x24060010
  .word 0x0c0a7d2c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a7b00
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0220202d
  .word 0x27a5011c
  .word 0x27a60118
  .word 0x0c0a7b20
  .word 0x00000000
  .word 0x0280202d
  .word 0x8fa5011c
  .word 0x8fa60118
  .word 0x24070010
  .word 0x24080004
  .word 0x0c0a8014
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a7b14
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050010
  .word 0x0c0a84a0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24060010
  .word 0x0c0a86c0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a50090
  .word 0x0c0aedbc
  .word 0x00000000
  .word 0x02a0202d
  .word 0x27a50090
  .word 0x0000302d
  .word 0x0c0aeb00
  .word 0x00000000
  .word 0x0040a02d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xa4570048
  .word 0xfc500060
  .word 0x0280202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0c0b7528
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e450030
  .word 0x02a0202d
  .word 0x00a0302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040982d
  .word 0x24040004
  .word 0xa0440000
  .word 0xde830058
  .word 0xfc430008
  .word 0xa0440010
  .word 0xde230058
  .word 0xfc430018
  .word 0xfc500060
  .word 0x0260202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0b7578
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e450030
  .word 0x02a0202d
  .word 0x00a0302d
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040902d
  .word 0x24040004
  .word 0xa0440000
  .word 0xde830058
  .word 0xfc430008
  .word 0xa0440010
  .word 0xde230058
  .word 0xfc430018
  .word 0xfc500060
  .word 0x0240202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0b7578
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0a7e94
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040010
  .word 0x24050004
  .word 0x0c0a8420
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0a85b0
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040008
  .word 0x0c0a876c
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020040
  .word 0x00621025
  .word 0xac82000c
  .word 0x8f83b6fc
  .word 0x94620018
  .word 0x34420007
  .word 0xa4620018
  .word 0x02a0202d
  .word 0x0c0ae40c
  .word 0x00000000
  .word 0x02c0202d
  .word 0x0c0ae40c
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
  .word 0x27bd0120
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* W367 pragma probe: opt_propagation off nd 1176 -> 1109; on nd 1176; object 1812/1824. */
// FUN_002f3190
u32 func_002f3190(BtlAction* action)
{
  u16 uVar1;
  int iVar2;
  u64 uVar4;

  if (FUN_0027e390(action->uid,0x3fffffffffffffff) == 0) {
    *(u32 *)(iGpffffb6fc + 0xc) = *(u32 *)(iGpffffb6fc + 0xc) & 0xfff7ffff;
    iVar2 = *(int *)((u8 *)action->unit + 0xa2c);
    uVar1 = *(u16 *)(DAT_0069a1d0 + (u32)*(u16 *)(iGpffffb6fc + 0xb48) * 4);
    FUN_002889c0(action->unit,uVar1);
    *(u16 *)(iVar2 + 2) = uVar1;
    *(u16 *)(iVar2 + 4) = uVar1;
    uVar4 = FUN_002ffdf0(iVar2);
    FUN_002ffd90(iVar2,uVar4);
    uVar4 = FUN_00300100(iVar2);
    FUN_002ffdc0(iVar2,uVar4);
    FUN_00300560(iVar2,0xffffff);
    FUN_0017b220(uVar1);
    FUN_0027ce50();
    FUN_00301540(iVar2,0xd);
    FUN_00301540(iVar2,0xe);
    FUN_00301540(iVar2,0xf);
    FUN_00301540(iVar2,0x10);
    FUN_002831c0(action->unit,6);
    *(u16 *)(iGpffffb6fc + 0xb48) = *(u16 *)(iGpffffb6fc + 0xb48) + 1;
    FUN_001fdd40();
    return 0;
  }
  return 1;
}

// FUN_002f3320
void func_002f3320(BtlAction* action)
{
  BtlUnit* unit;
  void* object;
  BtlPacket* parent;
  BtlPacket* packet;

  gBtl->flags &= ~0x02000000;
  gBtl->flags |= 0x80000;
  unit = action->unit;
  object = func_002b8f90(0);
  func_002b90d0(object, func_002f87e0(6));
  packet = FUN_002dd690_packet_voice(3, (const char*)D_0069A368);
  btlPacketRegister(packet, 1);
  parent = FUN_00284200_packet_voice(1.0f, unit, 0x12, 0, 2);
  parent->preUpdateDelay = 2;
  parent->actionUID = action->uid;
  btlPacketRegister(parent, 1);
  packet = FUN_002b8d60_packet_voice(1, 0xfff);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_0027fe90_packet_voice(unit, NULL, D_006978B0, NULL);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_002a3b40_packet_voice(NULL, 1);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 0);
  packet = FUN_002baf90_packet_voice(object, unit, unit, 0, 0x200);
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 2);
  func_002b9030(object);
}

/* W212: template 002ef000 confirms direct packet locals and flag-first setup already used here; target remains nd768/1064 (window 1136). Residual starts at frame 0x70 versus retail 0xa0 and retail has 52 bytes of real tail code, so the deficit is reconstruction rather than a removable staged result. */
/* W367 stacked probe: opt_common_subs + opt_propagation nd 758 -> 696; singles 753/751; object 1100/1136. */
// FUN_002f3520
u32 func_002f3520(BtlAction* action)
{
    BtlPacket* packet;

    if (action != btlActionCurrent())
    {
        if ((action->unit->flags3 & BTLUNIT_FLAG3_ENDURE) != 0)
        {
            return 1;
        }
    }
    else
    {
        action->unit->flags3 &= ~BTLUNIT_FLAG3_ENDURE;
    }

    if (btlPacketFindFirstByActionUID(action->uid, BTL_UIDMAX) == NULL)
    {
        gBtl->flags &= ~0x80000;
        FUN_002d7890(action, 0);
        FUN_0029a320(action);
        gBtl->flags |= 0x2000000;

        packet = FUN_0029fa50(0x10);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        packet = FUN_002a1080(0x10, 4);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        packet = FUN_002a16c0(0x10);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        return 0;
    }

    return 1;
}

/* Removing this loses FUN_002ebec0 (MATCH nd0 -> MISMATCH nd42) - measured W161. */
// FUN_002f3670
void func_002f3670(BtlAction* action)
{
    BtlUnit* unit;

    if ((action->unk_1a & 1) != 0) {
        unit = action->unit;
        if (unit->genus == UNIT_GENUS_PC) {
            switch (unit->charId) {
            case 1:
                datPersonaClearHeroPersonas();
                FUN_00174e20(0xbf);
                FUN_00175130(0xbf);
                btlUnitInitPersona(unit, 0xbf);
                datCalcClearBadStatus(unit->datUnit, 0xffffff);
                break;
            }
        } else if (unit->genus == UNIT_GENUS_EC) {
            switch (unit->charId) {
            case 0x112:
                unit->flags3 |= 0x100;
                unit->flags3 |= 0x40;
                unit->flags3 |= 0x400;
                break;
            }
        }
    }
}
// FUN_002f3760
void func_002f3760(void)
{
    BtlUnit* unit;
    RwV3d position;

    position.y = 0.0f;
    for (unit = gBtl->unitLists[UNIT_GENUS_PC].head;
         unit != NULL; unit = unit->next) {
        if (unit->charId == 1) {
            position.x = 0.0f;
            position.z = 500.0f;
            unit->unk_9f0 = 0;
        } else {
            position.x = 0.0f;
            position.z = 0.0f;
        }
        FUN_002d2280(&unit->unk_94, &unit->unk_96, (f32*)&position);
        btlUnitSetPos(unit, &position);
    }

    for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
         unit != NULL; unit = unit->next) {
        position.x = 0.0f;
        position.z = -500.0f;
        FUN_002d2280(&unit->unk_94, &unit->unk_96, (f32*)&position);
        btlUnitSetPos(unit, &position);
    }
}

#pragma opt_loop_invariants on
// FUN_002f3840
void func_002f3840(void)
{
    BtlUnit* source;
    BtlUnit* target;
    void* object;
    BtlUnit* unit;
    BtlPacket* packet;

    FUN_002dce90();
    gBtl->flags &= ~0x02000000;
    object = func_002b8f90(0);
    func_002b90d0(object, func_002f87e0(3));

    source = gBtl->actionList.head->unit;
    target = NULL;
    for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
         unit != NULL; unit = unit->next) {
        switch (unit->charId) {
        case 0x112:
            target = unit;
            break;
        }
    }

    packet = btlFormation002b8d60(3, 0xfff);
    packet->preUpdateDelay = 3;
    btlPacketRegister(packet, BTLPACKET_TYPE_1);

    packet = btlCameraCreateSetStatePacket(NULL, 1);
    packet->preUpdateDelay = 3;
    btlPacketRegister(packet, BTLPACKET_TYPE_0);

    packet = func_002baf90(object, source, target, 0, 0x200);
    btlPacketRegister(packet, BTLPACKET_TYPE_3D);

    packet = func_002bc890((u8*)&gp0xffff9c80, 0xc);
    packet->preUpdateDelay = 0xe5;
    btlPacketRegister(packet, BTLPACKET_TYPE_1);
    func_002b9030(object);
}
#pragma opt_loop_invariants off

/* Removing this loses FUN_002ec2c0 (MATCH nd0 -> MISMATCH nd14) - measured W161. */

// FUN_002f39b0
void func_002f39b0(BtlAction* action)
{
    BtlAction* currentAction;
    BtlUnit* unit;
    u16* phase;

    currentAction = btlOrderGetActionPlaying();
    if (currentAction != NULL) {
        if (currentAction->target.specificId == 0x157) {
            func_002e4220((u32)func_002f4410, (u32)func_002f4480,
                          (u32)action);
        } else {
            unit = currentAction->unit;
            if (unit->genus == UNIT_GENUS_EC && unit->charId == 0x112) {
                phase = (u16*)((u8*)gBtl + 0xb48);
                if (*phase == 0) {
                    (*phase)++;
                } else {
                    func_002e4220((u32)func_002f3a80,
                                  (u32)func_002f43a0, (u32)action);
                }
            }
        }
    }
}
// FUN_002f3a80
#pragma push
#pragma schedule on
#pragma opt_lifetimes on
#ifndef PC_BUILD
asm void func_002f3a80(BtlAction* param_1)
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
  .word 0x0080902d
  .word 0x8f82b6fc
  .word 0x24440b48
  .word 0x94430b48
  .word 0x24110002
  .word 0x10710015
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x64100061
  .word 0x2415011a
  .word 0x240201d4
  .word 0xafa201a8
  .word 0x240201d3
  .word 0xafa201ac
  .word 0x240201d1
  .word 0xafa201b0
  .word 0x2402ffff
  .word 0xafa20198
  .word 0xafa2019c
  .word 0xafa201a0
  .word 0x0000882d
  .word 0x1000001c
  .word 0x00000000
  .word 0x64100062
  .word 0x2415011b
  .word 0x240201cf
  .word 0xafa201a8
  .word 0x240201d7
  .word 0xafa201ac
  .word 0x240201d2
  .word 0xafa201b0
  .word 0x2402ffff
  .word 0xafa20198
  .word 0xafa2019c
  .word 0xafa201a0
  .word 0x24110001
  .word 0x1000000d
  .word 0x00000000
  .word 0x6410006c
  .word 0x2415011c
  .word 0x240201d6
  .word 0xafa201a8
  .word 0x240201d0
  .word 0xafa201ac
  .word 0x2402ffff
  .word 0xafa201b0
  .word 0xafa20198
  .word 0xafa2019c
  .word 0x24020386
  .word 0xafa201a0
  .word 0x94820000
  .word 0x24420001
  .word 0xa4820000
  .word 0xde530000
  .word 0x24020002
  .word 0xa642006c
  .word 0xa650006e
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c0b0ddc
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0b5988
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0x0040b02d
  .word 0x24040003
  .word 0x24050fff
  .word 0x0c0ae358
  .word 0x00000000
  .word 0x0040202d
  .word 0xa4400048
  .word 0xde430000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x00111040
  .word 0x00511021
  .word 0x00021880
  .word 0x8f84b6fc
  .word 0x3c02006a
  .word 0x2442a3a0
  .word 0x00432821
  .word 0x3c02006a
  .word 0x2442a3d0
  .word 0x00433021
  .word 0x3c02006a
  .word 0x2442a400
  .word 0x00433821
  .word 0x3c02006a
  .word 0x2442a430
  .word 0x00434021
  .word 0x00111880
  .word 0x3c02006a
  .word 0x2442a458
  .word 0x00431821
  .word 0x3c0241f0
  .word 0x44820800
  .word 0xc4600000
  .word 0x46010303
  .word 0x00000000
  .word 0x00000000
  .word 0x8c840148
  .word 0x0c0a8f5c
  .word 0x00000000
  .word 0x0040a02d
  .word 0xa4400048
  .word 0xde430000
  .word 0xfc430060
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000b82d
  .word 0x0000882d
  .word 0x10000029
  .word 0x00000000
  .word 0x3222ffff
  .word 0x00021080
  .word 0x005d2021
  .word 0x248201a8
  .word 0x8c460000
  .word 0x2403ffff
  .word 0x10c3000a
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405001f
  .word 0x0000382d
  .word 0x24080001
  .word 0x0c0b6dd0
  .word 0x00000000
  .word 0x0040a02d
  .word 0x1000000c
  .word 0x00000000
  .word 0x8c820198
  .word 0x10430013
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x94440b02
  .word 0x24050002
  .word 0x24060386
  .word 0x24070001
  .word 0x0c0b8c28
  .word 0x00000000
  .word 0x0040a02d
  .word 0x24020004
  .word 0xa2820000
  .word 0xfe970008
  .word 0xa6800048
  .word 0xfe930060
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde970058
  .word 0x26220001
  .word 0x3051ffff
  .word 0x3222ffff
  .word 0x28420003
  .word 0x1440ffd5
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a501bc
  .word 0x27a601b8
  .word 0x0c0a7a98
  .word 0x00000000
  .word 0x8fa401bc
  .word 0x8fa501b8
  .word 0x24060010
  .word 0x0c0a7d2c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xfc530060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0a7b00
  .word 0x00000000
  .word 0x0040882d
  .word 0x0200202d
  .word 0x27a501bc
  .word 0x27a601b8
  .word 0x0c0a7b20
  .word 0x00000000
  .word 0x0220202d
  .word 0x8fa501bc
  .word 0x8fa601b8
  .word 0x24070010
  .word 0x24080004
  .word 0x0c0a8014
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xfc530060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0a7b14
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050010
  .word 0x0c0a84a0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xfc530060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x0200282d
  .word 0x24060010
  .word 0x0c0a86c0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xfc530060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a500f0
  .word 0x0c0aedbc
  .word 0x00000000
  .word 0x02c0202d
  .word 0x27a500f0
  .word 0x0000302d
  .word 0x0c0aeb00
  .word 0x00000000
  .word 0x0040f02d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xa4400048
  .word 0xfc530060
  .word 0x03c0202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c0b7528
  .word 0x00000000
  .word 0xafa200ec
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xfc530060
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e450030
  .word 0x02c0202d
  .word 0x00a0302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040882d
  .word 0x24040004
  .word 0xa0440000
  .word 0xdfc30058
  .word 0xfc430008
  .word 0xa0440010
  .word 0x8fa300ec
  .word 0xdc630058
  .word 0xfc430018
  .word 0xfc530060
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0b7578
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc530060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000a02d
  .word 0x0015143c
  .word 0x0002143f
  .word 0xafa200d0
  .word 0x3202ffff
  .word 0x7fa200b0
  .word 0x100000b9
  .word 0x00000000
  .word 0x3282ffff
  .word 0x00021080
  .word 0x02421021
  .word 0x8c550038
  .word 0x8ea40030
  .word 0x0c0af520
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc530060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8ea50030
  .word 0x02c0202d
  .word 0x00a0302d
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040882d
  .word 0x24040004
  .word 0xa0440000
  .word 0xdfc30058
  .word 0xfc430008
  .word 0xa0440010
  .word 0x8fa300ec
  .word 0xdc630058
  .word 0xfc430018
  .word 0xfc530060
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0b7578
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc530060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000054
  .word 0x00000000
  .word 0x3203ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02a21021
  .word 0x804500f8
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8ea40030
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040b82d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc530060
  .word 0x02e0202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba200a0
  .word 0x1440000e
  .word 0x00000000
  .word 0x8ea40030
  .word 0x8fa500d0
  .word 0x0c0af614
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc530060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3203ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02a21021
  .word 0x244200e0
  .word 0xafa200c0
  .word 0x9646006e
  .word 0x92aa00c8
  .word 0x8e440030
  .word 0x8ea50030
  .word 0x96a700cc
  .word 0x96a800ce
  .word 0x0200482d
  .word 0x0040582d
  .word 0x0c0af6f4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdee30058
  .word 0xfc430008
  .word 0xfc530060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x02a0282d
  .word 0x8fa600c0
  .word 0x96a700cc
  .word 0x96a800ce
  .word 0x0c0b5f88
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdee30058
  .word 0xfc430008
  .word 0xfc530060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x26020001
  .word 0x3050ffff
  .word 0x3202ffff
  .word 0x7fa200a0
  .word 0x92a300c8
  .word 0x0043102a
  .word 0x1440ffa8
  .word 0x00000000
  .word 0x24030061
  .word 0x7ba200b0
  .word 0x1443002a
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8ea40030
  .word 0x2405000a
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040802d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x240300a1
  .word 0xa4430048
  .word 0xfc530060
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x27a40170
  .word 0x0c0b5770
  .word 0x00000000
  .word 0x3c020010
  .word 0xafa2017c
  .word 0x0240202d
  .word 0x02a0282d
  .word 0x27a60170
  .word 0x24070001
  .word 0x00e0402d
  .word 0x0c0b5f88
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0xfc530060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x26820001
  .word 0x3054ffff
  .word 0x3283ffff
  .word 0x9642006a
  .word 0x0062102a
  .word 0x1440ff44
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0a7e94
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc530060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040010
  .word 0x24050004
  .word 0x0c0a8420
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc530060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0a85b0
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc530060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040008
  .word 0x0c0a876c
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc530060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x02c0202d
  .word 0x0c0ae40c
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
  .word 0x27bd01c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop

// FUN_002f43a0
u32 func_002f43a0(BtlAction* action)
{
    BtlPacket* packet;

    packet = btlPacketFindFirstByActionUID(action->uid, BTL_UIDMAX);
    if (packet == NULL)
    {
        gBtl->flags &= ~0x80000;
        return 0;
    }

    return 1;
}

#pragma opt_loop_invariants on
// FUN_002f4410
void func_002f4410(BtlAction* unused)
{
    u8* node;
    u16 wantedId;
    BtlAction* action;

    wantedId = 0x112;
    node = *(u8**)(DAT_007ce3ec + 0x158);
    while (node != NULL)
    {
        if (*(u16*)(node + 0xa4) == wantedId)
        {
            break;
        }
        node = *(u8**)(node + 0xa34);
    }

    action = FUN_0029a1d0();
    FUN_002d7890(action, 0);
}
#pragma opt_loop_invariants off


// FUN_002f4480
u32 func_002f4480(BtlAction* action)
{
    return 0;
}

/* Removing this loses FUN_002ec790 (MATCH nd0 -> MISMATCH nd32) - measured W161. */
// FUN_002f4490
void func_002f4490(BtlAction* action)
{
    BtlUnit* unit;

    if ((action->unk_1a & 1) != 0)
    {
        unit = action->unit;
        if (unit->genus == UNIT_GENUS_EC)
        {
            switch (unit->charId)
            {
            case 0x126:
                action->unk_1a |= 0x10;
                unit->flags3 |= 0x100;
                unit->flags3 |= 0x40;
                unit->flags3 |= 0x80;
                btlOrderAddAction(action);
                break;
            }

            switch (unit->charId)
            {
            case 0x126:
                btlUnitInitPersona(unit, 7);
                break;
            }
        }
    }
}
// FUN_002f4540
void func_002f4540(void)
{
  u32 uVar1;
  u32 uVar2;
  u32 *puVar6;
  u32 *puVar5;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int sVar7;
  u32 auStack_40030 [49158];
  u16 auStack_10018 [32748];
  u32 auStack_30 [6];
  union {
    u32 raw[3];
    f32 vec[3];
  } uStack_10;
  s16 auStack_18[3];

  puVar6 = (u32*)DAT_0069a470;
  puVar5 = auStack_30;
  iVar5 = 3;
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    iVar5 = iVar5 + -1;
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
  } while (0 < iVar5);
  *(VoiceSlots *)auStack_18 = *(VoiceSlots *)&DAT_007cc9e0;
  sVar7 = 0;
  uStack_10.raw[1] = 0;
  for (iVar4 = *(int *)(DAT_007ce3ec + 0x150); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xa34)) {
    if (*(u16 *)(iVar4 + 0xa4) == 1) {
      uStack_10.raw[0] = 0xc3020000;
      uStack_10.raw[2] = 0x43480000;
      *(u8 *)(iVar4 + 0x9f0) = 1;
    }
    else {
      uStack_10.vec[0] = *(f32 *)(auStack_30 + ((short)sVar7 * 2));
      uStack_10.vec[2] = *(f32 *)(auStack_30 + ((short)sVar7 * 2) + 1);
      *(char *)(iVar4 + 0x9f0) = (char)auStack_18[(short)sVar7];
      sVar7 = (short)((int)sVar7 + 1);
    }
    FUN_002d2280((s16*)(iVar4 + 0x94),(s16*)(iVar4 + 0x96),(f32*)&uStack_10);
    FUN_0027f650(iVar4,&uStack_10);
  }
  for (iVar6 = *(int *)(DAT_007ce3ec + 0x158); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xa34)) {
    switch (*(u16 *)(iVar6 + 0xa4)) {
    case 0x126:
      uStack_10.raw[0] = 0;
      uStack_10.raw[2] = 0xc3960000;
      break;
    }
    FUN_002d2280((s16*)(iVar6 + 0x94),(s16*)(iVar6 + 0x96),(f32*)&uStack_10);
    FUN_0027f650(iVar6,&uStack_10);
  }
  return;
}

/* Removing this loses FUN_002ecac0 (MATCH nd0 -> MISMATCH nd14) - measured W161. */
#pragma opt_loop_invariants on
// FUN_002f46d0
void func_002f46d0(void)
{
  BtlUnit* target;
  void* object;
  BtlPacket* parent;
  BtlUnit* unit;
  BtlPacket* packet;

  gBtl->flags &= ~0x02000000;
  object = func_002b8f90(0);
  func_002b90d0(object, func_002f87e0(2));
  target = NULL;
  for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
       unit != NULL; unit = unit->next) {
    switch (unit->charId) {
    case 0x126:
      target = unit;
      break;
    }
  }
  parent = FUN_00284200_packet_voice(1.0f, target, 0x12, 0, 2);
  parent->preUpdateDelay = 3;
  btlPacketRegister(parent, 1);
  packet = FUN_002b8d60_packet_voice(3, 0xfff);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_0027fe90_packet_voice(target, NULL, D_006978B0, NULL);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_002a3b40_packet_voice(NULL, 1);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 0);
  packet = FUN_002baf90_packet_voice(object, target, target, 0, 0x200);
  btlPacketRegister(packet, 2);
  func_002b9030(object);
}
#pragma opt_loop_invariants off

// FUN_002f4890
void func_002f4890(BtlAction* action)
{
    BtlUnit* unit;

    if ((action->unk_1a & 1) != 0)
    {
        unit = action->unit;
        if (unit->genus != UNIT_GENUS_EC)
        {
            action->unk_18 |= 0x40;
        }
        else
        {
            switch (unit->charId)
            {
            case 0xe9:
                action->unk_1a |= 0x10;
                unit->flags3 |= 0x100;
                unit->flags3 |= 0x40;
                unit->flags3 |= 0x80;
            }
            switch (unit->charId)
            {
            case 0xe9:
                FUN_00288f80(unit, 0xd3);
            }
        }
    }
}

// FUN_002f4950
void func_002f4950(void)
{
    RwV3d position;
    BtlUnit* unit;

    position.y = 0.0f;
    for (unit = gBtl->unitLists[UNIT_GENUS_PC].head;
         unit != NULL; unit = unit->next)
    {
        if (unit->charId == 1)
        {
            position.x = 0.0f;
            position.z = 300.0f;
            unit->unk_9f0 = 0;
        }
        FUN_002d2280(&unit->unk_94, &unit->unk_96, (f32*)&position);
        btlUnitSetPos(unit, &position);
    }
    for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
         unit != NULL; unit = unit->next)
    {
        switch (unit->charId)
        {
        case 0xe9:
            position.x = 0.0f;
            position.z = -300.0f;
        }
        FUN_002d2280(&unit->unk_94, &unit->unk_96, (f32*)&position);
        btlUnitSetPos(unit, &position);
    }
}

#pragma opt_loop_invariants on
// FUN_002f4a40
void func_002f4a40(void)
{
  BtlUnit* target;
  void* object;
  BtlPacket* parent;
  BtlUnit* unit;
  BtlPacket* packet;

  gBtl->flags &= ~0x02000000;
  object = func_002b8f90(0);
  func_002b90d0(object, func_002f87e0(2));
  target = NULL;
  for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
       unit != NULL; unit = unit->next) {
    switch (unit->charId) {
    case 0xe9:
      target = unit;
      break;
    }
  }
  parent = FUN_00284200_packet_voice(1.0f, target, 0x12, 0, 2);
  parent->preUpdateDelay = 3;
  btlPacketRegister(parent, 1);
  packet = FUN_002b8d60_packet_voice(3, 0xfff);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_0027fe90_packet_voice(target, NULL, D_006978B0, NULL);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_002a3b40_packet_voice(NULL, 1);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 0);
  packet = FUN_002baf90_packet_voice(object, target, target, 0, 0x200);
  btlPacketRegister(packet, 2);
  func_002b9030(object);
}
#pragma opt_loop_invariants off

// FUN_002f4c00
void func_002f4c00(BtlAction* action)
{
    BtlUnit* unit;

    if (((action->unk_1a & 1) != 0) &&
        (unit = action->unit, unit->genus == UNIT_GENUS_EC))
    {
        switch (unit->charId)
        {
        case 0xea:
            action->unk_1a |= 0x10;
            unit->flags3 |= 0x100;
            unit->flags3 |= 0x40;
            unit->flags3 |= 0x80;
            *(u32*)((u8*)gBtl + 0xb54) = 1;
            *(u32*)((u8*)gBtl + 0xb58) = 0xe1;
            FUN_00521408((u8*)gBtl + 0xb5c, 0, 0x16);
            *(u16*)((u8*)gBtl + 0xb5e) = 1;
        }
        switch (unit->charId)
        {
        case 0xea:
            FUN_00288f80(unit, 6);
        }
    }
}

// FUN_002f4ce0
void func_002f4ce0(void)
{
    VoiceXZ positions[3] = {{-350.0f, 50.0f}, {130.0f, 200.0f},
                            {350.0f, 50.0f}};
    RwV3d position;
    VoiceSlots slots;
    BtlUnit* primaryUnit;
    BtlUnit* secondaryUnit;
    s16 index;
    VoiceXZ* selected;

    slots = *(VoiceSlots*)DAT_007cc9e8;
    index = 0;
    position.y = 0.0f;
    for (primaryUnit = gBtl->unitLists[UNIT_GENUS_PC].head;
         primaryUnit != NULL; primaryUnit = primaryUnit->next)
    {
        if (primaryUnit->charId == 1)
        {
            position.x = -130.0f;
            position.z = 200.0f;
            primaryUnit->unk_9f0 = 1;
        }
        else
        {
            selected = &positions[index];
            position.x = selected->x;
            position.z = selected->z;
            primaryUnit->unk_9f0 = slots.values[index];
            index++;
        }
        FUN_002d2280(&primaryUnit->unk_94, &primaryUnit->unk_96,
                     (f32*)&position);
        btlUnitSetPos(primaryUnit, &position);
    }
    for (secondaryUnit = gBtl->unitLists[UNIT_GENUS_EC].head;
         secondaryUnit != NULL; secondaryUnit = secondaryUnit->next)
    {
        switch (secondaryUnit->charId)
        {
        case 0xea:
            position.x = 0.0f;
            position.z = -300.0f;
        }
        FUN_002d2280(&secondaryUnit->unk_94, &secondaryUnit->unk_96,
                     (f32*)&position);
        btlUnitSetPos(secondaryUnit, &position);
    }
}

#pragma opt_loop_invariants on
// FUN_002f4e70
void func_002f4e70(void)
{
  BtlUnit* target;
  void* object;
  BtlPacket* parent;
  BtlUnit* unit;
  BtlPacket* packet;

  gBtl->flags &= ~0x02000000;
  object = func_002b8f90(0);
  func_002b90d0(object, func_002f87e0(2));
  target = NULL;
  for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
       unit != NULL; unit = unit->next) {
    switch (unit->charId) {
    case 0xea:
      target = unit;
      break;
    }
  }
  parent = FUN_00284200_packet_voice(1.0f, target, 0x12, 0, 2);
  parent->preUpdateDelay = 3;
  btlPacketRegister(parent, 1);
  packet = FUN_002b8d60_packet_voice(3, 0xfff);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_0027fe90_packet_voice(target, NULL, D_006978B0, NULL);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_002a3b40_packet_voice(NULL, 1);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 0);
  packet = FUN_002baf90_packet_voice(object, target, target, 0, 0x200);
  btlPacketRegister(packet, 2);
  func_002b9030(object);
}
#pragma opt_loop_invariants off


/* W367 pragma probe: opt_loop_invariants on nd 569 -> 539; off nd 569; object 728/752. */
#pragma opt_loop_invariants on
// FUN_002f5030
#ifndef PC_BUILD
asm void func_002f5030(int param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x3403ffff
  .word 0x306affff
  .word 0x0000382d
  .word 0x8f83b6fc
  .word 0x8c680150
  .word 0x24060009
  .word 0x10000016
  .word 0x00000000
  .word 0x950500a4
  .word 0x8c640b54
  .word 0x10850011
  .word 0x00000000
  .word 0x10a6000f
  .word 0x00000000
  .word 0x30e4ffff
  .word 0x00042080
  .word 0x009d2021
  .word 0xac880040
  .word 0x00052040
  .word 0x00642021
  .word 0x94850b5c
  .word 0x3144ffff
  .word 0x00a4082a
  .word 0x10200002
  .word 0x00000000
  .word 0x00a0502d
  .word 0x24e40001
  .word 0x3087ffff
  .word 0x8d080a34
  .word 0x1500ffea
  .word 0x00000000
  .word 0x30e7ffff
  .word 0x10e0008f
  .word 0x00000000
  .word 0x0000482d
  .word 0x0000402d
  .word 0x3146ffff
  .word 0x10000015
  .word 0x00000000
  .word 0x3104ffff
  .word 0x00042080
  .word 0x009d2021
  .word 0x24840040
  .word 0x8c850000
  .word 0x94a400a4
  .word 0x00042040
  .word 0x00642021
  .word 0x94840b5c
  .word 0x00c4082a
  .word 0x14200007
  .word 0x00000000
  .word 0x3124ffff
  .word 0x00042080
  .word 0x009d2021
  .word 0xac850030
  .word 0x25240001
  .word 0x3089ffff
  .word 0x25040001
  .word 0x3088ffff
  .word 0x3104ffff
  .word 0x0087202a
  .word 0x1480ffe9
  .word 0x00000000
  .word 0x3124ffff
  .word 0x1080006f
  .word 0x00000000
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x00021880
  .word 0x007d1821
  .word 0x8c700030
  .word 0x960300a4
  .word 0x00032040
  .word 0x8f83b6fc
  .word 0x00831821
  .word 0x94630b5c
  .word 0x14600008
  .word 0x00000000
  .word 0x96220018
  .word 0x3042ffbf
  .word 0xa6220018
  .word 0x8e220030
  .word 0x944400a4
  .word 0x0c05ec88
  .word 0x00000000
  .word 0x960400a4
  .word 0x8f83b6fc
  .word 0xac640b54
  .word 0x960300a4
  .word 0x00032040
  .word 0x8f83b6fc
  .word 0x00832021
  .word 0x94830b5c
  .word 0x24630001
  .word 0xa4830b5c
  .word 0x960300a4
  .word 0x2c61000b
  .word 0x1020004e
  .word 0x00000000
  .word 0x3c04007c
  .word 0x24848a60
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x240400e1
  .word 0x8f83b6fc
  .word 0xac640b58
  .word 0x24040129
  .word 0x8e230030
  .word 0x8c630a2c
  .word 0xa4640004
  .word 0x1000003e
  .word 0x00000000
  .word 0x240400e0
  .word 0x8f83b6fc
  .word 0xac640b58
  .word 0x2404012a
  .word 0x8e230030
  .word 0x8c630a2c
  .word 0xa4640004
  .word 0x10000035
  .word 0x00000000
  .word 0x240400e2
  .word 0x8f83b6fc
  .word 0xac640b58
  .word 0x2404012b
  .word 0x8e230030
  .word 0x8c630a2c
  .word 0xa4640004
  .word 0x1000002c
  .word 0x00000000
  .word 0x240400e3
  .word 0x8f83b6fc
  .word 0xac640b58
  .word 0x2404012c
  .word 0x8e230030
  .word 0x8c630a2c
  .word 0xa4640004
  .word 0x10000023
  .word 0x00000000
  .word 0x240400e4
  .word 0x8f83b6fc
  .word 0xac640b58
  .word 0x2404012d
  .word 0x8e230030
  .word 0x8c630a2c
  .word 0xa4640004
  .word 0x1000001a
  .word 0x00000000
  .word 0x240400e5
  .word 0x8f83b6fc
  .word 0xac640b58
  .word 0x2404012e
  .word 0x8e230030
  .word 0x8c630a2c
  .word 0xa4640004
  .word 0x10000011
  .word 0x00000000
  .word 0x240400e7
  .word 0x8f83b6fc
  .word 0xac640b58
  .word 0x8e230030
  .word 0x946400a4
  .word 0x8c630a2c
  .word 0xa4640004
  .word 0x10000008
  .word 0x00000000
  .word 0x240400e6
  .word 0x8f83b6fc
  .word 0xac640b58
  .word 0x2404012f
  .word 0x8e230030
  .word 0x8c630a2c
  .word 0xa4640004
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants reset

/* W212: template 002f3320's packet-local structure is already present. Recasting the unit search as retail's explicit do/while held nd444 but shrank 968 to 960 (window 976), so it was reverted; residual first differs at offset 28 as cyclic saved-register coloring, then at offset 292 in the search dispatch. */
/* W367 stacked probe: opt_loop_invariants + opt_lifetimes nd 444 -> 432; singles 433/443; object 968/976. */
// FUN_002f5320
u32 func_002f5320(void)

{
  return *(u32 *)(DAT_007ce3ec + 0xb58);
}

// FUN_002f5330
void func_002f5330(int param_1)

{
  typedef struct VoiceParam {
    u8 padding[0x1a];
    u16 flags;
  } VoiceParam;
  int iVar1;
  u16 flags;
  u16 kind;
  u32 uVar2;
  VoiceParam *work;
  
  work = (VoiceParam *)param_1;
  flags = work->flags;
  if (((flags & 1) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x30), *(u8 *)(iVar1 + 0xa2) == '\x01')) {
    kind = *(u16 *)(iVar1 + 0xa4);
    switch(kind) {
    case 0xeb:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
    case 0xf0:
      work->flags = flags | 0x10;
      *(u32 *)(iVar1 + 0x9c) |= 0x100;
      *(u32 *)(iVar1 + 0x9c) |= 0x40;
      *(u32 *)(iVar1 + 0x9c) |= 0x80;
      **(u16 **)(iVar1 + 0xa2c) = **(u16 **)(iVar1 + 0xa2c) | 0x40;
    }
    kind = *(u16 *)(iVar1 + 0xa4);
    switch(kind) {
    case 0xeb:
      FUN_00288f80(iVar1,0xcb);
      break;
    case 0xed:
      FUN_00288f80(iVar1,0xc7);
      break;
    case 0xef:
      FUN_00288f80(iVar1,0xc1);
      break;
    case 0xec:
      FUN_00288f80(iVar1,0xcd);
      break;
    case 0xee:
      FUN_00288f80(iVar1,0xcf);
      break;
    case 0xf0:
      FUN_00288f80(iVar1,0xc5);
    }
  }
  return;
}

// FUN_002f5490
void func_002f5490(void)
{
  BtlUnit* unit;
  RwV3d position;

  position.y = 0.0f;
  for (unit = gBtl->unitLists[UNIT_GENUS_PC].head;
       unit != NULL; unit = unit->next) {
    if (*(u16 *)(*(u8 **)(DAT_007ce3ec + 0xbbc) + 8) == 0x1b2) {
      switch (unit->charId) {
      case 1:
        position.x = 150.0f;
        position.z = 300.0f;
        unit->unk_9f0 = 1;
        break;
      case 9:
        position.x = -150.0f;
        position.z = 300.0f;
        unit->unk_9f0 = 0;
        break;
      }
    }
    else {
      switch (unit->charId) {
      case 1:
        position.x = -150.0f;
        position.z = 300.0f;
        unit->unk_9f0 = 0;
        break;
      case 9:
        position.x = 150.0f;
        position.z = 300.0f;
        unit->unk_9f0 = 1;
        break;
      }
    }
    FUN_002d2280(&unit->unk_94, &unit->unk_96, (f32*)&position);
    btlUnitSetPos(unit, &position);
  }
  for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
       unit != NULL; unit = unit->next) {
    switch (unit->charId) {
    case 0xeb:
    case 0xee:
    case 0xef:
      position.x = -150.0f;
      position.z = -300.0f;
      break;
    case 0xec:
    case 0xed:
    case 0xf0:
      position.x = 150.0f;
      position.z = -300.0f;
      break;
    }
    FUN_002d2280(&unit->unk_94, &unit->unk_96, (f32*)&position);
    btlUnitSetPos(unit, &position);
  }
}

// FUN_002f5660
void func_002f5660(BtlAction* action)
{
  BtlUnit* unit;
  void* object;
  BtlPacket* parent;
  BtlPacket* packet;
  u32 state;

  gBtl->flags &= ~0x02000000;
  gBtl->flags |= 0x80000;
  unit = action->unit;
  switch (unit->charId) {
  case 0xeb:
  case 0xed:
  case 0xef:
    state = 2;
    break;
  case 0xec:
  case 0xee:
  case 0xf0:
    state = 3;
    break;
  }
  object = func_002b8f90(0);
  func_002b90d0(object, func_002f87e0(state));
  parent = FUN_00284200_packet_voice(1.0f, unit, 0x12, 0, 2);
  parent->preUpdateDelay = 3;
  parent->actionUID = action->uid;
  btlPacketRegister(parent, 1);
  packet = FUN_002b8d60_packet_voice(1, 0xfff);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_0027fe90_packet_voice(unit, NULL, D_006978B0, NULL);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_002a3b40_packet_voice(NULL, 1);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 0);
  packet = FUN_002baf90_packet_voice(object, unit, unit, 0, 0x200);
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 2);
  func_002b9030(object);
}

// FUN_002f5870
u32 func_002f5870(BtlAction* action)
{
    BtlPacket* packet;

    if (btlPacketFindFirstByActionUID(action->uid, BTL_UIDMAX) == NULL)
    {
        gBtl->flags &= ~0x80000;
        FUN_002d7890(action, 0);
        FUN_0029a320(action);
        gBtl->flags |= 0x2000000;

        packet = FUN_0029fa50(0x10);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        packet = FUN_002a1080(0x10, 4);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        packet = FUN_002a16c0(0x10);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        return 0;
    }

    return 1;
}

// FUN_002f5980
void func_002f5980(BtlAction* action)
{
    BtlUnit* unit;

    if ((action->unk_1a & 1) != 0) {
        unit = action->unit;
        if (unit->genus == UNIT_GENUS_EC) {
            switch (unit->charId) {
            case 0xf1:
                unit->flags3 |= 0x100;
                unit->flags3 |= 0x40;
                unit->flags3 |= 0x400;
                unit->flags3 |= 0x2000;
                break;
            case 0xf2:
                unit->datUnit->flags |= 0x40;
                unit->flags3 |= 0x100;
                unit->flags3 |= 0x40;
                unit->flags3 &= ~8;
                action->unk_1a &= ~8;
                unit->flags3 |= 0x400;
                unit->flags3 |= 0x2000;
                FUN_0029a320(action);
                *(u32 *)(DAT_007ce3ec + 0xb50) = 0;
                break;
            }
        }
    }
    return;
}

// FUN_002f5a70
void func_002f5a70(void)

{
  u32 uVar1;
  u32 uVar2;
  u32 *puVar6;
  u32 *puVar5;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int sVar7;
  u32 auStack_40030 [49158];
  u16 auStack_10018 [32748];
  u32 auStack_30 [6];
  union {
    u32 raw[3];
    f32 vec[3];
  } uStack_10;
  s16 auStack_18[3];
  
  puVar6 = (u32*)DAT_0069a550;
  puVar5 = auStack_30;
  iVar5 = 3;
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    iVar5 = iVar5 + -1;
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
  } while (0 < iVar5);
  *(VoiceSlots *)auStack_18 = *(VoiceSlots *)&DAT_007cc9f0;
  sVar7 = 0;
  uStack_10.raw[1] = 0;
  for (iVar4 = *(int *)(DAT_007ce3ec + 0x150); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xa34)) {
    if (*(u16 *)(iVar4 + 0xa4) == 1) {
      uStack_10.raw[0] = 0x43160000;
      uStack_10.raw[2] = 0x43fa0000;
      *(u8 *)(iVar4 + 0x9f0) = 2;
    }
    else {
      uStack_10.vec[0] = *(f32 *)(auStack_30 + ((short)sVar7 * 2));
      uStack_10.vec[2] = *(f32 *)(auStack_30 + ((short)sVar7 * 2) + 1);
      *(char *)(iVar4 + 0x9f0) = (char)auStack_18[(short)sVar7];
      sVar7 = (short)((int)sVar7 + 1);
    }
    FUN_002d2280((s16*)(iVar4 + 0x94),(s16*)(iVar4 + 0x96),(f32*)&uStack_10);
    FUN_0027f650(iVar4,&uStack_10);
  }
  for (iVar6 = *(int *)(DAT_007ce3ec + 0x158); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xa34)) {
    uStack_10.raw[0] = 0;
    uStack_10.raw[2] = 0xc3fa0000;
    FUN_002d2280((s16*)(iVar6 + 0x94),(s16*)(iVar6 + 0x96),(f32*)&uStack_10);
    FUN_0027f650(iVar6,&uStack_10);
  }
  return;
}

// Measured 002f5bf0: opt_loop_invariants on gives normalized_diff 0; off gives 209 (object 400B/window 400B).
#pragma opt_loop_invariants on
// FUN_002f5bf0
void func_002f5bf0(BtlAction* param_1,BtlAction* param_2,BtlTargetResult* param_3)

{
  u32 bVar1;
  int iVar2;
  s32 hpDelta;
  BtlUnit* sourceUnit;
  u16 *puVar3;
  s32 lVar4;
  BtlAction* unaff_s0;
  bVar1 = false;
  sourceUnit = param_1->unit;
  if (sourceUnit->genus == 1) {
    if (sourceUnit->charId == 0xf1) {
      if ((*(u16 *)((int)param_3 + 0x1a) & 0x100) != 0) {
        unaff_s0 = param_1;
        bVar1 = true;
      }
      if ((*(u16 *)((int)param_3 + 0x1a) & 0x200) != 0) {
        *(u32 *)(DAT_007ce3ec + 0xb48) = 1;
        for (iVar2 = *(int *)(DAT_007ce3ec + 0x158); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xa34)) {
          if (*(u16 *)(iVar2 + 0xa4) == 0xf2) {
            *(u32 *)(DAT_007ce3ec + 0xb50) = 1;
            *(u16 *)(DAT_007ce3ec + 0xb54) = 0;
            *(u16 *)(DAT_007ce3ec + 0xb56) = 10;
            *(u16 *)(DAT_007ce3ec + 0xb58) = 0;
          }
        }
        puVar3 = (u16*)param_1->unit->datUnit;
        *puVar3 = *puVar3 | 0x40;
      }
      goto LAB_002f5d34;
    }
  }
  sourceUnit = param_2->unit;
  if (sourceUnit->genus == 1) {
    if (sourceUnit->charId == 0xf1) {
      hpDelta = param_3->hpDelta;
      if (hpDelta < 0) {
        if (*(int *)(DAT_007ce3ec + 0xb48) == 1) {
          if (*(int *)(DAT_007ce3ec + 0xb4c) > -hpDelta) {
            *(int *)(DAT_007ce3ec + 0xb4c) = *(int *)(DAT_007ce3ec + 0xb4c) + hpDelta;
          }
          else {
            *(int *)(DAT_007ce3ec + 0xb4c) = 0;
            unaff_s0 = param_2;
            bVar1 = true;
          }
        }
      }
    }
  }
LAB_002f5d34:
  if ((bVar1) && (lVar4 = FUN_002e4250(), lVar4 == 0)) {
    FUN_002e4220(func_002f6840,func_002f6ab0,unaff_s0);
  }
  return;
}
#pragma opt_loop_invariants off


/* W367 stacked probe: opt_lifetimes + opt_propagation nd 644 -> 441; singles 642/447; object 924/928. */
#pragma opt_lifetimes on
#pragma opt_propagation off
/* W419 negative: moved the long in-range branch before the short out-of-range branch in func_002f5d80; nd441 -> 448 at object 924/928. */
// FUN_002f5d80
#ifndef PC_BUILD
asm void func_002f5d80(u32 param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x908400a2
  .word 0x24030001
  .word 0x148300d4
  .word 0x00000000
  .word 0x962400a4
  .word 0x240300f1
  .word 0x148300d0
  .word 0x00000000
  .word 0x8e230098
  .word 0x30630002
  .word 0x106000cc
  .word 0x00000000
  .word 0x8f85b6fc
  .word 0x8cb00158
  .word 0x240300f2
  .word 0x100000c5
  .word 0x00000000
  .word 0x960400a4
  .word 0x148300c1
  .word 0x00000000
  .word 0x24a30b54
  .word 0x94a20b54
  .word 0x18400006
  .word 0x00000000
  .word 0x24040001
  .word 0x2442ffff
  .word 0xa4620000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000202d
  .word 0x240200ff
  .word 0xa3a2005c
  .word 0xa3a2005d
  .word 0xa3a2005e
  .word 0xa3a2005f
  .word 0x8f83b6fc
  .word 0x8c620b50
  .word 0x10400047
  .word 0x00000000
  .word 0x10800004
  .word 0x00000000
  .word 0x0000982d
  .word 0x1000008c
  .word 0x00000000
  .word 0x94660b56
  .word 0x24650b58
  .word 0x94640b58
  .word 0x0086082a
  .word 0x10200039
  .word 0x00000000
  .word 0x3c02437f
  .word 0x44820800
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
  .word 0x46000842
  .word 0x04c00006
  .word 0x00000000
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00061842
  .word 0x30c20001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x00000000
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
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3005f
  .word 0x94a20000
  .word 0x24420001
  .word 0xa4a20000
  .word 0x24130001
  .word 0x1000004b
  .word 0x00000000
  .word 0x10800004
  .word 0x00000000
  .word 0x24130001
  .word 0x10000046
  .word 0x00000000
  .word 0x94660b56
  .word 0x24650b58
  .word 0x94640b58
  .word 0x0086082a
  .word 0x1020003f
  .word 0x00000000
  .word 0x3c02437f
  .word 0x44820800
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
  .word 0x46000842
  .word 0x04c00006
  .word 0x00000000
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00061842
  .word 0x30c20001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x00000000
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
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0x306300ff
  .word 0x240200ff
  .word 0x00431023
  .word 0xa3a2005f
  .word 0x94a20000
  .word 0x24420001
  .word 0xa4a20000
  .word 0x24130001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000982d
  .word 0x0220202d
  .word 0x0c09fe4c
  .word 0x00000000
  .word 0x0040902d
  .word 0x24020001
  .word 0x16620012
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a1d60
  .word 0x00000000
  .word 0x1040000d
  .word 0x00000000
  .word 0x92420003
  .word 0x1840000a
  .word 0x00000000
  .word 0x0200202d
  .word 0x8fa5005c
  .word 0x0c09fdcc
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0a1d24
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0a1d44
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x8e100a34
  .word 0x1600ff3b
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
#pragma opt_propagation reset
#pragma opt_lifetimes reset

#pragma opt_loop_invariants on
// FUN_002f6120
void func_002f6120(void)
{
  BtlUnit* target;
  void* object;
  BtlPacket* parent;
  BtlUnit* unit;
  BtlPacket* packet;

  gBtl->flags &= ~0x02000000;
  object = func_002b8f90(0);
  func_002b90d0(object, func_002f87e0(4));
  target = NULL;
  for (unit = gBtl->unitLists[UNIT_GENUS_EC].head;
       unit != NULL; unit = unit->next) {
    switch (unit->charId) {
    case 0xf1:
      target = unit;
      break;
    }
  }
  packet = FUN_002dd690_packet_voice(3, DAT_0069a5b8);
  btlPacketRegister(packet, 1);
  parent = FUN_00284200_packet_voice(1.0f, target, 0x12, 0, 2);
  parent->preUpdateDelay = 3;
  btlPacketRegister(parent, 1);
  packet = FUN_002b8d60_packet_voice(3, 0xfff);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_0027fe90_packet_voice(target, NULL, D_006978B0, NULL);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_002a3b40_packet_voice(NULL, 1);
  packet->unk_00 = 4;
  packet->parentUID = parent->uid;
  btlPacketRegister(packet, 0);
  packet = FUN_002baf90_packet_voice(object, target, target, 0, 0x200);
  btlPacketRegister(packet, 2);
  packet = func_002bc890(&DAT_007cc970, 0x18);
  packet->preUpdateDelay = 200;
  btlPacketRegister(packet, 1);
  func_002b9030(object);
}
#pragma opt_loop_invariants off

// FUN_002f6330
u32 func_002f6330(void *param_1)
{
  struct {
    u64 firstPositionXY;
    f32 firstPositionZ;
    u8 firstTransform[16];
    RwV3d secondPosition;
    u8 secondTransform[16];
  } work;
  u8 *action = (u8 *)param_1;
  int unit = *(int *)(*(int *)(action + 0xe0) + 0x30);

  if (*(u8 *)(unit + 0xa2) != 1) {
    return 0;
  }
  if (*(u16 *)(unit + 0xa4) != 0xf1) {
    return 0;
  }

  if ((FUN_00357fd0(0) & 1) != 0) {
    FUN_002a4690(work.firstTransform, DAT_0069a5c8,
                 DAT_0069a5c8 + 0x20, D_00697880);
    {
      u64 xy = *(volatile /* Removing this function's qualifier batch loses func_002f6330 (MATCH nd0 -> MISMATCH nd10, size 480 -> 480) - measured W170. */ u64 *)DAT_0069a5c8;
      f32 z = *(volatile /* Removing this function's qualifier batch loses func_002f6330 (MATCH nd0 -> MISMATCH nd10, size 480 -> 480) - measured W170. */ f32 *)(DAT_0069a5c8 + 8);
      work.firstPositionXY = xy;
      work.firstPositionZ = z;
    }
    FUN_002a4690(work.secondTransform, DAT_0069a5d8,
                 DAT_0069a5d8 + 0x20, D_00697880);
    work.secondPosition = *(RwV3d *)DAT_0069a5d8;
  } else {
    FUN_002a4690(work.secondTransform, DAT_0069a5c8,
                 DAT_0069a5c8 + 0x20, D_00697880);
    work.secondPosition = *(RwV3d *)DAT_0069a5c8;
    FUN_002a4690(work.firstTransform, DAT_0069a5d8,
                 DAT_0069a5d8 + 0x20, D_00697880);
    {
      u64 xy = *(volatile /* Removing this function's qualifier batch loses func_002f6330 (MATCH nd0 -> MISMATCH nd10, size 480 -> 480) - measured W170. */ u64 *)DAT_0069a5d8;
      f32 z = *(volatile /* Removing this function's qualifier batch loses func_002f6330 (MATCH nd0 -> MISMATCH nd10, size 480 -> 480) - measured W170. */ f32 *)(DAT_0069a5d8 + 8);
      work.firstPositionXY = xy;
      work.firstPositionZ = z;
    }
  }

  FUN_002a2290(action, (f32 *)&work.firstPositionXY,
                (f32 *)&work.secondPosition, 1);
  FUN_002a3110(action, 5.0f);
  FUN_002a3e80(0.0f, (u8 *)(uintptr_t)*(int *)(action + 0xe0),
                0, 0, 8);
  *(u32 *)(DAT_007ce3ec + 0xb80) = 1;
  return 1;
}

// FUN_002f6510
u32 func_002f6510(void *param_1)
{
  struct {
    u64 firstPositionXY;
    f32 firstPositionZ;
    u8 firstTransform[16];
    RwV3d secondPosition;
    u8 secondTransform[16];
  } work;
  u8 *action = (u8 *)param_1;
  int encounter = *(int *)(DAT_007ce3ec + 0xb5c);
  float distance;
  u32 result;
  u32 special;

  if (encounter == 0x126) goto encounter126;
  if (encounter == 0x128) goto encounterGroup;
  if (encounter == 0x127) goto encounterGroup;
  switch (encounter) {
  case 0x125:
    goto encounterGroup;
  default:
    goto encounterOther;
  }

encounterGroup:
  FUN_002a4690(work.firstTransform, DAT_0069a608,
               DAT_0069a628, D_00697880);
  {
    u64 xy = *(volatile /* Removing this function's qualifier batch loses func_002f6510 (MATCH nd0 -> MISMATCH nd10, size 816 -> 816) - measured W170. */ u64 *)DAT_0069a608;
    f32 z = *(volatile /* Removing this function's qualifier batch loses func_002f6510 (MATCH nd0 -> MISMATCH nd10, size 816 -> 816) - measured W170. */ f32 *)(DAT_0069a608 + 8);
    work.firstPositionXY = xy;
    work.firstPositionZ = z;
  }
  FUN_002a4690(work.secondTransform, DAT_0069a618,
               DAT_0069a638, D_00697880);
  work.secondPosition = *(RwV3d *)DAT_0069a618;
  distance = 2.0f;
  special = 1;
  result = special;
  goto apply;

encounter126:
  FUN_002a4690(work.firstTransform, DAT_0069a648,
               DAT_0069a668, D_00697880);
  {
    u64 xy = *(volatile /* Removing this function's qualifier batch loses func_002f6510 (MATCH nd0 -> MISMATCH nd10, size 816 -> 816) - measured W170. */ u64 *)DAT_0069a648;
    f32 z = *(volatile /* Removing this function's qualifier batch loses func_002f6510 (MATCH nd0 -> MISMATCH nd10, size 816 -> 816) - measured W170. */ f32 *)(DAT_0069a648 + 8);
    work.firstPositionXY = xy;
    work.firstPositionZ = z;
  }
  FUN_002a4690(work.secondTransform, DAT_0069a658,
               DAT_0069a678, D_00697880);
  work.secondPosition = *(RwV3d *)DAT_0069a658;
  distance = 2.0f;
  special = 1;
  result = special;
  goto apply;

encounterOther:
  {
    u16 index;
    int offset;
    u8 *position;
    if (FUN_002d6370(*(s16 *)(*(int *)(action + 0xe0) + 0x6e)) == 1 &&
        func_002f6c20() == 0) {
      index = 0;
    } else {
      index = 1;
    }
    offset = index * 0xc;
    position = DAT_0069a690 + offset;
    FUN_002a4690(work.firstTransform, position,
                 DAT_0069a6d0 + offset, D_00697880);
    *(RwV3d *)&work.firstPositionXY = *(RwV3d *)position;
    position = DAT_0069a6b0 + offset;
    FUN_002a4690(work.secondTransform, position,
                 DAT_0069a6f0 + offset, D_00697880);
    work.secondPosition = *(RwV3d *)position;
  }
  distance = 3.0f;
  special = 0;
  result = 1;

apply:
  if (result) {
    FUN_002a2290((void *)(DAT_007ce3ec + 0x20),
                 (f32 *)&work.firstPositionXY, (f32 *)&work.secondPosition, 1);
    FUN_002a3110((void *)(DAT_007ce3ec + 0x20), distance);
    if (special) {
      FUN_002a3e80(0.0f, (u8 *)(uintptr_t)*(int *)(action + 0xe0),
                   0, 0, 0x40);
    } else {
      FUN_002a3e80(0.0f, (u8 *)(uintptr_t)*(int *)(action + 0xe0),
                   0, 0, 1);
    }
  }
  *(u32 *)(DAT_007ce3ec + 0xb5c) = 0xffffffff;
  return result;
}

#pragma opt_loop_invariants on
// FUN_002f6840
void func_002f6840(BtlAction* action)
{
  BtlUnit* unit;
  BtlUnit* iter;
  void* object;
  BtlPacket* packet;
  void* stream;
  s32 mode;
  s32 result;

  gBtl->flags &= ~0x02000000;
  gBtl->flags |= 0x80000;
  unit = action->unit;
  if (*(s32*)(DAT_007ce3ec + 0xb4c) > 0) {
    mode = 2;
  } else {
    mode = 3;
  }
  object = func_002b8f90(0);
  func_002b90d0(object, func_002f87e0(mode));
  packet = FUN_002b8d60_packet_voice(1, 0xfff);
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 1);
  packet = FUN_002a3b40_packet_voice(NULL, 1);
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 0);
  packet = FUN_002baf90_packet_voice(object, unit, unit, 0, 0x200);
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 2);
  packet = FUN_002baf90_packet_voice(object, unit, unit, 1, 0x200);
  packet->actionUID = action->uid;
  btlPacketRegister(packet, 2);
  if (mode == 3) {
    for (iter = gBtl->unitLists[UNIT_GENUS_EC].head;
         iter != NULL; iter = iter->next) {
      if (iter->charId == 0xf2) {
        *(u32*)(DAT_007ce3ec + 0xb50) = 0;
        *(u16*)(DAT_007ce3ec + 0xb54) = 0x1e;
        *(u16*)(DAT_007ce3ec + 0xb56) = 4;
        *(u16*)(DAT_007ce3ec + 0xb58) = 0;
      }
    }
    stream = FUN_002f8810_ptr_voice();
    packet = FUN_002dd760_packet_voice(3, stream, 4);
    packet->preUpdateDelay = 0x1e;
    btlPacketRegister(packet, 1);
    result = FUN_003951d0(0x15ff);
    if (result == 0) {
      FUN_00395170(0x15ff);
      packet = FUN_002db890_packet_voice();
      packet->preUpdateDelay = 0;
      btlPacketRegister(packet, 1);
      packet = FUN_002db800_packet_voice(0x20, 0x1de);
      packet->preUpdateDelay = 0;
      btlPacketRegister(packet, 1);
    }
  }
  func_002b9030(object);
}
#pragma opt_loop_invariants off


// FUN_002f6ab0
u32 func_002f6ab0(BtlAction* action)
{
    BtlPacket* packet;
    u32 result;

    if (btlPacketFindFirstByActionUID(action->uid, BTL_UIDMAX) == NULL)
    {
        *(u32*)(DAT_007ce3ec + 0xb48) = 0;
        action->unit->datUnit->flags &= ~0x40;
        *(u32*)(DAT_007ce3ec + 0xc) &= ~0x80000;
        *(u32*)(DAT_007ce3ec + 0xc) |= 0x2000000;

        packet = FUN_0029fa50(0x10);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        packet = FUN_002a1080(0x10, 4);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        packet = FUN_002a16c0(0x10);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        result = 0;
    }
    else
    {
        result = 1;
    }
    return result;
}
#pragma opt_loop_invariants reset

// FUN_002f6bc0
u32 func_002f6bc0(void)
{
    *(u32*)(DAT_007ce3ec + 0xb50) = 0;
    *(u16*)(DAT_007ce3ec + 0xb54) = 0x28;
    *(u16*)(DAT_007ce3ec + 0xb56) = 0;
    *(u16*)(DAT_007ce3ec + 0xb58) = 0;
    return 1;
}

// FUN_002f6bf0
void func_002f6bf0(u32 param_1)

{
  if (*(u16 *)(*(int *)(DAT_007ce3ec + 0xbbc) + 8) == 0x1b4) {
    *(u32 *)(DAT_007ce3ec + 0xb48) = 0;
    *(u32 *)(DAT_007ce3ec + 0xb4c) = param_1;
  }
  return;
}

// FUN_002f6c20
u32 func_002f6c20(void)

{
  u32 uVar1;
  
  if (*(u16 *)(*(int *)(DAT_007ce3ec + 0xbbc) + 8) == 0x1b4) {
    uVar1 = *(u32 *)(DAT_007ce3ec + 0xb48);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// FUN_002f6c50
s32 func_002f6c50(u16 charId)
{
    s32 animation;

    switch (charId)
    {
    case 0x100: animation = 0; break;
    case 0x101: animation = 1; break;
    case 0x102: animation = 2; break;
    case 0x103: animation = 3; break;
    case 0x104: animation = 4; break;
    case 0x105: animation = 5; break;
    case 0x106: animation = 6; break;
    case 0x107: animation = 8; break;
    case 0x108: animation = 0xe; break;
    case 0x109: animation = 9; break;
    case 0x10a: animation = 0xa; break;
    case 0x10b: animation = 0xb; break;
    case 0x10c: animation = 0xc; break;
    case 0x10d: animation = 0xd; break;
    case 0x10f: animation = 0xf; break;
    case 0x110: animation = 0x10; break;
    case 0x112: animation = 0x12; break;
    case 0x115: animation = 7; break;
    case 0x111:
    case 0x11a:
    case 0x11b:
    case 0x11c:
    case 0x11d:
    case 0x11e:
    case 0x11f:
    case 0x120:
    case 0x121:
    case 0x122:
    case 0x123:
    case 0x124:
    case 0x125:
    case 0x128:
        animation = 0x11;
        break;
    case 0x126: animation = 0x13; break;
    case 0x116:
    case 0x117:
    case 0x118:
        animation = 0x14;
        break;
    case 0x119:
    case 0x127:
        animation = 0x15;
        break;
    case 0xe9: animation = 0x16; break;
    case 0xea: animation = 0x17; break;
    case 0xeb: animation = 0x18; break;
    case 0xec: animation = 0x19; break;
    case 0xed: animation = 0x1a; break;
    case 0xee: animation = 0x1b; break;
    case 0xef: animation = 0x1c; break;
    case 0xf0: animation = 0x1d; break;
    case 0xf1: animation = 0x1e; break;
    default: animation = -1; break;
    }
    return animation;
}

// FUN_002f6e00 MATCHING
void func_002f6e00(void)

{
  u16 sVar1;
  u32 uVar2;
  u8 auStack_40 [64];
  
  FUN_00521408(DAT_007ce3ec + 0xb14,0,0x74);
  *(u16 *)(DAT_007ce3ec + 0xb84) = 0;
  sVar1 = *(u16 *)(*(int *)(DAT_007ce3ec + 0xbbc) + 8);
  switch (sVar1) {
  case 0x1c8: goto L_1c8;
  case 0x1a0: goto L_1a0;
  case 0x1a1: goto L_1a1;
  case 0x1a2: goto L_1a2;
  case 0x1a3: goto L_1a3;
  case 0x1a4: goto L_1a4;
  case 0x1a5: goto L_1a5;
  case 0x1a6: goto L_1a6;
  case 0x1a7: goto L_1a7;
  case 0x1a8: goto L_1a8;
  case 0x1a9: goto L_1a9;
  case 0x1aa: goto L_1aa;
  case 0x1ab: goto L_1ab;
  case 0x1ac: goto L_1ac;
  case 0x1ad: goto L_1ad;
  case 0x1ae: goto L_1ae;
  case 0x1af: goto L_1af;
  case 0x1b0: goto L_1b0;
  case 0x1b1: goto L_1b1;
  case 0x1b2: goto L_1b2;
  case 0x1b3: goto L_1b3;
  case 0x1b4: goto L_1b4;
  default: goto L_done;
  }
L_1c8:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x40;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc;
    *(u16 *)(DAT_007ce3ec + 0xb84) = 1;
  goto L_done;
L_1a0:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x80;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x414;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1a1:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x828;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1a2:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0xc3c;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1a3:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x1050;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1a4:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x1464;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1a5:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x1878;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1a6:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x1c8c;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1a7:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x20a0;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1a8:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x80;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x24b4;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1a9:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x80;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x28c8;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1aa:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x80;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x2cdc;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1ab:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x80;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x30f0;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1ac:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x3504;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1ad:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x20;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffffbff;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x3918;
    *(u16 *)(DAT_007ce3ec + 0xb84) = 2;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1ae:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x80;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x3d2c;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1af:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x80;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x4140;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1b0:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x80;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x4554;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1b1:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x4968;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1b2:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x4d7c;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1b3:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x5190;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_1b4:
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffeffff;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfbffffff;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 1;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 2;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 8;
    *(u32 *)(DAT_007ce3ec + 0x10) = *(u32 *)(DAT_007ce3ec + 0x10) | 0x10;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) & 0xfffffbff;
    *(int *)(DAT_007ce3ec + 0xb18) = DAT_007ce4bc + 0x55a4;
    *(u32 *)(DAT_007ce3ec + 0xc) = *(u32 *)(DAT_007ce3ec + 0xc) | 0x200000;
  goto L_done;
L_done:
  FUN_00523ac8(auStack_40,DAT_006a0000 - 0x58f0,*(u16 *)(*(int *)(DAT_007ce3ec + 0xbbc) + 8));
  uVar2 = FUN_0035c090(DAT_007ce4d0,auStack_40);
  *(u32 *)(DAT_007ce3ec + 0xb1c) = uVar2;
  FUN_00523ac8(auStack_40,DAT_006a0000 - 0x58d0,*(u16 *)(*(int *)(DAT_007ce3ec + 0xbbc) + 8));
  uVar2 = FUN_0035c090(DAT_007ce4d0,auStack_40);
  *(u32 *)(DAT_007ce3ec + 0xb20) = uVar2;
  FUN_00523ac8(auStack_40,DAT_006a0000 - 0x58b0,*(u16 *)(*(int *)(DAT_007ce3ec + 0xbbc) + 8));
  uVar2 = FUN_0035c090(DAT_007ce4d0,auStack_40);
  *(u32 *)(DAT_007ce3ec + 0xb24) = uVar2;
  *(u32 *)(DAT_007ce3ec + 0xb28) = 0;
  return;
}

