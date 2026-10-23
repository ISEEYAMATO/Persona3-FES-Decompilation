#include "Main/Social/sfl_res.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"
typedef struct SflGroundRwObject
{
    u8 type;
    u8 subType;
    u8 flags;
    u8 privateFlags;
    void* parent;
} SflGroundRwObject;
typedef struct SflGroundRwObjectHasFrame
{
    SflGroundRwObject object;
} SflGroundRwObjectHasFrame;
typedef struct SflGroundRwCamera
{
    SflGroundRwObjectHasFrame object;
} SflGroundRwCamera;
extern SflGroundRwCamera* kwlnGetMainCamera();

#pragma alias func_0021d890_y2 func_0021d890
#pragma alias func_0021d8e0_y2 func_0021d8e0
#pragma alias func_0021d950_y2 func_0021d950
#pragma alias func_0021e170_y2 func_0021e170
#pragma alias func_0021eb80_y2 func_0021eb80
#pragma alias sinf_y2 sinf
#pragma alias cosf_y2 cosf


/* The Ground task owns this 0x8780-byte Social work area. */
static u32* sSflGround; // puGpffffb624 / DAT_007ce314
/* 0x0023D7A0 onward is Panel: it switches to DAT_007CE318 and sfl_panel.c asserts. */

typedef struct SflGroundVec2
{
    f32 x;
    f32 y;
} SflGroundVec2;

typedef struct SflGroundColor
{
    u8 r;
    u8 g;
    u8 b;
    u8 a;
} SflGroundColor;
typedef struct SflGroundViewport
{
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 width;
    s32 height;
} SflGroundViewport;
typedef struct SflGroundTile
{
    u8 pad0[8];
    f32 color;
    u8 pad0c[12];
    f32 scale;
    u32 white0;
    u32 white1;
    u32 white2;
    u32 white3;
} SflGroundTile;

typedef void (*SflGroundTickCallback)(void* owner);
typedef void (*SflGroundRenderStateCallback)(u32 selector, u32 value);
typedef void (*SflGroundRenderQuadCallback)(void* vertices, u32 count,
                                             u32 group, u32 pass, u32 blend);

#define GROUND_TILE(work, offset) ((SflGroundTile*)GROUND_PTR((work), (offset)))
#define GROUND_PTR(work, offset) ((void*)((u8*)(work) + (offset)))
#define GROUND_U32(work, offset) (*(u32*)GROUND_PTR((work), (offset)))
#define GROUND_F32(work, offset) (*(f32*)GROUND_PTR((work), (offset)))

enum
{
    SFL_GROUND_WORK_SIZE = 0x8780,
    SFL_GROUND_PANEL_OFFSET = 0x110,
    SFL_GROUND_PANEL_STRIDE = 0x200,
    SFL_GROUND_PARTICLE_OFFSET = 0xD10,
    SFL_GROUND_PARTICLE_STRIDE = 0x130,
    SFL_GROUND_TILE_OFFSET = 0x6B00,
    SFL_GROUND_TILE_STRIDE = 0x40
};

extern const f32 D_00960088;
extern const u32 D_00960090[];
#pragma alias D_00960090_abs D_00960090
extern u8 D_00960090_abs[];
#pragma alias D_0096009C_abs D_0096009C
extern u8 D_0096009C_abs[];
extern const u32 D_0096009C[];
extern const SflGroundVec2 D_0068E7C0[];
extern f32 gPI;
extern void (*D_009600A4)(u32, void*, u32, void*, u32);
extern f32 sqrtf(f32 value);

void FUN_00249690(void* work);
void* H_Maestro_001120a0(s32 font);
void func_00249680(void* work);


// FUN_00239170
void func_00239170(u32* work)
{
    u16* table;
    u8* slot;
    s32 col;
    s32 row;
    s32 tableIndex;
    s32 glyph;

    K_ASSERT(sSflGround == NULL, 0x90);
    work[0] = 0;
    work[3] = 0;
    tableIndex = 0;
    glyph = 0;
    row = 0;
    table = (u16*)((u8*)work + 0x83c0);
    for (; row < 8; row++) {
        for (col = 0; col < 10; col++) {
            table[tableIndex] = (u16)glyph;
            slot = (u8*)work + tableIndex * 2;
            *(u16*)(slot + 0x83c2) = (u16)(glyph + 1);
            *(u16*)(slot + 0x83c4) = (u16)(glyph + 0xb);
            *(u16*)(slot + 0x83c6) = (u16)(glyph + 1);
            *(u16*)(slot + 0x83c8) = (u16)(glyph + 0xc);
            *(u16*)(slot + 0x83ca) = (u16)(glyph + 0xb);
            tableIndex += 6;
            glyph++;
        }
        glyph++;
    }
    func_00249680((u8*)work + 0x8780);
    sSflGround = work;
}

void FUN_0023d2a0();
void FUN_0023d650();
void func_002496e0(void* work);
void func_00249c10(void* work);
void func_0024a180(u32* work);
void func_0024a230();
SflGroundRwCamera* kwlnGetMainCamera();
void func_0021d890(void* destination, const void* layout);
void func_0021d8e0(void* destination, const void* rect);
void func_0021d950(void* destination, const void* color);
void func_0021e170(void* destination, const void* center,
                   const void* direction, const void* size);
void func_0021eb80(void* destination, const f32* layout);
f32 func_0052ea18(f32 y, f32 x);
f32 func_00269c80(f32 value);
f32 func_00269ca0(f32 value);
f32 sqrtf(f32 value);
u32 RpRandom();
u32 func_00488f30(void);
f32 func_0052e878(f32 angle);
f32 func_0052e6d8(f32 angle);
f32 cosf(f32 angle);
f32 sinf(f32 angle);
void func_002392d0();
void func_0023b990();
void func_0023c280();
void func_0023c3a0();
void func_0023c520();
void func_0023c850();

static void sflGroundCallState(u32 selector, u32 value);
static void sflGroundCallStateTable(const u32* table, u32 selector, u32 value);
void func_0023c8c0();
void func_0023ca10();
void func_0023cda0();
void func_0023d130();
void func_0023d2a0();
void func_0023d650();

static f32 sflGroundClamp01(f32 value)
{
    if (value < 0.0f) {
        return 0.0f;
    }
    if (value > 1.0f) {
        return 1.0f;
    }
    return value;
}

static u8 sflGroundAlpha(f32 value)
{
    value *= 255.0f;
    if (value >= 255.0f) {
        return 0xff;
    }
    if (value <= 0.0f) {
        return 0;
    }
    return (u8)value;
}

static f32 sflGroundRandomUnit(void)
{
    return (f32)(RpRandom() & 0xfff) / 4095.0f;
}

static void sflGroundCallState(u32 selector, u32 value)
{
    ((SflGroundRenderStateCallback)(void*)D_00960090[0])(selector, value);
}
static void sflGroundCallStateTable(const u32* table, u32 selector, u32 value)
{
    ((SflGroundRenderStateCallback)(void*)table[0])(selector, value);
}

static void sflGroundDraw(void* vertices, u32 pass, u32 blend)
{
    ((SflGroundRenderQuadCallback)(void*)D_0096009C)(vertices, 4, 0, pass, blend);
}

static void sflGroundSetSkyState(u32 textureState)
{
    RpSkyRenderStateSet(3, textureState);
    RpSkyRenderStateSet(2, textureState == 0x71801 ? 0x48 : 0x44);
}

static void sflGroundInitParticle(u32* particle)
{
    u32 lifetime;

    particle[0] |= 1;
    particle[0x44] = 0;
    lifetime = 0x78 + RpRandom() % 0x3c;
    particle[0x45] = lifetime;
    particle[1] = RpRandom() % 3;
    GROUND_F32(particle, 0x118) = 640.0f * sflGroundRandomUnit();
    GROUND_F32(particle, 0x11c) = 448.0f * sflGroundRandomUnit();
    GROUND_F32(particle, 0x120) = 640.0f * sflGroundRandomUnit();
    GROUND_F32(particle, 0x124) = 448.0f * sflGroundRandomUnit();
}

