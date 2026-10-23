#include "Kosaka/Field/k_shadow.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "rw/rwcore.h"
#include "Graphics/Model/mdlManager.h"
#include "Kernel/Kwln/kwln.h"
#include "Scene/mt_scene.h"
#include "Scene/resrcManager.h"
#include "Kosaka/Field/k_field.h"
#include "Kosaka/Field/k_fldFrame.h"
extern f32 cosf(f32 x);
extern f32 sinf(f32 x);

extern s32 AddIntcHandler(s32 cause, s32 (*handler)(s32), s32 mode);
extern s32 EnableIntc(s32 cause);
extern s32 RemoveIntcHandler(s32 cause, s32 handle);

typedef struct FldShadowRenderTex
{
    s32 state;              // 0x00
    u32 unk_04;             // 0x04
    u16 resTypeId;          // 0x08
    u16 mode;               // 0x0a
    Resrc* res;             // 0x0c
    Model* model;           // 0x10
    void* unk_14;           // 0x14
    f32 projectionDistance; // 0x18
    u8 unk_1c[0x20];
    void* texture;          // 0x3c
    RwRaster* raster;       // 0x40
    RwCamera* camera;       // 0x44
    void* unk_48;           // 0x48
    f32* radius;            // 0x4c
    u8 unk_50[0x24];
    RwV3d sourcePosition;   // 0x74
    RwV3d projectionAxis;   // 0x80
} FldShadowRenderTex;

#define FLDSHADOW_RESOURCE_FLAGS_DRAW 0x00000002
#define FLDSHADOW_RESOURCE_FLAGS_MATRIX 0x80000000
#define FLDSHADOW_MODEL_FLAGS_SHADOWPASS 0x0004

#define FLDSHADOW_VIEW_SCALE (*(const f32*)0x007cadb0)
#define FLDSHADOW_FAR_SCALE (*(const f32*)0x007caf24)
#define FLDSHADOW_CLEAR_COLOR ((RwRGBA*)DAT_007ce138)
#define FLDSHADOW_TINT (*(const RwRGBA*)DAT_007cc144_abs)
#define FLDSHADOW_RENDER_ACTIVE (*(u32*)0x007ce158)
#define FLDSHADOW_CHAR_RENDER_GUARD (*(u32*)0x007cc1ec)
#define FLDSHADOW_CAMERA_OFFSET ((const RwV3d*)DAT_00678920)
#define FLDSHADOW_TASK_NAME ((const char*)0x00678930)
#define FLDSHADOW_SOURCE_FILE ((const char*)0x00678948)

extern void* func_0019b2b0(KwlnTask* renderTexTask);
extern void func_0019bcf0(KwlnTask* renderTexTask);
extern void func_00199c60(RwCamera* camera);
extern void* func_004d0e40(void* raster);
extern void func_004f1780(RwRaster* raster, u32 enabled);
extern void* func_004d0be0(void* texture, RwRaster* raster);
extern RwCamera* func_004ca090(void);
extern RwFrame* func_004caf10(void);
extern RwCamera* func_004d1840(RwCamera* camera, RwFrame* frame);
extern RwFrame* func_004cb930(RwFrame* frame, const RwV3d* translation, RwOpCombineType combineOp);
#pragma alias func_004cb930_one func_004cb930
extern void func_004cb930_one(RwFrame* frame);
extern RwMatrix* func_004c2fb0(RwMatrix* matrixOut, RwMatrix* matrixIn);
extern void func_004c32a0(RwMatrix* destination, const RwMatrix* source);
extern RwCamera* func_004c9db0(RwCamera* camera, f32 nearPlane);
extern RwCamera* func_004c9d70(RwCamera* camera, f32 farPlane);
extern void func_00317a20(Model* model);
extern u32 func_001a01c0(void);
extern RwMatrix* func_001a0a50(void);
extern RwMatrix* func_001a0d80(void);
extern RpLight* func_00198580(void);
extern RpWorld* func_0049c160(RpWorld* world, RwCamera* camera);
extern void* func_004caf80(void* frame);
extern void* func_004cde90(void* raster);
extern void* func_004ca030(void* camera);
extern RwSphere* func_004912b0(void* atomic);
extern RwV3d* func_004c6c20(RwV3d* pointsOut, const RwV3d* pointsIn, u32 pointCount, const RwMatrix* matrix);
extern RwMatrix* func_004cb2f0(void* frame);
extern void* func_00464120(void* atomic, void* geometry, void* callback, void* context);
extern void* func_004f1ed0(void* vertexBuffer, u32 vertexCount, u32 primitiveType, u32 stride);
extern void func_004f2150(s32 primitiveType);
extern void func_004f1f80(void);
extern void (*D_00960090)(u32 state, u32 value);
#pragma alias D_00960090_abs D_00960090
extern void (*D_00960090_abs[])(u32 state, u32 value);
extern u32 D_00960184[];
#pragma alias D_00960184_abs D_00960184
extern u8 D_00960184_abs[];
#pragma alias ShadowCalloc D_00960184
extern void* (*ShadowCalloc)(u32 count, u32 size, u32 hint);
extern RwRGBA DAT_007cc144;
#pragma alias DAT_007cc144_abs DAT_007cc144
extern u8 DAT_007cc144_abs[];
extern u8 DAT_007ce138[];
extern u8 DAT_00678920[];
extern s32 DAT_007cc148;
extern s32 DAT_007ce13c;
extern void* func_004ce0f0(s32 width, s32 height, s32 depth, s32 flags);
#pragma alias jtbl_0096017C_abs jtbl_0096017C
extern u32 jtbl_0096017C_abs[];
extern void* memset(void* dest, s32 value, u32 size);
extern s32 K_Scene_001a0250(void);
extern void* func_00491880(void);
extern void* func_004919b0(void* renderObject, void* geometry, u32 flags);
extern void* func_00492d10(void* renderObject, void* frame);
extern void* func_00492e20(void* geometry, f32* bounds);
extern void* func_00493210(void* layout, u16* indices, u16 a, u16 b, u16 c);
extern void* func_00493230(void* layout, u16* indices, void* colorData);
extern void* func_00493370(void* layout, u16 flags);
extern void* func_004933d0(void* layout);
extern void* func_00493710(s32 type, s32 count, u32 format);
extern void* func_00493b60(void* layout);
extern void* func_00494be0(void);
extern void* func_00494cc0(void* colorData);
extern void* func_0049c1b0(RpWorld* world, RwCamera* camera);
extern void* func_004d0f00(void* texture);
extern void* func_004cb750(RwFrame* frame, const RwV3d* translation, RwOpCombineType combineOp);
extern void* func_00491a80(void* renderObject);
extern void func_003176c0(Model* model);
extern void func_00318b90(Model* model);
extern u32 func_00319010(Model* model);
extern u32 mdlStreamRead(Model* model);
extern void func_004c2cc0(void* quaternion);
extern void func_004c2d20(RwMatrix* matrix, const void* quaternion);
extern void func_004c2f10(RwMatrix* matrix);

extern void* func_00464020(void* collisionWorld, void* query, void* callback, void* context);
extern void* func_004916d0(void* list, void* callback, void* context);
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
typedef struct FldShadowTriangle
{
    RwV3d normal;                 // 0x00
    u8 unk_0c[0x10];              // 0x0c
    const RwV3d* vertices[3];     // 0x1c
} FldShadowTriangle;

typedef struct FldShadowBoundsAccum
{
    RwV3d center;                 // 0x00
    f32 radius;                   // 0x0c
    s32 count;                    // 0x10
    void* largestAtomic;          // 0x14
} FldShadowBoundsAccum;

typedef struct FldShadowProjectionWork
{
    u8 vertexBuffer[0x5460];      // 0x0000
    s32 vertexCount;              // 0x5460
    s32 triangleCount;            // 0x5464
    u8 unk_5468[0x08];            // 0x5468
    RwV3d projectionNormal;       // 0x5470
    u32 unk_547c;                  // 0x547c
    RwMatrix projectionMatrix;    // 0x5480
    u8 alpha;                     // 0x54c0
    u8 unk_54c1[0x03];            // 0x54c1
    s32 depthAlpha;               // 0x54c4
    s32 flushedTriangles;         // 0x54c8
} FldShadowProjectionWork;

