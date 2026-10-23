#include "Main/Social/sfl_res.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"
#include "rw/rwplcore.h"

#include "h_cdvd.h"
extern void func_0021b4a0(void* resource);
extern void* memcpy(void* destination, const void* source, u32 size);
static const char sBrpBirthArchivePath[] = "battle/result/brp_birth.bin";
static const char sBrpCombineMessagePath[] = "facility/msg/msg_combine.bmd";
#define BRP_RES_ALLOC(size, flags) \
    (*(void* (**)(u32, u32))D_00960178)((size), (flags))
static u32* sBrpResWork; // puGpffffb644
static u32* sBrpRes334; // 007ce334
#include "Utils.h"
static u32* sBpEffect;
extern void func_0010a4e0_y2(s32, s32, s32, s32);
extern void* func_0021c790(void* frame);
extern void func_0021d890(void* destination, const f32* vertices);
extern void func_0021d8e0(void* destination, const f32* layout);
extern void func_0021d950(void* destination, const u8* color);
extern void func_0021eac0(void* destination, f32 value);
extern void func_0021eb80(void* destination, const f32* layout);
extern f32 DAT_007cad60;
extern f32 DAT_007cafec;
extern void RpSkyRenderStateSet(s32 state, u32 value);
extern u32 D_00960090[];
extern u32 D_0096009c[];
typedef void (*BpEffectSetRenderState)(s32 state, u32 value);
typedef void (*BpEffectRenderQuad)(void* quad, s32 layer, s32 group, s32 pass, s32 blend);


#pragma alias func_0010a4e0_y2 func_0010a4e0


static u32* sBrpBirthWork; // puGpffffb640

typedef struct BrpBirthVec
{
    f32 x;
    f32 y;
    f32 z;
} BrpBirthVec;

typedef struct BrpBirthColor
{
    u8 r;
    u8 g;
    u8 b;
    u8 a;
} BrpBirthColor;
extern f32 fGpffff8248;
extern f32 fGpffff8088;
static const BrpBirthVec sBrpBirthTranslation = {0.0f, 100.0f, 200.0f};
static const BrpBirthVec sBrpBirthAxis = {0.0f, 1.0f, 0.0f};
static const BrpBirthVec sBrpBirthRotation = {1.0f, 0.0f, 0.0f};
extern void* kwlnGetMainCamera(void);
extern void func_00219c90(void* work);
extern void func_00239170(void* work);
extern void func_00239280(void);
extern void func_002392d0(void);
extern void func_0023b990(void);
extern void func_0023d240(void);
extern void func_0020a800(void* frame);
extern void func_0020c5f0(void* frame, s32 value, s32 count);
extern void func_00209f00(void* frame);
extern void func_0020c590(void* frame, u16 value);
extern void func_0020cd50(void* frame, void* resource);
extern void func_00219d90(void);
extern void func_0020ac80(void* frame);
extern void func_0020ac90(void* frame);
extern void func_0020b250(void* frame);
extern void func_0021a1b0(void);
extern void func_0021a920(s32 mode, s32 value);
extern void func_0021ab80(s32 value);
extern u32 func_0021a120(void);
extern void func_0020cc80(void* frame, const BrpBirthColor* color);
extern void func_004bdde0(f32 angle, void* frame, const BrpBirthVec* vector, u32 mode);
extern void func_004c9d70(void* camera, f32 value);
extern void func_004c9db0(void* camera, f32 value);
extern void func_004cb890(void* frame, f32 value, const BrpBirthVec* vector, u32 mode);
extern void func_004cb750(void* frame, const BrpBirthVec* vector, u32 mode);
extern void* func_0034fcd0(const void* resource);
extern void func_0034fcf0(void* resource);
extern void func_0034fdf0(void* resource, const BrpBirthVec* position);
extern void func_0034ff90(void* resource, const BrpBirthColor* color);
extern void func_0034fd30(void* resource);
extern void func_0034fd70(void* resource, s32 layer);
extern void func_0034ff70(void* resource, f32 scalar);
extern u32 func_003cda60(s32 mode, s32 value);
extern void func_003cdba0(u32 object, u16 value);
extern u32 func_003cdc80(u32 object);
extern void func_003cdcd0(u32 object, s32 a, s32 b, s32 c);
extern void func_003cde00(u32 object, s32 value);
extern void func_003c72d0(u32 value);
extern u32 func_003c7bc0(s32 mode, u32 value);
extern u32 func_00173220(u16 value);
extern u32 func_0017d790(u16 value);
extern void func_003c7430(u32 value);
extern void func_003c7990(s32 value);
extern u32 func_003c7850(void);
extern void func_003c7650(s32 value);
extern void func_003c77a0(void);
extern f32 func_0052e878(f32 value);
extern f32 func_0052e6d8(f32 value);
extern void func_00195020(void* task);
extern void H_Fade_FadeOut(void);
extern void H_Fade_SetType(s32 type);
extern void H_Fade_FadeIn(void);
extern u32 H_Fade_IsFadeOutDone(void);
extern void func_0010a4e0(s32 bank, s32 cue, s32 variant, s32 pan);
extern void func_0024be40(void);
extern void func_0024ba50(void);
extern void func_0024bb30(void);
extern void func_0024bf80(void);
extern u32 brpRes0024bed0(void);
extern u32 brpRes0024bf20(s32 index);
extern u32 brpRes0024c040(void);
extern u32 brpRes0024c090(void);
extern void brpRes0024ba30(u32* work);
extern u32 D_00960178[];