static void sflGroundInitFxLayout(u32 flag, s32 state)
{
    u32* work;
    SflGroundViewport* viewport;
    f32 cameraScale;
    f32 rect[4];
    s32 i;
    s32 j;

    K_ASSERT(sSflGround != NULL, 0x87);
    work = sSflGround;
    cameraScale = 1.0f / GROUND_F32(kwlnGetMainCamera(), 0x80);

    viewport = sflResGetEffectRaster(5);
    rect[0] = 0.0f;
    rect[1] = 0.0f;
    rect[2] = 1.0f;
    rect[3] = 1.0f;
    func_0021eb80(GROUND_PTR(work, 0x4710), rect);

    viewport = sflResGetEffectRaster(4);
    rect[0] = 1.0f / (f32)viewport->width;
    rect[1] = 0.0f;
    rect[2] = 51.0f / (f32)viewport->width;
    rect[3] = 128.0f / (f32)viewport->height;
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 4; j++) {
            func_0021eb80(GROUND_PTR(work, 0x4810 + i * 0x420 + j * 0x100), rect);
        }
        GROUND_F32(work, 0x4c20 + i * 0x420) = sflGroundRandomUnit();
        GROUND_U32(work, 0x4c24 + i * 0x420) = 0;
        GROUND_U32(work, 0x4c28 + i * 0x420) = RpRandom();
    }

    viewport = sflResGetEffectRaster(3);
    rect[0] = 1.0f / (f32)viewport->width;
    rect[1] = 0.0f;
    rect[2] = (flag == 0x20 ? 511.0f : 503.0f) / (f32)viewport->width;
    rect[3] = 44.0f / (f32)viewport->height;
    for (i = 0; i < 6; i++) {
        func_0021eb80(GROUND_PTR(work, 0x64f0 + i * 0x100), rect);
        GROUND_F32(work, 0x64f8 + i * 0x100) = D_00960088;
        GROUND_F32(work, 0x6508 + i * 0x100) = cameraScale;
    }

    work[1] = 0;
    work[0x1abc] = 0x78;
    work[0] |= 8;
    work[0] |= 0x10;
    work[0] |= flag;
    work[3] = state;
}

static void sflGroundUpdateParticles(u32* work, f32 intensity)
{
    u32* particle;
    SflGroundVec2 center;
    SflGroundVec2 direction;
    SflGroundVec2 scale;
    SflGroundColor color;
    s32 i;
    s32 j;

    color.r = 0xff;
    color.g = 0xff;
    color.b = 0xff;
    color.a = sflGroundAlpha(intensity);
    direction.x = 1.0f;
    direction.y = 0.0f;
    for (i = 0; i < 48; i++) {
        particle = (u32*)GROUND_PTR(work, SFL_GROUND_PARTICLE_OFFSET + i * SFL_GROUND_PARTICLE_STRIDE);
        if ((particle[0] & 1) == 0) {
            continue;
        }
        particle[0x44]++;
        if (particle[0x44] > particle[0x45]) {
            particle[0] &= ~1;
            continue;
        }
        center.x = GROUND_F32(particle, 0x118) + GROUND_F32(particle, 0x120) * intensity;
        center.y = GROUND_F32(particle, 0x11c) + GROUND_F32(particle, 0x124) * intensity;
        scale.x = 124.0f * intensity;
        scale.y = 162.0f * intensity;
        for (j = 0; j < 4; j++) {
            func_0021e170(GROUND_PTR(particle, 0x10 + j * 0x100), &center, &direction, &scale);
        }
        func_0021d950(GROUND_PTR(particle, 0x10), &color);
    }
}

// FUN_00239280
void sflGround00239280(void)
{
    K_ASSERT(sSflGround != NULL, 0x87);
    FUN_00249690(sSflGround + 0x21e0);
    sSflGround = NULL;
}

