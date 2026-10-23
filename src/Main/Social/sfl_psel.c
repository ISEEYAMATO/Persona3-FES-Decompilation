#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"
#include "Main/Battle/Data/datPersona.h"
#include "Main/Social/sfl_psel.h"
#include "Main/Social/sfl_res.h"

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
static inline u8* sflPselAddOffset(u32 offset, u8* base)
{
    return (u8*)((u32)offset + (u32)base);
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








extern void FUN_0021d890(void*, const void*);







// FUN_00215A50
void func_00215a50(u32* work)
{
    if (sSflPsel != NULL)
    {
        K_ASSERT(0, 0xd1);
    }
    work[0] = 0;
    work[1] = 0;
    sSflPsel = work;
}

// FUN_00215AA0
void func_00215aa0(void)
{
    K_ASSERT(sSflPsel != NULL, 0xcb);
    if ((*sSflPsel & 1) != 0)
    {
        func_00216800();
    }
    sSflPsel = NULL;
}

/* W418 probe negatives: func_00215b00 declaration permutations held nd762/1204B; signed-width permutations held nd762/1204B. func_002168f0 declaration permutations held nd716/1992B. func_00217780 color-width probes were nd1583/2320B or nd1582/2320B versus baseline nd1582/2320B. */
/* opt_lifetimes on: func_00215b00 nd765 -> nd748, object 1216 -> 1212/1216; measured W328. W415 reused the cached texture for the final frame lookup (calls 48 -> 47, nd 748 -> 762, object 1212 -> 1204/1216). */
#pragma opt_lifetimes on
// FUN_00215B00
asm void func_00215b00(void)
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
  .word 0x8f82b608
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e228
  .word 0x240500cb
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b608
  .word 0x0c083b14
  .word 0x00000000
  .word 0x0040902d
  .word 0x24040001
  .word 0x0c05d200
  .word 0x00000000
  .word 0x0040a82d
  .word 0x0c05d5bc
  .word 0x00000000
  .word 0x3056ffff
  .word 0x0c05d504
  .word 0x00000000
  .word 0x3042ffff
  .word 0xae220008
  .word 0x8e330004
  .word 0x0000a02d
  .word 0x10000011
  .word 0x00000000
  .word 0x00131100
  .word 0x02221021
  .word 0x24500010
  .word 0x0014243c
  .word 0x0004243f
  .word 0x0c05d2a4
  .word 0x00000000
  .word 0xae000000
  .word 0x94430002
  .word 0xa6030004
  .word 0x94430002
  .word 0x96a20002
  .word 0x10620002
  .word 0x00000000
  .word 0x26730001
  .word 0x26940001
  .word 0x0296102a
  .word 0x1440ffee
  .word 0x00000000
  .word 0xae330004
  .word 0x3c023f80
  .word 0xae225c40
  .word 0x8e220004
  .word 0x28410009
  .word 0x14200005
  .word 0x00000000
  .word 0x24020008
  .word 0xae22000c
  .word 0x10000002
  .word 0x00000000
  .word 0xae22000c
  .word 0x0000202d
  .word 0x10000005
  .word 0x00000000
  .word 0x00041080
  .word 0x02221021
  .word 0xac4452e0
  .word 0x24840001
  .word 0x8e230004
  .word 0x0083102a
  .word 0x1440fff9
  .word 0x00000000
  .word 0xae235330
  .word 0x0000982d
  .word 0x1000001d
  .word 0x00000000
  .word 0x00131100
  .word 0x02221021
  .word 0x24500010
  .word 0x8c420010
  .word 0x30420002
  .word 0x1040000b
  .word 0x00000000
  .word 0x96030004
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021840
  .word 0x8f82b730
  .word 0x00431021
  .word 0x90420003
  .word 0xae02000c
  .word 0x10000006
  .word 0x00000000
  .word 0x96040004
  .word 0x0c05d268
  .word 0x00000000
  .word 0x90420004
  .word 0xae02000c
  .word 0x96040004
  .word 0x0c05cca0
  .word 0x00000000
  .word 0x304200ff
  .word 0xae020008
  .word 0x26730001
  .word 0x8e220004
  .word 0x0262102a
  .word 0x1440ffe1
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050031
  .word 0x0c087328
  .word 0x00000000
  .word 0x26245340
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x24040028
  .word 0x0c087a80
  .word 0x00000000
  .word 0x26245340
  .word 0x46000306
  .word 0x0c087ab0
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050032
  .word 0x0c087328
  .word 0x00000000
  .word 0x26245440
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x24040028
  .word 0x0c087a80
  .word 0x00000000
  .word 0x26245440
  .word 0x46000306
  .word 0x0c087ab0
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050038
  .word 0x0c087328
  .word 0x00000000
  .word 0x26245540
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x24040028
  .word 0x0c087a80
  .word 0x00000000
  .word 0x26245540
  .word 0x46000306
  .word 0x0c087ab0
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050039
  .word 0x0c087328
  .word 0x00000000
  .word 0x26245640
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x24040028
  .word 0x0c087a80
  .word 0x00000000
  .word 0x26245640
  .word 0x46000306
  .word 0x0c087ab0
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050033
  .word 0x0c087328
  .word 0x00000000
  .word 0x26245740
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x24040028
  .word 0x0c087a80
  .word 0x00000000
  .word 0x26245740
  .word 0x46000306
  .word 0x0c087ab0
  .word 0x00000000
  .word 0xae205c5c
  .word 0xae205c68
  .word 0xae205c60
  .word 0x8e22000c
  .word 0xae225c64
  .word 0x8e220004
  .word 0xae225c6c
  .word 0x8e225c5c
  .word 0x34420004
  .word 0xae225c5c
  .word 0x0000182d
  .word 0x10000007
  .word 0x00000000
  .word 0x00031080
  .word 0x02221021
  .word 0xa0405c70
  .word 0xa0405c71
  .word 0xa0405c72
  .word 0x24630001
  .word 0x28620008
  .word 0x1440fff8
  .word 0x00000000
  .word 0xa2205c73
  .word 0xa2205c77
  .word 0xa2205c7b
  .word 0xa2205c7f
  .word 0xa2205c87
  .word 0xa2205c83
  .word 0xa2205c8f
  .word 0xa2205c8b
  .word 0x0c085c30
  .word 0x00000000
  .word 0x0c085d84
  .word 0x00000000
  .word 0x0c098294
  .word 0x00000000
  .word 0x0c0861ec
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405001d
  .word 0x0c087328
  .word 0x00000000
  .word 0x26245f90
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x24040028
  .word 0x0c087a80
  .word 0x00000000
  .word 0x26245f90
  .word 0x46000306
  .word 0x0c087ab0
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405001e
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x26245c90
  .word 0x0200282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x24040028
  .word 0x0c087a80
  .word 0x00000000
  .word 0x26245c90
  .word 0x46000306
  .word 0x0c087ab0
  .word 0x00000000
  .word 0x26245d90
  .word 0x0200282d
  .word 0x24060002
  .word 0x0c0878e0
  .word 0x00000000
  .word 0x24040028
  .word 0x0c087a80
  .word 0x00000000
  .word 0x26245d90
  .word 0x46000306
  .word 0x0c087ab0
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405001f
  .word 0x0c087328
  .word 0x00000000
  .word 0x26245e90
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x24040028
  .word 0x0c087a80
  .word 0x00000000
  .word 0x26245e90
  .word 0x46000306
  .word 0x0c087ab0
  .word 0x00000000
  .word 0xae205334
  .word 0xae205338
  .word 0x8e230000
  .word 0x34630020
  .word 0xae230000
  .word 0x34630001
  .word 0xae230000
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
  .word 0x00000000
}
#pragma opt_lifetimes reset

