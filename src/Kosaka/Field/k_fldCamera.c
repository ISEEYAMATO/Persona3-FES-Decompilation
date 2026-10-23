#include "Kosaka/Field/k_fldCamera.h"
#include "Kosaka/Field/k_field.h"
#include "Kosaka/Field/k_fldrc.h"
#include "Kosaka/Field/k_sceneDraw.h"
#include "Kosaka/k_assert.h"
#include "Kosaka/k_draw.h"
#include "Kosaka/k_view.h"
#include "Graphics/Model/mdlManager.h"
#include "Kernel/Kwln/kwln.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Scene/mt_scene.h"
#include "Scene/resrcManager.h"
#include "h_cdvd.h"
#include "libm.h"
#include "temporary.h"

#include "Kosaka/Field/k_encount.h"
#include "Kosaka/Field/k_unit.h"
#include "Kosaka/Field/k_fldFrame.h"
#include "Kosaka/Field/k_event.h"
#include "Main/g_data.h"
#include "Main/Battle/Data/datUnit.h"
#include "Main/Battle/Data/datPersona.h"
#include "Script/scrScriptProcess.h"
#include "rw/rprandom.h"
#pragma alias func_004c69f0_y2 func_004c69f0
#pragma alias FUN_001a1210_y2 FUN_001a1210
#pragma alias FUN_0048d480_y2 FUN_0048d480
extern s32 func_001c0040(void);
extern u32 RpRandom(void);
#pragma alias jtbl_0096017C_abs jtbl_0096017C
extern u32 jtbl_0096017C_abs[];
extern u8 DAT_008717e8[];
extern u8* DAT_007ce4ac;
extern u8* DAT_007ce4b0;
extern u8* DAT_007ce4b4;
extern u8* DAT_007ce4b8;
extern u32 iGpffffb418;
extern RwMatrix* func_004c38c0(void);
extern void func_004c3880(RwMatrix* matrix);
extern f32 func_004c69f0(RwV3d* out, const RwV3d* in);
extern f32 acosf(f32 value);
#pragma alias sDegreesPerRadian D_007CAFA0
extern f32 sDegreesPerRadian;
#pragma alias sEncountAxis D_00683B78
extern RwV3d sEncountAxis;
#pragma alias sEncountForward D_00683B88
extern RwV3d sEncountForward;
typedef struct EncounterWork
{
    u32 state;
    u32 taskSlot;
    u32 paused;
    void* effectHandle;
    u32 pcCount;
    u32 ecCount;
    FldUnit* pc[4];
    FldUnit* ec[4];
    u32 progress;
    u32 duration;
    u32 reaperFlag;
    u32 totalActive;
    u32 pcTotal;
    u32 ecTotal;
    u32 selectedFlatIndex;
} EncounterWork;
typedef struct EncounterRecord
{
    u32 count;
    u32 ids[3];
} EncounterRecord;
typedef struct PeriodicWork
{
    u32 state;
    u32 disabled;
    u32 initialGate;
    u32 timestamp;
    KwlnTask* scriptTask[16];
    EncounterRecord records[16];
} PeriodicWork;
extern KwlnTask* D_00875A40[3];
extern void* func_001a9180(KwlnTask* task);
extern void* func_001a91b0(KwlnTask* task, const RwV3d* position);
extern void func_001a9390(KwlnTask* task, void* handle, u32 value);
extern void func_001a9400(KwlnTask* task, void* handle);
extern void func_00434f70(void);
extern u32 func_001fc720(DatUnit* unit);
extern void func_001fc590(DatUnit* src, DatUnit* dst);
extern u32 func_002ff790(DatUnitGenusBase* genus);
#pragma alias func_002ffb00_u32 func_002ffb00
extern u32 func_002ffb00_u32(DatUnitGenusBase* genus);
extern u16 func_002ffb00(DatUnitGenusBase* genus);
extern u32 datGetMaxHp(s16 pcId);
extern void func_0035c1a0(KwlnTask* task, int record);
extern ScrHeader* D_007CE220;
extern void func_001b00c0(KwlnTask* task);
extern void func_0010a4e0(s32 bank, s32 cue, s32 variant, s32 pan);
#include "Kosaka/Field/k_fldFilter.h"
#include "rw/rwcore.h"
#define FLDFILTER_FILE_SIZE 74752 // in bytes
#define FLDFILTER_QUAD_XPIXELS 80
#define FLDFILTER_QUAD_YPIXELS 64
#define FLDFILTER_GRID_WIDTH  (SCREEN_WIDTH / FLDFILTER_QUAD_XPIXELS)  // 8
#define FLDFILTER_GRID_HEIGHT (SCREEN_HEIGHT / FLDFILTER_QUAD_YPIXELS) // 7
typedef struct
{
    RwIm2DVertex vert[4]; // 0x00
} FilterQuad;
extern void* sFilterFile;
extern s32 sFilterColorOffset;
extern s32 sFilterCurrent;
extern f32 sFilterPrevious;
extern f32 sFilterBlend;
extern s32 sFilterBlendDuration;
extern FilterQuad sFilterGrid[FLDFILTER_GRID_HEIGHT][FLDFILTER_GRID_WIDTH];
#pragma alias sFilterGrid_abs sFilterGrid
extern u8 sFilterGrid_abs[];
extern u32 gp0xffff95d8;
extern f32 fGpffff8248;
#define FLDFILTER_ALPHA gp0xffff95d8
extern const char D_00683A60[];
extern const char D_00683A78[];
extern void (*D_00960090)(u32 state, u32 value);
extern void (*D_009600A0)(RwPrimitiveType primitiveType, RwIm2DVertex* vertices, s32 vertexCount);
#pragma alias D_00960090_abs D_00960090
extern void (*D_00960090_abs[])(u32 state, u32 value);
#pragma alias D_009600A0_abs D_009600A0
extern void (*D_009600A0_abs[])(RwPrimitiveType primitiveType, RwIm2DVertex* vertices, s32 vertexCount);
extern u32 D_00960184[];
extern void (*D_0096017c)(void* memory);
#pragma alias D_0096017c_abs D_0096017c
extern u32 D_0096017c_abs[];
extern void func_004d7f60(s32 state, u32 value);
extern void func_004c69f0_y2(RwV3d* output, const RwV3d* input);
extern void func_004cb420(RwFrame* parent, RwFrame* child);
extern void func_004cb590(RwFrame* frame);
extern RwFrame* func_004caf10(void);
extern RwFrame* func_004caf80(RwFrame* frame);
extern void func_004cb930(RwFrame* frame);
extern void func_004cb750(RwFrame* frame, const RwV3d* translation, RwOpCombineType combine);
extern void FUN_001a1210_y2(RwCamera* camera, const RwV3d* at, const RwV3d* position, const RwV3d* up);
extern void* FUN_0048d480_y2(f32 frame, void* curve, s32 flags, RwV3d* output, s32 unused);
extern const char D_00683A48[];
extern const char D_007CC2CC[];
typedef struct FldFilterCameraWork
{
    u32 state;                 // 0x00
    u32 flags;                 // 0x04
    u32 type;                  // 0x08
    RwFrame* frame;            // 0x0c
    RwFrame* parentFrame;      // 0x10
    RwV3d posOffset;            // 0x14
    f32 xzDeadZone;            // 0x20
    f32 yDeadZone;             // 0x24
    u8 unknown28[0x1c];         // 0x28
    KwlnTask* pointTask0;       // 0x44
    KwlnTask* pointTask1;       // 0x48
    KwlnTask* pointTask2;       // 0x4c
    u8 unknown50[0x10];         // 0x50
    RwV3d cameraPoints[9];       // 0x60
    ResrcModelChar* playerResrc;// 0xcc
} FldFilterCameraWork;
extern void* FUN_001d5220(KwlnTask* cameraTask);
extern void FUN_001d59e0(KwlnTask* cameraTask);


#pragma alias memset_y2 memset


#define CAMERA_DATA_U32(address) (*(volatile /* Removing this file's qualifier batch loses 1 MATCH(es) and worsens 0 other function(s) - measured W170. */ u32*)(DAT_008717e8 + ((address) - 0x008717e8)))
#define CAMERA_FIELD_IDS (*(volatile /* Removing this file's qualifier batch loses 1 MATCH(es) and worsens 0 other function(s) - measured W170. */ u32**)(uintptr_t)0x007cd540)
#define CAMERA_UP_AXIS ((const RwV3d*)(uintptr_t)0x00683a98)

typedef struct FldCameraResource
{
    u8 unkData[0x100];
    u32 type;               // 0x100
    f32 fov;                // 0x104
    const RwMatrix* matrix; // 0x108
    RwV3d posOffset;        // 0x10c
    f32 xzDeadZone;         // 0x118
    f32 yDeadZone;          // 0x11c
} FldCameraResource;