/* Retail frame-gates the first overlay before the final 255-alpha pass; implemented 99.2%, strip replay remains. */
// FUN_002392D0
asm void func_002392d0(void)
{
  .set noreorder
  .word 0x27bdff10
  .word 0xffbf0090
  .word 0x7fb50080
  .word 0x7fb40070
  .word 0x7fb30060
  .word 0x7fb20050
  .word 0x7fb10040
  .word 0x7fb00030
  .word 0xe7bf002c
  .word 0xe7be0028
  .word 0xe7bd0024
  .word 0xe7bc0020
  .word 0xe7bb001c
  .word 0xe7ba0018
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f82b624
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e7b0
  .word 0x24050087
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b624
  .word 0x0c066164
  .word 0x00000000
  .word 0x4480a800
  .word 0x8e23000c
  .word 0x24020004
  .word 0x10620056
  .word 0x00000000
  .word 0x24020003
  .word 0x1062002b
  .word 0x00000000
  .word 0x24020002
  .word 0x10620017
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000071
  .word 0x00000000
  .word 0x8e230000
  .word 0x30620001
  .word 0x1040006d
  .word 0x00000000
  .word 0x8e220004
  .word 0x28410014
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae220004
  .word 0x10000065
  .word 0x00000000
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae220000
  .word 0x10000060
  .word 0x00000000
  .word 0x8e230000
  .word 0x30620004
  .word 0x1040005c
  .word 0x00000000
  .word 0x8e220004
  .word 0x2841001e
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae220004
  .word 0x10000054
  .word 0x00000000
  .word 0x2402fffb
  .word 0x00621024
  .word 0xae220000
  .word 0x1000004f
  .word 0x00000000
  .word 0x8e230000
  .word 0x30620002
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e220004
  .word 0x2841001e
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae220004
  .word 0x10000004
  .word 0x00000000
  .word 0x2402fffd
  .word 0x00621024
  .word 0xae220000
  .word 0x8e226af0
  .word 0x24420001
  .word 0xae226af0
  .word 0x28410051
  .word 0x14200005
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402fff7
  .word 0x00621024
  .word 0xae220000
  .word 0x8e226af0
  .word 0x284100a1
  .word 0x14200005
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402ffef
  .word 0x00621024
  .word 0xae220000
  .word 0x8e236af0
  .word 0x240200f0
  .word 0x0062001a
  .word 0x00001010
  .word 0xae226af0
  .word 0x10000027
  .word 0x00000000
  .word 0x8e230000
  .word 0x30620020
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e220004
  .word 0x2841001e
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae220004
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffdf
  .word 0x00621024
  .word 0xae220000
  .word 0x8e226af0
  .word 0x24420001
  .word 0xae226af0
  .word 0x28410051
  .word 0x14200005
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402fff7
  .word 0x00621024
  .word 0xae220000
  .word 0x8e226af0
  .word 0x284100a1
  .word 0x14200005
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402ffef
  .word 0x00621024
  .word 0xae220000
  .word 0x8e236af0
  .word 0x240200f0
  .word 0x0062001a
  .word 0x00001010
  .word 0xae226af0
  .word 0x8e220008
  .word 0x24430001
  .word 0xae230008
  .word 0x240200b4
  .word 0x0062001a
  .word 0x00001010
  .word 0xae220008
  .word 0xc6200008
  .word 0x46800060
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e83
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e43
  .word 0x00000000
  .word 0x8e23000c
  .word 0x24020005
  .word 0x10620067
  .word 0x00000000
  .word 0x24020004
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020003
  .word 0x10620009
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000005d
  .word 0x00000000
  .word 0x24020004
  .word 0x10620028
  .word 0x00000000
  .word 0x24020003
  .word 0x10620025
  .word 0x00000000
  .word 0x24020002
  .word 0x10620022
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420001
  .word 0x10400015
  .word 0x00000000
  .word 0x8e220004
  .word 0x2841000a
  .word 0x10200004
  .word 0x00000000
  .word 0x4480c000
  .word 0x10000014
  .word 0x00000000
  .word 0x2442fff6
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482c000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482c000
  .word 0x4600c586
  .word 0xafa000b0
  .word 0xafa000b4
  .word 0x3c024420
  .word 0xafa200b8
  .word 0x3c0243e0
  .word 0xafa200bc
  .word 0x26240010
  .word 0x27a500b0
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46180042
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
  .word 0xa3a300ef
  .word 0x26240010
  .word 0x27a500ec
  .word 0x0c087654
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b000
  .word 0x10000002
  .word 0x00000000
  .word 0x4480b000
  .word 0x0000902d
  .word 0x3c02434c
  .word 0x44820000
  .word 0x00000000
  .word 0x461606c2
  .word 0x3c024000
  .word 0x44821000
  .word 0x00000000
  .word 0x461a1002
  .word 0xc7818248
  .word 0x46000802
  .word 0xe7a000ac
  .word 0x46191002
  .word 0x46000802
  .word 0xe7a000a8
  .word 0x100000c2
  .word 0x00000000
  .word 0x0000982d
  .word 0x3c0243e0
  .word 0x44820800
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000842
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e83
  .word 0x3c024360
  .word 0x44820000
  .word 0x00000000
  .word 0x4600d741
  .word 0x3c024915
  .word 0x4482e000
  .word 0x00121080
  .word 0x00521021
  .word 0x00021040
  .word 0x0052a821
  .word 0x461de802
  .word 0xe7a000a4
  .word 0x100000a5
  .word 0x00000000
  .word 0x02751021
  .word 0x00021180
  .word 0x02221821
  .word 0x24706b00
  .word 0x3c024420
  .word 0x44820800
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000842
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0xe4616b00
  .word 0xe47a6b04
  .word 0x3c02437f
  .word 0xac626b20
  .word 0xac626b24
  .word 0xac626b28
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x461b0036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600d824
  .word 0x44040000
  .word 0x00000000
  .word 0x308400ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600d801
  .word 0x46000024
  .word 0x44040000
  .word 0x3c028000
  .word 0x00822025
  .word 0x308400ff
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
  .word 0xe600002c
  .word 0x3c0243a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b01
  .word 0x44800800
  .word 0xc7a000a4
  .word 0x46000818
  .word 0x460c601c
  .word 0x46000644
  .word 0x00000000
  .word 0x00000000
  .word 0x4600eb46
  .word 0x0c14ba86
  .word 0x00000000
  .word 0x46000786
  .word 0x00000000
  .word 0x461c0004
  .word 0x4600cfc3
  .word 0xc7808084
  .word 0x461f0042
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010042
  .word 0xc7a000ac
  .word 0x46000b01
  .word 0x0c09a720
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44821800
  .word 0x00000000
  .word 0x46001880
  .word 0x3c0242b4
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602085c
  .word 0x46000836
  .word 0x45010002
  .word 0x00000000
  .word 0x46030842
  .word 0x4601c840
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x3c0240a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e43
  .word 0x3c024000
  .word 0x44820800
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x461f0002
  .word 0x46000842
  .word 0xc7808248
  .word 0x46010042
  .word 0xc7a000a8
  .word 0x46000b01
  .word 0x0c09a720
  .word 0x00000000
  .word 0x3c024140
  .word 0x44820800
  .word 0x00000000
  .word 0x461f0882
  .word 0x3c0242c8
  .word 0x44820800
  .word 0x00000000
  .word 0x46011083
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46020882
  .word 0xc7818248
  .word 0x46020842
  .word 0x46010002
  .word 0x4600f780
  .word 0x4600f306
  .word 0x0c09a720
  .word 0x00000000
  .word 0x3c0243a0
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600cfdc
  .word 0x4600f306
  .word 0x0c09a728
  .word 0x00000000
  .word 0x3c024360
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600c85c
  .word 0x3c024420
  .word 0x44820000
  .word 0x00000000
  .word 0x4600f803
  .word 0xe6000010
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0xe6000014
  .word 0x26730001
  .word 0x2a62000b
  .word 0x1440ff5a
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420009
  .word 0x1440ff3d
  .word 0x00000000
  .word 0x8e23000c
  .word 0x24020004
  .word 0x10620009
  .word 0x00000000
  .word 0x24020003
  .word 0x10620006
  .word 0x00000000
  .word 0x24020002
  .word 0x10620003
  .word 0x00000000
  .word 0x10000054
  .word 0x00000000
  .word 0xafa000b0
  .word 0x3c02435c
  .word 0xafa200b4
  .word 0x3c024420
  .word 0xafa200b8
  .word 0x3c02436e
  .word 0xafa200bc
  .word 0x26244610
  .word 0x27a500b0
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e23000c
  .word 0x24020004
  .word 0x1062001d
  .word 0x00000000
  .word 0x24020003
  .word 0x1062001a
  .word 0x00000000
  .word 0x24020002
  .word 0x10620003
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x8e220004
  .word 0x2841001e
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482c000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482c000
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
  .word 0x3c0241a0
  .word 0x44820800
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46180002
  .word 0x46000842
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
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
  .word 0xa3a300ef
  .word 0x26244610
  .word 0x27a500ec
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e23000c
  .word 0x24020004
  .word 0x10620006
  .word 0x00000000
  .word 0x24020003
  .word 0x10620003
  .word 0x00000000
  .word 0x10000061
  .word 0x00000000
  .word 0x24020004
  .word 0x10620006
  .word 0x00000000
  .word 0x24020003
  .word 0x10620003
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x8e230004
  .word 0x2861001e
  .word 0x10200011
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x3c024220
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020001
  .word 0x46000882
  .word 0x10000002
  .word 0x00000000
  .word 0x44801000
  .word 0x2861001e
  .word 0x1020000d
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482c000
  .word 0x10000004
  .word 0x00000000
  .word 0x44801000
  .word 0x00000000
  .word 0x46001606
  .word 0xafa000b0
  .word 0x3c02434e
  .word 0x44820000
  .word 0x00000000
  .word 0x46020000
  .word 0xe7a000b4
  .word 0x3c024420
  .word 0xafa200b8
  .word 0xc780833c
  .word 0xe7a000bc
  .word 0x26244710
  .word 0x27a500b0
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
  .word 0x3c0242cc
  .word 0x44820000
  .word 0x00000000
  .word 0x46180042
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
  .word 0xa3a300ef
  .word 0x26244710
  .word 0x27a500ec
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e23000c
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000028b
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420001
  .word 0x1040003d
  .word 0x00000000
  .word 0x8e230004
  .word 0x28610004
  .word 0x1020000d
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x2861000a
  .word 0x10200005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482c000
  .word 0x1000000d
  .word 0x00000000
  .word 0x2462fff6
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010601
  .word 0x28610008
  .word 0x10200013
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0xc7838340
  .word 0x3c023f80
  .word 0x44821000
  .word 0x00000000
  .word 0x46001041
  .word 0x44800000
  .word 0x00000000
  .word 0x46020018
  .word 0x46011ddc
  .word 0x10000008
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b800
  .word 0x10000004
  .word 0x00000000
  .word 0x4480c000
  .word 0x3c023f80
  .word 0x4482b800
  .word 0x3c0243a0
  .word 0xafa200e0
  .word 0x3c024360
  .word 0xafa200e4
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xe7a000d8
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xe7a000dc
  .word 0x3c023f80
  .word 0xafa200d0
  .word 0xafa200d4
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46180642
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46190036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600c824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600c801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300ef
  .word 0x26240910
  .word 0x27a500e0
  .word 0x27a600d8
  .word 0x27a700d0
  .word 0x0c08f148
  .word 0x00000000
  .word 0x26240910
  .word 0x27a500ec
  .word 0x0c08f214
  .word 0x00000000
  .word 0x3c0243a0
  .word 0xafa200e0
  .word 0x3c024360
  .word 0xafa200e4
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xe7a000d8
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xe7a000dc
  .word 0xe7b700d0
  .word 0xe7b700d4
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46190036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600c824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600c801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300ef
  .word 0x26240b10
  .word 0x27a500e0
  .word 0x27a600d8
  .word 0x27a700d0
  .word 0x0c08f148
  .word 0x00000000
  .word 0x26240b10
  .word 0x27a500ec
  .word 0x0c08f214
  .word 0x00000000
  .word 0x8e230004
  .word 0x24020028
  .word 0x0062001a
  .word 0x00001010
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024220
  .word 0x44820000
  .word 0x00000000
  .word 0x46000f03
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420001
  .word 0x1040003b
  .word 0x00000000
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x46000746
  .word 0x3c02c416
  .word 0x4482d800
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x46000686
  .word 0x3c02c416
  .word 0x4482c800
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x3c024416
  .word 0x44820800
  .word 0x00000000
  .word 0x4600081a
  .word 0x461ac81d
  .word 0x4600e01a
  .word 0x461dd85c
  .word 0x3c0243a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a000e0
  .word 0x3c0241f0
  .word 0x4482d000
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x460006c6
  .word 0x3c02c416
  .word 0x4482c800
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000786
  .word 0x3c02c416
  .word 0x4482e800
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c024416
  .word 0x44820800
  .word 0x00000000
  .word 0x4600081a
  .word 0x461ee81d
  .word 0x4600e01a
  .word 0x461bc85c
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a000e4
  .word 0x10000006
  .word 0x00000000
  .word 0x3c0243a0
  .word 0xafa200e0
  .word 0x3c0241f0
  .word 0x4482d000
  .word 0xafa200e4
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xe7a000d8
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xe7a000dc
  .word 0x3c023f80
  .word 0xafa200d0
  .word 0xafa200d4
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
  .word 0x3c024299
  .word 0x44820000
  .word 0x00000000
  .word 0x461806c2
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x461b0036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600d824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600d801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300ef
  .word 0x26240110
  .word 0x27a500e0
  .word 0x27a600d8
  .word 0x27a700d0
  .word 0x0c08f148
  .word 0x00000000
  .word 0x26240110
  .word 0x27a500ec
  .word 0x0c08f214
  .word 0x00000000
  .word 0x8e220004
  .word 0x24430014
  .word 0x24020028
  .word 0x0062001a
  .word 0x00001010
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024220
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e43
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420001
  .word 0x10400036
  .word 0x00000000
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x460007c6
  .word 0x3c02c416
  .word 0x4482f000
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x46000746
  .word 0x3c02c416
  .word 0x4482e000
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x3c024416
  .word 0x44820800
  .word 0x00000000
  .word 0x4600081a
  .word 0x461de01d
  .word 0x4600c81a
  .word 0x461ff05c
  .word 0x3c0243a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a000e0
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x460007c6
  .word 0x3c02c416
  .word 0x4482f000
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000746
  .word 0x3c02c416
  .word 0x4482e000
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c024416
  .word 0x44820800
  .word 0x00000000
  .word 0x4600081a
  .word 0x461de01d
  .word 0x4600c81a
  .word 0x461ff01c
  .word 0x4600d000
  .word 0xe7a000e4
  .word 0x10000004
  .word 0x00000000
  .word 0x3c0243a0
  .word 0xafa200e0
  .word 0xe7ba00e4
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xe7a000d8
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xe7a000dc
  .word 0x3c023f80
  .word 0xafa200d0
  .word 0xafa200d4
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x461b0036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600d824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600d801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300ef
  .word 0x26240310
  .word 0x27a500e0
  .word 0x27a600d8
  .word 0x27a700d0
  .word 0x0c08f148
  .word 0x00000000
  .word 0x26240310
  .word 0x27a500ec
  .word 0x0c08f214
  .word 0x00000000
  .word 0x8e230004
  .word 0x24020028
  .word 0x0062001a
  .word 0x00001010
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024220
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e43
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420001
  .word 0x1040003b
  .word 0x00000000
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x46000706
  .word 0x3c024416
  .word 0x4482d000
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x46000786
  .word 0x3c024416
  .word 0x4482e800
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x3c02c416
  .word 0x44820800
  .word 0x00000000
  .word 0x4600081a
  .word 0x461ee81d
  .word 0x4600c81a
  .word 0x461cd05c
  .word 0x3c0243a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a000e0
  .word 0x3c0243d1
  .word 0x4482d000
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x460007c6
  .word 0x3c024416
  .word 0x4482f000
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000746
  .word 0x3c024416
  .word 0x4482e000
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c02c416
  .word 0x44820800
  .word 0x00000000
  .word 0x4600081a
  .word 0x461de01d
  .word 0x4600c81a
  .word 0x461ff05c
  .word 0x3c0243d1
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a000e4
  .word 0x10000006
  .word 0x00000000
  .word 0x3c0243a0
  .word 0xafa200e0
  .word 0x3c0243d1
  .word 0x4482d000
  .word 0xafa200e4
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xe7a000d8
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xe7a000dc
  .word 0x3c023f80
  .word 0xafa200d0
  .word 0xafa200d4
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x461b0036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600d824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600d801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300ef
  .word 0x26240510
  .word 0x27a500e0
  .word 0x27a600d8
  .word 0x27a700d0
  .word 0x0c08f148
  .word 0x00000000
  .word 0x26240510
  .word 0x27a500ec
  .word 0x0c08f214
  .word 0x00000000
  .word 0x8e220004
  .word 0x24430014
  .word 0x24020028
  .word 0x0062001a
  .word 0x00001010
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024220
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e43
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420001
  .word 0x10400036
  .word 0x00000000
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x460007c6
  .word 0x3c024416
  .word 0x4482f000
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x46000746
  .word 0x3c024416
  .word 0x4482e000
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x3c02c416
  .word 0x44820800
  .word 0x00000000
  .word 0x4600081a
  .word 0x461de01d
  .word 0x4600c81a
  .word 0x461ff05c
  .word 0x3c0243a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a000e0
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x460007c6
  .word 0x3c024416
  .word 0x4482f000
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000746
  .word 0x3c024416
  .word 0x4482e000
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c02c416
  .word 0x44820800
  .word 0x00000000
  .word 0x4600081a
  .word 0x461de01d
  .word 0x4600c81a
  .word 0x461ff01c
  .word 0x4600d000
  .word 0xe7a000e4
  .word 0x10000004
  .word 0x00000000
  .word 0x3c0243a0
  .word 0xafa200e0
  .word 0xe7ba00e4
  .word 0xc78c8344
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xe7a000d8
  .word 0xc78c8344
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xe7a000dc
  .word 0x3c023f80
  .word 0xafa200d0
  .word 0xafa200d4
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x461b0036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600d824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600d801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300ef
  .word 0x26240710
  .word 0x27a500e0
  .word 0x27a600d8
  .word 0x27a700d0
  .word 0x0c08f148
  .word 0x00000000
  .word 0x26240710
  .word 0x27a500ec
  .word 0x0c08f214
  .word 0x00000000
  .word 0x8e23000c
  .word 0x24020005
  .word 0x1062002a
  .word 0x00000000
  .word 0x24020004
  .word 0x10620013
  .word 0x00000000
  .word 0x24020003
  .word 0x10620010
  .word 0x00000000
  .word 0x24020002
  .word 0x10620009
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0x4600b546
  .word 0x1000001a
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x10000016
  .word 0x00000000
  .word 0x8e220004
  .word 0x2841001e
  .word 0x1020000e
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010541
  .word 0x10000005
  .word 0x00000000
  .word 0x4480a800
  .word 0x10000002
  .word 0x00000000
  .word 0x4600b546
  .word 0x0000182d
  .word 0x0000202d
  .word 0x1000000d
  .word 0x00000000
  .word 0x000410c0
  .word 0x00441021
  .word 0x00021040
  .word 0x00441021
  .word 0x00021100
  .word 0x02221021
  .word 0x8c420d10
  .word 0x30420001
  .word 0x10400002
  .word 0x00000000
  .word 0x24630001
  .word 0x24840001
  .word 0x28820030
  .word 0x1440fff2
  .word 0x00000000
  .word 0x28610030
  .word 0x102000a7
  .word 0x00000000
  .word 0x24020030
  .word 0x00438023
  .word 0x0000902d
  .word 0x1000009f
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000d
  .word 0x00000000
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021100
  .word 0x02221021
  .word 0x24540d10
  .word 0x8c420d10
  .word 0x30420001
  .word 0x10400005
  .word 0x00000000
  .word 0x24630001
  .word 0x28620030
  .word 0x1440fff2
  .word 0x00000000
  .word 0x28620030
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e7b0
  .word 0x240502e4
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e820000
  .word 0x34420001
  .word 0xae820000
  .word 0xae800110
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x2403003c
  .word 0x0043001b
  .word 0x00001010
  .word 0x24420078
  .word 0xae820114
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030003
  .word 0x0043001b
  .word 0x00001010
  .word 0xae820004
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30420fff
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x3c024420
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x24020fff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0x00000000
  .word 0x00000000
  .word 0xe6800118
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30420fff
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x24020fff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0x00000000
  .word 0x00000000
  .word 0xe680011c
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30420fff
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x3c024420
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x24020fff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0x00000000
  .word 0x00000000
  .word 0xe6800120
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30420fff
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x24020fff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0xe6800124
  .word 0x26520001
  .word 0x0250102a
  .word 0x1440ff60
  .word 0x00000000
  .word 0x0000902d
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46150542
  .word 0x10000090
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521021
  .word 0x00021040
  .word 0x00521021
  .word 0x00021100
  .word 0x02221021
  .word 0x24500d10
  .word 0x8c420d10
  .word 0x00401027
  .word 0x30420001
  .word 0x14400083
  .word 0x00000000
  .word 0x8e020110
  .word 0x24450001
  .word 0xae050110
  .word 0x8e040114
  .word 0x0085082a
  .word 0x10200007
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae020000
  .word 0x10000076
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020002
  .word 0x10620010
  .word 0x00000000
  .word 0x24020001
  .word 0x10620009
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0xc7978194
  .word 0xc79882fc
  .word 0x10000007
  .word 0x00000000
  .word 0xc79782a4
  .word 0xc79882fc
  .word 0x10000003
  .word 0x00000000
  .word 0xc7978070
  .word 0xc798834c
  .word 0x44850000
  .word 0x00000000
  .word 0x46800060
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000943
  .word 0x00000000
  .word 0xc78082fc
  .word 0x46002834
  .word 0x45000009
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x46002e43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0xc7808084
  .word 0x46002834
  .word 0x45000005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482c800
  .word 0x10000008
  .word 0x00000000
  .word 0x46002841
  .word 0xc7808350
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010641
  .word 0x3c02427c
  .word 0x44820000
  .word 0x00000000
  .word 0x46170002
  .word 0xe7a000d0
  .word 0x3c0242a2
  .word 0x44820000
  .word 0x00000000
  .word 0x46170002
  .word 0xe7a000d4
  .word 0xc6010118
  .word 0xc6000120
  .word 0x46010101
  .word 0x44801800
  .word 0x00000000
  .word 0x46011818
  .word 0x4604281c
  .word 0xe7a000e0
  .word 0xc602011c
  .word 0xc6000124
  .word 0x46020041
  .word 0x46021818
  .word 0x4601281c
  .word 0xe7a000e4
  .word 0xe7a400d8
  .word 0xe7a100dc
  .word 0x26040010
  .word 0x27a500e0
  .word 0x27a600d8
  .word 0x27a700d0
  .word 0x0c08785c
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
  .word 0x4618a802
  .word 0x4600c842
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
  .word 0xa3a300ef
  .word 0x26040010
  .word 0x27a500ec
  .word 0x0c087654
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420030
  .word 0x1440ff6f
  .word 0x00000000
  .word 0x8e23000c
  .word 0x24020004
  .word 0x10620006
  .word 0x00000000
  .word 0x24020003
  .word 0x10620003
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x8e220004
  .word 0x2841001e
  .word 0x1020000e
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010501
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x24020004
  .word 0x10620006
  .word 0x00000000
  .word 0x24020003
  .word 0x10620003
  .word 0x00000000
  .word 0x10000095
  .word 0x00000000
  .word 0x0000982d
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46140542
  .word 0x1000008b
  .word 0x00000000
  .word 0x00131140
  .word 0x00531021
  .word 0x00021140
  .word 0x02221021
  .word 0x24504810
  .word 0xc4414c20
  .word 0xc7808354
  .word 0x46000840
  .word 0xe4414c20
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010003
  .word 0x00000000
  .word 0x46000801
  .word 0xe6000410
  .word 0x8e020414
  .word 0x24420001
  .word 0xae020414
  .word 0x30420fff
  .word 0xae020414
  .word 0x44806000
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x00000000
  .word 0x46000840
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x460008c3
  .word 0xc782808c
  .word 0xc78182fc
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603109c
  .word 0x3c024299
  .word 0xafa200d0
  .word 0x3c024340
  .word 0xafa200d4
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000840
  .word 0x3c024420
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x3c0240e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0xe7a000e0
  .word 0xafa000d8
  .word 0xc7808358
  .word 0xe7a000dc
  .word 0x0000902d
  .word 0x32750001
  .word 0x4602ad02
  .word 0x10000045
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0xc6000410
  .word 0x460008c0
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46001836
  .word 0x45010002
  .word 0x00000000
  .word 0x460018c1
  .word 0x12a00005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x460300c1
  .word 0x3c024420
  .word 0x44821000
  .word 0x3c02c2c0
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a000e4
  .word 0x00121200
  .word 0x02021021
  .word 0x24540010
  .word 0x0280202d
  .word 0x27a500e0
  .word 0x27a600d8
  .word 0x27a700d0
  .word 0x0c08785c
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300ef
  .word 0x0280202d
  .word 0x27a500ec
  .word 0x0c087654
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420004
  .word 0x1440ffba
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620007
  .word 0x1440ff74
  .word 0x00000000
  .word 0x8e23000c
  .word 0x24020004
  .word 0x10620006
  .word 0x00000000
  .word 0x24020003
  .word 0x10620003
  .word 0x00000000
  .word 0x100001e4
  .word 0x00000000
  .word 0xc6206af0
  .word 0x46800060
  .word 0x3c024370
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x2402067b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020001
  .word 0x46000882
  .word 0x240201f7
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x46011001
  .word 0xe7a000b0
  .word 0xafa000b4
  .word 0xe7a100b8
  .word 0x3c024230
  .word 0xafa200bc
  .word 0x262464f0
  .word 0x27a500b0
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e220004
  .word 0x2841001e
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
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
  .word 0xa3a300ef
  .word 0x262464f0
  .word 0x27a500ec
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e226af0
  .word 0x244300a0
  .word 0x240200f0
  .word 0x0062001a
  .word 0x00001010
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024370
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x2402067b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020001
  .word 0x46000882
  .word 0x240201f7
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x46011001
  .word 0xe7a000b0
  .word 0xafa000b4
  .word 0xe7a100b8
  .word 0x3c024230
  .word 0xafa200bc
  .word 0x262465f0
  .word 0x27a500b0
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e220004
  .word 0x2841001e
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
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
  .word 0xa3a300ef
  .word 0x262465f0
  .word 0x27a500ec
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e226af0
  .word 0x24430050
  .word 0x240200f0
  .word 0x0062001a
  .word 0x00001010
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024370
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0x2402067b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020001
  .word 0x46000882
  .word 0x240201f7
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x46011001
  .word 0xe7a000b0
  .word 0xafa000b4
  .word 0xe7a100b8
  .word 0x3c024230
  .word 0xafa200bc
  .word 0x262466f0
  .word 0x27a500b0
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e220004
  .word 0x2841001e
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
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
  .word 0xa3a300ef
  .word 0x262466f0
  .word 0x27a500ec
  .word 0x0c087654
  .word 0x00000000
  .word 0xc6206af0
  .word 0x46800060
  .word 0x3c024370
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x2402067b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010082
  .word 0x240201f7
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x46011001
  .word 0xe7a000b0
  .word 0x3c0243ca
  .word 0xafa200b4
  .word 0xe7a100b8
  .word 0x3c024230
  .word 0xafa200bc
  .word 0x262467f0
  .word 0x27a500b0
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e220004
  .word 0x2841001e
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
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
  .word 0xa3a300ef
  .word 0x262467f0
  .word 0x27a500ec
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e226af0
  .word 0x244300a0
  .word 0x240200f0
  .word 0x0062001a
  .word 0x00001010
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024370
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x2402067b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010082
  .word 0x240201f7
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x46011001
  .word 0xe7a000b0
  .word 0x3c0243ca
  .word 0xafa200b4
  .word 0xe7a100b8
  .word 0x3c024230
  .word 0xafa200bc
  .word 0x262468f0
  .word 0x27a500b0
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e220004
  .word 0x2841001e
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
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
  .word 0xa3a300ef
  .word 0x262468f0
  .word 0x27a500ec
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e226af0
  .word 0x24430050
  .word 0x240200f0
  .word 0x0062001a
  .word 0x00001010
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024370
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x2402067b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010082
  .word 0x240201f7
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x46011001
  .word 0xe7a000b0
  .word 0x3c0243ca
  .word 0xafa200b4
  .word 0xe7a100b8
  .word 0x3c024230
  .word 0xafa200bc
  .word 0x262469f0
  .word 0x27a500b0
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e220004
  .word 0x2841001e
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
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
  .word 0xa3a300ef
  .word 0x262469f0
  .word 0x27a500ec
  .word 0x0c087654
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200ec
  .word 0xa3a200ed
  .word 0xa3a200ee
  .word 0x3c024300
  .word 0x44820000
  .word 0x00000000
  .word 0x46160042
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
  .word 0xa3a300ef
  .word 0x34018780
  .word 0x02212021
  .word 0x27a500ec
  .word 0x0c09288c
  .word 0x00000000
  .word 0x34018780
  .word 0x02212021
  .word 0x0c092704
  .word 0x00000000
  .word 0xdfbf0090
  .word 0x7bb50080
  .word 0x7bb40070
  .word 0x7bb30060
  .word 0x7bb20050
  .word 0x7bb10040
  .word 0x7bb00030
  .word 0xc7bf002c
  .word 0xc7be0028
  .word 0xc7bd0024
  .word 0xc7bc0020
  .word 0xc7bb001c
  .word 0xc7ba0018
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00f0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0023B990
asm void func_0023b990(void)
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
  .word 0x8f82b624
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e7b0
  .word 0x24050087
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f92b624
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
  .word 0x8e43000c
  .word 0x24020005
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020004
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020003
  .word 0x10620009
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000002e
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
  .word 0x0000202d
  .word 0x0c083964
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
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
  .word 0x24040003
  .word 0x26456b00
  .word 0x24060063
  .word 0x340183c0
  .word 0x02413821
  .word 0x240801e0
  .word 0x3c020096
  .word 0x8c4200a4
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e43000c
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000002d
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040009
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050006
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050005
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000007
  .word 0x00000000
  .word 0x00101240
  .word 0x02421021
  .word 0x24440110
  .word 0x0c08f230
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020006
  .word 0x1440fff8
  .word 0x00000000
  .word 0x8e43000c
  .word 0x24020005
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020004
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020003
  .word 0x10620009
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000004d
  .word 0x00000000
  .word 0x24040002
  .word 0x0c083964
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000982d
  .word 0x1000003f
  .word 0x00000000
  .word 0x001310c0
  .word 0x00531021
  .word 0x00021040
  .word 0x00531021
  .word 0x00021100
  .word 0x02421021
  .word 0x24500d10
  .word 0x8c420d10
  .word 0x00401027
  .word 0x30420001
  .word 0x14400032
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x10620013
  .word 0x00000000
  .word 0x24020002
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000015
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
  .word 0x1000000a
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
  .word 0x3c140096
  .word 0x2694009c
  .word 0x26040010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620030
  .word 0x1440ffc0
  .word 0x00000000
  .word 0x8e43000c
  .word 0x24020004
  .word 0x10620006
  .word 0x00000000
  .word 0x24020003
  .word 0x10620003
  .word 0x00000000
  .word 0x1000003a
  .word 0x00000000
  .word 0x24040004
  .word 0x0c0839a4
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
  .word 0x10000023
  .word 0x00000000
  .word 0x00131140
  .word 0x00531021
  .word 0x00021140
  .word 0x02421021
  .word 0x24564810
  .word 0x0000a82d
  .word 0x10000017
  .word 0x00000000
  .word 0x00151200
  .word 0x02c21021
  .word 0x24540010
  .word 0x3c100096
  .word 0x2610009c
  .word 0x0280202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26b50001
  .word 0x2aa20004
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620007
  .word 0x1440ffdc
  .word 0x00000000
  .word 0x34018780
  .word 0x02412021
  .word 0x0c092860
  .word 0x00000000
  .word 0x8e44000c
  .word 0x24030004
  .word 0x10830009
  .word 0x00000000
  .word 0x24030003
  .word 0x10830006
  .word 0x00000000
  .word 0x24030002
  .word 0x10830003
  .word 0x00000000
  .word 0x10000024
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
  .word 0x24040003
  .word 0x0c083944
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26444610
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26444610
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e44000c
  .word 0x24030004
  .word 0x10830006
  .word 0x00000000
  .word 0x24030003
  .word 0x10830003
  .word 0x00000000
  .word 0x10000024
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
  .word 0x24040005
  .word 0x0c0839a4
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26444710
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26444710
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e44000c
  .word 0x24030004
  .word 0x10830006
  .word 0x00000000
  .word 0x24030003
  .word 0x10830003
  .word 0x00000000
  .word 0x1000008e
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
  .word 0x24040003
  .word 0x0c0839a4
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x264464f0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x264464f0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e420000
  .word 0x00401027
  .word 0x30420008
  .word 0x10400011
  .word 0x00000000
  .word 0x264465f0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x264465f0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e420000
  .word 0x00401027
  .word 0x30420010
  .word 0x10400013
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x264466f0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x264466f0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x264467f0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x264467f0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e430000
  .word 0x00601827
  .word 0x30630008
  .word 0x10600011
  .word 0x00000000
  .word 0x264468f0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x264468f0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e430000
  .word 0x00601827
  .word 0x30630010
  .word 0x10600013
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x264469f0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x264469f0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
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
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0023C280
void func_0023c280(void)
{
    void* work;
    s32 i;

    K_ASSERT(sSflGround != NULL, 0x87);
    work = sSflGround;
    K_ASSERT((~GROUND_U32(work, 0) & 1) != 0, 0x4f2);
    for (i = 0; i < 6; i++) {
        func_0023c3a0((u8*)work + i * SFL_GROUND_PANEL_STRIDE + SFL_GROUND_PANEL_OFFSET);
    }
    func_0023d2a0();
    func_0023d650();
    GROUND_U32(work, 0xc) = 1;
    GROUND_U32(work, 4) = 0;
    GROUND_U32(work, 8) = 0;
    GROUND_U32(work, 0) |= 1;
}

// FUN_0023C350
u32 sflGround0023c350(void)
{
    K_ASSERT(sSflGround != NULL, 0x87);
    return *sSflGround & 1;
}

/* Removing this loses FUN_0023c3a0 (MATCH nd0 -> MISMATCH nd34) - measured W161. */
#pragma opt_loop_invariants on
// FUN_0023C3A0
void func_0023c3a0(void* destination)
{
    SflGroundViewport* viewport;
    f32 cameraScale;
    f32 width;
    f32 height;
    f32 invWidth;
    f32 rect[4];
    u8* base;
    s32 i;
    s32 j;

    cameraScale = 1.0f / GROUND_F32(kwlnGetMainCamera(), 0x80);
    viewport = sflResGetGroundRaster(1);
    width = (f32)viewport->width;
    height = (f32)viewport->height;
    invWidth = 1.0f / width;
    rect[0] = invWidth;
    rect[1] = 1.0f / height;
    rect[2] = 253.0f / width;
    rect[3] = 51.0f / height;
    func_0021eb80(destination, rect);
    rect[0] = invWidth;
    rect[1] = 52.0f / height;
    rect[2] = 182.0f / width;
    rect[3] = 75.0f / height;
    func_0021eb80((u8*)destination + 0x100, rect);
    for (i = 0; i < 2; i++) {
        j = 0;
        base = (u8*)destination + i * 0x100;
        while (j < 4) {
            GROUND_F32(base + j * 0x40, 8) =
                *(const volatile /* Removing this qualifier loses func_0023c3a0 (MATCH nd0 -> MISMATCH nd40, size 380 -> 380) - measured W170. */ f32*)&D_00960088;
            GROUND_F32(base + j * 0x40, 0x18) = cameraScale;
            j++;
        }
    }
}
#pragma opt_loop_invariants off

// FUN_0023C520
asm void func_0023c520(void* destination, const SflGroundVec2* center,
                   const SflGroundVec2* direction, const SflGroundVec2* scale)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf0080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080b02d
  .word 0x00a0802d
  .word 0x00e0882d
  .word 0x3c070069
  .word 0x24e7e7c0
  .word 0x27a50090
  .word 0x24040008
  .word 0x8ce30000
  .word 0x8ce20004
  .word 0x24e70008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xc4c20004
  .word 0xc4c10000
  .word 0x4602101a
  .word 0x4601081c
  .word 0x46000004
  .word 0x46000b03
  .word 0x00000000
  .word 0x46001003
  .word 0x00000000
  .word 0x00000000
  .word 0x46000347
  .word 0x0c14ba86
  .word 0x00000000
  .word 0xc7818110
  .word 0x46010501
  .word 0x0000302d
  .word 0xc7828348
  .word 0x3c0341cc
  .word 0x44830800
  .word 0x10000014
  .word 0x00000000
  .word 0x0000282d
  .word 0x00061940
  .word 0x007d1821
  .word 0x24640090
  .word 0x1000000a
  .word 0x00000000
  .word 0x000518c0
  .word 0x00831821
  .word 0xc4600000
  .word 0x46020001
  .word 0xe4600000
  .word 0xc4600004
  .word 0x46010001
  .word 0xe4600004
  .word 0x24a50001
  .word 0x28a30004
  .word 0x1460fff5
  .word 0x00000000
  .word 0x24c60001
  .word 0x28c30002
  .word 0x1460ffeb
  .word 0x00000000
  .word 0x0000302d
  .word 0xc78282ac
  .word 0x10000018
  .word 0x00000000
  .word 0x0000282d
  .word 0x00061940
  .word 0x007d1821
  .word 0x24640090
  .word 0x1000000e
  .word 0x00000000
  .word 0x000518c0
  .word 0x00831821
  .word 0xc6200000
  .word 0x46001042
  .word 0xc4600000
  .word 0x46010002
  .word 0xe4600000
  .word 0xc6200004
  .word 0x46001042
  .word 0xc4600004
  .word 0x46010002
  .word 0xe4600004
  .word 0x24a50001
  .word 0x28a30004
  .word 0x1460fff1
  .word 0x00000000
  .word 0x24c60001
  .word 0x28c30002
  .word 0x1460ffe7
  .word 0x00000000
  .word 0x0000a82d
  .word 0x10000027
  .word 0x00000000
  .word 0x0000a02d
  .word 0x00151940
  .word 0x007d1821
  .word 0x24730090
  .word 0x1000001d
  .word 0x00000000
  .word 0x001410c0
  .word 0x02629021
  .word 0x26510004
  .word 0x4600a306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000586
  .word 0xc6350000
  .word 0x4600a306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xc6410000
  .word 0x4600081a
  .word 0x4616addd
  .word 0x4600a306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000586
  .word 0xc6550000
  .word 0x4600a306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0xc6210000
  .word 0x4600081a
  .word 0x4616a81c
  .word 0xe6570000
  .word 0xe6200000
  .word 0x26940001
  .word 0x2a830004
  .word 0x1460ffe2
  .word 0x00000000
  .word 0x26b50001
  .word 0x2aa30002
  .word 0x1460ffd8
  .word 0x00000000
  .word 0x0000302d
  .word 0x10000016
  .word 0x00000000
  .word 0x0000282d
  .word 0x00061940
  .word 0x007d1821
  .word 0x24640090
  .word 0x1000000c
  .word 0x00000000
  .word 0x000518c0
  .word 0x00831821
  .word 0xc4610000
  .word 0xc6000000
  .word 0x46000800
  .word 0xe4600000
  .word 0xc6010004
  .word 0xc4600004
  .word 0x46010000
  .word 0xe4600004
  .word 0x24a50001
  .word 0x28a30004
  .word 0x1460fff3
  .word 0x00000000
  .word 0x24c60001
  .word 0x28c30002
  .word 0x1460ffe9
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000009
  .word 0x00000000
  .word 0x00101200
  .word 0x02c22021
  .word 0x00101140
  .word 0x005d1021
  .word 0x24450090
  .word 0x0c087624
  .word 0x00000000
  .word 0x26100001
  .word 0x2a030002
  .word 0x1460fff6
  .word 0x00000000
  .word 0xdfbf0080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0023C850
void func_0023c850(void* vertices, const SflGroundColor* color)
{
    s32 i;

    for (i = 0; i < 2; i++) {
        func_0021d950((u8*)vertices + i * 0x100, color);
    }
}

/* Removing this loses func_0023c8c0 (MATCH nd0 -> MISMATCH nd228), newly over-window 336/336 -> 352/336 - measured W161. */
#pragma optimization_level 1
// FUN_0023C8C0
void func_0023c8c0(void* vertices)
{
    void* vertices_p;
    const u32* stateTable;
    const u32* drawTable;

    vertices_p = vertices;
    stateTable = D_00960090;
    ((SflGroundRenderStateCallback)(void*)stateTable[0])(9, 2);
    ((SflGroundRenderStateCallback)(void*)stateTable[0])(0x14, 2);
    ((SflGroundRenderStateCallback)(void*)stateTable[0])(8, 0);
    ((SflGroundRenderStateCallback)(void*)stateTable[0])(6, 0);
    RpSkyRenderStateSet(3, 0x71801);
    RpSkyRenderStateSet(2, 0x48);
    ((SflGroundRenderStateCallback)(void*)stateTable[0])(
        1, (u32)sflResGetGroundRaster(1));

    drawTable = D_0096009C;
    ((SflGroundRenderQuadCallback)(void*)drawTable[0])(vertices_p, 4, 0, 1, 2);
    ((SflGroundRenderQuadCallback)(void*)drawTable[0])(vertices_p, 4, 0, 2, 3);
    ((SflGroundRenderQuadCallback)(void*)drawTable[0])(
        (u8*)vertices_p + 0x100, 4, 0, 1, 2);
    ((SflGroundRenderQuadCallback)(void*)drawTable[0])(
        (u8*)vertices_p + 0x100, 4, 0, 2, 3);
}
#pragma optimization_level 2

// FUN_0023CA10
void func_0023ca10(void)
{
    u32* work;
    SflGroundViewport* viewport;
    f32 cameraScale;
    f32 width;
    f32 height;
    f32 rect[4];
    s32 i;
    s32 j;
    u8* tile;
    K_ASSERT(sSflGround != NULL, 0x87);
    work = sSflGround;
    cameraScale = 1.0f / GROUND_F32(kwlnGetMainCamera(), 0x80);

    viewport = sflResGetEffectRaster(5);
    width = (f32)viewport->width;
    height = (f32)viewport->height;
    rect[0] = 0.0f / width;
    rect[1] = 0.0f / height;
    rect[2] = width / width;
    rect[3] = height / height;
    func_0021eb80(GROUND_PTR(work, 0x4710), rect);

    viewport = sflResGetEffectRaster(4);
    width = (f32)viewport->width;
    height = (f32)viewport->height;
    rect[0] = 1.0f / width;
    rect[1] = 0.0f / height;
    rect[2] = 51.0f / width;
    rect[3] = 128.0f / height;
    for (i = 0; i < 7; i++) {
        tile = (u8*)work + i * 0x420 + 0x4810;
        for (j = 0; j < 4; j++) {
            func_0021eb80(tile + j * 0x100 + 0x10, rect);
        }
    }
    for (j = 0; j < 7; j++) {
        tile = (u8*)work + j * 0x420 + 0x4810;
        GROUND_F32(tile, 0x410) = (f32)(RpRandom() & 0xfff) / 4095.0f;
        GROUND_U32(tile, 0x418) = RpRandom();
        GROUND_U32(tile, 0x414) = 0;
    }

    viewport = sflResGetEffectRaster(3);
    width = (f32)viewport->width;
    height = (f32)viewport->height;
    rect[0] = 1.0f / width;
    rect[1] = 2.0f / height;
    rect[2] = 503.0f / width;
    rect[3] = 44.0f / height;
    for (j = 0; j < 6; j++) {
        tile = (u8*)work + j * 0x100;
        func_0021eb80(tile + 0x64f0, rect);
        GROUND_F32(tile, 0x64f8) = D_00960088;
        GROUND_F32(tile, 0x6508) = cameraScale;
    }

    work[1] = 0;
    work[0x1abc] = 0x78;
    work[0] |= 8;
    work[0] |= 0x10;
    work[0] |= 2;
    work[3] = 3;
}

// FUN_0023CD50
u32 sflGround0023cd50(void)
{
    K_ASSERT(sSflGround != NULL, 0x87);
    return *sSflGround & 2;
}

// FUN_0023CDA0
void func_0023cda0(void)
{
    u32* work;
    SflGroundViewport* viewport;
    f32 cameraScale;
    f32 width;
    f32 height;
    f32 rect[4];
    s32 i;
    s32 j;
    u8* tile;

    K_ASSERT(sSflGround != NULL, 0x87);
    work = sSflGround;
    cameraScale = 1.0f / GROUND_F32(kwlnGetMainCamera(), 0x80);

    viewport = sflResGetEffectRaster(5);
    width = (f32)viewport->width;
    height = (f32)viewport->height;
    rect[0] = 0.0f / width;
    rect[1] = 0.0f / height;
    rect[2] = width / width;
    rect[3] = height / height;
    func_0021eb80(GROUND_PTR(work, 0x4710), rect);

    viewport = sflResGetEffectRaster(4);
    width = (f32)viewport->width;
    height = (f32)viewport->height;
    rect[0] = 1.0f / width;
    rect[1] = 0.0f / height;
    rect[2] = 51.0f / width;
    rect[3] = 128.0f / height;
    for (i = 0; i < 7; i++) {
        tile = (u8*)work + i * 0x420 + 0x4810;
        for (j = 0; j < 4; j++) {
            func_0021eb80(tile + j * 0x100 + 0x10, rect);
        }
    }
    for (j = 0; j < 7; j++) {
        tile = (u8*)work + j * 0x420 + 0x4810;
        GROUND_F32(tile, 0x410) = (f32)(RpRandom() & 0xfff) / 4095.0f;
        GROUND_U32(tile, 0x418) = RpRandom();
        GROUND_U32(tile, 0x414) = 0;
    }

    viewport = sflResGetEffectRaster(3);
    width = (f32)viewport->width;
    height = (f32)viewport->height;
    rect[0] = 1.0f / width;
    rect[1] = 47.0f / height;
    rect[2] = 511.0f / width;
    rect[3] = 44.0f / height;
    for (j = 0; j < 6; j++) {
        tile = (u8*)work + j * 0x100;
        func_0021eb80(tile + 0x64f0, rect);
        GROUND_F32(tile, 0x64f8) = D_00960088;
        GROUND_F32(tile, 0x6508) = cameraScale;
    }

    work[1] = 0;
    work[0x1abc] = 0x78;
    work[0] |= 8;
    work[0] |= 0x10;
    work[0] |= 0x20;
    work[3] = 4;
}

// FUN_0023D0E0
u32 sflGround0023d0e0(void)
{
    K_ASSERT(sSflGround != NULL, 0x87);
    return *sSflGround & 0x20;
}

// FUN_0023D130
void func_0023d130(void)
{
    u32* work;
    SflGroundViewport* viewport;
    f32 width;
    f32 height;
    f32 rect[4];

    K_ASSERT(sSflGround != NULL, 0x87);
    work = sSflGround;
    viewport = sflResGetBaseRaster(3);
    width = (f32)viewport->width;
    height = (f32)viewport->height;
    rect[0] = 0.0f / width;
    rect[1] = 0.0f / height;
    rect[2] = width / width;
    rect[3] = height / height;
    func_0021eb80(GROUND_PTR(work, 0x4610), rect);
    func_002496e0(GROUND_PTR(work, SFL_GROUND_WORK_SIZE));
    work[1] = 0;
    work[0] |= 4;
    work[3] = 2;
}

// FUN_0023D1F0
u32 sflGround0023d1f0(void)
{
    K_ASSERT(sSflGround != NULL, 0x87);
    return *sSflGround & 4;
}

// FUN_0023D240
void sflGround0023d240(void)
{
    int base;

    K_ASSERT(sSflGround != NULL, 0x87);
    base = (int)sSflGround;
    FUN_0023d2a0();
    FUN_0023d650();
    *(u32*)(base + 8) = 0;
    *(u32*)(base + 0xc) = 5;
}

// FUN_0023D2A0
void func_0023d2a0(void)
{
    u32* work;
    SflGroundViewport* viewport;
    f32 width;
    f32 height;
    f32 rect0;
    f32 rect1;
    f32 rect2;
    f32 rect3;
    f32 rect[4];
    s32 i;
    s32 j;
    u32* particle;

    K_ASSERT(sSflGround != NULL, 0x87);
    work = sSflGround;
    viewport = sflResGetGroundRaster(2);
    width = (f32)viewport->width;
    height = (f32)viewport->height;
    i = 0;
    rect0 = 0.0f / width;
    rect1 = 1.0f / height;
    rect2 = 63.0f / width;
    rect3 = 81.0f / height;
    for (; i < 48; i++) {
        particle = (u32*)GROUND_PTR(GROUND_PTR(work, i * SFL_GROUND_PARTICLE_STRIDE),
                                    SFL_GROUND_PARTICLE_OFFSET);
        GROUND_U32(particle, 0) = 0;
        rect[0] = rect0;
        rect[1] = rect1;
        rect[2] = rect2;
        rect[3] = rect3;
        func_0021eb80(GROUND_PTR(particle, 0x10), rect);
    }
    for (j = 0; j < 48; j++) {
        particle = (u32*)GROUND_PTR(GROUND_PTR(work, j * SFL_GROUND_PARTICLE_STRIDE),
                                    SFL_GROUND_PARTICLE_OFFSET);
        GROUND_U32(particle, 0) |= 1;
        particle[0x45] = 0x78 + RpRandom() % 0x3c;
        GROUND_U32(particle, 4) = RpRandom() % 3;
        GROUND_F32(particle, 0x118) = -20.0f + 680.0f * (f32)(RpRandom() & 0xfff) / 4095.0f;
        GROUND_F32(particle, 0x11c) = -20.0f + 488.0f * (f32)(RpRandom() & 0xfff) / 4095.0f;
        GROUND_F32(particle, 0x120) = 640.0f * (f32)(RpRandom() & 0xfff) / 4095.0f;
        GROUND_F32(particle, 0x124) = 448.0f * (f32)(RpRandom() & 0xfff) / 4095.0f;
        particle[0x44] = RpRandom() % particle[0x45];
    }
}

/* Removing this loses FUN_0023d650 (MATCH nd0 -> MISMATCH nd60) - measured W161. */
#pragma opt_loop_invariants on
// FUN_0023D650
void func_0023d650(void)
{
    u32* work;
    SflGroundViewport* viewport;
    f32 cameraScale;
    f32 width;
    f32 height;
    f32 rect[4];
    s32 column;
    u32 white;
    s32 row;

    K_ASSERT(sSflGround != NULL, 0x87);
    work = sSflGround;
    cameraScale = 1.0f / GROUND_F32(kwlnGetMainCamera(), 0x80);
    viewport = sflResGetGroundRaster(0);
    width = (f32)viewport->width;
    height = (f32)viewport->height;
    rect[0] = 1.0f / width;
    rect[1] = 1.0f / height;
    rect[2] = (width - 2.0f) / width;
    rect[3] = (height - 2.0f) / height;
    func_0021eb80(GROUND_PTR(work, 0x10), rect);
    white = 0x437f0000;
    row = 0;
    while (row < 9) {
        column = 0;
        while (column < 11) {
            u8* tile;
            tile = (u8*)work + SFL_GROUND_TILE_OFFSET +
                   (row * 11 + column) * SFL_GROUND_TILE_STRIDE;
            GROUND_F32(tile, 8) = *(const volatile /* Removing this qualifier loses func_0023d650 (MATCH nd0 -> MISMATCH nd60, size 336 -> 336) - measured W170. */ f32*)&D_00960088;
            GROUND_F32(tile, 0x18) = cameraScale;
            GROUND_U32(tile, 0x20) = white;
            GROUND_U32(tile, 0x24) = white;
            GROUND_U32(tile, 0x28) = white;
            GROUND_U32(tile, 0x2c) = white;
            column++;
        }
        row++;
    }
}
#pragma opt_loop_invariants reset



static u32* sSflPanel; // DAT_007ce318
/* This owner begins at 0x0023D7A0; 0x0023F480 switches to bi_main.c/DAT_007CE31C. */

extern int DAT_0068e800[];
extern float DAT_0068e810[];
extern float DAT_0068e820[];
extern int DAT_0068e830[];
extern int DAT_0068e834[];
extern float DAT_0068e840[];
extern float DAT_0068e844[];
extern float DAT_0068e850[];
extern float DAT_0068e854[];
extern float DAT_0068e858;
extern float DAT_007cad78;
extern float DAT_007cae0c;
extern float DAT_007caf38;
extern float DAT_007cb034;
typedef int (*code)(...);
extern code DAT_00960090[];
extern code DAT_0096009c[];
#pragma alias DAT_00960090_abs DAT_00960090
extern u8 DAT_00960090_abs[];
#pragma alias DAT_0096009c_abs DAT_0096009c
extern u8 DAT_0096009c_abs[];
void func_0021d890_y2();
void func_0021d8e0_y2();
void func_0021d950_y2();
void func_0021e170_y2();
void func_0021eb80_y2();
void func_004cb750();
u32 func_00255130();
void scrClearTextBox();
float sinf_y2(float);
float cosf_y2(float);
void func_0023dac0(void);

// FUN_0023D7A0
void func_0023d7a0(u32* work)
{
    work[0] = 0;
    sSflPanel = work;
}





 
