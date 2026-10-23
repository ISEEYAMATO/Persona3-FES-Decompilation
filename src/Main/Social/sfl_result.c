#include "Main/Social/sfl_res.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"
#include "Main/Battle/Data/datPersona.h"
#include "Main/g_data.h"
#include "Main/Social/sfl_psel.h"

extern u8* func_00209d00(void);
extern void func_0021a670(u32, u32);
extern void func_0021a760(u16);
extern f32 func_0020c500_y2(float, void*);
extern void func_0020c400_y2(void*, float*, f32, const float*);
extern void func_004bdde0(float, float*, const float*, u32);
extern void func_001f6630(void);
extern void func_001f7210(void);
extern void func_0034ff90(u32, const u8*);
extern void func_0034ff70(u32, float);
extern void func_0034fdf0(u32, const float*);
extern void func_0034fe30(float, u32, float, float);
extern void func_0034fd30(u32);
extern void func_0034fd70(u32, u32);
extern void datSetFlag(s32, u8);
extern u32 func_001761b0(DatPersonaWork*);
extern void func_00175ce0(DatPersonaWork*, u8*);
extern void func_00176100(DatPersonaWork*, u8*);
extern void func_001fb4b0(void*, s32, s32, s32, s32*, s32*);
extern u32 func_001fba70(u16);
extern void func_00176840(DatPersonaWork*, u16);
extern void func_001768e0(DatPersonaWork*, u16);
extern u8* iGpffffb740;
extern u8* iGpffffb730;
void func_001fa0d0(void);
void func_001fa450(void);
void func_001fa4f0(u32 param_1);
u32 func_001faea0(void);
void func_001fb130(u64 param_1,u64 param_2);
void func_001fb1b0(u64 param_1,u64 param_2);
void func_001fb1f0(DatPersonaWork* persona, u16* output, s32* outputCount);
void func_001fb3f0(int param_1,int param_2,int param_3,int *param_4,int *param_5);
u16 func_001fb560(u32 param_1);
u32 func_001fba70(u16 param_1);
int func_001fbca0(u16 param_1);
u8 * func_001fbd50(u16 param_1,int param_2);
int func_001fbdf0(s32 start, s32 end, s32 amount, s32 category, s32 scaleMode);
int func_001fbfa0(int param_1,int param_2,int param_3,short param_4,int param_5,long param_6);
void func_001fc1f0(void);
u8 func_001fc230(DatPersonaWork* persona);
u32 func_001fc3c0(DatPersonaWork* persona);
u32 func_001fc590(u8* event, void* target);
u32 func_001fc720(u8* persona);
int func_001fc870(u8* event, void* target);
void func_001fc980(u8* event, u16* result, s32* count);
void func_001fcb30(u8* event, u32* result, s32* count);
void func_001fccc0(u8* src, u8* dst, u32 skill);
void func_001fce20(u8* persona, u16* skills, s32 count);
void func_001fd350(u8* persona, u32* skills, s32 count);
extern s16 FUN_001706c0(s16 pcId, s16 index);
extern u8* pbGpffffb758;
extern u16* puGpffffb74c;
extern u16* puGpffffb730;
extern u16* puGpffffb750;
extern u16* psGpffffb754;
extern char gp0xffff9700[];
extern char gp0xffff9708[];
extern char gp0xffff9710[];
extern u8* DAT_007ce420;
extern u8* DAT_007ce428;
extern u8* DAT_007ce430;
extern u8* iGpffffb738;
extern int iGpffffb75c;
extern int iGpffffb760;
#pragma alias sflResultMsgC28_abs DAT_00684c28
#pragma alias sflResultMsgC40_abs DAT_00684c40
#pragma alias sflResultMsgC60_abs DAT_00684c60
#pragma alias sflResultMsgC70_abs DAT_00684c70
#pragma alias sflResultMsgC80_abs DAT_00684c80
#pragma alias sflResultMsgC90_abs DAT_00684c90
#pragma alias sflResultMsgCA0_abs DAT_00684ca0
#pragma alias sflResultMsgCD0_abs DAT_00684cd0
#pragma alias sflResultMsgCE0_abs DAT_00684ce0
#pragma alias sflResultMsgCF8_abs DAT_00684cf8
#pragma alias sflResultMsgD08_abs DAT_00684d08
#pragma alias sflResultMsgD20_abs DAT_00684d20
#pragma alias sflResultMsgD30_abs DAT_00684d30
#pragma alias sflResultMsgD40_abs DAT_00684d40
extern const char sflResultMsgC28_abs[];
extern const char sflResultMsgC40_abs[];
extern const char sflResultMsgC60_abs[];
extern const char sflResultMsgC70_abs[];
extern const char sflResultMsgC80_abs[];
extern const char sflResultMsgC90_abs[];
extern const char sflResultMsgCA0_abs[];
extern const char sflResultMsgCD0_abs[];
extern const char sflResultMsgCE0_abs[];
extern const char sflResultMsgCF8_abs[];
extern const char sflResultMsgD08_abs[];
extern const char sflResultMsgD20_abs[];
extern const char sflResultMsgD30_abs[];
extern const char sflResultMsgD40_abs[];
#pragma alias sflResultAssertBA8_abs DAT_00684ba8
extern const char sflResultAssertBA8_abs[];
extern int iGpffffb764;
extern int iGpffffb768;
extern int iGpffffb76c;
extern int iGpffffb770;
extern int iGpffffb774;
extern int iGpffffb778;
extern u8* iGpffffb7ac;
extern u8* iGpffffb7b8;
extern f32 fGpffff8070;
extern f32 fGpffff83b0;
extern f32 fGpffff83b4;
extern u8* pcGpffffb75c;
extern u8* pcGpffffb760;
extern u8* pcGpffffb764;
extern u8* pcGpffffb768;
extern u8* pcGpffffb76c;
extern u8* pcGpffffb770;
extern u8* pcGpffffb774;
extern u8* pcGpffffb778;
extern u8 DAT_00684a10[];
extern u8 DAT_00684d70[];
#pragma alias DAT_00684d60 DAT_00684d70
extern u8 DAT_00684d60[];
#pragma alias FUN_00182c50_typed FUN_00182c50
extern void FUN_00182c50_typed(s16 skill, u8* dst);
extern void FUN_001831e0_typed(s16 slot, u32 index, u8* dst);
#pragma alias FUN_0016da50_typed FUN_0016da50
extern void FUN_0016da50_typed(s16 slot, s16 type, s16 index);
#define FUN_00182c50 FUN_00182c50_typed
#define FUN_001831e0 FUN_001831e0_typed
#define FUN_0016da50 FUN_0016da50_typed
#undef FUN_00182c50
#undef FUN_001831e0
#undef FUN_0016da50
#include "Main/Battle/Result/br_panel.h"
#include "Main/Battle/Result/br_res.h"
#include "Main/Social/sfl_script.h"
#include "h_fade.h"
#include "rw/rwcore.h"
#include "rw/rprandom.h"
#pragma alias sflResGetTutorialFileUnchecked FUN_0020ea00
extern void* sflResGetTutorialFileUnchecked();
#define BR_U32(p, o) (*(u32 *)((u8 *)(p) + (o)))
#define BR_S32(p, o) (*(s32 *)((u8 *)(p) + (o)))
#define BR_U16(p, o) (*(u16 *)((u8 *)(p) + (o)))
#define BR_S16(p, o) (*(s16 *)((u8 *)(p) + (o)))
#define BR_U8(p, o)  (*(u8 *)((u8 *)(p) + (o)))
#define BR_TASK_WORK(t) ((u8 *)((t)->workData))
#define BR_ROOT_TASK_WORK(t) BR_TASK_WORK(t)
#define BR_SET_STATE(p, s) (BR_U32((p), 0x0c) = (u32)(s))
#define BR_ALLOC2(n, f) (*(void *(**)(u32, u32))jtbl_00960178_abs)((n), (f))
#define BR_FREE(p) (*(void (**)(void *))jtbl_0096017C)((p))
static u8 *sBrRoot;       /* GP-relative -0x4a18 */
static u8 *sBrCard;       /* GP-relative -0x4a14 */
static u8 *sBrReward;     /* GP-relative -0x4a10 */
extern u32 jtbl_00960178[];
#pragma alias jtbl_00960178_abs jtbl_00960178
extern u8 jtbl_00960178_abs[];
extern u32 jtbl_0096017C[];
extern s32 printf(const char *, ...);
extern const char D_006845c0[];
extern const char D_006845d0[];
extern const char D_006845f0[];
extern void func_002350f0(void);
extern void func_00278550(void);
extern void func_00275cb0(void);
extern void func_003c77a0(void);
extern void brPersonaShutdown(void);
extern void brPersonaDestroy(void);
extern void brHero00262730(void);
extern void brHero002630e0(void);
extern void func_00234960(void);
extern void func_00233e70(void);
extern void func_00272380(void);
extern void func_00275a80(void);
extern void func_00276920(void);
extern void func_00276d30(void);
extern void func_002362e0(void);
extern void func_00262790(void);
extern void func_00275a90(void);
extern void func_0010a370(s32, const char *);
extern void func_00171390(u32);
extern void func_00174e20(u16);
extern u32 dat00171360(u16);
extern s32 func_0016d280(s32);
extern u32 func_0016f380(u32);
extern void func_0016f3e0(u32, u32);
extern u32 func_00173220(u16);
extern u32 func_00174b40(u16);
extern u32 func_001756f0(void);
extern u32 func_00175410(void);
extern u32 func_00175ce0_y2(DatPersonaWork *, u16 *);
extern u32 func_001761b0_y2(DatPersonaWork *);
extern u32 func_00176100_y2(DatPersonaWork *, u16 *);
extern u32 func_001fbdf0_y2(u32, u32, u32, u32, u32);
extern u32 func_001fbfa0_y2(u32, u32, u32, u32, u32, u32);
extern u32 func_001f9e90(u16, u32);
extern void func_001fb4b0_y2(void *, s32, s32, s32, s32 *, s32 *);
extern u8 *DAT_007ce430_y2;
extern u32 func_001f9680(s32 *);
extern void func_001f9c60(void);
extern u32 func_001f9a80(void);
extern void func_001f98d0(void);
extern void sflResult001f9770_y2(u16 *, s32 *);
extern void sflResult001f9800_y2(u16 *, s32 *);
extern u32 sflResult001f9890_y2(void);
extern void sflResult001f9630_y2(void);
extern void *func_001ef500(void *);
extern void func_00219c90(void *);
extern void func_00239170(void *);
extern void func_0023d7a0(void *);
extern void func_0023d7f0(void);
extern void func_0024da00(void *);
extern void sflCamera0024d110(void *);
extern void func_002534d0(void *);
extern void sflScript00259610(void *);
extern void sflCursor0025a110(void *);
extern void func_00260970(void *);
extern void sflCount0025b4a0(void *);
extern void sflPersonaInit(void *);
extern u32 sflGround0023c350(void);
extern void func_00219d90(void);
extern void func_00215fc0(void);
extern u32 func_00254f20(void);
extern u32 func_00254f70(void);
extern void func_003c72d0(void *);
extern void func_0023d130(void);
extern void func_0023ee50(void);
extern void sflCard00259250(void);
extern u32 sflGround0023d1f0(void);
extern u32 sflCard002592c0(void);
extern u32 sflCard002582b0(void);
extern void sflScript00259640(void);
extern u32 func_00259740(void);
extern u32 sflScript002596f0(void);
extern u32 sflCard00258af0(void);
extern u32 sflCount0025b640(void);
extern void sflCount0025b5f0(void);
extern void sflCursor0025aa70(void);
extern void sflCard00258490(void);
extern u8 *func_00256030(void);
extern void sflCard00258090(void);
extern void sflCard002580e0(void);
extern void func_0023f1d0(void);
extern void func_0023cda0(void);
extern void func_003c74e0(void);
extern u32 sflPanel0023f390(void);
extern u32 sflGround0023d0e0(void);
extern void func_00255fe0(void);
extern void func_002550b0(void);
extern void func_00258300(void);
extern u32 func_003c7610(void);
extern void func_003c7990(s32);
extern u32 func_003c7850(void);
extern u32 func_003c7650(s32);
extern u32 func_003c78d0(void);
extern void func_002594c0(void);
extern u32 sflCard002595c0(void);
extern void func_003c94e0(void *);
extern void func_003c9790(s32);
extern void func_0025b690(void);
extern void func_0025a130(void);
extern void func_0023d8f0(void);
extern void func_0024db90(void);
extern void func_0024dc10(void);
extern void sflCamera0024d1c0(void);
extern void func_00253a40(void);
extern void func_002392d0(void);
extern void sflPersonaUpdate(void);
extern void func_0023b990(void);
extern void func_00254b90(void);
extern void func_0025bbf0(void);
extern void func_0025a440(void);
extern void func_001f64c0(void);
extern void func_002168f0(void);
extern void func_0023e970(void);
extern void sflPersonaShutdown(void *);
extern void sflCount0025b4b0(void);
extern void func_00215aa0(void);
extern void sflPsel00260a10(void);
extern void func_0025a120(void);
extern void func_00259630(void);
extern void sflCard00253560(void);
extern void sflCamera0024d160(void);
extern void func_0024da20(void);
extern void sflPanel0023d870(void);
extern void func_0023d7b0(void);
extern void sflGround00239280(void);
extern void func_0021a1b0(void);
extern void func_004c9d70(void *, float);
extern void func_0021a840(void);
extern void func_0024fd10(void *);
extern void func_0024f9f0(void *, const float *);
extern void func_0024da60(void *);
extern void func_0024f090(void *);
extern void func_0024d8d0(void *);
extern void sflCamera0024d2e0(s32, void *);
extern void sflCamera0024d940(void *, void *);
extern void sflCamera0024d9a0(void *, void *);
extern void sflCamera0024d280(void *);
extern void func_0024d4c0(s32);
extern void func_0023c280(void);
extern u8 *func_00209e10(void);
extern u8 *func_00209e20(void);
extern u8 *func_00209e60(void);
extern u8 *func_00209e70(void);
extern u8 *func_00209dc0(void);
extern u8 *func_00209dd0(void);
extern u8 *func_00209d00_y2(void);
extern u8 *func_00209c40(void);
extern u8 *func_00209c80(void);
extern u8 *func_00209cc0(void);
extern u8 *func_00209d40(u8 *);
extern char *func_00209e80(void);
extern char *func_00209e90(void);
extern u32 func_00255130(void);
extern void func_00254e10(void);
extern void *sflCard002537f0(u16);
extern u32 sflCard002536b0(u32, u32);
extern void sflCard00255170(void *);
extern void sflCard00255190(void *);
extern void func_002551b0(void *);
extern void sflCard00253920(void);
extern void sflScript00259690(void *, u32);
extern void sflScript00259b00(u16);
extern void sflScript00259b60(u16);
extern void sflScript00259c10(void);
extern void sflScript00259bc0(void);
extern void sflScript00259c60(u16);
extern void sflScript00259cc0(void);
extern void sflScriptQueueEndCommand(void);
extern void sflScriptQueueWaitCommand(u16 frames);
extern void sflScriptQueueOpenCommand(u16 card);
extern void sflScriptQueueWaitForActionsCommand(void);
extern void sflScriptQueueStartActionsCommand(void);
extern void sflScriptQueueSetCardValueCommand(u16 value);
extern void sflScriptQueueShuffleCommand(void);
extern void func_002595c0(void);
extern void func_002508c0(void *, const float *, s32);
extern void func_0020b250(void *);
extern void func_00209f00(void *);
extern void func_0020c590(void *, u16);
extern void func_0020a800(void *);
extern void func_0020c5f0(void *, u32, u32);
extern void func_0024fd80(void *);
extern f32 func_0020c500(void *, f32);
extern void func_0020c400(void *, const float *, float, float *);
extern void func_0020cc80(void *, const u8 *);
extern void gcPose0024f960(void *, const float *);
extern void sflResSetSpriteScale(void *, const f32 *);
extern void sflResSetSpriteRotation(void *, const f32 *);
extern void func_004bdde0_y2(f32, f32 *, const f32 *, u32);
extern void func_0020ac90(void *);
extern void *sflResGetBaseSpriteData(void);
extern u32 func_0035c250(u32);
extern u32 sflResult001f99f0(void);
extern u32 func_001831e0(s16, s16, const void *);
extern u32 scrForceTraceCode(void *);
extern void K_Fldrc_DestroyArchives(void);
extern void func_00217590(u16);
extern void func_00215b00(void);
extern void scrReleaseScript(void *);
extern void *scrStartScriptFirstPrcd(void *header);
extern void func_0021ab80(u16 id);
extern void func_0021a920(u32 majorId, u32 minorId);
extern char D_00684850[];
extern char D_00684620[];
extern char D_006846CE[];
extern char D_006846DE[];
extern char D_00684718[];
extern char D_00684730[];
extern char D_00684750[];
extern char D_00684770[];
extern char D_00684788[];
extern char D_006847A0[];
extern char D_006847D0[];
extern char D_006847E0[];
extern char D_006847F0[];
extern char D_00684800[];
extern char D_00684810[];
extern char D_00684820[];
extern char D_00684830[];
extern char D_00684840[];
extern char D_00696950[];
extern char D_00696948[];
extern char D_00696964[];
extern char D_00696960[];
extern char D_00696958[];
extern u32 func_00255130(void);
extern void func_00257f10(void);
extern void func_002599c0(u32, u32);
extern void func_00259a60(u32, s32);
extern void sflScript00259970(void);
extern f32 func_00530da0(f32);
extern u32 datGetScenarioMode(void);
extern void sflResRequestBaseArchive(void);
extern u32 func_001f9170(s32);
extern void func_00173660(DatPersonaWork *, s32);
extern u32 func_0021a120(void);
extern void func_00258300(void);
extern void func_002550b0(void);
extern void *func_0034fcd0(void *);
extern u16 datGetMaxHp_y2(s16);
extern void *sflResGetBaseDataFile(s32);
extern u16 func_00170760(s16, s16);
extern void func_00170860(s16, s16, u16);
extern void datSetMoney(u32);
extern void func_001828d0(s16, void *, void *);
#pragma alias func_001828d0_2arg func_001828d0
extern void func_001828d0_2arg(s16, void *);
extern void func_00182d90(s16, s16, u32, void *);
extern void func_00521250(void *, const void *, u32);
extern u32 func_003c7bc0(s32, u32);
extern u32 func_003c7c20(s32, u32, u32);
extern void func_003c7430(s32);
extern void func_0010a4e0(s32, s32, s32, s32);
extern const char *h_camp_getAcademicLevelString(s16);
extern const char *h_camp_getCharmLevelString(s16);
extern const char *h_camp_getCourageLevelString(s16);
extern void func_0021eac0(void *, float);
extern void func_0023f010(void);
extern void func_0023ca10(void);
extern void *kwlnGetMainCamera(void);
extern void func_00255f80(void);
extern void func_0025a7d0(void);
extern void func_0025b4f0(void);
extern void sflPanel0023f3e0(void);
extern void sflCard00259310(void);
extern u32 sflCard002561c0(void *);
extern u32 sflCard002561d0(void *);
extern u32 sflCard00259380(void);
extern void sflResult001f9100(void);
extern void sflResSetSpritePosition(void *, const float *);
extern void func_0034fcf0(void *);
extern u32 D_00684610[];
extern u32 func_001775a0(u32, ...);
extern u32 func_0016c6f0(u32);
extern u32 func_00177280(u32);
extern u32 func_0011a810(u32);
extern u32 func_0016c740(u32);
extern u32 func_001772f0(u32);
extern u32 func_0011a840(u32);
extern u32 func_0016c790(u32);
extern u32 func_00177360(u32);
extern u32 func_0011a870(u32);
extern u32 func_0016c4f0(u32);
extern u32 func_0016c5f0(u32);
extern u32 func_0016c570(u32);
extern u32 func_0016c970(u32);
extern u32 func_0016c920(u32);
extern void func_0016cf40(u32, u32);
extern void func_0016cf90(u32, u32);
extern void func_0016d8b0(u32, u32);
extern void func_0016d6b0(u32, u32);
extern u32 func_00488f30(void);
extern void sflResRequestTutorialArchive(void);
extern u32 func_0016f190(u32);
extern void func_0023f430(void);
extern u32 func_002561c0(void *);
extern u32 func_002561d0(void *);
extern void func_005225a8(const char *, s32, s32);
extern void func_00174800(u32);
extern void func_00174650(u32, u32, u32);
extern void func_0016cfe0(u32, u32);
extern void func_0016d090(u32, u32);
extern void func_0016d160(u32, u32);
void func_001f0990(KwlnTask *);
void func_001f0f40(KwlnTask *);
void func_001f0ff0(void);
u8 *brRoot001f1c50(void);
void func_001f1140(KwlnTask *);
void func_001f13b0(KwlnTask *);
void brRoot001f1e90(KwlnTask *);
void func_001f30d0(KwlnTask *);
void func_001f30f0(KwlnTask *);
void func_001f3270(KwlnTask *);
void func_001f4650(KwlnTask *, const u8 *);
void func_001f4750(KwlnTask *);
u32 func_001f4990(void);
void func_001f4a00(void);
void func_001f53a0(void);
void func_001f54a0(void);
void func_001f5510(void);
void func_001f55e0(void);
void func_001f5650(void);
void func_001f56b0(void);
u32 func_001f5760(u16);
u32 func_001f5810(KwlnTask *);
void func_001f58f0(u8 *);
void func_001f5950(void);
void func_001f59b0(void);
void *func_001f5b20(void);
void func_001f64c0(void);
u32 func_001f65e0(void);
void brRewardAdvanceState(void);
void brRewardAnimateCurrentEntry(void);
void brRewardRegisterEntry(const f32 *);
void func_001f7030(void);
void func_001f70d0(void);
void func_001f7170(void);
#pragma alias func_001f2300_update func_001f2300
extern void *func_001f2300_update(KwlnTask *);
#pragma alias func_001f2fd0_destroy func_001f2fd0
extern void func_001f2fd0_destroy(KwlnTask *);
void *func_001f2f50(KwlnTask *);
void *func_001f2f80(KwlnTask *);
void func_001f2fd0(KwlnTask *);
void func_001f2ff0(KwlnTask *);
u32 func_001f30b0(KwlnTask *);
void *func_001f2300(KwlnTask *);
typedef struct BrRootSetupParams {
    u32 flags;
    struct {
        u16 id;
        u16 pad;
        u32 value;
    } entries[3];
    u32 entryCount;
    u32 field20;
    u16 partyIds[4];
    u32 partyCount;
    u32 field30;
    u32 field34;
    u32 field38;
    u32 field3c;
    u32 field40;
} BrRootSetupParams;
#pragma alias brRewardAdvanceState func_001f6a60
#pragma alias brRewardRegisterEntry func_001f6d20
#pragma alias brRewardAnimateCurrentEntry func_001f6e80