typedef union FldCameraRuntimeCmr
{
    struct
    {
        RwMatrix mat;           // 0x00
        f32 fov;                // 0x40
        u16 type;               // 0x44
        u16 pad;                // 0x46
        RwV3d posOffset;        // 0x48
        f32 xzDeadZone;         // 0x54
        f32 yDeadZone;          // 0x58
        u32 unk;                // 0x5c
    } fields;
    u_long128 q[6];
} FldCameraRuntimeCmr;

extern f32 FUN_001a5aa0(const RwMatrix* matrix);
extern void FUN_001a1210(RwCamera* camera, const RwV3d* target,
                         const RwV3d* position, const RwV3d* upVector);
extern void FUN_0019d3f0(const char* file, s32 line);
extern void FUN_0048d270(void* curve, s32 index, RwV3d* dst);
extern void FUN_0048d480(f32 time, void* curve, s32 mode, RwV3d* dst, void* aux);
extern void FUN_004cb7f0(RwFrame* frame, const RwMatrix* matrix, u32 flags);
extern void FUN_004cb890(RwFrame* frame, f32 amount, const RwV3d* axis, u32 mode);
extern void FUN_004c31b0(f32 angle, RwFrame* frame, const RwV3d* axis, u32 mode);
extern void func_004c2330(RwMatrix* dst, const RwMatrix* src);
extern void thunk_FUN_004c2330(RwMatrix* dst, const RwMatrix* src);
extern s32 func_00530da0(f32 value);
extern s32 func_0052e118(s32 value);
extern s32 func_0045ec00(s32 left, s32 right);
extern const char DAT_00683b10[];
extern const char D_00683A8C[];
extern const char D_00683AD0[];
extern const char D_00683A90[];
extern const u64 D_00683A98;
#pragma alias D_00683A98_abs D_00683A98
extern volatile u8 D_00683A98_abs[];
extern volatile const f32 D_00683AA0;
extern void* DAT_00960184[];
extern u32* PTR_DAT_007cd540;
extern void* D_007CE2B0;
extern void* func_00100d80(const char* path, u32 mode);
extern void func_001023a0(void* object);
extern void func_00100ec0(void* object);
extern void func_00521250(void* destination, const void* source, u32 size);

/* W421 probe floors for FUN_001d5a90: declaration-order variants and the
 * scalar field-address helper stayed nd16/object356/window368 (0.044944);
 * parent-local materialization also stayed nd16/356/368. Direct frame-field
 * expressions worsened to nd188/object332/window368 (0.566265). */
/* W423 retained parent/task local merge: nd16/object356/window368
 * (0.044944) -> nd14/356/368 (0.039326); parentTask carries the created
 * task through destruction, cylinder creation, and return. */
// FUN_001d5a90
asm KwlnTask* FUN_001d5a90(KwlnTask* parentTask)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x24040001
  .word 0x240500d0
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040802d
  .word 0x16000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000003e
  .word 0x00000000
  .word 0x0220202d
  .word 0x2405000a
  .word 0x3c060068
  .word 0x24c63a60
  .word 0x3c07001d
  .word 0x24e75220
  .word 0x3c08001d
  .word 0x250859e0
  .word 0x0200482d
  .word 0x0c0652e0
  .word 0x00000000
  .word 0x0040882d
  .word 0x2612000c
  .word 0x0c132bc4
  .word 0x00000000
  .word 0xae420000
  .word 0x14400007
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c065408
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000026
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132e4c
  .word 0x00000000
  .word 0x26130010
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c420004
  .word 0x8c420004
  .word 0xae620000
  .word 0x10400012
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132d64
  .word 0x00000000
  .word 0x8e640000
  .word 0x8e05000c
  .word 0x0c132d08
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8e440000
  .word 0x8c450004
  .word 0x0c132d08
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843a78
  .word 0x240501b4
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c069218
  .word 0x00000000
  .word 0x0220102d
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

/* DUMMYDUMB session 2026-10-22: 14 differing bytes, and the whole residual is a
 * swapped saved register - ours keeps parentTask in $s0 and work in $s3, retail
 * keeps parentTask in $s1 and work in $s0.  This is the canonical case in
 * docs/permuting.md (itfMesManager FUN_003ada00), where the tie-break is not
 * reachable from the C source.  Probed: every permutation of the three local
 * declarations, `register` on slot1/work, `volatile` on each local, and
 * optimization_level 1..4 - all byte-neutral.  Confirmed wall: register
 * allocation.
 */

// FUN_001d5c00
u32 K_FldCamera_GetType(KwlnTask* fldCameraTask)
{
    return ((FldCamera*)fldCameraTask->workData)->type;
}

// FUN_001d5c10
void func_001d5c10(KwlnTask* fldCameraTask, u32 type)
{
    FldCamera* fldCamera;
    void* field;
    void* fieldSub;
    f32 amount;
    RwV3d* destination;
    void* curve;
    s32 i;
    RwV3d center;

    fldCamera = (FldCamera*)fldCameraTask->workData;
    fldCamera->type = type;
    if (type == 3)
    {
        goto setup_dead_zone;
    }
    if (type != 4)
    {
        goto cleanup;
    }

setup_dead_zone:
    curve = *(void**)((u8*)*(void**)((u8*)K_Field_Get() + 0x116c) + 0xa1c);
    if (curve == NULL)
    {
        return;
    }
    for (i = 0; i < 9; i++)
    {
        field = K_Field_Get();
        fieldSub = (void*)*(void**)((u8*)field + 0x116c);
        amount = (f32)i * 0.125f;
        /* Removing this barrier loses func_001d5c10 (MATCH nd0 -> MISMATCH nd21) - measured W164. */
        asm ("" : "+m"(amount));
        destination = &fldCamera->deadZonePath[i];
        FUN_0048d480(amount,
                     (void*)*(void**)((u8*)fieldSub + 0xa1c),
                     10, destination, NULL);
    }
    if (fldCamera->pointTask0 == NULL)
    {
        fldCamera->pointTask0 = K_Draw_CreatePointTask(fldCameraTask);
        fldCamera->pointTask1 = K_Draw_CreatePointTask(fldCameraTask);
        fldCamera->pointTask2 = K_Draw_CreatePointTask(fldCameraTask);
    }
    K_Draw_SetPointDrawEnabled(fldCamera->pointTask0, true);
    K_Draw_SetPointDrawEnabled(fldCamera->pointTask1, true);
    K_Draw_SetPointDrawEnabled(fldCamera->pointTask2, true);
    curve = *(void**)((u8*)*(void**)((u8*)K_Field_Get() + 0x116c) + 0xa1c);
    FUN_0048d270(curve, 0, &center);
    K_Draw_SetPointCenter(fldCamera->pointTask0, &center);
    K_Draw_SetPointColor(fldCamera->pointTask0,
                         (const RwRGBA*)D_00683A8C);
    K_Draw_SetPointColor(fldCamera->pointTask1,
                         (const RwRGBA*)D_00683A90);
    K_Draw_SetPointColor(fldCamera->pointTask2,
                         (const RwRGBA*)D_00683A90);
    return;

cleanup:
    if (fldCamera->deadZoneTask != NULL)
    {
        kwlnTaskDestroyWithHierarchy(fldCamera->deadZoneTask);
        fldCamera->deadZoneTask = NULL;
    }
    if (fldCamera->pointTask0 != NULL)
    {
        kwlnTaskDestroyWithHierarchy(fldCamera->pointTask0);
        fldCamera->pointTask0 = NULL;
        kwlnTaskDestroyWithHierarchy(fldCamera->pointTask1);
        kwlnTaskDestroyWithHierarchy(fldCamera->pointTask2);
    }
}

// Reconstructed frame-position capture, axis setup, frame update, and camera look-at.
// Keep the axis address materialized before the absolute global loads; retail stores directly to the stack object.
// Measured: direct stores are nd26 without this pragma and nd0 with it; pointer stores remain nd4.
// FUN_001d5e10
RwV3d* K_FldCamera_GetPos(KwlnTask* fldCameraTask)
{
    return &((FldCamera*)fldCameraTask->workData)->frame->modelling.pos;
}
#pragma opt_propagation off
// FUN_001d5e30
void func_001d5e30(KwlnTask* fldCameraTask, f32 amount)
{
    FldCamera* fldCamera;
    RwCamera* camera;
    RwFrame* cameraFrame;
    RwV3d cameraPosition;
    RwV3d target;
    RwV3d axis;
    RwV3d* axisPtr;
    u64 axisXY;
    f32 axisZ;
    u8* targetBytes;
    u32 i;

    fldCamera = (FldCamera*)fldCameraTask->workData;
    if (fldCamera->type != FLDCAMERA_TYPE_0)
    {
        return;
    }

    camera = kwlnGetMainCamera();
    cameraFrame = (RwFrame*)camera->object.object.parent;
    cameraPosition = cameraFrame->modelling.pos;
    targetBytes = (u8*)&target;
    i = 0xc;
    if (targetBytes != NULL)
    {
        do
        {
            *targetBytes = 0;
            targetBytes++;
            i--;
        } while (i != 0);
    }
    axisPtr = (RwV3d*)((u8*)&axis + 0);
    axisXY = *(volatile u64*)D_00683A98_abs;
    axisZ = D_00683AA0;
    *(u64*)&axis = axisXY;
    axis.z = axisZ;
    FUN_004cb890(cameraFrame, amount, axisPtr, 2);
    cameraPosition = cameraFrame->modelling.pos;
    camera = kwlnGetMainCamera();
    FUN_001a1210(camera, &cameraPosition, &target, NULL);

}
#pragma opt_propagation reset

