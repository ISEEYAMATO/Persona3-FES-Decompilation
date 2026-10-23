#include "Utils.h"
#include "Kosaka/k_assert.h"

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
extern u32 func_0021cce0(u32 frame);
extern void func_0021d3b0(void* destination, void* frame);
extern void func_0021d8e0(void* destination, const void* layout);
extern void func_0021d950(void* destination, const void* color);
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
extern void RpSkyRenderStateSet(s32 state, void* value);
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









// FUN_00209d40
s32 func_00209d40(const s16* value)
{
    switch (*value) {
    case 0:
        return 0;
    case 1:
        return 1;
    case -1:
        return 2;
    default:
        K_ASSERT(0, 0x8c);
        return -1;
    }
}

// FUN_00209dc0
char* func_00209dc0(void)
{
    return D_0068D140;
}

// FUN_00209dd0
char* func_00209dd0(void)
{
    return datGetScenarioMode() ? D_0068D910 : D_0068D8F0;
}

// FUN_00209e10
char* func_00209e10(void)
{
    return D_0068D930;
}

// FUN_00209e20
char* func_00209e20(void)
{
    return datGetScenarioMode() ? D_0068DE20 : D_0068DD20;
}

// FUN_00209e60
char* func_00209e60(void)
{
    return D_0068DF20;
}

// FUN_00209e70
char* func_00209e70(void)
{
    return D_0068DF30;
}

// FUN_00209e80
char* func_00209e80(void)
{
    return D_0068DF60;
}

// FUN_00209e90
char* func_00209e90(void)
{
    return D_0068E020;
}

// FUN_00209ea0
void func_00209ea0(u8* work)
{
    *(u32*)(work + 0x00) = 0;
    *(u32*)(work + 0x38) = 0;
    *(u32*)(work + 0x20) = 0;
    *(u32*)(work + 0x24) = 0;
    *(u32*)(work + 0x28) = 0;
    *(f32*)(work + 0x1c) = 1.0f;
    *(u32*)(work + 0x10) = 0;
    *(u32*)(work + 0x14) = 0;
    *(u32*)(work + 0x18) = 0;
    *(f32*)(work + 0x2c) = 1.0f;
    *(f32*)(work + 0x30) = 1.0f;
    *(f32*)(work + 0x34) = 1.0f;
    *(u32*)(work + 0x3c) = 0;
    *(u8*)(work + 0x40) = 0xff;
    *(u8*)(work + 0x41) = 0xff;
    *(u8*)(work + 0x42) = 0xff;
    *(u8*)(work + 0x43) = 0xff;
    *(u32*)(work + 0xdc) = 0;
}

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

