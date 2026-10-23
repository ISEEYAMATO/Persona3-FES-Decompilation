#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"
#include "rw/rwcore.h"

#pragma alias sinf_y2 sinf
#pragma alias cosf_y2 cosf
#pragma alias D_00960090_y2 D_00960090
#pragma alias D_0096009C_y2 D_0096009C
#pragma alias func_0021c3f0_y2 func_0021c3f0
#pragma alias func_0021cca0_y2 func_0021cca0
#pragma alias func_0021cce0_y2 func_0021cce0
#pragma alias func_0021d3b0_y2 func_0021d3b0
#pragma alias func_0021d890_y2 func_0021d890
#pragma alias func_0021d8e0_y2 func_0021d8e0
#pragma alias func_0021d950_y2 func_0021d950
#pragma alias func_002d20a0_y2 func_002d20a0


/* bi_main.c owns 16 battle-information slots, each 0xF50 bytes. */
static u8* sBiMain; // DAT_007CE31C / GP -0x49D4
/* 0x00242C40 switches to bpc_main.c and its DAT_007CE320 work pointer. */

#define BI_SLOT_COUNT 16
#define BI_SLOT_SIZE 0xF50
#define BI_SLOT(work, index) ((u8*)(work) + (index) * BI_SLOT_SIZE)
#define BI_U16(work, offset) (*(u16*)((u8*)(work) + (offset)))
#define BI_U32(work, offset) (*(u32*)((u8*)(work) + (offset)))

/* Slot header: +0 flags, +4 display mode, +0x310 age, +0x314 unit id. */
enum
{
    BI_SLOT_ACTIVE = 1,
    BI_SLOT_INITIALIZED = 2,
    BI_SLOT_ALT_STYLE = 4,
    BI_SLOT_HIDDEN = 8,
    BI_SLOT_READY = 0x10,
    BI_SLOT_TEXT_0 = 0x40,
    BI_SLOT_TEXT_1 = 0x80,
    BI_SLOT_NUMERIC_0 = 0x100,
    BI_SLOT_NUMERIC_1 = 0x200
};

extern void (*D_00960090)();
extern void (*D_0096009C)();
#pragma alias D_00960090_abs D_00960090
extern u8 D_00960090_abs[];


u32 func_0021c3f0(s32 param_1);
void* func_0021cca0(void* texture, s32 index);
u32 func_0021cce0(void* frameData);
void func_0021d3b0(void* destination, void* frameData);
void func_0021d890(void* destination, const f32* vertices);
void func_0021d8e0(void* destination, const f32* rect);
void func_0021d950(void* destination, const u8* color);
void func_0021eae0(void* destination, const f32* rect);
void func_0021eac0(void* glyph, f32 value);
void* btlUnitFindFromId(u16 id);
void func_002806d0(void* unit, RwV3d* param_2);
u32 func_002d20a0();
int sprintf(char*, const char*, ...);
u32 strlen(const char*);
void func_00242840(void* glyphs, s32 capacity, s32 value);
f32 func_00242950(s32 value);
f32 cosf(f32);
extern f32 D_007CB0D4;
f32 sinf(f32);






static void biMainDrawQuad(void* vertices, u32 pass, u32 blend)
{
    D_0096009C(vertices, 4, 0, pass, blend);
}

static void biMainTickSlot(u8* slot)
{
    void* unit;

    if ((BI_U32(slot, 0) & BI_SLOT_ACTIVE) == 0) {
        return;
    }

    unit = btlUnitFindFromId(BI_U16(slot, 0x314));
    if (BI_U32(slot, 0x310) < 50) {
        BI_U32(slot, 0x310)++;
    }
    if (unit == NULL || BI_U32(slot, 0x310) == 50) {
        BI_U32(slot, 0) &= ~(BI_SLOT_ACTIVE | BI_SLOT_INITIALIZED);
    }
}

static void biMainPrepareDigit(void* glyph, s32 digit)
{
    void* renderContext;
    void* glyphResource;

    renderContext = (void*)func_0021c3f0(1);
    glyphResource = func_0021cca0(renderContext, digit + 0x2e);
    func_0021d3b0(glyph, glyphResource);
}



static void biMainDrawSlot(u8* slot)
{
    u32 flags;
    u32 mode;

    flags = BI_U32(slot, 0);
    if ((flags & (BI_SLOT_ACTIVE | BI_SLOT_HIDDEN | BI_SLOT_READY)) !=
        (BI_SLOT_ACTIVE | BI_SLOT_READY)) {
        return;
    }
    mode = BI_U32(slot, 4);
    if (mode == 0 || mode == 1 || mode == 2 || mode == 3) {
        if ((flags & BI_SLOT_ALT_STYLE) != 0) {
            RpSkyRenderStateSet(3, (void*)0x717fb);
            RpSkyRenderStateSet(2, (void*)0x44);
            biMainDrawQuad(slot + 0x110, 1, 2);
            biMainDrawQuad(slot + 0x110, 2, 3);
            RpSkyRenderStateSet(3, (void*)0x71801);
            RpSkyRenderStateSet(2, (void*)0x48);
            biMainDrawQuad(slot + 0x210, 1, 2);
            biMainDrawQuad(slot + 0x210, 2, 3);
        } else {
            biMainDrawQuad(slot + 0x10, 1, 2);
            biMainDrawQuad(slot + 0x10, 2, 3);
        }
    }
}

/* Removing this loses func_0023f480 (MATCH nd0 -> MISMATCH nd15) - measured W161. */
#pragma optimization_level 1
// FUN_0023F480
void func_0023f480(void* work)
{
    s32 i;
    s32 stride;

    K_ASSERT(sBiMain == NULL, 0x92);
    i = 0;
    stride = BI_SLOT_SIZE;
    for (; i < BI_SLOT_COUNT; i++) {
        BI_U32((u8*)work + i * stride, 0) = 0;
    }
    sBiMain = work;
}
#pragma optimization_level 2

// FUN_0023F500
void func_0023f500(void)
{
    K_ASSERT(sBiMain != NULL, 0x8a);
    sBiMain = NULL;
}

