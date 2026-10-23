#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"

#include "Utils.h"
#pragma alias datGetFlag_y2 datGetFlag
extern u32* sBpc324; // 007CE324 / GP -0x49CC
u32* sBpc328;
typedef void (*BpcRenderState)(s32 property, u32 value);
typedef void (*BpcRenderQuad)(void* quad, s32 count, s32 group, s32 pass, s32 blend);
extern BpcRenderState gBpcRenderState;
extern BpcRenderQuad gBpcRenderQuad;
extern u32 D_00960090[];
extern u32 D_0096009C[];
extern void RpSkyRenderStateSet(s32 state, u32 value);
extern u32 func_0021c3f0(s32 texture);
extern u32 func_0021cca0(u32 texture, s32 frame);
extern u32 func_0021cce0(u32 frame);
extern void* func_0021c550(s32 index);
extern void func_0021d3b0(void* destination, u32 frame);
extern void func_0021d8e0(void* destination, const f32* layout);
extern void func_0021d950(void* destination, const u8* color);
extern void func_0021e380(void* destination, u32 frame, s32 mode);
extern void* func_003a52c0(f32 angle, s32 width, s32 height, s32 first,
                            s32 mode, s32 count, void* left, void* right);
extern void func_003b0170(u32 resource);
extern u32 func_003b0970(u32 resource, s32 mode, s32 group, s32 a, s32 b);
extern void func_003b1360(u32 resource, s32 mode, s32 group);
extern void func_003b0d70(u32 resource, s32 x, s32 y);
extern void func_003b0e20(u32 resource, u32 color);
extern void func_003b0e70(s32 mode);
extern void func_003b0e90(s32 mode);
extern s32 func_003b19d0(u32 resource);
extern void frFontSetTextScale(u32 resource, f32 angle);
extern void func_003c72d0(void* resource);
extern void func_003c7430(s32 mode);
extern void func_003c7650(s32 mode);
extern u32 func_003c7850(void);
extern void func_003c7990(s32 mode);
extern void func_003c7bc0(s32 mode, u32 value);
extern void func_003c7c20(s32 mode, u32 value, s32 count);
extern void func_003c77a0(void);
extern u32 func_00173220(u16 value);
extern u32 func_001775a0(u16 value);
extern void func_003c94e0(void* resource);
extern void func_003c9790(s32 mode);
extern s32 datGetFlag(s32 flag);
extern void datSetFlag(s32 flag, u8 value);
extern void* func_0030c0c0(void);
void* FUN_00248f40(void*);
void FUN_002491f0(void);
void FUN_00248fc0(void*);
static u32* sBpeWork;


#pragma alias FUN_002491f0_y2 FUN_002491f0


#pragma alias bpcInit FUN_00248490
#pragma alias bpmUpdate FUN_00249180


static u32* sBpmWork; // puGpffffb634
extern u32* sBpc324; // 007ce324 / GP -0x49CC


void FUN_002491f0_y2();

// FUN_002484A0
void FUN_002484a0(void)
{
    K_ASSERT(sBpc324 != NULL, 0x3d);
    if ((*sBpc324 & 1u) != 0) {
        FUN_002491f0();
    }
    sBpc324 = NULL;
}





/* BPC panel subtask state at DAT_007CE324 / GP -0x49CC. */
/* BPC command subtask state at DAT_007CE328 / GP -0x49C8. */


static void bpc324RenderState(u32 state, u32 value)
{
    gBpcRenderState(state, value);
}

static void bpc324Draw(void* quad, s32 pass, s32 blend)
{
    gBpcRenderQuad(quad, 4, 0, pass, blend);
}

static u32 bpc324Flags(void)
{
    K_ASSERT(sBpc324 != NULL, 0x3d);
    return *sBpc324;
}


// FUN_00248500
void FUN_00248500(void* destination)
{
    K_ASSERT(sBpc324 != NULL, 0x3d);
    if ((*sBpc324 & 1u) != 0) {
        FUN_002491f0();
    }
    FUN_00248fc0(FUN_00248f40(destination));
}

// FUN_00248580
void FUN_00248580(void* destination, void* origin)
{
    K_ASSERT(sBpc324 != NULL, 0x3d);
    if ((*sBpc324 & 1u) != 0) {
        FUN_002491f0();
    }
    FUN_00248fc0(func_003a52c0(0.0f, 100, 100, -1, 2, 6, destination, origin));
}

