typedef void (*MdlVoidFn)();
typedef void (*MdlVoidFnU32)(unsigned int);
#include "Graphics/Model/mdlFile.h"
#include "Graphics/Model/mdlManager.h"
#include "Graphics/Model/mdlFldCharIds.h"
#include "Main/g_data.h"
#include "Main/Battle/Data/datCalc.h"
#include "Main/Battle/Data/datUnit.h"
#include "Battle/btlVoice.h"
#include "temporary.h"
#define MDL_PATH_FORMAT(addr) (DAT_0069b210 + ((addr) - 0x69b210))

#pragma alias DAT_007cca10_y2 DAT_007cca10
#pragma alias FUN_004c2f30_y2 FUN_004c2f30
#pragma alias FUN_004c6be0_y2 FUN_004c6be0
#pragma alias FUN_00491cc0_y2 FUN_00491cc0
#pragma alias FUN_00491ea0_y2 FUN_00491ea0
#pragma alias FUN_004cb7f0_y2 FUN_004cb7f0
#pragma alias FUN_004916d0_y2 FUN_004916d0
#pragma alias DAT_0096017c_y2 DAT_0096017c
#pragma alias DAT_007cada0_y2 DAT_007cada0
#pragma alias DAT_00960090_y2 DAT_00960090
#pragma alias DAT_00960090_abs_y2 DAT_00960090_abs
#pragma alias DAT_00960094_y2 DAT_00960094
#pragma alias DAT_007caf08_y2 DAT_007caf08
#pragma alias RpMaterialGetUserDataArray_y2 RpMaterialGetUserDataArray
#pragma alias RpUserDataArrayGetName_y2 RpUserDataArrayGetName
#pragma alias RpUserDataArrayGetFormat_y2 RpUserDataArrayGetFormat
#pragma alias FUN_0031e4d0_y2 FUN_0031e4d0
#pragma alias FUN_00320640_y2 FUN_00320640


extern f32 sqrtf(f32 value);
extern f32 fabsf(f32 value);
#pragma intrinsic fabsf
#define MODEL_PATH "model/"
u32 func_0031c820(u16 type, u16 id, char* dst);
u32 func_0031e420(u16 type, u16 id);
extern const char D_0069BA08[];
extern const char DAT_0069ba50[];
extern const char DAT_0069ba70[];
extern const char DAT_0069ba90[];
extern const char DAT_0069bab0[];
extern const char DAT_0069bad0[];
extern const char DAT_007cca10_y2[];
extern unsigned char DAT_006a6b20[];



typedef int (*code)(); /* PC: unnamed varargs */
typedef u8 MdlDispatchSlot[0x10];
typedef u8 bool;
typedef struct MdlTypeDispatch {
    code destroy;
    code create;
    code release;
    code advance;
    code finish;
    s32 allocationSize;
} MdlTypeDispatch;
typedef struct MdlExtendedDispatch {
    code callback0;
    code callback1;
    code callback2;
    code callback3;
    code callback4;
    code callback5;
    code callback6;
} MdlExtendedDispatch;
typedef struct MdlDispatch13 {
    code callbacks[13];
} MdlDispatch13;
typedef struct MdlStridedValue {
    s32 value;
    u8 next[0x18];
} MdlStridedValue;
typedef struct MdlStridedCallback24 {
    code callback;
    u8 next[0x14];
} MdlStridedCallback24;
typedef struct MdlStridedCallback28 {
    code callback;
    u8 next[0x18];
} MdlStridedCallback28;
typedef struct MdlAnimationCursor {
    u32 frame;
    int animation[1];
} MdlAnimationCursor;
typedef struct MdlFileResource {
    u8 unk_00[4];
    int child;
    u8 unk_08[0x58];
    u32 unk_60;
    u32 unk_64;
} MdlFileResource;
typedef struct MdlRuntimeState {
    u8 unk_00[0x38];
    s32 allocationCount;
    u8 unk_3c[0x50];
    u32 minimumMode;
} MdlRuntimeState;
static const u32 sMdlNanBits = 0x7fffffff;
extern float ABS_f32(float param_1);
extern float SQRT_f32(float param_1);
extern RwMatrix *RwMatrixRotate_f32_first(float angle, RwMatrix *matrix,
                                          const RwV3d *axis, RwOpCombineType combineOp);
typedef union Qword128 { u_long128 q; struct { u64 lo; u64 hi; }; } Qword128;
typedef union Vec128 {
    struct { u32 _0_4_; u32 _4_4_; u32 _8_4_; u32 _12_4_; };
    struct { u64 _0_8_; u64 _8_8_; };
    struct { u8 _0_1_; u8 _1_1_; u8 _2_1_; u8 _3_1_; };
    struct { u8 _0_3_[3]; };
    struct { u8 _0_12_[12]; };
    struct { u8 _4_12_[12]; };
} Vec128;
typedef u32 (*MdlCreate3FloatFn)(float, float, float);
typedef u32 (*MdlFrameCallback)(f32, f32, int *, int *);
typedef struct MdlFrameDispatch {
    code callback0;
    code callback1;
    MdlFrameCallback create;
    code apply;
} MdlFrameDispatch;
typedef u32 (*MdlCreate2FloatFn)(float, int, float);
static inline uintptr_t MdlFile_AddOffsetFirst(uintptr_t offset, uintptr_t base)
{
  return offset + base;
}
static Vec128 auStack_10, auStack_30, auStack_40, auStack_50, auStack_80, auStack_90, auStack_a0;
static Vec128 _DAT_0069c4d0;
static u64 _DAT_0069c4a0;
extern u8 DAT_0069c4a0_abs[];
static float _fStack_50;
static u32 *piGpffffa850;
static u8 *puGpffffbd04;
static int cGpffffb857;
extern u16 sGpffffb880;
static u8 bGpffffb854, bGpffffb855, bGpffffb856, bGpffffb857;
extern f32 DAT_007cae4c;
u32 FUN_0031d6b0(void);
u32 FUN_0031d700(int *param_1);
void FUN_0031d790(u32 *param_1);
void FUN_0031d7d0(u32 *param_1);
u32 FUN_0031d7e0(int *param_1,u32 param_2,u16 param_3,u32 param_4,

            u32 param_5);
u32 FUN_0031d900(int *param_1,int *param_2,u16 param_3);
void FUN_0031d9c0(int *param_1,u32 *param_2);
void FUN_0031dc80(int *param_1,u32 param_2);
void FUN_0031dce0(u32 *param_1);
void FUN_0031dd40(int *param_1,u32 *param_2);
void FUN_0031dda0(int *param_1,float *param_2);
void FUN_0031de30(u32 *param_1);
void FUN_0031ded0(u32 *param_1);
void FUN_0031df80(u32 *param_1);
extern void FUN_0034fcf0_i(int param_1);
extern u32 FUN_0034fcd0_i(u32 param_1);
u32 FUN_0031dff0(u32 param_1,u32 param_2);
u32 FUN_0031e0b0(int *param_1);
void FUN_0031e130(int *param_1);
void FUN_0031e1b0(int param_1);
void FUN_0031e1e0(int param_1);
void FUN_0031e210(int param_1);
void FUN_0031e240(int param_1);
void FUN_0031e270(int param_1,u64 param_2);
void FUN_0031e2c0(int param_1);
int FUN_0031e300(u32 *param_1);
extern u64 FUN_0031e300_wide(u32 *param_1);
int FUN_0031e310(short param_1,short param_2);
extern int FUN_0031e310_u32(u32 param_1,u32 param_2);
u64 FUN_0031e420(u16 param_1,u32 param_2);
void FUN_0031e4d0(int *param_1,u32 param_2,u32 param_3);
void FUN_0031e8d0(int *param_1,u32 param_2,u32 param_3,int param_4,u32 param_5);
u32 FUN_0031ebe0(int *param_1);
void FUN_0031ee80(int *param_1,int *param_2);
void FUN_0031eeb0(u32 *param_1);
void FUN_0031eee0(int *param_1);
void FUN_0031ef80(int *param_1,short param_2,short param_3);
void FUN_0031f5c0(int *param_1);
void FUN_0031f6d0(u32 *param_1,u16 param_2,u16 param_3,u16 param_4);
static u32 FUN_0031f740(int *param_2,float param_1);
u8 * FUN_0031f7a0(float param_1,int *param_2);
u8 * FUN_0031f870(float param_1,int *param_2,float param_3,int *param_4,float param_5);
void FUN_0031f9d0(float param_1,int *param_2,float param_3,int *param_4);
void FUN_0031faf0(f32 *param_1,u32 param_2);
static u32 * FUN_0031fbd0(int *param_2,float param_1);
u8 * FUN_0031fd00(float firstTime, int *track1, float secondTime, int *track2, float blend);
void FUN_0031fde0(int *track, u8 *color, f32 firstTime, f32 blend);
void FUN_00320080(int param_4,float param_1,int param_5,float param_2,float param_3);
u32 FUN_00320230(void);
void FUN_00320290(int param_1);
void FUN_00320380(float param_1,int *param_2);
void FUN_003204a0(int *param_4,float param_1,float param_2,float param_3);
void FUN_00320640(f32 param_1,f32 param_2,int *param_3);
void FUN_00320770(int *param_1);
s32 FUN_00320810(int *param_1);
u32 FUN_00320880(u64 param_1,int *param_2,int param_3,u64 param_4);
u32 FUN_00320ba0(u32 param_1,u32 *param_2);
u32 FUN_00320cf0(u32 param_1,u32 param_2);
u64 FUN_00320da0(u64 param_1,u64 param_2);
u32 FUN_00320de0(u32 param_1,u32 *param_2);
u16 FUN_00320f70(u64 param_1,u32 param_2);
u32 FUN_00320fb0(u16 param_1);
void FUN_00321010(int param_1);
u32 FUN_00321050(int param_1);
void FUN_00321070(int *param_1,u32 param_2);
u32 FUN_003210a0(u32 param_1);
void FUN_003210c0(void);
extern u32 FUN_003210c0_ret(u64 param_1);
extern u32 FUN_003210c0_int(int param_1);
void FUN_00321120(u16 param_1);
u16 FUN_00321130(void);
void FUN_00321140(int param_1,u32 param_2);
extern void FUN_00321140_passthru(void);
void FUN_00321180(int param_1,u32 param_2);
void FUN_003211d0(int param_1,u32 param_2);
void FUN_00321220(int param_1,u32 param_2);
void FUN_00321260(int param_1,u32 param_2);
void FUN_003212a0(int param_1,u32 param_2);
void FUN_003212e0(int param_1,u32 param_2);
void FUN_00321320(u32 *param_1);
void FUN_00321360(u32 param_1);
u64 FUN_00321a60(void);
u64 FUN_00321b00(void);
u64 FUN_00321c50(void);
u64 FUN_00321cb0(void);
u64 FUN_00321ce0(void);
u64 FUN_00321d40(void);
u64 FUN_00321e20(void);
u64 FUN_00321e50(void);
u64 FUN_00321eb0(void);
void FUN_00321f10(u32 param_1);
extern void FUN_00321f10_passthru(void);
void FUN_00321fe0(void);
void FUN_00322010(void);
u32 FUN_00322530(int param_1);
extern u32 FUN_00322530_u32(int param_1);
u32 FUN_003225d0(int *param_1);
extern u32 FUN_003225d0_u32(int *param_1);
void FUN_00322660(int param_1);
void FUN_003226b0(int *param_1,int param_2);
u32 FUN_00322880(int param_1);
void FUN_00322a20(int param_1);
void FUN_00322ab0(int *param_1,int param_2,float *param_3);
void FUN_00322d10(int param_1,float *param_2);
void FUN_00322d40(int param_1,u32 param_2);
extern void FUN_00322d40_onearg(u32 resource);
u32 FUN_00322da0(int *param_1,int param_2);
u32 FUN_00322dc0(u32 *param_1);
extern u32 FUN_00322dc0_u32(u32 *param_1);
void FUN_00322f20(int param_1);
u32 FUN_00322fb0(u32 param_1);
void FUN_00322fd0(int param_1,u32 param_2,float *param_3);
u32 FUN_003230f0(u32 param_1,u32 param_2,u32 param_3);
int FUN_00323240(u32 param_1,int param_2,u16 param_3,int param_4);
int FUN_003233a0(u32 param_1,u32 param_2,u16 param_3,int param_4,u32 param_5);
extern int FUN_003233a0_ptr(u32 param_1,u32 param_2,u16 param_3,u8 *param_4,u32 param_5);
u32 FUN_003234f0(u16 param_1,u32 param_2);
extern u32 FUN_003234f0_u32(u16 param_1,u32 param_2);
u32 FUN_00323640(u16 *param_1);
extern u32 FUN_00323640_u32(u16 *param_1);
void FUN_003237c0(int param_1);
 extern void FUN_003237c0_i(int param_1);
 extern void FUN_003237c0_u32(u32 param_1);
void FUN_00323860(void);
void FUN_00323860_4arg(int param_1,int param_2,int param_3,int param_4);
extern void FUN_00323860_2arg(int param_1,int param_2);
void FUN_00323880(int param_1,u16 *param_2,int param_3,int param_4);
void FUN_003238d0(int param_1);
extern void FUN_003238d0_4arg(int param_1,int param_2,int param_3,int param_4);
extern void FUN_003238d0_ptr4(u16 *param_1,u8 *param_2,u8 *param_3,u8 *param_4);
 extern void FUN_00323920_out(u8 *param_1);
 extern void FUN_00323a30_out(u8 *param_1);
void FUN_00323920(RwMatrix *param_1,void *param_2,s32 param_3,f32 param_4);
void FUN_00323a30(RwMatrix *param_1,void *param_2,s32 param_3,void *param_4);
void FUN_00323b90(int param_1,u64 param_2);
extern void FUN_00323b90_i(int param_1,int param_2);
void FUN_00323bf0(int param_1,u32 *param_2);
u32 FUN_00323c20(u16 param_1,u16 param_2,u16 param_3,u32 param_4);
extern u32 FUN_00323c20_u32first(u32 param_1,u16 param_2,u16 param_3,u32 param_4);
int FUN_00323e10(u32 param_1,u32 param_2,u32 param_3,u32 param_4,int param_5,

                 u32 param_6);
extern int FUN_00323e10_ptr(u32 param_1,u32 param_2,u32 param_3,u32 param_4,
                            u8 *param_5,u32 param_6);
int FUN_00323fb0(u32 param_1,u32 param_2,int param_3,u16 param_4,u32 param_5);
extern int FUN_00323fb0_ptr(u32 param_1,u32 param_2,u8 *param_3,u16 param_4,
                            u32 param_5);
u32 FUN_00324160(int param_1);
extern u32 FUN_00324160_u32(int param_1);
void FUN_00324310(int param_1);
 extern void FUN_00324310_i(int param_1);
void FUN_003243d0(void);
extern void FUN_003243d0_1arg(u32 param_1);
extern void FUN_003243f0_i(int param_1,int param_2);
extern void FUN_003243d0_2arg(u32 param_1,u16 param_2);
void FUN_003243f0(int param_1,u32 param_2);
extern void FUN_00324510_i(int param_1,int param_2);
void FUN_00324470(float param_1,int param_2,u32 *param_3,u32 *param_4);
void FUN_003244c0(int param_1);
extern void FUN_003244c0_4arg(u16 *mesh,u64 resource,int position,int scale);
void FUN_00324510(int param_1,u64 param_2);
int FUN_003245b0(int param_1);
 extern int FUN_003245b0_passthru(void);
extern u64 FUN_003245b0_wide(void);
int FUN_003245f0(int param_1);
u32 FUN_00324680(u32 param_1);
void FUN_00324740(int param_1);
void FUN_003247d0(int param_1);
void FUN_00324820(int param_1);
u32 FUN_00324870(u32 param_1);
void FUN_00324930(int param_1);
void FUN_00324990(int param_1);
void FUN_003249e0(int param_1);
void FUN_00324a30(int param_1, u32 param_2);
void FUN_00324a90(int param_1);
extern void FUN_00324a90_f32(float param_1,u32 param_2);
void FUN_00324af0(int param_1, u32 param_2);
u32 FUN_00324b50(u32 param_1);
extern u64 FUN_00324bd0_passthru(void);
u32 FUN_00324bd0(u32 param_1);
extern u32 FUN_00324bd0_u32(u64 param_1);
extern u64 FUN_00324bd0_u64(u64 param_1);
void FUN_003252a0(u64 param_1);
void FUN_00325500(u64 param_1);
void FUN_003257a0(u64 param_1);
void FUN_003257e0(u32 param_1);
extern void FUN_003257e0_passthru(void);
u32 FUN_00325920(u64 *param_1);
extern u32 FUN_00325920_u32(u64 *param_1);
void FUN_00325b80(int param_1);
extern void FUN_00325b80_passthru(void);
extern void FUN_003252a0_passthru(void);
extern u32 FUN_00325920_passthru(void);
extern void FUN_00325e40_passthru(void);
extern void FUN_003505d0_passthru(void);
void FUN_00325c10(u8 (*param_1) [16],u8 (*param_2) [16]);
extern void FUN_00325c10_onearg(u32 resource);
void FUN_00325d60(u64 param_1,u8 (*param_2) [16]);
extern void FUN_00325d60_ptr(u8 (*param_1) [16],u8 (*param_2) [16]);
void FUN_00325e40(float param_1,u8 (*param_2) [16]);
extern void FUN_00325e40_reordered(u8 (*param_1) [16],float param_2);
void FUN_00326030(int param_1,int param_2);
u_long128 FUN_00326160(int param_1,u32 *param_2);
u_long128 FUN_00326170(int param_1,u32 *param_2);
u32 FUN_00326180(int param_1);
void FUN_00326190(u64 param_1,u64 param_2);
int FUN_003261c0(int param_1,int param_2);
int FUN_00326200(int param_1,int param_2);
int FUN_00326240(int param_1,int param_2);
void FUN_00326280(int param_1,u32 param_2,u8 (*param_3) [16]);
void FUN_003263b0(int param_1,u32 param_2,u8 (*param_3) [16]);
u32 FUN_00326490(u32 param_1);
u32 FUN_00326510(u32 param_1);
void FUN_00326740(int param_1);
u32 FUN_003268c0(u32 param_1);
void FUN_003269e0(int param_1,int param_2);
void FUN_00326c70(u32 *param_1,u16 param_2,u32 param_3);
void FUN_00326cf0(int param_1,u16 param_2,u32 param_3);
extern void FUN_00326cf0_2(int param_1,u32 param_2);
extern void FUN_00326e50_u32(int param_1,u32 param_2);
extern void FUN_00326f60_u32(u32 *param_1,u32 param_2);
extern void FUN_00327090_u32(u32 *param_1,u32 param_2);
void FUN_00326db0(int param_1,u16 param_2);
extern void FUN_00326db0_u32(int param_1,u32 param_2);
void FUN_00326e50(int param_1,u64 param_2);
void FUN_00326f00(int param_1,u32 param_2);
void FUN_00326f60(u32 *param_1,int param_2);
void FUN_00327090(u32 *param_1,u64 param_2);
void FUN_003271c0(int param_1,u32 param_2);
void FUN_00327220(int param_1);
void FUN_00327250(float param_1,int param_2);
void FUN_003275d0(float param_1,int param_2);
extern void FUN_003275d0_evt(float param_1);
extern void FUN_003275d0_evt2(float param_1,int param_2);
void FUN_003282e0(int param_1);
void FUN_00329350(int param_1);
void FUN_003293a0(void);
void FUN_003293d0(int param_1);
void FUN_00329430(int param_1);
void FUN_00329460(int param_1);
void FUN_00329490(int param_1,u32 param_2);
void FUN_003294a0(f32 param_1, int param_2);
void FUN_003294d0(void);
void FUN_00329550(void);
void FUN_003295c0(u64 param_1);
void FUN_00329630(void);
void FUN_003296a0(u32 *param_1,u8 (*param_2) [16]);
 extern void FUN_003296a0_typed(RwMatrix *param_1,s32 param_2);
void FUN_00329740(u32 *param_1);
void FUN_003297a0(u32 *param_1);
void FUN_00329800(u8 (*param_1) [16],u8 (*param_2) [16]);
void FUN_00329890(u32 param_1);
f32 *FUN_003299b0(void);
u32 FUN_00329a60(void);
float FUN_00329ba0(float param_1);
void FUN_00329d60(float param_1,u8 (*param_2) [16]);
void FUN_00329ed0(float *param_1);
u32 FUN_0032a120(char *param_1,u32 *param_2,int param_3,int param_4);
extern u32 FUN_0032a120_2arg(char *param_1, u32 *param_2);
float FUN_0032a540(char *param_1,int param_2,int param_3);
void FUN_0032a770(u8 (*param_1) [16],int param_2,int param_3,

                 u8 (*param_4) [16]);
extern void FUN_0032a770_u32(u8 (*param_1) [16], int param_2, u32 param_3,
                             u8 (*param_4) [16]);