/* Mode 2's three-stage sprite sequence is reconstructed; stack geometry remains nonmatching. */
// FUN_0023F540
asm void func_0023f540(void)
{
  .set noreorder
  .word 0x27bdff00
  .word 0xffbf00b0
  .word 0x7fbe00a0
  .word 0x7fb70090
  .word 0x7fb60080
  .word 0x7fb50070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f82b62c
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e870
  .word 0x2405008a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f97b62c
  .word 0x24040001
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0000882d
  .word 0x10000020
  .word 0x00000000
  .word 0x24030f50
  .word 0x02231818
  .word 0x02e38021
  .word 0x8e030000
  .word 0x00601827
  .word 0x30630001
  .word 0x14600017
  .word 0x00000000
  .word 0x96040314
  .word 0x0c0a240c
  .word 0x00000000
  .word 0x8e030310
  .word 0x28610032
  .word 0x10200003
  .word 0x00000000
  .word 0x24630001
  .word 0xae030310
  .word 0x8e040310
  .word 0x24030032
  .word 0x10830003
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x8e040000
  .word 0x2403fffd
  .word 0x00832024
  .word 0xae040000
  .word 0x2403fffe
  .word 0x00831824
  .word 0xae030000
  .word 0x26310001
  .word 0x2a230010
  .word 0x1460ffdf
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000899
  .word 0x00000000
  .word 0x24030f50
  .word 0x02431818
  .word 0x02e38021
  .word 0x8e030000
  .word 0x00601827
  .word 0x30630001
  .word 0x14600890
  .word 0x00000000
  .word 0x96040314
  .word 0x0c0a240c
  .word 0x00000000
  .word 0x0040882d
  .word 0x0220202d
  .word 0x27a500e0
  .word 0x0c0a01b4
  .word 0x00000000
  .word 0x27a400e0
  .word 0x27a500f0
  .word 0x0c0b4828
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x92220037
  .word 0x10400007
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fff7
  .word 0x00621024
  .word 0xae020000
  .word 0x10000004
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420008
  .word 0xae020000
  .word 0xc7a100f0
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a000c0
  .word 0xc7a100f4
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a000c4
  .word 0x3c024000
  .word 0xafa200c8
  .word 0x3c024348
  .word 0xafa200cc
  .word 0x26040d40
  .word 0x27a500c0
  .word 0x0c087638
  .word 0x00000000
  .word 0xc7a100f0
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a000c0
  .word 0xc7a100f4
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a000c4
  .word 0x3c024348
  .word 0xafa200c8
  .word 0x3c024000
  .word 0xafa200cc
  .word 0x26040e40
  .word 0x27a500c0
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e030000
  .word 0x30630010
  .word 0x10600674
  .word 0x00000000
  .word 0x8e040004
  .word 0x24030002
  .word 0x10830482
  .word 0x00000000
  .word 0x24030003
  .word 0x10830457
  .word 0x00000000
  .word 0x24030001
  .word 0x1083022c
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000666
  .word 0x00000000
  .word 0x26110010
  .word 0x3c024110
  .word 0x44821000
  .word 0xc7a100f0
  .word 0x3c0242dc
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0x46001540
  .word 0xc7a100f4
  .word 0x3c024270
  .word 0x44820000
  .word 0x00000000
  .word 0x46000841
  .word 0x3c0240e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000841
  .word 0x3c024160
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d01
  .word 0x0280202d
  .word 0x2405000b
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034254
  .word 0x44830000
  .word 0x00000000
  .word 0x46150000
  .word 0xe7a000c0
  .word 0x3c03424c
  .word 0x44830000
  .word 0x00000000
  .word 0x46140000
  .word 0xe7a000c4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000c8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000cc
  .word 0x0220202d
  .word 0x27a500c0
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e020310
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000029
  .word 0x00000000
  .word 0x28410003
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x2841001e
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x10000013
  .word 0x00000000
  .word 0x28410022
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442ffde
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x10000002
  .word 0x00000000
  .word 0x44800800
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
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
  .word 0xa3a300ff
  .word 0x0220202d
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030000
  .word 0x30630004
  .word 0x106000d0
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000a
  .word 0x0c087328
  .word 0x00000000
  .word 0x8e030310
  .word 0x04610005
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44831800
  .word 0x10000018
  .word 0x00000000
  .word 0x2861000c
  .word 0x10200013
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c034140
  .word 0x44830000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46020042
  .word 0x3c034000
  .word 0x44830000
  .word 0x00000000
  .word 0x4602001a
  .word 0x460110dd
  .word 0x10000003
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44831800
  .word 0xafa000c0
  .word 0xafa000c4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000c8
  .word 0xafa000cc
  .word 0xe7a000d0
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000d4
  .word 0xafa000d8
  .word 0xe7a000dc
  .word 0x0000182d
  .word 0x3c024296
  .word 0x44821000
  .word 0x3c024208
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200c0
  .word 0xc4400000
  .word 0x46020001
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010001
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200c0
  .word 0xc4400000
  .word 0x46030002
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46030002
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c024296
  .word 0x44821000
  .word 0x3c024208
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200c0
  .word 0xc4400000
  .word 0x46020000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c024296
  .word 0x44820000
  .word 0x00000000
  .word 0x46150080
  .word 0x3c0241e8
  .word 0x44820000
  .word 0x00000000
  .word 0x46140040
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200c0
  .word 0xc4400000
  .word 0x46020000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x26240100
  .word 0x27a500c0
  .word 0x0c087624
  .word 0x00000000
  .word 0x8e020310
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000029
  .word 0x00000000
  .word 0x28410008
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x2841001e
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x10000013
  .word 0x00000000
  .word 0x28410022
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442ffde
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x10000002
  .word 0x00000000
  .word 0x44800800
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
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
  .word 0xa3a300ff
  .word 0x26240100
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030000
  .word 0x30630004
  .word 0x10600514
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000a
  .word 0x0c087328
  .word 0x00000000
  .word 0x8e030310
  .word 0x04610005
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44831800
  .word 0x10000023
  .word 0x00000000
  .word 0x28610008
  .word 0x10200005
  .word 0x00000000
  .word 0x3c034000
  .word 0x44831800
  .word 0x1000001c
  .word 0x00000000
  .word 0x28610008
  .word 0x10200005
  .word 0x00000000
  .word 0x3c034000
  .word 0x44831800
  .word 0x10000015
  .word 0x00000000
  .word 0x28610022
  .word 0x10200010
  .word 0x00000000
  .word 0x2463fff8
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0341d0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000803
  .word 0x3c033f80
  .word 0x44830800
  .word 0x00000000
  .word 0x46000801
  .word 0x460008c0
  .word 0x10000003
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44831800
  .word 0xafa000c0
  .word 0xafa000c4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000c8
  .word 0xafa000cc
  .word 0xe7a000d0
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000d4
  .word 0xafa000d8
  .word 0xe7a000dc
  .word 0x0000182d
  .word 0x3c024296
  .word 0x44821000
  .word 0x3c024208
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200c0
  .word 0xc4400000
  .word 0x46020001
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010001
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200c0
  .word 0xc4400000
  .word 0x46030002
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46030002
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c024296
  .word 0x44821000
  .word 0x3c024208
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200c0
  .word 0xc4400000
  .word 0x46020000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c024296
  .word 0x44820000
  .word 0x00000000
  .word 0x46150080
  .word 0x3c0241e8
  .word 0x44820000
  .word 0x00000000
  .word 0x46140040
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200c0
  .word 0xc4400000
  .word 0x46020000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x26240200
  .word 0x27a500c0
  .word 0x0c087624
  .word 0x00000000
  .word 0x8e020310
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000021
  .word 0x00000000
  .word 0x28410008
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x1000001a
  .word 0x00000000
  .word 0x28410008
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x10000013
  .word 0x00000000
  .word 0x28410022
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442fff8
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241d0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x10000002
  .word 0x00000000
  .word 0x44800800
  .word 0x24020064
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0x240200ff
  .word 0xa3a200fe
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
  .word 0xa3a300ff
  .word 0x26240200
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x1000043f
  .word 0x00000000
  .word 0x26110010
  .word 0x3c024110
  .word 0x44821000
  .word 0xc7a100f0
  .word 0x3c0242dc
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0x46001540
  .word 0xc7a100f4
  .word 0x3c024270
  .word 0x44820000
  .word 0x00000000
  .word 0x46000841
  .word 0x3c0240e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000841
  .word 0x3c024160
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d01
  .word 0x0280202d
  .word 0x2405000b
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034254
  .word 0x44830000
  .word 0x00000000
  .word 0x46150000
  .word 0xe7a000c0
  .word 0x3c03424c
  .word 0x44830000
  .word 0x00000000
  .word 0x46140000
  .word 0xe7a000c4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000c8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000cc
  .word 0x0220202d
  .word 0x27a500c0
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e020310
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000029
  .word 0x00000000
  .word 0x28410003
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x2841001e
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x10000013
  .word 0x00000000
  .word 0x28410022
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442ffde
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x10000002
  .word 0x00000000
  .word 0x44800800
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
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
  .word 0xa3a300ff
  .word 0x0220202d
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030000
  .word 0x30630004
  .word 0x106000d0
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000a
  .word 0x0c087328
  .word 0x00000000
  .word 0x8e030310
  .word 0x04610005
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44831800
  .word 0x10000018
  .word 0x00000000
  .word 0x2861000c
  .word 0x10200013
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c034140
  .word 0x44830000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46020042
  .word 0x3c034000
  .word 0x44830000
  .word 0x00000000
  .word 0x4602001a
  .word 0x460110dd
  .word 0x10000003
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44831800
  .word 0xafa000c0
  .word 0xafa000c4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000c8
  .word 0xafa000cc
  .word 0xe7a000d0
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000d4
  .word 0xafa000d8
  .word 0xe7a000dc
  .word 0x0000182d
  .word 0x3c024296
  .word 0x44821000
  .word 0x3c024208
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200c0
  .word 0xc4400000
  .word 0x46020001
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010001
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200c0
  .word 0xc4400000
  .word 0x46030002
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46030002
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c024296
  .word 0x44821000
  .word 0x3c024208
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200c0
  .word 0xc4400000
  .word 0x46020000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c024296
  .word 0x44820000
  .word 0x00000000
  .word 0x46150080
  .word 0x3c0241e8
  .word 0x44820000
  .word 0x00000000
  .word 0x46140040
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200c0
  .word 0xc4400000
  .word 0x46020000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x26240100
  .word 0x27a500c0
  .word 0x0c087624
  .word 0x00000000
  .word 0x8e020310
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000029
  .word 0x00000000
  .word 0x28410008
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x2841001e
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x10000013
  .word 0x00000000
  .word 0x28410022
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442ffde
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x10000002
  .word 0x00000000
  .word 0x44800800
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
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
  .word 0xa3a300ff
  .word 0x26240100
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030000
  .word 0x30630004
  .word 0x106002ed
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000a
  .word 0x0c087328
  .word 0x00000000
  .word 0x8e030310
  .word 0x04610005
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44831800
  .word 0x10000023
  .word 0x00000000
  .word 0x28610008
  .word 0x10200005
  .word 0x00000000
  .word 0x3c034000
  .word 0x44831800
  .word 0x1000001c
  .word 0x00000000
  .word 0x28610008
  .word 0x10200005
  .word 0x00000000
  .word 0x3c034000
  .word 0x44831800
  .word 0x10000015
  .word 0x00000000
  .word 0x28610022
  .word 0x10200010
  .word 0x00000000
  .word 0x2463fff8
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0341d0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000803
  .word 0x3c033f80
  .word 0x44830800
  .word 0x00000000
  .word 0x46000801
  .word 0x460008c0
  .word 0x10000003
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44831800
  .word 0xafa000c0
  .word 0xafa000c4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000c8
  .word 0xafa000cc
  .word 0xe7a000d0
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000d4
  .word 0xafa000d8
  .word 0xe7a000dc
  .word 0x0000182d
  .word 0x3c024296
  .word 0x44821000
  .word 0x3c024208
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200c0
  .word 0xc4400000
  .word 0x46020001
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010001
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200c0
  .word 0xc4400000
  .word 0x46030002
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46030002
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c024296
  .word 0x44821000
  .word 0x3c024208
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200c0
  .word 0xc4400000
  .word 0x46020000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c024296
  .word 0x44820000
  .word 0x00000000
  .word 0x46150080
  .word 0x3c0241e8
  .word 0x44820000
  .word 0x00000000
  .word 0x46140040
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200c0
  .word 0xc4400000
  .word 0x46020000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x26240200
  .word 0x27a500c0
  .word 0x0c087624
  .word 0x00000000
  .word 0x8e020310
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000021
  .word 0x00000000
  .word 0x28410008
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x1000001a
  .word 0x00000000
  .word 0x28410008
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x10000013
  .word 0x00000000
  .word 0x28410022
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442fff8
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241d0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x10000002
  .word 0x00000000
  .word 0x44800800
  .word 0x24020046
  .word 0xa3a200fc
  .word 0x24020032
  .word 0xa3a200fd
  .word 0x2402000a
  .word 0xa3a200fe
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
  .word 0xa3a300ff
  .word 0x26240200
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x10000217
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050022
  .word 0x0c087328
  .word 0x00000000
  .word 0x8c44000c
  .word 0x00041843
  .word 0x04810003
  .word 0x00000000
  .word 0x24830001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7a000f0
  .word 0x46010001
  .word 0xe7a000c0
  .word 0x8c440010
  .word 0x00041843
  .word 0x04810003
  .word 0x00000000
  .word 0x24830001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7a000f4
  .word 0x46010001
  .word 0xe7a000c4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000c8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000cc
  .word 0x26040010
  .word 0x27a500c0
  .word 0x0c087638
  .word 0x00000000
  .word 0x100001ef
  .word 0x00000000
  .word 0x26130010
  .word 0xc7a100f0
  .word 0x3c024307
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d41
  .word 0xc7a100f4
  .word 0x3c0242ae
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d01
  .word 0x0280202d
  .word 0x2405001e
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0342ac
  .word 0x44830000
  .word 0x00000000
  .word 0x46150000
  .word 0xe7a000c0
  .word 0x3c03429c
  .word 0x44830000
  .word 0x00000000
  .word 0x46140000
  .word 0xe7a000c4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000c8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000cc
  .word 0x0260202d
  .word 0x27a500c0
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e020310
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000029
  .word 0x00000000
  .word 0x28410003
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x2841001e
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x10000013
  .word 0x00000000
  .word 0x28410022
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442ffde
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x10000002
  .word 0x00000000
  .word 0x44800800
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
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
  .word 0xa3a300ff
  .word 0x0260202d
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405001d
  .word 0x0c087328
  .word 0x00000000
  .word 0x8e030310
  .word 0x04610004
  .word 0x00000000
  .word 0x44801000
  .word 0x10000019
  .word 0x00000000
  .word 0x28610008
  .word 0x1020000d
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x46000883
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x2861001e
  .word 0x10200005
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44831000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44831000
  .word 0xafa000c0
  .word 0xafa000c4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000c8
  .word 0xafa000cc
  .word 0xe7a000d0
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000d4
  .word 0xafa000d8
  .word 0xe7a000dc
  .word 0x0000302d
  .word 0x1000001d
  .word 0x00000000
  .word 0x000618c0
  .word 0x007d1821
  .word 0x246500c0
  .word 0x8c44000c
  .word 0x00041843
  .word 0x04810003
  .word 0x00000000
  .word 0x24830001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0xc4a00000
  .word 0x46010001
  .word 0xe4a00000
  .word 0x8c440010
  .word 0x00041843
  .word 0x04810003
  .word 0x00000000
  .word 0x24830001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0xc4a00004
  .word 0x46010001
  .word 0xe4a00004
  .word 0x24c60001
  .word 0x28c30004
  .word 0x1460ffe2
  .word 0x00000000
  .word 0x0000202d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000418c0
  .word 0x007d1821
  .word 0x246300c0
  .word 0xc4600000
  .word 0x46020002
  .word 0xe4600000
  .word 0xc4600004
  .word 0x46020002
  .word 0xe4600004
  .word 0x24840001
  .word 0x28830004
  .word 0x1460fff4
  .word 0x00000000
  .word 0x0000302d
  .word 0x1000001d
  .word 0x00000000
  .word 0x000618c0
  .word 0x007d1821
  .word 0x246500c0
  .word 0x8c44000c
  .word 0x00041843
  .word 0x04810003
  .word 0x00000000
  .word 0x24830001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0xc4a00000
  .word 0x46010000
  .word 0xe4a00000
  .word 0x8c440010
  .word 0x00041843
  .word 0x04810003
  .word 0x00000000
  .word 0x24830001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0xc4a00004
  .word 0x46010000
  .word 0xe4a00004
  .word 0x24c60001
  .word 0x28c30004
  .word 0x1460ffe2
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c0242a6
  .word 0x44820000
  .word 0x00000000
  .word 0x46150080
  .word 0x3c02427c
  .word 0x44820000
  .word 0x00000000
  .word 0x46140040
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200c0
  .word 0xc4400000
  .word 0x46020000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x26640100
  .word 0x27a500c0
  .word 0x0c087624
  .word 0x00000000
  .word 0x8e020310
  .word 0x04410004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000021
  .word 0x00000000
  .word 0x28410008
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x1000001a
  .word 0x00000000
  .word 0x2841001e
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x10000013
  .word 0x00000000
  .word 0x28410022
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442ffde
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x10000002
  .word 0x00000000
  .word 0x44800800
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
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
  .word 0xa3a300ff
  .word 0x26640100
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405001c
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e020310
  .word 0x28410008
  .word 0x10200006
  .word 0x00000000
  .word 0x4480b800
  .word 0x00000000
  .word 0x4600b846
  .word 0x10000031
  .word 0x00000000
  .word 0x2442fff8
  .word 0x28410006
  .word 0x1020001a
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c024248
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020001
  .word 0x46000d82
  .word 0xc78c83e4
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x4600b047
  .word 0x46000dc2
  .word 0xc78c83e4
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x4600b042
  .word 0x10000014
  .word 0x00000000
  .word 0x28410016
  .word 0x10200006
  .word 0x00000000
  .word 0x4480b800
  .word 0x00000000
  .word 0x4600b846
  .word 0x1000000c
  .word 0x00000000
  .word 0x28410022
  .word 0x10200006
  .word 0x00000000
  .word 0x4480b800
  .word 0x00000000
  .word 0x4600b846
  .word 0x10000004
  .word 0x00000000
  .word 0x4480b800
  .word 0x00000000
  .word 0x4600b846
  .word 0x3c024296
  .word 0x44820000
  .word 0x00000000
  .word 0x46150000
  .word 0x46170000
  .word 0xe7a000c0
  .word 0x3c024274
  .word 0x44820000
  .word 0x00000000
  .word 0x46140000
  .word 0x46010000
  .word 0xe7a000c4
  .word 0xc620000c
  .word 0x46800020
  .word 0xe7a000c8
  .word 0xc6200010
  .word 0x46800020
  .word 0xe7a000cc
  .word 0x26640200
  .word 0x27a500c0
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e020310
  .word 0x28410008
  .word 0x10200004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000022
  .word 0x00000000
  .word 0x2442fff8
  .word 0x28410006
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x1000001a
  .word 0x00000000
  .word 0x28410016
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x10000013
  .word 0x00000000
  .word 0x28410022
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442ffde
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024140
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x10000002
  .word 0x00000000
  .word 0x44800800
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
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
  .word 0xa3a300ff
  .word 0x26640200
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030000
  .word 0x30630100
  .word 0x10600119
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405002e
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e040820
  .word 0x0c090a54
  .word 0x00000000
  .word 0x3c034000
  .word 0x44830800
  .word 0x00000000
  .word 0x46010043
  .word 0xc7a000f0
  .word 0x46010541
  .word 0x8e240010
  .word 0x00041843
  .word 0x04810003
  .word 0x00000000
  .word 0x24830001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7a000f4
  .word 0x46010501
  .word 0x8e030000
  .word 0x30630020
  .word 0x1060000b
  .word 0x00000000
  .word 0x8e040f44
  .word 0x8e030f40
  .word 0x2463ffff
  .word 0x0083082a
  .word 0x10200005
  .word 0x00000000
  .word 0x2413000e
  .word 0x24150012
  .word 0x10000003
  .word 0x00000000
  .word 0x2413001e
  .word 0x24150022
  .word 0x0000882d
  .word 0x02b3f023
  .word 0x100000d8
  .word 0x00000000
  .word 0x8e020310
  .word 0x0051082a
  .word 0x10200006
  .word 0x00000000
  .word 0x4480b000
  .word 0x00000000
  .word 0x4600b5c6
  .word 0x10000032
  .word 0x00000000
  .word 0x00511823
  .word 0x28610006
  .word 0x10200011
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0340c0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000dc3
  .word 0x3c0341f0
  .word 0x44830800
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46170001
  .word 0x46000d82
  .word 0x1000001e
  .word 0x00000000
  .word 0x0053082a
  .word 0x10200006
  .word 0x00000000
  .word 0x4480b000
  .word 0x3c033f80
  .word 0x4483b800
  .word 0x10000016
  .word 0x00000000
  .word 0x0055082a
  .word 0x10200010
  .word 0x00000000
  .word 0x4480b000
  .word 0x00531823
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x449e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x460105c1
  .word 0x10000004
  .word 0x00000000
  .word 0x4480b000
  .word 0x00000000
  .word 0x4600b5c6
  .word 0x8e040000
  .word 0x30830020
  .word 0x10600048
  .word 0x00000000
  .word 0x8e050f40
  .word 0x8e040f44
  .word 0x24a3ffff
  .word 0x14830004
  .word 0x00000000
  .word 0x4480c000
  .word 0x10000048
  .word 0x00000000
  .word 0x28410007
  .word 0x10200004
  .word 0x00000000
  .word 0x4480c000
  .word 0x10000042
  .word 0x00000000
  .word 0x2841000d
  .word 0x1020000f
  .word 0x00000000
  .word 0x2442fff9
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c02c1e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010602
  .word 0x10000031
  .word 0x00000000
  .word 0x00a41823
  .word 0x28630003
  .word 0x14600021
  .word 0x00000000
  .word 0x2841000e
  .word 0x10200005
  .word 0x00000000
  .word 0x3c02c1e0
  .word 0x4482c000
  .word 0x10000026
  .word 0x00000000
  .word 0x28410014
  .word 0x10200013
  .word 0x00000000
  .word 0x2442fff2
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c02c1e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x3c0241e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e01
  .word 0x10000011
  .word 0x00000000
  .word 0x3c02c260
  .word 0x4482c000
  .word 0x1000000d
  .word 0x00000000
  .word 0x3c02c1e0
  .word 0x4482c000
  .word 0x10000009
  .word 0x00000000
  .word 0x30820200
  .word 0x10400005
  .word 0x00000000
  .word 0x3c02c1e0
  .word 0x4482c000
  .word 0x10000002
  .word 0x00000000
  .word 0x4480c000
  .word 0x0280202d
  .word 0x2405002e
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0341e0
  .word 0x44831000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800060
  .word 0x44800000
  .word 0x00000000
  .word 0x46150018
  .word 0x4601101c
  .word 0xe7a000c0
  .word 0x4616a000
  .word 0x4600c000
  .word 0xe7a000c4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000c8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000cc
  .word 0x00111200
  .word 0x02021021
  .word 0x24560320
  .word 0x02c0202d
  .word 0x27a500c0
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420040
  .word 0x10400007
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
  .word 0x10000007
  .word 0x00000000
  .word 0x240200be
  .word 0xa3a200fc
  .word 0x240200ff
  .word 0xa3a200fd
  .word 0x240200d2
  .word 0xa3a200fe
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46170042
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
  .word 0xa3a300ff
  .word 0x02c0202d
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x26310001
  .word 0x8e030824
  .word 0x0223182a
  .word 0x1460ff26
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0xe7b500c0
  .word 0xe7b400c4
  .word 0xafa000c8
  .word 0xafa000cc
  .word 0x00111200
  .word 0x02021021
  .word 0x24440320
  .word 0x27a500c0
  .word 0x0c087638
  .word 0x00000000
  .word 0x26310001
  .word 0x2a230005
  .word 0x1460fff3
  .word 0x00000000
  .word 0x8e030000
  .word 0x30630200
  .word 0x106000b7
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405002e
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e040d30
  .word 0x0c090a54
  .word 0x00000000
  .word 0x3c034000
  .word 0x44830800
  .word 0x00000000
  .word 0x46010043
  .word 0xc7a000f0
  .word 0x46010541
  .word 0x8e240010
  .word 0x00041843
  .word 0x04810003
  .word 0x00000000
  .word 0x24830001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7a000f4
  .word 0x46010501
  .word 0x0000882d
  .word 0x10000087
  .word 0x00000000
  .word 0x8e030310
  .word 0x0071082a
  .word 0x10200006
  .word 0x00000000
  .word 0x4480b000
  .word 0x00000000
  .word 0x4600b5c6
  .word 0x10000032
  .word 0x00000000
  .word 0x00711023
  .word 0x28410006
  .word 0x10200011
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000dc3
  .word 0x3c0241f0
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46170001
  .word 0x46000d82
  .word 0x1000001e
  .word 0x00000000
  .word 0x2861001e
  .word 0x10200006
  .word 0x00000000
  .word 0x4480b000
  .word 0x3c023f80
  .word 0x4482b800
  .word 0x10000016
  .word 0x00000000
  .word 0x28610022
  .word 0x10200010
  .word 0x00000000
  .word 0x4480b000
  .word 0x2462ffe2
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x460105c1
  .word 0x10000004
  .word 0x00000000
  .word 0x4480b000
  .word 0x00000000
  .word 0x4600b5c6
  .word 0x0280202d
  .word 0x2405002e
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0341e0
  .word 0x44831000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0x44800800
  .word 0x00000000
  .word 0x46150818
  .word 0x4600101c
  .word 0xe7a000c0
  .word 0x4616a000
  .word 0x46000800
  .word 0xe7a000c4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000c8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000cc
  .word 0x00111200
  .word 0x02021021
  .word 0x24530830
  .word 0x0260202d
  .word 0x27a500c0
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420080
  .word 0x10400009
  .word 0x00000000
  .word 0x240200f0
  .word 0xa3a200fc
  .word 0x240200aa
  .word 0xa3a200fd
  .word 0x240200ff
  .word 0xa3a200fe
  .word 0x10000007
  .word 0x00000000
  .word 0x240200be
  .word 0xa3a200fc
  .word 0x240200d2
  .word 0xa3a200fd
  .word 0x240200ff
  .word 0xa3a200fe
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46170042
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
  .word 0xa3a300ff
  .word 0x0260202d
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x26310001
  .word 0x8e030d34
  .word 0x0223182a
  .word 0x1460ff77
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0xe7b500c0
  .word 0xe7b400c4
  .word 0xafa000c8
  .word 0xafa000cc
  .word 0x00111200
  .word 0x02021021
  .word 0x24440830
  .word 0x27a500c0
  .word 0x0c087638
  .word 0x00000000
  .word 0x26310001
  .word 0x2a230005
  .word 0x1460fff3
  .word 0x00000000
  .word 0x26520001
  .word 0x2a430010
  .word 0x1460f766
  .word 0x00000000
  .word 0xdfbf00b0
  .word 0x7bbe00a0
  .word 0x7bb70090
  .word 0x7bb60080
  .word 0x7bb50070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0100
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#define BI_MAIN_DRAW_ALT(base) \
    do { \
        RpSkyRenderStateSet(3, (void*)0x717fb); \
        RpSkyRenderStateSet(2, (void*)0x44); \
        D_0096009C((u8*)(base) + 0x100, 4, 0, 1, 2); \
        D_0096009C((u8*)(base) + 0x100, 4, 0, 2, 3); \
        RpSkyRenderStateSet(3, (void*)0x71801); \
        RpSkyRenderStateSet(2, (void*)0x48); \
        D_0096009C((u8*)(base) + 0x200, 4, 0, 1, 2); \
        D_0096009C((u8*)(base) + 0x200, 4, 0, 2, 3); \
    } while (0)
#define BI_MAIN_DRAW_BASIC(base) \
    do { \
        RpSkyRenderStateSet(3, (void*)0x717fb); \
        RpSkyRenderStateSet(2, (void*)0x44); \
        D_0096009C((u8*)(base), 4, 0, 1, 2); \
        D_0096009C((u8*)(base), 4, 0, 2, 3); \
    } while (0)
#define BI_MAIN_DRAW_DIGITS(base) \
    do { \
        s32 biDigitIndex; \
        frame = func_0021cca0(renderContext, 0x2e); \
        (*stateSet)(1, (u32)func_0021cce0(frame)); \
        RpSkyRenderStateSet(3, (void*)0x717fb); \
        RpSkyRenderStateSet(2, (void*)0x44); \
        for (biDigitIndex = 0; biDigitIndex < 5; biDigitIndex++) { \
            D_0096009C((u8*)(base) + biDigitIndex * 0x100, 4, 0, 1, 2); \
            D_0096009C((u8*)(base) + biDigitIndex * 0x100, 4, 0, 2, 3); \
        } \
    } while (0)
/* W419 OpSocial2: direct absolute D_0096009C callback nd1389/object2424 exceeds 2384; cached/panel/macro variants worsened nd or remained over-window. */
// FUN_00241910
asm void func_00241910(void)
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
  .word 0x8f82b62c
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e870
  .word 0x2405008a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f97b62c
  .word 0x24040001
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c110096
  .word 0x26310090
  .word 0x24040009
  .word 0x24050002
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040014
  .word 0x24050002
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000a82d
  .word 0x10000198
  .word 0x00000000
  .word 0x24020f50
  .word 0x02a21018
  .word 0x02e28021
  .word 0x8e030000
  .word 0x00601027
  .word 0x30420001
  .word 0x1440018f
  .word 0x00000000
  .word 0x30620008
  .word 0x1440018c
  .word 0x00000000
  .word 0x30620010
  .word 0x10400189
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020002
  .word 0x10620111
  .word 0x00000000
  .word 0x24020003
  .word 0x106200e4
  .word 0x00000000
  .word 0x24020001
  .word 0x10620073
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000017b
  .word 0x00000000
  .word 0x26120010
  .word 0x0280202d
  .word 0x2405000a
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420004
  .word 0x10400035
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26440100
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440100
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x26440200
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440200
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000b
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x0240202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x1000010d
  .word 0x00000000
  .word 0x26120010
  .word 0x0280202d
  .word 0x24050012
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420004
  .word 0x10400035
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26440100
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440100
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x26440200
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440200
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050013
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x0240202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x1000009f
  .word 0x00000000
  .word 0x26120010
  .word 0x0280202d
  .word 0x24050022
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x0240202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000075
  .word 0x00000000
  .word 0x26130010
  .word 0x0280202d
  .word 0x2405001d
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c120096
  .word 0x26520090
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26640100
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26640100
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405001c
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x26640200
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26640200
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405001e
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26b50001
  .word 0x2aa20010
  .word 0x1440fe67
  .word 0x00000000
  .word 0x0c0afe6c
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000076
  .word 0x00000000
  .word 0x24030f50
  .word 0x02431818
  .word 0x02e38021
  .word 0x8e040000
  .word 0x00801827
  .word 0x30630001
  .word 0x1460006d
  .word 0x00000000
  .word 0x30830008
  .word 0x1460006a
  .word 0x00000000
  .word 0x30830100
  .word 0x10600032
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405002e
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x0000a82d
  .word 0x10000017
  .word 0x00000000
  .word 0x00151200
  .word 0x02021021
  .word 0x24530320
  .word 0x3c160096
  .word 0x26d6009c
  .word 0x0260202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26b50001
  .word 0x2aa30005
  .word 0x1460ffe8
  .word 0x00000000
  .word 0x8e030000
  .word 0x30630200
  .word 0x10600032
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405002e
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000017
  .word 0x00000000
  .word 0x00131200
  .word 0x02021021
  .word 0x24550830
  .word 0x3c160096
  .word 0x26d6009c
  .word 0x02a0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x2a630005
  .word 0x1460ffe8
  .word 0x00000000
  .word 0x26520001
  .word 0x2a430010
  .word 0x1460ff89
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
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#undef BI_MAIN_DRAW_DIGITS
#undef BI_MAIN_DRAW_BASIC
#undef BI_MAIN_DRAW_ALT

/* Removing this loses func_00242260 (MATCH nd0 -> MISMATCH nd18) - measured W161. */
#pragma optimization_level 1
// FUN_00242260
void* func_00242260(void)
{
    s32 i;
    u8* slot;
    u8* work;
    s32 stride;

    K_ASSERT(sBiMain != NULL, 0x8a);
    work = sBiMain;
    i = 0;
    stride = BI_SLOT_SIZE;
    for (; i < BI_SLOT_COUNT; i++) {
        slot = work + i * stride;
        if (~BI_U32(slot, 0) & BI_SLOT_ACTIVE) {
            break;
        }
    }
    K_ASSERT(i < BI_SLOT_COUNT, 0x583);
    BI_U32(slot, 0) = 0;
    BI_U32(slot, 0) |= BI_SLOT_ACTIVE;
    return slot;
}
#pragma optimization_level 2

// FUN_00242320
void func_00242320(void* slot, s32 mode)
{
    void* renderContext;

    renderContext = (void*)func_0021c3f0(1);
    kwlnGetMainCamera();
    switch (mode) {
    case 0: {
        u8* glyphs;
        s32 i;
        void* resource;

        glyphs = (u8*)slot + 0x10;
        func_0021d3b0(glyphs, func_0021cca0(renderContext, 0xb));
        resource = func_0021cca0(renderContext, 0xa);
        for (i = 0; i < 2; i++) {
            func_0021d3b0(glyphs + i * 0x100 + 0x100, resource);
        }
        break;
    }
    case 1: {
        u8* glyphs;
        void* resource;
        s32 i;

        glyphs = (u8*)slot + 0x10;
        func_0021d3b0(glyphs, func_0021cca0(renderContext, 0x13));
        resource = func_0021cca0(renderContext, 0x12);
        for (i = 0; i < 2; i++) {
            func_0021d3b0(glyphs + i * 0x100 + 0x100, resource);
        }
        break;
    }
    case 3:
        func_0021d3b0((u8*)slot + 0x10, func_0021cca0(renderContext, 0x22));
        break;
    case 2: {
        u8* glyphs;

        glyphs = (u8*)slot + 0x10;
        func_0021d3b0(glyphs, func_0021cca0(renderContext, 0x1e));
        func_0021d3b0(glyphs + 0x100, func_0021cca0(renderContext, 0x1d));
        func_0021d3b0(glyphs + 0x200, func_0021cca0(renderContext, 0x1c));
        break;
    }
    }
    BI_U32(slot, 4) = mode;
    BI_U32(slot, 0) |= BI_SLOT_READY;
}

/* Removing this loses func_00242540 (MATCH nd0 -> MISMATCH nd131), newly over-window 184/192 -> 200/192 - measured W161. */
#pragma optimization_level 1
// FUN_00242540
void func_00242540(void* slot)
{
    RwRGBA color;
    f32 origin[4];
    s32 opaque;

    opaque = 0xff;
    color.r = opaque;
    color.g = 0;
    color.b = 0;
    color.a = opaque;
    origin[0] = 0.0f;
    origin[1] = 0.0f;
    origin[2] = 0.0f;
    origin[3] = 0.0f;
    func_0021eae0((u8*)slot + 0xd40, (const f32*)origin);
    func_0021d950((u8*)slot + 0xd40, (const u8*)&color);
    func_0021eac0((u8*)slot + 0xd40, 0.0f);
    func_0021eae0((u8*)slot + 0xe40, (const f32*)origin);
    func_0021d950((u8*)slot + 0xe40, (const u8*)&color);
    func_0021eac0((u8*)slot + 0xe40, 0.0f);
    BI_U32(slot, 0x310) = 0;
    BI_U32(slot, 0) |= BI_SLOT_INITIALIZED;
}
#pragma optimization_level 2

/* Removing this loses func_00242600 (MATCH nd0 -> MISMATCH nd208), newly over-window 284/288 -> 300/288; loses func_00242720 (MATCH nd0 -> MISMATCH nd208), newly over-window 284/288 -> 300/288 - measured W161. */
#pragma optimization_level 1
// FUN_00242600
void func_00242600(void* slot, s32 value)
{
    char digits[256];
    s32 length;
    s32 magnitude;
    void* glyphs;
    s32 capacity;
    s32 displayValue;

    if (value >= 0) {
        magnitude = value;
    } else {
        BI_U32(slot, 0) |= BI_SLOT_TEXT_0;
        magnitude = -value;
    }
    K_ASSERT(magnitude >= 0, 0x603);
    if (magnitude < 100000) {
        BI_U32(slot, 0x820) = magnitude;
    } else {
        BI_U32(slot, 0x820) = 99999;
    }
    sprintf(digits, "%d", BI_U32(slot, 0x820));
    length = strlen(digits);
    K_ASSERT(length > 0, 0x610);
    K_ASSERT(length <= 5, 0x611);
    BI_U32(slot, 0x824) = length;
    BI_U32(slot, 0) |= BI_SLOT_NUMERIC_0;
    glyphs = (u8*)slot + 0x320;
    capacity = 5;
    displayValue = BI_U32(slot, 0x820);
    func_00242840(glyphs, capacity, displayValue);
}

// FUN_00242720
void func_00242720(void* slot, s32 value)
{
    char digits[256];
    s32 length;
    s32 magnitude;
    void* glyphs;
    s32 capacity;
    s32 displayValue;

    if (value >= 0) {
        magnitude = value;
    } else {
        magnitude = -value;
        BI_U32(slot, 0) |= BI_SLOT_TEXT_1;
    }
    K_ASSERT(magnitude >= 0, 0x628);
    if (magnitude < 100000) {
        BI_U32(slot, 0xd30) = magnitude;
    } else {
        BI_U32(slot, 0xd30) = 99999;
    }
    sprintf(digits, "%d", BI_U32(slot, 0xd30));
    length = strlen(digits);
    K_ASSERT(length > 0, 0x635);
    K_ASSERT(length <= 5, 0x636);
    BI_U32(slot, 0xd34) = length;
    BI_U32(slot, 0) |= BI_SLOT_NUMERIC_1;
    glyphs = (u8*)slot + 0x830;
    capacity = 5;
    displayValue = BI_U32(slot, 0xd30);
    func_00242840(glyphs, capacity, displayValue);
}
#pragma optimization_level 2

// FUN_00242840
void func_00242840(void* glyphs, s32 capacity, s32 value)
{
    char digits[256];
    s32 i;
    s32 length;

    sprintf(digits, "%d", value);
    length = strlen(digits);
    K_ASSERT(capacity >= length, 0x645);
    for (i = 0; i < length; i++) {
        biMainPrepareDigit((u8*)glyphs + i * 0x100, digits[i] - '0');
    }
}

// FUN_002428F0
void func_002428f0(void* glyph, s32 digit)
{
    func_0021d3b0(glyph, func_0021cca0((void*)func_0021c3f0(1), digit + 0x2e));
}

// FUN_00242950
f32 func_00242950(s32 value)
{
    char digits[256];
    s32 length;
    void* renderContext;
    void* glyphResource;

    renderContext = (void*)func_0021c3f0(1);
    sprintf(digits, "%d", value);
    length = strlen(digits);
    glyphResource = func_0021cca0(renderContext, 0x2e);
    K_ASSERT(length > 0, 0x666);
    K_ASSERT(length <= 5, 0x667);
    return (f32)*(s32*)((u8*)glyphResource + 0xc) + 28.0f * (f32)(length - 1);
}

// FUN_00242A30
void func_00242a30(void* slot)
{
    BI_U32(slot, 0) |= BI_SLOT_ALT_STYLE;
}

// FUN_00242A50
void func_00242a50(void* slot, u32 unitId)
{
    BI_U32(slot, 0x314) = unitId;
}

/* Removing this loses func_00242a60 (MATCH nd0 -> MISMATCH nd18) - measured W161. */
#pragma optimization_level 1
// FUN_00242A60
s32 func_00242a60(void)
{
    s32 i;
    u8* work;
    s32 stride;

    K_ASSERT(sBiMain != NULL, 0x8a);
    work = sBiMain;
    i = 0;
    stride = BI_SLOT_SIZE;
    for (; i < BI_SLOT_COUNT; i++) {
        if (~BI_U32(work + i * stride, 0) & BI_SLOT_ACTIVE) {
            break;
        }
    }
    return i < BI_SLOT_COUNT;
}
#pragma optimization_level 2

/* Removing this loses func_00242ae0 (MATCH nd0 -> MISMATCH nd18) - measured W161. */
#pragma optimization_level 1
// FUN_00242AE0
s32 func_00242ae0(u32 unitId)
{
    s32 i;
    u8* work;
    s32 stride;
    u8* slot;

    K_ASSERT(sBiMain != NULL, 0x8a);
    work = sBiMain;
    i = 0;
    stride = BI_SLOT_SIZE;
    for (; i < BI_SLOT_COUNT; i++) {
        slot = work + i * stride;
        if ((~BI_U32(slot, 0) & BI_SLOT_ACTIVE) || BI_U32(slot, 0x314) != unitId) {
            continue;
        }
        break;
    }
    return i < BI_SLOT_COUNT;
}
#pragma optimization_level 2

// FUN_00242B80
u32 func_00242b80(u16 unitId, RwV2d* screenPosition)
{
    void* unit;
    RwV3d projected;
    RwV2d transformed;

    unit = btlUnitFindFromId((u32)unitId);
    if (unit == NULL) {
        return 0;
    }
    func_002806d0(unit, &projected);
    if (func_002d20a0(&projected, &transformed) == 0) {
        return 0;
    }
    screenPosition->x = transformed.x;
    screenPosition->y = transformed.y + 14.0f;
    return 1;
}

// FUN_00242C20
void func_00242c20(void* slot, u32 leftValue, u32 rightValue)
{
    BI_U32(slot, 0) |= 0x20;
    BI_U32(slot, 0xf44) = leftValue;
    BI_U32(slot, 0xf40) = rightValue;
}


#include "Utils.h"
#include "Battle/battle.h"
#include "Main/Battle/Cmd/bpp_main.h"
#include "rw/rwplcore.h"
extern const char D_0068E880[];
extern const char DAT_007cc468[];

typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned int ulong;
extern f32 sinf_y2(f32 angle);
extern f32 cosf_y2(f32 angle);

/* BPC state rooted at DAT_007CE320 / GP-0x49D0. */
extern u32* DAT_007ce320;
#define sBpcWork DAT_007ce320
#pragma alias bppMain0020f8b0_u16 bppMain0020f8b0
extern void bppMain0020f8b0_u16(u16 pcId);
#pragma alias bppMain0020fb60_u16 bppMain0020fb60
extern void bppMain0020fb60_u16(u16 pcId);
#pragma alias bppMain0020f7d0_u16 bppMain0020f7d0
extern void bppMain0020f7d0_u16(u16 pcId);
#pragma alias bppMain0020fa80_u16 bppMain0020fa80
extern void bppMain0020fa80_u16(u16 pcId);
#pragma alias func_001775a0_s16 func_001775a0
extern u32 func_001775a0_s16(s16 id);

typedef void (*BpcRenderState)(s32 property, u32 value);
typedef void (*BpcRenderQuad)(void* quad, s32 count, s32 group, s32 pass, s32 blend);
extern BpcRenderState D_00960090_y2;
#pragma alias D_0096009C_abs D_0096009C_y2
extern u8 D_0096009C_abs[];
extern BpcRenderQuad D_0096009C_y2;
extern f32 DAT_007caf38;
extern u32 DAT_007ce4e8;
extern u8* DAT_007ce410;

extern int func_001ff430(u32 id);
extern u32 func_0021c3f0_y2(s32 texture);
extern u32 func_0021cca0_y2(u32 texture, s32 frame);
extern u32 func_0021cce0_y2(u32 frame);
extern void func_0021d3b0_y2(void* destination, u32 frame);
extern void func_0021d890_y2(void* destination, const f32* layout);
extern void func_0021d8e0_y2(void* destination, const f32* layout);
extern void func_0021d950_y2(void* destination, const u8* color);
extern void func_0021e380(void* destination, u32 frame, s32 mode);
extern void func_0021eb80(void* destination, const f32* layout);
extern void func_0021cd00(u32 frame, f32* rect);
extern void func_00280580(int unit, void* projected);
extern u32 func_002d20a0_y2(const void* projected, void* screen);
// Typed aliases preserve the established ABI of unrelated callers.
#pragma alias func_00280580_vec func_00280580
extern void func_00280580_vec(int unit, RwV3d* projected);
#pragma alias func_002d20a0_vec func_002d20a0_y2
extern u32 func_002d20a0_vec(const RwV3d* projected, RwV2d* screen);
extern int func_0029a1d0(int unit);
extern int func_00301ca0(u32 calc, u32 skill);
extern int func_00300e90();
extern u32 func_00306e80(u32 calc, s16 mode);
extern s16 func_003082f0();
extern void func_003b0170(u32 resource);
extern u32 func_003b0970(u32 resource, s32 mode, s32 group, s32 a, s32 b);
extern void func_003b0d70(u32 resource, s32 x, s32 y);
extern void func_003b0e20(u32 resource, u32 value);
extern void func_003b0e70(s32 mode);
extern void func_003b0e90(s32 mode);
extern void func_003b1360(u32 resource, s32 mode, s32 value);
extern s32 func_003b19d0(u32 resource);
extern void func_004d7f60(s32 state, u32 value);
extern u32 func_00173370(u32 persona);
extern u32 func_00174800(s32 id);
extern s32 func_00176a30(u32 persona);
extern u32 func_001775a0(u16 id);
extern u32 func_0017b260(u16 id);
extern u32 func_001ff630(s32 index);
extern u32 func_0010a4e0(s32 a, s32 b, s32 c, s32 d);
extern u32 datPersonaGetByPcId(s32 id);
extern u32 datPersonaGetSkills(u32 persona);
extern s32 datPersonaCountValidSkills(u32 persona);
extern int printf(const char* format, ...);




/* High-gap entry points; declarations keep cross-calls typed under MWCC. */
void FUN_00242c40(u32*);
void FUN_00242c60(void);
void FUN_00242cc0(void);
void FUN_00243150(void);
void FUN_00244120(u32);
void FUN_002441b0(u32);
void FUN_00244770(void);
void FUN_002449d0(void);
void FUN_00244a00(void);
void FUN_00244a40(u32);
u32 FUN_00244e10(void);
void FUN_00244e80(void);
void FUN_002453d0(u16);
void FUN_00245420(uint*,u32);
void FUN_00245910(uint*);
void FUN_00245970(uint*);
void FUN_002459d0(uint*);
void FUN_00245a00(void);
uint *FUN_00245bf0(int);
void FUN_00245cd0(void);
void FUN_00245e00(void);
void FUN_00245e50(void);
void FUN_00245ea0(void);

// FUN_00242C40
void FUN_00242c40(u32 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[0x1cb5] = 0;
  sBpcWork = param_1;
  return;
}







































/* W389 measured opt_dead_assignments off: nd16/1264B -> nd8/1264B (window 1264B). */
/* W389 volatile staging of calc/skill and mode/skill loads was neutral at nd8/1264B; reverted. */

























/* W389 measured opt_propagation off: nd7126/9636B -> nd6938/9468B (window 9712B). */
