#include "Main/Battle/Cmd/bcm_main.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"
#include "Main/Battle/Panel/bp_root.h"
#include "rw/rwplcore.h"
#include "Main/Battle/Cmd/bpp_main.h"
#include "Main/Battle/Data/datPersona.h"
#include "Main/g_data.h"

u32 func_002519d0(void);
u32 func_00251e80(void);
u32 bcmPanel0022b4e0(void);
u32 bcmPanel0022b530(void);
void bcmPanel00222870(void);
void bcmPanel002226f0(u32);
void bcmPanel002227b0(u32);
void func_002bf850(void);
void func_002bf8b0(void);
void func_002bf8e0(void);
void func_002bf910(void);
void func_002bf880(void);
void func_002bf940(void);
u32 func_002d1a70(void);
void bpPersonaLoad(u32);
void func_00208630(void);
u32 basRequestAnalyze(u32);
u32 basIsAnalyzePending(void);
u32 func_0021b6f0(void);
u32 func_0021b740(void);
u32 func_0021b7c0(void);
void func_002dbac0(void);
u32 func_003c7990(u32);
u32 func_003c7850(void);
u32 func_003c7650(u32);
u32 func_003c7610(u32);
void func_003c77a0(void);
u32 func_003c72d0(void);
u32 func_003c7430(u32);
u32 func_003c74e0(u32);
void func_0024a260(void*);
u32 func_0024a6e0(u32);
u32 func_0024a750(void);
u32 bpPersonaIsLoading(void);
void bpPersonaDestroy(void);
void bpPersonaSetPersona(u32);
void bcmDestroyOwnedResource();
void FUN_003b0170();
extern u8* DAT_007ce3f8;
extern u32 D_00684F00[];
extern u8 DAT_00684efc[];
extern u32 DAT_007e094e;
extern u32 DAT_007e0952;
extern u32 DAT_007e095a;
#pragma alias DAT_007e094e_abs DAT_007e094e
#pragma alias DAT_007e0952_abs DAT_007e0952
#pragma alias DAT_007e095a_abs DAT_007e095a
extern u8 DAT_007e094e_abs[];
extern u8 DAT_007e0952_abs[];
extern u8 DAT_007e095a_abs[];
extern u8 gp0xffff972c;
extern u8* gp0xffffb708;
u32 FUN_002055F0(u32 id);
void FUN_00207B50_y2(void);
void FUN_00207BA0_y2(void);
void FUN_002082C0(void* context);
void FUN_00208360(void);
void FUN_00208570(void* descriptor);
void FUN_002085E0(void);
void FUN_00208790(void);
void FUN_00208860(u16 id);
void FUN_002094F0(void);
void FUN_0020FC40_y2(void);
void FUN_0020FC90(void);
void FUN_0020FE30(void*, u32, void*);
void FUN_00222A60(void);
void FUN_00222B90(void);
void FUN_00222D60(void);
void FUN_00229300(void);
void FUN_00224660(void);
void FUN_00224860(void);
void FUN_0022BF60(void);
void FUN_0022C0E0(void);
void FUN_002230E0(void);
void FUN_002254A0(void);
void FUN_002255F0(void);
void FUN_00225670(void);
void FUN_002DB450(u32);
void FUN_002DB480(void);
void FUN_002DB9F0(u32, u32);
void FUN_002DBA80(u32);
void FUN_003A5540(u32, u32, s32, u32, u32, void*);
void FUN_003B0170(u32);
void FUN_003B0970(u32, u32, s32, u32, u32, u32, u32, u32);
void FUN_003B0D70(u32, u32, u32);
void FUN_003B0E20(u32, s32);
void FUN_003B0E70(u32);
void FUN_003B0E90(u32);
void FUN_003B2C60(u32);
void FUN_003C72D0(void);
void FUN_003C7430(u32);
void FUN_003C74E0(u32);
void FUN_003C7D60(u32);
u32 FUN_0030C0C0(void);
u32 FUN_003086F0(u32, u16);
u32 FUN_003083F0(u32, u16);
u32 FUN_0030BB40(u16);
u32 FUN_0030BC20(u16);
u32 FUN_00173220(u16);
u32 FUN_001775A0(u32);
u32 FUN_00177790(u32);
u32 FUN_001756F0(void);
u32 FUN_0016F380(u32);
void FUN_0016F3E0(u32, u32);
u32 FUN_0016F190_y2(u32);
void FUN_005225a8_y2(const char*, ...);
void FUN_0021B670(u32);
void FUN_0021C720(void);
u32 FUN_0022D5550(void);
u32 FUN_002D5550_y2(void);
u32 FUN_001FF430_y2(u32);
void FUN_002C0A50(u32, u32);
void datSetAiTactic(s16, s16);
u32 datGetScenarioMode(void);
void datSetScenarioMode(u32);
u32 datGetFlag(s32);
int printf(const char*, ...);
void* func_0021f410_y2(void);
void func_00221b60_y2(void);
void func_0021f140(void);
void func_0021f150(u32);
void func_0022c0a0(void);
void func_0022c0e0(void);
void func_0022c1d0(void);
void func_002230e0(void);
void func_00224660(void);
void func_00224860(void);
void func_002254a0(void);
void func_002255f0(void);
void func_00225670(void);
void func_002082c0(u32);
void func_00208360(void);
void func_00208570(void*);
void func_002085e0(void);
void func_00208790(void);
void func_00208860_y2(u16);
void func_0022bf60(void);
void func_0023c0a0(void);
void func_003b0170(u32);
u32 func_003b0970(u32, ...);
void func_003b0d70(u32, ...);
void func_003b0e20(u32, s32);
void func_003b0e70(u32);
void func_003b0e90(u32);
void func_003b2c60(u32, ...);
u32 func_003a5540(u32, ...);
#pragma alias bpRoot_003a5540_typed func_003a5540
extern u32 bpRoot_003a5540_typed(u32 p1, u32 p2, s32 p3, f32 angle,
                                  u32 p4, u32 p5, void* p6, u32 p7);
extern u32 D_007CC418;
extern u32 DAT_007cc414;
void* func_0030c0c0(void);
u32 func_003086f0(u32, u16);
u32 func_003083f0(u32, u16);
u32 func_0030bb40(u16);
u32 func_0030bc20(u16);
u16 func_00170760(s16, s16);
const char* func_00171110(s16, s16);
u32 func_00173220(u16);
u32 func_001775a0(u32, ...);
u32 func_00177790(s16);
u32 func_001756f0(void);
u32 func_002db450(u32);
u32 func_002db480(void);
u32 func_002db9f0(u32, u32);
u32 func_002dba80(u32);
u32 func_002d5550(void);
u32 func_003c7d60(u32);
void FUN_0010a4e0(u32, u32, u32, u32);
u32 FUN_0017d2e0(u16);
u32 func_00249420(u16, u16, u16);
void FUN_0025d760();
void FUN_001FDDA0(void);
u32 FUN_001FDDF0(void);
void FUN_001FDF10(void*);
u32 FUN_001FE220(void);
void FUN_001FE650(void*);
void FUN_001FE810(s32);
void FUN_001FEAB0(void);
u32 FUN_001FEEC0(void);
void FUN_001FEF90(u32);
void FUN_001FF160(u32);
void FUN_001FF370(void);
void FUN_001FF390(void);
void FUN_001FF3B0(void);
void FUN_001FF3D0(void);
void FUN_001FF3F0(void);
void FUN_001FF410(void);
u32 FUN_001FF630(u32);
void FUN_001ff890_y2(void);
void FUN_001FFC60_y2(void);
void FUN_001FFF40_y2(void);
static KwlnTask* sBtlPanelTask; // 007ce2e4
void* FUN_001fd890(KwlnTask*);
void* FUN_001fdac0(KwlnTask*);
void FUN_00208ad0(void*);
void FUN_00201730_y2(void*);
void bppMain0020ed50(u32*);
void FUN_0020fe20(void*);
void FUN_0021b650(void*);
void FUN_0021b920(void*);
void FUN_0023f480(void*);
void FUN_00242c40(void*);
void FUN_00248490(void*);
void FUN_00249240(void*);
void FUN_0024a6c0(void*);
void FUN_0024c100(void*);
void FUN_00251050(void*);
void FUN_00251a70(void*);
void FUN_00251f20(void*);
void FUN_00252e60(void*);
void FUN_0025bdf0(void*);
void FUN_0025cf00(void*);
void FUN_00266eb0(void*);
void FUN_0027b5b0(void*);
void bppMain0020ed70(void);
void FUN_0025cf20(void);
void bpRootDestroyTask(KwlnTask*);
void FUN_00266f00();
void FUN_0025cf10();
void FUN_0025be00();
void FUN_00252e80();
void FUN_00251f30();
void FUN_002484a0();
void FUN_00251060();
void FUN_0021b660();
void basShutdown(void); // bas_main.c
void FUN_00249250();
void FUN_00242c60();
void FUN_0023f500();
void FUN_00208b20();
void FUN_00201780();
void bppMain0020edc0();
void FUN_00215770();
void FUN_0021bb60();
void FUN_0027b5d0();
void FUN_0021b940();
void FUN_00215a30();
void FUN_00201d10();
void FUN_00205410();
void FUN_00244a00();
void FUN_002086d0();
void FUN_0020fce0();
void FUN_00208680();
void FUN_0020fe30();
void FUN_002449d0();
void FUN_00215a40();
void FUN_00248500(void* destination);
void FUN_00245e00();
void FUN_00248580(void* destination, void* origin);
void FUN_0021bb00();
void FUN_0020fd30();
void FUN_00210d60();
void FUN_00201c30();
void bppMain0020fc40_y2();
void FUN_002085e0();
void FUN_00208b30();
void FUN_0021b830();
void basClearAnalyzePending(void); // bas_main.c
void FUN_0021b8b0();
void FUN_00201e00();
void bppMain0020fc90_y2();
void FUN_00208630_y2();
void FUN_002094f0();
void FUN_0024cf00(s32 mode);
void bppMain0020f3b0();
void bppMain0020f570();
void FUN_00244120(u32 param_1);
void FUN_00244a40(u32 param_1);
void FUN_00249180();
void FUN_0021bb50();
u32 baiMainIsActive(void);
void FUN_00207bf0();
void FUN_002079c0();
void FUN_00207a10();
void FUN_00207c40();
void FUN_00207a60();
void FUN_00207c90();
void FUN_00207ab0();
void FUN_00207ce0();
void FUN_00207d30();
void FUN_00207b00();
void FUN_00207b50();
void FUN_00207d80();
void FUN_00207ba0();
void FUN_00207dd0();
void FUN_0025c190();
void FUN_0025d800();
void FUN_00242b80();
void FUN_00251f40(s32 param_1);
void FUN_00252e90();
void FUN_00252ee0();
void FUN_0025c190();
void FUN_0025c1e0();
void FUN_0025c110();
void FUN_0025d850();
void FUN_00244e10();
void FUN_00208010();
void FUN_00242ae0();
u32 bpMisc001ff500(u32);
u32 bpMisc001ff740_y2(void);
void bcmPanel00222a60(void);
void bcmPanel00222b90(void);
void bcmPanel00222930(void);
void bcmPanel00222d60(void);
void bcmPanel0022bf60(void);
void FUN_00222d60(void);
void func_0021f0c0_y2(void*);
void func_0021bcb0(void);
void func_0024c110(void);
u32 bpRushUpdate(void);
u32 bpRes0021bab0(void);
void bpd00253410(void);
void func_00210d90(void*);
void func_002510d0(void);
void func_00251a80(void);
void bppMain0020edf0(void);
u32 baiMainIsActive(void);
void func_0021c7e0(void);
void bpo00252060(void);
void func_002492b0(void);
void func_00248620(void);
void func_00242cc0(void);
void func_0025c220(void);
void bpPersonaUpdate(void);
void func_0027b610(void);
u32 func_00249130(void);
void func_00245e50(void);
void func_00213e80(void*);
void func_00252f30(void);
void func_00209540(void);
void func_0023f540(void);
void func_0024cca0(void);
void func_002095a0(void);
void func_002532b0(void);
void func_0020f260(void);
void func_00243150(void);
void func_00241910(void);
void func_00248bb0(void);
void func_002520f0(void);
void func_0025c9c0(void);
void func_0025d470(void);
void func_0027b880(void);
u32 func_00208720(void);
void* btlUnitFindFromId(u16);
u32 func_00242a60(void);
void* func_00242260(void);
void func_00242320(void*, u32);
void func_00242a50(void*, u32);
void func_00242600(void*, u32);
void func_00242720(void*, u32);
void func_00242a30(void*);
void func_00242c20(void*, u32, u32);
void func_00242540(void*);
void func_002453d0(s32);
void func_002441b0(s32);
u32 func_00207f70(void);
u32 func_00207fc0(void);
u32 func_00208010_y2(void);
u32 func_00208050_y2(void);
u32 func_00208130_y2(void);
void func_0025be60(u32, u32, u32);
void bpRush0025d7b0(void);
void func_0020fd80(void);
void func_0020fdd0(void);
void func_0027b9f0(void);
void func_0027ba90(void);
void func_0027bae0(void);
#include "Battle/battle.h"
#pragma alias bcmStartTacticsTutorial FUN_00207e20
#pragma alias bcmStartBasicTutorial FUN_00207f10
#pragma alias bcmIsCurrentUnitTutorialPending FUN_00208010
#pragma alias bcmIsTacticsTutorialPending FUN_00208050
#pragma alias bcmCanStartBasicTutorial FUN_00208130
#pragma alias bcmStoreOwnedResource FUN_002082c0
#pragma alias bcmDestroyOwnedResource FUN_00208360
#pragma alias bcmDestroyOwnedResourceImpl FUN_002083d0
#pragma alias bcmFinishPanelTransition FUN_00208460
#pragma alias bcmInitCommandPanelEntries FUN_00208570
#pragma alias bcmIsCommandInputReady FUN_00208720
#pragma alias bcmPlayRandomPartyVoice FUN_00208790
extern u8* gBcmWork;
extern void func_002518b0(u32 mode);
extern void func_00251e10(void);
extern void bppMain0020fc40(void);
extern u32 func_00249650(u16 id);
extern u32 datGetFlag_y2(u16 id);
extern u32 bpMisc001ff7f0(u32 id);
extern u32 datGetBadStatusNoDown(s16 unitId);
extern void bcmPanel00222ed0(void);
extern void func_003b0170_y2(u32 value);
extern u32 datCalcIsDead(void* calc, u32 mode);
extern u32 func_002ddc10(u32 unitId);
extern void func_002ddba0(u32 id);
extern u32 RpRandom(void);
static void bcmDestroyOwnedResourceImpl(void);
static void func_00208860(u32 unitId);
#define BCM_WORD(off) (*(u32*)((u8*)gBcmWork + (off)))
typedef struct BcmCommandEntry
{
    u32 flags;
    u32 type;
    u32 icon;
    u16 id;
} BcmCommandEntry;


#pragma alias bppMain0020fc40_y2 bppMain0020fc40
#pragma alias func_00208860_y2 func_00208860
#pragma alias datGetFlag_y2 datGetFlag_y2
#pragma alias func_003b0170_y2 func_003b0170_y2


#pragma alias FUN_002055F0_y2 FUN_002055F0
#pragma alias FUN_002085E0_y2 FUN_002085E0
#pragma alias FUN_0016F380_y2 FUN_0016F380
#pragma alias FUN_0016F3E0_y2 FUN_0016F3E0
#pragma alias FUN_0021B670_y2 FUN_0021B670
#pragma alias datSetAiTactic_y2 datSetAiTactic
#pragma alias datGetFlag_y2 datGetFlag
#pragma alias printf_y2 printf
#pragma alias FUN_0017d2e0_y2 FUN_0017d2e0
#pragma alias FUN_00207B50_y2 FUN_00207B50_y2
#pragma alias FUN_00207BA0_y2 FUN_00207BA0_y2
#pragma alias FUN_0020FC40_y2 FUN_0020FC40_y2
#pragma alias FUN_0016F190_y2 FUN_0016F190_y2
#pragma alias FUN_005225a8_y2 FUN_005225a8_y2
#pragma alias FUN_002D5550_y2 FUN_002D5550_y2
#pragma alias FUN_001FF430_y2 FUN_001FF430_y2
#pragma alias func_0021f410_y2 func_0021f410_y2
#pragma alias func_00221b60_y2 func_00221b60_y2
#pragma alias FUN_001ff890_y2 FUN_001ff890_y2
#pragma alias FUN_001FFC60_y2 FUN_001FFC60_y2
#pragma alias FUN_001FFF40_y2 FUN_001FFF40_y2
#pragma alias FUN_00201730_y2 FUN_00201730_y2
#pragma alias bppMain0020fc90_y2 bppMain0020fc90_y2
#pragma alias FUN_00208630_y2 FUN_00208630_y2
#pragma alias bpMisc001ff740_y2 bpMisc001ff740
#pragma alias func_0021f0c0_y2 func_0021f0c0_y2
#pragma alias func_00208010_y2 func_00208010_y2
#pragma alias func_00208050_y2 func_00208050_y2
#pragma alias func_00208130_y2 func_00208130_y2
extern u32 datGetFlag_y2(u16 id);

typedef struct PanelSkillRow
{
    u32 flags;
    u32 handle;
    u32 type;
    u32 icon;
} PanelSkillRow;
#pragma alias bcmIsItemUsable FUN_00207930
#pragma alias bcmDestroyOwnedResourceCallback FUN_00201ad0
#pragma alias bcmDestroyCommandResources FUN_00203360


u8* gBcmWork; // 007ce2e8
extern u8* DAT_007ce3ec;
#pragma alias DAT_007ce3ec_abs DAT_007ce3ec
extern u8 DAT_007ce3ec_abs[];

s32 FUN_0017d2e0_y2();
void FUN_00201A50(void);
u32 FUN_00201AF0(void);
void FUN_00201EF0(void);
void FUN_00202010(void);
void FUN_00202830(void);
u32 bpe00249600(void);
void* func_0021c5d0(void);
void* func_0021c640(void);
void* func_0021c6b0(void);
u32 itfMesMngInitialize(void*);
void itfMesMngDestroyHandle(u32);
void func_00207e20(void);
void func_00207f10(void);
void func_002db420(s32);
void func_002db650(u32);
void func_002db2a0(s32);
void func_0021f3c0(void);
void bpRushRequestHide(void);
void bpRushClearHideRequest(void);
void func_002083d0(void);
void FUN_00201880(void);
void FUN_002024B0(void);
void FUN_002025E0(void);
void FUN_00202A10(void);
void FUN_00203030(void);
void FUN_002031C0(void);
void FUN_00203410(void);
void FUN_00203990(void);
void FUN_00203C30(void);
void FUN_00203DE0(void);
void FUN_00204760(void);
void FUN_00205000(void);
void FUN_002057C0(void);
void FUN_00205D60(void);
void FUN_00206170(void);
void FUN_00206310(void);
void FUN_00206740(void);
void FUN_00206E40(void);
void FUN_00206EB0(void);
void FUN_00206F70(void);
void FUN_00207010(void);
void FUN_00207340(void);
void FUN_002078A0(void);
u32 FUN_00207960(u32 id);
void FUN_002079C0(void);
void FUN_00207A60(void);
void FUN_00207AB0(void);
void FUN_00207B00(void);
void FUN_00202BC0(void);
void FUN_00202C90(void);
void FUN_00202D70(void);
void FUN_00203630(void);
void FUN_00203760(void);
void FUN_00203850(void);
void FUN_00203B70(void);
void FUN_00204000(void);
void FUN_00204480(void);
void FUN_00204AF0(void);
void FUN_00204BE0(void);
void FUN_00204CC0(void);
u32 FUN_002053C0(void);
void FUN_00205410(void);
u32 FUN_002054C0(void);
u16 FUN_00205500(void);
u16 FUN_00205550(void);
u16 FUN_002055A0(void);
u32 FUN_00205650(s32 id);
void FUN_002056A0(void);
void FUN_00205700(void);
void FUN_00205760(void);
void FUN_002060B0(void);
void FUN_002063F0(void);
void FUN_002065A0(void);
static u8* panelWork(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    return gBcmWork;
}

static inline u32 panelWork32(u32 offset)
{
    return *(u32*)(gBcmWork + offset);
}

static inline void panelSetWork32(u32 offset, u32 value)
{
    *(u32*)(gBcmWork + offset) = value;
}

static inline u16 panelWork16(u32 offset)
{
    return *(u16*)(gBcmWork + offset);
}

static inline void panelSetWork16(u32 offset, u16 value)
{
    *(u16*)(gBcmWork + offset) = value;
}

