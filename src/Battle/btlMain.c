#include "Battle/battle.h"
#include "Main/g_data.h"
#include "Battle/btlFade.h"
#include "Kosaka/Field/k_fldrc.h"
#include "Kosaka/Field/k_sceneDraw.h"
#include "Scene/mt_scene.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "h_fade.h"
#include "temporary.h"
#include "Battle/btlAction.h"
#include "Battle/btlFormation.h"
#include "Battle/btlUnit.h"
#include "rw/rwcore.h"
#include "rw/rtquat.h"

void FUN_003b5ab0();
#pragma alias btlMainDrawColorOverlay btlMain0029e4b0


/* Recovered battle-misc support prelude */
typedef int (*code)(...);
void FUN_0029ee20(u32 param_1);
typedef struct BtlMainColorWork BtlMainColorWork;
typedef struct BtlMainLerpWork
{
    f32 value0;
    f32 value1;
    f32 value2;
    f32 value3;
    f32 target0;
    f32 target1;
    f32 target2;
    f32 target3;
    u32 totalFrames;
    u32 currentFrame;
} BtlMainLerpWork;
#define CONCAT13(a, b) ((((u32)(a) & 0xffu) << 24) | ((u32)(b) & 0x00ffffffu))
u32 FUN_0029f150(float *param_1);
BtlPacket* FUN_0029f4b0(u32 param_1,u32 param_2,u32 param_3);
u32 FUN_0029f760(float *param_1);
BtlPacket* FUN_0029fa50(u32 param_1);
u32 FUN_0029faa0(BtlMainColorWork *param_1);
BtlPacket* FUN_002a0050(u32 param_1,u32 param_2,u32 param_3,u32 param_4,u16 param_5);
u32 FUN_002a0440(float *param_1);
BtlPacket* FUN_002a1080(s32 param_1, s16 param_2);
u8 FUN_002a10e0(BtlMainLerpWork *param_1);
BtlPacket* FUN_002a1280(u32 param_1,u32 param_2);
u8 FUN_002a1400(float *param_1);
BtlPacket* FUN_002a16c0(s32 param_1);
u32 FUN_002a1710(int *param_1);
void FUN_002a1b00(s32 param_1,s16 param_2,s32 param_3);
u32 FUN_002a1b70(u32 *param_1);
void FUN_002a1db0(s32 param_1);
void FUN_002a1e00(float *param_2,float *param_3,float *param_4,float param_1);
extern void FUN_002a1e00_typed(f32* out, f32* first, f32* second, f32 weight);
u32 FUN_002a2050(u16 *param_1,f32 *param_2,f32 *param_3);
void FUN_002a2170(u16 *param_1,f32 *param_2);
void FUN_002a2290(u16 *param_1,f32 *param_2,f32 *param_3,u16 param_4);
void FUN_002a2660(u16 *param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5,u16 param_6  );
void FUN_002a2a20(u8* param_2,f32* param_3,f32 param_1);
void FUN_002a2b50(u8* param_2, f32* param_3, f32 param_1);
void FUN_002a2c40(u8* param_2,f32* param_3,f32 param_1);
u32 FUN_002a2ed0(u8* param_1,f32* param_2,f32* param_3);
u32 FUN_002a3010(u8* param_2,f32 param_1);
void FUN_002a3110(u8* param_2,float param_1);
void FUN_002a3160(u8* param_2,float param_1);
extern f32 DAT_00693850[];
extern f32 DAT_00693854[];
extern f32 DAT_00693858[];
extern f32 DAT_0069385c[];
extern f32 DAT_00693860[];
extern f32 DAT_00693864[];
extern f32 DAT_00693868[];
extern f32 DAT_00697880;
extern f32 DAT_00697888;
extern f32 DAT_00697884;
#pragma alias DAT_00697880_abs DAT_00697880
extern f32 DAT_00697880_abs[];
extern f32 DAT_007caee8;
extern f32 DAT_007caf08;
extern f32 DAT_007caf88;
extern f32 DAT_007cafbc;
extern u8 DAT_007cc970;
extern u8 DAT_007cc972;
extern u8 DAT_007cc971;
extern u8 DAT_007ce4f9;
extern u8 DAT_007ce4fa;
extern u8 DAT_007ce4fb;
extern u8 DAT_007cc973;
extern u8* DAT_007ce3ec;
extern f32 DAT_00957180;
extern f32 DAT_00957184;
extern f32 DAT_00957188;
#pragma alias DAT_00957180_abs DAT_00957180
#pragma alias DAT_00957184_abs DAT_00957184
#pragma alias DAT_00957188_abs DAT_00957188
extern u8 DAT_00957180_abs[];
extern u8 DAT_00957184_abs[];
extern u8 DAT_00957188_abs[];
extern u32 DAT_009572b0;
extern u32 DAT_009572b4;
extern u32 DAT_009572b8;
extern u32 DAT_009572bc;
extern u32 DAT_009572c0;
extern u32 DAT_009572c4;
extern u32 DAT_009572c8;
extern u32 DAT_009572cc;
extern u32 DAT_009572d0;
extern f32 _DAT_0069386c[];
extern f32 fGpffff8044;
extern f32 fGpffff804c;
extern f32 fGpffff8054;
extern f32 fGpffff8058;
extern f32 fGpffff8048;
extern f32 fGpffff8050;
extern f32 fGpffff805c;
extern f32 fGpffff8118;
extern f32 fGpffff82c8;
extern f32 fGpffff83d0;
extern f32 fGpffff83d4;
extern f32 fGpffff83d8;
extern int iGpffffb6fc;
extern u8 bGpffffb808;
extern u8 bGpffffb809;
extern u8 bGpffffb80a;
extern u8 bGpffffb80b;
extern int iGpffffb708;

#define BTL_U16(offset) (*(u16*)((u8*)gBtl + (offset)))
#define BTL_U32(offset) (*(u32*)((u8*)gBtl + (offset)))
#define BTL_PACKET_U8(packet, offset) (*(u8*)((u8*)(packet) + (offset)))
#define BTL_PACKET_U16(packet, offset) (*(u16*)((u8*)(packet) + (offset)))
#define BTL_PACKET_U64(packet, offset) (*(u64*)((u8*)(packet) + (offset)))

typedef struct BtlMainRecovery
{
    s32 hpDelta;
    s32 spDelta;
    u32 flags;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
} BtlMainRecovery;

struct BtlMainColorWork
{
    f32 r;
    f32 g;
    f32 b;
    f32 a;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1c;
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    f32 unk_2c;
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    f32 unk_3c;
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4c;
    f32 unk_50;
    f32 unk_54;
    f32 unk_58;
    f32 unk_5c;
    u32 unk_60;
    u32 unk_64;
    u16 unk_68;
    u16 unk_6a;
};

extern u8 DAT_007ce4f8[4];
extern u8* iGpffffb710;
extern f32 fGpffff8218;
extern f32 fGpffff82cc;
extern f32 fGpffff81e8;
extern RwV3d D_00697870;
extern f32 D_00697880[];
extern RwRGBAReal D_00693850;
extern RwRGBAReal D_00693860;
extern RwSky2DVertex DAT_00957270;
extern f32 DAT_009572B0[8];
extern u32 DAT_009572D0;
extern void (*DAT_00960090)(u32 state, u32 value);
extern void (*DAT_009600A0)(u32 primitive, void* vertices, u32 count);
#pragma alias DAT_00960090_abs DAT_00960090
extern void (*DAT_00960090_abs[])(u32 state, u32 value);
#pragma alias DAT_009600A0_abs DAT_009600A0
extern void (*DAT_009600A0_abs[])(u32 primitive, void* vertices, u32 count);

RwRGBAReal* func_0019fd70(void);
RwMatrix* func_0019fda0(void);
RwRGBAReal* func_001a09d0(void);
void* func_001a0700(u16 resTypeId);
void* func_001a07f0(u16 resTypeId);
void* func_001a08e0(u16 resTypeId);
RwMatrix* func_001a0a50(void);
void func_0019f8f0(const RwRGBAReal* color);
void FUN_004c9d70(f32 value, void* data);

extern u16 DAT_007e094c;
extern u16 DAT_007e094e;
extern u16 DAT_007e0956;
extern u16 DAT_007e0958;
extern const u16 D_007E094C;
extern const u16 D_007E094E;
extern const u16 D_007E0956;
extern const u16 D_007E0958;
extern void* DAT_007ce4f4;
extern void* DAT_007cad78;
extern char DAT_006935c0[];

void FUN_001a0410();
u32 FUN_0016f190(s32 bit);
u16 FUN_0016c920();
u16 FUN_0016c9f0();
void FUN_0016d6b0();
u32 FUN_0017d800();
u16 FUN_0017b170();
void FUN_0016f1f0();
DatUnit* FUN_0016cd60(s16 pcId);
void FUN_001a0590();
void* FUN_001f1ae0();
void FUN_001fec50();
u32 FUN_001fec30();
u32 FUN_001feec0();
void FUN_001febf0();
void FUN_001ff370();
void FUN_001ff350();
void FUN_001ff390();

BtlAction* FUN_00289650();
BtlPacket* FUN_002e2ec0();
BtlPacket* FUN_002e2a10();
BtlPacket* FUN_002f9bc0();
BtlPacket* FUN_00285690();
BtlPacket* FUN_00285d30();
BtlPacket* FUN_002819d0(void* param_1, BtlUnit* unit, const RwV3d* pos, u16 param_4);
BtlPacket* FUN_002822b0(BtlUnit* unit, const RtQuat* rot, u32 param_3);
BtlPacket* FUN_00284200(f32 param_1, BtlUnit* unit, u16 param_3, u16 param_4, u16 param_5);
BtlPacket* FUN_00284d80(BtlUnit* unit, u16 param_2);
BtlPacket* FUN_002dd960();
BtlPacket* FUN_002dd8e0();
BtlPacket* FUN_002bb2f0();
BtlPacket* FUN_002bc680();
BtlPacket* FUN_002bfc00();
BtlPacket* FUN_002dbfe0();
BtlPacket* FUN_002db740();
BtlPacket* FUN_002b8d60();
BtlPacket* FUN_002b8f90();
BtlPacket* FUN_002bac00();
BtlPacket* FUN_002dd4a0();
BtlPacket* FUN_002baf90();
BtlPacket* FUN_002dd5e0();
BtlPacket* FUN_002bd480();
BtlPacket* FUN_002d7e20(BtlAction* action, BtlAction* param_2, BtlMainRecovery* recovery, u32 param_4, u32 param_5);
BtlPacket* FUN_002bd230();
BtlPacket* FUN_002bdbd0();
BtlPacket* FUN_002e2be0();
BtlPacket* FUN_002db890();
BtlPacket* FUN_002bc7e0();
BtlPacket* FUN_002dd100();

Model* FUN_00316910();
u16 FUN_003b6000();
u64 FUN_00306e80();
u16 FUN_00308120();
u32 FUN_0030b5a0();
u32 FUN_0030b5e0();
u32 FUN_00300580();
u32 FUN_003005e0();
void FUN_00300560();
void FUN_003004f0();
void FUN_00300410();
void FUN_00300480();
void FUN_00302380();
void FUN_00301690(u32 param_1);
void* FUN_00198590(void);

void FUN_0029dfc0(void);
void FUN_00287b20();
void FUN_002831c0();
void FUN_00282d40(f32 param_1, BtlUnit* unit, s16 param_3, u32 param_4, s8 param_5);
void FUN_00282bc0();
void FUN_0031c7e0();
void FUN_0027f680(BtlUnit* unit, const RtQuat* rot);
u32 FUN_003009a0();
BtlPacket* FUN_002a3b40();
void FUN_00287490();
void FUN_00287510();
void FUN_002b71e0();
u16 FUN_002d50c0();
void FUN_0029a690();
void FUN_0029a470();
void FUN_0029a750();
u16 FUN_002ffbc0();
BtlAction* FUN_0029ad20();
BtlAction* FUN_0029ad50();
void FUN_0029abe0();
void FUN_002fac80();
u16 FUN_002d4cf0();
u16 FUN_002ffcc0();
void FUN_002dcd30();
u32 FUN_002d1a70();
void FUN_002d1a10();
void FUN_002d3e00();
void FUN_00280870(u32 param_1, u32 param_2, RwV3d* pos, u32 param_4, u32 param_5, u32 param_6);
void FUN_004c69f0(RwV3d* dst, const RwV3d* src);
void FUN_002ffd90();
u16 FUN_002838d0(f32 param_1, BtlUnit* unit, u16 param_3);
void FUN_002ff2f0();
void FUN_002bfc70();
u32 FUN_002ff320();
void FUN_002faab0();
void FUN_0029b070();
void FUN_00521408();
u32 FUN_002d4ed0();
u32 FUN_002d5550();
u32 FUN_0027d560();
void FUN_003c72d0(void* param_1);
void FUN_003c7430();
void FUN_003c7560();
void FUN_003c74e0();
void FUN_002bb6f0();
void FUN_0029ea60(u32 index, u32* colorA, u32* colorB);
s32 FUN_0029ec00(s32 index);
void FUN_0029ec80(u32 index, u32* colorA, u32* colorB);
s32 FUN_0029ec50(s32 index);
BtlAction* FUN_0029a1d0();
void FUN_002d5dc0();
u32 FUN_002ffdf0();
u32 FUN_00300100();
u16 FUN_002ffd70();
u16 FUN_002ffd80();
void FUN_002b9030();
u32 FUN_002fd7c0();
void FUN_002ddbe0();
void FUN_002a4c50();
void FUN_002bf650();
void FUN_002ffdc0();
void FUN_00299d60();
void FUN_0048d480(void* curve,s32 mode,f32 time,RwV3d* dst,void* aux);


static void btlMainRegisterDependentPacket(BtlPacket* packet, u8 type, u64 parentUID)
{
    packet->unk_00 = 4;
    packet->parentUID = parentUID;
    btlPacketRegister(packet, type);
}



void btlSound002dced0(u16 param_1);
void btlSound002dcf80(s32 param_1, u16 param_2);
void btlBoss002f6e00();
u32 btl002facc0();
void datAddBattleCount(s32 amount);
void scrClearTextBox(s32 param_1, s32 param_2, s32 param_3, s32 param_4);
void FUN_001f1b60(void* param_1);
u32 FUN_001f1b00(void* param_1);
u32 FUN_001f1b40(void* param_1);
void FUN_001f1b20(void* param_1);
void FUN_001f1c20(void* param_1);
u32 FUN_001f1f40();
u32 FUN_002dba60();
void FUN_002dcf10();
void FUN_002fb690();
void FUN_0029e3c0(void);
void FUN_002bfc50(s32 param_1);

u32 FUN_001fecc0();
u32 FUN_002e42c0();
u32 FUN_002e4290(BtlAction* action);
void FUN_0029b040();
void FUN_001fdd20();
void FUN_003c7b90();
u32 FUN_003c7850();
u32 FUN_003c7610();
void FUN_001ff3b0();
void btlMainInitStateNon(BtlStateWork* work);
u32 btlMainUpdateStateNon(BtlStateWork* work);
void btlMainInitStateInit(BtlStateWork* work);
u32 btlMainUpdateStateInit(BtlStateWork* work);
void btlMainInitStateSceneSet(BtlStateWork* work);
u32 btlMainUpdateStateSceneSet(BtlStateWork* work);
void btlMainInitStateUnitCreate(BtlStateWork* work);
u32 btlMainUpdateStateUnitCreate(BtlStateWork* work);
void btlMainInitStateUnitLoad(BtlStateWork* work);
u32 btlMainUpdateStateUnitLoad(BtlStateWork* work);
void btlMainInitStateStart(BtlStateWork* work);
u32 btlMainUpdateStateStart(BtlStateWork* work);
void btlMainInitStateAction(BtlStateWork* work);
BtlPacket* func_002e2ec0(u16 voiceId);
u32 btlMainUpdateStateAction(BtlStateWork* work);
void btlMainInitStateRevivalMes(BtlStateWork* work);
u32 btlMainUpdateStateRevivalMes(BtlStateWork* work);
void btlMainInitStateRevival(BtlStateWork* work);
u32 btlMainUpdateStateRevival(BtlStateWork* work);
void btlMainInitStateWin(BtlStateWork* work);
u32 btlMainUpdateStateWin(BtlStateWork* work);
void btlMainInitStateEnemyDead(BtlStateWork* work);
u32 btlMainUpdateStateEnemyDead(BtlStateWork* work);
void btlMainInitStateCondition(BtlStateWork* work);
u32 btlMainUpdateStateCondition(BtlStateWork* work);
void btlMainInitStateLose(BtlStateWork* work);
u32 btlMainUpdateStateLose(BtlStateWork* work);
void btlMainInitStateFadeOut(BtlStateWork* work);
u32 btlMainUpdateStateFadeOut(BtlStateWork* work);
void btlMainInitStateEnd(BtlStateWork* work);
u32 btlMainUpdateStateEnd(BtlStateWork* work);
void btlMainInitStateResult(BtlStateWork* work);
u32 btlMainUpdateStateResult(BtlStateWork* work);
void btlMainInitStateExit(BtlStateWork* work);
u32 btlMainUpdateStateExit(BtlStateWork* work);
void btlMainInitStateTest(BtlStateWork* work);
u32 btlMainUpdateStateTest(BtlStateWork* work);
void btlMainInitStateMc(BtlStateWork* work);
u32 btlMainUpdateStateMc(BtlStateWork* work);

// 12 bytes
typedef struct 
{
    void (*init)(BtlStateWork* work);  // 0x00
    u32 (*update)(BtlStateWork* work); // 0x04
    const char* name;                  // 0x08
} BtlStateEntry;

// 00693760
static const BtlStateEntry sBtlStateTable[] =
{
    {NULL, NULL, "NULL"},
    {btlMainInitStateNon, btlMainUpdateStateNon, "NON"},
    {btlMainInitStateInit, btlMainUpdateStateInit, "INIT"},
    {btlMainInitStateSceneSet, btlMainUpdateStateSceneSet, "SCENE_SET"},
    {btlMainInitStateUnitCreate, btlMainUpdateStateUnitCreate, "UNIT_CREATE"},
    {btlMainInitStateUnitLoad, btlMainUpdateStateUnitLoad, "UNIT_LOAD"},
    {btlMainInitStateStart, btlMainUpdateStateStart, "START"},
    {btlMainInitStateAction, btlMainUpdateStateAction, "ACTION"},
    {btlMainInitStateRevivalMes, btlMainUpdateStateRevivalMes, "REVIVAL_MES"},
    {btlMainInitStateRevival, btlMainUpdateStateRevival, "REVIVAL"},
    {btlMainInitStateWin, btlMainUpdateStateWin, "WIN"},
    {btlMainInitStateEnemyDead, btlMainUpdateStateEnemyDead, "ENEMY DEAD"},
    {btlMainInitStateCondition, btlMainUpdateStateCondition, "CONDITION"},
    {btlMainInitStateLose, btlMainUpdateStateLose, "LOSE"},
    {btlMainInitStateFadeOut, btlMainUpdateStateFadeOut, "FADE_OUT"},
    {btlMainInitStateEnd, btlMainUpdateStateEnd, "END"},
    {btlMainInitStateResult, btlMainUpdateStateResult, "RESULT"},
    {btlMainInitStateExit, btlMainUpdateStateExit, "EXIT"},
    {btlMainInitStateTest, btlMainUpdateStateTest, "TEST"},
    {btlMainInitStateMc, btlMainUpdateStateMc, "MC"}
};