// FUN_00209f00
void func_00209f00(void* work)
{
    u8* panel = (u8*)work;

    PanelVec3 v1;
    PanelVec3 v2;
    PanelVec3 v3;
    PanelVec3 v4;
    PanelVec3 v5;
    PanelVec3 v6;
    PanelVec3 v7;
    PanelVec3 v8;
    PanelVec3 v9;
    PanelVec3 v10;
    PanelVec3 v11;
    PanelVec3 v12;
    PanelVec3 v13;
    PanelVec3 v14;
    PanelVec3 v15;
    PanelVec3 v16;
    PanelVec3 v17;
    PanelVec3 v18;
    PanelVec3 v19;
    PanelVec3 v20;
    PanelVec3 v21;
    PanelVec3 v22;
    PanelVec3 v23;
    PanelVec3 v24;
    PanelVec3 v25;
    PanelVec3 v26;
    PanelVec3 v27;
    PanelVec3 v28;
    PanelVec3 v29;
    PanelVec3 v30;
    PanelVec3 v31;
    PanelVec3 v32;
    PanelVec3 v33;
    PanelVec3 v34;
    PanelVec3 v35;
    PanelVec3 v36;
    f32 valA;
    f32 valB;
    f32 valC;
    f32 valD;

    func_00209ea0(panel);
    *(u32*)(panel + 0x4) = 0;
    func_0020c7b0(panel + 0xe0);
    *(u32*)(panel + 0x170) = 0;
    v1.x = valA = fGpffff8320;
    v1.y = valB = fGpffff8324;
    v1.z = 0.0f;
    *(PanelVec3*)(panel + 0x178) = v1;
    v2.x = -valA;
    v2.y = valB;
    v2.z = 0.0f;
    *(PanelVec3*)(panel + 0x19c) = v2;
    v3.x = -valA;
    v3.y = -valB;
    v3.z = 0.0f;
    *(PanelVec3*)(panel + 0x1c0) = v3;
    v4.x = valA;
    v4.y = -valB;
    v4.z = 0.0f;
    *(PanelVec3*)(panel + 0x1e4) = v4;
    panel[0x184] = 255;
    panel[0x185] = 255;
    panel[0x186] = 255;
    panel[0x187] = 255;
    panel[0x1a8] = 255;
    panel[0x1a9] = 255;
    panel[0x1aa] = 255;
    panel[0x1ab] = 255;
    panel[0x1cc] = 255;
    panel[0x1cd] = 255;
    panel[0x1ce] = 255;
    panel[0x1cf] = 255;
    panel[0x1f0] = 255;
    panel[0x1f1] = 255;
    panel[0x1f2] = 255;
    panel[0x1f3] = 255;
    *(u32*)(panel + 0x194) = 0x3f630000;
    *(u32*)(panel + 0x1b8) = 0x3de80000;
    *(u32*)(panel + 0x1dc) = 0x3de80000;
    *(u32*)(panel + 0x200) = 0x3f630000;
    *(u32*)(panel + 0x198) = 0x3db80000;
    *(u32*)(panel + 0x1bc) = 0x3db80000;
    *(u32*)(panel + 0x1e0) = 0x3f690000;
    *(u32*)(panel + 0x204) = 0x3f690000;
    v5.x = 3.0f;
    v5.y = valC = fGpffff8318;
    v5.z = 0.0f;
    *(PanelVec3*)(panel + 0x208) = v5;
    v6.x = -3.0f;
    v6.y = valC;
    v6.z = 0.0f;
    *(PanelVec3*)(panel + 0x22c) = v6;
    v7.x = -3.0f;
    v7.y = valD = fGpffff831c;
    v7.z = 0.0f;
    *(PanelVec3*)(panel + 0x250) = v7;
    v8.x = 3.0f;
    v8.y = valD;
    v8.z = 0.0f;
    *(PanelVec3*)(panel + 0x274) = v8;
    panel[0x214] = 255;
    panel[0x215] = 255;
    panel[0x216] = 255;
    panel[0x217] = 255;
    panel[0x238] = 255;
    panel[0x239] = 255;
    panel[0x23a] = 255;
    panel[0x23b] = 255;
    panel[0x25c] = 255;
    panel[0x25d] = 255;
    panel[0x25e] = 255;
    panel[0x25f] = 255;
    panel[0x280] = 255;
    panel[0x281] = 255;
    panel[0x282] = 255;
    panel[0x283] = 255;
    *(u32*)(panel + 0x224) = 0x3f800000;
    *(u32*)(panel + 0x248) = 0;
    *(u32*)(panel + 0x26c) = 0;
    *(u32*)(panel + 0x290) = 0x3f800000;
    *(u32*)(panel + 0x228) = 0;
    *(u32*)(panel + 0x24c) = 0;
    *(u32*)(panel + 0x270) = 0x3f800000;
    *(u32*)(panel + 0x294) = 0x3f800000;
    v9.x = valA;
    v9.y = valB;
    v9.z = 0.0f;
    *(PanelVec3*)(panel + 0x298) = v9;
    v10.x = -valA;
    v10.y = valB;
    v10.z = 0.0f;
    *(PanelVec3*)(panel + 0x2bc) = v10;
    v11.x = -valA;
    v11.y = -valB;
    v11.z = 0.0f;
    *(PanelVec3*)(panel + 0x2e0) = v11;
    v12.x = valA;
    v12.y = -valB;
    v12.z = 0.0f;
    *(PanelVec3*)(panel + 0x304) = v12;
    panel[0x2a4] = 255;
    panel[0x2a5] = 255;
    panel[0x2a6] = 255;
    panel[0x2a7] = 127;
    panel[0x2c8] = 255;
    panel[0x2c9] = 255;
    panel[0x2ca] = 255;
    panel[0x2cb] = 127;
    panel[0x2ec] = 255;
    panel[0x2ed] = 255;
    panel[0x2ee] = 255;
    panel[0x2ef] = 127;
    panel[0x310] = 255;
    panel[0x311] = 255;
    panel[0x312] = 255;
    panel[0x313] = 127;
    *(u32*)(panel + 0x2b4) = 0x3f800000;
    *(u32*)(panel + 0x2d8) = 0;
    *(u32*)(panel + 0x2fc) = 0;
    *(u32*)(panel + 0x320) = 0x3f800000;
    *(u32*)(panel + 0x2b8) = 0;
    *(u32*)(panel + 0x2dc) = 0;
    *(u32*)(panel + 0x300) = 0x3f800000;
    *(u32*)(panel + 0x324) = 0x3f800000;
    v13.x = valA;
    v13.y = valB;
    v13.z = 0.0f;
    *(PanelVec3*)(panel + 0x328) = v13;
    v14.x = -valA;
    v14.y = valB;
    v14.z = 0.0f;
    *(PanelVec3*)(panel + 0x34c) = v14;
    v15.x = -valA;
    v15.y = -valB;
    v15.z = 0.0f;
    *(PanelVec3*)(panel + 0x370) = v15;
    v16.x = valA;
    v16.y = -valB;
    v16.z = 0.0f;
    *(PanelVec3*)(panel + 0x394) = v16;
    panel[0x334] = 255;
    panel[0x335] = 255;
    panel[0x336] = 255;
    panel[0x337] = 127;
    panel[0x358] = 255;
    panel[0x359] = 255;
    panel[0x35a] = 255;
    panel[0x35b] = 127;
    panel[0x37c] = 255;
    panel[0x37d] = 255;
    panel[0x37e] = 255;
    panel[0x37f] = 127;
    panel[0x3a0] = 255;
    panel[0x3a1] = 255;
    panel[0x3a2] = 255;
    panel[0x3a3] = 127;
    *(u32*)(panel + 0x344) = 0x3f800000;
    *(u32*)(panel + 0x368) = 0;
    *(u32*)(panel + 0x38c) = 0;
    *(u32*)(panel + 0x3b0) = 0x3f800000;
    *(u32*)(panel + 0x348) = 0;
    *(u32*)(panel + 0x36c) = 0;
    *(u32*)(panel + 0x390) = 0x3f800000;
    *(u32*)(panel + 0x3b4) = 0x3f800000;
    v17.x = 3.0f;
    v17.y = valC;
    v17.z = 0.0f;
    *(PanelVec3*)(panel + 0x3b8) = v17;
    v18.x = -3.0f;
    v18.y = valC;
    v18.z = 0.0f;
    *(PanelVec3*)(panel + 0x3dc) = v18;
    v19.x = -3.0f;
    v19.y = valD;
    v19.z = 0.0f;
    *(PanelVec3*)(panel + 0x400) = v19;
    v20.x = 3.0f;
    v20.y = valD;
    v20.z = 0.0f;
    *(PanelVec3*)(panel + 0x424) = v20;
    panel[0x3c4] = 255;
    panel[0x3c5] = 255;
    panel[0x3c6] = 255;
    panel[0x3c7] = 153;
    panel[0x3e8] = 255;
    panel[0x3e9] = 255;
    panel[0x3ea] = 255;
    panel[0x3eb] = 153;
    panel[0x40c] = 255;
    panel[0x40d] = 255;
    panel[0x40e] = 255;
    panel[0x40f] = 153;
    panel[0x430] = 255;
    panel[0x431] = 255;
    panel[0x432] = 255;
    panel[0x433] = 153;
    *(u32*)(panel + 0x3d4) = 0x3f800000;
    *(u32*)(panel + 0x3f8) = 0;
    *(u32*)(panel + 0x41c) = 0;
    *(u32*)(panel + 0x440) = 0x3f800000;
    *(u32*)(panel + 0x3d8) = 0;
    *(u32*)(panel + 0x3fc) = 0;
    *(u32*)(panel + 0x420) = 0x3f800000;
    *(u32*)(panel + 0x444) = 0x3f800000;
    v21.x = valA;
    v21.y = valB;
    v21.z = 0.0f;
    *(PanelVec3*)(panel + 0x448) = v21;
    v22.x = -valA;
    v22.y = valB;
    v22.z = 0.0f;
    *(PanelVec3*)(panel + 0x46c) = v22;
    v23.x = -valA;
    v23.y = -valB;
    v23.z = 0.0f;
    *(PanelVec3*)(panel + 0x490) = v23;
    v24.x = valA;
    v24.y = -valB;
    v24.z = 0.0f;
    *(PanelVec3*)(panel + 0x4b4) = v24;
    panel[0x454] = 255;
    panel[0x455] = 255;
    panel[0x456] = 255;
    panel[0x457] = 255;
    panel[0x478] = 255;
    panel[0x479] = 255;
    panel[0x47a] = 255;
    panel[0x47b] = 255;
    panel[0x49c] = 255;
    panel[0x49d] = 255;
    panel[0x49e] = 255;
    panel[0x49f] = 255;
    panel[0x4c0] = 255;
    panel[0x4c1] = 255;
    panel[0x4c2] = 255;
    panel[0x4c3] = 255;
    *(u32*)(panel + 0x464) = 0x3f630000;
    *(u32*)(panel + 0x488) = 0x3de80000;
    *(u32*)(panel + 0x4ac) = 0x3de80000;
    *(u32*)(panel + 0x4d0) = 0x3f630000;
    *(u32*)(panel + 0x468) = 0x3db80000;
    *(u32*)(panel + 0x48c) = 0x3db80000;
    *(u32*)(panel + 0x4b0) = 0x3f690000;
    *(u32*)(panel + 0x4d4) = 0x3f690000;
    v25.x = valA;
    v25.y = valB;
    v25.z = 0.0f;
    *(PanelVec3*)(panel + 0x4d8) = v25;
    v26.x = -valA;
    v26.y = valB;
    v26.z = 0.0f;
    *(PanelVec3*)(panel + 0x4fc) = v26;
    v27.x = -valA;
    v27.y = -valB;
    v27.z = 0.0f;
    *(PanelVec3*)(panel + 0x520) = v27;
    v28.x = valA;
    v28.y = -valB;
    v28.z = 0.0f;
    *(PanelVec3*)(panel + 0x544) = v28;
    panel[0x4e4] = 255;
    panel[0x4e5] = 255;
    panel[0x4e6] = 255;
    panel[0x4e7] = 255;
    panel[0x508] = 255;
    panel[0x509] = 255;
    panel[0x50a] = 255;
    panel[0x50b] = 255;
    panel[0x52c] = 255;
    panel[0x52d] = 255;
    panel[0x52e] = 255;
    panel[0x52f] = 255;
    panel[0x550] = 255;
    panel[0x551] = 255;
    panel[0x552] = 255;
    panel[0x553] = 255;
    *(u32*)(panel + 0x4f4) = 0x3f630000;
    *(u32*)(panel + 0x518) = 0x3de80000;
    *(u32*)(panel + 0x53c) = 0x3de80000;
    *(u32*)(panel + 0x560) = 0x3f630000;
    *(u32*)(panel + 0x4f8) = 0x3db80000;
    *(u32*)(panel + 0x51c) = 0x3db80000;
    *(u32*)(panel + 0x540) = 0x3f690000;
    *(u32*)(panel + 0x564) = 0x3f690000;
    v29.x = 3.0f;
    v29.y = valC;
    v29.z = 0.0f;
    *(PanelVec3*)(panel + 0x4c) = v29;
    v30.x = -3.0f;
    v30.y = valC;
    v30.z = 0.0f;
    *(PanelVec3*)(panel + 0x70) = v30;
    v31.x = -3.0f;
    v31.y = valD;
    v31.z = 0.0f;
    *(PanelVec3*)(panel + 0x94) = v31;
    v32.x = 3.0f;
    v32.y = valD;
    v32.z = 0.0f;
    *(PanelVec3*)(panel + 0xb8) = v32;
    panel[0x58] = 255;
    panel[0x59] = 255;
    panel[0x5a] = 255;
    panel[0x5b] = 64;
    panel[0x7c] = 255;
    panel[0x7d] = 255;
    panel[0x7e] = 255;
    panel[0x7f] = 64;
    panel[0xa0] = 255;
    panel[0xa1] = 255;
    panel[0xa2] = 255;
    panel[0xa3] = 64;
    panel[0xc4] = 255;
    panel[0xc5] = 255;
    panel[0xc6] = 255;
    panel[0xc7] = 64;
    *(u32*)(panel + 0x68) = 0x3f800000;
    *(u32*)(panel + 0x8c) = 0;
    *(u32*)(panel + 0xb0) = 0;
    *(u32*)(panel + 0xd4) = 0x3f800000;
    *(u32*)(panel + 0x6c) = 0;
    *(u32*)(panel + 0x90) = 0;
    *(u32*)(panel + 0xb4) = 0x3f800000;
    *(u32*)(panel + 0xd8) = 0x3f800000;
    v33.x = 3.0f;
    v33.y = valC;
    v33.z = 0.0f;
    *(PanelVec3*)(panel + 0x568) = v33;
    v34.x = -3.0f;
    v34.y = valC;
    v34.z = 0.0f;
    *(PanelVec3*)(panel + 0x58c) = v34;
    v35.x = -3.0f;
    v35.y = valD;
    v35.z = 0.0f;
    *(PanelVec3*)(panel + 0x5b0) = v35;
    v36.x = 3.0f;
    v36.y = valD;
    v36.z = 0.0f;
    *(PanelVec3*)(panel + 0x5d4) = v36;
    panel[0x574] = 255;
    panel[0x575] = 255;
    panel[0x576] = 255;
    panel[0x577] = 255;
    panel[0x598] = 255;
    panel[0x599] = 255;
    panel[0x59a] = 255;
    panel[0x59b] = 255;
    panel[0x5bc] = 255;
    panel[0x5bd] = 255;
    panel[0x5be] = 255;
    panel[0x5bf] = 255;
    panel[0x5e0] = 255;
    panel[0x5e1] = 255;
    panel[0x5e2] = 255;
    panel[0x5e3] = 255;
    *(u32*)(panel + 0x584) = 0x3f800000;
    *(u32*)(panel + 0x5a8) = 0;
    *(u32*)(panel + 0x5cc) = 0;
    *(u32*)(panel + 0x5f0) = 0x3f800000;
    *(u32*)(panel + 0x588) = 0;
    *(u32*)(panel + 0x5ac) = 0;
    *(u32*)(panel + 0x5d0) = 0x3f800000;
    *(u32*)(panel + 0x5f4) = 0x3f800000;
}