void* func_00170e90(s16);
static u32 panelDataType(u16 id)
{
    void* record;

    record = func_00170e90((s16)id);
    if (record == NULL)
    {
        return 0;
    }
    return ((u8*)record)[3];
}
u32 FUN_002055F0_y2(u32);
u32 func_003c7430(u32);
u32 func_003c74e0(u32);
static u32 panelSkillAccept(u16 id)
{
    return FUN_002055F0_y2(id);
}

static PanelSkillRow* panelSkillRow(u32 index)
{
    return (PanelSkillRow*)(panelWork() + 0x4a90 + index * 0x2d0);
}

static PanelSkillRow* panelItemRow(u32 index)
{
    return (PanelSkillRow*)(panelWork() + 0x4a90 + index * 0x310);
}

static void panelTargetEffect(u32 first, u32 second)
{
    func_003c7430(first);
    func_003c74e0(second);
}

#pragma alias bpRoot_0021c720_ret func_0021c720
u32 bpRoot_0021c720_ret(void);
#pragma alias bpRoot_003c72d0_arg func_003c72d0
u32 bpRoot_003c72d0_arg(u32);

// Retail state-3 persona selection also handles input-driven left/right
// navigation and invokes bpPersona00267070 before the transition effect.
// The state-1/2/4 branches use the same input flag register as retail;
// these paths are reconstructed directly even though MWCC lays out the
// resulting switch differently from the retail object.

/* W420 verified: direct work indexing, D_00684F00-relative strings, and corrected flag masks nd619/976B -> nd0/964B, window976B; rate 63.42% -> 0%. */
// W419 negative probe: FUN_001FF890 direct gBcmWork flag pointer nd521/988B, window976B (over window), rate52.73%; reverted.
// FUN_001FF890
void FUN_001ff890(void)
{
    u32* work;
    void* message;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = (u32*)gBcmWork;
    if (work[0x77a0 / 4] & 1)
        FUN_005225a8((const char*)D_00684F00 + 0x58);
    else
        FUN_005225a8((const char*)D_00684F00 + 0x68);
    if (work[0x77a0 / 4] & 2)
        FUN_005225a8((const char*)D_00684F00 + 0x78);
    else
        FUN_005225a8((const char*)D_00684F00 + 0x88);
    if (work[0x77a0 / 4] & 4)
        FUN_005225a8((const char*)D_00684F00 + 0x98);
    else
        FUN_005225a8((const char*)D_00684F00 + 0xa8);
    if (work[0x77a0 / 4] & 8)
        FUN_005225a8((const char*)D_00684F00 + 0xb8);
    else
        FUN_005225a8((const char*)D_00684F00 + 0xc8);
    if (work[0x77a0 / 4] & 0x10)
        FUN_005225a8((const char*)D_00684F00 + 0xd8);
    else
        FUN_005225a8((const char*)D_00684F00 + 0xe8);
    if (work[0x77a0 / 4] & 0x20)
        FUN_005225a8((const char*)D_00684F00 + 0xf8);
    else
        FUN_005225a8((const char*)D_00684F00 + 0x108);
    if (work[0x77a0 / 4] & 0x40)
        FUN_005225a8((const char*)D_00684F00 + 0x120);
    else
        FUN_005225a8((const char*)D_00684F00 + 0x140);
    work[0] &= ~0x20u;
    work[0] &= ~1u;
    work[0] &= ~0x20000000u;
    work[0] &= ~0x02000000u;
    work[0] &= ~0x04000000u;
    work[0] &= ~0x80u;
    work[0] &= ~0x100u;
    work[0] &= ~0x200u;
    work[0] &= ~0x400u;
    work[1] = 0;
    work[3] = 0;
    if (datGetFlag_y2(0x186))
    {
        work[0x24 / 4] = FUN_0016F380_y2(0x30);
    }
    else
    {
        work[0x24 / 4] = 0;
    }
    message = func_0021c5d0();
    work[0x7794 / 4] = itfMesMngInitialize(message);
    message = func_0021c640();
    work[0x7790 / 4] = itfMesMngInitialize(message);
    message = func_0021c6b0();
    work[0x7798 / 4] = itfMesMngInitialize(message);
    work[0x77a4 / 4] = 0;
    FUN_002056A0();
    FUN_00201EF0();
    FUN_00202C90();
    FUN_00204000();
    FUN_00203760();
    FUN_00205700();
    FUN_00205760();
    work[2] = 0;
    if (func_00208010()) work[2] |= 1;
    if (func_00208050()) work[2] |= 2;
    if (func_00208130()) work[2] |= 4;
    if (work[2] & 2)
    {
        func_00207e20();
    }
    else if (work[2] & 4)
    {
        func_00207f10();
    }
    else if (work[2] & 1)
    {
        FUN_002078A0();
    }
    else
    {
        FUN_00201A50();
    }
    bpRushRequestHide();
}


