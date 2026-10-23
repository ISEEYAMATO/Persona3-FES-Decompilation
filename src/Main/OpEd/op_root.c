#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"
#include "Camp/h_camp.h"
#include "Main/OpEd/op_res.h"

extern u16 DAT_007e094e;
extern u16 DAT_007e094c;
extern u16 DAT_007e0952;
extern u16 DAT_007e0956;
extern u16 DAT_007e095a;
extern u32 DAT_007ce018;
extern u8 DAT_007ce384;
#pragma alias DAT_007e094e_abs DAT_007e094e
#pragma alias DAT_007e094c_abs DAT_007e094c
#pragma alias DAT_007e0952_abs DAT_007e0952
#pragma alias DAT_007e0956_abs DAT_007e0956
#pragma alias DAT_007e095a_abs DAT_007e095a
extern u8 DAT_007e094e_abs[];
extern u8 DAT_007e094c_abs[];
extern u8 DAT_007e0952_abs[];
extern u8 DAT_007e0956_abs[];
extern u8 DAT_007e095a_abs[];
extern u32 FUN_00108710(void);
extern u32 FUN_001938e0(u32 mode);
extern u32 FUN_00195290(u32 handle);
extern u32 FUN_00195460(u32 handle);
extern u32 FUN_0010bc20(u32 value, u32 mode);
extern u32 FUN_001928d0(void);
extern u32 FUN_00192aa0(void);
#include "Main/Game/gm_root.h"
#include "rw/rwplcore.h"
#pragma alias gmRootStartOpeningTask FUN_002663c0
#pragma alias gmRootStartCalendarTask FUN_00266430
#pragma alias opRootCreateTask FUN_00265c20
#pragma alias gmRootSetResult FUN_00266660
#pragma alias datGetAuxData FUN_0016f380
#pragma alias datSetAuxData FUN_0016f3e0
#pragma alias H_Malloc FUN_00191af0
#pragma alias kwlnTaskCreateWithAutoPriority FUN_00194b80
#pragma alias kwlnTaskInitEx FUN_00194e10
#pragma alias kwlnTaskAddChild FUN_00195550
#pragma alias kwlnSetClearColor FUN_001985b0
#pragma alias opRootUpdateTask FUN_00265dc0
#pragma alias opRootDrawTask FUN_00265e30
#pragma alias opRootDestroyTask FUN_00265ef0
#pragma alias opResInit FUN_00266670
#pragma alias opLogoInit FUN_00269cc0
#pragma alias opTitleInit FUN_002673a0
#pragma alias opWaitInit FUN_0026dd10
#pragma alias opMenuInit FUN_0026a230
#pragma alias opFadeInit FUN_00271cd0
#pragma alias opFadeSetColor FUN_00272220_y2
#pragma alias opFadeIn FUN_00272290_y2
#pragma alias opResRequestLogo_y2 FUN_00266cb0
#pragma alias H_Fade_FadeIn FUN_001085c0_y2
#pragma alias H_Fade_SetType FUN_00108670_y2
#pragma alias H_Fade_SetDuration FUN_001086a0_y2
void opRoot00265b30(void);
void opRoot00265bb0(void);
void opRoot00266060(void);
static GmRootWork* sWork; // 007ce38c
static u32 sResult; // 007ce390
void gmRootStartOpeningTask(void);
void gmRootStartCalendarTask(void);
u32 datGetAuxData(u32 idx);
void datSetAuxData(u32 idx, u32 value);
u32 datGetFlag(s32 bit);
u32 datGetScenarioMode(void);
void func_0017d820(u32 arg);
u32 func_00182750(u32 arg);
void func_00188670(u32 arg);
u32 func_0017fad0(void);
u32 clndCreateTask(void);
u64 func_00188660(void);
void func_00188680(void);
KwlnTask* func_00188860(KwlnTask* parent);
void opRootUpdateTask(void);
void opRootDrawTask(void);
void opRootDestroyTask(int param_1);
void* gmRootUpdateTask(KwlnTask* gmRootTask);
void gmRootDestroyTask(KwlnTask* gmRootTask);
void kwlnInitGameData(void);
u32 opRootCreateTask(KwlnTask* task);
extern void* H_Malloc(size_t size);
extern u32 kwlnCreateTaskWithAutoPriority();
extern u32 kwlnInitTaskEx();
extern void kwlnAddTaskChild();
extern void kwlnSetClearColor(u8 r, u8 g, u8 b, u8 a);
extern void opResInit(OpResWork* work);
extern void opLogoInit();
extern void opTitleInit();
extern void opWaitInit();
extern void opMenuInit();
extern void opFadeInit();
extern void opFadeSetColor(const RwRGBA* color);
extern void opFadeIn();
extern void H_Fade_FadeIn();
extern void H_Fade_SetType(s16 type);
extern void H_Fade_SetDuration(s16 duration);
extern void opResRequestLogo_y2();

