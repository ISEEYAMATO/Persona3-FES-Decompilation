#include "h_pad.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Kernel/h_malloc.h"
#include "Kosaka/k_assert.h"
#include "Main/g_data.h"
#include "temporary.h"

#define HPAD_PAD_STATE_FIND_CTP1 2
#define HPAD_PAD_STATE_STABLE    6

typedef struct HPadRwAllocation
{
    u32 size;
    u32 alignment;
    u32 serial;
    u32 hint;
} HPadRwAllocation;

extern s32 scePadGetState(s32 port, s32 slot);
extern s32 scePadSetMainMode(s32 port, s32 slot, s32 mode, s32 lock);
extern s32 scePadInfoAct(s32 port, s32 slot, s32 actuator, s32 command);
extern s32 scePadSetActAlign(s32 port, s32 slot, u8* align);
extern s32 scePadGetReqState(s32 port, s32 slot);
extern s32 scePadRead(s32 port, s32 slot, u8* data);
extern s32 scePadSetActDirect(s32 port, s32 slot, u8* data);
extern void* func_00520728(size_t size);
extern void func_00520748(void* memory);
extern s32 printf(const char* format, ...);
extern const char D_005CEAE0[];
#pragma alias D_005CEAE0_sda D_005CEAE0
extern const char D_005CEAE0_sda[] __attribute__((section(".sdata")));
extern const char D_005CEAF0[];
extern const char D_005CEB10[];
extern const char D_005CEB30[];

HPad gWorkPads[HPAD_PORT_MAX]; // 007e09b0
HPad gPads[HPAD_PORT_MAX];     // 007e0940

static u_long128 sAddrPort1[scePadDmaBufferMax] __attribute__((aligned(64))); // 007e0840
static u_long128 sAddrPort2[scePadDmaBufferMax] __attribute__((aligned(64))); // 007e0740
static u8 sRDataPort2[32]; // 007e0720
static u8 sRDataPort1[32]; // 007e0700
#pragma alias gWorkPads_abs gWorkPads
extern u8 gWorkPads_abs[];
#pragma alias gPads_abs gPads
extern u8 gPads_abs[];
#pragma alias sAddrPort1_abs sAddrPort1
extern u8 sAddrPort1_abs[];
#pragma alias sAddrPort2_abs sAddrPort2
extern u8 sAddrPort2_abs[];

static s16 sRumbleState;
static union
{
    u16 h;
    u8 b;
} sRumbleIntensity;
static s16 sRumblePhase;
static s16 sRumbleOffFrames;
static s16 sRumbleOnFrames;
static s16 sRumbleCadence;
static s16 sRumbleDuration;

static s32 sRwAllocatedBytes;
static u32 sRwAllocationCount;
static u32 sRwCallocCount;
static u32 sRwReallocCount;
static u32 sRwAllocationHint;
static RwMemoryFunctions sRwMemoryFunctions;

/* Removing this loses FUN_00103000 (MATCH nd0 -> MISMATCH nd48) - measured W161. */
#pragma opt_loop_invariants on
// FUN_00103000 MATCHING
void H_Pad_Init(void)
{
    s32 i;

    memset(((HPad*)gWorkPads_abs) + HPAD_PORT_1, 0, sizeof(HPad));
    memset(((HPad*)gWorkPads_abs) + HPAD_PORT_2, 0, sizeof(HPad));
    memset(((HPad*)gPads_abs) + HPAD_PORT_1, 0, sizeof(HPad));
    memset(((HPad*)gPads_abs) + HPAD_PORT_2, 0, sizeof(HPad));

    scePadInit(0);
    scePadPortOpen(HPAD_PORT_1, 0, (u_long128*)sAddrPort1_abs);
    scePadPortOpen(HPAD_PORT_2, 0, (u_long128*)sAddrPort2_abs);
    i = 0;

    for (; i < HPAD_PORT_MAX; i++)
    {
        ((HPad*)gWorkPads_abs)[i].port = i;
        ((HPad*)gWorkPads_abs)[i].slot = 0;
        ((HPad*)gWorkPads_abs)[i].state = HPAD_STATE_INITIALIZING;
        ((HPad*)gWorkPads_abs)[i].mainMode = 0;
        ((HPad*)gWorkPads_abs)[i].requestedMainMode = 3;
    }
}
#pragma opt_loop_invariants reset

