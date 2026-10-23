#include "Kosaka/Field/k_fldFrame.h"
#include "Kosaka/Field/k_field.h"
#include "Kosaka/Field/k_unit.h"
#include "Kosaka/Field/k_sceneDraw.h"
#include "Kosaka/k_footstep.h"
#include "Graphics/Model/mdlManager.h"
#include "Graphics/primitive.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Kernel/Kwln/kwln.h"
#include "Scene/mt_scene.h"
#include "Scene/resrcManager.h"
#include "libm.h"

#pragma alias func_004912b0_y2 func_004912b0_y2

/* RenderWare's retail globals place memFuncs at absolute offset 0x178. */
#pragma alias rwGlobals_abs rwGlobals
extern u8 rwGlobals_abs[];
typedef void* (*KFldFrameRwCallocFunc)(u32 elemCount, u32 elemSize, u32 hint);
#pragma alias memcpy_k_fldFrame_typed memcpy
extern void* memcpy_k_fldFrame_typed(void* dst, const void* src, u32 size);
#pragma alias memset_k_fldFrame_typed memset
extern void* memset_k_fldFrame_typed(void* dst, s32 value, u32 size);


#define COLLISCTL_SUBSTEPS 3

static RwRGBA sDebugSphereColor = {0, 168, 168, 168};
static const RwV3d sAxisUp = {0.0f, 1.0f, 0.0f};
static const RwV3d sAxisForward = {0.0f, 0.0f, 1.0f};

KwlnTask* K_FldFrame_CreateCollisSphereTask(KwlnTask* parent);
void K_FldFrame_CollisSphereSetDrawEnabled(KwlnTask* collisSphereTask, u32 drawEnabled);

typedef struct FldFrameResourceCollision
{
    void* unk_00;
    void* unk_04;
    void* collisionWorld;
} FldFrameResourceCollision;

extern RwV3d D_00683780[];
extern const char D_00678CE0[];
#pragma alias D_00678CE0_typed D_00678CE0
extern const char D_00678CE0_typed[];
#pragma alias K_Clump_MatUsrDataHasData_typed K_Clump_MatUsrDataHasData
extern u32 K_Clump_MatUsrDataHasData_typed(const void* material, const char* name);
extern RwSphere* func_004912b0(void* atomic);
extern RwCamera* DAT_00960070;
#pragma alias DAT_00960070_abs DAT_00960070
extern u8 DAT_00960070_abs[];
typedef struct FldFrameAtomicQuery
{
    void* output;
    u8 intersection[0x2c];
    void* atomic;
} FldFrameAtomicQuery;
extern s32 func_001ab390(void* collision, const RwV3d* pos, RwV3d* translation,
                         f32 sphereCollisRadius);
extern s32 func_001abd20(void* collisionWorld, const RwV3d* pos, RwV3d* translation,
                          f32 sphereCollisRadius, u16 resTypeId);
extern void* func_001ac950(const RwV3d* line, void* unused,
                           const void* triangle, FldFrameRaycast* raycast);
extern void* func_001acb20(void* collisionWorld, FldFrameRaycast* raycast);
extern void func_00464020(void* collision, void* intersection, void* callback, void* param);
extern void func_00464120(void* collision, void* state, void* callback, void* param);
extern void FUN_004916d0(void* collisionWorld, void* callback, void* param);
extern RwMatrix* func_004cb2f0(void* frame);
extern RwV3d* func_004c6ca0(RwV3d* out, const RwV3d* in,
                            u32 count, const RwMatrix* matrix);
extern f32 func_004c6ac0(const RwV3d* vector);
extern f32 fGpffff8078;
extern f32 fGpffff820c;
#pragma alias jtbl_0096017C_abs jtbl_0096017C
extern u32 jtbl_0096017C_abs[];
extern u8 D_008717A0[];
extern u8 D_0086B180[];


typedef struct FldFrameMovePoint
{
    u32 kind;
    RwV3d position;
    f32 duration;
    KwlnTask* drawTask;
} FldFrameMovePoint;
typedef struct FldFrameMoveWork
{
    u32 state;
    u32 flags;
    u32 mode;
    void* resource;
    s32 animation;
    s32 targetAnimation;
    s32 pathMode;
    s32 pointCount;
    FldFrameMovePoint points[48];
    RwV3d startPosition;
    f32 currentAngle;
    f32 angleStep;
    s32 turnMode;
    s32 frame;
    RwV3d direction;
    f32 directionLength;
    void* drawMatrix;
    s32 frameCount;
    f32 frameRemainder;
    s32 pendingPointCount;
    u8 reserved[0x5a0 - 0x4dc];
} FldFrameMoveWork;
extern void* func_004c38c0(void);
extern void func_004c3880(void* matrix);
extern void func_0045edc0(void* work);
extern s32 func_001dde00(s32 value);
extern s32 func_001ded40(s32 value);
extern s32 func_003182d0(Model* model, s32 layer, s32 animation, s32 mode, s32 flag);
extern void func_003189f0(Model* model, s32 layer, f32 speed);
extern s32 func_00318540(Model* model, s32 layer);
extern void* func_00318b60(u32 id);
extern f32 func_001a5aa0(void* matrix);
extern s32 func_00530da0(f32 value);
extern s32 func_0052e118(s32 value);
extern s32 func_0045ec20(s32 left, s32 right);
extern f32 fGpffff82b0;
extern f32 fGpffff82b4;
extern void func_00318a30(Model* model, const RwV3d* offset, s32 combine);
extern void func_00318a50(Model* model, const RwV3d* axis, f32 angle,
                          s32 combine);
extern void func_004c31b0(RwMatrix* matrix, const RwV3d* axis, f32 angle,
                          s32 combine);
extern void func_001ad9e0(KwlnTask* ctl, void* matrix);
extern f32 func_004c69f0(RwV3d* out, const RwV3d* in);
extern f32 func_0052e9e8(f32 value);
extern KwlnTask* K_Draw_CreatePositionTask(s32 parent);
extern void K_Draw_SetPositionColor(KwlnTask* task, const RwRGBA* color);
extern void K_Draw_SetPositionPos(KwlnTask* task, const RwV3d* position);
extern void* func_0048dab0(s32 count, s32 mode, const RwV3d* position);
extern void func_0048d480(f32 frame, void* curve, s32 flags, RwV3d* output, s32 unused);
extern void func_0048da30(void* curve);
extern void* func_001a4cd0(s32 parent);
extern void func_001a4dc0(void* task, const RwRGBA* color);
extern void func_001a4e60(void* task, const RwV3d* position);
extern u8 D_007E095F[];
extern u8 D_007E095E[];
extern u8 D_007E0960[];
extern u8 D_007E0961[];
extern u8 D_007E094C[];
typedef struct FldFrameCollisionTriangle
{
    RwV3d normal;
    u8 reserved[16];
    const RwV3d* vertices[3];
} FldFrameCollisionTriangle;
typedef struct FldFrameCollisionCollector
{
    RwV3d points[64];
    RwV3d normals[64];
    f32 distances[64];
    u8 reserved[0x400];
    u32 mode;
    u32 count;
    u32 blockingCount;
    u8 tail0[0x28];
    void* owner;
    u8 tail1[0x60];
} FldFrameCollisionCollector;
typedef struct FldFrameCollisionQuery
{
    u8 prefix[0x10];
    RwV3d center;
    f32 radius;
    u8 reserved[0x18];
    u32 type;
} FldFrameCollisionQuery;
typedef struct FldFrameResourceSet
{
    u32 count;
    u32 reserved;
    void* items[64];
} FldFrameResourceSet;
typedef struct FldFrameResourceQuery
{
    void* output;
    u32 direction[6];
    u32 directionMode;
    RwV4d position;
    void* resource;
} FldFrameResourceQuery;
typedef struct FldFrameResourceTable
{
    u32 count;
    u8 reserved[4];
    void* items[64];
} FldFrameResourceTable;
typedef struct FldFrameMaterialWork
{
    u8 reserved_00[8];
    u32 flags;
    u8 reserved_0c[0x14];
    void* items;
    u32 itemCount;
    u8 reserved_28[4];
    void* indices;
} FldFrameMaterialWork;
typedef struct FldFrameMaterialLink
{
    u8 reserved_00[0x18];
    FldFrameMaterialWork* work;
} FldFrameMaterialLink;
typedef struct FldFrameMaterialSet
{
    FldFrameResourceTable* table;
    u8 reserved_04[0x2c];
    FldFrameMaterialLink* link;
} FldFrameMaterialSet;
typedef struct FldFrameMaterialIndex
{
    u8 reserved_00[6];
    u16 value;
} FldFrameMaterialIndex;
static const char sFldFrameMaterialName[] = "per3TrnsWall";
extern u8 DAT_008717f0[];
extern void* func_00318b80(u32 id);
extern void* func_00318b60(u32 id);
extern void* func_004353f0(void* arg);
extern void* func_002ff790_k_fldFrame_void(void* object);
extern u32 func_001acb70(void* collisionWorld, const RwV3d* line, RwV3d* hitPointDst);
extern u32 func_001afd40(KwlnTask* task, const RwV3d* position, f32 duration);
#include "Kosaka/k_clump.h"
#include "Kosaka/Field/k_dungeon.h"
#include "Main/g_data.h"
#include "h_cdvd.h"
#include "h_snd.h"
#include "rw/rpusrdat.h"
#include "rw/rpworld.h"
#include "temporary.h"
typedef void* (*KClumpCallback)(void* object, void* data);
typedef struct KClumpMaterialNode
{
    void* object;       // 0x00
    u32 enabled;         // 0x04
    u32 flags;           // 0x08
    f32 colorScale[4];   // 0x0c
    u32 kind;            // 0x1c
    u8 reserved[8];      // 0x20
    struct KClumpMaterialNode* next; // 0x28
} KClumpMaterialNode;
typedef struct KClumpContainer
{
    u8 reserved[0x18];
    void* resources;     // 0x18
} KClumpContainer;
typedef struct KClumpResourceList
{
    u8 reserved[0x20];
    void** materials;     // 0x20
    u32 count;            // 0x24
} KClumpResourceList;
typedef struct KClumpStreamWork
{
    u32 state;
    u8 pad04[0x0c];
    u32 mode;
    void* stream;
    u32 current;
    u16 currentStatus;
    u16 pad1e;
    u32 count;
    void* queuedStreams[8];
    u32 queuedValues[8];
    u16 queuedStatus[8];
} KClumpStreamWork;
typedef struct KClumpUserDataContext
{
    char name[0x40];
    u32 count;
} KClumpUserDataContext;
extern void* func_004916d0(void* object, KClumpCallback callback, void* data);
extern void* func_004932c0(void* object, KClumpCallback callback, void* data);
extern void* func_004cb6e0(void* object, KClumpCallback callback, void* data);
extern void* func_0048ee30(void* object, s32 index);
extern s32 func_0048ede0(void* object);
extern s32 func_0048ef30(void* object);
extern s32 func_0048a2c0(void* object);
extern s32 func_0048a480(void* object);
extern void func_0048a3f0(void* object, u32 mode);
extern void func_0048a2a0(void* object, void* data);
extern void func_00466640(void* data);
extern void func_001b5a30(void* material);
extern RwSphere* func_004912b0_y2(void* object);
extern void* func_0034fcd0(void* data);
extern void* func_0034fd10(void* data);
extern void* func_0034fd30(void* data);
extern void* func_0034fd50(void* data);
extern void* func_0034fd70(void* data, u16 value);
extern void* func_0034fcf0(void* data);
extern void* func_0034fdf0(void* data, void* value);
extern void* func_0034fe80(void* data, void* value);
extern void* func_001021c0(void* path, u8* mode);
extern u32 func_001c7130(f32 value, u32 state);
extern void FUN_001099d0(u32 value, ...);
extern void FUN_00108fd0(u32 value, ...);
extern u8 FUN_0016ef30(void);
extern u32 FUN_0016f190(u32 flag);
extern u32 FUN_0017e480(u32 a, u32 b, u32 c, u32 d);
extern void K_Assert(const char* message, s32 line);
extern void (*D_00960090)(u32 state, ...);
extern u32 D_007CE204;
extern u32 D_007CC1E4;
extern u32 D_007CC1F4;
extern u32 D_007CC1F8;
extern u32 D_007CC1C0;
extern u32 D_007CE158;
extern u32 D_008668F0[];
extern void (*jtbl_0096017C)(void* memory);
extern void* D_007D2D60;
extern u8 D_00960090_abs[];
extern u8 D_007D2D60_abs[];
extern u32 D_00960184[];
extern char D_00678C78;
extern char D_00678C78_abs[];
extern u32 D_00678C00[];
extern const char D_00678C28[];
extern const char D_00678C38[];
extern const char D_00678C48[];
extern const char D_00678C60[];
extern f32 D_007CE154;
extern const char D_00678BD8[];
extern const char D_00678BE8[];
extern const char D_00678C88[];
extern const char D_00678CA0[];
extern const char D_00678CB8[];
extern u8 D_0067F080[];
extern u8 D_0067F100[];
extern u8 D_0067F140[];
extern u8 D_0067F180[];
extern u8 D_0067F200[];
extern u8 D_0067F240[];
extern u8 D_0067F2C0[];
extern u8 D_0067F300[];
extern u8 D_0067F340[];
extern u8 D_0067F380[];
extern void* func_001a65c0(void* geometry, const char** name);
extern void* func_001a6860(void* object, u32* context);
extern void* func_001a6d20(void* object, u32* context);
extern void func_001a71a0(u32* state, u32 kind, void* object, u32 enabled, u32 flags);
extern void* func_001a7370(void* material, u32* state);
extern void* func_001a74e0(void* object, u32* state);
extern void func_001a7710(u32* state);
extern void func_001a7910(void* object, f32* scale);
extern void func_001a8920(u32* entries, const u32* source);
extern s32 func_001a8db0(KwlnTask* task);
extern s32 func_001a91b0(KwlnTask* task, void* data);
static inline u32 fldFrameAddOffset(u32 offset, u32 base)
{
    return offset + base;
}
static inline u32 fldFrameIndexedAddress(u32 index, u32 base)
{
    return index * 4 + base;
}

static inline FldFrameMoveWork* fldFrameMoveWork(KwlnTask* task)
{
    return (FldFrameMoveWork*)task->workData;
}
static inline Model* fldFrameMoveModel(const FldFrameMoveWork* work)
{
    return *(Model**)((u8*)work->resource + 0x128);
}
static KwlnTask* fldFrameMoveCtl(const FldFrameMoveWork* work)
{
    if (work->resource == NULL)
    {
        return NULL;
    }
    return *(KwlnTask**)((u8*)work->resource + 0x1e0);
}
static void fldFrameMoveCopyPoint(FldFrameMovePoint* dst,
                                  const FldFrameMovePoint* src)
{
    *dst = *src;
}
static void fldFrameMoveResolvePosition(const RwV3d* input, RwV3d* output)
{
    RwV3d line[2];

    line[0] = *input;
    line[1] = *input;
    if (K_Scene_001a0250() != false)
    {
        line[0].y += 600.0f;
    }
    else
    {
        line[0].y += 200.0f;
    }
    line[1].y -= 1000.0f;
    if (K_FldFrame_Raycast(line, output) == false)
    {
        *output = *input;
    }
}
static void fldFrameMoveCreateDebugPoint(FldFrameMoveWork* work,
                                         FldFrameMovePoint* point,
                                         const RwRGBA* color)
{
    if ((work->flags & 0x80000000) != 0)
    {
        point->drawTask = K_Draw_CreatePositionTask(0);
        if (point->drawTask != NULL)
        {
            K_Draw_SetPositionColor(point->drawTask, color);
            K_Draw_SetPositionPos(point->drawTask, &point->position);
        }
    }
}
static void fldFrameMoveAppend(FldFrameMoveWork* work,
                               u32 kind,
                               const RwV3d* position,
                               f32 duration)
{
    FldFrameMovePoint* point;

    if (work->pointCount >= 47)
    {
        return;
    }
    point = &work->points[work->pointCount];
    point->kind = kind;
    point->position = *position;
    point->duration = duration;
    point->drawTask = NULL;
    work->pointCount++;
}
static void fldFrameMoveSetAnimation(FldFrameMoveWork* work,
                                     s16 animation,
                                     u16 blendFrames)
{
    Model* model = fldFrameMoveModel(work);

    if (model == NULL)
    {
        return;
    }
    if (mdlAnimGetId(model, 0) != animation)
    {
        mdlAnimSet(model, 0, animation, blendFrames, 1);
    }
    mdlAnimSetSpeed(model, 0, 1.0f);
}
static f32 FldFrame_Dot(const RwV3d* a, const RwV3d* b)
{
    return a->x * b->x + a->y * b->y + a->z * b->z;
}
static f32 FldFrame_LengthSquared(const RwV3d* value)
{
    return FldFrame_Dot(value, value);
}
static void FldFrame_CollisionCollectorReset(FldFrameCollisionCollector* collector)
{
    s32 i;

    collector->mode = 0;
    collector->count = 0;
    collector->blockingCount = 0;
    collector->owner = NULL;

    for (i = 0; i < 64; i++)
    {
        collector->points[i].x = 0.0f;
        collector->points[i].y = 0.0f;
        collector->points[i].z = 0.0f;
        collector->normals[i].x = 0.0f;
        collector->normals[i].y = 0.0f;
        collector->normals[i].z = 0.0f;
        collector->distances[i] = 1.0e30f;
    }
}
static s32 FldFrame_FindCollision(const FldFrameCollisionCollector* collector,
                                  const RwV3d* normal)
{
    s32 i;

    for (i = 0; i < (s32)collector->count; i++)
    {
        if (collector->normals[i].x == normal->x &&
            collector->normals[i].y == normal->y &&
            collector->normals[i].z == normal->z)
        {
            return i;
        }
    }
    return -1;
}
static void FldFrame_RecordCollision(FldFrameCollisionCollector* collector,
                                      const RwV3d* point, const RwV3d* normal,
                                      f32 distance)
{
    s32 index;

    index = FldFrame_FindCollision(collector, normal);
    if (index < 0)
    {
        if (collector->count >= 64)
        {
            return;
        }
        index = collector->count;
        collector->count++;
    }

    if (distance < collector->distances[index])
    {
        collector->points[index] = *point;
        collector->normals[index] = *normal;
        collector->distances[index] = distance;
    }
}
static void FldFrame_ApplyCollisions(FldFrameCollisionCollector* collector,
                                     RwV3d* translation, f32 radius)
{
    s32 i;

    for (i = 0; i < (s32)collector->count; i++)
    {
        RwV3d normal;
        f32 distance;
        f32 correction;
        f32 inward;

        distance = collector->distances[i];
        correction = radius - distance;
        if (correction <= 0.0f)
        {
            continue;
        }

        normal = collector->normals[i];
        if (FldFrame_LengthSquared(&normal) > 0.000001f)
        {
            RwV3dNormalize(&normal, &normal);
        }

        inward = FldFrame_Dot(translation, &normal);
        if (inward < 0.0f)
        {
            translation->x -= normal.x * inward;
            translation->y -= normal.y * inward;
            translation->z -= normal.z * inward;
        }

        if (FldFrame_LengthSquared(translation) < 0.000001f)
        {
            translation->x += normal.x * correction;
            translation->y += normal.y * correction;
            translation->z += normal.z * correction;
        }
    }
}
static u32 kclump_word(const void* object, u32 offset)
{
    return *(const u32*)((const u8*)object + offset);
}
static void kclump_set_word(void* object, u32 offset, u32 value)
{
    *(u32*)((u8*)object + offset) = value;
}
static f32 kclump_float(const void* object, u32 offset)
{
    return *(const f32*)((const u8*)object + offset);
}
static void kclump_set_float(void* object, u32 offset, f32 value)
{
    *(f32*)((u8*)object + offset) = value;
}
static inline void* kclump_alloc(u32 count, u32 size, u32 flags)
{
    return (*(void* (**)(u32, u32, u32))D_00960184)(count, size, flags);
}
static void kclump_free(void* memory)
{
    if (memory != NULL)
    {
        jtbl_0096017C(memory);
    }
}
static void kclump_call_resource(void* resource)
{
    void (*render)(void);

    render = *(void (**)(void))((u8*)resource + 0x48);
    if (render != NULL)
    {
        render();
    }
}
static u32 kclump_render_item(KClumpMaterialNode* item, u32 callbackFlag)
{
    RwSphere* sphere;

    sphere = func_004912b0_y2(item->object);
    if (sphere == NULL || RwCameraFrustumTestSphere((RwCamera*)D_007D2D60, sphere) == rwSPHEREOUTSIDE)
    {
        return 0;
    }

    if (item->enabled == 1)
    {
        D_00960090(0xe, 0);
    }
    if (*(u32*)callbackFlag == 1)
    {
        kclump_call_resource(item->object);
    }
    if (item->enabled == 1)
    {
        D_00960090(0xe, 1);
    }
    return 1;
}
static u32 kclump_scale_color(u32 component, f32 scale)
{
    f32 value;

    value = (f32)component * scale;
    if (value > 255.0f)
    {
        return 0xff;
    }
    if (value < 0.0f)
    {
        return 0;
    }
    return (u32)value;
}
static void kclump_render_list(void* list, u32 callbackFlag)
{
    KClumpMaterialNode* item;

    item = list != NULL ? *(KClumpMaterialNode**)list : NULL;
    while (item != NULL)
    {
        kclump_render_item(item, callbackFlag);
        item = item->next;
    }
}