extern void FUN_0032a890_u32(int param_1, u32 param_2);
void FUN_0032af30(int param_1);
void FUN_0032ba30(int param_1);
void FUN_0032c340(int param_1);
void FUN_0032ce10(int param_1);
void FUN_0032d840(int param_1);
void FUN_0032e1a0(int param_1);
void FUN_0032eb40(int param_1);
void FUN_0032f910(int param_1);
void FUN_00330190(u64 param_1);
void FUN_00330c40(int param_1);
void FUN_00331650(int param_1);
u32 FUN_00332070(u16 param_1,int param_2,int param_3);
extern u32 FUN_00332070_u32(u16 param_1,int param_2,int param_3);
extern u32 FUN_00332070_u32_ptr(u16 param_1,int param_2,int *param_3);
void FUN_003321d0(int param_1);
void FUN_00332200(int param_1);
void FUN_00332210(int param_1);
u_long128 FUN_003322b0(int param_1,u32 *param_2);
u_long128 FUN_003322d0(int param_1,u32 *param_2);
extern void FUN_003322d0_one(int param_1);
extern void FUN_00332310_one(int param_1);
u_long128 FUN_003322f0(int param_1,u32 *param_2);
u_long128 FUN_00332310(int param_1,u32 *param_2);
void FUN_00332330(u16 *param_1);
u32 FUN_00332370(int param_1);
void FUN_00332470(u32 *param_1,u16 param_2,int *param_3);
u32 *FUN_003325d0(int *param_1);
void FUN_00332700(int param_1);
u32 FUN_00332780(int param_1);
u32 *FUN_00332880(int *param_1);
void FUN_00332990(u32 *param_1,int param_2);
void FUN_00332a30(int *param_1,u16 param_2,int *param_3);
void FUN_00332ac0(u32 *param_1,u16 param_2,int *param_3);
void FUN_00332b30(int param_1);
void FUN_00332b60(int *param_1);
void FUN_00332e10(int *param_1);
void FUN_00332f10(int *param_1);
void FUN_00333020(int param_1);
void FUN_00333050(int param_1);
void FUN_00333080(int param_1,u32 param_2);
void FUN_003330b0(f32 param_1, int param_2);
u32 FUN_003330e0(u32 param_1,u32 param_2);
extern u32 FUN_003330e0_u32(u32 param_1,u16 param_2);
void FUN_00333300(int param_1,u32 param_2,u8 *param_3);
void FUN_00333420(int param_1,int *param_2);
void FUN_003338b0(u32 param_1);
void FUN_00333900(int param_1,u32 param_2);
void FUN_00333920(int param_1,u32 param_2);
bool FUN_00333940(int param_1,u32 param_2);
void FUN_00333970(float param_1,u8 (*param_2) [16],u32 param_3,u32 *param_4);
void FUN_003341c0(int param_1);
void FUN_00334220(int param_1);
void FUN_003342c0(int param_1,u16 param_2);
void FUN_00334310(int param_1);
u32 FUN_00334390(int param_1);
void FUN_00334820(int param_1);
void FUN_003348b0(int param_1);
void FUN_00335180(int param_1);
void FUN_003353f0(int param_1);
u32 FUN_00335540(int param_1);
void FUN_003359e0(int param_1);
void FUN_00335a70(int param_1);
void FUN_00336630(int param_1);
void FUN_003368a0(int param_1);
u64 FUN_00336920(int param_1);
void FUN_00336df0(int param_1);
void FUN_00336e80(int param_1);
void FUN_003377f0(u32 param_1);
u32 FUN_00337a60(u32 param_1,u32 param_2);
void FUN_00337b70(int param_1);
void FUN_00337bb0(u32 param_1);
void FUN_00337c10(int param_1);
void FUN_00337c40(int param_1);
void FUN_00337c90(int param_1);
void FUN_00337cf0(int param_1);
void FUN_00337d40(int param_1);
u_long128 FUN_00337dd0(Vec128 *dst,const Vec128 *src);
u32 FUN_00337e90(u32 *param_1);
void FUN_00337f80(int param_1);
void FUN_00337fd0(int param_1);
void FUN_00338360(int param_1);
void FUN_00338530(int param_1);
float * FUN_003385d0(u32 param_1);
void FUN_00338770(int param_1);
void FUN_003387c0(int param_1);
void FUN_00338ac0(u32 param_1);
u32 FUN_00338d60(u32 *param_1);
void FUN_00338e50(int param_1);
void FUN_00338ea0(int param_1);
void FUN_00339200(int param_1);
u32 FUN_003393d0(u32 param_1,u32 param_2);
extern u32 FUN_003393d0_u32(u32 param_1,u32 param_2);
void FUN_003394f0(int param_1);
void FUN_00339530(u32 param_1);
void FUN_003395a0(int param_1);
void FUN_003395d0(int param_1);
void FUN_00339620(int param_1);
void FUN_00339680(int param_1);
void FUN_003396d0(int param_1);
u_long128 FUN_00339760(Vec128 *dst,const Vec128 *src);
void FUN_003397d0(int param_1);
u32 FUN_003398c0(int param_1);
void FUN_00339950(int param_1);
void FUN_003399a0(int param_1);
void FUN_0033a220(int param_1);
void FUN_0033a3e0(int param_1);
u32 FUN_0033a4d0(int param_1);
void FUN_0033a560(int param_1);
void FUN_0033a5b0(int param_1);
void FUN_0033af10(int param_1);
void FUN_0033b0d0(int param_1);
u32 FUN_0033b1c0(int param_1);
void FUN_0033b250(int param_1);
void FUN_0033b2a0(int param_1);
void FUN_0033bbe0(int param_1);
void FUN_0033bda0(int param_1);
void FUN_0033be90(int param_1,int param_2);
u32 FUN_0033bfa0(u32 *param_1,int param_2);
u32 FUN_0033c0a0(int param_1);
void FUN_0033c150(int param_1);
void FUN_0033c1a0(int param_1);
void FUN_0033c960(int param_1);
void FUN_0033cb20(int param_1);
void FUN_0033cc10(int param_1,int param_2);
u32 FUN_0033cd20(int param_1,int param_2);
u32 FUN_0033ce10(int param_1);
void FUN_0033ceb0(int param_1);
void FUN_0033cf00(int param_1);
void FUN_0033d6d0(int param_1);
void FUN_0033d890(int param_1);
void FUN_0033d980(int param_1,int param_2);
u32 FUN_0033da90(int param_1,int param_2);
u32 FUN_0033db80(int param_1);
void FUN_0033dc20(int param_1);
void FUN_0033dc70(int param_1);
void FUN_0033e540(int param_1);
void FUN_0033e700(int param_1);
u32 FUN_0033e7f0(int param_1);
void FUN_0033e890(int param_1);
void FUN_0033e8e0(int param_1);
void FUN_0033f2e0(int param_1);
void FUN_0033f4a0(int param_1);
void FUN_0033f590(int param_1,int param_2);
u32 FUN_0033f6a0(int param_1,int param_2);
u32 FUN_0033f780(int param_1);
void FUN_0033f810(int param_1);
void FUN_0033f860(int param_1);
void FUN_00340100(int param_1);
void FUN_003402c0(int param_1);
void FUN_003403b0(int param_1,int param_2);
u32 FUN_00340600(int param_1,int param_2);
u32 FUN_003406f0(int param_1);
void FUN_00340790(int param_1);
void FUN_003407e0(int param_1);
void FUN_00341ba0(int param_1);
u32 FUN_00341f10(u32 param_1,u32 param_2);
u32 FUN_00341fd0(u32 param_1);
void FUN_003420c0(u32 param_1);
u32 FUN_00342130(int param_1);
void FUN_00342280(int param_1);
void FUN_003422d0(int param_1);
void FUN_00342330(int param_1);
void FUN_00342380(int param_1);
u_long128 FUN_00342410(Vec128 *dst,const Vec128 *src);
void FUN_00342550(int param_1,int param_2);
u32 FUN_00342890(u32 *param_1,int param_2);
u32 FUN_00342990(int param_1);
void FUN_00342a40(int param_1);
void FUN_00342a90(int param_1);
void FUN_00343410(int param_1);
void FUN_00343860(int param_1,int param_2);
u32 FUN_00343b60(u32 *param_1,int param_2);
u32 FUN_00343c60(int param_1);
void FUN_00343d10(int param_1);
void FUN_00343d60(int param_1);
void FUN_00344720(int param_1);
void FUN_00344b70(int param_1,int param_2);
u32 FUN_00344eb0(u32 *param_1,int param_2);
u32 FUN_00344fc0(int param_1);
void FUN_00345080(int param_1);
void FUN_003450d0(int param_1);
void FUN_00345970(int param_1);
u32 FUN_00345cf0(u32 param_1,u64 param_2);
extern u32 FUN_00345cf0_u32(u32 param_1,u32 param_2);
void FUN_00345ea0(u32 param_1);
u32 FUN_00345f00(int param_1);
void FUN_00345fa0(int param_1);
void FUN_00345ff0(int param_1);
void FUN_00346050(int param_1);
void FUN_003460a0(int param_1);
u_long128 FUN_00346130(Vec128 *dst,const Vec128 *src);
u32 FUN_003461a0(u32 param_1);
void FUN_00346350(int param_1);
u32 FUN_003463c0(int param_1);
extern u32 FUN_00347170_ptr(int param_1);
void FUN_00346460(int param_1,int param_2);
void FUN_00346500(int param_1);
void FUN_00346510(int param_1);
void FUN_00346530(int param_1);
extern void FUN_00346530_alt(int param_1);
void FUN_00347100(int param_1);
u32 FUN_00347170(u64 param_1);
void FUN_003472d0(void);
void FUN_00347300(int param_1);
void FUN_00347350(u32 param_1);
void FUN_003473b0(u8 (*param_1) [16]);
void FUN_00347cb0(int param_1);
void FUN_00347d00(void);
void FUN_00347d60(void);
void FUN_00347f80(void);
u32 FUN_00347fc0(void);
void FUN_00348030(u64 param_1);
u32 FUN_00348090(int param_1);
void FUN_003482b0(MdlAnimationCursor *param_1);
void FUN_00348300(MdlAnimationCursor *param_1);
u32 FUN_00348340(u8 *param_1,float *param_2);
void FUN_00348760(u8 *param_1,float *param_2);
void FUN_00348950(u8 *param_1,float *param_2);
void FUN_00348bd0(u8 *param_1,float *param_2);
void FUN_00348da0(int param_1,u32 *param_2);
void FUN_00348f30(int param_1,float *param_2);
void FUN_00349090(int *param_1,float *param_2);
extern void FUN_00349090_ptr(int *param_1,int *param_2);
void FUN_00349260(int param_1,float *param_2);
void FUN_00349450(int *param_1,float *param_2);
extern void FUN_00349450_ptr(int *param_1,int *param_2);
void FUN_00349620(int *param_1,float *param_2);
void FUN_00349870(int param_1);
void FUN_00349a30(int param_1);
void FUN_00349af0(u8 (*param_1) [16]);
void FUN_00349d30(int param_1);
u32 FUN_00349ed0(int param_1);
void FUN_00349fa0(void);
void FUN_00349fd0(u8 (*param_1) [16]);
void FUN_0034a1d0(int param_1);
void FUN_0034a280(int param_1);
void FUN_0034a340(void);
void FUN_0034a370(u8 (*param_1) [16]);
void FUN_0034a590(int param_1);
void FUN_0034a650(int param_1);
void FUN_0034a800(int param_1);
u32 FUN_0034a8c0(int param_1);
void FUN_0034a990(void);
void FUN_0034a9c0(u8 (*param_1) [16]);
void FUN_0034abc0(int param_1);
void FUN_0034ac70(int param_1);
void FUN_0034ada0(int param_1);
void FUN_0034ae30(u8 (*param_1) [16]);
void FUN_0034b010(int param_1);
u32 FUN_0034b1a0(u32 param_1);
void FUN_0034b320(int param_1);
u32 FUN_0034b3a0(int param_1);
void FUN_0034b520(int param_1);
void FUN_0034b580(int param_1);
void FUN_0034b5c0(int param_1);
void FUN_0034b600(int param_1);
u32 FUN_0034b6b0(u32 param_1);
void FUN_0034b830(int param_1);
u32 FUN_0034b8b0(int param_1);
void FUN_0034ba30(int param_1);
void FUN_0034ba90(int param_1);
void FUN_0034bad0(int param_1);
void FUN_0034bb10(int param_1);
u_long128 FUN_0034bb90(u_long128 *dst, const u_long128 *src);
void FUN_0034bba0(u32 *param_1, u32 param_2);
void FUN_0034bbb0(u32 *param_1, float param_2);
u32 FUN_0034bbc0(int param_1,u32 param_2);
extern u32 FUN_0034bbc0_u16(int param_1,u16 param_2);
extern void RpSkyRenderStateSet_u32(int state,u32 value);
void FUN_0034bc80(u32 param_1);
u32 FUN_0034bcf0(u32 param_1);
void FUN_0034bd10(void);
void FUN_0034bd60(u32 param_1);
u32 FUN_0034bdf0(u32 param_1,u32 param_2);
void FUN_0034bef0();
u32 FUN_0034bf10(int param_1);
u32 FUN_0034bfc0(u32 param_1);
void FUN_0034c160(u32 param_1);
u32 FUN_0034c1b0(int param_1);
void FUN_0034c250(int param_1,int param_2);
void FUN_0034c320(int param_1);
void FUN_0034c390(float *param_1);
void FUN_0034c5a0(int param_1);
void FUN_0034c5d0(int param_1);
u_long128 FUN_0034c630(u_long128 *dst, const u_long128 *src);
u_long128 FUN_0034c640(u_long128 *dst, const u_long128 *src);
void FUN_0034c650(int param_1, int param_2);
void FUN_0034c660(int param_1, float param_2);
u32 FUN_0034c670(int param_1);
extern u32 FUN_0034c670_u32(int param_1);
void FUN_0034c890(int param_1);
u32 FUN_0034c940(int param_1);
void FUN_0034c9b0(int param_1,int param_2);
void FUN_0034cb60(int param_1);
void FUN_0034cc00(u32 *param_1);
void FUN_0034cf30(int param_1);
void FUN_0034d050(int param_1);
void FUN_0034d150(u32 param_1,f32 *param_2);
u64 FUN_0034d3a0(int param_1,int param_2,int param_3);
u32 FUN_0034d510(int param_1);
void FUN_0034d670(int param_1);
u32 FUN_0034d6f0(int param_1);
void FUN_0034d810(int param_1,int param_2);
void FUN_0034d8a0(int param_1,u16 param_2,int param_3);
void FUN_0034d990(int param_1,u32 param_2,u32 param_3);
void FUN_0034db00(int param_1);
void FUN_0034db30(int param_1);
extern void FUN_0034db30_i(int param_1);
void FUN_0034dc00(u64 param_1);
void FUN_0034e390(int param_1);
void FUN_0034e3d0(int param_1);
void FUN_0034e420(int param_1);
void FUN_0034e450(int param_1);
void FUN_0034e490(f32 param_1, int param_2);
u32 FUN_0034e4c0(int param_1);
void FUN_0034e610(int param_1);
u32 FUN_0034e690(int param_1);
void FUN_0034e7c0(int param_1,u64 param_2);
extern void FUN_0034e7c0_u32(int param_1,u32 param_2);
void FUN_0034e800(int param_1,int param_2);
void FUN_0034e820(int param_1,u16 param_2,int param_3);
void FUN_0034e910(int param_1);
void FUN_0034e940(int param_1,float *param_2);
void FUN_0034eae0(int param_1,float *param_2,int param_3,u32 *param_4,

                 u8 (*param_5) [16],float *param_6,char param_7);