// Reconstructed the complete camera-rotation state machine and gated look-at updates.
// Remaining differences are MWCC branch/layout scheduling and axis setup ordering.
// FUN_001d5f30
void K_FldCamera_SetPlayerResrcByTypeid(KwlnTask* fldCameraTask, u16 resTypeId)
{
    FldCamera* fldCam;

    fldCam = (FldCamera*)fldCameraTask->workData;

    if (RESRC_GET_TYPE(resTypeId) == RESRC_TYPE_MODELCHAR)
    {
        fldCam->playerResrc = (ResrcModelChar*)MT_Scene_GetRes(resTypeId);
    }
}

// FUN_001d5f90
asm void* func_001d5f90(KwlnTask* cameraRotationTask)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8c90003c
  .word 0x8e030000
  .word 0x24020002
  .word 0x10620096
  .word 0x00000000
  .word 0x24020001
  .word 0x1062003e
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000092
  .word 0x00000000
  .word 0xc614000c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420004
  .word 0x8c42003c
  .word 0x8c420008
  .word 0x1440002f
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c510004
  .word 0xc6220040
  .word 0xc6210044
  .word 0xc6200048
  .word 0xe7a20090
  .word 0xe7a10094
  .word 0xe7a00098
  .word 0x27a30080
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
  .word 0x27a50070
  .word 0x3c020068
  .word 0xdc433a98
  .word 0x3c020068
  .word 0xc4403aa0
  .word 0xffa30070
  .word 0xe7a00078
  .word 0x0220202d
  .word 0x4600a306
  .word 0x24060002
  .word 0x0c132e24
  .word 0x00000000
  .word 0xc6220040
  .word 0xc6210044
  .word 0xc6200048
  .word 0xe7a20090
  .word 0xe7a10094
  .word 0xe7a00098
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a50090
  .word 0x27a60080
  .word 0x0000382d
  .word 0x0c068484
  .word 0x00000000
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x8e030008
  .word 0x8e020004
  .word 0x0062082a
  .word 0x1020004c
  .word 0x00000000
  .word 0x24620001
  .word 0xae020008
  .word 0xc6000008
  .word 0x46800060
  .word 0xc7808110
  .word 0x46010042
  .word 0xc6000004
  .word 0x46800020
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000546
  .word 0xc6010014
  .word 0x46010041
  .word 0xc6000010
  .word 0x46010502
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420004
  .word 0x8c42003c
  .word 0x8c420008
  .word 0x1440002f
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c510004
  .word 0xc6220040
  .word 0xc6210044
  .word 0xc6200048
  .word 0xe7a20060
  .word 0xe7a10064
  .word 0xe7a00068
  .word 0x27a30050
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
  .word 0x27a50040
  .word 0x3c020068
  .word 0xdc433a98
  .word 0x3c020068
  .word 0xc4403aa0
  .word 0xffa30040
  .word 0xe7a00048
  .word 0x0220202d
  .word 0x4600a306
  .word 0x24060002
  .word 0x0c132e24
  .word 0x00000000
  .word 0xc6220040
  .word 0xc6210044
  .word 0xc6200048
  .word 0xe7a20060
  .word 0xe7a10064
  .word 0xe7a00068
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a50060
  .word 0x27a60050
  .word 0x0000382d
  .word 0x0c068484
  .word 0x00000000
  .word 0xe6150014
  .word 0x10000009
  .word 0x00000000
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
}

// FUN_001d6240
void func_001d6240(KwlnTask* cameraRotationTask)
{
    RwFree(cameraRotationTask->workData);
}

// FUN_001d6270
asm KwlnTask* func_001d6270(KwlnTask* parentTask, s32 duration, s32 heading)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x0000882d
  .word 0x3c020087
  .word 0x8c4217e8
  .word 0x104000d2
  .word 0x00000000
  .word 0x24040001
  .word 0x24050018
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040802d
  .word 0x16000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000c6
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000a
  .word 0x3c060068
  .word 0x24c63ab0
  .word 0x3c07001d
  .word 0x24e75f90
  .word 0x3c08001d
  .word 0x25086240
  .word 0x0200482d
  .word 0x0c0652e0
  .word 0x00000000
  .word 0x0040882d
  .word 0xae130004
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0696a8
  .word 0x00000000
  .word 0x46000546
  .word 0x44800800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000005
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820800
  .word 0x00000000
  .word 0x46010540
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0696a8
  .word 0x00000000
  .word 0x46000506
  .word 0x44800800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000005
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820800
  .word 0x00000000
  .word 0x46010500
  .word 0x2402ffff
  .word 0x16420046
  .word 0x00000000
  .word 0x3c024234
  .word 0x44820800
  .word 0x00000000
  .word 0x4601a834
  .word 0x45010008
  .word 0x00000000
  .word 0x2402013b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600a834
  .word 0x45010004
  .word 0x00000000
  .word 0x4480a800
  .word 0x10000045
  .word 0x00000000
  .word 0x3c024307
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a834
  .word 0x45000008
  .word 0x00000000
  .word 0x4601a834
  .word 0x45010005
  .word 0x00000000
  .word 0x3c0242b4
  .word 0x4482a800
  .word 0x10000038
  .word 0x00000000
  .word 0x3c024361
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a834
  .word 0x4500000b
  .word 0x00000000
  .word 0x3c024307
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a834
  .word 0x45010005
  .word 0x00000000
  .word 0x3c024334
  .word 0x4482a800
  .word 0x10000028
  .word 0x00000000
  .word 0x2402013b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600a834
  .word 0x4500000b
  .word 0x00000000
  .word 0x3c024361
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a834
  .word 0x45010005
  .word 0x00000000
  .word 0x3c024387
  .word 0x4482a800
  .word 0x10000017
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843a78
  .word 0x2405034e
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600ad40
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x10000002
  .word 0x00000000
  .word 0x4600ad41
  .word 0x4600a836
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4500fffa
  .word 0x00000000
  .word 0x4614ad81
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010008
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820800
  .word 0x00000000
  .word 0x46140801
  .word 0x46150500
  .word 0x1000000a
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820800
  .word 0x00000000
  .word 0x46150801
  .word 0x46140000
  .word 0x46000507
  .word 0x10000002
  .word 0x00000000
  .word 0x4601b581
  .word 0x4601b036
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4500fffa
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x4601a501
  .word 0x4601a036
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4500fffa
  .word 0x00000000
  .word 0x4600b306
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14b846
  .word 0x00000000
  .word 0x0040902d
  .word 0x4600a306
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14b846
  .word 0x00000000
  .word 0x0240202d
  .word 0x0040282d
  .word 0x0c117b00
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0xe6160010
  .word 0x10000002
  .word 0x00000000
  .word 0xe6140010
  .word 0x0220102d
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
}