static inline KwlnTask* createTask(KwlnTask* parent)
{
    GmRootWork* work;
    KwlnTask* task;

    work = RwMalloc(sizeof(GmRootWork), rwMEMHINTDUR_GLOBAL);
    task = kwlnTaskCreateWithAutoPriority(parent,
                                          10,
                                          "game root",
                                          gmRootUpdateTask,
                                          gmRootDestroyTask,
                                          work);

    work->flags = 0;
    work->task = task;

    sWork = work;

    return task;
}


#pragma alias opResRequestLogo_y2 opResRequestLogo_y2
#pragma alias FUN_00272220_y2 FUN_00272220_y2
#pragma alias FUN_00272290_y2 FUN_00272290_y2
#pragma alias FUN_001085c0_y2 FUN_001085c0_y2
#pragma alias FUN_00108670_y2 FUN_00108670_y2
#pragma alias FUN_001086a0_y2 FUN_001086a0_y2


static u32* sOpRoot; // DAT_007ce388
static u32 D_007cdffc;
static u32 D_007ce00c;

void FUN_00265030(void);
u32 FUN_00420340(u32 value, u32 mode);
int H_Snd_GetCurrentBgmId(void);
u8 H_Snd_PlayBgm(s16 id, s32 unused);
void FUN_00269f50(void);
void opMenu0026c710(void);
void opWait0026e000(void);
void opMenu0026cc90(void);
void opTitle00268e20(void);
void FUN_002720c0(void);
void H_Snd_StopBgm(void);
void opResDestroyTitle(void);
void opWait0026ebf0(void);
void opMenu0026da10(void);
void opResRequestLogo(void);
void opLogo00269d10(void);
void opTitle002673f0(void);
void opWait0026dd60(void);
void opMenu0026a280(void);
void FUN_00271d70(void);
void opResShutdown(void);
void H_Free(void* memory);
void opLogo0026a0f0(void);
u32 opLogo0026a1e0(void);
void opLogo00269d50(void);
void opResUpdate(void);
u32 opResCheckRequestTitle(void);
void opResRequestTitle(void);
u32 opResCheckRequestLogo(void);
void opResRequestLogo(void);
void opResDestroyLogo(void);
void opTitle002692d0(void);
void opTitle002694b0(void);
void opTitle00269550(void);
void opTitle002695b0(void);
u32 opTitle00269640(void);
void opTitle00267430(void);
void opMenu0026a2c0(void);
void opMenu0026d430(void);
void opMenu0026dbd0(void);