// FUN_00103110
#ifndef PC_BUILD
asm void H_Pad_Poll(HPad* pad)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x240300ff
  .word 0x3c02007e
  .word 0xa0430700
  .word 0x94910008
  .word 0x9490000a
  .word 0x0220202d
  .word 0x0200282d
  .word 0x0c144696
  .word 0x00000000
  .word 0x96460002
  .word 0x24050005
  .word 0x10c50092
  .word 0x00000000
  .word 0x24030004
  .word 0x10c3007c
  .word 0x00000000
  .word 0x24040003
  .word 0x10c40062
  .word 0x00000000
  .word 0x24030001
  .word 0x10c30054
  .word 0x00000000
  .word 0x10c00003
  .word 0x00000000
  .word 0x100000ad
  .word 0x00000000
  .word 0x24030002
  .word 0x10430004
  .word 0x00000000
  .word 0x24030006
  .word 0x144300a7
  .word 0x00000000
  .word 0x3403ffff
  .word 0xa6430032
  .word 0xa6430034
  .word 0x96440004
  .word 0xa6440000
  .word 0x24070003
  .word 0x10870031
  .word 0x00000000
  .word 0x24030002
  .word 0x1083001d
  .word 0x00000000
  .word 0x24030001
  .word 0x10830008
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000095
  .word 0x00000000
  .word 0xa6470002
  .word 0x10000092
  .word 0x00000000
  .word 0x24030006
  .word 0x1443000d
  .word 0x00000000
  .word 0x0220202d
  .word 0x0200282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c1447ee
  .word 0x00000000
  .word 0x24030001
  .word 0x14430086
  .word 0x00000000
  .word 0xa6430002
  .word 0x10000083
  .word 0x00000000
  .word 0xa6470002
  .word 0x10000080
  .word 0x00000000
  .word 0x24030006
  .word 0x1443000c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0200282d
  .word 0x0000302d
  .word 0x0c1447ee
  .word 0x00000000
  .word 0x24030001
  .word 0x14430075
  .word 0x00000000
  .word 0xa6430002
  .word 0x10000072
  .word 0x00000000
  .word 0xa6470002
  .word 0x1000006f
  .word 0x00000000
  .word 0x24030006
  .word 0x1443000c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0200282d
  .word 0x24060001
  .word 0x0c1447ee
  .word 0x00000000
  .word 0x24030001
  .word 0x14430064
  .word 0x00000000
  .word 0xa6430002
  .word 0x10000061
  .word 0x00000000
  .word 0xa6470002
  .word 0x1000005e
  .word 0x00000000
  .word 0x24030006
  .word 0x14430004
  .word 0x00000000
  .word 0xa6440002
  .word 0x10000058
  .word 0x00000000
  .word 0x10450056
  .word 0x00000000
  .word 0xa6400002
  .word 0x10000053
  .word 0x00000000
  .word 0x0220202d
  .word 0x0200282d
  .word 0x2406ffff
  .word 0x0000382d
  .word 0x0c144714
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x24030005
  .word 0xa6430002
  .word 0x10000047
  .word 0x00000000
  .word 0x0220202d
  .word 0x0200282d
  .word 0x27868580
  .word 0x0c14484e
  .word 0x00000000
  .word 0x10400040
  .word 0x00000000
  .word 0x24030004
  .word 0xa6430002
  .word 0x1000003c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0200282d
  .word 0x0c1446f0
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0x24030003
  .word 0xa6430002
  .word 0x1000002d
  .word 0x00000000
  .word 0x24030005
  .word 0xa6430002
  .word 0x10000029
  .word 0x00000000
  .word 0x24030002
  .word 0x10430007
  .word 0x00000000
  .word 0x24030006
  .word 0x10430004
  .word 0x00000000
  .word 0xa6400002
  .word 0x10000020
  .word 0x00000000
  .word 0x96440000
  .word 0x96430004
  .word 0x10830004
  .word 0x00000000
  .word 0xa6400002
  .word 0x10000019
  .word 0x00000000
  .word 0x0220202d
  .word 0x0200282d
  .word 0x3c06007e
  .word 0x24c60700
  .word 0x0c144678
  .word 0x00000000
  .word 0x9646002e
  .word 0x96450030
  .word 0x96430032
  .word 0x14c30005
  .word 0x00000000
  .word 0x30a4ffff
  .word 0x96430034
  .word 0x1083000a
  .word 0x00000000
  .word 0xa6460032
  .word 0xa6450034
  .word 0xa3a60040
  .word 0xa3a50041
  .word 0x0220202d
  .word 0x0200282d
  .word 0x27a60040
  .word 0x0c14481c
  .word 0x00000000
  .word 0x0000282d
  .word 0x0000302d
  .word 0x3c03007e
  .word 0x90630700
  .word 0x14600017
  .word 0x00000000
  .word 0x3c03007e
  .word 0x90640701
  .word 0x24030079
  .word 0x10830010
  .word 0x00000000
  .word 0x24030073
  .word 0x10830009
  .word 0x00000000
  .word 0x24030041
  .word 0x10830003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x24060001
  .word 0x10000007
  .word 0x00000000
  .word 0x24060001
  .word 0x00c0282d
  .word 0x10000003
  .word 0x00000000
  .word 0x24060001
  .word 0x00c0282d
  .word 0x9643000c
  .word 0xa6430010
  .word 0x96430016
  .word 0xa643001c
  .word 0x10c0000d
  .word 0x00000000
  .word 0x3c03007e
  .word 0x90630702
  .word 0x00601827
  .word 0xa3a3004d
  .word 0x3c03007e
  .word 0x90630703
  .word 0x00601827
  .word 0xa3a3004c
  .word 0x97a3004c
  .word 0xa643000c
  .word 0x10000003
  .word 0x00000000
  .word 0xa640000c
  .word 0xa6400010
  .word 0x10a0000f
  .word 0x00000000
  .word 0x3c03007e
  .word 0x90630704
  .word 0xa2430020
  .word 0x3c03007e
  .word 0x90630705
  .word 0xa2430021
  .word 0x3c03007e
  .word 0x90630706
  .word 0xa243001e
  .word 0x3c03007e
  .word 0x90630707
  .word 0xa243001f
  .word 0x10000008
  .word 0x00000000
  .word 0x24030080
  .word 0xa2430020
  .word 0xa2430021
  .word 0xa243001e
  .word 0xa243001f
  .word 0xa6400016
  .word 0xa640001c
  .word 0xdfbf0030
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

