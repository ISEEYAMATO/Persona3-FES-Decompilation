#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"
#include "Main/Battle/Data/datPersona.h"
#include "Main/Social/sfl_psel.h"
#include "Main/Social/sfl_res.h"

extern void FUN_0021d890(void*, const void*);


static u32* sSflPsel; // puGpffffb688
u32 FUN_0021cca0();
void FUN_0021d3b0();
float FUN_0021ea00();
void FUN_0021eac0(void*, float);
void FUN_00260c20();
void FUN_00261480();
extern void FUN_0021d8e0(void*, const void*);
extern void FUN_0021d950(void*, const void*);
extern void (*D_00960090)(u32, u32);
extern void (*D_0096009C)(u32*, u32, u32, u32, u32);
#pragma alias D_00960090_abs D_00960090
extern u8 D_00960090_abs[];
#pragma alias D_0096009C_abs D_0096009C
extern u8 D_0096009C_abs[];
extern void RpSkyRenderStateSet(u32, void*);
extern void func_004d7f60(s32 state, u32 value);
extern float fGpffff8300;
extern char D_00960088[];
extern u32 uGpffffb948;
extern u16 DAT_007e0952;
#pragma alias DAT_007e0952_a DAT_007e0952
extern u16 DAT_007e0952_a[8];
extern u32 func_00173220(u16 id);
extern u32 func_00173280(u16 id);
extern u8* DAT_007ce420;
extern u32 func_00175410(void);
extern u32 func_001756f0(void);
extern void* func_001749a0(u16 id);
extern DatPersonaWork* datPersonaGetHeroPersona(s16 index);
extern DatPersonaWork* datPersonaGetByPcId(u16 pcId);
extern u32 func_0010a4e0(s32 bank, s32 cue, s32 variant, s32 pan);
extern u32 func_0021cca0(u32 texture, s32 frame);
extern u32 func_0021cce0(u32 frame);
extern void func_0021d3b0(void* destination, u32 frame);
extern void func_0021d8e0(void* destination, const f32* rect);
extern void func_0021d950(void* destination, const u8* color);
extern void func_0021e380(void* destination, u32 frame, s32 mode);
extern f32 func_0021ea00(s32 duration);
extern void func_0021eac0(void* animation, f32 value);
extern void func_00238980(void* destination, s32 count, u32 value, s32 mode);
extern void* func_00238dc0(void* destination, s32 count, u32 value, s32 mode, const f32* origin);
extern u32 func_00239140(s32 font);
extern void func_0024a260(u32* state);
extern u32 func_003b0970(u32 resource, s32 mode, s8 group, s32 a, s32 b);
extern void func_003b0d70(u32 resource, s32 x, s32 y);
extern void func_003b0e20(u32 resource, u32 color);
extern void func_003b0e70(s32 mode);
extern void func_003b0e90(s32 mode);
extern void func_003b1360(u32 resource, s32 mode, s32 value);
extern void func_003b0170(u32 resource);
extern void frFontSetTextScale(u32 resource, f32 value);
extern u32 func_003c7610(void);
extern void func_003c7650(s32 mode);
extern u32 func_003c7850(void);
extern u32 func_003c78d0(void);
extern void func_003c7990(s32 mode);
extern void func_003c7bc0(s32 mode, u32 value);
extern void func_003c7430(u32 value);
extern void sflPersonaLoad(u16 id);
extern void sflPersonaSetPersona(u16 id);
extern void sflPersonaDestroy(void);
extern u32 sflPersonaIsLoading(void);
extern void sflPersonaStartExitTransition(void);
extern u32 sflPersonaIsTransitioning(void);
extern void func_00523ac8(char* destination, const char* format, ...);
extern s32 func_00524388(const char* text);
extern void func_0019d3f0(const char* file, s32 line);
extern char D_0068e228[];
extern void func_003c74e0(u32 value);

typedef void (*SflPselStateCallback)(u32 state, u32 value);
typedef void (*SflPselDrawCallback)(void* quad, u32 layer, u32 group, u32 pass, u32 blend);

extern u32 FUN_0021cce0(u32 frame);

static inline u8* sflPselBytes(u32* work, u32 offset)
{
    return (u8*)work + offset;
}

