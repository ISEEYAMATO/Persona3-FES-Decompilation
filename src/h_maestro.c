#include "h_maestro.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "rw/rt2danim.h"
#include "h_cdvd.h"
#include "rw/rwcore.h"
#include "temporary.h"
extern KwlnTask* func_00119960(KwlnTask* parent, u32 effectType, void* blob);

#pragma alias func_004aa390_y2 func_004aa390
#pragma alias func_004a9f20_y2 func_004a9f20
#pragma alias func_004aaa60_y2 func_004aaa60
#pragma alias func_004aad50_y2 func_004aad50
#pragma alias func_00110650_y2 func_00110650
#pragma alias func_004c58a0_y2 func_004c58a0
#pragma alias D_00960088_abs_y2 D_00960088_abs_y2
#pragma alias printf_y2 printf_y2
#pragma alias memcpy_y2 memcpy_y2
#pragma alias func_004aa3d0_y2 func_004aa3d0_y2
#pragma alias func_004aa410_y2 func_004aa410_y2
#pragma alias func_004b45b0_y2 func_004b45b0_y2
#pragma alias func_004a9bf0_y2 func_004a9bf0_y2
#pragma alias func_004cde90_y2 func_004cde90_y2
#pragma alias func_004c5780_y2 func_004c5780_y2
#pragma alias D_00960088_y2 D_00960088_y2

#pragma alias DAT_00960090_abs DAT_00960090
extern u8 DAT_00960090_abs[];

extern u32 FUN_004c2090(void* param_1);
extern f32 FUN_004b1a70(u32 param_1);
extern f32 FUN_004b1a60(u32 param_1);
extern void FUN_004b1870(u32 param_1, u32 param_2, u32 param_3);
extern f32 fGpffff80e4;
extern f32 gPI;
extern f32 gUnk_007cadd0;
extern RwCamera* kwlnGetMainCamera();
extern void H_Maestro_00111c50(KwlnTask* hmaestroTask);
extern void* func_004aa390_y2(f32 param_1);
extern void* func_004aa3d0(f32 param_1);
extern void* func_004a9f20_y2(f32 param_1, f32 param_2, f32 param_3, f32 param_4);
extern void* func_004aa410(RwCamera* camera);
extern void func_004a9d80(RwV2d* param_1, RwV2d* param_2, RwV2d* param_3);
extern void* func_004a9bf0();
extern void* func_004aaa60_y2();
extern void* func_004aad50_y2();
extern void* func_004aef60(Rt2dObject* scene);
extern void* func_004ae060(Rt2dObject* scene);
extern void* func_004ae070(Rt2dObject* scene, f32 param_2, f32 param_3);
extern void* func_004ae0c0(Rt2dObject* scene, f32 param_2, f32 param_3);
extern void* func_004ae110(Rt2dObject* scene, RwRGBAReal* color);
extern void* func_004b45b0(void* param_1, RwStream* stream);
extern void* func_004b4c70(Rt2dMaestro* maestro);
extern void* func_004b3cc0(Rt2dMaestro* maestro);
extern void* func_004b5000(Rt2dMaestro* maestro, f32 time);
extern void* func_004b5330(Rt2dMaestro* maestro);
extern void* func_004b4d60(Rt2dMaestro* maestro);
extern void* func_004c1600(RwStream* stream, u32 param_2, u32 param_3, u32 param_4);
extern RwStream* func_004c58a0_y2(u32 param_1, u32 param_2, const char* path);
extern void* func_004c5780(RwStream* stream, void* param_2);
extern void* func_004c9d70(RwCamera* camera, f32 nearPlane);
extern const char D_005D6B80[];
extern const char D_005D6BA0[];
extern RwMatrix* func_004c38c0(void);
extern void func_004c3880(RwMatrix* matrix);
extern RwMatrix* func_004c2fc0(RwReal oneMinusCosine, RwReal sine, RwMatrix* matrix, const RwV3d* axis, RwOpCombineType combineOp);
extern RwV3d* func_004c6c20(RwV3d* pointsOut, const RwV3d* pointsIn, RwUInt32 pointCount, const RwMatrix* matrix);
extern f32 sinf(f32 angle);
extern f32 cosf(f32 angle);

typedef struct MaestroResourceWork
{
    s32 state;
    s32 resourceIndex;
    void* resources[40];
    void* parsedResources[40];
    void* effectResources[40];
    s32 recordIndices[40];
    s32 renderStates[40];
    void* runtimeResources[40];
    u8 reserved1[0x10];
    f32 x;
    f32 y;
    u8 reserved2[8];
    s32 completedRecords;
    u8 reserved3[4];
    s16 coordinates0[40];
    s16 coordinates1[40];
    s16 coordinates2[40];
    u32 resourceCount;
    u32 renderFlags;
    u32 cancelRequested;
} MaestroResourceWork;

typedef struct MaestroStreamDimensions
{
    s16 values[4];
} MaestroStreamDimensions;

typedef struct MaestroStreamWork
{
    s32 state;
    s32 resourceIndex;
    void* resources[40];
    s16 dimensions[4];
    KwlnTask* resourceTask;
    s32 frameIndex;
    s32 recordCount;
    s32 complete;
    s32 stopAtFrame;
    void* stream;
    HCdvd* cdvd;
    u8 archiveHeader[0x2A];
    u8* records;
    char path[256];
    char basePath[256];
    f32 x;
    f32 y;
    u32 renderFlags;
    u32 createCustomPriorityTask;
    u32 resourceTaskPriority;
    u32 useCdvd;
} MaestroStreamWork;

typedef struct MaestroBlobNode
{
    s16 state;
    char path[0x102];
    void* resources[32];
    void* output;
    HCdvd* cdvd;
    u8* source;
    u32 sourceOffset;
    s16 resourceIndex;
    s16 outputCount;
    u8 header[0x20];
    struct MaestroBlobNode* next;
    struct MaestroBlobNode* prev;
} MaestroBlobNode;

typedef struct MaestroRenderNode
{
    struct MaestroRenderNode* next; // 0x00
    void* unused4;                  // 0x04
    MaestroBlobNode* blob;          // 0x08
    s32 outputIndex;                // 0x0c
    f32 x;                          // 0x10
    f32 y;                          // 0x14
    u8 alphaCutoff;                 // 0x18
    u8 alphaLoss;                   // 0x19
    u8 reserved1A[2];               // 0x1a
    s16 extraWidth;                 // 0x1c
    s16 extraHeight;                // 0x1e
    f32 angle;                      // 0x20
    s16 pivotX;                     // 0x24
    s16 pivotY;                     // 0x26
    u16 xScale;                     // 0x28
    u16 yScale;                     // 0x2a
    f32 depth;                      // 0x2c
    u8 red;                         // 0x30
    u8 green;                       // 0x31
    u8 blue;                        // 0x32
} MaestroRenderNode;

typedef struct MaestroOutputRecord
{
    u8 reserved0[0x14];
    s32 resourceIndex;              // 0x14
    u32 flags;                      // 0x18
    u8 reserved1[0x10];
    u32 renderStateFlags;           // 0x2c
    u8 reserved30[4];
    s32 topExtension;               // 0x34
    s32 bottomExtension;            // 0x38
    s32 leftExtension;              // 0x3c
    s32 rightExtension;             // 0x40
    s32 x;                          // 0x44
    s32 y;                          // 0x48
    u8 reserved2[12];
    s32 left;                       // 0x54
    s32 top;                        // 0x58
    s32 right;                      // 0x5c
    s32 bottom;                     // 0x60
    u32 colors[4];                  // 0x64
    s16 overrideX;                  // 0x74
    s16 overrideY;                  // 0x76
} MaestroOutputRecord;

extern u32 D_00960184[];
#pragma alias D_00960184_abs D_00960184
extern u8 D_00960184_abs[];
extern u32 jtbl_0096017C[];
extern void (*D_00960090)(u32 state, u32 value);
 #pragma alias D_00960090_abs D_00960090
 extern u8 D_00960090_abs[];
extern void (*D_009600A0)(RwPrimitiveType primitiveType, RwIm2DVertex* vertices, s32 vertexCount);
#pragma alias D_009600A0_abs D_009600A0
extern u8 D_009600A0_abs[];
#pragma alias D_009600A0_data_abs D_009600A0
extern u8 D_009600A0_data_abs[];
extern f32 D_00960088;
#pragma alias D_00960088_abs D_00960088
extern u8 D_00960088_abs[];
extern RwV3d D_005D6C28;
extern MaestroRenderNode* DAT_00833a4c;
extern MaestroBlobNode* DAT_00833a50;
extern int* DAT_007cdf3c;
#pragma alias DAT_007cdf3c_sda DAT_007cdf3c
extern int* DAT_007cdf3c_sda __attribute__((section(".sdata")));
extern const char* D_005D66E0[];
#define MAESTRO_ALLOC(count, size, flags) (*(void* (**)(u32, u32, u32))D_00960184_abs)(count, size, flags)
#define MAESTRO_FREE(memory) (*(void (**)(void*))jtbl_0096017C)(memory)
extern const s8 D_005D53E0[];
extern const char D_005D5880[];
extern const char D_005D5898[];
extern const char D_005D58A8[];
extern const char D_005D58C0[];
extern const char D_005D6A68[];
extern const char D_005D6A80[];
extern const char D_005D6AA0[];
extern const char D_005D6AB8[];
extern const char D_005D6AD0[];
extern const char D_005D6AF0[];
extern const char D_005D6B10[];
extern const char D_005D6B30[];
extern const char D_005D6B50[];
extern const char D_005D6B60[];
extern const char D_005D6BC0[];
extern const char D_005D6BD0[];
extern const char D_005D6BF0[];
extern const char D_005D6C10[];
extern const char D_005D6CD0[];
extern const char D_005D6E10[];
extern void* func_0010f6c0(KwlnTask* task);
extern const char* func_001022e0(HCdvd* cdvd, s32 entryIndex);
extern void* func_0010c1a0(void* param_1, const char* path, ...);
extern void func_00102720(const char* path, const void* archive);
extern void* func_0010c3a0(void* stream, u32* finished, u32 param_3);
extern void func_0010a4e0(u32 param_1, u32 param_2, s8 param_3, s8 param_4);
#pragma alias func_0010e880_y2 func_0010e880
extern void* func_0010e880_y2(const void* entry);
extern void func_00133d30(void* stream, HCdvd* cdvd);
extern u32 func_004a5540(void* resource);
extern void func_004a6200(void* resource, const f32* uv0, const f32* uv1, const f32* uv2, const f32* uv3);
extern void func_004ac120(void* resource, f32* output);
extern u32 func_004ac390(void* resource);
extern void func_004cde90(void* resource);
extern void func_004d0f00(void* resource);
extern void func_0010ec50(KwlnTask* task);
extern void* D_00833a40[];
#pragma alias D_00833a40_abs D_00833a40
extern void* D_00833a40_abs[];
static void Maestro_SetVertex(RwIm2DVertex* vertex,
                              f32 x,
                              f32 y,
                              f32 z,
                              f32 recipZ,
                              f32 u,
                              f32 v,
                              u32 color)
{
    vertex->u.els.scrVertex.x = x;
    vertex->u.els.scrVertex.y = y;
    vertex->u.els.scrVertex.z = z;
    vertex->u.els.camVertex_z = 0.0f;
    vertex->u.els.u = u;
    vertex->u.els.v = v;
    vertex->u.els.recipZ = recipZ;
    vertex->u.els.color.r = (f32)((color >> 24) & 0xff);
    vertex->u.els.color.g = (f32)((color >> 16) & 0xff);
    vertex->u.els.color.b = (f32)((color >> 8) & 0xff);
    vertex->u.els.color.a = (f32)(color & 0xff);
}
static void Maestro_DrawQuad(RwIm2DVertex* vertices,
                             f32 x,
                             f32 y,
                             f32 width,
                             f32 height,
                             f32 z,
                             f32 recipZ,
                             u32 color,
                             f32 u0,
                             f32 v0,
                             f32 u1,
                             f32 v1)
{
    Maestro_SetVertex(&vertices[0], x, y, z, recipZ, u0, v0, color);
    Maestro_SetVertex(&vertices[1], x + width, y, z, recipZ, u1, v0, color);
    Maestro_SetVertex(&vertices[2], x, y + height, z, recipZ, u0, v1, color);
    Maestro_SetVertex(&vertices[3], x + width, y + height, z, recipZ, u1, v1, color);
    (*D_009600A0)(rwPRIMTYPETRISTRIP, vertices, 4);
}
extern const char D_005D6E48[];
extern const char D_005D6FD0[];
extern const char D_005D6FE0[];
extern const char D_005DAC00[];
extern const char D_005DAC20[];
extern const char D_005DAC40[];
extern const char D_005D7AE0[];
extern const char D_005D6E60[];
extern const char D_005D6E90[];
extern const char D_005D6EC0[];
extern const char D_005D6EE0[];
extern const char D_005D6F00[];
extern const char D_005D6F20[];
extern const char D_005D6F40[];
extern const char D_005D6F60[];
extern const char D_005D6F80[];
extern const char D_005D6F90[];
extern const char D_005D6FB8[];
extern void* D_00833B70[14];
extern KwlnTask* iGpffffb258;
extern void* iGpffffb25c;
extern void* func_00116f80();
extern void* func_001158b0();
extern void func_00115980();
extern void func_00195020(void* task);
extern void func_0018bc10(f32 depth, void* transition, s32 drawMode,
                          s32 positionMode, s32 alphaMode,
                          u64 start, u64 end, s32 param0, s32 tile,
                          s32 startFrame, s32 endFrame);
extern u32 func_0018b700(void* animation);
extern void* func_0018b6d0(s32 size);
extern u32 datGetScenarioMode(void);
extern void func_003c7b90(void);
extern void func_003c72d0(const void* message);
extern void func_003c77a0(void);
extern void* func_00117540(KwlnTask* task);
extern void func_001191c0(KwlnTask* task);
extern void* func_00119aa0(KwlnTask* task);
extern void* func_001193d0(KwlnTask* task);
extern void func_00119e00(KwlnTask* task);
typedef struct MaestroEffectAnim
{
    u8 reserved00[8];
    s32 frame;                       /* +0x08 */
    s32 startFrame;                  /* +0x0c */
    s32 endFrame;                    /* +0x10 */
    f32 depth;                       /* +0x14 */
    u8 reserved18[0x10];
    f32 x;                            /* +0x28 */
    f32 y;                            /* +0x2c */
    u8 reserved30[0x14];
} MaestroEffectAnim;
typedef struct MaestroMarkSpriteWork
{
    s32 state;
    s32 mode;
    s32 frame;
    u32 reserved0c;
    MaestroEffectAnim animation;
    void* blob;
} MaestroMarkSpriteWork;
typedef struct MaestroPerEffectWork
{
    s32 state;                       /* +0x000 */
    s32 effectCount;                 /* +0x004 */
    u32 effectIds[3];                 /* +0x008 */
    KwlnTask* streamTask;            /* +0x014 */
    u32 reserved018;
    KwlnTask* resourceTasks[3];      /* +0x01c */
    void* streams[6];                 /* +0x028 */
    void* loadedResources[6];         /* +0x040 */
    HCdvd* cdvd[9];                  /* +0x058 */
    void* recordPointers[3];         /* +0x07c */
    u8 recordData[3][0x2a];          /* +0x088 */
    u8 reserved104[2];
    s32 completionCounts[3];          /* +0x108 */
    s32 frame;                        /* +0x114 */
    u8 reserved118[0x11c];
    void* archiveCacheRequest;        /* +0x234 */
    u8 reserved238[0x5b4];
    MaestroBlobNode* blob;            /* +0x7ec */
    u8 reserved7f0[0x44];             /* +0x7f0, retail sizeof 0x834 */
} MaestroPerEffectWork;
typedef struct MaestroCampSpriteSetupWork
{
    s32 state;                        /* +0x00 */
    void* resources[14];              /* +0x04 */
    HCdvd* archive;                   /* +0x3c */
    u32 initializeMessages;           /* +0x40 */
    void* ownerPool;                  /* +0x44 */
} MaestroCampSpriteSetupWork;
static void MaestroMarkSpriteDraw(MaestroMarkSpriteWork* work,
                                  s16 pivotX,
                                  s16 pivotY,
                                  f32 angle,
                                  u8 alphaCutoff)
{
    MaestroRenderNode* node;

    node = (MaestroRenderNode*)func_001158b0(NULL, work->blob, 0);
    node->depth = work->animation.depth;
    node->x = work->animation.x;
    node->y = work->animation.y;
    node->pivotX = pivotX;
    node->pivotY = pivotY;
    node->angle = angle;
    node->alphaCutoff = alphaCutoff;
    func_001127d0(node, true);
    func_00115980((int*)node);
}
static inline void MaestroEffectRequestFiles(
    MaestroPerEffectWork* work, char* path)
{
    s32 i;

    work->effectCount = 0;
    for (i = 0; i < 3; i++)
    {
        if (work->effectIds[i] != 0)
        {
            work->effectCount++;
        }
    }
    if (work->effectCount != 0)
    {
        work->effectCount--;
    }

    if (datGetScenarioMode() != 0)
    {
        switch (work->effectCount)
        {
        case 0:
            if (work->effectIds[0] == 9)
                sprintf(path, D_005D6E60, work->effectIds[0]);
            else
                sprintf(path, D_005D6E90, work->effectIds[0]);
            work->cdvd[1] = H_Cdvd_Request(path, HCDVD_FILENORMAL);
            work->cdvd[0] = H_Cdvd_Request(D_005D6EC0, HCDVD_FILEARCHIVE);
        break;
        case 1:
            if (work->effectIds[0] == 9)
                sprintf(path, D_005D6E60, work->effectIds[0]);
            else
                sprintf(path, D_005D6E90, work->effectIds[0]);
            work->cdvd[1] = H_Cdvd_Request(path, HCDVD_FILENORMAL);
            if (work->effectIds[1] == 9)
                sprintf(path, D_005D6E60, work->effectIds[1]);
            else
                sprintf(path, D_005D6E90, work->effectIds[1]);
            work->cdvd[2] = H_Cdvd_Request(path, HCDVD_FILENORMAL);
            work->cdvd[0] = H_Cdvd_Request(D_005D6EE0, HCDVD_FILEARCHIVE);
        break;
        case 2:
            if (work->effectIds[0] == 9)
                sprintf(path, D_005D6E60, work->effectIds[0]);
            else
                sprintf(path, D_005D6E90, work->effectIds[0]);
            work->cdvd[1] = H_Cdvd_Request(path, HCDVD_FILENORMAL);
            if (work->effectIds[1] == 9)
                sprintf(path, D_005D6E60, work->effectIds[1]);
            else
                sprintf(path, D_005D6E90, work->effectIds[1]);
            work->cdvd[2] = H_Cdvd_Request(path, HCDVD_FILENORMAL);
            if (work->effectIds[2] == 9)
                sprintf(path, D_005D6E60, work->effectIds[2]);
            else
                sprintf(path, D_005D6E90, work->effectIds[2]);
            work->cdvd[3] = H_Cdvd_Request(path, HCDVD_FILENORMAL);
            work->cdvd[0] = H_Cdvd_Request(D_005D6F00, HCDVD_FILEARCHIVE);
        break;
        }
    }
    else
    {
        if (work->effectCount == 0)
        {
            sprintf(path, D_005D6E90, work->effectIds[0]);
            work->cdvd[1] = H_Cdvd_Request(path, HCDVD_FILENORMAL);
            work->cdvd[0] = H_Cdvd_Request(D_005D6F20, HCDVD_FILEARCHIVE);
        }
        else if (work->effectCount == 1)
        {
            sprintf(path, D_005D6E90, work->effectIds[0]);
            work->cdvd[1] = H_Cdvd_Request(path, HCDVD_FILENORMAL);
            sprintf(path, D_005D6E90, work->effectIds[1]);
            work->cdvd[2] = H_Cdvd_Request(path, HCDVD_FILENORMAL);
            work->cdvd[0] = H_Cdvd_Request(D_005D6F40, HCDVD_FILEARCHIVE);
        }
        else
        {
            sprintf(path, D_005D6E90, work->effectIds[0]);
            work->cdvd[1] = H_Cdvd_Request(path, HCDVD_FILENORMAL);
            sprintf(path, D_005D6E90, work->effectIds[1]);
            work->cdvd[2] = H_Cdvd_Request(path, HCDVD_FILENORMAL);
            sprintf(path, D_005D6E90, work->effectIds[2]);
            work->cdvd[3] = H_Cdvd_Request(path, HCDVD_FILENORMAL);
            work->cdvd[0] = H_Cdvd_Request(D_005D6F60, HCDVD_FILEARCHIVE);
        }
    }
}
static inline void MaestroEffectStartStreams(
    KwlnTask* task, MaestroPerEffectWork* work, char* path)
{
    s16 dimensions[4];
    u32 size;
    u32 scenario;
    scenario = datGetScenarioMode();
    if (scenario != 0)
    {
        if (work->effectCount == 0)
        {
            if (work->effectIds[0] == 9)
                sprintf(path, D_005D6E60, work->effectIds[0]);
            else
                sprintf(path, D_005D6E90, work->effectIds[0]);
            work->streams[0] = func_0010c1a0(NULL, path,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0xf6);
            work->streams[1] = func_0010c1a0(NULL, D_005D6F90,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0xf7);
            work->archiveCacheRequest = H_Cdvd_ArchiveGetFile(
                work->cdvd[0], 3, &size);
            func_00102720(D_005D6FB8, work->archiveCacheRequest);
            dimensions[0] = 0x28;
            dimensions[1] = 1;
            dimensions[2] = 0x0a;
            dimensions[3] = 5;
            work->streamTask = func_00111380(task, 0x18c0,
                ((u64)(u16)dimensions[0]) |
                ((u64)(u16)dimensions[1] << 16) |
                ((u64)(u16)dimensions[2] << 32) |
                ((u64)(u16)dimensions[3] << 48),
                (u8*)work + 0x124);
        }
        else if (work->effectCount == 1)
        {
            if (work->effectIds[0] == 9)
                sprintf(path, D_005D6E60, work->effectIds[0]);
            else
                sprintf(path, D_005D6E90, work->effectIds[0]);
            work->streams[0] = func_0010c1a0(NULL, path,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x10c);
            work->streams[1] = func_0010c1a0(NULL, D_005D6F90,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x10d);
            if (work->effectIds[1] == 9)
                sprintf(path, D_005D6E60, work->effectIds[1]);
            else
                sprintf(path, D_005D6E90, work->effectIds[1]);
            work->streams[2] = func_0010c1a0(NULL, path,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x113);
            work->streams[3] = func_0010c1a0(NULL, D_005D6F90,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x115);
            work->archiveCacheRequest = H_Cdvd_ArchiveGetFile(
                work->cdvd[0], 4, &size);
            func_00102720(D_005D6FB8, work->archiveCacheRequest);
            dimensions[0] = 0x28;
            dimensions[1] = 1;
            dimensions[2] = 0x0b;
            dimensions[3] = 5;
            work->streamTask = func_00111380(task, 0x18c0,
                ((u64)(u16)dimensions[0]) |
                ((u64)(u16)dimensions[1] << 16) |
                ((u64)(u16)dimensions[2] << 32) |
                ((u64)(u16)dimensions[3] << 48),
                (u8*)work + 0x124);
        }
        else
        {
            if (work->effectIds[0] == 9)
                sprintf(path, D_005D6E60, work->effectIds[0]);
            else
                sprintf(path, D_005D6E90, work->effectIds[0]);
            work->streams[0] = func_0010c1a0(NULL, path,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x12b);
            work->streams[1] = func_0010c1a0(NULL, D_005D6F90,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x12c);
            if (work->effectIds[1] == 9)
                sprintf(path, D_005D6E60, work->effectIds[1]);
            else
                sprintf(path, D_005D6E90, work->effectIds[1]);
            work->streams[2] = func_0010c1a0(NULL, path,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x132);
            work->streams[3] = func_0010c1a0(NULL, D_005D6F90,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x133);
            if (work->effectIds[2] == 9)
                sprintf(path, D_005D6E60, work->effectIds[2]);
            else
                sprintf(path, D_005D6E90, work->effectIds[2]);
            work->streams[4] = func_0010c1a0(NULL, path,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x139);
            work->streams[5] = func_0010c1a0(NULL, D_005D6F90,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x13a);
            work->archiveCacheRequest = H_Cdvd_ArchiveGetFile(
                work->cdvd[0], 5, &size);
            func_00102720(D_005D6FB8, work->archiveCacheRequest);
            dimensions[0] = 0x28;
            dimensions[1] = 2;
            dimensions[2] = 0x0a;
            dimensions[3] = 5;
            work->streamTask = func_00111380(task, 0x18c0,
                ((u64)(u16)dimensions[0]) |
                ((u64)(u16)dimensions[1] << 16) |
                ((u64)(u16)dimensions[2] << 32) |
                ((u64)(u16)dimensions[3] << 48),
                (u8*)work + 0x124);
        }
    }
    else
    {
        if (work->effectCount == 0)
        {
            sprintf(path, D_005D6E90, work->effectIds[0]);
            work->streams[0] = func_0010c1a0(NULL, path,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x14d);
            work->streams[1] = func_0010c1a0(NULL, D_005D6F90,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x14e);
            work->archiveCacheRequest = H_Cdvd_ArchiveGetFile(
                work->cdvd[0], 3, &size);
            func_00102720(D_005D6FB8, work->archiveCacheRequest);
            dimensions[0] = 0x28;
            dimensions[1] = 1;
            dimensions[2] = 0x0a;
            dimensions[3] = 0;
            work->streamTask = func_00111380(task, 0x18c0,
                ((u64)(u16)dimensions[0]) |
                ((u64)(u16)dimensions[1] << 16) |
                ((u64)(u16)dimensions[2] << 32) |
                ((u64)(u16)dimensions[3] << 48),
                (u8*)work + 0x124);
        }
        else if (work->effectCount == 1)
        {
            sprintf(path, D_005D6E90, work->effectIds[0]);
            work->streams[0] = func_0010c1a0(NULL, path,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x15e);
            work->streams[1] = func_0010c1a0(NULL, D_005D6F90,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x15f);
            sprintf(path, D_005D6E90, work->effectIds[1]);
            work->streams[2] = func_0010c1a0(NULL, path,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x161);
            work->streams[3] = func_0010c1a0(NULL, D_005D6F90,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x162);
            work->archiveCacheRequest = H_Cdvd_ArchiveGetFile(
                work->cdvd[0], 4, &size);
            func_00102720(D_005D6FB8, work->archiveCacheRequest);
            dimensions[0] = 0x28;
            dimensions[1] = 1;
            dimensions[2] = 0x0a;
            dimensions[3] = 0;
            work->streamTask = func_00111380(task, 0x18c0,
                ((u64)(u16)dimensions[0]) |
                ((u64)(u16)dimensions[1] << 16) |
                ((u64)(u16)dimensions[2] << 32) |
                ((u64)(u16)dimensions[3] << 48),
                (u8*)work + 0x124);
        }
        else
        {
            sprintf(path, D_005D6E90, work->effectIds[0]);
            work->streams[0] = func_0010c1a0(NULL, path,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x172);
            work->streams[1] = func_0010c1a0(NULL, D_005D6F90,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x174);
            sprintf(path, D_005D6E90, work->effectIds[1]);
            work->streams[2] = func_0010c1a0(NULL, path,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x176);
            work->streams[3] = func_0010c1a0(NULL, D_005D6F90,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x178);
            sprintf(path, D_005D6E90, work->effectIds[2]);
            work->streams[4] = func_0010c1a0(NULL, path,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x17a);
            work->streams[5] = func_0010c1a0(NULL, D_005D6F90,
                                              0, 0, 0, 0, 0, 0,
                                              D_005D6FB8, 0x17c);
            work->archiveCacheRequest = H_Cdvd_ArchiveGetFile(
                work->cdvd[0], 5, &size);
            func_00102720(D_005D6FB8, work->archiveCacheRequest);
            dimensions[0] = 0x28;
            dimensions[1] = 2;
            dimensions[2] = 0x0a;
            dimensions[3] = 0;
            work->streamTask = func_00111380(task, 0x18c0,
                ((u64)(u16)dimensions[0]) |
                ((u64)(u16)dimensions[1] << 16) |
                ((u64)(u16)dimensions[2] << 32) |
                ((u64)(u16)dimensions[3] << 48),
                (u8*)work + 0x124);
        }
    }

}
#include "Kernel/Kwln/kwln.h"
#include "Script/scrTraceCode.h"
#include "h_dbprt.h"
#include "h_fade.h"
#include "h_sfdply.h"
#include "rw/rwplcore.h"
#pragma alias rwGlobals_abs rwGlobals
extern u8 rwGlobals_abs[];
extern u8 D_0077e4e0[];
extern u8 D_00803640[];
extern f32 D_00960088_abs_y2[];
extern void (*D_00960094)(u32 state, void* value);
extern void* (*D_00960178)(u32 size, u32 flags);
extern void (*D_0096017c)(void* memory);
#pragma alias D_00960178_abs D_00960178
extern void* (*D_00960178_abs[])(u32 size, u32 flags);
#pragma alias D_0096017c_abs D_0096017c
extern void (*D_0096017c_abs[])(void* memory);
#pragma alias DAT_007e094e_abs DAT_007e094e
extern u16 DAT_007e094e_abs[];
#pragma alias D_0077e4f0_abs D_0077e4f0
extern void* D_0077e4f0_abs[];
extern s16 D_005D4B70[];
extern u8 D_005D4B74[];
extern u8 D_005D4B7C[];
extern u8 D_005D4B80[];
extern u8 D_005D4B84[];
extern u8 D_005D4B8C[];
extern u8 D_005D4B90[];
extern u8 D_005D4B92[];
extern u8 D_005D4B94[];
extern const char D_005D5250[];
extern const char D_005D5260[];
extern const char D_005D5280[];
extern void* uGpffffb220;
extern s16 uGpffffb228;
extern s16 uGpffffb218;
extern s32 uGpffffb230;
extern s32 uGpffffb22c;
extern u32 _mips_gp0_value;
extern char uGpffff8840[];
#pragma alias gp0xffff8840 uGpffff8840
extern char gp0xffff8840;
extern void H_Pad_IgnoreRumbleCallback(s32 a, s32 b, s32 c, s32 d);
extern void func_004b6500(void);
extern void func_004aa5c0(void);
extern void func_001cd8e0(void);
extern void adminiForcePassedCheck(void);
extern void func_003b5ab0(void);
extern s32 func_004c2120(void* value);
extern void K_Assert(const char* message, s32 line);
extern void func_004b7690(void* value);
extern void func_004faec0(void* stream, s32 a, s32 b);
extern void func_004f1780(void* target, s32 mode);
extern void func_00191d70(void* target, void* pixels, s32 width, s32 height);
extern void* func_004fa8f0(s32 mode);
extern int printf_y2(const char* format, ...);
extern void* memcpy_y2(void* destination, const void* source, u32 size);
#define HSFD_TABLE(base, index) ((u8*)(base) + ((index) * 0x28))
extern void func_004aa390(f32 nearPlane);
extern void func_004aa3d0_y2(f32 farPlane);
extern void func_004a9f20(f32 x, f32 y, f32 z, f32 w);
extern void func_004aa410_y2(RwCamera* camera);
extern void* func_004a5470(void);
extern void func_004a5dd0(void* image, const s8* c0, const s8* c1,
                          const s8* c2, const s8* c3);
extern void func_004cb270(void* value);
extern void* func_004cc5c0(const char* path);
extern void* func_004d1260(const char* path, s32 mode);
extern void* func_00490050(const char* path);
extern void* func_004b7760(const char* message);
extern void* func_004920a0(const char* path);
extern void* func_004b69b0(const char* path);
extern void* func_00464540(const char* path);
extern void* func_0048d960(const char* path);
extern void* func_004b79d0(u32 size, const void* source);
extern void* func_004c8680(const char* path);
extern void* func_004b45b0_y2(s32 mode, const void* source);
extern void func_00100ec0(void* request);
extern void func_00503080(void);
extern void* func_004ac570(void);
extern void func_004ac5f0(void* image);
extern void func_004ab1b0(void* image);
extern void func_004a62e0(void* image, void* data);
#pragma alias func_004a6200_y2 func_004a6200
extern void func_004a6200_y2(void* image, s32* out0, f32* out1,
                              f32* out2, s32* out3);
extern void func_004ab6a0(void* image);
extern void func_004ac710(void* image);
extern void func_004ace70(void* image, void* quad);
extern void func_004a6600(void* image, void* quad);
extern void func_004aaa60(void);
extern void func_004a9bf0_y2(void);
extern void func_004aae00(f32 x, f32 y);
extern void func_004aad50(void);
extern void func_004ab200(void* image, f32 x, f32 y);
extern void func_004ab2c0(void* image, f32 x, f32 y);
extern void func_004ab410(void* image, f32 x0, f32 y0, f32 x1, f32 y1,
                          f32 x2, f32 y2);
