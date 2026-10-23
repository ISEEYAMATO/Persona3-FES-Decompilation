#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"




static u32* sBrHero; // puGpffffb68c

void FUN_002630e0();
void FUN_003b0170();


typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    s32 width;
    s32 height;
} BrHeroResource;
extern void* FUN_00233d70(s32);
extern void* FUN_00233df0(s32);
extern void* FUN_0021cca0();
extern u32 FUN_0021cce0(void*);
extern void FUN_0021d3b0(void*, void*);
extern void FUN_0021cd00(void*, float*);
extern void FUN_0021d8e0(void*, float*);
extern void FUN_0021d890(void*, float*);
extern void FUN_0021d950(void*, u8*);
extern void FUN_0021e380(void*, void*, s32);
extern void FUN_0021eac0(void*, float);
extern void FUN_0021eae0(void*, float*);
extern void FUN_0021eb80(void*, float*);
extern void FUN_00238980();
extern void FUN_00238dc0(void*, s32, s32, s32, float*);
extern void FUN_00238bf0(void*, s32, s32, s32, float*);
extern void* brPersonaGetPortraitFrame(s32);
extern void* brPersonaGetPortraitFrame(s32);
extern void FUN_003b0e70(s32);
extern void FUN_003b0e90(s32);
extern void FUN_003b0d70(s32, s32, s32);
extern void FUN_003b0e20(s32, s32);
extern u32 FUN_00239140(s32);
extern void RpSkyRenderStateSet(s32, void*);
extern void thunk_FUN_003b0e54(s32, s32);
extern void FUN_003b1360(s32, s32, s32);
extern void (*D_00960090)(u32, u32);
extern void (*D_0096009C)(u32*, u32, u32, u32, u32);
extern u8 D_00960090_abs[];
extern u8 D_0096009C_abs[];
extern u32 uGpffffb948;
extern float uGpffff83a8;
extern float uGpffff83ac;
extern u32 FUN_00233d70_u32(s32);
extern u32 FUN_0021cca0_u32(u32, u32);
static u32* sBrPersona; // DAT_007ce380
void brPersonaDestroy();
void* FUN_001749a0(s16 personaId);
u32 FUN_003c9850(int param_1, int param_2, u16 param_3, u16 param_4);
void FUN_003c9b00();
void FUN_003c9cd0(u64 param_1, u32 param_2);
void FUN_003c9d00(u32 param_1, u32 param_2);

static void brHeroSetColor(void* object, u8 r, u8 g, u8 b, u8 a)
{
    u8 color[4];
    color[0] = r;
    color[1] = g;
    color[2] = b;
    color[3] = a;
    FUN_0021d950(object, color);
}
static void brHeroSetRect(void* object, float x, float y, float w, float h)
{
    float rect[4];
    rect[0] = x;
    rect[1] = y;
    rect[2] = w;
    rect[3] = h;
    FUN_0021d8e0(object, rect);
}

// FUN_002626e0
void brHero002626e0(u32* param_1)
{
    K_ASSERT(sBrHero == NULL, 0x59);
    *param_1 = 0;
    sBrHero = param_1;
}

// FUN_00262730
void brHero00262730(void)
{
    K_ASSERT(sBrHero != NULL, 0x53);
    if (*sBrHero & 1) {
        FUN_002630e0();
    }
    sBrHero = NULL;
}

