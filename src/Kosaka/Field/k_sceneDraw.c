#include "Kosaka/Field/k_sceneDraw.h"
#include "Kosaka/Field/k_field.h"
#include "Kosaka/Field/k_shadow.h"
#include "Kosaka/k_assert.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Kernel/Kwln/kwln.h"
extern RwRGBA* func_001985d0(void);
#include "Graphics/Model/mdlManager.h"
#include "Scene/mt_scene.h"
#include "Scene/resrcManager.h"
#include "rw/rwcore.h"
#include "rw/rwplcore.h"
#include "temporary.h"

#include "Kosaka/k_window.h"
#include "h_dbprt.h"
#pragma alias rwGlobals_abs rwGlobals
extern u8 rwGlobals_abs[];
extern u8 DAT_00678ab8[];
extern u32 D_00960184_y2[];
extern void (*D_0096017c)(void* memory);
#pragma alias D_00960090_abs D_00960090
extern u8 D_00960090_abs[];
extern u16 DAT_007e094c;
extern u16 DAT_007e094e;
extern u16 DAT_007e0952;
extern u32 uGpffffb450;
extern u32 uGpffffb454;
extern u32 gp0xffff9460;
extern u32 gp0xffff9464;
extern u32 gp0xffff9468;
extern u32 gp0xffff946c;
extern u32 gp0xffff9470;
extern u32 gp0xffff9474;
extern u32 gp0xffff9478;
extern u32 gp0xffff947c;
extern u32 gp0xffff9480;
extern u8 gp0xffff9484;
extern const char gp0xffff9488[];
extern const char gp0xffff9490[];
extern const char gp0xffff9498[];
extern const char gp0xffff94a0[];
extern const char gp0xffff94a8[];
extern const char gp0xffff94b0[];
extern const char gp0xffff94b8[];
extern u32 uGpffff94c4;
extern void func_00524270_y2(void* destination, const void* source);
extern s32 func_00524388(const char* text);
extern f32 func_00530da0(f32 value);
extern void func_0019d3f0(const char* file, s32 line);
extern void func_00494cc0(void* colorData);
extern void func_001e7a60(void* renderData);
extern void* func_001a1550(KwlnTask* task);
extern f32 func_001e7c20(s32 scale);
extern void func_001e7b10(void* quad, f32 scale);
extern void func_004933d0(void* renderLayout);
extern void func_00493370(void* renderLayout, s32 state);
extern f32 func_001a4600(void* camera);
extern u32 func_00195790(void);
extern void func_004d7f60(s32 state, u32 value);
extern void FUN_00521408(void* destination, s32 value, u32 size);
extern void (*D_00960090)(u32 state, u32 value);
extern RwCamera* kwlnGetMainCamera_y2(void);
typedef struct KWindowQuad
{
    RwV3d vertex[4];
} KWindowQuad;
typedef struct KWindowQuadStore
{
    u8 unknown00[0x14];
    KWindowQuad* quad;
} KWindowQuadStore;
typedef struct KWindowRenderLayout
{
    u8 unknown00[0x30];
    RwRGBA* tileColors;
    u8 unknown34[0x28];
    KWindowQuadStore* quadStore;
} KWindowRenderLayout;
typedef struct KWindowRenderData
{
    u8 unknown00[0x18];
    KWindowRenderLayout* layout;
} KWindowRenderData;
typedef void (*KWindowEntryCallback)(void* value);
typedef struct KWindowEntry
{
    s32 id;                         /* 0x000 */
    s32 type;                       /* 0x004 */
    char name[0x100];               /* 0x008 */
    char text[0x100];               /* 0x108 */
    s32 intValue;                   /* 0x208 */
    f32 floatValue;                 /* 0x20c */
    s32 minValue;                   /* 0x210 */
    s32 maxValue;                   /* 0x214 */
    s32 flags;                      /* 0x218 */
    KWindowEntryCallback callback;  /* 0x21c */
    void* callbackValue;            /* 0x220 */
    struct KWindowEntry* previous;  /* 0x224 */
    struct KWindowEntry* next;      /* 0x228 */
} KWindowEntry;
typedef struct KWindowManagerWork
{
    s32 state;                      /* 0x00 */
    u32 flags;                      /* 0x04 */
    s32 mode;                       /* 0x08 */
    u32 request;                    /* 0x0c */
    s32 x;                          /* 0x10 */
    s32 y;                          /* 0x14 */
    s32 width;                      /* 0x18 */
    s32 height;                     /* 0x1c */
    void* renderData;               /* 0x20 */
    void* colorData;                /* 0x24 */
    KwlnTask* windowTask;           /* 0x28 */
    s32 firstVisible;               /* 0x2c */
    s32 cursor;                     /* 0x30 */
    s32 visibleRows;                /* 0x34 */
    s32 entryCount;                 /* 0x38 */
    KWindowEntry* entries;          /* 0x3c */
    s32 nextId;                     /* 0x40 */
} KWindowManagerWork;
typedef struct KWindowEntryDescriptor
{
    const char* name;
    s32 type;
    const char* text;
    s32 value0;
    s32 value1;
    s32 value2;
    s32 value3;
    KWindowEntryCallback callback;
} KWindowEntryDescriptor;
extern void H_Dbprt_Fmt3D(RwV2d pos, const char* fmt, ...);
extern void H_Dbprt_FmtCol3D(RwV2d pos, RwRGBA color, const char* fmt, ...);
#pragma alias H_Dbprt_FmtCol3D_f32 H_Dbprt_FmtCol3D
extern void H_Dbprt_FmtCol3D_f32(RwV2d pos, RwRGBA color, const char* fmt, f32 value);
extern void func_00524270_y2(void* destination, const void* source);
extern void (*D_0096017c)(void* object);
#pragma alias D_0096017c_abs D_0096017c
extern u32 D_0096017c_abs[];
extern const char D_00678AF8[];
extern const char D_00678B08[];
extern const char D_00678B18[];
extern const char D_00678B30[];
static const char sKWindowValueLabel[] = "%s";
static const char sKWindowType2Label[] = "off";
static const char sKWindowType3Label[] = "%d";
static const char sKWindowType4Label[] = "%.2f";
static const char sKWindowTextLabel[] = "%s";
void* func_001a2a80(KwlnTask* task);
void func_001a3a60(KwlnTask* task);
void func_001a44a0(KwlnTask* task);
KwlnTask* func_001a3b10(KwlnTask* parent, u32 width, u32 height, u32 mode);
void func_001a3c30(KwlnTask* task);
u32 func_001a3f20(KwlnTask* task, const char* name);
char* func_001a4010(KwlnTask* task, s32 id);
void func_001a4050(KwlnTask* task, u32 id, KWindowEntryCallback callback);
void func_001a4090(KwlnTask* task, u32 id, const char* text);
void func_001a4110(KwlnTask* task, u32 id, s32 value, s32 minValue,
                   s32 maxValue, s32 flags);
s32* func_001a41b0(KwlnTask* task, u32 id);
void func_001a41f0(KwlnTask* task, u32 id, s32 value);
void func_001a4260(KwlnTask* task, u32 id, s32 value, s32 minValue,
                   s32 maxValue);
KWindowEntry* func_001a4330(KwlnTask* task, s32 id);
s32 func_001a4510(KwlnTask* task);
static inline void KWindow_ApplyValueDelta(KWindowEntry* entry, s32 delta,
                                    s32 floatDelta)
{
    f32 value;

    if (entry == NULL)
    {
        return;
    }

    if (entry->type == 4)
    {
        value = entry->floatValue + (f32)floatDelta;
        if (value < (f32)entry->minValue)
        {
            value = (f32)entry->maxValue;
        }
        else if (value > (f32)entry->maxValue)
        {
            value = (f32)entry->minValue;
        }
        entry->floatValue = value;
    }
    else if (entry->type == 3)
    {
        entry->intValue += delta;
        if (entry->intValue < entry->minValue)
        {
            entry->intValue = entry->maxValue;
        }
        else if (entry->intValue > entry->maxValue)
        {
            entry->intValue = entry->minValue;
        }
    }
    else if (entry->type == 2)
    {
        entry->intValue = (entry->intValue == 1) ? 0 : 1;
    }
}


#pragma alias D_0096017c_y2 D_0096017c
#pragma alias D_00960184_y2 D_00960184_y2
#pragma alias func_00524270_y2 func_00524270_y2
#pragma alias kwlnGetMainCamera_y2 kwlnGetMainCamera_y2


extern RpLight* func_00198580();
extern RwRGBAReal* func_0019fd70();
extern RwMatrix* func_0019fda0();
extern s32 func_001a7660(void* param);
extern s32 func_001a76e0(void* param);
extern void func_001a8b10(u32* param);
extern void func_001b3e50(RwCamera* camera, void* fieldData);
extern void func_001b4720(RwCamera* camera, void* fieldData);
extern void func_001bd950();
extern void func_00317a20(Model* mdl);
extern s32 func_00318ed0(Model* mdl, s32 param, RwV3d* position);
extern void func_00319230(Model* mdl, s32 param);
extern void func_0034fd30(Model* mdl);
extern void func_001b56f0(void* fieldData, const void* color);
extern void func_001b5950(void* fieldData, const void* position);
extern void func_001b5990(void* fieldData, const void* position);
extern void func_001b59c0(void* fieldData, const void* position);
extern void func_001b5a00(void* fieldData, const void* position);
extern void* func_001e78c0(s32 width, s32 height);
extern void func_001e7aa0(void* work, s32 index, void* data);
extern void* func_00494be0(void);
extern void func_004c31b0(f32 angle, RwMatrix* matrix, const RwV3d* axis, RwOpCombineType combineOp);
extern void func_004cb270(void* cameraData);
extern void* func_004d0f00(void* resource);
extern void* func_004d1110(void* manager, void* object);
extern void* func_004d1170(void* manager, void* object);
extern void* func_004d11f0(void);
extern void func_00524270(void* texture, void* object);
extern void* D_00960184[];
extern void func_005225a8();
extern void* D_0096017c_y2[];
void func_001a0040(u32 visible, u32 updateField);
u32 func_001a02c0();
extern void func_0034fd70(Model* mdl, s32 param);
extern void func_0034fdf0(Model* mdl, RwV3d* position);
extern void func_00521408(void* dst, s32 value, u32 size);
extern void func_004944b0(RpLight* light, const RwRGBAReal* color);
extern void func_0049c3d0(RpWorld* world, RpLight* light);
extern void func_0049c480(RpWorld* world, RpLight* light);
s32 func_0019db10(KwlnTask* task);
s32 func_0019de80(KwlnTask* task);
#pragma alias uGpffffb3dc gCurrWorldIdx
extern u32 uGpffffb3dc;
s32 func_0019e1f0(const void* charPtr1, const void* charPtr2);
extern u32 gUnk_008668f0[];
extern f32 fGpffff80e0;
extern f32 fGpffff8084;
extern u8 DAT_007ce0e8;
extern u8 DAT_007ce0ec;
extern u8 DAT_007ce0f0;
extern u8 DAT_007ce0f4;

typedef struct SceneDrawObject
{
    u8 unk_00[0x10];
    u8 data[0x40];
    u8 type;
} SceneDrawObject;

#define SCENEDRAW_RESRC_PTR(resource, type, offset) (*(type**)((u8*)(resource) + (offset)))
#define SCENEDRAW_RESRC_COLOR(resource, offset)     ((RwRGBAReal*)((u8*)(resource) + (offset)))
#define SCENEDRAW_RESRC_MATRIX(resource, offset)    ((RwMatrix*)((u8*)(resource) + (offset)))

#define SCENEDRAW_RESRC_FLAG_VISIBLE         0x00000002
#define SCENEDRAW_RESRC_FLAG_DRAW_BASE        0x20000000
#define SCENEDRAW_RESRC_FLAG_CUSTOM_LIGHT     0x80000000
#define SCENEDRAW_RESRC_FLAG_DIRECTIONAL_ONLY 0x40000000
#define SCENEDRAW_RESRC_FLAG_PERSONA          0x00010000
#define SCENEDRAW_RESRC_TYPE_MODELFLD2        11
#define SCENEDRAW_MAX_SORTED_MODELS            64

// FUN_0019d410
void* K_SceneDraw_UpdateDrwOpcFldTask(KwlnTask* drwOpcFldTask)
{
    ResrcFld* fld;
    Field* field;

    fld = (ResrcFld*)MT_Scene_GetResListHead(RESRC_TYPE_FLD);
    field = K_Field_Get();
    if (*(s32*)((u8*)field + 0x34) == 0)
    {
        func_001bd950();
    }

    while (fld != NULL)
    {
        if (fld->base.flags & SCENEDRAW_RESRC_FLAG_VISIBLE)
        {
            func_001b3e50(kwlnGetMainCamera(), fld->unk_160);
        }

        fld = (ResrcFld*)fld->base.next;
    }

    return KWLNTASK_CONTINUE;
}

// FUN_0019d4a0
void* K_SceneDraw_UpdateDrwTrnsFldTask(KwlnTask* drwTrnsFldTask)
{
    ResrcFld* fld;

    if (gMtScene->fldMajorId < 200)
    {
        fld = (ResrcFld*)MT_Scene_GetResListHead(RESRC_TYPE_FLD);
        while (fld != NULL)
        {
            if (fld->base.flags & SCENEDRAW_RESRC_FLAG_VISIBLE)
            {
                func_001b4720(kwlnGetMainCamera(), fld->unk_160);
            }

            fld = (ResrcFld*)fld->base.next;
        }
    }

    return KWLNTASK_CONTINUE;
}

// FUN_0019d530
void* K_SceneDraw_UpdateDrwTrnsFldSrtTask(KwlnTask* drwTrnsFldSrtTask)
{
    RwRGBAReal ambientColor;
    RwRGBAReal directionalColor;
    RwMatrix directionalMatrix;

    if (gUnk_008668f0[0] == 0)
    {
        return KWLNTASK_CONTINUE;
    }

    ambientColor = kwlnGetAmbientLight()->color;
    directionalColor = kwlnGetDirectionalLight()->color;
    directionalMatrix = ((RwFrame*)kwlnGetDirectionalLight()->object.object.parent)->modelling;

    func_004944b0(kwlnGetAmbientLight(), K_Scene_GetFldAmbLightColor());
    func_004944b0(kwlnGetDirectionalLight(), (const RwRGBAReal*)func_0019fd70());
    RwFrameTransform((RwFrame*)kwlnGetDirectionalLight()->object.object.parent,
                     (const RwMatrix*)func_0019fda0(),
                     rwCOMBINEREPLACE);
    kwlnGetDirectionalLight()->object.object.flags = 3;
    kwlnGetDirectionalLight();

    func_0049c480(kwlnGetWorld(gCurrWorldIdx), func_00198580());
    if (RwCameraBeginUpdate(kwlnGetMainCamera()) != NULL)
    {
        func_001a8b10(gUnk_008668f0);
        RwCameraEndUpdate(kwlnGetMainCamera());
    }

    func_0049c3d0(kwlnGetWorld(gCurrWorldIdx), func_00198580());
    func_004944b0(kwlnGetAmbientLight(), &ambientColor);
    func_004944b0(kwlnGetDirectionalLight(), &directionalColor);
    RwFrameTransform((RwFrame*)kwlnGetDirectionalLight()->object.object.parent,
                     &directionalMatrix,
                     rwCOMBINEREPLACE);
    kwlnGetDirectionalLight()->object.object.flags = 3;
    kwlnGetDirectionalLight();

    return KWLNTASK_CONTINUE;
}