// W419 negative probe: FUN_001FFC60 declaration permutations (work/record/i) all stayed nd295/676B; reverted.
// FUN_001FFC60
asm void FUN_001FFC60(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82b5f8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050164
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b5f8
  .word 0x0000902d
  .word 0x10000021
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x000210c0
  .word 0x02221021
  .word 0x245002e0
  .word 0x8c4202e0
  .word 0x00401027
  .word 0x30420001
  .word 0x14400016
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x8604000c
  .word 0x86050010
  .word 0x0c05b6b4
  .word 0x00000000
  .word 0x8e030010
  .word 0x24020007
  .word 0x14620008
  .word 0x00000000
  .word 0x8e040008
  .word 0x0c07fd0c
  .word 0x00000000
  .word 0x0040202d
  .word 0x8e050014
  .word 0x0c0b0294
  .word 0x00000000
  .word 0x26520001
  .word 0x8e2203a8
  .word 0x0242102a
  .word 0x1440ffdd
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c020002
  .word 0x00621024
  .word 0x1040000a
  .word 0x00000000
  .word 0x00601027
  .word 0x30424000
  .word 0x1040000f
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0b6d08
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x30624000
  .word 0x10400007
  .word 0x00000000
  .word 0x8e247654
  .word 0x0c0b6d94
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0b6ca8
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c020004
  .word 0x00621024
  .word 0x1040000a
  .word 0x00000000
  .word 0x00601027
  .word 0x30428000
  .word 0x1040000c
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0b6d08
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x30628000
  .word 0x10400004
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0b6ca8
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c020008
  .word 0x00621024
  .word 0x1040000b
  .word 0x00000000
  .word 0x00601827
  .word 0x3c020001
  .word 0x00621024
  .word 0x1040000d
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0b6d08
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x3c020001
  .word 0x00621024
  .word 0x10400004
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0b6ca8
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c020080
  .word 0x00621024
  .word 0x10400003
  .word 0x00000000
  .word 0x0c0820f4
  .word 0x00000000
  .word 0x8e220000
  .word 0x30422000
  .word 0x10400003
  .word 0x00000000
  .word 0x0c081bac
  .word 0x00000000
  .word 0x8e220000
  .word 0x30421000
  .word 0x10400003
  .word 0x00000000
  .word 0x0c0818c4
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420002
  .word 0x10400003
  .word 0x00000000
  .word 0x0c080af0
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420004
  .word 0x10400003
  .word 0x00000000
  .word 0x0c080cd8
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420008
  .word 0x10400003
  .word 0x00000000
  .word 0x0c080edc
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420010
  .word 0x10400003
  .word 0x00000000
  .word 0x0c0812f8
  .word 0x00000000
  .word 0x8e247790
  .word 0x0c0e8c18
  .word 0x00000000
  .word 0x8e247794
  .word 0x0c0e8c18
  .word 0x00000000
  .word 0x8e247798
  .word 0x0c0e8c18
  .word 0x00000000
  .word 0x0c087cf0
  .word 0x00000000
  .word 0x0c0975c4
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


static inline u16 panelRootInputFlags(void)
{
    return *(u16*)DAT_007e094e_abs;
}

static inline u16 panelRootTargetFlags(void)
{
    return *(u16*)DAT_007e0952_abs;
}

// FUN_001FFF40
asm void FUN_001FFF40(void)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f83b5f8
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050164
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f92b5f8
  .word 0x8f91b6fc
  .word 0x8e440000
  .word 0x3c030800
  .word 0x00831824
  .word 0x14600005
  .word 0x00000000
  .word 0x3c031000
  .word 0x00831824
  .word 0x10600008
  .word 0x00000000
  .word 0x8e4377a4
  .word 0x1860000b
  .word 0x00000000
  .word 0x2463ffff
  .word 0xae4377a4
  .word 0x10000007
  .word 0x00000000
  .word 0x8e4377a4
  .word 0x28610010
  .word 0x10200003
  .word 0x00000000
  .word 0x24630001
  .word 0xae4377a4
  .word 0xc64077a4
  .word 0x46800060
  .word 0x3c034180
  .word 0x44830000
  .word 0x00000000
  .word 0x46000803
  .word 0xe6407644
  .word 0x0000802d
  .word 0x8e430004
  .word 0x30630001
  .word 0x1060000b
  .word 0x00000000
  .word 0x0c08ad38
  .word 0x00000000
  .word 0x14400007
  .word 0x00000000
  .word 0x0c080af0
  .word 0x00000000
  .word 0x8e440004
  .word 0x2403fffe
  .word 0x00831824
  .word 0xae430004
  .word 0x8e430004
  .word 0x30630002
  .word 0x1060000b
  .word 0x00000000
  .word 0x0c08ad38
  .word 0x00000000
  .word 0x14400007
  .word 0x00000000
  .word 0x0c080cd8
  .word 0x00000000
  .word 0x8e440004
  .word 0x2403fffd
  .word 0x00831824
  .word 0xae430004
  .word 0x8e430004
  .word 0x30630004
  .word 0x1060000b
  .word 0x00000000
  .word 0x0c08ad38
  .word 0x00000000
  .word 0x14400007
  .word 0x00000000
  .word 0x0c0812f8
  .word 0x00000000
  .word 0x8e440004
  .word 0x2403fffb
  .word 0x00831824
  .word 0xae430004
  .word 0x8e430010
  .word 0x2c61000c
  .word 0x1020054c
  .word 0x00000000
  .word 0x3c04007b
  .word 0x24847300
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x0c094674
  .word 0x00000000
  .word 0x14400541
  .word 0x00000000
  .word 0x0c083f24
  .word 0x00000000
  .word 0x8e430008
  .word 0x30620004
  .word 0x10400005
  .word 0x00000000
  .word 0x0c081fc4
  .word 0x00000000
  .word 0x10000537
  .word 0x00000000
  .word 0x30620001
  .word 0x10400005
  .word 0x00000000
  .word 0x0c081e28
  .word 0x00000000
  .word 0x10000530
  .word 0x00000000
  .word 0x0c080694
  .word 0x00000000
  .word 0x1000052c
  .word 0x00000000
  .word 0x0c0947a0
  .word 0x00000000
  .word 0x14400528
  .word 0x00000000
  .word 0x0c083f24
  .word 0x00000000
  .word 0x8e420008
  .word 0x30420001
  .word 0x10400005
  .word 0x00000000
  .word 0x0c081e28
  .word 0x00000000
  .word 0x1000051e
  .word 0x00000000
  .word 0x0c080694
  .word 0x00000000
  .word 0x1000051a
  .word 0x00000000
  .word 0x0c092580
  .word 0x00000000
  .word 0x14400516
  .word 0x00000000
  .word 0x0c080694
  .word 0x00000000
  .word 0x10000512
  .word 0x00000000
  .word 0x0c0806bc
  .word 0x00000000
  .word 0x1440050e
  .word 0x00000000
  .word 0x8e440000
  .word 0x30830040
  .word 0x1460050a
  .word 0x00000000
  .word 0x8e430004
  .word 0x14600507
  .word 0x00000000
  .word 0x00801027
  .word 0x30420002
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x240502b5
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420004
  .word 0x10400025
  .word 0x00000000
  .word 0x8e42000c
  .word 0x30420004
  .word 0x10400019
  .word 0x00000000
  .word 0x0c07fdd0
  .word 0x00000000
  .word 0x24030002
  .word 0x10430014
  .word 0x00000000
  .word 0x24040001
  .word 0x0c086d9c
  .word 0x00000000
  .word 0x24020006
  .word 0xae420010
  .word 0x24020001
  .word 0xae420018
  .word 0x8e430000
  .word 0x3c028000
  .word 0x00621025
  .word 0xae420000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070003
  .word 0x0c042938
  .word 0x00000000
  .word 0x100004dd
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070008
  .word 0x0c042938
  .word 0x00000000
  .word 0x100004d5
  .word 0x00000000
  .word 0x0c0b469c
  .word 0x00000000
  .word 0x1040000e
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9463094e
  .word 0x30630010
  .word 0x10600009
  .word 0x00000000
  .word 0x8e440000
  .word 0x3c030200
  .word 0x00831825
  .word 0xae430000
  .word 0x34630020
  .word 0xae430000
  .word 0x100004c4
  .word 0x00000000
  .word 0x8e44000c
  .word 0x30830040
  .word 0x1060000e
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9463094e
  .word 0x30630080
  .word 0x10600009
  .word 0x00000000
  .word 0x8e440000
  .word 0x3c030400
  .word 0x00831825
  .word 0xae430000
  .word 0x34630020
  .word 0xae430000
  .word 0x100004b3
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x104000ae
  .word 0x00000000
  .word 0x8e420024
  .word 0x2c410007
  .word 0x102000a4
  .word 0x00000000
  .word 0x3c03007b
  .word 0x246372e0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x00801027
  .word 0x30420020
  .word 0x10400005
  .word 0x00000000
  .word 0x0c0afe14
  .word 0x00000000
  .word 0x10000095
  .word 0x00000000
  .word 0x0c0806b4
  .word 0x00000000
  .word 0x2784972c
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e420000
  .word 0x34420020
  .word 0xae420000
  .word 0x1000008b
  .word 0x00000000
  .word 0x00801027
  .word 0x30420001
  .word 0x1040000f
  .word 0x00000000
  .word 0x8e420000
  .word 0x30420080
  .word 0x10400007
  .word 0x00000000
  .word 0x8e240ba0
  .word 0x240500cf
  .word 0x0c07fa84
  .word 0x00000000
  .word 0x1000007d
  .word 0x00000000
  .word 0x0c0afe2c
  .word 0x00000000
  .word 0x10000079
  .word 0x00000000
  .word 0x0c0806b4
  .word 0x00000000
  .word 0x0c080804
  .word 0x00000000
  .word 0x36100003
  .word 0x10000072
  .word 0x00000000
  .word 0x00801027
  .word 0x30420002
  .word 0x1040000f
  .word 0x00000000
  .word 0x8e420000
  .word 0x30420100
  .word 0x10400007
  .word 0x00000000
  .word 0x8e240ba0
  .word 0x240500d2
  .word 0x0c07fa84
  .word 0x00000000
  .word 0x10000064
  .word 0x00000000
  .word 0x0c0afe38
  .word 0x00000000
  .word 0x10000060
  .word 0x00000000
  .word 0x0c0806b4
  .word 0x00000000
  .word 0x0c080b5c
  .word 0x00000000
  .word 0x36100005
  .word 0x10000059
  .word 0x00000000
  .word 0x00801027
  .word 0x30420004
  .word 0x10400013
  .word 0x00000000
  .word 0x8e420000
  .word 0x30420200
  .word 0x10400051
  .word 0x00000000
  .word 0x24041317
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x240500d4
  .word 0x10000002
  .word 0x00000000
  .word 0x240500d3
  .word 0x8e240ba0
  .word 0x0c07fa84
  .word 0x00000000
  .word 0x10000043
  .word 0x00000000
  .word 0x0c0806b4
  .word 0x00000000
  .word 0x0c081120
  .word 0x00000000
  .word 0x36100011
  .word 0x1000003c
  .word 0x00000000
  .word 0x00801027
  .word 0x30420008
  .word 0x1040000f
  .word 0x00000000
  .word 0x8e420000
  .word 0x30420400
  .word 0x10400007
  .word 0x00000000
  .word 0x8e240ba0
  .word 0x240500d5
  .word 0x0c07fa84
  .word 0x00000000
  .word 0x1000002e
  .word 0x00000000
  .word 0x0c0afe44
  .word 0x00000000
  .word 0x1000002a
  .word 0x00000000
  .word 0x0c0806b4
  .word 0x00000000
  .word 0x0c080e14
  .word 0x00000000
  .word 0x36100009
  .word 0x10000023
  .word 0x00000000
  .word 0x00801027
  .word 0x30420010
  .word 0x10400005
  .word 0x00000000
  .word 0x0c0afe20
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x0c0806b4
  .word 0x00000000
  .word 0x2784972c
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e420000
  .word 0x34420020
  .word 0xae420000
  .word 0x10000011
  .word 0x00000000
  .word 0x00801027
  .word 0x30420040
  .word 0x10400005
  .word 0x00000000
  .word 0x0c0afe50
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x0c0806b4
  .word 0x00000000
  .word 0x2784972c
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e420000
  .word 0x34420020
  .word 0xae420000
  .word 0x24040030
  .word 0x8e450024
  .word 0x0c05bcf8
  .word 0x00000000
  .word 0x10000401
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420952
  .word 0x30420020
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e420024
  .word 0x10400007
  .word 0x00000000
  .word 0xae400024
  .word 0x0c088a1c
  .word 0x00000000
  .word 0x36100001
  .word 0x100003f3
  .word 0x00000000
  .word 0x0000982d
  .word 0x0000882d
  .word 0x24040188
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400023
  .word 0x00000000
  .word 0x3c03007e
  .word 0x94650952
  .word 0x30a34000
  .word 0x1460000c
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9464095a
  .word 0x30834000
  .word 0x14600007
  .word 0x00000000
  .word 0x30a38000
  .word 0x14600004
  .word 0x00000000
  .word 0x30838000
  .word 0x10600002
  .word 0x00000000
  .word 0x24130001
  .word 0x30a31000
  .word 0x1460000c
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9464095a
  .word 0x30831000
  .word 0x14600007
  .word 0x00000000
  .word 0x30a32000
  .word 0x14600004
  .word 0x00000000
  .word 0x30832000
  .word 0x10600024
  .word 0x00000000
  .word 0x24110001
  .word 0x10000021
  .word 0x00000000
  .word 0x3c03007e
  .word 0x94650952
  .word 0x30a34000
  .word 0x1460000c
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9464095a
  .word 0x30834000
  .word 0x14600007
  .word 0x00000000
  .word 0x30a32000
  .word 0x14600004
  .word 0x00000000
  .word 0x30832000
  .word 0x10600002
  .word 0x00000000
  .word 0x24130001
  .word 0x30a31000
  .word 0x1460000c
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9464095a
  .word 0x30831000
  .word 0x14600007
  .word 0x00000000
  .word 0x30a38000
  .word 0x14600004
  .word 0x00000000
  .word 0x30838000
  .word 0x10600002
  .word 0x00000000
  .word 0x24110001
  .word 0x12600016
  .word 0x00000000
  .word 0x8e420024
  .word 0x28410006
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae420024
  .word 0x10000002
  .word 0x00000000
  .word 0xae400024
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e440024
  .word 0x0c0889bc
  .word 0x00000000
  .word 0x36100001
  .word 0x10000393
  .word 0x00000000
  .word 0x12200391
  .word 0x00000000
  .word 0x8e420024
  .word 0x18400005
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae420024
  .word 0x10000003
  .word 0x00000000
  .word 0x24020006
  .word 0xae420024
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e440024
  .word 0x0c0889ec
  .word 0x00000000
  .word 0x36100001
  .word 0x1000037c
  .word 0x00000000
  .word 0x0c0806bc
  .word 0x00000000
  .word 0x14400378
  .word 0x00000000
  .word 0x8e430000
  .word 0x30630040
  .word 0x14600374
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9464094e
  .word 0x30830020
  .word 0x10600006
  .word 0x00000000
  .word 0x0c082118
  .word 0x00000000
  .word 0x36100001
  .word 0x1000036a
  .word 0x00000000
  .word 0x30830040
  .word 0x1060000c
  .word 0x00000000
  .word 0x8e437664
  .word 0x000318c0
  .word 0x00721821
  .word 0x8c630028
  .word 0x30630001
  .word 0x14600360
  .word 0x00000000
  .word 0x0c080a0c
  .word 0x00000000
  .word 0x1000035c
  .word 0x00000000
  .word 0x8e437658
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae427658
  .word 0x26447658
  .word 0x0c092898
  .word 0x00000000
  .word 0x8e437658
  .word 0x30630001
  .word 0x10600351
  .word 0x00000000
  .word 0x36100002
  .word 0x1000034e
  .word 0x00000000
  .word 0x0c0806bc
  .word 0x00000000
  .word 0x1440034a
  .word 0x00000000
  .word 0x8e430000
  .word 0x30630040
  .word 0x14600346
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620020
  .word 0x10400006
  .word 0x00000000
  .word 0x0c082118
  .word 0x00000000
  .word 0x36100001
  .word 0x1000033c
  .word 0x00000000
  .word 0x30620040
  .word 0x10400005
  .word 0x00000000
  .word 0x0c080d8c
  .word 0x00000000
  .word 0x10000335
  .word 0x00000000
  .word 0x8e43768c
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae42768c
  .word 0x2644768c
  .word 0x0c092898
  .word 0x00000000
  .word 0x8e43768c
  .word 0x30630001
  .word 0x1060032a
  .word 0x00000000
  .word 0x36100004
  .word 0x10000327
  .word 0x00000000
  .word 0x8e430014
  .word 0x24040001
  .word 0x10640056
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000031f
  .word 0x00000000
  .word 0x8e430000
  .word 0x30630040
  .word 0x1460031b
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620020
  .word 0x10400008
  .word 0x00000000
  .word 0x0c080edc
  .word 0x00000000
  .word 0x0c082118
  .word 0x00000000
  .word 0x36100001
  .word 0x1000030f
  .word 0x00000000
  .word 0x30620080
  .word 0x10400014
  .word 0x00000000
  .word 0x8e4276cc
  .word 0x000210c0
  .word 0x00521021
  .word 0x94440268
  .word 0x0c099bd8
  .word 0x00000000
  .word 0x0c082178
  .word 0x00000000
  .word 0x0c083f10
  .word 0x00000000
  .word 0x24070001
  .word 0xae470014
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c042938
  .word 0x00000000
  .word 0x100002f9
  .word 0x00000000
  .word 0x30620040
  .word 0x1040001b
  .word 0x00000000
  .word 0x0c05d200
  .word 0x00000000
  .word 0x8e4376cc
  .word 0x000318c0
  .word 0x00721821
  .word 0x94630268
  .word 0x94420002
  .word 0x1062000a
  .word 0x00000000
  .word 0x0c08218c
  .word 0x00000000
  .word 0x0c083f24
  .word 0x00000000
  .word 0x8e430000
  .word 0x34630020
  .word 0xae430000
  .word 0x100002e4
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070008
  .word 0x0c042938
  .word 0x00000000
  .word 0x100002dc
  .word 0x00000000
  .word 0x8e4376c0
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae4276c0
  .word 0x264476c0
  .word 0x0c092898
  .word 0x00000000
  .word 0x8e4376c0
  .word 0x30630001
  .word 0x106002d1
  .word 0x00000000
  .word 0x36100008
  .word 0x100002ce
  .word 0x00000000
  .word 0x0c0806bc
  .word 0x00000000
  .word 0x144002ca
  .word 0x00000000
  .word 0x0c099c84
  .word 0x00000000
  .word 0x144002c6
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9464094e
  .word 0x30830020
  .word 0x10600025
  .word 0x00000000
  .word 0x0c099c48
  .word 0x00000000
  .word 0x0c08218c
  .word 0x00000000
  .word 0x0c083f24
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e4302dc
  .word 0x28610005
  .word 0x14200005
  .word 0x00000000
  .word 0x8e4476cc
  .word 0x28810002
  .word 0x10200004
  .word 0x00000000
  .word 0xae4076c4
  .word 0x1000000a
  .word 0x00000000
  .word 0x2463ffff
  .word 0x14830005
  .word 0x00000000
  .word 0x2483fffd
  .word 0xae4376c4
  .word 0x10000003
  .word 0x00000000
  .word 0x2483fffe
  .word 0xae4376c4
  .word 0x36100008
  .word 0xae400014
  .word 0x1000029d
  .word 0x00000000
  .word 0x30830040
  .word 0x1060001e
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05d200
  .word 0x00000000
  .word 0x8e4376cc
  .word 0x000318c0
  .word 0x00721821
  .word 0x94630268
  .word 0x94420002
  .word 0x1062000c
  .word 0x00000000
  .word 0x0c099c48
  .word 0x00000000
  .word 0x0c08218c
  .word 0x00000000
  .word 0x0c083f24
  .word 0x00000000
  .word 0x8e430000
  .word 0x34630020
  .word 0xae430000
  .word 0x10000285
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070008
  .word 0x0c042938
  .word 0x00000000
  .word 0x1000027d
  .word 0x00000000
  .word 0x8e4402dc
  .word 0x28810002
  .word 0x1420001e
  .word 0x00000000
  .word 0x3c03007e
  .word 0x94630952
  .word 0x30630008
  .word 0x10600019
  .word 0x00000000
  .word 0x8e4376cc
  .word 0x2482ffff
  .word 0x0062082a
  .word 0x10200005
  .word 0x00000000
  .word 0x24620001
  .word 0xae4276cc
  .word 0x10000002
  .word 0x00000000
  .word 0xae4076cc
  .word 0x8e4276cc
  .word 0x000210c0
  .word 0x00521021
  .word 0x94440268
  .word 0x0c099c1c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x1000025c
  .word 0x00000000
  .word 0x28810002
  .word 0x14200259
  .word 0x00000000
  .word 0x3c03007e
  .word 0x94630952
  .word 0x30630004
  .word 0x10600254
  .word 0x00000000
  .word 0x8e4276cc
  .word 0x18400005
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae4276cc
  .word 0x10000003
  .word 0x00000000
  .word 0x2482ffff
  .word 0xae4276cc
  .word 0x8e4276cc
  .word 0x000210c0
  .word 0x00521021
  .word 0x94440268
  .word 0x0c099c1c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x1000023d
  .word 0x00000000
  .word 0x0c0806bc
  .word 0x00000000
  .word 0x14400239
  .word 0x00000000
  .word 0x8e430000
  .word 0x30630040
  .word 0x14600235
  .word 0x00000000
  .word 0x8e430004
  .word 0x14600232
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9464094e
  .word 0x30830040
  .word 0x10600036
  .word 0x00000000
  .word 0x8e447700
  .word 0x00041840
  .word 0x00641821
  .word 0x000318c0
  .word 0x02431821
  .word 0x247102e0
  .word 0x8c6302e0
  .word 0x30630002
  .word 0x14600223
  .word 0x00000000
  .word 0x8e230004
  .word 0x24020002
  .word 0x1062000d
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x0c0815f0
  .word 0x00000000
  .word 0x36100020
  .word 0x10000004
  .word 0x00000000
  .word 0x0c0819d0
  .word 0x00000000
  .word 0x36100040
  .word 0x8e230004
  .word 0x24020002
  .word 0x1062000e
  .word 0x00000000
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x2413000c
  .word 0x10000005
  .word 0x00000000
  .word 0x9633000c
  .word 0x10000002
  .word 0x00000000
  .word 0x2413000b
  .word 0x24040033
  .word 0x0260282d
  .word 0x0c05bcf8
  .word 0x00000000
  .word 0x100001f8
  .word 0x00000000
  .word 0x30820020
  .word 0x10400006
  .word 0x00000000
  .word 0x0c0812bc
  .word 0x00000000
  .word 0x0c082118
  .word 0x00000000
  .word 0x36100001
  .word 0x8e4376f4
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae4276f4
  .word 0x264476f4
  .word 0x0c092898
  .word 0x00000000
  .word 0x8e4376f4
  .word 0x30630001
  .word 0x106001e5
  .word 0x00000000
  .word 0x36100010
  .word 0x100001e2
  .word 0x00000000
  .word 0x8e44001c
  .word 0x24030001
  .word 0x10830031
  .word 0x00000000
  .word 0x24030002
  .word 0x10830024
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x100001d7
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30620020
  .word 0x10400005
  .word 0x00000000
  .word 0x0c081758
  .word 0x00000000
  .word 0x100001ce
  .word 0x00000000
  .word 0x30620040
  .word 0x10400006
  .word 0x00000000
  .word 0x0c0818fc
  .word 0x00000000
  .word 0x36100010
  .word 0x100001c6
  .word 0x00000000
  .word 0x8e437728
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae427728
  .word 0x26447728
  .word 0x0c092898
  .word 0x00000000
  .word 0x8e437728
  .word 0x30630001
  .word 0x106001bb
  .word 0x00000000
  .word 0x36100020
  .word 0x100001b8
  .word 0x00000000
  .word 0x0c08ad4c
  .word 0x00000000
  .word 0x144001b4
  .word 0x00000000
  .word 0x0c0818c4
  .word 0x00000000
  .word 0x24030004
  .word 0xae430010
  .word 0x100001ae
  .word 0x00000000
  .word 0x0c086dbc
  .word 0x00000000
  .word 0x144001aa
  .word 0x00000000
  .word 0x0c08218c
  .word 0x00000000
  .word 0x0c086dd0
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0xae40001c
  .word 0x100001a1
  .word 0x00000000
  .word 0x0c086df0
  .word 0x00000000
  .word 0xae420428
  .word 0x0c081968
  .word 0x00000000
  .word 0x36100010
  .word 0x0c081758
  .word 0x00000000
  .word 0x10000197
  .word 0x00000000
  .word 0x8e430018
  .word 0x2c61000a
  .word 0x10200193
  .word 0x00000000
  .word 0x3c04007b
  .word 0x248472b0
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30620020
  .word 0x10400005
  .word 0x00000000
  .word 0x0c081b90
  .word 0x00000000
  .word 0x10000183
  .word 0x00000000
  .word 0x30620040
  .word 0x10400005
  .word 0x00000000
  .word 0x0c081cd0
  .word 0x00000000
  .word 0x1000017c
  .word 0x00000000
  .word 0x8e43775c
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae42775c
  .word 0x2644775c
  .word 0x0c092898
  .word 0x00000000
  .word 0x8e43775c
  .word 0x30630001
  .word 0x10600171
  .word 0x00000000
  .word 0x36100040
  .word 0x1000016e
  .word 0x00000000
  .word 0x0c08ad4c
  .word 0x00000000
  .word 0x1440016a
  .word 0x00000000
  .word 0x0c081bac
  .word 0x00000000
  .word 0x24030004
  .word 0xae430010
  .word 0x10000164
  .word 0x00000000
  .word 0x0c086dbc
  .word 0x00000000
  .word 0x14400160
  .word 0x00000000
  .word 0x0c086dd0
  .word 0x00000000
  .word 0x10400010
  .word 0x00000000
  .word 0x8e440000
  .word 0x3c038000
  .word 0x00831824
  .word 0x14600004
  .word 0x00000000
  .word 0xae400018
  .word 0x10000154
  .word 0x00000000
  .word 0xae400010
  .word 0x8e430000
  .word 0x0003187c
  .word 0x0003187e
  .word 0xae430000
  .word 0x1000014d
  .word 0x00000000
  .word 0x0c086df0
  .word 0x00000000
  .word 0xae427654
  .word 0x0040202d
  .word 0x0c07fd0c
  .word 0x00000000
  .word 0x0040882d
  .word 0x8c420a2c
  .word 0x94440002
  .word 0x0c05ec98
  .word 0x00000000
  .word 0x10400016
  .word 0x00000000
  .word 0x8e220a2c
  .word 0x94450002
  .word 0x3c040068
  .word 0x24845050
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c040068
  .word 0x24845060
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e447654
  .word 0x0c0929b8
  .word 0x00000000
  .word 0x8e440000
  .word 0x2403bfff
  .word 0x00831824
  .word 0xae430000
  .word 0x24030002
  .word 0xae430018
  .word 0x1000012b
  .word 0x00000000
  .word 0x8e220a2c
  .word 0x94450002
  .word 0x3c040068
  .word 0x24845050
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c040068
  .word 0x24845070
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e420000
  .word 0x34434000
  .word 0xae430000
  .word 0x3c02fffd
  .word 0x3442ffff
  .word 0x00621024
  .word 0xae420000
  .word 0x0c0b6eb0
  .word 0x00000000
  .word 0x0c0b5554
  .word 0x00000000
  .word 0x240301a1
  .word 0x10430003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x24040020
  .word 0x24050088
  .word 0x0c0b6e7c
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x24040020
  .word 0x24050087
  .word 0x0c0b6e7c
  .word 0x00000000
  .word 0x8e440000
  .word 0x3c038000
  .word 0x00831824
  .word 0x14600005
  .word 0x00000000
  .word 0x0c081b90
  .word 0x00000000
  .word 0x100000fe
  .word 0x00000000
  .word 0xae400010
  .word 0x8e430000
  .word 0x0003187c
  .word 0x0003187e
  .word 0xae430000
  .word 0x100000f7
  .word 0x00000000
  .word 0x0c0929d4
  .word 0x00000000
  .word 0x144000f3
  .word 0x00000000
  .word 0x8e440000
  .word 0x3c038000
  .word 0x00831824
  .word 0x14600005
  .word 0x00000000
  .word 0x0c081b90
  .word 0x00000000
  .word 0x100000ea
  .word 0x00000000
  .word 0xae400010
  .word 0x8e430000
  .word 0x0003187c
  .word 0x0003187e
  .word 0xae430000
  .word 0x100000e3
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1e64
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x144000dc
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x0c0f1d84
  .word 0x00000000
  .word 0x24030001
  .word 0x10430031
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x100000d0
  .word 0x00000000
  .word 0x8e430000
  .word 0x2402bfff
  .word 0x00621024
  .word 0xae420000
  .word 0x0c07fdd0
  .word 0x00000000
  .word 0x24030001
  .word 0x1043000a
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x0c0b5554
  .word 0x00000000
  .word 0x240301a1
  .word 0x10430003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040008
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x24040005
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x240505f1
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24030004
  .word 0xae430018
  .word 0x100000a4
  .word 0x00000000
  .word 0x0c0f1de8
  .word 0x00000000
  .word 0x0c081b90
  .word 0x00000000
  .word 0x1000009e
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0f1e64
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400097
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x0c0f1de8
  .word 0x00000000
  .word 0x0c081b90
  .word 0x00000000
  .word 0x1000008e
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1e64
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400087
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x0c0f1d84
  .word 0x00000000
  .word 0x24030001
  .word 0x10430026
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x1000007b
  .word 0x00000000
  .word 0x8e430000
  .word 0x3c02fffe
  .word 0x3442ffff
  .word 0x00621024
  .word 0xae420000
  .word 0x0c07fdd0
  .word 0x00000000
  .word 0x24030001
  .word 0x1043000a
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x2404000b
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x2404000e
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x2405062a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24030006
  .word 0xae430018
  .word 0x1000005a
  .word 0x00000000
  .word 0x0c0f1de8
  .word 0x00000000
  .word 0x0c081b90
  .word 0x00000000
  .word 0x10000054
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0f1e64
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x1440004d
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x0c0f1de8
  .word 0x00000000
  .word 0x0c081b90
  .word 0x00000000
  .word 0x10000044
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1e64
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x1440003d
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x0c0f1d84
  .word 0x00000000
  .word 0x24030001
  .word 0x10430021
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0x8e430000
  .word 0x3c02ffff
  .word 0x34427fff
  .word 0x00621024
  .word 0xae420000
  .word 0x0c07fdd0
  .word 0x00000000
  .word 0x1040000b
  .word 0x00000000
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040011
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050660
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24030008
  .word 0xae430018
  .word 0x10000015
  .word 0x00000000
  .word 0x0c0f1de8
  .word 0x00000000
  .word 0x0c081b90
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0f1e64
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x0c0f1de8
  .word 0x00000000
  .word 0x0c081b90
  .word 0x00000000
  .word 0x32030001
  .word 0x10600003
  .word 0x00000000
  .word 0x0c080620
  .word 0x00000000
  .word 0x32030002
  .word 0x10600003
  .word 0x00000000
  .word 0x0c080978
  .word 0x00000000
  .word 0x32030004
  .word 0x10600003
  .word 0x00000000
  .word 0x0c080c70
  .word 0x00000000
  .word 0x32030008
  .word 0x10600003
  .word 0x00000000
  .word 0x0c080f0c
  .word 0x00000000
  .word 0x32030010
  .word 0x10600003
  .word 0x00000000
  .word 0x0c081330
  .word 0x00000000
  .word 0x32030020
  .word 0x10600003
  .word 0x00000000
  .word 0x0c08182c
  .word 0x00000000
  .word 0x32030040
  .word 0x10600003
  .word 0x00000000
  .word 0x0c081bdc
  .word 0x00000000
  .word 0x8e440000
  .word 0x30830040
  .word 0x10600004
  .word 0x00000000
  .word 0x2403ffbf
  .word 0x00831824
  .word 0xae430000
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

// FUN_002016B0
void FUN_002016B0(void)
{
    u32 state;

    K_ASSERT(gBcmWork != NULL, 0x164);
    state = *(u32*)(gBcmWork + 0x10);
    if (state == 11)
    {
        return;
    }
    if (state == 10)
    {
        return;
    }
    if (state == 9)
    {
        return;
    }
    func_0021f410();
    func_00221b60();
}

// FUN_00201730
void FUN_00201730(void* work)
{
    u8* p;

    p = (u8*)work;
    *(u32*)p = 0;
    *(u32*)(p + 0x77a0) = 0;
    *(u32*)(p + 8) = 0;
    *(u32*)(p + 0x20) = bpMisc001ff740();
    func_0021f0c0(p + 0x430);
    gBcmWork = p;
}




// FUN_00201780
void FUN_00201780(void)
{
    u32* work;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = (u32*)gBcmWork;
    if (work[0] & 0x800000)
    {
        func_002083d0();
    }
    if (work[0] & 0x2000)
    {
        FUN_00206EB0();
    }
    if (work[0] & 0x1000)
    {
        FUN_00206310();
    }
    if (work[0] & 2)
    {
        FUN_00202BC0();
    }
    if (work[0] & 4)
    {
        bcm00203360();
    }
    if (work[0] & 8)
    {
        FUN_00203B70();
    }
    if (work[0] & 0x10)
    {
        FUN_00204BE0();
    }
    func_0021f140();
    gBcmWork = NULL;
}

#pragma opt_loop_invariants on
// FUN_00201880
void FUN_00201880(void)
{
    s32 i;
    u32 request;
    u8* work;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    for (i = 0; i < 7; i++)
    {
        u32 loopRequest;
        u32* entry;
        u32* flags;
        s32 selector;
        loopRequest = 0;
        entry = (u32*)work + i;
        flags = entry + 0x590;
        *flags &= ~1u;
        selector = i;
        switch (selector)
        {
        case 0:
            if (*(u32*)(work + 0xc) & 0x20) loopRequest = 1;
            break;
        case 1:
            if (*(u32*)(work + 0xc) & 1) loopRequest = 1;
            break;
        case 2:
            if (*(u32*)(work + 0xc) & 2) loopRequest = 1;
            break;
        case 3:
            if (*(u32*)(work + 0xc) & 4) loopRequest = 1;
            break;
        case 4:
            if (*(u32*)(work + 0xc) & 8) loopRequest = 1;
            break;
        case 5:
            if (*(u32*)(work + 0xc) & 0x10) loopRequest = 1;
            break;
        case 6:
            if (*(u32*)(work + 0xc) & 0x40) loopRequest = 1;
            break;
        }
        if (loopRequest)
        {
            *flags |= 1;
        }
    }
    if (*(u32*)work & 0x800000)
    {
        func_00208360();
    }
    request = bpRoot_003a5540_typed(100, 100, -0x4e, 0.0f, 2, 6,
                                    *(void**)(work + 0x7790),
                                    *(u32*)(work + 0x24));
    func_002082c0(request);
    *(u32*)(work + 0x6d28) = 0;
}

#pragma opt_loop_invariants off

// FUN_00201A50
void FUN_00201A50(void)
{
    u8* work;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    FUN_00201880();
    *(u32*)work |= 0x40;
    func_0021f150(*(u32*)(work + 0x24));
    FUN_0010a4e0(1, 0xf, 2, 0x11);
    *(u32*)(work + 0x10) = 0;
}


// FUN_00201ad0
void bcmDestroyOwnedResourceCallback(void)
{
    bcmDestroyOwnedResource();
}


// FUN_00201AF0
u32 FUN_00201AF0(void)
{
    u32 flags;

    K_ASSERT(gBcmWork != NULL, 0x164);
    flags = *(u32*)gBcmWork;
    return ((flags & 1) != 0 || (flags & 0x20000000) != 0);
}


// FUN_00201B50
void FUN_00201B50(void)
{
    u32* work;

    K_ASSERT(gBcmWork != NULL, 0x164);
    *(u32*)gBcmWork |= 1;
    K_ASSERT(gBcmWork != NULL, 0x164);
    work = (u32*)gBcmWork;
    FUN_00201880();
    if (*work & 2) FUN_002025E0();
    if (*work & 4) FUN_002031C0();
    if (*work & 8) FUN_00203C30();
    if (*work & 0x10) FUN_00204CC0();
}


// FUN_00201C30
void FUN_00201C30(void)
{
    u32* work;

    K_ASSERT(gBcmWork != NULL, 0x164);
    *(u32*)gBcmWork |= 0x20000000;
    K_ASSERT(gBcmWork != NULL, 0x164);
    work = (u32*)gBcmWork;
    FUN_00201880();
    if (*work & 2) FUN_002025E0();
    if (*work & 4) FUN_002031C0();
    if (*work & 8) FUN_00203C30();
    if (*work & 0x10) FUN_00204CC0();
}











static u8* panelMiscWork(void)
{
    return *(u8**)DAT_007ce3ec_abs;
}

























































































































// FUN_00201D10
void FUN_00201D10(void)
{
    u32* work;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = (u32*)gBcmWork;
    *work &= ~1u;
    *work |= 0x40;
    K_ASSERT(gBcmWork != NULL, 0x164);
    work = (u32*)gBcmWork;
    FUN_00201880();
    if (work[0] & 2) FUN_002025E0();
    if (work[0] & 4) FUN_002031C0();
    if (work[0] & 8) FUN_00203C30();
    if (work[0] & 0x10) FUN_00204CC0();
}

/* Removing this loses FUN_00201880 (MATCH nd0 -> MISMATCH nd307) - measured W161. */
// FUN_00201E00
void FUN_00201E00(void)
{
    u32* work;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = (u32*)gBcmWork;
    *work &= ~0x20000000u;
    *work |= 0x40;
    K_ASSERT(gBcmWork != NULL, 0x164);
    work = (u32*)gBcmWork;
    FUN_00201880();
    if (work[0] & 2) FUN_002025E0();
    if (work[0] & 4) FUN_002031C0();
    if (work[0] & 8) FUN_00203C30();
    if (work[0] & 0x10) FUN_00204CC0();
}
// FUN_00201EF0
void FUN_00201EF0(void)
{
    DatPersonaWork* persona;
    u16* skills;
    void* special;
    s32 count;
    s32 i;
    u32* work;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = (u32*)gBcmWork;
    persona = datPersonaGetByPcId(1);
    count = datPersonaCountValidSkills(persona);
    special = func_0030c0c0();
    skills = datPersonaGetSkills(persona);
    for (i = 0; i < count; i++)
    {
        if (FUN_002055F0(skills[i]))
        {
            break;
        }
    }
    if (special == NULL && i == count)
    {
        work[0] |= 0x80;
    }
    else if ((work[0x77a0 / 4] & 2) == 0)
    {
        work[3] |= 1;
    }
}

// FUN_00202010
void FUN_00202010(void)
{
    u8* p;
    DatPersonaWork* persona;
    u16* skills;
    s32 count;
    s32 i;
    s32 out;
    u32 selectedSkill;
    s32 visible;
    u16* special;
    u8* row;
    u8* rowBase;
    u8* misc;
    u8* misc2;

    K_ASSERT(gBcmWork != NULL, 0x164);
    p = gBcmWork;
    rowBase = p + 0x4a90;
    misc = (u8*)(uintptr_t)bpMisc001ff500(1);
    K_ASSERT((~*(u32*)p & 2) != 0, 0x7c0);
    persona = datPersonaGetByPcId(1);
    count = datPersonaCountValidSkills(persona);
    skills = datPersonaGetSkills(persona);
    out = 0;
    special = (u16*)func_0030c0c0();
    if (special != NULL)
    {
        *(u32*)(p + 0x28) = 0;
        *(u16*)(p + 0x2c) = *special;
        *(u32*)(p + 0x28) |= 2;
        if (func_003086f0(*(u32*)(misc + 0xa2c), *(u16*)(p + 0x2c)))
        {
            *(u32*)(p + 0x28) |= 1;
        }
        out++;
    }
    for (i = 0; i < count; i++)
    {
        if (!FUN_002055F0(skills[i]))
        {
            continue;
        }
        *(u16*)(p + out * 8 + 0x2c) = skills[i];
        *(u32*)(p + out * 8 + 0x28) = 0;
        if (func_003086f0(*(u32*)(misc + 0xa2c),
                          *(u16*)(p + out * 8 + 0x2c)))
        {
            *(u32*)(p + out * 8 + 0x28) |= 1;
        }
        out++;
    }
    K_ASSERT(out != 0, 0x7e3);
    K_ASSERT(out <= 9, 0x7e4);
    *(u32*)(p + 0x74) = out;
    *(u32*)(p + 0x70) = out;
    if (out > 4)
    {
        *(u32*)(p + 0x70) = 4;
    }
    misc2 = (u8*)(uintptr_t)bpMisc001ff500(1);
    *(u32*)(p + 0x7658) = 0;
    *(u32*)(p + 0x7660) = *(u32*)(p + 0x70);
    *(u32*)(p + 0x7668) = *(u32*)(p + 0x74);
    func_00208570(p + 0x7658);
    if (datGetFlag(0x186))
    {
        selectedSkill = FUN_0016F380(0x31);
        if (selectedSkill == 0)
        {
            *(u32*)(p + 0x7664) = 0;
            *(u32*)(p + 0x765c) = 0;
        }
        else
        {
            u32 selectedId;
            s32 selectedIndex;
            s32 skillCount;

            selectedId = (u16)selectedSkill;
            selectedIndex = 0;
            skillCount = *(s32*)(p + 0x74);
            for (; selectedIndex < skillCount; selectedIndex++)
            {
                if (*(u16*)(p + 0x2c + selectedIndex * 8) == selectedId)
                {
                    break;
                }
            }
            if (selectedIndex == skillCount)
            {
                *(u32*)(p + 0x7664) = 0;
                *(u32*)(p + 0x765c) = 0;
            }
            else if (selectedIndex == skillCount - 1)
            {
                *(u32*)(p + 0x765c) =
                    selectedIndex - (*(s32*)(p + 0x70) - 1);
                *(u32*)(p + 0x7664) = selectedIndex;
            }
            else if (*(s32*)(p + 0x70) - 2 < selectedIndex)
            {
                *(u32*)(p + 0x765c) =
                    selectedIndex - (*(s32*)(p + 0x70) - 2);
                *(u32*)(p + 0x7664) = selectedIndex;
            }
            else
            {
                *(u32*)(p + 0x765c) = 0;
                *(u32*)(p + 0x7664) = selectedIndex;
            }
        }
    }
    else
    {
        *(u32*)(p + 0x7664) = 0;
        *(u32*)(p + 0x765c) = 0;
    }
    FUN_002024B0();
    visible = *(s32*)(p + 0x74);
    if (visible > 4)
    {
        visible = 4;
    }
    for (i = 0; i < visible; i++)
    {
        u16* skill;

        row = rowBase + i * 0x510;
        *(u32*)row = 0;
        if (*(u32*)(p + i * 8 + 0x28) & 1)
        {
            *(u32*)row |= 1;
        }
        if (*(u32*)(p + i * 8 + 0x28) & 2)
        {
            *(u32*)row |= 2;
        }
        *(u32*)(row + 4) = *(u32*)(p + i * 4 + 0x78);
        skill = (u16*)(p + i * 8 + 0x2c);
        switch (((u8*)((uintptr_t)gp0xffffb708 + *skill * 0x2c))[3])
        {
        case 1:
            *(u32*)(row + 8) = 0;
            break;
        case 2:
            *(u32*)(row + 8) = 1;
            break;
        }
        *(u32*)(row + 0xc) =
            func_003083f0(*(u32*)(misc2 + 0xa2c), *skill);
    }
    *(u32*)(p + 0x7640) = 0;
    *(u32*)(p + 0x64a0) = visible;
    *(u32*)(p + 0x6498) = *(u32*)(p + 0x7664);
    *(u32*)(p + 0x649c) = *(u32*)(p + 0x765c);
    *(u32*)(p + 0x64a4) = *(u32*)(p + 0x74);
    *(u32*)(p + 0x6d24) = 0;
    *(u32*)(p + 0x6d28) = 1;
    bcmPanel00222a60();
    FUN_0010a4e0(0, 0, 0, 3);
    *(u32*)(p + 0x10) = 1;
}

// FUN_002024B0
void FUN_002024B0(void)
{
    u8* p;
    s32 i;
    u32 handle;
    extern void func_003b2c60(u32, f32);

    K_ASSERT(gBcmWork != NULL, 0x164);
    p = gBcmWork;
    func_003b0e70(1);
    func_003b0e90(2);
    for (i = 0; i < *(s32*)(p + 0x70); i++)
    {
        handle = func_003b0970(
            func_0030bb40(*(u16*)(p + 0x2c + i * 8)),
            2, (s8)(i == 0 ? 6 : 0), 0, 0);
        func_003b2c60(handle, 0.0f);
        func_003b0e20(handle, -1);
        *(u32*)(p + 0x78 + i * 4) = handle;
    }
    func_003b0e90(1);
    func_003b0e70(2);
    *(u32*)p |= 2;
}

// FUN_002025E0
void FUN_002025E0(void)
{
    u8* work;
    u8* rowBase;
    u8* misc;
    u8* row;
    s32 i;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    rowBase = work + 0x4a90;
    K_ASSERT((*(u32*)work & 2) != 0, 0x87c);
    misc = (u8*)bpMisc001ff500(1);
    FUN_00202A10();
    for (i = 0; i < *(s32*)(work + 0x70); i++)
    {
        row = rowBase + i * 0x510;
        *(u32*)row = 0;
        *(u32*)(row + 4) = *(u32*)(work + 0x78 + i * 4);
        if (*(u32*)(work + 0x28 +
                    (i + *(u32*)(work + 0x765c)) * 8) & 1)
        {
            *(u32*)row |= 1;
        }
        if (*(u32*)(work + 0x28 +
                    (i + *(u32*)(work + 0x765c)) * 8) & 2)
        {
            *(u32*)row |= 2;
        }
        switch (((u8*)((uintptr_t)DAT_007ce3f8 +
                       (u16)*(u16*)(work + 0x2c +
                                    (i + *(u32*)(work + 0x765c)) * 8) *
                       0x2c))[3])
        {
        case 1:
            *(u32*)(row + 8) = 0;
            break;
        case 2:
            *(u32*)(row + 8) = 1;
            break;
        }
        *(u32*)(row + 0xc) = func_003083f0(
            *(u32*)(misc + 0xa2c),
            *(u16*)(work + 0x2c +
                    (i + *(u32*)(work + 0x765c)) * 8));
    }
    *(u32*)(work + 0x7640) = 0;
    *(u32*)(work + 0x64a0) = *(u32*)(work + 0x70);
    *(u32*)(work + 0x6498) = *(u32*)(work + 0x7664);
    *(u32*)(work + 0x649c) = *(u32*)(work + 0x765c);
    *(u32*)(work + 0x64a4) = *(u32*)(work + 0x74);
    *(u32*)(work + 0x6d28) = 0;
    if (bcm00207930(*(u16*)(
            (u8*)(uintptr_t)(*(u32*)(work + 0x7664) * 8) +
            (uintptr_t)work + 0x2c)))
    {
        *(u32*)(work + 0x6d28) = 1;
        *(u32*)(work + 0x6d24) = FUN_00207960(*(u16*)(
            (u8*)(uintptr_t)(*(u32*)(work + 0x7664) * 8) +
            (uintptr_t)work + 0x2c));
    }
    bcmPanel00222b90();
}

// FUN_00202830 MATCHING
void FUN_00202830(void)
{
    u8* work;
    u32* output;
    u32 handle;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    *(u32*)work |= 0x20;
    func_003b0e70(1);
    func_003b0e90(2);
    handle = func_003b0970(
        func_0030bb40(*(u16*)((u8*)(uintptr_t)(*(u32*)(work + 0x7664) * 8) +
                              (uintptr_t)work + 0x2c)),
        2, 6, 0, 0);
    *(u32*)(work + 0x88) = handle;
    func_003b0e90(1);
    func_003b0e70(2);
    output = (u32*)(work + 0x7130);
    output[0] = 0;
    output[1] = *(u32*)(work + 0x88);
    if (*(u32*)((u8*)(uintptr_t)(*(u32*)(work + 0x7664) * 8) +
                (uintptr_t)work + 0x28) & 1)
        output[0] |= 1;
    if (*(u32*)((u8*)(uintptr_t)(*(u32*)(work + 0x7664) * 8) +
                (uintptr_t)work + 0x28) & 2)
        output[0] |= 2;
    switch (((u8*)(uintptr_t)((u16)*(u16*)((u8*)(uintptr_t)(
                  *(u32*)(work + 0x7664) * 8) +
              (uintptr_t)work + 0x2c) *
             0x2c) +
             (uintptr_t)DAT_007ce3f8)[3])
    {
    case 1:
        output[2] = 0;
        break;
    case 2:
        output[2] = 1;
        break;
    }
    output[3] = func_003083f0(
        *(u32*)((u8*)(uintptr_t)bpMisc001ff500(1) + 0xa2c),
        *(u16*)((u8*)(uintptr_t)(*(u32*)(work + 0x7664) * 8) +
                (uintptr_t)work + 0x2c));
    func_0022bf60();
    printf("");
    FUN_0016F3E0(0x31, *(u16*)((u8*)(uintptr_t)(*(u32*)(work + 0x7664) * 8) +
                              (uintptr_t)work + 0x2c));
}


// FUN_00202A10
void FUN_00202A10(void)
{
    s32 destroyIndex;
    s32 rowIndex;
    u8* work;
    u32 handle;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    for (destroyIndex = 0; destroyIndex < *(s32*)(work + 0x70);
         destroyIndex++)
    {
        func_003b0170(*(u32*)(work + 0x78 + destroyIndex * 4));
    }
    if (*(u32*)work & 0x800000)
    {
        func_00208360();
    }
    handle = bpRoot_003a5540_typed(
        100, 100, -1, 0.0f, 2, 6, (void*)func_003c7d60(7),
        *(u16*)((u8*)(uintptr_t)(*(s32*)(work + 0x7664) * 8) +
                 (uintptr_t)work + 0x2c));
    func_002082c0(handle);
    func_003b0e70(1);
    func_003b0e90(2);
    for (rowIndex = 0; rowIndex < *(s32*)(work + 0x70); rowIndex++)
    {
        u8* entry;
        entry = work +
                (rowIndex + *(s32*)(work + 0x765c)) * 8 + 0x28;
        handle = func_003b0970(
            func_0030bb40(*(u16*)(entry + 4)), 2,
            (s8)(rowIndex == *(s32*)(work + 0x7664) -
                                *(s32*)(work + 0x765c) ? 6 : 0),
            0, 0);
        *(u32*)(work + 0x78 + rowIndex * 4) = handle;
    }
    func_003b0e90(1);
    func_003b0e70(2);
}



// FUN_00202BC0
void FUN_00202BC0(void)
{
    s32 i;
    u8* work;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    K_ASSERT((*(u32*)work & 2) != 0, 0x910);
    for (i = 0; i < *(s32*)(work + 0x70); i++)
    {
        func_003b0170(*(u32*)(work + 0x78 + i * 4));
    }
    if (*(u32*)work & 0x20)
    {
        func_003b0170(*(u32*)(work + 0x88));
    }
    *(u32*)work &= ~2u;
}


// FUN_00202C90
void FUN_00202C90(void)
{
    u8* p;
    s32 i;

    K_ASSERT(gBcmWork != NULL, 0x164);
    p = gBcmWork;
    for (i = 0; i < 0xdf; i++)
    {
        if (FUN_00205650((u16)(0xfa0 + i)) &&
            func_00170760(1, (s16)(0xfa0 + i)))
        {
            break;
        }
    }
    if (i == 0xdf)
    {
        *(u32*)p |= 0x100;
    }
    else if ((*(u32*)(p + 0x77a0) & 4) == 0)
    {
        *(u32*)(p + 0xc) |= 2;
    }
}

// W419 negative probe: FUN_00202D70 s32 loop index nd407/672B, window704B, rate60.57%; reverted.
// FUN_00202D70
asm void FUN_00202D70(void)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82b5f8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050164
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f92b5f8
  .word 0x26514a90
  .word 0x0000802d
  .word 0x0000982d
  .word 0x10000016
  .word 0x00000000
  .word 0x26620fa0
  .word 0x3044ffff
  .word 0x0c081594
  .word 0x00000000
  .word 0x1040000f
  .word 0x00000000
  .word 0x26620fa0
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05c1d8
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400006
  .word 0x00000000
  .word 0x26630fa0
  .word 0x00101040
  .word 0x02421021
  .word 0xa443009c
  .word 0x26100001
  .word 0x26730001
  .word 0x2a6200df
  .word 0x1440ffe9
  .word 0x00000000
  .word 0xae500260
  .word 0x0c080c0c
  .word 0x00000000
  .word 0xae40768c
  .word 0x8e42025c
  .word 0xae427694
  .word 0x8e420260
  .word 0xae42769c
  .word 0x2644768c
  .word 0x0c08215c
  .word 0x00000000
  .word 0x24040186
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400035
  .word 0x00000000
  .word 0x24040032
  .word 0x0c05bce0
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0xae407698
  .word 0xae407690
  .word 0x1000002e
  .word 0x00000000
  .word 0x0000282d
  .word 0x8e440260
  .word 0x10000007
  .word 0x00000000
  .word 0x00051840
  .word 0x02431821
  .word 0x9463009c
  .word 0x10620005
  .word 0x00000000
  .word 0x24a50001
  .word 0x00a4182a
  .word 0x1460fff8
  .word 0x00000000
  .word 0x14a40005
  .word 0x00000000
  .word 0xae407698
  .word 0xae407690
  .word 0x1000001b
  .word 0x00000000
  .word 0x2482ffff
  .word 0x14a20008
  .word 0x00000000
  .word 0x8e42025c
  .word 0x2442ffff
  .word 0x00a21023
  .word 0xae427690
  .word 0xae457698
  .word 0x10000011
  .word 0x00000000
  .word 0x8e42025c
  .word 0x2442fffe
  .word 0x0045082a
  .word 0x10200006
  .word 0x00000000
  .word 0x00a21023
  .word 0xae427690
  .word 0xae457698
  .word 0x10000007
  .word 0x00000000
  .word 0xae407690
  .word 0xae457698
  .word 0x10000003
  .word 0x00000000
  .word 0xae407698
  .word 0xae407690
  .word 0x8e530260
  .word 0x2a610005
  .word 0x14200002
  .word 0x00000000
  .word 0x24130004
  .word 0x0000a02d
  .word 0x10000014
  .word 0x00000000
  .word 0x00141180
  .word 0x00541021
  .word 0x00021100
  .word 0x02228021
  .word 0x00141080
  .word 0x02421021
  .word 0x8c42008c
  .word 0xae020000
  .word 0x8e427690
  .word 0x00541021
  .word 0x00021040
  .word 0x02421021
  .word 0x8445009c
  .word 0x24040001
  .word 0x0c05c1d8
  .word 0x00000000
  .word 0x3042ffff
  .word 0xae020004
  .word 0x26940001
  .word 0x0293102a
  .word 0x1440ffeb
  .word 0x00000000
  .word 0xae407640
  .word 0xae5364a0
  .word 0x8e427698
  .word 0xae426498
  .word 0x8e427690
  .word 0xae42649c
  .word 0x8e420260
  .word 0xae4264a4
  .word 0xae406d28
  .word 0x0c088a4c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070003
  .word 0x0c042938
  .word 0x00000000
  .word 0x24030002
  .word 0xae430010
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
  .word 0x00000000
}

