#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"
#include "Main/Battle/Result/br_panel.h"
#include "Main/Battle/Result/br_res.h"
#include "Main/Social/sfl_res.h"
#include "Main/Social/sfl_script.h"
#include "Main/Battle/Data/datPersona.h"
#include "Main/g_data.h"
#include "h_fade.h"
#include "rw/rwcore.h"
#include "rw/rprandom.h"
#pragma alias sflResGetTutorialFileUnchecked FUN_0020ea00
extern void* sflResGetTutorialFileUnchecked();


/*
 * Battle-result tasks deliberately use byte offsets.  The retail work areas
 * are private to the result system and are shared by several child tasks;
 * keeping the offsets here avoids inventing public layouts for those areas.
 */
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

/* Result-resource and data helpers not yet described by public headers. */
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
extern u32 func_00175ce0(DatPersonaWork *, u16 *);
extern u32 func_001761b0(DatPersonaWork *);
extern u32 func_00176100(DatPersonaWork *, u16 *);
extern u32 func_001fbdf0(u32, u32, u32, u32, u32);
extern u32 func_001fbfa0(u32, u32, u32, u32, u32, u32);
extern u32 func_001f9e90(u16, u32);
extern void func_001fb4b0(void *, s32, s32, s32, s32 *, s32 *);
extern u8 *DAT_007ce430;
extern u32 func_001f9680(s32 *);
extern void func_001f9c60(void);
extern u32 func_001f9a80(void);
extern void func_001f98d0(void);
extern void sflResult001f9770(u16 *, s32 *);
extern void sflResult001f9800(u16 *, s32 *);
extern u32 sflResult001f9890(void);
extern void sflResult001f9630(void);
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
extern void func_00215a50(void *);
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
extern u8 *func_00209d00(void);
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
extern void func_004bdde0(f32, f32 *, const f32 *, u32);
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
extern u16 datGetMaxHp(s16);
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
void func_001f6630(void);
void brRewardAdvanceState(void);
void brRewardAnimateCurrentEntry(void);
void brRewardRegisterEntry(const f32 *);
void func_001f7030(void);
void func_001f70d0(void);
void func_001f7170(void);
void func_001f7210(void);
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













/* Retail 0x1f13f0-0x1f1a64: level-up propagation, hero/party EXP, and
 * newly learned-skill collection. */






















/* W455 examination: retail selects result cards and dispatches reward requests;
 * the source already covers that call skeleton (4896/5088 bytes). Left
 * unchanged because the remaining 192-byte difference is stack layout/liveness,
 * and adding padding would fabricate growth. */
