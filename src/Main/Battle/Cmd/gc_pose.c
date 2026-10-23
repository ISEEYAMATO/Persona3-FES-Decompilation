#include "Utils.h"
#include "Main/Battle/Cmd/gc_pose.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Kernel/Kwln/kwln.h"
#include "Kosaka/k_assert.h"
#include "rw/rprandom.h"
#include "rw/rwplcore.h"
#include "rw/rtquat.h"

static void gcPose0024f350(GcPoseController* pose);
static void gcPose0024f410(GcPoseController* pose);
static void gcPose0024f780(GcPoseController* pose);
static void gcPose0024f7f0(GcPoseController* pose, const RwV3d* offset);
static void gcPose0024fe40(GcPoseController* pose);
static void gcPose0024ff10(GcPoseController* pose);
static void gcPose00250280(GcPoseController* pose, const RwV3d* offset);
static u32* sSflCamera; // DAT_007ce33c
extern u32 DAT_00960070[];
u32 FUN_0024d430();
void FUN_0024d5e0();
void FUN_0024d7d0();
u32 FUN_0024d3b0();
static u32* sSflCameraNodes; // DAT_007ce350
extern void gcPose0024f090_y2(void* pose);
extern void gcPose002503f0_y2(void* pose, s32 index, u32 value);
extern void gcPose0024fd20_y2(void* pose);
extern void gcPose0024fd40_y2(void* pose);
extern void* func_004c38c0(void);
extern void func_004c3880(void* matrix);
extern void func_004cb750(void* matrix, const void* source, s32 mode);
extern u32 RpRandom(void);
extern void gcPose0024f960(void* pose, RwV3d* output);
extern RwV3d* gcPose0024faa0(void* pose);
extern void gcPose0024fba0_y2(void* pose, RtQuat* output);
extern void gcPose0024fba0(GcPoseController* pose, RtQuat* output);
extern void func_0024f7f0(void* pose, const RwV3d* offset);
extern void func_00250280(void* pose, const RwV3d* offset);
extern void FUN_004bdde0(f32 angle, f32* output, const f32* axis, s32 mode);
extern void FUN_004c69f0(RwV3d* output, const RwV3d* input);
extern RwV3d DAT_0068e9b0;
void func_0024da60(void* camera);
void func_0024dc90(void* camera);
typedef int (*code)(...);
void FUN_00251060(void);
void FUN_002510d0(void);
void FUN_002518b0(s32 param_1);
u32 FUN_002519d0(void);
void FUN_00251a20(void);
extern int iGpffffb654;
extern void FUN_0019d3f0(const char* file, s32 line);
extern const char DAT_0068e9c0[];
#define FUN_0019d3f0(file, line) FUN_0019d3f0((const char*)(file), line)
static u32* sBpTut654; // puGpffffb654
typedef struct BpTutWork
{
    u32 flags;
    u32 phase;
    s32 type;
    u32 step;
    KwlnTask* task;
} BpTutWork;
s32 FUN_0021c8b0(s32 param_1);
u32 FUN_001114b0(KwlnTask* task);
void FUN_00111500(KwlnTask* task);
void FUN_00111530(KwlnTask* task);
u32 FUN_00195460(KwlnTask* task);
void FUN_003c72d0(s32 handle);
void FUN_003c7560(s32 param_1);
u32 FUN_003c7610(void);
u32 FUN_003c7650(s32 param_1);
void FUN_003c77a0(void);
u32 FUN_003c7850(void);
void FUN_003c7990(s32 param_1);

void bpTut00251010();
void bpTut00251030();
void bpTut00251050();




#pragma alias gcPose0024f960_y2 gcPose0024f960
#pragma alias gcPose0024faa0_y2 gcPose0024faa0
#pragma alias FUN_004bdde0_y2 FUN_004bdde0
#pragma alias FUN_004c69f0_y2 FUN_004c69f0
#pragma alias gcPose0024f090_y2 gcPose0024f090_y2
#pragma alias gcPose002503f0_y2 gcPose002503f0_y2
#pragma alias gcPose0024fd20_y2 gcPose0024fd20_y2
#pragma alias gcPose0024fd40_y2 gcPose0024fd40_y2
#pragma alias gcPose0024fba0_y2 gcPose0024fba0_y2


#pragma alias gcPoseStartDirectedTranslation FUN_002505B0
#pragma alias gcPoseStartEaseOutTranslation FUN_002508C0
#pragma alias gcPoseStartEaseInTranslation FUN_00250A30
#pragma alias gcPoseSetRotationVectorElement FUN_00250BE0
#pragma alias gcPoseStartRotation FUN_00250CF0
#pragma alias gcPoseProjectToScreen FUN_00250F80
#pragma alias RwV3dNormalize FUN_004c69f0
#pragma alias RwV3dLength FUN_004c6ac0

/* Recovered battle-misc support prelude */
typedef int (*code)(...);
void gcPoseStartDirectedTranslation(GcPoseController *work, const RwV3d *target, s32 frames, const RwV3d *direction);
void gcPoseStartEaseOutTranslation(int param_1,u32 *param_2,int param_3);
void gcPoseStartEaseInTranslation(int param_1,u32 *param_2,int param_3);
void gcPoseSetRotationVectorElement(int param_1,int param_2,u32 param_3);
void gcPoseStartRotation(u32 *work, void *target, f32 startAngle, f32 endAngle, s32 frames);
void gcPoseProjectToScreen(float* output, const RwV3d* input);

extern f32 fGpffff81f8;
extern void FUN_004bdde0_y2(f32 angle, void *output, void *target, s32 mode);
extern f32 RwV3dNormalize(RwV3d *out, const RwV3d *in);
extern f32 RwV3dLength(const RwV3d *in);

// FUN_0024DA20
void func_0024da20(void)
{
    K_ASSERT(sSflCameraNodes != NULL, 0x5d);
    sSflCameraNodes = NULL;
}

// FUN_0024DA60
void func_0024da60(void* camera)
{
    u32* list;

    K_ASSERT(sSflCameraNodes != NULL, 0x5d);
    list = sSflCameraNodes;
    *(u32*)((u8*)camera + 8) = 0;
    *(u32*)((u8*)camera + 0x10) = 0;
    if (list[0] != 0) {
        *(u32*)((u8*)camera + 0) = list[1];
        *(u32*)((u8*)camera + 4) = 0;
        ((u32*)list[1])[1] = (u32)camera;
        list[1] = (u32)camera;
    } else {
        *(u32*)((u8*)camera + 4) = 0;
        *(u32*)((u8*)camera + 0) = 0;
        list[0] = (u32)camera;
        list[1] = (u32)camera;
    }
}

// FUN_0024DAF0
void func_0024daf0(u32* camera)
{
    u32* list;
    u32* link;

    K_ASSERT(sSflCameraNodes != NULL, 0x5d);
    list = sSflCameraNodes;
    link = (u32*)camera[1];
    if (link != NULL) {
        link[0] = camera[0];
    }
    link = (u32*)camera[0];
    if (link != NULL) {
        link[1] = camera[1];
    }
    if (camera == (u32*)list[0]) {
        list[0] = camera[1];
    }
    if (camera == (u32*)list[1]) {
        list[1] = camera[0];
    }
}

// FUN_0024DB90
void func_0024db90(void)
{
    u32* camera;

    K_ASSERT(sSflCameraNodes != NULL, 0x5d);
    camera = (u32*)sSflCameraNodes[0];
    while (camera != NULL) {
        if ((~camera[2] & 1u) == 0) {
            bpTut00251010(camera, 0x10000);
        }
        camera = (u32*)camera[1];
    }
}

