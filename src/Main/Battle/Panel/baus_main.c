#include "Utils.h"
#include "Kosaka/k_assert.h"

#pragma alias func_0021d950_y2 func_0021d950
#pragma alias func_00209a00_y2 func_00209a00
#pragma alias func_00209940_y2 func_00209940
#pragma alias func_0021cce0_y2 func_0021cce0
#pragma alias func_00209c00_y2 func_00209c00
#pragma alias RpSkyRenderStateSet_y2 RpSkyRenderStateSet



typedef struct PanelVec3 {
    f32 x;
    f32 y;
    f32 z;
} PanelVec3;

typedef struct PanelQuaternion {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} PanelQuaternion;

typedef struct PanelVideoMode {
    s32 width;
    s32 height;
    s32 depth;
    u32 flags;
    s32 refreshRate;
    s32 format;
} PanelVideoMode;

typedef struct PanelMatrix {
    PanelVec3 right;
    u32 flags;
    PanelVec3 up;
    u32 pad1;
    PanelVec3 at;
    u32 pad2;
    PanelVec3 pos;
    u32 pad3;
} PanelMatrix;

typedef struct PanelTransform {
    u8 unknown00[0x10];
    PanelQuaternion rotation;
    PanelVec3 translation;
    PanelVec3 scale;
    void* model;
} PanelTransform;
extern void func_0020ca90(PanelMatrix* output, const PanelTransform* transform);

extern u32 datGetScenarioMode(void);
extern u32 func_0021c3f0(s32 texture);
extern void* func_0021cca0(u32 texture, s32 frame);
extern u32 func_0021cce0_y2(u32 frame);
extern void func_0021d3b0(void* destination, void* frame);
extern void func_0021d8e0(void* destination, const void* layout);
extern void func_0021d950_y2(void* destination, const void* color);
extern void func_004cde90(void* resource);
extern void* kwlnGetMainCamera(void);
extern void* func_004ca5b0(void);
extern void func_004ca560(void* viewport, void* cameraData);
extern void func_004c3760(void* matrix, void* source, s32 mode);
extern void func_004c6c60(PanelVec3* destination, const PanelVec3* source,
                          const PanelMatrix* matrix);

extern PanelVec3 D_0068E0C8;
#pragma alias D_0068E0C8_abs D_0068E0C8
extern u8 D_0068E0C8_abs[];
extern PanelVec3 D_0068E0D8;
#pragma alias D_0068E0D8_abs D_0068E0D8
extern u8 D_0068E0D8_abs[];
extern PanelVec3 D_0068E0E8;
#pragma alias D_0068E0E8_abs D_0068E0E8
extern u8 D_0068E0E8_abs[];
extern PanelVec3 D_0068E0F8;
#pragma alias D_0068E0F8_abs D_0068E0F8
extern u8 D_0068E0F8_abs[];

extern void* func_004c38c0(void);
extern void func_004c3880(void* matrix);
extern void* func_004cb2f0(void* model);
extern void RwMatrixScale(void* matrix, const void* scale, s32 combine);
extern void RwMatrixTranslate(void* matrix, const void* translation, s32 combine);
extern void RwMatrixRotate(void* matrix, const void* axis, f32 angle, s32 combine);
extern void RwV3dTransformPoint(void* out, const void* in, const void* matrix);
extern void FUN_004c6be0(void* out, const void* in, const void* matrix);
extern void RwV3dNormalize(void* out, const void* in);
extern void RpSkyRenderStateSet_y2(s32 state, void* value);
extern void RwRenderStateSet(s32 state, void* value);
extern void printf(const char*, ...);
extern int sprintf(char*, const char*, ...);
extern u32 strlen(const char*);