/* SocialBig W419 negative: nested result switch case order 0/1 produced nd929/2108B versus baseline nd883/2100B; reversed order produced nd930/2108B. */
// FUN_00215FC0
asm void func_00215fc0(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82b608
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e228
  .word 0x240500cb
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b608
  .word 0x0c098348
  .word 0x00000000
  .word 0x8e240000
  .word 0x00801827
  .word 0x30630001
  .word 0x146001f5
  .word 0x00000000
  .word 0x30820004
  .word 0x10400031
  .word 0x00000000
  .word 0x8e235c48
  .word 0x24020001
  .word 0x1062001c
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x8e225c44
  .word 0x24430001
  .word 0xae235c44
  .word 0x24020006
  .word 0x14620005
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402fffb
  .word 0x00621024
  .word 0xae220000
  .word 0xc6205c44
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0xe6205c40
  .word 0x10000012
  .word 0x00000000
  .word 0x8e225c44
  .word 0x24430001
  .word 0xae235c44
  .word 0x24020006
  .word 0x14620005
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402fffb
  .word 0x00621024
  .word 0xae220000
  .word 0xc6205c44
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0xe6205c40
  .word 0x8e220000
  .word 0x30420010
  .word 0x10400033
  .word 0x00000000
  .word 0x8e235c54
  .word 0x24020001
  .word 0x1062001e
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000002b
  .word 0x00000000
  .word 0x8e225c50
  .word 0x24430001
  .word 0xae235c50
  .word 0x24020003
  .word 0x14620007
  .word 0x00000000
  .word 0x0c0866c0
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402ffef
  .word 0x00621024
  .word 0xae220000
  .word 0xc6205c50
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0xe6205c4c
  .word 0x10000012
  .word 0x00000000
  .word 0x8e225c50
  .word 0x24430001
  .word 0xae235c50
  .word 0x24020003
  .word 0x14620005
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402ffef
  .word 0x00621024
  .word 0xae220000
  .word 0xc6205c50
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0xe6205c4c
  .word 0x0000902d
  .word 0x8e225334
  .word 0x2c410007
  .word 0x1020017b
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637530
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e235338
  .word 0x24020002
  .word 0x106200c4
  .word 0x00000000
  .word 0x24070001
  .word 0x10670042
  .word 0x00000000
  .word 0x10600010
  .word 0x00000000
  .word 0x24020004
  .word 0x1062000a
  .word 0x00000000
  .word 0x24020003
  .word 0x10620003
  .word 0x00000000
  .word 0x10000163
  .word 0x00000000
  .word 0x24620001
  .word 0xae225338
  .word 0x1000015f
  .word 0x00000000
  .word 0xae205338
  .word 0x1000015c
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420010
  .word 0x1440001f
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30620040
  .word 0x10400005
  .word 0x00000000
  .word 0x0c0866e4
  .word 0x00000000
  .word 0x1000014f
  .word 0x00000000
  .word 0x30620080
  .word 0x10400013
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e225c68
  .word 0x00021080
  .word 0x00511021
  .word 0x8c4252e0
  .word 0x00021100
  .word 0x02221021
  .word 0x94440014
  .word 0x0c09ef00
  .word 0x00000000
  .word 0x24020001
  .word 0xae225338
  .word 0x1000013a
  .word 0x00000000
  .word 0x8e235c5c
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae225c5c
  .word 0x26245c5c
  .word 0x0c092898
  .word 0x00000000
  .word 0x8e225c5c
  .word 0x30420001
  .word 0x1040012f
  .word 0x00000000
  .word 0x36520003
  .word 0x1000012c
  .word 0x00000000
  .word 0x0c09efd8
  .word 0x00000000
  .word 0x14400128
  .word 0x00000000
  .word 0x0c09f008
  .word 0x00000000
  .word 0x14400124
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30620040
  .word 0x10400008
  .word 0x00000000
  .word 0xae206090
  .word 0x0c09efec
  .word 0x00000000
  .word 0x24020002
  .word 0xae225338
  .word 0x10000118
  .word 0x00000000
  .word 0x30620020
  .word 0x1040000f
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c042938
  .word 0x00000000
  .word 0x24020001
  .word 0xae226090
  .word 0x0c09efec
  .word 0x00000000
  .word 0x24020002
  .word 0xae225338
  .word 0x10000107
  .word 0x00000000
  .word 0x30620008
  .word 0x1040002d
  .word 0x00000000
  .word 0x8e235c68
  .word 0x8e225c6c
  .word 0x2442ffff
  .word 0x0062082a
  .word 0x10200013
  .word 0x00000000
  .word 0x24650001
  .word 0xae255c68
  .word 0x8e245c64
  .word 0x8e235c60
  .word 0x00641021
  .word 0x2442ffff
  .word 0x00a2102a
  .word 0x1440000c
  .word 0x00000000
  .word 0x8e225c6c
  .word 0x00441023
  .word 0x0062082a
  .word 0x10200007
  .word 0x00000000
  .word 0x24620001
  .word 0xae225c60
  .word 0x10000003
  .word 0x00000000
  .word 0xae205c68
  .word 0xae205c60
  .word 0x36520003
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e225c68
  .word 0x00021080
  .word 0x00511021
  .word 0x8c4252e0
  .word 0x00021100
  .word 0x02221021
  .word 0x94440014
  .word 0x0c09ef44
  .word 0x00000000
  .word 0x100000d8
  .word 0x00000000
  .word 0x30620004
  .word 0x104000d5
  .word 0x00000000
  .word 0x8e225c68
  .word 0x1840000d
  .word 0x00000000
  .word 0x2443ffff
  .word 0xae235c68
  .word 0x8e225c60
  .word 0x0043082a
  .word 0x1420000e
  .word 0x00000000
  .word 0x1840000c
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae225c60
  .word 0x10000008
  .word 0x00000000
  .word 0x8e225c6c
  .word 0x2442ffff
  .word 0xae225c68
  .word 0x8e235c6c
  .word 0x8e225c64
  .word 0x00621023
  .word 0xae225c60
  .word 0x36520003
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e225c68
  .word 0x00021080
  .word 0x00511021
  .word 0x8c4252e0
  .word 0x00021100
  .word 0x02221021
  .word 0x94440014
  .word 0x0c09ef44
  .word 0x00000000
  .word 0x100000ad
  .word 0x00000000
  .word 0x0c09f008
  .word 0x00000000
  .word 0x144000a9
  .word 0x00000000
  .word 0x0c09ef7c
  .word 0x00000000
  .word 0x8e236090
  .word 0x24020001
  .word 0x10620009
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000009f
  .word 0x00000000
  .word 0x0c0866e4
  .word 0x00000000
  .word 0x1000009b
  .word 0x00000000
  .word 0x24020003
  .word 0xae225338
  .word 0x10000097
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1e64
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400090
  .word 0x00000000
  .word 0x24020002
  .word 0xae225334
  .word 0x1000008c
  .word 0x00000000
  .word 0x0c0f1e34
  .word 0x00000000
  .word 0x14400088
  .word 0x00000000
  .word 0x0c0f1d84
  .word 0x00000000
  .word 0x24040001
  .word 0x10440041
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x1000007f
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x8e225c68
  .word 0x00021080
  .word 0x00511021
  .word 0x8c4252e0
  .word 0x00021100
  .word 0x02221021
  .word 0x24500010
  .word 0x0c085cb0
  .word 0x00000000
  .word 0x8e245c68
  .word 0x10000006
  .word 0x00000000
  .word 0x00041080
  .word 0x02221821
  .word 0x8c6252e4
  .word 0xac6252e0
  .word 0x24840001
  .word 0x8e225330
  .word 0x2443ffff
  .word 0x0083102a
  .word 0x1440fff7
  .word 0x00000000
  .word 0xae235330
  .word 0x28610009
  .word 0x14200005
  .word 0x00000000
  .word 0x24020008
  .word 0xae22000c
  .word 0x10000002
  .word 0x00000000
  .word 0xae23000c
  .word 0xae205c68
  .word 0xae205c60
  .word 0x8e22000c
  .word 0xae225c64
  .word 0x8e225330
  .word 0xae225c6c
  .word 0x36520002
  .word 0x8e020000
  .word 0x34420001
  .word 0xae020000
  .word 0x0c085c30
  .word 0x00000000
  .word 0x96040004
  .word 0x0c05cc88
  .word 0x00000000
  .word 0x0000202d
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x2404002f
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x24020003
  .word 0xae225334
  .word 0x10000043
  .word 0x00000000
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x0c0861ec
  .word 0x00000000
  .word 0x0c0866ac
  .word 0x00000000
  .word 0xae205334
  .word 0xae205338
  .word 0x10000039
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0f1e64
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400032
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x8e235330
  .word 0x8e220008
  .word 0x2442ffff
  .word 0x14620007
  .word 0x00000000
  .word 0x0c09831c
  .word 0x00000000
  .word 0x24020006
  .word 0xae225334
  .word 0x10000024
  .word 0x00000000
  .word 0x0c0861ec
  .word 0x00000000
  .word 0x0c0866ac
  .word 0x00000000
  .word 0xae205334
  .word 0xae205338
  .word 0x1000001c
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0f1e64
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400015
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x0c0861ec
  .word 0x00000000
  .word 0x0c0866ac
  .word 0x00000000
  .word 0xae205334
  .word 0x1000000b
  .word 0x00000000
  .word 0x0c098334
  .word 0x00000000
  .word 0x14400007
  .word 0x00000000
  .word 0x24020005
  .word 0xae225334
  .word 0x8e230000
  .word 0x2402ffdf
  .word 0x00621024
  .word 0xae220000
  .word 0x32420001
  .word 0x10400003
  .word 0x00000000
  .word 0x0c085cd4
  .word 0x00000000
  .word 0x32420002
  .word 0x10400003
  .word 0x00000000
  .word 0x0c085d84
  .word 0x00000000
  .word 0x0c085de0
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
}
// FUN_00216800
void func_00216800(void)
{
    u32* work;

    K_ASSERT(sSflPsel != NULL, 0xcb);
    work = sSflPsel;
    K_ASSERT((*work & 1) != 0, 0x2af);
    sflPsel00260bd0();
    func_002172c0();
    if ((*work & 8) != 0)
    {
        func_00219b00();
    }
    *work &= ~1u;
}

