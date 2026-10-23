typedef struct RuntimeTask RuntimeTask;
typedef struct RuntimeWork RuntimeWork;
typedef struct RuntimeListNode RuntimeListNode;
typedef struct RuntimeVec3 RuntimeVec3;
typedef struct RuntimeRenderCollection RuntimeRenderCollection;
typedef struct RuntimeTransitionWork RuntimeTransitionWork;
typedef struct RuntimeFieldEditorWork RuntimeFieldEditorWork;
typedef struct RuntimeControllerWork RuntimeControllerWork;
typedef struct RuntimeMatrix RuntimeMatrix;
typedef struct RuntimeTransitionAngles RuntimeTransitionAngles;
typedef struct RuntimeResetWork RuntimeResetWork;
typedef struct RuntimePathWork RuntimePathWork;
typedef struct RuntimeDistanceWork RuntimeDistanceWork;
typedef struct RuntimeCommandWork RuntimeCommandWork;
typedef struct FieldRuntimeResourceNode FieldRuntimeResourceNode;
typedef struct FieldRuntimeTaskNode FieldRuntimeTaskNode;
typedef struct FieldArchiveRequest FieldArchiveRequest;
#include "Kosaka/k_vpad.h"
#include "Kosaka/Field/k_fldFrame.h"
#include "Kosaka/Field/k_field.h"
#include "Kosaka/Field/k_fldCamera.h"
#include "Kosaka/Field/k_event.h"
#include "Kernel/Kwln/kwln.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Graphics/Model/mdlManager.h"
#include "Main/g_data.h"
#include "h_pad.h"
#include "libm.h"
#include "Utils.h"
#include "h_cdvd.h"
#include "Kosaka/Field/k_fieldRuntime.h"

typedef struct RuntimeTask RuntimeTask;
typedef struct RuntimeWork RuntimeWork;
typedef struct RuntimeListNode RuntimeListNode;
typedef struct RuntimeVec3
{
    f32 x;
    f32 y;
    f32 z;
} RuntimeVec3;
typedef struct RuntimeRenderCollection
{
    u32 flags;
    u8* input;
    u8* entries;
    void** renderObjects;
    u8* commands;
    RuntimeVec3* worldPositions;
} RuntimeRenderCollection;
struct RuntimeTask
{
    u8 reserved[0x3c];
    RuntimeWork* workData;
};
struct RuntimeWork
{
    u32 flags;
    u32 requestFlags;
    u32 completedFlags;
    u32 state;
    u32 phase;
    u32 selection;
    u32 currentIndex;
    u32 count;
    void* owner;
    void* resource;
    void* renderData;
    void* childTask;
    RuntimeListNode* previous;
    RuntimeListNode* next;
    RuntimeVec3* positions;
    RuntimeVec3* normals;
    u32 slots[1024];
};
typedef struct RuntimeTransitionWork
{
    u32 state;
    void* windowTask;
    u32 flags;
    u32 reserved0c;
    u16 resourceId;
    u8 reserved12[2];
    void* positionTask;
} RuntimeTransitionWork;
typedef struct RuntimeFieldEditorWork
{
    u32 state;
    void* controllerTask;
    void* noticeTask;
    void* menuTask;
    void* choiceTask;
    s32 selection;
} RuntimeFieldEditorWork;
typedef struct RuntimeControllerWork RuntimeControllerWork;
struct RuntimeControllerWork
{
    u32 state;
    void* windowTask;
    void* secondaryTask;
    u32 count;
    u16 majorId;
    u16 minorId;
    u16 resourceId;
    u8 type;
    u8 flags;
    f32 angle;
    u32 value;
    u8 sourceType;
    u8 sourceFlags;
    u8 reserved22[2];
    f32 scale;
    void* model;
    void* controller;
};
struct RuntimeListNode
{
    u32 flags;
    RuntimeWork* work;
    void* vertices;
    void* renderObjects;
    u8 reserved[8];
    RuntimeListNode* previous;
    RuntimeListNode* next;
};
typedef struct RuntimeMatrix
{
    f32 values[16];
} RuntimeMatrix;
typedef struct RuntimeTransitionAngles
{
    u8 reserved[0x24];
    RuntimeVec3 value;
} RuntimeTransitionAngles;
typedef struct RuntimeResetWork
{
    u32 flags;
    u32 value;
    u32 completedFlags;
    u32 reserved;
    void* work;
} RuntimeResetWork;
typedef struct RuntimePathWork
{
    u32 flags;
    RuntimeVec3* firstVectors;
    RuntimeVec3* secondVectors;
    RuntimeVec3* thirdVectors;
    RuntimeMatrix* matrix;
    u32 rowCount;
    u32 columnCount;
    u32 reserved;
    u8 color[4];
} RuntimePathWork;
typedef struct RuntimeDistanceWork
{
    void** config;
    u8 reserved04[4];
    s32 count;
    u8 reserved0c[4];
    RuntimeVec3* firstVectors;
    RuntimeVec3* secondVectors;
} RuntimeDistanceWork;
typedef struct RuntimeCommandWork
{
    u32 flags;
    u16* cursor;
    u8 reserved08[8];
    RuntimeWork* target;
    u32 elapsed;
    u16 delay;
    u16 reserved1a;
    u32 duration;
} RuntimeCommandWork;
typedef struct FieldRuntimeResourceNode FieldRuntimeResourceNode;
typedef struct FieldRuntimeTaskNode FieldRuntimeTaskNode;
typedef struct FieldArchiveRequest FieldArchiveRequest;
struct FieldRuntimeResourceNode
{
    void* resource;
    u16 areaId;
    u16 roomId;
    u16 resourceId;
    u8 type;
    u8 flags;
    f32 angle;
    u32 value;
    u8 reserved14[0x0c];
    RuntimeMatrix matrix;
    u8 state;
    u8 sourceType;
    u8 reserved62[2];
    f32 scale;
    FieldRuntimeResourceNode* previous;
    FieldRuntimeResourceNode* next;
};
struct FieldRuntimeTaskNode
{
    void* task;
    u8 reserved04[0x0c];
    RuntimeMatrix matrix;
    u16 resourceId;
    u8 reserved52[2];
    FieldRuntimeTaskNode* previous;
    FieldRuntimeTaskNode* next;
    u8 reserved5c[4];
};
struct FieldArchiveRequest
{
    u8 reserved0[0x110];
    void* data;
    u8 reserved1[4];
    u32 size;
};
typedef struct Model Model;
extern Model* mdlCreateFromPath(u16 type, u16 id, const char* path, u32 readMode);
extern Model* mdlCreateAndResolvePath(u16 type, u16 id, u32 readMode);
extern void* func_001a3b10(void* parent, u32 width, u32 height, u32 mode);
extern void func_001a3dc0(void* task, const void* descriptors, u32 count);
extern void func_001a3bf0(void* task, u32 request);
extern s32 func_001a4510(void* task);
extern void func_001a3be0(void* task, u32 request);
extern void* func_001a4010(void* task, u32 index);
extern s32 func_00195460(void* task);
extern void FUN_00524270(void* destination, const char* source);
extern s32* func_001a41b0(void* task, u32 id);
extern void K_Draw_CopyPositionCenter(RuntimeVec3* destination, void* task);
extern void* K_Draw_GetPositionMatrix(void* task);
extern void K_Draw_SetPositionPos(void* task, const RuntimeVec3* position);
extern void K_Draw_MovePositionInDir(f32 distance, void* task,
                                     const RuntimeVec3* direction);
extern void K_Draw_RotatePosition(void* task, const RuntimeVec3* axis,
                                  f32 angle);
extern void* func_001a5000(void* task);
extern u16 DAT_007e094c;
extern u16 DAT_007e094e;
#pragma alias DAT_007e094c_abs DAT_007e094c
#pragma alias DAT_007e094e_abs DAT_007e094e
extern u8 DAT_007e094c_abs[];
extern u8 DAT_007e094e_abs[];
extern u8 DAT_007e095e[];
extern u8 DAT_007e0960[];
extern u16 DAT_007e0952;
#pragma alias DAT_007e0952_abs DAT_007e0952
extern u8 DAT_007e0952_abs[];
extern u8 D_00683E10[];
extern char D_00683F70[];
extern char D_00683F88[];
extern char D_00683F98[];
extern char D_00683FB0[];
extern char D_00683FD0[];
extern char D_007CC2F8;
extern char D_007CC2FC;
extern char D_007CC300;
extern char D_007CC304;
extern char D_007CC308;
extern u8 D_00684370[];
extern char D_00684330[];
extern char D_00684380[];
extern void* func_001a4cd0(s32 parent);
extern u32 func_001a3f20(void* task, const char* name);
extern s32 func_00316f70(void* object);
extern void* func_00316e00(u16 majorId, u16 minorId, s32 mode);
extern u16 func_003b6270(u16 resourceId, u8 type, void* model);
extern void func_001a0dc0(u16 resourceId, s32 enabled);
extern void func_001ad8c0(f32 value, void* controller);
extern void func_001ad870(void* controller, u32 flags);
extern void func_001ad890(void* controller, u32 flags);
extern void func_001ad940(RuntimeVec3* output, void* controller);
extern void func_001addf0(f32 amount, void* controller,
                          const RuntimeVec3* direction);
extern void func_001adff0(f32 amount, void* controller,
                          const RuntimeVec3* direction);
extern void func_001ae0d0(void* controller);
extern void func_0019c320(f32 value, void* controller);
extern s32 func_001a4380(void* task, u32 id);
extern char D_006842D0[];
extern void func_004c2f10(void* matrix);
extern char D_00684120[8];
extern char D_00684128[8];
extern char D_00684220[8];
extern char D_00684270[8];
extern char D_00684290[8];
extern RuntimeVec3 D_00684260;
extern void* DAT_0096017c[];
extern s32* PTR_DAT_007cd540;
extern void func_004c3880(void* matrix);
extern void* func_001e8e80(RuntimeWork* rawWork, void* material);
extern RuntimeWork* func_001ee2e0(const void* data);
extern RuntimeWork* func_001eeb90();
extern void func_001eee40(RuntimeWork* work);
extern void func_001eefc0(void* node);
extern void func_00100ec0(void* resource);
extern RuntimeMatrix* func_004c38c0(void);
extern RuntimeVec3 D_00684400;
extern void func_00318d10(void* context, void* object, RuntimeMatrix* matrix);
extern void func_00492d10(void* manager, void* frame);
extern void func_00491a80(void* manager);
extern void* func_001e1840(void);
extern void FUN_00521250(void* destination, const void* source, u32 size);
extern s32 D_007CE2C0;
s32 func_001ef000(RuntimeListNode* node);
s32 func_001e8330(const RuntimeWork* work, s32 index);
extern void func_00493230();
void func_001ed0b0(RuntimeWork* work);
void func_001ed080(f32 value, RuntimeWork* work);
void func_001ef340(void* owner);
extern u8* func_001b9120(void);
extern u32 func_001b0910(void);
extern void* func_001016b0(void* resource);
extern void* func_001021c0(const char* path, u32* size);
extern FieldRuntimeTaskNode* func_001e29e0(u32 resourceId);
FieldRuntimeResourceNode* func_001e2850(void);
FieldRuntimeTaskNode* func_001e2a20(void);
extern HCdvd* K_Fldrc_GetFldPacCdvd(void);
extern char D_00684020[];
extern char D_00684410[];
extern char D_00684470[];
extern char D_00684490[];
extern char D_00684430[];
extern char D_006844B0[];
extern char D_00684060[];
extern char D_00684040[];
extern char D_00684310[];
extern char D_006843A0[];
extern char D_006842A8[];
extern char D_006844D0[];
extern char D_006844F8[];
extern void func_0019d3f0(const char* file, s32 line);
extern f32 func_004c6ac0(RuntimeVec3* vector);
extern void func_004c69f0(RuntimeVec3* output, const RuntimeVec3* input);
extern void func_004c6be0(RuntimeVec3* destination,
                          const RuntimeVec3* source, void* matrix);
extern void func_004c32a0(void* destination, const void* source);
extern f32 D_007CADD4;
extern char D_007CC348;
extern char D_007CC350;
extern u32 D_007CE2C4;
extern u32 D_007CE200;
extern u32 D_007CE244;
extern u32 D_007CDF38;
extern void FUN_00523ac8(char* destination, const char* format, ...);
extern void FUN_005225a8(const char* format, ...);
extern void* func_004bad50(void* file, const char* path);
extern char D_006843F0[];
extern void FUN_00521408(void* destination, s32 value, u32 size);
extern void func_00195770(s32 enabled);
extern void func_001949e0(void);
extern void func_004bf540();
extern void* func_00493710(s32 vertexCount, s32 triangleCount, void* data);
extern void func_00493210(void* geometry, void* triangle, u16 a, u16 b, u16 c);
extern void* func_00491880(void);
extern void func_004919b0(void* manager, void* geometry, s32 index);
extern void func_00493b60(void* geometry);
extern void* func_004ca5b0(void);
extern void func_004ca560(void* dimensions, void* context);
extern void func_004d7f60(s32 index, u32 value);
extern void func_00263db0(void);
extern void func_002737a0(void);
extern void func_004caf80(void* object);
extern void func_00494cc0(void* object);
extern void* func_00494be0(void);
extern void func_00494d50(void* material, void* texture);
extern void* func_004caf10(void);
extern void func_004933d0(void* geometry);
extern void func_00493370(void* renderObject, u32 state);
extern void func_004cb930(void* geometry);
extern void func_004cb7f0(void* geometry, void* matrix, s32 mode);
extern void* func_00318b60(void* owner);
extern char D_00684508[];
extern void* func_00198590(void);
extern void func_004c9d10(void* context);
extern void func_004c9d00(void* context);
extern u16 D_006844E8[];
#define FIELD_RUNTIME_ALLOCATOR (*(void* (**)(u32, ...))0x00960184)
#define FIELD_RUNTIME_PRIMARY_ALLOCATOR (*(void* (**)(u32, u32))0x00960178)
extern void (*DAT_00960094)(s32 state, u32* value);
extern void (*DAT_00960090)(s32 state, u32 value);
extern FieldRuntimeTaskNode* D_007CE2BC;
extern void* D_007CE2C8;
extern RuntimeListNode* D_007CE2CC;
extern void* D_007CE2D0;
extern void* D_007CE2D4;
extern char D_00684518[];
extern char D_00684530[];
extern void* func_00100d80(const char* path, s32 mode);
extern void func_001023a0(void* resource);
extern void* func_004d1260(const char* path, s32 mode);
s32 func_001ef060();
extern void* func_001b83f0(void);
extern u16* func_001b85a0(u32 index);
extern u16* func_001b8d60(u32 index);
extern void* func_001b8db0(void* record);
extern void func_003b78b0(u16 resourceId, void* position, void* angles);
extern u16 func_003b5e90(u16 resourceId);
extern f32 func_001a5bc0(void* matrix);
extern f32 func_001a5b30(void* matrix);
extern s32 H_Fade_IsFadeOutDone(void);
extern void H_Fade_FadeOut(void);
extern void H_Fade_FadeIn(void);
extern void H_Fade_SetType(s32 type);
extern void H_Fade_SetDuration(s32 duration);
extern void func_001e2430(void);
extern void* func_001e0510(void* task, void* camera);
extern void* func_001e4b40(void* task);
extern void* func_001e5850(void* task);
extern void func_003b7090(u16 resourceId);
extern void func_00195020(void* task);
extern void* func_001e6030(void* task);
extern void func_001a4dc0(void* task, const void* color);
extern void func_001e2a70(FieldRuntimeTaskNode* node, s32 releaseResource);
extern RuntimeVec3 D_006843B0;
extern char D_006843C0[];
extern char D_006843D0[];
extern char D_006843E0[];
extern f32 D_007CB118[];
extern u8 D_007CC338[];
extern u8 D_007CC33C[];
extern void* func_001e6a70(void* task);
extern void func_001e2930(s32 value);
extern void func_001e2b10(s32 value);
extern s32 func_001e2bd0();
extern void func_001e9a90(void* work);
extern s32 func_001ed9e0(void* work);
extern void func_001edbe0(RuntimeRenderCollection* work);
extern void func_001edf10(void* work);
extern void func_001eba50(RuntimeResetWork* work);
extern void func_001eba80(RuntimeCommandWork* work, u32* result);
extern void func_001ebd80(RuntimeWork* work, s32 param2);
extern f32 func_001ecd90(void* data, s32 index, s32 vectorSet);
extern f32 func_001ecec0(void* data, s32 index);
extern s32 func_00236340(void);
extern void func_002362e0(void);
extern void func_003c7430(s32 mode);
extern s32 func_003c7850(void);
extern void func_003c7650(s32 mode);
extern void func_003c72d0(void* work);
extern void* func_002345d0(s32 mode);
extern void func_003c77a0(void);
extern void func_003c7990();
extern void func_003c7c20(s32 group, s32 id, s32 kind);
extern void func_0010a4e0(s32 a0, s32 a1, s32 a2, s32 a3);
extern void H_Snd_PlayBgm(s32 id, s32 restart);
extern void func_0010a370(s32 mode, const char* name);
extern void func_00234070(void);
extern void func_00235010(void);
extern void func_00263170(void);
extern void func_00272810(void);
extern void func_00275bc0(void);
extern void func_00276930(void);
extern void func_002770f0(void);
extern s32 func_001f4910(void* controller);
extern s32 func_00233ad0(void);
extern s32 func_00233bb0(void);
extern void func_001f4930(void* controller);
extern void func_001f1c90(RuntimeTask* task);
extern s32 func_001f4970(void* controller);
extern s32 func_001f30b0(void* controller);
extern void func_001f1aa0(RuntimeTask* task);
extern s32 func_001b07d0(void);
extern void func_001b0840(void);
extern void func_00233c00(void);
extern void func_001f0a60(RuntimeTask* task);
extern void func_001f0ab0(RuntimeTask* task);
extern void func_00108570(void);
extern void func_00108670(s32 mode);
extern void func_001086a0(s32 mode);
extern void func_001f0d70(RuntimeTask* task);
extern s32 func_00233d20(void);
extern void func_002767e0(void);
extern void func_001f0ff0(void);
extern void func_001f10b0(void);
extern void func_001f10f0(void);
extern void func_001f0fd0(RuntimeTask* task);
extern void func_001f0eb0(RuntimeTask* task);
extern void* func_001f1210(RuntimeTask* task);
extern u32 func_00175410(void);
extern s32 func_001fb1b0(s32 type, u16 id);
extern s32 func_0017d800(void);
extern u32 func_00173220(u16 id);
extern void func_003c7bc0(s32 group, u32 value);
extern void func_00275a90(void);
extern void func_00264e30(u16 id);
extern void* func_00264ff0(void);
extern void func_00272400(void* entry);
extern void func_002769c0(void* resource, u16 id);
extern s32 func_00275370(void);
extern void func_00276ba0(void);
extern void func_00276d90(void);
extern void func_001085c0(void);
extern void func_002753c0(void);
extern s32 func_002727c0(void);
extern void func_00277070(void);
extern void func_00264ef0(u16 id);
extern void* iGpffffb6fc;
extern char D_00684578[];
extern char D_00684588[];
extern char D_006845A0[];
extern s32 func_001a0250(void);
extern void func_001a1540(s32 a, s32 b, s32 line, const char* file);
extern void* func_003b5d10(u16 resourceId);
extern char D_00684450[];
extern s32 func_001ef7f0(RuntimeTask* task);
extern s32 func_001f07a0(RuntimeTask* task);
extern void func_001f0970(RuntimeTask* task);
extern s32 func_001f08c0(RuntimeTask* task);
extern s32 func_001f0900(RuntimeTask* task);
extern s32 func_001f0940(RuntimeTask* task);
extern void func_00195550(void* parent, void* child);
extern void func_001f0ad0(void* task, void* parent);
extern void func_00233970(void* work);
extern void func_00234820(void* work);
extern void func_002626e0(void* work);
extern void brPersonaInit(void* work);
extern void func_00272330(void* work);
extern void func_00275a70(void* work);
extern void func_00276910(void* work);
extern void func_00276d10(void* work);
extern void func_0021eac0(void* object, f32 value);
extern void func_0021d8e0(void* object, const f32* rectangle);
extern void func_0021d950(void* object, const u8* color);
extern void func_002339d0(void);
extern void* func_001f2080(void* work);
extern void func_001f48d0(void* work);
extern char D_00684548[];
extern char D_00684560[];
extern RuntimeWork* D_007CE2D8;
extern u32 D_007CDF0C;

extern void* func_00316b40(s32 majorId, s32 minorId, const char* path,
                           s32 mode);
extern void func_001ed0f0(f32 amount, const RuntimeWork* work, s32 channel,
                          u8* output);
extern void* (*DAT_00960184)(u32, ...);
#pragma alias DAT_00960184_abs DAT_00960184
extern void* (*DAT_00960184_abs[])();
extern void func_004c31b0(RuntimeMatrix* matrix, const RuntimeVec3* axis,
                          f32 angle, u32 mode);
extern void func_004c6c20(RuntimeVec3* destination,
                          const RuntimeVec3* source, s32 count,
                          RuntimeMatrix* matrix);
extern void func_004c6be0(RuntimeVec3* destination,
                          const RuntimeVec3* source, void* matrix);
extern void func_003b6870(u16 resourceId, const RuntimeVec3* position,
                          f32 angleX, f32 angleY, f32 angleZ, u32 packed);
extern void func_003b69a0(u16 resourceId, const RuntimeVec3* position,
                          f32 angleX, f32 angleY, f32 angleZ, u32 packed);
extern void func_003b6ad0(u16 resourceId, const RuntimeVec3* position,
                          f32 angle);
extern void func_003b6b90(u16 resourceId, const RuntimeVec3* position,
                          f32 angle);
extern void func_003b6c50(u16 resourceId, const RuntimeVec3* position,
                          f32 angle);
extern void func_003b6d10(u16 resourceId, const RuntimeVec3* position,
                          f32 angle);
extern void func_003b6dd0(u16 resourceId, const RuntimeVec3* position,
                          f32 angle);
extern void func_003b6e90(u16 resourceId, const RuntimeVec3* position,
                          f32 angle);

/* Retail addresses the controller state by absolute address. */
#pragma alias gPads_abs gPads
extern u8 gPads_abs[];

extern void func_001d5e30(KwlnTask* cameraTask, f32 amount);
extern KwlnTask* func_001d6270(KwlnTask* parent, s32 mode, s32 duration);
extern KwlnTask* func_001d6630(KwlnTask* parent, s32 mode, s32 heading);
extern f32 func_001a5aa0(void* cameraData);
extern void* func_004cb2f0(void* camera);
extern f32 func_004c2fb0(const RwMatrix* matrix1, const RwMatrix* matrix2);
extern f32 func_0052ea18(f32 x, f32 y);
extern f32 func_001b02c0(s32 arg1, s32 arg2);
extern s32 func_001de630(s32 type);
extern s32 func_001ded40(s32 type);
extern s32 func_001dde00(s32 type);
extern s32 func_001df450();
extern f32 sqrtf(f32 value);
extern void func_001e1300(KwlnTask* task, s32 arg);
extern void func_001e1360(KwlnTask* task, s32 arg);
extern f32 func_001e13c0(void);
extern s32 func_001e1590(KwlnTask* rotateTask, const RwMatrix* matrix, f32 playerHeading, f32 inputHeading);
extern f32 D_007CE230;
extern RwV3d D_00683D78;
extern f32 D_007CE82C;
extern f32 D_007CE834;
extern f32 D_007CAF38;
extern FieldRuntimeResourceNode* D_007CE2B8;

extern volatile /* Removing this file's qualifier batch loses 1 MATCH(es) and worsens 0 other function(s) - measured W170. */ f32 DAT_007cb144;
extern volatile /* Removing this file's qualifier batch loses 1 MATCH(es) and worsens 0 other function(s) - measured W170. */ f32 DAT_007caf24;


static f32 sVPadMoveSpeed;

// opt_dead_assignments off: normalized_diff 1663 -> 1636; object 3120 -> 3116 (window 3152)
// W415 duplicate-call probes reached retail order (de630,de630,ded40,ded40) but
// produced 3184-3200 bytes, exceeding the 3152-byte retail window; retained source is negative.
// W417 combined camera-branch/frame probe plus ordered duplicate calls: object
// 3156 versus the 3152-byte window (4 bytes over), nd 2195/3156 (69.53%);
// rejected despite the exact retail call census. Camera-branch rewrite alone
// was 3088 bytes, nd 2144 (69.30%), so neither is a valid saving.