// FUN_001d6630
asm KwlnTask* func_001d6630(KwlnTask* parentTask, s32 duration, s32 heading)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x0000882d
  .word 0x3c020087
  .word 0x8c4217e8
  .word 0x1040008e
  .word 0x00000000
  .word 0x24040001
  .word 0x24050018
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040802d
  .word 0x16000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000082
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000a
  .word 0x3c060068
  .word 0x24c63ab0
  .word 0x3c07001d
  .word 0x24e75f90
  .word 0x3c08001d
  .word 0x25086240
  .word 0x0200482d
  .word 0x0c0652e0
  .word 0x00000000
  .word 0x0040882d
  .word 0xae130004
  .word 0x3c020087
  .word 0x8c4417f0
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0696a8
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0696a8
  .word 0x00000000
  .word 0x44800800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000005
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820800
  .word 0x00000000
  .word 0x46010000
  .word 0x44920800
  .word 0x00000000
  .word 0x468008e0
  .word 0x3c0243b4
  .word 0x44820800
  .word 0x10000002
  .word 0x00000000
  .word 0x460118c1
  .word 0x46011836
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4500fffa
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44821000
  .word 0x3c02c3b4
  .word 0x44820800
  .word 0x10000002
  .word 0x00000000
  .word 0x460218c0
  .word 0x46011834
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4501fffa
  .word 0x00000000
  .word 0x46001d41
  .word 0x3c024334
  .word 0x44820800
  .word 0x00000000
  .word 0x46010036
  .word 0x45010008
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820800
  .word 0x00000000
  .word 0x46000801
  .word 0x46030500
  .word 0x1000000d
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820800
  .word 0x00000000
  .word 0x46030841
  .word 0x46000800
  .word 0x46000507
  .word 0x10000005
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x4600ad41
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a836
  .word 0x4500fff7
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x4600a501
  .word 0x4600a036
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4500fffa
  .word 0x00000000
  .word 0x4600ab06
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14b846
  .word 0x00000000
  .word 0x0040902d
  .word 0x4600a306
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14b846
  .word 0x00000000
  .word 0x0240202d
  .word 0x0040282d
  .word 0x0c117b00
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0xe6150010
  .word 0x10000002
  .word 0x00000000
  .word 0xe6140010
  .word 0x0220102d
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_001d68e0
void func_001d68e0(CmrFile* cmr, KwlnTask* fldCameraTask)
{
    u8 data[0x60] __attribute__((aligned(16)));
    FldCamera* fldCamera;
    RwCamera* camera;
    RwFrame* cameraFrame;

    fldCamera = (FldCamera*)fldCameraTask->workData;
    camera = kwlnGetMainCamera();
    cameraFrame = (RwFrame*)camera->object.object.parent;
    memset_y2(data, 0, 0x60);
    ((FldCameraRuntimeCmr*)data)->fields.fov =
        K_View_GetFov(kwlnGetMainCamera());
    ((FldCameraRuntimeCmr*)data)->fields.mat = cameraFrame->modelling;
    ((FldCameraRuntimeCmr*)data)->fields.type = (u16)fldCamera->type;
    ((FldCameraRuntimeCmr*)data)->fields.posOffset = fldCamera->posOffset;
    ((FldCameraRuntimeCmr*)data)->fields.xzDeadZone = fldCamera->xzDeadZone;
    ((FldCameraRuntimeCmr*)data)->fields.yDeadZone = fldCamera->yDeadZone;
    *(FldCameraRuntimeCmr*)cmr = *(FldCameraRuntimeCmr*)data;
}

// FUN_001d69e0
void func_001d69e0(KwlnTask* fldCameraTask, const CmrFile* cmr)
{
    KwlnTask* task;
    const FldCameraRuntimeCmr* runtime;
    RwFrame* cameraFrame;
    RwCamera* mainCamera;
    RwV3d* targetPosition;

    runtime = (const FldCameraRuntimeCmr*)cmr;
    task = fldCameraTask;
    K_View_SetFov(kwlnGetMainCamera(), runtime->fields.fov);
    FUN_004cb7f0(
        (RwFrame*)kwlnGetMainCamera()->object.object.parent,
        &runtime->fields.mat, 0);
    func_001d5c10(task, runtime->fields.type);

    ((FldCamera*)task->workData)->posOffset = runtime->fields.posOffset;
    ((FldCamera*)task->workData)->xzDeadZone = runtime->fields.xzDeadZone;
    ((FldCamera*)task->workData)->yDeadZone = runtime->fields.yDeadZone;

    switch (((FldCamera*)task->workData)->type)
    {
        case 0:
        case 5:
            func_001d5e30(K_Field_Get()->cameraCtlTask, 0.0f);
            break;
        case 2:
            cameraFrame =
                (RwFrame*)kwlnGetMainCamera()->object.object.parent;
            targetPosition =
                &((FldCamera*)task->workData)->frame->modelling.pos;
            mainCamera = kwlnGetMainCamera();
            FUN_001a1210(
                mainCamera, &cameraFrame->modelling.pos,
                targetPosition, NULL);
            break;
    }
}
// FUN_001d6b10
HCdvd* func_001d6b10(void)
{
    char path[128];

    if (PTR_DAT_007cd540[0] == 0xffffffff)
    {
        return NULL;
    }

    if (K_Fldrc_GetFldPacCdvd() == NULL)
    {
        sprintf((char*)((u8*)(uintptr_t)path + 0),
                (const char*)((u8*)(uintptr_t)D_00683AD0 + 0),
                (s32)PTR_DAT_007cd540[0], (s32)PTR_DAT_007cd540[1]);
        if (H_Cdvd_FileExists(path) != false)
        {
            goto request;
        }
        return NULL;
request:
        return H_Cdvd_Request(path, HCDVD_FILENORMAL);
    }

    return (HCdvd*)(uintptr_t)1;
}

// Negative probe: all 24 permutations of cmr/fldCamera/camera/cameraFrame declarations were neutral at nd211, object 1212/1248 (W418).
// FUN_001d6bc0
asm u32 func_001d6bc0(HCdvd* cmrRequest, RwMatrix* matrix, f32* fov, u32* type,
                  RwV3d* posOffset, f32* xzDeadZone, f32* yDeadZone)
{
  .set noreorder
  .word 0x27bdff10
  .word 0xffbf0090
  .word 0x7fb70080
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
  .word 0x00e0882d
  .word 0x0100802d
  .word 0x0120b02d
  .word 0x0140b82d
  .word 0x16800004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000115
  .word 0x00000000
  .word 0x0c06c244
  .word 0x00000000
  .word 0x14400084
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x1040010b
  .word 0x00000000
  .word 0x8e950110
  .word 0x1260001c
  .word 0x00000000
  .word 0x26a50010
  .word 0x24040008
  .word 0x8ca30000
  .word 0x8ca20004
  .word 0x24a50008
  .word 0x2484ffff
  .word 0xae630000
  .word 0xae620004
  .word 0x26730008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xc6a00008
  .word 0xe6400000
  .word 0x96a20050
  .word 0xae220000
  .word 0xc6a20054
  .word 0xc6a10058
  .word 0xc6a0005c
  .word 0xe6020000
  .word 0xe6010004
  .word 0xe6000008
  .word 0xc6a00060
  .word 0xe6c00000
  .word 0xc6a00064
  .word 0xe6e00000
  .word 0x1000005b
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0xc6ac0008
  .word 0x0c069160
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x26a50010
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x96a50050
  .word 0x8c440004
  .word 0x0c075704
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420004
  .word 0x8c42003c
  .word 0xc6a20054
  .word 0xc6a10058
  .word 0xc6a0005c
  .word 0xe4420014
  .word 0xe4410018
  .word 0xe440001c
  .word 0xc6a10060
  .word 0x44800000
  .word 0x00000000
  .word 0x46010032
  .word 0x45000007
  .word 0x00000000
  .word 0x0c068094
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x3c024248
  .word 0xaea20060
  .word 0xc6b40060
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420004
  .word 0x8c42003c
  .word 0xe4540020
  .word 0xc6b40064
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420004
  .word 0x8c42003c
  .word 0xe4540024
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c510004
  .word 0x8e22003c
  .word 0x8c430008
  .word 0x24020002
  .word 0x10620010
  .word 0x00000000
  .word 0x24020005
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x44806000
  .word 0x8c440004
  .word 0x0c07578c
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c500004
  .word 0x8e22003c
  .word 0x8c42000c
  .word 0x24510040
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x26050040
  .word 0x0220302d
  .word 0x0000382d
  .word 0x0c068484
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0403b0
  .word 0x00000000
  .word 0x24020001
  .word 0x1000008e
  .word 0x00000000
  .word 0x8f82a850
  .word 0x27a400a0
  .word 0x3c050068
  .word 0x24a53af0
  .word 0x8c460000
  .word 0x8c470004
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a400a0
  .word 0x27a500ec
  .word 0x0c040870
  .word 0x00000000
  .word 0x0040a02d
  .word 0x1280007b
  .word 0x00000000
  .word 0x1260001c
  .word 0x00000000
  .word 0x26850010
  .word 0x24040008
  .word 0x8ca30000
  .word 0x8ca20004
  .word 0x24a50008
  .word 0x2484ffff
  .word 0xae630000
  .word 0xae620004
  .word 0x26730008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xc6800008
  .word 0xe6400000
  .word 0x96820050
  .word 0xae220000
  .word 0xc6820054
  .word 0xc6810058
  .word 0xc680005c
  .word 0xe6020000
  .word 0xe6010004
  .word 0xe6000008
  .word 0xc6800060
  .word 0xe6c00000
  .word 0xc6800064
  .word 0xe6e00000
  .word 0x1000005b
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0xc68c0008
  .word 0x0c069160
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x26850010
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x96850050
  .word 0x8c440004
  .word 0x0c075704
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420004
  .word 0x8c42003c
  .word 0xc6820054
  .word 0xc6810058
  .word 0xc680005c
  .word 0xe4420014
  .word 0xe4410018
  .word 0xe440001c
  .word 0xc6810060
  .word 0x44800000
  .word 0x00000000
  .word 0x46010032
  .word 0x45000007
  .word 0x00000000
  .word 0x0c068094
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x3c024248
  .word 0xae820060
  .word 0xc6940060
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420004
  .word 0x8c42003c
  .word 0xe4540020
  .word 0xc6940064
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420004
  .word 0x8c42003c
  .word 0xe4540024
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c510004
  .word 0x8e22003c
  .word 0x8c430008
  .word 0x24020002
  .word 0x10620010
  .word 0x00000000
  .word 0x24020005
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x44806000
  .word 0x8c440004
  .word 0x0c07578c
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c500004
  .word 0x8e22003c
  .word 0x8c42000c
  .word 0x24510040
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x26050040
  .word 0x0220302d
  .word 0x0000382d
  .word 0x0c068484
  .word 0x00000000
  .word 0x24020001
  .word 0x10000005
  .word 0x00000000
  .word 0x24020001
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
  .word 0xc7b40000
  .word 0x27bd00f0
  .word 0x03e00008
  .word 0x00000000
}