// FUN_002168A0
u32 func_002168a0(void)
{
    K_ASSERT(sSflPsel != NULL, 0xcb);
    return *sSflPsel & 0x20;
}

/* opt_lifetimes on: func_002168f0 nd777 -> nd716, object 1992 -> 1992/2000; measured W328. */
#pragma opt_lifetimes on
// FUN_002168F0
asm void func_002168f0(void)
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
  .word 0x8f82b608
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e228
  .word 0x240500cb
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b608
  .word 0x0c098380
  .word 0x00000000
  .word 0x8e230000
  .word 0x00601827
  .word 0x30630001
  .word 0x146001d3
  .word 0x00000000
  .word 0x0c083b14
  .word 0x00000000
  .word 0x0040902d
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
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
  .word 0x0000982d
  .word 0x10000016
  .word 0x00000000
  .word 0x8e225c60
  .word 0x02622821
  .word 0x001310c0
  .word 0x00531021
  .word 0x00021100
  .word 0x00531021
  .word 0x00021100
  .word 0x02222021
  .word 0x00051080
  .word 0x02221021
  .word 0x8c4252e0
  .word 0x00021100
  .word 0x02221821
  .word 0x8e225c68
  .word 0x00453026
  .word 0x2cc60001
  .word 0x24840150
  .word 0x24650010
  .word 0x0c0864dc
  .word 0x00000000
  .word 0x26730001
  .word 0x8e22000c
  .word 0x0262102a
  .word 0x1440ffe8
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
  .word 0x0240202d
  .word 0x24050031
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c140096
  .word 0x26940090
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c130096
  .word 0x2673009c
  .word 0x26245340
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26245340
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050032
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26245440
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26245440
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
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
  .word 0x0240202d
  .word 0x24050038
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26245540
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26245540
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050039
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26245640
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26245640
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
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
  .word 0x0240202d
  .word 0x24050033
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26245740
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26245740
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
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
  .word 0x0240202d
  .word 0x24050027
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000a82d
  .word 0x10000017
  .word 0x00000000
  .word 0x00151200
  .word 0x02221021
  .word 0x24545840
  .word 0x3c130096
  .word 0x2673009c
  .word 0x0280202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26b50001
  .word 0x2aa20002
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050027
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
  .word 0x0000a02d
  .word 0x10000017
  .word 0x00000000
  .word 0x00141200
  .word 0x02221021
  .word 0x24555a40
  .word 0x3c130096
  .word 0x2673009c
  .word 0x02a0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26940001
  .word 0x2a820002
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420008
  .word 0x10400009
  .word 0x00000000
  .word 0x8e225c58
  .word 0x00021100
  .word 0x02221021
  .word 0x262449d0
  .word 0x24450010
  .word 0x0000302d
  .word 0x0c0864dc
  .word 0x00000000
  .word 0x3c140096
  .word 0x26940090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e820000
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
  .word 0x0240202d
  .word 0x2405001e
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c130096
  .word 0x2673009c
  .word 0x26245c90
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26245c90
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26245d90
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26245d90
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405001f
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26245e90
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26245e90
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
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
  .word 0x8e235330
  .word 0x28610009
  .word 0x1420001e
  .word 0x00000000
  .word 0x0240202d
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
  .word 0x0260802d
  .word 0x26245f90
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26245f90
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
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
}
#pragma opt_lifetimes reset