// FUN_00203030
void FUN_00203030(void)
{
    u8* work;
    s32 i;
    u32 handle;
    extern void func_003b2c60(u32, f32);

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    func_003b0e70(1);
    func_003b0e90(2);
    for (i = 0; i < 4; i++)
    {
        if (i >= *(s32*)(work + 0x260))
            break;
        if (i == 0)
        {
            handle = func_003b0970(
                (u32)func_00171110(*(s16*)(work + 0x9c + i * 2), 0),
                2, 6, 0, 0);
        }
        else
        {
            handle = func_003b0970(
                (u32)func_00171110(*(s16*)(work + 0x9c + i * 2), 0),
                2, 0, 0, 0);
        }
        func_003b0d70(handle, 0x730, (i * 9 * 2 + 0x118) * 8);
        func_003b2c60(handle, 0.0f);
        func_003b0e20(handle, -1);
        *(u32*)(work + 0x8c + i * 4) = handle;
    }
    *(u32*)(work + 0x25c) = i;
    func_003b0e90(1);
    func_003b0e70(2);
    *(u32*)work |= 4;
}

// FUN_002031C0
void FUN_002031C0(void)
{
    u8* work;
    u32* rows;
    s32 i;
    s32 visible;
    u32* row;
    s16 id;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    rows = (u32*)(work + 0x4a90);
    K_ASSERT((*(u32*)work & 4) != 0, 0x9e0);
    FUN_00203410();
    visible = *(s32*)(work + 0x260);
    if (visible > 4)
    {
        visible = 4;
    }
    for (i = 0; i < visible; i++)
    {
        row = rows + i * 0x104;
        row[0] = *(u32*)(work + 0x8c + i * 4);
        id = *(volatile s16*)(work + 0x9c +
                              (*(s32*)(work + 0x7690) + i) * 2);
        row[1] = func_00170760(1, id);
    }
    *(u32*)(work + 0x7640) = 0;
    *(u32*)(work + 0x64a0) = visible;
    *(u32*)(work + 0x6498) = *(u32*)(work + 0x7698);
    *(u32*)(work + 0x649c) = *(u32*)(work + 0x7690);
    *(u32*)(work + 0x64a4) = *(u32*)(work + 0x260);
    *(u32*)(work + 0x6d28) = 0;
    if (bcmIsItemUsable(func_0030bc20(
            *(u16*)((u8*)(uintptr_t)(*(s32*)(work + 0x7698) * 2) +
                    (uintptr_t)work + 0x9c))))
    {
        *(u32*)(work + 0x6d28) = 1;
        *(u32*)(work + 0x6d24) = FUN_00207960(
            (u16)func_0030bc20(
                *(u16*)((u8*)(uintptr_t)(*(s32*)(work + 0x7698) * 2) +
                        (uintptr_t)work + 0x9c)));
    }
    FUN_00222d60();
}