#define BRP_BIRTH_ALLOC(size, flags) \
    (*(void* (**)(u32, u32))D_00960178)((size), (flags))


// FUN_0024A870
void func_0024a870(void)
{
    u32* work;
    void* camera;
    void* frame;
    void* resource;
    BrpBirthColor color;
    BrpBirthVec translation;
    BrpBirthVec axis;

    K_ASSERT(sBrpBirthWork != NULL, 0x7f);
    work = sBrpBirthWork;
    translation = sBrpBirthTranslation;
    axis = sBrpBirthAxis;
    camera = kwlnGetMainCamera();
    func_004c9d70(camera, 100.0f);
    func_004c9db0(camera, 1000.0f);
    camera = *(void**)((u8*)camera + 4);
    func_004cb890(camera, 180.0f, &axis, 0);
    func_004cb750(camera, &translation, 2);

    switch (work[0])
    {
    case 0:
        func_00209f00(work + 7);
        frame = (u8*)work + 0x1C;
        func_0020c590(frame, *(u16*)((u8*)work + 0x0C));
        break;
    case 1:
        func_0020a800(work + 7);
        frame = (u8*)work + 0x1C;
        func_0020c5f0(frame, 0, 0xE);
        break;
    }
    func_0020cd50(frame, (u8*)work + 0x61C);

    ((f32*)work)[0x3EC] = 500.0f;
    ((f32*)work)[0x3ED] = 100.0f;
    ((f32*)work)[0x3EE] = 500.0f;
    ((f32*)frame)[8] = 0.0f;
    ((f32*)frame)[9] = 100.0f;
    ((f32*)frame)[10] = 0.0f;
    ((f32*)frame)[7] = 1.0f;
    ((f32*)frame)[4] = 0.0f;
    ((f32*)frame)[5] = 0.0f;
    ((f32*)frame)[6] = 0.0f;
    ((f32*)frame)[11] = 10.0f;
    ((f32*)frame)[12] = 10.0f;
    ((f32*)frame)[13] = 10.0f;

    H_Fade_FadeIn();
    func_0023d240();
    work[5] = 0;
    resource = (void*)(uintptr_t)brpRes0024bf20(0);
    work[0x3F3] = (u32)(uintptr_t)func_0034fcd0(resource);
    work[1] |= 0x40;
    color.r = 0xFF;
    color.g = 0xFF;
    color.b = 0xFF;
    color.a = 0xFF;
    func_0034ff90((void*)(uintptr_t)work[0x3F3], &color);
    work[1] |= 1;
    work[2] = 1;
}