// FUN_002170C0
void func_002170c0(void)
{
    u8* work;
    s32 i;

    K_ASSERT(sSflPsel != NULL, 0xcb);
    work = (u8*)sSflPsel;
    func_003b0e70(1);
    func_003b0e90(2);
    for (i = 0; i < (s32)*(u32*)(work + 0xc); i++)
    {
        u32 listIndex = i + *(u32*)(work + 0x5c60);
        u32 entryIndex = *(u32*)(work + 0x52e0 + listIndex * 4);
        u8* entry = work + 0x10 + entryIndex * 0x10;
        u8* panel = work + 0x150 + i * 0x910;
        s32 group;
        u32 handle;

        if (*(u32*)(work + 0x5c68) == listIndex)
            group = 6;
        else
            group = 0;
        uGpffffb948 = 0x78;
        handle = func_003b0970(func_00173220(*(u16*)(entry + 4)), 1,
                               group, 0, 0);
        uGpffffb948 = 0;
        frFontSetTextScale(handle, *(f32*)D_00960088 - func_0021ea00(0x28));
        *(u32*)(panel + 0x900) = handle;
    }
    func_003b0e90(1);
    func_003b0e70(2);
    for (i = 0; i < (s32)*(u32*)(work + 0xc); i++)
    {
        u8* panel = work + 0x150 + i * 0x910;
        func_003b0d70(*(u32*)(panel + 0x900), 0x1220,
                      (s32)(i * 0x21 + 0x5d) * 8);
        func_003b0e20(
            *(u32*)(panel + 0x900),
            *(u32*)(work + 0x5c68) == i + *(u32*)(work + 0x5c60) ?
                0xffffffffu : 0x64648cffu);
    }
}

// FUN_002172C0
void func_002172c0(void)
{
    u8* work;
    s32 i;

    K_ASSERT(sSflPsel != NULL, 0xcb);
    work = (u8*)sSflPsel;
    for (i = 0; i < *(s32*)(work + 0xc); i++)
    {
        func_003b0170(*(u32*)(work + 0xa50 + i * 0x910));
    }
}

// FUN_00217350
void func_00217350(void)
{
    u8* work;
    s32 i;

    K_ASSERT(sSflPsel != NULL, 0xcb);
    K_ASSERT(sSflPsel != NULL, 0xcb);
    work = (u8*)sSflPsel;
    for (i = 0; i < (s32)*(u32*)(work + 0xc); i++)
    {
        func_003b0170(*(u32*)(work + 0xa50 + i * 0x910));
    }
    func_002170c0();
}

// FUN_00217410
void func_00217410(u16* ids, s32* count)
{
    u8* work;
    s32 i;
    s32 output;

    K_ASSERT(sSflPsel != NULL, 0xcb);
    work = (u8*)sSflPsel;
    output = 0;
    for (i = 0; i < (s32)*(u32*)(work + 4); i++)
    {
        u8* entry = work + 0x10 + i * 0x10;
        u32 flags = *(u32*)entry;
        if (!(~flags & 2) && !(flags & 1))
        {
            ids[output++] = *(u16*)(entry + 4);
        }
    }
    *count = output;
}

// FUN_002174D0
void func_002174d0(u16* ids, s32* count)
{
    u8* work;
    s32 i;
    s32 output;

    K_ASSERT(sSflPsel != NULL, 0xcb);
    work = (u8*)sSflPsel;
    output = 0;
    for (i = 0; i < (s32)*(u32*)(work + 4); i++)
    {
        u8* entry = work + 0x10 + i * 0x10;
        u32 flags = *(u32*)entry;
        if (!(flags & 2) && !(~flags & 1))
        {
            ids[output++] = *(u16*)(entry + 4);
        }
    }
    *count = output;
}

// FUN_00217590
void func_00217590(u16 id)
{
    u8* work;
    u8* entry;

    K_ASSERT(sSflPsel != NULL, 0xcb);
    work = (u8*)sSflPsel;
    entry = work + 0x10 + *(u32*)(work + 4) * 0x10;
    *(u32*)entry = 0;
    *(u16*)(entry + 4) = id;
    *(u32*)entry |= 2;
    (*(u32*)(work + 4))++;
}