// FUN_00103580
void H_Pad_Update(void)
{
    HPadPort port;

    for (port = HPAD_PORT_1; port < HPAD_PORT_MAX; port++)
    {
        H_Pad_Poll(&gWorkPads[port]);
        H_Pad_UpdateButtonStates(port);
    }

    gWorkPads[HPAD_PORT_2].btn[0].pressed = 0;
    gWorkPads[HPAD_PORT_2].btn[0].justPressed = 0;
    gWorkPads[HPAD_PORT_2].btn[0].justReleased = 0;
    gWorkPads[HPAD_PORT_2].btn[1].justPressed = 0;
    gWorkPads[HPAD_PORT_2].btn[1].released = 0;
    *(u8*)&gWorkPads[HPAD_PORT_2].lstickX = 0x80;
    *(u8*)&gWorkPads[HPAD_PORT_2].lstickY = 0x80;
    *(u8*)&gWorkPads[HPAD_PORT_2].rstickX = 0x80;
    *(u8*)&gWorkPads[HPAD_PORT_2].rstickY = 0x80;
    H_Pad_UpdateRumble();
}

// FUN_00103650
void H_Pad_UpdateButtonStates(HPadPort port)
{

    gWorkPads[port].btn[1].justPressed = gWorkPads[port].btn[0].pressed & 0xF0;
    if ((u8)gWorkPads[port].lstickX > 0xC0)
    {
        gWorkPads[port].btn[1].justPressed |= HPAD_BTN_RIGHT;
    }
    if ((u8)gWorkPads[port].lstickX < 0x40)
    {
        gWorkPads[port].btn[1].justPressed |= HPAD_BTN_LEFT;
    }
    if ((u8)gWorkPads[port].lstickY > 0xC0)
    {
        gWorkPads[port].btn[1].justPressed |= HPAD_BTN_DOWN;
    }
    if ((u8)gWorkPads[port].lstickY < 0x40)
    {
        gWorkPads[port].btn[1].justPressed |= HPAD_BTN_UP;
    }

    gWorkPads[port].btn[0].justPressed =
        gWorkPads[port].btn[0].pressed &
        (gWorkPads[port].btn[0].pressed ^ gWorkPads[port].btn[0].released);
    gWorkPads[port].btn[1].released =
        gWorkPads[port].btn[1].justPressed &
        (gWorkPads[port].btn[1].justPressed ^ gWorkPads[port].virtualPreviousPressed);
    gWorkPads[port].btn[0].justReleased = gWorkPads[port].btn[0].justPressed;
    gWorkPads[port].btn[1].justReleased = gWorkPads[port].btn[1].released;

    H_Pad_UpdateDirectionalButtonRepeat(port, HPAD_BTN_UP, 0);
    H_Pad_UpdateDirectionalButtonRepeat(port, HPAD_BTN_DOWN, 1);
    H_Pad_UpdateDirectionalButtonRepeat(port, HPAD_BTN_LEFT, 2);
    H_Pad_UpdateDirectionalButtonRepeat(port, HPAD_BTN_RIGHT, 3);
    H_Pad_UpdateFaceButtonRepeat(port, HPAD_BTN_L1, 4);
    H_Pad_UpdateFaceButtonRepeat(port, HPAD_BTN_L2, 5);
    H_Pad_UpdateFaceButtonRepeat(port, HPAD_BTN_R1, 6);
    H_Pad_UpdateFaceButtonRepeat(port, HPAD_BTN_R2, 7);
    H_Pad_UpdateFaceButtonRepeat(port, HPAD_BTN_CROSS, 8);
    H_Pad_UpdateFaceButtonRepeat(port, HPAD_BTN_CIRCLE, 9);
    H_Pad_UpdateFaceButtonRepeat(port, HPAD_BTN_TRIANGLE, 10);
    H_Pad_UpdateFaceButtonRepeat(port, HPAD_BTN_SQUARE, 11);
}