// FUN_0024aa90
void brpBirth0024aa90(void)
{
    u32* work;

    K_ASSERT(sBrpBirthWork != NULL, 0x7f);
    work = sBrpBirthWork;
    H_Fade_FadeOut();
    H_Fade_SetType(2);
    H_Fade_FadeIn();
    work[1] |= 1;
    work[2] = 8;
}

// FUN_0024AB10
void func_0024ab10(s32 date)
{
    u32* work;

    K_ASSERT(sBrpBirthWork != NULL, 0x7f);
    work = sBrpBirthWork;
    *(s16*)((u8*)work + 0x0C) = (s16)date;
    work[0x3158] = (u32)func_003cda60(0, 1);
    work[1] |= 0x80;
    func_003cdba0(work[0x3158], *(u16*)((u8*)work + 0x0C));
    func_0024be40();
    func_0021ab80(date);
    work[0] = 0;
    work[1] |= 2;
}

// FUN_0024abd0
void brpBirth0024abd0(void)
{
    u32* work;

    K_ASSERT(sBrpBirthWork != NULL, 0x7f);
    work = sBrpBirthWork;
    func_0024be40();
    func_0021a920(0, 0xe);
    *work = 1;
    work[1] |= 2;
}

// FUN_0024ac40
u32 brpBirth0024ac40(void)
{
    K_ASSERT(sBrpBirthWork != NULL, 0x7f);
    return sBrpBirthWork[1] & 2;
}

// FUN_0024AC90
void func_0024ac90(void)
{
    u32* work;

    K_ASSERT(sBrpBirthWork != NULL, 0x7f);
    work = sBrpBirthWork;
    K_ASSERT((~work[1] & 2) != 0, 0x103);
    func_00239280();
    sflResShutdown();
    func_0024ba50();
    func_0021a1b0();
    if ((work[1] & 0x10) != 0)
    {
        func_0034fcf0((void*)(uintptr_t)work[0x3F1]);
    }
    if ((work[1] & 0x20) != 0)
    {
        func_0034fcf0((void*)(uintptr_t)work[0x3F2]);
    }
    if ((work[1] & 0x40) != 0)
    {
        func_0034fcf0((void*)(uintptr_t)work[0x3F3]);
    }
    if ((work[1] & 0x100) != 0)
    {
        func_0034fcf0((void*)(uintptr_t)work[0x3F4]);
    }
    if ((work[1] & 4) != 0)
    {
        func_00195020((void*)(uintptr_t)work[0x3158]);
    }
    if ((work[1] & 8) != 0)
    {
        func_0020ac80((u8*)work + 0x1C);
    }
    RwFree(work);
    sBrpBirthWork = NULL;
}

/* W420 wave/opacity declaration-order variants: nd1798/2640B, window 2736B,
 * rate 0.681061 unchanged for both tested orders; reverted. */