extern void func_00110650(void* view, s32 from, s32 to);
extern s8 fGpffff7788[];
extern void* func_0050B690(s32 arg1, u32 size, s32 arg3);
extern void func_0050B710(void* ptr);
extern void func_00521250(void* dst, const void* src, u32 size);
extern void func_0051DBC0(s32 a0, void* a1, void* a2, u32 a3);
extern s32 func_0051DC70(s32 a0, s32 a1, ...);
extern s32 func_0051DDF0(s32 a0, s32 a1, ...);
extern u8 D_00823650[];
#define HSFD_ENTRY_COUNT 256
#define HSFD_QUEUE_COUNT 1
#define HSFD_DECODE_SLOTS 6
#define HSFD_STREAM_HINT rwMEMHINTDUR_GLOBAL
typedef struct HSfdQueueSlot HSfdQueueSlot;
typedef struct HSfdAsyncEntry HSfdAsyncEntry;
typedef struct HSfdImage
{
    u32 type;
    u32 width;
    u32 height;
    u32 depth;
    u32 stride;
    u8* pixels;
    u8* palette;
} HSfdImage;
typedef struct HSfdTexture
{
    HSfdImage image;
    u8* palette;
    u32 paletteSize;
} HSfdTexture;
typedef struct HSfdDecodeSlot
{
    s16 state;
    s16 padding02;
    HCdvd* request;
    s16 fileIndex;
    s16 index;
    s32 queueHandle;       // 0x0C
    s32 outputHandle;      // 0x10
    s32 decodeHandle;      // 0x14
    s32 status;            // 0x18
    void* input;           // 0x1C
    u32 inputSize;         // 0x20
    void* intermediate;    // 0x24
    u32 intermediateSize;  // 0x28
    void* output;          // 0x2C
    u32 outputSize;        // 0x30
    void* resource;        // 0x34
    void* aux;             // 0x38
    void* sourceData;      // 0x3C
    void* completion;      // 0x40
} HSfdDecodeSlot;
struct HSfdQueueSlot
{
    s16 state;
    s16 padding02;
    HSfdAsyncEntry* entry;
};
struct HSfdAsyncEntry
{
    HSfdAsyncEntry* next;
    HSfdQueueSlot* queue;
    void* source;
    void* resultC;
    void* resultD;
    void* resultE;
    void* resultF;
    void* resultG;
    u8 reserved20[4];
    char name[128];
    char path[128];
    char cacheName[128];
    s32 state;
    s32 requestFlags;
    s32 kind;
    HCdvd* request;
    void* result0;
    void* result1;
    s32 byteCount;
    void* buffer;
    void* result2;
    void* result3;
    void* result4;
    s16 age;
    u16 padding1D2;
    void* result5;
    u32 padding1D8;
};
typedef struct HSfdPoolEntry
{
    s32 state;
    u8 entry[0x1d8];
} HSfdPoolEntry;
typedef struct HSfdQueueEntry
{
    HSfdAsyncEntry* next;
    HSfdQueueSlot* queue;
    u8 reserved08[0x1d0];
} HSfdQueueEntry;
typedef struct HSfdRenderFrame
{
    s8 type;
    s8 command;
    u16 colorR;
    u16 colorG;
    u16 colorB;
    u16 colorA;
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
} HSfdRenderFrame;
typedef struct HSfdRenderView
{
    s32 type;
    void* commandSource;
    HSfdRenderFrame* frames;
    u8 reserved0C[0x9C];
    void* texture;
    u8 reservedAC[0x13C];
    s32 frameIndex;
    u8 reserved1EC[0x1EC];
    s32 currentCommand;
    u8 reserved28C[0x14C];
    float originX;
    float originY;
    u8 reserved3E0[0x100];
    s32 elementCount;
    s32 skyMode;
} HSfdRenderView;
static s32 sSfdFrameIndex;
#pragma alias sSfdFrameIndex_abs sSfdFrameIndex
extern u8 sSfdFrameIndex_abs[];
static KwlnTask* sSfdPlayTask;
static HSfdQueueEntry sSfdQueueEntries[HSFD_QUEUE_COUNT];
static s32 sSfdThreadIds[HSFD_QUEUE_COUNT];
static HSfdQueueSlot sSfdQueue[HSFD_QUEUE_COUNT];
static HSfdAsyncEntry sSfdEntries[HSFD_ENTRY_COUNT];
static HSfdDecodeSlot sSfdDecodeSlots[HSFD_DECODE_SLOTS];
typedef struct HSfdCueEntry
{
    s32 active;
    s16 bank;
    s16 reserved6;
    s32 param;
} HSfdCueEntry;
static HSfdCueEntry sSfdCueTable[8];
#pragma alias sSfdDecodeSlots_abs sSfdDecodeSlots
extern HSfdDecodeSlot sSfdDecodeSlots_abs[];
#pragma alias sSfdCueTable_abs sSfdCueTable
extern HSfdCueEntry sSfdCueTable_abs[];
static u8* sSfdScratch;
static u8* sSfdDecodeBuffer;
static u8* sSfdFrameBuffers[4];
static const char* const sSfdDecodePaths[] =
{
    "sound/BSE.hd", "sound/BSE.bd", "sound/BSE.sq",
    "sound/spu/comse.hd", "sound/spu/comse.bd", "sound/spu/comse.sq",
    "sound/spu/bse.hd", "sound/spu/bse.bd", "sound/spu/bse.sq"
};
typedef struct HSfdDmaDescriptor
{
    const void* src;
    void* dst;
    u32 size;
    u32 mode;
} HSfdDmaDescriptor;
static HSfdDmaDescriptor sSfdDmaDescriptor;
extern void func_0051e028(s32 outputHandle, s32 channel, s32 count, s32 value);
extern s32 func_0051df58(s32 outputHandle, s32 channel, s32 count, s32 value, ...);
#pragma alias func_0051e028_t func_0051e028
extern void func_0051e028_t(s32 outputHandle, s32 channel, s32 count, s32 value);
#pragma alias func_0051df58_t func_0051df58
extern s32 func_0051df58_t(s32 outputHandle, s32 channel, s32 count, s32 value, ...);
extern u32 FUN_00512868(void);
extern u32 FUN_0051d5b0(u32 base, u32 stride, u32 count);
extern u64 FUN_0051da48(u32 value);
extern u64 FUN_0051da50(u64 size);
extern void FUN_0051db00(u32 a0, u32 a1, u32 a2, ...);
extern u32 FUN_0051d6f8(s32 size);
extern void FUN_0051deb0(u32 channel, void* handle);
extern void FUN_0051dd48(u32 channel, void* handle);
extern s32 FUN_0050d3f0(void);
extern s32 func_00502f60(void* threadParam);
extern s32 func_005042a0(s32 threadId, void* arg);
extern s32 FUN_0050d3a0(void);
extern void func_005030f0(s32 threadId);
static s32 sSfdResumePending;
static s32 sSfdResumeThreadId;
extern void datSetFlag(s32 bit, u8 enabled);
extern void FUN_004aa550(void* param1);
extern void FUN_004b6350(void);
extern void FUN_004b7630(void* param1);
typedef struct EeThreadStatus
{
    s32 status;
    u8 reserved4[0x2C];
} EeThreadStatus;
extern void func_00503060(s32 threadId, EeThreadStatus* status);
extern void func_005030d0(s32 threadId);
extern void* func_0057c680(void* descriptor);
extern void* func_0057d5d8(void* descriptor);
extern void func_0057e378(void* decoder, s32 mode);
extern s32 func_0057e530(void* decoder, s32* status);
extern void func_0057ee50(void* decoder);
extern s32 func_00581840(void* decoder);
extern void func_00584338(void* streamAux);
extern void func_0057db58(void* decoder);
extern void* func_004ce0f0(s32 width, s32 height, s32 format, s32 flags);
extern void* func_004cdf30(void* raster, s32 palette);
extern void* func_004ce200(void* raster, void* mipData, s32 level);
extern void* func_004cde00(void* raster);
extern void FUN_004d5e90(void);
extern void func_004cde40(void* raster);
extern void func_004cde90_y2(void* renderTarget);
extern void* func_004c58a0(s32 source, s32 mode, void* stream);
extern s32 func_004c5250(void* stream, void* dst, u32 bytes);
extern void func_004c5780_y2(void* stream, s32 mode);
extern HSfdImage* func_004cbe00(u32 width, u32 height, u32 bits);
extern void func_0010c7d0(HSfdQueueSlot* slot);
extern void func_004cbf20(HSfdImage* image);
extern void FlushCache(s32 mode);
extern void func_0010d950(s16 index);

static void Maestro_SetPrimitiveStates(u32 skyRasterState, u32 skyTextureState)
{
    (*D_00960090)(6, 1);
    (*D_00960090)(7, 2);
    (*D_00960090)(8, 1);
    (*D_00960090)(9, 2);
    (*D_00960090)(12, 1);
    (*D_00960090)(11, 6);
    (*D_00960090)(10, 5);
    (*D_00960090)(2, 4);
    RpSkyRenderStateSet(2, (void*)skyRasterState);
    RpSkyRenderStateSet(3, (void*)skyTextureState);
}
static f32 Maestro_NearReciprocal(void)
{
    RwCamera* camera = kwlnGetMainCamera();
    return 1.0f / camera->nearPlane;
}
static inline void MaestroEffectLoadRecords(KwlnTask* task, MaestroPerEffectWork* work)
{
    u8* record;
    u32 size;
    s32 i;
    s32 j;

    for (i = 0; i <= work->effectCount; i++)
    {
        record = (u8*)H_Cdvd_ArchiveGetFile(work->cdvd[0], i + 1, &size);
        memcpy(work->recordData[i], record, 0x2a);
        record = (u8*)H_Cdvd_ArchiveGetFile(work->cdvd[0], i + 1, &size) + 0x2a;
        work->recordPointers[i] = record;
        work->completionCounts[i] = 0;
        for (j = 0; j < 1000; j++)
        {
            if (record[j * 0x12 + 1] == (u8)-2)
            {
                work->completionCounts[i]--;
                break;
            }
            if (record[j * 0x12 + 1] == (u8)-1)
            {
                work->completionCounts[i]++;
            }
        }
        work->resourceTasks[i] = func_001103e0(
            task, 0x18c0, (u32)(uintptr_t)record,
            *(s16*)(work->recordData[i] + 8));
        for (j = 0; j < 3; j++)
        {
            s16 slot = (s16)(j == 2 ? 1 : (j == 0 ? 3 : 4));
            func_00110620(work->resourceTasks[i], slot,
                          *(s16*)(work->recordData[i] + 0x0a + j * 2),
                          *(s16*)(work->recordData[i] + 0x12 + j * 2),
                          *(s16*)(work->recordData[i] + 0x1a + j * 2));
        }
    }
    work->blob = (MaestroBlobNode*)func_00112420(
        H_Cdvd_ArchiveGetFile(work->cdvd[0], 0, &size));
    work->state = 2;
}
static inline void MaestroEffectSetReady(MaestroPerEffectWork* work)
{

    switch (work->effectCount)
    {
    case 0:
        func_001104d0(work->resourceTasks[0]);
        break;
    case 1:
        func_001104d0(work->resourceTasks[0]);
        func_001104d0(work->resourceTasks[1]);
        break;
    case 2:
        func_001104d0(work->resourceTasks[0]);
        func_001104d0(work->resourceTasks[1]);
        func_001104d0(work->resourceTasks[2]);
        break;
    }
    func_00111530(work->streamTask);
    work->state = 4;
}
static void H_SfdPlay_ResetTaskResources(HSfd* work)
{
    if (work->decoder != NULL)
    {
        if (work->streamAux != NULL)
        {
            func_00584338(work->streamAux);
            work->streamAux = NULL;
        }

        func_0057db58(work->decoder);
        work->decoder = NULL;
    }

    if (work->compressedFrameBuffer != NULL)
    {
        RwFree(work->compressedFrameBuffer);
        work->compressedFrameBuffer = NULL;
    }

    if (work->displayBuffer != NULL)
    {
        RwFree(work->displayBuffer);
        work->displayBuffer = NULL;
    }

    if (work->renderTarget != NULL)
    {
        func_004cde90_y2(work->renderTarget);
        work->renderTarget = NULL;
    }

    work->streamDescriptor = NULL;
    work->decodeResult = 0;
    work->frameWidth = 0;
    work->frameHeight = 0;
}
static void H_SfdPlay_BeginStream(HSfd* work)
{
    u32 descriptor[12];
    s32 renderHeight;

    memset(descriptor, 0, sizeof(descriptor));
    descriptor[0] = 1;
    descriptor[1] = 0x4C4B40;
    descriptor[5] = 0x11;
    descriptor[8] = 2;
    descriptor[9] = 1;

    work->decoder = func_0057c680(descriptor);
    if (work->decoder == NULL)
    {
        work->state = HSFD_STATE_CLEANUP;
        return;
    }

    work->compressedFrameBuffer = RwCalloc(1, 0x118000, HSFD_STREAM_HINT);
    work->displayBuffer = RwCalloc(1, 0x118000, HSFD_STREAM_HINT);
    if ((work->compressedFrameBuffer == NULL) || (work->displayBuffer == NULL))
    {
        work->state = HSFD_STATE_CLEANUP;
        return;
    }

    work->streamDescriptor = func_0057d5d8(descriptor);
    if (work->streamDescriptor == NULL)
    {
        work->state = HSFD_STATE_CLEANUP;
        return;
    }

    func_0057e378(work->streamDescriptor, 0);
    work->decoder = work->streamDescriptor;
    work->frameWidth = 640;
    renderHeight = 448;
    if ((work->id == 5) || (work->id == 6))
    {
        renderHeight = 368;
    }
    work->frameHeight = renderHeight;
    work->renderTarget = func_004ce0f0(work->frameWidth, renderHeight, 0x20, 0x584);
    if (work->renderTarget == NULL)
    {
        work->state = HSFD_STATE_CLEANUP;
        return;
    }

    work->state = HSFD_STATE_PLAYING;
}



// FUN_0010CCE0
s32 func_0010cce0(void* dst, const void* src, s32 size)
{
    s32 dmaId;
    s32 status;

    if (size <= 0)
    {
        return 0;
    }

    sSfdDmaDescriptor.src = src;
    sSfdDmaDescriptor.dst = dst;
    sSfdDmaDescriptor.size = size;
    sSfdDmaDescriptor.mode = 0;

    FlushCache(0);
    dmaId = sceSifSetDma(&sSfdDmaDescriptor, 1);
    if (dmaId == 0)
    {
        K_Assert("h_sndcom.c", 0x107);
    }

    do
    {
        status = sceSifDmaStat(dmaId);
    } while (status >= 0);

    do
    {
        status = sceSifDmaStat(dmaId);
    } while (status > 0 || status == 0);

    return size;
}

#pragma opt_loop_invariants on
/* W419 scalar-size probe was unchanged at nd1332, object 2032/window2336. */
// FUN_0010CDD0
#ifndef PC_BUILD
asm void func_0010cdd0(void)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0000a02d
  .word 0x10000226
  .word 0x00000000
  .word 0x00041900
  .word 0x00641821
  .word 0x00032080
  .word 0x3c030083
  .word 0x24633710
  .word 0x00648021
  .word 0x86040000
  .word 0x2c810009
  .word 0x10200219
  .word 0x00000000
  .word 0x3c05007b
  .word 0x24a552e0
  .word 0x00042080
  .word 0x00852021
  .word 0x8c840000
  .word 0x00800008
  .word 0x00000000
  .word 0x24030001
  .word 0xa6030000
  .word 0x1000020e
  .word 0x00000000
  .word 0x0014243c
  .word 0x0004243f
  .word 0x00041100
  .word 0x00441021
  .word 0x00021080
  .word 0x00628021
  .word 0x86030008
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x3c02005d
  .word 0x244253a0
  .word 0x00431021
  .word 0x8c440000
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae020004
  .word 0x24030003
  .word 0xa6030000
  .word 0x100001f8
  .word 0x00000000
  .word 0x8e040004
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x104001f3
  .word 0x00000000
  .word 0x86030008
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x3c02005d
  .word 0x244253a0
  .word 0x00431021
  .word 0x8c440000
  .word 0x27a500bc
  .word 0x0c040870
  .word 0x00000000
  .word 0x0040802d
  .word 0x8fa500bc
  .word 0x0000202d
  .word 0x0000302d
  .word 0x0c142da4
  .word 0x00000000
  .word 0x0040882d
  .word 0x16200006
  .word 0x00000000
  .word 0x3c04005d
  .word 0x248453c8
  .word 0x24050144
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8fa600bc
  .word 0x3c040082
  .word 0x24843650
  .word 0x0200282d
  .word 0x0c148494
  .word 0x00000000
  .word 0x0220202d
  .word 0x3c050082
  .word 0x24a53650
  .word 0x8fa600bc
  .word 0x0c043338
  .word 0x00000000
  .word 0x00141c3c
  .word 0x00031c3f
  .word 0x00031100
  .word 0x00431021
  .word 0x00021880
  .word 0x3c020083
  .word 0x24423710
  .word 0x00438021
  .word 0x26120004
  .word 0x8e040004
  .word 0x0c0403b0
  .word 0x00000000
  .word 0xae11001c
  .word 0x8fa300bc
  .word 0xae030020
  .word 0xae400000
  .word 0x24030004
  .word 0xa6030000
  .word 0x100001ba
  .word 0x00000000
  .word 0x0014243c
  .word 0x0004243f
  .word 0x00041100
  .word 0x00441021
  .word 0x00021080
  .word 0x00628021
  .word 0x86030008
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x3c02005d
  .word 0x244253a0
  .word 0x00431021
  .word 0x8c440004
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae020004
  .word 0x24030005
  .word 0xa6030000
  .word 0x100001a4
  .word 0x00000000
  .word 0x8e040004
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x1040019f
  .word 0x00000000
  .word 0x86030008
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x3c02005d
  .word 0x244253a0
  .word 0x00431021
  .word 0x8c440004
  .word 0x27a500bc
  .word 0x0c040870
  .word 0x00000000
  .word 0x0040802d
  .word 0x0000202d
  .word 0x24051000
  .word 0x0000302d
  .word 0x0c142da4
  .word 0x00000000
  .word 0x0040882d
  .word 0x16200006
  .word 0x00000000
  .word 0x3c04005d
  .word 0x248453c8
  .word 0x24050177
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00141c3c
  .word 0x00031c3f
  .word 0x00031100
  .word 0x00431021
  .word 0x00021880
  .word 0x3c020083
  .word 0x24423710
  .word 0x00431021
  .word 0x8c530024
  .word 0x8fb200bc
  .word 0xac520028
  .word 0x2a411001
  .word 0x14200006
  .word 0x00000000
  .word 0x24021000
  .word 0xafa200bc
  .word 0x2652f000
  .word 0x10000003
  .word 0x00000000
  .word 0xafb200bc
  .word 0x0000902d
  .word 0x0220202d
  .word 0x0200282d
  .word 0x8fa600bc
  .word 0x0c043338
  .word 0x00000000
  .word 0x24040001
  .word 0x0220282d
  .word 0x0260302d
  .word 0x8fa700bc
  .word 0x0c1476f0
  .word 0x00000000
  .word 0x8fa200bc
  .word 0x02028021
  .word 0x02629821
  .word 0x1640ffe7
  .word 0x00000000
  .word 0x00141c3c
  .word 0x00031c3f
  .word 0x00031100
  .word 0x00431021
  .word 0x00021880
  .word 0x3c020083
  .word 0x24423710
  .word 0x00439021
  .word 0x26500004
  .word 0x8e440004
  .word 0x0c0403b0
  .word 0x00000000
  .word 0xae000000
  .word 0x0220202d
  .word 0x0c142dc4
  .word 0x00000000
  .word 0x24030006
  .word 0xa6430000
  .word 0x1000014d
  .word 0x00000000
  .word 0x0014243c
  .word 0x0004243f
  .word 0x00041100
  .word 0x00441021
  .word 0x00021080
  .word 0x00628021
  .word 0x86030008
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x3c02005d
  .word 0x244253a0
  .word 0x00431021
  .word 0x8c440008
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae020004
  .word 0x24030007
  .word 0xa6030000
  .word 0x10000137
  .word 0x00000000
  .word 0x8e040004
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x10400132
  .word 0x00000000
  .word 0x86030008
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x3c02005d
  .word 0x244253a0
  .word 0x00431021
  .word 0x8c440008
  .word 0x27a500bc
  .word 0x0c040870
  .word 0x00000000
  .word 0x0040802d
  .word 0x8fa500bc
  .word 0x0000202d
  .word 0x0000302d
  .word 0x0c142da4
  .word 0x00000000
  .word 0x0040902d
  .word 0x16400006
  .word 0x00000000
  .word 0x3c04005d
  .word 0x248453c8
  .word 0x240501a2
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0240202d
  .word 0x0200282d
  .word 0x8fa600bc
  .word 0x0c043338
  .word 0x00000000
  .word 0x00141c3c
  .word 0x00031c3f
  .word 0x00031100
  .word 0x00431021
  .word 0x00021880
  .word 0x3c020083
  .word 0x24423710
  .word 0x00438021
  .word 0x26110004
  .word 0x8e040004
  .word 0x0c0403b0
  .word 0x00000000
  .word 0x2613002c
  .word 0xae12002c
  .word 0x26120030
  .word 0x8fa200bc
  .word 0xae020030
  .word 0xae200000
  .word 0x2611000c
  .word 0x24040003
  .word 0x2405ffff
  .word 0x8e06001c
  .word 0x8e070020
  .word 0x8e080024
  .word 0x8e090028
  .word 0x0c14771c
  .word 0x00000000
  .word 0xae220000
  .word 0x04410006
  .word 0x00000000
  .word 0x3c04005d
  .word 0x248453c8
  .word 0x240501ae
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00141c3c
  .word 0x00031c3f
  .word 0x00031100
  .word 0x00431021
  .word 0x00021880
  .word 0x3c020083
  .word 0x24423710
  .word 0x00431021
  .word 0x24500010
  .word 0x24040005
  .word 0x2405ffff
  .word 0x8e260000
  .word 0x0000382d
  .word 0x0c14771c
  .word 0x00000000
  .word 0xae020000
  .word 0x04410006
  .word 0x00000000
  .word 0x3c04005d
  .word 0x248453c8
  .word 0x240501b3
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00141c3c
  .word 0x00031c3f
  .word 0x00031100
  .word 0x00431021
  .word 0x00021880
  .word 0x3c020083
  .word 0x24423710
  .word 0x00431021
  .word 0x24510014
  .word 0x0000202d
  .word 0x2405ffff
  .word 0x8e660000
  .word 0x8e470000
  .word 0x0c14777c
  .word 0x00000000
  .word 0xae220000
  .word 0x04410006
  .word 0x00000000
  .word 0x3c04005d
  .word 0x248453c8
  .word 0x240501b7
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00141c3c
  .word 0x00031c3f
  .word 0x00031100
  .word 0x00431021
  .word 0x00021880
  .word 0x3c020083
  .word 0x24423710
  .word 0x00439021
  .word 0x24040005
  .word 0x8e050000
  .word 0x8e260000
  .word 0x0c14777c
  .word 0x00000000
  .word 0xae420040
  .word 0x24030001
  .word 0xae430018
  .word 0xa6430000
  .word 0x100000b0
  .word 0x00000000
  .word 0x0014243c
  .word 0x0004243f
  .word 0x00041100
  .word 0x00441021
  .word 0x00021080
  .word 0x00621021
  .word 0x8c520034
  .word 0x24550020
  .word 0x8c450020
  .word 0xafa500bc
  .word 0x0000202d
  .word 0x0000302d
  .word 0x0c142da4
  .word 0x00000000
  .word 0x0040882d
  .word 0x16200006
  .word 0x00000000
  .word 0x3c04005d
  .word 0x248453c8
  .word 0x240501c8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0220202d
  .word 0x0240282d
  .word 0x8fa600bc
  .word 0x0c043338
  .word 0x00000000
  .word 0x00141c3c
  .word 0x00031c3f
  .word 0x00031100
  .word 0x00431021
  .word 0x00021880
  .word 0x3c020083
  .word 0x24423710
  .word 0x00431821
  .word 0x2477001c
  .word 0xac71001c
  .word 0x8fa200bc
  .word 0xaea20000
  .word 0x8c710038
  .word 0x247e0028
  .word 0x8c620028
  .word 0xafa200bc
  .word 0x0000202d
  .word 0x3c050001
  .word 0x0000302d
  .word 0x0c142da4
  .word 0x00000000
  .word 0x0040902d
  .word 0x16400006
  .word 0x00000000
  .word 0x3c04005d
  .word 0x248453c8
  .word 0x240501df
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x26020024
  .word 0x7fa200a0
  .word 0x8e100024
  .word 0x8fb300bc
  .word 0x3c010001
  .word 0x34210001
  .word 0x0261082a
  .word 0x14200007
  .word 0x00000000
  .word 0x3c020001
  .word 0xafa200bc
  .word 0x26628000
  .word 0x24538000
  .word 0x1000000b
  .word 0x00000000
  .word 0xafb300bc
  .word 0x2663007f
  .word 0x000311c3
  .word 0x04610003
  .word 0x00000000
  .word 0x2462007f
  .word 0x000211c3
  .word 0x000211c0
  .word 0xafa200bc
  .word 0x0000982d
  .word 0x0240202d
  .word 0x0220282d
  .word 0x8fa600bc
  .word 0x0c043338
  .word 0x00000000
  .word 0x24040001
  .word 0x0240282d
  .word 0x0200302d
  .word 0x8fa700bc
  .word 0x0c1476f0
  .word 0x00000000
  .word 0x8fa200bc
  .word 0x02228821
  .word 0x02028021
  .word 0x1660ffdc
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c142dc4
  .word 0x00000000
  .word 0x00141c3c
  .word 0x00031c3f
  .word 0x00031100
  .word 0x00431021
  .word 0x00021880
  .word 0x3c020083
  .word 0x24423710
  .word 0x00431021
  .word 0x8c50003c
  .word 0x24510030
  .word 0x8c450030
  .word 0xafa500bc
  .word 0x0000202d
  .word 0x0000302d
  .word 0x0c142da4
  .word 0x00000000
  .word 0x0040902d
  .word 0x16400006
  .word 0x00000000
  .word 0x3c04005d
  .word 0x248453c8
  .word 0x240501fb
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0240202d
  .word 0x0200282d
  .word 0x8fa600bc
  .word 0x0c043338
  .word 0x00000000
  .word 0x00141c3c
  .word 0x00031c3f
  .word 0x00031100
  .word 0x00431021
  .word 0x00021880
  .word 0x3c020083
  .word 0x24423710
  .word 0x00438021
  .word 0x2616002c
  .word 0xae12002c
  .word 0x2612000c
  .word 0x24040003
  .word 0x2405ffff
  .word 0x8ee60000
  .word 0x8ea70000
  .word 0x7ba200a0
  .word 0x8c480000
  .word 0x8fc90000
  .word 0x0c14771c
  .word 0x00000000
  .word 0xae420000
  .word 0x26130010
  .word 0x24040005
  .word 0x2405ffff
  .word 0x0040302d
  .word 0x0000382d
  .word 0x0c14771c
  .word 0x00000000
  .word 0xae620000
  .word 0x26120014
  .word 0x0000202d
  .word 0x2405ffff
  .word 0x8ec60000
  .word 0x8e270000
  .word 0x0c14777c
  .word 0x00000000
  .word 0xae420000
  .word 0x24040005
  .word 0x8e650000
  .word 0x0040302d
  .word 0x0c14777c
  .word 0x00000000
  .word 0xae020040
  .word 0x24030001
  .word 0xae030018
  .word 0xa6030000
  .word 0x26830001
  .word 0x0003a43c
  .word 0x0014a43f
  .word 0x0014243c
  .word 0x0004243f
  .word 0x28830006
  .word 0x1460fdd7
  .word 0x00000000
  .word 0xdfbf0090
  .word 0x7bbe0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_loop_invariants off
// FUN_0010D6F0
void func_0010d6f0(s16 index, s16 fileIndex)
{
    if (sSfdDecodeSlots[index].state == 1)
    {
        if (sSfdDecodeSlots[index].status != 0)
        {
            func_0010d950(index);
        }
        sSfdDecodeSlots[index].fileIndex = fileIndex;
        sSfdDecodeSlots[index].state = 2;
    }
}

/* Retail returns early when state != 1, before the field assignments. */
// FUN_0010D7B0
void func_0010d7b0(s16 index, s16 fileIndex, void* data0, u32 data0Size,
                   void* data1, u32 data1Size, void* data2, u32 data2Size)
{
    if (sSfdDecodeSlots_abs[index].state != 1)
    {
        return;
    }
    if (sSfdDecodeSlots_abs[index].status != 0)
    {
        func_0010d950(index);
    }

    sSfdDecodeSlots_abs[index].fileIndex = fileIndex;
    sSfdDecodeSlots_abs[index].state = 8;
    sSfdDecodeSlots_abs[index].resource = data0;
    sSfdDecodeSlots_abs[index].aux = data1;
    sSfdDecodeSlots_abs[index].sourceData = data2;
    sSfdDecodeSlots_abs[index].inputSize = data0Size;
    sSfdDecodeSlots_abs[index].intermediateSize = data1Size;
    sSfdDecodeSlots_abs[index].outputSize = data2Size;
}

/* Scoped loop-invariant pragma measured W330: without nd113, with nd106 (obj 184/192). */
// FUN_0010D910
u32 func_0010d910(s16 index)
{
    return sSfdDecodeSlots[index].state == 1;
}
// FUN_0010D950
void func_0010d950(s16 index)
{
    u32* slot;

    if (sSfdDecodeSlots_abs[index].state != 1)
    {
        return;
    }
    slot = (u32*)((u8*)sSfdDecodeSlots_abs + 0x18) + index * 17;
    if (*slot != 0)
    {
        FUN_0051deb0(5, (void*)sSfdDecodeSlots_abs[index].completion);
        FUN_0051deb0(0, (void*)sSfdDecodeSlots_abs[index].decodeHandle);
        FUN_0051dd48(5, (void*)sSfdDecodeSlots_abs[index].outputHandle);
        FUN_0051dd48(3, (void*)sSfdDecodeSlots_abs[index].queueHandle);
        *slot = 0;
        func_0050B710(sSfdDecodeSlots_abs[index].output);
        func_0050B710(sSfdDecodeSlots_abs[index].sourceData);
    }
    *slot = 0;
}

// FUN_0010DA70
void func_0010da70(s16 bank, s16 cue)
{
    if ((sSfdDecodeSlots[bank].state == 1) && (sSfdDecodeSlots[bank].status != 0))
    {
        if (sSfdCueTable[cue].active != 0)
        {
            func_0051e028(sSfdDecodeSlots[bank].outputHandle, 1, 10, sSfdCueTable[cue].param);
            func_0051df58(sSfdDecodeSlots[bank].outputHandle, 2, 10, sSfdCueTable[cue].param);
            sSfdCueTable[cue].active = 0;
        }
    }
}

// FUN_0010DB60
void func_0010db60(s16 bank, s16 cue, s16 param3, s16 param4)
{
    s32 outputHandle;

    if ((sSfdDecodeSlots_abs[bank].state == 1) && (sSfdDecodeSlots_abs[bank].status != 0))
    {
        if (sSfdCueTable_abs[cue].active != 0)
        {
            if ((sSfdDecodeSlots_abs[bank].state == 1) && (sSfdDecodeSlots_abs[bank].status != 0))
            {
                if (sSfdCueTable_abs[cue].active != 0)
                {
                    func_0051e028_t(sSfdDecodeSlots_abs[bank].outputHandle, 1, 10, sSfdCueTable_abs[cue].param);
                    func_0051df58_t(sSfdDecodeSlots_abs[bank].outputHandle, 2, 10, sSfdCueTable_abs[cue].param);
                    sSfdCueTable_abs[cue].active = 0;
                }
            }
        }

        sSfdCueTable_abs[cue].bank = bank;
        sSfdCueTable_abs[cue].active = 1;
        outputHandle = sSfdDecodeSlots_abs[bank].outputHandle;
        /* Removing this barrier loses func_0010db60 (MATCH nd0 -> MISMATCH nd15) - measured W164. */
        asm ("" : "+m"(outputHandle));
        sSfdCueTable_abs[cue].param = func_0051df58_t(outputHandle, 0, 10, param3, param4);
    }
}

#pragma opt_loop_invariants on
// FUN_0010DD10
void func_0010dd10(HSfdImage* image, const u8* source)
{
    u8* dst;
    s32 height;
    s32 width;
    s32 x;
    s32 y;
    u32 alpha;
    u32 opaque;
    dst = image->pixels;
    width = image->width;
    height = image->height;
    opaque = 0xFF;
    y = 0;
    while (y < height)
    {
        x = 0;
        while (x < width)
        {
            u8* pixel = dst + (x * 4);

            pixel[0] = source[0];
            pixel[1] = source[1];
            pixel[2] = source[2];
            alpha = source[3];
            if ((s32)alpha >= 0x7F)
            {
                pixel[3] = opaque;
            }
            else
            {
                pixel[3] = (u8)((u32)(u16)((alpha * 0x100) - alpha) >> 7);
            }
            source += 4;
            x++;
        }
        dst += image->stride;
        y++;
    }
}

// FUN_0010DDC0
void func_0010ddc0(HSfdImage* image, const u8* source)
{
    u8* dst;
    s32 x;
    s32 y;
    s32 width;
    s32 height;

    dst = image->pixels;
    width = image->width;
    height = image->height;
    y = 0;
    while (y < height)
    {
        x = 0;
        while (x < width)
        {
            u8* pixel = dst + (x * 4);
            pixel[0] = source[0];
            pixel[1] = source[1];
            pixel[2] = source[2];
            pixel[3] = 0xFF;
            source += 3;
            x++;
        }
        dst += image->stride;
        y++;
    }
}

// FUN_0010DE40
void func_0010de40(HSfdImage* image, const u8* source)
{
    u8* dst;
    s32 width;
    s32 height;
    const u16* pixels;
    s32 y;
    s32 x;
    u32 opaque;
    dst = image->pixels;
    width = image->width;
    height = image->height;
    pixels = (const u16*)source;
    opaque = 0xFF;
    y = 0;
    while (y < height)
    {
        x = 0;
        while (x < width)
        {
            u8* pixel = dst + (x * 4);

            pixel[0] = (u8)((pixels[0] & 0x1F) << 3);
            pixel[1] = (u8)(((pixels[0] >> 5) & 0x1F) << 3);
            pixel[2] = (u8)(((pixels[0] >> 10) & 0x1F) << 3);
            pixel[3] = opaque;
            pixels++;
            x++;
        }
        dst += image->stride;
        y++;
    }
}

#pragma opt_loop_invariants off

// FUN_0010DEE0
void func_0010dee0(HSfdImage* image, const u8* source)
{
    u8* dst;
    s32 height;
    s32 width;
    s32 x;
    s32 y;
    s32 count;

    dst = image->pixels;
    width = image->width;
    /* Removing this barrier loses func_0010dee0 (MATCH nd0 -> MISMATCH nd10) - measured W164. */
    asm ("" : "+r"(width));
    height = image->height;
    y = 0;
    count = width >> 1;
    while (y < height)
    {
        x = 0;
        while (x < count)
        {
            u8* pixel = dst + (x * 2);

            pixel[0] = source[0] & 0x0F;
            pixel[1] = (source[0] >> 4) & 0x0F;
            source++;
            x++;
        }
        dst += image->stride;
        y++;
    }
}

/* W414: hidden-return scan found no h_maestro candidate; materializing depth in count, then initializing i before the shift, reached nd14 -> 0 (obj 168/176). */
#pragma opt_loop_invariants on
// FUN_0010DF60
void func_0010df60(HSfdImage* image, const u8* source)
{
    u8* dst;
    s32 i;
    s32 count;
    s32 alpha;
    s32 opaque;

    dst = image->palette;
    count = image->depth;
    i = 0;
    count = 1 << count;
    opaque = 0xff;
    for (; i < count; i++)
    {
        dst[i * 4] = source[i * 4];
        dst[i * 4 + 1] = source[i * 4 + 1];
        dst[i * 4 + 2] = source[i * 4 + 2];
        dst[i * 4 + 3] = source[i * 4 + 3];
        alpha = dst[i * 4 + 3];
        if (alpha >= 0x7f)
        {
            dst[i * 4 + 3] = opaque;
        }
        else
        {
            dst[i * 4 + 3] = (u16)((alpha * 0x100 - alpha) / 0x80);
        }
    }
}

#pragma opt_loop_invariants off

// FUN_0010E010
void func_0010e010(HSfdImage* image, s32 bitDepth)
{
    u8* pixels = image->palette;
    s32 count;
    s32 i;

    if (bitDepth != 8)
    {
        return;
    }

    i = 0;
    count = 1 << bitDepth;
    while (i < count)
    {
        if (((i % 0x20) >= 8) && ((i % 0x20) < 16))
        {
            u8* pixel = pixels + (i * 4);
            u8 r = pixel[0];
            u8 g = pixel[1];
            u8 b = pixel[2];
            u8 a = pixel[3];

            pixel[0] = pixel[0x20];
            pixel[1] = pixel[0x21];
            pixel[2] = pixel[0x22];
            pixel[3] = pixel[0x23];
            pixel[0x20] = r;
            pixel[0x21] = g;
            pixel[0x22] = b;
            pixel[0x23] = a;
        }
        i++;
    }
}

