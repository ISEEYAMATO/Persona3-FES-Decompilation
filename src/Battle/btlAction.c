#include "Battle/battle.h"
#include "Battle/btlAction.h"
#include "Battle/btlMain.h"
#include "Battle/btlOrder.h"
#include "Battle/btlUnit.h"
#include "Battle/btlPacket.h"
#include "Battle/btlFormation.h"
#include "Battle/btlVoice.h"
#include "Graphics/Effect/effMisc.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Kernel/Kwln/kwln.h"
#include "Main/Battle/Data/datCalc.h"
#include "Main/Battle/Data/datPersona.h"
#include "temporary.h"

extern BtlPacket* func_002b7bd0(BtlUnit*, BtlUnit*, u16, f32);
extern u32 func_0027fc80(BtlUnit *);
extern u32 func_00280870(s32, u32, RwV3d *, u32, u32, u32);
extern s64 func_002835e0(BtlUnit *, u16, f32);
extern s64 func_002838d0(BtlUnit *, u32, f32);
extern u16 func_00283a70(BtlUnit *, u32);
extern s64 func_002b7060(u32);
extern s32 func_002b8f90(u32);
extern f32 func_002b9590(BtlUnit *);
extern u64 func_002b9640(u8 *);
extern s32 func_002d1600(BtlTarget *);
extern s32 func_002d4cc0(u16);
extern s32 func_002d4e10(u32, u32);
extern s32 func_002d5bf0(BtlUnit *);
extern s32 func_002d5c70(BtlUnit *);
extern u32 func_002d5dc0(s32 *);
extern s32 func_002d5eb0(BtlAction *);
extern s32 func_002d5f50(BtlAction *);
extern s32 func_002d5fb0(BtlAction *);
extern s32 func_002d6090(BtlAction *);
extern s32 func_002d6130(BtlAction *);
extern s32 func_002d6210(BtlAction *);
extern s32 func_002d6290(BtlAction *);
extern s32 func_002d62d0(BtlAction *);
extern u64 func_002d6370(s16);
extern s32 func_002dc130(BtlAction *);
extern s32 func_002ddc80(u16);
extern s64 func_002f8fd0(BtlUnit *, s16);
extern s64 func_002f9690(BtlUnit *);
extern s32 func_002fcaa0(BtlAction *, u32 *);
extern u32 func_002fd060(BtlAction *);
extern s32 func_002fd160(BtlAction *);
extern s32 func_002fdbb0(BtlAction *, BtlUnit *);
extern s32 func_002fdcb0(BtlUnit *);
extern u32 func_002fddb0(BtlUnit *, RwV3d *);
extern s32 func_002fded0(s16);
extern s64 func_003082f0(DatUnit *, u16);
extern u64 func_00308a50(u16);
extern BtlPacket* func_002d8330(BtlAction*);
extern BtlPacket* btlUnit00286240(BtlUnit*);
extern BtlPacket* btlUnit002860b0(BtlUnit*);
extern BtlPacket* func_002e35d0(u16, u16);
extern BtlPacket* func_002e36f0(void);
extern BtlPacket* func_002e37e0(void);
extern BtlPacket* func_002dd8e0(BtlUnit*);
extern BtlPacket* func_002dd100(u32, u32, u32);
extern BtlPacket* func_002b8900(BtlAction*, u32, u32);
extern BtlPacket* func_002b8b70(BtlUnit*, BtlAction*, BtlAction*, u16);
extern BtlPacket* func_002e3de0(u32, u32);
extern BtlPacket* func_002e3f20(void);
extern BtlPacket* func_002dd690(u16, s8*);
extern BtlPacket* func_002bac00(s32, s8*, u16);
extern BtlPacket* func_002baf90(s32, BtlUnit*, BtlUnit*, u32);
extern BtlPacket* func_002bd480(BtlUnit*, ...);
extern BtlPacket* func_002bd230(BtlUnit*, u32, u32);
extern BtlPacket* btlUnit002843e0(BtlUnit*, u16);
extern BtlPacket* btlUnit00284f50(BtlUnit*, u16, f32, u16);
extern BtlPacket* btlUnit00284c90(BtlUnit*);
extern BtlPacket* btlUnit002857f0(BtlUnit*);
extern BtlPacket* func_002dd5e0(u16);
extern BtlPacket* func_0027f410(u32, BtlAction*);
extern BtlPacket* func_002b7bd0(BtlUnit*, BtlUnit*, u16, f32);
extern BtlPacket* func_0029fa50(u32);
extern BtlPacket* func_002a1080(u32, u16);
extern BtlPacket* func_002a16c0(u32);
extern BtlPacket* func_002a1db0(u32);
extern DatPersonaWork* datPersonaGetByPcId(u16);
extern BtlPacket* func_002dd960(BtlUnit*);
extern BtlPacket* func_002bd590(BtlUnit*, s32);
extern BtlPacket* func_002bd690(BtlUnit*, u16);
extern BtlPacket* func_002bd850(BtlUnit*, s16);
extern BtlPacket* func_002bdbd0(BtlUnit*, BtlUnit*, s32, ...);
extern BtlPacket* func_002d7e20(BtlAction*, BtlAction*, void*, u32, ...);
extern BtlPacket* func_002d8090(BtlAction*);
extern BtlPacket* func_002d7fb0(BtlAction*, u32);
extern BtlPacket* func_002db740(BtlAction*, u16, ...);
BtlPacket* func_002bfb50(void);
BtlPacket* func_002bfae0(void);
BtlPacket* func_002dd1f0(u32 a, u32 b, u32 c);
s32 func_0030c2a0(DatUnit* unit);
void func_00280050(BtlUnit* unit, RwV3d* dst);
s32 func_002d4cc0(u16 unitId);
u64 func_002b9640(u8* data);
BtlPacket* func_002a1db0(u32 a);
extern void* func_0029ec50(u16);
extern BtlPacket* func_002a1280(void*, u32);
extern RwV3d D_006978A0;

extern u32 func_002e4430(BtlAction* action, s32 skillId, u32 param_3);
f32 FUN_002d1ed0(const RwV3d* a, const RwV3d* b);
extern const char D_00693318[];
#pragma alias D_00693318_abs D_00693318
extern const char D_00693318_abs[];

typedef struct BtlEnemyMoveSpeed
{
    u16 speedIndex;
    s16 field_02;
} BtlEnemyMoveSpeed;

typedef struct BtlEnemyRecord
{
    u8 pad_00[0x22];
    s16 field_22;
    BtlEnemyMoveSpeed moveSpeed[2];
    u8 pad_2c[0xbc];
} BtlEnemyRecord;


#define BTLACTION_IDMAX 0xFFFFFFF
/* Retail action scratch remains intentionally opaque until packet-result layouts are named. */
#define ACTION_U8(action, offset) (*(u8*)((u8*)(action) + (offset)))
#define ACTION_U16(action, offset) (*(u16*)((u8*)(action) + (offset)))
#define ACTION_S16(action, offset) (*(s16*)((u8*)(action) + (offset)))
#define ACTION_S32(action, offset) (*(s32*)((u8*)(action) + (offset)))
#define ACTION_U64(action, offset) (*(u64*)((u8*)(action) + (offset)))
#define ACTION_U32(action, offset) (*(u32*)((u8*)(action) + (offset)))
#define BATTLE_U16(offset) (*(u16*)((u8*)gBtl + (offset)))
typedef struct BtlActionTargetEntry
{
    u32 statusFlags;
    u8 pad_04[0x0e];
    u16 flags;
    u8 pad_14[8];
} BtlActionTargetEntry;

typedef struct BtlActionTargetView
{
    u8 pad_00[0xe8];
    BtlActionTargetEntry entries[12];
} BtlActionTargetView;

#pragma alias FUN_002819d0_btlAction FUN_002819d0
extern BtlPacket* FUN_002819d0_btlAction(BtlUnit*, const RwV3d*, f32, u32);
#pragma alias FUN_00282d40_btlAction FUN_00282d40
extern void FUN_00282d40_btlAction(f32, BtlUnit*, s16, u32, s8);
#pragma alias FUN_002835e0_btlAction FUN_002835e0
extern s16 FUN_002835e0_btlAction(f32, BtlUnit*, u16);
#pragma alias FUN_002838d0_btlAction FUN_002838d0
extern u16 FUN_002838d0_btlAction(f32, BtlUnit*, u16);
/* Packet constructors not yet assigned public subsystem names. */
BtlPacket* FUN_002819d0();
BtlPacket* FUN_00282130();
BtlPacket* FUN_002822b0();
BtlPacket* FUN_00282650();
BtlPacket* FUN_002843e0(BtlUnit* unit, u16 id);
void FUN_00175130(s16 id);
#pragma alias FUN_00175130_btlAction FUN_00175130
extern void FUN_00175130_btlAction(u16 id);
#pragma alias btlUnitCreateAnimPacketSignedId btlUnitCreateAnimPacket
extern BtlPacket* btlUnitCreateAnimPacketSignedId(BtlUnit* unit, s16 id, u16 blendFrameCount, f32 speed, u16 mode);
s32 FUN_002fcf50(BtlAction* action);
BtlPacket* FUN_00284200();
BtlPacket* FUN_00284c90();
BtlPacket* FUN_00285d30();
BtlPacket* FUN_00285690();
BtlPacket* FUN_002864a0();
BtlPacket* FUN_002886e0();
BtlPacket* FUN_00288950();
BtlPacket* FUN_002bac00();
BtlPacket* FUN_002bd230(BtlUnit* unit, u32 a, u32 b);
BtlPacket* FUN_002bd480(BtlUnit* unit);
BtlPacket* FUN_002bd590(BtlUnit* unit, u16 id);
BtlPacket* FUN_002bd690(BtlUnit* unit, u16 id);
u32 FUN_002dbb00(BtlUnit* unit);
void FUN_002e2d00(u16 result);
BtlPacket* FUN_002bd850(BtlUnit* unit, s16 id);
BtlPacket* func_002bd780(BtlUnit* unit, u16 id);
BtlPacket* FUN_002bdbd0(BtlUnit* source, BtlUnit* target, s32 id, u32 a, u32 b, u32 c, u32 d, void* result);
BtlPacket* FUN_002baf90(u32 id, BtlUnit* source, BtlUnit* target, u32 a, u32 b);
BtlPacket* FUN_002bddd0(void);
BtlPacket* FUN_002dd100(u32 a, u32 b, u32 c);
BtlPacket* FUN_002d7e20(BtlAction* action, BtlAction* target, void* result, u32 a, u32 b);
extern f32 D_00693300[];
extern s16 D_00690E20[];
s16 FUN_002dc670(BtlAction* action);
u32 FUN_002dc130(BtlAction* action);
BtlPacket* FUN_002dd5e0();
BtlPacket* FUN_002e2be0();
BtlPacket* func_002e3fe0(u16 voiceId);
u32 FUN_002e4310();
BtlPacket* FUN_0027dc00();
BtlPacket* FUN_0029fa50(u32 param_1);
BtlPacket* FUN_002a1080(s32 param_1, s16 param_2);
BtlPacket* FUN_002a16c0(s32 param_1);
BtlPacket* FUN_002d7fb0(BtlAction* action, u32 arg);
BtlPacket* FUN_002e40d0();
BtlPacket* FUN_002e41d0();
u32 FUN_002e43a0();
BtlAction* FUN_0029ad20();
BtlPacket* FUN_002bc950(u32 a, u32 b, u32 c);
BtlPacket* FUN_002e3c80(void);
BtlPacket* FUN_002d8090(BtlAction* action);
BtlPacket* FUN_002dd690(u32 a, u32 b);
BtlPacket* FUN_002a1db0(s32 param_1);
BtlPacket* FUN_002dd4a0(u16 param_1, u16 param_2);
void FUN_002b9030(u32 param_1);
BtlPacket* FUN_002e38a0(u16 a);
BtlPacket* FUN_002b8f40(u32 a);
BtlPacket* FUN_002b8d60(u32 a, u32 b);
BtlPacket* FUN_002a3b40(BtlAction* action, u32 a);
BtlPacket* FUN_002bc7e0();
extern u16 DAT_007e094c;
extern u16 DAT_007e094e;
extern u16 DAT_007e0956;
extern u16 DAT_007e0958;
BtlPacket* func_002e3b50(u32 a, u32 b, u32 c);
BtlPacket* func_002e3990(void);
BtlPacket* func_002e3d10(void);
BtlPacket* func_002e3a90(void);
void func_002b9600(void* values);
u64 func_002b9640(u8* data);
void func_002bb6f0(u16 id, void* data);
u32 FUN_0029a380(BtlAction* action);
void FUN_001fef90(u16 charId);
u32 FUN_001ff100(void);
u32 FUN_001ff120(void);
void FUN_001ff140(void);
void FUN_001ff370(void);
u32 func_002d1a70(void);
extern u8* iGpffffb708;
extern BtlCommandRecord* iGpffffb710;
extern BtlEnemyRecord* iGpffffb728;
extern f32 uGpffff8088;
extern f32 uGpffff8390;
extern f32 uGpffff83a4;
extern RwV3d D_00697880;
extern f32 DAT_007cb050[];

u32 FUN_002d5bf0(BtlUnit* unit);
u32 FUN_002d6370(s16 commandId);
void FUN_002fd8a0(BtlAction* action);
u8 FUN_003093a0(DatUnit* unit);
s32 FUN_003082f0(DatUnit* unit, u32 id);
void FUN_004c6c60(RwV3d* dst, const RwV3d* src, const RwMatrix* matrix);

void FUN_002899e0(BtlAction* action);
void FUN_00289b50(BtlAction* action);
u32 FUN_00289f40(BtlAction* action);
u16 FUN_0028a0f0(BtlAction* action);
u32 FUN_0028a200(BtlAction* action);
u32 FUN_0028a3e0(BtlAction* action);
void FUN_0028a540(BtlAction* action, u32 id, u16* out1, u16* out2, u16* out3, u16* out4);


void btlActionInitStateNon(BtlAction* action);
void btlActionUpdateStateNon(BtlAction* action);
void btlActionInitStateStandBy(BtlAction* action);
void btlActionUpdateStateStandBy(BtlAction* action);
void btlActionInitStateStart(BtlAction* action);
void btlActionUpdateStateStart(BtlAction* action);
void btlActionInitStateStartHome(BtlAction* action);
void btlActionUpdateStateStartHome(BtlAction* action);
void btlActionInitStateChangeFormation(BtlAction* action);
void btlActionUpdateStateChangeFormation(BtlAction* action);
void btlActionInitStateCommand(BtlAction* action);
void btlActionUpdateStateCommand(BtlAction* action);
void btlActionInitStateTarget(BtlAction* action);
void btlActionUpdateStateTarget(BtlAction* action);
void btlActionInitStateAnalyze(BtlAction* action);
void btlActionUpdateStateAnalyze(BtlAction* action);
void btlActionInitStateAI(BtlAction* action);
void btlActionUpdateStateAI(BtlAction* action);
void btlActionInitStateAuto(BtlAction* action);
void btlActionUpdateStateAuto(BtlAction* action);
void btlActionInitStateSupport(BtlAction* action);
void btlActionUpdateStateSupport(BtlAction* action);
void btlActionInitStateBad(BtlAction* action);
void btlActionUpdateStateBad(BtlAction* action);
void btlActionInitStateReady(BtlAction* action);
void btlActionUpdateStateReady(BtlAction* action);
void btlActionInitStateMoveTarget(BtlAction* action);
void btlActionUpdateStateMoveTarget(BtlAction* action);
void btlActionInitStateMoveHome(BtlAction* action);
void btlActionUpdateStateMoveHome(BtlAction* action);
void btlActionInitStateAttack(BtlAction* action);
void btlActionUpdateStateAttack(BtlAction* action);
void btlActionInitStateSkill(BtlAction* action);
void btlActionUpdateStateSkill(BtlAction* action);
void btlActionInitStateReinforce(BtlAction* action);
void btlActionUpdateStateReinforce(BtlAction* action);
void btlActionInitStateSummon(BtlAction* action);
void btlActionUpdateStateSummon(BtlAction* action);
void btlActionInitStateAssist(BtlAction* action);
void btlActionUpdateStateAssist(BtlAction* action);
void btlActionInitStateEvent(BtlAction* action);
void btlActionUpdateStateEvent(BtlAction* action);
void btlActionInitStateError(BtlAction* action);
void btlActionUpdateStateError(BtlAction* action);
void btlActionInitStateEndure(BtlAction* action);
void btlActionUpdateStateEndure(BtlAction* action);
void btlActionInitStateWait(BtlAction* action);
void btlActionUpdateStateWait(BtlAction* action);
void btlActionInitStatePersona(BtlAction* action);
void btlActionUpdateStatePersona(BtlAction* action);
void btlActionInitStateBadDamage(BtlAction* action);
void btlActionUpdateStateBadDamage(BtlAction* action);
void btlActionInitStateEscapeMes(BtlAction* action);
void btlActionUpdateStateEscapeMes(BtlAction* action);
void btlActionInitStateEscape(BtlAction* action);
void btlActionUpdateStateEscape(BtlAction* action);
void btlActionInitStateRoundUpMes(BtlAction* action);
void btlActionUpdateStateRoundUpMes(BtlAction* action);
void btlActionInitStateRoundUp(BtlAction* action);
void btlActionUpdateStateRoundUp(BtlAction* action);
void btlActionInitStatePacket(BtlAction* action);
void btlActionUpdateStatePacket(BtlAction* action);
void btlActionInitStateEnd(BtlAction* action);
void btlActionUpdateStateEnd(BtlAction* action);
void btlActionInitStateEndHome(BtlAction* action);
void btlActionUpdateStateEndHome(BtlAction* action);
void btlActionInitStateDead(BtlAction* action);
void btlActionUpdateStateDead(BtlAction* action);
void btlActionInitStateExit(BtlAction* action);
void btlActionUpdateStateExit(BtlAction* action);
void btlActionInitStateTest(BtlAction* action);
void btlActionUpdateStateTest(BtlAction* action);

void btlActionSetStateWithDelay(BtlAction* action, u16 btlState, u16 delay);
void btlAction00299e50(BtlAction* action);
void FUN_002dc5e0(BtlAction* action);
void FUN_002a3a90(int param_1);
void FUN_001fdd40();
u16 FUN_002bff60(BtlAction* action, BtlTarget* target, u16 commandId, u32 param_4);
u32 FUN_002c0970(BtlTarget* target);
u32 FUN_002e4330(BtlAction* action);
u32 FUN_002e43a0();
BtlAction* FUN_002c0880(BtlTarget* target);
void FUN_002c08a0(BtlTarget* target, BtlAction* action);
u32 FUN_002c08c0(BtlTarget* target);
u32 FUN_002c7250(BtlTarget* target);
void FUN_002c70d0(BtlAction* action, BtlTarget* target);
u32 FUN_002c7280(BtlTarget* target);
BtlPacket* FUN_002db740(BtlAction* action, u16 param_2, u32 param_3, u32 param_4, u32 param_5);
u16 FUN_00308930(DatUnit* unit);
u32 FUN_002b8f90(u16 param_1);
BtlPacket* FUN_002d8330(BtlAction* action);
void func_0029ea60(u16 param_1, u32* param_2, u32* param_3);
BtlPacket* func_0029f4b0(u32 param_1, u32 param_2, u32 param_3);
void* func_0029ec00(u16 param_1);
void func_0029ec80(u16 param_1, u32* param_2, u32* param_3);
BtlPacket* func_002a0050(void* param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5);
void* func_0029ec50(u16 param_1);
BtlPacket* func_002a1280(void* param_1, u32 param_2);
BtlPacket* func_002a1b00(BtlAction* action, u16 param_2, u32 param_3);
void func_002bb6f0(u16 param_1, void* param_2);
BtlPacket* func_0027f2f0(void);
extern u64 FUN_0027f940();
extern void FUN_002d3e00(BtlUnit* unit, RwV3d* outPos);
extern void FUN_002b77c0(BtlUnit* unit);
extern void FUN_00287490(BtlUnit* unit);
extern void bpRoot001fe270(void* param);
extern void bpRoot001fe2e0(void* param);
extern u32 FUN_0016f190(u32 id);
extern void FUN_002ddbe0(void);
extern BtlAction* btlActionFindByUnit(BtlUnit* unit);
extern u16 func_00170760(s16 pcId, s16 index);
extern void func_00170860(s16 pcId, s16 index, u16 value);
BtlPacket* FUN_0027dc80();
extern f32 FUN_004c6ac0(RwV3d* vec);
extern f32 FUN_004c69f0(RwV3d* dst, const RwV3d* src);
BtlPacket* func_002bb2f0(u32 param_1, BtlUnit* unit, u32 param_3, u64 param_4, u16 param_5);
u32 FUN_002fdb70(void);
u32 FUN_002fdb90(void);
u32 FUN_002fde40(BtlAction* action, f32* position);
extern s32 FUN_002d63b0(BtlUnit* unit, s32 param_2, s32 param_3);
extern s64 func_00284040(BtlUnit* a, BtlUnit* b, s16 c, s32 d);
void* FUN_00289650(u32 param_1, u16 param_2, u32 param_3);
BtlPacket* btlSoundCreateSkillSEPacket(u16 skillId, u16 flags);
BtlPacket* btlUnit00285d30(BtlUnit* unit, u32 targetCol, s16 param_3, s16 param_4, u8 mode, u8 flags);

// 12 bytes
typedef struct
{
    void (*init)(BtlAction* action);   // 0x00
    void (*update)(BtlAction* action); // 0x04
    const char* name;                  // 0x08
} BtlActionStateEntry;

// 00693410
static const BtlActionStateEntry sActionStateTable[] =
{
    {btlActionInitStateNon, btlActionUpdateStateNon, "NON"},
    {btlActionInitStateStandBy, btlActionUpdateStateStandBy, "STANDBY"},
    {btlActionInitStateStart, btlActionUpdateStateStart, "START"},
    {btlActionInitStateStartHome, btlActionUpdateStateStartHome, "START HOME"},
    {btlActionInitStateChangeFormation, btlActionUpdateStateChangeFormation, "CHANGE FORMATION"},
    {btlActionInitStateCommand, btlActionUpdateStateCommand, "COMMAND"},
    {btlActionInitStateTarget, btlActionUpdateStateTarget, "TARGET"},
    {btlActionInitStateAnalyze, btlActionUpdateStateAnalyze, "ANALYZE"},
    {btlActionInitStateAI, btlActionUpdateStateAI, "AI"},
    {btlActionInitStateAuto, btlActionUpdateStateAuto, "AUTO"},
    {btlActionInitStateSupport, btlActionUpdateStateSupport, "SUPPORT"},
    {btlActionInitStateBad, btlActionUpdateStateBad, "BAD"},
    {btlActionInitStateReady, btlActionUpdateStateReady, "READY"},
    {btlActionInitStateMoveTarget, btlActionUpdateStateMoveTarget, "MOVE TARGET"},
    {btlActionInitStateMoveHome, btlActionUpdateStateMoveHome, "MOVE HOME"},
    {btlActionInitStateAttack, btlActionUpdateStateAttack, "ATTACK"},
    {btlActionInitStateSkill, btlActionUpdateStateSkill, "SKILL"},
    {btlActionInitStateReinforce, btlActionUpdateStateReinforce, "REINFORCE"},
    {btlActionInitStateSummon, btlActionUpdateStateSummon, "SUMMON"},
    {btlActionInitStateAssist, btlActionUpdateStateAssist, "ASSIST"},
    {btlActionInitStateEvent, btlActionUpdateStateEvent, "EVENT"},
    {btlActionInitStateError, btlActionUpdateStateError, "ERROR"},
    {btlActionInitStateEndure, btlActionUpdateStateEndure, "ENDURE"},
    {btlActionInitStateWait, btlActionUpdateStateWait, "WAIT"},
    {btlActionInitStatePersona, btlActionUpdateStatePersona, "PERSONA"},
    {btlActionInitStateBadDamage, btlActionUpdateStateBadDamage, "BAD DAMAGE"},
    {btlActionInitStateEscapeMes, btlActionUpdateStateEscapeMes, "ESCAPE MES"},
    {btlActionInitStateEscape, btlActionUpdateStateEscape, "ESCAPE"},
    {btlActionInitStateRoundUpMes, btlActionUpdateStateRoundUpMes, "ROUNDUP MES"},
    {btlActionInitStateRoundUp, btlActionUpdateStateRoundUp, "ROUNDUP"},
    {btlActionInitStatePacket, btlActionUpdateStatePacket, "PACKET"},
    {btlActionInitStateEnd, btlActionUpdateStateEnd, "END"},
    {btlActionInitStateEndHome, btlActionUpdateStateEndHome, "END HOME"},
    {btlActionInitStateDead, btlActionUpdateStateDead, "DEAD"},
    {btlActionInitStateExit, btlActionUpdateStateExit, "EXIT"},
    {btlActionInitStateTest, btlActionUpdateStateTest, "TEST"}
};

static u32 sNextId = 1; // 007cc530

// FUN_00289860
u32 btlActionIdleWeaponAnim(BtlAction* action)
{
    BtlPacket* animPacket;

    if (action->idleWeaponAnimTimer < 0)
    {
        action->idleWeaponAnimTimer = (effMiscRand(NULL) % 240) + 120; // [120;359]
    }

    if (action->idleWeaponAnimTimer == 0)
    {
        if (!btlUnit00282c60(action->unit))
        {
            return false;
        }
        if (datCalcChkBadStatus(action->unit->datUnit, UNIT_BADSTATUS_DOWN))
        {
            return false;
        }
        if (datCalcChkBadStatus(action->unit->datUnit, 0xFFFFF))
        {
            return false;
        }
        if (datCalcIsLowHp(action->unit->datUnit) || datCalcIsDead(action->unit->datUnit, 0))
        {
            return false;
        }

        if (btlUnitGetAnimFrame(action->unit) < 4)
        {
            animPacket = btlUnitCreateAnimPacket(action->unit,
                                                 BTLUNIT_ANIM_IDLEWEAPON,
                                                 4,
                                                 1.0f,
                                                 BTLUNIT_ANIM_MODE_ONCE);
            btlPacketRegister(animPacket, BTLPACKET_TYPE_1);

            action->idleWeaponAnimTimer = -1;
        }

        return true;
    }
    else
    {
        action->idleWeaponAnimTimer--;
    }

    return false;
}

// FUN_002899e0
void FUN_002899e0(BtlAction* action)
{
    BtlAction* current;
    BtlUnit* unit;
    RwV3d target;

    for (current = gBtl->actionList.tail; current != NULL; current = current->prev)
    {
        if ((current->unk_1a & 1) == 0)
        {
            continue;
        }

        unit = current->unit;
        if ((unit->flags3 & BTLUNIT_FLAG3_UNK08) == 0 ||
            btlUnit00282c60(unit) == 0 ||
            btlUnitIsMoving(unit) != 0 ||
            datCalcChkBadStatus(unit->datUnit, 0x100000) != 0 ||
            datCalcChkBadStatus(unit->datUnit, 0xfffff) != 0 ||
            datCalcIsLowHp(unit->datUnit) != 0 ||
            datCalcIsDead(unit->datUnit, 0) != 0)
        {
            continue;
        }

        switch (current->currState)
        {
            case BTLACTION_STATE_STANDBY:
            case BTLACTION_STATE_COMMAND:
            case BTLACTION_STATE_TARGET:
                break;
            default:
                continue;
        }
        if (action == current)
        {
            continue;
        }

        btlUnit0027f7c0(unit, NULL, NULL, &target);
        btlPacketRegister(btlUnitCreateLookAtPacket(unit, &target, 0), BTLPACKET_TYPE_1);
    }
}

// FUN_00289b50
asm void FUN_00289b50(BtlAction* action)
{
  .set noreorder
  .word 0x27bdff20
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080982d
  .word 0x8f83b6fc
  .word 0x8c71014c
  .word 0x100000e3
  .word 0x00000000
  .word 0x9623001a
  .word 0x30630001
  .word 0x106000de
  .word 0x00000000
  .word 0x8e300030
  .word 0x920300a2
  .word 0x10600006
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0bf628
  .word 0x00000000
  .word 0x100000d5
  .word 0x00000000
  .word 0x8e03009c
  .word 0x30630008
  .word 0x106000d1
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0a0b18
  .word 0x00000000
  .word 0x104000cc
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0a049c
  .word 0x00000000
  .word 0x144000c7
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x3c050010
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x144000c1
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x3c02000f
  .word 0x3445ffff
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x144000ba
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x0c0c2d78
  .word 0x00000000
  .word 0x144000b5
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x144000af
  .word 0x00000000
  .word 0x9624000c
  .word 0x24030006
  .word 0x10830009
  .word 0x00000000
  .word 0x24030005
  .word 0x10830006
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x100000a3
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a2618
  .word 0x00000000
  .word 0x1440009e
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x8c64000c
  .word 0x3c030001
  .word 0x00831824
  .word 0x10600098
  .word 0x00000000
  .word 0x96230036
  .word 0x18600005
  .word 0x00000000
  .word 0x2463ffff
  .word 0xa6230036
  .word 0x10000091
  .word 0x00000000
  .word 0x1271008f
  .word 0x00000000
  .word 0x960400a4
  .word 0x24030004
  .word 0x1083008b
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a500c0
  .word 0x0000302d
  .word 0x27a700b0
  .word 0x0c09fdf0
  .word 0x00000000
  .word 0xc7a100c0
  .word 0xc7a000b0
  .word 0x46000801
  .word 0xe7a000a0
  .word 0xc7a100c4
  .word 0xc7a000b4
  .word 0x46000801
  .word 0xe7a000a4
  .word 0xc7a100c8
  .word 0xc7a000b8
  .word 0x46000801
  .word 0xe7a000a8
  .word 0x27a400a0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x46000506
  .word 0x96220034
  .word 0x24420001
  .word 0xa6220034
  .word 0x3042ffff
  .word 0x30420001
  .word 0x1040000e
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0d600c
  .word 0x00000000
  .word 0x3c024120
  .word 0x44821800
  .word 0x3c0240a0
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x46001b1c
  .word 0x1000000d
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0d600c
  .word 0x00000000
  .word 0x3c024120
  .word 0x44821800
  .word 0x3c0240a0
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600181c
  .word 0x46000307
  .word 0x27a40060
  .word 0x3c050069
  .word 0x24a57880
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a400a0
  .word 0x0080282d
  .word 0x27a60060
  .word 0x0c131b18
  .word 0x00000000
  .word 0xc7a000a0
  .word 0x461400c2
  .word 0xe7a300a0
  .word 0xc7a000a4
  .word 0x46140082
  .word 0xe7a200a4
  .word 0xc7a000a8
  .word 0x46140042
  .word 0xe7a100a8
  .word 0xc7a000b0
  .word 0x46030000
  .word 0xe7a000d0
  .word 0xc7a000b4
  .word 0x46020000
  .word 0xe7a000d4
  .word 0xc7a000b8
  .word 0x46010000
  .word 0xe7a000d8
  .word 0x960300a4
  .word 0x24020002
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020007
  .word 0x10620009
  .word 0x00000000
  .word 0x24020005
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0xc78c8390
  .word 0x10000008
  .word 0x00000000
  .word 0xc78c8088
  .word 0x10000005
  .word 0x00000000
  .word 0xc78c83a4
  .word 0x10000002
  .word 0x00000000
  .word 0xc78c8088
  .word 0x0200202d
  .word 0x27a500d0
  .word 0x24060008
  .word 0x0c0a0674
  .word 0x00000000
  .word 0x0040902d
  .word 0xde230000
  .word 0xfc430060
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a500b0
  .word 0x0000302d
  .word 0x0c0a08ac
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xde230000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x240400b4
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x2443003c
  .word 0xa6230036
  .word 0x8e3104a8
  .word 0x1620ff1d
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd00e0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00289f40
u32 FUN_00289f40(BtlAction* action)
{
    u16 specificId;
    u16 unitId;
    u16 validationResult;
    u8 allowed;

    specificId = action->target.specificId;
    validationResult = FUN_002bff60(action, NULL, specificId, 0);
    unitId = action->unit->datUnit->id;
    if (validationResult == 0)
    {
        allowed = iGpffffb708[(u32)specificId * 0x2c];
        if ((allowed & 2) != 0)
        {
            switch (action->unit->genus)
            {
            case 1:
                if (iGpffffb728[unitId].field_22 == 1)
                {
                    return false;
                }
                break;
            default:
                break;
            }
            return true;
        }

        if (FUN_002d6370(specificId) != 0)
        {
            if ((iGpffffb710[specificId].flags & 1) == 0)
            {
                return false;
            }
            switch (action->unit->genus)
            {
            case 0:
            default:
                break;
            case 1:
                if (iGpffffb728[unitId].moveSpeed[0].field_02 == 1)
                {
                    return false;
                }
                break;
            }
            return true;
        }
    }

    return false;
}

// FUN_0028a0f0
u16 FUN_0028a0f0(BtlAction* action)
{
    u16 unitId = action->unit->datUnit->id;
    u8 genus = action->unit->genus;
    u8 weaponType;

    if (genus == 1)
    {
        goto player_unit;
    }
    switch (genus)
    {
    case 0:
        goto enemy_unit;
    default:
        goto no_restriction;
    }

enemy_unit:
    if (unitId == 2 || unitId == 3 || FUN_002d5bf0(action->unit) != 0)
    {
        return 1;
    }
    weaponType = (u8)datCalcGetHeldWeaponType(action->unit->datUnit);
    if (unitId == 1 && (weaponType == 6 || weaponType == 7))
    {
        return 1;
    }
    goto no_restriction;

player_unit:
    if (iGpffffb728[unitId].field_22 == 1)
    {
        return 1;
    }

no_restriction:
    return 0;
}

// FUN_0028a200
u32 FUN_0028a200(BtlAction* action)
{
    BtlAction* root = gBtl->actionList.head;
    BtlAction* current;
    BtlUnit* unit;
    u16 enemyCount;

    if (datCalcIsDead(root->unit->datUnit, 0) != 0 ||
        datCalcChkBadStatus(root->unit->datUnit, 0x100261) != 0)
    {
        return false;
    }
    if (action->unit->genus == 1 &&
        datCalcIsDead(action->unit->datUnit, 0) != 0)
    {
        return false;
    }

    ACTION_U16(gBtl, 0xb98) = 0;
    enemyCount = 0;
    for (current = gBtl->actionList.tail; current != NULL; current = current->prev)
    {
        if ((current->unk_1a & 1) == 0)
        {
            continue;
        }

        unit = current->unit;
        if ((unit->flags3 & BTLUNIT_FLAG3_UNK08) == 0 ||
            datCalcIsDead(unit->datUnit, 0) != 0)
        {
            continue;
        }

        if (unit->genus == 1)
        {
            if (datCalcChkBadStatus(unit->datUnit, 0x100000) == 0)
            {
                return false;
            }
            enemyCount++;
        }
        else if (datCalcChkBadStatus(unit->datUnit, 0x100261) == 0 && root != current)
        {
            *(u32*)((u8*)gBtl + ACTION_U16(gBtl, 0xb98) * 4 + 0xb88) = (u32)current;
            ACTION_U16(gBtl, 0xb98)++;
        }
    }

    if (enemyCount == 0)
    {
        return false;
    }
    return ACTION_U16(gBtl, 0xb98) >= 1;
}

/* W306: opt_loop_invariants on is required for FUN_0028a3e0 (with nd66, without nd66 -> nd0); measured against the fresh W306 baseline. */
#pragma opt_loop_invariants on
// FUN_0028a3e0
u32 FUN_0028a3e0(BtlAction* action)
{
    switch (action->unit->genus)
    {
    case 0:
    {
        BtlAction* target;
        s32 targetedCount;
        u16 i;
        u16 j;
        s32 count;

        for (i = 0, targetedCount = action->target.targetedCount; i < targetedCount; i++)
        {
            target = action->target.targetedActions[i];
            count = ACTION_U8(target, 0xc8);
            for (j = 0; j < count; j++)
            {
                if (((BtlActionTargetView*)target)->entries[j].statusFlags & 0x100000)
                {
                    return true;
                }
            }
        }
        break;
    }
    case 1:
    {
        BtlAction* target;
        u16 i;
        u16 j;
        s32 count;
        s32 targetedCount;

        i = 0;
        targetedCount = action->target.targetedCount;
        for (; i < targetedCount; i++)
        {
            target = action->target.targetedActions[i];
            count = ACTION_U8(target, 0xc8);
            for (j = 0; j < count; j++)
            {
                if (((BtlActionTargetView*)target)->entries[j].flags & 4)
                {
                    return true;
                }
            }
        }
        break;
    }
    default:
        break;
    }

    return false;
}
#pragma opt_loop_invariants reset

// FUN_0028a540
void FUN_0028a540(BtlAction* action, u32 id, u16* out1, u16* out2, u16* out3, u16* out4)
{
    u16 itemId = (u16)id;
    s16 type;
    u8 variant;
    BtlUnit* unit;

    *out1 = 0;
    *out2 = 1;
    *out3 = 7;
    *out4 = 9;

    if ((iGpffffb708[(u32)itemId * 0x2c] & 2) == 0)
    {
        return;
    }

    unit = action->unit;
    if (unit->genus == 0 &&
        (unit->datUnit->id == 3 || FUN_002d5bf0(unit) != 0))
    {
        variant = FUN_003093a0(unit->datUnit);
        switch (variant)
        {
        case 2:
            *out1 = 0xf;
            *out2 = 0x12;
            *out3 = 0x15;
            *out4 = 0x18;
            break;
        case 3:
            *out1 = 0x10;
            *out2 = 0x13;
            *out3 = 0x16;
            *out4 = 0x19;
            break;
        case 1:
        default:
            *out1 = 0xe;
            *out2 = 0x11;
            *out3 = 0x14;
            *out4 = 0x17;
            break;
        }
        return;
    }

    type = (s16)FUN_003082f0(unit->datUnit, (u32)id);
    switch (type)
    {
    case 0:
    case 3:
        *out1 = 2;
        *out2 = 3;
        *out3 = 6;
        *out4 = 8;
        break;
    case 2:
    case 6:
        *out1 = 4;
        *out2 = 5;
        *out3 = 7;
        *out4 = 9;
        break;
    case 1:
    case 4:
    case 5:
    default:
        *out1 = 0;
        *out2 = 1;
        *out3 = 7;
        *out4 = 9;
        break;
    }
}

// FUN_0028a780
void btlAction0028a780(BtlAction* action)
{
    BtlAction* current;
    BtlPacket* packet;

    if ((gBtl->flags & 0x400000) == 0)
    {
        return;
    }
    if (BATTLE_U16(0x18) & 0x20)
    {
        packet = btlUnitCreateLookAtDeactivatePacket(NULL, 3);
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
    }
    if (BATTLE_U16(0x18) & 2)
    {
        packet = btlFormation002b8d60(3, 0xfff);
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_0);
    }
    if (BATTLE_U16(0x18) & 1)
    {
        for (current = gBtl->actionList.tail; current != NULL; current = current->prev)
        {
            if ((current->unk_1a & 1) && FUN_0030b5a0(current->unit->datUnit, 0) == 0)
            {
                packet = FUN_002843e0(current->unit, 0);
                packet->actionUID = action->uid;
                btlPacketRegister(packet, BTLPACKET_TYPE_1);
            }
        }
    }
    if (BATTLE_U16(0x18) & 0x10)
    {
        packet = FUN_002a1db0(0);
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
    }
    if (BATTLE_U16(0x18) & 8)
    {
        packet = FUN_002bc7e0(8);
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
    }
    if (BATTLE_U16(0x18) & 4)
    {
        packet = btlCameraCreateSetStatePacket(action, 0x1f);
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_0);
    }
    BATTLE_U16(0x18) = 0;
    gBtl->flags &= ~0x400000;
}