typedef struct FldShadowAtomicContext
{
    void* geometry;               // 0x00
    FldShadowProjectionWork* work; // 0x04
    void* atomic;                 // 0x08
} FldShadowAtomicContext;
extern void* func_00199d90(void* ignored1,
                           void* ignored2,
                           const FldShadowTriangle* triangle,
                           FldShadowProjectionWork* work);
extern u32 K_FldShadow_Draw(f32 xLeft,
                            f32 yTop,
                            f32 xRight,
                            f32 yBot,
                            f32 zBufferNear,
                            f32 recipZ,
                            const RwRGBA* topColor,
                            const RwRGBA* botColor);

static inline u8 K_FldShadow_DepthAlpha(f32 depth, u8 baseAlpha)
{
    f32 alpha;

    alpha = 1.0f - depth * depth;
    if (alpha < 0.0f)
    {
        return 0;
    }

    return (u8)(alpha * (f32)baseAlpha);
}

static inline u32 K_FldShadow_AxisHasNonNegative(f32 a, f32 b, f32 c)
{
    return a >= 0.0f || b >= 0.0f || c >= 0.0f;
}

static inline u32 K_FldShadow_AxisHasAtMostOne(f32 a, f32 b, f32 c)
{
    return a <= 1.0f || b <= 1.0f || c <= 1.0f;
}

static inline void K_FldShadow_EmitTriangle(FldShadowAtomicContext* context,
                                            const RwV3d* clipVertices,
                                            const RwV3d* outputVertices)
{
    RwIm3DVertex* output;
    s32 vertexCount;
    u8 alpha;
    RwV3d outputCopies[3];

    if (clipVertices[0].z < 0.0f && clipVertices[1].z < 0.0f && clipVertices[2].z < 0.0f)
    {
        return;
    }
    if (clipVertices[0].x < 0.0f && clipVertices[1].x < 0.0f && clipVertices[2].x < 0.0f)
    {
        return;
    }
    if (clipVertices[0].x > 1.0f && clipVertices[1].x > 1.0f && clipVertices[2].x > 1.0f)
    {
        return;
    }
    if (clipVertices[0].y < 0.0f && clipVertices[1].y < 0.0f && clipVertices[2].y < 0.0f)
    {
        return;
    }
    if (clipVertices[0].y > 1.0f && clipVertices[1].y > 1.0f && clipVertices[2].y > 1.0f)
    {
        return;
    }

    vertexCount = context->work->vertexCount;
    if (vertexCount >= 0x256)
    {
        if (func_004f1ed0(context->work, (u32)vertexCount, 0, 0x19) != NULL)
        {
            func_004f2150(3);
            func_004f1f80();
        }
        context->work->flushedTriangles++;
        context->work->vertexCount = 0;
        vertexCount = 0;
    }

    output = (RwIm3DVertex*)context->work->vertexBuffer;
    output += vertexCount;
    outputCopies[0] = outputVertices[0];
    outputCopies[1] = outputVertices[1];
    outputCopies[2] = outputVertices[2];
    output[0].objVertex = outputCopies[0];
    output[1].objVertex = outputCopies[1];
    output[2].objVertex = outputCopies[2];
    output[0].u = clipVertices[0].x;
    output[0].v = clipVertices[0].y;
    output[1].u = clipVertices[1].x;
    output[1].v = clipVertices[1].y;
    output[2].u = clipVertices[2].x;
    output[2].v = clipVertices[2].y;

    if (context->work->depthAlpha != 0)
    {
        alpha = K_FldShadow_DepthAlpha(clipVertices[0].z, context->work->alpha);
        output[0].c.color.r = alpha;
        output[0].c.color.g = alpha;
        output[0].c.color.b = alpha;
        output[0].c.color.a = alpha;

        alpha = K_FldShadow_DepthAlpha(clipVertices[1].z, context->work->alpha);
        output[1].c.color.r = alpha;
        output[1].c.color.g = alpha;
        output[1].c.color.b = alpha;
        output[1].c.color.a = alpha;

        alpha = K_FldShadow_DepthAlpha(clipVertices[2].z, context->work->alpha);
        output[2].c.color.r = alpha;
        output[2].c.color.g = alpha;
        output[2].c.color.b = alpha;
        output[2].c.color.a = alpha;
    }
    else
    {
        alpha = context->work->alpha;
        output[0].c.color.r = alpha;
        output[0].c.color.g = alpha;
        output[0].c.color.b = alpha;
        output[0].c.color.a = alpha;
        output[1].c.color.r = alpha;
        output[1].c.color.g = alpha;
        output[1].c.color.b = alpha;
        output[1].c.color.a = alpha;
        output[2].c.color.r = alpha;
        output[2].c.color.g = alpha;
        output[2].c.color.b = alpha;
        output[2].c.color.a = alpha;
    }
    context->work->vertexCount += 3;
}
static inline void K_FldShadow_EmitProjectedTriangle(
    FldShadowProjectionWork* work,
    const u8* workFields,
    const RwV3d* clipVertices,
    const RwV3d* outputVertices)
{
    RwIm3DVertex* output;
    s32 vertexCount;
    u8 alpha;
    RwV3d outputCopies[3];

    if (clipVertices[0].z < 0.0f &&
        clipVertices[1].z < 0.0f &&
        clipVertices[2].z < 0.0f)
    {
        return;
    }
    if (clipVertices[0].x < 0.0f &&
        clipVertices[1].x < 0.0f &&
        clipVertices[2].x < 0.0f)
    {
        return;
    }
    if (clipVertices[0].x > 1.0f &&
        clipVertices[1].x > 1.0f &&
        clipVertices[2].x > 1.0f)
    {
        return;
    }
    if (clipVertices[0].y < 0.0f &&
        clipVertices[1].y < 0.0f &&
        clipVertices[2].y < 0.0f)
    {
        return;
    }
    if (clipVertices[0].y > 1.0f &&
        clipVertices[1].y > 1.0f &&
        clipVertices[2].y > 1.0f)
    {
        return;
    }

    vertexCount = work->vertexCount;
    if (vertexCount >= 0x256)
    {
        if (func_004f1ed0(work, (u32)vertexCount, 0, 0x19) != NULL)
        {
            func_004f2150(3);
            func_004f1f80();
        }
        work->flushedTriangles++;
        work->vertexCount = 0;
        vertexCount = 0;
    }

    output = (RwIm3DVertex*)work->vertexBuffer;
    output += vertexCount;
    outputCopies[0] = outputVertices[0];
    outputCopies[1] = outputVertices[1];
    outputCopies[2] = outputVertices[2];
    output[0].objVertex = outputCopies[0];
    output[1].objVertex = outputCopies[1];
    output[2].objVertex = outputCopies[2];
    output[0].u = clipVertices[0].x;
    output[0].v = clipVertices[0].y;
    output[1].u = clipVertices[1].x;
    output[1].v = clipVertices[1].y;
    output[2].u = clipVertices[2].x;
    output[2].v = clipVertices[2].y;

    if (*(const s32*)(workFields + 0x54) != 0)
    {
        alpha = K_FldShadow_DepthAlpha(
            clipVertices[0].z, *(const u8*)(workFields + 0x50));
        output[0].c.color.r = alpha;
        output[0].c.color.g = alpha;
        output[0].c.color.b = alpha;
        output[0].c.color.a = alpha;

        alpha = K_FldShadow_DepthAlpha(
            clipVertices[1].z, *(const u8*)(workFields + 0x50));
        output[1].c.color.r = alpha;
        output[1].c.color.g = alpha;
        output[1].c.color.b = alpha;
        output[1].c.color.a = alpha;

        alpha = K_FldShadow_DepthAlpha(
            clipVertices[2].z, *(const u8*)(workFields + 0x50));
        output[2].c.color.r = alpha;
        output[2].c.color.g = alpha;
        output[2].c.color.b = alpha;
        output[2].c.color.a = alpha;
    }
    else
    {
        alpha = *(const u8*)(workFields + 0x50);
        output[0].c.color.r = alpha;
        output[0].c.color.g = alpha;
        output[0].c.color.b = alpha;
        output[0].c.color.a = alpha;
        output[1].c.color.r = alpha;
        output[1].c.color.g = alpha;
        output[1].c.color.b = alpha;
        output[1].c.color.a = alpha;
        output[2].c.color.r = alpha;
        output[2].c.color.g = alpha;
        output[2].c.color.b = alpha;
        output[2].c.color.a = alpha;
    }
    work->vertexCount = vertexCount + 3;
}