// FUN_0029b0e0
void btlMainInitStateNon(BtlStateWork* work)
{
}
// FUN_0029b0f0
u32 btlMainUpdateStateNon(BtlStateWork* work)
{
    return BTL_STATE_NULL;
}

// FUN_0029b100
void btlMainInitStateInit(BtlStateWork* work)
{
    btlSound002dcf80(3, 0);
    btlSound002dcf80(4, 0);
    btlSound002dced0(0);
    btlBoss002f6e00();
    datAddBattleCount(1);
}
// FUN_0029b160
u32 btlMainUpdateStateInit(BtlStateWork* work)
{
    return BTL_STATE_SCENESET;
}

// FUN_0029b170
void btlMainInitStateSceneSet(BtlStateWork* work)
{
    btlMainLoadScene();
}
// FUN_0029b190
u32 btlMainUpdateStateSceneSet(BtlStateWork* work)
{
    BtlPacket* scenePacket;
    BtlPacket* soundPacket;
    s32 loadSound;
    if (btlMainTryLoadFinishScene() != 0 && btlPacketCount() == 0)
    {
        FUN_001a0410(1);
        FUN_0029dfc0();
        switch (datGetFlag(0x141))
        {
        default:
            loadSound = 0;
            break;
        case 0:
            loadSound = 1;
            break;
        }
        scenePacket = func_002e2ec0(loadSound);
        btlPacketRegister(scenePacket, BTLPACKET_TYPE_1);
        soundPacket = FUN_002e2a10();
        soundPacket->unk_00 = 4;
        soundPacket->parentUID = scenePacket->uid;
        btlPacketRegister(soundPacket, BTLPACKET_TYPE_1);
        btlPacketRegister(FUN_002f9bc0(), BTLPACKET_TYPE_1);
        return BTL_STATE_UNITCREATE;
    }
    return BTL_STATE_NULL;
}

// FUN_0029b280
asm void btlMainInitStateUnitCreate(BtlStateWork* work)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0000902d
  .word 0x0000882d
  .word 0x10000056
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x00111080
  .word 0x00621021
  .word 0x8c420bac
  .word 0x10400053
  .word 0x00000000
  .word 0x8c460004
  .word 0x94d00002
  .word 0x0000202d
  .word 0x0200282d
  .word 0x0c0a2594
  .word 0x00000000
  .word 0x8c530030
  .word 0x926200a2
  .word 0x24420001
  .word 0x3044ffff
  .word 0x0200282d
  .word 0x0000302d
  .word 0x0c0c5a44
  .word 0x00000000
  .word 0xae6209f4
  .word 0x14400011
  .word 0x00000000
  .word 0x0260202d
  .word 0x0200282d
  .word 0x24060036
  .word 0x0c0a15a4
  .word 0x00000000
  .word 0x0040802d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc520008
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde120058
  .word 0x1000002e
  .word 0x00000000
  .word 0x8e620098
  .word 0x34420002
  .word 0xae620098
  .word 0x34420008
  .word 0xae620098
  .word 0x0200202d
  .word 0x8e6509f4
  .word 0x0c0ed800
  .word 0x00000000
  .word 0xa66209f2
  .word 0x966409f2
  .word 0x24050001
  .word 0x0c068164
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c0a1ec8
  .word 0x00000000
  .word 0x0260202d
  .word 0x0000282d
  .word 0x0c0a0c70
  .word 0x00000000
  .word 0x826709e8
  .word 0x0260202d
  .word 0x866509e0
  .word 0x0000302d
  .word 0xc66c09e4
  .word 0x0c0a0b50
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0a0af0
  .word 0x00000000
  .word 0x8e6409f4
  .word 0x8c8203f8
  .word 0x14400003
  .word 0x00000000
  .word 0x0c0c71f8
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050004
  .word 0x0c0a1ec8
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0a1d24
  .word 0x00000000
  .word 0x26310001
  .word 0x2e220004
  .word 0x1440ffa9
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0xa0510ba4
  .word 0x8f82b6fc
  .word 0x8c420bbc
  .word 0x8c500004
  .word 0x0000882d
  .word 0x10000011
  .word 0x00000000
  .word 0x96020002
  .word 0x1040000c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x96050002
  .word 0x24040001
  .word 0x0200302d
  .word 0x0c0a2594
  .word 0x00000000
  .word 0x26310001
  .word 0x2610003c
  .word 0x2e220006
  .word 0x1440ffee
  .word 0x00000000
  .word 0x0c0adc78
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x30630100
  .word 0x106000ac
  .word 0x00000000
  .word 0x0000882d
  .word 0x8c820bbc
  .word 0x94430008
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021880
  .word 0x8f82b7b8
  .word 0x00438021
  .word 0x8e030000
  .word 0x30620020
  .word 0x1040000f
  .word 0x00000000
  .word 0x30620010
  .word 0x10400006
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0a69a4
  .word 0x00000000
  .word 0x1000005d
  .word 0x00000000
  .word 0x0c0beb20
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0xa460001a
  .word 0x10000057
  .word 0x00000000
  .word 0x0c0b5430
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0xa462001a
  .word 0x8f83b6fc
  .word 0x9464001a
  .word 0x24030002
  .word 0x1083003b
  .word 0x00000000
  .word 0x24030001
  .word 0x1083001e
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000047
  .word 0x00000000
  .word 0x0c0a69d4
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x94630ba8
  .word 0x30630004
  .word 0x10600040
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x3052ffff
  .word 0x0000982d
  .word 0x10000007
  .word 0x00000000
  .word 0x0c0a6b48
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0a6af8
  .word 0x00000000
  .word 0x26730001
  .word 0x0272182b
  .word 0x1460fff8
  .word 0x00000000
  .word 0x1000002e
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0a69a4
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440148
  .word 0x0c0a691c
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x94830248
  .word 0x34630002
  .word 0xa4830248
  .word 0x8e030000
  .word 0x30630200
  .word 0x14600009
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c07fafc
  .word 0x00000000
  .word 0x8f85b6fc
  .word 0x8ca4000c
  .word 0x3c030010
  .word 0x00831825
  .word 0xaca3000c
  .word 0x24110001
  .word 0x10000014
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0a69a4
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x94830248
  .word 0x34630004
  .word 0xa4830248
  .word 0x8e030000
  .word 0x30630200
  .word 0x14600009
  .word 0x00000000
  .word 0x24040001
  .word 0x0c07fafc
  .word 0x00000000
  .word 0x8f85b6fc
  .word 0x8ca4000c
  .word 0x3c030010
  .word 0x00831825
  .word 0xaca3000c
  .word 0x8f83b6fc
  .word 0x94630ba8
  .word 0x30630008
  .word 0x10600002
  .word 0x00000000
  .word 0x24110001
  .word 0x12200034
  .word 0x00000000
  .word 0x8e030000
  .word 0x30630100
  .word 0x14600030
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x0c0b533c
  .word 0x00000000
  .word 0x3050ffff
  .word 0x2404ffff
  .word 0x24050002
  .word 0x0c0c2048
  .word 0x00000000
  .word 0x0002943c
  .word 0x0012943f
  .word 0x8f83b6fc
  .word 0x8c710158
  .word 0x3210ffff
  .word 0x1000001e
  .word 0x00000000
  .word 0x8e240a2c
  .word 0x1080001a
  .word 0x00000000
  .word 0x0240282d
  .word 0x0c0c1ba0
  .word 0x00000000
  .word 0x3c032700
  .word 0x00431824
  .word 0x14600013
  .word 0x00000000
  .word 0x8e240a2c
  .word 0x0c0bff30
  .word 0x00000000
  .word 0x304300ff
  .word 0x24630002
  .word 0x0203182a
  .word 0x1460000b
  .word 0x00000000
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x28410021
  .word 0x10200005
  .word 0x00000000
  .word 0x8e240a2c
  .word 0x24050002
  .word 0x0c0c013c
  .word 0x00000000
  .word 0x8e310a34
  .word 0x1620ffe2
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
/* W389 measured: opt_loop_invariants on nd754->753, object 1744/1760 -> 1744/1760. */
#pragma push
#pragma opt_loop_invariants on
// FUN_0029b760
asm u32 btlMainUpdateStateUnitCreate(BtlStateWork* work)
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
  .word 0x0c09f904
  .word 0x00000000
  .word 0x144001a1
  .word 0x00000000
  .word 0x0c07fb0c
  .word 0x00000000
  .word 0x1440019d
  .word 0x00000000
  .word 0x0c0b734c
  .word 0x00000000
  .word 0x0c07fbb0
  .word 0x00000000
  .word 0x1440000e
  .word 0x00000000
  .word 0x0c0b469c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430009
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x8c62000c
  .word 0x34424000
  .word 0xac62000c
  .word 0x0c07fcdc
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x2402bfff
  .word 0x00621024
  .word 0xac82000c
  .word 0x0c0b4684
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000001b
  .word 0x00000000
  .word 0x3202ffff
  .word 0x000218c0
  .word 0x8f82b6fc
  .word 0x00431021
  .word 0x8c510150
  .word 0x10000010
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0c0b4f80
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x27a60070
  .word 0x0000382d
  .word 0x0c09fdf0
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a50070
  .word 0x0c09fda0
  .word 0x00000000
  .word 0x8e310a34
  .word 0x1620fff0
  .word 0x00000000
  .word 0x26020001
  .word 0x3050ffff
  .word 0x3202ffff
  .word 0x28420002
  .word 0x1440ffe3
  .word 0x00000000
  .word 0x24040002
  .word 0x0000282d
  .word 0x27a60090
  .word 0x0000382d
  .word 0x0000402d
  .word 0x24090001
  .word 0x0c0a021c
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c500150
  .word 0x100000b0
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0a1d24
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x1040003a
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x3c050008
  .word 0x0c0c013c
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x0000282d
  .word 0x0c0bff64
  .word 0x00000000
  .word 0x8e02009c
  .word 0x34420001
  .word 0xae02009c
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c0a0c70
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0b7658
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0200202d
  .word 0x24050012
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0200202d
  .word 0x24050012
  .word 0x0c0a0e34
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c0a1360
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0b7638
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000006d
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x90620ba4
  .word 0x28410002
  .word 0x14200068
  .word 0x00000000
  .word 0x8c620010
  .word 0x30420001
  .word 0x14400064
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a500b0
  .word 0x0000302d
  .word 0x27a700a0
  .word 0x0c09fdf0
  .word 0x00000000
  .word 0xc7a200b4
  .word 0xe7a20094
  .word 0xc7a100b0
  .word 0xc7a00090
  .word 0x46000801
  .word 0xe7a00080
  .word 0x46021001
  .word 0xe7a00084
  .word 0xc7a100b8
  .word 0xc7a00098
  .word 0x46000801
  .word 0xe7a00088
  .word 0x27a40080
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c024316
  .word 0x44820800
  .word 0xc7a00080
  .word 0x460100c2
  .word 0xe7a30080
  .word 0xc7a00084
  .word 0x46010082
  .word 0xe7a20084
  .word 0xc7a00088
  .word 0x46010042
  .word 0xe7a10088
  .word 0xc7a00090
  .word 0x46001800
  .word 0xe7a00080
  .word 0xc7a00094
  .word 0x46001000
  .word 0xe7a00084
  .word 0xc7a00098
  .word 0x46000800
  .word 0xe7a00088
  .word 0x0200202d
  .word 0x27a50080
  .word 0x0c09fd94
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a500b0
  .word 0xc78c8088
  .word 0x24060008
  .word 0x0c0a0674
  .word 0x00000000
  .word 0x0040882d
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a500a0
  .word 0x0000302d
  .word 0x0c0a08ac
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x3c02000f
  .word 0x3445ffff
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x14400017
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x0c0c2d78
  .word 0x00000000
  .word 0x14400012
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0200202d
  .word 0x24050010
  .word 0x24060004
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050004
  .word 0xa0450000
  .word 0xde230058
  .word 0xfc430008
  .word 0xa4450048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e100a34
  .word 0x1600ff50
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000071
  .word 0x00000000
  .word 0x0000a02d
  .word 0x0000982d
  .word 0x0000902d
  .word 0x3222ffff
  .word 0x0002a8c0
  .word 0x8f82b6fc
  .word 0x00551021
  .word 0x8c500150
  .word 0x10000019
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x10800015
  .word 0x00000000
  .word 0x2405024d
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x24140001
  .word 0x8e040a2c
  .word 0x2405024e
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x24130001
  .word 0x8e040a2c
  .word 0x2405024f
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x24120001
  .word 0x8e100a34
  .word 0x1600ffe7
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x00551021
  .word 0x8c500150
  .word 0x10000044
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x10800040
  .word 0x00000000
  .word 0x2405022d
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1440000a
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x240500b4
  .word 0x0c0c0268
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x16620006
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x24050005
  .word 0x24060001
  .word 0x0c0c08e0
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x2405022e
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1440000a
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x240500b5
  .word 0x0c0c0268
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x16820006
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x24050040
  .word 0x24060001
  .word 0x0c0c08e0
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x2405022f
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1440000a
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x240500b6
  .word 0x0c0c0268
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x16420006
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x24050110
  .word 0x24060001
  .word 0x0c0c08e0
  .word 0x00000000
  .word 0x8e030a2c
  .word 0x94620000
  .word 0x3042fbf7
  .word 0xa4620000
  .word 0x8e100a34
  .word 0x1600ffbc
  .word 0x00000000
  .word 0x26220001
  .word 0x3051ffff
  .word 0x3222ffff
  .word 0x28420002
  .word 0x1440ff8d
  .word 0x00000000
  .word 0x8f85b6fc
  .word 0x8ca20bbc
  .word 0x94430008
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021880
  .word 0x8f82b7b8
  .word 0x00432021
  .word 0x94830004
  .word 0x1060000b
  .word 0x00000000
  .word 0x94820006
  .word 0x18400008
  .word 0x00000000
  .word 0xa4a30be0
  .word 0x94830006
  .word 0x8f82b6fc
  .word 0xac430be4
  .word 0x24030001
  .word 0x8f82b6fc
  .word 0xac430bf8
  .word 0x0000202d
  .word 0x24050002
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420010
  .word 0x30420001
  .word 0x14400003
  .word 0x00000000
  .word 0x0c0bfcbc
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0aff1c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0aff14
  .word 0x00000000
  .word 0x24020005
  .word 0x10000002
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
#pragma pop
#pragma opt_loop_invariants reset

/* W389 measured: opt_lifetimes on + opt_propagation off with existing opt_loop_invariants on nd470->455, object 692/720 -> 672/720. */
#pragma push
#pragma opt_loop_invariants on
#pragma opt_lifetimes on
#pragma opt_propagation off
// FUN_0029be40
asm void btlMainInitStateUnitLoad(BtlStateWork* work)
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
  .word 0x24150001
  .word 0x0000902d
  .word 0x0000882d
  .word 0x0000182d
  .word 0x8f82b6fc
  .word 0x8c500158
  .word 0x0200202d
  .word 0x10000004
  .word 0x00000000
  .word 0x24620001
  .word 0x3043ffff
  .word 0x8c840a34
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x3062ffff
  .word 0x28420004
  .word 0x24560001
  .word 0x1000005f
  .word 0x00000000
  .word 0x0200202d
  .word 0x960500a4
  .word 0x2406003e
  .word 0x0c0a15a4
  .word 0x00000000
  .word 0x0040a02d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc520008
  .word 0x0280202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde920058
  .word 0x8f82b6fc
  .word 0x8c420010
  .word 0x30420001
  .word 0x14400036
  .word 0x00000000
  .word 0x8f84b804
  .word 0x0200282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040982d
  .word 0x24040004
  .word 0xa0440000
  .word 0xde830058
  .word 0xfc430008
  .word 0x24020001
  .word 0x16a20004
  .word 0x00000000
  .word 0xa6620048
  .word 0x10000008
  .word 0x00000000
  .word 0x24020005
  .word 0xa2620010
  .word 0xfe710018
  .word 0x12c00002
  .word 0x00000000
  .word 0x24040008
  .word 0xa6640048
  .word 0x0260202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde710058
  .word 0x0200202d
  .word 0x2405ffff
  .word 0x24060008
  .word 0x0000382d
  .word 0x24080003
  .word 0x24090001
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0x24030005
  .word 0xa0430010
  .word 0xfc510018
  .word 0x2403001d
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405ffff
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080003
  .word 0x24090001
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0x24030002
  .word 0xa4430048
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde310058
  .word 0x0000a82d
  .word 0x8e100a34
  .word 0x1600ffa1
  .word 0x00000000
  .word 0x0c0af1a0
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc520008
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c0aff00
  .word 0x00000000
  .word 0x0040802d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040141
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0x3044ffff
  .word 0x0c0b6ff8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
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
}
#pragma pop
#pragma opt_propagation reset
#pragma opt_lifetimes reset
#pragma opt_loop_invariants reset
// FUN_0029c110
u32 btlMainUpdateStateUnitLoad(BtlStateWork* work)
{
    BtlUnit* unit;
    u32 state;
    if ((gBtl->flags & 0x100000) != 0 && FUN_002ff320() != 1)
    {
        FUN_001fec50();
        gBtl->flags &= ~0x100000;
    }
    if (btlPacketCount() == 0 && (gBtl->flags & 0x100000) == 0)
    {
        if (FUN_001feec0() == 0)
        {
            btlPacketRegister(FUN_002db740(gBtl->actionList.head, 0, 0, 0, 0), BTLPACKET_TYPE_1);
        }
        for (unit = gBtl->unitLists[1].head; unit != ((void*)0); unit = unit->next)
        {
            if ((unit->flags3 & (1 << 3)) != 0)
            {
                FUN_00287490(unit);
            }
            else
            {
                FUN_00287510(unit);
            }
        }
        FUN_002faab0();
        state = BTL_STATE_START;
    }
    else
    {
        state = BTL_STATE_NULL;
    }
    return state;
}

// FUN_0029c250
void btlMainInitStateStart(BtlStateWork* work)
{
    if (gBtl->unk_10 & 1)
    {
        btlFadeStart(3);
        btl002facc0();
    }
}
// FUN_0029c290
u32 btlMainUpdateStateStart(BtlStateWork* work)
{
    u32 ret;

    if (FUN_001fecc0() == 0 && btlPacketCount() == 0 && FUN_002e42c0() == 0)
    {
        if (FUN_002e4290(gBtl->actionList.head) != 0)
        {
            ret = BTL_STATE_NULL;
        }
        else
        {
            FUN_0029b040();
            FUN_001fdd20();
            gBtl->flags |= 0x800;
            ret = BTL_STATE_ACTION;
        }
    }
    else
    {
        ret = BTL_STATE_NULL;
    }

    return ret;
}