// FUN_0028a990
void btlActionInitStateNon(BtlAction* action)
{
    // nothing
}
// FUN_0028a9a0
void btlActionUpdateStateNon(BtlAction* action)
{
    // nothing
}

// FUN_0028a9b0
void btlActionInitStateStandBy(BtlAction* action)
{
    // nothing
}
// FUN_0028a9c0
void btlActionUpdateStateStandBy(BtlAction* action)
{
    BtlUnit* unit;

    unit = action->unit;

    if (unit->flags3 & BTLUNIT_FLAG3_ENDURE)
    {
        btlActionSetState(action, BTLACTION_STATE_ENDURE);
        return;
    }

    if (unit->flags3 & BTLUNIT_FLAG3_DEAD)
    {
        btlActionSetState(action, BTLACTION_STATE_DEAD);
    }
}

/* W373 pragma sweep nd/obj: base 1392/2044; singles LI=1392/2044 CS=1377/2060 LT=1339/1984 PR=1392/2044 SR=1392/2044 DA=1392/2044. */
/* Pair nd/obj: LI+CS=1377/2060 LI+LT=1339/1984 LI+PR=1392/2044 LI+SR=1392/2044 LI+DA=1392/2044 CS+LT=1334/2000 CS+PR=1377/2060 CS+SR=1377/2060 CS+DA=1377/2060 LT+PR=1339/1984 LT+SR=1339/1984 LT+DA=1339/1984 PR+SR=1392/2044 PR+DA=1392/2044 SR+DA=1392/2044; retain CS+LT. */
#pragma opt_common_subs off
#pragma opt_lifetimes on
/* W415 negatives: restoring the three missing calls matched the census but measured 2068/2064; retained source stays within the retail window. */
// FUN_0028aa20
asm void btlActionInitStateStart(BtlAction* action)
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
  .word 0x94820018
  .word 0x30428000
  .word 0x10400006
  .word 0x00000000
  .word 0x2405001f
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x100001e8
  .word 0x00000000
  .word 0x268400c8
  .word 0x0c0b5780
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b90b8
  .word 0x00000000
  .word 0x1040000c
  .word 0x00000000
  .word 0x3c02002e
  .word 0x24424310
  .word 0xae8204a0
  .word 0x24020002
  .word 0xa682049c
  .word 0x0280202d
  .word 0x24050014
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x100001d5
  .word 0x00000000
  .word 0x8e820030
  .word 0x904200a2
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000001c
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x84430a38
  .word 0x2402ffff
  .word 0x10620016
  .word 0x00000000
  .word 0x24040002
  .word 0x3c050008
  .word 0x0c0b5384
  .word 0x00000000
  .word 0x3044ffff
  .word 0x8f83b6fc
  .word 0x84620a3a
  .word 0x00021043
  .word 0x0044102b
  .word 0x1440000b
  .word 0x00000000
  .word 0x84700a38
  .word 0x0c0adc18
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x12020004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x1040000f
  .word 0x00000000
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x3c050018
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050004
  .word 0x24060001
  .word 0x0c0a676c
  .word 0x00000000
  .word 0x100001a3
  .word 0x00000000
  .word 0x24100001
  .word 0x8f82b6fc
  .word 0x8c43000c
  .word 0x3c020008
  .word 0x00621024
  .word 0x10400002
  .word 0x00000000
  .word 0x0000802d
  .word 0x0c07fbb0
  .word 0x00000000
  .word 0x1440000c
  .word 0x00000000
  .word 0x0c0b469c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430007
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x34634000
  .word 0xac83000c
  .word 0x10000008
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x2402bfff
  .word 0x00621024
  .word 0xac82000c
  .word 0x0c0b4684
  .word 0x00000000
  .word 0x92830028
  .word 0x18600018
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x8c630010
  .word 0x30630020
  .word 0x14600019
  .word 0x00000000
  .word 0x8e820030
  .word 0x904200a2
  .word 0x0002202b
  .word 0x0c07fbcc
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050009
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x96830018
  .word 0x34630400
  .word 0xa6830018
  .word 0x9683001a
  .word 0x3063ffbf
  .word 0xa683001a
  .word 0x92830028
  .word 0x1460000b
  .word 0x00000000
  .word 0x92830029
  .word 0x14600008
  .word 0x00000000
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x0c0c0360
  .word 0x00000000
  .word 0xae820484
  .word 0x10000002
  .word 0x00000000
  .word 0xae800484
  .word 0x8e830484
  .word 0x10600002
  .word 0x00000000
  .word 0x0000802d
  .word 0x8e840030
  .word 0x908300a2
  .word 0x14600130
  .word 0x00000000
  .word 0x8c840a2c
  .word 0x80850010
  .word 0x2403000a
  .word 0x14a3012b
  .word 0x00000000
  .word 0x24050300
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x14400126
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a29e0
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0x0040802d
  .word 0x24040156
  .word 0x27a50070
  .word 0x0c0aedbc
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a50070
  .word 0x0000302d
  .word 0x0c0aeb00
  .word 0x00000000
  .word 0x0040882d
  .word 0xde830000
  .word 0xfc430060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040156
  .word 0x0000282d
  .word 0x0c0b7528
  .word 0x00000000
  .word 0x0040902d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040156
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
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040156
  .word 0x0c0a7b00
  .word 0x00000000
  .word 0x0040882d
  .word 0x24040156
  .word 0x27a5011c
  .word 0x27a60118
  .word 0x0c0a7b20
  .word 0x00000000
  .word 0x0220202d
  .word 0x8fa5011c
  .word 0x8fa60118
  .word 0x24070010
  .word 0x0000402d
  .word 0x0c0a8014
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040156
  .word 0x0c0a7b14
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050010
  .word 0x0c0a84a0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050009
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x908200a2
  .word 0x14400004
  .word 0x00000000
  .word 0x24050088
  .word 0x10000002
  .word 0x00000000
  .word 0x24050089
  .word 0x0c0af614
  .word 0x00000000
  .word 0x0040202d
  .word 0x84430048
  .word 0x24630012
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x2405000c
  .word 0x0c0a0e34
  .word 0x00000000
  .word 0x0002ac3c
  .word 0x0015ac3f
  .word 0x0280202d
  .word 0x24050015
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x2405000c
  .word 0x24060006
  .word 0x24070004
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040882d
  .word 0x26a30006
  .word 0xa443004a
  .word 0xde830000
  .word 0xfc430060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e850030
  .word 0x0200202d
  .word 0x00a0302d
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040982d
  .word 0x24040004
  .word 0xa0440000
  .word 0xde430058
  .word 0xfc430008
  .word 0xa0440010
  .word 0xde230058
  .word 0xfc430018
  .word 0xde830000
  .word 0xfc430060
  .word 0x0260202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040001
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
  .word 0x27a400f0
  .word 0x0c0b5770
  .word 0x00000000
  .word 0x24020100
  .word 0xafa200f8
  .word 0x0280202d
  .word 0x0280282d
  .word 0x27a600f0
  .word 0x24070001
  .word 0x00e0402d
  .word 0x0c0b5f88
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405001b
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x26a50006
  .word 0x00051883
  .word 0x00a31823
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x24050006
  .word 0x0c0a10f8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24030018
  .word 0xa443004a
  .word 0xde830000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0a7e94
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
  .word 0x24040010
  .word 0x0000282d
  .word 0x0c0a8420
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
  .word 0x24040010
  .word 0x0c0a85b0
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
  .word 0x0200202d
  .word 0x0c0ae40c
  .word 0x00000000
  .word 0x8f85b6fc
  .word 0x8ca4000c
  .word 0x3c030040
  .word 0x00831825
  .word 0xaca3000c
  .word 0x8f84b6fc
  .word 0x94830018
  .word 0x34630004
  .word 0xa4830018
  .word 0x0000802d
  .word 0x1200001e
  .word 0x00000000
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x0c0c0bd4
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x04400007
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000a
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b701c
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000b
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x0280202d
  .word 0x96850014
  .word 0x0c0a6758
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
#pragma opt_lifetimes reset
#pragma opt_common_subs reset
/* W212: transferring 00297760's early-return cascade holds nd907/1480 (window 1488). Narrow u16 stat/message/table contracts improve nd907 to nd285 but grow to 1504, so were reverted; residual first differs at offset 48, a common-exit branch displaced by the 8-byte deficit. */
// FUN_0028b230
asm void btlActionUpdateStateStart(BtlAction* action)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x8f83b6fc
  .word 0x8c64000c
  .word 0x3c030008
  .word 0x00831824
  .word 0x1460015e
  .word 0x00000000
  .word 0x24040700
  .word 0x0c09f91c
  .word 0x00000000
  .word 0x14400159
  .word 0x00000000
  .word 0x24040504
  .word 0x0c09f91c
  .word 0x00000000
  .word 0x14400154
  .word 0x00000000
  .word 0x24040506
  .word 0x0c09f91c
  .word 0x00000000
  .word 0x1440014f
  .word 0x00000000
  .word 0x24040301
  .word 0x0c09f91c
  .word 0x00000000
  .word 0x1440014a
  .word 0x00000000
  .word 0x24040104
  .word 0x0c09f91c
  .word 0x00000000
  .word 0x14400145
  .word 0x00000000
  .word 0x8e820484
  .word 0x10400125
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a29e0
  .word 0x00000000
  .word 0x27a40060
  .word 0x0c0b5770
  .word 0x00000000
  .word 0x0000982d
  .word 0x0000902d
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3050ffff
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x0c0c0040
  .word 0x00000000
  .word 0x2411ffff
  .word 0x8e820484
  .word 0x30430001
  .word 0x10600013
  .word 0x00000000
  .word 0x64130223
  .word 0x2411000b
  .word 0x6412002f
  .word 0x3204ffff
  .word 0x00041880
  .word 0x00642021
  .word 0x00041880
  .word 0x00831821
  .word 0x00032080
  .word 0x24031388
  .word 0x0083001a
  .word 0x00001812
  .word 0xafa30060
  .word 0x2403fffe
  .word 0x00431024
  .word 0xae820484
  .word 0x1000007a
  .word 0x00000000
  .word 0x30430002
  .word 0x10600013
  .word 0x00000000
  .word 0x64130224
  .word 0x2411000b
  .word 0x6412002f
  .word 0x3204ffff
  .word 0x00041880
  .word 0x00642021
  .word 0x00041880
  .word 0x00831821
  .word 0x00032080
  .word 0x240309c4
  .word 0x0083001a
  .word 0x00001812
  .word 0xafa30060
  .word 0x2403fffd
  .word 0x00431024
  .word 0xae820484
  .word 0x10000065
  .word 0x00000000
  .word 0x30430004
  .word 0x10600013
  .word 0x00000000
  .word 0x64130225
  .word 0x2411000b
  .word 0x6412002f
  .word 0x3204ffff
  .word 0x00041880
  .word 0x00642021
  .word 0x00041880
  .word 0x00831821
  .word 0x00032080
  .word 0x24030682
  .word 0x0083001a
  .word 0x00001812
  .word 0xafa30060
  .word 0x2403fffb
  .word 0x00431024
  .word 0xae820484
  .word 0x10000050
  .word 0x00000000
  .word 0x30430008
  .word 0x1060000b
  .word 0x00000000
  .word 0x64130226
  .word 0x2411000b
  .word 0x64120030
  .word 0x24030003
  .word 0xafa30064
  .word 0x2403fff7
  .word 0x00431024
  .word 0xae820484
  .word 0x10000043
  .word 0x00000000
  .word 0x30430010
  .word 0x1060000b
  .word 0x00000000
  .word 0x64130227
  .word 0x2411000b
  .word 0x64120030
  .word 0x24030005
  .word 0xafa30064
  .word 0x2403ffef
  .word 0x00431024
  .word 0xae820484
  .word 0x10000036
  .word 0x00000000
  .word 0x30430020
  .word 0x1060000b
  .word 0x00000000
  .word 0x64130228
  .word 0x2411000b
  .word 0x64120030
  .word 0x24030007
  .word 0xafa30064
  .word 0x2403ffdf
  .word 0x00431024
  .word 0xae820484
  .word 0x10000029
  .word 0x00000000
  .word 0x30430040
  .word 0x10600013
  .word 0x00000000
  .word 0x6413025f
  .word 0x2411000a
  .word 0x64120039
  .word 0x3204ffff
  .word 0x00041880
  .word 0x00642021
  .word 0x00041880
  .word 0x00831821
  .word 0x00032080
  .word 0x240304e2
  .word 0x0083001a
  .word 0x00001812
  .word 0xafa30060
  .word 0x2403ffbf
  .word 0x00431024
  .word 0xae820484
  .word 0x10000014
  .word 0x00000000
  .word 0x30430080
  .word 0x10600011
  .word 0x00000000
  .word 0x64130260
  .word 0x2411000a
  .word 0x64120039
  .word 0x3204ffff
  .word 0x00041880
  .word 0x00642021
  .word 0x00041880
  .word 0x00831821
  .word 0x00032080
  .word 0x240304e2
  .word 0x0083001a
  .word 0x00001812
  .word 0xafa30060
  .word 0x2403ff7f
  .word 0x00431024
  .word 0xae820484
  .word 0x8fa20060
  .word 0x14400004
  .word 0x00000000
  .word 0x8fa20064
  .word 0x1040007e
  .word 0x00000000
  .word 0x8e840030
  .word 0x0260282d
  .word 0x0c0af564
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x0c0af520
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e850030
  .word 0x8f83b6fc
  .word 0x3242ffff
  .word 0x00021080
  .word 0x00431021
  .word 0x8c440c24
  .word 0x00a0302d
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040902d
  .word 0x24030003
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x0240202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x00111c3c
  .word 0x00031c3f
  .word 0x2402ffff
  .word 0x1062000c
  .word 0x00000000
  .word 0x3226ffff
  .word 0x2404000c
  .word 0x24050002
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x0280282d
  .word 0x27a60060
  .word 0x24070001
  .word 0x00e0402d
  .word 0x0c0b5f88
  .word 0x00000000
  .word 0x0040802d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x0080282d
  .word 0x2406ffff
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x240a0001
  .word 0x27ab0060
  .word 0x0c0af6f4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa20060
  .word 0x10400011
  .word 0x00000000
  .word 0x8e840030
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0af48c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050009
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000001e
  .word 0x00000000
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x0c0c0bd4
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x04400007
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000a
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b701c
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000b
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050003
  .word 0x0c0a6758
  .word 0x00000000
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

// FUN_0028b800
void btlActionInitStateStartHome(BtlAction* action)
{
    BtlPacket* packet;
    BtlUnit* unit = action->unit;
    RwV3d homePos;
    u16 allowMove;
    u16 speedIndex;
    BtlEnemyRecord* enemyRecords;
    u16 unitId;
    u8 genus;
    BtlUnit* moveUnit;

    if ((gBtl->flags & 0x2000) && (action->unk_1a & 1) && unit->genus == UNIT_GENUS_PC)
    {
        action->unk_14 = BTLACTION_STATE_AUTO;
    }
    if (FUN_0029a3e0(action) != 0)
    {
        btlActionSetState(action, action->unk_14);
        return;
    }
    btlUnit0027f7c0(unit, &homePos, NULL, NULL);
    if (FUN_002d1ed0(&unit->pos, &homePos) > 75.0f)
    {
        speedIndex = 2;
        allowMove = !(iGpffffb708[(u32)action->target.specificId * 0x2c] & 2);
        moveUnit = action->unit;
        unitId = moveUnit->datUnit->id;
        genus = moveUnit->genus;
        switch (genus)
        {
        case UNIT_GENUS_PC:
            break;
        case UNIT_GENUS_EC:
            enemyRecords = iGpffffb728;
            speedIndex = enemyRecords[unitId].moveSpeed[allowMove].speedIndex;
            break;
        default:
            break;
        }
        packet = btlUnitCreateMovePacket(moveUnit, &homePos, D_00693300[speedIndex], 0);
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
    }
    else
    {
        btlActionSetState(action, action->unk_14);
    }

}
// FUN_0028b9c0
void btlActionUpdateStateStartHome(BtlAction* action)
{
    RwV3d rot;
    BtlPacket* rotPacket;

    if (!btlUnitIsMoving(action->unit))
    {
        btlUnit0027f7c0(action->unit, NULL, NULL, &rot);

        rotPacket = btlUnitCreateRotatePacket(action->unit, &rot, 0);
        rotPacket->actionUID = action->uid;
        btlPacketRegister(rotPacket, BTLPACKET_TYPE_1);

        btlActionSetState(action, action->unk_14);
    }
}

// FUN_0028ba50
void btlActionInitStateChangeFormation(BtlAction* action)
{
    BtlPacket* formPacket1;
    BtlPacket* voicePacket;
    BtlUnit* currUnit;
    u32 hasBadStatus;
    BtlPacket* unitMovePacket;
    BtlPacket* formPacket2;
    BtlPacket* unitPacket1;
    BtlPacket* rotateTowardUnitPacket;
    BtlPacket* cameraStatePacket;

    btlAction0028a780(action);

    formPacket1 = btlFormation002b8f40(1);
    formPacket1->actionUID = action->uid;
    btlPacketRegister(formPacket1, BTLPACKET_TYPE_0);

    if (!action->unk_28)
    {
        voicePacket = btlVoice002e2be0(action, 23, 0, 0, 0);
        btlPacketRegister(voicePacket, BTLPACKET_TYPE_1);
    }

    currUnit = gBtl->unitLists[UNIT_GENUS_PC].head;
    while (currUnit != NULL)
    {
        hasBadStatus = datCalcChkBadStatus(currUnit->datUnit, (UNIT_BADSTATUS_DOWN     |
                                                               UNIT_BADSTATUS_DEAD     |
                                                               UNIT_BADSTATUS_OVERHEAT |
                                                               UNIT_BADSTATUS_SHOCK    |
                                                               UNIT_BADSTATUS_FREEZE   |
                                                               UNIT_BADSTATUS_RAGE     |
                                                               UNIT_BADSTATUS_CHARM));

        if (!hasBadStatus && !datCalcIsDead(currUnit->datUnit, 0))
        {
            unitMovePacket = btlUnitCreateMovePacket(currUnit, NULL, gUnk_007cadd0, 0x18);
            unitMovePacket->unk_00 = 4;
            unitMovePacket->parentUID = formPacket1->uid;
            unitMovePacket->actionUID = action->uid;
            btlPacketRegister(unitMovePacket, BTLPACKET_TYPE_1);
        }

        currUnit = currUnit->next;
    }

    formPacket2 = btlFormation002b8d60(2, 1);
    formPacket2->unk_00 = 4;
    formPacket2->parentUID = formPacket1->uid;
    formPacket2->actionUID = action->uid;
    btlPacketRegister(formPacket2, BTLPACKET_TYPE_0);
    
    currUnit = gBtl->unitLists[UNIT_GENUS_EC].head;
    while (currUnit != NULL)
    {
        if (datCalcIsDead(currUnit->datUnit, 0))
        {
            unitPacket1 = btlUnit00286320(currUnit);
            unitPacket1->unk_00 = 4;
            unitPacket1->parentUID = formPacket1->uid;
            unitPacket1->actionUID = action->uid;
            btlPacketRegister(unitPacket1, BTLPACKET_TYPE_0);
        }
        else
        {
            rotateTowardUnitPacket = btlUnitCreateRotateTowardUnitPacket(currUnit, action->unit, 0x22);
            rotateTowardUnitPacket->unk_00 = 4;
            rotateTowardUnitPacket->parentUID = formPacket1->uid;
            rotateTowardUnitPacket->actionUID = action->uid;
            btlPacketRegister(rotateTowardUnitPacket, BTLPACKET_TYPE_0);
        }

        currUnit = currUnit->next;
    }

    cameraStatePacket = btlCameraCreateSetStatePacket(action, BTLCAMERA_STATE_CHANGEFORM);
    cameraStatePacket->unk_00 = 4;
    cameraStatePacket->parentUID = formPacket1->uid;
    cameraStatePacket->actionUID = action->uid;
    btlPacketRegister(cameraStatePacket, BTLPACKET_TYPE_0);
}
// FUN_0028bca0
void btlActionUpdateStateChangeFormation(BtlAction* action)
{
    if (btlPacketFindFirstByActionUID(action->uid, BTL_UIDMAX) == NULL)
    {
        btlActionSetState(action, BTLACTION_STATE_START);
    }
}

// FUN_0028bd10
void btlActionInitStateCommand(BtlAction* action)
{
    BtlPacket* packet;
    BtlUnit* unit;
    RwV3d rot;

    btlAction0028a780(action);
    if (action->oldState != BTLACTION_STATE_CHANGEFORMA && action->oldState != BTLACTION_STATE_TARGET &&
        action->oldState != BTLACTION_STATE_COMMAND && ACTION_U16(gBtl, 0xf0) != 2)
    {
        btlUnit0027f7c0(action->unit, NULL, NULL, &rot);
        packet = btlUnitCreateRotatePacket(action->unit, &rot, 2);
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_0);
        for (unit = gBtl->unitLists[UNIT_GENUS_EC].tail; unit != NULL; unit = unit->prev)
        {
            if (!btlUnitIsMoving(unit))
            {
                btlUnit0027f7c0(unit, NULL, NULL, &rot);
                packet = btlUnitCreateRotatePacket(unit, &rot, 2);
                packet->actionUID = action->uid;
                btlPacketRegister(packet, BTLPACKET_TYPE_0);
            }
        }
        packet = btlFormation002b8d60(3, 0x8001);
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_0);
        if (FUN_001feec0() == 0)
        {
            packet = FUN_002db740(action, 0x1d, 0, 0, 0);
            packet->actionUID = action->uid;
            btlPacketRegister(packet, BTLPACKET_TYPE_1);
        }
    }
    if (action->unit->genus == UNIT_GENUS_PC)
    {
        packet = btlUnitCreateLookAtUnitPacket(NULL, action->unit, BTLUNIT_LOOKAT_FLAG_ALLENEMY);
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
    }
    else
    {
        packet = btlUnitCreateLookAtDeactivatePacket(NULL, BTLUNIT_LOOKAT_FLAG_ALLENEMY);
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
    }
    btlPacketRegister(btlUnitCreateLookAtDeactivatePacket(action->unit, 0), BTLPACKET_TYPE_1);
    packet = btlCameraCreateSetStatePacket(action, BTLCAMERA_STATE_COMMAND);
    packet->actionUID = action->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_0);
    FUN_002d15a0(&action->target);
    FUN_002bf3f0(action);
    FUN_002899e0(action);
    ACTION_U16(action, 0x484) = 0;
    action->unk_488 = 0;
}
/* W417 negatives: command input-branch inversion measured nd512 -> 545, object 876/912; a boolean switch measured nd530, object 912/912; a flag switch measured nd582, object 936/912 (over window); retained source. */
// FUN_0028bf80
asm void btlActionUpdateStateCommand(BtlAction* action)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x0c0a26d4
  .word 0x00000000
  .word 0x0c07fbd4
  .word 0x00000000
  .word 0x8e040488
  .word 0x24030001
  .word 0x1483000d
  .word 0x00000000
  .word 0x96030484
  .word 0x14600006
  .word 0x00000000
  .word 0x0c0afb44
  .word 0x00000000
  .word 0xae000488
  .word 0x10000003
  .word 0x00000000
  .word 0x2463ffff
  .word 0xa6030484
  .word 0x100000c3
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094c
  .word 0x30420008
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420956
  .word 0x30420008
  .word 0x1040001e
  .word 0x00000000
  .word 0x0c07f888
  .word 0x00000000
  .word 0x10400032
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x8c64000c
  .word 0x3c030002
  .word 0x00831824
  .word 0x14600012
  .word 0x00000000
  .word 0x0c07f848
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020002
  .word 0x00621025
  .word 0xac82000c
  .word 0x0200202d
  .word 0x24050022
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000009c
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c43000c
  .word 0x3c020002
  .word 0x00621024
  .word 0x10400013
  .word 0x00000000
  .word 0x0c07f868
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c02fffd
  .word 0x3442ffff
  .word 0x00621024
  .word 0xac82000c
  .word 0x0200202d
  .word 0x2405001c
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c0afb30
  .word 0x00000000
  .word 0x3045ffff
  .word 0x24030008
  .word 0x10a30067
  .word 0x00000000
  .word 0x24030007
  .word 0x10a3005b
  .word 0x00000000
  .word 0x24030005
  .word 0x10a3003e
  .word 0x00000000
  .word 0x24040003
  .word 0x10a40003
  .word 0x00000000
  .word 0x10000073
  .word 0x00000000
  .word 0x9603006c
  .word 0x10640011
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x9605006e
  .word 0x0200202d
  .word 0x0000302d
  .word 0x0c0b910c
  .word 0x00000000
  .word 0x3044ffff
  .word 0x1000000a
  .word 0x00000000
  .word 0x9605006e
  .word 0x0200202d
  .word 0x24060001
  .word 0x0c0b910c
  .word 0x00000000
  .word 0x3044ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0b91c8
  .word 0x00000000
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x12200011
  .word 0x00000000
  .word 0x0000202d
  .word 0x2405000f
  .word 0x0000302d
  .word 0x24070008
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e040030
  .word 0x0220282d
  .word 0x0c0af334
  .word 0x00000000
  .word 0x24030018
  .word 0xa6030484
  .word 0x24030001
  .word 0xae030488
  .word 0x10000041
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050006
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x1000003b
  .word 0x00000000
  .word 0x96020018
  .word 0x34420002
  .word 0xa6020018
  .word 0x0c07fbdc
  .word 0x00000000
  .word 0x0c07fa9c
  .word 0x00000000
  .word 0x0c0afd94
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c42014c
  .word 0x10000002
  .word 0x00000000
  .word 0x8c4204a8
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000c
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000021
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0b6d08
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050007
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x0c0b466c
  .word 0x00000000
  .word 0x0c07fbdc
  .word 0x00000000
  .word 0x0c07fa9c
  .word 0x00000000
  .word 0x0c0afd94
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c42014c
  .word 0x10000002
  .word 0x00000000
  .word 0x8c4204a8
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050009
  .word 0x0c0a6758
  .word 0x00000000
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

/* DUMMYDUMB session 2026-10-21: the frame is 16 bytes too big (ours
 * `addiu $sp,$sp,-0x50`, retail's `-0x40`) because we save one more callee-saved
 * register than retail (s0-s3 against s0-s2): our locals specificId, selected and
 * packet are all live across calls, and mwcc additionally spills the `action`
 * parameter into a saved register. The declaration-order lever (4 locals) does
 * not change the allocation, so which value mwcc chooses to spill is not
 * source-reachable from here. Confirmed wall. */
// FUN_0028c310
asm void btlActionInitStateTarget(BtlAction* action)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x9483006c
  .word 0x24020004
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x26450088
  .word 0x24060002
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0aff2c
  .word 0x00000000
  .word 0x9651006e
  .word 0x16200002
  .word 0x00000000
  .word 0x2411ffff
  .word 0x10000027
  .word 0x00000000
  .word 0x9651006e
  .word 0x00111080
  .word 0x00511021
  .word 0x00021040
  .word 0x00511021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x00621021
  .word 0x90430008
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x00111080
  .word 0x00511021
  .word 0x00021040
  .word 0x00511021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x00621021
  .word 0x0240202d
  .word 0x26450088
  .word 0x90460009
  .word 0x9047000a
  .word 0x0000402d
  .word 0x0c0aff2c
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3226ffff
  .word 0x26450088
  .word 0x0000382d
  .word 0x0c0affd8
  .word 0x00000000
  .word 0x26440088
  .word 0x0c0b025c
  .word 0x00000000
  .word 0x9643006e
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x00621021
  .word 0x90430008
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000b
  .word 0x00000000
  .word 0x3202ffff
  .word 0x00021080
  .word 0x02421021
  .word 0x8c420088
  .word 0x8c420030
  .word 0x8c4400a8
  .word 0x0c07f9fc
  .word 0x00000000
  .word 0x26020001
  .word 0x3050ffff
  .word 0x3203ffff
  .word 0x964200c0
  .word 0x0062102a
  .word 0x1440fff2
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000d
  .word 0x00000000
  .word 0x0240202d
  .word 0x26450088
  .word 0x0c0b02b0
  .word 0x00000000
  .word 0x26440088
  .word 0x0c0b0220
  .word 0x00000000
  .word 0x0040802d
  .word 0x8c420030
  .word 0x8c4400a8
  .word 0x0c07f9fc
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c07fa04
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405001d
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde430000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c07fbd4
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0a2678
  .word 0x00000000
  .word 0x12000012
  .word 0x00000000
  .word 0x0000202d
  .word 0x8e050030
  .word 0x24060001
  .word 0x0c0a21b8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e040030
  .word 0x0000282d
  .word 0x0c0a2254
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
/* W417 negative: target input-branch inversion measured nd666 -> 693, object 1084/1120; retained source. */
// FUN_0028c590
asm void btlActionUpdateStateTarget(BtlAction* action)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x0c0a26d4
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9463094c
  .word 0x30630008
  .word 0x14600006
  .word 0x00000000
  .word 0x3c03007e
  .word 0x94630956
  .word 0x30630008
  .word 0x1060001e
  .word 0x00000000
  .word 0x0c07f888
  .word 0x00000000
  .word 0x10400032
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x8c64000c
  .word 0x3c030002
  .word 0x00831824
  .word 0x14600012
  .word 0x00000000
  .word 0x0c07f848
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020002
  .word 0x00621025
  .word 0xac82000c
  .word 0x0200202d
  .word 0x24050022
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x100000e1
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x8c64000c
  .word 0x3c030002
  .word 0x00831824
  .word 0x10600013
  .word 0x00000000
  .word 0x0c07f868
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c02fffd
  .word 0x3442ffff
  .word 0x00621024
  .word 0xac82000c
  .word 0x0200202d
  .word 0x2405001d
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x9604006e
  .word 0x00041880
  .word 0x00641821
  .word 0x00031840
  .word 0x00641821
  .word 0x00032080
  .word 0x8f83b708
  .word 0x00831821
  .word 0x90640008
  .word 0x24030002
  .word 0x10830006
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x0000282d
  .word 0x10000008
  .word 0x00000000
  .word 0x30a3ffff
  .word 0x00031880
  .word 0x02032021
  .word 0x8c830088
  .word 0xac830038
  .word 0x24a30001
  .word 0x3065ffff
  .word 0x960400c0
  .word 0x30a3ffff
  .word 0x0064182a
  .word 0x1460fff5
  .word 0x00000000
  .word 0xa604006a
  .word 0x1000002a
  .word 0x00000000
  .word 0x0200202d
  .word 0x26050088
  .word 0x0c0b001c
  .word 0x00000000
  .word 0x26040088
  .word 0x0c0b0220
  .word 0x00000000
  .word 0x0040902d
  .word 0xae120038
  .word 0x24020001
  .word 0xa602006a
  .word 0x26040088
  .word 0x0240282d
  .word 0x0c0b0228
  .word 0x00000000
  .word 0x8e420030
  .word 0x8c5100a8
  .word 0x0c07fa64
  .word 0x00000000
  .word 0x12220015
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c07fa5c
  .word 0x00000000
  .word 0x0000202d
  .word 0x8e450030
  .word 0x24060001
  .word 0x0c0a21b8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e440030
  .word 0x0000282d
  .word 0x0c0a2254
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9465094e
  .word 0x30a30020
  .word 0x14600006
  .word 0x00000000
  .word 0x3c03007e
  .word 0x94640958
  .word 0x30830020
  .word 0x10600013
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0a2254
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c07fa48
  .word 0x00000000
  .word 0x0c0afb44
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050005
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000061
  .word 0x00000000
  .word 0x30a30040
  .word 0x14600004
  .word 0x00000000
  .word 0x30830040
  .word 0x1060005b
  .word 0x00000000
  .word 0x9603006c
  .word 0x24020003
  .word 0x10620011
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x9605006e
  .word 0x0200202d
  .word 0x0000302d
  .word 0x0c0b9148
  .word 0x00000000
  .word 0x3044ffff
  .word 0x1000000a
  .word 0x00000000
  .word 0x9605006e
  .word 0x0200202d
  .word 0x24060001
  .word 0x0c0b9148
  .word 0x00000000
  .word 0x3044ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0b91c8
  .word 0x00000000
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x1220000d
  .word 0x00000000
  .word 0x0000202d
  .word 0x2405000f
  .word 0x0000302d
  .word 0x24070008
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e040030
  .word 0x0220282d
  .word 0x0c0af334
  .word 0x00000000
  .word 0x1000002c
  .word 0x00000000
  .word 0x9603006c
  .word 0x24020004
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x0c07fa34
  .word 0x00000000
  .word 0x8e040038
  .word 0x0c0afb74
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050005
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x96020018
  .word 0x34420002
  .word 0xa6020018
  .word 0x0c07fbdc
  .word 0x00000000
  .word 0x0c07fa9c
  .word 0x00000000
  .word 0x0c07fa34
  .word 0x00000000
  .word 0x0c0afd94
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c42014c
  .word 0x10000002
  .word 0x00000000
  .word 0x8c4204a8
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000c
  .word 0x0c0a6758
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
}