#pragma alias func_0020c500_y2 func_0020c500
#pragma alias func_0020c400_y2 func_0020c400
#pragma alias sflResSetSpriteScale_y2 sflResSetSpriteScale
#pragma alias sflResSetSpriteRotation_y2 sflResSetSpriteRotation
#pragma alias sflResult001f99f0_y2 sflResult001f99f0
#pragma alias sflResult001f9100_y2 sflResult001f9100
#pragma alias sflResSetSpritePosition_y2 sflResSetSpritePosition
#pragma alias func_00175ce0_y2 func_00175ce0_y2
#pragma alias func_001761b0_y2 func_001761b0_y2
#pragma alias func_00176100_y2 func_00176100_y2
#pragma alias func_001fbdf0_y2 func_001fbdf0_y2
#pragma alias func_001fbfa0_y2 func_001fbfa0_y2
#pragma alias func_001fb4b0_y2 func_001fb4b0_y2
#pragma alias DAT_007ce430_y2 DAT_007ce430_y2
#pragma alias sflResult001f9770_y2 sflResult001f9770_y2
#pragma alias sflResult001f9800_y2 sflResult001f9800_y2
#pragma alias sflResult001f9890_y2 sflResult001f9890_y2
#pragma alias sflResult001f9630_y2 sflResult001f9630_y2
#pragma alias func_00209d00_y2 func_00209d00_y2
#pragma alias func_004bdde0_y2 func_004bdde0_y2
#pragma alias datGetMaxHp_y2 datGetMaxHp_y2