// FUN_001a8920
void func_001a8920(u32* entries, const u32* source)
{
    u32* destination;
    s32 i;
    u32 value;

    if ((s32)entries[0] >= 0x80)
    {
        K_Assert(D_00678C78_abs, 0x3eb);
    }
    destination = (u32*)(entries[0] * 11 * 4);
    destination = (u32*)((u8*)destination + (u32)entries);
    destination++;
    i = 11;
    do
    {
        value = *source++;
        i--;
        *destination = value;
        destination++;
    } while (i > 0);
    entries[0]++;
}

// FUN_001a89c0
s32 func_001a89c0(const u32* left, const u32* right)
{
    RwCamera* camera;
    RwMatrix* cameraMatrix;
    RwV3d leftDelta;
    RwV3d rightDelta;
    RwV3d cameraPosition;
    f32 leftDistance;
    f32 rightDistance;

    camera = kwlnGetMainCamera();
    cameraMatrix = func_004cb2f0(*(void**)((u8*)camera + 4));
    cameraPosition = cameraMatrix->pos;
    leftDelta.x = func_004cb2f0(*(void**)(*left + 4))->pos.x - cameraPosition.x;
    leftDelta.y = func_004cb2f0(*(void**)(*left + 4))->pos.y - cameraPosition.y;
    leftDelta.z = func_004cb2f0(*(void**)(*left + 4))->pos.z - cameraPosition.z;
    rightDelta.x = func_004cb2f0(*(void**)(*right + 4))->pos.x - cameraPosition.x;
    rightDelta.y = func_004cb2f0(*(void**)(*right + 4))->pos.y - cameraPosition.y;
    rightDelta.z = func_004cb2f0(*(void**)(*right + 4))->pos.z - cameraPosition.z;
    leftDistance = RwV3dLength(&leftDelta);
    rightDistance = RwV3dLength(&rightDelta);
    return (s32)(leftDistance - rightDistance);
}

// FUN_001a8b10
void func_001a8b10(u32* entries)
{
    s32 i;
    KClumpMaterialNode* item;
    RwSphere* sphere;

    {
        s32 count = (s32)entries[0];
        qsort(entries + 1, count, 0x2c,
              (int (*)(const void*, const void*))func_001a89c0);
    }
    for (i = (s32)entries[0] - 1; i >= 0; i--)
    {
        item = (KClumpMaterialNode*)((u8*)entries + 4 + i * 0x2c);
        sphere = func_004912b0_y2(item->object);
        if (RwCameraFrustumTestSphere(
                (RwCamera*)*(void**)D_007D2D60_abs, sphere) != rwSPHEREOUTSIDE)
        {
            if (item->enabled == 1)
            {
                (*(void (**)(u32, ...))D_00960090_abs)(0xe, 0);
            }
            func_001a7910(item->object, (f32*)((u8*)item + 0x0c));
            if (item->colorScale[3] < 1.0f && item->colorScale[3] > 0.0f)
            {
                void (**renderState)(u32, ...);
                renderState = (void (**)(u32, ...))D_00960090_abs;
                (*renderState)(6, 1);
                (*renderState)(8, 1);
                RpSkyRenderStateSet(2, (void*)0x44);
                RpSkyRenderStateSet(3, (void*)0x72001);
                if (item->kind == 2)
                {
                    (*(void (**)(void*))((u8*)item->object + 0x48))(
                        item->object);
                }
                renderState = (void (**)(u32, ...))D_00960090_abs;
                (*renderState)(6, 1);
                (*renderState)(8, 0);
                switch (item->kind)
                {
                case 2:
                {
                    RpSkyRenderStateSet(2, (void*)0x44);
                    RpSkyRenderStateSet(3, (void*)0x717fb);
                }
                    break;
                case 4:
                {
                    RpSkyRenderStateSet(2, (void*)0x42);
                    RpSkyRenderStateSet(3, (void*)0x71801);
                }
                    break;
                case 3:
                {
                    RpSkyRenderStateSet(2, (void*)0x48);
                    RpSkyRenderStateSet(3, (void*)0x71801);
                }
                    break;
                }
                (*(void (**)(void*))((u8*)item->object + 0x48))(item->object);
            }
            if (item->enabled == 1)
            {
                (*(void (**)(u32, ...))D_00960090_abs)(0xe, 1);
            }
        }
    }
}

/* W420 operand-order probes for the loop address at offset 360:
 * direct pointer, scalar base+offset, base/offset inline, adjacent inline,
 * one-line inline, and opt_propagation-reset inline variants all grew the
 * object to 576/560 with nd192-193; replacing all indexed accesses stayed
 * nd143/560. The single-index helper was 576/560 nd193. Retain the nd2/552
 * indexed form. */
// FUN_001a8db0
s32 func_001a8db0(KwlnTask* task)
{
    u32* work;
    s32 i;
    u32 mode;

    work = (u32*)task->workData;
    switch (work[0])
    {
    case 0:
    {
        if (work[3] == 0)
        {
            if (H_Cdvd_IsFileLoaded((HCdvd*)work[1]) == 0)
            {
                break;
            }
            if (work[1] != 0)
            {
                work[5] = (u32)func_0034fcd0(*(void**)((u8*)work[1] + 0x110));
                H_Cdvd_Destroy((HCdvd*)work[1]);
                work[1] = 0;
            }
        }
        else
        {
            work[5] = (u32)func_0034fcd0(func_001021c0(work + 0x1d, (u8*)&mode));
        }
        work[0]++;
    }
        break;
    case 1:
        break;
    case 2:
    {
        if (work[4] == 0 && work[8] == 0)
        {
            work[0] = 1;
        }
        else
        {
            if (work[4] == 1)
            {
                if (work[6] < work[2])
                {
                    func_0034fd30((void*)work[5]);
                    func_0034fd70(
                        (void*)*(volatile u32*)&work[5],
                        (u16)work[7]);
                    work[6]++;
                }
                else
                {
                    work[4] = 0;
                }
            }
            for (i = 0; i < 8; i++)
            {
                if (*(u32*)(fldFrameIndexedAddress((u32)i, (u32)work) + 36) != 0)
                {
                    if (work[0x11 + i] < work[2])
                    {
                        func_0034fd30((void*)work[9 + i]);
                        func_0034fd70((void*)work[9 + i], *(u16*)((u8*)work + 100 + i * 2));
                        work[0x11 + i]++;
                    }
                    else
                    {
                        func_0034fcf0((void*)work[9 + i]);
                        work[9 + i] = 0;
                        work[8]--;
                    }
                }
            }
        }
    }
        break;
    case 3:
    {
        return -1;
    }
    }
    return 0;
}

// FUN_001a8fe0
void func_001a8fe0(KwlnTask* task)
{
    u32* work;
    s32 i;
    KwlnTask* parent;

    parent = task;
    work = (u32*)parent->workData;
    for (i = 0; i < 8; i++)
    {
        if (*(u32*)((u8*)work + (i * 4) + 36) != 0)
        {
            func_0034fcf0((void*)*(u32*)((u8*)work + (i * 4) + 36));
        }
    }
    if (work[5] != 0)
    {
        func_0034fcf0((void*)work[5]);
    }
    (*(void (**)(void*))jtbl_0096017C_abs)(parent->workData);
}