// FUN_00248620
#ifndef PC_BUILD
asm void FUN_00248620(void)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f82b634
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e890
  .word 0x2405003d
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b634
  .word 0x24040001
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040902d
  .word 0x8e230000
  .word 0x30630001
  .word 0x1060000f
  .word 0x00000000
  .word 0x8e230008
  .word 0x2861002d
  .word 0x10200005
  .word 0x00000000
  .word 0x24630001
  .word 0xae230008
  .word 0x10000007
  .word 0x00000000
  .word 0x0c09247c
  .word 0x00000000
  .word 0x8e240000
  .word 0x2403fffe
  .word 0x00831824
  .word 0xae230000
  .word 0x8e240000
  .word 0x00801827
  .word 0x30630001
  .word 0x1460012a
  .word 0x00000000
  .word 0x34820002
  .word 0xae220000
  .word 0x4480b000
  .word 0x8e300004
  .word 0x10000009
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0ec674
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600b580
  .word 0x8e100024
  .word 0x1600fff7
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b503
  .word 0x24020135
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46140541
  .word 0x3c024264
  .word 0x44820000
  .word 0x00000000
  .word 0x4600adc1
  .word 0x0240202d
  .word 0x24050043
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0xe7b70060
  .word 0x3c0342c8
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
  .word 0x240200ff
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0xa3a2008f
  .word 0x26240010
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0xc600000c
  .word 0x46800020
  .word 0x46170080
  .word 0x24020135
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46140500
  .word 0x3c024264
  .word 0x44820000
  .word 0x00000000
  .word 0x46140040
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46000dc1
  .word 0x4602b801
  .word 0xe7a20060
  .word 0x3c0242c8
  .word 0xafa20064
  .word 0xe7a00068
  .word 0xc6000010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26240110
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0xa3a2008f
  .word 0x26240110
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050044
  .word 0x0c087328
  .word 0x00000000
  .word 0xe7b70060
  .word 0x3c0342c8
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
  .word 0x240200ff
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0xa3a2008f
  .word 0x26240210
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0342ac
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a841
  .word 0xe7a10060
  .word 0x3c034258
  .word 0xafa30064
  .word 0x46140000
  .word 0x46010001
  .word 0xe7a00068
  .word 0x8c430010
  .word 0x00031180
  .word 0x00431821
  .word 0x00031080
  .word 0x00431023
  .word 0x00021840
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001012
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26240310
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0xa3a2008f
  .word 0x26240310
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x4480a000
  .word 0x8e300004
  .word 0x10000009
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0ec674
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600a500
  .word 0x8e100024
  .word 0x1600fff7
  .word 0x00000000
  .word 0x8e300004
  .word 0x3c024426
  .word 0x44820000
  .word 0x00000000
  .word 0x46000024
  .word 0x44130000
  .word 0x10000014
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0ec674
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600a501
  .word 0x4614a840
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0x46000024
  .word 0x44050000
  .word 0x0200202d
  .word 0x0260302d
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x8e100024
  .word 0x1600ffec
  .word 0x00000000
  .word 0x240200c8
  .word 0xa3a2008c
  .word 0x240200e6
  .word 0xa3a2008d
  .word 0x240200ff
  .word 0xa3a2008e
  .word 0xa3a2008f
  .word 0x93a2008c
  .word 0x00021e00
  .word 0x93a2008d
  .word 0x00021400
  .word 0x00621825
  .word 0x93a2008e
  .word 0x00021200
  .word 0x00431825
  .word 0x93a2008f
  .word 0x00432825
  .word 0x8e240004
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050042
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c034000
  .word 0x44830000
  .word 0x00000000
  .word 0x4600b503
  .word 0x24030135
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46140041
  .word 0x3c0341e0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a00060
  .word 0x3c0342b6
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
  .word 0x240200ff
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0xa3a2008f
  .word 0x26240410
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x24020135
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46140040
  .word 0x3c0241e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a00060
  .word 0x3c0242b6
  .word 0xafa20064
  .word 0xc600000c
  .word 0x46800020
  .word 0xe7a00068
  .word 0xc6000010
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26240510
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0xa3a2008f
  .word 0x26240510
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00248BB0
void FUN_00248bb0(void)
{
    u8* work;
    u32 texture;
    u32 frame;
    s32 flags;
    BpcRenderState* renderState;
    BpcRenderQuad* renderQuad;

    K_ASSERT(sBpc324 != NULL, 0x3d);
    work = (u8*)sBpc324;
    texture = func_0021c3f0(1);
    flags = ~*(u32*)work;
    if ((flags & 1u) == 0) {
        if ((flags & 2u) != 0) {
            FUN_00248620();
        }
        renderState = (BpcRenderState*)D_00960090;
        (*renderState)(9, 2);
        (*renderState)(0x14, 2);
        (*renderState)(8, 0);
        (*renderState)(6, 0);
        frame = func_0021cce0(func_0021cca0(texture, 0));
        (*renderState)(1, frame);
        RpSkyRenderStateSet(3, 0x717fb);
        RpSkyRenderStateSet(2, 0x44);
        renderQuad = (BpcRenderQuad*)D_0096009C;
        (*renderQuad)(work + 0x310, 4, 0, 1, 2);
        (*renderQuad)(work + 0x310, 4, 0, 2, 3);
        frame = func_0021cce0(func_0021cca0(texture, 0x43));
        (*renderState)(1, frame);
        RpSkyRenderStateSet(3, 0x717fb);
        RpSkyRenderStateSet(2, 0x44);
        (*renderQuad)(work + 0x10, 4, 0, 1, 2);
        (*renderQuad)(work + 0x10, 4, 0, 2, 3);
        (*renderQuad)(work + 0x110, 4, 0, 1, 2);
        (*renderQuad)(work + 0x110, 4, 0, 2, 3);
        (*renderQuad)(work + 0x210, 4, 0, 1, 2);
        (*renderQuad)(work + 0x210, 4, 0, 2, 3);
        func_003b1360(*(u32*)(work + 4), 1, 0);
        frame = func_0021cce0(func_0021cca0(texture, 0x42));
        (*renderState)(1, frame);
        RpSkyRenderStateSet(3, 0x717fb);
        RpSkyRenderStateSet(2, 0x44);
        (*renderQuad)(work + 0x410, 4, 0, 1, 2);
        (*renderQuad)(work + 0x410, 4, 0, 2, 3);
        (*renderQuad)(work + 0x510, 4, 0, 1, 2);
        (*renderQuad)(work + 0x510, 4, 0, 2, 3);
    }
}

