#include "Kosaka/Field/k_fldrc.h"
#include "Kosaka/Field/k_fldFilter.h"
#include "Kosaka/Field/k_field.h"
#include "Kosaka/Field/k_sceneDraw.h"
#include "Kosaka/Field/k_fldCamera.h"
#include "Kosaka/k_assert.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Scene/mt_scene.h"
#include "Scene/resrcManager.h"
#include "Graphics/Model/mdlManager.h"
#include "Main/g_data.h"
#include "h_cdvd.h"
#include "temporary.h"
/* K_Field_Get aliases to prevent CSE/write-sinking from folding repeated calls. */
#pragma alias K_Field_Get_A K_Field_Get
extern void* K_Field_Get_A(void);
#pragma alias K_Field_Get_B K_Field_Get
extern void* K_Field_Get_B(void);
#pragma alias K_Field_Get_C K_Field_Get
extern void* K_Field_Get_C(void);
#pragma alias K_Field_Get_D K_Field_Get
extern void* K_Field_Get_D(void);
#pragma alias K_Field_Get_E K_Field_Get
extern void* K_Field_Get_E(void);
#pragma alias K_Field_Get_Z K_Field_Get
extern void* K_Field_Get_Z(void);

/* Retail field-resource callbacks use fixed-width aliases in the original EE build. */
typedef u8 undefined1;
typedef u16 undefined2;
typedef u32 undefined4;
typedef u64 undefined8;
typedef int (*code)(...);
extern void* (*DAT_00960184)(u32, ...);
#pragma alias DAT_00960184_abs DAT_00960184
extern u8 DAT_00960184_abs[];
extern void (*DAT_0096017c)(void*);
#pragma alias DAT_0096017c_abs DAT_0096017c
extern u32 DAT_0096017c_abs[];
extern void (*DAT_00960090)(u32, ...);
extern u8 PTR_DAT_007be9c8[];
extern u32* PTR_DAT_007cd540;
extern void* DAT_007ce0cc;
extern u64 DAT_00678f58;
extern u32 DAT_00678f60;
extern u64 DAT_00678f68;
extern u32 DAT_00678f70;
extern u8 DAT_007ce164[];
extern u8 DAT_007cdeac[];
#pragma alias DAT_00678f68_abs DAT_00678f68
extern u64 DAT_00678f68_abs[];
#pragma alias DAT_00678f70_abs DAT_00678f70
extern f32 DAT_00678f70_abs[];
extern char D_00678E30[];
extern char D_00678FF0[];
typedef struct FldrcColor
{
    f32 value[3];
} __attribute__((packed)) FldrcColor;
#pragma alias DAT_00678f68_color DAT_00678f68
extern FldrcColor DAT_00678f68_color;
#pragma alias FUN_004cb890_typed FUN_004cb890
extern u32 FUN_004cb890_typed(u32 model, void* color, f32 angle, u32 mode);
extern u32 DAT_007ce0d4;
extern u8 DAT_007ce0d8;
extern u8 DAT_007ce0dc;
extern u8 DAT_007ce0e0;
extern u8 DAT_007ce0e4;
extern u8 DAT_007ce0e8;
extern u8 DAT_007ce0ec;
extern u8 DAT_007ce0f0;
extern u8 DAT_007ce0f4;

/* Unrecovered engine entry points are kept typed at the ABI boundary. */
extern u32 FUN_001008b0();
extern u32 FUN_00100d80();
extern u32 FUN_00100ec0();
extern u32 FUN_001016b0();
extern u32 FUN_001021c0();
extern u32 FUN_0010c1a0();
extern u32 FUN_0010c3a0();
extern u32 FUN_0016ef30();
extern u32 FUN_0016f190();
extern u32 FUN_0017d920();
extern u32 FUN_0017da40();
extern u32 FUN_0017e480();
extern u32 FUN_00194b20();
typedef u32 (*KFldTaskUpdateFunc)(u32 task);
typedef void (*KFldTaskDestroyFunc)(u32 task);
extern u32 FUN_00194b80(u32 parent, u32 priority, const char* name,
                        KFldTaskUpdateFunc init, KFldTaskDestroyFunc destroy, u32 work);
extern u32 FUN_00195460();
extern u32 FUN_00198540();
extern u32 FUN_00198560();
extern u32 FUN_00198570();
extern u32 FUN_00198580();
extern u32 FUN_00198590();
extern u32 FUN_001985b0();
extern u32 FUN_001985e0();
extern u32 FUN_00198610();
extern u32 FUN_0019d3f0();
extern u32 FUN_0019fd40();
extern u32 FUN_0019fd70();
extern u32 FUN_0019fda0();
extern u32 FUN_0019fdd0();
extern u32 FUN_0019fe20();
extern u32 FUN_0019fe70();
extern u32 FUN_0019fec0();
extern u32 FUN_001a01c0();
extern void func_001a13b0(void);
extern u32 FUN_001a14c0();
extern u32 FUN_001a1540();
extern u32 FUN_001a6350();
extern u32 FUN_001a6400();
extern u32 FUN_001a64f0();
extern u32 FUN_001a66f0();
extern u32 FUN_001a6740();
extern u32 FUN_001a6c00();
extern u32 FUN_001a6e90();
extern u32 FUN_001a7570();
extern u32 FUN_001a7710();
extern u32 FUN_001a7b50();
extern u32 FUN_001a8140();
extern u32 FUN_001a88e0();
extern u32 FUN_001d4610();
extern u32 FUN_001d50c0();
extern void FUN_001d5130(u32 alpha);
extern u32 FUN_00316b40();
extern u32 FUN_00316bd0();
extern u32 FUN_00316f70();
extern u32 FUN_00317450();
extern u32 FUN_003174e0();
extern u32 FUN_003182d0();
extern u32 FUN_003189f0();
extern u32 FUN_00318a30();
extern u32 FUN_00318a50();
extern u32 FUN_00318a70();
extern u32 FUN_00318ad0();
extern u32 FUN_00318b80();
extern u32 FUN_00319230();
extern u32 FUN_0034fcd0();
extern u32 FUN_0034fcf0();
extern u32 FUN_0034fd50();
extern u32 FUN_0034fdf0();
extern void FUN_0034fe30(u64 param_1, f32 param_2, f32 param_3, f32 param_4);
#pragma alias FUN_00318a50_typed FUN_00318a50
extern u32 FUN_00318a50_typed(u32 model, void* color, f32 angle, u32 mode);
#pragma alias FUN_0034fe30_typed FUN_0034fe30
extern u32 FUN_0034fe30_typed(u32 model, f32 x, f32 y, f32 z);
extern u32 FUN_0035bb40();
extern u32 FUN_003b5d50();
extern u32 FUN_0048d0e0();
extern u32 FUN_0048da30();
extern u32 FUN_0048ee70();
extern u32 FUN_0048eed0();
extern f32 FUN_0048ef60();
extern void FUN_0048efa0(int param_1, int param_2, u32 param_3);
extern void FUN_0048efc0(int param_1, int param_2, f32 param_3);
extern u32 FUN_004916d0();
extern int FUN_00491cc0(int param_1);
extern u32 FUN_00491ea0();
extern u32 FUN_004932c0();
extern u32 FUN_004944b0();
extern u64 FUN_0049a250(u64 param_1);
extern u32 FUN_0049a290(int param_1);
extern u32 FUN_0049a7c0();
extern u32 FUN_0049c160();
extern u32 FUN_0049c1b0();
extern u32 FUN_0049c3d0();
extern u32 FUN_0049c480();
extern void FUN_004bcbf0(int param_1, int param_2);
extern u32 FUN_004bda10();
extern u32 FUN_004c1970();
extern u32 FUN_004c2cc0();
extern u32 FUN_004c2d20();
extern void FUN_004c31b0(void* matrix, const void* axis, f32 angle, s32 combine);
extern u32 FUN_004c3880();
extern u32 FUN_004c38c0();
extern u32 FUN_004c5620();
extern u32 FUN_004c5780();
extern u32 FUN_004c58a0();
extern u32 FUN_004c6be0();
extern u32 FUN_004c8680();
extern u32 FUN_004c9d00();
extern u32 FUN_004c9d10();
extern u32 FUN_004c9d70(u32 camera, f32 value);
extern u32 FUN_004c9db0(u32 camera, f32 value);
extern u32 FUN_004cb270();
extern int FUN_004cb2f0(int param_1);
extern u32 FUN_004cb7f0();
extern undefined8 FUN_004cb890(undefined8 param_1);
extern undefined4 FUN_004d0d10(int param_1);
extern u32 FUN_004d0dc0();
extern u32 FUN_004d7f60();
extern u32 FUN_0051e0f0();
extern u32 FUN_00523ac8();
extern u32 FUN_00523e68();
extern u32 FUN_00524270();
extern u32 FUN_001b9120();
extern u32 FUN_001ba5f0(u32 parentTask, u16 majorId, u16 minorId,
                        u16 param4, s16 param5, s16 param6, u32 flags,
                        u8 param8, u8 param9, s16 param10,
                        s32 param11, s32 param12, s32 param13, s32 param14);
extern s32 iGpffffb470;
extern s32 iGpffffb3e4;
extern u8 bGpffffb3f0;
extern u8 bGpffffb3ec;
extern u8 bGpffffb3f4;
extern u8 bGpffffb3e8;
extern u32 uGpffffb3dc;
extern u32 gp0xffff9538;
extern u32 gp0xffff9540;
extern u32 gp0xffff9548;
extern u32 gp0xffff9550;

static HCdvd* sFldFpcCdvd; // 007ce160. "field/pack/f%03d_%03d.fpc"
static HCdvd* sFldPacCdvd; // 007ce15c. "field/pack/f%03d_%03d.pac"

extern void* D_00867EF8;
extern void* D_00867EFC;
extern void* D_00867F00;
extern u32 FUN_001b2b30(u32 resource);
extern void FUN_001b2b90(u32 resource);
extern u32 FUN_001b2f00(u32* resource);
extern void FUN_001b3480(u32 resource);
extern u32 FUN_001b39e0(u32 resource);
extern void func_001bd450(u32 patternId, u32 mode);
extern void func_001bd8c0(void);
extern void* func_004cb2f0(u32 matrix);
extern u16 func_003b66b0(u16 resourceId, void* model);
extern void func_004c9d70(void* camera, f32 value);
extern MtScene* gMtScene;
extern void* D_0086BDC0[9];
extern void* uGpffffb590;
extern s32* piGpffffa850;
extern u16* puGpffffa850;
extern char D_00678D80[];
extern char D_00678E08[];
extern char D_00678E18[];
extern char D_00678FD0[];
extern char D_00679030[];
#pragma alias D_00679030_abs D_00679030
extern char D_00679030_abs[];
#pragma alias D_00679040_abs D_00679040
extern char D_00679040_abs[];
extern char D_00679040[];
extern char D_00679010[];
extern char D_00679060[];
extern char D_00678DA0[];
extern char D_00678DC0[];
extern char D_00678DE0[];
extern char D_00678DF8[];
#pragma alias D_00678DF8_abs D_00678DF8
extern char D_00678DF8_abs[];
#pragma alias D_00678E50_abs D_00678E50
extern char D_00678E50_abs[];
#pragma alias D_00678E70_abs D_00678E70
extern char D_00678E70_abs[];
#pragma alias D_00678E90_abs D_00678E90
extern char D_00678E90_abs[];
extern char D_00678EB0[];
extern char D_00678EC8[];
extern char D_00678ED8[];
extern char D_00678EE8[];
extern char D_00678EF8[];
extern char D_00678F08[];
extern char D_00678F18[];
extern char D_00678F30[];
extern char D_00678F40[];
extern char D_00678E50[];
extern char D_00678E70[];
extern char D_00678E90[];
extern u8 D_00678F90[];
extern u8 D_00678FB0[];
extern HCdvd* func_001e2da0(u16 majorId, u16 minorId, s16 variant);
extern HCdvd* func_001e7470(u16 majorId, u16 minorId);
extern u32 func_001e2e50(void* request, void** outFile, u16 majorId,
                         u16 minorId, s16 variant);
extern u32 func_001e3940(void* resource, void* companion);
extern HCdvd* func_001e6cb0(u16 majorId, u16 minorId);
extern u32 func_001e6d50(HCdvd* request, void** outFile, u16 majorId,
                         u16 minorId);
extern void func_001e6ea0(void* fileMemory);
extern u32 func_001e74e0(void* request);
extern void func_001e7520(void* request);
extern u32 func_001a02c0(void);
extern void func_0019ff10(void);
extern void func_001a0040(u32 visible, u32 updateField);
extern u16 func_003b6790(u16 resourceId, void* resource);
extern void func_003b6f50(u16 resourceId, u32 type, f32 fov, void* matrix,
                          void* posOffset, f32 xzDeadZone, f32 yDeadZone);
extern u16 func_003b78b0(u16 resourceId, void* position, void* angles);
extern void func_003b7090(u16 resTypeId);
extern f32 func_001a5b30(void* matrix);
extern f32 func_001a5aa0(void* matrix);
extern f32 func_001a5bc0(void* matrix);
extern u32 func_001b8160(void);
extern u32 func_001b81f0(HCdvd* request);
extern u32 func_001b8680(void);
extern u32 func_001b8710(HCdvd* request);
extern u32 func_001b88d0(void);
extern u32 func_001b8960(HCdvd* request);
extern u32 FUN_001b6100(u32 id);
extern u32 FUN_001b61f0(void* resource, u32 archiveEntry);
extern void* func_001b83f0(void);
extern u16* func_001b85a0(u32 index);
extern void func_001b8870(void);
extern void func_001b8ae0(void);
extern void func_001b8b40(void);
extern u32 func_001b8c40(void);
extern void* kwlnGetMainCamera(void);
extern u32 func_001d6bc0(HCdvd* request, RwMatrix* matrix, f32* fov,
                         u32* type, RwV3d* posOffset, f32* xzDeadZone,
                         f32* yDeadZone);
u32 func_001b09b0(void);
void* FUN_001b2860(char* path);
void* FUN_001b2780(s16 majorId, s16 minorId);
void FUN_001b5e30(u32 color, const void* scale);
void FUN_001b5e60(u32 color, const void* scale);
void FUN_001b60a0(u32 value, const void* scale);
void FUN_001b60d0(u32 value, const void* scale);


typedef struct FldrcCloneRecord
{
    u32 words[6];
} FldrcCloneRecord;