// FUN_0019d780
void* K_SceneDraw_UpdateDrwOpcFldObjTask(KwlnTask* drwOpcFldObjTask)
{
    ResrcModelFld* modelFld;
    ResrcModelFld* modelFld2;
    ResrcFld* fld;
    RwRGBAReal ambientColor;
    RwRGBAReal directionalColor;
    RwMatrix directionalMatrix;

    modelFld = (ResrcModelFld*)MT_Scene_GetResListHead(RESRC_TYPE_MODELFLD);
    modelFld2 = (ResrcModelFld*)MT_Scene_GetResListHead(SCENEDRAW_RESRC_TYPE_MODELFLD2);
    fld = (ResrcFld*)MT_Scene_GetResListHead(RESRC_TYPE_FLD);

    ambientColor = kwlnGetAmbientLight()->color;
    directionalColor = kwlnGetDirectionalLight()->color;
    directionalMatrix = ((RwFrame*)kwlnGetDirectionalLight()->object.object.parent)->modelling;

    if (fld == NULL)
    {
        return KWLNTASK_CONTINUE;
    }

    func_0049c480(kwlnGetWorld(gCurrWorldIdx), func_00198580());
    func_004944b0(kwlnGetAmbientLight(), K_Scene_GetFldAmbLightColor());
    func_004944b0(kwlnGetDirectionalLight(), (const RwRGBAReal*)func_0019fd70());
    RwFrameTransform((RwFrame*)kwlnGetDirectionalLight()->object.object.parent,
                     (const RwMatrix*)func_0019fda0(),
                     rwCOMBINEREPLACE);

    if (RwCameraBeginUpdate(kwlnGetMainCamera()) != NULL)
    {
        while (modelFld != NULL)
        {
            if (modelFld->base.flags & SCENEDRAW_RESRC_FLAG_VISIBLE)
            {
                if (func_001a7660(modelFld->mdl->unk_e0) == 0)
                {
                    func_00317a20(modelFld->mdl);
                    if (SCENEDRAW_RESRC_PTR(modelFld, Model, 0x12c) != NULL &&
                        (modelFld->base.flags & SCENEDRAW_RESRC_FLAG_DRAW_BASE))
                    {
                        func_00317a20(SCENEDRAW_RESRC_PTR(modelFld, Model, 0x12c));
                    }
                }
            }

            modelFld = (ResrcModelFld*)modelFld->base.next;
        }

        RwCameraEndUpdate(kwlnGetMainCamera());
    }
    else
    {
        K_Assert("k_sceneDraw.c", 0x100);
    }

    func_0049c3d0(kwlnGetWorld(gCurrWorldIdx), func_00198580());
    func_004944b0(kwlnGetAmbientLight(), &ambientColor);
    func_004944b0(kwlnGetDirectionalLight(), &directionalColor);
    RwFrameTransform((RwFrame*)kwlnGetDirectionalLight()->object.object.parent,
                     &directionalMatrix,
                     rwCOMBINEREPLACE);

    while (modelFld2 != NULL)
    {
        if (modelFld2->base.flags & SCENEDRAW_RESRC_FLAG_VISIBLE)
        {
            func_0034fd30(modelFld2->mdl);
            func_0034fd70(modelFld2->mdl, 3);
        }

        modelFld2 = (ResrcModelFld*)modelFld2->base.next;
    }

    if (gMtScene->fldMajorId >= 200)
    {
        fld = (ResrcFld*)MT_Scene_GetResListHead(RESRC_TYPE_FLD);
        while (fld != NULL)
        {
            if (fld->base.flags & SCENEDRAW_RESRC_FLAG_VISIBLE)
            {
                func_001b4720(kwlnGetMainCamera(), fld->unk_160);
            }

            fld = (ResrcFld*)fld->base.next;
        }

        func_0019de80(drwOpcFldObjTask);
        func_0019db10(drwOpcFldObjTask);
    }

    return KWLNTASK_CONTINUE;
}

// FUN_0019db10
s32 func_0019db10(KwlnTask* task)
{
    ResrcModelFld* modelFld;
    ResrcFld* fld;
    RwRGBAReal ambientColor;
    RwRGBAReal directionalColor;
    RwMatrix directionalMatrix;
    RwRenderStateSetFunc* setRenderState;

    modelFld = (ResrcModelFld*)MT_Scene_GetResListHead(RESRC_TYPE_MODELFLD);
    fld = (ResrcFld*)MT_Scene_GetResListHead(RESRC_TYPE_FLD);
    ambientColor = kwlnGetAmbientLight()->color;
    directionalColor = kwlnGetDirectionalLight()->color;
    directionalMatrix = ((RwFrame*)kwlnGetDirectionalLight()->object.object.parent)->modelling;

    if (fld == NULL)
    {
        return 0;
    }
    
        func_0049c480(kwlnGetWorld(uGpffffb3dc), func_00198580());
        func_004944b0(kwlnGetAmbientLight(), K_Scene_GetFldAmbLightColor());
        func_004944b0(kwlnGetDirectionalLight(), (const RwRGBAReal*)func_0019fd70());
        RwFrameTransform((RwFrame*)kwlnGetDirectionalLight()->object.object.parent,
                         (const RwMatrix*)func_0019fda0(),
                         rwCOMBINEREPLACE);

        if (RwCameraBeginUpdate(kwlnGetMainCamera()) != NULL)
        {
            if (uGpffffb3dc == 1)
            {
                setRenderState = &rwGlobals.device.setRenderState;
                (*setRenderState)(rwRENDERSTATEFOGENABLE, (void*)true);
                (*setRenderState)(rwRENDERSTATEFOGCOLOR,
                                  (void*)PACK_RWRGBA(gFogRed, gFogGreen, gFogBlue, gFogAlpha));
                (*setRenderState)(rwRENDERSTATEFOGTYPE, (void*)true);
            }

            while (modelFld != NULL)
            {
                if (modelFld->base.flags & SCENEDRAW_RESRC_FLAG_VISIBLE)
                {
                    if (func_001a7660(modelFld->mdl->unk_e0) == 1)
                    {
                        func_00317a20(modelFld->mdl);
                        if (SCENEDRAW_RESRC_PTR(modelFld, Model, 0x12c) != NULL &&
                            (modelFld->base.flags & SCENEDRAW_RESRC_FLAG_DRAW_BASE))
                        {
                            func_00317a20(SCENEDRAW_RESRC_PTR(modelFld, Model, 0x12c));
                        }
                    }
                }

                modelFld = (ResrcModelFld*)modelFld->base.next;
            }

            RwCameraEndUpdate(kwlnGetMainCamera());
        }
        else
        {
            K_Assert("k_sceneDraw.c", 0x151);
        }

        func_0049c3d0(kwlnGetWorld(uGpffffb3dc), func_00198580());
        func_004944b0(kwlnGetAmbientLight(), &ambientColor);
        func_004944b0(kwlnGetDirectionalLight(), &directionalColor);
        RwFrameTransform((RwFrame*)kwlnGetDirectionalLight()->object.object.parent,
                         &directionalMatrix,
                         rwCOMBINEREPLACE);
    return 0;
}

// FUN_0019de40
void* K_SceneDraw_UpdateDrwTrnsFldObjTask(KwlnTask* drwTrnsFldObjTask)
{
    if (gMtScene->fldMajorId < 200)
    {
        func_0019db10(drwTrnsFldObjTask);
    }

    return KWLNTASK_CONTINUE;
}
// FUN_0019de80
s32 func_0019de80(KwlnTask* task)
{
    ResrcModelFld* modelFld;
    ResrcFld* fld;
    RwRGBAReal ambientColor;
    RwRGBAReal directionalColor;
    RwMatrix directionalMatrix;
    RwRenderStateSetFunc* setRenderState;

    modelFld = (ResrcModelFld*)MT_Scene_GetResListHead(RESRC_TYPE_MODELFLD);
    fld = (ResrcFld*)MT_Scene_GetResListHead(RESRC_TYPE_FLD);
    ambientColor = kwlnGetAmbientLight()->color;
    directionalColor = kwlnGetDirectionalLight()->color;
    directionalMatrix = ((RwFrame*)kwlnGetDirectionalLight()->object.object.parent)->modelling;

    if (fld == NULL)
    {
        return 0;
    }
        func_0049c480(kwlnGetWorld(uGpffffb3dc), func_00198580());
        func_004944b0(kwlnGetAmbientLight(), K_Scene_GetFldAmbLightColor());
        func_004944b0(kwlnGetDirectionalLight(), (const RwRGBAReal*)func_0019fd70());
        RwFrameTransform((RwFrame*)kwlnGetDirectionalLight()->object.object.parent,
                         (const RwMatrix*)func_0019fda0(),
                         rwCOMBINEREPLACE);

        if (RwCameraBeginUpdate(kwlnGetMainCamera()) != NULL)
        {
            if (uGpffffb3dc == 1)
            {
                setRenderState = &rwGlobals.device.setRenderState;
                (*setRenderState)(rwRENDERSTATEFOGENABLE, (void*)true);
                (*setRenderState)(rwRENDERSTATEFOGCOLOR,
                                  (void*)PACK_RWRGBA(gFogRed, gFogGreen, gFogBlue, gFogAlpha));
                (*setRenderState)(rwRENDERSTATEFOGTYPE, (void*)true);
            }

            while (modelFld != NULL)
            {
                if (modelFld->base.flags & SCENEDRAW_RESRC_FLAG_VISIBLE)
                {
                    if (func_001a76e0(modelFld->mdl->unk_e0) == 1)
                    {
                        func_00317a20(modelFld->mdl);
                        if (SCENEDRAW_RESRC_PTR(modelFld, Model, 0x12c) != NULL &&
                            (modelFld->base.flags & SCENEDRAW_RESRC_FLAG_DRAW_BASE))
                        {
                            func_00317a20(SCENEDRAW_RESRC_PTR(modelFld, Model, 0x12c));
                        }
                    }
                }

                modelFld = (ResrcModelFld*)modelFld->base.next;
            }

            RwCameraEndUpdate(kwlnGetMainCamera());
        }
        else
        {
            K_Assert("k_sceneDraw.c", 0x198);
        }

        func_0049c3d0(kwlnGetWorld(uGpffffb3dc), func_00198580());
        func_004944b0(kwlnGetAmbientLight(), &ambientColor);
        func_004944b0(kwlnGetDirectionalLight(), &directionalColor);
        RwFrameTransform((RwFrame*)kwlnGetDirectionalLight()->object.object.parent,
                         &directionalMatrix,
                         rwCOMBINEREPLACE);

    return 0;
}
// FUN_0019e1b0
void* K_SceneDraw_UpdateDrwTrnsFldObjPCTask(KwlnTask* drwTrnsFldObjPCTask)
{
    if (gMtScene->fldMajorId < 200)
    {
        func_0019de80(drwTrnsFldObjPCTask);
    }

    return KWLNTASK_CONTINUE;
}

// FUN_0019e1f0
s32 func_0019e1f0(const void* charPtr1, const void* charPtr2)
{
    RwFrame* cameraFrame;
    const ResrcModelChar* char1;
    const ResrcModelChar* char2;
    RwV3d diffToCam1;
    RwV3d diffToCam2;
    RwV3d cameraPos;

    cameraFrame = (RwFrame*)kwlnGetMainCamera()->object.object.parent;
    cameraPos = RwFrameGetLTM(cameraFrame)->pos;

    char1 = *(const ResrcModelChar**)charPtr1;
    char2 = *(const ResrcModelChar**)charPtr2;

    diffToCam1.x = mdlGetMatrix(char1->mdl)->pos.x - cameraPos.x;
    diffToCam1.y = mdlGetMatrix(char1->mdl)->pos.y - cameraPos.y;
    diffToCam1.z = mdlGetMatrix(char1->mdl)->pos.z - cameraPos.z;

    diffToCam2.x = mdlGetMatrix(char2->mdl)->pos.x - cameraPos.x;
    diffToCam2.y = mdlGetMatrix(char2->mdl)->pos.y - cameraPos.y;
    diffToCam2.z = mdlGetMatrix(char2->mdl)->pos.z - cameraPos.z;

    return (s32)(RwV3dLength(&diffToCam1) - RwV3dLength(&diffToCam2));
}

