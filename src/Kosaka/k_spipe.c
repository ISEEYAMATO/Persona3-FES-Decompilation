#include "Kosaka/k_spipe.h"
#include "Kosaka/k_assert.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Kernel/Kwln/kwln.h"
#include "Main/g_data.h"
#include "rw/rwcore.h"
#include "temporary.h"




extern u32 FUN_00195750(void);
extern void FUN_001a8910(u32 param);
extern u32 gUnk_008668f0[];



#include "Kosaka/Field/k_shadow.h"
#include "Graphics/Model/mdlManager.h"
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
#define FLDSHADOW_CLEAR_COLOR ((RwRGBA*)0x007ce138)
#define FLDSHADOW_TINT (*(const RwRGBA*)0x007cc144)
#define FLDSHADOW_RENDER_ACTIVE (*(u32*)0x007ce158)
#define FLDSHADOW_CHAR_RENDER_GUARD (*(u32*)0x007cc1ec)
#define FLDSHADOW_CAMERA_OFFSET ((const RwV3d*)0x00678920)
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
extern void (*D_00960090_abs[])(u32 state, u32 value);
extern u32 D_00960184[];
extern u8 D_00960184_abs[];
extern s32 DAT_007cc148;
extern RwRGBA DAT_007cc140;
#pragma alias DAT_007cc140_abs DAT_007cc140
extern u8 DAT_007cc140_abs[];
extern s32 DAT_007ce13c;
extern void* func_004ce0f0(s32 width, s32 height, s32 depth, s32 flags);
extern u32 jtbl_0096017C_abs[];
extern void* memset(void* dest, u8 value, u32 size);
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
extern void* K_Field_Get_A(void);
extern void* K_Field_Get_B(void);
extern void* K_Field_Get_C(void);
extern void* K_Field_Get_D(void);
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
u32 K_FldShadow_Draw(f32 xLeft, f32 yTop,
                     f32 xRight, f32 yBot,
                     f32 zBufferNear, f32 recipZ,
                     const RwRGBA* topColor, const RwRGBA* botColor);
void* func_00199d90(void* ignored1,
                    void* ignored2,
                    const FldShadowTriangle* triangle,
                    FldShadowProjectionWork* work);
KwlnTask* K_SPipe_CreateShadowNodeTask(KwlnTask* draw3DTask);
typedef struct
{
    RwRGBA col1;
    RwRGBA col2;
    RwRGBA col3;
    RwRGBA col4;
} ShadowColors;
static ShadowColors gShadowColors =
{
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 255},
    {0, 0, 0, 255}
};
#define FLDSHADOW_RING_COLOR ((const RwRGBA*)DAT_007cc140_abs)
extern f32 fGpffff8214;
#define FLDSHADOW_RING_ANGLE_STEP fGpffff8214
extern void* func_004916d0(void* list, void* callback, void* context);
typedef struct FldShadowRingWork
{
    f32 radius;       // 0x00
    void* renderObject; // 0x04
    void* colorData;   // 0x08
} FldShadowRingWork;
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
        translation.x = (modelPosition_)->x - cameraFrame->modelling.pos.x;                            \
        translation.y = (modelPosition_)->y + ((shadow_)->projectionDistance / 2.0f) -                \
                        cameraFrame->modelling.pos.y;                                                  \
        translation.z = (modelPosition_)->z - cameraFrame->modelling.pos.z;                           \
        translation.x += cameraFrame->modelling.at.x * ((shadow_)->camera->farPlane * -0.5f);         \
        translation.y += cameraFrame->modelling.at.y * ((shadow_)->camera->farPlane * -0.5f);         \
        translation.z += cameraFrame->modelling.at.z * ((shadow_)->camera->farPlane * -0.5f);         \
                                                                                                         \
        func_004cb750(cameraFrame, &translation, rwCOMBINEPOSTCONCAT);                                 \
        ltm = RwFrameGetLTM(cameraFrame);                                                               \
        func_004c2fb0(ltm, ltm);                                                                        \
    } while (false)
#define K_FldShadow_DrawMapBands(camera_)                                                                 \
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
        RpSkyRenderStateSet(rpSKYRENDERSTATEALPHA_1, (void*)0x44);                                        \
        RpSkyRenderStateSet(rpSKYRENDERSTATEATEST_1, (void*)0x3c803);                                    \
        K_FldShadow_Draw(0.0f, 48.0f, 128.0f, 76.0f, RwIm2DGetNearScreenZ(), recipZ,                      \
                         &gShadowColors.col2, &gShadowColors.col3);                                      \
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
        K_FldShadow_DrawMapBands((shadow_)->camera);                                                      \
        if (gFogEnabled == true)                                                                           \
        {                                                                                                  \
            RwRenderStateSet(rwRENDERSTATEFOGENABLE, (void*)false);                                      \
        }                                                                                                  \
        RwCameraEndUpdate((shadow_)->camera);                                                             \
    } while (false)