// FUN_001d70a0
void func_001d70a0(void)
{
    FldCameraResource* resource;
    KwlnTask* task;
    RwCamera* camera;
    RwFrame* cameraFrame;
    RwV3d* targetPosition;
    RwMatrix matrix;
    f32 xzDeadZone;
    f32 yDeadZone;

    resource = (FldCameraResource*)MT_Scene_GetResListHead(RESRC_TYPE_20);
    if (resource == NULL)
    {
        return;
    }

    K_View_SetFov(kwlnGetMainCamera(), resource->fov);
    thunk_FUN_004c2330(&matrix, resource->matrix);
    FUN_004cb7f0((RwFrame*)kwlnGetMainCamera()->object.object.parent,
                 &matrix, 0);
    func_001d5c10(K_Field_Get()->cameraCtlTask, resource->type);
    ((FldCamera*)K_Field_Get()->cameraCtlTask->workData)->posOffset =
        resource->posOffset;

    if (resource->xzDeadZone == 0.0f && K_Scene_001a0250() == false)
    {
        resource->xzDeadZone = 50.0f;
    }
    xzDeadZone = resource->xzDeadZone;
    ((FldCamera*)K_Field_Get()->cameraCtlTask->workData)->xzDeadZone =
        xzDeadZone;
    yDeadZone = resource->yDeadZone;
    ((FldCamera*)K_Field_Get()->cameraCtlTask->workData)->yDeadZone =
        yDeadZone;

    task = K_Field_Get()->cameraCtlTask;
    switch (((FldCamera*)task->workData)->type)
    {
    case 0:
    case 5:
        func_001d5e30(K_Field_Get()->cameraCtlTask, 0.0f);
        break;
    case 2:
        cameraFrame =
            (RwFrame*)kwlnGetMainCamera()->object.object.parent;
        targetPosition =
            &((FldCamera*)task->workData)->frame->modelling.pos;
        camera = kwlnGetMainCamera();
        FUN_001a1210(camera, &cameraFrame->modelling.pos,
                     targetPosition, NULL);
        break;
    }
}






// FUN_001d7260
void func_001d7260(void)
{
    char path[128];
    HCdvd* object;
    volatile /* Removing this qualifier loses func_001d7260 (MATCH nd0 -> MISMATCH nd18, size 148 -> 148) - measured W170. */ HCdvd* volatileObject;
    void* opmap;
    u32 count;

    sprintf(path, DAT_00683b10);
    object = (HCdvd*)func_00100d80(path, 0);
    volatileObject = object;
    func_001023a0(object);
    count = 1;
    opmap = D_007CE2B0 =
        ((void* (*)(u32, u32, u32))DAT_00960184[0])(
            count, volatileObject->fileSize, 0x40000);
    func_00521250(opmap, object->fileMemory, volatileObject->fileSize);
    func_00100ec0(object);
}

// FUN_001d7300
asm u32 K_Encount_001d7300(u32 param_1, u16 flag, u32 areaId)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x3402ffff
  .word 0x3055ffff
  .word 0x3083ffff
  .word 0x28620014
  .word 0x14400007
  .word 0x00000000
  .word 0x2861001d
  .word 0x10200004
  .word 0x00000000
  .word 0x30a2ffff
  .word 0x10400016
  .word 0x00000000
  .word 0x28620028
  .word 0x14400007
  .word 0x00000000
  .word 0x28610031
  .word 0x10200004
  .word 0x00000000
  .word 0x30a2ffff
  .word 0x1040000d
  .word 0x00000000
  .word 0x28620033
  .word 0x14400004
  .word 0x00000000
  .word 0x2861003b
  .word 0x14200007
  .word 0x00000000
  .word 0x28620047
  .word 0x1440000d
  .word 0x00000000
  .word 0x2861004f
  .word 0x1020000a
  .word 0x00000000
  .word 0x30c3ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021840
  .word 0x8f82b7c0
  .word 0x00431021
  .word 0x94510000
  .word 0x10000019
  .word 0x00000000
  .word 0x2862001f
  .word 0x14400013
  .word 0x00000000
  .word 0x28610028
  .word 0x10200010
  .word 0x00000000
  .word 0x8f84b7c4
  .word 0x00031080
  .word 0x00431821
  .word 0x00031080
  .word 0x00621021
  .word 0x000210c0
  .word 0x00442021
  .word 0x30a3ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00441021
  .word 0x9451e7be
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000067
  .word 0x00000000
  .word 0x3223ffff
  .word 0x00031140
  .word 0x00431023
  .word 0x00028080
  .word 0x8f82b7bc
  .word 0x00502021
  .word 0x90830000
  .word 0x90820001
  .word 0x00621821
  .word 0x90820002
  .word 0x00439021
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x0052001b
  .word 0x00003010
  .word 0x8f85b7bc
  .word 0x00b01021
  .word 0x90440000
  .word 0x00c4082a
  .word 0x10200006
  .word 0x00000000
  .word 0x24140001
  .word 0x0000982d
  .word 0x24120014
  .word 0x10000013
  .word 0x00000000
  .word 0x3223ffff
  .word 0x00031140
  .word 0x00431023
  .word 0x00021080
  .word 0x00451021
  .word 0x90420001
  .word 0x00821021
  .word 0x00c2082a
  .word 0x10200006
  .word 0x00000000
  .word 0x24140002
  .word 0x24130014
  .word 0x24120019
  .word 0x10000004
  .word 0x00000000
  .word 0x24140004
  .word 0x24130019
  .word 0x2412001e
  .word 0x0c070010
  .word 0x00000000
  .word 0x24030003
  .word 0x14430004
  .word 0x00000000
  .word 0x24140004
  .word 0x24130019
  .word 0x2412001e
  .word 0x0000882d
  .word 0x0260282d
  .word 0x8f82b7bc
  .word 0x00502021
  .word 0x10000009
  .word 0x00000000
  .word 0x00051080
  .word 0x00821821
  .word 0x94620004
  .word 0x10400003
  .word 0x00000000
  .word 0x94620006
  .word 0x02228821
  .word 0x24a50001
  .word 0x00b2102a
  .word 0x1440fff6
  .word 0x00000000
  .word 0x16200004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000001d
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x0051001b
  .word 0x00003010
  .word 0x0000382d
  .word 0x8f85b7bc
  .word 0x00b02021
  .word 0x1000000e
  .word 0x00000000
  .word 0x00131880
  .word 0x00831021
  .word 0x94420006
  .word 0x00e23821
  .word 0x00c7082a
  .word 0x10200006
  .word 0x00000000
  .word 0x02051021
  .word 0x00621021
  .word 0x94550004
  .word 0x10000005
  .word 0x00000000
  .word 0x26730001
  .word 0x0272102a
  .word 0x1440fff1
  .word 0x00000000
  .word 0x00141c00
  .word 0x32a2ffff
  .word 0x00621025
  .word 0xdfbf0060
  .word 0x7bb50050
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

// FUN_001d75f0
u8 K_Encount_001d75f0(u32 param_1, u16 flag, u32 areaId)
{
    u8 result;
    int mapId;

    result = 0;
    mapId = param_1 & 0xffff;
    if ((0x14 <= mapId && mapId < 0x1d && flag == 0) ||
        (0x28 <= mapId && mapId < 0x31 && flag == 0) ||
        (0x33 <= mapId && mapId <= 0x3a) ||
        (0x47 <= mapId && mapId < 0x4f))
    {
        result = DAT_007ce4b0[(areaId & 0xffff) * 10 + 3];
    }
    else if (0x1e <= mapId && mapId < 0x28)
    {
        result = DAT_007ce4b4[mapId * 200 - 0x176d];
    }
    return result;
}

// FUN_001d76e0
u8 K_Encount_001d76e0(u32 param_1, u16 flag, u32 areaId)
{
    u8 result;
    int mapId;

    result = 0;
    mapId = param_1 & 0xffff;
    if ((0x14 <= mapId && mapId < 0x1d && flag == 0) ||
        (0x28 <= mapId && mapId < 0x31 && flag == 0) ||
        (0x33 <= mapId && mapId <= 0x3a) ||
        (0x47 <= mapId && mapId < 0x4f))
    {
        result = DAT_007ce4b0[(areaId & 0xffff) * 10 + 2];
    }
    else if (0x1e <= mapId && mapId < 0x28)
    {
        result = DAT_007ce4b4[mapId * 200 - 0x176e];
    }
    return result;
}