static void fldrc_copy_words(u32 dst, u32 src, u32 count)
{
    u32 i;
    for (i = 0; i < count; i++)
    {
        *(u32*)(dst + i * 4) = *(u32*)(src + i * 4);
    }
}
void FUN_001b5610(u32* resource, const f32* color);
static inline void fldrc_apply_field_config(u32 config)
{
    u32* dst;
    u32 listA;
    u32 listB;
    u32 node;
    u32 i;
    u32 count;
    u32 version;
    f32 farPlane;
    u32* field;

    listA = FUN_003b5d50(4);
    listB = FUN_003b5d50(5);
    FUN_0019fdd0(*(u8*)(config + 8));
    FUN_0019fe20(*(u8*)(config + 9));
    FUN_0019fe70(*(u8*)(config + 10));
    FUN_0019fec0(*(u8*)(config + 0x0b));
    if (*(u8*)(config + 0x0f) == 1)
    {
        DAT_007ce0d4 = 1;
    }
    else
    {
        DAT_007ce0d4 = 0;
    }
    DAT_007ce0d8 = *(u8*)(config + 0x0c);
    DAT_007ce0dc = *(u8*)(config + 0x0d);
    DAT_007ce0e0 = *(u8*)(config + 0x0e);
    DAT_007ce0e4 = 0;
    DAT_007ce0e8 = DAT_007ce0d8;
    DAT_007ce0ec = DAT_007ce0dc;
    DAT_007ce0f0 = DAT_007ce0e0;
    DAT_007ce0f4 = 0;
    FUN_001985b0(DAT_007ce0d8, DAT_007ce0dc, DAT_007ce0e0, 0);
    FUN_001985e0(DAT_007ce0d8, DAT_007ce0dc, DAT_007ce0e0, 0);
    FUN_004c9db0(FUN_00198590(), *(f32*)(config + 0x14));
    *(f32*)(FUN_00198590() + 0x88) = *(f32*)(config + 0x10);
    FUN_00198590();

    version = *(u32*)(config + 4);
    if (version > 0x10003)
    {
        farPlane = *(f32*)(config + 0x18);
        if (farPlane > 1.0f)
        {
            FUN_004c9d70(FUN_00198590(), farPlane);
        }
        if (farPlane == 50.0f)
        {
            FUN_004c9d70(FUN_00198590(), 100.0f);
        }
        if (*(s8*)(config + 0x1ff) == -1)
        {
            FUN_001985b0(*(u8*)(config + 0x1fc),
                         *(u8*)(config + 0x1fd),
                         *(u8*)(config + 0x1fe), 0);
            FUN_001985e0(*(u8*)(config + 0x1fc),
                         *(u8*)(config + 0x1fd),
                         *(u8*)(config + 0x1fe), 0);
        }
    }

    dst = (u32*)FUN_0019fd40();
    ((f32*)dst)[0] = *(f32*)(config + 0x1c);
    ((f32*)dst)[1] = *(f32*)(config + 0x20);
    ((f32*)dst)[2] = *(f32*)(config + 0x24);
    ((f32*)dst)[3] = *(f32*)(config + 0x28);
    dst = (u32*)FUN_0019fd70();
    ((f32*)dst)[0] = *(f32*)(config + 0x2c);
    ((f32*)dst)[1] = *(f32*)(config + 0x30);
    ((f32*)dst)[2] = *(f32*)(config + 0x34);
    ((f32*)dst)[3] = *(f32*)(config + 0x38);
    dst = (u32*)FUN_0019fda0();
    {
        u32* src = (u32*)(config + 0x40);
        u32 n = 8;
        while (n > 0)
        {
            dst[0] = src[0];
            dst[1] = src[1];
            src += 2;
            dst += 2;
            n--;
        }
    }

    if (listB != 0)
    {
        ((f32*)(listB + 0x100))[0] = *(f32*)(config + 0x80);
        ((f32*)(listB + 0x100))[1] = *(f32*)(config + 0x84);
        ((f32*)(listB + 0x100))[2] = *(f32*)(config + 0x88);
        ((f32*)(listB + 0x100))[3] = *(f32*)(config + 0x8c);
        ((f32*)(listB + 0x110))[0] = *(f32*)(config + 0x90);
        ((f32*)(listB + 0x110))[1] = *(f32*)(config + 0x94);
        ((f32*)(listB + 0x110))[2] = *(f32*)(config + 0x98);
        ((f32*)(listB + 0x110))[3] = *(f32*)(config + 0x9c);
        {
            u32* src = (u32*)(config + 0xa0);
            u32* out = (u32*)(listB + 0x120);
            u32 n = 8;
            while (n > 0)
            {
                out[0] = src[0];
                out[1] = src[1];
                src += 2;
                out += 2;
                n--;
            }
        }
        ((f32*)(listB + 0x160))[0] = *(f32*)(config + 0xe0);
        ((f32*)(listB + 0x160))[1] = *(f32*)(config + 0xe4);
        ((f32*)(listB + 0x160))[2] = *(f32*)(config + 0xe8);
        ((f32*)(listB + 0x160))[3] = *(f32*)(config + 0xec);
        {
            u32* src = (u32*)(config + 0xf0);
            u32* out = (u32*)(listB + 0x170);
            u32 n = 8;
            while (n > 0)
            {
                out[0] = src[0];
                out[1] = src[1];
                src += 2;
                out += 2;
                n--;
            }
        }
    }

    if (version > 0x10000)
    {
        count = *(u32*)((u8*)K_Field_Get() + 0x1168);
        K_Field_Get_A();
        for (i = 0; i < count; i++)
        {
            node = *(u32*)((u8*)K_Field_Get() + 0x116c + i * 4);
            ((u32*)node)[0xa20 / 4] = ((u32*)config)[0x130 / 4];
            ((u32*)node)[0xa24 / 4] = ((u32*)config)[0x134 / 4];
            ((u32*)node)[0xa28 / 4] = ((u32*)config)[0x138 / 4];
            FUN_001b5610((u32*)node, (const f32*)(node + 0xa20));
        }
    }

    if ((version > 0x10001) && (listA != 0))
    {
        ((u32*)listA)[0x100 / 4] = ((u32*)config)[0x13c / 4];
        ((u32*)listA)[0x104 / 4] = ((u32*)config)[0x140 / 4];
        ((u32*)listA)[0x108 / 4] = ((u32*)config)[0x144 / 4];
        ((u32*)listA)[0x10c / 4] = ((u32*)config)[0x148 / 4];
        ((u32*)listA)[0x110 / 4] = ((u32*)config)[0x14c / 4];
        ((u32*)listA)[0x114 / 4] = ((u32*)config)[0x150 / 4];
        ((u32*)listA)[0x118 / 4] = ((u32*)config)[0x154 / 4];
        ((u32*)listA)[0x11c / 4] = ((u32*)config)[0x158 / 4];
        for (i = 0; i < 8; i++)
        {
            ((u32*)listA)[0x120 / 4 + i * 2] =
                ((u32*)config)[0x160 / 4 + i * 2];
            ((u32*)listA)[0x124 / 4 + i * 2] =
                ((u32*)config)[0x164 / 4 + i * 2];
        }
        ((u32*)listA)[0x160 / 4] = ((u32*)config)[0x1a0 / 4];
        ((u32*)listA)[0x164 / 4] = ((u32*)config)[0x1a4 / 4];
        ((u32*)listA)[0x168 / 4] = ((u32*)config)[0x1a8 / 4];
        ((u32*)listA)[0x16c / 4] = ((u32*)config)[0x1ac / 4];
        for (i = 0; i < 8; i++)
        {
            ((u32*)listA)[0x170 / 4 + i * 2] =
                ((u32*)config)[0x1b0 / 4 + i * 2];
            ((u32*)listA)[0x174 / 4 + i * 2] =
                ((u32*)config)[0x1b4 / 4 + i * 2];
        }
    }

    if (version > 0x10002)
    {
        listA = FUN_003b5d50(1);
        listB = FUN_003b5d50(3);
        K_Field_Get_A();
        for (i = 0; i < *(u32*)((u8*)K_Field_Get() + 0x1168); i++)
        {
            node = *(u32*)((u8*)K_Field_Get() + 0x116c + i * 4);
            ((u32*)node)[0xa2c / 4] = ((u32*)config)[0x1f0 / 4];
            ((u32*)node)[0xa30 / 4] = ((u32*)config)[0x1f4 / 4];
            ((u32*)node)[0xa34 / 4] = ((u32*)config)[0x1f8 / 4];
        }
        while (listA != 0)
        {
            u32 model = FUN_00318b80(*(u32*)(listA + 0x128));
            FUN_004916d0(model, 0x1b6060, config + 0x1f0);
            listA = *(u32*)(listA + 0xf8);
        }
        while (listB != 0)
        {
            u32 model = FUN_00318b80(*(u32*)(listB + 0x128));
            FUN_004916d0(model, 0x1b6060, config + 0x1f0);
            listB = *(u32*)(listB + 0xf8);
        }
    }
    if (version < 0x10004)
    {
        FUN_001a1540(0, 0, 0x178, D_00678FF0);
    }
}
static u32 fldrc_event_override(u16 group, u32 id)
{
    if (((group == 6) && ((id == 4) || (id == 5) || (id == 7) || (id == 8) ||
                          (id == 0x15) || (id == 0x16))) ||
        ((group == 7) && ((id == 1) || (id == 3) || (id == 4) || (id == 5) ||
                          (id == 6) || (id == 7) || (id == 0x0e) || (id == 0x0f))) ||
        (group == 8) ||
        ((group == 9) && ((id == 3) || (id == 4) || (id == 5) || (id == 6))) ||
        ((group == 10) && (id == 2)) ||
        ((group == 0x0e) && (id == 2)) ||
        ((group == 0x0f) && (id == 1)) ||
        ((group == 0x10) && ((id == 4) || (id == 5))))
    {
        if ((FUN_0017e480(4, 0x1b, 0x0c, 0x1f) == 1) ||
            (FUN_0017e480(1, 1, 2, 0x1c) == 1))
        {
            return id;
        }
    }
    return 0xffffffff;
}
static inline void fldrc_render_begin(void)
{
    FUN_00198610(0x40000002, 0);
    FUN_00198610(2, 1);
    (*DAT_00960090)(6, 1);
    (*DAT_00960090)(8, 1);
    if (iGpffffb3e4 == 1)
    {
        (*DAT_00960090)(0x0e);
        (*DAT_00960090)(0x0f,
                        (u32)bGpffffb3f0 |
                        ((u32)bGpffffb3ec << 8) |
                        ((u32)bGpffffb3e8 << 16) |
                        ((u32)bGpffffb3f4 << 24));
        (*DAT_00960090)(0x10, 1);
    }
}

// FUN_001b0710
void K_Fldrc_RequestArchives()
{
    s16 major;
    s16 minor;

    if (K_Field_Get()->rootTask != NULL)
    {
        major = K_Field_GetMajorId(K_Field_Get()->rootTask);
        minor = K_Field_GetMinorId(K_Field_Get()->rootTask);
        K_Fldrc_RequestFldPac(major, minor);

        major = K_Field_GetMajorId(K_Field_Get()->rootTask);
        minor = K_Field_GetMinorId(K_Field_Get()->rootTask);
        K_Fldrc_RequestFldFpc(major, minor);
    }
}

// FUN_001b07d0
u32 func_001b07d0(void)
{
    u32 loaded;

    loaded = true;
    if (K_Field_Get()->rootTask != NULL)
    {
        if (!K_Fldrc_IsFldPacLoaded())
        {
            loaded = false;
        }
        if (!func_001b09b0())
        {
            loaded = false;
        }
    }
    return loaded;
}

// FUN_001b0840
void K_Fldrc_DestroyArchives()
{
    K_Fldrc_DestroyFldPac();
    K_Fldrc_DestroyFldFpc();
}

// FUN_001b0870
void K_Fldrc_RequestFldPac(s16 majorId, s16 minorId)
{
    char buffer[64];

    if (sFldPacCdvd == NULL)
    {
        sprintf(buffer, "field/pack/f%03d_%03d.pac", majorId, minorId);
        sFldPacCdvd = H_Cdvd_Request(buffer, HCDVD_FILEARCHIVE);
    }
}

// FUN_001b08d0
u8 K_Fldrc_IsFldPacLoaded()
{
    if (sFldPacCdvd == NULL)
    {
        return true;
    }

    return H_Cdvd_IsFileLoaded(sFldPacCdvd) != false;
}

// FUN_001b0910
HCdvd* K_Fldrc_GetFldPacCdvd()
{
    return sFldPacCdvd;
}

// FUN_001b0920
void K_Fldrc_DestroyFldPac()

{
    if (sFldPacCdvd != NULL)
    {
        H_Cdvd_Destroy(sFldPacCdvd);
        sFldPacCdvd = NULL;
    }
}

// FUN_001b0950
void K_Fldrc_RequestFldFpc(s16 majorId, s16 minorId)
{
    char buffer[64];

    if (sFldFpcCdvd == NULL)
    {
        sprintf(buffer, "field/pack/f%03d_%03d.fpc", majorId, minorId);
        sFldFpcCdvd = H_Cdvd_Request(buffer, HCDVD_FILEARCHIVE);
    }
}

// FUN_001b09b0
u32 func_001b09b0(void)
{
    if (sFldFpcCdvd == NULL)
    {
        return true;
    }
    return H_Cdvd_IsFileLoaded(sFldFpcCdvd) != false;
}

// FUN_001b09f0
void K_Fldrc_DestroyFldFpc()
{
    if (sFldFpcCdvd != NULL)
    {
        H_Cdvd_Destroy(sFldFpcCdvd);
        sFldFpcCdvd = NULL;
    }
}

/*
 * Reconstructed field resource selection and FPC registration paths from
 * the retail call/store sequence; duplicated K_Field_Get accesses and the
 * secondary pack path are intentional. Branch/register layout still differs
 * from retail in the large dispatch prologue.
 */
#pragma push
// FUN_001b0a20
asm void K_Fldrc_001b0a20(s16 majorId, s16 minorId)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac401168
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac401058
  .word 0x00138c3c
  .word 0x00118c3f
  .word 0x2a220015
  .word 0x14400008
  .word 0x00000000
  .word 0x2a21001d
  .word 0x10200005
  .word 0x00000000
  .word 0x0012143c
  .word 0x0002143f
  .word 0x10400017
  .word 0x00000000
  .word 0x2a220029
  .word 0x14400008
  .word 0x00000000
  .word 0x2a210031
  .word 0x10200005
  .word 0x00000000
  .word 0x0012143c
  .word 0x0002143f
  .word 0x1040000d
  .word 0x00000000
  .word 0x2a220033
  .word 0x14400004
  .word 0x00000000
  .word 0x2a21003b
  .word 0x14200007
  .word 0x00000000
  .word 0x2a220047
  .word 0x1440012a
  .word 0x00000000
  .word 0x2a21004f
  .word 0x10200127
  .word 0x00000000
  .word 0x2a220033
  .word 0x14400004
  .word 0x00000000
  .word 0x2a21003b
  .word 0x14200007
  .word 0x00000000
  .word 0x2a220047
  .word 0x14400022
  .word 0x00000000
  .word 0x2a21004f
  .word 0x1020001f
  .word 0x00000000
  .word 0x2622ffe2
  .word 0x0002843c
  .word 0x0010843f
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440038
  .word 0x3c038000
  .word 0x00831825
  .word 0xac430038
  .word 0x3264ffff
  .word 0x3245ffff
  .word 0x0c079d1c
  .word 0x00000000
  .word 0x0040982d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac5310cc
  .word 0x8f82b590
  .word 0x1440000d
  .word 0x00000000
  .word 0x24040004
  .word 0x3405ffff
  .word 0x3c060068
  .word 0x24c68da0
  .word 0x0000382d
  .word 0x0c0c5ad0
  .word 0x00000000
  .word 0xaf82b590
  .word 0x10000003
  .word 0x00000000
  .word 0x0013843c
  .word 0x0010843f
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c430038
  .word 0x3c028000
  .word 0x00621024
  .word 0x104000da
  .word 0x00000000
  .word 0x8f82b470
  .word 0x1440000e
  .word 0x00000000
  .word 0x00123c3c
  .word 0x00073c3f
  .word 0x27a40090
  .word 0x3c050068
  .word 0x24a58d80
  .word 0x0220302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a40090
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xaf82b470
  .word 0x3210ffff
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00029080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0xa4501060
  .word 0x24120012
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00029880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0xa4521062
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c43105c
  .word 0x24630001
  .word 0xac43105c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00029080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0xa4501060
  .word 0x24120008
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00029880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0xa4521062
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c43105c
  .word 0x24630001
  .word 0xac43105c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00029080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0xa4501060
  .word 0x24120007
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00029880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0xa4521062
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c43105c
  .word 0x24630001
  .word 0xac43105c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00029080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0xa4501060
  .word 0x24120006
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00029880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0xa4521062
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c43105c
  .word 0x24630001
  .word 0xac43105c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00029080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0xa4501060
  .word 0x24120005
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00029880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0xa4521062
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c43105c
  .word 0x24630001
  .word 0xac43105c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00029080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0xa4501060
  .word 0x24120004
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00029880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0xa4521062
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c43105c
  .word 0x24630001
  .word 0xac43105c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00029080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0xa4501060
  .word 0x24120003
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00029880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0xa4521062
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c43105c
  .word 0x24630001
  .word 0xac43105c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00029080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0xa4501060
  .word 0x24120002
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00029880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0xa4521062
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c43105c
  .word 0x24630001
  .word 0xac43105c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00029080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0xa4501060
  .word 0x24120001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00028080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0xa4521062
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c43105c
  .word 0x24630001
  .word 0xac43105c
  .word 0x10000040
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000000b
  .word 0x00000000
  .word 0x00128080
  .word 0x3c020087
  .word 0x2442bdc0
  .word 0x00501021
  .word 0x8c530000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0xac53116c
  .word 0x26520001
  .word 0x2e420009
  .word 0x1440fff4
  .word 0x00000000
  .word 0x24100009
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501168
  .word 0x24100004
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x10000026
  .word 0x00000000
  .word 0x8f82b470
  .word 0x1440000e
  .word 0x00000000
  .word 0x00123c3c
  .word 0x00073c3f
  .word 0x27a40050
  .word 0x3c050068
  .word 0x24a58d80
  .word 0x0220302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a40050
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xaf82b470
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00028080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0xa4531060
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00028080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0xa4521062
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c43105c
  .word 0x24630001
  .word 0xac43105c
  .word 0x2a230015
  .word 0x14600004
  .word 0x00000000
  .word 0x2a21001d
  .word 0x14200013
  .word 0x00000000
  .word 0x2a230029
  .word 0x14600004
  .word 0x00000000
  .word 0x2a210031
  .word 0x1420000d
  .word 0x00000000
  .word 0x2a230033
  .word 0x14600004
  .word 0x00000000
  .word 0x2a21003b
  .word 0x14200007
  .word 0x00000000
  .word 0x2a230047
  .word 0x1460001a
  .word 0x00000000
  .word 0x2a21004f
  .word 0x10200017
  .word 0x00000000
  .word 0x24040004
  .word 0x3405fffe
  .word 0x3c060068
  .word 0x24c68dc0
  .word 0x0000382d
  .word 0x0c0c5ad0
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac5011ec
  .word 0x24040004
  .word 0x3405fffd
  .word 0x3c060068
  .word 0x24c68de0
  .word 0x0000382d
  .word 0x0c0c5ad0
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac5011f0
  .word 0x8f83b1bc
  .word 0xaf83b474
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma schedule reset
#pragma opt_loop_invariants off
#pragma pop
/*
 * Retail keeps the field resource table as direct archive pointers.
 * The initialization phases therefore store and pass those pointers directly,
 * rather than treating each table entry as a wrapper with an a44 member.
 * Archive readiness and destruction are inlined to preserve the retail calls.
 */