// FUN_001038D0
void H_Pad_UpdateFaceButtonRepeat(HPadPort port, u16 buttons, s32 repeatIndex)
{
    if ((gWorkPads[port].btn[0].justPressed & buttons) != 0)
    {
        gWorkPads[port].repeatTimer[repeatIndex] = 7;
    }
    else if ((gWorkPads[port].btn[0].pressed & buttons) != 0)
    {
        gWorkPads[port].repeatTimer[repeatIndex]--;
        if (gWorkPads[port].repeatTimer[repeatIndex] == 0)
        {
            gWorkPads[port].btn[0].justReleased |= buttons;
            gWorkPads[port].repeatTimer[repeatIndex] = 3;
        }
    }
}

// FUN_00103990
void H_Pad_UpdateDirectionalButtonRepeat(HPadPort port, u16 buttons, s32 repeatIndex)
{
    if ((gWorkPads[port].btn[0].justPressed & buttons) != 0)
    {
        gWorkPads[port].repeatTimer[repeatIndex] = 7;
    }
    else if ((gWorkPads[port].btn[0].pressed & buttons) != 0)
    {
        gWorkPads[port].repeatTimer[repeatIndex]--;
        if (gWorkPads[port].repeatTimer[repeatIndex] == 0)
        {
            gWorkPads[port].btn[0].justReleased |= buttons;
            gWorkPads[port].repeatTimer[repeatIndex] = 3;
        }
    }

    if ((gWorkPads[port].btn[1].released & buttons) != 0)
    {
        gWorkPads[port].repeatTimer[repeatIndex] = 7;
    }
    else if ((gWorkPads[port].btn[1].justPressed & buttons) != 0)
    {
        gWorkPads[port].repeatTimer[repeatIndex]--;
        if (gWorkPads[port].repeatTimer[repeatIndex] == 0)
        {
            gWorkPads[port].btn[1].justReleased |= buttons;
            gWorkPads[port].repeatTimer[repeatIndex] = 3;
        }
    }
}