// FUN_0024ADF0
asm void func_0024adf0(void)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f82b640
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e8e8
  .word 0x2405007f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b640
  .word 0x3c020069
  .word 0xdc43e918
  .word 0x3c020069
  .word 0xc440e920
  .word 0xffa30050
  .word 0xe7a00058
  .word 0x0c092ecc
  .word 0x00000000
  .word 0x0c083608
  .word 0x00000000
  .word 0x0c086764
  .word 0x00000000
  .word 0x8e050004
  .word 0x30a30002
  .word 0x10600053
  .word 0x00000000
  .word 0x8e040000
  .word 0x24030001
  .word 0x10830038
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000004b
  .word 0x00000000
  .word 0x00a01827
  .word 0x30630004
  .word 0x10600013
  .word 0x00000000
  .word 0x3c020001
  .word 0x02021021
  .word 0x8c44c560
  .word 0x0c0f3720
  .word 0x00000000
  .word 0x14400040
  .word 0x00000000
  .word 0x3c020001
  .word 0x02021021
  .word 0x8c44c560
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c0f3734
  .word 0x00000000
  .word 0x8e030004
  .word 0x34630004
  .word 0xae030004
  .word 0x8e030004
  .word 0x00601827
  .word 0x30630008
  .word 0x10600008
  .word 0x00000000
  .word 0x0c086848
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x8e030004
  .word 0x34630008
  .word 0xae030004
  .word 0x8e040004
  .word 0x30830004
  .word 0x10600025
  .word 0x00000000
  .word 0x30830008
  .word 0x10600022
  .word 0x00000000
  .word 0x0c092fb4
  .word 0x00000000
  .word 0x1440001e
  .word 0x00000000
  .word 0x8e040004
  .word 0x2403fffd
  .word 0x00831824
  .word 0xae030004
  .word 0x10000018
  .word 0x00000000
  .word 0x00a01827
  .word 0x30630008
  .word 0x10600008
  .word 0x00000000
  .word 0x0c086848
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x8e030004
  .word 0x34630008
  .word 0xae030004
  .word 0x8e030004
  .word 0x30630008
  .word 0x10600009
  .word 0x00000000
  .word 0x0c092fb4
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x8e040004
  .word 0x2403fffd
  .word 0x00831824
  .word 0xae030004
  .word 0x8e030008
  .word 0x1060022d
  .word 0x00000000
  .word 0x0c08e4b4
  .word 0x00000000
  .word 0x8e020008
  .word 0x2c41000c
  .word 0x1020015c
  .word 0x00000000
  .word 0x3c03007b
  .word 0x246378c0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0c0421c4
  .word 0x00000000
  .word 0x10400151
  .word 0x00000000
  .word 0xae000010
  .word 0x24020002
  .word 0xae020008
  .word 0x1000014c
  .word 0x00000000
  .word 0x8e020010
  .word 0x2841001e
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae020010
  .word 0x10000144
  .word 0x00000000
  .word 0xae000010
  .word 0x24020003
  .word 0xae020008
  .word 0x1000013f
  .word 0x00000000
  .word 0x8e020010
  .word 0x28410028
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae020010
  .word 0x10000137
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060008
  .word 0x24070005
  .word 0x0c042938
  .word 0x00000000
  .word 0xae000010
  .word 0x24020004
  .word 0xae020008
  .word 0x1000012c
  .word 0x00000000
  .word 0x8e020010
  .word 0x28410014
  .word 0x1020002b
  .word 0x00000000
  .word 0x24420001
  .word 0xae020010
  .word 0x240200ff
  .word 0xa3a2005c
  .word 0xa3a0005d
  .word 0xa3a0005e
  .word 0xc6000010
  .word 0x46800020
  .word 0x3c02437f
  .word 0x44821000
  .word 0x00000000
  .word 0x46001042
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x46001041
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
  .word 0xa3a3005f
  .word 0x8e040fcc
  .word 0x27a5005c
  .word 0x0c0d3fe4
  .word 0x00000000
  .word 0x100000fe
  .word 0x00000000
  .word 0x8e020000
  .word 0x24040001
  .word 0x1044000a
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0xae000010
  .word 0x24020005
  .word 0xae020008
  .word 0x1000001e
  .word 0x00000000
  .word 0x0c092fc8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0d3f34
  .word 0x00000000
  .word 0xae020fc8
  .word 0x8e020004
  .word 0x34420020
  .word 0xae020004
  .word 0xafa00040
  .word 0x3c0242c8
  .word 0xafa20044
  .word 0xafa00048
  .word 0x8e040fc8
  .word 0x27a50040
  .word 0x0c0d3f7c
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060008
  .word 0x24070006
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030004
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae020004
  .word 0x24020007
  .word 0xae020008
  .word 0xa3a0005c
  .word 0xa3a0005d
  .word 0xa3a0005e
  .word 0xa3a0005f
  .word 0x8e040fcc
  .word 0x27a5005c
  .word 0x0c0d3fe4
  .word 0x00000000
  .word 0x100000ca
  .word 0x00000000
  .word 0x8e020010
  .word 0x2841001e
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae020010
  .word 0x100000c2
  .word 0x00000000
  .word 0x8e020004
  .word 0x00401027
  .word 0x30420010
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e8e8
  .word 0x240501bf
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24040002
  .word 0x0c092fc8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0d3f34
  .word 0x00000000
  .word 0xae020fc4
  .word 0x8e020004
  .word 0x34420010
  .word 0xae020004
  .word 0xafa00040
  .word 0x3c0242c8
  .word 0xafa20044
  .word 0x3c02c3fa
  .word 0xafa20048
  .word 0x8e040fc4
  .word 0x27a50040
  .word 0x0c0d3f7c
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x24060008
  .word 0x24070006
  .word 0x0c042938
  .word 0x00000000
  .word 0xae000010
  .word 0x24020006
  .word 0xae020008
  .word 0x1000009a
  .word 0x00000000
  .word 0x8e030010
  .word 0x2402001e
  .word 0x14620024
  .word 0x00000000
  .word 0x3c020001
  .word 0x02021021
  .word 0x8c44c560
  .word 0x24050001
  .word 0x0c0f3780
  .word 0x00000000
  .word 0x8e020004
  .word 0x00401027
  .word 0x30420100
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e8e8
  .word 0x240501d6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24040003
  .word 0x0c092fc8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0d3f34
  .word 0x00000000
  .word 0xae020fd0
  .word 0x8e020004
  .word 0x34420100
  .word 0xae020004
  .word 0xafa00040
  .word 0x3c02c270
  .word 0xafa20044
  .word 0x3c02c248
  .word 0xafa20048
  .word 0x8e040fd0
  .word 0x27a50040
  .word 0x0c0d3f7c
  .word 0x00000000
  .word 0x8e020010
  .word 0x2841003c
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae020010
  .word 0x1000006b
  .word 0x00000000
  .word 0xae000010
  .word 0x0c092fe0
  .word 0x00000000
  .word 0x2402000a
  .word 0xae020008
  .word 0x10000064
  .word 0x00000000
  .word 0x0c093010
  .word 0x00000000
  .word 0x14400060
  .word 0x00000000
  .word 0x0c093024
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1cb4
  .word 0x00000000
  .word 0x9604000c
  .word 0x0c05cc88
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x9604000c
  .word 0x0c05f5e4
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x2402000b
  .word 0xae020008
  .word 0x1000004a
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0f1e64
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400043
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0f1d94
  .word 0x00000000
  .word 0x0c0f1de8
  .word 0x00000000
  .word 0x24020007
  .word 0xae020008
  .word 0x8e030004
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae020004
  .word 0x10000036
  .word 0x00000000
  .word 0x0c0421c4
  .word 0x00000000
  .word 0x10400032
  .word 0x00000000
  .word 0x8e020004
  .word 0x30420010
  .word 0x10400008
  .word 0x00000000
  .word 0x8e040fc4
  .word 0x0c0d3f3c
  .word 0x00000000
  .word 0x8e030004
  .word 0x2402ffef
  .word 0x00621024
  .word 0xae020004
  .word 0x8e020004
  .word 0x30420100
  .word 0x10400008
  .word 0x00000000
  .word 0x8e040fd0
  .word 0x0c0d3f3c
  .word 0x00000000
  .word 0x8e030004
  .word 0x2402feff
  .word 0x00621024
  .word 0xae020004
  .word 0x8e020004
  .word 0x30420020
  .word 0x10400008
  .word 0x00000000
  .word 0x8e040fc8
  .word 0x0c0d3f3c
  .word 0x00000000
  .word 0x8e030004
  .word 0x2402ffdf
  .word 0x00621024
  .word 0xae020004
  .word 0x8e020004
  .word 0x30420040
  .word 0x10400008
  .word 0x00000000
  .word 0x8e040fcc
  .word 0x0c0d3f3c
  .word 0x00000000
  .word 0x8e030004
  .word 0x2402ffbf
  .word 0x00621024
  .word 0xae020004
  .word 0x8e030004
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae020004
  .word 0xae000008
  .word 0x2611001c
  .word 0x8e020008
  .word 0x2c410009
  .word 0x10200042
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637890
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x4480a800
  .word 0x10000038
  .word 0x00000000
  .word 0xc6000010
  .word 0x46800060
  .word 0x3c024220
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000002d
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x10000029
  .word 0x00000000
  .word 0xc6000010
  .word 0x46800060
  .word 0x3c024270
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010541
  .word 0x1000001d
  .word 0x00000000
  .word 0x8e030000
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x4480a800
  .word 0x10000012
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x1000000e
  .word 0x00000000
  .word 0x8e030000
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x4480a800
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x8e020014
  .word 0x24420001
  .word 0xae020014
  .word 0xc6000014
  .word 0x46800060
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x46000047
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010582
  .word 0x4600b306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c02c396
  .word 0x44820800
  .word 0x00000000
  .word 0x46000802
  .word 0xe6000fb0
  .word 0x4600b306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x3c02c396
  .word 0x44820800
  .word 0x00000000
  .word 0x46000802
  .word 0xe6000fb8
  .word 0xc6000014
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010302
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x3c0243c8
  .word 0x44821800
  .word 0x3c0242c8
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600181c
  .word 0xe6000fb4
  .word 0x240200ff
  .word 0xa3a2005c
  .word 0xa3a2005d
  .word 0xa3a2005e
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
  .word 0xa3a3005f
  .word 0x0220202d
  .word 0x27a5005c
  .word 0x0c083320
  .word 0x00000000
  .word 0x8e020008
  .word 0x2c410009
  .word 0x1020001c
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637860
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3c024334
  .word 0x4482a000
  .word 0x10000011
  .word 0x00000000
  .word 0xc6000010
  .word 0x46800060
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c024334
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020001
  .word 0x46000d02
  .word 0x10000002
  .word 0x00000000
  .word 0x4480a000
  .word 0x26240010
  .word 0x27a50050
  .word 0x4600a306
  .word 0x0000302d
  .word 0x0c12f778
  .word 0x00000000
  .word 0x8e030004
  .word 0x30630080
  .word 0x10600007
  .word 0x00000000
  .word 0x3c020001
  .word 0x02021021
  .word 0x8c44c560
  .word 0x9605000c
  .word 0x0c0f36e8
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