// FUN_001d77d0
u8 K_Encount_001d77d0(u32 param_1, u16 flag, u32 areaId)
{
    u8 result;
    int mapId;

    result = 0;
    mapId = param_1 & 0xffff;
    if ((0x14 <= mapId && mapId < 0x1d && flag == 0) ||
        (0x28 <= mapId && mapId < 0x31 && flag == 0) ||
        (0x33 <= mapId && mapId <= 0x3a) ||
        (0x47 <= mapId && mapId < 0x4f))
    {
        result = DAT_007ce4b0[(areaId & 0xffff) * 10 + 4];
    }
    else if (0x1e <= mapId && mapId < 0x28)
    {
        result = DAT_007ce4b4[mapId * 200 - 0x176c];
    }
    return result;
}




static u32 K_Encount_Now(KwlnTask* task)
{
    return task != NULL ? kwlnTaskGetTimer(task) : 0;
}

static void* K_Encount_FieldWord(u32 offset)
{
    Field* field = K_Field_Get();
    return field != NULL ? *(void**)((u8*)field + offset) : NULL;
}

static void K_Encount_Face(FldUnit* unit, FldUnit* target)
{
    RwMatrix matrix;
    RwV3d axis = {0.0f, 1.0f, 0.0f};
    RwV3d delta;
    f32 heading;

    if (unit == NULL || target == NULL || unit->mdl == NULL || target->mdl == NULL ||
        unit->resrc == NULL)
    {
        return;
    }
    delta = mdlGetMatrix(target->mdl)->pos;
    delta.x -= mdlGetMatrix(unit->mdl)->pos.x;
    delta.y = 0.0f;
    delta.z -= mdlGetMatrix(unit->mdl)->pos.z;
    heading = atan2f(delta.x, delta.z) * (180.0f / 3.14159265f);
    memset(&matrix, 0, sizeof(matrix));
    matrix.right.x = 1.0f;
    matrix.up.y = 1.0f;
    matrix.at.z = 1.0f;
    matrix.pos = mdlGetMatrix(unit->mdl)->pos;
    matrix.flags = 0x20003;
    RwMatrixRotate(&matrix, &axis, heading, rwCOMBINEPRECONCAT);
    K_FldFrame_CtlUpdateMdlMat(unit->resrc->collisCtlTask, &matrix);
}

// FUN_001d78c0
asm u16* K_Encount_001d78c0(u32 param_1, u16 flag, u32 areaId)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0000982d
  .word 0x3083ffff
  .word 0x28620014
  .word 0x14400007
  .word 0x00000000
  .word 0x2861001d
  .word 0x10200004
  .word 0x00000000
  .word 0x30a2ffff
  .word 0x10400016
  .word 0x00000000
  .word 0x28620028
  .word 0x14400007
  .word 0x00000000
  .word 0x28610031
  .word 0x10200004
  .word 0x00000000
  .word 0x30a2ffff
  .word 0x1040000d
  .word 0x00000000
  .word 0x28620033
  .word 0x14400004
  .word 0x00000000
  .word 0x2861003b
  .word 0x14200007
  .word 0x00000000
  .word 0x28620047
  .word 0x14400014
  .word 0x00000000
  .word 0x2861004f
  .word 0x10200011
  .word 0x00000000
  .word 0x8f84b7c0
  .word 0x30c3ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00441021
  .word 0x94430006
  .word 0x00031100
  .word 0x00431823
  .word 0x00031080
  .word 0x00431023
  .word 0x00021880
  .word 0x8f82b7c8
  .word 0x00439021
  .word 0x10000020
  .word 0x00000000
  .word 0x2862001f
  .word 0x1440001a
  .word 0x00000000
  .word 0x28610028
  .word 0x10200017
  .word 0x00000000
  .word 0x8f84b7c4
  .word 0x00031080
  .word 0x00431821
  .word 0x00031080
  .word 0x00621021
  .word 0x000210c0
  .word 0x00442021
  .word 0x30a3ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00441021
  .word 0x9443e7c4
  .word 0x00031100
  .word 0x00431823
  .word 0x00031080
  .word 0x00431023
  .word 0x00021880
  .word 0x8f82b7c8
  .word 0x00439021
  .word 0x10000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000004e
  .word 0x00000000
  .word 0x24100001
  .word 0x0c070010
  .word 0x00000000
  .word 0x24030002
  .word 0x14430002
  .word 0x00000000
  .word 0x0060802d
  .word 0x0000202d
  .word 0x0000882d
  .word 0x10000014
  .word 0x00000000
  .word 0x00041040
  .word 0x00441021
  .word 0x00021080
  .word 0x02421821
  .word 0x94620002
  .word 0x1040000c
  .word 0x00000000
  .word 0x90620007
  .word 0x30420001
  .word 0x10400006
  .word 0x00000000
  .word 0x94620000
  .word 0x02021018
  .word 0x02228821
  .word 0x10000003
  .word 0x00000000
  .word 0x94620000
  .word 0x02228821
  .word 0x24840001
  .word 0x2882000f
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x16200006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843b28
  .word 0x24050147
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x0051001b
  .word 0x00001810
  .word 0x0000202d
  .word 0x0000302d
  .word 0x1000001a
  .word 0x00000000
  .word 0x00041040
  .word 0x00441021
  .word 0x00021080
  .word 0x02422821
  .word 0x94a20002
  .word 0x10400012
  .word 0x00000000
  .word 0x90a20007
  .word 0x30420001
  .word 0x10400006
  .word 0x00000000
  .word 0x94a20000
  .word 0x02021018
  .word 0x00c23021
  .word 0x10000003
  .word 0x00000000
  .word 0x94a20000
  .word 0x00c23021
  .word 0x0066082a
  .word 0x10200004
  .word 0x00000000
  .word 0x00a0982d
  .word 0x10000005
  .word 0x00000000
  .word 0x24840001
  .word 0x2882000f
  .word 0x1440ffe5
  .word 0x00000000
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
  .word 0x00000000
}



// FUN_001d7b70
asm DatUnit* func_001d7b70(KwlnTask* task, s32 flatIndex)
{
  .set noreorder
  .word 0x8c88003c
  .word 0x0000502d
  .word 0x0000202d
  .word 0x8d030010
  .word 0x1000000c
  .word 0x00000000
  .word 0x14aa0008
  .word 0x00000000
  .word 0x00041080
  .word 0x00481021
  .word 0x8c420018
  .word 0x8c420048
  .word 0x8c420004
  .word 0x1000002c
  .word 0x00000000
  .word 0x254a0001
  .word 0x24840001
  .word 0x0083102a
  .word 0x1440fff3
  .word 0x00000000
  .word 0x0000482d
  .word 0x8d070014
  .word 0x1000001f
  .word 0x00000000
  .word 0x0000582d
  .word 0x00093080
  .word 0x01062021
  .word 0x10000016
  .word 0x00000000
  .word 0x000b1100
  .word 0x004b1023
  .word 0x00021880
  .word 0x8c820028
  .word 0x8c420048
  .word 0x8c420004
  .word 0x00431021
  .word 0x94420002
  .word 0x1040000b
  .word 0x00000000
  .word 0x14aa0008
  .word 0x00000000
  .word 0x00c81021
  .word 0x8c420028
  .word 0x8c420048
  .word 0x8c420004
  .word 0x00431021
  .word 0x1000000b
  .word 0x00000000
  .word 0x254a0001
  .word 0x256b0001
  .word 0x29620006
  .word 0x1440ffe9
  .word 0x00000000
  .word 0x25290001
  .word 0x0127102a
  .word 0x1440ffe0
  .word 0x00000000
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
}

static void K_Encount_CompactEc(EncounterWork* work)
{
    u32 i;
    u32 out = 0;
    for (i = 0; i < work->ecCount && i < 4; ++i)
    {
        if (work->ec[i] != NULL)
        {
            work->ec[out++] = work->ec[i];
        }
    }
    while (out < 4)
    {
        work->ec[out++] = NULL;
    }
}