// FUN_00203360
void bcmDestroyCommandResources(void)
{
    u32* puVar1;
    int iVar2;

    K_ASSERT(gBcmWork != NULL, 0x164);
    puVar1 = (u32*)gBcmWork;
    for (iVar2 = 0; iVar2 < (int)puVar1[0x97]; iVar2++) {
        FUN_003b0170(*(u32*)((int)puVar1 + iVar2 * 4 + 0x8c));
    }
    if ((*puVar1 & 0x20) != 0) {
        FUN_003b0170(puVar1[0x99]);
    }
    *puVar1 &= 0xfffffffb;
}

// FUN_00203410
void FUN_00203410(void)
{
    u8* work;
    s32 destroyIndex;
    s32 rowIndex;
    s32 targetIndex;
    u32 handle;
    extern void func_003b2c60(u32, f32);

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    for (destroyIndex = 0; destroyIndex < *(s32*)(work + 0x25c);
         destroyIndex++)
    {
        func_003b0170(*(u32*)(work + 0x8c + destroyIndex * 4));
    }
    if (*(u32*)work & 0x800000)
    {
        func_00208360();
    }
    handle = bpRoot_003a5540_typed(
        100, 100, -1, 0.0f, 2, 6, (void*)func_003c7d60(5),
        *(u16*)((u8*)(uintptr_t)(*(s32*)(work + 0x7698) * 2) +
                 (uintptr_t)work + 0x9c) - 0xfa0);
    func_002082c0(handle);
    func_003b0e70(1);
    func_003b0e90(2);
    for (rowIndex = 0; rowIndex < *(s32*)(work + 0x25c); rowIndex++)
    {
        targetIndex = rowIndex + *(s32*)(work + 0x7690);
        if (*(s32*)(work + 0x7698) == targetIndex)
        {
            handle = func_003b0970(
                (u32)func_00171110(
                    *(s16*)(work + 0x9c + targetIndex * 2), 0),
                2, 6, 0, 0);
        }
        else
        {
            handle = func_003b0970(
                (u32)func_00171110(
                    *(s16*)(work + 0x9c + targetIndex * 2), 0),
                2, 0, 0, 0);
        }
        func_003b0d70(handle, 0x730,
                      (rowIndex * 9 * 2 + 0x118) * 8);
        func_003b2c60(handle, 0.0f);
        func_003b0e20(handle, -1);
        *(u32*)(work + 0x8c + rowIndex * 4) = handle;
    }
    func_003b0e90(1);
    func_003b0e70(2);
}
// FUN_00203630
void FUN_00203630(void)
{
    u8* work;
    u32* output;
    u16 selectedId;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    *(u32*)work |= 0x20;
    func_003b0e70(1);
    func_003b0e90(2);
    *(u32*)(work + 0x264) = func_003b0970(
        (u32)func_00171110(
            *(s16*)((u8*)(uintptr_t)(*(u32*)(work + 0x7698) * 2) +
                    (uintptr_t)work + 0x9c), 0),
        2, 6, 0, 0);
    func_003b0e90(1);
    func_003b0e70(2);
    output = (u32*)(work + 0x7130);
    output[0] = *(u32*)(work + 0x264);
    selectedId = *(u16*)((u8*)(uintptr_t)(*(u32*)(work + 0x7698) * 2) +
                         (uintptr_t)work + 0x9c);
    output[1] = func_00170760(1, (s16)selectedId);
    func_0022c0e0();
    printf("");
    FUN_0016F3E0(
        0x32, *(u16*)((u8*)(uintptr_t)(*(u32*)(work + 0x7698) * 2) +
                     (uintptr_t)work + 0x9c));
}
// FUN_00203760
void FUN_00203760(void)
{
    u8* work;
    s32 count;
    u32 heroId;
    s32 i;
    DatPersonaWork* persona;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    count = (u16)func_001756f0();
    heroId = datPersonaGetByPcId(1)->id;
    for (i = 0; i < count; i++)
    {
        persona = datPersonaGetHeroPersona((s16)i);
        if (persona->id != heroId)
            break;
    }
    if (i == count)
    {
        *(u32*)work |= 0x400;
        return;
    }
    if ((*(u32*)(work + 0x77a0) & 8) == 0)
        *(u32*)(work + 0xc) |= 8;
}

// FUN_00203850
void FUN_00203850(void)
{
    u8* work;
    u8* itemBase;
    s32 i;
    s32 count;
    u8* row;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    itemBase = work + 0x4a90;
    FUN_00203990();
    *(u32*)(work + 0x76c0) = 0;
    *(u32*)(work + 0x76c4) = 0;
    *(u32*)(work + 0x76cc) = 0;
    *(u32*)(work + 0x76c8) = *(u32*)(work + 0x2d8);
    *(u32*)(work + 0x76d0) = *(u32*)(work + 0x2dc);
    func_00208570(work + 0x76c0);
    count = *(s32*)(work + 0x2dc);
    if (count > 4)
        count = 4;
    for (i = 0; i < count; i++)
    {
        row = itemBase + i * 0x310;
        *(u32*)(row + 0x300) = *(u32*)(work + 0x2c8 + i * 4);
        *(u32*)(row + 0x304) =
            *(u32*)(work + 0x26c + (i + *(u32*)(work + 0x76c4)) * 8);
    }
    *(u32*)(work + 0x7640) = 0;
    *(u32*)(work + 0x64a0) = count;
    *(u32*)(work + 0x6498) = *(u32*)(work + 0x76cc);
    *(u32*)(work + 0x649c) = *(u32*)(work + 0x76c4);
    *(u32*)(work + 0x64a4) = *(u32*)(work + 0x2dc);
    bcmPanel00224660();
    FUN_0010a4e0(0, 0, 0, 3);
    *(u32*)(work + 0x14) = 0;
    *(u32*)(work + 0x10) = 3;
}

// FUN_00203990
void FUN_00203990(void)
{
    u8* work;
    s32 personaCount;
    s32 scanIndex;
    s32 count;
    u32 heroId;
    u32 handle;
    s32 rowIndex;
    DatPersonaWork* persona;
    extern void func_003b2c60(u32, f32);

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    personaCount = (u16)func_001756f0();
    count = 0;
    persona = datPersonaGetByPcId(1);
    heroId = persona->id;
    *(u16*)(work + 0x268) = heroId;
    *(u32*)(work + 0x26c) = persona->level;
    count++;
    for (scanIndex = 0; scanIndex < personaCount; scanIndex++)
    {
        persona = datPersonaGetHeroPersona((s16)scanIndex);
        if (persona->id != heroId)
        {
            *(u16*)(work + 0x268 + count * 8) = persona->id;
            *(u32*)(work + 0x26c + count * 8) = persona->level;
            count++;
        }
    }
    *(u32*)(work + 0x2dc) = count;
    *(u32*)(work + 0x2d8) = count;
    if (count > 4)
        *(u32*)(work + 0x2d8) = 4;
    func_003b0e70(1);
    func_003b0e90(2);
    for (rowIndex = 0; rowIndex < *(s32*)(work + 0x2d8); rowIndex++)
    {
        handle = func_003b0970(
            func_00173220(*(u16*)(work + 0x268 + rowIndex * 8)),
            2, 6, 0, 0);
        func_003b0d70(handle, 0x730, (rowIndex * 9 * 2 + 0x118) * 8);
        func_003b2c60(handle, 0.0f);
        func_003b0e20(handle, -1);
        *(u32*)(work + 0x2c8 + rowIndex * 4) = handle;
    }
    func_003b0e90(1);
    func_003b0e70(2);
    *(u32*)work |= 8;
}

// FUN_00203B70
void FUN_00203B70(void)
{
    u8* p;
    s32 i;

    K_ASSERT(gBcmWork != NULL, 0x164);
    p = gBcmWork;
    K_ASSERT((*(u32*)p & 8) != 0, 0xaf6);
    for (i = 0; i < (s32)*(u32*)(p + 0x2d8); i++)
    {
        func_003b0170(*(u32*)(p + 0x2c8 + i * 4));
    }
    *(u32*)p &= ~8u;
}

// FUN_00203C30
void FUN_00203C30(void)
{
    u8* work;
    u8* rows;
    s32 i;
    s32 j;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    rows = work + 0x4a90;
    K_ASSERT((*(u32*)work & 8) != 0, 0xb07);
    FUN_00203DE0();
    for (i = 0; i < *(s32*)(work + 0x2d8); i++)
    {
        if (i == *(s32*)(work + 0x76cc) -
                 *(s32*)(work + 0x76c4))
        {
            K_ASSERT(gBcmWork != NULL, 0x164);
        }
    }
    for (i = 0; i < *(s32*)(work + 0x2d8); i++)
    {
        func_003b0d70(*(u32*)(work + 0x2c8 + i * 4),
                      0x730, (i * 18 + 0x118) * 8);
    }
    for (j = 0; j < *(s32*)(work + 0x2d8); j++)
    {
        *(u32*)(rows + j * 0x310 + 0x300) =
            *(u32*)(work + 0x2c8 + j * 4);
        *(u32*)(rows + j * 0x310 + 0x304) =
            *(u32*)(work + 0x26c +
                    (j + *(s32*)(work + 0x76c4)) * 8);
    }
    *(u32*)(work + 0x7640) = 0;
    *(u32*)(work + 0x64a0) = *(u32*)(work + 0x2d8);
    *(u32*)(work + 0x6498) = *(u32*)(work + 0x76cc);
    *(u32*)(work + 0x649c) = *(u32*)(work + 0x76c4);
    *(u32*)(work + 0x64a4) = *(u32*)(work + 0x2dc);
    FUN_00224860();
}

// FUN_00203DE0
void FUN_00203DE0(void)
{
    u8* work;
    u32 heroId;
    s32 mode;
    u16 id;
    u32 handle;
    s32 i;
    extern void func_003b2c60(u32, f32);

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    heroId = datPersonaGetByPcId(1)->id;
    for (i = 0; i < *(s32*)(work + 0x2d8); i++)
        func_003b0170(*(u32*)(work + 0x2c8 + i * 4));
    func_003b0e70(1);
    func_003b0e90(2);
    i = 0;
    heroId = (u16)heroId;
    while (i < *(s32*)(work + 0x2d8))
    {
        if (i == *(s32*)(work + 0x76cc) - *(s32*)(work + 0x76c4))
            mode = 6;
        else
            mode = 0;
        id = *(u16*)(work + 0x268 +
                     (i + *(s32*)(work + 0x76c4)) * 8);
        if (id == heroId)
            mode = 6;
        handle = func_003b0970(
            func_00173220(id), 2, (s8)mode, 0, 0);
        func_003b0d70(handle, 0x730, (i * 9 * 2 + 0x118) * 8);
        func_003b2c60(handle, 0.0f);
        id = *(u16*)(work + 0x268 +
                     (i + *(s32*)(work + 0x76c4)) * 8);
        if (id == heroId)
        {
            if (i == *(s32*)(work + 0x76cc) -
                     *(s32*)(work + 0x76c4))
                func_003b0e20(handle, 0xffe678ff);
            else
                func_003b0e20(handle, 0x785a28ff);
        }
        else
        {
            func_003b0e20(handle, -1);
        }
        *(u32*)(work + 0x2c8 + i * 4) = handle;
        i++;
    }
    func_003b0e90(1);
    func_003b0e70(2);
}

// W418 negative probes: FUN_00204000 i s16 nd646/1140B -> 667/1180B (over 1152B); FUN_00204760 i s16 nd390/876B -> 532/900B (reverted).
// W419 negative probe: FUN_00204000 direct data.ids[i] nd680/1140B, window1152B, rate59.65%; reverted.
// FUN_00204000
asm void FUN_00204000(void)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f83b5f8
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050164
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b5f8
  .word 0x8f90b6fc
  .word 0x8e230000
  .word 0x00601827
  .word 0x30630010
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050b85
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000982d
  .word 0x8e100150
  .word 0x1000001a
  .word 0x00000000
  .word 0x8e03009c
  .word 0x00601827
  .word 0x30630008
  .word 0x14600014
  .word 0x00000000
  .word 0x8e030a2c
  .word 0x94640002
  .word 0x24030001
  .word 0x1083000f
  .word 0x00000000
  .word 0x8e0300a8
  .word 0x00131080
  .word 0x005d1021
  .word 0xac430080
  .word 0x00139040
  .word 0x025d1021
  .word 0xa4440078
  .word 0x0004243c
  .word 0x0004243f
  .word 0x0c05b760
  .word 0x00000000
  .word 0x025d1821
  .word 0xa4620070
  .word 0x26730001
  .word 0x8e100a34
  .word 0x1600ffe6
  .word 0x00000000
  .word 0x0000902d
  .word 0x0000a02d
  .word 0x1000002a
  .word 0x00000000
  .word 0x0014a840
  .word 0x02bd2821
  .word 0x24a30078
  .word 0x94700000
  .word 0x2e01000b
  .word 0x10200021
  .word 0x00000000
  .word 0x3c04007b
  .word 0x24847350
  .word 0x00101880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400016
  .word 0x00000000
  .word 0x24030009
  .word 0x16030013
  .word 0x00000000
  .word 0x02bd1821
  .word 0x94640070
  .word 0x2403000a
  .word 0x1483000e
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050baf
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x94a40070
  .word 0x2403000a
  .word 0x10830002
  .word 0x00000000
  .word 0x26520001
  .word 0x26940001
  .word 0x0293182a
  .word 0x1460ffd5
  .word 0x00000000
  .word 0x0000802d
  .word 0x2a430002
  .word 0x14600004
  .word 0x00000000
  .word 0xae2002e0
  .word 0xae2002e4
  .word 0x26100001
  .word 0x0000482d
  .word 0x24060001
  .word 0x2404000a
  .word 0x1000001a
  .word 0x00000000
  .word 0x00101840
  .word 0x00701821
  .word 0x000318c0
  .word 0x02234021
  .word 0x250702e0
  .word 0xad0002e0
  .word 0xad0602e4
  .word 0x00091880
  .word 0x007d1821
  .word 0x8c630080
  .word 0xad0302e8
  .word 0x00091840
  .word 0x007d2821
  .word 0x94a30078
  .word 0xa50302ec
  .word 0x24a30070
  .word 0x94630000
  .word 0xad0302f0
  .word 0x14640004
  .word 0x00000000
  .word 0x8ce30000
  .word 0x34630002
  .word 0xace30000
  .word 0x26100001
  .word 0x25290001
  .word 0x0133182a
  .word 0x1460ffe5
  .word 0x00000000
  .word 0x8e240000
  .word 0x2403bfff
  .word 0x00832024
  .word 0xae240000
  .word 0x3c03ffff
  .word 0x34637fff
  .word 0x00832024
  .word 0xae240000
  .word 0x3c03fffe
  .word 0x3463ffff
  .word 0x00832024
  .word 0xae240000
  .word 0x3c03fffd
  .word 0x3463ffff
  .word 0x00832024
  .word 0xae240000
  .word 0x3c03fffb
  .word 0x3463ffff
  .word 0x00832024
  .word 0xae240000
  .word 0x3c03fff7
  .word 0x3463ffff
  .word 0x00831824
  .word 0xae230000
  .word 0x8e240020
  .word 0x24030002
  .word 0x10830051
  .word 0x00000000
  .word 0x24030001
  .word 0x10830005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000004a
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0b6d14
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x8e220000
  .word 0x34434000
  .word 0xae230000
  .word 0x3c020002
  .word 0x00621025
  .word 0xae220000
  .word 0x24040001
  .word 0x0c0b6d14
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x8e220000
  .word 0x34438000
  .word 0xae230000
  .word 0x3c020004
  .word 0x00621025
  .word 0xae220000
  .word 0x0000202d
  .word 0x0c0b6d14
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c020001
  .word 0x00621825
  .word 0xae230000
  .word 0x3c020008
  .word 0x00621025
  .word 0xae220000
  .word 0x8e230000
  .word 0x3c02ffef
  .word 0x3442ffff
  .word 0x00621024
  .word 0xae220000
  .word 0x24041300
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c020010
  .word 0x00621025
  .word 0xae220000
  .word 0x8e230000
  .word 0x3c02ffdf
  .word 0x3442ffff
  .word 0x00621024
  .word 0xae220000
  .word 0x0c0b6d20
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c020020
  .word 0x00621025
  .word 0xae220000
  .word 0x0c0b6d20
  .word 0x00000000
  .word 0x3043ffff
  .word 0xae2377b0
  .word 0x00101840
  .word 0x00701821
  .word 0x000318c0
  .word 0x00712021
  .word 0xac8002e0
  .word 0x24030002
  .word 0xac8302e4
  .word 0x26100001
  .word 0xae3003a8
  .word 0xae3003ac
  .word 0x2a010008
  .word 0x14200003
  .word 0x00000000
  .word 0x24030007
  .word 0xae2303ac
  .word 0x8e2377a0
  .word 0x30630040
  .word 0x1460000b
  .word 0x00000000
  .word 0x12000006
  .word 0x00000000
  .word 0x8e23000c
  .word 0x34630004
  .word 0xae23000c
  .word 0x10000004
  .word 0x00000000
  .word 0x8e230000
  .word 0x34630200
  .word 0xae230000
  .word 0xdfbf0060
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
}