static void brpBirthSetColor(void* resource, u8 r, u8 g, u8 b, u8 a)
{
    BrpBirthColor color;

    color.r = r;
    color.g = g;
    color.b = b;
    color.a = a;
    func_0034ff90(resource, &color);
}

static void brpBirthSetOrigin(void* resource, f32 x, f32 y, f32 z)
{
    BrpBirthVec origin;

    origin.x = x;
    origin.y = y;
    origin.z = z;
    func_0034fdf0(resource, &origin);
}

// FUN_0024B8A0
void func_0024b8a0(void)
{
    u32* work;

    K_ASSERT(sBrpBirthWork != NULL, 0x7f);
    work = sBrpBirthWork;
    if (work[2] != 0)
    {
        func_0023b990();
        if ((work[1] & 8) != 0)
        {
            func_0020ac90(work + 7);
            func_0020b250(work + 7);
        }
        if ((work[1] & 0x10) != 0)
        {
            func_0034fd30((void*)(uintptr_t)work[0x3F1]);
            func_0034fd70((void*)(uintptr_t)work[0x3F1], 5);
        }
        if ((work[1] & 0x100) != 0)
        {
            func_0034ff70((void*)(uintptr_t)work[0x3F4], fGpffff8088);
            func_0034fd30((void*)(uintptr_t)work[0x3F4]);
            func_0034fd70((void*)(uintptr_t)work[0x3F4], 5);
        }
        if ((work[1] & 0x20) != 0)
        {
            func_0034fd30((void*)(uintptr_t)work[0x3F2]);
            func_0034fd70((void*)(uintptr_t)work[0x3F2], 5);
        }
        if ((work[1] & 0x40) != 0)
        {
            func_0034fd30((void*)(uintptr_t)work[0x3F3]);
            func_0034fd70((void*)(uintptr_t)work[0x3F3], 5);
        }
    }
}

// FUN_0024b9e0
u32 brpBirth0024b9e0(void)
{
    K_ASSERT(sBrpBirthWork != NULL, 0x7f);
    return sBrpBirthWork[1] & 1;
}








// FUN_0024ba30
void brpRes0024ba30(u32* param_1)
{
    *param_1 = 0;
    param_1[1] = 0;
    sBrpResWork = param_1;
}












/* DAT_007CE348: panel effect work installed by FUN_0024C100. */