/* W377: stacking opt_loop_invariants on and opt_propagation off improves func_0019a420 (nd1122 -> nd1083; object 1748/1808). */



typedef struct
{
    RwRGBA col1;
    RwRGBA col2;
    RwRGBA col3;
    RwRGBA col4;
} ShadowColors;

// 00678960
static ShadowColors gShadowColors =
{
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 255},
    {0, 0, 0, 255}
};

//
// to help visualizing:
//
// (xLeft, yTop)  [0] --------- [2] (xRigth, yTop)
//                |   \           |
//                |     \         |
//                |       \       |
//                |         \     |
//                |           \   |
// (xLeft, yBot)  [1] --------- [3]  (xRight, yBot)

#define FLDSHADOW_RING_COLOR ((const RwRGBA*)0x007cc140)
extern f32 fGpffff8214;
#define FLDSHADOW_RING_ANGLE_STEP fGpffff8214

static void K_FldShadow_SubmitFieldResource(ResrcFld* field,
                                             const RwV3d* position,
                                             FldShadowProjectionWork* work)
{
    u8* collisionData;
    void* collisionWorld;
    u32 collisionCount;
    u32 i;

    if (field == NULL || field->unk_160 == NULL)
    {
        return;
    }

    collisionData = (u8*)field->unk_160;
    collisionWorld = *(void**)(collisionData + 0x10);
    if (collisionWorld != NULL)
    {
        func_00464020(collisionWorld, (void*)position, (void*)func_00199d90, work);
        return;
    }

    collisionCount = *(u32*)(collisionData + 0x14);
    for (i = 0; i < collisionCount; i++)
    {
        func_00464020(*(void**)(collisionData + 0x18 + i * sizeof(void*)),
                      (void*)position, (void*)func_00199d90, work);
    }
}

static void K_FldShadow_SubmitFieldGeometry(const RwV3d* position,
                                             FldShadowProjectionWork* work,
                                             s32 drawAll)
{
    ResrcFld* field;
    ResrcFld* fields[5];
    u16 resourceIds[5];
    u8* gridCell;
    ResrcModelChar* gridModel;
    KwlnTask* collisionTask;
    s32 xGrid;
    s32 zGrid;
    s32 fieldCount;
    s32 i;
    s32 j;

    field = (ResrcFld*)MT_Scene_GetResListHead(RESRC_TYPE_FLD);
    if (field == NULL)
    {
        return;
    }

    fieldCount = 0;
    if ((drawAll != 0) &&
        ((K_Scene_001a0250() == 1) ||
         ((gMtScene->fldMajorId > 0x32) && (gMtScene->fldMajorId < 0x3b)) ||
         ((gMtScene->fldMajorId > 0x46) && (gMtScene->fldMajorId < 0x4f))))
    {
        gridModel = (ResrcModelChar*)MT_Scene_GetRes(0x400);
        collisionTask = gridModel != NULL ? gridModel->collisCtlTask : NULL;
        xGrid = collisionTask != NULL ? K_FldFrame_CtlGetXGrid(collisionTask) : 0;
        zGrid = collisionTask != NULL ? K_FldFrame_CtlGetZGrid(collisionTask) : 0;
        gridCell = (u8*)K_Field_Get() + 0x4c + zGrid * 0x100 + xGrid * 0x10;

        resourceIds[0] = *(u16*)(gridCell + 0x4c);
        resourceIds[1] = *(u16*)(gridCell + 0x5c);
        resourceIds[2] = *(u16*)(gridCell + 0x3c);
        resourceIds[3] = *(u16*)(gridCell - 0xb4);
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < fieldCount; j++)
            {
                if (resourceIds[i] == resourceIds[j])
                {
                    break;
                }
            }
            if (j == fieldCount)
            {
                fields[fieldCount] = (ResrcFld*)MT_Scene_GetRes(resourceIds[i]);
                if (fields[fieldCount] != NULL)
                {
                    fieldCount++;
                }
            }
        }
    }
    else
    {
        fields[0] = field;
        fieldCount = 1;
    }

    for (i = 0; i < fieldCount; i++)
    {
        K_FldShadow_SubmitFieldResource(fields[i], position, work);
    }
}

/* Removing this worsens FUN_0019ab80 (nd1126 -> nd1129) - measured W161. */

#pragma opt_loop_invariants reset
#pragma opt_lifetimes reset
/* W417 negative: rewriting the mode if-chain as a switch grew this object to 1092 bytes beyond its 1088-byte window (nd747); rejected. */
// FUN_0019beb0
#ifndef PC_BUILD
asm KwlnTask* K_FldShadow_CreateRenderTexTask(KwlnTask* parent, u16 resTypeId, s32 param_3)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x00a0a02d
  .word 0x00c0a82d
  .word 0x0000902d
  .word 0x3c110096
  .word 0x26310184
  .word 0x24040001
  .word 0x2405008c
  .word 0x3c060004
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040982d
  .word 0x16600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000eb
  .word 0x00000000
  .word 0x0200202d
  .word 0x3c050068
  .word 0x24a58930
  .word 0x2406104b
  .word 0x3c07001a
  .word 0x24e7b2b0
  .word 0x3c08001a
  .word 0x2508bcf0
  .word 0x0260482d
  .word 0x0c0652c8
  .word 0x00000000
  .word 0x0040b02d
  .word 0xa6740008
  .word 0x2670000a
  .word 0xa675000a
  .word 0x24040013
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x3c043f80
  .word 0x24030004
  .word 0x24050001
  .word 0x10000021
  .word 0x00000000
  .word 0x16400007
  .word 0x00000000
  .word 0xc4420100
  .word 0xc4410104
  .word 0xc4400108
  .word 0xe6620074
  .word 0xe6610078
  .word 0xe660007c
  .word 0x16450015
  .word 0x00000000
  .word 0xc6610074
  .word 0xc4400100
  .word 0x46000801
  .word 0x46000085
  .word 0xc661007c
  .word 0xc4400108
  .word 0x46000801
  .word 0x46000005
  .word 0x46001036
  .word 0x45010006
  .word 0x00000000
  .word 0xae640080
  .word 0xae600084
  .word 0xae600088
  .word 0x10000004
  .word 0x00000000
  .word 0xae600080
  .word 0xae600084
  .word 0xae640088
  .word 0xa6030000
  .word 0x26520001
  .word 0x8c4200f8
  .word 0x1440ffdf
  .word 0x00000000
  .word 0x96030000
  .word 0x24020003
  .word 0x1062007a
  .word 0x00000000
  .word 0x24020004
  .word 0x10620077
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000007c
  .word 0x00000000
  .word 0x2670003c
  .word 0x0000202d
  .word 0x0c134390
  .word 0x00000000
  .word 0xae020000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848948
  .word 0x240505ed
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e64003c
  .word 0x8c830050
  .word 0x2402ff00
  .word 0x00621024
  .word 0x34420002
  .word 0xac820050
  .word 0x8e64003c
  .word 0x8c830050
  .word 0x3c02ffff
  .word 0x344200ff
  .word 0x00621024
  .word 0x34423300
  .word 0xac820050
  .word 0x24040080
  .word 0x0080282d
  .word 0x24060020
  .word 0x24070505
  .word 0x0c13383c
  .word 0x00000000
  .word 0x0040902d
  .word 0x12400005
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c13c5e0
  .word 0x00000000
  .word 0x26750040
  .word 0xae720040
  .word 0x8e040000
  .word 0x0240282d
  .word 0x0c1342f8
  .word 0x00000000
  .word 0x0c132824
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000028
  .word 0x00000000
  .word 0x3c020068
  .word 0xdc438920
  .word 0x3c020068
  .word 0xc4408928
  .word 0xffa30080
  .word 0xe7a00088
  .word 0x0c132bc4
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c134610
  .word 0x00000000
  .word 0x26120004
  .word 0x8e040004
  .word 0x0c132e4c
  .word 0x00000000
  .word 0x8e440000
  .word 0x27a50080
  .word 0x0000302d
  .word 0x0c132dd4
  .word 0x00000000
  .word 0x8e420000
  .word 0x10400010
  .word 0x00000000
  .word 0x24040080
  .word 0x0080282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c13383c
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0xae020064
  .word 0x0200202d
  .word 0x24050002
  .word 0x0c1327c0
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c066718
  .word 0x00000000
  .word 0x0000802d
  .word 0x26720044
  .word 0xae700044
  .word 0x8f84b3dc
  .word 0x0c066150
  .word 0x00000000
  .word 0x0040202d
  .word 0x8e450000
  .word 0x0c127058
  .word 0x00000000
  .word 0x8ea30000
  .word 0x8e420000
  .word 0xac430060
  .word 0x24040001
  .word 0x240554d0
  .word 0x3c060004
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0xae620048
  .word 0x1000000b
  .word 0x00000000
  .word 0x2670004c
  .word 0x24040001
  .word 0x2405000c
  .word 0x3c060004
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0xae020000
  .word 0x3c0341f0
  .word 0xac430000
  .word 0x3283ffff
  .word 0x3c02000f
  .word 0x3442fc00
  .word 0x00621024
  .word 0x00021a83
  .word 0x24020001
  .word 0x14620011
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040802d
  .word 0xae70000c
  .word 0x16000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848948
  .word 0x2405060a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e020128
  .word 0xae620010
  .word 0x10000012
  .word 0x00000000
  .word 0x24020003
  .word 0x1462000f
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040802d
  .word 0xae70000c
  .word 0x16000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848948
  .word 0x24050613
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e020128
  .word 0xae620010
  .word 0x02c0102d
  .word 0xdfbf0070
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
#endif /* PC_BUILD: asm function omitted */