// FUN_0028c9f0
void btlActionInitStateAnalyze(BtlAction* action)
{
    action->movedAwayFromHome = true;
}
/* W415 negatives: moving the terminal state call before the two helpers measured nd229/896 and branch inversion nd234/896 versus nd227/896. */
// FUN_0028ca00
asm void btlActionUpdateStateAnalyze(BtlAction* action)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x24040800
  .word 0x0c09f91c
  .word 0x00000000
  .word 0x144000d7
  .word 0x00000000
  .word 0x8e030484
  .word 0x2c610007
  .word 0x102000d3
  .word 0x00000000
  .word 0x3c04007b
  .word 0x24847b60
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x0c0b6da4
  .word 0x00000000
  .word 0x0040882d
  .word 0x3224ffff
  .word 0x0c0a240c
  .word 0x00000000
  .word 0x0040902d
  .word 0x1240004c
  .word 0x00000000
  .word 0x8e440a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x14400046
  .word 0x00000000
  .word 0x8e42009c
  .word 0x30420008
  .word 0x10400042
  .word 0x00000000
  .word 0x24040140
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c07f8b8
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x24040141
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c07f89c
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0a6874
  .word 0x00000000
  .word 0x0040882d
  .word 0x0200202d
  .word 0x0c0a29e0
  .word 0x00000000
  .word 0x24040003
  .word 0x24050fff
  .word 0x0c0ae358
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050003
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c0b6ea0
  .word 0x00000000
  .word 0x0c0b76f8
  .word 0x00000000
  .word 0x0c0b469c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x2402bfff
  .word 0x00621024
  .word 0xac82000c
  .word 0x0c07fcd4
  .word 0x00000000
  .word 0x24030002
  .word 0xae030484
  .word 0x10000078
  .word 0x00000000
  .word 0x0c0b6ea0
  .word 0x00000000
  .word 0x24030004
  .word 0xae030484
  .word 0x10000072
  .word 0x00000000
  .word 0x0c07faec
  .word 0x00000000
  .word 0x1440006e
  .word 0x00000000
  .word 0x0c0b6da4
  .word 0x00000000
  .word 0x3044ffff
  .word 0x0c0a240c
  .word 0x00000000
  .word 0x0040202d
  .word 0x10800008
  .word 0x00000000
  .word 0x0c0b6ec0
  .word 0x00000000
  .word 0x04400004
  .word 0x00000000
  .word 0x3044ffff
  .word 0x0c0b8b40
  .word 0x00000000
  .word 0x24030003
  .word 0xae030484
  .word 0x1000005b
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9465094e
  .word 0x30a30040
  .word 0x1460000c
  .word 0x00000000
  .word 0x3c03007e
  .word 0x94640958
  .word 0x30830040
  .word 0x14600007
  .word 0x00000000
  .word 0x30a30020
  .word 0x14600004
  .word 0x00000000
  .word 0x30830020
  .word 0x1060004b
  .word 0x00000000
  .word 0x0c07f8d4
  .word 0x00000000
  .word 0x0c0b469c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430007
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x8c62000c
  .word 0x34424000
  .word 0xac62000c
  .word 0x0c07fcdc
  .word 0x00000000
  .word 0x24030005
  .word 0xae030484
  .word 0x1000003a
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000a
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b6dd0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24030006
  .word 0xae030484
  .word 0x1000002b
  .word 0x00000000
  .word 0x0c07faec
  .word 0x00000000
  .word 0x14400027
  .word 0x00000000
  .word 0x0c07fadc
  .word 0x00000000
  .word 0x14400023
  .word 0x00000000
  .word 0x24030006
  .word 0xae030484
  .word 0x1000001f
  .word 0x00000000
  .word 0x0c0b8b50
  .word 0x00000000
  .word 0x96020018
  .word 0x30420004
  .word 0x10400010
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020040
  .word 0x00621025
  .word 0xac82000c
  .word 0x8f83b6fc
  .word 0x94620018
  .word 0x3442000c
  .word 0xa4620018
  .word 0x0200202d
  .word 0x2405001e
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x0c07f928
  .word 0x00000000
  .word 0x0c0afb44
  .word 0x00000000
  .word 0x0200202d
  .word 0x96050014
  .word 0x0c0a6758
  .word 0x00000000
  .word 0xae000484
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
}

// FUN_0028cda0
void btlActionInitStateAI(BtlAction* action)
{
    if (action->unit->genus == UNIT_GENUS_PC &&
        *(s8*)&action->unit->datUnit->aiTactic == 7 &&
        FUN_002c08c0((BtlTarget*)action->unkData3) == 0)
    {
        action->unit->datUnit->aiTactic = 1;
        btlPacketRegister(btlVoice002e2be0(action, 0xb, 0, 0, 0), BTLPACKET_TYPE_1);
    }

    btlTargetReset(&action->target);
}
// FUN_0028ce50
void btlActionUpdateStateAI(BtlAction* action)
{
    if (FUN_002c7250(&action->target) == 0)
    {
        FUN_002c70d0(action, &action->target);
    }

    if (FUN_002c7280(&action->target) != 0)
    {
        if ((gBtl->flags & 0x2000) &&
            (gBtl->flags & 0x4000000) &&
            action->unit->genus == UNIT_GENUS_EC &&
            action->target.commandId == 1)
        {
            action->unk_18 |= 0x4000;
        }

        action->unk_18 |= 2;
        btlActionSetState(action, BTLACTION_STATE_READY);
    }
}

// FUN_0028cf20
void btlActionInitStateAuto(BtlAction* action)
{
    btlTargetReset(&action->target);
    FUN_002bff60(action, (BtlTarget*)action->unkData3, 0, 0);
    FUN_002c0970((BtlTarget*)action->unkData3);
}
// FUN_0028cf80
void btlActionUpdateStateAuto(BtlAction* action)
{
    BtlPacket* packet;

    action->target.commandId = 1;
    action->target.specificId = FUN_00308930(action->unit->datUnit);
    action->target.targetedActions[0] = FUN_002c0880((BtlTarget*)action->unkData3);
    action->target.targetedCount = 1;
    FUN_002c08a0((BtlTarget*)action->unkData3, action->target.targetedActions[0]);

    if (action->unit->genus == UNIT_GENUS_PC && action->unit->charId == 1)
    {
        packet = FUN_002db740(action, 1, 0, 0, 0);
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
    }

    if (gBtl->flags & 0x4000000)
    {
        action->unk_18 |= 0x4000;
    }

    action->unk_18 |= 2;
    btlActionSetState(action, BTLACTION_STATE_READY);
}

// FUN_0028d070
void btlActionInitStateSupport(BtlAction* action)
{
    // nothing
}
/* W373 pragma sweep nd/obj: base 846/1228; singles LI=846/1228 CS=846/1228 LT=846/1228 PR=839/1232 SR=846/1228 DA=846/1228; retain PR off. */
#pragma opt_propagation off
// FUN_0028d080
asm void btlActionUpdateStateSupport(BtlAction* action)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x24040506
  .word 0x0c09f91c
  .word 0x00000000
  .word 0x14400125
  .word 0x00000000
  .word 0x8e500030
  .word 0x8e040a2c
  .word 0x0c0c0bd4
  .word 0x00000000
  .word 0x304200ff
  .word 0x0000882d
  .word 0x0440010e
  .word 0x00000000
  .word 0x2c410011
  .word 0x102000c7
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637b80
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x920200a2
  .word 0x14400004
  .word 0x00000000
  .word 0x24130016
  .word 0x10000002
  .word 0x00000000
  .word 0x24130017
  .word 0x8e040a2c
  .word 0x0000282d
  .word 0x0c0c0550
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x24050001
  .word 0x0c0c0550
  .word 0x00000000
  .word 0x100000b0
  .word 0x00000000
  .word 0x920200a2
  .word 0x14400004
  .word 0x00000000
  .word 0x24130018
  .word 0x10000002
  .word 0x00000000
  .word 0x24130019
  .word 0x8e040a2c
  .word 0x24050004
  .word 0x0c0c0550
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x24050002
  .word 0x0c0c0550
  .word 0x00000000
  .word 0x1000009f
  .word 0x00000000
  .word 0x920200a2
  .word 0x14400004
  .word 0x00000000
  .word 0x2413001a
  .word 0x10000002
  .word 0x00000000
  .word 0x2413001b
  .word 0x8e040a2c
  .word 0x24050003
  .word 0x0c0c0550
  .word 0x00000000
  .word 0x10000092
  .word 0x00000000
  .word 0x920200a2
  .word 0x14400004
  .word 0x00000000
  .word 0x2413001c
  .word 0x10000002
  .word 0x00000000
  .word 0x2413001d
  .word 0x8e040a2c
  .word 0x24050005
  .word 0x0c0c0550
  .word 0x00000000
  .word 0x10000085
  .word 0x00000000
  .word 0x920200a2
  .word 0x14400004
  .word 0x00000000
  .word 0x2413001e
  .word 0x10000002
  .word 0x00000000
  .word 0x2413001f
  .word 0x8e040a2c
  .word 0x24050006
  .word 0x0c0c0550
  .word 0x00000000
  .word 0x10000078
  .word 0x00000000
  .word 0x920200a2
  .word 0x14400004
  .word 0x00000000
  .word 0x24130020
  .word 0x10000002
  .word 0x00000000
  .word 0x24130021
  .word 0x8e040a2c
  .word 0x24050007
  .word 0x0c0c0550
  .word 0x00000000
  .word 0x1000006b
  .word 0x00000000
  .word 0x920200a2
  .word 0x14400004
  .word 0x00000000
  .word 0x24130022
  .word 0x10000002
  .word 0x00000000
  .word 0x24130023
  .word 0x8e040a2c
  .word 0x24050008
  .word 0x0c0c0550
  .word 0x00000000
  .word 0x1000005e
  .word 0x00000000
  .word 0x920200a2
  .word 0x14400004
  .word 0x00000000
  .word 0x24130024
  .word 0x10000002
  .word 0x00000000
  .word 0x24130025
  .word 0x8e040a2c
  .word 0x24050009
  .word 0x0c0c0550
  .word 0x00000000
  .word 0x24110001
  .word 0x10000050
  .word 0x00000000
  .word 0x920200a2
  .word 0x14400004
  .word 0x00000000
  .word 0x24130026
  .word 0x10000002
  .word 0x00000000
  .word 0x24130027
  .word 0x8e040a2c
  .word 0x2405000a
  .word 0x0c0c0550
  .word 0x00000000
  .word 0x10000043
  .word 0x00000000
  .word 0x920200a2
  .word 0x14400004
  .word 0x00000000
  .word 0x24130046
  .word 0x10000002
  .word 0x00000000
  .word 0x24130047
  .word 0x8e040a2c
  .word 0x2405000b
  .word 0x0c0c0550
  .word 0x00000000
  .word 0x10000036
  .word 0x00000000
  .word 0x920200a2
  .word 0x14400004
  .word 0x00000000
  .word 0x2413005a
  .word 0x10000002
  .word 0x00000000
  .word 0x2413005b
  .word 0x8e040a2c
  .word 0x2405000d
  .word 0x0c0c0550
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x920200a2
  .word 0x14400004
  .word 0x00000000
  .word 0x2413005c
  .word 0x10000002
  .word 0x00000000
  .word 0x2413005d
  .word 0x8e040a2c
  .word 0x2405000e
  .word 0x0c0c0550
  .word 0x00000000
  .word 0x1000001c
  .word 0x00000000
  .word 0x920200a2
  .word 0x14400004
  .word 0x00000000
  .word 0x2413005e
  .word 0x10000002
  .word 0x00000000
  .word 0x2413005f
  .word 0x8e040a2c
  .word 0x2405000f
  .word 0x0c0c0550
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x920200a2
  .word 0x14400004
  .word 0x00000000
  .word 0x24130060
  .word 0x10000002
  .word 0x00000000
  .word 0x24130061
  .word 0x8e040a2c
  .word 0x24050010
  .word 0x0c0c0550
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000982d
  .word 0x12600042
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0a29e0
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050009
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde430000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e440030
  .word 0x0260282d
  .word 0x0c0af614
  .word 0x00000000
  .word 0x0040202d
  .word 0xde430000
  .word 0xfc430060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x12200027
  .word 0x00000000
  .word 0x27a40050
  .word 0x0c0b5770
  .word 0x00000000
  .word 0x8e420030
  .word 0x8c440a2c
  .word 0x0c0bff5c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x2442ffff
  .word 0x00021023
  .word 0xafa20050
  .word 0x04400002
  .word 0x00000000
  .word 0xafa00050
  .word 0x8e420030
  .word 0x8c440a2c
  .word 0x0c0bff60
  .word 0x00000000
  .word 0x3042ffff
  .word 0x2442ffff
  .word 0x00021023
  .word 0xafa20054
  .word 0x04400002
  .word 0x00000000
  .word 0xafa00054
  .word 0x0240202d
  .word 0x0240282d
  .word 0x27a60050
  .word 0x24070001
  .word 0x00e0402d
  .word 0x0c0b5f88
  .word 0x00000000
  .word 0x0040202d
  .word 0xde430000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0b701c
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000b
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050003
  .word 0x0c0a6758
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
}
#pragma opt_propagation reset

// FUN_0028d560
void btlActionInitStateBad(BtlAction* action)
{
    FUN_002dc5e0(action);
    action->movedAwayFromHome = true;
    action->unk_488 = 0;
}
/* Retail reconstruction covers the guard, down-status packet sequence, result dispatch, and moved-home state paths at 0x28d5e8-0x28dbc0. */
/* W373 pragma sweep nd/obj: base 338/1600; singles LI=338/1600 CS=273/1596 LT=338/1600 PR=338/1600 SR=338/1600 DA=338/1600; retain CS off. */
#pragma opt_common_subs off
/* W415 negative: reversing the moved-home branch reduced object 1596->1588 but raised nd273->274, so source order was retained. */
// FUN_0028d5a0
asm void btlActionUpdateStateBad(BtlAction* action)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x24040506
  .word 0x0c09f91c
  .word 0x00000000
  .word 0x1440017e
  .word 0x00000000
  .word 0x24040105
  .word 0x0c09f91c
  .word 0x00000000
  .word 0x14400179
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0a29e0
  .word 0x00000000
  .word 0x8e420030
  .word 0x8c440a2c
  .word 0x0c0c0154
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e420030
  .word 0x8c440a2c
  .word 0x3c050010
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x104000bc
  .word 0x00000000
  .word 0x8e420488
  .word 0x144000b9
  .word 0x00000000
  .word 0x24100001
  .word 0x8e420030
  .word 0x8c440a2c
  .word 0x0c0c0168
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020003
  .word 0x14620011
  .word 0x00000000
  .word 0x24041319
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x2411000a
  .word 0x10000002
  .word 0x00000000
  .word 0x2411001e
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x0051082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0000802d
  .word 0x0240202d
  .word 0x24050009
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040882d
  .word 0xde430000
  .word 0xfc430060
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1200005d
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e440030
  .word 0x2405000a
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040802d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x2403001e
  .word 0xa4430048
  .word 0xde430000
  .word 0xfc430060
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050008
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x27a40040
  .word 0x0c0b5770
  .word 0x00000000
  .word 0x3c020010
  .word 0xafa2004c
  .word 0x0240202d
  .word 0x0240282d
  .word 0x27a60040
  .word 0x24070001
  .word 0x00e0402d
  .word 0x0c0b5f88
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0xde430000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e440030
  .word 0x0c0a1324
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0x2403000c
  .word 0xa443004a
  .word 0xde430000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050014
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b6dd0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0xde430000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000001e
  .word 0x00000000
  .word 0x8e440030
  .word 0x908200a2
  .word 0x14400004
  .word 0x00000000
  .word 0x240500a2
  .word 0x10000002
  .word 0x00000000
  .word 0x240500a3
  .word 0x0c0af614
  .word 0x00000000
  .word 0x0040202d
  .word 0xde430000
  .word 0xfc430060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050015
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b6dd0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde430000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000202d
  .word 0x8e450030
  .word 0x24060001
  .word 0x0c0a21b8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e440030
  .word 0x0000282d
  .word 0x0c0a2254
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x96430018
  .word 0x34630200
  .word 0xa6430018
  .word 0xae400484
  .word 0x24030001
  .word 0xae430488
  .word 0x100000af
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0b7060
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000046
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050009
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde430000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x27a40040
  .word 0x0c0b5770
  .word 0x00000000
  .word 0x32020100
  .word 0x10400010
  .word 0x00000000
  .word 0x24020200
  .word 0xafa20048
  .word 0x0240202d
  .word 0x24050016
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040202d
  .word 0xde430000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xafb0004c
  .word 0x0240202d
  .word 0x0240282d
  .word 0x27a60040
  .word 0x24070001
  .word 0x00e0402d
  .word 0x0c0b5f88
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030012
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x32020200
  .word 0x10400005
  .word 0x00000000
  .word 0x24030001
  .word 0x8e420030
  .word 0x8c420a2c
  .word 0xa0430010
  .word 0x0240202d
  .word 0x0c0b7298
  .word 0x00000000
  .word 0x0040282d
  .word 0x18a0000a
  .word 0x00000000
  .word 0x8e440030
  .word 0x0c0af614
  .word 0x00000000
  .word 0x0040202d
  .word 0xde430000
  .word 0xfc430060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000064
  .word 0x00000000
  .word 0x8e420484
  .word 0x10400052
  .word 0x00000000
  .word 0x32220279
  .word 0x10400048
  .word 0x00000000
  .word 0x0240202d
  .word 0x26450038
  .word 0x0220302d
  .word 0x0c0b4598
  .word 0x00000000
  .word 0x96420018
  .word 0x34420002
  .word 0xa6420018
  .word 0x0240202d
  .word 0x0c0b720c
  .word 0x00000000
  .word 0x0040802d
  .word 0x1a000015
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050009
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde430000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e440030
  .word 0x0200282d
  .word 0x0c0af614
  .word 0x00000000
  .word 0x0040202d
  .word 0xde430000
  .word 0xfc430060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405001e
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b6dd0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030025
  .word 0xa4430048
  .word 0xde430000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24020010
  .word 0x12220003
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x92420028
  .word 0x14400009
  .word 0x00000000
  .word 0x92420029
  .word 0x14400006
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x24420002
  .word 0xa2420029
  .word 0x0240202d
  .word 0x2405000c
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050003
  .word 0x24060001
  .word 0x0c0a676c
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0b704c
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050019
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405001e
  .word 0x0c0a6758
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_common_subs reset

// FUN_0028dbe0
void btlActionInitStateReady(BtlAction* action)
{
    // nothing
}
// FUN_0028dbf0
asm void btlActionUpdateStateReady(BtlAction* action)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x24040506
  .word 0x0c09f91c
  .word 0x00000000
  .word 0x144000af
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000018
  .word 0x00000000
  .word 0x3243ffff
  .word 0x00031880
  .word 0x02631821
  .word 0x8c710038
  .word 0x12710010
  .word 0x00000000
  .word 0x9623001a
  .word 0x30630001
  .word 0x1060000c
  .word 0x00000000
  .word 0x8e220030
  .word 0x8c440a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x9624000c
  .word 0x24030001
  .word 0x14830008
  .word 0x00000000
  .word 0x26430001
  .word 0x3072ffff
  .word 0x3250ffff
  .word 0x9663006a
  .word 0x0203182a
  .word 0x1460ffe5
  .word 0x00000000
  .word 0x9663006a
  .word 0x1603008d
  .word 0x00000000
  .word 0x96620018
  .word 0x30420004
  .word 0x14400004
  .word 0x00000000
  .word 0x26640038
  .word 0x0c0b4578
  .word 0x00000000
  .word 0x96620018
  .word 0x3042fffd
  .word 0xa6620018
  .word 0x0000802d
  .word 0x9662006c
  .word 0x2c41000d
  .word 0x1020006a
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637bd0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24100001
  .word 0x0260202d
  .word 0x0c0b5988
  .word 0x00000000
  .word 0x9663006e
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x00621021
  .word 0x90430024
  .word 0x2402000a
  .word 0x14620007
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405001e
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000052
  .word 0x00000000
  .word 0x8e6200d8
  .word 0x14400018
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0a27d0
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x96620018
  .word 0x3042ffef
  .word 0xa6620018
  .word 0x0260202d
  .word 0x2405000d
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000041
  .word 0x00000000
  .word 0x96620018
  .word 0x34420010
  .word 0xa6620018
  .word 0x0260202d
  .word 0x2405000e
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000038
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050015
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000032
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050017
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x1000002c
  .word 0x00000000
  .word 0x8e630030
  .word 0x906200a2
  .word 0x1440000b
  .word 0x00000000
  .word 0x946300a4
  .word 0x24020001
  .word 0x10620007
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405001a
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x1000001e
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405001b
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405001b
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050018
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050007
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040069
  .word 0x24843318
  .word 0x24050aec
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x1200000b
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0a28f8
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x96630018
  .word 0x34630008
  .word 0xa6630018
  .word 0x10000004
  .word 0x00000000
  .word 0x96630018
  .word 0x3063fff7
  .word 0xa6630018
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

/* W373 pragma sweep nd/obj: base 1396/1948; singles LI=1444/1992 CS=1459/2020 LT=1362/1936 PR=1397/1948 SR=1396/1948 DA=1396/1964; retain LT on. */
#pragma opt_lifetimes on
/* Retail algorithm: target distance/facing, helper-offset chain, camera dispatch, and move-speed packet; implemented 1976/2112 bytes (94%); remaining register/layout differences. */
// FUN_0028df00
asm void btlActionInitStateMoveTarget(BtlAction* action)
{
  .set noreorder
  .word 0x27bdfed0
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
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080802d
  .word 0x9497006e
  .word 0x24130001
  .word 0xafb300cc
  .word 0x0000b02d
  .word 0x0000a82d
  .word 0x0000202d
  .word 0x8e050030
  .word 0x24060003
  .word 0x0c0a21b8
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x0260282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e040030
  .word 0x0000282d
  .word 0x0c0a2254
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x0260282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x96030018
  .word 0x34630200
  .word 0xa6030018
  .word 0x32e4ffff
  .word 0x00041880
  .word 0x00641821
  .word 0x00031840
  .word 0x00641821
  .word 0x00032080
  .word 0x8f83b708
  .word 0x00641821
  .word 0x90630000
  .word 0x30630002
  .word 0x10600055
  .word 0x00000000
  .word 0x8e020030
  .word 0x904200a2
  .word 0x10400003
  .word 0x00000000
  .word 0x1000002a
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0a283c
  .word 0x00000000
  .word 0x10400025
  .word 0x00000000
  .word 0x0c0bf6dc
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000982d
  .word 0x1000003c
  .word 0x00000000
  .word 0x8e020038
  .word 0x8e110030
  .word 0x8c520030
  .word 0x0220202d
  .word 0x27a500e0
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x27a600d0
  .word 0x0c0a0120
  .word 0x00000000
  .word 0x27a400e0
  .word 0x27a500d0
  .word 0x0c0b47b4
  .word 0x00000000
  .word 0x3c0343fa
  .word 0x44830800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000005
  .word 0x00000000
  .word 0x0260b02d
  .word 0x0000982d
  .word 0x10000022
  .word 0x00000000
  .word 0x46000d46
  .word 0x1000001f
  .word 0x00000000
  .word 0x8e020030
  .word 0x904300a2
  .word 0x24020001
  .word 0x1462000a
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a50120
  .word 0x0c0bf790
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0xafa000cc
  .word 0x10000011
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0b5784
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x2402000b
  .word 0x10000002
  .word 0x00000000
  .word 0x24020004
  .word 0x3046ffff
  .word 0x8e020038
  .word 0x8e040030
  .word 0x8c450030
  .word 0x0c0a04b4
  .word 0x00000000
  .word 0x46000546
  .word 0x96030018
  .word 0x30634000
  .word 0x106000aa
  .word 0x00000000
  .word 0x24150001
  .word 0x100000a7
  .word 0x00000000
  .word 0x8e120030
  .word 0x924400a2
  .word 0x0260182d
  .word 0x10830092
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000009e
  .word 0x00000000
  .word 0x8e020038
  .word 0x8c510030
  .word 0x8e540a00
  .word 0x0200202d
  .word 0x0c0b58a4
  .word 0x00000000
  .word 0x0040f02d
  .word 0x0017bc3c
  .word 0x0017bc3f
  .word 0x0280202d
  .word 0x0240282d
  .word 0x02e0302d
  .word 0x03c0382d
  .word 0x0c0a1010
  .word 0x00000000
  .word 0x3042ffff
  .word 0x7fa200b0
  .word 0x0280202d
  .word 0x02e0282d
  .word 0x03c0302d
  .word 0x0c0b58ec
  .word 0x00000000
  .word 0x0040b82d
  .word 0x0240202d
  .word 0x27a500e0
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x0220202d
  .word 0x0240282d
  .word 0x27a600d0
  .word 0x0c0a0120
  .word 0x00000000
  .word 0x27a400e0
  .word 0x27a500d0
  .word 0x0c0b47b4
  .word 0x00000000
  .word 0xc6430090
  .word 0xc642002c
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4602181f
  .word 0xc6210090
  .word 0xc620002c
  .word 0x46000d1d
  .word 0x12e00012
  .word 0x00000000
  .word 0x0c0bf6e4
  .word 0x00000000
  .word 0x1040000e
  .word 0x00000000
  .word 0x3c034396
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45010008
  .word 0x00000000
  .word 0x4600a041
  .word 0x3c034348
  .word 0x44830000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000007
  .word 0x00000000
  .word 0x96030018
  .word 0x34630010
  .word 0xa6030018
  .word 0x0000982d
  .word 0x10000058
  .word 0x00000000
  .word 0xc6420090
  .word 0xc641002c
  .word 0x44800000
  .word 0x00000000
  .word 0x46140018
  .word 0x4601101e
  .word 0xc6210090
  .word 0xc620002c
  .word 0x46000d1c
  .word 0x7ba200b0
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0280202d
  .word 0x0240282d
  .word 0x0220302d
  .word 0x27a80110
  .word 0x0000482d
  .word 0x240a0002
  .word 0x0c09fe50
  .word 0x00000000
  .word 0x27a40110
  .word 0x27a500d0
  .word 0x0c0b47b4
  .word 0x00000000
  .word 0x46000546
  .word 0x3c024396
  .word 0x44822000
  .word 0xc6430090
  .word 0xc642002c
  .word 0x44800800
  .word 0x00000000
  .word 0x46040818
  .word 0x4602181e
  .word 0xc6220090
  .word 0xc621002c
  .word 0x4601105c
  .word 0x46010034
  .word 0x45000002
  .word 0x00000000
  .word 0x46000d46
  .word 0x0280202d
  .word 0x0240282d
  .word 0x0000302d
  .word 0x2407ffff
  .word 0x27a80110
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0c09fe50
  .word 0x00000000
  .word 0xc7a10110
  .word 0xc7a000e0
  .word 0x46000801
  .word 0xe7a000f0
  .word 0xc7a10118
  .word 0xc7a000e8
  .word 0x46000801
  .word 0xe7a000f8
  .word 0xafa000f4
  .word 0x27a400f0
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x4600ad40
  .word 0x4615a034
  .word 0x45000017
  .word 0x00000000
  .word 0x96030018
  .word 0x34630010
  .word 0xa6030018
  .word 0x0000982d
  .word 0x10000011
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0b5784
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x2402000b
  .word 0x10000002
  .word 0x00000000
  .word 0x24020004
  .word 0x3046ffff
  .word 0x8e020038
  .word 0x8e040030
  .word 0x8c450030
  .word 0x0c0a04b4
  .word 0x00000000
  .word 0x46000546
  .word 0x126000ce
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0a29e0
  .word 0x00000000
  .word 0x0000a02d
  .word 0x0000982d
  .word 0x64020002
  .word 0x9604006e
  .word 0x00041880
  .word 0x00641821
  .word 0x00031840
  .word 0x00641821
  .word 0x00032080
  .word 0x8f83b708
  .word 0x00641821
  .word 0x90630000
  .word 0x30630002
  .word 0x0003182b
  .word 0x38630001
  .word 0x3066ffff
  .word 0x8e120030
  .word 0x8e430a2c
  .word 0x94650002
  .word 0x924400a2
  .word 0x24030001
  .word 0x10830005
  .word 0x00000000
  .word 0x1080000f
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x8f84b728
  .word 0x30a3ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00441821
  .word 0x30c2ffff
  .word 0x00021080
  .word 0x00431021
  .word 0x94420024
  .word 0x3042ffff
  .word 0x00021880
  .word 0x3c020069
  .word 0x24423300
  .word 0x00431021
  .word 0xc4540000
  .word 0x24020001
  .word 0x16a2004f
  .word 0x00000000
  .word 0x16c00049
  .word 0x00000000
  .word 0x8e020038
  .word 0x8c510030
  .word 0x0240202d
  .word 0x27a500e0
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x0220202d
  .word 0x0240282d
  .word 0x27a600d0
  .word 0x0c0a0120
  .word 0x00000000
  .word 0xc7a100e0
  .word 0xc7a000d0
  .word 0x46000801
  .word 0xe7a00100
  .word 0xc7a100e8
  .word 0xc7a000d8
  .word 0x46000801
  .word 0xe7a00108
  .word 0xafa00104
  .word 0x27a40100
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc6410090
  .word 0xc640002c
  .word 0x4600081a
  .word 0xc6210090
  .word 0xc620002c
  .word 0x4600081c
  .word 0x46150040
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46000840
  .word 0xc7a00100
  .word 0x460100c2
  .word 0xe7a30100
  .word 0xc7a00104
  .word 0x46010082
  .word 0xe7a20104
  .word 0xc7a00108
  .word 0x46010042
  .word 0xe7a10108
  .word 0xc7a000d0
  .word 0x46030000
  .word 0xe7a00110
  .word 0xc7a000d4
  .word 0x46020000
  .word 0xe7a00114
  .word 0xc7a000d8
  .word 0x46010000
  .word 0xe7a00118
  .word 0xc6400008
  .word 0xe7a00114
  .word 0x0240202d
  .word 0x27a50110
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c09ffa4
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xc78082ac
  .word 0x4600a502
  .word 0x36730008
  .word 0x10000005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x24030001
  .word 0x8fa200cc
  .word 0x14430012
  .word 0x00000000
  .word 0x8e020038
  .word 0x36660040
  .word 0x8e040030
  .word 0x8c450030
  .word 0x4600ab06
  .word 0x4600a346
  .word 0x0c0a07a0
  .word 0x00000000
  .word 0x0040a02d
  .word 0xde030000
  .word 0xfc430060
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x8e020030
  .word 0x24440004
  .word 0x27a50120
  .word 0x0c0b47b4
  .word 0x00000000
  .word 0x3c034296
  .word 0x44830800
  .word 0x00000000
  .word 0x46010036
  .word 0x4501000e
  .word 0x00000000
  .word 0x8e040030
  .word 0x27a50120
  .word 0x4600a306
  .word 0x0260302d
  .word 0x0c0a0674
  .word 0x00000000
  .word 0x0040a02d
  .word 0xde030000
  .word 0xfc430060
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1280001b
  .word 0x00000000
  .word 0x16c00019
  .word 0x00000000
  .word 0x16a0000d
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050012
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050013
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x96030018
  .word 0x3063ffef
  .word 0xa6030018
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
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0130
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_lifetimes reset
// FUN_0028e740
void btlActionUpdateStateMoveTarget(BtlAction* action)
{
    u16 nextState;
    u16 commandId;

    if (btlUnitIsMoving(action->unit) == 0)
    {
        commandId = action->target.commandId;
        if (commandId == 9) goto summon;
        if (commandId == 3) goto skill;
        if (commandId == 2) goto skill;
        switch (commandId)
        {
        case 1:
            goto attack;
        default:
            goto no_action;
        }

attack:
        nextState = BTLACTION_STATE_ATTACK;
        goto set_action;
skill:
        nextState = BTLACTION_STATE_SKILL;
        goto set_action;
summon:
        nextState = BTLACTION_STATE_SUMMON;
        goto set_action;
no_action:
        nextState = BTLACTION_STATE_NON;
set_action:
        btlActionSetState(action, nextState);
    }
}

/* W111: reconstructed MoveHome, RoundUpMes, and RoundUp packet/state paths from retail. */
// FUN_0028e7f0
void btlActionInitStateMoveHome(BtlAction* action)
{
    BtlUnit* unit = action->unit;
    BtlPacket* packet;
    RwV3d homePos;
    u16 commandId;
    u16 nextState;
    u16 allowMove;
    u16 unitDatId;
    u16 speedIdx;
    u8 genus;
    f32 speed;
    BtlUnit* moveUnit;
    BtlEnemyRecord* enemyRecords;

    if ((gBtl->flags & 0x400000) && (BATTLE_U16(0x18) & 2))
    {
        commandId = action->target.commandId;
        switch (commandId)
        {
        case 1:
            nextState = BTLACTION_STATE_ATTACK;
            break;
        case 2:
        case 3:
            nextState = BTLACTION_STATE_SKILL;
            break;
        case 9:
            nextState = BTLACTION_STATE_SUMMON;
            break;
        default:
            nextState = BTLACTION_STATE_NON;
            break;
        }
        btlActionSetState(action, nextState);
        return;
    }

    btlUnit0027f7c0(unit, &homePos, NULL, NULL);
    if (FUN_002d1ed0(&unit->pos, &homePos) > 75.0f)
    {
        btlAction0028a780(action);
        speedIdx = 2;
        allowMove = !(iGpffffb708[(u32)action->target.specificId * 0x2c] & 2);
        moveUnit = action->unit;
        unitDatId = moveUnit->datUnit->id;
        genus = moveUnit->genus;
        switch (genus)
        {
        case UNIT_GENUS_PC:
            break;
        case UNIT_GENUS_EC:
            enemyRecords = iGpffffb728;
            speedIdx = enemyRecords[unitDatId].moveSpeed[allowMove].speedIndex;
            break;
        default:
            break;
        }
        speed = D_00693300[speedIdx];
        speed *= uGpffff8088;
        packet = btlUnitCreateMovePacket(moveUnit, &homePos, speed, 0);
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        packet = btlCameraCreateSetStatePacket(action, BTLCAMERA_STATE_MOVEHOME);
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_0);
    }
    else
    {
        commandId = action->target.commandId;
        switch (commandId)
        {
        case 1:
            nextState = BTLACTION_STATE_ATTACK;
            break;
        case 2:
        case 3:
            nextState = BTLACTION_STATE_SKILL;
            break;
        case 9:
            nextState = BTLACTION_STATE_SUMMON;
            break;
        default:
            nextState = BTLACTION_STATE_NON;
            break;
        }
        btlActionSetState(action, nextState);
    }
}
// FUN_0028ea90
void btlActionUpdateStateMoveHome(BtlAction* action)
{
    u16 nextState;
    u16 commandId;

    if (btlUnitIsMoving(action->unit) == 0)
    {
        commandId = action->target.commandId;
        if (commandId == 9) goto summon;
        if (commandId == 3) goto skill;
        if (commandId == 2) goto skill;
        switch (commandId)
        {
        case 1:
            goto attack;
        default:
            goto no_action;
        }

attack:
        nextState = BTLACTION_STATE_ATTACK;
        goto set_action;
skill:
        nextState = BTLACTION_STATE_SKILL;
        goto set_action;
summon:
        nextState = BTLACTION_STATE_SUMMON;
        goto set_action;
no_action:
        nextState = BTLACTION_STATE_NON;
set_action:
        btlActionSetState(action, nextState);
    }
}

