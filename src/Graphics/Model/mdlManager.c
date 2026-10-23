#include "Graphics/Model/mdlManager.h"
#include "Graphics/Model/mdlFile.h"
#include "rw/rpworld.h"
#include "rw/rphanim.h"
#include "temporary.h"
#include "h_cdvd.h"

f32 gFrameDuration = (1.0f / 30.0f);   // 007cadd4. 33.3ms. Not sure where to place this

static Model* sMdlListTails[MODEL_TYPE_MAX]; // 009571f0. Tails of each model type
typedef struct MdlShortVec8 {
    short values[8];
} MdlShortVec8;
typedef struct MdlShortVec10 {
    short values[10];
} MdlShortVec10;

void mdlStreamInit(Model* mdl);
void mdlStreamSetRmdFileMemory(Model* mdl, const MdlRmdFileMemory* rmd);
void mdlStreamRequestCdvd(Model* mdl, const char* path);
void mdlStreamDestroy(Model* mdl);
void mdl003196d0(Model* mdl, u16 wpnIdx, s32 value);
void mdl00319900(Model* mdl, u32 value);
void mdl003164c0(void* param_1);
extern RtAnimAnimation DAT_009571d0;
#pragma alias DAT_009571d0_abs DAT_009571d0
extern u8 DAT_009571d0_abs[];
extern u8 DAT_0069abb8[];
extern void* jtbl_00960178[];

extern RwMatrix* FUN_004c2f30(RwMatrix* dst, const RwMatrix* left, const RwMatrix* right);
extern RwV3d* FUN_004c6be0(RwV3d* dst, const RwV3d* src, const RwMatrix* matrix);
extern s32 func_001a6c00(void* object, const char* name);
extern void func_001a13b0(void);
extern char DAT_007cca08[1];
#pragma alias DAT_007cca08_abs DAT_007cca08
extern char DAT_007cca08_abs[];
extern const char DAT_0069b210[];
extern char DAT_007cca18[1];
extern char DAT_007cca10[1];
#define MDL_PATH_FORMAT(addr) (DAT_0069b210 + ((addr) - 0x69b210))
void* FUN_00491cc0(RpClump* clump);
void FUN_00491ea0(RpClump* clump);
void* FUN_001a7570(RpClump* clump);
void FUN_001a7710(void* object);
void FUN_001ef340(Model* mdl);
void FUN_004cb6e0(void* object, void (*callback)(void), void* data);
void FUN_001a7170(RpClump* clump, RpHAnimHierarchy* hierarchy);
RpHAnimHierarchy* FUN_00466480(RpHAnimHierarchy* hierarchy, u32 flags, u32 value, s32 index);
void* func_0031d700(void* resource);
void func_00320290(void* resource);
void* func_0031e0b0(void* resource);
void func_00313230(MdlAnimSlot* slot);
void func_003132c0(u8* slot);
void func_00313be0(MdlAnimEntryTable* table);
void func_00313e60(void* data);
void func_003143c0(u8* state, RpClump* clump);
void func_00314d30(void* state);
void func_00314730(u8* state, f32 frame);
#pragma alias func_00314730_ptrfirst func_00314730
void func_00314730_ptrfirst(u8* state, f32 frame);
void func_00314850(RpClump* clump, void* state, s16 id, u16 blendFrameCount, u16 flags);
void func_003138e0(MdlAnim* anim, s16 id, u16 blendFrameCount, u16 flags);
void* func_00313490(MdlAnimSlot* slot, void* hierarchy);
u32 func_00318620(Model* mdl, u16 slotIdx, s16 id);
void func_003196f0(Model* mdl, u16 wpnIdx);
void func_003197c0(Model* mdl, RwMatrix* matrix);
u32 func_0031b220(Model* mdl);
u32 func_0031ebe0(void* data);
void func_0031ded0(void* data);
void func_0031ee80(void* dst, const void* src);
void func_0031eee0(void* data);
void func_0031eeb0(void* data);
void func_0031dda0(void* data, const RwV3d* scale);
void func_0031d9c0(void* data, Model* mdl);
void func_0031ef80(void* data, s16 id, u16 blendFrameCount);
void FUN_004cb7f0(RwFrame* frame, const RwMatrix* matrix, u32 flags);
void FUN_004b74c0(f32 frame, RtAnimInterpolator* interpolator);
#pragma alias func_004b74c0_typed func_004b74c0
extern void func_004b74c0_typed(f32 frame, void* interpolator);
#pragma alias func_004b74c0_frame FUN_004b74c0
extern void func_004b74c0_frame(f32 frame, u32 interpolator);
#pragma alias func_004b74c0_ptrfirst FUN_004b74c0
extern void func_004b74c0_ptrfirst(u32 interpolator, f32 frame);
#pragma alias func_004b7240_frame FUN_004b7240
extern u32 func_004b7240_frame(f32 frame, u32 interpolator);
#pragma alias func_00320640_frame FUN_00320640
extern void func_00320640_frame(f32 arg0, f32 frame, u32 interpolator);
extern void func_003204a0(int *param_4, f32 param_1, f32 param_2, f32 param_3, int *param_5);
extern void func_00320380(int *param_2, f32 param_1);
extern void func_00320770(int *param_1);
extern f32 func_00320810(void* animation);
void func_00316970(Model* mdl);
u32 func_003115a0(void* param_1, u32* param_2);
u32 func_00318d10(u8* mdl, u32 slot, u32* matrix);
void func_00311480(MdlAnimResourceSet* resources, Model* mdl);
extern void func_004932c0(u32 object, u32 arg1, u32 arg2);
#pragma alias func_004916d0_typed func_004916d0
extern void func_004916d0_typed(u64 object, void* callback, void* data);
#pragma alias func_004916d0_callback func_004916d0
extern void func_004916d0_callback(RpClump* object, void (*callback)(void), void* data);
void func_0031f5c0(void* data);

/* Removing this loses FUN_00311310 (MATCH nd0 -> MISMATCH nd178) - measured W161. */

void FUN_0048a2a0(void);
u64 FUN_004916d0(void *param_1,void *param_2,void *param_3);
u64 FUN_00316410(u64 param_1);
void FUN_004c3760(void);
typedef struct MdlAnimResourceEntry
{
    void* resource;
    u8 flags;
    u8 unk_05[3];
} MdlAnimResourceEntry;
typedef int (*code)(...);
typedef u8 bool;
#define CONCAT44(hi, lo) ((((u64)(hi)) << 32) | (u32)(lo))
#define CONCAT11(hi, lo) ((u16)((((u16)(u8)(hi)) << 8) | (u8)(lo)))
extern s32 DAT_0096012c;
extern u8 LAB_00464760;
extern f32 DAT_009571c0;
extern f32 DAT_009571c4;
extern u8 DAT_009571c0_abs[];
extern u8 DAT_009571c4_abs[];
extern float fGpffff80d0;
extern float fGpffff80f4;
extern float fGpffff814c;
extern float fGpffff8048;
extern float fGpffff8118;
extern float fGpffff8050;
extern float fGpffff8054;
extern float fGpffff8058;
extern float fGpffff8150;
extern float fGpffff8154;
extern float fGpffff8158;
extern s32 DAT_009571b8;
extern float* DAT_009571bc;
extern code DAT_009571b0;
extern s32 DAT_009571b4;
extern code DAT_009571b0_abs[];
extern u8 DAT_009571b4_abs[];
extern u8 DAT_009571b8_abs[];
extern u8 DAT_009571bc_abs[];
extern float fGpffff80e4;
extern char gp0xffff9d10;
extern u8 LAB_003131f8;
extern f32 DAT_007cada4;
extern void (*DAT_0096017c[])(...);
extern u8 LAB_0031379c;
extern u8 LAB_00313790;
extern u8 LAB_00313b48;
extern u8 LAB_00314020;
extern u8 LAB_00314060;
extern u8 LAB_00314020_abs[];
extern u8 LAB_00314060_abs[];
extern u8 LAB_0031494c;
extern u8 LAB_003140a0;
extern u8 LAB_003140b0;
extern u8 LAB_003140a0_abs[];
extern u8 LAB_003140b0_abs[];
extern f32 DAT_007cadd4;
extern f32 DAT_007caf0c;
extern f32 DAT_007caf10;
extern f32 DAT_007cad38;
extern f32 DAT_007cae08;
extern f32 DAT_007cad40;
extern f32 DAT_007cad44;
extern f32 DAT_007caed0;
extern u32 DAT_007cada0;
extern void (*DAT_00960090[])(...);
 extern u8 DAT_00960090_abs[];
extern void (*DAT_00960094[])(...);
extern u32 DAT_00960070;
extern f32 DAT_007caf08;
extern void* (*DAT_00960178[])(...);
extern u32 DAT_0069aee0;
extern u32 DAT_0069aee2;
extern u32 DAT_0069aee4;
extern u8 LAB_0031b594;
extern u8 gp0xffff9d20;
extern u32 DAT_0069af00;
extern u32 DAT_0069b190;
extern u8 DAT_0069b190_abs[];
extern u8 LAB_0031bfb8;
extern u32 DAT_0069b1b0;
extern u8 DAT_0069b1b0_abs[];
extern u32 DAT_0069b0d0;
extern u8 DAT_0069b0d0_abs[];
extern u32 DAT_0069b1c0;
extern u8 DAT_0069b1c0_abs[];
extern u32 DAT_0069b1d0;
extern u8 DAT_0069b1d0_abs[];
extern u32 DAT_0069b1e0;
extern u8 DAT_0069b1e0_abs[];
extern void* PTR_PTR_0069ae80[];
extern void* RpMaterialGetUserDataArray(void* material,int data);
extern char* RpUserDataArrayGetName(void* userData);
extern int RpUserDataArrayGetFormat(void* userData);
extern f32 func_0052e9e8(f32 value);
extern f32 func_0052ea18_typed(f32 x, f32 y);
u32 func_00311640(RtAnimInterpolator* param_2, RtAnimInterpolator* param_3,
                  RtAnimInterpolator* param_4, f32 param_1);
u32 func_00311730(u32 *param_1,u16 *param_2,u16 *param_3,int param_4);
void func_00312c70(u8* param_1,int param_2);
void func_00312d40(u8* param_1,u8* param_2);
void func_00312e80(int param_1);
u32 func_00312f90(u32 param_1);
u32 func_00313090(u32 param_1,u32 param_2);
void func_00313ca0(int *param_1,u32 param_2);
int func_00313f40(int param_1,void* param_2);
void* func_00313fe0(void* param_1,u32 *param_2);
void* func_003140c0(void* param_1,u16 *param_2);
void* func_00314170(void* param_1, void* param_2);
u32 func_003142b0(void* param_1);
void* func_00314510(void* param_1);
u32 func_00314650(u32 param_1);
void* func_00315010(void* object, void* data);
u32 func_00315090(RwMatrix* param_1,u16 *param_2,u16 param_3,int param_4);
void func_003151d0(Model* param_1);
void func_00315c20(int param_1);
Model* func_00315ed0(Model* param_1);
u32 func_00315f50(void* param_1,u32 *param_2);
void func_00316320(u64 param_1,u32* param_2,u16 param_3);
u32 func_00316360(void* param_1,u32 *param_2);
void func_003164f0(int param_1,int param_2);
void* func_003165e0(void* param_1);
Model* func_00316c70(u16 param_1,u16 param_2,void* param_3,u32 param_4);
void func_003176c0(Model* param_1);
u32 func_003186e0(int param_1,u32 param_2,short param_3);
void func_00318b10(u32 *param_1);
u32 func_00318b90(u32 param_1);
u32 func_00318d10(u8* param_1,u32 param_2,u32* param_3);
bool func_00318ed0(u8* param_1,u32 param_2,RwV3d *param_3);
u32 func_00318fc0(int param_1);
void func_00319230(int param_1,u16 param_2);
void func_00319490(int param_1,u32 param_2,u16 param_3,u16 param_4,u32 param_5);
void func_003195f0(int param_1,u32 param_2,Model* param_3);
u32 func_00319970(Model* param_1);
int func_0031aad0(Model* param_1);
void func_0031b470(void);
void func_0031b4a0(char* param_1,u16 param_2);
u32 func_0031b680(int param_1,int param_2,int *param_3,int *param_4);
void func_0031b820(u32 param_1,u32 param_2);
extern u32 func_0031b680_u32ptr(int param_1,int param_2,u32 *param_3,u32 *param_4);
u32 func_0031be80(u32 param_1);
void func_0031c000(char* param_1,u32 param_2);
u32 func_0031c1d0(int param_1);
u32 func_0031c7e0(int param_1);
u32 func_0031c820(u16 param_1,u16 param_2,char* param_3);
void FUN_0031e4d0(int *param_1,u16 param_2,u16 param_3);

#pragma opt_loop_invariants on
// FUN_00311310
MdlAnimEntryTable* mdlCreateAnimEntryTable(u16 animCount)
{
    MdlAnimEntryTable* table;
    u32 size;
    u32 i;
    f32 one;
    u32 matrixFlags;

    size = animCount * sizeof(MdlAnimEntry) + sizeof(MdlAnimEntryTable);
    table = (MdlAnimEntryTable*)RwMalloc(size, rwMEMHINTDUR_GLOBAL);
    memset(table, 0, size);

    table->entries = (MdlAnimEntry*)((u8*)table + sizeof(MdlAnimEntryTable));
    table->count = animCount;

    one = 1.0f;
    matrixFlags = rwMATRIXINTERNALIDENTITY | rwMATRIXTYPEORTHONORMAL;
    for (i = 0; i < table->count; i++)
    {
        table->entries[i].identityMat.right.x = table->entries[i].identityMat.up.y =
            table->entries[i].identityMat.at.z = one;
        table->entries[i].identityMat.right.y = table->entries[i].identityMat.right.z =
            table->entries[i].identityMat.up.x = 0.0f;
        table->entries[i].identityMat.up.z = table->entries[i].identityMat.at.x =
            table->entries[i].identityMat.at.y = 0.0f;
        table->entries[i].identityMat.pos.x = table->entries[i].identityMat.pos.y =
            table->entries[i].identityMat.pos.z = 0.0f;
        table->entries[i].identityMat.flags |= matrixFlags;
    }

    table->unk_06 = 1;

    return table;
}
#pragma opt_loop_invariants reset


// FUN_00311480


void func_00311480(MdlAnimResourceSet* param_1,Model* param_2)
{
  int iVar1;
  u8 *p;

  p = (u8 *)param_1;
  iVar1 = *(int *)(p + 0x18);
  if (*(int *)(p + 0x1c) != iVar1) {
    if (iVar1 != 0) {
      func_0031df80(iVar1);
    }
    if (*(int *)(p + 0x1c) != 0) {
      func_0031ded0((void *)*(int *)(p + 0x1c));
    }
    *(u32 *)(p + 0x18) = *(u32 *)(p + 0x1c);
  }

  if ((*(int *)(p + 0x18) != 0) && (*(u16 *)(p + 0x30) == 0)) {
    func_0031dda0((void *)*(int *)(p + 0x18), (const RwV3d *)(p + 8));
    func_0031d9c0((void *)*(int *)(p + 0x18), param_2);
  }

  if (*(int *)(p + 0x2c) != 0) {
    iVar1 = *(int *)(p + 0x24);
    if (iVar1 != 0) {
      func_0031e2c0(iVar1);
    }
    if (*(int *)(p + 0x28) != 0) {
      func_0031e270(*(int *)(p + 0x28), param_2);
    }
    *(u32 *)(p + 0x24) = *(u32 *)(p + 0x28);
    *(u32 *)(p + 0x2c) = 0;
  }

  if ((*(int *)(p + 0x24) != 0) && (*(u16 *)(p + 0x30) == 0)) {
    func_0031e1b0(*(int *)(p + 0x24), param_2);
  }

  if (*(u16 *)(p + 0x30) > 0) {
    *(u16 *)(p + 0x30) = *(u16 *)(p + 0x30) + -1;
  }
}


// FUN_003115A0


u32 func_003115a0(void* param_1, u32* param_2)
{
    u32 value;

    value = func_00466710();
    if (value != 0)
    {
        goto store_value;
    }
    func_004cb6e0(param_1, (void (*)())func_003115a0, param_2);
    return (u32)param_1;
store_value:
    *param_2 = value;
    return 0;
}

// FUN_00311610
void* mdl00311610(void* param_1)
{
    FUN_0048a2a0();
    return param_1;
}

// FUN_00311640
u32 func_00311640(RtAnimInterpolator* param_2, RtAnimInterpolator* param_3,
                  RtAnimInterpolator* param_4, f32 param_1)
{
    s32 frame;
    s32 offset2;
    s32 offset3;
    s32 offset4;
    f32 alpha;
    u8* out;
    u8* in1;
    u8* in2;
    u8* in2Out;
    offset2 = param_2->offsetInParent;
    offset3 = param_3->offsetInParent;
    offset4 = param_4->offsetInParent;
    for (frame = offset2; frame < param_2->numNodes + param_2->offsetInParent; frame++)
    {
        in2 = (u8*)(param_4->currentInterpKeyFrameSize * (frame - offset4) -
                     (0u - (u32)param_4)) + 0x4c;
        out = (u8*)(param_2->currentInterpKeyFrameSize * (frame - offset2) -
                    (0u - (u32)param_2));
        in1 = (u8*)(param_3->currentInterpKeyFrameSize * (frame - offset3) -
                    (0u - (u32)param_3));
        alpha = *(f32*)(in2 + 0x30);
        param_2->keyFrameBlendCB(out + 0x4c, in1 + 0x4c, in2,
                                 param_1 * alpha);
    }
    return 1;
}

#pragma push
#pragma opt_loop_invariants on
#pragma opt_lifetimes on
/* W419 liveness negatives: baseline nd4240/object5328/window5440/rate0.795796; opt_lifetimes off nd4317/object5368/window5440/rate0.804210; tail declaration reorder nd4240/object5328/window5440/rate0.795796; sink fVar22 nd4300/object5304/window5440/rate0.810709; sink fVar20 nd4248/object5312/window5440/rate0.799699; both sinks nd4330/object5316/window5440/rate0.814522. */
// FUN_00311730