extern void* func_004916d0(void* list, void* callback, void* context);

typedef struct FldShadowRingWork
{
    f32 radius;       // 0x00
    void* renderObject; // 0x04
    void* colorData;   // 0x08
} FldShadowRingWork;

static void K_FldShadow_FillRingVertices(void* layout, f32 radius)
{
    void* geometry;
    f32* vertices;
    u16* indices;
    f32 angle;
    s32 i;

    geometry = *(void**)((u8*)layout + 0x5c);
    vertices = geometry != NULL ? *(f32**)((u8*)geometry + 0x14) : NULL;
    indices = *(u16**)((u8*)layout + 0x2c);
    if (vertices == NULL || indices == NULL)
    {
        return;
    }

    vertices[0] = 0.0f;
    vertices[1] = 5.0f;
    vertices[2] = 0.0f;
    angle = 0.0f;
    for (i = 0; i < 32; i++)
    {
        f32* vertex;
        u16* index;

        vertex = &vertices[(i + 1) * 3];
        vertex[0] = radius * cosf(angle);
        vertex[1] = 5.0f;
        vertex[2] = radius * sinf(angle);
        index = (u16*)((u8*)indices + i * 8);
        func_00493210(layout, index, 0, (u16)(i + 2), (u16)(i + 1));
        angle += FLDSHADOW_RING_ANGLE_STEP;
    }

    vertices[99] = radius;
    vertices[100] = 5.0f;
    vertices[101] = 0.0f;
}

static void K_FldShadow_CreateRing(FldShadowRenderTex* shadow)
{
    FldShadowRingWork* ring;
    void* layout;
    void* geometry;
    u8* colors;
    f32 bounds[4];
    RwFrame* frame;
    s32 i;

    ring = (FldShadowRingWork*)shadow->radius;
    if (ring == NULL)
    {
        return;
    }

    ring->colorData = func_00494be0();
    if (ring->colorData != NULL)
    {
        *(RwRGBA*)((u8*)ring->colorData + 4) = *FLDSHADOW_RING_COLOR;
    }

    layout = func_00493710(0x22, 0x20, 0x4a);
    if (layout == NULL)
    {
        return;
    }

    for (i = 0; i < 32; i++)
    {
        u16* index;

        index = (u16*)((u8*)*(void**)((u8*)layout + 0x2c) + i * 8);
        func_00493210(layout, index, 0, (u16)(i + 2), (u16)(i + 1));
        func_00493230(layout, index, ring->colorData);
    }

    colors = *(u8**)((u8*)layout + 0x30);
    if (colors != NULL)
    {
        colors[0] = 0;
        colors[1] = 0;
        colors[2] = 0;
        colors[3] = 0x80;
        memset(colors + 4, 0, 0x84);
    }

    K_FldShadow_FillRingVertices(layout, ring->radius);
    func_004933d0(layout);

    geometry = *(void**)((u8*)layout + 0x5c);
    if (geometry != NULL)
    {
        func_00492e20(geometry, bounds);
        *(f32*)((u8*)geometry + 4) = bounds[0];
        *(f32*)((u8*)geometry + 8) = bounds[1];
        *(f32*)((u8*)geometry + 0xc) = bounds[2];
        *(f32*)((u8*)geometry + 0x10) = bounds[3];
    }

    ring->renderObject = func_00491880();
    if (ring->renderObject != NULL)
    {
        func_004919b0(ring->renderObject, layout, 0);
    }
    func_00493b60(layout);

    if (ring->renderObject != NULL)
    {
        frame = (RwFrame*)*(void**)((u8*)ring->renderObject + 4);
        if (frame == NULL)
        {
            frame = func_004caf10();
            if (frame != NULL)
            {
                func_00492d10(ring->renderObject, frame);
            }
        }
        if (frame != NULL)
        {
            ((void (*)(RwFrame*))func_004cb930)(frame);
        }
    }
}

static void K_FldShadow_RenderRing(FldShadowRenderTex* shadow)
{
    FldShadowRingWork* ring;
    RwFrame* frame;
    RwCamera* camera;
    RwV3d position;
    void (*render)(void*);

    ring = (FldShadowRingWork*)shadow->radius;
    if (ring == NULL || ring->renderObject == NULL || shadow->model == NULL)
    {
        return;
    }

    frame = (RwFrame*)*(void**)((u8*)ring->renderObject + 4);
    if (frame == NULL)
    {
        return;
    }

    position = mdlGetMatrix(shadow->model)->pos;
    func_004cb750(frame, &position, rwCOMBINEREPLACE);
    camera = kwlnGetMainCamera();
    if (RwCameraBeginUpdate(camera) == NULL)
    {
        return;
    }

    D_00960090(7, 2);
    D_00960090(6, 1);
    D_00960090(8, 0);
    D_00960090(14, 0);
    RpSkyRenderStateSet(rpSKYRENDERSTATEALPHA_1, (void*)0x44);
    RpSkyRenderStateSet(rpSKYRENDERSTATEATEST_1, (void*)0x717fb);
    render = *(void (**)(void*))((u8*)ring->renderObject + 0x48);
    if (render != NULL)
    {
        render(ring->renderObject);
    }
    if (gFogEnabled == 1)
    {
        D_00960090(14, 0);
    }
    RwCameraEndUpdate(camera);
}



// FUN_0019c2f0
void func_0019c2f0(KwlnTask* renderTexTask, void* value)
{
    FldShadowRenderTex* shadow;

    shadow = (FldShadowRenderTex*)renderTexTask->workData;
    shadow->unk_04 = (u32)(uintptr_t)value;
}

// FUN_0019c300
u16 func_0019c300(KwlnTask* renderTexTask)
{
    return ((FldShadowRenderTex*)renderTexTask->workData)->mode;
}

// FUN_0019c310
void func_0019c310(KwlnTask* renderTexTask, u16 mode)
{
    ((FldShadowRenderTex*)renderTexTask->workData)->mode = mode;
}