// FUN_0028eb40
void btlActionInitStateAttack(BtlAction* action)
{
    (void)action;
}

/* W373 pragma sweep nd/obj: base 6050/8252; singles LI=5905/8252 CS=6344/8452(over) LT=6050/8252 PR=6137/8280 SR=6050/8252 DA=6052/8252; retain LI on. */
#pragma opt_loop_invariants on
// FUN_0028eb50
#pragma push
#pragma schedule on
asm void btlActionUpdateStateAttack(BtlAction* action)
{
  .set noreorder
  .word 0x27bdfd40
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
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x0c0a29e0
  .word 0x00000000
  .word 0xde900000
  .word 0xffa00260
  .word 0xa7a001c0
  .word 0xffa00258
  .word 0x2402ffff
  .word 0xa7a20190
  .word 0xa7a20180
  .word 0x96820018
  .word 0x30424000
  .word 0x0002102b
  .word 0x7fa20150
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fe0
  .word 0x4482a000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x8e970030
  .word 0x8e930038
  .word 0x8e6200d4
  .word 0x10400004
  .word 0x00000000
  .word 0x0280b02d
  .word 0x10000002
  .word 0x00000000
  .word 0x0260b02d
  .word 0x8e6200d0
  .word 0x1040000a
  .word 0x00000000
  .word 0x92e300a2
  .word 0x8ec20030
  .word 0x904200a2
  .word 0x10620005
  .word 0x00000000
  .word 0x24020001
  .word 0xafa201f0
  .word 0x10000002
  .word 0x00000000
  .word 0xafa001f0
  .word 0x02e0202d
  .word 0x9685006e
  .word 0x0c0af564
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x8e650030
  .word 0x0000302d
  .word 0x0c0a0994
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xa7a001d0
  .word 0x926200c8
  .word 0x7fa20140
  .word 0x7ba20150
  .word 0x10400005
  .word 0x00000000
  .word 0x24020001
  .word 0x7fa20130
  .word 0x10000003
  .word 0x00000000
  .word 0x926200c9
  .word 0x7fa20130
  .word 0x7ba20150
  .word 0x10400005
  .word 0x00000000
  .word 0x24020001
  .word 0x7fa20120
  .word 0x10000006
  .word 0x00000000
  .word 0x8ee40a2c
  .word 0x0c0c23e0
  .word 0x00000000
  .word 0x304200ff
  .word 0x7fa20120
  .word 0xc66000e0
  .word 0x46800060
  .word 0x7ba20130
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000d83
  .word 0x4480a800
  .word 0x966200ce
  .word 0x30420006
  .word 0x10400003
  .word 0x00000000
  .word 0xc780839c
  .word 0x4600b582
  .word 0x8ec40030
  .word 0x0c0af520
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8ee40a2c
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x305100ff
  .word 0x92e200a2
  .word 0x14400013
  .word 0x00000000
  .word 0x96e300a4
  .word 0x24020001
  .word 0x14620008
  .word 0x00000000
  .word 0x322200ff
  .word 0x000218c0
  .word 0x8f82b7d4
  .word 0x00431021
  .word 0xafa20270
  .word 0x1000000a
  .word 0x00000000
  .word 0x2462fffe
  .word 0x000218c0
  .word 0x8f82b7d8
  .word 0x00431021
  .word 0xafa20270
  .word 0x10000003
  .word 0x00000000
  .word 0x27829838
  .word 0xafa20270
  .word 0x8e6300e8
  .word 0x3c020010
  .word 0x00621024
  .word 0x0002102b
  .word 0x7fa20110
  .word 0x966200ce
  .word 0x30420006
  .word 0x0002102b
  .word 0x7fa20100
  .word 0x0280202d
  .word 0x0c0a283c
  .word 0x00000000
  .word 0x10400014
  .word 0x00000000
  .word 0x24030001
  .word 0x7ba20150
  .word 0x10430007
  .word 0x00000000
  .word 0x7ba20100
  .word 0x1440000d
  .word 0x00000000
  .word 0x7ba20110
  .word 0x1440000a
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000b
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000202d
  .word 0x8e650030
  .word 0x24060003
  .word 0x0c0a21b8
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x966200fa
  .word 0x30420004
  .word 0x1440000b
  .word 0x00000000
  .word 0x8e640030
  .word 0x8e850030
  .word 0x0000302d
  .word 0x0c0a21b8
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x0000282d
  .word 0x0c0a2254
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x96820018
  .word 0x34420200
  .word 0xa6820018
  .word 0xafa00240
  .word 0x322200ff
  .word 0x7fa200f0
  .word 0x00021840
  .word 0x00621021
  .word 0x7fa200e0
  .word 0x1000070a
  .word 0x00000000
  .word 0x24020004
  .word 0xafa20230
  .word 0x0000a82d
  .word 0x8fa20240
  .word 0x000218c0
  .word 0x00621023
  .word 0x00021080
  .word 0x02621021
  .word 0x7fa200d0
  .word 0x10000510
  .word 0x00000000
  .word 0x24020001
  .word 0xafa20160
  .word 0x7ba200d0
  .word 0x944200fa
  .word 0x30420004
  .word 0x1440005e
  .word 0x00000000
  .word 0x92e200a2
  .word 0x1440004f
  .word 0x00000000
  .word 0x24040007
  .word 0x7ba200f0
  .word 0x1044002b
  .word 0x00000000
  .word 0x8f83b794
  .word 0x7ba200e0
  .word 0x00431021
  .word 0x00551021
  .word 0x90510018
  .word 0x966200cc
  .word 0x30420004
  .word 0x1040004f
  .word 0x00000000
  .word 0x96e300a4
  .word 0x24020008
  .word 0x1062001b
  .word 0x00000000
  .word 0x10640016
  .word 0x00000000
  .word 0x24020004
  .word 0x10620010
  .word 0x00000000
  .word 0x8fa20160
  .word 0x10620003
  .word 0x00000000
  .word 0x10000041
  .word 0x00000000
  .word 0x8ee40a2c
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x304300ff
  .word 0x24020003
  .word 0x1462003a
  .word 0x00000000
  .word 0x24110005
  .word 0x10000037
  .word 0x00000000
  .word 0x24110006
  .word 0x10000034
  .word 0x00000000
  .word 0x24110005
  .word 0x10000031
  .word 0x00000000
  .word 0x24110005
  .word 0x1000002e
  .word 0x00000000
  .word 0x24020002
  .word 0xa7a20190
  .word 0x8ee40a2c
  .word 0x0c0c24e8
  .word 0x00000000
  .word 0x304300ff
  .word 0x24020001
  .word 0x10620013
  .word 0x00000000
  .word 0x24020003
  .word 0x1062000b
  .word 0x00000000
  .word 0x24020002
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x24110005
  .word 0x2402000d
  .word 0xa7a20180
  .word 0x10000018
  .word 0x00000000
  .word 0x24110006
  .word 0x2402000e
  .word 0xa7a20180
  .word 0x10000013
  .word 0x00000000
  .word 0x24110004
  .word 0x2402000c
  .word 0xa7a20180
  .word 0x1000000e
  .word 0x00000000
  .word 0x8685006e
  .word 0x8e840030
  .word 0x0c0be3ac
  .word 0x00000000
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x2402ffff
  .word 0x16220005
  .word 0x00000000
  .word 0x24110004
  .word 0x10000002
  .word 0x00000000
  .word 0x2411000b
  .word 0x24020006
  .word 0x12220009
  .word 0x00000000
  .word 0x24020005
  .word 0x12220006
  .word 0x00000000
  .word 0x24020004
  .word 0x12220003
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x3225ffff
  .word 0x02e0202d
  .word 0x0c0a0ff8
  .word 0x00000000
  .word 0xafa2017c
  .word 0x1440000a
  .word 0x00000000
  .word 0x3225ffff
  .word 0x02e0202d
  .word 0x0c0a0f90
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0xafa20210
  .word 0x10000002
  .word 0x00000000
  .word 0xafa00210
  .word 0x3225ffff
  .word 0x02e0202d
  .word 0x0c0a0f1c
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0xafa20220
  .word 0x10000005
  .word 0x00000000
  .word 0xafa0017c
  .word 0xafa00210
  .word 0x24020001
  .word 0xafa20220
  .word 0x8fa2017c
  .word 0x1440000a
  .word 0x00000000
  .word 0x3225ffff
  .word 0x8e840030
  .word 0x4600a306
  .word 0x0c0a0d78
  .word 0x00000000
  .word 0x0002f43c
  .word 0x001ef43f
  .word 0x10000002
  .word 0x00000000
  .word 0x845e0000
  .word 0x8fa20230
  .word 0x03c2f021
  .word 0x2402000b
  .word 0x12220003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x24030002
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x00112c3c
  .word 0x00052c3f
  .word 0x97a20230
  .word 0x0040302d
  .word 0x3067ffff
  .word 0x8e840030
  .word 0x4600a306
  .word 0x0c0a1080
  .word 0x00000000
  .word 0xafa2028c
  .word 0x87a301d0
  .word 0xa4430048
  .word 0xfc500060
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa20240
  .word 0x14400073
  .word 0x00000000
  .word 0x16a00071
  .word 0x00000000
  .word 0x24030001
  .word 0x7ba20100
  .word 0x10430004
  .word 0x00000000
  .word 0x7ba20110
  .word 0x1443006a
  .word 0x00000000
  .word 0x7ba20150
  .word 0x14400067
  .word 0x00000000
  .word 0x92e200a2
  .word 0x14400025
  .word 0x00000000
  .word 0x7ba20110
  .word 0x10400012
  .word 0x00000000
  .word 0x3c0243c8
  .word 0x44826000
  .word 0x02e0202d
  .word 0x8e650030
  .word 0x24060003
  .word 0x0c0adef4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0x8fa3028c
  .word 0xdc630058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000c
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0x8fa3028c
  .word 0xdc630058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000040
  .word 0x00000000
  .word 0x7ba20110
  .word 0x1040001a
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000d
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0x8fa3028c
  .word 0xdc630058
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
  .word 0x3442000e
  .word 0xa4620018
  .word 0x10000024
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a283c
  .word 0x00000000
  .word 0x10400011
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000b
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0x8fa3028c
  .word 0xdc630058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000a
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0x8fa3028c
  .word 0xdc630058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x9685006e
  .word 0x27a602be
  .word 0x27a702bc
  .word 0x27a802ba
  .word 0x27a902b8
  .word 0x0c0a2950
  .word 0x00000000
  .word 0x87a202be
  .word 0x00021880
  .word 0x8f82b6fc
  .word 0x00431021
  .word 0x8c440c24
  .word 0x8e850030
  .word 0x8e660030
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0x8fa3028c
  .word 0xdc630058
  .word 0xfc430008
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa20240
  .word 0x14400027
  .word 0x00000000
  .word 0x16a00025
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a283c
  .word 0x00000000
  .word 0x14400020
  .word 0x00000000
  .word 0x7ba20100
  .word 0x1440001d
  .word 0x00000000
  .word 0x7ba20110
  .word 0x1440001a
  .word 0x00000000
  .word 0x7ba20150
  .word 0x14400017
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000a
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0x8fa3028c
  .word 0xdc630058
  .word 0xfc430008
  .word 0x2bc1000f
  .word 0x10200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x27c2fff1
  .word 0xa4820048
  .word 0xfc900060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba20130
  .word 0x2442ffff
  .word 0x12a20008
  .word 0x00000000
  .word 0x00151880
  .word 0x8fa20270
  .word 0x00431021
  .word 0x84430000
  .word 0x2402ffff
  .word 0x14620008
  .word 0x00000000
  .word 0x3225ffff
  .word 0x8e840030
  .word 0x4600a306
  .word 0x0c0a0e34
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x8fa20230
  .word 0x0002143c
  .word 0x0002143f
  .word 0x00621021
  .word 0x0002143c
  .word 0x0002143f
  .word 0x7fa200c0
  .word 0x87a301d0
  .word 0x00621021
  .word 0xa7a201d0
  .word 0x7ba20130
  .word 0x2442ffff
  .word 0x12a20009
  .word 0x00000000
  .word 0x00151880
  .word 0x8fa20270
  .word 0x00431021
  .word 0x80420002
  .word 0xafa20230
  .word 0x2403ffff
  .word 0x14430003
  .word 0x00000000
  .word 0x24020004
  .word 0xafa20230
  .word 0x7ba200c0
  .word 0x0002143c
  .word 0x0002143f
  .word 0x03c2082a
  .word 0x1020000d
  .word 0x00000000
  .word 0x005e1023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc780839c
  .word 0x46010002
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa7a201e0
  .word 0x10000002
  .word 0x00000000
  .word 0xa7a001e0
  .word 0x8e6200d0
  .word 0x14400004
  .word 0x00000000
  .word 0x8e6200d4
  .word 0x10400004
  .word 0x00000000
  .word 0x87a201e0
  .word 0x2442000c
  .word 0xa7a201e0
  .word 0x8e6200d4
  .word 0x10400009
  .word 0x00000000
  .word 0x966300cc
  .word 0x24020400
  .word 0x10620005
  .word 0x00000000
  .word 0x24020001
  .word 0xafa20220
  .word 0x10000008
  .word 0x00000000
  .word 0x966300cc
  .word 0x24020400
  .word 0x14620004
  .word 0x00000000
  .word 0x24020001
  .word 0xafa20220
  .word 0xafa00160
  .word 0x30620004
  .word 0x14400006
  .word 0x00000000
  .word 0x7ba200d0
  .word 0x944200fa
  .word 0x30420004
  .word 0x10400002
  .word 0x00000000
  .word 0xafa00160
  .word 0x7ba200d0
  .word 0x944200fa
  .word 0x30420004
  .word 0x104000c7
  .word 0x00000000
  .word 0x2bc10007
  .word 0x14200004
  .word 0x00000000
  .word 0x27c2fffa
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x0002143c
  .word 0x0002143f
  .word 0x7fa200b0
  .word 0x3225ffff
  .word 0x8e840030
  .word 0x4600a306
  .word 0x0c0a0dd4
  .word 0x00000000
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x92e200a2
  .word 0x14400011
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000e
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0x8fa3028c
  .word 0xdc630058
  .word 0xfc430008
  .word 0x7ba300b0
  .word 0xa4430048
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050002
  .word 0x24060009
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0x8fa3028c
  .word 0xdc630058
  .word 0xfc430008
  .word 0x0011143c
  .word 0x0002143f
  .word 0x28410009
  .word 0x14200004
  .word 0x00000000
  .word 0x2442fff8
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xa4820048
  .word 0xde820000
  .word 0xfc820060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e850030
  .word 0x8f82b6fc
  .word 0x8c440cf8
  .word 0x00a0302d
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0x8fa3028c
  .word 0xdc630058
  .word 0xfc430008
  .word 0xa4510048
  .word 0xfc500060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e850030
  .word 0x8f82b6fc
  .word 0x8c440cf0
  .word 0x00a0302d
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0x8fa3028c
  .word 0xdc630058
  .word 0xfc430008
  .word 0x7ba300b0
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x27a40290
  .word 0x0c0b5770
  .word 0x00000000
  .word 0x3c020010
  .word 0xafa20298
  .word 0x0280202d
  .word 0x0280282d
  .word 0x27a60290
  .word 0x24070001
  .word 0x00e0402d
  .word 0x0c0b5f88
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0x8fa3028c
  .word 0xdc630058
  .word 0xfc430008
  .word 0x7ba300c0
  .word 0x0003243c
  .word 0x0004243f
  .word 0x00041883
  .word 0x00831823
  .word 0xa4430048
  .word 0xfc500060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e820030
  .word 0x904300a2
  .word 0x24020001
  .word 0x14620014
  .word 0x00000000
  .word 0x7ba20150
  .word 0x14400011
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050018
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b6dd0
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
  .word 0x0c09fcbc
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030005
  .word 0xa0430000
  .word 0x8fa3028c
  .word 0xdc630058
  .word 0xfc430008
  .word 0x7ba300c0
  .word 0xa4430048
  .word 0x2403000c
  .word 0xa443004a
  .word 0xfc500060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba20150
  .word 0x14400010
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000a
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020040
  .word 0x00621025
  .word 0xac82000c
  .word 0x8f83b6fc
  .word 0x94620018
  .word 0x3442000f
  .word 0xa4620018
  .word 0x0000882d
  .word 0x1000026b
  .word 0x00000000
  .word 0x7ba200d0
  .word 0x804200f8
  .word 0xafa20200
  .word 0x24030012
  .word 0x10430006
  .word 0x00000000
  .word 0x24030008
  .word 0x10430003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x7ba20130
  .word 0x2442ffff
  .word 0x16a20005
  .word 0x00000000
  .word 0x8fa20220
  .word 0x2442ffff
  .word 0x12220003
  .word 0x00000000
  .word 0x24020002
  .word 0xafa20200
  .word 0x87a20200
  .word 0x0040282d
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8ec40030
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040902d
  .word 0x24030004
  .word 0xa0430000
  .word 0x8fa3028c
  .word 0xdc630058
  .word 0xfc430008
  .word 0x2403fffd
  .word 0x8fa20200
  .word 0x10430006
  .word 0x00000000
  .word 0x24030016
  .word 0x10430003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x2bc10007
  .word 0x14200004
  .word 0x00000000
  .word 0x27c2fffa
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xa6420048
  .word 0x10000002
  .word 0x00000000
  .word 0xa65e0048
  .word 0x8e6200d4
  .word 0x10400004
  .word 0x00000000
  .word 0x86420048
  .word 0x24420005
  .word 0xa6420048
  .word 0xfe500060
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde420058
  .word 0xffa20260
  .word 0x8fa20240
  .word 0x14400007
  .word 0x00000000
  .word 0x16a00005
  .word 0x00000000
  .word 0x16200003
  .word 0x00000000
  .word 0xdfa20260
  .word 0xffa20258
  .word 0x966200cc
  .word 0x30420004
  .word 0x10400018
  .word 0x00000000
  .word 0x7ba200d0
  .word 0x944200fa
  .word 0x30420004
  .word 0x14400013
  .word 0x00000000
  .word 0x7ba20150
  .word 0x14400010
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050018
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa20220
  .word 0x2442ffff
  .word 0x16220005
  .word 0x00000000
  .word 0x7ba20130
  .word 0x2442ffff
  .word 0x12a20021
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c42000c
  .word 0x30420010
  .word 0x10400007
  .word 0x00000000
  .word 0x8fa20220
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600b003
  .word 0x4600ad40
  .word 0x4600a824
  .word 0x44020000
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x8ec40030
  .word 0x0000282d
  .word 0x0c0af48c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e6200d4
  .word 0x10400030
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0bf458
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420c8c
  .word 0x0040202d
  .word 0x8e850030
  .word 0x8e660030
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0x8fa3028c
  .word 0xdc630058
  .word 0xfc430008
  .word 0xa45e0048
  .word 0x001e1c3c
  .word 0x00031c3f
  .word 0x24630005
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000d
  .word 0x24050002
  .word 0x24060006
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0x8fa3028c
  .word 0xdc630058
  .word 0xfc430008
  .word 0xa45e0048
  .word 0x001e1c3c
  .word 0x00031c3f
  .word 0x24630005
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x966300cc
  .word 0x24020400
  .word 0x14620020
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440c90
  .word 0x8e850030
  .word 0x8ec60030
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050002
  .word 0x24060007
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
  .word 0x2402000a
  .word 0xa7a201c0
  .word 0x87a20190
  .word 0x0040102d
  .word 0x04400017
  .word 0x00000000
  .word 0x87a20180
  .word 0x0040102d
  .word 0x04400013
  .word 0x00000000
  .word 0x97a20190
  .word 0x0040282d
  .word 0x97a20180
  .word 0x0040302d
  .word 0x2404000c
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
  .word 0x2402ffff
  .word 0xa7a20190
  .word 0xa7a20180
  .word 0x8fa20160
  .word 0x1040012d
  .word 0x00000000
  .word 0x24030001
  .word 0x7ba20110
  .word 0x10430004
  .word 0x00000000
  .word 0x7ba20100
  .word 0x14430020
  .word 0x00000000
  .word 0x7ba30130
  .word 0x7ba20120
  .word 0x1462001c
  .word 0x00000000
  .word 0x8fa20220
  .word 0x2442ffff
  .word 0x16220018
  .word 0x00000000
  .word 0x70601628
  .word 0x2442ffff
  .word 0x16a20014
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440c58
  .word 0x8e850030
  .word 0x8ec60030
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000002c
  .word 0x00000000
  .word 0x7ba20130
  .word 0x28410002
  .word 0x14200028
  .word 0x00000000
  .word 0x16a00003
  .word 0x00000000
  .word 0x12200024
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440c54
  .word 0x8e850030
  .word 0x8ec60030
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24030001
  .word 0x7ba20110
  .word 0x10430010
  .word 0x00000000
  .word 0x7ba20100
  .word 0x1043000d
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000f
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x87a202be
  .word 0x00021880
  .word 0x8f82b6fc
  .word 0x00431021
  .word 0x8c440c24
  .word 0x8e850030
  .word 0x8ec60030
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x92e200a2
  .word 0x1440003b
  .word 0x00000000
  .word 0xa7a001ae
  .word 0x0000102d
  .word 0x96e500a4
  .word 0x24030009
  .word 0x10a3001e
  .word 0x00000000
  .word 0x24030008
  .word 0x10a30011
  .word 0x00000000
  .word 0x24040004
  .word 0x10a40003
  .word 0x00000000
  .word 0x1000001e
  .word 0x00000000
  .word 0x24030002
  .word 0x16a3001b
  .word 0x00000000
  .word 0x8fa30220
  .word 0x2463ffff
  .word 0x16230017
  .word 0x00000000
  .word 0x0004143c
  .word 0x0002143f
  .word 0x10000013
  .word 0x00000000
  .word 0x24030001
  .word 0x16a30010
  .word 0x00000000
  .word 0x8fa30220
  .word 0x2463ffff
  .word 0x1623000c
  .word 0x00000000
  .word 0x24020004
  .word 0x10000009
  .word 0x00000000
  .word 0x24030001
  .word 0x16a30006
  .word 0x00000000
  .word 0x8fa30220
  .word 0x2463ffff
  .word 0x16230002
  .word 0x00000000
  .word 0x24020004
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x1460000e
  .word 0x00000000
  .word 0x8ee40a2c
  .word 0x0c0c23b4
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00021840
  .word 0x3c020069
  .word 0x24420e20
  .word 0x00431021
  .word 0x84420000
  .word 0x10000003
  .word 0x00000000
  .word 0xa7a001ae
  .word 0x0000102d
  .word 0x87a301ae
  .word 0x0060182d
  .word 0x04600013
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x0460000f
  .word 0x00000000
  .word 0x97a301ae
  .word 0x0060282d
  .word 0x3046ffff
  .word 0x2404000a
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
  .word 0x8f82b6fc
  .word 0x8c440c4c
  .word 0x8e850030
  .word 0x8ec60030
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba20130
  .word 0x2442ffff
  .word 0x16a20029
  .word 0x00000000
  .word 0x8fa20220
  .word 0x2442ffff
  .word 0x16220025
  .word 0x00000000
  .word 0x966200ce
  .word 0x30420006
  .word 0x10400021
  .word 0x00000000
  .word 0x87a202bc
  .word 0x00021880
  .word 0x8f82b6fc
  .word 0x00431021
  .word 0x8c440c24
  .word 0x8e850030
  .word 0x8ec60030
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000c
  .word 0x0000282d
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
  .word 0x8fa20220
  .word 0x2442ffff
  .word 0x16220034
  .word 0x00000000
  .word 0x7ba20130
  .word 0x2442ffff
  .word 0x16a20030
  .word 0x00000000
  .word 0x2402ffff
  .word 0xa7a201b0
  .word 0x966200ce
  .word 0x30420006
  .word 0x10400005
  .word 0x00000000
  .word 0x87a202b8
  .word 0xa7a201b0
  .word 0x10000010
  .word 0x00000000
  .word 0x7ba20130
  .word 0x28410002
  .word 0x1020000a
  .word 0x00000000
  .word 0x8e820030
  .word 0x904200a2
  .word 0x14400008
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a283c
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x87a202ba
  .word 0xa7a201b0
  .word 0x87a201b0
  .word 0x0040102d
  .word 0x04400013
  .word 0x00000000
  .word 0x00021880
  .word 0x8f82b6fc
  .word 0x00431021
  .word 0x8c440c24
  .word 0x8e850030
  .word 0x8ec60030
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e640030
  .word 0x8e850030
  .word 0x24060002
  .word 0x0c0a0994
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdfa30260
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa20220
  .word 0x2442ffff
  .word 0x12220026
  .word 0x00000000
  .word 0x8fa2017c
  .word 0x10400008
  .word 0x00000000
  .word 0x00111840
  .word 0x00431021
  .word 0x84430002
  .word 0x84420000
  .word 0x00621823
  .word 0x10000002
  .word 0x00000000
  .word 0x8fa30210
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46140032
  .word 0x45010007
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46140003
  .word 0x46000024
  .word 0x44030000
  .word 0x03c3f021
  .word 0x87a201e0
  .word 0x0040102d
  .word 0x0062082a
  .word 0x10200008
  .word 0x00000000
  .word 0x00031c3c
  .word 0x00031c3f
  .word 0x87a201e0
  .word 0x00431023
  .word 0xa7a201e0
  .word 0x10000002
  .word 0x00000000
  .word 0xa7a001e0
  .word 0x26310001
  .word 0x8fa20220
  .word 0x0222102a
  .word 0x1440fd93
  .word 0x00000000
  .word 0x26b50001
  .word 0x7ba20130
  .word 0x02a2102a
  .word 0x1440faee
  .word 0x00000000
  .word 0x7ba200d0
  .word 0x245500e8
  .word 0x8c4300e8
  .word 0x3c020010
  .word 0x00621024
  .word 0x10400035
  .word 0x00000000
  .word 0x7ba20150
  .word 0x14400032
  .word 0x00000000
  .word 0x8ec40030
  .word 0x24050010
  .word 0x0c0a084c
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdfa30260
  .word 0xfc430008
  .word 0x24050001
  .word 0xa4450048
  .word 0x2403000c
  .word 0xa443004a
  .word 0xfc500060
  .word 0x0220202d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e6200d0
  .word 0x14400012
  .word 0x00000000
  .word 0x8ec50030
  .word 0x8f82b6fc
  .word 0x8c440cf4
  .word 0x00a0302d
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8ec40030
  .word 0x0c0a1324
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
  .word 0x7ba200d0
  .word 0x245100e0
  .word 0x0280202d
  .word 0x02c0282d
  .word 0x0220302d
  .word 0x966700cc
  .word 0x966800ce
  .word 0x0c0b5f88
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdfa30260
  .word 0xfc430008
  .word 0x87a301c0
  .word 0xa4430048
  .word 0x87a301e0
  .word 0xa443004a
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
  .word 0xdfa30260
  .word 0xfc430008
  .word 0x87a301c0
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba20140
  .word 0x2443ffff
  .word 0x8fa20240
  .word 0x1443000f
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b6024
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdfa30260
  .word 0xfc430008
  .word 0x87a301c0
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa20240
  .word 0x14400014
  .word 0x00000000
  .word 0x96820018
  .word 0x30420004
  .word 0x14400010
  .word 0x00000000
  .word 0x0280202d
  .word 0x928500ca
  .word 0x0c0b5fec
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdfa30260
  .word 0xfc430008
  .word 0x87a301c0
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba20140
  .word 0x2443ffff
  .word 0x8fa20240
  .word 0x14430027
  .word 0x00000000
  .word 0x868500dc
  .word 0x10a00012
  .word 0x00000000
  .word 0x8e840030
  .word 0x0c0af614
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdfa30260
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x866500dc
  .word 0x10a00010
  .word 0x00000000
  .word 0x8e640030
  .word 0x0c0af614
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdfa30260
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x9686006e
  .word 0x8e840030
  .word 0x8ec50030
  .word 0x966700cc
  .word 0x966800ce
  .word 0x0000482d
  .word 0x240a0001
  .word 0x0220582d
  .word 0x0c0af6f4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x87a301c0
  .word 0xa4430048
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa20240
  .word 0x14400018
  .word 0x00000000
  .word 0x7ba200d0
  .word 0x8c4200e0
  .word 0x10400014
  .word 0x00000000
  .word 0x8ec40030
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0af48c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x87a301c0
  .word 0xa4430048
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba20150
  .word 0x144000c5
  .word 0x00000000
  .word 0x8ec20030
  .word 0x904300a2
  .word 0x24020001
  .word 0x146200c0
  .word 0x00000000
  .word 0x8fa201f0
  .word 0x1840006d
  .word 0x00000000
  .word 0x8e820030
  .word 0x904200a2
  .word 0x144000b9
  .word 0x00000000
  .word 0x24040002
  .word 0x3c050008
  .word 0x0c0b5384
  .word 0x00000000
  .word 0x3051ffff
  .word 0x92820028
  .word 0x1c40003e
  .word 0x00000000
  .word 0x8e820030
  .word 0x944300a4
  .word 0x24020001
  .word 0x10620039
  .word 0x00000000
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x2c410032
  .word 0x10200033
  .word 0x00000000
  .word 0x8e820030
  .word 0x904200a2
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000002a
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x84830a38
  .word 0x2402ffff
  .word 0x10620024
  .word 0x00000000
  .word 0x8fa201f0
  .word 0x02221023
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x1c600016
  .word 0x00000000
  .word 0x24040002
  .word 0x3c050008
  .word 0x0c0b5384
  .word 0x00000000
  .word 0x3044ffff
  .word 0x8f83b6fc
  .word 0x84620a3a
  .word 0x00021043
  .word 0x0044102b
  .word 0x14400013
  .word 0x00000000
  .word 0x84710a38
  .word 0x0c0adc18
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1222000c
  .word 0x00000000
  .word 0x24020001
  .word 0x1000000a
  .word 0x00000000
  .word 0x84820a3a
  .word 0x00021043
  .word 0x0043102a
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x10400013
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050016
  .word 0x8fa601f0
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b6dd0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdfa30260
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000062
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000d
  .word 0x8fa601f0
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdfa30260
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000051
  .word 0x00000000
  .word 0x8ea30000
  .word 0x3c020010
  .word 0x00621024
  .word 0x10400013
  .word 0x00000000
  .word 0x966600ce
  .word 0x0280202d
  .word 0x24050017
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b6dd0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdfa30260
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000003a
  .word 0x00000000
  .word 0x8fa201f0
  .word 0x14400037
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b584c
  .word 0x00000000
  .word 0x10400012
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000e
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdfa30260
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000021
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b5884
  .word 0x00000000
  .word 0x24030001
  .word 0x1443001b
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b57d4
  .word 0x00000000
  .word 0x14400016
  .word 0x00000000
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x9685006e
  .word 0x0c0c20bc
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x0280202d
  .word 0x2405000f
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdfa30260
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba200d0
  .word 0x245100fa
  .word 0x944200fa
  .word 0x30420001
  .word 0x10400037
  .word 0x00000000
  .word 0x27a40290
  .word 0x0c0b5770
  .word 0x00000000
  .word 0x3c020010
  .word 0xafa2029c
  .word 0x0260202d
  .word 0x0260282d
  .word 0x27a60290
  .word 0x24070001
  .word 0x00e0402d
  .word 0x0c0b5f88
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdfa30258
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x96220000
  .word 0x30420002
  .word 0x1040001e
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e640030
  .word 0x2405000a
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdfa30258
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e640030
  .word 0x0c0a1324
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdfa30258
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa20240
  .word 0x24420001
  .word 0xafa20240
  .word 0x8fa30240
  .word 0x7ba20140
  .word 0x0062102a
  .word 0x1440f8f3
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b704c
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050019
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x9683006c
  .word 0x24020002
  .word 0x10620009
  .word 0x00000000
  .word 0x24020003
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x6405001e
  .word 0x10000002
  .word 0x00000000
  .word 0x6405001e
  .word 0x0280202d
  .word 0x0c0a6758
  .word 0x00000000
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
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd02c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma pop
#pragma opt_loop_invariants reset
// FUN_00290bd0
void btlActionInitStateSkill(BtlAction* action)
{
    (void)action;
}


/* This skill path keeps the u32 argument live; other callers intentionally use u16. */

/* Skill-state reconstruction is complete; remaining drift is MWCC local-layout codegen. */
/* W373 pragma sweep nd/obj: base 11197/16672; singles LI=11166/16660 CS=12393/17036(over) LT=11197/16672 PR=12288/16848 SR=11197/16672 DA=11639/16696(over); retain LI on. */
#pragma opt_loop_invariants on
// FUN_00290be0
asm void btlActionUpdateStateSkill(BtlAction *action) 
{
  .set noreorder
  .word 0x27bdfac0
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
  .word 0x0080a02d
  .word 0x8c820030
  .word 0x805600a2
  .word 0x8c420a00
  .word 0xafa20450
  .word 0x8497006e
  .word 0x8c820038
  .word 0xafa20460
  .word 0xffa00410
  .word 0xffa00400
  .word 0xafa00390
  .word 0xafa00380
  .word 0xa7a00320
  .word 0xa7a003d0
  .word 0xafa003a0
  .word 0xafa002f0
  .word 0xafa002d0
  .word 0xafa002c0
  .word 0xafa002b0
  .word 0xafa002ac
  .word 0xafa00290
  .word 0xafa00280
  .word 0xafa0027c
  .word 0x64020006
  .word 0xa7a20300
  .word 0x00171080
  .word 0x00571021
  .word 0x00021040
  .word 0x00571021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x00431021
  .word 0x90420000
  .word 0x30420002
  .word 0x0002102b
  .word 0x7fa201e0
  .word 0x9482001a
  .word 0x30420010
  .word 0x0002102b
  .word 0x7fa201d0
  .word 0x10400005
  .word 0x00000000
  .word 0x7ba201e0
  .word 0x00401026
  .word 0x2c420001
  .word 0x7fa201d0
  .word 0x9682006c
  .word 0x38420003
  .word 0x2c420001
  .word 0x7fa201c0
  .word 0x0280202d
  .word 0x0c0b58a4
  .word 0x00000000
  .word 0xafa202ec
  .word 0x02e0202d
  .word 0x0c0b58dc
  .word 0x00000000
  .word 0x7fa201b0
  .word 0x96840072
  .word 0x0c0c2294
  .word 0x00000000
  .word 0x7fa201a0
  .word 0xafa00440
  .word 0xde900000
  .word 0x0280202d
  .word 0x0c0a29e0
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0xafa20438
  .word 0x96820018
  .word 0x30420100
  .word 0x10400002
  .word 0x00000000
  .word 0x2416ffff
  .word 0x24030001
  .word 0x64020001
  .word 0xa7a20310
  .word 0x0016b63c
  .word 0x0016b63f
  .word 0x16c0001a
  .word 0x00000000
  .word 0x8e840030
  .word 0x948300a4
  .word 0x2402000a
  .word 0x10620006
  .word 0x00000000
  .word 0x24020003
  .word 0x10620003
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x64020010
  .word 0xa7a20310
  .word 0x0c0b56fc
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x8e840030
  .word 0x0c0b571c
  .word 0x00000000
  .word 0x1040001c
  .word 0x00000000
  .word 0x64020010
  .word 0xa7a20310
  .word 0x10000018
  .word 0x00000000
  .word 0x16c30016
  .word 0x00000000
  .word 0x8e820030
  .word 0x944300a4
  .word 0x240200ee
  .word 0x1062000f
  .word 0x00000000
  .word 0x240200e9
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020126
  .word 0x10620009
  .word 0x00000000
  .word 0x24020110
  .word 0x10620006
  .word 0x00000000
  .word 0x2402010b
  .word 0x10620003
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x64020010
  .word 0xa7a20310
  .word 0x06c0005d
  .word 0x00000000
  .word 0x8fa202ec
  .word 0x1040000e
  .word 0x00000000
  .word 0x8e820038
  .word 0x8e840030
  .word 0x8c450030
  .word 0x0000302d
  .word 0x0c0a0994
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000002d
  .word 0x00000000
  .word 0x16c00018
  .word 0x00000000
  .word 0x26840038
  .word 0x0c0b4580
  .word 0x00000000
  .word 0x3044ffff
  .word 0x24050001
  .word 0x27a60518
  .word 0x0000382d
  .word 0x0000402d
  .word 0x00a0482d
  .word 0x0c0a021c
  .word 0x00000000
  .word 0x8e840030
  .word 0x27a50518
  .word 0x0000302d
  .word 0x0c0a08ac
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x8e840030
  .word 0x0c0bf72c
  .word 0x00000000
  .word 0x1040000f
  .word 0x00000000
  .word 0x8e840030
  .word 0x27a50518
  .word 0x0c0bf76c
  .word 0x00000000
  .word 0x8e840030
  .word 0x27a50518
  .word 0x0000302d
  .word 0x0c0a08ac
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000202d
  .word 0x8e850030
  .word 0x24060003
  .word 0x0c0a21b8
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x0000282d
  .word 0x0c0a2254
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x96820018
  .word 0x34420200
  .word 0xa6820018
  .word 0x0280202d
  .word 0x0c0b60cc
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x001710c0
  .word 0x00571023
  .word 0x0002f080
  .word 0x8f82b710
  .word 0x03c21021
  .word 0x94420002
  .word 0x30420100
  .word 0x10400004
  .word 0x00000000
  .word 0x24020003
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0x0002143c
  .word 0x0002143f
  .word 0x7fa20190
  .word 0x7ba201c0
  .word 0x1440000e
  .word 0x00000000
  .word 0x32e5ffff
  .word 0x8e840030
  .word 0x0c0af564
  .word 0x00000000
  .word 0x0040202d
  .word 0x7ba30190
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x8e840030
  .word 0x96850070
  .word 0x0c0af5a4
  .word 0x00000000
  .word 0x0040202d
  .word 0x7ba30190
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24030001
  .word 0x7ba201d0
  .word 0x1443051e
  .word 0x00000000
  .word 0x2402ffff
  .word 0x12c2051b
  .word 0x00000000
  .word 0x7ba201c0
  .word 0x144002ba
  .word 0x00000000
  .word 0x7ba201a0
  .word 0x144002b7
  .word 0x00000000
  .word 0x16c00028
  .word 0x00000000
  .word 0x96820018
  .word 0x30420040
  .word 0x14400037
  .word 0x00000000
  .word 0x8e820030
  .word 0x944400a4
  .word 0x0c0b7720
  .word 0x00000000
  .word 0x0040902d
  .word 0x0280202d
  .word 0x0c0b57ac
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x1240002b
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b8cfc
  .word 0x00000000
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x2402ffff
  .word 0x12220023
  .word 0x00000000
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x2c420014
  .word 0x14400003
  .word 0x00000000
  .word 0x1240001b
  .word 0x00000000
  .word 0x24020001
  .word 0xafa202f0
  .word 0x96820018
  .word 0x34420040
  .word 0xa6820018
  .word 0x10000014
  .word 0x00000000
  .word 0x16c30012
  .word 0x00000000
  .word 0x96820018
  .word 0x30420040
  .word 0x1440000e
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b8cfc
  .word 0x00000000
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x2402ffff
  .word 0x12220006
  .word 0x00000000
  .word 0x24020001
  .word 0xafa202f0
  .word 0x96820018
  .word 0x34420040
  .word 0xa6820018
  .word 0x0280202d
  .word 0x27a50528
  .word 0x0c0bf2a8
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x8c620c94
  .word 0xafa20528
  .word 0x8c620c98
  .word 0xafa2052c
  .word 0x8c620c9c
  .word 0xafa20530
  .word 0x02e0202d
  .word 0x0c0b58dc
  .word 0x00000000
  .word 0x1440001f
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b57d4
  .word 0x00000000
  .word 0x1440001a
  .word 0x00000000
  .word 0x26840038
  .word 0x0c0b4580
  .word 0x00000000
  .word 0x3044ffff
  .word 0x16c0000d
  .word 0x00000000
  .word 0x3083ffff
  .word 0x24020002
  .word 0x14620009
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0d5ff4
  .word 0x00000000
  .word 0x30420001
  .word 0x0002102b
  .word 0xafa202d0
  .word 0x10000008
  .word 0x00000000
  .word 0x24030001
  .word 0x16c30005
  .word 0x00000000
  .word 0x3082ffff
  .word 0x14430002
  .word 0x00000000
  .word 0xafa302d0
  .word 0x0280202d
  .word 0x8fa50450
  .word 0x0c0bf6ec
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420010
  .word 0x30420040
  .word 0x10400003
  .word 0x00000000
  .word 0x24020001
  .word 0xafa202d0
  .word 0x8f82b710
  .word 0x03c21021
  .word 0x94420002
  .word 0x30424000
  .word 0x10400005
  .word 0x00000000
  .word 0x24020001
  .word 0xafa202d0
  .word 0x2402000c
  .word 0xafa203a0
  .word 0x16c00020
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b58b4
  .word 0x00000000
  .word 0x1040001b
  .word 0x00000000
  .word 0x240200ea
  .word 0x12e20018
  .word 0x00000000
  .word 0x24020001
  .word 0xafa20280
  .word 0xafa202d0
  .word 0xafa002f0
  .word 0x0000202d
  .word 0x24050003
  .word 0x0c0a2254
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020040
  .word 0x00621025
  .word 0xac82000c
  .word 0x8f83b6fc
  .word 0x94620018
  .word 0x34420006
  .word 0xa4620018
  .word 0x16c00013
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b57ec
  .word 0x00000000
  .word 0x1040000e
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050010
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x8fa202f0
  .word 0x10400009
  .word 0x00000000
  .word 0x8e840030
  .word 0x0c0b7658
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24020001
  .word 0x16c2000c
  .word 0x00000000
  .word 0x8e840030
  .word 0x0c0be5a4
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x2402ffff
  .word 0x14620005
  .word 0x00000000
  .word 0x24030006
  .word 0x10000002
  .word 0x00000000
  .word 0x24030006
  .word 0x3066ffff
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x2405000c
  .word 0x24070004
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040982d
  .word 0xfc500060
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde730058
  .word 0x16c00019
  .word 0x00000000
  .word 0x8e840030
  .word 0x0c0a1890
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc530008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x0c0a182c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc530008
  .word 0x24030006
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x2405000c
  .word 0x0c0a0e34
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24520006
  .word 0x16c00004
  .word 0x00000000
  .word 0x24020010
  .word 0x10000002
  .word 0x00000000
  .word 0x24020011
  .word 0x3045ffff
  .word 0x0280202d
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040a82d
  .word 0xfc500060
  .word 0x02a0202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xdeb50058
  .word 0x8fa202f0
  .word 0x10400054
  .word 0x00000000
  .word 0x3224ffff
  .word 0x8fa20450
  .word 0x944500a4
  .word 0x0c0b8d74
  .word 0x00000000
  .word 0x0040902d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc530008
  .word 0xfc500060
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c0b8dbc
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa20450
  .word 0x944600a4
  .word 0x0280202d
  .word 0x2405000c
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
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
  .word 0x2404000a
  .word 0x24050002
  .word 0x24060012
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050005
  .word 0xa0450000
  .word 0xde230058
  .word 0xfc430008
  .word 0xa4450048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x0c0b7638
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
  .word 0xde330058
  .word 0xffb30400
  .word 0x0000902d
  .word 0x0c0b8df8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc530008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x96820018
  .word 0x30420010
  .word 0x0002282b
  .word 0x0280202d
  .word 0x24060001
  .word 0x0c0ae240
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc530008
  .word 0x001218c3
  .word 0x02431823
  .word 0xa4430048
  .word 0xfc500060
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde220058
  .word 0xffa20410
  .word 0x8fa202ec
  .word 0x10400004
  .word 0x00000000
  .word 0x8e860038
  .word 0x10000002
  .word 0x00000000
  .word 0x0000302d
  .word 0x32e7ffff
  .word 0x8fa40450
  .word 0x0280282d
  .word 0x0c0ae2dc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdfa30410
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa202f0
  .word 0x10400011
  .word 0x00000000
  .word 0x8fa40450
  .word 0x0080102d
  .word 0x944500a4
  .word 0x2406001d
  .word 0x0c0a15a4
  .word 0x00000000
  .word 0x0040882d
  .word 0x24040005
  .word 0xa0440000
  .word 0xdfa30400
  .word 0xfc430008
  .word 0xa0440020
  .word 0xdfa30410
  .word 0xfc430028
  .word 0x10000009
  .word 0x00000000
  .word 0x8fa40450
  .word 0x0080102d
  .word 0x944500a4
  .word 0x2406000d
  .word 0x0c0a15a4
  .word 0x00000000
  .word 0x0040882d
  .word 0xa4520048
  .word 0xfe300060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c09fcbc
  .word 0x00000000
  .word 0x0040902d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x2403000c
  .word 0xa4430048
  .word 0xfc500060
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa40528
  .word 0x8e850030
  .word 0x0000302d
  .word 0xde470058
  .word 0x24080100
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050002
  .word 0x0000302d
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e850030
  .word 0x8ca40a00
  .word 0x02e0302d
  .word 0x8fa702ec
  .word 0x0c0a1010
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0xa7a203f0
  .word 0x8e830030
  .word 0x0040102d
  .word 0x3045ffff
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8c640a00
  .word 0x0c0a0d78
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0xafa203b0
  .word 0x8e840030
  .word 0x2405000f
  .word 0x0c0a0e9c
  .word 0x00000000
  .word 0xa7a20300
  .word 0xde310058
  .word 0x8fa203b0
  .word 0x24430012
  .word 0x8fa203a0
  .word 0x0043082a
  .word 0x10200004
  .word 0x00000000
  .word 0x00629023
  .word 0x10000002
  .word 0x00000000
  .word 0x0000902d
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x2405000e
  .word 0x0000302d
  .word 0x24070005
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x2405000e
  .word 0x0c0a0d78
  .word 0x00000000
  .word 0x00029c3c
  .word 0x00139c3f
  .word 0x8fa4052c
  .word 0x8e850030
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080100
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xa4530048
  .word 0xfc500060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050002
  .word 0x97a60310
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xa4530048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa40530
  .word 0x8e850030
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080100
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xfc500060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000d
  .word 0x24050002
  .word 0x00a0302d
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x3c02ff80
  .word 0x34458080
  .word 0x0000302d
  .word 0x2407000c
  .word 0x24080004
  .word 0x0000482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8fa40450
  .word 0x87a503f0
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040982d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0x2403000f
  .word 0xa4430048
  .word 0xfc500060
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa40450
  .word 0x0c09ff20
  .word 0x00000000
  .word 0x8fa40450
  .word 0x0040282d
  .word 0x24060008
  .word 0x0000382d
  .word 0x24080003
  .word 0x24090001
  .word 0x0c0a174c
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
  .word 0x24030001
  .word 0x8fa202d0
  .word 0x14430028
  .word 0x00000000
  .word 0x8fa20280
  .word 0x14400025
  .word 0x00000000
  .word 0x8f82b710
  .word 0x03c21021
  .word 0x94420002
  .word 0x30420040
  .word 0x1440001f
  .word 0x00000000
  .word 0x16c00004
  .word 0x00000000
  .word 0x24020015
  .word 0x10000002
  .word 0x00000000
  .word 0x24020016
  .word 0x3045ffff
  .word 0x0280202d
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x8fa303b0
  .word 0x8fa203a0
  .word 0x0062102a
  .word 0x14400005
  .word 0x00000000
  .word 0x8fa203a0
  .word 0x00621023
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xa4820048
  .word 0xfc900060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde620058
  .word 0xffa20420
  .word 0x10000395
  .word 0x00000000
  .word 0x7ba201c0
  .word 0x144001d2
  .word 0x00000000
  .word 0x24030001
  .word 0x7ba201a0
  .word 0x144301ce
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x2405000c
  .word 0x24060006
  .word 0x24070004
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040882d
  .word 0xfc500060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde320058
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x2405000c
  .word 0x0c0a0e34
  .word 0x00000000
  .word 0x00029c3c
  .word 0x00139c3f
  .word 0x0280202d
  .word 0x24050010
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc520008
  .word 0xfc500060
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde350058
  .word 0x8e820030
  .word 0x944400a4
  .word 0x96850072
  .word 0x0c0b8f78
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc520008
  .word 0x26630006
  .word 0xa4430048
  .word 0xfc500060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c0b8fc8
  .word 0x00000000
  .word 0x0040902d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x24030017
  .word 0xa4430048
  .word 0xfc500060
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a53328
  .word 0x0c0b75a4
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
  .word 0x96860072
  .word 0x2402011d
  .word 0x10c20022
  .word 0x00000000
  .word 0x2402011c
  .word 0x10c2001f
  .word 0x00000000
  .word 0x24020117
  .word 0x10c2001c
  .word 0x00000000
  .word 0x24020114
  .word 0x10c20019
  .word 0x00000000
  .word 0x24020113
  .word 0x10c20016
  .word 0x00000000
  .word 0x27a40470
  .word 0x3c050069
  .word 0x24a53338
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x24040003
  .word 0x27a50470
  .word 0x0c0b75a4
  .word 0x00000000
  .word 0x0040202d
  .word 0x2405000a
  .word 0xa0450000
  .word 0x24030400
  .word 0xa4430008
  .word 0xa0450010
  .word 0x24030903
  .word 0xa4430018
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde220058
  .word 0xffa20400
  .word 0x24020001
  .word 0xafa202f0
  .word 0x8f82b710
  .word 0x24420002
  .word 0x005e1021
  .word 0x94430000
  .word 0x30620400
  .word 0x10400006
  .word 0x00000000
  .word 0x24110002
  .word 0x24020018
  .word 0xa7a20200
  .word 0x10000004
  .word 0x00000000
  .word 0x24110002
  .word 0x24020019
  .word 0xa7a20200
  .word 0x30621000
  .word 0x1040001c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b58b4
  .word 0x00000000
  .word 0xafa2027c
  .word 0x10400003
  .word 0x00000000
  .word 0x24020001
  .word 0xafa20280
  .word 0x0000202d
  .word 0x24050003
  .word 0x0c0a2254
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020040
  .word 0x00621025
  .word 0xac82000c
  .word 0x8f83b6fc
  .word 0x94620018
  .word 0x34420006
  .word 0xa4620018
  .word 0x3c023f80
  .word 0x44826000
  .word 0x3227ffff
  .word 0x8e840030
  .word 0x24050017
  .word 0x0000302d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdfa30400
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c09fcbc
  .word 0x00000000
  .word 0x0040982d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x2403000c
  .word 0xa4430048
  .word 0xfc500060
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440c94
  .word 0x8e850030
  .word 0x0000302d
  .word 0xde670058
  .word 0x24080100
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050002
  .word 0x0000302d
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440c98
  .word 0x8e850030
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080100
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050002
  .word 0x97a60310
  .word 0x0c0b7440
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
  .word 0x8f82b6fc
  .word 0x8c440c9c
  .word 0x8e850030
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080100
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000d
  .word 0x24050002
  .word 0x00a0302d
  .word 0x0c0b7440
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
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x87a50200
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040982d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x24050017
  .word 0x0c0a0e34
  .word 0x00000000
  .word 0xa6620048
  .word 0xfe700060
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde710058
  .word 0x0000902d
  .word 0x97a20200
  .word 0x0040282d
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x0c0a0d78
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x02429021
  .word 0x0c09fcbc
  .word 0x00000000
  .word 0xafa20214
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x2403000c
  .word 0xa4430048
  .word 0xfc500060
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440c94
  .word 0x8e850030
  .word 0x0000302d
  .word 0x8fa20214
  .word 0xdc470058
  .word 0x24080100
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdfa30400
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050002
  .word 0x0000302d
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdfa30400
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440d0c
  .word 0x8e850030
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080100
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xa4400048
  .word 0xfc500060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000e
  .word 0x24050002
  .word 0x24060003
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xa4400048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x3c02ff80
  .word 0x34458080
  .word 0x0000302d
  .word 0x2407000c
  .word 0x24080004
  .word 0x0000482d
  .word 0x0c0a174c
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
  .word 0x8f82b710
  .word 0x03c21021
  .word 0x94420002
  .word 0x30421000
  .word 0x10400022
  .word 0x00000000
  .word 0x8fa2027c
  .word 0x1440001f
  .word 0x00000000
  .word 0x8e820038
  .word 0xafa20460
  .word 0x0280202d
  .word 0x24050015
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xa4520048
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa20460
  .word 0x8c440030
  .word 0x8e850030
  .word 0x24060002
  .word 0x0c0a0994
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xa4520048
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde620058
  .word 0xffa20410
  .word 0x100001c1
  .word 0x00000000
  .word 0x24030001
  .word 0x7ba201c0
  .word 0x144301bd
  .word 0x00000000
  .word 0x7ba201a0
  .word 0x144001ba
  .word 0x00000000
  .word 0x16c0001f
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b58b4
  .word 0x00000000
  .word 0x1040001a
  .word 0x00000000
  .word 0x240200ea
  .word 0x12e20017
  .word 0x00000000
  .word 0x24020001
  .word 0xafa20280
  .word 0xafa202d0
  .word 0x0000202d
  .word 0x24050003
  .word 0x0c0a2254
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020040
  .word 0x00621025
  .word 0xac82000c
  .word 0x8f83b6fc
  .word 0x94620018
  .word 0x34420006
  .word 0xa4620018
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x24050015
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
  .word 0xde750058
  .word 0x0000882d
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x24050015
  .word 0x0c0a0e34
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24520006
  .word 0x8f82b710
  .word 0x03c21021
  .word 0x94420002
  .word 0x30420040
  .word 0x14400033
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b58a4
  .word 0x00000000
  .word 0x24060001
  .word 0x1446000e
  .word 0x00000000
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0c0ae240
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
  .word 0x8fa202d0
  .word 0x14400010
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050015
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
  .word 0x1000000e
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050017
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
  .word 0x26460006
  .word 0x8f82b6fc
  .word 0x8c440d04
  .word 0x8e850030
  .word 0x0000382d
  .word 0x24080100
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000137
  .word 0x00000000
  .word 0x7ba201d0
  .word 0x144000ca
  .word 0x00000000
  .word 0x2402ffff
  .word 0x12c200c7
  .word 0x00000000
  .word 0x24020001
  .word 0xafa202b0
  .word 0x7ba301e0
  .word 0x10620006
  .word 0x00000000
  .word 0x02e0202d
  .word 0x0c0b58dc
  .word 0x00000000
  .word 0x10400012
  .word 0x00000000
  .word 0x24030001
  .word 0x7ba201e0
  .word 0x1043000a
  .word 0x00000000
  .word 0x8e840030
  .word 0x02e0282d
  .word 0x0c0be3f4
  .word 0x00000000
  .word 0x0002943c
  .word 0x0012943f
  .word 0x2402ffff
  .word 0x16420002
  .word 0x00000000
  .word 0x24120004
  .word 0x64070002
  .word 0x1000000c
  .word 0x00000000
  .word 0x8e840030
  .word 0x02e0282d
  .word 0x0c0be3f4
  .word 0x00000000
  .word 0x0002943c
  .word 0x0012943f
  .word 0x2402ffff
  .word 0x16420002
  .word 0x00000000
  .word 0x24120007
  .word 0x64070003
  .word 0x8e840030
  .word 0x908200a2
  .word 0x24050001
  .word 0x14450010
  .word 0x00000000
  .word 0x948300a4
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x00431021
  .word 0x000218c0
  .word 0x8f82b728
  .word 0x00621021
  .word 0x84420018
  .word 0x30420001
  .word 0x10400004
  .word 0x00000000
  .word 0x0000382d
  .word 0xafa502ac
  .word 0xafa002b0
  .word 0x8f82b710
  .word 0x03c21021
  .word 0x94420002
  .word 0x30420100
  .word 0x1440001c
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0240282d
  .word 0x24060006
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040982d
  .word 0xfc500060
  .word 0x0260202d
  .word 0x24050001
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
  .word 0x10000009
  .word 0x00000000
  .word 0x0c09fcbc
  .word 0x00000000
  .word 0x0040982d
  .word 0xfc500060
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde750058
  .word 0x0000882d
  .word 0x3245ffff
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x0c0a0d78
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24520006
  .word 0x8f82b710
  .word 0x03c21021
  .word 0x94420002
  .word 0x30420040
  .word 0x1440002b
  .word 0x00000000
  .word 0x96820018
  .word 0x30420010
  .word 0x0002282b
  .word 0x0280202d
  .word 0x24060001
  .word 0x0c0ae240
  .word 0x00000000
  .word 0xafa20218
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x2a41000d
  .word 0x14200004
  .word 0x00000000
  .word 0x2643fff4
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x8fa20218
  .word 0xa4430048
  .word 0xfc500060
  .word 0x0040202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa20218
  .word 0xdc420058
  .word 0xffa20410
  .word 0x0280202d
  .word 0x24050016
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdfa30410
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba201e0
  .word 0x14400090
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0bf418
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420ca8
  .word 0x26460006
  .word 0x0040202d
  .word 0x8e850030
  .word 0x0000382d
  .word 0x24080100
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
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
  .word 0xde630058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000006b
  .word 0x00000000
  .word 0x0000a82d
  .word 0x0000882d
  .word 0x0000902d
  .word 0x96820018
  .word 0x30420100
  .word 0x1040005b
  .word 0x00000000
  .word 0x24040006
  .word 0x0c05d200
  .word 0x00000000
  .word 0x24040006
  .word 0x94450002
  .word 0x0c0b8d74
  .word 0x00000000
  .word 0xafa2021c
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc530008
  .word 0xfc500060
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c0b8dbc
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0x8fa3021c
  .word 0xdc630058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a53348
  .word 0x0c0b75a4
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
  .word 0xde310058
  .word 0x0c0b8df8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050004
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xa4430048
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24020001
  .word 0xafa20280
  .word 0x0000202d
  .word 0x24050003
  .word 0x0c0a2254
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020040
  .word 0x00621025
  .word 0xac82000c
  .word 0x8f83b6fc
  .word 0x94620018
  .word 0x34420006
  .word 0xa4620018
  .word 0x1000000a
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050025
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x32e2ffff
  .word 0xa7a20250
  .word 0x97a40250
  .word 0x27a5053c
  .word 0x27a60538
  .word 0x0c0a7a98
  .word 0x00000000
  .word 0x8fa4053c
  .word 0x8fa50538
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
  .word 0x97a40250
  .word 0x0c0a7b00
  .word 0x00000000
  .word 0xafa201fc
  .word 0x97a40250
  .word 0x27a5053c
  .word 0x27a60538
  .word 0x0c0a7b20
  .word 0x00000000
  .word 0x8f82b710
  .word 0x03c21021
  .word 0x94420002
  .word 0x30420002
  .word 0x0002102b
  .word 0x3048ffff
  .word 0x8fa401fc
  .word 0x8fa5053c
  .word 0x8fa60538
  .word 0x24070010
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
  .word 0x32e2ffff
  .word 0xa7a20240
  .word 0x97a40240
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
  .word 0x97a50240
  .word 0x24060008
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
  .word 0x97a40240
  .word 0x27a50470
  .word 0x0c0aedbc
  .word 0x00000000
  .word 0x8fa202f0
  .word 0x1040002d
  .word 0x00000000
  .word 0x0c09fcbc
  .word 0x00000000
  .word 0x0040a82d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xa4520048
  .word 0x02a0202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa40438
  .word 0x27a50470
  .word 0x24060001
  .word 0x0c0aeb00
  .word 0x00000000
  .word 0xafa2044c
  .word 0x24040005
  .word 0xa0440000
  .word 0xdfa30400
  .word 0xfc430008
  .word 0xa0440020
  .word 0xdea30058
  .word 0xfc430028
  .word 0xfc500060
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x97a40250
  .word 0x24050001
  .word 0x0c0b7528
  .word 0x00000000
  .word 0xafa20448
  .word 0x24030005
  .word 0xa0430000
  .word 0xdfa30400
  .word 0xfc430008
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000001e
  .word 0x00000000
  .word 0x8fa40438
  .word 0x27a50470
  .word 0x0000302d
  .word 0x0c0aeb00
  .word 0x00000000
  .word 0xafa2044c
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xa4520048
  .word 0xfc500060
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x97a40250
  .word 0x0000282d
  .word 0x0c0b7528
  .word 0x00000000
  .word 0xafa20448
  .word 0x24030004
  .word 0xa0430000
  .word 0x8fa3044c
  .word 0xdc630058
  .word 0xfc430008
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x9683006a
  .word 0x24020001
  .word 0x14620005
  .word 0x00000000
  .word 0x8fa20460
  .word 0x8c460030
  .word 0x10000002
  .word 0x00000000
  .word 0x8e860030
  .word 0x8fa40438
  .word 0x8e850030
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040882d
  .word 0x24040004
  .word 0xa0440000
  .word 0x8fa3044c
  .word 0xdc630058
  .word 0xfc430008
  .word 0xa0440010
  .word 0x8fa30448
  .word 0xdc630058
  .word 0xfc430018
  .word 0x8f82b710
  .word 0x03c21021
  .word 0x94420002
  .word 0x30420080
  .word 0x10400002
  .word 0x00000000
  .word 0xfe300060
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde220058
  .word 0x7fa20180
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
  .word 0x02e0202d
  .word 0x0c0bf7b4
  .word 0x00000000
  .word 0x1040000d
  .word 0x00000000
  .word 0x0040202d
  .word 0x0280282d
  .word 0x0c09fd04
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xafa00444
  .word 0x2402001e
  .word 0xa7a203e0
  .word 0xa7a00330
  .word 0x97a40250
  .word 0x0c0b5330
  .word 0x00000000
  .word 0x3042ffff
  .word 0x7fa20170
  .word 0xa7a003c0
  .word 0xa7a00370
  .word 0x0017143c
  .word 0x0002143f
  .word 0xafa20260
  .word 0x10000491
  .word 0x00000000
  .word 0x97a20370
  .word 0x0040102d
  .word 0x00021080
  .word 0x02821021
  .word 0x8c520038
  .word 0x924200c8
  .word 0xa7a20350
  .word 0xa7a00340
  .word 0x264400c8
  .word 0x0c0ae590
  .word 0x00000000
  .word 0x7fa20160
  .word 0x8e4300d4
  .word 0x10600004
  .word 0x00000000
  .word 0x0280a82d
  .word 0x10000002
  .word 0x00000000
  .word 0x0240a82d
  .word 0x8e4200d0
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e840030
  .word 0x908500a2
  .word 0x8ea40030
  .word 0x908400a2
  .word 0x10a40004
  .word 0x00000000
  .word 0x8fa40390
  .word 0x24840001
  .word 0xafa40390
  .word 0x97a40350
  .word 0x0080282d
  .word 0x000520c0
  .word 0x00852023
  .word 0x00042080
  .word 0x02442021
  .word 0x8c8500cc
  .word 0x3c040010
  .word 0x00a42024
  .word 0x10800008
  .word 0x00000000
  .word 0x8fa40380
  .word 0x24840001
  .word 0xafa40380
  .word 0x964500ce
  .word 0x97a40320
  .word 0x00852025
  .word 0xa7a40320
  .word 0x8ea40030
  .word 0x908600a2
  .word 0x24050001
  .word 0x7fa50150
  .word 0x14c5000e
  .word 0x00000000
  .word 0x948600a4
  .word 0x000628c0
  .word 0x00a62821
  .word 0x00052840
  .word 0x00a62821
  .word 0x00053080
  .word 0x8f85b714
  .word 0x00a62821
  .word 0x90a50000
  .word 0x30a50001
  .word 0x0005282b
  .word 0x38a50001
  .word 0x7fa50150
  .word 0x14400003
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x2402002d
  .word 0xa7a203e0
  .word 0x0c0af520
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x964300cc
  .word 0x24020400
  .word 0x10620046
  .word 0x00000000
  .word 0x8e4200d4
  .word 0x24070001
  .word 0x10470042
  .word 0x00000000
  .word 0x7ba20160
  .word 0x34481000
  .word 0x8fa40438
  .word 0x8e850030
  .word 0x8ea60030
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040882d
  .word 0x8fa20444
  .word 0x1440001a
  .word 0x00000000
  .word 0x8f82b710
  .word 0x03c21021
  .word 0x94420002
  .word 0x30422000
  .word 0x1440000c
  .word 0x00000000
  .word 0x24030004
  .word 0xa2230000
  .word 0x8fa2044c
  .word 0xdc420058
  .word 0xfe220008
  .word 0xa2230010
  .word 0x8fa20448
  .word 0xdc420058
  .word 0xfe220018
  .word 0x10000005
  .word 0x00000000
  .word 0x24020004
  .word 0xa2220000
  .word 0x7ba20180
  .word 0xfe220008
  .word 0x97a20330
  .word 0xa6220048
  .word 0x10000006
  .word 0x00000000
  .word 0x24020004
  .word 0xa2220000
  .word 0x8fa20444
  .word 0xdc420058
  .word 0xfe220008
  .word 0x8f82b710
  .word 0x03c21021
  .word 0x94420002
  .word 0x30420080
  .word 0x10400002
  .word 0x00000000
  .word 0xfe300060
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
  .word 0x10000055
  .word 0x00000000
  .word 0x7ba20160
  .word 0x34480c00
  .word 0x8fa40438
  .word 0x8e850030
  .word 0x8ea60030
  .word 0x24070001
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040882d
  .word 0x24040004
  .word 0xa0440000
  .word 0x8fa3044c
  .word 0xdc630058
  .word 0xfc430008
  .word 0xa0440010
  .word 0x8fa30448
  .word 0xdc630058
  .word 0xfc430018
  .word 0x97a30330
  .word 0xa4430048
  .word 0x8f82b710
  .word 0x03c21021
  .word 0x94420002
  .word 0x30420080
  .word 0x10400002
  .word 0x00000000
  .word 0xfe300060
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x964300cc
  .word 0x24020400
  .word 0x10620032
  .word 0x00000000
  .word 0x8e4200d4
  .word 0x24070001
  .word 0x1447002e
  .word 0x00000000
  .word 0x8fa20230
  .word 0x1440002b
  .word 0x00000000
  .word 0x7ba20160
  .word 0x34481000
  .word 0x8fa40438
  .word 0x8e850030
  .word 0x8ea60030
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0xafa2043c
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x8e4200d4
  .word 0x1040000a
  .word 0x00000000
  .word 0x8f82b710
  .word 0x03c21021
  .word 0x94420002
  .word 0x30420008
  .word 0x10400004
  .word 0x00000000
  .word 0x24030008
  .word 0x8fa2043c
  .word 0xa4430048
  .word 0x8fa2043c
  .word 0xfc500060
  .word 0x0040202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0b7578
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0x8fa3043c
  .word 0xdc630058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa202ec
  .word 0x10400036
  .word 0x00000000
  .word 0x0000202d
  .word 0x8ea50030
  .word 0x24060003
  .word 0x0c0a21b8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x12b40012
  .word 0x00000000
  .word 0x8ea40030
  .word 0x8e850030
  .word 0x0000302d
  .word 0x0c0a21b8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x8ea40030
  .word 0x0000282d
  .word 0x0c0a2254
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x96820018
  .word 0x34420200
  .word 0xa6820018
  .word 0x10000023
  .word 0x00000000
  .word 0x8fa20230
  .word 0x14400020
  .word 0x00000000
  .word 0x16c0001e
  .word 0x00000000
  .word 0x26840038
  .word 0x0c0b4580
  .word 0x00000000
  .word 0x3044ffff
  .word 0x24020002
  .word 0x14820017
  .word 0x00000000
  .word 0x24050001
  .word 0x27a60518
  .word 0x0000382d
  .word 0x0000402d
  .word 0x00a0482d
  .word 0x0c0a021c
  .word 0x00000000
  .word 0x0000202d
  .word 0x27a50518
  .word 0x24060001
  .word 0x0c0a20d8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24030001
  .word 0x8fa20280
  .word 0x1443006f
  .word 0x00000000
  .word 0x8fa20444
  .word 0x14400048
  .word 0x00000000
  .word 0x2402ffff
  .word 0x12c20045
  .word 0x00000000
  .word 0x7ba201d0
  .word 0x14430018
  .word 0x00000000
  .word 0x7ba201a0
  .word 0x14400015
  .word 0x00000000
  .word 0x7ba201c0
  .word 0x14400012
  .word 0x00000000
  .word 0x8fa40450
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080004
  .word 0x0000482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa202b0
  .word 0x14400007
  .word 0x00000000
  .word 0x8e840030
  .word 0x97a50300
  .word 0x0c0a10f8
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0a13d4
  .word 0x00000000
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x2405ffff
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080003
  .word 0x0000482d
  .word 0x0c0a174c
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
  .word 0x12b4000f
  .word 0x00000000
  .word 0x8ea40030
  .word 0x8e850030
  .word 0x24060002
  .word 0x0c0a0994
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050018
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0xafa20444
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
  .word 0xfc500060
  .word 0x0040202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e4200d4
  .word 0x10400034
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0bf458
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420c8c
  .word 0x0040202d
  .word 0x8e850030
  .word 0x8e460030
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0xafa20440
  .word 0x8f82b710
  .word 0x03c21021
  .word 0x94420002
  .word 0x30420004
  .word 0x10400008
  .word 0x00000000
  .word 0x2403000b
  .word 0x8fa20440
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x10000006
  .word 0x00000000
  .word 0x24030005
  .word 0x8fa20440
  .word 0xa0430000
  .word 0x7ba30180
  .word 0xfc430008
  .word 0x8fa40440
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000d
  .word 0x24050002
  .word 0x24060006
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0x8fa30440
  .word 0xdc630058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x964300cc
  .word 0x24020400
  .word 0x14620030
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440c90
  .word 0x8e850030
  .word 0x8ea60030
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0xafa20440
  .word 0x8f82b710
  .word 0x03c21021
  .word 0x94420002
  .word 0x30420004
  .word 0x10400008
  .word 0x00000000
  .word 0x2403000b
  .word 0x8fa20440
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x10000006
  .word 0x00000000
  .word 0x24030005
  .word 0x8fa20440
  .word 0xa0430000
  .word 0x7ba30180
  .word 0xfc430008
  .word 0x8fa40440
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050002
  .word 0x24060007
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0x8fa30440
  .word 0xdc630058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2402000a
  .word 0xa7a203d0
  .word 0xa7a00360
  .word 0x97a20350
  .word 0x0040102d
  .word 0x7fa20140
  .word 0x2442ffff
  .word 0x7fa20130
  .word 0x87a203d0
  .word 0x0040102d
  .word 0x2442002b
  .word 0x7fa20120
  .word 0x1000024a
  .word 0x00000000
  .word 0x97a20360
  .word 0x0040182d
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02421021
  .word 0x7fa20110
  .word 0x244200f8
  .word 0x7fa20100
  .word 0x7ba20110
  .word 0x804500f8
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8ea40030
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040982d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x97a30340
  .word 0xa4430048
  .word 0x8e4200d4
  .word 0x1040000a
  .word 0x00000000
  .word 0x8f82b710
  .word 0x03c21021
  .word 0x94420002
  .word 0x30420008
  .word 0x10400004
  .word 0x00000000
  .word 0x86620048
  .word 0x24420008
  .word 0xa6620048
  .word 0xfe700060
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba300b0
  .word 0x7ba20130
  .word 0x14620079
  .word 0x00000000
  .word 0x7ba20110
  .word 0x8c4300e8
  .word 0x3c020010
  .word 0x00621024
  .word 0x10400073
  .word 0x00000000
  .word 0x7ba20150
  .word 0x10400064
  .word 0x00000000
  .word 0x8fa202ec
  .word 0x10400038
  .word 0x00000000
  .word 0xdfa20410
  .word 0x10400020
  .word 0x00000000
  .word 0x8ea40030
  .word 0x0c0ae564
  .word 0x00000000
  .word 0x3c0242c8
  .word 0x44820800
  .word 0x00000000
  .word 0x46000d02
  .word 0x02e0202d
  .word 0x0c0b58dc
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24020003
  .word 0x10000002
  .word 0x00000000
  .word 0x24020002
  .word 0x3046ffff
  .word 0x8e840030
  .word 0x8ea50030
  .word 0x4600a306
  .word 0x0c0adef4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdfa30410
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8ea50030
  .word 0x8f82b6fc
  .word 0x8c440d00
  .word 0x00a0302d
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24030001
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x8ea50030
  .word 0x8f82b6fc
  .word 0x8c440cfc
  .word 0x00a0302d
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24030001
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e4200d0
  .word 0x14400014
  .word 0x00000000
  .word 0x8ea50030
  .word 0x8f82b6fc
  .word 0x8c440cf8
  .word 0x00a0302d
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24030010
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8ea40030
  .word 0x0c0a1324
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa20280
  .word 0x14400031
  .word 0x00000000
  .word 0x7ba20100
  .word 0x80430000
  .word 0x2402ffff
  .word 0x14620007
  .word 0x00000000
  .word 0x8e420030
  .word 0x904300a2
  .word 0x8e820030
  .word 0x904200a2
  .word 0x10620026
  .word 0x00000000
  .word 0x8e420030
  .word 0x8c440a2c
  .word 0x3c050018
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x1440001f
  .word 0x00000000
  .word 0x8e440030
  .word 0x8e850030
  .word 0x24060002
  .word 0x0c0a0994
  .word 0x00000000
  .word 0x8e4300d4
  .word 0x1060000b
  .word 0x00000000
  .word 0x8fa30440
  .word 0x10600008
  .word 0x00000000
  .word 0x24030005
  .word 0xa0430000
  .word 0x8fa30440
  .word 0xdc630058
  .word 0xfc430008
  .word 0x10000005
  .word 0x00000000
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba20110
  .word 0x244200e0
  .word 0xafa20220
  .word 0x0280202d
  .word 0x02a0282d
  .word 0x0040302d
  .word 0x964700cc
  .word 0x964800ce
  .word 0x0c0b5f88
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x87a303d0
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0b6024
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x87a303d0
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x9682006a
  .word 0x2443ffff
  .word 0x8fa20230
  .word 0x14430014
  .word 0x00000000
  .word 0x924200c8
  .word 0x2443ffff
  .word 0x7ba200b0
  .word 0x1443000f
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b6024
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x87a303d0
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa20230
  .word 0x14400017
  .word 0x00000000
  .word 0x7ba200b0
  .word 0x14400014
  .word 0x00000000
  .word 0x96820018
  .word 0x30420004
  .word 0x14400010
  .word 0x00000000
  .word 0x0280202d
  .word 0x928500ca
  .word 0x0c0b5fec
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x87a303d0
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x924200c8
  .word 0x2443ffff
  .word 0x7ba200b0
  .word 0x14430027
  .word 0x00000000
  .word 0x868500dc
  .word 0x10a00012
  .word 0x00000000
  .word 0x8e840030
  .word 0x0c0af614
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x864500dc
  .word 0x10a00010
  .word 0x00000000
  .word 0x8e440030
  .word 0x0c0af614
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba200b0
  .word 0x14400018
  .word 0x00000000
  .word 0x8fa20220
  .word 0x8c420000
  .word 0x10400014
  .word 0x00000000
  .word 0x8ea40030
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0af48c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x87a303d0
  .word 0xa4430048
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba20110
  .word 0x244200fa
  .word 0x7fa200f0
  .word 0x7ba20110
  .word 0x944200fa
  .word 0x30420001
  .word 0x10400038
  .word 0x00000000
  .word 0x27a404f0
  .word 0x0c0b5770
  .word 0x00000000
  .word 0x3c020010
  .word 0xafa204fc
  .word 0x0240202d
  .word 0x0240282d
  .word 0x27a604f0
  .word 0x24070001
  .word 0x00e0402d
  .word 0x0c0b5f88
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
  .word 0x7ba200f0
  .word 0x94420000
  .word 0x30420002
  .word 0x10400012
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e440030
  .word 0x2405000a
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0a1080
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
  .word 0x8e440030
  .word 0x0c0a1324
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
  .word 0x7ba200f0
  .word 0x94420000
  .word 0x30420020
  .word 0x10400006
  .word 0x00000000
  .word 0x24020001
  .word 0xafa202c0
  .word 0x24030003
  .word 0x8f82b6fc
  .word 0xa443001c
  .word 0x7ba200f0
  .word 0x94420000
  .word 0x30420040
  .word 0x10400003
  .word 0x00000000
  .word 0x24020001
  .word 0xafa20290
  .word 0x97a20360
  .word 0x0040182d
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02421021
  .word 0x7fa200e0
  .word 0x8e840030
  .word 0x8ea50030
  .word 0x8fa60260
  .word 0x964700cc
  .word 0x964800ce
  .word 0x97a90360
  .word 0x97aa0350
  .word 0x8fab0220
  .word 0x0c0af6f4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x87a303d0
  .word 0xa4430048
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba200e0
  .word 0x244200f4
  .word 0x7fa200d0
  .word 0x7ba200e0
  .word 0x844200f4
  .word 0x1c400005
  .word 0x00000000
  .word 0x7ba20110
  .word 0x844200f6
  .word 0x18400058
  .word 0x00000000
  .word 0x7ba20120
  .word 0x0002143c
  .word 0x0002143f
  .word 0x7fa200c0
  .word 0x27a404f0
  .word 0x0c0b5770
  .word 0x00000000
  .word 0x97a20360
  .word 0x0040182d
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02421821
  .word 0x7ba200d0
  .word 0x84420000
  .word 0xafa204f0
  .word 0x846200f6
  .word 0xafa204f4
  .word 0x0280202d
  .word 0x0280282d
  .word 0x27a604f0
  .word 0x24070001
  .word 0x00e0402d
  .word 0x0c0b5f88
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x7ba300c0
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x0080282d
  .word 0x2406ffff
  .word 0x24070001
  .word 0x00e0402d
  .word 0x97a90360
  .word 0x97aa0350
  .word 0x27ab04f0
  .word 0x0c0af6f4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x7ba300c0
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa204f0
  .word 0x1040001c
  .word 0x00000000
  .word 0x7ba200b0
  .word 0x14400009
  .word 0x00000000
  .word 0x8e840030
  .word 0x0c0af520
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0af48c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x7ba300c0
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x97a20340
  .word 0x24420007
  .word 0xa7a20340
  .word 0x97a20360
  .word 0x24420001
  .word 0xa7a20360
  .word 0x97a20360
  .word 0x0040102d
  .word 0x7fa200b0
  .word 0x70401e28
  .word 0x7ba20140
  .word 0x0062102a
  .word 0x1440fdb0
  .word 0x00000000
  .word 0x87a203c0
  .word 0x0040182d
  .word 0x97a20340
  .word 0x0040102d
  .word 0x0062082a
  .word 0x10200003
  .word 0x00000000
  .word 0x97a20340
  .word 0xa7a203c0
  .word 0x97a30330
  .word 0x7ba20170
  .word 0x00621021
  .word 0xa7a20330
  .word 0x97a20370
  .word 0x24420001
  .word 0xa7a20370
  .word 0x97a20370
  .word 0x0040102d
  .word 0xafa20230
  .word 0x9683006a
  .word 0x0043102a
  .word 0x1440fb6a
  .word 0x00000000
  .word 0xde720058
  .word 0x868300de
  .word 0x2402ffff
  .word 0x10620014
  .word 0x00000000
  .word 0x3065ffff
  .word 0x0280202d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b6dd0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xfc520008
  .word 0x87a303c0
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x100000f2
  .word 0x00000000
  .word 0x8fa20390
  .word 0x1840006d
  .word 0x00000000
  .word 0x16c000ed
  .word 0x00000000
  .word 0x24040002
  .word 0x3c050008
  .word 0x0c0b5384
  .word 0x00000000
  .word 0x3053ffff
  .word 0x92820028
  .word 0x1c40003e
  .word 0x00000000
  .word 0x8e820030
  .word 0x944300a4
  .word 0x24020001
  .word 0x10620039
  .word 0x00000000
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x2c410032
  .word 0x10200033
  .word 0x00000000
  .word 0x8e820030
  .word 0x904200a2
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000002a
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x84830a38
  .word 0x2402ffff
  .word 0x10620024
  .word 0x00000000
  .word 0x8fa20390
  .word 0x02621023
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x1c600016
  .word 0x00000000
  .word 0x24040002
  .word 0x3c050008
  .word 0x0c0b5384
  .word 0x00000000
  .word 0x3044ffff
  .word 0x8f83b6fc
  .word 0x84620a3a
  .word 0x00021043
  .word 0x0044102b
  .word 0x14400013
  .word 0x00000000
  .word 0x84730a38
  .word 0x0c0adc18
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1262000c
  .word 0x00000000
  .word 0x24020001
  .word 0x1000000a
  .word 0x00000000
  .word 0x84820a3a
  .word 0x00021043
  .word 0x0043102a
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x10400014
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050016
  .word 0x8fa60390
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b6dd0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xfc520008
  .word 0x87a303c0
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000095
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000d
  .word 0x8fa60390
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xfc520008
  .word 0x87a303c0
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000083
  .word 0x00000000
  .word 0x8fa20380
  .word 0x1840001c
  .word 0x00000000
  .word 0x928300ca
  .word 0x30620001
  .word 0x10400018
  .word 0x00000000
  .word 0x30620002
  .word 0x14400015
  .word 0x00000000
  .word 0x97a20320
  .word 0x0040302d
  .word 0x0280202d
  .word 0x24050017
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b6dd0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xfc520008
  .word 0x87a303c0
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000065
  .word 0x00000000
  .word 0x8fa202ec
  .word 0x10400024
  .word 0x00000000
  .word 0x8e820030
  .word 0x944300a4
  .word 0x24020001
  .word 0x1462001f
  .word 0x00000000
  .word 0x16c0001d
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b57ec
  .word 0x00000000
  .word 0x10400018
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b5824
  .word 0x00000000
  .word 0x14400013
  .word 0x00000000
  .word 0x8e840038
  .word 0x24050011
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xfc520008
  .word 0x87a303c0
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000003f
  .word 0x00000000
  .word 0x8fa20390
  .word 0x1440003c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b584c
  .word 0x00000000
  .word 0x10400013
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000e
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xfc520008
  .word 0x87a303c0
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b5884
  .word 0x00000000
  .word 0x24030001
  .word 0x1443001f
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b57d4
  .word 0x00000000
  .word 0x1440001a
  .word 0x00000000
  .word 0x8fa20290
  .word 0x14400017
  .word 0x00000000
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x97a50250
  .word 0x0c0c20bc
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x0280202d
  .word 0x2405000f
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xfc520008
  .word 0x87a303c0
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa20290
  .word 0x10400101
  .word 0x00000000
  .word 0x24030001
  .word 0x8fa20280
  .word 0x14430011
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050017
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0xafa20444
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x24030018
  .word 0xa4430048
  .word 0xfc500060
  .word 0x0040202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e820030
  .word 0x904200a2
  .word 0x14400051
  .word 0x00000000
  .word 0x27a404f0
  .word 0x0c0b5770
  .word 0x00000000
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x0c0bff5c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x2442ffff
  .word 0x00021023
  .word 0xafa204f0
  .word 0x0280202d
  .word 0x0280282d
  .word 0x27a604f0
  .word 0x24070001
  .word 0x00e0402d
  .word 0x0c0b5f88
  .word 0x00000000
  .word 0x0040902d
  .word 0x24030001
  .word 0x8fa20280
  .word 0x14430008
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420000
  .word 0x8fa20444
  .word 0xdc420058
  .word 0xfe420008
  .word 0x10000005
  .word 0x00000000
  .word 0x2402000b
  .word 0xa2420000
  .word 0xde220058
  .word 0xfe420008
  .word 0xfe500060
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x0080282d
  .word 0x2406ffff
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x240a0001
  .word 0x27ab04f0
  .word 0x0c0af6f4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0af48c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0x27a404f0
  .word 0x0c0b5770
  .word 0x00000000
  .word 0x3c020008
  .word 0xafa204f8
  .word 0x0280202d
  .word 0x0280282d
  .word 0x27a604f0
  .word 0x24070001
  .word 0x00e0402d
  .word 0x0c0b5f88
  .word 0x00000000
  .word 0x0040902d
  .word 0x24030001
  .word 0x8fa20280
  .word 0x14430008
  .word 0x00000000
  .word 0x24020004
  .word 0xa2420000
  .word 0x8fa20444
  .word 0xdc420058
  .word 0xfe420008
  .word 0x10000005
  .word 0x00000000
  .word 0x2402000b
  .word 0xa2420000
  .word 0xde220058
  .word 0xfe420008
  .word 0xfe500060
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa202ac
  .word 0x1440001e
  .word 0x00000000
  .word 0x8fa202b0
  .word 0x14400008
  .word 0x00000000
  .word 0x8e840030
  .word 0x97a50300
  .word 0x0c0a10f8
  .word 0x00000000
  .word 0x0040982d
  .word 0x10000009
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0a13d4
  .word 0x00000000
  .word 0x0040982d
  .word 0x24020004
  .word 0xa2620000
  .word 0xde420058
  .word 0xfe620008
  .word 0xfe700060
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x8e840030
  .word 0x0c0a1324
  .word 0x00000000
  .word 0x0040982d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x8c82009c
  .word 0x30420020
  .word 0x10400010
  .word 0x00000000
  .word 0x0c09fcbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x2403003c
  .word 0xa443004a
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000070
  .word 0x00000000
  .word 0x3c0200ff
  .word 0x3445ffff
  .word 0x24060006
  .word 0x0000382d
  .word 0x24080004
  .word 0x0000482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e850030
  .word 0x8f82b6fc
  .word 0x8c440cb0
  .word 0x00a0302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050002
  .word 0x24060008
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e830030
  .word 0x8c62009c
  .word 0x34420100
  .word 0xac62009c
  .word 0x1000003a
  .word 0x00000000
  .word 0x8fa202ac
  .word 0x14400028
  .word 0x00000000
  .word 0x8fa202b0
  .word 0x14400008
  .word 0x00000000
  .word 0x8e840030
  .word 0x97a50300
  .word 0x0c0a10f8
  .word 0x00000000
  .word 0x0040982d
  .word 0x10000009
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0a13d4
  .word 0x00000000
  .word 0x0040982d
  .word 0x2402000b
  .word 0xa2620000
  .word 0xde220058
  .word 0xfe620008
  .word 0x16c00005
  .word 0x00000000
  .word 0x87a203e0
  .word 0xa6620048
  .word 0x10000005
  .word 0x00000000
  .word 0x24020008
  .word 0xa6620048
  .word 0x87a203e0
  .word 0xa662004a
  .word 0xfe700060
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x8e840030
  .word 0x0c0a1324
  .word 0x00000000
  .word 0x0040982d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x87a303e0
  .word 0xa4430048
  .word 0xfc500060
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0a7e94
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa202c0
  .word 0x10400004
  .word 0x00000000
  .word 0x24020002
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x3045ffff
  .word 0x24040010
  .word 0x0c0a8420
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
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
  .word 0xde630058
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
  .word 0x24030001
  .word 0x7ba201d0
  .word 0x14430087
  .word 0x00000000
  .word 0x2402ffff
  .word 0x12c20084
  .word 0x00000000
  .word 0x7ba201c0
  .word 0x14400081
  .word 0x00000000
  .word 0x8fa202d0
  .word 0x1440001c
  .word 0x00000000
  .word 0x8f82b710
  .word 0x03c21021
  .word 0x94420002
  .word 0x30420040
  .word 0x14400023
  .word 0x00000000
  .word 0x16c00004
  .word 0x00000000
  .word 0x24020015
  .word 0x10000002
  .word 0x00000000
  .word 0x24020016
  .word 0x3045ffff
  .word 0x0280202d
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdfa30410
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050019
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xdfa30410
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa202c0
  .word 0x14400012
  .word 0x00000000
  .word 0x8e840030
  .word 0x2405ffff
  .word 0x0000302d
  .word 0x2407000c
  .word 0x24080003
  .word 0x0000482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba201a0
  .word 0x1440003f
  .word 0x00000000
  .word 0x8fa40450
  .word 0x3c0200ff
  .word 0x3445ffff
  .word 0x24060008
  .word 0x0000382d
  .word 0x24080004
  .word 0x0000482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040902d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x8fa202ec
  .word 0x10400009
  .word 0x00000000
  .word 0x7ba201b0
  .word 0x14400003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x24020007
  .word 0x10000002
  .word 0x00000000
  .word 0x2402000f
  .word 0xa6420048
  .word 0xfe500060
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440cec
  .word 0x8fa50450
  .word 0x8fa603b0
  .word 0x0000382d
  .word 0x24082100
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdfa30420
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa40450
  .word 0x0c0a15fc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x24050001
  .word 0xa4450048
  .word 0xfc500060
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24030001
  .word 0x8fa202c0
  .word 0x1443000f
  .word 0x00000000
  .word 0x24040080
  .word 0x0c09f700
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x2403000c
  .word 0xa4430048
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa40438
  .word 0x0c0ae40c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b704c
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050019
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x9683006c
  .word 0x24020002
  .word 0x10620009
  .word 0x00000000
  .word 0x24020003
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x6405001e
  .word 0x10000002
  .word 0x00000000
  .word 0x6405001e
  .word 0x0280202d
  .word 0x0c0a6758
  .word 0x00000000
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
  .word 0x27bd0540
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_loop_invariants reset
/* Warning: struct Model is not defined (only forward-declared) */

// FUN_00294d10
void btlActionInitStateReinforce(BtlAction* action)
{
    action->unit->flags3 |= BTLUNIT_FLAG3_UNK08;
    gBtl->unk_a06 &= ~(1 << 0);
}
// FUN_00294d40
asm void btlActionUpdateStateReinforce(BtlAction* action)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x0000802d
  .word 0x8c920030
  .word 0x965100a4
  .word 0x24050014
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0280202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050006
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080002
  .word 0x0c0b6dd0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050005
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde630000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x924200a2
  .word 0x24420001
  .word 0x3044ffff
  .word 0x0220282d
  .word 0x0000302d
  .word 0x0c0c5a44
  .word 0x00000000
  .word 0xae4209f4
  .word 0x1440001e
  .word 0x00000000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2406007e
  .word 0x0c0a15a4
  .word 0x00000000
  .word 0x0040802d
  .word 0xde630000
  .word 0xfc430060
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24060010
  .word 0x0c0a1928
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde300058
  .word 0x1000003e
  .word 0x00000000
  .word 0x8e420098
  .word 0x34420002
  .word 0xae420098
  .word 0x34420008
  .word 0xae420098
  .word 0x0220202d
  .word 0x8e4509f4
  .word 0x0c0ed800
  .word 0x00000000
  .word 0xa64209f2
  .word 0x964409f2
  .word 0x24050001
  .word 0x0c068164
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0a1ec8
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c0a0c70
  .word 0x00000000
  .word 0x824709e8
  .word 0x0240202d
  .word 0x864509e0
  .word 0x0000302d
  .word 0xc64c09e4
  .word 0x0c0a0b50
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0a0af0
  .word 0x00000000
  .word 0x8e4209f4
  .word 0x8c4203f8
  .word 0x1440000e
  .word 0x00000000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24060010
  .word 0x0c0a1928
  .word 0x00000000
  .word 0x0040802d
  .word 0xde630000
  .word 0xfc430060
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde100058
  .word 0x0240202d
  .word 0x24050004
  .word 0x0c0a1ec8
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c0b4f80
  .word 0x00000000
  .word 0xa2400033
  .word 0x0240202d
  .word 0x0c0a1d24
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405ffff
  .word 0x2406000c
  .word 0x0000382d
  .word 0x24080003
  .word 0x24090001
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc500008
  .word 0x24050001
  .word 0xa4450048
  .word 0x2403002d
  .word 0xa443004a
  .word 0xde630000
  .word 0xfc430060
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0addf0
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50080
  .word 0x0000302d
  .word 0x27a70070
  .word 0x0c09fdf0
  .word 0x00000000
  .word 0xc7a10080
  .word 0xc7a00070
  .word 0x46000801
  .word 0xe7a00060
  .word 0xc7a10088
  .word 0xc7a00078
  .word 0x46000801
  .word 0xe7a00068
  .word 0xafa00064
  .word 0x27a40060
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c024396
  .word 0x44820800
  .word 0xc7a00060
  .word 0x460100c2
  .word 0xe7a30060
  .word 0xc7a00064
  .word 0x46010082
  .word 0xe7a20064
  .word 0xc7a00068
  .word 0x46010042
  .word 0xe7a10068
  .word 0xc7a00080
  .word 0x46001800
  .word 0xe7a00060
  .word 0xc7a00084
  .word 0x46001000
  .word 0xe7a00064
  .word 0xc7a00088
  .word 0x46000800
  .word 0xe7a00068
  .word 0x0240202d
  .word 0x27a50060
  .word 0x0c09fd94
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44826000
  .word 0x0240202d
  .word 0x27a50080
  .word 0x0000302d
  .word 0x0c0a0674
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc500008
  .word 0xde630000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x9663006c
  .word 0x24020002
  .word 0x10620009
  .word 0x00000000
  .word 0x24020003
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x6405001e
  .word 0x10000002
  .word 0x00000000
  .word 0x6405001e
  .word 0x0260202d
  .word 0x0c0a6758
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
  .word 0x00000000
}

// FUN_00295150
void btlActionInitStateSummon(BtlAction* action)
{
    (void)action;
}
/* W373 pragma sweep nd/obj: base 1255/2180; singles LI=1253/2180 CS=1324/2188 LT=1210/2172 PR=1503/2188 SR=1255/2180 DA=1254/2180. */
/* Pair nd/obj: LI+CS=1324/2188 LI+LT=1210/2172 LI+PR=1531/2196 LI+SR=1253/2180 LI+DA=1252/2180 CS+LT=1270/2180 CS+PR=1325/2188 CS+SR=1324/2188 CS+DA=1324/2188 LT+PR=1446/2180 LT+SR=1210/2172 LT+DA=1210/2172 PR+SR=1503/2188 PR+DA=1503/2188 SR+DA=1254/2180; retain LT on. */
#pragma opt_lifetimes on
// FUN_00295160
asm void btlActionUpdateStateSummon(BtlAction* action)
{
  .set noreorder
  .word 0x27bdfe90
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
  .word 0x8495006e
  .word 0xdc900000
  .word 0x0c0a29e0
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0x0040f02d
  .word 0x32b2ffff
  .word 0x8e840030
  .word 0x0240282d
  .word 0x0c0af564
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b60cc
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0c0b5fec
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
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
  .word 0xde710058
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e840030
  .word 0x24050007
  .word 0x0c0a0d78
  .word 0x00000000
  .word 0x0002bc3c
  .word 0x0017bc3f
  .word 0x0240202d
  .word 0x27a5016c
  .word 0x27a60168
  .word 0x0c0a7a98
  .word 0x00000000
  .word 0x8fa4016c
  .word 0x8fa50168
  .word 0x24060010
  .word 0x0c0a7d2c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0a7b00
  .word 0x00000000
  .word 0x0040b02d
  .word 0x0240202d
  .word 0x27a5016c
  .word 0x27a60168
  .word 0x0c0a7b20
  .word 0x00000000
  .word 0x02c0202d
  .word 0x8fa5016c
  .word 0x8fa60168
  .word 0x24070010
  .word 0x0000402d
  .word 0x0c0a8014
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc510008
  .word 0xfc500060
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
  .word 0xfc510008
  .word 0xfc500060
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
  .word 0xfc510008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a500e0
  .word 0x0c0aedbc
  .word 0x00000000
  .word 0x03c0202d
  .word 0x27a500e0
  .word 0x0000302d
  .word 0x0c0aeb00
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc400008
  .word 0x26e30006
  .word 0xa4430048
  .word 0xfc500060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c0b7528
  .word 0x00000000
  .word 0xafa200dc
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e850030
  .word 0x03c0202d
  .word 0x00a0302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040902d
  .word 0x24040004
  .word 0xa0440000
  .word 0xde230058
  .word 0xfc430008
  .word 0xa0440010
  .word 0x8fa300dc
  .word 0xdc630058
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
  .word 0xde320058
  .word 0x0c09fcbc
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc520008
  .word 0x24030018
  .word 0xa4430048
  .word 0xfc500060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440ca8
  .word 0x8e850030
  .word 0x0000302d
  .word 0xde270058
  .word 0x24080100
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0220202d
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
  .word 0xafa000c0
  .word 0x0000b82d
  .word 0x00151c3c
  .word 0x00031c3f
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x7fa200b0
  .word 0x1000009d
  .word 0x00000000
  .word 0x32e2ffff
  .word 0x00021040
  .word 0x02821021
  .word 0x94550076
  .word 0x12a0009b
  .word 0x00000000
  .word 0x24040001
  .word 0x02a0282d
  .word 0x0000302d
  .word 0x0c0a2594
  .word 0x00000000
  .word 0x7fa200a0
  .word 0x8c560030
  .word 0x8f82b6fc
  .word 0x8c440bbc
  .word 0x02a0282d
  .word 0x0c0bfd50
  .word 0x00000000
  .word 0xaec20a2c
  .word 0x32a5ffff
  .word 0x02c0202d
  .word 0x0c0a2270
  .word 0x00000000
  .word 0x8fa200c0
  .word 0x1440002c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0ae3d0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc520008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f83b710
  .word 0x7ba200b0
  .word 0x00431021
  .word 0x94420002
  .word 0x30420040
  .word 0x14400018
  .word 0x00000000
  .word 0x24040008
  .word 0x0c0af1f8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc520008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050026
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc520008
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24020001
  .word 0xafa200c0
  .word 0x02c0202d
  .word 0x02a0282d
  .word 0x2406007e
  .word 0x0c0a15a4
  .word 0x00000000
  .word 0x0040882d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc520008
  .word 0xfc500060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x02c0202d
  .word 0x02a0282d
  .word 0x24060010
  .word 0x0c0a1928
  .word 0x00000000
  .word 0x0040902d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x03c0202d
  .word 0x8e850030
  .word 0x7ba200a0
  .word 0x8c460030
  .word 0x24070001
  .word 0x24080100
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040882d
  .word 0x24040004
  .word 0xa0440000
  .word 0xde430058
  .word 0xfc430008
  .word 0xa0440010
  .word 0x8fa300dc
  .word 0xdc630058
  .word 0xfc430018
  .word 0xfc500060
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
  .word 0x02c0202d
  .word 0x3c02e0ff
  .word 0x3445ffff
  .word 0x2406000c
  .word 0x0000382d
  .word 0x24080003
  .word 0x24090001
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x2403000b
  .word 0xa0430010
  .word 0xde230058
  .word 0xfc430018
  .word 0x24050001
  .word 0xa4450048
  .word 0xfc500060
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde520058
  .word 0x26e20001
  .word 0x3057ffff
  .word 0x32e2ffff
  .word 0x28420003
  .word 0x1440ff61
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050005
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b6dd0
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c07f750
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0a7e94
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
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
  .word 0xde630058
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
  .word 0xde630058
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
  .word 0x03c0202d
  .word 0x0c0ae40c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b704c
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050019
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x9683006c
  .word 0x24020002
  .word 0x10620009
  .word 0x00000000
  .word 0x24020003
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x6405001e
  .word 0x10000002
  .word 0x00000000
  .word 0x6405001e
  .word 0x0280202d
  .word 0x0c0a6758
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
  .word 0x27bd0170
  .word 0x03e00008
  .word 0x00000000
}
#pragma opt_lifetimes reset

// FUN_00295a10
void btlActionInitStateAssist(BtlAction* action)
{
    BtlPacket* packet;

    btlAction0028a780(action);
    FUN_002d15a0(&action->target);
    action->target.commandId = 2;
    action->target.specificId = FUN_002d5bc0();
    FUN_0016f1f0(0x1300, 1);
    FUN_002c3770(action, 0);
    btlAction0028a780(action);
    packet = btlFormation002b8d60(3, 0xfff);
    packet->actionUID = action->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_0);
    packet = btlCameraCreateSetStatePacket(action, 0x25);
    packet->actionUID = action->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_0);
    packet = FUN_002db740(action, 0xb, 0, 0, 2);
    ACTION_U16(packet, 0x4a) = 100;
    packet->actionUID = action->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_1);
    action->unk_18 |= 2;
}
// FUN_00295b20
void btlActionUpdateStateAssist(BtlAction* action)
{
    if (btlPacketCountById(0x506) == 0 && btlPacketCountById(0x800) == 0)
    {
        action->unk_18 |= 0x100;
        btlActionSetState(action, BTLACTION_STATE_READY);
    }
}