#pragma opt_loop_invariants on
// FUN_0010E0D0
#ifndef PC_BUILD
asm HSfdImage* func_0010e0d0(const u8* stream)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x26700040
  .word 0x90820000
  .word 0x24040002
  .word 0x14440014
  .word 0x00000000
  .word 0x92620001
  .word 0x14400011
  .word 0x00000000
  .word 0x92630008
  .word 0x24020054
  .word 0x1462000d
  .word 0x00000000
  .word 0x92630009
  .word 0x2402004d
  .word 0x14620009
  .word 0x00000000
  .word 0x9263000a
  .word 0x24020058
  .word 0x14620005
  .word 0x00000000
  .word 0x9263000b
  .word 0x24020030
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000e0
  .word 0x00000000
  .word 0x92630016
  .word 0x2402002c
  .word 0x10620025
  .word 0x00000000
  .word 0x24020024
  .word 0x10620022
  .word 0x00000000
  .word 0x24020014
  .word 0x1062001f
  .word 0x00000000
  .word 0x2402001b
  .word 0x10620019
  .word 0x00000000
  .word 0x24020013
  .word 0x10620016
  .word 0x00000000
  .word 0x2402000a
  .word 0x10620010
  .word 0x00000000
  .word 0x1064000e
  .word 0x00000000
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x24110020
  .word 0x1000000e
  .word 0x00000000
  .word 0x24110018
  .word 0x1000000b
  .word 0x00000000
  .word 0x24110010
  .word 0x10000008
  .word 0x00000000
  .word 0x24110008
  .word 0x10000005
  .word 0x00000000
  .word 0x24110004
  .word 0x10000002
  .word 0x00000000
  .word 0x0000882d
  .word 0x16200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000af
  .word 0x00000000
  .word 0x2a220010
  .word 0x14400002
  .word 0x00000000
  .word 0x24110020
  .word 0x96640012
  .word 0x96650014
  .word 0x0220302d
  .word 0x0c132f80
  .word 0x00000000
  .word 0x0040902d
  .word 0x0240202d
  .word 0x0c132fc8
  .word 0x00000000
  .word 0x92640010
  .word 0x10800052
  .word 0x00000000
  .word 0x92630011
  .word 0x2402000a
  .word 0x1062000b
  .word 0x00000000
  .word 0x24020002
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x24050020
  .word 0x10000005
  .word 0x00000000
  .word 0x24050010
  .word 0x10000002
  .word 0x00000000
  .word 0x0000282d
  .word 0x24020001
  .word 0x02221004
  .word 0x00821018
  .word 0x00a21018
  .word 0x000260c3
  .word 0x2402000a
  .word 0x1062000e
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000b
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000002c
  .word 0x00000000
  .word 0x0240202d
  .word 0x0200282d
  .word 0x0c0437d8
  .word 0x00000000
  .word 0x10000026
  .word 0x00000000
  .word 0x8e430018
  .word 0x8e45000c
  .word 0x0000202d
  .word 0x24020001
  .word 0x00a21004
  .word 0x240600ff
  .word 0x1000001b
  .word 0x00000000
  .word 0x00042840
  .word 0x02054021
  .word 0x00042880
  .word 0x00653821
  .word 0x95050000
  .word 0x30a5001f
  .word 0x000528c0
  .word 0xa0e50000
  .word 0x95050000
  .word 0x00052943
  .word 0x30a5001f
  .word 0x000528c0
  .word 0xa0e50001
  .word 0x95050000
  .word 0x00052a83
  .word 0x30a5001f
  .word 0x000528c0
  .word 0xa0e50002
  .word 0x14800004
  .word 0x00000000
  .word 0x0000282d
  .word 0x10000002
  .word 0x00000000
  .word 0x00c0282d
  .word 0xa0e50003
  .word 0x24840001
  .word 0x0082282a
  .word 0x14a0ffe4
  .word 0x00000000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0c043804
  .word 0x00000000
  .word 0x020c8021
  .word 0x92630016
  .word 0x2402002c
  .word 0x10620045
  .word 0x00000000
  .word 0x24020024
  .word 0x10620042
  .word 0x00000000
  .word 0x24020014
  .word 0x1062003f
  .word 0x00000000
  .word 0x2402001b
  .word 0x10620023
  .word 0x00000000
  .word 0x24020013
  .word 0x10620020
  .word 0x00000000
  .word 0x2402000a
  .word 0x10620017
  .word 0x00000000
  .word 0x24020002
  .word 0x10620014
  .word 0x00000000
  .word 0x24020001
  .word 0x1062000b
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000030
  .word 0x00000000
  .word 0x0240202d
  .word 0x0200282d
  .word 0x0c043744
  .word 0x00000000
  .word 0x1000002a
  .word 0x00000000
  .word 0x0240202d
  .word 0x0200282d
  .word 0x0c043770
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x0240202d
  .word 0x0200282d
  .word 0x0c043790
  .word 0x00000000
  .word 0x1000001e
  .word 0x00000000
  .word 0x8e480014
  .word 0x8e450004
  .word 0x8e440008
  .word 0x0000302d
  .word 0x1000000f
  .word 0x00000000
  .word 0x0000382d
  .word 0x10000006
  .word 0x00000000
  .word 0x92030000
  .word 0x01071021
  .word 0xa0430000
  .word 0x26100001
  .word 0x24e70001
  .word 0x00e5102a
  .word 0x1440fff9
  .word 0x00000000
  .word 0x8e420010
  .word 0x01024021
  .word 0x24c60001
  .word 0x00c4102a
  .word 0x1440fff0
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x0240202d
  .word 0x0200282d
  .word 0x0c0437b8
  .word 0x00000000
  .word 0x0240102d
  .word 0xdfbf0040
  .word 0x7bb30030
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
/* Removing this worsens func_00111500 (nd2 -> nd4); loses func_00111580 (MATCH nd0 -> MISMATCH nd4) - measured W161. */
#pragma opt_loop_invariants off
// FUN_0010E500
HSfdImage* func_0010e500(void* stream)
{
    u8 header[0x40];
    void* handle;
    HSfdImage* image;
    u8* buffer;

    image = NULL;
    handle = func_004c58a0(2, 1, stream);
    if (handle != NULL)
    {
        func_004c5250(handle, header, sizeof(header));
        buffer = (*D_00960178_abs)(*(u32*)(header + 4), HSFD_STREAM_HINT);
        func_004c5250(handle, buffer + sizeof(header),
                      *(u32*)(header + 4) - sizeof(header));
        func_00521250(buffer, header, sizeof(header));
        image = func_0010e0d0(buffer);
        (*D_0096017c_abs)(buffer);
        func_004c5780_y2(handle, 0);
    }
    return image;
}

// FUN_0010E5F0
void* func_0010e5f0(void* stream, void* output)
{
    func_004c58a0(2, 1, output);
    return stream;
}

#pragma opt_loop_invariants on
// FUN_0010E630
#ifndef PC_BUILD
asm void func_0010e630(void* destination, const void* source, u32 size)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x00068102
  .word 0x0c1357a4
  .word 0x00000000
  .word 0x3c031001
  .word 0x240afc00
  .word 0x24090200
  .word 0x24080400
  .word 0x3c077000
  .word 0x24060101
  .word 0x24050100
  .word 0x10000039
  .word 0x00000000
  .word 0xac6ae020
  .word 0xac69e010
  .word 0xac71d410
  .word 0xac68d420
  .word 0xac67d480
  .word 0x8c64e020
  .word 0x34840200
  .word 0xac64e020
  .word 0xac66d400
  .word 0x26314000
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800012
  .word 0x00000000
  .word 0xac69e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0xac6ae020
  .word 0xac65e010
  .word 0xac72d010
  .word 0xac68d020
  .word 0xac67d080
  .word 0x8c64e020
  .word 0x34840100
  .word 0xac64e020
  .word 0xac65d000
  .word 0x26524000
  .word 0x2610fc00
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1080000b
  .word 0x00000000
  .word 0xac65e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x2e010401
  .word 0x1020ffc6
  .word 0x00000000
  .word 0x2404fc00
  .word 0x3c031001
  .word 0xac64e020
  .word 0x24050200
  .word 0xac65e010
  .word 0xac71d410
  .word 0xac70d420
  .word 0x3c047000
  .word 0xac64d480
  .word 0x8c64e020
  .word 0x34840200
  .word 0xac64e020
  .word 0x24040101
  .word 0xac64d400
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800013
  .word 0x00000000
  .word 0xac65e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x2404fc00
  .word 0x3c031001
  .word 0xac64e020
  .word 0x24050100
  .word 0xac65e010
  .word 0xac72d010
  .word 0xac70d020
  .word 0x3c047000
  .word 0xac64d080
  .word 0x8c64e020
  .word 0x34840100
  .word 0xac64e020
  .word 0xac65d000
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1080000b
  .word 0x00000000
  .word 0xac65e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_loop_invariants off
// Retail reconstruction covers TMX validation, raster setup, pixel decode, and palette upload from offsets 0x00-0x3C8; all non-padding retail logic is represented, with only register/relocation differences remaining.
// FUN_0010E880
void* func_0010e880(const u8* stream)
{
    const u8* source;
    void* pixels;
    const u8* pixelSource;
    void* raster;
    void* palette;
    s32 bits;
    s32 paletteFormat = 0;
    s32 flags = 0;
    s32 pixelsPerPalette;

    if (stream == NULL)
    {
        K_Assert(&gp0xffff8840, 0x454);
    }
    if (stream[0] != 2)
    {
        K_Assert(&gp0xffff8840, 0x458);
    }
    if (stream[1] != 0)
    {
        K_Assert(&gp0xffff8840, 0x459);
    }
    if (((stream[8] != 'T') || (stream[9] != 'M') || (stream[10] != 'X')) &&
        (stream[11] != '0'))
    {
        K_Assert(&gp0xffff8840, 0x45A);
    }

    switch (stream[0x16])
    {
        case 0:
            bits = 0x20;
            break;
        case 1:
            bits = 0x18;
            break;
        case 0x0A:
        case 2:
            bits = 0x10;
            break;
        case 0x1B:
        case 0x13:
            bits = 8;
            flags = 0x2000;
            break;
        case 0x24:
        case 0x2C:
        case 0x14:
            bits = 4;
            flags = 0x4000;
            break;
        default:
            bits = 0;
            break;
    }

    if (stream[0x10] != 0)
    {
        switch (stream[0x11])
        {
            case 0:
                paletteFormat = 0x20;
                break;
            case 2:
            case 0x0A:
                paletteFormat = 0x10;
                break;
            default:
                paletteFormat = 0;
                break;
        }
    }

    source = stream + 0x40;
    pixelsPerPalette = 1 << bits;
    pixelSource = source +
                  ((paletteFormat * (stream[0x10] * pixelsPerPalette)) >> 3);
    raster = func_004ce0f0(*(const u16*)(stream + 0x12),
                           *(const u16*)(stream + 0x14), bits, flags | 0x504);
    if (raster == NULL)
    {
        K_Assert(&gp0xffff8840, 0x48E);
    }

    pixels = func_004ce200(raster, NULL, 1);
    if (pixels == NULL)
    {
        K_Assert(&gp0xffff8840, 0x490);
    }

    switch (bits)
    {
        case 0x20:
        case 0x18:
            func_0010e630(pixels, pixelSource,
                          *(const u16*)(stream + 0x12) *
                              *(const u16*)(stream + 0x14) * 4);
            break;
        case 0x10:
            func_0010e630(pixels, pixelSource,
                          *(const u16*)(stream + 0x12) *
                              *(const u16*)(stream + 0x14) * 2);
            break;
        case 8:
            func_0010e630(pixels, pixelSource,
                          *(const u16*)(stream + 0x12) *
                              *(const u16*)(stream + 0x14));
            break;
        case 4:
            func_0010e630(pixels, pixelSource,
                          ((s32)*(const u16*)(stream + 0x12) >> 1) *
                              *(const u16*)(stream + 0x14));
            break;
    }

    func_004cde00(raster);
    if (stream[0x10] != 0)
    {
        palette = func_004cdf30(raster, 1);
        if (palette == NULL)
        {
        K_Assert(&gp0xffff8840, 0x4BB);
        }
        func_0010e630(palette, source, pixelsPerPalette * 4);
        func_004cde40(raster);
    }
    return raster;
}
#pragma opt_loop_invariants reset