// FUN_0029c330
void btlMainInitStateAction(BtlStateWork* work)
{
}
// FUN_0029c340
u32 btlMainUpdateStateAction(BtlStateWork* work)
{
    BtlUnit* unit;
    u16 aliveCount;
    u16 unitCount;
    BtlUnit* unit2;
    u16 battleMode;
    if ((gBtl->flags & 0x80) != 0)
    {
        FUN_0029b070();
        FUN_001ff390();
        FUN_001ff350();
        {
            battleMode = BTL_U16(0x1c);
            switch (battleMode)
            {
            case 1:
            case 3:
                if (battleMode != 3)
                {
                    if (FUN_002d4ed0(FUN_0029ad20()) == 1)
                    {
                        BTL_U32(0xbdc) |= 1;
                    }
                }
                else
                {
                    FUN_00521408((u8*)gBtl + 0xbdc, 0, 0x44);
                }
                unitCount = 0;
                aliveCount = 0;
                for (unit = gBtl->unitLists[0].tail; unit != NULL; unit = unit->prev)
                {
                    if (FUN_0030b5a0(unit->datUnit, 0) != 0)
                    {
                        unitCount++;
                    }
                    else
                    {
                        *(u16*)((u8*)gBtl + 0xc00 + aliveCount * sizeof(u16)) = *(u16*)((u8*)unit->datUnit + 2);
                        aliveCount++;
                        unitCount++;
                    }
                }
                BTL_U32(0xc08) = aliveCount;
                BTL_U32(0xc0c) = unitCount;
                BTL_U32(0xc1c) = *(u16*)((u8*)gBtl + 0xb9a);
                if ((s32)*(u16*)((u8*)gBtl + 0xb9a) > 0)
                {
                    BTL_U32(0xc14) = (u32)((s32)BTL_U32(0xc14) / (s32)*(u16*)((u8*)gBtl + 0xb9a));
                }
                BTL_U32(0xc18) = FUN_002d5550();
                for (unit2 = gBtl->unitLists[0].tail; unit2 != NULL; unit2 = unit2->prev)
                {
                    if (unit2->datUnit != NULL)
                    {
                        FUN_00300560(unit2->datUnit, 0xfff7ff7f);
                    }
                }
                BTL_U32(0xd28) = (u32)FUN_001f1ae0((u8*)gBtl + 0xbdc);
                battleMode = BTL_U16(0x1c);
                if (battleMode == 1)
                {
                    return (gBtl->unk_10 & 2) != 0 ? BTL_STATE_ENEMYDEAD : BTL_STATE_WIN;
                }
            case 2:
                if (battleMode == 2)
                {
                    return FUN_0027d560() != 0 ? BTL_STATE_REVIVALMES : BTL_STATE_LOSE;
                }
                return BTL_STATE_FADEOUT;
            }
        }
    }
    return BTL_STATE_NULL;
}
// FUN_0029c5d0
void btlMainInitStateRevivalMes(BtlStateWork* work)
{
    BtlPacket* packet;
    BtlAction* action;
    action = gBtl->actionList.head;
    FUN_003c72d0(DAT_006935c0);
    FUN_003c7430(1);
    FUN_003c7560(0);
    FUN_003c74e0(0);
    packet = btlFormation002b8d60(3, 0xfff);
    packet->actionUID = action->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_0);
    btlPacketRegister(FUN_002a3b40(((void*)0), 0x24), BTLPACKET_TYPE_0);
}
// FUN_0029c680
u32 btlMainUpdateStateRevivalMes(BtlStateWork* work)
{
    u32 ret;

    FUN_003c7b90();
    if (FUN_003c7850() == 0)
    {
        if (FUN_003c7610() == 0)
        {
            FUN_001ff3b0();
            ret = BTL_STATE_REVIVAL;
        }
        else
        {
            gBtl->flags &= ~0x800000;
            ret = BTL_STATE_ACTION;
        }
    }
    else
    {
        ret = BTL_STATE_NULL;
    }

    return ret;
}

// FUN_0029c700
asm void btlMainInitStateRevival(BtlStateWork* work)
{
  .set noreorder
  .word 0x27bdfec0
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82b6fc
  .word 0x8c500148
  .word 0x0000982d
  .word 0x0000202d
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0x0040902d
  .word 0x240401b7
  .word 0x27a50090
  .word 0x0c0aedbc
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50090
  .word 0x0000302d
  .word 0x0c0aeb00
  .word 0x00000000
  .word 0x0040882d
  .word 0xde030000
  .word 0xfc430060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x240401b7
  .word 0x0000282d
  .word 0x0c0b7528
  .word 0x00000000
  .word 0x0040b02d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde030000
  .word 0xfc430060
  .word 0x02c0202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x240401b7
  .word 0x27a5013c
  .word 0x27a60138
  .word 0x0c0a7a98
  .word 0x00000000
  .word 0x8fa4013c
  .word 0x8fa50138
  .word 0x24060010
  .word 0x0c0a7d2c
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x240401b7
  .word 0x0c0a7b00
  .word 0x00000000
  .word 0x0040882d
  .word 0x240401b7
  .word 0x27a5013c
  .word 0x27a60138
  .word 0x0c0a7b20
  .word 0x00000000
  .word 0x0220202d
  .word 0x8fa5013c
  .word 0x8fa60138
  .word 0x24070010
  .word 0x0000402d
  .word 0x0c0a8014
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x240401b7
  .word 0x0c0a7b14
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050010
  .word 0x0c0a84a0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e050030
  .word 0x0240202d
  .word 0x00a0302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdec30058
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
  .word 0x8f82b6fc
  .word 0x8c540150
  .word 0x100000ba
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a6874
  .word 0x00000000
  .word 0x0040a82d
  .word 0x27a40110
  .word 0x0c0b5770
  .word 0x00000000
  .word 0x8e840a2c
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3051ffff
  .word 0x8e840a2c
  .word 0x0c0c0040
  .word 0x00000000
  .word 0x3057ffff
  .word 0x8e840a2c
  .word 0x0c0bff5c
  .word 0x00000000
  .word 0x3043ffff
  .word 0x3222ffff
  .word 0x00431023
  .word 0xafa20110
  .word 0x8e840a2c
  .word 0x0c0bff60
  .word 0x00000000
  .word 0x3043ffff
  .word 0x32e2ffff
  .word 0x00431023
  .word 0xafa20114
  .word 0x8e840a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020008
  .word 0xafa2011c
  .word 0x0280202d
  .word 0x0c0af520
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x0280282d
  .word 0x0280302d
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040882d
  .word 0x24040004
  .word 0xa0440000
  .word 0xdec30058
  .word 0xfc430008
  .word 0xa0440010
  .word 0xfc530018
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
  .word 0x02a0202d
  .word 0x24050017
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040982d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x2403000b
  .word 0xa0430020
  .word 0xde230058
  .word 0xfc430028
  .word 0x24030012
  .word 0xa443004a
  .word 0xde030000
  .word 0xfc430060
  .word 0x0260202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde730058
  .word 0x8fa3011c
  .word 0x3c020008
  .word 0x00621024
  .word 0x10400017
  .word 0x00000000
  .word 0x8e82009c
  .word 0x30420200
  .word 0x10400013
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0280202d
  .word 0x24050013
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde030000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x02a0202d
  .word 0x02a0282d
  .word 0x27a60110
  .word 0x24070001
  .word 0x00e0402d
  .word 0x0c0b5f88
  .word 0x00000000
  .word 0x0040a82d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde030000
  .word 0xfc430060
  .word 0x02a0202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa20110
  .word 0x10400011
  .word 0x00000000
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0af48c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdea30058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x0280282d
  .word 0x2406ffff
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x240a0001
  .word 0x27ab0110
  .word 0x0c0af6f4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdea30058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e940a34
  .word 0x1680ff46
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0a7e94
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc530008
  .word 0xde030000
  .word 0xfc430060
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
  .word 0xfc530008
  .word 0xde030000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0a85b0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc530008
  .word 0xde030000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
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
  .word 0x27bd0140
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
// FUN_0029ccd0
u32 btlMainUpdateStateRevival(BtlStateWork* work)
{
    BtlAction* action;
    u16 revivalCount;
    action = gBtl->actionList.head;
    if (btlPacketFindFirstByActionUID(action->uid, 0x3FFFFFFFFFFFFFFF) == ((void*)0))
    {
        revivalCount = func_00170760((s16)action->unit->datUnit->id, 0xfc8);
        func_00170860((s16)action->unit->datUnit->id, 0xfc8, revivalCount - 1);
        FUN_002bfc50(0);
        FUN_0029b040();
        if (FUN_002fd7c0() == 1)
        {
            FUN_001ff370();
        }
        gBtl->flags &= ~0x80;
        btlPacketRegister(FUN_002a3b40(action, 0x1f), BTLPACKET_TYPE_0);
        return BTL_STATE_ACTION;
    }
    return BTL_STATE_NULL;
}
// FUN_0029cde0
void btlMainInitStateEnemyDead(BtlStateWork* work)
{
    FUN_002fb690();
    gBtl->flags |= 0x80000;
}
// FUN_0029ce20
u32 btlMainUpdateStateEnemyDead(BtlStateWork* work)
{
    u32 state;

    if (btlPacketCount() == 0)
    {
        gBtl->flags &= ~0x80000;
        state = (gBtl->flags & 0x80) != 0 ? BTL_STATE_FADEOUT : BTL_STATE_ACTION;
    }
    else
    {
        state = BTL_STATE_NULL;
    }

    return state;
}
// FUN_0029ce90
void btlMainInitStateWin(BtlStateWork* work)
{
    BtlAction* winner;
    BtlAction* action;
    BtlPacket* packet;

    winner = FUN_0029ad20();
    if ((winner->unk_18 & 4) != 0)
    {
        winner = FUN_0029ad50();
    }
    if (winner == NULL || winner->unit->genus == UNIT_GENUS_EC)
    {
        winner = gBtl->actionList.head;
    }

    work->winPacketFrame = 0x18;
    work->winAnimFrame = FUN_002838d0(1.0f, winner->unit, 0x14);
    work->winInputSeen = 0;
    work->winWaitFrames = winner == gBtl->actionList.head ? 0x30 : 0x18;

    for (action = gBtl->actionList.tail; action != NULL; action = action->prev)
    {
        if ((action->unk_1a & 1) != 0 && action->unit->genus == UNIT_GENUS_EC &&
            FUN_0030b5a0(action->unit->datUnit, 0) != 0)
        {
            packet = btlUnit00286320(action->unit);
            packet->actionUID = winner->uid;
            BTL_PACKET_U16(packet, 0x48) = work->winPacketFrame;
            btlPacketRegister(packet, BTLPACKET_TYPE_0);
        }
    }

    packet = FUN_002db740(winner, 0xf, 0, 0, 3);
    BTL_PACKET_U16(packet, 0x48) = work->winPacketFrame;
    packet->actionUID = winner->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_1);
    packet = FUN_002e2be0(winner, 7, 0, 0, 0);
    BTL_PACKET_U16(packet, 0x48) = work->winPacketFrame;
    packet->actionUID = winner->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_1);
    packet = FUN_00284200(1.0f, winner->unit, 0x14, 0, 2);
    BTL_PACKET_U16(packet, 0x48) = work->winPacketFrame;
    packet->actionUID = winner->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_0);
    packet = FUN_002a3b40(winner, 0x20);
    BTL_PACKET_U16(packet, 0x48) = work->winPacketFrame;
    packet->actionUID = winner->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_0);
}
// FUN_0029d0d0
u32 btlMainUpdateStateWin(BtlStateWork* work)
{
    BtlPacket* packet;

    if (work->stateTimer > work->winPacketFrame + work->winWaitFrames &&
        work->winInputSeen == 0)
    {
        if ((D_007E094C & 0x10) != 0)
        {
            goto win_input;
        }
        else if ((D_007E0956 & 0x10) != 0)
        {
            goto win_input;
        }
        else if ((D_007E094E & 0x40) != 0)
        {
            goto win_input;
        }
        else if ((D_007E0958 & 0x40) != 0)
        {
            goto win_input;
        }
        else
        {
            goto win_done;
        }
    }
    goto win_done;

win_input:
    packet = FUN_002db890();
    BTL_PACKET_U16(packet, 0x4a) = 0xc;
    btlPacketRegister(packet, BTLPACKET_TYPE_1);
    FUN_002ddbe0();
    work->winInputSeen = 1;

win_done:
    if (btlPacketCount() == 0 &&
        (work->winInputSeen != 0 ||
         work->stateTimer >= work->winPacketFrame + work->winAnimFrame))
    {
        return BTL_STATE_CONDITION;
    }
    return BTL_STATE_NULL;
}

// FUN_0029d1f0
asm void btlMainInitStateCondition(BtlStateWork* work)
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
  .word 0x0000882d
  .word 0xafa000a0
  .word 0x24040172
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440011b
  .word 0x00000000
  .word 0x0000902d
  .word 0x8f83b6fc
  .word 0x8c730150
  .word 0x10000027
  .word 0x00000000
  .word 0x8e620a2c
  .word 0x84420002
  .word 0x0040a02d
  .word 0x0280202d
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3056ffff
  .word 0x0c05f600
  .word 0x00000000
  .word 0x1440000f
  .word 0x00000000
  .word 0x32c3ffff
  .word 0x24020005
  .word 0x1062000b
  .word 0x00000000
  .word 0x24020004
  .word 0x10620008
  .word 0x00000000
  .word 0x24020003
  .word 0x10620005
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405ffff
  .word 0x0c05b2a4
  .word 0x00000000
  .word 0x8e640a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x14400007
  .word 0x00000000
  .word 0x32c4ffff
  .word 0x24030005
  .word 0x14830003
  .word 0x00000000
  .word 0x26430001
  .word 0x3072ffff
  .word 0x8e730a34
  .word 0x1660ffd9
  .word 0x00000000
  .word 0x3243ffff
  .word 0x1860000c
  .word 0x00000000
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x2841000a
  .word 0x10200006
  .word 0x00000000
  .word 0x3244ffff
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x24030001
  .word 0xafa300a0
  .word 0x8f83b6fc
  .word 0x8c730150
  .word 0x1000006b
  .word 0x00000000
  .word 0x8e620a2c
  .word 0x94560002
  .word 0x0016a43c
  .word 0x0014a43f
  .word 0x0280202d
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3050ffff
  .word 0x8e640a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x1440005c
  .word 0x00000000
  .word 0x3212ffff
  .word 0x2e410006
  .word 0x1020004e
  .word 0x00000000
  .word 0x3c04007b
  .word 0x24847c30
  .word 0x00121880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c05b27c
  .word 0x00000000
  .word 0x3043ffff
  .word 0x14600002
  .word 0x00000000
  .word 0x64100003
  .word 0x8fa300a0
  .word 0x1060003d
  .word 0x00000000
  .word 0x24030003
  .word 0x12430014
  .word 0x00000000
  .word 0x24030002
  .word 0x1243000e
  .word 0x00000000
  .word 0x24030001
  .word 0x12430008
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x64030019
  .word 0x1000000b
  .word 0x00000000
  .word 0x6403000a
  .word 0x10000008
  .word 0x00000000
  .word 0x64030005
  .word 0x10000005
  .word 0x00000000
  .word 0x6403003c
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x307effff
  .word 0x1bc00020
  .word 0x00000000
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x005e082a
  .word 0x1020001a
  .word 0x00000000
  .word 0x32c4ffff
  .word 0x24030003
  .word 0x10830016
  .word 0x00000000
  .word 0x64100005
  .word 0x10000013
  .word 0x00000000
  .word 0x641e000a
  .word 0x0c05ec5c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x03c21021
  .word 0x305effff
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x33c3ffff
  .word 0x0043082a
  .word 0x10200006
  .word 0x00000000
  .word 0x32c4ffff
  .word 0x24030003
  .word 0x10830002
  .word 0x00000000
  .word 0x64100005
  .word 0x3203ffff
  .word 0x10720008
  .word 0x00000000
  .word 0x0260882d
  .word 0x0280202d
  .word 0x0200282d
  .word 0x0c05b5ac
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x8e730a34
  .word 0x1660ff95
  .word 0x00000000
  .word 0x1220006e
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a6874
  .word 0x00000000
  .word 0x0040982d
  .word 0x0260202d
  .word 0x24050021
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040902d
  .word 0xde630000
  .word 0xfc430060
  .word 0x24030008
  .word 0xa4430048
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040008
  .word 0x0c0af1f8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0220202d
  .word 0x24050003
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000e
  .word 0x24050002
  .word 0x24060009
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3202ffff
  .word 0x2c410006
  .word 0x10200012
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637c10
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24150012
  .word 0x24170013
  .word 0x10000007
  .word 0x00000000
  .word 0x24150010
  .word 0x24170012
  .word 0x10000003
  .word 0x00000000
  .word 0x24150010
  .word 0x24170012
  .word 0x32e5ffff
  .word 0x0260202d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040802d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x32a5ffff
  .word 0x0260202d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0c0b6dd0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
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
// FUN_0029d6e0
u32 btlMainUpdateStateCondition(BtlStateWork* work)
{
    if (btlPacketCount() != 0)
    {
        goto returnNull;
    }

    return BTL_STATE_FADEOUT;

returnNull:
    return BTL_STATE_NULL;
}

// FUN_0029d720
void btlMainInitStateLose(BtlStateWork* work)
{
}
// FUN_0029d730
u32 btlMainUpdateStateLose(BtlStateWork* work)
{
    if (work->stateTimer > 30)
    {
        return BTL_STATE_FADEOUT;
    }

    return BTL_STATE_NULL;
}

// FUN_0029d760
void btlMainInitStateFadeOut(BtlStateWork* work)
{
    gBtl->flags &= ~0x800;

    if (*(u16*)((u8*)gBtl + 0x1c) != 2)
    {
        if (gBtl->flags & 0x400)
        {
            FUN_001f1b20(*(void**)((u8*)gBtl + 0xd28));
        }
    }
    else
    {
        H_Fade_FadeOut();
        H_Fade_SetType(HFADE_CUSTOM);
        H_Fade_SetCustomColor(0, 0, 0);
        H_Fade_SetDuration(30);
    }
}
// FUN_0029d800
u32 btlMainUpdateStateFadeOut(BtlStateWork* work)
{
    if (*(u16*)((u8*)gBtl + 0x1c) != 2)
    {
        if (FUN_001f1b40(*(void**)((u8*)gBtl + 0xd28)) == 0)
        {
            return BTL_STATE_END;
        }
    }
    else if (H_Fade_IsFadeOutDone() == 1)
    {
        return BTL_STATE_END;
    }

    return BTL_STATE_NULL;
}