// FUN_001f3270
#ifndef PC_BUILD
asm void func_001f3270(KwlnTask *task)
{
  .set noreorder
  .word 0x27bdfbd0
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
  .word 0x8c90003c
  .word 0x0c082784
  .word 0x00000000
  .word 0x7fa20100
  .word 0x0c082788
  .word 0x00000000
  .word 0x0040b82d
  .word 0x0c082798
  .word 0x00000000
  .word 0x7fa200f0
  .word 0x0c08279c
  .word 0x00000000
  .word 0x7fa200e0
  .word 0x0c082774
  .word 0x00000000
  .word 0x0000902d
  .word 0x24040001
  .word 0x0c05b11c
  .word 0x00000000
  .word 0x304200ff
  .word 0x0002ac3c
  .word 0x0015ac3f
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400018
  .word 0x00000000
  .word 0x00153c3c
  .word 0x00073c3f
  .word 0x28e20019
  .word 0x1440000e
  .word 0x00000000
  .word 0x2ce10023
  .word 0x1020000b
  .word 0x00000000
  .word 0x00071840
  .word 0x3c020068
  .word 0x244246ce
  .word 0x00431021
  .word 0x84420000
  .word 0x24420001
  .word 0x0002543c
  .word 0x000a543f
  .word 0x1000001a
  .word 0x00000000
  .word 0x24e2fffb
  .word 0x0002543c
  .word 0x000a543f
  .word 0x10000015
  .word 0x00000000
  .word 0x00153c3c
  .word 0x00073c3f
  .word 0x18e0000e
  .word 0x00000000
  .word 0x2ce1000a
  .word 0x1020000b
  .word 0x00000000
  .word 0x00071840
  .word 0x3c020068
  .word 0x244246de
  .word 0x00431021
  .word 0x84420000
  .word 0x24420001
  .word 0x0002543c
  .word 0x000a543f
  .word 0x10000004
  .word 0x00000000
  .word 0x24e2fffb
  .word 0x0002543c
  .word 0x000a543f
  .word 0x86030058
  .word 0x2415ffff
  .word 0x24080064
  .word 0x8e020004
  .word 0x30460200
  .word 0x10c00004
  .word 0x00000000
  .word 0x24020014
  .word 0x1000000c
  .word 0x00000000
  .word 0x0003143c
  .word 0x0002143f
  .word 0x28410032
  .word 0x10200004
  .word 0x00000000
  .word 0x2402000a
  .word 0x10000002
  .word 0x00000000
  .word 0x2402000f
  .word 0x0002143c
  .word 0x0002143f
  .word 0x0002143c
  .word 0x0002143f
  .word 0x0000482d
  .word 0x8f85b730
  .word 0x0003243c
  .word 0x0004243f
  .word 0x00821823
  .word 0x000a143c
  .word 0x0002143f
  .word 0x10000027
  .word 0x00000000
  .word 0x000950c0
  .word 0x01495023
  .word 0x000a5040
  .word 0x00aa5821
  .word 0x956a0000
  .word 0x314a00db
  .word 0x1540001e
  .word 0x00000000
  .word 0x916a0003
  .word 0x000a5c3c
  .word 0x000b5c3f
  .word 0x008b082a
  .word 0x14200018
  .word 0x00000000
  .word 0x0163502a
  .word 0x15400015
  .word 0x00000000
  .word 0x00eb082a
  .word 0x10200009
  .word 0x00000000
  .word 0x0008543c
  .word 0x000a543f
  .word 0x016a082a
  .word 0x10200004
  .word 0x00000000
  .word 0x0009ac3c
  .word 0x0015ac3f
  .word 0x0160402d
  .word 0x0162082a
  .word 0x10200007
  .word 0x00000000
  .word 0x324affff
  .word 0x000a5040
  .word 0x015d5021
  .word 0xa5490180
  .word 0x264a0001
  .word 0x3152ffff
  .word 0x25290001
  .word 0x292a0100
  .word 0x1540ffd8
  .word 0x00000000
  .word 0x00151c3c
  .word 0x00031c3f
  .word 0x2402ffff
  .word 0x10620016
  .word 0x00000000
  .word 0x14c00014
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030064
  .word 0x0043001b
  .word 0x00001010
  .word 0x2c41000a
  .word 0x1020000c
  .word 0x00000000
  .word 0x3242ffff
  .word 0x28420100
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x240504af
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xa7b50180
  .word 0x64120001
  .word 0x3255ffff
  .word 0x1aa00017
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000000f
  .word 0x00000000
  .word 0x00121080
  .word 0x005d1021
  .word 0x24560380
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x0055001b
  .word 0x00001010
  .word 0x00021040
  .word 0x005d1021
  .word 0x84420180
  .word 0xa6c20000
  .word 0x24020014
  .word 0xa6c20002
  .word 0x26520001
  .word 0x2a420005
  .word 0x1440fff0
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x0000202d
  .word 0x2403ffff
  .word 0x10000007
  .word 0x00000000
  .word 0x00041080
  .word 0x005d1021
  .word 0x24420380
  .word 0xa4430000
  .word 0xa4400002
  .word 0x24840001
  .word 0x28820005
  .word 0x1440fff8
  .word 0x00000000
  .word 0x2402ffff
  .word 0xa7a20394
  .word 0xa7a00396
  .word 0xae000018
  .word 0x3c020001
  .word 0x02021021
  .word 0x8c43c0fc
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021880
  .word 0x8f82b7b8
  .word 0x0043a821
  .word 0x0c082770
  .word 0x00000000
  .word 0x0040b02d
  .word 0x0c082774
  .word 0x00000000
  .word 0x7fa200d0
  .word 0x0000902d
  .word 0x8ea20018
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x240504cf
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8ea30018
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x02c21021
  .word 0x7fa200c0
  .word 0x94420008
  .word 0x000210c0
  .word 0x02e21021
  .word 0x7fa200b0
  .word 0x8e020000
  .word 0x24040002
  .word 0x1044001a
  .word 0x00000000
  .word 0x24030001
  .word 0x1043000e
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x8e0200e4
  .word 0x14400004
  .word 0x00000000
  .word 0x0000a02d
  .word 0x1000000e
  .word 0x00000000
  .word 0x0080a02d
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e0200e4
  .word 0x14400004
  .word 0x00000000
  .word 0x0060a02d
  .word 0x10000005
  .word 0x00000000
  .word 0x0080a02d
  .word 0x10000002
  .word 0x00000000
  .word 0x0080a02d
  .word 0x24040002
  .word 0x12840019
  .word 0x00000000
  .word 0x24030001
  .word 0x1283000c
  .word 0x00000000
  .word 0x12800003
  .word 0x00000000
  .word 0x1000013b
  .word 0x00000000
  .word 0xafa003a0
  .word 0x2402002e
  .word 0xa7a20410
  .word 0x0060882d
  .word 0x36520001
  .word 0x10000139
  .word 0x00000000
  .word 0xafa003a0
  .word 0x2402002e
  .word 0xa7a20410
  .word 0xafa003a4
  .word 0x2402000e
  .word 0xa7a20412
  .word 0x0080882d
  .word 0x36520003
  .word 0x1000012f
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030064
  .word 0x0043001b
  .word 0x00001810
  .word 0x7ba200c0
  .word 0x90420001
  .word 0x0062082b
  .word 0x10200002
  .word 0x00000000
  .word 0x36520001
  .word 0x32420001
  .word 0x1040000c
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030064
  .word 0x0043001b
  .word 0x00001810
  .word 0x7ba200c0
  .word 0x90420002
  .word 0x0062082b
  .word 0x10200002
  .word 0x00000000
  .word 0x36520002
  .word 0x24040c60
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400038
  .word 0x00000000
  .word 0x24041423
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400033
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030064
  .word 0x0043001b
  .word 0x0000a810
  .word 0x7ba200c0
  .word 0x90510003
  .word 0x24041319
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400022
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
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
  .word 0x46000842
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010005
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x10000006
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x3071ffff
  .word 0x3222ffff
  .word 0x02a2082b
  .word 0x10200002
  .word 0x00000000
  .word 0x36520004
  .word 0x8e0200e4
  .word 0x1040000b
  .word 0x00000000
  .word 0x8e020004
  .word 0x30422000
  .word 0x10400004
  .word 0x00000000
  .word 0x24150004
  .word 0x1000000d
  .word 0x00000000
  .word 0x24150005
  .word 0x1000000a
  .word 0x00000000
  .word 0x0000a82d
  .word 0x32420001
  .word 0x10400002
  .word 0x00000000
  .word 0x26b50001
  .word 0x32420002
  .word 0x10400002
  .word 0x00000000
  .word 0x26b50001
  .word 0x0000b82d
  .word 0x0000202d
  .word 0x2403ffff
  .word 0x10000008
  .word 0x00000000
  .word 0x00041080
  .word 0x005d1021
  .word 0x84420380
  .word 0x10430006
  .word 0x00000000
  .word 0x26f70001
  .word 0x24840001
  .word 0x28820006
  .word 0x1440fff7
  .word 0x00000000
  .word 0x0000f02d
  .word 0x0000182d
  .word 0x10000006
  .word 0x00000000
  .word 0x00031080
  .word 0x005d1021
  .word 0x94420382
  .word 0x03c2f021
  .word 0x24630001
  .word 0x0077102a
  .word 0x1440fff9
  .word 0x00000000
  .word 0x0000882d
  .word 0x1bc00042
  .word 0x00000000
  .word 0xafa00120
  .word 0x1000003b
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x005e001b
  .word 0x00001810
  .word 0x0000202d
  .word 0x0000b02d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00161080
  .word 0x005d1021
  .word 0x24420380
  .word 0x94420002
  .word 0x00822021
  .word 0x0064102b
  .word 0x14400005
  .word 0x00000000
  .word 0x26d60001
  .word 0x02d7102a
  .word 0x1440fff5
  .word 0x00000000
  .word 0x02d7102a
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x2405059d
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xafa00420
  .word 0x00161080
  .word 0x005d1021
  .word 0x24420380
  .word 0x84420000
  .word 0x3056ffff
  .word 0xa7a20424
  .word 0x27a40420
  .word 0x0c07e5a0
  .word 0x00000000
  .word 0x14400010
  .word 0x00000000
  .word 0x2a220005
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x240505ad
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00111080
  .word 0x005d1021
  .word 0xac4003a0
  .word 0x00111040
  .word 0x005d1021
  .word 0xa4560410
  .word 0x26310001
  .word 0x8fa20120
  .word 0x24420001
  .word 0xafa20120
  .word 0x8fa20120
  .word 0x0055102a
  .word 0x1440ffc3
  .word 0x00000000
  .word 0x8e020004
  .word 0x30422000
  .word 0x10400061
  .word 0x00000000
  .word 0x0000a82d
  .word 0x0000282d
  .word 0x8e040054
  .word 0x1000000e
  .word 0x00000000
  .word 0x00051880
  .word 0x7ba200d0
  .word 0x00431821
  .word 0x90620000
  .word 0x0082102a
  .word 0x14400006
  .word 0x00000000
  .word 0x90620001
  .word 0x0044082a
  .word 0x14200002
  .word 0x00000000
  .word 0x26b50001
  .word 0x24a50001
  .word 0x28a20005
  .word 0x1440fff1
  .word 0x00000000
  .word 0x12a0004a
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x0055001b
  .word 0x00002810
  .word 0x0000b02d
  .word 0x0000302d
  .word 0x10000011
  .word 0x00000000
  .word 0x00061880
  .word 0x7ba200d0
  .word 0x00432021
  .word 0x8e030054
  .word 0x90820000
  .word 0x0062102a
  .word 0x14400008
  .word 0x00000000
  .word 0x90820001
  .word 0x0043082a
  .word 0x14200004
  .word 0x00000000
  .word 0x10b60006
  .word 0x00000000
  .word 0x26d60001
  .word 0x24c60001
  .word 0x28c20005
  .word 0x1440ffee
  .word 0x00000000
  .word 0x02d5102a
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x240505d8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00161880
  .word 0x7ba200d0
  .word 0x0043a821
  .word 0xafa00420
  .word 0x96a20002
  .word 0xa7a20424
  .word 0x27a40420
  .word 0x0c07e5a0
  .word 0x00000000
  .word 0x1440001c
  .word 0x00000000
  .word 0x2a220005
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x240505e3
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00111080
  .word 0x005d1021
  .word 0x244403a0
  .word 0xac800000
  .word 0x96a30002
  .word 0x00111040
  .word 0x005d1021
  .word 0xa4430410
  .word 0x0000102d
  .word 0x34420002
  .word 0xac820000
  .word 0x26310001
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x240505f2
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000a82d
  .word 0x10000017
  .word 0x00000000
  .word 0x00151040
  .word 0x005d1021
  .word 0x94430410
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021840
  .word 0x8f82b730
  .word 0x00431021
  .word 0x90560003
  .word 0x24040001
  .word 0x0c05b11c
  .word 0x00000000
  .word 0x304200ff
  .word 0x0056082a
  .word 0x10200006
  .word 0x00000000
  .word 0x00151080
  .word 0x005d1821
  .word 0x8c6203a0
  .word 0x34420001
  .word 0xac6203a0
  .word 0x26b50001
  .word 0x02b1102a
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00031080
  .word 0x005d1021
  .word 0x8c4203a0
  .word 0x00401027
  .word 0x30420001
  .word 0x10400002
  .word 0x00000000
  .word 0x36520010
  .word 0x24630001
  .word 0x0071102a
  .word 0x1440fff5
  .word 0x00000000
  .word 0x32420010
  .word 0x10400004
  .word 0x00000000
  .word 0x0000a82d
  .word 0x1000000e
  .word 0x00000000
  .word 0x32420004
  .word 0x10400004
  .word 0x00000000
  .word 0x24150001
  .word 0x10000008
  .word 0x00000000
  .word 0x8e0200e4
  .word 0x10400004
  .word 0x00000000
  .word 0x24150002
  .word 0x10000002
  .word 0x00000000
  .word 0x24150003
  .word 0x7ba200c0
  .word 0x94420006
  .word 0x2442ffff
  .word 0x04410006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x24050616
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00151080
  .word 0x00551021
  .word 0x00021840
  .word 0x7ba200e0
  .word 0x00621821
  .word 0x7ba200c0
  .word 0x94420006
  .word 0x00431021
  .word 0x9043ffff
  .word 0x3c020002
  .word 0x02021021
  .word 0xac43fd50
  .word 0x00031080
  .word 0x00431021
  .word 0x00021880
  .word 0x7ba20100
  .word 0x0043a821
  .word 0x0000b02d
  .word 0x0000182d
  .word 0x10000006
  .word 0x00000000
  .word 0x00031040
  .word 0x02a21021
  .word 0x90420003
  .word 0x02c2b021
  .word 0x24630001
  .word 0x28620006
  .word 0x1440fff9
  .word 0x00000000
  .word 0x16c00006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x24050627
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x0056001b
  .word 0x00001810
  .word 0x0000202d
  .word 0x0000b02d
  .word 0x10000009
  .word 0x00000000
  .word 0x00161040
  .word 0x02a21021
  .word 0x90420003
  .word 0x00822021
  .word 0x0064102b
  .word 0x14400005
  .word 0x00000000
  .word 0x26d60001
  .word 0x2ac20006
  .word 0x1440fff6
  .word 0x00000000
  .word 0x2ac20006
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x24050631
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00161040
  .word 0x00551021
  .word 0x90430002
  .word 0x3c020002
  .word 0x02021021
  .word 0xac43fd54
  .word 0x0000b02d
  .word 0x0000182d
  .word 0x10000006
  .word 0x00000000
  .word 0x00031040
  .word 0x02a21021
  .word 0x9042000f
  .word 0x02c2b021
  .word 0x24630001
  .word 0x28620003
  .word 0x1440fff9
  .word 0x00000000
  .word 0x16c00006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x2405063c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x0056001b
  .word 0x00001810
  .word 0x0000202d
  .word 0x0000b02d
  .word 0x10000009
  .word 0x00000000
  .word 0x00161040
  .word 0x02a21021
  .word 0x9042000f
  .word 0x00822021
  .word 0x0064102b
  .word 0x14400005
  .word 0x00000000
  .word 0x26d60001
  .word 0x2ac20003
  .word 0x1440fff6
  .word 0x00000000
  .word 0x2ac20003
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x24050646
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00161040
  .word 0x00551021
  .word 0x9043000e
  .word 0x3c020002
  .word 0x02021021
  .word 0xac43fd58
  .word 0x24030002
  .word 0x1283000e
  .word 0x00000000
  .word 0x24020001
  .word 0x12820008
  .word 0x00000000
  .word 0x12800003
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x24130004
  .word 0x10000012
  .word 0x00000000
  .word 0x0060982d
  .word 0x1000000f
  .word 0x00000000
  .word 0x92b30000
  .word 0x92a20001
  .word 0x14530003
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x92a30001
  .word 0x00731823
  .word 0x24630001
  .word 0x0043001b
  .word 0x00001010
  .word 0x02629821
  .word 0x3c040068
  .word 0x24844718
  .word 0x0260282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x2a610007
  .word 0x14200006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x2405066b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e0200e4
  .word 0xafa20140
  .word 0x2663ffff
  .word 0x0062082a
  .word 0x10200002
  .word 0x00000000
  .word 0xafa30140
  .word 0x8fa20140
  .word 0x02621023
  .word 0x0051082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0040882d
  .word 0xafa00170
  .word 0x0000b02d
  .word 0x100000db
  .word 0x00000000
  .word 0x00161040
  .word 0x00561021
  .word 0x00021080
  .word 0x005d1021
  .word 0x245703c0
  .word 0x0000a82d
  .word 0x8fa20140
  .word 0x02c2082a
  .word 0x1020000a
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844730
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24020002
  .word 0xaee20000
  .word 0x24150001
  .word 0x10000022
  .word 0x00000000
  .word 0x8fa20170
  .word 0x0051082a
  .word 0x1020001e
  .word 0x00000000
  .word 0x0040a02d
  .word 0x10000018
  .word 0x00000000
  .word 0xafa00420
  .word 0x00141040
  .word 0x005d1021
  .word 0x24420410
  .word 0x945e0000
  .word 0xa7be0424
  .word 0x27a40420
  .word 0x0c07e5a0
  .word 0x00000000
  .word 0x1440000c
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844750
  .word 0x0c14896a
  .word 0x00000000
  .word 0xaee00000
  .word 0xa6fe0004
  .word 0x26820001
  .word 0xafa20170
  .word 0x24150001
  .word 0x10000005
  .word 0x00000000
  .word 0x26940001
  .word 0x0291102a
  .word 0x1440ffe7
  .word 0x00000000
  .word 0x16a000a4
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844770
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24020001
  .word 0xaee20000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30540003
  .word 0x3c040068
  .word 0x24844788
  .word 0x0280282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24020003
  .word 0x12820023
  .word 0x00000000
  .word 0x24020002
  .word 0x12820018
  .word 0x00000000
  .word 0x24020001
  .word 0x1282000d
  .word 0x00000000
  .word 0x12800003
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x7ba200b0
  .word 0x90420000
  .word 0xafa20160
  .word 0x7ba200b0
  .word 0x90420001
  .word 0xafa20150
  .word 0x10000017
  .word 0x00000000
  .word 0x7ba200b0
  .word 0x90420006
  .word 0xafa20160
  .word 0x7ba200b0
  .word 0x90420007
  .word 0xafa20150
  .word 0x1000000f
  .word 0x00000000
  .word 0x7ba200b0
  .word 0x90420002
  .word 0xafa20160
  .word 0x7ba200b0
  .word 0x90420003
  .word 0xafa20150
  .word 0x10000007
  .word 0x00000000
  .word 0x7ba200b0
  .word 0x90420004
  .word 0xafa20160
  .word 0x7ba200b0
  .word 0x90420005
  .word 0xafa20150
  .word 0x8fa30160
  .word 0x8fa20150
  .word 0x14620004
  .word 0x00000000
  .word 0x0060a82d
  .word 0x10000050
  .word 0x00000000
  .word 0x24430001
  .word 0x8fa20160
  .word 0x0062f023
  .word 0x27849690
  .word 0x03c0282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x2bc10005
  .word 0x14200006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x240506c4
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xafa00110
  .word 0x0000a82d
  .word 0x001e1880
  .word 0x7ba200f0
  .word 0x00431021
  .word 0xafa20130
  .word 0x1000000b
  .word 0x00000000
  .word 0x8fa20130
  .word 0x00551021
  .word 0x8045fff8
  .word 0x8fa20110
  .word 0x00451021
  .word 0xafa20110
  .word 0x27849698
  .word 0x0c14896a
  .word 0x00000000
  .word 0x26b50001
  .word 0x02be102a
  .word 0x1440fff4
  .word 0x00000000
  .word 0x2784969c
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x8fa30110
  .word 0x0043001b
  .word 0x00001010
  .word 0x7fa200a0
  .word 0x278496a0
  .word 0x70402e28
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0000182d
  .word 0x0000a82d
  .word 0x1000000a
  .word 0x00000000
  .word 0x8fa20130
  .word 0x00551021
  .word 0x8042fff8
  .word 0x00621821
  .word 0x7ba200a0
  .word 0x0043102b
  .word 0x14400005
  .word 0x00000000
  .word 0x26b50001
  .word 0x02be102a
  .word 0x1440fff5
  .word 0x00000000
  .word 0x278496a8
  .word 0x02a0282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x02be102a
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x240506da
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8fa20160
  .word 0x0055a821
  .word 0x24020003
  .word 0x16820010
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0c07e45c
  .word 0x00000000
  .word 0x1440000b
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030003
  .word 0x0043001b
  .word 0x0000a010
  .word 0x16830002
  .word 0x00000000
  .word 0x26940001
  .word 0x1000ff6e
  .word 0x00000000
  .word 0xaef40004
  .word 0xaef50008
  .word 0x26d60001
  .word 0x02d3102a
  .word 0x1440ff24
  .word 0x00000000
  .word 0x0000202d
  .word 0x24030001
  .word 0x1000000a
  .word 0x00000000
  .word 0x00041040
  .word 0x00441021
  .word 0x00021080
  .word 0x005d1021
  .word 0x244203c0
  .word 0x8c420000
  .word 0x14430005
  .word 0x00000000
  .word 0x24840001
  .word 0x0093102a
  .word 0x1440fff5
  .word 0x00000000
  .word 0x14930039
  .word 0x00000000
  .word 0x8fb403c4
  .word 0x8fa403c8
  .word 0x0000282d
  .word 0x1000000d
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00021080
  .word 0x005d1021
  .word 0x244303c0
  .word 0x8c620004
  .word 0x14540008
  .word 0x00000000
  .word 0x8c620008
  .word 0x14440005
  .word 0x00000000
  .word 0x24a50001
  .word 0x00b3102a
  .word 0x1440fff2
  .word 0x00000000
  .word 0x14b30023
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x0053001b
  .word 0x00001810
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x005d1021
  .word 0x244403c0
  .word 0x24020003
  .word 0x12820015
  .word 0x00000000
  .word 0x24030002
  .word 0x1283000e
  .word 0x00000000
  .word 0x24020001
  .word 0x12820008
  .word 0x00000000
  .word 0x12800003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0xac830004
  .word 0x1000000a
  .word 0x00000000
  .word 0xac800004
  .word 0x10000007
  .word 0x00000000
  .word 0x24020001
  .word 0xac820004
  .word 0x10000003
  .word 0x00000000
  .word 0x24020001
  .word 0xac820004
  .word 0x0000a02d
  .word 0x10000019
  .word 0x00000000
  .word 0x00141040
  .word 0x005d1021
  .word 0x94440410
  .word 0x0c094dfc
  .word 0x00000000
  .word 0x00141880
  .word 0x007d1821
  .word 0x246303a0
  .word 0x8c640000
  .word 0x30830001
  .word 0x10600006
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c09545c
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x30830002
  .word 0x10600004
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c09546c
  .word 0x00000000
  .word 0x26940001
  .word 0x0291102a
  .word 0x1440ffe6
  .word 0x00000000
  .word 0x8e0200e4
  .word 0x14400003
  .word 0x00000000
  .word 0x0c083880
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000035
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00021080
  .word 0x005d1021
  .word 0x244503c0
  .word 0x8ca30000
  .word 0x24020002
  .word 0x10620029
  .word 0x00000000
  .word 0x10600029
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x8ca40004
  .word 0x8ca50008
  .word 0x0c094dac
  .word 0x00000000
  .word 0x0040882d
  .word 0x32420004
  .word 0x1040001c
  .word 0x00000000
  .word 0x02401027
  .word 0x30420008
  .word 0x10400007
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c095464
  .word 0x00000000
  .word 0x36520008
  .word 0x10000012
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030064
  .word 0x0043001b
  .word 0x00001810
  .word 0x7ba200c0
  .word 0x90420004
  .word 0x0062082b
  .word 0x10200008
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c095464
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0c094e48
  .word 0x00000000
  .word 0x26940001
  .word 0x0293102a
  .word 0x1440ffca
  .word 0x00000000
  .word 0x0c095384
  .word 0x00000000
  .word 0x24030001
  .word 0xae030008
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
  .word 0x27bd0430
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001f4650
void func_001f4650(KwlnTask *task, const u8 *params)
{
    u8 *work;
    DatPersonaWork *persona;
    s32 count;
    s32 i;
    u32 code;

    work = BR_TASK_WORK(task);
    BR_U32(work, 0x58) = BR_U32(params, 0x0c);
    BR_U32(work, 0x54) = BR_U32(params, 0x10);
    BR_U32(work, 0xc0fc) = BR_U32(params, 4);
    code = BR_U32(params, 4);
    if (code == 0x1d5) goto code_1d5;
    switch (code) {
    case 0x1d4: goto code_1d4;
    default: goto code_other;
    }

code_1d4:
    BR_U32(work, 0) = 0;
    goto done;

code_1d5:
    count = func_001756f0() & 0xffff;
    for (i = 0; i < count; i++) {
        persona = datPersonaGetHeroPersona((s16)i);
        if (persona->id == 0x2e) break;
    }
    if (i == count) {
        BR_U32(work, 0) = 1;
        goto done;
    }
    BR_U32(work, 0) = 2;
    goto done;

code_other:
    BR_U32(work, 0) = 2;

done:
    return;
}

// FUN_001f4750
void func_001f4750(KwlnTask *task)
{
    struct BrCard {
        u32 flags;
        u32 kind;
        u16 id;
        u16 pad;
        u32 value;
    };
    u32 *work = (u32 *)task->workData;
    struct BrCard *card = (struct BrCard *)func_00256030();

    switch (card->kind) {
    case 0:
        if (sflCard002561c0(card) != 0) {
            func_003c7430(2);
            func_0010a4e0(1, 15, 6, 11);
        } else {
            func_003c7bc0(0, func_00173220(card->id));
            if (func_001f5760(card->id) != 0) {
                func_003c7430(3);
            } else {
                func_003c7430(1);
            }
        }
        break;
    case 1:
        func_003c7c20(0, card->value, 0);
        func_003c7bc0(1, D_00684610[BR_U32(card, 8)]);
        func_003c7430(0);
        break;
    case 2:
        func_003c7430(4);
        func_0010a4e0(1, 15, 6, 11);
        break;
    }
    work[1] |= 0x40;
    work[2] = 0x11;
}

// FUN_001f48d0
void func_001f48d0(KwlnTask *task)
{
    u8 *work = BR_TASK_WORK(task);
    sflResRequestGroundArchive();
    BR_U32(work, 4) |= 0x80;
}

// FUN_001f4910
u32 func_001f4910(KwlnTask *task)
{
    return BR_U32(BR_TASK_WORK(task), 4) & 0x80;
}

// FUN_001f4930
void func_001f4930(KwlnTask *task)
{
    u8 *work = BR_TASK_WORK(task);
    func_0023c280();
    BR_U32(work, 4) |= 0x100;
}

// FUN_001f4970
u32 func_001f4970(KwlnTask *task)
{
    return BR_U32(BR_TASK_WORK(task), 4) & 0x100;
}

// FUN_001f4990
u32 func_001f4990(void)
{
    K_ASSERT(sBrCard != NULL, 0xfe);
    if (BR_U32(sBrCard, 0x10000 - 0x3f04) != 0x1d4) {
        return 0;
    }
    return BR_U32(sBrCard, 0xe4) == 0;
}

// FUN_001f4a00
#ifndef PC_BUILD
asm void func_001f4a00(void)
{
  .set noreorder
  .word 0x27bdff20
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
  .word 0x8f82b5ec
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x240500fe
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b5ec
  .word 0x0c082784
  .word 0x00000000
  .word 0x0c0827a0
  .word 0x00000000
  .word 0x0040982d
  .word 0x0c0827a4
  .word 0x00000000
  .word 0x0040902d
  .word 0x8e220004
  .word 0x34420020
  .word 0xae220004
  .word 0x24040001
  .word 0x0c05d200
  .word 0x00000000
  .word 0x0040802d
  .word 0x0200202d
  .word 0x24050004
  .word 0x0c05cd98
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c05ccbc
  .word 0x00000000
  .word 0x3c010001
  .word 0x3421e990
  .word 0x02212021
  .word 0x24050400
  .word 0x0c0965a4
  .word 0x00000000
  .word 0x3c040068
  .word 0x248447a0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x2784969c
  .word 0x0c14896a
  .word 0x00000000
  .word 0x2404000a
  .word 0x0c0966c0
  .word 0x00000000
  .word 0x0c09544c
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c040068
  .word 0x248447d0
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x2784969c
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c020002
  .word 0x02221021
  .word 0x8c43fd54
  .word 0x00031040
  .word 0x00431021
  .word 0x00021040
  .word 0x02629821
  .word 0x3c020002
  .word 0x02221021
  .word 0x8c43fd58
  .word 0x00031040
  .word 0x00431021
  .word 0x02429021
  .word 0x92560000
  .word 0x92570001
  .word 0x44800800
  .word 0x92660000
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
  .word 0x46000840
  .word 0x92650001
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00051842
  .word 0x30a20001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x46000840
  .word 0x92640002
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
  .word 0x46000840
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
  .word 0x46010583
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
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
  .word 0x46010543
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00051842
  .word 0x30a20001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x00000000
  .word 0x00000000
  .word 0x46010503
  .word 0x00000000
  .word 0x00000000
  .word 0x278496b0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x4600b306
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x248447e0
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x4600ab06
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x248447f0
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x4600a306
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844800
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x2784969c
  .word 0x0c14896a
  .word 0x00000000
  .word 0x278496b8
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x248447e0
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x248447f0
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c024040
  .word 0x44826000
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844800
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x2784969c
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c024040
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x4615001a
  .word 0x4616001e
  .word 0x46140b1c
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844810
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x92450002
  .word 0x3c040068
  .word 0x24844820
  .word 0x0c14896a
  .word 0x00000000
  .word 0x92420002
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800560
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800560
  .word 0x4615ad40
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030001
  .word 0x0043001b
  .word 0x00001010
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
  .word 0x4600ad40
  .word 0x92640000
  .word 0xafa400c0
  .word 0x92630002
  .word 0xafa300c4
  .word 0xafa300c8
  .word 0x92620001
  .word 0xafa200cc
  .word 0x14800005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x24020001
  .word 0xafa200c0
  .word 0x0000a82d
  .word 0x0000a02d
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a834
  .word 0x45000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x24050871
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x4600ab01
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844830
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x4480a000
  .word 0x02f6b823
  .word 0x100000d8
  .word 0x00000000
  .word 0x44970000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600a002
  .word 0x46150043
  .word 0x44960000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x44040000
  .word 0x0c096718
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000005
  .word 0x00000000
  .word 0x00031080
  .word 0x005d1021
  .word 0xac4000d0
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fffa
  .word 0x00000000
  .word 0x24030001
  .word 0xafa300d0
  .word 0xafa300dc
  .word 0x2a020003
  .word 0x14400002
  .word 0x00000000
  .word 0xafa300d4
  .word 0x12a00005
  .word 0x00000000
  .word 0x16800003
  .word 0x00000000
  .word 0x24020001
  .word 0xafa200d8
  .word 0x0000902d
  .word 0x0000202d
  .word 0x10000009
  .word 0x00000000
  .word 0x00041080
  .word 0x005d1821
  .word 0x8c6200d0
  .word 0x10400003
  .word 0x00000000
  .word 0x8c6200c0
  .word 0x02429021
  .word 0x24840001
  .word 0x28820004
  .word 0x1440fff6
  .word 0x00000000
  .word 0x16400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844620
  .word 0x2405088b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x0052001b
  .word 0x00002010
  .word 0x0000282d
  .word 0x0000982d
  .word 0x1000000d
  .word 0x00000000
  .word 0x00131080
  .word 0x005d1821
  .word 0x8c6200d0
  .word 0x10400007
  .word 0x00000000
  .word 0x246200c0
  .word 0x8c420000
  .word 0x00a22821
  .word 0x0085102b
  .word 0x14400005
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620004
  .word 0x1440fff2
  .word 0x00000000
  .word 0x24020003
  .word 0x12620063
  .word 0x00000000
  .word 0x24020002
  .word 0x1262004f
  .word 0x00000000
  .word 0x24020001
  .word 0x12620028
  .word 0x00000000
  .word 0x12600003
  .word 0x00000000
  .word 0x10000059
  .word 0x00000000
  .word 0x0000a02d
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x0050001b
  .word 0x00009010
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x2603ffff
  .word 0x0043001b
  .word 0x00001810
  .word 0x0072102b
  .word 0x14400004
  .word 0x00000000
  .word 0x24650001
  .word 0x10000003
  .word 0x00000000
  .word 0x0240282d
  .word 0x0060902d
  .word 0x0240202d
  .word 0x0c096670
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a500
  .word 0x4600a306
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844840
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x10000036
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x2603fffe
  .word 0x0043001b
  .word 0x00001010
  .word 0x24520002
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x02121823
  .word 0x24630001
  .word 0x0043001b
  .word 0x00002010
  .word 0x0240282d
  .word 0x0c096698
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a500
  .word 0x4600a306
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844840
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x00151080
  .word 0x005d1021
  .word 0xac5200a0
  .word 0x26b50001
  .word 0x2642ffff
  .word 0x02028023
  .word 0x10000012
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0966d8
  .word 0x00000000
  .word 0x4600a306
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844840
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x26b5ffff
  .word 0x00151080
  .word 0x005d1021
  .word 0x8c4200a0
  .word 0x2442ffff
  .word 0x02028021
  .word 0x24020002
  .word 0x12620008
  .word 0x00000000
  .word 0x24020001
  .word 0x12620005
  .word 0x00000000
  .word 0x12600003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x0c096704
  .word 0x00000000
  .word 0x0c0966f0
  .word 0x00000000
  .word 0x24020003
  .word 0x12620003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x0c096730
  .word 0x00000000
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a500
  .word 0x4600a306
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844840
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a801
  .word 0x4600a036
  .word 0x4501ff23
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000009
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0966d8
  .word 0x00000000
  .word 0x0c096704
  .word 0x00000000
  .word 0x0c0966f0
  .word 0x00000000
  .word 0x26100001
  .word 0x0215102a
  .word 0x1440fff6
  .word 0x00000000
  .word 0x0c09665c
  .word 0x00000000
  .word 0x0c095fc4
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060006
  .word 0x0080382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x24030007
  .word 0xae230008
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
  .word 0x27bd00e0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001f53a0
void func_001f53a0(void)
{
    u8 *work;
    u32 state;
    K_ASSERT(sBrCard != NULL, 0xfe);
    work = sBrCard;
    state = BR_U32(work, 8);
check_state:
    switch (state) {
    case 21:
    case 17:
        goto state_17_or_21;
    case 24:
        goto state_24;
    default:
        goto invalid_state;
    }

state_17_or_21:
    if ((BR_U32(work, 4) & 0x1000) == 0) goto repeat_as_24;
    func_001f54a0();
    goto done;

repeat_as_24:
    state = 24;
    goto check_state;

state_24:
    K_ASSERT(sBrCard != NULL, 0xfe);
    work = sBrCard;
    func_001f59b0();
    BR_U32(work, 8) = 22;
    goto done;

invalid_state:
    K_ASSERT(false, 0x943);
    goto check_state;

done:
    return;
}

// FUN_001f54a0
void func_001f54a0(void)
{
    u32 *work;
    K_ASSERT(sBrCard != NULL, 0xfe);
    work = (u32 *)sBrCard;
    func_003c7430(0x32);
    func_0010a4e0(1, 15, 6, 12);
    work[2] = 24;
}

// FUN_001f5510
void func_001f5510(void)
{
    u8* work;
    u16 ids[14];
    s32 count;
    s32 i;

    K_ASSERT(sBrCard != NULL, 0xfe);
    work = sBrCard;
    if ((BR_U32(work, 4) & 0x1000) != 0) {
        datSetFlag(0x1411, 1);
    }
    sflResult001f9770(ids, &count);
    for (i = 0; i < count; i++) {
        func_00174b40(ids[i]);
    }
    BR_U32(work, 8) = 0;
    BR_U32(work, 4) &= ~1u;
}

// FUN_001f55e0
void func_001f55e0(void)
{
    u32 *work;
    K_ASSERT(sBrCard != NULL, 0xfe);
    work = (u32 *)sBrCard;
    func_00255f80();
    func_0025a7d0();
    sflPanel0023f3e0();
    func_0025b4f0();
    work[2] = 11;
}

// FUN_001f5650
void func_001f5650(void)
{
    u32 *work;
    K_ASSERT(sBrCard != NULL, 0xfe);
    work = (u32 *)sBrCard;
    sflCard00259310();
    work[2] = 25;
}

// FUN_001f56b0
void func_001f56b0(void)
{
    u32 current = func_0016f380(0x39);
    u32 limit = func_0016f380(0x38);
    if (current == limit) {
        current = 24;
        current += RpRandom() % 5;
        func_0016f3e0(0x39, 0);
        func_0016f3e0(0x38, current);
    } else {
        func_0016f3e0(0x39, func_0016f380(0x39) + 1);
    }
}

// FUN_001f5760
u32 func_001f5760(u16 personaId)
{
    s32 i;
    s32 count = func_001756f0() & 0xffff;
    u32 target;
    i = 0;
    target = personaId & 0xffff;
    for (; i < count; i++) {
        DatPersonaWork *p = datPersonaGetHeroPersona((s16)i);
        K_ASSERT(p != NULL, 0x99c);
        if (target == p->id) {
            break;
        }
    }
    return i < count;
}

// FUN_001f5810
u32 func_001f5810(KwlnTask* task)
{
    u8* card;
    u32 result;

    K_ASSERT(sBrCard != NULL, 0xfe);
    card = sBrCard;
    if ((BR_U32(BR_TASK_WORK(task), 4) & 0x80) != 0) {
        result = 0;
    } else if (BR_U32(card, 8) == 1) {
        result = 0;
    } else {
        if (sflResIsBaseArchivePending() != 0) goto resources_busy;
        if (func_00254f20() != 0) goto resources_busy;
        if (sflResIsEffectArchivePending() != 0) goto resources_busy;
        if (sflResIsPersonaChangeSpritePending() == 0) goto resources_ready;

resources_busy:
        result = 0;
        goto resources_done;

resources_ready:
        result = 1;

resources_done:
        ;
    }
    return result;
}






/* Retail reconstruction spans 0x001f6630-0x001f6a5c: reward reset, card setup, and two indexed animation passes. */