// FUN_0010EC50
#ifndef PC_BUILD
asm void func_0010ec50(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdfed0
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c94003c
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44826000
  .word 0x0c12a8e4
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0xc7818304
  .word 0xc4400080
  .word 0x46000b02
  .word 0x0c12a8f4
  .word 0x00000000
  .word 0x44806000
  .word 0x3c024420
  .word 0x44827000
  .word 0x3c0243e0
  .word 0x44827800
  .word 0x46006346
  .word 0x0c12a7c8
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c12a904
  .word 0x00000000
  .word 0x8e8204e4
  .word 0x1040000c
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x1000000a
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
  .word 0x8e840000
  .word 0x24030003
  .word 0x14830244
  .word 0x00000000
  .word 0x0c12aa98
  .word 0x00000000
  .word 0x0c12a6fc
  .word 0x00000000
  .word 0x0c12aa98
  .word 0x00000000
  .word 0x0000b02d
  .word 0x0000982d
  .word 0x10000232
  .word 0x00000000
  .word 0xafa000e0
  .word 0x0000882d
  .word 0x0000b82d
  .word 0xafa000d0
  .word 0x00131080
  .word 0x02828021
  .word 0x8e1201e8
  .word 0x261500a8
  .word 0x8e0400a8
  .word 0x0c12b17c
  .word 0x00000000
  .word 0x8ea40000
  .word 0x0c12ac6c
  .word 0x00000000
  .word 0x00131040
  .word 0x02821021
  .word 0x7fa200c0
  .word 0x00161080
  .word 0x02821021
  .word 0x7fa200b0
  .word 0x8fa200d0
  .word 0x14400066
  .word 0x00000000
  .word 0x8e030008
  .word 0x001210c0
  .word 0x00521021
  .word 0x00021040
  .word 0x00623021
  .word 0x80c30001
  .word 0x2402ffff
  .word 0x1062005d
  .word 0x00000000
  .word 0x94c20002
  .word 0x28410100
  .word 0x14200004
  .word 0x00000000
  .word 0x240500ff
  .word 0x10000004
  .word 0x00000000
  .word 0x304200ff
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x94c20004
  .word 0x28410100
  .word 0x14200004
  .word 0x00000000
  .word 0x240400ff
  .word 0x10000004
  .word 0x00000000
  .word 0x304200ff
  .word 0x0002243c
  .word 0x0004243f
  .word 0x94c20006
  .word 0x28410100
  .word 0x14200004
  .word 0x00000000
  .word 0x240300ff
  .word 0x10000004
  .word 0x00000000
  .word 0x304200ff
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x94c20008
  .word 0x28410100
  .word 0x14200004
  .word 0x00000000
  .word 0x240200ff
  .word 0x10000002
  .word 0x00000000
  .word 0x304200ff
  .word 0x0002143c
  .word 0x0002143f
  .word 0x7ba600c0
  .word 0x84c603f0
  .word 0x00a62821
  .word 0x00052c3c
  .word 0x00052c3f
  .word 0x7ba600c0
  .word 0x84c60440
  .word 0x00862021
  .word 0x0004243c
  .word 0x0004243f
  .word 0x7ba600c0
  .word 0x84c60490
  .word 0x00661821
  .word 0x00031c3c
  .word 0x00031c3f
  .word 0x04a10002
  .word 0x00000000
  .word 0x0000282d
  .word 0x0005343c
  .word 0x0006343f
  .word 0x28c10100
  .word 0x14200002
  .word 0x00000000
  .word 0x240500ff
  .word 0x0004343c
  .word 0x0006343f
  .word 0x04c10002
  .word 0x00000000
  .word 0x0000202d
  .word 0x0004343c
  .word 0x0006343f
  .word 0x28c10100
  .word 0x14200002
  .word 0x00000000
  .word 0x240400ff
  .word 0x0003343c
  .word 0x0006343f
  .word 0x04c10002
  .word 0x00000000
  .word 0x0000182d
  .word 0x0003343c
  .word 0x0006343f
  .word 0x28c10100
  .word 0x14200002
  .word 0x00000000
  .word 0x240300ff
  .word 0xa3a5012c
  .word 0xa3a4012d
  .word 0xa3a3012e
  .word 0xa3a2012f
  .word 0x24020001
  .word 0xafa200d0
  .word 0x8e030008
  .word 0x001210c0
  .word 0x00521021
  .word 0x00021040
  .word 0x7fa200a0
  .word 0x00622021
  .word 0x80830001
  .word 0x2402ffff
  .word 0x1462005a
  .word 0x00000000
  .word 0x12e00053
  .word 0x00000000
  .word 0x2a220003
  .word 0x14400004
  .word 0x00000000
  .word 0x8ea40000
  .word 0x0c12ada8
  .word 0x00000000
  .word 0x00131080
  .word 0x02829021
  .word 0x8ea40000
  .word 0x0c12b1c4
  .word 0x00000000
  .word 0x0c12aa98
  .word 0x00000000
  .word 0x44806000
  .word 0x00000000
  .word 0x46006346
  .word 0x0c12ab80
  .word 0x00000000
  .word 0x8e430288
  .word 0x24020001
  .word 0x14620014
  .word 0x00000000
  .word 0x2a210003
  .word 0x10200009
  .word 0x00000000
  .word 0x00131080
  .word 0x02821021
  .word 0x8ea40000
  .word 0x8c450148
  .word 0x0c12b39c
  .word 0x00000000
  .word 0x1000002e
  .word 0x00000000
  .word 0x00131080
  .word 0x02821021
  .word 0x8ea40000
  .word 0x8c450148
  .word 0x0c129980
  .word 0x00000000
  .word 0x10000026
  .word 0x00000000
  .word 0x24020002
  .word 0x14620023
  .word 0x00000000
  .word 0x0000182d
  .word 0x2665ffff
  .word 0x10000012
  .word 0x00000000
  .word 0x00051080
  .word 0x02829021
  .word 0x8e420288
  .word 0x1440000c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260302d
  .word 0x0c044194
  .word 0x00000000
  .word 0x8e4400a8
  .word 0x8e050148
  .word 0x0c129980
  .word 0x00000000
  .word 0x24030001
  .word 0x10000004
  .word 0x00000000
  .word 0x24a5ffff
  .word 0x04a1ffee
  .word 0x00000000
  .word 0x1460000a
  .word 0x00000000
  .word 0x2a220003
  .word 0x14400007
  .word 0x00000000
  .word 0x00131080
  .word 0x02821021
  .word 0x8ea40000
  .word 0x8c450148
  .word 0x0c129980
  .word 0x00000000
  .word 0x0c12ab54
  .word 0x00000000
  .word 0x10000150
  .word 0x00000000
  .word 0x8ea40000
  .word 0x0c12b1c4
  .word 0x00000000
  .word 0x1000014b
  .word 0x00000000
  .word 0x1062001f
  .word 0x00000000
  .word 0x80830000
  .word 0x24020002
  .word 0x1462001b
  .word 0x00000000
  .word 0x8fa200e0
  .word 0x14400018
  .word 0x00000000
  .word 0x24020001
  .word 0xafa200e0
  .word 0x8e040148
  .word 0x7ba200b0
  .word 0x8c450328
  .word 0x0c1298b8
  .word 0x00000000
  .word 0xafa00100
  .word 0xc7808308
  .word 0xe7a00104
  .word 0xe7a00108
  .word 0xe7a0010c
  .word 0xe7a00110
  .word 0xafa00114
  .word 0xafa00118
  .word 0xafa0011c
  .word 0x8e040148
  .word 0x27a50100
  .word 0x27a60108
  .word 0x27a70110
  .word 0x27a80118
  .word 0x0c129880
  .word 0x00000000
  .word 0x8e030008
  .word 0x7ba200a0
  .word 0x00622021
  .word 0x80830001
  .word 0x1460006b
  .word 0x00000000
  .word 0x12200027
  .word 0x00000000
  .word 0x2a220003
  .word 0x14400004
  .word 0x00000000
  .word 0x8e0400a8
  .word 0x0c12ada8
  .word 0x00000000
  .word 0x8e0400a8
  .word 0x0c12b1c4
  .word 0x00000000
  .word 0x0c12aa98
  .word 0x00000000
  .word 0x44806000
  .word 0x00000000
  .word 0x46006346
  .word 0x0c12ab80
  .word 0x00000000
  .word 0x2a210003
  .word 0x10200007
  .word 0x00000000
  .word 0x8e0400a8
  .word 0x8e050148
  .word 0x0c12b39c
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8e0400a8
  .word 0x8e050148
  .word 0x0c129980
  .word 0x00000000
  .word 0x0c12ab54
  .word 0x00000000
  .word 0x8e0400a8
  .word 0x0c12b17c
  .word 0x00000000
  .word 0x8e0400a8
  .word 0x0c12ac6c
  .word 0x00000000
  .word 0x0000882d
  .word 0x001210c0
  .word 0x00521021
  .word 0x0002b840
  .word 0x8e020008
  .word 0x00571021
  .word 0x80420000
  .word 0xae020288
  .word 0x8e020008
  .word 0x00572021
  .word 0xc68003d8
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000a
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800320
  .word 0xc68003dc
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000c
  .word 0x00621821
  .word 0x240201c0
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800360
  .word 0x8e0400a8
  .word 0x0c12ac80
  .word 0x00000000
  .word 0x8e020008
  .word 0x00572021
  .word 0xc68003d8
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000a
  .word 0x00621021
  .word 0x0002f43c
  .word 0x001ef43f
  .word 0xc68003dc
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000c
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa7a200f0
  .word 0x8e040148
  .word 0x27a5012c
  .word 0x00a0302d
  .word 0x00a0382d
  .word 0x00a0402d
  .word 0x0c129774
  .word 0x00000000
  .word 0x26310001
  .word 0x24170001
  .word 0x100000b8
  .word 0x00000000
  .word 0x24020001
  .word 0x14620062
  .word 0x00000000
  .word 0x80820000
  .word 0xae020288
  .word 0x1620001d
  .word 0x00000000
  .word 0x8e030008
  .word 0x001210c0
  .word 0x00521021
  .word 0x00021040
  .word 0x00622021
  .word 0xc68003d8
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000a
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800320
  .word 0xc68003dc
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000c
  .word 0x00621821
  .word 0x240201c0
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800360
  .word 0x8e0400a8
  .word 0x0c12ac80
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x8e030008
  .word 0x001210c0
  .word 0x00521021
  .word 0x00021040
  .word 0x00622021
  .word 0xc68003d8
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000a
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800320
  .word 0xc68003dc
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000c
  .word 0x00621821
  .word 0x240201c0
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800360
  .word 0x8e0400a8
  .word 0x0c12acb0
  .word 0x00000000
  .word 0x8e030008
  .word 0x001210c0
  .word 0x00521021
  .word 0x00021040
  .word 0x00622021
  .word 0xc68003d8
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000a
  .word 0x00621021
  .word 0x0002f43c
  .word 0x001ef43f
  .word 0xc68003dc
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000c
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa7a200f0
  .word 0x8e040148
  .word 0x27a5012c
  .word 0x00a0302d
  .word 0x00a0382d
  .word 0x00a0402d
  .word 0x0c129774
  .word 0x00000000
  .word 0x24170001
  .word 0x26310001
  .word 0x10000054
  .word 0x00000000
  .word 0x24020002
  .word 0x14620051
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521021
  .word 0x0002b840
  .word 0x80820000
  .word 0xae020288
  .word 0x8e020008
  .word 0x00573021
  .word 0xc68003dc
  .word 0x46000024
  .word 0x44050000
  .word 0xc68003d8
  .word 0x46000024
  .word 0x44040000
  .word 0x449e0000
  .word 0x00000000
  .word 0x46800320
  .word 0x87a200f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46800360
  .word 0x84c2000a
  .word 0x00821021
  .word 0x44820000
  .word 0x00000000
  .word 0x468003a0
  .word 0x84c2000c
  .word 0x00a21021
  .word 0x240301c0
  .word 0x00621023
  .word 0x44820000
  .word 0x00000000
  .word 0x468003e0
  .word 0x84c2000e
  .word 0x00821021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800420
  .word 0x84c20010
  .word 0x00a21021
  .word 0x00621023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800460
  .word 0x8e0400a8
  .word 0x0c12ad04
  .word 0x00000000
  .word 0x8e020008
  .word 0x00572021
  .word 0xc68003d8
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000e
  .word 0x00621021
  .word 0x0002f43c
  .word 0x001ef43f
  .word 0xc68003dc
  .word 0x46000024
  .word 0x44030000
  .word 0x84820010
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa7a200f0
  .word 0x8e040148
  .word 0x27a5012c
  .word 0x00a0302d
  .word 0x00a0382d
  .word 0x00a0402d
  .word 0x0c129774
  .word 0x00000000
  .word 0x26310001
  .word 0x24170001
  .word 0x26520001
  .word 0x1000fdec
  .word 0x00000000
  .word 0x8fa200e0
  .word 0x10400005
  .word 0x00000000
  .word 0x24020001
  .word 0x12c20002
  .word 0x00000000
  .word 0x26d60001
  .word 0x26730001
  .word 0x8e8204e0
  .word 0x0262102a
  .word 0x1440fdcc
  .word 0x00000000
  .word 0x0c12ab54
  .word 0x00000000
  .word 0x0c12ab54
  .word 0x00000000
  .word 0xdfbf0090
  .word 0x7bbe0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0130
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants off
// FUN_0010F6C0
#ifndef PC_BUILD
asm void* func_0010f6c0(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdfed0
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c94003c
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44826000
  .word 0x0c12a8e4
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0xc7818304
  .word 0xc4400080
  .word 0x46000b02
  .word 0x0c12a8f4
  .word 0x00000000
  .word 0x44806000
  .word 0x3c024420
  .word 0x44827000
  .word 0x3c0243e0
  .word 0x44827800
  .word 0x46006346
  .word 0x0c12a7c8
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c12a904
  .word 0x00000000
  .word 0x8e8204e4
  .word 0x1040000c
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x1000000a
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
  .word 0x8e840000
  .word 0x24020003
  .word 0x10820061
  .word 0x00000000
  .word 0x24030002
  .word 0x108302aa
  .word 0x00000000
  .word 0x24020001
  .word 0x10820058
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x100002a3
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000011
  .word 0x00000000
  .word 0x00101080
  .word 0x02829021
  .word 0x26510148
  .word 0x0c12951c
  .word 0x00000000
  .word 0xae220000
  .word 0x0040202d
  .word 0x27858878
  .word 0x00a0302d
  .word 0x00a0382d
  .word 0x00a0402d
  .word 0x0c129774
  .word 0x00000000
  .word 0x2402ffff
  .word 0xae420288
  .word 0x26100001
  .word 0x8e8204e0
  .word 0x0202102a
  .word 0x1440ffed
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000012
  .word 0x00000000
  .word 0x00101080
  .word 0x02829021
  .word 0x265100a8
  .word 0x0c12b15c
  .word 0x00000000
  .word 0xae220000
  .word 0x0040202d
  .word 0x0c12b17c
  .word 0x00000000
  .word 0x8e240000
  .word 0x0c12ac6c
  .word 0x00000000
  .word 0x8e240000
  .word 0x0c12b17c
  .word 0x00000000
  .word 0xae4001e8
  .word 0x26100001
  .word 0x8e8204e0
  .word 0x0202102a
  .word 0x1440ffec
  .word 0x00000000
  .word 0x8e850004
  .word 0xae850008
  .word 0x0000382d
  .word 0x24060001
  .word 0x2404fffe
  .word 0x10000016
  .word 0x00000000
  .word 0x000710c0
  .word 0x00471021
  .word 0x00021040
  .word 0x00a21021
  .word 0x80420001
  .word 0x1444000b
  .word 0x00000000
  .word 0x24e70001
  .word 0x000710c0
  .word 0x00471021
  .word 0x00021040
  .word 0x00a21821
  .word 0x00061080
  .word 0x02821021
  .word 0xac430008
  .word 0x10000004
  .word 0x00000000
  .word 0x24e70001
  .word 0x1000ffed
  .word 0x00000000
  .word 0x24c60001
  .word 0x8e8204e0
  .word 0x00c2102a
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x24020001
  .word 0xae820000
  .word 0x10000250
  .word 0x00000000
  .word 0xae830000
  .word 0x1000024d
  .word 0x00000000
  .word 0x8e8204e8
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000248
  .word 0x00000000
  .word 0x0c12aa98
  .word 0x00000000
  .word 0x0c12a6fc
  .word 0x00000000
  .word 0x0c12aa98
  .word 0x00000000
  .word 0x0000b02d
  .word 0x0000802d
  .word 0x10000235
  .word 0x00000000
  .word 0xafa000e0
  .word 0x0000902d
  .word 0x0000b82d
  .word 0xafa000d0
  .word 0x00101080
  .word 0x02828821
  .word 0x8e3301e8
  .word 0x263500a8
  .word 0x8e2400a8
  .word 0x0c12b17c
  .word 0x00000000
  .word 0x8ea40000
  .word 0x0c12ac6c
  .word 0x00000000
  .word 0x00101040
  .word 0x02821021
  .word 0x7fa200c0
  .word 0x00161080
  .word 0x02821021
  .word 0x7fa200b0
  .word 0x8fa200d0
  .word 0x14400066
  .word 0x00000000
  .word 0x8e230008
  .word 0x001310c0
  .word 0x00531021
  .word 0x00021040
  .word 0x00623021
  .word 0x80c30001
  .word 0x2402ffff
  .word 0x1062005d
  .word 0x00000000
  .word 0x94c20002
  .word 0x28410100
  .word 0x14200004
  .word 0x00000000
  .word 0x240500ff
  .word 0x10000004
  .word 0x00000000
  .word 0x304200ff
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x94c20004
  .word 0x28410100
  .word 0x14200004
  .word 0x00000000
  .word 0x240400ff
  .word 0x10000004
  .word 0x00000000
  .word 0x304200ff
  .word 0x0002243c
  .word 0x0004243f
  .word 0x94c20006
  .word 0x28410100
  .word 0x14200004
  .word 0x00000000
  .word 0x240300ff
  .word 0x10000004
  .word 0x00000000
  .word 0x304200ff
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x94c20008
  .word 0x28410100
  .word 0x14200004
  .word 0x00000000
  .word 0x240200ff
  .word 0x10000002
  .word 0x00000000
  .word 0x304200ff
  .word 0x0002143c
  .word 0x0002143f
  .word 0x7ba600c0
  .word 0x84c603f0
  .word 0x00a62821
  .word 0x00052c3c
  .word 0x00052c3f
  .word 0x7ba600c0
  .word 0x84c60440
  .word 0x00862021
  .word 0x0004243c
  .word 0x0004243f
  .word 0x7ba600c0
  .word 0x84c60490
  .word 0x00661821
  .word 0x00031c3c
  .word 0x00031c3f
  .word 0x04a10002
  .word 0x00000000
  .word 0x0000282d
  .word 0x0005343c
  .word 0x0006343f
  .word 0x28c10100
  .word 0x14200002
  .word 0x00000000
  .word 0x240500ff
  .word 0x0004343c
  .word 0x0006343f
  .word 0x04c10002
  .word 0x00000000
  .word 0x0000202d
  .word 0x0004343c
  .word 0x0006343f
  .word 0x28c10100
  .word 0x14200002
  .word 0x00000000
  .word 0x240400ff
  .word 0x0003343c
  .word 0x0006343f
  .word 0x04c10002
  .word 0x00000000
  .word 0x0000182d
  .word 0x0003343c
  .word 0x0006343f
  .word 0x28c10100
  .word 0x14200002
  .word 0x00000000
  .word 0x240300ff
  .word 0xa3a5012c
  .word 0xa3a4012d
  .word 0xa3a3012e
  .word 0xa3a2012f
  .word 0x24020001
  .word 0xafa200d0
  .word 0x8e230008
  .word 0x001310c0
  .word 0x00531021
  .word 0x00021040
  .word 0x7fa200a0
  .word 0x00622021
  .word 0x80830001
  .word 0x2402ffff
  .word 0x1462005d
  .word 0x00000000
  .word 0x12e00056
  .word 0x00000000
  .word 0x2a420003
  .word 0x14400004
  .word 0x00000000
  .word 0x8ea40000
  .word 0x0c12ada8
  .word 0x00000000
  .word 0x00101080
  .word 0x02829821
  .word 0x8ea40000
  .word 0x0c12b1c4
  .word 0x00000000
  .word 0x0c12aa98
  .word 0x00000000
  .word 0x44806000
  .word 0x00000000
  .word 0x46006346
  .word 0x0c12ab80
  .word 0x00000000
  .word 0x8e630288
  .word 0x24020001
  .word 0x14620014
  .word 0x00000000
  .word 0x2a410003
  .word 0x10200009
  .word 0x00000000
  .word 0x00101080
  .word 0x02821021
  .word 0x8ea40000
  .word 0x8c450148
  .word 0x0c12b39c
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0x00101080
  .word 0x02821021
  .word 0x8ea40000
  .word 0x8c450148
  .word 0x0c129980
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x24020002
  .word 0x14620026
  .word 0x00000000
  .word 0x0000182d
  .word 0x2605ffff
  .word 0x10000015
  .word 0x00000000
  .word 0x00051080
  .word 0x02829821
  .word 0x8e620288
  .word 0x1440000f
  .word 0x00000000
  .word 0x0280202d
  .word 0x0200302d
  .word 0x0c044194
  .word 0x00000000
  .word 0x2a420003
  .word 0x14400005
  .word 0x00000000
  .word 0x8e6400a8
  .word 0x8e250148
  .word 0x0c129980
  .word 0x00000000
  .word 0x24030001
  .word 0x10000004
  .word 0x00000000
  .word 0x24a5ffff
  .word 0x04a1ffeb
  .word 0x00000000
  .word 0x1460000a
  .word 0x00000000
  .word 0x2a420003
  .word 0x14400007
  .word 0x00000000
  .word 0x00101080
  .word 0x02821021
  .word 0x8ea40000
  .word 0x8c450148
  .word 0x0c129980
  .word 0x00000000
  .word 0x0c12ab54
  .word 0x00000000
  .word 0x10000150
  .word 0x00000000
  .word 0x8ea40000
  .word 0x0c12b1c4
  .word 0x00000000
  .word 0x1000014b
  .word 0x00000000
  .word 0x1062001f
  .word 0x00000000
  .word 0x80830000
  .word 0x24020002
  .word 0x1462001b
  .word 0x00000000
  .word 0x8fa200e0
  .word 0x14400018
  .word 0x00000000
  .word 0x24020001
  .word 0xafa200e0
  .word 0x8e240148
  .word 0x7ba200b0
  .word 0x8c450328
  .word 0x0c1298b8
  .word 0x00000000
  .word 0xafa00100
  .word 0xc7808308
  .word 0xe7a00104
  .word 0xe7a00108
  .word 0xe7a0010c
  .word 0xe7a00110
  .word 0xafa00114
  .word 0xafa00118
  .word 0xafa0011c
  .word 0x8e240148
  .word 0x27a50100
  .word 0x27a60108
  .word 0x27a70110
  .word 0x27a80118
  .word 0x0c129880
  .word 0x00000000
  .word 0x8e230008
  .word 0x7ba200a0
  .word 0x00622021
  .word 0x80830001
  .word 0x1460006b
  .word 0x00000000
  .word 0x12400027
  .word 0x00000000
  .word 0x2a420003
  .word 0x14400004
  .word 0x00000000
  .word 0x8e2400a8
  .word 0x0c12ada8
  .word 0x00000000
  .word 0x8e2400a8
  .word 0x0c12b1c4
  .word 0x00000000
  .word 0x0c12aa98
  .word 0x00000000
  .word 0x44806000
  .word 0x00000000
  .word 0x46006346
  .word 0x0c12ab80
  .word 0x00000000
  .word 0x2a410003
  .word 0x10200007
  .word 0x00000000
  .word 0x8e2400a8
  .word 0x8e250148
  .word 0x0c12b39c
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8e2400a8
  .word 0x8e250148
  .word 0x0c129980
  .word 0x00000000
  .word 0x0c12ab54
  .word 0x00000000
  .word 0x8e2400a8
  .word 0x0c12b17c
  .word 0x00000000
  .word 0x8e2400a8
  .word 0x0c12ac6c
  .word 0x00000000
  .word 0x0000902d
  .word 0x001310c0
  .word 0x00531021
  .word 0x0002b840
  .word 0x8e220008
  .word 0x00571021
  .word 0x80420000
  .word 0xae220288
  .word 0x8e220008
  .word 0x00572021
  .word 0xc68003d8
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000a
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800320
  .word 0xc68003dc
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000c
  .word 0x00621821
  .word 0x240201c0
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800360
  .word 0x8e2400a8
  .word 0x0c12ac80
  .word 0x00000000
  .word 0x8e220008
  .word 0x00572021
  .word 0xc68003d8
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000a
  .word 0x00621021
  .word 0x0002f43c
  .word 0x001ef43f
  .word 0xc68003dc
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000c
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa7a200f0
  .word 0x8e240148
  .word 0x27a5012c
  .word 0x00a0302d
  .word 0x00a0382d
  .word 0x00a0402d
  .word 0x0c129774
  .word 0x00000000
  .word 0x26520001
  .word 0x24170001
  .word 0x100000b8
  .word 0x00000000
  .word 0x24020001
  .word 0x14620062
  .word 0x00000000
  .word 0x80820000
  .word 0xae220288
  .word 0x1640001d
  .word 0x00000000
  .word 0x8e230008
  .word 0x001310c0
  .word 0x00531021
  .word 0x00021040
  .word 0x00622021
  .word 0xc68003d8
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000a
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800320
  .word 0xc68003dc
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000c
  .word 0x00621821
  .word 0x240201c0
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800360
  .word 0x8e2400a8
  .word 0x0c12ac80
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x8e230008
  .word 0x001310c0
  .word 0x00531021
  .word 0x00021040
  .word 0x00622021
  .word 0xc68003d8
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000a
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800320
  .word 0xc68003dc
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000c
  .word 0x00621821
  .word 0x240201c0
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800360
  .word 0x8e2400a8
  .word 0x0c12acb0
  .word 0x00000000
  .word 0x8e230008
  .word 0x001310c0
  .word 0x00531021
  .word 0x00021040
  .word 0x00622021
  .word 0xc68003d8
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000a
  .word 0x00621021
  .word 0x0002f43c
  .word 0x001ef43f
  .word 0xc68003dc
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000c
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa7a200f0
  .word 0x8e240148
  .word 0x27a5012c
  .word 0x00a0302d
  .word 0x00a0382d
  .word 0x00a0402d
  .word 0x0c129774
  .word 0x00000000
  .word 0x24170001
  .word 0x26520001
  .word 0x10000054
  .word 0x00000000
  .word 0x24020002
  .word 0x14620051
  .word 0x00000000
  .word 0x001310c0
  .word 0x00531021
  .word 0x0002b840
  .word 0x80820000
  .word 0xae220288
  .word 0x8e220008
  .word 0x00573021
  .word 0xc68003dc
  .word 0x46000024
  .word 0x44050000
  .word 0xc68003d8
  .word 0x46000024
  .word 0x44040000
  .word 0x449e0000
  .word 0x00000000
  .word 0x46800320
  .word 0x87a200f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46800360
  .word 0x84c2000a
  .word 0x00821021
  .word 0x44820000
  .word 0x00000000
  .word 0x468003a0
  .word 0x84c2000c
  .word 0x00a21021
  .word 0x240301c0
  .word 0x00621023
  .word 0x44820000
  .word 0x00000000
  .word 0x468003e0
  .word 0x84c2000e
  .word 0x00821021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800420
  .word 0x84c20010
  .word 0x00a21021
  .word 0x00621023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800460
  .word 0x8e2400a8
  .word 0x0c12ad04
  .word 0x00000000
  .word 0x8e220008
  .word 0x00572021
  .word 0xc68003d8
  .word 0x46000024
  .word 0x44030000
  .word 0x8482000e
  .word 0x00621021
  .word 0x0002f43c
  .word 0x001ef43f
  .word 0xc68003dc
  .word 0x46000024
  .word 0x44030000
  .word 0x84820010
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0243e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa7a200f0
  .word 0x8e240148
  .word 0x27a5012c
  .word 0x00a0302d
  .word 0x00a0382d
  .word 0x00a0402d
  .word 0x0c129774
  .word 0x00000000
  .word 0x26520001
  .word 0x24170001
  .word 0x26730001
  .word 0x1000fde9
  .word 0x00000000
  .word 0x8fa200e0
  .word 0x10400005
  .word 0x00000000
  .word 0x24020001
  .word 0x12c20002
  .word 0x00000000
  .word 0x26d60001
  .word 0x26100001
  .word 0x8e8204e0
  .word 0x0202102a
  .word 0x1440fdc9
  .word 0x00000000
  .word 0x0c12ab54
  .word 0x00000000
  .word 0x0c12ab54
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0090
  .word 0x7bbe0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0130
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants reset

// FUN_001102E0
void func_001102e0(KwlnTask* task)
{
    MaestroResourceWork* work;
    s32 i;
    void** resourceSlot;

    work = (MaestroResourceWork*)task->workData;

    for (i = 0; i < (s32)work->resourceCount; i++)
    {
        resourceSlot = &work->parsedResources[i];
        if (*resourceSlot != NULL)
        {
            if (func_004ac390(*resourceSlot) == 0)
            {
                printf(D_005D5880);
            }
            *resourceSlot = NULL;
        }
    }

    for (i = 0; i < (s32)work->resourceCount; i++)
    {
        resourceSlot = &work->effectResources[i];
        if (*resourceSlot != NULL)
        {
            if (func_004a5540(*resourceSlot) == 0)
            {
                printf(D_005D5880);
            }
            *resourceSlot = NULL;
        }
    }

    MAESTRO_FREE(work);
}

// FUN_001103E0
KwlnTask* func_001103e0(KwlnTask* parent, u32 priority, u32 param_3, u32 resourceCount)
{
    MaestroResourceWork* work;
    KwlnTask* task;

    work = (MaestroResourceWork*)MAESTRO_ALLOC(1, sizeof(MaestroResourceWork), 0x40000);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreate(parent, D_005D5898, priority, func_0010f6c0, func_001102e0, work);
    if (task == NULL)
    {
        return NULL;
    }

    work->resourceIndex = param_3;
    work->resourceCount = resourceCount;
    return task;
}

// FUN_001104B0
u32 func_001104b0(KwlnTask* task)
{
    return ((MaestroResourceWork*)task->workData)->state >= 2;
}

// FUN_001104D0
u32 func_001104d0(KwlnTask* task)
{
    MaestroResourceWork* work;

    work = (MaestroResourceWork*)task->workData;
    if (work->state == 2)
    {
        work->state = 3;
        return true;
    }

    return false;
}

static inline s8* maestroLoadRecords(s8** out, MaestroResourceWork* work, s32 index)
{
    *out = (s8*)work->resources[index];
    return *out;
}

#pragma opt_loop_invariants on
// FUN_00110510
u32 func_00110510(KwlnTask* task)
{
    s32 i;
    MaestroResourceWork* work;

    work = (MaestroResourceWork*)task->workData;
    if (work->state == 3)
    {
        for (i = 0; i < (s32)work->resourceCount; i++)
        {
            s8* records;
            s8 recordType;

record_read:
            records = maestroLoadRecords(&records, work, i);
            recordType = records[work->recordIndices[i] * 18 + 1];
            if (recordType != -1)
            {
                goto record_body;
            }
            work->recordIndices[i]++;
            work->completedRecords++;
            goto record_done;
record_body:
            if (recordType == -2)
            {
                return false;
            }
            work->recordIndices[i]++;
            goto record_read;
record_done:
            ;
        }
    }

    return true;
}

#pragma opt_loop_invariants off

// FUN_001105D0
void func_001105d0(KwlnTask* task, s32 index, void* resource)
{
    MaestroResourceWork* work;
    void** resourceSlot;

    work = (MaestroResourceWork*)task->workData;
    if (index < 40)
    {
        index *= sizeof(void*);
        work = (MaestroResourceWork*)(index + (int)work);
        resourceSlot = work->runtimeResources;
        *resourceSlot = resource;
        if (resource != NULL)
        {
            u32* flags;

            resource = *resourceSlot;
            flags = (u32*)((u8*)resource + 0x50);
            *flags = (*flags & 0xFFFFFF00) | 2;
        }
    }
}

// FUN_00110620
void func_00110620(KwlnTask* task, s16 index, s16 param_3, s16 param_4, s16 param_5)
{
    MaestroResourceWork* work;

    work = (MaestroResourceWork*)task->workData;
    work->coordinates0[index] = param_3;
    work->coordinates1[index] = param_4;
    work->coordinates2[index] = param_5;
}

// FUN_00110650
#ifndef PC_BUILD
asm void func_00110650_y2(void* param_1, s32 sourceIndex, s32 destinationIndex)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00c0802d
  .word 0x00051080
  .word 0x00511021
  .word 0x8c4400a8
  .word 0x27a50050
  .word 0x0c12b048
  .word 0x00000000
  .word 0x00109080
  .word 0x02511021
  .word 0x8c4400a8
  .word 0x27a50040
  .word 0x0c12b048
  .word 0x00000000
  .word 0x02511821
  .word 0x8c640148
  .word 0x8c830068
  .word 0x1060000c
  .word 0x00000000
  .word 0x0240102d
  .word 0x00511021
  .word 0x8c420148
  .word 0x8c420068
  .word 0x8c420000
  .word 0xc440000c
  .word 0x46800060
  .word 0xc4400010
  .word 0x46800020
  .word 0x10000003
  .word 0x00000000
  .word 0x10000035
  .word 0x00000000
  .word 0xc7ad0040
  .word 0xc7ac0050
  .word 0x460d6101
  .word 0xc7ab004c
  .word 0xc7a20044
  .word 0x460b1080
  .word 0x3c0243e0
  .word 0x44821800
  .word 0x00000000
  .word 0x46021a81
  .word 0xc7a9005c
  .word 0xc7a20054
  .word 0x46091080
  .word 0x46021a01
  .word 0x460a40c1
  .word 0xc7a70048
  .word 0x46012082
  .word 0x46071183
  .word 0x46001882
  .word 0x460b1143
  .word 0xc7a20058
  .word 0x46026080
  .word 0x460d1101
  .word 0x46084880
  .word 0x460a10c1
  .word 0x46012082
  .word 0x46071103
  .word 0x46001882
  .word 0x460b10c3
  .word 0x3c023f80
  .word 0x44821000
  .word 0x00000000
  .word 0x46022100
  .word 0x46021880
  .word 0x460130c3
  .word 0xe7a30060
  .word 0x46001083
  .word 0xe7a20064
  .word 0x46012043
  .word 0xe7a10068
  .word 0xe7a2006c
  .word 0xe7a10070
  .word 0x46002803
  .word 0xe7a00074
  .word 0xe7a30078
  .word 0xe7a0007c
  .word 0x27a50060
  .word 0x27a60068
  .word 0x27a70070
  .word 0x27a80078
  .word 0x0c129880
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001107D0
#ifndef PC_BUILD
asm void* func_001107d0(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdfe60
  .word 0xffbf0080
  .word 0x7fb50070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0x0080a02d
  .word 0x8c92003c
  .word 0x8e420000
  .word 0x2c410009
  .word 0x1020018f
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24635310
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e420310
  .word 0x10400006
  .word 0x00000000
  .word 0x264400fc
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae4200c8
  .word 0x24020001
  .word 0xae420000
  .word 0x1000017c
  .word 0x00000000
  .word 0x8e420310
  .word 0x1040000b
  .word 0x00000000
  .word 0x8e4400c8
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x10400174
  .word 0x00000000
  .word 0xae400004
  .word 0x24020002
  .word 0xae420000
  .word 0x1000016f
  .word 0x00000000
  .word 0xae400004
  .word 0x24020002
  .word 0xae420000
  .word 0x1000016a
  .word 0x00000000
  .word 0x8e420004
  .word 0x24450001
  .word 0x8e4400c8
  .word 0x0c0408b8
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000023
  .word 0x00000000
  .word 0x27a40090
  .word 0x264501fc
  .word 0x0c14909c
  .word 0x00000000
  .word 0x27a40090
  .word 0x0200282d
  .word 0x0c148f9a
  .word 0x00000000
  .word 0x2784887c
  .word 0x27a50090
  .word 0x0c14896a
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x244258a8
  .word 0xffa20010
  .word 0x24020506
  .word 0xffa20018
  .word 0x0000202d
  .word 0x27a50090
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae4200c4
  .word 0x24020004
  .word 0xae420000
  .word 0x10000140
  .word 0x00000000
  .word 0x8e4400c8
  .word 0x0000282d
  .word 0x27a6019c
  .word 0x0c040840
  .word 0x00000000
  .word 0x0040802d
  .word 0x264400cc
  .word 0x0200282d
  .word 0x2406002a
  .word 0x0c148494
  .word 0x00000000
  .word 0x2605002a
  .word 0xae4500f8
  .word 0xae4000b8
  .word 0x0000302d
  .word 0x2404fffe
  .word 0x2403ffff
  .word 0x10000013
  .word 0x00000000
  .word 0x000610c0
  .word 0x00461021
  .word 0x00021040
  .word 0x00a21021
  .word 0x80420001
  .word 0x14440006
  .word 0x00000000
  .word 0x8e4200b8
  .word 0x2442ffff
  .word 0xae4200b8
  .word 0x1000000a
  .word 0x00000000
  .word 0x14430004
  .word 0x00000000
  .word 0x8e4200b8
  .word 0x24420001
  .word 0xae4200b8
  .word 0x24c60001
  .word 0x28c203e8
  .word 0x1440ffec
  .word 0x00000000
  .word 0x24020005
  .word 0xae420000
  .word 0x10000114
  .word 0x00000000
  .word 0x8e4400c4
  .word 0x27a50198
  .word 0x0000302d
  .word 0x0c0430e8
  .word 0x00000000
  .word 0x8e430004
  .word 0x00031880
  .word 0x00721821
  .word 0xac620008
  .word 0x8fa20198
  .word 0x10400108
  .word 0x00000000
  .word 0xae4000c4
  .word 0x8e420004
  .word 0x00021080
  .word 0x00521021
  .word 0x8c440008
  .word 0x8c830050
  .word 0x3c02ffff
  .word 0x344200ff
  .word 0x00621024
  .word 0x34423300
  .word 0xac820050
  .word 0x8e420004
  .word 0x24420001
  .word 0xae420004
  .word 0x24020002
  .word 0xae420000
  .word 0x100000f6
  .word 0x00000000
  .word 0xae4000b4
  .word 0x8e420308
  .word 0x10400026
  .word 0x00000000
  .word 0x865100d4
  .word 0x8e5000f8
  .word 0x8e53030c
  .word 0x24040001
  .word 0x240504ec
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a82d
  .word 0x16a00004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000013
  .word 0x00000000
  .word 0x0280202d
  .word 0x3c05005d
  .word 0x24a55898
  .word 0x0260302d
  .word 0x3c070011
  .word 0x24e7f6c0
  .word 0x3c080011
  .word 0x250802e0
  .word 0x02a0482d
  .word 0x0c0652c8
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000003
  .word 0x00000000
  .word 0xaeb00004
  .word 0xaeb104e0
  .word 0xae4200b0
  .word 0x10000023
  .word 0x00000000
  .word 0x865100d4
  .word 0x8e5000f8
  .word 0x24040001
  .word 0x240504ec
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040982d
  .word 0x16600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000013
  .word 0x00000000
  .word 0x0280202d
  .word 0x3c05005d
  .word 0x24a55898
  .word 0x240614a6
  .word 0x3c070011
  .word 0x24e7f6c0
  .word 0x3c080011
  .word 0x250802e0
  .word 0x0260482d
  .word 0x0c0652c8
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000003
  .word 0x00000000
  .word 0xae700004
  .word 0xae7104e0
  .word 0xae4200b0
  .word 0x8e430304
  .word 0x8e4200b0
  .word 0x8c42003c
  .word 0xac4304e4
  .word 0x8e4200b0
  .word 0x8c42003c
  .word 0xc64102fc
  .word 0xc6400300
  .word 0xe44103d8
  .word 0xe44003dc
  .word 0x0000302d
  .word 0x2403ff00
  .word 0x10000014
  .word 0x00000000
  .word 0x00062080
  .word 0x02441021
  .word 0x8c450008
  .word 0x8e4200b0
  .word 0x8c42003c
  .word 0x28c10028
  .word 0x1020000b
  .word 0x00000000
  .word 0x00442021
  .word 0x24820328
  .word 0xac850328
  .word 0x10a00006
  .word 0x00000000
  .word 0x8c440000
  .word 0x8c820050
  .word 0x00431024
  .word 0x34420002
  .word 0xac820050
  .word 0x24c60001
  .word 0x28c20002
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x0000582d
  .word 0x240a0002
  .word 0x24070004
  .word 0x24080003
  .word 0x24090001
  .word 0x1000001b
  .word 0x00000000
  .word 0x156a0004
  .word 0x00000000
  .word 0x0120602d
  .word 0x10000007
  .word 0x00000000
  .word 0x15600004
  .word 0x00000000
  .word 0x0100602d
  .word 0x10000002
  .word 0x00000000
  .word 0x00e0602d
  .word 0x000b1040
  .word 0x02423021
  .word 0x84c500e6
  .word 0x84c400de
  .word 0x8e4200b0
  .word 0x8c43003c
  .word 0x000c143c
  .word 0x0002143f
  .word 0x00021040
  .word 0x00621821
  .word 0x84c200d6
  .word 0xa46203f0
  .word 0xa4640440
  .word 0xa4650490
  .word 0x256b0001
  .word 0x29620003
  .word 0x1440ffe4
  .word 0x00000000
  .word 0x24020007
  .word 0xae420000
  .word 0x1000005f
  .word 0x00000000
  .word 0x8e4200b0
  .word 0x8c42003c
  .word 0x8c420000
  .word 0x28420002
  .word 0x14400059
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000020
  .word 0x00000000
  .word 0x00101040
  .word 0x00501021
  .word 0x00021840
  .word 0x3c02005d
  .word 0x244253e0
  .word 0x00432021
  .word 0x80830000
  .word 0x1060001a
  .word 0x00000000
  .word 0x864200a8
  .word 0x14430013
  .word 0x00000000
  .word 0x864300aa
  .word 0x80820001
  .word 0x1462000f
  .word 0x00000000
  .word 0x864300ac
  .word 0x80820002
  .word 0x1462000b
  .word 0x00000000
  .word 0x864300ae
  .word 0x80820003
  .word 0x14620007
  .word 0x00000000
  .word 0x80860004
  .word 0x80870005
  .word 0x0000202d
  .word 0x24050001
  .word 0x0c042938
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020100
  .word 0x1440ffdf
  .word 0x00000000
  .word 0x8e4200b0
  .word 0x8c44003c
  .word 0x8c830000
  .word 0x24020002
  .word 0x14620003
  .word 0x00000000
  .word 0x24020003
  .word 0xac820000
  .word 0x8e4200b0
  .word 0x8c42003c
  .word 0xc64102fc
  .word 0xc6400300
  .word 0xe44103d8
  .word 0xe44003dc
  .word 0x24020008
  .word 0xae420000
  .word 0x10000022
  .word 0x00000000
  .word 0x8e4200b0
  .word 0x8c42003c
  .word 0xc64102fc
  .word 0xc6400300
  .word 0xe44103d8
  .word 0xe44003dc
  .word 0x8e4200c0
  .word 0x1440000b
  .word 0x00000000
  .word 0x864300d2
  .word 0x10600008
  .word 0x00000000
  .word 0x8e4200b4
  .word 0x14430005
  .word 0x00000000
  .word 0x24020001
  .word 0xae4200bc
  .word 0x1000000f
  .word 0x00000000
  .word 0x8e4200b4
  .word 0x24420001
  .word 0xae4200b4
  .word 0x8e4400b0
  .word 0x0c044144
  .word 0x00000000
  .word 0x8e4300b4
  .word 0x8e4200b8
  .word 0x0062102a
  .word 0x14400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0080
  .word 0x7bb50070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0x27bd01a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* Scope spans FUN_001105D0..FUN_001107D0. Closing it any earlier costs
 * func_001107D0 nd1162 -> 1171, object 1548 -> 1560 (measured W404), so the
 * knob is live across all four functions, not just the one it precedes. */
#pragma opt_loop_invariants reset

// FUN_00110E70 MATCHING
void func_00110e70(KwlnTask* task)
{
    MaestroStreamWork* work;
    s32 i;
    u8* entry;
    void** slot;
    work = (MaestroStreamWork*)task->workData;
    if (work->stream != NULL)
    {
        if (work->useCdvd != 0)
        {
            func_00133d30(work->stream, work->cdvd);
        }
        else
        {
            func_00133d30(work->stream, NULL);
        }
        work->cdvd = NULL;
    }
    else if (work->useCdvd != 0 && work->cdvd != NULL)
    {
        H_Cdvd_Destroy(work->cdvd);
        work->cdvd = NULL;
    }

    for (i = 0; i < 40; i++)
    {
        entry = (u8*)work + i * 4;
        slot = (void**)(entry + 8);
        if (*(void**)(entry + 8) != NULL)
        {
            func_004d0f00(*(void**)(entry + 8));
            *slot = NULL;
        }
    }

    printf(D_005D58C0, work->path);
    MAESTRO_FREE(work);
}

// FUN_00110F80
KwlnTask* func_00110f80(KwlnTask* parent, u64 dimensions)
{
    s32 i;
    KwlnTask* task;
    MaestroStreamWork* work;
    char name[256];

    work = (MaestroStreamWork*)MAESTRO_ALLOC(1, sizeof(MaestroStreamWork), 0x40000);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreateWithAutoPriority(parent, 0x106F, D_005D6A68, func_001107d0, func_00110e70, work);
    if (task == NULL)
    {
        return NULL;
    }

    *(MaestroStreamDimensions*)work->dimensions = *(MaestroStreamDimensions*)&dimensions;
    sprintf(name, D_005D6A80, work->dimensions[0], work->dimensions[1], work->dimensions[2], work->dimensions[3]);
    printf(D_005D6AA0, name);
    strcpy(work->basePath, D_005D6AB8);
    work->useCdvd = true;

    for (i = 0; i < 10000; i++)
    {
        if (D_005D66E0[i][0] == '\0')
        {
            break;
        }
        if (strcmp(name, D_005D66E0[i]) == 0)
        {
            sprintf(work->path, D_005D6AD0, work->dimensions[0], work->dimensions[1], work->dimensions[2], work->dimensions[3]);
            return task;
        }
    }

    printf(D_005D6AF0);
    sprintf(work->path, D_005D6B10);
    return task;
}

// FUN_00111150
KwlnTask* func_00111150(KwlnTask* parent, u64 dimensions)
{
    KwlnTask* task;
    MaestroStreamWork* work;

    work = (MaestroStreamWork*)MAESTRO_ALLOC(1, sizeof(MaestroStreamWork), 0x40000);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreateWithAutoPriority(parent, 0x106F, D_005D6A68, func_001107d0, func_00110e70, work);
    if (task == NULL)
    {
        return NULL;
    }

    *(MaestroStreamDimensions*)work->dimensions = *(MaestroStreamDimensions*)&dimensions;
    sprintf(work->path, D_005D6B30, work->dimensions[0], work->dimensions[1], work->dimensions[2], work->dimensions[3]);
    strcpy(work->basePath, D_005D6B50);
    work->useCdvd = true;
    return task;
}

// FUN_00111260
KwlnTask* func_00111260(KwlnTask* parent, u64 dimensions, void* archive)
{
    KwlnTask* task;
    MaestroStreamWork* work;
    s16 dim2;
    s16 dim0;
    s16 dim1;
    s16 dim3;

    work = (MaestroStreamWork*)MAESTRO_ALLOC(1, sizeof(MaestroStreamWork), 0x40000);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreateWithAutoPriority(parent, 0x106F, D_005D6A68, func_001107d0, func_00110e70, work);
    if (task == NULL)
    {
        return NULL;
    }

    dim0 = ((volatile /* Removing this function's qualifier batch loses func_00111260 (MATCH nd0 -> MISMATCH nd9, size 276 -> 276) - measured W170. */ s16*)&dimensions)[0];
    dim1 = ((volatile /* Removing this function's qualifier batch loses func_00111260 (MATCH nd0 -> MISMATCH nd9, size 276 -> 276) - measured W170. */ s16*)&dimensions)[1];
    dim2 = ((volatile /* Removing this function's qualifier batch loses func_00111260 (MATCH nd0 -> MISMATCH nd9, size 276 -> 276) - measured W170. */ s16*)&dimensions)[2];
    dim3 = ((volatile /* Removing this function's qualifier batch loses func_00111260 (MATCH nd0 -> MISMATCH nd9, size 276 -> 276) - measured W170. */ s16*)&dimensions)[3];
    work->dimensions[0] = dim0;
    work->dimensions[1] = dim1;
    work->dimensions[2] = dim2;
    work->dimensions[3] = dim3;
    sprintf(work->path, D_005D6B30, work->dimensions[0], work->dimensions[1], work->dimensions[2], work->dimensions[3]);
    strcpy(work->basePath, D_005D6B50);
    work->cdvd = (HCdvd*)archive;
    work->useCdvd = false;
    return task;
}

// FUN_00111380
KwlnTask* func_00111380(KwlnTask* parent, u32 priority, u64 dimensions, void* archive)
{
    KwlnTask* task;
    MaestroStreamWork* work;
    s16 dim2;
    s16 dim0;
    s16 dim1;
    s16 dim3;

    work = (MaestroStreamWork*)MAESTRO_ALLOC(1, sizeof(MaestroStreamWork), 0x40000);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreate(parent, D_005D6A68, priority, func_001107d0, func_00110e70, work);
    if (task == NULL)
    {
        return NULL;
    }

    dim0 = ((volatile /* Removing this function's qualifier batch loses func_00111380 (MATCH nd0 -> MISMATCH nd9, size 304 -> 304) - measured W170. */ s16*)&dimensions)[0];
    dim1 = ((volatile /* Removing this function's qualifier batch loses func_00111380 (MATCH nd0 -> MISMATCH nd9, size 304 -> 304) - measured W170. */ s16*)&dimensions)[1];
    dim2 = ((volatile /* Removing this function's qualifier batch loses func_00111380 (MATCH nd0 -> MISMATCH nd9, size 304 -> 304) - measured W170. */ s16*)&dimensions)[2];
    dim3 = ((volatile /* Removing this function's qualifier batch loses func_00111380 (MATCH nd0 -> MISMATCH nd9, size 304 -> 304) - measured W170. */ s16*)&dimensions)[3];
    work->dimensions[0] = dim0;
    work->dimensions[1] = dim1;
    work->dimensions[2] = dim2;
    work->dimensions[3] = dim3;
    sprintf(work->path, D_005D6B30, work->dimensions[0], work->dimensions[1], work->dimensions[2], work->dimensions[3]);
    strcpy(work->basePath, D_005D6B50);
    work->createCustomPriorityTask = true;
    work->resourceTaskPriority = priority;
    work->useCdvd = false;
    work->cdvd = (HCdvd*)archive;
    *(volatile /* Removing this function's qualifier batch loses func_00111380 (MATCH nd0 -> MISMATCH nd9, size 304 -> 304) - measured W170. */ u32*)&work->useCdvd = false;
    return task;
}


// FUN_001114B0
u32 func_001114b0(KwlnTask* task)
{
    MaestroStreamWork* work;

    work = (MaestroStreamWork*)task->workData;
    if (work->state == 5)
    {
        printf(D_005D6B60, work->path);
        return true;
    }

    return false;
}

#pragma optimization_level 1


// FUN_00111500
/* Returns the value it stores: retail materializes the 1 in $v0, the return
 * register, rather than reusing the dead argument register $a0. Every void
 * form colours it $a0 (nd2 floor); the result is discarded at the call site. */
s32 func_00111500(KwlnTask* task)
{
    MaestroStreamWork* work;
    s32 value;
    work = (MaestroStreamWork*)task->workData;
    value = 1;
    work->stopAtFrame = value;
    work->complete = 0;
    return value;
}
// FUN_00111520
void func_00111520(KwlnTask* task, s16 count)
{
    *((s16*)((MaestroStreamWork*)task->workData)->archiveHeader + 3) = count;
}

// FUN_00111530
u32 func_00111530(KwlnTask* task)
{
    MaestroStreamWork* work;

    work = (MaestroStreamWork*)task->workData;
    if (work->state == 5)
    {
        work->state = 6;
        return true;
    }

    return false;
}

// FUN_00111570
void func_00111570(KwlnTask* task, u32 value)
{
    ((MaestroStreamWork*)task->workData)->renderFlags = value;
}

// FUN_00111580
void func_00111580(KwlnTask* task, u64 packedCoordinates)
{
    KwlnTask* task_p = task;
    f32 x;
    f32 y;
    MaestroStreamWork* work;
    MaestroStreamWork* work_c;

    work = (MaestroStreamWork*)task_p->workData;
    x = ((f32*)&packedCoordinates)[0];
    y = ((f32*)&packedCoordinates)[1];
    (work_c = work)->x = x;
    work->y = y;
}

#pragma optimization_level 2

// FUN_001115B0
void func_001115b0(KwlnTask* task)
{
    MaestroStreamWork* work;

    work = (MaestroStreamWork*)task->workData;
    if (work->resourceTask != NULL)
    {
        ((MaestroResourceWork*)work->resourceTask->workData)->cancelRequested = true;
    }
}

// FUN_001115E0
void func_001115e0(KwlnTask* task)
{
    MaestroStreamWork* work;

    work = (MaestroStreamWork*)task->workData;
    if (work->resourceTask != NULL)
    {
        func_0010ec50(work->resourceTask);
    }
}

// FUN_00111610
#ifndef PC_BUILD
asm void* H_Maestro_UpdateTask(KwlnTask* hmaestroTask)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080982d
  .word 0x8c91003c
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040802d
  .word 0xc4540080
  .word 0x0200202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x3c024248
  .word 0x44826000
  .word 0x0200202d
  .word 0x0c13275c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44826000
  .word 0x0c12a8e4
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0xc78181f4
  .word 0xc4400080
  .word 0x46000b02
  .word 0x0c12a8f4
  .word 0x00000000
  .word 0x44806000
  .word 0x3c024420
  .word 0x44827000
  .word 0x3c0243e0
  .word 0x44827800
  .word 0x46006346
  .word 0x0c12a7c8
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c12a904
  .word 0x00000000
  .word 0x8e230000
  .word 0x24020004
  .word 0x1062008b
  .word 0x00000000
  .word 0x24020003
  .word 0x1062013d
  .word 0x00000000
  .word 0x24020002
  .word 0x10620062
  .word 0x00000000
  .word 0x24020001
  .word 0x10620010
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000133
  .word 0x00000000
  .word 0x8e22012c
  .word 0x10400006
  .word 0x00000000
  .word 0x26240018
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae220004
  .word 0x24020001
  .word 0xae220000
  .word 0xae200014
  .word 0x8e22012c
  .word 0x10400006
  .word 0x00000000
  .word 0x8e240004
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x10400120
  .word 0x00000000
  .word 0x24040002
  .word 0x24050001
  .word 0x26260018
  .word 0x0c131628
  .word 0x00000000
  .word 0xae220008
  .word 0x14400018
  .word 0x00000000
  .word 0x3c04005d
  .word 0x24846b80
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x4600a306
  .word 0x0c13275c
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000112
  .word 0x00000000
  .word 0x0040202d
  .word 0x240501b1
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c130580
  .word 0x00000000
  .word 0x14400018
  .word 0x00000000
  .word 0x3c04005d
  .word 0x24846ba0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x4600a306
  .word 0x0c13275c
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x2402ffff
  .word 0x100000f3
  .word 0x00000000
  .word 0x0000202d
  .word 0x8e250008
  .word 0x0c12d16c
  .word 0x00000000
  .word 0xae22000c
  .word 0x24020002
  .word 0xae220000
  .word 0x100000d9
  .word 0x00000000
  .word 0x8e240008
  .word 0x0000282d
  .word 0x0c1315e0
  .word 0x00000000
  .word 0xae200008
  .word 0x27a40088
  .word 0x27a50080
  .word 0x27a60078
  .word 0x0c12a760
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0c12d358
  .word 0x00000000
  .word 0xae220010
  .word 0x3c033f80
  .word 0x44836000
  .word 0x0040202d
  .word 0x46006346
  .word 0x0c12b81c
  .word 0x00000000
  .word 0x44806000
  .word 0x3c0243e0
  .word 0x44826800
  .word 0x8e240010
  .word 0x0c12b830
  .word 0x00000000
  .word 0x8e240010
  .word 0x0c12bbd8
  .word 0x00000000
  .word 0x0c12a6fc
  .word 0x00000000
  .word 0x24020003
  .word 0xae220000
  .word 0x100000b6
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0xc78181f4
  .word 0xc4400080
  .word 0x46000b02
  .word 0x0c12a8f4
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c12a904
  .word 0x00000000
  .word 0x8e22000c
  .word 0x8c440008
  .word 0x0c130824
  .word 0x00000000
  .word 0x0040802d
  .word 0x26040004
  .word 0x0c12c69c
  .word 0x00000000
  .word 0x46000546
  .word 0x26040004
  .word 0x0c12c698
  .word 0x00000000
  .word 0x0000902d
  .word 0x8e22011c
  .word 0x10400007
  .word 0x00000000
  .word 0x44806000
  .word 0x8e24000c
  .word 0x0c12d400
  .word 0x00000000
  .word 0x10000028
  .word 0x00000000
  .word 0x8e220118
  .word 0x1040000d
  .word 0x00000000
  .word 0xc6210014
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe6200014
  .word 0x8e24000c
  .word 0xc78c80e4
  .word 0x0c12d400
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0xc78c80e4
  .word 0x46006000
  .word 0x4600a836
  .word 0x4501000c
  .word 0x00000000
  .word 0xc6210014
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe6200014
  .word 0x8e24000c
  .word 0x0c12d400
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x44806000
  .word 0x8e24000c
  .word 0x0c12d400
  .word 0x00000000
  .word 0x8e220120
  .word 0x14400002
  .word 0x00000000
  .word 0x24120001
  .word 0x8e24000c
  .word 0x0c12d31c
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0c12cf30
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050005
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000b
  .word 0x24050006
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c023f80
  .word 0xafa20060
  .word 0xafa20064
  .word 0xafa20068
  .word 0xc6200128
  .word 0xe7a0006c
  .word 0x8e240010
  .word 0x27a50060
  .word 0x0c12b844
  .word 0x00000000
  .word 0x0c12aa98
  .word 0x00000000
  .word 0x0c12a6fc
  .word 0x00000000
  .word 0x0c12aa98
  .word 0x00000000
  .word 0x8e240010
  .word 0x0c12b818
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0c12d4cc
  .word 0x00000000
  .word 0x0c12ab54
  .word 0x00000000
  .word 0x0c12ab54
  .word 0x00000000
  .word 0x1240001c
  .word 0x00000000
  .word 0x8e220124
  .word 0x10400006
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c044714
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x4600a306
  .word 0x0c13275c
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000012
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x4600a306
  .word 0x0c13275c
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00111c50
void H_Maestro_00111c50(KwlnTask* hmaestroTask)
{
    HMaestro* work;
    u32 anim;

    work = (HMaestro*)hmaestroTask->workData;
    anim = FUN_004c2090(*(void**)((u8*)work->maestro + 8));
    FUN_004b1870(anim + 4, anim + 0x20, 0);
    work->state = HMAESTRO_STATE_IDLE;
}
 
/* Retail's rotation path at 0x0508-0x0660 evaluates the sine/cosine
 * polynomials inline before the matrix calls.  Its repeated output-record
 * loads in UV, position, and color setup (0x0110-0x04d0) remain un-hoisted.
 * The extension dispatch at 0x0c54-0x1224 keeps each record direction as a
 * distinct render path: top, bottom, left, right, then node extraHeight and
 * extraWidth, each rebuilding the immediate-mode strip before returning.
 * The explicit branches below preserve those state transitions and duplicated
 * draw calls instead of folding them into one common tail.  Current output is
 * 4276/4704 bytes (90.9%); the remaining deficit is in the color path at
 * 0x07ac-0x0c54 and extension store/call layout at 0x0c54-0x1224. */
// FUN_00111CA0
void func_00111ca0(KwlnTask* task, u32 value)
{
    ((HMaestro*)task->workData)->unk_124 = value;
}

/* The following helpers are the pre-Camp Maestro immediate-mode renderer.  The
 * retail module keeps these entry points in this translation unit (the same
 * allocator/list globals are shared with the stream code above). */




// Same reconstruction pattern as func_001140d0 below: retail inlines the
// state-set calls and per-vertex doubled-alpha color loop rather than
// delegating to Maestro_SetPrimitiveStates/DrawQuad/NearReciprocal.
/* Scoped loop-invariant pragma measured W330: without nd438, with nd434 (obj 808/848). */
// FUN_00111cb0
u32 H_Maestro_00111cb0(KwlnTask* hmaestroTask)
{
    HMaestro* work;
    u32 anim;
    f32 animEnd;
    f32 animCurrent;

    work = (HMaestro*)hmaestroTask->workData;
    if (work->state == HMAESTRO_STATE_DRAW)
    {
        anim = FUN_004c2090(*(void**)((u8*)work->maestro + 8));
        animEnd = FUN_004b1a70(anim + 4);
        animCurrent = FUN_004b1a60(anim + 4);

        return !(animEnd > fGpffff80e4 + animCurrent);
    }

    return true;
}
// FUN_00111d50
void H_Maestro_SetAlphaMult(KwlnTask* hmaestroTask, f32 alphaMult)
{
    ((HMaestro*)hmaestroTask->workData)->alphaMult = alphaMult;
}
// FUN_00111d60
void H_Maestro_DestroyTask(KwlnTask* hmaestroTask)
{
    HMaestro* work;

    work = (HMaestro*)hmaestroTask->workData;

    if (work->cdvd != NULL)
    {
        H_Cdvd_Destroy(work->cdvd);
        work->cdvd = NULL;
    }

    if (work->maestro != NULL)
    {
        Rt2dMaestroDestroy(work->maestro);
        work->maestro = NULL;
    }

    RwFree(work);
}
// FUN_00111dd0
KwlnTask* H_Maestro_CreateTask(KwlnTask* parent, u32 priority, const char* path)
{
    KwlnTask* task;
    HMaestro* work;

    work = RwCalloc(1, sizeof(HMaestro), rwMEMHINTDUR_GLOBAL);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreate(parent,
                          "H_DrawMaestro",
                          priority,
                          H_Maestro_UpdateTask,
                          H_Maestro_DestroyTask,
                          work);
    if (task == NULL)
    {
        return NULL;
    }

    strcpy(work->path, path);
    work->noDeltaTime = false;
    work->shouldLoop = false;
    work->alphaMult = 1.0f;
    work->useCdvd = false;

    return task;
}
// FUN_00111ec0
u32 H_Maestro_FinishedInit(KwlnTask* hmaestroTask)
{
    return ((HMaestro*)hmaestroTask->workData)->state > HMAESTRO_STATE_INITSCENE;
}
// FUN_00111ee0
void H_Maestro_RequestDraw(KwlnTask* hmaestroTask)
{
    ((HMaestro*)hmaestroTask->workData)->state = HMAESTRO_STATE_DRAW;
}
// FUN_00111f00
void H_Maestro_SetShouldLoop(KwlnTask* hmaestroTask, u32 shouldLoop)
{
    ((HMaestro*)hmaestroTask->workData)->shouldLoop = shouldLoop;
}
#pragma opt_loop_invariants off
/* ------------------------------------------------------------------------- */
/* Pre-Camp sprite/effect task slice (retail 0x117440-0x119F10). */












// FUN_00111F10
void func_00111f10(KwlnTask* task, u32 noDeltaTime)
{
    ((HMaestro*)task->workData)->noDeltaTime = noDeltaTime;
}
#pragma opt_loop_invariants reset
// FUN_00111f20
void H_Maestro_00111f20(KwlnTask* hmaestroTask, u32 param_2)
{
    ((HMaestro*)hmaestroTask->workData)->unk_120 = param_2;
}
// FUN_00111f30
u32 H_Maestro_00111f30(s16* param_1)
{
    return *param_1 == 5;
}
// FUN_00111F50
void func_00111f50(void)
{
    HCdvd* requests[3];

    requests[0] = H_Cdvd_Request(D_005D6BD0, HCDVD_FILENORMAL);
    requests[1] = H_Cdvd_Request(D_005D6BF0, HCDVD_FILENORMAL);
    requests[2] = H_Cdvd_Request(D_005D6C10, HCDVD_FILENORMAL);
    H_Cdvd_ReadSync(requests[0]);
    H_Cdvd_ReadSync(requests[1]);
    H_Cdvd_ReadSync(requests[2]);

    D_00833a40_abs[0] = func_00112370(D_005D6BD0);
    D_00833a40_abs[1] = func_00112370(D_005D6BF0);
    D_00833a40_abs[2] = func_00112370(D_005D6C10);
    for (;;)
    {
        func_001120c0();
        if (((MaestroBlobNode*)D_00833a40_abs[0])->state == 5 &&
            ((MaestroBlobNode*)D_00833a40_abs[1])->state == 5 &&
            ((MaestroBlobNode*)D_00833a40_abs[2])->state == 5)
        {
            break;
        }
    }

    H_Cdvd_Destroy(requests[0]);
    H_Cdvd_Destroy(requests[1]);
    H_Cdvd_Destroy(requests[2]);
}
// FUN_001120a0
void* H_Maestro_001120a0(int param_1)
{
    return D_00833a40[param_1];
}
// FUN_001120C0
void func_001120c0(void)
{
    MaestroBlobNode* node;

    node = DAT_00833a50;
    for (;;)
    {
        if (node == NULL)
        {
            break;
        }
        func_00112110(node);
        node = node->next;
    }
}
/* Scoped loop-invariant pragma measured W330: without nd1178, with nd1112 (obj 1708/1728). */
// FUN_00112110
void func_00112110(void* param_1)
{
    MaestroBlobNode* node;

    node = (MaestroBlobNode*)param_1;
    switch (node->state)
    {
        case 0:
            node->cdvd = H_Cdvd_Request(node->path, HCDVD_FILENORMAL);
            node->state = 1;
            break;

        case 1:
            if (node->cdvd != NULL)
            {
                if (H_Cdvd_IsFileLoaded(node->cdvd) != 1)
                {
                    break;
                }
                node->source = (u8*)node->cdvd->fileMemory;
            }
            memcpy(node->header, node->source, sizeof(node->header));
            node->sourceOffset += sizeof(node->header);
            node->state = 2;
            node->resourceIndex = 0;
            if (*((u16*)(node->header + 0x14)) == 0)
            {
                node->state = 4;
                break;
            }

        case 2:
        {
            do
            {
                u32 record[2];

                memcpy(record, node->source + node->sourceOffset, sizeof(record));
                node->sourceOffset += sizeof(record);
                *(void**)((u32)node + node->resourceIndex * 4 + 0x104) =
                    func_0010e880_y2(node->source + record[1]);
                node->resourceIndex++;
            } while (*((u16*)(node->header + 0x14)) != node->resourceIndex);
            node->state = 4;
            goto state_4;
        }

        case 3:
            node->resourceIndex++;
            if (*((u16*)(node->header + 0x14)) == node->resourceIndex)
            {
                node->state = 4;
            }
            else
            {
                node->state = 2;
            }
            break;

        case 4:
        {
            s32 i;

state_4:
            node->output = MAESTRO_ALLOC(*((u16*)(node->header + 0x16)), 0x80, 0x40000);
            for (i = 0; i < (s32)*((u16*)(node->header + 0x16)); i++)
            {
                u32 record[2];

                memcpy(record, node->source + node->sourceOffset, sizeof(record));
                node->sourceOffset += sizeof(record);
                memcpy((u8*)node->output + i * 0x80, node->source + record[1], 0x80);
            }
            if (node->cdvd != NULL)
            {
                H_Cdvd_Destroy(node->cdvd);
            }
            node->cdvd = NULL;
            node->outputCount = (s16)*((u16*)(node->header + 0x16));
            node->state = 5;
            break;
        }
        case 5:
            break;
    }
}
// FUN_00112370
void* func_00112370(const char* path)
{
    MaestroBlobNode* node;
    MaestroBlobNode* tail;
    MaestroBlobNode* next;

    node = (MaestroBlobNode*)MAESTRO_ALLOC(1, sizeof(MaestroBlobNode), 0x40000);
    node->state = 0;
    strcpy(node->path, path);
    tail = DAT_00833a50;
    if (tail == NULL)
    {
        DAT_00833a50 = node;
    }
    else
    {
        for (;;)
        {
            next = tail->next;
            if (next == NULL)
            {
                tail->next = node;
                node->prev = tail;
                break;
            }
            tail = next;
        }
    }
    return node;
}
// FUN_00112420
void* func_00112420(void* source)
{
    MaestroBlobNode* node;
    MaestroBlobNode* tail;
    MaestroBlobNode* next;

    node = (MaestroBlobNode*)MAESTRO_ALLOC(1, sizeof(MaestroBlobNode), 0x40000);
    node->state = 1;
    node->source = (u8*)source;
    tail = DAT_00833a50;
    if (tail == NULL)
    {
        DAT_00833a50 = node;
    }
    else
    {
        for (;;)
        {
            next = tail->next;
            if (next == NULL)
            {
                tail->next = node;
                node->prev = tail;
                break;
            }
            tail = next;
        }
    }
    return node;
}
// FUN_001124B0
#ifndef PC_BUILD
asm void func_001124b0(void* param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c8301bc
  .word 0x1460000d
  .word 0x00000000
  .word 0x8e0201b8
  .word 0x14400004
  .word 0x00000000
  .word 0xaf80b250
  .word 0x1000000e
  .word 0x00000000
  .word 0xaf82b250
  .word 0xac4001bc
  .word 0x8e0201b8
  .word 0xac4001bc
  .word 0x10000008
  .word 0x00000000
  .word 0x8e0201b8
  .word 0xac6201b8
  .word 0x8e0301b8
  .word 0x10600003
  .word 0x00000000
  .word 0x8e0201bc
  .word 0xac6201bc
  .word 0x0000902d
  .word 0x1000000b
  .word 0x00000000
  .word 0x00121080
  .word 0x02021021
  .word 0x24510104
  .word 0x8c440104
  .word 0x10800004
  .word 0x00000000
  .word 0x0c1337a4
  .word 0x00000000
  .word 0xae200000
  .word 0x26520001
  .word 0x2a420020
  .word 0x1440fff4
  .word 0x00000000
  .word 0x8e040188
  .word 0x10800004
  .word 0x00000000
  .word 0x0c0403b0
  .word 0x00000000
  .word 0xae000188
  .word 0x8e040184
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae000184
  .word 0x0200202d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_001125D0
void func_001125d0(void)
{
    MaestroRenderNode* node;
    void (**setState)(u32, u32);

    setState = (void (**)(u32, u32))D_00960090_abs;
    (*setState)(6, 1);
    (*setState)(7, 2);
    (*setState)(8, 1);
    (*setState)(9, 1);
    (*setState)(12, 1);
    (*setState)(11, 6);
    (*setState)(10, 5);

    node = DAT_00833a4c;
    for (;;)
    {
        if (node == NULL)
        {
            break;
        }
        func_001127d0(node, true);
        node = node->next;
    }
}
// FUN_001126B0
f32 func_001126b0(void* param_1)
{
    u32 value;
    u32 offset;
    u8* output;
    u8* overrideBase;
    MaestroRenderNode* sample;

    sample = (MaestroRenderNode*)param_1;

    offset = sample->outputIndex * 0x80;
    output = sample->blob->output;
    value = *(s32*)((uintptr_t)offset + (uintptr_t)output + 0x5c) -
            *(s32*)((uintptr_t)offset + (uintptr_t)output + 0x54);
    overrideBase = output + 0x74;
    if (*(s16*)(overrideBase + offset) != 0)
    {
        value = *(s16*)(overrideBase + offset);
    }
    if (sample->xScale != 0)
    {
        value = (s32)(((u32)value * sample->xScale) >> 12);
    }
    return (f32)value;
}
// FUN_00112740
f32 func_00112740(void* param_1)
{
    u32 value;
    u32 offset;
    u8* output;
    u8* overrideBase;
    MaestroRenderNode* sample;

    sample = (MaestroRenderNode*)param_1;

    offset = sample->outputIndex * 0x80;
    output = sample->blob->output;
    value = *(s32*)((uintptr_t)offset + (uintptr_t)output + 0x60) -
            *(s32*)((uintptr_t)offset + (uintptr_t)output + 0x58);
    overrideBase = output + 0x76;
    if (*(s16*)(overrideBase + offset) != 0)
    {
        value = *(s16*)(overrideBase + offset);
    }
    if (sample->yScale != 0)
    {
        value = (s32)(((u32)value * sample->yScale) >> 12);
    }
    return (f32)value;
}
// FUN_001127D0
#ifndef PC_BUILD
asm void func_001127d0(void* param_1, u32 enabled)
{
  .set noreorder
  .word 0x27bdfde0
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080882d
  .word 0x00a0902d
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000d83
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x12400030
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
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
  .word 0x24040002
  .word 0x24050004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e22000c
  .word 0x000219c0
  .word 0x8e240008
  .word 0x8c820184
  .word 0x00621821
  .word 0x8c620014
  .word 0x00028080
  .word 0x24820104
  .word 0x00501021
  .word 0x8c420000
  .word 0x10400023
  .word 0x00000000
  .word 0xc441000c
  .word 0xc4400010
  .word 0xc4620054
  .word 0x468010a0
  .word 0xe7a20080
  .word 0x46800960
  .word 0x46051103
  .word 0xe7a40080
  .word 0xc4610058
  .word 0x46800860
  .word 0xe7a10084
  .word 0x468000e0
  .word 0x46030883
  .word 0xe7a20084
  .word 0x8c62005c
  .word 0x2442ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00098
  .word 0x46050043
  .word 0xe7a10098
  .word 0x8c620060
  .word 0x2442ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0009c
  .word 0x46030003
  .word 0xe7a0009c
  .word 0xe7a10088
  .word 0xe7a40090
  .word 0xe7a2008c
  .word 0xe7a00094
  .word 0x1240002e
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
  .word 0x8e220008
  .word 0x8c430184
  .word 0x8e22000c
  .word 0x000211c0
  .word 0x00431021
  .word 0x8c42002c
  .word 0x30420001
  .word 0x1040000a
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x8e220008
  .word 0x8c430184
  .word 0x8e22000c
  .word 0x000211c0
  .word 0x00431021
  .word 0x8c42002c
  .word 0x30420002
  .word 0x1040000a
  .word 0x00000000
  .word 0x24040002
  .word 0x24050042
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x8e22000c
  .word 0x000219c0
  .word 0x8e220008
  .word 0x8c420184
  .word 0x24420018
  .word 0x00431021
  .word 0x8c430000
  .word 0x30620002
  .word 0x10400017
  .word 0x00000000
  .word 0xdfa20080
  .word 0xffa20218
  .word 0xc7a10090
  .word 0xc7a00094
  .word 0xe7a10080
  .word 0xe7a00084
  .word 0xc7a10218
  .word 0xc7a0021c
  .word 0xe7a10090
  .word 0xe7a00094
  .word 0xc7a10088
  .word 0xc7a0008c
  .word 0xe7a10208
  .word 0xe7a0020c
  .word 0xc7a10098
  .word 0xc7a0009c
  .word 0xe7a10088
  .word 0xe7a0008c
  .word 0xc7a10208
  .word 0xc7a0020c
  .word 0xe7a10098
  .word 0xe7a0009c
  .word 0x30620001
  .word 0x10400017
  .word 0x00000000
  .word 0xdfa20080
  .word 0xffa20210
  .word 0xc7a10088
  .word 0xc7a0008c
  .word 0xe7a10080
  .word 0xe7a00084
  .word 0xc7a10210
  .word 0xc7a00214
  .word 0xe7a10088
  .word 0xe7a0008c
  .word 0xc7a10090
  .word 0xc7a00094
  .word 0xe7a10200
  .word 0xe7a00204
  .word 0xc7a10098
  .word 0xc7a0009c
  .word 0xe7a10090
  .word 0xe7a00094
  .word 0xc7a10200
  .word 0xc7a00204
  .word 0xe7a10098
  .word 0xe7a0009c
  .word 0x86220024
  .word 0x00021023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a000d0
  .word 0x86220026
  .word 0x00021023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a000d4
  .word 0x8e22000c
  .word 0x000229c0
  .word 0x8e220008
  .word 0x8c440184
  .word 0x00a41021
  .word 0x8c43005c
  .word 0x8c420054
  .word 0x00623023
  .word 0x24820074
  .word 0x00451021
  .word 0x84420000
  .word 0x10400002
  .word 0x00000000
  .word 0x0040302d
  .word 0x96220028
  .word 0x10400003
  .word 0x00000000
  .word 0x00c21018
  .word 0x00023302
  .word 0x04c00006
  .word 0x00000000
  .word 0x44860000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00061842
  .word 0x30c20001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x86220024
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000801
  .word 0xe7a000f4
  .word 0x8e22000c
  .word 0x000229c0
  .word 0x8e220008
  .word 0x8c440184
  .word 0x00a41021
  .word 0x8c430060
  .word 0x8c420058
  .word 0x00623023
  .word 0x24820076
  .word 0x00451021
  .word 0x84420000
  .word 0x10400002
  .word 0x00000000
  .word 0x0040302d
  .word 0x9622002a
  .word 0x10400003
  .word 0x00000000
  .word 0x00c21018
  .word 0x00023302
  .word 0x04c00006
  .word 0x00000000
  .word 0x44860000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00061842
  .word 0x30c20001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x86220026
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000841
  .word 0xe7a100f8
  .word 0xc7a000f4
  .word 0xe7a000dc
  .word 0xc7a000d4
  .word 0xe7a000e0
  .word 0xc7a000d0
  .word 0xe7a000e8
  .word 0xe7a100ec
  .word 0xc6230020
  .word 0x44800000
  .word 0x00000000
  .word 0x46030032
  .word 0x4501007a
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820800
  .word 0x24030001
  .word 0x3c02c334
  .word 0x44820000
  .word 0x3c024334
  .word 0x44821000
  .word 0x0000202d
  .word 0x46021836
  .word 0x0060102d
  .word 0x45000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x38420001
  .word 0x14400005
  .word 0x00000000
  .word 0x460118c1
  .word 0x0060202d
  .word 0x10000006
  .word 0x00000000
  .word 0x46001834
  .word 0x45000003
  .word 0x00000000
  .word 0x460118c0
  .word 0x0060202d
  .word 0x1480ffed
  .word 0x00000000
  .word 0xc7808168
  .word 0x46030042
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x4615ad02
  .word 0x0c130e30
  .word 0x00000000
  .word 0xc78181c4
  .word 0xc78081c8
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614085c
  .word 0xc78081cc
  .word 0x46001018
  .word 0x4601a05c
  .word 0xc78081d0
  .word 0x46001018
  .word 0x4601a05c
  .word 0xc78081d4
  .word 0x46001018
  .word 0x4601a05c
  .word 0xc78081d8
  .word 0x46001018
  .word 0x4601a01c
  .word 0x4600a042
  .word 0x3c033f00
  .word 0x44830000
  .word 0x00000000
  .word 0x4614001a
  .word 0x4601a01d
  .word 0x3c033f80
  .word 0x44830800
  .word 0x00000000
  .word 0x46000801
  .word 0x46000b01
  .word 0xc78181dc
  .word 0xc7808048
  .word 0x46001018
  .word 0x4614085c
  .word 0xc7808118
  .word 0x46001018
  .word 0x4601a05c
  .word 0xc7808050
  .word 0x46001018
  .word 0x4601a05c
  .word 0xc7808054
  .word 0x46001018
  .word 0x4601a05c
  .word 0xc78081e0
  .word 0x46001018
  .word 0x4601a05c
  .word 0x4615a002
  .word 0x46151018
  .word 0x4601035c
  .word 0x0040202d
  .word 0x3c05005d
  .word 0x24a56c28
  .word 0x0000302d
  .word 0x0c130bf0
  .word 0x00000000
  .word 0x0040902d
  .word 0x27a400a0
  .word 0x27a500d0
  .word 0x24060004
  .word 0x0240382d
  .word 0x0c131b08
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c130e20
  .word 0x00000000
  .word 0x0000202d
  .word 0x1000000e
  .word 0x00000000
  .word 0x00041040
  .word 0x00441021
  .word 0x00021080
  .word 0x005d1021
  .word 0x244300a0
  .word 0x244200d0
  .word 0xc4620000
  .word 0xc4610004
  .word 0xc4600008
  .word 0xe4420000
  .word 0xe4410004
  .word 0xe4400008
  .word 0x24840001
  .word 0x28820004
  .word 0x1440fff1
  .word 0x00000000
  .word 0x0000302d
  .word 0x8e220008
  .word 0x8c430184
  .word 0x8e22000c
  .word 0x000211c0
  .word 0x00621021
  .word 0x8c450044
  .word 0x86240024
  .word 0xc6260010
  .word 0x8c430048
  .word 0x86220026
  .word 0xc6250014
  .word 0x44840000
  .word 0x00000000
  .word 0x46800120
  .word 0x44850000
  .word 0x00000000
  .word 0x468000e0
  .word 0x44820000
  .word 0x00000000
  .word 0x468000a0
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000014
  .word 0x00000000
  .word 0x00061040
  .word 0x00461021
  .word 0x00021080
  .word 0x005d1021
  .word 0x244300d0
  .word 0x000610c0
  .word 0x005d1021
  .word 0x24420060
  .word 0xc4600000
  .word 0x46002000
  .word 0x46003000
  .word 0x46030000
  .word 0xe4400000
  .word 0xc4600004
  .word 0x46001000
  .word 0x46002800
  .word 0x46010000
  .word 0xe4400004
  .word 0x24c60001
  .word 0x28c20004
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x0000702d
  .word 0x3c020096
  .word 0xc4410088
  .word 0x24090002
  .word 0x24060003
  .word 0x3c08ff00
  .word 0x3c0700ff
  .word 0x640300ff
  .word 0x240500ff
  .word 0x30a400ff
  .word 0x100000fa
  .word 0x00000000
  .word 0x000e1180
  .word 0x005d1021
  .word 0x244a0100
  .word 0xc620002c
  .word 0x46000801
  .word 0xe5400008
  .word 0xe5560018
  .word 0x000e10c0
  .word 0x005d1021
  .word 0x24420080
  .word 0xc4400000
  .word 0xe5400010
  .word 0xc4400004
  .word 0xe5400014
  .word 0x15c90013
  .word 0x00000000
  .word 0x8e220008
  .word 0x8c4a0184
  .word 0x8e22000c
  .word 0x000211c0
  .word 0x01421021
  .word 0x8c4f0070
  .word 0x01e85024
  .word 0x000a5602
  .word 0x314d00ff
  .word 0x01e75024
  .word 0x000a5402
  .word 0x314c00ff
  .word 0x31eaff00
  .word 0x000a5202
  .word 0x314b00ff
  .word 0x31ea00ff
  .word 0x10000027
  .word 0x00000000
  .word 0x15c60013
  .word 0x00000000
  .word 0x8e220008
  .word 0x8c4a0184
  .word 0x8e22000c
  .word 0x000211c0
  .word 0x01421021
  .word 0x8c4f006c
  .word 0x01e85024
  .word 0x000a5602
  .word 0x314d00ff
  .word 0x01e75024
  .word 0x000a5402
  .word 0x314c00ff
  .word 0x31eaff00
  .word 0x000a5202
  .word 0x314b00ff
  .word 0x31ea00ff
  .word 0x10000013
  .word 0x00000000
  .word 0x8e220008
  .word 0x8c4a0184
  .word 0x8e22000c
  .word 0x000211c0
  .word 0x01421021
  .word 0x000e5080
  .word 0x004a5021
  .word 0x8d4f0064
  .word 0x01e85024
  .word 0x000a5602
  .word 0x314d00ff
  .word 0x01e75024
  .word 0x000a5402
  .word 0x314c00ff
  .word 0x31eaff00
  .word 0x000a5202
  .word 0x314b00ff
  .word 0x31ea00ff
  .word 0x922f0030
  .word 0x31ad00ff
  .word 0x01af6818
  .word 0x01a5001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00006812
  .word 0x31ad00ff
  .word 0x922f0031
  .word 0x318c00ff
  .word 0x718f6018
  .word 0x0185001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00006012
  .word 0x318c00ff
  .word 0x922f0032
  .word 0x316b00ff
  .word 0x716f5818
  .word 0x0165001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00005812
  .word 0x316b00ff
  .word 0x8c420018
  .word 0x30420008
  .word 0x1440003d
  .word 0x00000000
  .word 0x31ad00ff
  .word 0x29a10081
  .word 0x14200004
  .word 0x00000000
  .word 0x0080682d
  .word 0x10000009
  .word 0x00000000
  .word 0x000d1200
  .word 0x004d6823
  .word 0x000d11c3
  .word 0x05a10003
  .word 0x00000000
  .word 0x25a2007f
  .word 0x000211c3
  .word 0x304d00ff
  .word 0x318c00ff
  .word 0x29810081
  .word 0x14200004
  .word 0x00000000
  .word 0x0060602d
  .word 0x10000009
  .word 0x00000000
  .word 0x000c1200
  .word 0x004c6023
  .word 0x000c11c3
  .word 0x05810003
  .word 0x00000000
  .word 0x2582007f
  .word 0x000211c3
  .word 0x304c00ff
  .word 0x316b00ff
  .word 0x29610081
  .word 0x14200004
  .word 0x00000000
  .word 0x0060582d
  .word 0x10000009
  .word 0x00000000
  .word 0x000b1200
  .word 0x004b5823
  .word 0x000b11c3
  .word 0x05610003
  .word 0x00000000
  .word 0x2562007f
  .word 0x000211c3
  .word 0x304b00ff
  .word 0x314a00ff
  .word 0x29410081
  .word 0x14200004
  .word 0x00000000
  .word 0x0060502d
  .word 0x10000009
  .word 0x00000000
  .word 0x000a1200
  .word 0x004a5023
  .word 0x000a11c3
  .word 0x05410003
  .word 0x00000000
  .word 0x2542007f
  .word 0x000211c3
  .word 0x304a00ff
  .word 0x314a00ff
  .word 0x92220019
  .word 0x00a21023
  .word 0x01421018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0x304a00ff
  .word 0x92220018
  .word 0x004a082a
  .word 0x10200005
  .word 0x00000000
  .word 0x01421023
  .word 0x304a00ff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000502d
  .word 0x000e1180
  .word 0x005d1021
  .word 0x24420100
  .word 0x05a00006
  .word 0x00000000
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x000d7842
  .word 0x31ad0001
  .word 0x01ed7825
  .word 0x448f0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4400020
  .word 0x05800006
  .word 0x00000000
  .word 0x448c0000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x000c6842
  .word 0x318c0001
  .word 0x01ac6825
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4400024
  .word 0x05600006
  .word 0x00000000
  .word 0x448b0000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x000b6042
  .word 0x316b0001
  .word 0x018b6025
  .word 0x448c0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4400028
  .word 0x05400006
  .word 0x00000000
  .word 0x448a0000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x000a5842
  .word 0x314a0001
  .word 0x016a5825
  .word 0x448b0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe440002c
  .word 0x000e50c0
  .word 0x015d5021
  .word 0x254a0060
  .word 0xc5400000
  .word 0xe4400000
  .word 0xc5400004
  .word 0xe4400004
  .word 0x25ce0001
  .word 0x29c20004
  .word 0x1440ff05
  .word 0x00000000
  .word 0x8e240008
  .word 0x8c830184
  .word 0x8e22000c
  .word 0x000211c0
  .word 0x00431021
  .word 0x8c420018
  .word 0x30420008
  .word 0x1440000b
  .word 0x00000000
  .word 0x3c130096
  .word 0x26730090
  .word 0x02041021
  .word 0x24040001
  .word 0x8c450104
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x3c130096
  .word 0x26730090
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c120096
  .word 0x265200a0
  .word 0x24040004
  .word 0x27a50100
  .word 0x0080302d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e23000c
  .word 0x000339c0
  .word 0x8e240008
  .word 0x8c860184
  .word 0x00e61821
  .word 0x8c650034
  .word 0x10a00036
  .word 0x00000000
  .word 0xc7a50060
  .word 0xe7a50100
  .word 0xc7a40064
  .word 0xc4600034
  .word 0x468000e0
  .word 0x46032001
  .word 0xe7a00104
  .word 0xc7a20068
  .word 0xe7a20140
  .word 0xc7a1006c
  .word 0x46030801
  .word 0xe7a00144
  .word 0xe7a50180
  .word 0xe7a40184
  .word 0xe7a201c0
  .word 0xe7a101c4
  .word 0xc7a30080
  .word 0xe7a30110
  .word 0xc7a20084
  .word 0xe7a20114
  .word 0xc7a10088
  .word 0xe7a10150
  .word 0xc7a0008c
  .word 0xe7a00154
  .word 0xe7a30190
  .word 0xe7a20194
  .word 0xe7a101d0
  .word 0xe7a001d4
  .word 0x8c620018
  .word 0x30420008
  .word 0x14400009
  .word 0x00000000
  .word 0x02041021
  .word 0x24040001
  .word 0x8c450104
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x27a50100
  .word 0x0080302d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000139
  .word 0x00000000
  .word 0x8c650038
  .word 0x10a00036
  .word 0x00000000
  .word 0xc7a00070
  .word 0xe7a00100
  .word 0xc7a40074
  .word 0xe7a40104
  .word 0xc7a30078
  .word 0xe7a30140
  .word 0xc7a2007c
  .word 0xe7a20144
  .word 0xe7a00180
  .word 0xc4600038
  .word 0x46800060
  .word 0x46012000
  .word 0xe7a00184
  .word 0xe7a301c0
  .word 0x46011000
  .word 0xe7a001c4
  .word 0xc7a30090
  .word 0xe7a30110
  .word 0xc7a20094
  .word 0xe7a20114
  .word 0xc7a10098
  .word 0xe7a10150
  .word 0xc7a0009c
  .word 0xe7a00154
  .word 0xe7a30190
  .word 0xe7a20194
  .word 0xe7a101d0
  .word 0xe7a001d4
  .word 0x8c620018
  .word 0x30420008
  .word 0x14400009
  .word 0x00000000
  .word 0x02041021
  .word 0x24040001
  .word 0x8c450104
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x27a50100
  .word 0x0080302d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000101
  .word 0x00000000
  .word 0x24c5003c
  .word 0x00a72821
  .word 0x8ca50000
  .word 0x10a00041
  .word 0x00000000
  .word 0xc7a10060
  .word 0x46000824
  .word 0x44020000
  .word 0x00000000
  .word 0x00451023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00100
  .word 0xc7a00064
  .word 0xe7a00104
  .word 0xe7a10140
  .word 0xe7a00144
  .word 0xc7a10070
  .word 0x8c65003c
  .word 0x46000824
  .word 0x44020000
  .word 0x00000000
  .word 0x00451023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00180
  .word 0xc7a00074
  .word 0xe7a00184
  .word 0xe7a101c0
  .word 0xe7a001c4
  .word 0xc7a10080
  .word 0xe7a10110
  .word 0xc7a00084
  .word 0xe7a00114
  .word 0xe7a10150
  .word 0xe7a00154
  .word 0xc7a10090
  .word 0xe7a10190
  .word 0xc7a00094
  .word 0xe7a00194
  .word 0xe7a101d0
  .word 0xe7a001d4
  .word 0x8c620018
  .word 0x30420008
  .word 0x14400009
  .word 0x00000000
  .word 0x02041021
  .word 0x24040001
  .word 0x8c450104
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x27a50100
  .word 0x0080302d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x100000bc
  .word 0x00000000
  .word 0x8c650040
  .word 0x10a00040
  .word 0x00000000
  .word 0xc7a00068
  .word 0xe7a00100
  .word 0xc7a1006c
  .word 0xe7a10104
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00451021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00140
  .word 0xe7a10144
  .word 0xc7a00078
  .word 0xe7a00180
  .word 0xc7a1007c
  .word 0xe7a10184
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00451021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a001c0
  .word 0xe7a101c4
  .word 0xc7a10088
  .word 0xe7a10110
  .word 0xc7a0008c
  .word 0xe7a00114
  .word 0xe7a10150
  .word 0xe7a00154
  .word 0xc7a10098
  .word 0xe7a10190
  .word 0xc7a0009c
  .word 0xe7a00194
  .word 0xe7a101d0
  .word 0xe7a001d4
  .word 0x8c620018
  .word 0x30420008
  .word 0x14400009
  .word 0x00000000
  .word 0x02041021
  .word 0x24040001
  .word 0x8c450104
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x27a50100
  .word 0x0080302d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x1000007a
  .word 0x00000000
  .word 0x8625001e
  .word 0x10a00037
  .word 0x00000000
  .word 0xc7a00070
  .word 0xe7a00100
  .word 0xc7a40074
  .word 0xe7a40104
  .word 0xc7a30078
  .word 0xe7a30140
  .word 0xc7a2007c
  .word 0xe7a20144
  .word 0xe7a00180
  .word 0x44850000
  .word 0x00000000
  .word 0x46800060
  .word 0x46012000
  .word 0xe7a00184
  .word 0xe7a301c0
  .word 0x46011000
  .word 0xe7a001c4
  .word 0xc7a30090
  .word 0xe7a30110
  .word 0xc7a20094
  .word 0xe7a20114
  .word 0xc7a10098
  .word 0xe7a10150
  .word 0xc7a0009c
  .word 0xe7a00154
  .word 0xe7a30190
  .word 0xe7a20194
  .word 0xe7a101d0
  .word 0xe7a001d4
  .word 0x8c620018
  .word 0x30420008
  .word 0x14400009
  .word 0x00000000
  .word 0x02041021
  .word 0x24040001
  .word 0x8c450104
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x27a50100
  .word 0x0080302d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000041
  .word 0x00000000
  .word 0x8625001c
  .word 0x10a0003e
  .word 0x00000000
  .word 0xc7a00068
  .word 0xe7a00100
  .word 0xc7a1006c
  .word 0xe7a10104
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00451021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00140
  .word 0xe7a10144
  .word 0xc7a00078
  .word 0xe7a00180
  .word 0xc7a1007c
  .word 0xe7a10184
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00451021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a001c0
  .word 0xe7a101c4
  .word 0xc7a10088
  .word 0xe7a10110
  .word 0xc7a0008c
  .word 0xe7a00114
  .word 0xe7a10150
  .word 0xe7a00154
  .word 0xc7a10098
  .word 0xe7a10190
  .word 0xc7a0009c
  .word 0xe7a00194
  .word 0xe7a101d0
  .word 0xe7a001d4
  .word 0x8c620018
  .word 0x30420008
  .word 0x14400009
  .word 0x00000000
  .word 0x02041021
  .word 0x24040001
  .word 0x8c450104
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x27a50100
  .word 0x0080302d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0220
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants on
/* W419 mask-then-shift color extraction probe for both 00113A30/00113D80 worsened nd434,obj808 to nd549,obj816; reverted. */
/* W420 mixed int/float parameter order: nd434,obj808/window848 (rate 0.537129) -> nd424,obj808/window848 (rate 0.524752); retained. */
// FUN_00113A30
void func_00113a30(f32 depth, u32 color, f32 x, f32 y, s32 width, s32 height)
{
    RwIm2DVertex vertices[4];
    f32 corners[4][2];
    f32 farX;
    f32 farY;
    f32 recipZ;
    f32 z;
    void (**setState)(u32, u32);
    u8 r;
    u8 g;
    u8 b;
    u8 a;
    s32 i;

    recipZ = 1.0f / kwlnGetMainCamera()->nearPlane;

    r = ((color & 0xff000000) >> 24) & 0xff;
    g = ((color & 0x00ff0000) >> 16) & 0xff;
    b = ((color & 0x0000ff00) >> 8) & 0xff;
    a = color & 0xff;

    setState = (void (**)(u32, u32))D_00960090_abs;
    (*setState)(6, 1);
    (*setState)(7, 2);
    (*setState)(8, 1);
    (*setState)(9, 1);
    (*setState)(0xc, 1);
    (*setState)(0xb, 6);
    (*setState)(0xa, 5);
    (*setState)(2, 4);
    RpSkyRenderStateSet(2, (void*)0x44);
    RpSkyRenderStateSet(3, (void*)0x717fb);

    corners[0][0] = x;
    corners[0][1] = y;
    farX = x + (f32)width;
    corners[3][0] = farX;
    farY = y + (f32)height;
    corners[3][1] = farY;
    corners[1][0] = farX;
    corners[1][1] = y;
    corners[2][0] = x;
    corners[2][1] = farY;
    i = 0;
    z = *(f32*)D_00960088_abs - depth;

    for (; i < 4; i++)
    {
        RwIm2DVertex* v = &vertices[i];
        v->u.els.scrVertex.z = z;
        v->u.els.recipZ = recipZ;
        v->u.els.color.r = (f32)r;
        v->u.els.color.g = (f32)g;
        v->u.els.color.b = (f32)b;
        v->u.els.color.a = (f32)a;
        v->u.els.scrVertex.x = corners[i][0];
        v->u.els.scrVertex.y = corners[i][1];
    }

    (*setState)(1, 0);

    (*(void (**)(RwPrimitiveType, RwIm2DVertex*, s32))D_009600A0_data_abs)(rwPRIMTYPETRISTRIP, vertices, 4);
}

#pragma opt_loop_invariants off

// Same reconstruction pattern as func_001140d0 below.
/* Scoped loop-invariant pragma measured W330: without nd438, with nd434 (obj 808/848). */
#pragma opt_loop_invariants on
/* W420 mixed int/float parameter order: nd434,obj808/window848 (rate 0.537129) -> nd424,obj808/window848 (rate 0.524752); retained. */
// FUN_00113D80
void func_00113d80(f32 depth, u32 color, f32 x, f32 y, s32 width, s32 height)
{
    RwIm2DVertex vertices[4];
    f32 corners[4][2];
    f32 farX;
    f32 farY;
    f32 recipZ;
    f32 z;
    void (**setState)(u32, u32);
    u8 r;
    u8 g;
    u8 b;
    u8 a;
    s32 i;

    recipZ = 1.0f / kwlnGetMainCamera()->nearPlane;

    r = ((color & 0xff000000) >> 24) & 0xff;
    g = ((color & 0x00ff0000) >> 16) & 0xff;
    b = ((color & 0x0000ff00) >> 8) & 0xff;
    a = color & 0xff;

    setState = (void (**)(u32, u32))D_00960090_abs;
    (*setState)(6, 1);
    (*setState)(7, 2);
    (*setState)(8, 1);
    (*setState)(9, 1);
    (*setState)(0xc, 1);
    (*setState)(0xb, 6);
    (*setState)(0xa, 5);
    (*setState)(2, 4);
    RpSkyRenderStateSet(2, (void*)0x48);
    RpSkyRenderStateSet(3, (void*)0x71801);

    corners[0][0] = x;
    corners[0][1] = y;
    farX = x + (f32)width;
    corners[3][0] = farX;
    farY = y + (f32)height;
    corners[3][1] = farY;
    corners[1][0] = farX;
    corners[1][1] = y;
    corners[2][0] = x;
    corners[2][1] = farY;
    i = 0;
    z = *(f32*)D_00960088_abs - depth;

    for (; i < 4; i++)
    {
        RwIm2DVertex* v = &vertices[i];
        v->u.els.scrVertex.z = z;
        v->u.els.recipZ = recipZ;
        v->u.els.color.r = (f32)r;
        v->u.els.color.g = (f32)g;
        v->u.els.color.b = (f32)b;
        v->u.els.color.a = (f32)a;
        v->u.els.scrVertex.x = corners[i][0];
        v->u.els.scrVertex.y = corners[i][1];
    }

    (*setState)(1, 0);

    (*(void (**)(RwPrimitiveType, RwIm2DVertex*, s32))D_009600A0_data_abs)(rwPRIMTYPETRISTRIP, vertices, 4);
}
#pragma opt_loop_invariants off

/*
 * W414 signature contract: the true EE declaration order for both helpers is
 * (f32 depth, u32 color, f32 x, f32 y, s32 width, s32 height, texture).
 * Corrected declarations/call sites across all touched files:
 *   src/h_maestro.c: func_001140d0 and func_00114af0 definitions.
 *   src/datCalendar.c: func_001140d0 extern plus six calls each in
 *       func_00188c30, func_00189230, func_00189810, func_00189df0, and
 *       func_0018a3f0; func_00114af0 extern plus two calls in func_0018a9f0.
 *   src/h_fade.c: func_001140d0 extern plus the H_Fade_Day call.
 *   src/Camp/h_camp.c: hCampMainDrawQuad7/6 alias declarations, one
 *       hCampMainDrawQuad7 call in FUN_00137300, and four hCampMainDrawQuad6
 *       calls in FUN_00139FC0.
 *   src/Main/Game/game_support_late.c: func_00114af0 extern (no call site).
 */
/* Scoped loop-invariant pragma measured W330: without nd342, with nd22 (obj 884/896). */
#pragma opt_loop_invariants on
// FUN_001140D0
void func_001140d0(f32 depth,
                   u32 color,
                   f32 x,
                   f32 y,
                   s32 width,
                   s32 height,
                   const u32* textureState)
{
    RwIm2DVertex vertices[4];
    f32 corners[4][2];
    f32 farX;
    f32 farY;
    f32 recipZ;
    f32 z;
    void (**setState)(u32, u32);
    u8 r;
    u8 g;
    u8 b;
    u8 a;
    s32 i;

    recipZ = 1.0f / kwlnGetMainCamera()->nearPlane;

    r = ((color & 0xff000000) >> 24) & 0xff;
    g = ((color & 0x00ff0000) >> 16) & 0xff;
    b = ((color & 0x0000ff00) >> 8) & 0xff;
    a = color & 0xff;

    setState = (void (**)(u32, u32))D_00960090_abs;
    (*setState)(6, 1);
    (*setState)(7, 2);
    (*setState)(8, 1);
    (*setState)(9, 2);
    (*setState)(0xc, 1);
    (*setState)(0xb, 6);
    (*setState)(0xa, 5);
    (*setState)(2, 4);
    RpSkyRenderStateSet(2, (void*)0x44);
    RpSkyRenderStateSet(3, (void*)0x717fb);

    corners[0][0] = x;
    corners[0][1] = y;
    farX = x + (f32)width;
    corners[3][0] = farX;
    farY = y + (f32)height;
    corners[3][1] = farY;
    corners[1][0] = farX;
    corners[1][1] = y;
    corners[2][0] = x;
    corners[2][1] = farY;
    i = 0;
    z = *(f32*)D_00960088_abs - depth;

    for (; i < 4; i++)
    {
        RwIm2DVertex* v = &vertices[i];
        v->u.els.scrVertex.z = z;
        v->u.els.recipZ = recipZ;
        v->u.els.color.r = (f32)r;
        v->u.els.color.g = (f32)g;
        v->u.els.color.b = (f32)b;
        v->u.els.color.a = (f32)a;
        v->u.els.scrVertex.x = corners[i][0];
        v->u.els.scrVertex.y = corners[i][1];
    }

    vertices[0].u.els.u = 0.0f;
    vertices[0].u.els.v = 0.0f;
    vertices[1].u.els.u = 1.0f;
    vertices[1].u.els.v = 0.0f;
    vertices[2].u.els.u = 0.0f;
    vertices[2].u.els.v = 1.0f;
    vertices[3].u.els.u = 1.0f;
    vertices[3].u.els.v = 1.0f;

    (*setState)(1, *textureState);

    (*(void (**)(RwPrimitiveType, RwIm2DVertex*, s32))D_009600A0_data_abs)(rwPRIMTYPETRISTRIP, vertices, 4);
}
#pragma opt_loop_invariants off

/* Removing this worsens FUN_00114450 (nd988 -> nd1385) - measured W161. */
#pragma opt_loop_invariants on
/* W418 rejected color-width probes: s32 nd864,obj1680 -> nd932,obj1624; u32 -> nd948,obj1672; u16/u8 object2320 nd1708/1699; declaration/mask permutations were neutral. */
// FUN_00114450
#ifndef PC_BUILD
asm void func_00114450(f32 depth,
                   u32 color,
                   u32 colorAlpha,
                   f32 x,
                   f32 y,
                   s32 ignoredWidth,
                   s32 height,
                   const u32* textureState)
{
  .set noreorder
  .word 0x27bdfd20
  .word 0xffbf0090
  .word 0x7fb70080
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
  .word 0x46006546
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x46006dc6
  .word 0x46007586
  .word 0x00e0b02d
  .word 0x0100b82d
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000d03
  .word 0x3c02ff00
  .word 0x02221024
  .word 0x00021602
  .word 0x305500ff
  .word 0x3c0200ff
  .word 0x02221024
  .word 0x00021402
  .word 0x305400ff
  .word 0x3222ff00
  .word 0x00021202
  .word 0x305300ff
  .word 0x323200ff
  .word 0x321100ff
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
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
  .word 0x24040002
  .word 0x24050004
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
  .word 0xe7b700a0
  .word 0xe7b600a4
  .word 0x3c0243a0
  .word 0x44821800
  .word 0x00000000
  .word 0x46171880
  .word 0xe7a200b8
  .word 0x44960000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600b040
  .word 0xe7a100bc
  .word 0xe7a200a8
  .word 0xe7b600ac
  .word 0xe7b700b0
  .word 0xe7a100b4
  .word 0xe7a200c0
  .word 0xe7b600c4
  .word 0x46021800
  .word 0xe7a000d8
  .word 0xe7a100dc
  .word 0xe7a000c8
  .word 0xe7b600cc
  .word 0xe7a200d0
  .word 0xe7a100d4
  .word 0x0000202d
  .word 0x3c020096
  .word 0x24420088
  .word 0xc4400000
  .word 0x46150141
  .word 0x32a20001
  .word 0x44952000
  .word 0x32890001
  .word 0x44941800
  .word 0x32680001
  .word 0x44931000
  .word 0x32470001
  .word 0x44920800
  .word 0x10000074
  .word 0x00000000
  .word 0x00041980
  .word 0x007d1821
  .word 0x246300e0
  .word 0xe4650008
  .word 0xe4740018
  .word 0x06a00004
  .word 0x00000000
  .word 0x46802020
  .word 0x10000007
  .word 0x00000000
  .word 0x00152842
  .word 0x00a22825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4600020
  .word 0x06800004
  .word 0x00000000
  .word 0x46801820
  .word 0x10000007
  .word 0x00000000
  .word 0x00142842
  .word 0x00a92825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4600024
  .word 0x06600004
  .word 0x00000000
  .word 0x46801020
  .word 0x10000007
  .word 0x00000000
  .word 0x00132842
  .word 0x00a82825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4600028
  .word 0x06400004
  .word 0x00000000
  .word 0x46800820
  .word 0x10000007
  .word 0x00000000
  .word 0x00122842
  .word 0x00a72825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe460002c
  .word 0x000428c0
  .word 0x00bd2821
  .word 0x24a600a0
  .word 0xc4c00000
  .word 0xe4600000
  .word 0xc4c00004
  .word 0xe4600004
  .word 0xe4650108
  .word 0xe4740118
  .word 0x06a00004
  .word 0x00000000
  .word 0x46802020
  .word 0x10000007
  .word 0x00000000
  .word 0x00152842
  .word 0x00a22825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4600120
  .word 0x06800004
  .word 0x00000000
  .word 0x46801820
  .word 0x10000007
  .word 0x00000000
  .word 0x00142842
  .word 0x00a92825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4600124
  .word 0x06600004
  .word 0x00000000
  .word 0x46801020
  .word 0x10000007
  .word 0x00000000
  .word 0x00132842
  .word 0x00a82825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4600128
  .word 0x06400004
  .word 0x00000000
  .word 0x46800820
  .word 0x10000007
  .word 0x00000000
  .word 0x00122842
  .word 0x00a72825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe460012c
  .word 0xc4c00020
  .word 0xe4600100
  .word 0xc4c00024
  .word 0xe4600104
  .word 0x24840001
  .word 0x28830004
  .word 0x1460ff8b
  .word 0x00000000
  .word 0x06a00006
  .word 0x00000000
  .word 0x44950000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00151842
  .word 0x32a20001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00100
  .word 0x06800006
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00141842
  .word 0x32820001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00104
  .word 0x06600006
  .word 0x00000000
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00131842
  .word 0x32620001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00108
  .word 0x06200006
  .word 0x00000000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00111842
  .word 0x32220001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a0010c
  .word 0x06a00006
  .word 0x00000000
  .word 0x44950000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00151842
  .word 0x32a20001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00180
  .word 0x06800006
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00141842
  .word 0x32820001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00184
  .word 0x06600006
  .word 0x00000000
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00131842
  .word 0x32620001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00188
  .word 0x06200006
  .word 0x00000000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00111842
  .word 0x32220001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a0018c
  .word 0xafa000f0
  .word 0xafa000f4
  .word 0x3c033f00
  .word 0xafa30130
  .word 0xafa00134
  .word 0xafa00170
  .word 0x3c023f80
  .word 0xafa20174
  .word 0xafa301b0
  .word 0xafa201b4
  .word 0xafa301f0
  .word 0xafa001f4
  .word 0xafa20230
  .word 0xafa00234
  .word 0xafa30270
  .word 0xafa20274
  .word 0xafa202b0
  .word 0xafa202b4
  .word 0x24040001
  .word 0x8ee50000
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x261000a0
  .word 0x24040004
  .word 0x27a500e0
  .word 0x0080302d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x27a501e0
  .word 0x0080302d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0xdfbf0090
  .word 0x7bb70080
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
  .word 0x27bd02e0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants off

/*
 * W414 signature contract: func_00114af0 uses the true EE declaration
 * order (f32 depth, u32 color, f32 x, f32 y, s32 width, s32 height,
 * texture), matching func_001140d0 above.
 * Corrected declarations/call sites across all touched files:
 *   src/h_maestro.c: func_001140d0 and func_00114af0 definitions.
 *   src/datCalendar.c: func_001140d0 extern plus six calls each in
 *       func_00188c30, func_00189230, func_00189810, func_00189df0, and
 *       func_0018a3f0; func_00114af0 extern plus two calls in func_0018a9f0.
 *   src/h_fade.c: func_001140d0 extern plus the H_Fade_Day call.
 *   src/Camp/h_camp.c: hCampMainDrawQuad7/6 alias declarations, one
 *       hCampMainDrawQuad7 call in FUN_00137300, and four hCampMainDrawQuad6
 *       calls in FUN_00139FC0.
 *   src/Main/Game/game_support_late.c: func_00114af0 extern (no call site).
 */
/* W414: interleaving the integer color parameter between the float parameters, plus i = 0 before the absolute z load, reproduces the retail prologue and loop; nd22 -> 0 (obj 884/896). */
/* Scoped loop-invariant pragma measured W330: without nd342, with nd22 (obj 884/896). */
#pragma opt_loop_invariants on
// FUN_00114AF0
void func_00114af0(f32 depth,
                   u32 color,
                   f32 x,
                   f32 y,
                   s32 width,
                   s32 height,
                   const u32* textureState)
{
    RwIm2DVertex vertices[4];
    f32 corners[4][2];
    f32 farX;
    f32 farY;
    f32 recipZ;
    f32 z;
    void (**setState)(u32, u32);
    u8 r;
    u8 g;
    u8 b;
    u8 a;
    s32 i;

    recipZ = 1.0f / kwlnGetMainCamera()->nearPlane;

    r = ((color & 0xff000000) >> 24) & 0xff;
    g = ((color & 0x00ff0000) >> 16) & 0xff;
    b = ((color & 0x0000ff00) >> 8) & 0xff;
    a = color & 0xff;

    setState = (void (**)(u32, u32))D_00960090_abs;
    (*setState)(6, 1);
    (*setState)(7, 2);
    (*setState)(8, 1);
    (*setState)(9, 2);
    (*setState)(0xc, 1);
    (*setState)(0xb, 6);
    (*setState)(0xa, 5);
    (*setState)(2, 4);
    RpSkyRenderStateSet(2, (void*)0x48);
    RpSkyRenderStateSet(3, (void*)0x71801);

    corners[0][0] = x;
    corners[0][1] = y;
    farX = x + (f32)width;
    corners[3][0] = farX;
    farY = y + (f32)height;
    corners[3][1] = farY;
    corners[1][0] = farX;
    corners[1][1] = y;
    corners[2][0] = x;
    corners[2][1] = farY;
    i = 0;
    z = *(f32*)D_00960088_abs - depth;

    for (; i < 4; i++)
    {
        RwIm2DVertex* v = &vertices[i];
        v->u.els.scrVertex.z = z;
        v->u.els.recipZ = recipZ;
        v->u.els.color.r = (f32)r;
        v->u.els.color.g = (f32)g;
        v->u.els.color.b = (f32)b;
        v->u.els.color.a = (f32)a;
        v->u.els.scrVertex.x = corners[i][0];
        v->u.els.scrVertex.y = corners[i][1];
    }

    vertices[0].u.els.u = 0.0f;
    vertices[0].u.els.v = 0.0f;
    vertices[1].u.els.u = 1.0f;
    vertices[1].u.els.v = 0.0f;
    vertices[2].u.els.u = 0.0f;
    vertices[2].u.els.v = 1.0f;
    vertices[3].u.els.u = 1.0f;
    vertices[3].u.els.v = 1.0f;

    (*setState)(1, *textureState);

    (*(void (**)(RwPrimitiveType, RwIm2DVertex*, s32))D_009600A0_data_abs)(rwPRIMTYPETRISTRIP, vertices, 4);
}
#pragma opt_loop_invariants off

// Retail reconstruction: camera/state setup (0x114e70-0x114fec), vertex/color loop (0x115030-0x115164), UV/orientation staging (0x115168-0x115294), and final draw (0x1152a0-0x115300).
/* Scoped loop-invariant pragma measured W330: without nd741, with nd736 (obj 1196/1248). */
#pragma opt_loop_invariants on
// FUN_00114E70
#ifndef PC_BUILD
asm void func_00114e70(s32 orientation,
                   f32 depth,
                   u32 color,
                   f32 x,
                   f32 y,
                   f32 textureX,
                   f32 textureY,
                   s32 width,
                   s32 height,
                   const s32* textureDimensions)
{
  .set noreorder
  .word 0x27bdfde0
  .word 0xffbf00b0
  .word 0x7fbe00a0
  .word 0x7fb70090
  .word 0x7fb60080
  .word 0x7fb50070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a82d
  .word 0x46006646
  .word 0x00a0802d
  .word 0x46006e06
  .word 0x460075c6
  .word 0x46007d86
  .word 0x46008546
  .word 0x00c0b02d
  .word 0x00e0b82d
  .word 0x0100f02d
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000d03
  .word 0x3c02ff00
  .word 0x02021024
  .word 0x00021602
  .word 0x305400ff
  .word 0x3c0200ff
  .word 0x02021024
  .word 0x00021402
  .word 0x305300ff
  .word 0x3202ff00
  .word 0x00021202
  .word 0x305200ff
  .word 0x321100ff
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
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
  .word 0x24040002
  .word 0x24050004
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
  .word 0xe7b800e0
  .word 0xe7b700e4
  .word 0x44960000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600c040
  .word 0xe7a100f8
  .word 0x44970000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600b800
  .word 0xe7a000fc
  .word 0xe7a100e8
  .word 0xe7b700ec
  .word 0xe7b800f0
  .word 0xe7a000f4
  .word 0x0000102d
  .word 0x3c030096
  .word 0xc4600088
  .word 0x46190141
  .word 0x32870001
  .word 0x44942000
  .word 0x32660001
  .word 0x44931800
  .word 0x32450001
  .word 0x44921000
  .word 0x32240001
  .word 0x44910800
  .word 0x1000003e
  .word 0x00000000
  .word 0x00021980
  .word 0x007d1821
  .word 0x24680100
  .word 0xe5050008
  .word 0xe5140018
  .word 0x06800004
  .word 0x00000000
  .word 0x46802020
  .word 0x10000007
  .word 0x00000000
  .word 0x00141842
  .word 0x00671825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe5000020
  .word 0x06600004
  .word 0x00000000
  .word 0x46801820
  .word 0x10000007
  .word 0x00000000
  .word 0x00131842
  .word 0x00661825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe5000024
  .word 0x06400004
  .word 0x00000000
  .word 0x46801020
  .word 0x10000007
  .word 0x00000000
  .word 0x00121842
  .word 0x00651825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe5000028
  .word 0x06200004
  .word 0x00000000
  .word 0x46800820
  .word 0x10000007
  .word 0x00000000
  .word 0x00111842
  .word 0x00641825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe500002c
  .word 0x000218c0
  .word 0x007d1821
  .word 0x246300e0
  .word 0xc4600000
  .word 0xe5000000
  .word 0xc4600004
  .word 0xe5000004
  .word 0x24420001
  .word 0x28430004
  .word 0x1460ffc1
  .word 0x00000000
  .word 0x8fc50000
  .word 0xc4a1000c
  .word 0xc4a00010
  .word 0x46800860
  .word 0x4601b103
  .word 0xe7a400c0
  .word 0x468000e0
  .word 0x4603a883
  .word 0xe7a200c4
  .word 0x44960000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600b000
  .word 0x46010043
  .word 0xe7a100d8
  .word 0x44970000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600a800
  .word 0x46030003
  .word 0xe7a000dc
  .word 0xe7a100c8
  .word 0xe7a400d0
  .word 0xe7a200cc
  .word 0xe7a000d4
  .word 0x24020002
  .word 0x16a20017
  .word 0x00000000
  .word 0xdfa200c0
  .word 0xffa20218
  .word 0xc7a100d0
  .word 0xc7a000d4
  .word 0xe7a100c0
  .word 0xe7a000c4
  .word 0xc7a10218
  .word 0xc7a0021c
  .word 0xe7a100d0
  .word 0xe7a000d4
  .word 0xc7a100c8
  .word 0xc7a000cc
  .word 0xe7a10208
  .word 0xe7a0020c
  .word 0xc7a100d8
  .word 0xc7a000dc
  .word 0xe7a100c8
  .word 0xe7a000cc
  .word 0xc7a10208
  .word 0xc7a0020c
  .word 0xe7a100d8
  .word 0xe7a000dc
  .word 0x24020001
  .word 0x16a20017
  .word 0x00000000
  .word 0xdfa200c0
  .word 0xffa20210
  .word 0xc7a100c8
  .word 0xc7a000cc
  .word 0xe7a100c0
  .word 0xe7a000c4
  .word 0xc7a10210
  .word 0xc7a00214
  .word 0xe7a100c8
  .word 0xe7a000cc
  .word 0xc7a100d0
  .word 0xc7a000d4
  .word 0xe7a10200
  .word 0xe7a00204
  .word 0xc7a100d8
  .word 0xc7a000dc
  .word 0xe7a100d0
  .word 0xe7a000d4
  .word 0xc7a10200
  .word 0xc7a00204
  .word 0xe7a100d8
  .word 0xe7a000dc
  .word 0x0000202d
  .word 0x1000000c
  .word 0x00000000
  .word 0x000410c0
  .word 0x005d1021
  .word 0x244300c0
  .word 0x00041180
  .word 0x005d1021
  .word 0x24420100
  .word 0xc4600000
  .word 0xe4400010
  .word 0xc4600004
  .word 0xe4400014
  .word 0x24840001
  .word 0x28820004
  .word 0x1440fff3
  .word 0x00000000
  .word 0x24040001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x27a50100
  .word 0x0080302d
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0xdfbf00b0
  .word 0x7bbe00a0
  .word 0x7bb70090
  .word 0x7bb60080
  .word 0x7bb50070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0220
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants off

/* Retail 0x115350-0x1158a0 builds a four-vertex strip with inline state setup,
 * point staging, doubled-alpha channel conversion, and a final draw.  The
 * corresponding logic is reconstructed below; remaining differences are
 * compiler frame/register layout across the same retail ranges. */
/* Scoped loop-invariant pragma measured W330: without nd944, with nd911 (obj 1212/1376). */
#pragma opt_loop_invariants on
/* W417 signature-order negative: one float argument leaves no float/int class ordering; alpha permutation is semantically unsafe. */
/* W419 adding explicit final 0xff masks to the extracted channels was neutral: nd877, object1232/window1376. */
// FUN_00115350
#ifndef PC_BUILD
asm void func_00115350(f32 depth,
                   u32 color,
                   u64 point0,
                   u64 point1,
                   u64 point2,
                   u64 point3,
                   s32 alpha0,
                   s32 alpha1,
                   s32 alpha2,
                   s32 alpha3)
{
  .set noreorder
  .word 0x27bdfe20
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
  .word 0x46006546
  .word 0x0080802d
  .word 0xffa500a0
  .word 0xffa600a8
  .word 0xffa700b0
  .word 0xffa800b8
  .word 0x0120a82d
  .word 0x0140a02d
  .word 0x0160b02d
  .word 0x8fb701e0
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000d03
  .word 0x3c02ff00
  .word 0x02021024
  .word 0x00021602
  .word 0x305300ff
  .word 0x3c0200ff
  .word 0x02021024
  .word 0x00021402
  .word 0x305200ff
  .word 0x3202ff00
  .word 0x00021202
  .word 0x305100ff
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
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
  .word 0x24040002
  .word 0x24050004
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
  .word 0xc7a000a0
  .word 0xe7a000c0
  .word 0xc7a000a4
  .word 0xe7a000c4
  .word 0xc7a000a8
  .word 0xe7a000c8
  .word 0xc7a000ac
  .word 0xe7a000cc
  .word 0xc7a000b0
  .word 0xe7a000d0
  .word 0xc7a000b4
  .word 0xe7a000d4
  .word 0xc7a000b8
  .word 0xe7a000d8
  .word 0xc7a000bc
  .word 0xe7a000dc
  .word 0x0000482d
  .word 0x32640001
  .word 0x44931000
  .word 0x32430001
  .word 0x44920800
  .word 0x32220001
  .word 0x44910000
  .word 0x24050001
  .word 0x24060002
  .word 0x3c070096
  .word 0xc4e30088
  .word 0x461518c1
  .word 0x24070003
  .word 0x44972000
  .word 0x00000000
  .word 0x46802160
  .word 0x44962000
  .word 0x00000000
  .word 0x468021a0
  .word 0x44942000
  .word 0x00000000
  .word 0x468021e0
  .word 0x44952000
  .word 0x00000000
  .word 0x46802220
  .word 0x100000b5
  .word 0x00000000
  .word 0x00094180
  .word 0x011d4021
  .word 0x250800e0
  .word 0xe5030008
  .word 0xe5140018
  .word 0x1127007e
  .word 0x00000000
  .word 0x11260055
  .word 0x00000000
  .word 0x1125002c
  .word 0x00000000
  .word 0x11200003
  .word 0x00000000
  .word 0x1000009b
  .word 0x00000000
  .word 0x06600004
  .word 0x00000000
  .word 0x46801120
  .word 0x10000007
  .word 0x00000000
  .word 0x00135042
  .word 0x01445025
  .word 0x448a2000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe5040020
  .word 0x06400004
  .word 0x00000000
  .word 0x46800920
  .word 0x10000007
  .word 0x00000000
  .word 0x00125042
  .word 0x01435025
  .word 0x448a2000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe5040024
  .word 0x06200004
  .word 0x00000000
  .word 0x46800120
  .word 0x10000007
  .word 0x00000000
  .word 0x00115042
  .word 0x01425025
  .word 0x448a2000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe5040028
  .word 0xe508002c
  .word 0x10000074
  .word 0x00000000
  .word 0x06600004
  .word 0x00000000
  .word 0x46801120
  .word 0x10000007
  .word 0x00000000
  .word 0x00135042
  .word 0x01445025
  .word 0x448a2000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe5040020
  .word 0x06400004
  .word 0x00000000
  .word 0x46800920
  .word 0x10000007
  .word 0x00000000
  .word 0x00125042
  .word 0x01435025
  .word 0x448a2000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe5040024
  .word 0x06200004
  .word 0x00000000
  .word 0x46800120
  .word 0x10000007
  .word 0x00000000
  .word 0x00115042
  .word 0x01425025
  .word 0x448a2000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe5040028
  .word 0xe507002c
  .word 0x1000004d
  .word 0x00000000
  .word 0x06600004
  .word 0x00000000
  .word 0x46801120
  .word 0x10000007
  .word 0x00000000
  .word 0x00135042
  .word 0x01445025
  .word 0x448a2000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe5040020
  .word 0x06400004
  .word 0x00000000
  .word 0x46800920
  .word 0x10000007
  .word 0x00000000
  .word 0x00125042
  .word 0x01435025
  .word 0x448a2000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe5040024
  .word 0x06200004
  .word 0x00000000
  .word 0x46800120
  .word 0x10000007
  .word 0x00000000
  .word 0x00115042
  .word 0x01425025
  .word 0x448a2000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe5040028
  .word 0xe506002c
  .word 0x10000026
  .word 0x00000000
  .word 0x06600004
  .word 0x00000000
  .word 0x46801120
  .word 0x10000007
  .word 0x00000000
  .word 0x00135042
  .word 0x01445025
  .word 0x448a2000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe5040020
  .word 0x06400004
  .word 0x00000000
  .word 0x46800920
  .word 0x10000007
  .word 0x00000000
  .word 0x00125042
  .word 0x01435025
  .word 0x448a2000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe5040024
  .word 0x06200004
  .word 0x00000000
  .word 0x46800120
  .word 0x10000007
  .word 0x00000000
  .word 0x00115042
  .word 0x01425025
  .word 0x448a2000
  .word 0x00000000
  .word 0x46802120
  .word 0x46042100
  .word 0xe5040028
  .word 0xe505002c
  .word 0x000940c0
  .word 0x011d4021
  .word 0x250a00c0
  .word 0x00094180
  .word 0x011d4021
  .word 0x250800e0
  .word 0xc5440000
  .word 0xe5040000
  .word 0xc5440004
  .word 0xe5040004
  .word 0x25290001
  .word 0x29280004
  .word 0x1500ff4a
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x27a500e0
  .word 0x0080302d
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
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
  .word 0x27bd01e0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants reset
// FUN_001158B0
void* func_001158b0(param_1,param_2,param_3)
int param_1;
int param_2;
int param_3;
{

  int *piVar1;

  int *piVar2;
  int *piVar3;


  

  piVar2 = (int *)(*(void* (**)(u32,u32,u32))D_00960184_abs)(1,0x34,0x40000);

  *(u8 *)(piVar2 + 0xc) = 0xff;

  *(u8 *)((int)piVar2 + 0x31) = 0xff;

  *(u8 *)((int)piVar2 + 0x32) = 0xff;

  piVar2[2] = param_2;

  piVar2[3] = param_3;

  if (param_1 == 0) {

    piVar1 = DAT_007cdf3c;

    if (DAT_007cdf3c == (int *)0x0) {
      DAT_007cdf3c = piVar2;

      piVar2[1] = 0;

    }

    else {
      while (1) {
        piVar3 = (int *)*piVar1;
        if (piVar3 == (int *)0x0) {
          *piVar1 = (int)piVar2;
          piVar2[1] = (int)piVar1;
          break;
        }
        piVar1 = piVar3;
      }
    }

  }

  else {

    *(u32 *)param_1 = (u32)piVar2;

    piVar2[1] = (int)(u32 *)param_1;

  }
  return (void *)piVar2;
}
// FUN_00115980


void func_00115980(int *param_1)



{

  int *piVar1;

  

  piVar1 = (int *)param_1[1];

  if (piVar1 == (int *)0x0) {

    DAT_007cdf3c = (int*)*param_1;

    if (DAT_007cdf3c != 0) {

      DAT_007cdf3c[1] = 0;

    }

  }

  else {

    *piVar1 = *param_1;

    if (*param_1 != 0) {

      *(int **)(*param_1 + 4) = piVar1;

    }

  }

  MAESTRO_FREE(param_1);

  return;

}
// FUN_001159F0


void func_001159f0(int unused0, int unused1, int unused2,
                   f32 param_1, f32 param_2, u8 param_4, f32 param_3)



{

  int *piVar1;

  int *piVar2;

  void* uVar3;


  

  uVar3 = func_001158b0(0);

  piVar2 = (int *)uVar3;

  ((f32 *)piVar2)[0xb] = param_3;

  ((f32 *)piVar2)[4] = param_1;

  ((f32 *)piVar2)[5] = param_2;
  *(u8 *)(piVar2 + 6) = param_4;
  FUN_001127d0(uVar3,1);

  piVar1 = (int *)piVar2[1];

  if (piVar1 == (int *)0x0) {

    DAT_007cdf3c = (int*)*piVar2;

    if (DAT_007cdf3c != 0) {

      DAT_007cdf3c[1] = 0;

    }

  }

  else {

    *piVar1 = *piVar2;

    if (*piVar2 != 0) {

      *(int **)(*piVar2 + 4) = piVar1;

    }

  }

  MAESTRO_FREE((void*)uVar3);

  return;

}
// FUN_00115AD0


void func_00115ad0(int unused0, int unused1, int unused2,
                   f32 param_1, f32 param_2, u8 param_4, u8 param_5,
                   f32 param_3)



{

  int *piVar1;

  int *piVar2;

  void* uVar3;


  

  uVar3 = func_001158b0(0);

  piVar2 = (int *)uVar3;

  ((f32 *)piVar2)[0xb] = param_3;

  ((f32 *)piVar2)[4] = param_1;

  ((f32 *)piVar2)[5] = param_2;

  *(u8 *)(piVar2 + 6) = param_4;

  *(u8 *)((int)piVar2 + 0x19) = param_5;

  FUN_001127d0(uVar3,1);

  piVar1 = (int *)piVar2[1];

  if (piVar1 == (int *)0x0) {

    DAT_007cdf3c = (int*)*piVar2;

    if (DAT_007cdf3c != 0) {

      DAT_007cdf3c[1] = 0;

    }

  }

  else {

    *piVar1 = *piVar2;

    if (*piVar2 != 0) {

      *(int **)(*piVar2 + 4) = piVar1;

    }

  }

  MAESTRO_FREE((void*)uVar3);

  return;

}

// FUN_00115BC0

void func_00115bc0(int unused0, int unused1, int unused2,
                   f32 param_1, f32 param_2, u8 param_4, u8 param_5,
                   u8 param_6, u8 param_7, f32 param_3)


{

  int *piVar2;

  int *piVar1;

  void* uVar3;




  uVar3 = func_001158b0(0);
  piVar2 = (int *)uVar3;


  ((f32 *)piVar2)[0xb] = param_3;

  ((f32 *)piVar2)[4] = param_1;

  ((f32 *)piVar2)[5] = param_2;

  *(u8 *)(piVar2 + 6) = param_4;

  *(u8 *)(piVar2 + 0xc) = param_5;

  *(u8 *)((int)piVar2 + 0x31) = param_6;

  *(u8 *)((int)piVar2 + 0x32) = param_7;

  FUN_001127d0(piVar2,1);
  piVar1 = (int *)piVar2[1];

  if (piVar1 == (int *)0x0) {

    DAT_007cdf3c = (int*)*piVar2;

    if (DAT_007cdf3c != 0) {


      DAT_007cdf3c[1] = 0;
    }

  }

  else {

    *piVar1 = *piVar2;

    if (*piVar2 != 0) {

      *(int **)(*piVar2 + 4) = piVar1;

    }

  }

  MAESTRO_FREE((void*)piVar2);

  return;

}

// FUN_00115CD0


void func_00115cd0(int unused0, int unused1, int unused2,
                   f32 param_1, f32 param_2, u8 param_4, u8 param_5,
                   u8 param_6, u8 param_7, f32 param_3)



{

  int *piVar1;

  int *piVar2;

  void* uVar3;


  

  uVar3 = func_001158b0(0);

  piVar2 = (int *)uVar3;

  ((f32 *)piVar2)[0xb] = param_3;

  ((f32 *)piVar2)[4] = param_1;

  ((f32 *)piVar2)[5] = param_2;

  *(u8 *)(piVar2 + 6) = param_4;

  *(u8 *)(piVar2 + 0xc) = param_5;

  *(u8 *)((int)piVar2 + 0x31) = param_6;

  *(u8 *)((int)piVar2 + 0x32) = param_7;

  FUN_001127d0(piVar2,0);

  piVar1 = (int *)piVar2[1];

  if (piVar1 == (int *)0x0) {

    DAT_007cdf3c = (int*)*piVar2;

    if (DAT_007cdf3c != 0) {

      DAT_007cdf3c[1] = 0;

    }

  }

  else {

    *piVar1 = *piVar2;

    if (*piVar2 != 0) {

      *(int **)(*piVar2 + 4) = piVar1;

    }

  }

  MAESTRO_FREE((void*)piVar2);

  return;

}

/* W419 probes: direct pointer-return use, pointer-return alias, and matching sibling local order all stayed nd16,obj280/window288. */
/* W421 row classification: verify nd16, object280/window288, rate0.057143.
 * Offsets 0x34/0x38/0x3c/0x40 are move $s4,$a3 / move $s3,$a3;
 * move $s3,$t0 / move $s2,$t0; move $s2,$t1 / move $s1,$t1; and
 * move $s1,$t2 / move $s0,$t2. Offset 0x58 is move $s0,$v0 / move $s4,$v0.
 * Offsets 0x68/0x6c/0x70 are sb $s3,0x18($v0) / sb $s2,0x18($v0);
 * sb $s2,0x30($v0) / sb $s1,0x30($v0); and sb $s1,0x31($v0) / sb $s0,0x31($v0).
 * Offsets 0x78/0x7c are sh $s4,0x28($v0) / sh $s3,0x28($v0) and
 * sh $s4,0x2a($v0) / sh $s3,0x2a($v0); 0x80 is move $a0,$s0 / move $a0,$s4.
 * Offsets 0x90/0x9c/0xb8/0xc0 are lw $v1,4($s0) / lw $v1,4($s4) and
 * lw $v0,($s0) / lw $v0,($s4) at each offset; 0xd0 is move $a0,$s0 / move $a0,$s4
 * (candidate / retail): saved-register colouring from the extra u16 argument. */

// FUN_00115DE0


#ifndef PC_BUILD
asm void func_00115de0(int unused0, int unused1, int unused2,
                   f32 param_1, f32 param_2, u16 param_4, u8 param_5,
                   u8 param_6, u8 param_7, u8 param_8, f32 param_3)
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
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x46006586
  .word 0x46006d46
  .word 0x00e0982d
  .word 0x0100902d
  .word 0x0120882d
  .word 0x0140802d
  .word 0x0160a82d
  .word 0x46007506
  .word 0x0000202d
  .word 0x0c04562c
  .word 0x00000000
  .word 0x0040a02d
  .word 0xe454002c
  .word 0xe4560010
  .word 0xe4550014
  .word 0xa0520018
  .word 0xa0510030
  .word 0xa0500031
  .word 0xa0550032
  .word 0xa4530028
  .word 0xa453002a
  .word 0x0280202d
  .word 0x24050001
  .word 0x0c0449f4
  .word 0x00000000
  .word 0x8e830004
  .word 0x14600008
  .word 0x00000000
  .word 0x8e820000
  .word 0xaf82b24c
  .word 0x1040000a
  .word 0x00000000
  .word 0xac400004
  .word 0x10000007
  .word 0x00000000
  .word 0x8e820000
  .word 0xac620000
  .word 0x8e820000
  .word 0x10400002
  .word 0x00000000
  .word 0xac430004
  .word 0x0280202d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_loop_invariants on
// FUN_00115F00


#ifndef PC_BUILD
asm u32 func_00115f00(KwlnTask* param_1)
{
  .set noreorder
  .word 0x27bdfea0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x8c91003c
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
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
  .word 0x8e220000
  .word 0x2c410006
  .word 0x10200175
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24635360
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e260004
  .word 0x24020009
  .word 0x14c20008
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05005d
  .word 0x24a56c40
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e230004
  .word 0x24020001
  .word 0x14620008
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05005d
  .word 0x24a56c70
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05005d
  .word 0x24a56c90
  .word 0x8e260004
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a40050
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae220024
  .word 0x24020001
  .word 0xae220000
  .word 0x10000141
  .word 0x00000000
  .word 0x8e240024
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x1040013c
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000014
  .word 0x00000000
  .word 0x00101140
  .word 0x00501823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02221021
  .word 0x24530190
  .word 0x8e240024
  .word 0x0200282d
  .word 0x24460198
  .word 0x0c040840
  .word 0x00000000
  .word 0xae620000
  .word 0x3c04005d
  .word 0x24846cb8
  .word 0x0040282d
  .word 0x0c0409c8
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020003
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x24020028
  .word 0xa7a20150
  .word 0x24060003
  .word 0xa7a60152
  .word 0x8e250004
  .word 0x240200ea
  .word 0x10a20090
  .word 0x00000000
  .word 0x240200e9
  .word 0x10a20087
  .word 0x00000000
  .word 0x24020067
  .word 0x10a2007f
  .word 0x00000000
  .word 0x24020011
  .word 0x10a20076
  .word 0x00000000
  .word 0x24020010
  .word 0x10a2006d
  .word 0x00000000
  .word 0x2402000f
  .word 0x10a20065
  .word 0x00000000
  .word 0x2404000a
  .word 0x10a4005d
  .word 0x00000000
  .word 0x24030009
  .word 0x10a3004a
  .word 0x00000000
  .word 0x24020008
  .word 0x10a20042
  .word 0x00000000
  .word 0x24020007
  .word 0x10a2003a
  .word 0x00000000
  .word 0x24020006
  .word 0x10a20033
  .word 0x00000000
  .word 0x24020005
  .word 0x10a2002b
  .word 0x00000000
  .word 0x24020004
  .word 0x10a20024
  .word 0x00000000
  .word 0x10a6001d
  .word 0x00000000
  .word 0x24020002
  .word 0x10a20015
  .word 0x00000000
  .word 0x24020001
  .word 0x10a20003
  .word 0x00000000
  .word 0x10000066
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x2402000a
  .word 0xa7a20154
  .word 0x24020002
  .word 0xa7a20156
  .word 0x1000005c
  .word 0x00000000
  .word 0x2402000a
  .word 0xa7a20154
  .word 0xa7a00156
  .word 0x10000057
  .word 0x00000000
  .word 0xa7a40154
  .word 0x24020001
  .word 0xa7a20156
  .word 0x10000052
  .word 0x00000000
  .word 0xa7a40154
  .word 0x24020002
  .word 0xa7a20156
  .word 0x1000004d
  .word 0x00000000
  .word 0xa7a40154
  .word 0xa7a60156
  .word 0x10000049
  .word 0x00000000
  .word 0xa7a40154
  .word 0x24020004
  .word 0xa7a20156
  .word 0x10000044
  .word 0x00000000
  .word 0xa7a40154
  .word 0xa7a30156
  .word 0x10000040
  .word 0x00000000
  .word 0xa7a40154
  .word 0x24020005
  .word 0xa7a20156
  .word 0x1000003b
  .word 0x00000000
  .word 0xa7a40154
  .word 0x24020006
  .word 0xa7a20156
  .word 0x10000036
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x2402000b
  .word 0xa7a20154
  .word 0x24020004
  .word 0xa7a20156
  .word 0x1000002c
  .word 0x00000000
  .word 0x2402000a
  .word 0xa7a20154
  .word 0x24020007
  .word 0xa7a20156
  .word 0x10000026
  .word 0x00000000
  .word 0xa7a40154
  .word 0x24020008
  .word 0xa7a20156
  .word 0x10000021
  .word 0x00000000
  .word 0x2402000b
  .word 0xa7a20154
  .word 0xa7a00156
  .word 0x1000001c
  .word 0x00000000
  .word 0x2402000b
  .word 0xa7a20154
  .word 0x24020001
  .word 0xa7a20156
  .word 0x10000016
  .word 0x00000000
  .word 0x2402000b
  .word 0xa7a20154
  .word 0x24020002
  .word 0xa7a20156
  .word 0x10000010
  .word 0x00000000
  .word 0x2402000b
  .word 0xa7a20154
  .word 0xa7a60156
  .word 0x1000000b
  .word 0x00000000
  .word 0x2402000b
  .word 0xa7a20154
  .word 0x24020005
  .word 0xa7a20156
  .word 0x10000005
  .word 0x00000000
  .word 0x2402000b
  .word 0xa7a20154
  .word 0x24020006
  .word 0xa7a20156
  .word 0x0240202d
  .word 0xdfa50150
  .word 0x26260748
  .word 0x0c044498
  .word 0x00000000
  .word 0xae220014
  .word 0x24020028
  .word 0xa7a20150
  .word 0x24020003
  .word 0xa7a20152
  .word 0x2402000b
  .word 0xa7a20154
  .word 0x24020009
  .word 0xa7a20156
  .word 0x0240202d
  .word 0xdfa50150
  .word 0x262603e4
  .word 0x0c044498
  .word 0x00000000
  .word 0xae220010
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c04455c
  .word 0x00000000
  .word 0x24020028
  .word 0xa7a20150
  .word 0x24020003
  .word 0xa7a20152
  .word 0x2402000b
  .word 0xa7a20154
  .word 0x24020008
  .word 0xa7a20156
  .word 0x0240202d
  .word 0xdfa50150
  .word 0x26260080
  .word 0x0c044498
  .word 0x00000000
  .word 0xae22000c
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c04455c
  .word 0x00000000
  .word 0x8e240024
  .word 0x24050003
  .word 0x27a6015c
  .word 0x0c040840
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0d3f34
  .word 0x00000000
  .word 0xae220aac
  .word 0x8e240024
  .word 0x24050004
  .word 0x27a6015c
  .word 0x0c040840
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0d3f34
  .word 0x00000000
  .word 0xae220ab0
  .word 0x24020002
  .word 0xae220000
  .word 0x10000048
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0c04452c
  .word 0x00000000
  .word 0x10400043
  .word 0x00000000
  .word 0x8e240010
  .word 0x0c04452c
  .word 0x00000000
  .word 0x1040003e
  .word 0x00000000
  .word 0x8e240014
  .word 0x0c04452c
  .word 0x00000000
  .word 0x10400039
  .word 0x00000000
  .word 0x24020003
  .word 0xae220000
  .word 0x10000035
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0c04454c
  .word 0x00000000
  .word 0x8e240010
  .word 0x0c04454c
  .word 0x00000000
  .word 0x8e240014
  .word 0x0c04454c
  .word 0x00000000
  .word 0x24020005
  .word 0xae220000
  .word 0x10000028
  .word 0x00000000
  .word 0x8e220014
  .word 0x1040000b
  .word 0x00000000
  .word 0x8e220070
  .word 0x24420001
  .word 0xae220070
  .word 0x8e240014
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24030003
  .word 0x14430002
  .word 0x00000000
  .word 0xae200014
  .word 0x8e22007c
  .word 0x10400012
  .word 0x00000000
  .word 0x8e220074
  .word 0x24430001
  .word 0xae230074
  .word 0x2402000f
  .word 0x1062000c
  .word 0x00000000
  .word 0x28610010
  .word 0x14200009
  .word 0x00000000
  .word 0x8e22006c
  .word 0x2442000f
  .word 0x0062102a
  .word 0x14400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000008
  .word 0x00000000
  .word 0x8e220078
  .word 0x10400004
  .word 0x00000000
  .word 0xae200078
  .word 0x24020001
  .word 0xae22007c
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0160
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants reset

#pragma opt_loop_invariants off
// FUN_001165C0


void func_001165c0(int param_1)



{

  int iVar1;

  int *slot;

  int iVar2;

  int *p;

  

  iVar1 = *(int *)(param_1 + 0x3c);

  if (*(int *)(iVar1 + 400) != 0) {

    FUN_00102870(*(void **)(iVar1 + 400));

  }

  if (*(int *)(iVar1 + 0x4f4) != 0) {

    FUN_00102870(*(void **)(iVar1 + 0x4f4));

  }

  if (*(int *)(iVar1 + 0x858) != 0) {

    FUN_00102870(*(void **)(iVar1 + 0x858));

  }

  if (*(int *)(iVar1 + 0x24) != 0) {

    FUN_00100ec0(*(void **)(iVar1 + 0x24));

    *(u32 *)(iVar1 + 0x24) = 0;

  }

  p = (int *)iVar1;
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    slot = p + iVar2 + 0x2ab;
    if (*slot != 0) {
      FUN_0034fcf0(*slot);
      *slot = 0;
    }
  }

  MAESTRO_FREE((void*)iVar1);

  return;

}

// FUN_001166A0
void* func_001166a0(KwlnTask* parent, u32 param_2, u32 param_3)
{
    void* work;
    KwlnTask* task;

    work = MAESTRO_ALLOC(1, 0xab4, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = (KwlnTask*)FUN_00194b80(parent, 0x106f, D_005D6CD0,
                                   func_00115f00, func_001165c0, work);
    if (task == NULL)
    {
        return NULL;
    }
    *(u32*)((u8*)work + 4) = param_2;
    *(u32*)((u8*)work + 8) = param_3;
    return task;
}

// FUN_00116760


u8 func_00116760(int param_1)



{

  return **(int **)(param_1 + 0x3c) == 3;

}

// FUN_00116780


void func_00116780(int param_1)



{

  **(u32 **)(param_1 + 0x3c) = 4;

  return;

}

// FUN_001167A0


void func_001167a0(int param_1)



{

  *(u32 *)(*(int *)(param_1 + 0x3c) + 0x78) = 1;

  return;

}

// FUN_001167C0


u32 func_001167c0(int param_1,u32 param_2)



{

  u32 base;
  u32 idx;

  base = *(u32 *)(param_1 + 0x3c);

  if (param_2 == 0) {

    return 0x33;

  }

  idx = param_2 * 4;

  idx += base;

  return *(u32 *)(idx + 0x68);

}

// FUN_001167F0


#ifndef PC_BUILD
asm u32 func_001167f0(u32 param_1)
{
  .set noreorder
  .word 0x27bdfea0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x8c91003c
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
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
  .word 0x8e220000
  .word 0x2c410006
  .word 0x10200104
  .word 0x00000000
  .word 0x3c03007b
  .word 0x246353e0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e220004
  .word 0x2c41000b
  .word 0x1020004b
  .word 0x00000000
  .word 0x3c03007b
  .word 0x246353b0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05005d
  .word 0x24a56ce0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000042
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05005d
  .word 0x24a56d00
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000003b
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05005d
  .word 0x24a56d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000034
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05005d
  .word 0x24a56d40
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000002d
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05005d
  .word 0x24a56d60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000026
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05005d
  .word 0x24a56d80
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05005d
  .word 0x24a56da0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05005d
  .word 0x24a56dc0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05005d
  .word 0x24a56de0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05005d
  .word 0x24a56ce0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a40050
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae220024
  .word 0x24020001
  .word 0xae220000
  .word 0x100000a1
  .word 0x00000000
  .word 0x8e240024
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x1040009c
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000014
  .word 0x00000000
  .word 0x00101140
  .word 0x00501823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02221021
  .word 0x24530180
  .word 0x8e240024
  .word 0x0200282d
  .word 0x24460188
  .word 0x0c040840
  .word 0x00000000
  .word 0xae620000
  .word 0x3c04005d
  .word 0x24846e00
  .word 0x0040282d
  .word 0x0c0409c8
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020002
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x24020029
  .word 0xa7a20150
  .word 0x24040004
  .word 0xa7a40152
  .word 0x2402000a
  .word 0xa7a20154
  .word 0x8e220004
  .word 0x2c41000b
  .word 0x1020002e
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24635380
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0xa7a00156
  .word 0x10000025
  .word 0x00000000
  .word 0x24020001
  .word 0xa7a20156
  .word 0x10000021
  .word 0x00000000
  .word 0x24020002
  .word 0xa7a20156
  .word 0x1000001d
  .word 0x00000000
  .word 0x24020003
  .word 0xa7a20156
  .word 0x10000019
  .word 0x00000000
  .word 0xa7a40156
  .word 0x10000016
  .word 0x00000000
  .word 0x24020005
  .word 0xa7a20156
  .word 0x10000012
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x24020008
  .word 0xa7a20156
  .word 0x1000000a
  .word 0x00000000
  .word 0x24020006
  .word 0xa7a20156
  .word 0x10000006
  .word 0x00000000
  .word 0x24020007
  .word 0xa7a20156
  .word 0x10000002
  .word 0x00000000
  .word 0xa7a00156
  .word 0x0240202d
  .word 0xdfa50150
  .word 0x26260070
  .word 0x0c044498
  .word 0x00000000
  .word 0xae220008
  .word 0x8e240024
  .word 0x24050001
  .word 0x27a6015c
  .word 0x0c040840
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c044908
  .word 0x00000000
  .word 0xae220738
  .word 0x24020002
  .word 0xae220000
  .word 0x10000038
  .word 0x00000000
  .word 0x8e240008
  .word 0x0c04452c
  .word 0x00000000
  .word 0x10400033
  .word 0x00000000
  .word 0x8e240738
  .word 0x0c0447cc
  .word 0x00000000
  .word 0x1040002e
  .word 0x00000000
  .word 0x8e240008
  .word 0x24050032
  .word 0x0c044548
  .word 0x00000000
  .word 0x24020003
  .word 0xae220000
  .word 0x10000026
  .word 0x00000000
  .word 0x8e240008
  .word 0x0c04454c
  .word 0x00000000
  .word 0x0240202d
  .word 0x8e250738
  .word 0x0c045d24
  .word 0x00000000
  .word 0xae220010
  .word 0x24020005
  .word 0xae220000
  .word 0x1000001a
  .word 0x00000000
  .word 0x8e230064
  .word 0x28620032
  .word 0x1440000b
  .word 0x00000000
  .word 0x8e22006c
  .word 0x1040000a
  .word 0x00000000
  .word 0x24620001
  .word 0xae220064
  .word 0x8e240008
  .word 0x0c044540
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xae220064
  .word 0x8e240008
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24030003
  .word 0x14430004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0160
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00116CF0


void func_00116cf0(int param_1)
{
    u8* work;
    void** entry;

    work = *(u8**)(param_1 + 0x3c);
    func_001124b0(*(void**)(work + 0x738));
    {
        s32 i;

        for (i = 0; i < 2; i++)
        {
            entry = (void**)(work + i * 0x364 + 0x180);
            if (*entry != NULL)
            {
                H_Cdvd_CacheRemove(*entry);
                *entry = NULL;
            }
        }
    }
    {
        s32 i;

        for (i = 0; i < 3; i++)
        {
            entry = (void**)(work + i * 4 + 0x24);
            if (*entry != NULL)
            {
                FUN_00100ec0(*entry);
                *entry = NULL;
            }
        }
    }
    {
        s32 i;

        for (i = 0; i < 2; i++)
        {
            entry = (void**)(work + i * 4 + 0x1c);
            if (*entry != NULL)
            {
                func_004d0f00(*entry);
                *entry = NULL;
            }
        }
    }
    MAESTRO_FREE(work);
}

// FUN_00116E20
void* func_00116e20(KwlnTask* parent, u32 param_2)
{
    void* work;
    KwlnTask* task;

    work = MAESTRO_ALLOC(1, 0x73c, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = (KwlnTask*)FUN_00194b80(parent, 0x106f, D_005D6E10,
                                   func_001167f0, func_00116cf0, work);
    if (task == NULL)
    {
        return NULL;
    }
    *(u32*)((u8*)work + 4) = param_2;
    return task;
}

// FUN_00116ED0


u8 func_00116ed0(int param_1)



{

  return **(int **)(param_1 + 0x3c) == 3;

}





/* Scoped loop-invariant pragma measured W330: without nd4402, with nd4399 (obj 6732/7296). */
// FUN_00116EF0


void func_00116ef0(int param_1)



{

  **(u32 **)(param_1 + 0x3c) = 4;

  return;

}
// FUN_00116F10


u32 func_00116f10(void)



{

  return 0x3f;

}

// FUN_00116F20


u32 func_00116f20(int param_1)



{

  return *(u32 *)(*(int *)(param_1 + 0x3c) + 100);

}























// Deep reconstruction pass restored per-state HSFD_TABLE lookups to use
// work->id directly (matching retail) instead of a cached movieId local,
// removed several dead/duplicate locals (decoder, rasterTarget, redundant
// config declaration, unused state local), and typed the render-state
// function pointer table access explicitly. object_size grew toward the
// retail window as genuine logic was restored; normalized_diff moved
// slightly worse, which is expected for this class of fix.










/* W318 measured: opt_loop_invariants on changes c1a0 nd25->0. */


/* W318 measured: opt_common_subs off changes c7d0 nd406->385; object676/window752. */

#pragma opt_common_subs reset

// FUN_00116F30


u32 func_00116f30(int param_1)



{

  return 0x31 < *(int *)(*(int *)(param_1 + 0x3c) + 100);

}

/* W318 measured: opt_loop_invariants on changes cdd0 nd1487->1332; object2032/window2336. */
// FUN_00116F50


void func_00116f50(int param_1)



{

  int iVar1;

  

  iVar1 = *(int *)(param_1 + 0x3c);

  *(u32 *)(iVar1 + 0x6c) = 1;

  FUN_00117470(*(u32 *)(iVar1 + 0x10));

  return;

}

// FUN_00116F80


#ifndef PC_BUILD
asm void* func_00116f80(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x8c91003c
  .word 0x8e230000
  .word 0x24040004
  .word 0x106400f5
  .word 0x00000000
  .word 0x24020003
  .word 0x106200ba
  .word 0x00000000
  .word 0x24060002
  .word 0x1066006b
  .word 0x00000000
  .word 0x24020001
  .word 0x10620021
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000010f
  .word 0x00000000
  .word 0x2402029a
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00068
  .word 0x3c0342f0
  .word 0xafa3006c
  .word 0x3c02433b
  .word 0xafa20060
  .word 0xafa30064
  .word 0xffa40000
  .word 0x24020008
  .word 0xffa20008
  .word 0x3c0242c8
  .word 0x44826000
  .word 0x26240014
  .word 0x0000282d
  .word 0x0000382d
  .word 0xdfa80068
  .word 0xdfa90060
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c062f04
  .word 0x00000000
  .word 0x24020001
  .word 0xae220000
  .word 0x100000f3
  .word 0x00000000
  .word 0x26240014
  .word 0x0c062dc0
  .word 0x00000000
  .word 0x104000ee
  .word 0x00000000
  .word 0x26300014
  .word 0xc62c0044
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040902d
  .word 0xc60c0038
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c04005d
  .word 0x24846e20
  .word 0x0240282d
  .word 0x0040302d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e030020
  .word 0x8e020018
  .word 0x14620004
  .word 0x00000000
  .word 0xae200004
  .word 0x24020002
  .word 0xae220000
  .word 0x0000202d
  .word 0x8e250010
  .word 0x0000302d
  .word 0x0c04562c
  .word 0x00000000
  .word 0x0040882d
  .word 0x3c0342c8
  .word 0xac43002c
  .word 0xc6000038
  .word 0xe4400010
  .word 0xc600003c
  .word 0xe4400014
  .word 0x24030010
  .word 0xa4430024
  .word 0x24030060
  .word 0xa4430026
  .word 0x8e030020
  .word 0x8e020018
  .word 0x00621823
  .word 0x24020004
  .word 0x00431823
  .word 0x00031080
  .word 0x00431821
  .word 0x00031080
  .word 0x00621821
  .word 0x00031083
  .word 0x04610003
  .word 0x00000000
  .word 0x24620003
  .word 0x00021083
  .word 0x2442fffb
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6200020
  .word 0xa2200018
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c0449f4
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c045660
  .word 0x00000000
  .word 0x100000ac
  .word 0x00000000
  .word 0x26240014
  .word 0x0c062dc0
  .word 0x00000000
  .word 0x104000a7
  .word 0x00000000
  .word 0x26300014
  .word 0x0000202d
  .word 0x8e250010
  .word 0x0000302d
  .word 0x0c04562c
  .word 0x00000000
  .word 0x0040902d
  .word 0x8e220004
  .word 0x24430001
  .word 0xae230004
  .word 0x28610003
  .word 0x1020000f
  .word 0x00000000
  .word 0x00031100
  .word 0x00431823
  .word 0x00031040
  .word 0x0003187c
  .word 0x0003187f
  .word 0x04410003
  .word 0x00000000
  .word 0x24420001
  .word 0x00021843
  .word 0x2402001e
  .word 0x00431023
  .word 0x2443fff6
  .word 0x10000015
  .word 0x00000000
  .word 0x28610006
  .word 0x1020000e
  .word 0x00000000
  .word 0x2463fffd
  .word 0x00031080
  .word 0x00431021
  .word 0x00021840
  .word 0x0002107c
  .word 0x0002107f
  .word 0x04610003
  .word 0x00000000
  .word 0x24620001
  .word 0x00021043
  .word 0x2443fff6
  .word 0x10000005
  .word 0x00000000
  .word 0x0000182d
  .word 0x24020003
  .word 0xae220000
  .word 0xae200004
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6400020
  .word 0x3c0242c8
  .word 0xae42002c
  .word 0xc6000038
  .word 0xe6400010
  .word 0xc600003c
  .word 0xe6400014
  .word 0x24020010
  .word 0xa6420024
  .word 0x24020060
  .word 0xa6420026
  .word 0xa2400018
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0449f4
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c045660
  .word 0x00000000
  .word 0x10000060
  .word 0x00000000
  .word 0x26240014
  .word 0x0c062dc0
  .word 0x00000000
  .word 0x1040001a
  .word 0x00000000
  .word 0x26300014
  .word 0x0000202d
  .word 0x8e250010
  .word 0x0000302d
  .word 0x0c04562c
  .word 0x00000000
  .word 0x0040902d
  .word 0x3c0342c8
  .word 0xac43002c
  .word 0xc6000038
  .word 0xe4400010
  .word 0xc600003c
  .word 0xe4400014
  .word 0x24030010
  .word 0xa4430024
  .word 0x24030060
  .word 0xa4430026
  .word 0xa0400018
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0449f4
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c045660
  .word 0x00000000
  .word 0x8e22000c
  .word 0x1040003f
  .word 0x00000000
  .word 0x3c02433b
  .word 0xafa20058
  .word 0x3c0242f0
  .word 0xafa2005c
  .word 0xffa00000
  .word 0x2402000a
  .word 0xffa20008
  .word 0x3c0242c8
  .word 0x44826000
  .word 0x26240014
  .word 0x0000282d
  .word 0x24060002
  .word 0x00c0382d
  .word 0xdfa80058
  .word 0x0100482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c062f04
  .word 0x00000000
  .word 0x24020004
  .word 0xae220000
  .word 0x10000028
  .word 0x00000000
  .word 0x26240014
  .word 0x0c062dc0
  .word 0x00000000
  .word 0x10400023
  .word 0x00000000
  .word 0x26300014
  .word 0x8e230034
  .word 0x8e22002c
  .word 0x14620005
  .word 0x00000000
  .word 0xae200004
  .word 0x2402ffff
  .word 0x1000001b
  .word 0x00000000
  .word 0x0000202d
  .word 0x8e250010
  .word 0x0000302d
  .word 0x0c04562c
  .word 0x00000000
  .word 0x0040882d
  .word 0x3c0342c8
  .word 0xac43002c
  .word 0xc6000038
  .word 0xe4400010
  .word 0xc600003c
  .word 0xe4400014
  .word 0x24030010
  .word 0xa4430024
  .word 0x24030060
  .word 0xa4430026
  .word 0x8e030040
  .word 0xa0430018
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c0449f4
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c045660
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00117440
void func_00117440(KwlnTask* task)
{
    MAESTRO_FREE(task->workData);
}

// FUN_00117470
void func_00117470(KwlnTask* task)
{
    *(u32*)((u8*)task->workData + 0x0c) = 1;
}

// FUN_00117490
KwlnTask* func_00117490(KwlnTask* parent, void* blob)
{
    void* work;
    KwlnTask* task;

    work = MAESTRO_ALLOC(1, 0x58, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreate(parent, D_005D6E48, 0x18b5,
                          func_00116f80, func_00117440, work);
    if (task == NULL)
    {
        return NULL;
    }
    *(void**)((u8*)work + 0x10) = blob;
    return task;
}

#pragma opt_loop_invariants on
/* W420 collateral from twin ABI reorder: nd4399,obj6732/window7296 (rate 0.653446) -> nd4404,obj6736/window7296 (rate 0.653800); retained for the twin improvement. */
// FUN_00117540
#ifndef PC_BUILD
asm void* func_00117540(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdfe20
  .word 0xffbf0090
  .word 0x7fb50080
  .word 0x7fb40070
  .word 0x7fb30060
  .word 0x7fb20050
  .word 0x7fb10040
  .word 0x7fb00030
  .word 0xe7b50024
  .word 0xe7b40020
  .word 0x0080a02d
  .word 0x8c90003c
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c110096
  .word 0x26310090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000b
  .word 0x24050006
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050005
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e020000
  .word 0x2c410006
  .word 0x102006dd
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24635400
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0xae000004
  .word 0x0000182d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00031080
  .word 0x02021021
  .word 0x8c420008
  .word 0x10400004
  .word 0x00000000
  .word 0x8e020004
  .word 0x24420001
  .word 0xae020004
  .word 0x24630001
  .word 0x28620003
  .word 0x1440fff5
  .word 0x00000000
  .word 0x8e020004
  .word 0x10400003
  .word 0x00000000
  .word 0x2442ffff
  .word 0xae020004
  .word 0x0c05f600
  .word 0x00000000
  .word 0x104000a2
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020002
  .word 0x10620057
  .word 0x00000000
  .word 0x24020001
  .word 0x10620022
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000fa
  .word 0x00000000
  .word 0x8e060008
  .word 0x24020009
  .word 0x14c20008
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a400c0
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae02005c
  .word 0x3c04005d
  .word 0x24846ec0
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae020058
  .word 0x100000dd
  .word 0x00000000
  .word 0x8e060008
  .word 0x24020009
  .word 0x14c20008
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a400c0
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae02005c
  .word 0x8e06000c
  .word 0x24020009
  .word 0x14c20008
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a400c0
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae020060
  .word 0x3c04005d
  .word 0x24846ee0
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae020058
  .word 0x100000ab
  .word 0x00000000
  .word 0x8e060008
  .word 0x24020009
  .word 0x14c20008
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a400c0
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae02005c
  .word 0x8e06000c
  .word 0x24020009
  .word 0x14c20008
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a400c0
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae020060
  .word 0x8e060010
  .word 0x24020009
  .word 0x14c20008
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a400c0
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae020064
  .word 0x3c04005d
  .word 0x24846f00
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae020058
  .word 0x10000064
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020002
  .word 0x10620039
  .word 0x00000000
  .word 0x24020001
  .word 0x10620018
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000059
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x8e060008
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a400c0
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae02005c
  .word 0x3c04005d
  .word 0x24846f20
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae020058
  .word 0x10000046
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x8e060008
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a400c0
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae02005c
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x8e06000c
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a400c0
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae020060
  .word 0x3c04005d
  .word 0x24846f40
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae020058
  .word 0x10000028
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x8e060008
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a400c0
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae02005c
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x8e06000c
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a400c0
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae020060
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x8e060010
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a400c0
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae020064
  .word 0x3c04005d
  .word 0x24846f60
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae020058
  .word 0x24020001
  .word 0xae020000
  .word 0x100005b5
  .word 0x00000000
  .word 0x24120001
  .word 0x0000882d
  .word 0x1000000c
  .word 0x00000000
  .word 0x00111080
  .word 0x02021021
  .word 0x8c440058
  .word 0x10800006
  .word 0x00000000
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x14400002
  .word 0x00000000
  .word 0x0000902d
  .word 0x26310001
  .word 0x2a220009
  .word 0x1440fff3
  .word 0x00000000
  .word 0x124005a1
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000062
  .word 0x00000000
  .word 0x001110c0
  .word 0x00511823
  .word 0x00031080
  .word 0x00431023
  .word 0x00021040
  .word 0x02029021
  .word 0x26250001
  .word 0x8e040058
  .word 0x27a601dc
  .word 0x0c040840
  .word 0x00000000
  .word 0x26440088
  .word 0x0040282d
  .word 0x2406002a
  .word 0x0c148494
  .word 0x00000000
  .word 0x26250001
  .word 0x8e040058
  .word 0x27a601dc
  .word 0x0c040840
  .word 0x00000000
  .word 0x00111880
  .word 0x02034021
  .word 0x2503007c
  .word 0x2447002a
  .word 0xad07007c
  .word 0x25060108
  .word 0xad000108
  .word 0x0000482d
  .word 0x2405fffe
  .word 0x2404ffff
  .word 0x10000013
  .word 0x00000000
  .word 0x000910c0
  .word 0x00491021
  .word 0x00021040
  .word 0x00e21021
  .word 0x80420001
  .word 0x14450006
  .word 0x00000000
  .word 0x8cc20000
  .word 0x2442ffff
  .word 0xacc20000
  .word 0x1000000a
  .word 0x00000000
  .word 0x14440004
  .word 0x00000000
  .word 0x8d020108
  .word 0x24420001
  .word 0xad020108
  .word 0x25290001
  .word 0x292203e8
  .word 0x1440ffec
  .word 0x00000000
  .word 0x001110c0
  .word 0x00512023
  .word 0x00041080
  .word 0x00441023
  .word 0x00021040
  .word 0x02029021
  .word 0x00111080
  .word 0x02029821
  .word 0x86470090
  .word 0x0280202d
  .word 0x240518c0
  .word 0x8c660000
  .word 0x0c0440f8
  .word 0x00000000
  .word 0xae62001c
  .word 0x0000a82d
  .word 0x10000016
  .word 0x00000000
  .word 0x24020002
  .word 0x16a20004
  .word 0x00000000
  .word 0x24050001
  .word 0x10000007
  .word 0x00000000
  .word 0x16a00004
  .word 0x00000000
  .word 0x24050003
  .word 0x10000002
  .word 0x00000000
  .word 0x24050004
  .word 0x00151040
  .word 0x02421021
  .word 0x8e64001c
  .word 0x84460092
  .word 0x8447009a
  .word 0x844800a2
  .word 0x0c044188
  .word 0x00000000
  .word 0x26b50001
  .word 0x2aa20003
  .word 0x1440ffe9
  .word 0x00000000
  .word 0x26310001
  .word 0x8e020004
  .word 0x24420001
  .word 0x0222102a
  .word 0x1440ff9b
  .word 0x00000000
  .word 0x8e040058
  .word 0x0000282d
  .word 0x27a601d8
  .word 0x0c040840
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c044908
  .word 0x00000000
  .word 0xae0207ec
  .word 0x0c05f600
  .word 0x00000000
  .word 0x104001c5
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020002
  .word 0x106200f9
  .word 0x00000000
  .word 0x24020001
  .word 0x10620063
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000033d
  .word 0x00000000
  .word 0x8e060008
  .word 0x24020009
  .word 0x14c20008
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x0c148eb2
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x240200f6
  .word 0xffa20018
  .word 0x0000202d
  .word 0x27a500c0
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020028
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x240200f7
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05005d
  .word 0x24a56f90
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae02002c
  .word 0x0000882d
  .word 0x10000014
  .word 0x00000000
  .word 0x00111140
  .word 0x00511823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02021021
  .word 0x24520234
  .word 0x26250003
  .word 0x8e040058
  .word 0x2446023c
  .word 0x0c040840
  .word 0x00000000
  .word 0xae420000
  .word 0x3c04005d
  .word 0x24846fb8
  .word 0x0040282d
  .word 0x0c0409c8
  .word 0x00000000
  .word 0x26310001
  .word 0x1a20ffec
  .word 0x00000000
  .word 0x24020028
  .word 0xa7a201c8
  .word 0x24020001
  .word 0xa7a201ca
  .word 0x2402000a
  .word 0xa7a201cc
  .word 0x24020005
  .word 0xa7a201ce
  .word 0x0280202d
  .word 0x240518c0
  .word 0xdfa601c8
  .word 0x26070124
  .word 0x0c0444e0
  .word 0x00000000
  .word 0xae020014
  .word 0x100002df
  .word 0x00000000
  .word 0x8e060008
  .word 0x24020009
  .word 0x14c20008
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x0c148eb2
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x2402010c
  .word 0xffa20018
  .word 0x0000202d
  .word 0x27a500c0
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020028
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x2402010d
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05005d
  .word 0x24a56f90
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae02002c
  .word 0x8e06000c
  .word 0x24020009
  .word 0x14c20008
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x0c148eb2
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x24020113
  .word 0xffa20018
  .word 0x0000202d
  .word 0x27a500c0
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020030
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x24020115
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05005d
  .word 0x24a56f90
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020034
  .word 0x0000882d
  .word 0x10000014
  .word 0x00000000
  .word 0x00111140
  .word 0x00511823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02021021
  .word 0x24520234
  .word 0x26250004
  .word 0x8e040058
  .word 0x2446023c
  .word 0x0c040840
  .word 0x00000000
  .word 0xae420000
  .word 0x3c04005d
  .word 0x24846fb8
  .word 0x0040282d
  .word 0x0c0409c8
  .word 0x00000000
  .word 0x26310001
  .word 0x1a20ffec
  .word 0x00000000
  .word 0x24020028
  .word 0xa7a201c8
  .word 0x24020001
  .word 0xa7a201ca
  .word 0x2402000b
  .word 0xa7a201cc
  .word 0x24020005
  .word 0xa7a201ce
  .word 0x0280202d
  .word 0x240518c0
  .word 0xdfa601c8
  .word 0x26070124
  .word 0x0c0444e0
  .word 0x00000000
  .word 0xae020014
  .word 0x1000024c
  .word 0x00000000
  .word 0x8e060008
  .word 0x24020009
  .word 0x14c20008
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x0c148eb2
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x2402012b
  .word 0xffa20018
  .word 0x0000202d
  .word 0x27a500c0
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020028
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x2402012c
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05005d
  .word 0x24a56f90
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae02002c
  .word 0x8e06000c
  .word 0x24020009
  .word 0x14c20008
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x0c148eb2
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x24020132
  .word 0xffa20018
  .word 0x0000202d
  .word 0x27a500c0
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020030
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x24020133
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05005d
  .word 0x24a56f90
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020034
  .word 0x8e060010
  .word 0x24020009
  .word 0x14c20008
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e60
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x0c148eb2
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x24020139
  .word 0xffa20018
  .word 0x0000202d
  .word 0x27a500c0
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020038
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x2402013a
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05005d
  .word 0x24a56f90
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae02003c
  .word 0x0000882d
  .word 0x10000014
  .word 0x00000000
  .word 0x00111140
  .word 0x00511823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02021021
  .word 0x24520234
  .word 0x26250005
  .word 0x8e040058
  .word 0x2446023c
  .word 0x0c040840
  .word 0x00000000
  .word 0xae420000
  .word 0x3c04005d
  .word 0x24846fb8
  .word 0x0040282d
  .word 0x0c0409c8
  .word 0x00000000
  .word 0x26310001
  .word 0x1a20ffec
  .word 0x00000000
  .word 0x24020028
  .word 0xa7a201c8
  .word 0x24020002
  .word 0xa7a201ca
  .word 0x2402000a
  .word 0xa7a201cc
  .word 0x24020005
  .word 0xa7a201ce
  .word 0x0280202d
  .word 0x240518c0
  .word 0xdfa601c8
  .word 0x26070124
  .word 0x0c0444e0
  .word 0x00000000
  .word 0xae020014
  .word 0x10000184
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020002
  .word 0x106200d9
  .word 0x00000000
  .word 0x24020001
  .word 0x10620058
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000179
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x8e060008
  .word 0x0c148eb2
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x2402014d
  .word 0xffa20018
  .word 0x0000202d
  .word 0x27a500c0
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020028
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x2402014e
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05005d
  .word 0x24a56f90
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae02002c
  .word 0x0000882d
  .word 0x10000014
  .word 0x00000000
  .word 0x00111140
  .word 0x00511823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02021021
  .word 0x24520234
  .word 0x26250003
  .word 0x8e040058
  .word 0x2446023c
  .word 0x0c040840
  .word 0x00000000
  .word 0xae420000
  .word 0x3c04005d
  .word 0x24846fb8
  .word 0x0040282d
  .word 0x0c0409c8
  .word 0x00000000
  .word 0x26310001
  .word 0x1a20ffec
  .word 0x00000000
  .word 0x24020028
  .word 0xa7a201c8
  .word 0x24020001
  .word 0xa7a201ca
  .word 0x2402000a
  .word 0xa7a201cc
  .word 0xa7a001ce
  .word 0x0280202d
  .word 0x240518c0
  .word 0xdfa601c8
  .word 0x26070124
  .word 0x0c0444e0
  .word 0x00000000
  .word 0xae020014
  .word 0x10000126
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x8e060008
  .word 0x0c148eb2
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x2402015e
  .word 0xffa20018
  .word 0x0000202d
  .word 0x27a500c0
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020028
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x2402015f
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05005d
  .word 0x24a56f90
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae02002c
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x8e06000c
  .word 0x0c148eb2
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x24020161
  .word 0xffa20018
  .word 0x0000202d
  .word 0x27a500c0
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020030
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x24020162
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05005d
  .word 0x24a56f90
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020034
  .word 0x0000882d
  .word 0x10000014
  .word 0x00000000
  .word 0x00111140
  .word 0x00511823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02021021
  .word 0x24520234
  .word 0x26250004
  .word 0x8e040058
  .word 0x2446023c
  .word 0x0c040840
  .word 0x00000000
  .word 0xae420000
  .word 0x3c04005d
  .word 0x24846fb8
  .word 0x0040282d
  .word 0x0c0409c8
  .word 0x00000000
  .word 0x26310001
  .word 0x1a20ffec
  .word 0x00000000
  .word 0x24020028
  .word 0xa7a201c8
  .word 0x24020001
  .word 0xa7a201ca
  .word 0x2402000b
  .word 0xa7a201cc
  .word 0xa7a001ce
  .word 0x0280202d
  .word 0x240518c0
  .word 0xdfa601c8
  .word 0x26070124
  .word 0x0c0444e0
  .word 0x00000000
  .word 0xae020014
  .word 0x100000a8
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x8e060008
  .word 0x0c148eb2
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x24020172
  .word 0xffa20018
  .word 0x0000202d
  .word 0x27a500c0
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020028
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x24020174
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05005d
  .word 0x24a56f90
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae02002c
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x8e06000c
  .word 0x0c148eb2
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x24020176
  .word 0xffa20018
  .word 0x0000202d
  .word 0x27a500c0
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020030
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x24020178
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05005d
  .word 0x24a56f90
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020034
  .word 0x27a400c0
  .word 0x3c05005d
  .word 0x24a56e90
  .word 0x8e060010
  .word 0x0c148eb2
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x2402017a
  .word 0xffa20018
  .word 0x0000202d
  .word 0x27a500c0
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020038
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24426f80
  .word 0xffa20010
  .word 0x2402017c
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05005d
  .word 0x24a56f90
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae02003c
  .word 0x0000882d
  .word 0x10000014
  .word 0x00000000
  .word 0x00111140
  .word 0x00511823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02021021
  .word 0x24520234
  .word 0x26250005
  .word 0x8e040058
  .word 0x2446023c
  .word 0x0c040840
  .word 0x00000000
  .word 0xae420000
  .word 0x3c04005d
  .word 0x24846fb8
  .word 0x0040282d
  .word 0x0c0409c8
  .word 0x00000000
  .word 0x26310001
  .word 0x1a20ffec
  .word 0x00000000
  .word 0x24020028
  .word 0xa7a201c8
  .word 0x24020002
  .word 0xa7a201ca
  .word 0x2402000a
  .word 0xa7a201cc
  .word 0xa7a001ce
  .word 0x0280202d
  .word 0x240518c0
  .word 0xdfa601c8
  .word 0x26070124
  .word 0x0c0444e0
  .word 0x00000000
  .word 0xae020014
  .word 0x24020002
  .word 0xae020000
  .word 0x100001e0
  .word 0x00000000
  .word 0x24120001
  .word 0x8e0407ec
  .word 0x0c0447cc
  .word 0x00000000
  .word 0x14400002
  .word 0x00000000
  .word 0x0000902d
  .word 0x0000882d
  .word 0x10000018
  .word 0x00000000
  .word 0x00111080
  .word 0x02021821
  .word 0x24740040
  .word 0x8c620040
  .word 0x14400011
  .word 0x00000000
  .word 0x24730028
  .word 0x8c640028
  .word 0x1080000d
  .word 0x00000000
  .word 0x27a501d4
  .word 0x0000302d
  .word 0x0c0430e8
  .word 0x00000000
  .word 0xae820000
  .word 0x8fa201d4
  .word 0x14400004
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000002
  .word 0x00000000
  .word 0xae600000
  .word 0x26310001
  .word 0x2a220006
  .word 0x1440ffe7
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000000c
  .word 0x00000000
  .word 0x00111080
  .word 0x02021021
  .word 0x8c44001c
  .word 0x10800006
  .word 0x00000000
  .word 0x0c04412c
  .word 0x00000000
  .word 0x14400002
  .word 0x00000000
  .word 0x0000902d
  .word 0x26310001
  .word 0x2a220003
  .word 0x1440fff3
  .word 0x00000000
  .word 0x124001a9
  .word 0x00000000
  .word 0x8e040014
  .word 0x0c04452c
  .word 0x00000000
  .word 0x104001a4
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020002
  .word 0x1062004e
  .word 0x00000000
  .word 0x24020001
  .word 0x1062001d
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000089
  .word 0x00000000
  .word 0x8e050040
  .word 0x8ca30050
  .word 0x3c02ffff
  .word 0x344400ff
  .word 0x00641024
  .word 0x34423300
  .word 0xaca20050
  .word 0x8e030044
  .word 0x8c620050
  .word 0x00441024
  .word 0x34423300
  .word 0xac620050
  .word 0x8e04001c
  .word 0x0000282d
  .word 0x8e060044
  .word 0x0c044174
  .word 0x00000000
  .word 0x8e04001c
  .word 0x24050001
  .word 0x8e060040
  .word 0x0c044174
  .word 0x00000000
  .word 0x10000071
  .word 0x00000000
  .word 0x8e050040
  .word 0x8ca30050
  .word 0x3c02ffff
  .word 0x344400ff
  .word 0x00641024
  .word 0x34423300
  .word 0xaca20050
  .word 0x8e030044
  .word 0x8c620050
  .word 0x00441024
  .word 0x34423300
  .word 0xac620050
  .word 0x8e04001c
  .word 0x0000282d
  .word 0x8e060044
  .word 0x0c044174
  .word 0x00000000
  .word 0x8e04001c
  .word 0x24050001
  .word 0x8e060040
  .word 0x0c044174
  .word 0x00000000
  .word 0x8e050048
  .word 0x8ca30050
  .word 0x3c02ffff
  .word 0x344400ff
  .word 0x00641024
  .word 0x34423300
  .word 0xaca20050
  .word 0x8e03004c
  .word 0x8c620050
  .word 0x00441024
  .word 0x34423300
  .word 0xac620050
  .word 0x8e040020
  .word 0x0000282d
  .word 0x8e06004c
  .word 0x0c044174
  .word 0x00000000
  .word 0x8e040020
  .word 0x24050001
  .word 0x8e060048
  .word 0x0c044174
  .word 0x00000000
  .word 0x10000043
  .word 0x00000000
  .word 0x8e050040
  .word 0x8ca30050
  .word 0x3c02ffff
  .word 0x344400ff
  .word 0x00641024
  .word 0x34423300
  .word 0xaca20050
  .word 0x8e030044
  .word 0x8c620050
  .word 0x00441024
  .word 0x34423300
  .word 0xac620050
  .word 0x8e04001c
  .word 0x0000282d
  .word 0x8e060044
  .word 0x0c044174
  .word 0x00000000
  .word 0x8e04001c
  .word 0x24050001
  .word 0x8e060040
  .word 0x0c044174
  .word 0x00000000
  .word 0x8e050048
  .word 0x8ca30050
  .word 0x3c02ffff
  .word 0x344400ff
  .word 0x00641024
  .word 0x34423300
  .word 0xaca20050
  .word 0x8e03004c
  .word 0x8c620050
  .word 0x00441024
  .word 0x34423300
  .word 0xac620050
  .word 0x8e040020
  .word 0x0000282d
  .word 0x8e06004c
  .word 0x0c044174
  .word 0x00000000
  .word 0x8e040020
  .word 0x24050001
  .word 0x8e060048
  .word 0x0c044174
  .word 0x00000000
  .word 0x8e050050
  .word 0x8ca30050
  .word 0x3c02ffff
  .word 0x344400ff
  .word 0x00641024
  .word 0x34423300
  .word 0xaca20050
  .word 0x8e030054
  .word 0x8c620050
  .word 0x00441024
  .word 0x34423300
  .word 0xac620050
  .word 0x8e040024
  .word 0x0000282d
  .word 0x8e060054
  .word 0x0c044174
  .word 0x00000000
  .word 0x8e040024
  .word 0x24050001
  .word 0x8e060050
  .word 0x0c044174
  .word 0x00000000
  .word 0x24020003
  .word 0xae020000
  .word 0x1000010d
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020002
  .word 0x10620015
  .word 0x00000000
  .word 0x24020001
  .word 0x1062000a
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x8e04001c
  .word 0x0c044134
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x8e04001c
  .word 0x0c044134
  .word 0x00000000
  .word 0x8e040020
  .word 0x0c044134
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x8e04001c
  .word 0x0c044134
  .word 0x00000000
  .word 0x8e040020
  .word 0x0c044134
  .word 0x00000000
  .word 0x8e040024
  .word 0x0c044134
  .word 0x00000000
  .word 0x8e040014
  .word 0x0c04454c
  .word 0x00000000
  .word 0x0280202d
  .word 0x8e050004
  .word 0x8e0607ec
  .word 0x0c046658
  .word 0x00000000
  .word 0x24020005
  .word 0xae020000
  .word 0x100000e0
  .word 0x00000000
  .word 0x8e030114
  .word 0x2862000a
  .word 0x144000b6
  .word 0x00000000
  .word 0x2463fff6
  .word 0x2861001e
  .word 0x1020001a
  .word 0x00000000
  .word 0x3c0242c8
  .word 0x44826000
  .word 0x28610005
  .word 0x10200008
  .word 0x00000000
  .word 0x00031200
  .word 0x00431823
  .word 0x24020005
  .word 0x0062001a
  .word 0x00001812
  .word 0x10000002
  .word 0x00000000
  .word 0x240300ff
  .word 0x3c020f39
  .word 0x34425600
  .word 0x00622025
  .word 0x44806800
  .word 0x00000000
  .word 0x46006b86
  .word 0x24050280
  .word 0x240601c0
  .word 0x0c044e8c
  .word 0x00000000
  .word 0x10000099
  .word 0x00000000
  .word 0x2463ffe2
  .word 0x28610029
  .word 0x14200004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x100000b9
  .word 0x00000000
  .word 0x00031100
  .word 0x00431823
  .word 0x00031080
  .word 0x00431023
  .word 0x000218c0
  .word 0x2402000a
  .word 0x0062001a
  .word 0x00008812
  .word 0x0000902d
  .word 0x10000084
  .word 0x00000000
  .word 0x00121080
  .word 0x00521821
  .word 0x00031080
  .word 0x00621021
  .word 0x00021100
  .word 0x24040018
  .word 0x0044001a
  .word 0x00001012
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x26430001
  .word 0x00031080
  .word 0x00431821
  .word 0x00031080
  .word 0x00621021
  .word 0x00021100
  .word 0x7044001a
  .word 0x70001012
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0xc7828248
  .word 0x46011002
  .word 0x3c024334
  .word 0x44820800
  .word 0x00000000
  .word 0x46010543
  .word 0x46031002
  .word 0x46010503
  .word 0x00000000
  .word 0x00000000
  .word 0x4600ab06
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x3c02447a
  .word 0x44820800
  .word 0x00000000
  .word 0x46000802
  .word 0xe7a000a0
  .word 0x4600ab06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c02447a
  .word 0x44820800
  .word 0x00000000
  .word 0x46000802
  .word 0xe7a000a4
  .word 0x4600a306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x3c02447a
  .word 0x44820800
  .word 0x00000000
  .word 0x46000802
  .word 0xe7a000a8
  .word 0x4600a306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c02447a
  .word 0x44820800
  .word 0x00000000
  .word 0x46000802
  .word 0xe7a000ac
  .word 0x4600ab06
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x44910800
  .word 0x00000000
  .word 0x46800860
  .word 0x46000802
  .word 0xe7a000b0
  .word 0x4600ab06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x44910800
  .word 0x00000000
  .word 0x46800860
  .word 0x46000802
  .word 0xe7a000b4
  .word 0x4600a306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x44910800
  .word 0x00000000
  .word 0x46800860
  .word 0x46000802
  .word 0xe7a000b8
  .word 0x4600a306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x44910800
  .word 0x00000000
  .word 0x46800860
  .word 0x46000802
  .word 0xe7a000bc
  .word 0x0000182d
  .word 0x3c0243a0
  .word 0x44821000
  .word 0x3c024360
  .word 0x44820800
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200a0
  .word 0xc4400000
  .word 0x46020000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46010000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x240900ff
  .word 0xffa90000
  .word 0x3c0242c8
  .word 0x44826000
  .word 0x3c020f39
  .word 0x344456ff
  .word 0xdfa500a0
  .word 0xdfa600a8
  .word 0xdfa700b0
  .word 0xdfa800b8
  .word 0x0120502d
  .word 0x0120582d
  .word 0x0c0454d4
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420018
  .word 0x1440ff7b
  .word 0x00000000
  .word 0x8e020114
  .word 0x24420001
  .word 0xae020114
  .word 0x0000882d
  .word 0x10000009
  .word 0x00000000
  .word 0x00111080
  .word 0x02021021
  .word 0x8c44001c
  .word 0x10800003
  .word 0x00000000
  .word 0x0c044144
  .word 0x00000000
  .word 0x26310001
  .word 0x2a220003
  .word 0x1440fff6
  .word 0x00000000
  .word 0x8e030114
  .word 0x8e020108
  .word 0x0062102a
  .word 0x14400011
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000000b
  .word 0x00000000
  .word 0x00121080
  .word 0x02021021
  .word 0x2451001c
  .word 0x8c44001c
  .word 0x10800004
  .word 0x00000000
  .word 0x0c065408
  .word 0x00000000
  .word 0xae200000
  .word 0x26520001
  .word 0x2a420003
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0090
  .word 0x7bb50080
  .word 0x7bb40070
  .word 0x7bb30060
  .word 0x7bb20050
  .word 0x7bb10040
  .word 0x7bb00030
  .word 0xc7b50024
  .word 0xc7b40020
  .word 0x27bd01e0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001191C0
void func_001191c0(KwlnTask* task)
{
    MaestroPerEffectWork* work;
    void** entry;

    work = (MaestroPerEffectWork*)task->workData;
    if (work->archiveCacheRequest != NULL)
    {
        H_Cdvd_CacheRemove(work->archiveCacheRequest);
    }
    func_001124b0(work->blob);
    {
        s32 i;

        for (i = 0; i < 9; i++)
        {
            entry = (void**)&work->cdvd[i];
            if (work->cdvd[i] != NULL)
            {
                H_Cdvd_Destroy(work->cdvd[i]);
                *entry = NULL;
            }
        }
    }
    {
        s32 i;

        for (i = 0; i < 6; i++)
        {
            entry = &work->loadedResources[i];
            if (work->loadedResources[i] != NULL)
            {
                func_004d0f00(work->loadedResources[i]);
                *entry = NULL;
            }
        }
    }
    MAESTRO_FREE(work);
}
/* W318 measured: opt_loop_invariants on changes dd10 nd67->0; ddc0 nd48->0; de40 nd79->0. */
// FUN_001192B0
KwlnTask* func_001192b0(KwlnTask* parent, const u32* config)
{
    MaestroPerEffectWork* work;
    KwlnTask* task;

    work = (MaestroPerEffectWork*)MAESTRO_ALLOC(1, sizeof(MaestroPerEffectWork), 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreate(parent, D_005D6FD0, 0x18bf,
                          func_00117540, func_001191c0, work);
    if (task == NULL)
    {
        return NULL;
    }
    work->effectIds[0] = config[0];
    work->effectIds[1] = config[1];
    work->effectIds[2] = config[2];
    return task;
}
// FUN_00119380
u32 func_00119380(KwlnTask* task)
{
    return ((MaestroMarkSpriteWork*)task->workData)->state == 3;
}
// FUN_001193A0
void func_001193a0(KwlnTask* task)
{
    ((MaestroMarkSpriteWork*)task->workData)->state = 4;
}
// FUN_001193C0
u32 func_001193c0(void)
{
    return 0x28;
}


/* W318 measured: opt_loop_invariants on changes df60 nd69->14; object stays 168/176. */
// FUN_001193D0
#ifndef PC_BUILD
asm void* func_001193d0(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x8c91003c
  .word 0x8e250000
  .word 0x24040004
  .word 0x10a40112
  .word 0x00000000
  .word 0x24020003
  .word 0x10a200de
  .word 0x00000000
  .word 0x24060002
  .word 0x10a600ac
  .word 0x00000000
  .word 0x24030001
  .word 0x10a3005a
  .word 0x00000000
  .word 0x10a00003
  .word 0x00000000
  .word 0x10000135
  .word 0x00000000
  .word 0x8e220004
  .word 0x10460038
  .word 0x00000000
  .word 0x1043001d
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000049
  .word 0x00000000
  .word 0x3c024328
  .word 0xafa20068
  .word 0x3c02c298
  .word 0xafa2006c
  .word 0x3c024384
  .word 0xafa20060
  .word 0x3c02430d
  .word 0xafa20064
  .word 0xffa40000
  .word 0x24020008
  .word 0xffa20008
  .word 0x3c0242c8
  .word 0x44826000
  .word 0x26240010
  .word 0x0000282d
  .word 0x0000382d
  .word 0xdfa80068
  .word 0xdfa90060
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c062f04
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0x3c0242a8
  .word 0xafa20068
  .word 0x3c02c31e
  .word 0xafa2006c
  .word 0x3c024363
  .word 0xafa20060
  .word 0x3c024298
  .word 0xafa20064
  .word 0x24020008
  .word 0xffa20000
  .word 0x2402000a
  .word 0xffa20008
  .word 0x3c0242c8
  .word 0x44826000
  .word 0x26240010
  .word 0x0000282d
  .word 0x0000382d
  .word 0xdfa80068
  .word 0xdfa90060
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c062f04
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x3c024328
  .word 0xafa20068
  .word 0x3c02c298
  .word 0xafa2006c
  .word 0x3c024384
  .word 0xafa20060
  .word 0x3c02430d
  .word 0xafa20064
  .word 0x2402000d
  .word 0xffa20000
  .word 0x2402000f
  .word 0xffa20008
  .word 0x3c0242c8
  .word 0x44826000
  .word 0x26240010
  .word 0x0000282d
  .word 0x0000382d
  .word 0xdfa80068
  .word 0xdfa90060
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c062f04
  .word 0x00000000
  .word 0x24020001
  .word 0xae220000
  .word 0x100000e0
  .word 0x00000000
  .word 0x26240010
  .word 0x0c062dc0
  .word 0x00000000
  .word 0x104000db
  .word 0x00000000
  .word 0x26300010
  .word 0x0000202d
  .word 0x8e250054
  .word 0x0000302d
  .word 0x0c04562c
  .word 0x00000000
  .word 0x0040902d
  .word 0xc6000024
  .word 0xe440002c
  .word 0xc6000038
  .word 0xe4400010
  .word 0xc600003c
  .word 0xe4400014
  .word 0x8e05001c
  .word 0x8e030018
  .word 0x00651823
  .word 0x8e040020
  .word 0x00852823
  .word 0x240424cc
  .word 0x00642018
  .word 0x0085001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00002812
  .word 0x240434cc
  .word 0x00852823
  .word 0xa4450028
  .word 0xa445002a
  .word 0x00052100
  .word 0x00041303
  .word 0x04810003
  .word 0x00000000
  .word 0x24820fff
  .word 0x00021303
  .word 0xa6420024
  .word 0x00051040
  .word 0x00451021
  .word 0x00022140
  .word 0x00041303
  .word 0x04810003
  .word 0x00000000
  .word 0x24820fff
  .word 0x00021303
  .word 0xa6420026
  .word 0x8e040020
  .word 0x8e02001c
  .word 0x00822023
  .word 0x00031100
  .word 0x00431023
  .word 0x00021040
  .word 0x0044001a
  .word 0x00001012
  .word 0x2442ffce
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6400020
  .word 0xa2400018
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0449f4
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c045660
  .word 0x00000000
  .word 0x8e030020
  .word 0x8e020018
  .word 0x14620096
  .word 0x00000000
  .word 0xae200008
  .word 0x24020002
  .word 0xae220000
  .word 0x10000091
  .word 0x00000000
  .word 0x8e220008
  .word 0x24500001
  .word 0xae300008
  .word 0x26330010
  .word 0x0000202d
  .word 0x8e250054
  .word 0x0000302d
  .word 0x0c04562c
  .word 0x00000000
  .word 0x0040902d
  .word 0xc6600024
  .word 0xe440002c
  .word 0xc6600038
  .word 0xe4400010
  .word 0xc660003c
  .word 0xe4400014
  .word 0x24030010
  .word 0xa4430024
  .word 0x24030060
  .word 0xa4430026
  .word 0x00101900
  .word 0x00701823
  .word 0x00032040
  .word 0x24030003
  .word 0x0083001a
  .word 0x00001812
  .word 0x2463ffec
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe4400020
  .word 0xa0400018
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0449f4
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c045660
  .word 0x00000000
  .word 0x8e230008
  .word 0x24020003
  .word 0x14620066
  .word 0x00000000
  .word 0xae200008
  .word 0xae220000
  .word 0x10000062
  .word 0x00000000
  .word 0x8e220008
  .word 0x24500001
  .word 0xae300008
  .word 0x26330010
  .word 0x0000202d
  .word 0x8e250054
  .word 0x0000302d
  .word 0x0c04562c
  .word 0x00000000
  .word 0x0040902d
  .word 0xc6600024
  .word 0xe440002c
  .word 0xc6600038
  .word 0xe4400010
  .word 0xc660003c
  .word 0xe4400014
  .word 0x24030010
  .word 0xa4430024
  .word 0x24030060
  .word 0xa4430026
  .word 0x00101880
  .word 0x00701821
  .word 0x00032040
  .word 0x24030003
  .word 0x0083001a
  .word 0x00002012
  .word 0x2403000a
  .word 0x00641823
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe4400020
  .word 0xa0400018
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0449f4
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c045660
  .word 0x00000000
  .word 0x8e230008
  .word 0x24020002
  .word 0x14620036
  .word 0x00000000
  .word 0xae200008
  .word 0x24020004
  .word 0xae220000
  .word 0x10000031
  .word 0x00000000
  .word 0x8e220008
  .word 0x24420001
  .word 0xae220008
  .word 0x26320010
  .word 0x0000202d
  .word 0x8e250054
  .word 0x0000302d
  .word 0x0c04562c
  .word 0x00000000
  .word 0x0040802d
  .word 0xc6400024
  .word 0xe440002c
  .word 0xc6400038
  .word 0xe4400010
  .word 0xc640003c
  .word 0xe4400014
  .word 0x24030010
  .word 0xa4430024
  .word 0x24030060
  .word 0xa4430026
  .word 0x8e220008
  .word 0x2841000f
  .word 0x10200004
  .word 0x00000000
  .word 0xa2000018
  .word 0x10000008
  .word 0x00000000
  .word 0x2443fff1
  .word 0x00031200
  .word 0x00431823
  .word 0x24020003
  .word 0x0062001a
  .word 0x00001012
  .word 0xa2020018
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c0449f4
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c045660
  .word 0x00000000
  .word 0x8e230008
  .word 0x24020012
  .word 0x14620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_00119930
void func_00119930(KwlnTask* task)
{
    MAESTRO_FREE(task->workData);
}

/* W318 measured: opt_loop_invariants on changes e0d0 nd689->672; object1064/window1072. */
// FUN_00119960
KwlnTask* func_00119960(KwlnTask* parent, u32 effectType, void* blob)
{
    MaestroMarkSpriteWork* work;
    KwlnTask* task;

    work = (MaestroMarkSpriteWork*)MAESTRO_ALLOC(1, 0x58, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreate(parent, D_005D6FE0, 0x18c1,
                          func_001193d0, func_00119930, work);
    if (task == NULL)
    {
        return NULL;
    }
    work->blob = blob;
    work->mode = effectType;
    return task;
}

// FUN_00119A20
void func_00119a20(void)
{
    s32 i = 0;
    void** table = D_00833B70;

    for (; i < 14; i++)
    {
        table[i] = NULL;
    }
}

// FUN_00119A60
void* func_00119a60(s32 index)
{
    return D_00833B70[index];
}

/* W318 measured: opt_loop_invariants on changes e630 nd411->330; object524/window592. */
// FUN_00119A80
void func_00119a80(s32 index, void* resource)
{
    D_00833B70[index] = resource;
}

#pragma opt_loop_invariants off

// Retail unrolls the state-0 resource-load loop (14 literal calls, not a
// runtime loop) and dispatches via switch, not if/else-if. Rewritten from
// disasm; nd 261->10. Residual: 1 addu operand-order floor + 1 hoisted
// D_00833B70 pointer register-bank floor in the state-3-promote loop.
#pragma push
/* Removing this loses FUN_00119aa0 (MATCH nd0 -> MISMATCH nd30) - measured W161. */
#pragma opt_loop_invariants on
// FUN_00119AA0
void* func_00119aa0(KwlnTask* task)
{
    MaestroCampSpriteSetupWork* work;
    u32 size;
    s32 i;
    u32 ready;

    work = (MaestroCampSpriteSetupWork*)task->workData;
    switch (work->state)
    {
    case 0:
        if (H_Cdvd_IsFileLoaded(work->archive) != 0)
        {
            work->resources[0] = func_00112420(H_Cdvd_ArchiveGetFile(work->archive, 0, &size));
            work->resources[1] = func_00112420(H_Cdvd_ArchiveGetFile(work->archive, 1, &size));
            work->resources[2] = func_00112420(H_Cdvd_ArchiveGetFile(work->archive, 2, &size));
            work->resources[3] = func_00112420(H_Cdvd_ArchiveGetFile(work->archive, 3, &size));
            work->resources[4] = func_00112420(H_Cdvd_ArchiveGetFile(work->archive, 4, &size));
            work->resources[5] = func_00112420(H_Cdvd_ArchiveGetFile(work->archive, 5, &size));
            work->resources[6] = func_00112420(H_Cdvd_ArchiveGetFile(work->archive, 6, &size));
            work->resources[7] = func_00112420(H_Cdvd_ArchiveGetFile(work->archive, 7, &size));
            work->resources[8] = func_00112420(H_Cdvd_ArchiveGetFile(work->archive, 8, &size));
            work->resources[9] = func_00112420(H_Cdvd_ArchiveGetFile(work->archive, 9, &size));
            work->resources[10] = func_00112420(H_Cdvd_ArchiveGetFile(work->archive, 10, &size));
            work->resources[11] = func_00112420(H_Cdvd_ArchiveGetFile(work->archive, 11, &size));
            work->resources[12] = func_00112420(H_Cdvd_ArchiveGetFile(work->archive, 12, &size));
            work->resources[13] = func_00112420(H_Cdvd_ArchiveGetFile(work->archive, 13, &size));
            work->ownerPool = func_0018b6d0(0xc8);
            iGpffffb25c = work->ownerPool;
            work->state = 1;
        }
        break;
    case 1:
        ready = true;
        for (i = 0; i < 14; i++)
        {
            if (work->resources[i] != NULL &&
                H_Maestro_00111f30((s16*)work->resources[i]) == 0)
            {
                ready = false;
            }
        }
        if (ready != 0)
        {
            {
                s32 j = 0;

                for (; j < 14; j++)
                {
                    D_00833B70[j] = work->resources[j];
                }
            }
            work->state = 3;
        }
        break;
    case 2:
        if (H_Cdvd_IsFileLoaded(work->archive) != 0)
        {
            work->state = 3;
        }
        break;
    case 3:
        break;
    }
    func_003c7b90();
    return KWLNTASK_CONTINUE;
}
#pragma pop

// Reconstructed from the retail window. The opening is the same render-state
// prologue the sibling func_0010f6c0 already carries: two indirect calls
// through the D_00960090 render-state hook, near/far plane setup, a full
// 640x448 viewport, camera bind, then the 0x4e4 flag selecting between two
// RpSkyRenderStateSet pairs. Retail then gates the whole body on work[0] == 3
// (bne $a0, 3 branches to the tail); that body is fully reconstructed here
// as an element-loop over frame commands with color processing.
// FUN_00119E00
void func_00119e00(KwlnTask* task)
{
    MaestroCampSpriteSetupWork* work;
    s32 i;

    work = (MaestroCampSpriteSetupWork*)task->workData;
    for (i = 0; i < 14; i++)
    {
        if (*(void**)((int)work + i * 4 + 4) != NULL)
        {
            func_001124b0(*(void**)((int)work + i * 4 + 4));
        }
        *(void**)((int)work + i * 4 + 4) = NULL;
    }
    if (work->archive != NULL)
    {
        H_Cdvd_Destroy(work->archive);
    }
    if (work->ownerPool != NULL)
    {
        MAESTRO_FREE(work->ownerPool);
        iGpffffb25c = NULL;
    }
    {
        s32 j = 0;
        void** table = D_00833B70;

        for (; j < 14; j++)
        {
            table[j] = NULL;
        }
    }
    MAESTRO_FREE(work);
    if (work->initializeMessages != 0)
    {
        func_003c77a0();
    }
    iGpffffb258 = NULL;
}

// Retail 0x10fbe4-0x110250 re-fetches command pointers and carries the prior
// endpoint into command-2 rectangles; preserve those conversions and spill slots.
/* W375 measured opt_loop_invariants off for FUN_0010F6C0: default nd2034/object3060; off nd2031/object3060; retained. */
// FUN_00119F10
KwlnTask* func_00119f10(KwlnTask* parent, u32 initializeMessages)
{
    MaestroCampSpriteSetupWork* work;
    KwlnTask* task;

    if (iGpffffb258 != NULL)
    {
        return NULL;
    }
    work = (MaestroCampSpriteSetupWork*)MAESTRO_ALLOC(1, 0x48, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreate(parent, D_005DAC00, 0x18bf,
                          func_00119aa0, func_00119e00, work);
    if (task == NULL)
    {
        return NULL;
    }
    iGpffffb258 = task;
    if (datGetScenarioMode() != 0)
    {
        work->archive = H_Cdvd_Request(D_005DAC20, 1);
    }
    else
    {
        work->archive = H_Cdvd_Request(D_005DAC40, 1);
    }
    work->initializeMessages = initializeMessages;
    if (initializeMessages != 0)
    {
        func_003c72d0(D_005D7AE0);
    }
    return task;
}