// FUN_00295b90
void btlActionInitStateEvent(BtlAction* action)
{
    // nothing
}
// FUN_00295ba0
void btlActionUpdateStateEvent(BtlAction* action)
{
    if (!action->evtFunc())
    {
        btlActionSetState(action, action->stateAfterEvt);
    }
}

// FUN_00295bf0
void btlActionInitStateError(BtlAction* action)
{
    (void)action;
}
/* W373 pragma sweep nd/obj: base 366/768; singles LI=366/768 CS=308/756 LT=366/768 PR=451/752 SR=366/768 DA=510/748; retain CS off. */
#pragma opt_common_subs off

// FUN_00295c00
asm void btlActionUpdateStateError(BtlAction* action)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080802d
  .word 0x0c0a29e0
  .word 0x00000000
  .word 0x9602006c
  .word 0x38420003
  .word 0x2c520001
  .word 0xde110000
  .word 0x1640000c
  .word 0x00000000
  .word 0x8e040030
  .word 0x9605006e
  .word 0x0c0af564
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc510060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x8e040030
  .word 0x96050070
  .word 0x0c0af5a4
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc510060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e040030
  .word 0x908200a2
  .word 0x14400013
  .word 0x00000000
  .word 0x16400005
  .word 0x00000000
  .word 0x6414000c
  .word 0x6413001c
  .word 0x10000003
  .word 0x00000000
  .word 0x64140015
  .word 0x64130038
  .word 0x64120010
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x0280282d
  .word 0x4600a306
  .word 0x0c0a0e34
  .word 0x00000000
  .word 0x3055ffff
  .word 0x10000015
  .word 0x00000000
  .word 0x8604006e
  .word 0x0c0b58dc
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24020004
  .word 0x10000002
  .word 0x00000000
  .word 0x24020007
  .word 0x3054ffff
  .word 0x64130021
  .word 0x64120011
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x8e040030
  .word 0x0280282d
  .word 0x4600a306
  .word 0x0c0a0d78
  .word 0x00000000
  .word 0x3055ffff
  .word 0x00142c3c
  .word 0x00052c3f
  .word 0x8e040030
  .word 0x24060006
  .word 0x4600a306
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040a02d
  .word 0xfc510060
  .word 0x32a3ffff
  .word 0x24630006
  .word 0xa443004a
  .word 0x0280202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x3262ffff
  .word 0x00021080
  .word 0x00431021
  .word 0x8c440c24
  .word 0x8e050030
  .word 0x0000302d
  .word 0xde870058
  .word 0x24080100
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc510060
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0200202d
  .word 0x0240282d
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc510060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x860500dc
  .word 0x8e040030
  .word 0x0c0af614
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xfc510060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c0b5fec
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde830058
  .word 0xfc430008
  .word 0xfc510060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0b704c
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050019
  .word 0x0c0a6758
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x9603006c
  .word 0x24020002
  .word 0x10620009
  .word 0x00000000
  .word 0x24020003
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x6405001e
  .word 0x10000002
  .word 0x00000000
  .word 0x6405001e
  .word 0x0200202d
  .word 0x0c0a6758
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_common_subs reset