#pragma push
/* W389: baseline obj 5656/5776, nd 3581; opt_lifetimes on + opt_propagation off -> obj 5656/5776, nd 3574. */
#pragma opt_cse off
#pragma opt_lifetimes on
#pragma opt_propagation off
// FUN_001b10f0
asm u32 K_Fldrc_Init()
{
  .set noreorder
  .word 0x27bdff20
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c431058
  .word 0x240203e7
  .word 0x10620583
  .word 0x00000000
  .word 0x24020029
  .word 0x10620570
  .word 0x00000000
  .word 0x24020028
  .word 0x10620563
  .word 0x00000000
  .word 0x24020020
  .word 0x1062050e
  .word 0x00000000
  .word 0x2402001f
  .word 0x106204c2
  .word 0x00000000
  .word 0x2402001e
  .word 0x1062046d
  .word 0x00000000
  .word 0x2402000a
  .word 0x1062044c
  .word 0x00000000
  .word 0x24020009
  .word 0x1062042b
  .word 0x00000000
  .word 0x24020008
  .word 0x10620259
  .word 0x00000000
  .word 0x24020007
  .word 0x106201c3
  .word 0x00000000
  .word 0x24020006
  .word 0x10620177
  .word 0x00000000
  .word 0x24020005
  .word 0x1062011d
  .word 0x00000000
  .word 0x24020004
  .word 0x106200df
  .word 0x00000000
  .word 0x24020003
  .word 0x106200b8
  .word 0x00000000
  .word 0x24020002
  .word 0x1062006f
  .word 0x00000000
  .word 0x24020001
  .word 0x1062004f
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000055b
  .word 0x00000000
  .word 0x8f84b46c
  .word 0x14800003
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000054a
  .word 0x00000000
  .word 0x8f84b470
  .word 0x14800004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000009
  .word 0x00000000
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000537
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c43105c
  .word 0x2463ffff
  .word 0xac43105c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00028080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0x84511060
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x00028080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0x84451062
  .word 0x0220202d
  .word 0x0c06c9e0
  .word 0x00000000
  .word 0x0040882d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x00028080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0xac51116c
  .word 0x24100001
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x00028080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0x8c44116c
  .word 0x0c06cacc
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000503
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x00028080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0x8c44116c
  .word 0x0c06cae4
  .word 0x00000000
  .word 0x24100002
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x00028080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0x8c44116c
  .word 0x0c06cbc0
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100004e6
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c431168
  .word 0x24630001
  .word 0xac431168
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42105c
  .word 0x18400007
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac401058
  .word 0x0000102d
  .word 0x100004d6
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c43000c
  .word 0x3c028000
  .word 0x00621024
  .word 0x1040000d
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x84430004
  .word 0x8f82a850
  .word 0xac430000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x84430006
  .word 0x8f82a850
  .word 0xac430004
  .word 0x0000802d
  .word 0x10000009
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00101880
  .word 0x00431021
  .word 0x8c44116c
  .word 0x0c06cd20
  .word 0x00000000
  .word 0x26100001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x0202102a
  .word 0x1440fff3
  .word 0x00000000
  .word 0x24100003
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x0000882d
  .word 0x0000802d
  .word 0x1000000c
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00101880
  .word 0x00431021
  .word 0x8c44116c
  .word 0x0c06ce78
  .word 0x00000000
  .word 0x14400002
  .word 0x00000000
  .word 0x26310001
  .word 0x26100001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x0202102a
  .word 0x1440fff0
  .word 0x00000000
  .word 0x12200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000495
  .word 0x00000000
  .word 0x8f84b470
  .word 0x10800004
  .word 0x00000000
  .word 0x0c0403b0
  .word 0x00000000
  .word 0xaf80b470
  .word 0x24100004
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4211ec
  .word 0x1040000b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4411ec
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000047c
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4211f0
  .word 0x1040000b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4411f0
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000046d
  .word 0x00000000
  .word 0x8f83b1bc
  .word 0x8f82b474
  .word 0x00621823
  .word 0xaf83b474
  .word 0x8f82a850
  .word 0x8c420000
  .word 0x284100c8
  .word 0x10200005
  .word 0x00000000
  .word 0x3c020003
  .word 0x34422000
  .word 0x00621021
  .word 0xaf82b474
  .word 0x0c06e058
  .word 0x00000000
  .word 0x3c030086
  .word 0xac627ef8
  .word 0x0c06e1a0
  .word 0x00000000
  .word 0x3c030086
  .word 0xac627efc
  .word 0x0c06e234
  .word 0x00000000
  .word 0x3c030086
  .word 0xac627f00
  .word 0x24100005
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x3c020086
  .word 0x8c447ef8
  .word 0x0c06e07c
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000447
  .word 0x00000000
  .word 0x3c020086
  .word 0xac407ef8
  .word 0x3c020086
  .word 0x8c447efc
  .word 0x0c06e1c4
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000043c
  .word 0x00000000
  .word 0x3c020086
  .word 0xac407efc
  .word 0x3c020086
  .word 0x8c447f00
  .word 0x0c06e258
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000431
  .word 0x00000000
  .word 0x3c020086
  .word 0xac407f00
  .word 0x0c0680b0
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000e
  .word 0x00000000
  .word 0x8f82a850
  .word 0x94440000
  .word 0x94450004
  .word 0x84460014
  .word 0x0c078b68
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0xac500a44
  .word 0x10000021
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000018
  .word 0x00000000
  .word 0x00128880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c42116c
  .word 0x94500004
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c42116c
  .word 0x94450006
  .word 0x8f82a850
  .word 0x0200202d
  .word 0x84460014
  .word 0x0c078b68
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c42116c
  .word 0xac500a44
  .word 0x26520001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x0242102a
  .word 0x1440ffe4
  .word 0x00000000
  .word 0x24100006
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x0000982d
  .word 0x0c0680b0
  .word 0x00000000
  .word 0x24030001
  .word 0x14430014
  .word 0x00000000
  .word 0x8f91a850
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c50116c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x96260000
  .word 0x96270004
  .word 0x8e040a44
  .word 0x24450a48
  .word 0x86280014
  .word 0x0c078b94
  .word 0x00000000
  .word 0x1440002b
  .word 0x00000000
  .word 0x26730001
  .word 0x10000028
  .word 0x00000000
  .word 0x0000a02d
  .word 0x1000001f
  .word 0x00000000
  .word 0x00149080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0x8c51116c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0x8c50116c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0x8c42116c
  .word 0x94550004
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0x8c42116c
  .word 0x94470006
  .word 0x8f82a850
  .word 0x8e240a44
  .word 0x26050a48
  .word 0x02a0302d
  .word 0x84480014
  .word 0x0c078b94
  .word 0x00000000
  .word 0x14400002
  .word 0x00000000
  .word 0x26730001
  .word 0x26940001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x0282102a
  .word 0x1440ffdd
  .word 0x00000000
  .word 0x12600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100003b4
  .word 0x00000000
  .word 0x24100007
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x0000902d
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x28620033
  .word 0x14400004
  .word 0x00000000
  .word 0x2861003b
  .word 0x14200007
  .word 0x00000000
  .word 0x28620047
  .word 0x1440000a
  .word 0x00000000
  .word 0x2861004f
  .word 0x10200007
  .word 0x00000000
  .word 0x8f84b590
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x14400002
  .word 0x00000000
  .word 0x26520001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4410cc
  .word 0x0c079d38
  .word 0x00000000
  .word 0x14400002
  .word 0x00000000
  .word 0x26520001
  .word 0x0000982d
  .word 0x10000019
  .word 0x00000000
  .word 0x00138880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c50116c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c42116c
  .word 0x8e040a44
  .word 0x8c450a48
  .word 0x0c078e50
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x26520001
  .word 0x10000006
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c42116c
  .word 0xac400a44
  .word 0x26730001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x0262102a
  .word 0x1440ffe3
  .word 0x00000000
  .word 0x12400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000036d
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000001d
  .word 0x00000000
  .word 0x00118080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0x8c42116c
  .word 0x8c420a3c
  .word 0x14400014
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0x8c42116c
  .word 0x94520004
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0x8c42116c
  .word 0x94450006
  .word 0x0240202d
  .word 0x0c079b2c
  .word 0x00000000
  .word 0x0040902d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00501021
  .word 0x8c42116c
  .word 0xac520a38
  .word 0x26310001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x0222102a
  .word 0x1440ffdf
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x28620033
  .word 0x14400004
  .word 0x00000000
  .word 0x2861003b
  .word 0x14200007
  .word 0x00000000
  .word 0x28620047
  .word 0x1440001d
  .word 0x00000000
  .word 0x2861004f
  .word 0x1020001a
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4210cc
  .word 0x8c500110
  .word 0x0c06e448
  .word 0x00000000
  .word 0x24440048
  .word 0x26050004
  .word 0x24061000
  .word 0x0c148494
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4410cc
  .word 0x0c079d48
  .word 0x00000000
  .word 0x8f82a850
  .word 0x94440000
  .word 0x94450004
  .word 0x0c079b2c
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac5010cc
  .word 0x24100008
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x28620033
  .word 0x14400004
  .word 0x00000000
  .word 0x2861003b
  .word 0x14200007
  .word 0x00000000
  .word 0x28620047
  .word 0x1440004d
  .word 0x00000000
  .word 0x2861004f
  .word 0x1020004a
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000024
  .word 0x00000000
  .word 0x00149880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x8c52116c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x8c51116c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x8c42116c
  .word 0x94500004
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x8c42116c
  .word 0x94470006
  .word 0x8e440a38
  .word 0x26250a3c
  .word 0x0200302d
  .word 0x0c079b54
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100002ef
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x8c42116c
  .word 0xac400a38
  .word 0x26940001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x0282102a
  .word 0x1440ffd8
  .word 0x00000000
  .word 0x8f90a850
  .word 0x0c06e448
  .word 0x00000000
  .word 0x96060000
  .word 0x96070004
  .word 0x8c4410cc
  .word 0x27a500dc
  .word 0x0c079b54
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100002d5
  .word 0x00000000
  .word 0x8fa400dc
  .word 0x10800050
  .word 0x00000000
  .word 0x0c079ba8
  .word 0x00000000
  .word 0x8fa400dc
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac4010cc
  .word 0x10000044
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000024
  .word 0x00000000
  .word 0x00149880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x8c52116c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x8c51116c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x8c42116c
  .word 0x94500004
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x8c42116c
  .word 0x94470006
  .word 0x8e440a38
  .word 0x26250a3c
  .word 0x0200302d
  .word 0x0c079b54
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100002a6
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x8c42116c
  .word 0xac400a38
  .word 0x26940001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x0282102a
  .word 0x1440ffd8
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000f
  .word 0x00000000
  .word 0x00108880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c42116c
  .word 0x8c440a3c
  .word 0x0c079ba8
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c42116c
  .word 0xac400a38
  .word 0x26100001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x0202102a
  .word 0x1440ffed
  .word 0x00000000
  .word 0x0c068094
  .word 0x00000000
  .word 0x24030001
  .word 0x14430027
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000b
  .word 0x00000000
  .word 0x00108880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c43116c
  .word 0x3c020087
  .word 0x2442bdc0
  .word 0x00511021
  .word 0xac430000
  .word 0x26100001
  .word 0x2a020009
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x14400009
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c420000
  .word 0x2444ffec
  .word 0x24050001
  .word 0x0c06f514
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c420000
  .word 0x2444ffd8
  .word 0x24050001
  .word 0x0c06f514
  .word 0x00000000
  .word 0x0c06f630
  .word 0x00000000
  .word 0x100000d1
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x28620033
  .word 0x14400004
  .word 0x00000000
  .word 0x2861003b
  .word 0x14200007
  .word 0x00000000
  .word 0x28620047
  .word 0x14400018
  .word 0x00000000
  .word 0x2861004f
  .word 0x10200015
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000b
  .word 0x00000000
  .word 0x00108880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c43116c
  .word 0x3c020087
  .word 0x2442bdc0
  .word 0x00511021
  .word 0xac430000
  .word 0x26100001
  .word 0x2a020009
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0c06f630
  .word 0x00000000
  .word 0x100000af
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x0000202d
  .word 0x8c45116c
  .word 0x0c0ed9e4
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000056
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x000290c0
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x00521021
  .word 0x8c440124
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x00521021
  .word 0x9442011c
  .word 0x10400009
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x00521021
  .word 0x9443011c
  .word 0x24020002
  .word 0x1462003b
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x000288c0
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x00518021
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x00511021
  .word 0x96040120
  .word 0x8c450128
  .word 0x0c0ed974
  .word 0x00000000
  .word 0x3050ffff
  .word 0x16000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848df8
  .word 0x240502e4
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0696cc
  .word 0x00000000
  .word 0xe7a000c0
  .word 0x0280202d
  .word 0x0c0696a8
  .word 0x00000000
  .word 0xe7a000c4
  .word 0x0280202d
  .word 0x0c0696f0
  .word 0x00000000
  .word 0xe7a000c8
  .word 0x0200202d
  .word 0x26850030
  .word 0x27a600c0
  .word 0x0c0ede2c
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x00521021
  .word 0x9442011e
  .word 0x30420002
  .word 0x10400006
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x24030001
  .word 0xac430110
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x00521021
  .word 0xac400128
  .word 0x26730001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x8c420118
  .word 0x0262102b
  .word 0x1440ffa5
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000036
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x000290c0
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x00521021
  .word 0x8c440124
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x00521021
  .word 0x9443011c
  .word 0x24020001
  .word 0x14620023
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x000288c0
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x00518021
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x00511021
  .word 0x96040120
  .word 0x8c45012c
  .word 0x0c0ed9ac
  .word 0x00000000
  .word 0x3050ffff
  .word 0x16000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848df8
  .word 0x24050305
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x00521021
  .word 0xac40012c
  .word 0x0200202d
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x8c430028
  .word 0x34630002
  .word 0xac430028
  .word 0x26730001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x8c420118
  .word 0x0262102b
  .word 0x1440ffc5
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0xac400118
  .word 0x0c067fc4
  .word 0x00000000
  .word 0x24040001
  .word 0x0080282d
  .word 0x0c068010
  .word 0x00000000
  .word 0x8f82a850
  .word 0x84440016
  .word 0x0c06d840
  .word 0x00000000
  .word 0x8f83a850
  .word 0xac620010
  .word 0x8f82a850
  .word 0x8c420000
  .word 0x284200c8
  .word 0x14400008
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c03420c
  .word 0x44836000
  .word 0x0040202d
  .word 0x0c13275c
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c420000
  .word 0x284100c8
  .word 0x10200008
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c0342c8
  .word 0x44836000
  .word 0x0040202d
  .word 0x0c13275c
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c420010
  .word 0x14400015
  .word 0x00000000
  .word 0x0c075ac4
  .word 0x00000000
  .word 0x8f83a850
  .word 0xac620010
  .word 0x8f82a850
  .word 0x8c420010
  .word 0x10400007
  .word 0x00000000
  .word 0x2410000a
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x10000157
  .word 0x00000000
  .word 0x241003e7
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x10000151
  .word 0x00000000
  .word 0x24100009
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x8f82a850
  .word 0x84450016
  .word 0x8c440010
  .word 0x0c06d87c
  .word 0x00000000
  .word 0x10400015
  .word 0x00000000
  .word 0x0c075ac4
  .word 0x00000000
  .word 0x8f83a850
  .word 0xac620010
  .word 0x8f82a850
  .word 0x8c420010
  .word 0x10400007
  .word 0x00000000
  .word 0x2410000a
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x1000000a
  .word 0x00000000
  .word 0x241003e7
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x10000132
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000130
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c440010
  .word 0x27a50070
  .word 0x27a600d8
  .word 0x27a700d4
  .word 0x27a800b0
  .word 0x27a900d0
  .word 0x27aa00cc
  .word 0x0c075af0
  .word 0x00000000
  .word 0x10400010
  .word 0x00000000
  .word 0x0000202d
  .word 0x8fa500d4
  .word 0xc7ac00d8
  .word 0x27a60070
  .word 0x27a700b0
  .word 0xc7ad00d0
  .word 0xc7ae00cc
  .word 0x0c0edbd4
  .word 0x00000000
  .word 0x241003e7
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x10000114
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000112
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040902d
  .word 0x24040008
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040882d
  .word 0x10000006
  .word 0x00000000
  .word 0x8e5000f8
  .word 0x96440000
  .word 0x0c0edc24
  .word 0x00000000
  .word 0x0200902d
  .word 0x00000000
  .word 0x1640fff9
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x8e3000f8
  .word 0x96240000
  .word 0x0c0edc24
  .word 0x00000000
  .word 0x0200882d
  .word 0x00000000
  .word 0x1620fff9
  .word 0x00000000
  .word 0x0c0680b0
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000e
  .word 0x00000000
  .word 0x8f82a850
  .word 0x94440000
  .word 0x94450004
  .word 0x84460014
  .word 0x0c078b68
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0xac500a44
  .word 0x10000021
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000018
  .word 0x00000000
  .word 0x00128880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c42116c
  .word 0x94500004
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c42116c
  .word 0x94450006
  .word 0x8f82a850
  .word 0x0200202d
  .word 0x84460014
  .word 0x0c078b68
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c42116c
  .word 0xac500a44
  .word 0x26520001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x0242102a
  .word 0x1440ffe4
  .word 0x00000000
  .word 0x2410001f
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x0000982d
  .word 0x0c0680b0
  .word 0x00000000
  .word 0x24030001
  .word 0x14430014
  .word 0x00000000
  .word 0x8f91a850
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c50116c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x96260000
  .word 0x96270004
  .word 0x8e040a44
  .word 0x24450a48
  .word 0x86280014
  .word 0x0c078b94
  .word 0x00000000
  .word 0x1440002b
  .word 0x00000000
  .word 0x26730001
  .word 0x10000028
  .word 0x00000000
  .word 0x0000a02d
  .word 0x1000001f
  .word 0x00000000
  .word 0x00149080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0x8c51116c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0x8c50116c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0x8c42116c
  .word 0x94550004
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0x8c42116c
  .word 0x94470006
  .word 0x8f82a850
  .word 0x8e240a44
  .word 0x26050a48
  .word 0x02a0302d
  .word 0x84480014
  .word 0x0c078b94
  .word 0x00000000
  .word 0x14400002
  .word 0x00000000
  .word 0x26730001
  .word 0x26940001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x0282102a
  .word 0x1440ffdd
  .word 0x00000000
  .word 0x12600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000007b
  .word 0x00000000
  .word 0x24100020
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x0000902d
  .word 0x0c0680b0
  .word 0x00000000
  .word 0x24030001
  .word 0x14430016
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c50116c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x8e040a44
  .word 0x8c450a48
  .word 0x0c078e50
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x26520001
  .word 0x10000028
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0xac400a44
  .word 0x10000022
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000019
  .word 0x00000000
  .word 0x00138880
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c50116c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c42116c
  .word 0x8e040a44
  .word 0x8c450a48
  .word 0x0c078e50
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x26520001
  .word 0x10000006
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00511021
  .word 0x8c42116c
  .word 0xac400a44
  .word 0x26730001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x0262102a
  .word 0x1440ffe3
  .word 0x00000000
  .word 0x12400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000036
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c42000c
  .word 0x30420004
  .word 0x10400007
  .word 0x00000000
  .word 0x24100028
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x10000007
  .word 0x00000000
  .word 0x241003e7
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x10000024
  .word 0x00000000
  .word 0x8f82a850
  .word 0x84440016
  .word 0x0c06d840
  .word 0x00000000
  .word 0x8f83a850
  .word 0xac620010
  .word 0x24100029
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x8f82a850
  .word 0x84450016
  .word 0x8c440010
  .word 0x0c06d87c
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x241003e7
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac501058
  .word 0x1000000d
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000b
  .word 0x00000000
  .word 0x8f84b46c
  .word 0x10800004
  .word 0x00000000
  .word 0x0c0403b0
  .word 0x00000000
  .word 0xaf80b46c
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00e0
  .word 0x03e00008
  .word 0x00000000
}
#pragma opt_propagation reset
#pragma opt_lifetimes reset
#pragma pop