// FUN_001d7c60
FldUnit* func_001d7c60(KwlnTask* task, s32 flatIndex)
{
    s32 unitIndex;
    s32 flatUnitIndex;
    s32 pcIndex;
    s32 pcCount;
    s32 ecIndex;
    s32 ecCount;
    EncounterWork* work;
    s32 unitOffset;
    u32 ecOffset;
    u8* ecBase;

    work = (EncounterWork*)task->workData;
    flatUnitIndex = 0;
    pcIndex = 0;
    pcCount = work->pcCount;
    goto pc_check;
pc_body:
    if (flatIndex == flatUnitIndex)
    {
        return work->pc[pcIndex];
    }
    flatUnitIndex++;
    pcIndex++;
pc_check:
    if (pcIndex < pcCount)
    {
        goto pc_body;
    }

    ecIndex = 0;
    ecCount = work->ecCount;
    goto ec_check;
ec_body:
    unitIndex = 0;
    ecOffset = ecIndex * 4;
    ecBase = (u8*)work + ecOffset;
    goto unit_check;
unit_body:
    unitOffset = unitIndex * sizeof(DatUnit);
    if (((DatUnit*)((u8*)(*(FldUnit**)(ecBase + 0x28))->genusBase->unit + unitOffset))->id != 0)
    {
        if (flatIndex == flatUnitIndex)
        {
            return work->ec[ecIndex];
        }
        flatUnitIndex++;
    }
    unitIndex++;
unit_check:
    if (unitIndex < 6)
    {
        goto unit_body;
    }
    ecIndex++;
ec_check:
    if (ecIndex < ecCount)
    {
        goto ec_body;
    }
    return NULL;
}

// FUN_001d7d40
asm void* func_001d7d40(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080802d
  .word 0x8c92003c
  .word 0x8e420008
  .word 0x24050001
  .word 0x14450004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100002fd
  .word 0x00000000
  .word 0x8e430000
  .word 0x24020002
  .word 0x106202f5
  .word 0x00000000
  .word 0x10650158
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100002f2
  .word 0x00000000
  .word 0x3c020068
  .word 0xdc433b38
  .word 0x3c020068
  .word 0xc4403b40
  .word 0xffa300a0
  .word 0xe7a000a8
  .word 0x3c020068
  .word 0xdc433b48
  .word 0x3c020068
  .word 0xc4403b50
  .word 0xffa30090
  .word 0xe7a00098
  .word 0x8e420018
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540030
  .word 0x8e420028
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400030
  .word 0x4600a000
  .word 0xe7a000c0
  .word 0x8e420018
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540034
  .word 0x8e420028
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400034
  .word 0x4600a000
  .word 0xe7a000c4
  .word 0x8e420018
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540038
  .word 0x8e420028
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400038
  .word 0x4600a0c0
  .word 0xe7a300c8
  .word 0x3c024000
  .word 0x44821000
  .word 0xc7a000c0
  .word 0x46020003
  .word 0xe7a000c0
  .word 0xc7a000c4
  .word 0x46020043
  .word 0xe7a100c4
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a000c4
  .word 0x46021803
  .word 0x00000000
  .word 0x00000000
  .word 0xe7a000c8
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441200
  .word 0x27a500c0
  .word 0x0c06a46c
  .word 0x00000000
  .word 0xae42000c
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441200
  .word 0x8e45000c
  .word 0x24060003
  .word 0x0c06a4e4
  .word 0x00000000
  .word 0x0c130e30
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e420028
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540030
  .word 0x8e420018
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400030
  .word 0x4600a001
  .word 0xe7a000b0
  .word 0x8e420028
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540034
  .word 0x8e420018
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400034
  .word 0x4600a001
  .word 0xe7a000b4
  .word 0x8e420028
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4540038
  .word 0x8e420018
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4400038
  .word 0x4600a001
  .word 0xe7a000b8
  .word 0x27a400b0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7b50094
  .word 0xc7b40098
  .word 0xc7a300b8
  .word 0xc7a200b0
  .word 0xc7a10090
  .word 0xc7a000b4
  .word 0x4615001a
  .word 0x4601101e
  .word 0x46141b1c
  .word 0x0c14ba7a
  .word 0x00000000
  .word 0xc78182b0
  .word 0x46000b02
  .word 0xc7a100b0
  .word 0x44800000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000005
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x46006302
  .word 0x3c023f80
  .word 0xae220028
  .word 0xae220014
  .word 0xae220000
  .word 0xae200010
  .word 0xae200008
  .word 0xae200004
  .word 0xae200024
  .word 0xae200020
  .word 0xae200018
  .word 0xae200038
  .word 0xae200034
  .word 0xae200030
  .word 0x8e23000c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xae22000c
  .word 0x0220202d
  .word 0x27a500a0
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x8e420018
  .word 0x8c420054
  .word 0x8c4401e0
  .word 0x0220282d
  .word 0x0c06b678
  .word 0x00000000
  .word 0xc7a000b0
  .word 0x460000c7
  .word 0xe7a300b0
  .word 0xc7a000b4
  .word 0x46000087
  .word 0xe7a200b4
  .word 0xc7a000b8
  .word 0x46000047
  .word 0xe7a100b8
  .word 0xc7a00090
  .word 0x4615101a
  .word 0x4600181e
  .word 0x46140b1c
  .word 0x0c14ba7a
  .word 0x00000000
  .word 0xc78182b0
  .word 0x46000b02
  .word 0xc7a100b0
  .word 0x44800000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000005
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x46006302
  .word 0x3c023f80
  .word 0xae220028
  .word 0xae220014
  .word 0xae220000
  .word 0xae200010
  .word 0xae200008
  .word 0xae200004
  .word 0xae200024
  .word 0xae200020
  .word 0xae200018
  .word 0xae200038
  .word 0xae200034
  .word 0xae200030
  .word 0x8e23000c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xae22000c
  .word 0x0220202d
  .word 0x27a500a0
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x8e420028
  .word 0x8c420054
  .word 0x8c4401e0
  .word 0x0220282d
  .word 0x0c06b678
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c130e20
  .word 0x00000000
  .word 0x8e420018
  .word 0x8c440050
  .word 0x0000282d
  .word 0x24060004
  .word 0x0000382d
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e430018
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8c640050
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x8e420028
  .word 0x8c440050
  .word 0x0000282d
  .word 0x24060003
  .word 0x0000382d
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e430028
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8c640050
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x8e420018
  .word 0x8c440170
  .word 0x0c06c030
  .word 0x00000000
  .word 0x8e420028
  .word 0x8c440170
  .word 0x0c06c030
  .word 0x00000000
  .word 0x8e04003c
  .word 0x8c820010
  .word 0xac820048
  .word 0xac80004c
  .word 0x0000282d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00051080
  .word 0x00821021
  .word 0x8c420028
  .word 0x8c420048
  .word 0x94430002
  .word 0x8c82004c
  .word 0x00431021
  .word 0xac82004c
  .word 0x24a50001
  .word 0x8c820014
  .word 0x00a2102a
  .word 0x1440fff4
  .word 0x00000000
  .word 0x8c830048
  .word 0x8c82004c
  .word 0x00621021
  .word 0xac820044
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x8e430044
  .word 0x0043001b
  .word 0x00001010
  .word 0xae420050
  .word 0x10000009
  .word 0x00000000
  .word 0x8e420050
  .word 0x24430001
  .word 0xae430050
  .word 0x8e420044
  .word 0x0062102a
  .word 0x14400002
  .word 0x00000000
  .word 0xae400050
  .word 0x0200202d
  .word 0x8e450050
  .word 0x0c075edc
  .word 0x00000000
  .word 0x0040202d
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x1440ffef
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400009
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8e430018
  .word 0x946501a8
  .word 0x8c440028
  .word 0x24060001
  .word 0x0c062fb8
  .word 0x00000000
  .word 0x8e420000
  .word 0x24420001
  .word 0xae420000
  .word 0x1000019f
  .word 0x00000000
  .word 0x8e430038
  .word 0x8e42003c
  .word 0x0043082a
  .word 0x10200193
  .word 0x00000000
  .word 0x8e450050
  .word 0x8e420048
  .word 0x00a2082a
  .word 0x10200079
  .word 0x00000000
  .word 0x8e420040
  .word 0x14400098
  .word 0x00000000
  .word 0x0c075edc
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c07f1c8
  .word 0x00000000
  .word 0x10400026
  .word 0x00000000
  .word 0x8e420050
  .word 0x00021080
  .word 0x00521021
  .word 0x8c420018
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20080
  .word 0xe7a10084
  .word 0xe7a00088
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44120c
  .word 0x27a50080
  .word 0x0c06a46c
  .word 0x00000000
  .word 0x8e420050
  .word 0x00021080
  .word 0x00521821
  .word 0x3c024516
  .word 0x44826000
  .word 0x8c640018
  .word 0x0c071c4c
  .word 0x00000000
  .word 0x24040001
  .word 0x14440073
  .word 0x00000000
  .word 0x24050008
  .word 0x24060003
  .word 0x0080382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x1000006c
  .word 0x00000000
  .word 0x8e420050
  .word 0x00021080
  .word 0x00521821
  .word 0x3c024516
  .word 0x44826000
  .word 0x8c640018
  .word 0x0c071c4c
  .word 0x00000000
  .word 0x24040001
  .word 0x14440006
  .word 0x00000000
  .word 0x24050008
  .word 0x24060003
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e11003c
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x8e23004c
  .word 0x0043001b
  .word 0x00001810
  .word 0x8e220048
  .word 0x00432821
  .word 0x0200202d
  .word 0x0c075edc
  .word 0x00000000
  .word 0x0040602d
  .word 0x94420008
  .word 0x1840fff3
  .word 0x00000000
  .word 0x0200202d
  .word 0x8e450050
  .word 0x0c075edc
  .word 0x00000000
  .word 0x0040202d
  .word 0x0180282d
  .word 0x0c07f164
  .word 0x00000000
  .word 0x0200202d
  .word 0x8e450050
  .word 0x0c075f18
  .word 0x00000000
  .word 0x0040882d
  .word 0x944401a8
  .word 0x0c05ccc0
  .word 0x00000000
  .word 0x304300ff
  .word 0x8e220184
  .word 0x0043082b
  .word 0x10200038
  .word 0x00000000
  .word 0xae230184
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400032
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x962501a8
  .word 0x8c440028
  .word 0x24060003
  .word 0x0c062fb8
  .word 0x00000000
  .word 0x2404000a
  .word 0x8e2501b4
  .word 0x8e2601b8
  .word 0x24070008
  .word 0x0c0d6f00
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x3c024516
  .word 0x44826000
  .word 0x8e440028
  .word 0x0c071c4c
  .word 0x00000000
  .word 0x24040001
  .word 0x14440006
  .word 0x00000000
  .word 0x24050008
  .word 0x24060003
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e11003c
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x8e230048
  .word 0x0043001b
  .word 0x00002810
  .word 0x0200202d
  .word 0x0c075edc
  .word 0x00000000
  .word 0x0040602d
  .word 0x94420008
  .word 0x1840fff5
  .word 0x00000000
  .word 0x0200202d
  .word 0x8e450050
  .word 0x0c075edc
  .word 0x00000000
  .word 0x0040202d
  .word 0x0180282d
  .word 0x0c07f164
  .word 0x00000000
  .word 0x0000982d
  .word 0x0000a02d
  .word 0x1000002c
  .word 0x00000000
  .word 0x00141080
  .word 0x02421021
  .word 0x24510018
  .word 0x8c420018
  .word 0x8c440048
  .word 0x0c0bfde4
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x26730001
  .word 0x1000001f
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c420028
  .word 0x10400009
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8e230000
  .word 0x946501a8
  .word 0x8c440028
  .word 0x24060002
  .word 0x0c062fb8
  .word 0x00000000
  .word 0x8e220000
  .word 0x8c440050
  .word 0x0000282d
  .word 0x0c0c6150
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24060015
  .word 0x10460008
  .word 0x00000000
  .word 0x8e220000
  .word 0x8c440050
  .word 0x0000282d
  .word 0x24070002
  .word 0x0000402d
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x26940001
  .word 0x8e420010
  .word 0x0282102a
  .word 0x1440ffd2
  .word 0x00000000
  .word 0x16600022
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000011
  .word 0x00000000
  .word 0x00101080
  .word 0x02421021
  .word 0x8c430028
  .word 0x1060000b
  .word 0x00000000
  .word 0x8c620048
  .word 0x10400008
  .word 0x00000000
  .word 0x8c640050
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x26100001
  .word 0x8e420014
  .word 0x0202102a
  .word 0x1440ffed
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441200
  .word 0x8e45000c
  .word 0x0c06a500
  .word 0x00000000
  .word 0x24020002
  .word 0xae420000
  .word 0x100000a5
  .word 0x00000000
  .word 0x0000982d
  .word 0x0000882d
  .word 0x10000052
  .word 0x00000000
  .word 0x00111080
  .word 0x02421021
  .word 0x24540028
  .word 0x8c420028
  .word 0x1040004b
  .word 0x00000000
  .word 0x8c440048
  .word 0x0c0bfde4
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x26730001
  .word 0x10000043
  .word 0x00000000
  .word 0x8e820000
  .word 0x8c440050
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20070
  .word 0xe7a10074
  .word 0xe7a00078
  .word 0xc7a10074
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00074
  .word 0x8e420050
  .word 0x00021080
  .word 0x02421821
  .word 0x3c024516
  .word 0x44826000
  .word 0x8c640018
  .word 0x0c071c4c
  .word 0x00000000
  .word 0x24040001
  .word 0x14440006
  .word 0x00000000
  .word 0x24050008
  .word 0x24060002
  .word 0x00a0382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441204
  .word 0x27a50070
  .word 0x0c06a46c
  .word 0x00000000
  .word 0x00111080
  .word 0x02421021
  .word 0x24540028
  .word 0x8c440028
  .word 0x0c074044
  .word 0x00000000
  .word 0x0c074a84
  .word 0x00000000
  .word 0xae800000
  .word 0x8e420014
  .word 0x2442ffff
  .word 0xae420014
  .word 0x0000282d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00051080
  .word 0x02422021
  .word 0x24830028
  .word 0x8c820028
  .word 0x14400003
  .word 0x00000000
  .word 0x8c82002c
  .word 0xac620000
  .word 0x24a50001
  .word 0x8e420014
  .word 0x00a2102a
  .word 0x1440fff4
  .word 0x00000000
  .word 0x26310001
  .word 0x8e420014
  .word 0x0222102a
  .word 0x1440ffac
  .word 0x00000000
  .word 0x16600028
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000017
  .word 0x00000000
  .word 0x00101080
  .word 0x02421021
  .word 0x24510018
  .word 0x8c420018
  .word 0x10400010
  .word 0x00000000
  .word 0x8c440048
  .word 0x1080000d
  .word 0x00000000
  .word 0x0c0bfde4
  .word 0x00000000
  .word 0x24080001
  .word 0x10480008
  .word 0x00000000
  .word 0x8e220000
  .word 0x8c440050
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x26100001
  .word 0x8e420010
  .word 0x0202102a
  .word 0x1440ffe7
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c441200
  .word 0x8e45000c
  .word 0x0c06a500
  .word 0x00000000
  .word 0x24020002
  .word 0xae420000
  .word 0x10000023
  .word 0x00000000
  .word 0x8e420050
  .word 0x24430001
  .word 0xae430050
  .word 0x8e420044
  .word 0x0062102a
  .word 0x14400002
  .word 0x00000000
  .word 0xae400050
  .word 0x0200202d
  .word 0x8e450050
  .word 0x0c075edc
  .word 0x00000000
  .word 0x0040202d
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x1440ffef
  .word 0x00000000
  .word 0x8e42003c
  .word 0x28410017
  .word 0x14200003
  .word 0x00000000
  .word 0x24020016
  .word 0xae42003c
  .word 0xae400038
  .word 0x10000008
  .word 0x00000000
  .word 0x24620001
  .word 0xae420038
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
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}