// FUN_00217610
void func_00217610(void)
{
    u8* work;
    s32 i;

    K_ASSERT(sSflPsel != NULL, 0xcb);
    work = (u8*)sSflPsel;
    (void)sflResGetPersonaChangeSprite();
    for (i = 0; i < (s32)*(u32*)(work + 0xc); i++)
    {
        u32 listIndex = i + *(u32*)(work + 0x5c60);
        u32 entryIndex = *(u32*)(work + 0x52e0 + listIndex * 4);
        func_00218810(work + 0x150 + i * 0x910,
                      (u32*)(work + 0x10 + entryIndex * 0x10),
                      *(u32*)(work + 0x5c68) == listIndex);
    }
    func_00218250(work + 0x5840, 2, *(u32*)(work + 0x5330) + 1);
    for (i = 0; i < 2; i++)
    {
        func_0021eac0(work + 0x5840 + i * 0x100, func_0021ea00(0x28));
    }
    func_00218250(work + 0x5a40, 2, *(u32*)(work + 8));
    for (i = 0; i < 2; i++)
    {
        func_0021eac0(work + 0x5a40 + i * 0x100, func_0021ea00(0x28));
    }
}
// FUN_00217780
asm void func_00217780(void)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x8f82b608
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e228
  .word 0x240500cb
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b608
  .word 0x0c083b14
  .word 0x00000000
  .word 0x0040902d
  .word 0x0000802d
  .word 0x10000024
  .word 0x00000000
  .word 0x8e225c60
  .word 0x02022021
  .word 0x00041080
  .word 0x02221021
  .word 0x8c4252e0
  .word 0x00021100
  .word 0x02221021
  .word 0x24450010
  .word 0x3c024346
  .word 0xafa20070
  .word 0x00101140
  .word 0x00501021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00074
  .word 0x001010c0
  .word 0x00501021
  .word 0x00021100
  .word 0x00501021
  .word 0x00021100
  .word 0x02221821
  .word 0x8e225c68
  .word 0x00443026
  .word 0x2cc60001
  .word 0x24640150
  .word 0x27a70070
  .word 0xc62c5c40
  .word 0x0c0862c8
  .word 0x00000000
  .word 0x26100001
  .word 0x8e22000c
  .word 0x0202102a
  .word 0x1440ffda
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050031
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034370
  .word 0xafa30050
  .word 0x3c034190
  .word 0xafa30054
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00058
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0005c
  .word 0x26245340
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050032
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0343e0
  .word 0xafa30050
  .word 0x3c034190
  .word 0xafa30054
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00058
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0005c
  .word 0x26245440
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0xc6215c40
  .word 0x240200ff
  .word 0xa3a2007c
  .word 0xa3a2007d
  .word 0xa3a2007e
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
  .word 0xa3a3007f
  .word 0x0000802d
  .word 0x10000008
  .word 0x00000000
  .word 0x00101200
  .word 0x02221021
  .word 0x24445340
  .word 0x27a5007c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020002
  .word 0x1440fff7
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050038
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034150
  .word 0xafa30050
  .word 0x3c0343cc
  .word 0xafa30054
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00058
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0005c
  .word 0x26245540
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050039
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0342a4
  .word 0xafa30050
  .word 0x3c0343cc
  .word 0xafa30054
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00058
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0005c
  .word 0x26245640
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0xc6215c40
  .word 0x240200ff
  .word 0xa3a2007c
  .word 0xa3a2007d
  .word 0xa3a2007e
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
  .word 0xa3a3007f
  .word 0x0000802d
  .word 0x10000008
  .word 0x00000000
  .word 0x00101200
  .word 0x02221021
  .word 0x24445540
  .word 0x27a5007c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020002
  .word 0x1440fff7
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050033
  .word 0x0c087328
  .word 0x00000000
  .word 0x240301a5
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00050
  .word 0x2403017b
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00054
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00058
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0005c
  .word 0x26245740
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0xc6215c40
  .word 0x240200ff
  .word 0xa3a2007c
  .word 0xa3a2007d
  .word 0xa3a2007e
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
  .word 0xa3a3007f
  .word 0x26245740
  .word 0x27a5007c
  .word 0x0c087654
  .word 0x00000000
  .word 0x240201f7
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00050
  .word 0x3c0243c0
  .word 0xafa20054
  .word 0x8e225330
  .word 0x24460001
  .word 0x26245840
  .word 0x24050002
  .word 0x27a70050
  .word 0x0c0860dc
  .word 0x00000000
  .word 0xc6215c40
  .word 0x24020071
  .word 0xa3a2007c
  .word 0x240200bf
  .word 0xa3a2007d
  .word 0x240200ff
  .word 0xa3a2007e
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
  .word 0xa3a3007f
  .word 0x0000802d
  .word 0x10000008
  .word 0x00000000
  .word 0x00101200
  .word 0x02221021
  .word 0x24445840
  .word 0x27a5007c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020002
  .word 0x1440fff7
  .word 0x00000000
  .word 0x2402022f
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00050
  .word 0x3c0243ca
  .word 0xafa20054
  .word 0x26245a40
  .word 0x24050002
  .word 0x8e260008
  .word 0x27a70050
  .word 0x0c08615c
  .word 0x00000000
  .word 0xc6215c40
  .word 0x24020004
  .word 0xa3a2007c
  .word 0x24020029
  .word 0xa3a2007d
  .word 0x24020046
  .word 0xa3a2007e
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
  .word 0xa3a3007f
  .word 0x0000802d
  .word 0x10000008
  .word 0x00000000
  .word 0x00101200
  .word 0x02221021
  .word 0x24445a40
  .word 0x27a5007c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020002
  .word 0x1440fff7
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420008
  .word 0x1040000f
  .word 0x00000000
  .word 0x3c024346
  .word 0xafa20070
  .word 0x3c0242f6
  .word 0xafa20074
  .word 0x8e225c58
  .word 0x00021100
  .word 0x02221021
  .word 0x262449d0
  .word 0x24450010
  .word 0x0000302d
  .word 0x27a70070
  .word 0xc62c5c4c
  .word 0x0c0862c8
  .word 0x00000000
  .word 0x8e235330
  .word 0x28610009
  .word 0x10200004
  .word 0x00000000
  .word 0x4480a000
  .word 0x10000010
  .word 0x00000000
  .word 0xc6205c60
  .word 0x46800060
  .word 0x3c024356
  .word 0x44820000
  .word 0x00000000
  .word 0x46000842
  .word 0x2462fff8
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x3c0242b2
  .word 0x44820000
  .word 0x00000000
  .word 0x46010500
  .word 0x0240202d
  .word 0x2405001d
  .word 0x0c087328
  .word 0x00000000
  .word 0x2403023d
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00050
  .word 0xe7b40054
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00058
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0005c
  .word 0x26245f90
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0xc6215c40
  .word 0x240200ff
  .word 0xa3a2007c
  .word 0xa3a2007d
  .word 0xa3a2007e
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
  .word 0xa3a3007f
  .word 0x26245f90
  .word 0x27a5007c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405001e
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x2403023d
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00050
  .word 0x3c0342aa
  .word 0xafa30054
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00058
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0005c
  .word 0x26245c90
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0x2402023d
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00050
  .word 0xc6000010
  .word 0x46800060
  .word 0x3c0242aa
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00054
  .word 0xc600000c
  .word 0x46800020
  .word 0xe7a00058
  .word 0x3c024374
  .word 0xafa2005c
  .word 0x26245d90
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405001f
  .word 0x0c087328
  .word 0x00000000
  .word 0x2403023d
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00050
  .word 0x3c0343ac
  .word 0xafa30054
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00058
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0005c
  .word 0x26245e90
  .word 0x27a50050
  .word 0x0c087638
  .word 0x00000000
  .word 0xc6215c40
  .word 0x240200ff
  .word 0xa3a2007c
  .word 0xa3a2007d
  .word 0xa3a2007e
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
  .word 0xa3a3007f
  .word 0x26245c90
  .word 0x27a5007c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26245d90
  .word 0x27a5007c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26245e90
  .word 0x27a5007c
  .word 0x0c087654
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_002180B0
u32 func_002180b0(u32 value)
{
    u32 texture;
    u32 frame;

    texture = sflResGetPersonaChangeSprite();
    switch (value)
    {
    case 1: frame = 10; break;
    case 2: frame = 0xb; break;
    case 3: frame = 0xc; break;
    case 4: frame = 0xd; break;
    case 5: frame = 0xe; break;
    case 6: frame = 0xf; break;
    case 7: frame = 0x10; break;
    case 8: frame = 0x11; break;
    case 9: frame = 0x12; break;
    case 10: frame = 0x13; break;
    case 0xb: frame = 0x14; break;
    case 0xc: frame = 0x15; break;
    case 0xd: frame = 0; break;
    case 0xe: frame = 1; break;
    case 0xf: frame = 2; break;
    case 0x10: frame = 3; break;
    case 0x11: frame = 4; break;
    case 0x12: frame = 5; break;
    case 0x13: frame = 6; break;
    case 0x14: frame = 7; break;
    case 0x15: frame = 8; break;
    case 0x16: frame = 9; break;
    default:
        func_0019d3f0(D_0068e228, 0x604);
        break;
    }
    return func_0021cca0(texture, frame);
}