// FUN_00295f00
void btlActionInitStateEndure(BtlAction* action)
{
    u16 skillId;

    action->unit->flags3 &= ~BTLUNIT_FLAG3_ENDURE;

    skillId = *(u16*)&action->unkData3[0x3d8];
    switch (skillId)
    {
        case 0x23b:
            action->unit->datUnit->flags |= 8;
            break;
        case 0x23c:
            action->unit->datUnit->flags |= 0x400;
            break;
    }

    if (*(u16*)&action->unkData3[0x3d8] == 0)
    {
        btlActionSetState(action, BTLACTION_STATE_STANDBY);
    }
}
/* W212: template 00297760 suggested restoring actionUID writes after two packet constructors; the honest probe grew 788 to 804 bytes but regressed nd507 to nd548 (window 880), so it was reverted. Residual starts at frame 0x50 versus retail 0x80, confirming broader missing packet-chain structure. */
// FUN_00295fa0
void btlActionUpdateStateEndure(BtlAction* action)
{
    BtlPacket* packet;
    BtlPacket* root;
    BtlPacket* barrier;
    BtlPacket* animPacket;
    BtlPacket* messagePacket;
    BtlUnit* unit;
    s32 work[7];
    s32 messageId;
    u64 messageUID;
    u64 animUID;
    s32 count;

    unit = action->unit;

    if (btlPacketCountById(0xff03) != 0)
    {
        return;
    }
    barrier = FUN_0027dc00(0x80000);
    barrier->actionUID = action->uid;
    btlPacketRegister(barrier, BTLPACKET_TYPE_0);
    switch (*(u16*)&action->unkData3[0x3d8])
    {
    case 0x23c:
        messageId = (s16)(unit->genus == UNIT_GENUS_PC ? 0x42 : 0x43);
        break;
    case 0x1b6:
        messageId = (s16)0xdf;
        break;
    default:
        messageId = (s16)(unit->genus == UNIT_GENUS_PC ? 0x40 : 0x41);
    }
    messagePacket = FUN_002bd850(action->unit, (s16)messageId);
    ACTION_U16(messagePacket, 0x48) = 8;
    messagePacket->actionUID = action->uid;
    btlPacketRegister(messagePacket, BTLPACKET_TYPE_2D);
    messageUID = messagePacket->uid;
    animPacket = FUN_00284c90(unit);
    animPacket->actionUID = action->uid;
    btlPacketRegister(animPacket, BTLPACKET_TYPE_1);
    animUID = animPacket->uid;
    if (*(u16*)&action->unkData3[0x3d8] == 0x1b6)
    {
        count = func_00170760((s16)unit->datUnit->id, 0xfc7);
        if (count > 0)
        {
            func_00170860((s16)unit->datUnit->id, 0xfc7, count - 1);
        }
    }
    if (*(u16*)&action->unkData3[0x3d8] == 0x23c)
    {
        FUN_002d5dc0(work);
        work[0] = (FUN_002ffdf0(unit->datUnit) & 0xffff) -
                  (FUN_002ffd70(unit->datUnit) & 0xffff);
        root = FUN_002d7e20(action, action, work, 1, 1);
        root->unk_00 = 4;
        root->parentUID = animUID;
        root->actionUID = action->uid;
        btlPacketRegister(root, BTLPACKET_TYPE_1);
        packet = FUN_002bd480(unit);
        packet->unk_00 = 4;
        packet->parentUID = animUID;
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        packet = FUN_002bdbd0(unit, unit, -1, 0, 0, 0, 1, work);
        packet->unk_00 = 4;
        packet->parentUID = animUID;
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_2D);
        packet = FUN_002bd230(unit, 0, 0);
        packet->unk_00 = 4;
        packet->parentUID = animUID;
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_2D);
        packet = FUN_002baf90(ACTION_U32(gBtl, 0xce0), unit, unit, 1, 0);
        packet->unk_00 = 4;
        packet->parentUID = animUID;
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_3D);
    }
    barrier = FUN_0027dc80(0x80000);
    barrier->unk_00 = 4;
    barrier->parentUID = messageUID;
    barrier->actionUID = action->uid;
    btlPacketRegister(barrier, BTLPACKET_TYPE_0);
    btlActionSetState(action, BTLACTION_STATE_STANDBY);
}