// FUN_00262790
void brHero00262790(void)
{
    u32* w;
    void* value;
    void* text0;
    void* text1;
    u32 task;
    u8 color[4];
    float rect[4];
    float sourceRect[4];
    s32 i;
    void* valueLoop;
    void* tailValue;
    u32 status;
    u32 level;

    K_ASSERT(sBrHero != NULL, 0x53);
    w = sBrHero;
    text0 = FUN_00233d70(0);
    text1 = FUN_00233d70(1);
    level = FUN_0016c470(1) & 0xff;
    FUN_0016c7e0(1);
    status = FUN_0016c970(1);
    w[0x588] = level;
    w[0x591] = FUN_0016d2f0(1);
    w[0x589] = FUN_0016c4f0(1) & 0xffff;
    w[0x58b] = FUN_0016c570(1) & 0xffff;
    w[0x58a] = FUN_0016c5f0(1) & 0xffff;
    w[0x58c] = FUN_0016c670(1) & 0xffff;
    w[0x484] = (s16)FUN_00177280(FUN_0016c6f0(1)) - 1;
    w[0x485] = (s16)FUN_001772f0(FUN_0016c740(1)) - 1;
    w[0x486] = (s16)FUN_00177360(FUN_0016c790(1)) - 1;
    w[0x58d] = FUN_0016c920(1) & 0xffff;
    K_ASSERT((s32)w[0x484] >= 0, 0x89);
    K_ASSERT((s32)w[0x485] >= 0, 0x8a);
    K_ASSERT((s32)w[0x486] >= 0, 0x8b);
    w[0] &= ~2u;
    if (status & 0x80)
        w[0] |= 2;
    if ((s32)w[0x591] > 99999)
        w[0x591] = 99999;
    FUN_0021d3b0(w + 4, FUN_0021cca0(text0, 0x16));
    FUN_0021d3b0(w + 0x44, FUN_0021cca0(text0, 0x17));
    FUN_0021d3b0(w + 0x84, FUN_0021cca0(text0, 0x18));
    FUN_0021d3b0(w + 0xc4, FUN_0021cca0(text0, 0x19));
    FUN_0021d3b0(w + 0x104, FUN_0021cca0(text0, 0x1a));
    FUN_0021d3b0(w + 0x144, FUN_0021cca0(text0, 0x1b));
    {
        s32 k;
        for (k = 0; k < 3; k++)
            FUN_0021eac0(w + k * 0x40 + 0x184, 0);
        valueLoop = FUN_0021cca0(text0, 0x1c);
        for (k = 0; k < 3; k++)
            FUN_0021d3b0(w + k * 0x40 + 0x244, valueLoop);
        valueLoop = FUN_0021cca0(text0, 0x1d);
        for (k = 0; k < 3; k++)
            FUN_0021d3b0(w + k * 0x40 + 0x304, valueLoop);
    }
    FUN_0021d3b0(w + 0x3c4, FUN_0021cca0(text0, w[0x484]));
    FUN_0021d3b0(w + 0x404, FUN_0021cca0(text0, w[0x485] + 7));
    FUN_0021d3b0(w + 0x444, FUN_0021cca0(text0, w[0x486] + 0xe));
    rect[0] = 0.0f;
    rect[1] = 0.0f;
    rect[2] = 1.0f;
    rect[3] = 1.0f;
    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = 0xff;
    for (i = 0; i < 2; i++)
    {
        FUN_0021eb80(w + i * 0x40 + 0x4c8, rect);
        FUN_0021eac0(w + i * 0x40 + 0x4c8, 0);
        FUN_0021d950(w + i * 0x40 + 0x4c8, color);
    }
    rect[0] = 0.0f;
    rect[1] = 0.0f;
    rect[2] = 1.0f;
    rect[3] = 1.0f;
    FUN_0021eb80(w + 0x488, rect);
    FUN_0021eac0(w + 0x488, 0);
    FUN_0021d950(w + 0x488, color);

    FUN_0021d3b0(w + 0x548, FUN_0021cca0(text1, 0));
    FUN_00238980(w + 0x594, 2, w[0x588], 2);
    FUN_00238980(w + 0x614, 3, w[0x589], 2);
    FUN_00238980(w + 0x6d4, 3, w[0x58a], 2);
    FUN_0021cd00(FUN_0021cca0(text1, 4), sourceRect);
    rect[0] = sourceRect[0];
    rect[1] = sourceRect[1];
    rect[2] = rect[0] + (float)(s32)w[0x589] * (sourceRect[2] - rect[0]) / (float)(s32)w[0x58a];
    rect[3] = sourceRect[3];
    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = 0xff;
    FUN_0021eac0(w + 0x794, 0);
    FUN_0021eae0(w + 0x794, rect);
    FUN_0021d950(w + 0x794, color);
    FUN_00238980(w + 0x7d4, 3, w[0x58b], 2);
    FUN_00238980(w + 0x894, 3, w[0x58c], 2);

    FUN_0021cd00(FUN_0021cca0(text1, 5), sourceRect);
    rect[0] = sourceRect[0];
    rect[1] = sourceRect[1];
    rect[2] = rect[0] + (float)(s32)w[0x58b] * (sourceRect[2] - rect[0]) / (float)(s32)w[0x58c];
    rect[3] = sourceRect[3];
    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = 0xff;
    FUN_0021eac0(w + 0x954, 0);
    FUN_0021eae0(w + 0x954, rect);
    FUN_0021d950(w + 0x954, color);

    rect[0] = 0.0f;
    rect[1] = 0.0f;
    rect[2] = 1.0f;
    rect[3] = 1.0f;
    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = 0xff;
    FUN_0021eb80(w + 0xa54, rect);
    FUN_0021eac0(w + 0xa54, 0);
    FUN_0021d950(w + 0xa54, color);
    value = brPersonaGetPortraitFrame(w[0x58d]);
    FUN_0021d3b0(w + 0xa94, value);

    if (w[0] & 2)
    {
        for (i = 0; i < 6; i++)
        {
            switch (i)
            {
            case 0:
                value = FUN_0021cca0(text1, 6);
                break;
            case 1:
                value = FUN_0021cca0(text1, 7);
                break;
            case 2:
                value = FUN_0021cca0(text1, 8);
                break;
            case 3:
                value = FUN_0021cca0(text1, 10);
                break;
            case 4:
                value = FUN_0021cca0(text1, 9);
                break;
            case 5:
                value = FUN_0021cca0(text1, 9);
                break;
            }
            FUN_0021d3b0(w + i * 0x40 + 0xad8, value);
        }
    }
    FUN_003b0e70(1);
    FUN_003b0e90(2);
    uGpffffb948 = 0x78;
    task = (u32)FUN_003b0970(FUN_00177790(1), 1, 5, 0, 0);
    uGpffffb948 = 0;
    w[0xad4] = task;
    FUN_003b0e90(1);
    FUN_003b0e70(2);
    tailValue = FUN_0021cca0(text1, 0x11);
    FUN_0021d3b0(w + 0xc58, tailValue);
    FUN_0021e380(w + 0xc98, tailValue, 1);
    FUN_0021d3b0(w + 0xcd8, FUN_0021cca0(text1, 0x22));
    FUN_00238980(w + 0xd18, 5, w[0x591], 2);

    w[0xe58] = 0;
    *w |= 1;
}
#pragma alias D_00960090_abs D_00960090
#pragma alias D_0096009C_abs D_0096009C