static u32 sflPselReadU32(const void* object, u32 offset)
{
    return *(const u32*)((const u8*)object + offset);
}

static inline s32 sflPselReadS32(const void* object, u32 offset)
{
    return *(const s32*)((const u8*)object + offset);
}

static u8* sflPselEntry(u32* work, s32 index)
{
    u8* entries;

    entries = (u8*)(uintptr_t)sflPselReadU32(work, 0x184);
    return entries + index * 0x80;
}

static inline void sflPselSetAlpha(void* object, u8 alpha)
{
    u8 color[4];

    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = alpha;
    FUN_0021d950(object, color);
}

static void sflPselDraw(void* object)
{
    D_0096009C((u32*)object, 4, 0, 1, 2);
    D_0096009C((u32*)object, 4, 0, 2, 3);
}






// FUN_00260a10
void sflPsel00260a10(void)
{
    K_ASSERT(sSflPsel != NULL, 0x57);
    sSflPsel = NULL;
}

// FUN_00260a50
void sflPsel00260a50(void)
{
    u32* puVar1;
    u32 uVar2;
    u32 uVar3;
    float fVar4;
    float fVar5;

    K_ASSERT(sSflPsel != NULL, 0x57);
    puVar1 = sSflPsel;
    uVar2 = sflResGetPersonaChangeSprite();
    uVar3 = FUN_0021cca0(uVar2, 0x34);
    FUN_0021d3b0(puVar1 + 0x104, uVar3);
    fVar4 = FUN_0021ea00(0x1e);
    FUN_0021eac0(puVar1 + 0x104, fVar4);
    uVar3 = FUN_0021cca0(uVar2, 0x35);
    FUN_0021d3b0(puVar1 + 0x144, uVar3);
    fVar4 = FUN_0021ea00(0x1e);
    FUN_0021eac0(puVar1 + 0x144, fVar4);
    uVar3 = FUN_0021cca0(uVar2, 0x36);
    FUN_0021d3b0(puVar1 + 0x184, uVar3);
    fVar4 = FUN_0021ea00(0x1e);
    FUN_0021eac0(puVar1 + 0x184, fVar4);
    uVar3 = FUN_0021cca0(uVar2, 0x3a);
    FUN_0021d3b0(puVar1 + 0x1c4, uVar3);
    fVar4 = FUN_0021ea00(0x32);
    FUN_0021eac0(puVar1 + 0x1c4, fVar4);
    fVar5 = FUN_0021ea00(0x32);
    ((float*)puVar1)[0x206] = fVar5;
    ((float*)puVar1)[0x216] = fVar5;
    ((float*)puVar1)[0x226] = fVar5;
    FUN_00260c20();
    FUN_00261480();
    *puVar1 |= 1;
}


// Reconstructed the complete retail animation path, including all quad states.
// The original source omitted dynamic frame branches and contiguous color writes.
// Restoring these stores increases the instruction window while preserving logic.
// Remaining differences are primarily MWCC register allocation and scheduling.
// This function remains NONMATCHING until those code-generation details converge.
// FUN_00260bd0
void sflPsel00260bd0(void)
{
    K_ASSERT(sSflPsel != NULL, 0x57);
    *sSflPsel &= 0xfffffffe;
}

// FUN_00260c20
void sflPsel00260c20(void)
{
    u32* work;

    K_ASSERT(sSflPsel != NULL, 0x57);
    work = sSflPsel;
    work[2] = 0;
    work[1] = 0;
    *work |= 2;
}

// FUN_00260c70
void sflPsel00260c70(void)
{
    u32* work;

    K_ASSERT(sSflPsel != NULL, 0x57);
    work = sSflPsel;
    work[2] = 0;
    work[1] = 1;
    *work |= 2;
}

// FUN_00260cd0
u32 sflPsel00260cd0(void)
{
    K_ASSERT(sSflPsel != NULL, 0x57);
    return *sSflPsel & 2;
}

// FUN_00260D20
void sflPsel00260d20(void)
{
    u32* work;

    K_ASSERT(sSflPsel != NULL, 0x57);
    work = sSflPsel;
    if (((~*work) & 1) != 0)
        return;

    switch (work[1])
    {
    case 0:
        if ((s32)work[2] < 10)
            work[2] += 1;
        else
            *work &= ~2u;
        break;
    case 1:
        if ((s32)work[2] < 10)
            work[2] += 1;
        else
            *work &= ~2u;
        break;
    }
    FUN_00261480();
}