// FUN_00296310
void btlActionInitStateWait(BtlAction* action)
{
    (void)action;
}
// FUN_00296320
void btlActionUpdateStateWait(BtlAction* action)
{
    BtlPacket* packet;

    switch (action->target.commandId)
    {
        case 7:
            btlAction0028a780(action);
            packet = btlUnitCreateLookAtDeactivatePacket(NULL, 3);
            packet->actionUID = action->uid;
            btlPacketRegister(packet, BTLPACKET_TYPE_0);
            packet = btlCameraCreateSetStatePacket(action, 9);
            packet->actionUID = action->uid;
            btlPacketRegister(packet, BTLPACKET_TYPE_0);
            if (ACTION_S16(action, 0xdc) != 0)
            {
                packet = FUN_002bd850(action->unit, ACTION_S16(action, 0xdc));
                packet->actionUID = action->uid;
                btlPacketRegister(packet, BTLPACKET_TYPE_2D);
            }
            else
            {
                packet = func_002bd780(action->unit, action->target.commandId);
                packet->actionUID = action->uid;
                btlPacketRegister(packet, BTLPACKET_TYPE_2D);
            }
            packet = btlVoice002e2be0(action, 0x1a, 0, 0, 0);
            packet->actionUID = action->uid;
            btlPacketRegister(packet, BTLPACKET_TYPE_1);
            break;
        case 8:
        case 11:
            break;
        default:
            K_Assert(D_00693318_abs, 0x1bae);
            break;
    }
    btlPacketRegister(FUN_002d7fb0(action, 0), BTLPACKET_TYPE_1);
    if (FUN_002dc130(action) != 0 && action->target.commandId != 8)
    {
        btlActionSetState(action, BTLACTION_STATE_BADDMG);
    }
    else
    {
        btlActionSetState(action, BTLACTION_STATE_PACKET);
    }
}

// FUN_002964f0
void btlActionInitStateEscapeMes(BtlAction* action)
{
    BtlPacket* packet;

    btlAction0028a780(action);
    packet = btlUnitCreateRotateTowardUnitPacket(action->unit, gBtl->actionList.head->unit, 2);
    packet->actionUID = action->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_0);
    packet = btlUnitCreateLookAtUnitPacket(gBtl->actionList.head->unit, action->unit, 0);
    packet->actionUID = action->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_1);
    packet = btlUnitCreateLookAtUnitPacket(action->unit, gBtl->actionList.head->unit, 0);
    packet->actionUID = action->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_1);
    action->unk_18 |= 0x200;
    packet = btlCameraCreateSetStatePacket(action, BTLCAMERA_STATE_ESCAPEMES);
    packet->actionUID = action->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_0);
    packet = func_002e3fe0(action->unit->charId);
    packet->actionUID = action->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_1);
    if (FUN_002d1a70() == 1)
    {
        gBtl->flags &= ~0x4000;
        FUN_001ff350();
    }
    action->movedAwayFromHome = 0;
    action->unk_488 = 0;
    ACTION_U16(action, 0x48c) = 0xc;
}
// FUN_00296660
void btlActionUpdateStateEscapeMes(BtlAction* action)
{
    BtlPacket* packet;
    if (btlPacketFindFirstByActionUID(action->uid, BTL_UIDMAX) != NULL)
    {
        return;
    }
    if (action->movedAwayFromHome == 0)
    {
        btlPacketRegister(FUN_002e40d0(), BTLPACKET_TYPE_1);
        btlPacketRegister(btlVoice002e2be0(action, 1, 0, 0, 0), BTLPACKET_TYPE_1);
        btlPacketRegister(FUN_002dd100(10, 6, 0xb), BTLPACKET_TYPE_1);
        action->movedAwayFromHome = 1;
    }
    if (action->movedAwayFromHome == 1)
    {
        if (*(s16*)action->unkData4 == 0)
        {
            FUN_001ff160(action->unit->charId);
            *(s16*)action->unkData4 = -1;
        }
        else if (*(s16*)action->unkData4 > 0)
        {
            *(s16*)action->unkData4 -= 1;
        }
    }
    if (action->unk_488 == 0)
    {
        if (*(s16*)action->unkData4 != -1)
        {
            return;
        }
        if (FUN_001ff2b0() == 0)
        {
            return;
        }
        FUN_001ff2f0();
        packet = FUN_002e41d0();
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        if (FUN_002d1a70() == 1)
        {
            gBtl->flags |= 0x4000;
            FUN_001ff370();
        }
        action->unk_488 = 1;
        return;
    }
    if (FUN_001ff2d0() == 0)
    {
        btlActionSetState(action, BTLACTION_STATE_ESCAPE);
    }
    else
    {
        btlPacketRegister(btlVoice002e2be0(action, 3, 0, 0, 0), BTLPACKET_TYPE_1);
        action->unk_18 |= 0x80;
        btlActionSetState(action, action->unk_14);
    }
}

// FUN_00296880
void btlActionInitStateEscape(BtlAction* action)
{
    (void)action;
}
#pragma opt_loop_invariants on
// FUN_00296890
asm void btlActionUpdateStateEscape(BtlAction* action)
{
  .set noreorder
  .word 0x27bdff00
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
  .word 0x0c0a29e0
  .word 0x00000000
  .word 0x8e840030
  .word 0x9685006c
  .word 0x0c0af5e0
  .word 0x00000000
  .word 0x0040982d
  .word 0xde830000
  .word 0xfc430060
  .word 0x0260202d
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000a82d
  .word 0x0000b02d
  .word 0x0000882d
  .word 0x0000b82d
  .word 0x8e830030
  .word 0x906200a2
  .word 0x24100001
  .word 0x10500072
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000076
  .word 0x00000000
  .word 0x946200a4
  .word 0x14500061
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x94620b9e
  .word 0x24420001
  .word 0xa4620b9e
  .word 0x8f82b6fc
  .word 0x8c52014c
  .word 0x10000016
  .word 0x00000000
  .word 0x9642001a
  .word 0x30420001
  .word 0x10400011
  .word 0x00000000
  .word 0x8e440030
  .word 0x908300a2
  .word 0x24020001
  .word 0x1462000c
  .word 0x00000000
  .word 0x8c840a2c
  .word 0x10800009
  .word 0x00000000
  .word 0x3c050010
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000004
  .word 0x00000000
  .word 0x8e5204a8
  .word 0x1640ffea
  .word 0x00000000
  .word 0x8e820030
  .word 0x8c440a2c
  .word 0x0c0c30a8
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x16000006
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x9443001a
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0x24160001
  .word 0x10000002
  .word 0x00000000
  .word 0x0040a82d
  .word 0x8f82b6fc
  .word 0x8c50014c
  .word 0x1000001d
  .word 0x00000000
  .word 0x9602001a
  .word 0x30420001
  .word 0x10400018
  .word 0x00000000
  .word 0x8e030030
  .word 0x906200a2
  .word 0x14400014
  .word 0x00000000
  .word 0x8c640a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x1440000e
  .word 0x00000000
  .word 0x12a00006
  .word 0x00000000
  .word 0x12900004
  .word 0x00000000
  .word 0x96020018
  .word 0x34428000
  .word 0xa6020018
  .word 0x3222ffff
  .word 0x00021080
  .word 0x005d1021
  .word 0xac5000a0
  .word 0x26220001
  .word 0x3051ffff
  .word 0x8e1004a8
  .word 0x1600ffe3
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x94420248
  .word 0x30420002
  .word 0x10400007
  .word 0x00000000
  .word 0x0c0a69d4
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x94620248
  .word 0x3042fffd
  .word 0xa4620248
  .word 0x24040001
  .word 0x10000013
  .word 0x00000000
  .word 0xafb400a0
  .word 0x3211ffff
  .word 0x96820018
  .word 0x34420020
  .word 0xa6820018
  .word 0x9682001a
  .word 0x3042fff7
  .word 0xa682001a
  .word 0x10000009
  .word 0x00000000
  .word 0xafb400a0
  .word 0x3211ffff
  .word 0x96820018
  .word 0x34420020
  .word 0xa6820018
  .word 0x9682001a
  .word 0x3042fff7
  .word 0xa682001a
  .word 0x16a0012a
  .word 0x00000000
  .word 0x1480000d
  .word 0x00000000
  .word 0x8fa400a0
  .word 0x24050009
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050007
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e820030
  .word 0x904200a2
  .word 0x1440004a
  .word 0x00000000
  .word 0x2404000f
  .word 0x24050002
  .word 0x0000302d
  .word 0x0c0b747c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24030020
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24020001
  .word 0x12c20026
  .word 0x00000000
  .word 0x96830010
  .word 0x2402001a
  .word 0x14620052
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050002
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040802d
  .word 0xde830000
  .word 0xfc430060
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050003
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b6dd0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0x0c0afed4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24030016
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x10000021
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050002
  .word 0x24060016
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x2403001c
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b6dd0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x2403000c
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000902d
  .word 0x3235ffff
  .word 0x1000008a
  .word 0x00000000
  .word 0x3242ffff
  .word 0x00021080
  .word 0x005d1021
  .word 0x8c5000a0
  .word 0x8e040030
  .word 0x27a500e0
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x8e040030
  .word 0x0000282d
  .word 0x27a60090
  .word 0x0000382d
  .word 0x0c09fdf0
  .word 0x00000000
  .word 0x27a400d0
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a70090
  .word 0x0c12f878
  .word 0x00000000
  .word 0x8e820030
  .word 0x904200a2
  .word 0x1440001f
  .word 0x00000000
  .word 0x3c0243fa
  .word 0x44820800
  .word 0xc7a000d0
  .word 0x460100c2
  .word 0xe7a300d0
  .word 0xc7a000d4
  .word 0x46010082
  .word 0xe7a200d4
  .word 0xc7a000d8
  .word 0x46010042
  .word 0xe7a100d8
  .word 0xc7a000e0
  .word 0x46030000
  .word 0xe7a000f0
  .word 0xc7a000e4
  .word 0x46020000
  .word 0xe7a000f4
  .word 0xc7a000e8
  .word 0x46010000
  .word 0xe7a000f8
  .word 0x3c023f00
  .word 0x44826000
  .word 0x8e040030
  .word 0x27a500f0
  .word 0x0000302d
  .word 0x0c0a0674
  .word 0x00000000
  .word 0x0040882d
  .word 0x1000002e
  .word 0x00000000
  .word 0x8e020030
  .word 0x944300a4
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x00431021
  .word 0x000218c0
  .word 0x8f82b728
  .word 0x00431021
  .word 0x84430022
  .word 0x24020001
  .word 0x10620016
  .word 0x00000000
  .word 0xc7a000d0
  .word 0xc7818394
  .word 0x460100c2
  .word 0xe7a300d0
  .word 0xc7a000d4
  .word 0x46010082
  .word 0xe7a200d4
  .word 0xc7a000d8
  .word 0x46010042
  .word 0xe7a100d8
  .word 0xc7a000e0
  .word 0x46030000
  .word 0xe7a000f0
  .word 0xc7a000e4
  .word 0x46020000
  .word 0xe7a000f4
  .word 0xc7a000e8
  .word 0x46010000
  .word 0xe7a000f8
  .word 0x10000005
  .word 0x00000000
  .word 0xdfa200e0
  .word 0xc7a000e8
  .word 0xffa200f0
  .word 0xe7a000f8
  .word 0x8e040030
  .word 0x27a500f0
  .word 0xc78c82fc
  .word 0x24060004
  .word 0x0c0a0674
  .word 0x00000000
  .word 0x0040882d
  .word 0x24020005
  .word 0xa2220000
  .word 0xde620058
  .word 0xfe220008
  .word 0x24020016
  .word 0xa6220048
  .word 0xde820000
  .word 0xfe220060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e040030
  .word 0x3c0200ff
  .word 0x3445ffff
  .word 0x24060008
  .word 0x0000382d
  .word 0x24080004
  .word 0x0000482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040802d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0x2403000c
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xde170058
  .word 0x26420001
  .word 0x3052ffff
  .word 0x3242ffff
  .word 0x0055102a
  .word 0x1440ff74
  .word 0x00000000
  .word 0x12c0012d
  .word 0x00000000
  .word 0x24040080
  .word 0x0c09f700
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc570008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24030003
  .word 0x8f82b6fc
  .word 0xa443001c
  .word 0x1000011c
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050007
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c0afed4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x24030016
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000802d
  .word 0x3235ffff
  .word 0x10000055
  .word 0x00000000
  .word 0x3202ffff
  .word 0x00021080
  .word 0x005d1021
  .word 0x8c5100a0
  .word 0x8e240030
  .word 0x27a500e0
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x8e240030
  .word 0x0000282d
  .word 0x27a60090
  .word 0x0000382d
  .word 0x0c09fdf0
  .word 0x00000000
  .word 0x27a400d0
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a70090
  .word 0x0c12f878
  .word 0x00000000
  .word 0x3c0243fa
  .word 0x44820800
  .word 0xc7a000d0
  .word 0x460100c2
  .word 0xe7a300d0
  .word 0xc7a000d4
  .word 0x46010082
  .word 0xe7a200d4
  .word 0xc7a000d8
  .word 0x46010042
  .word 0xe7a100d8
  .word 0xc7a000e0
  .word 0x46030000
  .word 0xe7a000f0
  .word 0xc7a000e4
  .word 0x46020000
  .word 0xe7a000f4
  .word 0xc7a000e8
  .word 0x46010000
  .word 0xe7a000f8
  .word 0x3c023f00
  .word 0x44826000
  .word 0x8e240030
  .word 0x27a500f0
  .word 0x24060008
  .word 0x0c0a0674
  .word 0x00000000
  .word 0x0040902d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x2403000b
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e240030
  .word 0x3c0200ff
  .word 0x3445ffff
  .word 0x24060008
  .word 0x0000382d
  .word 0x24080004
  .word 0x0000482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x2403000c
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x26020001
  .word 0x3050ffff
  .word 0x3202ffff
  .word 0x0055102a
  .word 0x1440ffa9
  .word 0x00000000
  .word 0x0c0afeb8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x2403000c
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840030
  .word 0x240500d8
  .word 0x0c0af614
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050004
  .word 0xa0450000
  .word 0xde630058
  .word 0xfc430008
  .word 0xa4450048
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050002
  .word 0x0000302d
  .word 0x0000382d
  .word 0x00a0402d
  .word 0x0c0b6dd0
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
  .word 0x0000882d
  .word 0x10000073
  .word 0x00000000
  .word 0x3222ffff
  .word 0x00021080
  .word 0x005d1021
  .word 0x8c5000a0
  .word 0x8e040030
  .word 0x27a500e0
  .word 0x0c0a0014
  .word 0x00000000
  .word 0x8e040030
  .word 0x0000282d
  .word 0x27a60090
  .word 0x0000382d
  .word 0x0c09fdf0
  .word 0x00000000
  .word 0x27a400d0
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a70090
  .word 0x0c12f878
  .word 0x00000000
  .word 0x3c02437a
  .word 0x44820800
  .word 0xc7a000d0
  .word 0x460100c2
  .word 0xe7a300d0
  .word 0xc7a000d4
  .word 0x46010082
  .word 0xe7a200d4
  .word 0xc7a000d8
  .word 0x46010042
  .word 0xe7a100d8
  .word 0xc7a000e0
  .word 0x46030000
  .word 0xe7a000f0
  .word 0xc7a000e4
  .word 0x46020000
  .word 0xe7a000f4
  .word 0xc7a000e8
  .word 0x46010000
  .word 0xe7a000f8
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e040030
  .word 0x27a500f0
  .word 0x24060009
  .word 0x0c0a0674
  .word 0x00000000
  .word 0x0040902d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44826000
  .word 0x8e040030
  .word 0x27a500f0
  .word 0x24060018
  .word 0x0c0a0674
  .word 0x00000000
  .word 0x0040b02d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x02c0202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e040030
  .word 0x0000282d
  .word 0x24060020
  .word 0x0c0a08ac
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xdec30058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e040030
  .word 0x2405ffff
  .word 0x24060004
  .word 0x0000382d
  .word 0x00c0402d
  .word 0x0000482d
  .word 0x0c0a174c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde630058
  .word 0xfc430008
  .word 0x2403000c
  .word 0xa4430048
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x26220001
  .word 0x3051ffff
  .word 0x3222ffff
  .word 0x0055102a
  .word 0x1440ff8b
  .word 0x00000000
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0c0b5fec
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405001e
  .word 0x0c0a6758
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
  .word 0x27bd0100
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_loop_invariants reset
// FUN_00297480
void btlActionInitStatePersona(BtlAction* action)
{
    BtlPacket* packet;
    BtlPacket* root;
    s32 table;
    u16 personaId;
    BtlUnit* personaUnit;

    btlAction0028a780(action);
    packet = func_002bd780(action->unit, action->target.commandId);
    packet->actionUID = action->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_2D);
    packet = btlCameraCreateSetStatePacket(action, BTLCAMERA_STATE_PERSONA);
    packet->actionUID = action->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_0);
    if (action->unit->genus == UNIT_GENUS_PC)
    {
        packet = FUN_002843e0(action->unit, 6);
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
    }
    else
    {
        packet = btlUnitCreateAnimPacket(action->unit, 0x17, 0, 1.0f, BTLUNIT_ANIM_MODE_ONCE);
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
    }
    packet = btlVoice002e2be0(action, 0x19, 0, 0, 0);
    packet->actionUID = action->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_1);
    if (action->unit->genus != UNIT_GENUS_PC)
    {
        goto persona_init_done;
    }
    FUN_00175130_btlAction(*(u16*)action->target.unkData1);
    personaId = *(volatile u16*)action->target.unkData1;
    personaUnit = (BtlUnit*)*(volatile BtlUnit**)&action->unit;
    btlUnitInitPersona(personaUnit, personaId);
persona_init_done:
    table = FUN_002fcf50(action);
    if (table == 0)
    {
        table = ACTION_U32(gBtl, 0xca4);
    }
    root = FUN_002baf90(table, action->unit, action->unit, 0, 0);
    ACTION_U16(root, 0x48) = 0xf;
    root->actionUID = action->uid;
    btlPacketRegister(root, BTLPACKET_TYPE_3D);
    packet = FUN_002dd100(10, 2, 4);
    packet->unk_00 = 5;
    packet->parentUID = root->uid;
    packet->actionUID = action->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_1);
    if (action->unit->genus != UNIT_GENUS_PC)
    {
        goto persona_done;
    }
    packet = FUN_002bddd0();
    packet->unk_00 = 4;
    packet->parentUID = root->uid;
    packet->actionUID = action->uid;
    btlPacketRegister(packet, BTLPACKET_TYPE_2D);
persona_done:
    gBtl->flags |= 0x400000;
    BATTLE_U16(0x18) |= 4;
}

// FUN_002976d0
void btlActionUpdateStatePersona(BtlAction* action)
{
    if (btlPacketFindFirstByActionUID(action->uid, BTL_UIDMAX) == NULL)
    {
        if (action->unit->genus == UNIT_GENUS_PC)
        {
            action->unk_18 &= ~0x400;
        }

        btlActionSetState(action, action->unk_14);
    }
}
// FUN_00297750
void btlActionInitStateBadDamage(BtlAction* action)
{
    (void)action;
}


// FUN_00297760
void btlActionUpdateStateBadDamage(BtlAction* action)
{
    BtlPacket* root;
    BtlPacket* packet;
    BtlUnit* unit;
    BtlTargetResult work;
    s32 damage;
    u32 badStatus;
    s64 actionUID;
    u16 state;

    if (btlPacketCountById(0x700))
    {
        return;
    }
    if (btlPacketCountById(0x506))
    {
        return;
    }
    if (btlPacketCountById(0x507))
    {
        return;
    }
    if (btlPacketCountById(0x301))
    {
        return;
    }

    unit = action->unit;
    badStatus = datCalcGetBadStatus(unit->datUnit);
    actionUID = action->uid;
    switch (badStatus & 0xfffff)
    {
    case 0x80:
        FUN_002d5dc0(&work);
        damage = FUN_002dc670(action);
        work.hpDelta = damage;
        if (damage < 0)
        {
            root = FUN_002d7e20(action, action, &work, 1, 1);
            btlPacketRegister(root, BTLPACKET_TYPE_1);
            packet = FUN_002bd480(unit);
            packet->unk_00 = 4;
            packet->parentUID = root->uid;
            btlPacketRegister(packet, BTLPACKET_TYPE_1);
            packet = FUN_002bdbd0(unit, unit, -1, 0, 0, 0, 1, &work);
            packet->unk_00 = 4;
            packet->parentUID = root->uid;
            packet->unk_47 &= ~0x20;
            btlPacketRegister(packet, BTLPACKET_TYPE_2D);
            packet = FUN_002bd230(unit, 0, 0);
            packet->unk_00 = 4;
            packet->parentUID = root->uid;
            packet->unk_47 &= ~0x20;
            btlPacketRegister(packet, BTLPACKET_TYPE_2D);
            packet = btlUnitCreateAnimPacketSignedId(action->unit, BTLUNIT_ANIM_RESNULLIFIED, 0, 1.0f, BTLUNIT_ANIM_MODE_ONCE);
            packet->unk_00 = 4;
            packet->parentUID = root->uid;
            packet->actionUID = actionUID;
            btlPacketRegister(packet, BTLPACKET_TYPE_1);
            packet = FUN_002dd100(10, 6, 0xc);
            packet->unk_00 = 4;
            packet->parentUID = root->uid;
            btlPacketRegister(packet, BTLPACKET_TYPE_1);
        }
        switch (action->target.commandId)
        {
        case 1:
        case 3:
        case 2:
            state = BTLACTION_STATE_PACKET;
            break;
        default:
            state = BTLACTION_STATE_PACKET;
            break;
        }
        btlActionSetState(action, state);
        break;
    default:
        switch (action->target.commandId)
        {
        case 1:
        case 3:
        case 2:
            state = BTLACTION_STATE_PACKET;
            break;
        default:
            state = BTLACTION_STATE_PACKET;
            break;
        }
        btlActionSetState(action, state);
        break;
    }
}
/* W373 pragma sweep nd/obj: base 1683/3052; singles LI=1672/3052 CS=2244/3188(over) LT=1677/3052 PR=1683/3052 SR=1683/3052 DA=1683/3052. */
/* Pair nd/obj: LI+CS=2224/3188(over) LI+LT=1674/3052 LI+PR=2320/3124(over) LI+SR=1672/3052 LI+DA=1673/3052 CS+LT=2248/3188(over) CS+PR=2244/3188(over) CS+SR=2244/3188(over) CS+DA=2244/3188(over) LT+PR=1677/3052 LT+SR=1677/3052 LT+DA=1677/3052 PR+SR=1683/3052 PR+DA=1683/3052 SR+DA=1683/3052; retain LI on. */
// FUN_00297a50
u32 FUN_00297a50(BtlAction* action)
{
    return ACTION_U32(action, 0x48c);
}