// FUN_001b2780
void* FUN_001b2780(s16 majorId, s16 minorId)
{
    char path[40];
    char token[8];

    if (iGpffffb470 == 0)
    {
        FUN_00524270(path, D_00678E08);
    }
    else
    {
        FUN_00524270(path, D_00678E18);
    }
    FUN_00523ac8(token, (const char*)&gp0xffff9538 - 0x6ac8, majorId);
    FUN_00523e68(path, token);
    FUN_00523ac8(token, (const char*)&gp0xffff9540 - 0x6ac0, minorId);
    FUN_00523e68(path, token);
    FUN_00523e68(path, (const char*)&gp0xffff9548 - 0x6ab8);
    return FUN_001b2860(path);
}

/* W418 negative: aliasing end directly onto path shrank nd348/object712 to nd360/object660 (rate 48.88% -> 54.55%); rejected. */
/* DUMMYDUMB session 2026-10-21: frame census says our frame is 16 bytes bigger than retail here. The lloc local (a copy of the DAT_00960184 function pointer) costs 8 bytes of frame that retail may not have paid - but calling the global directly instead is much worse (182 -> 428 bytes) because the call shape changes, and digits[4] cannot become a scalar (it is passed to FUN_0051e0f0 as a buffer). Confirmed wall. */
// FUN_001b2860
asm void* FUN_001b2860(char* path)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x24100001
  .word 0x3c130096
  .word 0x26730184
  .word 0x0200202d
  .word 0x24050a4c
  .word 0x3c060004
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040882d
  .word 0x16200003
  .word 0x00000000
  .word 0x10000097
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050124
  .word 0x3c060004
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0xae220a40
  .word 0x14400009
  .word 0x00000000
  .word 0x0220202d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000086
  .word 0x00000000
  .word 0x0040202d
  .word 0x0240282d
  .word 0x0c14909c
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x26520001
  .word 0x82420000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x2402002f
  .word 0x10000002
  .word 0x00000000
  .word 0x2652ffff
  .word 0x82430000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1462fffa
  .word 0x00000000
  .word 0x82430001
  .word 0x24020066
  .word 0x1462003e
  .word 0x00000000
  .word 0x82430002
  .word 0x3c02007c
  .word 0x2442e9c8
  .word 0x00431021
  .word 0x80420000
  .word 0x30420004
  .word 0x14400002
  .word 0x00000000
  .word 0x0000802d
  .word 0x82430003
  .word 0x3c02007c
  .word 0x2442e9c8
  .word 0x00431021
  .word 0x80420000
  .word 0x30420004
  .word 0x14400002
  .word 0x00000000
  .word 0x0000802d
  .word 0x82430004
  .word 0x3c02007c
  .word 0x2442e9c8
  .word 0x00431021
  .word 0x80420000
  .word 0x30420004
  .word 0x14400002
  .word 0x00000000
  .word 0x0000802d
  .word 0x82430005
  .word 0x2402005f
  .word 0x10620002
  .word 0x00000000
  .word 0x0000802d
  .word 0x82430006
  .word 0x3c02007c
  .word 0x2442e9c8
  .word 0x00431021
  .word 0x80420000
  .word 0x30420004
  .word 0x14400002
  .word 0x00000000
  .word 0x0000802d
  .word 0x82430007
  .word 0x3c02007c
  .word 0x2442e9c8
  .word 0x00431021
  .word 0x80420000
  .word 0x30420004
  .word 0x14400002
  .word 0x00000000
  .word 0x0000802d
  .word 0x82430008
  .word 0x3c02007c
  .word 0x2442e9c8
  .word 0x00431021
  .word 0x80420000
  .word 0x30420004
  .word 0x14400005
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x12000019
  .word 0x00000000
  .word 0x82420002
  .word 0xa3a20058
  .word 0x82420003
  .word 0xa3a20059
  .word 0x82420004
  .word 0xa3a2005a
  .word 0xa3a0005b
  .word 0x27a40058
  .word 0x0c14783c
  .word 0x00000000
  .word 0xa6220004
  .word 0x82420006
  .word 0xa3a20058
  .word 0x82420007
  .word 0xa3a20059
  .word 0x82420008
  .word 0xa3a2005a
  .word 0xa3a0005b
  .word 0x27a40058
  .word 0x0c14783c
  .word 0x00000000
  .word 0xa6220006
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0xa6220004
  .word 0xa6220006
  .word 0x8f82b470
  .word 0x14400009
  .word 0x00000000
  .word 0x8e240a40
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0x8e230a40
  .word 0xac620080
  .word 0x10000004
  .word 0x00000000
  .word 0x24030001
  .word 0x8e220a40
  .word 0xac430080
  .word 0x0220102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_001b2b30
u32 FUN_001b2b30(u32 resource)
{
    u32 payload;

    payload = *(u32*)(resource + 0xa40);
    if (*(u32*)(payload + 0x80) == 0)
    {
        return true;
    }
    if (iGpffffb470 == 0)
    {
        return FUN_001016b0(*(u32*)(payload + 0x80)) != 0;
    }
    return true;
}
#pragma push
/* W389: baseline obj 856/880, nd 528; opt_common_subs off -> obj 856/880, nd 521. */
#pragma opt_common_subs off
// FUN_001b2b90
asm void FUN_001b2b90(u32 resource)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0x0080902d
  .word 0x8c840a40
  .word 0x27a5008c
  .word 0x0c040870
  .word 0x00000000
  .word 0xafa20080
  .word 0x8fa3008c
  .word 0xafa30084
  .word 0x104000c4
  .word 0x00000000
  .word 0x24040003
  .word 0x24050001
  .word 0x27a60080
  .word 0x0c131628
  .word 0x00000000
  .word 0x0040882d
  .word 0x122000aa
  .word 0x00000000
  .word 0x1000009a
  .word 0x00000000
  .word 0x8fa30060
  .word 0x2402000c
  .word 0x1062008c
  .word 0x00000000
  .word 0x24020016
  .word 0x10620079
  .word 0x00000000
  .word 0x24020023
  .word 0x10620066
  .word 0x00000000
  .word 0x24020010
  .word 0x10620038
  .word 0x00000000
  .word 0x2402000b
  .word 0x10620003
  .word 0x00000000
  .word 0x10000084
  .word 0x00000000
  .word 0x8e430a40
  .word 0x8c62008c
  .word 0x00021080
  .word 0x00621021
  .word 0x8c420090
  .word 0x14400005
  .word 0x00000000
  .word 0x8fa30080
  .word 0x8e22000c
  .word 0x00621021
  .word 0xafa20078
  .word 0x8fa20084
  .word 0xafa2007c
  .word 0x24040003
  .word 0x24050001
  .word 0x27a60078
  .word 0x0c131628
  .word 0x00000000
  .word 0x8e500a40
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c030068
  .word 0x24638df8
  .word 0xffa30010
  .word 0x240304c8
  .word 0xffa30018
  .word 0x24040001
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0040402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0x8e03008c
  .word 0x00031880
  .word 0x02031821
  .word 0xac620090
  .word 0x0220202d
  .word 0x8fa50064
  .word 0x0c131588
  .word 0x00000000
  .word 0x8e430a40
  .word 0x8c62008c
  .word 0x24420001
  .word 0xac62008c
  .word 0x10000056
  .word 0x00000000
  .word 0x8fa30080
  .word 0x8e22000c
  .word 0x00621021
  .word 0xafa20078
  .word 0x8fa20084
  .word 0xafa2007c
  .word 0x24040003
  .word 0x24050001
  .word 0x27a60078
  .word 0x0c131628
  .word 0x00000000
  .word 0x8e500a40
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c030068
  .word 0x24638df8
  .word 0xffa30010
  .word 0x240304d6
  .word 0xffa30018
  .word 0x24040002
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0040402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0x8e030098
  .word 0x00031880
  .word 0x02031821
  .word 0xac62009c
  .word 0x0220202d
  .word 0x8fa50064
  .word 0x0c131588
  .word 0x00000000
  .word 0x8e430a40
  .word 0x8c620098
  .word 0x24420001
  .word 0xac620098
  .word 0x1000002b
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c12f684
  .word 0x00000000
  .word 0x0040802d
  .word 0x8e420a40
  .word 0x0200202d
  .word 0x3c05001a
  .word 0x24a513b0
  .word 0x24460120
  .word 0x0c134370
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c134344
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c1321a0
  .word 0x00000000
  .word 0x0040802d
  .word 0x8e420a40
  .word 0x0200202d
  .word 0x3c05001a
  .word 0x24a513b0
  .word 0x24460120
  .word 0x0c134370
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c134344
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c123438
  .word 0x00000000
  .word 0xae420a1c
  .word 0x10000005
  .word 0x00000000
  .word 0x0220202d
  .word 0x8fa50064
  .word 0x0c131588
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a50060
  .word 0x0c13065c
  .word 0x00000000
  .word 0x1440ff62
  .word 0x00000000
  .word 0x12200019
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0c1315e0
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x8e430a40
  .word 0x10600009
  .word 0x00000000
  .word 0x8c640080
  .word 0x0c0403b0
  .word 0x00000000
  .word 0x8e440a40
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x12400006
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma schedule reset
#pragma opt_common_subs reset
#pragma pop

// FUN_001b2f00
asm u32 FUN_001b2f00(u32* resource)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x0000802d
  .word 0x8c830a40
  .word 0x14600004
  .word 0x00000000
  .word 0x24020001
  .word 0x100000e4
  .word 0x00000000
  .word 0x8c620084
  .word 0x10400028
  .word 0x00000000
  .word 0x8c620120
  .word 0x10400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848df8
  .word 0x24050534
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e240a40
  .word 0x27a50068
  .word 0x27a6006c
  .word 0x0c0430e8
  .word 0x00000000
  .word 0x0040902d
  .word 0x8fa30068
  .word 0x24020001
  .word 0x14620015
  .word 0x00000000
  .word 0x8e220a40
  .word 0x0240202d
  .word 0x3c05001a
  .word 0x24a513b0
  .word 0x24460120
  .word 0x0c134370
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c134344
  .word 0x00000000
  .word 0x8e220a40
  .word 0xac400084
  .word 0x8fa4006c
  .word 0x10800007
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c1315e0
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x26100001
  .word 0x0000a02d
  .word 0x1000003d
  .word 0x00000000
  .word 0x00149080
  .word 0x00721021
  .word 0x8c440090
  .word 0x10800037
  .word 0x00000000
  .word 0x27a50068
  .word 0x27a6006c
  .word 0x0c0430e8
  .word 0x00000000
  .word 0x0040982d
  .word 0x8fa30068
  .word 0x24020001
  .word 0x1462002d
  .word 0x00000000
  .word 0x16600006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848df8
  .word 0x24050550
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0260202d
  .word 0x3c050068
  .word 0x24a58e30
  .word 0x0c0699d0
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0xae330010
  .word 0x1000000e
  .word 0x00000000
  .word 0x8e22000c
  .word 0x1440000a
  .word 0x00000000
  .word 0xae33000c
  .word 0x0c066164
  .word 0x00000000
  .word 0x0260202d
  .word 0x0040282d
  .word 0x0c12f2fc
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0xae330008
  .word 0x8e220a40
  .word 0x00521021
  .word 0xac400090
  .word 0x8e220000
  .word 0x34420001
  .word 0xae220000
  .word 0x8fa4006c
  .word 0x10800007
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c1315e0
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x26100001
  .word 0x26940001
  .word 0x8e230a40
  .word 0x8c62008c
  .word 0x0282102b
  .word 0x1440ffc0
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000049
  .word 0x00000000
  .word 0x00139080
  .word 0x00721021
  .word 0x8c44009c
  .word 0x10800043
  .word 0x00000000
  .word 0x27a50068
  .word 0x27a6006c
  .word 0x0c0430e8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x8fa30068
  .word 0x24020001
  .word 0x14620039
  .word 0x00000000
  .word 0x16800006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848df8
  .word 0x24050571
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0280202d
  .word 0x3c050068
  .word 0x24a58e30
  .word 0x0c0699bc
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0xae340010
  .word 0x1000001d
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420001
  .word 0x1440000b
  .word 0x00000000
  .word 0x8e220008
  .word 0x14400008
  .word 0x00000000
  .word 0xae340008
  .word 0x0280202d
  .word 0x0c069d5c
  .word 0x00000000
  .word 0xae22000c
  .word 0x1000000f
  .word 0x00000000
  .word 0x8e220014
  .word 0x00021080
  .word 0x02221021
  .word 0xac540018
  .word 0x0280202d
  .word 0x0c069d5c
  .word 0x00000000
  .word 0x8e230014
  .word 0x00031880
  .word 0x02231821
  .word 0xac620098
  .word 0x8e220014
  .word 0x24420001
  .word 0xae220014
  .word 0x8e220a40
  .word 0x00521021
  .word 0xac40009c
  .word 0x8fa4006c
  .word 0x10800007
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c1315e0
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x26100001
  .word 0x26730001
  .word 0x8e230a40
  .word 0x8c620098
  .word 0x0262102b
  .word 0x1440ffb4
  .word 0x00000000
  .word 0xac60011c
  .word 0x16000022
  .word 0x00000000
  .word 0x8e220008
  .word 0x14400007
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c022000
  .word 0x00621025
  .word 0xae220000
  .word 0x8e22000c
  .word 0xae220008
  .word 0x8e230000
  .word 0x30620001
  .word 0x14400007
  .word 0x00000000
  .word 0x8e220014
  .word 0x14400004
  .word 0x00000000
  .word 0x3c022000
  .word 0x00621025
  .word 0xae220000
  .word 0x8f82b470
  .word 0x14400005
  .word 0x00000000
  .word 0x8e220a40
  .word 0x8c440080
  .word 0x0c0403b0
  .word 0x00000000
  .word 0x3c023f80
  .word 0xae220a20
  .word 0xae220a24
  .word 0xae220a28
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_001b32f0
u32 FUN_001b32f0(void* resource, u32 wanted, u32* hasOverlay)
{
    u32 outer;
    s32 inner;
    s32 count;
    u32 result;
    u32 type[2];
    u32 match[2];
    u32 found[2];

    result = 0;
    outer = 0;
    goto outer_check;
outer_body:
    {
        u8* entry = (u8*)resource + outer * 4;
        count = FUN_001a6c00(*(u32*)(entry + 0x18), D_00678E50_abs);
        inner = 0;
        goto inner_check;
inner_body:
        FUN_001a6e90(match, *(u32*)(entry + 0x18), D_00678E70_abs, inner);
        if (match[0] == 0)
        {
            K_Assert(D_00678DF8_abs, 0x5d2);
        }
        FUN_001a6e90(type, *(u32*)(entry + 0x18), D_00678E50_abs, inner);
        FUN_001a6e90(found, *(u32*)(entry + 0x18), D_00678E90_abs, inner);
        if (found[0] != 0)
        {
            *hasOverlay = 1;
        }
        else
        {
            *hasOverlay = 0;
        }
        if (type[0] == 1)
        {
            goto inner_increment;
        }
        if (wanted != match[0])
        {
            goto inner_increment;
        }
        result = type[1];
        goto done;
inner_increment:
        inner++;
inner_check:
        if (inner < count)
        {
            goto inner_body;
        }
        outer++;
outer_check:
        if (outer < *(u32*)((u8*)resource + 0x14))
        {
            goto outer_body;
        }
    }
done:
    return result;
}