// FUN_0029d870
void btlMainInitStateEnd(BtlStateWork* work)
{
    BtlUnit* unit;
    BtlAction* action;
    DatUnit* data;
    u16 value;
    u16 index;
    u32 flags;

    if (BTL_U16(0x1c) == 1)
    {
        for (unit = gBtl->unitLists[0].head; unit != NULL; unit = unit->next)
        {
            if (unit->datUnit == NULL)
            {
                continue;
            }
            if (FUN_003005e0(unit->datUnit, 0x25e) != 0)
            {
                FUN_002ffd90(unit->datUnit, FUN_002ffdf0(unit->datUnit));
                FUN_002ffdc0(unit->datUnit, FUN_00300100(unit->datUnit));
            }
            else if (FUN_003005e0(unit->datUnit, 0x25d) != 0)
            {
                value = FUN_002ffdf0(unit->datUnit);
                FUN_00300410(unit->datUnit, value * 100 / 0x4e2);
                value = FUN_00300100(unit->datUnit);
                FUN_00300480(unit->datUnit, value * 100 / 0x4e2);
            }
        }
    }

    FUN_002a4c50();
    FUN_002bf650();
    flags = BTL_U32(0xc20);
    if (flags != 0)
    {
        value = BTL_U16(0x1c);
        if (value == 1)
        {
            if ((flags & 1) != 0)
            {
                FUN_0016f1f0(0x1001, 1);
            }
            if ((BTL_U32(0xc20) & 2) != 0)
            {
                FUN_0016f1f0(0x1002, 1);
            }
            if ((BTL_U32(0xc20) & 4) != 0)
            {
                FUN_0016f1f0(0x1003, 1);
            }
            if ((BTL_U32(0xc20) & 8) != 0)
            {
                FUN_0016f1f0(0x1004, 1);
            }
        }
    }

    for (unit = gBtl->unitLists[0].head; unit != NULL; unit = unit->next)
    {
        if (unit->datUnit != NULL)
        {
            FUN_00301690((u32)unit->datUnit);
        }
    }

    index = 1;
    while (index <= 10)
    {
        data = (DatUnit*)FUN_0016cd60(index);
        switch (data->aiTactic)
        {
        case 7:
        case 10:
            data->aiTactic = 1;
            break;
        default:
            if (FUN_0016f190(0x187) == 0)
            {
                data->aiTactic = 1;
            }
            break;
        }
        index++;
    }

    for (action = gBtl->actionList.tail; action != NULL; action = action->prev)
    {
        u16 state = action->currState;
        if (state != BTLACTION_STATE_EXIT)
        {
            FUN_00299d60(action, BTLACTION_STATE_EXIT);
        }
    }
    btlPacket0027e4d0();
}

// FUN_0029db60
u32 btlMainUpdateStateEnd(BtlStateWork* work)
{
    if (gBtl->actionList.tail != ((void*)0))
    {
        return BTL_STATE_NULL;
    }
    FUN_0029e3c0();
    kwlnTaskDestroyWithHierarchy(gBtl->btlPanelTask);
    FUN_002bfc50(1);
    if ((gBtl->flags & 0x400) && *(u16*)((u8*)gBtl + 0x1c) != 2)
    {
        return BTL_STATE_RESULT;
    }
    return BTL_STATE_EXIT;
}

// FUN_0029dbf0
void btlMainInitStateResult(BtlStateWork* work)
{
    FUN_001f1b60(*(void**)((u8*)gBtl + 0xd28));
}
// FUN_0029dc20
u32 btlMainUpdateStateResult(BtlStateWork* work)
{
    if (!(gBtl->flags & (1 << 27)) && FUN_001f1f40() == 1)
    {
        K_Fldrc_RequestArchives();
        gBtl->flags |= (1 << 27);
    }
    if (FUN_001f1b00(*(void**)((u8*)gBtl + 0xd28)) != 0)
    {
        return BTL_STATE_NULL;
    }
    FUN_001f1c20(*(void**)((u8*)gBtl + 0xd28));
    *(void**)((u8*)gBtl + 0xd28) = ((void*)0);
    if (gBtl->hasNoStartInfo == 1 && (gBtl->flags & 0x400))
    {
        H_Fade_FadeIn();
    }
    return BTL_STATE_EXIT;
}

// FUN_0029dcf0
void btlMainInitStateExit(BtlStateWork* work)
{
    btlPacket0027e4d0();
    if (!(gBtl->flags & (1 << 27)))
    {
        K_Fldrc_RequestArchives();
        gBtl->flags |= (1 << 27);
    }
}
// FUN_0029dd50
u32 btlMainUpdateStateExit(BtlStateWork* work)
{
    if (btlPacketCount() == 0 && FUN_002dba60() == 0)
    {
        FUN_002dcf10();
        gBtl->flags &= ~(1 << 0);
    }
    return BTL_STATE_NULL;
}

// FUN_0029ddb0
void btlMainInitStateTest(BtlStateWork* work)
{
}
// FUN_0029ddc0
u32 btlMainUpdateStateTest(BtlStateWork* work)
{
    scrClearTextBox(0, 0, 3, 0);
    btlFadeCreateTask(0);

    return BTL_STATE_INIT;
}

// FUN_0029de00
void btlMainInitStateMc(BtlStateWork* work)
{
}
// FUN_0029de10
u32 btlMainUpdateStateMc(BtlStateWork* work)
{
    return BTL_STATE_NULL;
}

// FUN_0029de20
void btlMainSetState(u32 state)
{
    gBtl->stateWork.currState = state;
    gBtl->stateWork.stateTimer = 0;
    
    sBtlStateTable[gBtl->stateWork.currState].init(&gBtl->stateWork);
}

// FUN_0029de80
void btlMainUpdateState()
{
    u32 newState;

    if (gBtl->stateWork.stateToSet != BTL_STATE_NULL)
    {
        gBtl->stateWork.currState = gBtl->stateWork.stateToSet;
        gBtl->stateWork.stateTimer = 0;
        sBtlStateTable[gBtl->stateWork.currState].init(&gBtl->stateWork);

        gBtl->stateWork.stateToSet = BTL_STATE_NULL;
    }

    newState = sBtlStateTable[gBtl->stateWork.currState].update(&gBtl->stateWork);

    if (newState != BTL_STATE_NULL)
    {
        gBtl->stateWork.stateToSet = newState;
    }

    gBtl->stateWork.stateTimer++;
}

// FUN_0029df40. Called when 'btlCtx' is allocated
void btlMainSetStateNon()
{
    gBtl->stateWork.currState = BTL_STATE_NON;
    gBtl->stateWork.stateTimer = 0;
    sBtlStateTable[gBtl->stateWork.currState].init(&gBtl->stateWork);

    gBtl->stateWork.stateToSet = BTL_STATE_NULL;
}

// FUN_0029dfb0
void btlMain0029dfb0(void)
{
}
// FUN_0029dfc0
void FUN_0029dfc0(void)
{
    RwRGBAReal* color;
    RwMatrix* matrix;

    color = K_Scene_GetFldAmbLightColor();
    *(RwRGBAReal*)((u8*)gBtl + 0x194) = *color;
    color = func_0019fd70();
    *(RwRGBAReal*)((u8*)gBtl + 0x1a4) = *color;
    matrix = func_0019fda0();
    RtQuatConvertFromMatrix((RtQuat*)((u8*)gBtl + 0x1b4), matrix);

    *(f32*)((u8*)gBtl + 0x224) = fGpffff8218 * (f32)DAT_007ce4f8[0];
    *(f32*)((u8*)gBtl + 0x228) = fGpffff8218 * (f32)DAT_007ce4f8[1];
    *(f32*)((u8*)gBtl + 0x22c) = fGpffff8218 * (f32)DAT_007ce4f8[2];
    *(f32*)((u8*)gBtl + 0x230) = fGpffff8218 * (f32)DAT_007ce4f8[3];

    color = func_001a09d0();
    *(RwRGBAReal*)((u8*)gBtl + 0x1c4) = *color;
    color = K_Scene_GetCharAmbLightColor();
    *(RwRGBAReal*)((u8*)gBtl + 0x1d4) = *color;
    matrix = func_001a0a50();
    RtQuatConvertFromMatrix((RtQuat*)((u8*)gBtl + 0x1e4), matrix);
    memcpy((u8*)gBtl + 0x1f4, (u8*)gBtl + 0x1c4, 0x30);

    *(f32*)((u8*)gBtl + 0x234) = fGpffff8218 * (f32)DAT_007ce4f8[0];
    *(f32*)((u8*)gBtl + 0x238) = fGpffff8218 * (f32)DAT_007ce4f8[1];
    *(f32*)((u8*)gBtl + 0x23c) = fGpffff8218 * (f32)DAT_007ce4f8[2];
    *(f32*)((u8*)gBtl + 0x240) = fGpffff8218 * (f32)DAT_007ce4f8[3];
    FUN_004c9d70(35.0f, FUN_00198590());
    gBtl->flags |= 0x2000002;
}


// FUN_0029e370
void btlMain0029e370(void)
{
    FUN_003b5ab0();
}

// FUN_0029e390
void btlMainLoadScene()
{
    MT_Scene_Load(gBtl->fldMajorId, gBtl->fldMinorId);
}
// FUN_0029e3c0
void FUN_0029e3c0(void)
{
    gBtl->flags &= ~2;
    FUN_003b5ab0();
}

// FUN_0029e400
u32 btlMainTryLoadFinishScene()
{
    return MT_Scene_TryLoadFinish();
}
// FUN_0029e420
void btlMain0029e420(void)
{
    Battle* battle;
    RwRGBAReal* color;
    battle = gBtl;
    if ((battle->flags & 2) != 0)
    {
        color = func_001a09d0();
        *color = *(RwRGBAReal*)((u8*)battle + 0x1c4);
        battle = gBtl;
        color = K_Scene_GetCharAmbLightColor();
        *color = *(RwRGBAReal*)((u8*)battle + 0x1d4);
    }
}

// FUN_0029e4b0
void btlMainDrawColorOverlay(void)
{
    RwSky2DVertex vertices[5];
    u32 red;
    u32 green;
    u32 blue;
    u32 alpha;

    if (*(f32*)((u8*)gBtl + 0x240) <= 0.0f)
    {
        return;
    }

    RpSkyRenderStateSet(2, (void*)0x48);
    RpSkyRenderStateSet(3, (void*)0x71801);
    {
        void (**setRenderState)(u32 state, u32 value) =
            (void (**)(u32 state, u32 value))DAT_00960090_abs;
        (*setRenderState)(0xc, 1);
        (*setRenderState)(0xe, 0);
        (*setRenderState)(1, 0);
        (*setRenderState)(6, 0);
        (*setRenderState)(8, 0);
        (*setRenderState)(7, 2);
    }

    red = ((s32)(*(f32*)((u8*)gBtl + 0x234) * 255.0f + 0.5f)) & 0xff;
    green = ((s32)(*(f32*)((u8*)gBtl + 0x238) * 255.0f + 0.5f)) & 0xff;
    blue = ((s32)(*(f32*)((u8*)gBtl + 0x23c) * 255.0f + 0.5f)) & 0xff;
    alpha = ((s32)(*(f32*)((u8*)gBtl + 0x240) * 255.0f + 0.5f)) & 0xff;

    vertices[0].u.els.scrVertex.x = 0.0f;
    vertices[0].u.els.scrVertex.y = 0.0f;
    vertices[1].u.els.scrVertex.x = 0.0f;
    vertices[1].u.els.scrVertex.y = 448.0f;
    vertices[2].u.els.scrVertex.x = 640.0f;
    vertices[2].u.els.scrVertex.y = 0.0f;
    vertices[3].u.els.scrVertex.x = 640.0f;
    vertices[3].u.els.scrVertex.y = 448.0f;
    vertices[0].u.els.color.r = (f32)red;
    vertices[0].u.els.color.g = (f32)green;
    vertices[0].u.els.color.b = (f32)blue;
    vertices[0].u.els.color.a = (f32)alpha;
    vertices[1].u.els.color.r = (f32)red;
    vertices[1].u.els.color.g = (f32)green;
    vertices[1].u.els.color.b = (f32)blue;
    vertices[1].u.els.color.a = (f32)alpha;
    vertices[2].u.els.color.r = (f32)red;
    vertices[2].u.els.color.g = (f32)green;
    vertices[2].u.els.color.b = (f32)blue;
    vertices[2].u.els.color.a = (f32)alpha;
    vertices[3].u.els.color.r = (f32)red;
    vertices[3].u.els.color.g = (f32)green;
    vertices[3].u.els.color.b = (f32)blue;
    vertices[3].u.els.color.a = (f32)alpha;

    (*DAT_009600A0_abs)(4, vertices, 4);
}
// FUN_0029ea20
void* FUN_0029ea20(void)
{
    return (u8*)gBtl + 0x194;
}

// FUN_0029ea30
void* FUN_0029ea30(void)
{
    return (u8*)gBtl + 0x1c4;
}

// FUN_0029ea40
void* FUN_0029ea40(void)
{
    return (u8*)gBtl + 0x1f4;
}

// FUN_0029ea50
void* FUN_0029ea50(void)
{
    return (u8*)gBtl + 0x224;
}

// FUN_0029ea60
void FUN_0029ea60(u32 index, u32* colorA, u32* colorB)
{
    u32 offset;
    u8* entry;
    u32 value;
    u8 rgba[4];

    offset = (index & 0xffff) * 0x1c;
    entry = iGpffffb710 + 8;
    entry += offset;
    value = *(u32*)entry;
    if ((value & 0xff000000) != 0)
    {
        *colorA = value;
    }
    else
    {
        rgba[0] = (u8)(s32)(*(f32*)((u8*)gBtl + 0x194) * 255.0f + 0.5f);
        rgba[1] = (u8)(s32)(*(f32*)((u8*)gBtl + 0x198) * 255.0f + 0.5f);
        rgba[2] = (u8)(s32)(*(f32*)((u8*)gBtl + 0x19c) * 255.0f + 0.5f);
        rgba[3] = (u8)(s32)(*(f32*)((u8*)gBtl + 0x1a0) * 255.0f + 0.5f);
        *colorA = *(u32*)rgba;
    }

    entry = iGpffffb710 + 0xc;
    entry += offset;
    value = *(u32*)entry;
    if ((value & 0xff000000) != 0)
    {
        *colorB = value;
    }
    else
    {
        rgba[0] = (u8)(s32)(*(f32*)((u8*)gBtl + 0x1a4) * 255.0f + 0.5f);
        rgba[1] = (u8)(s32)(*(f32*)((u8*)gBtl + 0x1a8) * 255.0f + 0.5f);
        rgba[2] = (u8)(s32)(*(f32*)((u8*)gBtl + 0x1ac) * 255.0f + 0.5f);
        rgba[3] = (u8)(s32)(*(f32*)((u8*)gBtl + 0x1b0) * 255.0f + 0.5f);
        *colorB = *(u32*)rgba;
    }
}

// FUN_0029ec00
s32 FUN_0029ec00(s32 index)
{
    u32 offset;
    u8* entry;
    s32 value;
    offset = (index & 0xffff) * 0x1c;
    entry = (u8*)((uintptr_t)(iGpffffb710 + 4) + (uintptr_t)offset);
    value = *(s32*)entry;
    if ((value & 0xff000000) != 0)
    {
        value = (value & 0xffffff) | 0xff000000;
    }
    else
    {
        value = 0xffffffff;
    }
    return value;
}

// FUN_0029ec50
s32 FUN_0029ec50(s32 index)
{
    u8* entry;
    entry = (u8 *)(uintptr_t)iGpffffb710;
    entry = (u8 *)(uintptr_t)((index & 0xffff) * 0x1c) + (uintptr_t)entry;
    return *(s32 *)(entry + 0x18);
}

// FUN_0029ec80
void FUN_0029ec80(u32 index, u32* colorA, u32* colorB)
{
    u32 offset;
    u8* entry;
    u32 value;
    u8 rgba[4];

    offset = (index & 0xffff) * 0x1c;
    entry = iGpffffb710 + 0x10;
    entry += offset;
    value = *(u32*)entry;
    if ((value & 0xff000000) != 0)
    {
        *colorA = value;
    }
    else
    {
        rgba[0] = (u8)(s32)(*(f32*)((u8*)gBtl + 0x1f4) * 255.0f + 0.5f);
        rgba[1] = (u8)(s32)(*(f32*)((u8*)gBtl + 0x1f8) * 255.0f + 0.5f);
        rgba[2] = (u8)(s32)(*(f32*)((u8*)gBtl + 0x1fc) * 255.0f + 0.5f);
        rgba[3] = (u8)(s32)(*(f32*)((u8*)gBtl + 0x200) * 255.0f + 0.5f);
        *colorA = *(u32*)rgba;
    }

    entry = iGpffffb710 + 0x14;
    entry += offset;
    value = *(u32*)entry;
    if ((value & 0xff000000) != 0)
    {
        *colorB = value;
    }
    else
    {
        rgba[0] = (u8)(s32)(*(f32*)((u8*)gBtl + 0x204) * 255.0f + 0.5f);
        rgba[1] = (u8)(s32)(*(f32*)((u8*)gBtl + 0x208) * 255.0f + 0.5f);
        rgba[2] = (u8)(s32)(*(f32*)((u8*)gBtl + 0x20c) * 255.0f + 0.5f);
        rgba[3] = (u8)(s32)(*(f32*)((u8*)gBtl + 0x210) * 255.0f + 0.5f);
        *colorB = *(u32*)rgba;
    }
}

/* Recovered battle-misc harvest: 0x0029EE20-0x002A3160 */
// FUN_0029EE20






asm void FUN_0029ee20(u32 param_1)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8f83b6fc
  .word 0x8c63000c
  .word 0x30630002
  .word 0x106000be
  .word 0x00000000
  .word 0x960309f2
  .word 0x106000bb
  .word 0x00000000
  .word 0x920400a2
  .word 0x24030002
  .word 0x10830082
  .word 0x00000000
  .word 0x24030001
  .word 0x10830005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x100000b0
  .word 0x00000000
  .word 0xc6020054
  .word 0xc6010058
  .word 0xc600005c
  .word 0xe7a20070
  .word 0xe7a10074
  .word 0xe7a00078
  .word 0x0200202d
  .word 0x27a50060
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc7a30064
  .word 0x3c0240a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46030040
  .word 0xc7a00074
  .word 0x46000834
  .word 0x45010002
  .word 0x00000000
  .word 0xe7a10074
  .word 0xc7a20070
  .word 0xc7a10074
  .word 0xc7a00078
  .word 0xe7a20050
  .word 0xe7a10054
  .word 0xe7a00058
  .word 0xc7a10060
  .word 0xc7a00070
  .word 0x46000801
  .word 0xe7a000a0
  .word 0xc7a00074
  .word 0x46001801
  .word 0xe7a000a4
  .word 0xc7a10068
  .word 0xc7a00078
  .word 0x46000801
  .word 0xe7a000a8
  .word 0x27a400a0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a200a0
  .word 0xc7a100a4
  .word 0xc7a000a8
  .word 0xe7a20040
  .word 0xe7a10044
  .word 0xe7a00048
  .word 0xc7a600a4
  .word 0x3c020069
  .word 0xc4457888
  .word 0xc7a400a8
  .word 0x3c020069
  .word 0xc4437884
  .word 0x4604181a
  .word 0x4606281d
  .word 0xe7a00090
  .word 0x3c020069
  .word 0xc4427880
  .word 0xc7a100a0
  .word 0x4601281a
  .word 0x4604101d
  .word 0xe7a00094
  .word 0x4606101a
  .word 0x4601181d
  .word 0xe7a00098
  .word 0x27a40090
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xdfa20090
  .word 0xc7a00098
  .word 0xffa20020
  .word 0xe7a00028
  .word 0xc7a60094
  .word 0xc7a500a8
  .word 0xc7a40098
  .word 0xc7a300a4
  .word 0x4604181a
  .word 0x4606281d
  .word 0xe7a00080
  .word 0xc7a200a0
  .word 0xc7a10090
  .word 0x4601281a
  .word 0x4604101d
  .word 0xe7a00084
  .word 0x4606101a
  .word 0x4601181d
  .word 0xe7a00088
  .word 0xc7a20080
  .word 0xc7a10084
  .word 0xc7a00088
  .word 0xe7a20030
  .word 0xe7a10034
  .word 0xe7a00038
  .word 0x960409f2
  .word 0x0c0681fc
  .word 0x00000000
  .word 0xc6030070
  .word 0xc6020074
  .word 0xc6010078
  .word 0xc600007c
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x960409f2
  .word 0x0c068238
  .word 0x00000000
  .word 0x27a70020
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
  .word 0x10000036
  .word 0x00000000
  .word 0x3c02c2b4
  .word 0x44826000
  .word 0x27a40020
  .word 0x3c050069
  .word 0x24a57870
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x960409f2
  .word 0x0c0681c0
  .word 0x00000000
  .word 0x3c030069
  .word 0xc4633850
  .word 0x3c030069
  .word 0xc4623854
  .word 0x3c030069
  .word 0xc4613858
  .word 0x3c030069
  .word 0xc460385c
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x960409f2
  .word 0x0c0681fc
  .word 0x00000000
  .word 0x3c030069
  .word 0xc4633860
  .word 0x3c030069
  .word 0xc4623864
  .word 0x3c030069
  .word 0xc4613868
  .word 0x3c030069
  .word 0xc460386c
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x960409f2
  .word 0x0c068238
  .word 0x00000000
  .word 0x27a70020
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
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_0029F150