// FUN_0020a800
void func_0020a800(void* work)
{
    u8* panel;
    PanelVec3 outerUpperRight;
    PanelVec3 outerLowerRight;
    PanelVec3 outerLowerLeft;
    PanelVec3 outerUpperLeft;
    PanelVec3 innerUpperRight;
    PanelVec3 innerLowerRight;
    PanelVec3 innerLowerLeft;
    PanelVec3 innerUpperLeft;
    PanelVec3 centerUpperRight;
    PanelVec3 centerLowerRight;
    PanelVec3 centerLowerLeft;
    PanelVec3 centerUpperLeft;
    f32 upperY;
    f32 lowerY;

    panel = (u8*)work;
    func_00209ea0(panel);
    *(u32*)(panel + 4) = 1;
    func_0020c7b0(panel + 0xe0);
    *(u32*)(panel + 0x328) = 0;

    outerUpperRight.x = 3.0f;
    upperY = fGpffff8318;
    outerUpperRight.y = upperY;
    outerUpperRight.z = 0.0f;
    *(PanelVec3*)(panel + 0x178) = outerUpperRight;
    outerLowerRight.x = -3.0f;
    outerLowerRight.y = upperY;
    outerLowerRight.z = 0.0f;
    *(PanelVec3*)(panel + 0x19c) = outerLowerRight;
    outerLowerLeft.x = -3.0f;
    lowerY = fGpffff8334;
    outerLowerLeft.y = lowerY;
    outerLowerLeft.z = 0.0f;
    *(PanelVec3*)(panel + 0x1c0) = outerLowerLeft;
    outerUpperLeft.x = 3.0f;
    outerUpperLeft.y = lowerY;
    outerUpperLeft.z = 0.0f;
    *(PanelVec3*)(panel + 0x1e4) = outerUpperLeft;

    panel[0x184] = 0xff;
    panel[0x185] = 0xff;
    panel[0x186] = 0xff;
    panel[0x187] = 0xff;
    panel[0x1a8] = 0xff;
    panel[0x1a9] = 0xff;
    panel[0x1aa] = 0xff;
    panel[0x1ab] = 0xff;
    panel[0x1cc] = 0xff;
    panel[0x1cd] = 0xff;
    panel[0x1ce] = 0xff;
    panel[0x1cf] = 0xff;
    panel[0x1f0] = 0xff;
    panel[0x1f1] = 0xff;
    panel[0x1f2] = 0xff;
    panel[0x1f3] = 0xff;
    *(f32*)(panel + 0x194) = 1.0f;
    *(f32*)(panel + 0x1b8) = 0.0f;
    *(f32*)(panel + 0x1dc) = 0.0f;
    *(f32*)(panel + 0x200) = 1.0f;
    *(f32*)(panel + 0x198) = 0.0f;
    *(f32*)(panel + 0x1bc) = 0.0f;
    *(f32*)(panel + 0x1e0) = 0.63671875f;
    *(f32*)(panel + 0x204) = 0.63671875f;

    innerUpperRight.x = 3.0f;
    innerUpperRight.y = upperY;
    innerUpperRight.z = 0.0f;
    *(PanelVec3*)(panel + 0x208) = innerUpperRight;
    innerLowerRight.x = -3.0f;
    innerLowerRight.y = upperY;
    innerLowerRight.z = 0.0f;
    *(PanelVec3*)(panel + 0x22c) = innerLowerRight;
    innerLowerLeft.x = -3.0f;
    innerLowerLeft.y = lowerY;
    innerLowerLeft.z = 0.0f;
    *(PanelVec3*)(panel + 0x250) = innerLowerLeft;
    innerUpperLeft.x = 3.0f;
    innerUpperLeft.y = lowerY;
    innerUpperLeft.z = 0.0f;
    *(PanelVec3*)(panel + 0x274) = innerUpperLeft;

    panel[0x214] = 0xff;
    panel[0x215] = 0xff;
    panel[0x216] = 0xff;
    panel[0x217] = 0xff;
    panel[0x238] = 0xff;
    panel[0x239] = 0xff;
    panel[0x23a] = 0xff;
    panel[0x23b] = 0xff;
    panel[0x25c] = 0xff;
    panel[0x25d] = 0xff;
    panel[0x25e] = 0xff;
    panel[0x25f] = 0xff;
    panel[0x280] = 0xff;
    panel[0x281] = 0xff;
    panel[0x282] = 0xff;
    panel[0x283] = 0xff;
    *(f32*)(panel + 0x224) = 1.0f;
    *(f32*)(panel + 0x248) = 0.0f;
    *(f32*)(panel + 0x26c) = 0.0f;
    *(f32*)(panel + 0x290) = 1.0f;
    *(f32*)(panel + 0x228) = 0.0f;
    *(f32*)(panel + 0x24c) = 0.0f;
    *(f32*)(panel + 0x270) = 0.63671875f;
    *(f32*)(panel + 0x294) = 0.63671875f;

    centerUpperRight.x = 3.0f;
    centerUpperRight.y = 3.0f;
    centerUpperRight.z = 0.0f;
    *(PanelVec3*)(panel + 0x298) = centerUpperRight;
    centerLowerRight.x = -3.0f;
    centerLowerRight.y = 3.0f;
    centerLowerRight.z = 0.0f;
    *(PanelVec3*)(panel + 0x2bc) = centerLowerRight;
    centerLowerLeft.x = -3.0f;
    centerLowerLeft.y = -3.0f;
    centerLowerLeft.z = 0.0f;
    *(PanelVec3*)(panel + 0x2e0) = centerLowerLeft;
    centerUpperLeft.x = 3.0f;
    centerUpperLeft.y = -3.0f;
    centerUpperLeft.z = 0.0f;
    *(PanelVec3*)(panel + 0x304) = centerUpperLeft;

    panel[0x2a4] = 0;
    panel[0x2a5] = 0;
    panel[0x2a6] = 0;
    panel[0x2a7] = 0xff;
    panel[0x2c8] = 0;
    panel[0x2c9] = 0;
    panel[0x2ca] = 0;
    panel[0x2cb] = 0xff;
    panel[0x2ec] = 0;
    panel[0x2ed] = 0;
    panel[0x2ee] = 0;
    panel[0x2ef] = 0xff;
    panel[0x310] = 0;
    panel[0x311] = 0;
    panel[0x312] = 0;
    panel[0x313] = 0xff;
    *(f32*)(panel + 0x2b4) = 1.0f;
    *(f32*)(panel + 0x2d8) = 0.0f;
    *(f32*)(panel + 0x2fc) = 0.0f;
    *(f32*)(panel + 0x320) = 1.0f;
    *(f32*)(panel + 0x2b8) = 0.0f;
    *(f32*)(panel + 0x2dc) = 0.0f;
    *(f32*)(panel + 0x300) = 1.0f;
    *(f32*)(panel + 0x324) = 1.0f;
}