#pragma push
/* W389: baseline obj 1352/1376, nd 991; opt_dead_assignments off -> obj 1352/1376, nd 990. */
#pragma opt_dead_assignments off
// FUN_001b3480
asm void FUN_001b3480(u32 resource)
{
  .set noreorder
  .word 0x27bdfdf0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x0000982d
  .word 0x1000013f
  .word 0x00000000
  .word 0x00131080
  .word 0x02828821
  .word 0x8e240018
  .word 0x3c050068
  .word 0x24a58e50
  .word 0x0c069b00
  .word 0x00000000
  .word 0x0040802d
  .word 0x0000902d
  .word 0x10000130
  .word 0x00000000
  .word 0x27a401f8
  .word 0x8e250018
  .word 0x3c060068
  .word 0x24c68eb0
  .word 0x0240382d
  .word 0x0c069ba4
  .word 0x00000000
  .word 0x8fa301f8
  .word 0x10600125
  .word 0x00000000
  .word 0x27a401e8
  .word 0x8e250018
  .word 0x3c060068
  .word 0x24c68e70
  .word 0x0240382d
  .word 0x0c069ba4
  .word 0x00000000
  .word 0x8fa201e8
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848df8
  .word 0x2405060a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8fa401e8
  .word 0x8e830118
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02821021
  .word 0xa4440120
  .word 0x27a401e0
  .word 0x8e250018
  .word 0x3c060068
  .word 0x24c68e90
  .word 0x0240382d
  .word 0x0c069ba4
  .word 0x00000000
  .word 0x8fa201e0
  .word 0x10400008
  .word 0x00000000
  .word 0x24040002
  .word 0x8e830118
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02821021
  .word 0xa444011e
  .word 0x27a40200
  .word 0x8e250018
  .word 0x3c060068
  .word 0x24c68e50
  .word 0x0240382d
  .word 0x0c069ba4
  .word 0x00000000
  .word 0x8fa40200
  .word 0x8e830118
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02821021
  .word 0xa444011c
  .word 0x8fa30200
  .word 0x14600055
  .word 0x00000000
  .word 0x8f82b470
  .word 0x14400027
  .word 0x00000000
  .word 0x27a401a0
  .word 0x3c050068
  .word 0x24a58ec8
  .word 0x0c14909c
  .word 0x00000000
  .word 0x86860004
  .word 0x27a40160
  .word 0x27859550
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a401a0
  .word 0x27a50160
  .word 0x0c148f9a
  .word 0x00000000
  .word 0x27a40160
  .word 0x3c050068
  .word 0x24a58ed8
  .word 0x8fa601f8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a401a0
  .word 0x27a50160
  .word 0x0c148f9a
  .word 0x00000000
  .word 0x97a501f8
  .word 0x24040004
  .word 0x27a601a0
  .word 0x0000382d
  .word 0x0c0c5ad0
  .word 0x00000000
  .word 0x8e840118
  .word 0x00041840
  .word 0x00641821
  .word 0x000318c0
  .word 0x02831821
  .word 0xac620128
  .word 0x100000a7
  .word 0x00000000
  .word 0x27a401a0
  .word 0x3c050068
  .word 0x24a58ee8
  .word 0x0c14909c
  .word 0x00000000
  .word 0x86860004
  .word 0x27a40160
  .word 0x27859550
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a401a0
  .word 0x27a50160
  .word 0x0c148f9a
  .word 0x00000000
  .word 0x27a40160
  .word 0x3c050068
  .word 0x24a58ed8
  .word 0x8fa601f8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a401a0
  .word 0x27a50160
  .word 0x0c148f9a
  .word 0x00000000
  .word 0x27a401a0
  .word 0x27a5020c
  .word 0x0c040870
  .word 0x00000000
  .word 0x97a501f8
  .word 0x24040004
  .word 0x0040302d
  .word 0x8fa7020c
  .word 0x0000402d
  .word 0x0c0c5af4
  .word 0x00000000
  .word 0x8e840118
  .word 0x00041840
  .word 0x00641821
  .word 0x000318c0
  .word 0x02831821
  .word 0xac620128
  .word 0x1000007c
  .word 0x00000000
  .word 0x24020001
  .word 0x14620059
  .word 0x00000000
  .word 0x8f82b470
  .word 0x14400032
  .word 0x00000000
  .word 0x27a40120
  .word 0x3c050068
  .word 0x24a58ef8
  .word 0x0c14909c
  .word 0x00000000
  .word 0x86860004
  .word 0x27a400e0
  .word 0x27859550
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a40120
  .word 0x27a500e0
  .word 0x0c148f9a
  .word 0x00000000
  .word 0x27a400e0
  .word 0x3c050068
  .word 0x24a58f08
  .word 0x8fa601f8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a40120
  .word 0x27a500e0
  .word 0x0c148f9a
  .word 0x00000000
  .word 0x27a40120
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0x8e840118
  .word 0x00041840
  .word 0x00641821
  .word 0x000318c0
  .word 0x02831821
  .word 0xac620130
  .word 0x8e830118
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02821021
  .word 0x8c420130
  .word 0x1440004c
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848df8
  .word 0x24050650
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000045
  .word 0x00000000
  .word 0x27a40120
  .word 0x3c050068
  .word 0x24a58f18
  .word 0x0c14909c
  .word 0x00000000
  .word 0x86860004
  .word 0x27a400e0
  .word 0x27859550
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a40120
  .word 0x27a500e0
  .word 0x0c148f9a
  .word 0x00000000
  .word 0x27a400e0
  .word 0x3c050068
  .word 0x24a58f08
  .word 0x8fa601f8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a40120
  .word 0x27a500e0
  .word 0x0c148f9a
  .word 0x00000000
  .word 0x27a40120
  .word 0x27a50208
  .word 0x0c040870
  .word 0x00000000
  .word 0x8e840118
  .word 0x00041840
  .word 0x00641821
  .word 0x000318c0
  .word 0x02831821
  .word 0xac620130
  .word 0x10000021
  .word 0x00000000
  .word 0x24020002
  .word 0x1462001e
  .word 0x00000000
  .word 0x27a400a0
  .word 0x3c050068
  .word 0x24a58f30
  .word 0x0c14909c
  .word 0x00000000
  .word 0x27a40060
  .word 0x3c050068
  .word 0x24a58ed8
  .word 0x8fa601f8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a400a0
  .word 0x27a50060
  .word 0x0c148f9a
  .word 0x00000000
  .word 0x8fa201f8
  .word 0x244203e8
  .word 0x3045ffff
  .word 0x24040004
  .word 0x27a600a0
  .word 0x0000382d
  .word 0x0c0c5ad0
  .word 0x00000000
  .word 0x8e840118
  .word 0x00041840
  .word 0x00641821
  .word 0x000318c0
  .word 0x02831821
  .word 0xac620128
  .word 0x27a401f0
  .word 0x8e250018
  .word 0x3c060068
  .word 0x24c68f40
  .word 0x0240382d
  .word 0x0c069ba4
  .word 0x00000000
  .word 0x8fa30200
  .word 0x1460000a
  .word 0x00000000
  .word 0x8e840118
  .word 0x00041840
  .word 0x00641821
  .word 0x000318c0
  .word 0x02832821
  .word 0x97a401f0
  .word 0x94a3011e
  .word 0x00641825
  .word 0xa4a3011e
  .word 0x8fa50204
  .word 0x8e840118
  .word 0x00041840
  .word 0x00641821
  .word 0x000318c0
  .word 0x02831821
  .word 0xac650124
  .word 0x8e830118
  .word 0x24630001
  .word 0xae830118
  .word 0x26520001
  .word 0x0250182a
  .word 0x1460fecf
  .word 0x00000000
  .word 0x26730001
  .word 0x8e830014
  .word 0x0263182b
  .word 0x1460febf
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0210
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_dead_assignments reset
#pragma pop

/* W418 negative: all 24 permutations of firstIndex/secondIndex/record/type were neutral at nd343/object652. */
// FUN_001b39e0
asm u32 FUN_001b39e0(u32 resource)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x0000802d
  .word 0x10000024
  .word 0x00000000
  .word 0x00101040
  .word 0x00501021
  .word 0x000210c0
  .word 0x02622021
  .word 0x9483011c
  .word 0x10600004
  .word 0x00000000
  .word 0x24020002
  .word 0x14620009
  .word 0x00000000
  .word 0x8c840128
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x14400014
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000086
  .word 0x00000000
  .word 0x24020001
  .word 0x1462000e
  .word 0x00000000
  .word 0x8f82b470
  .word 0x1440000b
  .word 0x00000000
  .word 0x8c840130
  .word 0x10800008
  .word 0x00000000
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000076
  .word 0x00000000
  .word 0x26100001
  .word 0x8e620118
  .word 0x0202102b
  .word 0x1440ffda
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000005d
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x000210c0
  .word 0x02628821
  .word 0x9623011c
  .word 0x10600004
  .word 0x00000000
  .word 0x24020002
  .word 0x14620026
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x000210c0
  .word 0x02628821
  .word 0x26300128
  .word 0x8e240124
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x8e040000
  .word 0x0040282d
  .word 0x0000302d
  .word 0x0c0c629c
  .word 0x00000000
  .word 0x8e040000
  .word 0x24050003
  .word 0x0c0c648c
  .word 0x00000000
  .word 0x9622011e
  .word 0x30420001
  .word 0x10400008
  .word 0x00000000
  .word 0x44806000
  .word 0x8e040000
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x10000036
  .word 0x00000000
  .word 0x8e040000
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070008
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x1000002d
  .word 0x00000000
  .word 0x24020001
  .word 0x1462002a
  .word 0x00000000
  .word 0x8f82b470
  .word 0x14400017
  .word 0x00000000
  .word 0x26300130
  .word 0x8e220130
  .word 0x10400023
  .word 0x00000000
  .word 0x2634012c
  .word 0x8c440110
  .word 0x0c0d3f34
  .word 0x00000000
  .word 0xae820000
  .word 0x8e240124
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x8e840000
  .word 0x24450030
  .word 0x0c0d3f7c
  .word 0x00000000
  .word 0x8e040000
  .word 0x0c0403b0
  .word 0x00000000
  .word 0xae000000
  .word 0x10000011
  .word 0x00000000
  .word 0x26340130
  .word 0x8e240130
  .word 0x1080000d
  .word 0x00000000
  .word 0x2630012c
  .word 0x0c0d3f34
  .word 0x00000000
  .word 0xae020000
  .word 0x8e240124
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x8e040000
  .word 0x24450030
  .word 0x0c0d3f7c
  .word 0x00000000
  .word 0xae800000
  .word 0x26520001
  .word 0x8e620118
  .word 0x0242102b
  .word 0x1440ffa1
  .word 0x00000000
  .word 0x8e620a40
  .word 0x1040000a
  .word 0x00000000
  .word 0x8c440120
  .word 0x0c068530
  .word 0x00000000
  .word 0x8e640a40
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae600a40
  .word 0x24020001
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_001b3c90
void FUN_001b3c90(void* resource)
{
    u32 firstIndex;
    u32 secondIndex;

    if ((*(u32*)resource & 1) != 0)
    {
        if (*(u32*)((u8*)resource + 8) != 0 &&
            *(u32*)((u8*)resource + 8) != *(u32*)((u8*)resource + 0x0c))
        {
            FUN_0049a290(*(u32*)((u8*)resource + 8));
        }
        if (*(u32*)((u8*)resource + 0x0c) != 0)
        {
            FUN_0049a290(*(u32*)((u8*)resource + 0x0c));
        }
        if (*(u32*)((u8*)resource + 0x10) != 0)
        {
            FUN_0049a290(*(u32*)((u8*)resource + 0x10));
        }
    }
    else
    {
        FUN_001a7710(*(u32*)((u8*)resource + 0x0c));
        if (*(u32*)((u8*)resource + 8) != 0)
        {
            FUN_00491ea0(*(u32*)((u8*)resource + 8));
        }
        if (*(u32*)((u8*)resource + 0x10) != 0)
        {
            FUN_00491ea0(*(u32*)((u8*)resource + 0x10));
        }
    }
    for (firstIndex = 0; firstIndex < *(u32*)((u8*)resource + 0x14); firstIndex++)
    {
        FUN_001a7710(*(u32*)((u8*)resource + 0x98 + firstIndex * 4));
        FUN_00491ea0(*(u32*)((u8*)resource + 0x18 + firstIndex * 4));
    }
    for (secondIndex = 0; secondIndex < *(u32*)((u8*)resource + 0x118); secondIndex++)
    {
        u8* record = (u8*)resource + secondIndex * 0x18;
        u16 type = *(u16*)(record + 0x11c);
        if ((type == 0) || (type == 2))
        {
            FUN_003174e0(*(u32*)(record + 0x128));
        }
        else if (type == 1)
        {
            FUN_0034fcf0(*(u32*)(record + 0x12c));
        }
    }
    if (*(u32*)((u8*)resource + 0xa1c) != 0)
    {
        FUN_0048da30(*(u32*)((u8*)resource + 0xa1c));
    }
    if (*(u32*)((u8*)resource + 0xa3c) != 0)
    {
        (*(void (**)(void*))DAT_0096017c_abs)(*(void**)((u8*)resource + 0xa3c));
    }
    (*(void (**)(void*))DAT_0096017c_abs)(resource);
}
// W417 census: call multiset is exact (94/94), but ORDER remains divergent at index 43:
// ours 0x004c9d10,0x0019d3f0,0x00198610,0x00198610 versus retail
// 0x004c9d10,0x00198610,0x00198610,0x0049a250. nd1255, object2256/window2256;
// zero headroom means any repair must be size-neutral.
// FUN_001b3e50
asm void FUN_001b3e50(void* camera, u32* resource)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0xc4430018
  .word 0xc442001c
  .word 0xc4410020
  .word 0xc4400024
  .word 0xe7a30090
  .word 0xe7a20094
  .word 0xe7a10098
  .word 0xe7a0009c
  .word 0x0c06615c
  .word 0x00000000
  .word 0xc4430018
  .word 0xc442001c
  .word 0xc4410020
  .word 0xc4400024
  .word 0xe7a30080
  .word 0xe7a20084
  .word 0xe7a10088
  .word 0xe7a0008c
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8c420004
  .word 0x24460010
  .word 0x27a50040
  .word 0x24040008
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c067f50
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c067f5c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c067f68
  .word 0x00000000
  .word 0x8e040004
  .word 0x0040282d
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x24100003
  .word 0x0c06615c
  .word 0x00000000
  .word 0xa0500002
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420001
  .word 0x1040006a
  .word 0x00000000
  .word 0x8f84b3dc
  .word 0x0c066150
  .word 0x00000000
  .word 0x0040202d
  .word 0x0240282d
  .word 0x0c12706c
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c028000
  .word 0x00621024
  .word 0x10400007
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0240282d
  .word 0x0c127058
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x3c024000
  .word 0x00621024
  .word 0x10400009
  .word 0x00000000
  .word 0x8e240010
  .word 0x1080000a
  .word 0x00000000
  .word 0x0240282d
  .word 0x0c127058
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8e240008
  .word 0x0240282d
  .word 0x0c127058
  .word 0x00000000
  .word 0x8f84b3dc
  .word 0x0c066150
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c066158
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x8f84b3dc
  .word 0x0c066150
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c028000
  .word 0x00621024
  .word 0x1040000f
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x1000002b
  .word 0x00000000
  .word 0x3c024000
  .word 0x00621024
  .word 0x1040000f
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x8e240010
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e240010
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x8e240008
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e240008
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8f84b3dc
  .word 0x0c066150
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c066160
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420001
  .word 0x10400058
  .word 0x00000000
  .word 0x8e220008
  .word 0x104000aa
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x10400049
  .word 0x00000000
  .word 0x3c024000
  .word 0x34440002
  .word 0x0000282d
  .word 0x0c066184
  .word 0x00000000
  .word 0x24040002
  .word 0x24050001
  .word 0x0c066184
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8f82b3e4
  .word 0x24050001
  .word 0x14450018
  .word 0x00000000
  .word 0x2404000e
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x9382b3f4
  .word 0x00021e00
  .word 0x9382b3e8
  .word 0x00021400
  .word 0x00621825
  .word 0x9382b3ec
  .word 0x00021200
  .word 0x00431825
  .word 0x9382b3f0
  .word 0x00432825
  .word 0x2404000f
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040010
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c028000
  .word 0x00621024
  .word 0x10400006
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0c126894
  .word 0x00000000
  .word 0x1000006b
  .word 0x00000000
  .word 0x3c024000
  .word 0x00621024
  .word 0x10400006
  .word 0x00000000
  .word 0x8e240010
  .word 0x0c126894
  .word 0x00000000
  .word 0x10000062
  .word 0x00000000
  .word 0x8e240008
  .word 0x0c126894
  .word 0x00000000
  .word 0x1000005d
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848df8
  .word 0x24050783
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000056
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x1040004c
  .word 0x00000000
  .word 0x3c024000
  .word 0x34440002
  .word 0x0000282d
  .word 0x0c066184
  .word 0x00000000
  .word 0x24040002
  .word 0x24050001
  .word 0x0c066184
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8f82b3e4
  .word 0x24050001
  .word 0x14450018
  .word 0x00000000
  .word 0x2404000e
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x9382b3f4
  .word 0x00021e00
  .word 0x9382b3e8
  .word 0x00021400
  .word 0x00621825
  .word 0x9382b3ec
  .word 0x00021200
  .word 0x00431825
  .word 0x9382b3f0
  .word 0x00432825
  .word 0x2404000f
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040010
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c028000
  .word 0x00621024
  .word 0x1040000e
  .word 0x00000000
  .word 0x8e24000c
  .word 0x10800006
  .word 0x00000000
  .word 0x24050001
  .word 0x0c069ed4
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x8e240008
  .word 0x0c06a238
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x3c024000
  .word 0x00621024
  .word 0x1040000b
  .word 0x00000000
  .word 0x8e240010
  .word 0x0c06a238
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848df8
  .word 0x240507a4
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c02c000
  .word 0x00621024
  .word 0x14400016
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000f
  .word 0x00000000
  .word 0x00101080
  .word 0x02221021
  .word 0x8c440098
  .word 0x10800006
  .word 0x00000000
  .word 0x24050001
  .word 0x0c069ed4
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x8c440018
  .word 0x0c06a238
  .word 0x00000000
  .word 0x26100001
  .word 0x8e220014
  .word 0x0202102b
  .word 0x1440ffef
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x8e230000
  .word 0x30620001
  .word 0x10400067
  .word 0x00000000
  .word 0x3c028000
  .word 0x00621024
  .word 0x1040000f
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x3c024000
  .word 0x00621024
  .word 0x1040000f
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x8e240010
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e240010
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x8e240008
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e240008
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x8f84b3dc
  .word 0x0c066150
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c066158
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x8f84b3dc
  .word 0x0c066150
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c028000
  .word 0x00621024
  .word 0x10400007
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0240282d
  .word 0x0c12706c
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x3c024000
  .word 0x00621024
  .word 0x10400007
  .word 0x00000000
  .word 0x8e240010
  .word 0x0240282d
  .word 0x0c12706c
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8e240008
  .word 0x0240282d
  .word 0x0c12706c
  .word 0x00000000
  .word 0x8f84b3dc
  .word 0x0c066150
  .word 0x00000000
  .word 0x0040202d
  .word 0x0240282d
  .word 0x0c127058
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8f84b3dc
  .word 0x0c066150
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c066160
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a50090
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a50080
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8c440004
  .word 0x27a50040
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x24100003
  .word 0x0c06615c
  .word 0x00000000
  .word 0xa0500002
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c066184
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#pragma push
/* W389: baseline obj 1568/1760, nd 912; opt_lifetimes on -> obj 1560/1760, nd 854. */
#pragma opt_lifetimes on
// FUN_001b4720
asm void FUN_001b4720(void* camera, u32* resource)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x0c066158
  .word 0x00000000
  .word 0xc4430018
  .word 0xc442001c
  .word 0xc4410020
  .word 0xc4400024
  .word 0xe7a30090
  .word 0xe7a20094
  .word 0xe7a10098
  .word 0xe7a0009c
  .word 0x0c06615c
  .word 0x00000000
  .word 0xc4430018
  .word 0xc442001c
  .word 0xc4410020
  .word 0xc4400024
  .word 0xe7a30080
  .word 0xe7a20084
  .word 0xe7a10088
  .word 0xe7a0008c
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8c420004
  .word 0x24460010
  .word 0x27a50040
  .word 0x24040008
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c067f50
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c067f5c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c067f68
  .word 0x00000000
  .word 0x8e040004
  .word 0x0040282d
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x24100003
  .word 0x0c06615c
  .word 0x00000000
  .word 0xa0500002
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420001
  .word 0x10400068
  .word 0x00000000
  .word 0x8f84b3dc
  .word 0x0c066150
  .word 0x00000000
  .word 0x0040202d
  .word 0x0240282d
  .word 0x0c12706c
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c028000
  .word 0x00621024
  .word 0x10400007
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0240282d
  .word 0x0c127058
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x3c024000
  .word 0x00621024
  .word 0x10400007
  .word 0x00000000
  .word 0x8e240010
  .word 0x0240282d
  .word 0x0c127058
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8e240008
  .word 0x0240282d
  .word 0x0c127058
  .word 0x00000000
  .word 0x8f84b3dc
  .word 0x0c066150
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c066158
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x8f84b3dc
  .word 0x0c066150
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c028000
  .word 0x00621024
  .word 0x1040000f
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x1000002b
  .word 0x00000000
  .word 0x3c024000
  .word 0x00621024
  .word 0x1040000f
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x8e240010
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e240010
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x8e240008
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e240008
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8f84b3dc
  .word 0x0c066150
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c066160
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420001
  .word 0x1040000d
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x1440003f
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848df8
  .word 0x2405082d
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000038
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x1040002e
  .word 0x00000000
  .word 0x3c024000
  .word 0x34440002
  .word 0x0000282d
  .word 0x0c066184
  .word 0x00000000
  .word 0x24040002
  .word 0x24050001
  .word 0x0c066184
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c028000
  .word 0x00621024
  .word 0x10400009
  .word 0x00000000
  .word 0x8e24000c
  .word 0x10800016
  .word 0x00000000
  .word 0x24050001
  .word 0x0c06a050
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x3c024000
  .word 0x00621024
  .word 0x1040000d
  .word 0x00000000
  .word 0x8e240010
  .word 0x1080000a
  .word 0x00000000
  .word 0x0c06a238
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848df8
  .word 0x24050846
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c02c000
  .word 0x00621024
  .word 0x14400011
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00101080
  .word 0x02221021
  .word 0x8c440098
  .word 0x10800004
  .word 0x00000000
  .word 0x24050001
  .word 0x0c06a050
  .word 0x00000000
  .word 0x26100001
  .word 0x8e220014
  .word 0x0202102b
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x8e230000
  .word 0x30620001
  .word 0x10400067
  .word 0x00000000
  .word 0x3c028000
  .word 0x00621024
  .word 0x1040000f
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x3c024000
  .word 0x00621024
  .word 0x1040000f
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x8e240010
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e240010
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x8e240008
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e240008
  .word 0x0040282d
  .word 0x0c127120
  .word 0x00000000
  .word 0x8f84b3dc
  .word 0x0c066150
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c066158
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x8f84b3dc
  .word 0x0c066150
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c028000
  .word 0x00621024
  .word 0x10400007
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0240282d
  .word 0x0c12706c
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x3c024000
  .word 0x00621024
  .word 0x10400007
  .word 0x00000000
  .word 0x8e240010
  .word 0x0240282d
  .word 0x0c12706c
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8e240008
  .word 0x0240282d
  .word 0x0c12706c
  .word 0x00000000
  .word 0x8f84b3dc
  .word 0x0c066150
  .word 0x00000000
  .word 0x0040202d
  .word 0x0240282d
  .word 0x0c127058
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8f84b3dc
  .word 0x0c066150
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c066160
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c1270f4
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a50090
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a50080
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8c440004
  .word 0x27a50040
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x24100003
  .word 0x0c06615c
  .word 0x00000000
  .word 0xa0500002
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c066184
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
}
#pragma opt_lifetimes reset
#pragma pop