// FUN_00218250
void func_00218250(void* glyphs, s32 capacity, u32 value)
{
    char text[256];
    s32 length;
    s32 i;

    func_00523ac8(text, (const char*)((u8*)&DAT_007ce420 - 0x1ffc));
    length = func_00524388(text);
    if (capacity < length)
    {
        K_ASSERT(0, 0x612);
    }
    for (i = 0; i < length; i++)
    {
        func_00218310((u8*)glyphs + i * 0x100, (s8)text[length - 1 - i] - 0x30);
    }
}

// FUN_00218310
void func_00218310(void* glyph, s32 digit)
{
    func_0021d3b0(glyph, func_0021cca0(sflResGetPersonaChangeSprite(), digit + 0x27));
}

// FUN_00218370
void func_00218370(void* glyphs, s32 capacity, u32 value, const f32* origin)
{
    s32 i;
    s32 length;
    s32 halfCapacity;
    s32 halfLength;
    f32 rect[4];
    char text[256];
    u32 texture;

    texture = sflResGetPersonaChangeSprite();
    func_00523ac8(text, (const char*)((u8*)&DAT_007ce420 - 0x1ffc), value);
    length = func_00524388(text);
    if (capacity < length)
    {
        K_ASSERT(0, 0x62c);
    }
    i = 0;
    halfCapacity = (capacity * 0x1b) / 2;
    halfLength = (length * 0x1b) / 2;
    for (; i < length; i++)
    {
        u8* frame = (u8*)(uintptr_t)func_0021cca0(texture, 0x27);
        rect[0] = origin[0] + (f32)((length - 1 - i) * 0x1b) +
                  (f32)halfCapacity - (f32)halfLength;
        rect[1] = origin[1];
        rect[2] = (f32)*(s32*)(frame + 0xc);
        rect[3] = (f32)*(s32*)(frame + 0x10);
        func_0021d8e0((u8*)glyphs + i * 0x100, rect);
    }
    for (; length < capacity; length++)
    {
        rect[0] = origin[0];
        rect[1] = origin[1];
        rect[2] = 0.0f;
        rect[3] = 0.0f;
        func_0021d8e0((u8*)glyphs + length * 0x100, rect);
    }
}

// FUN_00218570
void func_00218570(void* glyphs, s32 capacity, u32 value, const f32* origin)
{
    s32 i;
    s32 length;
    s32 halfCapacity;
    s32 halfLength;
    f32 rect[4];
    char text[256];
    u8* frame;
    u32 texture;

    texture = sflResGetPersonaChangeSprite();
    func_00523ac8(text, (const char*)((u8*)&DAT_007ce420 - 0x1ffc), value);
    length = func_00524388(text);
    if (capacity < length)
    {
        K_ASSERT(0, 0x64d);
    }
    i = 0;
    halfCapacity = (capacity * 0x13) / 2;
    halfLength = (length * 0x13) / 2;
    for (; i < length; i++)
    {
        frame = (u8*)(uintptr_t)func_0021cca0(texture, 0x27);
        rect[0] = origin[0] + (f32)((length - 1 - i) * 0x13) +
                  (f32)halfCapacity - (f32)halfLength;
        rect[1] = origin[1];
        rect[2] = (f32)((*(s32*)(frame + 0xc) * 0x49) / 100);
        rect[3] = (f32)((*(s32*)(frame + 0x10) * 0x49) / 100);
        func_0021d8e0((u8*)glyphs + i * 0x100, rect);
    }
    for (; length < capacity; length++)
    {
        rect[0] = origin[0];
        rect[1] = origin[1];
        rect[2] = 0.0f;
        rect[3] = 0.0f;
        func_0021d8e0((u8*)glyphs + length * 0x100, rect);
    }
}

// FUN_002187B0
void func_002187b0(void)
{
    u32* work;

    K_ASSERT(sSflPsel != NULL, 0xcb);
    work = sSflPsel;
    *(u32*)((u8*)work + 0x5c44) = 0;
    *(u32*)((u8*)work + 0x5c48) = 1;
    *work |= 4;
}