void FUN_0034f6b0(int param_1);
void FUN_0034f910(u64 param_1,u32 param_2);
void FUN_0034fb40(u64 param_1);
void FUN_0034fb70(u64 param_1);
void FUN_0034fba0(int param_1);
void FUN_0034fbe0(u32 param_1);
void FUN_0034fc30(int param_1);
void FUN_0034fc60(int param_1);
void FUN_0034fca0(f32 param_1, int param_2);
void FUN_0034fcd0(void);
void FUN_0034fcf0(void);
void FUN_0034fd10();
void FUN_0034fd30();
u32 FUN_0034fd50();
void FUN_0034fd70(u64 param_1,u16 param_2);
void FUN_0034fe30(u64 param_1,float param_2,float param_3,float param_4);
void FUN_0034fdf0(u8 (*param_1) [16],u32 *param_2);
void FUN_0034fe80(u8 (*param_1) [16],u32 *param_2);
void FUN_0034ff70(float param_1,u8 (*param_2) [16]);
void FUN_0034ff90(int param_1,u32 *param_2);
void FUN_0034ffc0(int param_1,int param_2);
void FUN_00350040(int param_1,u32 *param_2);
u32 FUN_00350070(int param_1);
void FUN_00350080(void);
void FUN_003500a0(u32 param_1,u16 param_2);
void FUN_003500e0(void);
void FUN_00350110(void);
u32 FUN_00350190(void);
u32 FUN_00350200(void);
u32 FUN_00350230(u32 param_1);
void FUN_003503e0(int param_1);
u32 FUN_00350450(u32 param_1);
void FUN_00350500(int param_1,int param_2);
void FUN_003505d0(int *param_1);
void FUN_00351250(int param_1);
bool FUN_00351290(int param_1);
void FUN_00351510(int param_1);
void FUN_00351940(int param_1);
u64 FUN_00351a10(int param_1);
u32 FUN_00351bb0(u16 param_1);
void FUN_00351c20(void);
u32 FUN_00351d20(u32 param_1);
void FUN_00351e20(int param_1);
void FUN_00351e70(int param_1);
void FUN_003520a0(u64 param_1);
u32 FUN_00352800(int param_1);
void FUN_00352910(u32 param_1);
u32 FUN_00352980(int param_1);
void FUN_00352a80(int param_1);
void FUN_00352ad0(int param_1);
void FUN_00352b30(int param_1);
void FUN_00352b80(int param_1);
u_long128 FUN_00352c10(u_long128 *dst, const u_long128 *src);
void FUN_00352c20(u32 *param_1, u32 param_2);
void FUN_00352c30(u32 param_1,u32 param_2);
void FUN_00352c50(u32 param_1,u32 param_2,u32 param_3);
s8 FUN_00352c70(int param_1,u8 *param_2);
extern u32 FUN_00352c70_u32(int param_1,u8 *param_2);
u32 FUN_00352e10(u32 param_1,u16 param_2,int param_3,int param_4);
u32 FUN_00352eb0(int param_1);
void FUN_00352f20(u32 param_1);
void FUN_00352f70(float *param_1);
void FUN_00353960(void);
void FUN_00353990(void);
void FUN_003539c0(int param_1);
void FUN_003542a0(int param_1);
void FUN_00354b20(void);
void FUN_00354b50(void);
void FUN_00354b80(int param_1);
void FUN_00355670(void);
void FUN_003556a0(void);
void FUN_003556d0(int param_1);
u32 FUN_00355dd0(u32 param_1,u16 param_2,u32 param_3,u32 param_4);
u32 FUN_00355e70(int param_1);
void FUN_00355ee0(u32 param_1);
void FUN_00355f30(int *param_1);
void FUN_003569e0(int param_1);
u32 FUN_00356b00(u32 param_1,u16 param_2,u32 param_3,u32 param_4);
u32 FUN_00356ba0(int param_1);
void FUN_00356c20(u32 param_1);
void FUN_00356c70(u8 *param_1);
u32 FUN_00356fd0(float ignored,u64 param_1,u16 param_2,u32 param_3,u32 param_4);
u32 FUN_003570b0(int param_1);
void FUN_00357170(u32 *param_1);
void FUN_003571c0(float *param_1);
void FUN_00357550(int param_1);
void FUN_00357710(void);
void FUN_00357730(int param_1);
u32 FUN_00357770(u32 param_1,u32 param_2);
u32 FUN_00357830(int param_1);
void FUN_00357930(u32 param_1);
u32 FUN_003579b0(u32 param_1);
void FUN_00357ba0(int param_1);
void FUN_00357c10(int param_1);
void FUN_00357c80(int param_1);
void FUN_00357ce0(int param_1);
extern u64 FUN_00100d80();
extern u64 FUN_00100ec0();
extern u64 FUN_001016b0();
extern u64 FUN_00102100();
extern u32 FUN_00102100_mdl(u32 param_1,u32 param_2,u32 *param_3);
extern u64 FUN_001023a0();
extern u64 FUN_00103c30();
extern u64 FUN_00103cb0();
extern u64 FUN_00104d10();
extern u64 FUN_00109ae0();
extern u64 FUN_00109df0();
extern u64 FUN_0010a0e0();
extern u64 FUN_0010a240();
extern u64 FUN_0010a4e0_model(s16 param_1,s16 param_2,s16 param_3,s16 param_4);
extern u64 FUN_0010a500();
extern u64 FUN_0010e880();
extern u64 FUN_0016cd60();
extern u64 FUN_0016f190();
extern u64 FUN_0017d800();
extern u64 FUN_00194b20();
extern u32 FUN_00195340();
extern u64 FUN_00195460();
extern u64 FUN_001956d0();
extern u64 FUN_00195710();
extern u64 FUN_00198560();
extern u64 FUN_00198580();
extern u32 FUN_00198580_u32(void);
extern u32 FUN_00198590(void);
extern u64 FUN_0019f8f0();
extern u64 FUN_0019fd40();
extern u64 FUN_0019fd70();
extern void func_001a13b0(void);
extern void FUN_001a14c0(u32 param_1);
extern u64 FUN_001a4b70();
extern u32 FUN_001a6400();
extern u32 FUN_001a6400_ptr(u32 param_1,u8 *param_2);
extern void FUN_001b5ae0(u32 value, const u8* rgba);
extern u64 FUN_001eda00();
extern u32 FUN_001eda00_u32(u64 param_1, u64 param_2);
extern u64 FUN_001eda90();
extern u64 FUN_001eded0();
extern u64 FUN_001ee1d0();
extern u64 FUN_001ee220();
extern u64 FUN_001ee230();
extern u64 FUN_0027f650();
extern u64 FUN_0027f680();
extern u64 FUN_0027f6d0();
extern u64 FUN_0027f7c0();
extern u64 FUN_0027ffb0();
extern u64 FUN_00282d40();
extern void FUN_00282d40_anim(u32 param_1,int param_2,u16 param_3,float param_4,u16 param_5);
extern u64 FUN_002831c0();
extern void FUN_00287b20(int param_1,u16 param_2);
extern void FUN_00287cf0(BtlUnit* unit, u16 mode);
extern u64 FUN_0029a1d0();
extern u32 FUN_0029a1d0_u32(u32 param_1);
extern u64 FUN_0029ea20();
extern u64 FUN_0029ea30();
extern u64 FUN_0029ea40();
extern float *FUN_0029ea50();
extern void FUN_002a2170(u16 *param_1,f32 *param_2);
extern u64 FUN_002a38f0();
extern u64 FUN_002a3a80();
extern void FUN_002a3e80(float param_1,u8* param_2,u8* param_3,u8* param_4,u32 param_5);
extern u64 FUN_002a3e80_typed(float,int,int,int,int);
extern void FUN_002a4690(void* out, const void* first, const void* second, const void* config);
extern u64 FUN_002f8810();
extern u64 FUN_002ffbc0();
extern u64 FUN_00308c60();
extern u32 FUN_0030b5a0();
extern u64 FUN_00316910();
extern u64 FUN_00316910_typed(u16 type,u16 id,u32 mode);
extern u32 FUN_00316910_u32_typed(u16 type,u16 id,u32 mode);
extern u64 FUN_00316bd0();
extern u32 FUN_00316bd0_u32();
extern u32 FUN_00316bd0_typed(u16 type,u16 id,u32 param_1,u32 param_2,u32 mode);
extern u64 FUN_00316e00();
extern u32 FUN_00316e00_u32(u16 type,u16 id,u32 readMode);
extern u64 FUN_003174e0();
extern u64 FUN_00317730();
extern void FUN_00317a20(Model* param_1);
extern u64 FUN_003182d0();
extern u64 FUN_003185b0();
extern void FUN_00318770(u32 param_1,u32 param_2,f32 param_3);
extern u64 FUN_003189f0();
extern u64 FUN_003189f0_f32(float param_1,u32 param_2,u32 param_3);
extern u64 FUN_003189f0_typed(void *param_1,u16 param_2,float param_3);
extern u64 FUN_003189f0_reordered(u32 param_1,u32 param_2,float param_3);
extern u64 FUN_00318ad0_u32(u32 param_1,u32 *param_2);
extern u64 FUN_00318a70_u32(u32 param_1,void *param_2,u32 param_3);
extern u64 FUN_00318a90_u32(u32 param_1,void *param_2,u32 param_3);
extern u64 FUN_00318a30_u32(u32 param_1,void *param_2,u32 param_3);
extern u64 FUN_00318a30();
extern u64 FUN_00318a90();
extern u64 FUN_00318ad0();
extern u64 FUN_00318b10();
extern u64 FUN_00318d10();
extern u64 FUN_00318ed0();
extern u32 FUN_00318fc0(u32 param_1);
extern u64 FUN_00357dd0();
extern u64 FUN_00357e00();
extern u64 FUN_00357e30();
extern void FUN_00357ea0(float angleX,float angleY,float angleZ);
extern void FUN_00357ea0_4arg(int param_1,float angleX,float angleY,float angleZ);
extern u32 FUN_00357fd0_u32(u32 seed);
extern f32 FUN_00358030();
extern void FUN_00358160_f32(f32 value);
extern void FUN_00358380_f32(f32 value);
extern void FUN_00358410_void(void);
extern void FUN_00358340_vec(f32 value, void *vector);
extern u64 FUN_003580f0();
extern u64 FUN_00358160();
extern u64 FUN_00358340();
extern u64 FUN_00358380();
extern u64 FUN_00358410();
extern u64 FUN_00358460();
extern void FUN_00358a30(float param_1,void *param_2,void *param_3,int param_4);
extern void FUN_00359380(float param_1,void *param_2,int param_3);
extern u64 FUN_0035ed20();
extern s32 FUN_0035ed20_i(s32 index);
extern void FUN_00474210(u64 param_1,u64 param_2,u64 param_3);
extern u32 FUN_00474210_u32();
extern u32 FUN_00474640(int param_1,int *param_2,u32 param_3,u32 param_4);
extern u32 FUN_004747f0(int *param_1);
extern u64 FUN_00474820(int param_1,long param_2,u32 param_3);
extern u8 FUN_00477050(int param_1);
extern int FUN_0048ef30(int param_1);
extern u32 FUN_0048ef80(int param_1,int param_2);
extern u64 FUN_00491630(u64 param_1);
extern u64 FUN_004916d0(u64 param_1,void *param_2,u64 param_3);
extern void FUN_004916d0_typed(u64 param_1,void *param_2,void *param_3);
extern void FUN_004916d0_u32(u32 param_1,void *param_2,void *param_3);
extern u64 FUN_00491880();
extern u32 FUN_00491880_u32(void);
extern u64 FUN_004919b0(u64 param_1,int param_2,u32 param_3);
extern u32 FUN_00491a80(u64 param_1);
extern int FUN_00491cc0(int param_1);
extern u32 FUN_00491cc0_u32(u32 param_1);
extern u32 FUN_00491ea0(u64 param_1);
extern void FUN_00491ea0_u32(u32 param_1);
extern long FUN_004920a0(u64 param_1);
extern u32 FUN_004920a0_u32(u32 param_1);
extern u64 FUN_00492d10(u64 param_1);
extern u64 FUN_00493210();
extern u64 FUN_00493230(u64 param_1,int param_2,long param_3);
extern u64 FUN_00493370(u64 param_1,u16 param_2);
extern u64 FUN_004933d0(u64 param_1);
extern u8 * FUN_00493710(int param_1,int param_2,u32 param_3);
extern u32 FUN_00493710_u32(u32 param_1,u32 param_2,u32 param_3);
extern u32 FUN_00493b60(u64 param_1);
extern u64 FUN_004944b0(u64 param_1,u32 *param_2);
extern u64 FUN_004944b0_typed(u64 param_1, u32 *param_2);
extern u64 FUN_00494be0();
extern u32 FUN_00494be0_u32(void);
extern u32 FUN_00494cc0(u64 param_1);
extern u64 FUN_00494d50(u32 param_1,u32 param_2);
extern u32 FUN_004c1970(u32 param_1,u32 *param_2);
extern u32 FUN_004c5250(u64 param_1,void *param_2,u32 param_3);
extern u64 FUN_004c5620(u64 param_1,u32 param_2);
extern bool FUN_004c5780(u64 param_1,long param_2);
extern u32 FUN_004c58a0(u32 param_1,u32 param_2,u32 *param_3);
extern u32 FUN_004c8680(u32 param_1);
extern u32 FUN_004ca030(u64 param_1);
extern u64 FUN_004ca090();
extern u32 FUN_004ca090_u32(void);
extern u64 FUN_004caf10();
extern u32 FUN_004caf10_u32(void);
extern u32 FUN_004caf80(u64 param_1);
extern int FUN_004cb2f0(int param_1);
extern u32 FUN_004cb2f0_u32();
extern u64 FUN_004cb420(u64 param_1,u64 param_2);
extern u64 FUN_004cb750(u32 param_1,void *param_2,u32 param_3);
extern u64 FUN_004cb7f0(u64 param_1);
extern u64 FUN_004cb7f0_typed(u32 param_1, void *param_2, u32 param_3);
extern u32 FUN_004cde90(u64 param_1);
extern long FUN_004ce0f0(u32 param_1,u32 param_2,u32 param_3,u64 param_4);
extern u32 FUN_004ce0f0_u32(u32 param_1,u32 param_2,u32 param_3,u32 param_4);
extern u32 FUN_004d0d10(int param_1);
extern void FUN_004d0dc0(u32 param_1,u8 *param_2,int *param_3);
extern long FUN_004d0e40(u32 param_1);
extern u32 FUN_004d0f00(u64 param_1);
extern long FUN_004d1260(u64 param_1,long param_2);
extern void FUN_004d1840(int param_1,long param_2);
extern u64 FUN_004d59d0(u32 param_1,int param_2);
extern u32 FUN_004d81b0(int param_1,u32 *param_2);
extern u64 FUN_004e3630();
extern int *FUN_004e3630_ptr(void);
extern u32 FUN_004f1780(int *param_1,long param_2);
extern u64 FUN_00521250();
extern void FUN_00521250_mdl(void *destination,const void *source,u32 size);
extern u64 FUN_00521408();
extern u64 FUN_005225a8();
extern u64 FUN_00523ac8();
extern int FUN_00524128();
extern u64 FUN_00524270();
extern u64 FUN_0052e118(u64 param_1);
extern f32 FUN_0052e408();
extern f32 FUN_0052e408_f32(f32 value);
extern f32 FUN_0052e6d8_f32(f32 value);
extern f32 FUN_0052e878_f32(f32 value);
extern f32 FUN_0052ea00_f32(f32 value);
extern f32 FUN_0052e6d8();
extern f32 FUN_0052e878();
extern f32 FUN_0052e9e8_f32(f32 value);
extern float FUN_0052ea00(float param_1);
extern float FUN_0052ea18(float param_1, float param_2);
extern f32 FUN_0052ea18_f32(f32 value);
extern f32 FUN_0052ea18_2f(f32 a,f32 b);
extern void FUN_00530da0(u32 param_1);
extern u32 FUN_00530da0_f32_u32(f32 value);
extern u32 FUN_0052e118_u32(u32 value);
extern u32 FUN_005311c8_u32(u64 lhs,u32 rhs);
extern u32 FUN_00531230_u32(u64 lhs,u32 rhs);
extern u64 FUN_005311c8(u64 param_1,u64 param_2);
extern u64 FUN_00531230(u64 param_1,u64 param_2);
extern void FUN_005318a0(u64 param_1);
extern f32 FUN_005318a0_f32(u32 value);
extern u32 DAT_0069ba18;
extern s32 DAT_0069ba18_abs[];
extern u32 DAT_0069bd60;
extern u8 DAT_0069bd60_abs[];
extern u8 DAT_0069bcd0[];
extern u8 DAT_0069bde0[];
extern u32 DAT_0069bd50;
extern u8 DAT_0069bd50_abs[];
extern u32 DAT_0069bd80;
extern u8 DAT_0069bd80_abs[];
extern u32 DAT_0069bdc8;
extern u8 DAT_0069bdc8_abs[];
extern u32 DAT_0069c730;
extern u8 DAT_0069c730_abs[];
extern u32 DAT_0069bb90;
extern u8 DAT_0069bb90_abs[];
extern u32 DAT_0069bb94;
extern u8 DAT_0069bb94_abs[];
extern u32 DAT_0069bbd0;
extern u8 DAT_0069bbd0_abs[];
extern u32 DAT_0069bbd4;
extern u8 DAT_0069bbd4_abs[];
extern u8 DAT_0069bcb0_abs[];
extern u8 DAT_0069bb50[];
extern u8 DAT_0069bb70[];
extern u8 DAT_0069bc18[];
extern u8 DAT_0069bc28[];
extern u8 DAT_0069bc38[];
extern u8 DAT_0069bc48[];
extern u8 DAT_0069bc58[];
extern u8 DAT_0069bc68[];
extern u8 DAT_0069bc78[];
extern u8 DAT_0069bc88[];
extern u8 DAT_0069bc98[];
extern u32 DAT_0069bcb0;
extern u32 DAT_0069bcb4;
extern u32 DAT_0069bcb8;
extern u32 DAT_0069bcbc;
extern u32 DAT_0069bcc0;
extern u32 DAT_0069bcc4;
extern u32 DAT_0069bcc8;
extern u32 DAT_0069bccc;
extern u32 DAT_0069c4a8;
extern u32 DAT_0069c4ac;
extern u32 DAT_0069c4d0;
extern f32 DAT_0069c4d0_f32;
extern f32 DAT_0069c4d4_f32;
extern f32 DAT_0069c4d8_f32;
extern u8 DAT_0069c4d0_abs[];
extern u32 DAT_0069c4d4;
extern u32 DAT_0069c4d8;
extern u32 DAT_0069c4e0;
extern u32 DAT_0069c4e4;
extern u32 DAT_0069c4e8;
extern MdlDispatchSlot DAT_0069c510[];
extern MdlDispatchSlot DAT_0069c514[];
extern u32 DAT_0069c518;
extern u32 DAT_0069c51c;
extern MdlTypeDispatch DAT_0069c5d0[];
extern u32 DAT_0069c5d4;
extern u32 DAT_0069c5d8;
extern MdlStridedCallback24 DAT_0069c5dc[];
extern MdlStridedCallback24 DAT_0069c5e0[];
extern u32 DAT_0069c5e4;
extern MdlTypeDispatch DAT_0069c650[];
extern u32 DAT_0069c654;
extern u32 DAT_0069c658;
extern MdlStridedCallback24 DAT_0069c65c[];
extern MdlStridedCallback24 DAT_0069c660[];
extern u32 DAT_0069c664;
extern u32 DAT_0069c6b0;
extern u32 DAT_0069c6f0;
extern MdlExtendedDispatch DAT_0069c850[];
extern MdlExtendedDispatch DAT_0069c850_abs[];
extern u32 DAT_0069c854;
extern code DAT_0069c854_abs[];
extern u32 DAT_0069c858;
extern u32 DAT_0069c85c;
extern MdlStridedCallback28 DAT_0069c860[];
extern MdlStridedCallback28 DAT_0069c864[];
extern u32 DAT_0069c868;
extern MdlExtendedDispatch DAT_0069c970[];
extern MdlExtendedDispatch DAT_0069c970_abs[];
extern u32 DAT_0069c974;
extern code DAT_0069c974_abs[];
extern u32 DAT_0069c978;
extern u32 DAT_0069c97c;
extern MdlStridedCallback28 DAT_0069c980[];
extern MdlStridedCallback28 DAT_0069c984[];
extern u32 DAT_0069c988;
extern u32 DAT_0069c9e0;
extern u8 DAT_0069cb80_abs[];
extern MdlTypeDispatch DAT_0069cb90[];
extern u32 DAT_0069cb94;
extern u32 DAT_0069cb98;
extern u32 DAT_0069cb9c;
extern u32 DAT_0069cba0;
extern s8 DAT_0069cba0_s8;
extern u8 DAT_0069cba0_abs[];
extern u32 DAT_0069cba4;
extern MdlTypeDispatch DAT_0069cc50[];
extern u32 DAT_0069cc54;
extern u32 DAT_0069cc58;
extern u32 DAT_0069cc5c;
extern u32 DAT_0069cc60;
extern s8 DAT_0069cc60_s8;
extern u8 DAT_0069cc60_abs[];
extern u32 DAT_0069cc64;
extern MdlTypeDispatch DAT_0069ccc0[];
extern MdlTypeDispatch DAT_0069ccc0_abs[];
extern u32 DAT_0069ccc4;
extern u32 DAT_0069ccc8;
extern u32 DAT_0069cccc;
extern MdlStridedCallback24 DAT_0069ccd0[];
extern MdlStridedCallback24 DAT_0069ccd0_abs[];
extern u32 DAT_0069ccd4;
extern MdlExtendedDispatch DAT_0069ccf0[];
extern MdlExtendedDispatch DAT_0069ccf0_abs[];
extern u32 DAT_0069ccf4;
extern u32 DAT_0069ccf8;
extern u32 DAT_0069ccfc;
extern u32 DAT_0069cd00;
extern u32 DAT_0069cd04;
extern MdlStridedValue DAT_0069cd08[];
extern u32 DAT_007cad6c;
extern f32 DAT_007cad7c;
extern f32 DAT_007cad7c_f32;
extern f32 DAT_007cada0;
extern f32 DAT_007cadb0;
extern f32 DAT_007cadb0_f32;
extern f32 DAT_007cadc0;
extern u32 DAT_007cadc4;
extern f32 DAT_007cadc4_f32;
extern f32 DAT_007cadd0;
extern f32 DAT_007cadd0_f32;
extern u32 DAT_007cade4;
extern f32 DAT_007cade4_f32;
extern f32 DAT_007cae00;
extern u32 DAT_007cae18;
extern f32 DAT_007cae18_f32;
extern f32 DAT_007cae4c;
extern f32 DAT_007cae58;
extern f32 DAT_007cae58_f32;
extern u32 DAT_007cae98;
extern f32 DAT_007cae98_f32;
extern f32 DAT_007cada0_f32;
extern f32 DAT_007caea4_f32;
extern f32 DAT_007cae50;
extern f32 DAT_007cae50_f32;
extern f32 DAT_007cae58;
extern u32 DAT_007cae5c;
extern u32 DAT_007cae60;
extern f32 DAT_007cae64;
extern f32 DAT_007cae68;
extern f32 DAT_007cae6c;
extern f32 DAT_007cae70;
extern f32 DAT_007cae74;
extern f32 DAT_007cae78;
extern f32 DAT_007cae7c;
extern f32 DAT_007cae80;
extern f32 DAT_007cae90;
extern u32 DAT_007cae94;
extern u32 DAT_007cae98;
extern u32 DAT_007cae9c;
extern u32 DAT_007caea0;
extern u32 DAT_007caea4;
extern u32 DAT_007caf08;
extern float DAT_007caf14;
extern u8 DAT_0069baf0[];
extern u8 DAT_0069baf0_abs[];
extern f32 DAT_007caf84;
extern u8 DAT_007cca38;
extern u8 DAT_007cca39;
extern u8 DAT_007cca3a;
extern u8 DAT_007cca3b;
extern u32 DAT_007cca3c;
extern f32 DAT_007cca48;
extern f32 DAT_007cca50;
extern f32 DAT_007cca54;
extern u32 DAT_007ce3ec;
extern u32 DAT_007ce528;
extern u32 DAT_007ce530;
extern u32 DAT_007ce534;
extern u32 DAT_007ce538;
extern u32 DAT_007ce53c;
extern u8 DAT_007ce544;
extern u8 DAT_007ce545;
extern u8 DAT_007ce546;
extern u8 DAT_007ce547;
extern u32 DAT_007ce548;
extern u8 DAT_007ce54c;
extern u16 DAT_007ce550;
extern f32 DAT_007ce554;
extern f32 DAT_007ce558;
extern u32 DAT_007ce560;
extern f32 DAT_007ce568;
extern f32 DAT_007ce56c;
extern u32 DAT_007ce574;
extern u32 DAT_007ce578;
extern u32 DAT_007ce770;
extern u32 DAT_007e0982;
extern u32 DAT_00957220;
extern u8 DAT_00957220_abs[];
extern u32 DAT_00957224;
extern u8 DAT_00957224_abs[];
extern u32 DAT_00957226;
extern u8 DAT_00957226_abs[];
extern u32 DAT_00957240;
extern u8 DAT_00957240_abs[];
extern f32 DAT_00957240_f32;
extern f32 DAT_00957244_f32;
extern f32 DAT_00957248_f32;
extern f32 DAT_0095724c_f32;
extern f32 DAT_00957250_f32;
extern f32 DAT_00957254_f32;
extern f32 DAT_00957258_f32;
extern f32 DAT_0095725c_f32;
extern u8 DAT_00957250_abs[];
extern u8 DAT_00957254_abs[];
extern u8 DAT_00957258_abs[];
extern u8 DAT_0095725c_abs[];
extern u32 DAT_00957244;
extern u32 DAT_00957248;
extern u32 DAT_0095724c;
extern u32 DAT_00957250;
extern u32 DAT_00957254;
extern u32 DAT_00957258;
extern u32 DAT_0095725c;
extern u32 DAT_00957260;
extern u8 DAT_00957260_abs[];
extern u32 DAT_00957270;
extern u8 DAT_00957270_abs[];
extern u32 DAT_009572b0;
extern u8 DAT_009572b0_abs[];
extern u32 DAT_009572c0;
extern u8 DAT_009572c0_abs[];
extern u32 DAT_009572b4;
extern u32 DAT_009572b8;
extern u32 DAT_009572bc;
extern u32 DAT_009572c4;
extern u32 DAT_009572c8;
extern u32 DAT_009572cc;
extern u32 DAT_009572d0;
extern u8 DAT_009572d0_abs[];
extern f32 DAT_009572b0_f32;
extern f32 DAT_009572b4_f32;
extern f32 DAT_009572b8_f32;
extern f32 DAT_009572bc_f32;
extern f32 DAT_009572c0_f32;
extern f32 DAT_009572c4_f32;
extern f32 DAT_009572c8_f32;
extern f32 DAT_009572cc_f32;
extern u32 DAT_009572e0;
extern u32 DAT_009572e4;
extern u32 DAT_009572e8;
extern u32 DAT_009572ec;
extern u32 DAT_009572f0;
extern u32 DAT_009572f4;
extern u32 DAT_009572f8;
extern u32 DAT_00957300;
extern u32 DAT_00957304;
extern u32 DAT_00957308;
extern u32 DAT_00957310;
extern u32 DAT_00957314;
extern u32 DAT_00957318;
extern u32 DAT_00957320;
extern u32 DAT_00957420;
extern u32 DAT_00957520;
extern u32 DAT_00957620;
extern u32 DAT_00957720;
extern u32 DAT_00957820;
extern u32 DAT_00957920;
extern u8 DAT_00957920_abs[];
extern u8 DAT_00957820_abs[];
extern u8 DAT_00957620_abs[];
extern u8 DAT_00957520_abs[];
extern u8 DAT_00957720_abs[];
extern u8 DAT_00957420_abs[];
extern u8 DAT_00957320_abs[];
extern u8 DAT_009572e0_abs[];
extern u32 DAT_00957a20;
extern u32 DAT_00957a80;
extern u8 DAT_00957a90_abs[];
extern u32 DAT_00957a84;
extern u32 DAT_00957a88;
extern u32 DAT_00957a8c;
extern f32 DAT_00957a90;
extern f32 DAT_00957a94;
extern f32 DAT_00957a98;
extern u32 DAT_00957b44;
extern f32 DAT_00957b44_f32;
extern f32 DAT_00957b48_f32;
extern u32 DAT_00957b48;
extern u8 DAT_00957b4c;
extern u8 DAT_00957b4d;
extern u8 DAT_00957b4e;
extern u8 DAT_00957b4f;
extern u32 DAT_00957b64;
extern u32 DAT_00957ba8;
extern u8 DAT_00957ba8_abs[];
extern u8 DAT_00957bac_abs[];
extern u8 DAT_00957bb0_abs[];
extern u32 DAT_00957bac;
extern u32 DAT_00957bb0;
extern u32 DAT_00957bc0;
extern u8 DAT_00957bc0_abs[];
extern u8 DAT_00957bc4_abs[];
extern u8 DAT_00957bc8_abs[];
extern u8 DAT_00957bcc_abs[];
extern u16 DAT_00957bc4;
extern u32 DAT_00957bc8;
extern u32 DAT_00957bcc;
extern s32 *PTR_DAT_007cd540;
extern u32 DAT_00957bd0;
extern u32 DAT_00957bd4;
extern u32 DAT_00957bd8;
extern u32 DAT_00957bdc;
extern u32 DAT_00957be0;
extern u32 DAT_00960088;
extern u8 DAT_00960088_abs[];
extern u32 DAT_0096008c;
extern u8 DAT_0096008c_abs[];
extern MdlVoidFn DAT_00960090;
extern code DAT_00960090_abs[];
extern MdlVoidFn DAT_00960094;
extern MdlVoidFn DAT_009600a0;
extern code DAT_009600a0_abs[];
extern MdlVoidFn DAT_009600a4;
extern code DAT_009600a4_abs[];
extern u64 (*DAT_00960178)();
extern u32 (*DAT_00960178_u32)();
extern code DAT_00960178_abs[];
extern MdlVoidFn DAT_0096017c;
extern code DAT_0096017c_abs[];
extern void FUN_004c6be0(float *out,float *in,int matrix);
extern void FUN_004c2f30(void *out,void *left,void *right);
extern float fGpffff80a4;
extern float fGpffff80b0;
extern float fGpffff80c0;
extern float fGpffff8110;
extern float fGpffff815c;
extern float fGpffff8160;
extern float fGpffff8168;
extern float fGpffff8174;
extern float fGpffff8194;
extern float fGpffff819c;
extern float fGpffff81a0;
extern u8 gp0xffff9d30;
extern u8 gp0xffff9d40;
extern u8 gp0xffffb854;
extern u32 gp0xffffb884;
extern u32 gp0xffffb888;
extern f32 iGpffff81bc;
extern u8* iGpffff9d4c;
extern u8* iGpffffb6fc;
extern u8* iGpffffb850;
extern u8* iGpffffba80;
extern u8 LAB_0031e410;
extern u8 LAB_00320524;
extern u8 LAB_003209a8;
extern u8 LAB_003350f0;
extern u8 LAB_003365a0;
extern u8 LAB_00337768;
extern u8 LAB_0034334c;
extern u8 LAB_00344650;
extern u8 LAB_003458ac;
extern void* PTR_FUN_0069bb14;
extern void* PTR_FUN_0069bb18;
extern void* PTR_FUN_0069bb1c;
extern u8 PTR_FUN_0069bb14_abs[];
extern u8 PTR_FUN_0069bb18_abs[];
extern u8 PTR_FUN_0069bb1c_abs[];
extern void* PTR_LAB_0069bb10;
extern u8 PTR_LAB_0069bb10_abs[];
extern void* PTR_LAB_0069be20;
extern u8 PTR_LAB_0069be20_abs[];
extern MdlDispatch13 PTR_LAB_0069be20_table[];
extern code PTR_LAB_0069be28[];
extern code PTR_LAB_0069be2c[];
extern void* PTR_LAB_0069be30;
extern u8 PTR_LAB_0069be30_abs[];
extern MdlVoidFnU32 PTR_LAB_0069be30_cb[];
extern void* PTR_LAB_0069be34;
extern code PTR_LAB_0069be34_abs[];
extern code PTR_LAB_0069be3c[];
extern code PTR_LAB_0069be40[];
extern void* PTR_LAB_0069be44;
extern void* PTR_LAB_0069be48;
extern code PTR_LAB_0069be48_abs[];
extern void* PTR_LAB_0069be4c;
extern code PTR_LAB_0069be50[];
extern u64 uGpffff8010;
extern u64 uGpffff8018;
extern u64 uGpffff8020;
extern u32 uGpffff805c;
extern u32 uGpffff8094;
extern u32 uGpffff80a4;
extern u32 uGpffff815c;
extern u32 uGpffff8160;
extern u32 uGpffff8164;
extern u32 uGpffff8198;
extern u32 uGpffff81c0;
extern f32 fGpffff81c0;
extern u16 uGpffff9d38;
extern u16 gp0xffff9d38;
extern u32 uGpffff9d50;
extern u32 uGpffffb850;
extern u32 uGpffffb854;
extern u32 uGpffffb855;
extern u32 uGpffffb856;
extern u64 uGpffffbd48;
extern u64 uGpffffbd68;
extern u32 DAT_00957a20_abs[];
extern u32 DAT_00957bd0_abs[];
extern u32 DAT_00957bd4_abs[];
extern u32 DAT_00957bd8_abs[];
extern u32 DAT_00957bdc_abs[];
extern u32 DAT_00957be0_abs[];
typedef void (*MdlVoidFn)();
#include "rw/rpworld.h"
#include "rw/rphanim.h"
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
extern RtAnimAnimation DAT_009571d0;
extern u8 DAT_009571d0_abs[];
extern u8 DAT_0069abb8[];
extern void* jtbl_00960178[];
extern RwMatrix* FUN_004c2f30_y2(RwMatrix* dst, const RwMatrix* left, const RwMatrix* right);
extern RwV3d* FUN_004c6be0_y2(RwV3d* dst, const RwV3d* src, const RwMatrix* matrix);
extern s32 func_001a6c00(void* object, const char* name);
extern char DAT_007cca08[1];
extern char DAT_007cca08_abs[];
extern const char DAT_0069b210[];
extern char DAT_007cca18[1];
extern char DAT_007cca10[1];
void* FUN_00491cc0_y2(RpClump* clump);
void FUN_00491ea0_y2(RpClump* clump);
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
void FUN_004cb7f0_y2(RwFrame* frame, const RwMatrix* matrix, u32 flags);
void FUN_004b74c0(f32 frame, RtAnimInterpolator* interpolator);
extern void func_004b74c0_typed(f32 frame, void* interpolator);
extern void func_004b74c0_frame(f32 frame, u32 interpolator);
extern void func_004b74c0_ptrfirst(u32 interpolator, f32 frame);
extern u32 func_004b7240_frame(f32 frame, u32 interpolator);
extern void func_00320640_frame(f32 arg0, f32 frame, u32 interpolator);
extern f32 func_00320810(void* animation);
void func_00316970(Model* mdl);
u32 func_003115a0(void* param_1, u32* param_2);
u32 func_00318d10(u8* mdl, u32 slot, u32* matrix);
void func_00311480(MdlAnimResourceSet* resources, Model* mdl);
extern void func_004932c0(u32 object, u32 arg1, u32 arg2);
extern void func_004916d0_typed(u64 object, void* callback, void* data);
extern void func_004916d0_callback(RpClump* object, void (*callback)(void), void* data);
void func_0031f5c0(void* data);
void FUN_0048a2a0(void);
void FUN_004916d0_y2();
u64 FUN_00316410(u64 param_1);
extern u32 datGetUnit_y2(u32);
extern u32 datCalcGetHeldWeaponType_y2(u32);
void FUN_004c3760(void);
typedef struct MdlAnimResourceEntry
{
    void* resource;
    u8 flags;
    u8 unk_05[3];
} MdlAnimResourceEntry;
typedef int (*code)(); /* PC: unnamed varargs */
typedef u8 bool;
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
extern MdlVoidFn DAT_0096017c_y2[];
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
extern u32 DAT_007cada0_y2;
extern MdlVoidFn DAT_00960090_y2[];
 extern u8 DAT_00960090_abs_y2[];
extern MdlVoidFn DAT_00960094_y2[];
extern u32 DAT_00960070;
extern f32 DAT_007caf08_y2;
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
extern void* RpMaterialGetUserDataArray_y2(void* material,int data);
extern char* RpUserDataArrayGetName_y2(void* userData);
extern int RpUserDataArrayGetFormat_y2(void* userData);
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
void FUN_0031e4d0_y2(int *param_1,u16 param_2,u16 param_3);

static inline Vec128 mdlVecZero(void) { Vec128 v; v._0_8_ = 0; v._8_8_ = 0; return v; }
static inline Vec128 mdlVecKeep(Vec128 v) { return v; }
static Vec128 mdlVecLoadN(const void *p, u32 n) {
    Vec128 v; v._0_8_ = 0; v._8_8_ = 0; memcpy(&v, p, n); return v;
}
static Vec128 mdlVecFromWord(u32 w) { Vec128 v = mdlVecZero(); v._0_4_ = w; return v; }
static __inline u32 mdlVuModulate(const u32 *pc1, const u32 *pc2, f32 inv255)
{
    u32 tmp;
    u32 c1 = *pc1;
    u32 c2 = *pc2;
    __asm__ volatile (
        ".set noreorder                  \n"
        "pextlb      %0, $zero, %1       \n"
        "pextlh      %0, $zero, %0       \n"
        "qmtc2       %0, $vf10           \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        %0, %3              \n"
        "qmtc2       %0, $vf2            \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmove.xyzw  $vf11, $vf10        \n"
        "pextlb      %0, $zero, %2       \n"
        "pextlh      %0, $zero, %0       \n"
        "qmtc2       %0, $vf10           \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        %0, %3              \n"
        "qmtc2       %0, $vf2            \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmul.xyzw   $vf10, $vf10, $vf11 \n"
        "lui         %0, 0x437F          \n"
        "qmtc2       %0, $vf2            \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vftoi0.xyzw $vf10, $vf10        \n"
        "qmfc2       %0, $vf10           \n"
        "ppach       %0, $zero, %0       \n"
        "ppacb       %0, $zero, %0       \n"
        ".set reorder"
        : "=&r"(tmp)
        : "r"(c1), "r"(c2), "f"(inv255)
        : "memory");
    return tmp;
}
static __inline u32 mdlVuModulateStacked(const u32 *pc1, const u32 *pc2, f32 inv255)
{
    u32 tmp;
    __asm__ volatile (
        ".set noreorder                  \n"
        "lw          %0, 0(%1)           \n"
        "pextlb      %0, $zero, %0       \n"
        "pextlh      %0, $zero, %0       \n"
        "qmtc2       %0, $vf10           \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        %0, %3              \n"
        "nop                             \n"
        "qmtc2       %0, $vf2            \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmove.xyzw  $vf11, $vf10        \n"
        "lw          %0, 0(%2)           \n"
        "pextlb      %0, $zero, %0       \n"
        "pextlh      %0, $zero, %0       \n"
        "qmtc2       %0, $vf10           \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        %0, %3              \n"
        "nop                             \n"
        "qmtc2       %0, $vf2            \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmul.xyzw   $vf10, $vf10, $vf11 \n"
        "lui         %0, 0x437F          \n"
        "qmtc2       %0, $vf2            \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vftoi0.xyzw $vf10, $vf10        \n"
        "qmfc2       %0, $vf10           \n"
        "ppach       %0, $zero, %0       \n"
        "ppacb       %0, $zero, %0       \n"
        ".set reorder"
        : "=&r"(tmp)
        : "r"(pc1), "r"(pc2), "f"(inv255)
        : "memory");
    return tmp;
}
static __inline u32 mdlVuScalePackedColor(u32 color, const u8 (*scale)[16], u32 inv255)
{
    u32 tmp;
    __asm__ volatile (
        ".set noreorder                  \n"
        "pextlb      %0, $zero, %1       \n"
        "pextlh      %0, $zero, %0       \n"
        "qmtc2       %0, $vf10           \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "nop                             \n"
        "qmtc2       %2, $vf2            \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "lqc2        $vf11, 0(%3)         \n"
        "vmul.xyzw   $vf10, $vf10, $vf11 \n"
        "lui         %0, 0x437F          \n"
        "qmtc2       %0, $vf2            \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vftoi0.xyzw $vf10, $vf10        \n"
        "qmfc2       %0, $vf10           \n"
        "ppach       %0, $zero, %0       \n"
        "ppacb       %0, $zero, %0       \n"
        ".set reorder"
        : "=&r"(tmp)
        : "r"(color), "r"(inv255), "r"(scale)
        : "memory");
    return tmp;
}
/* The two "=m" outputs matter: the asm hard-codes the frame addresses of both
 * the c2 scratch (0x138) and the result (0x134), so mwcc has to be given two
 * memory slots to place - with only one it picks the scratch slot for the
 * result and the reload reads back the spilled c2 instead of the modulated
 * colour.  Declaring the scratch first puts it at 0x138 and the result at
 * 0x134, which is what the asm writes. */