#pragma push
/* Removing this worsens FUN_001b4e00 (nd650 -> nd651) - measured W161. */
#pragma opt_loop_invariants on
// FUN_001b4e00
asm void FUN_001b4e00(u32* resource, const f32* offset, f32 unused)
{
  .set noreorder
  .word 0x27bdff10
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x46006506
  .word 0x8c830000
  .word 0x30630001
  .word 0x14600053
  .word 0x00000000
  .word 0x8e630008
  .word 0x10600027
  .word 0x00000000
  .word 0x8c700004
  .word 0x0200202d
  .word 0x0c132cbc
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a200e0
  .word 0xe7a100e4
  .word 0xe7a000e8
  .word 0xc7a100e0
  .word 0xc6400000
  .word 0x46000800
  .word 0xe7a000e0
  .word 0xc6410004
  .word 0xc7a000e4
  .word 0x46010000
  .word 0xe7a000e4
  .word 0xc6410008
  .word 0xc7a000e8
  .word 0x46010000
  .word 0xe7a000e8
  .word 0xc7a200e0
  .word 0xc7a100e4
  .word 0xc7a000e8
  .word 0xe6020040
  .word 0xe6010044
  .word 0xe6000048
  .word 0x27a400d0
  .word 0x0c130b30
  .word 0x00000000
  .word 0x26040010
  .word 0x27a500d0
  .word 0x0c130b48
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c132c9c
  .word 0x00000000
  .word 0x8e630010
  .word 0x10600027
  .word 0x00000000
  .word 0x8c700004
  .word 0x0200202d
  .word 0x0c132cbc
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a200c0
  .word 0xe7a100c4
  .word 0xe7a000c8
  .word 0xc7a100c0
  .word 0xc6400000
  .word 0x46000800
  .word 0xe7a000c0
  .word 0xc6410004
  .word 0xc7a000c4
  .word 0x46010000
  .word 0xe7a000c4
  .word 0xc6410008
  .word 0xc7a000c8
  .word 0x46010000
  .word 0xe7a000c8
  .word 0xc7a200c0
  .word 0xc7a100c4
  .word 0xc7a000c8
  .word 0xe6020040
  .word 0xe6010044
  .word 0xe6000048
  .word 0x27a400b0
  .word 0x0c130b30
  .word 0x00000000
  .word 0x26040010
  .word 0x27a500b0
  .word 0x0c130b48
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c132c9c
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000002d
  .word 0x00000000
  .word 0x00101880
  .word 0x02631821
  .word 0x8c630018
  .word 0x10600027
  .word 0x00000000
  .word 0x8c710004
  .word 0x0220202d
  .word 0x0c132cbc
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a200a0
  .word 0xe7a100a4
  .word 0xe7a000a8
  .word 0xc7a100a0
  .word 0xc6400000
  .word 0x46000800
  .word 0xe7a000a0
  .word 0xc6410004
  .word 0xc7a000a4
  .word 0x46010000
  .word 0xe7a000a4
  .word 0xc6410008
  .word 0xc7a000a8
  .word 0x46010000
  .word 0xe7a000a8
  .word 0xc7a200a0
  .word 0xc7a100a4
  .word 0xc7a000a8
  .word 0xe6220040
  .word 0xe6210044
  .word 0xe6200048
  .word 0x27a40090
  .word 0x0c130b30
  .word 0x00000000
  .word 0x26240010
  .word 0x27a50090
  .word 0x0c130b48
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c132c9c
  .word 0x00000000
  .word 0x26100001
  .word 0x8e630014
  .word 0x0203182b
  .word 0x1460ffd1
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000005c
  .word 0x00000000
  .word 0x00101840
  .word 0x00701821
  .word 0x000318c0
  .word 0x02632821
  .word 0x94a4011c
  .word 0x10800004
  .word 0x00000000
  .word 0x24030002
  .word 0x14830008
  .word 0x00000000
  .word 0x8ca40128
  .word 0x0240282d
  .word 0x24060002
  .word 0x0c0c628c
  .word 0x00000000
  .word 0x1000004a
  .word 0x00000000
  .word 0x24030001
  .word 0x14830047
  .word 0x00000000
  .word 0x3c020068
  .word 0xdc438f58
  .word 0x3c020068
  .word 0xc4408f60
  .word 0xffa30080
  .word 0xe7a00088
  .word 0x0c130e30
  .word 0x00000000
  .word 0x0040882d
  .word 0x3c033f80
  .word 0xac430028
  .word 0xac430014
  .word 0xac430000
  .word 0xac400010
  .word 0xac400008
  .word 0xac400004
  .word 0xac400024
  .word 0xac400020
  .word 0xac400018
  .word 0xac400038
  .word 0xac400034
  .word 0xac400030
  .word 0x8c44000c
  .word 0x3c030002
  .word 0x34630003
  .word 0x00831825
  .word 0xac43000c
  .word 0x0220202d
  .word 0x27a50080
  .word 0x4600a306
  .word 0x24060002
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x00101040
  .word 0x00501021
  .word 0x000210c0
  .word 0x0262a021
  .word 0x8e840124
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x27a40070
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20070
  .word 0xe7a10074
  .word 0xe7a00078
  .word 0x0080282d
  .word 0x0220302d
  .word 0x0c131af8
  .word 0x00000000
  .word 0xc7a10070
  .word 0xc6400000
  .word 0x46000800
  .word 0xe7a00070
  .word 0xc6410004
  .word 0xc7a00074
  .word 0x46010000
  .word 0xe7a00074
  .word 0xc6410008
  .word 0xc7a00078
  .word 0x46010000
  .word 0xe7a00078
  .word 0x8e84012c
  .word 0x27a50070
  .word 0x0c0d3f7c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c130e20
  .word 0x00000000
  .word 0x26100001
  .word 0x8e630118
  .word 0x0203182b
  .word 0x1460ffa2
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd00f0
  .word 0x03e00008
  .word 0x00000000
}
#pragma pop

// FUN_001b5200
void FUN_001b5200(u32* resource, f32 angle)
{
    u32 i;
    u16 type;
    FldrcColor color;
    color = DAT_00678f68_color;

    if ((*resource & 1) == 0)
    {
        if (resource[2] != 0)
        {
            FUN_004cb890_typed(*(u32*)(resource[2] + 4), &color, angle, 2);
        }
        if (resource[4] != 0)
        {
            FUN_004cb890_typed(*(u32*)(resource[4] + 4), &color, angle, 2);
        }
    }
    for (i = 0; i < resource[5]; i++)
    {
        if (*(u32*)((u8*)resource + i * 4 + 0x18) != 0)
        {
            FUN_004cb890_typed(
                *(u32*)(*(u32*)((u8*)resource + i * 4 + 0x18) + 4),
                &color, angle, 2);
        }
    }
    for (i = 0; i < resource[0x46]; i++)
    {
        type = *(u16*)((u8*)resource + i * 0x18 + 0x11c);
        if ((type == 0) || (type == 2))
        {
            FUN_00318a50_typed(*(u32*)((u8*)resource + i * 0x18 + 0x128),
                               &color, angle, 2);
        }
        else if (type == 1)
        {
            FUN_0034fe30_typed(*(u32*)((u8*)resource + i * 0x18 + 0x12c),
                               0.0f, angle, 0.0f);
        }
    }
}

#pragma push
/* W389: baseline obj 644/656, nd 366; opt_loop_invariants on + opt_lifetimes on -> obj 640/656, nd 354. */
#pragma opt_loop_invariants on
#pragma opt_lifetimes on
// FUN_001b5380
asm void* FUN_001b5380(u32* resource, const f32* position, u32 direction)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x3c0242b4
  .word 0x44820800
  .word 0x04c00006
  .word 0x00000000
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00061842
  .word 0x30c20001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x46000d02
  .word 0x8e820000
  .word 0x30420001
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000077
  .word 0x00000000
  .word 0x24040001
  .word 0x24050a4c
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040902d
  .word 0x8e830000
  .word 0x34630002
  .word 0xac430000
  .word 0x86830004
  .word 0xa4430004
  .word 0x86830006
  .word 0xa4430006
  .word 0x8e840008
  .word 0x10800008
  .word 0x00000000
  .word 0x0c124730
  .word 0x00000000
  .word 0xae420008
  .word 0x0040202d
  .word 0x0c069d5c
  .word 0x00000000
  .word 0xae42000c
  .word 0x8e840010
  .word 0x10800004
  .word 0x00000000
  .word 0x0c124730
  .word 0x00000000
  .word 0xae420010
  .word 0x8e820014
  .word 0xae420014
  .word 0x0000802d
  .word 0x10000010
  .word 0x00000000
  .word 0x00101880
  .word 0x02831021
  .word 0x8c440018
  .word 0x1080000a
  .word 0x00000000
  .word 0x0243a821
  .word 0x26b10018
  .word 0x0c124730
  .word 0x00000000
  .word 0xae220000
  .word 0x0040202d
  .word 0x0c069d5c
  .word 0x00000000
  .word 0xaea20098
  .word 0x26100001
  .word 0x8e820014
  .word 0x0202102b
  .word 0x1440ffee
  .word 0x00000000
  .word 0x8e820118
  .word 0xae420118
  .word 0x0000882d
  .word 0x10000027
  .word 0x00000000
  .word 0x00111040
  .word 0x00511021
  .word 0x000210c0
  .word 0x02824021
  .word 0x2507011c
  .word 0x02428021
  .word 0x2605011c
  .word 0x24040003
  .word 0x00e0302d
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x94e30000
  .word 0x10600004
  .word 0x00000000
  .word 0x24020002
  .word 0x14620007
  .word 0x00000000
  .word 0x8d040128
  .word 0x0c0c5d14
  .word 0x00000000
  .word 0xae020128
  .word 0x10000008
  .word 0x00000000
  .word 0x24020001
  .word 0x14620005
  .word 0x00000000
  .word 0x8d04012c
  .word 0x0c0d3f54
  .word 0x00000000
  .word 0xae02012c
  .word 0x26310001
  .word 0x8e820118
  .word 0x0222102b
  .word 0x1440ffd7
  .word 0x00000000
  .word 0xc6820a20
  .word 0xc6810a24
  .word 0xc6800a28
  .word 0xe6420a20
  .word 0xe6410a24
  .word 0xe6400a28
  .word 0x0240202d
  .word 0x4600a306
  .word 0x0c06d480
  .word 0x00000000
  .word 0x0240202d
  .word 0x0260282d
  .word 0x4600a306
  .word 0x0c06d380
  .word 0x00000000
  .word 0x0240102d
  .word 0xdfbf0070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
}
#pragma opt_lifetimes reset
#pragma opt_loop_invariants reset
#pragma pop

// FUN_001b5610
void FUN_001b5610(u32* resource, const f32* color)
{
    u32 i;
    u32 count;
    s32 node;
    u32 model;

    node = FUN_003b5d50(10);
    if ((*resource & 1) != 0)
    {
        FUN_001b60d0(resource[2], color);
    }
    for (i = 0; i < resource[5]; i++)
    {
        FUN_001b60a0(*(u32*)((u8*)resource + i * 4 + 0x18), color);
    }
    (void)count;
    while (node != 0)
    {
        model = FUN_00318b80(*(u32*)(node + 0x104));
        FUN_001b60a0(model, color);
        node = *(s32*)(node + 0xf8);
    }
}

// FUN_001b56f0
void FUN_001b56f0(u32* resource, const f32* color)
{
    u32 i;
    s32 node;
    RwRGBA rgba;
    u32 model;

    node = FUN_003b5d50(10);
    if ((*resource & 1) != 0)
    {
        FUN_001b5e60(resource[2], color);
    }
    for (i = 0; i < resource[5]; i++)
    {
        FUN_001b5e30(*(u32*)((u8*)resource + i * 4 + 0x18), color);
    }
    while (node != 0)
    {
        rgba.r = (s32)(color[0] * 255.0f + 0.5f);
        rgba.g = (s32)(color[1] * 255.0f + 0.5f);
        rgba.b = (s32)(color[2] * 255.0f + 0.5f);
        rgba.a = (s32)(color[3] * 255.0f + 0.5f);
        model = *(u32*)(node + 0x104);
        FUN_00318ad0(model, &rgba);
        node = *(s32*)(node + 0xf8);
    }
}