// FUN_00218810
void func_00218810(void* panel, const u32* entry, s32 selected)
{
    u8* destination;
    u32 texture;
    u32 frameIndex;
    u32 frame;
    u32 value;

    K_ASSERT(sSflPsel != NULL, 0xcb);
    destination = (u8*)panel;
    texture = sflResGetPersonaChangeSprite();
    if (selected != 0)
    {
        frameIndex = 0x1b;
        value = 0x1c;
    }
    else if ((*entry & 2) != 0)
    {
        frameIndex = 0x23;
        value = 0x24;
    }
    else
    {
        frameIndex = 0x21;
        value = 0x22;
    }
    frame = func_0021cca0(texture, frameIndex);
    func_0021d3b0(destination, frame);
    func_0021eac0(destination, func_0021ea00(0x28));
    func_0021e380(destination + 0x100, frame, 1);
    func_0021eac0(destination + 0x100, func_0021ea00(0x28));
    func_0021d3b0(destination + 0x200, func_0021cca0(texture, value));
    func_0021eac0(destination + 0x200, func_0021ea00(0x28));
    if (selected != 0)
    {
        if ((*entry & 2) != 0)
            frameIndex = 0x3b;
        else
            frameIndex = 0x18;
    }
    else
    {
        frameIndex = 0x17;
    }
    func_0021d3b0(destination + 0x300, func_0021cca0(texture, frameIndex));
    func_0021eac0(destination + 0x300, func_0021ea00(0x28));
    func_0021d3b0(destination + 0x400, func_002180b0(entry[2]));
    func_0021eac0(destination + 0x400, func_0021ea00(0x28));
    if ((*entry & 2) != 0)
    {
        func_0021d3b0(destination + 0x500, func_0021cca0(texture, 0x25));
        func_0021eac0(destination + 0x500, func_0021ea00(0x28));
    }
    frameIndex = selected != 0 ? 0x1a : 0x19;
    func_0021d3b0(destination + 0x600, func_0021cca0(texture, frameIndex));
    func_0021eac0(destination + 0x600, func_0021ea00(0x28));
    func_00238980(destination + 0x700, 2, entry[3], selected != 0 ? 1 : 2);
    func_0021eac0(destination + 0x700, func_0021ea00(0x28));
    func_0021eac0(destination + 0x800, func_0021ea00(0x28));
}

#pragma optimization_level 2
// FUN_00218B20
void func_00218b20(void* panel, const u32* entry, s32 selected,
                   const f32* origin, f32 alpha)
{
    u8* destination;
    u32 texture;
    struct {
        f32 rect[4];
        u32 reserved[7];
        u8 color[4];
    } scratch;
#define rect scratch.rect
#define color scratch.color
    f32 x;
    f32 y;
    u8 alphaByte;
    u8* frame;
    void* handle;
    u32 colorValue;
    s32 i;
    s32 j;
    u32 alphaValueSelected;
    u32 alphaValueUnselected;
    s32 frameId;
    s32 mode;
    K_ASSERT(sSflPsel != NULL, 0xcb);
    destination = (u8*)panel;
    texture = sflResGetPersonaChangeSprite();
    x = origin[0] - 198.0f;
    y = origin[1] - 90.0f;
    frame = (u8*)(uintptr_t)func_0021cca0(texture, 0x21);
    rect[0] = x + 198.0f;
    rect[1] = y + 90.0f;
    rect[2] = (f32)*(s32*)(frame + 0xc);
    rect[3] = (f32)*(s32*)(frame + 0x10);
    func_0021d8e0(destination, rect);
    rect[0] = x + 198.0f + (f32)*(s32*)(frame + 0xc);
    rect[1] = y + 90.0f;
    rect[2] = 349.0f;
    rect[3] = (f32)*(s32*)(frame + 0x10);
    func_0021d8e0(destination + 0x100, rect);
    frame = (u8*)(uintptr_t)func_0021cca0(texture, 0x22);
    rect[0] = x + 557.0f;
    rect[1] = y + 90.0f;
    rect[2] = (f32)*(s32*)(frame + 0xc);
    rect[3] = (f32)*(s32*)(frame + 0x10);
    func_0021d8e0(destination + 0x200, rect);
    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    alphaByte = (u8)(alpha * 255.0f);
    color[3] = alphaByte;
    for (i = 0; i < 3; i++) {
        func_0021d950(destination + i * 0x100, color);
    }
    frame = (u8*)(uintptr_t)func_0021cca0(texture, 0x17);
    rect[0] = x + 202.0f;
    rect[1] = y + 93.0f;
    rect[2] = (f32)*(s32*)(frame + 0xc);
    rect[3] = (f32)*(s32*)(frame + 0x10);
    func_0021d8e0(destination + 0x300, rect);
    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = (u8)(alpha * 255.0f);
    func_0021d950(destination + 0x300, color);
    frame = (u8*)(uintptr_t)func_002180b0(entry[2]);
    rect[0] = x + 202.0f;
    rect[1] = y + 93.0f;
    rect[2] = (f32)*(s32*)(frame + 0xc);
    rect[3] = (f32)*(s32*)(frame + 0x10);
    func_0021d8e0(destination + 0x400, rect);
    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = (u8)(alpha * 255.0f);
    func_0021d950(destination + 0x400, color);
    if (selected != 0)
    {
        color[0] = 4;
        color[1] = 0x29;
        color[2] = 0x46;
    }
    else if ((*entry & 2) != 0)
    {
        color[0] = 0xff;
        color[1] = 0xfe;
        color[2] = 0xbb;
    }
    else
    {
        color[0] = 0x71;
        color[1] = 0xbf;
        color[2] = 0xff;
    }
    color[3] = (u8)(alpha * 255.0f);
    func_0021d950(destination + 0x400, color);
    if ((*entry & 2) != 0)
    {
        frame = (u8*)(uintptr_t)func_0021cca0(texture, 0x25);
        rect[0] = x + 148.0f;
        rect[1] = y + 108.0f;
        rect[2] = (f32)*(s32*)(frame + 0xc);
        rect[3] = (f32)*(s32*)(frame + 0x10);
        func_0021d8e0(destination + 0x500, rect);
        color[0] = 0xff;
        color[1] = 0xff;
        color[2] = 0xff;
        color[3] = (u8)(alpha * 255.0f);
        func_0021d950(destination + 0x500, color);
    }
    if (selected != 0)
    {
        frameId = 0x1a;
    }
    else
    {
        frameId = 0x19;
    }
    frame = (u8*)(uintptr_t)func_0021cca0(texture, frameId);
    rect[0] = x + 482.0f;
    rect[1] = y + 105.0f;
    rect[2] = (f32)*(s32*)(frame + 0xc);
    rect[3] = (f32)*(s32*)(frame + 0x10);
    func_0021d8e0(destination + 0x600, rect);
    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = (u8)(alpha * 255.0f);
    func_0021d950(destination + 0x600, color);
    if (selected != 0)
    {
        mode = 1;
    }
    else
    {
        mode = 2;
    }
    rect[0] = x + 514.0f;
    rect[1] = y + 105.0f;
    handle = func_00238dc0(destination + 0x700, 2, entry[3], mode, rect);
    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = (u8)(alpha * 255.0f);
    for (j = 0; j < 2; j++) {
        func_0021d950(destination + 0x700 + j * 0x100, color);
    }
    rect[0] = x + 290.0f;
    rect[1] = y + 93.0f;
    func_003b0d70(*(u32*)(destination + 0x900),
                  (s32)rect[0] << 4, (s32)rect[1] << 3);
    if (selected != 0)
    {
        alphaValueSelected = (u32)(alpha * 255.0f);
        colorValue = alphaValueSelected | 0xffffff00u;
    }
    else
    {
        alphaValueUnselected = (u32)(alpha * 255.0f);
        colorValue = alphaValueUnselected | 0x64648c00u;
    }
    func_003b0e20(*(u32*)(destination + 0x900), colorValue);
    (void)handle;
#undef color
#undef rect
}
/* SocialA W417 negatives: callback declaration permutations were byte-identical (nd 688, object 1520/1536); direct callback-global forms failed MWCC type checking. */
// FUN_00219370
asm void func_00219370(void* panel, const u32* entry, s32 selected)
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
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x00c0802d
  .word 0x8f82b608
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e228
  .word 0x240500cb
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0c083b14
  .word 0x00000000
  .word 0x0040a82d
  .word 0x3c140096
  .word 0x26940090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e820000
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
  .word 0x1200000e
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
  .word 0x2405001b
  .word 0x2416001c
  .word 0x1000001d
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420002
  .word 0x1040000e
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
  .word 0x24050023
  .word 0x24160024
  .word 0x1000000c
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
  .word 0x24050021
  .word 0x24160022
  .word 0x02a0202d
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c170096
  .word 0x26f70090
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ee20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c130096
  .word 0x2673009c
  .word 0x0240202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440100
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440100
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x02c0282d
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ee20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440200
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440200
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
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
  .word 0x1200000b
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420002
  .word 0x10400004
  .word 0x00000000
  .word 0x2405003b
  .word 0x10000005
  .word 0x00000000
  .word 0x24050018
  .word 0x10000002
  .word 0x00000000
  .word 0x24050017
  .word 0x02a0202d
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c160096
  .word 0x26d60090
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c130096
  .word 0x2673009c
  .word 0x26440300
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440300
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e240008
  .word 0x0c08602c
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440400
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440400
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x12000004
  .word 0x00000000
  .word 0x2405001a
  .word 0x10000002
  .word 0x00000000
  .word 0x24050019
  .word 0x02a0202d
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c130096
  .word 0x2673009c
  .word 0x26440600
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440600
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x12000004
  .word 0x00000000
  .word 0x24040001
  .word 0x10000002
  .word 0x00000000
  .word 0x24040002
  .word 0x0c08e450
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000017
  .word 0x00000000
  .word 0x00131200
  .word 0x02421021
  .word 0x24500700
  .word 0x3c160096
  .word 0x26d6009c
  .word 0x0200202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620002
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420002
  .word 0x10400028
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
  .word 0x02a0202d
  .word 0x24050025
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26440500
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440500
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e440900
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0ec4d8
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
}