static __inline u32 mdlVuModulateStackedV0(const u32 *pc1, u32 c2, f32 inv255)
{
    u32 scratch;
    u32 tmp;
    __asm__ volatile (
        ".set noreorder                  \n"
        "lw          $v0, 0(%2)          \n"
        "pextlb      $v0, $zero, $v0     \n"
        "pextlh      $v0, $zero, $v0     \n"
        "qmtc2       $v0, $vf10          \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        $v0, %4             \n"
        "nop                             \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmove.xyzw  $vf11, $vf10        \n"
        "sw          %3, 0x138($sp)       \n"
        "addiu       $v0, $sp, 0x138      \n"
        "lw          $v0, 0($v0)          \n"
        "pextlb      $v0, $zero, $v0     \n"
        "pextlh      $v0, $zero, $v0     \n"
        "qmtc2       $v0, $vf10          \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        $v0, %4             \n"
        "nop                             \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmul.xyzw   $vf10, $vf10, $vf11 \n"
        "lui         $v0, 0x437F          \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vftoi0.xyzw $vf10, $vf10        \n"
        "qmfc2       $v0, $vf10           \n"
        "ppach       $v0, $zero, $v0     \n"
        "ppacb       $v0, $zero, $v0     \n"
        "sw          $v0, 0x134($sp)      \n"
        ".set reorder"
        : "=m"(scratch), "=m"(tmp)
        : "r"(pc1), "r"(c2), "f"(inv255)
        : "memory");
    return tmp;
}
static __inline void mdlVuModulateStacked90(u32 c2)
{
    f32 inv255;
    __asm__ (
        ".set noreorder                  \n"
        "addiu       $v0, $sp, 0x8c      \n"
        ".set reorder"
        :
        :
        : "$v0", "memory");
    inv255 = *(f32 *)&DAT_007cae4c;
    __asm__ volatile (
        ".set noreorder                  \n"
        "lw          $v0, 0($v0)         \n"
        "pextlb      $v0, $zero, $v0     \n"
        "pextlh      $v0, $zero, $v0     \n"
        "qmtc2       $v0, $vf10          \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        $v0, %1             \n"
        "nop                                \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmove.xyzw  $vf11, $vf10        \n"
        "sw          %0, 0x88($sp)       \n"
        "addiu       $v0, $sp, 0x88      \n"
        "lw          $v0, 0($v0)         \n"
        "pextlb      $v0, $zero, $v0     \n"
        "pextlh      $v0, $zero, $v0     \n"
        "qmtc2       $v0, $vf10          \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        $v0, %1             \n"
        "nop                                \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmul.xyzw   $vf10, $vf10, $vf11 \n"
        "lui         $v0, 0x437F         \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vftoi0.xyzw $vf10, $vf10        \n"
        "qmfc2       $v0, $vf10          \n"
        "ppach       $v0, $zero, $v0     \n"
        "ppacb       $v0, $zero, $v0     \n"
        "sw          $v0, 0x84($sp)      \n"
        ".set reorder"
        :
        : "r"(c2), "f"(inv255)
        : "$v0", "memory");
}
static __inline void mdlVuModulateStacked80V0(u32 c2)
{
    f32 inv255;
    __asm__ (
        ".set noreorder                  \n"
        "addiu       $v0, $sp, 0x7c      \n"
        ".set reorder"
        :
        :
        : "$v0", "memory");
    inv255 = *(f32 *)&DAT_007cae4c;
    __asm__ volatile (
        ".set noreorder                  \n"
        "lw          $v0, 0($v0)         \n"
        "pextlb      $v0, $zero, $v0     \n"
        "pextlh      $v0, $zero, $v0     \n"
        "qmtc2       $v0, $vf10          \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        $v0, %1             \n"
        "nop                                \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmove.xyzw  $vf11, $vf10        \n"
        "sw          %0, 0x78($sp)       \n"
        "addiu       $v0, $sp, 0x78      \n"
        "lw          $v0, 0($v0)         \n"
        "pextlb      $v0, $zero, $v0     \n"
        "pextlh      $v0, $zero, $v0     \n"
        "qmtc2       $v0, $vf10          \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        $v0, %1             \n"
        "nop                                \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmul.xyzw   $vf10, $vf10, $vf11 \n"
        "lui         $v0, 0x437F         \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vftoi0.xyzw $vf10, $vf10        \n"
        "qmfc2       $v0, $vf10          \n"
        "ppach       $v0, $zero, $v0     \n"
        "ppacb       $v0, $zero, $v0     \n"
        "sw          $v0, 0x74($sp)      \n"
        ".set reorder"
        :
        : "r"(c2), "f"(inv255)
        : "$v0", "memory");
}
static __inline void mdlVuModulateStacked80V1(u32 c2)
{
    f32 inv255;
    __asm__ (
        ".set noreorder                  \n"
        "addiu       $v0, $sp, 0x7c      \n"
        ".set reorder"
        :
        :
        : "$v0", "memory");
    inv255 = *(f32 *)&DAT_007cae4c;
    __asm__ volatile (
        ".set noreorder                  \n"
        "lw          $v0, 0($v0)         \n"
        "pextlb      $v0, $zero, $v0     \n"
        "pextlh      $v0, $zero, $v0     \n"
        "qmtc2       $v0, $vf10          \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        $v0, %1             \n"
        "nop                                \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmove.xyzw  $vf11, $vf10        \n"
        "sw          %0, 0x78($sp)       \n"
        "addiu       $v0, $sp, 0x78      \n"
        "lw          $v0, 0($v0)         \n"
        "pextlb      $v0, $zero, $v0     \n"
        "pextlh      $v0, $zero, $v0     \n"
        "qmtc2       $v0, $vf10          \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        $v1, %1             \n"
        "nop                                \n"
        "qmtc2       $v1, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmul.xyzw   $vf10, $vf10, $vf11 \n"
        "lui         $v1, 0x437F         \n"
        "qmtc2       $v1, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vftoi0.xyzw $vf10, $vf10        \n"
        "qmfc2       $v1, $vf10          \n"
        "ppach       $v1, $zero, $v1     \n"
        "ppacb       $v1, $zero, $v1     \n"
        "sw          $v1, 0x74($sp)      \n"
        ".set reorder"
        :
        : "r"(c2), "f"(inv255)
        : "$v0", "memory");
}
static __inline void mdlVuModulateStacked50(u32 c2)
{
    f32 inv255;
    __asm__ (
        ".set noreorder                  \n"
        "addiu       $v0, $sp, 0x48      \n"
        ".set reorder"
        :
        :
        : "$v0", "memory");
    inv255 = *(f32 *)&DAT_007cae4c;
    __asm__ volatile (
        ".set noreorder                  \n"
        "lw          $v0, 0($v0)         \n"
        "pextlb      $v0, $zero, $v0     \n"
        "pextlh      $v0, $zero, $v0     \n"
        "qmtc2       $v0, $vf10          \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        $v0, %1             \n"
        "nop                                \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmove.xyzw  $vf11, $vf10        \n"
        "sw          %0, 0x44($sp)       \n"
        "addiu       $v0, $sp, 0x44      \n"
        "lw          $v0, 0($v0)         \n"
        "pextlb      $v0, $zero, $v0     \n"
        "pextlh      $v0, $zero, $v0     \n"
        "qmtc2       $v0, $vf10          \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        $v0, %1             \n"
        "nop                                \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmul.xyzw   $vf10, $vf10, $vf11 \n"
        "lui         $v0, 0x437F         \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vftoi0.xyzw $vf10, $vf10        \n"
        "qmfc2       $v0, $vf10          \n"
        "ppach       $v0, $zero, $v0     \n"
        "ppacb       $v0, $zero, $v0     \n"
        "sw          $v0, 0x40($sp)      \n"
        ".set reorder"
        :
        : "r"(c2), "f"(inv255)
        : "$v0", "memory");
}
static __inline void mdlVuModulateStacked50V1(u32 c2)
{
    f32 inv255;
    __asm__ (
        ".set noreorder                  \n"
        "addiu       $v0, $sp, 0x48      \n"
        ".set reorder"
        :
        :
        : "$v0", "memory");
    inv255 = *(f32 *)&DAT_007cae4c;
    __asm__ volatile (
        ".set noreorder                  \n"
        "lw          $v0, 0($v0)         \n"
        "pextlb      $v0, $zero, $v0     \n"
        "pextlh      $v0, $zero, $v0     \n"
        "qmtc2       $v0, $vf10          \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        $v0, %1             \n"
        "nop                                \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmove.xyzw  $vf11, $vf10        \n"
        "sw          %0, 0x44($sp)       \n"
        "addiu       $v0, $sp, 0x44      \n"
        "lw          $v0, 0($v0)         \n"
        "pextlb      $v0, $zero, $v0     \n"
        "pextlh      $v0, $zero, $v0     \n"
        "qmtc2       $v0, $vf10          \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        $v1, %1             \n"
        "nop                                \n"
        "qmtc2       $v1, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmul.xyzw   $vf10, $vf10, $vf11 \n"
        "lui         $v1, 0x437F         \n"
        "qmtc2       $v1, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vftoi0.xyzw $vf10, $vf10        \n"
        "qmfc2       $v1, $vf10          \n"
        "ppach       $v1, $zero, $v1     \n"
        "ppacb       $v1, $zero, $v1     \n"
        "sw          $v1, 0x40($sp)      \n"
        ".set reorder"
        :
        : "r"(c2), "f"(inv255)
        : "$v0", "memory");
}
static __inline void mdlVuModulateStacked70(u32 c2)
{
    f32 inv255;
    __asm__ (
        ".set noreorder                  \n"
        "addiu       $v0, $sp, 0x6c      \n"
        ".set reorder"
        :
        :
        : "$v0", "memory");
    inv255 = *(f32 *)&DAT_007cae4c;
    __asm__ volatile (
        ".set noreorder                  \n"
        "lw          $v0, 0($v0)         \n"
        "pextlb      $v0, $zero, $v0     \n"
        "pextlh      $v0, $zero, $v0     \n"
        "qmtc2       $v0, $vf10          \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        $v0, %1             \n"
        "nop                                \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmove.xyzw  $vf11, $vf10        \n"
        "sw          %0, 0x68($sp)       \n"
        "addiu       $v0, $sp, 0x68      \n"
        "lw          $v0, 0($v0)         \n"
        "pextlb      $v0, $zero, $v0     \n"
        "pextlh      $v0, $zero, $v0     \n"
        "qmtc2       $v0, $vf10          \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        $v0, %1             \n"
        "nop                                \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmul.xyzw   $vf10, $vf10, $vf11 \n"
        "lui         $v0, 0x437F         \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vftoi0.xyzw $vf10, $vf10        \n"
        "qmfc2       $v0, $vf10          \n"
        "ppach       $v0, $zero, $v0     \n"
        "ppacb       $v0, $zero, $v0     \n"
        "sw          $v0, 0x64($sp)      \n"
        ".set reorder"
        :
        : "r"(c2), "f"(inv255)
        : "$v0", "memory");
}
static __inline void mdlVuModulateStacked40V1(u32 c2)
{
    f32 inv255;
    __asm__ (
        ".set noreorder                  \n"
        "addiu       $v0, $sp, 0x3c      \n"
        ".set reorder"
        :
        :
        : "$v0", "memory");
    inv255 = *(f32 *)&DAT_007cae4c;
    __asm__ volatile (
        ".set noreorder                  \n"
        "lw          $v0, 0($v0)         \n"
        "pextlb      $v0, $zero, $v0     \n"
        "pextlh      $v0, $zero, $v0     \n"
        "qmtc2       $v0, $vf10          \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        $v0, %1             \n"
        "nop                                \n"
        "qmtc2       $v0, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmove.xyzw  $vf11, $vf10        \n"
        "sw          %0, 0x38($sp)       \n"
        "addiu       $v0, $sp, 0x38      \n"
        "lw          $v0, 0($v0)         \n"
        "pextlb      $v0, $zero, $v0     \n"
        "pextlh      $v0, $zero, $v0     \n"
        "qmtc2       $v0, $vf10          \n"
        "vitof0.xyzw $vf10, $vf10        \n"
        "mfc1        $v1, %1             \n"
        "nop                                \n"
        "qmtc2       $v1, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vmul.xyzw   $vf10, $vf10, $vf11 \n"
        "lui         $v1, 0x437F         \n"
        "qmtc2       $v1, $vf2           \n"
        "vmulx.xyzw  $vf10, $vf10, $vf2x \n"
        "vftoi0.xyzw $vf10, $vf10        \n"
        "qmfc2       $v1, $vf10          \n"
        "ppach       $v1, $zero, $v1     \n"
        "ppacb       $v1, $zero, $v1     \n"
        "sw          $v1, 0x34($sp)      \n"
        ".set reorder"
        :
        : "r"(c2), "f"(inv255)
        : "$v0", "memory");
}

// FUN_0031C000


void func_0031c000(char* param_1,u32 param_2)



{


  u8 uVar3;

  u32 lVar4;

  u32 uVar5;



  short auStack_20 [12];

  int iStack_4;

  int iStack_8;

  u32 uVar9;

  

  uVar9 = param_2 & 0xffff;

  iStack_4 = 0;

  iStack_8 = 0;

  lVar4 = func_0031b680(5,uVar9,&iStack_4,&iStack_8);

  if (lVar4 == 1) {

    if (iStack_4 >= 0xb) {

      K_Assert((const char*)DAT_0069b1c0_abs,0x1a7);

    }

    if (iStack_4 == 0) {

      sprintf(param_1, (const char*)DAT_0069b1d0_abs, &gp0xffff9d20);

      return;

    }

    if ((iStack_4 == 1) && (iStack_8 == 2)) {

      *(MdlShortVec8 *)((u8 *)auStack_20) =
          *(MdlShortVec8 *)((u8 *)DAT_0069b1b0_abs);

      uVar5 = datGetUnit_y2(1);

      uVar3 = datCalcGetHeldWeaponType_y2(uVar5);

      if (uVar3 >= 8) {

        K_Assert((const char*)DAT_0069b1c0_abs,0x1bc);

      }

      lVar4 = datGetScenarioMode();

      if (lVar4 != 0) {

        uVar9 = 0x91;

      }

      else {

        uVar9 = (u16)auStack_20[uVar3];

      }

      printf((const char*)DAT_0069b1e0_abs,uVar9);

    }

    else if ((iStack_4 == 9) && (lVar4 = datGetScenarioMode(), lVar4 != 0)) {

      uVar9 = 0x3e6;

    }

    else {

      uVar9 = *(u16 *)(DAT_0069b0d0_abs + iStack_4 * 2);

    }

  }

  func_0031b4a0(param_1,uVar9);

  return;

}
#pragma push
#pragma opt_common_subs off
// FUN_0031C1D0