static u32* sSflResult; // iGpffffb5f0 / puGpffffb5f0

extern void brRoot001f1df0(u16* members, s32* count);
extern u16 datGetHp(s16 pcId);
extern u16 datGetMaxHp(s16 pcId);
extern u16 datGetSp(s16 pcId);
extern u16 func_0016c670(s16 pcId);
extern void FUN_001f6e80(void);

// FUN_001f58f0
void func_001f58f0(u8 *work)
{
    K_ASSERT(sBrReward == NULL, 0x92);
    BR_U32(work, 0) = 0;
    BR_U32(work, 0x3418) = 0;
    BR_U32(work, 0x341c) = 0;
    BR_U32(work, 0x33dc) = 0;
    sBrReward = work;
}

// FUN_001f5950
void func_001f5950(void)
{
    u8 *work;

    K_ASSERT(sBrReward != NULL, 0x8c);
    work = sBrReward;
    func_001f98d0();
    scrReleaseScript((void *)BR_U32(work, 0x34c4));
    sBrReward = NULL;
}

// FUN_001f59b0
void func_001f59b0(void)
{
    u8 *work;
    u32 *words;
    s32 i;
    u8 *entry;
    u32 type;

    K_ASSERT(sBrReward != NULL, 0x8c);
    work = sBrReward;
    words = (u32 *)work;
    BR_U32(work, 0) |= 1;
    BR_U32(work, 0) |= 2;
    BR_U32(work, 0x10) = 0;
    BR_U32(work, 0x18) = 100;
    BR_U32(work, 0x34c0) = 0;
    BR_U32(work, 0x34c4) = (u32)scrStartScriptFirstPrcd(D_00684850);
    if ((s32)BR_S32(work, 0x341c) + (s32)BR_S32(work, 0x3418) < 2) {
        words[2] = 0;
    } else {
        words[2] = 1;
    }
    if (words[2] == 0) {
        goto reward_state_zero;
    }
    switch (words[2]) {
    case 1:
        goto reward_loop_init;
    default:
        goto reward_done;
    }

reward_loop_init:
    i = 0;
    goto reward_loop_test;

reward_loop:
    entry = work + i * 0x670 + 0x5c;
    type = BR_U32(entry, 0);
    if (type == 1) {
        goto reward_type_one;
    }
    switch (type) {
    case 0:
        goto reward_type_zero;
    default:
        goto reward_loop_increment;
    }

reward_type_zero:
    func_0021ab80(BR_U16(entry, 4));
    goto reward_loop_increment;

reward_type_one:
    func_0021a920(BR_U32(entry, 4), BR_U32(entry, 8));

reward_loop_increment:
    i++;

reward_loop_test:
    if (i < BR_S32(work, 0x33dc)) {
        goto reward_loop;
    }
    sflCard00259310();
    BR_U32(work, 0) |= 0x80;
    BR_U32(work, 4) = 0;
    goto reward_done;

reward_state_zero:
    func_001f6630();

reward_done:
    ;
}

// FUN_001f5b20
asm void *func_001f5b20(void)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f83b5f0
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844a28
  .word 0x2405008c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b5f0
  .word 0x8e240000
  .word 0x30830002
  .word 0x10600006
  .word 0x00000000
  .word 0x2403fffd
  .word 0x00831824
  .word 0xae230000
  .word 0x1000024b
  .word 0x00000000
  .word 0x00801827
  .word 0x30630001
  .word 0x14600247
  .word 0x00000000
  .word 0x30830100
  .word 0x10600040
  .word 0x00000000
  .word 0x8e2434c8
  .word 0x24030001
  .word 0x10830020
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000038
  .word 0x00000000
  .word 0x8e2334d0
  .word 0x24630001
  .word 0xae2334d0
  .word 0xc62034d0
  .word 0x46800060
  .word 0x3c0341f0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c034380
  .word 0x44830000
  .word 0x00000000
  .word 0x46010002
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0xae2334cc
  .word 0x8e2434d0
  .word 0x2403001e
  .word 0x14830023
  .word 0x00000000
  .word 0x8e240000
  .word 0x2403feff
  .word 0x00831824
  .word 0xae230000
  .word 0x1000001d
  .word 0x00000000
  .word 0x8e2334d0
  .word 0x24630001
  .word 0xae2334d0
  .word 0xc62034d0
  .word 0x46800060
  .word 0x3c0341f0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c034380
  .word 0x44830800
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46020001
  .word 0x46000802
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0xae2334cc
  .word 0x8e2434d0
  .word 0x2403001e
  .word 0x14830005
  .word 0x00000000
  .word 0x8e240000
  .word 0x2403feff
  .word 0x00831824
  .word 0xae230000
  .word 0x8e230000
  .word 0x30630200
  .word 0x10600040
  .word 0x00000000
  .word 0x8e2434d4
  .word 0x24030001
  .word 0x10830020
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000038
  .word 0x00000000
  .word 0x8e2334dc
  .word 0x24630001
  .word 0xae2334dc
  .word 0xc62034dc
  .word 0x46800060
  .word 0x3c0341f0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c034380
  .word 0x44830000
  .word 0x00000000
  .word 0x46010002
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0xae2334d8
  .word 0x8e2434dc
  .word 0x2403001e
  .word 0x14830023
  .word 0x00000000
  .word 0x8e240000
  .word 0x2403fdff
  .word 0x00831824
  .word 0xae230000
  .word 0x1000001d
  .word 0x00000000
  .word 0x8e2334dc
  .word 0x24630001
  .word 0xae2334dc
  .word 0xc62034dc
  .word 0x46800060
  .word 0x3c0341f0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c034380
  .word 0x44830800
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46020001
  .word 0x46000802
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0xae2334d8
  .word 0x8e2434dc
  .word 0x2403001e
  .word 0x14830005
  .word 0x00000000
  .word 0x8e240000
  .word 0x2403fdff
  .word 0x00831824
  .word 0xae230000
  .word 0x8e230004
  .word 0x2c610009
  .word 0x10200135
  .word 0x00000000
  .word 0x3c04007b
  .word 0x24846ec0
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x0c086848
  .word 0x00000000
  .word 0x1440012a
  .word 0x00000000
  .word 0x0c0964e0
  .word 0x00000000
  .word 0x14400126
  .word 0x00000000
  .word 0x0c0960c0
  .word 0x00000000
  .word 0x0c09542c
  .word 0x00000000
  .word 0x0c07d98c
  .word 0x00000000
  .word 0x1000011e
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420040
  .word 0x1040000d
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0f1e64
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400113
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1e64
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400107
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x8e22340c
  .word 0x24430001
  .word 0xae23340c
  .word 0x8e22341c
  .word 0x14620005
  .word 0x00000000
  .word 0x0c07da98
  .word 0x00000000
  .word 0x100000fa
  .word 0x00000000
  .word 0x0c07dba0
  .word 0x00000000
  .word 0x100000f6
  .word 0x00000000
  .word 0x0c06c1f4
  .word 0x00000000
  .word 0x104000f2
  .word 0x00000000
  .word 0x0c06c210
  .word 0x00000000
  .word 0x0c07dc5c
  .word 0x00000000
  .word 0x100000ec
  .word 0x00000000
  .word 0x0c085a28
  .word 0x00000000
  .word 0x144000e8
  .word 0x00000000
  .word 0x0c07e440
  .word 0x00000000
  .word 0x0c07da98
  .word 0x00000000
  .word 0x100000e2
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1e64
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x144000db
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x8e223410
  .word 0x24430001
  .word 0xae233410
  .word 0x8e223400
  .word 0x14620005
  .word 0x00000000
  .word 0x0c07da98
  .word 0x00000000
  .word 0x100000ce
  .word 0x00000000
  .word 0x0c07dc0c
  .word 0x00000000
  .word 0x100000ca
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1e64
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x144000c3
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x8e223414
  .word 0x24430001
  .word 0xae233414
  .word 0x8e223404
  .word 0x14620005
  .word 0x00000000
  .word 0x0c07da98
  .word 0x00000000
  .word 0x100000b6
  .word 0x00000000
  .word 0x0c07dc34
  .word 0x00000000
  .word 0x100000b2
  .word 0x00000000
  .word 0x8e2534e4
  .word 0x24030002
  .word 0x10a30075
  .word 0x00000000
  .word 0x24040001
  .word 0x10a4003b
  .word 0x00000000
  .word 0x10a00003
  .word 0x00000000
  .word 0x100000a7
  .word 0x00000000
  .word 0x8e230000
  .word 0x30620040
  .word 0x10400007
  .word 0x00000000
  .word 0x30620010
  .word 0x10400004
  .word 0x00000000
  .word 0x0080802d
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x0200202d
  .word 0x0c0f1e64
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x8e230000
  .word 0x30630800
  .word 0x10600091
  .word 0x00000000
  .word 0x0c07e718
  .word 0x00000000
  .word 0x1000008d
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420800
  .word 0x10400008
  .word 0x00000000
  .word 0x8e2434e0
  .word 0x0c0d3f3c
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402f7ff
  .word 0x00621024
  .word 0xae220000
  .word 0x8e223408
  .word 0x24430001
  .word 0xae233408
  .word 0x8e223418
  .word 0x14620005
  .word 0x00000000
  .word 0x0c07da98
  .word 0x00000000
  .word 0x10000075
  .word 0x00000000
  .word 0x0c07dc84
  .word 0x00000000
  .word 0x10000071
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f1e64
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x1440006a
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x8e223510
  .word 0x24430001
  .word 0xae233510
  .word 0x8e223514
  .word 0x0062082a
  .word 0x10200019
  .word 0x00000000
  .word 0x000310c0
  .word 0x00511021
  .word 0x8c4234e8
  .word 0x00021880
  .word 0x3c020068
  .word 0x24424a10
  .word 0x00431021
  .word 0x0000202d
  .word 0x8c450000
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x8e223510
  .word 0x000210c0
  .word 0x00511021
  .word 0x24040001
  .word 0x8c4534ec
  .word 0x0000302d
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x24040017
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000048
  .word 0x00000000
  .word 0x8e223408
  .word 0x24430001
  .word 0xae233408
  .word 0x8e223418
  .word 0x14620005
  .word 0x00000000
  .word 0x0c07da98
  .word 0x00000000
  .word 0x1000003e
  .word 0x00000000
  .word 0x0c07dc84
  .word 0x00000000
  .word 0x1000003a
  .word 0x00000000
  .word 0x8e230000
  .word 0x30620040
  .word 0x10400007
  .word 0x00000000
  .word 0x30620010
  .word 0x10400004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x0200202d
  .word 0x0c0f1e64
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400028
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x8e223408
  .word 0x24430001
  .word 0xae233408
  .word 0x8e223418
  .word 0x14620005
  .word 0x00000000
  .word 0x0c07da98
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x0c07dc84
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x8e2434c4
  .word 0x0c0d7094
  .word 0x00000000
  .word 0x24030002
  .word 0x1043000f
  .word 0x00000000
  .word 0x24030001
  .word 0x1043000e
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844a28
  .word 0x240501da
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0c07da98
  .word 0x00000000
  .word 0x8e240008
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x10000084
  .word 0x00000000
  .word 0x8e230000
  .word 0x00601827
  .word 0x30630400
  .word 0x1460007f
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000039
  .word 0x00000000
  .word 0x00121080
  .word 0x02221021
  .word 0x8c43003c
  .word 0x24020670
  .word 0x00621018
  .word 0x02221021
  .word 0x2450005c
  .word 0x240200ff
  .word 0xa3a2004c
  .word 0xa3a2004d
  .word 0xa3a2004e
  .word 0xc62034cc
  .word 0x46800060
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x3c024380
  .word 0x44820000
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
  .word 0xa3a3004f
  .word 0x2604000c
  .word 0x27a5004c
  .word 0x0c083320
  .word 0x00000000
  .word 0x2604060c
  .word 0x27a50040
  .word 0x0c093e58
  .word 0x00000000
  .word 0x2604000c
  .word 0x27a50040
  .word 0x0c083594
  .word 0x00000000
  .word 0x2604000c
  .word 0x0c082b24
  .word 0x00000000
  .word 0x26520001
  .word 0x8e23341c
  .word 0x0243182a
  .word 0x1460ffc5
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000039
  .word 0x00000000
  .word 0x00121080
  .word 0x02221021
  .word 0x8c43001c
  .word 0x24020670
  .word 0x00621018
  .word 0x02221021
  .word 0x2450005c
  .word 0x240200ff
  .word 0xa3a2004c
  .word 0xa3a2004d
  .word 0xa3a2004e
  .word 0xc62034d8
  .word 0x46800060
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x3c024380
  .word 0x44820000
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
  .word 0xa3a3004f
  .word 0x2604000c
  .word 0x27a5004c
  .word 0x0c083320
  .word 0x00000000
  .word 0x2604060c
  .word 0x27a50040
  .word 0x0c093e58
  .word 0x00000000
  .word 0x2604000c
  .word 0x27a50040
  .word 0x0c083594
  .word 0x00000000
  .word 0x2604000c
  .word 0x0c082b24
  .word 0x00000000
  .word 0x26520001
  .word 0x8e233418
  .word 0x0243182a
  .word 0x1460ffc5
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}