asm u32 FUN_0029f150(float *param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080802d
  .word 0x8f82b6fc
  .word 0x8c43000c
  .word 0x30620002
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x100000c3
  .word 0x00000000
  .word 0x3c020200
  .word 0x00621024
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x100000bc
  .word 0x00000000
  .word 0x8e020064
  .word 0x14400035
  .word 0x00000000
  .word 0x0c067f50
  .word 0x00000000
  .word 0xc4430000
  .word 0xc4420004
  .word 0xc4410008
  .word 0xc440000c
  .word 0xe6030040
  .word 0xe6020044
  .word 0xe6010048
  .word 0xe600004c
  .word 0x0c067f5c
  .word 0x00000000
  .word 0xc4430000
  .word 0xc4420004
  .word 0xc4410008
  .word 0xc440000c
  .word 0xe6030050
  .word 0xe6020054
  .word 0xe6010058
  .word 0xe600005c
  .word 0xc6010040
  .word 0xc6000000
  .word 0x46000802
  .word 0xe6000020
  .word 0xc6010044
  .word 0xc6000004
  .word 0x46000802
  .word 0xe6000024
  .word 0xc6010048
  .word 0xc6000008
  .word 0x46000802
  .word 0xe6000028
  .word 0xc601004c
  .word 0xc600000c
  .word 0x46000802
  .word 0xe600002c
  .word 0xc6010050
  .word 0xc6000010
  .word 0x46000802
  .word 0xe6000030
  .word 0xc6010054
  .word 0xc6000014
  .word 0x46000802
  .word 0xe6000034
  .word 0xc6010058
  .word 0xc6000018
  .word 0x46000802
  .word 0xe6000038
  .word 0xc601005c
  .word 0xc600001c
  .word 0x46000802
  .word 0xe600003c
  .word 0x8e040060
  .word 0x8e020064
  .word 0x0044082b
  .word 0x10200065
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
  .word 0x00000000
  .word 0x00000000
  .word 0x46000d43
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46150501
  .word 0xc6000040
  .word 0x461401c2
  .word 0xc6000044
  .word 0x46140182
  .word 0xc6000048
  .word 0x46140142
  .word 0xc600004c
  .word 0x4614001a
  .word 0xc6000020
  .word 0x46150102
  .word 0xc6000024
  .word 0x461500c2
  .word 0xc6000028
  .word 0x46150082
  .word 0xc601002c
  .word 0x46043800
  .word 0xe7a00030
  .word 0x46033000
  .word 0xe7a00034
  .word 0x46022800
  .word 0xe7a00038
  .word 0x4615081c
  .word 0xe7a0003c
  .word 0x0c067f50
  .word 0x00000000
  .word 0xc7a30030
  .word 0xc7a20034
  .word 0xc7a10038
  .word 0xc7a0003c
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0xc6010050
  .word 0xc6000030
  .word 0x4615001a
  .word 0x4614081c
  .word 0xe7a00030
  .word 0xc6010054
  .word 0xc6000034
  .word 0x4615001a
  .word 0x4614081c
  .word 0xe7a00034
  .word 0xc6010058
  .word 0xc6000038
  .word 0x4615001a
  .word 0x4614081c
  .word 0xe7a00038
  .word 0xc601005c
  .word 0xc600003c
  .word 0x4615001a
  .word 0x4614081c
  .word 0xe7a0003c
  .word 0x0c067f5c
  .word 0x00000000
  .word 0xc7a30030
  .word 0xc7a20034
  .word 0xc7a10038
  .word 0xc7a0003c
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x10000018
  .word 0x00000000
  .word 0x0c067f50
  .word 0x00000000
  .word 0xc6030020
  .word 0xc6020024
  .word 0xc6010028
  .word 0xc600002c
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x0c067f5c
  .word 0x00000000
  .word 0xc6030030
  .word 0xc6020034
  .word 0xc6010038
  .word 0xc600003c
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x24020001
  .word 0x10000005
  .word 0x00000000
  .word 0x8e020064
  .word 0x24420001
  .word 0xae020064
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_0029F4B0
BtlPacket* FUN_0029f4b0(u32 param_1,u32 param_2,u32 param_3)
{
    float *color;
    int packet;
    union { u32 value; u8 bytes[4]; } packed;

    packet = FUN_0027ec10(0x600, 0x68);
    *(code **)(packet + 0x6c) = (code *)FUN_0029f150;
    color = *(float **)(packet + 0x78);
    packed.value = param_1;
    color[0] = DAT_007caf08 * (float)packed.bytes[0];
    color[1] = DAT_007caf08 * (float)packed.bytes[1];
    color[2] = DAT_007caf08 * (float)packed.bytes[2];
    color[3] = DAT_007caf08 * (float)packed.bytes[3];
    packed.value = param_2;
    color[4] = DAT_007caf08 * (float)packed.bytes[0];
    color[5] = DAT_007caf08 * (float)packed.bytes[1];
    color[6] = DAT_007caf08 * (float)packed.bytes[2];
    color[7] = DAT_007caf08 * (float)packed.bytes[3];
    *(u32*)((u8*)color + 0x60) = param_3;
    return (BtlPacket*)packet;
}

/* W389 measured: opt_lifetimes on nd852->804, object 1408/1456 -> 1408/1456. */
// FUN_0029F760


asm u32 FUN_0029f760(float *param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080802d
  .word 0x8f82b6fc
  .word 0x8c43000c
  .word 0x30620002
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x100000a7
  .word 0x00000000
  .word 0x3c020200
  .word 0x00621024
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x100000a0
  .word 0x00000000
  .word 0x8e020024
  .word 0x14400015
  .word 0x00000000
  .word 0x0c067f50
  .word 0x00000000
  .word 0xc4430000
  .word 0xc4420004
  .word 0xc4410008
  .word 0xc440000c
  .word 0xe6030000
  .word 0xe6020004
  .word 0xe6010008
  .word 0xe600000c
  .word 0x0c067f5c
  .word 0x00000000
  .word 0xc4430000
  .word 0xc4420004
  .word 0xc4410008
  .word 0xc440000c
  .word 0xe6030010
  .word 0xe6020014
  .word 0xe6010018
  .word 0xe600001c
  .word 0x8e040020
  .word 0x8e020024
  .word 0x0044082b
  .word 0x10200067
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
  .word 0x00000000
  .word 0x00000000
  .word 0x46000d43
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46150501
  .word 0xc6000000
  .word 0x461401c2
  .word 0xc6000004
  .word 0x46140182
  .word 0xc6000008
  .word 0x46140142
  .word 0xc600000c
  .word 0x4614001a
  .word 0x8f82b6fc
  .word 0xc4400194
  .word 0x46150102
  .word 0xc4400198
  .word 0x461500c2
  .word 0xc440019c
  .word 0x46150082
  .word 0xc44101a0
  .word 0x46043800
  .word 0xe7a00030
  .word 0x46033000
  .word 0xe7a00034
  .word 0x46022800
  .word 0xe7a00038
  .word 0x4615081c
  .word 0xe7a0003c
  .word 0x0c067f50
  .word 0x00000000
  .word 0xc7a30030
  .word 0xc7a20034
  .word 0xc7a10038
  .word 0xc7a0003c
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x8f82b6fc
  .word 0xc6010010
  .word 0xc44001a4
  .word 0x4615001a
  .word 0x4614081c
  .word 0xe7a00030
  .word 0xc6010014
  .word 0xc44001a8
  .word 0x4615001a
  .word 0x4614081c
  .word 0xe7a00034
  .word 0xc6010018
  .word 0xc44001ac
  .word 0x4615001a
  .word 0x4614081c
  .word 0xe7a00038
  .word 0xc601001c
  .word 0xc44001b0
  .word 0x4615001a
  .word 0x4614081c
  .word 0xe7a0003c
  .word 0x0c067f5c
  .word 0x00000000
  .word 0xc7a30030
  .word 0xc7a20034
  .word 0xc7a10038
  .word 0xc7a0003c
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x1000001a
  .word 0x00000000
  .word 0x8f90b6fc
  .word 0x0c067f50
  .word 0x00000000
  .word 0xc6030194
  .word 0xc6020198
  .word 0xc601019c
  .word 0xc60001a0
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x8f90b6fc
  .word 0x0c067f5c
  .word 0x00000000
  .word 0xc60301a4
  .word 0xc60201a8
  .word 0xc60101ac
  .word 0xc60001b0
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x24020001
  .word 0x10000005
  .word 0x00000000
  .word 0x8e020024
  .word 0x24420001
  .word 0xae020024
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
/* W389 measured: opt_loop_invariants on + opt_propagation off with existing opt_common_subs on nd2367->2325, object 3088/3136 -> 3000/3136. */
// FUN_0029FA50


BtlPacket* FUN_0029fa50(u32 param_1)
{
    BtlPacket* packet;
    packet = btlPacketCreate(0x601, 0x28);
    packet->updateFunc = (BtlPacketUpdateFunc)FUN_0029f760;
    *(u32*)((u8*)packet->workData + 0x20) = param_1;
    return packet;
}
#pragma push
#pragma opt_lifetimes on
// FUN_0029FAA0


asm u32 FUN_0029faa0(BtlMainColorWork *param_1)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080802d
  .word 0x8f82b6fc
  .word 0x8c43000c
  .word 0x30620002
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000157
  .word 0x00000000
  .word 0x3c020200
  .word 0x00621024
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000150
  .word 0x00000000
  .word 0x8e020064
  .word 0x144000ac
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0xae02000c
  .word 0x8f83b6fc
  .word 0xc4640224
  .word 0xc4630228
  .word 0xc462022c
  .word 0xc4610230
  .word 0xe6040010
  .word 0xe6030014
  .word 0xe6020018
  .word 0xe601001c
  .word 0xc46401c4
  .word 0xc46301c8
  .word 0xc46201cc
  .word 0xc46101d0
  .word 0xe6040030
  .word 0xe6030034
  .word 0xe6020038
  .word 0xe601003c
  .word 0xc46401d4
  .word 0xc46301d8
  .word 0xc46201dc
  .word 0xc46101e0
  .word 0xe6040050
  .word 0xe6030054
  .word 0xe6020058
  .word 0xe601005c
  .word 0xc4640194
  .word 0xc4630198
  .word 0xc462019c
  .word 0xc46101a0
  .word 0x3c020095
  .word 0xe44472b0
  .word 0x3c020095
  .word 0xe44372b4
  .word 0x3c020095
  .word 0xe44272b8
  .word 0x3c020095
  .word 0xe44172bc
  .word 0xc46401a4
  .word 0xc46301a8
  .word 0xc46201ac
  .word 0xc46101b0
  .word 0x3c020095
  .word 0xe44472c0
  .word 0x3c020095
  .word 0xe44372c4
  .word 0x3c020095
  .word 0xe44272c8
  .word 0x3c020095
  .word 0xe44172cc
  .word 0xc46d01b8
  .word 0xc46c01b4
  .word 0xc46b01bc
  .word 0xc46401c0
  .word 0x460d681a
  .word 0x460c601e
  .word 0x460b581e
  .word 0x4604209c
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46020843
  .word 0x460160c2
  .word 0x46016882
  .word 0x46015842
  .word 0x46041a82
  .word 0x46041242
  .word 0x46040a02
  .word 0x460361c2
  .word 0x46026982
  .word 0x46015942
  .word 0x46016902
  .word 0x460358c2
  .word 0x46026082
  .word 0x46053040
  .word 0x46010041
  .word 0xe7a10040
  .word 0x46081040
  .word 0xe7a10044
  .word 0x46091841
  .word 0xe7a10048
  .word 0x46081041
  .word 0xe7a10050
  .word 0x46072840
  .word 0x46010041
  .word 0xe7a10054
  .word 0x460a2040
  .word 0xe7a10058
  .word 0x46091840
  .word 0xe7a10060
  .word 0x460a2041
  .word 0xe7a10064
  .word 0x46063840
  .word 0x46010001
  .word 0xe7a00068
  .word 0xafa00070
  .word 0xafa00074
  .word 0xafa00078
  .word 0x24020003
  .word 0xafa2004c
  .word 0x27a50040
  .word 0x3c040095
  .word 0x24847270
  .word 0x24030004
  .word 0x78a20000
  .word 0x24a50010
  .word 0x2463ffff
  .word 0x7c820000
  .word 0x24840010
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x24030001
  .word 0x3c020095
  .word 0xac4372d0
  .word 0x96020068
  .word 0x30420004
  .word 0x14400034
  .word 0x00000000
  .word 0x0000102d
  .word 0x24050050
  .word 0x24040004
  .word 0x24060006
  .word 0xc78182cc
  .word 0xc78081f8
  .word 0x10000029
  .word 0x00000000
  .word 0x000238c0
  .word 0x8f83b6fc
  .word 0x00671821
  .word 0x8c680150
  .word 0x10000020
  .word 0x00000000
  .word 0x8d030098
  .word 0x30630002
  .word 0x1060001b
  .word 0x00000000
  .word 0x8d0709f4
  .word 0x90e30388
  .word 0x34630006
  .word 0xa0e30388
  .word 0x8d0709f4
  .word 0x90e30388
  .word 0x34630010
  .word 0xa0e30388
  .word 0x96030068
  .word 0x30630001
  .word 0x10600007
  .word 0x00000000
  .word 0x8d0309f4
  .word 0xa06003a9
  .word 0x8d0309f4
  .word 0xa06603aa
  .word 0x10000005
  .word 0x00000000
  .word 0x8d0309f4
  .word 0xa06503a9
  .word 0x8d0309f4
  .word 0xa06403aa
  .word 0x8d0309f4
  .word 0xe46103ac
  .word 0x8d0309f4
  .word 0xe46003b0
  .word 0x8d080a34
  .word 0x1500ffe0
  .word 0x00000000
  .word 0x24420001
  .word 0x2c430004
  .word 0x1460ffd6
  .word 0x00000000
  .word 0x8e040060
  .word 0x8e020064
  .word 0x0044082b
  .word 0x1020007a
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
  .word 0x00000000
  .word 0x00000000
  .word 0x46000d43
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46150501
  .word 0xc6000010
  .word 0x46140142
  .word 0xc6000014
  .word 0x46140102
  .word 0xc6000018
  .word 0x4614001a
  .word 0xc6000000
  .word 0x461500c2
  .word 0xc6000004
  .word 0x46150082
  .word 0xc6010008
  .word 0x46032800
  .word 0xe7a00030
  .word 0x46022000
  .word 0xe7a00034
  .word 0x4615081c
  .word 0xe7a00038
  .word 0xafa2003c
  .word 0x8f82b6fc
  .word 0x27a40030
  .word 0xc7a30030
  .word 0xc7a20034
  .word 0xc7a10038
  .word 0xc7a0003c
  .word 0xe4430224
  .word 0xe4420228
  .word 0xe441022c
  .word 0xe4400230
  .word 0x0c067e3c
  .word 0x00000000
  .word 0xc6000030
  .word 0x461401c2
  .word 0xc6000034
  .word 0x46140182
  .word 0xc6000038
  .word 0x46140142
  .word 0xc600003c
  .word 0x4614001a
  .word 0xc6000020
  .word 0x46150102
  .word 0xc6000024
  .word 0x461500c2
  .word 0xc6000028
  .word 0x46150082
  .word 0xc601002c
  .word 0x46043800
  .word 0x8f82b6fc
  .word 0xe44001c4
  .word 0x46033000
  .word 0x8f82b6fc
  .word 0xe44001c8
  .word 0x46022800
  .word 0x8f82b6fc
  .word 0xe44001cc
  .word 0x4615081c
  .word 0x8f82b6fc
  .word 0xe44001d0
  .word 0xc6000054
  .word 0x461401c2
  .word 0xc6000058
  .word 0x46140182
  .word 0xc600005c
  .word 0x46140142
  .word 0xc6000044
  .word 0x46150102
  .word 0xc6000048
  .word 0x461500c2
  .word 0xc600004c
  .word 0x46150082
  .word 0xc6010050
  .word 0xc6000040
  .word 0x4615001a
  .word 0x4614081c
  .word 0x8f82b6fc
  .word 0xe44001d4
  .word 0x46043800
  .word 0x8f82b6fc
  .word 0xe44001d8
  .word 0x46033000
  .word 0x8f82b6fc
  .word 0xe44001dc
  .word 0x46022800
  .word 0x8f82b6fc
  .word 0xe44001e0
  .word 0x10000020
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c067e3c
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0xc6030000
  .word 0xc6020004
  .word 0xc6010008
  .word 0xc600000c
  .word 0xe4430224
  .word 0xe4420228
  .word 0xe441022c
  .word 0xe4400230
  .word 0xc6030020
  .word 0xc6020024
  .word 0xc6010028
  .word 0xc600002c
  .word 0xe44301c4
  .word 0xe44201c8
  .word 0xe44101cc
  .word 0xe44001d0
  .word 0xc6030040
  .word 0xc6020044
  .word 0xc6010048
  .word 0xc600004c
  .word 0xe44301d4
  .word 0xe44201d8
  .word 0xe44101dc
  .word 0xe44001e0
  .word 0x24020001
  .word 0x10000005
  .word 0x00000000
  .word 0x8e020064
  .word 0x24420001
  .word 0xae020064
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma pop
#pragma opt_lifetimes reset













/* W323 measured: opt_common_subs off nd423->35, object 684/704; default nd423, 684/704. */
// FUN_002A0050 MATCHING
BtlPacket* FUN_002a0050(u32 param_1,u32 param_2,u32 param_3,u32 param_4,u16 param_5)
{
    float *pfVar1;
    int iVar2;
    union { u32 value; u8 bytes[4]; } packed;

    iVar2 = (int)FUN_0027ec10(0x602, 0x6c);
    *(code **)(iVar2 + 0x6c) = (code *)FUN_002a0440;
    pfVar1 = *(float **)(iVar2 + 0x78);

    packed.value = param_1;
    pfVar1[0] = DAT_007caf08 * (float)packed.bytes[0];
    pfVar1[1] = DAT_007caf08 * (float)packed.bytes[1];
    pfVar1[2] = DAT_007caf08 * (float)packed.bytes[2];
    pfVar1[3] = DAT_007caf08 * (float)packed.bytes[3];

    packed.value = param_2;
    pfVar1[8] = DAT_007caf08 * (float)packed.bytes[0];
    pfVar1[9] = DAT_007caf08 * (float)packed.bytes[1];
    pfVar1[10] = DAT_007caf08 * (float)packed.bytes[2];
    pfVar1[0xb] = DAT_007caf08 * (float)packed.bytes[3];

    packed.value = param_3;
    pfVar1[0x10] = DAT_007caf08 * (float)packed.bytes[0];
    pfVar1[0x11] = DAT_007caf08 * (float)packed.bytes[1];
    pfVar1[0x12] = DAT_007caf08 * (float)packed.bytes[2];
    pfVar1[0x13] = DAT_007caf08 * (float)packed.bytes[3];

    *(u32 *)((u8 *)pfVar1 + 0x60) = param_4;
    *(u16 *)(pfVar1 + 0x1a) = param_5;
    return (BtlPacket*)iVar2;
}

/* W389 measured: opt_common_subs off + opt_dead_assignments off nd680->592, object 952/1008 -> 1008/1008. */
#pragma push
#pragma opt_common_subs on
#pragma opt_loop_invariants on
#pragma opt_propagation off
// FUN_002A0440
asm u32 FUN_002a0440(float *param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080802d
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x30620002
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x100002fa
  .word 0x00000000
  .word 0x3c020200
  .word 0x00621024
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x100002f3
  .word 0x00000000
  .word 0x8e020054
  .word 0x1440006a
  .word 0x00000000
  .word 0xc4830224
  .word 0xc4820228
  .word 0xc481022c
  .word 0xc4800230
  .word 0xe6030000
  .word 0xe6020004
  .word 0xe6010008
  .word 0xe600000c
  .word 0xc48301c4
  .word 0xc48201c8
  .word 0xc48101cc
  .word 0xc48001d0
  .word 0xe6030030
  .word 0xe6020034
  .word 0xe6010038
  .word 0xe600003c
  .word 0xc48301d4
  .word 0xc48201d8
  .word 0xc48101dc
  .word 0xc48001e0
  .word 0xe6030040
  .word 0xe6020044
  .word 0xe6010048
  .word 0xe600004c
  .word 0x0c067f50
  .word 0x00000000
  .word 0xc4430000
  .word 0xc4420004
  .word 0xc4410008
  .word 0xc440000c
  .word 0xe6030010
  .word 0xe6020014
  .word 0xe6010018
  .word 0xe600001c
  .word 0x0c067f5c
  .word 0x00000000
  .word 0xc4430000
  .word 0xc4420004
  .word 0xc4410008
  .word 0xc440000c
  .word 0xe6030020
  .word 0xe6020024
  .word 0xe6010028
  .word 0xe600002c
  .word 0x0000102d
  .word 0x10000038
  .word 0x00000000
  .word 0x000220c0
  .word 0x8f83b6fc
  .word 0x00641821
  .word 0x8c630150
  .word 0x1000002f
  .word 0x00000000
  .word 0x9067003c
  .word 0x9066003d
  .word 0x9065003e
  .word 0x9064003f
  .word 0xa0670038
  .word 0xa0660039
  .word 0xa065003a
  .word 0xa064003b
  .word 0xc4630070
  .word 0xc4620074
  .word 0xc4610078
  .word 0xc460007c
  .word 0xe4630060
  .word 0xe4620064
  .word 0xe4610068
  .word 0xe460006c
  .word 0x96040058
  .word 0x30840004
  .word 0x1480001a
  .word 0x00000000
  .word 0x8c640098
  .word 0x30840002
  .word 0x10800016
  .word 0x00000000
  .word 0x8c6509f4
  .word 0x90a40388
  .word 0x34840002
  .word 0xa0a40388
  .word 0x8c6509f4
  .word 0x90a40388
  .word 0x308400eb
  .word 0xa0a40388
  .word 0x8c6409f4
  .word 0xa08003a9
  .word 0x8c6509f4
  .word 0x90a403a8
  .word 0xa0a403aa
  .word 0x8e060050
  .word 0x10c00006
  .word 0x00000000
  .word 0x8c6509f4
  .word 0x90a403aa
  .word 0x0086001b
  .word 0x00002012
  .word 0xa0a403aa
  .word 0x8c630a34
  .word 0x1460ffd1
  .word 0x00000000
  .word 0x24420001
  .word 0x2c430004
  .word 0x1460ffc7
  .word 0x00000000
  .word 0x93829c80
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
  .word 0xc7808218
  .word 0x46010002
  .word 0xe7a00040
  .word 0x93829c81
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
  .word 0xc7808218
  .word 0x46010002
  .word 0xe7a00044
  .word 0x93829c82
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
  .word 0xc7808218
  .word 0x46010002
  .word 0xe7a00048
  .word 0x93829c83
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
  .word 0xc7808218
  .word 0x46010002
  .word 0xe7a0004c
  .word 0x8e040050
  .word 0x8e020054
  .word 0x0044082b
  .word 0x10200152
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
  .word 0x00000000
  .word 0x00000000
  .word 0x46000d43
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46150501
  .word 0xc6000000
  .word 0x46140142
  .word 0xc6000004
  .word 0x46140102
  .word 0xc6000008
  .word 0x4614001a
  .word 0xc7a00040
  .word 0x461500c2
  .word 0xc7a00044
  .word 0x46150082
  .word 0xc7a10048
  .word 0x46032800
  .word 0xe7a00050
  .word 0x46022000
  .word 0xe7a00054
  .word 0x4615081c
  .word 0xe7a00058
  .word 0xafa2005c
  .word 0x8f82b6fc
  .word 0x27a40050
  .word 0xc7a30050
  .word 0xc7a20054
  .word 0xc7a10058
  .word 0xc7a0005c
  .word 0xe4430224
  .word 0xe4420228
  .word 0xe441022c
  .word 0xe4400230
  .word 0x0c067e3c
  .word 0x00000000
  .word 0xc6000010
  .word 0x461401c2
  .word 0xc6000014
  .word 0x46140182
  .word 0xc6000018
  .word 0x46140142
  .word 0xc600001c
  .word 0x4614001a
  .word 0x8f82b6fc
  .word 0xc4400194
  .word 0x46150102
  .word 0xc4400198
  .word 0x461500c2
  .word 0xc440019c
  .word 0x46150082
  .word 0xc44101a0
  .word 0x46043800
  .word 0xe7a00050
  .word 0x46033000
  .word 0xe7a00054
  .word 0x46022800
  .word 0xe7a00058
  .word 0x4615081c
  .word 0xe7a0005c
  .word 0x0c067f50
  .word 0x00000000
  .word 0xc7a30050
  .word 0xc7a20054
  .word 0xc7a10058
  .word 0xc7a0005c
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0xc6000020
  .word 0x461401c2
  .word 0xc6000024
  .word 0x46140182
  .word 0xc6000028
  .word 0x46140142
  .word 0xc600002c
  .word 0x4614001a
  .word 0x8f82b6fc
  .word 0xc44001a4
  .word 0x46150102
  .word 0xc44001a8
  .word 0x461500c2
  .word 0xc44001ac
  .word 0x46150082
  .word 0xc44101b0
  .word 0x46043800
  .word 0xe7a00050
  .word 0x46033000
  .word 0xe7a00054
  .word 0x46022800
  .word 0xe7a00058
  .word 0x4615081c
  .word 0xe7a0005c
  .word 0x0c067f5c
  .word 0x00000000
  .word 0xc7a30050
  .word 0xc7a20054
  .word 0xc7a10058
  .word 0xc7a0005c
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0xc6000030
  .word 0x461401c2
  .word 0xc6000034
  .word 0x46140182
  .word 0xc6000038
  .word 0x46140142
  .word 0xc600003c
  .word 0x4614001a
  .word 0x8f82b6fc
  .word 0xc44001f4
  .word 0x46150102
  .word 0xc44001f8
  .word 0x461500c2
  .word 0xc44001fc
  .word 0x46150082
  .word 0xc4410200
  .word 0x46043800
  .word 0xe44001c4
  .word 0x46033000
  .word 0x8f82b6fc
  .word 0xe44001c8
  .word 0x46022800
  .word 0x8f82b6fc
  .word 0xe44001cc
  .word 0x4615081c
  .word 0x8f82b6fc
  .word 0xe44001d0
  .word 0xc6000040
  .word 0x461401c2
  .word 0xc6000044
  .word 0x46140182
  .word 0xc6000048
  .word 0x46140142
  .word 0xc600004c
  .word 0x4614001a
  .word 0x8f82b6fc
  .word 0xc4400204
  .word 0x46150102
  .word 0xc4400208
  .word 0x461500c2
  .word 0xc440020c
  .word 0x46150082
  .word 0xc4410210
  .word 0x46043800
  .word 0xe44001d4
  .word 0x46033000
  .word 0x8f82b6fc
  .word 0xe44001d8
  .word 0x46022800
  .word 0x8f82b6fc
  .word 0xe44001dc
  .word 0x4615081c
  .word 0x8f82b6fc
  .word 0xe44001e0
  .word 0x96020058
  .word 0x30420002
  .word 0x14400177
  .word 0x00000000
  .word 0x0000102d
  .word 0xc7808218
  .word 0x3c03437f
  .word 0x44832000
  .word 0x3c033f00
  .word 0x44831800
  .word 0x44801000
  .word 0x10000085
  .word 0x00000000
  .word 0x000220c0
  .word 0x8f83b6fc
  .word 0x00641821
  .word 0x8c650150
  .word 0x1000007c
  .word 0x00000000
  .word 0x90a30038
  .word 0x04600006
  .word 0x00000000
  .word 0x44830800
  .word 0x00000000
  .word 0x46800860
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840800
  .word 0x00000000
  .word 0x46800860
  .word 0x46010840
  .word 0x46010042
  .word 0x46140ac2
  .word 0x90a30039
  .word 0x04600006
  .word 0x00000000
  .word 0x44830800
  .word 0x00000000
  .word 0x46800860
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840800
  .word 0x00000000
  .word 0x46800860
  .word 0x46010840
  .word 0x46010042
  .word 0x46140a82
  .word 0x90a3003a
  .word 0x04600006
  .word 0x00000000
  .word 0x44830800
  .word 0x00000000
  .word 0x46800860
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840800
  .word 0x00000000
  .word 0x46800860
  .word 0x46010840
  .word 0x46010042
  .word 0x46140a42
  .word 0x90a3003b
  .word 0x04600006
  .word 0x00000000
  .word 0x44830800
  .word 0x00000000
  .word 0x46800860
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840800
  .word 0x00000000
  .word 0x46800860
  .word 0x46010840
  .word 0x46010042
  .word 0x4614081a
  .word 0xc7a10040
  .word 0x46150942
  .word 0xc7a10044
  .word 0x46150a02
  .word 0xc7a10048
  .word 0x461509c2
  .word 0xc7a6004c
  .word 0x46055940
  .word 0xe7a50050
  .word 0x46085040
  .word 0xe7a10054
  .word 0x46074840
  .word 0xe7a10058
  .word 0x4615305c
  .word 0xe7a1005c
  .word 0x46031018
  .word 0x4605205c
  .word 0x46000864
  .word 0x44030800
  .word 0x00000000
  .word 0xa0a3003c
  .word 0xc7a10054
  .word 0x46031018
  .word 0x4601205c
  .word 0x46000864
  .word 0x44030800
  .word 0x00000000
  .word 0xa0a3003d
  .word 0xc7a10058
  .word 0x46031018
  .word 0x4601205c
  .word 0x46000864
  .word 0x44030800
  .word 0x00000000
  .word 0xa0a3003e
  .word 0xc7a1005c
  .word 0x46031018
  .word 0x4601205c
  .word 0x46000864
  .word 0x44030800
  .word 0x00000000
  .word 0xa0a3003f
  .word 0xc4a10060
  .word 0x46140842
  .word 0xe4a10070
  .word 0xc4a10064
  .word 0x46140842
  .word 0xe4a10074
  .word 0xc4a10068
  .word 0x46140842
  .word 0xe4a10078
  .word 0xc4a1006c
  .word 0x46140842
  .word 0xe4a1007c
  .word 0x8ca50a34
  .word 0x14a0ff84
  .word 0x00000000
  .word 0x24420001
  .word 0x2c430004
  .word 0x1460ff7a
  .word 0x00000000
  .word 0x100000e5
  .word 0x00000000
  .word 0x27a40040
  .word 0x0c067e3c
  .word 0x00000000
  .word 0x8f91b6fc
  .word 0xc7a30040
  .word 0xc7a20044
  .word 0xc7a10048
  .word 0xc7a0004c
  .word 0xe6230224
  .word 0xe6220228
  .word 0xe621022c
  .word 0xe6200230
  .word 0x0c067f50
  .word 0x00000000
  .word 0xc6230194
  .word 0xc6220198
  .word 0xc621019c
  .word 0xc62001a0
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x8f91b6fc
  .word 0x0c067f5c
  .word 0x00000000
  .word 0xc62301a4
  .word 0xc62201a8
  .word 0xc62101ac
  .word 0xc62001b0
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x8f82b6fc
  .word 0xc44301f4
  .word 0xc44201f8
  .word 0xc44101fc
  .word 0xc4400200
  .word 0xe44301c4
  .word 0xe44201c8
  .word 0xe44101cc
  .word 0xe44001d0
  .word 0xc4430204
  .word 0xc4420208
  .word 0xc441020c
  .word 0xc4400210
  .word 0xe44301d4
  .word 0xe44201d8
  .word 0xe44101dc
  .word 0xe44001e0
  .word 0x96020058
  .word 0x30420002
  .word 0x14400069
  .word 0x00000000
  .word 0x9382b808
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
  .word 0xc7808218
  .word 0x46010002
  .word 0xe7a00050
  .word 0x9382b809
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
  .word 0xc7808218
  .word 0x46010002
  .word 0xe7a00054
  .word 0x9382b80a
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
  .word 0xc7808218
  .word 0x46010002
  .word 0xe7a00058
  .word 0x9382b80b
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
  .word 0xc7808218
  .word 0x46010002
  .word 0xe7a0005c
  .word 0x0000382d
  .word 0x1000001b
  .word 0x00000000
  .word 0x000718c0
  .word 0x8f82b6fc
  .word 0x00431021
  .word 0x8c460150
  .word 0x10000012
  .word 0x00000000
  .word 0x93859c80
  .word 0x93849c81
  .word 0x93839c82
  .word 0x93829c83
  .word 0xa0c5003c
  .word 0xa0c4003d
  .word 0xa0c3003e
  .word 0xa0c2003f
  .word 0xc7a30050
  .word 0xc7a20054
  .word 0xc7a10058
  .word 0xc7a0005c
  .word 0xe4c30070
  .word 0xe4c20074
  .word 0xe4c10078
  .word 0xe4c0007c
  .word 0x8cc60a34
  .word 0x14c0ffee
  .word 0x00000000
  .word 0x24e70001
  .word 0x2ce20004
  .word 0x1440ffe4
  .word 0x00000000
  .word 0x96020058
  .word 0x30420004
  .word 0x14400040
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c023fa0
  .word 0x44822000
  .word 0xc7838298
  .word 0x240800a0
  .word 0x24070006
  .word 0x3c063f80
  .word 0x44861000
  .word 0xc78181f8
  .word 0x10000032
  .word 0x00000000
  .word 0x000320c0
  .word 0x8f82b6fc
  .word 0x00441021
  .word 0x8c420150
  .word 0x10000029
  .word 0x00000000
  .word 0x8c440098
  .word 0x30840002
  .word 0x10800024
  .word 0x00000000
  .word 0x8c4409f4
  .word 0x24890388
  .word 0x90850388
  .word 0x30a40010
  .word 0x1480001e
  .word 0x00000000
  .word 0x30a400fa
  .word 0xa1240000
  .word 0x8c4509f4
  .word 0x90a40388
  .word 0x34840002
  .word 0xa0a40388
  .word 0x8c4409f4
  .word 0xc48003a0
  .word 0x46002002
  .word 0xe480039c
  .word 0x8c4409f4
  .word 0xe48303a4
  .word 0x8c4409f4
  .word 0xa08003a8
  .word 0x8c4409f4
  .word 0xa08803a9
  .word 0x8c4409f4
  .word 0xa08703aa
  .word 0x8c4409f4
  .word 0xac8603ac
  .word 0x8c4409f4
  .word 0xe48103b0
  .word 0x8c4509f4
  .word 0x24a4039c
  .word 0xc4a0039c
  .word 0x46020036
  .word 0x45010002
  .word 0x00000000
  .word 0xe4820000
  .word 0x8c420a34
  .word 0x1440ffd7
  .word 0x00000000
  .word 0x24630001
  .word 0x2c620004
  .word 0x1440ffcd
  .word 0x00000000
  .word 0x24020001
  .word 0x10000005
  .word 0x00000000
  .word 0x8e020054
  .word 0x24420001
  .word 0xae020054
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
}
#pragma pop
#pragma opt_propagation reset
#pragma opt_loop_invariants reset
#pragma opt_common_subs reset

// FUN_002A1080


BtlPacket* FUN_002a1080(s32 param_1, s16 param_2)
{
    BtlPacket* packet;
    u8* work;
    packet = btlPacketCreate(0x603, 0x5c);
    packet->updateFunc = (BtlPacketUpdateFunc)FUN_002a0440;
    work = (u8*)packet->workData;
    *(s32*)(work + 0x50) = param_1;
    *(s16*)(work + 0x58) = param_2;
    return packet;
}

/* W389 measured: opt_common_subs off with existing opt_loop_invariants on nd356->309, object 544/576 -> 556/576. */
// FUN_002A10E0


u8 FUN_002a10e0(BtlMainLerpWork *param_1)
{
    f32 currentFloat;
    f32 totalFloat;
    f32 ratio;
    f32 inverse;
    RwV4d results;
    u32 totalFrames;
    u32 currentFrame;
    u8* global;

    if (param_1->currentFrame == 0)
    {
        global = (u8*)iGpffffb6fc;
        *(RwV4d*)&param_1->target0 = *(RwV4d*)(global + 0x234);
    }

    totalFrames = param_1->totalFrames;
    currentFrame = param_1->currentFrame;
    if (currentFrame < totalFrames)
    {
        currentFloat = (f32)currentFrame;
        totalFloat = (f32)totalFrames;

        ratio = currentFloat / totalFloat;
        inverse = 1.0f - ratio;
        results.x = param_1->target0 * inverse + param_1->value0 * ratio;
        results.y = param_1->target1 * inverse + param_1->value1 * ratio;
        results.z = param_1->target2 * inverse + param_1->value2 * ratio;
        results.w = param_1->target3 * inverse + param_1->value3 * ratio;
        global = (u8*)iGpffffb6fc;
        *(RwV4d*)(global + 0x234) = results;
    }

    else
    {
        global = (u8*)iGpffffb6fc;
        *(RwV4d*)(global + 0x234) = *(RwV4d*)&param_1->value0;
        return 1;
    }

    param_1->currentFrame++;
    return 0;
}

// FUN_002A1280
BtlPacket* FUN_002a1280(u32 param_1,u32 param_2)
{
    float *color;
    u32 packed;
    int packet;
    packet = (int)FUN_0027ec10(0x604, 0x28);
    *(code **)(packet + 0x6c) = (code *)FUN_002a10e0;
    color = *(float **)(packet + 0x78);
    packed = param_1;
    color[0] = fGpffff8218 * (float)((u8*)&packed)[0];
    color[1] = fGpffff8218 * (float)((u8*)&packed)[1];
    color[2] = fGpffff8218 * (float)((u8*)&packed)[2];
    color[3] = fGpffff8218 * (float)((u8*)&packed)[3];
    *(u32*)((u8*)color + 0x20) = param_2;
    return (BtlPacket*)packet;
}

#pragma opt_common_subs off
// FUN_002A1400
u8 FUN_002a1400(float *param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  u32 duration;
  u32 counter;
  RwRGBAReal output;
  RwRGBAReal target;

  if (*(u32 *)(param_1 + 5) == 0) {
    *(RwRGBAReal *)param_1 = *(RwRGBAReal *)(iGpffffb6fc + 0x234);
  }

  target.r = fGpffff8218 * (float)bGpffffb808;
  target.g = fGpffff8218 * (float)bGpffffb809;
  target.b = fGpffff8218 * (float)bGpffffb80a;
  target.a = fGpffff8218 * (float)bGpffffb80b;
  duration = *(u32 *)(param_1 + 4);
  counter = *(u32 *)(param_1 + 5);
  if (counter < duration) {
    fVar5 = (float)counter / (float)duration;
    fVar7 = 1.0f - fVar5;
    fVar6 = param_1[1];
    fVar2 = param_1[2];
    fVar3 = param_1[3];
    output.r = *param_1 * fVar7 + target.r * fVar5;
    output.g = fVar6 * fVar7 + target.g * fVar5;
    output.b = fVar2 * fVar7 + target.b * fVar5;
    output.a = fVar3 * fVar7 + target.a * fVar5;
    *(RwRGBAReal *)(iGpffffb6fc + 0x234) = output;
  }
  else {
    *(RwRGBAReal *)(iGpffffb6fc + 0x234) = target;
    return 1;
  }
  *(u32 *)(param_1 + 5) = *(u32 *)(param_1 + 5) + 1;
  return 0;
}
#pragma opt_common_subs reset

// FUN_002A16C0


BtlPacket* FUN_002a16c0(s32 param_1)
{
    BtlPacket* packet;
    packet = btlPacketCreate(0x605, 0x18);
    packet->updateFunc = (BtlPacketUpdateFunc)FUN_002a1400;
    *(s32*)((u8*)packet->workData + 0x10) = param_1;
    return packet;
}

#pragma push
#pragma opt_common_subs off
#pragma opt_dead_assignments off
// FUN_002A1710


asm u32 FUN_002a1710(int *param_1)
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
  .word 0x24110001
  .word 0x8c930000
  .word 0x9483000c
  .word 0x8f82b6fc
  .word 0x8c420010
  .word 0x30420008
  .word 0x10400004
  .word 0x00000000
  .word 0x0220102d
  .word 0x100000dc
  .word 0x00000000
  .word 0x8f84b708
  .word 0x3063ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021080
  .word 0x00441021
  .word 0x90430011
  .word 0x24020010
  .word 0x14620004
  .word 0x00000000
  .word 0x0220102d
  .word 0x100000cd
  .word 0x00000000
  .word 0x9662006a
  .word 0x28410002
  .word 0x10200008
  .word 0x00000000
  .word 0x8e620030
  .word 0x904200a2
  .word 0x10400004
  .word 0x00000000
  .word 0x0220102d
  .word 0x100000c2
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0b58a4
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x8e620030
  .word 0x904300a2
  .word 0x24020001
  .word 0x00621004
  .word 0x3042ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x24020003
  .word 0x3042ffff
  .word 0x8e630030
  .word 0x906300a2
  .word 0x1460001c
  .word 0x00000000
  .word 0x24050001
  .word 0x0000302d
  .word 0x9664006a
  .word 0x1000000e
  .word 0x00000000
  .word 0x30c3ffff
  .word 0x00031880
  .word 0x02631821
  .word 0x8c630038
  .word 0x8c630030
  .word 0x906300a2
  .word 0x10600004
  .word 0x00000000
  .word 0x0000282d
  .word 0x10000007
  .word 0x00000000
  .word 0x24c30001
  .word 0x3066ffff
  .word 0x30c3ffff
  .word 0x0064182a
  .word 0x1460fff0
  .word 0x00000000
  .word 0x10a00004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000095
  .word 0x00000000
  .word 0x8e850004
  .word 0x8e830008
  .word 0x0065082b
  .word 0x1020003e
  .word 0x00000000
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
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x00000000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46010041
  .word 0x3c03437f
  .word 0x44830000
  .word 0x00000000
  .word 0x46010042
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
  .word 0x309500ff
  .word 0x0000882d
  .word 0x10000002
  .word 0x00000000
  .word 0x0000a82d
  .word 0x0000802d
  .word 0x3056ffff
  .word 0x1000002a
  .word 0x00000000
  .word 0x3202ffff
  .word 0x000218c0
  .word 0x8f82b6fc
  .word 0x00431021
  .word 0x8c520150
  .word 0x1000001f
  .word 0x00000000
  .word 0x924300a2
  .word 0x24020001
  .word 0x00621004
  .word 0x02c21024
  .word 0x10400018
  .word 0x00000000
  .word 0x964209f2
  .word 0x10400015
  .word 0x00000000
  .word 0x8e42009c
  .word 0x30420001
  .word 0x14400011
  .word 0x00000000
  .word 0x8e620030
  .word 0x1242000e
  .word 0x00000000
  .word 0x92450030
  .word 0x92440031
  .word 0x92430032
  .word 0x92420033
  .word 0xa3a5008c
  .word 0xa3a4008d
  .word 0xa3a3008e
  .word 0xa3a2008f
  .word 0xa3b5008f
  .word 0x0240202d
  .word 0x8fa5008c
  .word 0x0c09fdcc
  .word 0x00000000
  .word 0x8e520a34
  .word 0x1640ffe1
  .word 0x00000000
  .word 0x26020001
  .word 0x3050ffff
  .word 0x3202ffff
  .word 0x28420002
  .word 0x1440ffd4
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000015
  .word 0x00000000
  .word 0x3202ffff
  .word 0x00021080
  .word 0x02621021
  .word 0x8c420038
  .word 0x8c440030
  .word 0x90860030
  .word 0x90850031
  .word 0x90830032
  .word 0x90820033
  .word 0xa3a60088
  .word 0xa3a50089
  .word 0xa3a3008a
  .word 0xa3a2008b
  .word 0x240200ff
  .word 0xa3a2008b
  .word 0x8fa50088
  .word 0x0c09fdcc
  .word 0x00000000
  .word 0x26020001
  .word 0x3050ffff
  .word 0x3203ffff
  .word 0x9662006a
  .word 0x0062102a
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x8e820008
  .word 0x24420001
  .word 0xae820008
  .word 0x0220102d
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
}
#pragma pop
#pragma opt_dead_assignments reset
#pragma opt_common_subs reset

// FUN_002A1B00


void FUN_002a1b00(s32 param_1,s16 param_2,s32 param_3)
{
    BtlPacket* packet;
    u8* work;
    packet = btlPacketCreate(0x606, 0x10);
    packet->updateFunc = (BtlPacketUpdateFunc)FUN_002a1710;
    work = (u8*)packet->workData;
    *(s32*)(work + 0) = param_1;
    *(s32*)(work + 4) = param_3;
    *(s16*)(work + 0xc) = param_2;
    *(s32*)(work + 8) = 0;
}

#pragma push
#pragma opt_loop_invariants on
#pragma opt_common_subs off
// FUN_002A1B70


asm u32 FUN_002a1b70(u32 *param_1)
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
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020040
  .word 0x00621024
  .word 0x10400008
  .word 0x00000000
  .word 0x94820018
  .word 0x30420010
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000071
  .word 0x00000000
  .word 0x24130001
  .word 0x8e040000
  .word 0x8e020004
  .word 0x0044082b
  .word 0x1020003a
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
  .word 0x00000000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
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
  .word 0x307200ff
  .word 0x0000982d
  .word 0x10000002
  .word 0x00000000
  .word 0x641200ff
  .word 0x0000a02d
  .word 0x325100ff
  .word 0x10000025
  .word 0x00000000
  .word 0x3282ffff
  .word 0x000218c0
  .word 0x8f82b6fc
  .word 0x00431021
  .word 0x8c550150
  .word 0x1000001a
  .word 0x00000000
  .word 0x96a209f2
  .word 0x10400016
  .word 0x00000000
  .word 0x8ea2009c
  .word 0x30420001
  .word 0x14400012
  .word 0x00000000
  .word 0x92a50030
  .word 0x92a40031
  .word 0x92a30032
  .word 0x92a20033
  .word 0xa3a5007c
  .word 0xa3a4007d
  .word 0xa3a3007e
  .word 0xa3a2007f
  .word 0x93a2007f
  .word 0x0051082a
  .word 0x10200006
  .word 0x00000000
  .word 0xa3b2007f
  .word 0x02a0202d
  .word 0x8fa5007c
  .word 0x0c09fdcc
  .word 0x00000000
  .word 0x8eb50a34
  .word 0x16a0ffe6
  .word 0x00000000
  .word 0x26820001
  .word 0x3054ffff
  .word 0x3282ffff
  .word 0x28420002
  .word 0x1440ffd9
  .word 0x00000000
  .word 0x8e020004
  .word 0x24420001
  .word 0xae020004
  .word 0x0260102d
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
}
#pragma pop
#pragma opt_common_subs reset
#pragma opt_loop_invariants reset