#ifndef PC_BUILD
asm u32 func_00311730(u32 *param_1,u16 *param_2,u16 *param_3,int param_4)
{
  .set noreorder
  .word 0x27bdfb60
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
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0xafa5011c
  .word 0x00c0982d
  .word 0xafa70110
  .word 0x0000302d
  .word 0x0000282d
  .word 0x8c950000
  .word 0x32a20001
  .word 0x10400013
  .word 0x00000000
  .word 0x8e83001c
  .word 0x2402ffff
  .word 0x1062000f
  .word 0x00000000
  .word 0x8e840018
  .word 0x00031980
  .word 0x8c820008
  .word 0x00439021
  .word 0x32a22000
  .word 0x10400028
  .word 0x00000000
  .word 0x32a24000
  .word 0x10400025
  .word 0x00000000
  .word 0x24060001
  .word 0x8c850014
  .word 0x10000021
  .word 0x00000000
  .word 0x32a24000
  .word 0x1040001b
  .word 0x00000000
  .word 0x3c023f80
  .word 0xafa203f8
  .word 0xafa203e4
  .word 0xafa203d0
  .word 0xafa003e0
  .word 0xafa003d8
  .word 0xafa003d4
  .word 0xafa003f4
  .word 0xafa003f0
  .word 0xafa003e8
  .word 0xafa00408
  .word 0xafa00404
  .word 0xafa00400
  .word 0x8fa303dc
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xafa203dc
  .word 0x27b203d0
  .word 0x32a22000
  .word 0x10400008
  .word 0x00000000
  .word 0x24060001
  .word 0x8e850014
  .word 0x10000004
  .word 0x00000000
  .word 0x24060001
  .word 0x8e850014
  .word 0x27b20410
  .word 0x10c00050
  .word 0x00000000
  .word 0x10a0003c
  .word 0x00000000
  .word 0x8cb00004
  .word 0x12000039
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c132b8c
  .word 0x00000000
  .word 0x14400011
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x27a60410
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
  .word 0x10000036
  .word 0x00000000
  .word 0x26060010
  .word 0x27a50410
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
  .word 0x8e100004
  .word 0x10000011
  .word 0x00000000
  .word 0x27a50410
  .word 0x27a402d0
  .word 0x24030004
  .word 0x78a20000
  .word 0x24a50010
  .word 0x2463ffff
  .word 0x7c820000
  .word 0x24840010
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x27a40410
  .word 0x27a502d0
  .word 0x26060010
  .word 0x0c130bcc
  .word 0x00000000
  .word 0x8e100004
  .word 0x1600ffef
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x3c023f80
  .word 0xafa20438
  .word 0xafa20424
  .word 0xafa20410
  .word 0xafa00420
  .word 0xafa00418
  .word 0xafa00414
  .word 0xafa00434
  .word 0xafa00430
  .word 0xafa00428
  .word 0xafa00448
  .word 0xafa00444
  .word 0xafa00440
  .word 0x8fa3041c
  .word 0x3c020002
  .word 0x34420003
  .word 0x00621025
  .word 0xafa2041c
  .word 0x32a22000
  .word 0xafa200f0
  .word 0x1040001a
  .word 0x00000000
  .word 0x8e820014
  .word 0x8c4300a0
  .word 0x90620003
  .word 0x30420003
  .word 0x14400014
  .word 0x00000000
  .word 0x3c040096
  .word 0x2484012c
  .word 0x8c820000
  .word 0xac620008
  .word 0x8e820014
  .word 0x8c4200a0
  .word 0xac44000c
  .word 0x8e820014
  .word 0x8c4200a0
  .word 0x24430008
  .word 0x8c820000
  .word 0xac430004
  .word 0x8e820014
  .word 0x8c4300a0
  .word 0x24620008
  .word 0xac820000
  .word 0x90620003
  .word 0x34420002
  .word 0xa0620003
  .word 0x8e830020
  .word 0x8c62003c
  .word 0x7fa200e0
  .word 0x8c620024
  .word 0x7fa200d0
  .word 0x27b60354
  .word 0x8e970010
  .word 0x8e910008
  .word 0x2470004c
  .word 0x0000f02d
  .word 0x32a21000
  .word 0x7fa200c0
  .word 0x32a24000
  .word 0x7fa200b0
  .word 0x10000470
  .word 0x00000000
  .word 0x3c030046
  .word 0x24634760
  .word 0x7ba200e0
  .word 0x1462003f
  .word 0x00000000
  .word 0xc6030008
  .word 0xc602000c
  .word 0xc6010010
  .word 0xc6000014
  .word 0x46031b02
  .word 0x460212c2
  .word 0x46010a82
  .word 0x46011242
  .word 0x46030a02
  .word 0x460219c2
  .word 0x46030182
  .word 0x46020142
  .word 0x46010102
  .word 0x460a5800
  .word 0x3c024000
  .word 0x44821800
  .word 0x3c023f80
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600181d
  .word 0xe7a00290
  .word 0x46043800
  .word 0x46001802
  .word 0xe7a00294
  .word 0x46054001
  .word 0x46001802
  .word 0xe7a00298
  .word 0x46043801
  .word 0x46001802
  .word 0xe7a002a0
  .word 0x460a6000
  .word 0x46020818
  .word 0x4600181d
  .word 0xe7a002a4
  .word 0x46064800
  .word 0x46001802
  .word 0xe7a002a8
  .word 0x46054000
  .word 0x46001802
  .word 0xe7a002b0
  .word 0x46064801
  .word 0x46001802
  .word 0xe7a002b4
  .word 0x460b6000
  .word 0x46020818
  .word 0x4600181d
  .word 0xe7a002b8
  .word 0xafa002c0
  .word 0xafa002c4
  .word 0xafa002c8
  .word 0x24020003
  .word 0xafa2029c
  .word 0xc6000018
  .word 0xe7a002c0
  .word 0xc600001c
  .word 0xe7a002c4
  .word 0xc6000020
  .word 0xe7a002c8
  .word 0x10000005
  .word 0x00000000
  .word 0x27a40290
  .word 0x0200282d
  .word 0x0040f809
  .word 0x00000000
  .word 0x001e1900
  .word 0x8e820010
  .word 0x00431021
  .word 0x8c430000
  .word 0x24021389
  .word 0x10620003
  .word 0x00000000
  .word 0x100003c7
  .word 0x00000000
  .word 0x8fa20110
  .word 0x14400007
  .word 0x00000000
  .word 0x96630000
  .word 0x30620400
  .word 0x14400003
  .word 0x00000000
  .word 0x34620600
  .word 0xa6620000
  .word 0x0000a82d
  .word 0x3c023f80
  .word 0x44820800
  .word 0xc6600030
  .word 0x46000903
  .word 0xe7a40470
  .word 0xc6600034
  .word 0x460008c3
  .word 0xe7a30474
  .word 0xc6600038
  .word 0x46000883
  .word 0xe7a20478
  .word 0x8fa2011c
  .word 0x94420000
  .word 0x30420010
  .word 0x1040000d
  .word 0x00000000
  .word 0x3c020095
  .word 0xc44071c0
  .word 0x46000843
  .word 0x46012002
  .word 0xe7a00470
  .word 0x3c020095
  .word 0xc44071c4
  .word 0x46000842
  .word 0x46011802
  .word 0xe7a00474
  .word 0x46011002
  .word 0xe7a00478
  .word 0x27a50310
  .word 0x24040008
  .word 0x0240302d
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x27a40310
  .word 0x27a50470
  .word 0x24060001
  .word 0x0c130cf4
  .word 0x00000000
  .word 0x27a40190
  .word 0x27a50290
  .word 0x27a60310
  .word 0x0c130bcc
  .word 0x00000000
  .word 0xc7a201c0
  .word 0xc7a101c4
  .word 0xc7a001c8
  .word 0xe7a20480
  .word 0xe7a10484
  .word 0xe7a00488
  .word 0x8fa20110
  .word 0x144002b7
  .word 0x00000000
  .word 0x27a40190
  .word 0x27a50470
  .word 0x24060001
  .word 0x0c130cf4
  .word 0x00000000
  .word 0xafa00490
  .word 0x3c023f80
  .word 0xafa20494
  .word 0xafa00498
  .word 0x3c024334
  .word 0x44826000
  .word 0x27a40210
  .word 0x27a50490
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0xafa00490
  .word 0xafa00494
  .word 0x3c023f80
  .word 0xafa20498
  .word 0x3c02c2b4
  .word 0x44826000
  .word 0x27a40210
  .word 0x27a50490
  .word 0x24060002
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40250
  .word 0x27a50210
  .word 0x27a60410
  .word 0x0c130bcc
  .word 0x00000000
  .word 0x96630000
  .word 0x30620100
  .word 0x14400126
  .word 0x00000000
  .word 0x30620080
  .word 0x144000de
  .word 0x00000000
  .word 0x24020001
  .word 0xafa20100
  .word 0x30620040
  .word 0x1040000f
  .word 0x00000000
  .word 0xc661003c
  .word 0xc7a00480
  .word 0x46010001
  .word 0xe7a00470
  .word 0xc6610040
  .word 0xc7a00484
  .word 0x46010001
  .word 0xe7a00474
  .word 0xc6610044
  .word 0xc7a00488
  .word 0x46010001
  .word 0xe7a00478
  .word 0x10000010
  .word 0x00000000
  .word 0xc662003c
  .word 0xc6610040
  .word 0xc6600044
  .word 0xe7a20470
  .word 0xe7a10474
  .word 0xe7a00478
  .word 0xc7a00470
  .word 0x46000007
  .word 0xe7a00470
  .word 0xc7a00474
  .word 0x46000007
  .word 0xe7a00474
  .word 0xc7a00478
  .word 0x46000007
  .word 0xe7a00478
  .word 0x27a40470
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x27a401d0
  .word 0x27a50410
  .word 0x0c130ca8
  .word 0x00000000
  .word 0x27a40470
  .word 0x0080282d
  .word 0x27a601d0
  .word 0x0c131b18
  .word 0x00000000
  .word 0x27a40470
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xafa00450
  .word 0xafa00454
  .word 0x3c02c2c8
  .word 0xafa20458
  .word 0x27a40450
  .word 0x0080282d
  .word 0x27a60310
  .word 0x0c131af8
  .word 0x00000000
  .word 0xc7a10480
  .word 0xc7a00450
  .word 0x46000801
  .word 0xe7a00460
  .word 0xc7a10484
  .word 0xc7a00454
  .word 0x46000801
  .word 0xe7a00464
  .word 0xc7a10488
  .word 0xc7a00458
  .word 0x46000801
  .word 0xe7a00468
  .word 0x27a40460
  .word 0x0080282d
  .word 0x27a601d0
  .word 0x0c131b18
  .word 0x00000000
  .word 0x27a40460
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7ac0464
  .word 0x0c14ba7a
  .word 0x00000000
  .word 0xc78180d0
  .word 0x46000842
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d01
  .word 0xc7ac0460
  .word 0xc7ad0468
  .word 0x0c14ba86
  .word 0x00000000
  .word 0xc78380d0
  .word 0x3c024334
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x46001d5c
  .word 0xc7ac0474
  .word 0x0c14ba7a
  .word 0x00000000
  .word 0xc78180d0
  .word 0x46000842
  .word 0x3c0242b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46000dc1
  .word 0xc7ac0470
  .word 0xc7ad0478
  .word 0x0c14ba86
  .word 0x00000000
  .word 0xc78380d0
  .word 0x3c024334
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x46001d9c
  .word 0x4614bdc1
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x10000002
  .word 0x00000000
  .word 0x4600bdc0
  .word 0x4601b834
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4501fffa
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x10000002
  .word 0x00000000
  .word 0x4600bdc1
  .word 0x4600b836
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4500fffa
  .word 0x00000000
  .word 0xc6620008
  .word 0x4602b836
  .word 0x45010010
  .word 0x00000000
  .word 0x46020041
  .word 0x4601b834
  .word 0x4500000c
  .word 0x00000000
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b834
  .word 0x45000004
  .word 0x00000000
  .word 0x460015c6
  .word 0x10000002
  .word 0x00000000
  .word 0x46000dc6
  .word 0x24150001
  .word 0x4614b800
  .word 0x46000307
  .word 0x27a40210
  .word 0x27a50260
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x4615b581
  .word 0x3c0243b4
  .word 0x44820800
  .word 0x44800000
  .word 0x10000002
  .word 0x00000000
  .word 0x4601b580
  .word 0x4600b034
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4501fffa
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x10000002
  .word 0x00000000
  .word 0x4600b581
  .word 0x4600b036
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4500fffa
  .word 0x00000000
  .word 0xc662000c
  .word 0x4602b036
  .word 0x45010010
  .word 0x00000000
  .word 0x46020041
  .word 0x4601b034
  .word 0x4500000c
  .word 0x00000000
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b034
  .word 0x45000004
  .word 0x00000000
  .word 0x46001586
  .word 0x10000002
  .word 0x00000000
  .word 0x46000d86
  .word 0x24150001
  .word 0x4615b300
  .word 0x27a40210
  .word 0x27a50250
  .word 0x24060002
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0xafa00100
  .word 0x3c023f80
  .word 0xafa20490
  .word 0xafa00494
  .word 0xafa00498
  .word 0x27a40210
  .word 0x27a50490
  .word 0xc66c003c
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0xafa00490
  .word 0x3c023f80
  .word 0xafa20494
  .word 0xafa00498
  .word 0x27a40210
  .word 0x27a50490
  .word 0xc66c0040
  .word 0x24060002
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a50250
  .word 0x27a60210
  .word 0x0c130bcc
  .word 0x00000000
  .word 0x27a40180
  .word 0x0220282d
  .word 0x0c12f72c
  .word 0x00000000
  .word 0x96630000
  .word 0x30621000
  .word 0x10400013
  .word 0x00000000
  .word 0x12a00011
  .word 0x00000000
  .word 0x30620800
  .word 0x14400009
  .word 0x00000000
  .word 0xc7a30180
  .word 0xc7a20184
  .word 0xc7a10188
  .word 0xc7a0018c
  .word 0xe6630020
  .word 0xe6620024
  .word 0xe6610028
  .word 0xe660002c
  .word 0x96620000
  .word 0x34420800
  .word 0xa6620000
  .word 0x10000004
  .word 0x00000000
  .word 0x96620000
  .word 0x3042f7ff
  .word 0xa6620000
  .word 0x96620000
  .word 0x30420800
  .word 0x1040000f
  .word 0x00000000
  .word 0xc6630020
  .word 0xc6620024
  .word 0xc6610028
  .word 0xc660002c
  .word 0xe7a30180
  .word 0xe7a20184
  .word 0xe7a10188
  .word 0xe7a0018c
  .word 0x10000005
  .word 0x00000000
  .word 0x27a40180
  .word 0x27a50190
  .word 0x0c12f72c
  .word 0x00000000
  .word 0x96630000
  .word 0x30620200
  .word 0x10400016
  .word 0x00000000
  .word 0x26640010
  .word 0x27a50190
  .word 0x0c12f72c
  .word 0x00000000
  .word 0x96620000
  .word 0x3042fdff
  .word 0xa6620000
  .word 0x96630000
  .word 0x30620100
  .word 0x1040015b
  .word 0x00000000
  .word 0x3062fe1f
  .word 0xa6620000
  .word 0x96620000
  .word 0x3042fbff
  .word 0xa6620000
  .word 0x96620000
  .word 0x3042f7ff
  .word 0xa6620000
  .word 0x10000151
  .word 0x00000000
  .word 0x30620100
  .word 0x1040002f
  .word 0x00000000
  .word 0xc7a90184
  .word 0xc6680014
  .word 0xc7a20180
  .word 0xc6670010
  .word 0xc7a10188
  .word 0xc6660018
  .word 0x4609401a
  .word 0x44802800
  .word 0x4602381e
  .word 0x4601301e
  .word 0xc7a0018c
  .word 0xc664001c
  .word 0x4600231c
  .word 0x46056034
  .word 0x4500000c
  .word 0x00000000
  .word 0x460000c7
  .word 0x46001087
  .word 0x46004807
  .word 0x46000847
  .word 0x46004002
  .word 0x46002818
  .word 0x4602381c
  .word 0x46002818
  .word 0x4601301c
  .word 0x46002818
  .word 0x4603231c
  .word 0x0c14ba7a
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46000842
  .word 0xc78080f4
  .word 0x46000834
  .word 0x45000007
  .word 0x00000000
  .word 0x96620000
  .word 0x3042fe1f
  .word 0xa6620000
  .word 0x96620000
  .word 0x3042fbff
  .word 0xa6620000
  .word 0x96620000
  .word 0x3042f7ff
  .word 0xa6620000
  .word 0x27a40130
  .word 0xc6630010
  .word 0xc6620014
  .word 0xc6610018
  .word 0xc660001c
  .word 0xe7a30130
  .word 0xe7a20134
  .word 0xe7a10138
  .word 0xe7a0013c
  .word 0x27a50180
  .word 0x27a60150
  .word 0x0c12f8c4
  .word 0x00000000
  .word 0xc6600004
  .word 0x44806000
  .word 0x00000000
  .word 0x460c0036
  .word 0x45000005
  .word 0x00000000
  .word 0x7ba20130
  .word 0x7fa20140
  .word 0x10000050
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x00000000
  .word 0x46000836
  .word 0x45000005
  .word 0x00000000
  .word 0x7ba20180
  .word 0x7fa20140
  .word 0x10000046
  .word 0x00000000
  .word 0x46000841
  .word 0x8fa20174
  .word 0x14400026
  .word 0x00000000
  .word 0xc7ab0170
  .word 0x460b0902
  .word 0x460420c2
  .word 0xc78a814c
  .word 0xc7898048
  .word 0x46096018
  .word 0x4603505c
  .word 0xc7888118
  .word 0x46086018
  .word 0x4601185c
  .word 0xc7878050
  .word 0x46076018
  .word 0x4601185c
  .word 0xc7868054
  .word 0x46066018
  .word 0x4601185c
  .word 0xc7858058
  .word 0x46056018
  .word 0x4601189c
  .word 0x46041842
  .word 0x46046018
  .word 0x4602085c
  .word 0x460b0102
  .word 0x460420c2
  .word 0x46096018
  .word 0x4603501c
  .word 0x46086018
  .word 0x4600181c
  .word 0x46076018
  .word 0x4600181c
  .word 0x46066018
  .word 0x4600181c
  .word 0x46056018
  .word 0x4600189c
  .word 0x46041802
  .word 0x46046018
  .word 0x4602001c
  .word 0xc7a20150
  .word 0x46011182
  .word 0xe7a60140
  .word 0xc7a20154
  .word 0x46011142
  .word 0xe7a50144
  .word 0xc7a20158
  .word 0x46011102
  .word 0xe7a40148
  .word 0xc7a20160
  .word 0x44801800
  .word 0x00000000
  .word 0x46061818
  .word 0x4600109c
  .word 0xe7a20140
  .word 0xc7a20164
  .word 0x46051818
  .word 0x4600109c
  .word 0xe7a20144
  .word 0xc7a20168
  .word 0x46041818
  .word 0x4600109c
  .word 0xe7a20148
  .word 0xc7a3015c
  .word 0xc7a2016c
  .word 0x4600101a
  .word 0x4601181c
  .word 0xe7a0014c
  .word 0x96620000
  .word 0x30422000
  .word 0x104000ae
  .word 0x00000000
  .word 0x8fa20100
  .word 0x104000ab
  .word 0x00000000
  .word 0x27a40120
  .word 0x27a50190
  .word 0x0c12f72c
  .word 0x00000000
  .word 0xc7a90144
  .word 0xc7a80124
  .word 0xc7a20140
  .word 0xc7a70120
  .word 0xc7a10148
  .word 0xc7a60128
  .word 0x4609401a
  .word 0x44802800
  .word 0x4602381e
  .word 0x4601301e
  .word 0xc7a0014c
  .word 0xc7a4012c
  .word 0x4600231c
  .word 0x46056034
  .word 0x4500000c
  .word 0x00000000
  .word 0x460000c7
  .word 0x46001087
  .word 0x46004807
  .word 0x46000847
  .word 0x46004002
  .word 0x46002818
  .word 0x4602381c
  .word 0x46002818
  .word 0x4601301c
  .word 0x46002818
  .word 0x4603231c
  .word 0x0c14ba7a
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46000882
  .word 0xc7818150
  .word 0xc660000c
  .word 0x46000802
  .word 0x46001036
  .word 0x4500000b
  .word 0x00000000
  .word 0xc7a30140
  .word 0xc7a20144
  .word 0xc7a10148
  .word 0xc7a0014c
  .word 0xe6630010
  .word 0xe6620014
  .word 0xe6610018
  .word 0xe660001c
  .word 0x1000007e
  .word 0x00000000
  .word 0xc7808154
  .word 0x00000000
  .word 0x46020043
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010501
  .word 0x27a40140
  .word 0x27a50120
  .word 0x27a60150
  .word 0x0c12f8c4
  .word 0x00000000
  .word 0x44805800
  .word 0x00000000
  .word 0x460ba036
  .word 0x4500000b
  .word 0x00000000
  .word 0xc7a30140
  .word 0xc7a20144
  .word 0xc7a10148
  .word 0xc7a0014c
  .word 0xe6630010
  .word 0xe6620014
  .word 0xe6610018
  .word 0xe660001c
  .word 0x10000063
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x4500000b
  .word 0x00000000
  .word 0xc7a30120
  .word 0xc7a20124
  .word 0xc7a10128
  .word 0xc7a0012c
  .word 0xe6630010
  .word 0xe6620014
  .word 0xe6610018
  .word 0xe660001c
  .word 0x10000053
  .word 0x00000000
  .word 0x46140001
  .word 0x8fa20174
  .word 0x14400026
  .word 0x00000000
  .word 0xc7aa0170
  .word 0x460a0102
  .word 0x460420c2
  .word 0xc7898158
  .word 0xc7888048
  .word 0x46085818
  .word 0x4603481c
  .word 0xc7878118
  .word 0x46075818
  .word 0x4600181c
  .word 0xc7868050
  .word 0x46065818
  .word 0x4600181c
  .word 0xc7858054
  .word 0x46055818
  .word 0x4600181c
  .word 0xc7828058
  .word 0x46025818
  .word 0x4600185c
  .word 0x46041802
  .word 0x46045818
  .word 0x4601001c
  .word 0x460aa102
  .word 0x460420c2
  .word 0x46085818
  .word 0x4603485c
  .word 0x46075818
  .word 0x4601185c
  .word 0x46065818
  .word 0x4601185c
  .word 0x46055818
  .word 0x4601185c
  .word 0x46025818
  .word 0x4601189c
  .word 0x46041842
  .word 0x46045818
  .word 0x46020d1c
  .word 0xc7a10150
  .word 0x46000842
  .word 0xe6610010
  .word 0xc7a10154
  .word 0x46000842
  .word 0xe6610014
  .word 0xc7a10158
  .word 0x46000842
  .word 0xe6610018
  .word 0xc7a20160
  .word 0xc6610010
  .word 0x44801800
  .word 0x00000000
  .word 0x46011818
  .word 0x4614105c
  .word 0xe6610010
  .word 0xc7a20164
  .word 0xc6610014
  .word 0x46011818
  .word 0x4614105c
  .word 0xe6610014
  .word 0xc7a20168
  .word 0xc6610018
  .word 0x46011818
  .word 0x4614105c
  .word 0xe6610018
  .word 0xc7a2015c
  .word 0xc7a1016c
  .word 0x4614081a
  .word 0x4600101c
  .word 0xe660001c
  .word 0x10000009
  .word 0x00000000
  .word 0xc7a30140
  .word 0xc7a20144
  .word 0xc7a10148
  .word 0xc7a0014c
  .word 0xe6630010
  .word 0xe6620014
  .word 0xe6610018
  .word 0xe660001c
  .word 0x8fa20110
  .word 0x1440005c
  .word 0x00000000
  .word 0xc6640014
  .word 0xc66c0010
  .word 0xc66b0018
  .word 0xc663001c
  .word 0x4604201a
  .word 0x460c601e
  .word 0x460b581e
  .word 0x4603185c
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010003
  .word 0x46006082
  .word 0x46002042
  .word 0x46005802
  .word 0x46031282
  .word 0x46030a42
  .word 0x46030202
  .word 0x460261c2
  .word 0x46012182
  .word 0x46005942
  .word 0x46002102
  .word 0x460258c2
  .word 0x46016082
  .word 0x46053000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x00000000
  .word 0x46000801
  .word 0xe6200000
  .word 0x46081000
  .word 0xe6200004
  .word 0x46091801
  .word 0xe6200008
  .word 0x46081001
  .word 0xe6200010
  .word 0x46072800
  .word 0x46000801
  .word 0xe6200014
  .word 0x460a2000
  .word 0xe6200018
  .word 0x46091800
  .word 0xe6200020
  .word 0x460a2001
  .word 0xe6200024
  .word 0x46063800
  .word 0x46000801
  .word 0xe6200028
  .word 0xae200030
  .word 0xae200034
  .word 0xae200038
  .word 0x24020003
  .word 0xae22000c
  .word 0xc6620030
  .word 0xc6610034
  .word 0xc6600038
  .word 0xe7a20470
  .word 0xe7a10474
  .word 0xe7a00478
  .word 0x8fa2011c
  .word 0x94420000
  .word 0x30420010
  .word 0x1040000f
  .word 0x00000000
  .word 0x3c020095
  .word 0xc44171c0
  .word 0xc7a00470
  .word 0x46010002
  .word 0xe7a00470
  .word 0x3c020095
  .word 0xc44071c4
  .word 0x46000842
  .word 0xc7a00474
  .word 0x46010002
  .word 0xe7a00474
  .word 0xc7a00478
  .word 0x46010002
  .word 0xe7a00478
  .word 0x0220202d
  .word 0x27a50470
  .word 0x24060001
  .word 0x0c130cf4
  .word 0x00000000
  .word 0xc7a20480
  .word 0xc7a10484
  .word 0xc7a00488
  .word 0xe6220030
  .word 0xe6210034
  .word 0xe6200038
  .word 0x1000005f
  .word 0x00000000
  .word 0xc6640014
  .word 0xc66c0010
  .word 0xc66b0018
  .word 0xc663001c
  .word 0x4604201a
  .word 0x460c601e
  .word 0x460b581e
  .word 0x4603185c
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010003
  .word 0x46006082
  .word 0x46002042
  .word 0x46005802
  .word 0x46031282
  .word 0x46030a42
  .word 0x46030202
  .word 0x460261c2
  .word 0x46012182
  .word 0x46005942
  .word 0x46002102
  .word 0x460258c2
  .word 0x46016082
  .word 0x46053000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a00190
  .word 0x46081000
  .word 0xe7a00194
  .word 0x46091801
  .word 0xe7a00198
  .word 0x46081001
  .word 0xe7a001a0
  .word 0x46072800
  .word 0x46000801
  .word 0xe7a001a4
  .word 0x460a2000
  .word 0xe7a001a8
  .word 0x46091800
  .word 0xe7a001b0
  .word 0x460a2001
  .word 0xe7a001b4
  .word 0x46063800
  .word 0x46000801
  .word 0xe7a001b8
  .word 0xafa001c0
  .word 0xafa001c4
  .word 0xafa001c8
  .word 0x24020003
  .word 0xafa2019c
  .word 0xc6620030
  .word 0xc6610034
  .word 0xc6600038
  .word 0xe7a20470
  .word 0xe7a10474
  .word 0xe7a00478
  .word 0x8fa2011c
  .word 0x94420000
  .word 0x30420010
  .word 0x1040000f
  .word 0x00000000
  .word 0x3c020095
  .word 0xc44171c0
  .word 0xc7a00470
  .word 0x46010002
  .word 0xe7a00470
  .word 0x3c020095
  .word 0xc44071c4
  .word 0x46000842
  .word 0xc7a00474
  .word 0x46010002
  .word 0xe7a00474
  .word 0xc7a00478
  .word 0x46010002
  .word 0xe7a00478
  .word 0x27a40190
  .word 0x27a50470
  .word 0x24060001
  .word 0x0c130cf4
  .word 0x00000000
  .word 0xc7a20480
  .word 0xc7a10484
  .word 0xc7a00488
  .word 0xe7a201c0
  .word 0xe7a101c4
  .word 0xe7a001c8
  .word 0x0220202d
  .word 0x27a50190
  .word 0x8fa60110
  .word 0x0c130bcc
  .word 0x00000000
  .word 0x8ee2000c
  .word 0x10400012
  .word 0x00000000
  .word 0x8c420004
  .word 0x1040000f
  .word 0x00000000
  .word 0x8c4400a0
  .word 0x90820003
  .word 0x30420001
  .word 0x1040000a
  .word 0x00000000
  .word 0x0c133d30
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a50290
  .word 0x0240302d
  .word 0x0c130bcc
  .word 0x00000000
  .word 0x8ef5000c
  .word 0x12a00034
  .word 0x00000000
  .word 0x7ba200c0
  .word 0x10400013
  .word 0x00000000
  .word 0x27a60290
  .word 0x26a50010
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
  .word 0x8fa200f0
  .word 0x14400004
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0c132c9c
  .word 0x00000000
  .word 0x8fa200f0
  .word 0x1040001c
  .word 0x00000000
  .word 0x7ba200b0
  .word 0x10400008
  .word 0x00000000
  .word 0x26a40050
  .word 0x0220282d
  .word 0x27a60410
  .word 0x0c130bcc
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x26a50050
  .word 0x24040008
  .word 0x0220302d
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x92a30003
  .word 0x2402fffb
  .word 0x00621024
  .word 0x34420008
  .word 0xa2a20003
  .word 0x8ee20008
  .word 0x30430003
  .word 0x24020003
  .word 0x10620015
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0220902d
  .word 0x10000008
  .word 0x00000000
  .word 0x26d6fffc
  .word 0x8ed20000
  .word 0x10000004
  .word 0x00000000
  .word 0xaed20000
  .word 0x26d60004
  .word 0x0220902d
  .word 0x7ba200d0
  .word 0x02028021
  .word 0x26310040
  .word 0x26f70010
  .word 0x27de0001
  .word 0x8e820004
  .word 0x03c2102a
  .word 0x1440fb8e
  .word 0x00000000
  .word 0x24020001
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
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd04a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule reset
#pragma opt_lifetimes reset
#pragma opt_loop_invariants reset
#pragma pop
#undef fStack_210
#undef fStack_20c
#undef fStack_208
#undef uStack_204
#undef fStack_200
#undef fStack_1fc
#undef fStack_1f8
#undef fStack_1f0
#undef fStack_1ec
#undef fStack_1e8
#undef uStack_1e0
#undef uStack_1dc
#undef uStack_1d8
#undef fStack_310
#undef fStack_30c
#undef fStack_308
#undef uStack_304
#undef fStack_300
#undef fStack_2fc
#undef fStack_2f8
#undef fStack_2f0
#undef fStack_2ec
#undef fStack_2e8
#undef fStack_2e0
#undef fStack_2dc
#undef fStack_2d8
#undef fStack_380
#undef fStack_37c
#undef fStack_378
#undef fStack_374
#undef fStack_370
#undef fStack_36c
#undef fStack_368
#undef fStack_364
#undef fStack_360
#undef fStack_35c
#undef fStack_358
#undef fStack_354
#undef fStack_350
#undef fStack_34c
#undef fStack_348
#undef fStack_344
#undef fStack_340
#undef fStack_33c
#undef fStack_338
#undef fStack_334
#undef fStack_330
#undef iStack_32c
#undef fStack_320
#undef fStack_31c
#undef fStack_318
#undef fStack_314
#undef fStack_50
#undef fStack_4c
#undef fStack_48
#undef fStack_40
#undef fStack_3c
#undef fStack_38
#undef fStack_30
#undef fStack_2c
#undef fStack_28
#undef fStack_20
#undef fStack_1c
#undef fStack_18
#undef uStack_10
#undef uStack_c
#undef uStack_8

// FUN_00312C70


void func_00312c70(u8* param_1,int param_2)



{

  if (*(s32*)DAT_009571b8_abs == param_2) {

    *(float *)(param_2 + 0x18) = *(float *)(param_2 + 0x18) * *(*(float**)DAT_009571bc_abs);

    *(float *)(param_2 + 0x1c) = *(float *)(param_2 + 0x1c) * (*(float**)DAT_009571bc_abs)[1];

    *(float *)(param_2 + 0x20) = *(float *)(param_2 + 0x20) * (*(float**)DAT_009571bc_abs)[2];

  }

  (*DAT_009571b0_abs)(param_1,param_2);

  if (*(s32*)DAT_009571b4_abs == param_2) {

    RwMatrixScale((RwMatrix*)param_1,(const RwV3d*)*(float**)DAT_009571bc_abs,1);

  }

  return;

}

/* W323 measured mdlCreateAndResolvePath opt_loop_invariants on: nd202 -> nd191; object 356/368. */
// FUN_00312D40


void func_00312d40(u8* param_1,u8* param_2)



{

  int iVar1;

  int iVar3;

  int iVar4;

  int iVar5;

  float *pfVar6;

  

  iVar3 = (int)param_2;

  pfVar6 = (float *)(iVar3 + 0x34);

  iVar1 = *(int *)(param_1 + 0x20);

  if (iVar1 != 0) {

    *(u32*)DAT_009571b0_abs = *(u32 *)(iVar1 + 0x3c);

    *(code *)(iVar1 + 0x3c) = (code)func_00312c70;

    iVar4 = *(int *)(param_1 + 0x20);
    iVar5 = *(int *)(iVar4 + 0x24);
    *(s32*)DAT_009571b4_abs = iVar4 + 0x4c;
    *(s32*)DAT_009571b4_abs += iVar5 * *(int *)pfVar6;
    if (*(float *)(iVar3 + 8) != 0.0f) {
      *(s32*)DAT_009571b8_abs = *(s32*)DAT_009571b4_abs;
    }
    else {
      *(s32*)DAT_009571b8_abs = 0;
    }

    *(float**)DAT_009571bc_abs = pfVar6 + 1;
    *(f32*)DAT_009571c0_abs = pfVar6[4];
    *(f32*)DAT_009571c4_abs = pfVar6[5];
    if ((*(u16 *)(iVar3 + 0x4c) & 0x1e0) != 0) {

      func_00311730((u32*)param_1,(u16*)param_2,(u16*)(param_2 + 0x4c),0);

      *(u16 *)(iVar3 + 0x4c) = *(u16 *)(iVar3 + 0x4c) | 0x4000;

    }

    else {

      func_00466ef0(param_1);

      *(u16 *)(iVar3 + 0x4c) = *(u16 *)(iVar3 + 0x4c) & 0xbfff;

    }

    *(u32 *)(*(int *)(param_1 + 0x20) + 0x3c) = *(u32*)DAT_009571b0_abs;

  }

  return;

}

// FUN_00312E80


void func_00312e80(int param_1)



{

  u32 uVar1;
  u32 uVar2;

  

  uVar2 = func_00469030();

  switch(uVar2) {
  case 1:
    uVar1 = func_0046a890(0x10021);
    *(u32 *)(param_1 + 8) = uVar1;
    break;
  case 2:
    uVar1 = func_0046a890(0x10022);
    *(u32 *)(param_1 + 8) = uVar1;
    break;
  case 3:
    uVar1 = func_0046a890(0x10023);
    *(u32 *)(param_1 + 8) = uVar1;
    break;
  case 4:
    uVar1 = func_0046a890(0x10024);
    *(u32 *)(param_1 + 8) = uVar1;
    break;
  case 5:
    uVar1 = func_0046a890(0x1002a);
    *(u32 *)(param_1 + 8) = uVar1;
    break;
  case 6:
    uVar1 = func_0046a890(0x1002b);
    *(u32 *)(param_1 + 8) = uVar1;
    break;
  default:
    uVar1 = func_0046a890(0x10020);
    *(u32 *)(param_1 + 8) = uVar1;
    break;
  }

  return;

}

// FUN_00312F90


u32 func_00312f90(u32 param_1)
{
    int iVar1;
    u32 uVar2;
    u32 lVar3;
    u32 uVar4;
    int iVar5;
    int iVar6;

    iVar5 = (int)param_1;
    iVar1 = *(int *)(iVar5 + 0x18);
    if (iVar1 == 0) {
        return param_1;
    }

    lVar3 = func_0048a2c0(iVar1);
    if (lVar3 == 0) {
        return param_1;
    }

    uVar4 = func_0048a3d0(lVar3);
    if (uVar4 <= 0x40) {
        return param_1;
    }

    if (param_1 != 0) {
        uVar2 = func_0046a890(0x1001f);
        *(u32 *)(iVar5 + 0x6c) = uVar2;
        iVar5 = *(int *)(iVar5 + 0x18);
        iVar1 = *(int *)(iVar5 + 0x24);
        for (iVar6 = 0; iVar6 < iVar1; iVar6 = iVar6 + 1) {
            func_00312e80(*(u32 *)(*(int *)(iVar5 + 0x20) + iVar6 * 4));
        }
        return param_1;
    }

    return param_1;
}


// W419 measured helper probes: integer static-inline operand-order variants were best unchanged at
// nd1/object416/window416 (rate 0.00240); base+offset variants regressed to nd25/object416/window416
// (rate 0.06010) and nd224/object412/window416 (rate 0.54369). No variant landed.
// DUMMYDUMB session 2026-10-20 (2nd pass): the single residual byte is a commutative addu operand
// order - ours `addu $v0,$v1,$v0` (scaled first) vs retail `addu $v0,$v0,$v1` (base first), with
// everything else identical (both 416B). Retried with a named scale temp to decouple the schedule
// from the operand order: base-first still restructures the function (nd25, the scale is recomputed
// as (x*4)*16 and the base addiu hoisted), scaled-first reproduces the same nd1. Confirmed wall.


// FUN_00313090


#ifndef PC_BUILD
asm u32 func_00313090(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x84a20004
  .word 0x8ca6002c
  .word 0x10c0004b
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x94c40004
  .word 0x00a4082a
  .word 0x10200045
  .word 0x00000000
  .word 0x00051080
  .word 0x00451021
  .word 0x00021900
  .word 0x8cc20000
  .word 0x24420040
  .word 0x00431021
  .word 0x8c430000
  .word 0x1060003c
  .word 0x00000000
  .word 0x3c020095
  .word 0x244271d0
  .word 0x10620038
  .word 0x00000000
  .word 0x96020000
  .word 0x30420001
  .word 0x1440000f
  .word 0x00000000
  .word 0x00a4082a
  .word 0x10200036
  .word 0x00000000
  .word 0x04a00034
  .word 0x00000000
  .word 0x8e020020
  .word 0x8c440020
  .word 0xc46c000c
  .word 0x0c12dd30
  .word 0x00000000
  .word 0x24020001
  .word 0xa2020002
  .word 0x1000002b
  .word 0x00000000
  .word 0x8e120030
  .word 0x1240000b
  .word 0x00000000
  .word 0x8e440018
  .word 0x10800003
  .word 0x00000000
  .word 0x0c0c7738
  .word 0x00000000
  .word 0x8e440024
  .word 0x10800003
  .word 0x00000000
  .word 0x0c0c7884
  .word 0x00000000
  .word 0x8e020020
  .word 0x8c440020
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c12dc04
  .word 0x00000000
  .word 0xc78180e4
  .word 0xc6000008
  .word 0x46000802
  .word 0xe600000c
  .word 0x8e020020
  .word 0x8c440020
  .word 0xc60c000c
  .word 0x0c12dd30
  .word 0x00000000
  .word 0x8e020020
  .word 0x8c440020
  .word 0x3c050031
  .word 0x24a53090
  .word 0x0200302d
  .word 0x0c12dc04
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x96020000
  .word 0x30420001
  .word 0x10400002
  .word 0x00000000
  .word 0xae00000c
  .word 0x8e020094
  .word 0x10400004
  .word 0x00000000
  .word 0x8e040098
  .word 0x0040f809
  .word 0x00000000
  .word 0x0220102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* DUMMYDUMB session 2026-10-21: 1 differing byte, the operand order of one
 * add.  Ours "addu v0,v1,v0" puts the scaled index in rs, retail "addu v0,v0,v1"
 * puts the pointer part there; both compute the same value.
 * Probed: the two terms swapped (both with and without the u8* cast), the
 * index as (u32)sVar5 * 0x50, the pointer part read through *(u8 **)piVar1,
 * the sum written as an int plus a pointer, and the whole sum cast to u8*.
 * Every rewrite changes mwcc's schedule and makes the difference worse.
 * Confirmed wall: add operand order.
 */

// FUN_00313230


void func_00313230(MdlAnimSlot* param_1)
{

  int iVar1;

  

  memset(param_1,0,0x9c);

  iVar1 = (int)param_1;

  *(u8 *)(iVar1 + 2) = 1;

  param_1->anim.id = -1;

  *(u32 *)(iVar1 + 8) = 0x3f800000;

  *(u32 *)(iVar1 + 0xc) = 0;

  param_1->anim.oldId = -1;

  *(u32 *)(iVar1 + 0x1c) = 0x3f800000;

  param_1->lookAt.blendRotFactor = DAT_007cada4;

  *(u32 *)(iVar1 + 0x5c) = 0;

  *(u32 *)(iVar1 + 0x60) = 0;

  *(u32 *)(iVar1 + 100) = 0;

  *(u32 *)(iVar1 + 0x68) = 0x3f800000;

  *(u32 *)(iVar1 + 0x54) = 0x428c0000;

  *(u32 *)(iVar1 + 0x58) = 0x42a00000;

  *(u16 *)(iVar1 + 0x4c) = 0;

  *(u32 *)(iVar1 + 0x7c) = 0x3f800000;

  *(u32 *)(iVar1 + 0x80) = 0x3f800000;

  *(u32 *)(iVar1 + 0x84) = 0x3f800000;

  return;

}

// FUN_003132C0


#ifndef PC_BUILD
asm void func_003132c0(u8* param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x8c900030
  .word 0x1200001e
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000011
  .word 0x00000000
  .word 0x8e020014
  .word 0x00119880
  .word 0x00531021
  .word 0x8c440000
  .word 0x10800003
  .word 0x00000000
  .word 0x0c0c75e4
  .word 0x00000000
  .word 0x8e020020
  .word 0x00531021
  .word 0x8c440000
  .word 0x10800003
  .word 0x00000000
  .word 0x0c0c784c
  .word 0x00000000
  .word 0x26310001
  .word 0x8e020000
  .word 0x0222102b
  .word 0x1440ffed
  .word 0x00000000
  .word 0x0200202d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae400030
  .word 0x8e440024
  .word 0x10800004
  .word 0x00000000
  .word 0x0c12dbac
  .word 0x00000000
  .word 0xae400024
  .word 0x8e440028
  .word 0x10800004
  .word 0x00000000
  .word 0x0c12dbac
  .word 0x00000000
  .word 0xae400028
  .word 0x8e50002c
  .word 0x1200002a
  .word 0x00000000
  .word 0x96030006
  .word 0x2463ffff
  .word 0xa6030006
  .word 0x96030006
  .word 0x14600023
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000016
  .word 0x00000000
  .word 0x8e040000
  .word 0x3223ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021100
  .word 0x00821021
  .word 0x8c440040
  .word 0x1080000b
  .word 0x00000000
  .word 0x8c420044
  .word 0x30420001
  .word 0x14400007
  .word 0x00000000
  .word 0x3c020095
  .word 0x244271d0
  .word 0x10820003
  .word 0x00000000
  .word 0x0c12da60
  .word 0x00000000
  .word 0x26220001
  .word 0x3051ffff
  .word 0x3223ffff
  .word 0x96020004
  .word 0x0062102a
  .word 0x1440ffe7
  .word 0x00000000
  .word 0x0200202d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae40002c
  .word 0x96430000
  .word 0x30630002
  .word 0x10600007
  .word 0x00000000
  .word 0x8e440020
  .word 0x10800004
  .word 0x00000000
  .word 0x0c1198f4
  .word 0x00000000
  .word 0xae400020
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
#pragma push
#pragma opt_propagation off
// FUN_00313490








asm void* func_00313490(MdlAnimSlot* param_1,void* param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x84900004
  .word 0x06010004
  .word 0x00000000
  .word 0x0220102d
  .word 0x10000100
  .word 0x00000000
  .word 0x92430002
  .word 0x24020001
  .word 0x14620007
  .word 0x00000000
  .word 0x8e440020
  .word 0x0c119bbc
  .word 0x00000000
  .word 0x0220102d
  .word 0x100000f6
  .word 0x00000000
  .word 0xc78180e4
  .word 0xc6400008
  .word 0x46000842
  .word 0x44800000
  .word 0x00000000
  .word 0x46000836
  .word 0x45000005
  .word 0x00000000
  .word 0x96420000
  .word 0x30420006
  .word 0x104000a1
  .word 0x00000000
  .word 0xc64c001c
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46006034
  .word 0x45000065
  .word 0x00000000
  .word 0x8e47002c
  .word 0x10e0004a
  .word 0x00000000
  .word 0x00101c3c
  .word 0x00031c3f
  .word 0x94e60004
  .word 0x0066082a
  .word 0x10200044
  .word 0x00000000
  .word 0x00031080
  .word 0x00431021
  .word 0x00021900
  .word 0x8ce20000
  .word 0x24450040
  .word 0x00a31021
  .word 0x8c420000
  .word 0x1040003b
  .word 0x00000000
  .word 0x3c040095
  .word 0x248471d0
  .word 0x10440037
  .word 0x00000000
  .word 0x10e00035
  .word 0x00000000
  .word 0x86430010
  .word 0x0066082a
  .word 0x10200031
  .word 0x00000000
  .word 0x00031080
  .word 0x00431021
  .word 0x00021100
  .word 0x00a21021
  .word 0x8c420000
  .word 0x1040002a
  .word 0x00000000
  .word 0x10440028
  .word 0x00000000
  .word 0x8e420020
  .word 0x8c440020
  .word 0x8e450024
  .word 0x8e460028
  .word 0x0c12dd44
  .word 0x00000000
  .word 0x96420018
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
  .word 0x3c023f80
  .word 0x44821000
  .word 0x00000000
  .word 0x46001043
  .word 0xc640001c
  .word 0x46010000
  .word 0xe640001c
  .word 0x46020034
  .word 0x45010053
  .word 0x00000000
  .word 0x8e430020
  .word 0x8e420028
  .word 0x8c640020
  .word 0x8c450000
  .word 0x0c12dbb0
  .word 0x00000000
  .word 0x1000004b
  .word 0x00000000
  .word 0x96420018
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
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010043
  .word 0xc640001c
  .word 0x46010000
  .word 0xe640001c
  .word 0x10000033
  .word 0x00000000
  .word 0x8e45002c
  .word 0x10a0001b
  .word 0x00000000
  .word 0x00101c3c
  .word 0x00031c3f
  .word 0x94a20004
  .word 0x0062082a
  .word 0x10200015
  .word 0x00000000
  .word 0x00031080
  .word 0x00431021
  .word 0x00021900
  .word 0x8ca20000
  .word 0x24420040
  .word 0x00431021
  .word 0x8c430000
  .word 0x1060000c
  .word 0x00000000
  .word 0x3c020095
  .word 0x244271d0
  .word 0x10620008
  .word 0x00000000
  .word 0x8e420020
  .word 0x8c440020
  .word 0x46000b06
  .word 0x0c12dc90
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x10a00011
  .word 0x00000000
  .word 0x0010243c
  .word 0x0004243f
  .word 0x94a20004
  .word 0x0082082a
  .word 0x1020000b
  .word 0x00000000
  .word 0x8ca30000
  .word 0x00041080
  .word 0x00441021
  .word 0x00021100
  .word 0x00431021
  .word 0x8c430040
  .word 0x3c020095
  .word 0x244271d0
  .word 0x10620004
  .word 0x00000000
  .word 0xc640000c
  .word 0x46010000
  .word 0xe640000c
  .word 0x96420000
  .word 0x3042fffb
  .word 0xa6420000
  .word 0x8e44002c
  .word 0x10800046
  .word 0x00000000
  .word 0x00101c3c
  .word 0x00031c3f
  .word 0x94820004
  .word 0x0062082a
  .word 0x10200040
  .word 0x00000000
  .word 0x00031080
  .word 0x00431021
  .word 0x00021900
  .word 0x8c820000
  .word 0x24420040
  .word 0x00431021
  .word 0x8c430000
  .word 0x10600037
  .word 0x00000000
  .word 0x3c020095
  .word 0x244271d0
  .word 0x10620033
  .word 0x00000000
  .word 0x96420000
  .word 0x30420002
  .word 0x1040000c
  .word 0x00000000
  .word 0x1220000a
  .word 0x00000000
  .word 0x8e420020
  .word 0x8c440020
  .word 0x8e230020
  .word 0x3c023f80
  .word 0x44826000
  .word 0x8c650020
  .word 0x0080302d
  .word 0x0c0c4590
  .word 0x00000000
  .word 0x96420000
  .word 0x30420010
  .word 0x10400007
  .word 0x00000000
  .word 0x8e440020
  .word 0x0240282d
  .word 0x0c0c4b50
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x9642004c
  .word 0x304201e0
  .word 0x1040000c
  .word 0x00000000
  .word 0x8e440020
  .word 0x0240282d
  .word 0x2646004c
  .word 0x0000382d
  .word 0x0c0c45cc
  .word 0x00000000
  .word 0x9642004c
  .word 0x34424000
  .word 0xa642004c
  .word 0x10000007
  .word 0x00000000
  .word 0x8e440020
  .word 0x0c119bbc
  .word 0x00000000
  .word 0x9642004c
  .word 0x3042bfff
  .word 0xa642004c
  .word 0x8e420020
  .word 0x8c420020
  .word 0xc4400004
  .word 0xe640000c
  .word 0x0240102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_propagation reset
#pragma pop

// FUN_003138E0


#ifndef PC_BUILD
asm void func_003138e0(MdlAnim* param_1,s16 param_2,u16 param_3,u16 param_4)
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
  .word 0x00c0902d
  .word 0x94830000
  .word 0x3063fffe
  .word 0xa4830000
  .word 0x30f1ffff
  .word 0x32250001
  .word 0x94830000
  .word 0x00651825
  .word 0xa4830000
  .word 0xa0800002
  .word 0x3243ffff
  .word 0x1860005c
  .word 0x00000000
  .word 0x86840004
  .word 0x2403ffff
  .word 0x10830058
  .word 0x00000000
  .word 0x8e88002c
  .word 0x11000055
  .word 0x00000000
  .word 0x95070004
  .word 0x0087082a
  .word 0x10200051
  .word 0x00000000
  .word 0x00041880
  .word 0x00641821
  .word 0x00032100
  .word 0x8d030000
  .word 0x24660040
  .word 0x00c41821
  .word 0x8c630000
  .word 0x10600048
  .word 0x00000000
  .word 0x3c050095
  .word 0x24a571d0
  .word 0x10650044
  .word 0x00000000
  .word 0x11000042
  .word 0x00000000
  .word 0x0013243c
  .word 0x0004243f
  .word 0x0087082a
  .word 0x1020003d
  .word 0x00000000
  .word 0x00041880
  .word 0x00641821
  .word 0x00038100
  .word 0x00d01821
  .word 0x8c630000
  .word 0x10600036
  .word 0x00000000
  .word 0x10650034
  .word 0x00000000
  .word 0x8e820024
  .word 0x14400008
  .word 0x00000000
  .word 0x8e830020
  .word 0x8c620020
  .word 0x8c640004
  .word 0x8c450020
  .word 0x0c12db84
  .word 0x00000000
  .word 0xae820024
  .word 0x8e820028
  .word 0x14400008
  .word 0x00000000
  .word 0x8e830020
  .word 0x8c620020
  .word 0x8c640004
  .word 0x8c450020
  .word 0x0c12db84
  .word 0x00000000
  .word 0xae820028
  .word 0x8e82002c
  .word 0x8c440000
  .word 0x86830004
  .word 0x00031080
  .word 0x00431021
  .word 0x00021100
  .word 0x00441021
  .word 0x8e840024
  .word 0x8c450040
  .word 0x0c12dbb0
  .word 0x00000000
  .word 0x8e82002c
  .word 0x8c420000
  .word 0x02021021
  .word 0x8e840028
  .word 0x8c450040
  .word 0x0c12dbb0
  .word 0x00000000
  .word 0x8e820020
  .word 0x8e840024
  .word 0x8c450020
  .word 0x0c12dc08
  .word 0x00000000
  .word 0x86830004
  .word 0xa6830010
  .word 0xc680000c
  .word 0xe6800014
  .word 0xa6920018
  .word 0xae80001c
  .word 0x1000002a
  .word 0x00000000
  .word 0x8e85002c
  .word 0x10a00024
  .word 0x00000000
  .word 0x0013243c
  .word 0x0004243f
  .word 0x94a30004
  .word 0x0083082a
  .word 0x1020001e
  .word 0x00000000
  .word 0x00041880
  .word 0x00641821
  .word 0x00032100
  .word 0x8ca30000
  .word 0x24630040
  .word 0x00641821
  .word 0x8c650000
  .word 0x10a00015
  .word 0x00000000
  .word 0x3c030095
  .word 0x246371d0
  .word 0x10a30011
  .word 0x00000000
  .word 0x8e820020
  .word 0x8c440020
  .word 0x0c12dbb0
  .word 0x00000000
  .word 0x8e820020
  .word 0x44806000
  .word 0x8c440020
  .word 0x0c12dd30
  .word 0x00000000
  .word 0x8e820020
  .word 0x8c440020
  .word 0x3c050031
  .word 0x24a53090
  .word 0x0280302d
  .word 0x0c12dc04
  .word 0x00000000
  .word 0xa6800018
  .word 0x3c033f80
  .word 0xae83001c
  .word 0x9683004c
  .word 0x3063f7ff
  .word 0xa683004c
  .word 0x8e850030
  .word 0x10a00015
  .word 0x00000000
  .word 0x00131c3c
  .word 0x00031c3f
  .word 0x00032080
  .word 0x8ca30014
  .word 0x00641821
  .word 0x8c630000
  .word 0xaca3001c
  .word 0x32230020
  .word 0x10600004
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000004
  .word 0x00000000
  .word 0x8ca30020
  .word 0x00641821
  .word 0x8c630000
  .word 0xaca30028
  .word 0x24030001
  .word 0xaca3002c
  .word 0xa4b20030
  .word 0xae80000c
  .word 0xa6930004
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
#endif /* PC_BUILD: asm function omitted */

// FUN_00313BE0


void func_00313be0(MdlAnimEntryTable* table)
{
    u16 i;

    table->unk_06--;
    if (table->unk_06 == 0) {
        for (i = 0; i < table->count; i++) {
            MdlAnimResourceEntry* entry;

            entry = (MdlAnimResourceEntry*)table->entries;
            entry += i;

            if ((entry->resource != NULL) && ((entry->flags & 1) == 0)) {
                func_00320290(entry->resource);
            }
        }

        (*DAT_0096017c)(table);
    }
}

/* W415 direct call census: CLEAN (12 calls, exact retail sequence); no missing callee. */
static inline u32 mdlManagerAdd(u32 left, u32 right)
{
  return left + right;
}

// FUN_00313CA0


void func_00313ca0(int *param_1,u32 param_2)



{

  short sVar1;

  int iVar2;

  int iVar3;

  int *piVar4;

  u8 *puVar5;

  int lVar6;

  int iVar7;

  float fVar8;

  float fVar9;

  

  if ((int *)*param_1 == (int *)0x0) {
    return;
  }

  iVar7 = (int)param_2;
  sVar1 = *(short *)(iVar7 + 4);
  lVar6 = (int)sVar1;
  if (sVar1 < 0) {
    return;
  }

      iVar2 = *(int *)*param_1;

      iVar3 = *(int *)(iVar2 + sVar1 * 8);

      if (*(float *)(iVar7 + 0x1c) < 1.0f) {

        iVar2 = *(int *)(iVar2 + *(short *)(iVar7 + 0x10) * 8);

        if (iVar2 != 0) {

          func_003204a0((int *)iVar2,*(f32 *)(iVar7 + 0x14),0.0f,*(f32 *)(iVar7 + 0x1c),(int *)iVar3);

        }

        else {

          if (iVar3 != 0) {

            func_00320640_frame(0,1.0f - *(float *)(iVar7 + 0x1c),iVar3);

          }

        }

        param_1[1] = iVar3;

      }

      else {

        if (iVar3 == 0) {

          if (param_1[1] != 0) {

            func_00320770((int *)param_1[1]);

          }

        }

        else {

          piVar4 = *(int **)(iVar7 + 0x2c);

          if (!((((piVar4 == (int *)0x0) || ((int)*(u16 *)(piVar4 + 1) <= lVar6)) ||
              (puVar5 = *(u8 **)(*piVar4 + 0x40 + mdlManagerAdd((u32)(sVar1 * 4), (u32)(int)sVar1) * 0x10),
              puVar5 == (u8 *)0x0)) || (puVar5 == (u8 *)&DAT_009571d0))) {
            if (lVar6 < 0) {
              fVar9 = 0.0f;
            }
            else {
              fVar9 = *(f32 *)(iVar7 + 0xc);
            }
            func_00320380((int *)iVar3,fVar9);
          }
          else {
            func_00320380((int *)iVar3,*(f32 *)(iVar7 + 0xc));
            fVar8 = func_00320810((void*)iVar3);
            if (*(float *)(iVar7 + 0xc) <= fVar8) {
              goto LAB_00313e38;
            }
            func_00313090(0,param_2);
          }

        }

      LAB_00313e38:
        param_1[1] = iVar3;

      }



  return;

}

// FUN_00313E60


void func_00313e60(void* param_1)
{
  void *piVar1;
  int *piVar2;

  s32 uVar3;

  piVar2 = (int *)param_1;

  *(u16 *)((int)piVar2 + 0xe) = *(u16 *)((int)piVar2 + 0xe) + -1;

  if (*(u16 *)((int)piVar2 + 0xe) == 0) {
    if (piVar2[2] != 0) {
      func_004c20b0((void *)piVar2[2]);
    }

    if (piVar2[1] != 0) {
      func_004b78b0((void *)piVar2[1]);
    }

    for (uVar3 = 0; (uVar3 & 0xffff) < *(u16 *)(piVar2 + 3); uVar3 = uVar3 + 1 & 0xffff) {
      piVar1 = (void *)*piVar2;
      piVar1 = (void *)((u8 *)piVar1 + (u16)uVar3 * 8);

      if ((*(int *)piVar1 != 0) &&
          ((*(u8 *)((u8 *)piVar1 + 4) & 1) == 0)) {
        func_004b78b0(*(void **)piVar1);
      }
    }

    (*DAT_0096017c)(param_1);
  }

  return;
}

#pragma push
#pragma opt_propagation off
// FUN_00313F40


int func_00313f40(int param_1, void* param_2)
{
  int *piVar1;
  void* list;
  list = param_2;
  piVar1 = (int *)func_004c21d0(list);
  while (piVar1 != (int *)func_004c21e0(list)) {
    if (param_1 == *piVar1) {
      return param_1;
    }
    piVar1++;
  }

  *(int *)func_004c1e70(list,0) = param_1;
  return param_1;
}
#pragma pop

// FUN_00313FE0


void* func_00313fe0(void* param_1,u32 *param_2)
{
  func_004932c0(*(u32 *)((u8 *)param_1 + 0x18), *param_2, param_2[1]);
  return param_1;
}

// FUN_00314020
void FUN_00314020(f32* param_1, f32* param_2)
{
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
}

// FUN_00314060
void FUN_00314060(f32* param_1, f32* param_2)
{
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
}

// FUN_003140A0
void FUN_003140a0(void)
{
}


// FUN_003140B0
void FUN_003140b0(void)
{
}

// FUN_003140C0


void* func_003140c0(void* param_1,u16 *param_2)



{
  s16 rawIndex;
  u16 count;
  s64 lVar2;
  int *piVar1;
  rawIndex = (s16)param_2[2];
  piVar1 = *(int **)(param_2 + 0xc);
  if (piVar1 != (int *)0x0) {
    lVar2 = (s64)rawIndex;
    count = *(u16 *)(piVar1 + 3);
    if ((((lVar2 < (s64)(u32)count) &&
          (*(int *)(*piVar1 + rawIndex * 8) != 0)) && ((*param_2 & 1) == 0)) &&
        ((lVar2 < (s64)(u32)count && (0 <= rawIndex)))) {
      func_004b74c0_typed(*(f32 *)(*(int *)param_1 + 0xc),param_1);
      *(u8 *)(param_2 + 1) = 1;
    }
  }


  return param_1;

}

// FUN_00314170


asm void* func_00314170(void* param_1, void* param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x12000015
  .word 0x00000000
  .word 0x86020004
  .word 0x8e040018
  .word 0x1080001e
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x9482000c
  .word 0x0062082a
  .word 0x10200018
  .word 0x00000000
  .word 0x000318c0
  .word 0x8c820000
  .word 0x00431021
  .word 0x8c420000
  .word 0x10400012
  .word 0x00000000
  .word 0x96020000
  .word 0x30420001
  .word 0x1040000e
  .word 0x00000000
  .word 0x0220202d
  .word 0x8e250000
  .word 0x0c12dbb0
  .word 0x00000000
  .word 0x3c020031
  .word 0x24424020
  .word 0xae220040
  .word 0x3c020031
  .word 0x24424060
  .word 0xae220044
  .word 0x0220102d
  .word 0x10000022
  .word 0x00000000
  .word 0x86030004
  .word 0x8e020018
  .word 0x1040001d
  .word 0x00000000
  .word 0x00032c3c
  .word 0x00052c3f
  .word 0x9444000c
  .word 0x00a4082a
  .word 0x10200017
  .word 0x00000000
  .word 0x000518c0
  .word 0x8c420000
  .word 0x00431021
  .word 0x8c420000
  .word 0x10400011
  .word 0x00000000
  .word 0x96020000
  .word 0x30420001
  .word 0x1440000d
  .word 0x00000000
  .word 0x00a4082a
  .word 0x1020000a
  .word 0x00000000
  .word 0x04a00008
  .word 0x00000000
  .word 0x8e220000
  .word 0x0220202d
  .word 0xc44c000c
  .word 0x0c12dd30
  .word 0x00000000
  .word 0x24020001
  .word 0xa2020002
  .word 0x0220102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
}

// FUN_003142B0
u32 func_003142b0(void* param_1)
{
    s32 iVar2;
    s32 iVar1;
    s32 uVar3;
    char* uVar4;
    s32 lVar5;
    s32 iVar6;
    void* iVar7;

    iVar1 = RpMaterialGetUserDataArrayCount();
    uVar3 = 0;
    while (uVar3 < iVar1)
    {
        iVar7 = RpMaterialGetUserDataArray(param_1, uVar3);
        uVar4 = RpUserDataArrayGetName(iVar7);
        if (strcmp(uVar4, DAT_007cca08) == 0)
        {
            iVar2 = func_0048ef30(iVar7);
            iVar6 = 0;
            while (iVar6 < iVar2)
            {
                lVar5 = RpUserDataArrayGetFormat(iVar7);
                if (lVar5 == 3)
                {
                    return (u32)func_0048ef80(iVar7, iVar6);
                }
                iVar6++;
            }
        }
        uVar3++;
    }
    return 0;
}

// FUN_003143C0


void func_003143c0(u8* param_1,RpClump* param_2)
{

  u32 uVar1;

  u32 *puVar2;

  u32 *puVar3;

  u32 userData;
  u32 animation;

  struct {
    code callback;
    u32 value;
  } callbackData;

  

  if ((*(int *)(param_1 + 0x18) != 0) &&

     (*(u32 *)(param_1 + 0xc) = 0, *(int *)(*(int *)(param_1 + 0x18) + 8) == 0)) {

    uVar1 = func_004c1d50(4,0);

    callbackData.callback = (code)func_00313f40;
    callbackData.value = uVar1;

    func_004916d0_callback(param_2,(void (*)(void))func_00313fe0,&callbackData);

    *(u32 *)(*(int *)(param_1 + 0x18) + 8) = uVar1;

    for (puVar2 = (u32 *)func_004c21d0(*(u32 *)(*(int *)(param_1 + 0x18) + 8));

        puVar3 = (u32 *)func_004c21e0(*(u32 *)(*(int *)(param_1 + 0x18) + 8)),

        puVar2 != puVar3; puVar2 = puVar2 + 1) {

      userData = func_003142b0((void*)*puVar2);

      if (((userData != 0) && (func_00524670(userData,&gp0xffff9d10,5) == 0)) &&

         (animation = func_004b97b0(*puVar2,0), animation != 0)) {

        func_004b7010(animation,func_00314170,0);

        *(u8 **)((int)animation + 0x40) = LAB_00314020_abs;

        *(u8 **)((int)animation + 0x44) = LAB_00314060_abs;

      }

    }

  }

  return;

}

// FUN_00314510
void* func_00314510(void* param_1)
{
  int iVar1;
  int iVar2;
  int iVar5;
  int bVar3;
  s32 lVar4;

  iVar1 = *(int *)((u8*)param_1 + 0x18);
  if (iVar1 == 0) {
    return param_1;
  }
  lVar4 = func_0048a2c0(iVar1);
  if (lVar4 != 0) {
    bVar3 = false;
    iVar2 = *(int *)((u8*)iVar1 + 0x24);
    iVar5 = 0;
    while ((iVar5 < iVar2 && (!bVar3))) {
      lVar4 = func_00469030(*(u32 *)(*(int *)((u8*)iVar1 + 0x20) + iVar5 * 4));
      if (lVar4 != 0) {
        bVar3 = true;
      }
      iVar5 = iVar5 + 1;
    }
    lVar4 = func_0048a480(param_1);
    if (((lVar4 == 2) || (lVar4 == 1)) || ((lVar4 != 3 && (lVar4 != 0)))) {
      if (bVar3) {
        func_0048a3f0(param_1,2);
      }
      else {
        func_0048a3f0(param_1,1);
      }
    }
  }
  else {
    func_00468dc0(param_1);
  }
  return param_1;
}

// FUN_00314650


u32 func_00314650(u32 param_1)
{
    int iVar1;
    int iVar2;
    u32 lVar3;
    u32 uVar4;
    int iVar5;

    iVar1 = *(int *)((int)param_1 + 0x18);
    if (iVar1 == 0) {
        return param_1;
    }

    lVar3 = func_0048a2c0(iVar1);
    if (lVar3 == 0) {
        return param_1;
    }

    uVar4 = func_0048a3d0(lVar3);
    if (uVar4 <= 0x40) {
        return param_1;
    }

    iVar2 = *(int *)(iVar1 + 0x24);
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
        func_00312e80(*(u32 *)(*(int *)(iVar1 + 0x20) + iVar5 * 4));
    }

    return param_1;
}

// FUN_00314730


void func_00314730(u8* param_2,f32 param_1)
{

  u32 *puVar2;

  u32 uVar1;

  u32 *puVar3;

  u32 lVar4;

  

  if ((*(int *)(param_2 + 0x18) != 0) && (*(int *)(*(int *)(param_2 + 0x18) + 8) != 0)) {

    *(f32 *)(param_2 + 0xc) = param_1;

    *(f32 *)(param_2 + 0x10) = param_1;

    uVar1 = *(u32 *)(*(int *)(param_2 + 0x18) + 8);

    for (puVar2 = (u32 *)func_004c21d0(uVar1); puVar3 = (u32 *)func_004c21e0(uVar1),

        puVar2 != puVar3; puVar2 = puVar2 + 1) {

      lVar4 = func_00469030(*puVar2);

      switch (lVar4) {
      case 5:
      case 6:

        lVar4 = func_004b97b0(*puVar2,0);

        if (lVar4 != 0) {

          func_004b74c0_ptrfirst(lVar4,param_1);

        }

        if ((*(u8 *)(param_2 + 2) != 1) && (lVar4 = func_004b97b0(*puVar2,1), lVar4 != 0)) {

          func_004b74c0_ptrfirst(lVar4,param_1);

        }

        break;

      }

    }

  }

  return;

}

#pragma push
#pragma opt_lifetimes on
// FUN_00314850


#ifndef PC_BUILD
asm void func_00314850(RpClump* param_1,void* param_2,s16 param_3,u16 param_4,u16 param_5)
{
  .set noreorder
  .word 0x27bdff50
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
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x8ca30018
  .word 0x10600118
  .word 0x00000000
  .word 0x96420000
  .word 0x3042fffe
  .word 0xa6420000
  .word 0x3102ffff
  .word 0x30430001
  .word 0x96420000
  .word 0x00431025
  .word 0xa6420000
  .word 0xa2400002
  .word 0xae400010
  .word 0x30e2ffff
  .word 0x18400021
  .word 0x00000000
  .word 0x86460004
  .word 0x2402ffff
  .word 0x10c2001d
  .word 0x00000000
  .word 0x8e450018
  .word 0x10a0001a
  .word 0x00000000
  .word 0x94a4000c
  .word 0x00c4082a
  .word 0x10200016
  .word 0x00000000
  .word 0x8ca30000
  .word 0x000610c0
  .word 0x00621021
  .word 0x8c420000
  .word 0x10400010
  .word 0x00000000
  .word 0x10a0000e
  .word 0x00000000
  .word 0x0011143c
  .word 0x0002143f
  .word 0x0044082a
  .word 0x10200009
  .word 0x00000000
  .word 0x000210c0
  .word 0x00621021
  .word 0x8c420000
  .word 0x10400004
  .word 0x00000000
  .word 0xa6470014
  .word 0x10000002
  .word 0x00000000
  .word 0xa6400014
  .word 0x8e440018
  .word 0x108000c2
  .word 0x00000000
  .word 0x00111c3c
  .word 0x00031c3f
  .word 0x9482000c
  .word 0x0062082a
  .word 0x102000bc
  .word 0x00000000
  .word 0x0003b8c0
  .word 0x8c820000
  .word 0x00571021
  .word 0x8c420000
  .word 0x104000b6
  .word 0x00000000
  .word 0x8c960008
  .word 0x02c0202d
  .word 0x0c130874
  .word 0x00000000
  .word 0x0040802d
  .word 0x1000009c
  .word 0x00000000
  .word 0x8e040000
  .word 0x0c11a40c
  .word 0x00000000
  .word 0x24030006
  .word 0x10430006
  .word 0x00000000
  .word 0x24030005
  .word 0x10430003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x8e040000
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c11a66c
  .word 0x00000000
  .word 0x8e040000
  .word 0x0c0c50ac
  .word 0x00000000
  .word 0x0040a02d
  .word 0x12800085
  .word 0x00000000
  .word 0x8e420018
  .word 0x8c420000
  .word 0x02e21021
  .word 0x8c440000
  .word 0x0280282d
  .word 0x0c12ddfc
  .word 0x00000000
  .word 0x0040982d
  .word 0x12600067
  .word 0x00000000
  .word 0x0280202d
  .word 0x27859d10
  .word 0x24060005
  .word 0x0c14919c
  .word 0x00000000
  .word 0x0040f026
  .word 0x2fde0001
  .word 0x8e040000
  .word 0x24050001
  .word 0x0c12e5ec
  .word 0x00000000
  .word 0x0040a02d
  .word 0x12800015
  .word 0x00000000
  .word 0x8e840000
  .word 0x0c12e4b4
  .word 0x00000000
  .word 0x8e82002c
  .word 0x7fa200a0
  .word 0x0260202d
  .word 0x0c12db74
  .word 0x00000000
  .word 0x7ba300a0
  .word 0x14620006
  .word 0x00000000
  .word 0x8e830024
  .word 0x8e620000
  .word 0x8c420004
  .word 0x10620005
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c12dbac
  .word 0x00000000
  .word 0x0000a02d
  .word 0x1280000a
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0c12dbb0
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c12e4d4
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e040000
  .word 0x0260282d
  .word 0x24060001
  .word 0x0c12e5bc
  .word 0x00000000
  .word 0x8e040000
  .word 0x24050001
  .word 0x0c12e5ec
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0260202d
  .word 0x0c12db74
  .word 0x00000000
  .word 0x24030001
  .word 0x14430007
  .word 0x00000000
  .word 0x8e040000
  .word 0x24050005
  .word 0x0c11a3a8
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8e040000
  .word 0x24050006
  .word 0x0c11a3a8
  .word 0x00000000
  .word 0x24020001
  .word 0x17c2000f
  .word 0x00000000
  .word 0x0280202d
  .word 0x3c050031
  .word 0x24a54170
  .word 0x0240302d
  .word 0x0c12dc04
  .word 0x00000000
  .word 0x3c020031
  .word 0x24424020
  .word 0xae820040
  .word 0x3c020031
  .word 0x24424060
  .word 0xae820044
  .word 0x10000023
  .word 0x00000000
  .word 0x0280202d
  .word 0x3c050031
  .word 0x24a540c0
  .word 0x0240302d
  .word 0x0c12dc04
  .word 0x00000000
  .word 0x8e620000
  .word 0x8c420010
  .word 0xae820040
  .word 0x8e620000
  .word 0x8c420014
  .word 0xae820044
  .word 0x10000015
  .word 0x00000000
  .word 0x8e040000
  .word 0x24050001
  .word 0x0c12e5ec
  .word 0x00000000
  .word 0x0040982d
  .word 0x1260000e
  .word 0x00000000
  .word 0x8e620000
  .word 0x10400005
  .word 0x00000000
  .word 0x44806000
  .word 0x0260202d
  .word 0x0c12dd30
  .word 0x00000000
  .word 0x3c020031
  .word 0x244240a0
  .word 0xae620040
  .word 0x3c020031
  .word 0x244240b0
  .word 0xae620044
  .word 0x26100004
  .word 0x02c0202d
  .word 0x0c130878
  .word 0x00000000
  .word 0x1602ff61
  .word 0x00000000
  .word 0x02a0202d
  .word 0x3c050031
  .word 0x24a54650
  .word 0x0000302d
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x02a0202d
  .word 0x3c050031
  .word 0x24a54510
  .word 0x0000302d
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x8c940008
  .word 0x0280202d
  .word 0x0c130874
  .word 0x00000000
  .word 0x0040982d
  .word 0x10000019
  .word 0x00000000
  .word 0x8e640000
  .word 0x0c0c50ac
  .word 0x00000000
  .word 0x10400013
  .word 0x00000000
  .word 0x8e640000
  .word 0x24050001
  .word 0x0c12e5ec
  .word 0x00000000
  .word 0x0040802d
  .word 0x1200000c
  .word 0x00000000
  .word 0x8e040000
  .word 0x0c12e4b4
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c12dbac
  .word 0x00000000
  .word 0x8e640000
  .word 0x0000282d
  .word 0x24060001
  .word 0x0c12e5f4
  .word 0x00000000
  .word 0x26730004
  .word 0x0280202d
  .word 0x0c130878
  .word 0x00000000
  .word 0x1662ffe4
  .word 0x00000000
  .word 0xa6510004
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
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_lifetimes reset
#pragma pop

#pragma push
#pragma opt_lifetimes on
/* W415 reverted probe: swapping outer branches matched call order but regressed nd415 -> 456 (object 720/736); u8 flag variant unchanged. */
// FUN_00314D30


#ifndef PC_BUILD
asm void func_00314d30(void* param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080982d
  .word 0x8c830018
  .word 0x106000a4
  .word 0x00000000
  .word 0x8c630008
  .word 0x106000a1
  .word 0x00000000
  .word 0x96620014
  .word 0x14400006
  .word 0x00000000
  .word 0xc78180e4
  .word 0xc6600008
  .word 0x46000d02
  .word 0x10000004
  .word 0x00000000
  .word 0x4480a000
  .word 0x2442ffff
  .word 0xa6620014
  .word 0xc661000c
  .word 0xc78080e4
  .word 0x46000800
  .word 0xe660000c
  .word 0xc6600010
  .word 0x46140000
  .word 0xe6600010
  .word 0x8e620018
  .word 0x8c510008
  .word 0x0220202d
  .word 0x0c130874
  .word 0x00000000
  .word 0x0040902d
  .word 0x10000082
  .word 0x00000000
  .word 0x8e440000
  .word 0x0c11a40c
  .word 0x00000000
  .word 0x24030006
  .word 0x10430006
  .word 0x00000000
  .word 0x24030005
  .word 0x10430003
  .word 0x00000000
  .word 0x10000076
  .word 0x00000000
  .word 0x8e440000
  .word 0x0000282d
  .word 0x0c12e5ec
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000017
  .word 0x00000000
  .word 0x8e030040
  .word 0x3c020031
  .word 0x24424020
  .word 0x1462000c
  .word 0x00000000
  .word 0x8e030044
  .word 0x3c020031
  .word 0x24424060
  .word 0x14620007
  .word 0x00000000
  .word 0x0200202d
  .word 0xc78c80e4
  .word 0x0c12dc90
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x0200202d
  .word 0xc66c000c
  .word 0x0c12dd30
  .word 0x00000000
  .word 0xc6000004
  .word 0xe660000c
  .word 0x92620002
  .word 0x24050001
  .word 0x10450035
  .word 0x00000000
  .word 0x8e440000
  .word 0x0c12e5ec
  .word 0x00000000
  .word 0x0040802d
  .word 0x1200004c
  .word 0x00000000
  .word 0x8e030040
  .word 0x3c020031
  .word 0x24424020
  .word 0x14620012
  .word 0x00000000
  .word 0x8e030044
  .word 0x3c020031
  .word 0x24424060
  .word 0x1462000d
  .word 0x00000000
  .word 0x0200202d
  .word 0x3c050031
  .word 0x24a54170
  .word 0x0260302d
  .word 0x0c12dc04
  .word 0x00000000
  .word 0x0200202d
  .word 0x4600a306
  .word 0x0c12dc90
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x0200202d
  .word 0x3c050031
  .word 0x24a540c0
  .word 0x0260302d
  .word 0x0c12dc04
  .word 0x00000000
  .word 0x8e030040
  .word 0x3c020031
  .word 0x244240a0
  .word 0x1062000a
  .word 0x00000000
  .word 0x8e030044
  .word 0x3c020031
  .word 0x244240b0
  .word 0x10620005
  .word 0x00000000
  .word 0x0200202d
  .word 0xc66c0010
  .word 0x0c12dd30
  .word 0x00000000
  .word 0xc6000004
  .word 0xe6600010
  .word 0x1000001e
  .word 0x00000000
  .word 0x8e440000
  .word 0x0c12e5ec
  .word 0x00000000
  .word 0x10400019
  .word 0x00000000
  .word 0x8c440040
  .word 0x3c030031
  .word 0x24634020
  .word 0x1483000e
  .word 0x00000000
  .word 0x8c440044
  .word 0x3c030031
  .word 0x24634060
  .word 0x14830009
  .word 0x00000000
  .word 0x0040202d
  .word 0x3c050031
  .word 0x24a54170
  .word 0x0260302d
  .word 0x0c12dc04
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x0040202d
  .word 0x3c050031
  .word 0x24a540c0
  .word 0x0260302d
  .word 0x0c12dc04
  .word 0x00000000
  .word 0x8e440000
  .word 0x0c12e4dc
  .word 0x00000000
  .word 0x26520004
  .word 0x0220202d
  .word 0x0c130878
  .word 0x00000000
  .word 0x1642ff7b
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_lifetimes reset
#pragma pop

// FUN_00315010


void* func_00315010(void* object, void* data)
{
    if (*(void**)((u8*)data + 4) == (void*)func_00466720()) {
        *(void**)data = object;
        return NULL;
    }

    func_004cb6e0(object, (void (*)(void))func_00315010, data);
    return object;
}

#pragma push
#pragma opt_loop_invariants on
/* W323 callback symbol literal nd188 -> nd185. */
// FUN_00315090


#ifndef PC_BUILD
asm u32 func_00315090(RwMatrix* param_1,u16 *param_2,u16 param_3,int param_4)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x94a80000
  .word 0x0000482d
  .word 0x30c6ffff
  .word 0x1000000c
  .word 0x00000000
  .word 0x3124ffff
  .word 0x00041080
  .word 0x00441021
  .word 0x00022100
  .word 0x8ca20004
  .word 0x00441021
  .word 0x8c420040
  .word 0x10c20007
  .word 0x00000000
  .word 0x25220001
  .word 0x3049ffff
  .word 0x3123ffff
  .word 0x0068102a
  .word 0x1440fff2
  .word 0x00000000
  .word 0x14680004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000027
  .word 0x00000000
  .word 0x3123ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021900
  .word 0x8ca20004
  .word 0x00439821
  .word 0x8e710044
  .word 0x8cf20004
  .word 0x0240202d
  .word 0x0c1199c8
  .word 0x00000000
  .word 0x16220003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0xafb1005c
  .word 0xafa00058
  .word 0x0240202d
  .word 0x3c050031
  .word 0x24a55010
  .word 0x27a60058
  .word 0x0c132db8
  .word 0x00000000
  .word 0x8fb20058
  .word 0x16400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000a
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x0200202d
  .word 0x0260282d
  .word 0x0040302d
  .word 0x0c130bcc
  .word 0x00000000
  .word 0x24020001
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
#pragma pop

// FUN_003151D0


#ifndef PC_BUILD
asm void func_003151d0(Model* param_1)
{
  .set noreorder
  .word 0x27bdfe60
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x908503a9
  .word 0x908303a8
  .word 0x0065082a
  .word 0x1020000c
  .word 0x00000000
  .word 0x928203aa
  .word 0x00621021
  .word 0x00a2082a
  .word 0x10200004
  .word 0x00000000
  .word 0xa28503a8
  .word 0x10000013
  .word 0x00000000
  .word 0xa28203a8
  .word 0x10000010
  .word 0x00000000
  .word 0x00a3082a
  .word 0x1020000c
  .word 0x00000000
  .word 0x928203aa
  .word 0x00621023
  .word 0x0045082a
  .word 0x10200004
  .word 0x00000000
  .word 0xa28503a8
  .word 0x10000005
  .word 0x00000000
  .word 0xa28203a8
  .word 0x10000002
  .word 0x00000000
  .word 0xa28503a8
  .word 0xa3a0019c
  .word 0xa3a0019d
  .word 0xa3a0019e
  .word 0x928303a8
  .word 0x928200d3
  .word 0x00621018
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3402fe01
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
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
  .word 0xa3a3019f
  .word 0x92830388
  .word 0x30620001
  .word 0x10400009
  .word 0x00000000
  .word 0x30620020
  .word 0x14400006
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8c450004
  .word 0x10000004
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x8c450004
  .word 0x92830388
  .word 0x30620002
  .word 0x104000cc
  .word 0x00000000
  .word 0x30620020
  .word 0x144000c9
  .word 0x00000000
  .word 0x30620004
  .word 0x14400007
  .word 0x00000000
  .word 0x27a40070
  .word 0x24a50010
  .word 0x0c12f72c
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0xc780821c
  .word 0xe7a00070
  .word 0xafa00074
  .word 0xafa00078
  .word 0xe7a0007c
  .word 0xc7a90074
  .word 0xc6880390
  .word 0xc7a20070
  .word 0xc687038c
  .word 0xc7a10078
  .word 0xc6860394
  .word 0x4609401a
  .word 0x44802800
  .word 0x4602381e
  .word 0x4601301e
  .word 0xc7a0007c
  .word 0xc6840398
  .word 0x4600231c
  .word 0x46056034
  .word 0x45000010
  .word 0x00000000
  .word 0x460000c7
  .word 0xe7a3008c
  .word 0x46001087
  .word 0xe7a20080
  .word 0x46004807
  .word 0xe7a00084
  .word 0x46000847
  .word 0xe7a10088
  .word 0x46004002
  .word 0x46002818
  .word 0x4602381c
  .word 0x46002818
  .word 0x4601301c
  .word 0x46002818
  .word 0x4603231c
  .word 0x0c14ba7a
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46000882
  .word 0xc68103ac
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x4500007e
  .word 0x00000000
  .word 0xc68003b0
  .word 0x46001036
  .word 0x4501000c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x46020503
  .word 0x00000000
  .word 0x00000000
  .word 0x4601a034
  .word 0x45000005
  .word 0x00000000
  .word 0x46000d06
  .word 0x10000002
  .word 0x00000000
  .word 0x46000d06
  .word 0x2684038c
  .word 0x27a50070
  .word 0x27a60090
  .word 0x0c12f8c4
  .word 0x00000000
  .word 0x44805800
  .word 0x00000000
  .word 0x460ba036
  .word 0x4500000b
  .word 0x00000000
  .word 0xc683038c
  .word 0xc6820390
  .word 0xc6810394
  .word 0xc6800398
  .word 0xe7a30080
  .word 0xe7a20084
  .word 0xe7a10088
  .word 0xe7a0008c
  .word 0x10000050
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45000005
  .word 0x00000000
  .word 0x7ba20070
  .word 0x7fa20080
  .word 0x10000046
  .word 0x00000000
  .word 0x46140001
  .word 0x8fa200b4
  .word 0x14400026
  .word 0x00000000
  .word 0xc7aa00b0
  .word 0x460a0102
  .word 0x460420c2
  .word 0xc7898220
  .word 0xc7888048
  .word 0x46085818
  .word 0x4603481c
  .word 0xc7878118
  .word 0x46075818
  .word 0x4600181c
  .word 0xc7868050
  .word 0x46065818
  .word 0x4600181c
  .word 0xc7858054
  .word 0x46055818
  .word 0x4600181c
  .word 0xc78281e0
  .word 0x46025818
  .word 0x4600185c
  .word 0x46041802
  .word 0x46045818
  .word 0x4601001c
  .word 0x460aa102
  .word 0x460420c2
  .word 0x46085818
  .word 0x4603485c
  .word 0x46075818
  .word 0x4601185c
  .word 0x46065818
  .word 0x4601185c
  .word 0x46055818
  .word 0x4601185c
  .word 0x46025818
  .word 0x4601189c
  .word 0x46041842
  .word 0x46045818
  .word 0x46020d1c
  .word 0xc7a10090
  .word 0x46000942
  .word 0xe7a50080
  .word 0xc7a10094
  .word 0x46000902
  .word 0xe7a40084
  .word 0xc7a10098
  .word 0x460008c2
  .word 0xe7a30088
  .word 0xc7a100a0
  .word 0x44801000
  .word 0x00000000
  .word 0x46051018
  .word 0x4614085c
  .word 0xe7a10080
  .word 0xc7a100a4
  .word 0x46041018
  .word 0x4614085c
  .word 0xe7a10084
  .word 0xc7a100a8
  .word 0x46031018
  .word 0x4614085c
  .word 0xe7a10088
  .word 0xc7a2009c
  .word 0xc7a100ac
  .word 0x4614081a
  .word 0x4600101c
  .word 0xe7a0008c
  .word 0xc7a30080
  .word 0xc7a20084
  .word 0xc7a10088
  .word 0xc7a0008c
  .word 0xe683038c
  .word 0xe6820390
  .word 0xe6810394
  .word 0xe6800398
  .word 0x10000009
  .word 0x00000000
  .word 0xc7a30070
  .word 0xc7a20074
  .word 0xc7a10078
  .word 0xc7a0007c
  .word 0xe683038c
  .word 0xe6820390
  .word 0xe6810394
  .word 0xe6800398
  .word 0x27a40188
  .word 0x3c05006a
  .word 0x24a5ab88
  .word 0x24060001
  .word 0x2687038c
  .word 0x0c12f878
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x24b00010
  .word 0x2684038c
  .word 0x0200282d
  .word 0x0c12f72c
  .word 0x00000000
  .word 0xc6020020
  .word 0xc6010024
  .word 0xc6000028
  .word 0xe7a20188
  .word 0xe7a1018c
  .word 0xe7a00190
  .word 0x93a3019f
  .word 0x1060014f
  .word 0x00000000
  .word 0xc7a0018c
  .word 0x44800800
  .word 0x00000000
  .word 0x46010034
  .word 0x4501000d
  .word 0x00000000
  .word 0xc780821c
  .word 0xe680038c
  .word 0xe6810390
  .word 0xe6810394
  .word 0xe6800398
  .word 0x27a40188
  .word 0x3c05006a
  .word 0x24a5ab88
  .word 0x24060001
  .word 0x2687038c
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc68003a0
  .word 0xc683039c
  .word 0x46001832
  .word 0x45010008
  .word 0x00000000
  .word 0xc68203a4
  .word 0x46030041
  .word 0x44800000
  .word 0x00000000
  .word 0x46030018
  .word 0x4601101c
  .word 0xe680039c
  .word 0xc682039c
  .word 0xc7a1018c
  .word 0x46000805
  .word 0x46020034
  .word 0x4500000b
  .word 0x00000000
  .word 0x44800000
  .word 0x00000000
  .word 0x46000834
  .word 0x45010004
  .word 0x00000000
  .word 0xe7a2018c
  .word 0x10000003
  .word 0x00000000
  .word 0x46001007
  .word 0xe7a0018c
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
  .word 0xc7a1018c
  .word 0xc7a00188
  .word 0x46000007
  .word 0x46010003
  .word 0xe7a000d0
  .word 0xc78080b0
  .word 0xe7a000d4
  .word 0xc7a00190
  .word 0x46000007
  .word 0x46010003
  .word 0xe7a000d8
  .word 0x8e8200dc
  .word 0x8c500004
  .word 0x27a40100
  .word 0x26850040
  .word 0x0280302d
  .word 0x0c130bcc
  .word 0x00000000
  .word 0x27a40140
  .word 0x27a50100
  .word 0x27a600c0
  .word 0x0c130bcc
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a50140
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x96820138
  .word 0x30424000
  .word 0x10400009
  .word 0x00000000
  .word 0x8e84010c
  .word 0x268500ec
  .word 0x26860138
  .word 0x27a700c0
  .word 0x0c0c45cc
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x8e84010c
  .word 0x0c119bbc
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000e
  .word 0x27a50198
  .word 0x3c020096
  .word 0x8c420094
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x92820388
  .word 0x30420008
  .word 0x0002102b
  .word 0x3046ffff
  .word 0x8e8400dc
  .word 0x27a5019c
  .word 0x0c0c58c8
  .word 0x00000000
  .word 0x8e8300e0
  .word 0x14600008
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x3445c01b
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x8c620010
  .word 0x14400004
  .word 0x00000000
  .word 0x8c62001c
  .word 0x1040000c
  .word 0x00000000
  .word 0x92820388
  .word 0x30420080
  .word 0x14400008
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x3445f08b
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x3445d7fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x8e8400dc
  .word 0x0c06a238
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0c5db0
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000083
  .word 0x00000000
  .word 0x3223ffff
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x02821821
  .word 0x906203b4
  .word 0x30420001
  .word 0x10400078
  .word 0x00000000
  .word 0x247003b8
  .word 0x8c6203b8
  .word 0x10400074
  .word 0x00000000
  .word 0x0280202d
  .word 0x0220282d
  .word 0x0c0c65dc
  .word 0x00000000
  .word 0x1040006e
  .word 0x00000000
  .word 0x8e130000
  .word 0x966200d8
  .word 0x30420002
  .word 0x14400069
  .word 0x00000000
  .word 0x8e7200dc
  .word 0x8e500004
  .word 0x27a40100
  .word 0x26650040
  .word 0x0260302d
  .word 0x0c130bcc
  .word 0x00000000
  .word 0x27a40140
  .word 0x27a50100
  .word 0x27a600c0
  .word 0x0c130bcc
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a50140
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0000802d
  .word 0x0000302d
  .word 0x0000282d
  .word 0x8e640118
  .word 0x10800007
  .word 0x00000000
  .word 0x94830004
  .word 0x866200f0
  .word 0x0043082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24050001
  .word 0x10a0000b
  .word 0x00000000
  .word 0x866300f0
  .word 0x00031080
  .word 0x00431021
  .word 0x00021900
  .word 0x8c820000
  .word 0x00431021
  .word 0x8c420040
  .word 0x10400002
  .word 0x00000000
  .word 0x24060001
  .word 0x10c0000d
  .word 0x00000000
  .word 0x866300f0
  .word 0x00031080
  .word 0x00431021
  .word 0x00021900
  .word 0x8c820000
  .word 0x00431021
  .word 0x8c430040
  .word 0x3c020095
  .word 0x244271d0
  .word 0x10620002
  .word 0x00000000
  .word 0x24100001
  .word 0x12000004
  .word 0x00000000
  .word 0x8e64010c
  .word 0x0c119bbc
  .word 0x00000000
  .word 0x92620388
  .word 0x30420008
  .word 0x0002102b
  .word 0x3046ffff
  .word 0x0240202d
  .word 0x27a5019c
  .word 0x0c0c58c8
  .word 0x00000000
  .word 0x8e8300e0
  .word 0x14600008
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x3445c01b
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x8c620010
  .word 0x14400004
  .word 0x00000000
  .word 0x8c62001c
  .word 0x10400008
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x3445f08b
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x3445d7fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c06a238
  .word 0x00000000
  .word 0x12000004
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0c5db0
  .word 0x00000000
  .word 0x26220001
  .word 0x3051ffff
  .word 0x3222ffff
  .word 0x28420005
  .word 0x1440ff7b
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x2404000e
  .word 0x8fa50198
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd01a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00315C20


#ifndef PC_BUILD
asm void func_00315c20(int param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x948200d8
  .word 0x30420400
  .word 0x10400004
  .word 0x00000000
  .word 0x8e2400dc
  .word 0x0c0c5930
  .word 0x00000000
  .word 0x24040002
  .word 0x24050064
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x962300d8
  .word 0x30620200
  .word 0x10400004
  .word 0x00000000
  .word 0x30620400
  .word 0x10400008
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x3445000f
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x922200d3
  .word 0x284100c9
  .word 0x14200008
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344504fd
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x3445008d
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000e
  .word 0x27a5005c
  .word 0x3c020096
  .word 0x8c420094
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e2300e0
  .word 0x10600005
  .word 0x00000000
  .word 0x962200d8
  .word 0x30420200
  .word 0x10400006
  .word 0x00000000
  .word 0x8e2400dc
  .word 0x0c06a238
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c520070
  .word 0x8c730008
  .word 0x1000000f
  .word 0x00000000
  .word 0x8e640000
  .word 0x0c1244ac
  .word 0x00000000
  .word 0x0240202d
  .word 0x0040282d
  .word 0x0c13277c
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x8e640000
  .word 0x8c820048
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e730028
  .word 0x1660fff1
  .word 0x00000000
  .word 0x2404000e
  .word 0x8fa5005c
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e2200e0
  .word 0x10400005
  .word 0x00000000
  .word 0x962200d8
  .word 0x30420800
  .word 0x1040001a
  .word 0x00000000
  .word 0x24040002
  .word 0x8e2500e4
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x8e2500e8
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e2400dc
  .word 0x0c06a238
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e3000e0
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c069ed4
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c069ff0
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c06a050
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
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00315ED0


Model* func_00315ed0(Model* param_1)



{

  int iVar1;

  u32 uVar2;

  u32 uVar3;

  
  iVar1 = *(int *)((int)param_1 + 0x18);
  uVar2 = *(u32 *)(iVar1 + 0x24);
  for (uVar3 = 0; uVar3 < uVar2; uVar3 = uVar3 + 1) {
    func_001b5a30(((u32 *)*(int *)(iVar1 + 0x20))[uVar3]);
  }

  return param_1;

}

#pragma push
#pragma opt_dead_assignments off
// FUN_00315F50
#ifndef PC_BUILD
asm u32 func_00315f50(void* param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0070
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
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x8c910018
  .word 0x8e220008
  .word 0x34420040
  .word 0xae220008
  .word 0x8e350024
  .word 0x8ca40000
  .word 0x90820000
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
  .word 0xc7808218
  .word 0x460105c2
  .word 0x90820001
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
  .word 0xc7808218
  .word 0x46010582
  .word 0x90820002
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
  .word 0xc7808218
  .word 0x46010542
  .word 0x90820003
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
  .word 0xc7808218
  .word 0x46010502
  .word 0x0000902d
  .word 0x10000087
  .word 0x00000000
  .word 0x00121880
  .word 0x8e220020
  .word 0x00431021
  .word 0x8c500000
  .word 0x0200202d
  .word 0x3c05006a
  .word 0x24a5aba0
  .word 0x0c069900
  .word 0x00000000
  .word 0xa3a2008e
  .word 0x00021a02
  .word 0xa3a3008d
  .word 0x00021c02
  .word 0xa3a3008c
  .word 0x00021602
  .word 0xa3a2008f
  .word 0x93a2008c
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
  .word 0xc7808218
  .word 0x460101c2
  .word 0x93a2008d
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
  .word 0xc7808218
  .word 0x46010182
  .word 0x93a2008e
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
  .word 0xc7808218
  .word 0x46010142
  .word 0x93a2008f
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
  .word 0xc7808218
  .word 0x46010002
  .word 0x461739c2
  .word 0x46163182
  .word 0x46152942
  .word 0x96620004
  .word 0x30420001
  .word 0x14400004
  .word 0x00000000
  .word 0x46140102
  .word 0x10000002
  .word 0x00000000
  .word 0x4600a106
  .word 0x3c02437f
  .word 0x44821800
  .word 0x3c023f00
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4607181c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa3a2008c
  .word 0x46020818
  .word 0x4606181c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa3a2008d
  .word 0x46020818
  .word 0x4605181c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa3a2008e
  .word 0x46020818
  .word 0x4604181c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa3a2008f
  .word 0x93a5008c
  .word 0x93a4008d
  .word 0x93a3008e
  .word 0x93a2008f
  .word 0xa2050004
  .word 0xa2040005
  .word 0xa2030006
  .word 0xa2020007
  .word 0x26520001
  .word 0x0255102b
  .word 0x1440ff78
  .word 0x00000000
  .word 0x0280102d
  .word 0xdfbf0070
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
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_dead_assignments reset
#pragma pop

// FUN_00316320


void func_00316320(u64 param_1,u32* param_2,u16 param_3)



{

  struct {
    u32* ptr;
    u16 value;
  } context;

  context.ptr = param_2;
  context.value = param_3;
  func_004916d0_typed(param_1, (void *)func_00315f50, &context);
  return;

}

// FUN_00316360


u32 func_00316360(void* param_1,u32 *param_2)
{
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u32 *entries;

    iVar1 = *(int *)((int)param_1 + 0x18);
    uVar2 = *(u32 *)(iVar1 + 0x24);
    uVar4 = 0;
    while (uVar4 < uVar2)
    {
        entries = *(u32 **)(iVar1 + 0x20);
        uVar3 = K_Clump_MatUsrDataGetInt(entries[uVar4], "per3modelMatColor");
        if (uVar3 >> 0x18 != 0)
        {
            *param_2 = 0;
            return 0;
        }
        uVar4 = uVar4 + 1;
    }
    return (u32)param_1;
}

// FUN_00316410


u32 func_00316410(void* param_1)
{
  extern u32 func_00469030(u32);
  extern void func_00469510(u32, u32);
  u8 *interp;
  u32 count;
  u32 index;
  u32 entry;

  interp = *(u8 **)((u8 *)param_1 + 0x18);
  count = *(u32 *)(interp + 0x24);
  for (index = 0; index < count; index++) {
    entry = *(u32 *)(*(u32 **)(interp + 0x20) + index);
    if ((func_00469030(entry) & 2) != 0) {
      func_00469510(entry, 1);
    }
  }
  return (u32)param_1;
}

// FUN_003164c0
void mdl003164c0(void* param_1)
{
    FUN_004916d0(param_1, (void(*)())FUN_00316410, 0);
}

#pragma push
#pragma opt_loop_invariants on
// FUN_003164F0


#ifndef PC_BUILD
asm void func_003164f0(int param_1,int param_2)
{
  .set noreorder
  .word 0x0000182d
  .word 0x3c063f80
  .word 0x44861800
  .word 0x10000031
  .word 0x00000000
  .word 0x3066ffff
  .word 0x00063040
  .word 0x00a64021
  .word 0x95060198
  .word 0x18c00029
  .word 0x00000000
  .word 0x14e0000b
  .word 0x00000000
  .word 0xc4a4018c
  .word 0xc4a00184
  .word 0x46001883
  .word 0xc4a00188
  .word 0x46001843
  .word 0xc4a00190
  .word 0x46002002
  .word 0x46001002
  .word 0x46000942
  .word 0x46022042
  .word 0x0000482d
  .word 0x10000016
  .word 0x00000000
  .word 0x3127ffff
  .word 0x00073080
  .word 0x00c73021
  .word 0x000630c0
  .word 0x00c73023
  .word 0x00063080
  .word 0x00863821
  .word 0xe4e10124
  .word 0xe4e50128
  .word 0xe4e5012c
  .word 0xc4a0018c
  .word 0xe4e00130
  .word 0xc4a00190
  .word 0xe4e00134
  .word 0x95060198
  .word 0xace60120
  .word 0x94e600ec
  .word 0x34c60010
  .word 0xa4e600ec
  .word 0x25260001
  .word 0x30c9ffff
  .word 0x3126ffff
  .word 0x28c60004
  .word 0x14c0ffe8
  .word 0x00000000
  .word 0x24630001
  .word 0x3063ffff
  .word 0x3067ffff
  .word 0x28e60010
  .word 0x14c0ffcd
  .word 0x00000000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop

#pragma push
/* Removing this loses FUN_003165e0 (MATCH nd0 -> MISMATCH nd51) - measured W161. */
#pragma opt_loop_invariants on
// FUN_003165E0


void* func_003165e0(void* param_1)
{
  int iVar1;
  u32 uVar2;
  int offset;
  int base;
  int iVar3;
  int iVar4;
  u32 uVar5;
  f32 two;
  f32 x;
  f32 y;
  f32 z;
  f32 w;
  volatile /* Removing this qualifier loses func_003165e0 (MATCH nd0 -> MISMATCH nd105, size 172 -> 132) - measured W170. */ f32 values[4];

  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + 0x18);
  if (iVar1 == 0)
    goto done;

  uVar2 = *(u32 *)(iVar1 + 0x18);
  uVar5 = 0;
  two = 2.0f;
  goto check;

loop:
  offset = uVar5 * 8;
  offset = offset - uVar5;
  offset = offset * 4;
  base = *(int *)(iVar1 + 0x5c);
  iVar3 = base + offset;
  values[0] = *(f32 *)(iVar3 + 4);
  values[1] = *(f32 *)(iVar3 + 8);
  values[2] = *(f32 *)(iVar3 + 0xc);
  values[3] = two * *(f32 *)(iVar3 + 0x10);
  x = values[0];
  y = values[1];
  z = values[2];
  w = values[3];
  *(f32 *)(iVar3 + 4) = x;
  *(f32 *)(iVar3 + 8) = y;
  *(f32 *)(iVar3 + 0xc) = z;
  *(f32 *)(iVar3 + 0x10) = w;
  uVar5 = uVar5 + 1;
check:
  if (uVar5 < uVar2)
    goto loop;

done:
  *(u32 *)(iVar4 + 0x4c) = *(u32 *)(iVar4 + 0x4c) | 2;
  return param_1;
}
#pragma pop

// FUN_00316690
Model* mdlInit(u16 type, u16 id)
{
    Model* mdl;
    u32 i;
    volatile /* Removing this qualifier loses mdlInit (MATCH nd0 -> MISMATCH nd8, size 628 -> 628) - measured W170. */ RwRGBA* color;
    u8 red;
    u8 green;
    u8 blue;
    u8 alpha;
    Model* tail;

    mdl = ((void* (*)(u32, u32))jtbl_00960178[0])(sizeof(Model), rwMEMHINTDUR_GLOBAL);
    memset(mdl, 0, sizeof(Model));

    mdl->flags = MDL_FLAG_FOG | MDL_FLAG_ZTEST | MDL_FLAG_ZWRITE;
    mdl->color.r = 0xff;
    mdl->color.g = 0xff;
    mdl->color.b = 0xff;
    mdl->color.a = 0xff;
    color = &mdl->color;
    red = color->r;
    green = color->g;
    blue = color->b;
    alpha = color->a;
    mdl->runtimeData.animationData[0x22] = red;
    mdl->runtimeData.animationData[0x23] = green;
    mdl->runtimeData.animationData[0x24] = blue;
    mdl->runtimeData.animationData[0x25] = alpha;
    mdl->type = type;
    mdl->id = id;
    mdl->gsAlpha1Reg = 0x44;
    mdl->gsTest1Reg = 0x717fb;

    RwMatrixSetIdentity(&mdl->mat);
    RwMatrixSetIdentity(&mdl->identityMat);
    mdl->scale.x = 1.0f;
    mdl->scale.y = 1.0f;
    mdl->scale.z = 1.0f;
    *(u16*)((u8*)mdl + 0x418) = 2;

    for (i = 0; i < 4; i++)
    {
        func_00313230(&mdl->animSlots[i]);
    }
    *(u32*)((u8*)mdl + 0x360) = 0;

    *(u8*)((u8*)mdl + 0x366) = 1;
    *(s16*)((u8*)mdl + 0x368) = -1;
    *(f32*)((u8*)mdl + 0x36c) = 1.0f;
    memset((u8*)mdl + 0x380, 0, 8);
    *(u8*)((u8*)mdl + 0x382) = 1;
    *(f32*)((u8*)mdl + 0x384) = 1.0f;
    *(u8*)((u8*)mdl + 0x388) = 0;
    *(u32*)((u8*)mdl + 0x39c) = 0;
    *(u32*)((u8*)mdl + 0x3a0) = 0;
    *(u32*)((u8*)mdl + 0x3a4) = 0;
    *(u8*)((u8*)mdl + 0x3a8) = 0xa0;
    *(u8*)((u8*)mdl + 0x3a9) = 0xa0;
    *(u8*)((u8*)mdl + 0x3aa) = 0;

    func_0031eeb0(mdl->runtimeData.animationData);

    for (i = 0; i < 5; i++)
    {
        mdl003196d0(mdl, i, -1);
    }

    tail = sMdlListTails[type];
    mdl->next = NULL;
    if (tail != NULL)
    {
        tail->next = mdl;
        mdl->prev = tail;
    }
    else
    {
        mdl->prev = NULL;
    }
    sMdlListTails[type] = mdl;

    return mdl;
}

#pragma push
/* Removing this loses FUN_00316910 (MATCH nd0 -> MISMATCH nd26) - measured W161. */
#pragma opt_loop_invariants on
// FUN_00316910. Search a model in list by its type, id and flags. Set 'flags' to 0 if no flag filter
Model* mdlSearch(u16 type, u16 id, u16 flags)
{
    Model* mdl;
    u16 modelType;
    u16 modelId;
    u16 modelFlags;

    modelType = type;
    modelId = id;
    modelFlags = flags;
    mdl = sMdlListTails[modelType];

    while (mdl != NULL)
    {
        if (mdl->id == modelId)
        {
            if (modelFlags == 0 || (mdl->flags & modelFlags) != 0)
            {
                break;
            }
        }

        mdl = mdl->prev;
    }

    return mdl;
}
#pragma pop

#pragma push
#pragma opt_common_subs off
/* W323 followups: base pointer nd197 -> nd184; callback symbols nd184 -> nd168; -1 width nd168 -> nd122; hierarchy local nd122 -> nd107; stack-init order nd107 -> nd101. */
// FUN_00316970


#ifndef PC_BUILD
asm void func_00316970(Model* param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c8400dc
  .word 0x3c050031
  .word 0x24a565e0
  .word 0x0000302d
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x8e22037c
  .word 0x10400005
  .word 0x00000000
  .word 0x26240364
  .word 0x8e2500dc
  .word 0x0c0c50f0
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0c0c616c
  .word 0x00000000
  .word 0x10400043
  .word 0x00000000
  .word 0x8e3200dc
  .word 0xafa0004c
  .word 0x26500004
  .word 0x8e440004
  .word 0x3c050031
  .word 0x24a515a0
  .word 0x27a6004c
  .word 0x0c132db8
  .word 0x00000000
  .word 0x8fa6004c
  .word 0xae26010c
  .word 0x0240202d
  .word 0x3c050031
  .word 0x24a51610
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c050031
  .word 0x24a52f90
  .word 0x8e060000
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x0240202d
  .word 0x8e25010c
  .word 0x0c069c5c
  .word 0x00000000
  .word 0x8e23010c
  .word 0x8c620000
  .word 0x34423000
  .word 0xac620000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x64100001
  .word 0x10000017
  .word 0x00000000
  .word 0x3203ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02229021
  .word 0x8e420118
  .word 0x1040000b
  .word 0x00000000
  .word 0x964200ec
  .word 0x34420002
  .word 0xa64200ec
  .word 0x8e24010c
  .word 0x8c860000
  .word 0x0000282d
  .word 0x2407ffff
  .word 0x0c119920
  .word 0x00000000
  .word 0xae42010c
  .word 0x26020001
  .word 0x3050ffff
  .word 0x3202ffff
  .word 0x28420004
  .word 0x1440ffe7
  .word 0x00000000
  .word 0x8e2400dc
  .word 0x0c069d5c
  .word 0x00000000
  .word 0xae2200e0
  .word 0x8e2400dc
  .word 0x3c050031
  .word 0x24a55ed0
  .word 0x0000302d
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x8e2403f4
  .word 0x10800003
  .word 0x00000000
  .word 0x0c0c77b4
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
#pragma pop

// FUN_00316b40
Model* mdlCreateFromPath(u16 type, u16 id, const char* path, u32 readMode)
{
    Model* mdl;

    mdl = mdlInit(type, id);

    if (readMode & MDL_READSYNC)
    {
        mdl->flags |= MDL_FLAG_STREAMSYNC;
    }

    mdlStreamInit(mdl);
    mdlStreamRequestCdvd(mdl, path);

    mdlStreamRead(mdl);

    return mdl;
}

// FUN_00316bd0. Create a model with a loaded .RMD file in memory
Model* mdlCreateFromRmdMemory(u16 type, u16 id, void* rmdMemory, u32 rmdSize, u32 readMode)
{
    Model* mdl;
    MdlRmdFileMemory rmd;

    mdl = mdlInit(type, id);

    if (readMode & MDL_READSYNC)
    {
        mdl->flags |= MDL_FLAG_STREAMSYNC;
    }

    mdlStreamInit(mdl);

    rmd.memory = rmdMemory;
    rmd.size = rmdSize;
    mdlStreamSetRmdFileMemory(mdl, &rmd);

    mdlStreamRead(mdl);

    return mdl;
}

// FUN_00316C70


asm Model* func_00316c70(u16 modelType,u16 id,void* archive,u32 readMode)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x00c0982d
  .word 0x00e0902d
  .word 0x0c0c753c
  .word 0x00000000
  .word 0x1440001e
  .word 0x00000000
  .word 0x8e710110
  .word 0x8e700118
  .word 0xafb0009c
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0c0c59a4
  .word 0x00000000
  .word 0x0040982d
  .word 0x32420001
  .word 0x10400004
  .word 0x00000000
  .word 0x966200d8
  .word 0x34424000
  .word 0xa66200d8
  .word 0x0260202d
  .word 0x0c0c6610
  .word 0x00000000
  .word 0xafb10090
  .word 0xafb00094
  .word 0x0260202d
  .word 0x27a50090
  .word 0x0c0c6628
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x0260102d
  .word 0x1000002c
  .word 0x00000000
  .word 0x0260202d
  .word 0x0000282d
  .word 0x27a6009c
  .word 0x0c040840
  .word 0x00000000
  .word 0x0040802d
  .word 0x8fb6009c
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0c0c59a4
  .word 0x00000000
  .word 0x0040882d
  .word 0x32420001
  .word 0x10400004
  .word 0x00000000
  .word 0x962200d8
  .word 0x34424000
  .word 0xa62200d8
  .word 0x0220202d
  .word 0x0c0c6610
  .word 0x00000000
  .word 0xafb00088
  .word 0xafb6008c
  .word 0x0220202d
  .word 0x27a50088
  .word 0x0c0c6628
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050001
  .word 0x27a6009c
  .word 0x0c040840
  .word 0x00000000
  .word 0x262403f8
  .word 0x02a0282d
  .word 0x0280302d
  .word 0x0040382d
  .word 0x8fa8009c
  .word 0x0c0c7a34
  .word 0x00000000
  .word 0x0220102d
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
}
#pragma push
#pragma opt_loop_invariants on
// FUN_00316e00
asm Model* mdlCreateAndResolvePath(u16 type, u16 id, u32 readMode)
{
  .set noreorder
  .word 0x27bdfeb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x3262ffff
  .word 0x00021880
  .word 0x3c020095
  .word 0x244271f0
  .word 0x00431021
  .word 0x8c440000
  .word 0x3243ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x948200d6
  .word 0x10430006
  .word 0x00000000
  .word 0x8c840424
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fff9
  .word 0x00000000
  .word 0x14800027
  .word 0x00000000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x27a60050
  .word 0x0c0c754c
  .word 0x00000000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0c0c59a4
  .word 0x00000000
  .word 0x0040802d
  .word 0x32220001
  .word 0x10400004
  .word 0x00000000
  .word 0x960200d8
  .word 0x34424000
  .word 0xa60200d8
  .word 0x0200202d
  .word 0x0c0c6610
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a50050
  .word 0x0c0c6630
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0c0c753c
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c0c6640
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0c0c59a4
  .word 0x00000000
  .word 0x0040802d
  .word 0x32220001
  .word 0x10400004
  .word 0x00000000
  .word 0x960200d8
  .word 0x34424000
  .word 0xa60200d8
  .word 0x960200d8
  .word 0x34422000
  .word 0xa60200d8
  .word 0x0200202d
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0150
  .word 0x03e00008
  .word 0x00000000
}
#pragma pop


/* ---- Recovered range 0x311480-0x31D4F0 (Ghidra reference, pending match) ---- */

#ifndef CONCAT44
#endif
#ifndef CONCAT11
#endif
#pragma alias DAT_009571c0_abs DAT_009571c0
#pragma alias DAT_009571c4_abs DAT_009571c4
#pragma alias DAT_009571b0_abs DAT_009571b0
#pragma alias DAT_009571b4_abs DAT_009571b4
#pragma alias DAT_009571b8_abs DAT_009571b8
#pragma alias DAT_009571bc_abs DAT_009571bc
#pragma alias LAB_00314020_abs LAB_00314020
#pragma alias LAB_00314060_abs LAB_00314060
#pragma alias LAB_003140a0_abs LAB_003140a0
#pragma alias LAB_003140b0_abs LAB_003140b0
 #pragma alias DAT_00960090_abs DAT_00960090
#pragma alias DAT_0069b190_abs DAT_0069b190
#pragma alias DAT_0069b1b0_abs DAT_0069b1b0
#pragma alias DAT_0069b0d0_abs DAT_0069b0d0
#pragma alias DAT_0069b1c0_abs DAT_0069b1c0
#pragma alias DAT_0069b1d0_abs DAT_0069b1d0
#pragma alias DAT_0069b1e0_abs DAT_0069b1e0
#pragma alias func_0052ea18_typed func_0052ea18
#pragma alias func_0031b680_u32ptr func_0031b680

// FUN_00316f70
u32 mdlStreamRead(Model* mdl)
{
    Model* source;
    u32 modelId;
    if (mdl->flags & MDL_FLAG_STREAMDONE)
    {
        return true;
    }

    if ((mdl->flags & MDL_FLAG_STREAMUNK1) == 0)
    {
        if (!func_0031b220(mdl))
        {
            return false;
        }

        if (!func_0031ebe0(mdl->runtimeData.animationData))
        {
            return false;
        }

        mdlStreamDestroy(mdl);
        func_00316970(mdl);
    }
    else
    {
        if (!func_0031ebe0(mdl->runtimeData.animationData))
        {
            return false;
        }
        modelId = mdl->id;
        source = sMdlListTails[mdl->type];
        while (source != NULL)
        {
            if (source->id == modelId)
            {
                if (source->flags & MDL_FLAG_STREAMDONE)
                {
                    break;
                }
            }

            source = source->prev;
        }
        if (source == NULL)
        {
            return false;
        }

        mdlCopy(source, mdl);
        mdl->flags &= ~MDL_FLAG_STREAMUNK1;
    }

    mdl->flags |= MDL_FLAG_STREAMDONE;
    return true;
}




// FUN_003170c0
#ifndef PC_BUILD
asm void mdlCopy(const Model* src, Model* dst)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x8c8400dc
  .word 0x10800008
  .word 0x00000000
  .word 0x0c124730
  .word 0x00000000
  .word 0xae8200dc
  .word 0x0040202d
  .word 0x0c069d5c
  .word 0x00000000
  .word 0xae8200e0
  .word 0x0000982d
  .word 0x10000083
  .word 0x00000000
  .word 0x3265ffff
  .word 0x02a0202d
  .word 0x0c0c616c
  .word 0x00000000
  .word 0x1040003b
  .word 0x00000000
  .word 0x00131080
  .word 0x00531021
  .word 0x000210c0
  .word 0x00531023
  .word 0x00022880
  .word 0x02a52021
  .word 0x8c830118
  .word 0x94620006
  .word 0x24420001
  .word 0xa4620006
  .word 0x02858021
  .word 0xae030118
  .word 0x948200ec
  .word 0x30420002
  .word 0x14400021
  .word 0x00000000
  .word 0x8e9000dc
  .word 0xafa0009c
  .word 0x8e040004
  .word 0x3c050031
  .word 0x24a515a0
  .word 0x27a6009c
  .word 0x0c132db8
  .word 0x00000000
  .word 0x00131080
  .word 0x00531021
  .word 0x000210c0
  .word 0x00531023
  .word 0x00021080
  .word 0x02821021
  .word 0x2451010c
  .word 0x8fa6009c
  .word 0xac46010c
  .word 0x0200202d
  .word 0x3c050031
  .word 0x24a51610
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x0200202d
  .word 0x8e250000
  .word 0x0c069c5c
  .word 0x00000000
  .word 0x8e230000
  .word 0x8c620000
  .word 0x34423000
  .word 0xac620000
  .word 0x1000000b
  .word 0x00000000
  .word 0x960200ec
  .word 0x34420002
  .word 0xa60200ec
  .word 0x8e84010c
  .word 0x8c860000
  .word 0x0000282d
  .word 0x2407ffff
  .word 0x0c119920
  .word 0x00000000
  .word 0xae02010c
  .word 0x00131080
  .word 0x00531021
  .word 0x000210c0
  .word 0x00531023
  .word 0x0002b880
  .word 0x02b71021
  .word 0x8c50011c
  .word 0x12000039
  .word 0x00000000
  .word 0x96160000
  .word 0x24020034
  .word 0x00161880
  .word 0x00431021
  .word 0x00439021
  .word 0x0240202d
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040882d
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0240302d
  .word 0x0c148502
  .word 0x00000000
  .word 0x32c2ffff
  .word 0xae220000
  .word 0x26230034
  .word 0xae230014
  .word 0x00021080
  .word 0x00621021
  .word 0xae220020
  .word 0x0000902d
  .word 0x10000018
  .word 0x00000000
  .word 0x8e020014
  .word 0x0012b080
  .word 0x00561021
  .word 0x8c440000
  .word 0x10800006
  .word 0x00000000
  .word 0x0c0c75c0
  .word 0x00000000
  .word 0x8e230014
  .word 0x00761821
  .word 0xac620000
  .word 0x8e020020
  .word 0x00561021
  .word 0x8c440000
  .word 0x10800007
  .word 0x00000000
  .word 0x0012b080
  .word 0x0c0c782c
  .word 0x00000000
  .word 0x8e230020
  .word 0x00761821
  .word 0xac620000
  .word 0x26520001
  .word 0x8e220000
  .word 0x0242102b
  .word 0x1440ffe6
  .word 0x00000000
  .word 0x02971021
  .word 0xac51011c
  .word 0x26730001
  .word 0x2e620004
  .word 0x1440ff7c
  .word 0x00000000
  .word 0x8ea3035c
  .word 0x10600005
  .word 0x00000000
  .word 0x94620006
  .word 0x24420001
  .word 0xa4620006
  .word 0xae83035c
  .word 0x8ea3037c
  .word 0x1060000b
  .word 0x00000000
  .word 0x9462000e
  .word 0x24420001
  .word 0xa462000e
  .word 0xae83037c
  .word 0x26840364
  .word 0x8e8500dc
  .word 0x0c0c50f0
  .word 0x00000000
  .word 0x24020001
  .word 0xa2820366
  .word 0x8ea303f0
  .word 0x10600005
  .word 0x00000000
  .word 0x94620002
  .word 0x24420001
  .word 0xa4620002
  .word 0xae8303f0
  .word 0x8ea403f4
  .word 0x10800007
  .word 0x00000000
  .word 0x0c0c75c0
  .word 0x00000000
  .word 0xae8203f4
  .word 0x0040202d
  .word 0x0c0c77b4
  .word 0x00000000
  .word 0x8ea203f8
  .word 0x10400005
  .word 0x00000000
  .word 0x268403f8
  .word 0x26a503f8
  .word 0x0c0c7ba0
  .word 0x00000000
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0c0c616c
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0xdfbf0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */




// FUN_00317450
Model* mdlClone(const Model* mdl)
{
    Model* clone;

    clone = mdlInit(mdl->type, mdl->id);

    if (mdl->flags & MDL_FLAG_STREAMDONE)
    {
        mdlCopy(mdl, clone);

        clone->flags |= MDL_FLAG_STREAMDONE;
    }
    else
    {
        clone->flags |= MDL_FLAG_STREAMUNK1;
    }

    return clone;
}




// Matrix callback storage is contiguous to preserve all RenderWare matrix fields.
/* W389 measured func_00311730 opt_loop_invariants on + opt_lifetimes on: nd 4296 -> 4240; object 5360/5440 -> 5328/5440. */
// FUN_003174e0
void mdlDestroy(Model* mdl)
{
    void* data;
    u32 i;

    if (mdl->clump != NULL)
    {
        FUN_00491ea0(mdl->clump);
    }

    for (i = 0; i < 4; i++)
    {
        func_003132c0((u8*)&mdl->animSlots[i]);
    }

    if (mdl->unk_35c != NULL)
    {
        func_00313be0(mdl->unk_35c);
        mdl->unk_35c = NULL;
    }

    data = *(void**)((u8*)mdl + 0x37c);
    if (data != NULL)
    {
        func_00313e60(data);
        *(u32*)&mdl->unkData2[0x1c] = 0;
    }

    data = mdl->runtimeData.refCountedData;
    if (data != NULL)
    {
        *(u16*)((u8*)data + 2) = *(u16*)((u8*)data + 2) - 1;
        if (*(u16*)((u8*)data + 2) == 0)
        {
            RwFree(*(void**)((u8*)data + 4));
        }
    }
    if (mdl->unk_e0 != NULL)
    {
        FUN_001a7710(mdl->unk_e0);
    }

    for (i = 0; i < 5; i++)
    {
        if ((*(u8*)((u8*)mdl + i * sizeof(MdlAttachedWpn) + 0x3b4) & 1) != 0 &&
            *(Model**)((u8*)mdl + i * sizeof(MdlAttachedWpn) + 0x3b8) != NULL)
        {
            func_003196f0(mdl, i);
        }
    }

    FUN_001ef340(mdl);

    if (mdl->runtimeData.motionData != NULL)
    {
        func_0031d790(mdl->runtimeData.motionData);
    }
    func_0031eee0(mdl->runtimeData.animationData);

    if (mdl->prev != NULL)
    {
        mdl->prev->next = mdl->next;
    }
    if (mdl->next != NULL)
    {
        mdl->next->prev = mdl->prev;
    }
    else
    {
        sMdlListTails[mdl->type] = mdl->prev;
    }

    RwFree(mdl);
}




// FUN_003176C0


void func_003176c0(Model* mdl)
{
    RwMatrix matrix;
    RwFrame* frame;

    frame = *(RwFrame**)((u8*)mdl->clump + 4);
    FUN_004c2f30(&matrix, &mdl->identityMat, (const RwMatrix*)mdl);
    func_004cb7f0(frame, &matrix, 0);
    func_003197c0(mdl, &matrix);
}




// FUN_00317730
#pragma push
#pragma opt_lifetimes on
#ifndef PC_BUILD
asm void mdl00317730(Model* mdl)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x948300d8
  .word 0x30631000
  .word 0x106000a8
  .word 0x00000000
  .word 0x8e4200dc
  .word 0x8c500004
  .word 0x27a40050
  .word 0x26450040
  .word 0x0240302d
  .word 0x0c130bcc
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a50050
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50050
  .word 0x0c0c65f0
  .word 0x00000000
  .word 0x0000882d
  .word 0x0240202d
  .word 0x0c0c6474
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x0240202d
  .word 0x26450080
  .word 0x0c0c6484
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000013
  .word 0x00000000
  .word 0x3205ffff
  .word 0x0240202d
  .word 0x0c0c616c
  .word 0x00000000
  .word 0x1040000c
  .word 0x00000000
  .word 0x00101080
  .word 0x00501021
  .word 0x000210c0
  .word 0x00501023
  .word 0x00021080
  .word 0x02421021
  .word 0x244400ec
  .word 0x0220282d
  .word 0x0c0c4d24
  .word 0x00000000
  .word 0x0040882d
  .word 0x26100001
  .word 0x2e020004
  .word 0x1440ffec
  .word 0x00000000
  .word 0x26440364
  .word 0x0c0c534c
  .word 0x00000000
  .word 0x8e4403f4
  .word 0x10800008
  .word 0x00000000
  .word 0x26450080
  .word 0x0c0c7768
  .word 0x00000000
  .word 0x8e4403f4
  .word 0x0240282d
  .word 0x0c0c7670
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000e
  .word 0x00000000
  .word 0x00101080
  .word 0x00501021
  .word 0x000210c0
  .word 0x00501023
  .word 0x00021080
  .word 0x02421021
  .word 0x8c44011c
  .word 0x10800004
  .word 0x00000000
  .word 0x0240282d
  .word 0x0c0c4520
  .word 0x00000000
  .word 0x26100001
  .word 0x2e020004
  .word 0x1440fff1
  .word 0x00000000
  .word 0x264403f8
  .word 0x0c0c7d70
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000004d
  .word 0x00000000
  .word 0x00111840
  .word 0x00711821
  .word 0x00031880
  .word 0x02432021
  .word 0x908303b4
  .word 0x30630001
  .word 0x10600044
  .word 0x00000000
  .word 0x249003b8
  .word 0x8c8303b8
  .word 0x10600040
  .word 0x00000000
  .word 0x3225ffff
  .word 0x0240202d
  .word 0x0c0c65dc
  .word 0x00000000
  .word 0x1040003a
  .word 0x00000000
  .word 0x00111040
  .word 0x00511021
  .word 0x00021080
  .word 0x02423821
  .word 0x8e020000
  .word 0x26460040
  .word 0x24450040
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
  .word 0x24f303bc
  .word 0x8ce303bc
  .word 0x2402ffff
  .word 0x1062000b
  .word 0x00000000
  .word 0x8e040000
  .word 0x0c0c62d8
  .word 0x00000000
  .word 0x8e650000
  .word 0x0240202d
  .word 0x0040302d
  .word 0x0c0c6344
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x8e050000
  .word 0x24040008
  .word 0x0240302d
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x00111040
  .word 0x00511021
  .word 0x00021080
  .word 0x02421021
  .word 0x245003b8
  .word 0x8c4403b8
  .word 0x0000282d
  .word 0xc64c00f4
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x8e040000
  .word 0x0c0c5dcc
  .word 0x00000000
  .word 0x26310001
  .word 0x2e230005
  .word 0x1460ffb2
  .word 0x00000000
  .word 0xdfbf0040
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
#pragma pop




#pragma push
#pragma opt_lifetimes on
// FUN_00317A20
#ifndef PC_BUILD
asm void FUN_00317a20(Model* param_1)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x948500d8
  .word 0x30a31000
  .word 0x10600219
  .word 0x00000000
  .word 0x0000802d
  .word 0x30a30004
  .word 0x14600003
  .word 0x00000000
  .word 0x0c0c5dcc
  .word 0x00000000
  .word 0x962400d8
  .word 0x30830002
  .word 0x146001bd
  .word 0x00000000
  .word 0x922300d3
  .word 0x186001ba
  .word 0x00000000
  .word 0x30820008
  .word 0x0002282b
  .word 0x3c120096
  .word 0x26520090
  .word 0x24040006
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x962200d8
  .word 0x30420010
  .word 0x0002282b
  .word 0x24040008
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x962200d8
  .word 0x30420100
  .word 0x0002282b
  .word 0x2404000e
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x962200d8
  .word 0x30420040
  .word 0x10400004
  .word 0x00000000
  .word 0x24050003
  .word 0x10000002
  .word 0x00000000
  .word 0x24050002
  .word 0x24040014
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2624035c
  .word 0x262500ec
  .word 0x0c0c4f28
  .word 0x00000000
  .word 0x8e2400dc
  .word 0x262200d0
  .word 0xafa20058
  .word 0xa7a0005c
  .word 0x3c050031
  .word 0x24a55f50
  .word 0x27a60058
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x962400d8
  .word 0x30820020
  .word 0x10400005
  .word 0x00000000
  .word 0x922300d3
  .word 0x240200ff
  .word 0x14620031
  .word 0x00000000
  .word 0x8e3200e0
  .word 0x1640000e
  .word 0x00000000
  .word 0x24040002
  .word 0x8e2500e4
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x8e2500e8
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x8e2400dc
  .word 0x0c06a238
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x30830018
  .word 0x24020018
  .word 0x1462000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c069ed4
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c069ff0
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c06a050
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c069ed4
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c069ff0
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c06a050
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0c5708
  .word 0x00000000
  .word 0x8e2303f4
  .word 0x106000d3
  .word 0x00000000
  .word 0x24120001
  .word 0x962300d8
  .word 0x30638000
  .word 0x1060000c
  .word 0x00000000
  .word 0x8e2400dc
  .word 0xafb20068
  .word 0x3c050031
  .word 0x24a56360
  .word 0x27a60068
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x8fa30068
  .word 0x10600002
  .word 0x00000000
  .word 0x0000902d
  .word 0x124000c1
  .word 0x00000000
  .word 0x962200d8
  .word 0x30420080
  .word 0x144000b8
  .word 0x00000000
  .word 0x922200d0
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
  .word 0xc7808218
  .word 0x46010082
  .word 0x922200d1
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
  .word 0xc7808218
  .word 0x46010042
  .word 0x922200d2
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x460318c0
  .word 0xc7808218
  .word 0x46030002
  .word 0x922200d3
  .word 0x04400006
  .word 0x00000000
  .word 0x44821800
  .word 0x00000000
  .word 0x46801920
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44831800
  .word 0x00000000
  .word 0x46801920
  .word 0x46042100
  .word 0xc7838218
  .word 0x46041942
  .word 0x9222041a
  .word 0x04400006
  .word 0x00000000
  .word 0x44821800
  .word 0x00000000
  .word 0x46801920
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44831800
  .word 0x00000000
  .word 0x46801920
  .word 0x46042100
  .word 0xc7838218
  .word 0x460418c2
  .word 0x46031082
  .word 0x9222041b
  .word 0x04400006
  .word 0x00000000
  .word 0x44821800
  .word 0x00000000
  .word 0x46801920
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44831800
  .word 0x00000000
  .word 0x46801920
  .word 0x46042100
  .word 0xc7838218
  .word 0x460418c2
  .word 0x46030842
  .word 0x9222041c
  .word 0x04400006
  .word 0x00000000
  .word 0x44821800
  .word 0x00000000
  .word 0x46801920
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44831800
  .word 0x00000000
  .word 0x46801920
  .word 0x46042100
  .word 0xc7838218
  .word 0x460418c2
  .word 0x46030002
  .word 0x9222041d
  .word 0x04400006
  .word 0x00000000
  .word 0x44821800
  .word 0x00000000
  .word 0x46801920
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44831800
  .word 0x00000000
  .word 0x46801920
  .word 0x46042100
  .word 0xc7838218
  .word 0x460418c2
  .word 0x46032982
  .word 0x3c02437f
  .word 0x44822800
  .word 0x3c023f00
  .word 0x44822000
  .word 0x44801800
  .word 0x00000000
  .word 0x46041818
  .word 0x4602289c
  .word 0x460010a4
  .word 0x44021000
  .word 0x00000000
  .word 0xa3a2006c
  .word 0x46041818
  .word 0x4601285c
  .word 0x46000864
  .word 0x44020800
  .word 0x00000000
  .word 0xa3a2006d
  .word 0x46041818
  .word 0x4600281c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa3a2006e
  .word 0x46041818
  .word 0x4606281c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa3a2006f
  .word 0x8e2403f4
  .word 0x27a5006c
  .word 0x0c0c7750
  .word 0x00000000
  .word 0x93a3006f
  .word 0x1860000b
  .word 0x00000000
  .word 0x8e2403f4
  .word 0x96250418
  .word 0x0c0c7720
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8e2403f4
  .word 0x96250418
  .word 0x0c0c7720
  .word 0x00000000
  .word 0x24100001
  .word 0x0000902d
  .word 0x10000037
  .word 0x00000000
  .word 0x3244ffff
  .word 0x00041880
  .word 0x00641821
  .word 0x000318c0
  .word 0x00641823
  .word 0x00031880
  .word 0x02231821
  .word 0x2468011c
  .word 0x8c63011c
  .word 0x1060002a
  .word 0x00000000
  .word 0xc6220080
  .word 0xc6210084
  .word 0xc6200088
  .word 0xe4620008
  .word 0xe461000c
  .word 0xe4600010
  .word 0x962300d8
  .word 0x30630080
  .word 0x1460000a
  .word 0x00000000
  .word 0x8d070000
  .word 0x922600d0
  .word 0x922500d1
  .word 0x922400d2
  .word 0x922300d3
  .word 0xa0e60004
  .word 0xa0e50005
  .word 0xa0e40006
  .word 0xa0e30007
  .word 0x96330418
  .word 0x8d100000
  .word 0x8e040018
  .word 0x10800008
  .word 0x00000000
  .word 0x26050004
  .word 0x0c0c7750
  .word 0x00000000
  .word 0x8e040018
  .word 0x0260282d
  .word 0x0c0c7720
  .word 0x00000000
  .word 0x8e040024
  .word 0x10800007
  .word 0x00000000
  .word 0x26050004
  .word 0x0c0c7890
  .word 0x00000000
  .word 0x8e040024
  .word 0x0c0c7878
  .word 0x00000000
  .word 0x24100001
  .word 0x26430001
  .word 0x3072ffff
  .word 0x3243ffff
  .word 0x28630004
  .word 0x1460ffc7
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000037
  .word 0x00000000
  .word 0x3264ffff
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x02232021
  .word 0x908303b4
  .word 0x30630001
  .word 0x1060002c
  .word 0x00000000
  .word 0x249203b8
  .word 0x8c8303b8
  .word 0x10600028
  .word 0x00000000
  .word 0x0220202d
  .word 0x0260282d
  .word 0x0c0c65dc
  .word 0x00000000
  .word 0x10400022
  .word 0x00000000
  .word 0x8e420000
  .word 0x8c4400dc
  .word 0x24020001
  .word 0xafa20064
  .word 0x3c050031
  .word 0x24a56360
  .word 0x27a60064
  .word 0x0c1245b4
  .word 0x00000000
  .word 0x8fa30064
  .word 0x14600016
  .word 0x00000000
  .word 0x8e440000
  .word 0x262500d0
  .word 0x0c0c62b4
  .word 0x00000000
  .word 0x962200d8
  .word 0x30420020
  .word 0x14400007
  .word 0x00000000
  .word 0x8e430000
  .word 0x946200d8
  .word 0x3042ffdf
  .word 0xa46200d8
  .word 0x10000005
  .word 0x00000000
  .word 0x8e430000
  .word 0x946200d8
  .word 0x34420020
  .word 0xa46200d8
  .word 0x8e440000
  .word 0x0c0c5e88
  .word 0x00000000
  .word 0x26630001
  .word 0x3073ffff
  .word 0x3263ffff
  .word 0x28630005
  .word 0x1460ffc7
  .word 0x00000000
  .word 0x962400d8
  .word 0x30830002
  .word 0x14600046
  .word 0x00000000
  .word 0x30830001
  .word 0x10600004
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0c5474
  .word 0x00000000
  .word 0x962400d4
  .word 0x24030005
  .word 0x1083003c
  .word 0x00000000
  .word 0x962300d8
  .word 0x30638000
  .word 0x14600038
  .word 0x00000000
  .word 0x922300d3
  .word 0x18600035
  .word 0x00000000
  .word 0x8e23035c
  .word 0x10600009
  .word 0x00000000
  .word 0x8e240360
  .word 0x10800006
  .word 0x00000000
  .word 0x44806000
  .word 0x3c023f80
  .word 0x44826800
  .word 0x0c0c8190
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000023
  .word 0x00000000
  .word 0x3244ffff
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x02232021
  .word 0x908303b4
  .word 0x30630001
  .word 0x10600018
  .word 0x00000000
  .word 0x249303b8
  .word 0x8c8303b8
  .word 0x10600014
  .word 0x00000000
  .word 0x0220202d
  .word 0x0240282d
  .word 0x0c0c65dc
  .word 0x00000000
  .word 0x1040000e
  .word 0x00000000
  .word 0x8e630000
  .word 0x2464035c
  .word 0x8c63035c
  .word 0x10600009
  .word 0x00000000
  .word 0x8c840004
  .word 0x10800006
  .word 0x00000000
  .word 0x44806000
  .word 0x3c023f80
  .word 0x44826800
  .word 0x0c0c8190
  .word 0x00000000
  .word 0x26430001
  .word 0x3072ffff
  .word 0x3243ffff
  .word 0x28630005
  .word 0x1460ffdb
  .word 0x00000000
  .word 0x24030001
  .word 0x16030007
  .word 0x00000000
  .word 0x96230418
  .word 0x24040008
  .word 0x14640003
  .word 0x00000000
  .word 0x0c0c87f8
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_lifetimes reset
#pragma pop




// FUN_003182d0
u32 mdlAnimSet(Model* mdl, u16 slotIdx, s16 id, u16 blendFrameCount, u16 flags)
{
    MdlAnim* anim;
    MdlAnimEntry* entry;
    u16 i;
    Model* m;

    if (func_00318620(mdl, slotIdx, id))
    {
        if (slotIdx == 0)
        {
            if (id >= 0 && mdl->animSlots[0].anim.table != NULL &&
                id < mdl->animSlots[0].anim.table->count &&
                mdl->animSlots[0].anim.table->entries[id].rtAnim != NULL &&
                mdl->animSlots[0].anim.table->entries[id].rtAnim != &DAT_009571d0)
            {
                entry = &mdl->animSlots[0].anim.table->entries[id];
                mdl->identityMat = entry->identityMat;
            }
            else
            {
                RwMatrixSetIdentity(&mdl->identityMat);
            }

            func_00314850(mdl->clump, (u8*)mdl + 0x364, id, blendFrameCount, flags);
        }

        anim = &mdl->animSlots[slotIdx].anim;
        func_003138e0(anim, id, blendFrameCount, flags);

        if (*(void**)mdl->runtimeData.animationData != NULL && (flags & 0x40) == 0 && slotIdx == 0)
        {
            func_0031ef80(mdl->runtimeData.animationData, id, blendFrameCount);
        }

        for (i = 0; i < 5; i++)
        {
            if (((m = mdl)->attachedWpns[i].flags & 1) != 0 && mdl->attachedWpns[i].wpnMdl != NULL &&
                mdl00319770(mdl, i))
            {
                mdlAnimSet(mdl->attachedWpns[i].wpnMdl, 0, id, blendFrameCount, flags);
            }
        }
    }

    return true;
}




// W389 residual nd1: the sole differing instruction is commutative addu operand order (retail v0=v0+v1 vs. ours v0=v1+v0); this is a documented compiler floor.
// FUN_00318540
s16 mdlAnimGetId(Model* mdl, u16 slotIdx)
{
    if (mdlAnim003185b0(mdl, slotIdx))
    {
        return mdl->animSlots[slotIdx].anim.id;
    }

    return -1;
}




// FUN_003185b0
u32 mdlAnim003185b0(Model* mdl, u16 slotIdx)
{
    if (slotIdx == 0)
    {
        if (mdl->animSlots[0].anim.table == NULL && mdl->unk_35c == NULL)
        {
            return false;
        }
    }
    else
    {
        if (mdl->animSlots[slotIdx].anim.table == NULL)
        {
            return false;
        }
    }
    
    return true;
}




// FUN_00318620


u32 func_00318620(Model* param_1, u16 param_2, s16 param_3)
{
    MdlAnimEntryTable* table;
    int* piVar1;
    s16 id;
    u32 uVar2;

    uVar2 = 0;
    table = param_1->animSlots[param_2].anim.table;
    if (table != NULL && (id = param_3, (s32)id < (s32)(u32)table->count) &&
        table->entries[id].rtAnim != NULL)
    {
        uVar2 = 1;
    }

    if (param_2 == 0 && (piVar1 = *(int **)((u8*)param_1 + 0x35c), piVar1 != NULL) &&
        (s32)param_3 < (s32)(u32)*(u16 *)(piVar1 + 1) &&
        *(int *)(*piVar1 + param_3 * 8) != 0)
    {
        uVar2 = 1;
    }

    return uVar2;
}




/* W389 measured func_00313490 opt_propagation off: nd 746 -> 608; object 1104/1104 -> 1100/1104. */
// FUN_003186E0


u32 func_003186e0(int param_1, u32 param_2, s16 param_3)
{
    int* piVar1;
    s32 valid;
    u32 result;
    u8* base;
    int offset;

    result = 0;
    valid = 0;
    offset = (param_2 & 0xffff) * 0x9c;
    offset += param_1;
    piVar1 = *(int **)(offset + 0x118);
    if (piVar1 != NULL && (s32)*(u16 *)(piVar1 + 1) > (s32)param_3)
    {
        valid = 1;
    }
    if (valid)
    {
        base = (u8 *)*piVar1;
        offset = param_3 * 0x50;
        offset += (u32)base;
        base = (u8 *)offset;
        if (*(u8 **)(base + 0x40) == (u8 *)&DAT_009571d0)
        {
            result = 1;
        }
    }
    return result;
}




// FUN_00318770
void mdlAnim00318770(Model* mdl, u16 slotIdx, f32 frame)
{
    MdlAnimEntryTable* table;
    RpHAnimHierarchy* hierarchy;
    s16 id;
    f32 scaledFrame;
    u8* state;

    scaledFrame = gFrameDuration * frame;
    id = mdl->animSlots[slotIdx].anim.id;
    if (id >= 0)
    {
        table = mdl->animSlots[slotIdx].anim.table;
        if (table != NULL && id < table->count &&
            table->entries[id].rtAnim != NULL &&
            table->entries[id].rtAnim != (RtAnimAnimation*)DAT_009571d0_abs)
        {
            hierarchy = mdl->animSlots[slotIdx].anim.hierarchy;
            FUN_004b74c0(scaledFrame, ((volatile /* Removing this qualifier loses mdlAnim00318770 (MATCH nd0 -> MISMATCH nd8, size 256 -> 256) - measured W170. */ RpHAnimHierarchy*)hierarchy)->currentAnim);
            mdl->animSlots[slotIdx].anim.flags |= MDLANIM_FLAG_FRAMESET;
        }
    }

    if (slotIdx == 0)
    {
        state = (u8*)mdl + 0x364;
        func_00314730_ptrfirst(state, scaledFrame);
    }
}



// FUN_00318870
f32 mdlAnimGetDurationInFrame(Model* mdl, u16 slotIdx)
{
    f32 duration;

    if (mdl->animSlots[slotIdx].anim.id < 0)
    {
        duration = 0.0f;
    }
    else
    {
        if (mdl->animSlots[slotIdx].anim.hierarchy == NULL ||
           (mdl->animSlots[slotIdx].anim.hierarchy->currentAnim == NULL))
        {
            duration = 0.0f;
        }
        else
        {
            if (mdl->animSlots[slotIdx].anim.hierarchy->currentAnim->pCurrentAnim == NULL)
            {
                duration = 0.0f;
            }
            else
            {
                duration = mdl->animSlots[slotIdx].anim.hierarchy->currentAnim->pCurrentAnim->duration;
            }
        }
    }

    return duration / gFrameDuration;
}




// FUN_00318910
f32 mdlAnimGetDurationInFrameById(Model* mdl, u16 slotIdx, s16 animId)
{
    f32 duration;

    if (mdl->animSlots[slotIdx].anim.hierarchy == NULL)
    {
        duration = 0.0f;
    }
    else
    {
        duration = mdl->animSlots[slotIdx].anim.table->entries[animId].rtAnim->duration;
    }

    return duration / gFrameDuration;
}




// FUN_00318990
f32 mdlAnimGetCurrentFrame(Model* mdl, u16 slotIdx)
{
    f32 currTime;

    if (mdl->animSlots[slotIdx].anim.id < 0)
    {
        currTime = 0.0f;
    }
    else
    {
        currTime = mdl->animSlots[slotIdx].anim.currTime;
    }

    return currTime / gFrameDuration;
}




// FUN_003189f0
void mdlAnimSetSpeed(Model* mdl, u16 slotIdx, f32 speed)
{
    mdl->animSlots[slotIdx].anim.speed = speed;

    if (slotIdx == 0)
    {
        *(f32*)((u8*)mdl + 0x36c) = speed;
    }
}




// FUN_00318a30
void mdlTranslate(Model* mdl, const RwV3d* translation, RwOpCombineType combineOp)
{
    RwMatrixTranslate(&mdl->mat, translation, combineOp);
}

// FUN_00318a50
void mdlRotate(Model* mdl, const RwV3d* axis, f32 angle, RwOpCombineType combineOp)
{
    RwMatrixRotate(&mdl->mat, axis, angle, combineOp);
}

// FUN_00318a70
void mdl00318a70(void)
{
    FUN_004c3760();
}

// FUN_00318a90
void mdlScale(Model* mdl, const RwV3d* scale, RwOpCombineType combineOp)
{
    mdl->scale = *scale;

    RwMatrixScale(&mdl->mat, scale, combineOp);
}

// FUN_00318ad0
void mdlSetColor(Model* mdl, const RwRGBA* color)
{
    mdl->color = *color;
}

// FUN_00318b00
RwRGBA* mdlGetColor(Model* mdl)
{
    return &mdl->color;
}



// FUN_00318B10


void func_00318b10(u32 *param_1)



{

  param_1[10] = 0x3f800000;

  param_1[5] = 0x3f800000;

  *param_1 = 0x3f800000;

  param_1[4] = 0;

  param_1[2] = 0;

  param_1[1] = 0;

  param_1[9] = 0;

  param_1[8] = 0;

  param_1[6] = 0;

  param_1[0xe] = 0;

  param_1[0xd] = 0;

  param_1[0xc] = 0;

  param_1[3] = param_1[3] | 0x20003;

  return;

}



// FUN_00318b60
RwMatrix* mdlGetMatrix(Model* mdl)
{
    return &mdl->mat;
}




// FUN_00318b70
RwFrame* mdlGetClumpFrame(Model* mdl)
{
    return (RwFrame*)mdl->clump->object.parent;
}




// FUN_00318b80
RpClump* mdlGetClump(Model* mdl)
{
    return mdl->clump;
}




// FUN_00318B90


#ifndef PC_BUILD
asm u32 func_00318b90(u32 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c840118
  .word 0x1080004d
  .word 0x00000000
  .word 0x862300f0
  .word 0x94820004
  .word 0x0062082a
  .word 0x10200048
  .word 0x00000000
  .word 0x00031080
  .word 0x00431021
  .word 0x00021900
  .word 0x8c820000
  .word 0x24420040
  .word 0x00431021
  .word 0x8c430000
  .word 0x1060003f
  .word 0x00000000
  .word 0x3c020095
  .word 0x244271d0
  .word 0x1062003b
  .word 0x00000000
  .word 0x8e24010c
  .word 0x0c119bbc
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000002e
  .word 0x00000000
  .word 0x3203ffff
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x02221821
  .word 0x906203b4
  .word 0x30420001
  .word 0x10400023
  .word 0x00000000
  .word 0x247203b8
  .word 0x8c6203b8
  .word 0x1040001f
  .word 0x00000000
  .word 0x0220202d
  .word 0x0200282d
  .word 0x0c0c65dc
  .word 0x00000000
  .word 0x10400019
  .word 0x00000000
  .word 0x8e450000
  .word 0x8ca30118
  .word 0x10600015
  .word 0x00000000
  .word 0x84a400f0
  .word 0x94620004
  .word 0x0082082a
  .word 0x10200010
  .word 0x00000000
  .word 0x8c630000
  .word 0x00041080
  .word 0x00441021
  .word 0x00021100
  .word 0x00621021
  .word 0x8c430040
  .word 0x10600008
  .word 0x00000000
  .word 0x3c020095
  .word 0x244271d0
  .word 0x10620004
  .word 0x00000000
  .word 0x8ca4010c
  .word 0x0c119bbc
  .word 0x00000000
  .word 0x26020001
  .word 0x3050ffff
  .word 0x3202ffff
  .word 0x28420005
  .word 0x1440ffd0
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */




#pragma push
#pragma opt_loop_invariants on
/* W415 reverted probe: swapping top-level branches matched call order but regressed nd266 -> 287 (object 420/448). */
// FUN_00318D10


#ifndef PC_BUILD
asm u32 func_00318d10(u8* param_1,u32 param_2,u32* param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0102d
  .word 0x00c0802d
  .word 0x8c8803f0
  .word 0x11000043
  .word 0x00000000
  .word 0x8c8700dc
  .word 0x95060000
  .word 0x0000482d
  .word 0x3045ffff
  .word 0x1000000c
  .word 0x00000000
  .word 0x3124ffff
  .word 0x00041080
  .word 0x00441021
  .word 0x00022100
  .word 0x8d020004
  .word 0x00441021
  .word 0x8c420040
  .word 0x10a20007
  .word 0x00000000
  .word 0x25220001
  .word 0x3049ffff
  .word 0x3123ffff
  .word 0x0066102a
  .word 0x1440fff2
  .word 0x00000000
  .word 0x14660004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000027
  .word 0x00000000
  .word 0x3123ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021900
  .word 0x8d020004
  .word 0x00439821
  .word 0x8e710044
  .word 0x8cf20004
  .word 0x0240202d
  .word 0x0c1199c8
  .word 0x00000000
  .word 0x16220003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0xafb1005c
  .word 0xafa00058
  .word 0x0240202d
  .word 0x3c050031
  .word 0x24a55010
  .word 0x27a60058
  .word 0x0c132db8
  .word 0x00000000
  .word 0x8fb20058
  .word 0x16400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000a
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x0200202d
  .word 0x0260282d
  .word 0x0040302d
  .word 0x0c130bcc
  .word 0x00000000
  .word 0x24020001
  .word 0x1000001a
  .word 0x00000000
  .word 0x8c8400dc
  .word 0x3c05006a
  .word 0x24a5abb8
  .word 0x0040302d
  .word 0x0c069a68
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000f
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x24050008
  .word 0x8c440000
  .word 0x8c430004
  .word 0x24420008
  .word 0x24a5ffff
  .word 0xae040000
  .word 0xae030004
  .word 0x26100008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x24020001
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
#pragma pop




/* W389 measured func_00314850 opt_lifetimes on: nd 729 -> 726; object 1208/1248 -> 1208/1248. */
// FUN_00318ED0


bool func_00318ed0(u8* param_1,u32 param_2,RwV3d *param_3)



{

  u32 uVar1;

  u32 uVar2;

  u32 *puVar3;

  u32 lVar4;

  u32 *puVar6;

  int iVar5;

  RwMatrix matrix;

  

  if (*(int *)(param_1 + 0x3f0) != 0) {

    lVar4 = func_00315090(&matrix,(u16 *)*(int *)(param_1 + 0x3f0),param_2 & 0xffff,
                         *(int *)(param_1 + 0xdc));

  }
  else {

    lVar4 = func_001a69a0(*(u32 *)(param_1 + 0xdc),DAT_0069abb8,param_2);

    if (lVar4 == 0) {

      lVar4 = 0;

    }
    else {

      puVar3 = (u32 *)func_004cb2f0(lVar4);

      puVar6 = (u32 *)&matrix;

      iVar5 = 8;

      do {

        uVar1 = *puVar3;

        uVar2 = puVar3[1];

        puVar3 = puVar3 + 2;

        iVar5 = iVar5 + -1;

        *puVar6 = uVar1;

        puVar6[1] = uVar2;

        puVar6 = puVar6 + 2;

      } while (0 < iVar5);

      lVar4 = 1;

    }

  }

  if (lVar4 == 0) {
    return false;
  }

    *param_3 = matrix.pos;

  return true;

}




/* W389 measured func_00314d30 opt_lifetimes on: nd 446 -> 415; object 724/736 -> 720/736. */
// FUN_00318FC0


u32 func_00318fc0(int param_1)



{

  u16* ptr;

  ptr = *(u16 **)(param_1 + 0x3f0);
  if (ptr != NULL) {
    return (u32)*ptr;
  }
  return func_001a6c00(*(void **)(param_1 + 0xdc), (const char *)DAT_0069abb8);
}




// FUN_00319010
void mdlEnableFullShadow(Model* mdl)
{
    mdl->flags |= MDL_FLAG_FULLSHADOW;
}




/* W323 measured func_00315090 opt_loop_invariants on: nd195 -> nd188; object 292/320. */
// FUN_00319030
void mdlDisableFullShadow(Model* mdl)
{
    mdl->flags &= ~MDL_FLAG_FULLSHADOW;
}




// FUN_00319050
void mdl00319050(Model* mdl)
{
    mdl->flags |= MDL_FLAG_UNK20;
}




// FUN_00319070
void mdl00319070(Model* mdl)
{
    mdl->flags &= ~MDL_FLAG_UNK20;
}




// FUN_00319090
void mdlLookAtSetBlendRotFactor(Model* mdl, f32 blendRotFactor)
{
    mdl->animSlots[0].lookAt.blendRotFactor = blendRotFactor;
}



/* W389 measured func_00315f50 opt_dead_assignments off: nd 563 -> 559; object 892/976 -> 892/976. */
// FUN_003190a0
void mdlLookAtSetMaxAngles(Model* mdl, f32 maxPitchAngle, f32 maxYawAngle)
{
    mdl->animSlots[0].lookAt.maxPitchAngle = maxPitchAngle;
    mdl->animSlots[0].lookAt.maxYawAngle = maxYawAngle;
}




// FUN_003190b0
void mdlLookAtSetTargetPosXYZ(Model* mdl, const RwV3d* target)
{
    mdl->animSlots[0].lookAt.flags |= MDLLOOKAT_FLAG_XYZ;
    mdl->animSlots[0].lookAt.flags &= ~(MDLLOOKAT_FLAG_XYZCS | MDLLOOKAT_FLAG_XY);
    mdl->animSlots[0].lookAt.flags &= ~MDLLOOKAT_FLAG_NOTARGET;

    mdl->animSlots[0].lookAt.targetPos = *target;
}




// FUN_00319100
void mdlLookAtSetTargetPosXYZCS(Model* mdl, const RwV3d* target)
{
    mdl->animSlots[0].lookAt.flags |= MDLLOOKAT_FLAG_XYZCS;
    mdl->animSlots[0].lookAt.flags &= ~(MDLLOOKAT_FLAG_XYZ | MDLLOOKAT_FLAG_XY);
    mdl->animSlots[0].lookAt.flags &= ~MDLLOOKAT_FLAG_NOTARGET;

    mdl->animSlots[0].lookAt.targetPos = *target;
}




// FUN_00319150
void mdlLookAtSetTargetPosXY(Model* mdl, f32 xTarget, f32 yTarget)
{
    mdl->animSlots[0].lookAt.flags |= MDLLOOKAT_FLAG_XY;
    mdl->animSlots[0].lookAt.flags &= ~(MDLLOOKAT_FLAG_XYZCS | MDLLOOKAT_FLAG_XYZ);
    mdl->animSlots[0].lookAt.flags &= ~MDLLOOKAT_FLAG_NOTARGET;

    mdl->animSlots[0].lookAt.targetPos.x = xTarget;
    mdl->animSlots[0].lookAt.targetPos.y = yTarget;
}




// FUN_00319190
void mdlLookAtDisableTarget(Model* mdl)
{
    mdl->animSlots[0].lookAt.flags |= MDLLOOKAT_FLAG_NOTARGET;
}




// FUN_003191b0
void mdl003191b0(Model* mdl)
{
    mdl->animSlots[0].lookAt.flags |= MDLLOOKAT_FLAG_UNK200;
}




/* W323 measured func_00316970 opt_common_subs off: nd259 -> nd197; object 456/464. */
// FUN_003191d0
u8 mdlLookAtIsActive(Model* mdl)
{
    return (mdl->animSlots[0].lookAt.flags & (MDLLOOKAT_FLAG_XYZCS |
                                              MDLLOOKAT_FLAG_XYZ   |
                                              MDLLOOKAT_FLAG_XY    | 
                                              MDLLOOKAT_FLAG_NOTARGET)) != 0;
}




// FUN_003191f0
void mdlLookAtSetFlags(Model* mdl, u16 flags)
{
    mdl->animSlots[0].lookAt.flags = flags;
}




// FUN_00319200
u16 mdlLookAtGetFlags(Model* mdl)
{
    return mdl->animSlots[0].lookAt.flags;
}




/* W389 measured FUN_00317a20 opt_lifetimes on: nd 1381 -> 1367; object 2164/2224 -> 2164/2224. */
// FUN_00319210
void mdlLookAtSetTargetScale(Model* mdl, const RwV3d* scale)
{
    mdl->animSlots[0].lookAt.targetScale = *scale;
}
























// FUN_00319230


void func_00319230(int param_1, u16 param_2)
{
    int iVar1;
    s32 uVar2;

    *(u16 *)(param_1 + 0x418) = param_2;
    for (uVar2 = 0; (uVar2 & 0xffff) < 5; uVar2 = uVar2 + 1 & 0xffff)
    {
        iVar1 = param_1 + (u16)uVar2 * 0xc;
        if ((*(u8 *)(iVar1 + 0x3b4) & 1) != 0 &&
            (iVar1 = *(int *)(iVar1 + 0x3b8), iVar1 != 0))
        {
            *(u16 *)(iVar1 + 0x418) = param_2;
        }
    }
}





// FUN_003192A0


void func_003192a0(int parent, u32 slotIdx, u16 type, u16 id, const char* path,
                   u32 readMode)
{
    Model* mdl;
    Model* slotBase;
    u8* offset;

    mdl = mdlInit(type, id);

    if (readMode & MDL_READSYNC)
    {
        mdl->flags |= MDL_FLAG_STREAMSYNC;
    }

    mdlStreamInit(mdl);
    mdlStreamRequestCdvd(mdl, path);
    mdlStreamRead(mdl);

    offset = (u8*)((u16)slotIdx * sizeof(MdlAttachedWpn));
    slotBase = (Model*)(offset + parent);
    slotBase->attachedWpns[0].wpnMdl = mdl;
    mdl->flags |= 4;
    slotBase->attachedWpns[0].wpnMdl->flags |= 0x8000;
    slotBase->attachedWpns[0].flags |= 1;
}




// FUN_00319390


void func_00319390(int param_1,u32 param_2,u16 param_3,u16 param_4,u32 param_5,
                 u32 param_6,u32 param_7)



{

  Model* uVar1;

  int iVar2;

  MdlRmdFileMemory rmd;

  u8* offset;

  uVar1 = mdlInit(param_3,param_4);

  iVar2 = (int)uVar1;

  if ((param_7 & 1) != 0) {

    *(u16 *)(iVar2 + 0xd8) = *(u16 *)(iVar2 + 0xd8) | 0x4000;

  }

  mdlStreamInit(uVar1);

  rmd.memory = (void*)param_5;
  rmd.size = param_6;
  mdlStreamSetRmdFileMemory(uVar1, &rmd);

  mdlStreamRead(uVar1);

  offset = (u8*)((param_2 & 0xffff) * 0xc);
  param_1 = (int)(offset + param_1);

  *(int *)(param_1 + 0x3b8) = iVar2;

  *(u16 *)(iVar2 + 0xd8) = *(u16 *)(iVar2 + 0xd8) | 4;

  *(u16 *)(*(int *)(param_1 + 0x3b8) + 0xd8) =

       *(u16 *)(*(int *)(param_1 + 0x3b8) + 0xd8) | 0x8000;

  *(u8 *)(param_1 + 0x3b4) = *(u8 *)(param_1 + 0x3b4) | 1;

  return;

}




/* W415 reverted probe: swapping search/init branches matched call order but regressed nd217 -> 220 (object 348/352); u32 local variant nd252, object 356 > window. */
// FUN_00319490


#ifndef PC_BUILD
asm void func_00319490(int param_1,u32 param_2,u16 param_3,u16 param_4,u32 param_5)
{
  .set noreorder
  .word 0x27bdfe90
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x00c0a82d
  .word 0x00e0a02d
  .word 0x0100982d
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0000302d
  .word 0x0c0c5a44
  .word 0x00000000
  .word 0x14400019
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a60070
  .word 0x0c0c754c
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x27a60070
  .word 0x0260382d
  .word 0x0c0c5ad0
  .word 0x00000000
  .word 0x0040802d
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0c0c753c
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c0c6640
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0c0c59a4
  .word 0x00000000
  .word 0x0040802d
  .word 0x32620001
  .word 0x10400004
  .word 0x00000000
  .word 0x960200d8
  .word 0x34424000
  .word 0xa60200d8
  .word 0x960200d8
  .word 0x34422000
  .word 0xa60200d8
  .word 0x0200202d
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x3224ffff
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x00722821
  .word 0xacb003b8
  .word 0x960300d8
  .word 0x34630004
  .word 0xa60300d8
  .word 0x8ca403b8
  .word 0x948300d8
  .word 0x34638000
  .word 0xa48300d8
  .word 0x90a303b4
  .word 0x34630001
  .word 0xa0a303b4
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0170
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */




// Template probe: reversing the two top-level branches to match func_00318ed0
// retained 420/448 bytes but regressed normalized diff 268 -> 287; reverted.
/* W323 measured func_00318d10 opt_loop_invariants on: nd268 -> nd266; object 420/448. */
// FUN_003195F0


void func_003195f0(int param_1,u32 param_2,Model* param_3)



{

  Model* uVar1;

  int iVar2;

  int iVar3;

  

  iVar2 = (int)param_3;

  uVar1 = mdlInit(*(u16 *)(iVar2 + 0xd4),*(u16 *)(iVar2 + 0xd6));

  iVar3 = (int)uVar1;

  if ((*(u16 *)(iVar2 + 0xd8) & 0x1000) != 0) {
    mdlCopy(param_3,uVar1);
    *(u16 *)(iVar3 + 0xd8) = *(u16 *)(iVar3 + 0xd8) | 0x1000;
  }
  else {
    *(u16 *)(iVar3 + 0xd8) = *(u16 *)(iVar3 + 0xd8) | 0x2000;
  }

  iVar2 = (param_2 & 0xffff) * 0xc;
  iVar2 += param_1;
  param_1 = iVar2;
  *(int *)(param_1 + 0x3b8) = iVar3;

  *(u16 *)(iVar3 + 0xd8) = *(u16 *)(iVar3 + 0xd8) | 4;

  *(u16 *)(*(int *)(param_1 + 0x3b8) + 0xd8) =

       *(u16 *)(*(int *)(param_1 + 0x3b8) + 0xd8) | 0x8000;

  *(u8 *)(param_1 + 0x3b4) = *(u8 *)(param_1 + 0x3b4) | 1;

  return;

}




// FUN_003196d0
void mdl003196d0(Model* mdl, u16 wpnIdx, s32 value)
{
    mdl->attachedWpns[wpnIdx].unk_08 = value;
}




// FUN_003196F0


void func_003196f0(Model* param_1, u16 param_2)
{
    int iVar1;
    int iVar2;
    int* pWpnMdl;

    iVar1 = (int)(u8*)param_1;
    iVar2 = (param_2 & 0xffff) * 0xc;
    iVar1 = iVar2;
    iVar1 += (int)(u8*)param_1;
    pWpnMdl = (int*)(iVar1 + 0x3b8);
    if (*pWpnMdl != 0)
    {
        mdlDestroy((Model*)*pWpnMdl);
        *pWpnMdl = 0;
        iVar2 = iVar2 + (int)(u8*)param_1;
        *(u8*)(iVar2 + 0x3b4) = *(u8*)(iVar2 + 0x3b4) & 0xfe;
    }
}




// FUN_00319770
u32 mdl00319770(Model* mdl, u16 wpnIdx)
{
    Model* wpnMdl;

    wpnMdl = mdl->attachedWpns[wpnIdx].wpnMdl;
    if (wpnMdl == NULL)
    {
        return true;
    }

    return mdlStreamRead(wpnMdl);
}




#pragma push
#pragma opt_loop_invariants on
#pragma opt_propagation off
// FUN_003197C0


void func_003197c0(Model* param_1, RwMatrix* param_2)
{
    u16 uVar6;
    int iVar3;

    uVar6 = 0;
    for (; uVar6 < 5; uVar6++)
    {
        iVar3 = (int)param_1->attachedWpns[uVar6].wpnMdl;
        if (iVar3 != 0)
        {
            *(RwMatrix *)((u8 *)(u32)iVar3 + 0x90) = *param_2;
        }
    }
}
#pragma pop




// FUN_00319840
void mdlStreamInit(Model* mdl)
{
    MdlStream* stream;

    stream = RwMalloc(sizeof(MdlStream), rwMEMHINTDUR_GLOBAL);
    mdl->stream = stream;
    memset(stream, 0, sizeof(MdlStream));
}




// FUN_003198a0
void mdlStreamSetRmdFileMemory(Model* mdl, const MdlRmdFileMemory* rmd)
{
    MdlStream* stream;
    stream = mdl->stream;

    stream->rmd.memory = rmd->memory;
    stream->rmd.size = rmd->size;
}




// FUN_003198c0
void mdlStreamRequestCdvd(Model* mdl, const char* path)
{
    MdlStream* stream;
    stream = mdl->stream;

    stream->cdvd = H_Cdvd_Request(path, HCDVD_FILENORMAL);
    stream->rws = NULL;
}




// FUN_00319900
void mdl00319900(Model* mdl, u32 value)
{
    mdl->stream->isInPacFile = value;
}




/* Required for Mdl matrix aggregate copy under MWCCPS2 b210 (without: nd32). */
// FUN_00319910
void mdlStreamDestroy(Model* mdl)
{
    if (mdl->stream->unk_0c != NULL)
    {
        RwFree(mdl->stream->unk_0c);
    }

    RwFree(mdl->stream);
    mdl->stream = NULL;
}
    



/* W323 measured func_00319970 opt_loop_invariants on: nd3132 -> nd3045; object 4304/4448. */
#pragma push
#pragma opt_loop_invariants on
/* W389 measured func_00319970 additional opt_lifetimes on: nd 3045 -> 3024; object 4304/4448 -> 4284/4448. */
#pragma push
#pragma opt_lifetimes on
/* W419 prologue/branch negatives: baseline nd3024/object4284/window4448/rate0.705882; branch-local scratch nd3024/object4284/window4448/rate0.705882; branch-base recompute nd3296/object4276/window4448/rate0.770814. */
// FUN_00319970


#ifndef PC_BUILD
asm u32 func_00319970(Model* param_1)
{
  .set noreorder
  .word 0x27bdff20
  .word 0xffbf0080
  .word 0x7fb50070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0x0080882d
  .word 0x8c900428
  .word 0x24030020
  .word 0xa7a300de
  .word 0x0000202d
  .word 0x10000007
  .word 0x00000000
  .word 0x3082ffff
  .word 0x00021040
  .word 0x02021021
  .word 0xa4430020
  .word 0x24820001
  .word 0x3044ffff
  .word 0x3082ffff
  .word 0x28420004
  .word 0x1440fff7
  .word 0x00000000
  .word 0x1000042a
  .word 0x00000000
  .word 0x8fa20090
  .word 0x1040042d
  .word 0x00000000
  .word 0x3c04f0f0
  .word 0x348300e1
  .word 0x104303da
  .word 0x00000000
  .word 0x348300e0
  .word 0x10430346
  .word 0x00000000
  .word 0x348300f0
  .word 0x10430337
  .word 0x00000000
  .word 0x34830006
  .word 0x104302f6
  .word 0x00000000
  .word 0x34830070
  .word 0x104302dc
  .word 0x00000000
  .word 0x34830082
  .word 0x1043027e
  .word 0x00000000
  .word 0x34830083
  .word 0x1043027b
  .word 0x00000000
  .word 0x34830081
  .word 0x10430278
  .word 0x00000000
  .word 0x34830080
  .word 0x10430275
  .word 0x00000000
  .word 0x34830003
  .word 0x104301bd
  .word 0x00000000
  .word 0x34830002
  .word 0x104301b0
  .word 0x00000000
  .word 0x34830004
  .word 0x104301a4
  .word 0x00000000
  .word 0x34830005
  .word 0x10430178
  .word 0x00000000
  .word 0x34830001
  .word 0x10430149
  .word 0x00000000
  .word 0x2403001e
  .word 0x104303f9
  .word 0x00000000
  .word 0x24030010
  .word 0x10430119
  .word 0x00000000
  .word 0x2403002b
  .word 0x1043007c
  .word 0x00000000
  .word 0x2403001b
  .word 0x10430050
  .word 0x00000000
  .word 0x24030023
  .word 0x1043003e
  .word 0x00000000
  .word 0x24030016
  .word 0x10430003
  .word 0x00000000
  .word 0x100003e4
  .word 0x00000000
  .word 0x962200d8
  .word 0x30424000
  .word 0x10400010
  .word 0x00000000
  .word 0x8e040000
  .word 0x0c1321a0
  .word 0x00000000
  .word 0x0040902d
  .word 0x0240202d
  .word 0x3c05001a
  .word 0x24a513b0
  .word 0x26060040
  .word 0x0c134370
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c134344
  .word 0x00000000
  .word 0x100003d5
  .word 0x00000000
  .word 0x8e020000
  .word 0x8c43000c
  .word 0x8e020038
  .word 0x00431021
  .word 0xafa200d0
  .word 0x8e02003c
  .word 0x00431023
  .word 0xafa200d4
  .word 0x24040003
  .word 0x24050001
  .word 0x27a600d0
  .word 0x0c131628
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c03006a
  .word 0x2463abc8
  .word 0xffa30010
  .word 0x240313d9
  .word 0xffa30018
  .word 0x24040008
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0040402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020004
  .word 0x8e040000
  .word 0x8fa50094
  .word 0x0c131588
  .word 0x00000000
  .word 0x100003b0
  .word 0x00000000
  .word 0x8e040000
  .word 0x0c12f684
  .word 0x00000000
  .word 0x0040902d
  .word 0x0240202d
  .word 0x3c05001a
  .word 0x24a513b0
  .word 0x26060040
  .word 0x0c134370
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c134344
  .word 0x00000000
  .word 0x100003a1
  .word 0x00000000
  .word 0x9603001c
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02221021
  .word 0x8c420118
  .word 0x1440000c
  .word 0x00000000
  .word 0x97a400de
  .word 0x0c0c44c4
  .word 0x00000000
  .word 0x9604001c
  .word 0x00041880
  .word 0x00641821
  .word 0x000318c0
  .word 0x00641823
  .word 0x00031880
  .word 0x02231821
  .word 0xac620118
  .word 0x8e040000
  .word 0x0c12da90
  .word 0x00000000
  .word 0x9604001c
  .word 0x00041880
  .word 0x00641821
  .word 0x000318c0
  .word 0x00641823
  .word 0x00031880
  .word 0x02231821
  .word 0x8c650118
  .word 0x9604001e
  .word 0x00041880
  .word 0x00641821
  .word 0x00032100
  .word 0x8ca30000
  .word 0x00641821
  .word 0xac620040
  .word 0x10000378
  .word 0x00000000
  .word 0x962200d8
  .word 0x30424000
  .word 0x10400032
  .word 0x00000000
  .word 0x8e22037c
  .word 0x14400016
  .word 0x00000000
  .word 0x97b200de
  .word 0x001210c0
  .word 0x24530010
  .word 0x0260202d
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0260302d
  .word 0x0c148502
  .word 0x00000000
  .word 0x26820010
  .word 0xae820000
  .word 0xa692000c
  .word 0x24020001
  .word 0xa682000e
  .word 0xae34037c
  .word 0x3c040078
  .word 0x2484e4e0
  .word 0x8e050000
  .word 0x0c12de74
  .word 0x00000000
  .word 0x8e2300dc
  .word 0x1460000a
  .word 0x00000000
  .word 0x8e23037c
  .word 0xac620004
  .word 0x3c040078
  .word 0x2484e4e0
  .word 0x0040282d
  .word 0x0c12ddd8
  .word 0x00000000
  .word 0x1000034b
  .word 0x00000000
  .word 0x8e25037c
  .word 0x9603001e
  .word 0x000320c0
  .word 0x8ca30000
  .word 0x00641821
  .word 0xac620000
  .word 0x10000343
  .word 0x00000000
  .word 0x8e020014
  .word 0x14400027
  .word 0x00000000
  .word 0x8e020010
  .word 0x14400024
  .word 0x00000000
  .word 0x8e020000
  .word 0x8c43000c
  .word 0x8e020038
  .word 0x00431021
  .word 0xafa200d0
  .word 0x8e02003c
  .word 0x00431023
  .word 0xafa200d4
  .word 0x24040003
  .word 0x24050001
  .word 0x27a600d0
  .word 0x0c131628
  .word 0x00000000
  .word 0x3c030078
  .word 0x2463e4e0
  .word 0xffa30000
  .word 0xffa00008
  .word 0x3c03006a
  .word 0x2463abc8
  .word 0xffa30010
  .word 0x24031421
  .word 0xffa30018
  .word 0x24040007
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0040402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020008
  .word 0x10000037
  .word 0x00000000
  .word 0x8e02000c
  .word 0x1440000f
  .word 0x00000000
  .word 0x97a200de
  .word 0x00022080
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0xae02000c
  .word 0x97a300de
  .word 0x00033080
  .word 0x0040202d
  .word 0x0000282d
  .word 0x0c148502
  .word 0x00000000
  .word 0x8e020000
  .word 0x8c43000c
  .word 0x8e020038
  .word 0x00431021
  .word 0xafa200d0
  .word 0x8e02003c
  .word 0x00431023
  .word 0xafa200d4
  .word 0x24040003
  .word 0x24050001
  .word 0x27a600d0
  .word 0x0c131628
  .word 0x00000000
  .word 0x3c030078
  .word 0x2463e4e0
  .word 0xffa30000
  .word 0xffa00008
  .word 0x3c03006a
  .word 0x2463abc8
  .word 0xffa30010
  .word 0x2403142e
  .word 0xffa30018
  .word 0x24040007
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0040402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0x9603001e
  .word 0x00032080
  .word 0x8e03000c
  .word 0x00641821
  .word 0xac620000
  .word 0x8e040000
  .word 0x8fa50094
  .word 0x0c131588
  .word 0x00000000
  .word 0x100002de
  .word 0x00000000
  .word 0x962200d8
  .word 0x30424000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e2200dc
  .word 0x144002d7
  .word 0x00000000
  .word 0x8e040000
  .word 0x0c124828
  .word 0x00000000
  .word 0xae2200dc
  .word 0x100002d1
  .word 0x00000000
  .word 0x8e2200dc
  .word 0x14400015
  .word 0x00000000
  .word 0x8e020014
  .word 0x14400012
  .word 0x00000000
  .word 0x8e020010
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e020000
  .word 0x8c43000c
  .word 0x8e020038
  .word 0x00431021
  .word 0xafa200d0
  .word 0x8e02003c
  .word 0x00431023
  .word 0xafa200d4
  .word 0x24040003
  .word 0x24050001
  .word 0x27a600d0
  .word 0x0c131628
  .word 0x00000000
  .word 0xae020014
  .word 0x8e040000
  .word 0x8fa50094
  .word 0x0c131588
  .word 0x00000000
  .word 0x100002b4
  .word 0x00000000
  .word 0x9603001c
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02221021
  .word 0x8c420118
  .word 0x1440000c
  .word 0x00000000
  .word 0x97a400de
  .word 0x0c0c44c4
  .word 0x00000000
  .word 0x9604001c
  .word 0x00041880
  .word 0x00641821
  .word 0x000318c0
  .word 0x00641823
  .word 0x00031880
  .word 0x02231821
  .word 0xac620118
  .word 0x3c050095
  .word 0x24a571d0
  .word 0x9603001c
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02221021
  .word 0x8c440118
  .word 0x9603001e
  .word 0x00031080
  .word 0x00431021
  .word 0x00021900
  .word 0x8c820000
  .word 0x00431021
  .word 0xac450040
  .word 0x8e040000
  .word 0x8fa50094
  .word 0x0c131588
  .word 0x00000000
  .word 0x10000288
  .word 0x00000000
  .word 0x9603001c
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02221021
  .word 0x8c420118
  .word 0x1440000c
  .word 0x00000000
  .word 0x97a400de
  .word 0x0c0c44c4
  .word 0x00000000
  .word 0x9604001c
  .word 0x00041880
  .word 0x00641821
  .word 0x000318c0
  .word 0x00641823
  .word 0x00031880
  .word 0x02231821
  .word 0xac620118
  .word 0x9603001c
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02221021
  .word 0x8c440118
  .word 0x9603001e
  .word 0x00031080
  .word 0x00431021
  .word 0x00021900
  .word 0x8c820000
  .word 0x00432821
  .word 0x8e040000
  .word 0x8fa60094
  .word 0x0c131494
  .word 0x00000000
  .word 0x1000025f
  .word 0x00000000
  .word 0x9602001e
  .word 0x24420001
  .word 0xa602001e
  .word 0x8e040000
  .word 0x8fa50094
  .word 0x0c131588
  .word 0x00000000
  .word 0x10000256
  .word 0x00000000
  .word 0x9602001c
  .word 0x24420001
  .word 0xa602001c
  .word 0xa600001e
  .word 0x8e040000
  .word 0x8fa50094
  .word 0x0c131588
  .word 0x00000000
  .word 0x1000024c
  .word 0x00000000
  .word 0x962200d8
  .word 0x30424000
  .word 0x1040007e
  .word 0x00000000
  .word 0x8e040000
  .word 0x27a500dc
  .word 0x8fa60094
  .word 0x0c131494
  .word 0x00000000
  .word 0x97a200dc
  .word 0x9608001e
  .word 0x9604001c
  .word 0x00041880
  .word 0x00641821
  .word 0x000318c0
  .word 0x00641823
  .word 0x00031880
  .word 0x02231821
  .word 0x8c670118
  .word 0x8ce60000
  .word 0x00021880
  .word 0x00621821
  .word 0x00031900
  .word 0x00c31821
  .word 0x8c650040
  .word 0x10a00007
  .word 0x00000000
  .word 0x3104ffff
  .word 0x00041880
  .word 0x00641821
  .word 0x00031900
  .word 0x00c31821
  .word 0xac650040
  .word 0x3104ffff
  .word 0x00041880
  .word 0x00641821
  .word 0x00032100
  .word 0x8ce30000
  .word 0x00642021
  .word 0x8c830044
  .word 0x34630001
  .word 0xac830044
  .word 0x8e26035c
  .word 0x10c00015
  .word 0x00000000
  .word 0x94c40004
  .word 0x3043ffff
  .word 0x0064082a
  .word 0x10200010
  .word 0x00000000
  .word 0x000210c0
  .word 0x8cc50000
  .word 0x00a21021
  .word 0x8c440000
  .word 0x1080000a
  .word 0x00000000
  .word 0x9602001e
  .word 0x000218c0
  .word 0x00a31021
  .word 0xac440000
  .word 0x8cc20000
  .word 0x00431821
  .word 0x90620004
  .word 0x34420001
  .word 0xa0620004
  .word 0x8e26037c
  .word 0x10c00015
  .word 0x00000000
  .word 0x97a300dc
  .word 0x94c2000c
  .word 0x0062082a
  .word 0x10200010
  .word 0x00000000
  .word 0x000310c0
  .word 0x8cc50000
  .word 0x00a21021
  .word 0x8c440000
  .word 0x1080000a
  .word 0x00000000
  .word 0x9602001e
  .word 0x000218c0
  .word 0x00a31021
  .word 0xac440000
  .word 0x8cc20000
  .word 0x00431821
  .word 0x90620004
  .word 0x34420001
  .word 0xa0620004
  .word 0x9603001c
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02221021
  .word 0x8c54011c
  .word 0x128001ea
  .word 0x00000000
  .word 0x97b300dc
  .word 0x9612001e
  .word 0x8e830014
  .word 0x00131080
  .word 0x00621021
  .word 0x8c440000
  .word 0x10800008
  .word 0x00000000
  .word 0x0c0c75c0
  .word 0x00000000
  .word 0x3243ffff
  .word 0x00032080
  .word 0x8e830014
  .word 0x00641821
  .word 0xac620000
  .word 0x8e830020
  .word 0x3262ffff
  .word 0x00021080
  .word 0x00621021
  .word 0x8c440000
  .word 0x108001d4
  .word 0x00000000
  .word 0x0c0c782c
  .word 0x00000000
  .word 0x3243ffff
  .word 0x00032080
  .word 0x8e830020
  .word 0x00641821
  .word 0xac620000
  .word 0x100001cb
  .word 0x00000000
  .word 0x8e040000
  .word 0x27a500dc
  .word 0x8fa60094
  .word 0x0c131494
  .word 0x00000000
  .word 0x9602001c
  .word 0x00021080
  .word 0x02021021
  .word 0x8c420028
  .word 0x1440001f
  .word 0x00000000
  .word 0x97a200de
  .word 0x00022040
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x9603001c
  .word 0x00031880
  .word 0x02031821
  .word 0xac620028
  .word 0x0000302d
  .word 0x2405ffff
  .word 0x1000000b
  .word 0x00000000
  .word 0x9602001c
  .word 0x00021080
  .word 0x02022021
  .word 0x30c2ffff
  .word 0x00021840
  .word 0x8c820028
  .word 0x00431021
  .word 0xa4450000
  .word 0x24c20001
  .word 0x3046ffff
  .word 0x30c3ffff
  .word 0x97a200de
  .word 0x0062102a
  .word 0x1440fff2
  .word 0x00000000
  .word 0x97a500dc
  .word 0x9602001c
  .word 0x00021080
  .word 0x02022021
  .word 0x9602001e
  .word 0x00021840
  .word 0x8c820028
  .word 0x00431021
  .word 0xa4450000
  .word 0x10000197
  .word 0x00000000
  .word 0x962200d8
  .word 0x30424000
  .word 0x10400036
  .word 0x00000000
  .word 0x8e22035c
  .word 0x14400016
  .word 0x00000000
  .word 0x97b200de
  .word 0x001210c0
  .word 0x24530008
  .word 0x0260202d
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0260302d
  .word 0x0c148502
  .word 0x00000000
  .word 0x26820008
  .word 0xae820000
  .word 0xa6920004
  .word 0x24020001
  .word 0xa6820006
  .word 0xae34035c
  .word 0x8e24035c
  .word 0x9602001e
  .word 0x000218c0
  .word 0x8c820000
  .word 0x00431021
  .word 0x8c420000
  .word 0x14400009
  .word 0x00000000
  .word 0x0c0c808c
  .word 0x00000000
  .word 0x8e25035c
  .word 0x9603001e
  .word 0x000320c0
  .word 0x8ca30000
  .word 0x00641821
  .word 0xac620000
  .word 0x8e24035c
  .word 0x9602001e
  .word 0x000218c0
  .word 0x8c820000
  .word 0x00431021
  .word 0x8e040000
  .word 0x8c450000
  .word 0x8fa60090
  .word 0x8e2700dc
  .word 0x0c0c8220
  .word 0x00000000
  .word 0x1000015e
  .word 0x00000000
  .word 0x24040010
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040902d
  .word 0x8e030000
  .word 0x8c64000c
  .word 0x8e030038
  .word 0x00641821
  .word 0xafa300d0
  .word 0x8e03003c
  .word 0x00641823
  .word 0xafa300d4
  .word 0x8fa30090
  .word 0xac430000
  .word 0x9603001e
  .word 0xa4430004
  .word 0x24040003
  .word 0x24050001
  .word 0x27a600d0
  .word 0x0c131628
  .word 0x00000000
  .word 0xae420008
  .word 0x8e040000
  .word 0x8fa50094
  .word 0x0c131588
  .word 0x00000000
  .word 0x8e020018
  .word 0xae42000c
  .word 0xae120018
  .word 0x1000013c
  .word 0x00000000
  .word 0x240402b8
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040902d
  .word 0x8e040000
  .word 0x0240282d
  .word 0x8fa60094
  .word 0x0c131494
  .word 0x00000000
  .word 0x0220202d
  .word 0x0240282d
  .word 0x0c0c593c
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000125
  .word 0x00000000
  .word 0x8e150000
  .word 0x02a0202d
  .word 0x27a500da
  .word 0x24060002
  .word 0x0c131494
  .word 0x00000000
  .word 0x97a300da
  .word 0x00031080
  .word 0x00431021
  .word 0x00021100
  .word 0x24440008
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x97a400da
  .word 0x00041880
  .word 0x00641821
  .word 0x00031900
  .word 0x00439821
  .word 0xa6640000
  .word 0x24030001
  .word 0xa6630002
  .word 0xae620004
  .word 0x0000a02d
  .word 0x1000001b
  .word 0x00000000
  .word 0x3283ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00029100
  .word 0x8e620004
  .word 0x00521021
  .word 0x02a0202d
  .word 0x24450040
  .word 0x24060004
  .word 0x0c131494
  .word 0x00000000
  .word 0x8e620004
  .word 0x00521021
  .word 0x02a0202d
  .word 0x24450044
  .word 0x24060004
  .word 0x0c131494
  .word 0x00000000
  .word 0x8e620004
  .word 0x00522821
  .word 0x02a0202d
  .word 0x24060040
  .word 0x0c131494
  .word 0x00000000
  .word 0x26820001
  .word 0x3054ffff
  .word 0x3283ffff
  .word 0x97a200da
  .word 0x0062102a
  .word 0x1440ffe2
  .word 0x00000000
  .word 0xae3303f0
  .word 0x100000e7
  .word 0x00000000
  .word 0x8e040000
  .word 0x27a500de
  .word 0x8fa60094
  .word 0x0c131494
  .word 0x00000000
  .word 0x97a300de
  .word 0x9602001c
  .word 0x00021040
  .word 0x02021021
  .word 0xa4430020
  .word 0x100000db
  .word 0x00000000
  .word 0x8e040000
  .word 0x27a500b0
  .word 0x24060014
  .word 0x0c131494
  .word 0x00000000
  .word 0x8e040000
  .word 0x8fa500b8
  .word 0x0c131588
  .word 0x00000000
  .word 0x8e020000
  .word 0x8e030038
  .word 0x8c42000c
  .word 0x0062a821
  .word 0x8e2200dc
  .word 0x1440000d
  .word 0x00000000
  .word 0x8e020014
  .word 0x1440000a
  .word 0x00000000
  .word 0x8e2203f4
  .word 0x14400004
  .word 0x00000000
  .word 0x0c0c75ac
  .word 0x00000000
  .word 0xae2203f4
  .word 0x8e3403f4
  .word 0x10000056
  .word 0x00000000
  .word 0x9603001c
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02221021
  .word 0x8c42011c
  .word 0x14400021
  .word 0x00000000
  .word 0x97b200de
  .word 0x24020034
  .word 0x00121880
  .word 0x00431021
  .word 0x00439821
  .word 0x0260202d
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0260302d
  .word 0x0c148502
  .word 0x00000000
  .word 0x3242ffff
  .word 0xae820000
  .word 0x26830034
  .word 0xae830014
  .word 0x00021080
  .word 0x00621021
  .word 0xae820020
  .word 0x9603001c
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02221021
  .word 0xac54011c
  .word 0x9603001c
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02221021
  .word 0x8c44011c
  .word 0x9602001e
  .word 0x00021880
  .word 0x8c820014
  .word 0x00431021
  .word 0x8c420000
  .word 0x14400010
  .word 0x00000000
  .word 0x0c0c75ac
  .word 0x00000000
  .word 0x9604001c
  .word 0x00041880
  .word 0x00641821
  .word 0x000318c0
  .word 0x00641823
  .word 0x00031880
  .word 0x02231821
  .word 0x8c65011c
  .word 0x9603001e
  .word 0x00032080
  .word 0x8ca30014
  .word 0x00641821
  .word 0xac620000
  .word 0x9603001c
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02221021
  .word 0x8c44011c
  .word 0x9602001e
  .word 0x00021880
  .word 0x8c820014
  .word 0x00431021
  .word 0x8c540000
  .word 0x8fa600b4
  .word 0x0280202d
  .word 0x02a0282d
  .word 0x97a700b0
  .word 0x8fa800bc
  .word 0x0c0c75f8
  .word 0x00000000
  .word 0x0040982d
  .word 0x97a200b0
  .word 0x24420001
  .word 0x3052ffff
  .word 0x10000008
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0c0c7640
  .word 0x00000000
  .word 0x26420001
  .word 0x3052ffff
  .word 0x3243ffff
  .word 0x97a200b2
  .word 0x24420001
  .word 0x0062102a
  .word 0x1440fff4
  .word 0x00000000
  .word 0x8e040000
  .word 0x8fa500b4
  .word 0x0c131588
  .word 0x00000000
  .word 0x1000004a
  .word 0x00000000
  .word 0x8e020000
  .word 0x8e030038
  .word 0x8c42000c
  .word 0x00629821
  .word 0x9603001c
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02221021
  .word 0x8c42011c
  .word 0x14400021
  .word 0x00000000
  .word 0x97b200de
  .word 0x24020034
  .word 0x00121880
  .word 0x00431021
  .word 0x0043a021
  .word 0x0280202d
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a82d
  .word 0x02a0202d
  .word 0x0000282d
  .word 0x0280302d
  .word 0x0c148502
  .word 0x00000000
  .word 0x3242ffff
  .word 0xaea20000
  .word 0x26a30034
  .word 0xaea30014
  .word 0x00021080
  .word 0x00621021
  .word 0xaea20020
  .word 0x9603001c
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02221021
  .word 0xac55011c
  .word 0x8fa50094
  .word 0x0260202d
  .word 0x0c0c77fc
  .word 0x00000000
  .word 0x9604001c
  .word 0x00041880
  .word 0x00641821
  .word 0x000318c0
  .word 0x00641823
  .word 0x00031880
  .word 0x02231821
  .word 0x8c65011c
  .word 0x9603001e
  .word 0x00032080
  .word 0x8ca30020
  .word 0x00641821
  .word 0xac620000
  .word 0x8e040000
  .word 0x8fa50094
  .word 0x0c131588
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8e040000
  .word 0x8fa50094
  .word 0x0c131588
  .word 0x00000000
  .word 0x8e040000
  .word 0x27a50090
  .word 0x0c13065c
  .word 0x00000000
  .word 0x1440fbd2
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0080
  .word 0x7bb50070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0x27bd00e0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#undef uStack_6
#undef uStack_4
#undef uStack_2
#undef iStack_50
#undef uStack_4c
#pragma opt_lifetimes reset
#pragma pop
#pragma pop




/* W389 measured func_0031aad0 opt_propagation off: nd 1092 -> 1085; object 1832/1872 -> 1836/1872. */
#pragma push
#pragma opt_propagation off
// FUN_0031AAD0


#ifndef PC_BUILD
asm int func_0031aad0(Model* param_1)
{
  .set noreorder
  .word 0x27bdfef0
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
  .word 0x0080a82d
  .word 0x8c910428
  .word 0x24130001
  .word 0x0260f02d
  .word 0xafb30104
  .word 0x8e240004
  .word 0x1080001c
  .word 0x00000000
  .word 0x27a50108
  .word 0x27a6010c
  .word 0x0c0430e8
  .word 0x00000000
  .word 0x0040802d
  .word 0x8fa30108
  .word 0x0260102d
  .word 0x14620011
  .word 0x00000000
  .word 0x0200202d
  .word 0x3c05001a
  .word 0x24a513b0
  .word 0x26260040
  .word 0x0c134370
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c134344
  .word 0x00000000
  .word 0x8fa4010c
  .word 0x0000282d
  .word 0x0c1315e0
  .word 0x00000000
  .word 0xae200004
  .word 0x10000003
  .word 0x00000000
  .word 0x0000f02d
  .word 0x0000982d
  .word 0x8e240008
  .word 0x10800032
  .word 0x00000000
  .word 0x27a50108
  .word 0x27a6010c
  .word 0x0c0430e8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x8fa30108
  .word 0x24020001
  .word 0x14620027
  .word 0x00000000
  .word 0x8ea2037c
  .word 0x14400016
  .word 0x00000000
  .word 0x96360020
  .word 0x001610c0
  .word 0x24500010
  .word 0x0200202d
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040902d
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0200302d
  .word 0x0c148502
  .word 0x00000000
  .word 0x26420010
  .word 0xae420000
  .word 0xa656000c
  .word 0x24020001
  .word 0xa642000e
  .word 0xaeb2037c
  .word 0x8ea2037c
  .word 0xac540004
  .word 0x3c040078
  .word 0x2484e4e0
  .word 0x0280282d
  .word 0x0c12ddd8
  .word 0x00000000
  .word 0x8fa4010c
  .word 0x0000282d
  .word 0x0c1315e0
  .word 0x00000000
  .word 0xae200008
  .word 0x10000003
  .word 0x00000000
  .word 0x0000982d
  .word 0xafa00104
  .word 0x8e22000c
  .word 0x10400041
  .word 0x00000000
  .word 0x0000a02d
  .word 0x1000003a
  .word 0x00000000
  .word 0x8e22000c
  .word 0x0014b080
  .word 0x00561021
  .word 0x8c440000
  .word 0x10800033
  .word 0x00000000
  .word 0x27a50108
  .word 0x27a6010c
  .word 0x0c0430e8
  .word 0x00000000
  .word 0x7fa200f0
  .word 0x8fa30108
  .word 0x24020001
  .word 0x14620029
  .word 0x00000000
  .word 0x8ea2037c
  .word 0x14400016
  .word 0x00000000
  .word 0x96370020
  .word 0x001710c0
  .word 0x24500010
  .word 0x0200202d
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040902d
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0200302d
  .word 0x0c148502
  .word 0x00000000
  .word 0x26420010
  .word 0xae420000
  .word 0xa657000c
  .word 0x24020001
  .word 0xa642000e
  .word 0xaeb2037c
  .word 0x8ea4037c
  .word 0x3282ffff
  .word 0x000218c0
  .word 0x8c820000
  .word 0x00431821
  .word 0x7ba200f0
  .word 0xac620000
  .word 0x8fa4010c
  .word 0x0000282d
  .word 0x0c1315e0
  .word 0x00000000
  .word 0x8e22000c
  .word 0x00561021
  .word 0xac400000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000982d
  .word 0x26940001
  .word 0x96220020
  .word 0x0282102b
  .word 0x1440ffc4
  .word 0x00000000
  .word 0x8e280014
  .word 0x15000004
  .word 0x00000000
  .word 0x8e220010
  .word 0x10400033
  .word 0x00000000
  .word 0x24030001
  .word 0x17c3002f
  .word 0x00000000
  .word 0x8fa20104
  .word 0x1443002c
  .word 0x00000000
  .word 0x11000016
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02006a
  .word 0x2442abc8
  .word 0xffa20010
  .word 0x24021589
  .word 0xffa20018
  .word 0x24040002
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae220010
  .word 0xae200014
  .word 0x0000982d
  .word 0x10000016
  .word 0x00000000
  .word 0x8e240010
  .word 0x27a50108
  .word 0x27a6010c
  .word 0x0c0430e8
  .word 0x00000000
  .word 0x8fa40108
  .word 0x24030001
  .word 0x14830009
  .word 0x00000000
  .word 0xaea200dc
  .word 0x8fa4010c
  .word 0x0000282d
  .word 0x0c1315e0
  .word 0x00000000
  .word 0xae200010
  .word 0x10000005
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000002
  .word 0x00000000
  .word 0x0000982d
  .word 0x8e340018
  .word 0x1280004a
  .word 0x00000000
  .word 0x8ea200dc
  .word 0x10400046
  .word 0x00000000
  .word 0x1000003f
  .word 0x00000000
  .word 0x8ea2035c
  .word 0x14400016
  .word 0x00000000
  .word 0x96360020
  .word 0x001610c0
  .word 0x24500008
  .word 0x0200202d
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040902d
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0200302d
  .word 0x0c148502
  .word 0x00000000
  .word 0x26420008
  .word 0xae420000
  .word 0xa6560004
  .word 0x24020001
  .word 0xa6420006
  .word 0xaeb2035c
  .word 0x8ea4035c
  .word 0x96820004
  .word 0x000218c0
  .word 0x8c820000
  .word 0x00431021
  .word 0x8c420000
  .word 0x14400009
  .word 0x00000000
  .word 0x0c0c808c
  .word 0x00000000
  .word 0x8ea5035c
  .word 0x96830004
  .word 0x000320c0
  .word 0x8ca30000
  .word 0x00641821
  .word 0xac620000
  .word 0x8ea4035c
  .word 0x96820004
  .word 0x000218c0
  .word 0x8c820000
  .word 0x00431021
  .word 0x8e840008
  .word 0x8c450000
  .word 0x8e860000
  .word 0x8ea700dc
  .word 0x0c0c8220
  .word 0x00000000
  .word 0x8e840008
  .word 0x0000282d
  .word 0x0c1315e0
  .word 0x00000000
  .word 0x8e90000c
  .word 0x0280202d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x0200a02d
  .word 0x1680ffc1
  .word 0x00000000
  .word 0xae200018
  .word 0x10000002
  .word 0x00000000
  .word 0x0000982d
  .word 0x24020001
  .word 0x16620099
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000093
  .word 0x00000000
  .word 0x00141880
  .word 0x0223b821
  .word 0x26e20028
  .word 0x7fa200e0
  .word 0x8ee20028
  .word 0x1040008b
  .word 0x00000000
  .word 0x0000902d
  .word 0x00741021
  .word 0x000210c0
  .word 0x00541023
  .word 0x00021080
  .word 0x02a2f021
  .word 0x00141040
  .word 0x02221021
  .word 0x7fa200d0
  .word 0x10000075
  .word 0x00000000
  .word 0x8ee30028
  .word 0x00121040
  .word 0x00621021
  .word 0x84440000
  .word 0x2402ffff
  .word 0x1082006d
  .word 0x00000000
  .word 0x8fc30118
  .word 0x8c680000
  .word 0x3082ffff
  .word 0x00022880
  .word 0x00a22821
  .word 0x00052900
  .word 0x01052821
  .word 0x8ca70040
  .word 0x10e00007
  .word 0x00000000
  .word 0x3246ffff
  .word 0x00062880
  .word 0x00a62821
  .word 0x00052900
  .word 0x01052821
  .word 0xaca70040
  .word 0x3250ffff
  .word 0x00102880
  .word 0x00b02821
  .word 0x00052900
  .word 0x8c630000
  .word 0x00652821
  .word 0x8ca30044
  .word 0x34630001
  .word 0xaca30044
  .word 0x16800052
  .word 0x00000000
  .word 0x8ea8035c
  .word 0x11000018
  .word 0x00000000
  .word 0x00042c3c
  .word 0x00052c3f
  .word 0x95030004
  .word 0x00a3082a
  .word 0x10200012
  .word 0x00000000
  .word 0x000518c0
  .word 0x8d070000
  .word 0x00e31821
  .word 0x8c630000
  .word 0x1060000c
  .word 0x00000000
  .word 0x001030c0
  .word 0x000218c0
  .word 0x00e31821
  .word 0x8c650000
  .word 0x00e61821
  .word 0xac650000
  .word 0x8d030000
  .word 0x00662821
  .word 0x90a30004
  .word 0x34630001
  .word 0xa0a30004
  .word 0x8ea7037c
  .word 0x10e00019
  .word 0x00000000
  .word 0x0004243c
  .word 0x0004243f
  .word 0x94e3000c
  .word 0x0083082a
  .word 0x10200013
  .word 0x00000000
  .word 0x000418c0
  .word 0x8ce60000
  .word 0x00c31821
  .word 0x8c630000
  .word 0x1060000d
  .word 0x00000000
  .word 0x3243ffff
  .word 0x000328c0
  .word 0x000218c0
  .word 0x00c31821
  .word 0x8c640000
  .word 0x00c51821
  .word 0xac640000
  .word 0x8ce30000
  .word 0x00652021
  .word 0x90830004
  .word 0x34630001
  .word 0xa0830004
  .word 0x8fd6011c
  .word 0x12c0001a
  .word 0x00000000
  .word 0x8ec30014
  .word 0x00021080
  .word 0x7fa200c0
  .word 0x00621021
  .word 0x8c440000
  .word 0x10800007
  .word 0x00000000
  .word 0x0c0c75c0
  .word 0x00000000
  .word 0x00102080
  .word 0x8ec30014
  .word 0x00641821
  .word 0xac620000
  .word 0x8ec30020
  .word 0x7ba200c0
  .word 0x00621021
  .word 0x8c440000
  .word 0x10800007
  .word 0x00000000
  .word 0x0c0c782c
  .word 0x00000000
  .word 0x00102080
  .word 0x8ec30020
  .word 0x00641821
  .word 0xac620000
  .word 0x26520001
  .word 0x7ba200d0
  .word 0x94420020
  .word 0x0242102b
  .word 0x1440ff88
  .word 0x00000000
  .word 0x7ba200e0
  .word 0x8c440000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x26940001
  .word 0x2e820004
  .word 0x1440ff6c
  .word 0x00000000
  .word 0x0260102d
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
  .word 0x27bd0110
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_propagation reset
#pragma pop




// FUN_0031B220


u32 func_0031b220(Model* param_1)
{

  int *piVar1;

  u32 uVar2;

  int iVar3;

  u32 uVar4;

  u32 lVar5;

  int iVar6;

  int iStack_4;

  

  iVar6 = (int)param_1;

  piVar1 = *(int **)(iVar6 + 0x428);

  if (piVar1 == (int *)0x0) {

    return 1;

  }

  else {

    uVar2 = 0;

    switch(*(u8 *)(piVar1 + 0x12)) {

    case '\0':

      if (piVar1[0x11] != 0) {

        if ((*(u16 *)(iVar6 + 0xd8) & 0x4000) != 0) {

          H_Cdvd_ReadSync((HCdvd*)piVar1[0x11]);

        }

        lVar5 = H_Cdvd_IsFileLoaded((HCdvd*)piVar1[0x11]);

        if (lVar5 == 0) {
          goto switch_end;
        }


        if (piVar1[0x13] == 0) {

          piVar1[0xe] = *(int *)(piVar1[0x11] + 0x110);

          piVar1[0xf] = *(int *)(piVar1[0x11] + 0x118);

        }

        else {

          iVar3 = (int)H_Cdvd_ArchiveGetFile((HCdvd*)piVar1[0x11],0,(u32 *)&iStack_4);

          piVar1[0xe] = iVar3;

          piVar1[0xf] = iStack_4;

          uVar4 = (u32)H_Cdvd_ArchiveGetFile((HCdvd*)piVar1[0x11],1,(u32 *)&iStack_4);

          func_0031e8d0(iVar6 + 0x3f8,*(u16 *)(iVar6 + 0xd4),*(u16 *)(iVar6 + 0xd6),

                       uVar4,iStack_4);

        }

        *(u8 *)(piVar1 + 0x12) = 2;

      }

      if (*piVar1 == 0) {

        iVar3 = func_004c58a0(3,1,piVar1 + 0xe);

        *piVar1 = iVar3;

        *(u8 *)(piVar1 + 0x12) = 2;

      }

    case '\x01':

      if (*(u8 *)(piVar1 + 0x12) != 1) goto switchD_0031b278_caseD_2;

      for (;;) {

        lVar5 = func_0031aad0(param_1);

        if (lVar5 == 0) {
          goto switch_end;
        }

        *(u8 *)(piVar1 + 0x12) = 2;

switchD_0031b278_caseD_2:

        lVar5 = func_00319970(param_1);

        if (lVar5 != 0) {

          *(u8 *)(piVar1 + 0x12) = 3;

          break;

        }

        *(u8 *)(piVar1 + 0x12) = 1;

      }

      if ((*(u16 *)(iVar6 + 0xd8) & 0x4000) == 0) goto switchD_0031b278_caseD_3;

      *(u8 *)(piVar1 + 0x12) = 4;

      goto switchD_0031b278_caseD_4;



    case '\x02':

      goto switchD_0031b278_caseD_2;

    case '\x03':

switchD_0031b278_caseD_3:

      lVar5 = func_0031aad0(param_1);

      if (lVar5 == 0) {
        goto switch_end;
      }

      *(u8 *)(piVar1 + 0x12) = 4;

    case '\x04':

switchD_0031b278_caseD_4:

      if (piVar1[0x10] != 0) {

        func_001a14c0(piVar1[0x10]);

      }

      func_004c5780(*piVar1,piVar1 + 0xe);

      if (piVar1[0x11] != 0) {

        H_Cdvd_Destroy((HCdvd*)piVar1[0x11]);

      }

      *(u8 *)(piVar1 + 0x12) = 5;

    case '\x05':

      uVar2 = 1;

    }

  }

switch_end:
  return uVar2;

}




// FUN_0031B470


void func_0031b470(void)



{

  memset(sMdlListTails, 0, sizeof(sMdlListTails));

  return;

}




/* W323 measured func_0031b4a0 opt_loop_invariants on: nd293 -> nd266; object 472/480. */
#pragma push
#pragma opt_loop_invariants on
// FUN_0031B4A0


#ifndef PC_BUILD
asm void func_0031b4a0(char* param_1,u16 param_2)
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
  .word 0x0080a02d
  .word 0x0000982d
  .word 0x0000902d
  .word 0x30b1ffff
  .word 0x10000017
  .word 0x00000000
  .word 0x00121040
  .word 0x00521021
  .word 0x00028040
  .word 0x3c02006a
  .word 0x2442aee0
  .word 0x0050a821
  .word 0x96a40000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000a
  .word 0x00000000
  .word 0x96a20002
  .word 0x16220007
  .word 0x00000000
  .word 0x3c02006a
  .word 0x2442aee4
  .word 0x00501021
  .word 0x94420000
  .word 0x10000006
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420004
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x3222ffff
  .word 0x0000202d
  .word 0x3050ffff
  .word 0x3c03006a
  .word 0x2463af00
  .word 0x1000000d
  .word 0x00000000
  .word 0x00041040
  .word 0x00621021
  .word 0x94420000
  .word 0x16020004
  .word 0x00000000
  .word 0x24130001
  .word 0x10000008
  .word 0x00000000
  .word 0x0202082a
  .word 0x14200005
  .word 0x00000000
  .word 0x24840001
  .word 0x2c8200be
  .word 0x1440fff2
  .word 0x00000000
  .word 0x24020001
  .word 0x16620026
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x28410039
  .word 0x1020000a
  .word 0x00000000
  .word 0x0280202d
  .word 0x3c05006a
  .word 0x24a5b080
  .word 0x27869d20
  .word 0x0200382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0x284100b3
  .word 0x1020000a
  .word 0x00000000
  .word 0x0280202d
  .word 0x3c05006a
  .word 0x24a5b0a0
  .word 0x27869d20
  .word 0x0200382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x0280202d
  .word 0x3c05006a
  .word 0x24a5b080
  .word 0x27869d20
  .word 0x0200382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0280202d
  .word 0x3c05006a
  .word 0x24a5b0c0
  .word 0x27869d20
  .word 0x0200382d
  .word 0x0c148eb2
  .word 0x00000000
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
#endif /* PC_BUILD: asm function omitted */
#pragma pop




// FUN_0031B680


u32 func_0031b680(int param_1,int param_2,int *param_3,int *param_4)
{
  short sVar1;
  u32 uVar2;
  int iVar3;

  if (param_1 != 5) {
    return 0;
  }

  iVar3 = (int)param_2;
  if ((param_2 >= 60000) && (param_2 < 0xeac4)) {
    *param_3 = 1;
    *param_4 = iVar3 % 100;
    return 1;
  }

  if ((param_2 >= 0xeac4) && (param_2 < 0xeb28)) {
    sVar1 = datGetPartyId(0);
    *param_3 = (int)sVar1;
    *param_4 = iVar3 % 100;
    return 1;
  }

  if ((param_2 >= 0xeb28) && (param_2 < 0xeb8c)) {
    sVar1 = datGetPartyId(1);
    *param_3 = (int)sVar1;
    *param_4 = iVar3 % 100;
    return 1;
  }

  if ((param_2 >= 0xeb8c) && (param_2 < 0xebf0)) {
    sVar1 = datGetPartyId(2);
    *param_3 = (int)sVar1;
    *param_4 = iVar3 % 100;
    return 1;
  }

  return 0;
}




// FUN_0031B820


#ifndef PC_BUILD
asm void func_0031b820(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdfeb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00a0802d
  .word 0x0000902d
  .word 0x0010243c
  .word 0x0004243f
  .word 0x0000282d
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0010243c
  .word 0x0004243f
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3051ffff
  .word 0x2e01000b
  .word 0x10200165
  .word 0x00000000
  .word 0x3c04007c
  .word 0x24849170
  .word 0x00101880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b358
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x305000ff
  .word 0x24050003
  .word 0x1205000c
  .word 0x00000000
  .word 0x24020007
  .word 0x12020009
  .word 0x00000000
  .word 0x0260202d
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x1000005b
  .word 0x00000000
  .word 0x24040007
  .word 0x0220282d
  .word 0x0000302d
  .word 0x0c0c5a44
  .word 0x00000000
  .word 0x1440001e
  .word 0x00000000
  .word 0x24020007
  .word 0x1202000a
  .word 0x00000000
  .word 0x3227ffff
  .word 0x27a40050
  .word 0x3c05006a
  .word 0x24a5b0f0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x3227ffff
  .word 0x27a40050
  .word 0x3c05006a
  .word 0x24a5b110
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050003
  .word 0x24060007
  .word 0x0220382d
  .word 0x27a80050
  .word 0x0000482d
  .word 0x0c0c64a8
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050003
  .word 0x24060007
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x3232ffff
  .word 0x265103e8
  .word 0x3225ffff
  .word 0x24040007
  .word 0x0000302d
  .word 0x0c0c5a44
  .word 0x00000000
  .word 0x1440001f
  .word 0x00000000
  .word 0x24020007
  .word 0x1202000a
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05006a
  .word 0x24a5b130
  .word 0x27869d20
  .word 0x0240382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05006a
  .word 0x24a5b150
  .word 0x27869d20
  .word 0x0240382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x3227ffff
  .word 0x0260202d
  .word 0x24050004
  .word 0x24060007
  .word 0x27a80050
  .word 0x0000482d
  .word 0x0c0c64a8
  .word 0x00000000
  .word 0x24120001
  .word 0x10000009
  .word 0x00000000
  .word 0x3227ffff
  .word 0x0260202d
  .word 0x24050004
  .word 0x24060007
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x24120001
  .word 0x24040001
  .word 0x100000ee
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050003
  .word 0x24060007
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x24040001
  .word 0x100000e4
  .word 0x00000000
  .word 0x24040007
  .word 0x0220282d
  .word 0x0000302d
  .word 0x0c0c5a44
  .word 0x00000000
  .word 0x14400012
  .word 0x00000000
  .word 0x3227ffff
  .word 0x27a40050
  .word 0x3c05006a
  .word 0x24a5b110
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050003
  .word 0x24060007
  .word 0x0220382d
  .word 0x27a80050
  .word 0x0000482d
  .word 0x0c0c64a8
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050003
  .word 0x24060007
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x3222ffff
  .word 0x245003e8
  .word 0x3205ffff
  .word 0x24040007
  .word 0x0000302d
  .word 0x0c0c5a44
  .word 0x00000000
  .word 0x14400013
  .word 0x00000000
  .word 0x3227ffff
  .word 0x27a40050
  .word 0x3c05006a
  .word 0x24a5b150
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x3207ffff
  .word 0x0260202d
  .word 0x24050004
  .word 0x24060007
  .word 0x27a80050
  .word 0x0000482d
  .word 0x0c0c64a8
  .word 0x00000000
  .word 0x24120001
  .word 0x10000009
  .word 0x00000000
  .word 0x3207ffff
  .word 0x0260202d
  .word 0x24050004
  .word 0x24060007
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x24120001
  .word 0x24040001
  .word 0x1000009f
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050003
  .word 0x24060007
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x24040001
  .word 0x10000095
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050003
  .word 0x24060007
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x24040001
  .word 0x1000008b
  .word 0x00000000
  .word 0x24040007
  .word 0x0220282d
  .word 0x0000302d
  .word 0x0c0c5a44
  .word 0x00000000
  .word 0x14400012
  .word 0x00000000
  .word 0x3227ffff
  .word 0x27a40050
  .word 0x3c05006a
  .word 0x24a5b110
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050003
  .word 0x24060007
  .word 0x0220382d
  .word 0x27a80050
  .word 0x0000482d
  .word 0x0c0c64a8
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050003
  .word 0x24060007
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x3222ffff
  .word 0x245003e8
  .word 0x3205ffff
  .word 0x24040007
  .word 0x0000302d
  .word 0x0c0c5a44
  .word 0x00000000
  .word 0x14400013
  .word 0x00000000
  .word 0x3227ffff
  .word 0x27a40050
  .word 0x3c05006a
  .word 0x24a5b150
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x3207ffff
  .word 0x0260202d
  .word 0x24050004
  .word 0x24060007
  .word 0x27a80050
  .word 0x0000482d
  .word 0x0c0c64a8
  .word 0x00000000
  .word 0x24120001
  .word 0x10000009
  .word 0x00000000
  .word 0x3207ffff
  .word 0x0260202d
  .word 0x24050004
  .word 0x24060007
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x24120001
  .word 0x24040001
  .word 0x10000046
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050003
  .word 0x24060007
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x24040001
  .word 0x1000003c
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400022
  .word 0x00000000
  .word 0x24040007
  .word 0x0220282d
  .word 0x0000302d
  .word 0x0c0c5a44
  .word 0x00000000
  .word 0x14400012
  .word 0x00000000
  .word 0x3227ffff
  .word 0x27a40050
  .word 0x3c05006a
  .word 0x24a5b170
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050003
  .word 0x24060007
  .word 0x0220382d
  .word 0x27a80050
  .word 0x0000482d
  .word 0x0c0c64a8
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050003
  .word 0x24060007
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050003
  .word 0x24060007
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x24040001
  .word 0x1000000d
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050003
  .word 0x24060007
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x24040001
  .word 0x10000003
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x24030001
  .word 0x14830006
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050003
  .word 0x240601f4
  .word 0x0c0c65b4
  .word 0x00000000
  .word 0x24030001
  .word 0x16430006
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050004
  .word 0x240601f5
  .word 0x0c0c65b4
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0150
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */




// FUN_0031BE80


u32 func_0031be80(u32 param_1)
{
  short sVar1;
  short sVar2;
  int bVar4;
  u32 uVar5;
  int lVar6;
  int iVar8;
  int iVar7;
  short *psVar9;
  short *psVar10;
  int sVar3;
  u16 asStack_20[12];
  u32 iStack_8;
  u32 iStack_4;

  iStack_8 = 0;
  iStack_4 = 0;
  iVar8 = (int)param_1;
  lVar6 = func_0031b680_u32ptr(*(u16 *)(iVar8 + 0xd4), *(u16 *)(iVar8 + 0xd6),
                              &iStack_8, &iStack_4);
  if (lVar6 == 1) {
    if ((iStack_8 != 0) && (iStack_4 != 0)) {
      func_0031b820(param_1, iStack_8);
      uVar5 = 1;
    } else {
      uVar5 = 0;
    }
  } else {
    sVar3 = *(u16 *)(iVar8 + 0xd6);
    *(MdlShortVec10 *)((u8 *)asStack_20) =
        *(MdlShortVec10 *)((u8 *)DAT_0069b190_abs);
    if (*(u16 *)(iVar8 + 0xd4) != 5) {
      bVar4 = 0;
    } else {
      for (iVar8 = 0; iVar8 < 0x14; iVar8 = iVar8 + 1) {
        if (sVar3 == asStack_20[iVar8]) {
          if (asStack_20[iVar8] != 0x3e6) {
            iStack_8 = iVar8 + 1;
          } else {
            iStack_8 = 9;
          }
          bVar4 = 1;
          goto LAB_0031bfb8;
        }
      }
      bVar4 = 0;
    }
LAB_0031bfb8:
    if (bVar4 == 1) {
      func_0031b820(param_1, iStack_8);
      uVar5 = 1;
    } else {
      uVar5 = 0;
    }
  }
  return uVar5;
}




/* W323 measured func_0031c1d0 opt_common_subs off: nd1055 -> nd889; object 1544/1552. */