extern char D_006850C0[];
extern char D_006871C0[];
extern char D_006892C0[];
extern char D_0068AB80[];
extern char D_0068C440[];
extern char D_0068C760[];
extern char D_0068CA80[];
extern char D_0068CDE0[];
extern char D_0068D140[];
extern char D_0068D8F0[];
extern char D_0068D910[];
extern char D_0068D930[];
extern char D_0068DE20[];
extern char D_0068DF20[];
extern char D_0068DF30[];
extern char D_0068DF60[];
extern char D_0068E020[];
extern char D_0068DD20[];
extern u16 D_00875A90[];
extern char D_0068E0B0[];
extern void func_00209ba0(void* destination, s32 digit);
extern void func_0020c7b0(u8* work);
extern void func_0020cda0(u8* work);
extern void* memcpy(void* destination, const void* source, u32 size);
extern void func_004f1ed0(void* vertices, u32 count, void* matrix, u32 stride);
extern void func_004f1fd0(u32 primitive, void* indices, u32 count);
extern void func_004f1f80(void);
extern void (*D_00960090)(u32 state, u32 value);
extern void func_0020ccc0(void* work, const u8* color);
extern char D_0068E0A0[];
extern u8 D_0068E090[];
extern void func_0020d500(s32* work, void* matrix);
extern u32 func_0021a3a0(void);
extern u32 func_0021a410(void);
extern u32 func_0021a480(s32 a, s32 b);
extern u32 func_0021a590(u16 value);
extern u32 func_0021b3a0(s32 value);
extern u32 func_0021b420(s32 value);

extern void* D_0068E108;
extern f32 D_0068E110;
extern f32 fGpffff8318;
extern f32 fGpffff8320;
extern f32 fGpffff8324;
extern f32 fGpffff831c;
extern f32 fGpffff8338;
extern f32 fGpffff8334;


extern f32 DAT_007cadd4;
extern f32 DAT_007cad7c;
extern f32 DAT_007cad74;
extern f32 DAT_007caee8;
extern f32 FUN_0052e878(f32 angle);
extern f32 FUN_0052e6d8(f32 angle);
extern void func_0020cf20(void* destination, PanelTransform* transform);
typedef struct BattlePanelWork BattlePanelWork;
typedef struct BtlUnit BtlUnit;
typedef struct RwV3d {
    f32 x;
    f32 y;
    f32 z;
} RwV3d;
BattlePanelWork* gBattlePanelWork;
extern void func_0021cd00(void* frame, f32* rectangle);
extern void func_0021d950(void* destination, const u8* color);
extern void func_0021eb80(void* destination, const f32* layout);
extern void* btlOrderGetUnitByIdx(u16 index);
extern u32 datCalcIsDead(void* calc, u32 mode);
extern void* func_001ff430(u32 id);
extern u32 datCalcGetHp(void* calc);
extern u32 datCalcGetMaxHp(void* calc);
extern void func_00280580(BtlUnit* unit, RwV3d* position);
extern u32 func_002d20a0(const RwV3d* position, RwV3d* projected);
extern void func_00208f60(void);
extern void func_00209a00(void* dst, u32 count, u32 slot, u32 align, f32 scale, const f32* origin);
extern void func_00209940(void* dst, u32 capacity, s32 value);
extern void func_0020c320(void* dst, u32 mode);
extern void func_0020c400(void* dst, u32 mode);
extern void func_0020c500(void* dst, u32 mode);
extern void func_0020c590(void* dst);
extern void func_0020c660(void* dst);
extern u32 func_0021cce0(void* frame);
extern u32 func_00209c00(void);
extern void RpSkyRenderStateSet(s32 state, u32 value);
extern u8* iGpffffb6fc;
extern f32 fGpffff7f20;
typedef void (*BpSetRenderState)(u32 state, u32 value);
typedef void (*BpRenderQuad)(void* vertices, u32 count, u32 first, u32 second, u32 third);
extern u32 D_00960090_y2[];
extern u32 D_0096009C[];

static void panel_init_common(u8* work, u32 state)
{
    s32 i;

    func_00209ea0(work);
    *(u32*)(work + 4) = state;
    func_0020c7b0(work + 0xe0);
    for (i = 0; i < 4; i++) {
        work[0x184 + i] = 0xff;
        work[0x1a8 + i] = 0xff;
        work[0x1cc + i] = 0xff;
        work[0x1f0 + i] = 0xff;
    }
}
static u8* BP_WORK(void)
{
    return (u8*)gBattlePanelWork;
}

// FUN_00208ad0
void func_00208ad0(BattlePanelWork* work)
{
    K_ASSERT(gBattlePanelWork == NULL, 0x4e);
    *(u32*)work = 0;
    gBattlePanelWork = work;
}

// FUN_00208b20
void func_00208b20(void)
{
    gBattlePanelWork = NULL;
}