#pragma opt_loop_invariants on
// FUN_00204480
void FUN_00204480(void)
{
    u8* work;
    u8* itemBase;
    u8* srcRow;
    u8* dstRow;
    s32 i;
    s32 j;
    s32 count;
    s32 found;
    s32 selected;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    itemBase = work + 0x4a90;
    *(u32*)(work + 0x76f4) = 0;
    *(u32*)(work + 0x76fc) = *(u32*)(work + 0x3ac);
    *(u32*)(work + 0x7704) = *(u32*)(work + 0x3a8);
    func_00208570(work + 0x76f4);
    if (datGetFlag(0x186) != 0)
    {
        selected = FUN_0016F380(0x33);
        if (selected == 0)
        {
            *(u32*)(work + 0x7700) = 0;
            *(u32*)(work + 0x76f8) = 0;
        }
        else
        {
            found = 0;
            i = 0;
            count = *(u32*)(work + 0x3a8);
            for (; i < count; i++)
            {
                srcRow = work + 0x2e0 + i * 0x18;
                switch (*(u32*)(srcRow + 4))
                {
                    case 1:
                        if (selected == *(u16*)(srcRow + 0xc))
                            found = 1;
                        break;
                    case 0:
                        if (selected == 0xc)
                            found = 1;
                        break;
                    case 2:
                        if (selected == 0xb)
                            found = 1;
                        break;
                    default:
                        break;
                }
                if (found != 0)
                    break;
            }
            if (i == count)
            {
                *(u32*)(work + 0x7700) = 0;
                *(u32*)(work + 0x76f8) = 0;
            }
            else
            {
                *(u32*)(work + 0x7700) = i;
                *(u32*)(work + 0x76f8) = 0;
            }
        }
    }
    else
    {
        *(u32*)(work + 0x7700) = 0;
        *(u32*)(work + 0x76f8) = 0;
    }
    FUN_00204760();
    for (j = 0; j < *(s32*)(work + 0x3ac); j++)
    {
        srcRow = work + 0x2e0 + j * 0x18;
        dstRow = itemBase + j * 0x420;
        *(u32*)(dstRow + 0x410) = 0;
        switch (*(u32*)(srcRow + 4))
        {
            case 1:
                *(u32*)dstRow = 0;
                *(u32*)(dstRow + 8) =
                    *(u32*)(work + 0x370 + j * 8);
                *(u32*)(dstRow + 0xc) =
                    *(u32*)(work + 0x374 + j * 8);
                break;
            case 0:
                *(u32*)dstRow = 1;
                *(u32*)(dstRow + 8) =
                    *(u32*)(work + 0x370 + j * 8);
                break;
            case 2:
                *(u32*)dstRow = 2;
                *(u32*)(dstRow + 8) =
                    *(u32*)(work + 0x370 + j * 8);
                *(u32*)(dstRow + 0xc) =
                    *(u32*)(work + 0x374 + j * 8);
                break;
            default:
                break;
        }
        if ((*(u32*)srcRow & 2) != 0)
            *(u32*)(dstRow + 0x410) = 1;
    }
    count = *(s32*)(work + 0x3ac);
    if (count < 5)
        *(u32*)(work + 0x7640) = 0;
    else
        *(u32*)(work + 0x7640) = count - 4;
    *(u32*)(work + 0x64a0) = *(u32*)(work + 0x3ac);
    *(u32*)(work + 0x6498) = *(u32*)(work + 0x7700);
    *(u32*)(work + 0x649c) = *(u32*)(work + 0x76f8);
    *(u32*)(work + 0x64a4) = *(u32*)(work + 0x3a8);
    bcmPanel00222fa0();
    FUN_0010a4e0(0, 0, 0, 3);
    *(u32*)(work + 0x10) = 4;
}

#pragma opt_loop_invariants off

// W418 negative probe: FUN_00204760 i s16 nd390/876B -> 532/900B (reverted).
// FUN_00204760
asm void FUN_00204760(void)
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
  .word 0x8f82b5f8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050164
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f92b5f8
  .word 0x8e420000
  .word 0x00401027
  .word 0x30420010
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050ca2
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ec39c
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0ec3a4
  .word 0x00000000
  .word 0x0000a02d
  .word 0x100000a8
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x000210c0
  .word 0x02421021
  .word 0x245102e0
  .word 0x8e437700
  .word 0x8e4276f8
  .word 0x02821021
  .word 0x14620004
  .word 0x00000000
  .word 0x24100006
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x8e230004
  .word 0x24050002
  .word 0x1065004e
  .word 0x00000000
  .word 0x24020001
  .word 0x1062001b
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000008e
  .word 0x00000000
  .word 0x0010363c
  .word 0x0006363f
  .word 0x8f849724
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040982d
  .word 0x44806000
  .word 0x0260202d
  .word 0x0c0ecb18
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405ffff
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x001410c0
  .word 0x02421021
  .word 0xac530370
  .word 0xac400374
  .word 0x10000078
  .word 0x00000000
  .word 0x8624000c
  .word 0x0c05dde4
  .word 0x00000000
  .word 0x0010363c
  .word 0x0006363f
  .word 0x0040202d
  .word 0x24050002
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040982d
  .word 0x44806000
  .word 0x0260202d
  .word 0x0c0ecb18
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405ffff
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x001410c0
  .word 0x0242a821
  .word 0xaeb30370
  .word 0x8e220010
  .word 0x00021880
  .word 0x3c020068
  .word 0x24424f00
  .word 0x00431021
  .word 0x0010363c
  .word 0x0006363f
  .word 0x8c44fffc
  .word 0x24050002
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040982d
  .word 0x44806000
  .word 0x0260202d
  .word 0x0c0ecb18
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405ffff
  .word 0x0c0ec388
  .word 0x00000000
  .word 0xaeb30374
  .word 0x10000048
  .word 0x00000000
  .word 0x8e420020
  .word 0x14450006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050cd6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e430020
  .word 0x24020001
  .word 0x10620013
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x24040004
  .word 0x0c05dde4
  .word 0x00000000
  .word 0x0010363c
  .word 0x0006363f
  .word 0x0040202d
  .word 0x24050002
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040982d
  .word 0x1000000d
  .word 0x00000000
  .word 0x24040006
  .word 0x0c05dde4
  .word 0x00000000
  .word 0x0010363c
  .word 0x0006363f
  .word 0x0040202d
  .word 0x24050002
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040982d
  .word 0x44806000
  .word 0x0260202d
  .word 0x0c0ecb18
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405ffff
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x001410c0
  .word 0x02428821
  .word 0xae330370
  .word 0x0010363c
  .word 0x0006363f
  .word 0x8f849720
  .word 0x24050002
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040982d
  .word 0x44806000
  .word 0x0260202d
  .word 0x0c0ecb18
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405ffff
  .word 0x0c0ec388
  .word 0x00000000
  .word 0xae330374
  .word 0x26940001
  .word 0x8e4203ac
  .word 0x0282102a
  .word 0x1440ff56
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ec3a4
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0ec39c
  .word 0x00000000
  .word 0x8e430000
  .word 0x34630010
  .word 0xae430000
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

// FUN_00204AF0
void FUN_00204AF0(void)
{
    u8* work;
    u8* row;
    s32 i;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    for (i = 0; i < *(s32*)(work + 0x3a8); i++)
    {
        row = work + i * 0x18 + 0x2e0;
        switch (*(u32*)(row + 4))
        {
        case 1:
            datSetAiTactic(*(s16*)(row + 0xc), *(s16*)(row + 0x10));
            if (*(u32*)(row + 0x10) == 7)
            {
                FUN_002C0A50(
                    FUN_001FF430_y2(*(u32*)(row + 8)),
                    *(u32*)(row + 0x14));
            }
            break;
        default:
            break;
        }
    }
    *(u32*)(work + 4) |= 4;
}

// FUN_00204BE0
void FUN_00204BE0(void)
{
    u8* work;
    u8* row;
    s32 i;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    K_ASSERT((*(u32*)work & 0x10) != 0, 0xd30);
    for (i = 0; i < *(s32*)(work + 0x3ac); i++)
    {
        row = work + i * 8;
        if (*(u32*)(row + 0x370) != 0)
            func_003b0170(*(u32*)(row + 0x370));
        if (*(u32*)(row + 0x374) != 0)
            func_003b0170(*(u32*)(row + 0x374));
    }
    *(u32*)work &= ~0x10u;
}
// FUN_00204CC0
asm void FUN_00204CC0(void)
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
  .word 0x8f82b5f8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050164
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b5f8
  .word 0x26164a90
  .word 0x8e020000
  .word 0x30420010
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050d47
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0c081400
  .word 0x00000000
  .word 0x0000982d
  .word 0x1000005d
  .word 0x00000000
  .word 0x8e0276f8
  .word 0x02621821
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02021021
  .word 0x245102e0
  .word 0x8e027700
  .word 0x1662001b
  .word 0x00000000
  .word 0x8f82b5f8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050164
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f82b5f8
  .word 0x8c430000
  .word 0x30620001
  .word 0x0002102b
  .word 0x14400004
  .word 0x00000000
  .word 0x3c022000
  .word 0x00621024
  .word 0x0002102b
  .word 0x10400004
  .word 0x00000000
  .word 0x3414ffff
  .word 0x10000006
  .word 0x00000000
  .word 0x3c028080
  .word 0x3454ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x2414ffff
  .word 0x8e230004
  .word 0x24020002
  .word 0x10620019
  .word 0x00000000
  .word 0x24020001
  .word 0x10620016
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000002c
  .word 0x00000000
  .word 0x001318c0
  .word 0x02031021
  .word 0x8c510370
  .word 0x00731021
  .word 0x00021040
  .word 0x24420118
  .word 0x000230c0
  .word 0x0220202d
  .word 0x24050730
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x001310c0
  .word 0x0202a821
  .word 0x8eb10370
  .word 0x00531021
  .word 0x00021040
  .word 0x24420118
  .word 0x000290c0
  .word 0x0220202d
  .word 0x24050730
  .word 0x0240302d
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x8eb10374
  .word 0x0220202d
  .word 0x24050f50
  .word 0x0240302d
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x26730001
  .word 0x8e0203ac
  .word 0x0262102a
  .word 0x1440ffa1
  .word 0x00000000
  .word 0x0000182d
  .word 0x24060001
  .word 0x24070002
  .word 0x10000033
  .word 0x00000000
  .word 0x00031140
  .word 0x00431021
  .word 0x00021140
  .word 0x02c21021
  .word 0x8e0476f8
  .word 0x00642821
  .word 0x00052040
  .word 0x00852021
  .word 0x000420c0
  .word 0x02042021
  .word 0x248802e0
  .word 0xac400410
  .word 0x8c8402e4
  .word 0x10870017
  .word 0x00000000
  .word 0x1086000c
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0xac460000
  .word 0x000320c0
  .word 0x02042021
  .word 0x8c840370
  .word 0xac440008
  .word 0x10000011
  .word 0x00000000
  .word 0xac400000
  .word 0x000320c0
  .word 0x02042821
  .word 0x8ca40370
  .word 0xac440008
  .word 0x8ca40374
  .word 0xac44000c
  .word 0x10000008
  .word 0x00000000
  .word 0xac470000
  .word 0x000320c0
  .word 0x02042821
  .word 0x8ca40370
  .word 0xac440008
  .word 0x8ca40374
  .word 0xac44000c
  .word 0x8d040000
  .word 0x30840002
  .word 0x10800002
  .word 0x00000000
  .word 0xac460410
  .word 0x24630001
  .word 0x8e0403ac
  .word 0x0064102a
  .word 0x1440ffcb
  .word 0x00000000
  .word 0xae0464a0
  .word 0x8e027700
  .word 0xae026498
  .word 0x8e0276f8
  .word 0xae02649c
  .word 0x8e0203a8
  .word 0xae0264a4
  .word 0x0c088c38
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


/* Removing this loses FUN_00204480 (MATCH nd0 -> MISMATCH nd341) - measured W308. */
// W418 negative probe: FUN_00205000 i s16 nd548/956B -> 663/1004B (over 960B); reverted.
// FUN_00205000
asm void FUN_00205000(void)
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
  .word 0x8f82b5f8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050164
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f92b5f8
  .word 0x0000802d
  .word 0x10000014
  .word 0x00000000
  .word 0x001010c0
  .word 0x02429821
  .word 0x26710370
  .word 0x8e640370
  .word 0x10800004
  .word 0x00000000
  .word 0x0c0ec05c
  .word 0x00000000
  .word 0xae200000
  .word 0x8e640374
  .word 0x10800007
  .word 0x00000000
  .word 0x001010c0
  .word 0x02421021
  .word 0x24510374
  .word 0x0c0ec05c
  .word 0x00000000
  .word 0xae200000
  .word 0x26100001
  .word 0x8e4203ac
  .word 0x0202102a
  .word 0x1440ffea
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ec39c
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0ec3a4
  .word 0x00000000
  .word 0x0000982d
  .word 0x100000a7
  .word 0x00000000
  .word 0x8e4276f8
  .word 0x02621821
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02421021
  .word 0x245102e0
  .word 0x8e427700
  .word 0x14430004
  .word 0x00000000
  .word 0x24100006
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x8e230004
  .word 0x24050002
  .word 0x1065004d
  .word 0x00000000
  .word 0x24020001
  .word 0x1062001a
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000008d
  .word 0x00000000
  .word 0x0010363c
  .word 0x0006363f
  .word 0x8f849724
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040a02d
  .word 0x44806000
  .word 0x0280202d
  .word 0x0c0ecb18
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405ffff
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x001310c0
  .word 0x02421021
  .word 0xac540370
  .word 0x10000078
  .word 0x00000000
  .word 0x8624000c
  .word 0x0c05dde4
  .word 0x00000000
  .word 0x0010363c
  .word 0x0006363f
  .word 0x0040202d
  .word 0x24050002
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040a02d
  .word 0x44806000
  .word 0x0280202d
  .word 0x0c0ecb18
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405ffff
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x001310c0
  .word 0x0242a821
  .word 0xaeb40370
  .word 0x8e220010
  .word 0x00021880
  .word 0x3c020068
  .word 0x24424f00
  .word 0x00431021
  .word 0x0010363c
  .word 0x0006363f
  .word 0x8c44fffc
  .word 0x24050002
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040a02d
  .word 0x44806000
  .word 0x0280202d
  .word 0x0c0ecb18
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405ffff
  .word 0x0c0ec388
  .word 0x00000000
  .word 0xaeb40374
  .word 0x10000048
  .word 0x00000000
  .word 0x8e420020
  .word 0x14450006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050de2
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e430020
  .word 0x24020001
  .word 0x10620013
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x24040004
  .word 0x0c05dde4
  .word 0x00000000
  .word 0x0010363c
  .word 0x0006363f
  .word 0x0040202d
  .word 0x24050002
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040a02d
  .word 0x1000000d
  .word 0x00000000
  .word 0x24040006
  .word 0x0c05dde4
  .word 0x00000000
  .word 0x0010363c
  .word 0x0006363f
  .word 0x0040202d
  .word 0x24050002
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040a02d
  .word 0x44806000
  .word 0x0280202d
  .word 0x0c0ecb18
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405ffff
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x001310c0
  .word 0x02428821
  .word 0xae340370
  .word 0x0010363c
  .word 0x0006363f
  .word 0x8f849720
  .word 0x24050002
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040a02d
  .word 0x44806000
  .word 0x0280202d
  .word 0x0c0ecb18
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405ffff
  .word 0x0c0ec388
  .word 0x00000000
  .word 0xae340374
  .word 0x26730001
  .word 0x8e4203ac
  .word 0x0262102a
  .word 0x1440ff57
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ec3a4
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0ec39c
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
// FUN_002053C0
u32 FUN_002053C0(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    return *(u32*)gBcmWork & 0x20;
}

// FUN_00205410
void FUN_00205410(void)
{
    u8* work;
    u32 state;
    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    state = *(u32*)(work + 0x10);
    switch (state)
    {
    case 1:
        func_003b0170(*(u32*)(work + 0x88));
        func_0022c0a0();
        break;
    case 2:
        func_003b0170(*(u32*)(work + 0x264));
        func_0022c1d0();
        break;
    default:
        break;
    }
    *(u32*)work &= ~0x20u;
}

// FUN_002054C0
u32 FUN_002054C0(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    return *(u32*)(gBcmWork + 0x24);
}

// FUN_00205500
u16 FUN_00205500(void)
{
    u8* work;
    u8* base;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    base = work + 0x2c;
    return *(u16*)(base + *(u32*)(work + 0x7664) * 8);
}

// FUN_00205550
u16 FUN_00205550(void)
{
    u8* work;
    u8* base;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    base = work + 0x9c;
    return *(u16*)(base + *(u32*)(work + 0x7698) * 2);
}

// FUN_002055A0
u16 FUN_002055A0(void)
{
    u8* work;
    u8* base;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    base = work + 0x268;
    return *(u16*)(base + *(u32*)(work + 0x76cc) * 8);
}
// FUN_002055F0
u32 FUN_002055F0(u32 id)
{
    u8* record;

    if ((u16)id >= 0x1d0)
    {
        return 0;
    }
    record = DAT_007ce3f8;
    return !(~record[(u16)id * 0x2c + 1] & 2);
}

// FUN_00205650
u32 FUN_00205650(s32 id)
{
    void* record;
    u32 state;

    record = func_00170e90((s16)id);
    state = *(u32*)((u8*)record + 4);
    if (state != 0 && state != 1)
    {
        return 0;
    }
    return 1;
}

// FUN_002056A0
void FUN_002056A0(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    if ((*(u32*)(gBcmWork + 0x77a0) & 1) == 0)
        *(u32*)(gBcmWork + 0xc) |= 0x20;
}

// FUN_00205700
void FUN_00205700(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    if ((*(u32*)(gBcmWork + 0x77a0) & 0x10) == 0)
        *(u32*)(gBcmWork + 0xc) |= 0x10;
}

// FUN_00205760
void FUN_00205760(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    if ((*(u32*)(gBcmWork + 0x77a0) & 0x20) == 0)
        *(u32*)(gBcmWork + 0xc) |= 0x40;
}

// W415 negative probe: simple type==1/type==2 inversion preserved call order but raised nd 863->869; not retained.
// W418 negative probe: narrowing i to s16 regressed nd852/1404B -> nd1032/1476B (over the 1440B window); reverted.
// FUN_002057C0
asm void FUN_002057C0(void)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82b5f8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050164
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b5f8
  .word 0x8e220000
  .word 0x00401027
  .word 0x30421000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050e89
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000902d
  .word 0x24130001
  .word 0x10000057
  .word 0x00000000
  .word 0x2e61000b
  .word 0x1020004f
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637380
  .word 0x00131080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x2404121a
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400043
  .word 0x00000000
  .word 0x10000045
  .word 0x00000000
  .word 0x2404121b
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440003c
  .word 0x00000000
  .word 0x1000003e
  .word 0x00000000
  .word 0x2404121c
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400035
  .word 0x00000000
  .word 0x10000037
  .word 0x00000000
  .word 0x2404121d
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440002e
  .word 0x00000000
  .word 0x10000030
  .word 0x00000000
  .word 0x2404121e
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400027
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x8e237700
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02221021
  .word 0x245002e0
  .word 0x8c4302e4
  .word 0x24020002
  .word 0x10620016
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x1060001a
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x9603000c
  .word 0x24020003
  .word 0x10620010
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400010
  .word 0x00000000
  .word 0x9603000c
  .word 0x24020009
  .word 0x1462000c
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050ec8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00121080
  .word 0x02221021
  .word 0xac5303b0
  .word 0x26520001
  .word 0x26730001
  .word 0x2a62000b
  .word 0x1440ffa8
  .word 0x00000000
  .word 0xae320404
  .word 0xae320400
  .word 0x2a410005
  .word 0x14200003
  .word 0x00000000
  .word 0x24020004
  .word 0xae220400
  .word 0x24040001
  .word 0x0c0ec39c
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0ec3a4
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000023
  .word 0x00000000
  .word 0x00121080
  .word 0x02228021
  .word 0x8e0203b0
  .word 0x00021880
  .word 0x3c020068
  .word 0x24424f00
  .word 0x00431021
  .word 0x8c44fffc
  .word 0x24050002
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040982d
  .word 0x001210c0
  .word 0x00521021
  .word 0x00021040
  .word 0x24420118
  .word 0x000230c0
  .word 0x0260202d
  .word 0x24051450
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x44806000
  .word 0x0260202d
  .word 0x0c0ecb18
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405ffff
  .word 0x0c0ec388
  .word 0x00000000
  .word 0xae1303d8
  .word 0x26520001
  .word 0x8e220400
  .word 0x0242102a
  .word 0x1440ffdb
  .word 0x00000000
  .word 0xae2077ac
  .word 0x8e237700
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x00512021
  .word 0x8c8302e4
  .word 0x10600025
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000028
  .word 0x00000000
  .word 0x848402ec
  .word 0x0c05dd68
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050002
  .word 0x24060006
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0xae2277a8
  .word 0x8e237700
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x00511021
  .word 0x8c4202f0
  .word 0x00021880
  .word 0x3c020068
  .word 0x24424efc
  .word 0x00431021
  .word 0x8c440000
  .word 0x24050002
  .word 0x24060006
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0xae2277ac
  .word 0x10000009
  .word 0x00000000
  .word 0x8f849724
  .word 0x24050002
  .word 0x24060006
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0xae2277a8
  .word 0x24040001
  .word 0x0c0ec3a4
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0ec39c
  .word 0x00000000
  .word 0xae207728
  .word 0xae207734
  .word 0xae20772c
  .word 0x8e220400
  .word 0xae227730
  .word 0x8e220404
  .word 0xae227738
  .word 0x26247728
  .word 0x0c08215c
  .word 0x00000000
  .word 0x8e237700
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x00512021
  .word 0x8c8302e4
  .word 0x1060001f
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0x8c8402f0
  .word 0x0000802d
  .word 0x8e230404
  .word 0x10000007
  .word 0x00000000
  .word 0x00101080
  .word 0x02221021
  .word 0x8c4203b0
  .word 0x10440005
  .word 0x00000000
  .word 0x26100001
  .word 0x0203102a
  .word 0x1440fff8
  .word 0x00000000
  .word 0x0203102a
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050f21
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xae307734
  .word 0x10000009
  .word 0x00000000
  .word 0xae207734
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050f2a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e240404
  .word 0x8e237734
  .word 0x2482ffff
  .word 0x14620006
  .word 0x00000000
  .word 0x8e220400
  .word 0x00821023
  .word 0xae22772c
  .word 0x10000008
  .word 0x00000000
  .word 0x8e220400
  .word 0x2442fffe
  .word 0x0043082a
  .word 0x10200003
  .word 0x00000000
  .word 0x00621023
  .word 0xae22772c
  .word 0x0000202d
  .word 0x1000000b
  .word 0x00000000
  .word 0x00041100
  .word 0x00441021
  .word 0x00021100
  .word 0x02221821
  .word 0xac6064b0
  .word 0x00041080
  .word 0x02221021
  .word 0x8c4203d8
  .word 0xac6264b4
  .word 0x24840001
  .word 0x8e220400
  .word 0x0082102a
  .word 0x1440fff3
  .word 0x00000000
  .word 0x8e220404
  .word 0xae226a00
  .word 0x8e227734
  .word 0xae226a04
  .word 0x8e22772c
  .word 0xae226a08
  .word 0x8e220400
  .word 0xae226a0c
  .word 0x8e2277a8
  .word 0xae226a10
  .word 0x8e2277ac
  .word 0xae226a14
  .word 0xae206d28
  .word 0x0c089528
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070003
  .word 0x0c042938
  .word 0x00000000
  .word 0x3c040068
  .word 0x24845080
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e230000
  .word 0x34631000
  .word 0xae230000
  .word 0xae20001c
  .word 0x24030005
  .word 0xae230010
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}