// FUN_001f64c0
void func_001f64c0(void)
{
    u8 *work;
    s32 flags;
    s32 i;

    K_ASSERT(sBrReward != NULL, 0x8c);
    work = sBrReward;
    flags = ~BR_U32(work, 0);
    if ((flags & 1) == 0) {
        switch (BR_U32(work, 8)) {
        case 1:
            if ((flags & 0x400) == 0) {
                for (i = 0; i < (s32)BR_U32(work, 0x341c); i++) {
                    u32 idx = BR_U32(work + i * 4, 0x3c);
                    u32 address = idx * 0x670;
                    address = (u32)(work + address);
                    address += 0x5c;
                    func_0020b250((u8 *)address + 0xc);
                }
                for (i = 0; i < (s32)BR_U32(work, 0x3418); i++) {
                    u32 idx = BR_U32(work + i * 4, 0x1c);
                    u32 address = idx * 0x670;
                    address = (u32)(work + address);
                    address += 0x5c;
                    func_0020b250((u8 *)address + 0xc);
                }
            }
            break;
        }
    }
}

// FUN_001f65e0
u32 func_001f65e0(void)
{
    K_ASSERT(sBrReward != NULL, 0x8c);
    return BR_U32(sBrReward, 0) & 1;
}






/* SocialA W417 negative: swapping work/i declarations in func_001f6630 was byte-identical (nd 586, object 1060/1072); retained source order. */
/* W389 measured sflResult001f9170 opt_lifetimes on: nd 471 -> 465; object 1212/1216 -> 1212/1216. */
// FUN_001f6630
#ifndef PC_BUILD
asm void func_001f6630(void)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82b5f0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844a28
  .word 0x2405008c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b5f0
  .word 0xae20340c
  .word 0xae203408
  .word 0xae203410
  .word 0xae203414
  .word 0xae203404
  .word 0xae203400
  .word 0x8e22341c
  .word 0x1040002f
  .word 0x00000000
  .word 0x8e220000
  .word 0x34420008
  .word 0xae220000
  .word 0x0c05d5bc
  .word 0x00000000
  .word 0x3050ffff
  .word 0x0c05d504
  .word 0x00000000
  .word 0x3044ffff
  .word 0x8e23341c
  .word 0x02031021
  .word 0x0082082a
  .word 0x10200006
  .word 0x00000000
  .word 0x8e220000
  .word 0x34420010
  .word 0xae220000
  .word 0x1000001c
  .word 0x00000000
  .word 0x28610009
  .word 0x14200006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844a28
  .word 0x24050272
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000282d
  .word 0x24040670
  .word 0x1000000b
  .word 0x00000000
  .word 0x00051080
  .word 0x02221021
  .word 0x8c42003c
  .word 0x00441018
  .word 0x02221021
  .word 0x94430060
  .word 0x00051040
  .word 0x02221021
  .word 0xa44333f0
  .word 0x24a50001
  .word 0x8e23341c
  .word 0x00a3102a
  .word 0x1440fff3
  .word 0x00000000
  .word 0xae233404
  .word 0x8e223418
  .word 0x10400004
  .word 0x00000000
  .word 0x8e220000
  .word 0x34420020
  .word 0xae220000
  .word 0x8e230008
  .word 0x106000b1
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x100000ac
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000003f
  .word 0x00000000
  .word 0x24020670
  .word 0x02421018
  .word 0x02221021
  .word 0x2450005c
  .word 0x8c43005c
  .word 0x24020001
  .word 0x1062000e
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x2604000c
  .word 0x0c0827c0
  .word 0x00000000
  .word 0x2604000c
  .word 0x96050004
  .word 0x0c083164
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x2604000c
  .word 0x0c082a00
  .word 0x00000000
  .word 0x2604000c
  .word 0x8e050004
  .word 0x8e060008
  .word 0x0c08317c
  .word 0x00000000
  .word 0x3c024120
  .word 0xafa20068
  .word 0xafa2006c
  .word 0xafa20070
  .word 0x2604000c
  .word 0x27a50068
  .word 0x0c08358c
  .word 0x00000000
  .word 0xafa00058
  .word 0x3c023f80
  .word 0xafa2005c
  .word 0xafa00060
  .word 0x3c024334
  .word 0x44826000
  .word 0x27a40040
  .word 0x27a50058
  .word 0x0000302d
  .word 0x0c12f778
  .word 0x00000000
  .word 0x2604000c
  .word 0x27a50040
  .word 0x0c0835a4
  .word 0x00000000
  .word 0x2604060c
  .word 0x0c093f60
  .word 0x00000000
  .word 0x2604060c
  .word 0x0c093698
  .word 0x00000000
  .word 0x2604060c
  .word 0x0c093c24
  .word 0x00000000
  .word 0x26520001
  .word 0x8e2233dc
  .word 0x0242102a
  .word 0x1440ffbf
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000002c
  .word 0x00000000
  .word 0x00121080
  .word 0x02221021
  .word 0x8c43003c
  .word 0x24020670
  .word 0x00621018
  .word 0x02221021
  .word 0x2450005c
  .word 0x3c02435c
  .word 0x44821800
  .word 0x44920000
  .word 0x00000000
  .word 0x468000a0
  .word 0x3c0243a0
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181c
  .word 0xe7a00088
  .word 0x3c024338
  .word 0xafa2008c
  .word 0x3c024348
  .word 0x44826000
  .word 0x2604000c
  .word 0x0c083140
  .word 0x00000000
  .word 0x2604000c
  .word 0x27a50088
  .word 0x46000306
  .word 0x27a60078
  .word 0x0c083100
  .word 0x00000000
  .word 0xc7a1007c
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a0007c
  .word 0x2604060c
  .word 0x27a50078
  .word 0x0c093e7c
  .word 0x00000000
  .word 0x26520001
  .word 0x8e22341c
  .word 0x0242102a
  .word 0x1440ffd2
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000002c
  .word 0x00000000
  .word 0x00121080
  .word 0x02221021
  .word 0x8c43001c
  .word 0x24020670
  .word 0x00621018
  .word 0x02221021
  .word 0x2450005c
  .word 0x3c02435c
  .word 0x44821800
  .word 0x44920000
  .word 0x00000000
  .word 0x468000a0
  .word 0x3c0243a0
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181c
  .word 0xe7a00088
  .word 0x3c024338
  .word 0xafa2008c
  .word 0x3c024348
  .word 0x44826000
  .word 0x2604000c
  .word 0x0c083140
  .word 0x00000000
  .word 0x2604000c
  .word 0x27a50088
  .word 0x46000306
  .word 0x27a60078
  .word 0x0c083100
  .word 0x00000000
  .word 0xc7a1007c
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a0007c
  .word 0x2604060c
  .word 0x27a50078
  .word 0x0c093e7c
  .word 0x00000000
  .word 0x26520001
  .word 0x8e223418
  .word 0x0242102a
  .word 0x1440ffd2
  .word 0x00000000
  .word 0xae2034cc
  .word 0xae2034d8
  .word 0x8e220000
  .word 0x34420400
  .word 0xae220000
  .word 0x24020001
  .word 0xae220004
  .word 0x0c07da98
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* Removing this loses FUN_001f9680 (MATCH nd0 -> MISMATCH nd57) - measured W161. */
// FUN_001f6a60
void brRewardAdvanceState(void)
{
    u8 *work;
    s32 i;
    u32 state;
    u32 result;
    K_ASSERT(sBrReward != NULL, 0x8c);
    work = sBrReward;
    state = BR_U32(work, 4);
    for (;;) {
        switch (state) {
        case 1:
            if ((BR_U32(work, 0) & 8) != 0) {
                sflResult001f99f0();
                return;
            }
            state = 2;
            break;
        case 2:
            if ((BR_U32(work, 0) & 0x10) != 0) {
                BR_U32(work, 4) = 3;
                return;
            }
            state = 4;
            break;
        case 4:
            if ((BR_U32(work, 0) & 0x10) != 0 &&
                BR_U32(work, 0x3400) != 0) {
                func_001f7030();
                return;
            }
            state = 5;
            break;
        case 5:
            if ((BR_U32(work, 0) & 0x10) != 0 &&
                BR_U32(work, 0x3404) != 0) {
                func_001f70d0();
                return;
            }
            state = 6;
            break;
        case 6:
            if ((BR_U32(work, 0) & 0x20) != 0) {
                func_001f9a80();
                return;
            }
            state = 7;
            break;
        case 7:
            func_003c77a0();
            for (i = 0; i < (s32)BR_U32(work, 0x34c0); i++) {
                func_001831e0(-1, (s16)i,
                              work + (u32)i * 20 + 0x3420);
            }
            result = func_0035c250(BR_U32(work, 0x34c4));
            switch (result) {
            case 0:
                K_ASSERT(0, 0x32d);
                goto result_default;
            case 1:
                BR_U32(work, 4) = 8;
                return;
            case 2:
                state = 8;
                break;
            default:
            result_default:
                K_ASSERT(0, 0x337);
                goto state_default;
            }
            break;
        case 8:
            func_003c72d0(sflResGetBaseSpriteData());
            K_ASSERT(sBrReward != NULL, 0x8c);
            work = sBrReward;
            BR_U32(work, 0) &= ~1u;
            BR_U32(work, 4) = 9;
            return;
        default:
        state_default:
            K_ASSERT(0, 0x341);
            break;
        }
    }
}

// FUN_001f6d20
void brRewardRegisterEntry(const f32 *entry)
{
    u8 *work;
    u32 *words;
    u8 *dst;
    RwV3d value;

    K_ASSERT(sBrReward != NULL, 0x8c);
    work = sBrReward;
    words = (u32 *)work;
    K_ASSERT((s32)words[0xcf7] >= 0 &&
             (s32)words[0xcf7] < 8,
             0x34d);
    dst = work + words[0xcf7] * 0x670;
    value = *(const RwV3d *)entry;
    *(RwV3d *)(dst + 0x5c) = value;

    switch (*(const u32 *)entry) {
    case 0:
        K_ASSERT((s32)words[0xd07] < 8, 0x355);
        words[words[0xd07] + 0xf] = words[0xcf7];
        words[0xd07]++;
        break;
    case 1:
        K_ASSERT((s32)words[0xd06] < 8, 0x35a);
        words[words[0xd06] + 7] = words[0xcf7];
        words[0xd06]++;
        break;
    }
    words[0xcf7]++;
}