#pragma push
/* Removing this worsens K_SceneDraw_UpdateDrwChrMdlTask (nd1774 -> nd1777) - measured W161. */
#pragma opt_common_subs on
// FUN_0019e330
asm void* K_SceneDraw_UpdateDrwChrMdlTask(KwlnTask* drwChrMdlTask)
{
  .set noreorder
  .word 0x27bdfdb0
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x24040001
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040a02d
  .word 0x24040003
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040882d
  .word 0x24040002
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040802d
  .word 0x24040005
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040902d
  .word 0x24040004
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040b02d
  .word 0x0c066158
  .word 0x00000000
  .word 0xc4430018
  .word 0xc442001c
  .word 0xc4410020
  .word 0xc4400024
  .word 0xe7a30230
  .word 0xe7a20234
  .word 0xe7a10238
  .word 0xe7a0023c
  .word 0x0c06615c
  .word 0x00000000
  .word 0xc4430018
  .word 0xc442001c
  .word 0xc4410020
  .word 0xc4400024
  .word 0xe7a30220
  .word 0xe7a20224
  .word 0xe7a10228
  .word 0xe7a0022c
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8c420004
  .word 0x24460010
  .word 0x27a501e0
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
  .word 0x0c066160
  .word 0x00000000
  .word 0xc4430018
  .word 0xc442001c
  .word 0xc4410020
  .word 0xc4400024
  .word 0xe7a301d0
  .word 0xe7a201d4
  .word 0xe7a101d8
  .word 0xe7a001dc
  .word 0x0c066160
  .word 0x00000000
  .word 0x8c420004
  .word 0x24460010
  .word 0x27a50190
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
  .word 0x27a40090
  .word 0x0000282d
  .word 0x24060100
  .word 0x0c148502
  .word 0x00000000
  .word 0x0000982d
  .word 0x1000000e
  .word 0x00000000
  .word 0x2e620040
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848988
  .word 0x240501d7
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00131080
  .word 0x005d1021
  .word 0xac540090
  .word 0x8e9400f8
  .word 0x26730001
  .word 0x1680fff2
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430018
  .word 0x24020001
  .word 0x14620008
  .word 0x00000000
  .word 0x27a40090
  .word 0x0260282d
  .word 0x24060004
  .word 0x3c07001a
  .word 0x24e7e1f0
  .word 0x0c14897e
  .word 0x00000000
  .word 0x2675ffff
  .word 0x100000c0
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x0040202d
  .word 0x26c50100
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x0040202d
  .word 0x26c50110
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x8c440004
  .word 0x26c50120
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x00151080
  .word 0x005d1021
  .word 0x24530090
  .word 0x8e740000
  .word 0x8e830028
  .word 0x3c028000
  .word 0x00621024
  .word 0x10400027
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x0040202d
  .word 0x2685012c
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x8e630000
  .word 0x0040202d
  .word 0x2465013c
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e630000
  .word 0x0040202d
  .word 0x24650190
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x8e630000
  .word 0x8c440004
  .word 0x24650150
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e630000
  .word 0x8c440004
  .word 0x246501a0
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0x3c024000
  .word 0x00621024
  .word 0x10400011
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0040202d
  .word 0x26850190
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e630000
  .word 0x8c440004
  .word 0x246501a0
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0040202d
  .word 0x26c50160
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8c440004
  .word 0x26c50170
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x8e620000
  .word 0x8c420028
  .word 0x30420002
  .word 0x10400057
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x1040004b
  .word 0x00000000
  .word 0x00151080
  .word 0x005d1021
  .word 0x24540090
  .word 0x8e820000
  .word 0x8c440128
  .word 0x0c0c5e88
  .word 0x00000000
  .word 0x8e820000
  .word 0x8c4401e8
  .word 0x10800008
  .word 0x00000000
  .word 0x8c430028
  .word 0x3c022000
  .word 0x00621024
  .word 0x10400003
  .word 0x00000000
  .word 0x0c0c5e88
  .word 0x00000000
  .word 0x0000a02d
  .word 0x1000002c
  .word 0x00000000
  .word 0x8e630000
  .word 0x00141080
  .word 0x00621021
  .word 0x8c420100
  .word 0x10400025
  .word 0x00000000
  .word 0x8c640128
  .word 0x24050002
  .word 0x27a60240
  .word 0x0c0c63b4
  .word 0x00000000
  .word 0x14400011
  .word 0x00000000
  .word 0x8e620000
  .word 0x8c440128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20240
  .word 0xe7a10244
  .word 0xe7a00248
  .word 0xc7a10244
  .word 0x3c02432f
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00244
  .word 0x0014b880
  .word 0x8e620000
  .word 0x00571021
  .word 0x8c440100
  .word 0x27a50240
  .word 0x0c0d3f7c
  .word 0x00000000
  .word 0x8e620000
  .word 0x00571021
  .word 0x8c440100
  .word 0x24050005
  .word 0x0c0d3f5c
  .word 0x00000000
  .word 0x26940001
  .word 0x2a820003
  .word 0x1440ffd3
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848988
  .word 0x24050225
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x26b5ffff
  .word 0x06a1ff40
  .word 0x00000000
  .word 0x12200085
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x0040202d
  .word 0x26450100
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x0040202d
  .word 0x26450110
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0040202d
  .word 0x26450160
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x8c440004
  .word 0x26450120
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8c440004
  .word 0x26450170
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x10400059
  .word 0x00000000
  .word 0x1000004e
  .word 0x00000000
  .word 0x8e240128
  .word 0x0c0c62c0
  .word 0x00000000
  .word 0x90420003
  .word 0x284100ff
  .word 0x10200004
  .word 0x00000000
  .word 0x8e3100f8
  .word 0x10000044
  .word 0x00000000
  .word 0x8e230028
  .word 0x3c028000
  .word 0x00621024
  .word 0x1440003e
  .word 0x00000000
  .word 0x30620002
  .word 0x1040003b
  .word 0x00000000
  .word 0x8e240128
  .word 0x0c0c5e88
  .word 0x00000000
  .word 0x8e2401ec
  .word 0x10800008
  .word 0x00000000
  .word 0x8e230028
  .word 0x3c022000
  .word 0x00621024
  .word 0x10400003
  .word 0x00000000
  .word 0x0c0c5e88
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000028
  .word 0x00000000
  .word 0x00121080
  .word 0x02221021
  .word 0x8c420100
  .word 0x10400022
  .word 0x00000000
  .word 0x8e240128
  .word 0x24050002
  .word 0x27a60240
  .word 0x0c0c63b4
  .word 0x00000000
  .word 0x14400010
  .word 0x00000000
  .word 0x8e240128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20240
  .word 0xe7a10244
  .word 0xe7a00248
  .word 0xc7a10244
  .word 0x3c02432f
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00244
  .word 0x00121080
  .word 0x02221021
  .word 0x24530100
  .word 0x8c440100
  .word 0x27a50240
  .word 0x0c0d3f7c
  .word 0x00000000
  .word 0x8e640000
  .word 0x24050005
  .word 0x0c0d3f5c
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420003
  .word 0x1440ffd7
  .word 0x00000000
  .word 0x8e3100f8
  .word 0x1620ffb2
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848988
  .word 0x24050262
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040902d
  .word 0x10000081
  .word 0x00000000
  .word 0x8e440128
  .word 0x0c0c62c0
  .word 0x00000000
  .word 0x90420003
  .word 0x284100ff
  .word 0x10200004
  .word 0x00000000
  .word 0x8e5200f8
  .word 0x10000077
  .word 0x00000000
  .word 0x8e430028
  .word 0x3c028000
  .word 0x00621024
  .word 0x10400071
  .word 0x00000000
  .word 0x30620002
  .word 0x1040006e
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x0040202d
  .word 0x2645012c
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x0040202d
  .word 0x2645013c
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0040202d
  .word 0x26450190
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x8c440004
  .word 0x26450150
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8c440004
  .word 0x264501a0
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x10400042
  .word 0x00000000
  .word 0x8e440128
  .word 0x0c0c5e88
  .word 0x00000000
  .word 0x8e4401ec
  .word 0x10800008
  .word 0x00000000
  .word 0x8e430028
  .word 0x3c022000
  .word 0x00621024
  .word 0x10400003
  .word 0x00000000
  .word 0x0c0c5e88
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000028
  .word 0x00000000
  .word 0x00111080
  .word 0x02421021
  .word 0x8c420100
  .word 0x10400022
  .word 0x00000000
  .word 0x8e440128
  .word 0x24050002
  .word 0x27a60240
  .word 0x0c0c63b4
  .word 0x00000000
  .word 0x14400010
  .word 0x00000000
  .word 0x8e440128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20240
  .word 0xe7a10244
  .word 0xe7a00248
  .word 0xc7a10244
  .word 0x3c02432f
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00244
  .word 0x00111080
  .word 0x02421021
  .word 0x24530100
  .word 0x8c440100
  .word 0x27a50240
  .word 0x0c0d3f7c
  .word 0x00000000
  .word 0x8e640000
  .word 0x24050005
  .word 0x0c0d3f5c
  .word 0x00000000
  .word 0x26310001
  .word 0x2a220003
  .word 0x1440ffd7
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848988
  .word 0x24050299
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e5200f8
  .word 0x1640ff7f
  .word 0x00000000
  .word 0x10000044
  .word 0x00000000
  .word 0x8e030028
  .word 0x30620002
  .word 0x1040003f
  .word 0x00000000
  .word 0x3c020001
  .word 0x00621024
  .word 0x1040003b
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x0040202d
  .word 0x2605011c
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x0040202d
  .word 0x2605012c
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0040202d
  .word 0x26050180
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x8c440004
  .word 0x26050140
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8c440004
  .word 0x26050190
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x1040000f
  .word 0x00000000
  .word 0x8e040118
  .word 0x24050003
  .word 0x0c0c648c
  .word 0x00000000
  .word 0x8e040118
  .word 0x0c0c5e88
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848988
  .word 0x240502b7
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e1000f8
  .word 0x1600ffbc
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a50230
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a501d0
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a50220
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x8c440004
  .word 0x27a50190
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8c440004
  .word 0x27a501e0
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0250
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
/* Closes the `#pragma push` / `opt_common_subs on` opened above
 * K_SceneDraw_UpdateDrwChrMdlTask.  Measured W418: closing here is metric-neutral
 * for every other function in this file, while leaving the scope open let the knob
 * govern the remaining 2603 lines of the translation unit. */
#pragma pop

// FUN_0019ee40
s32 K_SceneDraw_CompareNpcDistToCamera(const void* npcPtr1, const void* npcPtr2)
{
    RwFrame* camFrame;
    const ResrcModelNpc* npc1;
    const ResrcModelNpc* npc2;
    RwV3d diffToCam1;
    RwV3d diffToCam2;
    RwV3d camPos;

    camFrame = (RwFrame*)kwlnGetMainCamera()->object.object.parent;
    camPos = RwFrameGetLTM(camFrame)->pos;

    npc1 = *(const ResrcModelNpc**)npcPtr1;
    npc2 = *(const ResrcModelNpc**)npcPtr2;

    diffToCam1.x = mdlGetMatrix(npc1->mdl)->pos.x - camPos.x;
    diffToCam1.y = mdlGetMatrix(npc1->mdl)->pos.y - camPos.y;
    diffToCam1.z = mdlGetMatrix(npc1->mdl)->pos.z - camPos.z;

    diffToCam2.x = mdlGetMatrix(npc2->mdl)->pos.x - camPos.x;
    diffToCam2.y = mdlGetMatrix(npc2->mdl)->pos.y - camPos.y;
    diffToCam2.z = mdlGetMatrix(npc2->mdl)->pos.z - camPos.z;

    return (s32)(RwV3dLength(&diffToCam1) - RwV3dLength(&diffToCam2));
}

// W415 census negative: direct R_MIPS_26 calls are 50/50 with retail after resolving RwFrameTransform to 0x004cb7f0; the SDK symbol remains unmappable, so no call edit is justified.
// FUN_0019ef80
asm void* K_SceneDraw_UpdateDrwTrnsNpcSrtTask(KwlnTask* drwTrnsNpcSrtTask)
{
  .set noreorder
  .word 0x27bdfde0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x24040003
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040882d
  .word 0x24040005
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040982d
  .word 0x0c066158
  .word 0x00000000
  .word 0xc4430018
  .word 0xc442001c
  .word 0xc4410020
  .word 0xc4400024
  .word 0xe7a30200
  .word 0xe7a20204
  .word 0xe7a10208
  .word 0xe7a0020c
  .word 0x0c06615c
  .word 0x00000000
  .word 0xc4430018
  .word 0xc442001c
  .word 0xc4410020
  .word 0xc4400024
  .word 0xe7a301f0
  .word 0xe7a201f4
  .word 0xe7a101f8
  .word 0xe7a001fc
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8c420004
  .word 0x24460010
  .word 0x27a501b0
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
  .word 0x0c066160
  .word 0x00000000
  .word 0xc4430018
  .word 0xc442001c
  .word 0xc4410020
  .word 0xc4400024
  .word 0xe7a301a0
  .word 0xe7a201a4
  .word 0xe7a101a8
  .word 0xe7a001ac
  .word 0x0c066160
  .word 0x00000000
  .word 0x8c420004
  .word 0x24460010
  .word 0x27a50160
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
  .word 0x27a40060
  .word 0x0000282d
  .word 0x24060100
  .word 0x0c148502
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000d
  .word 0x00000000
  .word 0x8e240128
  .word 0x0c0c62c0
  .word 0x00000000
  .word 0x90420003
  .word 0x284100ff
  .word 0x10200005
  .word 0x00000000
  .word 0x00101080
  .word 0x005d1021
  .word 0xac510060
  .word 0x26100001
  .word 0x8e3100f8
  .word 0x1620fff3
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c43001c
  .word 0x24020001
  .word 0x14620008
  .word 0x00000000
  .word 0x27a40060
  .word 0x0200282d
  .word 0x24060004
  .word 0x3c07001a
  .word 0x24e7ee40
  .word 0x0c14897e
  .word 0x00000000
  .word 0x2610ffff
  .word 0x1000009f
  .word 0x00000000
  .word 0x00101080
  .word 0x005d1021
  .word 0x24520060
  .word 0x8e510000
  .word 0x8e230028
  .word 0x30620002
  .word 0x10400096
  .word 0x00000000
  .word 0x3c028000
  .word 0x00621024
  .word 0x10400027
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x0040202d
  .word 0x2625012c
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x8e430000
  .word 0x0040202d
  .word 0x2465013c
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e430000
  .word 0x0040202d
  .word 0x24650190
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x8e430000
  .word 0x8c440004
  .word 0x24650150
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8e430000
  .word 0x8c440004
  .word 0x246501a0
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x10000021
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x0040202d
  .word 0x26650100
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x0040202d
  .word 0x26650110
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0040202d
  .word 0x26650160
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x8c440004
  .word 0x26650120
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8c440004
  .word 0x26650170
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x10400040
  .word 0x00000000
  .word 0x00101080
  .word 0x005d1021
  .word 0x24520060
  .word 0x8e420000
  .word 0x8c440128
  .word 0x0c0c5e88
  .word 0x00000000
  .word 0x0000a02d
  .word 0x1000002c
  .word 0x00000000
  .word 0x8e430000
  .word 0x00141080
  .word 0x00621021
  .word 0x8c420100
  .word 0x10400025
  .word 0x00000000
  .word 0x8c640128
  .word 0x24050002
  .word 0x27a60210
  .word 0x0c0c63b4
  .word 0x00000000
  .word 0x14400011
  .word 0x00000000
  .word 0x8e420000
  .word 0x8c440128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20210
  .word 0xe7a10214
  .word 0xe7a00218
  .word 0xc7a10214
  .word 0x3c02432f
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00214
  .word 0x00148880
  .word 0x8e420000
  .word 0x00511021
  .word 0x8c440100
  .word 0x27a50210
  .word 0x0c0d3f7c
  .word 0x00000000
  .word 0x8e420000
  .word 0x00511021
  .word 0x8c440100
  .word 0x24050005
  .word 0x0c0d3f5c
  .word 0x00000000
  .word 0x26940001
  .word 0x2a820003
  .word 0x1440ffd3
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24848988
  .word 0x24050335
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2610ffff
  .word 0x0601ff61
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a50200
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a501a0
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a501f0
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x8c440004
  .word 0x27a50160
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8c440004
  .word 0x27a501b0
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0220
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0019f470
void* K_SceneDraw_UpdateDrwPrsnaMdlTask(KwlnTask* drwPrsnaMdlTask)
{
    Resrc* modelUnk;
    RwRGBAReal ambientColor;
    RwRGBAReal directionalColor;
    RwMatrix directionalMatrix;
    RwRGBAReal secondaryDirectionalColor;
    RwMatrix secondaryDirectionalMatrix;
    u32 flags;

    modelUnk = MT_Scene_GetResListHead(RESRC_TYPE_MODELUNK);
    ambientColor = kwlnGetAmbientLight()->color;
    directionalColor = kwlnGetDirectionalLight()->color;
    directionalMatrix = ((RwFrame*)kwlnGetDirectionalLight()->object.object.parent)->modelling;
    secondaryDirectionalColor = func_00198580()->color;
    secondaryDirectionalMatrix = ((RwFrame*)func_00198580()->object.object.parent)->modelling;

    while (modelUnk != NULL)
    {
        flags = modelUnk->flags;
        if ((flags & SCENEDRAW_RESRC_FLAG_VISIBLE) &&
            !(flags & SCENEDRAW_RESRC_FLAG_PERSONA))
        {
            func_004944b0(kwlnGetAmbientLight(), SCENEDRAW_RESRC_COLOR(modelUnk, 0x11c));
            func_004944b0(func_00198580(), SCENEDRAW_RESRC_COLOR(modelUnk, 0x12c));
            func_004944b0(kwlnGetDirectionalLight(), SCENEDRAW_RESRC_COLOR(modelUnk, 0x180));
            RwFrameTransform((RwFrame*)func_00198580()->object.object.parent,
                             SCENEDRAW_RESRC_MATRIX(modelUnk, 0x140),
                             rwCOMBINEREPLACE);
            RwFrameTransform((RwFrame*)kwlnGetDirectionalLight()->object.object.parent,
                             SCENEDRAW_RESRC_MATRIX(modelUnk, 0x190),
                             rwCOMBINEREPLACE);

            if (RwCameraBeginUpdate(kwlnGetMainCamera()) != NULL)
            {
                func_00319230(*(Model**)((u32*)modelUnk + 70), 3);
                func_00317a20(*(Model**)((s32)modelUnk + 0x118));
                RwCameraEndUpdate(kwlnGetMainCamera());
            }
            else
            {
                K_Assert("k_sceneDraw.c", 0x36b);
            }
        }

        modelUnk = modelUnk->next;
    }

    func_004944b0(kwlnGetAmbientLight(), &ambientColor);
    func_004944b0(func_00198580(), &secondaryDirectionalColor);
    func_004944b0(kwlnGetDirectionalLight(), &directionalColor);
    RwFrameTransform((RwFrame*)func_00198580()->object.object.parent,
                     &secondaryDirectionalMatrix,
                     rwCOMBINEREPLACE);
    RwFrameTransform((RwFrame*)kwlnGetDirectionalLight()->object.object.parent,
                     &directionalMatrix,
                     rwCOMBINEREPLACE);

    return KWLNTASK_CONTINUE;
}

// FUN_0019f730
KwlnTask* K_SceneDraw_CreateTasks(KwlnTask* rootProcTask)
{
    KwlnTask* sceneDrawTask;

    sceneDrawTask = kwlnTaskCreateWithAutoPriority(rootProcTask, 10, "scene draw CTL", NULL, NULL, NULL);

    FldShadow_CreateShadowMapTask(sceneDrawTask);
    kwlnTaskCreate(sceneDrawTask, "draw opac field", 2070, K_SceneDraw_UpdateDrwOpcFldTask, NULL, NULL);
    kwlnTaskCreate(sceneDrawTask, "draw opac field object", 2071, K_SceneDraw_UpdateDrwOpcFldObjTask, NULL, NULL);
    kwlnTaskCreate(sceneDrawTask, "draw character model", 2084, K_SceneDraw_UpdateDrwChrMdlTask, NULL, NULL);
    kwlnTaskCreate(sceneDrawTask, "draw trans field obj preChar", 2095, K_SceneDraw_UpdateDrwTrnsFldObjPCTask, NULL, NULL);
    kwlnTaskCreate(sceneDrawTask, "draw persona model", 4168, K_SceneDraw_UpdateDrwPrsnaMdlTask, NULL, NULL);
    kwlnTaskCreate(sceneDrawTask, "draw trans field object", 4172, K_SceneDraw_UpdateDrwTrnsFldObjTask, NULL, NULL);
    kwlnTaskCreate(sceneDrawTask, "draw trans field", 4173, K_SceneDraw_UpdateDrwTrnsFldTask, NULL, NULL);
    kwlnTaskCreate(sceneDrawTask, "draw trans field(sort)", 4183, K_SceneDraw_UpdateDrwTrnsFldSrtTask, NULL, NULL);
    kwlnTaskCreate(sceneDrawTask, "draw trans NPC(sort)", 4183, K_SceneDraw_UpdateDrwTrnsNpcSrtTask, NULL, NULL);

    return sceneDrawTask;
}

// FUN_0019f8f0
void func_0019f8f0(const RwRGBAReal* color)
{
    ResrcFld* fld;
    RwRGBA clearColor;
    u32 fogColor;
    s32 clearRed;
    s32 clearGreen;
    s32 clearBlue;
    s32 clearAlpha;
    s32 fogRed;
    s32 fogGreen;
    s32 fogBlue;
    s32 fogAlpha;

    fld = (ResrcFld*)MT_Scene_GetResListHead(RESRC_TYPE_FLD);
    while (fld != NULL)
    {
        func_001b56f0(fld->unk_160, color);
        fld = (ResrcFld*)fld->base.next;
    }

    if ((color->r <= 0.0f && color->g <= 0.0f && color->b <= 0.0f) || color->a <= 0.0f)
    {
        func_001a0040(0, 1);
    }
    else
    {
        func_001a0040(1, 1);
    }

    clearColor = *func_001985d0();
    fogColor = ((u32)DAT_007ce0f4 << 24) |
               ((u32)DAT_007ce0e8 << 16) |
               ((u32)DAT_007ce0ec << 8) |
               (u32)DAT_007ce0f0;

    clearRed = (s32)((f32)clearColor.r * color->r);
    clearGreen = (s32)((f32)clearColor.g * color->g);
    clearBlue = (s32)((f32)clearColor.b * color->b);
    clearAlpha = (s32)((f32)clearColor.a * color->a);

    if ((u32)clearAlpha > 0xff) clearAlpha = 0xff;
    if ((u32)clearBlue > 0xff) clearBlue = 0xff;
    if ((u32)clearGreen > 0xff) clearGreen = 0xff;
    if ((u32)clearRed > 0xff) clearRed = 0xff;
    kwlnSetClearColor((u8)clearRed, (u8)clearGreen, (u8)clearBlue, (u8)clearAlpha);

    fogRed = (s32)((f32)((fogColor >> 16) & 0xff) * color->r);
    fogGreen = (s32)((f32)((fogColor >> 8) & 0xff) * color->g);
    fogBlue = (s32)((f32)(fogColor & 0xff) * color->b);
    fogAlpha = (s32)((f32)((fogColor >> 24) & 0xff) * color->a);

    if ((u32)fogRed > 0xff) fogRed = 0xff;
    gFogRed = (u8)fogRed;
    if ((u32)fogGreen > 0xff) fogGreen = 0xff;
    gFogGreen = (u8)fogGreen;
    if ((u32)fogBlue > 0xff) fogBlue = 0xff;
    gFogBlue = (u8)fogBlue;
    if ((u32)fogAlpha > 0xff) fogAlpha = 0xff;
    gFogAlpha = (u8)fogAlpha;
}

// FUN_0019fd40
RwRGBAReal* K_Scene_GetFldAmbLightColor()
{
    ResrcFld* res;

    res = (ResrcFld*)MT_Scene_GetResListHead(RESRC_TYPE_FLD);
    return &res->ambLightColor;
}

// FUN_0019fd70
RwRGBAReal* func_0019fd70()
{
    ResrcFld* res;

    res = (ResrcFld*)MT_Scene_GetResListHead(RESRC_TYPE_FLD);
    return &res->dirLightColor;
}

// FUN_0019fda0
RwMatrix* func_0019fda0()
{
    ResrcFld* res;

    res = (ResrcFld*)MT_Scene_GetResListHead(RESRC_TYPE_FLD);
    return &res->dirLightMat;
}

// FUN_0019fdd0
void func_0019fdd0(const void* position)
{
    MT_Scene_GetResListHead(RESRC_TYPE_FLD);
    func_001b5950(gMtScene->fldFilterTask, position);
}
// FUN_0019fe20
void func_0019fe20(const void* position)
{
    MT_Scene_GetResListHead(RESRC_TYPE_FLD);
    func_001b5990(gMtScene->fldFilterTask, position);
}

// FUN_0019fe70
void func_0019fe70(const void* position)
{
    MT_Scene_GetResListHead(RESRC_TYPE_FLD);
    func_001b59c0(gMtScene->fldFilterTask, position);
}

// FUN_0019fec0
void func_0019fec0(const void* position)
{
    MT_Scene_GetResListHead(RESRC_TYPE_FLD);
    func_001b5a00(gMtScene->fldFilterTask, position);
}

// FUN_0019ff10
void func_0019ff10()
{
    Resrc* res;
    RwRGBAReal* ambientColor;
    RwRGBAReal* directionalColor;
    RwMatrix* directionalMatrix;
    f32 ambientValue;
    f32 directionalValue;
    RwV3d axis;
    res = MT_Scene_GetResListHead(RESRC_TYPE_FLD);
    ambientColor = (RwRGBAReal*)((u8*)res + 0x100);
    res = MT_Scene_GetResListHead(RESRC_TYPE_FLD);
    directionalColor = (RwRGBAReal*)((u8*)res + 0x110);
    res = MT_Scene_GetResListHead(RESRC_TYPE_FLD);
    directionalMatrix = (RwMatrix*)((u8*)res + 0x120);
    ambientValue = fGpffff80e0;
    directionalValue = 0.5f;

    ambientColor->r = ambientValue;
    ambientColor->g = ambientValue;
    ambientColor->b = ambientValue;
    ambientColor->a = 0.0f;
    directionalColor->r = directionalValue;
    directionalColor->g = directionalValue;
    directionalColor->b = directionalValue;
    directionalColor->a = 0.0f;
    RwMatrixSetIdentity(directionalMatrix);

    axis.x = 0.0f;
    axis.y = 1.0f;
    axis.z = 0.0f;
    func_004c31b0(-180.0f, directionalMatrix, &axis, rwCOMBINEPOSTCONCAT);
    axis.x = 1.0f;
    axis.y = 0.0f;
    axis.z = 0.0f;
    func_004c31b0(-45.0f, directionalMatrix, &axis, rwCOMBINEPOSTCONCAT);
}

// FUN_001a0040
#ifndef PC_BUILD
asm void func_001a0040(u32 visible, u32 updateField)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x2404000c
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040902d
  .word 0x2404000a
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040882d
  .word 0x10000014
  .word 0x00000000
  .word 0x24100001
  .word 0x16900009
  .word 0x00000000
  .word 0x8e420028
  .word 0x34420002
  .word 0xae420028
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac400034
  .word 0x10000008
  .word 0x00000000
  .word 0x8e430028
  .word 0x2402fffd
  .word 0x00621024
  .word 0xae420028
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac500034
  .word 0x8e5200f8
  .word 0x1640ffec
  .word 0x00000000
  .word 0x24050001
  .word 0x16650011
  .word 0x00000000
  .word 0x2404fffd
  .word 0x1000000c
  .word 0x00000000
  .word 0x16850006
  .word 0x00000000
  .word 0x8e230028
  .word 0x34630002
  .word 0xae230028
  .word 0x10000004
  .word 0x00000000
  .word 0x8e230028
  .word 0x00641824
  .word 0xae230028
  .word 0x8e3100f8
  .word 0x1620fff4
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001a0150
void func_001a0150(u16 resTypeId, u32 visible)
{
    Resrc* res;

    res = MT_Scene_GetRes(resTypeId);
    if (res != NULL)
    {
        if (visible == 1)
        {
            res->flags |= SCENEDRAW_RESRC_FLAG_VISIBLE;
        }
        else
        {
            res->flags &= ~SCENEDRAW_RESRC_FLAG_VISIBLE;
        }
    }
}

// FUN_001a01c0
u32 func_001a01c0()
{
    if (K_Scene_001a0250() == 1)
    {
        return true;
    }
    if (func_001a02c0() == 1)
    {
        return true;
    }
    if (gMtScene->fldMajorId >= 30 && gMtScene->fldMajorId <= 38)
    {
        return true;
    }
    return false;
}

// FUN_001a0250
u32 K_Scene_001a0250()
{
    s32 fldMajor;

    fldMajor = gMtScene->fldMajorId;

    if ((fldMajor >= 21 && fldMajor <= 28 && gMtScene->fldMinorId == 0) ||
        (fldMajor >= 41 && fldMajor <= 48 && gMtScene->fldMinorId == 0))
    {
        return true;
    }

    return false;
}

// FUN_001a02c0
u32 func_001a02c0()
{
    s32 fldMajor;

    fldMajor = gMtScene->fldMajorId;
    if ((fldMajor >= 51 && fldMajor <= 58) || (fldMajor >= 71 && fldMajor <= 78))
    {
        return true;
    }

    return false;
}

// FUN_001a0310
u32 func_001a0310()
{
    if ((gMtScene->fldMajorId == 8 && gMtScene->fldMinorId == 3) ||
        (gMtScene->fldMajorId == 32 && gMtScene->fldMinorId == 2) ||
        (gMtScene->fldMajorId == 26 && gMtScene->fldMinorId == 51) ||
        (gMtScene->fldMajorId == 26 && gMtScene->fldMinorId == 52) ||
        (gMtScene->fldMajorId == 26 && gMtScene->fldMinorId == 53) ||
        (gMtScene->fldMajorId == 37 && gMtScene->fldMinorId == 1) ||
        (gMtScene->fldMajorId == 35 && gMtScene->fldMinorId == 1) ||
        gMtScene->fldMajorId == 4 ||
        gMtScene->fldMajorId == 5)
    {
        return true;
    }

    return false;
}

// FUN_001a0410
void K_Scene_SetShouldSortChars(u32 shouldSortChars)
{
    gMtScene->shouldSortChars = shouldSortChars;
}

// FUN_001a0420
void K_Scene_SetShouldSortNpcs(u32 shouldSortNpcs)
{
    gMtScene->shouldSortNpcs = shouldSortNpcs;
}

// FUN_001a0430
void func_001a0430(u16 resTypeId, u32 customLight)
{
    Resrc* res;
    u32 type;

    type = RESRC_GET_TYPE(resTypeId);
    if (type == RESRC_TYPE_MODELCHAR)
    {
        res = resrcMngGetRes(gMtScene->resManager, resTypeId);
        if (res == NULL) return;
        if (customLight == 1)
        {
            res->flags |= SCENEDRAW_RESRC_FLAG_CUSTOM_LIGHT;
            return;
        }
        else
        {
            res->flags &= ~SCENEDRAW_RESRC_FLAG_CUSTOM_LIGHT;
            return;
        }
    }
    if (type == RESRC_TYPE_MODELNPC)
    {
        res = resrcMngGetRes(gMtScene->resManager, resTypeId);
        if (res == NULL) return;
        if (customLight == 1)
        {
            res->flags |= SCENEDRAW_RESRC_FLAG_CUSTOM_LIGHT;
            return;
        }
        else
        {
            res->flags &= ~SCENEDRAW_RESRC_FLAG_CUSTOM_LIGHT;
            return;
        }
    }
    if (type == RESRC_TYPE_MODELUNK)
    {
        res = resrcMngGetRes(gMtScene->resManager, resTypeId);
        if (res == NULL) return;
        if (customLight == 1) res->flags |= SCENEDRAW_RESRC_FLAG_CUSTOM_LIGHT;
        else res->flags &= ~SCENEDRAW_RESRC_FLAG_CUSTOM_LIGHT;
    }
}
// FUN_001a0590
void func_001a0590(u16 resTypeId, u32 directionalOnly)
{
    Resrc* res;
    u32 type;

    type = RESRC_GET_TYPE(resTypeId);
    if (type == RESRC_TYPE_MODELCHAR)
    {
        res = resrcMngGetRes(gMtScene->resManager, resTypeId);
        if (res == NULL) return;
        if (directionalOnly == 1)
        {
            res->flags |= SCENEDRAW_RESRC_FLAG_DIRECTIONAL_ONLY;
            return;
        }
        else
        {
            res->flags &= ~SCENEDRAW_RESRC_FLAG_DIRECTIONAL_ONLY;
            return;
        }
    }
    if (type == RESRC_TYPE_MODELNPC)
    {
        res = resrcMngGetRes(gMtScene->resManager, resTypeId);
        if (res == NULL) return;
        if (directionalOnly == 1)
        {
            res->flags |= SCENEDRAW_RESRC_FLAG_DIRECTIONAL_ONLY;
            return;
        }
        else
        {
            res->flags &= ~SCENEDRAW_RESRC_FLAG_DIRECTIONAL_ONLY;
            return;
        }
    }
    if (type == RESRC_TYPE_MODELUNK)
    {
        res = resrcMngGetRes(gMtScene->resManager, resTypeId);
        if (res == NULL) return;
        if (directionalOnly == 1) res->flags |= SCENEDRAW_RESRC_FLAG_DIRECTIONAL_ONLY;
        else res->flags &= ~SCENEDRAW_RESRC_FLAG_DIRECTIONAL_ONLY;
    }
}

// FUN_001a0700
void* func_001a0700(u16 resTypeId)
{
    Resrc* res;
    u32 type;

    type = RESRC_GET_TYPE(resTypeId);
    if (type == RESRC_TYPE_MODELCHAR)
    {
        res = resrcMngGetRes(gMtScene->resManager, resTypeId);
        return res == NULL ? NULL : (u8*)res + 0x12c;
    }
    if (type == RESRC_TYPE_MODELNPC)
    {
        res = resrcMngGetRes(gMtScene->resManager, resTypeId);
        return res == NULL ? NULL : (u8*)res + 0x12c;
    }
    if (type == RESRC_TYPE_MODELUNK)
    {
        res = resrcMngGetRes(gMtScene->resManager, resTypeId);
        return res == NULL ? NULL : (u8*)res + 0x11c;
    }
    return NULL;
}

// FUN_001a07f0
void* func_001a07f0(u16 resTypeId)
{
    Resrc* res;
    u32 type;

    type = RESRC_GET_TYPE(resTypeId);
    if (type == RESRC_TYPE_MODELCHAR)
    {
        res = resrcMngGetRes(gMtScene->resManager, resTypeId);
        return res == NULL ? NULL : (u8*)res + 0x190;
    }
    if (type == RESRC_TYPE_MODELNPC)
    {
        res = resrcMngGetRes(gMtScene->resManager, resTypeId);
        return res == NULL ? NULL : (u8*)res + 0x190;
    }
    if (type == RESRC_TYPE_MODELUNK)
    {
        res = resrcMngGetRes(gMtScene->resManager, resTypeId);
        return res == NULL ? NULL : (u8*)res + 0x180;
    }
    return NULL;
}

// FUN_001a08e0
void* func_001a08e0(u16 resTypeId)
{
    Resrc* res;
    u32 type;

    type = RESRC_GET_TYPE(resTypeId);
    if (type == RESRC_TYPE_MODELCHAR)
    {
        res = resrcMngGetRes(gMtScene->resManager, resTypeId);
        return res == NULL ? NULL : (u8*)res + 0x1a0;
    }
    if (type == RESRC_TYPE_MODELNPC)
    {
        res = resrcMngGetRes(gMtScene->resManager, resTypeId);
        return res == NULL ? NULL : (u8*)res + 0x1a0;
    }
    if (type == RESRC_TYPE_MODELUNK)
    {
        res = resrcMngGetRes(gMtScene->resManager, resTypeId);
        return res == NULL ? NULL : (u8*)res + 0x190;
    }
    return NULL;
}

// FUN_001a09d0
RwRGBAReal* func_001a09d0()
{
    ResrcLightChar* res;

    res = (ResrcLightChar*)MT_Scene_GetResListHead(RESRC_TYPE_LIGHTCHAR);
    if (res != NULL)
    {
        return (RwRGBAReal*)((u8*)res + 0x100);
    }
    return NULL;
}

// FUN_001a0a10
RwRGBAReal* K_Scene_GetCharAmbLightColor()
{
    ResrcLightChar* res;

    res = (ResrcLightChar*)MT_Scene_GetResListHead(RESRC_TYPE_LIGHTCHAR);
    if (res != NULL)
    {
        return &res->directionalColor;
    }

    return NULL;
}

// FUN_001a0a50
RwMatrix* func_001a0a50()
{
    ResrcLightChar* res;

    res = (ResrcLightChar*)MT_Scene_GetResListHead(RESRC_TYPE_LIGHTCHAR);
    if (res != NULL)
    {
        return (RwMatrix*)((u8*)res + 0x120);
    }
    return NULL;
}

// FUN_001a0a90
void K_Scene_InitCharLight()
{
    RwRGBAReal* ambientColor;
    RwRGBAReal* directionalColor;
    RwMatrix* directionalMat;
    RwV4d* unk160;
    RwV4d* unk170;
    Resrc* res;
    f32 ambientValue;
    f32 directionalValue;
    RwV3d axis;

    res = MT_Scene_GetResListHead(RESRC_TYPE_LIGHTCHAR);
    if (res != NULL)
    {
        ambientColor = (RwRGBAReal*)((u8*)res + 0x100);
    }
    else
    {
        ambientColor = NULL;
    }
    res = MT_Scene_GetResListHead(RESRC_TYPE_LIGHTCHAR);
    if (res != NULL)
    {
        directionalColor = (RwRGBAReal*)((u8*)res + 0x110);
    }
    else
    {
        directionalColor = NULL;
    }
    res = MT_Scene_GetResListHead(RESRC_TYPE_LIGHTCHAR);
    if (res != NULL)
    {
        directionalMat = (RwMatrix*)((u8*)res + 0x120);
    }
    else
    {
        directionalMat = NULL;
    }
    res = MT_Scene_GetResListHead(RESRC_TYPE_LIGHTCHAR);
    if (res != NULL)
    {
        unk160 = (RwV4d*)((u8*)res + 0x160);
    }
    else
    {
        unk160 = NULL;
    }
    res = MT_Scene_GetResListHead(RESRC_TYPE_LIGHTCHAR);
    if (res != NULL)
    {
        unk170 = (RwV4d*)((u8*)res + 0x170);
    }
    else
    {
        unk170 = NULL;
    }
    ambientValue = fGpffff80e0;

    ambientColor->r = ambientValue;
    ambientColor->g = ambientValue;
    ambientColor->b = ambientValue;
    ambientColor->a = 0.0f;
    directionalValue = fGpffff8084;
    directionalColor->r = directionalValue;
    directionalColor->g = directionalValue;
    directionalColor->b = directionalValue;
    directionalColor->a = 0.0f;
    unk160->x = 0.0f;
    unk160->y = 0.0f;
    unk160->z = 0.0f;
    unk160->w = 0.0f;
    RwMatrixSetIdentity(directionalMat);
    axis.x = 0.0f;
    axis.y = 1.0f;
    axis.z = 0.0f;
    func_004c31b0(-180.0f, directionalMat, &axis, rwCOMBINEPOSTCONCAT);
    axis.x = 1.0f;
    axis.y = 0.0f;
    axis.z = 0.0f;
    func_004c31b0(-45.0f, directionalMat, &axis, rwCOMBINEPOSTCONCAT);
    RwMatrixSetIdentity((RwMatrix*)unk170);
    axis.x = 0.0f;
    axis.y = 1.0f;
    axis.z = 0.0f;
    func_004c31b0(-180.0f, (RwMatrix*)unk170, &axis, rwCOMBINEPOSTCONCAT);
    axis.x = 1.0f;
    axis.y = 0.0f;
    axis.z = 0.0f;
    func_004c31b0(-45.0f, (RwMatrix*)unk170, &axis, rwCOMBINEPOSTCONCAT);
}

// FUN_001a0d00
RwRGBAReal* func_001a0d00()
{
    ResrcLightNpc* res;

    res = (ResrcLightNpc*)MT_Scene_GetResListHead(RESRC_TYPE_LIGHTNPC);
    if (res != NULL)
    {
        return (RwRGBAReal*)((u8*)res + 0x100);
    }
    return NULL;
}

// FUN_001a0d40
RwRGBAReal* func_001a0d40()
{
    ResrcLightNpc* res;

    res = (ResrcLightNpc*)MT_Scene_GetResListHead(RESRC_TYPE_LIGHTNPC);
    if (res != NULL)
    {
        return (RwRGBAReal*)((u8*)res + 0x110);
    }
    return NULL;
}

// FUN_001a0d80
RwMatrix* func_001a0d80()
{
    ResrcLightNpc* res;

    res = (ResrcLightNpc*)MT_Scene_GetResListHead(RESRC_TYPE_LIGHTNPC);
    if (res != NULL)
    {
        return (RwMatrix*)((u8*)res + 0x120);
    }
    return NULL;
}

// FUN_001a0dc0
void func_001a0dc0(u16 resTypeId, u32 visible)
{
    Resrc* res;

    if (gMtScene->resManager == NULL)
    {
        goto done;
    }
    res = resrcMngGetRes(gMtScene->resManager, resTypeId);
    goto setFlags;

done:
    return;

setFlags:
    if (visible == 1)
    {
        res->flags |= SCENEDRAW_RESRC_FLAG_VISIBLE;
    }
    else
    {
        res->flags &= ~SCENEDRAW_RESRC_FLAG_VISIBLE;
    }
}

// FUN_001a0e50
void func_001a0e50(u16 resTypeId, u32 persona)
{
    Resrc* res;

    if (gMtScene->resManager == NULL)
    {
        goto done;
    }
    res = resrcMngGetRes(gMtScene->resManager, resTypeId);
    goto setFlags;

done:
    return;

setFlags:
    if (persona == 1)
    {
        res->flags |= SCENEDRAW_RESRC_FLAG_PERSONA;
    }
    else
    {
        res->flags &= ~SCENEDRAW_RESRC_FLAG_PERSONA;
    }
}

// FUN_001a0ee0
void K_Scene_InitNpcLight()
{
    RwRGBAReal* ambientColor;
    RwRGBAReal* directionalColor;
    RwMatrix* directionalMat;
    RwV4d* unk160;
    RwV4d* unk170;
    Resrc* res;
    f32 ambientValue;
    f32 directionalValue;
    RwV3d axis;
    extern f32 fGpffff808c;

    res = MT_Scene_GetResListHead(RESRC_TYPE_LIGHTNPC);
    if (res != NULL)
    {
        ambientColor = (RwRGBAReal*)((u8*)res + 0x100);
    }
    else
    {
        ambientColor = NULL;
    }
    res = MT_Scene_GetResListHead(RESRC_TYPE_LIGHTNPC);
    if (res != NULL)
    {
        directionalColor = (RwRGBAReal*)((u8*)res + 0x110);
    }
    else
    {
        directionalColor = NULL;
    }
    res = MT_Scene_GetResListHead(RESRC_TYPE_LIGHTNPC);
    if (res != NULL)
    {
        directionalMat = (RwMatrix*)((u8*)res + 0x120);
    }
    else
    {
        directionalMat = NULL;
    }
    res = MT_Scene_GetResListHead(RESRC_TYPE_LIGHTNPC);
    if (res != NULL)
    {
        unk160 = (RwV4d*)((u8*)res + 0x160);
    }
    else
    {
        unk160 = NULL;
    }
    res = MT_Scene_GetResListHead(RESRC_TYPE_LIGHTNPC);
    if (res != NULL)
    {
        unk170 = (RwV4d*)((u8*)res + 0x170);
    }
    else
    {
        unk170 = NULL;
    }
    ambientValue = fGpffff808c;

    ambientColor->r = ambientValue;
    ambientColor->g = ambientValue;
    ambientColor->b = ambientValue;
    ambientColor->a = 0.0f;
    directionalValue = 0.5f;
    directionalColor->r = directionalValue;
    directionalColor->g = directionalValue;
    directionalColor->b = directionalValue;
    directionalColor->a = 0.0f;
    unk160->x = 0.0f;
    unk160->y = 0.0f;
    unk160->z = 0.0f;
    unk160->w = 0.0f;
    RwMatrixSetIdentity(directionalMat);
    axis.x = 0.0f;
    axis.y = 1.0f;
    axis.z = 0.0f;
    RwMatrixRotate(directionalMat, &axis, -180.0f, rwCOMBINEPOSTCONCAT);
    axis.x = 1.0f;
    axis.y = 0.0f;
    axis.z = 0.0f;
    RwMatrixRotate(directionalMat, &axis, -45.0f, rwCOMBINEPOSTCONCAT);
    RwMatrixSetIdentity((RwMatrix*)unk170);
    axis.x = 0.0f;
    axis.y = 1.0f;
    axis.z = 0.0f;
    RwMatrixRotate((RwMatrix*)unk170, &axis, -180.0f, rwCOMBINEPOSTCONCAT);
    axis.x = 1.0f;
    axis.y = 0.0f;
    axis.z = 0.0f;
    RwMatrixRotate((RwMatrix*)unk170, &axis, -45.0f, rwCOMBINEPOSTCONCAT);
}
// FUN_001a1150
u32 func_001a1150()
{
    Resrc* res;
    u32 value;

    res = MT_Scene_GetResListHead(RESRC_TYPE_20);
    value = 0;
    if (res != NULL)
    {
        value = *(u32*)((u8*)res + 0x108);
    }
    return value;
}

// FUN_001a1190
f32 func_001a1190()
{
    Resrc* res;
    f32 value;

    res = MT_Scene_GetResListHead(RESRC_TYPE_20);
    value = 0.0f;
    if (res != NULL)
    {
        value = *(f32*)((u8*)res + 0x104);
    }
    return value;
}

// FUN_001a11d0
u32 func_001a11d0()
{
    Resrc* res;
    u32 value;

    res = MT_Scene_GetResListHead(RESRC_TYPE_20);
    value = (res != NULL);
    if (value != 0)
    {
        value = *(u32*)((u8*)res + 0x100) == 1;
    }
    return value;
}



// FUN_001a1210
#ifndef PC_BUILD
asm void func_001a1210(RwCamera* camera, const RwV3d* target, const RwV3d* position, const RwV3d* upVector)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x27b00040
  .word 0x3c020068
  .word 0xdc438ab8
  .word 0x3c020068
  .word 0xc4408ac0
  .word 0xffa30040
  .word 0xe7a00048
  .word 0x14e00003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x00e0802d
  .word 0x8c920004
  .word 0x26510010
  .word 0xc4a20000
  .word 0xc4a10004
  .word 0xc4a00008
  .word 0xe6420040
  .word 0xe6410044
  .word 0xe6400048
  .word 0xc4c10000
  .word 0xc6400040
  .word 0x46000801
  .word 0xe6400030
  .word 0xc4c10004
  .word 0xc6400044
  .word 0x46000801
  .word 0xe6400034
  .word 0xc4c10008
  .word 0xc6400048
  .word 0x46000801
  .word 0xe6400038
  .word 0x26240020
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc6210028
  .word 0xc6040004
  .word 0xc6200024
  .word 0xc6030008
  .word 0x4603001a
  .word 0x4604081d
  .word 0xe6200000
  .word 0xc6210020
  .word 0xc6200028
  .word 0xc6020000
  .word 0x4602001a
  .word 0x4603081d
  .word 0xe6200004
  .word 0xc6210024
  .word 0xc6200020
  .word 0x4604001a
  .word 0x4602081d
  .word 0xe6200008
  .word 0x0220202d
  .word 0x0220282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc6230028
  .word 0xc6220004
  .word 0xc6210024
  .word 0xc6200008
  .word 0x4600081a
  .word 0x4602181d
  .word 0xe6200010
  .word 0xc6230020
  .word 0xc6220008
  .word 0xc6210028
  .word 0xc6200000
  .word 0x4600081a
  .word 0x4602181d
  .word 0xe6200014
  .word 0xc6230024
  .word 0xc6220000
  .word 0xc6210020
  .word 0xc6200004
  .word 0x4600081a
  .word 0x4602181d
  .word 0xe6200018
  .word 0x26240010
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c130bc4
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c132c9c
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001a13b0
void* func_001a13b0(SceneDrawObject* object, void** listHead)
{
    void* allocation;
    void** tail;
    u8 type;

    type = object->type;
    func_005225a8("draw object", object->data, type);
    if (func_004d1170(func_004d11f0(), object->data) != NULL)
    {
        return object;
    }

    func_004d1110(func_004d11f0(), object);
    allocation = (*(void* (**)(u32, u32, u32))D_00960184)(1, 0x44, 0x40000);
    func_00524270(allocation, object->data);
    if (*listHead == NULL)
    {
        *listHead = allocation;
    }
    else
    {
        tail = (void**)((u8*)*listHead + 0x40);
        while (*tail != NULL)
        {
            tail = (void**)((u8*)*tail + 0x40);
        }
        *tail = allocation;
    }

    return object;
}

// FUN_001a14c0
void func_001a14c0(void* list)
{
    void* next;
    void* manager;
    void* resource;
    void* current;

    current = list;
    while (current != NULL)
    {
        next = *(void**)((u8*)current + 0x40);
        manager = func_004d11f0();
        resource = func_004d1170(manager, current);
        func_004d0f00(resource);
        (*(void (**)(void*))D_0096017c_y2)(current);
        current = next;
    }
}

// FUN_001a1540
void* func_001a1540()
{
    return KWLNTASK_CONTINUE;
}








// Retail state 5 converts alphaStep to a clamped byte, increments alpha by
// alphaStep/8 until the target, then advances state and copies both colors.
// That state-5 update is reconstructed; remaining differences are layout and
// register allocation in the other scene states.
// FUN_001a1550
asm void* func_001a1550(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c91003c
  .word 0x8e220000
  .word 0x2c410009
  .word 0x102002c5
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636a50
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24040005
  .word 0x24050048
  .word 0x0c079e30
  .word 0x00000000
  .word 0xae220024
  .word 0x0c1252f8
  .word 0x00000000
  .word 0xae220028
  .word 0x9226001c
  .word 0x9225001d
  .word 0x9224001e
  .word 0x9223001f
  .word 0xa0460004
  .word 0xa0450005
  .word 0xa0440006
  .word 0xa0430007
  .word 0x0c1252f8
  .word 0x00000000
  .word 0xae22002c
  .word 0x92220023
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6200040
  .word 0xa2200023
  .word 0x8e26002c
  .word 0x92250020
  .word 0x92240021
  .word 0x92230022
  .word 0x92220023
  .word 0xa0c50004
  .word 0xa0c40005
  .word 0xa0c30006
  .word 0xa0c20007
  .word 0x0000902d
  .word 0x1000003a
  .word 0x00000000
  .word 0x8e240024
  .word 0x0240282d
  .word 0x8e260028
  .word 0x0c079ea8
  .word 0x00000000
  .word 0x00123880
  .word 0x8e220024
  .word 0x8c420018
  .word 0x00121900
  .word 0x8c420030
  .word 0x00433021
  .word 0xc780945c
  .word 0xe7a0005c
  .word 0x93a5005c
  .word 0x93a4005d
  .word 0x93a3005e
  .word 0x93a2005f
  .word 0xa0c50000
  .word 0xa0c40001
  .word 0xa0c30002
  .word 0xa0c20003
  .word 0xa0c50004
  .word 0xa0c40005
  .word 0xa0c30006
  .word 0xa0c20007
  .word 0xa0c50008
  .word 0xa0c40009
  .word 0xa0c3000a
  .word 0xa0c2000b
  .word 0xa0c5000c
  .word 0xa0c4000d
  .word 0xa0c3000e
  .word 0xa0c2000f
  .word 0x8e220024
  .word 0x8c420018
  .word 0x8c44005c
  .word 0x001210c0
  .word 0x00471021
  .word 0x00021880
  .word 0x8c820014
  .word 0x00439821
  .word 0xae600000
  .word 0xae600004
  .word 0xae60000c
  .word 0xae600010
  .word 0xae600018
  .word 0xae60001c
  .word 0xae600024
  .word 0xae600028
  .word 0x3404ffd0
  .word 0x0c079f08
  .word 0x00000000
  .word 0x0260202d
  .word 0x46000306
  .word 0x0c079ec4
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420004
  .word 0x1440ffc5
  .word 0x00000000
  .word 0x8e240024
  .word 0x24050004
  .word 0x8e26002c
  .word 0x0c079ea8
  .word 0x00000000
  .word 0x8e220024
  .word 0x8c420018
  .word 0x8c460030
  .word 0xc780945c
  .word 0xe7a00058
  .word 0x93a50058
  .word 0x93a40059
  .word 0x93a3005a
  .word 0x93a2005b
  .word 0xa0c50040
  .word 0xa0c40041
  .word 0xa0c30042
  .word 0xa0c20043
  .word 0xa0c50044
  .word 0xa0c40045
  .word 0xa0c30046
  .word 0xa0c20047
  .word 0xa0c50048
  .word 0xa0c40049
  .word 0xa0c3004a
  .word 0xa0c2004b
  .word 0xa0c5004c
  .word 0xa0c4004d
  .word 0xa0c3004e
  .word 0xa0c2004f
  .word 0x8e220024
  .word 0x8c420018
  .word 0x8c42005c
  .word 0x8c440014
  .word 0x249200c0
  .word 0xc620000c
  .word 0x46800020
  .word 0xe48000c0
  .word 0xc6200010
  .word 0x46800020
  .word 0xe48000c4
  .word 0x8e23000c
  .word 0x8e220014
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe48000cc
  .word 0xc6200010
  .word 0x46800020
  .word 0xe48000d0
  .word 0xc620000c
  .word 0x46800020
  .word 0xe48000d8
  .word 0x8e230010
  .word 0x8e220018
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe48000dc
  .word 0x8e23000c
  .word 0x8e220014
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe48000e4
  .word 0x8e230010
  .word 0x8e220018
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe48000e8
  .word 0x3404ffc0
  .word 0x0c079f08
  .word 0x00000000
  .word 0x0240202d
  .word 0x46000306
  .word 0x0c079ec4
  .word 0x00000000
  .word 0x8e220024
  .word 0x8c440018
  .word 0x0c124cf4
  .word 0x00000000
  .word 0x8e220000
  .word 0x24420001
  .word 0xae220000
  .word 0x100001f7
  .word 0x00000000
  .word 0x8e220024
  .word 0x8c440018
  .word 0x24050002
  .word 0x0c124cdc
  .word 0x00000000
  .word 0xc6200014
  .word 0xc6210030
  .word 0x46800020
  .word 0x46000834
  .word 0x45010005
  .word 0x00000000
  .word 0xe6200030
  .word 0x8e220000
  .word 0x24420001
  .word 0xae220000
  .word 0x8e220024
  .word 0x8c420018
  .word 0x8c42005c
  .word 0x8c520014
  .word 0xc620000c
  .word 0x46800020
  .word 0xe6400000
  .word 0xc6200010
  .word 0x46800020
  .word 0xe6400004
  .word 0xc620000c
  .word 0x46800060
  .word 0xc6200030
  .word 0x46000800
  .word 0xe640000c
  .word 0xc6200010
  .word 0x46800020
  .word 0xe6400010
  .word 0xc620000c
  .word 0x46800020
  .word 0xe6400018
  .word 0x8e220010
  .word 0x24420002
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe640001c
  .word 0xc620000c
  .word 0x46800060
  .word 0xc6200030
  .word 0x46000800
  .word 0xe6400024
  .word 0x8e220010
  .word 0x24420002
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6400028
  .word 0x3404ffd0
  .word 0x0c079f08
  .word 0x00000000
  .word 0x0240202d
  .word 0x46000306
  .word 0x0c079ec4
  .word 0x00000000
  .word 0xc6200014
  .word 0x46800060
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0xc6200030
  .word 0x46010000
  .word 0xe6200030
  .word 0x8e220024
  .word 0x8c440018
  .word 0x0c124cf4
  .word 0x00000000
  .word 0x100001ac
  .word 0x00000000
  .word 0x8e220024
  .word 0x8c440018
  .word 0x24050002
  .word 0x0c124cdc
  .word 0x00000000
  .word 0xc6200018
  .word 0xc6210034
  .word 0x46800020
  .word 0x46000834
  .word 0x45010005
  .word 0x00000000
  .word 0xe6200034
  .word 0x8e220000
  .word 0x24420001
  .word 0xae220000
  .word 0x8e220024
  .word 0x8c420018
  .word 0x8c42005c
  .word 0x8c440014
  .word 0x24920030
  .word 0x8e23000c
  .word 0x8e220014
  .word 0x00621021
  .word 0x2442fffe
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe4800030
  .word 0xc6200010
  .word 0x46800020
  .word 0xe4800034
  .word 0x8e23000c
  .word 0x8e220014
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe480003c
  .word 0xc6200010
  .word 0x46800020
  .word 0xe4800040
  .word 0x8e23000c
  .word 0x8e220014
  .word 0x00621021
  .word 0x2442fffe
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe4800048
  .word 0xc6200010
  .word 0x46800060
  .word 0xc6200034
  .word 0x46000800
  .word 0xe480004c
  .word 0x8e23000c
  .word 0x8e220014
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe4800054
  .word 0xc6200010
  .word 0x46800060
  .word 0xc6200034
  .word 0x46000800
  .word 0xe4800058
  .word 0x3404ffd0
  .word 0x0c079f08
  .word 0x00000000
  .word 0x0240202d
  .word 0x46000306
  .word 0x0c079ec4
  .word 0x00000000
  .word 0xc6200018
  .word 0x46800060
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0xc6200034
  .word 0x46010000
  .word 0xe6200034
  .word 0x8e220024
  .word 0x8c440018
  .word 0x0c124cf4
  .word 0x00000000
  .word 0x10000154
  .word 0x00000000
  .word 0x8e220024
  .word 0x8c440018
  .word 0x24050002
  .word 0x0c124cdc
  .word 0x00000000
  .word 0xc6200014
  .word 0xc6210038
  .word 0x46800020
  .word 0x46000834
  .word 0x45010005
  .word 0x00000000
  .word 0xe6200038
  .word 0x8e220000
  .word 0x24420001
  .word 0xae220000
  .word 0x8e220024
  .word 0x8c420018
  .word 0x8c42005c
  .word 0x8c420014
  .word 0x24520060
  .word 0x8e24000c
  .word 0x8e230014
  .word 0x00831821
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0xc6200038
  .word 0x46000801
  .word 0xe4400060
  .word 0x8e240010
  .word 0x8e230018
  .word 0x00831821
  .word 0x2463fffe
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe4400064
  .word 0x8e24000c
  .word 0x8e230014
  .word 0x00831821
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe440006c
  .word 0x8e240010
  .word 0x8e230018
  .word 0x00831821
  .word 0x2463fffe
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe4400070
  .word 0x8e24000c
  .word 0x8e230014
  .word 0x00831821
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0xc6200038
  .word 0x46000801
  .word 0xe4400078
  .word 0x8e240010
  .word 0x8e230018
  .word 0x00831821
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe440007c
  .word 0x8e24000c
  .word 0x8e230014
  .word 0x00831821
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe4400084
  .word 0x8e240010
  .word 0x8e230018
  .word 0x00831821
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe4400088
  .word 0x3404ffd0
  .word 0x0c079f08
  .word 0x00000000
  .word 0x0240202d
  .word 0x46000306
  .word 0x0c079ec4
  .word 0x00000000
  .word 0xc6200014
  .word 0x46800060
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0xc6200038
  .word 0x46010000
  .word 0xe6200038
  .word 0x8e220024
  .word 0x8c440018
  .word 0x0c124cf4
  .word 0x00000000
  .word 0x100000ec
  .word 0x00000000
  .word 0x8e220024
  .word 0x8c440018
  .word 0x24050002
  .word 0x0c124cdc
  .word 0x00000000
  .word 0xc6200018
  .word 0xc621003c
  .word 0x46800020
  .word 0x46000834
  .word 0x45010005
  .word 0x00000000
  .word 0xe620003c
  .word 0x8e220000
  .word 0x24420001
  .word 0xae220000
  .word 0x8e220024
  .word 0x8c420018
  .word 0x8c42005c
  .word 0x8c440014
  .word 0x24920090
  .word 0xc620000c
  .word 0x46800020
  .word 0xe4800090
  .word 0x8e230010
  .word 0x8e220018
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc620003c
  .word 0x46000801
  .word 0xe4800094
  .word 0x8e22000c
  .word 0x24420002
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe480009c
  .word 0x8e230010
  .word 0x8e220018
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc620003c
  .word 0x46000801
  .word 0xe48000a0
  .word 0xc620000c
  .word 0x46800020
  .word 0xe48000a8
  .word 0x8e230010
  .word 0x8e220018
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe48000ac
  .word 0x8e22000c
  .word 0x24420002
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe48000b4
  .word 0x8e230010
  .word 0x8e220018
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe48000b8
  .word 0x3404ffd0
  .word 0x0c079f08
  .word 0x00000000
  .word 0x0240202d
  .word 0x46000306
  .word 0x0c079ec4
  .word 0x00000000
  .word 0xc6200018
  .word 0x46800060
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0xc620003c
  .word 0x46010000
  .word 0xe620003c
  .word 0x8e220024
  .word 0x8c440018
  .word 0x0c124cf4
  .word 0x00000000
  .word 0x10000090
  .word 0x00000000
  .word 0xc6220040
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46020036
  .word 0x45010007
  .word 0x00000000
  .word 0x46001024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46001001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0x306300ff
  .word 0x92220023
  .word 0x0043082a
  .word 0x10200029
  .word 0x00000000
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
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46001003
  .word 0x46000840
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
  .word 0xa2230023
  .word 0x10000017
  .word 0x00000000
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46020036
  .word 0x45010007
  .word 0x00000000
  .word 0x46001024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46001001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa2230023
  .word 0x8e220000
  .word 0x24420001
  .word 0xae220000
  .word 0x8e26002c
  .word 0x92250020
  .word 0x92240021
  .word 0x92230022
  .word 0x92220023
  .word 0xa0c50004
  .word 0xa0c40005
  .word 0xa0c30006
  .word 0xa0c20007
  .word 0x1000002f
  .word 0x00000000
  .word 0x2625000c
  .word 0x0c0688f8
  .word 0x00000000
  .word 0x1000002a
  .word 0x00000000
  .word 0x92220023
  .word 0x18400003
  .word 0x00000000
  .word 0x2442ffff
  .word 0xa2220023
  .word 0x9222001f
  .word 0x18400003
  .word 0x00000000
  .word 0x2442ffff
  .word 0xa222001f
  .word 0x8e260028
  .word 0x9225001c
  .word 0x9224001d
  .word 0x9223001e
  .word 0x9222001f
  .word 0xa0c50004
  .word 0xa0c40005
  .word 0xa0c30006
  .word 0xa0c20007
  .word 0x8e26002c
  .word 0x92250020
  .word 0x92240021
  .word 0x92230022
  .word 0x92220023
  .word 0xa0c50004
  .word 0xa0c40005
  .word 0xa0c30006
  .word 0xa0c20007
  .word 0x92220023
  .word 0x1440000b
  .word 0x00000000
  .word 0x14400009
  .word 0x00000000
  .word 0x8e220000
  .word 0x24420001
  .word 0xae220000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000002f
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c069180
  .word 0x00000000
  .word 0xc6210050
  .word 0x46000832
  .word 0x45010005
  .word 0x00000000
  .word 0x0200202d
  .word 0x2625000c
  .word 0x0c0688f8
  .word 0x00000000
  .word 0x0c0655e4
  .word 0x00000000
  .word 0x24050001
  .word 0x1445001c
  .word 0x00000000
  .word 0x8e220004
  .word 0x14450019
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e020000
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
  .word 0x8e240024
  .word 0x8c820048
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}


 

// FUN_001A2170
void func_001a2170(KwlnTask* task)
{
    KWindowTaskWork* work;
    void (**freeSlot)(void*);

    work = (KWindowTaskWork*)task->workData;
    func_00494cc0(work->colorDataA);
    func_00494cc0(work->colorDataB);
    func_001e7a60(work->renderData);
    freeSlot = (void (**)(void*))((u8*)&rwGlobals + 0x17c);
    (*freeSlot)(work->buffer);
    (*freeSlot)(task->workData);
}

// FUN_001A2200
KwlnTask* func_001a2200(KwlnTask* parent, const RwRect* rect, const RwRGBA* colorA, const RwRGBA* colorB)
{
    KwlnTask* task;
    KWindowTaskWork* work;
    void* (**callocFunc)(u32, u32, u32);
    s32* bufferSize;
    void** buffer;

    callocFunc = &((RwGlobals*)rwGlobals_abs)->memFuncs.RwCalloc;
    work = (*callocFunc)(1, sizeof(KWindowTaskWork), rwMEMHINTDUR_GLOBAL);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreateWithAutoPriority(parent,
                                          0x106F,
                                          "ksk window",
                                          func_001a1550,
                                          func_001a2170,
                                          work);
    work->request = 1;
    work->rect = *rect;
    work->colorA = *colorA;
    work->colorB = *colorB;
    bufferSize = &work->bufferSize;
    *bufferSize = (rect->x / 8) * (rect->y / 8) + 0x20;
    buffer = &work->buffer;
    *buffer = (*callocFunc)(1, *bufferSize, rwMEMHINTDUR_GLOBAL);
    work->bufferAlias = *buffer;

    return task;
}

// FUN_001A2390
u32 func_001a2390(const KwlnTask* task)
{
    const KWindowTaskWork* work;

    work = (const KWindowTaskWork*)task->workData;
    if (work->state == 6)
    {
        goto zero;
    }
    if (work->state != 8)
    {
        goto one;
    }
zero:
    return 0;
one:
    return 1;
}

// FUN_001A23D0
void func_001a23d0(KwlnTask* task, u32 request)
{
    KWindowTaskWork* work;

    work = (KWindowTaskWork*)task->workData;
    work->request = request;
}

// FUN_001A23E0
#ifndef PC_BUILD
asm void func_001a23e0(KwlnTask* task, const RwRect* rect)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0xc4a30000
  .word 0xc4a20004
  .word 0xc4a10008
  .word 0xc4a0000c
  .word 0xe7a30060
  .word 0xe7a20064
  .word 0xe7a10068
  .word 0xe7a0006c
  .word 0x8c93003c
  .word 0x8e640000
  .word 0x24030006
  .word 0x148300b2
  .word 0x00000000
  .word 0x8e620024
  .word 0x8c440018
  .word 0x24050002
  .word 0x0c124cdc
  .word 0x00000000
  .word 0x8e620024
  .word 0x8c420018
  .word 0x8c42005c
  .word 0x8c500014
  .word 0x8fa30060
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0xe6030000
  .word 0x8fb20064
  .word 0x44920000
  .word 0x00000000
  .word 0x468000a0
  .word 0xe6020004
  .word 0x8fa20068
  .word 0x00628821
  .word 0x44910000
  .word 0x00000000
  .word 0x46800060
  .word 0xe601000c
  .word 0xe6020010
  .word 0xe6030018
  .word 0x26420002
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe600001c
  .word 0xe6010024
  .word 0xe6000028
  .word 0x3404fff0
  .word 0x0c079f08
  .word 0x00000000
  .word 0x0200202d
  .word 0x46000306
  .word 0x0c079ec4
  .word 0x00000000
  .word 0x8e620024
  .word 0x8c420018
  .word 0x8c42005c
  .word 0x8c430014
  .word 0x24740030
  .word 0x2622fffe
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0xe4630030
  .word 0x44920000
  .word 0x00000000
  .word 0x468000a0
  .word 0xe4620034
  .word 0x44910000
  .word 0x00000000
  .word 0x46800060
  .word 0xe461003c
  .word 0xe4620040
  .word 0xe4630048
  .word 0x8fa2006c
  .word 0x02428021
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0xe460004c
  .word 0xe4610054
  .word 0xe4600058
  .word 0x3404fff0
  .word 0x0c079f08
  .word 0x00000000
  .word 0x0280202d
  .word 0x46000306
  .word 0x0c079ec4
  .word 0x00000000
  .word 0x8e620024
  .word 0x8c420018
  .word 0x8c42005c
  .word 0x8c430014
  .word 0x24740060
  .word 0xc7a00060
  .word 0x468000e0
  .word 0xe4630060
  .word 0x2602fffe
  .word 0x44820000
  .word 0x00000000
  .word 0x468000a0
  .word 0xe4620064
  .word 0x44910000
  .word 0x00000000
  .word 0x46800060
  .word 0xe461006c
  .word 0xe4620070
  .word 0xe4630078
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0xe460007c
  .word 0xe4610084
  .word 0xe4600088
  .word 0x3404fff0
  .word 0x0c079f08
  .word 0x00000000
  .word 0x0280202d
  .word 0x46000306
  .word 0x0c079ec4
  .word 0x00000000
  .word 0x8e620024
  .word 0x8c420018
  .word 0x8c42005c
  .word 0x8c430014
  .word 0x24740090
  .word 0x8fa20060
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0xe4630090
  .word 0x44920000
  .word 0x00000000
  .word 0x468000a0
  .word 0xe4620094
  .word 0x24420002
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xe461009c
  .word 0xe46200a0
  .word 0xe46300a8
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0xe46000ac
  .word 0xe46100b4
  .word 0xe46000b8
  .word 0x3404fff0
  .word 0x0c079f08
  .word 0x00000000
  .word 0x0280202d
  .word 0x46000306
  .word 0x0c079ec4
  .word 0x00000000
  .word 0x8e620024
  .word 0x8c420018
  .word 0x8c42005c
  .word 0x8c420014
  .word 0x245400c0
  .word 0xc7a00060
  .word 0x468000e0
  .word 0xe44300c0
  .word 0x44920000
  .word 0x00000000
  .word 0x468000a0
  .word 0xe44200c4
  .word 0x44910000
  .word 0x00000000
  .word 0x46800060
  .word 0xe44100cc
  .word 0xe44200d0
  .word 0xe44300d8
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0xe44000dc
  .word 0xe44100e4
  .word 0xe44000e8
  .word 0x3404ffe0
  .word 0x0c079f08
  .word 0x00000000
  .word 0x0280202d
  .word 0x46000306
  .word 0x0c079ec4
  .word 0x00000000
  .word 0x8e620024
  .word 0x8c440018
  .word 0x0c124cf4
  .word 0x00000000
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
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
/*
 * The task below owns the small text/value editor used by the debug window.
 * Its work area is deliberately kept separate from KWindowTaskWork above:
 * the retail task stores the manager at KwlnTask::workData and all offsets
 * below are relative to that manager block.
 */








static inline KWindowManagerWork* KWindow_GetManager(KwlnTask* task)
{
    return (KWindowManagerWork*)task->workData;
}

static KWindowEntry* KWindow_GetCurrentEntry(KWindowManagerWork* manager)
{
    KWindowEntry* entry;
    s32 index;

    entry = manager->entries;
    index = manager->firstVisible + manager->cursor;
    if (index < 0 || index >= manager->entryCount)
    {
        return NULL;
    }

    while (index > 0 && entry != NULL)
    {
        entry = entry->next;
        index--;
    }

    return entry;
}

static inline void KWindow_InvokeEntryCallback(KWindowEntry* entry)
{
    void* value;

    if (entry == NULL || entry->callback == NULL)
    {
        return;
    }

    value = NULL;
    if (entry->type == 4)
    {
        value = &entry->floatValue;
    }
    else if (entry->type == 3 || entry->type == 2)
    {
        value = &entry->intValue;
    }
    else if (entry->type == 1)
    {
        value = entry->text;
    }

    if (entry->callbackValue != NULL)
    {
        entry->callback((void*)&value);
    }
    else
    {
        entry->callback(value);
    }
}


static inline void KWindow_MoveDown(KWindowManagerWork* manager)
{
    s32 visible;

    if (manager == NULL || manager->entryCount <= 0)
    {
        return;
    }
    visible = manager->visibleRows;
    if (visible > manager->entryCount)
    {
        visible = manager->entryCount;
    }
    manager->cursor++;
    if (manager->cursor >= visible)
    {
        manager->cursor = visible - 1;
        manager->firstVisible++;
        if (manager->entryCount <
            manager->firstVisible + 1 + visible)
        {
            manager->cursor = 0;
            manager->firstVisible = 0;
        }
    }
}

static inline void KWindow_MoveUp(KWindowManagerWork* manager)
{
    s32 visible;

    if (manager == NULL || manager->entryCount <= 0)
    {
        return;
    }
    visible = manager->visibleRows;
    if (visible > manager->entryCount)
    {
        visible = manager->entryCount;
    }
    manager->cursor--;
    if (manager->cursor < 0)
    {
        manager->cursor = 0;
        manager->firstVisible--;
        if (manager->firstVisible < 0)
        {
            manager->cursor = visible - 1;
            manager->firstVisible = manager->entryCount - visible;
        }
    }
}

static inline void KWindow_SetManagerRender(KWindowManagerWork* manager)
{
    KWindowRenderData* renderData;
    KWindowRenderLayout* layout;
    KWindowQuad* quad;
    RwRGBA* colorData;
    RwRGBA* tile;
    s32 i;

    colorData = (RwRGBA*)((u8*)manager->colorData + 4);
    *(u8*)&colorData->r = *(u8*)((u8*)&uGpffff94c4 + 0);
    *(u8*)&colorData->g = *(u8*)((u8*)&uGpffff94c4 + 1);
    *(u8*)&colorData->b = *(u8*)((u8*)&uGpffff94c4 + 2);
    *(u8*)&colorData->a = *(u8*)((u8*)&uGpffff94c4 + 3);
    func_001e7aa0(manager->renderData, 0, manager->colorData);

    renderData = (KWindowRenderData*)manager->renderData;
    layout = renderData->layout;
    tile = layout->tileColors;
    for (i = 0; i < 4; i++)
    {
        tile[i] = *(RwRGBA*)&gp0xffff9460;
    }
    quad = layout->quadStore->quad;
    quad[0].vertex[0].x = 0.0f;
    quad[0].vertex[0].y = 0.0f;
    quad[0].vertex[1].x = 0.0f;
    quad[0].vertex[1].y = 0.0f;
    quad[0].vertex[2].x = 0.0f;
    quad[0].vertex[2].y = 0.0f;
    quad[0].vertex[3].x = 0.0f;
    quad[0].vertex[3].y = 0.0f;
    func_001e7b10(quad, func_001e7c20(-16));
    func_004933d0(layout);
}

static inline void KWindow_DrawSelection(KWindowManagerWork* manager)
{
    KWindowRenderData* renderData;
    KWindowRenderLayout* layout;
    KWindowQuad* quad;
    f32 top;
    f32 bottom;
    void (**renderHook)(void);

    if (manager == NULL || manager->renderData == NULL)
    {
        return;
    }
    renderData = (KWindowRenderData*)manager->renderData;
    layout = renderData->layout;
    if (layout == NULL || layout->quadStore == NULL ||
        layout->quadStore->quad == NULL)
    {
        return;
    }
    func_00493370(layout, 2);
    quad = layout->quadStore->quad;
    top = (f32)(manager->y + 2 + manager->cursor * 12);
    bottom = top + 12.0f;
    quad[0].vertex[0].x = (f32)(manager->x + 2);
    quad[0].vertex[0].y = top;
    quad[0].vertex[1].x = (f32)(manager->x + manager->width - 2);
    quad[0].vertex[1].y = top;
    quad[0].vertex[2].x = (f32)(manager->x + 2);
    quad[0].vertex[2].y = bottom;
    quad[0].vertex[3].x = (f32)(manager->x + manager->width - 2);
    quad[0].vertex[3].y = bottom;
    func_001e7b10(quad, func_001e7c20(0xfff0));
    func_004933d0(layout);
    if (D_00960090 != NULL)
    {
        (*D_00960090)(6, 0);
        (*D_00960090)(8, 0);
    }
    func_004d7f60(2, 0x44);
    func_004d7f60(3, 0x717fb);
    renderHook = (void (**)(void))((u8*)manager->renderData + 0x48);
    if (*renderHook != NULL)
    {
        (**renderHook)();
    }
}

// W415 census negative: direct R_MIPS_26 calls are 10/10 with retail after resolving the H_Dbprt helpers; no wrong-callee edit is justified.
// FUN_001A2720
#ifndef PC_BUILD
asm void func_001a2720(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c91003c
  .word 0x8e33003c
  .word 0x8e230010
  .word 0x24630002
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00058
  .word 0x8e230014
  .word 0x24630002
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0005c
  .word 0x0000902d
  .word 0x100000b6
  .word 0x00000000
  .word 0x8e240030
  .word 0x0244082a
  .word 0x10200004
  .word 0x00000000
  .word 0x8e730228
  .word 0x100000ae
  .word 0x00000000
  .word 0x8e230034
  .word 0x00831821
  .word 0x2463ffff
  .word 0x0072082a
  .word 0x142000ab
  .word 0x00000000
  .word 0xdfa40058
  .word 0x27859484
  .word 0x26660008
  .word 0x0c0413f4
  .word 0x00000000
  .word 0x8e640004
  .word 0x24030004
  .word 0x10830081
  .word 0x00000000
  .word 0x24030003
  .word 0x1083005b
  .word 0x00000000
  .word 0x24030002
  .word 0x1083002b
  .word 0x00000000
  .word 0x24030001
  .word 0x10830005
  .word 0x00000000
  .word 0x10800087
  .word 0x00000000
  .word 0x10000085
  .word 0x00000000
  .word 0x26640108
  .word 0x0c1490e2
  .word 0x00000000
  .word 0x24430001
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x8e230010
  .word 0x8e220018
  .word 0x00621021
  .word 0x2442fffe
  .word 0x00441023
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00058
  .word 0xdfa40058
  .word 0x8f859480
  .word 0x27869488
  .word 0x26670108
  .word 0x0c0413ac
  .word 0x00000000
  .word 0x10000062
  .word 0x00000000
  .word 0x8e230010
  .word 0x8e220018
  .word 0x00621021
  .word 0x2450fffe
  .word 0x27849490
  .word 0x0c1490e2
  .word 0x00000000
  .word 0x24430001
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x02021023
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00058
  .word 0x8e630208
  .word 0x24020001
  .word 0x14620008
  .word 0x00000000
  .word 0xdfa40058
  .word 0x8f859480
  .word 0x27869498
  .word 0x0c0413ac
  .word 0x00000000
  .word 0x1000003c
  .word 0x00000000
  .word 0xdfa40058
  .word 0x8f859480
  .word 0x278694a0
  .word 0x0c0413ac
  .word 0x00000000
  .word 0x10000035
  .word 0x00000000
  .word 0x8e620218
  .word 0x14400011
  .word 0x00000000
  .word 0x8e230010
  .word 0x8e220018
  .word 0x00621021
  .word 0x2442ff92
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00058
  .word 0xdfa40058
  .word 0x8f859480
  .word 0x278694a8
  .word 0x8e670208
  .word 0x0c0413ac
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0x8e230010
  .word 0x8e220018
  .word 0x00621021
  .word 0x2442ff7a
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00058
  .word 0xdfa40058
  .word 0x8f859480
  .word 0x278694b0
  .word 0x8e670208
  .word 0x0c0413ac
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x8e230010
  .word 0x8e220018
  .word 0x00621021
  .word 0x2442ff9e
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00058
  .word 0xc66c020c
  .word 0x0c14c368
  .word 0x00000000
  .word 0xdfa40058
  .word 0x8f859480
  .word 0x278694b8
  .word 0x0040382d
  .word 0x0c0413ac
  .word 0x00000000
  .word 0x8e230010
  .word 0x24630002
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00058
  .word 0xc7a1005c
  .word 0x3c034140
  .word 0x44830000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a0005c
  .word 0x8e730228
  .word 0x26520001
  .word 0x1660ff4a
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* W417: moved the state-3 func_001a2720 call ahead of the flag branch to match retail call order; nd3046 -> nd3008 and object 4032/4064. */
/* W417 negative: placing func_001a2720 after KWindow_DrawSelection yielded nd3020; the pre-branch placement above is nd3008. */
// FUN_001A2A80
#pragma schedule on
asm void* func_001a2a80(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x8c90003c
  .word 0x8e040000
  .word 0x2c810006
  .word 0x102003e3
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636a80
  .word 0x00041080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e03000c
  .word 0x24020001
  .word 0x146203d8
  .word 0x00000000
  .word 0x24820001
  .word 0xae020000
  .word 0x100003d4
  .word 0x00000000
  .word 0x8e030008
  .word 0x24020003
  .word 0x1062007f
  .word 0x00000000
  .word 0x24020002
  .word 0x10620055
  .word 0x00000000
  .word 0x24020001
  .word 0x1062002c
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000099
  .word 0x00000000
  .word 0x8e07001c
  .word 0x8e060018
  .word 0x8e050014
  .word 0x8e040010
  .word 0x27a30070
  .word 0x24020010
  .word 0x10600008
  .word 0x00000000
  .word 0xa0600000
  .word 0x24630001
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0xafa40070
  .word 0xafa50074
  .word 0xafa60078
  .word 0xafa7007c
  .word 0x27a600ac
  .word 0xc7809460
  .word 0xe7a000ac
  .word 0x27a700a8
  .word 0xc7809464
  .word 0xe7a000a8
  .word 0x0240202d
  .word 0x27a50070
  .word 0x0c068880
  .word 0x00000000
  .word 0xae020028
  .word 0x240200e3
  .word 0xa38294c4
  .word 0x2402004a
  .word 0xa38294c5
  .word 0xa38094c6
  .word 0x240200ff
  .word 0xa38294c7
  .word 0x10000072
  .word 0x00000000
  .word 0x8e07001c
  .word 0x8e060018
  .word 0x8e050014
  .word 0x8e040010
  .word 0x27a30060
  .word 0x24020010
  .word 0x10600008
  .word 0x00000000
  .word 0xa0600000
  .word 0x24630001
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0xafa40060
  .word 0xafa50064
  .word 0xafa60068
  .word 0xafa7006c
  .word 0x27a600a4
  .word 0xc7809468
  .word 0xe7a000a4
  .word 0x27a700a0
  .word 0xc780946c
  .word 0xe7a000a0
  .word 0x0240202d
  .word 0x27a50060
  .word 0x0c068880
  .word 0x00000000
  .word 0xae020028
  .word 0x24020054
  .word 0xa38294c4
  .word 0xa38094c5
  .word 0xa38094c6
  .word 0x240200ff
  .word 0xa38294c7
  .word 0x1000004c
  .word 0x00000000
  .word 0x8e07001c
  .word 0x8e060018
  .word 0x8e050014
  .word 0x8e040010
  .word 0x27a30050
  .word 0x24020010
  .word 0x10600008
  .word 0x00000000
  .word 0xa0600000
  .word 0x24630001
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0xafa40050
  .word 0xafa50054
  .word 0xafa60058
  .word 0xafa7005c
  .word 0x27a6009c
  .word 0xc7809470
  .word 0xe7a0009c
  .word 0x27a70098
  .word 0xc7809474
  .word 0xe7a00098
  .word 0x0240202d
  .word 0x27a50050
  .word 0x0c068880
  .word 0x00000000
  .word 0xae020028
  .word 0x240200e3
  .word 0xa38294c4
  .word 0x2402004a
  .word 0xa38294c5
  .word 0xa38094c6
  .word 0x240200ff
  .word 0xa38294c7
  .word 0x10000025
  .word 0x00000000
  .word 0x8e07001c
  .word 0x8e060018
  .word 0x8e050014
  .word 0x8e040010
  .word 0x27a30040
  .word 0x24020010
  .word 0x10600008
  .word 0x00000000
  .word 0xa0600000
  .word 0x24630001
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0xafa40040
  .word 0xafa50044
  .word 0xafa60048
  .word 0xafa7004c
  .word 0x27a60094
  .word 0xc7809478
  .word 0xe7a00094
  .word 0x27a70090
  .word 0xc780947c
  .word 0xe7a00090
  .word 0x0240202d
  .word 0x27a50040
  .word 0x0c068880
  .word 0x00000000
  .word 0xae020028
  .word 0x24020040
  .word 0xa38294c4
  .word 0xa38294c5
  .word 0xa38294c6
  .word 0x240200ff
  .word 0xa38294c7
  .word 0x24040001
  .word 0x24050048
  .word 0x0c079e30
  .word 0x00000000
  .word 0xae020020
  .word 0x0c1252f8
  .word 0x00000000
  .word 0xae020024
  .word 0x938694c0
  .word 0x938594c1
  .word 0x938494c2
  .word 0x938394c3
  .word 0xa0460004
  .word 0xa0450005
  .word 0xa0440006
  .word 0xa0430007
  .word 0x8e040020
  .word 0x0000282d
  .word 0x8e060024
  .word 0x0c079ea8
  .word 0x00000000
  .word 0x8e020020
  .word 0x8c420018
  .word 0x8c460030
  .word 0xc78094c4
  .word 0xe7a0008c
  .word 0x93a5008c
  .word 0x93a4008d
  .word 0x93a3008e
  .word 0x93a2008f
  .word 0xa0c50000
  .word 0xa0c40001
  .word 0xa0c30002
  .word 0xa0c20003
  .word 0xa0c50004
  .word 0xa0c40005
  .word 0xa0c30006
  .word 0xa0c20007
  .word 0xa0c50008
  .word 0xa0c40009
  .word 0xa0c3000a
  .word 0xa0c2000b
  .word 0xa0c5000c
  .word 0xa0c4000d
  .word 0xa0c3000e
  .word 0xa0c2000f
  .word 0x8e020020
  .word 0x8c420018
  .word 0x8c42005c
  .word 0x8c510014
  .word 0xae200000
  .word 0xae200004
  .word 0xae20000c
  .word 0xae200010
  .word 0xae200018
  .word 0xae20001c
  .word 0xae200024
  .word 0xae200028
  .word 0x3404fff0
  .word 0x0c079f08
  .word 0x00000000
  .word 0x0220202d
  .word 0x46000306
  .word 0x0c079ec4
  .word 0x00000000
  .word 0x8e020020
  .word 0x8c440018
  .word 0x0c124cf4
  .word 0x00000000
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x100002e4
  .word 0x00000000
  .word 0x8e040028
  .word 0x0c0688e4
  .word 0x00000000
  .word 0x24030001
  .word 0x104302de
  .word 0x00000000
  .word 0x8e040028
  .word 0x26050010
  .word 0x0c0688f8
  .word 0x00000000
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x100002d5
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x30620001
  .word 0x10400006
  .word 0x00000000
  .word 0x8f82b450
  .word 0x24420001
  .word 0xaf82b450
  .word 0x10000002
  .word 0x00000000
  .word 0xaf80b450
  .word 0x30620002
  .word 0x10400006
  .word 0x00000000
  .word 0x8f82b454
  .word 0x24420001
  .word 0xaf82b454
  .word 0x10000002
  .word 0x00000000
  .word 0xaf80b454
  .word 0x8e03000c
  .word 0x24020001
  .word 0x146202bd
  .word 0x00000000
  .word 0x8e020038
  .word 0x104002ba
  .word 0x00000000
  .word 0x8e020004
  .word 0x30420001
  .word 0x14400078
  .word 0x00000000
  .word 0x8e020020
  .word 0x8c440018
  .word 0x24050002
  .word 0x0c124cdc
  .word 0x00000000
  .word 0x8e020020
  .word 0x8c420018
  .word 0x8c42005c
  .word 0x8c510014
  .word 0x8e020010
  .word 0x24420002
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6200000
  .word 0x8e020014
  .word 0x24440002
  .word 0x8e03002c
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00821021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6200004
  .word 0x8e020010
  .word 0x24430002
  .word 0x8e020018
  .word 0x2442fffc
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe620000c
  .word 0x8e020014
  .word 0x24440002
  .word 0x8e03002c
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00821021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6200010
  .word 0x8e020010
  .word 0x24420002
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6200018
  .word 0x8e020014
  .word 0x2444000e
  .word 0x8e03002c
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00821021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe620001c
  .word 0x8e020010
  .word 0x24430002
  .word 0x8e020018
  .word 0x2442fffc
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6200024
  .word 0x8e020014
  .word 0x2444000e
  .word 0x8e03002c
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00821021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6200028
  .word 0x3404fff0
  .word 0x0c079f08
  .word 0x00000000
  .word 0x0220202d
  .word 0x46000306
  .word 0x0c079ec4
  .word 0x00000000
  .word 0x8e020020
  .word 0x8c440018
  .word 0x0c124cf4
  .word 0x00000000
  .word 0x3c110096
  .word 0x26310090
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
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
  .word 0x8e040020
  .word 0x8c820048
  .word 0x0040f809
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0689c8
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30621000
  .word 0x1040001b
  .word 0x00000000
  .word 0x8e030038
  .word 0x8e020034
  .word 0x0062082a
  .word 0x10200003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0040182d
  .word 0x8e02002c
  .word 0x2442ffff
  .word 0xae02002c
  .word 0x0441022a
  .word 0x00000000
  .word 0xae00002c
  .word 0x8e020030
  .word 0x2442ffff
  .word 0xae020030
  .word 0x04410224
  .word 0x00000000
  .word 0x2462ffff
  .word 0xae02002c
  .word 0x8e020038
  .word 0x00431023
  .word 0xae020030
  .word 0x1000021d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040001d
  .word 0x00000000
  .word 0x8e030038
  .word 0x8e020034
  .word 0x0062082a
  .word 0x10200003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0040182d
  .word 0x8e02002c
  .word 0x24420001
  .word 0xae02002c
  .word 0x0043102a
  .word 0x1440020c
  .word 0x00000000
  .word 0x2462ffff
  .word 0xae02002c
  .word 0x8e020030
  .word 0x24420001
  .word 0xae020030
  .word 0x00431821
  .word 0x8e020038
  .word 0x0043082a
  .word 0x10200202
  .word 0x00000000
  .word 0xae00002c
  .word 0xae000030
  .word 0x100001fe
  .word 0x00000000
  .word 0x30622000
  .word 0x1040003a
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c069144
  .word 0x00000000
  .word 0x0240202d
  .word 0x0040282d
  .word 0x0c0690cc
  .word 0x00000000
  .word 0x104001f2
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030004
  .word 0x1083001f
  .word 0x00000000
  .word 0x24030003
  .word 0x10830011
  .word 0x00000000
  .word 0x24030002
  .word 0x10830008
  .word 0x00000000
  .word 0x24020001
  .word 0x108201e5
  .word 0x00000000
  .word 0x108001e3
  .word 0x00000000
  .word 0x100001e1
  .word 0x00000000
  .word 0x8c430208
  .word 0x38630001
  .word 0x0003182b
  .word 0xac430208
  .word 0x100001db
  .word 0x00000000
  .word 0x8c430208
  .word 0x24640001
  .word 0xac440208
  .word 0x8c430214
  .word 0x0064082a
  .word 0x102001d4
  .word 0x00000000
  .word 0x8c430210
  .word 0xac430208
  .word 0x100001d0
  .word 0x00000000
  .word 0xc441020c
  .word 0xc78080b0
  .word 0x46000840
  .word 0xe441020c
  .word 0xc4400214
  .word 0x46800020
  .word 0x46000836
  .word 0x450101c7
  .word 0x00000000
  .word 0xc4400210
  .word 0x46800020
  .word 0xe440020c
  .word 0x100001c2
  .word 0x00000000
  .word 0x30628000
  .word 0x1040003a
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c069144
  .word 0x00000000
  .word 0x0240202d
  .word 0x0040282d
  .word 0x0c0690cc
  .word 0x00000000
  .word 0x104001b6
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030004
  .word 0x1083001f
  .word 0x00000000
  .word 0x24030003
  .word 0x10830011
  .word 0x00000000
  .word 0x24030002
  .word 0x10830008
  .word 0x00000000
  .word 0x24020001
  .word 0x108201a9
  .word 0x00000000
  .word 0x108001a7
  .word 0x00000000
  .word 0x100001a5
  .word 0x00000000
  .word 0x8c430208
  .word 0x38630001
  .word 0x0003182b
  .word 0xac430208
  .word 0x1000019f
  .word 0x00000000
  .word 0x8c430208
  .word 0x2464ffff
  .word 0xac440208
  .word 0x8c430210
  .word 0x0083082a
  .word 0x10200198
  .word 0x00000000
  .word 0x8c430214
  .word 0xac430208
  .word 0x10000194
  .word 0x00000000
  .word 0xc441020c
  .word 0xc78080b0
  .word 0x46000841
  .word 0xe441020c
  .word 0xc4400210
  .word 0x46800020
  .word 0x46000834
  .word 0x4500018b
  .word 0x00000000
  .word 0xc4400214
  .word 0x46800020
  .word 0xe440020c
  .word 0x10000186
  .word 0x00000000
  .word 0x30620008
  .word 0x1040003a
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c069144
  .word 0x00000000
  .word 0x0240202d
  .word 0x0040282d
  .word 0x0c0690cc
  .word 0x00000000
  .word 0x1040017a
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030004
  .word 0x1083001f
  .word 0x00000000
  .word 0x24030003
  .word 0x10830011
  .word 0x00000000
  .word 0x24030002
  .word 0x10830008
  .word 0x00000000
  .word 0x24020001
  .word 0x1082016d
  .word 0x00000000
  .word 0x1080016b
  .word 0x00000000
  .word 0x10000169
  .word 0x00000000
  .word 0x8c430208
  .word 0x38630001
  .word 0x0003182b
  .word 0xac430208
  .word 0x10000163
  .word 0x00000000
  .word 0x8c430208
  .word 0x2464000a
  .word 0xac440208
  .word 0x8c430214
  .word 0x0064082a
  .word 0x1020015c
  .word 0x00000000
  .word 0x8c430210
  .word 0xac430208
  .word 0x10000158
  .word 0x00000000
  .word 0xc441020c
  .word 0xc7808030
  .word 0x46000840
  .word 0xe441020c
  .word 0xc4400214
  .word 0x46800020
  .word 0x46000836
  .word 0x4501014f
  .word 0x00000000
  .word 0xc4400210
  .word 0x46800020
  .word 0xe440020c
  .word 0x1000014a
  .word 0x00000000
  .word 0x30620004
  .word 0x1040003a
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c069144
  .word 0x00000000
  .word 0x0240202d
  .word 0x0040282d
  .word 0x0c0690cc
  .word 0x00000000
  .word 0x1040013e
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030004
  .word 0x1083001f
  .word 0x00000000
  .word 0x24030003
  .word 0x10830011
  .word 0x00000000
  .word 0x24030002
  .word 0x10830008
  .word 0x00000000
  .word 0x24020001
  .word 0x10820131
  .word 0x00000000
  .word 0x1080012f
  .word 0x00000000
  .word 0x1000012d
  .word 0x00000000
  .word 0x8c430208
  .word 0x38630001
  .word 0x0003182b
  .word 0xac430208
  .word 0x10000127
  .word 0x00000000
  .word 0x8c430208
  .word 0x2464fff6
  .word 0xac440208
  .word 0x8c430210
  .word 0x0083082a
  .word 0x10200120
  .word 0x00000000
  .word 0x8c430214
  .word 0xac430208
  .word 0x1000011c
  .word 0x00000000
  .word 0xc441020c
  .word 0xc7808030
  .word 0x46000841
  .word 0xe441020c
  .word 0xc4400210
  .word 0x46800020
  .word 0x46000834
  .word 0x45000113
  .word 0x00000000
  .word 0xc4400214
  .word 0x46800020
  .word 0xe440020c
  .word 0x1000010e
  .word 0x00000000
  .word 0x30620002
  .word 0x10400052
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c069144
  .word 0x00000000
  .word 0x0240202d
  .word 0x0040282d
  .word 0x0c0690cc
  .word 0x00000000
  .word 0x24050001
  .word 0x10400101
  .word 0x00000000
  .word 0x8f83b450
  .word 0x2c630096
  .word 0x14600002
  .word 0x00000000
  .word 0x2405000a
  .word 0x8c440004
  .word 0x24030004
  .word 0x10830024
  .word 0x00000000
  .word 0x24030003
  .word 0x10830011
  .word 0x00000000
  .word 0x24030002
  .word 0x10830008
  .word 0x00000000
  .word 0x24020001
  .word 0x108200ef
  .word 0x00000000
  .word 0x108000ed
  .word 0x00000000
  .word 0x100000eb
  .word 0x00000000
  .word 0x8c430208
  .word 0x38630001
  .word 0x0003182b
  .word 0xac430208
  .word 0x100000e5
  .word 0x00000000
  .word 0x00051880
  .word 0x00652021
  .word 0x00041880
  .word 0x00831821
  .word 0x00032080
  .word 0x8c430208
  .word 0x00642021
  .word 0xac440208
  .word 0x8c430214
  .word 0x0064082a
  .word 0x102000d9
  .word 0x00000000
  .word 0x8c430210
  .word 0xac430208
  .word 0x100000d5
  .word 0x00000000
  .word 0xc441020c
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x46000840
  .word 0xe441020c
  .word 0xc4400214
  .word 0x46800020
  .word 0x46000836
  .word 0x450100bf
  .word 0x00000000
  .word 0xc4400210
  .word 0x46800020
  .word 0xe440020c
  .word 0x100000ba
  .word 0x00000000
  .word 0x30620001
  .word 0x10400052
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c069144
  .word 0x00000000
  .word 0x0240202d
  .word 0x0040282d
  .word 0x0c0690cc
  .word 0x00000000
  .word 0x24050001
  .word 0x104000ad
  .word 0x00000000
  .word 0x8f83b454
  .word 0x2c630096
  .word 0x14600002
  .word 0x00000000
  .word 0x2405000a
  .word 0x8c440004
  .word 0x24030004
  .word 0x10830024
  .word 0x00000000
  .word 0x24030003
  .word 0x10830011
  .word 0x00000000
  .word 0x24030002
  .word 0x10830008
  .word 0x00000000
  .word 0x24020001
  .word 0x1082009b
  .word 0x00000000
  .word 0x10800099
  .word 0x00000000
  .word 0x10000097
  .word 0x00000000
  .word 0x8c430208
  .word 0x38630001
  .word 0x0003182b
  .word 0xac430208
  .word 0x10000091
  .word 0x00000000
  .word 0x00051880
  .word 0x00652021
  .word 0x00041880
  .word 0x00831821
  .word 0x00032080
  .word 0x8c430208
  .word 0x00642023
  .word 0xac440208
  .word 0x8c430210
  .word 0x0083082a
  .word 0x10200085
  .word 0x00000000
  .word 0x8c430214
  .word 0xac430208
  .word 0x10000081
  .word 0x00000000
  .word 0xc441020c
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x46000841
  .word 0xe441020c
  .word 0xc4400210
  .word 0x46800020
  .word 0x46000834
  .word 0x4500006b
  .word 0x00000000
  .word 0xc4400214
  .word 0x46800020
  .word 0xe440020c
  .word 0x10000066
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x10400061
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c069144
  .word 0x00000000
  .word 0x0240202d
  .word 0x0040282d
  .word 0x0c0690cc
  .word 0x00000000
  .word 0x10400058
  .word 0x00000000
  .word 0x8c45021c
  .word 0x10a00055
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030004
  .word 0x1083003e
  .word 0x00000000
  .word 0x24030003
  .word 0x1083002a
  .word 0x00000000
  .word 0x24030002
  .word 0x10830027
  .word 0x00000000
  .word 0x24030001
  .word 0x10830014
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000044
  .word 0x00000000
  .word 0x8c420220
  .word 0x10400008
  .word 0x00000000
  .word 0xafa00080
  .word 0xafa20084
  .word 0x27a40080
  .word 0x00a0f809
  .word 0x00000000
  .word 0x1000003a
  .word 0x00000000
  .word 0x0000202d
  .word 0x00a0f809
  .word 0x00000000
  .word 0x10000035
  .word 0x00000000
  .word 0x8c430220
  .word 0x10600009
  .word 0x00000000
  .word 0x24420108
  .word 0xafa20080
  .word 0xafa30084
  .word 0x27a40080
  .word 0x00a0f809
  .word 0x00000000
  .word 0x1000002a
  .word 0x00000000
  .word 0x24440108
  .word 0x00a0f809
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x8c440220
  .word 0x1080000a
  .word 0x00000000
  .word 0x24430208
  .word 0xafa30080
  .word 0xafa40084
  .word 0x27a40080
  .word 0x8c42021c
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x24440208
  .word 0x00a0f809
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x8c430220
  .word 0x10600009
  .word 0x00000000
  .word 0x2442020c
  .word 0xafa20080
  .word 0xafa30084
  .word 0x27a40080
  .word 0x00a0f809
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x2444020c
  .word 0x00a0f809
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma schedule reset
 
// FUN_001A3A60
void func_001a3a60(KwlnTask* task)
{
    KWindowManagerWork* manager;

    manager = (KWindowManagerWork*)task->workData;
    func_001a44a0(task);
    if (manager->colorData != NULL)
    {
        func_00494cc0(manager->colorData);
    }
    if (manager->renderData != NULL)
    {
        func_001e7a60(manager->renderData);
    }
    (*(void (**)(void*))D_0096017c_abs)(task->workData);
}

// FUN_001A3AE0
KwlnTask* func_001a3ae0(KwlnTask* parent, u32 width, u32 height, u32 unused)
{
    (void)unused;
    return func_001a3b10(parent, width, height, 0);
}

// FUN_001A3B10
KwlnTask* func_001a3b10(KwlnTask* parent, u32 width, u32 height, u32 mode)
{
    KWindowManagerWork* manager;
    KwlnTask* task;

    manager = (KWindowManagerWork*)RwCalloc(1, sizeof(KWindowManagerWork),
                                             rwMEMHINTDUR_GLOBAL);
    if (manager == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreateWithAutoPriority(parent,
                                          0x106f,
                                          D_00678AF8,
                                          func_001a2a80,
                                          func_001a3a60,
                                          manager);
    manager->x = (s32)width;
    manager->y = (s32)height;
    manager->width = 0x80;
    manager->height = 0x80;
    manager->visibleRows = 10;
    manager->mode = (s32)mode;
    return task;
}

// FUN_001A3BE0
void func_001a3be0(KwlnTask* task, u32 flags)
{
    ((KWindowManagerWork*)task->workData)->flags = flags;
}

// FUN_001A3BF0
void func_001a3bf0(KwlnTask* task, u32 request)
{
    KWindowManagerWork* manager;

    manager = (KWindowManagerWork*)task->workData;
    manager->request = request;
    if (manager->windowTask != NULL)
    {
        func_001a23d0(manager->windowTask, request);
    }
}

// FUN_001A3C30
void func_001a3c30(KwlnTask* task)
{
    KWindowManagerWork* manager;
    KWindowEntry* entry;
    u32 maxWidth;
    s32 width;
    s32 height;
    s32 lineCount;

    manager = (KWindowManagerWork*)task->workData;
    entry = manager->entries;
    maxWidth = 0;
    while (entry != NULL)
    {
        width = strlen(entry->name);
        switch (entry->type)
        {
            case 0:
                break;
            case 1:
                width += strlen(entry->text) + 1;
                break;
            case 2:
                width += strlen((const char*)&gp0xffff9484) + 1;
                break;
            case 3:
                if (entry->flags == 0)
                {
                    width += 9;
                }
                else
                {
                    width += 11;
                }
                break;
            case 4:
                width += 8;
                break;
        }
        if (maxWidth < (u32)width)
        {
            maxWidth = (u32)width;
        }
        entry = entry->next;
    }

    manager->width = maxWidth * 12 + 4;
    lineCount = manager->entryCount * 12 + 4;
    height = manager->visibleRows * 12 + 4;
    manager->height = height;
    if (lineCount < height)
    {
        manager->height = lineCount;
    }
    if (manager->windowTask != NULL)
    {
        func_001a23e0(manager->windowTask, (RwRect*)&manager->x);
    }
}

// FUN_001A3DC0
void func_001a3dc0(KwlnTask* task, const KWindowEntryDescriptor* descriptors,
                   u32 count)
{
    u32 i;
    u32 id;

    i = 0;
    while (i < count)
    {
        id = func_001a3f20(task, descriptors->name);
        switch (descriptors->type)
        {
            case 0:
                break;
            case 1:
                func_001a4090(task, id, descriptors->text);
                break;
            case 2:
                func_001a41f0(task, id, descriptors->value0);
                break;
            case 3:
                func_001a4110(task, id, descriptors->value0,
                              descriptors->value1, descriptors->value2,
                              descriptors->value3);
                break;
            case 4:
                func_001a4260(task, id, descriptors->value0,
                              descriptors->value1, descriptors->value2);
                break;
        }
        if (descriptors->callback != NULL)
        {
            func_001a4050(task, id, descriptors->callback);
        }
        i++;
        descriptors++;
    }
}