/* W419 negative probes: iGpffffb6fc .sdata alias and 24 declaration permutations left FUN_00208B30 at nd457/1060B, window1072B, rate43.11%; bausMul on FUN_00208F60 frame-width product left nd727/1360B, window1424B, rate53.46%, rectangle product regressed nd728/1360B, window1424B, rate53.53%; reverted. */
// FUN_00208b30
#ifndef PC_BUILD
asm void func_00208b30(void)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82b5fc
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248450a8
  .word 0x24050047
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b5fc
  .word 0x8f93b6fc
  .word 0x24040001
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040882d
  .word 0x24040005
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040b02d
  .word 0x0000902d
  .word 0x3244ffff
  .word 0x0c0a6b68
  .word 0x00000000
  .word 0x0040a02d
  .word 0x1280001b
  .word 0x00000000
  .word 0x2a420014
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248450a8
  .word 0x2405006f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e840a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248450a8
  .word 0x24050070
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e8300a8
  .word 0x00121080
  .word 0x005d1021
  .word 0xac430080
  .word 0x26520001
  .word 0x1000ffe1
  .word 0x00000000
  .word 0x0000a02d
  .word 0x8e750150
  .word 0x10000014
  .word 0x00000000
  .word 0x8ea2009c
  .word 0x00401027
  .word 0x30420008
  .word 0x1440000e
  .word 0x00000000
  .word 0x8ea40a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x8ea300a8
  .word 0x00141140
  .word 0x00541021
  .word 0x00021140
  .word 0x02021021
  .word 0xac430014
  .word 0x26940001
  .word 0x8eb50a34
  .word 0x16a0ffec
  .word 0x00000000
  .word 0x8e730158
  .word 0x10000014
  .word 0x00000000
  .word 0x8e62009c
  .word 0x00401027
  .word 0x30420008
  .word 0x1440000e
  .word 0x00000000
  .word 0x8e640a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x8e6300a8
  .word 0x00141140
  .word 0x00541021
  .word 0x00021140
  .word 0x02021021
  .word 0xac430014
  .word 0x26940001
  .word 0x8e730a34
  .word 0x1660ffec
  .word 0x00000000
  .word 0xae142950
  .word 0x0000a82d
  .word 0x1000003d
  .word 0x00000000
  .word 0x00151140
  .word 0x00551021
  .word 0x00021140
  .word 0x02021021
  .word 0x24540010
  .word 0xac400010
  .word 0xac400228
  .word 0x0000382d
  .word 0x24050009
  .word 0x2404ffff
  .word 0x24030002
  .word 0x10000016
  .word 0x00000000
  .word 0x8e860004
  .word 0x00071080
  .word 0x005d1021
  .word 0x8c420080
  .word 0x14c2000f
  .word 0x00000000
  .word 0x10e5000a
  .word 0x00000000
  .word 0x8e820218
  .word 0x00021080
  .word 0x02821021
  .word 0xac470210
  .word 0x8e820218
  .word 0x24420001
  .word 0xae820218
  .word 0x10000004
  .word 0x00000000
  .word 0xae840210
  .word 0xae840214
  .word 0xae830218
  .word 0x24e70001
  .word 0x00f2102a
  .word 0x1440ffe9
  .word 0x00000000
  .word 0x8e820218
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248450a8
  .word 0x240500aa
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e840004
  .word 0x0c07fd0c
  .word 0x00000000
  .word 0x0040982d
  .word 0x8c440a2c
  .word 0x0c0bff5c
  .word 0x00000000
  .word 0x3042ffff
  .word 0xae820008
  .word 0x8e640a2c
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3042ffff
  .word 0xae82000c
  .word 0x26b50001
  .word 0x8e022950
  .word 0x02a2102a
  .word 0x1440ffc1
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000043
  .word 0x00000000
  .word 0x00141140
  .word 0x00541021
  .word 0x00021140
  .word 0x02021021
  .word 0x24520010
  .word 0x0000982d
  .word 0x10000026
  .word 0x00000000
  .word 0x00131080
  .word 0x02421021
  .word 0x8c430210
  .word 0x2402ffff
  .word 0x1462000a
  .word 0x00000000
  .word 0x00131200
  .word 0x02421021
  .word 0x24050001
  .word 0x00b33023
  .word 0x24440010
  .word 0x0c082650
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x1460000d
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050046
  .word 0x0c087328
  .word 0x00000000
  .word 0x00131a00
  .word 0x02431821
  .word 0x24640010
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x00131200
  .word 0x02421021
  .word 0x24660001
  .word 0x24440010
  .word 0x24050001
  .word 0x0c082650
  .word 0x00000000
  .word 0x26730001
  .word 0x8e420218
  .word 0x0262102a
  .word 0x1440ffd8
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c087328
  .word 0x00000000
  .word 0x26440320
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x02c0202d
  .word 0x24050004
  .word 0x0c087328
  .word 0x00000000
  .word 0x26440220
  .word 0x0040282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x26940001
  .word 0x8e022950
  .word 0x0282102a
  .word 0x1440ffbb
  .word 0x00000000
  .word 0x0c0823d8
  .word 0x00000000
  .word 0x8e030000
  .word 0x34630001
  .word 0xae030000
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00208f60
#ifndef PC_BUILD
asm void func_00208f60(void)
{
  .set noreorder
  .word 0x27bdff00
  .word 0xffbf0090
  .word 0x7fb60080
  .word 0x7fb50070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7ba0018
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f82b5fc
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248450a8
  .word 0x24050047
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f95b5fc
  .word 0x24040001
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040902d
  .word 0x24040005
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040b02d
  .word 0x0000882d
  .word 0x1000012a
  .word 0x00000000
  .word 0x00111140
  .word 0x00511021
  .word 0x00021140
  .word 0x02a22021
  .word 0x24930010
  .word 0x8c830010
  .word 0x2402fffe
  .word 0x00621024
  .word 0xac820010
  .word 0x8c840014
  .word 0x0c07fd0c
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a500d8
  .word 0x0c0a0160
  .word 0x00000000
  .word 0x27a400d8
  .word 0x27a500f0
  .word 0x0c0b4828
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x8e630000
  .word 0x34630001
  .word 0xae630000
  .word 0x8e630000
  .word 0x30630001
  .word 0x1460010c
  .word 0x00000000
  .word 0xc7a000f0
  .word 0x3c02425c
  .word 0x44821000
  .word 0x00000000
  .word 0x46020601
  .word 0x3c0241a0
  .word 0x44820800
  .word 0xc7a000f4
  .word 0x46020001
  .word 0x46000dc0
  .word 0x0000802d
  .word 0x3c02421c
  .word 0x44820000
  .word 0x00000000
  .word 0x46180540
  .word 0x3c02423c
  .word 0x44820000
  .word 0x00000000
  .word 0x46170040
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d01
  .word 0x3c024220
  .word 0x44820000
  .word 0x00000000
  .word 0x46170680
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46150640
  .word 0x10000062
  .word 0x00000000
  .word 0x00101080
  .word 0x02621021
  .word 0x24440210
  .word 0x8c430210
  .word 0x14600022
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1062001f
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050046
  .word 0x0c087328
  .word 0x00000000
  .word 0xe7b500b0
  .word 0xe7b400b4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000b8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000bc
  .word 0x00101200
  .word 0x02621021
  .word 0x24540010
  .word 0x0280202d
  .word 0x27a500b0
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
  .word 0xa3a200ff
  .word 0x0280202d
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x1000003a
  .word 0x00000000
  .word 0x24020001
  .word 0x12020010
  .word 0x00000000
  .word 0x12000003
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0xe7b500e8
  .word 0xe7ba00ec
  .word 0x3c023f80
  .word 0x4482b000
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
  .word 0xa3a200ff
  .word 0x10000009
  .word 0x00000000
  .word 0xe7b900e8
  .word 0xe7ba00ec
  .word 0xc79680e0
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
  .word 0xa3a200ff
  .word 0x8c830000
  .word 0x2402ffff
  .word 0x1462000e
  .word 0x00000000
  .word 0x00101200
  .word 0x02621021
  .word 0x24540010
  .word 0x24050001
  .word 0x00b03023
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0280202d
  .word 0x27a700e8
  .word 0x0c082680
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x00101200
  .word 0x02621021
  .word 0x24540010
  .word 0x24660001
  .word 0x0280202d
  .word 0x24050001
  .word 0x27a700e8
  .word 0x4600b306
  .word 0x0c082680
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x26100001
  .word 0x8e620218
  .word 0x0202102a
  .word 0x1440ff9c
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c03425c
  .word 0x44830800
  .word 0x00000000
  .word 0x46180800
  .word 0xe7a000b0
  .word 0x46170800
  .word 0xe7a000b4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000b8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000bc
  .word 0x26640320
  .word 0x27a500b0
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
  .word 0x3c02437f
  .word 0x44820800
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
  .word 0x26640320
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x02c0202d
  .word 0x24050004
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x0200202d
  .word 0x27a500a0
  .word 0x0c087340
  .word 0x00000000
  .word 0xc6600008
  .word 0x46800060
  .word 0xc660000c
  .word 0x46800020
  .word 0x46000d03
  .word 0xc7a100a0
  .word 0xc7a000a8
  .word 0x46010001
  .word 0x46140002
  .word 0xe7a100b0
  .word 0xc7a100a4
  .word 0xe7a100b4
  .word 0xe7a000b8
  .word 0xc7a000ac
  .word 0x46010001
  .word 0xe7a000bc
  .word 0x26640220
  .word 0x27a500b0
  .word 0x0c087ae0
  .word 0x00000000
  .word 0x3c02425c
  .word 0x44820800
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46180000
  .word 0x46000800
  .word 0xe7a000b0
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46170000
  .word 0x46000800
  .word 0xe7a000b4
  .word 0xc600000c
  .word 0x46800020
  .word 0x46140002
  .word 0xe7a000b8
  .word 0xc6000010
  .word 0x46800020
  .word 0xe7a000bc
  .word 0x26640220
  .word 0x27a500b0
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
  .word 0x3c02437f
  .word 0x44820800
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
  .word 0x26640220
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x26310001
  .word 0x8ea32950
  .word 0x0223182a
  .word 0x1460fed4
  .word 0x00000000
  .word 0xdfbf0090
  .word 0x7bb60080
  .word 0x7bb50070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7ba0018
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0100
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002094f0
void func_002094f0(void)
{
    K_ASSERT(gBattlePanelWork != NULL, 0x47);
    *(u32*)gBattlePanelWork &= ~1u;
}

// FUN_00209540
void func_00209540(void)
{
    u32* work;

    K_ASSERT(gBattlePanelWork != NULL, 0x47);
    work = (u32*)gBattlePanelWork;
    if ((~*work & 1) != 0) {
        return;
    } else {
        func_00208f60();
    }
}

// FUN_002095a0
void func_002095a0(void)
{
    u8* work;
    u32 texture1;
    u32 texture5;
    s32 i;

    K_ASSERT(gBattlePanelWork != NULL, 0x47);
    work = (u8*)gBattlePanelWork;
    texture1 = func_0021c3f0(1);
    texture5 = func_0021c3f0(5);
    if ((~*(u32*)work & 1) == 0) {
        BpSetRenderState* setRenderState = (BpSetRenderState*)D_00960090_y2;

        (*setRenderState)(9, 2);
        (*setRenderState)(0x14, 2);
        (*setRenderState)(8, 0);
        (*setRenderState)(6, 0);
        for (i = 0; i < *(s32*)(work + 0x2950); i++) {
            u8* slot = work + i * 0x420 + 0x10;
            s32 j;

            if ((*(u32*)slot & 1) != 0) {
                continue;
            }
            {
                BpSetRenderState* slotRenderState;
                BpRenderQuad* slotRenderQuad;
                void* frame;

                frame = func_0021cca0(texture1, 1);
                slotRenderState = (BpSetRenderState*)D_00960090_y2;
                (*slotRenderState)(1, func_0021cce0(frame));
                RpSkyRenderStateSet(3, 0x717fb);
                RpSkyRenderStateSet(2, 0x44);
                slotRenderQuad = (BpRenderQuad*)D_0096009C;
                (*slotRenderQuad)(slot + 0x320, 4, 0, 1, 2);
                (*slotRenderQuad)(slot + 0x320, 4, 0, 2, 3);
                (*slotRenderState)(
                    1, func_0021cce0(func_0021cca0(texture5, 4)));
                RpSkyRenderStateSet(3, 0x717fb);
                RpSkyRenderStateSet(2, 0x44);
                (*slotRenderQuad)(slot + 0x220, 4, 0, 1, 2);
                (*slotRenderQuad)(slot + 0x220, 4, 0, 2, 3);
                RpSkyRenderStateSet(3, 0x717fb);
                RpSkyRenderStateSet(2, 0x44);
            }
            for (j = 0; j < *(s32*)(slot + 0x218); j++) {
                s32 value = *(s32*)(slot + 0x210 + j * 4);
                u8* quad;
                BpRenderQuad* renderQuad;

                if ((value == 0) && (value != -1)) {
                    (*setRenderState)(
                        1, func_0021cce0(func_0021cca0(texture1, 0x46)));
                } else {
                    (*setRenderState)(1, func_00209c00());
                }
                quad = slot + 0x10 + (j << 8);
                renderQuad = (BpRenderQuad*)D_0096009C;
                (*renderQuad)(quad, 4, 0, 1, 2);
                (*renderQuad)(quad, 4, 0, 2, 3);
            }
        }
    }
}

// FUN_00209940
void func_00209940_y2(void* destination, s32 capacity, s32 value)
{
    char digits[256];
    s32 length;
    s32 i;

    sprintf(digits, "%d", value);
    length = strlen(digits);
    K_ASSERT(capacity >= length, 0x1c8);
    for (i = 0; i < length; i++) {
        func_00209ba0((u8*)destination + (i << 8), digits[length - 1 - i] - 0x30);
    }
}

















// Reconstructed state interpolation, UV projection, and corner rotation from retail control flow.
// Remaining excess is retained pending MWCCPS2 register-allocation and scheduling convergence.















/* Removing this worsens FUN_0020cda0 (nd12 -> nd259) and 1 more - measured W161. */



#pragma alias D_00960090_y2 D_00960090


// FUN_00209a00
void func_00209a00_y2(void* destination, s32 capacity, s32 value, const f32* origin, f32 scale)
{
    f32 layout[4];
    char digits[256];
    void* texture;
    void* frame;
    s32 i;
    s32 length;

    texture = (void*)func_0021c3f0(1);
    sprintf(digits, "%d", value);
    length = strlen(digits);
    K_ASSERT(capacity >= length, 0x1de);
    for (i = 0; i < length; i++) {
        frame = func_0021cca0((u32)texture, value + 0x2e);
        layout[0] = origin[0] + (f32)((length - 1 - i) * 15);
        layout[1] = origin[1];
        layout[2] = (f32)*(s32*)((u8*)frame + 0xc) * scale;
        layout[3] = (f32)*(s32*)((u8*)frame + 0x10) * scale;
        func_0021d8e0((u8*)destination + (i << 8), layout);
    }
    for (; length < capacity; length++) {
        layout[0] = origin[0];
        layout[1] = origin[1];
        layout[2] = 0.0f;
        layout[3] = 0.0f;
        func_0021d8e0((u8*)destination + (length << 8), layout);
    }
}

// FUN_00209ba0
void func_00209ba0(void* destination, s32 digit)
{
    u32 texture;
    u32 frame;

    texture = func_0021c3f0(1);
    frame = (u32)func_0021cca0(texture, digit + 0x2e);
    func_0021d3b0(destination, (void*)frame);
}

/*
 * The panel keeps a compact list of living battle units followed by one
 * 0x240-byte status slot per unit.  Keep the list construction in one place;
 * rendering and animation updates consume only these slots.
 */
// FUN_00209c00
u32 func_00209c00_y2(void)
{
    return func_0021cce0_y2((u32)func_0021cca0(func_0021c3f0(1), 0x2e));
}

// FUN_00209c40
char* func_00209c40(void)
{
    return datGetScenarioMode() ? D_006871C0 : D_006850C0;
}
// FUN_00209c80
char* func_00209c80(void)
{
    return datGetScenarioMode() ? D_0068AB80 : D_006892C0;
}

// FUN_00209cc0
char* func_00209cc0(void)
{
    return datGetScenarioMode() ? D_0068C760 : D_0068C440;
}

// FUN_00209d00
char* func_00209d00(void)
{
    return datGetScenarioMode() ? D_0068CDE0 : D_0068CA80;
}