// W418 negative probe: narrowing i to s16 regressed nd545/812B -> nd604/868B (over the 848B window); reverted.
// FUN_00205D60
asm void FUN_00205D60(void)
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
  .word 0x8f82b5f8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050164
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b5f8
  .word 0x26164a90
  .word 0x0000982d
  .word 0x1000005d
  .word 0x00000000
  .word 0x8e0276f8
  .word 0x02621821
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02021021
  .word 0x245102e0
  .word 0x8e027700
  .word 0x1443001b
  .word 0x00000000
  .word 0x8f82b5f8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050164
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f82b5f8
  .word 0x8c430000
  .word 0x30620001
  .word 0x0002102b
  .word 0x14400004
  .word 0x00000000
  .word 0x3c022000
  .word 0x00621024
  .word 0x0002102b
  .word 0x10400004
  .word 0x00000000
  .word 0x3414ffff
  .word 0x10000006
  .word 0x00000000
  .word 0x3c028080
  .word 0x3454ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x2414ffff
  .word 0x8e230004
  .word 0x24020002
  .word 0x10620019
  .word 0x00000000
  .word 0x24020001
  .word 0x10620016
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000002c
  .word 0x00000000
  .word 0x001318c0
  .word 0x02031021
  .word 0x8c510370
  .word 0x00731021
  .word 0x00021040
  .word 0x24420118
  .word 0x000230c0
  .word 0x0220202d
  .word 0x24050730
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x001310c0
  .word 0x0202a821
  .word 0x8eb10370
  .word 0x00531021
  .word 0x00021040
  .word 0x24420118
  .word 0x000290c0
  .word 0x0220202d
  .word 0x24050730
  .word 0x0240302d
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x8eb10374
  .word 0x0220202d
  .word 0x24050f50
  .word 0x0240302d
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x26730001
  .word 0x8e0203ac
  .word 0x0262102a
  .word 0x1440ffa1
  .word 0x00000000
  .word 0x0000182d
  .word 0x24070001
  .word 0x24080002
  .word 0x10000038
  .word 0x00000000
  .word 0x00031140
  .word 0x00431021
  .word 0x00021140
  .word 0x02c21021
  .word 0x8e0476f8
  .word 0x00645021
  .word 0x000a2040
  .word 0x008a2021
  .word 0x000420c0
  .word 0x02042021
  .word 0x248902e0
  .word 0xac400410
  .word 0x8c8402e4
  .word 0x1088001c
  .word 0x00000000
  .word 0x1087000c
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0xac470000
  .word 0x000320c0
  .word 0x02042021
  .word 0x8c840370
  .word 0xac440008
  .word 0x10000016
  .word 0x00000000
  .word 0xac400000
  .word 0x000320c0
  .word 0x02043021
  .word 0x8cc40370
  .word 0xac440008
  .word 0x24c50374
  .word 0x8cc40374
  .word 0xac44000c
  .word 0x1540000c
  .word 0x00000000
  .word 0x8ca40000
  .word 0xaec418e0
  .word 0x10000008
  .word 0x00000000
  .word 0xac480000
  .word 0x000320c0
  .word 0x02042821
  .word 0x8ca40370
  .word 0xac440008
  .word 0x8ca40374
  .word 0xac44000c
  .word 0x8d240000
  .word 0x30840002
  .word 0x10800002
  .word 0x00000000
  .word 0xac470410
  .word 0x24630001
  .word 0x8e0403ac
  .word 0x0064102a
  .word 0x1440ffc6
  .word 0x00000000
  .word 0xae0464a0
  .word 0x8e027700
  .word 0xae026498
  .word 0x8e0276f8
  .word 0xae02649c
  .word 0x8e0203a8
  .word 0xae0264a4
  .word 0x0c088c38
  .word 0x00000000
  .word 0x0c08957c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070004
  .word 0x0c042938
  .word 0x00000000
  .word 0x24030002
  .word 0xae03001c
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

// FUN_002060B0
void FUN_002060B0(void)
{
    u8* work;
    s32 i;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    FUN_00206170();
    for (i = 0; i < *(s32*)(work + 0x400); i++)
    {
        *(u32*)(work + 0x64b0 + i * 0x110) = 0;
        *(u32*)(work + 0x64b4 + i * 0x110) = *(u32*)(work + 0x3d8 + i * 4);
    }
    *(u32*)(work + 0x6a00) = *(u32*)(work + 0x404);
    *(u32*)(work + 0x6a04) = *(u32*)(work + 0x7734);
    *(u32*)(work + 0x6a08) = *(u32*)(work + 0x772c);
    *(u32*)(work + 0x6a0c) = *(u32*)(work + 0x400);
    *(u32*)(work + 0x6d28) = 0;
    func_00225670();
}

// FUN_00206170
void FUN_00206170(void)
{
    u8* work;
    s32 destroyIndex;
    s32 rowIndex;
    s32 targetIndex;
    u32 handle;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    for (destroyIndex = 0; destroyIndex < *(s32*)(work + 0x400);
         destroyIndex++)
    {
        func_003b0170(*(u32*)(work + 0x3d8 + destroyIndex * 4));
    }
    if (*(u32*)work & 0x800000)
    {
        func_00208360();
    }
    handle = bpRoot_003a5540_typed(
        100, 100, -1, 0.0f, 2, 6, *(void**)(work + 0x7794),
        *(u32*)((u8*)(uintptr_t)(*(s32*)(work + 0x7734) * 4) +
                (uintptr_t)work + 0x3b0) - 1);
    func_002082c0(handle);
    func_003b0e70(1);
    func_003b0e90(2);
    for (rowIndex = 0; rowIndex < *(s32*)(work + 0x400); rowIndex++)
    {
        u32* resourceEntry;
        targetIndex = rowIndex + *(s32*)(work + 0x772c);
        resourceEntry = &D_00684F00[
            *(u32*)(work + 0x3b0 + targetIndex * 4)];
        handle = func_003b0970(
            resourceEntry[-1], 2,
            (s8)(targetIndex == *(s32*)(work + 0x7734) ? 6 : 0),
            0, 0);
        *(u32*)(work + 0x3d8 + rowIndex * 4) = handle;
    }
    func_003b0e90(1);
    func_003b0e70(2);
}

// FUN_00206310
void FUN_00206310(void)
{
    u8* work;
    s32 i;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    K_ASSERT((*(u32*)work & 0x1000) != 0, 0x1000);
    func_003b0170(*(u32*)(work + 0x77a8));
    if (*(u32*)(work + 0x77ac) != 0)
        func_003b0170(*(u32*)(work + 0x77ac));
    for (i = 0; i < *(s32*)(work + 0x400); i++)
    {
        func_003b0170(*(u32*)(work + 0x3d8 + i * 4));
    }
    *(u32*)work &= ~0x1000u;
}
#pragma opt_loop_invariants on
// FUN_002063F0
void FUN_002063F0(void)
{
    u8* work;
    u8* dispatchRow;
    u8* rowBase;
    u8* row;
    s32 i;
    u32 id;
    u32 type;
    u32 idOffset;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    id = ((u32*)(work + 0x3b0))[*(u32*)(work + 0x7734)];
    switch (id)
    {
    case 7:
        FUN_005225a8_y2((const char*)&gp0xffff972c);
        FUN_0021B670(0);
        FUN_002085E0();
        *(u32*)(work + 0x1c) = 1;
        break;
    default:
        dispatchRow = work + *(u32*)(work + 0x7700) * 0x18 + 0x2e0;
        type = *(u32*)(dispatchRow + 4);
        switch (type)
        {
        case 0:
            for (i = 0; i < *(s32*)(work + 0x3a8); i++)
            {
                rowBase = work + i * 0x18;
                row = rowBase + 0x2e0;
                if ((*(u32*)(rowBase + 0x2e0) & 2) == 0)
                {
                    switch (*(u32*)(row + 4))
                    {
                    case 1:
                        idOffset = *(u32*)(work + 0x7734) * 4;
                        id = *(u32*)(work + idOffset + 0x3b0);
                        *(u32*)(row + 0x10) = id;
                        *(u32*)row |= 1;
                        break;
                    }
                }
            }
            FUN_00208790();
            break;
        case 1:
            *(u32*)(dispatchRow + 0x10) = id;
            *(u32*)dispatchRow |= 1;
            FUN_00208860(*(u16*)(dispatchRow + 0xc));
            break;
        case 2:
            K_ASSERT(0, 0x104e);
            break;
        default:
            break;
        }
        FUN_00205D60();
        break;
    }
}

#pragma opt_loop_invariants off

/* Removing this loses FUN_002065A0 (MATCH nd0 -> MISMATCH nd159) - measured W308. */
#pragma opt_loop_invariants on
// FUN_002065A0
void FUN_002065A0(void)
{
    u8* work;
    u8* dispatchRow;
    u8* rowBase;
    u8* row;
    s32 i;
    u32 type;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    K_ASSERT(((u32*)(work + 0x3b0))[*(u32*)(work + 0x7734)] == 7,
             0x105f);
    dispatchRow = work + *(u32*)(work + 0x7700) * 0x18 + 0x2e0;
    type = *(u32*)(dispatchRow + 4);
    switch (type)
    {
    case 0:
        for (i = 0; i < *(s32*)(work + 0x3a8); i++)
        {
            rowBase = work + i * 0x18;
            row = rowBase + 0x2e0;
            if ((*(u32*)(rowBase + 0x2e0) & 2) == 0)
            {
                switch (*(u32*)(row + 4))
                {
                case 1:
                    *(u32*)(row + 0x10) =
                        *(u32*)(work + 0x3b0 +
                                *(u32*)(work + 0x7734) * 4);
                    *(u32*)(row + 0x14) = *(u32*)(work + 0x428);
                    *(u32*)row |= 1;
                    break;
                }
            }
        }
        FUN_00208790();
        break;
    case 1:
        *(u32*)(dispatchRow + 0x10) =
            ((u32*)(work + 0x3b0))[*(u32*)(work + 0x7734)];
        *(u32*)(dispatchRow + 0x14) = *(u32*)(work + 0x428);
        *(u32*)dispatchRow |= 1;
        FUN_00208860(*(u16*)(dispatchRow + 0xc));
        break;
    case 2:
        K_ASSERT(0, 0x108b);
        break;
    default:
        break;
    }
    FUN_00205D60();
}
#pragma opt_loop_invariants reset

// W418 negative probe: FUN_00206740 i s16 nd1200/1668B -> 1267/1748B (reverted).
// W419 negative probes: FUN_00206740 reversed chain nd1208/1660B, window1792B, rate72.77%; u32 mode chain nd1117/1656B, window1792B, rate67.45%; declaration/scoped row-pointer variants unchanged at nd1067/1652B, window1792B, rate64.59%; reverted.
// FUN_00206740
asm void FUN_00206740(void)
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
  .word 0x8f82b5f8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050164
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b5f8
  .word 0x8e220000
  .word 0x00401027
  .word 0x30422000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x2405109f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e230020
  .word 0x24020002
  .word 0x14620006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x240510a0
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000982d
  .word 0x0000a02d
  .word 0x1000003c
  .word 0x00000000
  .word 0x00131080
  .word 0x02221021
  .word 0x24500408
  .word 0x24020002
  .word 0x12820010
  .word 0x00000000
  .word 0x24020001
  .word 0x12820009
  .word 0x00000000
  .word 0x12800003
  .word 0x00000000
  .word 0x1000002e
  .word 0x00000000
  .word 0xae000000
  .word 0x26730001
  .word 0x1000002a
  .word 0x00000000
  .word 0xae020000
  .word 0x26730001
  .word 0x10000026
  .word 0x00000000
  .word 0x8e230020
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600020
  .word 0x00000000
  .word 0x1000001e
  .word 0x00000000
  .word 0x24040006
  .word 0x0c05d200
  .word 0x00000000
  .word 0x0040a82d
  .word 0x02a0202d
  .word 0x0c05ccdc
  .word 0x00000000
  .word 0x0040b02d
  .word 0x02a0202d
  .word 0x0c05da8c
  .word 0x00000000
  .word 0x0000282d
  .word 0x24040145
  .word 0x10000007
  .word 0x00000000
  .word 0x00051840
  .word 0x02c31821
  .word 0x94630000
  .word 0x10640005
  .word 0x00000000
  .word 0x24a50001
  .word 0x00a2182a
  .word 0x1460fff8
  .word 0x00000000
  .word 0x10a20004
  .word 0x00000000
  .word 0x24020002
  .word 0xae020000
  .word 0x26730001
  .word 0x26940001
  .word 0x2a820003
  .word 0x1440ffc3
  .word 0x00000000
  .word 0xae330420
  .word 0xae330424
  .word 0x2a610005
  .word 0x14200003
  .word 0x00000000
  .word 0x24020004
  .word 0xae220424
  .word 0xae20775c
  .word 0x8e220420
  .word 0xae22776c
  .word 0x8e220424
  .word 0xae227764
  .word 0x2624775c
  .word 0x0c08215c
  .word 0x00000000
  .word 0x24040186
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400021
  .word 0x00000000
  .word 0x24040034
  .word 0x0c05bce0
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0xae207768
  .word 0xae207760
  .word 0x1000001a
  .word 0x00000000
  .word 0x0000282d
  .word 0x8e240420
  .word 0x10000007
  .word 0x00000000
  .word 0x00051880
  .word 0x02231821
  .word 0x8c630408
  .word 0x10430005
  .word 0x00000000
  .word 0x24a50001
  .word 0x00a4182a
  .word 0x1460fff8
  .word 0x00000000
  .word 0x14a40005
  .word 0x00000000
  .word 0xae207768
  .word 0xae207760
  .word 0x10000007
  .word 0x00000000
  .word 0xae257768
  .word 0xae207760
  .word 0x10000003
  .word 0x00000000
  .word 0xae207768
  .word 0xae207760
  .word 0x24040001
  .word 0x0c0ec39c
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0ec3a4
  .word 0x00000000
  .word 0x0000982d
  .word 0x1000005f
  .word 0x00000000
  .word 0x8e247760
  .word 0x02641021
  .word 0x00021080
  .word 0x02221021
  .word 0x24430408
  .word 0x8e227768
  .word 0x00441023
  .word 0x16620004
  .word 0x00000000
  .word 0x24100006
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x8c620000
  .word 0x24050002
  .word 0x10450035
  .word 0x00000000
  .word 0x24030001
  .word 0x10430028
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000043
  .word 0x00000000
  .word 0x8e220020
  .word 0x10430013
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x1000003c
  .word 0x00000000
  .word 0x24040144
  .word 0x0c0c2ed0
  .word 0x00000000
  .word 0x0010363c
  .word 0x0006363f
  .word 0x0040202d
  .word 0x24050002
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040902d
  .word 0x1000002e
  .word 0x00000000
  .word 0x24040146
  .word 0x0c0c2ed0
  .word 0x00000000
  .word 0x0010363c
  .word 0x0006363f
  .word 0x0040202d
  .word 0x24050002
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040902d
  .word 0x10000020
  .word 0x00000000
  .word 0x0010363c
  .word 0x0006363f
  .word 0x8f849728
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040902d
  .word 0x10000016
  .word 0x00000000
  .word 0x8e230020
  .word 0x24020001
  .word 0x10620006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24051124
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24040145
  .word 0x0c0c2ed0
  .word 0x00000000
  .word 0x0010363c
  .word 0x0006363f
  .word 0x0040202d
  .word 0x24050002
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040902d
  .word 0x00131080
  .word 0x02221021
  .word 0xac520414
  .word 0x26730001
  .word 0x8e220424
  .word 0x0262102a
  .word 0x1440ff9f
  .word 0x00000000
  .word 0x8e230020
  .word 0x24020001
  .word 0x10620012
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x24040004
  .word 0x0c05dd68
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050002
  .word 0x24060006
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040902d
  .word 0x10000013
  .word 0x00000000
  .word 0x24040006
  .word 0x0c05dd68
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050002
  .word 0x24060006
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c0ec25c
  .word 0x00000000
  .word 0x0040902d
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x2405113d
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xae3277a8
  .word 0x24040001
  .word 0x0c0ec3a4
  .word 0x00000000
  .word 0x24040002
  .word 0x0c0ec39c
  .word 0x00000000
  .word 0x8e220000
  .word 0x34422000
  .word 0xae220000
  .word 0x8e220420
  .word 0xae226a00
  .word 0x8e220424
  .word 0xae226a0c
  .word 0x0000402d
  .word 0x24050001
  .word 0x3c040020
  .word 0x3c030001
  .word 0x24060002
  .word 0x3c020010
  .word 0x1000005b
  .word 0x00000000
  .word 0x00083880
  .word 0x02273821
  .word 0x8ce90408
  .word 0x11260035
  .word 0x00000000
  .word 0x11250017
  .word 0x00000000
  .word 0x11200003
  .word 0x00000000
  .word 0x10000049
  .word 0x00000000
  .word 0x8e290000
  .word 0x31294000
  .word 0x11200008
  .word 0x00000000
  .word 0x00084900
  .word 0x01284821
  .word 0x00094900
  .word 0x02294821
  .word 0xad2664b0
  .word 0x1000003e
  .word 0x00000000
  .word 0x00084900
  .word 0x01284821
  .word 0x00094900
  .word 0x02294821
  .word 0xad2064b0
  .word 0x10000037
  .word 0x00000000
  .word 0x8e2a0000
  .word 0x01444824
  .word 0x11200008
  .word 0x00000000
  .word 0x00084900
  .word 0x01284821
  .word 0x00094900
  .word 0x02294821
  .word 0xad2564b0
  .word 0x1000002c
  .word 0x00000000
  .word 0x01434824
  .word 0x11200008
  .word 0x00000000
  .word 0x00084900
  .word 0x01284821
  .word 0x00094900
  .word 0x02294821
  .word 0xad2664b0
  .word 0x10000022
  .word 0x00000000
  .word 0x00084900
  .word 0x01284821
  .word 0x00094900
  .word 0x02294821
  .word 0xad2064b0
  .word 0x1000001b
  .word 0x00000000
  .word 0x8e2a0000
  .word 0x01424824
  .word 0x11200008
  .word 0x00000000
  .word 0x00084900
  .word 0x01284821
  .word 0x00094900
  .word 0x02294821
  .word 0xad2564b0
  .word 0x10000010
  .word 0x00000000
  .word 0x31498000
  .word 0x11200008
  .word 0x00000000
  .word 0x00084900
  .word 0x01284821
  .word 0x00094900
  .word 0x02294821
  .word 0xad2664b0
  .word 0x10000006
  .word 0x00000000
  .word 0x00084900
  .word 0x01284821
  .word 0x00094900
  .word 0x02294821
  .word 0xad2064b0
  .word 0x8ce90414
  .word 0x00083900
  .word 0x00e83821
  .word 0x00073900
  .word 0x02273821
  .word 0xace964b4
  .word 0x25080001
  .word 0x8e276a0c
  .word 0x0107382a
  .word 0x14e0ffa3
  .word 0x00000000
  .word 0x8e227768
  .word 0xae226a04
  .word 0x8e227760
  .word 0xae226a08
  .word 0x8e2277a8
  .word 0xae226a10
  .word 0xae206a14
  .word 0x0c089528
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070003
  .word 0x0c042938
  .word 0x00000000
  .word 0xae200018
  .word 0x24030006
  .word 0xae230010
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