// Retail offsets 0x00-0x4a8 reconstruct unit registration, facing rotation,
// field updates, and active-count aggregation; 1196 of 1200 bytes are implemented.

static u32 K_Encount_AppendRecord(EncounterRecord* out, u16 id)
{
    if (out->count >= 3)
    {
        return 0;
    }
    out->ids[out->count++] = id;
    return 1;
}

static u32 K_Encount_HpRatio(u16 id, f32* ratio)
{
    u32 maxHp = datGetMaxHp((s16)id);
    if (maxHp == 0)
    {
        return 0;
    }
    *ratio = (f32)datGetHp((s16)id) / (f32)maxHp;
    return 1;
}





static KwlnTask* K_Encount_CreatePeriodicScript(PeriodicWork* work, u32 slot, u32 procedure)
{
    KwlnTask* child;
    if (slot >= 16)
    {
        return NULL;
    }
    child = scrCreateTaskFromHeader(10, D_007CE220, procedure);
    work->scriptTask[slot] = child;
    if (child != NULL)
    {
        func_0035c1a0(child, (int)&work->records[slot]);
    }
    return child;
}




// num of pixels in a single quad

// 256 bytes

/* The filter controller keeps the first six words in the small-BSS block. */

/* This word belongs to the neighbouring field-resource work block. */


/* Work data for the field camera controller (the public header intentionally
 * keeps the post-camera fields opaque). */






/* Return the closest camera point to the controlled character. */


// FUN_001d89b0
void func_001d89b0(KwlnTask* task)
{
    EncounterWork* work;
    u32 i;

    work = (EncounterWork*)task->workData;
    for (i = 0; i < work->pcCount; ++i)
    {
        FldUnit** slot = &work->pc[i];
        if ((*slot)->genusBase != NULL)
        {
            if (datGetFlag(0xC22) == 0 &&
                datGetScenarioMode() == 0 &&
                RpRandom() % 100 < 50)
            {
                func_002ffb00_u32((*slot)->genusBase);
            }
            if (func_002ff790((*slot)->genusBase) == 0)
            {
                if (*(KwlnTask**)((u8*)K_Field_Get() + 0x28) != NULL)
                {
                    func_0018bee0(
                        *(KwlnTask**)((u8*)K_Field_Get() + 0x28),
                        (*slot)->charId, 0);
                }
            }
        }
    }
    D_00875A40[work->taskSlot] = NULL;
    RwFree(task->workData);
}