// FUN_0019c320
void func_0019c320(KwlnTask* renderTexTask, f32 radius)
{
    FldShadowRenderTex* shadow;
    void* layout;
    void* geometry;
    f32* vertices;
    f32* vertex;
    f32 ringAngle;
    s32 i;

    shadow = (FldShadowRenderTex*)renderTexTask->workData;
    if (shadow->radius == NULL)
    {
        return;
    }

    ((FldShadowRingWork*)shadow->radius)->radius = radius;
    if (((FldShadowRingWork*)shadow->radius)->renderObject == NULL)
    {
        return;
    }

    layout = *(void**)((u8*)((FldShadowRingWork*)shadow->radius)->renderObject + 0x18);
    func_00493370(layout, 0xfff);
    geometry = *(void**)((u8*)layout + 0x5c);
    vertices = *(f32**)((u8*)geometry + 0x14);
    vertices[0] = 0.0f;
    vertices[1] = 5.0f;
    vertices[2] = 0.0f;
    ringAngle = 0.0f;
    for (i = 0; i < 0x20; i++)
    {
        vertex = vertices + i * 3;
        vertex[3] = ((FldShadowRingWork*)shadow->radius)->radius * cosf(ringAngle);
        vertex[4] = 5.0f;
        vertex[5] = ((FldShadowRingWork*)shadow->radius)->radius * sinf(ringAngle);
        ringAngle += FLDSHADOW_RING_ANGLE_STEP;
    }
    vertices[i * 3 + 3] =
        ((FldShadowRingWork*)shadow->radius)->radius * cosf(0.0f);
    vertices[i * 3 + 4] = 5.0f;
    vertices[i * 3 + 5] =
        ((FldShadowRingWork*)shadow->radius)->radius * sinf(0.0f);

    func_004933d0(layout);
}

// FUN_0019c490
f32 func_0019c490(KwlnTask* renderTexTask)
{
    FldShadowRenderTex* shadow = (FldShadowRenderTex*)renderTexTask->workData;
    f32 radius = 0.0f;

    if (shadow->radius != NULL)
    {
        radius = *shadow->radius;
    }
    return radius;
}

#define K_FldShadow_SetAttachedShadowEnabled(model_, enabled_)                                            \
    do                                                                                                     \
    {                                                                                                      \
        s32 i;                                                                                             \
                                                                                                           \
        for (i = 0; i < 5; i++)                                                                            \
        {                                                                                                  \
            if ((enabled_) != 0)                                                                           \
            {                                                                                              \
                (model_)->attachedWpns[i].flags |= 1;                                                     \
            }                                                                                              \
            else                                                                                           \
            {                                                                                              \
                (model_)->attachedWpns[i].flags &= ~1;                                                    \
            }                                                                                              \
        }                                                                                                  \
    } while (false)

#define K_FldShadow_UsesCharRenderGuard(model_)                                                           \
    ((model_)->type == MODEL_TYPE_BTLCHAR &&                                                              \
     ((model_)->id == 2 || (model_)->id == 4 || (model_)->id == 5 ||                                     \
      (model_)->id == 7 || (model_)->id == 8))

#define K_FldShadow_PositionCamera(shadow_, direction_, modelPosition_, useCustom_, fallback_)         \
    do                                                                                                  \
    {                                                                                                   \
        RwFrame* cameraFrame;                                                                           \
        RwMatrixTolerance tolerance;                                                                    \
        RwV2d viewWindow;                                                                               \
        RwV3d translation;                                                                              \
        RwMatrix* ltm;                                                                                  \
        f32 scale;                                                                                      \
        f32 neg;                                                                                      \
                                                                                                        \
        cameraFrame = (RwFrame*)(shadow_)->camera->object.object.parent;                               \
        if ((useCustom_) != 0)                                                                          \
        {                                                                                               \
            cameraFrame->modelling.right = (direction_)->right;                                      \
            cameraFrame->modelling.up = (direction_)->up;                                            \
            cameraFrame->modelling.at = (direction_)->at;                                             \
            RwEngineGetMatrixTolerances(&tolerance);                                                   \
            RwMatrixOptimize(&cameraFrame->modelling, &tolerance);                                     \
            RwMatrixUpdate(&cameraFrame->modelling);                                                   \
        }                                                                                               \
        else                                                                                            \
        {                                                                                               \
            cameraFrame->modelling = *((fallback_)());                                                \
            RwEngineGetMatrixTolerances(&tolerance);                                                   \
            RwMatrixOptimize(&cameraFrame->modelling, &tolerance);                                     \
            RwMatrixUpdate(&cameraFrame->modelling);                                                   \
        }                                                                                               \
                                                                                                        \
        scale = FLDSHADOW_VIEW_SCALE * (shadow_)->projectionDistance;                                 \
        func_004c9db0((shadow_)->camera, 10.0f * scale);                                               \
        func_004c9d70((shadow_)->camera, FLDSHADOW_FAR_SCALE * scale);                                \
                                                                                                        \
        if (func_001a01c0() == 1)                                                                       \
        {                                                                                                \
            viewWindow.x = 2.0f * scale;                                                               \
            viewWindow.y = 2.0f * scale;                                                               \
        }                                                                                                \
        else                                                                                             \
        {                                                                                                \
            viewWindow.x = FLDSHADOW_FAR_SCALE * scale;                                                \
            viewWindow.y = FLDSHADOW_FAR_SCALE * scale;                                                \
        }                                                                                                \
        RwCameraSetViewWindow((shadow_)->camera, &viewWindow);                                          \
                                                                                                         \
        neg = -cameraFrame->modelling.pos.x;                                                            \
        translation.x = (modelPosition_)->x + neg;                                                     \
        neg = -cameraFrame->modelling.pos.y;                                                            \
        translation.y = (modelPosition_)->y + ((shadow_)->projectionDistance / 2.0f) + neg;            \
        neg = -cameraFrame->modelling.pos.z;                                                            \
        translation.z = (modelPosition_)->z + neg;                                                     \
        translation.x += cameraFrame->modelling.at.x * ((shadow_)->camera->farPlane * -0.5f);         \
        translation.y += cameraFrame->modelling.at.y * ((shadow_)->camera->farPlane * -0.5f);         \
        translation.z += cameraFrame->modelling.at.z * ((shadow_)->camera->farPlane * -0.5f);         \
                                                                                                         \
        func_004cb750(cameraFrame, &translation, rwCOMBINEPOSTCONCAT);                                 \
        ltm = RwFrameGetLTM(cameraFrame);                                                               \
        func_004c2fb0(ltm, ltm);                                                                        \
    } while (false)

#define K_FldShadow_DrawMapBands(camera_, drawMiddle_)                                                    \
    do                                                                                                     \
    {                                                                                                      \
        f32 recipZ;                                                                                        \
                                                                                                           \
        RwRenderStateSet(rwRENDERSTATEFOGENABLE, (void*)false);                                           \
        RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*)false);                                         \
        RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)false);                                        \
        RwRenderStateSet(rwRENDERSTATESHADEMODE, (void*)rwSHADEMODEGOURAUD);                              \
        RwRenderStateSet(rwRENDERSTATETEXTURERASTER, NULL);                                               \
        RpSkyRenderStateSet(rpSKYRENDERSTATEALPHA_1, (void*)0x44);                                        \
        RpSkyRenderStateSet(rpSKYRENDERSTATEATEST_1, (void*)0x717fb);                                    \
                                                                                                           \
        recipZ = 1.0f / (camera_)->nearPlane;                                                             \
        K_FldShadow_Draw(0.0f, 0.0f, 128.0f, 48.0f, RwIm2DGetNearScreenZ(), recipZ,                       \
                         &gShadowColors.col1, &gShadowColors.col2);                                      \
                                                                                                           \
        if ((drawMiddle_) != 0)                                                                           \
        {                                                                                                 \
            RpSkyRenderStateSet(rpSKYRENDERSTATEALPHA_1, (void*)0x44);                                    \
            RpSkyRenderStateSet(rpSKYRENDERSTATEATEST_1, (void*)0x3c803);                                \
            K_FldShadow_Draw(0.0f, 48.0f, 128.0f, 76.0f, RwIm2DGetNearScreenZ(), recipZ,                  \
                             &gShadowColors.col2, &gShadowColors.col3);                                  \
        }                                                                                                 \
        K_FldShadow_Draw(0.0f, 76.0f, 128.0f, 128.0f, RwIm2DGetNearScreenZ(), recipZ,                     \
                         &gShadowColors.col3, &gShadowColors.col4);                                      \
                                                                                                           \
        RpSkyRenderStateSet(rpSKYRENDERSTATEALPHA_1, (void*)0x44);                                        \
        RpSkyRenderStateSet(rpSKYRENDERSTATEATEST_1, (void*)0x717fb);                                    \
        RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)rwCULLMODECULLBACK);                               \
    } while (false)