extern void kwlnRootDestroy3DDrawTask(KwlnTask* draw3DTask);
KwlnTask* kwlnRootCreate2DDrawBeginTask();
KwlnTask* kwlnRootCreate2DDrawBeginPreEndTask();
KwlnTask* kwlnRootCreate2DDrawEndTask();
KwlnTask* kwlnRootCreate3DOn2DZClearTask();
KwlnTask* kwlnRootCreate3DOn2DDrawBeginTask();
KwlnTask* kwlnRootCreate3DOn2DDrawEndTask();
KwlnTask* kwlnRootCreateEtcDrawTask();
void H_Pad_Update();
u32 H_Snd_FUN_00109df0(s32 param);
KwlnTask* kwlnRootCreate3DDrawTask(KwlnTask* rootTask);
KwlnTask* kwlnRootCreateDrawBustupTask();
KwlnTask* kwlnRootCreateEtcDrawBeginTask();
KwlnTask* kwlnRootCreateEtcDrawEndTask();
KwlnTask* kwlnRootCreateShowRasterTask();
KwlnTask* func_00192de0();
void kwlnInitGameData();
extern u32 DAT_007ce12c;
extern u32 DAT_007ce114;
void func_001120c0();
void func_001125d0();
extern RwGlobals DAT_00960070;
extern u32 jtbl_00960178[];
#define KWLN_ALLOC2(size, flags) (*(void* (**)(u32, u32))jtbl_00960178)((size), (flags))
#define KWLN_FREE(memory) (*(void (**)(void*))jtbl_0096017C)(memory)
#define KWLN_ALLOC3(count, size, flags) (*(void* (**)(u32, u32, u32))D_00960184)((count), (size), (flags))
void* func_004c9ed0(RwCamera* camera, u32 param_2, u32 param_3);
int func_004c4d20(void);
void* func_004ce200(RwRaster* raster, u32 param2, s32 param3);
void* func_004cbf20(void* image);
void* func_004cdc70(void* image, RwRaster* raster);
void* func_004cde00(RwRaster* raster);
void func_004c7cf0(s32 value);
void func_0010bff0(void);
void func_0010c5f0(void);
void func_005810f0(void);
extern f32 D_007CE150;
extern f32 D_007CE14C;
extern f32 D_007CE148;
extern KwlnTask* D_007CE134;
extern u32 D_007CE130;
extern u32 D_007CE11C;
extern u32 D_007CE118;
extern u32 D_007CE110;
extern void* D_007CE104;
extern u32 D_007CE100;
extern u32 D_007CE0F8;
extern const char D_006787C8[]; // "rootProc"
extern const char D_006787D8[]; // "kwlnRoot.c"
extern const char D_006787E8[]; // "2D Draw Begin"
extern const char D_00678800[]; // "2D Draw Begin Pre End"
extern const char D_00678810[]; // "2D Draw End"
extern const char D_00678820[]; // "3D on 2D Zclear"
extern const char D_00678830[]; // "3D on 2D Draw Begin"
extern const char D_00678850[]; // "3D on 2D Draw End"
extern const char D_00678868[]; // "etc Draw Begin"
extern const char D_00678878[]; // "etc Draw"
extern const char D_00678888[]; // "etc Draw End"
extern const char D_006788A0[]; // "<<< show raster >>>"
extern const char D_006788B8[]; // "drawBustupProc"
extern const char D_006788C8[]; // "k_spipe.c"
#define sShowRasterPercent D_007CE150
#define sShowRasterDelta D_007CE14C
#define sShowRasterCurrent D_007CE148
#define sDraw3DTask D_007CE134
#define sShowRasterEnabled D_007CE130
#define sShowRasterRasterB D_007CE11C
#define sShowRasterRasterA D_007CE118
#define sShowRasterResult D_007CE110
#define sShowRasterImage D_007CE104
#define sShowRasterCurrentCount D_007CE100
#define sShowRasterUpdatePending D_007CE0F8
void H_Snd_StopBgm();
void func_003b5ab0();
typedef struct KwlnDraw3DWork
{
    u32 rasterA;
    u32 rasterB;
} KwlnDraw3DWork;

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
    const RwV3d* outputVertices,
    RwV3d* outputCopies)
{
    RwIm3DVertex* output;
    s32 vertexCount;
    u8 alpha;

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

// FUN_00199440
KwlnTask* kwlnRootCreate3DDrawTask(KwlnTask* rootTask)
{
    KwlnDraw3DWork* work;

    if (sDraw3DTask != NULL)
    {
        K_Assert(D_006788C8, 0x76);
    }

    work = (KwlnDraw3DWork*)KWLN_ALLOC3(1, sizeof(KwlnDraw3DWork), 0x40000);
    if (work == NULL)
    {
        return NULL;
    }

    sDraw3DTask = kwlnTaskCreate(rootTask, "3D Draw", 5, NULL, kwlnRootDestroy3DDrawTask, work);
    work->rasterA = sShowRasterRasterB;
    work->rasterB = sShowRasterRasterA;
    K_SPipe_CreateShadowNodeTask(sDraw3DTask);
    K_SPipe_Create3DDrwBeginTask(sDraw3DTask);
    K_SPipe_Create3DDrwEndTask(sDraw3DTask);

    return sDraw3DTask;
}

// FUN_00199520
void* K_SPipe_Update3DDrwBeginTask(KwlnTask* draw3DBeginTask)
{
    RwRenderStateSetFunc* setRenderState;

    if (kwlnCameraBeginUpdate() != NULL)
    {
        kwlnSetFlags(KWLN_FLAG_ERR | KWLN_FLAG_3DDRAW, false);
        kwlnSetFlags(KWLN_FLAG_3DDRAW, true);
        setRenderState = &rwGlobals.device.setRenderState;
        (*setRenderState)(rwRENDERSTATEZTESTENABLE, (void*)true);
        (*setRenderState)(rwRENDERSTATEZWRITEENABLE, (void*)true);
        FUN_00195750();
    }
    else
    {
        K_Assert("k_spipe.c", 385);
        kwlnSetFlags(KWLN_FLAG_ERR, true);
    }

    return KWLNTASK_CONTINUE;
}

// FUN_001995f0
void* K_SPipe_Update3DDrwEndTask(KwlnTask* draw3DEndTask)
{
    RwRenderStateSetFunc* setRenderState;

    setRenderState = &rwGlobals.device.setRenderState;
    (*setRenderState)(rwRENDERSTATEFOGENABLE, (void*)false);
    (*setRenderState)(rwRENDERSTATEFOGENABLE, (void*)true);
    (*setRenderState)(rwRENDERSTATEFOGCOLOR, (void*)PACK_RWRGBA(gFogRed, gFogGreen, gFogBlue, gFogAlpha));
    (*setRenderState)(rwRENDERSTATEFOGTYPE, (void*)rwFOGTYPELINEAR);

    kwlnCameraEndUpdate();

    kwlnSetFlags(KWLN_FLAG_2DDRAW | KWLN_FLAG_3DDRAW, false);

    return KWLNTASK_CONTINUE;
}

// FUN_001996c0
KwlnTask* K_SPipe_Create3DDrwBeginTask(KwlnTask* draw3DTask)
{
    return kwlnTaskCreate(draw3DTask, "3D Draw Begin", 2098, K_SPipe_Update3DDrwBeginTask, NULL, NULL);
}

// FUN_00199700
KwlnTask* K_SPipe_Create3DDrwEndTask(KwlnTask* draw3DTask)
{
    return kwlnTaskCreate(draw3DTask, "3D Draw End", 4167, K_SPipe_Update3DDrwEndTask, NULL, NULL);
}

// FUN_00199740
void* K_SPipe_UpdateShadowNodeTask(KwlnTask* shadowNodeTask)
{
    RwCameraClear(kwlnGetMainCamera(), kwlnGetClearColor(), rwCAMERACLEAR1 | rwCAMERACLEARZ);
    FUN_001a8910((u32)gUnk_008668f0);

    return KWLNTASK_CONTINUE;
}









#pragma alias func_004cb930_one func_004cb930
#pragma alias D_00960090_abs D_00960090
#pragma alias D_00960184_abs D_00960184
#pragma alias jtbl_0096017C_abs jtbl_0096017C

#pragma alias K_Field_Get_A K_Field_Get
#pragma alias K_Field_Get_B K_Field_Get
#pragma alias K_Field_Get_C K_Field_Get
#pragma alias K_Field_Get_D K_Field_Get
#pragma alias K_Field_Get_E K_Field_Get








// FUN_001997a0
KwlnTask* K_SPipe_CreateShadowNodeTask(KwlnTask* draw3DTask)
{
    return kwlnTaskCreate(draw3DTask, "shadow node(camera all clear)", 2069, K_SPipe_UpdateShadowNodeTask, NULL, NULL);
}

// FUN_001997e0
u32 K_FldShadow_Draw(f32 xLeft, f32 yTop,
                     f32 xRight, f32 yBot,
                     f32 zBufferNear, f32 recipZ,
                     const RwRGBA* topColor, const RwRGBA* botColor)
{
    RwIm2DVertex vertices[4];

    vertices[0].u.els.scrVertex.x = xLeft;
    vertices[0].u.els.scrVertex.y = yTop;
    vertices[0].u.els.scrVertex.z = zBufferNear;
    vertices[0].u.els.color.r = topColor->r;
    vertices[0].u.els.color.g = topColor->g;
    vertices[0].u.els.color.b = topColor->b;
    vertices[0].u.els.color.a = topColor->a;
    vertices[0].u.els.recipZ = recipZ;

    vertices[1].u.els.scrVertex.x = xLeft;
    vertices[1].u.els.scrVertex.y = yBot;
    vertices[1].u.els.scrVertex.z = zBufferNear;
    vertices[1].u.els.color.r = botColor->r;
    vertices[1].u.els.color.g = botColor->g;
    vertices[1].u.els.color.b = botColor->b;
    vertices[1].u.els.color.a = botColor->a;
    vertices[1].u.els.recipZ = recipZ;

    vertices[2].u.els.scrVertex.x = xRight;
    vertices[2].u.els.scrVertex.y = yTop;
    vertices[2].u.els.scrVertex.z = zBufferNear;
    vertices[2].u.els.color.r = topColor->r;
    vertices[2].u.els.color.g = topColor->g;
    vertices[2].u.els.color.b = topColor->b;
    vertices[2].u.els.color.a = topColor->a;
    vertices[2].u.els.recipZ = recipZ;

    vertices[3].u.els.scrVertex.x = xRight;
    vertices[3].u.els.scrVertex.y = yBot;
    vertices[3].u.els.scrVertex.z = zBufferNear;
    vertices[3].u.els.color.r = botColor->r;
    vertices[3].u.els.color.g = botColor->g;
    vertices[3].u.els.color.b = botColor->b;
    vertices[3].u.els.color.a = botColor->a;
    vertices[3].u.els.recipZ = recipZ;

    RwIm2DRenderPrimitive(rwPRIMTYPETRISTRIP, vertices, 4);

    return true;
}

// FUN_00199c60
void func_00199c60(RwCamera* camera)
{
    RwFrame* frame;
    RwRaster* zBuffer;

    if (camera == NULL)
    {
        return;
    }

    frame = (RwFrame*)camera->object.object.parent;
    if (frame != NULL)
    {
        func_004d1840(camera, NULL);
        func_004caf80(frame);
    }

    zBuffer = camera->zBuffer;
    if (zBuffer != NULL)
    {
        camera->zBuffer = NULL;
        func_004cde90(zBuffer);
    }

    if (camera->frameBuffer != NULL)
    {
        camera->frameBuffer = NULL;
    }
    func_004ca030(camera);
}

/* W377: stacking opt_loop_invariants on and opt_propagation off improves func_0019a420 (nd1122 -> nd1083; object 1748/1808). */
// FUN_00199cf0
void* func_00199cf0(void* atomic, FldShadowBoundsAccum* accum)
{
    const RwSphere* sphere;

    sphere = func_004912b0(atomic);
    if (sphere->radius > accum->radius)
    {
        sphere = func_004912b0(atomic);
        accum->center = sphere->center;
        accum->largestAtomic = atomic;
    }
    sphere = func_004912b0(atomic);
    accum->radius += sphere->radius;
    accum->count++;
    return atomic;
}

// FUN_00199d90
asm void* func_00199d90(void* ignored1,
                    void* ignored2,
                    const FldShadowTriangle* triangle,
                    FldShadowProjectionWork* work)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00c0902d
  .word 0x00e0882d
  .word 0x26305470
  .word 0xc4c50008
  .word 0xc4e45478
  .word 0xc4c30000
  .word 0xc4e25470
  .word 0xc4c10004
  .word 0xc4e05474
  .word 0x4600081a
  .word 0x44800800
  .word 0x4602181e
  .word 0x4604281c
  .word 0x46010036
  .word 0x45010004
  .word 0x00000000
  .word 0x0240102d
  .word 0x10000183
  .word 0x00000000
  .word 0x8e42001c
  .word 0x27a50070
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a20070
  .word 0xe7a10074
  .word 0xe7a00078
  .word 0x8e420020
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a2007c
  .word 0xe7a10080
  .word 0xe7a00084
  .word 0x8e420024
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a20088
  .word 0xe7a1008c
  .word 0xe7a00090
  .word 0x27a40040
  .word 0x24060003
  .word 0x26070010
  .word 0x0c131b08
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820800
  .word 0xc6400000
  .word 0x460008c2
  .word 0xc6400004
  .word 0x46000882
  .word 0xc6400008
  .word 0x46000842
  .word 0xc7a00070
  .word 0x46030000
  .word 0xe7a00070
  .word 0xc7a00074
  .word 0x46020000
  .word 0xe7a00074
  .word 0xc7a00078
  .word 0x46010000
  .word 0xe7a00078
  .word 0xc7a0007c
  .word 0x46030000
  .word 0xe7a0007c
  .word 0xc7a00080
  .word 0x46020000
  .word 0xe7a00080
  .word 0xc7a00084
  .word 0x46010000
  .word 0xe7a00084
  .word 0xc7a00088
  .word 0x46030000
  .word 0xe7a00088
  .word 0xc7a0008c
  .word 0x46020000
  .word 0xe7a0008c
  .word 0xc7a00090
  .word 0x46010000
  .word 0xe7a00090
  .word 0xc7a00048
  .word 0x44800800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000009
  .word 0x00000000
  .word 0xc7a00054
  .word 0x46010034
  .word 0x45000005
  .word 0x00000000
  .word 0xc7a00060
  .word 0x46010034
  .word 0x45010039
  .word 0x00000000
  .word 0xc7a20040
  .word 0x44800800
  .word 0x00000000
  .word 0x46011034
  .word 0x45000009
  .word 0x00000000
  .word 0xc7a0004c
  .word 0x46010034
  .word 0x45000005
  .word 0x00000000
  .word 0xc7a00058
  .word 0x46010034
  .word 0x4501002b
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x00000000
  .word 0x46011036
  .word 0x45010009
  .word 0x00000000
  .word 0xc7a0004c
  .word 0x46010036
  .word 0x45010005
  .word 0x00000000
  .word 0xc7a00058
  .word 0x46010036
  .word 0x4500001d
  .word 0x00000000
  .word 0xc7a20044
  .word 0x44800800
  .word 0x00000000
  .word 0x46011034
  .word 0x45000009
  .word 0x00000000
  .word 0xc7a00050
  .word 0x46010034
  .word 0x45000005
  .word 0x00000000
  .word 0xc7a0005c
  .word 0x46010034
  .word 0x4501000f
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x00000000
  .word 0x46011036
  .word 0x4501000c
  .word 0x00000000
  .word 0xc7a00050
  .word 0x46010036
  .word 0x45010008
  .word 0x00000000
  .word 0xc7a0005c
  .word 0x46010036
  .word 0x45010004
  .word 0x00000000
  .word 0x0240102d
  .word 0x100000fc
  .word 0x00000000
  .word 0x8e255460
  .word 0x2ca10256
  .word 0x14200011
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000302d
  .word 0x24070019
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x24040003
  .word 0x0c13c854
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x8e020058
  .word 0x24420001
  .word 0xae020058
  .word 0xae205460
  .word 0x8e235460
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021080
  .word 0x02221021
  .word 0xc7a00070
  .word 0xe7a000c0
  .word 0xc7a00074
  .word 0xe7a000c4
  .word 0xc7a00078
  .word 0xe7a000c8
  .word 0xc7a200c0
  .word 0xc7a100c4
  .word 0xc7a000c8
  .word 0xe4420000
  .word 0xe4410004
  .word 0xe4400008
  .word 0xc7a0007c
  .word 0xe7a000b0
  .word 0xc7a00080
  .word 0xe7a000b4
  .word 0xc7a00084
  .word 0xe7a000b8
  .word 0xc7a200b0
  .word 0xc7a100b4
  .word 0xc7a000b8
  .word 0xe4420024
  .word 0xe4410028
  .word 0xe440002c
  .word 0xc7a00088
  .word 0xe7a000a0
  .word 0xc7a0008c
  .word 0xe7a000a4
  .word 0xc7a00090
  .word 0xe7a000a8
  .word 0xc7a200a0
  .word 0xc7a100a4
  .word 0xc7a000a8
  .word 0xe4420048
  .word 0xe441004c
  .word 0xe4400050
  .word 0xc7a00040
  .word 0xe440001c
  .word 0xc7a0004c
  .word 0xe4400040
  .word 0xc7a00058
  .word 0xe4400064
  .word 0xc7a00044
  .word 0xe4400020
  .word 0xc7a00050
  .word 0xe4400044
  .word 0xc7a0005c
  .word 0xe4400068
  .word 0x8e030054
  .word 0x1060009f
  .word 0x00000000
  .word 0xc7a20048
  .word 0x3c033f80
  .word 0x44830800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602105d
  .word 0x46000834
  .word 0x45000004
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000024
  .word 0x00000000
  .word 0x92030050
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
  .word 0x46000842
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44040000
  .word 0x00000000
  .word 0x308400ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x308400ff
  .word 0x308300ff
  .word 0xa043000c
  .word 0xa043000d
  .word 0xa043000e
  .word 0xa043000f
  .word 0xc7a20054
  .word 0x3c033f80
  .word 0x44830800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602105d
  .word 0x46000834
  .word 0x45000004
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000024
  .word 0x00000000
  .word 0x92030050
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
  .word 0x46000842
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44040000
  .word 0x00000000
  .word 0x308400ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x308400ff
  .word 0x308300ff
  .word 0xa0430030
  .word 0xa0430031
  .word 0xa0430032
  .word 0xa0430033
  .word 0xc7a20060
  .word 0x3c033f80
  .word 0x44830800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602105d
  .word 0x46000834
  .word 0x45000004
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000024
  .word 0x00000000
  .word 0x92030050
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
  .word 0x46000842
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44040000
  .word 0x00000000
  .word 0x308400ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x308400ff
  .word 0x308300ff
  .word 0xa0430054
  .word 0xa0430055
  .word 0xa0430056
  .word 0xa0430057
  .word 0x1000000e
  .word 0x00000000
  .word 0x92030050
  .word 0xa043000c
  .word 0xa043000d
  .word 0xa043000e
  .word 0xa043000f
  .word 0xa0430030
  .word 0xa0430031
  .word 0xa0430032
  .word 0xa0430033
  .word 0xa0430054
  .word 0xa0430055
  .word 0xa0430056
  .word 0xa0430057
  .word 0x8e225460
  .word 0x24420003
  .word 0xae225460
  .word 0x0240102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}