#pragma push
/* Removing this worsens opRoot00265030 (nd1289 -> nd1679) - measured W161. */
#pragma opt_common_subs off
// FUN_00265030
#ifndef PC_BUILD
asm void opRoot00265030(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f83b698
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ec48
  .word 0x2405009a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b698
  .word 0x8e040000
  .word 0x00801827
  .word 0x30630001
  .word 0x146002a8
  .word 0x00000000
  .word 0x30820002
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c065518
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fffd
  .word 0x00621024
  .word 0xae020000
  .word 0x8e020000
  .word 0x30420004
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e040018
  .word 0x0c065518
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fffb
  .word 0x00621024
  .word 0xae020000
  .word 0x8e020004
  .word 0x2c410013
  .word 0x1020027f
  .word 0x00000000
  .word 0x3c03007b
  .word 0x246379d0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0c0421c4
  .word 0x00000000
  .word 0x10400274
  .word 0x00000000
  .word 0x0c099b5c
  .word 0x00000000
  .word 0x14400270
  .word 0x00000000
  .word 0x0c09a83c
  .word 0x00000000
  .word 0x24020001
  .word 0xae020004
  .word 0x1000026a
  .word 0x00000000
  .word 0x0c09a878
  .word 0x00000000
  .word 0x14400266
  .word 0x00000000
  .word 0x0c09c8b8
  .word 0x00000000
  .word 0x8f82b328
  .word 0x10400005
  .word 0x00000000
  .word 0x24020004
  .word 0xae020004
  .word 0x1000025d
  .word 0x00000000
  .word 0x24020002
  .word 0xae020004
  .word 0x10000259
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c064e38
  .word 0x00000000
  .word 0xae02452c
  .word 0x24020003
  .word 0xae020004
  .word 0x10000251
  .word 0x00000000
  .word 0x8e04452c
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24030003
  .word 0x1443024b
  .word 0x00000000
  .word 0xae00452c
  .word 0x24020001
  .word 0xaf82b328
  .word 0x24020004
  .word 0xae020004
  .word 0x10000244
  .word 0x00000000
  .word 0x0c099b70
  .word 0x00000000
  .word 0x9382b694
  .word 0x1440000a
  .word 0x00000000
  .word 0x8e040008
  .word 0x24050023
  .word 0x0c042f08
  .word 0x00000000
  .word 0xae020014
  .word 0x24020001
  .word 0xa382b694
  .word 0x10000007
  .word 0x00000000
  .word 0x8e040008
  .word 0x24050001
  .word 0x0c042f08
  .word 0x00000000
  .word 0xae020014
  .word 0xa380b694
  .word 0x24020005
  .word 0xae020004
  .word 0x1000022c
  .word 0x00000000
  .word 0x8e040014
  .word 0x0c065518
  .word 0x00000000
  .word 0x14400227
  .word 0x00000000
  .word 0x0c09c8a4
  .word 0x00000000
  .word 0x0c099a88
  .word 0x00000000
  .word 0x24020006
  .word 0xae020004
  .word 0x1000021f
  .word 0x00000000
  .word 0x0c099ab8
  .word 0x00000000
  .word 0x1440021b
  .word 0x00000000
  .word 0x0c09c8b8
  .word 0x00000000
  .word 0x0c09a4b4
  .word 0x00000000
  .word 0x0c09b9e0
  .word 0x00000000
  .word 0x24040073
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0xae004524
  .word 0x24020008
  .word 0xae020004
  .word 0x1000020c
  .word 0x00000000
  .word 0x0c09bba0
  .word 0x00000000
  .word 0x10400014
  .word 0x00000000
  .word 0x0c09a590
  .word 0x00000000
  .word 0x10400010
  .word 0x00000000
  .word 0x0c09bb8c
  .word 0x00000000
  .word 0x1040000c
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x304209ff
  .word 0x104001fb
  .word 0x00000000
  .word 0x0c09c704
  .word 0x00000000
  .word 0x0c09a56c
  .word 0x00000000
  .word 0x100001f5
  .word 0x00000000
  .word 0x8e024524
  .word 0x284101c2
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae024524
  .word 0x10000011
  .word 0x00000000
  .word 0xa3a0003c
  .word 0xa3a0003d
  .word 0xa3a0003e
  .word 0x240200ff
  .word 0xa3a2003f
  .word 0x27a4003c
  .word 0x0c09c888
  .word 0x00000000
  .word 0x0c09c76c
  .word 0x00000000
  .word 0x8e020004
  .word 0xae024528
  .word 0x2402000a
  .word 0xae020004
  .word 0x100001dd
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x304209ff
  .word 0x104001d8
  .word 0x00000000
  .word 0x0c09b50c
  .word 0x00000000
  .word 0x0c09bb6c
  .word 0x00000000
  .word 0x0c09a554
  .word 0x00000000
  .word 0xae004520
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c042938
  .word 0x00000000
  .word 0x0c099834
  .word 0x00000000
  .word 0x100001c7
  .word 0x00000000
  .word 0x0c09b730
  .word 0x00000000
  .word 0x144001c3
  .word 0x00000000
  .word 0x8e024524
  .word 0x284101c2
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae024524
  .word 0x10000011
  .word 0x00000000
  .word 0xa3a0003c
  .word 0xa3a0003d
  .word 0xa3a0003e
  .word 0x240200ff
  .word 0xa3a2003f
  .word 0x27a4003c
  .word 0x0c09c888
  .word 0x00000000
  .word 0x0c09c76c
  .word 0x00000000
  .word 0x8e020004
  .word 0xae024528
  .word 0x2402000a
  .word 0xae020004
  .word 0x100001ab
  .word 0x00000000
  .word 0x0000102d
  .word 0x3c03007e
  .word 0x9463094e
  .word 0x30630040
  .word 0x1060003f
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e034520
  .word 0x24020003
  .word 0x1062002c
  .word 0x00000000
  .word 0x24020002
  .word 0x10620025
  .word 0x00000000
  .word 0x10600015
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000002a
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c099998
  .word 0x00000000
  .word 0x0c04215c
  .word 0x00000000
  .word 0x24040005
  .word 0x0c04219c
  .word 0x00000000
  .word 0x24040014
  .word 0x0c0421a8
  .word 0x00000000
  .word 0x24020007
  .word 0xae020004
  .word 0x1000001b
  .word 0x00000000
  .word 0x0c04215c
  .word 0x00000000
  .word 0x24040005
  .word 0x0c04219c
  .word 0x00000000
  .word 0x24040014
  .word 0x0c0421a8
  .word 0x00000000
  .word 0x0c0423dc
  .word 0x00000000
  .word 0x2402000c
  .word 0xae020004
  .word 0x1000000d
  .word 0x00000000
  .word 0x2402000f
  .word 0xae020004
  .word 0x10000009
  .word 0x00000000
  .word 0xae004520
  .word 0x0c09b708
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c09b6cc
  .word 0x00000000
  .word 0x24020011
  .word 0xae020004
  .word 0x24020001
  .word 0x3c03007e
  .word 0x9463094c
  .word 0x3063f9ff
  .word 0x14600006
  .word 0x00000000
  .word 0x3c03007e
  .word 0x94630956
  .word 0x3063f9ff
  .word 0x10600002
  .word 0x00000000
  .word 0xae004524
  .word 0x8e030000
  .word 0x30630008
  .word 0x10600011
  .word 0x00000000
  .word 0x3c03007e
  .word 0x9465094c
  .word 0x30a31000
  .word 0x14600153
  .word 0x00000000
  .word 0x3c03007e
  .word 0x94640956
  .word 0x30831000
  .word 0x1460014e
  .word 0x00000000
  .word 0x30a34000
  .word 0x1460014b
  .word 0x00000000
  .word 0x30834000
  .word 0x14600148
  .word 0x00000000
  .word 0x8e040000
  .word 0x2403fff7
  .word 0x00831824
  .word 0xae030000
  .word 0x14400142
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94440952
  .word 0x30821000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443095a
  .word 0x30621000
  .word 0x1040001a
  .word 0x00000000
  .word 0x8e024520
  .word 0x1840000a
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae024520
  .word 0x14400008
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420008
  .word 0xae020000
  .word 0x10000003
  .word 0x00000000
  .word 0x24020003
  .word 0xae024520
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e044520
  .word 0x0c09b6a4
  .word 0x00000000
  .word 0x1000011f
  .word 0x00000000
  .word 0x30824000
  .word 0x14400004
  .word 0x00000000
  .word 0x30624000
  .word 0x10400119
  .word 0x00000000
  .word 0x8e024520
  .word 0x28410003
  .word 0x1020000b
  .word 0x00000000
  .word 0x24430001
  .word 0xae034520
  .word 0x24020003
  .word 0x14620007
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420008
  .word 0xae020000
  .word 0x10000002
  .word 0x00000000
  .word 0xae004520
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e044520
  .word 0x0c09b6a4
  .word 0x00000000
  .word 0x100000ff
  .word 0x00000000
  .word 0x0c09c79c
  .word 0x00000000
  .word 0x144000fb
  .word 0x00000000
  .word 0x0c0997e0
  .word 0x00000000
  .word 0x100000f7
  .word 0x00000000
  .word 0x0c0421c4
  .word 0x00000000
  .word 0x104000f3
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae020000
  .word 0x100000ed
  .word 0x00000000
  .word 0x0c0421c4
  .word 0x00000000
  .word 0x104000e9
  .word 0x00000000
  .word 0x0c0996cc
  .word 0x00000000
  .word 0x100000e5
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420002
  .word 0x144000e1
  .word 0x00000000
  .word 0x8f82b30c
  .word 0x1040000a
  .word 0x00000000
  .word 0x24040001
  .word 0x0c099998
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae020000
  .word 0x100000d5
  .word 0x00000000
  .word 0x0c042170
  .word 0x00000000
  .word 0x24040005
  .word 0x0c04219c
  .word 0x00000000
  .word 0x24040014
  .word 0x0c0421a8
  .word 0x00000000
  .word 0x2402000d
  .word 0xae020004
  .word 0x100000c9
  .word 0x00000000
  .word 0x0c0421c4
  .word 0x00000000
  .word 0x104000c5
  .word 0x00000000
  .word 0x0c099818
  .word 0x00000000
  .word 0x100000c1
  .word 0x00000000
  .word 0x0c0996ec
  .word 0x00000000
  .word 0x100000bd
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420004
  .word 0x144000b9
  .word 0x00000000
  .word 0x24020010
  .word 0xae020004
  .word 0x100000b5
  .word 0x00000000
  .word 0x0c099818
  .word 0x00000000
  .word 0x100000b1
  .word 0x00000000
  .word 0x0c09b730
  .word 0x00000000
  .word 0x144000ad
  .word 0x00000000
  .word 0x8e024524
  .word 0x284101c2
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae024524
  .word 0x10000011
  .word 0x00000000
  .word 0xa3a0003c
  .word 0xa3a0003d
  .word 0xa3a0003e
  .word 0x240200ff
  .word 0xa3a2003f
  .word 0x27a4003c
  .word 0x0c09c888
  .word 0x00000000
  .word 0x0c09c76c
  .word 0x00000000
  .word 0x8e020004
  .word 0xae024528
  .word 0x2402000a
  .word 0xae020004
  .word 0x10000095
  .word 0x00000000
  .word 0x0000882d
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x10400017
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c042938
  .word 0x00000000
  .word 0x24110001
  .word 0x8e024520
  .word 0x10400003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x0c064a34
  .word 0x00000000
  .word 0xae02001c
  .word 0x10000004
  .word 0x00000000
  .word 0x0c064aa8
  .word 0x00000000
  .word 0xae02001c
  .word 0x24020012
  .word 0xae020004
  .word 0x3c02007e
  .word 0x9442094c
  .word 0x3042f9ff
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420956
  .word 0x3042f9ff
  .word 0x10400002
  .word 0x00000000
  .word 0xae004524
  .word 0x8e020000
  .word 0x30420008
  .word 0x10400011
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9444094c
  .word 0x30821000
  .word 0x14400065
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430956
  .word 0x30621000
  .word 0x14400060
  .word 0x00000000
  .word 0x30824000
  .word 0x1440005d
  .word 0x00000000
  .word 0x30624000
  .word 0x1440005a
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fff7
  .word 0x00621024
  .word 0xae020000
  .word 0x16200054
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94440952
  .word 0x30821000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443095a
  .word 0x30621000
  .word 0x1040001a
  .word 0x00000000
  .word 0x8e024520
  .word 0x1840000a
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae024520
  .word 0x14400008
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420008
  .word 0xae020000
  .word 0x10000003
  .word 0x00000000
  .word 0x24020001
  .word 0xae024520
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e044520
  .word 0x0c09b6cc
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0x30824000
  .word 0x14400004
  .word 0x00000000
  .word 0x30624000
  .word 0x1040002b
  .word 0x00000000
  .word 0x8e024520
  .word 0x1c40000b
  .word 0x00000000
  .word 0x24430001
  .word 0xae034520
  .word 0x24020001
  .word 0x14620007
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420008
  .word 0xae020000
  .word 0x10000002
  .word 0x00000000
  .word 0xae004520
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e044520
  .word 0x0c09b6cc
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x8e04001c
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24030003
  .word 0x1443000c
  .word 0x00000000
  .word 0x0c065778
  .word 0x00000000
  .word 0xae004520
  .word 0xae00001c
  .word 0x0c09b6f4
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c09b6a4
  .word 0x00000000
  .word 0x24020009
  .word 0xae020004
  .word 0x0c0999c4
  .word 0x00000000
  .word 0x0c09a754
  .word 0x00000000
  .word 0x0c099d0c
  .word 0x00000000
  .word 0x0c09b770
  .word 0x00000000
  .word 0x0c09a8b0
  .word 0x00000000
  .word 0x0c09c7b0
  .word 0x00000000
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop

// FUN_00265b30
void opRoot00265b30(void)
{
    u32* work;
    u32 v;

    K_ASSERT(sOpRoot != NULL, 0x9a);
    work = sOpRoot;
    D_007cdffc = 0;
    D_007ce00c = 0;
    v = FUN_00420340(work[2], 0);
    work[4] = v;
    *work |= 2;
    work[1] = 0xb;
}

// FUN_00265bb0
void opRoot00265bb0(void)
{
    u32* work;
    u32 v;

    K_ASSERT(sOpRoot != NULL, 0x9a);
    work = sOpRoot;
    v = (u32)FUN_0015C460((KwlnTask*)work[2]);
    work[6] = v;
    *work |= 4;
    work[1] = 0xe;
}

// FUN_00265c20
u32 opRootCreateTask(KwlnTask* parent)
{
    u32 task;
    u32* work;
    u32* root;
    u32 child;
    u8 color[4];

    work = (u32*)H_Malloc(0x4530);
    task = kwlnCreateTaskWithAutoPriority(parent, 10, "op",
                        opRootUpdateTask, opRootDestroyTask, work);
    child = kwlnInitTaskEx("op draw", 0x106f, 1, 2,
                         opRootDrawTask, 0, 0);
    work[3] = child;
    kwlnAddTaskChild(task, child);
    work[0] = 0;
    work[2] = task;
    opResInit((OpResWork*)(work + 8));
    opLogoInit(work + 0x20);
    opTitleInit(work + 0x68);
    opWaitInit(work + 0x47c);
    opMenuInit(work + 0x8dc);
    opFadeInit(work + 0x1100);
    kwlnSetClearColor(0, 0, 0, 0xff);
    sWork = (GmRootWork*)work;
    K_ASSERT(work != NULL, 0x9a);
    root = (u32*)sWork;
    root[0x1148] = 0;
    color[0] = 0;
    color[1] = 0;
    color[2] = 0;
    color[3] = 0xff;
    opFadeSetColor((const RwRGBA*)color);
    opFadeIn();
    H_Fade_FadeIn();
    H_Fade_SetType(5);
    H_Fade_SetDuration(10);
    opResRequestLogo_y2();
    root[1] = 0;
    *root |= 1;
    return task;
}

// FUN_00265dc0
u32 opRoot00265dc0(void)
{
    FUN_00265030();
    K_ASSERT(sOpRoot != NULL, 0x9a);
    if ((*sOpRoot & 1) != 0) {
        return 0;
    }
    return -1;
}

// FUN_00265e30
u32 opRoot00265e30(void)
{
    u32* puVar1;

    K_ASSERT(sOpRoot != NULL, 0x9a);
    puVar1 = sOpRoot;
    if (puVar1[1] != 5 && (~*puVar1 & 1) == 0)
    {
        FUN_00269f50();
        if (puVar1[1] != 0xb)
            opMenu0026c710();
        opWait0026e000();
        if (puVar1[1] != 0xb)
        {
            opMenu0026cc90();
            opTitle00268e20();
        }
        FUN_002720c0();
    }
    return 0;
}
 
// FUN_00265ef0
void opRoot00265ef0(int param_1)
{
    K_ASSERT(sOpRoot != NULL, 0x9a);
    opLogo00269d10();
    opTitle002673f0();
    opWait0026dd60();
    opMenu0026a280();
    FUN_00271d70();
    opResDestroyTitle();
    opResShutdown();
    sOpRoot = NULL;
    H_Free(*(void**)(param_1 + 0x3c));
}


// FUN_00265f80
void opRoot00265f80(void)
{
    u32* root;
    s32 state;

    K_ASSERT(sOpRoot != NULL, 0x9a);
    root = sOpRoot;
    FUN_00108f70();
    opResDestroyTitle();
    state = (s32)root[0x4528 / 4];
    switch (state)
    {
        case 8:
            opWait0026ebf0();
            opTitle002694b0();
            break;
        case 9:
        case 0x11:
            opWait0026ebf0();
            opTitle002694b0();
            opMenu0026da10();
            break;
        default:
            K_ASSERT(false, 0x327);
            break;
    }
    opResRequestLogo();
    root[1] = 0;
}

// FUN_00266060
void opRoot00266060(void)
{
    int base;

    K_ASSERT(sOpRoot != NULL, 0x9a);
    base = (int)sOpRoot;
    if (H_Snd_GetCurrentBgmId() != 0x36) {
        H_Snd_PlayBgm(0x36, 1);
    }
    *(u32*)(base + 0x4524) = 0;
    *(u32*)(base + 4) = 9;
}
















// FUN_002660d0
void opRoot002660d0(void)
{
    int base;

    K_ASSERT(sOpRoot != NULL, 0x9a);
    base = (int)sOpRoot;
    if (H_Snd_GetCurrentBgmId() != 0x36) {
        H_Snd_PlayBgm(0x36, 1);
    }
    *(u32*)(base + 0x4524) = 0;
    *(u32*)(base + 4) = 0x11;
}