// W417 cameraInput width correction: baseline 1662/3120 (53.27%) ->
// 1636/3116 (52.44%), a measured 4-byte saving within the 3152-byte window.
#pragma opt_dead_assignments off
// FUN_001e05b0
asm void* K_VPad_UpdateTask(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdfed0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080802d
  .word 0x8c91003c
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c020068
  .word 0xdc433d78
  .word 0x3c020068
  .word 0xc4403d80
  .word 0xffa30120
  .word 0xe7a00128
  .word 0x8e240084
  .word 0x10800010
  .word 0x00000000
  .word 0x0c065518
  .word 0x00000000
  .word 0x24030001
  .word 0x1043000b
  .word 0x00000000
  .word 0xae200084
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0696a8
  .word 0x00000000
  .word 0xe6200074
  .word 0x8e230000
  .word 0x24020005
  .word 0x106202de
  .word 0x00000000
  .word 0x24020002
  .word 0x106202c5
  .word 0x00000000
  .word 0x24020001
  .word 0x10620009
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100002d7
  .word 0x00000000
  .word 0x24620001
  .word 0xae220000
  .word 0x100002d3
  .word 0x00000000
  .word 0x27a30110
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
  .word 0x27a30100
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
  .word 0x8e22005c
  .word 0x24030001
  .word 0x104302b9
  .word 0x00000000
  .word 0x8e220060
  .word 0x104302b6
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9042095f
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
  .word 0x3c024300
  .word 0x44820800
  .word 0x00000000
  .word 0x46010001
  .word 0xe7a00118
  .word 0x3c02007e
  .word 0x9442094c
  .word 0x30431000
  .word 0x10600005
  .word 0x00000000
  .word 0x3c03c300
  .word 0xafa30118
  .word 0x10000005
  .word 0x00000000
  .word 0x30434000
  .word 0x10600002
  .word 0x00000000
  .word 0xe7a10118
  .word 0x3c03007e
  .word 0x9063095e
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
  .word 0x3c034300
  .word 0x44830800
  .word 0x00000000
  .word 0x46010001
  .word 0xe7a00110
  .word 0x30438000
  .word 0x10600005
  .word 0x00000000
  .word 0x3c03c300
  .word 0xafa30110
  .word 0x10000005
  .word 0x00000000
  .word 0x30432000
  .word 0x10600002
  .word 0x00000000
  .word 0xe7a10110
  .word 0x3c03007e
  .word 0x90630961
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x3c034300
  .word 0x44830000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a00108
  .word 0x3c03007e
  .word 0x90630960
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x3c034300
  .word 0x44830000
  .word 0x00000000
  .word 0x46000841
  .word 0xe7a10100
  .word 0x3043000a
  .word 0x14600007
  .word 0x00000000
  .word 0x3c034240
  .word 0x44830000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010041
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c075700
  .word 0x00000000
  .word 0x14400097
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x3062000a
  .word 0x10400021
  .word 0x00000000
  .word 0x30620020
  .word 0x1040001e
  .word 0x00000000
  .word 0x8e220084
  .word 0x1440008c
  .word 0x00000000
  .word 0xc6210074
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000841
  .word 0xe6210074
  .word 0x44800000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000006
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe6200074
  .word 0xc6200074
  .word 0x46000024
  .word 0x44060000
  .word 0x0200202d
  .word 0x2405000a
  .word 0x0c07598c
  .word 0x00000000
  .word 0xae220084
  .word 0x10000072
  .word 0x00000000
  .word 0xc780b53c
  .word 0x46000507
  .word 0x24040189
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440004
  .word 0x4600a306
  .word 0x0c07578c
  .word 0x00000000
  .word 0x1000005e
  .word 0x00000000
  .word 0x30430005
  .word 0x14600007
  .word 0x00000000
  .word 0x3c03c240
  .word 0x44830000
  .word 0x00000000
  .word 0x46000834
  .word 0x4500003e
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c075700
  .word 0x00000000
  .word 0x1440004e
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x30620005
  .word 0x1040001f
  .word 0x00000000
  .word 0x30620020
  .word 0x1040001c
  .word 0x00000000
  .word 0x8e220084
  .word 0x14400043
  .word 0x00000000
  .word 0xc6210074
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000840
  .word 0xe6210074
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010003
  .word 0x00000000
  .word 0x46000801
  .word 0xe6200074
  .word 0xc6200074
  .word 0x46000024
  .word 0x44060000
  .word 0x0200202d
  .word 0x2405000a
  .word 0x0c07598c
  .word 0x00000000
  .word 0xae220084
  .word 0x1000002b
  .word 0x00000000
  .word 0xc794b53c
  .word 0x24040189
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440004
  .word 0x4600a306
  .word 0x0c07578c
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x30420040
  .word 0x14400015
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420020
  .word 0x10400010
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c075700
  .word 0x00000000
  .word 0x14400009
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000a
  .word 0x2406ffff
  .word 0x0c07589c
  .word 0x00000000
  .word 0xae220084
  .word 0x100001a4
  .word 0x00000000
  .word 0xc7a00118
  .word 0x3c02c240
  .word 0x44821000
  .word 0x00000000
  .word 0x46020034
  .word 0x4501000e
  .word 0x00000000
  .word 0x3c024240
  .word 0x44820800
  .word 0x00000000
  .word 0x46010036
  .word 0x45000008
  .word 0x00000000
  .word 0xc7a00110
  .word 0x46020034
  .word 0x45010004
  .word 0x00000000
  .word 0x46010036
  .word 0x45010115
  .word 0x00000000
  .word 0x4480b000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c420004
  .word 0x24460010
  .word 0x27a50080
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
  .word 0x27a40080
  .word 0x0080282d
  .word 0x0c130bec
  .word 0x00000000
  .word 0xc7ac0088
  .word 0xc7ad0080
  .word 0x0c14ba86
  .word 0x00000000
  .word 0x46000047
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x8e240058
  .word 0x0c0c62dc
  .word 0x00000000
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
  .word 0x27a40040
  .word 0x0080282d
  .word 0x0c130bec
  .word 0x00000000
  .word 0xc7ac0048
  .word 0xc7ad0040
  .word 0x0c14ba86
  .word 0x00000000
  .word 0x46000047
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46000d03
  .word 0xc7a10110
  .word 0x3c02c240
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45010008
  .word 0x00000000
  .word 0x3c024240
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45000002
  .word 0x00000000
  .word 0xafa00110
  .word 0xc7a10118
  .word 0x3c02c240
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45010008
  .word 0x00000000
  .word 0x3c024240
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45000002
  .word 0x00000000
  .word 0xafa00118
  .word 0x44800000
  .word 0x00000000
  .word 0x4600a834
  .word 0x45000005
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x4600ad40
  .word 0x44800000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45000005
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a500
  .word 0x8e240050
  .word 0x0c078608
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000011b
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c06c0b0
  .word 0x00000000
  .word 0x460005c6
  .word 0x3c023f80
  .word 0xafa200e8
  .word 0xafa200d4
  .word 0xafa200c0
  .word 0xafa000d0
  .word 0xafa000c8
  .word 0xafa000c4
  .word 0xafa000e4
  .word 0xafa000e0
  .word 0xafa000d8
  .word 0xafa000f8
  .word 0xafa000f4
  .word 0xafa000f0
  .word 0x8fa300cc
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xafa200cc
  .word 0x27a400c0
  .word 0x27a50120
  .word 0x4600ab06
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a400c0
  .word 0x27a50120
  .word 0x4600bb06
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x4617ab40
  .word 0x8e240050
  .word 0x4600a306
  .word 0x27a500c0
  .word 0x0c078564
  .word 0x00000000
  .word 0x0040802d
  .word 0x8e240050
  .word 0x0c078608
  .word 0x00000000
  .word 0x1440002d
  .word 0x00000000
  .word 0x8e240054
  .word 0x27a500c0
  .word 0x0c06b678
  .word 0x00000000
  .word 0x27a40110
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x3c024300
  .word 0x44820800
  .word 0x00000000
  .word 0x46010036
  .word 0x45010002
  .word 0x00000000
  .word 0x46000806
  .word 0x3c0242fa
  .word 0x44820800
  .word 0x00000000
  .word 0x46010034
  .word 0x45000005
  .word 0x00000000
  .word 0x3c024150
  .word 0x4482b000
  .word 0x10000011
  .word 0x00000000
  .word 0xc7818110
  .word 0x46000842
  .word 0x3c024300
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c024300
  .word 0x44821000
  .word 0xc781b544
  .word 0x46011042
  .word 0x46000d82
  .word 0x8e240054
  .word 0x4600b306
  .word 0x0c06b7b0
  .word 0x00000000
  .word 0xe796b5c4
  .word 0x1600003d
  .word 0x00000000
  .word 0x3c024150
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b036
  .word 0x45000017
  .word 0x00000000
  .word 0x8e300070
  .word 0x24040001
  .word 0x0c07798c
  .word 0x00000000
  .word 0x12020025
  .word 0x00000000
  .word 0x8e22007c
  .word 0x28410002
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae22007c
  .word 0x1000001d
  .word 0x00000000
  .word 0xae20006c
  .word 0x24040001
  .word 0x0c07798c
  .word 0x00000000
  .word 0xae220070
  .word 0xae20007c
  .word 0x10000015
  .word 0x00000000
  .word 0x8e300070
  .word 0x24040001
  .word 0x0c077b50
  .word 0x00000000
  .word 0x1202000f
  .word 0x00000000
  .word 0x8e22007c
  .word 0x28410002
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae22007c
  .word 0x10000007
  .word 0x00000000
  .word 0xae20006c
  .word 0x24040001
  .word 0x0c077b50
  .word 0x00000000
  .word 0xae220070
  .word 0xae20007c
  .word 0x8e22006c
  .word 0x1440000a
  .word 0x00000000
  .word 0x86260070
  .word 0x8e240058
  .word 0x0000282d
  .word 0x24070006
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x24020001
  .word 0xae22006c
  .word 0xae200078
  .word 0xae200080
  .word 0x1000007c
  .word 0x00000000
  .word 0x0000802d
  .word 0x8e220080
  .word 0x28410004
  .word 0x10200005
  .word 0x00000000
  .word 0x24420001
  .word 0xae220080
  .word 0x10000073
  .word 0x00000000
  .word 0x8e220078
  .word 0x14400010
  .word 0x00000000
  .word 0x24040c35
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24040001
  .word 0x0c077780
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x8e240058
  .word 0x0000282d
  .word 0x24070004
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e220078
  .word 0x24430001
  .word 0xae230078
  .word 0x2402003c
  .word 0x14620009
  .word 0x00000000
  .word 0x24040c35
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24020001
  .word 0xae22006c
  .word 0x1000000d
  .word 0x00000000
  .word 0x28610169
  .word 0x1420000a
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b25c
  .word 0x00000000
  .word 0x30420080
  .word 0x14400002
  .word 0x00000000
  .word 0x24100001
  .word 0x2402003d
  .word 0xae220078
  .word 0x8e240058
  .word 0x0000282d
  .word 0x0c0c6150
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x28420006
  .word 0x14400007
  .word 0x00000000
  .word 0x8e220058
  .word 0x904300ee
  .word 0x24020001
  .word 0x14620002
  .word 0x00000000
  .word 0xae22006c
  .word 0x8e22006c
  .word 0x24040001
  .word 0x1444000c
  .word 0x00000000
  .word 0x0c077780
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x8e240058
  .word 0x0000282d
  .word 0x24070008
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0xae20006c
  .word 0x24040001
  .word 0x16040026
  .word 0x00000000
  .word 0x0c077d14
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x8e240058
  .word 0x0000282d
  .word 0x24070008
  .word 0x0000402d
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x8e240088
  .word 0x0c065518
  .word 0x00000000
  .word 0x24030001
  .word 0x10430014
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c44000c
  .word 0x0000282d
  .word 0x0c0784c0
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c440008
  .word 0x0000282d
  .word 0x0c073594
  .word 0x00000000
  .word 0x24020001
  .word 0xae220000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0130
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
// FUN_001e1200
#pragma opt_dead_assignments reset
void K_VPad_DestroyTask(KwlnTask* rotatePcTask)
{
    RwFree(rotatePcTask->workData);
}

// FUN_001e1230
KwlnTask* K_VPad_CreateTask(KwlnTask* parent, KwlnTask* collisCtlTask, Model* mdl)
{
    KwlnTask* task;
    VPadWork* work;

    work = RwCalloc(1, sizeof(VPadWork), rwMEMHINTDUR_GLOBAL);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreateWithAutoPriority(parent,
                                          10,
                                          "player pad proc",
                                          K_VPad_UpdateTask,
                                          K_VPad_DestroyTask,
                                          work);

    work->collisCtlTask = collisCtlTask;
    work->mdl = mdl;
    work->rotateTask = K_VPad_CreateRotateTask(task, collisCtlTask, mdl);

    return task;
}

// FUN_001e1300
void func_001e1300(KwlnTask* task, s32 controlMode)
{
    VPadWork* work;
    s16 animation;
    if (task == NULL)
    {
        return;
    }
    work = (VPadWork*)task->workData;
    work->animState = 0;
    work->controlMode = (u32)controlMode;
    animation = (s16)func_001dde00(1);
    mdlAnimSet(work->mdl, 0, animation, 8, 1);
}

// FUN_001e1360
void func_001e1360(KwlnTask* task, s32 controlFlags)
{
    VPadWork* work;
    s16 animation;
    if (task == NULL)
    {
        return;
    }
    work = (VPadWork*)task->workData;
    work->animState = 0;
    work->controlFlags = (u32)controlFlags;
    animation = (s16)func_001dde00(1);
    mdlAnimSet(work->mdl, 0, animation, 8, 1);
}

// FUN_001e13c0
f32 func_001e13c0(void)
{
    f32 speed = sVPadMoveSpeed;
    if (speed <= 0.0f)
    {
        speed = D_007CE230;
    }
    return speed;
}

// FUN_001e13f0
void* K_VPad_UpdateRotateTask(KwlnTask* rotatePcTask)
{
    static const RwV3d sAxis = { 0.0f, 1.0f, 0.0f }; // 00683da0
    PcRotateWork* work;
    RwV3d axis;

    work = (PcRotateWork*)rotatePcTask->workData;
    axis = sAxis;

    switch (work->state)
    {
        case PCROTATE_STATE_IDLE: break;

        case PCROTATE_STATE_ROTATING:
            work->steps++;

            K_FldFrame_CtlRotate(work->collisCtlTask, &axis, work->angle);

            if (work->steps >= work->maxSteps)
            {
                K_FldFrame_CtlUpdateMdlMat(work->collisCtlTask, &work->mat);
                K_FldEvent_001cd650(K_Field_Get()->eventTask, false);
                work->state = PCROTATE_STATE_IDLE;
            }
    }

    return KWLNTASK_CONTINUE;
}
// FUN_001e14b0
void K_VPad_DestroyRotateTask(KwlnTask* rotatePcTask)
{
    RwFree(rotatePcTask->workData);
}

// FUN_001e14e0
KwlnTask* K_VPad_CreateRotateTask(KwlnTask* parent, KwlnTask* collisCtlTask, Model* mdl)
{
    PcRotateWork* work;
    KwlnTask* task;

    work = RwCalloc(1, sizeof(PcRotateWork), rwMEMHINTDUR_GLOBAL);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreateWithAutoPriority(parent,
                                          10,
                                          "rotate pc",
                                          K_VPad_UpdateRotateTask,
                                          K_VPad_DestroyRotateTask,
                                          work);

    work->collisCtlTask = collisCtlTask;
    work->mdl = mdl;

    return task;
}

// FUN_001e1590
s32 func_001e1590(KwlnTask* rotateTask, const RwMatrix* matrix,
                  f32 playerHeading, f32 inputHeading)
{
    PcRotateWork* work;
    f32 direct;
    f32 wrapped;
    s32 maxSteps;
    s32 reverse;
    work = (PcRotateWork*)rotateTask->workData;
    if (work->state == PCROTATE_STATE_ROTATING)
    {
        return 0;
    }
    work->mat = *matrix;

    if (playerHeading > 360.0f)
    {
        playerHeading -= 360.0f;
    }
    *(f32*)((u8*)work + 0x4c) = playerHeading;
    if (inputHeading > 360.0f)
    {
        inputHeading -= 360.0f;
    }
    *(f32*)((u8*)work + 0x50) = inputHeading;
    if (playerHeading < inputHeading)
    {
        if (playerHeading > DAT_007cb144)
        {
            playerHeading = 0.0f;
        }
        if (inputHeading > DAT_007cb144)
        {
            inputHeading = 360.0f;
        }
        if (playerHeading < DAT_007caf24)
        {
            playerHeading = 0.0f;
        }
        if (inputHeading < DAT_007caf24)
        {
            inputHeading = 360.0f;
        }
        direct = inputHeading - playerHeading;
        wrapped = playerHeading + (360.0f - inputHeading);
        reverse = 0;
    }
    else
    {
        if (playerHeading > DAT_007cb144)
        {
            playerHeading = 360.0f;
        }
        if (inputHeading > DAT_007cb144)
        {
            inputHeading = 0.0f;
        }
        if (playerHeading < DAT_007caf24)
        {
            playerHeading = 360.0f;
        }
        if (inputHeading < DAT_007caf24)
        {
            inputHeading = 0.0f;
        }
        direct = playerHeading - inputHeading;
        wrapped = inputHeading + (360.0f - playerHeading);
        reverse = 1;
    }

    if (fabsf(direct) < fabsf(wrapped))
    {
        work->angle = direct;
        if (reverse == 1)
        {
            work->angle *= -1.0f;
        }
    }
    else
    {
        work->angle = wrapped;
        if (reverse == 0)
        {
            work->angle *= -1.0f;
        }
    }

    if (fabsf(work->angle) > 45.0f)
    {
        maxSteps = (s32)fabsf(work->angle) / 30;
        if (maxSteps <= 0)
        {
            maxSteps = 1;
        }
        work->maxSteps = maxSteps;
        work->steps = 0;
        work->angle /= (f32)work->maxSteps;
        work->state = PCROTATE_STATE_ROTATING;
        K_FldEvent_001cd650(K_Field_Get()->eventTask, true);
        return 1;
    }
    return 0;
}

// FUN_001e1820
u32 K_VPad_IsRotating(KwlnTask* rotatePcTask)
{
    return ((PcRotateWork*)rotatePcTask->workData)->state == PCROTATE_STATE_ROTATING;
}

// FUN_001E1840
void* func_001e1840(void)
{
    return &D_007CE2B8;
}
#define kwlnTaskCreateWithAutoPriority(parent, priority, name, update, destroy, work) \
    ((RuntimeTask*)kwlnTaskCreateWithAutoPriority( \
        (KwlnTask*)(parent), priority, name, \
        (void* (*)(KwlnTask*))(update), (void (*)(KwlnTask*))(destroy), work))
void func_001e88f0(RuntimeWork* work, s32 section, RuntimeVec3* output);
#define kwlnGetMainCamera() ((void*)kwlnGetMainCamera())
#define K_Field_Get() ((u8*)K_Field_Get())

// FUN_001E1850
s32 func_001e1850(RuntimeTask* task)
{
    RuntimeFieldEditorWork* work;
    u16 input;
    s32 result;
    char path[128];

    work = (RuntimeFieldEditorWork*)task->workData;
    switch (work->state)
    {
        case 0:
            work->menuTask = func_001a3b10(task, 0x20, 0x20, 2);
            func_001a3dc0(work->menuTask, D_00683E10, 11);
            func_001a3bf0(work->menuTask, 1);
            work->selection = ((s16*)PTR_DAT_007cd540)[10];
            work->state++;
            break;

        case 1:
            work->state++;
            break;

        case 2:
            input = *(u16*)DAT_007e094e_abs;
            if ((input & 0x40) != 0)
            {
                result = func_001a4510(work->menuTask);
                switch (result)
                {
                    case 0:
                        work->controllerTask = func_001e0510(task, func_00198590());
                        work->noticeTask = func_001a3b10(task, 0x1ba, 0x38, 2);
                        func_001a3be0(work->noticeTask, 1);
                        func_001a3f20(work->noticeTask, D_00683F70);
                        func_001a3bf0(work->noticeTask, 1);
                        func_001a3bf0(work->menuTask, 0);
                        work->state = 3;
                        break;

                    case 1:
                        break;

                    case 2:
                        work->controllerTask = func_001e4b40(task);
                        work->noticeTask = func_001a3b10(task, 0x256, 0x38, 2);
                        func_001a3be0(work->noticeTask, 1);
                        func_001a3f20(work->noticeTask, &D_007CC2F8);
                        func_001a3bf0(work->noticeTask, 1);
                        func_001a3bf0(work->menuTask, 0);
                        work->state = 3;
                        break;

                    case 3:
                        work->controllerTask = func_001e5850(task);
                        work->noticeTask = func_001a3b10(task, 0x21a, 0x38, 2);
                        func_001a3be0(work->noticeTask, 1);
                        func_001a3f20(work->noticeTask, D_00683F88);
                        func_001a3bf0(work->noticeTask, 1);
                        func_001a3bf0(work->menuTask, 0);
                        work->state = 3;
                        break;

                    case 4:
                        work->controllerTask = func_001e6030(task);
                        work->noticeTask = func_001a3b10(task, 0x256, 0x38, 2);
                        func_001a3be0(work->noticeTask, 1);
                        func_001a3f20(work->noticeTask, &D_007CC2FC);
                        func_001a3bf0(work->noticeTask, 1);
                        func_001a3bf0(work->menuTask, 0);
                        work->state = 3;
                        break;

                    case 5:
                        work->controllerTask = func_001e6a70(task);
                        work->noticeTask = func_001a3b10(task, 0x21a, 0x38, 2);
                        func_001a3be0(work->noticeTask, 1);
                        func_001a3f20(work->noticeTask, D_00683F98);
                        func_001a3bf0(work->noticeTask, 1);
                        func_001a3bf0(work->menuTask, 0);
                        work->state = 3;
                        break;

                    case 6:
                        break;

                    case 7:
                        work->choiceTask = func_001a3b10(task, 0x12c, 0xdc, 2);
                        func_001a3f20(work->choiceTask, &D_007CC300);
                        func_001a3f20(work->choiceTask, &D_007CC304);
                        func_001a3bf0(work->choiceTask, 1);
                        func_001a3bf0(work->menuTask, 0);
                        work->state = 4;
                        break;

                    case 8:
                        work->choiceTask = func_001a3b10(task, 0x40, 0x40, 2);
                        FUN_00523ac8(path, D_00683FB0, PTR_DAT_007cd540[0],
                                     PTR_DAT_007cd540[1], work->selection);
                        func_001a3f20(work->choiceTask, path);
                        func_001a3bf0(work->choiceTask, 1);
                        func_001a3bf0(work->menuTask, 0);
                        work->state = 6;
                        break;

                    case 9:
                        break;

                    case 10:
                        work->choiceTask = func_001a3b10(task, 0x12c, 0xdc, 2);
                        func_001a3f20(work->choiceTask, &D_007CC300);
                        func_001a3f20(work->choiceTask, &D_007CC304);
                        func_001a3bf0(work->choiceTask, 1);
                        func_001a3bf0(work->menuTask, 0);
                        work->state = 5;
                        break;

                    default:
                        break;
                }
            }
            else if ((input & 0x20) != 0)
            {
                work->choiceTask = func_001a3b10(task, 0x12c, 0xdc, 2);
                func_001a3f20(work->choiceTask, &D_007CC300);
                func_001a3f20(work->choiceTask, &D_007CC304);
                func_001a3bf0(work->choiceTask, 1);
                func_001a3bf0(work->menuTask, 0);
                work->state = 5;
            }
            break;

        case 3:
            if (func_00195460(work->controllerTask) != 1)
            {
                func_001a3bf0(work->menuTask, 1);
                if (work->noticeTask != NULL)
                {
                    func_00195020(work->noticeTask);
                    work->noticeTask = NULL;
                }
                work->state = 2;
            }
            break;

        case 4:
            input = *(u16*)DAT_007e094e_abs;
            if ((input & 0x40) != 0)
            {
                result = func_001a4510(work->choiceTask);
                switch (result)
                {
                    case 0:
                        goto state4_cleanup;
                    case 1:
                        func_001e2930(1);
                        func_001e2b10(1);
                        FUN_00521408(&D_007CE2B8, 0, 8);
state4_cleanup:
                        func_001a3bf0(work->menuTask, 1);
                        func_00195020(work->choiceTask);
                        work->state = 2;
                        break;
                    default:
                        goto state4_cleanup;
                }
            }
            else if ((input & 0x20) != 0)
            {
                func_001a3bf0(work->menuTask, 1);
                func_00195020(work->choiceTask);
                work->state = 2;
            }
            break;

        case 5:
            input = *(u16*)DAT_007e094e_abs;
            if ((input & 0x40) != 0)
            {
                result = func_001a4510(work->choiceTask);
                switch (result)
                {
                    case 0:
                        func_001a3bf0(work->menuTask, 1);
                        func_00195020(work->choiceTask);
                        work->state = 2;
                        break;
                    case 1:
                        work->state = 8;
                        break;
                    default:
                        break;
                }
            }
            else if ((input & 0x20) != 0)
            {
                func_001a3bf0(work->menuTask, 1);
                func_00195020(work->choiceTask);
                work->state = 2;
            }
            break;

        case 6:
            input = *(u16*)DAT_007e0952_abs;
            if ((input & 0x9000) != 0)
            {
                work->selection++;
                if (work->selection > 0xff)
                {
                    work->selection = 0;
                }
                FUN_00523ac8(path, D_00683FB0, PTR_DAT_007cd540[0],
                             PTR_DAT_007cd540[1], work->selection);
                FUN_00524270(func_001a4010(work->choiceTask, 0), path);
            }
            else if ((input & 0x6000) != 0)
            {
                work->selection--;
                if (work->selection < 0)
                {
                    work->selection = 0xff;
                }
                FUN_00523ac8(path, D_00683FB0, PTR_DAT_007cd540[0],
                             PTR_DAT_007cd540[1], work->selection);
                FUN_00524270(func_001a4010(work->choiceTask, 0), path);
            }
            else if ((input & 0x0a) != 0)
            {
                work->selection += 10;
                if (work->selection > 0xff)
                {
                    work->selection = 0;
                }
                FUN_00523ac8(path, D_00683FB0, PTR_DAT_007cd540[0],
                             PTR_DAT_007cd540[1], work->selection);
                FUN_00524270(func_001a4010(work->choiceTask, 0), path);
            }
            else if ((input & 0x05) != 0)
            {
                work->selection -= 10;
                if (work->selection < 0)
                {
                    work->selection = 0xff;
                }
                FUN_00523ac8(path, D_00683FB0, PTR_DAT_007cd540[0],
                             PTR_DAT_007cd540[1], work->selection);
                FUN_00524270(func_001a4010(work->choiceTask, 0), path);
            }

            input = *(u16*)DAT_007e094e_abs;
            if ((input & 0x40) != 0)
            {
                func_00195020(work->choiceTask);
                work->choiceTask = func_001a3b10(task, 0x12c, 0xdc, 2);
                func_001a3f20(work->choiceTask, &D_007CC300);
                func_001a3f20(work->choiceTask, &D_007CC304);
                func_001a3bf0(work->choiceTask, 1);
                work->state = 7;
            }
            else if ((input & 0x20) != 0)
            {
                func_001a3bf0(work->menuTask, 1);
                func_00195020(work->choiceTask);
                work->state = 2;
            }
            break;

        case 7:
            input = *(u16*)DAT_007e094e_abs;
            if ((input & 0x40) != 0)
            {
                result = func_001a4510(work->choiceTask);
                switch (result)
                {
                    case 0:
                        goto state7_cleanup;
                    case 1:
                        if (func_001e2bd0((s16)work->selection) == 1)
                        {
                            func_001a1540((s32)task, 0, 0x190, &D_007CC308);
                        }
                        else
                        {
                            func_001a1540((s32)task, 0, 0x190, D_00683FD0);
                        }
state7_cleanup:
                        func_001a3bf0(work->menuTask, 1);
                        func_00195020(work->choiceTask);
                        work->state = 2;
                        break;
                    default:
                        goto state7_cleanup;
                }
            }
            else if ((input & 0x20) != 0)
            {
                func_001a3bf0(work->menuTask, 1);
                func_00195020(work->choiceTask);
                work->state = 2;
            }
            break;

        case 8:
            return -1;

        default:
            break;
    }
    return 0;
}

// FUN_001E2300. Tear down global field-transition state.
void func_001e2300(RuntimeTask* task)
{
    func_001e2930(0);
    func_001e2b10(0);
    FUN_00521408(&D_007CE2B8, 0, 8);
    ((void (*)(void*))DAT_0096017c[0])(task->workData);
}

// FUN_001E2370. Create the field-transition task when scene state permits.
RuntimeTask* func_001e2370(RuntimeTask* parent)
{
    RuntimeWork* work;
    RuntimeTask* task;
    if (PTR_DAT_007cd540[2] == 0 || PTR_DAT_007cd540[0] == -1)
    {
        return NULL;
    }


    work = FIELD_RUNTIME_ALLOCATOR(1, 0x18, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreateWithAutoPriority(parent, 10, "field transition", func_001e1850, func_001e2300, work);
    func_001e2430();
    return task;
}

// FUN_001E2430
void func_001e2430(void)
{
    typedef struct RuntimeFieldDefinition
    {
        u16 resourceId;
        u8 reserved002[2];
        RuntimeVec3 position;
        f32 angles[3];
        u8 reserved01c[0x0c];
        u32 flags;
        u8 reserved02c[0xcc];
        struct RuntimeFieldDefinition* next;
        u8 reserved0fc[0x2c];
        void* resource;
        u8 reserved12c[0xb4];
        u16 type;
        u8 sourceType;
        u8 reserved1e3;
        u32 value;
        u32 angle;
        u8 reserved1ec[4];
        void* source;
    } RuntimeFieldDefinition;
    typedef struct RuntimeQuaternion
    {
        f32 x;
        f32 y;
        f32 z;
        f32 w;
    } RuntimeQuaternion;

    extern RuntimeFieldDefinition* func_003b5d50(u32 type);
    extern f32 func_001ad8b0(u32 angle);
    extern RuntimeMatrix* func_00318b60(void* resource);
    extern u8 func_0019c300(void* source);
    extern f32 func_0019c490(void* source);
    extern void* func_001a4cd0(s32 type);
    extern RuntimeMatrix* func_001a4e50(void* object);
    extern void func_004c2cc0(RuntimeQuaternion* quaternion);
    extern void func_004c2d20(RuntimeMatrix* matrix,
                              const RuntimeQuaternion* quaternion);
    extern void func_004c2f10(RuntimeMatrix* matrix);
    extern RuntimeVec3 D_00683FF0;
    extern RuntimeVec3 D_00684000;
    extern RuntimeVec3 D_00684010;

    RuntimeFieldDefinition* resourceDefinition;
    RuntimeFieldDefinition* taskDefinition;
    FieldRuntimeResourceNode* resourceNode;
    FieldRuntimeTaskNode* taskNode;
    u32 matrixFlags;
    RuntimeQuaternion quaternion;
    RuntimeVec3 firstAxis;
    RuntimeVec3 secondAxis;
    RuntimeVec3 thirdAxis;

    resourceDefinition = func_003b5d50(3);
    taskDefinition = func_003b5d50(8);

    while (resourceDefinition != NULL)
    {
        resourceNode = func_001e2850();
        resourceNode->resource = resourceDefinition->resource;
        resourceNode->resourceId = resourceDefinition->resourceId;
        resourceNode->areaId =
            *(u16*)((u8*)resourceDefinition->resource + 0xd4);
        resourceNode->roomId =
            *(u16*)((u8*)resourceDefinition->resource + 0xd6);
        resourceNode->angle = func_001ad8b0(resourceDefinition->angle);
        if ((resourceDefinition->flags & 0x80000000) != 0)
        {
            resourceNode->flags |= 1;
        }
        else
        {
            resourceNode->flags &= 0xfe;
        }
        resourceNode->type = resourceDefinition->type;
        resourceNode->value = resourceDefinition->value;
        resourceNode->sourceType = resourceDefinition->sourceType;
        resourceNode->matrix =
            *func_00318b60(resourceDefinition->resource);
        resourceNode->state = func_0019c300(resourceDefinition->source);
        resourceNode->scale = func_0019c490(resourceDefinition->source);
        resourceDefinition = resourceDefinition->next;
    }

    while (taskDefinition != NULL)
    {
        taskNode = func_001e2a20();
        firstAxis = D_00683FF0;
        secondAxis = D_00684000;
        thirdAxis = D_00684010;
        taskNode->resourceId = taskDefinition->resourceId;
        taskNode->task = func_001a4cd0(0);
        func_001a4e50(taskNode->task)->values[0] =
            func_001a4e50(taskNode->task)->values[5] =
                func_001a4e50(taskNode->task)->values[10] = 1.0f;
        func_001a4e50(taskNode->task)->values[12] =
            func_001a4e50(taskNode->task)->values[13] =
                func_001a4e50(taskNode->task)->values[14] =
                    func_001a4e50(taskNode->task)->values[6] =
                        func_001a4e50(taskNode->task)->values[8] =
                            func_001a4e50(taskNode->task)->values[9] =
                                func_001a4e50(taskNode->task)->values[1] =
                                    func_001a4e50(taskNode->task)->values[2] =
                                        func_001a4e50(taskNode->task)->values[4] =
                                            0.0f;
        matrixFlags =
            *(u32*)&func_001a4e50(taskNode->task)->values[3] | 0x20003;
        *(u32*)&func_001a4e50(taskNode->task)->values[3] = matrixFlags;
        func_004c31b0(func_001a4e50(taskNode->task),
                      &firstAxis, taskDefinition->angles[0], 2);
        func_004c31b0(func_001a4e50(taskNode->task),
                      &secondAxis, taskDefinition->angles[1], 2);
        func_004c31b0(func_001a4e50(taskNode->task),
                      &thirdAxis, taskDefinition->angles[2], 2);
        *(RuntimeVec3*)&func_001a4e50(taskNode->task)->values[12] =
            taskDefinition->position;
        func_004c2cc0(&quaternion);
        func_004c2d20(func_001a4e50(taskNode->task), &quaternion);
        func_004c2f10(func_001a4e50(taskNode->task));
        taskNode->matrix = *func_001a4e50(taskNode->task);
        taskDefinition = taskDefinition->next;
    }
}

// FUN_001E2810. Find a loaded field resource by its 16-bit identifier.
FieldRuntimeResourceNode* func_001e2810(u32 resourceId)
{
    FieldRuntimeResourceNode* node;

    node = D_007CE2B8;
    resourceId = (u16)resourceId;
    while (node != NULL)
    {
        if (node->resourceId == resourceId)
        {
            break;
        }
        node = node->next;
    }
    return node;
}

// FUN_001E2850. Allocate and prepend a field resource node.
FieldRuntimeResourceNode* func_001e2850(void)
{
    FieldRuntimeResourceNode* node;

    node = FIELD_RUNTIME_ALLOCATOR(1, 0x70, 0x40000);
    if (D_007CE2B8 != NULL)
    {
        D_007CE2B8->previous = node;
    }
    node->next = D_007CE2B8;
    D_007CE2B8 = node;
    return node;
}

// FUN_001E28A0. Unlink and release a field resource node.
void func_001e28a0(FieldRuntimeResourceNode* node, s32 releaseResource)
{
    if (releaseResource == 1)
    {
        func_003b7090(node->resourceId);
    }
    if (node->previous != NULL)
    {
        node->previous->next = node->next;
    }
    else
    {
        D_007CE2B8 = node->next;
    }
    if (node->next != NULL)
    {
        node->next->previous = node->previous;
    }
    ((void (*)(void*))DAT_0096017c[0])(node);
}

// FUN_001E2930
void func_001e2930(s32 enabled)
{
    FieldRuntimeResourceNode* node;

    node = D_007CE2B8;
    while (node != NULL)
    {
        if (enabled == 1)
        {
            func_003b7090(node->resourceId);
        }
        if (node->previous != NULL)
        {
            node->previous->next = node->next;
        }
        else
        {
            D_007CE2B8 = node->next;
        }
        if (node->next != NULL)
        {
            node->next->previous = node->previous;
        }
        (*(void (**)(void*))0x0096017C)(node);
        node = node->next;
    }
}

// FUN_001E29E0. Find a field task by its 16-bit resource identifier.
FieldRuntimeTaskNode* func_001e29e0(u32 resourceId)
{
    FieldRuntimeTaskNode* node;

    node = D_007CE2BC;
    resourceId = (u16)resourceId;
    while (node != NULL)
    {
        if (node->resourceId == resourceId)
        {
            break;
        }
        node = node->next;
    }
    return node;
}

// FUN_001E2A20. Allocate and prepend a field task node.
FieldRuntimeTaskNode* func_001e2a20(void)
{
    FieldRuntimeTaskNode* node;

    node = FIELD_RUNTIME_ALLOCATOR(1, 0x60, 0x40000);
    if (D_007CE2BC != NULL)
    {
        D_007CE2BC->previous = node;
    }
    node->next = D_007CE2BC;
    D_007CE2BC = node;
    return node;
}

// FUN_001E2A70. Unlink and release a field task node.
void func_001e2a70(FieldRuntimeTaskNode* node, s32 releaseResource)
{
    if (releaseResource == 1)
    {
        func_003b7090(node->resourceId);
    }
    func_00195020(node->task);
    if (node->previous != NULL)
    {
        node->previous->next = node->next;
    }
    else
    {
        D_007CE2BC = node->next;
    }
    if (node->next != NULL)
    {
        node->next->previous = node->previous;
    }
    ((void (*)(void*))DAT_0096017c[0])(node);
}

// FUN_001E2B10
void func_001e2b10(s32 enabled)
{
    FieldRuntimeTaskNode* node;

    node = D_007CE2BC;
    while (node != NULL)
    {
        if (enabled == 1)
        {
            func_003b7090(node->resourceId);
        }
        kwlnTaskDestroyWithHierarchy(node->task);
        if (node->previous != NULL)
        {
            node->previous->next = node->next;
        }
        else
        {
            D_007CE2BC = node->next;
        }
        if (node->next != NULL)
        {
            node->next->previous = node->previous;
        }
        (*(void (**)(void*))0x0096017C)(node);
        node = node->next;
    }
}

// FUN_001E2BD0. Serialize and release the active field-transition lists.
s32 func_001e2bd0(void)
{
    typedef struct RuntimeTransitionHeads
    {
        void* first;
        void* second;
    } RuntimeTransitionHeads;
    typedef struct RuntimeSerializedHeader
    {
        u32 magic;
        u32 version;
        u32 firstCount;
        u32 firstSize;
        u32 secondCount;
        u32 secondSize;
    } RuntimeSerializedHeader;

    RuntimeTransitionHeads* heads;
    RuntimeSerializedHeader* header;
    u8* first;
    u8* second;
    u8* initialSecond;
    u8* output;
    void* allocation;
    s32 firstCount;
    s32 secondCount;

    heads = func_001e1840();
    first = heads->first;
    heads = func_001e1840();
    initialSecond = heads->second;
    if (D_007CE2C0 == 1)
    {
        return 0;
    }
    if (PTR_DAT_007cd540[0] == -1)
    {
        return 0;
    }

    firstCount = 0;
    while (first != NULL)
    {
        first = *(u8**)(first + 0x6c);
        firstCount++;
    }
    secondCount = 0;
    while (initialSecond != NULL)
    {
        initialSecond = *(u8**)(initialSecond + 0x58);
        secondCount++;
    }

    allocation = FIELD_RUNTIME_ALLOCATOR(
        1, firstCount * 0x70 + sizeof(RuntimeSerializedHeader) + secondCount * 0x60,
        0x40000);
    header = allocation;
    header->magic = 0x12345678;
    header->version = 0x10001;
    header->firstCount = firstCount;
    header->firstSize = 0x70;
    header->secondCount = secondCount;
    header->secondSize = 0x60;
    output = (u8*)(header + 1);

    heads = func_001e1840();
    first = heads->first;
    while (first != NULL)
    {
        FUN_00521250(output, first, 0x70);
        output += 0x70;
        first = *(u8**)(first + 0x6c);
    }
    heads = func_001e1840();
    second = heads->second;
    while (second != NULL)
    {
        FUN_00521250(output, second, 0x60);
        output += 0x60;
        second = *(u8**)(second + 0x58);
    }
    ((void (*)(void*))DAT_0096017c[0])(allocation);
    return 1;
}

// FUN_001E2DA0. Request the selected field archive when no request is active.
HCdvd* func_001e2da0(u16 majorId, u16 minorId, s16 variant)
{
    char path[128];
    HCdvd* result;

    if (K_Fldrc_GetFldPacCdvd() == NULL)
    {
        sprintf(path, D_00684020, majorId, minorId, (s32)variant);
        if (H_Cdvd_FileExists(path) == 0)
        {
            result = NULL;
        }
        else
        {
            result = H_Cdvd_Request(path, HCDVD_FILENORMAL);
        }
    }
    else
    {
        result = (HCdvd*)1;
    }
    return result;
}

/* Retail field archive loader: both asynchronous and cached-file paths now
 * build model arrays, resolve both supplemental descriptor tables, and place
 * every field record. */

/* W422 role-cycle: baseline 277/2800/2800 -> 234/2800/2800 by splitting async/cached modelIndex declarations at the declaration tail; a second tail model-pointer split stayed 234/2800. The composed tail record-pointer split regressed to 299/2800 and was reverted. Earlier tableIndex and recordIndex splits (1603/2784 and 2033/2808) were rejected. */
/* DUMMYDUMB session 2026-10-20: the declaration-order lever again - reordering
 * the 17 locals to metadata, fileMemory, tableFlag, modelCount, source,
 * fileSize, recordIndex, sourceIndex, tableHeader, table, models, path,
 * asyncModelPtr, cachedModelPtr, asyncModelIndex, cachedModelIndex, record takes
 * the function from 234 to 229 differing bytes (size 2800 = 2800). The previous
 * best was the W422 declaration split at 234. Confirmed partial: 234 -> 229
 * bytes. */
// FUN_001E2E50
#ifndef PC_BUILD
asm u32 func_001e2e50(FieldArchiveRequest* request, void** outFileMemory,
                  u16 majorId, u16 minorId, s16 variant)
{
  .set noreorder
  .word 0x27bdff10
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x00e0882d
  .word 0x0100802d
  .word 0xaf80b5d0
  .word 0x16800004
  .word 0x00000000
  .word 0x24020001
  .word 0x1000029c
  .word 0x00000000
  .word 0xae600000
  .word 0x0c06c244
  .word 0x00000000
  .word 0x14400146
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x10400291
  .word 0x00000000
  .word 0x8e910110
  .word 0x8e300008
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac5010c0
  .word 0x3c100096
  .word 0x26100184
  .word 0x8e220008
  .word 0x00022880
  .word 0x24040001
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040902d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac5210c4
  .word 0x8e230008
  .word 0x000310c0
  .word 0x00431021
  .word 0x00022880
  .word 0x24040001
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac5010c8
  .word 0x26330018
  .word 0x0000802d
  .word 0x0000a02d
  .word 0x1000003b
  .word 0x00000000
  .word 0x96630004
  .word 0x24040004
  .word 0x14640020
  .word 0x00000000
  .word 0x96620006
  .word 0x3405ffff
  .word 0x1445001c
  .word 0x00000000
  .word 0x8f83b510
  .word 0x24020001
  .word 0x1462002d
  .word 0x00000000
  .word 0x3c060068
  .word 0x24c64040
  .word 0x0000382d
  .word 0x0c0c5ad0
  .word 0x00000000
  .word 0x0040902d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00141880
  .word 0x8c4210c4
  .word 0x00431021
  .word 0xac520000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x001418c0
  .word 0x00741821
  .word 0x00031880
  .word 0x8c4210c8
  .word 0x00431021
  .word 0xac500008
  .word 0x26940001
  .word 0x10000016
  .word 0x00000000
  .word 0x0060202d
  .word 0x96650006
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0x0040902d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00141880
  .word 0x8c4210c4
  .word 0x00431021
  .word 0xac520000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x001418c0
  .word 0x00741821
  .word 0x00031880
  .word 0x8c4210c8
  .word 0x00431021
  .word 0xac500008
  .word 0x26940001
  .word 0x26100001
  .word 0x26730070
  .word 0x8e220008
  .word 0x0202102b
  .word 0x1440ffc3
  .word 0x00000000
  .word 0x8f82b510
  .word 0x144000ba
  .word 0x00000000
  .word 0x0c06e0fc
  .word 0x00000000
  .word 0x1040005a
  .word 0x00000000
  .word 0x8c44000c
  .word 0x0c06e168
  .word 0x00000000
  .word 0x0040802d
  .word 0x0000b02d
  .word 0x1000004f
  .word 0x00000000
  .word 0x8e040010
  .word 0x2402ffff
  .word 0x10820006
  .word 0x00000000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x10430044
  .word 0x00000000
  .word 0x26270018
  .word 0x0000902d
  .word 0x8e260008
  .word 0x3404ffff
  .word 0x24050004
  .word 0x1000003a
  .word 0x00000000
  .word 0x94e20004
  .word 0x14450035
  .word 0x00000000
  .word 0x94e20006
  .word 0x14440032
  .word 0x00000000
  .word 0x94e30008
  .word 0x96020000
  .word 0x304203ff
  .word 0x34420c00
  .word 0x3042ffff
  .word 0x1462002b
  .word 0x00000000
  .word 0x96020002
  .word 0x14400004
  .word 0x00000000
  .word 0x96020004
  .word 0x1040002a
  .word 0x00000000
  .word 0x24020001
  .word 0xaf82b5d0
  .word 0x96040002
  .word 0x96050004
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0x0040a82d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00141880
  .word 0x8c4210c4
  .word 0x00431021
  .word 0xac550000
  .word 0x001410c0
  .word 0x00541021
  .word 0x0002a880
  .word 0x24170001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4210c8
  .word 0x00551021
  .word 0xac570000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4210c8
  .word 0x00551021
  .word 0xac500004
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4210c8
  .word 0x00551021
  .word 0xac520008
  .word 0x26940001
  .word 0x10000006
  .word 0x00000000
  .word 0x26520001
  .word 0x24e70070
  .word 0x0246102b
  .word 0x1440ffc5
  .word 0x00000000
  .word 0x26d60001
  .word 0x26100020
  .word 0x96030000
  .word 0x3402ffff
  .word 0x1462ffaf
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000053
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c06e358
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c06e36c
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000049
  .word 0x00000000
  .word 0x26270018
  .word 0x0000a82d
  .word 0x8e260008
  .word 0x3404ffff
  .word 0x24050004
  .word 0x1000003f
  .word 0x00000000
  .word 0x94e20004
  .word 0x1445003a
  .word 0x00000000
  .word 0x94e20006
  .word 0x14440037
  .word 0x00000000
  .word 0x94e30008
  .word 0x96020000
  .word 0x304203ff
  .word 0x34420c00
  .word 0x3042ffff
  .word 0x14620030
  .word 0x00000000
  .word 0x96020064
  .word 0x14400004
  .word 0x00000000
  .word 0x96020066
  .word 0x1040002f
  .word 0x00000000
  .word 0x24020001
  .word 0xaf82b5d0
  .word 0x96040064
  .word 0x96050066
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0x0040b02d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00141880
  .word 0x8c4210c4
  .word 0x00431021
  .word 0xac560000
  .word 0x001410c0
  .word 0x00541021
  .word 0x0002b080
  .word 0x24170002
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4210c8
  .word 0x00561021
  .word 0xac570000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4210c8
  .word 0x00561021
  .word 0xac500004
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4210c8
  .word 0x00561021
  .word 0xac550008
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4210c8
  .word 0x00561021
  .word 0xac520010
  .word 0x26940001
  .word 0x10000006
  .word 0x00000000
  .word 0x26b50001
  .word 0x24e70070
  .word 0x02a6102b
  .word 0x1440ffc0
  .word 0x00000000
  .word 0x26520001
  .word 0x8f82b554
  .word 0x0242102b
  .word 0x1440ffab
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac5410c0
  .word 0x0000802d
  .word 0x10000019
  .word 0x00000000
  .word 0x96620050
  .word 0x304403ff
  .word 0x0c0ed7a4
  .word 0x00000000
  .word 0x3052ffff
  .word 0x26640010
  .word 0x0c0696cc
  .word 0x00000000
  .word 0xe7a000e0
  .word 0x26640010
  .word 0x0c0696a8
  .word 0x00000000
  .word 0xe7a000e4
  .word 0x26640010
  .word 0x0c0696f0
  .word 0x00000000
  .word 0xe7a000e8
  .word 0x0240202d
  .word 0x26650040
  .word 0x27a600e0
  .word 0x0c0ede2c
  .word 0x00000000
  .word 0x26100001
  .word 0x26730060
  .word 0x8e220010
  .word 0x0202102b
  .word 0x1440ffe5
  .word 0x00000000
  .word 0x24020001
  .word 0x10000152
  .word 0x00000000
  .word 0x3246ffff
  .word 0x3227ffff
  .word 0x0010443c
  .word 0x0008443f
  .word 0x27a40090
  .word 0x3c050068
  .word 0x24a54060
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a40090
  .word 0x27a500ec
  .word 0x0c040870
  .word 0x00000000
  .word 0x0040a02d
  .word 0x1280013e
  .word 0x00000000
  .word 0xae740000
  .word 0x8e900008
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac5010c0
  .word 0x3c100096
  .word 0x26100184
  .word 0x8e820008
  .word 0x00022880
  .word 0x24040001
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040882d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac5110c4
  .word 0x8e830008
  .word 0x000310c0
  .word 0x00431021
  .word 0x00022880
  .word 0x24040001
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac5010c8
  .word 0x26920018
  .word 0x0000802d
  .word 0x0000982d
  .word 0x1000003b
  .word 0x00000000
  .word 0x96430004
  .word 0x24040004
  .word 0x14640020
  .word 0x00000000
  .word 0x96420006
  .word 0x3405ffff
  .word 0x1445001c
  .word 0x00000000
  .word 0x8f83b510
  .word 0x24020001
  .word 0x1462002d
  .word 0x00000000
  .word 0x3c060068
  .word 0x24c64040
  .word 0x0000382d
  .word 0x0c0c5ad0
  .word 0x00000000
  .word 0x0040882d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00131880
  .word 0x8c4210c4
  .word 0x00431021
  .word 0xac510000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x001318c0
  .word 0x00731821
  .word 0x00031880
  .word 0x8c4210c8
  .word 0x00431021
  .word 0xac500008
  .word 0x26730001
  .word 0x10000016
  .word 0x00000000
  .word 0x0060202d
  .word 0x96450006
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0x0040882d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00131880
  .word 0x8c4210c4
  .word 0x00431021
  .word 0xac510000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x001318c0
  .word 0x00731821
  .word 0x00031880
  .word 0x8c4210c8
  .word 0x00431021
  .word 0xac500008
  .word 0x26730001
  .word 0x26100001
  .word 0x26520070
  .word 0x8e820008
  .word 0x0202102b
  .word 0x1440ffc3
  .word 0x00000000
  .word 0x8f82b510
  .word 0x144000ba
  .word 0x00000000
  .word 0x0c06e0fc
  .word 0x00000000
  .word 0x1040005a
  .word 0x00000000
  .word 0x8c44000c
  .word 0x0c06e168
  .word 0x00000000
  .word 0x0040802d
  .word 0x0000b02d
  .word 0x1000004f
  .word 0x00000000
  .word 0x8e040010
  .word 0x2402ffff
  .word 0x10820006
  .word 0x00000000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x10430044
  .word 0x00000000
  .word 0x26870018
  .word 0x0000882d
  .word 0x8e860008
  .word 0x3404ffff
  .word 0x24050004
  .word 0x1000003a
  .word 0x00000000
  .word 0x94e20004
  .word 0x14450035
  .word 0x00000000
  .word 0x94e20006
  .word 0x14440032
  .word 0x00000000
  .word 0x94e30008
  .word 0x96020000
  .word 0x304203ff
  .word 0x34420c00
  .word 0x3042ffff
  .word 0x1462002b
  .word 0x00000000
  .word 0x96020002
  .word 0x14400004
  .word 0x00000000
  .word 0x96020004
  .word 0x1040002a
  .word 0x00000000
  .word 0x24020001
  .word 0xaf82b5d0
  .word 0x96040002
  .word 0x96050004
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0x0040a82d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00131880
  .word 0x8c4210c4
  .word 0x00431021
  .word 0xac550000
  .word 0x001310c0
  .word 0x00531021
  .word 0x0002a880
  .word 0x24170001
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4210c8
  .word 0x00551021
  .word 0xac570000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4210c8
  .word 0x00551021
  .word 0xac500004
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4210c8
  .word 0x00551021
  .word 0xac510008
  .word 0x26730001
  .word 0x10000006
  .word 0x00000000
  .word 0x26310001
  .word 0x24e70070
  .word 0x0226102b
  .word 0x1440ffc5
  .word 0x00000000
  .word 0x26d60001
  .word 0x26100020
  .word 0x96030000
  .word 0x3402ffff
  .word 0x1462ffaf
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000053
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c06e358
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c06e36c
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000049
  .word 0x00000000
  .word 0x26870018
  .word 0x0000a82d
  .word 0x8e860008
  .word 0x3404ffff
  .word 0x24050004
  .word 0x1000003f
  .word 0x00000000
  .word 0x94e20004
  .word 0x1445003a
  .word 0x00000000
  .word 0x94e20006
  .word 0x14440037
  .word 0x00000000
  .word 0x94e30008
  .word 0x96020000
  .word 0x304203ff
  .word 0x34420c00
  .word 0x3042ffff
  .word 0x14620030
  .word 0x00000000
  .word 0x96020064
  .word 0x14400004
  .word 0x00000000
  .word 0x96020066
  .word 0x1040002f
  .word 0x00000000
  .word 0x24020001
  .word 0xaf82b5d0
  .word 0x96040064
  .word 0x96050066
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0x0040b02d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x00131880
  .word 0x8c4210c4
  .word 0x00431021
  .word 0xac560000
  .word 0x001310c0
  .word 0x00531021
  .word 0x0002b080
  .word 0x24170002
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4210c8
  .word 0x00561021
  .word 0xac570000
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4210c8
  .word 0x00561021
  .word 0xac500004
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4210c8
  .word 0x00561021
  .word 0xac550008
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c4210c8
  .word 0x00561021
  .word 0xac510010
  .word 0x26730001
  .word 0x10000006
  .word 0x00000000
  .word 0x26b50001
  .word 0x24e70070
  .word 0x02a6102b
  .word 0x1440ffc0
  .word 0x00000000
  .word 0x26310001
  .word 0x8f82b554
  .word 0x0222102b
  .word 0x1440ffab
  .word 0x00000000
  .word 0x0c06e448
  .word 0x00000000
  .word 0xac5310c0
  .word 0x0000802d
  .word 0x10000019
  .word 0x00000000
  .word 0x96420050
  .word 0x304403ff
  .word 0x0c0ed7a4
  .word 0x00000000
  .word 0x3051ffff
  .word 0x26440010
  .word 0x0c0696cc
  .word 0x00000000
  .word 0xe7a000d0
  .word 0x26440010
  .word 0x0c0696a8
  .word 0x00000000
  .word 0xe7a000d4
  .word 0x26440010
  .word 0x0c0696f0
  .word 0x00000000
  .word 0xe7a000d8
  .word 0x0220202d
  .word 0x26450040
  .word 0x27a600d0
  .word 0x0c0ede2c
  .word 0x00000000
  .word 0x26100001
  .word 0x26520060
  .word 0x8e820010
  .word 0x0202102b
  .word 0x1440ffe5
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
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
  .word 0x27bd00f0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001E3940
s32 func_001e3940(void* resource, u8* fileData)
{
    typedef struct RuntimeFieldDescriptor
    {
        s32 type;
        void* data;
        s32 recordIndex;
        u8 reserved0c[0x18];
    } RuntimeFieldDescriptor;
    typedef struct RuntimeFieldRecord
    {
        u8 reserved00[8];
        u16 resourceId;
        u8 type;
        u8 flags;
        f32 angle;
        u32 value;
        u8 reserved14[0x0c];
        RuntimeMatrix matrix;
        u8 state;
        u8 sourceType;
        u8 reserved62[2];
        f32 scale;
    } RuntimeFieldRecord;
    typedef struct RuntimeFieldObject
    {
        u8 reserved000[0x28];
        u32 flags;
        u8 reserved02c[0xfc];
        void* model;
        u8 reserved12c[0xb4];
        u16 type;
        u8 sourceType;
        u8 reserved1e3;
        u32 value;
        void* angleController;
        void* frame;
        void* stateController;
        s32 descriptorType;
        void* firstDescriptor;
        void* secondDescriptor;
        u8 reserved200[0x10];
        void* effect;
    } RuntimeFieldObject;
    typedef struct RuntimeScaleDescriptor
    {
        u8 reserved00[6];
        s16 animationId;
        u8 reserved08[0x0c];
        f32 scale;
    } RuntimeScaleDescriptor;
    typedef struct RuntimeEffectDescriptor
    {
        u8 reserved00[0x68];
        s16 animationId;
        u8 reserved6a[0x0a];
        s32 effectIndex;
    } RuntimeEffectDescriptor;

    extern s32 func_00316f70(void* value);
    extern s32 func_001b7e30(void);
    extern u16 func_003b6270(u16 resourceId, u8 type, void* model);
    extern void func_001a0dc0(u16 resourceId, s32 enabled);
    extern RuntimeFieldObject* func_003b5d10(u16 resourceId);
    extern RuntimeMatrix* func_00318b60(void* model);
    extern f32 func_001a5b30(const RuntimeMatrix* matrix);
    extern f32 func_001a5aa0(const RuntimeMatrix* matrix);
    extern f32 func_001a5bc0(const RuntimeMatrix* matrix);
    extern void func_003b78b0(u16 resourceId, const RuntimeVec3* position,
                              const RuntimeVec3* angles);
    extern void func_001ad8c0(f32 value, void* controller);
    extern void func_0019c320(f32 value, void* controller);
    extern void* func_00317450(Model* model);
    extern void func_00318a50(void* frame, const RuntimeVec3* axis,
                              f32 angle, s32 mode);
    extern void func_00318a90(void* frame, const RuntimeVec3* scale,
                              s32 mode);
    extern void func_00318a30(void* frame, const RuntimeVec3* position,
                              s32 mode);
    extern void func_00317730(void* frame);
    extern void func_003182d0(void* model, s32 slot, s16 animationId,
                              s32 mode, s32 enabled);
    extern s32 func_0016f190(s32 flag);
    extern void* func_001dd460(void* controller, s32 type, s32 priority);
    extern void func_001dd5f0(void* effect, void* model);
    extern void func_001dd5e0(void* effect, s32 enabled);
    extern void func_001b8cf0(RuntimeFieldDescriptor* descriptor);
    extern void func_001a1540(s32 first, s32 second, s32 size,
                              const char* name);
    extern RuntimeVec3 D_00684080;
    extern char D_00684090[];
    extern Model* gFldBaseMdl;

    RuntimeFieldRecord* record;
    RuntimeFieldObject* object;
    RuntimeMatrix* matrix;
    RuntimeVec3 angles;
    RuntimeVec3 axis;
    RuntimeVec3 scale;
    RuntimeVec3 animationScale;
    u8* recordBase;
    u32 readyIndex;
    u32 index;
    u32 descriptorOffset;
    u16 objectId;
    u8 objectType;
    s32 effectType;
    void (**allocator)(void*);

    if (resource == NULL)
    {
        return true;
    }

    for (readyIndex = 0;
         readyIndex < *(u32*)(func_001b9120() + 0x10c0);
         readyIndex++)
    {
        if (func_00316f70(
                (*(void***)(func_001b9120() + 0x10c4))[readyIndex]) == 0)
        {
            return false;
        }
    }
    if (func_001b7e30() == 0)
    {
        return false;
    }
    if (func_001b0910() == 0)
    {
        fileData = *(u8**)((u8*)resource + 0x110);
    }
    else if (fileData != NULL)
    {
        __asm__ volatile (".set reorder" : "+r"(fileData));
    }
    else
    {
        return true;
    }

    recordBase = fileData + 0x18;
    for (index = 0;
         index < *(u32*)(func_001b9120() + 0x10c0);
         index++)
    {
        RuntimeFieldDescriptor* descriptor;

        objectType = 3;
        axis = D_00684080;
        descriptorOffset = index * sizeof(RuntimeFieldDescriptor);
        descriptor = (RuntimeFieldDescriptor*)
            ((u8*)*(RuntimeFieldDescriptor**)
                (func_001b9120() + 0x10c8) + descriptorOffset);
        record = (RuntimeFieldRecord*)
            (recordBase + *(u32*)(fileData + 0x0c) *
             descriptor->recordIndex);
        if (*(u32*)(fileData + 4) > 0x10000)
        {
            objectType = record->state;
        }
        objectId = func_003b6270(
            record->resourceId & 0x3ff, objectType & 0xff,
            (*(void***)(func_001b9120() + 0x10c4))[index]);
        func_001a0dc0(objectId, 1);
        object = func_003b5d10(objectId);
        matrix = func_00318b60(
            (*(void***)(func_001b9120() + 0x10c4))[index]);
        *matrix = record->matrix;
        angles.x = func_001a5b30(&record->matrix);
        angles.y = func_001a5aa0(&record->matrix);
        angles.z = func_001a5bc0(&record->matrix);
        func_003b78b0(objectId, (RuntimeVec3*)((u8*)record + 0x50),
                      &angles);
        func_004c2f10(func_00318b60(
            (*(void***)(func_001b9120() + 0x10c4))[index]));
        {
            void* controller;

            controller = object->angleController;
            /* load-bearing: removing this file's 14 zero-width barriers loses 6 MATCHes (001E3940 nd0->32, 001E7AA0 ->9, 001E9920 ->5, 001ECD90 ->21, 001EDF10 ->407, 001EEB90 ->22) - measured W172 */
            __asm__ volatile ("" : "+r"(controller));
            func_001ad8c0(record->angle, controller);
            controller = object->stateController;
            /* load-bearing: removing this file's 14 zero-width barriers loses 6 MATCHes (001E3940 nd0->32, 001E7AA0 ->9, 001E9920 ->5, 001ECD90 ->21, 001EDF10 ->407, 001EEB90 ->22) - measured W172 */
            __asm__ volatile ("" : "+r"(controller));
            func_0019c320(record->scale, controller);
        }
        scale.x = record->angle;
        scale.y = record->angle;
        scale.z = record->angle;
        object->frame = func_00317450(gFldBaseMdl);
        func_00318a50(object->frame, &axis, angles.y, 2);
        func_00318a90(object->frame, &scale, 2);
        func_00318a30(object->frame,
                      (RuntimeVec3*)&record->matrix.values[12], 2);
        func_00317730(object->frame);
        if ((record->flags & 1) != 0)
        {
            object->flags |= 0x80000000;
        }
        else
        {
            object->flags &= 0x7fffffff;
        }
        object->type = record->type;
        object->value = record->value;
        object->sourceType = record->sourceType;
        object->descriptorType =
            (*(RuntimeFieldDescriptor**)
                (func_001b9120() + 0x10c8))[index].type;
        if (object->descriptorType == 1)
        {
            {
                RuntimeFieldDescriptor* descriptorTable;

                descriptorTable = *(RuntimeFieldDescriptor**)
                    (func_001b9120() + 0x10c8);
                __asm__ volatile (
                    "addu %0, %0, %1"
                    : "+r"(descriptorTable)
                    : "r"(descriptorOffset));
                object->firstDescriptor = descriptorTable->data;
            }
            if (((RuntimeScaleDescriptor*)object->firstDescriptor)->scale !=
                0.0f)
            {
                animationScale.z =
                    ((RuntimeScaleDescriptor*)object->firstDescriptor)->scale;
                animationScale.y =
                    ((RuntimeScaleDescriptor*)object->firstDescriptor)->scale;
                animationScale.x =
                    ((RuntimeScaleDescriptor*)object->firstDescriptor)->scale;
                func_00318a90(object->model, &animationScale, 1);
            }
            {
                s16 animationId;

                animationId =
                    ((RuntimeScaleDescriptor*)object->firstDescriptor)->
                        animationId;
                /* load-bearing: removing this file's 14 zero-width barriers loses 6 MATCHes (001E3940 nd0->32, 001E7AA0 ->9, 001E9920 ->5, 001ECD90 ->21, 001EDF10 ->407, 001EEB90 ->22) - measured W172 */
                __asm__ volatile ("" : "+r"(animationId));
                func_003182d0(object->model, 0, animationId, 8, 1);
            }
        }
        else if (object->descriptorType == 2)
        {
            {
                RuntimeFieldDescriptor* descriptorTable;

                descriptorTable = *(RuntimeFieldDescriptor**)
                    (func_001b9120() + 0x10c8);
                __asm__ volatile (
                    "addu %0, %0, %1"
                    : "+r"(descriptorTable)
                    : "r"(descriptorOffset));
                object->secondDescriptor = descriptorTable->data;
            }
            {
                s16 animationId;

                animationId =
                    ((RuntimeEffectDescriptor*)object->secondDescriptor)->
                        animationId;
                /* load-bearing: removing this file's 14 zero-width barriers loses 6 MATCHes (001E3940 nd0->32, 001E7AA0 ->9, 001E9920 ->5, 001ECD90 ->21, 001EDF10 ->407, 001EEB90 ->22) - measured W172 */
                __asm__ volatile ("" : "+r"(animationId));
                func_003182d0(object->model, 0, animationId, 8, 1);
            }
            if (((RuntimeEffectDescriptor*)object->secondDescriptor)->
                    effectIndex != 0xff)
            {
                effectType = 3;
                if (func_0016f190(
                        ((RuntimeEffectDescriptor*)object->secondDescriptor)->
                            effectIndex + 0x900))
                {
                    effectType = 2;
                }
                else if (func_0016f190(
                             ((RuntimeEffectDescriptor*)
                                 object->secondDescriptor)->effectIndex +
                             0x940))
                {
                    effectType = 1;
                }
                object->effect = func_001dd460(
                    object->angleController, effectType, 0x1058);
                func_001dd5f0(object->effect, object->model);
                func_001dd5e0(object->effect, 1);
            }
            func_001b8cf0(
                &(*(RuntimeFieldDescriptor**)
                    (func_001b9120() + 0x10c8))[index]);
        }
    }

    allocator = (void (**)(void*))DAT_0096017c;
    allocator[0](*(void**)(func_001b9120() + 0x10c4));
    allocator[0](*(void**)(func_001b9120() + 0x10c8));
    if (*(u32*)(fileData + 4) <= 0x10000)
    {
        func_001a1540(0, 0, 0x184, D_00684090);
    }
    *(u32*)(func_001b9120() + 0x10c0) = 0;
    *(void**)(func_001b9120() + 0x10c4) = NULL;
    if (func_001b0910() == 0)
    {
        func_00100ec0(resource);
    }
    return true;
}

// FUN_001E3F10
#ifndef PC_BUILD
asm void func_001e3f10(RuntimeTask* task)
{
  .set noreorder
  .word 0x27bdfee0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c92003c
  .word 0x8e420000
  .word 0x2c410007
  .word 0x102002ee
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636d90
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24050122
  .word 0x240600dc
  .word 0x24070002
  .word 0x0c068ec4
  .word 0x00000000
  .word 0xae420004
  .word 0x0040202d
  .word 0x27859628
  .word 0x0c068fc8
  .word 0x00000000
  .word 0x8e440004
  .word 0x27859630
  .word 0x0c068fc8
  .word 0x00000000
  .word 0x8e440004
  .word 0x24050001
  .word 0x0c068efc
  .word 0x00000000
  .word 0x8e420000
  .word 0x24420001
  .word 0xae420000
  .word 0x100002d0
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x1040003b
  .word 0x00000000
  .word 0x8e440004
  .word 0x0c069144
  .word 0x00000000
  .word 0x24030001
  .word 0x1043001d
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x100002c1
  .word 0x00000000
  .word 0x8e440004
  .word 0x0c065408
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050020
  .word 0x00a0302d
  .word 0x24070002
  .word 0x0c068ec4
  .word 0x00000000
  .word 0xae420004
  .word 0x0040202d
  .word 0x3c050068
  .word 0x24a54120
  .word 0x24060008
  .word 0x0c068f70
  .word 0x00000000
  .word 0x8e440004
  .word 0x24050001
  .word 0x0c068efc
  .word 0x00000000
  .word 0x24020002
  .word 0xae420000
  .word 0x100002a9
  .word 0x00000000
  .word 0x8e440004
  .word 0x0c065408
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050020
  .word 0x00a0302d
  .word 0x24070002
  .word 0x0c068ec4
  .word 0x00000000
  .word 0xae420004
  .word 0x0040202d
  .word 0x3c050068
  .word 0x24a54220
  .word 0x24060002
  .word 0x0c068f70
  .word 0x00000000
  .word 0x8e440004
  .word 0x24050001
  .word 0x0c068efc
  .word 0x00000000
  .word 0x24020003
  .word 0xae420000
  .word 0x10000291
  .word 0x00000000
  .word 0x30620020
  .word 0x1040028e
  .word 0x00000000
  .word 0x24020006
  .word 0xae420000
  .word 0x1000028a
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x1040005a
  .word 0x00000000
  .word 0x8e440004
  .word 0x0c069144
  .word 0x00000000
  .word 0x24030007
  .word 0x10430003
  .word 0x00000000
  .word 0x1000027d
  .word 0x00000000
  .word 0x8e440004
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x94500000
  .word 0x8e440004
  .word 0x24050001
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xa6420010
  .word 0x8e440004
  .word 0x24050002
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xa6420012
  .word 0x8e440004
  .word 0x24050004
  .word 0x0c06906c
  .word 0x00000000
  .word 0xc4400000
  .word 0x46800020
  .word 0xe6400018
  .word 0x8e440004
  .word 0x24050005
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xa2420020
  .word 0x8e440004
  .word 0x24050006
  .word 0x0c06906c
  .word 0x00000000
  .word 0xc4400000
  .word 0x46800020
  .word 0xe6400024
  .word 0xa2400021
  .word 0x8e440004
  .word 0x24050003
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c430000
  .word 0x24020001
  .word 0x14620006
  .word 0x00000000
  .word 0x92420017
  .word 0x34420001
  .word 0xa2420017
  .word 0x10000004
  .word 0x00000000
  .word 0x92420017
  .word 0x304200fe
  .word 0xa2420017
  .word 0x3202ffff
  .word 0x304203ff
  .word 0x34420c00
  .word 0x3044ffff
  .word 0x0c078a04
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x240600b4
  .word 0x3c070068
  .word 0x24e74270
  .word 0x0c068550
  .word 0x00000000
  .word 0x10000236
  .word 0x00000000
  .word 0x96440010
  .word 0x96450012
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0xae420028
  .word 0x24020004
  .word 0xae420000
  .word 0x1000022c
  .word 0x00000000
  .word 0x30620020
  .word 0x10400229
  .word 0x00000000
  .word 0x24020006
  .word 0xae420000
  .word 0x10000225
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400036
  .word 0x00000000
  .word 0x8e440004
  .word 0x0c069144
  .word 0x00000000
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x10000218
  .word 0x00000000
  .word 0x8e440004
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x94430000
  .word 0x24020004
  .word 0xa6420010
  .word 0x3402ffff
  .word 0xa6420012
  .word 0x3c0241f0
  .word 0xae420018
  .word 0x24020003
  .word 0xa2420020
  .word 0x3c024270
  .word 0xae420024
  .word 0x24020001
  .word 0xa2420021
  .word 0x306203ff
  .word 0x34420c00
  .word 0x3044ffff
  .word 0x0c078a04
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x240600b4
  .word 0x3c070068
  .word 0x24e74270
  .word 0x0c068550
  .word 0x00000000
  .word 0x100001f7
  .word 0x00000000
  .word 0x24040004
  .word 0x3405ffff
  .word 0x3c060068
  .word 0x24c64290
  .word 0x0000382d
  .word 0x0c0c5ad0
  .word 0x00000000
  .word 0xae420028
  .word 0x24020004
  .word 0xae420000
  .word 0x100001eb
  .word 0x00000000
  .word 0x30620020
  .word 0x104001e8
  .word 0x00000000
  .word 0x24020006
  .word 0xae420000
  .word 0x100001e4
  .word 0x00000000
  .word 0x8e440004
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x94500000
  .word 0x8e440028
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x104001da
  .word 0x00000000
  .word 0x92450020
  .word 0x0200202d
  .word 0x8e460028
  .word 0x0c0ed89c
  .word 0x00000000
  .word 0xa6420014
  .word 0x96440014
  .word 0x24050001
  .word 0x0c068370
  .word 0x00000000
  .word 0x96440014
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x8c4401e8
  .word 0xae44002c
  .word 0xc64c0018
  .word 0x0c06b630
  .word 0x00000000
  .word 0x8e44002c
  .word 0x3c058000
  .word 0x0c06b61c
  .word 0x00000000
  .word 0x8e440004
  .word 0x0c065408
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0xc4420030
  .word 0xc4410034
  .word 0xc4400038
  .word 0xe7a20110
  .word 0xe7a10114
  .word 0xe7a00118
  .word 0x27a40100
  .word 0xc4420020
  .word 0xc4410024
  .word 0xc4400028
  .word 0xe7a20100
  .word 0xe7a10104
  .word 0xe7a00108
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c02447a
  .word 0x44820800
  .word 0xc7a00100
  .word 0x460100c2
  .word 0xe7a30100
  .word 0xc7a00104
  .word 0x46010082
  .word 0xe7a20104
  .word 0xc7a00108
  .word 0x46010042
  .word 0xe7a10108
  .word 0xc7a00110
  .word 0x46030000
  .word 0xe7a00110
  .word 0xc7a00114
  .word 0x46020000
  .word 0xe7a00114
  .word 0xc7a00118
  .word 0x46010000
  .word 0xe7a00118
  .word 0x8e44002c
  .word 0x27a50110
  .word 0x0c06b708
  .word 0x00000000
  .word 0x8e420000
  .word 0x24420001
  .word 0xae420000
  .word 0x1000018f
  .word 0x00000000
  .word 0x27a300e0
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
  .word 0x3c020068
  .word 0xdc434260
  .word 0x3c020068
  .word 0xc4404268
  .word 0xffa300d0
  .word 0xe7a000d8
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0696a8
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9042095f
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
  .word 0x46011041
  .word 0xe7a100e8
  .word 0x3c02007e
  .word 0x9444094c
  .word 0x30821000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c02c300
  .word 0xafa200e8
  .word 0x30824000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c024300
  .word 0xafa200e8
  .word 0x3c02007e
  .word 0x9042095e
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
  .word 0x46011041
  .word 0xe7a100e0
  .word 0x30828000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c02c300
  .word 0xafa200e0
  .word 0x30822000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c024300
  .word 0xafa200e0
  .word 0xc7a100e8
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
  .word 0xc7a100e0
  .word 0x46030834
  .word 0x45010004
  .word 0x00000000
  .word 0x46020836
  .word 0x45010051
  .word 0x00000000
  .word 0x3c023f80
  .word 0xafa20068
  .word 0xafa20054
  .word 0xafa20040
  .word 0xafa00050
  .word 0xafa00048
  .word 0xafa00044
  .word 0xafa00064
  .word 0xafa00060
  .word 0xafa00058
  .word 0xafa00078
  .word 0xafa00074
  .word 0xafa00070
  .word 0x8fa3004c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xafa2004c
  .word 0x27a40040
  .word 0x27a500d0
  .word 0x46000306
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a400f0
  .word 0x27a500e0
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a000f0
  .word 0x46000007
  .word 0xe7a000f0
  .word 0xc7a000f4
  .word 0x46000007
  .word 0xe7a000f4
  .word 0xc7a000f8
  .word 0x46000007
  .word 0xe7a000f8
  .word 0x27a400f0
  .word 0x0080282d
  .word 0x27a60040
  .word 0x0c131af8
  .word 0x00000000
  .word 0xc7a100e0
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000006
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000802
  .word 0xe7a000e0
  .word 0xc7a100e8
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000006
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000802
  .word 0xe7a000e8
  .word 0xc7a100e0
  .word 0xc7a000e8
  .word 0x46000840
  .word 0xc7808428
  .word 0x46010042
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x8e44002c
  .word 0x27a500f0
  .word 0x0c06b77c
  .word 0x00000000
  .word 0x3c02007e
  .word 0x90420960
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
  .word 0x3c024300
  .word 0x44820000
  .word 0x00000000
  .word 0x46000841
  .word 0xe7a100e0
  .word 0x3c02c240
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45010007
  .word 0x00000000
  .word 0x3c024240
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010007
  .word 0x00000000
  .word 0xc780842c
  .word 0x46010302
  .word 0x8e44002c
  .word 0x27a500d0
  .word 0x0c06b7fc
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x30620006
  .word 0x10400017
  .word 0x00000000
  .word 0x27a40090
  .word 0x8e45002c
  .word 0x0c06b650
  .word 0x00000000
  .word 0x27a500c0
  .word 0xc7a20090
  .word 0xc7a10094
  .word 0xc7a00098
  .word 0xe7a200c0
  .word 0xe7a100c4
  .word 0xe7a000c8
  .word 0xc7a100c4
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a000c4
  .word 0x8e44002c
  .word 0x0c06b708
  .word 0x00000000
  .word 0x10000090
  .word 0x00000000
  .word 0x30620009
  .word 0x10400017
  .word 0x00000000
  .word 0x27a40080
  .word 0x8e45002c
  .word 0x0c06b650
  .word 0x00000000
  .word 0x27a500b0
  .word 0xc7a20080
  .word 0xc7a10084
  .word 0xc7a00088
  .word 0xe7a200b0
  .word 0xe7a100b4
  .word 0xe7a000b8
  .word 0xc7a100b4
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a000b4
  .word 0x8e44002c
  .word 0x0c06b708
  .word 0x00000000
  .word 0x10000077
  .word 0x00000000
  .word 0x30620080
  .word 0x10400006
  .word 0x00000000
  .word 0x8e44002c
  .word 0x0c06b834
  .word 0x00000000
  .word 0x1000006f
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620020
  .word 0x10400007
  .word 0x00000000
  .word 0x96440014
  .word 0x0c0edc24
  .word 0x00000000
  .word 0xae400000
  .word 0x10000064
  .word 0x00000000
  .word 0x30620040
  .word 0x10400061
  .word 0x00000000
  .word 0x0c078a14
  .word 0x00000000
  .word 0x0040882d
  .word 0x96440014
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040802d
  .word 0x8e430028
  .word 0xae230000
  .word 0x96430014
  .word 0xa6230008
  .word 0x96430010
  .word 0xa6230004
  .word 0x96430012
  .word 0xa6230006
  .word 0xc6400018
  .word 0xe620000c
  .word 0x92430016
  .word 0xa223000a
  .word 0xa44301e0
  .word 0x92420017
  .word 0xa222000b
  .word 0x92420021
  .word 0xa2220061
  .word 0x9222000b
  .word 0x30420001
  .word 0x10400007
  .word 0x00000000
  .word 0x8e030028
  .word 0x3c028000
  .word 0x00621025
  .word 0xae020028
  .word 0x10000005
  .word 0x00000000
  .word 0x8e020028
  .word 0x0002107c
  .word 0x0002107e
  .word 0xae020028
  .word 0x8e42001c
  .word 0xae220010
  .word 0xae0201e4
  .word 0x8e440028
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x26260020
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
  .word 0x92420020
  .word 0xa2220060
  .word 0xc6400024
  .word 0xe6200064
  .word 0x8e0401f0
  .word 0xc64c0024
  .word 0x0c0670c8
  .word 0x00000000
  .word 0x26240020
  .word 0x0c0696cc
  .word 0x00000000
  .word 0xe7a000a0
  .word 0x26240020
  .word 0x0c0696a8
  .word 0x00000000
  .word 0xe7a000a4
  .word 0x26240020
  .word 0x0c0696f0
  .word 0x00000000
  .word 0xe7a000a8
  .word 0x96240008
  .word 0x26250050
  .word 0x27a600a0
  .word 0x0c0ede2c
  .word 0x00000000
  .word 0x8e44002c
  .word 0x3c058000
  .word 0x0c06b624
  .word 0x00000000
  .word 0x8e240000
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c130bc4
  .word 0x00000000
  .word 0xae400000
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
  .word 0x27bd0120
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001E4B10
void func_001e4b10(RuntimeTask* task, u32 request)
{
    ((void (*)(void*, u32))DAT_0096017c[0])(task->workData, request);
}

// FUN_001E4B40. Create the primary field controller task.
void* func_001e4b40(void* parent)
{
    void* work;

    work = FIELD_RUNTIME_ALLOCATOR(1, 0x30, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    return kwlnTaskCreateWithAutoPriority(
        parent, 0x106f, D_006842A8,
        (void*)func_001e3f10, (void*)func_001e4b10, work);
}

// FUN_001E4BC0
#ifndef PC_BUILD
asm s32 func_001e4bc0(RuntimeTask* task)
{
  .set noreorder
  .word 0x27bdfe80
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c92003c
  .word 0x8e440000
  .word 0x2c810007
  .word 0x10200306
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636db0
  .word 0x00041080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0c078610
  .word 0x00000000
  .word 0x8c500000
  .word 0xae40000c
  .word 0x0220202d
  .word 0x24050020
  .word 0x00a0302d
  .word 0x24070002
  .word 0x0c068ec4
  .word 0x00000000
  .word 0xae420004
  .word 0x10000017
  .word 0x00000000
  .word 0x96020008
  .word 0x304603ff
  .word 0x96070004
  .word 0x96080006
  .word 0x27a40080
  .word 0x3c050068
  .word 0x24a542d0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x8e440004
  .word 0x27a50080
  .word 0x0c068fc8
  .word 0x00000000
  .word 0x8e440004
  .word 0x0040282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0xac500000
  .word 0x8e42000c
  .word 0x24420001
  .word 0xae42000c
  .word 0x8e10006c
  .word 0x1600ffe9
  .word 0x00000000
  .word 0x8e42000c
  .word 0x14400008
  .word 0x00000000
  .word 0x8e440004
  .word 0x0c065408
  .word 0x00000000
  .word 0x24020006
  .word 0xae420000
  .word 0x100002d0
  .word 0x00000000
  .word 0x8e440004
  .word 0x24050001
  .word 0x0c068efc
  .word 0x00000000
  .word 0x8e420000
  .word 0x24420001
  .word 0xae420000
  .word 0x100002c7
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000e
  .word 0x00000000
  .word 0x8e440004
  .word 0x0200282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0x94440008
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x8c4401e8
  .word 0x3c058000
  .word 0x0c06b624
  .word 0x00000000
  .word 0x26100001
  .word 0x8e42000c
  .word 0x0202102a
  .word 0x1440fff0
  .word 0x00000000
  .word 0x8e440004
  .word 0x0c069144
  .word 0x00000000
  .word 0x8e440004
  .word 0x0040282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c500000
  .word 0x96040008
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x8c4401e8
  .word 0x3c058000
  .word 0x0c06b61c
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400086
  .word 0x00000000
  .word 0x8e440004
  .word 0x0c065408
  .word 0x00000000
  .word 0x8e020000
  .word 0xae420028
  .word 0x96020008
  .word 0xa6420014
  .word 0x96020004
  .word 0xa6420010
  .word 0x96020006
  .word 0xa6420012
  .word 0xc600000c
  .word 0xe6400018
  .word 0x9202000b
  .word 0xa2420017
  .word 0x9202000a
  .word 0xa2420016
  .word 0x8e020010
  .word 0xae42001c
  .word 0x92020060
  .word 0xa2420020
  .word 0xc6000064
  .word 0xe6400024
  .word 0x96440014
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040802d
  .word 0x8c4401e8
  .word 0xae44002c
  .word 0x3c058000
  .word 0x0c06b61c
  .word 0x00000000
  .word 0x92420017
  .word 0x30420001
  .word 0x10400007
  .word 0x00000000
  .word 0x8e030028
  .word 0x3c028000
  .word 0x00621025
  .word 0xae020028
  .word 0x10000005
  .word 0x00000000
  .word 0x8e020028
  .word 0x0002107c
  .word 0x0002107e
  .word 0xae020028
  .word 0x0220202d
  .word 0x24050020
  .word 0x00a0302d
  .word 0x24070002
  .word 0x0c068ec4
  .word 0x00000000
  .word 0xae420004
  .word 0x0040202d
  .word 0x3c050068
  .word 0x24a54120
  .word 0x24060008
  .word 0x0c068f70
  .word 0x00000000
  .word 0xc6400018
  .word 0x46000024
  .word 0x44100000
  .word 0x8e440004
  .word 0x24050004
  .word 0x0c06906c
  .word 0x00000000
  .word 0xac500000
  .word 0x92500020
  .word 0x8e440004
  .word 0x24050005
  .word 0x0c06906c
  .word 0x00000000
  .word 0xac500000
  .word 0xc6400024
  .word 0x46000024
  .word 0x44100000
  .word 0x8e440004
  .word 0x24050006
  .word 0x0c06906c
  .word 0x00000000
  .word 0xac500000
  .word 0x92420017
  .word 0x30420001
  .word 0x10400009
  .word 0x00000000
  .word 0x24100001
  .word 0x8e440004
  .word 0x24050003
  .word 0x0c06906c
  .word 0x00000000
  .word 0xac500000
  .word 0x10000006
  .word 0x00000000
  .word 0x8e440004
  .word 0x24050003
  .word 0x0c06906c
  .word 0x00000000
  .word 0xac400000
  .word 0x8e440004
  .word 0x24050001
  .word 0x0c0690e0
  .word 0x00000000
  .word 0x8e440004
  .word 0x24050002
  .word 0x0c0690e0
  .word 0x00000000
  .word 0x8e440004
  .word 0x0000282d
  .word 0x0c0690e0
  .word 0x00000000
  .word 0x8e440004
  .word 0x24050007
  .word 0x0c0690e0
  .word 0x00000000
  .word 0x8e440004
  .word 0x3c050068
  .word 0x24a542f0
  .word 0x0c068fc8
  .word 0x00000000
  .word 0x8e440004
  .word 0x3c050068
  .word 0x24a54300
  .word 0x0c068fc8
  .word 0x00000000
  .word 0x8e440004
  .word 0x24050001
  .word 0x0c068efc
  .word 0x00000000
  .word 0x8e420000
  .word 0x24420001
  .word 0xae420000
  .word 0x1000021a
  .word 0x00000000
  .word 0x30620020
  .word 0x10400217
  .word 0x00000000
  .word 0x8e440004
  .word 0x0c065408
  .word 0x00000000
  .word 0x24020006
  .word 0xae420000
  .word 0x10000210
  .word 0x00000000
  .word 0x24820001
  .word 0xae420000
  .word 0x1000020c
  .word 0x00000000
  .word 0x8e440004
  .word 0x24050004
  .word 0x0c06906c
  .word 0x00000000
  .word 0xc4400000
  .word 0x46800020
  .word 0xe6400018
  .word 0x8e44002c
  .word 0xc64c0018
  .word 0x0c06b630
  .word 0x00000000
  .word 0x8e440004
  .word 0x24050005
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c420000
  .word 0xa2420020
  .word 0x8e440004
  .word 0x24050006
  .word 0x0c06906c
  .word 0x00000000
  .word 0xc4400000
  .word 0x46800020
  .word 0xe6400024
  .word 0x8e440004
  .word 0x24050003
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c430000
  .word 0x24020001
  .word 0x14620006
  .word 0x00000000
  .word 0x92420017
  .word 0x34420001
  .word 0xa2420017
  .word 0x10000004
  .word 0x00000000
  .word 0x92420017
  .word 0x304200fe
  .word 0xa2420017
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x1040002e
  .word 0x00000000
  .word 0x8e440004
  .word 0x0c069144
  .word 0x00000000
  .word 0x24030009
  .word 0x1043000f
  .word 0x00000000
  .word 0x24030008
  .word 0x10430003
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x8e440004
  .word 0x0000282d
  .word 0x0c068efc
  .word 0x00000000
  .word 0x8e420000
  .word 0x24420001
  .word 0xae420000
  .word 0x1000001a
  .word 0x00000000
  .word 0x0220202d
  .word 0x2405012c
  .word 0x240600dc
  .word 0x24070002
  .word 0x0c068ec4
  .word 0x00000000
  .word 0xae420008
  .word 0x0040202d
  .word 0x27859638
  .word 0x0c068fc8
  .word 0x00000000
  .word 0x8e440008
  .word 0x2785963c
  .word 0x0c068fc8
  .word 0x00000000
  .word 0x8e440008
  .word 0x24050001
  .word 0x0c068efc
  .word 0x00000000
  .word 0x8e440004
  .word 0x0000282d
  .word 0x0c068efc
  .word 0x00000000
  .word 0x24020005
  .word 0xae420000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420020
  .word 0x104001ad
  .word 0x00000000
  .word 0x96440014
  .word 0x0c078a04
  .word 0x00000000
  .word 0x0040882d
  .word 0x96440014
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0040802d
  .word 0x8e440028
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x26260020
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
  .word 0xc6400018
  .word 0xe620000c
  .word 0x92420017
  .word 0xa222000b
  .word 0x9222000b
  .word 0x30420001
  .word 0x10400007
  .word 0x00000000
  .word 0x8e030028
  .word 0x3c028000
  .word 0x00621025
  .word 0xae020028
  .word 0x10000005
  .word 0x00000000
  .word 0x8e020028
  .word 0x0002107c
  .word 0x0002107e
  .word 0xae020028
  .word 0x92420016
  .word 0xa222000a
  .word 0xa60201e0
  .word 0x8e42001c
  .word 0xae220010
  .word 0xae0201e4
  .word 0x96240008
  .word 0x26250050
  .word 0x27a60170
  .word 0x0c0ede2c
  .word 0x00000000
  .word 0x92420020
  .word 0xa2220060
  .word 0xc6400024
  .word 0xe6200064
  .word 0x8e0401f0
  .word 0xc64c0024
  .word 0x0c0670c8
  .word 0x00000000
  .word 0x26240020
  .word 0x0c0696cc
  .word 0x00000000
  .word 0xe7a00170
  .word 0x26240020
  .word 0x0c0696a8
  .word 0x00000000
  .word 0xe7a00174
  .word 0x26240020
  .word 0x0c0696f0
  .word 0x00000000
  .word 0xe7a00178
  .word 0x96240008
  .word 0x26250050
  .word 0x27a60170
  .word 0x0c0ede2c
  .word 0x00000000
  .word 0x8e440004
  .word 0x0c065408
  .word 0x00000000
  .word 0x8e44002c
  .word 0x3c058000
  .word 0x0c06b624
  .word 0x00000000
  .word 0xae400000
  .word 0x10000157
  .word 0x00000000
  .word 0x27a30150
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
  .word 0x3c020068
  .word 0xdc4342b8
  .word 0x3c020068
  .word 0xc44042c0
  .word 0xffa30140
  .word 0xe7a00148
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0696a8
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9042095f
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
  .word 0x46011041
  .word 0xe7a10158
  .word 0x3c02007e
  .word 0x9444094c
  .word 0x30821000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c02c300
  .word 0xafa20158
  .word 0x30824000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c024300
  .word 0xafa20158
  .word 0x3c02007e
  .word 0x9042095e
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
  .word 0x46011041
  .word 0xe7a10150
  .word 0x30828000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c02c300
  .word 0xafa20150
  .word 0x30822000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c024300
  .word 0xafa20150
  .word 0xc7a10158
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
  .word 0xc7a10150
  .word 0x46030834
  .word 0x45010004
  .word 0x00000000
  .word 0x46020836
  .word 0x45010051
  .word 0x00000000
  .word 0x3c023f80
  .word 0xafa20068
  .word 0xafa20054
  .word 0xafa20040
  .word 0xafa00050
  .word 0xafa00048
  .word 0xafa00044
  .word 0xafa00064
  .word 0xafa00060
  .word 0xafa00058
  .word 0xafa00078
  .word 0xafa00074
  .word 0xafa00070
  .word 0x8fa3004c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xafa2004c
  .word 0x27a40040
  .word 0x27a50140
  .word 0x46000306
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40160
  .word 0x27a50150
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00160
  .word 0x46000007
  .word 0xe7a00160
  .word 0xc7a00164
  .word 0x46000007
  .word 0xe7a00164
  .word 0xc7a00168
  .word 0x46000007
  .word 0xe7a00168
  .word 0x27a40160
  .word 0x0080282d
  .word 0x27a60040
  .word 0x0c131af8
  .word 0x00000000
  .word 0xc7a10150
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000006
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000802
  .word 0xe7a00150
  .word 0xc7a10158
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000006
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000802
  .word 0xe7a00158
  .word 0xc7a10150
  .word 0xc7a00158
  .word 0x46000840
  .word 0xc7808428
  .word 0x46010042
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x8e44002c
  .word 0x27a50160
  .word 0x0c06b77c
  .word 0x00000000
  .word 0x3c02007e
  .word 0x90420960
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
  .word 0x3c024300
  .word 0x44820000
  .word 0x00000000
  .word 0x46000841
  .word 0xe7a10150
  .word 0x3c02c240
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45010007
  .word 0x00000000
  .word 0x3c024240
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010007
  .word 0x00000000
  .word 0xc780842c
  .word 0x46010302
  .word 0x8e44002c
  .word 0x27a50140
  .word 0x0c06b7fc
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x30620006
  .word 0x10400017
  .word 0x00000000
  .word 0x27a40110
  .word 0x8e45002c
  .word 0x0c06b650
  .word 0x00000000
  .word 0x27a50130
  .word 0xc7a20110
  .word 0xc7a10114
  .word 0xc7a00118
  .word 0xe7a20130
  .word 0xe7a10134
  .word 0xe7a00138
  .word 0xc7a10134
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a00134
  .word 0x8e44002c
  .word 0x0c06b708
  .word 0x00000000
  .word 0x10000058
  .word 0x00000000
  .word 0x30620009
  .word 0x10400017
  .word 0x00000000
  .word 0x27a40100
  .word 0x8e45002c
  .word 0x0c06b650
  .word 0x00000000
  .word 0x27a50120
  .word 0xc7a20100
  .word 0xc7a10104
  .word 0xc7a00108
  .word 0xe7a20120
  .word 0xe7a10124
  .word 0xe7a00128
  .word 0xc7a10124
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00124
  .word 0x8e44002c
  .word 0x0c06b708
  .word 0x00000000
  .word 0x1000003f
  .word 0x00000000
  .word 0x30620080
  .word 0x10400006
  .word 0x00000000
  .word 0x8e44002c
  .word 0x0c06b834
  .word 0x00000000
  .word 0x10000037
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420060
  .word 0x10400032
  .word 0x00000000
  .word 0x8e440004
  .word 0x24050001
  .word 0x0c068efc
  .word 0x00000000
  .word 0x24020003
  .word 0xae420000
  .word 0x1000002a
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x10400025
  .word 0x00000000
  .word 0x8e440008
  .word 0x0c069144
  .word 0x00000000
  .word 0x24050001
  .word 0x1045000c
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x8e440004
  .word 0x0c068efc
  .word 0x00000000
  .word 0x24020003
  .word 0xae420000
  .word 0x1000000c
  .word 0x00000000
  .word 0x96440014
  .word 0x0c078a04
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c078a28
  .word 0x00000000
  .word 0x8e440004
  .word 0x0c065408
  .word 0x00000000
  .word 0xae400000
  .word 0x8e440008
  .word 0x0c065408
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
  .word 0x27bd0180
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001E5820
void func_001e5820(RuntimeTask* task, u32 request)
{
    ((void (*)(void*, u32))DAT_0096017c[0])(task->workData, request);
}

// FUN_001E5850. Create the field controller task.
void* func_001e5850(void* parent)
{
    void* work;

    work = FIELD_RUNTIME_ALLOCATOR(1, 0x30, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    return kwlnTaskCreateWithAutoPriority(
        parent, 0x106f, D_00684310,
        (void*)func_001e4bc0, (void*)func_001e5820, work);
}

// Retail dispatches states 0-3 in a linear chain, with state 2's 0x20
// cleanup and 0x40 task-node branches sharing the final epilogue.  The
// reconstructed state machine and both input branches are implemented;
// residual differences are register/layout choices in the resource path.
// FUN_001E58D0
#ifndef PC_BUILD
asm s32 func_001e58d0(RuntimeTask* task)
{
  .set noreorder
  .word 0x27bdff00
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c91003c
  .word 0x8e230000
  .word 0x24050003
  .word 0x106501b4
  .word 0x00000000
  .word 0x24070002
  .word 0x10670057
  .word 0x00000000
  .word 0x24020001
  .word 0x10620019
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100001ad
  .word 0x00000000
  .word 0x24050020
  .word 0x00a0302d
  .word 0x0c068ec4
  .word 0x00000000
  .word 0xae220004
  .word 0x0040202d
  .word 0x3c050068
  .word 0x24a54330
  .word 0x24060002
  .word 0x0c068f70
  .word 0x00000000
  .word 0x8e240004
  .word 0x24050001
  .word 0x0c068efc
  .word 0x00000000
  .word 0x8e220000
  .word 0x24420001
  .word 0xae220000
  .word 0x10000199
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400031
  .word 0x00000000
  .word 0x8e240004
  .word 0x0c069144
  .word 0x00000000
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x1000018c
  .word 0x00000000
  .word 0x8e240004
  .word 0x0000282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x94520000
  .word 0x324203ff
  .word 0x34422000
  .word 0x3044ffff
  .word 0x0c078a78
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x240600b4
  .word 0x3c070068
  .word 0x24e74380
  .word 0x0c068550
  .word 0x00000000
  .word 0x10000177
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0ed7a4
  .word 0x00000000
  .word 0xa6220010
  .word 0x96240010
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c069334
  .word 0x00000000
  .word 0xae220014
  .word 0x8e240004
  .word 0x0c065408
  .word 0x00000000
  .word 0x8e220000
  .word 0x24420001
  .word 0xae220000
  .word 0x10000164
  .word 0x00000000
  .word 0x30620020
  .word 0x10400161
  .word 0x00000000
  .word 0xae250000
  .word 0x1000015e
  .word 0x00000000
  .word 0x27a300e0
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
  .word 0x3c020068
  .word 0xdc434370
  .word 0x3c020068
  .word 0xc4404378
  .word 0xffa300d0
  .word 0xe7a000d8
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0696a8
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9042095f
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
  .word 0x46011041
  .word 0xe7a100e8
  .word 0x3c02007e
  .word 0x9444094c
  .word 0x30821000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c02c300
  .word 0xafa200e8
  .word 0x30824000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c024300
  .word 0xafa200e8
  .word 0x3c02007e
  .word 0x9042095e
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
  .word 0x46011041
  .word 0xe7a100e0
  .word 0x30828000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c02c300
  .word 0xafa200e0
  .word 0x30822000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c024300
  .word 0xafa200e0
  .word 0xc7a100e8
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
  .word 0xc7a100e0
  .word 0x46030834
  .word 0x45010004
  .word 0x00000000
  .word 0x46020836
  .word 0x45010051
  .word 0x00000000
  .word 0x3c023f80
  .word 0xafa20068
  .word 0xafa20054
  .word 0xafa20040
  .word 0xafa00050
  .word 0xafa00048
  .word 0xafa00044
  .word 0xafa00064
  .word 0xafa00060
  .word 0xafa00058
  .word 0xafa00078
  .word 0xafa00074
  .word 0xafa00070
  .word 0x8fa3004c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xafa2004c
  .word 0x27a40040
  .word 0x27a500d0
  .word 0x46000306
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a400f0
  .word 0x27a500e0
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a000f0
  .word 0x46000007
  .word 0xe7a000f0
  .word 0xc7a000f4
  .word 0x46000007
  .word 0xe7a000f4
  .word 0xc7a000f8
  .word 0x46000007
  .word 0xe7a000f8
  .word 0x27a400f0
  .word 0x0080282d
  .word 0x27a60040
  .word 0x0c131af8
  .word 0x00000000
  .word 0xc7a100e0
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000006
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000802
  .word 0xe7a000e0
  .word 0xc7a100e8
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000006
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000802
  .word 0xe7a000e8
  .word 0xc7a100e0
  .word 0xc7a000e8
  .word 0x46000840
  .word 0xc7808428
  .word 0x46010042
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x8e240014
  .word 0x27a500f0
  .word 0x0c0693b4
  .word 0x00000000
  .word 0x3c02007e
  .word 0x90420960
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
  .word 0x3c024300
  .word 0x44820000
  .word 0x00000000
  .word 0x46000841
  .word 0xe7a100e0
  .word 0x3c02c240
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45010007
  .word 0x00000000
  .word 0x3c024240
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010007
  .word 0x00000000
  .word 0xc780842c
  .word 0x46010302
  .word 0x8e240014
  .word 0x27a500d0
  .word 0x0c0693d0
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x30620006
  .word 0x10400017
  .word 0x00000000
  .word 0x27a40090
  .word 0x8e250014
  .word 0x0c06937c
  .word 0x00000000
  .word 0x27a500c0
  .word 0xc7a20090
  .word 0xc7a10094
  .word 0xc7a00098
  .word 0xe7a200c0
  .word 0xe7a100c4
  .word 0xe7a000c8
  .word 0xc7a100c4
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a000c4
  .word 0x8e240014
  .word 0x0c069398
  .word 0x00000000
  .word 0x1000005f
  .word 0x00000000
  .word 0x30620009
  .word 0x10400017
  .word 0x00000000
  .word 0x27a40080
  .word 0x8e250014
  .word 0x0c06937c
  .word 0x00000000
  .word 0x27a500b0
  .word 0xc7a20080
  .word 0xc7a10084
  .word 0xc7a00088
  .word 0xe7a200b0
  .word 0xe7a100b4
  .word 0xe7a000b8
  .word 0xc7a100b4
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a000b4
  .word 0x8e240014
  .word 0x0c069398
  .word 0x00000000
  .word 0x10000046
  .word 0x00000000
  .word 0x30620080
  .word 0x10400006
  .word 0x00000000
  .word 0x8e240014
  .word 0x0c069400
  .word 0x00000000
  .word 0x1000003e
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620020
  .word 0x1040000a
  .word 0x00000000
  .word 0x96240010
  .word 0x0c0edc24
  .word 0x00000000
  .word 0x8e240014
  .word 0x0c065408
  .word 0x00000000
  .word 0xae200000
  .word 0x10000030
  .word 0x00000000
  .word 0x30620040
  .word 0x1040002d
  .word 0x00000000
  .word 0x0c078a88
  .word 0x00000000
  .word 0x0040802d
  .word 0x96230010
  .word 0xa4430050
  .word 0x8e230014
  .word 0xac430000
  .word 0x8e240014
  .word 0x0c069394
  .word 0x00000000
  .word 0x26060010
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
  .word 0x26040010
  .word 0x0c0696cc
  .word 0x00000000
  .word 0xe7a000a0
  .word 0x26040010
  .word 0x0c0696a8
  .word 0x00000000
  .word 0xe7a000a4
  .word 0x26040010
  .word 0x0c0696f0
  .word 0x00000000
  .word 0xe7a000a8
  .word 0x96040050
  .word 0x26050040
  .word 0x27a600a0
  .word 0x0c0ede2c
  .word 0x00000000
  .word 0xae200000
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
  .word 0x27bd0100
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001E6000
void func_001e6000(RuntimeTask* task, u32 request)
{
    ((void (*)(void*, u32))DAT_0096017c[0])(task->workData, request);
}

// FUN_001E6030. Create the field transition task.
void* func_001e6030(void* parent)
{
    void* work;

    work = FIELD_RUNTIME_ALLOCATOR(1, 0x18, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    return kwlnTaskCreateWithAutoPriority(
        parent, 10, D_006843A0,
        (void*)func_001e58d0, (void*)func_001e6000, work);
}

// W417 retail case-4 note (not landed): retail gates this path on input mask 0x60,
// finds the resource node via func_001e29e0(resourceId), copies the matrix, then
// calls func_003b78b0 before func_001a3bf0(windowTask, 1), and writes state 3.
// Best W418 reconstruction probe reduced func_001e60b0 from 1522/2240
// (rate 67.95%) to 1333/2364 (rate 56.39%), still NONMATCHING and 84 bytes
// below the 2448-byte retail window.
// W419 mixed-axis probe: firstAxis field tests/abs improved 1333/2364 to
// 1316/2380 (rate 55.29%); using firstAxis for distance regressed to
// 1453/2376 (z) or 1452/2376 (x), full-field distance to 1558/2372,
// and adding missing func_00195020 to 1542/2392; rejected.
// W419 retail decode: multiply-by-negative-one abs forms and x-before-z
// absolute-value order reduce this function to 1258/2408 (52.24% rate);
// rotate input is reused through firstAxis.x to preserve retail stack liveness.
// Direct firstAxis input reconstruction measured 1485/2424 and distance
// field loads measured 1419/2144; both are rejected despite retail loads.
// FUN_001E60B0
#ifndef PC_BUILD
asm s32 func_001e60b0(RuntimeTask* task)
{
  .set noreorder
  .word 0x27bdfe70
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x8c91003c
  .word 0x8e240000
  .word 0x2c810007
  .word 0x1020024d
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636dd0
  .word 0x00041080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0c078610
  .word 0x00000000
  .word 0x8c500004
  .word 0xae20000c
  .word 0x0240202d
  .word 0x24050020
  .word 0x00a0302d
  .word 0x24070002
  .word 0x0c068ec4
  .word 0x00000000
  .word 0xae220004
  .word 0x10000015
  .word 0x00000000
  .word 0x96020050
  .word 0x304603ff
  .word 0x27a40090
  .word 0x3c050068
  .word 0x24a543c0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x8e240004
  .word 0x27a50090
  .word 0x0c068fc8
  .word 0x00000000
  .word 0x8e240004
  .word 0x0040282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0xac500000
  .word 0x8e22000c
  .word 0x24420001
  .word 0xae22000c
  .word 0x8e100058
  .word 0x1600ffeb
  .word 0x00000000
  .word 0x8e22000c
  .word 0x14400008
  .word 0x00000000
  .word 0x8e240004
  .word 0x0c065408
  .word 0x00000000
  .word 0x24020006
  .word 0xae220000
  .word 0x10000219
  .word 0x00000000
  .word 0x8e240004
  .word 0x24050001
  .word 0x0c068efc
  .word 0x00000000
  .word 0x8e220000
  .word 0x24420001
  .word 0xae220000
  .word 0x10000210
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000e
  .word 0x00000000
  .word 0x8e240004
  .word 0x0200282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c530000
  .word 0x96640050
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x8e640000
  .word 0x27859648
  .word 0x0c069370
  .word 0x00000000
  .word 0x26100001
  .word 0x8e22000c
  .word 0x0202102a
  .word 0x1440fff0
  .word 0x00000000
  .word 0x8e240004
  .word 0x0c069144
  .word 0x00000000
  .word 0x8e240004
  .word 0x0040282d
  .word 0x0c06906c
  .word 0x00000000
  .word 0x8c500000
  .word 0x96040050
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x8e040000
  .word 0x2785964c
  .word 0x0c069370
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094e
  .word 0x30620040
  .word 0x10400025
  .word 0x00000000
  .word 0x8e240004
  .word 0x0c065408
  .word 0x00000000
  .word 0x8e020000
  .word 0xae220014
  .word 0x96020050
  .word 0xa6220010
  .word 0x96240010
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050020
  .word 0x00a0302d
  .word 0x24070002
  .word 0x0c068ec4
  .word 0x00000000
  .word 0xae220004
  .word 0x0040202d
  .word 0x3c050068
  .word 0x24a543d0
  .word 0x0c068fc8
  .word 0x00000000
  .word 0x8e240004
  .word 0x3c050068
  .word 0x24a543e0
  .word 0x0c068fc8
  .word 0x00000000
  .word 0x8e240004
  .word 0x24050001
  .word 0x0c068efc
  .word 0x00000000
  .word 0x8e220000
  .word 0x24420001
  .word 0xae220000
  .word 0x100001c4
  .word 0x00000000
  .word 0x30620020
  .word 0x104001c1
  .word 0x00000000
  .word 0x8e240004
  .word 0x0c065408
  .word 0x00000000
  .word 0x24020006
  .word 0xae220000
  .word 0x100001ba
  .word 0x00000000
  .word 0x24820001
  .word 0xae220000
  .word 0x100001b6
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x1040002d
  .word 0x00000000
  .word 0x8e240004
  .word 0x0c069144
  .word 0x00000000
  .word 0x24030001
  .word 0x1043000e
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x8e240004
  .word 0x0000282d
  .word 0x0c068efc
  .word 0x00000000
  .word 0x8e220000
  .word 0x24420001
  .word 0xae220000
  .word 0x1000001a
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405012c
  .word 0x240600dc
  .word 0x24070002
  .word 0x0c068ec4
  .word 0x00000000
  .word 0xae220008
  .word 0x0040202d
  .word 0x27859650
  .word 0x0c068fc8
  .word 0x00000000
  .word 0x8e240008
  .word 0x27859654
  .word 0x0c068fc8
  .word 0x00000000
  .word 0x8e240008
  .word 0x24050001
  .word 0x0c068efc
  .word 0x00000000
  .word 0x8e240004
  .word 0x0000282d
  .word 0x0c068efc
  .word 0x00000000
  .word 0x24020005
  .word 0xae220000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420020
  .word 0x10400180
  .word 0x00000000
  .word 0x8e240004
  .word 0x0c065408
  .word 0x00000000
  .word 0xae200000
  .word 0x1000017a
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
  .word 0x3c020068
  .word 0xdc4343b0
  .word 0x3c020068
  .word 0xc44043b8
  .word 0xffa30160
  .word 0xe7a00168
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0696a8
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9042095f
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
  .word 0x46011041
  .word 0xe7a10178
  .word 0x3c02007e
  .word 0x9444094c
  .word 0x30821000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c02c300
  .word 0xafa20178
  .word 0x30824000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c024300
  .word 0xafa20178
  .word 0x3c02007e
  .word 0x9042095e
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
  .word 0x46011041
  .word 0xe7a10170
  .word 0x30828000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c02c300
  .word 0xafa20170
  .word 0x30822000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c024300
  .word 0xafa20170
  .word 0xc7a10178
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
  .word 0xc7a10170
  .word 0x46030834
  .word 0x45010004
  .word 0x00000000
  .word 0x46020836
  .word 0x45010051
  .word 0x00000000
  .word 0x3c023f80
  .word 0xafa20078
  .word 0xafa20064
  .word 0xafa20050
  .word 0xafa00060
  .word 0xafa00058
  .word 0xafa00054
  .word 0xafa00074
  .word 0xafa00070
  .word 0xafa00068
  .word 0xafa00088
  .word 0xafa00084
  .word 0xafa00080
  .word 0x8fa3005c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xafa2005c
  .word 0x27a40050
  .word 0x27a50160
  .word 0x46000306
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40180
  .word 0x27a50170
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00180
  .word 0x46000007
  .word 0xe7a00180
  .word 0xc7a00184
  .word 0x46000007
  .word 0xe7a00184
  .word 0xc7a00188
  .word 0x46000007
  .word 0xe7a00188
  .word 0x27a40180
  .word 0x0080282d
  .word 0x27a60050
  .word 0x0c131af8
  .word 0x00000000
  .word 0xc7a10170
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000006
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000802
  .word 0xe7a00170
  .word 0xc7a10178
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000006
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000802
  .word 0xe7a00178
  .word 0xc7a10170
  .word 0xc7a00178
  .word 0x46000840
  .word 0xc7808428
  .word 0x46010042
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x8e240014
  .word 0x27a50180
  .word 0x0c0693b4
  .word 0x00000000
  .word 0x3c02007e
  .word 0x90420960
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
  .word 0x3c024300
  .word 0x44820000
  .word 0x00000000
  .word 0x46000841
  .word 0xe7a10170
  .word 0x3c02c240
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45010007
  .word 0x00000000
  .word 0x3c024240
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010007
  .word 0x00000000
  .word 0xc780842c
  .word 0x46010302
  .word 0x8e240014
  .word 0x27a50160
  .word 0x0c0693d0
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443094c
  .word 0x30620006
  .word 0x10400017
  .word 0x00000000
  .word 0x27a40120
  .word 0x8e250014
  .word 0x0c06937c
  .word 0x00000000
  .word 0x27a50150
  .word 0xc7a20120
  .word 0xc7a10124
  .word 0xc7a00128
  .word 0xe7a20150
  .word 0xe7a10154
  .word 0xe7a00158
  .word 0xc7a10154
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a00154
  .word 0x8e240014
  .word 0x0c069398
  .word 0x00000000
  .word 0x1000007b
  .word 0x00000000
  .word 0x30620009
  .word 0x10400017
  .word 0x00000000
  .word 0x27a40110
  .word 0x8e250014
  .word 0x0c06937c
  .word 0x00000000
  .word 0x27a50140
  .word 0xc7a20110
  .word 0xc7a10114
  .word 0xc7a00118
  .word 0xe7a20140
  .word 0xe7a10144
  .word 0xe7a00148
  .word 0xc7a10144
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00144
  .word 0x8e240014
  .word 0x0c069398
  .word 0x00000000
  .word 0x10000062
  .word 0x00000000
  .word 0x30620080
  .word 0x10400006
  .word 0x00000000
  .word 0x8e240014
  .word 0x0c069400
  .word 0x00000000
  .word 0x1000005a
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420060
  .word 0x10400055
  .word 0x00000000
  .word 0x96240010
  .word 0x0c078a78
  .word 0x00000000
  .word 0x0040802d
  .word 0x8e240014
  .word 0x0c069394
  .word 0x00000000
  .word 0x26060010
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
  .word 0x26040010
  .word 0x0c0696cc
  .word 0x00000000
  .word 0xe7a00130
  .word 0x26040010
  .word 0x0c0696a8
  .word 0x00000000
  .word 0xe7a00134
  .word 0x26040010
  .word 0x0c0696f0
  .word 0x00000000
  .word 0xe7a00138
  .word 0x96040050
  .word 0x26050040
  .word 0x27a60130
  .word 0x0c0ede2c
  .word 0x00000000
  .word 0x8e240004
  .word 0x24050001
  .word 0x0c068efc
  .word 0x00000000
  .word 0x24020003
  .word 0xae220000
  .word 0x1000002a
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x10400025
  .word 0x00000000
  .word 0x8e240008
  .word 0x0c069144
  .word 0x00000000
  .word 0x24050001
  .word 0x1045000c
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x24020003
  .word 0xae220000
  .word 0x8e240004
  .word 0x0c068efc
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0xae200000
  .word 0x96240010
  .word 0x0c078a78
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c078a9c
  .word 0x00000000
  .word 0x8e240004
  .word 0x0c065408
  .word 0x00000000
  .word 0x8e240008
  .word 0x0c065408
  .word 0x00000000
  .word 0x10000004
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
  .word 0x27bd0190
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001E6A40
void func_001e6a40(RuntimeTask* task, u32 request)
{
    ((void (*)(void*, u32))DAT_0096017c[0])(task->workData, request);
}

// FUN_001E6A70. Create the auxiliary field controller task.
void* func_001e6a70(void* parent)
{
    void* work;

    work = FIELD_RUNTIME_ALLOCATOR(1, 0x18, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    return kwlnTaskCreateWithAutoPriority(
        parent, 0x106f, D_006843F0,
        (void*)func_001e60b0, (void*)func_001e6a40, work);
}

// FUN_001E6AF0. Build, rotate, and translate a four-vertex field quad.
void func_001e6af0(RuntimeVec3* vertices, const RuntimeVec3* translation,
                   f32 width, f32 depth, f32 angle)
{
    RuntimeMatrix* matrix;
    RuntimeVec3 axis;
    s32 i;

    matrix = func_004c38c0();
    axis = D_00684400;
    __asm__ volatile (
        "neg.s $f0, %1\n\t"
        "lui $v1, 0x4000\n\t"
        "mtc1 $v1, $f3\n\t"
        "nop\n\t"
        "div.s $f2, $f0, $f3\n\t"
        "swc1 $f2, 0x00(%0)\n\t"
        "sw $zero, 0x04(%0)\n\t"
        "neg.s $f0, %2\n\t"
        "div.s $f0, $f0, $f3\n\t"
        "swc1 $f0, 0x08(%0)\n\t"
        "div.s $f1, %1, $f3\n\t"
        "swc1 $f1, 0x0c(%0)\n\t"
        "sw $zero, 0x10(%0)\n\t"
        "swc1 $f0, 0x14(%0)\n\t"
        "swc1 $f2, 0x18(%0)\n\t"
        "sw $zero, 0x1c(%0)\n\t"
        "div.s $f0, %2, $f3\n\t"
        "swc1 $f0, 0x20(%0)\n\t"
        "swc1 $f1, 0x24(%0)\n\t"
        "sw $zero, 0x28(%0)\n\t"
        "swc1 $f0, 0x2c(%0)"
        :
        : "r"(vertices), "f"(width), "f"(depth)
        : "$3", "$f0", "$f1", "$f2", "$f3", "memory");

    matrix->values[10] = 1.0f;
    matrix->values[5] = 1.0f;
    matrix->values[0] = 1.0f;
    matrix->values[4] = 0.0f;
    matrix->values[2] = 0.0f;
    matrix->values[1] = 0.0f;
    matrix->values[9] = 0.0f;
    matrix->values[8] = 0.0f;
    matrix->values[6] = 0.0f;
    matrix->values[14] = 0.0f;
    matrix->values[13] = 0.0f;
    matrix->values[12] = 0.0f;
    *(u32*)&matrix->values[3] |= 0x20003;

    func_004c31b0(matrix, &axis, angle, 2);
    func_004c6c20(vertices, vertices, 4, matrix);
    func_004c3880(matrix);
    for (i = 0; i < 4; i++)
    {
        vertices[i].x += translation->x;
        vertices[i].y += translation->y;
        vertices[i].z += translation->z;
    }
}

// FUN_001E6CB0. Request the field-specific resource archive.
HCdvd* func_001e6cb0(u16 majorId, u16 minorId)
{
    char path[128];
    HCdvd* result;

    if (K_Fldrc_GetFldPacCdvd() == NULL)
    {
        sprintf(path, D_00684410, majorId, minorId);
        if (H_Cdvd_FileExists(path) == 0)
        {
            result = NULL;
        }
        else
        {
            result = H_Cdvd_Request(path, HCDVD_FILENORMAL);
        }
    }
    else
    {
        result = (HCdvd*)1;
    }
    return result;
}

// FUN_001E6D50. Load a field runtime archive from disc or the cache.
u32 func_001e6d50(HCdvd* request, void** outFile, u16 majorId,
                  u16 minorId)
{
    char path[76];
    void* cached;
    void* allocated;
    volatile u32 size;
    u32 callSize;

    if (request == NULL)
    {
        return 1;
    }
    if (func_001b0910() == 0)
    {
        if (func_001016b0(request) != NULL)
        {
            callSize = request->fileSize;
            *outFile = FIELD_RUNTIME_ALLOCATOR(1, callSize, 0x40000);
            callSize = request->fileSize;
            FUN_00521250(*outFile, request->fileMemory, callSize);
            func_00100ec0(request);
            return 1;
        }
    }
    else
    {
        FUN_00523ac8(path, D_00684430, majorId, minorId);
        cached = func_001021c0(path, (u32*)&size);
        if (cached != NULL)
        {
            callSize = size;
            allocated = FIELD_RUNTIME_ALLOCATOR(1, callSize, 0x40000);
            *outFile = allocated;
            callSize = size;
            FUN_00521250(allocated, cached, callSize);
        }
        return 1;
    }
    return 0;
}

// FUN_001E6EA0
#ifndef PC_BUILD
asm void func_001e6ea0(u8* data)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x124000c6
  .word 0x00000000
  .word 0x8e440004
  .word 0x3c030001
  .word 0x14830004
  .word 0x00000000
  .word 0x26510028
  .word 0x1000000e
  .word 0x00000000
  .word 0x34620001
  .word 0x14820004
  .word 0x00000000
  .word 0x26510030
  .word 0x10000008
  .word 0x00000000
  .word 0x34620002
  .word 0x14820004
  .word 0x00000000
  .word 0x26510038
  .word 0x10000002
  .word 0x00000000
  .word 0x26510048
  .word 0x0000802d
  .word 0x10000011
  .word 0x00000000
  .word 0x0c068094
  .word 0x00000000
  .word 0x1440000b
  .word 0x00000000
  .word 0x96220000
  .word 0x304403ff
  .word 0x26250008
  .word 0xc62c0014
  .word 0xc62d0018
  .word 0xc62e001c
  .word 0x9a260004
  .word 0x8a260007
  .word 0x0c0eda1c
  .word 0x00000000
  .word 0x26100001
  .word 0x26310020
  .word 0x8e420008
  .word 0x0202102b
  .word 0x1440ffed
  .word 0x00000000
  .word 0x0220802d
  .word 0x0000982d
  .word 0x10000009
  .word 0x00000000
  .word 0x96020000
  .word 0x304403ff
  .word 0x26050004
  .word 0xc60c0010
  .word 0x0c0edab4
  .word 0x00000000
  .word 0x26730001
  .word 0x26100014
  .word 0x8e420010
  .word 0x0262102b
  .word 0x1440fff5
  .word 0x00000000
  .word 0x0c068094
  .word 0x00000000
  .word 0x1440007a
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000009
  .word 0x00000000
  .word 0x96020000
  .word 0x304403ff
  .word 0x26050004
  .word 0xc60c0010
  .word 0x0c0edae4
  .word 0x00000000
  .word 0x26730001
  .word 0x26100014
  .word 0x8e430018
  .word 0x0263182b
  .word 0x1460fff5
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000009
  .word 0x00000000
  .word 0x96020000
  .word 0x304403ff
  .word 0x26050004
  .word 0xc60c0010
  .word 0x0c0edb14
  .word 0x00000000
  .word 0x26730001
  .word 0x26100014
  .word 0x8e430020
  .word 0x0263182b
  .word 0x1460fff5
  .word 0x00000000
  .word 0x8e430004
  .word 0x3c010001
  .word 0x34210001
  .word 0x0061082b
  .word 0x14200010
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000009
  .word 0x00000000
  .word 0x96020000
  .word 0x304403ff
  .word 0x26050004
  .word 0xc60c0010
  .word 0x0c0edb44
  .word 0x00000000
  .word 0x26730001
  .word 0x26100014
  .word 0x8e430028
  .word 0x0263182b
  .word 0x1460fff5
  .word 0x00000000
  .word 0x8e430004
  .word 0x3c010001
  .word 0x34210002
  .word 0x0061082b
  .word 0x1420001d
  .word 0x00000000
  .word 0x0200882d
  .word 0x0000802d
  .word 0x10000015
  .word 0x00000000
  .word 0x96220000
  .word 0x304403ff
  .word 0x26250008
  .word 0xc62c0014
  .word 0xc62d0018
  .word 0xc62e001c
  .word 0x9a260004
  .word 0x8a260007
  .word 0x0c0eda68
  .word 0x00000000
  .word 0x96220000
  .word 0x304203ff
  .word 0x34425400
  .word 0x3044ffff
  .word 0x0c0ed744
  .word 0x00000000
  .word 0x96230002
  .word 0xac43014c
  .word 0x26100001
  .word 0x26310020
  .word 0x8e430030
  .word 0x0203182b
  .word 0x1460ffe9
  .word 0x00000000
  .word 0x8e430004
  .word 0x3c010001
  .word 0x34210003
  .word 0x0061082b
  .word 0x1420001f
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000009
  .word 0x00000000
  .word 0x96220000
  .word 0x304403ff
  .word 0x26250004
  .word 0xc62c0010
  .word 0x0c0edb74
  .word 0x00000000
  .word 0x26100001
  .word 0x26310014
  .word 0x8e430038
  .word 0x0203182b
  .word 0x1460fff5
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000009
  .word 0x00000000
  .word 0x96220000
  .word 0x304403ff
  .word 0x26250004
  .word 0xc62c0010
  .word 0x0c0edba4
  .word 0x00000000
  .word 0x26100001
  .word 0x26310014
  .word 0x8e430040
  .word 0x0203182b
  .word 0x1460fff5
  .word 0x00000000
  .word 0x8e430004
  .word 0x3c010001
  .word 0x34210003
  .word 0x0061082b
  .word 0x10200008
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x24060184
  .word 0x3c070068
  .word 0x24e74450
  .word 0x0c068550
  .word 0x00000000
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
#endif /* PC_BUILD: asm function omitted */

// FUN_001E7200. Request the field event archive.
void* func_001e7200(u16 majorId)
{
    char path[128];
    void* result;

    if (K_Fldrc_GetFldPacCdvd() == NULL)
    {
        sprintf(path, D_00684470, majorId);
        if (H_Cdvd_FileExists(path) == 0)
        {
            result = NULL;
        }
        else
        {
            result = H_Cdvd_Request(path, HCDVD_FILENORMAL);
        }
    }
    else
    {
        result = (void*)1;
    }
    return result;
}

// FUN_001E7290. Load the current field archive into the global field buffer.
s32 func_001e7290(FieldArchiveRequest* request, u16 majorId)
{
    char path[76];
    volatile u32 size;
    u32 requestSize;
    void* source;
    void* buffer;
    void* field;
    s32 result;

    if (request == NULL)
    {
        result = 1;
        goto done;
    }

    if (func_001b0910() == 0)
    {
        if (func_001016b0(request) == NULL)
        {
            goto failure;
        }

        requestSize = request->size;
        buffer = FIELD_RUNTIME_ALLOCATOR(1, requestSize, 0x40000);
        *(void**)(func_001b9120() + 0x1048) = buffer;
        *(u32*)(func_001b9120() + 0x104c) = request->size;
        field = func_001b9120();
        __asm__ volatile (
            ".set noreorder\n\t"
            "lw $a2, 0x118(%0)\n\t"
            "lw $a0, 0x1048(%1)\n\t"
            "lw $a1, 0x110(%0)\n\t"
            "jal FUN_00521250\n\t"
            "nop\n\t"
            ".set reorder"
            :
            : "r"(request), "r"(field)
            : "$4", "$5", "$6", "$31", "memory");
        func_00100ec0(request);
        result = 1;
        goto done;
    }

    FUN_00523ac8(path, D_00684490, majorId);
    source = func_001021c0(path, (u32*)&size);
    if (source != NULL)
    {
        buffer = FIELD_RUNTIME_ALLOCATOR(1, size, 0x40000);
        *(void**)(func_001b9120() + 0x1048) = buffer;
        *(u32*)(func_001b9120() + 0x104c) = size;
        FUN_00521250(*(void**)(func_001b9120() + 0x1048), source, size);
    }
    result = 1;
    goto done;

failure:
    result = 0;
done:
    return result;
}

// FUN_001E7410. Release the field-global loaded buffer.
void func_001e7410(void)
{
    u8* field;

    field = func_001b9120();
    if (*(void**)(field + 0x1048) != NULL)
    {
        field = func_001b9120();
        ((void (*)(void*))DAT_0096017c[0])(*(void**)(field + 0x1048));
        field = func_001b9120();
        *(void**)(field + 0x1048) = NULL;
    }
}

// FUN_001E7470
HCdvd* func_001e7470(u16 majorId, u16 minorId)
{
    char path[128];

    sprintf(path, D_006844B0, majorId, minorId);
    if (H_Cdvd_FileExists(path) == 0)
    {
        return NULL;
    }
    return H_Cdvd_Request(path, HCDVD_FILENORMAL);
}

// FUN_001E74E0
s32 func_001e74e0(void* request)
{
    if (request == NULL)
    {
        return 1;
    }
    return H_Cdvd_IsFileLoaded(request) != 0;
}

// FUN_001E7520. Release a loaded field resource.
void func_001e7520(void* request)
{
    func_00100ec0(request);
}

// FUN_001E7540. Load a formatted field resource and register it.
void* func_001e7540(void* file, const char* name, void* callback)
{
    char path[64];
    void* result;

    FUN_00523ac8(path, D_006844D0, D_007CE2C4, name, callback);
    D_007CDF38 = 0;
    result = func_004bad50(file, path);
    FUN_005225a8(&D_007CC348, result);
    return file;
}

// FUN_001E75B0. Restore the main camera from a saved runtime snapshot.
void* func_001e75b0(void* cameraBackup)
{
    typedef struct RuntimeBlock8
    {
        u32 words[2];
    } RuntimeBlock8;
    typedef struct RuntimeBlock18
    {
        u32 words[6];
    } RuntimeBlock18;
    typedef struct RuntimeBlock40
    {
        u32 words[16];
    } RuntimeBlock40;
    typedef struct RuntimeBlock60
    {
        u32 words[24];
    } RuntimeBlock60;
    typedef struct RuntimeBlock78
    {
        u32 words[30];
    } RuntimeBlock78;
    typedef struct RuntimeCameraState
    {
        u8 reserved0[0x20];
        RuntimeBlock40 block20;
        u8 reserved60[8];
        RuntimeBlock8 block68;
        u8 reserved70[8];
        RuntimeBlock8 block78;
        u8 reserved80[0x14];
        RuntimeBlock78 block94;
        RuntimeBlock18 block10c;
        RuntimeBlock60 block124;
    } RuntimeCameraState;

    RuntimeCameraState* source;
    RuntimeCameraState* camera;

    source = cameraBackup;
    FUN_005225a8(&D_007CC350);
    camera = kwlnGetMainCamera();
    camera->block20 = source->block20;
    camera = kwlnGetMainCamera();
    camera->block68 = source->block68;
    camera = kwlnGetMainCamera();
    camera->block78 = source->block78;
    camera = kwlnGetMainCamera();
    camera->block94 = source->block94;
    camera = kwlnGetMainCamera();
    camera->block10c = source->block10c;
    camera = kwlnGetMainCamera();
    camera->block124 = source->block124;
    func_00195770(0);
    func_001949e0();
    func_00195770(1);
    return cameraBackup;
}

// FUN_001E7720. Reconfigure the main camera while preserving runtime state.
void func_001e7720(void)
{
    typedef struct RuntimeBlock8
    {
        u32 words[2];
    } RuntimeBlock8;
    typedef struct RuntimeBlock18
    {
        u32 words[6];
    } RuntimeBlock18;
    typedef struct RuntimeBlock40
    {
        u32 words[16];
    } RuntimeBlock40;
    typedef struct RuntimeBlock60
    {
        u32 words[24];
    } RuntimeBlock60;
    typedef struct RuntimeBlock78
    {
        u32 words[30];
    } RuntimeBlock78;
    typedef struct RuntimeCameraState
    {
        u8 reserved0[0x20];
        RuntimeBlock40 block20;
        u8 reserved60[8];
        RuntimeBlock8 block68;
        u8 reserved70[8];
        RuntimeBlock8 block78;
        u8 reserved80[0x14];
        RuntimeBlock78 block94;
        RuntimeBlock18 block10c;
        RuntimeBlock60 block124;
        u8 reserved184[0x0c];
    } RuntimeCameraState;
    typedef unsigned int RuntimeU128 __attribute__((mode(TI)));
    typedef union RuntimeCameraSnapshot
    {
        RuntimeCameraState state;
        RuntimeU128 aligned[25];
    } RuntimeCameraSnapshot;

    RuntimeCameraSnapshot snapshot;
    RuntimeCameraState* camera;

    camera = kwlnGetMainCamera();
    snapshot = *(RuntimeCameraSnapshot*)camera;
    func_004bf540(
        kwlnGetMainCamera(), 0x500, 0x380, 0x280, 0x1c0,
        func_001e75b0, func_001e7540, 0);
    camera = kwlnGetMainCamera();
    camera->block20 = snapshot.state.block20;
    camera = kwlnGetMainCamera();
    camera->block68 = snapshot.state.block68;
    camera = kwlnGetMainCamera();
    camera->block78 = snapshot.state.block78;
    camera = kwlnGetMainCamera();
    camera->block94 = snapshot.state.block94;
    camera = kwlnGetMainCamera();
    camera->block10c = snapshot.state.block10c;
    camera = kwlnGetMainCamera();
    camera->block124 = snapshot.state.block124;
    D_007CE2C4++;
}

// FUN_001E78C0. Build the field quad geometry and attach its render manager.
void* func_001e78c0(s32 count, void* data)
{
    typedef struct RuntimeGeometry
    {
        u8 reserved0[0x2c];
        void* triangles;
        u8 reserved30[0x2c];
        void* material;
    } RuntimeGeometry;
    typedef struct RuntimeVec4
    {
        f32 x;
        f32 y;
        f32 z;
        f32 w;
    } RuntimeVec4;

    RuntimeGeometry* geometry;
    void* triangle;
    u16* indices;
    void* material;
    void* manager;
    RuntimeVec4 bounds;
    s32 base;
    s32 i;
    s32 j;

    geometry = func_00493710(count * 4, count * 2, data);
    triangle = geometry->triangles;
    base = 0;
    for (i = 0; i < count; i++)
    {
        for (j = 0; j < 6; j += 3)
        {
            indices = &D_006844E8[j];
            func_00493210(
                geometry,
                triangle,
                base + indices[0],
                base + indices[1],
                base + indices[2]);
            triangle = (u8*)triangle + 8;
        }
        base += 4;
    }

    material = geometry->material;
    bounds.x = 0.0f;
    bounds.y = 0.0f;
    bounds.z =
        (*(f32*)((u8*)kwlnGetMainCamera() + 0x80) +
         *(f32*)((u8*)kwlnGetMainCamera() + 0x84)) /
        2.0f;
    bounds.w = 0.0f;
    *(RuntimeVec4*)((u8*)material + 4) = bounds;

    manager = func_00491880();
    func_004919b0(manager, geometry, 0);
    func_00493b60(geometry);
    func_00492d10(manager, *(void**)((u8*)kwlnGetMainCamera() + 4));
    return manager;
}

// FUN_001E7A60. Detach and destroy a field render manager.
void func_001e7a60(void* renderData)
{
    func_00492d10(renderData, NULL);
    func_00491a80(renderData);
}

// FUN_001E7AA0. Submit both halves of a field render sample.
void func_001e7aa0(RuntimeWork* work, s32 index, void* data)
{
    u8* entry;
    u8* secondEntry;

    entry = *(u8**)((u8*)(uintptr_t)work->currentIndex + 0x2c) + index * 0x10;
    secondEntry = entry + 8;
    /* load-bearing: removing this file's 14 zero-width barriers loses 6 MATCHes (001E3940 nd0->32, 001E7AA0 ->9, 001E9920 ->5, 001ECD90 ->21, 001EDF10 ->407, 001EEB90 ->22) - measured W172 */
    __asm__ volatile ("" : "+r"(secondEntry) : : "memory");
    func_00493230((void*)(uintptr_t)work->currentIndex, entry);
    func_00493230((void*)(uintptr_t)work->currentIndex, secondEntry, data);
}

// FUN_001E7B10. Project a four-vertex field quad into screen coordinates.
void func_001e7b10(RuntimeVec3* vertices, f32 scale)
{
    typedef struct RuntimeDimensions
    {
        s32 width;
        s32 height;
        s32 reserved[6];
    } RuntimeDimensions;

    f32* cameraScale;
    void* context;
    RuntimeDimensions dimensions;
    RuntimeVec3* vertex;
    f32 scaledWidth;
    f32 scaledHeight;
    f32 half;
    u32 i;
    u32 halfBits;

    cameraScale = (f32*)((u8*)kwlnGetMainCamera() + 0x68);
    kwlnGetMainCamera();
    scaledWidth = cameraScale[0] * scale * 2.0f;
    scaledHeight = cameraScale[1] * scale * 2.0f;
    context = func_004ca5b0();
    func_004ca560(&dimensions, context);
    __asm__ volatile ("daddu %0, $zero, $zero\n\tlui %1, 0x3f00\n\tmtc1 %1, %2"
                      : "=r"(i), "=r"(halfBits), "=f"(half));

    while (i < 4)
    {
        vertex = &vertices[i];
        vertex->x =
            scaledWidth * (-vertex->x / (f32)dimensions.width + half);
        vertex->y =
            scaledHeight * (-vertex->y / (f32)dimensions.height + half);
        vertex->z = scale;
        i++;
    }
}

// FUN_001E7C20. Convert a depth-buffer value through the camera projection.
f32 func_001e7c20(u32 depth)
{
    f32 firstPlane;
    f32 secondPlane;
    f32 negativeMaximum;
    f32 value;
    s32 maximum;

    firstPlane = *(f32*)((u8*)kwlnGetMainCamera() + 0x80);
    secondPlane = *(f32*)((u8*)kwlnGetMainCamera() + 0x84);
    maximum = 0xffff;
    /* load-bearing: removing this file's 14 zero-width barriers loses 6 MATCHes (001E3940 nd0->32, 001E7AA0 ->9, 001E9920 ->5, 001ECD90 ->21, 001EDF10 ->407, 001EEB90 ->22) - measured W172 */
    __asm__ volatile ("" : "+r"(maximum));
    negativeMaximum = -(f32)maximum;
    value = (f32)depth;
    return (negativeMaximum * firstPlane * secondPlane) /
           (negativeMaximum * secondPlane -
            (value - 65535.0f) * (secondPlane - firstPlane));
}

// FUN_001E7CE0. Allocate and initialize sampled field path storage.
RuntimePathWork* func_001e7ce0(u32 columns, u32 rows)
{
    RuntimePathWork* work;
    u8* cursor;
    u32 firstSize;
    u32 secondSize;
    u32 size;

    firstSize = columns * 0x18;
    secondSize = (columns + 1) * 0x0c;
    size = (rows + 1) * 0x24;
    size += firstSize;
    size += secondSize;
    work = FIELD_RUNTIME_PRIMARY_ALLOCATOR(size, 0x40000);

    cursor = (u8*)work + sizeof(RuntimePathWork);
    work->firstVectors = (RuntimeVec3*)cursor;
    cursor += firstSize;
    work->secondVectors = (RuntimeVec3*)cursor;
    cursor += secondSize;
    work->thirdVectors = (RuntimeVec3*)cursor;

    work->matrix = func_004c38c0();
    work->flags = 0;
    work->reserved = 0;
    work->columnCount = columns;
    work->rowCount = rows;
    work->color[0] = 0xff;
    work->color[1] = 0xff;
    work->color[2] = 0xff;
    work->color[3] = 0xff;
    work->flags |= 1;
    work->flags |= 2;
    return work;
}

// FUN_001E7DE0
void func_001e7de0(RuntimePathWork* work)
{
    func_004c3880(work->matrix);
    ((void (*)(void*))DAT_0096017c[0])(work);
}

// FUN_001E7E30. Measure both path-edge distances for one section.
f32 func_001e7e30(const RuntimeDistanceWork* work, s32 index)
{
    s32 firstIndex;
    s32 nextIndex;
    RuntimeVec3 delta;
    f32 total;
    f32 result;
    f32 length;

    firstIndex = func_001e8330((const RuntimeWork*)work, index);
    nextIndex = func_001e8330((const RuntimeWork*)work, index + 1);
    total = 0.0f;

    delta.x = work->firstVectors[nextIndex].x -
              work->firstVectors[firstIndex].x;
    delta.y = work->firstVectors[nextIndex].y -
              work->firstVectors[firstIndex].y;
    delta.z = work->firstVectors[nextIndex].z -
              work->firstVectors[firstIndex].z;
    total += func_004c6ac0(&delta);

    delta.x = work->secondVectors[nextIndex].x -
              work->secondVectors[firstIndex].x;
    delta.y = work->secondVectors[nextIndex].y -
              work->secondVectors[firstIndex].y;
    delta.z = work->secondVectors[nextIndex].z -
              work->secondVectors[firstIndex].z;
    length = func_004c6ac0(&delta);
    __asm__ volatile (
        "add.s $f2, %2, %3\n\t"
        "mtc1 $zero, $f1\n\t"
        "lw $v0, 0(%1)\n\t"
        "lw $v0, 0($v0)\n\t"
        "lwc1 %0, 0x2c($v0)\n\t"
        "adda.s $f1, $f1\n\t"
        "madd.s %0, $f2, %0"
        : "=f"(result)
        : "r"(work), "f"(total), "f"(length)
        : "$2", "$f1", "$f2");
    return result;
}

// FUN_001E7F90. Resolve a normalized path distance to a segment and fraction.
void func_001e7f90(const RuntimeDistanceWork* data, f32 distance, u32* section,
                   f32* fraction)
{
    RuntimeVec3 leadingDelta;
    RuntimeVec3 trailingDelta;
    u8* vectorBase;
    RuntimeVec3* nextSample;
    RuntimeVec3* firstSample;
    s32 firstOffset;
    s32 nextOffset;
    s32 leadingIndex;
    s32 trailingIndex;
    s32 firstIndex;
    s32 nextIndex;
    s32 totalIndex;
    s32 currentSection;
    f32 previous;
    f32 cumulative;
    f32 total;
    f32 scaledLength;
    f32 sectionLength;
    f32 nextX;
    f32 targetDistance = distance;
    total = 0.0f;
    for (totalIndex = 0; totalIndex < data->count - 1; totalIndex++)
    {
        total += func_001e7e30(data, totalIndex);
    }

    if (total <= 0.0f)
    {
        *section = 0;
        *fraction = 0.0f;
        return;
    }

    currentSection = 0;
    while (currentSection < data->count - 1)
    {

        cumulative = 0.0f;
        for (leadingIndex = 0; leadingIndex < currentSection + 1;
             leadingIndex++)
        {
            firstIndex = func_001e8330((const RuntimeWork*)data, leadingIndex);
            nextIndex =
                func_001e8330((const RuntimeWork*)data, leadingIndex + 1);
            sectionLength = 0.0f;
            vectorBase = (u8*)data->firstVectors;
            firstOffset = firstIndex * sizeof(RuntimeVec3);
            nextOffset = nextIndex * sizeof(RuntimeVec3);
            nextSample = (RuntimeVec3*)(vectorBase + nextOffset);
            nextX = nextSample->x;
            firstSample = (RuntimeVec3*)(vectorBase + firstOffset);
            leadingDelta.x = nextX - firstSample->x;
            leadingDelta.y = nextSample->y - firstSample->y;
            leadingDelta.z = nextSample->z - firstSample->z;
            sectionLength += func_004c6ac0(&leadingDelta);

            vectorBase = (u8*)data->secondVectors;
            nextSample = (RuntimeVec3*)(vectorBase + nextOffset);
            nextX = nextSample->x;
            firstSample = (RuntimeVec3*)(vectorBase + firstOffset);
            leadingDelta.x = nextX - firstSample->x;
            leadingDelta.y = nextSample->y - firstSample->y;
            leadingDelta.z = nextSample->z - firstSample->z;
            sectionLength += func_004c6ac0(&leadingDelta);
            scaledLength = 0.0f;
            scaledLength +=
                sectionLength *
                *(f32*)((u8*)*(void**)data->config + 0x2c);
            cumulative += scaledLength / total;
        }
        if (targetDistance < cumulative)
        {
            break;
        }
        currentSection++;
    }

    if (currentSection == 0)
    {
        previous = 0.0f;
    }
    else
    {
        previous = 0.0f;
        for (trailingIndex = 0; trailingIndex < currentSection;
             trailingIndex++)
        {
            firstIndex = func_001e8330((const RuntimeWork*)data, trailingIndex);
            nextIndex =
                func_001e8330((const RuntimeWork*)data, trailingIndex + 1);
            sectionLength = 0.0f;
            vectorBase = (u8*)data->firstVectors;
            firstOffset = firstIndex * sizeof(RuntimeVec3);
            nextOffset = nextIndex * sizeof(RuntimeVec3);
            nextSample = (RuntimeVec3*)(vectorBase + nextOffset);
            nextX = nextSample->x;
            firstSample = (RuntimeVec3*)(vectorBase + firstOffset);
            trailingDelta.x = nextX - firstSample->x;
            trailingDelta.y = nextSample->y - firstSample->y;
            trailingDelta.z = nextSample->z - firstSample->z;
            sectionLength += func_004c6ac0(&trailingDelta);
            vectorBase = (u8*)data->secondVectors;

            nextSample = (RuntimeVec3*)(vectorBase + nextOffset);
            nextX = nextSample->x;
            firstSample = (RuntimeVec3*)(vectorBase + firstOffset);
            trailingDelta.x = nextX - firstSample->x;
            trailingDelta.y = nextSample->y - firstSample->y;
            trailingDelta.z = nextSample->z - firstSample->z;
            sectionLength += func_004c6ac0(&trailingDelta);
            scaledLength = 0.0f;
            scaledLength +=
                sectionLength *
                *(f32*)((u8*)*(void**)data->config + 0x2c);
            previous += scaledLength / total;
        }
    }

    *section = currentSection;
    sectionLength = cumulative - previous;
    if (sectionLength <= 0.0f)
    {
        func_0019d3f0(D_006844F8, 0x81);
    }
    *fraction = (targetDistance - previous) / sectionLength;
}

// FUN_001E8330. Translate a logical sample index into the ring buffer.
s32 func_001e8330(const RuntimeWork* work, s32 index)
{
    s32 result;

    result = (s32)work->state - 1 - index;
    if (result < 0)
    {
        result += (s32)work->completedFlags;
    }
    return result;
}


// FUN_001E8360. Build a path surface direction for one segment side.
void func_001e8360(RuntimeWork* work, s32 section, s32 side, RuntimeVec3* output)
{
    typedef struct RuntimeSurfaceWork
    {
        void* config;
        u32 state;
        s32 count;
        s32 cursor;
        RuntimeVec3* vectors[2];
    } RuntimeSurfaceWork;

    RuntimeSurfaceWork* data;
    RuntimeVec3* points[2][2];
    RuntimeVec3 sideDelta;
    RuntimeVec3 forward;
    RuntimeVec3 normal;
    RuntimeVec3 axis;
    RuntimeVec3 frameNormal;
    RuntimeVec3* point;
    RuntimeVec3** pointRow;
    s32 firstIndex;
    u32 selected;
    u32 other;
    f32 projection;

    data = (RuntimeSurfaceWork*)work;
    if (data->count < 2)
    {
        func_0019d3f0(D_006844F8, 0xad);
    }

    if (section == data->count - 1)
    {
        s32 secondIndex;
        secondIndex = data->cursor - 1 - section;
        if (secondIndex < 0)
        {
            secondIndex += data->count;
        }
        firstIndex = data->cursor - section;
        if (firstIndex < 0)
        {
            firstIndex += data->count;
        }

        func_001e88f0(work, section, &frameNormal);
        points[0][0] = &data->vectors[(other = side & 1)][secondIndex];
        selected = (side + 1) & 1;
        points[0][1] = &data->vectors[selected][secondIndex];
        points[1][0] = &data->vectors[other][firstIndex];
        points[1][1] = &data->vectors[selected][firstIndex];

        pointRow = points[other];
        point = pointRow[selected];
        sideDelta.x = point->x - points[0][0]->x;
        sideDelta.y = point->y - points[0][0]->y;
        sideDelta.z = point->z - points[0][0]->z;
        func_004c69f0(&sideDelta, &sideDelta);

        pointRow = points[selected];
        point = pointRow[other];
        projection = point->x;
        forward.x = projection - points[0][0]->x;
        forward.y = point->y - points[0][0]->y;
        forward.z = point->z - points[0][0]->z;
        func_004c69f0(&forward, &forward);

        normal.x = sideDelta.y * forward.z - sideDelta.z * forward.y;
        normal.y = sideDelta.z * forward.x - sideDelta.x * forward.z;
        normal.z = sideDelta.x * forward.y - sideDelta.y * forward.x;
        func_004c69f0(&normal, &normal);

        switch (side)
        {
        case 0:
            axis.x = normal.y * sideDelta.z - normal.z * sideDelta.y;
            axis.y = normal.z * sideDelta.x - normal.x * sideDelta.z;
            axis.z = normal.x * sideDelta.y - normal.y * sideDelta.x;
            break;
        case 1:
            axis.x = forward.y * normal.z - forward.z * normal.y;
            axis.y = forward.z * normal.x - forward.x * normal.z;
            axis.z = forward.x * normal.y - forward.y * normal.x;
            break;
        }

        projection =
            axis.x * frameNormal.x + axis.y * frameNormal.y + axis.z * frameNormal.z;
        axis.x *= projection;
        axis.y *= projection;
        axis.z *= projection;
        func_004c69f0(output, &axis);
    }
    else
    {
        s32 secondIndex;
        secondIndex = data->cursor - 1 - section;
        if (secondIndex < 0)
        {
            secondIndex += data->count;
        }
        firstIndex = -2 - section;
        firstIndex += data->cursor;
        if (firstIndex < 0)
        {
            firstIndex += data->count;
        }

        func_001e88f0(work, section, &frameNormal);
        points[0][0] = &data->vectors[(other = side & 1)][secondIndex];
        selected = (side + 1) & 1;
        points[0][1] = &data->vectors[selected][secondIndex];
        points[1][0] = &data->vectors[other][firstIndex];
        points[1][1] = &data->vectors[selected][firstIndex];

        pointRow = points[other];
        point = pointRow[selected];
        sideDelta.x = point->x - points[0][0]->x;
        sideDelta.y = point->y - points[0][0]->y;
        sideDelta.z = point->z - points[0][0]->z;
        func_004c69f0(&sideDelta, &sideDelta);

        pointRow = points[selected];
        point = pointRow[other];
        projection = point->x;
        forward.x = projection - points[0][0]->x;
        forward.y = point->y - points[0][0]->y;
        forward.z = point->z - points[0][0]->z;
        func_004c69f0(&forward, &forward);

        normal.x = sideDelta.y * forward.z - sideDelta.z * forward.y;
        normal.y = sideDelta.z * forward.x - sideDelta.x * forward.z;
        normal.z = sideDelta.x * forward.y - sideDelta.y * forward.x;
        func_004c69f0(&normal, &normal);

        switch (side)
        {
        case 0:
            axis.x = sideDelta.y * normal.z - sideDelta.z * normal.y;
            axis.y = sideDelta.z * normal.x - sideDelta.x * normal.z;
            axis.z = sideDelta.x * normal.y - sideDelta.y * normal.x;
            break;
        case 1:
            axis.x = normal.y * forward.z - normal.z * forward.y;
            axis.y = normal.z * forward.x - normal.x * forward.z;
            axis.z = normal.x * forward.y - normal.y * forward.x;
            break;
        }

        projection =
            axis.x * frameNormal.x + axis.y * frameNormal.y + axis.z * frameNormal.z;
        axis.x *= projection;
        axis.y *= projection;
        axis.z *= projection;
        func_004c69f0(output, &axis);
    }
}

// FUN_001E88F0. Build the path frame normal for a ring-buffer segment.
void func_001e88f0(RuntimeWork* work, s32 section, RuntimeVec3* output)
{
    typedef struct RuntimeFrameWork
    {
        void* config;
        u32 state;
        s32 count;
        s32 cursor;
        RuntimeVec3* firstVectors;
        RuntimeVec3* secondVectors;
    } RuntimeFrameWork;

    RuntimeFrameWork* data;
    RuntimeVec3* firstLeading;
    RuntimeVec3* firstTrailing;
    RuntimeVec3* secondLeading;
    RuntimeVec3* secondTrailing;
    RuntimeVec3 leadingDelta;
    RuntimeVec3 secondSide;
    RuntimeVec3 normal;
    s32 firstIndex;
    f32 leadingLength;
    f32 trailingLength;

    data = (RuntimeFrameWork*)work;
    if (data->count < 2)
    {
        func_0019d3f0(D_006844F8, 0xfa);
    }

    if (section == data->count - 1)
    {
        s32 secondIndex;
        firstIndex = data->cursor - 1 - section;
        if (firstIndex < 0)
        {
            firstIndex += data->count;
        }
        firstLeading = &data->firstVectors[firstIndex];
        firstTrailing = &data->secondVectors[firstIndex];

        secondIndex = data->cursor - section;
        if (secondIndex < 0)
        {
            secondIndex += data->count;
        }
        secondLeading = &data->firstVectors[secondIndex];
        secondTrailing = &data->secondVectors[secondIndex];

        leadingDelta.x = firstLeading->x - secondLeading->x;
        leadingDelta.y = firstLeading->y - secondLeading->y;
        leadingDelta.z = firstLeading->z - secondLeading->z;
        leadingLength = func_004c6ac0(&leadingDelta);

        leadingDelta.x = firstTrailing->x - secondTrailing->x;
        leadingDelta.y = firstTrailing->y - secondTrailing->y;
        leadingDelta.z = firstTrailing->z - secondTrailing->z;
        trailingLength = func_004c6ac0(&leadingDelta);

        leadingDelta.x = firstTrailing->x - firstLeading->x;
        leadingDelta.y = firstTrailing->y - firstLeading->y;
        leadingDelta.z = firstTrailing->z - firstLeading->z;
        func_004c69f0(&leadingDelta, &leadingDelta);

        secondSide.x = secondTrailing->x - secondLeading->x;
        secondSide.y = secondTrailing->y - secondLeading->y;
        secondSide.z = secondTrailing->z - secondLeading->z;
        func_004c69f0(&secondSide, &secondSide);

        normal.x = leadingDelta.y * secondSide.z - leadingDelta.z * secondSide.y;
        normal.y = leadingDelta.z * secondSide.x - leadingDelta.x * secondSide.z;
        normal.z = leadingDelta.x * secondSide.y - leadingDelta.y * secondSide.x;
        func_004c69f0(&normal, &normal);

        *output = normal;
        if (!(leadingLength <= trailingLength))
        {
            output->x = leadingDelta.y * normal.z - leadingDelta.z * normal.y;
            output->y = leadingDelta.z * normal.x - leadingDelta.x * normal.z;
            output->z = leadingDelta.x * normal.y - leadingDelta.y * normal.x;
        }
        else
        {
            output->x = normal.y * leadingDelta.z - normal.z * leadingDelta.y;
            output->y = normal.z * leadingDelta.x - normal.x * leadingDelta.z;
            output->z = normal.x * leadingDelta.y - normal.y * leadingDelta.x;
        }
    }
    else
    {
        s32 secondIndex;
        firstIndex = data->cursor - 1 - section;
        if (firstIndex < 0)
        {
            firstIndex += data->count;
        }
        firstLeading = &data->firstVectors[firstIndex];
        firstTrailing = &data->secondVectors[firstIndex];

        secondIndex = -2 - section;
        secondIndex += data->cursor;
        if (secondIndex < 0)
        {
            secondIndex += data->count;
        }
        secondLeading = &data->firstVectors[secondIndex];
        secondTrailing = &data->secondVectors[secondIndex];

        leadingDelta.x = firstLeading->x - secondLeading->x;
        leadingDelta.y = firstLeading->y - secondLeading->y;
        leadingDelta.z = firstLeading->z - secondLeading->z;
        leadingLength = func_004c6ac0(&leadingDelta);

        leadingDelta.x = firstTrailing->x - secondTrailing->x;
        leadingDelta.y = firstTrailing->y - secondTrailing->y;
        leadingDelta.z = firstTrailing->z - secondTrailing->z;
        trailingLength = func_004c6ac0(&leadingDelta);

        leadingDelta.x = firstTrailing->x - firstLeading->x;
        leadingDelta.y = firstTrailing->y - firstLeading->y;
        leadingDelta.z = firstTrailing->z - firstLeading->z;
        func_004c69f0(&leadingDelta, &leadingDelta);

        secondSide.x = secondTrailing->x - secondLeading->x;
        secondSide.y = secondTrailing->y - secondLeading->y;
        secondSide.z = secondTrailing->z - secondLeading->z;
        func_004c69f0(&secondSide, &secondSide);

        normal.x = secondSide.y * leadingDelta.z - secondSide.z * leadingDelta.y;
        normal.y = secondSide.z * leadingDelta.x - secondSide.x * leadingDelta.z;
        normal.z = secondSide.x * leadingDelta.y - secondSide.y * leadingDelta.x;
        func_004c69f0(&normal, &normal);

        *output = normal;
        if (!(leadingLength <= trailingLength))
        {
            output->x = leadingDelta.y * normal.z - leadingDelta.z * normal.y;
            output->y = leadingDelta.z * normal.x - leadingDelta.x * normal.z;
            output->z = leadingDelta.x * normal.y - leadingDelta.y * normal.x;
        }
        else
        {
            output->x = normal.y * leadingDelta.z - normal.z * leadingDelta.y;
            output->y = normal.z * leadingDelta.x - normal.x * leadingDelta.z;
            output->z = normal.x * leadingDelta.y - normal.y * leadingDelta.x;
        }
    }
}

// FUN_001E8E80
#pragma push
#pragma opt_lifetimes on
asm void* func_001e8e80(RuntimeWork* rawWork, void* material)
{
  .set noreorder
  .word 0x27bdff00
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
  .word 0x0080a82d
  .word 0xafa500ec
  .word 0x2406004a
  .word 0x8c820000
  .word 0x8c420004
  .word 0x8c420000
  .word 0x30420001
  .word 0x10400002
  .word 0x00000000
  .word 0x34c60004
  .word 0x0000b82d
  .word 0x0000902d
  .word 0x86a30048
  .word 0x24020002
  .word 0x1062001a
  .word 0x00000000
  .word 0x24020001
  .word 0x1062000e
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c43000c
  .word 0x2462ffff
  .word 0x00021040
  .word 0x24570001
  .word 0x00031040
  .word 0x24520001
  .word 0x10000011
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c43000c
  .word 0x00031080
  .word 0x24570004
  .word 0x00031040
  .word 0x00431021
  .word 0x24520006
  .word 0x10000008
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c43000c
  .word 0x00031080
  .word 0x24570004
  .word 0x00031040
  .word 0x00431021
  .word 0x24520006
  .word 0x0240202d
  .word 0x02e0282d
  .word 0x0c124dc4
  .word 0x00000000
  .word 0x0040a02d
  .word 0x8c53002c
  .word 0x86a30048
  .word 0x24080002
  .word 0x10680086
  .word 0x00000000
  .word 0x24020001
  .word 0x1062002e
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000d2
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000015
  .word 0x00000000
  .word 0x00118040
  .word 0x26160002
  .word 0x261e0001
  .word 0x3206ffff
  .word 0x33c7ffff
  .word 0x32c8ffff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0c124c84
  .word 0x00000000
  .word 0x33c6ffff
  .word 0x26020003
  .word 0x3047ffff
  .word 0x32c8ffff
  .word 0x0280202d
  .word 0x26650008
  .word 0x0c124c84
  .word 0x00000000
  .word 0x26730010
  .word 0x26310001
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x2442ffff
  .word 0x0222102a
  .word 0x1440ffe7
  .word 0x00000000
  .word 0x00111840
  .word 0x3066ffff
  .word 0x24620001
  .word 0x3047ffff
  .word 0x24620002
  .word 0x3048ffff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0c124c84
  .word 0x00000000
  .word 0x100000a9
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000302d
  .word 0x24070003
  .word 0x0c124c84
  .word 0x00000000
  .word 0x0280202d
  .word 0x26650008
  .word 0x24060002
  .word 0x24070004
  .word 0x24080001
  .word 0x0c124c84
  .word 0x00000000
  .word 0x26730010
  .word 0x64110002
  .word 0x0000f02d
  .word 0x1000002b
  .word 0x00000000
  .word 0x3230ffff
  .word 0x26160003
  .word 0x26020001
  .word 0x7fa200d0
  .word 0x3047ffff
  .word 0x32c8ffff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0220302d
  .word 0x0c124c84
  .word 0x00000000
  .word 0x26020002
  .word 0x7fa200c0
  .word 0x32c7ffff
  .word 0x3048ffff
  .word 0x0280202d
  .word 0x26650008
  .word 0x0220302d
  .word 0x0c124c84
  .word 0x00000000
  .word 0x7ba200d0
  .word 0x3046ffff
  .word 0x26020004
  .word 0x3047ffff
  .word 0x32c8ffff
  .word 0x0280202d
  .word 0x26650010
  .word 0x0c124c84
  .word 0x00000000
  .word 0x7ba200c0
  .word 0x3046ffff
  .word 0x32c7ffff
  .word 0x26020005
  .word 0x3048ffff
  .word 0x0280202d
  .word 0x26650018
  .word 0x0c124c84
  .word 0x00000000
  .word 0x26730020
  .word 0x26220003
  .word 0x3051ffff
  .word 0x27de0001
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x03c2102a
  .word 0x1440ffd2
  .word 0x00000000
  .word 0x3230ffff
  .word 0x26160003
  .word 0x26020001
  .word 0x3047ffff
  .word 0x32c8ffff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0220302d
  .word 0x0c124c84
  .word 0x00000000
  .word 0x32c7ffff
  .word 0x26020002
  .word 0x3048ffff
  .word 0x0280202d
  .word 0x26650008
  .word 0x0220302d
  .word 0x0c124c84
  .word 0x00000000
  .word 0x10000054
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000302d
  .word 0x24070003
  .word 0x0c124c84
  .word 0x00000000
  .word 0x0280202d
  .word 0x26650008
  .word 0x24060002
  .word 0x24070004
  .word 0x24080001
  .word 0x0c124c84
  .word 0x00000000
  .word 0x26730010
  .word 0x64110002
  .word 0x0000f02d
  .word 0x1000002b
  .word 0x00000000
  .word 0x3230ffff
  .word 0x26160003
  .word 0x26020001
  .word 0x7fa200b0
  .word 0x3047ffff
  .word 0x32c8ffff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0220302d
  .word 0x0c124c84
  .word 0x00000000
  .word 0x26020002
  .word 0x7fa200a0
  .word 0x32c7ffff
  .word 0x3048ffff
  .word 0x0280202d
  .word 0x26650008
  .word 0x0220302d
  .word 0x0c124c84
  .word 0x00000000
  .word 0x7ba200b0
  .word 0x3046ffff
  .word 0x26020004
  .word 0x3047ffff
  .word 0x32c8ffff
  .word 0x0280202d
  .word 0x26650010
  .word 0x0c124c84
  .word 0x00000000
  .word 0x7ba200a0
  .word 0x3046ffff
  .word 0x32c7ffff
  .word 0x26020005
  .word 0x3048ffff
  .word 0x0280202d
  .word 0x26650018
  .word 0x0c124c84
  .word 0x00000000
  .word 0x26730020
  .word 0x26220003
  .word 0x3051ffff
  .word 0x27de0001
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x03c2102a
  .word 0x1440ffd2
  .word 0x00000000
  .word 0x3230ffff
  .word 0x26160003
  .word 0x26020001
  .word 0x3047ffff
  .word 0x32c8ffff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0220302d
  .word 0x0c124c84
  .word 0x00000000
  .word 0x32c7ffff
  .word 0x26020002
  .word 0x3048ffff
  .word 0x0280202d
  .word 0x26650008
  .word 0x0220302d
  .word 0x0c124c84
  .word 0x00000000
  .word 0x8e91002c
  .word 0x0000802d
  .word 0x10000008
  .word 0x00000000
  .word 0x0280202d
  .word 0x0220282d
  .word 0x8fa600ec
  .word 0x0c124c8c
  .word 0x00000000
  .word 0x26100001
  .word 0x26310008
  .word 0x0217102a
  .word 0x1440fff7
  .word 0x00000000
  .word 0x86a30048
  .word 0x24020002
  .word 0x10620064
  .word 0x00000000
  .word 0x24020001
  .word 0x10620052
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000006a
  .word 0x00000000
  .word 0x8e910030
  .word 0x0000802d
  .word 0x10000023
  .word 0x00000000
  .word 0x1600000e
  .word 0x00000000
  .word 0x44900000
  .word 0x00000000
  .word 0x46800060
  .word 0x2462ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x44900000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46000841
  .word 0x2462ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000b03
  .word 0x02a0202d
  .word 0x0000282d
  .word 0x0220302d
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x26100001
  .word 0x26310008
  .word 0x8ea20000
  .word 0x8c43000c
  .word 0x0203102a
  .word 0x1440ffda
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x02a0202d
  .word 0x0000282d
  .word 0x0220302d
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x8e820030
  .word 0x24500004
  .word 0x0000882d
  .word 0x10000010
  .word 0x00000000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800060
  .word 0x2462ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000b03
  .word 0x02a0202d
  .word 0x24050001
  .word 0x0200302d
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x26310001
  .word 0x26100008
  .word 0x8ea20000
  .word 0x8c43000c
  .word 0x0223102a
  .word 0x1440ffed
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0x8e830030
  .word 0x0000202d
  .word 0x10000007
  .word 0x00000000
  .word 0xa0600000
  .word 0xa0600001
  .word 0xa0600002
  .word 0xa0600003
  .word 0x24840001
  .word 0x24630004
  .word 0x0092102a
  .word 0x1440fff8
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x8e830030
  .word 0x0000202d
  .word 0x10000007
  .word 0x00000000
  .word 0xa0600000
  .word 0xa0600001
  .word 0xa0600002
  .word 0xa0600003
  .word 0x24840001
  .word 0x24630004
  .word 0x0092102a
  .word 0x1440fff8
  .word 0x00000000
  .word 0x8ea40000
  .word 0x8c820004
  .word 0x8c420000
  .word 0x30420001
  .word 0x104000e4
  .word 0x00000000
  .word 0x86a30048
  .word 0x24020002
  .word 0x106200a2
  .word 0x00000000
  .word 0x24020001
  .word 0x1062005f
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000d9
  .word 0x00000000
  .word 0x8e910034
  .word 0x0000802d
  .word 0x1000002c
  .word 0x00000000
  .word 0x2462ffff
  .word 0x1c400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248444f8
  .word 0x24050229
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x16000010
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x2442ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010003
  .word 0x00000000
  .word 0x00000000
  .word 0xe6200000
  .word 0x10000010
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x2442ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x468000a0
  .word 0x44900000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0x46020003
  .word 0xe6200000
  .word 0xae200004
  .word 0x26100001
  .word 0x26310010
  .word 0x8ea20000
  .word 0x8c43000c
  .word 0x0203102a
  .word 0x1440ffd1
  .word 0x00000000
  .word 0x3c023f80
  .word 0xae220000
  .word 0xae200004
  .word 0x8e820034
  .word 0x24500008
  .word 0x0000882d
  .word 0x10000018
  .word 0x00000000
  .word 0x2462ffff
  .word 0x1c400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248444f8
  .word 0x24050237
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x2442ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010003
  .word 0xe6000000
  .word 0x3c023f80
  .word 0xae020004
  .word 0x26310001
  .word 0x26100010
  .word 0x8ea20000
  .word 0x8c43000c
  .word 0x0223102a
  .word 0x1440ffe5
  .word 0x00000000
  .word 0x1000007f
  .word 0x00000000
  .word 0x8e850034
  .word 0x8c83000c
  .word 0x00031040
  .word 0x00431021
  .word 0x24420006
  .word 0x3c043f00
  .word 0x44841000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46001040
  .word 0xaca00000
  .word 0xaca00004
  .word 0xaca00008
  .word 0x3c033f80
  .word 0x44830000
  .word 0xaca3000c
  .word 0xaca00010
  .word 0xaca40014
  .word 0x000210c0
  .word 0x00451021
  .word 0xac43ffe8
  .word 0xac40ffec
  .word 0xac43fff0
  .word 0xac43fff4
  .word 0xac43fff8
  .word 0xac44fffc
  .word 0x46010003
  .word 0x460000c6
  .word 0x46011043
  .word 0x00000000
  .word 0x24a60018
  .word 0x0000202d
  .word 0x10000008
  .word 0x00000000
  .word 0xe4c10000
  .word 0xacc00004
  .word 0xe4c10008
  .word 0xacc3000c
  .word 0x24c60018
  .word 0x24840001
  .word 0x46030840
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x0082102a
  .word 0x1440fff5
  .word 0x00000000
  .word 0x24a40028
  .word 0x0000282d
  .word 0x3c033f00
  .word 0x10000006
  .word 0x00000000
  .word 0xe4800000
  .word 0xac830004
  .word 0x24a50001
  .word 0x46030000
  .word 0x24840018
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x00a2102a
  .word 0x1440fff7
  .word 0x00000000
  .word 0x1000003f
  .word 0x00000000
  .word 0x8e850034
  .word 0x8c83000c
  .word 0x00031040
  .word 0x00431021
  .word 0x24420006
  .word 0x3c043f00
  .word 0x44841000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46001040
  .word 0xaca00000
  .word 0xaca00004
  .word 0xaca00008
  .word 0x3c033f80
  .word 0x44830000
  .word 0xaca3000c
  .word 0xaca00010
  .word 0xaca40014
  .word 0x000210c0
  .word 0x00451021
  .word 0xac43ffe8
  .word 0xac40ffec
  .word 0xac43fff0
  .word 0xac43fff4
  .word 0xac43fff8
  .word 0xac44fffc
  .word 0x46010103
  .word 0x460020c6
  .word 0x46011003
  .word 0x00000000
  .word 0x24a40018
  .word 0x0000302d
  .word 0x10000008
  .word 0x00000000
  .word 0xe4800000
  .word 0xac800004
  .word 0xe4800008
  .word 0xac83000c
  .word 0x24840018
  .word 0x24c60001
  .word 0x46030000
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x00c2102a
  .word 0x1440fff5
  .word 0x00000000
  .word 0x24a40028
  .word 0x0000282d
  .word 0x3c033f00
  .word 0x10000006
  .word 0x00000000
  .word 0xe4840000
  .word 0xac830004
  .word 0x24a50001
  .word 0x46032100
  .word 0x24840018
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x00a2102a
  .word 0x1440fff7
  .word 0x00000000
  .word 0xafa000f0
  .word 0xafa000f4
  .word 0xafa000f8
  .word 0x3c023b9a
  .word 0x3442ca00
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a000fc
  .word 0x8e82005c
  .word 0xc7a300f0
  .word 0xc7a200f4
  .word 0xc7a100f8
  .word 0xc7a000fc
  .word 0xe4430004
  .word 0xe4420008
  .word 0xe441000c
  .word 0xe4400010
  .word 0x0280102d
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
  .word 0x27bd0100
  .word 0x03e00008
  .word 0x00000000
}
#pragma pop

// FUN_001E9920. Allocate path buffers and initialize sampled path state.
void func_001e9920(void* outputData, const void* configData)
{
    typedef struct RuntimePathConfig
    {
        u8 reserved0[8];
        u32 firstCount;
        u32 secondCount;
        u32 value;
    } RuntimePathConfig;
    typedef struct RuntimePathObject
    {
        const RuntimePathConfig* config;
        u32 state;
        u32 currentIndex;
        u32 count;
        RuntimeVec3* vectors[6];
        RuntimePathWork* firstPath;
        RuntimePathWork* secondPath;
        void* extraData;
        RuntimeMatrix* matrix;
        u8 reserved38[0x10];
        s16 value;
    } RuntimePathObject;

    RuntimePathObject* output;
    const RuntimePathConfig* config;
    u32 size;
    u32 secondSize;
    u32 highPart;

    output = outputData;
    config = configData;
    size = 0;
    size += config->firstCount * 0x18;
    size += config->firstCount * 0x30;
    secondSize = config->secondCount << 1;
    highPart = config->secondCount << 4;
    /* load-bearing: removing this file's 14 zero-width barriers loses 6 MATCHes (001E3940 nd0->32, 001E7AA0 ->9, 001E9920 ->5, 001ECD90 ->21, 001EDF10 ->407, 001EEB90 ->22) - measured W172 */
    __asm__ volatile ("" : "+r"(highPart));
    highPart += secondSize;
    secondSize = highPart;
    /* load-bearing: removing this file's 14 zero-width barriers loses 6 MATCHes (001E3940 nd0->32, 001E7AA0 ->9, 001E9920 ->5, 001ECD90 ->21, 001EDF10 ->407, 001EEB90 ->22) - measured W172 */
    __asm__ volatile ("" : "+r"(secondSize));
    size += secondSize << 2;
    output->vectors[0] = FIELD_RUNTIME_PRIMARY_ALLOCATOR(size, 0x40000);
    output->vectors[1] = output->vectors[0] + config->firstCount;
    output->vectors[2] = output->vectors[1] + config->firstCount;
    output->vectors[3] = output->vectors[2] + config->firstCount;
    output->vectors[4] = output->vectors[3] + config->firstCount;
    output->vectors[5] = output->vectors[4] + config->firstCount;
    output->extraData = output->vectors[5] + config->firstCount;

    output->state = 0;
    output->config = config;
    output->currentIndex = 0;
    output->count = 0;
    output->firstPath = func_001e7ce0(config->firstCount - 1, 0x40);
    output->secondPath = func_001e7ce0(config->firstCount - 1, 0x40);
    output->matrix = func_004c38c0();
    output->value = (s16)config->value;
}

// FUN_001E9A90. Release a field runtime object's owned resources.
void func_001e9a90(void* workData)
{
    RuntimeWork* work;

    work = (RuntimeWork*)workData;
    func_004c3880(work->next);
    func_001e7de0((RuntimePathWork*)work->renderData);
    func_001e7de0((RuntimePathWork*)work->childTask);
    ((void (*)(void*))DAT_0096017c[0])((void*)(uintptr_t)work->phase);
}

// FUN_001E9AF0
#pragma opt_lifetimes on
#ifndef PC_BUILD
asm void func_001e9af0(RuntimeWork* workData, u32* renderRef)
{
  .set noreorder
  .word 0x27bdfe60
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
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x8ca40000
  .word 0x2405001a
  .word 0x0c124cdc
  .word 0x00000000
  .word 0x8ea30004
  .word 0x30620001
  .word 0x14400005
  .word 0x00000000
  .word 0x00601027
  .word 0x30420002
  .word 0x10400192
  .word 0x00000000
  .word 0x86a30048
  .word 0x24020002
  .word 0x10620118
  .word 0x00000000
  .word 0x24020001
  .word 0x1062006d
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000184
  .word 0x00000000
  .word 0x8e820000
  .word 0x8c500030
  .word 0x0000882d
  .word 0x10000031
  .word 0x00000000
  .word 0x2462ffff
  .word 0x1c400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248444f8
  .word 0x240503d4
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x16200010
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x2442ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010003
  .word 0x00000000
  .word 0x00000000
  .word 0xe7a0019c
  .word 0x10000010
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x2442ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x468000a0
  .word 0x44910000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0x46020003
  .word 0xe7a0019c
  .word 0x02a0202d
  .word 0x0000282d
  .word 0xc7ac019c
  .word 0x0200302d
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x26310001
  .word 0x26100008
  .word 0x8ea20000
  .word 0x8c43000c
  .word 0x0223102a
  .word 0x1440ffcc
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x02a0202d
  .word 0x0000282d
  .word 0x0200302d
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x8e820000
  .word 0x8c420030
  .word 0x24510004
  .word 0x0000802d
  .word 0x1000001b
  .word 0x00000000
  .word 0x2462ffff
  .word 0x1c400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248444f8
  .word 0x240503df
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x2442ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010303
  .word 0xe7ac019c
  .word 0x02a0202d
  .word 0x24050001
  .word 0x0220302d
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x26100001
  .word 0x26310008
  .word 0x8ea20000
  .word 0x8c43000c
  .word 0x0203102a
  .word 0x1440ffe2
  .word 0x00000000
  .word 0x1000011c
  .word 0x00000000
  .word 0x8e820000
  .word 0x8c500030
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0000282d
  .word 0x0200302d
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x24050001
  .word 0x26060004
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x92030000
  .word 0x92020004
  .word 0x00621021
  .word 0x00021043
  .word 0xa2020008
  .word 0x92030001
  .word 0x92020005
  .word 0x00621021
  .word 0x00021043
  .word 0xa2020009
  .word 0x92030002
  .word 0x92020006
  .word 0x00621021
  .word 0x00021043
  .word 0xa202000a
  .word 0x92030003
  .word 0x92020007
  .word 0x00621021
  .word 0x00021043
  .word 0xa202000b
  .word 0x8ea20000
  .word 0x8c43000c
  .word 0x00031040
  .word 0x00431021
  .word 0x24510006
  .word 0x3c023f80
  .word 0x44826000
  .word 0x2622fffd
  .word 0x00021080
  .word 0x02023021
  .word 0x02a0202d
  .word 0x0000282d
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x2622fffe
  .word 0x00021080
  .word 0x02023021
  .word 0x02a0202d
  .word 0x24050001
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x00111080
  .word 0x00502021
  .word 0x9083fff4
  .word 0x9082fff8
  .word 0x00621021
  .word 0x00021043
  .word 0xa082fffc
  .word 0x9083fff5
  .word 0x9082fff9
  .word 0x00621021
  .word 0x00021043
  .word 0xa082fffd
  .word 0x9083fff6
  .word 0x9082fffa
  .word 0x00621021
  .word 0x00021043
  .word 0xa082fffe
  .word 0x9083fff7
  .word 0x9082fffb
  .word 0x00621021
  .word 0x00021043
  .word 0xa082ffff
  .word 0x8ea20000
  .word 0xc440000c
  .word 0x46800020
  .word 0x3c023f00
  .word 0x44821000
  .word 0x00000000
  .word 0x46001040
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010503
  .word 0x2612000c
  .word 0x46011543
  .word 0x00000000
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000012
  .word 0x00000000
  .word 0x0240302d
  .word 0x26520004
  .word 0x02a0202d
  .word 0x0000282d
  .word 0x4600ab06
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x26560004
  .word 0x02a0202d
  .word 0x24050001
  .word 0x4600ab06
  .word 0x0240302d
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x26d20004
  .word 0x26310001
  .word 0x4614ad40
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x0222102a
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x26020014
  .word 0x0000182d
  .word 0x10000027
  .word 0x00000000
  .word 0x9045fff8
  .word 0x9044fffc
  .word 0x00a42821
  .word 0x90440004
  .word 0x00852821
  .word 0x90440008
  .word 0x00852021
  .word 0x00042083
  .word 0xa0440000
  .word 0x9045fff9
  .word 0x9044fffd
  .word 0x00a42821
  .word 0x90440005
  .word 0x00852821
  .word 0x90440009
  .word 0x00852021
  .word 0x00042083
  .word 0xa0440001
  .word 0x9045fffa
  .word 0x9044fffe
  .word 0x00a42821
  .word 0x90440006
  .word 0x00852821
  .word 0x9044000a
  .word 0x00852021
  .word 0x00042083
  .word 0xa0440002
  .word 0x9045fffb
  .word 0x9044ffff
  .word 0x00a42821
  .word 0x90440007
  .word 0x00852821
  .word 0x9044000b
  .word 0x00852021
  .word 0x00042083
  .word 0xa0440003
  .word 0x24630001
  .word 0x2442000c
  .word 0x8ea40000
  .word 0x8c84000c
  .word 0x0064202a
  .word 0x1480ffd6
  .word 0x00000000
  .word 0x10000074
  .word 0x00000000
  .word 0x8e820000
  .word 0x8c500030
  .word 0x44806000
  .word 0x02a0202d
  .word 0x24050001
  .word 0x0200302d
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x24050001
  .word 0x26060004
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c43000c
  .word 0x00031040
  .word 0x00431021
  .word 0x24560006
  .word 0x3c023f80
  .word 0x44826000
  .word 0x26c2fffd
  .word 0x00021080
  .word 0x02023021
  .word 0x02a0202d
  .word 0x24050001
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x26c2fffe
  .word 0x00021080
  .word 0x02023021
  .word 0x02a0202d
  .word 0x24050001
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x8ea20000
  .word 0xc440000c
  .word 0x46800020
  .word 0x3c023f00
  .word 0x44820800
  .word 0x00000000
  .word 0x46000d80
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46160543
  .word 0x2611000c
  .word 0x46160d03
  .word 0x00000000
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000012
  .word 0x00000000
  .word 0x0220302d
  .word 0x26310004
  .word 0x02a0202d
  .word 0x24050001
  .word 0x4600a306
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x26370004
  .word 0x02a0202d
  .word 0x24050001
  .word 0x4600a306
  .word 0x0220302d
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x26f10004
  .word 0x26520001
  .word 0x4615a500
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x0242102a
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x44806000
  .word 0x02a0202d
  .word 0x0000282d
  .word 0x26060008
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x26c2ffff
  .word 0x00021080
  .word 0x02023021
  .word 0x02a0202d
  .word 0x0000282d
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46160543
  .word 0x4600ad06
  .word 0x26100014
  .word 0x0000882d
  .word 0x1000000a
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0000282d
  .word 0x4600a306
  .word 0x0200302d
  .word 0x0c07b43c
  .word 0x00000000
  .word 0x26310001
  .word 0x4615a500
  .word 0x2610000c
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x0222102a
  .word 0x1440fff3
  .word 0x00000000
  .word 0x8ea20004
  .word 0x34420002
  .word 0xaea20004
  .word 0x8ea20008
  .word 0x28410002
  .word 0x1020006d
  .word 0x00000000
  .word 0x86a30048
  .word 0x24020002
  .word 0x10620054
  .word 0x00000000
  .word 0x24020001
  .word 0x1062003c
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100005a1
  .word 0x00000000
  .word 0x8e830000
  .word 0x8c62005c
  .word 0x8c520014
  .word 0x8c630014
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x02428021
  .word 0x0000882d
  .word 0x1000000d
  .word 0x00000000
  .word 0x16120006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248444f8
  .word 0x2405043f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xae400000
  .word 0xae400004
  .word 0xae400008
  .word 0x26310001
  .word 0x26520018
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x24420001
  .word 0x0222102a
  .word 0x1440ffef
  .word 0x00000000
  .word 0x8e820000
  .word 0x8c42005c
  .word 0x8c420014
  .word 0x2451000c
  .word 0x0000902d
  .word 0x1000000d
  .word 0x00000000
  .word 0x16110006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248444f8
  .word 0x24050449
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xae200000
  .word 0xae200004
  .word 0xae200008
  .word 0x26520001
  .word 0x26310018
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x0242102a
  .word 0x1440fff0
  .word 0x00000000
  .word 0x1000056a
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c43000c
  .word 0x00031040
  .word 0x00431021
  .word 0x24430006
  .word 0x8e820000
  .word 0x8c42005c
  .word 0x8c440014
  .word 0x0000282d
  .word 0x10000006
  .word 0x00000000
  .word 0xac800000
  .word 0xac800004
  .word 0xac800008
  .word 0x24a50001
  .word 0x2484000c
  .word 0x00a3102a
  .word 0x1440fff9
  .word 0x00000000
  .word 0x10000555
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c43000c
  .word 0x00031040
  .word 0x00431021
  .word 0x24430006
  .word 0x8e820000
  .word 0x8c42005c
  .word 0x8c440014
  .word 0x0000282d
  .word 0x10000006
  .word 0x00000000
  .word 0xac800000
  .word 0xac800004
  .word 0xac800008
  .word 0x24a50001
  .word 0x2484000c
  .word 0x00a3102a
  .word 0x1440fff9
  .word 0x00000000
  .word 0x10000540
  .word 0x00000000
  .word 0x86a30048
  .word 0x24020002
  .word 0x106202a9
  .word 0x00000000
  .word 0x24020001
  .word 0x1062012e
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000535
  .word 0x00000000
  .word 0x8e830000
  .word 0x8c62005c
  .word 0x8c560014
  .word 0x8c630014
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x02c2f021
  .word 0x0000882d
  .word 0x1000011a
  .word 0x00000000
  .word 0x00111040
  .word 0x00511021
  .word 0x00021080
  .word 0x02c29821
  .word 0x2412ffff
  .word 0x24020001
  .word 0x1222000a
  .word 0x00000000
  .word 0x12200003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0xafa200d0
  .word 0x10000005
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x2442ffff
  .word 0xafa200d0
  .word 0x0000802d
  .word 0x00111080
  .word 0x02a21021
  .word 0x7fa200c0
  .word 0x001110c0
  .word 0x02a2b821
  .word 0x100000d3
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x2442ffff
  .word 0x1c400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248444f8
  .word 0x24050483
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x16200029
  .word 0x00000000
  .word 0x16000012
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x2442ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010303
  .word 0x02a0202d
  .word 0x27a50198
  .word 0x27a6019c
  .word 0x0c079fe4
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x2442ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x468000a0
  .word 0x44900000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0x46020303
  .word 0x02a0202d
  .word 0x27a50198
  .word 0x27a6019c
  .word 0x0c079fe4
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x2442ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010303
  .word 0x02a0202d
  .word 0x27a50198
  .word 0x27a6019c
  .word 0x0c079fe4
  .word 0x00000000
  .word 0x8fa40198
  .word 0x10920041
  .word 0x00000000
  .word 0x0080902d
  .word 0x8ea2000c
  .word 0x2443ffff
  .word 0x00643823
  .word 0x04e10003
  .word 0x00000000
  .word 0x8ea20008
  .word 0x00e23821
  .word 0x24820001
  .word 0x00623023
  .word 0x04c10003
  .word 0x00000000
  .word 0x8ea20008
  .word 0x00c23021
  .word 0x7ba200c0
  .word 0x8c450010
  .word 0x00071040
  .word 0x00471021
  .word 0x00022080
  .word 0x00a41821
  .word 0xc4620000
  .word 0xc4610004
  .word 0xc4600008
  .word 0xe7a200e0
  .word 0xe7a100e4
  .word 0xe7a000e8
  .word 0x8ee20018
  .word 0x00441021
  .word 0xc4610000
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a000ec
  .word 0xc4610004
  .word 0xc4400004
  .word 0x46000801
  .word 0xe7a000f0
  .word 0xc4610008
  .word 0xc4400008
  .word 0x46000801
  .word 0xe7a000f4
  .word 0x8ee2001c
  .word 0x00441821
  .word 0x00061040
  .word 0x00461021
  .word 0x00021080
  .word 0x00a21021
  .word 0xc4410000
  .word 0xc4600000
  .word 0x46000800
  .word 0xe7a000f8
  .word 0xc4410004
  .word 0xc4600004
  .word 0x46000800
  .word 0xe7a000fc
  .word 0xc4410008
  .word 0xc4600008
  .word 0x46000800
  .word 0xe7a00100
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a20104
  .word 0xe7a10108
  .word 0xe7a0010c
  .word 0x3c023f80
  .word 0x44820800
  .word 0xc7a0019c
  .word 0x46000d01
  .word 0x027e102b
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248444f8
  .word 0x240504a0
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xc7a5019c
  .word 0xc7a00104
  .word 0x46050002
  .word 0x46002902
  .word 0x3c024040
  .word 0x44820000
  .word 0xc7a100f8
  .word 0x46010042
  .word 0x46050842
  .word 0x460128c2
  .word 0xc7a100e0
  .word 0x46140842
  .word 0x4601a082
  .word 0xc7a100ec
  .word 0x46010042
  .word 0x46050842
  .word 0x4601a042
  .word 0x4601a01a
  .word 0x4602a01e
  .word 0x4603a01e
  .word 0x4604285c
  .word 0xe6610000
  .word 0xc7a5019c
  .word 0xc7a10108
  .word 0x46050842
  .word 0x46012902
  .word 0xc7a100fc
  .word 0x46010042
  .word 0x46050842
  .word 0x460128c2
  .word 0xc7a100e4
  .word 0x46140842
  .word 0x4601a082
  .word 0xc7a100f0
  .word 0x46010042
  .word 0x46050842
  .word 0x4601a042
  .word 0x4601a01a
  .word 0x4602a01e
  .word 0x4603a01e
  .word 0x4604285c
  .word 0xe6610004
  .word 0xc7a5019c
  .word 0xc7a1010c
  .word 0x46050842
  .word 0x46012902
  .word 0xc7a10100
  .word 0x46010042
  .word 0x46050842
  .word 0x460128c2
  .word 0xc7a100e8
  .word 0x46140842
  .word 0x4601a082
  .word 0xc7a100f4
  .word 0x46010002
  .word 0x46050002
  .word 0x4600a002
  .word 0x4600a01a
  .word 0x4602a01e
  .word 0x4603a01e
  .word 0x4604281c
  .word 0xe6600008
  .word 0x26100001
  .word 0x26730018
  .word 0x8fa200d0
  .word 0x0202102a
  .word 0x1440ff2b
  .word 0x00000000
  .word 0x8ea30008
  .word 0x8ea2000c
  .word 0x00438023
  .word 0x06010002
  .word 0x00000000
  .word 0x02038021
  .word 0x027e102b
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248444f8
  .word 0x240504b1
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00101040
  .word 0x00501021
  .word 0x00021880
  .word 0x7ba200c0
  .word 0x8c420010
  .word 0x00431021
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe6620000
  .word 0xe6610004
  .word 0xe6600008
  .word 0x8ea30008
  .word 0x8ea20000
  .word 0x8c420008
  .word 0x0062082a
  .word 0x10200004
  .word 0x00000000
  .word 0xafa00198
  .word 0x10000003
  .word 0x00000000
  .word 0x8ea2000c
  .word 0xafa20198
  .word 0x26310001
  .word 0x2a220002
  .word 0x1440fee5
  .word 0x00000000
  .word 0x1000040c
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8c43000c
  .word 0x00031040
  .word 0x00431021
  .word 0x24430006
  .word 0x8e820000
  .word 0x8c42005c
  .word 0x8c440014
  .word 0x0000282d
  .word 0x10000006
  .word 0x00000000
  .word 0xac800000
  .word 0xac800004
  .word 0xac800008
  .word 0x24a50001
  .word 0x2484000c
  .word 0x00a3102a
  .word 0x1440fff9
  .word 0x00000000
  .word 0x8e820000
  .word 0x8c42005c
  .word 0x8c420014
  .word 0x8ea3000c
  .word 0x2464ffff
  .word 0x04810003
  .word 0x00000000
  .word 0x8ea30008
  .word 0x00832021
  .word 0x00041840
  .word 0x00641821
  .word 0x00032080
  .word 0x8ea30010
  .word 0x00641821
  .word 0xc4620000
  .word 0xc4610004
  .word 0xc4600008
  .word 0xe4420000
  .word 0xe4410004
  .word 0xe4400008
  .word 0x8ea30014
  .word 0x00641821
  .word 0xc4620000
  .word 0xc4610004
  .word 0xc4600008
  .word 0xe442000c
  .word 0xe4410010
  .word 0xe4400014
  .word 0xc4410000
  .word 0xc440000c
  .word 0x46000800
  .word 0xe4400018
  .word 0xc4410004
  .word 0xc4400010
  .word 0x46000800
  .word 0xe440001c
  .word 0xc4410008
  .word 0xc4400014
  .word 0x46000800
  .word 0xe4400020
  .word 0x3c033f00
  .word 0x44830800
  .word 0xc4400018
  .word 0x46010002
  .word 0xe4400018
  .word 0xc440001c
  .word 0x46010002
  .word 0xe440001c
  .word 0xc4400020
  .word 0x46010002
  .word 0xe4400020
  .word 0x8ea30000
  .word 0x8c64000c
  .word 0x00041840
  .word 0x00641821
  .word 0x24650006
  .word 0x8ea40008
  .word 0x8ea3000c
  .word 0x00643023
  .word 0x04c10002
  .word 0x00000000
  .word 0x00c43021
  .word 0x00061840
  .word 0x00661821
  .word 0x00032080
  .word 0x00051840
  .word 0x00651821
  .word 0x00031880
  .word 0x00621821
  .word 0x8ea20010
  .word 0x00441021
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe462ffdc
  .word 0xe461ffe0
  .word 0xe460ffe4
  .word 0x8ea20014
  .word 0x00441021
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe462ffe8
  .word 0xe461ffec
  .word 0xe460fff0
  .word 0xc461ffdc
  .word 0xc460ffe8
  .word 0x46000800
  .word 0xe460fff4
  .word 0xc461ffe0
  .word 0xc460ffec
  .word 0x46000800
  .word 0xe460fff8
  .word 0xc461ffe4
  .word 0xc460fff0
  .word 0x46000800
  .word 0xe460fffc
  .word 0x3c023f00
  .word 0x44821000
  .word 0xc460fff4
  .word 0x46020002
  .word 0xe460fff4
  .word 0xc460fff8
  .word 0x46020002
  .word 0xe460fff8
  .word 0xc460fffc
  .word 0x46020002
  .word 0xe460fffc
  .word 0x8e820000
  .word 0x8c42005c
  .word 0x8c500014
  .word 0x8ea20000
  .word 0xc440000c
  .word 0x46800020
  .word 0x46001040
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010543
  .word 0x00000000
  .word 0x0000882d
  .word 0x46011583
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x100000e2
  .word 0x00000000
  .word 0x24020001
  .word 0x12220008
  .word 0x00000000
  .word 0x12200003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x26130024
  .word 0x10000002
  .word 0x00000000
  .word 0x26130030
  .word 0x4600b506
  .word 0x2416ffff
  .word 0x0000902d
  .word 0x00111080
  .word 0x02a2f021
  .word 0x001110c0
  .word 0x02a2b821
  .word 0x1000008e
  .word 0x00000000
  .word 0x02a0202d
  .word 0x4600a306
  .word 0x27a50198
  .word 0x27a6019c
  .word 0x0c079fe4
  .word 0x00000000
  .word 0x8fa40198
  .word 0x10960040
  .word 0x00000000
  .word 0x0080b02d
  .word 0x8ea2000c
  .word 0x2443ffff
  .word 0x00643823
  .word 0x04e10003
  .word 0x00000000
  .word 0x8ea20008
  .word 0x00e23821
  .word 0x24820001
  .word 0x00623023
  .word 0x04c10003
  .word 0x00000000
  .word 0x8ea20008
  .word 0x00c23021
  .word 0x8fc50010
  .word 0x00071040
  .word 0x00471021
  .word 0x00022080
  .word 0x00a41821
  .word 0xc4620000
  .word 0xc4610004
  .word 0xc4600008
  .word 0xe7a200e0
  .word 0xe7a100e4
  .word 0xe7a000e8
  .word 0x8ee20018
  .word 0x00441021
  .word 0xc4610000
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a000ec
  .word 0xc4610004
  .word 0xc4400004
  .word 0x46000801
  .word 0xe7a000f0
  .word 0xc4610008
  .word 0xc4400008
  .word 0x46000801
  .word 0xe7a000f4
  .word 0x8ee2001c
  .word 0x00441821
  .word 0x00061040
  .word 0x00461021
  .word 0x00021080
  .word 0x00a21021
  .word 0xc4410000
  .word 0xc4600000
  .word 0x46000800
  .word 0xe7a000f8
  .word 0xc4410004
  .word 0xc4600004
  .word 0x46000800
  .word 0xe7a000fc
  .word 0xc4410008
  .word 0xc4600008
  .word 0x46000800
  .word 0xe7a00100
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a20104
  .word 0xe7a10108
  .word 0xe7a0010c
  .word 0xc7a6019c
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46060041
  .word 0xc7a00104
  .word 0x46060002
  .word 0x46003142
  .word 0x3c024040
  .word 0x44820000
  .word 0xc7a200f8
  .word 0x46020082
  .word 0x46061082
  .word 0x46023102
  .word 0xc7a200e0
  .word 0x46011082
  .word 0x460208c2
  .word 0xc7a200ec
  .word 0x46020082
  .word 0x46061082
  .word 0x46020882
  .word 0x4602081a
  .word 0x4603081e
  .word 0x4604081e
  .word 0x4605309c
  .word 0xe6620000
  .word 0xc7a6019c
  .word 0xc7a20108
  .word 0x46061082
  .word 0x46023142
  .word 0xc7a200fc
  .word 0x46020082
  .word 0x46061082
  .word 0x46023102
  .word 0xc7a200e4
  .word 0x46011082
  .word 0x460208c2
  .word 0xc7a200f0
  .word 0x46020082
  .word 0x46061082
  .word 0x46020882
  .word 0x4602081a
  .word 0x4603081e
  .word 0x4604081e
  .word 0x4605309c
  .word 0xe6620004
  .word 0xc7a6019c
  .word 0xc7a2010c
  .word 0x46061082
  .word 0x46023142
  .word 0xc7a20100
  .word 0x46020082
  .word 0x46061082
  .word 0x46023102
  .word 0xc7a200e8
  .word 0x46011082
  .word 0x460208c2
  .word 0xc7a200f4
  .word 0x46020002
  .word 0x46060002
  .word 0x46000802
  .word 0x4600081a
  .word 0x4603081e
  .word 0x4604081e
  .word 0x4605301c
  .word 0xe6600008
  .word 0x4615a500
  .word 0x26520001
  .word 0x26730024
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x0242102a
  .word 0x1440ff6f
  .word 0x00000000
  .word 0x2613003c
  .word 0x0000182d
  .word 0x3c023e80
  .word 0x44820800
  .word 0x10000030
  .word 0x00000000
  .word 0xc662ffe8
  .word 0xc660fff4
  .word 0x46001000
  .word 0xe6600000
  .word 0xc662ffec
  .word 0xc660fff8
  .word 0x46001000
  .word 0xe6600004
  .word 0xc662fff0
  .word 0xc660fffc
  .word 0x46001000
  .word 0xe6600008
  .word 0xc662000c
  .word 0xc6600000
  .word 0x46020000
  .word 0xe6600000
  .word 0xc6620010
  .word 0xc6600004
  .word 0x46020000
  .word 0xe6600004
  .word 0xc6620014
  .word 0xc6600008
  .word 0x46020000
  .word 0xe6600008
  .word 0xc6620018
  .word 0xc6600000
  .word 0x46020000
  .word 0xe6600000
  .word 0xc662001c
  .word 0xc6600004
  .word 0x46020000
  .word 0xe6600004
  .word 0xc6620020
  .word 0xc6600008
  .word 0x46020000
  .word 0xe6600008
  .word 0xc6600000
  .word 0x46010002
  .word 0xe6600000
  .word 0xc6600004
  .word 0x46010002
  .word 0xe6600004
  .word 0xc6600008
  .word 0x46010002
  .word 0xe6600008
  .word 0x24630001
  .word 0x26730024
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x0062102a
  .word 0x1440ffcd
  .word 0x00000000
  .word 0x26310001
  .word 0x2a220002
  .word 0x1440ff1d
  .word 0x00000000
  .word 0x10000294
  .word 0x00000000
  .word 0x8ea30000
  .word 0x3c024000
  .word 0x44820800
  .word 0xc4600014
  .word 0x46010603
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c420004
  .word 0x24510040
  .word 0x8e820000
  .word 0x8c42005c
  .word 0x8c500014
  .word 0x8ea20000
  .word 0xc440000c
  .word 0x46800020
  .word 0x3c023f00
  .word 0x44821000
  .word 0x00000000
  .word 0x46001040
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010543
  .word 0x46011503
  .word 0x2416ffff
  .word 0x26120024
  .word 0x8ea2000c
  .word 0x2443ffff
  .word 0x04610003
  .word 0x00000000
  .word 0x8ea20008
  .word 0x00621821
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x8ea20010
  .word 0x00431021
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a20168
  .word 0xe7a1016c
  .word 0xe7a00170
  .word 0x0000982d
  .word 0x100000fc
  .word 0x00000000
  .word 0x02a0202d
  .word 0x4600a306
  .word 0x27a50198
  .word 0x27a6019c
  .word 0x0c079fe4
  .word 0x00000000
  .word 0x8fa40198
  .word 0x10960040
  .word 0x00000000
  .word 0x0080b02d
  .word 0x8ea2000c
  .word 0x2443ffff
  .word 0x00643823
  .word 0x04e10003
  .word 0x00000000
  .word 0x8ea20008
  .word 0x00e23821
  .word 0x24820001
  .word 0x00623023
  .word 0x04c10003
  .word 0x00000000
  .word 0x8ea20008
  .word 0x00c23021
  .word 0x8ea50010
  .word 0x00071040
  .word 0x00471021
  .word 0x00022080
  .word 0x00a41821
  .word 0xc4620000
  .word 0xc4610004
  .word 0xc4600008
  .word 0xe7a200e0
  .word 0xe7a100e4
  .word 0xe7a000e8
  .word 0x8ea20018
  .word 0x00441021
  .word 0xc4610000
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a000ec
  .word 0xc4610004
  .word 0xc4400004
  .word 0x46000801
  .word 0xe7a000f0
  .word 0xc4610008
  .word 0xc4400008
  .word 0x46000801
  .word 0xe7a000f4
  .word 0x8ea2001c
  .word 0x00441821
  .word 0x00061040
  .word 0x00461021
  .word 0x00021080
  .word 0x00a21021
  .word 0xc4410000
  .word 0xc4600000
  .word 0x46000800
  .word 0xe7a000f8
  .word 0xc4410004
  .word 0xc4600004
  .word 0x46000800
  .word 0xe7a000fc
  .word 0xc4410008
  .word 0xc4600008
  .word 0x46000800
  .word 0xe7a00100
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a20104
  .word 0xe7a10108
  .word 0xe7a0010c
  .word 0xc7a2019c
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020041
  .word 0xc7a00104
  .word 0x46020002
  .word 0x46001182
  .word 0x3c024040
  .word 0x44820000
  .word 0xc7a300f8
  .word 0x460300c2
  .word 0x460218c2
  .word 0x46031142
  .word 0xc7a300e0
  .word 0x460118c2
  .word 0x46030902
  .word 0xc7a300ec
  .word 0x460300c2
  .word 0x460218c2
  .word 0x460308c2
  .word 0x4603081a
  .word 0x4604081e
  .word 0x4605081e
  .word 0x460610dc
  .word 0xe7a30178
  .word 0xc7a30108
  .word 0x460218c2
  .word 0x46031182
  .word 0xc7a300fc
  .word 0x460300c2
  .word 0x460218c2
  .word 0x46031142
  .word 0xc7a300e4
  .word 0x460118c2
  .word 0x46030902
  .word 0xc7a300f0
  .word 0x460300c2
  .word 0x460218c2
  .word 0x460308c2
  .word 0x4603081a
  .word 0x4604081e
  .word 0x4605081e
  .word 0x460610dc
  .word 0xe7a3017c
  .word 0xc7a3010c
  .word 0x460218c2
  .word 0x46031182
  .word 0xc7a30100
  .word 0x460300c2
  .word 0x460218c2
  .word 0x46031142
  .word 0xc7a300e8
  .word 0x460118c2
  .word 0x46030902
  .word 0xc7a300f4
  .word 0x46030002
  .word 0x46020002
  .word 0x46000802
  .word 0x4600081a
  .word 0x4604081e
  .word 0x4605081e
  .word 0x4606101c
  .word 0xe7a00180
  .word 0x16600005
  .word 0x00000000
  .word 0xdfa20178
  .word 0xc7a00180
  .word 0xffa20138
  .word 0xe7a00140
  .word 0xc6210000
  .word 0xc7a00178
  .word 0x46000801
  .word 0xe7a00188
  .word 0xc7b7017c
  .word 0xc6200004
  .word 0x46170001
  .word 0xe7a0018c
  .word 0xc7b60180
  .word 0xc6200008
  .word 0x46160001
  .word 0xe7a00190
  .word 0x27a40188
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a10168
  .word 0xc7a00178
  .word 0x46000801
  .word 0xe7a00158
  .word 0xc7a0016c
  .word 0x46170001
  .word 0xe7a0015c
  .word 0xc7a00170
  .word 0x46160001
  .word 0xe7a00160
  .word 0x27a40158
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a6015c
  .word 0xc7a50190
  .word 0xc7a40160
  .word 0xc7a3018c
  .word 0x4604181a
  .word 0x4606281d
  .word 0xe7a00148
  .word 0xc7a20188
  .word 0xc7a10158
  .word 0x4601281a
  .word 0x4604101d
  .word 0xe7a0014c
  .word 0x4606101a
  .word 0x4601181d
  .word 0xe7a00150
  .word 0x27a40148
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a50190
  .word 0xc7a40160
  .word 0xc7a30188
  .word 0xc7a20158
  .word 0xc7a1018c
  .word 0xc7a0015c
  .word 0x4600081a
  .word 0x44800000
  .word 0x4602181e
  .word 0x4604285c
  .word 0x46000834
  .word 0x45000005
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000842
  .word 0x46010802
  .word 0x46000842
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x4600c082
  .word 0xc7a00148
  .word 0x46020042
  .word 0xe7a10148
  .word 0xc7a0014c
  .word 0x46020002
  .word 0xe7a0014c
  .word 0xc7a00150
  .word 0x46020002
  .word 0xe7a00150
  .word 0xc7a30178
  .word 0x46011800
  .word 0xe6400000
  .word 0xc7a2017c
  .word 0xc7a0014c
  .word 0x46001000
  .word 0xe6400004
  .word 0xc7a10180
  .word 0xc7a00150
  .word 0x46000800
  .word 0xe6400008
  .word 0xc7a00148
  .word 0x46001801
  .word 0xe640000c
  .word 0xc7a0014c
  .word 0x46001001
  .word 0xe6400010
  .word 0xc7a00150
  .word 0x46000801
  .word 0xe6400014
  .word 0x26520024
  .word 0xdfa20178
  .word 0xc7a00180
  .word 0xffa20168
  .word 0xe7a00170
  .word 0x4615a500
  .word 0x26730001
  .word 0x8ea20000
  .word 0x8c43000c
  .word 0x0263102a
  .word 0x1440ff01
  .word 0x00000000
  .word 0x00031040
  .word 0x00431021
  .word 0x24530006
  .word 0x2663fffd
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x02029021
  .word 0x8ea30008
  .word 0x8ea2000c
  .word 0x00432023
  .word 0x04810002
  .word 0x00000000
  .word 0x00832021
  .word 0x00041040
  .word 0x00441021
  .word 0x00021880
  .word 0x8ea20010
  .word 0x00431021
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a20178
  .word 0xe7a1017c
  .word 0xe7a00180
  .word 0xc6210000
  .word 0xc7a00178
  .word 0x46000801
  .word 0xe7a00188
  .word 0xc7b5017c
  .word 0xc6200004
  .word 0x46150001
  .word 0xe7a0018c
  .word 0xc7b40180
  .word 0xc6200008
  .word 0x46140001
  .word 0xe7a00190
  .word 0x27a40188
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a10168
  .word 0xc7a00178
  .word 0x46000801
  .word 0xe7a00158
  .word 0xc7a0016c
  .word 0x46150001
  .word 0xe7a0015c
  .word 0xc7a00170
  .word 0x46140001
  .word 0xe7a00160
  .word 0x27a40158
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a6015c
  .word 0xc7a50190
  .word 0xc7a40160
  .word 0xc7a3018c
  .word 0x4604181a
  .word 0x4606281d
  .word 0xe7a00148
  .word 0xc7a20188
  .word 0xc7a10158
  .word 0x4601281a
  .word 0x4604101d
  .word 0xe7a0014c
  .word 0x4606101a
  .word 0x4601181d
  .word 0xe7a00150
  .word 0x27a40148
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a50190
  .word 0xc7a40160
  .word 0xc7a30188
  .word 0xc7a20158
  .word 0xc7a1018c
  .word 0xc7a0015c
  .word 0x4600081a
  .word 0x44800000
  .word 0x4602181e
  .word 0x4604285c
  .word 0x46000834
  .word 0x45000005
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000842
  .word 0x46010802
  .word 0x46000842
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x4600c082
  .word 0xc7a00148
  .word 0x46020042
  .word 0xe7a10148
  .word 0xc7a0014c
  .word 0x46020002
  .word 0xe7a0014c
  .word 0xc7a00150
  .word 0x46020002
  .word 0xe7a00150
  .word 0xc7a30178
  .word 0x46011800
  .word 0xe6400000
  .word 0xc7a2017c
  .word 0xc7a0014c
  .word 0x46001000
  .word 0xe6400004
  .word 0xc7a10180
  .word 0xc7a00150
  .word 0x46000800
  .word 0xe6400008
  .word 0xc7a00148
  .word 0x46001801
  .word 0xe640000c
  .word 0xc7a0014c
  .word 0x46001001
  .word 0xe6400010
  .word 0xc7a00150
  .word 0x46000801
  .word 0xe6400014
  .word 0x00131040
  .word 0x00531021
  .word 0x00021080
  .word 0x00501821
  .word 0xc461ffdc
  .word 0xc460ffe8
  .word 0x46000800
  .word 0xe460fff4
  .word 0xc461ffe0
  .word 0xc460ffec
  .word 0x46000800
  .word 0xe460fff8
  .word 0xc461ffe4
  .word 0xc460fff0
  .word 0x46000800
  .word 0xe460fffc
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc460fff4
  .word 0x46010002
  .word 0xe460fff4
  .word 0xc460fff8
  .word 0x46010002
  .word 0xe460fff8
  .word 0xc460fffc
  .word 0x46010002
  .word 0xe460fffc
  .word 0x8ea2000c
  .word 0x2443ffff
  .word 0x04610003
  .word 0x00000000
  .word 0x8ea20008
  .word 0x00621821
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x8ea20010
  .word 0x00431021
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a20128
  .word 0xe7a1012c
  .word 0xe7a00130
  .word 0xc6210000
  .word 0xc7a00128
  .word 0x46000801
  .word 0xe7a00188
  .word 0xc7b5012c
  .word 0xc6200004
  .word 0x46150001
  .word 0xe7a0018c
  .word 0xc7b40130
  .word 0xc6200008
  .word 0x46140001
  .word 0xe7a00190
  .word 0x27a40188
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a10128
  .word 0xc7a00138
  .word 0x46000801
  .word 0xe7a00158
  .word 0xc7a0013c
  .word 0x4600a801
  .word 0xe7a0015c
  .word 0xc7a00140
  .word 0x4600a001
  .word 0xe7a00160
  .word 0x27a40158
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a6015c
  .word 0xc7a50190
  .word 0xc7a40160
  .word 0xc7a3018c
  .word 0x4604181a
  .word 0x4606281d
  .word 0xe7a00148
  .word 0xc7a20188
  .word 0xc7a10158
  .word 0x4601281a
  .word 0x4604101d
  .word 0xe7a0014c
  .word 0x4606101a
  .word 0x4601181d
  .word 0xe7a00150
  .word 0x27a40148
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a50190
  .word 0xc7a40160
  .word 0xc7a30188
  .word 0xc7a20158
  .word 0xc7a1018c
  .word 0xc7a0015c
  .word 0x4600081a
  .word 0x44800000
  .word 0x4602181e
  .word 0x4604285c
  .word 0x46000834
  .word 0x45000005
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000842
  .word 0x46010802
  .word 0x46000842
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x4600c082
  .word 0xc7a00148
  .word 0x46020042
  .word 0xe7a10148
  .word 0xc7a0014c
  .word 0x46020002
  .word 0xe7a0014c
  .word 0xc7a00150
  .word 0x46020002
  .word 0xe7a00150
  .word 0xc7a30128
  .word 0x46011800
  .word 0xe6000000
  .word 0xc7a2012c
  .word 0xc7a0014c
  .word 0x46001000
  .word 0xe6000004
  .word 0xc7a10130
  .word 0xc7a00150
  .word 0x46000800
  .word 0xe6000008
  .word 0xc7a00148
  .word 0x46001801
  .word 0xe600000c
  .word 0xc7a0014c
  .word 0x46001001
  .word 0xe6000010
  .word 0xc7a00150
  .word 0x46000801
  .word 0xe6000014
  .word 0xc6010000
  .word 0xc600000c
  .word 0x46000800
  .word 0xe6000018
  .word 0xc6010004
  .word 0xc6000010
  .word 0x46000800
  .word 0xe600001c
  .word 0xc6010008
  .word 0xc6000014
  .word 0x46000800
  .word 0xe6000020
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc6000018
  .word 0x46010002
  .word 0xe6000018
  .word 0xc600001c
  .word 0x46010002
  .word 0xe600001c
  .word 0xc6000020
  .word 0x46010002
  .word 0xe6000020
  .word 0x2603003c
  .word 0x0000202d
  .word 0x3c023e80
  .word 0x44820800
  .word 0x10000030
  .word 0x00000000
  .word 0xc462ffe8
  .word 0xc460fff4
  .word 0x46001000
  .word 0xe4600000
  .word 0xc462ffec
  .word 0xc460fff8
  .word 0x46001000
  .word 0xe4600004
  .word 0xc462fff0
  .word 0xc460fffc
  .word 0x46001000
  .word 0xe4600008
  .word 0xc462000c
  .word 0xc4600000
  .word 0x46020000
  .word 0xe4600000
  .word 0xc4620010
  .word 0xc4600004
  .word 0x46020000
  .word 0xe4600004
  .word 0xc4620014
  .word 0xc4600008
  .word 0x46020000
  .word 0xe4600008
  .word 0xc4620018
  .word 0xc4600000
  .word 0x46020000
  .word 0xe4600000
  .word 0xc462001c
  .word 0xc4600004
  .word 0x46020000
  .word 0xe4600004
  .word 0xc4620020
  .word 0xc4600008
  .word 0x46020000
  .word 0xe4600008
  .word 0xc4600000
  .word 0x46010002
  .word 0xe4600000
  .word 0xc4600004
  .word 0x46010002
  .word 0xe4600004
  .word 0xc4600008
  .word 0x46010002
  .word 0xe4600008
  .word 0x24840001
  .word 0x24630024
  .word 0x8ea20000
  .word 0x8c42000c
  .word 0x0082102a
  .word 0x1440ffcd
  .word 0x00000000
  .word 0x8e840000
  .word 0x0c124cf4
  .word 0x00000000
  .word 0x8e840000
  .word 0x9483000c
  .word 0x34630001
  .word 0xa483000c
  .word 0xafa00110
  .word 0xafa00114
  .word 0xafa00118
  .word 0x3c033b9a
  .word 0x3463ca00
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0011c
  .word 0x8e830000
  .word 0x8c63005c
  .word 0xc7a30110
  .word 0xc7a20114
  .word 0xc7a10118
  .word 0xc7a0011c
  .word 0xe4630004
  .word 0xe4620008
  .word 0xe461000c
  .word 0xe4600010
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
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd01a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule reset
#pragma opt_lifetimes reset

// FUN_001EB920. Append a position-normal sample and refresh queue state.
void func_001eb920(void* data, const RuntimeVec3* position, const RuntimeVec3* normal)
{
    typedef struct RuntimeSampleQueue
    {
        void* config;
        u32 reserved;
        s32 count;
        s32 writeIndex;
        RuntimeVec3* positions;
        RuntimeVec3* normals;
    } RuntimeSampleQueue;

    RuntimeSampleQueue* queue;
    s32 index;

    queue = data;
    index = queue->writeIndex;
    queue->positions[index] = *position;
    queue->normals[index] = *normal;

    if (queue->count < *(s32*)((u8*)queue->config + 8))
    {
        queue->count++;
    }
    queue->writeIndex++;
    queue->writeIndex %= *(s32*)((u8*)queue->config + 8);

    switch (queue->count)
    {
    case 0:
        func_0019d3f0(D_006844F8, 0x5be);
        break;
    case 1:
        break;
    case 2:
        func_001ebd80((RuntimeWork*)queue, 0);
        break;
    default:
        func_001ebd80((RuntimeWork*)queue, 1);
        func_001ebd80((RuntimeWork*)queue, 0);
        break;
    }
}

// FUN_001EBA50
void func_001eba50(RuntimeResetWork* work)
{
    work->value = work->completedFlags;
    work->flags = 0;
    func_001ed0b0(work->work);
}

// FUN_001EBA80
void func_001eba80(RuntimeCommandWork* work, u32* unused)
{
    u16* cursor;
    u32 duration;
    u16* durationParts;
    RuntimeWork* target;
    s32 stop;

    cursor = work->cursor;
    stop = 0;
    do
    {
        switch (*cursor)
        {
        case 0:
            stop = 1;
            break;
        case 1:
            if ((~work->flags & 1) != 0)
            {
                if ((((u32)(cursor + 1) >> 1) & 1) != 0)
                {
                    durationParts = (u16*)&duration;
                    durationParts[0] = cursor[1];
                    durationParts[1] = cursor[2];
                }
                else
                {
                    duration = *(u32*)(cursor + 1);
                }
                work->flags |= 1;
                work->elapsed = 0;
            }
            else
            {
                work->elapsed++;
            }
            if ((((u32)(cursor + 1) >> 1) & 1) != 0)
            {
                durationParts = (u16*)&duration;
                durationParts[0] = cursor[1];
                durationParts[1] = cursor[2];
            }
            else
            {
                duration = *(u32*)(cursor + 1);
            }
            stop = 1;
            if (work->elapsed >= duration)
            {
                cursor += 3;
                work->flags &= ~1;
                stop = 0;
            }
            break;
        case 0x100:
            work->flags |= 2;
            cursor++;
            break;
        case 0x101:
            work->flags &= ~2;
            cursor++;
            break;
        case 0x102:
            target = work->target;
            target->completedFlags = 0;
            target->state = 0;
            cursor++;
            break;
        case 0x200:
            switch (work->delay)
            {
            case 0:
                if (work->duration != 0)
                {
                    func_001ed080((f32)work->duration / 30.0f, work->target);
                }
                break;
            }
            cursor++;
            break;
        case 0x201:
            work->delay = (s16)cursor[1];
            cursor += 2;
            break;
        case 0x202:
            if ((((u32)(cursor + 1) >> 1) & 1) != 0)
            {
                durationParts = (u16*)&duration;
                durationParts[0] = cursor[1];
                durationParts[1] = cursor[2];
            }
            else
            {
                duration = *(u32*)(cursor + 1);
            }
            work->duration = duration;
            cursor += 3;
            break;
        case 0x400:
            work->flags |= 8;
            cursor++;
            break;
        }
    } while ((u32)(stop != 0) ^ 1);
    work->cursor = cursor;
}

// FUN_001EBD80
#ifndef PC_BUILD
asm void func_001ebd80(RuntimeWork* work, s32 param2)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7bb001c
  .word 0xe7ba0018
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x8c820000
  .word 0x8c420000
  .word 0xc440001c
  .word 0xe7a00078
  .word 0xc4400024
  .word 0xe7a00070
  .word 0xc4400020
  .word 0xe7a0007c
  .word 0xc4400028
  .word 0xe7a00074
  .word 0x0000302d
  .word 0x0c07b364
  .word 0x00000000
  .word 0x46000506
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24060001
  .word 0x0c07b364
  .word 0x00000000
  .word 0x4600a036
  .word 0x24020001
  .word 0x45000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x38500001
  .word 0x8e430008
  .word 0x24020002
  .word 0x14620008
  .word 0x00000000
  .word 0x8e420000
  .word 0x8c420000
  .word 0xc45b000c
  .word 0xc4550010
  .word 0x4480b000
  .word 0x1000000f
  .word 0x00000000
  .word 0x16200008
  .word 0x00000000
  .word 0x8e420000
  .word 0x8c420000
  .word 0xc45b000c
  .word 0xc4550010
  .word 0x4480b000
  .word 0x10000006
  .word 0x00000000
  .word 0x8e420000
  .word 0x8c420000
  .word 0xc45b0000
  .word 0xc4550008
  .word 0xc4560004
  .word 0xafa00090
  .word 0xafa00094
  .word 0xafa00098
  .word 0x32020001
  .word 0x00029880
  .word 0x027d1021
  .word 0x24420078
  .word 0xc45a0000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0000302d
  .word 0x0c07b364
  .word 0x00000000
  .word 0x4600d502
  .word 0x027d1021
  .word 0x24420070
  .word 0xc4570000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0c07b3b0
  .word 0x00000000
  .word 0x4600b802
  .word 0x4600a500
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0000302d
  .word 0x27a70080
  .word 0x0c07a0d8
  .word 0x00000000
  .word 0xc7a00080
  .word 0x461b00c2
  .word 0xe7a30080
  .word 0xc7a00084
  .word 0x461b0082
  .word 0xe7a20084
  .word 0xc7a00088
  .word 0x461b0042
  .word 0xe7a10088
  .word 0xc7a00090
  .word 0x46030000
  .word 0xe7a00090
  .word 0xc7a00094
  .word 0x46020000
  .word 0xe7a00094
  .word 0xc7a00098
  .word 0x46010000
  .word 0xe7a00098
  .word 0x8e420008
  .word 0x28410002
  .word 0x10200006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248444f8
  .word 0x24050151
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x16200006
  .word 0x00000000
  .word 0xafa00080
  .word 0xafa00084
  .word 0xafa00088
  .word 0x1000002c
  .word 0x00000000
  .word 0x8e43000c
  .word 0x2462ffff
  .word 0x00512023
  .word 0x04810003
  .word 0x00000000
  .word 0x8e420008
  .word 0x00822021
  .word 0x00711823
  .word 0x04610003
  .word 0x00000000
  .word 0x8e420008
  .word 0x00621821
  .word 0x00041040
  .word 0x00441021
  .word 0x00023080
  .word 0x8e450010
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x00a41021
  .word 0xc4410000
  .word 0x00a61021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00080
  .word 0x24a30004
  .word 0x00641021
  .word 0xc4410000
  .word 0x00661021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00084
  .word 0x24a30008
  .word 0x00641021
  .word 0xc4410000
  .word 0x00661021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00088
  .word 0x27a40080
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00080
  .word 0x461600c2
  .word 0xe7a30080
  .word 0xc7a00084
  .word 0x46160082
  .word 0xe7a20084
  .word 0xc7a00088
  .word 0x46160042
  .word 0xe7a10088
  .word 0xc7a00090
  .word 0x46030000
  .word 0xe7a00090
  .word 0xc7a00094
  .word 0x46020000
  .word 0xe7a00094
  .word 0xc7a00098
  .word 0x46010000
  .word 0xe7a00098
  .word 0x8e420008
  .word 0x28410002
  .word 0x10200006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248444f8
  .word 0x2405013a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e440008
  .word 0x2482ffff
  .word 0x16220006
  .word 0x00000000
  .word 0xafa00080
  .word 0xafa00084
  .word 0xafa00088
  .word 0x1000002c
  .word 0x00000000
  .word 0x8e43000c
  .word 0x2462ffff
  .word 0x00513823
  .word 0x04e10002
  .word 0x00000000
  .word 0x00e43821
  .word 0x2402fffe
  .word 0x00511023
  .word 0x00431821
  .word 0x04610002
  .word 0x00000000
  .word 0x00641821
  .word 0x00031040
  .word 0x00431021
  .word 0x00023080
  .word 0x8e450010
  .word 0x00071040
  .word 0x00471021
  .word 0x00022080
  .word 0x00a41021
  .word 0xc4410000
  .word 0x00a61021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00080
  .word 0x24a30004
  .word 0x00641021
  .word 0xc4410000
  .word 0x00661021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00084
  .word 0x24a30008
  .word 0x00641021
  .word 0xc4410000
  .word 0x00661021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00088
  .word 0x27a40080
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00080
  .word 0x461500c2
  .word 0xe7a30080
  .word 0xc7a00084
  .word 0x46150082
  .word 0xe7a20084
  .word 0xc7a00088
  .word 0x46150042
  .word 0xe7a10088
  .word 0xc7a00090
  .word 0x46030000
  .word 0xe7a00090
  .word 0xc7a00094
  .word 0x46020000
  .word 0xe7a00094
  .word 0xc7a00098
  .word 0x46010000
  .word 0xe7a00098
  .word 0x27a40090
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00090
  .word 0x46140002
  .word 0xe7a00090
  .word 0xc7a00094
  .word 0x46140002
  .word 0xe7a00094
  .word 0xc7a00098
  .word 0x46140002
  .word 0xe7a00098
  .word 0x8e42000c
  .word 0x2442ffff
  .word 0x00511823
  .word 0x04610003
  .word 0x00000000
  .word 0x8e420008
  .word 0x00621821
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x8e420018
  .word 0x00431021
  .word 0xc7a20090
  .word 0xc7a10094
  .word 0xc7a00098
  .word 0xe4420000
  .word 0xe4410004
  .word 0xe4400008
  .word 0xafa00090
  .word 0xafa00094
  .word 0xafa00098
  .word 0x26020001
  .word 0x30420001
  .word 0x00028080
  .word 0x021d1021
  .word 0x24420078
  .word 0xc4590000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24060001
  .word 0x0c07b364
  .word 0x00000000
  .word 0x4600cd02
  .word 0x021d1021
  .word 0x24420070
  .word 0xc4580000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0c07b3b0
  .word 0x00000000
  .word 0x4600c002
  .word 0x4600a500
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24060001
  .word 0x27a70080
  .word 0x0c07a0d8
  .word 0x00000000
  .word 0xc7a00080
  .word 0x461b00c2
  .word 0xe7a30080
  .word 0xc7a00084
  .word 0x461b0082
  .word 0xe7a20084
  .word 0xc7a00088
  .word 0x461b0042
  .word 0xe7a10088
  .word 0xc7a00090
  .word 0x46030000
  .word 0xe7a00090
  .word 0xc7a00094
  .word 0x46020000
  .word 0xe7a00094
  .word 0xc7a00098
  .word 0x46010000
  .word 0xe7a00098
  .word 0x8e420008
  .word 0x28410002
  .word 0x10200006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248444f8
  .word 0x24050151
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x16200006
  .word 0x00000000
  .word 0xafa00080
  .word 0xafa00084
  .word 0xafa00088
  .word 0x1000002c
  .word 0x00000000
  .word 0x8e43000c
  .word 0x2462ffff
  .word 0x00512023
  .word 0x04810003
  .word 0x00000000
  .word 0x8e420008
  .word 0x00822021
  .word 0x00711823
  .word 0x04610003
  .word 0x00000000
  .word 0x8e420008
  .word 0x00621821
  .word 0x00041040
  .word 0x00441021
  .word 0x00023080
  .word 0x8e450014
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x00a41021
  .word 0xc4410000
  .word 0x00a61021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00080
  .word 0x24a30004
  .word 0x00641021
  .word 0xc4410000
  .word 0x00661021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00084
  .word 0x24a30008
  .word 0x00641021
  .word 0xc4410000
  .word 0x00661021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00088
  .word 0x27a40080
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00080
  .word 0x461600c2
  .word 0xe7a30080
  .word 0xc7a00084
  .word 0x46160082
  .word 0xe7a20084
  .word 0xc7a00088
  .word 0x46160042
  .word 0xe7a10088
  .word 0xc7a00090
  .word 0x46030000
  .word 0xe7a00090
  .word 0xc7a00094
  .word 0x46020000
  .word 0xe7a00094
  .word 0xc7a00098
  .word 0x46010000
  .word 0xe7a00098
  .word 0x8e420008
  .word 0x28410002
  .word 0x10200006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248444f8
  .word 0x2405013a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e440008
  .word 0x2482ffff
  .word 0x16220006
  .word 0x00000000
  .word 0xafa00080
  .word 0xafa00084
  .word 0xafa00088
  .word 0x1000002c
  .word 0x00000000
  .word 0x8e43000c
  .word 0x2462ffff
  .word 0x00513823
  .word 0x04e10002
  .word 0x00000000
  .word 0x00e43821
  .word 0x2402fffe
  .word 0x00511023
  .word 0x00431821
  .word 0x04610002
  .word 0x00000000
  .word 0x00641821
  .word 0x00031040
  .word 0x00431021
  .word 0x00023080
  .word 0x8e450014
  .word 0x00071040
  .word 0x00471021
  .word 0x00022080
  .word 0x00a41021
  .word 0xc4410000
  .word 0x00a61021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00080
  .word 0x24a30004
  .word 0x00641021
  .word 0xc4410000
  .word 0x00661021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00084
  .word 0x24a30008
  .word 0x00641021
  .word 0xc4410000
  .word 0x00661021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00088
  .word 0x27a40080
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00080
  .word 0x461500c2
  .word 0xe7a30080
  .word 0xc7a00084
  .word 0x46150082
  .word 0xe7a20084
  .word 0xc7a00088
  .word 0x46150042
  .word 0xe7a10088
  .word 0xc7a00090
  .word 0x46030000
  .word 0xe7a00090
  .word 0xc7a00094
  .word 0x46020000
  .word 0xe7a00094
  .word 0xc7a00098
  .word 0x46010000
  .word 0xe7a00098
  .word 0x27a40090
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00090
  .word 0x46140002
  .word 0xe7a00090
  .word 0xc7a00094
  .word 0x46140002
  .word 0xe7a00094
  .word 0xc7a00098
  .word 0x46140002
  .word 0xe7a00098
  .word 0x8e42000c
  .word 0x2442ffff
  .word 0x00511823
  .word 0x04610003
  .word 0x00000000
  .word 0x8e420008
  .word 0x00621821
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x8e420020
  .word 0x00431021
  .word 0xc7a20090
  .word 0xc7a10094
  .word 0xc7a00098
  .word 0xe4420000
  .word 0xe4410004
  .word 0xe4400008
  .word 0x8e430008
  .word 0x24020002
  .word 0x10620007
  .word 0x00000000
  .word 0x24020003
  .word 0x1462000b
  .word 0x00000000
  .word 0x24020001
  .word 0x16220008
  .word 0x00000000
  .word 0x8e420000
  .word 0x8c420000
  .word 0xc4560014
  .word 0x4480a800
  .word 0xc4540018
  .word 0x10000006
  .word 0x00000000
  .word 0x8e420000
  .word 0x8c420000
  .word 0xc4560000
  .word 0xc4550008
  .word 0xc4540004
  .word 0xafa00090
  .word 0xafa00094
  .word 0xafa00098
  .word 0x26300001
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0000302d
  .word 0x0c07b364
  .word 0x00000000
  .word 0x4600d682
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0c07b3b0
  .word 0x00000000
  .word 0x4600b802
  .word 0x4600d5c0
  .word 0x0240202d
  .word 0x0200282d
  .word 0x0000302d
  .word 0x27a70080
  .word 0x0c07a0d8
  .word 0x00000000
  .word 0xc7a00080
  .word 0x461600c2
  .word 0xe7a30080
  .word 0xc7a00084
  .word 0x46160082
  .word 0xe7a20084
  .word 0xc7a00088
  .word 0x46160042
  .word 0xe7a10088
  .word 0xc7a00090
  .word 0x46030000
  .word 0xe7a00090
  .word 0xc7a00094
  .word 0x46020000
  .word 0xe7a00094
  .word 0xc7a00098
  .word 0x46010000
  .word 0xe7a00098
  .word 0x8e420008
  .word 0x28410002
  .word 0x10200006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248444f8
  .word 0x24050151
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x16000006
  .word 0x00000000
  .word 0xafa00080
  .word 0xafa00084
  .word 0xafa00088
  .word 0x1000002c
  .word 0x00000000
  .word 0x8e43000c
  .word 0x2462ffff
  .word 0x00502023
  .word 0x04810003
  .word 0x00000000
  .word 0x8e420008
  .word 0x00822021
  .word 0x00701823
  .word 0x04610003
  .word 0x00000000
  .word 0x8e420008
  .word 0x00621821
  .word 0x00041040
  .word 0x00441021
  .word 0x00023080
  .word 0x8e450010
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x00a41021
  .word 0xc4410000
  .word 0x00a61021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00080
  .word 0x24a30004
  .word 0x00641021
  .word 0xc4410000
  .word 0x00661021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00084
  .word 0x24a30008
  .word 0x00641021
  .word 0xc4410000
  .word 0x00661021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00088
  .word 0x27a40080
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00080
  .word 0x461400c2
  .word 0xe7a30080
  .word 0xc7a00084
  .word 0x46140082
  .word 0xe7a20084
  .word 0xc7a00088
  .word 0x46140042
  .word 0xe7a10088
  .word 0xc7a00090
  .word 0x46030000
  .word 0xe7a00090
  .word 0xc7a00094
  .word 0x46020000
  .word 0xe7a00094
  .word 0xc7a00098
  .word 0x46010000
  .word 0xe7a00098
  .word 0x8e420008
  .word 0x28410002
  .word 0x10200006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248444f8
  .word 0x2405013a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e440008
  .word 0x2482ffff
  .word 0x16020006
  .word 0x00000000
  .word 0xafa00080
  .word 0xafa00084
  .word 0xafa00088
  .word 0x1000002c
  .word 0x00000000
  .word 0x8e43000c
  .word 0x2462ffff
  .word 0x00503823
  .word 0x04e10002
  .word 0x00000000
  .word 0x00e43821
  .word 0x2402fffe
  .word 0x00501023
  .word 0x00431821
  .word 0x04610002
  .word 0x00000000
  .word 0x00641821
  .word 0x00031040
  .word 0x00431021
  .word 0x00023080
  .word 0x8e450010
  .word 0x00071040
  .word 0x00471021
  .word 0x00022080
  .word 0x00a41021
  .word 0xc4410000
  .word 0x00a61021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00080
  .word 0x24a30004
  .word 0x00641021
  .word 0xc4410000
  .word 0x00661021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00084
  .word 0x24a30008
  .word 0x00641021
  .word 0xc4410000
  .word 0x00661021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00088
  .word 0x27a40080
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00080
  .word 0x461500c2
  .word 0xe7a30080
  .word 0xc7a00084
  .word 0x46150082
  .word 0xe7a20084
  .word 0xc7a00088
  .word 0x46150042
  .word 0xe7a10088
  .word 0xc7a00090
  .word 0x46030000
  .word 0xe7a00090
  .word 0xc7a00094
  .word 0x46020000
  .word 0xe7a00094
  .word 0xc7a00098
  .word 0x46010000
  .word 0xe7a00098
  .word 0x27a40090
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00090
  .word 0x46170002
  .word 0xe7a00090
  .word 0xc7a00094
  .word 0x46170002
  .word 0xe7a00094
  .word 0xc7a00098
  .word 0x46170002
  .word 0xe7a00098
  .word 0x8e42000c
  .word 0x2442ffff
  .word 0x00511823
  .word 0x04610003
  .word 0x00000000
  .word 0x8e420008
  .word 0x00621821
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x8e42001c
  .word 0x00431021
  .word 0xc7a20090
  .word 0xc7a10094
  .word 0xc7a00098
  .word 0xe4420000
  .word 0xe4410004
  .word 0xe4400008
  .word 0xafa00090
  .word 0xafa00094
  .word 0xafa00098
  .word 0x26300001
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24060001
  .word 0x0c07b364
  .word 0x00000000
  .word 0x4600cdc2
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0c07b3b0
  .word 0x00000000
  .word 0x4600c002
  .word 0x4600bdc0
  .word 0x0240202d
  .word 0x0200282d
  .word 0x24060001
  .word 0x27a70080
  .word 0x0c07a0d8
  .word 0x00000000
  .word 0xc7a00080
  .word 0x461600c2
  .word 0xe7a30080
  .word 0xc7a00084
  .word 0x46160082
  .word 0xe7a20084
  .word 0xc7a00088
  .word 0x46160042
  .word 0xe7a10088
  .word 0xc7a00090
  .word 0x46030000
  .word 0xe7a00090
  .word 0xc7a00094
  .word 0x46020000
  .word 0xe7a00094
  .word 0xc7a00098
  .word 0x46010000
  .word 0xe7a00098
  .word 0x8e420008
  .word 0x28410002
  .word 0x10200006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248444f8
  .word 0x24050151
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x16000006
  .word 0x00000000
  .word 0xafa00080
  .word 0xafa00084
  .word 0xafa00088
  .word 0x1000002c
  .word 0x00000000
  .word 0x8e43000c
  .word 0x2462ffff
  .word 0x00502023
  .word 0x04810003
  .word 0x00000000
  .word 0x8e420008
  .word 0x00822021
  .word 0x00701823
  .word 0x04610003
  .word 0x00000000
  .word 0x8e420008
  .word 0x00621821
  .word 0x00041040
  .word 0x00441021
  .word 0x00023080
  .word 0x8e450014
  .word 0x00031040
  .word 0x00431021
  .word 0x00022080
  .word 0x00a41021
  .word 0xc4410000
  .word 0x00a61021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00080
  .word 0x24a30004
  .word 0x00641021
  .word 0xc4410000
  .word 0x00661021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00084
  .word 0x24a30008
  .word 0x00641021
  .word 0xc4410000
  .word 0x00661021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00088
  .word 0x27a40080
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00080
  .word 0x461400c2
  .word 0xe7a30080
  .word 0xc7a00084
  .word 0x46140082
  .word 0xe7a20084
  .word 0xc7a00088
  .word 0x46140042
  .word 0xe7a10088
  .word 0xc7a00090
  .word 0x46030000
  .word 0xe7a00090
  .word 0xc7a00094
  .word 0x46020000
  .word 0xe7a00094
  .word 0xc7a00098
  .word 0x46010000
  .word 0xe7a00098
  .word 0x8e420008
  .word 0x28410002
  .word 0x10200006
  .word 0x00000000
  .word 0x3c040068
  .word 0x248444f8
  .word 0x2405013a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e440008
  .word 0x2482ffff
  .word 0x16020006
  .word 0x00000000
  .word 0xafa00080
  .word 0xafa00084
  .word 0xafa00088
  .word 0x1000002c
  .word 0x00000000
  .word 0x8e43000c
  .word 0x2462ffff
  .word 0x00503823
  .word 0x04e10002
  .word 0x00000000
  .word 0x00e43821
  .word 0x2402fffe
  .word 0x00501023
  .word 0x00431821
  .word 0x04610002
  .word 0x00000000
  .word 0x00641821
  .word 0x00031040
  .word 0x00431021
  .word 0x00023080
  .word 0x8e450014
  .word 0x00071040
  .word 0x00471021
  .word 0x00022080
  .word 0x00a41021
  .word 0xc4410000
  .word 0x00a61021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00080
  .word 0x24a30004
  .word 0x00641021
  .word 0xc4410000
  .word 0x00661021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00084
  .word 0x24a30008
  .word 0x00641021
  .word 0xc4410000
  .word 0x00661021
  .word 0xc4400000
  .word 0x46000801
  .word 0xe7a00088
  .word 0x27a40080
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00080
  .word 0x461500c2
  .word 0xe7a30080
  .word 0xc7a00084
  .word 0x46150082
  .word 0xe7a20084
  .word 0xc7a00088
  .word 0x46150042
  .word 0xe7a10088
  .word 0xc7a00090
  .word 0x46030000
  .word 0xe7a00090
  .word 0xc7a00094
  .word 0x46020000
  .word 0xe7a00094
  .word 0xc7a00098
  .word 0x46010000
  .word 0xe7a00098
  .word 0x27a40090
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00090
  .word 0x46170002
  .word 0xe7a00090
  .word 0xc7a00094
  .word 0x46170002
  .word 0xe7a00094
  .word 0xc7a00098
  .word 0x46170002
  .word 0xe7a00098
  .word 0x8e43000c
  .word 0x2463ffff
  .word 0x00712023
  .word 0x04810003
  .word 0x00000000
  .word 0x8e430008
  .word 0x00832021
  .word 0x00041840
  .word 0x00641821
  .word 0x00032080
  .word 0x8e430024
  .word 0x00641821
  .word 0xc7a20090
  .word 0xc7a10094
  .word 0xc7a00098
  .word 0xe4620000
  .word 0xe4610004
  .word 0xe4600008
  .word 0xdfbf0060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7bb001c
  .word 0xc7ba0018
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001ECD90
f32 func_001ecd90(void* data, s32 index, s32 vectorSet)
{
    typedef struct RuntimeVectorHistory
    {
        u32 reserved[2];
        s32 count;
        s32 current;
        RuntimeVec3* vectors[2];
    } RuntimeVectorHistory;

    RuntimeVectorHistory* history;
    s32 sampleIndex;
    u32 vectorOffset;
    u32 sampleOffset;
    RuntimeVec3* firstSamples;
    RuntimeVec3* secondSamples;
    RuntimeVec3* sample;
    RuntimeVec3 delta;
    f32 sampleValue;

    history = data;
    if (index == history->count - 1)
    {
        func_0019d3f0(D_006844F8, 0x6fb);
    }

    sampleIndex = (-2 - index) + history->current;
    if (sampleIndex < 0)
    {
        sampleIndex += history->count;
    }
    __asm__ volatile ("sll %0, %1, 2"
                      : "=r"(vectorOffset)
                      : "r"(vectorSet));
    __asm__ volatile ("addu %0, %1, %2"
                      : "=r"(firstSamples)
                      : "r"(vectorOffset), "r"(history));
    firstSamples = *(RuntimeVec3**)((u8*)firstSamples + 0x10);
    delta = firstSamples[sampleIndex];
    sampleIndex = (history->current - 1) - index;
    if (sampleIndex < 0)
    {
        sampleIndex += history->count;
    }
    sampleOffset = sampleIndex * sizeof(RuntimeVec3);
    /* load-bearing: removing this file's 14 zero-width barriers loses 6 MATCHes (001E3940 nd0->32, 001E7AA0 ->9, 001E9920 ->5, 001ECD90 ->21, 001EDF10 ->407, 001EEB90 ->22) - measured W172 */
    __asm__ volatile ("" : "+r"(sampleOffset));
    secondSamples = history->vectors[vectorSet];
    sample = (RuntimeVec3*)((u8*)secondSamples + sampleOffset);
    sampleValue = sample->x;
    /* load-bearing: removing this file's 14 zero-width barriers loses 6 MATCHes (001E3940 nd0->32, 001E7AA0 ->9, 001E9920 ->5, 001ECD90 ->21, 001EDF10 ->407, 001EEB90 ->22) - measured W172 */
    __asm__ volatile ("" : "+f"(sampleValue));
    delta.x -= sampleValue;
    delta.y -= sample->y;
    delta.z -= sample->z;
    return func_004c6ac0(&delta);
}

// FUN_001ECEC0. Measure the bend between adjacent sampled directions.
f32 func_001ecec0(void* data, s32 index)
{
    typedef struct RuntimeVectorHistory
    {
        u32 reserved[2];
        s32 count;
        s32 current;
        RuntimeVec3* positions;
        RuntimeVec3* normals;
    } RuntimeVectorHistory;

    RuntimeVectorHistory* history;
    s32 sampleIndex;
    RuntimeVec3 first;
    RuntimeVec3 second;

    history = data;
    if (index == history->count - 1)
    {
        func_0019d3f0(D_006844F8, 0x70c);
    }

    sampleIndex = (history->current - 1) - index;
    if (sampleIndex < 0)
    {
        sampleIndex += history->count;
    }
    first = history->normals[sampleIndex];
    first.x -= history->positions[sampleIndex].x;
    first.y -= history->positions[sampleIndex].y;
    first.z -= history->positions[sampleIndex].z;
    func_004c69f0(&first, &first);

    sampleIndex = (-2 - index) + history->current;
    if (sampleIndex < 0)
    {
        sampleIndex += history->count;
    }
    second = history->normals[sampleIndex];
    second.x -= history->positions[sampleIndex].x;
    second.y -= history->positions[sampleIndex].y;
    second.z -= history->positions[sampleIndex].z;
    func_004c69f0(&second, &second);

    return (1.0f - (first.x * second.x + first.y * second.y + first.z * second.z)) / 2.0f;
}

// FUN_001ED080. Initialize the field interpolation target.
void func_001ed080(f32 value, RuntimeWork* work)
{
    *(u32*)((u8*)work + 0x38) = 0;
    *(f32*)((u8*)work + 0x40) = *(f32*)((u8*)work + 0x3c);
    *(f32*)((u8*)work + 0x44) = value;
    work->requestFlags |= 1;
}

// FUN_001ED0B0. Reset field interpolation state.
void func_001ed0b0(RuntimeWork* work)
{
    work->requestFlags = 0;
    *(u32*)((u8*)work + 0x3c) = 0;
    work->completedFlags = 0;
    work->state = 0;
}

// FUN_001ED0D0. Accumulate field interpolation time.
void func_001ed0d0(RuntimeWork* work, const f32* delta)
{
    *(f32*)((u8*)work + 0x3c) += *delta;
}

// FUN_001ED0F0. Interpolate one path color pair with the active fade.
void func_001ed0f0(f32 amount, const RuntimeWork* work, s32 channel, u8* output)
{
    const u8* colors[2] = {0};
    const u8* colorData;
    f32 inverseAmount;
    f32 duration;
    f32 fade;

    colorData = (const u8*)(channel << 3);
    colorData = *(const u8**)((const u8*)*(const void* const*)work + 4) + (u32)colorData;
    colors[0] = colorData + 8;
    colors[1] = colorData + 12;
    inverseAmount = 1.0f - amount;

    if ((*(const u32*)((const u8*)work + 4) & 1) != 0)
    {
        duration = *(const f32*)((const u8*)work + 0x44);
        if (duration > 0.0f)
        {
            fade = 1.0f -
                (*(const f32*)((const u8*)work + 0x3c) -
                 *(const f32*)((const u8*)work + 0x40)) /
                    duration;
            if (fade < 0.0f)
            {
                fade = 0.0f;
            }
        }
        else if (duration == 0.0f)
        {
            if (*(const f32*)((const u8*)work + 0x3c) >=
                *(const f32*)((const u8*)work + 0x40))
            {
                fade = 0.0f;
            }
            else
            {
                fade = 1.0f;
            }
        }

        output[0] = (u8)(fade * (amount * colors[1][0] + inverseAmount * colors[0][0]));
        output[1] = (u8)(fade * (amount * colors[1][1] + inverseAmount * colors[0][1]));
        output[2] = (u8)(fade * (amount * colors[1][2] + inverseAmount * colors[0][2]));
        output[3] = (u8)(fade * (amount * colors[1][3] + inverseAmount * colors[0][3]));
    }
    else
    {
        output[0] = (u8)(amount * colors[1][0] + inverseAmount * colors[0][0]);
        output[1] = (u8)(amount * colors[1][1] + inverseAmount * colors[0][1]);
        output[2] = (u8)(amount * colors[1][2] + inverseAmount * colors[0][2]);
        output[3] = (u8)(amount * colors[1][3] + inverseAmount * colors[0][3]);
    }
}

// FUN_001ED8A0. Clear generated colors, vertices, and render bounds.
void func_001ed8a0(void* work, void* renderData)
{
    typedef struct RuntimeVec4
    {
        f32 x;
        f32 y;
        f32 z;
        f32 w;
    } RuntimeVec4;
    typedef struct RuntimeGeometry
    {
        u8 reserved[0x14];
        RuntimeVec3* vertices;
    } RuntimeGeometry;
    typedef struct RuntimeRenderData
    {
        u8 reserved0[0x30];
        u8* colors;
        u8 reserved1[0x28];
        RuntimeGeometry* geometry;
    } RuntimeRenderData;

    RuntimeRenderData* render;
    RuntimeVec3* vertices;
    s32 colorIndex;
    u8* colors;
    RuntimeVec4 bounds;
    s32 count;
    s32 i;
    s16 type;

    render = (RuntimeRenderData*)renderData;
    type = *(s16*)((u8*)work + 0x48);
    switch (type)
    {
        case 0:
            count = *(s32*)(*(u8**)work + 0x0c) * 2 + 1;
            break;
        case 1:
            count = *(s32*)(*(u8**)work + 0x0c) * 3 + 6;
            break;
        case 2:
            count = *(s32*)(*(u8**)work + 0x0c) * 3 + 6;
            break;
    }

    colors = render->colors;
    for (colorIndex = 0; colorIndex < count; colorIndex++, colors += 4)
    {
        colors[0] = 0;
        colors[1] = 0;
        colors[2] = 0;
        colors[3] = 0;
    }

    vertices = render->geometry->vertices;
    for (i = 0; i < count; i++, vertices++)
    {
        vertices->x = 0.0f;
        vertices->y = 0.0f;
        vertices->z = 0.0f;
    }

    bounds.x = 0.0f;
    bounds.y = 0.0f;
    bounds.z = 0.0f;
    bounds.w = 1000000000;
    *(RuntimeVec4*)((u8*)render->geometry + 4) = bounds;
}

// FUN_001ED9E0. Check whether the field resource contains any entries.
s32 func_001ed9e0(void* workData)
{
    RuntimeWork* work;

    work = (RuntimeWork*)workData;
    return *(u16*)(uintptr_t)work->requestFlags != 0;
}

// FUN_001EDA00. Build and register a field render object.
void* func_001eda00(void* work, u32 value)
{
    RuntimeWork* initial;
    RuntimeWork* object;

    if (datGetFlag(0x1400) != 0)
    {
        return NULL;
    }
    initial = func_001ee2e0(work);
    initial->owner = (void*)(uintptr_t)value;
    object = func_001eeb90(initial);
    func_001eefc0(object);
    func_001eee40(object);
    return object;
}

// FUN_001EDA90. Update linked render matrices and cache their translations.
void func_001eda90(RuntimeWork* work)
{
    s32 i;
    RuntimeMatrix* firstMatrix;
    RuntimeMatrix* secondMatrix;
    u8* request;
    s32 offset;

    if (func_001ef000((RuntimeListNode*)work) == 0)
    {
        return;
    }

    firstMatrix = func_004c38c0();
    secondMatrix = func_004c38c0();
    i = 0;
    while (i < *(s16*)((u8*)(uintptr_t)work->requestFlags + 4))
    {
        __asm__ volatile ("lw %1, 4(%2)\n\tsll %0, %3, 3"
                          : "=r"(offset), "=r"(request)
                          : "r"(work), "r"(i));
        func_00318d10(
            *(void**)(request + 0x20),
            *(void**)((u8*)*(void**)(request + 0x18) + offset),
            firstMatrix);
        func_00318d10(
            *(void**)((u8*)(uintptr_t)work->requestFlags + 0x20),
            *(void**)((u8*)*(void**)((u8*)(uintptr_t)work->requestFlags + 0x18) +
                      offset + 4),
            secondMatrix);
        ((RuntimeVec3*)(uintptr_t)work->selection)[i * 2] =
            *(RuntimeVec3*)((u8*)firstMatrix + 0x30);
        ((RuntimeVec3*)(uintptr_t)work->selection)[i * 2 + 1] =
            *(RuntimeVec3*)((u8*)secondMatrix + 0x30);
        i++;
    }

    work->flags |= 2;
    func_004c3880(firstMatrix);
    func_004c3880(secondMatrix);
}

/* W419 accepted: reversing the four scalar declarations and deferring activeEntry assignment reduced func_001edbe0 from nd464/object752/window752 (61.70%) to nd461/object752/window752 (61.30%); no size change. */
/* W419 rejected: direct command/offset expressions were nd439/object756/window752 (58.07%, over window), and direct entry expressions were nd577/object768/window752 (75.13%, over window). */
// FUN_001EDBE0
#ifndef PC_BUILD
asm void func_001edbe0(RuntimeRenderCollection* work)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x0000802d
  .word 0x8c830004
  .word 0x8c630020
  .word 0xc46100f4
  .word 0x44800000
  .word 0x00000000
  .word 0x46010032
  .word 0x45010002
  .word 0x00000000
  .word 0x24100001
  .word 0x0000882d
  .word 0x10000098
  .word 0x00000000
  .word 0x1200005b
  .word 0x00000000
  .word 0x00119940
  .word 0x8e420010
  .word 0x00532021
  .word 0x27a50088
  .word 0x0c07aea0
  .word 0x00000000
  .word 0x8e420000
  .word 0x00401027
  .word 0x30420008
  .word 0x10400050
  .word 0x00000000
  .word 0x8e420010
  .word 0x00531021
  .word 0x8c430000
  .word 0x30620002
  .word 0x1040004a
  .word 0x00000000
  .word 0x30620008
  .word 0x10400012
  .word 0x00000000
  .word 0x00111040
  .word 0x00511021
  .word 0x000218c0
  .word 0x8e420014
  .word 0x00432821
  .word 0x001110c0
  .word 0x00511021
  .word 0x00021040
  .word 0x00511021
  .word 0x00021880
  .word 0x8e420008
  .word 0x00432021
  .word 0x24a6000c
  .word 0x0c07ae48
  .word 0x00000000
  .word 0x10000036
  .word 0x00000000
  .word 0x0c130e30
  .word 0x00000000
  .word 0x0040a02d
  .word 0x8e420004
  .word 0x8c430020
  .word 0x946200d8
  .word 0x00401027
  .word 0x30428000
  .word 0x1040000a
  .word 0x00000000
  .word 0x0060202d
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x0280202d
  .word 0x0040282d
  .word 0x0c130ca8
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x0280202d
  .word 0x24650090
  .word 0x0c130ca8
  .word 0x00000000
  .word 0x00111040
  .word 0x00511021
  .word 0x000298c0
  .word 0x8e420014
  .word 0x00532821
  .word 0x27a40060
  .word 0x0280302d
  .word 0x0c131af8
  .word 0x00000000
  .word 0x8e420014
  .word 0x00531021
  .word 0x27a4006c
  .word 0x2445000c
  .word 0x0280302d
  .word 0x0c131af8
  .word 0x00000000
  .word 0x001110c0
  .word 0x00511021
  .word 0x00021040
  .word 0x00511021
  .word 0x00021880
  .word 0x8e420008
  .word 0x00432021
  .word 0x27a50060
  .word 0x27a6006c
  .word 0x0c07ae48
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c130e20
  .word 0x00000000
  .word 0x12000005
  .word 0x00000000
  .word 0xc78080e4
  .word 0xe7a00084
  .word 0x10000002
  .word 0x00000000
  .word 0xafa00084
  .word 0x8e420000
  .word 0x30420010
  .word 0x1040001b
  .word 0x00000000
  .word 0x92450020
  .word 0x92440021
  .word 0x92430022
  .word 0x92420023
  .word 0xa3a50080
  .word 0xa3a40081
  .word 0xa3a30082
  .word 0xa3a20083
  .word 0x93a30083
  .word 0x240200ff
  .word 0x14620003
  .word 0x00000000
  .word 0x240200fe
  .word 0xa3a20083
  .word 0x001118c0
  .word 0x8e42000c
  .word 0x00431021
  .word 0x8c460004
  .word 0x93a50080
  .word 0x93a40081
  .word 0x93a30082
  .word 0x93a20083
  .word 0xa0c50004
  .word 0xa0c40005
  .word 0xa0c30006
  .word 0xa0c20007
  .word 0x001110c0
  .word 0x00511021
  .word 0x00021040
  .word 0x00511021
  .word 0x00029880
  .word 0x8e420008
  .word 0x00532021
  .word 0x27a50084
  .word 0x0c07b434
  .word 0x00000000
  .word 0x001118c0
  .word 0x8e42000c
  .word 0x00431021
  .word 0x8c420000
  .word 0x8c420018
  .word 0xafa2008c
  .word 0x8e420008
  .word 0x00532021
  .word 0x27a5008c
  .word 0x0c07a6bc
  .word 0x00000000
  .word 0x26310001
  .word 0x8e430004
  .word 0x84630004
  .word 0x0223182a
  .word 0x1460ff65
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001EDED0. Mark an active field runtime node for processing.
void func_001eded0(RuntimeWork* work)
{
    if (func_001ef000((RuntimeListNode*)work) != 0)
    {
        work->flags |= 4;
    }
}

// FUN_001EDF10. Render every geometry entry with temporary render state.
void func_001edf10(void* workData)
{
    typedef struct RuntimeRenderCollection
    {
        u32 flags;
        u8* input;
        u8* entries;
        void** renderObjects;
        u8* commands;
    } RuntimeRenderCollection;
    typedef void (*GetRenderStateFn)(s32 state, u32* value);
    typedef void (*SetRenderStateFn)(s32 state, u32 value);

    RuntimeRenderCollection* work;
    void* geometry;
    void* owner;
    void* matrix;
    u32 stateApi;
    s32 index;
    u32 state20;
    u32 state10;
    u32 state11;
    u32 state6;
    u32 state8;
    u32 state14;

    work = (RuntimeRenderCollection*)workData;
    __asm__ volatile ("lui %0, 0x96\n\taddiu %0, %0, 0x94"
                      : "=r"(stateApi));
    (*(GetRenderStateFn*)stateApi)(0x14, &state20);
    (*(GetRenderStateFn*)stateApi)(0x0a, &state10);
    (*(GetRenderStateFn*)stateApi)(0x0b, &state11);
    (*(GetRenderStateFn*)stateApi)(8, &state8);
    (*(GetRenderStateFn*)stateApi)(6, &state6);
    (*(GetRenderStateFn*)stateApi)(0x0e, &state14);

    __asm__ volatile ("lui %0, 0x96\n\taddiu %0, %0, 0x90"
                      : "=r"(stateApi));
    (*(SetRenderStateFn*)stateApi)(9, 2);
    (*(SetRenderStateFn*)stateApi)(0x14, 1);
    (*(SetRenderStateFn*)stateApi)(8, 0);
    (*(SetRenderStateFn*)stateApi)(6, 1);
    (*(SetRenderStateFn*)stateApi)(0x0e, 0);
    (*(SetRenderStateFn*)stateApi)(0x0c, 1);

    index = 0;
    while (index < *(s16*)(work->input + 4))
    {
        func_004d7f60(2, 0x48);
        func_004d7f60(3, 0x71801);

        geometry = *(void**)((u8*)work->renderObjects[index * 2] + 4);
        if ((*(u32*)(work->commands + index * 0x20) & 8) != 0)
        {
            func_004cb930(geometry);
        }
        else
        {
            func_004cb930(geometry);
            owner = *(void**)(work->input + 0x20);
            if ((~*(u16*)((u8*)owner + 0xd8) & 0x8000) != 0)
            {
                matrix = func_00318b60(owner);
                func_004cb7f0(geometry, matrix, 0);
            }
            else
            {
                func_004cb7f0(geometry, (u8*)owner + 0x90, 0);
            }
        }
        /* load-bearing: removing this file's 14 zero-width barriers loses 6 MATCHes (001E3940 nd0->32, 001E7AA0 ->9, 001E9920 ->5, 001ECD90 ->21, 001EDF10 ->407, 001EEB90 ->22) - measured W172 */
        __asm__ volatile ("" : "+r"(index));
        {
            void* callbackObject;
            void** renderObjects;
            renderObjects = work->renderObjects;
            /* load-bearing: removing this file's 14 zero-width barriers loses 6 MATCHes (001E3940 nd0->32, 001E7AA0 ->9, 001E9920 ->5, 001ECD90 ->21, 001EDF10 ->407, 001EEB90 ->22) - measured W172 */
            __asm__ volatile ("" : "+r"(renderObjects));
            callbackObject = *(void**)((u8*)renderObjects + index * 8);
            ((void (*)(void*))*(void**)((u8*)callbackObject + 0x48))(
                callbackObject);
        }
        index++;
    }

    __asm__ volatile ("lui %0, 0x96\n\taddiu %0, %0, 0x90"
                      : "=r"(stateApi));
    (*(SetRenderStateFn*)stateApi)(0x0e, state14);
    (*(SetRenderStateFn*)stateApi)(0x0b, state11);
    (*(SetRenderStateFn*)stateApi)(0x0a, state10);
    (*(SetRenderStateFn*)stateApi)(0x14, state20);
    (*(SetRenderStateFn*)stateApi)(8, state8);
    (*(SetRenderStateFn*)stateApi)(6, state6);
}

// FUN_001EE1D0. Activate a field runtime node and its owner.
void func_001ee1d0(RuntimeWork* work)
{
    if (func_001ef000((RuntimeListNode*)work) != 0)
    {
        work->flags |= 8;
        func_001ef340(*(void**)((u8*)(uintptr_t)work->requestFlags + 0x20));
    }
}

// FUN_001EE220. Reserved field-runtime hook.
void func_001ee220(void)
{
}

// FUN_001EE230. Update the render color and mark it dirty.
void func_001ee230(RuntimeWork* work, const u8* color)
{
    typedef struct RuntimeColor
    {
        u8 red;
        u8 green;
        u8 blue;
        u8 alpha;
    } RuntimeColor;
    typedef struct RuntimeColorWork
    {
        u32 flags;
        u8 reserved[0x1c];
        RuntimeColor color;
    } RuntimeColorWork;
    RuntimeColorWork* colorWork;
    const RuntimeColor* requested;

    colorWork = (RuntimeColorWork*)work;
    requested = (const RuntimeColor*)color;
    if (func_001ef000((RuntimeListNode*)work) == 0)
    {
        return;
    }

    if (colorWork->color.red != requested->red ||
        colorWork->color.green != requested->green ||
        colorWork->color.blue != requested->blue ||
        colorWork->color.alpha != requested->alpha)
    {
        colorWork->color = *requested;
        colorWork->flags |= 0x10;
    }
}










/* Retail request completion and all thirteen top-level runtime states are
 * reconstructed, including the nested result and persona resource flows. */