// FUN_002A1DB0


void FUN_002a1db0(s32 param_1)
{
    BtlPacket* packet;
    packet = btlPacketCreate(0x607, 8);
    packet->updateFunc = (BtlPacketUpdateFunc)FUN_002a1b70;
    *(s32*)packet->workData = param_1;
}

/* W414/W421 evidence: baseline verify nd4 at 592/592 (rate 0.006757).
 * The ordered jal sequence is identical on both sides: FUN_004be310 only;
 * no missing/extra call is present.  Splitting each quintic into
 * sequential Horner statements keeps the retail constant-load/accumulator
 * order.  The two residuals are one commutative product-order defect:
 * +368 ours madd.s $f20,$f1,$f0 versus retail madd.s $f20,$f0,$f1;
 * +428 ours madd.s $f21,$f1,$f0 versus retail madd.s $f21,$f0,$f1.
 * Both destinations match and both source pairs are swapped. */
static inline f32 btlMainMulFirst(f32 left, f32 right)
{
    return left * right;
}

// FUN_002A1E00


void FUN_002a1e00(float *param_2,float *param_3,float *param_4,float param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *out;
  float *first;
  float *second;
  struct {
    float values[9];
    u32 mode;
  } interpolation;

  out = param_2;
  first = param_3;
  second = param_4;
  fVar5 = 1.0f - param_1;
  fVar1 = first[1] * fVar5;
  fVar2 = first[2] * fVar5;
  fVar3 = second[1] * param_1;
  fVar4 = second[2] * param_1;
  *out = *first * fVar5 + *second * param_1;
  out[1] = fVar1 + fVar3;
  out[2] = fVar2 + fVar4;
  FUN_004be310(first + 3,second + 3,interpolation.values);
  if (param_1 <= 0.0f) {
    *(RwV4d*)(out + 3) = *(RwV4d*)(first + 3);
  }
  else if (1.0f <= param_1) {
    *(RwV4d*)(out + 3) = *(RwV4d*)(second + 3);
  }
  else {
    if (interpolation.mode == 0) {
      fVar5 = fVar5 * interpolation.values[8];
      fVar2 = fVar5 * fVar5;
      fVar1 = fGpffff8044 * fVar2 + fGpffff8048 + 0.0f;
      fVar1 = fVar2 * fVar1 + fGpffff804c + 0.0f;
      fVar1 = fVar2 * fVar1 + fGpffff8050 + 0.0f;
      fVar1 = fVar2 * fVar1 + fGpffff8054 + 0.0f;
      fVar1 = fVar2 * fVar1 + fGpffff8058 + 0.0f;
      fVar5 = btlMainMulFirst(fVar2 * fVar5, fVar1) + fVar5 + 0.0f;
      param_1 = param_1 * interpolation.values[8];
      fVar2 = param_1 * param_1;
      fVar1 = fGpffff8044 * fVar2 + fGpffff8048 + 0.0f;
      fVar1 = fVar2 * fVar1 + fGpffff804c + 0.0f;
      fVar1 = fVar2 * fVar1 + fGpffff8050 + 0.0f;
      fVar1 = fVar2 * fVar1 + fGpffff8054 + 0.0f;
      fVar1 = fVar2 * fVar1 + fGpffff8058 + 0.0f;
      param_1 = btlMainMulFirst(fVar2 * param_1, fVar1) + param_1 + 0.0f;
    }
    out[3] = interpolation.values[0] * fVar5;
    out[4] = interpolation.values[1] * fVar5;
    out[5] = interpolation.values[2] * fVar5;
    out[3] = interpolation.values[4] * param_1 + out[3] + 0.0f;
    out[4] = interpolation.values[5] * param_1 + out[4] + 0.0f;
    out[5] = interpolation.values[6] * param_1 + out[5] + 0.0f;
    out[6] = interpolation.values[3] * fVar5 + interpolation.values[7] * param_1;
  }
}