#define K_FldShadow_RenderModelInline(shadow_, direction_, modelPosition_, useCustom_, fallback_, tintModel_, useCharRenderGuard_) \
    do                                                                                                     \
    {                                                                                                      \
        RwRGBA originalColor;                                                                              \
                                                                                                           \
        K_FldShadow_PositionCamera((shadow_), (direction_), (modelPosition_), (useCustom_), (fallback_)); \
        RwCameraClear((shadow_)->camera, FLDSHADOW_CLEAR_COLOR, rwCAMERACLEAR1 | rwCAMERACLEARZ);         \
                                                                                                           \
        if (RwCameraBeginUpdate((shadow_)->camera) == NULL)                                               \
        {                                                                                                  \
            K_Assert("k_shadow.c", (tintModel_) != 0 ? 1903 : 2032);                                    \
            return;                                                                                        \
        }                                                                                                  \
                                                                                                           \
        if ((tintModel_) != 0)                                                                             \
        {                                                                                                  \
            originalColor = *mdlGetColor((shadow_)->model);                                               \
            mdlSetColor((shadow_)->model, &FLDSHADOW_TINT);                                               \
        }                                                                                                  \
                                                                                                           \
        K_FldShadow_SetAttachedShadowEnabled((shadow_)->model, false);                                    \
        FLDSHADOW_RENDER_ACTIVE = true;                                                                    \
        if ((useCharRenderGuard_) != 0 && K_FldShadow_UsesCharRenderGuard((shadow_)->model) != 0)         \
        {                                                                                                  \
            FLDSHADOW_CHAR_RENDER_GUARD = false;                                                          \
        }                                                                                                  \
                                                                                                           \
        (shadow_)->model->flags |= FLDSHADOW_MODEL_FLAGS_SHADOWPASS;                                     \
        func_00317a20((shadow_)->model);                                                                   \
        (shadow_)->model->flags &= ~FLDSHADOW_MODEL_FLAGS_SHADOWPASS;                                    \
                                                                                                           \
        if ((useCharRenderGuard_) != 0)                                                                    \
        {                                                                                                  \
            FLDSHADOW_CHAR_RENDER_GUARD = true;                                                           \
        }                                                                                                  \
        FLDSHADOW_RENDER_ACTIVE = false;                                                                   \
        K_FldShadow_SetAttachedShadowEnabled((shadow_)->model, true);                                     \
                                                                                                           \
        if ((tintModel_) != 0)                                                                             \
        {                                                                                                  \
            mdlSetColor((shadow_)->model, &originalColor);                                                \
        }                                                                                                  \
                                                                                                           \
        K_FldShadow_DrawMapBands((shadow_)->camera, (useCharRenderGuard_));                              \
        if (gFogEnabled == true)                                                                           \
        {                                                                                                  \
            RwRenderStateSet(rwRENDERSTATEFOGENABLE, (void*)false);                                      \
        }                                                                                                  \
        RwCameraEndUpdate((shadow_)->camera);                                                             \
    } while (false)


static inline void K_FldShadow_UpdateModelChar(ResrcModelChar* res)
{
    FldShadowRenderTex* shadow;
    RwV3d modelPosition;
    const RwMatrix* direction;

    if ((res->base.flags & FLDSHADOW_RESOURCE_FLAGS_DRAW) == 0)
    {
        return;
    }

    shadow = (FldShadowRenderTex*)res->renderTexShadowTask->workData;
    if (shadow->mode != 1 || shadow->state <= 0)
    {
        return;
    }

    modelPosition = mdlGetMatrix(res->mdl)->pos;
    if (res->base.flags & FLDSHADOW_RESOURCE_FLAGS_MATRIX)
    {
        direction = (const RwMatrix*)((const u8*)res + 0x150);
    }

    K_FldShadow_RenderModelInline(shadow, direction, &modelPosition,
                                  (res->base.flags & FLDSHADOW_RESOURCE_FLAGS_MATRIX) != 0,
                                  func_001a0a50, true, true);
}

static inline void K_FldShadow_UpdateModelNpc(ResrcModelNpc* res)
{
    FldShadowRenderTex* shadow;
    RwV3d modelPosition;
    const RwMatrix* direction;

    if ((res->base.flags & FLDSHADOW_RESOURCE_FLAGS_DRAW) == 0)
    {
        return;
    }

    shadow = (FldShadowRenderTex*)res->renderTexShadowTask->workData;
    if (shadow->mode != 1 || shadow->state <= 0)
    {
        return;
    }

    modelPosition = mdlGetMatrix(res->mdl)->pos;
    if (res->base.flags & FLDSHADOW_RESOURCE_FLAGS_MATRIX)
    {
        direction = (const RwMatrix*)((const u8*)res + 0x150);
    }

    K_FldShadow_RenderModelInline(shadow, direction, &modelPosition,
                                  (res->base.flags & FLDSHADOW_RESOURCE_FLAGS_MATRIX) != 0,
                                  func_001a0d80, false, false);
}