// FUN_00206E40
void FUN_00206E40(void)
{
    u8* work;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    func_002255f0();
    FUN_0010a4e0(0, 0, 0, 4);
    *(u32*)(work + 0x18) = 9;
}

// FUN_00206EB0
void FUN_00206EB0(void)
{
    s32 i;
    u8* work;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    K_ASSERT((*(u32*)work & 0x2000) != 0, 0x1192);
    func_003b0170(*(u32*)(work + 0x77a8));
    for (i = 0; i < *(s32*)(work + 0x424); i++)
    {
        func_003b0170(*(u32*)(work + 0x414 + i * 4));
    }
    *(u32*)work &= ~0x2000u;
}

/* Removing this loses FUN_002063F0 (MATCH nd0 -> MISMATCH nd128) - measured W308. */
// FUN_00206F70
void FUN_00206F70(void)
{
    u8* p;
    s32 i;

    K_ASSERT(gBcmWork != NULL, 0x164);
    p = gBcmWork;
    FUN_00207010();
    for (i = 0; i < *(s32*)(p + 0x6a0c); i++)
    {
        *(u32*)(p + 0x64b4 + i * 0x110) =
            *(u32*)(p + 0x414 + i * 4);
    }
    *(u32*)(p + 0x6a04) = *(u32*)(p + 0x7768);
    *(u32*)(p + 0x6a08) = 0;
    func_00225670();
}
// FUN_00207010
void FUN_00207010(void)
{
    s32 alpha;
    u8* work;
    u32 handle;
    s32 rowIndex;
    s32 targetIndex;
    u32* typeEntry;
    u32 type;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    for (rowIndex = 0; rowIndex < *(s32*)(work + 0x424); rowIndex++)
    {
        func_003b0170(*(u32*)(work + 0x414 + rowIndex * 4));
    }
    if (*(u32*)work & 0x800000)
    {
        func_00208360();
    }

    type = *(u32*)(work + 0x408 +
                   (*(s32*)(work + 0x7768) +
                    *(s32*)(work + 0x7760)) * 4);
    switch (type)
    {
    case 0:
        switch (*(u32*)(work + 0x20))
        {
        case 0:
            alpha = 0;
            break;
        case 1:
            alpha = 1;
            break;
        }
        break;
    case 1:
        alpha = 2;
        break;
    case 2:
        alpha = 3;
        break;
    }

    handle = bpRoot_003a5540_typed(100, 100, -1, 0.0f, 2, 6,
                                    *(void**)(work + 0x7798), alpha);
    func_002082c0(handle);
    func_003b0e70(1);
    func_003b0e90(2);
    for (rowIndex = 0; rowIndex < *(s32*)(work + 0x424); rowIndex++)
    {
        targetIndex = rowIndex + *(s32*)(work + 0x7760);
        typeEntry = (u32*)(work + 0x408 + targetIndex * 4);
        alpha = rowIndex == *(s32*)(work + 0x7768) -
                              *(s32*)(work + 0x7760) ? 6 : 0;
        switch (*typeEntry)
        {
        case 0:
            switch (*(u32*)(work + 0x20))
            {
            case 0:
                handle = func_003b0970(func_0030bb40(0x144),
                                        2, (s8)alpha, 0, 0);
                break;
            case 1:
                handle = func_003b0970(func_0030bb40(0x146),
                                        2, (s8)alpha, 0, 0);
                break;
            }
            break;
        case 1:
            handle = func_003b0970(D_007CC418,
                                    2, (s8)alpha, 0, 0);
            break;
        case 2:
            K_ASSERT(*(u32*)(work + 0x20) == 1, 0x1209);
            handle = func_003b0970(func_0030bb40(0x145),
                                    2, (s8)alpha, 0, 0);
            break;
        }
        *(u32*)(work + 0x414 + rowIndex * 4) = handle;
    }
    func_003b0e90(1);
    func_003b0e70(2);
}
// FUN_00207340
asm void FUN_00207340(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82b5f8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050164
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b5f8
  .word 0x8e227768
  .word 0x00021080
  .word 0x02221021
  .word 0x24500408
  .word 0x8c420408
  .word 0x24050002
  .word 0x104500d7
  .word 0x00000000
  .word 0x24040001
  .word 0x10440047
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000130
  .word 0x00000000
  .word 0x8e220000
  .word 0x30424000
  .word 0x10400039
  .word 0x00000000
  .word 0x0c0b6ea0
  .word 0x00000000
  .word 0x0c0871c8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1cb4
  .word 0x00000000
  .word 0x0c07fdd0
  .word 0x00000000
  .word 0x24030001
  .word 0x1043000d
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000020
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0f1d38
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0x0c0b5554
  .word 0x00000000
  .word 0x240301a1
  .word 0x10430003
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x24040006
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x24040007
  .word 0x0c0f1d38
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x24040004
  .word 0x0c0f1d38
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24051246
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24020003
  .word 0xae220018
  .word 0x100000f4
  .word 0x00000000
  .word 0x0c086d9c
  .word 0x00000000
  .word 0x24020001
  .word 0xae220018
  .word 0x100000ee
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c020020
  .word 0x00621024
  .word 0x1040003d
  .word 0x00000000
  .word 0x8e2377b0
  .word 0x24020003
  .word 0x10620017
  .word 0x00000000
  .word 0x1065000d
  .word 0x00000000
  .word 0x10640003
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x0c0b6ea0
  .word 0x00000000
  .word 0x24040020
  .word 0x240500bc
  .word 0x0c0b6e7c
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x0c0b6ea0
  .word 0x00000000
  .word 0x24040020
  .word 0x240500bd
  .word 0x0c0b6e7c
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x0c0b6ea0
  .word 0x00000000
  .word 0x24040020
  .word 0x240500be
  .word 0x0c0b6e7c
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x2405126e
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f82b5f8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050164
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b5f8
  .word 0x0c08957c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070004
  .word 0x0c042938
  .word 0x00000000
  .word 0x24020009
  .word 0xae220018
  .word 0x100000ad
  .word 0x00000000
  .word 0x3c020001
  .word 0x00621024
  .word 0x1040002a
  .word 0x00000000
  .word 0x0c0b6ea0
  .word 0x00000000
  .word 0x0c0871c8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1cb4
  .word 0x00000000
  .word 0x0c07fdd0
  .word 0x00000000
  .word 0x24030001
  .word 0x1043000d
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x24040009
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x2404000a
  .word 0x0c0f1d38
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x2404000d
  .word 0x0c0f1d38
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24051288
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24020005
  .word 0xae220018
  .word 0x10000080
  .word 0x00000000
  .word 0x0c0b6ea0
  .word 0x00000000
  .word 0x24040020
  .word 0x240500b8
  .word 0x0c0b6e7c
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c020001
  .word 0x00621025
  .word 0xae220000
  .word 0x8f82b5f8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050164
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b5f8
  .word 0x0c08957c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070004
  .word 0x0c042938
  .word 0x00000000
  .word 0x24020009
  .word 0xae220018
  .word 0x10000061
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c020010
  .word 0x00621024
  .word 0x1040001c
  .word 0x00000000
  .word 0x0c0b6ea0
  .word 0x00000000
  .word 0x24040020
  .word 0x240500b0
  .word 0x0c0b6e7c
  .word 0x00000000
  .word 0x8f82b5f8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050164
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b5f8
  .word 0x0c08957c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070004
  .word 0x0c042938
  .word 0x00000000
  .word 0x24020009
  .word 0xae220018
  .word 0x10000041
  .word 0x00000000
  .word 0x30628000
  .word 0x10400022
  .word 0x00000000
  .word 0x0c0b6ea0
  .word 0x00000000
  .word 0x0c0871c8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1cb4
  .word 0x00000000
  .word 0x0c07fdd0
  .word 0x00000000
  .word 0x1040000e
  .word 0x00000000
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x2404000f
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x24040010
  .word 0x0c0f1d38
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x240512b3
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24020007
  .word 0xae220018
  .word 0x1000001d
  .word 0x00000000
  .word 0x0c0b6ea0
  .word 0x00000000
  .word 0x24040020
  .word 0x240500af
  .word 0x0c0b6e7c
  .word 0x00000000
  .word 0x8e220000
  .word 0x34428000
  .word 0xae220000
  .word 0x8f82b5f8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844f48
  .word 0x24050164
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b5f8
  .word 0x0c08957c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070004
  .word 0x0c042938
  .word 0x00000000
  .word 0x24020009
  .word 0xae220018
  .word 0x24040034
  .word 0x8e050000
  .word 0x0c05bcf8
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

// FUN_002078A0
void FUN_002078A0(void)
{
    u16* values;
    u8* work;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    values = (u16*)func_0030c0c0();
    K_ASSERT(values != NULL, 0x12d0);
    func_00249420(values[0], values[1], values[2]);
    *(u32*)(work + 0x10) = 9;
}

// FUN_00207930
u32 bcmIsItemUsable(u16 param_1)
{
    return FUN_0017d2e0_y2(param_1) != 0xc;
}

// FUN_00207960
u32 FUN_00207960(u32 id)
{
    u32 status;
    u32 valid;

    status = FUN_0017d2e0((u16)id);
    valid = (status ^ 0xc) != 0;
    K_ASSERT(valid, 0x12f2);
    return FUN_0017d2e0((u16)id);
}



// FUN_002079C0
void FUN_002079C0(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    *(u32*)(gBcmWork + 0x77a0) |= 1;
}

// FUN_00207a10
void bcm00207a10(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    *(u32*)(gBcmWork + 0x77a0) |= 2;
}

// FUN_00207A60
void FUN_00207A60(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    *(u32*)(gBcmWork + 0x77a0) |= 4;
}

// FUN_00207AB0
void FUN_00207AB0(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    *(u32*)(gBcmWork + 0x77a0) |= 8;
}

// FUN_00207B00
void FUN_00207B00(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    *(u32*)(gBcmWork + 0x77a0) |= 0x10;
}

// FUN_00207B50
void FUN_00207B50(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    *(u32*)(gBcmWork + 0x77a0) |= 0x20;
}

// FUN_00207BA0
void FUN_00207BA0(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    *(u32*)(gBcmWork + 0x77a0) |= 0x40;
}

// FUN_00207bf0
void bcm00207bf0(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    *(u32*)(gBcmWork + 0x77a0) &= ~1;
}










 







/* Shared command work is owned by bcm_main.c. */




// FUN_00207c40
void func_00207c40(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    BCM_WORD(0x77a0) &= ~2u;
}

// FUN_00207c90
void func_00207c90(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    BCM_WORD(0x77a0) &= ~4u;
}

// FUN_00207ce0
void func_00207ce0(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    BCM_WORD(0x77a0) &= ~8u;
}

// FUN_00207d30
void func_00207d30(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    BCM_WORD(0x77a0) &= ~0x10u;
}

// FUN_00207d80
void func_00207d80(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    BCM_WORD(0x77a0) &= ~0x20u;
}

// FUN_00207dd0
void func_00207dd0(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    BCM_WORD(0x77a0) &= ~0x40u;
}

// FUN_00207e20
void bcmStartTacticsTutorial(void)
{
    u8* work;
    s32 mode;
    u32 state;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    state = func_002d5550();
    switch (state) {
    case 0x1d2:
        mode = 0;
        break;
    case 0x1d3:
        mode = 1;
        break;
    case 0x1d4:
        mode = 2;
        break;
    case 0x1d5:
        mode = 3;
        break;
    default:
        K_ASSERT(0, 0x1365);
        break;
    }
    func_002518b0(mode);
    bppMain0020fc40();
    *(u32*)(work + 0x10) = 0xa;
}

// FUN_00207f10
void bcmStartBasicTutorial(void)
{
    u8* work;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    func_00251e10();
    bppMain0020fc40();
    *(u32*)(work + 0x10) = 0xb;
}

// FUN_00207f70
u32 func_00207f70(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    return BCM_WORD(0) & 0x02000000;
}

// FUN_00207fc0
u32 func_00207fc0(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    return BCM_WORD(0) & 0x04000000;
}

// FUN_00208010
u32 bcmIsCurrentUnitTutorialPending(void)
{
    void* unit;

    unit = func_0030c0c0();
    if (unit != NULL) {
        return func_00249650(*(u16*)unit);
    }
    return 0;
}

// FUN_00208050
u32 bcmIsTacticsTutorialPending(void)
{
    u32 mode;

    mode = func_002d5550();
    if (mode == 0x1d5) {
        goto mode_1d5;
    }
    if (mode == 0x1d4) {
        goto mode_1d4;
    }
    if (mode == 0x1d3) {
        goto mode_1d3;
    }
    switch (mode) {
    case 0x1d2:
        goto mode_1d2;
    default:
        goto done;
    }
mode_1d2:
    if (datGetFlag_y2(0x1307) == 0) {
        return 1;
    }
    goto done;
mode_1d3:
    if (datGetFlag_y2(0x1308) == 0) {
        return 1;
    }
    goto done;
mode_1d4:
    if (datGetFlag_y2(0x1309) == 0) {
        return 1;
    }
    goto done;
mode_1d5:
    if (datGetFlag_y2(0x130a) == 0) {
        return 1;
    }
done:
    return 0;
}

// FUN_00208130
u32 bcmCanStartBasicTutorial(void)
{
    u64 status;

    if (datGetScenarioMode() == 0) {
        if (bpMisc001ff7f0(3) == 0) {
            return 0;
        }
    } else {
        if (bpMisc001ff7f0(9) == 0) {
            return 0;
        }
    }
    if (datGetScenarioMode() == 0 && datGetFlag_y2(0xdf) != 0) {
        return 0;
    }
    if (datGetFlag_y2(0x1306) != 0) {
        return 0;
    }
    if ((gBtl->flags & 0x200000) != 0) {
        return 0;
    }
    if (datGetScenarioMode() != 0) {
        status = (u64)(datGetBadStatusNoDown(9) & 0xfffff);
    } else {
        status = (u64)(datGetBadStatusNoDown(3) & 0xfffff);
    }
    if (status == 1 || status == 2 || status == 4 || status == 8 ||
        status == 0x10 || status == 0x20 || status == 0x40 ||
        status == 0x80000 || status == 0x100000) {
        return 0;
    }
    return 1;
}

// FUN_002082c0
void bcmStoreOwnedResource(u32 value)
{
    u8* work;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    K_ASSERT((~*(u32*)work & 0x00800000) != 0, 0x13e6);
    *(u32*)(work + 0x779c) = value;
    *(u32*)(work + 0x6d20) = value;
    *(u32*)work |= 0x00800000;
}

// FUN_00208360
void bcmDestroyOwnedResource(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    K_ASSERT((BCM_WORD(0) & 0x00800000) != 0, 0x13f1);
    bcmDestroyOwnedResourceImpl();
}

// FUN_002083d0
void bcmDestroyOwnedResourceImpl(void)
{
    u8* work;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    K_ASSERT((*(u32*)work & 0x00800000) != 0, 0x13f9);
    func_003b0170_y2(*(u32*)(work + 0x779c));
    *(u32*)work &= ~0x00800000u;
}

// FUN_00208460
void bcmFinishPanelTransition(void)
{
    u8* work;
    s32 state;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    state = *(u32*)(work + 0x10);
    switch (state) {
    case 1:
        *(u32*)(work + 4) |= 1;
        bcmPanel00222ed0();
        break;
    case 2:
        *(u32*)(work + 4) |= 2;
        bcmPanel00222ed0();
        break;
    case 3:
        bcmPanel00222ed0();
        break;
    case 4:
        bcmPanel00222ed0();
        break;
    default:
        K_ASSERT(0, 0x1414);
        break;
    }
    FUN_0010a4e0(0, 0, 0, 4);
    *(u32*)(work + 0x10) = 0;
}

// FUN_00208570
void bcmInitCommandPanelEntries(u32* panel)
{
    s32 i;
    u8* entry;

    panel[0] |= 4;
    for (i = 0; i < 8; i++) {
        entry = (u8*)&panel[i];
        entry[0x14] = 0;
        entry[0x15] = 0;
        entry[0x16] = 0;
    }
    ((u8*)panel)[0x17] = 0;
    ((u8*)panel)[0x1b] = 0;
    ((u8*)panel)[0x1f] = 5;
    ((u8*)panel)[0x23] = 5;
    ((u8*)panel)[0x2b] = 0;
    ((u8*)panel)[0x27] = 0;
    ((u8*)panel)[0x33] = 5;
    ((u8*)panel)[0x2f] = 5;
}

// FUN_002085e0
void func_002085e0(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    BCM_WORD(0) |= 0x08000000;
}

// FUN_00208630
void func_00208630(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    BCM_WORD(0) &= ~0x08000000u;
}

// FUN_00208680
void func_00208680(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    BCM_WORD(0) |= 0x10000000;
}

// FUN_002086d0
void func_002086d0(void)
{
    K_ASSERT(gBcmWork != NULL, 0x164);
    BCM_WORD(0) &= ~0x10000000u;
}

// FUN_00208720
u32 bcmIsCommandInputReady(void)
{
    u8* work;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    if (*(u32*)(work + 0x10) != 0) {
        goto done;
    }
    if ((~*(u32*)work & 0x20) == 0) {
        goto done;
    }
    return 1;
done:
    return 0;
}

/* Removing the schedule pragma below loses FUN_00208790 (MATCH nd0 -> MISMATCH nd117) - measured W161. */
// FUN_00208790
#pragma push
#pragma optimization_level 3
#pragma schedule off
void bcmPlayRandomPartyVoice(void)
{
    u32 ids[4];
    s32 count;
    s32 i;
    s32 total;
    u8* work;
    BcmCommandEntry* entry;

    K_ASSERT(gBcmWork != NULL, 0x164);
    work = gBcmWork;
    count = 0;
    i = 0;
    total = *(s32*)(work + 0x3a8);
    while (i < total) {
        entry = (BcmCommandEntry*)(work + i * 0x18 + 0x2e0);
        switch (entry->type) {
        case 1:
            ids[count++] = entry->id;
            break;
        }
        i++;
    }
    func_00208860((u16)ids[RpRandom() % count]);
}
#pragma pop

// FUN_00208860
void func_00208860(u32 unitId)
{
    u32 status;
    u32 id;

    status = datGetBadStatusNoDown((s16)unitId);
    if ((status & 0x80371) != 0) {
        goto done;
    }
    id = unitId & 0xffff;
    switch (id) {
    case 0:
    case 1:
        goto done;
    case 2:
        if (func_002ddc10(unitId) != 0) {
            goto case2_true;
        }
        func_002ddba0(0xa2);
        goto done;
case2_true:
        func_002ddba0(0xa3);
        goto done;
    case 3:
        if (func_002ddc10(unitId) != 0) {
            goto case3_true;
        }
        func_002ddba0(0xf3);
        goto done;
case3_true:
        func_002ddba0(0xf4);
        goto done;
    case 4:
        if (func_002ddc10(unitId) != 0) {
            goto case4_true;
        }
        func_002ddba0(0x158);
        goto done;
case4_true:
        func_002ddba0(0x159);
        goto done;
    case 5:
        if (func_002ddc10(unitId) != 0) {
            goto case5_true;
        }
        func_002ddba0(0x1a1);
        goto done;
case5_true:
        func_002ddba0(0x1a2);
        goto done;
    case 6:
        K_ASSERT(0, 0x149a);
        goto done;
    case 7:
        if (func_002ddc10(unitId) != 0) {
            goto case7_true;
        }
        func_002ddba0(0x1ea);
        goto done;
case7_true:
        func_002ddba0(0x1eb);
        goto done;
    case 8:
        if (func_002ddc10(unitId) != 0) {
            goto case8_true;
        }
        func_002ddba0(0x233);
        goto done;
case8_true:
        func_002ddba0(0x234);
        goto done;
    case 9:
        if (datGetScenarioMode() != 0) {
            goto case9_true;
        }
        func_002ddba0(0x279);
        goto done;
case9_true:
        func_002ddba0(0x46b);
        goto done;
    case 10:
        if (func_002ddc10(unitId) != 0) {
            goto case10_true;
        }
        func_002ddba0(0x2bd);
        goto done;
case10_true:
        func_002ddba0(0x2be);
        goto done;
    default:
        goto done;
    }
done:
    return;
}