// FUN_002A2050


u32 FUN_002a2050(u16 *param_1,f32 *param_2,f32 *param_3)
{
    u16 index;
    u32 address;
    f32 *entry;
    f32 value1;
    f32 value2;
    f32 value3;
    f32 value4;
    if (param_1[0x3b] >= 4)
    {
        return 0;
    }
    index = param_1[0x3c];
    if (param_2 != ((void*)0))
    {
        address = (u32)index * 0x1c;
        address = address + (u32)param_1;
        entry = (f32*)(address + 4);
        value2 = param_2[0];
        value3 = param_2[1];
        value1 = param_2[2];
        entry[0] = value2;
        entry[1] = value3;
        entry[2] = value1;
        if ((*param_1 & 1) == 0)
        {
            FUN_0048d370(*(u32*)(param_1 + 0x4c), index, param_2);
        }
    }
    if (param_3 != ((void*)0))
    {
        address = (u32)index * 0x1c;
        address = address + (u32)param_1;
        entry = (f32*)(address + 0x10);
        value2 = param_3[0];
        value3 = param_3[1];
        value4 = param_3[2];
        value1 = param_3[3];
        entry[0] = value2;
        entry[1] = value3;
        entry[2] = value4;
        entry[3] = value1;
    }
    index++;
    if (index >= 4)
    {
        index = 0;
    }
    param_1[0x3c] = index;
    param_1[0x3b]++;
    return 1;
}

// FUN_002A2170


void FUN_002a2170(u16 *param_1,f32 *param_2)
{
    u16 index;
    u32 address;
    f32 *entry;
    f32 *source;
    f32 value1;
    f32 value2;
    f32 value3;
    f32 value4;
    *param_1 = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    *(u32*)((u8*)param_1 + 0x80) = 0;
    *(u32*)((u8*)param_1 + 0x7c) = 0;
    if (param_1[0x3b] < 4)
    {
        index = param_1[0x3c];
        if (param_2 != ((void*)0))
        {
            address = (u32)index * 0x1c;
            address = address + (u32)param_1;
            entry = (f32*)(address + 4);
            value2 = param_2[0];
            value3 = param_2[1];
            value1 = param_2[2];
            entry[0] = value2;
            entry[1] = value3;
            entry[2] = value1;
            if ((*param_1 & 1) == 0)
            {
                FUN_0048d370(*(u32*)((u8*)param_1 + 0x98), index, param_2);
            }
        }
        source = param_2 + 3;
        if (source != ((void*)0))
        {
            address = (u32)index * 0x1c;
            address = address + (u32)param_1;
            entry = (f32*)(address + 0x10);
            value2 = source[0];
            value3 = source[1];
            value4 = source[2];
            value1 = source[3];
            entry[0] = value2;
            entry[1] = value3;
            entry[2] = value4;
            entry[3] = value1;
        }
        index++;
        if (index >= 4)
        {
            index = 0;
        }
        param_1[0x3c] = index;
        param_1[0x3b]++;
    }
}

// FUN_002A2290


void FUN_002a2290(u16 *param_1, f32 *param_2, f32 *param_3, u16 param_4)
{
    u16 index;
    u16 index0;
    u16 index1;
    u32 address;
    f32 *entry;
    f32 *source;
    f32 value1;
    f32 value2;
    f32 value3;
    f32 value4;
    f32 work[7];

    *param_1 = param_4;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    *(u32*)((u8*)param_1 + 0x80) = 0;
    *(u32*)((u8*)param_1 + 0x7c) = 0;
    if (param_1[0x3b] < 4)
    {
        index0 = param_1[0x3c];
        if (param_2 != ((void*)0))
        {
            address = (u32)index0 * 0x1c;
            address += (u32)param_1;
            entry = (f32*)(address + 4);
            value2 = param_2[0];
            value3 = param_2[1];
            value1 = param_2[2];
            entry[0] = value2;
            entry[1] = value3;
            entry[2] = value1;
            if ((*param_1 & 1) == 0)
            {
                FUN_0048d370(*(u32*)((u8*)param_1 + 0x98), index0, param_2);
            }
        }
        source = param_2 + 3;
        if (source != ((void*)0))
        {
            address = (u32)index0 * 0x1c;
            address += (u32)param_1;
            entry = (f32*)(address + 0x10);
            value2 = source[0];
            value3 = source[1];
            value4 = source[2];
            value1 = source[3];
            entry[0] = value2;
            entry[1] = value3;
            entry[2] = value4;
            entry[3] = value1;
        }
        index0++;
        if (index0 >= 4)
        {
            index0 = 0;
        }
        param_1[0x3c] = index0;
        param_1[0x3b]++;
    }

    FUN_002a1e00_typed(work, param_2, param_3, fGpffff82c8);
    if (param_1[0x3b] < 4)
    {
        index1 = param_1[0x3c];
        if (work != ((void*)0))
        {
            address = (u32)index1 * 0x1c;
            address += (u32)param_1;
            entry = (f32*)(address + 4);
            *(RwV3d*)entry = *(RwV3d*)work;
            if ((*param_1 & 1) == 0)
            {
                FUN_0048d370(*(u32*)((u8*)param_1 + 0x98), index1, work);
            }
        }
        if (work + 3 != ((void*)0))
        {
            address = (u32)index1 * 0x1c;
            address += (u32)param_1;
            entry = (f32*)(address + 0x10);
            *(RwV4d*)entry = *(RwV4d*)(work + 3);
        }
        index1++;
        if (index1 >= 4)
        {
            index1 = 0;
        }
        param_1[0x3c] = index1;
        param_1[0x3b]++;
    }

    FUN_002a1e00_typed(work, param_2, param_3, fGpffff805c);
    if (param_1[0x3b] < 4)
    {
        index = param_1[0x3c];
        if (work != ((void*)0))
        {
            address = (u32)index * 0x1c;
            address += (u32)param_1;
            entry = (f32*)(address + 4);
            *(RwV3d*)entry = *(RwV3d*)work;
            if ((*param_1 & 1) == 0)
            {
                FUN_0048d370(*(u32*)((u8*)param_1 + 0x98), index, work);
            }
        }
        if (work + 3 != ((void*)0))
        {
            address = (u32)index * 0x1c;
            address += (u32)param_1;
            entry = (f32*)(address + 0x10);
            *(RwV4d*)entry = *(RwV4d*)(work + 3);
        }
        index++;
        if (index >= 4)
        {
            index = 0;
        }
        param_1[0x3c] = index;
        param_1[0x3b]++;
    }

    if (param_1[0x3b] < 4)
    {
        index = param_1[0x3c];
        if (param_3 != ((void*)0))
        {
            address = (u32)index * 0x1c;
            address += (u32)param_1;
            entry = (f32*)(address + 4);
            value2 = param_3[0];
            value3 = param_3[1];
            value1 = param_3[2];
            entry[0] = value2;
            entry[1] = value3;
            entry[2] = value1;
            if ((*param_1 & 1) == 0)
            {
                FUN_0048d370(*(u32*)((u8*)param_1 + 0x98), index, param_3);
            }
        }
        source = param_3 + 3;
        if (source != ((void*)0))
        {
            address = (u32)index * 0x1c;
            address += (u32)param_1;
            entry = (f32*)(address + 0x10);
            value2 = source[0];
            value3 = source[1];
            value4 = source[2];
            value1 = source[3];
            entry[0] = value2;
            entry[1] = value3;
            entry[2] = value4;
            entry[3] = value1;
        }
        index++;
        if (index >= 4)
        {
            index = 0;
        }
        param_1[0x3c] = index;
        param_1[0x3b]++;
    }
}