// FUN_00103B10
#ifndef PC_BUILD
asm void H_Pad_UpdateRumble(void)
{
  .set noreorder
  .word 0x8784b1a0
  .word 0x24030002
  .word 0x10830019
  .word 0x00000000
  .word 0x24030001
  .word 0x10830010
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000039
  .word 0x00000000
  .word 0xa780b1b8
  .word 0xa780b1b0
  .word 0xa780b1a4
  .word 0x3c03007e
  .word 0xa46009de
  .word 0x3c03007e
  .word 0xa46009e0
  .word 0x24830001
  .word 0xa783b1a0
  .word 0x1000002e
  .word 0x00000000
  .word 0x3c03007e
  .word 0xa46009de
  .word 0x3c03007e
  .word 0xa46009e0
  .word 0x10000028
  .word 0x00000000
  .word 0x8783b1b8
  .word 0x14600005
  .word 0x00000000
  .word 0x24030001
  .word 0xa783b1a0
  .word 0x10000021
  .word 0x00000000
  .word 0x8783b1b4
  .word 0x14600019
  .word 0x00000000
  .word 0x8783b1a8
  .word 0x1460000d
  .word 0x00000000
  .word 0x9383b1a4
  .word 0x0060202d
  .word 0x3c03007e
  .word 0xa46409de
  .word 0x3c03007e
  .word 0xa46409e0
  .word 0x8783b1b0
  .word 0xa783b1b4
  .word 0x24030001
  .word 0xa783b1a8
  .word 0x1000000c
  .word 0x00000000
  .word 0x3c03007e
  .word 0xa46009de
  .word 0x3c03007e
  .word 0xa46009e0
  .word 0x8783b1ac
  .word 0xa783b1b4
  .word 0xa780b1a8
  .word 0x10000003
  .word 0x00000000
  .word 0x2463ffff
  .word 0xa783b1b4
  .word 0x8783b1b8
  .word 0x2463ffff
  .word 0xa783b1b8
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00103C30
void H_Pad_StartRumblePattern(s16 duration, u16 intensity, s16 onFrames, s16 offFrames)
{
    if (datGetFlag(0x183) == 1)
    {
        sRumbleDuration = duration;
        sRumbleCadence = 0;
        sRumbleOnFrames = onFrames;
        sRumbleOffFrames = offFrames;
        sRumbleIntensity.h = intensity;
        sRumbleState = 2;
        sRumblePhase = 0;
    }
}

// FUN_00103CB0
void H_Pad_StopRumble(void)
{
    sRumbleDuration = 0;
    sRumbleCadence = 0;
    sRumbleOnFrames = 0;
    sRumbleOffFrames = 0;
    sRumbleIntensity.h = 0;
    sRumbleState = HPAD_STATE_WAITING_FOR_MODE;
    sRumblePhase = 0;
    gWorkPads[HPAD_PORT_1].actuator0 = 0;
    gWorkPads[HPAD_PORT_1].actuator1 = 0;
}

// FUN_00103CF0
void H_Pad_IgnoreRumbleCallback(void)
{
}

// FUN_00103D00
void H_Pad_RwFreeRaw(void* memory)
{
    HPadRwAllocation* allocation;
    u32 size;
    u32 hint;
    s32 intrState;

    if (memory == NULL)
    {
        return;
    }

    allocation = (HPadRwAllocation*)((u8*)memory - sizeof(HPadRwAllocation));
    size = allocation->size;
    hint = allocation->hint;
    sRwAllocatedBytes -= size;
    intrState = func_0050d3a0();
    if (hint != 0)
    {
        memset(allocation, 0, size);
    }
    func_00520748(allocation);
    if (intrState != 0)
    {
        func_0050d3f0();
    }
}


/* W389 residual: callee-saved register-coloring cycle (retail keeps intrState in $s1/copySize in $s0; candidate swaps them). Baseline nd=6/object=228/window=240; propagation off worsened nd=13, the other singles and all pairs were neutral; declaration and type swaps were neutral. */


// Previous body omitted retail's debug-name checks (two kwlnTaskGetUpdating
// + strcmp guards bracketing the allocation) and the interrupt-disable
// pair around H_Pad_RwAllocateRaw. That callee was also missing its real
// second parameter (hint) - added as an unused param (its body never
// reads it) since the caller passes it in $a1 per retail. obj 88B->312B/
// 320B; residual is a small OR-condition register-choice floor.