#ifndef PC_BUILD
asm u32 func_0031c1d0(int param_1)
{
  .set noreorder
  .word 0x27bdfeb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x948300d4
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000016e
  .word 0x00000000
  .word 0x864400d6
  .word 0x0000282d
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x864400d6
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3051ffff
  .word 0x964200d6
  .word 0x2c41000b
  .word 0x10200155
  .word 0x00000000
  .word 0x3c03007c
  .word 0x246391a0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b358
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x305000ff
  .word 0x24020003
  .word 0x1202000d
  .word 0x00000000
  .word 0x24020007
  .word 0x1202000a
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x10000138
  .word 0x00000000
  .word 0x2404000a
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
  .word 0x0240202d
  .word 0x0000282d
  .word 0x2406000a
  .word 0x0220382d
  .word 0x27a80050
  .word 0x0000482d
  .word 0x0c0c64a8
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x2406000a
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x3233ffff
  .word 0x267103e8
  .word 0x3225ffff
  .word 0x2404000a
  .word 0x0000302d
  .word 0x0c0c5a44
  .word 0x00000000
  .word 0x1440001e
  .word 0x00000000
  .word 0x24020007
  .word 0x1202000a
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05006a
  .word 0x24a5b130
  .word 0x27869d20
  .word 0x0260382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05006a
  .word 0x24a5b150
  .word 0x27869d20
  .word 0x0260382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x3227ffff
  .word 0x0240202d
  .word 0x24050001
  .word 0x2406000a
  .word 0x27a80050
  .word 0x0000482d
  .word 0x0c0c64a8
  .word 0x00000000
  .word 0x100000e7
  .word 0x00000000
  .word 0x3227ffff
  .word 0x0240202d
  .word 0x24050001
  .word 0x2406000a
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x100000de
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x24060007
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x100000d5
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
  .word 0x0240202d
  .word 0x0000282d
  .word 0x24060007
  .word 0x0220382d
  .word 0x27a80050
  .word 0x0000482d
  .word 0x0c0c64a8
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
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
  .word 0x14400012
  .word 0x00000000
  .word 0x3227ffff
  .word 0x27a40050
  .word 0x3c05006a
  .word 0x24a5b150
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x3207ffff
  .word 0x0240202d
  .word 0x24050001
  .word 0x24060007
  .word 0x27a80050
  .word 0x0000482d
  .word 0x0c0c64a8
  .word 0x00000000
  .word 0x1000009c
  .word 0x00000000
  .word 0x3207ffff
  .word 0x0240202d
  .word 0x24050001
  .word 0x24060007
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x10000093
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x24060007
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x1000008a
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x24060007
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x10000081
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
  .word 0x0240202d
  .word 0x0000282d
  .word 0x24060007
  .word 0x0220382d
  .word 0x27a80050
  .word 0x0000482d
  .word 0x0c0c64a8
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
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
  .word 0x14400012
  .word 0x00000000
  .word 0x3227ffff
  .word 0x27a40050
  .word 0x3c05006a
  .word 0x24a5b150
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x3207ffff
  .word 0x0240202d
  .word 0x24050001
  .word 0x24060007
  .word 0x27a80050
  .word 0x0000482d
  .word 0x0c0c64a8
  .word 0x00000000
  .word 0x10000048
  .word 0x00000000
  .word 0x3207ffff
  .word 0x0240202d
  .word 0x24050001
  .word 0x24060007
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x1000003f
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x24060007
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x10000036
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
  .word 0x0240202d
  .word 0x0000282d
  .word 0x24060007
  .word 0x0220382d
  .word 0x27a80050
  .word 0x0000482d
  .word 0x0c0c64a8
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x24060007
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x24060007
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x24060007
  .word 0x0220382d
  .word 0x0000402d
  .word 0x0c0c6524
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x240601f4
  .word 0x0c0c65b4
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x240601f5
  .word 0x0c0c65b4
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0150
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop

/* ---- Recovered range 0x31D600-0x357DC0 (Ghidra reference) ---- */


#pragma alias ABS_f32 ABS
#pragma alias SQRT_f32 SQRT
#pragma alias RwMatrixRotate_f32_first RwMatrixRotate
/* Ghidra's VU pseudo-registers are 128-bit values.  MWCC's vector extension is
 * disabled for this TU, so keep the register shape as a plain union and use
 * scalar compatibility shims for the generated intrinsics. */
#define RpSkyRenderStateSet(n,p) ((void)RpSkyRenderStateSet((n),(void *)(u32)(p)))
#define RwCameraBeginUpdate(p) RwCameraBeginUpdate((RwCamera *)(u32)(p))
#define RwCameraEndUpdate(p) RwCameraEndUpdate((RwCamera *)(u32)(p))
#define RwCameraSetProjectionType(p,t) RwCameraSetProjectionType((RwCamera *)(u32)(p),(t))
#define RwV3dTransformPoint(o,i,m) RwV3dTransformPoint((RwV3d *)(o),(RwV3d *)(i),(RwMatrix *)(u32)(m))
#define RwV3dNormalize(o,i) RwV3dNormalize((RwV3d *)(o),(RwV3d *)(i))
#define RtQuatConvertFromMatrix(q,m) RtQuatConvertFromMatrix((RtQuat *)(q),(RwMatrix *)(m))
#define RwMatrixScale(m,v,f) RwMatrixScale((RwMatrix *)(m),(RwV3d *)(v),(f))
#define RwMatrixTranslate(m,v,f) RwMatrixTranslate((RwMatrix *)(m),(RwV3d *)(v),(f))
#define RwMatrixMultiply(o,a,b) RwMatrixMultiply((RwMatrix *)(o),(RwMatrix *)(a),(RwMatrix *)(b))
#define RwMatrixRotate(a,m,v,f) RwMatrixRotate_f32_first((a),(RwMatrix *)(m),(RwV3d *)(v),(f))
/* Ghidra stack/global temporaries that are referenced before a matching local declaration. */
#pragma alias DAT_0069c4a0_abs _DAT_0069c4a0

/* Retail's VU0 colour-modulate kernel (COP2 macro mode + MMI pack).
   Unpacks two packed RGBA u32s to floats, scales each by DAT_007cae4c
   (1/255), multiplies, rescales by 255.0f, converts back and packs.
   VU macro-mode and MMI parallel ops cannot be expressed in C. */

/* The animation kernels spill both packed colours before entering the VU
   sequence.  Keep the loads inside the asm so those addressable spills are
   preserved instead of being folded back into integer registers. */


/* Some retail paths reserve v0 for the macro-mode sequence and spill its result. */


/* The 0x90-byte animation frames interleave their second colour spill with
   the VU kernel.  Fixed VU/GPR registers are part of the retail macro-mode
   sequence; the result is written to the caller's contiguous colour stack. */









/* ==========================================================================
 * WARNING: EVERY MACRO BELOW IS A FAKE PLACEHOLDER, NOT A VU INSTRUCTION.
 *
 * They expand to mdlVecZero() (a zeroed Vec128) or mdlVecKeep() (identity),
 * so any function still using them compiles cleanly while emitting scalar
 * GARBAGE instead of the COP2/MMI instructions retail executes. That garbage
 * is why such functions sit 20-40% over their windows.
 *
 * To fix a site you must rewrite its DATAFLOW, not just swap the macro: a
 * real lqc2/sqc2 targets a fixed VU register ($vf10 etc.), so the Ghidra
 * form `auVarN = _lqc2(x);` has no C value to assign and every consumer of
 * auVarN has to be traced out. Decode the retail window first with
 *   python build/wip/W147_dis.py <VADDR_HEX> <SIZE>
 * then emit the real instruction as __asm__ volatile with a "memory" clobber
 * (see mdlVuModulate above, and src/Graphics/Effect/effMisc.c).
 *
 * DELETE THIS BLOCK once the last user is converted, so a stray _lqc2 can
 * never silently reintroduce zeroes.
 * ========================================================================== */
#define _lqc2(x) mdlVecZero()
#define _sqc2(x) mdlVecKeep(x)
#define _qmtc2(x) mdlVecZero()
#define _qmfc2(x) mdlVecZero()
#define _vadd(a,b) mdlVecZero()
#define _vsub(a,b) mdlVecZero()
#define _vmul(a,b) mdlVecZero()
#define _vmulbc(a,b) mdlVecZero()
#define _vaddbc(a,b) mdlVecZero()
#define _vsubbc(a,b) mdlVecZero()
#define _vmulabc(a,b) mdlVecZero()
#define _vmaddabc(a,b) mdlVecZero()
#define _vmaddbc(a,b) mdlVecZero()
#define _vftoi0(a) mdlVecZero()
#define _vitof0(a) mdlVecZero()
#define _vsqrt(a) mdlVecZero()
#define _vrsqrt(a,b) mdlVecZero()
#define _vmulq(a,b) mdlVecZero()
#define _vmove(a) mdlVecKeep(a)
#define _vopmula(a,b) mdlVecZero()
#define _vopmsub(a,b) mdlVecZero()
#define _vwaitq() ((u32)0)
#define _pextlb(a,b) mdlVecZero()
#define _pextlh(a,b) mdlVecZero()
#define _ppach(a,b) mdlVecZero()
#define _ppacb(a,b) mdlVecZero()
#define _cfc2(a) ((u32)0)
#define _pcpyld(a,b) mdlVecZero()
#define _prot3w(a) mdlVecZero()
#define _pexew(a) mdlVecZero()
#define __int128 Vec128
#ifndef CONCAT44
#define CONCAT44(hi, lo) ((((u64)(hi)) << 32) | (u32)(lo))
#endif
#ifndef CONCAT11
#define CONCAT11(hi, lo) ((u16)((((u16)(u8)(hi)) << 8) | (u8)(lo)))
#endif
#pragma alias FUN_0034fcf0_i FUN_0034fcf0
#pragma alias FUN_0034fcd0_i FUN_0034fcd0
#pragma alias FUN_0031e300_wide FUN_0031e300
#pragma alias mdlFileSelectCacheSlot FUN_0031e310
#pragma alias FUN_0031e310_u32 FUN_0031e310
#pragma alias FUN_003210c0_ret FUN_003210c0
#pragma alias FUN_003210c0_int FUN_003210c0
#pragma alias FUN_00321140_passthru FUN_00321140
#pragma alias FUN_00321f10_passthru FUN_00321f10
#pragma alias FUN_00322530_u32 FUN_00322530
#pragma alias FUN_003225d0_u32 FUN_003225d0
#pragma alias FUN_00322d40_onearg FUN_00322d40
#pragma alias FUN_00322dc0_u32 FUN_00322dc0
#pragma alias FUN_003233a0_ptr FUN_003233a0
#pragma alias FUN_003234f0_u32 FUN_003234f0
#pragma alias FUN_00323640_u32 FUN_00323640
 #pragma alias FUN_003237c0_i FUN_003237c0
 #pragma alias FUN_003237c0_u32 FUN_003237c0
 #pragma alias FUN_00323860_4arg FUN_00323860
#pragma alias FUN_00323860_2arg FUN_00323860
#pragma alias FUN_003238d0_4arg FUN_003238d0
#pragma alias FUN_003238d0_ptr4 FUN_003238d0
 #pragma alias FUN_00323920_out FUN_00323920
 #pragma alias FUN_00323a30_out FUN_00323a30
#pragma alias FUN_00323b90_i FUN_00323b90
#pragma alias FUN_00323c20_u32first FUN_00323c20
#pragma alias FUN_00323e10_ptr FUN_00323e10
#pragma alias FUN_00323fb0_ptr FUN_00323fb0
#pragma alias FUN_00324160_u32 FUN_00324160
 #pragma alias FUN_00324310_i FUN_00324310
#pragma alias FUN_003243d0_1arg FUN_003243d0
#pragma alias FUN_003243d0_2arg FUN_003243d0
#pragma alias FUN_003243f0_i FUN_003243f0
#pragma alias FUN_00324510_i FUN_00324510
#pragma alias FUN_003244c0_4arg FUN_003244c0
 #pragma alias FUN_003245b0_passthru FUN_003245b0
#pragma alias FUN_003245b0_wide FUN_003245b0
#pragma alias FUN_00324a90_f32 FUN_00324a90
#pragma alias FUN_00324bd0_passthru FUN_00324bd0
#pragma alias FUN_00324bd0_u32 FUN_00324bd0
#pragma alias FUN_00324bd0_u64 FUN_00324bd0
#pragma alias FUN_003257e0_passthru FUN_003257e0
#pragma alias FUN_00325920_u32 FUN_00325920
#pragma alias FUN_00325b80_passthru FUN_00325b80
#pragma alias FUN_003252a0_passthru FUN_003252a0
#pragma alias FUN_00325920_passthru FUN_00325920
#pragma alias FUN_00325e40_passthru FUN_00325e40
/* FUN_003505d0 is also called with its first argument passed through. */
#pragma alias FUN_003505d0_passthru FUN_003505d0
#pragma alias FUN_00325c10_onearg FUN_00325c10
#pragma alias FUN_00325d60_ptr FUN_00325d60
#pragma alias FUN_00325e40_reordered FUN_00325e40
#pragma alias FUN_00326cf0_2 FUN_00326cf0
#pragma alias FUN_00326e50_u32 FUN_00326e50
#pragma alias FUN_00326f60_u32 FUN_00326f60
#pragma alias FUN_00327090_u32 FUN_00327090
#pragma alias FUN_00326db0_u32 FUN_00326db0
#pragma alias FUN_003275d0_evt FUN_003275d0
#pragma alias FUN_003275d0_evt2 FUN_003275d0
#pragma alias mdlFileDrawType7Billboards FUN_003282e0
#pragma alias mdlFileEmitMaskedFrame1Packet FUN_003294d0
#pragma alias mdlFileRestoreFrame1Packet FUN_00329550
#pragma alias mdlFileEmitClamp1Packet FUN_003295c0
#pragma alias mdlFileRestoreClamp1Packet FUN_00329630
 #pragma alias FUN_003296a0_typed FUN_003296a0
#pragma alias mdlFileBuildAxisRotation FUN_00329890
#pragma alias mdlFileInterpolateCatmullRomVU FUN_00329d60
#pragma alias FUN_0032a120_2arg FUN_0032a120
#pragma alias FUN_0032a770_u32 FUN_0032a770
#pragma alias FUN_0032a890_u32 FUN_0032a890
#pragma alias FUN_00332070_u32 FUN_00332070
#pragma alias FUN_00332070_u32_ptr FUN_00332070
#pragma alias FUN_003322d0_one FUN_003322d0
#pragma alias FUN_00332310_one FUN_00332310
#pragma alias FUN_003330e0_u32 FUN_003330e0
#pragma alias FUN_003393d0_u32 FUN_003393d0
#pragma alias FUN_00345cf0_u32 FUN_00345cf0
#pragma alias FUN_00347170_ptr FUN_00347170
#pragma alias FUN_00346530_alt FUN_00346530
#pragma alias FUN_00349090_ptr FUN_00349090
#pragma alias FUN_00349450_ptr FUN_00349450
#pragma alias FUN_0034bbc0_u16 FUN_0034bbc0
#pragma alias RpSkyRenderStateSet_u32 RpSkyRenderStateSet
#pragma alias FUN_0034c670_u32 FUN_0034c670
#pragma alias FUN_0034db30_i FUN_0034db30
#pragma alias FUN_0034e7c0_u32 FUN_0034e7c0
#pragma alias FUN_00352c70_u32 FUN_00352c70
#pragma alias FUN_00102100_mdl FUN_00102100
#pragma alias FUN_0010a4e0_model FUN_0010a4e0
#pragma alias FUN_00198580_u32 FUN_00198580
#pragma alias FUN_001eda00_u32 FUN_001eda00
#pragma alias FUN_00282d40_anim FUN_00282d40
#pragma alias FUN_0029a1d0_u32 FUN_0029a1d0
#pragma alias FUN_002a3e80_typed FUN_002a3e80
#pragma alias FUN_00316910_typed FUN_00316910
#pragma alias FUN_00316910_u32_typed FUN_00316910
#pragma alias FUN_00316bd0_u32 FUN_00316bd0
#pragma alias FUN_00316bd0_typed FUN_00316bd0
#pragma alias FUN_00316e00_u32 FUN_00316e00
#pragma alias FUN_003189f0_f32 FUN_003189f0
#pragma alias FUN_003189f0_typed FUN_003189f0
#pragma alias FUN_003189f0_reordered FUN_003189f0
#pragma alias FUN_00318ad0_u32 FUN_00318ad0
#pragma alias FUN_00318a70_u32 FUN_00318a70
#pragma alias FUN_00318a90_u32 FUN_00318a90
#pragma alias FUN_00318a30_u32 FUN_00318a30
#pragma alias FUN_00357ea0_4arg FUN_00357ea0
#pragma alias FUN_00357fd0_u32 FUN_00357fd0
// Typed aliases preserve the floating-point ABI used by the particle update routine.
#pragma alias FUN_00358160_f32 FUN_00358160
#pragma alias FUN_00358380_f32 FUN_00358380
#pragma alias FUN_00358410_void FUN_00358410
#pragma alias FUN_00358340_vec FUN_00358340
#pragma alias FUN_00358a30 FUN_00358a30
#pragma alias FUN_00359380 FUN_00359380
#pragma alias FUN_0035ed20_i FUN_0035ed20
#pragma alias FUN_00474210_u32 FUN_00474210
#pragma alias FUN_004916d0_typed FUN_004916d0
#pragma alias FUN_004916d0_u32 FUN_004916d0
#pragma alias FUN_00491880_u32 FUN_00491880
#pragma alias FUN_00491cc0_u32 FUN_00491cc0
#pragma alias FUN_00491ea0_u32 FUN_00491ea0
#pragma alias FUN_004920a0_u32 FUN_004920a0
#pragma alias FUN_00493710_u32 FUN_00493710
#pragma alias FUN_004944b0_typed FUN_004944b0
#pragma alias FUN_00494be0_u32 FUN_00494be0
#pragma alias FUN_004ca090_u32 FUN_004ca090
#pragma alias FUN_004caf10_u32 FUN_004caf10
#pragma alias FUN_004cb2f0_u32 FUN_004cb2f0
#pragma alias FUN_004cb7f0_typed FUN_004cb7f0
#pragma alias FUN_004ce0f0_u32 FUN_004ce0f0
#pragma alias FUN_004e3630_ptr FUN_004e3630
#pragma alias FUN_00521250_mdl FUN_00521250
#pragma alias FUN_0052e408_f32 FUN_0052e408
#pragma alias FUN_0052e6d8_f32 FUN_0052e6d8
#pragma alias FUN_0052e878_f32 FUN_0052e878
#pragma alias FUN_0052ea00_f32 FUN_0052ea00
#pragma alias FUN_0052e9e8_f32 FUN_0052e9e8
#pragma alias FUN_0052ea18_f32 FUN_0052ea18
#pragma alias FUN_0052ea18_2f FUN_0052ea18
#pragma alias FUN_00530da0_f32_u32 FUN_00530da0
#pragma alias FUN_0052e118_u32 FUN_0052e118
#pragma alias FUN_005311c8_u32 FUN_005311c8
#pragma alias FUN_00531230_u32 FUN_00531230
#pragma alias FUN_005318a0_f32 FUN_005318a0
#pragma alias DAT_0069ba18_abs DAT_0069ba18
#pragma alias DAT_0069bd60_abs DAT_0069bd60
#pragma alias DAT_0069bd50_abs DAT_0069bd50
#pragma alias DAT_0069bd80_abs DAT_0069bd80
#pragma alias DAT_0069bdc8_abs DAT_0069bdc8
#pragma alias DAT_0069c730_abs DAT_0069c730
#pragma alias DAT_0069bb90_abs DAT_0069bb90
#pragma alias DAT_0069bb94_abs DAT_0069bb94
#pragma alias DAT_0069bbd0_abs DAT_0069bbd0
#pragma alias DAT_0069bbd4_abs DAT_0069bbd4
#pragma alias DAT_0069bcb0_abs DAT_0069bcb0
#pragma alias DAT_0069c4d0_f32 DAT_0069c4d0
#pragma alias DAT_0069c4d4_f32 DAT_0069c4d4
#pragma alias DAT_0069c4d8_f32 DAT_0069c4d8
#pragma alias DAT_0069c4d0_abs DAT_0069c4d0
#pragma alias DAT_0069c850_abs DAT_0069c850
#pragma alias DAT_0069c854_abs DAT_0069c854
#pragma alias DAT_0069c970_abs DAT_0069c970
#pragma alias DAT_0069c974_abs DAT_0069c974
#pragma alias DAT_0069cb80_abs DAT_0069cb80
#pragma alias DAT_0069cba0_s8 DAT_0069cba0
#pragma alias DAT_0069cba0_abs DAT_0069cba0
#pragma alias DAT_0069cc60_s8 DAT_0069cc60
#pragma alias DAT_0069cc60_abs DAT_0069cc60
#pragma alias DAT_0069ccc0_abs DAT_0069ccc0
#pragma alias DAT_0069ccd0_abs DAT_0069ccd0
#pragma alias DAT_0069ccf0_abs DAT_0069ccf0
#pragma alias DAT_007cad7c_f32 DAT_007cad7c
#pragma alias DAT_007cadb0_f32 DAT_007cadb0
#pragma alias DAT_007cadc4_f32 DAT_007cadc4
#pragma alias DAT_007cadd0_f32 DAT_007cadd0
#pragma alias DAT_007cade4_f32 DAT_007cade4
#pragma alias DAT_007cae18_f32 DAT_007cae18
#pragma alias DAT_007cae58_f32 DAT_007cae58
#pragma alias DAT_007cae98_f32 DAT_007cae98
#pragma alias DAT_007cada0_f32 DAT_007cada0
#pragma alias DAT_007caea4_f32 DAT_007caea4
#pragma alias DAT_007cae50_f32 DAT_007cae50
#pragma alias DAT_00957220_abs DAT_00957220
#pragma alias DAT_00957224_abs DAT_00957224
#pragma alias DAT_00957226_abs DAT_00957226
#pragma alias DAT_00957240_abs DAT_00957240
#pragma alias DAT_00957240_f32 DAT_00957240
#pragma alias DAT_00957244_f32 DAT_00957244
#pragma alias DAT_00957248_f32 DAT_00957248
#pragma alias DAT_0095724c_f32 DAT_0095724c
#pragma alias DAT_00957250_f32 DAT_00957250
#pragma alias DAT_00957254_f32 DAT_00957254
#pragma alias DAT_00957258_f32 DAT_00957258
#pragma alias DAT_0095725c_f32 DAT_0095725c
#pragma alias DAT_00957250_abs DAT_00957250
#pragma alias DAT_00957254_abs DAT_00957254
#pragma alias DAT_00957258_abs DAT_00957258
#pragma alias DAT_0095725c_abs DAT_0095725c
#pragma alias DAT_00957260_abs DAT_00957260
#pragma alias DAT_00957270_abs DAT_00957270
#pragma alias DAT_009572b0_abs DAT_009572b0
#pragma alias DAT_009572c0_abs DAT_009572c0
#pragma alias DAT_009572d0_abs DAT_009572d0
#pragma alias DAT_009572b0_f32 DAT_009572b0
#pragma alias DAT_009572b4_f32 DAT_009572b4
#pragma alias DAT_009572b8_f32 DAT_009572b8
#pragma alias DAT_009572bc_f32 DAT_009572bc
#pragma alias DAT_009572c0_f32 DAT_009572c0
#pragma alias DAT_009572c4_f32 DAT_009572c4
#pragma alias DAT_009572c8_f32 DAT_009572c8
#pragma alias DAT_009572cc_f32 DAT_009572cc
#pragma alias DAT_00957920_abs DAT_00957920
#pragma alias DAT_00957820_abs DAT_00957820
#pragma alias DAT_00957620_abs DAT_00957620
#pragma alias DAT_00957520_abs DAT_00957520
#pragma alias DAT_00957720_abs DAT_00957720
#pragma alias DAT_00957420_abs DAT_00957420
#pragma alias DAT_00957320_abs DAT_00957320
#pragma alias DAT_009572e0_abs DAT_009572e0
#pragma alias DAT_00957a90_abs DAT_00957a90
#pragma alias DAT_00957b44_f32 DAT_00957b44
#pragma alias DAT_00957b48_f32 DAT_00957b48
#pragma alias DAT_00957ba8_abs DAT_00957ba8
#pragma alias DAT_00957bac_abs DAT_00957bac
#pragma alias DAT_00957bb0_abs DAT_00957bb0
#pragma alias DAT_00957bc0_abs DAT_00957bc0
#pragma alias DAT_00957bc4_abs DAT_00957bc4
#pragma alias DAT_00957bc8_abs DAT_00957bc8
#pragma alias DAT_00957bcc_abs DAT_00957bcc
#pragma alias DAT_00960088_abs DAT_00960088
#pragma alias DAT_0096008c_abs DAT_0096008c
#pragma alias DAT_00960090_abs DAT_00960090
#pragma alias DAT_009600a0_abs DAT_009600a0
#pragma alias DAT_009600a4_abs DAT_009600a4
#pragma alias DAT_00960178_u32 DAT_00960178
#pragma alias DAT_00960178_abs DAT_00960178
#pragma alias DAT_0069baf0_abs DAT_0069baf0
#pragma alias DAT_0096017c_abs DAT_0096017c
#pragma alias FUN_001a6400_ptr FUN_001a6400
#pragma alias PTR_FUN_0069bb14_abs PTR_FUN_0069bb14
#pragma alias PTR_FUN_0069bb18_abs PTR_FUN_0069bb18
#pragma alias PTR_FUN_0069bb1c_abs PTR_FUN_0069bb1c
#pragma alias PTR_LAB_0069bb10_abs PTR_LAB_0069bb10
#pragma alias PTR_LAB_0069be20_abs PTR_LAB_0069be20
#pragma alias PTR_LAB_0069be20_table PTR_LAB_0069be20
#pragma alias PTR_LAB_0069be30_abs PTR_LAB_0069be30
#pragma alias PTR_LAB_0069be30_cb PTR_LAB_0069be30
#pragma alias PTR_LAB_0069be34_abs PTR_LAB_0069be34
#pragma alias PTR_LAB_0069be48_abs PTR_LAB_0069be48
#pragma alias gp0xffff9d38 uGpffff9d38

// FUN_0031C7E0


u32 func_0031c7e0(int param_1)



{
  int iVar1;
  iVar1 = param_1;
  FUN_0031e4d0_y2((int *)(iVar1 + 0x3f8),*(u16 *)(iVar1 + 0xd4),*(u16 *)(iVar1 + 0xd6));

  return 1;

}




/* W419 dispatch-shape negative: explicit default grouping stayed nd1877/object3092/window3280/rate0.607050. */
// FUN_0031C820


#ifndef PC_BUILD
asm u32 func_0031c820(u16 param_1,u16 param_2,char* param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x00c0902d
  .word 0x3082ffff
  .word 0x2c41000c
  .word 0x10200313
  .word 0x00000000
  .word 0x3c03007c
  .word 0x24639200
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0011843c
  .word 0x0010843f
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0200202d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x0002843c
  .word 0x0010843f
  .word 0x3227ffff
  .word 0x24020001
  .word 0x14e200b0
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x1040003c
  .word 0x00000000
  .word 0x00101c3c
  .word 0x00031c3f
  .word 0x24020464
  .word 0x10620019
  .word 0x00000000
  .word 0x24020466
  .word 0x1062000e
  .word 0x00000000
  .word 0x2402043d
  .word 0x10620003
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b230
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100002f1
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b250
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100002e9
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b270
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100002e1
  .word 0x00000000
  .word 0x240402f0
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x14430009
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b290
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100002d3
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b2b0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100002cb
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b358
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x305100ff
  .word 0x16200019
  .word 0x00000000
  .word 0x24040015
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400014
  .word 0x00000000
  .word 0x24041310
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440000f
  .word 0x00000000
  .word 0x24040001
  .word 0x0080282d
  .word 0x0c0c7908
  .word 0x00000000
  .word 0x14400009
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b2d0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100002aa
  .word 0x00000000
  .word 0x00101c3c
  .word 0x00031c3f
  .word 0x2402040e
  .word 0x10620037
  .word 0x00000000
  .word 0x2402045f
  .word 0x1062002a
  .word 0x00000000
  .word 0x24020453
  .word 0x1062001d
  .word 0x00000000
  .word 0x24020452
  .word 0x10620010
  .word 0x00000000
  .word 0x24020439
  .word 0x10620003
  .word 0x00000000
  .word 0x10000033
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b2f0
  .word 0x27869d20
  .word 0x24070001
  .word 0x0220402d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000028d
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b310
  .word 0x27869d20
  .word 0x24070001
  .word 0x0220402d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000283
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b330
  .word 0x27869d20
  .word 0x24070001
  .word 0x0220402d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000279
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b350
  .word 0x27869d20
  .word 0x24070001
  .word 0x0220402d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000026f
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b370
  .word 0x27869d20
  .word 0x24070001
  .word 0x0220402d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000265
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b390
  .word 0x27869d20
  .word 0x24070001
  .word 0x0220402d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000025b
  .word 0x00000000
  .word 0x2ce1000b
  .word 0x102001fa
  .word 0x00000000
  .word 0x3c03007c
  .word 0x246391d0
  .word 0x00071080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x00101c3c
  .word 0x00031c3f
  .word 0x2402041e
  .word 0x1062003a
  .word 0x00000000
  .word 0x24020462
  .word 0x1062002f
  .word 0x00000000
  .word 0x2402045d
  .word 0x10620024
  .word 0x00000000
  .word 0x24020459
  .word 0x10620019
  .word 0x00000000
  .word 0x24020458
  .word 0x1062000e
  .word 0x00000000
  .word 0x2402043a
  .word 0x10620003
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b3b0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000233
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b3d0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000022b
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b3f0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000223
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b410
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000021b
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b430
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000213
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b450
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000020b
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b470
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100001ff
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b490
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100001f7
  .word 0x00000000
  .word 0x00101c3c
  .word 0x00031c3f
  .word 0x24020464
  .word 0x10620019
  .word 0x00000000
  .word 0x24020466
  .word 0x1062000e
  .word 0x00000000
  .word 0x2402043d
  .word 0x10620003
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b4b0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100001e2
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b4d0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100001da
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b4f0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100001d2
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b510
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100001c6
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b530
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100001be
  .word 0x00000000
  .word 0x00101c3c
  .word 0x00031c3f
  .word 0x2402041e
  .word 0x1062003a
  .word 0x00000000
  .word 0x24020463
  .word 0x1062002f
  .word 0x00000000
  .word 0x2402045e
  .word 0x10620024
  .word 0x00000000
  .word 0x2402045b
  .word 0x10620019
  .word 0x00000000
  .word 0x2402045a
  .word 0x1062000e
  .word 0x00000000
  .word 0x2402043c
  .word 0x10620003
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b550
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100001a0
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b570
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000198
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b590
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000190
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b5b0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000188
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b5d0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000180
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b5f0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000178
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b610
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000016c
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b630
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000164
  .word 0x00000000
  .word 0x00101c3c
  .word 0x00031c3f
  .word 0x2402040e
  .word 0x1062002f
  .word 0x00000000
  .word 0x24020460
  .word 0x10620024
  .word 0x00000000
  .word 0x24020455
  .word 0x10620019
  .word 0x00000000
  .word 0x24020454
  .word 0x1062000e
  .word 0x00000000
  .word 0x24020440
  .word 0x10620003
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b650
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000149
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b670
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000141
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b690
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000139
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b6b0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000131
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b6d0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000129
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b6f0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000011d
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b710
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000115
  .word 0x00000000
  .word 0x00101c3c
  .word 0x00031c3f
  .word 0x2402040e
  .word 0x1062002f
  .word 0x00000000
  .word 0x24020461
  .word 0x10620024
  .word 0x00000000
  .word 0x24020457
  .word 0x10620019
  .word 0x00000000
  .word 0x24020456
  .word 0x1062000e
  .word 0x00000000
  .word 0x2402043b
  .word 0x10620003
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b730
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100000fa
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b750
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100000f2
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b770
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100000ea
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b790
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100000e2
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b7b0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100000da
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b7d0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100000ce
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b7f0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100000c6
  .word 0x00000000
  .word 0x00101c3c
  .word 0x00031c3f
  .word 0x2402040e
  .word 0x10620024
  .word 0x00000000
  .word 0x24020465
  .word 0x10620019
  .word 0x00000000
  .word 0x2402045c
  .word 0x1062000e
  .word 0x00000000
  .word 0x2402043e
  .word 0x10620003
  .word 0x00000000
  .word 0x10000021
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b810
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100000ae
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b830
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100000a6
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b850
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000009e
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b870
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000096
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b890
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000008a
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b8b0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000082
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b8d0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000076
  .word 0x00000000
  .word 0x00101c3c
  .word 0x00031c3f
  .word 0x2402040e
  .word 0x10620003
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b8f0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000067
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b910
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000005f
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b930
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000057
  .word 0x00000000
  .word 0x3227ffff
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b950
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000004e
  .word 0x00000000
  .word 0x3227ffff
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b970
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000045
  .word 0x00000000
  .word 0x3227ffff
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b990
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000003c
  .word 0x00000000
  .word 0x3227ffff
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b9b0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000033
  .word 0x00000000
  .word 0x3227ffff
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b9d0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000002a
  .word 0x00000000
  .word 0x3222ffff
  .word 0x00021203
  .word 0x304700ff
  .word 0x322800ff
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b210
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000001e
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0c7000
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x3227ffff
  .word 0x0240202d
  .word 0x3c05006a
  .word 0x24a5b9f0
  .word 0x27869d20
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x3082ffff
  .word 0x000218c0
  .word 0x3c02006a
  .word 0x2442ae80
  .word 0x00432021
  .word 0x3222ffff
  .word 0x00021880
  .word 0x8c820000
  .word 0x00431021
  .word 0x0240202d
  .word 0x27859d28
  .word 0x27869d20
  .word 0x8c470000
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */




// FUN_0031d4f0
u8 mdlFileIsTypePac(u16 type)
{
    switch (type)
    {
        case MODEL_TYPE_BTLCHAR: // fallthrough
        case MODEL_TYPE_ENEMY:   return true;
    }

    return false;
}





// FUN_0031d530
u32 mdlFileResolvePackPath(u16 type, u16 id, char* dst)
{
    char path[0x100];
    char* name;
    s32 len;
    u32 isPac;

    switch (type)
    {
        case MODEL_TYPE_BTLCHAR:
        case MODEL_TYPE_ENEMY:
            isPac = 1;
            break;
        default:
            isPac = 0;
            break;
    }

    if (isPac == 0)
    {
        func_0031c820(type, id, dst);
        /* Retail preserves the resolver's v0 on this early exit. */
        return;
    }
    func_0031c820(type, id, path);
    len = strlen(path);
    if (!func_0031e420(type, id))
    {
        path[len - 3] = 'p';
        path[len - 2] = 'a';
        path[len - 1] = 'c';
    }
    else
    {
        path[len - 4] = 'a';
        path[len - 3] = '.';
        path[len - 2] = 'p';
        path[len - 1] = 'a';
        path[len] = 'c';
        path[len + 1] = '\0';
        len++; 
    }
    while (path[len] != '\\' && path[len] != '/')
    {
        len--;
    }
    name = path + len;
    sprintf(dst, D_0069BA08, MODEL_PATH, name);
    return 1;
}




// FUN_0031D6B0


u32 FUN_0031d6b0(void)



{

  u32 uVar1;

  

  uVar1 = (*DAT_00960178_abs)(4,0x40000);

  FUN_0031d7d0((u32 *)uVar1);

  return uVar1;

}




// FUN_0031D700


u32 FUN_0031d700(int *param_1)



{

  u32 uVar2;

  int iVar1;

  

  uVar2 = (*DAT_00960178_abs)(4,0x40000);

  FUN_0031d7d0((u32 *)uVar2);

  for (iVar1 = *param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {

    FUN_0031d900((int *)uVar2,(int *)iVar1,*(u16 *)(iVar1 + 4));

  }

  return uVar2;

}




// FUN_0031D790


void FUN_0031d790(u32 *param_1)
{
  FUN_0031de30(param_1);

  DAT_0096017c_abs[0](param_1);
}




// FUN_0031D7D0


void FUN_0031d7d0(u32 *param_1)



{

  *param_1 = 0;

  return;

}

// FUN_0031D7E0


#ifndef PC_BUILD
asm u32 FUN_0031d7e0(int *param_1,u32 param_2,u16 param_3,u32 param_4,
            u32 param_5)
{
  .set noreorder
  .word 0x27bdff80
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
  .word 0x00e0982d
  .word 0x0100b02d
  .word 0x00c0902d
  .word 0x3c110096
  .word 0x26310178
  .word 0x26440010
  .word 0x3c050004
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040802d
  .word 0x26030010
  .word 0xac430000
  .word 0xac400004
  .word 0xac56000c
  .word 0x24030001
  .word 0xac430008
  .word 0x8c440000
  .word 0x0280282d
  .word 0x0240302d
  .word 0x0c148494
  .word 0x00000000
  .word 0x24040014
  .word 0x3c050004
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040882d
  .word 0x0220202d
  .word 0x0000282d
  .word 0x24060014
  .word 0x0c148502
  .word 0x00000000
  .word 0xae20000c
  .word 0x8ea20000
  .word 0x10400006
  .word 0x00000000
  .word 0xac51000c
  .word 0x8ea20000
  .word 0xae220010
  .word 0x10000002
  .word 0x00000000
  .word 0xae200010
  .word 0xaeb10000
  .word 0xae300000
  .word 0xa6330004
  .word 0x0220102d
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */




// FUN_0031D900


u32 FUN_0031d900(int *param_1,int *param_2,u16 param_3)



{

  u32 uVar1;

  int *piVar2;

  

  uVar1 = (*DAT_00960178_abs)(0x14,0x40000);

  FUN_00521408(uVar1,0,0x14);

  piVar2 = (int *)uVar1;

  piVar2[3] = 0;

  if (*param_1 != 0) {

    *(int **)(*param_1 + 0xc) = piVar2;

    piVar2[4] = *param_1;

  }

  else {

    piVar2[4] = 0;

  }

  *param_1 = (int)piVar2;

  *piVar2 = *param_2;

  *(u16 *)(piVar2 + 1) = param_3;

  *(int *)(*param_2 + 8) = *(int *)(*param_2 + 8) + 1;

  return uVar1;

}

/* W414 probe: moving the copy-loop counter declaration after pointer locals worsened FUN_0031d9c0 nd27->28; reverted. */
// FUN_0031D9C0


#ifndef PC_BUILD
asm void FUN_0031d9c0(int *param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x8c900000
  .word 0x100000a0
  .word 0x00000000
  .word 0x8e030008
  .word 0x1060009f
  .word 0x00000000
  .word 0x96050004
  .word 0x0220202d
  .word 0x27a60080
  .word 0x0c0c6344
  .word 0x00000000
  .word 0x1440000d
  .word 0x00000000
  .word 0x27a50080
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
  .word 0x962300d6
  .word 0x240200f1
  .word 0x14620026
  .word 0x00000000
  .word 0x962300d4
  .word 0x24020002
  .word 0x14620022
  .word 0x00000000
  .word 0x96030004
  .word 0x28621388
  .word 0x1440001e
  .word 0x00000000
  .word 0x2861138d
  .word 0x1020001b
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
  .word 0xc7a200b0
  .word 0xc7a100b4
  .word 0xc7a000b8
  .word 0xe7a20070
  .word 0xe7a10074
  .word 0xe7a00078
  .word 0x10000059
  .word 0x00000000
  .word 0x27a40030
  .word 0x27a50080
  .word 0x0c12f72c
  .word 0x00000000
  .word 0xc7a60034
  .word 0xc7a50030
  .word 0xc7a40038
  .word 0xc7a3003c
  .word 0x4606301a
  .word 0x44801000
  .word 0x4605281e
  .word 0x4604201e
  .word 0x4603181c
  .word 0x46000044
  .word 0x00000000
  .word 0x00000000
  .word 0x46011032
  .word 0x4501000b
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x46012803
  .word 0xe7a00030
  .word 0x46013003
  .word 0xe7a00034
  .word 0x46012003
  .word 0xe7a00038
  .word 0x46011803
  .word 0xe7a0003c
  .word 0xc7a40034
  .word 0xc7ac0030
  .word 0xc7ab0038
  .word 0xc7a3003c
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
  .word 0xe7a00040
  .word 0x46081000
  .word 0xe7a00044
  .word 0x46091801
  .word 0xe7a00048
  .word 0x46081001
  .word 0xe7a00050
  .word 0x46072800
  .word 0x46000801
  .word 0xe7a00054
  .word 0x460a2000
  .word 0xe7a00058
  .word 0x46091800
  .word 0xe7a00060
  .word 0x460a2001
  .word 0xe7a00064
  .word 0x46063800
  .word 0x46000801
  .word 0xe7a00068
  .word 0xafa00070
  .word 0xafa00074
  .word 0xafa00078
  .word 0x24020003
  .word 0xafa2004c
  .word 0xc7a200b0
  .word 0xc7a100b4
  .word 0xc7a000b8
  .word 0xe7a20070
  .word 0xe7a10074
  .word 0xe7a00078
  .word 0x8e040008
  .word 0x27a50040
  .word 0x0c0d3fa0
  .word 0x00000000
  .word 0x8e040008
  .word 0x0c0d3f4c
  .word 0x00000000
  .word 0x8e100010
  .word 0x1600ff60
  .word 0x00000000
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_0031DC80


void FUN_0031dc80(int *param_1,u32 param_2)
{
    int current;

    for (current = *param_1; current != 0; current = *(int*)(current + 0x10)) {
        if (*(int*)(current + 8) != 0) {
            FUN_0034fd70_u32(*(u32*)(current + 8), param_2);
        }
    }
}

// FUN_0031DCE0


void FUN_0031dce0(u32 *param_1)



{

  int *piVar1;

  

  for (piVar1 = (int *)*param_1; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[4]) {

    if ((piVar1[2] != 0) && ((*(u32 *)(*piVar1 + 0xc) & 1) != 0)) {

      FUN_0034fd10(piVar1[2]);
    }


  }

  return;

}

// FUN_0031DD40


void FUN_0031dd40(int *param_1,u32 *param_2)
{
    int current;

    for (current = *param_1; current != 0; current = *(int*)(current + 0x10)) {
        if (*(int*)(current + 8) != 0) {
            FUN_0034ff90(*(u32*)(current + 8), param_2);
        }
    }
}




// FUN_0031DDA0


void FUN_0031dda0(int *param_1,float *param_2)
{
    int current;
    float average;

    average = (param_2[0] + param_2[1] + param_2[2]) / 3.0f;
    for (current = *param_1; current != 0; current = *(int*)(current + 0x10)) {
        if (*(int*)(current + 8) != 0) {
            FUN_0034ff70(average,(u8 (*)[16])*(u32*)(current + 8));
        }
    }
}

// FUN_0031DE30


void FUN_0031de30(u32 *param_1)
{
    int *current;
    int *next;

    FUN_0031df80(param_1);
    current = (int*)*param_1;
    while (current != 0) {
        next = (int*)current[4];
        *(int*)(*current + 8) = *(int*)(*current + 8) - 1;
        if (*(int*)(*current + 8) == 0) {
            ((void (*)())DAT_0096017c_abs[0])(*current);
        }
        ((void (*)())DAT_0096017c_abs[0])(current);
        current = next;
    }
    *param_1 = 0;
}




// FUN_0031DED0


void FUN_0031ded0(u32 *param_1)
{
    int *current;
    u32 value;

    for (current = (int*)*param_1; current != 0; current = (int*)current[4]) {
        if (current[2] != 0) {
            if (current[2] == *(int*)(*current + 4)) {
                *(u32*)(*current + 4) = 0;
            }
            FUN_0034fcf0_u32(current[2]);
        }
        if (((u32*)*current)[1] == 0) {
            value = FUN_0034fcd0_u32(*(u32*)*current);
            current[2] = value;
            *(u32*)(*current + 4) = value;
        } else {
            value = FUN_0034fd50((u64*)((u32*)*current)[1]);
            current[2] = value;
        }
    }
}

// FUN_0031DF80


void FUN_0031df80(u32 *param_1)



{

  int *piVar1;

  

  for (piVar1 = (int *)*param_1; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[4]) {

    if (piVar1[2] != 0) {

      if (piVar1[2] == *(int *)(*piVar1 + 4)) {

        *(u32 *)(*piVar1 + 4) = 0;

      }

      FUN_0034fcf0_i(piVar1[2]);

      piVar1[2] = 0;

    }

  }

  return;

}




// FUN_0031DFF0


u32 FUN_0031dff0(u32 param_1,u32 param_2)
{
    u32 (**allocator)();
    u32 block;
    u32 wrapper;

    allocator = (u32 (**)())DAT_00960178_abs;
    block = (*allocator)(param_2 + 0x10,0x40000);
    *(u32*)block = block + 0x10;
    *(u32*)(block + 4) = 1;
    FUN_00521250(*(u32*)block,param_1,param_2);
    wrapper = (*allocator)(8,0x40000);
    FUN_00521408(wrapper,0,8);
    *(u32*)wrapper = block;
    return wrapper;
}




// FUN_0031E0B0


u32 FUN_0031e0b0(int *param_1)



{

  int iVar1;

  u32 uVar2;

  

  uVar2 = (*DAT_00960178_abs)(8,0x40000);

  FUN_00521408((void *)uVar2,0,8);

  iVar1 = *param_1;

  *(int *)uVar2 = iVar1;

  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;

  return uVar2;

}




// FUN_0031E130


void FUN_0031e130(int *param_1)
{
    if (param_1[1] != 0) {
        FUN_001ee1d0(param_1[1]);
    }
    *(int*)(*param_1 + 4) = *(int*)(*param_1 + 4) - 1;
    if (*(int*)(*param_1 + 4) == 0) {
        ((void (*)())DAT_0096017c_abs[0])(*param_1);
    }
    ((void (*)())DAT_0096017c_abs[0])(param_1);
}




// FUN_0031E1B0


void FUN_0031e1b0(int param_1)



{

  if (*(int *)(param_1 + 4) != 0) {

    FUN_001eda90(*(int *)(param_1 + 4));

  }

  return;

}




// FUN_0031E1E0


void FUN_0031e1e0(int param_1)



{

  if (*(int *)(param_1 + 4) != 0) {

    FUN_001eded0(*(int *)(param_1 + 4));

  }

  return;

}




// FUN_0031E210


void FUN_0031e210(int param_1)



{

  if (*(int *)(param_1 + 4) != 0) {

    FUN_001ee220(*(int *)(param_1 + 4));

  }

  return;

}




// FUN_0031E240


void FUN_0031e240(int param_1)



{

  if (*(int *)(param_1 + 4) != 0) {

    FUN_001ee230(*(int *)(param_1 + 4));

  }

  return;

}




// FUN_0031E270


void FUN_0031e270(int param_1,u64 param_2)



{

  u64 uVar1;

  u32 uVar2;

  

  uVar1 = FUN_0031e300_wide((u32 *)param_1);

  uVar2 = FUN_001eda00_u32(uVar1,param_2);

  *(u32 *)(param_1 + 4) = uVar2;

  return;

}




// FUN_0031E2C0


void FUN_0031e2c0(int param_1)



{

  if (*(int *)(param_1 + 4) != 0) {

    FUN_001ee1d0(*(int *)(param_1 + 4));

    *(u32 *)(param_1 + 4) = 0;

  }

  return;

}




// FUN_0031E300


int FUN_0031e300(u32 *param_1)



{

  return *(u32 *)*param_1;

}




// FUN_0031E310


int mdlFileSelectCacheSlot(u32 param_1,u32 param_2)
{
  u32 scanIndex;
  u32 scanValue;
  u32 key1;
  u32 key2;
  u8 *table;
  s32 bestIndex;
  u32 bestValue;
  u32 candidateValue;
  u32 candidateIndex;
  u8 *candidateTable;
  u32 currentValue;
  u32 offset;

  scanIndex = 0;
  key1 = (u16)param_1;
  key2 = (u16)param_2;
  table = DAT_00957220_abs;
  for (; (scanValue = scanIndex & 0xffff) < 3; scanIndex = (scanIndex + 1) & 0xffff) {
    if (key1 == *(u16 *)(table + (u16)scanIndex * 8 + 4) &&
        key2 == *(u16 *)(table + (u16)scanIndex * 8 + 6)) {
      return scanValue + 3;
    }
  }

  bestIndex = -1;
  bestValue = bestIndex;
  candidateIndex = 0;
  candidateTable = DAT_00957220_abs;
  for (; (candidateValue = candidateIndex & 0xffff) < 3; candidateIndex = (candidateIndex + 1) & 0xffff) {
    currentValue = *(u32 *)(candidateTable + (u16)candidateIndex * 8);
    if (currentValue < bestValue) {
      bestValue = currentValue;
      bestIndex = candidateValue;
    }
  }

  offset = bestIndex * 8;
  DAT_007ce528++;
  *(u32 *)(DAT_00957220_abs + offset) = DAT_007ce528;
  *(u16 *)(DAT_00957224_abs + offset) = param_1;
  *(u16 *)(DAT_00957226_abs + offset) = param_2;
  return bestIndex + 3;
}




// FUN_0031E420


u64 FUN_0031e420(u16 param_1,u32 param_2)



{

  u64 uVar1;

  long lVar2;
  s32 index;

  

  if (param_1 != 1) {

    uVar1 = 0;

  }

  else {
    index = (u16)param_2;
    if (index < 2) {
      uVar1 = 0;
    }
    else if (DAT_0069ba18_abs[index] == -1) {

      uVar1 = 0;

    }

    else {

      lVar2 = FUN_0017d800();

      if (lVar2 != 0) {

        uVar1 = 1;

      }

      else {

        uVar1 = FUN_0016f190(DAT_0069ba18_abs[index]);

      }

    }

  }

  return uVar1;

}




// FUN_0031E4D0






#ifndef PC_BUILD
asm void FUN_0031e4d0(int *param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdfea0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x3250ffff
  .word 0x24030002
  .word 0x16030022
  .word 0x00000000
  .word 0x3224ffff
  .word 0x240300e7
  .word 0x1083001b
  .word 0x00000000
  .word 0x240300e6
  .word 0x10830018
  .word 0x00000000
  .word 0x240300e5
  .word 0x10830015
  .word 0x00000000
  .word 0x240300e4
  .word 0x10830012
  .word 0x00000000
  .word 0x240300e3
  .word 0x1083000f
  .word 0x00000000
  .word 0x240300e2
  .word 0x1083000c
  .word 0x00000000
  .word 0x24030118
  .word 0x10830009
  .word 0x00000000
  .word 0x24030117
  .word 0x10830006
  .word 0x00000000
  .word 0x24030116
  .word 0x10830003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x24030001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x146000c6
  .word 0x00000000
  .word 0x8e640000
  .word 0x10800005
  .word 0x00000000
  .word 0x9483000e
  .word 0x30630001
  .word 0x146000bf
  .word 0x00000000
  .word 0x24030002
  .word 0x1203008f
  .word 0x00000000
  .word 0x24030001
  .word 0x12030003
  .word 0x00000000
  .word 0x100000b7
  .word 0x00000000
  .word 0x14800013
  .word 0x00000000
  .word 0x24040020
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0280202d
  .word 0x0000282d
  .word 0x24060020
  .word 0x0c148502
  .word 0x00000000
  .word 0x24020001
  .word 0xae820004
  .word 0xa6920008
  .word 0xa691000a
  .word 0xa682000c
  .word 0xae740000
  .word 0x3231ffff
  .word 0x24020001
  .word 0x16220020
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x1040000b
  .word 0x00000000
  .word 0x27a40060
  .word 0x3c05006a
  .word 0x24a5ba50
  .word 0x3c06007d
  .word 0x24c6ca10
  .word 0x24070001
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000058
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b358
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x304800ff
  .word 0x27a40060
  .word 0x3c05006a
  .word 0x24a5ba70
  .word 0x3c06007d
  .word 0x24c6ca10
  .word 0x24070001
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000047
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x1040000e
  .word 0x00000000
  .word 0x24020009
  .word 0x1622000b
  .word 0x00000000
  .word 0x27a40060
  .word 0x3c05006a
  .word 0x24a5ba50
  .word 0x3c06007d
  .word 0x24c6ca10
  .word 0x0220382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000036
  .word 0x00000000
  .word 0x24020001
  .word 0x12020004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000001c
  .word 0x00000000
  .word 0x2a210002
  .word 0x10200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000016
  .word 0x00000000
  .word 0x00111880
  .word 0x3c02006a
  .word 0x2442ba18
  .word 0x00438021
  .word 0x8e030000
  .word 0x2402ffff
  .word 0x14620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000b
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x8e040000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440000b
  .word 0x00000000
  .word 0x27a40060
  .word 0x3c05006a
  .word 0x24a5ba90
  .word 0x3c06007d
  .word 0x24c6ca10
  .word 0x0220382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x27a40060
  .word 0x3c05006a
  .word 0x24a5bab0
  .word 0x3c06007d
  .word 0x24c6ca10
  .word 0x0220382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a40060
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0x8e630000
  .word 0xac620010
  .word 0x8e640000
  .word 0x9483000e
  .word 0x34630002
  .word 0xa483000e
  .word 0x1000002e
  .word 0x00000000
  .word 0x14800014
  .word 0x00000000
  .word 0x24040020
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040802d
  .word 0x0200202d
  .word 0x0000282d
  .word 0x24060020
  .word 0x0c148502
  .word 0x00000000
  .word 0x24020001
  .word 0xae020004
  .word 0xa6120008
  .word 0xa611000a
  .word 0x24020002
  .word 0xa602000c
  .word 0xae700000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0c0c78c4
  .word 0x00000000
  .word 0x8e630000
  .word 0xac620000
  .word 0x3227ffff
  .word 0x27a40060
  .word 0x3c05006a
  .word 0x24a5bad0
  .word 0x3c06007d
  .word 0x24c6ca10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a40060
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0x8e630000
  .word 0xac620010
  .word 0x8e640000
  .word 0x9483000e
  .word 0x34630002
  .word 0xa483000e
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0160
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */




// FUN_0031E8D0


#ifndef PC_BUILD
asm void FUN_0031e8d0(int *param_1,u32 param_2,u32 param_3,int param_4,u32 param_5)
{
  .set noreorder
  .word 0x27bdfe70
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x00e0802d
  .word 0x0100a82d
  .word 0x3245ffff
  .word 0x24030002
  .word 0x14a30022
  .word 0x00000000
  .word 0x3224ffff
  .word 0x240300e7
  .word 0x1083001b
  .word 0x00000000
  .word 0x240300e6
  .word 0x10830018
  .word 0x00000000
  .word 0x240300e5
  .word 0x10830015
  .word 0x00000000
  .word 0x240300e4
  .word 0x10830012
  .word 0x00000000
  .word 0x240300e3
  .word 0x1083000f
  .word 0x00000000
  .word 0x240300e2
  .word 0x1083000c
  .word 0x00000000
  .word 0x24030118
  .word 0x10830009
  .word 0x00000000
  .word 0x24030117
  .word 0x10830006
  .word 0x00000000
  .word 0x24030116
  .word 0x10830003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x24030001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x14600084
  .word 0x00000000
  .word 0x8e640000
  .word 0x10800005
  .word 0x00000000
  .word 0x9483000e
  .word 0x30630001
  .word 0x1460007d
  .word 0x00000000
  .word 0x24030002
  .word 0x10a30031
  .word 0x00000000
  .word 0x24030001
  .word 0x10a30003
  .word 0x00000000
  .word 0x10000075
  .word 0x00000000
  .word 0x14800013
  .word 0x00000000
  .word 0x24040020
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0280202d
  .word 0x0000282d
  .word 0x24060020
  .word 0x0c148502
  .word 0x00000000
  .word 0x24020001
  .word 0xae820004
  .word 0xa6920008
  .word 0xa691000a
  .word 0xa682000c
  .word 0xae740000
  .word 0x8e710000
  .word 0x02a0202d
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0xae220000
  .word 0x0040202d
  .word 0x0200282d
  .word 0x02a0302d
  .word 0x0c148494
  .word 0x00000000
  .word 0x8e640000
  .word 0x9483000e
  .word 0x3063fffd
  .word 0xa483000e
  .word 0x8e640000
  .word 0x9483000e
  .word 0x34630001
  .word 0xa483000e
  .word 0x1000004a
  .word 0x00000000
  .word 0x14800014
  .word 0x00000000
  .word 0x24040020
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0280202d
  .word 0x0000282d
  .word 0x24060020
  .word 0x0c148502
  .word 0x00000000
  .word 0x24020001
  .word 0xae820004
  .word 0xa6920008
  .word 0xa691000a
  .word 0x24020002
  .word 0xa682000c
  .word 0xae740000
  .word 0x8e620000
  .word 0xac400010
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0c0c78c4
  .word 0x00000000
  .word 0x8e630000
  .word 0xac620000
  .word 0x0000882d
  .word 0x10000015
  .word 0x00000000
  .word 0x27a40070
  .word 0x0200282d
  .word 0x24060100
  .word 0x0c148494
  .word 0x00000000
  .word 0x26040100
  .word 0x00111080
  .word 0x005d1821
  .word 0xac640180
  .word 0x8fa2016c
  .word 0xac620170
  .word 0x2443003f
  .word 0x00031183
  .word 0x04610003
  .word 0x00000000
  .word 0x2462003f
  .word 0x00021183
  .word 0x00021180
  .word 0x00828021
  .word 0x26310001
  .word 0x2a220003
  .word 0x1440ffea
  .word 0x00000000
  .word 0x8e620000
  .word 0x84440000
  .word 0x8fa50180
  .word 0x8fa60170
  .word 0x8fa70184
  .word 0x8fa80174
  .word 0x8fa90188
  .word 0x8faa0178
  .word 0x0c0426b8
  .word 0x00000000
  .word 0x8e640000
  .word 0x9483000e
  .word 0x34630008
  .word 0xa483000e
  .word 0x8e640000
  .word 0x9483000e
  .word 0x34630002
  .word 0xa483000e
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0190
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */




/* DUMMYDUMB session 2026-10-20: two changes, measured together.
 * 1) #pragma opt_lifetimes for this function only (mwcc's lifetime analysis):
 *    90 -> 88 bytes.
 * 2) calling the global function pointer through its _abs alias
 *    (DAT_00960178_abs - the same slot at 0x960178 - declared as an array so
 *    mwcc materialises its address absolutely instead of gp-relative). On its own
 *    that is much worse (147); it only helps together with the pragma:
 *    88 -> 82 bytes.
 * What remains is a block-ordering difference (retail stores the loaded pair
 * before re-fetching) plus a register-class choice, so the function is still
 * NONMATCHING. Not a match claim - recorded because both changes are strict
 * improvements and the _abs spelling is the repo's established idiom for
 * absolute global addressing (cf. btlEffect.c's (*DAT_00960178_u32_abs)).
 */
#pragma opt_lifetimes on
// FUN_0031EBE0


#ifndef PC_BUILD
asm u32 FUN_0031ebe0(int *param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c850000
  .word 0x14a00004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000094
  .word 0x00000000
  .word 0x94a4000e
  .word 0x30820001
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x1000008d
  .word 0x00000000
  .word 0x30820002
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000087
  .word 0x00000000
  .word 0x94a30008
  .word 0x24020002
  .word 0x1062002e
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000007b
  .word 0x00000000
  .word 0x8ca40010
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x10400078
  .word 0x00000000
  .word 0x8e110000
  .word 0x8e220010
  .word 0x8c520118
  .word 0x8c530110
  .word 0x0240202d
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0xae220000
  .word 0x0040202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0c148494
  .word 0x00000000
  .word 0x8e020000
  .word 0x8c440010
  .word 0x10800005
  .word 0x00000000
  .word 0x0c0403b0
  .word 0x00000000
  .word 0x8e020000
  .word 0xac400010
  .word 0x8e030000
  .word 0x9462000e
  .word 0x34420001
  .word 0xa462000e
  .word 0x8e030000
  .word 0x9462000e
  .word 0x3042fffd
  .word 0xa462000e
  .word 0x24020001
  .word 0x10000056
  .word 0x00000000
  .word 0x30820008
  .word 0x1440002d
  .word 0x00000000
  .word 0x8ca40010
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000004b
  .word 0x00000000
  .word 0x8e020000
  .word 0x8c440010
  .word 0x0000282d
  .word 0x27a6005c
  .word 0x0c040840
  .word 0x00000000
  .word 0x0040902d
  .word 0x8e020000
  .word 0x8c440010
  .word 0x24050001
  .word 0x27a60058
  .word 0x0c040840
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e020000
  .word 0x8c440010
  .word 0x24050002
  .word 0x27a60054
  .word 0x0c040840
  .word 0x00000000
  .word 0x8e030000
  .word 0x84640000
  .word 0x0240282d
  .word 0x8fa6005c
  .word 0x0220382d
  .word 0x8fa80058
  .word 0x0040482d
  .word 0x8faa0054
  .word 0x0c0426b8
  .word 0x00000000
  .word 0x8e030000
  .word 0x9462000e
  .word 0x34420008
  .word 0xa462000e
  .word 0x10000026
  .word 0x00000000
  .word 0x84a40000
  .word 0x0c04277c
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000001f
  .word 0x00000000
  .word 0x8e020000
  .word 0x8c440010
  .word 0x10800005
  .word 0x00000000
  .word 0x0c0403b0
  .word 0x00000000
  .word 0x8e020000
  .word 0xac400010
  .word 0x8e030000
  .word 0x9462000e
  .word 0x34420001
  .word 0xa462000e
  .word 0x8e030000
  .word 0x9462000e
  .word 0x3042fffd
  .word 0xa462000e
  .word 0x8e030000
  .word 0x9462000e
  .word 0x34420004
  .word 0xa462000e
  .word 0x8e030000
  .word 0x9462000e
  .word 0x3042fff7
  .word 0xa462000e
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x10000002
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
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_lifetimes reset




// FUN_0031EE80


void FUN_0031ee80(int *param_1,int *param_2)



{

  int iVar1;

  

  iVar1 = *param_2;

  if (iVar1 != 0) {

    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;

    *param_1 = iVar1;

  }

  return;

}




// FUN_0031EEB0


void FUN_0031eeb0(u32 *param_1)



{

  *param_1 = 0;

  *(short *)(param_1 + 3) = -1;

  *(short *)(param_1 + 7) = -1;

  *(short *)((int)param_1 + 0x1e) = -1;

  *(u16 *)((int)param_1 + 6) = *(u16 *)((int)param_1 + 6) | 0x20;

  return;

}




// FUN_0031EEE0
void FUN_0031eee0(int *param_1)
{
  int *piVar1;
  int iVar2;

  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[1] - 1;
    piVar1[1] = iVar2;
    if (iVar2 == 0) {
      switch ((u16)piVar1[3]) {
      case 1:
        if (*piVar1 != 0) {
          ((void (*)())DAT_0096017c_abs[0])(*piVar1);
        }
        break;
      }
      ((void (*)())DAT_0096017c_abs[0])(piVar1);
    }
    *param_1 = 0;
  }
  return;
}




// FUN_0031EF80


#ifndef PC_BUILD
asm void FUN_0031ef80(int *param_1,short param_2,short param_3)
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
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x94830006
  .word 0x30630010
  .word 0x10600179
  .word 0x00000000
  .word 0x8e650000
  .word 0x10a00176
  .word 0x00000000
  .word 0x94a3000e
  .word 0x30630001
  .word 0x10600172
  .word 0x00000000
  .word 0x94a3000c
  .word 0x24040002
  .word 0x106400b5
  .word 0x00000000
  .word 0x24040001
  .word 0x10640003
  .word 0x00000000
  .word 0x10000169
  .word 0x00000000
  .word 0x94a30008
  .word 0x1464005c
  .word 0x00000000
  .word 0x94a3000a
  .word 0x14640017
  .word 0x00000000
  .word 0x0c05b358
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x304400ff
  .word 0x00041880
  .word 0x00641821
  .word 0x000318c0
  .word 0x00641823
  .word 0x000320c0
  .word 0x3c030069
  .word 0x2463f0f0
  .word 0x00642821
  .word 0x0012243c
  .word 0x0004243f
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x0065a021
  .word 0x10000043
  .word 0x00000000
  .word 0x28610002
  .word 0x10200004
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000017
  .word 0x00000000
  .word 0x00032080
  .word 0x3c03006a
  .word 0x2463ba18
  .word 0x00648021
  .word 0x8e040000
  .word 0x2403ffff
  .word 0x14830004
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000c
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24030001
  .word 0x10000005
  .word 0x00000000
  .word 0x8e040000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x0040182d
  .word 0x14600014
  .word 0x00000000
  .word 0x8e630000
  .word 0x9463000a
  .word 0x2464fffe
  .word 0x00041900
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0x00032080
  .word 0x3c030069
  .word 0x2463fab0
  .word 0x00642821
  .word 0x0012243c
  .word 0x0004243f
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x0065a021
  .word 0x10000012
  .word 0x00000000
  .word 0x8e630000
  .word 0x9463000a
  .word 0x24640007
  .word 0x00041900
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0x00032080
  .word 0x3c030069
  .word 0x2463fab0
  .word 0x00642821
  .word 0x0012243c
  .word 0x0004243f
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x0065a021
  .word 0x96630006
  .word 0x30630020
  .word 0x0003182b
  .word 0x10600031
  .word 0x00000000
  .word 0x0000802d
  .word 0x0000302d
  .word 0x2405ffff
  .word 0x10000009
  .word 0x00000000
  .word 0x02841821
  .word 0x80630000
  .word 0x10650003
  .word 0x00000000
  .word 0x26030001
  .word 0x3070ffff
  .word 0x24c30001
  .word 0x3066ffff
  .word 0x30c4ffff
  .word 0x28830003
  .word 0x1460fff5
  .word 0x00000000
  .word 0x3203ffff
  .word 0x1860001d
  .word 0x00000000
  .word 0x00121c3c
  .word 0x00031c3f
  .word 0x24020002
  .word 0x14620009
  .word 0x00000000
  .word 0x86620004
  .word 0x14430006
  .word 0x00000000
  .word 0x24040003
  .word 0x0c042940
  .word 0x00000000
  .word 0x14400010
  .word 0x00000000
  .word 0x24020003
  .word 0xa6620008
  .word 0x82830003
  .word 0x3222ffff
  .word 0x00621021
  .word 0xa662000c
  .word 0x3204ffff
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x02821821
  .word 0x80630000
  .word 0xa663000a
  .word 0x8e630000
  .word 0x8c630000
  .word 0xae630010
  .word 0x8e840004
  .word 0x2403ffff
  .word 0x10830014
  .word 0x00000000
  .word 0x3c032000
  .word 0x00831824
  .word 0x0003182b
  .word 0x38630001
  .word 0xa6630014
  .word 0x2403000b
  .word 0xa6630016
  .word 0x82840008
  .word 0x3223ffff
  .word 0x00831821
  .word 0xa663001c
  .word 0x8e830004
  .word 0x00031c03
  .word 0x30630fff
  .word 0xa6630018
  .word 0x8e830004
  .word 0xa663001a
  .word 0x10000003
  .word 0x00000000
  .word 0x2403fffe
  .word 0xa663001c
  .word 0xa6720004
  .word 0x100000ba
  .word 0x00000000
  .word 0x94a30008
  .word 0x1464008a
  .word 0x00000000
  .word 0x94a4000a
  .word 0x0c0bdb14
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x2404ffff
  .word 0x10c40082
  .word 0x00000000
  .word 0x00121c3c
  .word 0x00031c3f
  .word 0x000628c0
  .word 0x00a62823
  .word 0x000528c0
  .word 0x00a62821
  .word 0x00053080
  .word 0x3c050069
  .word 0x24a51020
  .word 0x00a63021
  .word 0x00032840
  .word 0x00a32821
  .word 0x00052880
  .word 0x00a6a021
  .word 0x96650006
  .word 0x30a50020
  .word 0x0005282b
  .word 0x10a0002e
  .word 0x00000000
  .word 0x0000802d
  .word 0x0000382d
  .word 0x10000009
  .word 0x00000000
  .word 0x02862821
  .word 0x80a50000
  .word 0x10a40003
  .word 0x00000000
  .word 0x26050001
  .word 0x30b0ffff
  .word 0x24e50001
  .word 0x30a7ffff
  .word 0x30e6ffff
  .word 0x28c50003
  .word 0x14a0fff5
  .word 0x00000000
  .word 0x3204ffff
  .word 0x1880001b
  .word 0x00000000
  .word 0x24020002
  .word 0x14620009
  .word 0x00000000
  .word 0x86620004
  .word 0x14430006
  .word 0x00000000
  .word 0x24040004
  .word 0x0c042940
  .word 0x00000000
  .word 0x14400010
  .word 0x00000000
  .word 0x24020004
  .word 0xa6620008
  .word 0x82830003
  .word 0x3222ffff
  .word 0x00621021
  .word 0xa662000c
  .word 0x3204ffff
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x02821021
  .word 0x80420000
  .word 0xa662000a
  .word 0x0c0be204
  .word 0x00000000
  .word 0xae620010
  .word 0x8e840004
  .word 0x2403ffff
  .word 0x10830039
  .word 0x00000000
  .word 0x3c032000
  .word 0x00831824
  .word 0x10600004
  .word 0x00000000
  .word 0xa6600014
  .word 0x1000000f
  .word 0x00000000
  .word 0x3c034000
  .word 0x00831824
  .word 0x10600005
  .word 0x00000000
  .word 0x24030001
  .word 0xa6630014
  .word 0x10000007
  .word 0x00000000
  .word 0x30832000
  .word 0x10600004
  .word 0x00000000
  .word 0x8e630000
  .word 0x8c630000
  .word 0xa6630014
  .word 0x8e630000
  .word 0x8c640000
  .word 0x24030005
  .word 0x10830011
  .word 0x00000000
  .word 0x24030004
  .word 0x1083000a
  .word 0x00000000
  .word 0x24030003
  .word 0x10830003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x24030001
  .word 0xa6630016
  .word 0x10000007
  .word 0x00000000
  .word 0x24030002
  .word 0xa6630016
  .word 0x10000003
  .word 0x00000000
  .word 0x24030003
  .word 0xa6630016
  .word 0x82840008
  .word 0x3223ffff
  .word 0x00831821
  .word 0xa663001c
  .word 0x8e830004
  .word 0x00031c03
  .word 0x30630fff
  .word 0xa6630018
  .word 0x8e830004
  .word 0xa663001a
  .word 0x10000003
  .word 0x00000000
  .word 0x2403fffe
  .word 0xa663001c
  .word 0xa6720004
  .word 0x1000002e
  .word 0x00000000
  .word 0x0012843c
  .word 0x0010843f
  .word 0x24030004
  .word 0x12030004
  .word 0x00000000
  .word 0x24030005
  .word 0x16030026
  .word 0x00000000
  .word 0x8e620000
  .word 0x84440000
  .word 0x0c04277c
  .word 0x00000000
  .word 0x10400020
  .word 0x00000000
  .word 0x8e630000
  .word 0x8c630000
  .word 0xa6630014
  .word 0xa671001c
  .word 0xa6600018
  .word 0x2603fffc
  .word 0xa663001a
  .word 0x8e630000
  .word 0x8c640000
  .word 0x24030005
  .word 0x10830011
  .word 0x00000000
  .word 0x24030004
  .word 0x1083000a
  .word 0x00000000
  .word 0x24030003
  .word 0x10830003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x24030001
  .word 0xa6630016
  .word 0x10000007
  .word 0x00000000
  .word 0x24030002
  .word 0xa6630016
  .word 0x10000003
  .word 0x00000000
  .word 0x24030003
  .word 0xa6630016
  .word 0xa6720004
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

// FUN_0031F5C0
void FUN_0031f5c0(int *param_1)
{
  typedef struct {
    u8 pad0[8];
    s16 field08;
    s16 field0a;
    s16 field0c;
    u8 pad0e[2];
    s32 field10;
    s16 field14;
    s16 field16;
    s16 field18;
    s16 field1a;
    s16 field1c;
    s16 field1e;
  } MdlFrame;
  MdlFrame *frame;
  volatile /* Removing this qualifier loses FUN_0031f5c0 (MATCH nd0 -> MISMATCH nd8, size 272 -> 272) - measured W170. */ MdlFrame *vframe;
  s16 arg0;
  s16 arg1;
  s16 arg2;
  s16 arg3;

  frame = (MdlFrame *)param_1;
  vframe = frame;
  FUN_0031ebe0(param_1);

  if ((*param_1 != 0) && ((*(u16 *)(*param_1 + 0xe) & 1) != 0)) {
    if (frame->field0c >= 0) {
      if (frame->field0c == 0) {
        FUN_0010a240(frame->field08,frame->field10,frame->field0a);
        frame->field0c = -1;
      }
      else {
        frame->field0c -= 1;
      }
    }

    if (frame->field1c >= 0) {
      if (frame->field1c == 0) {
        arg1 = vframe->field16;
        arg2 = vframe->field18;
        arg3 = vframe->field1a;
        arg0 = vframe->field14;
        FUN_0010a4e0(arg0,arg1,arg2,arg3);
        frame->field1e = frame->field14;
        frame->field1c = -1;
      }
      else {
        frame->field1c -= 1;
      }
    }
    else {
      if (frame->field1c == -2) {
        if (frame->field1e >= 0) {
          FUN_0010a0e0(frame->field1e,frame->field16);
          frame->field1e = -1;
        }
        frame->field1c = -1;
      }
    }
  }
}




// FUN_0031F6D0


void FUN_0031f6d0(u32 *param_1,u16 param_2,u16 param_3,u16 param_4)
{
  u16 *puVar1;
  u16 uVar2;
  puVar1 = (u16 *)*param_1;
  if (((puVar1 != (u16 *)0x0) && ((puVar1[7] & 1) != 0)) && ((puVar1[7] & 4) != 0)) {
    FUN_0010a4e0_model((s16)*puVar1,(s16)param_2,(s16)param_3,(s16)param_4);
  }
}




// FUN_0031F740
static u32 FUN_0031f740(int *param_2,float param_1)
{
  int high;
  int low;
  int stride;
  u8 *data;
  int mid;

  low = 0;
  high = *param_2 - 1;
  stride = param_2[2];
  data = (u8 *)param_2[3];
  do {
    mid = (low + high + 1) >> 1;
    if (param_1 < *(float *)(data + stride * mid)) {
      high = --mid;
    }
    else {
      low = mid;
    }
  } while (low < high);
  return (u32)mid;
}




// FUN_0031F7A0
u8 * FUN_0031f7a0(float param_1,int *param_2)
{
  float *key;
  float fraction;
  float start;
  float output;
  float difference;
  int high;
  int low;
  int stride;
  u8 *data;
  int mid;
  u32 address;

  data = (u8 *)param_2[3];
  low = 0;
  high = *param_2 - 1;
  stride = param_2[2];
  do {
    mid = (low + high + 1) >> 1;
    if (param_1 < *(float *)(data + stride * mid)) {
      high = --mid;
    }
    else {
      low = mid;
    }
  } while (low < high);
  if ((u32)mid >= (u32)(*param_2 - 1)) {
    address = mid * 8;
    address += (u32)data;
    *(float *)&DAT_007ce534 = *(float *)(address + 4);
  }
  else {
    key = (float *)((u32)(mid * 8) + (u32)data);
    start = key[0];
    output = key[1];
    fraction = param_1 - start;
    fraction /= key[2] - start;
    difference = key[3] - output;
    *(float *)&DAT_007ce534 = difference * fraction + output + 0.0f;
  }
  *(float *)&DAT_007ce530 = param_1;
  return (u8 *)&DAT_007ce538;
}




// SibMdl negatives: stackSpill volatile-cast removal nd14 -> nd43 (336/352); fraction-first interpolation in either branch nd14 -> nd16; direct final multiply operand swap and pointer argument cast stayed nd14; naming final difference wins nd14 -> nd12.
// W419 inline address helper fixes both direct-load addu orientations: nd12 -> nd8 (340/352); residual call setup order remains.
/* W419 rejected forms: stackSpill nd43/object336/window352/rate0.127976; fraction-first nd16/object340/window352/rate0.047059; final multiply/pointer cast nd14/object340/window352/rate0.041176; naming variant nd12/object340/window352/rate0.035294. */
// FUN_0031F870


u8 * FUN_0031f870(float param_1,int *param_2,float param_3,int *param_4,float param_5)
{
  u32 uVar2;
  float saved;
  float firstBlend;
  float secondBlend;
  float stackSpill[4];
  float *key;
  float fraction;
  float start;
  float output;
  float difference;
  int data1;
  int data2;

  data1 = param_2[3];
  uVar2 = FUN_0031f740(param_2,param_1);
  if (uVar2 >= *param_2 - 1U) {
    *(float *)&DAT_007ce534 =
        *(float *)((u8 *)(uintptr_t)MdlFile_AddOffsetFirst(
            (uintptr_t)(uVar2 * 8), (uintptr_t)data1) + 4);
  }
  else {
    key = (float *)(data1 + uVar2 * 8);
    start = key[0];
    output = key[1];
    fraction = param_1 - start;
    fraction /= key[2] - start;
    difference = key[3] - output;
    *(float *)&DAT_007ce534 = difference * fraction + output + 0.0f;
  }
  *(float *)&DAT_007ce530 = param_1;
  saved = *(float *)&DAT_007ce534;
  *(volatile float *)&stackSpill[2] = param_1;
  *(volatile float *)&stackSpill[3] = saved;
  data2 = param_4[3];
  uVar2 = FUN_0031f740(param_4,param_3);
  if (uVar2 >= *param_4 - 1U) {
    *(float *)&DAT_007ce534 =
        *(float *)((u8 *)(uintptr_t)MdlFile_AddOffsetFirst(
            (uintptr_t)(uVar2 * 8), (uintptr_t)data2) + 4);
  }
  else {
    key = (float *)(data2 + uVar2 * 8);
    start = key[0];
    output = key[1];
    fraction = param_3 - start;
    fraction /= key[2] - start;
    difference = key[3] - output;
    *(float *)&DAT_007ce534 = difference * fraction + output + 0.0f;
  }
  *(float *)&DAT_007ce530 = param_3;
  saved = *(float *)&DAT_007ce534;
  *(volatile float *)&stackSpill[0] = param_3;
  *(volatile float *)&stackSpill[1] = saved;
  firstBlend = *(volatile float *)&stackSpill[3];
  secondBlend = *(volatile float *)&stackSpill[1];
  difference = secondBlend - firstBlend;
  *(float *)&DAT_007ce53c =
      difference * param_5 + firstBlend + 0.0f;
  return (u8 *)&DAT_007ce538;
}




// SibMdl negatives: fraction-first interpolation nd112 -> nd114; removing address local nd112 -> nd113; alpha-only after global-base nd89 -> nd89; pointer-style/base-load nd40 -> nd41; volatile global-address cast stayed nd40. Global-base plus ordered load reached nd89 (276/288), then ordered volatile output load reached nd40.
// FUN_0031F9D0






#ifndef PC_BUILD
asm void FUN_0031f9d0(float param_1,int *param_2,float param_3,int *param_4)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x0080502d
  .word 0x00a0482d
  .word 0x8c88000c
  .word 0x0c0c7dd0
  .word 0x00000000
  .word 0x8d430000
  .word 0x2463ffff
  .word 0x0043182b
  .word 0x14600007
  .word 0x00000000
  .word 0x000210c0
  .word 0x00481021
  .word 0xc4400004
  .word 0xe780b844
  .word 0x10000010
  .word 0x00000000
  .word 0x000210c0
  .word 0x01021021
  .word 0xc4420000
  .word 0xc4430004
  .word 0x46026041
  .word 0xc4400008
  .word 0x46020001
  .word 0x46000883
  .word 0xc440000c
  .word 0x46030041
  .word 0x44800000
  .word 0x00000000
  .word 0x46030018
  .word 0x4602081c
  .word 0xe780b844
  .word 0xe78cb840
  .word 0x2782b840
  .word 0x91230003
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
  .word 0x3c03437f
  .word 0x44830000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46010001
  .word 0xc4420004
  .word 0x46020041
  .word 0x44800000
  .word 0x00000000
  .word 0x46020018
  .word 0x460d081c
  .word 0xe4400004
  .word 0xdfbf0000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
static inline u8 mdlFileToU8(f32 value)
{
  return (u8)value;
}

/* W409 measured FUN_0031faf0: NONMATCHING 204/224 nd74 -> MATCH 216/224 nd0. */
// FUN_0031FAF0
void FUN_0031faf0(f32 *param_1,u32 param_2)
{
  u32 uVar1;
  float fVar2;
  u8 rgba[4];
  u32 alpha;
  uVar1 = FUN_001a6400_ptr(param_2,DAT_0069baf0_abs);

  fVar2 = (1.0f - param_1[1]) * 255.0f;

  alpha = mdlFileToU8(fVar2);
  rgba[2] = (u8)uVar1;
  rgba[1] = (u8)((u32)uVar1 >> 8);
  rgba[0] = (u8)((u32)uVar1 >> 0x10);
  rgba[3] = (u8)alpha;

  FUN_001b5ae0(param_2,rgba);
  return;
}

// FUN_0031FBD0


static u32 * FUN_0031fbd0(int *param_2,float param_1)
{
  float *key;
  float fraction;
  float start;
  float output;
  float difference;
  int high;
  int low;
  int stride;
  u8 *data;
  int mid;
  u32 address;

  data = (u8 *)param_2[3];
  low = 0;
  high = *param_2 - 1;
  stride = param_2[2];
  do {
    mid = (low + high + 1) >> 1;
    if (param_1 < *(float *)(data + stride * mid)) {
      high = --mid;
    }
    else {
      low = mid;
    }
  } while (low < high);
  if ((u32)mid >= (u32)(*param_2 - 1)) {
    address = mid * 0x10;
    address += (u32)data;
    *(float *)(DAT_00957240_abs + 4) = *(float *)(address + 4);
    *(float *)(DAT_00957240_abs + 8) = *(float *)(address + 8);
    *(float *)(DAT_00957240_abs + 12) = *(float *)(address + 0xc);
  }
  else {
    key = (float *)((u32)(mid * 0x10) + (u32)data);
    start = key[0];
    fraction = param_1 - start;
    fraction /= key[4] - start;
    output = key[1];
    difference = key[5] - output;
    *(float *)(DAT_00957240_abs + 4) = fraction * difference + output;
    output = key[2];
    difference = key[6] - output;
    *(float *)(DAT_00957240_abs + 8) = fraction * difference + output;
    output = key[3];
    difference = key[7] - output;
    *(float *)(DAT_00957240_abs + 12) = fraction * difference + output;
  }
  *(float *)DAT_00957240_abs = param_1;
  return (u32 *)DAT_00957240_abs;
}

// SibMdl negatives: dummy-pointer signature nd9 -> nd125; reversed helper call cast nd8 -> nd176; explicit track/time temporaries and inline reversed-call wrapper stayed nd8; schedule-on nd8/216 -> nd122/200. Two-track/four-float signature measured nd101 -> nd8.
// W420 swapped mixed helper parameter declarations to integer-first order: FUN_0031f870 nd8 -> MATCH (340/352), FUN_0031fd00 nd8 -> MATCH (216/224), no collateral changes.
// FUN_0031FD00


u8 * FUN_0031fd00(float firstTime, int *track1, float secondTime, int *track2, float blend)
{
  struct Float4 { float x, y, z, w; } first;
  struct Float4 second;

  first = *(struct Float4 *)FUN_0031fbd0(track1, firstTime);
  second = *(struct Float4 *)FUN_0031fbd0(track2, secondTime);
  *(float *)DAT_00957254_abs = blend * (second.y - first.y) + first.y;
  *(float *)DAT_00957258_abs = blend * (second.z - first.z) + first.z;
  *(float *)DAT_0095725c_abs = blend * (second.w - first.w) + first.w;
  return DAT_00957250_abs;
}




// FUN_0031FDE0










void FUN_0031fde0(int *track, u8 *color, f32 firstTime, f32 blend)
{
  u32 *result;
  f32 red;
  f32 green;
  f32 blue;
  result = FUN_0031fbd0(track, firstTime);
  red = (f32)color[0] / 255.0f;
  green = (f32)color[1] / 255.0f;
  blue = (f32)color[2] / 255.0f;

  *(f32 *)(result + 1) =
      blend * (red - *(f32 *)(result + 1)) + *(f32 *)(result + 1) + 0.0f;
  *(f32 *)(result + 2) =
      blend * (green - *(f32 *)(result + 2)) + *(f32 *)(result + 2) + 0.0f;
  *(f32 *)(result + 3) =
      blend * (blue - *(f32 *)(result + 3)) + *(f32 *)(result + 3) + 0.0f;
}




// FUN_0031ff40
void FUN_0031ff40(float *param_1, u8 *param_2)
{
  u8 *puVar1;
  puVar1 = param_2 + 4;

  puVar1[0] = (u8)(param_1[1] * 255.0f);
  puVar1[1] = (u8)(param_1[2] * 255.0f);
  puVar1[2] = (u8)(param_1[3] * 255.0f);
}




// FUN_00320060
u32 * FUN_00320060(void)
{
  return (u32 *)DAT_00957260_abs;
}




// Confirmed b210 saved-register colouring floor (W211): ours/retail s1/s0 at
// +56/+60, s0/s1 at +88/+92/+124/+156/+172, and v1/a0 at +104/+108.
// FUN_00320070
void FUN_00320070(void)
{
}




// FUN_00320080


#ifndef PC_BUILD
asm void FUN_00320080(int param_4,float param_1,int param_5,float param_2,float param_3)
{
  .set noreorder
  .word 0x27bdff60
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
  .word 0x0080a82d
  .word 0x46006586
  .word 0x00a0b82d
  .word 0x46006d46
  .word 0x46007506
  .word 0x8c910050
  .word 0x8ca30050
  .word 0x16230046
  .word 0x00000000
  .word 0x96300004
  .word 0x0000a02d
  .word 0x1000003f
  .word 0x00000000
  .word 0x00142900
  .word 0x3c03006a
  .word 0x2463bb10
  .word 0x00659021
  .word 0x8e43000c
  .word 0x10600037
  .word 0x00000000
  .word 0x02a52021
  .word 0x8c83000c
  .word 0x10600033
  .word 0x00000000
  .word 0x02e52821
  .word 0x8ca2000c
  .word 0x10400019
  .word 0x00000000
  .word 0x4600b306
  .word 0x4600ab46
  .word 0x4600a386
  .word 0x8e420004
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040b02d
  .word 0x0000982d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00131880
  .word 0x8e220000
  .word 0x00431021
  .word 0x02c0202d
  .word 0x8c450000
  .word 0x8e42000c
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x0270182b
  .word 0x1460fff5
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x4600b306
  .word 0x26a50040
  .word 0x4600a346
  .word 0x8e420008
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040b02d
  .word 0x0000982d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00131880
  .word 0x8e220000
  .word 0x00431021
  .word 0x02c0202d
  .word 0x8c450000
  .word 0x8e42000c
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x0270182b
  .word 0x1460fff5
  .word 0x00000000
  .word 0x26940001
  .word 0x2e830004
  .word 0x1460ffc0
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
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */




// FUN_00320230


u32 FUN_00320230(void)



{

  u32 uVar1;

  

  uVar1 = (*DAT_00960178_abs)(4,0x40000);

  FUN_00521408((void *)uVar1,0,4);

  *(u32 *)uVar1 = 0;

  return uVar1;

}




// FUN_00320290


void FUN_00320290(int param_1)



{

  int iVar2;

  int iVar1;

  u32 uVar4;

  u32 *puVar3;

  

  iVar2 = *(int *)param_1;

  while (iVar2 != 0) {

    iVar1 = *(int *)(iVar2 + 0x54);

    for (uVar4 = 0; uVar4 < 4; uVar4 = uVar4 + 1) {

      puVar3 = (u32 *)(iVar2 + uVar4 * 0x10);

      if (puVar3[3] != 0) {

        ((void (*)())DAT_0096017c_abs[0])(puVar3[3]);

        puVar3[3] = 0;

      }

      *puVar3 = 0;

      puVar3[1] = 0;

      puVar3[2] = 0;

    }

    FUN_00321010(*(u32 *)(iVar2 + 0x50));

    ((void (*)())DAT_0096017c_abs[0])(iVar2);

    iVar2 = iVar1;

  }

  ((void (*)())DAT_0096017c_abs[0])(param_1);

  return;

}




/* Removing this worsens FUN_00320810 (nd8 -> nd19) - measured W161. */
// FUN_00320380


#ifndef PC_BUILD
asm void FUN_00320380(float param_1,int *param_2)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x46006506
  .word 0x8c950000
  .word 0x1000002a
  .word 0x00000000
  .word 0x8eb00050
  .word 0x96160004
  .word 0x0000a02d
  .word 0x10000021
  .word 0x00000000
  .word 0x00142100
  .word 0x3c03006a
  .word 0x2463bb10
  .word 0x00648821
  .word 0x8e23000c
  .word 0x10600019
  .word 0x00000000
  .word 0x02a42021
  .word 0x8c83000c
  .word 0x10600015
  .word 0x00000000
  .word 0x4600a306
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040902d
  .word 0x0000982d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00131880
  .word 0x8e020000
  .word 0x00431021
  .word 0x0240202d
  .word 0x8c450000
  .word 0x8e22000c
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x0276182b
  .word 0x1460fff5
  .word 0x00000000
  .word 0x26940001
  .word 0x2e830004
  .word 0x1460ffde
  .word 0x00000000
  .word 0x8eb50054
  .word 0x16a0ffd6
  .word 0x00000000
  .word 0xdfbf0080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
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
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_003204A0


#ifndef PC_BUILD
asm void FUN_003204a0(int *param_4,float param_1,float param_2,float param_3)
{
  .set noreorder
  .word 0x27bdff60
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
  .word 0x0080a82d
  .word 0x46006586
  .word 0x46006d46
  .word 0x46007506
  .word 0x8c940000
  .word 0x10000042
  .word 0x00000000
  .word 0x8e910050
  .word 0x8ea50000
  .word 0x10000007
  .word 0x00000000
  .word 0x8ca30050
  .word 0x14710003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8ca50054
  .word 0x14a0fff9
  .word 0x00000000
  .word 0x0000282d
  .word 0x10a00009
  .word 0x00000000
  .word 0x0280202d
  .word 0x4600b306
  .word 0x4600ab46
  .word 0x4600a386
  .word 0x0c0c8020
  .word 0x00000000
  .word 0x1000002a
  .word 0x00000000
  .word 0x96370004
  .word 0x0000982d
  .word 0x10000023
  .word 0x00000000
  .word 0x00132100
  .word 0x3c03006a
  .word 0x2463bb10
  .word 0x00648021
  .word 0x8e03000c
  .word 0x1060001b
  .word 0x00000000
  .word 0x02842021
  .word 0x8c83000c
  .word 0x10600017
  .word 0x00000000
  .word 0x4600b306
  .word 0x26850040
  .word 0x4600a346
  .word 0x8e020008
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040b02d
  .word 0x0000902d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00121880
  .word 0x8e220000
  .word 0x00431021
  .word 0x02c0202d
  .word 0x8c450000
  .word 0x8e02000c
  .word 0x0040f809
  .word 0x00000000
  .word 0x26520001
  .word 0x0257182b
  .word 0x1460fff5
  .word 0x00000000
  .word 0x26730001
  .word 0x2e630004
  .word 0x1460ffdc
  .word 0x00000000
  .word 0x8e940054
  .word 0x1680ffbe
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
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */




// FUN_00320640


#ifndef PC_BUILD
asm void FUN_00320640(f32 param_1,f32 param_2,int *param_3)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0080
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
  .word 0x46006d06
  .word 0x8c950000
  .word 0x1000002c
  .word 0x00000000
  .word 0x8eb00050
  .word 0x96160004
  .word 0x0000a02d
  .word 0x10000023
  .word 0x00000000
  .word 0x00142100
  .word 0x3c03006a
  .word 0x2463bb10
  .word 0x00648821
  .word 0x8e23000c
  .word 0x1060001b
  .word 0x00000000
  .word 0x02a42021
  .word 0x8c83000c
  .word 0x10600017
  .word 0x00000000
  .word 0x4600ab06
  .word 0x26a50040
  .word 0x4600a346
  .word 0x8e220008
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040902d
  .word 0x0000982d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00131880
  .word 0x8e020000
  .word 0x00431021
  .word 0x0240202d
  .word 0x8c450000
  .word 0x8e22000c
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x0276182b
  .word 0x1460fff5
  .word 0x00000000
  .word 0x26940001
  .word 0x2e830004
  .word 0x1460ffdc
  .word 0x00000000
  .word 0x8eb50054
  .word 0x16a0ffd4
  .word 0x00000000
  .word 0xdfbf0080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
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
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */




// FUN_00320770


void FUN_00320770(int *param_1)



{

  u8 uVar0;

  u8 uVar1;

  u8 uVar2;

  u8 uVar3;

  u32 uVar4;

  int *piVar5;

  int iVar6;

  int iVar8;

  u32 uVar7;

  f32 fVar9;

  f32 fVar11;
  f32 fVar10;

  

  iVar8 = *param_1;
  for (; iVar8 != 0; iVar8 = *(int *)(iVar8 + 0x54)) {

    piVar5 = *(int **)(iVar8 + 0x50);

    uVar4 = *(u16 *)(piVar5 + 1);

    for (uVar7 = 0; uVar7 < uVar4; uVar7 = uVar7 + 1) {
      iVar6 = *(int *)(*piVar5 + uVar7 * 4);
      uVar0 = *(volatile /* Removing this function's qualifier batch loses FUN_00320770 (MATCH nd0 -> MISMATCH nd14, size 152 -> 152) - measured W170. */ u8 *)(iVar8 + 0x40);
      uVar1 = *(volatile /* Removing this function's qualifier batch loses FUN_00320770 (MATCH nd0 -> MISMATCH nd14, size 152 -> 152) - measured W170. */ u8 *)(iVar8 + 0x41);
      uVar2 = *(volatile /* Removing this function's qualifier batch loses FUN_00320770 (MATCH nd0 -> MISMATCH nd14, size 152 -> 152) - measured W170. */ u8 *)(iVar8 + 0x42);
      uVar3 = *(volatile /* Removing this function's qualifier batch loses FUN_00320770 (MATCH nd0 -> MISMATCH nd14, size 152 -> 152) - measured W170. */ u8 *)(iVar8 + 0x43);
      *(u8 *)(iVar6 + 4) = uVar0;
      *(u8 *)(iVar6 + 5) = uVar1;
      *(u8 *)(iVar6 + 6) = uVar2;
      *(u8 *)(iVar6 + 7) = uVar3;
      iVar6 = *(int *)(*piVar5 + uVar7 * 4);
      fVar9 = *(volatile /* Removing this function's qualifier batch loses FUN_00320770 (MATCH nd0 -> MISMATCH nd14, size 152 -> 152) - measured W170. */ f32 *)(iVar8 + 0x44);
      fVar10 = *(volatile /* Removing this function's qualifier batch loses FUN_00320770 (MATCH nd0 -> MISMATCH nd14, size 152 -> 152) - measured W170. */ f32 *)(iVar8 + 0x48);
      fVar11 = *(volatile /* Removing this function's qualifier batch loses FUN_00320770 (MATCH nd0 -> MISMATCH nd14, size 152 -> 152) - measured W170. */ f32 *)(iVar8 + 0x4c);
      *(f32 *)(iVar6 + 0xc) = fVar9;
      *(f32 *)(iVar6 + 0x10) = fVar10;
      *(f32 *)(iVar6 + 0x14) = fVar11;
    }


  }

  return;

}




/* DUMMYDUMB session 2026-10-20: the whole body is byte-identical to retail
 * except the loop-compare result register - ours sltiu $v1,$a0,4 / bnez $v1,
 * retail sltiu $v0,$a0,4 / bnez $v0 (two words, +72 and +76). $v0 and $v1 are
 * both dead at that point ($v0 held the *0x10 shift temp, $v1 the row pointer),
 * so this is the allocator's tie-break, not a source-level defect. Swept 30
 * variants with no movement: declaration order (uVar2 first/last), counter type
 * u32/s32/int, for-init local vs function-scope, while-form, uVar2++ vs
 * uVar2 = uVar2 + 1, bound 4 > uVar2, uVar2 * 16 vs * 0x10 vs << 4, value
 * declared first, plus optimization_level 0/1/2/3 and the optimizer pragma set
 * (opt_lifetimes, opt_cse, opt_common_subs, opt_propagation, opt_dead_assignments,
 * opt_rebuildconditionals, opt_loop_invariants, no_branch_likely, schedule,
 * global_optimizer, tailcall) on/off. Everything stayed at 2 words; opt level 0
 * and 3 regress to nd43/nd21 and opt level 2 to nd6. tools/permute.py agrees:
 * 1792 compiles, best score 2, verdict "2x register allocation / scheduling".
 * Confirmed wall: register allocation tie-break. */
// FUN_00320810
#pragma optimization_level 1


#ifndef PC_BUILD
asm s32 FUN_00320810(int *param_1)
{
  .set noreorder
  .word 0x44800000
  .word 0x8c850000
  .word 0x10000013
  .word 0x00000000
  .word 0x0000202d
  .word 0x1000000c
  .word 0x00000000
  .word 0x00041100
  .word 0x00a21821
  .word 0x8c62000c
  .word 0x10400006
  .word 0x00000000
  .word 0xc4610004
  .word 0x46000836
  .word 0x45010002
  .word 0x00000000
  .word 0x46000806
  .word 0x24840001
  .word 0x2c820004
  .word 0x1440fff3
  .word 0x00000000
  .word 0x8ca50054
  .word 0x14a0ffed
  .word 0x00000000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */




#pragma optimization_level 2




// FUN_00320880


#ifndef PC_BUILD
asm u32 FUN_00320880(u64 param_1,int *param_2,int param_3,u64 param_4)
{
  .set noreorder
  .word 0x27bdfee0
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
  .word 0x27a50100
  .word 0x24060014
  .word 0x0c131494
  .word 0x00000000
  .word 0x8fa2010c
  .word 0x2c410080
  .word 0x10200005
  .word 0x00000000
  .word 0x27b00080
  .word 0x0000b02d
  .word 0x10000009
  .word 0x00000000
  .word 0x24440001
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040802d
  .word 0x24160001
  .word 0x8fa6010c
  .word 0x02a0202d
  .word 0x0200282d
  .word 0x0c131494
  .word 0x00000000
  .word 0x8fa2010c
  .word 0x02021021
  .word 0xa0400000
  .word 0x0240202d
  .word 0x0200282d
  .word 0x0c0c83dc
  .word 0x00000000
  .word 0x3044ffff
  .word 0x0c0c83ec
  .word 0x00000000
  .word 0xafa20118
  .word 0xafb0011c
  .word 0x0240202d
  .word 0x27a50118
  .word 0x0c0c8368
  .word 0x00000000
  .word 0x12c00006
  .word 0x00000000
  .word 0x0200202d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x8fb00118
  .word 0x8e920000
  .word 0x10000007
  .word 0x00000000
  .word 0x8e420050
  .word 0x14500003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8e520054
  .word 0x1640fff9
  .word 0x00000000
  .word 0x0000902d
  .word 0x16400038
  .word 0x00000000
  .word 0x24040058
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040902d
  .word 0x0240202d
  .word 0x0000282d
  .word 0x24060058
  .word 0x0c148502
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000008
  .word 0x00000000
  .word 0x00031100
  .word 0x02421021
  .word 0xac400000
  .word 0xac400004
  .word 0xac400008
  .word 0xac40000c
  .word 0x24630001
  .word 0x2c620004
  .word 0x1440fff7
  .word 0x00000000
  .word 0xae400054
  .word 0x0200202d
  .word 0x0c0c8414
  .word 0x00000000
  .word 0xae420050
  .word 0x8c420000
  .word 0x8c460000
  .word 0x90c50004
  .word 0x90c40005
  .word 0x90c30006
  .word 0x90c20007
  .word 0xa2450040
  .word 0xa2440041
  .word 0xa2430042
  .word 0xa2420043
  .word 0xc4c2000c
  .word 0xc4c10010
  .word 0xc4c00014
  .word 0xe6420044
  .word 0xe6410048
  .word 0xe640004c
  .word 0x8e820000
  .word 0x14400005
  .word 0x00000000
  .word 0xae400054
  .word 0xae920000
  .word 0x10000003
  .word 0x00000000
  .word 0xae420054
  .word 0xae920000
  .word 0x8fa40118
  .word 0x0c0c8404
  .word 0x00000000
  .word 0x3c03f0f0
  .word 0x34620083
  .word 0x12620015
  .word 0x00000000
  .word 0x34620082
  .word 0x1262000f
  .word 0x00000000
  .word 0x34620081
  .word 0x12620009
  .word 0x00000000
  .word 0x34620080
  .word 0x12620003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0240882d
  .word 0x10000008
  .word 0x00000000
  .word 0x26510010
  .word 0x10000005
  .word 0x00000000
  .word 0x26510020
  .word 0x10000002
  .word 0x00000000
  .word 0x26510030
  .word 0x8fa30100
  .word 0x8fa20108
  .word 0x00628018
  .word 0x8e22000c
  .word 0x14400014
  .word 0x00000000
  .word 0xae230000
  .word 0xc7a00104
  .word 0xe6200004
  .word 0x8fa20108
  .word 0xae220008
  .word 0x0200202d
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0xae22000c
  .word 0x02a0202d
  .word 0x0040282d
  .word 0x0200302d
  .word 0x0c131494
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0200282d
  .word 0x0c131588
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0120
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */






// FUN_00320BA0


u32 FUN_00320ba0(u32 param_1,u32 *param_2)
{
  s32 arrayCount;
  s32 dataCount;
  s32 arrayIndex;
  s32 dataIndex;
  void *userData;
  char *name;
  char *data;

  arrayCount = RpMaterialGetUserDataArrayCount();
  arrayIndex = 0;
  while (arrayIndex < arrayCount) {
    userData = (void *)RpMaterialGetUserDataArray(param_1,arrayIndex);
    name = (char *)RpUserDataArrayGetName((u32)userData);
    if (strcmp(name,(char *)&gp0xffff9d30) == 0) {
      dataCount = FUN_0048ef30((u32)userData);
      dataIndex = 0;
      while (dataIndex < dataCount) {
        if (RpUserDataArrayGetFormat((u32)userData) == 3) {
          data = (char *)FUN_0048ef80((u32)userData,dataIndex);
          if (strcmp((char *)param_2[1],data) == 0) {
            FUN_00321070((int *)*param_2,param_1);
            return 0;
          }
        }
        dataIndex++;
      }
    }
    arrayIndex++;
  }
  return param_1;
}




// FUN_00320CF0


u32 FUN_00320cf0(u32 param_1,u32 param_2)



{

  int iVar1;

  int iVar2;

  u32 lVar3;

  int iVar4;

  

  iVar1 = *(int *)((int)param_1 + 0x18);

  iVar2 = *(int *)(iVar1 + 0x24);

  iVar4 = 0;
  goto check;
loop:
  lVar3 = FUN_00320ba0((int)(*(u32 *)(*(int *)(iVar1 + 0x20) + iVar4 * 4)),(u32 *)(param_2));
  if (lVar3 != 0) {
    goto increment;
  }
  *(u32 *)(iVar1 + 8) = *(u32 *)(iVar1 + 8) | 0x40;
  goto done;
increment:
  iVar4 = iVar4 + 1;
check:
  if (iVar4 < iVar2) {
    goto loop;
  }
done:
  return param_1;

}

// FUN_00320DA0


u64 FUN_00320da0(u64 param_1,u64 param_2)



{

  FUN_004916d0(param_1,(void (*)())FUN_00320cf0,param_2);

  return param_1;

}




/* W414 probes: declaration/type and geometry-alias variants left FUN_00320de0 at nd17/396/400; reverted. */
// FUN_00320DE0


#ifndef PC_BUILD
asm u32 FUN_00320de0(u32 param_1,u32 *param_2)
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
  .word 0x0080b82d
  .word 0x00a0a02d
  .word 0x8c960018
  .word 0x8ede0024
  .word 0x0000902d
  .word 0x10000041
  .word 0x00000000
  .word 0x00121880
  .word 0x8ec20020
  .word 0x00431021
  .word 0x8c550000
  .word 0x02a0202d
  .word 0x0c123ba0
  .word 0x00000000
  .word 0x7fa200b0
  .word 0x0000882d
  .word 0x10000031
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0220282d
  .word 0x0c123bb4
  .word 0x00000000
  .word 0x0040982d
  .word 0x0260202d
  .word 0x0c123bc4
  .word 0x00000000
  .word 0x0040202d
  .word 0x27859d30
  .word 0x0c14904a
  .word 0x00000000
  .word 0x14400022
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c123bcc
  .word 0x00000000
  .word 0x7fa200a0
  .word 0x0000802d
  .word 0x10000017
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c123bc8
  .word 0x00000000
  .word 0x24030003
  .word 0x14430010
  .word 0x00000000
  .word 0x0260202d
  .word 0x0200282d
  .word 0x0c123be0
  .word 0x00000000
  .word 0x8e840000
  .word 0x0040282d
  .word 0x0c14904a
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x96820004
  .word 0x24420001
  .word 0xa6820004
  .word 0x10000006
  .word 0x00000000
  .word 0x26100001
  .word 0x7ba200a0
  .word 0x0202102a
  .word 0x1440ffe7
  .word 0x00000000
  .word 0x26310001
  .word 0x7ba200b0
  .word 0x0222102a
  .word 0x1440ffcd
  .word 0x00000000
  .word 0x26520001
  .word 0x025e102a
  .word 0x1440ffbe
  .word 0x00000000
  .word 0x02e0102d
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
}
#endif /* PC_BUILD: asm function omitted */




// FUN_00320f70
u16 FUN_00320f70(u64 param_1,u32 param_2)
{
  struct {
    u32 input;
    u16 output;
  } stack;

  stack.input = param_2;
  stack.output = 0;
  FUN_004916d0_typed(param_1,(void *)&FUN_00320de0,&stack);
  return stack.output;
}




#pragma alias DAT_00957a20_abs DAT_00957a20
// FUN_00320FB0


u32 FUN_00320fb0(u16 param_1)
{
    u32 block;

    block = (*(u32 (**)())DAT_00960178_abs)((u32)param_1 * 4 + 0xc, 0x40000);
    *(u32*)block = block + 0xc;
    *(u16*)(block + 4) = 0;
    *(u16*)(block + 8) = 1;
    *(u16*)(block + 6) = param_1;
}




// FUN_00321010


void FUN_00321010(int param_1)



{

  *(u16 *)(param_1 + 8) = *(u16 *)(param_1 + 8) - 1;

  if (*(u16 *)(param_1 + 8) == 0) {

    ((void (*)())(*(u32 *)0x0096017c))();

  }

  return;

}

















































































































/* Removing this loses FUN_00322d40 (MATCH nd0 -> MISMATCH nd45) - measured W161. */



























































































































































































































































































































































































/* Rebuilt the type-7 billboard color and packet paths; VU0 transform dataflow remains nonmatching. */

























































/* Retail's 364-byte Catmull-Rom interpolator builds tangents and returns its VU0 vector in vf10. */



























































































// Fixed jump-table indexing bug: DAT_0069c510 retyped MdlDispatchSlot[]
// (matching sibling DAT_0069c514) to fix a genuine x64-vs-x16 stride bug
// from raw pointer arithmetic scaling by the old u32 element type.
// Residual: retail hoists a loop-invariant 0xffffffff store constant and
// uses a different loop-register mapping; not reproduced after 3 tries.
/* Removing this loses FUN_00332210 (MATCH nd0 -> MISMATCH nd76) - measured W161. */






























































































/* Volatile batch as on the MATCHED twin FUN_00337E10; pragma hoists the
   0xff/0xfe constants into the loop preheader - W295. */





























































































































































// Fixed DAT_007ce544-547 mistyped u32 (should be u8 packed color bytes);
// fixed the u8==-1 int-promotion bug (never true) by comparing 0xff;
// fixed if/else body order to get retail's positive beq-into-body shape.
/* The volatile qualifier batch is the one banked on the MATCHED twin
   FUN_00337E10 (W170): without it b210 CSEs the DAT_007ce547 test load and
   forwards the 0xfe store, losing two lbu per branch - measured W295. */




/* W295 finding: retail stores the FUN_003233a0_ptr result at pfVar9[2]
   (sw $v0,8($s4)) where this source has a dead `fVar5 = *(float*)&uVar4`, and
   retail advances the counter before both pointers in the loop increment.
   Applying both gives the exact 416B size but the object is then uniformly
   shifted by one early `addiu $v1,$s5,0x38` address hoist that no source form
   tried (param_1 vs iVar6 base, pre-loaded clamp, opt_loop_invariants) removes,
   so nd goes 140 -> 231. Reverted; fix the hoist first, then re-apply. */













/* The volatile qualifier batch below is the same one banked on the MATCHED twin
   FUN_00337E10 (W170): without it b210 CSEs the bGpffffb857 test load and
   forwards the 0xfe store, losing two lbu (size 124 -> 116) - measured W295. */






















































/* Removing this loses FUN_003397d0 (MATCH nd0 -> MISMATCH nd43) - measured W161. */
















/* Removing this loses FUN_0033a3e0 (MATCH nd0 -> MISMATCH nd43) - measured W161. */




















/* Removing this loses FUN_0033b0d0 (MATCH nd0 -> MISMATCH nd43) - measured W161. */



















/* Removing this loses FUN_0033bda0 (MATCH nd0 -> MISMATCH nd43) - measured W161. */




/* Removing this loses FUN_0033be90 (MATCH nd0 -> MISMATCH nd142) - measured W161. */



























/* Removing this loses FUN_0033cc10 (MATCH nd0 -> MISMATCH nd142) - measured W161. */





















/* Removing this loses FUN_0033d890 (MATCH nd0 -> MISMATCH nd43) - measured W161. */




/* Removing this loses FUN_0033d980 (MATCH nd0 -> MISMATCH nd142) - measured W161. */
























/* Removing this loses FUN_0033e700 (MATCH nd0 -> MISMATCH nd43) - measured W161. */




















/* Removing this loses FUN_0033f4a0 (MATCH nd0 -> MISMATCH nd43) - measured W161. */




/* Removing this loses FUN_0033f590 (MATCH nd0 -> MISMATCH nd142) - measured W161. */
























/* Removing this loses FUN_003402c0 (MATCH nd0 -> MISMATCH nd43) - measured W161. */

















#undef fStack_b0
#undef fStack_ac
#undef fStack_a8
#undef fStack_a0
#undef fStack_9c
#undef fStack_98
#undef fStack_90
#undef fStack_8c
#undef fStack_88
#undef fStack_80
#undef fStack_7c
#undef fStack_78
#undef fStack_70
#undef fStack_6c
#undef fStack_68
#undef fStack_60
#undef fStack_5c
#undef fStack_58
#undef fStack_50
#undef fStack_4c
#undef fStack_48
#undef fStack_40
#undef fStack_3c
#undef fStack_38
#undef fStack_30
#undef fStack_2c
#undef fStack_28















































/* Same shape as MATCHED FUN_00343790; the pragma hoists the 0xff/0xfe/-1
   constants and the count load into the preheader - measured W161/W295. */
























/* Fixed the records base offset (byte 0xa -> word 0xa, retail lw 0x28) and
   recomputed it per iteration; volatile batch as on MATCHED twin FUN_00337E10;
   the pragma hoists the 0xff/0xfe/-1 constants into the preheader - W295. */


























/* Same shape as MATCHED FUN_00343790: records base is word 0xa (retail lw 0x28)
   recomputed per iteration, volatile batch as on MATCHED twin FUN_00337E10,
   pragma hoists the 0xff/0xfe/-1 constants into the preheader - W295. */























































































































/* Removing this loses FUN_00347170 (MATCH nd0 -> MISMATCH): retail hoists the
   -1 fill constant into the loop preheader - measured W295. */






























































































































































































































































































































































































































































































































































































































































































































































// Reconstructed camera-fade full-screen-quad draw; obj 1068B/1072B window (99%).
// The retail frame, seven-call census, unsigned dimension/alpha conversions,
// and all four packed vertex records now match. Residual is 16 words: one
// commutative FPU operand-order floor and relocation-masked global loads.
// Camera typing and DAT_00960090/DAT_009600a0/DAT_0096008c_abs caching follow
// the sibling FUN_00351290 implementation.
/* Retail contains this float-to-unsigned expansion: deleting it leaves the
   function UNDERSIZED at 1008/1072 and nd11 -> nd566, so the conversion is
   real code, not fabrication. No plain (u32) cast reproduces it -- four
   spellings were measured on fcl_misc 003C9000 and all fold to the short
   signed path. Retained until the honest source form is found - measured W176. */





















































































































































































































































































































































































































































































/* Retail sibling body starts at offset 0xB0 from 0x00357CE0. */

/* Retail sibling body starts at offset 0xC0 from 0x00357CE0. */

/* Retail sibling body starts at offset 0xD0 from 0x00357CE0. */

/* Retail sibling body starts at offset 0xE0 from 0x00357CE0. */

/* Retail sibling body starts at offset 0x290 from 0x003571C0. */

/* Retail sibling body starts at offset 0x2B0 from 0x003571C0. */

/* Retail sibling body starts at offset 0x80 from 0x0034B600. */

/* Retail sibling body starts at offset 0x90 from 0x0034B600. */

/* Retail sibling body starts at offset 0xA0 from 0x0034B600. */







#pragma alias DAT_009571d0_abs DAT_009571d0

#pragma alias DAT_007cca08_abs DAT_007cca08
#pragma alias func_00314730_ptrfirst func_00314730
#pragma alias func_004b74c0_typed func_004b74c0
#pragma alias func_004b74c0_frame FUN_004b74c0
#pragma alias func_004b74c0_ptrfirst FUN_004b74c0
#pragma alias func_004b7240_frame FUN_004b7240
#pragma alias func_00320640_frame FUN_00320640_y2
#pragma alias func_004916d0_typed func_004916d0
#pragma alias func_004916d0_callback func_004916d0

/* Removing this loses FUN_00311310 (MATCH nd0 -> MISMATCH nd178) - measured W161. */



#pragma alias datGetUnit_y2 datGetUnit
#pragma alias datCalcGetHeldWeaponType_y2 datCalcGetHeldWeaponType






/* W323 measured mdlCreateAndResolvePath opt_loop_invariants on: nd202 -> nd191; object 356/368. */















































/* ---- Recovered range 0x311480-0x31D4F0 (Ghidra reference, pending match) ---- */

#ifndef CONCAT44
#define CONCAT44(hi, lo) ((((u64)(hi)) << 32) | (u32)(lo))
#endif
#ifndef CONCAT11
#define CONCAT11(hi, lo) ((u16)((((u16)(u8)(hi)) << 8) | (u8)(lo)))
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
#pragma alias DAT_0069b190_abs DAT_0069b190
#pragma alias DAT_0069b1b0_abs DAT_0069b1b0
#pragma alias DAT_0069b0d0_abs DAT_0069b0d0
#pragma alias DAT_0069b1c0_abs DAT_0069b1c0
#pragma alias DAT_0069b1d0_abs DAT_0069b1d0
#pragma alias DAT_0069b1e0_abs DAT_0069b1e0
#pragma alias func_0052ea18_typed func_0052ea18
#pragma alias func_0031b680_u32ptr func_0031b680













// Matrix callback storage is contiguous to preserve all RenderWare matrix fields.
/* W389 measured func_00311730 opt_loop_invariants on + opt_lifetimes on: nd 4296 -> 4240; object 5360/5440 -> 5328/5440. */
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




















// W389 residual nd1: the sole differing instruction is commutative addu operand order (retail v0=v0+v1 vs. ours v0=v1+v0); this is a documented compiler floor.












/* W389 measured func_00313490 opt_propagation off: nd 746 -> 608; object 1104/1104 -> 1100/1104. */






















































/* W389 measured func_00314850 opt_lifetimes on: nd 729 -> 726; object 1208/1248 -> 1208/1248. */




/* W389 measured func_00314d30 opt_lifetimes on: nd 446 -> 415; object 724/736 -> 720/736. */








/* W323 measured func_00315090 opt_loop_invariants on: nd195 -> nd188; object 292/320. */















/* W389 measured func_00315f50 opt_dead_assignments off: nd 563 -> 559; object 892/976 -> 892/976. */
























/* W323 measured func_00316970 opt_common_subs off: nd259 -> nd197; object 456/464. */












/* W389 measured FUN_00317a20 opt_lifetimes on: nd 1381 -> 1367; object 2164/2224 -> 2164/2224. */









































// Template probe: reversing the two top-level branches to match func_00318ed0
// retained 420/448 bytes but regressed normalized diff 268 -> 287; reverted.
/* W323 measured func_00318d10 opt_loop_invariants on: nd268 -> nd266; object 420/448. */




































/* Required for Mdl matrix aggregate copy under MWCCPS2 b210 (without: nd32). */
    



/* W323 measured func_00319970 opt_loop_invariants on: nd3132 -> nd3045; object 4304/4448. */




/* W389 measured func_0031aad0 opt_propagation off: nd 1092 -> 1085; object 1832/1872 -> 1836/1872. */












/* W323 measured func_0031b4a0 opt_loop_invariants on: nd293 -> nd266; object 472/480. */












// FUN_00321050


u32 FUN_00321050(int param_1)



{

  *(u16 *)(param_1 + 8) = *(u16 *)(param_1 + 8) + 1;

  return param_1;

}




/* W323 measured func_0031c1d0 opt_common_subs off: nd1055 -> nd889; object 1544/1552. */
// FUN_00321070


void FUN_00321070(int *param_1,u32 param_2)



{

  *(u32 *)(*param_1 + (u32)*(u16 *)(param_1 + 1) * 4) = param_2;

  *(short *)(param_1 + 1) = (u16)param_1[1] + 1;

  return;

}




// FUN_003210A0


u32 FUN_003210a0(u32 param_1)



{

  return DAT_00957a20_abs[param_1 & 0xffff];

}




// FUN_003210C0
void FUN_003210c0(void)
{
    u32 value;
    u64 context;
    s32 object;

    context = FUN_0010e880();
    object = FUN_004d0e40_u32(context);
    value = *(u32*)(object + 0x50);
    value = (value & 0xffffff00) | 2;
    *(u32*)(object + 0x50) = value;
    value = (value & 0xffff00ff) | 0x1100;
    *(u32*)(object + 0x50) = value;
}