// FUN_002630e0
void brHero002630e0(void)
{
    u32* work;

    K_ASSERT(sBrHero != NULL, 0x53);
    work = sBrHero;
    K_ASSERT(*work & 1, 0x19a);
    FUN_003b0170(work[0xad4]);
    *work &= 0xfffffffe;
}
/* W415 census negative: fresh R_MIPS_26 decode and the retail 0x00263170/3136-byte window both have 68 ordered calls, including 0x00264ca0; no missing or wrong-callee repair is justified. */
/* W418 probe negative: 23 declaration permutations of text0/text1/w/resource held brHero00263170 at nd182/3128B (window3136B). */
// FUN_00263170
#ifndef PC_BUILD
asm void brHero00263170(void)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f83b68c
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ec28
  .word 0x24050053
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b68c
  .word 0x8e230000
  .word 0x00601827
  .word 0x30630001
  .word 0x146002ef
  .word 0x00000000
  .word 0x8e223960
  .word 0x2841041a
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae223960
  .word 0x10000002
  .word 0x00000000
  .word 0xae203960
  .word 0x0000202d
  .word 0x0c08cf5c
  .word 0x00000000
  .word 0x0040802d
  .word 0x24040001
  .word 0x0c08cf5c
  .word 0x00000000
  .word 0x0040902d
  .word 0x0200202d
  .word 0x24050016
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0341a8
  .word 0xafa30060
  .word 0x3c034244
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26240010
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050017
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0341a8
  .word 0xafa30060
  .word 0x3c0342c2
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26240110
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050018
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0341a8
  .word 0xafa30060
  .word 0x3c034313
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26240210
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050019
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0342fe
  .word 0xafa30060
  .word 0x3c034244
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26240310
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405001a
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0342fe
  .word 0xafa30060
  .word 0x3c0342c2
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26240410
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405001b
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0342fe
  .word 0xafa30060
  .word 0x3c034313
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26240510
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405001c
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0342fe
  .word 0xafa30060
  .word 0x3c03427c
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26240910
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405001c
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0342fe
  .word 0xafa30060
  .word 0x3c0342de
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26240a10
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405001c
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0342fe
  .word 0xafa30060
  .word 0x3c034321
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26240b10
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405001d
  .word 0x0c087328
  .word 0x00000000
  .word 0xc6201210
  .word 0x468000e0
  .word 0x3c0341a0
  .word 0x44831000
  .word 0x3c0342fe
  .word 0x44830800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a00060
  .word 0x3c03427c
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26240c10
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405001d
  .word 0x0c087328
  .word 0x00000000
  .word 0xc6201214
  .word 0x468000e0
  .word 0x3c0341a0
  .word 0x44831000
  .word 0x3c0342fe
  .word 0x44830800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a00060
  .word 0x3c0342de
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26240d10
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405001d
  .word 0x0c087328
  .word 0x00000000
  .word 0xc6201218
  .word 0x468000e0
  .word 0x3c0341a0
  .word 0x44831000
  .word 0x3c0342fe
  .word 0x44830800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a00060
  .word 0x3c034321
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26240e10
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0xafa00060
  .word 0xafa00064
  .word 0x3c024420
  .word 0xafa20068
  .word 0x3c024214
  .word 0xafa2006c
  .word 0x26240610
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200fe
  .word 0xa3a2008c
  .word 0x240200bd
  .word 0xa3a2008d
  .word 0x2402005e
  .word 0xa3a2008e
  .word 0x240200ff
  .word 0xa3a2008f
  .word 0x26240610
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0xafa00060
  .word 0x3c024214
  .word 0xafa20064
  .word 0x3c024420
  .word 0xafa20068
  .word 0x3c024321
  .word 0xafa2006c
  .word 0x26240710
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0xa3a0008c
  .word 0x24020028
  .word 0xa3a2008d
  .word 0x2402003f
  .word 0xa3a2008e
  .word 0x240200ff
  .word 0xa3a2008f
  .word 0x26240710
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0xafa00060
  .word 0x3c024346
  .word 0xafa20064
  .word 0x3c024420
  .word 0xafa20068
  .word 0x3c0243e0
  .word 0xafa2006c
  .word 0x26240810
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x2402000d
  .word 0xa3a2008c
  .word 0x2402008a
  .word 0xa3a2008d
  .word 0x240200eb
  .word 0xa3a2008e
  .word 0x240200ff
  .word 0xa3a2008f
  .word 0x26240810
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0200202d
  .word 0x8e251210
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034301
  .word 0xafa30060
  .word 0x3c034290
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26240f10
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e221214
  .word 0x24450007
  .word 0x0200202d
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034301
  .word 0xafa30060
  .word 0x3c0342f0
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26241010
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e221218
  .word 0x2445000e
  .word 0x0200202d
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034301
  .word 0xafa30060
  .word 0x3c03432a
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26241110
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x24040001
  .word 0x0c08cf7c
  .word 0x00000000
  .word 0x8c43000c
  .word 0x00038080
  .word 0x3c0241f0
  .word 0x44820800
  .word 0x44900000
  .word 0x00000000
  .word 0x468000a0
  .word 0x46020d00
  .word 0xc6203960
  .word 0x46800060
  .word 0x2402041a
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x4600a007
  .word 0x46000d42
  .word 0x3c02433e
  .word 0xafa20060
  .word 0xe7b50064
  .word 0x00039840
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00068
  .word 0xe7a2006c
  .word 0x26241320
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x3c02433e
  .word 0xafa20060
  .word 0x4614a800
  .word 0xe7a00064
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00068
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26241420
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x240201c1
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00060
  .word 0x3c0241e8
  .word 0xafa20064
  .word 0xc78083a8
  .word 0xe7a00068
  .word 0xc78083ac
  .word 0xe7a0006c
  .word 0x26241220
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034250
  .word 0xafa30060
  .word 0x3c03434e
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26241520
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x3c0242ec
  .word 0xafa20060
  .word 0x3c02435a
  .word 0xafa20064
  .word 0x26241650
  .word 0x24050002
  .word 0x8e261620
  .word 0x00a0382d
  .word 0x27a80060
  .word 0x0c08e370
  .word 0x00000000
  .word 0x3c0242da
  .word 0xafa20060
  .word 0x3c02436c
  .word 0xafa20064
  .word 0x26241850
  .word 0x24050003
  .word 0x8e261624
  .word 0x24070002
  .word 0x27a80060
  .word 0x0c08e2fc
  .word 0x00000000
  .word 0x3c024328
  .word 0xafa20060
  .word 0x3c02436c
  .word 0xafa20064
  .word 0x26241b50
  .word 0x24050003
  .word 0x8e261628
  .word 0x24070002
  .word 0x27a80060
  .word 0x0c08e2fc
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0x24020099
  .word 0xa3a2008f
  .word 0x0000802d
  .word 0x10000008
  .word 0x00000000
  .word 0x00101200
  .word 0x02221021
  .word 0x24441b50
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020003
  .word 0x1440fff7
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050004
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034360
  .word 0xafa30060
  .word 0x3c03436e
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800060
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0xc6201624
  .word 0x46800020
  .word 0x46000842
  .word 0xc6201628
  .word 0x46800020
  .word 0x46000803
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26241e50
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x3c0242da
  .word 0xafa20060
  .word 0x3c02437c
  .word 0xafa20064
  .word 0x26241f50
  .word 0x24050003
  .word 0x8e26162c
  .word 0x24070002
  .word 0x27a80060
  .word 0x0c08e2fc
  .word 0x00000000
  .word 0x3c024328
  .word 0xafa20060
  .word 0x3c02437c
  .word 0xafa20064
  .word 0x26242250
  .word 0x24050003
  .word 0x8e261630
  .word 0x24070002
  .word 0x27a80060
  .word 0x0c08e2fc
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0x24020099
  .word 0xa3a2008f
  .word 0x0000802d
  .word 0x10000008
  .word 0x00000000
  .word 0x00101200
  .word 0x02221021
  .word 0x24442250
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020003
  .word 0x1440fff7
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050005
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034360
  .word 0xafa30060
  .word 0x3c03437e
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800060
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0xc620162c
  .word 0x46800020
  .word 0x46000842
  .word 0xc6201630
  .word 0x46800020
  .word 0x46000803
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26242550
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c08cf7c
  .word 0x00000000
  .word 0x3c024248
  .word 0xafa20060
  .word 0xafa00064
  .word 0x24020161
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00068
  .word 0x3c024228
  .word 0xafa2006c
  .word 0x26242950
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e241634
  .word 0x0c099328
  .word 0x00000000
  .word 0x3c034358
  .word 0xafa30060
  .word 0x3c03437f
  .word 0xafa30064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26242a50
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x3c02431b
  .word 0x44820000
  .word 0x00000000
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00022900
  .word 0x3c02434e
  .word 0x44820000
  .word 0x00000000
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x000230c0
  .word 0x8e242b50
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x8e242b50
  .word 0x2405ffcd
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050011
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c03424c
  .word 0xafa30060
  .word 0x2403012b
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26243160
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0xc600000c
  .word 0x46800060
  .word 0x3c02424c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00060
  .word 0x2402012b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00064
  .word 0x3c0242d4
  .word 0xafa20068
  .word 0xc6000010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26243260
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050022
  .word 0x0c087328
  .word 0x00000000
  .word 0x24030131
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00060
  .word 0x2403012b
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00064
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26243360
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x3c024359
  .word 0xafa20060
  .word 0x2402012d
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00064
  .word 0x26243460
  .word 0x24050005
  .word 0x8e261644
  .word 0x24070002
  .word 0x27a80060
  .word 0x0c08e370
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#define setRenderState(...) (*setRenderState)(__VA_ARGS__)
#define renderQuad(...) (*renderQuad)(__VA_ARGS__)
// FUN_00263db0
#ifndef PC_BUILD
asm void brHero00263db0(void)
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
  .word 0x8f83b68c
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ec28
  .word 0x24050053
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b68c
  .word 0x8e230000
  .word 0x00601827
  .word 0x30630001
  .word 0x14600396
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c08cf5c
  .word 0x00000000
  .word 0x0040a82d
  .word 0x24040001
  .word 0x0c08cf5c
  .word 0x00000000
  .word 0x0040a02d
  .word 0x24040003
  .word 0x0c08cf5c
  .word 0x00000000
  .word 0x0040b82d
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040009
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e020000
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
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000017
  .word 0x00000000
  .word 0x00131200
  .word 0x02221021
  .word 0x24520610
  .word 0x3c160096
  .word 0x26d6009c
  .word 0x0240202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620003
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050016
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c130096
  .word 0x26730090
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c120096
  .word 0x2652009c
  .word 0x26240010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050017
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050018
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240210
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240210
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050019
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x2405001a
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240410
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240410
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x2405001b
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240510
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240510
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x2405001c
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000017
  .word 0x00000000
  .word 0x00121200
  .word 0x02221021
  .word 0x24530910
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
  .word 0x26520001
  .word 0x2a420003
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x02a0202d
  .word 0x2405001d
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000017
  .word 0x00000000
  .word 0x00121200
  .word 0x02221021
  .word 0x24530c10
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
  .word 0x26520001
  .word 0x2a420003
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x02a0202d
  .word 0x8e251210
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c130096
  .word 0x26730090
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c120096
  .word 0x2652009c
  .word 0x26240f10
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240f10
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e221214
  .word 0x24450007
  .word 0x02a0202d
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26241010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26241010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e221218
  .word 0x2445000e
  .word 0x02a0202d
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26241110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26241110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c08cf7c
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26242950
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26242950
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0c08cf7c
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000017
  .word 0x00000000
  .word 0x00131200
  .word 0x02221021
  .word 0x24551320
  .word 0x3c120096
  .word 0x2652009c
  .word 0x02a0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620002
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x02e0202d
  .word 0x0000282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c130096
  .word 0x26730090
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c120096
  .word 0x2652009c
  .word 0x26241220
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26241220
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26241520
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26241520
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x0c08e450
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000017
  .word 0x00000000
  .word 0x00131200
  .word 0x02221021
  .word 0x24551650
  .word 0x3c120096
  .word 0x2652009c
  .word 0x02a0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620002
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x24040002
  .word 0x0c08e450
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000017
  .word 0x00000000
  .word 0x00131200
  .word 0x02221021
  .word 0x24551850
  .word 0x3c120096
  .word 0x2652009c
  .word 0x02a0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620003
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x24040002
  .word 0x0c08e450
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000017
  .word 0x00000000
  .word 0x00131200
  .word 0x02221021
  .word 0x24551b50
  .word 0x3c120096
  .word 0x2652009c
  .word 0x02a0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620003
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050004
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
  .word 0x3c130096
  .word 0x2673009c
  .word 0x26241e50
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26241e50
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x0c08e450
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000017
  .word 0x00000000
  .word 0x00131200
  .word 0x02221021
  .word 0x24551f50
  .word 0x3c120096
  .word 0x2652009c
  .word 0x02a0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620003
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x24040002
  .word 0x0c08e450
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000017
  .word 0x00000000
  .word 0x00101200
  .word 0x02221021
  .word 0x24532250
  .word 0x3c120096
  .word 0x2652009c
  .word 0x0260202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020003
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050005
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
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26242550
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26242550
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e241634
  .word 0x0c099328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26242a50
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26242a50
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e242b50
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0ec4d8
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050011
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
  .word 0x26243160
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26243160
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26243260
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26243260
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050022
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
  .word 0x26243360
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26243360
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x0c08e450
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000017
  .word 0x00000000
  .word 0x00101200
  .word 0x02221021
  .word 0x24533460
  .word 0x3c120096
  .word 0x2652009c
  .word 0x0260202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26100001
  .word 0x2a030005
  .word 0x1460ffe8
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
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


#pragma alias brPersonaInit FUN_00264d80
#pragma alias brPersonaShutdown FUN_00264dd0
#pragma alias brPersonaDestroy FUN_00264f90
#pragma alias brPersonaGetResource FUN_00264ff0
#pragma alias brPersonaLoad FUN_00264e30
#pragma alias brPersonaSetPersona FUN_00264ef0
#pragma alias brPersonaGetPortraitFrame FUN_00264ca0
#pragma alias brPersonaGetPortraitFrame_y2 FUN_00264ca0
#pragma alias FUN_00233d70_u32 FUN_00233d70
#pragma alias FUN_0021cca0_u32 FUN_0021cca0









// FUN_00264ca0
u32 brPersonaGetPortraitFrame_y2(u32 personaId)
{
    u32 table;
    u32 resource;

    table = FUN_00233d70_u32(1);
    switch (personaId)
    {
        case 0: resource = 0x0b; break;
        case 1: resource = 0x0d; break;
        case 2: resource = 0x0c; break;
        case 3: resource = 0x10; break;
        case 4: resource = 0x0e; break;
        case 5: resource = 0x0f; break;
        default:
            K_ASSERT(false, 0x4a4);
    }
    return FUN_0021cca0_u32(table, resource);
}