// FUN_001b5850
void* K_Fldrc_UpdateFilterTask(KwlnTask* fldFilterTask)
{
    K_FldFilter_Main();

    return KWLNTASK_CONTINUE;
}

// FUN_001b5880
void K_Fldrc_DestroyFilterTask(KwlnTask* fldFilterTask)
{
    RwFree(fldFilterTask->workData);
}

// FUN_001b58b0
KwlnTask* K_Fldrc_CreateFilterTask(KwlnTask* parent)
{
    FldFilterWork* work;
    KwlnTask* task;

    work = RwCalloc(1, sizeof(FldFilterWork), rwMEMHINTDUR_GLOBAL);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreate(parent,
                          "field filter",
                          4197,
                          K_Fldrc_UpdateFilterTask,
                          K_Fldrc_DestroyFilterTask,
                          work);

    work->unk_08 = 1;
    work->unk_0c = 200;

    return task;
}

// FUN_001b5950
void FUN_001b5950(u32 task, u32 value)
{
    u32 work;

    work = *(u32*)(task + 0x3c);
    *(u32*)(work + 4) = value;
    FUN_001d50c0(value, *(u32*)(work + 8), *(u32*)(work + 0x10));
}

// FUN_001b5990
void FUN_001b5990(u32 task, u32 value)
{
    u32 work;

    work = *(u32*)(task + 0x3c);
    *(u32*)(work + 8) = value;
    FUN_001d50c0(*(u32*)(work + 4), value, *(u32*)(work + 0x10));
}

// FUN_001b59c0
void FUN_001b59c0(u32 task, u32 value)
{
    u32 work;

    work = *(u32*)(task + 0x3c);
    *(u32*)(work + 0x10) = value;
    FUN_001d50c0(*(u32*)(work + 4), *(u32*)(work + 8), value);
}

// FUN_001b5a00
void FUN_001b5a00(u32 task, u32 value)
{
    u32 work;

    work = *(u32*)(task + 0x3c);
    *(u32*)(work + 0x0c) = value;
    FUN_001d5130(value);
}
// FUN_001b5a30
void FUN_001b5a30(u8* color)
{
    u32 value;
    u32 packed;

    if (FUN_001a64f0((u32)color, D_00678F90) == 0)
    {
        packed = (u32)color[7] << 24 |
                 (u32)color[4] << 16 |
                 (u32)color[5] << 8 |
                 (u32)color[6];
        value = FUN_0048ee70((u32)color, D_00678F90, 1, 1);
        value = FUN_0048eed0((u32)color, value);
        FUN_0048efa0(value, 0, packed);
    }
}



// FUN_001b5ae0
void FUN_001b5ae0(u32 value, const u8* rgba)
{
    u32 target;
    u32 color;
    u32 packed;

    target = FUN_001a6350(value, D_00678F90);
    color = (u32)rgba[3] << 24;
    color |= (u32)rgba[0] << 16;
    packed = ((u32)rgba[1] << 8) | color;
    FUN_0048efa0(target, 0, (u32)rgba[2] | packed);
}

// FUN_001b5b50 MATCHING
void* FUN_001b5b50(void* color, const f32* scale)
{
    u32 mode;
    volatile /* Removing this qualifier loses FUN_001b5b50 (MATCH nd0 -> MISMATCH nd62, size 668 -> 648) - measured W170. */ u8 rgba[4];
    u32 value;
    u32 packed;
    u32 r;
    u32 g;
    u32 b;
    u32 a;
    u8 out0;
    u8 out1;
    u8 out2;
    u8 out3;

    if (FUN_001a64f0((u32)color, D_00678F90) == 0)
    {
        packed = (u32)((u8*)color)[7] << 24 |
                 (u32)((u8*)color)[4] << 16 |
                 (u32)((u8*)color)[5] << 8 |
                 (u32)((u8*)color)[6];
        value = FUN_0048ee70((u32)color, D_00678F90, 1, 1);
        value = FUN_0048eed0((u32)color, value);
        FUN_0048efa0(value, 0, packed);
    }
    mode = FUN_001a64f0((u32)color, D_00678F90);
    if (mode == 1)
    {
        value = FUN_001a6400((u32)color, D_00678F90);
        r = (s32)((f32)((value >> 16) & 0xff) * scale[0]);
        g = (s32)((f32)((value >> 8) & 0xff) * scale[1]);
        b = (s32)((f32)(value & 0xff) * scale[2]);
        a = (s32)((f32)((value >> 24) & 0xff) * scale[3]);
        if (r > 0xff) r = 0xff;
        rgba[0] = (u8)r;
        if (g > 0xff) g = 0xff;
        rgba[1] = (u8)g;
        if (b > 0xff) b = 0xff;
        rgba[2] = (u8)b;
        if (a > 0xff) a = 0xff;
        rgba[3] = (u8)a;
        out0 = rgba[0];
        out1 = rgba[1];
        out2 = rgba[2];
        out3 = rgba[3];
        ((u8*)color)[4] = out0;
        ((u8*)color)[5] = out1;
        ((u8*)color)[6] = out2;
        ((u8*)color)[7] = out3;
    }
    return color;
}

// FUN_001b5df0
void* FUN_001b5df0(void* color, const void* scale)
{
    FUN_004932c0(*(u32*)((u8*)color + 0x18), (void (*)())FUN_001b5b50, (u32)scale);
    return color;
}

// FUN_001b5e30
void FUN_001b5e30(u32 color, const void* scale)
{
    FUN_004916d0(color, (void (*)())FUN_001b5df0, (u32)scale);
}

// FUN_001b5e60
void FUN_001b5e60(u32 color, const void* scale)
{
    FUN_0049a7c0(color, (void (*)())FUN_001b5b50, (u32)scale);
}

// FUN_001b5e90
void* FUN_001b5e90(void* value, const f32* scale)
{
    u32 created;
    u32 target;
    RwV3d* base;
    RwV3d out;

    if (FUN_001a64f0((u32)value, D_00678FB0) == 0)
    {
        base = (RwV3d*)((u8*)value + 0x0c);
        created = FUN_0048eed0(
            (u32)value,
            FUN_0048ee70((u32)value, D_00678FB0, 2, 3));
        FUN_0048efc0(created, 0, base->x);
        FUN_0048efc0(created, 1, base->y);
        FUN_0048efc0(created, 2, base->z);
    }
    target = FUN_001a6350((u32)value, D_00678FB0);
    if (target != 0)
    {
        out.x = FUN_0048ef60(target, 0);
        out.y = FUN_0048ef60(target, 1);
        out.z = FUN_0048ef60(target, 2);
        out.x = out.x * scale[0];
        out.y = out.y * scale[1];
        out.z = out.z * scale[2];
        if (out.x > 1.0f) out.x = 1.0f;
        if (out.y > 1.0f) out.y = 1.0f;
        if (out.z > 1.0f) out.z = 1.0f;
        *(RwV3d*)((u8*)value + 0x0c) = out;
    }
    return value;
}

// FUN_001b6060
void* FUN_001b6060(void* value, const void* scale)
{
    FUN_004932c0(*(u32*)((u8*)value + 0x18), (void (*)())FUN_001b5e90, (u32)scale);
    return value;
}

// FUN_001b60a0
void FUN_001b60a0(u32 value, const void* scale)
{
    FUN_004916d0(value, (void (*)())FUN_001b6060, (u32)scale);
}

// FUN_001b60d0
void FUN_001b60d0(u32 value, const void* scale)
{
    FUN_0049a7c0(value, (void (*)())FUN_001b5e90, (u32)scale);
}
// FUN_001b6100
u32 FUN_001b6100(u32 id)
{
    char path[128];
    u32 value;
    s32 current;

    if (*PTR_DAT_007cd540 == 0xffffffff)
    {
        return 0;
    }
    if (K_Fldrc_GetFldPacCdvd() != NULL)
    {
        goto have_pac;
    }
    FUN_00523ac8(path, D_00678FD0, *PTR_DAT_007cd540, id);
    current = (s32)*PTR_DAT_007cd540;
    if (current < 0x33)
    {
        goto archive_ready;
    }
    if (current >= 0x3b)
    {
        goto archive_ready;
    }
    FUN_00523ac8(path, D_00678FD0, current - 0x1e, 0);
archive_ready:
    if (FUN_001008b0(path) == 0)
    {
        value = 0;
        goto done;
    }
    value = FUN_00100d80(path, 0);
    goto done;
have_pac:
    value = 1;
done:
    return value;
}

#pragma push
/* W389: baseline obj 3244/3264, nd 2138; opt_lifetimes on + opt_propagation off -> obj 3244/3264, nd 2127. */
#pragma opt_lifetimes on
#pragma opt_propagation off
/* W417 failed probe: moving K_Field_Get_A with listA/listB before the list
 * calls gave nd2127->2112 at object3244/3264, but left call order divergent
 * (an extra K_Field_Get_A before 0x003b5d50 at index 28). The retained
 * three-statement permutation closes the 76-call order at nd2116. */