// FUN_00248F40
void* FUN_00248f40(void* destination)
{
    void* resource;

    func_003b0e70(1);
    func_003b0e90(2);
    resource = (void*)func_003b0970((u32)destination, 2, 6, 0, 0);
    func_003b0e90(1);
    func_003b0e70(2);
    return resource;
}

// FUN_00248FC0
void FUN_00248fc0(void* destination)
{
    u8* work;
    u32 texture;
    u32 frame;
    u32 flags;

    K_ASSERT(sBpc324 != NULL, 0x3d);
    work = (u8*)sBpc324;
    texture = func_0021c3f0(1);
    func_003b0d70((u32)destination, 0x640, 0x320);
    frFontSetTextScale((u32)destination, 0.0f);
    func_003b0e20((u32)destination, (u32)-1);
    *(void**)(work + 4) = destination;
    frame = func_0021cca0(texture, 0x43);
    func_0021d3b0(work + 0x10, frame);
    func_0021e380(work + 0x110, frame, 1);
    func_0021d3b0(work + 0x210, func_0021cca0(texture, 0x44));
    func_0021d3b0(work + 0x310, func_0021cca0(texture, 0));
    frame = func_0021cca0(texture, 0x42);
    func_0021d3b0(work + 0x410, frame);
    func_0021d3b0(work + 0x510, frame);
    *(u32*)(work + 8) = 0;
    flags = *(u32*)work | 1u;
    *(u32*)work = flags;
    *(u32*)work = flags & ~2u;
}

// FUN_00249130
u32 FUN_00249130(void)
{
    K_ASSERT(sBpc324 != NULL, 0x3d);
    return *sBpc324 & 1u;
}

// FUN_00249180
void bpmUpdate(void)
{
    u32* work;

    K_ASSERT(sBpmWork != NULL, 0x3d);
    work = sBpmWork;
    if (*work & 1)
    {
        FUN_002491f0_y2();
        *work &= ~1;
    }
}

// FUN_002491F0
void FUN_002491f0(void)
{
    K_ASSERT(sBpc324 != NULL, 0x3d);
    func_003b0170(*(u32*)((u8*)sBpc324 + 4));
}





// FUN_00249240
void bpe00249240(u32* param_1)
{
    *param_1 = 0;
    sBpeWork = param_1;
}