// FUN_001f6e80
void brRewardAnimateCurrentEntry(void)
{
    u8 *work;
    u32 *words;
    s32 i;
    u32 idx;
    u32 offset;
    u8 *entry;
    f32 position[2];
    f32 output[3];
    f32 scale;
    K_ASSERT(sBrReward != NULL, 0x8c);
    work = sBrReward;
    words = (u32 *)work;
    if (BR_U32(work, 0x340c) != 0) {
        for (i = 0; i < BR_S32(work, 0x341c); i++) {
            idx = BR_U32(work + i * 4, 0x3c);
            entry = work + idx * 0x670 + 0x5c;
            position[0] = (f32)(i - BR_S32(work, 0x340c)) * 220.0f + 320.0f;
            position[1] = 184.0f;
            scale = func_0020c500(entry + 0xc, 200.0f);
            func_0020c400(entry + 0xc, position, scale, output);
            output[1] += 100.0f;
            func_002508c0(entry + 0x60c, output, 0x14);
        }
    }
    offset = words[0xd03] * 4;
    idx = BR_U32((u8 *)(offset + (u32)work), 0x3c);
    offset = idx * 0x670;
    entry = (u8 *)(offset + (u32)work);
    func_003c7bc0(0, func_00173220(BR_U16(entry, 0x60)));
    func_003c7430(9);
    if (BR_U32(work, 0x340c) == BR_U32(work, 0x341c) - 1) {
        BR_U32(work, 0) |= 0x40;
    }
    func_0010a4e0(1, 0, 6, 10);
}

// FUN_001f7030
void func_001f7030(void)
{
    u8* work;
    u32 offset;

    K_ASSERT(sBrReward != NULL, 0x8c);
    work = sBrReward;
    func_003c7bc0(0, func_001775a0(1));
    offset = BR_U32(work, 0x3410) * 2;
    func_003c7bc0(1, func_00173220(
        BR_U16((u8*)(offset + (u32)work), 0x33e0)));
    func_003c7430(14);
    BR_U32(work, 4) = 5;
}


/* W389 measured sflResult001f9e90 opt_propagation off: nd 318 -> 317; object 572/576 -> 572/576. */


/* W389 measured func_001faea0 opt_common_subs off: nd 325 -> 303; object 652/656 -> 656/656. */






// W389 residual nd2: the sole differing instruction is commutative mul.s operand order (retail f0*f1 vs. ours f1*f0); this is a documented compiler floor.
/* W389 measured func_001fbfa0 opt_dead_assignments off: nd 260 -> 219; object 580/592 -> 584/592. */







/*
 * Battle-result tasks deliberately use byte offsets.  The retail work areas
 * are private to the result system and are shared by several child tasks;
 * keeping the offsets here avoids inventing public layouts for those areas.
 */



/* Result-resource and data helpers not yet described by public headers. */
 






static void brCopyWords(u8 *dst, const u8 *src, u32 count)
{
    u32 i;
    for (i = 0; i < count; i++) {
        dst[i] = src[i];
    }
}

static u32 brRootFlags(void)
{
    return sBrRoot != NULL ? BR_U32(sBrRoot, 0) : 0;
}

static u32 brCardFlags(void)
{
    return sBrCard != NULL ? BR_U32(sBrCard, 4) : 0;
}

static u32 brRewardFlags(void)
{
    return sBrReward != NULL ? BR_U32(sBrReward, 0) : 0;
}





















/* Retail 0x1f13f0-0x1f1a64: level-up propagation, hero/party EXP, and
 * newly learned-skill collection. */










#pragma opt_propagation reset












/* Retail 0x1f3270-0x1f4648: reconstructed result-card selection and reward dispatch. */

















// FUN_001f70d0
void func_001f70d0(void)
{
    u8* work;
    u32 offset;

    K_ASSERT(sBrReward != NULL, 0x8c);
    work = sBrReward;
    func_003c7bc0(0, func_001775a0(1));
    offset = BR_U32(work, 0x3414) * 2;
    func_003c7bc0(1, func_00173220(
        BR_U16((u8*)(offset + (u32)work), 0x33f0)));
    func_003c7430(16);
    BR_U32(work, 4) = 6;
}

// FUN_001f7170
void func_001f7170(void)
{
    u8 *work;
    s32 i;
    K_ASSERT(sBrReward != NULL, 0x8c);
    work = sBrReward;
    for (i = 0; i < BR_S32(work, 0x341c); i++) {
        u32 idx = BR_U32(work + i * 4, 0x3c);
        func_00217590(BR_U16(work + idx * 0x670, 0x60));
    }
    func_00215b00();
    BR_U32(work, 4) = 4;
}