// FUN_001b61f0
asm u32 FUN_001b61f0(void* resource, u32 archiveEntry)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf0070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080902d
  .word 0x00a0802d
  .word 0x16400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000313
  .word 0x00000000
  .word 0x0c06c244
  .word 0x00000000
  .word 0x1440017d
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x10400309
  .word 0x00000000
  .word 0x8e510110
  .word 0x24040004
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040802d
  .word 0x24040005
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040982d
  .word 0x92240008
  .word 0x0c067f74
  .word 0x00000000
  .word 0x92240009
  .word 0x0c067f88
  .word 0x00000000
  .word 0x9224000a
  .word 0x0c067f9c
  .word 0x00000000
  .word 0x9224000b
  .word 0x0c067fb0
  .word 0x00000000
  .word 0x9223000f
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0xaf82b3e4
  .word 0x10000002
  .word 0x00000000
  .word 0xaf80b3e4
  .word 0x9222000c
  .word 0xa382b3e8
  .word 0x9222000d
  .word 0xa382b3ec
  .word 0x9222000e
  .word 0xa382b3f0
  .word 0xa380b3f4
  .word 0x9222000c
  .word 0xa382b3f8
  .word 0x9222000d
  .word 0xa382b3fc
  .word 0x9222000e
  .word 0xa382b400
  .word 0xa380b404
  .word 0x9224000c
  .word 0x9225000d
  .word 0x9226000e
  .word 0x0000382d
  .word 0x0c06616c
  .word 0x00000000
  .word 0x9224000c
  .word 0x9225000d
  .word 0x9226000e
  .word 0x0000382d
  .word 0x0c066178
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0xc62c0014
  .word 0x0c13276c
  .word 0x00000000
  .word 0xc6340010
  .word 0x0c066164
  .word 0x00000000
  .word 0xe4540088
  .word 0x0c066164
  .word 0x00000000
  .word 0x8e220004
  .word 0x3c010001
  .word 0x34210004
  .word 0x0041082b
  .word 0x1420002c
  .word 0x00000000
  .word 0xc6340018
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x4600a306
  .word 0x0c13275c
  .word 0x00000000
  .word 0xc6210018
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010032
  .word 0x45000008
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c0342c8
  .word 0x44836000
  .word 0x0040202d
  .word 0x0c13275c
  .word 0x00000000
  .word 0x922301ff
  .word 0x240200ff
  .word 0x1462000d
  .word 0x00000000
  .word 0x922401fc
  .word 0x922501fd
  .word 0x922601fe
  .word 0x0000382d
  .word 0x0c06616c
  .word 0x00000000
  .word 0x922401fc
  .word 0x922501fd
  .word 0x922601fe
  .word 0x0000382d
  .word 0x0c066178
  .word 0x00000000
  .word 0x0c067f50
  .word 0x00000000
  .word 0xc623001c
  .word 0xc6220020
  .word 0xc6210024
  .word 0xc6200028
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x0c067f5c
  .word 0x00000000
  .word 0xc623002c
  .word 0xc6220030
  .word 0xc6210034
  .word 0xc6200038
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x0c067f68
  .word 0x00000000
  .word 0x26260040
  .word 0x24050008
  .word 0x8cc40000
  .word 0x8cc30004
  .word 0x24c60008
  .word 0x24a5ffff
  .word 0xac440000
  .word 0xac430004
  .word 0x24420008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x12600031
  .word 0x00000000
  .word 0xc6230080
  .word 0xc6220084
  .word 0xc6210088
  .word 0xc620008c
  .word 0xe6630100
  .word 0xe6620104
  .word 0xe6610108
  .word 0xe660010c
  .word 0xc6230090
  .word 0xc6220094
  .word 0xc6210098
  .word 0xc620009c
  .word 0xe6630110
  .word 0xe6620114
  .word 0xe6610118
  .word 0xe660011c
  .word 0x262600a0
  .word 0x26650120
  .word 0x24040008
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xc62300e0
  .word 0xc62200e4
  .word 0xc62100e8
  .word 0xc62000ec
  .word 0xe6630160
  .word 0xe6620164
  .word 0xe6610168
  .word 0xe660016c
  .word 0x262600f0
  .word 0x26650170
  .word 0x24040008
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x8e220004
  .word 0x3c010001
  .word 0x34210001
  .word 0x0041082b
  .word 0x14200021
  .word 0x00000000
  .word 0x0000a82d
  .word 0x10000018
  .word 0x00000000
  .word 0x0015a080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00541021
  .word 0x8c42116c
  .word 0xc6220130
  .word 0xc6210134
  .word 0xc6200138
  .word 0xe4420a20
  .word 0xe4410a24
  .word 0xe4400a28
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00549821
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00541021
  .word 0x8c42116c
  .word 0x8e64116c
  .word 0x24450a20
  .word 0x0c06d584
  .word 0x00000000
  .word 0x26b50001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x02a2102a
  .word 0x1440ffe4
  .word 0x00000000
  .word 0x8e220004
  .word 0x3c010001
  .word 0x34210002
  .word 0x0041082b
  .word 0x14200033
  .word 0x00000000
  .word 0x12000031
  .word 0x00000000
  .word 0xc623013c
  .word 0xc6220140
  .word 0xc6210144
  .word 0xc6200148
  .word 0xe6030100
  .word 0xe6020104
  .word 0xe6010108
  .word 0xe600010c
  .word 0xc623014c
  .word 0xc6220150
  .word 0xc6210154
  .word 0xc6200158
  .word 0xe6030110
  .word 0xe6020114
  .word 0xe6010118
  .word 0xe600011c
  .word 0x26260160
  .word 0x26050120
  .word 0x24040008
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xc62301a0
  .word 0xc62201a4
  .word 0xc62101a8
  .word 0xc62001ac
  .word 0xe6030160
  .word 0xe6020164
  .word 0xe6010168
  .word 0xe600016c
  .word 0x262601b0
  .word 0x26050170
  .word 0x24040008
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x8e220004
  .word 0x3c010001
  .word 0x34210003
  .word 0x0041082b
  .word 0x1420003a
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040a02d
  .word 0x24040003
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040982d
  .word 0x0000802d
  .word 0x1000000d
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00101880
  .word 0x00431021
  .word 0x8c42116c
  .word 0xc62201f0
  .word 0xc62101f4
  .word 0xc62001f8
  .word 0xe4420a2c
  .word 0xe4410a30
  .word 0xe4400a34
  .word 0x26100001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x0202102a
  .word 0x1440ffef
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e840128
  .word 0x0c0c62e0
  .word 0x00000000
  .word 0x0040202d
  .word 0x3c05001b
  .word 0x24a56060
  .word 0x262601f0
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x8e9400f8
  .word 0x1680fff5
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e640128
  .word 0x0c0c62e0
  .word 0x00000000
  .word 0x0040202d
  .word 0x3c05001b
  .word 0x24a56060
  .word 0x262601f0
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x8e7300f8
  .word 0x1660fff5
  .word 0x00000000
  .word 0x8e220004
  .word 0x3c010001
  .word 0x34210004
  .word 0x0041082b
  .word 0x10200008
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x24060178
  .word 0x3c070068
  .word 0x24e78ff0
  .word 0x0c068550
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0403b0
  .word 0x00000000
  .word 0x24020001
  .word 0x10000193
  .word 0x00000000
  .word 0x8f82a850
  .word 0x27a40080
  .word 0x3c050068
  .word 0x24a59010
  .word 0x8c460000
  .word 0x0200382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x28620033
  .word 0x1440000b
  .word 0x00000000
  .word 0x2861003b
  .word 0x10200008
  .word 0x00000000
  .word 0x2466ffe2
  .word 0x27a40080
  .word 0x3c050068
  .word 0x24a59010
  .word 0x0000382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a40080
  .word 0x27a500cc
  .word 0x0c040870
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000171
  .word 0x00000000
  .word 0x24040004
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040982d
  .word 0x24040005
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040882d
  .word 0x92040008
  .word 0x0c067f74
  .word 0x00000000
  .word 0x92040009
  .word 0x0c067f88
  .word 0x00000000
  .word 0x9204000a
  .word 0x0c067f9c
  .word 0x00000000
  .word 0x9204000b
  .word 0x0c067fb0
  .word 0x00000000
  .word 0x9203000f
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0xaf82b3e4
  .word 0x10000002
  .word 0x00000000
  .word 0xaf80b3e4
  .word 0x9202000c
  .word 0xa382b3e8
  .word 0x9202000d
  .word 0xa382b3ec
  .word 0x9202000e
  .word 0xa382b3f0
  .word 0xa380b3f4
  .word 0x9202000c
  .word 0xa382b3f8
  .word 0x9202000d
  .word 0xa382b3fc
  .word 0x9202000e
  .word 0xa382b400
  .word 0xa380b404
  .word 0x9204000c
  .word 0x9205000d
  .word 0x9206000e
  .word 0x0000382d
  .word 0x0c06616c
  .word 0x00000000
  .word 0x9204000c
  .word 0x9205000d
  .word 0x9206000e
  .word 0x0000382d
  .word 0x0c066178
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0xc60c0014
  .word 0x0c13276c
  .word 0x00000000
  .word 0xc6140010
  .word 0x0c066164
  .word 0x00000000
  .word 0xe4540088
  .word 0x0c066164
  .word 0x00000000
  .word 0x8e020004
  .word 0x3c010001
  .word 0x34210004
  .word 0x0041082b
  .word 0x1420002c
  .word 0x00000000
  .word 0xc6140018
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010007
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x4600a306
  .word 0x0c13275c
  .word 0x00000000
  .word 0xc6010018
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010032
  .word 0x45000008
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c0342c8
  .word 0x44836000
  .word 0x0040202d
  .word 0x0c13275c
  .word 0x00000000
  .word 0x920301ff
  .word 0x240200ff
  .word 0x1462000d
  .word 0x00000000
  .word 0x920401fc
  .word 0x920501fd
  .word 0x920601fe
  .word 0x0000382d
  .word 0x0c06616c
  .word 0x00000000
  .word 0x920401fc
  .word 0x920501fd
  .word 0x920601fe
  .word 0x0000382d
  .word 0x0c066178
  .word 0x00000000
  .word 0x0c067f50
  .word 0x00000000
  .word 0xc603001c
  .word 0xc6020020
  .word 0xc6010024
  .word 0xc6000028
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x0c067f5c
  .word 0x00000000
  .word 0xc603002c
  .word 0xc6020030
  .word 0xc6010034
  .word 0xc6000038
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x0c067f68
  .word 0x00000000
  .word 0x26060040
  .word 0x24050008
  .word 0x8cc40000
  .word 0x8cc30004
  .word 0x24c60008
  .word 0x24a5ffff
  .word 0xac440000
  .word 0xac430004
  .word 0x24420008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x12200031
  .word 0x00000000
  .word 0xc6030080
  .word 0xc6020084
  .word 0xc6010088
  .word 0xc600008c
  .word 0xe6230100
  .word 0xe6220104
  .word 0xe6210108
  .word 0xe620010c
  .word 0xc6030090
  .word 0xc6020094
  .word 0xc6010098
  .word 0xc600009c
  .word 0xe6230110
  .word 0xe6220114
  .word 0xe6210118
  .word 0xe620011c
  .word 0x260600a0
  .word 0x26250120
  .word 0x24040008
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xc60300e0
  .word 0xc60200e4
  .word 0xc60100e8
  .word 0xc60000ec
  .word 0xe6230160
  .word 0xe6220164
  .word 0xe6210168
  .word 0xe620016c
  .word 0x260600f0
  .word 0x26250170
  .word 0x24040008
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x8e020004
  .word 0x3c010001
  .word 0x34210001
  .word 0x0041082b
  .word 0x14200021
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000018
  .word 0x00000000
  .word 0x00149080
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0x8c42116c
  .word 0xc6020130
  .word 0xc6010134
  .word 0xc6000138
  .word 0xe4420a20
  .word 0xe4410a24
  .word 0xe4400a28
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00528821
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00521021
  .word 0x8c42116c
  .word 0x8e24116c
  .word 0x24450a20
  .word 0x0c06d584
  .word 0x00000000
  .word 0x26940001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x0282102a
  .word 0x1440ffe4
  .word 0x00000000
  .word 0x8e020004
  .word 0x3c010001
  .word 0x34210002
  .word 0x0041082b
  .word 0x14200033
  .word 0x00000000
  .word 0x12600031
  .word 0x00000000
  .word 0xc603013c
  .word 0xc6020140
  .word 0xc6010144
  .word 0xc6000148
  .word 0xe6630100
  .word 0xe6620104
  .word 0xe6610108
  .word 0xe660010c
  .word 0xc603014c
  .word 0xc6020150
  .word 0xc6010154
  .word 0xc6000158
  .word 0xe6630110
  .word 0xe6620114
  .word 0xe6610118
  .word 0xe660011c
  .word 0x26060160
  .word 0x26650120
  .word 0x24040008
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xc60301a0
  .word 0xc60201a4
  .word 0xc60101a8
  .word 0xc60001ac
  .word 0xe6630160
  .word 0xe6620164
  .word 0xe6610168
  .word 0xe660016c
  .word 0x260601b0
  .word 0x26650170
  .word 0x24040008
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x8e020004
  .word 0x3c010001
  .word 0x34210003
  .word 0x0041082b
  .word 0x1420003a
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040982d
  .word 0x24040003
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040902d
  .word 0x0000882d
  .word 0x1000000d
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00111880
  .word 0x00431021
  .word 0x8c42116c
  .word 0xc60201f0
  .word 0xc60101f4
  .word 0xc60001f8
  .word 0xe4420a2c
  .word 0xe4410a30
  .word 0xe4400a34
  .word 0x26310001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c421168
  .word 0x0222102a
  .word 0x1440ffef
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e640128
  .word 0x0c0c62e0
  .word 0x00000000
  .word 0x0040202d
  .word 0x3c05001b
  .word 0x24a56060
  .word 0x260601f0
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x8e7300f8
  .word 0x1660fff5
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e440128
  .word 0x0c0c62e0
  .word 0x00000000
  .word 0x0040202d
  .word 0x3c05001b
  .word 0x24a56060
  .word 0x260601f0
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x8e5200f8
  .word 0x1640fff5
  .word 0x00000000
  .word 0x8e020004
  .word 0x3c010001
  .word 0x34210004
  .word 0x0041082b
  .word 0x10200008
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x24060178
  .word 0x3c070068
  .word 0x24e78ff0
  .word 0x0c068550
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_propagation reset
#pragma opt_lifetimes reset
#pragma pop
// FUN_001b6eb0
asm u32 FUN_001b6eb0(u16 group, u32 id)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x30b2ffff
  .word 0x0240982d
  .word 0x0c05f648
  .word 0x00000000
  .word 0x0c05f690
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x305100ff
  .word 0x3210ffff
  .word 0x2402000f
  .word 0x16020007
  .word 0x00000000
  .word 0x24020006
  .word 0x16420004
  .word 0x00000000
  .word 0x0240102d
  .word 0x100001aa
  .word 0x00000000
  .word 0x24020001
  .word 0x16020008
  .word 0x00000000
  .word 0x322300ff
  .word 0x24020006
  .word 0x14620004
  .word 0x00000000
  .word 0x240200c9
  .word 0x100001a0
  .word 0x00000000
  .word 0x24020001
  .word 0x16020003
  .word 0x00000000
  .word 0x1000019b
  .word 0x00000000
  .word 0x2a020014
  .word 0x14400004
  .word 0x00000000
  .word 0x2a01001d
  .word 0x14200007
  .word 0x00000000
  .word 0x2a020028
  .word 0x1440000a
  .word 0x00000000
  .word 0x2a010031
  .word 0x10200007
  .word 0x00000000
  .word 0x2a420032
  .word 0x14400004
  .word 0x00000000
  .word 0x0240102d
  .word 0x10000189
  .word 0x00000000
  .word 0x24020021
  .word 0x1602000b
  .word 0x00000000
  .word 0x24020001
  .word 0x16420008
  .word 0x00000000
  .word 0x322300ff
  .word 0x24020006
  .word 0x14620004
  .word 0x00000000
  .word 0x240200c9
  .word 0x1000017c
  .word 0x00000000
  .word 0x0c068070
  .word 0x00000000
  .word 0x24050001
  .word 0x14450004
  .word 0x00000000
  .word 0x0240102d
  .word 0x10000174
  .word 0x00000000
  .word 0x2a0200c8
  .word 0x14400004
  .word 0x00000000
  .word 0x0240102d
  .word 0x1000016e
  .word 0x00000000
  .word 0x322200ff
  .word 0x2c410009
  .word 0x10200120
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636b00
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24040003
  .word 0x0080302d
  .word 0x24070005
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24030001
  .word 0x1043003b
  .word 0x00000000
  .word 0x24040004
  .word 0x24050005
  .word 0x0080302d
  .word 0x2407001a
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24030001
  .word 0x10430032
  .word 0x00000000
  .word 0x24040004
  .word 0x2405001b
  .word 0x24060009
  .word 0x24070016
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000b
  .word 0x00000000
  .word 0x267301f4
  .word 0x24020006
  .word 0x16020025
  .word 0x00000000
  .word 0x2402000d
  .word 0x16420022
  .word 0x00000000
  .word 0x26530064
  .word 0x1000001f
  .word 0x00000000
  .word 0x24040009
  .word 0x24050017
  .word 0x2406000c
  .word 0x24070003
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x26730258
  .word 0x10000013
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050004
  .word 0x0080302d
  .word 0x2407001f
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24040001
  .word 0x10440009
  .word 0x00000000
  .word 0x0080282d
  .word 0x24060002
  .word 0x2407001c
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24030001
  .word 0x14430002
  .word 0x00000000
  .word 0x267302bc
  .word 0x24020006
  .word 0x16020004
  .word 0x00000000
  .word 0x24020004
  .word 0x12420087
  .word 0x00000000
  .word 0x24020006
  .word 0x16020004
  .word 0x00000000
  .word 0x24020005
  .word 0x12420081
  .word 0x00000000
  .word 0x24020006
  .word 0x16020004
  .word 0x00000000
  .word 0x24020007
  .word 0x1242007b
  .word 0x00000000
  .word 0x24020006
  .word 0x16020004
  .word 0x00000000
  .word 0x24020008
  .word 0x12420075
  .word 0x00000000
  .word 0x24020006
  .word 0x16020004
  .word 0x00000000
  .word 0x24020015
  .word 0x1242006f
  .word 0x00000000
  .word 0x24020006
  .word 0x16020004
  .word 0x00000000
  .word 0x24020016
  .word 0x12420069
  .word 0x00000000
  .word 0x24020007
  .word 0x16020004
  .word 0x00000000
  .word 0x24020001
  .word 0x12420063
  .word 0x00000000
  .word 0x24020007
  .word 0x16020004
  .word 0x00000000
  .word 0x24020003
  .word 0x1242005d
  .word 0x00000000
  .word 0x24020007
  .word 0x16020004
  .word 0x00000000
  .word 0x24020004
  .word 0x12420057
  .word 0x00000000
  .word 0x24020007
  .word 0x16020004
  .word 0x00000000
  .word 0x24020005
  .word 0x12420051
  .word 0x00000000
  .word 0x24020007
  .word 0x16020004
  .word 0x00000000
  .word 0x24020006
  .word 0x1242004b
  .word 0x00000000
  .word 0x24020007
  .word 0x16020003
  .word 0x00000000
  .word 0x12420046
  .word 0x00000000
  .word 0x24020007
  .word 0x16020004
  .word 0x00000000
  .word 0x2402000e
  .word 0x12420040
  .word 0x00000000
  .word 0x24020007
  .word 0x16020004
  .word 0x00000000
  .word 0x2402000f
  .word 0x1242003a
  .word 0x00000000
  .word 0x24020008
  .word 0x12020037
  .word 0x00000000
  .word 0x24020009
  .word 0x16020004
  .word 0x00000000
  .word 0x24020003
  .word 0x12420031
  .word 0x00000000
  .word 0x24020009
  .word 0x16020004
  .word 0x00000000
  .word 0x24020004
  .word 0x1242002b
  .word 0x00000000
  .word 0x24020009
  .word 0x16020004
  .word 0x00000000
  .word 0x24020005
  .word 0x12420025
  .word 0x00000000
  .word 0x24020009
  .word 0x16020004
  .word 0x00000000
  .word 0x24020006
  .word 0x1242001f
  .word 0x00000000
  .word 0x2402000a
  .word 0x16020004
  .word 0x00000000
  .word 0x24020002
  .word 0x12420019
  .word 0x00000000
  .word 0x2402000e
  .word 0x16020004
  .word 0x00000000
  .word 0x24020002
  .word 0x12420013
  .word 0x00000000
  .word 0x2402000f
  .word 0x16020004
  .word 0x00000000
  .word 0x24020001
  .word 0x1242000d
  .word 0x00000000
  .word 0x24020010
  .word 0x16020004
  .word 0x00000000
  .word 0x24020004
  .word 0x12420007
  .word 0x00000000
  .word 0x24020010
  .word 0x1602004e
  .word 0x00000000
  .word 0x24020005
  .word 0x1642004b
  .word 0x00000000
  .word 0x24040004
  .word 0x2405001b
  .word 0x2406000c
  .word 0x2407001f
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24040001
  .word 0x10440009
  .word 0x00000000
  .word 0x0080282d
  .word 0x24060002
  .word 0x2407001c
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24030001
  .word 0x1443003a
  .word 0x00000000
  .word 0x0240982d
  .word 0x10000037
  .word 0x00000000
  .word 0x26730064
  .word 0x24020007
  .word 0x16020004
  .word 0x00000000
  .word 0x2402000e
  .word 0x12420022
  .word 0x00000000
  .word 0x24020007
  .word 0x16020004
  .word 0x00000000
  .word 0x2402000f
  .word 0x1242001c
  .word 0x00000000
  .word 0x24020008
  .word 0x12020019
  .word 0x00000000
  .word 0x24020009
  .word 0x16020004
  .word 0x00000000
  .word 0x24020003
  .word 0x12420013
  .word 0x00000000
  .word 0x24020009
  .word 0x16020004
  .word 0x00000000
  .word 0x24020004
  .word 0x1242000d
  .word 0x00000000
  .word 0x24020009
  .word 0x16020004
  .word 0x00000000
  .word 0x24020005
  .word 0x12420007
  .word 0x00000000
  .word 0x24020009
  .word 0x16020012
  .word 0x00000000
  .word 0x24020006
  .word 0x1642000f
  .word 0x00000000
  .word 0x0240982d
  .word 0x1000000c
  .word 0x00000000
  .word 0x267300c8
  .word 0x24020008
  .word 0x16020008
  .word 0x00000000
  .word 0x0240982d
  .word 0x10000005
  .word 0x00000000
  .word 0x26730190
  .word 0x10000002
  .word 0x00000000
  .word 0x2673012c
  .word 0x24020006
  .word 0x16020004
  .word 0x00000000
  .word 0x24020016
  .word 0x12420031
  .word 0x00000000
  .word 0x24020007
  .word 0x16020004
  .word 0x00000000
  .word 0x2402000a
  .word 0x1242002b
  .word 0x00000000
  .word 0x24020007
  .word 0x16020004
  .word 0x00000000
  .word 0x2402000b
  .word 0x12420025
  .word 0x00000000
  .word 0x24020007
  .word 0x16020004
  .word 0x00000000
  .word 0x2402000c
  .word 0x1242001f
  .word 0x00000000
  .word 0x24020007
  .word 0x16020004
  .word 0x00000000
  .word 0x2402000d
  .word 0x12420019
  .word 0x00000000
  .word 0x24020008
  .word 0x16020004
  .word 0x00000000
  .word 0x24020003
  .word 0x12420013
  .word 0x00000000
  .word 0x24020009
  .word 0x16020004
  .word 0x00000000
  .word 0x24020005
  .word 0x1242000d
  .word 0x00000000
  .word 0x24020010
  .word 0x16020004
  .word 0x00000000
  .word 0x24020004
  .word 0x12420007
  .word 0x00000000
  .word 0x24020010
  .word 0x16020005
  .word 0x00000000
  .word 0x24020005
  .word 0x16420002
  .word 0x00000000
  .word 0x0240982d
  .word 0x24020004
  .word 0x16020008
  .word 0x00000000
  .word 0x265300c8
  .word 0x240402d8
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2653012c
  .word 0x24020005
  .word 0x16020002
  .word 0x00000000
  .word 0x0240982d
  .word 0x24020027
  .word 0x16020002
  .word 0x00000000
  .word 0x0240982d
  .word 0x0260102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
// FUN_001b75e0
u32 FUN_001b75e0(u32 task)
{
    s32* work;

    work = (s32*)*(u32*)(task + 0x3c);
    switch (work[0])
    {
    case 0:
        goto state0;
    case 1:
        goto state1;
    case 2:
        goto state2;
    default:
        goto done;
    }
state0:
    if (FUN_001016b0((u32)work[1]) != 0)
    {
        work[2] = (s32)FUN_0035bb40(10, *(u32*)((u8*)work[1] + 0x110), 0);
        work[0] = work[0] + 1;
    }
    goto done;
state1:
    if (FUN_00195460((u32)work[2]) != 1)
    {
        work[0] = work[0] + 1;
    }
    goto done;
state2:
    return 0xffffffff;
done:
    return 0;
}

// FUN_001b76b0
void FUN_001b76b0(u32 task)
{
    FUN_00100ec0(*(u32*)(*(u32*)(task + 0x3c) + 4));
    (*(void (**)(void*))DAT_0096017c_abs)(*(void**)(task + 0x3c));
}

// FUN_001b7700
void* FUN_001b7700(void* parent)
{
    void* task;
    u32 work;

    work = (u32)(*(void* (**)(u32, u32, u32))DAT_00960184_abs)(1, 0x0c, 0x40000);
    if (work == 0)
    {
        return NULL;
    }
    task = (void*)FUN_00194b80((u32)parent, 10, D_00679030_abs,
                               FUN_001b75e0, FUN_001b76b0, work);
    *(u32*)(work + 4) = FUN_00100d80(D_00679040_abs, 0);
    return task;
}