// FUN_002A2660


asm void FUN_002a2660(u16 *param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5,u16 param_6)
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
  .word 0x00c0a02d
  .word 0x00e0982d
  .word 0x0100902d
  .word 0xa4890000
  .word 0xa4800074
  .word 0xa4800076
  .word 0xa4800078
  .word 0xac800080
  .word 0xac80007c
  .word 0x94830076
  .word 0x28610004
  .word 0x10200031
  .word 0x00000000
  .word 0x96110078
  .word 0x12a00014
  .word 0x00000000
  .word 0x3225ffff
  .word 0x000518c0
  .word 0x00651823
  .word 0x00031880
  .word 0x00701821
  .word 0xc6a20000
  .word 0xc6a10004
  .word 0xc6a00008
  .word 0xe4620004
  .word 0xe4610008
  .word 0xe460000c
  .word 0x96030000
  .word 0x30630001
  .word 0x14600005
  .word 0x00000000
  .word 0x8e040098
  .word 0x02a0302d
  .word 0x0c1234dc
  .word 0x00000000
  .word 0x26a5000c
  .word 0x10a0000e
  .word 0x00000000
  .word 0x3224ffff
  .word 0x000418c0
  .word 0x00641823
  .word 0x00031880
  .word 0x00701821
  .word 0xc4a30000
  .word 0xc4a20004
  .word 0xc4a10008
  .word 0xc4a0000c
  .word 0xe4630010
  .word 0xe4620014
  .word 0xe4610018
  .word 0xe460001c
  .word 0x26230001
  .word 0x3064ffff
  .word 0x28830004
  .word 0x14600002
  .word 0x00000000
  .word 0x0000202d
  .word 0xa6040078
  .word 0x96030076
  .word 0x24630001
  .word 0xa6030076
  .word 0x96030076
  .word 0x28610004
  .word 0x10200031
  .word 0x00000000
  .word 0x96110078
  .word 0x12800014
  .word 0x00000000
  .word 0x3225ffff
  .word 0x000518c0
  .word 0x00651823
  .word 0x00031880
  .word 0x00701821
  .word 0xc6820000
  .word 0xc6810004
  .word 0xc6800008
  .word 0xe4620004
  .word 0xe4610008
  .word 0xe460000c
  .word 0x96030000
  .word 0x30630001
  .word 0x14600005
  .word 0x00000000
  .word 0x8e040098
  .word 0x0280302d
  .word 0x0c1234dc
  .word 0x00000000
  .word 0x2685000c
  .word 0x10a0000e
  .word 0x00000000
  .word 0x3224ffff
  .word 0x000418c0
  .word 0x00641823
  .word 0x00031880
  .word 0x00701821
  .word 0xc4a30000
  .word 0xc4a20004
  .word 0xc4a10008
  .word 0xc4a0000c
  .word 0xe4630010
  .word 0xe4620014
  .word 0xe4610018
  .word 0xe460001c
  .word 0x26230001
  .word 0x3064ffff
  .word 0x28830004
  .word 0x14600002
  .word 0x00000000
  .word 0x0000202d
  .word 0xa6040078
  .word 0x96030076
  .word 0x24630001
  .word 0xa6030076
  .word 0x96030076
  .word 0x28610004
  .word 0x10200031
  .word 0x00000000
  .word 0x96110078
  .word 0x12600014
  .word 0x00000000
  .word 0x3225ffff
  .word 0x000518c0
  .word 0x00651823
  .word 0x00031880
  .word 0x00701821
  .word 0xc6620000
  .word 0xc6610004
  .word 0xc6600008
  .word 0xe4620004
  .word 0xe4610008
  .word 0xe460000c
  .word 0x96030000
  .word 0x30630001
  .word 0x14600005
  .word 0x00000000
  .word 0x8e040098
  .word 0x0260302d
  .word 0x0c1234dc
  .word 0x00000000
  .word 0x2665000c
  .word 0x10a0000e
  .word 0x00000000
  .word 0x3224ffff
  .word 0x000418c0
  .word 0x00641823
  .word 0x00031880
  .word 0x00701821
  .word 0xc4a30000
  .word 0xc4a20004
  .word 0xc4a10008
  .word 0xc4a0000c
  .word 0xe4630010
  .word 0xe4620014
  .word 0xe4610018
  .word 0xe460001c
  .word 0x26230001
  .word 0x3064ffff
  .word 0x28830004
  .word 0x14600002
  .word 0x00000000
  .word 0x0000202d
  .word 0xa6040078
  .word 0x96030076
  .word 0x24630001
  .word 0xa6030076
  .word 0x96030076
  .word 0x28610004
  .word 0x10200031
  .word 0x00000000
  .word 0x96110078
  .word 0x12400014
  .word 0x00000000
  .word 0x3225ffff
  .word 0x000518c0
  .word 0x00651823
  .word 0x00031880
  .word 0x00701821
  .word 0xc6420000
  .word 0xc6410004
  .word 0xc6400008
  .word 0xe4620004
  .word 0xe4610008
  .word 0xe460000c
  .word 0x96030000
  .word 0x30630001
  .word 0x14600005
  .word 0x00000000
  .word 0x8e040098
  .word 0x0240302d
  .word 0x0c1234dc
  .word 0x00000000
  .word 0x2645000c
  .word 0x10a0000e
  .word 0x00000000
  .word 0x3224ffff
  .word 0x000418c0
  .word 0x00641823
  .word 0x00031880
  .word 0x00701821
  .word 0xc4a30000
  .word 0xc4a20004
  .word 0xc4a10008
  .word 0xc4a0000c
  .word 0xe4630010
  .word 0xe4620014
  .word 0xe4610018
  .word 0xe460001c
  .word 0x26230001
  .word 0x3064ffff
  .word 0x28830004
  .word 0x14600002
  .word 0x00000000
  .word 0x0000202d
  .word 0xa6040078
  .word 0x96030076
  .word 0x24630001
  .word 0xa6030076
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

static inline u8* btlMainAddFirst(u8* base, u32 offset)
{
    return base + offset;
}

// FUN_002A2A20


/* BtlCore2 W419 negative: 2a2a20 _abs address spellings held nd63 at 296B; scalar direct spelling worsened nd63->151 and shrank to 284B. W442 natural u16 increments reduce nd63->59 at 296B. */
asm void FUN_002a2a20(u8* param_2,f32* param_3,f32 param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x460c00c1
  .word 0x46031842
  .word 0x46011802
  .word 0xe7a00000
  .word 0x46016002
  .word 0x3c034040
  .word 0x44831000
  .word 0x00000000
  .word 0x46001002
  .word 0xe7a00004
  .word 0x460c6042
  .word 0x46011802
  .word 0x46001002
  .word 0xe7a00008
  .word 0x46016002
  .word 0xe7a0000c
  .word 0x94870074
  .word 0x3c030095
  .word 0xc4627180
  .word 0x3c030095
  .word 0xc4617184
  .word 0x3c030095
  .word 0xc4607188
  .word 0xe4a20000
  .word 0xe4a10004
  .word 0xe4a00008
  .word 0x0000402d
  .word 0x44800800
  .word 0x10000022
  .word 0x00000000
  .word 0x3103ffff
  .word 0x00031880
  .word 0x007d1821
  .word 0x24630000
  .word 0xc4650000
  .word 0x30e6ffff
  .word 0x000618c0
  .word 0x00661823
  .word 0x00031880
  .word 0x00831821
  .word 0xc4600008
  .word 0x46050102
  .word 0xc460000c
  .word 0x460500c2
  .word 0xc4620004
  .word 0xc4a00000
  .word 0x46000818
  .word 0x4605101c
  .word 0xe4a00000
  .word 0xc4a00004
  .word 0x46040000
  .word 0xe4a00004
  .word 0xc4a00008
  .word 0x46030000
  .word 0xe4a00008
  .word 0x24e30001
  .word 0x3067ffff
  .word 0x28e30004
  .word 0x14600002
  .word 0x00000000
  .word 0x0000382d
  .word 0x25030001
  .word 0x3068ffff
  .word 0x3103ffff
  .word 0x28630004
  .word 0x1460ffdc
  .word 0x00000000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

/* Recovered battle-misc harvest: 0x0029F4B0-0x002A16C0 */




















// FUN_002A2B50


void FUN_002a2b50(u8* param_2, f32* param_3, f32 param_1)
{
    u16 currentIndex;
    u16 nextIndex;
    u32 currentAddress;
    u32 nextAddress;
    f32 currentX;
    f32 currentY;
    f32 currentZ;
    f32 nextX;
    f32 nextY;
    f32 nextZ;
    f32 blend;
    f32 period;
    currentIndex = *(u16*)(param_2 + 0x74);
    period = fGpffff82c8;
    while (param_1 >= period)
    {
        currentIndex++;
        param_1 -= period;
    }
    param_1 /= period;
    if (currentIndex >= 4)
    {
        currentIndex &= 3;
    }
    nextIndex = currentIndex + 1;
    if (nextIndex >= 4)
    {
        nextIndex &= 3;
    }
    blend = 1.0f - param_1;
    currentAddress = (u32)currentIndex * 0x1c;
    currentAddress = currentAddress + (u32)param_2;
    currentY = *(f32*)(currentAddress + 8);
    currentY = currentY * blend;
    currentZ = *(f32*)(currentAddress + 0xc);
    currentZ = currentZ * blend;
    nextAddress = (u32)nextIndex * 0x1c;
    nextAddress = nextAddress + (u32)param_2;
    nextY = *(f32*)(nextAddress + 8);
    nextY = nextY * param_1;
    nextZ = *(f32*)(nextAddress + 0xc);
    nextZ = nextZ * param_1;
    currentX = *(f32*)(currentAddress + 4);
    nextX = *(f32*)(nextAddress + 4);
    param_3[0] = currentX * blend + nextX * param_1;
    param_3[1] = currentY + nextY;
    param_3[2] = currentZ + nextZ;
}

// FUN_002A2C40


asm void FUN_002a2c40(u8* param_2,f32* param_3,f32 param_1)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x00a0882d
  .word 0x46006506
  .word 0x94850074
  .word 0xc78082c8
  .word 0x10000004
  .word 0x00000000
  .word 0x24a20001
  .word 0x3045ffff
  .word 0x4600a501
  .word 0x4600a034
  .word 0x00000000
  .word 0x4500fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a503
  .word 0x00000000
  .word 0x30a2ffff
  .word 0x28420004
  .word 0x14400002
  .word 0x00000000
  .word 0x30a50003
  .word 0x30a2ffff
  .word 0x24420001
  .word 0x3043ffff
  .word 0x28620004
  .word 0x14400002
  .word 0x00000000
  .word 0x30630003
  .word 0x3063ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x00821021
  .word 0x24500010
  .word 0x30a3ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x00821021
  .word 0x24520010
  .word 0x0240202d
  .word 0x0200282d
  .word 0x27a60050
  .word 0x0c12f8c4
  .word 0x00000000
  .word 0x44805800
  .word 0x00000000
  .word 0x460ba036
  .word 0x4500000b
  .word 0x00000000
  .word 0xc6430000
  .word 0xc6420004
  .word 0xc6410008
  .word 0xc640000c
  .word 0xe6230000
  .word 0xe6220004
  .word 0xe6210008
  .word 0xe620000c
  .word 0x10000059
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46140036
  .word 0x4500000b
  .word 0x00000000
  .word 0xc6030000
  .word 0xc6020004
  .word 0xc6010008
  .word 0xc600000c
  .word 0xe6230000
  .word 0xe6220004
  .word 0xe6210008
  .word 0xe620000c
  .word 0x10000049
  .word 0x00000000
  .word 0x46140001
  .word 0x8fa30074
  .word 0x14600026
  .word 0x00000000
  .word 0xc7aa0070
  .word 0x460a0102
  .word 0x460420c2
  .word 0xc78983d4
  .word 0xc7888048
  .word 0x46085818
  .word 0x4603481c
  .word 0xc7878118
  .word 0x46075818
  .word 0x4600181c
  .word 0xc7868050
  .word 0x46065818
  .word 0x4600181c
  .word 0xc7858054
  .word 0x46055818
  .word 0x4600181c
  .word 0xc78283d8
  .word 0x46025818
  .word 0x4600185c
  .word 0x46041802
  .word 0x46045818
  .word 0x4601001c
  .word 0x460aa102
  .word 0x460420c2
  .word 0x46085818
  .word 0x4603485c
  .word 0x46075818
  .word 0x4601185c
  .word 0x46065818
  .word 0x4601185c
  .word 0x46055818
  .word 0x4601185c
  .word 0x46025818
  .word 0x4601189c
  .word 0x46041842
  .word 0x46045818
  .word 0x46020d1c
  .word 0xc7a10050
  .word 0x46000842
  .word 0xe6210000
  .word 0xc7a10054
  .word 0x46000842
  .word 0xe6210004
  .word 0xc7a10058
  .word 0x46000842
  .word 0xe6210008
  .word 0xc7a20060
  .word 0xc6210000
  .word 0x44801800
  .word 0x00000000
  .word 0x46011818
  .word 0x4614105c
  .word 0xe6210000
  .word 0xc7a20064
  .word 0xc6210004
  .word 0x46011818
  .word 0x4614105c
  .word 0xe6210004
  .word 0xc7a20068
  .word 0xc6210008
  .word 0x46011818
  .word 0x4614105c
  .word 0xe6210008
  .word 0xc7a2005c
  .word 0xc7a1006c
  .word 0x4614081a
  .word 0x4600101c
  .word 0xe620000c
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}





























// FUN_002A2ED0


u32 FUN_002a2ed0(u8* param_1,f32* param_2,f32* param_3)
{
    void* curve;
    u16 frame;
    u16 index;
    u8* entry;
    frame = *(u16*)(param_1 + 0x76);
    if (0 < frame)
    {
        goto has_frame;
    }
    return 0;
has_frame:
    if (frame < 2)
    {
        index = *(u16*)(param_1 + 0x74);
        entry = (u8 *)((u32)index * 0x1c);
        entry += (u32)param_1;
        *(RwV3d *)param_2 = *(RwV3d *)(entry + 4);
        index = *(u16*)(param_1 + 0x74);
        entry = (u8 *)((u32)index * 0x1c);
        entry += (u32)param_1;
        *(RwV4d *)param_3 = *(RwV4d *)(entry + 0x10);
        return 0;
    }
    if (frame < 4)
    {
        FUN_002a2b50(param_1, param_2, *(f32*)(param_1 + 0x7c));
    }
    else if ((*(u16*)param_1 & 1) != 0)
    {
        FUN_002a2a20(param_1, param_2, *(f32*)(param_1 + 0x7c));
    }
    else
    {
        curve = *(void* *)(param_1 + 0x98);
        FUN_0048d480((void*)curve, 0xa,
                     *(f32*)(param_1 + 0x7c),
                     (RwV3d *)param_2, ((void*)0));
    }
    FUN_002a2c40(param_1, param_3, *(f32*)(param_1 + 0x7c));
    return 1;
}

// FUN_002A3010


u32 FUN_002a3010(u8* param_2,f32 param_1)
{
    u16 frame;
    u16 counter;
    u32 result;
    f32 value;
    frame = *(u16*)(param_2 + 0x76);
    if (frame < 2)
    {
        *(u32*)(param_2 + 0x7c) = 0;
        return 0;
    }
    value = *(f32*)(param_2 + 0x7c) + param_1;
    if (frame < 3)
    {
        if (!(value < fGpffff82c8))
        {
            value = 0.0f;
            *(u16*)(param_2 + 0x76) = frame - 1;
            *(u16*)(param_2 + 0x74) = *(u16*)(param_2 + 0x74) + 1;
        }
    }
    else if (frame < 4)
    {
        if (!(value < fGpffff805c))
        {
            value = 0.0f;
            *(u16*)(param_2 + 0x76) = frame - 2;
            *(u16*)(param_2 + 0x74) = *(u16*)(param_2 + 0x74) + 2;
        }
    }
    else if (!(value < fGpffff83d0))
    {
        value = value - 1.0f;
        *(u16*)(param_2 + 0x76) = frame - 3;
        *(u16*)(param_2 + 0x74) = *(u16*)(param_2 + 0x74) + 3;
    }
    counter = *(u16*)(param_2 + 0x74);
    if (counter >= 4)
    {
        *(u16*)(param_2 + 0x74) = counter & 3;
    }
    *(f32*)(param_2 + 0x7c) = value;
    result = 1;
    return result;
}













// FUN_002A3110


void FUN_002a3110(u8* param_2,float param_1)
{
    *(f32*)(param_2 + 0x84) = (param_1 * 2.0f * 60.0f) / 2.0f;
    *(u32*)(param_2 + 0x94) = 0x3f000000;
    *(u16*)param_2 = *(u16*)param_2 & 0xfffd;
    *(u16*)param_2 = *(u16*)param_2 | 4;
}

// FUN_002A3160


void FUN_002a3160(u8* param_2,float param_1)
{
    *(f32*)(param_2 + 0x84) = (param_1 * 60.0f) / 2.0f;
    *(u16*)param_2 = *(u16*)param_2 & 0xfffd;
    *(u16*)param_2 = *(u16*)param_2 & 0xfffb;
}