// FUN_001f7210
#ifndef PC_BUILD
asm void func_001f7210(void)
{
  .set noreorder
  .word 0x27bdfdb0
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
  .word 0x8f82b5f0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844a28
  .word 0x2405008c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b5f0
  .word 0xafa00150
  .word 0x8e023408
  .word 0x00021080
  .word 0x00501021
  .word 0x8c43001c
  .word 0x24020670
  .word 0x00621018
  .word 0x02021021
  .word 0x24510060
  .word 0x0000a02d
  .word 0x8c430060
  .word 0x24020003
  .word 0x10620153
  .word 0x00000000
  .word 0x24020002
  .word 0x106200d4
  .word 0x00000000
  .word 0x24020001
  .word 0x10620059
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000334
  .word 0x00000000
  .word 0x278496d8
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x00c0382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x0c082710
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c040068
  .word 0x24844a38
  .word 0x8e250004
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e220004
  .word 0x00021200
  .word 0x02828821
  .word 0x0000a02d
  .word 0x2403ffff
  .word 0x10000007
  .word 0x00000000
  .word 0x001410c0
  .word 0x02221021
  .word 0x84420000
  .word 0x10430005
  .word 0x00000000
  .word 0x26940001
  .word 0x2a820020
  .word 0x1440fff8
  .word 0x00000000
  .word 0x0000a82d
  .word 0x0000182d
  .word 0x10000006
  .word 0x00000000
  .word 0x000310c0
  .word 0x02221021
  .word 0x84420006
  .word 0x02a2a821
  .word 0x24630001
  .word 0x0074102a
  .word 0x1440fff9
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x0055001b
  .word 0x00001810
  .word 0x0000202d
  .word 0x0000282d
  .word 0x10000009
  .word 0x00000000
  .word 0x000510c0
  .word 0x02221021
  .word 0x84420006
  .word 0x00822021
  .word 0x0064102a
  .word 0x14400005
  .word 0x00000000
  .word 0x24a50001
  .word 0x00b4102a
  .word 0x1440fff6
  .word 0x00000000
  .word 0x000510c0
  .word 0x02228821
  .word 0x3c040068
  .word 0x24844a48
  .word 0x0280302d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x963e0000
  .word 0x86220002
  .word 0xafa201a0
  .word 0x96220004
  .word 0xafa20190
  .word 0x3c040068
  .word 0x24844a58
  .word 0x03c0282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24140001
  .word 0x100002e0
  .word 0x00000000
  .word 0x278496e0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x24070007
  .word 0x0c042938
  .word 0x00000000
  .word 0x0c082720
  .word 0x00000000
  .word 0x0040a82d
  .word 0x3c040068
  .word 0x24844a38
  .word 0x8e250004
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e230004
  .word 0x00031040
  .word 0x00431021
  .word 0x00021180
  .word 0x02a2b021
  .word 0x0000882d
  .word 0x1000000b
  .word 0x00000000
  .word 0x00111040
  .word 0x00511021
  .word 0x00021080
  .word 0x02c22021
  .word 0x0c082750
  .word 0x00000000
  .word 0x24030002
  .word 0x10430005
  .word 0x00000000
  .word 0x26310001
  .word 0x2a220010
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x0051001b
  .word 0x0000a810
  .word 0x3c040068
  .word 0x24844a48
  .word 0x02a0282d
  .word 0x0220302d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x00151040
  .word 0x00551021
  .word 0x00021080
  .word 0x02c28821
  .word 0x0220202d
  .word 0x0c082750
  .word 0x00000000
  .word 0x24030001
  .word 0x10430024
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000034
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844a70
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e220004
  .word 0xafa20160
  .word 0x24040bd1
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000c
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x8fa20160
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000802
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xafa20160
  .word 0x3c040068
  .word 0x24844a88
  .word 0x8fa50160
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24140003
  .word 0x10000283
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844aa0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x963e0004
  .word 0x3c040068
  .word 0x24844ac0
  .word 0x03c0282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x86220008
  .word 0xafa20180
  .word 0x3c040068
  .word 0x24844ad8
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24140002
  .word 0x1000026f
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844a28
  .word 0x24050450
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000268
  .word 0x00000000
  .word 0x278496e8
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x24070008
  .word 0x0c042938
  .word 0x00000000
  .word 0x0c082730
  .word 0x00000000
  .word 0x0040a82d
  .word 0x3c040068
  .word 0x24844a38
  .word 0x8e250004
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e230004
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02a2a821
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030064
  .word 0x0043001a
  .word 0x00001810
  .word 0x0000202d
  .word 0x0000882d
  .word 0x10000009
  .word 0x00000000
  .word 0x00111080
  .word 0x02a21021
  .word 0x84420000
  .word 0x00822021
  .word 0x0064102a
  .word 0x14400005
  .word 0x00000000
  .word 0x26310001
  .word 0x2a220006
  .word 0x1440fff6
  .word 0x00000000
  .word 0x2a220006
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844a28
  .word 0x24050469
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2e210006
  .word 0x10200233
  .word 0x00000000
  .word 0x3c02007b
  .word 0x24427080
  .word 0x00111880
  .word 0x00621021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24050005
  .word 0x0045001a
  .word 0x00002010
  .word 0x00111080
  .word 0x00551021
  .word 0x84520002
  .word 0x24030004
  .word 0x1083001a
  .word 0x00000000
  .word 0x24020003
  .word 0x10820014
  .word 0x00000000
  .word 0x24020001
  .word 0x1082000e
  .word 0x00000000
  .word 0x24020002
  .word 0x10820008
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000214
  .word 0x00000000
  .word 0x0060a02d
  .word 0x10000211
  .word 0x00000000
  .word 0x24140006
  .word 0x1000020e
  .word 0x00000000
  .word 0x24140007
  .word 0x1000020b
  .word 0x00000000
  .word 0x00a0a02d
  .word 0x10000208
  .word 0x00000000
  .word 0x24140008
  .word 0x10000205
  .word 0x00000000
  .word 0x00751021
  .word 0x84520002
  .word 0x24140009
  .word 0x10000200
  .word 0x00000000
  .word 0x00751021
  .word 0x84520002
  .word 0x2414000b
  .word 0x100001fb
  .word 0x00000000
  .word 0x00751021
  .word 0x84520002
  .word 0x2414000c
  .word 0x100001f6
  .word 0x00000000
  .word 0x00751021
  .word 0x84520002
  .word 0x2414000a
  .word 0x100001f1
  .word 0x00000000
  .word 0x00751021
  .word 0x84520002
  .word 0x2414000d
  .word 0x100001ec
  .word 0x00000000
  .word 0x278496f0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0c082740
  .word 0x00000000
  .word 0x0040a82d
  .word 0x3c040068
  .word 0x24844a38
  .word 0x8e250004
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e230004
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00431021
  .word 0x00021040
  .word 0x02a2b021
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x24070009
  .word 0x0c042938
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0839c4
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0d3f34
  .word 0x00000000
  .word 0xae0234e0
  .word 0x8e020000
  .word 0x34420800
  .word 0xae020000
  .word 0x0000882d
  .word 0x0000a82d
  .word 0x10000168
  .word 0x00000000
  .word 0x00151880
  .word 0x007d1021
  .word 0x245701d0
  .word 0xaee00000
  .word 0x2ea1000d
  .word 0x10200160
  .word 0x00000000
  .word 0x3c02007b
  .word 0x24427040
  .word 0x00621021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b13c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x7fa200f0
  .word 0x24040001
  .word 0x0c05b17c
  .word 0x00000000
  .word 0x3043ffff
  .word 0x7ba200f0
  .word 0x0043082a
  .word 0x1020014d
  .word 0x00000000
  .word 0x00151040
  .word 0x02c21021
  .word 0x80420000
  .word 0xaee20000
  .word 0x02228821
  .word 0x10000146
  .word 0x00000000
  .word 0x27a40240
  .word 0x27a5024c
  .word 0x0c07c77c
  .word 0x00000000
  .word 0xafa00170
  .word 0x10000017
  .word 0x00000000
  .word 0x8fa20170
  .word 0x00021040
  .word 0x005d1021
  .word 0x24420240
  .word 0x7fa200e0
  .word 0x84440000
  .word 0x0c05b13c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x7fa200d0
  .word 0x7ba200e0
  .word 0x84440000
  .word 0x0c05b17c
  .word 0x00000000
  .word 0x3043ffff
  .word 0x7ba200d0
  .word 0x0043102a
  .word 0x14400009
  .word 0x00000000
  .word 0x8fa20170
  .word 0x24420001
  .word 0xafa20170
  .word 0x8fa3024c
  .word 0x8fa20170
  .word 0x0043102a
  .word 0x1440ffe6
  .word 0x00000000
  .word 0x8fa3024c
  .word 0x8fa20170
  .word 0x0043082a
  .word 0x1020011f
  .word 0x00000000
  .word 0x00151040
  .word 0x02c21021
  .word 0x80420000
  .word 0xaee20000
  .word 0x02228821
  .word 0x10000118
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b15c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x7fa200c0
  .word 0x24040001
  .word 0x0c05b19c
  .word 0x00000000
  .word 0x3043ffff
  .word 0x7ba200c0
  .word 0x0043082a
  .word 0x1020010b
  .word 0x00000000
  .word 0x00151040
  .word 0x02c21021
  .word 0x80420000
  .word 0xaee20000
  .word 0x02228821
  .word 0x10000104
  .word 0x00000000
  .word 0x27a40240
  .word 0x27a5024c
  .word 0x0c07c77c
  .word 0x00000000
  .word 0xafa00100
  .word 0x10000017
  .word 0x00000000
  .word 0x8fa20100
  .word 0x00021040
  .word 0x005d1021
  .word 0x24420240
  .word 0x7fa200b0
  .word 0x84440000
  .word 0x0c05b15c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x7fa200a0
  .word 0x7ba200b0
  .word 0x84440000
  .word 0x0c05b19c
  .word 0x00000000
  .word 0x3043ffff
  .word 0x7ba200a0
  .word 0x0043102a
  .word 0x14400009
  .word 0x00000000
  .word 0x8fa20100
  .word 0x24420001
  .word 0xafa20100
  .word 0x8fa3024c
  .word 0x8fa20100
  .word 0x0043102a
  .word 0x1440ffe6
  .word 0x00000000
  .word 0x8fa3024c
  .word 0x8fa20100
  .word 0x0043082a
  .word 0x102000dd
  .word 0x00000000
  .word 0x00151040
  .word 0x02c21021
  .word 0x80420000
  .word 0xaee20000
  .word 0x02228821
  .word 0x100000d6
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b25c
  .word 0x00000000
  .word 0x30420080
  .word 0x104000d0
  .word 0x00000000
  .word 0x00151040
  .word 0x02c21021
  .word 0x80420000
  .word 0xaee20000
  .word 0x02228821
  .word 0x100000c9
  .word 0x00000000
  .word 0x27a40240
  .word 0x27a5024c
  .word 0x0c07c77c
  .word 0x00000000
  .word 0xafa00110
  .word 0x1000000d
  .word 0x00000000
  .word 0x8fa20110
  .word 0x00021040
  .word 0x005d1021
  .word 0x84440240
  .word 0x0c05b25c
  .word 0x00000000
  .word 0x30420080
  .word 0x14400009
  .word 0x00000000
  .word 0x8fa20110
  .word 0x24420001
  .word 0xafa20110
  .word 0x8fa3024c
  .word 0x8fa20110
  .word 0x0043102a
  .word 0x1440fff0
  .word 0x00000000
  .word 0x8fa3024c
  .word 0x8fa20110
  .word 0x0043082a
  .word 0x102000ac
  .word 0x00000000
  .word 0x00151040
  .word 0x02c21021
  .word 0x80420000
  .word 0xaee20000
  .word 0x02228821
  .word 0x100000a5
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3042ffff
  .word 0x2442fffd
  .word 0x2c410003
  .word 0x1020009d
  .word 0x00000000
  .word 0x00151040
  .word 0x02c21021
  .word 0x80420000
  .word 0xaee20000
  .word 0x02228821
  .word 0x10000096
  .word 0x00000000
  .word 0x27a40240
  .word 0x27a5024c
  .word 0x0c07c77c
  .word 0x00000000
  .word 0xafa00120
  .word 0x10000014
  .word 0x00000000
  .word 0x8fa20120
  .word 0x00021040
  .word 0x005d1021
  .word 0x84440240
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020003
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020004
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020005
  .word 0x10620009
  .word 0x00000000
  .word 0x8fa20120
  .word 0x24420001
  .word 0xafa20120
  .word 0x8fa3024c
  .word 0x8fa20120
  .word 0x0043102a
  .word 0x1440ffe9
  .word 0x00000000
  .word 0x8fa3024c
  .word 0x8fa20120
  .word 0x0043082a
  .word 0x10200072
  .word 0x00000000
  .word 0x00151040
  .word 0x02c21021
  .word 0x80420000
  .word 0xaee20000
  .word 0x02228821
  .word 0x1000006b
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020001
  .word 0x10620064
  .word 0x00000000
  .word 0x24020002
  .word 0x10620061
  .word 0x00000000
  .word 0x00151040
  .word 0x02c21021
  .word 0x80420000
  .word 0xaee20000
  .word 0x02228821
  .word 0x1000005a
  .word 0x00000000
  .word 0x27a40240
  .word 0x27a5024c
  .word 0x0c07c77c
  .word 0x00000000
  .word 0xafa00130
  .word 0x10000011
  .word 0x00000000
  .word 0x8fa20130
  .word 0x00021040
  .word 0x005d1021
  .word 0x84440240
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x24020002
  .word 0x14620009
  .word 0x00000000
  .word 0x8fa20130
  .word 0x24420001
  .word 0xafa20130
  .word 0x8fa3024c
  .word 0x8fa20130
  .word 0x0043102a
  .word 0x1440ffec
  .word 0x00000000
  .word 0x8fa3024c
  .word 0x8fa20130
  .word 0x0043082a
  .word 0x10200039
  .word 0x00000000
  .word 0x00151040
  .word 0x02c21021
  .word 0x80420000
  .word 0xaee20000
  .word 0x02228821
  .word 0x10000032
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020002
  .word 0x1062002b
  .word 0x00000000
  .word 0x00151040
  .word 0x02c21021
  .word 0x80420000
  .word 0xaee20000
  .word 0x02228821
  .word 0x10000024
  .word 0x00000000
  .word 0x27a40240
  .word 0x27a5024c
  .word 0x0c07c77c
  .word 0x00000000
  .word 0xafa00140
  .word 0x1000000e
  .word 0x00000000
  .word 0x8fa20140
  .word 0x00021040
  .word 0x005d1021
  .word 0x84440240
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020002
  .word 0x14620009
  .word 0x00000000
  .word 0x8fa20140
  .word 0x24420001
  .word 0xafa20140
  .word 0x8fa3024c
  .word 0x8fa20140
  .word 0x0043102a
  .word 0x1440ffef
  .word 0x00000000
  .word 0x8fa3024c
  .word 0x8fa20140
  .word 0x0043082a
  .word 0x10200006
  .word 0x00000000
  .word 0x00151040
  .word 0x02c21021
  .word 0x80420000
  .word 0xaee20000
  .word 0x02228821
  .word 0x26b50001
  .word 0x2aa2000d
  .word 0x1440fe97
  .word 0x00000000
  .word 0x16200004
  .word 0x00000000
  .word 0x2414001b
  .word 0x10000057
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x0051001a
  .word 0x00001810
  .word 0x0000202d
  .word 0x0000282d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00051080
  .word 0x005d1021
  .word 0x244201d0
  .word 0x8c420000
  .word 0x00822021
  .word 0x0064102a
  .word 0x14400005
  .word 0x00000000
  .word 0x24a50001
  .word 0x28a2000d
  .word 0x1440fff5
  .word 0x00000000
  .word 0x2ca1000d
  .word 0x1020003b
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637000
  .word 0x00051080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x00051040
  .word 0x00561021
  .word 0x80520001
  .word 0x2414000e
  .word 0x10000033
  .word 0x00000000
  .word 0x00051040
  .word 0x00561021
  .word 0x80520001
  .word 0x2414000f
  .word 0x1000002d
  .word 0x00000000
  .word 0x00051040
  .word 0x00561021
  .word 0x80520001
  .word 0x24140010
  .word 0x10000027
  .word 0x00000000
  .word 0x00051040
  .word 0x00561021
  .word 0x80520001
  .word 0x24140011
  .word 0x10000021
  .word 0x00000000
  .word 0x24140012
  .word 0x1000001e
  .word 0x00000000
  .word 0x24140013
  .word 0x1000001b
  .word 0x00000000
  .word 0x24140014
  .word 0x10000018
  .word 0x00000000
  .word 0x24140015
  .word 0x10000015
  .word 0x00000000
  .word 0x24140016
  .word 0x10000012
  .word 0x00000000
  .word 0x24140017
  .word 0x1000000f
  .word 0x00000000
  .word 0x24140018
  .word 0x1000000c
  .word 0x00000000
  .word 0x24140019
  .word 0x10000009
  .word 0x00000000
  .word 0x2414001a
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844a28
  .word 0x2405059d
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2e81001c
  .word 0x1020025a
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636f90
  .word 0x00141080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844af0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x33c5ffff
  .word 0x3c040068
  .word 0x24844ac0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x2403ffff
  .word 0x8fa201a0
  .word 0x1443000a
  .word 0x00000000
  .word 0x001e243c
  .word 0x0004243f
  .word 0x27a50210
  .word 0x0c060a34
  .word 0x00000000
  .word 0x93a20218
  .word 0xafa201a0
  .word 0x10000009
  .word 0x00000000
  .word 0x001e243c
  .word 0x0004243f
  .word 0x304500ff
  .word 0x93a20190
  .word 0x0040302d
  .word 0x27a70210
  .word 0x0c060b64
  .word 0x00000000
  .word 0x8e0234c0
  .word 0x28420008
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844a28
  .word 0x240505b9
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e0334c0
  .word 0x00031080
  .word 0x00431021
  .word 0x00021080
  .word 0x02021021
  .word 0x24443420
  .word 0x27a50210
  .word 0x24060014
  .word 0x0c148494
  .word 0x00000000
  .word 0x8e0234c0
  .word 0x24420001
  .word 0xae0234c0
  .word 0x10000222
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844b10
  .word 0x0c14896a
  .word 0x00000000
  .word 0x33c5ffff
  .word 0x3c040068
  .word 0x24844ac0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844b28
  .word 0x8fa50180
  .word 0x0c14896a
  .word 0x00000000
  .word 0x001eac3c
  .word 0x0015ac3f
  .word 0x24040001
  .word 0x02a0282d
  .word 0x0c05c1d8
  .word 0x00000000
  .word 0x3051ffff
  .word 0x3c040068
  .word 0x24844b40
  .word 0x0220282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8fa20180
  .word 0x02228821
  .word 0x2a210064
  .word 0x14200002
  .word 0x00000000
  .word 0x24110063
  .word 0x278496f8
  .word 0x0220282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3226ffff
  .word 0x24040001
  .word 0x02a0282d
  .word 0x0c05c218
  .word 0x00000000
  .word 0x100001f7
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844b60
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844b78
  .word 0x8fa50160
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0c05b754
  .word 0x00000000
  .word 0x0040882d
  .word 0x3c040068
  .word 0x24844b88
  .word 0x0220282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8fa20160
  .word 0x02228821
  .word 0x3c010098
  .word 0x34219680
  .word 0x0221082a
  .word 0x14200003
  .word 0x00000000
  .word 0x3c020098
  .word 0x3451967f
  .word 0x278496f8
  .word 0x0220282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c05ba4c
  .word 0x00000000
  .word 0x100001d4
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05d200
  .word 0x00000000
  .word 0x0040982d
  .word 0x0012363c
  .word 0x0006363f
  .word 0x0260202d
  .word 0x0000282d
  .word 0x0c05d194
  .word 0x00000000
  .word 0x100001c8
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05d200
  .word 0x00000000
  .word 0x0040982d
  .word 0x0012363c
  .word 0x0006363f
  .word 0x0260202d
  .word 0x24050003
  .word 0x0c05d194
  .word 0x00000000
  .word 0x100001bc
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05d200
  .word 0x00000000
  .word 0x0040982d
  .word 0x0012363c
  .word 0x0006363f
  .word 0x0260202d
  .word 0x24050002
  .word 0x0c05d194
  .word 0x00000000
  .word 0x100001b0
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05d200
  .word 0x00000000
  .word 0x0040982d
  .word 0x0012363c
  .word 0x0006363f
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c05d194
  .word 0x00000000
  .word 0x100001a4
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05d200
  .word 0x00000000
  .word 0x0040982d
  .word 0x0012363c
  .word 0x0006363f
  .word 0x0260202d
  .word 0x24050004
  .word 0x0c05d194
  .word 0x00000000
  .word 0x10000198
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000005
  .word 0x00000000
  .word 0x00031080
  .word 0x005d1021
  .word 0xac4001b0
  .word 0x24630001
  .word 0x28620005
  .word 0x1440fffa
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000015
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030005
  .word 0x0043001a
  .word 0x0000a810
  .word 0x24040001
  .word 0x0c05d200
  .word 0x00000000
  .word 0x0040982d
  .word 0x32a5ffff
  .word 0x0260202d
  .word 0x24060001
  .word 0x0c05d194
  .word 0x00000000
  .word 0x00151080
  .word 0x005d1821
  .word 0x8c6201b0
  .word 0x24420001
  .word 0xac6201b0
  .word 0x26310001
  .word 0x0232102a
  .word 0x1440ffea
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x1000000d
  .word 0x00000000
  .word 0x00051080
  .word 0x005d1021
  .word 0x244201b0
  .word 0x8c430000
  .word 0x10600006
  .word 0x00000000
  .word 0x000410c0
  .word 0x02021021
  .word 0xac4534e8
  .word 0xac4334ec
  .word 0x24840001
  .word 0x24a50001
  .word 0x28a20005
  .word 0x1440fff2
  .word 0x00000000
  .word 0xae043514
  .word 0xae003510
  .word 0x1000015d
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b1bc
  .word 0x00000000
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x0220202d
  .word 0x0c05dca0
  .word 0x00000000
  .word 0x0002ac3c
  .word 0x0015ac3f
  .word 0x02328821
  .word 0x2a2103e8
  .word 0x14200002
  .word 0x00000000
  .word 0x241103e7
  .word 0x00112c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05b3f8
  .word 0x00000000
  .word 0x0011243c
  .word 0x0004243f
  .word 0x0c05dca0
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x12a20141
  .word 0x00000000
  .word 0x8fa20150
  .word 0x34420001
  .word 0xafa20150
  .word 0x1000013c
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b1d0
  .word 0x00000000
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x0220202d
  .word 0x0c05dcbc
  .word 0x00000000
  .word 0x0002ac3c
  .word 0x0015ac3f
  .word 0x02328821
  .word 0x2a2103e8
  .word 0x14200002
  .word 0x00000000
  .word 0x241103e7
  .word 0x00112c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05b424
  .word 0x00000000
  .word 0x0011243c
  .word 0x0004243f
  .word 0x0c05dcbc
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x12a20120
  .word 0x00000000
  .word 0x8fa20150
  .word 0x34420001
  .word 0xafa20150
  .word 0x1000011b
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b1e4
  .word 0x00000000
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x0220202d
  .word 0x0c05dcd8
  .word 0x00000000
  .word 0x0002ac3c
  .word 0x0015ac3f
  .word 0x02328821
  .word 0x2a2103e8
  .word 0x14200002
  .word 0x00000000
  .word 0x241103e7
  .word 0x00112c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05b458
  .word 0x00000000
  .word 0x0011243c
  .word 0x0004243f
  .word 0x0c05dcd8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x12a200ff
  .word 0x00000000
  .word 0x8fa20150
  .word 0x34420001
  .word 0xafa20150
  .word 0x100000fa
  .word 0x00000000
  .word 0x8e020018
  .word 0x00521818
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001012
  .word 0xae020018
  .word 0x100000f2
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b13c
  .word 0x00000000
  .word 0x3051ffff
  .word 0x24040001
  .word 0x0c05b17c
  .word 0x00000000
  .word 0x3044ffff
  .word 0x00921818
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001012
  .word 0x02221021
  .word 0x0082082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0080102d
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05b3d0
  .word 0x00000000
  .word 0x100000da
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000001b
  .word 0x00000000
  .word 0x00111040
  .word 0x005d1021
  .word 0x24550240
  .word 0x86a40000
  .word 0x0c05b13c
  .word 0x00000000
  .word 0x3056ffff
  .word 0x86a40000
  .word 0x0c05b17c
  .word 0x00000000
  .word 0x3044ffff
  .word 0x00921818
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001012
  .word 0x02c21021
  .word 0x0082082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0080102d
  .word 0x86a40000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0c05b3d0
  .word 0x00000000
  .word 0x26310001
  .word 0x8fa2024c
  .word 0x0222102a
  .word 0x1440ffe3
  .word 0x00000000
  .word 0x100000b7
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b15c
  .word 0x00000000
  .word 0x3051ffff
  .word 0x24040001
  .word 0x0c05b19c
  .word 0x00000000
  .word 0x3044ffff
  .word 0x00921818
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001012
  .word 0x02221021
  .word 0x0082082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0080102d
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05b3e4
  .word 0x00000000
  .word 0x1000009f
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000001b
  .word 0x00000000
  .word 0x00111040
  .word 0x005d1021
  .word 0x24550240
  .word 0x86a40000
  .word 0x0c05b15c
  .word 0x00000000
  .word 0x3056ffff
  .word 0x86a40000
  .word 0x0c05b19c
  .word 0x00000000
  .word 0x3044ffff
  .word 0x00921818
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001012
  .word 0x02c21021
  .word 0x0082082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0080102d
  .word 0x86a40000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0c05b3e4
  .word 0x00000000
  .word 0x26310001
  .word 0x8fa2024c
  .word 0x0222102a
  .word 0x1440ffe3
  .word 0x00000000
  .word 0x1000007c
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b25c
  .word 0x00000000
  .word 0x2403ff7f
  .word 0x00432824
  .word 0x24040001
  .word 0x0c05b62c
  .word 0x00000000
  .word 0x10000072
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000000d
  .word 0x00000000
  .word 0x00111040
  .word 0x005d1021
  .word 0x24550240
  .word 0x86a40000
  .word 0x0c05b25c
  .word 0x00000000
  .word 0x86a40000
  .word 0x2403ff7f
  .word 0x00432824
  .word 0x0c05b62c
  .word 0x00000000
  .word 0x26310001
  .word 0x8fa2024c
  .word 0x0222102a
  .word 0x1440fff1
  .word 0x00000000
  .word 0x1000005d
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b248
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x0c05b5ac
  .word 0x00000000
  .word 0x10000054
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000000c
  .word 0x00000000
  .word 0x00111040
  .word 0x005d1021
  .word 0x24550240
  .word 0x86a40000
  .word 0x0c05b248
  .word 0x00000000
  .word 0x86a40000
  .word 0x0000282d
  .word 0x0c05b5ac
  .word 0x00000000
  .word 0x26310001
  .word 0x8fa2024c
  .word 0x0222102a
  .word 0x1440fff2
  .word 0x00000000
  .word 0x10000040
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b248
  .word 0x00000000
  .word 0x24040001
  .word 0x0080282d
  .word 0x0c05b5ac
  .word 0x00000000
  .word 0x10000037
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000000c
  .word 0x00000000
  .word 0x00111040
  .word 0x005d1021
  .word 0x24550240
  .word 0x86a40000
  .word 0x0c05b248
  .word 0x00000000
  .word 0x86a40000
  .word 0x24050001
  .word 0x0c05b5ac
  .word 0x00000000
  .word 0x26310001
  .word 0x8fa2024c
  .word 0x0222102a
  .word 0x1440fff2
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b248
  .word 0x00000000
  .word 0x24040001
  .word 0x24050002
  .word 0x0c05b5ac
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000000c
  .word 0x00000000
  .word 0x00111040
  .word 0x005d1021
  .word 0x24550240
  .word 0x86a40000
  .word 0x0c05b248
  .word 0x00000000
  .word 0x86a40000
  .word 0x24050002
  .word 0x0c05b5ac
  .word 0x00000000
  .word 0x26310001
  .word 0x8fa2024c
  .word 0x0222102a
  .word 0x1440fff2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844a28
  .word 0x240506b1
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844b98
  .word 0x0280282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x2e81001c
  .word 0x1020018d
  .word 0x00000000
  .word 0x3c04007b
  .word 0x24846f20
  .word 0x00141880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x001e243c
  .word 0x0004243f
  .word 0x87a201a0
  .word 0x0040282d
  .word 0x0c05c444
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x2404000a
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000177
  .word 0x00000000
  .word 0x001e243c
  .word 0x0004243f
  .word 0x0000282d
  .word 0x0c05c444
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040001
  .word 0x8fa50180
  .word 0x0000302d
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x2404000b
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000164
  .word 0x00000000
  .word 0x0000202d
  .word 0x8fa50160
  .word 0x0000302d
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x1000015a
  .word 0x00000000
  .word 0x96640002
  .word 0x0c05cc88
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040001
  .word 0x0240282d
  .word 0x0000302d
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x24040011
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000149
  .word 0x00000000
  .word 0x96640002
  .word 0x0c05cc88
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040001
  .word 0x0240282d
  .word 0x0000302d
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x24040014
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000138
  .word 0x00000000
  .word 0x96640002
  .word 0x0c05cc88
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040001
  .word 0x0240282d
  .word 0x0000302d
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x24040012
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000127
  .word 0x00000000
  .word 0x96640002
  .word 0x0c05cc88
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040001
  .word 0x0240282d
  .word 0x0000302d
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x24040013
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000116
  .word 0x00000000
  .word 0x96640002
  .word 0x0c05cc88
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040001
  .word 0x0240282d
  .word 0x0000302d
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x24040015
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000105
  .word 0x00000000
  .word 0x96640002
  .word 0x0c05cc88
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040016
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x100000f9
  .word 0x00000000
  .word 0x8fa20150
  .word 0x00401027
  .word 0x30420001
  .word 0x1040000d
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05dd68
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x2404001a
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x100000e8
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05dd68
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b1bc
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c05dca0
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c046a04
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x2404001d
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x100000cf
  .word 0x00000000
  .word 0x8fa20150
  .word 0x00401027
  .word 0x30420001
  .word 0x1040000d
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05dd68
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040019
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x100000be
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05dd68
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b1d0
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c05dcbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c046a10
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x2404001c
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x100000a5
  .word 0x00000000
  .word 0x8fa20150
  .word 0x00401027
  .word 0x30420001
  .word 0x1040000d
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05dd68
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040018
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000094
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05dd68
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b1e4
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c05dcd8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c046a1c
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x2404001b
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x1000007b
  .word 0x00000000
  .word 0x2404001e
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000076
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05dd68
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x2404001f
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x1000006a
  .word 0x00000000
  .word 0x24040020
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000065
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05dd68
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040021
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000059
  .word 0x00000000
  .word 0x24040022
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000054
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05dd68
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040023
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000048
  .word 0x00000000
  .word 0x24040024
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000043
  .word 0x00000000
  .word 0x96640002
  .word 0x0c05cc88
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040025
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000037
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05dd68
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040026
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x1000002b
  .word 0x00000000
  .word 0x24040027
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000026
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05dd68
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040028
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x24040029
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05dd68
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x2404002a
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x2404002b
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x2404002c
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x8e033408
  .word 0x10600036
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000002f
  .word 0x00000000
  .word 0x00121080
  .word 0x02021021
  .word 0x8c43001c
  .word 0x24020670
  .word 0x00621018
  .word 0x02021021
  .word 0x2451005c
  .word 0x8e023408
  .word 0x02421023
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c02435c
  .word 0x44821000
  .word 0x3c0243a0
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a00238
  .word 0x3c024338
  .word 0xafa2023c
  .word 0x3c024348
  .word 0x44826000
  .word 0x2624000c
  .word 0x0c083140
  .word 0x00000000
  .word 0x2624000c
  .word 0x27a50238
  .word 0x46000306
  .word 0x27a60228
  .word 0x0c083100
  .word 0x00000000
  .word 0xc7a1022c
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a0022c
  .word 0x2624060c
  .word 0x27a50228
  .word 0x24060014
  .word 0x0c094230
  .word 0x00000000
  .word 0x26520001
  .word 0x8e033418
  .word 0x0243182a
  .word 0x1460ffcf
  .word 0x00000000
  .word 0x8e043408
  .word 0x8e033418
  .word 0x2463ffff
  .word 0x14830004
  .word 0x00000000
  .word 0x8e030000
  .word 0x34630040
  .word 0xae030000
  .word 0x8e030000
  .word 0x30630800
  .word 0x10600003
  .word 0x00000000
  .word 0x0c07e718
  .word 0x00000000
  .word 0x24030009
  .word 0x12830003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x8e030000
  .word 0x00601827
  .word 0x30630800
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844a28
  .word 0x24050770
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24030001
  .word 0xae0334e4
  .word 0x10000002
  .word 0x00000000
  .word 0xae0034e4
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
  .word 0x27bd0250
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001f9100
void sflResult001f9100_y2(void)
{
    u8* p;

    K_ASSERT(sSflResult != NULL, 0x8c);
    p = (u8*)sSflResult;
    func_00217410((u16*)(p + 0x33f0), (s32*)(p + 0x3404));
    func_002174d0((u16*)(p + 0x33e0), (s32*)(p + 0x3400));
    func_00216800();
}

/* W418 rate choice: direct-return rewrites for cases 8+12 improved 465/1212B (0.3837) to 400/1188B (0.3367); case 10 was reverted because its 444/1200B (0.3700) combination was worse. Cases 1/3 direct-return probes regressed to nd632/1168B and nd495/1168B. */
#pragma push
#pragma opt_lifetimes on
// FUN_001f9170
u32 sflResult001f9170(u32 player)
{
    s32 j;
    char* flags;
    s32 i;
    s16 members[6];
    s32 memberCount;
    flags = (char*)func_00209d00() + player * 0x1a;
    i = 0;
    for (; i < 0xd; i++) {
        if (flags[i * 2] == 0) {
            continue;
        }
        switch (i) {
        case 0:
            if (datGetHp(1) < datGetMaxHp(1)) {
                return 1;
            }
            break;
        case 1:
            brRoot001f1df0((u16*)members, &memberCount);
            for (j = 0; j < memberCount; j++) {
                if (datGetHp(members[j]) < datGetMaxHp(members[j])) {
                    break;
                }
            }
            if (j < memberCount) {
                return 1;
            }
            break;
        case 2:
            if (datGetSp(1) < func_0016c670(1)) {
                return 1;
            }
            break;
        case 3:
            brRoot001f1df0((u16*)members, &memberCount);
            for (j = 0; j < memberCount; j++) {
                if (datGetSp(members[j]) < func_0016c670(members[j])) {
                    break;
                }
            }
            if (j < memberCount) {
                return 1;
            }
            break;
        case 4:
            if ((datGetBadStatusNoDown(1) & 0x80) != 0) {
                return 1;
            }
            break;
        case 5:
            brRoot001f1df0((u16*)members, &memberCount);
            for (j = 0; j < memberCount; j++) {
                if ((datGetBadStatusNoDown(members[j]) & 0x80) != 0) {
                    break;
                }
            }
            if (j < memberCount) {
                return 1;
            }
            break;
        case 6:
            break;
        case 7: {
            u16 condition = datGetPhysicalCondition(1);
            if ((u32)(condition - 3) < 3) {
                return 1;
            }
            break;
        }
        case 8:
            brRoot001f1df0((u16*)members, &memberCount);
            for (j = 0; j < memberCount; j++) {
                u16 condition = datGetPhysicalCondition(members[j]);
                if (condition == 3 || condition == 4 || condition == 5) {
                    break;
                }
            }
            if (j < memberCount) {
                return 1;
            }
            break;
        case 9: {
            u16 condition = datGetPhysicalCondition(1);
            if (condition != 1 && condition != 2) {
                return 1;
            }
            break;
        }
        case 10:
            brRoot001f1df0((u16*)members, &memberCount);
            for (j = 0; j < memberCount; j++) {
                u16 condition = datGetPhysicalCondition(members[j]);
                if (condition != 1 && condition != 2) {
                    break;
                }
            }
            if (j < memberCount) {
                return 1;
            }
            break;
        case 11:
            if (datGetPhysicalCondition(1) != 2) {
                return 1;
            }
            break;
        case 12:
            brRoot001f1df0((u16*)members, &memberCount);
            for (j = 0; j < memberCount; j++) {
                if (datGetPhysicalCondition(members[j]) != 2) {
                    break;
                }
            }
            if (j < memberCount) {
                return 1;
            }
            break;
        }
    }
    return 0;
}
#pragma opt_lifetimes reset
#pragma pop
// FUN_001f9630
void sflResult001f9630(void)
{
    u32* p;

    K_ASSERT(sSflResult != NULL, 0x8c);
    p = sSflResult;
    *(u32*)((int)p + 0x341c) = 0;
    *(u32*)((int)p + 0x3418) = 0;
}

/* Retail reconstruction spans 0x001f6630-0x001f6a5c: reward reset, card setup, and two indexed animation passes. */
// FUN_001f9680
#pragma opt_loop_invariants on
u32 sflResult001f9680(const s32* request)
{
    u8* base;
    s32* entry;
    s32 i;
    s32 count;
    s32 stride;
    u32 result;

    K_ASSERT(sSflResult != NULL, 0x8c);
    base = (u8*)sSflResult;
    i = 0;
    count = *(s32*)(base + 0x33dc);
    result = 1;
    stride = 0x670;
    while (i < count)
    {
        entry = (s32*)(base + i * stride + 0x5c);
        if (entry[0] == request[0])
        {
            switch (request[0])
            {
            case 0:
                if (*(u16*)&entry[1] == *(u16*)&request[1])
                    return result;
                break;
            case 1:
                if (entry[1] == request[1] || entry[2] == request[2])
                    return result;
                break;
            }
        }
        i++;
    }
    return 0;
}
#pragma opt_loop_invariants reset

// FUN_001f9770
void sflResult001f9770(int param_1, int* param_2)
{
    int i;
    u8* p;

    K_ASSERT(sSflResult != NULL, 0x8c);
    p = (u8*)sSflResult;
    for (i = 0; i < *(s32*)(p + 0x3400); i++) {
        *(u16*)(param_1 + i * 2) = *(u16*)(p + i * 2 + 0x33e0);
    }
    *param_2 = *(s32*)(p + 0x3400);
}

// FUN_001f9800
void sflResult001f9800(int param_1, int* param_2)
{
    int i;
    u8* p;

    K_ASSERT(sSflResult != NULL, 0x8c);
    p = (u8*)sSflResult;
    for (i = 0; i < *(s32*)(p + 0x3404); i++) {
        *(u16*)(param_1 + i * 2) = *(u16*)(p + i * 2 + 0x33f0);
    }
    *param_2 = *(s32*)(p + 0x3404);
}

// FUN_001f9890
u32 sflResult001f9890(void)
{
    K_ASSERT(sSflResult != NULL, 0x8c);
    return *(u32*)((u8*)sSflResult + 0x18);
}

// FUN_001f98d0
void sflResult001f98d0(void)
{
    u8* base;
    s32 i;
    K_ASSERT(sSflResult != NULL, 0x8c);
    base = (u8*)sSflResult;
    if ((*(u32*)base & 0x80) != 0) {
        switch (*(u32*)(base + 8)) {
        case 1:
            for (i = 0; i < *(s32*)(base + 0x33dc); i++) {
                s32* entry = (s32*)(base + i * 0x670 + 0x5c);
                switch (entry[0]) {
                case 0:
                    func_0021a760(*(u16*)(entry + 1));
                    break;
                case 1:
                    func_0021a670(entry[1], entry[2]);
                    break;
                }
            }
            *(u32*)base |= 0x80;
            *(u32*)(base + 4) = 0;
            break;
        case 0:
            func_001f6630();
            break;
        }
        *(u32*)base &= ~0x80;
    }
}

// FUN_001f99f0
void sflResult001f99f0_y2(void)
{
    u32* puVar1;

    K_ASSERT(sSflResult != NULL, 0x8c);
    puVar1 = sSflResult;
    puVar1[0xd03] = 0;
    switch (puVar1[2]) {
    case 1:
        puVar1[0xd33] = 0;
        puVar1[0xd34] = 0;
        puVar1[0xd32] = 0;
        *puVar1 |= 0x100;
        break;
    }
    FUN_001f6e80();
    puVar1[1] = 2;
}

/* W415 census recheck: all eight relocations resolve to the same ordered retail targets; the reported callee discrepancy is an offset shift, not a wrong callee. */
// FUN_001f9a80
#ifndef PC_BUILD
asm void sflResult001f9a80(void)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82b5f0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844a28
  .word 0x2405008c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b5f0
  .word 0xae203408
  .word 0x8e230008
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000059
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000043
  .word 0x00000000
  .word 0x00121080
  .word 0x02221021
  .word 0x8c43001c
  .word 0x24020670
  .word 0x00621018
  .word 0x02221021
  .word 0x2450005c
  .word 0x3c024120
  .word 0xafa20068
  .word 0xafa2006c
  .word 0xafa20070
  .word 0x2604000c
  .word 0x27a50068
  .word 0x0c08358c
  .word 0x00000000
  .word 0x3c02435c
  .word 0x44821800
  .word 0x44920000
  .word 0x00000000
  .word 0x468000a0
  .word 0x3c0243a0
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181c
  .word 0xe7a00088
  .word 0x3c024338
  .word 0xafa2008c
  .word 0x3c024348
  .word 0x44826000
  .word 0x2604000c
  .word 0x0c083140
  .word 0x00000000
  .word 0x2604000c
  .word 0x27a50088
  .word 0x46000306
  .word 0x27a60078
  .word 0x0c083100
  .word 0x00000000
  .word 0xc7a1007c
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a0007c
  .word 0x2604000c
  .word 0x27a50078
  .word 0x0c083594
  .word 0x00000000
  .word 0xafa00058
  .word 0x3c023f80
  .word 0xafa2005c
  .word 0xafa00060
  .word 0x3c024334
  .word 0x44826000
  .word 0x27a40040
  .word 0x27a50058
  .word 0x0000302d
  .word 0x0c12f778
  .word 0x00000000
  .word 0x2604000c
  .word 0x27a50040
  .word 0x0c0835a4
  .word 0x00000000
  .word 0x26520001
  .word 0x8e223418
  .word 0x0242102a
  .word 0x1440ffbb
  .word 0x00000000
  .word 0xae2034d8
  .word 0xae2034dc
  .word 0xae2034d4
  .word 0x8e220000
  .word 0x34420200
  .word 0xae220000
  .word 0x8e22341c
  .word 0x10400007
  .word 0x00000000
  .word 0xae2034d0
  .word 0x24020001
  .word 0xae2234c8
  .word 0x8e220000
  .word 0x34420100
  .word 0xae220000
  .word 0x0c07dc84
  .word 0x00000000
  .word 0x24030007
  .word 0xae230004
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001f9c60
void sflResult001f9c60(void)
{
    struct Vector3 {
        float x;
        float y;
        float z;
    };
    u8* base;
    u8 color[4];
    struct Vector3 position;
    u32 index;
    K_ASSERT(sSflResult != NULL, 0x8c);
    base = (u8*)sSflResult;
    index = *(u32*)(base + 0x3408);
    index *= 4;
    index += (u32)base;
    index = *(u32*)(index + 0x1c);
    position = *(struct Vector3*)(base + index * 0x670 + 0x88);
    position.x = 0.0f;
    position.y = 120.0f;
    position.z = 200.0f;
    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = 0xff;
    func_0034ff90(*(u32*)(base + 0x34e0), color);
    func_0034ff70(*(u32*)(base + 0x34e0), fGpffff8070);
    func_0034fdf0(*(u32*)(base + 0x34e0), (float*)&position);
    func_0034fe30(0.0f, *(u32*)(base + 0x34e0), 0.0f, 0.0f);
    func_0034fd30(*(u32*)(base + 0x34e0));
    func_0034fd70(*(u32*)(base + 0x34e0), 7);
}