// FUN_0020ab30
void func_0020ab30(void* work)
{
    u8* panel;
    PanelVec3 upperRight;
    PanelVec3 lowerRight;
    PanelVec3 lowerLeft;
    PanelVec3 upperLeft;

    panel = (u8*)work;
    func_00209ea0(panel);
    *(u32*)(panel + 4) = 2;
    func_0020c7b0(panel + 0xe0);

    upperRight.x = 3.0f;
    upperRight.y = fGpffff8318;
    upperRight.z = 0.0f;
    *(PanelVec3*)(panel + 0x170) = upperRight;

    lowerRight.x = -3.0f;
    lowerRight.y = fGpffff8318;
    lowerRight.z = 0.0f;
    *(PanelVec3*)(panel + 0x194) = lowerRight;

    lowerLeft.x = -3.0f;
    lowerLeft.y = fGpffff8334;
    lowerLeft.z = 0.0f;
    *(PanelVec3*)(panel + 0x1b8) = lowerLeft;

    upperLeft.x = 3.0f;
    upperLeft.y = fGpffff8334;
    upperLeft.z = 0.0f;
    *(PanelVec3*)(panel + 0x1dc) = upperLeft;

    panel[0x17c] = 0xff;
    panel[0x17d] = 0xff;
    panel[0x17e] = 0xff;
    panel[0x17f] = 0xff;
    panel[0x1a0] = 0xff;
    panel[0x1a1] = 0xff;
    panel[0x1a2] = 0xff;
    panel[0x1a3] = 0xff;
    panel[0x1c4] = 0xff;
    panel[0x1c5] = 0xff;
    panel[0x1c6] = 0xff;
    panel[0x1c7] = 0xff;
    panel[0x1e8] = 0xff;
    panel[0x1e9] = 0xff;
    panel[0x1ea] = 0xff;
    panel[0x1eb] = 0xff;

    *(f32*)(panel + 0x18c) = 0.9921875f;
    *(f32*)(panel + 0x1b0) = 0.0f;
    *(f32*)(panel + 0x1d4) = 0.0f;
    *(f32*)(panel + 0x1f8) = 0.9921875f;
    *(f32*)(panel + 0x190) = 0.0078125f;
    *(f32*)(panel + 0x1b4) = 0.0078125f;
    *(f32*)(panel + 0x1d8) = 0.63671875f;
    *(f32*)(panel + 0x1fc) = 0.63671875f;
}