// FUN_00260e00
#ifndef PC_BUILD
asm void sflPsel00260e00(void)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f83b688
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ec18
  .word 0x24050057
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f92b688
  .word 0x8e430000
  .word 0x00601827
  .word 0x30630001
  .word 0x14600185
  .word 0x00000000
  .word 0x0c083b14
  .word 0x00000000
  .word 0x0040982d
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
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
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
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26440310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040014
  .word 0x24050002
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
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
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405003a
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
  .word 0x26440710
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440710
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440810
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x24050001
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
  .word 0x24040006
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440210
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440210
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e420004
  .word 0x24050001
  .word 0x10450028
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000046
  .word 0x00000000
  .word 0x0220802d
  .word 0x24040006
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26440110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x0220802d
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26440110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c110096
  .word 0x26310090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050034
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
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26440410
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440410
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050035
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
  .word 0x26440510
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440510
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050036
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
  .word 0x26440610
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440610
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00261480
#ifndef PC_BUILD
asm void sflPsel00261480(void)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f82b688
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484ec18
  .word 0x24050057
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b688
  .word 0x0c083b14
  .word 0x00000000
  .word 0x0040882d
  .word 0x0220202d
  .word 0x24050034
  .word 0x0c087328
  .word 0x00000000
  .word 0x8c45000c
  .word 0x8c440010
  .word 0x8e030004
  .word 0x24020001
  .word 0x1062002b
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000046
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x8e020008
  .word 0x28410005
  .word 0x1020001c
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000943
  .word 0x3c0240c0
  .word 0x44822000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46002000
  .word 0x460020c0
  .word 0x46002081
  .word 0x46032001
  .word 0x44800800
  .word 0x00000000
  .word 0x46030818
  .word 0x4600281c
  .word 0xe7a00060
  .word 0x46022001
  .word 0x46020818
  .word 0x4600281c
  .word 0xe7a00064
  .word 0x10000025
  .word 0x00000000
  .word 0x3c0240c0
  .word 0xafa20060
  .word 0xafa20064
  .word 0x10000020
  .word 0x00000000
  .word 0x8e020008
  .word 0x28410003
  .word 0x10200018
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c024316
  .word 0x44820000
  .word 0x00000000
  .word 0x46001042
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00060
  .word 0xe7a00064
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020541
  .word 0x10000005
  .word 0x00000000
  .word 0x3c02431c
  .word 0xafa20060
  .word 0xafa20064
  .word 0x4480a800
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00068
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26040410
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46150042
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
  .word 0xa3a3008f
  .word 0x26040410
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050035
  .word 0x0c087328
  .word 0x00000000
  .word 0x8c53000c
  .word 0x8c520010
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620033
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000056
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x8e020008
  .word 0x28410006
  .word 0x10200023
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050035
  .word 0x0c087328
  .word 0x00000000
  .word 0xc4400010
  .word 0x3c0242da
  .word 0x44822000
  .word 0x46800020
  .word 0x46002040
  .word 0x3c0241b8
  .word 0x44820000
  .word 0x00000000
  .word 0x460100c0
  .word 0x46012081
  .word 0x46030001
  .word 0x44800800
  .word 0x00000000
  .word 0x46030818
  .word 0x4600a01c
  .word 0xe7a00060
  .word 0x46022001
  .word 0x46020818
  .word 0x4600a01c
  .word 0xe7a00064
  .word 0x1000002e
  .word 0x00000000
  .word 0x3c0241b8
  .word 0xafa20060
  .word 0x3c0242da
  .word 0xafa20064
  .word 0x10000028
  .word 0x00000000
  .word 0x8e020008
  .word 0x28410003
  .word 0x1020001c
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c024316
  .word 0x44820000
  .word 0x00000000
  .word 0x46001042
  .word 0x3c0241b8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00060
  .word 0x3c0242da
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00064
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020541
  .word 0x10000009
  .word 0x00000000
  .word 0x3c02432d
  .word 0xafa20060
  .word 0x24020103
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00064
  .word 0x4480a800
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00068
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26040510
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46150042
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
  .word 0xa3a3008f
  .word 0x26040510
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050036
  .word 0x0c087328
  .word 0x00000000
  .word 0x8c53000c
  .word 0x8c520010
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620037
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000057
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x8e020008
  .word 0x28410006
  .word 0x10200027
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050035
  .word 0x0c087328
  .word 0x00000000
  .word 0xc4400010
  .word 0x3c0242da
  .word 0x44820800
  .word 0x00000000
  .word 0x46800020
  .word 0x46000840
  .word 0x3c0242e8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010100
  .word 0x3c0241b0
  .word 0x44821800
  .word 0x00000000
  .word 0x46011881
  .word 0x46040001
  .word 0x44800800
  .word 0x00000000
  .word 0x46040818
  .word 0x4600a01c
  .word 0xe7a00060
  .word 0x46021801
  .word 0x46020818
  .word 0x4600a01c
  .word 0xe7a00064
  .word 0x1000002b
  .word 0x00000000
  .word 0x3c0242e8
  .word 0xafa20060
  .word 0x3c0241b0
  .word 0xafa20064
  .word 0x10000025
  .word 0x00000000
  .word 0x8e020008
  .word 0x28410003
  .word 0x1020001c
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c024316
  .word 0x44820000
  .word 0x00000000
  .word 0x46001042
  .word 0x3c0242e8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00060
  .word 0x3c0241b0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00064
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020541
  .word 0x10000006
  .word 0x00000000
  .word 0x3c024385
  .word 0xafa20060
  .word 0x3c02432c
  .word 0xafa20064
  .word 0x4480a800
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00068
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0006c
  .word 0x26040610
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46150042
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
  .word 0xa3a3008f
  .word 0x26040610
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620059
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000ae
  .word 0x00000000
  .word 0x8e030008
  .word 0x28610008
  .word 0x1020002f
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000184
  .word 0x3c0243a0
  .word 0x44822800
  .word 0xafa20060
  .word 0x3c024420
  .word 0x44820000
  .word 0x00000000
  .word 0x46060003
  .word 0x46000007
  .word 0x46060103
  .word 0xe7a40064
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46060003
  .word 0x46000007
  .word 0x460600c3
  .word 0xe7a30068
  .word 0x3c024360
  .word 0x44821000
  .word 0xafa2006c
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024488
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0x46060043
  .word 0x46011800
  .word 0xe7a00070
  .word 0x46011000
  .word 0xe7a00074
  .word 0x46012800
  .word 0xe7a00078
  .word 0x46012000
  .word 0xe7a0007c
  .word 0x1000007c
  .word 0x00000000
  .word 0x3c0243a0
  .word 0x44822800
  .word 0xafa20060
  .word 0x3c024420
  .word 0x44820000
  .word 0x00000000
  .word 0x46160003
  .word 0x46000007
  .word 0x46160103
  .word 0xe7a40064
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46160003
  .word 0x46000007
  .word 0x461600c3
  .word 0xe7a30068
  .word 0x3c024360
  .word 0x44821000
  .word 0xafa2006c
  .word 0x3c024488
  .word 0x44820000
  .word 0x00000000
  .word 0x46160043
  .word 0x46011800
  .word 0xe7a00070
  .word 0x46011000
  .word 0xe7a00074
  .word 0x46012800
  .word 0xe7a00078
  .word 0x46012000
  .word 0xe7a0007c
  .word 0x1000005a
  .word 0x00000000
  .word 0x8e020008
  .word 0x2841000a
  .word 0x10200033
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x460009c3
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000204
  .word 0x3c024458
  .word 0x44823000
  .word 0xafa20070
  .word 0x3c024360
  .word 0x44822800
  .word 0xafa20074
  .word 0x3c0243a0
  .word 0x44822000
  .word 0xafa20078
  .word 0x3c024440
  .word 0x44821800
  .word 0xafa2007c
  .word 0xc7828300
  .word 0x3c024380
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4608101d
  .word 0x46080043
  .word 0x3c024408
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46070001
  .word 0x46010042
  .word 0x46012001
  .word 0xe7a00060
  .word 0x46011801
  .word 0xe7a00064
  .word 0x46013001
  .word 0xe7a00068
  .word 0x46012801
  .word 0xe7a0006c
  .word 0x10000024
  .word 0x00000000
  .word 0x3c024488
  .word 0x44820000
  .word 0x00000000
  .word 0x46160003
  .word 0x46160103
  .word 0x3c0243a0
  .word 0x44820000
  .word 0x00000000
  .word 0x460400c0
  .word 0xe7a30070
  .word 0x3c024420
  .word 0x44820000
  .word 0x00000000
  .word 0x46160003
  .word 0x46000007
  .word 0x46160003
  .word 0x46002080
  .word 0xe7a20074
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46160003
  .word 0x46000007
  .word 0x46160003
  .word 0x46002040
  .word 0xe7a10078
  .word 0x3c024360
  .word 0x44820000
  .word 0x00000000
  .word 0x46040000
  .word 0xe7a0007c
  .word 0xe7a10060
  .word 0xe7a00064
  .word 0xe7a30068
  .word 0xe7a2006c
  .word 0x26040010
  .word 0x27a50060
  .word 0x0c087624
  .word 0x00000000
  .word 0x24040032
  .word 0x0c087a80
  .word 0x00000000
  .word 0x26040010
  .word 0x46000306
  .word 0x0c087ab0
  .word 0x00000000
  .word 0xa3a0008c
  .word 0xa3a0008d
  .word 0xa3a0008e
  .word 0xa3a0008f
  .word 0x26040010
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x1062002e
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000007f
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000044
  .word 0x3c0243a0
  .word 0x44822800
  .word 0xafa20060
  .word 0x3c024420
  .word 0x44820000
  .word 0x00000000
  .word 0x46010003
  .word 0x46000007
  .word 0x46010103
  .word 0xe7a40064
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010003
  .word 0x46000007
  .word 0x460100c3
  .word 0xe7a30068
  .word 0x3c024360
  .word 0x44821000
  .word 0xafa2006c
  .word 0x3c024358
  .word 0x44820000
  .word 0x00000000
  .word 0x46010003
  .word 0x46010043
  .word 0x46011800
  .word 0xe7a00070
  .word 0x46011000
  .word 0xe7a00074
  .word 0x46012800
  .word 0xe7a00078
  .word 0x46012000
  .word 0xe7a0007c
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x10000056
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x460001c4
  .word 0x00000000
  .word 0x8e020008
  .word 0x2841000a
  .word 0x10200044
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020541
  .word 0x3c024380
  .word 0x44820000
  .word 0x00000000
  .word 0x46070043
  .word 0xc7808300
  .word 0x46000801
  .word 0x46070043
  .word 0x3c024408
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46001082
  .word 0x3c024220
  .word 0x44823000
  .word 0x00000000
  .word 0x46073043
  .word 0x3c0243a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46020140
  .word 0xe7a50060
  .word 0x3c02c3a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46020100
  .word 0xe7a40064
  .word 0x3c02c360
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x460200c0
  .word 0xe7a30068
  .word 0x3c024360
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46020080
  .word 0xe7a2006c
  .word 0x3c024358
  .word 0x44820000
  .word 0x00000000
  .word 0x46070003
  .word 0x46003000
  .word 0x46070043
  .word 0x46011800
  .word 0xe7a00070
  .word 0x46011000
  .word 0xe7a00074
  .word 0x46012800
  .word 0xe7a00078
  .word 0x46012000
  .word 0xe7a0007c
  .word 0x1000000a
  .word 0x00000000
  .word 0x4480a800
  .word 0xafa00060
  .word 0xafa00064
  .word 0xafa00068
  .word 0xafa0006c
  .word 0xafa00070
  .word 0xafa00074
  .word 0xafa00078
  .word 0xafa0007c
  .word 0x26040110
  .word 0x27a50060
  .word 0x0c087624
  .word 0x00000000
  .word 0x24040023
  .word 0x0c087a80
  .word 0x00000000
  .word 0x26040110
  .word 0x46000306
  .word 0x0c087ab0
  .word 0x00000000
  .word 0x24020004
  .word 0xa3a2008c
  .word 0x24020029
  .word 0xa3a2008d
  .word 0x24020046
  .word 0xa3a2008e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46150042
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
  .word 0xa3a3008f
  .word 0x26040110
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620024
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000005b
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000044
  .word 0x3c0243a0
  .word 0x44822800
  .word 0xafa20060
  .word 0x3c02c3a0
  .word 0x44822000
  .word 0xafa20064
  .word 0x3c02c360
  .word 0x44821800
  .word 0xafa20068
  .word 0x3c024360
  .word 0x44821000
  .word 0xafa2006c
  .word 0x3c024380
  .word 0x44820000
  .word 0x00000000
  .word 0x46010003
  .word 0x46010043
  .word 0x46011800
  .word 0xe7a00070
  .word 0x46011000
  .word 0xe7a00074
  .word 0x46012800
  .word 0xe7a00078
  .word 0x46012000
  .word 0xe7a0007c
  .word 0x1000003c
  .word 0x00000000
  .word 0xc6000008
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000204
  .word 0x3c024380
  .word 0x44820000
  .word 0x00000000
  .word 0x460801c3
  .word 0xc7808300
  .word 0x46003801
  .word 0x46080043
  .word 0x3c024408
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46001182
  .word 0x3c0243a0
  .word 0x44822800
  .word 0x00000000
  .word 0x46012800
  .word 0x46060000
  .word 0xe7a00060
  .word 0x3c02c3a0
  .word 0x44822000
  .word 0x00000000
  .word 0x46012000
  .word 0x46060000
  .word 0xe7a00064
  .word 0x3c02c360
  .word 0x44821800
  .word 0x00000000
  .word 0x46011800
  .word 0x46060000
  .word 0xe7a00068
  .word 0x3c024360
  .word 0x44821000
  .word 0x00000000
  .word 0x46011000
  .word 0x46060000
  .word 0xe7a0006c
  .word 0x46083843
  .word 0x46011800
  .word 0x46060000
  .word 0xe7a00070
  .word 0x46011000
  .word 0x46060000
  .word 0xe7a00074
  .word 0x46012800
  .word 0x46060000
  .word 0xe7a00078
  .word 0x46012000
  .word 0x46060000
  .word 0xe7a0007c
  .word 0x26040210
  .word 0x27a50060
  .word 0x0c087624
  .word 0x00000000
  .word 0x24040023
  .word 0x0c087a80
  .word 0x00000000
  .word 0x26040210
  .word 0x46000306
  .word 0x0c087ab0
  .word 0x00000000
  .word 0x2402004f
  .word 0xa3a2008c
  .word 0x240200a4
  .word 0xa3a2008d
  .word 0x240200ff
  .word 0xa3a2008e
  .word 0xa3a2008f
  .word 0x26040210
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0xafa00060
  .word 0xafa00064
  .word 0x3c024420
  .word 0xafa20068
  .word 0x3c0243e0
  .word 0xafa2006c
  .word 0x26040710
  .word 0x27a50060
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0xa3a2008f
  .word 0x26040710
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x24030205
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6000810
  .word 0x3c0543e0
  .word 0xae050814
  .word 0x3c044420
  .word 0xae040850
  .word 0x24030145
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6000854
  .word 0xae040890
  .word 0xae050894
  .word 0x2403004f
  .word 0xa3a3008c
  .word 0x240300a4
  .word 0xa3a3008d
  .word 0x240300ff
  .word 0xa3a3008e
  .word 0xa3a3008f
  .word 0x93a3008c
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000830
  .word 0x93a3008d
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000834
  .word 0x93a3008e
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000838
  .word 0x93a3008f
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe600083c
  .word 0x93a3008c
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000870
  .word 0x93a3008d
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000874
  .word 0x93a3008e
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000878
  .word 0x93a3008f
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe600087c
  .word 0x93a3008c
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe60008b0
  .word 0x93a3008d
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe60008b4
  .word 0x93a3008e
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe60008b8
  .word 0x93a3008f
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe60008bc
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


/* opt_lifetimes on: func_00215b00 nd765 -> nd748, object 1216 -> 1212/1216; measured W328. */



/* opt_lifetimes on: func_002168f0 nd777 -> nd716, object 1992 -> 1992/2000; measured W328. */



