#undef K_FldShadow_RenderModelInline
#undef K_FldShadow_DrawMapBands
#undef K_FldShadow_PositionCamera
#undef K_FldShadow_UsesCharRenderGuard
#undef K_FldShadow_SetAttachedShadowEnabled
/* W377: opt_dead_assignments off improves K_FldShadow_UpdateShadowMapTask (nd2297 -> nd2260; object 3520/3520). */
#pragma opt_dead_assignments off
// FUN_0019c4b0
#ifndef PC_BUILD
asm void* K_FldShadow_UpdateShadowMapTask(KwlnTask* fldShadowMapTask)
{
  .set noreorder
  .word 0x27bdfec0
  .word 0xffbf0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8c90003c
  .word 0x24040001
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040982d
  .word 0x24040003
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040902d
  .word 0x8e030000
  .word 0x24020002
  .word 0x10620346
  .word 0x00000000
  .word 0x24020001
  .word 0x10620009
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000342
  .word 0x00000000
  .word 0x24620001
  .word 0xae020000
  .word 0x1000033e
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x90550002
  .word 0x0c06615c
  .word 0x00000000
  .word 0xa0400002
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x90560002
  .word 0x0c066160
  .word 0x00000000
  .word 0xa0400002
  .word 0x0c066160
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x90570002
  .word 0x0c066158
  .word 0x00000000
  .word 0xa0400002
  .word 0x0c066158
  .word 0x00000000
  .word 0x100001a4
  .word 0x00000000
  .word 0x8e620028
  .word 0x30420002
  .word 0x1040019f
  .word 0x00000000
  .word 0x8e6201e4
  .word 0x8c44003c
  .word 0x9483000a
  .word 0x24020001
  .word 0x14620199
  .word 0x00000000
  .word 0x8c910044
  .word 0xc4940018
  .word 0x8c820000
  .word 0x18400194
  .word 0x00000000
  .word 0x8e640128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20128
  .word 0xe7a1012c
  .word 0xe7a00130
  .word 0x8e630028
  .word 0x3c028000
  .word 0x00621024
  .word 0x10400021
  .word 0x00000000
  .word 0x26300004
  .word 0x8e340004
  .word 0xc6620150
  .word 0xc6610154
  .word 0xc6600158
  .word 0xe6820010
  .word 0xe6810014
  .word 0xe6800018
  .word 0xc6620160
  .word 0xc6610164
  .word 0xc6600168
  .word 0xe6820020
  .word 0xe6810024
  .word 0xe6800028
  .word 0xc6620170
  .word 0xc6610174
  .word 0xc6600178
  .word 0xe6820030
  .word 0xe6810034
  .word 0xe6800038
  .word 0x27a40108
  .word 0x0c130b30
  .word 0x00000000
  .word 0x26840010
  .word 0x27a50108
  .word 0x0c130b48
  .word 0x00000000
  .word 0x26840010
  .word 0x0c130bc4
  .word 0x00000000
  .word 0x10000021
  .word 0x00000000
  .word 0x0c068294
  .word 0x00000000
  .word 0x26300004
  .word 0x8e340004
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe6820010
  .word 0xe6810014
  .word 0xe6800018
  .word 0xc4420010
  .word 0xc4410014
  .word 0xc4400018
  .word 0xe6820020
  .word 0xe6810024
  .word 0xe6800028
  .word 0xc4420020
  .word 0xc4410024
  .word 0xc4400028
  .word 0xe6820030
  .word 0xe6810034
  .word 0xe6800038
  .word 0x27a400f8
  .word 0x0c130b30
  .word 0x00000000
  .word 0x26840010
  .word 0x27a500f8
  .word 0x0c130b48
  .word 0x00000000
  .word 0x26840010
  .word 0x0c130bc4
  .word 0x00000000
  .word 0xc78080c0
  .word 0x46140542
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46150302
  .word 0x0220202d
  .word 0x0c13276c
  .word 0x00000000
  .word 0xc7808234
  .word 0x46150302
  .word 0x0220202d
  .word 0x0c13275c
  .word 0x00000000
  .word 0x0c068070
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000b
  .word 0x00000000
  .word 0xc78080c0
  .word 0x46140042
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0xe7a000f0
  .word 0xe7a000f4
  .word 0x10000007
  .word 0x00000000
  .word 0xc78080c0
  .word 0x46140042
  .word 0xc7808460
  .word 0x46010002
  .word 0xe7a000f0
  .word 0xe7a000f4
  .word 0x0220202d
  .word 0x27a500f0
  .word 0x0c1327e4
  .word 0x00000000
  .word 0xc7a1012c
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a003
  .word 0x46000900
  .word 0xe7a4012c
  .word 0x8e100000
  .word 0xc6000040
  .word 0x460000c7
  .word 0xe7a300e0
  .word 0xc6000044
  .word 0x46000087
  .word 0xe7a200e4
  .word 0xc6000048
  .word 0x46000047
  .word 0xe7a100e8
  .word 0xc7a00128
  .word 0x46001980
  .word 0xe7a600e0
  .word 0x46041140
  .word 0xe7a500e4
  .word 0xc7a00130
  .word 0x46000900
  .word 0xe7a400e8
  .word 0xc6030030
  .word 0x3c02bf00
  .word 0x44820800
  .word 0xc6200084
  .word 0x46000882
  .word 0x44800800
  .word 0x00000000
  .word 0x46060818
  .word 0x4602181c
  .word 0xe7a000e0
  .word 0xc6000034
  .word 0x46050818
  .word 0x4602001c
  .word 0xe7a000e4
  .word 0xc6000038
  .word 0x46040818
  .word 0x4602001c
  .word 0xe7a000e8
  .word 0x0200202d
  .word 0x27a500e0
  .word 0x24060002
  .word 0x0c132dd4
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x0040282d
  .word 0x0c130bec
  .word 0x00000000
  .word 0x0220202d
  .word 0x2785b448
  .word 0x24060003
  .word 0x0c1327a4
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x104000d9
  .word 0x00000000
  .word 0x8e640128
  .word 0x0c0c62c0
  .word 0x00000000
  .word 0x90450000
  .word 0x90440001
  .word 0x90430002
  .word 0x90420003
  .word 0xa3a5013c
  .word 0xa3a4013d
  .word 0xa3a3013e
  .word 0xa3a2013f
  .word 0x27a50138
  .word 0xc7809454
  .word 0xe7a00138
  .word 0x8e640128
  .word 0x0c0c62b4
  .word 0x00000000
  .word 0x0000202d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00041040
  .word 0x00441021
  .word 0x00021880
  .word 0x8e620128
  .word 0x00431821
  .word 0x906203b4
  .word 0x304200fe
  .word 0xa06203b4
  .word 0x24840001
  .word 0x28820005
  .word 0x1440fff5
  .word 0x00000000
  .word 0x24040001
  .word 0xaf84b468
  .word 0x8e630128
  .word 0x946200d4
  .word 0x14440014
  .word 0x00000000
  .word 0x946300d6
  .word 0x24020002
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020004
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020005
  .word 0x10620009
  .word 0x00000000
  .word 0x24020007
  .word 0x10620006
  .word 0x00000000
  .word 0x10620004
  .word 0x00000000
  .word 0x24020008
  .word 0x14620002
  .word 0x00000000
  .word 0xaf8094fc
  .word 0x8e630128
  .word 0x946200d8
  .word 0x34420004
  .word 0xa46200d8
  .word 0x8e640128
  .word 0x0c0c5e88
  .word 0x00000000
  .word 0x8e630128
  .word 0x946200d8
  .word 0x3042fffb
  .word 0xa46200d8
  .word 0x24020001
  .word 0xaf8294fc
  .word 0xaf80b468
  .word 0x0000202d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00041040
  .word 0x00441021
  .word 0x00021880
  .word 0x8e620128
  .word 0x00431821
  .word 0x906203b4
  .word 0x34420001
  .word 0xa06203b4
  .word 0x24840001
  .word 0x28820005
  .word 0x1440fff5
  .word 0x00000000
  .word 0x8e640128
  .word 0x27a5013c
  .word 0x0c0c62b4
  .word 0x00000000
  .word 0x3c140096
  .word 0x26940090
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100088
  .word 0x44806000
  .word 0x3c024300
  .word 0x44827000
  .word 0x3c024240
  .word 0x44827800
  .word 0x3c023f80
  .word 0x44820800
  .word 0xc6200080
  .word 0x46000c43
  .word 0x46006346
  .word 0x3c040068
  .word 0x24848960
  .word 0x3c050068
  .word 0x24a58964
  .word 0xc6100000
  .word 0x0c0665f8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020003
  .word 0x3445c803
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x44806000
  .word 0x3c024240
  .word 0x44826800
  .word 0x3c024300
  .word 0x44827000
  .word 0x3c024298
  .word 0x44827800
  .word 0x3c023f80
  .word 0x44820800
  .word 0xc6200080
  .word 0x46000c43
  .word 0x3c040068
  .word 0x24848964
  .word 0x3c050068
  .word 0x24a58968
  .word 0xc6100000
  .word 0x0c0665f8
  .word 0x00000000
  .word 0x44806000
  .word 0x3c024298
  .word 0x44826800
  .word 0x3c024300
  .word 0x44827000
  .word 0x3c023f80
  .word 0x44820800
  .word 0xc6200080
  .word 0x46000c43
  .word 0x460073c6
  .word 0x3c040068
  .word 0x24848968
  .word 0x3c050068
  .word 0x24a5896c
  .word 0xc6100000
  .word 0x0c0665f8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040014
  .word 0x24050002
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8f82b3e4
  .word 0x24050001
  .word 0x14450005
  .word 0x00000000
  .word 0x2404000e
  .word 0x8e820000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848948
  .word 0x2405076f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e7300f8
  .word 0x1660fe5c
  .word 0x00000000
  .word 0x10000164
  .word 0x00000000
  .word 0x8e420028
  .word 0x30420002
  .word 0x1040015f
  .word 0x00000000
  .word 0x8e4201f0
  .word 0x8c44003c
  .word 0x9483000a
  .word 0x24020001
  .word 0x14620159
  .word 0x00000000
  .word 0x8c910044
  .word 0xc4940018
  .word 0x8c820000
  .word 0x18400154
  .word 0x00000000
  .word 0x8e440128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20118
  .word 0xe7a1011c
  .word 0xe7a00120
  .word 0x8e430028
  .word 0x3c028000
  .word 0x00621024
  .word 0x10400021
  .word 0x00000000
  .word 0x26300004
  .word 0x8e330004
  .word 0xc6420150
  .word 0xc6410154
  .word 0xc6400158
  .word 0xe6620010
  .word 0xe6610014
  .word 0xe6600018
  .word 0xc6420160
  .word 0xc6410164
  .word 0xc6400168
  .word 0xe6620020
  .word 0xe6610024
  .word 0xe6600028
  .word 0xc6420170
  .word 0xc6410174
  .word 0xc6400178
  .word 0xe6620030
  .word 0xe6610034
  .word 0xe6600038
  .word 0x27a400d0
  .word 0x0c130b30
  .word 0x00000000
  .word 0x26640010
  .word 0x27a500d0
  .word 0x0c130b48
  .word 0x00000000
  .word 0x26640010
  .word 0x0c130bc4
  .word 0x00000000
  .word 0x10000021
  .word 0x00000000
  .word 0x0c068360
  .word 0x00000000
  .word 0x26300004
  .word 0x8e330004
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe6620010
  .word 0xe6610014
  .word 0xe6600018
  .word 0xc4420010
  .word 0xc4410014
  .word 0xc4400018
  .word 0xe6620020
  .word 0xe6610024
  .word 0xe6600028
  .word 0xc4420020
  .word 0xc4410024
  .word 0xc4400028
  .word 0xe6620030
  .word 0xe6610034
  .word 0xe6600038
  .word 0x27a400c0
  .word 0x0c130b30
  .word 0x00000000
  .word 0x26640010
  .word 0x27a500c0
  .word 0x0c130b48
  .word 0x00000000
  .word 0x26640010
  .word 0x0c130bc4
  .word 0x00000000
  .word 0xc78080c0
  .word 0x46140542
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46150302
  .word 0x0220202d
  .word 0x0c13276c
  .word 0x00000000
  .word 0xc7808234
  .word 0x46150302
  .word 0x0220202d
  .word 0x0c13275c
  .word 0x00000000
  .word 0x0c068070
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000b
  .word 0x00000000
  .word 0xc78080c0
  .word 0x46140042
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0xe7a000b8
  .word 0xe7a000bc
  .word 0x10000007
  .word 0x00000000
  .word 0xc78080c0
  .word 0x46140042
  .word 0xc7808460
  .word 0x46010002
  .word 0xe7a000b8
  .word 0xe7a000bc
  .word 0x0220202d
  .word 0x27a500b8
  .word 0x0c1327e4
  .word 0x00000000
  .word 0xc7a1011c
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a003
  .word 0x46000900
  .word 0xe7a4011c
  .word 0x8e100000
  .word 0xc6000040
  .word 0x460000c7
  .word 0xe7a300a8
  .word 0xc6000044
  .word 0x46000087
  .word 0xe7a200ac
  .word 0xc6000048
  .word 0x46000047
  .word 0xe7a100b0
  .word 0xc7a00118
  .word 0x46001980
  .word 0xe7a600a8
  .word 0x46041140
  .word 0xe7a500ac
  .word 0xc7a00120
  .word 0x46000900
  .word 0xe7a400b0
  .word 0xc6030030
  .word 0x3c02bf00
  .word 0x44820800
  .word 0xc6200084
  .word 0x46000882
  .word 0x44800800
  .word 0x00000000
  .word 0x46060818
  .word 0x4602181c
  .word 0xe7a000a8
  .word 0xc6000034
  .word 0x46050818
  .word 0x4602001c
  .word 0xe7a000ac
  .word 0xc6000038
  .word 0x46040818
  .word 0x4602001c
  .word 0xe7a000b0
  .word 0x0200202d
  .word 0x27a500a8
  .word 0x24060002
  .word 0x0c132dd4
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x0040282d
  .word 0x0c130bec
  .word 0x00000000
  .word 0x0220202d
  .word 0x2785b448
  .word 0x24060003
  .word 0x0c1327a4
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x10400099
  .word 0x00000000
  .word 0x0000202d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00041040
  .word 0x00441021
  .word 0x00021880
  .word 0x8e420128
  .word 0x00431821
  .word 0x906203b4
  .word 0x304200fe
  .word 0xa06203b4
  .word 0x24840001
  .word 0x28820005
  .word 0x1440fff5
  .word 0x00000000
  .word 0x24020001
  .word 0xaf82b468
  .word 0x8e430128
  .word 0x946200d8
  .word 0x34420004
  .word 0xa46200d8
  .word 0x8e440128
  .word 0x0c0c5e88
  .word 0x00000000
  .word 0x8e430128
  .word 0x946200d8
  .word 0x3042fffb
  .word 0xa46200d8
  .word 0xaf80b468
  .word 0x0000202d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00041040
  .word 0x00441021
  .word 0x00021880
  .word 0x8e420128
  .word 0x00431821
  .word 0x906203b4
  .word 0x34420001
  .word 0xa06203b4
  .word 0x24840001
  .word 0x28820005
  .word 0x1440fff5
  .word 0x00000000
  .word 0x3c130096
  .word 0x26730090
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100088
  .word 0x44806000
  .word 0x3c024300
  .word 0x44827000
  .word 0x3c024240
  .word 0x44827800
  .word 0x3c023f80
  .word 0x44820800
  .word 0xc6200080
  .word 0x46000c43
  .word 0x46006346
  .word 0x3c040068
  .word 0x24848960
  .word 0x3c050068
  .word 0x24a58964
  .word 0xc6100000
  .word 0x0c0665f8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020003
  .word 0x3445c803
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x44806000
  .word 0x3c024240
  .word 0x44826800
  .word 0x3c024300
  .word 0x44827000
  .word 0x3c023f80
  .word 0x44820800
  .word 0xc6200080
  .word 0x46000c43
  .word 0x460073c6
  .word 0x3c040068
  .word 0x24848964
  .word 0x3c050068
  .word 0x24a58968
  .word 0xc6100000
  .word 0x0c0665f8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040014
  .word 0x24050002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8f82b3e4
  .word 0x24050001
  .word 0x14450005
  .word 0x00000000
  .word 0x2404000e
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848948
  .word 0x240507f0
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e5200f8
  .word 0x1640fe9c
  .word 0x00000000
  .word 0x32b000ff
  .word 0x0c06615c
  .word 0x00000000
  .word 0xa0500002
  .word 0x0c06615c
  .word 0x00000000
  .word 0x32d000ff
  .word 0x0c066160
  .word 0x00000000
  .word 0xa0500002
  .word 0x0c066160
  .word 0x00000000
  .word 0x32f000ff
  .word 0x0c066158
  .word 0x00000000
  .word 0xa0500002
  .word 0x0c066158
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0090
  .word 0x7bb70080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0140
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_dead_assignments reset

// FUN_0019d270
void K_FldShadow_DestroyShadowMapTask(KwlnTask* fldShadowMapTask)
{
    RwFree(fldShadowMapTask->workData);
}

// FUN_0019d2a0
KwlnTask* K_FldShadow_CreateShadowMapTask(KwlnTask* fldSceneDrawTask)
{
    FldShadowMap* fldShadowMap;

    fldShadowMap = (FldShadowMap*)RwCalloc(1, sizeof(FldShadowMap), rwMEMHINTDUR_GLOBAL);
    if (fldShadowMap == NULL)
    {
        return NULL;
    }

    return kwlnTaskCreate(fldSceneDrawTask, "shadow map camera", 2068, K_FldShadow_UpdateShadowMapTask, K_FldShadow_DestroyShadowMapTask, fldShadowMap);
}

// FUN_0019d320
s32 FUN_0019d320()
{
    volatile u64* intcStat;

    intcStat = (volatile u64*)0x12001000;
    if (((*intcStat >> 13) & 1) == 0)
    {
        __asm__ volatile (
            ".set noreorder\n"
            "sync\n"
            "ei\n"
            ".set reorder"
            :
            :
            : "memory"
        );
        return -1;
    }

    __asm__ volatile (
        ".set noreorder\n"
        "sync\n"
        "ei\n"
        ".set reorder"
        :
        :
        : "memory"
    );
    return 0;
}

// FUN_0019d360
s32 func_0019d360()
{
    s32 handle;

    handle = AddIntcHandler(2, (s32 (*)(s32))FUN_0019d320, 0);
    DAT_007cc148 = handle;
    if (handle == -1)
    {
        return 0;
    }

    handle = EnableIntc(2);
    DAT_007ce13c = handle;
    if (handle == -1)
    {
        RemoveIntcHandler(2, DAT_007cc148);
        DAT_007cc148 = -1;
        return 0;
    }

    return 1;
}