// FUN_0024DC10
void func_0024dc10(void)
{
    u32* camera;
    u32* list;

    K_ASSERT(sSflCameraNodes != NULL, 0x5d);
    list = sSflCameraNodes;
    list[0x82] = 0;
    camera = (u32*)list[0];
    while (camera != NULL) {
        func_0024dc90(camera);
        camera = (u32*)camera[1];
    }
}

// W419 negative probes: extra gcPose0024fba0 call nd4005/5088B, window5120B, rate78.72%; declaration permutations stayed nd3958/5072B, window5120B, rate78.04%; reverted.
// FUN_0024DC90
asm void func_0024dc90(void* camera)
{
  .set noreorder
  .word 0x27bdfee0
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080882d
  .word 0x8f83b650
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e9a0
  .word 0x2405005d
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b650
  .word 0x3c030069
  .word 0xdc64e9b0
  .word 0x3c030069
  .word 0xc460e9b8
  .word 0xffa400b0
  .word 0xe7a000b8
  .word 0x8e030208
  .word 0x10600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e9a0
  .word 0x240500e6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e030208
  .word 0x00031880
  .word 0x00701821
  .word 0xac710008
  .word 0x8e030208
  .word 0x24630001
  .word 0xae030208
  .word 0xc7b500b4
  .word 0xc7b400b8
  .word 0x100004c2
  .word 0x00000000
  .word 0x00031880
  .word 0x02031821
  .word 0x8c710004
  .word 0x8e240008
  .word 0x30830001
  .word 0x106004b4
  .word 0x00000000
  .word 0x30830002
  .word 0x106004b1
  .word 0x00000000
  .word 0x8e23000c
  .word 0x24060002
  .word 0x1066020b
  .word 0x00000000
  .word 0x24050001
  .word 0x106501c0
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100004a1
  .word 0x00000000
  .word 0x8e240020
  .word 0x24030003
  .word 0x10830134
  .word 0x00000000
  .word 0x108600e6
  .word 0x00000000
  .word 0x1080049e
  .word 0x00000000
  .word 0x10850003
  .word 0x00000000
  .word 0x100001a9
  .word 0x00000000
  .word 0x26320024
  .word 0x8e230058
  .word 0x00032400
  .word 0x8e230010
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000883
  .word 0x00000000
  .word 0x00000000
  .word 0x0064182a
  .word 0x14600083
  .word 0x00000000
  .word 0xc6410018
  .word 0xc6400024
  .word 0x460008c1
  .word 0xe7a30110
  .word 0xc641001c
  .word 0xc6400028
  .word 0x46000881
  .word 0xe7a20114
  .word 0xc6410020
  .word 0xc640002c
  .word 0x46000841
  .word 0xe7a10118
  .word 0x46001807
  .word 0xe7a000f0
  .word 0x46001007
  .word 0xe7a000f4
  .word 0x46000807
  .word 0xe7a000f8
  .word 0xc6420024
  .word 0xc6410028
  .word 0xc640002c
  .word 0xe6420000
  .word 0xe6410004
  .word 0xe6400008
  .word 0xc6560030
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30420fff
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
  .word 0x4600b042
  .word 0x3c024580
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b003
  .word 0x46010001
  .word 0xe7a00110
  .word 0xc6560030
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30420fff
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
  .word 0x4600b042
  .word 0x3c024580
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b003
  .word 0x46010001
  .word 0xe7a00114
  .word 0xc6560030
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30420fff
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
  .word 0x4600b042
  .word 0x3c024580
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b003
  .word 0x46010001
  .word 0xe7a00118
  .word 0xc7a20110
  .word 0xc7a10114
  .word 0xc7a00118
  .word 0xe6420024
  .word 0xe6410028
  .word 0xe640002c
  .word 0x0220202d
  .word 0x27a500f0
  .word 0x0c093dfc
  .word 0x00000000
  .word 0xae200010
  .word 0xc6200010
  .word 0x46800060
  .word 0x8e430034
  .word 0x00031c00
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000883
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46020041
  .word 0xc6400024
  .word 0x46020002
  .word 0x46001182
  .word 0x3c034040
  .word 0x44830000
  .word 0xc6430018
  .word 0x460300c2
  .word 0x460218c2
  .word 0x46031142
  .word 0xc6430000
  .word 0x460118c2
  .word 0x46030902
  .word 0xc643000c
  .word 0x460300c2
  .word 0x460218c2
  .word 0x460308c2
  .word 0x4603081a
  .word 0x4604081e
  .word 0x4605081e
  .word 0x460610dc
  .word 0xe6230014
  .word 0xc6430028
  .word 0x460218c2
  .word 0x46031182
  .word 0xc643001c
  .word 0x460300c2
  .word 0x460218c2
  .word 0x46031142
  .word 0xc6430004
  .word 0x460118c2
  .word 0x46030902
  .word 0xc6430010
  .word 0x460300c2
  .word 0x460218c2
  .word 0x460308c2
  .word 0x4603081a
  .word 0x4604081e
  .word 0x4605081e
  .word 0x460610dc
  .word 0xe6230018
  .word 0xc643002c
  .word 0x460218c2
  .word 0x46031182
  .word 0xc6430020
  .word 0x460300c2
  .word 0x460218c2
  .word 0x46031142
  .word 0xc6430008
  .word 0x460118c2
  .word 0x46030902
  .word 0xc6430014
  .word 0x46030002
  .word 0x46020002
  .word 0x46000802
  .word 0x4600081a
  .word 0x4604081e
  .word 0x4605081e
  .word 0x4606101c
  .word 0xe620001c
  .word 0xc6210014
  .word 0xc640003c
  .word 0x46000802
  .word 0xe6200014
  .word 0xc6210018
  .word 0xc640003c
  .word 0x46000802
  .word 0xe6200018
  .word 0xc621001c
  .word 0xc640003c
  .word 0x46000802
  .word 0xe620001c
  .word 0x100003bb
  .word 0x00000000
  .word 0x26330024
  .word 0x0000202d
  .word 0x0000a02d
  .word 0x1000001d
  .word 0x00000000
  .word 0x00141880
  .word 0x02639021
  .word 0x8e430000
  .word 0x10600017
  .word 0x00000000
  .word 0x8c630008
  .word 0x00601827
  .word 0x30630002
  .word 0x14600012
  .word 0x00000000
  .word 0x8e030208
  .word 0x28630080
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e9a0
  .word 0x24050132
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e450000
  .word 0x8e040208
  .word 0x24830001
  .word 0xae030208
  .word 0x00041880
  .word 0x02031821
  .word 0xac650008
  .word 0x24040001
  .word 0x26940001
  .word 0x2a830003
  .word 0x1460ffe2
  .word 0x00000000
  .word 0x1480039c
  .word 0x00000000
  .word 0xafa00110
  .word 0xafa00114
  .word 0xafa00118
  .word 0x0000902d
  .word 0x10000016
  .word 0x00000000
  .word 0x00121880
  .word 0x02631821
  .word 0x8c640000
  .word 0x10800010
  .word 0x00000000
  .word 0x27a50100
  .word 0x0c093e58
  .word 0x00000000
  .word 0xc7a10110
  .word 0xc7a00100
  .word 0x46000800
  .word 0xe7a00110
  .word 0xc7a10114
  .word 0xc7a00104
  .word 0x46000800
  .word 0xe7a00114
  .word 0xc7a10118
  .word 0xc7a00108
  .word 0x46000800
  .word 0xe7a00118
  .word 0x26520001
  .word 0x2a430003
  .word 0x1460ffe9
  .word 0x00000000
  .word 0xc7a20110
  .word 0xc7a10114
  .word 0xc7a00118
  .word 0xe6220014
  .word 0xe6210018
  .word 0xe620001c
  .word 0x1000036f
  .word 0x00000000
  .word 0x26260024
  .word 0x8e230028
  .word 0x30630001
  .word 0x10600007
  .word 0x00000000
  .word 0x8cc40008
  .word 0x8e230010
  .word 0x0064182a
  .word 0x14600002
  .word 0x00000000
  .word 0xae240010
  .word 0x8cc30004
  .word 0x30630001
  .word 0x10600061
  .word 0x00000000
  .word 0x8cc40000
  .word 0x24030001
  .word 0x10830035
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000059
  .word 0x00000000
  .word 0xc6200010
  .word 0x46800060
  .word 0xc4c00008
  .word 0x46800020
  .word 0x46000943
  .word 0xc4c20018
  .word 0xc4c1001c
  .word 0xc4c00020
  .word 0xe7a20110
  .word 0xe7a10114
  .word 0xe7a00118
  .word 0xc4c2000c
  .word 0xc4c10010
  .word 0xc4c00014
  .word 0xe7a20100
  .word 0xe7a10104
  .word 0xe7a00108
  .word 0xc4c10018
  .word 0xc7a00100
  .word 0x46010101
  .word 0xe7a40100
  .word 0xc4c1001c
  .word 0xc7a00104
  .word 0x460100c1
  .word 0xe7a30104
  .word 0xc4c10020
  .word 0xc7a00108
  .word 0x46010081
  .word 0xe7a20108
  .word 0x46052042
  .word 0xe7a10100
  .word 0x46051802
  .word 0xe7a00104
  .word 0x46051002
  .word 0xe7a00108
  .word 0xc7a00110
  .word 0x46000800
  .word 0xe6200014
  .word 0xc7a10104
  .word 0xc7a00114
  .word 0x46000800
  .word 0xe6200018
  .word 0xc7a10108
  .word 0xc7a00118
  .word 0x46000800
  .word 0xe620001c
  .word 0x10000029
  .word 0x00000000
  .word 0xc6200010
  .word 0x46800060
  .word 0x3c0349f0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000903
  .word 0x3c033f00
  .word 0x44830000
  .word 0x00000000
  .word 0x460400c2
  .word 0xc4c0000c
  .word 0x46030082
  .word 0xc4c00010
  .word 0x46030042
  .word 0xc4c00014
  .word 0x460300c2
  .word 0xc4c00018
  .word 0x46001080
  .word 0xc4c0001c
  .word 0x46000840
  .word 0xc4c00020
  .word 0x46001800
  .word 0x460410c2
  .word 0x46040882
  .word 0x46040042
  .word 0xc4c00024
  .word 0x46030000
  .word 0xe7a00110
  .word 0xc4c00028
  .word 0x46020000
  .word 0xe7a00114
  .word 0xc4c0002c
  .word 0x46010000
  .word 0xe7a00118
  .word 0xc7a20110
  .word 0xc7a10114
  .word 0xc7a00118
  .word 0xe6220014
  .word 0xe6210018
  .word 0xe620001c
  .word 0x8cc50004
  .word 0x30a30001
  .word 0x106002fc
  .word 0x00000000
  .word 0x8e240010
  .word 0x8cc30008
  .word 0x0083182a
  .word 0x146002f7
  .word 0x00000000
  .word 0x2403fffe
  .word 0x00a31824
  .word 0xacc30004
  .word 0x100002f2
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e9a0
  .word 0x2405017d
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x100002eb
  .word 0x00000000
  .word 0x8e230020
  .word 0x10650005
  .word 0x00000000
  .word 0x106002e6
  .word 0x00000000
  .word 0x1000003b
  .word 0x00000000
  .word 0x26330024
  .word 0x0000202d
  .word 0x0000a02d
  .word 0x1000001b
  .word 0x00000000
  .word 0x00141880
  .word 0x02639021
  .word 0x8e430000
  .word 0x8c630008
  .word 0x00601827
  .word 0x30630002
  .word 0x14600012
  .word 0x00000000
  .word 0x8e030208
  .word 0x28630080
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e9a0
  .word 0x24050198
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e450000
  .word 0x8e040208
  .word 0x24830001
  .word 0xae030208
  .word 0x00041880
  .word 0x02031821
  .word 0xac650008
  .word 0x24040001
  .word 0x26940001
  .word 0x2a830002
  .word 0x1460ffe4
  .word 0x00000000
  .word 0x148002c7
  .word 0x00000000
  .word 0x8e640000
  .word 0x27a50110
  .word 0x0c093e58
  .word 0x00000000
  .word 0x8e640004
  .word 0x27a50100
  .word 0x0c093e58
  .word 0x00000000
  .word 0xc7a10100
  .word 0xc7a00110
  .word 0x46000801
  .word 0xe6200014
  .word 0xc7a10104
  .word 0xc7a00114
  .word 0x46000801
  .word 0xe6200018
  .word 0xc7a10108
  .word 0xc7a00118
  .word 0x46000801
  .word 0xe620001c
  .word 0x100002aa
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e9a0
  .word 0x240501a9
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x100002a3
  .word 0x00000000
  .word 0x8e240024
  .word 0x24030004
  .word 0x10830195
  .word 0x00000000
  .word 0x24030003
  .word 0x10830139
  .word 0x00000000
  .word 0x108600c3
  .word 0x00000000
  .word 0x24030001
  .word 0x10830005
  .word 0x00000000
  .word 0x10800295
  .word 0x00000000
  .word 0x10000287
  .word 0x00000000
  .word 0x26330028
  .word 0x0000202d
  .word 0x0000a02d
  .word 0x1000001b
  .word 0x00000000
  .word 0x00141880
  .word 0x02639021
  .word 0x8e430000
  .word 0x8c630008
  .word 0x00601827
  .word 0x30630002
  .word 0x14600012
  .word 0x00000000
  .word 0x8e030208
  .word 0x28630080
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e9a0
  .word 0x240501c4
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e450000
  .word 0x8e040208
  .word 0x24830001
  .word 0xae030208
  .word 0x00041880
  .word 0x02031821
  .word 0xac650008
  .word 0x24040001
  .word 0x26940001
  .word 0x2a830002
  .word 0x1460ffe4
  .word 0x00000000
  .word 0x14800276
  .word 0x00000000
  .word 0x8e640000
  .word 0x0c093ea8
  .word 0x00000000
  .word 0x0040a02d
  .word 0x8e640004
  .word 0x0c093ea8
  .word 0x00000000
  .word 0x0040902d
  .word 0x27a400e0
  .word 0x0280282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x27a400d0
  .word 0x0240282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a700d4
  .word 0xc7a600e4
  .word 0xc7a500d0
  .word 0xc7a000e0
  .word 0xc7a400d8
  .word 0xc7a300e8
  .word 0x4607301a
  .word 0x44801000
  .word 0x4605001e
  .word 0x4604185c
  .word 0x46051018
  .word 0x4601001d
  .word 0xe7a000c0
  .word 0x46071018
  .word 0x4601301d
  .word 0xe7a000c4
  .word 0x46041018
  .word 0x4601181d
  .word 0xe7a000c8
  .word 0x27a400c0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a500c4
  .word 0xc7a400c0
  .word 0xc7a300c8
  .word 0xc7a200b0
  .word 0x4615281a
  .word 0x44800800
  .word 0x4602201e
  .word 0x4614199c
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x46060032
  .word 0x45010007
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46060032
  .word 0x45000007
  .word 0x00000000
  .word 0xafa000a0
  .word 0x3c023f80
  .word 0xafa200a4
  .word 0xafa000a8
  .word 0x1000000d
  .word 0x00000000
  .word 0x46142802
  .word 0x46000818
  .word 0x4615181d
  .word 0xe7a000a0
  .word 0x46021802
  .word 0x46000818
  .word 0x4614201d
  .word 0xe7a000a4
  .word 0x46152002
  .word 0x46000818
  .word 0x4602281d
  .word 0xe7a000a8
  .word 0x3c024334
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46003001
  .word 0x46000842
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x26240014
  .word 0x27a500a0
  .word 0x0000302d
  .word 0x0c12f778
  .word 0x00000000
  .word 0xc7a700c4
  .word 0xc7a600d4
  .word 0xc7a500c0
  .word 0xc7a400d0
  .word 0xc7a300c8
  .word 0xc7a200d8
  .word 0x4607301a
  .word 0x44800800
  .word 0x4605201e
  .word 0x4603121c
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x46080032
  .word 0x45010007
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46080032
  .word 0x45000007
  .word 0x00000000
  .word 0xafa000a0
  .word 0x3c023f80
  .word 0xafa200a4
  .word 0xafa000a8
  .word 0x1000000d
  .word 0x00000000
  .word 0x46033002
  .word 0x46000818
  .word 0x4607101d
  .word 0xe7a000a0
  .word 0x46051002
  .word 0x46000818
  .word 0x4603201d
  .word 0xe7a000a4
  .word 0x46072002
  .word 0x46000818
  .word 0x4605301d
  .word 0xe7a000a8
  .word 0x3c024334
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46004001
  .word 0x46000842
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x26240014
  .word 0x27a500a0
  .word 0x24060002
  .word 0x0c12f778
  .word 0x00000000
  .word 0x100001d8
  .word 0x00000000
  .word 0x26330028
  .word 0x0000202d
  .word 0x0000a02d
  .word 0x1000001d
  .word 0x00000000
  .word 0x00141880
  .word 0x02639021
  .word 0x8e430000
  .word 0x10600017
  .word 0x00000000
  .word 0x8c630008
  .word 0x00601827
  .word 0x30630002
  .word 0x14600012
  .word 0x00000000
  .word 0x8e030208
  .word 0x28630080
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e9a0
  .word 0x24050212
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e450000
  .word 0x8e040208
  .word 0x24830001
  .word 0xae030208
  .word 0x00041880
  .word 0x02031821
  .word 0xac650008
  .word 0x24040001
  .word 0x26940001
  .word 0x2a830003
  .word 0x1460ffe2
  .word 0x00000000
  .word 0x148001b9
  .word 0x00000000
  .word 0x0000a02d
  .word 0x0000902d
  .word 0x1000003e
  .word 0x00000000
  .word 0x00121880
  .word 0x02631821
  .word 0x8c640000
  .word 0x10800038
  .word 0x00000000
  .word 0x16800007
  .word 0x00000000
  .word 0x27a50090
  .word 0x0c093ee8
  .word 0x00000000
  .word 0x24140001
  .word 0x10000030
  .word 0x00000000
  .word 0x27a50070
  .word 0x0c093ee8
  .word 0x00000000
  .word 0xc7ab0074
  .word 0xc7aa0094
  .word 0xc7a90070
  .word 0xc7a80090
  .word 0xc7a70078
  .word 0xc7a60098
  .word 0xc7a5007c
  .word 0xc7a4009c
  .word 0x460b501a
  .word 0x44801800
  .word 0x4609401e
  .word 0x4607305c
  .word 0x46052002
  .word 0x46010001
  .word 0xe7a0008c
  .word 0x4607501a
  .word 0x460b301d
  .word 0xe7a00080
  .word 0x4609301a
  .word 0x4607409d
  .word 0xe7a20084
  .word 0x460b401a
  .word 0x4609505d
  .word 0xe7a10088
  .word 0x46001818
  .word 0x4604481c
  .word 0xe7a00080
  .word 0x46021818
  .word 0x4604589c
  .word 0xe7a20084
  .word 0x46011818
  .word 0x4604385c
  .word 0xe7a10088
  .word 0x46001818
  .word 0x4605401c
  .word 0xe7a00080
  .word 0x46021818
  .word 0x4605501c
  .word 0xe7a00084
  .word 0x46011818
  .word 0x4605301c
  .word 0xe7a00088
  .word 0x7ba30080
  .word 0x7fa30090
  .word 0x26520001
  .word 0x2a430003
  .word 0x1460ffc1
  .word 0x00000000
  .word 0xc7a30090
  .word 0xc7a20094
  .word 0xc7a10098
  .word 0xc7a0009c
  .word 0xe6230014
  .word 0xe6220018
  .word 0xe621001c
  .word 0xe6200020
  .word 0x10000164
  .word 0x00000000
  .word 0x26320028
  .word 0x8e23002c
  .word 0x30630001
  .word 0x10600007
  .word 0x00000000
  .word 0x8e440008
  .word 0x8e230010
  .word 0x0064182a
  .word 0x14600002
  .word 0x00000000
  .word 0xae240010
  .word 0x8e430004
  .word 0x30630001
  .word 0x1060003d
  .word 0x00000000
  .word 0x8e440000
  .word 0x24030001
  .word 0x1083001e
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000035
  .word 0x00000000
  .word 0x2645000c
  .word 0xc6200010
  .word 0x46800060
  .word 0xc6400008
  .word 0x46800020
  .word 0x460008c3
  .word 0xc6420018
  .word 0xc640001c
  .word 0x46020041
  .word 0x44800000
  .word 0x00000000
  .word 0x46020018
  .word 0x4601185c
  .word 0xc78081f8
  .word 0x46000843
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46010302
  .word 0x26240014
  .word 0x0000302d
  .word 0x0c12f778
  .word 0x00000000
  .word 0x1000001c
  .word 0x00000000
  .word 0x2645000c
  .word 0xc6200010
  .word 0x46800060
  .word 0x3c0249f0
  .word 0x44820000
  .word 0x00000000
  .word 0x460008c3
  .word 0xc6420020
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc6400024
  .word 0x46000802
  .word 0x46030002
  .word 0x4600181a
  .word 0x4603105c
  .word 0xc6400018
  .word 0x46010040
  .word 0xc78081f8
  .word 0x46000843
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46010302
  .word 0x26240014
  .word 0x0000302d
  .word 0x0c12f778
  .word 0x00000000
  .word 0x8e450004
  .word 0x30a30001
  .word 0x10600115
  .word 0x00000000
  .word 0x8e240010
  .word 0x8e430008
  .word 0x0083182a
  .word 0x14600110
  .word 0x00000000
  .word 0x2403fffe
  .word 0x00a31824
  .word 0xae430004
  .word 0x1000010b
  .word 0x00000000
  .word 0x26320028
  .word 0x8e220064
  .word 0x00021c00
  .word 0x8e220010
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x460008c3
  .word 0x00000000
  .word 0x00000000
  .word 0x0043102a
  .word 0x14400083
  .word 0x00000000
  .word 0xc6410018
  .word 0xc6400024
  .word 0x460008c1
  .word 0xe7a30110
  .word 0xc641001c
  .word 0xc6400028
  .word 0x46000881
  .word 0xe7a20114
  .word 0xc6410020
  .word 0xc640002c
  .word 0x46000841
  .word 0xe7a10118
  .word 0x46001807
  .word 0xe7a000f0
  .word 0x46001007
  .word 0xe7a000f4
  .word 0x46000807
  .word 0xe7a000f8
  .word 0xc6420024
  .word 0xc6410028
  .word 0xc640002c
  .word 0xe6420000
  .word 0xe6410004
  .word 0xe6400008
  .word 0xc6560030
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30420fff
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
  .word 0x4600b042
  .word 0x3c024580
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b003
  .word 0x46010001
  .word 0xe7a00110
  .word 0xc6560034
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30420fff
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
  .word 0x4600b042
  .word 0x3c024580
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b003
  .word 0x46010001
  .word 0xe7a00114
  .word 0xc6560038
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x30420fff
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
  .word 0x4600b042
  .word 0x3c024580
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b003
  .word 0x46010001
  .word 0xe7a00118
  .word 0xc7a20110
  .word 0xc7a10114
  .word 0xc7a00118
  .word 0xe6420024
  .word 0xe6410028
  .word 0xe640002c
  .word 0x0220202d
  .word 0x27a500f0
  .word 0x0c0940a0
  .word 0x00000000
  .word 0xae200010
  .word 0xc6200010
  .word 0x46800060
  .word 0x8e42003c
  .word 0x00021400
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x460008c3
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46030081
  .word 0xc6400024
  .word 0x46030002
  .word 0x46001982
  .word 0x3c024040
  .word 0x44820800
  .word 0xc6400018
  .word 0x46000802
  .word 0x46030002
  .word 0x46001942
  .word 0xc6400000
  .word 0x46020002
  .word 0x46001102
  .word 0xc640000c
  .word 0x46000802
  .word 0x46030002
  .word 0x46001002
  .word 0x4600101a
  .word 0x4604101e
  .word 0x4605101e
  .word 0x4606181c
  .word 0xe7a000e0
  .word 0xc6440028
  .word 0x46032102
  .word 0x460419c2
  .word 0xc644001c
  .word 0x46040902
  .word 0x46032102
  .word 0x46041982
  .word 0xc6440004
  .word 0x46022102
  .word 0x46041142
  .word 0xc6440010
  .word 0x46040902
  .word 0x46032102
  .word 0x46041102
  .word 0x4604101a
  .word 0x4605101e
  .word 0x4606101e
  .word 0x46071a1c
  .word 0xe7a800e4
  .word 0xc644002c
  .word 0x46032102
  .word 0x460419c2
  .word 0xc6440020
  .word 0x46040902
  .word 0x46032102
  .word 0x46041982
  .word 0xc6440008
  .word 0x46022102
  .word 0x46041142
  .word 0xc6440014
  .word 0x46040842
  .word 0x46030842
  .word 0x46011042
  .word 0x4601101a
  .word 0x4605101e
  .word 0x4606101e
  .word 0x4607189c
  .word 0xe7a200e8
  .word 0xc6410044
  .word 0x46010302
  .word 0xe7ac00e0
  .word 0x46014002
  .word 0xe7a000e4
  .word 0x46011002
  .word 0xe7a000e8
  .word 0xafa300a0
  .word 0xafa000a4
  .word 0xafa000a8
  .word 0x27a40090
  .word 0x27a500a0
  .word 0x0000302d
  .word 0x0c12f778
  .word 0x00000000
  .word 0xafa000a0
  .word 0x3c023f80
  .word 0xafa200a4
  .word 0xafa000a8
  .word 0x27a40090
  .word 0x27a500a0
  .word 0xc7ac00e4
  .word 0x24060002
  .word 0x0c12f778
  .word 0x00000000
  .word 0xafa000a0
  .word 0xafa000a4
  .word 0x3c023f80
  .word 0xafa200a8
  .word 0x27a40090
  .word 0x27a500a0
  .word 0xc7ac00e8
  .word 0x24060002
  .word 0x0c12f778
  .word 0x00000000
  .word 0xc7a30090
  .word 0xc7a20094
  .word 0xc7a10098
  .word 0xc7a0009c
  .word 0xe6230014
  .word 0xe6220018
  .word 0xe621001c
  .word 0xe6200020
  .word 0x1000000d
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e9a0
  .word 0x240502a5
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e9a0
  .word 0x240502ab
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e240008
  .word 0x2403fffd
  .word 0x00831824
  .word 0xae230008
  .word 0x8e030208
  .word 0x2463ffff
  .word 0xae030208
  .word 0x8e030208
  .word 0x1460fb3d
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0120
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0024F090
void gcPose0024f090(GcPoseController* pose)
{
    u32 mode;

    pose->flags |= 1;
    switch (pose->type.u32Value) {
        case 0:
            mode = pose->state.position.mode.u32Value;
            switch (mode) {
                case 1:
                    gcPose0024f350(pose);
                    break;
                case 0:
                case 2:
                    break;
                case 3:
                    gcPose0024f780(pose);
                    break;
                default:
                    K_ASSERT(0, 0x2d4);
                    break;
            }
            break;
        case 1:
            mode = pose->state.position.mode.u32Value;
            switch (mode) {
                case 0:
                case 1:
                    break;
                default:
                    K_ASSERT(0, 0x2e4);
                    break;
            }
            break;
        case 2:
            mode = pose->state.rotation.mode.u32Value;
            switch (mode) {
                case 0:
                case 1:
                case 2:
                    break;
                case 3:
                    pose->state.rotation.data.motion.flags.u32Value = 0;
                    break;
                case 4:
                    gcPose0024fe40(pose);
                    break;
                default:
                    K_ASSERT(0, 0x2fb);
                    break;
            }
            break;
        default:
            K_ASSERT(0, 0x302);
            break;
    }
}

// FUN_0024F210
void gcPose0024f210(GcPoseController* pose, f32 first, u32 value, f32 fourth)
{
    K_ASSERT(pose->type.u32Value == 0, 0x30b);
    K_ASSERT(pose->state.position.mode.u32Value == 1, 0x30c);
    pose->state.position.data.random.randomExtent = first;
    pose->state.position.data.random.parameter58.u32Value = value;
    pose->state.position.data.random.offsetScale = fourth;
    pose->flags |= 2;
}

// FUN_0024F2C0
void gcPose0024f2c0(GcPoseController* pose, f32 value)
{
    K_ASSERT(pose->type.u32Value == 0, 0x31b);
    K_ASSERT(pose->state.position.mode.u32Value == 1, 0x31c);
    pose->state.position.data.random.scale = value;
    pose->flags |= 2;
}




static inline f32 gcPoseRandomExtent(f32 extent)
{
    return extent / 2.0f -
        extent * (f32)(RpRandom() & 0xfff) / 4096.0f;
}


// FUN_0024F350
static void gcPose0024f350(GcPoseController* pose)
{
    RwV3d offset;
    GcPosePositionRandomData *poseData;

    K_ASSERT(pose->type.u32Value == 0, 0x329);
    K_ASSERT(pose->state.position.mode.u32Value == 1, 0x32a);

    poseData = &pose->state.position.data.random;
    poseData->randomExtent = 10.0f;
    poseData->parameter58.u32Value = 0xb4;
    poseData->offsetScale = 10.0f;
    poseData->scale = 1.0f;
    gcPose0024f410(pose);

    offset.x = 0.0f;
    offset.y = 0.0f;
    offset.z = poseData->offsetScale;
    gcPose0024f7f0(pose, &offset);
}

// FUN_0024F410
static void gcPose0024f410(GcPoseController* pose)
{
    RwV3d value;
    GcPosePositionRandomData* poseData;

    K_ASSERT(pose->type.u32Value == 0, 0x341);
    K_ASSERT(pose->state.position.mode.u32Value == 1, 0x342);
    poseData = &pose->state.position.data.random;

    value.x = gcPoseRandomExtent(poseData->randomExtent);
    value.y = gcPoseRandomExtent(poseData->randomExtent);
    value.z = gcPoseRandomExtent(poseData->randomExtent);
    poseData->sample = value;

    value.x = gcPoseRandomExtent(poseData->randomExtent);
    value.y = gcPoseRandomExtent(poseData->randomExtent);
    value.z = gcPoseRandomExtent(poseData->randomExtent);
    poseData->anchor = value;
}

// FUN_0024F780
static void gcPose0024f780(GcPoseController* pose)
{
    K_ASSERT(pose->type.u32Value == 0, 0x355);
    K_ASSERT(pose->state.position.mode.u32Value == 3, 0x356);
    pose->state.position.data.translation.flags.f32Value = 0.0f;
}

// FUN_0024F7F0
static void gcPose0024f7f0(GcPoseController* state, const RwV3d* offset)
{
    GcPosePositionRandomData *pose;
    RwV3d fromOrigin;
    RwV3d toOrigin;
    RwV3d anchor = { 0.0f, 0.0f, 0.0f };
    f32 crossX;
    f32 crossY;
    f32 crossZ;
    f32 tangentX;
    f32 tangentY;
    f32 tangentZ;
    f32 scale;

    pose = &state->state.position.data.random;
    pose->shiftedSample.x = pose->sample.x + offset->x;
    pose->shiftedSample.y = pose->sample.y + offset->y;
    pose->shiftedSample.z = pose->sample.z + offset->z;

    fromOrigin.x = anchor.x - pose->anchor.x;
    fromOrigin.y = anchor.y - pose->anchor.y;
    fromOrigin.z = anchor.z - pose->anchor.z;
    toOrigin.x = pose->anchor.x - pose->sample.x;
    toOrigin.y = pose->anchor.y - pose->sample.y;
    toOrigin.z = pose->anchor.z - pose->sample.z;
    RwV3dNormalize(&fromOrigin, &fromOrigin);
    RwV3dNormalize(&toOrigin, &toOrigin);
    crossX = toOrigin.y * fromOrigin.z - toOrigin.z * fromOrigin.y;
    crossY = toOrigin.z * fromOrigin.x - toOrigin.x * fromOrigin.z;
    crossZ = toOrigin.x * fromOrigin.y - toOrigin.y * fromOrigin.x;
    tangentX = crossY * fromOrigin.z - crossZ * fromOrigin.y;
    tangentY = crossZ * fromOrigin.x - crossX * fromOrigin.z;
    tangentZ = crossX * fromOrigin.y - crossY * fromOrigin.x;

    scale = pose->offsetScale;
    tangentX *= scale;
    tangentY *= scale;
    tangentZ *= scale;
    pose->controlPoint.x = pose->anchor.x + tangentX;
    pose->controlPoint.y = pose->anchor.y + tangentY;
    pose->controlPoint.z = pose->anchor.z + tangentZ;
}

// FUN_0024f960
void gcPose0024f960_y2(GcPoseController *pose, RwV3d *param_2)
{
    K_ASSERT(pose->type.s32Value == 0, 0x375);
    K_ASSERT(pose->state.position.mode.s32Value < 4, 0x376);
    *param_2 = pose->state.position.value;
}

// FUN_0024F9F0
void gcPose0024f9f0(GcPoseController* pose, RwV3d* param_2)
{
    K_ASSERT(pose->state.position.mode.s32Value < 4, 0x37d);
    switch (pose->state.position.mode.s32Value) {
        case 0:
        case 3:
            pose->state.position.value = *param_2;
            break;
        default:
            K_ASSERT(0, 0x386);
            break;
    }
}

// FUN_0024faa0
RwV3d* gcPose0024faa0_y2(GcPoseController *pose)
{
    K_ASSERT(pose->state.position.mode.s32Value < 2, 0x38e);
    return &pose->state.position.value;
}

// FUN_0024FAF0
void gcPose0024faf0(GcPoseController* pose, RwV3d* param_2)
{
    K_ASSERT(pose->state.position.mode.s32Value < 2, 0x395);
    switch (pose->state.position.mode.s32Value) {
        case 0:
        case 1:
            pose->state.position.value = *param_2;
            break;
        default:
            K_ASSERT(0, 0x39e);
            break;
    }
}

// FUN_0024fba0
void gcPose0024fba0(GcPoseController *pose, RtQuat *param_2)
{
    K_ASSERT(pose->type.s32Value == 2, 0x3a6);
    K_ASSERT(pose->state.rotation.mode.s32Value < 5, 0x3a7);
    *param_2 = pose->state.rotation.value;
}

// FUN_0024FC40
void gcPose0024fc40(GcPoseController* pose, RtQuat* param_2)
{
    K_ASSERT(pose->type.s32Value == 2, 0x3ae);
    switch (pose->state.rotation.mode.s32Value) {
        case 0:
        case 1:
        case 2:
        case 3:
            pose->state.rotation.value = *param_2;
            break;
        default:
            K_ASSERT(0, 0x3b9);
            break;
    }
}

// FUN_0024FD10
void gcPose0024fd10(GcPoseController* pose)
{
    pose->type.u32Value = 0;
    pose->state.position.mode.u32Value = 0;
}

// FUN_0024FD20
void gcPose0024fd20(GcPoseController* pose)
{
    pose->type.u32Value = 0;
    pose->state.position.mode.u32Value = 1;
}

// FUN_0024FD40
void gcPose0024fd40(GcPoseController* pose)
{
    GcPoseScalar* values;
    s32 index;

    pose->type.u32Value = 0;
    pose->state.position.mode.u32Value = 2;
    values = pose->state.position.data.vector.values;
    for (index = 0; index < 3; index++) {
        values[index].s32Value = 0;
    }
}

// FUN_0024FD80
void gcPose0024fd80(GcPoseController* pose)
{
    pose->type.u32Value = 0;
    pose->state.position.mode.u32Value = 3;
}

// FUN_0024FDA0
void gcPose0024fda0(GcPoseController* pose)
{
    pose->type.u32Value = 1;
    pose->state.position.mode.u32Value = 0;
}

// FUN_0024FDC0
void gcPose0024fdc0(GcPoseController* pose)
{
    GcPoseScalar* values;
    s32 index;

    pose->type.u32Value = 2;
    pose->state.rotation.mode.u32Value = 2;
    values = pose->state.rotation.data.vector.values;
    for (index = 0; index < 3; index++) {
        values[index].s32Value = 0;
    }
}

// FUN_0024FE00
void gcPose0024fe00(GcPoseController* pose)
{
    pose->type.u32Value = 2;
    pose->state.rotation.mode.u32Value = 3;
}

// FUN_0024FE20
void gcPose0024fe20(GcPoseController* pose)
{
    pose->type.u32Value = 2;
    pose->state.rotation.mode.u32Value = 4;
}

// FUN_0024FE40
static void gcPose0024fe40(GcPoseController* pose)
{
    RwV3d offset;
    GcPoseRotationRandomData* poseData;

    K_ASSERT(pose->type.u32Value == 2, 0x41b);
    K_ASSERT(pose->state.rotation.mode.u32Value == 4, 0x41c);
    poseData = &pose->state.rotation.data.random;
    poseData->randomExtentX = 5.0f;
    poseData->randomExtentY = 15.0f;
    poseData->randomExtentZ = 15.0f;
    poseData->angle = 0xB4;
    poseData->offsetScale = 1.0f;
    poseData->scale = 1.0f;
    gcPose0024ff10(pose);
    offset.x = 0.0f;
    offset.y = 0.0f;
    offset.z = poseData->offsetScale;
    gcPose00250280(pose, &offset);
}

// FUN_0024FF10
static void gcPose0024ff10(GcPoseController* pose)
{
    RwV3d value;
    GcPoseRotationRandomData* poseData;

    K_ASSERT(pose->type.u32Value == 2, 0x434);
    K_ASSERT(pose->state.rotation.mode.u32Value == 4, 0x435);
    poseData = &pose->state.rotation.data.random;

    value.x = gcPoseRandomExtent(poseData->randomExtentX);
    value.y = gcPoseRandomExtent(poseData->randomExtentY);
    value.z = gcPoseRandomExtent(poseData->randomExtentZ);
    poseData->sample = value;

    value.x = gcPoseRandomExtent(poseData->randomExtentX);
    value.y = gcPoseRandomExtent(poseData->randomExtentY);
    value.z = gcPoseRandomExtent(poseData->randomExtentZ);
    poseData->anchor = value;
}

// FUN_00250280
static void gcPose00250280(GcPoseController* state, const RwV3d* offset)
{
    GcPoseRotationRandomData *pose;
    RwV3d fromOrigin;
    RwV3d toOrigin;
    RwV3d anchor = { 0.0f, 0.0f, 0.0f };
    f32 crossX;
    f32 crossY;
    f32 crossZ;
    f32 tangentX;
    f32 tangentY;
    f32 tangentZ;
    f32 scale;

    pose = &state->state.rotation.data.random;
    pose->shiftedSample.x = pose->sample.x + offset->x;
    pose->shiftedSample.y = pose->sample.y + offset->y;
    pose->shiftedSample.z = pose->sample.z + offset->z;

    fromOrigin.x = anchor.x - pose->anchor.x;
    fromOrigin.y = anchor.y - pose->anchor.y;
    fromOrigin.z = anchor.z - pose->anchor.z;
    toOrigin.x = pose->anchor.x - pose->sample.x;
    toOrigin.y = pose->anchor.y - pose->sample.y;
    toOrigin.z = pose->anchor.z - pose->sample.z;
    RwV3dNormalize(&fromOrigin, &fromOrigin);
    RwV3dNormalize(&toOrigin, &toOrigin);
    crossX = toOrigin.y * fromOrigin.z - toOrigin.z * fromOrigin.y;
    crossY = toOrigin.z * fromOrigin.x - toOrigin.x * fromOrigin.z;
    crossZ = toOrigin.x * fromOrigin.y - toOrigin.y * fromOrigin.x;
    tangentX = crossY * fromOrigin.z - crossZ * fromOrigin.y;
    tangentY = crossZ * fromOrigin.x - crossX * fromOrigin.z;
    tangentZ = crossX * fromOrigin.y - crossY * fromOrigin.x;

    scale = pose->offsetScale;
    tangentX *= scale;
    tangentY *= scale;
    tangentZ *= scale;
    pose->controlPoint.x = pose->anchor.x + tangentX;
    pose->controlPoint.y = pose->anchor.y + tangentY;
    pose->controlPoint.z = pose->anchor.z + tangentZ;
}

// FUN_002503F0
void gcPose002503f0(GcPoseController* pose, s32 index, u32 value)
{
    K_ASSERT(pose->state.position.mode.u32Value == 2, 0x45c);
    K_ASSERT(index < 3, 0x45d);
    pose->state.position.data.vector.values[index].u32Value = value;
}

/* Recovered battle-misc harvest: 0x002505B0-0x00250F80 */
// FUN_00250480
void gcPose00250480(GcPoseController *pose)
{
    K_ASSERT(pose->type.s32Value == 0, 0x466);
    K_ASSERT(pose->state.position.mode.s32Value == 3, 0x467);
    pose->state.position.data.translation.flags.u32Value &= 0xfffffffe;
}

// FUN_00250500
void gcPose00250500(GcPoseController *pose, RwV3d *param_2, int param_3)
{
    K_ASSERT(pose->state.position.mode.s32Value == 3, 0x471);
    pose->state.position.data.translation.active.u32Value = 0;
    pose->state.position.data.translation.acceleration = *param_2;
    pose->state.position.data.translation.direction = pose->state.position.value;
    pose->field_0x10 = 0;
    pose->state.position.data.translation.duration.s32Value = param_3 << 0x10;
    pose->state.position.data.translation.flags.u32Value |= 1;
}

// FUN_002505B0


void gcPoseStartDirectedTranslation(GcPoseController *work, const RwV3d *target, s32 frames, const RwV3d *direction)
{
    GcPoseTranslationData *state;
    RwV3d *acceleration;
    s32 fixedFrames;
    f32 duration;
    RwV3d delta;
    RwV3d normalizedDelta;
    RwV3d normalizedDirection;
    f32 dot;
    f32 directionLength;
    f32 projectedX;
    f32 projectedY;
    RwV3d accelerationValue;
    f32 correctionX;
    f32 correctionY;
    f32 correctionZ;
    f32 factor;

    K_ASSERT(work->type.s32Value == 0, 0x4a9);
    K_ASSERT(work->state.position.mode.s32Value == 3, 0x4aa);

    fixedFrames = frames << 16;
    duration = (f32)fixedFrames / 1966080.0f;
    state = &work->state.position.data.translation;
    state->active.u32Value = 1;
    acceleration = &state->acceleration;
    state->direction = *direction;
    state->target = *target;
    state->start = work->state.position.value;

    delta.x = state->target.x - state->start.x;
    delta.y = state->target.y - state->start.y;
    delta.z = state->target.z - state->start.z;
    RwV3dNormalize(&normalizedDelta, &delta);
    RwV3dNormalize(&normalizedDirection, acceleration + 1);

    dot = normalizedDelta.x * normalizedDirection.x +
          normalizedDelta.y * normalizedDirection.y +
          normalizedDelta.z * normalizedDirection.z;
    directionLength = RwV3dLength(acceleration + 1);
    projectedX = normalizedDelta.x * (dot * directionLength);
    directionLength = RwV3dLength(acceleration + 1);
    projectedY = normalizedDelta.y * (dot * directionLength);
    directionLength = RwV3dLength(acceleration + 1);
    {
        f32 projectedZ;

        projectedZ = normalizedDelta.z * (dot * directionLength);

        accelerationValue.x = projectedX * duration;
        accelerationValue.y = projectedY * duration;
        accelerationValue.z = projectedZ * duration;
        accelerationValue.x -= delta.x;
        accelerationValue.y -= delta.y;
        accelerationValue.z -= delta.z;
        accelerationValue.x *= 2.0f;
        accelerationValue.y *= 2.0f;
        accelerationValue.z *= 2.0f;
        factor = -1.0f / (duration * duration);
        accelerationValue.x *= factor;
        accelerationValue.y *= factor;
        accelerationValue.z *= factor;

        correctionX = (acceleration + 1)->x - projectedX;
        correctionY = (acceleration + 1)->y - projectedY;
        correctionZ = (acceleration + 1)->z - projectedZ;
        correctionX *= duration;
        correctionY *= duration;
        correctionZ *= duration;
        correctionX *= 2.0f;
        correctionY *= 2.0f;
        correctionZ *= 2.0f;
        correctionX *= factor;
        correctionY *= factor;
        correctionZ *= factor;
        *acceleration = accelerationValue;
        acceleration->x += correctionX;
        acceleration->y += correctionY;
        acceleration->z += correctionZ;
    }

    work->field_0x10 = 0;
    state->duration.u32Value = (u32)fixedFrames;
    state->flags.u32Value |= 1;
}

// FUN_002508C0


void gcPoseStartEaseOutTranslation(int param_1, u32 *param_2, int param_3)
{
    GcPoseController *work;
    f32 *target;
    f32 duration;
    f32 factor;
    f32 delta;
    f32 x;
    f32 y;
    f32 z;

    work = (GcPoseController *)param_1;
    target = (f32 *)param_2;
    K_ASSERT(work->type.s32Value == 0, 0x4d6);
    K_ASSERT(work->state.position.mode.s32Value == 3, 0x4d7);

    duration = (f32)(param_3 << 16) / 1966080.0f;
    work->state.position.data.translation.active.u32Value = 1;
    work->state.position.data.translation.target = *(RwV3d *)target;
    work->state.position.data.translation.start = work->state.position.value;

    factor = 2.0f / (duration * duration);
    delta = work->state.position.data.translation.target.x -
            work->state.position.data.translation.start.x;
    x = delta * factor;
    delta = work->state.position.data.translation.target.y -
            work->state.position.data.translation.start.y;
    y = delta * factor;
    delta = work->state.position.data.translation.target.z -
            work->state.position.data.translation.start.z;
    z = delta * factor;

    work->state.position.data.translation.acceleration.x = -1.0f * x;
    work->state.position.data.translation.acceleration.y = -1.0f * y;
    work->state.position.data.translation.acceleration.z = -1.0f * z;
    work->state.position.data.translation.direction.x = x * duration;
    work->state.position.data.translation.direction.y = y * duration;
    work->state.position.data.translation.direction.z = z * duration;

    work->field_0x10 = 0;
    work->state.position.data.translation.duration.s32Value = param_3 << 16;
    work->state.position.data.translation.flags.u32Value |= 1;
}

// FUN_00250A30


void gcPoseStartEaseInTranslation(int param_1, u32 *param_2, int param_3)
{
    GcPoseController *work;
    f32 *target;
    f32 duration;
    f32 factor;
    f32 delta;
    RwV3d acceleration;

    work = (GcPoseController *)param_1;
    target = (f32 *)param_2;
    K_ASSERT(work->type.s32Value == 0, 0x4f5);
    K_ASSERT(work->state.position.mode.s32Value == 3, 0x4f6);

    duration = (f32)(param_3 << 16) / 1966080.0f;
    work->state.position.data.translation.active.u32Value = 1;
    work->state.position.data.translation.target = *(RwV3d *)target;
    work->state.position.data.translation.start = work->state.position.value;

    factor = 2.0f / (duration * duration);
    delta = work->state.position.data.translation.target.x -
            work->state.position.data.translation.start.x;
    acceleration.x = delta * factor;
    delta = work->state.position.data.translation.target.y -
            work->state.position.data.translation.start.y;
    acceleration.y = delta * factor;
    delta = work->state.position.data.translation.target.z -
            work->state.position.data.translation.start.z;
    acceleration.z = delta * factor;
    work->state.position.data.translation.acceleration = acceleration;

    work->state.position.data.translation.direction.x = 0;
    work->state.position.data.translation.direction.y = 0;
    work->state.position.data.translation.direction.z = 0;
    work->field_0x10 = 0;
    work->state.position.data.translation.duration.s32Value = param_3 << 16;
    work->state.position.data.translation.flags.u32Value |= 1;
}

// FUN_00250b90
u32 gcPose00250b90(GcPoseController *pose)
{
    K_ASSERT(pose->state.position.mode.s32Value == 3, 0x512);
    return pose->state.position.data.translation.flags.u32Value & 1;
}














static u32* sflCameraNodeHead(void)
{
    K_ASSERT(sSflCamera != NULL, 0x3b);
    return (u32*)sSflCamera[1];
}

static u32* sflCameraFindNode(u16 id)
{
    u32* node;

    node = sflCameraNodeHead();
    while (node != NULL) {
        if (*(u16*)((u8*)node + 4) == id) {
            return node;
        }
        node = (u32*)node[3];
    }
    return NULL;
}

static inline u32* sflCameraFindRequiredNode(u32* node, s32 id)
{
    u32 key;

    key = (u16)id;
    while (node != NULL) {
        if (*(u16*)((u8*)node + 4) == key) {
            return node;
        }
        node = (u32*)node[3];
    }
    K_ASSERT(0, 0xaf);
    return NULL;
}






// FUN_00250BE0


void gcPoseSetRotationVectorElement(int param_1, int param_2, u32 param_3)
{
    GcPoseController *pose;

    pose = (GcPoseController *)param_1;
    K_ASSERT(pose->type.s32Value == 2, 0x52f);
    K_ASSERT(pose->state.rotation.mode.s32Value == 2, 0x530);
    pose->state.rotation.data.vector.values[param_2].u32Value = param_3;
}

// FUN_00250c70
void gcPose00250c70(GcPoseController *pose)
{
    K_ASSERT(pose->type.s32Value == 2, 0x539);
    K_ASSERT(pose->state.rotation.mode.s32Value == 3, 0x53a);
    pose->state.rotation.data.motion.flags.u32Value &= 0xfffffffe;
}

// FUN_00250CF0


void gcPoseStartRotation(u32 *work, void *target, f32 startAngle, f32 endAngle, s32 frames)
{
    GcPoseRotationMotionData *state;
    GcPoseRotationKinematics *motion;
    f32 duration;
    f32 acceleration;

    K_ASSERT(((GcPoseController *)work)->type.s32Value == 2, 0x55d);
    K_ASSERT(((GcPoseController *)work)->state.rotation.mode.s32Value == 3, 0x55e);

    state = &((GcPoseController *)work)->state.rotation.data.motion;
    motion = &state->motion;
    state->active.u32Value = 1;
    motion->target = *(RwV3d *)target;
    motion->startAngle = startAngle;
    motion->endAngle = endAngle;
    FUN_004bdde0_y2((motion->startAngle / fGpffff81f8) * 360.0f,
                 &((GcPoseController *)work)->state.rotation.value, target, 0);

    duration = (f32)(frames << 16) / 1966080.0f;
    acceleration = ((motion->endAngle - motion->startAngle) * 2.0f) /
                   (duration * duration);
    motion->acceleration = -acceleration;
    motion->velocity = acceleration * duration;
    ((GcPoseController *)work)->field_0x10 = 0;
    state->duration.u32Value = (u32)(frames << 16);
    state->flags.u32Value |= 1;
}

// FUN_00250e70
u32 gcPose00250e70(GcPoseController *pose)
{
    K_ASSERT(pose->type.s32Value == 2, 0x57d);
    K_ASSERT(pose->state.rotation.mode.s32Value == 3, 0x57e);
    return pose->state.rotation.data.motion.flags.u32Value & 1;
}

// FUN_00250ef0
void gcPose00250ef0(GcPoseController *pose, float param_2)
{
    K_ASSERT(pose->type.s32Value == 2, 0x588);
    K_ASSERT(pose->state.rotation.mode.s32Value == 4, 0x589);
    pose->state.rotation.data.random.scale = param_2;
    pose->flags |= 2;
}

// Retail cross-check restored the state-0 interpolation path and state-2 mode fields.
// The state-0 mode-3 path now clamps, interpolates, and clears completion flags.
// State-2 mode-3 uses the node's inline pose payload, matching retail addressing.
// State-2 mode-4 uses its distinct duration field for the second cubic segment.
// Queue setup and cleanup avoid an unnecessary persistent counter local.
// The function remains NONMATCHING while these semantic repairs alter scheduling.
// FUN_00250F80


void gcPoseProjectToScreen(float* output, const RwV3d* input)
{
    RwV3d projected;

    RwV3dTransformPoint(&projected, input, &kwlnGetMainCamera()->viewMatrix);
    output[0] = (projected.x / projected.z) * SCREEN_WIDTH;
    output[1] = (projected.y / projected.z) * SCREEN_HEIGHT;
}




/* Recovered battle-misc support prelude */



// FUN_00251010
void bpTut00251010(void* param_1, s32 param_2)
{
    *(s32*)((u8*)param_1 + 0x10) += param_2;
    *(u32*)((u8*)param_1 + 8) |= 2;
}

// FUN_00251030
void bpTut00251030(void* param_1)
{
    *(u32*)((u8*)param_1 + 8) |= 2;
}

// FUN_00251050
void bpTut00251050(u32* param_1)
{
    *param_1 = 0;
    sBpTut654 = param_1;
}

/* Recovered battle-misc harvest: 0x00251060-0x00251A20 */