// FUN_0020ac80
void func_0020ac80(void* work)
{
    (void)work;
}

extern f32 DAT_007cadd4;
extern f32 DAT_007cad7c;
extern f32 DAT_007cad74;
extern f32 DAT_007caee8;
extern f32 FUN_0052e878(f32 angle);
extern f32 FUN_0052e6d8(f32 angle);
extern void func_0020cf20(void* destination, PanelTransform* transform);

// Reconstructed state interpolation, UV projection, and corner rotation from retail control flow.
// Remaining excess is retained pending MWCCPS2 register-allocation and scheduling convergence.

// FUN_0020ac90
asm void func_0020ac90(void* work)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080882d
  .word 0xc481003c
  .word 0xc78080e4
  .word 0x46000800
  .word 0xe480003c
  .word 0x8c840004
  .word 0x24030001
  .word 0x10830080
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x100000be
  .word 0x00000000
  .word 0x3c034100
  .word 0x44830800
  .word 0xc620003c
  .word 0x46010043
  .word 0x46000824
  .word 0x46800020
  .word 0x46000801
  .word 0xe62002b8
  .word 0xe62002dc
  .word 0x3c033f80
  .word 0x44831800
  .word 0x00000000
  .word 0x46001800
  .word 0xe6200300
  .word 0xe6200324
  .word 0x3c0340c0
  .word 0x44830800
  .word 0xc620003c
  .word 0x46010043
  .word 0x46000824
  .word 0x46800020
  .word 0x46000801
  .word 0xe6200348
  .word 0xe620036c
  .word 0x46001800
  .word 0xe6200390
  .word 0xe62003b4
  .word 0x3c034080
  .word 0x44830800
  .word 0xc620003c
  .word 0x46010043
  .word 0x46000824
  .word 0x46800020
  .word 0x46000801
  .word 0x3c033f00
  .word 0x44831000
  .word 0x00000000
  .word 0x46020034
  .word 0x45000009
  .word 0x00000000
  .word 0xc781808c
  .word 0x46000802
  .word 0x46020003
  .word 0x00000000
  .word 0x46000800
  .word 0xe62005fc
  .word 0x1000000b
  .word 0x00000000
  .word 0x46020001
  .word 0x00000000
  .word 0x46020003
  .word 0x46001881
  .word 0xc781808c
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602081c
  .word 0xe62005fc
  .word 0x3c034000
  .word 0x44830800
  .word 0xc620003c
  .word 0x46010043
  .word 0x46000824
  .word 0x46800020
  .word 0x460008c1
  .word 0x3c033f00
  .word 0x44830800
  .word 0x00000000
  .word 0x46011834
  .word 0x45000009
  .word 0x00000000
  .word 0xc7808084
  .word 0x46030002
  .word 0x46010003
  .word 0x00000000
  .word 0x00000000
  .word 0xe62005f8
  .word 0x1000000b
  .word 0x00000000
  .word 0x46011801
  .word 0x00000000
  .word 0x46010043
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46010041
  .word 0xc7808084
  .word 0x46010002
  .word 0xe62005f8
  .word 0x3c0341a0
  .word 0x44831000
  .word 0x3c0342c8
  .word 0x44830800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0x460100c3
  .word 0x3c033ec6
  .word 0x44830000
  .word 0x00000000
  .word 0x46030003
  .word 0x3c033f00
  .word 0x44831000
  .word 0x00000000
  .word 0x46001040
  .word 0xe62104f4
  .word 0x46001001
  .word 0xe6200518
  .word 0xe620053c
  .word 0xe6210560
  .word 0x3c033ed2
  .word 0x44830000
  .word 0x00000000
  .word 0x46030043
  .word 0x46011001
  .word 0xe62004f8
  .word 0xe620051c
  .word 0x46011000
  .word 0xe6200540
  .word 0xe6200564
  .word 0x10000043
  .word 0x00000000
  .word 0x3c034000
  .word 0x44830800
  .word 0xc620003c
  .word 0x46010043
  .word 0x46000824
  .word 0x46800020
  .word 0x460008c1
  .word 0x3c033f00
  .word 0x44830800
  .word 0x00000000
  .word 0x46011834
  .word 0x45000009
  .word 0x00000000
  .word 0xc7808084
  .word 0x46030002
  .word 0x46010003
  .word 0x00000000
  .word 0x00000000
  .word 0xe620032c
  .word 0x1000000b
  .word 0x00000000
  .word 0x46011801
  .word 0x00000000
  .word 0x46010043
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46010041
  .word 0xc7808084
  .word 0x46010002
  .word 0xe620032c
  .word 0x3c0341a0
  .word 0x44831000
  .word 0x3c03428c
  .word 0x44830800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603105c
  .word 0x3c0342c8
  .word 0x44830000
  .word 0x00000000
  .word 0x460008c3
  .word 0x3c033ec6
  .word 0x44830000
  .word 0x00000000
  .word 0x46030003
  .word 0x3c033f00
  .word 0x44831000
  .word 0x00000000
  .word 0x46001040
  .word 0xe62102b4
  .word 0x46001001
  .word 0xe62002d8
  .word 0xe62002fc
  .word 0xe6210320
  .word 0x3c033ed2
  .word 0x44830000
  .word 0x00000000
  .word 0x46030043
  .word 0x46011001
  .word 0xe62002b8
  .word 0xe62002dc
  .word 0x46011000
  .word 0xe6200300
  .word 0xe6200324
  .word 0x8e230000
  .word 0x30630002
  .word 0x1060006a
  .word 0x00000000
  .word 0x8e230004
  .word 0x10600003
  .word 0x00000000
  .word 0x10000065
  .word 0x00000000
  .word 0x3c033f80
  .word 0xafa30070
  .word 0xafa30074
  .word 0xafa00078
  .word 0xafa3007c
  .word 0xafa00080
  .word 0xafa00084
  .word 0xafa30088
  .word 0xafa0008c
  .word 0x3c034080
  .word 0x44830800
  .word 0xc620003c
  .word 0x46010043
  .word 0xc78081f8
  .word 0x46010602
  .word 0x0000202d
  .word 0x3c033f00
  .word 0x44830800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000418c0
  .word 0x007d1821
  .word 0x24630070
  .word 0xc4600000
  .word 0x46010001
  .word 0xe4600000
  .word 0xc4600004
  .word 0x46010001
  .word 0xe4600004
  .word 0x24840001
  .word 0x28830004
  .word 0x1460fff4
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000001c
  .word 0x00000000
  .word 0x001010c0
  .word 0x005d1021
  .word 0x24530070
  .word 0x26720004
  .word 0xc6770004
  .word 0xc6760000
  .word 0x4600c306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000506
  .word 0x4600c306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x4600b01a
  .word 0x4614bd5d
  .word 0x4600c306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000506
  .word 0x4600c306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x4600b81a
  .word 0x4614b01c
  .word 0xe6750000
  .word 0xe6400000
  .word 0x26100001
  .word 0x2a030004
  .word 0x1460ffe3
  .word 0x00000000
  .word 0x0000202d
  .word 0x3c033f00
  .word 0x44830800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000418c0
  .word 0x007d1821
  .word 0x24630070
  .word 0xc4600000
  .word 0x46010000
  .word 0xe4600000
  .word 0xc4600004
  .word 0x46010000
  .word 0xe4600004
  .word 0x24840001
  .word 0x28830004
  .word 0x1460fff4
  .word 0x00000000
  .word 0xc7a00070
  .word 0xe6200584
  .word 0xc7a00074
  .word 0xe6200588
  .word 0xc7a00078
  .word 0xe62005a8
  .word 0xc7a0007c
  .word 0xe62005ac
  .word 0xc7a00080
  .word 0xe62005cc
  .word 0xc7a00084
  .word 0xe62005d0
  .word 0xc7a00088
  .word 0xe62005f0
  .word 0xc7a0008c
  .word 0xe62005f4
  .word 0x8e230000
  .word 0x30630001
  .word 0x10600016
  .word 0x00000000
  .word 0x8e240044
  .word 0x3c030001
  .word 0x00831821
  .word 0xae230044
  .word 0x8e240048
  .word 0x24030001
  .word 0x1083000e
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x8e240044
  .word 0x3c03001e
  .word 0x0083182b
  .word 0x14600005
  .word 0x00000000
  .word 0x8e240000
  .word 0x2403fffe
  .word 0x00831824
  .word 0xae230000
  .word 0x8e230000
  .word 0x30630008
  .word 0x10600005
  .word 0x00000000
  .word 0x8e2400dc
  .word 0x0220282d
  .word 0x0c0833c8
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
}














/* Removing this worsens FUN_0020cda0 (nd12 -> nd259) and 1 more - measured W161. */