// FUN_00219970
void func_00219970(void)
{
    u8* work;
    u32 listIndex;
    u32 listOffset;
    u8* entry;
    u32 handle;

    K_ASSERT(sSflPsel != NULL, 0xcb);
    work = (u8*)sSflPsel;
    listIndex = *(u32*)(work + 0x5c68);
    listOffset = listIndex * 4;
    entry = (u8*)(listOffset + (u32)work);
    *(u32*)(work + 0x5c58) = *(u32*)(entry + 0x52e0);
    entry = work + 0x10 + *(u32*)(work + 0x5c58) * 0x10;
    func_003b0e70(1);
    func_003b0e90(2);
    uGpffffb948 = 0x78;
    handle = func_003b0970(
        func_00173220(*(u16*)(entry + 4)),
        1, 0, 0, 0);
    uGpffffb948 = 0;
    func_003b0e90(1);
    func_003b0e70(2);
    frFontSetTextScale(handle, *(f32*)D_00960088 - func_0021ea00(0x28));
    *(u32*)(work + 0x52d0) = handle;
    func_00218810(work + 0x49d0,
                  (u32*)(work + 0x10 + *(u32*)(work + 0x5c58) * 0x10), 0);
    *(u32*)(work + 0x5c50) = 0;
    *(u32*)(work + 0x5c54) = 1;
    *(u32*)work |= 0x10;
    *(u32*)work |= 8;
}

// FUN_00219AB0
void func_00219ab0(void)
{
    u32* work;

    K_ASSERT(sSflPsel != NULL, 0xcb);
    work = sSflPsel;
    *(u32*)((u8*)work + 0x5c50) = 0;
    *(u32*)((u8*)work + 0x5c54) = 0;
    *work |= 0x10;
}

// FUN_00219B00
void func_00219b00(void)
{
    u32* work;

    K_ASSERT(sSflPsel != NULL, 0xcb);
    work = sSflPsel;
    K_ASSERT((*work & 8) != 0, 0x81b);
    func_003b0170(*(u32*)((u8*)work + 0x52d0));
    *work &= ~8u;
}

// FUN_00219B90
void func_00219b90(void)
{
    u8* work;
    u32 listIndex;
    u32 entryOffset;
    u8* entry;
    u8* resetWork;

    K_ASSERT(sSflPsel != NULL, 0xcb);
    work = (u8*)sSflPsel;
    listIndex = *(u32*)(work + 0x5c68);
    entryOffset = listIndex * 4;
    entry = (u8*)(entryOffset + (u32)work);
    entry = work + 0x10 + *(u32*)(entry + 0x52e0) * 0x10;
    if ((*(u32*)entry & 4) != 0)
    {
        func_003c7430(0x31);
        *(u32*)(work + 0x5334) = 4;
    }
    else
    {
        func_003c7430(0x2e);
        func_003c74e0(0x30);
        K_ASSERT(sSflPsel != NULL, 0xcb);
        resetWork = (u8*)sSflPsel;
        *(u32*)(resetWork + 0x5c44) = 0;
        *(u32*)(resetWork + 0x5c48) = 0;
        *(u32*)resetWork |= 4;
        func_00219970();
        *(u32*)(work + 0x5334) = 1;
    }
    func_0010a4e0(0, 0, 0, 1);
}