/* W389: nd 10, obj 524/528 before and after; absolute rwGlobals+0x184 call fixed the retail load form, declaration swap was neutral. Remaining nd10 is loop register colouring (base/index a2/a3 swap) plus commutative addu. */
// FUN_001a9080
KwlnTask* func_001a9080(KwlnTask* parent, const char* path, u32 state, HCdvd* cdvd)
{
    KwlnTask* task;
    u32* work;

    work = (u32*)(*(void* (**)(u32, u32, u32))D_00960184)(1, 0xb4, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreate(parent, D_00678C88, 0x14,
                          (KwlnTaskUpdateFunc)func_001a8db0,
                          (KwlnTaskDestroyFunc)func_001a8fe0, work);
    if (cdvd == NULL)
    {
        work[1] = (u32)H_Cdvd_Request(path, 0);
    }
    else
    {
        work[1] = (u32)cdvd;
        work[3] = 1;
    }
    work[2] = state;
    strcpy((char*)&work[0x1d], path);
    return task;
}

// FUN_001a9180
u32 func_001a9180(const KwlnTask* task)
{
    if (task == NULL)
    {
        return true;
    }
    return *(s32*)task->workData >= 1;
}

// FUN_001a91b0
s32 func_001a91b0(KwlnTask* task, void* data)
{
    KClumpStreamWork* work;
    KClumpStreamWork* indexedWork;
    s32 index;
    void* stream;
    u32 indexOffset;
    void** streamSlot;

    work = (KClumpStreamWork*)task->workData;
    index = -1;
    if (work->mode == 1)
    {
        index = 0;
        while (index < 8)
        {
            indexedWork = work;
            indexedWork = (KClumpStreamWork*)((s32)indexedWork + index * 4);
            if (indexedWork->queuedStreams[0] == NULL)
            {
                break;
            }
            index++;
        }
        indexOffset = index * 4;
        indexedWork = work;
        indexedWork = (KClumpStreamWork*)(indexOffset + (s32)indexedWork);
        streamSlot = &indexedWork->queuedStreams[0];
        *streamSlot = func_0034fd50(work->stream);
        stream = *streamSlot;
        func_0034fdf0(stream, data);
        *(u32*)((u8*)work->queuedValues + indexOffset) = 0;
        work->queuedStatus[index] = 2;
        work->count++;
    }
    else
    {
        func_0034fd10(work->stream);
        func_0034fdf0(work->stream, data);
        work->current = 0;
        work->mode = 1;
        work->currentStatus = 2;
    }
    work->state = 2;
    return index;
}

// FUN_001a92d0
void func_001a92d0(KwlnTask* task, s32 index, void* data)
{
    u32* work = (u32*)task->workData;
    void* stream;

    if (index >= 0)
    {
        stream = (void*)work[9 + index];
        if (stream != NULL)
        {
            func_0034fdf0(stream, data);
        }
    }
    else
    {
        func_0034fdf0((void*)work[5], data);
    }
}

// FUN_001a9330
void func_001a9330(KwlnTask* task, s32 index, void* data)
{
    u32* work = (u32*)task->workData;
    void* stream;

    if (index >= 0)
    {
        stream = (void*)work[9 + index];
        if (stream != NULL)
        {
            func_0034fe80(stream, data);
        }
    }
    else
    {
        func_0034fe80((void*)work[5], data);
    }
}

// FUN_001a9390
void func_001a9390(KwlnTask* task, s32 index, u16 value)
{
    u32* work = (u32*)task->workData;

    if (index >= 0)
    {
        if (work[9 + index] != 0)
        {
            *((u16*)((u8*)work + 0x64) + index) = value;
        }
    }
    else
    {
        *(u16*)((u8*)work + 0x1c) = value;
    }
}

// FUN_001a93d0
u32 func_001a93d0(const KwlnTask* task, s32 index)
{
    u32* work = (u32*)task->workData;
    if (index >= 0)
    {
        return work[0x11 + index];
    }
    return work[6];
}

// FUN_001a9400
void func_001a9400(KwlnTask* task, s32 index)
{
    u32* work = (u32*)task->workData;
    if (index >= 0)
    {
        if (work[9 + index] != 0)
        {
            func_0034fcf0((void*)work[9 + index]);
            work[9 + index] = 0;
            work[8]--;
        }
    }
    else
    {
        work[4] = 0;
    }
}

// FUN_001a9470
void func_001a9470(KwlnTask* task)
{
    u32* work;
    s32 i;

    if (task == NULL)
    {
        return;
    }
    work = (u32*)task->workData;
    for (i = 0; i < 8; i++)
    {
        if (*(u32*)((u8*)work + i * 4 + 0x24) != 0)
        {
            func_0034fcf0((void*)*(u32*)((u8*)work + i * 4 + 0x24));
            *(u32*)((u8*)work + i * 4 + 0x24) = 0;
        }
    }
    work[8] = 0;
    if (work[5] != 0)
    {
        work[4] = 0;
    }
}

// FUN_001a9500
s32 func_001a9500(KwlnTask* task)
{
    typedef struct KClumpSoundUpdateWork
    {
        s32 state;
        s32 delay;
        s32 timer;
        s32 count;
        u32 values[8];
        RwV3d positions[8];
        u32 sounds[8];
        u32 flags[8];
    } KClumpSoundUpdateWork;
    KClumpSoundUpdateWork* work;
    s32 i;
    s32 fieldIndex;
    u8* fieldBase;

    work = (KClumpSoundUpdateWork*)task->workData;
    switch (work->state)
    {
    case 0:
        work->state++;
    case 1:
        if (work->count > 0)
        {
            fieldBase = (u8*)K_Field_Get();
            fieldIndex = (s32)work->values[0];
            func_001a91b0(
                *(KwlnTask**)(fieldBase + fieldIndex * 4 + 0x11f4),
                &work->positions[0]);
            if (((s32)work->sounds[0] <= -1) != 0)
            {
            }
            else
            {
                func_0010a4e0(1, 8, (s16)work->sounds[0], (s16)work->flags[0]);
            }
            work->count--;
            for (i = 1; i < 8; i++)
            {
                *((u32*)work + 4 + i - 1) = *((u32*)work + 4 + i);
                ((RwV3d*)work)[4 + i - 1] = ((RwV3d*)work)[4 + i];
                work->sounds[i - 1] = work->sounds[i];
                work->flags[i - 1] = work->flags[i];
            }
            work->timer = 0;
            work->state++;
        }
        break;
    case 2:
        if (work->timer < work->delay)
        {
            work->timer++;
        }
        else
        {
            work->state = 1;
        }
        break;
    case 3:
        return -1;
    }
    return 0;
}

// FUN_001a9690
void func_001a9690(KwlnTask* task)
{
    (*(void (**)(void*))((u8*)0x00960000 + 0x17c))(task->workData);
}

// FUN_001a96c0
KwlnTask* func_001a96c0(KwlnTask* parent)
{
    u32* work;
    KwlnTask* task;

    work = (u32*)(*(void* (**)(u32, u32, u32))D_00960184)(1, 0xd0, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreateWithAutoPriority(parent, 10, D_00678CA0,
                                          (KwlnTaskUpdateFunc)func_001a9500,
                                          (KwlnTaskDestroyFunc)func_001a9690, work);
    work[1] = 0x14;
    return task;
}

// FUN_001a9760
void func_001a9760(KwlnTask* task, u32 value, const RwV3d* position, u32 sound, u32 flags)
{
    typedef struct KClumpSoundWork
    {
        s32 header[3];
        s32 count;
        u32 values[8];
        RwV3d positions[8];
        u32 sounds[8];
        u32 flags[8];
    } KClumpSoundWork;
    KClumpSoundWork* work;

    if (task == NULL)
    {
        return;
    }
    work = (KClumpSoundWork*)task->workData;
    if (work->count >= 8)
    {
        K_Assert(&D_00678C78, 0x260);
    }
    work->values[work->count] = value;
    work->positions[work->count] = *position;
    work->sounds[work->count] = sound;
    work->flags[work->count] = flags;
    work->count++;
}

// FUN_001a9850
asm void func_001a9850(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8f84b514
  .word 0x24030001
  .word 0x1083024c
  .word 0x00000000
  .word 0x0c06ffc8
  .word 0x00000000
  .word 0x0040802d
  .word 0x1a0000c0
  .word 0x00000000
  .word 0x2a010002
  .word 0x14200010
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05bce0
  .word 0x00000000
  .word 0x1840000b
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05bce0
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000235
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x14400063
  .word 0x00000000
  .word 0x2a030191
  .word 0x14600007
  .word 0x00000000
  .word 0x24040046
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000228
  .word 0x00000000
  .word 0x2a030190
  .word 0x14600007
  .word 0x00000000
  .word 0x24040001
  .word 0x0080282d
  .word 0x0c042674
  .word 0x00000000
  .word 0x1000021f
  .word 0x00000000
  .word 0x2a030122
  .word 0x14600007
  .word 0x00000000
  .word 0x24040001
  .word 0x0080282d
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000216
  .word 0x00000000
  .word 0x2a0300ff
  .word 0x14600007
  .word 0x00000000
  .word 0x2404004b
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x1000020d
  .word 0x00000000
  .word 0x2a0300d7
  .word 0x14600007
  .word 0x00000000
  .word 0x2404004a
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000204
  .word 0x00000000
  .word 0x2a0300a5
  .word 0x14600007
  .word 0x00000000
  .word 0x24040049
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x100001fb
  .word 0x00000000
  .word 0x2a030073
  .word 0x14600007
  .word 0x00000000
  .word 0x24040048
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x100001f2
  .word 0x00000000
  .word 0x2a030041
  .word 0x14600007
  .word 0x00000000
  .word 0x24040051
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x100001e9
  .word 0x00000000
  .word 0x2a030011
  .word 0x14600007
  .word 0x00000000
  .word 0x24040046
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x100001e0
  .word 0x00000000
  .word 0x2a030002
  .word 0x14600007
  .word 0x00000000
  .word 0x24040001
  .word 0x0080282d
  .word 0x0c042674
  .word 0x00000000
  .word 0x100001d7
  .word 0x00000000
  .word 0x1a0001d5
  .word 0x00000000
  .word 0x24040047
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x100001cf
  .word 0x00000000
  .word 0x2a0300a1
  .word 0x14600007
  .word 0x00000000
  .word 0x24040064
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x100001c6
  .word 0x00000000
  .word 0x2a030083
  .word 0x14600007
  .word 0x00000000
  .word 0x24040063
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x100001bd
  .word 0x00000000
  .word 0x2a030065
  .word 0x14600007
  .word 0x00000000
  .word 0x24040062
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x100001b4
  .word 0x00000000
  .word 0x2a030047
  .word 0x14600007
  .word 0x00000000
  .word 0x24040061
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x100001ab
  .word 0x00000000
  .word 0x2a030029
  .word 0x14600007
  .word 0x00000000
  .word 0x24040060
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x100001a2
  .word 0x00000000
  .word 0x2a030015
  .word 0x14600007
  .word 0x00000000
  .word 0x2404005f
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000199
  .word 0x00000000
  .word 0x2a030002
  .word 0x14600007
  .word 0x00000000
  .word 0x2404005e
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000190
  .word 0x00000000
  .word 0x24050001
  .word 0x1605018d
  .word 0x00000000
  .word 0x24040065
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000188
  .word 0x00000000
  .word 0x8f85a850
  .word 0x8ca40000
  .word 0x24020007
  .word 0x14820005
  .word 0x00000000
  .word 0x8ca30004
  .word 0x24020006
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020008
  .word 0x14820005
  .word 0x00000000
  .word 0x8ca30004
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x24020009
  .word 0x14820011
  .word 0x00000000
  .word 0x8ca30004
  .word 0x24020001
  .word 0x1462000d
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304300ff
  .word 0x24020008
  .word 0x14620007
  .word 0x00000000
  .word 0x24040047
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000165
  .word 0x00000000
  .word 0x24040e00
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24050001
  .word 0x14450006
  .word 0x00000000
  .word 0x24040013
  .word 0x0c042674
  .word 0x00000000
  .word 0x1000015a
  .word 0x00000000
  .word 0x24040e60
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24050001
  .word 0x14450006
  .word 0x00000000
  .word 0x24040014
  .word 0x0c0423f4
  .word 0x00000000
  .word 0x1000014f
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x2402001f
  .word 0x14620006
  .word 0x00000000
  .word 0x24040014
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000145
  .word 0x00000000
  .word 0x24040eef
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24050001
  .word 0x14450006
  .word 0x00000000
  .word 0x24040014
  .word 0x0c042674
  .word 0x00000000
  .word 0x1000013a
  .word 0x00000000
  .word 0x8f87a850
  .word 0x8ce60000
  .word 0x24030021
  .word 0x14c30006
  .word 0x00000000
  .word 0x24040014
  .word 0x0c0423f4
  .word 0x00000000
  .word 0x10000130
  .word 0x00000000
  .word 0x24030022
  .word 0x14c30006
  .word 0x00000000
  .word 0x24040016
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000128
  .word 0x00000000
  .word 0x24030023
  .word 0x14c30006
  .word 0x00000000
  .word 0x24040015
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000120
  .word 0x00000000
  .word 0x24030025
  .word 0x14c30006
  .word 0x00000000
  .word 0x24040047
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000118
  .word 0x00000000
  .word 0x2403000e
  .word 0x14c3000a
  .word 0x00000000
  .word 0x8ce40004
  .word 0x24030005
  .word 0x14830006
  .word 0x00000000
  .word 0x24040014
  .word 0x0c0423f4
  .word 0x00000000
  .word 0x1000010c
  .word 0x00000000
  .word 0x24030008
  .word 0x14c30005
  .word 0x00000000
  .word 0x8ce40004
  .word 0x24030003
  .word 0x10830008
  .word 0x00000000
  .word 0x24030005
  .word 0x14c3000b
  .word 0x00000000
  .word 0x8ce40004
  .word 0x24030003
  .word 0x14830007
  .word 0x00000000
  .word 0x24040036
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x100000f8
  .word 0x00000000
  .word 0x24030008
  .word 0x14c3000a
  .word 0x00000000
  .word 0x8ce40004
  .word 0x24030009
  .word 0x14830006
  .word 0x00000000
  .word 0x24040014
  .word 0x0c0423f4
  .word 0x00000000
  .word 0x100000ec
  .word 0x00000000
  .word 0x24030007
  .word 0x14c30016
  .word 0x00000000
  .word 0x8ce40004
  .word 0x24030001
  .word 0x14830012
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304200ff
  .word 0x28410002
  .word 0x14200007
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304300ff
  .word 0x28630007
  .word 0x14600006
  .word 0x00000000
  .word 0x24040014
  .word 0x0c0423f4
  .word 0x00000000
  .word 0x100000d4
  .word 0x00000000
  .word 0x8f87a850
  .word 0x8ce60000
  .word 0x24030008
  .word 0x14c30005
  .word 0x00000000
  .word 0x8ce40004
  .word 0x24030002
  .word 0x10830008
  .word 0x00000000
  .word 0x24030005
  .word 0x14c3000b
  .word 0x00000000
  .word 0x8ce40004
  .word 0x24030002
  .word 0x14830007
  .word 0x00000000
  .word 0x24040057
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x100000be
  .word 0x00000000
  .word 0x24030008
  .word 0x10c30010
  .word 0x00000000
  .word 0x24040009
  .word 0x10c4000d
  .word 0x00000000
  .word 0x2403000a
  .word 0x10c3000a
  .word 0x00000000
  .word 0x2403000c
  .word 0x10c30007
  .word 0x00000000
  .word 0x24030007
  .word 0x14c30028
  .word 0x00000000
  .word 0x8ce30004
  .word 0x14640025
  .word 0x00000000
  .word 0x24040004
  .word 0x24050005
  .word 0x2406000c
  .word 0x2407001f
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24050001
  .word 0x10450009
  .word 0x00000000
  .word 0x24040003
  .word 0x0080302d
  .word 0x24070005
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24040001
  .word 0x14440007
  .word 0x00000000
  .word 0x24040019
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000095
  .word 0x00000000
  .word 0x0080282d
  .word 0x24060002
  .word 0x2407001c
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24050001
  .word 0x1445008d
  .word 0x00000000
  .word 0x24040050
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000088
  .word 0x00000000
  .word 0x24030005
  .word 0x14c3000a
  .word 0x00000000
  .word 0x8ce30004
  .word 0x24050001
  .word 0x14650006
  .word 0x00000000
  .word 0x24040019
  .word 0x0c042674
  .word 0x00000000
  .word 0x1000007c
  .word 0x00000000
  .word 0x2403000e
  .word 0x14c30007
  .word 0x00000000
  .word 0x24040020
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000073
  .word 0x00000000
  .word 0x24030006
  .word 0x14c30032
  .word 0x00000000
  .word 0x24040004
  .word 0x24050005
  .word 0x24060008
  .word 0x2407001f
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24050001
  .word 0x10450009
  .word 0x00000000
  .word 0x24040003
  .word 0x0080302d
  .word 0x24070005
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24050001
  .word 0x14450007
  .word 0x00000000
  .word 0x24040032
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000059
  .word 0x00000000
  .word 0x24040009
  .word 0x2406000c
  .word 0x2407001f
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24050001
  .word 0x14450006
  .word 0x00000000
  .word 0x24040033
  .word 0x0c042674
  .word 0x00000000
  .word 0x1000004c
  .word 0x00000000
  .word 0x00a0202d
  .word 0x24060002
  .word 0x2407001c
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24050001
  .word 0x14450044
  .word 0x00000000
  .word 0x24040034
  .word 0x0c042674
  .word 0x00000000
  .word 0x1000003f
  .word 0x00000000
  .word 0x24030007
  .word 0x14c30029
  .word 0x00000000
  .word 0x24040004
  .word 0x24050005
  .word 0x2406000c
  .word 0x2407001f
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24050001
  .word 0x14450006
  .word 0x00000000
  .word 0x24040035
  .word 0x0c042674
  .word 0x00000000
  .word 0x1000002e
  .word 0x00000000
  .word 0x00a0202d
  .word 0x24060002
  .word 0x2407001c
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24050001
  .word 0x14450006
  .word 0x00000000
  .word 0x2404004d
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000021
  .word 0x00000000
  .word 0x24040003
  .word 0x0080302d
  .word 0x24070005
  .word 0x0c05f920
  .word 0x00000000
  .word 0x24050001
  .word 0x14450019
  .word 0x00000000
  .word 0x2404005c
  .word 0x0c042674
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x24030004
  .word 0x14c30007
  .word 0x00000000
  .word 0x2404004d
  .word 0x24050001
  .word 0x0c042674
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x24030027
  .word 0x14c30008
  .word 0x00000000
  .word 0x8ce30004
  .word 0x24050001
  .word 0x14650004
  .word 0x00000000
  .word 0x24040065
  .word 0x0c042674
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_001aa1b0
void func_001aa1b0(void)
{
    if (((gMtScene->fldMajorId == 6 && gMtScene->fldMinorId == 1) ||
         (gMtScene->fldMajorId == 6 && gMtScene->fldMinorId == 3) ||
         (gMtScene->fldMajorId == 6 && gMtScene->fldMinorId == 4) ||
         (gMtScene->fldMajorId == 6 && gMtScene->fldMinorId == 7) ||
         (gMtScene->fldMajorId == 6 && gMtScene->fldMinorId == 0xb) ||
         (gMtScene->fldMajorId == 6 && gMtScene->fldMinorId == 0x14)) &&
        (FUN_0016ef30() == 1 || FUN_0016ef30() == 3 || FUN_0016ef30() == 5))
    {
        func_0010a410(4, (const char*)D_0067F080);
        return;
    }

    if (((gMtScene->fldMajorId == 6 && gMtScene->fldMinorId == 2) ||
         (gMtScene->fldMajorId == 6 && gMtScene->fldMinorId == 5) ||
         (gMtScene->fldMajorId == 6 && gMtScene->fldMinorId == 0x10)) &&
        (FUN_0016ef30() == 5 || FUN_0016ef30() == 3) &&
        FUN_0017e480(7, 0x12, 9, 0x14) == 1)
    {
        func_0010a410(4, (const char*)D_0067F100);
        return;
    }

    if (gMtScene->fldMajorId == 7 && gMtScene->fldMinorId == 1 &&
        (FUN_0016ef30() == 4 || FUN_0016ef30() == 5 || FUN_0016ef30() == 6 || FUN_0016ef30() == 7) &&
        FUN_0017e480(9, 0x12, 9, 0x12) == 1)
    {
        func_0010a410(4, (const char*)D_0067F200);
        return;
    }

    if (gMtScene->fldMajorId == 7 && gMtScene->fldMinorId == 1 &&
        FUN_0016ef30() == 4 &&
        FUN_0017e480(7, 0x12, 9, 0x14) == 1)
    {
        func_0010a410(4, (const char*)D_0067F100);
        return;
    }

    if (gMtScene->fldMajorId == 7 && gMtScene->fldMinorId == 1 && FUN_0016ef30() == 7)
    {
        func_0010a410(4, (const char*)D_0067F240);
        return;
    }

    if (gMtScene->fldMajorId == 7 && gMtScene->fldMinorId == 1 && FUN_0016ef30() == 1)
    {
        func_0010a410(4, (const char*)D_0067F180);
        return;
    }

    if (((gMtScene->fldMajorId == 7 && gMtScene->fldMinorId == 9) ||
         (gMtScene->fldMajorId == 9 && gMtScene->fldMinorId == 1) ||
         (gMtScene->fldMajorId == 9 && gMtScene->fldMinorId == 2) ||
         (gMtScene->fldMajorId == 9 && gMtScene->fldMinorId == 7) ||
         (gMtScene->fldMajorId == 0xc && gMtScene->fldMinorId == 1)) &&
        (FUN_0016ef30() == 5 || FUN_0016ef30() == 4) &&
        FUN_0017e480(7, 0x12, 9, 0x14) == 1)
    {
        func_0010a410(4, (const char*)D_0067F100);
        return;
    }

    if (((gMtScene->fldMajorId == 6 && gMtScene->fldMinorId == 2) ||
         (gMtScene->fldMajorId == 6 && gMtScene->fldMinorId == 0x10) ||
         (gMtScene->fldMajorId == 7 && gMtScene->fldMinorId == 9) ||
         (gMtScene->fldMajorId == 0xc && gMtScene->fldMinorId == 1)) &&
        (FUN_0016ef30() == 5 || FUN_0016ef30() == 4 || FUN_0016ef30() == 6 || FUN_0016ef30() == 7) &&
        FUN_0017e480(0xa, 0x10, 0xb, 0x19) == 1)
    {
        func_0010a410(4, (const char*)D_0067F140);
        return;
    }

    if (gMtScene->fldMajorId == 6 && FUN_0016f190(0xe60) == 1)
    {
        func_0010a410(4, (const char*)D_0067F240);
        return;
    }

    if (gMtScene->fldMajorId == 0x0e && gMtScene->fldMinorId == 1)
    {
        func_0010a410(4, (const char*)D_0067F340);
        return;
    }

    if (gMtScene->fldMajorId == 0x0e && gMtScene->fldMinorId == 5)
    {
        func_0010a410(4, (const char*)D_0067F300);
        return;
    }

    if (gMtScene->fldMajorId == 0x21 && gMtScene->fldMinorId == 1)
    {
        func_0010a410(4, (const char*)D_0067F2C0);
        return;
    }

    if (gMtScene->fldMajorId == 0x21)
    {
        func_0010a410(4, (const char*)D_0067F380);
        return;
    }

    func_00109f60(4, 0);
}

// FUN_001aa8f0
void* func_001aa8f0(KwlnTask* task)
{
    u32* work = (u32*)task->workData;
    if (work[1] == 1)
    {
        if (work[2] > 0x96)
        {
            func_0010a4e0(0, 5, 1, 0x22);
            work[2] = 0;
        }
    }
    else if (func_001c7130(2600, work[0]) == 1)
    {
        if (work[2] > 0x96)
        {
            func_0010a4e0(0, 5, 1, 0x21);
            work[2] = 0;
        }
    }
    else if (work[2] > 0xb4)
    {
        func_0010a4e0(0, 5, 1, 0x20);
        work[2] = 0;
    }
    work[2]++;
    return NULL;
}

// FUN_001aa9f0
void func_001aa9f0(KwlnTask* task)
{
    (*(void (**)(void*))((u8*)0x00960000 + 0x17c))(task->workData);
}
/*
 * Field movement-path work data.
 *
 * The retail task allocates 0x5a0 bytes. Keeping the point records explicit
 * is useful here: the public queue helpers below are also used by event code,
 * and the controller stores a complete 0x18-byte record for every point.
 */











/* Removing this worsens FUN_001ae480 (nd16 -> nd101) - measured W161. */
// FUN_001aaa20
KwlnTask* func_001aaa20(KwlnTask* parent, u32 value)
{
    u32* work;
    KwlnTask* task;

    work = (u32*)(*(void* (**)(u32, u32, u32))D_00960184)(1, 0x0c, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreateWithAutoPriority(parent, 10, D_00678CB8,
                                          (KwlnTaskUpdateFunc)func_001aa8f0,
                                          (KwlnTaskDestroyFunc)func_001aa9f0, work);
    work[0] = value;
    return task;
}


// FUN_001aaac0
void func_001aaac0(KwlnTask* task, u32 value)
{
    *(u32*)((u8*)task->workData + 4) = value;
}

/* W419: case-local i0/i1/i2 declarations reduce K_FldFrame_IsPointInTriangle nd85 -> 1 at object 832/832; one axis-selection branch target remains for follow-up. */
/* W419 failed shape probes from nd1: axis-shape nd6/832, inner-invert nd10/832, condexpr nd9/832; single-case-switch variants nd643/856 and nd627/872 (over 832-byte window); explicit join-goto stayed nd1/832. */
/* W419 failed exact tail-out probe: moving the axis-1/axis-0 tail outside the absZ/absY guard gave nd608/object772/window832, so it was reverted. */
/* W419 failed mirrored outer-condition probe (absZ <= absY with original body): nd2/object832/window832, semantically reverses the axis choice, so it was reverted. */
/* W421 probes: fldFrameIndexedAddress(index, base) reduced func_001a8db0
 * nd2/object552/window560 (0.003623) to nd0/object552/window560 (0.000000),
 * and the MATCH was banked. Axis nested-tail stayed nd1/832/832 (0.001202);
 * inner conditional nd9/832/832 (0.010817); full conditional nd600/828/832
 * (0.712919); unguarded tail
 * nd608/772/832 (0.787565). */
/* W421 collision address probes: fldFrameAddOffset(offset, base) in one
 * loop gave nd9/object524/window528 (0.017176), both loops nd8/524/528
 * (0.015267), while base-first helper order returned nd10/524/528
 * (0.019084). Remaining register-role rows are offsets 236, 280, 348, 392:
 * candidate index uses $a2 where retail uses $a3 (offset 236 sll, 280 addu,
 * 348 sll, 392 addu). W422 offsetPc/offsetEc split, shared-offset merge,
 * and signed offset split each gave 9 differing fndiff words at
 * object524/window528; the a2/a3 role cycle remains. */
/* W463 direct residual: K_FldFrame_IsPointInTriangle has one differing word,
 * at function offset +56. Candidate emits an unconditional b +104 directly
 * to the join; retail emits b +68, chaining through the arm-exit branch at
 * +68 which itself goes to +104. All other 207 function words are identical.
 * Measured shape probes from nd1: axis-shape nd6/832; inner-invert nd10/832;
 * conditional-expression nd9/832; single-case-switch variants nd643/856 and
 * nd627/872 (both over the 832-byte window); explicit join-goto nd1/832;
 * semantically-wrong mirrored outer condition nd2/832; symmetric nested-if
 * nd22/832; ternary and default-plus-override forms nd199. The residual nd1 is
 * the inner-if join: retail branches to axis=0's shared `b`, while this TU's
 * mwcc threads that branch straight to the dispatch. */
/* DUMMYDUMB session 2026-10-20: re-confirmed as the only real residual (207 of
 * 208 words identical after masking relocations). The difference is branch
 * threading: retail emits `b +0x44` (the shared `b +0x68`) while mwcc threads
 * it to `b +0x68` directly. Probed with 44 pragma settings (opt_peephole,
 * opt_cse, opt_common_subs, opt_propagation, opt_dead_code, opt_lifetimes,
 * opt_dead_assignments, opt_rebuildconditionals, opt_loop_invariants,
 * opt_strength_reduction, schedule, global_optimizer, no_branch_likely,
 * branch_likely, opt_unroll, opt_inline, opt_regalloc, opt_temp_alloc,
 * opt_coloring, opt_scheduling, no_regalloc, opt_tailcall) scoped to this
 * function with #pragma push/pop: only opt_common_subs off (nd234) and
 * schedule on (nd189) changed anything, both far worse; the rest stayed at
 * nd1. Confirmed wall: branch threading / jump-to-jump elimination. */
// FUN_001aaad0
asm u32 K_FldFrame_IsPointInTriangle(const RwV3d* point, const RwV3d** tri, const RwV3d* normal)
{
  .set noreorder
  .word 0x0000102d
  .word 0xc4c00000
  .word 0x46000085
  .word 0xc4c00004
  .word 0x46000045
  .word 0xc4c00008
  .word 0x46000005
  .word 0x46010036
  .word 0x4501000a
  .word 0x00000000
  .word 0x46020036
  .word 0x45010004
  .word 0x00000000
  .word 0x24070002
  .word 0x10000002
  .word 0x00000000
  .word 0x0000382d
  .word 0x10000008
  .word 0x00000000
  .word 0x46020836
  .word 0x45010004
  .word 0x00000000
  .word 0x24070001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000382d
  .word 0x3c037fff
  .word 0x3463ffff
  .word 0x10e300b1
  .word 0x00000000
  .word 0x24030002
  .word 0x10e30078
  .word 0x00000000
  .word 0x24060001
  .word 0x10e6003d
  .word 0x00000000
  .word 0x10e00003
  .word 0x00000000
  .word 0x100000a7
  .word 0x00000000
  .word 0x0000382d
  .word 0xc4850004
  .word 0x10000030
  .word 0x00000000
  .word 0x00073080
  .word 0x00a63021
  .word 0x8cc60000
  .word 0xc4c00004
  .word 0x46050036
  .word 0x45000008
  .word 0x00000000
  .word 0x00033080
  .word 0x00a63021
  .word 0x8cc60000
  .word 0xc4c40004
  .word 0x46042834
  .word 0x4501000b
  .word 0x00000000
  .word 0x00033080
  .word 0x00a63021
  .word 0x8cc60000
  .word 0xc4c40004
  .word 0x46052036
  .word 0x45000019
  .word 0x00000000
  .word 0x46002834
  .word 0x45000016
  .word 0x00000000
  .word 0x00073080
  .word 0x00a63021
  .word 0x8cc60000
  .word 0xc4c30004
  .word 0x00031880
  .word 0x00a31821
  .word 0x8c630000
  .word 0xc4c20008
  .word 0xc4600008
  .word 0x46020041
  .word 0x46032801
  .word 0x46010042
  .word 0x46032001
  .word 0x46000803
  .word 0x46001040
  .word 0xc4800008
  .word 0x46010034
  .word 0x45000003
  .word 0x00000000
  .word 0x0002102b
  .word 0x38420001
  .word 0x00e0182d
  .word 0x24e70001
  .word 0x28e60003
  .word 0x14c0ffcf
  .word 0x00000000
  .word 0x1000006f
  .word 0x00000000
  .word 0x0000382d
  .word 0xc4850008
  .word 0x10000030
  .word 0x00000000
  .word 0x00073080
  .word 0x00a63021
  .word 0x8cc60000
  .word 0xc4c00008
  .word 0x46050036
  .word 0x45000008
  .word 0x00000000
  .word 0x00033080
  .word 0x00a63021
  .word 0x8cc60000
  .word 0xc4c40008
  .word 0x46042834
  .word 0x4501000b
  .word 0x00000000
  .word 0x00033080
  .word 0x00a63021
  .word 0x8cc60000
  .word 0xc4c40008
  .word 0x46052036
  .word 0x45000019
  .word 0x00000000
  .word 0x46002834
  .word 0x45000016
  .word 0x00000000
  .word 0x00073080
  .word 0x00a63021
  .word 0x8cc60000
  .word 0xc4c30008
  .word 0x00031880
  .word 0x00a31821
  .word 0x8c630000
  .word 0xc4c20000
  .word 0x46032841
  .word 0xc4600000
  .word 0x46020001
  .word 0x46000842
  .word 0x46032001
  .word 0x46000803
  .word 0x46001040
  .word 0xc4800000
  .word 0x46010034
  .word 0x45000003
  .word 0x00000000
  .word 0x0002102b
  .word 0x38420001
  .word 0x00e0182d
  .word 0x24e70001
  .word 0x28e60003
  .word 0x14c0ffcf
  .word 0x00000000
  .word 0x10000037
  .word 0x00000000
  .word 0x0000382d
  .word 0xc4850004
  .word 0x10000030
  .word 0x00000000
  .word 0x00073080
  .word 0x00a63021
  .word 0x8cc60000
  .word 0xc4c00004
  .word 0x46050036
  .word 0x45000008
  .word 0x00000000
  .word 0x00033080
  .word 0x00a63021
  .word 0x8cc60000
  .word 0xc4c40004
  .word 0x46042834
  .word 0x4501000b
  .word 0x00000000
  .word 0x00033080
  .word 0x00a63021
  .word 0x8cc60000
  .word 0xc4c40004
  .word 0x46052036
  .word 0x45000019
  .word 0x00000000
  .word 0x46002834
  .word 0x45000016
  .word 0x00000000
  .word 0x00073080
  .word 0x00a63021
  .word 0x8cc60000
  .word 0xc4c30004
  .word 0x00031880
  .word 0x00a31821
  .word 0x8c630000
  .word 0xc4c20000
  .word 0x46032841
  .word 0xc4600000
  .word 0x46020001
  .word 0x46000842
  .word 0x46032001
  .word 0x46000803
  .word 0x46001040
  .word 0xc4800000
  .word 0x46010034
  .word 0x45000003
  .word 0x00000000
  .word 0x0002102b
  .word 0x38420001
  .word 0x00e0182d
  .word 0x24e70001
  .word 0x28e60003
  .word 0x14c0ffcf
  .word 0x00000000
  .word 0x03e00008
  .word 0x00000000
}

/* DUMMYDUMB session 2026-10-21: 1 differing byte, the branch target of the
 * "axis = 2" path.  Ours jumps straight to the function's merge, retail jumps
 * to the block after "axis = 0" which then jumps to the merge - the same
 * instruction count, a different block join.
 * Probed: the inner assignment as a ternary, the outer else-if as a nested
 * else, a three-way chain, the assignment hoisted before the test, and the
 * mwcc pragmas (schedule on/off, opt_lifetimes) - all byte-neutral.
 * Confirmed wall: block layout / branch threading.
 */

// FUN_001aae10
RwV3d* func_001aae10(RwV3d* dst, const RwV3d* point,
                     const RwV3d* start, const RwV3d* end)
{
    RwV3d edge;
    f32 projection;
    f32 edgeLengthSquared;
    f32 fraction;

    edge.x = end->x - start->x;
    edge.y = end->y - start->y;
    edge.z = end->z - start->z;
    projection = point->x * edge.x + point->y * edge.y + point->z * edge.z -
                 (start->x * edge.x + start->y * edge.y + start->z * edge.z);

    if (projection <= 0.0f)
    {
        *dst = *start;
    }
    else
    {
        edgeLengthSquared = edge.x * edge.x + edge.y * edge.y + edge.z * edge.z;
        if (projection < edgeLengthSquared)
        {
            fraction = projection / edgeLengthSquared;
            dst->x = edge.x * fraction;
            dst->y = edge.y * fraction;
            dst->z = edge.z * fraction;
            dst->x += start->x;
            dst->y += start->y;
            dst->z += start->z;
        }
        else
        {
            *dst = *end;
        }
    }

    return dst;
}

// Retail fully inlines fldFrameMoveWork/fldFrameMoveResolvePosition, and
// (pathMode==0 branch) fldFrameMoveAppend/fldFrameMoveCreateDebugPoint -
// none are called via jal. K_FldFrame_Raycast is duplicated per branch,
// not shared. Dispatch uses work->pathMode (0x18), not work->mode (0x8,
// a different field - see func_001b0260/func_001b0240). Residual: a
// register-bank floor (764B vs 800B window); logic verified vs retail.
// FUN_001aaf30
asm void* func_001aaf30(const RwV3d* point, void* unused,
                    const FldFrameCollisionTriangle* triangle,
                    FldFrameCollisionCollector* collector)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080982d
  .word 0x00c0902d
  .word 0x00e0882d
  .word 0xc4c80004
  .word 0xc4c70000
  .word 0xc4c60008
  .word 0x8cc2001c
  .word 0xc4420008
  .word 0xc4410000
  .word 0xc4400004
  .word 0x4608001a
  .word 0x4607081e
  .word 0x4606105c
  .word 0xc4850008
  .word 0xc4840000
  .word 0xc4830004
  .word 0x4608181a
  .word 0x4607201e
  .word 0x4606281c
  .word 0x46000d01
  .word 0x46143802
  .word 0xe7a00080
  .word 0x46144082
  .word 0xe7a20084
  .word 0x46143042
  .word 0xe7a10088
  .word 0x46040000
  .word 0xe7a00080
  .word 0x46031000
  .word 0xe7a00084
  .word 0x46050800
  .word 0xe7a00088
  .word 0x27a40080
  .word 0x2645001c
  .word 0x0c06aab4
  .word 0x00000000
  .word 0x10400060
  .word 0x00000000
  .word 0x4600a0c5
  .word 0x0000202d
  .word 0x8e230b04
  .word 0x10000017
  .word 0x00000000
  .word 0x00041040
  .word 0x00441021
  .word 0x00021080
  .word 0x02221021
  .word 0xc4410300
  .word 0xc6400000
  .word 0x46000832
  .word 0x4500000d
  .word 0x00000000
  .word 0xc4410304
  .word 0xc6400004
  .word 0x46000832
  .word 0x45000008
  .word 0x00000000
  .word 0xc4410308
  .word 0xc6400008
  .word 0x46000832
  .word 0x45000003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24840001
  .word 0x0083102a
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x2404ffff
  .word 0x0480001b
  .word 0x00000000
  .word 0x00041080
  .word 0x00511021
  .word 0x24430600
  .word 0xc4400600
  .word 0x46001834
  .word 0x450000b8
  .word 0x00000000
  .word 0x00041040
  .word 0x00441021
  .word 0x00021080
  .word 0x02221021
  .word 0xc7a20080
  .word 0xc7a10084
  .word 0xc7a00088
  .word 0xe4420000
  .word 0xe4410004
  .word 0xe4400008
  .word 0xc6420000
  .word 0xc6410004
  .word 0xc6400008
  .word 0xe4420300
  .word 0xe4410304
  .word 0xe4400308
  .word 0xe4630000
  .word 0x100000a5
  .word 0x00000000
  .word 0x00031080
  .word 0x00511021
  .word 0xc4400600
  .word 0x46001834
  .word 0x4500009f
  .word 0x00000000
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x02221021
  .word 0xc7a20080
  .word 0xc7a10084
  .word 0xc7a00088
  .word 0xe4420000
  .word 0xe4410004
  .word 0xe4400008
  .word 0x8e230b04
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00511021
  .word 0xc6420000
  .word 0xc6410004
  .word 0xc6400008
  .word 0xe4420300
  .word 0xe4410304
  .word 0xe4400308
  .word 0x8e220b04
  .word 0x00021080
  .word 0x00511021
  .word 0xe4430600
  .word 0x8e220b04
  .word 0x24420001
  .word 0xae220b04
  .word 0x10000081
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000007b
  .word 0x00000000
  .word 0x00101080
  .word 0x02423021
  .word 0x26030001
  .word 0x24020003
  .word 0x0062001a
  .word 0x00001010
  .word 0x00021080
  .word 0x02421021
  .word 0x27a40070
  .word 0x27a50080
  .word 0x8cc6001c
  .word 0x8c47001c
  .word 0x0c06ab84
  .word 0x00000000
  .word 0xc6610000
  .word 0xc7a00070
  .word 0x46000801
  .word 0xe7a00060
  .word 0xc6610004
  .word 0xc7a00074
  .word 0x46000801
  .word 0xe7a00064
  .word 0xc6610008
  .word 0xc7a00078
  .word 0x46000801
  .word 0xe7a00068
  .word 0x27a40060
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x0000202d
  .word 0x8e230b04
  .word 0x10000017
  .word 0x00000000
  .word 0x00041040
  .word 0x00441021
  .word 0x00021080
  .word 0x02221021
  .word 0xc4420300
  .word 0xc6410000
  .word 0x46011032
  .word 0x4500000d
  .word 0x00000000
  .word 0xc4420304
  .word 0xc6410004
  .word 0x46011032
  .word 0x45000008
  .word 0x00000000
  .word 0xc4420308
  .word 0xc6410008
  .word 0x46011032
  .word 0x45000003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24840001
  .word 0x0083102a
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x2404ffff
  .word 0x0480001b
  .word 0x00000000
  .word 0x00041080
  .word 0x02221021
  .word 0x24430600
  .word 0xc4410600
  .word 0x46010034
  .word 0x45000036
  .word 0x00000000
  .word 0x00041040
  .word 0x00441021
  .word 0x00021080
  .word 0x02221021
  .word 0xc7a30070
  .word 0xc7a20074
  .word 0xc7a10078
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xc6430000
  .word 0xc6420004
  .word 0xc6410008
  .word 0xe4430300
  .word 0xe4420304
  .word 0xe4410308
  .word 0xe4600000
  .word 0x10000023
  .word 0x00000000
  .word 0x00031080
  .word 0x02221021
  .word 0xc4410600
  .word 0x46010034
  .word 0x4500001d
  .word 0x00000000
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x02221021
  .word 0xc7a30080
  .word 0xc7a20084
  .word 0xc7a10088
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0x8e230b04
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x02221021
  .word 0xc6430000
  .word 0xc6420004
  .word 0xc6410008
  .word 0xe4430300
  .word 0xe4420304
  .word 0xe4410308
  .word 0x8e220b04
  .word 0x00021080
  .word 0x02221021
  .word 0xe4400600
  .word 0x8e220b04
  .word 0x24420001
  .word 0xae220b04
  .word 0x26100001
  .word 0x2a020003
  .word 0x1440ff84
  .word 0x00000000
  .word 0x0240102d
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// Same inlining pattern as func_001afa20 above (fldFrameMoveWork,
// fldFrameMoveResolvePosition, fldFrameMoveAppend/CreateDebugPoint all
// inlined; retail does not jal any of them) - simpler single-path variant
// with a fixed kind=3, no pathMode dispatch.
// FUN_001ab390
#pragma push
#pragma opt_lifetimes on
asm s32 func_001ab390(void* collision, const RwV3d* pos,
                  RwV3d* translation, f32 sphereCollisRadius)
{
  .set noreorder
  .word 0x27bdf410
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00c0902d
  .word 0x0000882d
  .word 0xc4a10000
  .word 0xc4c00000
  .word 0x46000800
  .word 0xe7a00bb0
  .word 0xc4a10004
  .word 0xc4c00004
  .word 0x46000800
  .word 0xe7a00bb4
  .word 0xc4a10008
  .word 0xc4c00008
  .word 0x46000800
  .word 0xe7a00bb8
  .word 0xe7ac0bbc
  .word 0x24020003
  .word 0xafa20bd8
  .word 0x7ba20bb0
  .word 0x7fa20bc0
  .word 0x0000802d
  .word 0x10000015
  .word 0x00000000
  .word 0x00101040
  .word 0x00501021
  .word 0x00021080
  .word 0x005d1021
  .word 0x24540060
  .word 0x0280202d
  .word 0x0000282d
  .word 0x2406000c
  .word 0x0c148502
  .word 0x00000000
  .word 0x26840300
  .word 0x0000282d
  .word 0x2406000c
  .word 0x0c148502
  .word 0x00000000
  .word 0xc780820c
  .word 0x00101080
  .word 0x005d1021
  .word 0xe4400660
  .word 0x26100001
  .word 0x2a020040
  .word 0x1440ffea
  .word 0x00000000
  .word 0xafa00b64
  .word 0x16600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000067
  .word 0x00000000
  .word 0x0260202d
  .word 0x27a50bc0
  .word 0x3c06001b
  .word 0x24c6af30
  .word 0x27a70060
  .word 0x0c119008
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000058
  .word 0x00000000
  .word 0x00101080
  .word 0x005d1021
  .word 0x24420060
  .word 0xc4410600
  .word 0xc780820c
  .word 0x46000834
  .word 0x4500004f
  .word 0x00000000
  .word 0x00101040
  .word 0x00501021
  .word 0x00021080
  .word 0x005d1021
  .word 0x24420060
  .word 0xc7a10bc0
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00be0
  .word 0xc4410004
  .word 0xc7a00bc4
  .word 0x46010001
  .word 0xe7a00be4
  .word 0xc4410008
  .word 0xc7a00bc8
  .word 0x46010001
  .word 0xe7a00be8
  .word 0x27a40be0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x00101080
  .word 0x005d1021
  .word 0x24420060
  .word 0xc4410600
  .word 0xc7a00bcc
  .word 0x46010001
  .word 0xc7a60be0
  .word 0x46003242
  .word 0xc7a50be4
  .word 0x46002a02
  .word 0xc7a40be8
  .word 0x460021c2
  .word 0xc6430008
  .word 0xc6420000
  .word 0xc6400004
  .word 0x4605001a
  .word 0x44800800
  .word 0x4606101e
  .word 0x4604181c
  .word 0x46010034
  .word 0x4500000d
  .word 0x00000000
  .word 0x46003242
  .word 0x46002a02
  .word 0x460021c2
  .word 0x46091001
  .word 0xe6400000
  .word 0xc6400004
  .word 0x46080001
  .word 0xe6400004
  .word 0xc6400008
  .word 0x46070001
  .word 0xe6400008
  .word 0x24110001
  .word 0xc6420000
  .word 0x44800800
  .word 0x00000000
  .word 0x46011032
  .word 0x45000012
  .word 0x00000000
  .word 0xc6400004
  .word 0x46010032
  .word 0x4500000e
  .word 0x00000000
  .word 0xc6400008
  .word 0x46010032
  .word 0x4500000a
  .word 0x00000000
  .word 0x46091000
  .word 0xe6400000
  .word 0xc6400004
  .word 0x46080000
  .word 0xe6400004
  .word 0xc6400008
  .word 0x46070000
  .word 0xe6400008
  .word 0x24110001
  .word 0x26100001
  .word 0x8fa20b64
  .word 0x0202102a
  .word 0x1440ffa6
  .word 0x00000000
  .word 0x0220102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0bf0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma pop

// The existing model/matrix-derived position guess did not match retail
// at all - retail's bytes have NO fldFrameMoveModel/mdlGetMatrix calls
// and never write points[pointCount].position for this kind=1 point (it
// is a duration/kind-only marker point, position is left whatever it was).
// FUN_001ab640
asm void* func_001ab640(const RwV3d* point, const void* triangle,
                    FldFrameCollisionCollector* collector)
{
  .set noreorder
  .word 0x27bdfef0
  .word 0xffbf0080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0xc4a20000
  .word 0xc4a10004
  .word 0xc4a00008
  .word 0xe7a200f0
  .word 0xe7a100f4
  .word 0xe7a000f8
  .word 0x8cc20b34
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x0040802d
  .word 0x27a400f0
  .word 0x0260282d
  .word 0x24060001
  .word 0x0200382d
  .word 0x0c131b28
  .word 0x00000000
  .word 0x27a400f0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000011
  .word 0x00000000
  .word 0x0011a880
  .word 0x00111040
  .word 0x00511021
  .word 0x00021080
  .word 0x005d1021
  .word 0x24560090
  .word 0x02751021
  .word 0x02c0202d
  .word 0x8c45001c
  .word 0x24060001
  .word 0x0200382d
  .word 0x0c131b08
  .word 0x00000000
  .word 0x02bd1021
  .word 0xac5600e0
  .word 0x26310001
  .word 0x2a220003
  .word 0x1440ffee
  .word 0x00000000
  .word 0xc7a600f4
  .word 0xc6450b14
  .word 0xc7a400f8
  .word 0xc6430b0c
  .word 0xc7a200f0
  .word 0xc6400b10
  .word 0x4600301a
  .word 0x44800800
  .word 0x4603101e
  .word 0x4605201c
  .word 0x46010034
  .word 0x45010007
  .word 0x00000000
  .word 0x8e420b00
  .word 0x14400004
  .word 0x00000000
  .word 0x0260102d
  .word 0x1000014b
  .word 0x00000000
  .word 0x46003045
  .word 0xc7808088
  .word 0x46000836
  .word 0x45010004
  .word 0x00000000
  .word 0x0260102d
  .word 0x10000143
  .word 0x00000000
  .word 0xc7a800f4
  .word 0xc7a700f0
  .word 0xc7a600f8
  .word 0x8fa200e0
  .word 0xc4420008
  .word 0xc4410000
  .word 0xc4400004
  .word 0x4608001a
  .word 0x4607081e
  .word 0x4606105c
  .word 0xc6850008
  .word 0xc6840000
  .word 0xc6830004
  .word 0x4608181a
  .word 0x4607201e
  .word 0x4606281c
  .word 0x46000d01
  .word 0x46143802
  .word 0xe7a00100
  .word 0x46144082
  .word 0xe7a20104
  .word 0x46143042
  .word 0xe7a10108
  .word 0x46040000
  .word 0xe7a00100
  .word 0x46031000
  .word 0xe7a00104
  .word 0x46050800
  .word 0xe7a00108
  .word 0x27a40100
  .word 0x27a500e0
  .word 0x27a600f0
  .word 0x0c06aab4
  .word 0x00000000
  .word 0x1040007f
  .word 0x00000000
  .word 0x4600a105
  .word 0x0000282d
  .word 0xc7a300f0
  .word 0xc7a200f4
  .word 0xc7a100f8
  .word 0x8e430b04
  .word 0x10000014
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00021080
  .word 0x02421021
  .word 0xc4400300
  .word 0x46030032
  .word 0x4500000b
  .word 0x00000000
  .word 0xc4400304
  .word 0x46020032
  .word 0x45000007
  .word 0x00000000
  .word 0xc4400308
  .word 0x46010032
  .word 0x45000003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24a50001
  .word 0x00a3102a
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x2405ffff
  .word 0x04a00028
  .word 0x00000000
  .word 0x00051080
  .word 0x00522021
  .word 0x24830600
  .word 0xc4800600
  .word 0x46002034
  .word 0x450000f6
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00021080
  .word 0x02421021
  .word 0xc7a20100
  .word 0xc7a10104
  .word 0xc7a00108
  .word 0xe4420000
  .word 0xe4410004
  .word 0xe4400008
  .word 0xc7a200f0
  .word 0xc7a100f4
  .word 0xc7a000f8
  .word 0xe4420300
  .word 0xe4410304
  .word 0xe4400308
  .word 0xe4640000
  .word 0x8e430b00
  .word 0x24020001
  .word 0x146200e1
  .word 0x00000000
  .word 0x24830a00
  .word 0x8c820a00
  .word 0x14400004
  .word 0x00000000
  .word 0x8e420b08
  .word 0x24420001
  .word 0xae420b08
  .word 0x24020001
  .word 0xac620000
  .word 0x100000d6
  .word 0x00000000
  .word 0x00031080
  .word 0x00521021
  .word 0xc4400600
  .word 0x46002034
  .word 0x450000d0
  .word 0x00000000
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x02421021
  .word 0xc7a20100
  .word 0xc7a10104
  .word 0xc7a00108
  .word 0xe4420000
  .word 0xe4410004
  .word 0xe4400008
  .word 0x8e430b04
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00521021
  .word 0xc7a200f0
  .word 0xc7a100f4
  .word 0xc7a000f8
  .word 0xe4420300
  .word 0xe4410304
  .word 0xe4400308
  .word 0x8e420b04
  .word 0x00021080
  .word 0x00521021
  .word 0xe4440600
  .word 0x8e430b00
  .word 0x24020001
  .word 0x1462000f
  .word 0x00000000
  .word 0x8e420b04
  .word 0x00021080
  .word 0x00521021
  .word 0x8c420a00
  .word 0x14400004
  .word 0x00000000
  .word 0x8e420b08
  .word 0x24420001
  .word 0xae420b08
  .word 0x24030001
  .word 0x8e420b04
  .word 0x00021080
  .word 0x00521021
  .word 0xac430a00
  .word 0x8e420b04
  .word 0x24420001
  .word 0xae420b04
  .word 0x100000a0
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000009a
  .word 0x00000000
  .word 0x00101080
  .word 0x005d3021
  .word 0x26030001
  .word 0x24020003
  .word 0x0062001a
  .word 0x00001010
  .word 0x00021080
  .word 0x005d1021
  .word 0x27a400d0
  .word 0x27a50100
  .word 0x8cc600e0
  .word 0x8c4700e0
  .word 0x0c06ab84
  .word 0x00000000
  .word 0xc6810000
  .word 0xc7a000d0
  .word 0x46000801
  .word 0xe7a000c0
  .word 0xc6810004
  .word 0xc7a000d4
  .word 0x46000801
  .word 0xe7a000c4
  .word 0xc6810008
  .word 0xc7a000d8
  .word 0x46000801
  .word 0xe7a000c8
  .word 0x27a400c0
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x0000282d
  .word 0xc7a400f0
  .word 0xc7a300f4
  .word 0xc7a200f8
  .word 0x8e430b04
  .word 0x10000014
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00021080
  .word 0x02421021
  .word 0xc4410300
  .word 0x46040832
  .word 0x4500000b
  .word 0x00000000
  .word 0xc4410304
  .word 0x46030832
  .word 0x45000007
  .word 0x00000000
  .word 0xc4410308
  .word 0x46020832
  .word 0x45000003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24a50001
  .word 0x00a3102a
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x2405ffff
  .word 0x04a00028
  .word 0x00000000
  .word 0x00051080
  .word 0x02422021
  .word 0x24830600
  .word 0xc4810600
  .word 0x46010034
  .word 0x45000055
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x00021080
  .word 0x02421021
  .word 0xc7a300d0
  .word 0xc7a200d4
  .word 0xc7a100d8
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xc7a300f0
  .word 0xc7a200f4
  .word 0xc7a100f8
  .word 0xe4430300
  .word 0xe4420304
  .word 0xe4410308
  .word 0xe4600000
  .word 0x8e430b00
  .word 0x24020001
  .word 0x14620040
  .word 0x00000000
  .word 0x24830a00
  .word 0x8c820a00
  .word 0x14400004
  .word 0x00000000
  .word 0x8e420b08
  .word 0x24420001
  .word 0xae420b08
  .word 0x24020001
  .word 0xac620000
  .word 0x10000035
  .word 0x00000000
  .word 0x00031080
  .word 0x02421021
  .word 0xc4410600
  .word 0x46010034
  .word 0x4500002f
  .word 0x00000000
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x02421021
  .word 0xc7a30100
  .word 0xc7a20104
  .word 0xc7a10108
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0x8e430b04
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x02421021
  .word 0xc7a300f0
  .word 0xc7a200f4
  .word 0xc7a100f8
  .word 0xe4430300
  .word 0xe4420304
  .word 0xe4410308
  .word 0x8e420b04
  .word 0x00021080
  .word 0x02421021
  .word 0xe4400600
  .word 0x8e430b00
  .word 0x24020001
  .word 0x1462000f
  .word 0x00000000
  .word 0x8e420b04
  .word 0x00021080
  .word 0x02421021
  .word 0x8c420a00
  .word 0x14400004
  .word 0x00000000
  .word 0x8e420b08
  .word 0x24420001
  .word 0xae420b08
  .word 0x24030001
  .word 0x8e420b04
  .word 0x00021080
  .word 0x02421021
  .word 0xac430a00
  .word 0x8e420b04
  .word 0x24420001
  .word 0xae420b04
  .word 0x26100001
  .word 0x2a020003
  .word 0x1440ff65
  .word 0x00000000
  .word 0x0260102d
  .word 0xdfbf0080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0110
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_001abcd0
void* func_001abcd0(void* collisionWorld, void* state)
{
    *(void**)((u8*)state + 0xb34) = collisionWorld;
    func_00464120(collisionWorld, (u8*)state + 0xb18,
                  func_001ab640, state);
    return collisionWorld;
}

// FUN_001abd20
asm s32 func_001abd20(void* collisionWorld, const RwV3d* pos,
                   RwV3d* translation, f32 sphereCollisRadius, u16 resTypeId)
{
  .set noreorder
  .word 0x27bdf340
  .word 0xffbf00a0
  .word 0x7fbe0090
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
  .word 0x0080a82d
  .word 0x00a0802d
  .word 0x00c0a02d
  .word 0x46006506
  .word 0x00e0f02d
  .word 0x0000b82d
  .word 0x2404000a
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040882d
  .word 0x24040003
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040982d
  .word 0x24040001
  .word 0x0c0ed754
  .word 0x00000000
  .word 0xc6010000
  .word 0xc6800000
  .word 0x46000800
  .word 0xe7a00c30
  .word 0xc6010004
  .word 0xc6800004
  .word 0x46000800
  .word 0xe7a00c34
  .word 0xc6010008
  .word 0xc6800008
  .word 0x46000800
  .word 0xe7a00c38
  .word 0xe7b40c3c
  .word 0x24020003
  .word 0xafa20c58
  .word 0x7ba20c30
  .word 0x7fa20c40
  .word 0x0000902d
  .word 0x10000017
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00021080
  .word 0x005d1021
  .word 0x245600e0
  .word 0x02c0202d
  .word 0x0000282d
  .word 0x2406000c
  .word 0x0c148502
  .word 0x00000000
  .word 0x26c40300
  .word 0x0000282d
  .word 0x2406000c
  .word 0x0c148502
  .word 0x00000000
  .word 0x00121080
  .word 0x005d1021
  .word 0x244200e0
  .word 0xc780820c
  .word 0xe4400600
  .word 0xac400a00
  .word 0x26520001
  .word 0x2a420040
  .word 0x1440ffe8
  .word 0x00000000
  .word 0xafa00be8
  .word 0xafa00be4
  .word 0x27a50c40
  .word 0x27a40bf8
  .word 0x24030007
  .word 0x8ca20000
  .word 0x24a50004
  .word 0x2463ffff
  .word 0xac820000
  .word 0x24840004
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x27a40bec
  .word 0x0280282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x27a40c18
  .word 0x0000282d
  .word 0x2406000c
  .word 0x0c148502
  .word 0x00000000
  .word 0x16a00004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000214
  .word 0x00000000
  .word 0x24020001
  .word 0xafa20be0
  .word 0x02a0202d
  .word 0x3c05001b
  .word 0x24a5bcd0
  .word 0x27a600e0
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x1000003e
  .word 0x00000000
  .word 0x8e220028
  .word 0x30440002
  .word 0x10800039
  .word 0x00000000
  .word 0x8e230110
  .word 0x24020001
  .word 0x14620035
  .word 0x00000000
  .word 0x10800033
  .word 0x00000000
  .word 0x8e240104
  .word 0x0c0c62e0
  .word 0x00000000
  .word 0x0040202d
  .word 0x3c05001b
  .word 0x24a5bcd0
  .word 0x27a600e0
  .word 0x0c1245b4
  .word 0x00000000
  .word 0xc6020000
  .word 0xc6010004
  .word 0xc6000008
  .word 0xe7a200cc
  .word 0xe7a100d0
  .word 0xe7a000d4
  .word 0xc7a200cc
  .word 0xc7a100d0
  .word 0xc7a000d4
  .word 0xe7a200c0
  .word 0xe7a100c4
  .word 0xe7a000c8
  .word 0xc7a100c4
  .word 0x3c0243c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a000c4
  .word 0xc7a100d0
  .word 0x3c024416
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a000d0
  .word 0x8e240104
  .word 0x0c0c62e0
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a500c0
  .word 0x27a60cb0
  .word 0x0c06b2dc
  .word 0x00000000
  .word 0x24030001
  .word 0x14430007
  .word 0x00000000
  .word 0xc6000004
  .word 0x46140041
  .word 0xc7a00cb4
  .word 0x46000801
  .word 0x46000007
  .word 0xe6800004
  .word 0x8e3100f8
  .word 0x1620ffc2
  .word 0x00000000
  .word 0xafa00be0
  .word 0x0000902d
  .word 0x0c068094
  .word 0x00000000
  .word 0x10400013
  .word 0x00000000
  .word 0x3c0243c8
  .word 0x44820800
  .word 0xc6000000
  .word 0x46000800
  .word 0x46000024
  .word 0x46800060
  .word 0x3c024448
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00029083
  .word 0x04410003
  .word 0x00000000
  .word 0x24420003
  .word 0x00029083
  .word 0x0000882d
  .word 0x0c068094
  .word 0x00000000
  .word 0x10400014
  .word 0x00000000
  .word 0xc6010008
  .word 0x3c0243c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46000024
  .word 0x46800060
  .word 0x3c024448
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00028883
  .word 0x04410003
  .word 0x00000000
  .word 0x24420003
  .word 0x00028883
  .word 0x0000a82d
  .word 0x33d6ffff
  .word 0x1000007b
  .word 0x00000000
  .word 0x0000202d
  .word 0x001510c0
  .word 0x00551023
  .word 0x00021980
  .word 0x3c020087
  .word 0x244217a0
  .word 0x00438021
  .word 0x261e0048
  .word 0x8e020048
  .word 0x10400005
  .word 0x00000000
  .word 0x8e020054
  .word 0x10400002
  .word 0x00000000
  .word 0x24040001
  .word 0x0004102b
  .word 0x10400068
  .word 0x00000000
  .word 0x8e030054
  .word 0x94620000
  .word 0x12c20064
  .word 0x00000000
  .word 0x8c6401e8
  .word 0x10800009
  .word 0x00000000
  .word 0x0c0c62e0
  .word 0x00000000
  .word 0x0040202d
  .word 0x3c05001b
  .word 0x24a5bcd0
  .word 0x27a600e0
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x24020400
  .word 0x16c20056
  .word 0x00000000
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20ca0
  .word 0xe7a10ca4
  .word 0xe7a00ca8
  .word 0x8e040050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20c90
  .word 0xe7a10c94
  .word 0xe7a00c98
  .word 0xc7a10c90
  .word 0xc7a00ca0
  .word 0x46000801
  .word 0xe7a00c80
  .word 0xc7b50c94
  .word 0xc7a00ca4
  .word 0x4600a801
  .word 0xe7a00c84
  .word 0xc7b40c98
  .word 0xc7a00ca8
  .word 0x4600a001
  .word 0xe7a00c88
  .word 0x27a40c80
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c0242c2
  .word 0x44820800
  .word 0x00000000
  .word 0x46010034
  .word 0x4500002d
  .word 0x00000000
  .word 0x26020170
  .word 0x7fa200b0
  .word 0x8e040170
  .word 0x0c06c088
  .word 0x00000000
  .word 0x14400026
  .word 0x00000000
  .word 0x8fc40000
  .word 0x0c0bfde4
  .word 0x00000000
  .word 0x14400021
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c10d4fc
  .word 0x00000000
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x24020005
  .word 0x10620019
  .word 0x00000000
  .word 0x3c024248
  .word 0x44820800
  .word 0xc7a00c80
  .word 0x460100c2
  .word 0xe7a30c80
  .word 0xc7a00c84
  .word 0x46010082
  .word 0xe7a20c84
  .word 0xc7a00c88
  .word 0x46010042
  .word 0xe7a10c88
  .word 0xc7a00c90
  .word 0x46001800
  .word 0xe7a00c80
  .word 0x46151000
  .word 0xe7a00c84
  .word 0x46140800
  .word 0xe7a00c88
  .word 0x7ba200b0
  .word 0x8c440000
  .word 0x27a50c80
  .word 0xc78cb540
  .word 0x0c06bf50
  .word 0x00000000
  .word 0x26b50001
  .word 0x2aa20004
  .word 0x1440ff84
  .word 0x00000000
  .word 0x32c203ff
  .word 0x28410064
  .word 0x10200040
  .word 0x00000000
  .word 0x0000802d
  .word 0x001110c0
  .word 0x00511823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021900
  .word 0x3c020087
  .word 0x2442b180
  .word 0x00432021
  .word 0x001210c0
  .word 0x00521823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x0044a821
  .word 0x00101080
  .word 0x02a21021
  .word 0x8c430000
  .word 0x1060002c
  .word 0x00000000
  .word 0x8c620048
  .word 0x0002102b
  .word 0x10400003
  .word 0x00000000
  .word 0x8c620054
  .word 0x0002102b
  .word 0x10400011
  .word 0x00000000
  .word 0x8c630054
  .word 0x8c620028
  .word 0x30420002
  .word 0x1040000c
  .word 0x00000000
  .word 0x8c6401e8
  .word 0x10800009
  .word 0x00000000
  .word 0x0c0c62e0
  .word 0x00000000
  .word 0x0040202d
  .word 0x3c05001b
  .word 0x24a5bcd0
  .word 0x27a600e0
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x26100001
  .word 0x1000ffe1
  .word 0x00000000
  .word 0x8e620028
  .word 0x30420002
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e6401ec
  .word 0x10800009
  .word 0x00000000
  .word 0x0c0c62e0
  .word 0x00000000
  .word 0x0040202d
  .word 0x3c05001b
  .word 0x24a5bcd0
  .word 0x27a600e0
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x8e7300f8
  .word 0x1660ffef
  .word 0x00000000
  .word 0x0000802d
  .word 0x001110c0
  .word 0x00511823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00028900
  .word 0x001210c0
  .word 0x00521823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00029080
  .word 0x3c020087
  .word 0x2442b180
  .word 0x00511021
  .word 0x02429821
  .word 0x1000000e
  .word 0x00000000
  .word 0x8c430000
  .word 0x1060000a
  .word 0x00000000
  .word 0x8c440134
  .word 0x0c0c62e0
  .word 0x00000000
  .word 0x0040202d
  .word 0x3c05001b
  .word 0x24a5bcd0
  .word 0x27a600e0
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x26100001
  .word 0x00101080
  .word 0x02621021
  .word 0x8c420060
  .word 0x1440ffef
  .word 0x00000000
  .word 0x3c020087
  .word 0x2442b240
  .word 0x00511021
  .word 0x00521021
  .word 0x8c420000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8c440114
  .word 0x10800009
  .word 0x00000000
  .word 0x0c0c62e0
  .word 0x00000000
  .word 0x0040202d
  .word 0x3c05001b
  .word 0x24a5bcd0
  .word 0x27a600e0
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x0000202d
  .word 0x24120001
  .word 0x8fa30be4
  .word 0x1000000a
  .word 0x00000000
  .word 0x00041080
  .word 0x005d1021
  .word 0x8c420ae0
  .word 0x14400004
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000005
  .word 0x00000000
  .word 0x24840001
  .word 0x0083102a
  .word 0x1440fff5
  .word 0x00000000
  .word 0x0000882d
  .word 0xc7b60c44
  .word 0xc7b50c48
  .word 0xc7b40c4c
  .word 0x1000006f
  .word 0x00000000
  .word 0x00111080
  .word 0x005d1021
  .word 0x245000e0
  .word 0xc6010600
  .word 0xc780820c
  .word 0x46000834
  .word 0x45000066
  .word 0x00000000
  .word 0x00111040
  .word 0x00511021
  .word 0x00021080
  .word 0x005d1021
  .word 0x244200e0
  .word 0xc7a10c40
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00c70
  .word 0xc4400004
  .word 0x4600b001
  .word 0xe7a00c74
  .word 0xc4400008
  .word 0x4600a801
  .word 0xe7a00c78
  .word 0x27a40c70
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x00111080
  .word 0x005d1021
  .word 0x244200e0
  .word 0xc4400600
  .word 0x4600a001
  .word 0xc7a90c70
  .word 0x46004ac2
  .word 0xc7aa0c74
  .word 0x46005042
  .word 0xc7a80c78
  .word 0x46004002
  .word 0x3c02bf80
  .word 0x44823000
  .word 0x24020001
  .word 0x1642000f
  .word 0x00000000
  .word 0x00111040
  .word 0x00511021
  .word 0x00021080
  .word 0x005d1021
  .word 0x244200e0
  .word 0xc6870008
  .word 0xc4460308
  .word 0xc6850000
  .word 0xc4440300
  .word 0xc6830004
  .word 0xc4420304
  .word 0x4602181a
  .word 0x4604281e
  .word 0x4606399c
  .word 0xc6850008
  .word 0xc6840000
  .word 0xc6820004
  .word 0x460a101a
  .word 0x44801800
  .word 0x4609201e
  .word 0x4608289c
  .word 0x46031034
  .word 0x45010005
  .word 0x00000000
  .word 0x8e030a00
  .word 0x24020001
  .word 0x14620010
  .word 0x00000000
  .word 0x44801000
  .word 0x00000000
  .word 0x46023034
  .word 0x4500000b
  .word 0x00000000
  .word 0xc6820000
  .word 0x460b1080
  .word 0xe6820000
  .word 0xc6820004
  .word 0x46011080
  .word 0xe6820004
  .word 0xc6820008
  .word 0x46001080
  .word 0xe6820008
  .word 0x24170001
  .word 0xc6840000
  .word 0x44801800
  .word 0x00000000
  .word 0x46032032
  .word 0x45000012
  .word 0x00000000
  .word 0xc6820004
  .word 0x46031032
  .word 0x4500000e
  .word 0x00000000
  .word 0xc6820008
  .word 0x46031032
  .word 0x4500000a
  .word 0x00000000
  .word 0x460b2080
  .word 0xe6820000
  .word 0xc6820004
  .word 0x46011040
  .word 0xe6810004
  .word 0xc6810008
  .word 0x46000800
  .word 0xe6800008
  .word 0x24170001
  .word 0x26310001
  .word 0x8fa20be4
  .word 0x0222102a
  .word 0x1440ff8f
  .word 0x00000000
  .word 0x27a40c60
  .word 0x0280282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c024110
  .word 0x44820800
  .word 0x00000000
  .word 0x46010036
  .word 0x4501000c
  .word 0x00000000
  .word 0x3c024108
  .word 0x44820800
  .word 0xc7a00c60
  .word 0x46000802
  .word 0xe6800000
  .word 0xc7a00c64
  .word 0x46000802
  .word 0xe6800004
  .word 0xc7a00c68
  .word 0x46000802
  .word 0xe6800008
  .word 0x02e0102d
  .word 0xdfbf00a0
  .word 0x7bbe0090
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
  .word 0x27bd0cc0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_001ac750
void K_FldFrame_HandleCollis(const RwV3d* pos, RwV3d* translation, f32 sphereCollisRadius,
                             u16 resTypeId)
{
    Resrc* res;
    void* collisionWorld;
    Resrc* fldRes;
    s32 xGrid;
    s32 zGrid;
    u32 gridResTypeId;
    u32 belowMin;

    if ((*(FldFrameCollisionState**)((u8*)K_Field_Get() + FLDFRAME_FIELD_STATE_OFFSET))->flags &
        FLDFRAME_COLLIS_FLAG_STATICWORLD)
    {
        func_001ab390(
            (*(FldFrameCollisionState**)((u8*)K_Field_Get() + FLDFRAME_FIELD_STATE_OFFSET))->staticCollision,
            pos, translation, sphereCollisRadius);
        return;
    }

    collisionWorld = NULL;
    if (K_Scene_001a0250() == true)
    {
        goto resource;
    }
    belowMin = gMtScene->fldMajorId < 0x33;
    if (belowMin)
    {
        goto fallback;
    }
    if (gMtScene->fldMajorId >= 0x4f)
    {
        goto fallback;
    }

resource:
    fldRes = MT_Scene_GetResListHead(RESRC_TYPE_FLD);
    res = MT_Scene_GetRes(resTypeId);
    if (RESRC_GET_TYPE(resTypeId) == RESRC_TYPE_MODELCHAR)
    {
        xGrid = K_FldFrame_CtlGetXGrid(((ResrcModelChar*)res)->collisCtlTask);
        zGrid = K_FldFrame_CtlGetZGrid(((ResrcModelChar*)res)->collisCtlTask);
    }
    else
    {
        xGrid = K_FldFrame_CtlGetXGrid(((ResrcModelNpc*)res)->collisCtlTask);
        zGrid = K_FldFrame_CtlGetZGrid(((ResrcModelNpc*)res)->collisCtlTask);
    }
    gridResTypeId = *(u16*)((u8*)K_Field_Get() + 0x4c + zGrid * 0x100 + xGrid * 0x10);

    while (fldRes != NULL)
    {
        if (fldRes->resTypeId == gridResTypeId)
        {
            collisionWorld = ((FldFrameResourceCollision*)((ResrcFld*)fldRes)->unk_160)->collisionWorld;
            break;
        }
        fldRes = fldRes->next;
    }
    goto done;

fallback:
    collisionWorld =
        (*(FldFrameCollisionState**)((u8*)K_Field_Get() + FLDFRAME_FIELD_STATE_OFFSET))->collisionWorld;

done:
    func_001abd20(collisionWorld, pos, translation, sphereCollisRadius, resTypeId);
}

/* W423 raycast FPU-role probes: unused f32 local, scalar segment locals,
 * and declaration-order relocation each stayed nd59/object240/window240
 * (0.245833), reverted. */
// FUN_001ac950
asm void* func_001ac950(const RwV3d* line, void* unused,
                    const void* triangle, FldFrameRaycast* raycast)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x27a80000
  .word 0x24050003
  .word 0x8c830000
  .word 0x8c820004
  .word 0x24840008
  .word 0x24a5ffff
  .word 0xad030000
  .word 0xad020004
  .word 0x25080008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0xc7ad0000
  .word 0xc7a0000c
  .word 0x46006b01
  .word 0xc7ab0004
  .word 0xc7a00010
  .word 0x46005a81
  .word 0xc7a90008
  .word 0xc7a00014
  .word 0x46004a01
  .word 0xc4c70004
  .word 0xc4c60000
  .word 0xc4c50008
  .word 0x460a381a
  .word 0x44802000
  .word 0x460c301e
  .word 0x460828dc
  .word 0x8cc2001c
  .word 0xc4420008
  .word 0xc4410000
  .word 0xc4400004
  .word 0x4600381a
  .word 0x4601301e
  .word 0x4602281c
  .word 0x46000047
  .word 0x460b381a
  .word 0x460d301e
  .word 0x4609281c
  .word 0x46000800
  .word 0x46000007
  .word 0x46030043
  .word 0x460d2018
  .word 0x460c081c
  .word 0x8ce20000
  .word 0xe4400000
  .word 0x460b2018
  .word 0x460a081c
  .word 0x8ce20000
  .word 0xe4400004
  .word 0x46092018
  .word 0x4608081c
  .word 0x8ce20000
  .word 0xe4400008
  .word 0x24020001
  .word 0xace20004
  .word 0x0000102d
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
}

// FUN_001aca40
void* func_001aca40(f32 fraction, const RwV3d* line,
                    void* unused, FldFrameRaycast* raycast)
{
    typedef struct FldFrameLine
    {
        RwV3d point[2];
    } FldFrameLine;
    FldFrameLine lineCopy;
    RwV3d segment;

    lineCopy = *(const FldFrameLine*)line;
    if (raycast->nearestFraction > fraction)
    {
        segment.x = lineCopy.point[1].x - lineCopy.point[0].x;
        segment.y = lineCopy.point[1].y - lineCopy.point[0].y;
        segment.z = lineCopy.point[1].z - lineCopy.point[0].z;
        segment.x *= fraction;
        segment.y *= fraction;
        segment.z *= fraction;
        segment.x += lineCopy.point[0].x;
        segment.y += lineCopy.point[0].y;
        segment.z += lineCopy.point[0].z;
        *raycast->hitPointDst = segment;
        raycast->didHit = true;
        raycast->nearestFraction = fraction;
    }
    return unused;
}

// FUN_001acb20
void* func_001acb20(void* collisionWorld, FldFrameRaycast* raycast)
{
    raycast->hitObject = collisionWorld;
    func_00464120(collisionWorld, &raycast->line[0],
                  func_001aca40, raycast);
    return collisionWorld;
}

// FUN_001acb70
u32 func_001acb70(void* collisionWorld, const RwV3d* line,
                  RwV3d* hitPointDst)
{
    typedef struct FldFrameLine
    {
        RwV3d point[2];
    } FldFrameLine;
    typedef struct FldFrameIntersection
    {
        FldFrameLine line;
        u32 type;
    } FldFrameIntersection;
    FldFrameLine lineCopy __attribute__((aligned(16)));
    FldFrameIntersection intersection __attribute__((aligned(16)));
    FldFrameRaycast raycast;

    lineCopy = *(const FldFrameLine*)line;
    raycast.hitPointDst = hitPointDst;
    raycast.didHit = false;
    raycast.nearestFraction = fGpffff820c;
    intersection.type = 1;
    intersection.line = lineCopy;
    *(FldFrameIntersection*)&raycast.line[0] = intersection;

    if (collisionWorld == NULL)
    {
        return false;
    }
    FUN_004916d0(collisionWorld, func_001acb20, &raycast);
    return raycast.didHit;
}

// FUN_001acc30
asm u32 K_FldFrame_Raycast(const RwV3d* line, RwV3d* hitPointDst)
{
  .set noreorder
  .word 0x27bdff00
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0902d
  .word 0x27a600e0
  .word 0x24050003
  .word 0x8c830000
  .word 0x8c820004
  .word 0x24840008
  .word 0x24a5ffff
  .word 0xacc30000
  .word 0xacc20004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x8c420000
  .word 0x30420001
  .word 0x1040001b
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x8c44000c
  .word 0xafb20090
  .word 0xafa00094
  .word 0x24020001
  .word 0xafa200d8
  .word 0x27a500c0
  .word 0x7ba300e0
  .word 0xdfa200f0
  .word 0x7fa300c0
  .word 0xffa200d0
  .word 0x14800004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000007
  .word 0x00000000
  .word 0x3c06001b
  .word 0x24c6c950
  .word 0x27a70090
  .word 0x0c119008
  .word 0x00000000
  .word 0x8fa20094
  .word 0x1000005d
  .word 0x00000000
  .word 0x0000882d
  .word 0x0c068094
  .word 0x00000000
  .word 0x24030001
  .word 0x10430009
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c430000
  .word 0x28620033
  .word 0x1440002e
  .word 0x00000000
  .word 0x2861004f
  .word 0x1020002b
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x3c0343c8
  .word 0x44831000
  .word 0xc7a000e8
  .word 0x46001000
  .word 0x3c034448
  .word 0x44830800
  .word 0x00000000
  .word 0x46010003
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0x00031a00
  .word 0x00431821
  .word 0xc7a000e0
  .word 0x46001000
  .word 0x46010003
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00021100
  .word 0x00621021
  .word 0x9443004c
  .word 0x10000009
  .word 0x00000000
  .word 0x96020000
  .word 0x14430005
  .word 0x00000000
  .word 0x8e020160
  .word 0x8c510008
  .word 0x1000000a
  .word 0x00000000
  .word 0x8e1000f8
  .word 0x1600fff7
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x8c510008
  .word 0xafb20040
  .word 0xafa00044
  .word 0xc780820c
  .word 0xe7a00064
  .word 0x24020001
  .word 0xafa20088
  .word 0x27a50070
  .word 0x7ba300e0
  .word 0xdfa200f0
  .word 0x7fa30070
  .word 0xffa20080
  .word 0x27a40048
  .word 0x24030007
  .word 0x8ca20000
  .word 0x24a50004
  .word 0x2463ffff
  .word 0xac820000
  .word 0x24840004
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x16200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000008
  .word 0x00000000
  .word 0x0220202d
  .word 0x3c05001b
  .word 0x24a5cb20
  .word 0x27a60040
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x8fa20044
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0100
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_001ace90
void* func_001ace90(void* resource, void* unused, FldFrameMaterialSet* set)
{
    FldFrameMaterialWork* work;
    FldFrameResourceTable* table;
    FldFrameMaterialIndex* indices;
    void** slot;
    void* item;
    s32 count;
    s32 j;
    s32 i;
    u32 key;
    u16 index;
    work = set->link->work;
    indices = (FldFrameMaterialIndex*)work->indices;
    work->flags |= 0x40;
    key = *(u32*)((u8*)unused + 0x18);
    index = indices[key].value;
    item = ((void**)work->items)[index];
    if (!K_Clump_MatUsrDataHasData_typed(item, sFldFrameMaterialName))
    {
        return unused;
    }

    count = work->itemCount;
    i = 0;
    while (i < count)
    {
        item = ((void**)work->items)[i];
        j = 0;
        while (j < 0x40)
        {
            table = set->table;
            slot = (void**)((u8*)table + j * 4 + 8);
            if (*slot == NULL)
            {
                *slot = item;
                table = set->table;
                table->count++;
                break;
            }
            if (*slot == item)
            {
                break;
            }
            j++;
        }
        i++;
    }
    return unused;
}

/*
 * The collision package passes triangle data as a small, engine-private
 * record.  Keeping the record definition here makes the callback code
 * readable without exposing that implementation detail in the public header.
 */















// FUN_001acfc0
void* func_001acfc0(void* resource, void* state)
{
    RwSphere* sphere;

    func_004912b0(resource);
    sphere = func_004912b0(resource);
    if (RwCameraFrustumTestSphere(*(RwCamera**)DAT_00960070_abs, sphere) != rwSPHEREOUTSIDE)
    {
        *(void**)((u8*)state + 0x30) = resource;
        func_00464120(resource, (u8*)state + 4, func_001ace90, state);
    }
    return resource;
}

// FUN_001ad050
void func_001ad050(void* collisionWorld, const RwV4d* position,
                   u32* direction, void* result)
{
    struct
    {
        void* output;
        u32 direction[6];
        u32 directionMode;
        RwV4d position;
        u32 reserved;
    } resources;
    struct
    {
        u32 x;
        u32 y;
    } *src, *dst;
    u32 x, y;
    s32 i;

    memset_k_fldFrame_typed(&resources, 0, sizeof(resources));
    resources.directionMode = 1;
    src = (void*)direction;
    dst = (void*)resources.direction;
    i = 3;
    do
    {
        x = src->x;
        y = src->y;
        src++;
        i--;
        dst->x = x;
        dst->y = y;
        dst++;
    } while (i > 0);
    resources.position = *position;
    resources.output = result;
    FUN_004916d0(collisionWorld, func_001acfc0, &resources);
}

// FUN_001ad120
void* func_001ad120(void* unused, void* collision, FldFrameAtomicQuery* query)
{
    void* geometry;
    void* entry;
    u8* triangles;
    u8* triangle;
    u32 offset;
    u32 materialIndex;
    void** materials;
    void* material;
    s32 i;

    geometry = *(void**)((u8*)query->atomic + 0x18);
    triangles = *(u8**)((u8*)geometry + 0x2c);
    entry = *(void**)((u8*)geometry + 8);
    entry = (void*)((uintptr_t)entry | 0x40);
    *(void**)((u8*)geometry + 8) = entry;
    offset = *(u32*)((u8*)collision + 0x18) * 8;
    offset += (u32)triangles;
    triangle = (u8*)offset;
    materialIndex = *(u16*)(triangle + 6);
    materials = *(void***)((u8*)geometry + 0x20);
    material = materials[materialIndex];
    if (!K_Clump_MatUsrDataHasData_typed(material, D_00678CE0_typed))
    {
        return collision;
    }

    for (i = 0; i < 64; i++)
    {
        void** slot;

        slot = (void**)query->output;
        slot += i;
        slot = (void**)((u8*)slot + 0x108);
        if (*slot == NULL)
        {
            *slot = query->atomic;
            (*(u32*)((u8*)query->output + 4))++;
            break;
        }
        if (*slot == query->atomic)
        {
            break;
        }
    }
    return collision;
}

// Reconstructed point/triangle callback using the retail collector layout.
// Remaining differences are MWCCPS2 stack-slot and register scheduling residuals.
// FUN_001ad220
void func_001ad220(void* object, const RwV3d* point, void* result)
{
    FldFrameAtomicQuery query;
    u32* src;
    u32* dst;
    u32 x;
    u32 y;
    s32 i;
    RwSphere* sphere;

    memset_k_fldFrame_typed(&query, 0, sizeof(query));
    *(u32*)(query.intersection + 0x18) = 1;
    src = (u32*)point;
    dst = (u32*)query.intersection;
    i = 3;
    do
    {
        x = src[0];
        y = src[1];
        src += 2;
        i--;
        dst[0] = x;
        dst[1] = y;
        dst += 2;
    } while (i > 0);
    query.output = result;
    sphere = func_004912b0(*(void**)object);
    if (RwCameraFrustumTestSphere(*(RwCamera**)DAT_00960070_abs, sphere) != rwSPHEREOUTSIDE)
    {
        query.atomic = *(void**)object;
        func_00464120(query.atomic, query.intersection,
                      func_001ad120, &query);
    }
}
// FUN_001ad2f0
void* K_FldFrame_UpdateCtlTask(KwlnTask* collisCtlTask)
{
    CollisCtl* ctl;
    ResrcModelChar* charList; // unused
    ResrcModelNpc* npcList;   // unused
    RwMatrix* mdlMatrix;
    RwV3d line[2];
    RwV3d hitPoint;
    RwV3d translation;
    RwV3d pos;
    s32 i;

    ctl = (CollisCtl*)collisCtlTask->workData;

    charList = (ResrcModelChar*)MT_Scene_GetResListHead(RESRC_TYPE_MODELCHAR);
    npcList = (ResrcModelNpc*)MT_Scene_GetResListHead(RESRC_TYPE_MODELNPC);

    if (ctl->flags & COLLISCTL_FLAG_NOUPDATE)
    {
        return KWLNTASK_CONTINUE;
    }

    switch (ctl->state)
    {
        case COLLISCTL_STATE_DIRTY:
            mdlMatrix = mdlGetMatrix(ctl->mdl);
            pos = mdlMatrix->pos;

            if (ctl->flags & COLLISCTL_FLAG_GROUNDSNAP && 
                !(ctl->flags & COLLISCTL_FLAG_NOCOLLIS))
            {
                line[0] = line[1] = pos;

                if (K_Scene_001a0250())
                {
                    line[0].y += 600.0f;
                }
                else
                {
                    line[0].y += 200.0f;
                }

                line[1].y -= 1000.0f;

                if (K_FldFrame_Raycast(line, &hitPoint) == true)
                {
                    ctl->velocity.y = -(pos.y - hitPoint.y);
                }
            }

            for (i = 0; i < COLLISCTL_SUBSTEPS; i++)
            {
                translation.x = ctl->velocity.x / COLLISCTL_SUBSTEPS;
                translation.y = ctl->velocity.y / COLLISCTL_SUBSTEPS;
                translation.z = ctl->velocity.z / COLLISCTL_SUBSTEPS;

                pos = mdlGetMatrix(ctl->mdl)->pos;
                pos.y += ctl->sphereCollisRadius;

                if (!(ctl->flags & COLLISCTL_FLAG_NOCOLLIS))
                {
                    K_FldFrame_HandleCollis(&pos, &translation, ctl->sphereCollisRadius, ctl->resTypeId);
                }

                mdlTranslate(ctl->mdl, &translation, rwCOMBINEPOSTCONCAT);
            }

            ctl->xGrid = (mdlMatrix->pos.x + 400.0f) / 800.0f;
            ctl->zGrid = (mdlMatrix->pos.z + 400.0f) / 800.0f;

            if (RESRC_GET_ID(ctl->resTypeId) < 100)
            {
                K_Footstep_Update(ctl->mdl, ctl->charId, ctl->resTypeId);
            }

            ctl->state++; // COLLISCTL_STATE_NOTDIRTY
            break;

        case COLLISCTL_STATE_NOTDIRTY:
            mdlMatrix = mdlGetMatrix(ctl->mdl);

            if (ctl->flags & COLLISCTL_FLAG_DEBUGDRAW)
            {
                K_FldFrame_CollisSphereSetDrawEnabled(collisCtlTask->child, true);
            }
            else
            {
                K_FldFrame_CollisSphereSetDrawEnabled(collisCtlTask->child, false);
            }
            break;
        
        case COLLISCTL_STATE_IDLE: break;
    }

    return KWLNTASK_CONTINUE;
}

#pragma alias func_002ff790_k_fldFrame_void func_002ff790

// Remaining: post-grid collision processing (type1 walk, final apply, dampening)
// FUN_001ad630
void K_FldFrame_DestroyCtlTask(KwlnTask* collisCtlTask)
{
    RwFree(collisCtlTask->workData);
}
/* W389 sweep: baseline nd 59, obj 240/240; all six knobs and 15 pairs stayed nd59/obj240, except opt_common_subs off (nd246, obj364/240). Retained no pragma; documented residual is scheduling of x/y vector loads versus multiplies. */
/* W423 CreateCtlTask pointer-role probe: merging computed units into
 * unitsBase with direct global bases worsened nd27/object524/window528
 * (0.051527), reverted. */
// FUN_001ad660
KwlnTask* K_FldFrame_CreateCtlTask(KwlnTask* parent, u32 resTypeId, s32 unused, f32 sphereCollisRadius)
{
    KwlnTask* task;
    CollisCtl* ctl;
    Resrc* res;
    s32 i;
    FldUnit* units;

    ctl = RwCalloc(1, sizeof(CollisCtl), rwMEMHINTDUR_GLOBAL);
    if (ctl == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreateWithAutoPriority(parent,
                                          10,
                                          "collision controler",
                                          K_FldFrame_UpdateCtlTask,
                                          K_FldFrame_DestroyCtlTask,
                                          ctl);

    ctl->state = COLLISCTL_STATE_NOTDIRTY;
    ctl->resTypeId = resTypeId;
    ctl->sphereCollisRadius = sphereCollisRadius;
    ctl->unk_24 = 0;

    if (RESRC_GET_TYPE(resTypeId) == RESRC_TYPE_MODELCHAR)
    {
        res = MT_Scene_GetRes(resTypeId);
        if (res != NULL)
        {
            ctl->mdl = ((ResrcModelChar*)res)->mdl;
        }
        i = 0;
        __asm__ volatile ("la $a2, gFldUnitsPc");
        for (; i < FLDUNIT_PC_MAX; i++)
        {
            __asm__ volatile (
                "sll $v1, %1, 3\n"
                "subu $v1, $v1, %1\n"
                "sll $a3, $v1, 6\n"
                "addu %0, $a2, $a3"
                : "=r"(units)
                : "r"(i));
            if (units->genusBase != NULL &&
                units->mdl == ((ResrcModelChar*)res)->mdl)
            {
                u16 charId;

                __asm__ volatile (
                    "la %0, gFldUnitsPc + 0x1a8\n"
                    "addu %0, %0, $a3\n"
                    "lhu %0, 0(%0)"
                    : "=r"(charId));
                ctl->charId = charId;
                ctl->fldUnit = units;
                break;
            }
        }

        i = 0;
        __asm__ volatile ("la $a2, gFldUnitsEc");
        for (; i < FLDUNIT_EC_MAX; i++)
        {
            __asm__ volatile (
                "sll $v1, %1, 3\n"
                "subu $v1, $v1, %1\n"
                "sll $a3, $v1, 6\n"
                "addu %0, $a2, $a3"
                : "=r"(units)
                : "r"(i));
            if (units->genusBase != NULL &&
                units->mdl == ((ResrcModelChar*)res)->mdl)
            {
                u16 charId;

                __asm__ volatile (
                    "la %0, gFldUnitsEc + 0x1a8\n"
                    "addu %0, %0, $a3\n"
                    "lhu %0, 0(%0)"
                    : "=r"(charId));
                ctl->charId = charId;
                ctl->fldUnit = units;
                break;
            }
        }
    }
    else if (RESRC_GET_TYPE(resTypeId) == RESRC_TYPE_MODELNPC)
    {
        res = MT_Scene_GetRes(resTypeId);
        if (res != NULL)
        {
            ctl->mdl = ((ResrcModelNpc*)res)->mdl;
        }
    }

    K_FldFrame_CreateCollisSphereTask(task);

    return task;
}

// FUN_001ad870
void K_FldFrame_CtlSetFlags(KwlnTask* collisCtlTask, u32 flags)
{
    ((CollisCtl*)collisCtlTask->workData)->flags |= flags;
}

// FUN_001ad890
void K_FldFrame_CtlClearFlags(KwlnTask* collisCtlTask, u32 flags)
{
    ((CollisCtl*)collisCtlTask->workData)->flags &= ~flags;
}

// FUN_001ad8b0
f32 K_FldFrame_CtlGetSphereCollisRadius(KwlnTask* collisCtlTask)
{
    return ((CollisCtl*)collisCtlTask->workData)->sphereCollisRadius;
}

// FUN_001ad8c0
void K_FldFrame_CtlSetSphereCollisRadius(KwlnTask* collisCtlTask, f32 radius)
{
    CollisCtl* ctl;

    ctl = (CollisCtl*)collisCtlTask->workData;
    ctl->sphereCollisRadius = radius;

    if (radius == 0.0f)
    {
        ctl->flags |= COLLISCTL_FLAG_NOCOLLIS;
        return;
    }

    ctl->flags &= ~COLLISCTL_FLAG_NOCOLLIS;
}

// FUN_001ad910
s32 K_FldFrame_CtlGetXGrid(KwlnTask* collisCtlTask)
{
    return ((CollisCtl*)collisCtlTask->workData)->xGrid;
}

// FUN_001ad920
s32 K_FldFrame_CtlGetZGrid(KwlnTask* collisCtlTask)
{
    return ((CollisCtl*)collisCtlTask->workData)->zGrid;
}

// FUN_001ad930
u32 K_FldFrame_CtlGetTotalDist(KwlnTask* collisCtlTask)
{
    return ((CollisCtl*)collisCtlTask->workData)->totalDist;
}

// FUN_001ad940
void K_FldFrame_CtlCopyPos(RwV3d* dst, KwlnTask* collisCtlTask)
{
    CollisCtl* ctl = (CollisCtl*)collisCtlTask->workData;
    RwV3d vec = {0};

    if (ctl->mdl != NULL)
    {
        vec = mdlGetMatrix(ctl->mdl)->pos;
    }

    *dst = vec;
}

// FUN_001ad9e0
void K_FldFrame_CtlUpdateMdlMat(KwlnTask* collisCtlTask, const RwMatrix* mat)
{
    CollisCtl* ctl = (CollisCtl*)collisCtlTask->workData;
    RwV3d originalPos;
    RwV3d zeroPos = {0};
    RwMatrixTolerance initialTolerance;
    RwMatrixTolerance rotatedTolerance;
    RwMatrixTolerance finalTolerance;

    if (ctl->mdl != NULL)
    {
        originalPos = mdlGetMatrix(ctl->mdl)->pos;
        mdlGetMatrix(ctl->mdl)->pos = zeroPos;
        RwEngineGetMatrixTolerances(&initialTolerance);
        RwMatrixOptimize(mdlGetMatrix(ctl->mdl), &initialTolerance);
        RwMatrixUpdate(mdlGetMatrix(ctl->mdl));

        mdlGetMatrix(ctl->mdl)->right = mat->right;
        mdlGetMatrix(ctl->mdl)->up = mat->up;
        mdlGetMatrix(ctl->mdl)->at = mat->at;
        RwEngineGetMatrixTolerances(&rotatedTolerance);
        RwMatrixOptimize(mdlGetMatrix(ctl->mdl), &rotatedTolerance);
        RwMatrixUpdate(mdlGetMatrix(ctl->mdl));

        if (ctl->fldUnit != NULL)
        {
            mdlScale(ctl->mdl, &D_00683780[ctl->fldUnit->scaleIdx], rwCOMBINEPOSTCONCAT);
        }

        mdlGetMatrix(ctl->mdl)->pos = originalPos;
        RwEngineGetMatrixTolerances(&finalTolerance);
        RwMatrixOptimize(mdlGetMatrix(ctl->mdl), &finalTolerance);
        RwMatrixUpdate(mdlGetMatrix(ctl->mdl));
    }
}

// FUN_001adc20
void func_001adc20(KwlnTask* collisCtlTask, const RwV3d* position)
{
    CollisCtl* ctl;
    RwMatrixTolerance tolerance;

    ctl = (CollisCtl*)collisCtlTask->workData;
    if (ctl->mdl == NULL)
    {
        return;
    }

    mdlGetMatrix(ctl->mdl)->pos = *position;
    RwEngineGetMatrixTolerances(&tolerance);
    RwMatrixOptimize(mdlGetMatrix(ctl->mdl), &tolerance);
    RwMatrixUpdate(mdlGetMatrix(ctl->mdl));
    ctl->xGrid = (mdlGetMatrix(ctl->mdl)->pos.x + 400.0f) / 800.0f;
    ctl->zGrid = (mdlGetMatrix(ctl->mdl)->pos.z + 400.0f) / 800.0f;
}
// FUN_001add40
void func_001add40(KwlnTask* collisCtlTask)
{
    CollisCtl* ctl;

    ctl = (CollisCtl*)collisCtlTask->workData;
    ctl->xGrid = (mdlGetMatrix(ctl->mdl)->pos.x + 400.0f) / 800.0f;
    ctl->zGrid = (mdlGetMatrix(ctl->mdl)->pos.z + 400.0f) / 800.0f;

}


// FUN_001addf0
void K_FldFrame_CtlMoveInDir(f32 dist, KwlnTask* collisCtlTask, const RwV3d* normalizedDir)
{
    CollisCtl* ctl;
    RwV3d velocity;

    ctl = (CollisCtl*)collisCtlTask->workData;
    velocity = *normalizedDir;

    if (ctl->state == COLLISCTL_STATE_NOTDIRTY)
    {
        velocity.x *= dist;
        velocity.y *= dist;
        velocity.z *= dist;
        
        ctl->totalDist += (u32)dist;
        ctl->velocity = velocity;

        ctl->state = COLLISCTL_STATE_DIRTY;
    }
}





/* The retail code uses these engine entry points through the split executable. */
#pragma alias D_00960090_abs D_00960090
#pragma alias D_007D2D60_abs D_007D2D60
#pragma alias D_00678C78_abs D_00678C78





























// MWCC floor: retail holds D_00678C00 in $v1 while b210 assigns the equivalent
// pointer lifetime to $a0; direct indexing regresses nd5 to nd34.





// The retail entry uses the opposite null-state branch layout; MWCC keeps the equivalent beqz form.
// The nine volatile list traversals and final state release are otherwise instruction-identical.








// FUN_001adec0
void K_FldFrame_CtlMoveForward(f32 dist, KwlnTask* collisCtlTask)
{
    CollisCtl* ctl = (CollisCtl*)collisCtlTask->workData;
    RwV3d velocity = {0};

    if (ctl->state == COLLISCTL_STATE_NOTDIRTY)
    {
        velocity = mdlGetMatrix(ctl->mdl)->at;
        RwV3dNormalize(&velocity, &velocity);
        
        velocity.x *= dist;
        velocity.y *= dist;
        velocity.z *= dist;

        ctl->totalDist += (u32)dist;
        ctl->velocity = velocity;

        ctl->state = COLLISCTL_STATE_DIRTY;
    }
}

// FUN_001adff0
void K_FldFrame_CtlRotate(KwlnTask* collisCtlTask, const RwV3d* axis, f32 angle)
{
    CollisCtl* ctl;
    RwV3d originalPos;
    RwV3d negPos;

    ctl = (CollisCtl*)collisCtlTask->workData;

    if (ctl->mdl != NULL)
    {
        originalPos = mdlGetMatrix(ctl->mdl)->pos;

        negPos.x = originalPos.x * -1.0f;
        negPos.y = originalPos.y * -1.0f;
        negPos.z = originalPos.z * -1.0f;

        mdlTranslate(ctl->mdl, &negPos, rwCOMBINEPOSTCONCAT); // basically just do pos + (-pos) = (0, 0, 0)
        mdlRotate(ctl->mdl, axis, angle, rwCOMBINEPOSTCONCAT);
        mdlTranslate(ctl->mdl, &originalPos, rwCOMBINEPOSTCONCAT);
    }
}

// FUN_001ae0d0
void func_001ae0d0(KwlnTask* collisCtlTask)
{
    CollisCtl* ctl;
    RwMatrix* matrix;
    RwV3d line[2];
    RwV3d hitPoint;
    RwMatrixTolerance tolerance;

    ctl = (CollisCtl*)collisCtlTask->workData;
    matrix = mdlGetMatrix(ctl->mdl);
    line[1] = matrix->pos;
    line[0] = line[1];
    line[0].y += ctl->sphereCollisRadius;
    line[1].y -= 800.0f;
    if (K_FldFrame_Raycast(line, &hitPoint) == true)
    {
        hitPoint.y += 3.0f;
        ctl = (CollisCtl*)collisCtlTask->workData;
        if (ctl->mdl != NULL)
        {
            mdlGetMatrix(ctl->mdl)->pos = hitPoint;
            RwEngineGetMatrixTolerances(&tolerance);
            RwMatrixOptimize(mdlGetMatrix(ctl->mdl), &tolerance);
            RwMatrixUpdate(mdlGetMatrix(ctl->mdl));
            ctl->xGrid = (mdlGetMatrix(ctl->mdl)->pos.x + 400.0f) / 800.0f;
            ctl->zGrid = (mdlGetMatrix(ctl->mdl)->pos.z + 400.0f) / 800.0f;
        }
    }
}

/* One commutative address add remains. */
// FUN_001ae290
void* K_FldFrame_UpdateCollisSphereTask(KwlnTask* collisSphereTask)
{
    CollisSphereDebug* debug;
    CollisCtl* ctl;
    f32 radius;

    debug = (CollisSphereDebug*)collisSphereTask->workData;
    ctl = (CollisCtl*)collisSphereTask->parent->workData;
    radius = ctl->sphereCollisRadius;

    {
        RwV3d spherePos;
        volatile /* Removing this qualifier loses K_FldFrame_UpdateCollisSphereTask (MATCH nd0 -> MISMATCH nd101, size 296 -> 280) - measured W170. */ RwV3d posCopy;
        RwV3d pos = {0};
        RwRGBA color;

        if (ctl->mdl != NULL)
        {
            pos = mdlGetMatrix(ctl->mdl)->pos;
        }

        posCopy = pos;
        spherePos = posCopy;
        color = sDebugSphereColor;

        if (debug->drawEnabled == 0)
        {
            return KWLNTASK_CONTINUE;
        }

        spherePos.y += radius;
        if (RwCameraBeginUpdate(kwlnGetMainCamera()) != NULL)
        {
            primSphereLine3D(&spherePos, radius, &color, true);
            RwCameraEndUpdate(kwlnGetMainCamera());
        }
    }

    return KWLNTASK_CONTINUE;
}

// FUN_001ae3c0
void K_FldFrame_DestroyCollisSphereTask(KwlnTask* collisSphereTask)
{
    RwFree(collisSphereTask->workData);
}

// FUN_001ae3f0
KwlnTask* K_FldFrame_CreateCollisSphereTask(KwlnTask* parent)
{
    CollisSphereDebug* work;

    work = RwCalloc(1, sizeof(CollisSphereDebug), rwMEMHINTDUR_GLOBAL);
    if (work == NULL)
    {
        return NULL;
    }

    return kwlnTaskCreate(parent,
                          "collis sphere",
                          4174,
                          K_FldFrame_UpdateCollisSphereTask,
                          K_FldFrame_DestroyCollisSphereTask,
                          work);
}

// FUN_001ae470
void K_FldFrame_CollisSphereSetDrawEnabled(KwlnTask* collisSphereTask, u32 drawEnabled)
{
    ((CollisSphereDebug*)collisSphereTask->workData)->drawEnabled = drawEnabled;
}

#pragma opt_loop_invariants on

// FUN_001ae480
u32 func_001ae480(KwlnTask* task)
{
    FldFrameMoveWork* work;
    s32 i;

    work = (FldFrameMoveWork*)task->workData;
    if (work->pointCount > 0)
    {
        if ((work->flags & 0x80000000) != 0 &&
            work->points[0].drawTask != NULL)
        {
            kwlnTaskDestroyWithHierarchy(work->points[0].drawTask);
            work->points[0].drawTask = NULL;
        }
        memset_k_fldFrame_typed(&work->points[0], 0, sizeof(FldFrameMovePoint));
        work->pointCount--;
        for (i = 0; i < work->pointCount; i++)
        {
            work->points[i] = work->points[i + 1];
            work->points[i + 1].drawTask = NULL;
        }
        return true;
    }
    return false;
}
#pragma opt_loop_invariants reset

// FUN_001ae580
#pragma opt_lifetimes on
asm void* func_001ae580(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdfe90
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080802d
  .word 0x8c92003c
  .word 0x3c020068
  .word 0xdc438d08
  .word 0x3c020068
  .word 0xc4408d10
  .word 0xffa30160
  .word 0xe7a00168
  .word 0x3c020068
  .word 0xdc438d18
  .word 0x3c020068
  .word 0xc4408d20
  .word 0xffa30150
  .word 0xe7a00158
  .word 0x8e430008
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100004ae
  .word 0x00000000
  .word 0x8e420000
  .word 0x2c410009
  .word 0x102004a9
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636ad0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0c130e30
  .word 0x00000000
  .word 0xae4204cc
  .word 0x8e420000
  .word 0x24420001
  .word 0xae420000
  .word 0x1000049a
  .word 0x00000000
  .word 0x8e42001c
  .word 0x1c400004
  .word 0x00000000
  .word 0x8e4204d8
  .word 0x184000a6
  .word 0x00000000
  .word 0x8e430020
  .word 0x24060001
  .word 0x10660004
  .word 0x00000000
  .word 0x24020004
  .word 0x14620033
  .word 0x00000000
  .word 0x8e43000c
  .word 0x94620000
  .word 0x304203ff
  .word 0x28410064
  .word 0x10200016
  .word 0x00000000
  .word 0x8e440010
  .word 0x0c077780
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x8e42000c
  .word 0x8c440128
  .word 0x0000282d
  .word 0x24070002
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e43000c
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8c640128
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x8c640128
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070008
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e43000c
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8c640128
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0xc6400030
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xae4204d0
  .word 0x24020005
  .word 0xae420000
  .word 0x1000045b
  .word 0x00000000
  .word 0x24020002
  .word 0x14620032
  .word 0x00000000
  .word 0x8e43000c
  .word 0x94620000
  .word 0x304203ff
  .word 0x28410064
  .word 0x10200016
  .word 0x00000000
  .word 0x8e440010
  .word 0x0c077780
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x8e42000c
  .word 0x8c440128
  .word 0x0000282d
  .word 0x24070002
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e43000c
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8c640128
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x8c640128
  .word 0x0000282d
  .word 0x24070008
  .word 0x00c0402d
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e43000c
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8c640128
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0xc6400030
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xae4204d0
  .word 0x24020006
  .word 0xae420000
  .word 0x10000427
  .word 0x00000000
  .word 0x24020005
  .word 0x10620424
  .word 0x00000000
  .word 0x8e43000c
  .word 0x94620000
  .word 0x304203ff
  .word 0x28410064
  .word 0x1020001a
  .word 0x00000000
  .word 0x8c640128
  .word 0x0000282d
  .word 0x0c0c6150
  .word 0x00000000
  .word 0x0002843c
  .word 0x0010843f
  .word 0x8e440010
  .word 0x0c077b50
  .word 0x00000000
  .word 0x1202001f
  .word 0x00000000
  .word 0x8e440010
  .word 0x0c077b50
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x8e42000c
  .word 0x8c440128
  .word 0x0000282d
  .word 0x24070008
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x8c640128
  .word 0x0000282d
  .word 0x0c0c6150
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24060001
  .word 0x10460008
  .word 0x00000000
  .word 0x8e42000c
  .word 0x8c440128
  .word 0x0000282d
  .word 0x24070008
  .word 0x00c0402d
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x24020008
  .word 0xae420014
  .word 0x24020002
  .word 0xae420000
  .word 0x100003ef
  .word 0x00000000
  .word 0x8e420014
  .word 0x1c400043
  .word 0x00000000
  .word 0x8e42000c
  .word 0x8c440128
  .word 0x0000282d
  .word 0x0c0c6150
  .word 0x00000000
  .word 0x0002843c
  .word 0x0010843f
  .word 0x8e43000c
  .word 0x94620000
  .word 0x304203ff
  .word 0x28410064
  .word 0x10200021
  .word 0x00000000
  .word 0x24020004
  .word 0x120203dc
  .word 0x00000000
  .word 0x24020015
  .word 0x120203d9
  .word 0x00000000
  .word 0x8e440010
  .word 0x0c077780
  .word 0x00000000
  .word 0x120203d4
  .word 0x00000000
  .word 0x8e440010
  .word 0x0c077780
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x8e42000c
  .word 0x8c440128
  .word 0x0000282d
  .word 0x24070008
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e43000c
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8c640128
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x100003bf
  .word 0x00000000
  .word 0x24020003
  .word 0x120203bc
  .word 0x00000000
  .word 0x120003ba
  .word 0x00000000
  .word 0x8c640128
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070008
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e43000c
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8c640128
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x100003aa
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae420014
  .word 0x100003a6
  .word 0x00000000
  .word 0x8e4404d8
  .word 0x188000ea
  .word 0x00000000
  .word 0x28810003
  .word 0x10200030
  .word 0x00000000
  .word 0x8e42001c
  .word 0x00441021
  .word 0x28410030
  .word 0x102000e2
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000021
  .word 0x00000000
  .word 0x00021840
  .word 0x00621821
  .word 0x000318c0
  .word 0x02432821
  .word 0x8e44001c
  .word 0x00041840
  .word 0x00641821
  .word 0x000318c0
  .word 0x02431821
  .word 0xc4a204e0
  .word 0xc4a104e4
  .word 0xc4a004e8
  .word 0xe4620024
  .word 0xe4610028
  .word 0xe460002c
  .word 0xc4a004ec
  .word 0x8e44001c
  .word 0x00041840
  .word 0x00641821
  .word 0x000318c0
  .word 0x02431821
  .word 0xe4600030
  .word 0x8e44001c
  .word 0x00041840
  .word 0x00641821
  .word 0x000318c0
  .word 0x02431821
  .word 0xac600020
  .word 0x8e43001c
  .word 0x24630001
  .word 0xae43001c
  .word 0x24420001
  .word 0x8e4304d8
  .word 0x0043182a
  .word 0x1460ffdd
  .word 0x00000000
  .word 0xae4004d8
  .word 0x100000b8
  .word 0x00000000
  .word 0x8e43001c
  .word 0x00041080
  .word 0x00621021
  .word 0x28410030
  .word 0x102000b2
  .word 0x00000000
  .word 0x18600028
  .word 0x00000000
  .word 0x2463ffff
  .word 0x10000009
  .word 0x00000000
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02421021
  .word 0x8c420020
  .word 0x10400004
  .word 0x00000000
  .word 0x2463ffff
  .word 0x0461fff7
  .word 0x00000000
  .word 0x0461000d
  .word 0x00000000
  .word 0x8e42000c
  .word 0x8c440128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20060
  .word 0xe7a10064
  .word 0xe7a00068
  .word 0x10000017
  .word 0x00000000
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x00521021
  .word 0xc4420024
  .word 0xc4410028
  .word 0xc440002c
  .word 0xe7a20060
  .word 0xe7a10064
  .word 0xe7a00068
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e42000c
  .word 0x8c440128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20060
  .word 0xe7a10064
  .word 0xe7a00068
  .word 0x0000282d
  .word 0x1000000f
  .word 0x00000000
  .word 0x00051040
  .word 0x00452021
  .word 0x000410c0
  .word 0x02421821
  .word 0x00041080
  .word 0x005d1021
  .word 0x2442006c
  .word 0xc46204e0
  .word 0xc46104e4
  .word 0xc46004e8
  .word 0xe4420000
  .word 0xe4410004
  .word 0xe4400008
  .word 0x24a50001
  .word 0x8e4304d8
  .word 0x00a3102a
  .word 0x1440ffef
  .word 0x00000000
  .word 0x24640001
  .word 0x24050001
  .word 0x27a60060
  .word 0x0c1236ac
  .word 0x00000000
  .word 0x0040982d
  .word 0x8e4204d8
  .word 0x00021080
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010503
  .word 0x00000000
  .word 0x00000000
  .word 0x24110001
  .word 0x1000004d
  .word 0x00000000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0x46140302
  .word 0x8e43001c
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02421021
  .word 0x0260202d
  .word 0x2405000a
  .word 0x24460024
  .word 0x0000382d
  .word 0x0c123520
  .word 0x00000000
  .word 0x8e4204d8
  .word 0x00021883
  .word 0x04410003
  .word 0x00000000
  .word 0x24420003
  .word 0x00021883
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02421021
  .word 0xc44004ec
  .word 0x8e43001c
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02421021
  .word 0xe4400030
  .word 0x8e43001c
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02421021
  .word 0xac400020
  .word 0x8e430004
  .word 0x3c028000
  .word 0x00621024
  .word 0x1040001e
  .word 0x00000000
  .word 0xc780952c
  .word 0xe7a0016c
  .word 0x0000202d
  .word 0x0c069334
  .word 0x00000000
  .word 0x8e44001c
  .word 0x00041840
  .word 0x00641821
  .word 0x000318c0
  .word 0x02431821
  .word 0xac620034
  .word 0x8e43001c
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02421021
  .word 0x8c440034
  .word 0x27a5016c
  .word 0x0c069370
  .word 0x00000000
  .word 0x8e43001c
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x02421021
  .word 0x8c440034
  .word 0x24450024
  .word 0x0c069398
  .word 0x00000000
  .word 0x8e42001c
  .word 0x24420001
  .word 0xae42001c
  .word 0x26310001
  .word 0x8e4204d8
  .word 0x00021080
  .word 0x0222102a
  .word 0x1440ffb0
  .word 0x00000000
  .word 0xae4004d8
  .word 0x0260202d
  .word 0x0c12368c
  .word 0x00000000
  .word 0x8e42001c
  .word 0x1c400005
  .word 0x00000000
  .word 0x24020001
  .word 0xae420000
  .word 0x100002b3
  .word 0x00000000
  .word 0x8e42000c
  .word 0x8c440128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe64204a0
  .word 0xe64104a4
  .word 0xe64004a8
  .word 0xc6420024
  .word 0xc6410028
  .word 0xc640002c
  .word 0xe7a20140
  .word 0xe7a10144
  .word 0xe7a00148
  .word 0x44801000
  .word 0xae4004a4
  .word 0xafa00144
  .word 0xc64104a0
  .word 0xc7a00140
  .word 0x46010001
  .word 0xe64004bc
  .word 0xc64004a4
  .word 0x46001001
  .word 0xe64004c0
  .word 0xc64104a8
  .word 0xc7a00148
  .word 0x46010001
  .word 0xe64004c4
  .word 0x264404bc
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xe64004c8
  .word 0xc64504c4
  .word 0xc7a40158
  .word 0xc64304bc
  .word 0xc7a20150
  .word 0xc64104c0
  .word 0xc7a00154
  .word 0x4600081a
  .word 0x4602181e
  .word 0x46042b1c
  .word 0x0c14ba7a
  .word 0x00000000
  .word 0xc78182b0
  .word 0x46000d02
  .word 0xc64104bc
  .word 0x44800000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000005
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x8e4204b4
  .word 0x1040004a
  .word 0x00000000
  .word 0x8e42000c
  .word 0x8c440128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0696a8
  .word 0x00000000
  .word 0x3c024334
  .word 0x44820800
  .word 0x00000000
  .word 0x46000880
  .word 0xe64204ac
  .word 0x46140d00
  .word 0x4602a036
  .word 0x45010008
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46140001
  .word 0x46020580
  .word 0x10000006
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46020001
  .word 0x46140580
  .word 0x4602a541
  .word 0x4600b306
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14b846
  .word 0x00000000
  .word 0x0040882d
  .word 0x4600ab06
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14b846
  .word 0x00000000
  .word 0x0220202d
  .word 0x0040282d
  .word 0x0c117b08
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x4600ad86
  .word 0xae4004b8
  .word 0x8e4204b4
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
  .word 0x00000000
  .word 0x00000000
  .word 0x4600b003
  .word 0x00000000
  .word 0xe64004b0
  .word 0xe65404ac
  .word 0x10000006
  .word 0x00000000
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46140000
  .word 0xe64004ac
  .word 0xc64104c8
  .word 0xc6400030
  .word 0x46000803
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xae4204d0
  .word 0xc6430030
  .word 0xc64004d0
  .word 0x468000a0
  .word 0xc64104c8
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602185d
  .word 0xe64104d4
  .word 0x46000836
  .word 0x45010004
  .word 0x00000000
  .word 0x8e4204d0
  .word 0x24420001
  .word 0xae4204d0
  .word 0x24020003
  .word 0xae420000
  .word 0x8e4304b8
  .word 0x8e4204b4
  .word 0x0062082b
  .word 0x10200036
  .word 0x00000000
  .word 0x3c020068
  .word 0xdc438d28
  .word 0x3c020068
  .word 0xc4408d30
  .word 0xffa30130
  .word 0xe7a00138
  .word 0xc65404b0
  .word 0x8e42000c
  .word 0x8c4201e0
  .word 0x8c50003c
  .word 0x8e040010
  .word 0x10800024
  .word 0x00000000
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20110
  .word 0xe7a10114
  .word 0xe7a00118
  .word 0x3c02bf80
  .word 0x44820800
  .word 0xc7a00110
  .word 0x46000802
  .word 0xe7a00100
  .word 0xc7a00114
  .word 0x46000802
  .word 0xe7a00104
  .word 0xc7a00118
  .word 0x46000802
  .word 0xe7a00108
  .word 0x8e040010
  .word 0x27a50100
  .word 0x24060002
  .word 0x0c0c628c
  .word 0x00000000
  .word 0x8e040010
  .word 0x27a50130
  .word 0x4600a306
  .word 0x24060002
  .word 0x0c0c6294
  .word 0x00000000
  .word 0x8e040010
  .word 0x27a50110
  .word 0x24060002
  .word 0x0c0c628c
  .word 0x00000000
  .word 0x8e4204b8
  .word 0x24420001
  .word 0xae4204b8
  .word 0x100001d6
  .word 0x00000000
  .word 0x3c033f80
  .word 0x8e4204cc
  .word 0xac430028
  .word 0x8e4204cc
  .word 0xac430014
  .word 0x8e4204cc
  .word 0xac430000
  .word 0x8e4204cc
  .word 0xac400010
  .word 0x8e4204cc
  .word 0xac400008
  .word 0x8e4204cc
  .word 0xac400004
  .word 0x8e4204cc
  .word 0xac400024
  .word 0x8e4204cc
  .word 0xac400020
  .word 0x8e4204cc
  .word 0xac400018
  .word 0x8e4204cc
  .word 0xac400038
  .word 0x8e4204cc
  .word 0xac400034
  .word 0x8e4204cc
  .word 0xac400030
  .word 0x8e4404cc
  .word 0x8c83000c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xac82000c
  .word 0xc64104ac
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0x8e4404cc
  .word 0x27a50160
  .word 0x24060002
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x8e42000c
  .word 0x8c4401e0
  .word 0x8e4504cc
  .word 0x0c06b678
  .word 0x00000000
  .word 0x24020004
  .word 0xae420000
  .word 0x8e43000c
  .word 0x94620000
  .word 0x304203ff
  .word 0x28410064
  .word 0x10200018
  .word 0x00000000
  .word 0x8c640128
  .word 0x0000282d
  .word 0x0c0c6150
  .word 0x00000000
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x8e440010
  .word 0x0c077b50
  .word 0x00000000
  .word 0x1222000d
  .word 0x00000000
  .word 0x8e440010
  .word 0x0c077b50
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x8e42000c
  .word 0x8c440128
  .word 0x0000282d
  .word 0x24070002
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0xc6540030
  .word 0x8e42000c
  .word 0x8c4201e0
  .word 0x8c51003c
  .word 0x27a300f0
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
  .word 0x8e230000
  .word 0x24020001
  .word 0x14620030
  .word 0x00000000
  .word 0x8e240010
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x27a400f0
  .word 0xc4420020
  .word 0xc4410024
  .word 0xc4400028
  .word 0xe7a200f0
  .word 0xe7a100f4
  .word 0xe7a000f8
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a000f0
  .word 0x46140002
  .word 0xe7a000f0
  .word 0xc7a000f4
  .word 0x46140002
  .word 0xe7a000f4
  .word 0xc7a000f8
  .word 0x46140002
  .word 0xe7a000f8
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010005
  .word 0x00000000
  .word 0x4600a024
  .word 0x44030000
  .word 0x10000006
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x8e220028
  .word 0x00431021
  .word 0xae220028
  .word 0xc7a200f0
  .word 0xc7a100f4
  .word 0xc7a000f8
  .word 0xe6220014
  .word 0xe6210018
  .word 0xe620001c
  .word 0xae200000
  .word 0x8e43000c
  .word 0x94620000
  .word 0x304203ff
  .word 0x28420064
  .word 0x14400012
  .word 0x00000000
  .word 0xc6410030
  .word 0xc78082b4
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b02
  .word 0x8c640128
  .word 0x948300d6
  .word 0x24020003
  .word 0x14620003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x8e4204d0
  .word 0x2442ffff
  .word 0xae4204d0
  .word 0x0441012b
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c06b920
  .word 0x00000000
  .word 0x8e440020
  .word 0x24030001
  .word 0x10830004
  .word 0x00000000
  .word 0x24020004
  .word 0x14820005
  .word 0x00000000
  .word 0x24020001
  .word 0xae420000
  .word 0x1000011d
  .word 0x00000000
  .word 0x24020002
  .word 0x14820004
  .word 0x00000000
  .word 0xae430000
  .word 0x10000117
  .word 0x00000000
  .word 0xae420000
  .word 0x10000114
  .word 0x00000000
  .word 0x8e42000c
  .word 0x94420000
  .word 0x304203ff
  .word 0x28410064
  .word 0x1020001a
  .word 0x00000000
  .word 0xc64004d0
  .word 0x46800060
  .word 0xc78081f8
  .word 0x46010042
  .word 0xc6400030
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000045
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b41
  .word 0x8e42000c
  .word 0x44806000
  .word 0x8c440128
  .word 0x0c0c6454
  .word 0x00000000
  .word 0x8e4204d0
  .word 0x2442ffff
  .word 0xae4204d0
  .word 0x044100f0
  .word 0x00000000
  .word 0x8e43000c
  .word 0x94620000
  .word 0x304203ff
  .word 0x28410064
  .word 0x10200009
  .word 0x00000000
  .word 0x8c640128
  .word 0xc78c80b4
  .word 0x0c0c6424
  .word 0x00000000
  .word 0x8e42000c
  .word 0x8c440128
  .word 0x0c0c6464
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c06b920
  .word 0x00000000
  .word 0x24020001
  .word 0xae420000
  .word 0x100000db
  .word 0x00000000
  .word 0x8e42000c
  .word 0x8c440128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe64204a0
  .word 0xe64104a4
  .word 0xe64004a8
  .word 0xc6410024
  .word 0xc64004a0
  .word 0x46000801
  .word 0xe64004bc
  .word 0xc6410028
  .word 0xc64004a4
  .word 0x46000801
  .word 0xe64004c0
  .word 0xc641002c
  .word 0xc64004a8
  .word 0x46000801
  .word 0xe64004c4
  .word 0x264404bc
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xe64004c8
  .word 0xc64504c4
  .word 0xc7a40158
  .word 0xc64304bc
  .word 0xc7a20150
  .word 0xc64104c0
  .word 0xc7a00154
  .word 0x4600081a
  .word 0x4602181e
  .word 0x46042b1c
  .word 0x0c14ba7a
  .word 0x00000000
  .word 0xc78182b0
  .word 0x46000d02
  .word 0xc64104bc
  .word 0x44800000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000005
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x8e42000c
  .word 0x8c440128
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0696a8
  .word 0x00000000
  .word 0x3c024334
  .word 0x44820800
  .word 0x00000000
  .word 0x46000880
  .word 0xe64204ac
  .word 0x46140d00
  .word 0x4602a036
  .word 0x45010008
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46140001
  .word 0x46020580
  .word 0x10000006
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46020001
  .word 0x46140580
  .word 0x4602a541
  .word 0x4600b306
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14b846
  .word 0x00000000
  .word 0x0040882d
  .word 0x4600ab06
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14b846
  .word 0x00000000
  .word 0x0220202d
  .word 0x0040282d
  .word 0x0c117b08
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x4600ad86
  .word 0xae4004b8
  .word 0xc6400030
  .word 0x4600b003
  .word 0xe64004b0
  .word 0xe65404ac
  .word 0x24020007
  .word 0xae420000
  .word 0x8e4304b8
  .word 0xc6400030
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x0062082b
  .word 0x10200036
  .word 0x00000000
  .word 0x3c020068
  .word 0xdc438d38
  .word 0x3c020068
  .word 0xc4408d40
  .word 0xffa30120
  .word 0xe7a00128
  .word 0xc65404b0
  .word 0x8e42000c
  .word 0x8c4201e0
  .word 0x8c50003c
  .word 0x8e040010
  .word 0x10800024
  .word 0x00000000
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a200e0
  .word 0xe7a100e4
  .word 0xe7a000e8
  .word 0x3c02bf80
  .word 0x44820800
  .word 0xc7a000e0
  .word 0x46000802
  .word 0xe7a000d0
  .word 0xc7a000e4
  .word 0x46000802
  .word 0xe7a000d4
  .word 0xc7a000e8
  .word 0x46000802
  .word 0xe7a000d8
  .word 0x8e040010
  .word 0x27a500d0
  .word 0x24060002
  .word 0x0c0c628c
  .word 0x00000000
  .word 0x8e040010
  .word 0x27a50120
  .word 0x4600a306
  .word 0x24060002
  .word 0x0c0c6294
  .word 0x00000000
  .word 0x8e040010
  .word 0x27a500e0
  .word 0x24060002
  .word 0x0c0c628c
  .word 0x00000000
  .word 0x8e4204b8
  .word 0x24420001
  .word 0xae4204b8
  .word 0x10000034
  .word 0x00000000
  .word 0x3c033f80
  .word 0x8e4204cc
  .word 0xac430028
  .word 0x8e4204cc
  .word 0xac430014
  .word 0x8e4204cc
  .word 0xac430000
  .word 0x8e4204cc
  .word 0xac400010
  .word 0x8e4204cc
  .word 0xac400008
  .word 0x8e4204cc
  .word 0xac400004
  .word 0x8e4204cc
  .word 0xac400024
  .word 0x8e4204cc
  .word 0xac400020
  .word 0x8e4204cc
  .word 0xac400018
  .word 0x8e4204cc
  .word 0xac400038
  .word 0x8e4204cc
  .word 0xac400034
  .word 0x8e4204cc
  .word 0xac400030
  .word 0x8e4404cc
  .word 0x8c83000c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xac82000c
  .word 0xc64104ac
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b01
  .word 0x8e4404cc
  .word 0x27a50160
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x8e42000c
  .word 0x8c4401e0
  .word 0x8e4504cc
  .word 0x0c06b678
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c06b920
  .word 0x00000000
  .word 0x24020001
  .word 0xae420000
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0170
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma schedule reset
#pragma opt_lifetimes reset

// FUN_001af8e0
void func_001af8e0(KwlnTask* task)
{
    FldFrameMoveWork* work = (FldFrameMoveWork*)task->workData;

    if (work->drawMatrix != NULL)
    {
        func_004c3880(work->drawMatrix);
    }
    (*(void (**)(void*))jtbl_0096017C_abs)(task->workData);
}

// FUN_001af930
KwlnTask* func_001af930(KwlnTask* parent, void* resource)
{
    u32 animation;
    FldFrameMoveWork* work;
    KwlnTask* task;
    work = (FldFrameMoveWork*)RwCalloc(1, 0x5a0, rwMEMHINTDUR_GLOBAL);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreateWithAutoPriority(parent,
                                          10,
                                          "field move",
                                          func_001ae580,
                                          func_001af8e0,
                                          work);
    work->resource = resource;
    if ((*(u16*)resource & 0x3ff) < 100)
    {
        animation = *(u16*)((u8*)*(Model**)((u8*)resource + 0x128) + 0xd6);
        if (animation > 0xff)
        {
            work->animation = animation >> 8;
        }
        else
        {
            work->animation = animation;
        }
        work->turnMode = 0;
    }
    else
    {
        work->turnMode = 5;
    }
    return task;
}

// Replacing both 12-byte typed memcpy calls with direct RwV3d stores removes the retail-extra calls but worsens normalized_diff 363 -> 379 (object 784 -> 792, window 800); retain typed helpers (measured W414).
// FUN_001AFA20
u32 func_001afa20(KwlnTask* task, const RwV3d* position, f32 duration)
{
    FldFrameMoveWork* work;
    RwV3d line[2];
    RwV3d resolved;
    RwV3d* output;
    f32 debugColor;

    work = (FldFrameMoveWork*)task->workData;
    line[1] = *position;
    line[0] = line[1];
    if (K_Scene_001a0250() != false)
    {
        line[0].y += 600.0f;
    }
    else
    {
        line[0].y += 200.0f;
    }
    line[1].y -= 1000.0f;
    switch (work->pathMode)
    {
    case 0:
        if (work->pointCount < 47)
        {
            if (K_FldFrame_Raycast(line, &resolved) == true)
            {
                work->points[work->pointCount].position = resolved;
            }
            else
            {
                work->points[work->pointCount].position = *position;
            }
            work->points[work->pointCount].duration = duration;
            work->points[work->pointCount].kind = 0;
            if ((work->flags & 0x80000000) != 0)
            {
                debugColor = *(f32*)&sDebugSphereColor;
                work->points[work->pointCount].drawTask = K_Draw_CreatePositionTask(0);
                K_Draw_SetPositionColor(work->points[work->pointCount].drawTask,
                                        (RwRGBA*)&debugColor);
                K_Draw_SetPositionPos(work->points[work->pointCount].drawTask,
                                      &work->points[work->pointCount].position);
            }
            work->pointCount++;
            return true;
        }
        return false;
    case 1:
        if (work->pendingPointCount < 7)
        {
            if (K_FldFrame_Raycast(line, &resolved) == true)
            {
                output = (RwV3d*)((u8*)(uintptr_t)fldFrameAddOffset(work->pendingPointCount * 0x18,
                                                                     (u32)(uintptr_t)work) + 0x4e0);
                *output = resolved;
            }
            else
            {
                output = (RwV3d*)((u8*)(uintptr_t)fldFrameAddOffset(work->pendingPointCount * 0x18,
                                                                     (u32)(uintptr_t)work) + 0x4e0);
                *output = *position;
            }
            *(f32*)((u8*)(uintptr_t)fldFrameAddOffset(work->pendingPointCount * 0x18,
                                                       (u32)(uintptr_t)work) + 0x4ec) = duration;
            work->pendingPointCount++;
            return true;
        }
        return false;
    default:
        return false;
    }
}

// FUN_001AFD40
u32 func_001afd40(KwlnTask* task, const RwV3d* position, f32 duration)
{
    FldFrameMoveWork* work;
    RwV3d line[2];
    RwV3d resolved;
    f32 debugColor;

    work = (FldFrameMoveWork*)task->workData;
    line[1] = *position;
    line[0] = line[1];
    if (K_Scene_001a0250() != false)
    {
        line[0].y += 600.0f;
    }
    else
    {
        line[0].y += 200.0f;
    }
    line[1].y -= 1000.0f;
    if (work->pointCount >= 47)
    {
        goto done;
    }
    if (K_FldFrame_Raycast(line, &resolved) == true)
    {
        work->points[work->pointCount].position = resolved;
    }
    else
    {
        work->points[work->pointCount].position = *position;
    }
    work->points[work->pointCount].duration = duration;
    work->points[work->pointCount].kind = 3;
    if ((work->flags & 0x80000000) != 0)
    {
        debugColor = *(f32*)&sDebugSphereColor;
        work->points[work->pointCount].drawTask = K_Draw_CreatePositionTask(0);
        K_Draw_SetPositionColor(work->points[work->pointCount].drawTask,
                                (RwRGBA*)&debugColor);
        K_Draw_SetPositionPos(work->points[work->pointCount].drawTask,
                              &work->points[work->pointCount].position);
    }
    work->pointCount++;
    return true;
done:
    return false;
}

// FUN_001AFF70
u32 func_001aff70(KwlnTask* task, s32 duration)
{
    FldFrameMoveWork* work;

    work = (FldFrameMoveWork*)task->workData;
    if (work->pointCount < 47)
    {
        if (work->pointCount > 0 &&
            work->points[work->pointCount - 1].kind == 1)
        {
            return false;
        }
        work->points[work->pointCount].kind = 1;
        work->points[work->pointCount].duration = (f32)duration;
        work->pointCount++;
        return true;
    }
    return false;
}

// FUN_001b0020
u32 func_001b0020(KwlnTask* task, const RwV3d* position, s32 duration)
{
    FldFrameMoveWork* work;

    work = (FldFrameMoveWork*)task->workData;
    if (work->pointCount < 47)
    {
        work->points[work->pointCount].kind = 2;
        work->points[work->pointCount].position = *position;
        work->points[work->pointCount].duration = (f32)duration;
        work->pointCount++;
        return true;
    }
    return false;
}

// FUN_001b00c0
void func_001b00c0(KwlnTask* task)
{
    FldFrameMoveWork* work;
    s32 i;
    Model* model;

    work = (FldFrameMoveWork*)task->workData;
    if (work->points[0].kind == 3)
    {
        return;
    }
    if (work->points[0].kind == 4)
    {
        return;
    }
    if ((work->flags & 0x80000000) != 0)
    {
        for (i = 0; i < work->pointCount; i++)
        {
            if (*(KwlnTask**)((u8*)work + 0x20 + i * 0x18 + 0x14) != NULL)
            {
                kwlnTaskDestroyWithHierarchy(
                    *(KwlnTask**)((u8*)work + 0x20 + i * 0x18 + 0x14));
            }
            *(KwlnTask**)((u8*)work + 0x20 + i * 0x18 + 0x14) = NULL;
        }
    }
    if (work->pointCount == 0)
    {
        goto reset;
    }
    model = *(Model**)((u8*)work->resource + 0x128);
    mdlLookAtDisableTarget(model);
reset:
    memset_k_fldFrame_typed(work->points, 0, sizeof(work->points));
    work->pointCount = 0;
    work->pendingPointCount = 0;
    work->state = 1;
}

// FUN_001b01b0
u32* func_001b01b0(KwlnTask* task, s32 index)
{
    return &((FldFrameMoveWork*)task->workData)->points[index].kind;
}

// FUN_001b01d0
void func_001b01d0(KwlnTask* task, s32 index, const FldFrameMovePoint* point)
{
    FldFrameMoveWork* work;
    s32 offset;

    work = (FldFrameMoveWork*)task->workData;
    offset = index * 0x18;
    *(FldFrameMovePoint*)(offset + (int)work + 0x20) = *point;
}

// FUN_001b0220
s32 func_001b0220(KwlnTask* task)
{
    return ((FldFrameMoveWork*)task->workData)->pointCount;
}

// Retail offsets 0x000-0x730: scene/time/date dispatch and 13 audio-table branches; 0x734-0x73f is tail padding.
// FUN_001b0230
void func_001b0230(KwlnTask* task, s32 pointCount)
{
    ((FldFrameMoveWork*)task->workData)->pointCount = pointCount;
}

// FUN_001b0240
void func_001b0240(KwlnTask* task, s32 mode)
{
    ((FldFrameMoveWork*)task->workData)->pathMode = mode;
}

// FUN_001b0250
void func_001b0250(KwlnTask* task, s32 turnMode)
{
    ((FldFrameMoveWork*)task->workData)->turnMode = turnMode;
}

// FUN_001b0260
void func_001b0260(KwlnTask* task, s32 mode)
{
    FldFrameMoveWork* work;
    CollisCtl* ctl;

    work = (FldFrameMoveWork*)task->workData;
    work->mode = mode;
    if (mode == 1)
    {
        ctl = (CollisCtl*)((KwlnTask*)*(void**)((u8*)work->resource + 0x1e0))->workData;
        ctl->flags |= COLLISCTL_FLAG_NOUPDATE;
    }
    else
    {
        ctl = (CollisCtl*)((KwlnTask*)*(void**)((u8*)work->resource + 0x1e0))->workData;
        ctl->flags &= ~COLLISCTL_FLAG_NOUPDATE;
    }
}

// FUN_001b02c0
asm f32 func_001b02c0(s32 inputIndex, s32 usePad)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0000
  .word 0x27a30010
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
  .word 0x44800000
  .word 0x14a00077
  .word 0x00000000
  .word 0x000410c0
  .word 0x00441821
  .word 0x00031080
  .word 0x00431023
  .word 0x00022840
  .word 0x3c02007e
  .word 0x2442095f
  .word 0x00451021
  .word 0x90420000
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x46800860
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x46800860
  .word 0x46010840
  .word 0x3c024300
  .word 0x44821000
  .word 0x00000000
  .word 0x46020841
  .word 0xe7a10018
  .word 0x3c02007e
  .word 0x2442094c
  .word 0x00451021
  .word 0x94450000
  .word 0x30a21000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c02c300
  .word 0xafa20018
  .word 0x10000005
  .word 0x00000000
  .word 0x30a24000
  .word 0x10400002
  .word 0x00000000
  .word 0xe7a20018
  .word 0x30a2a000
  .word 0x1040000f
  .word 0x00000000
  .word 0xc7a20018
  .word 0x3c02c240
  .word 0x44820800
  .word 0x00000000
  .word 0x46011034
  .word 0x45010008
  .word 0x00000000
  .word 0x3c024240
  .word 0x44820800
  .word 0x00000000
  .word 0x46011036
  .word 0x45000002
  .word 0x00000000
  .word 0xafa00018
  .word 0x000410c0
  .word 0x00441821
  .word 0x00031080
  .word 0x00431023
  .word 0x00021840
  .word 0x3c02007e
  .word 0x2442095e
  .word 0x00431021
  .word 0x90420000
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x46800860
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x46800860
  .word 0x46010840
  .word 0x3c024300
  .word 0x44821000
  .word 0x00000000
  .word 0x46020841
  .word 0xe7a10010
  .word 0x30a28000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c02c300
  .word 0xafa20010
  .word 0x10000005
  .word 0x00000000
  .word 0x30a22000
  .word 0x10400002
  .word 0x00000000
  .word 0xe7a20010
  .word 0x30a25000
  .word 0x1040005e
  .word 0x00000000
  .word 0xc7a20010
  .word 0x3c02c240
  .word 0x44820800
  .word 0x00000000
  .word 0x46011034
  .word 0x45010057
  .word 0x00000000
  .word 0x3c024240
  .word 0x44820800
  .word 0x00000000
  .word 0x46011036
  .word 0x45000051
  .word 0x00000000
  .word 0xafa00010
  .word 0x1000004e
  .word 0x00000000
  .word 0x000410c0
  .word 0x00441821
  .word 0x00031080
  .word 0x00431023
  .word 0x00022040
  .word 0x3c02007e
  .word 0x24420961
  .word 0x00441021
  .word 0x90420000
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0x3c024300
  .word 0x44820800
  .word 0x00000000
  .word 0x46011081
  .word 0xe7a20018
  .word 0x3c02c240
  .word 0x44820800
  .word 0x00000000
  .word 0x46011034
  .word 0x45010008
  .word 0x00000000
  .word 0x3c024240
  .word 0x44820800
  .word 0x00000000
  .word 0x46011036
  .word 0x45000002
  .word 0x00000000
  .word 0xafa00018
  .word 0x3c02007e
  .word 0x24420960
  .word 0x00441021
  .word 0x90420000
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0x3c024300
  .word 0x44820800
  .word 0x00000000
  .word 0x46011081
  .word 0xe7a20010
  .word 0x3c02c240
  .word 0x44820800
  .word 0x00000000
  .word 0x46011034
  .word 0x45010008
  .word 0x00000000
  .word 0x3c024240
  .word 0x44820800
  .word 0x00000000
  .word 0x46011036
  .word 0x45000002
  .word 0x00000000
  .word 0xafa00010
  .word 0xc7a10018
  .word 0x3c02c240
  .word 0x44821800
  .word 0x00000000
  .word 0x46030834
  .word 0x4501000e
  .word 0x00000000
  .word 0x3c024240
  .word 0x44821000
  .word 0x00000000
  .word 0x46020836
  .word 0x45000008
  .word 0x00000000
  .word 0xc7a10010
  .word 0x46030834
  .word 0x45010004
  .word 0x00000000
  .word 0x46020836
  .word 0x45010029
  .word 0x00000000
  .word 0x27a40020
  .word 0x27a50010
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a10028
  .word 0xc7a00020
  .word 0x4601081a
  .word 0x4600001c
  .word 0x46000004
  .word 0x00000000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14ba7a
  .word 0x00000000
  .word 0xc7818424
  .word 0x46010002
  .word 0xc7a20020
  .word 0x44800800
  .word 0x00000000
  .word 0x46011034
  .word 0x45000005
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820800
  .word 0x00000000
  .word 0x46000801
  .word 0x3c024334
  .word 0x44820800
  .word 0x00000000
  .word 0x46010000
  .word 0x3c0243b4
  .word 0x44820800
  .word 0x00000000
  .word 0x46010036
  .word 0x45010002
  .word 0x00000000
  .word 0x46010001
  .word 0xdfbf0000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