// 00678960

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
#pragma opt_loop_invariants on
#pragma opt_propagation off
// FUN_0019a420
asm void* func_0019a420(void* ignored,
                    const FldShadowTriangle* triangle,
                    FldShadowAtomicContext* context)
{
  .set noreorder
  .word 0x27bdfed0
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x8cc20004
  .word 0x24505470
  .word 0xc4a20000
  .word 0xc4a10004
  .word 0xc4a00008
  .word 0xe7a20120
  .word 0xe7a10124
  .word 0xe7a00128
  .word 0x0000882d
  .word 0x10000012
  .word 0x00000000
  .word 0x8e420008
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x00111840
  .word 0x00711821
  .word 0x00031880
  .word 0x007d2021
  .word 0x00111880
  .word 0x02631821
  .word 0x24840060
  .word 0x8c65001c
  .word 0x24060001
  .word 0x0040382d
  .word 0x0c131b08
  .word 0x00000000
  .word 0x26310001
  .word 0x2a220003
  .word 0x1440ffed
  .word 0x00000000
  .word 0xc7b50124
  .word 0xc7b40128
  .word 0xc6040008
  .word 0xc7a30120
  .word 0xc6020000
  .word 0xc6000004
  .word 0x4600a81a
  .word 0x44800800
  .word 0x4602181e
  .word 0x4604a01c
  .word 0x46010036
  .word 0x45010004
  .word 0x00000000
  .word 0x0260102d
  .word 0x1000017f
  .word 0x00000000
  .word 0x27a500c0
  .word 0xdfa20060
  .word 0xc7a00068
  .word 0xffa200c0
  .word 0xe7a000c8
  .word 0xc7a2006c
  .word 0xc7a10070
  .word 0xc7a00074
  .word 0xe7a200cc
  .word 0xe7a100d0
  .word 0xe7a000d4
  .word 0xc7a20078
  .word 0xc7a1007c
  .word 0xc7a00080
  .word 0xe7a200d8
  .word 0xe7a100dc
  .word 0xe7a000e0
  .word 0x27a40090
  .word 0x24060003
  .word 0x26070010
  .word 0x0c131b08
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820800
  .word 0xc7a00120
  .word 0x460008c2
  .word 0x46150882
  .word 0x46140842
  .word 0xc7a000c0
  .word 0x46030000
  .word 0xe7a000c0
  .word 0xc7a000c4
  .word 0x46020000
  .word 0xe7a000c4
  .word 0xc7a000c8
  .word 0x46010000
  .word 0xe7a000c8
  .word 0xc7a000cc
  .word 0x46030000
  .word 0xe7a000cc
  .word 0xc7a000d0
  .word 0x46020000
  .word 0xe7a000d0
  .word 0xc7a000d4
  .word 0x46010000
  .word 0xe7a000d4
  .word 0xc7a000d8
  .word 0x46030000
  .word 0xe7a000d8
  .word 0xc7a000dc
  .word 0x46020000
  .word 0xe7a000dc
  .word 0xc7a000e0
  .word 0x46010000
  .word 0xe7a000e0
  .word 0xc7a00098
  .word 0x44800800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000009
  .word 0x00000000
  .word 0xc7a000a4
  .word 0x46010034
  .word 0x45000005
  .word 0x00000000
  .word 0xc7a000b0
  .word 0x46010034
  .word 0x45010039
  .word 0x00000000
  .word 0xc7a20090
  .word 0x44800800
  .word 0x00000000
  .word 0x46011034
  .word 0x45000009
  .word 0x00000000
  .word 0xc7a0009c
  .word 0x46010034
  .word 0x45000005
  .word 0x00000000
  .word 0xc7a000a8
  .word 0x46010034
  .word 0x4501002b
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x00000000
  .word 0x46011036
  .word 0x45010009
  .word 0x00000000
  .word 0xc7a0009c
  .word 0x46010036
  .word 0x45010005
  .word 0x00000000
  .word 0xc7a000a8
  .word 0x46010036
  .word 0x4500001d
  .word 0x00000000
  .word 0xc7a20094
  .word 0x44800800
  .word 0x00000000
  .word 0x46011034
  .word 0x45000009
  .word 0x00000000
  .word 0xc7a000a0
  .word 0x46010034
  .word 0x45000005
  .word 0x00000000
  .word 0xc7a000ac
  .word 0x46010034
  .word 0x4501000f
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x00000000
  .word 0x46011036
  .word 0x4501000c
  .word 0x00000000
  .word 0xc7a000a0
  .word 0x46010036
  .word 0x45010008
  .word 0x00000000
  .word 0xc7a000ac
  .word 0x46010036
  .word 0x45010004
  .word 0x00000000
  .word 0x0260102d
  .word 0x100000ff
  .word 0x00000000
  .word 0x8e440004
  .word 0x8c855460
  .word 0x2ca10256
  .word 0x14200011
  .word 0x00000000
  .word 0x0000302d
  .word 0x24070019
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x24040003
  .word 0x0c13c854
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x8e020058
  .word 0x24420001
  .word 0xae020058
  .word 0x8e420004
  .word 0xac405460
  .word 0x8e440004
  .word 0x8c835460
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021080
  .word 0x00821021
  .word 0xc7a000c0
  .word 0xe7a00110
  .word 0xc7a000c4
  .word 0xe7a00114
  .word 0xc7a000c8
  .word 0xe7a00118
  .word 0xc7a20110
  .word 0xc7a10114
  .word 0xc7a00118
  .word 0xe4420000
  .word 0xe4410004
  .word 0xe4400008
  .word 0xc7a000cc
  .word 0xe7a00100
  .word 0xc7a000d0
  .word 0xe7a00104
  .word 0xc7a000d4
  .word 0xe7a00108
  .word 0xc7a20100
  .word 0xc7a10104
  .word 0xc7a00108
  .word 0xe4420024
  .word 0xe4410028
  .word 0xe440002c
  .word 0xc7a000d8
  .word 0xe7a000f0
  .word 0xc7a000dc
  .word 0xe7a000f4
  .word 0xc7a000e0
  .word 0xe7a000f8
  .word 0xc7a200f0
  .word 0xc7a100f4
  .word 0xc7a000f8
  .word 0xe4420048
  .word 0xe441004c
  .word 0xe4400050
  .word 0xc7a00090
  .word 0xe440001c
  .word 0xc7a0009c
  .word 0xe4400040
  .word 0xc7a000a8
  .word 0xe4400064
  .word 0xc7a00094
  .word 0xe4400020
  .word 0xc7a000a0
  .word 0xe4400044
  .word 0xc7a000ac
  .word 0xe4400068
  .word 0x8e030054
  .word 0x1060009f
  .word 0x00000000
  .word 0xc7a20098
  .word 0x3c033f80
  .word 0x44830800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602105d
  .word 0x46000834
  .word 0x45000004
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000024
  .word 0x00000000
  .word 0x92030050
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
  .word 0x46000842
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44040000
  .word 0x00000000
  .word 0x308400ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x308400ff
  .word 0x308300ff
  .word 0xa043000c
  .word 0xa043000d
  .word 0xa043000e
  .word 0xa043000f
  .word 0xc7a200a4
  .word 0x3c033f80
  .word 0x44830800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602105d
  .word 0x46000834
  .word 0x45000004
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000024
  .word 0x00000000
  .word 0x92030050
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
  .word 0x46000842
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44040000
  .word 0x00000000
  .word 0x308400ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x308400ff
  .word 0x308300ff
  .word 0xa0430030
  .word 0xa0430031
  .word 0xa0430032
  .word 0xa0430033
  .word 0xc7a200b0
  .word 0x3c033f80
  .word 0x44830800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602105d
  .word 0x46000834
  .word 0x45000004
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000024
  .word 0x00000000
  .word 0x92030050
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
  .word 0x46000842
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44040000
  .word 0x00000000
  .word 0x308400ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x308400ff
  .word 0x308300ff
  .word 0xa0430054
  .word 0xa0430055
  .word 0xa0430056
  .word 0xa0430057
  .word 0x1000000e
  .word 0x00000000
  .word 0x92030050
  .word 0xa043000c
  .word 0xa043000d
  .word 0xa043000e
  .word 0xa043000f
  .word 0xa0430030
  .word 0xa0430031
  .word 0xa0430032
  .word 0xa0430033
  .word 0xa0430054
  .word 0xa0430055
  .word 0xa0430056
  .word 0xa0430057
  .word 0x8e430004
  .word 0x8c625460
  .word 0x24420003
  .word 0xac625460
  .word 0x0260102d
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0130
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_propagation reset
#pragma opt_loop_invariants reset




/* Removing this worsens FUN_0019ab80 (nd1126 -> nd1129) - measured W161. */
// FUN_0019ab30
void* func_0019ab30(void* atomic, FldShadowAtomicContext* context)
{
    context->atomic = atomic;
    func_00464120(atomic, context->geometry, func_0019a420, context);
    return atomic;
}







#pragma opt_loop_invariants on
/* W377: adding opt_lifetimes on to the existing opt_loop_invariants scope improves func_0019ab80 (nd1126 -> nd1115; object 1820/1840). */
#pragma opt_lifetimes on
/* W417: kept the mixed float/integer declaration order used by the two calls in func_0019b2b0; this reduces func_0019ab80 nd1115 -> nd1101 without changing its 1820/1840-byte size. */
/* W417 negative: adding a local projectionMatrix assignment to this interleaved candidate raised nd to 1131; rejected. */
// FUN_0019ab80
asm u32 func_0019ab80(RwCamera* camera,
                  RwRaster* raster,
                  s32 drawField,
                  const RwV3d* position,
                  f32 alpha,
                  f32 projectionHalf,
                  u32 depthAlpha,
                  FldShadowProjectionWork* work)
{
  .set noreorder
  .word 0x27bdff00
  .word 0xffbf0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080982d
  .word 0x00a0b82d
  .word 0x00c0902d
  .word 0x00e0882d
  .word 0x46006506
  .word 0x46006d86
  .word 0x0100b02d
  .word 0x0120a02d
  .word 0x2404000c
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040a82d
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040001
  .word 0x02e0282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050005
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x44800000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45000009
  .word 0x00000000
  .word 0x4600a507
  .word 0x2404000b
  .word 0x24050005
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x2404000b
  .word 0x24050006
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e620004
  .word 0x24450010
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe6825470
  .word 0xe6815474
  .word 0xe6805478
  .word 0xc6750068
  .word 0x26845480
  .word 0x0c130ca8
  .word 0x00000000
  .word 0x3c02bf00
  .word 0x44820000
  .word 0x00000000
  .word 0x46150003
  .word 0xe7a000f4
  .word 0xe7a000f0
  .word 0x4615b040
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010003
  .word 0xe7a000f8
  .word 0x26845480
  .word 0x27a500f0
  .word 0x24060002
  .word 0x0c130cf4
  .word 0x00000000
  .word 0x3c023f00
  .word 0xafa200e4
  .word 0xafa200e0
  .word 0xafa000e8
  .word 0x26845480
  .word 0x27a500e0
  .word 0x24060002
  .word 0x0c130d74
  .word 0x00000000
  .word 0xae9654c4
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46140042
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
  .word 0xa28354c0
  .word 0xae8054c8
  .word 0xae805460
  .word 0x16400010
  .word 0x00000000
  .word 0x8ea20160
  .word 0x8c440010
  .word 0x10800003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x8c440008
  .word 0x0220282d
  .word 0x3c06001a
  .word 0x24c69d90
  .word 0x0280382d
  .word 0x0c119008
  .word 0x00000000
  .word 0x100000dd
  .word 0x00000000
  .word 0x24020001
  .word 0x164200da
  .word 0x00000000
  .word 0x0000902d
  .word 0xafb100d0
  .word 0xafb400d4
  .word 0x0c068094
  .word 0x00000000
  .word 0x24030001
  .word 0x1043000f
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
  .word 0x1440009c
  .word 0x00000000
  .word 0x2861004f
  .word 0x10200099
  .word 0x00000000
  .word 0x24040400
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040882d
  .word 0x8c4401e0
  .word 0x0c06b644
  .word 0x00000000
  .word 0x0040a82d
  .word 0x8e2401e0
  .word 0x0c06b648
  .word 0x00000000
  .word 0x00029a00
  .word 0x00158900
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00511021
  .word 0x9442004c
  .word 0xa7a200c0
  .word 0x97a400c0
  .word 0x0c0ed744
  .word 0x00000000
  .word 0xafa200a0
  .word 0x10400002
  .word 0x00000000
  .word 0x26520001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00511021
  .word 0x9442005c
  .word 0xa7a200c2
  .word 0x0000182d
  .word 0x97a400c2
  .word 0x10000007
  .word 0x00000000
  .word 0x00031040
  .word 0x005d1021
  .word 0x944200c0
  .word 0x10820005
  .word 0x00000000
  .word 0x24630001
  .word 0x0072102a
  .word 0x1440fff8
  .word 0x00000000
  .word 0x0072102a
  .word 0x1440000a
  .word 0x00000000
  .word 0x00121080
  .word 0x005d1021
  .word 0x245500a0
  .word 0x0c0ed744
  .word 0x00000000
  .word 0xaea20000
  .word 0x10400002
  .word 0x00000000
  .word 0x26520001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00511021
  .word 0x9442003c
  .word 0xa7a200c4
  .word 0x0000182d
  .word 0x97a400c4
  .word 0x10000007
  .word 0x00000000
  .word 0x00031040
  .word 0x005d1021
  .word 0x944200c0
  .word 0x10820005
  .word 0x00000000
  .word 0x24630001
  .word 0x0072102a
  .word 0x1440fff8
  .word 0x00000000
  .word 0x0072102a
  .word 0x1440000a
  .word 0x00000000
  .word 0x00121080
  .word 0x005d1021
  .word 0x245500a0
  .word 0x0c0ed744
  .word 0x00000000
  .word 0xaea20000
  .word 0x10400002
  .word 0x00000000
  .word 0x26520001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00511021
  .word 0x9442014c
  .word 0xa7a200c6
  .word 0x0000182d
  .word 0x97a400c6
  .word 0x10000007
  .word 0x00000000
  .word 0x00031040
  .word 0x005d1021
  .word 0x944200c0
  .word 0x10820005
  .word 0x00000000
  .word 0x24630001
  .word 0x0072102a
  .word 0x1440fff8
  .word 0x00000000
  .word 0x0072102a
  .word 0x1440000a
  .word 0x00000000
  .word 0x00121080
  .word 0x005d1021
  .word 0x245500a0
  .word 0x0c0ed744
  .word 0x00000000
  .word 0xaea20000
  .word 0x10400002
  .word 0x00000000
  .word 0x26520001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00531021
  .word 0x00511021
  .word 0x9442ff4c
  .word 0xa7a200c8
  .word 0x0000182d
  .word 0x97a400c8
  .word 0x10000007
  .word 0x00000000
  .word 0x00031040
  .word 0x005d1021
  .word 0x944200c0
  .word 0x10820005
  .word 0x00000000
  .word 0x24630001
  .word 0x0072102a
  .word 0x1440fff8
  .word 0x00000000
  .word 0x0072102a
  .word 0x1440000e
  .word 0x00000000
  .word 0x00121080
  .word 0x005d1021
  .word 0x245100a0
  .word 0x0c0ed744
  .word 0x00000000
  .word 0xae220000
  .word 0x10400006
  .word 0x00000000
  .word 0x26520001
  .word 0x10000003
  .word 0x00000000
  .word 0xafb500a0
  .word 0x26520001
  .word 0x0000982d
  .word 0x10000024
  .word 0x00000000
  .word 0x00131080
  .word 0x005d1021
  .word 0x245500a0
  .word 0x8eb60000
  .word 0x8ec20160
  .word 0x8c440010
  .word 0x10800008
  .word 0x00000000
  .word 0x3c05001a
  .word 0x24a5ab30
  .word 0x27a600d0
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000000c
  .word 0x00000000
  .word 0x8ea20000
  .word 0x00111880
  .word 0x8c420160
  .word 0x00431021
  .word 0x8c440018
  .word 0x3c05001a
  .word 0x24a5ab30
  .word 0x27a600d0
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x26310001
  .word 0x8ec20160
  .word 0x8c420014
  .word 0x0222102b
  .word 0x1440fff1
  .word 0x00000000
  .word 0x26730001
  .word 0x0272102a
  .word 0x1440ffdb
  .word 0x00000000
  .word 0x8e8354c8
  .word 0x00031100
  .word 0x00431823
  .word 0x00031080
  .word 0x00621021
  .word 0x000218c0
  .word 0x8e825460
  .word 0x00431821
  .word 0x24020003
  .word 0x0062001b
  .word 0x00001012
  .word 0xae825464
  .word 0x8e825460
  .word 0x1040002d
  .word 0x00000000
  .word 0x3c110096
  .word 0x26310090
  .word 0x24040001
  .word 0x02e0282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000e
  .word 0x0000282d
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
  .word 0x0280202d
  .word 0x8e855460
  .word 0x0000302d
  .word 0x24070019
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x24040003
  .word 0x0c13c854
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x8f82b3e4
  .word 0x24050001
  .word 0x14450005
  .word 0x00000000
  .word 0x2404000e
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0xae805460
  .word 0x3c100096
  .word 0x26100090
  .word 0x2404000b
  .word 0x24050006
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050005
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0090
  .word 0x7bb70080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0100
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_loop_invariants reset
#pragma opt_lifetimes reset

// FUN_0019b2b0
asm void* func_0019b2b0(KwlnTask* renderTexTask)
{
  .set noreorder
  .word 0x27bdfe80
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x8c90003c
  .word 0x8e02000c
  .word 0x8c420028
  .word 0x30420002
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000274
  .word 0x00000000
  .word 0x8e020004
  .word 0x24060001
  .word 0x14460004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000026d
  .word 0x00000000
  .word 0x8e050000
  .word 0x24040002
  .word 0x10a40265
  .word 0x00000000
  .word 0x10a600f6
  .word 0x00000000
  .word 0x10a00003
  .word 0x00000000
  .word 0x10000262
  .word 0x00000000
  .word 0x9603000a
  .word 0x24020003
  .word 0x10620043
  .word 0x00000000
  .word 0x24020004
  .word 0x10620040
  .word 0x00000000
  .word 0x10640031
  .word 0x00000000
  .word 0x10660009
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000253
  .word 0x00000000
  .word 0x24a20001
  .word 0xae020000
  .word 0x1000024f
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x1040024a
  .word 0x00000000
  .word 0x27a40100
  .word 0x0000282d
  .word 0x24060018
  .word 0x0c148502
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c0c62e0
  .word 0x00000000
  .word 0x0040202d
  .word 0x3c05001a
  .word 0x24a59cf0
  .word 0x27a60100
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x8fa20114
  .word 0xae020014
  .word 0x3c0242b4
  .word 0xae020018
  .word 0xc7a20100
  .word 0xc7a10104
  .word 0xc7a00108
  .word 0xe602002c
  .word 0xe6010030
  .word 0xe6000034
  .word 0xae00002c
  .word 0xae000034
  .word 0xc7a0010c
  .word 0xe6000038
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x10000229
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x10400224
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c0c6404
  .word 0x00000000
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x1000021c
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x10400217
  .word 0x00000000
  .word 0x0c1252f8
  .word 0x00000000
  .word 0x8e03004c
  .word 0xac620008
  .word 0x8e02004c
  .word 0x8c460008
  .word 0x93859450
  .word 0x93849451
  .word 0x93839452
  .word 0x93829453
  .word 0xa0c50004
  .word 0xa0c40005
  .word 0xa0c30006
  .word 0xa0c20007
  .word 0x24040022
  .word 0x24050020
  .word 0x2406004a
  .word 0x0c124dc4
  .word 0x00000000
  .word 0x0040882d
  .word 0x8c53002c
  .word 0x0000902d
  .word 0x10000012
  .word 0x00000000
  .word 0x26420002
  .word 0x3047ffff
  .word 0x26420001
  .word 0x3048ffff
  .word 0x0220202d
  .word 0x0260282d
  .word 0x0000302d
  .word 0x0c124c84
  .word 0x00000000
  .word 0x8e02004c
  .word 0x0220202d
  .word 0x0260282d
  .word 0x8c460008
  .word 0x0c124c8c
  .word 0x00000000
  .word 0x26730008
  .word 0x26520001
  .word 0x2a420020
  .word 0x1440ffed
  .word 0x00000000
  .word 0x8e22005c
  .word 0x8c530014
  .word 0x4480a000
  .word 0xae600000
  .word 0x3c0240a0
  .word 0xae620004
  .word 0xae600008
  .word 0x0000a02d
  .word 0x10000018
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00021080
  .word 0x02629021
  .word 0x4600a306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x8e02004c
  .word 0xc4410000
  .word 0x46000802
  .word 0xe640000c
  .word 0x3c0240a0
  .word 0xae420010
  .word 0x4600a306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x8e02004c
  .word 0xc4410000
  .word 0x46000802
  .word 0xe6400014
  .word 0xc7808214
  .word 0x4600a500
  .word 0x26940001
  .word 0x2a820020
  .word 0x1440ffe7
  .word 0x00000000
  .word 0x00141040
  .word 0x00541021
  .word 0x00029080
  .word 0x44806000
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x8e02004c
  .word 0xc4410000
  .word 0x46000802
  .word 0x02531821
  .word 0xe460000c
  .word 0x3c0240a0
  .word 0xac620010
  .word 0x44806000
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x8e02004c
  .word 0xc4410000
  .word 0x46000802
  .word 0x02531021
  .word 0xe4400014
  .word 0x8e230030
  .word 0xa0600000
  .word 0xa0600001
  .word 0xa0600002
  .word 0x24020080
  .word 0xa0620003
  .word 0x0000202d
  .word 0x10000008
  .word 0x00000000
  .word 0x00041080
  .word 0x00621021
  .word 0xa0400004
  .word 0xa0400005
  .word 0xa0400006
  .word 0xa0400007
  .word 0x24840001
  .word 0x28820021
  .word 0x1440fff7
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c124cf4
  .word 0x00000000
  .word 0x8e32005c
  .word 0x0240202d
  .word 0x27a500f0
  .word 0x0c124b88
  .word 0x00000000
  .word 0xc7a300f0
  .word 0xc7a200f4
  .word 0xc7a100f8
  .word 0xc7a000fc
  .word 0xe6430004
  .word 0xe6420008
  .word 0xe641000c
  .word 0xe6400010
  .word 0x0c124620
  .word 0x00000000
  .word 0x8e03004c
  .word 0xac620004
  .word 0x8e02004c
  .word 0x8c440004
  .word 0x0220282d
  .word 0x0000302d
  .word 0x0c12466c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c124ed8
  .word 0x00000000
  .word 0x0c132bc4
  .word 0x00000000
  .word 0x8e03004c
  .word 0x8c640004
  .word 0x0040282d
  .word 0x0c124b44
  .word 0x00000000
  .word 0x8e02004c
  .word 0x8c420004
  .word 0x8c440004
  .word 0x0c132e4c
  .word 0x00000000
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x10000171
  .word 0x00000000
  .word 0x9603000a
  .word 0x24020003
  .word 0x10620120
  .word 0x00000000
  .word 0x24020004
  .word 0x10620082
  .word 0x00000000
  .word 0x10640168
  .word 0x00000000
  .word 0x10660005
  .word 0x00000000
  .word 0x10600164
  .word 0x00000000
  .word 0x10000162
  .word 0x00000000
  .word 0xafa20138
  .word 0xc6140018
  .word 0x8e040010
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400030
  .word 0x4600a000
  .word 0xe7a00120
  .word 0x8e040010
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400034
  .word 0x4600a000
  .word 0xe7a00124
  .word 0x8e040010
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400038
  .word 0x4600a000
  .word 0xe7a00128
  .word 0x8e040010
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400030
  .word 0x46140001
  .word 0xe7a0012c
  .word 0x8e040010
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400034
  .word 0x46140001
  .word 0xe7a00130
  .word 0x8e040010
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400038
  .word 0x46140001
  .word 0xe7a00134
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x10400135
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040902d
  .word 0x3c110096
  .word 0x26310090
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x12400128
  .word 0x00000000
  .word 0x8e420160
  .word 0x8c420000
  .word 0x30420001
  .word 0x10400011
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x3c024000
  .word 0x44820800
  .word 0xc6000018
  .word 0x46010343
  .word 0x8e040044
  .word 0x8e050040
  .word 0x0000302d
  .word 0x27a70120
  .word 0x0000402d
  .word 0x8e090048
  .word 0x0c066ae0
  .word 0x00000000
  .word 0x1000001c
  .word 0x00000000
  .word 0x24020003
  .word 0xafa20138
  .word 0x8e040010
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x27a70120
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20120
  .word 0xe7a10124
  .word 0xe7a00128
  .word 0xc6010018
  .word 0xe7a1012c
  .word 0x3c023f80
  .word 0x44826000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b43
  .word 0x8e040044
  .word 0x8e050040
  .word 0x24060001
  .word 0x0000402d
  .word 0x8e090048
  .word 0x0c066ae0
  .word 0x00000000
  .word 0x8f82b3e4
  .word 0x24050001
  .word 0x14450005
  .word 0x00000000
  .word 0x2404000e
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x100000e9
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x10400095
  .word 0x00000000
  .word 0x27a30170
  .word 0x2402000c
  .word 0x10600008
  .word 0x00000000
  .word 0xa0600000
  .word 0x24630001
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x27a600b0
  .word 0x24050008
  .word 0x8c440000
  .word 0x8c430004
  .word 0x24420008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x27a500b0
  .word 0x27a40070
  .word 0x24030004
  .word 0x78a20000
  .word 0x24a50010
  .word 0x2463ffff
  .word 0x7c820000
  .word 0x24840010
  .word 0x1c60fffa
  .word 0x00000000
  .word 0xc6010080
  .word 0xc6000088
  .word 0x46000836
  .word 0x4501000d
  .word 0x00000000
  .word 0x3c023f80
  .word 0xafa20160
  .word 0xafa20164
  .word 0x3c02bf80
  .word 0xafa20168
  .word 0xc600007c
  .word 0x46000040
  .word 0xc7a000a8
  .word 0x46000801
  .word 0xe7a000a8
  .word 0x1000000b
  .word 0x00000000
  .word 0x3c02bf80
  .word 0xafa20160
  .word 0x3c023f80
  .word 0xafa20164
  .word 0xafa20168
  .word 0xc6000074
  .word 0x46000040
  .word 0xc7a000a0
  .word 0x46000801
  .word 0xe7a000a0
  .word 0x8e030010
  .word 0x946200d8
  .word 0x34420004
  .word 0xa46200d8
  .word 0x8e040010
  .word 0x27a50160
  .word 0x24060002
  .word 0x0c0c62a4
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc7a200a0
  .word 0xc7a100a4
  .word 0xc7a000a8
  .word 0xe4420030
  .word 0xe4410034
  .word 0xe4400038
  .word 0x27a40150
  .word 0x0c130b30
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a50150
  .word 0x0c130b48
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c130bc4
  .word 0x00000000
  .word 0x8e030010
  .word 0x946200d8
  .word 0x34420040
  .word 0xa46200d8
  .word 0x8e040010
  .word 0x0c0c5db0
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c0c62e4
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c0c5e88
  .word 0x00000000
  .word 0x8e030010
  .word 0x946200d8
  .word 0x3042ffbf
  .word 0xa46200d8
  .word 0x24040014
  .word 0x24050002
  .word 0x3c020096
  .word 0x8c420090
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x27a600b0
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
  .word 0x8e030010
  .word 0x946200d8
  .word 0x3042fffb
  .word 0xa46200d8
  .word 0x8e040010
  .word 0x0c0c5db0
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c0c62e4
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x27a50140
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20140
  .word 0xe7a10144
  .word 0xe7a00148
  .word 0x8e02004c
  .word 0x8c420004
  .word 0x8c440004
  .word 0x0000302d
  .word 0x0c132dd4
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x10400037
  .word 0x00000000
  .word 0x3c110096
  .word 0x26310090
  .word 0x24040007
  .word 0x24050002
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
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e220000
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
  .word 0x8e02004c
  .word 0x8c440004
  .word 0x8c820048
  .word 0x0040f809
  .word 0x00000000
  .word 0x8f82b3e4
  .word 0x24050001
  .word 0x14450005
  .word 0x00000000
  .word 0x2404000e
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0180
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}













/* W377: opt_dead_assignments off improves K_FldShadow_UpdateShadowMapTask (nd2297 -> nd2260; object 3520/3520). */



#pragma alias kwlnRootUpdateEtcDrawBeginTask FUN_00198e90
#pragma alias kwlnRootUpdateEtcDrawEndTask FUN_00198fd0
#pragma alias kwlnRootCreateEtcDrawBeginTask FUN_00199080
#pragma alias kwlnRootCreateEtcDrawEndTask FUN_00199100
#pragma alias kwlnRootCreateShowRasterTask FUN_00199360
#pragma alias kwlnRootUpdateDrawBustupTask FUN_001993a0
#pragma alias kwlnRootCreateDrawBustupTask FUN_001993d0
#pragma alias kwlnRootDestroy3DDrawTask FUN_00199410
#pragma alias kwlnRootCreate3DDrawTask FUN_00199440
































#include "Kernel/Kwln/kwlnRoot.h"
#include "h_snd.h"
#include "h_fade.h"
#include "h_dbprt.h"
#include "Main/Game/gm_root.h"
#include "h_chrdsp.h"
#include "Yajima/y_misc.h"
#include "rw/rprandom.h"
#include "sce/eeregs.h"
// FUN_0019bcf0
void func_0019bcf0(KwlnTask* renderTexTask)
{
    KwlnTask* task;
    FldShadowRenderTex* shadow;
    RwCamera* camera;
    RwFrame* frame;
    RwRaster* raster;

    task = renderTexTask;
    shadow = (FldShadowRenderTex*)task->workData;
    switch (shadow->mode)
    {
    case 1:
        goto destroyMode1;
    case 4:
    case 3:
    default:
        goto destroyRing;
    }
destroyMode1:
    func_0049c1b0(kwlnGetWorld(gCurrWorldIdx), shadow->camera);
    camera = shadow->camera;
    if (camera != NULL)
    {
        frame = (RwFrame*)camera->object.object.parent;
        if (frame != NULL)
        {
            func_004d1840(camera, NULL);
            func_004caf80(frame);
        }
        raster = camera->zBuffer;
        if (raster != NULL)
        {
            camera->zBuffer = NULL;
            func_004cde90(raster);
        }
        if (camera->frameBuffer != NULL)
        {
            camera->frameBuffer = NULL;
        }
        func_004ca030(camera);
    }
    func_004f1780(shadow->raster, false);
    func_004cde90(shadow->raster);
    func_004d0be0(shadow->texture, NULL);
    func_004d0f00(shadow->texture);
    if (shadow->unk_48 != NULL)
    {
        (*(void (**)(void*))jtbl_0096017C_abs)(shadow->unk_48);
    }
    goto destroyRing;

destroyRing:
    if (shadow->radius != NULL)
    {
        if (((FldShadowRingWork*)shadow->radius)->colorData != NULL)
        {
            func_00494cc0(((FldShadowRingWork*)shadow->radius)->colorData);
        }
        if (((FldShadowRingWork*)shadow->radius)->renderObject != NULL)
        {
            frame = (RwFrame*)*(void**)((u8*)((FldShadowRingWork*)shadow->radius)->renderObject + 4);
            func_004caf80(frame);
            func_00491a80(((FldShadowRingWork*)shadow->radius)->renderObject);
        }
        (*(void (**)(void*))jtbl_0096017C_abs)(shadow->radius);
    }
    (*(void (**)(void*))jtbl_0096017C_abs)(task->workData);
}