/* W373 pragma sweep nd/obj: base 1024/1492; singles LI=907/1488 CS=1073/1532 LT=1024/1492 PR=1024/1492 SR=1024/1492 DA=1024/1492; retain LI on. */
#pragma opt_loop_invariants on
// FUN_00297a60
asm void btlActionInitStateRoundUpMes(BtlAction* action)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x0000882d
  .word 0x8c820030
  .word 0x904200a2
  .word 0x14400004
  .word 0x00000000
  .word 0x0260302d
  .word 0x10000002
  .word 0x00000000
  .word 0x8e660038
  .word 0x10c00015
  .word 0x00000000
  .word 0x0000282d
  .word 0x8f84b6fc
  .word 0x94830b98
  .word 0x1000000c
  .word 0x00000000
  .word 0x30a2ffff
  .word 0x00021080
  .word 0x00821021
  .word 0x8c420b88
  .word 0x14460004
  .word 0x00000000
  .word 0x00c0882d
  .word 0x10000007
  .word 0x00000000
  .word 0x24a20001
  .word 0x3045ffff
  .word 0x30a2ffff
  .word 0x0043102a
  .word 0x1440fff2
  .word 0x00000000
  .word 0x1620000a
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x94440b98
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x3042ffff
  .word 0x8f83b6fc
  .word 0x00021080
  .word 0x00431021
  .word 0x8c510b88
  .word 0x8e220030
  .word 0x944400a4
  .word 0x0c0b8e28
  .word 0x00000000
  .word 0x0040202d
  .word 0xde630000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420148
  .word 0x10400018
  .word 0x00000000
  .word 0x0000202d
  .word 0x8c450030
  .word 0x24060001
  .word 0x0c0a21b8
  .word 0x00000000
  .word 0x0040202d
  .word 0xde630000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420148
  .word 0x8c440030
  .word 0x0000282d
  .word 0x0c0a2254
  .word 0x00000000
  .word 0x0040202d
  .word 0xde630000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e620030
  .word 0x904200a2
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000001c
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x84430a38
  .word 0x2402ffff
  .word 0x10620016
  .word 0x00000000
  .word 0x24040002
  .word 0x3c050008
  .word 0x0c0b5384
  .word 0x00000000
  .word 0x3044ffff
  .word 0x8f83b6fc
  .word 0x84620a3a
  .word 0x00021043
  .word 0x0044102b
  .word 0x1440000b
  .word 0x00000000
  .word 0x84700a38
  .word 0x0c0adc18
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x12020004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x10400030
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ae3d0
  .word 0x00000000
  .word 0x0040902d
  .word 0xde630000
  .word 0xfc430060
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c500150
  .word 0x1000001e
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x3c050018
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x14400017
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x14400011
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0xc78c80e0
  .word 0x24060018
  .word 0x0c0a0674
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xde630000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e100a34
  .word 0x1600ffe2
  .word 0x00000000
  .word 0x1000007e
  .word 0x00000000
  .word 0x24040002
  .word 0x24050fff
  .word 0x0c0ae358
  .word 0x00000000
  .word 0x0040202d
  .word 0xde630000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020040
  .word 0x00621024
  .word 0x10400011
  .word 0x00000000
  .word 0x94820018
  .word 0x30420002
  .word 0x1040000d
  .word 0x00000000
  .word 0x24040001
  .word 0x24050fff
  .word 0x0c0ae358
  .word 0x00000000
  .word 0x0040202d
  .word 0xde630000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x1000005e
  .word 0x00000000
  .word 0x8e640030
  .word 0x27a50060
  .word 0x0000302d
  .word 0x27a70050
  .word 0x0c09fdf0
  .word 0x00000000
  .word 0x8e620030
  .word 0x24440004
  .word 0x27a50060
  .word 0x0c0b47b4
  .word 0x00000000
  .word 0x3c024296
  .word 0x44820800
  .word 0x00000000
  .word 0x46010036
  .word 0x4501004d
  .word 0x00000000
  .word 0x8e620030
  .word 0x8c440a2c
  .word 0x3c050018
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x14400046
  .word 0x00000000
  .word 0x64050002
  .word 0x9663006e
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x00431021
  .word 0x90420000
  .word 0x30420002
  .word 0x0002102b
  .word 0x38420001
  .word 0x3047ffff
  .word 0x8e640030
  .word 0x8c820a2c
  .word 0x94460002
  .word 0x908300a2
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x1060000f
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x8f85b728
  .word 0x30c3ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00451821
  .word 0x30e2ffff
  .word 0x00021080
  .word 0x00431021
  .word 0x94450024
  .word 0x30a2ffff
  .word 0x00021880
  .word 0x3c020069
  .word 0x24423300
  .word 0x00431021
  .word 0x27a50060
  .word 0xc44c0000
  .word 0x0000302d
  .word 0x0c0a0674
  .word 0x00000000
  .word 0x0040802d
  .word 0xde630000
  .word 0xfc430060
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e640030
  .word 0x27a50050
  .word 0x0000302d
  .word 0x0c0a08ac
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde030058
  .word 0xfc430008
  .word 0xde630000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c020040
  .word 0x00621024
  .word 0x10400020
  .word 0x00000000
  .word 0x94820018
  .word 0x30420002
  .word 0x1040001c
  .word 0x00000000
  .word 0x8c90014c
  .word 0x10000017
  .word 0x00000000
  .word 0x9602001a
  .word 0x30420001
  .word 0x10400012
  .word 0x00000000
  .word 0x8e020030
  .word 0x8c440a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x1440000b
  .word 0x00000000
  .word 0x8e040030
  .word 0x0000282d
  .word 0x0c0a10f8
  .word 0x00000000
  .word 0x0040202d
  .word 0xde630000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e1004a8
  .word 0x1600ffe9
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0a876c
  .word 0x00000000
  .word 0x0040202d
  .word 0xde630000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050006
  .word 0x0c0a8ed0
  .word 0x00000000
  .word 0x0040202d
  .word 0xde630000
  .word 0xfc430060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x3c02ffbf
  .word 0x3442ffff
  .word 0x00621024
  .word 0xac82000c
  .word 0x8f82b6fc
  .word 0xa4400018
  .word 0x0c0b469c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c83000c
  .word 0x2402bfff
  .word 0x00621024
  .word 0xac82000c
  .word 0x0c07fcd4
  .word 0x00000000
  .word 0xae710484
  .word 0xae600488
  .word 0xae60048c
  .word 0x24030012
  .word 0xa6630490
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_loop_invariants reset
// FUN_00298060
asm void btlActionUpdateStateRoundUpMes(BtlAction* action)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c820488
  .word 0x14400089
  .word 0x00000000
  .word 0x24040c03
  .word 0x0c09f91c
  .word 0x00000000
  .word 0x1440010c
  .word 0x00000000
  .word 0x0000382d
  .word 0x8f86b6fc
  .word 0x94c50b98
  .word 0x1000000c
  .word 0x00000000
  .word 0x30e4ffff
  .word 0x00041080
  .word 0x00c21021
  .word 0x8c420b88
  .word 0x8c420030
  .word 0x944300a4
  .word 0x00041040
  .word 0x005d1021
  .word 0xa4430078
  .word 0x24e20001
  .word 0x3047ffff
  .word 0x30e2ffff
  .word 0x0045102a
  .word 0x1440fff2
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x30e2ffff
  .word 0x00021040
  .word 0x005d1021
  .word 0xa4400078
  .word 0x24e20001
  .word 0x3047ffff
  .word 0x30e2ffff
  .word 0x2c420003
  .word 0x1440fff7
  .word 0x00000000
  .word 0x97a40078
  .word 0x97a5007a
  .word 0x97a6007c
  .word 0x0c0b8ed4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c0b8e64
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e040484
  .word 0x24050004
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050002
  .word 0x24060012
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3c040029
  .word 0x24847a50
  .word 0x0200282d
  .word 0x0c09fd04
  .word 0x00000000
  .word 0x0040882d
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xc7808360
  .word 0xe7a00030
  .word 0xc7808364
  .word 0xe7a00034
  .word 0xc7808368
  .word 0xe7a00038
  .word 0xc780836c
  .word 0xe7a00040
  .word 0xc7808370
  .word 0xe7a00044
  .word 0xc7808374
  .word 0xe7a00048
  .word 0xc7808378
  .word 0xe7a00050
  .word 0xc780837c
  .word 0xe7a00054
  .word 0xc7808380
  .word 0xe7a00058
  .word 0xafa00060
  .word 0xafa00064
  .word 0xafa00068
  .word 0x24020003
  .word 0xafa2003c
  .word 0xc7808384
  .word 0xe7a00080
  .word 0xc7808388
  .word 0xe7a00084
  .word 0xc780838c
  .word 0xe7a00088
  .word 0xc7a20080
  .word 0xc7a10084
  .word 0xc7a00088
  .word 0xe7a20060
  .word 0xe7a10064
  .word 0xe7a00068
  .word 0x27a40030
  .word 0x0c0ae580
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440d10
  .word 0x8e050030
  .word 0x0000302d
  .word 0xde270058
  .word 0x3408c000
  .word 0x0c0aecbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24020001
  .word 0xae020488
  .word 0x8e030488
  .word 0x24020001
  .word 0x14620011
  .word 0x00000000
  .word 0x86020490
  .word 0x1440000a
  .word 0x00000000
  .word 0x8e020484
  .word 0x8c420030
  .word 0x944400a4
  .word 0x0c07fbe4
  .word 0x00000000
  .word 0x2402ffff
  .word 0xa6020490
  .word 0x10000005
  .word 0x00000000
  .word 0x18400003
  .word 0x00000000
  .word 0x2442ffff
  .word 0xa6020490
  .word 0xde040000
  .word 0x3c023fff
  .word 0x3442ffff
  .word 0x0002183c
  .word 0x3402ffff
  .word 0x00021438
  .word 0x3442ffff
  .word 0x00432825
  .word 0x0c09f8e4
  .word 0x00000000
  .word 0x14400069
  .word 0x00000000
  .word 0x8e02048c
  .word 0x14400062
  .word 0x00000000
  .word 0x0c07fc40
  .word 0x00000000
  .word 0x10400062
  .word 0x00000000
  .word 0x0c07fc48
  .word 0x00000000
  .word 0x1440001a
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050002
  .word 0x0c0b5fec
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e030484
  .word 0x8f82b6fc
  .word 0x8c420148
  .word 0xac430494
  .word 0x2403001d
  .word 0x8f82b6fc
  .word 0x8c420148
  .word 0xa4430016
  .word 0x8f82b6fc
  .word 0x8c440148
  .word 0x0c0a68e0
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000019
  .word 0x00000000
  .word 0x8e040484
  .word 0x24050006
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c0b8f44
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403000a
  .word 0xa0430000
  .word 0x24030c06
  .word 0xa4430008
  .word 0xde030000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24110001
  .word 0x0c07fc50
  .word 0x00000000
  .word 0x0c0b8ea4
  .word 0x00000000
  .word 0x12200003
  .word 0x00000000
  .word 0xde030000
  .word 0xfc430060
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c0a2254
  .word 0x00000000
  .word 0x0040202d
  .word 0xde030000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x96020018
  .word 0x3042fff7
  .word 0xa6020018
  .word 0x0c0b469c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430007
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x8c62000c
  .word 0x34424000
  .word 0xac62000c
  .word 0x0c07fcdc
  .word 0x00000000
  .word 0x24030001
  .word 0xae03048c
  .word 0x10000005
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405001e
  .word 0x0c0a6758
  .word 0x00000000
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_002984e0
void btlActionInitStateRoundUp(BtlAction* action)
{
    u16 i;

    FUN_002d15a0(&action->target);
    action->target.commandId = 2;
    action->target.specificId = ACTION_U16(gBtl, 0xb98) + 0x13f;
    FUN_002bff60(action, (BtlTarget*)action->unkData3, action->target.specificId, 0);
    i = 0;
    while (i < ACTION_U16(action, 0xc0))
    {
        *(BtlAction**)((int)action + i * 4 + 0x38) = *(BtlAction**)((int)action + i * 4 + 0x88);
        i++;
    }
    action->target.targetedCount = ACTION_U16(action, 0xc0);
    FUN_002d6620(action);
    {
        u32 allInactive = 1;
        u16 j = 0;
        int count = action->target.targetedCount;

        while (j < count)
        {
            BtlAction* target = *((BtlAction**)action + j + 0xe);
            if (ACTION_U32(target, 0xd0) != 0)
            {
                allInactive = 0;
                break;
            }
            j++;
        }
        if (allInactive != 0)
        {
            action->target.specificId = ACTION_U16(gBtl, 0xb98) + 0x14b;
            ACTION_U32(action, 0x498) = 1;
            return;
        }
        ACTION_U32(action, 0x498) = 0;
    }
}
/* W373 pragma sweep nd/obj: base 1892/2704; singles LI=1888/2704 CS=1923/2688 LT=1813/2592 PR=1815/2712 SR=1892/2704 DA=1892/2704. */
/* Pair nd/obj: LI+CS=1925/2688 LI+LT=1805/2592 LI+PR=1840/2712 LI+SR=1888/2704 LI+DA=1888/2704 CS+LT=1766/2576 CS+PR=1923/2688 CS+SR=1923/2688 CS+DA=1923/2688 LT+PR=1809/2600 LT+SR=1813/2592 LT+DA=1813/2592 PR+SR=1815/2712 PR+DA=1815/2712 SR+DA=1892/2704; retain CS+LT. */
#pragma opt_common_subs off
#pragma opt_lifetimes on
/* Retail algorithm: build camera/voice/area packet chain, per-target loops, and final wait packet; implemented 2780/2784 bytes (99%); remaining register/order differences. */
// FUN_00298610
asm void btlActionUpdateStateRoundUp(BtlAction* action)
{
  .set noreorder
  .word 0x27bdfe10
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
  .word 0x24040001
  .word 0x0c0ae3e4
  .word 0x00000000
  .word 0xafa20124
  .word 0x8f82b6fc
  .word 0x8c51014c
  .word 0x1000000e
  .word 0x00000000
  .word 0x92220028
  .word 0x1040000a
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c0b5fec
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e3104a8
  .word 0x1620fff2
  .word 0x00000000
  .word 0x8693006e
  .word 0x8e9e0038
  .word 0x0000382d
  .word 0x8f86b6fc
  .word 0x94c50b98
  .word 0x1000000a
  .word 0x00000000
  .word 0x30e2ffff
  .word 0x00022080
  .word 0x00c41021
  .word 0x8c420b88
  .word 0x8c430030
  .word 0x009d1021
  .word 0xac4301d8
  .word 0x24e20001
  .word 0x3047ffff
  .word 0x30e2ffff
  .word 0x0045102a
  .word 0x1440fff4
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x30e2ffff
  .word 0x00021080
  .word 0x005d1021
  .word 0xac4001d8
  .word 0x24e20001
  .word 0x3047ffff
  .word 0x30e2ffff
  .word 0x2c420003
  .word 0x1440fff7
  .word 0x00000000
  .word 0x8fa401d8
  .word 0x8fa501dc
  .word 0x8fa601e0
  .word 0x0c0af254
  .word 0x00000000
  .word 0x0040202d
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0c0b8f20
  .word 0x00000000
  .word 0x0040882d
  .word 0x2404000a
  .word 0xa0440000
  .word 0x24030c06
  .word 0xa4430008
  .word 0xa0440010
  .word 0x24030c05
  .word 0xa4430018
  .word 0xfc500060
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e840494
  .word 0x24050005
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0b8af8
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde230058
  .word 0xfc430008
  .word 0xde830000
  .word 0xfc430060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a53358
  .word 0x0c0b75a4
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
  .word 0xde360058
  .word 0x3271ffff
  .word 0x0220202d
  .word 0x27a501ec
  .word 0x27a601e8
  .word 0x0c0a7a98
  .word 0x00000000
  .word 0x8fa401ec
  .word 0x8fa501e8
  .word 0x24060010
  .word 0x0c0a7d2c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc560008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a7b00
  .word 0x00000000
  .word 0x0040b82d
  .word 0x0220202d
  .word 0x27a501ec
  .word 0x27a601e8
  .word 0x0c0a7b20
  .word 0x00000000
  .word 0x0013143c
  .word 0x0002143f
  .word 0xafa20100
  .word 0x8f84b710
  .word 0x000218c0
  .word 0x00621023
  .word 0x00021080
  .word 0x00441021
  .word 0x94420002
  .word 0x30420002
  .word 0x0002102b
  .word 0x3048ffff
  .word 0x02e0202d
  .word 0x8fa501ec
  .word 0x8fa601e8
  .word 0x24070010
  .word 0x0c0a8014
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc560008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x3273ffff
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
  .word 0xfc560008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24060010
  .word 0x0c0a86c0
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc560008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0260202d
  .word 0x27a50130
  .word 0x0c0aedbc
  .word 0x00000000
  .word 0x8fa40124
  .word 0x27a50130
  .word 0x0000302d
  .word 0x0c0aeb00
  .word 0x00000000
  .word 0xafa2012c
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc560008
  .word 0xfc500060
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa40124
  .word 0x8e850030
  .word 0x8fc60030
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0xafa20128
  .word 0x24030004
  .word 0xa0430000
  .word 0x8fa3012c
  .word 0xdc630058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0040202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e820498
  .word 0x10400004
  .word 0x00000000
  .word 0x24020013
  .word 0x10000002
  .word 0x00000000
  .word 0x24020014
  .word 0x3046ffff
  .word 0x2404000c
  .word 0x24050002
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0x8fa30128
  .word 0xdc630058
  .word 0xfc430008
  .word 0x2403000f
  .word 0xa4430048
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0xa7a00110
  .word 0x0220202d
  .word 0x0c0b5330
  .word 0x00000000
  .word 0x3042ffff
  .word 0x7fa200d0
  .word 0x0000f02d
  .word 0x1000013b
  .word 0x00000000
  .word 0x33c2ffff
  .word 0x00021080
  .word 0x02821021
  .word 0x8c510038
  .word 0x262400c8
  .word 0x0c0ae590
  .word 0x00000000
  .word 0x0040a82d
  .word 0x8e2200d4
  .word 0x10400004
  .word 0x00000000
  .word 0x0280982d
  .word 0x10000002
  .word 0x00000000
  .word 0x0220982d
  .word 0x8e640030
  .word 0x0c0af520
  .word 0x00000000
  .word 0x0040202d
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x36a81000
  .word 0x8fa40124
  .word 0x8e850030
  .word 0x8e660030
  .word 0x24070001
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040a82d
  .word 0x24030004
  .word 0xa0430000
  .word 0x8fa3012c
  .word 0xdc630058
  .word 0xfc430008
  .word 0x97a30110
  .word 0xa4430048
  .word 0xfc500060
  .word 0x02a0202d
  .word 0x24050002
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x2404000a
  .word 0x0000282d
  .word 0x24060004
  .word 0x0c0b7440
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xdea30058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e2200d4
  .word 0x10400011
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440c8c
  .word 0x8e850030
  .word 0x8e260030
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xdea30058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x962300cc
  .word 0x24020400
  .word 0x14620011
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440c90
  .word 0x8e850030
  .word 0x8e660030
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c0aebe4
  .word 0x00000000
  .word 0x0040202d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xdea30058
  .word 0xfc430008
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000b82d
  .word 0x100000cd
  .word 0x00000000
  .word 0x32e3ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02221021
  .word 0x7fa200c0
  .word 0x804500f8
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e640030
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040902d
  .word 0x2403000b
  .word 0xa0430000
  .word 0xdea30058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e240030
  .word 0x8e850030
  .word 0x24060002
  .word 0x0c0a0994
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba200c0
  .word 0x244200e0
  .word 0xafa200e0
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0040302d
  .word 0x962700cc
  .word 0x962800ce
  .word 0x0c0b5f88
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
  .word 0x0220202d
  .word 0x0c0b6024
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
  .word 0x9682006a
  .word 0x2443ffff
  .word 0x8fa200f0
  .word 0x14430012
  .word 0x00000000
  .word 0x922200c8
  .word 0x2443ffff
  .word 0x7ba200a0
  .word 0x1443000d
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b6024
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
  .word 0x7ba200a0
  .word 0x14400016
  .word 0x00000000
  .word 0x8fa200e0
  .word 0x8c420000
  .word 0x10400012
  .word 0x00000000
  .word 0x8e640030
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0af48c
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba200c0
  .word 0x244200fa
  .word 0x7fa200b0
  .word 0x7ba200c0
  .word 0x944200fa
  .word 0x30420001
  .word 0x10400037
  .word 0x00000000
  .word 0x27a401b0
  .word 0x0c0b5770
  .word 0x00000000
  .word 0x3c020010
  .word 0xafa201bc
  .word 0x0220202d
  .word 0x0220282d
  .word 0x27a601b0
  .word 0x24070001
  .word 0x00e0402d
  .word 0x0c0b5f88
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xfc560008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x7ba200b0
  .word 0x94420000
  .word 0x30420002
  .word 0x1040001e
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8e240030
  .word 0x2405000a
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0a1080
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8e240030
  .word 0x0c0a1324
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x922a00c8
  .word 0x8e840030
  .word 0x8e650030
  .word 0x8fa60100
  .word 0x962700cc
  .word 0x962800ce
  .word 0x02e0482d
  .word 0x8fab00e0
  .word 0x0c0af6f4
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030005
  .word 0xa0430000
  .word 0xde430058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x24050003
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x26e20001
  .word 0x3057ffff
  .word 0x32e2ffff
  .word 0x7fa200a0
  .word 0x922300c8
  .word 0x0043102a
  .word 0x1440ff2f
  .word 0x00000000
  .word 0x97a30110
  .word 0x7ba200d0
  .word 0x00621021
  .word 0xa7a20110
  .word 0x27c20001
  .word 0x305effff
  .word 0x33c2ffff
  .word 0xafa200f0
  .word 0x9683006a
  .word 0x0043102a
  .word 0x1440fec1
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0a7e94
  .word 0x00000000
  .word 0x0040202d
  .word 0x24030004
  .word 0xa0430000
  .word 0xde430058
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
  .word 0xde430058
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
  .word 0xde430058
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
  .word 0xdea30058
  .word 0xfc430008
  .word 0x90430047
  .word 0x306300df
  .word 0xa0430047
  .word 0xfc500060
  .word 0x0000282d
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0af254
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050004
  .word 0xa0450000
  .word 0xdea30058
  .word 0xfc430008
  .word 0xa0450010
  .word 0x8fa30128
  .word 0xdc630058
  .word 0xfc430018
  .word 0xfc500060
  .word 0x24050001
  .word 0x0c09fb48
  .word 0x00000000
  .word 0x8fa40124
  .word 0x0c0ae40c
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405001e
  .word 0x0c0a6758
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
  .word 0x27bd01f0
  .word 0x03e00008
  .word 0x00000000
}
#pragma opt_lifetimes reset
#pragma opt_common_subs reset

// FUN_002990f0
void btlActionInitStatePacket(BtlAction* action)
{
    (void)action;
}
// FUN_00299100
void btlActionUpdateStatePacket(BtlAction* action)
{
    if (btlPacketFindFirstByActionUID(action->uid, BTL_UIDMAX) == NULL)
    {
        btlActionSetState(action, BTLACTION_STATE_END);
    }
}

// FUN_00299170
void btlActionInitStateEnd(BtlAction* action)
{
    if (action->unk_18 & 0x4000)
    {
        gBtl->flags |= 0x400000;
        *(u16*)((u8*)gBtl + 0x18) |= 6;
        action->unk_18 &= ~0x4000;
    }
    action->unk_18 &= ~0x100;

    if (action->unk_18 & 0x200)
    {
        gBtl->flags |= 0x400000;
        *(u16*)((u8*)gBtl + 0x18) |= 0x20;
        action->unk_18 &= ~0x200;
    }

    if (FUN_002e4330(action) != 0)
    {
        action->evtFunc = FUN_002e43a0;
        action->stateAfterEvt = BTLACTION_STATE_END;
        btlActionSetState(action, BTLACTION_STATE_EVENT);
    }
    else
    {
        action->unk_18 &= 0xc7ff;
    }
}
// FUN_00299270
void btlActionUpdateStateEnd(BtlAction* action)
{
    if ((gBtl->flags & 0x80) == 0)
    {
        if ((action->unk_18 & 8) && FUN_0028a200(action) != 0)
        {
            if (btlPacketCountById(0x504) != 0)
            {
                return;
            }
            if (btlPacketCountById(0x506) != 0)
            {
                return;
            }
            btlActionSetState(action, 0x1c);
            return;
        }

        if ((action->unk_18 & 0x8004) == 0)
        {
            action->unk_20++;
        }

        if (FUN_0027d380() == 0)
        {
            if ((action->unk_18 & 0x8004) == 0)
            {
                if ((&action->unk_28)[1] > 0)
                {
                    if (action->unk_28 == 0 && datCalcIsDead(action->unit->datUnit, 0) == 0)
                    {
                        (&action->unk_28)[1]--;
                    }
                    else
                    {
                        (&action->unk_28)[1] = 0;
                    }
                }

                if (action->unk_28 == 0 && (&action->unk_28)[1] == 0)
                {
                    FUN_00302d40(action->unit->datUnit);
                    FUN_002dae30(1);
                    FUN_0029abe0(action);
                }
                else
                {
                    FUN_0029ac70(action);
                    FUN_002dae30(0);
                }
            }
            else
            {
                FUN_0029abe0(action);
            }
        }
        else
        {
            gBtl->flags |= 0x80;
        }

        action->unk_18 &= 0x7fff;
        if ((gBtl->flags & 0x80) == 0)
        {
            if ((action->unk_18 & 0x20) == 0)
            {
                btlActionSetState(action, 0x20);
            }
            else
            {
                FUN_0029a320(action);
                if (action->unit->genus == UNIT_GENUS_EC)
                {
                    datCalcSetBadStatus(action->unit->datUnit, 0x80000);
                    datCalcSetHp(action->unit->datUnit, 0);
                }

                if (FUN_0027d380() != 0)
                {
                    gBtl->flags |= 0x80;
                }
                btlActionSetState(action, 0x22);
            }
        }
        else
        {
            if (datCalcIsDead(action->unit->datUnit, 0) != 0)
            {
                FUN_002d7560(action);
                btlActionSetState(action, BTLACTION_STATE_STANDBY);
            }
        }
    }
}

// FUN_00299520
void btlActionInitStateEndHome(BtlAction* action)
{
    BtlPacket* packet;
    BtlUnit* unit = action->unit;
    BtlUnit* moveUnit;
    RwV3d homePos;
    u16 allowMove;
    u16 unitId;
    u16 speedIndex;
    BtlEnemyRecord* enemyRecords;

    action->movedAwayFromHome = 0;
    if (datCalcIsDead(unit->datUnit, 0) != 0)
    {
        if ((unit->flags3 & BTLUNIT_FLAG3_UNK40) != 0)
        {
            gBtl->flags |= 0x400000;
            BATTLE_U16(0x18) |= 6;
        }
        btlActionSetState(action, BTLACTION_STATE_STANDBY);
        return;
    }
    if (action == btlOrderGetActionPlaying())
    {
        btlActionSetState(action, BTLACTION_STATE_STANDBY);
        return;
    }
    if ((gBtl->flags & 0x400000) != 0 && (BATTLE_U16(0x18) & 2) != 0)
    {
        return;
    }
    if (datCalcChkBadStatus(action->unit->datUnit, 0x180000) != 0)
    {
        return;
    }
    btlUnit0027f7c0(unit, &homePos, NULL, NULL);
    if (action->unit->genus == UNIT_GENUS_PC)
    {
        action->movedAwayFromHome = 1;
    }
    if (FUN_002d1ed0(&unit->pos, &homePos) > 75.0f)
    {
        speedIndex = 2;
        allowMove = !(iGpffffb708[(u32)action->target.specificId * 0x2c] & 2);
        moveUnit = action->unit;
        unitId = moveUnit->datUnit->id;
        switch (moveUnit->genus)
        {
        case UNIT_GENUS_PC:
            break;
        case UNIT_GENUS_EC:
            enemyRecords = iGpffffb728;
            speedIndex = enemyRecords[unitId].moveSpeed[allowMove].speedIndex;
            break;
        default:
            break;
        }
        packet = btlUnitCreateMovePacket(moveUnit, &homePos, D_00693300[speedIndex], 0);
        packet->actionUID = action->uid;
        btlPacketRegister(packet, BTLPACKET_TYPE_1);
        action->movedAwayFromHome = 1;
    }
}
// FUN_00299760
void btlActionUpdateStateEndHome(BtlAction* action)
{
    RwV3d rot;
    BtlPacket* rotPacket;

    if (!btlUnitIsMoving(action->unit))
    {
        if (action->movedAwayFromHome == true)
        {
            btlUnit0027f7c0(action->unit, NULL, NULL, &rot);

            rotPacket = btlUnitCreateRotatePacket(action->unit, &rot, 0);
            rotPacket->actionUID = action->uid;
            btlPacketRegister(rotPacket, BTLPACKET_TYPE_1);
        }

        btlActionSetState(action, BTLACTION_STATE_STANDBY);
    }
}

// FUN_00299800
void btlActionInitStateDead(BtlAction* action)
{
    BtlPacket* packet;
    BtlUnit* unit;
    u32 flags;

    unit = action->unit;
    FUN_0029a320(action);
    switch (unit->genus)
    {
    case UNIT_GENUS_PC:
        FUN_00301690(unit->datUnit);
        if ((s8)ACTION_U8(unit->datUnit, 0x10) == 10)
        {
            ACTION_U8(unit->datUnit, 0x10) = 1;
        }
        break;
    case UNIT_GENUS_EC:
        FUN_0017c750((s16)unit->charId);
        FUN_002d7560(action);
        flags = unit->flags3;
        if ((flags & 0x20) == 0)
        {
            if ((flags & 0x100) == 0)
            {
                packet = FUN_00285d30(unit, 0xffffff, 6, 0, 4, 0);
                packet->actionUID = action->uid;
                btlPacketRegister(packet, BTLPACKET_TYPE_1);
                packet = FUN_002baf90(ACTION_U32(gBtl, 0xcb0), unit, unit, 0, 0);
                packet->actionUID = action->uid;
                btlPacketRegister(packet, BTLPACKET_TYPE_3D);
                packet = FUN_002dd100(10, 2, 8);
                packet->actionUID = action->uid;
                btlPacketRegister(packet, BTLPACKET_TYPE_1);
            }
        }
        flags = unit->flags3;
        if ((flags & 0x40) == 0 && (flags & 8) != 0)
        {
            unit->flags3 = flags & ~8;
            FUN_001fdd40();
        }
        break;
    }
}
// FUN_00299990
void btlActionUpdateStateDead(BtlAction* action)
{
    BtlUnit* unit;

    unit = action->unit;
    switch (unit->genus)
    {
        case UNIT_GENUS_PC:
            if (!datCalcIsDead(unit->datUnit, 0))
            {
                unit->flags3 &= ~BTLUNIT_FLAG3_DEAD;

                btlOrderAddAction(action);
                btlActionSetState(action, BTLACTION_STATE_STANDBY);
            }
            break;

        case UNIT_GENUS_EC:
            if (!(unit->flags3 & BTLUNIT_FLAG3_UNK40))
            {
                btlActionSetState(action, BTLACTION_STATE_EXIT);
            }
            else
            {
                if (!datCalcIsDead(unit->datUnit, 0))
                {
                    unit->flags3 &= ~BTLUNIT_FLAG3_DEAD;

                    btlOrderAddAction(action);
                    btlActionSetState(action, BTLACTION_STATE_STANDBY);
                }
            }
    }
}

// FUN_00299aa0
void btlActionInitStateExit(BtlAction* action)
{
    if (action->unk_1a & (1 << 0))
    {
        if (action->unit->flags3 & BTLUNIT_FLAG3_UNK08)
        {
            action->unit->flags3 &= ~BTLUNIT_FLAG3_UNK08;
            FUN_001fdd40();
        }
    }
}
/* W419 negative: permuting btlActionUpdateStateExit locals (including i-first) left nd99 unchanged at object 532/544. */
// FUN_00299b00
asm void btlActionUpdateStateExit(BtlAction* action)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x9483001a
  .word 0x30630001
  .word 0x1060006e
  .word 0x00000000
  .word 0x8e300030
  .word 0x960300a0
  .word 0x14600073
  .word 0x00000000
  .word 0x920300a2
  .word 0x24020001
  .word 0x10620051
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000059
  .word 0x00000000
  .word 0x96220018
  .word 0x30420020
  .word 0x10400055
  .word 0x00000000
  .word 0x0000182d
  .word 0x0000382d
  .word 0x8f82b6fc
  .word 0x10000011
  .word 0x00000000
  .word 0x30e4ffff
  .word 0x00043080
  .word 0x00462021
  .word 0x8c840bac
  .word 0x10800009
  .word 0x00000000
  .word 0x8c850004
  .word 0x8e040a2c
  .word 0x14a40005
  .word 0x00000000
  .word 0x00c21821
  .word 0x8c630bac
  .word 0x10000007
  .word 0x00000000
  .word 0x24e40001
  .word 0x3087ffff
  .word 0x30e4ffff
  .word 0x2c840004
  .word 0x1480ffed
  .word 0x00000000
  .word 0x14600017
  .word 0x00000000
  .word 0x0000382d
  .word 0x10000010
  .word 0x00000000
  .word 0x30e4ffff
  .word 0x000420c0
  .word 0x00442021
  .word 0x8c860bc4
  .word 0x10c00008
  .word 0x00000000
  .word 0x8cc50004
  .word 0x8e040a2c
  .word 0x14a40004
  .word 0x00000000
  .word 0x00c0182d
  .word 0x10000007
  .word 0x00000000
  .word 0x24e40001
  .word 0x3087ffff
  .word 0x30e4ffff
  .word 0x2c840003
  .word 0x1480ffee
  .word 0x00000000
  .word 0x10600004
  .word 0x00000000
  .word 0x9462000a
  .word 0x3042fffe
  .word 0xa462000a
  .word 0x8e040a2c
  .word 0x3c02fff7
  .word 0x3445ff7f
  .word 0x0c0c0158
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x0c0c05a4
  .word 0x00000000
  .word 0x8e020a2c
  .word 0x24440010
  .word 0x80430010
  .word 0x2402000a
  .word 0x14620011
  .word 0x00000000
  .word 0x24020001
  .word 0xa0820000
  .word 0x1000000d
  .word 0x00000000
  .word 0x8e040a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x8e220030
  .word 0x8c640bbc
  .word 0x8c450a2c
  .word 0x0c0bfd98
  .word 0x00000000
  .word 0x8e240030
  .word 0x0c0a1e34
  .word 0x00000000
  .word 0xae200030
  .word 0x9622001a
  .word 0x3042fffe
  .word 0xa622001a
  .word 0x0c07f750
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a6794
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a8ea4
  .word 0x00000000
  .word 0x9623001a
  .word 0x34630002
  .word 0xa623001a
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00299d20
void btlActionInitStateTest(BtlAction* action)
{
    // nothing
}
// FUN_00299d30
void btlActionUpdateStateTest(BtlAction* action)
{
    btlActionSetState(action, BTLACTION_STATE_COMMAND);
}

// FUN_00299d60
void btlActionSetState(BtlAction* action, u16 btlState)
{
    action->oldState = action->currState;
    action->currState = btlState;
    action->stateTimer = 0;

    sActionStateTable[btlState].init(action);
}

// FUN_00299db0. 'delay' = number of frames
void btlActionSetStateWithDelay(BtlAction* action, u16 btlState, u16 delay)
{
    if (delay == 0)
    {
        action->pendingState = BTLACTION_STATE_NON;
        action->pendingStateTimer = 0;

        action->oldState = action->currState;
        action->currState = btlState;
        action->stateTimer = 0;

        sActionStateTable[btlState].init(action);

        return;
    }

    action->pendingState = btlState;
    action->pendingStateTimer = delay;
}

// FUN_00299e30
void btlAction00299e30(BtlAction* action)
{
    action->unk_18 |= (1 << 0);
}

// FUN_00299e50
void btlAction00299e50(BtlAction* action)
{
    action->unk_18 &= ~(1 << 0);
}

// FUN_00299e70
void btlActionSetUnit(BtlAction* action, BtlUnit* unit)
{
    action->unit = unit;
    action->unk_1a |= (1 << 0);
}

// FUN_00299e90
BtlAction* btlActionCreate()
{
    BtlAction* action;
    u32 id;

    action = RwMalloc(sizeof(BtlAction), rwMEMHINTDUR_GLOBAL);
    memset(action, 0, sizeof(BtlAction));

    btlTargetInit(&action->target);

    action->pendingState = BTLACTION_STATE_NON;
    action->unk_14 = 8;
    action->uid = btlGetUID();

    if (sNextId >= BTLACTION_IDMAX)
    {
        sNextId = 1;
    }

    id = sNextId;
    sNextId++;
    action->id = id;
    action->idleWeaponAnimTimer = -1;
    action->rand = datCalcRand(60);
    action->next = NULL;

    if (gBtl->actionList.tail != NULL)
    {
        gBtl->actionList.tail->next = action;
        action->prev = gBtl->actionList.tail;
    }
    else 
    {
        action->prev = NULL;
    }
    
    gBtl->actionList.tail = action;

    action->oldState = action->currState;
    action->currState = BTLACTION_STATE_NON;
    action->stateTimer = 0;

    sActionStateTable[BTLACTION_STATE_NON].init(action);

    return action;
}

// FUN_00299fb0
void btlActionUpdateAll()
{
    BtlAction* curr;
    BtlAction* prev;
    u32 canUpdateAction;
    u32 currState;
    u32 pendingState;
    const BtlActionStateEntry* stateEntry;

    curr = gBtl->actionList.tail;
    while (curr != NULL)
    {
        prev = curr->prev;
        canUpdateAction = true;

        if (curr->pendingState != BTLACTION_STATE_NON &&
            curr->pendingStateTimer > 0)
        {
            if (--curr->pendingStateTimer == 0)
            {
                currState = curr->currState;
                pendingState = curr->pendingState;
                curr->oldState = currState;
                curr->currState = pendingState;
                curr->stateTimer = 0;

                sActionStateTable[pendingState].init(curr);

                curr->pendingState = BTLACTION_STATE_NON;
            }
            else 
            {
                canUpdateAction = false;
            }
        }

        if (canUpdateAction && !(curr->unk_1a & (1 << 2)))
        {
            if (curr->unk_18 & (1 << 0))
            {
                stateEntry = &sActionStateTable[curr->currState];
                stateEntry->update(curr);

                curr->stateTimer += 2;
            }
            else if (curr->unk_1a & (1 << 1))
            {
                if (curr->prev != NULL)
                {
                    curr->prev->next = curr->next;
                }

                if (curr->next != NULL)
                {
                    curr->next->prev = curr->prev;
                }
                else 
                {
                    gBtl->actionList.tail = curr->prev;
                }

                RwFree(curr);
            }
        }

        curr = prev;
    }
}

// FUN_0029a140
void btlActionDestroyAll()
{
    BtlAction* currAction;
    BtlAction* prevAction;

    currAction = gBtl->actionList.tail;
    while (currAction != NULL)
    {   
        prevAction = currAction->prev;
        if (prevAction != NULL)
        {
            prevAction->next = currAction->next;
        }

        if (currAction->next != NULL)
        {
            currAction->next->prev = currAction->prev;
        }
        else
        {
            gBtl->actionList.tail = currAction->prev;
        }

        RwFree(currAction);

        currAction = prevAction;
    }
}

// FUN_0029a1d0
BtlAction* btlActionFindByUnit(BtlUnit* unit)
{
    BtlAction* action;

    action = gBtl->actionList.tail;
    while (action != NULL)
    {
        if (action->unit == unit)
        {
            return action;
        }

        action = action->prev;
    }

    return NULL;
}

// FUN_0029a210
BtlAction* btlActionFindById(u32 id)
{
    BtlAction* action;

    action = gBtl->actionList.tail;
    while (action != NULL)
    {
        if (action->id == id)
        {
            return action;
        }

        action = action->prev;
    }

    return NULL;
}
