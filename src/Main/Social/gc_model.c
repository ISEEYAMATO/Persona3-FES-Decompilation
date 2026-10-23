#include "Main/Social/sfl_res.h"
#include "h_cdvd.h"
#include "Main/g_data.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"
#include "rw/rwplcore.h"

void FUN_0021cc20();
#include "Utils.h"
typedef struct PanelVec3 {
    f32 x;
    f32 y;
    f32 z;
} PanelVec3;
typedef struct PanelQuaternion {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} PanelQuaternion;
typedef struct PanelVideoMode {
    s32 width;
    s32 height;
    s32 depth;
    u32 flags;
    s32 refreshRate;
    s32 format;
} PanelVideoMode;
typedef struct PanelMatrix {
    PanelVec3 right;
    u32 flags;
    PanelVec3 up;
    u32 pad1;
    PanelVec3 at;
    u32 pad2;
    PanelVec3 pos;
    u32 pad3;
} PanelMatrix;
typedef struct PanelTransform {
    u8 unknown00[0x10];
    PanelQuaternion rotation;
    PanelVec3 translation;
    PanelVec3 scale;
    void* model;
} PanelTransform;
extern void func_0020ca90(PanelMatrix* output, const PanelTransform* transform);
extern u32 datGetScenarioMode(void);
extern u32 func_0021c3f0(s32 texture);
extern void* func_0021cca0(u32 texture, s32 frame);
extern u32 func_0021cce0(u32 frame);
extern void func_0021d3b0(void* destination, void* frame);
extern void func_0021d8e0(void* destination, const void* layout);
extern void func_0021d950(void* destination, const void* color);
extern void* kwlnGetMainCamera(void);
extern void* func_004ca5b0(void);
extern void func_004ca560(void* viewport, void* cameraData);
extern void func_004c3760(void* matrix, void* source, s32 mode);
extern void func_004c6c60(PanelVec3* destination, const PanelVec3* source,
                          const PanelMatrix* matrix);
extern PanelVec3 D_0068E0C8;
#pragma alias D_0068E0C8_abs D_0068E0C8
extern u8 D_0068E0C8_abs[];
extern PanelVec3 D_0068E0D8;
#pragma alias D_0068E0D8_abs D_0068E0D8
extern u8 D_0068E0D8_abs[];
extern PanelVec3 D_0068E0E8;
#pragma alias D_0068E0E8_abs D_0068E0E8
extern u8 D_0068E0E8_abs[];
extern PanelVec3 D_0068E0F8;
#pragma alias D_0068E0F8_abs D_0068E0F8
extern u8 D_0068E0F8_abs[];
extern void* func_004cb2f0(void* model);
extern void FUN_004c6be0(void* out, const void* in, const void* matrix);
extern void RpSkyRenderStateSet(s32 state, void* value);
extern void printf(const char*, ...);
extern int sprintf(char*, const char*, ...);
extern u32 strlen(const char*);
extern char D_006850C0[];
extern char D_006871C0[];
extern char D_006892C0[];
extern char D_0068AB80[];
extern char D_0068C440[];
extern char D_0068C760[];
extern char D_0068CA80[];
extern char D_0068CDE0[];
extern char D_0068D140[];
extern char D_0068D8F0[];
extern char D_0068D910[];
extern char D_0068D930[];
extern char D_0068DE20[];
extern char D_0068DF20[];
extern char D_0068DF30[];
extern char D_0068DF60[];
extern char D_0068E020[];
extern char D_0068DD20[];
extern char D_0068E0B0[];
extern void func_00209ba0(void* destination, s32 digit);
extern void func_0020c7b0(u8* work);
extern void func_0020cda0(u8* work);
extern void (*D_00960090)(u32 state, u32 value);
extern void func_0020ccc0(void* work, const u8* color);
extern char D_0068E0A0[];
extern u8 D_0068E090[];
extern void func_0020d500(s32* work, void* matrix);
extern u32 func_0021a3a0(void);
extern u32 func_0021a410(void);
extern u32 func_0021a480(s32 a, s32 b);
extern u32 func_0021a590(u16 value);
extern u32 func_0021b3a0(s32 value);
extern u32 func_0021b420(s32 value);
extern void* D_0068E108;
extern f32 D_0068E110;
extern f32 fGpffff8318;
extern f32 fGpffff8320;
extern f32 fGpffff8324;
extern f32 fGpffff831c;
extern f32 fGpffff8338;
extern f32 fGpffff8334;
extern f32 DAT_007cadd4;
extern f32 DAT_007cad7c;
extern f32 DAT_007cad74;
extern f32 DAT_007caee8;
extern f32 FUN_0052e878(f32 angle);
extern f32 FUN_0052e6d8(f32 angle);
extern void func_0020cf20(void* destination, PanelTransform* transform);


#pragma alias void void


#pragma alias sflResDrawIndexedMesh FUN_0020d500
#pragma alias sflResSetSpriteScale FUN_0020D630
#pragma alias sflResSetSpritePosition FUN_0020D650
#pragma alias sflResGetSpritePosition FUN_0020D670
#pragma alias sflResSetSpriteRotation FUN_0020d690
#pragma alias sflResInit FUN_0020d7d0
#pragma alias sflResUpdate FUN_0020d820
#pragma alias sflResIsBaseArchivePending FUN_0020dfe0
#pragma alias sflResShutdown FUN_0020e030
#pragma alias sflResRequestBaseArchive FUN_0020e200
#pragma alias sflResRequestGroundArchive FUN_0020e2c0
#pragma alias sflResIsGroundArchivePending FUN_0020e380
#pragma alias sflResRequestEffectArchive FUN_0020e3d0
#pragma alias sflResIsEffectArchivePending FUN_0020e4c0
#pragma alias sflResGetBaseRaster FUN_0020e510
#pragma alias sflResGetGroundRaster FUN_0020e590
#pragma alias sflResGetBaseSecondaryRaster FUN_0020e610
#pragma alias sflResGetEffectRaster FUN_0020e690
#pragma alias sflResGetBaseDataFile FUN_0020e710
#pragma alias sflResGetBaseSpriteData FUN_0020e790
#pragma alias sflResLoadGroundRasters FUN_0020e800
#pragma alias sflResGetTutorialFile FUN_0020ea00
#pragma alias sflResIsTutorialArchivePending FUN_0020e9b0
#pragma alias sflResDestroyTutorialFiles FUN_0020ea80
#pragma alias sflResIsPersonaChangeSpritePending FUN_0020ec00
#pragma alias sflResGetPersonaChangeSprite FUN_0020ec50
#pragma alias sflResDestroyPersonaChangeSprite FUN_0020ecc0
#pragma alias sflResRequestTutorialArchive FUN_0020e8f0
#pragma alias sflResRequestPersonaChangeSprite FUN_0020eb40
#pragma alias sSflBaseArchivePath DAT_0068e130
#pragma alias sSflGroundArchivePath DAT_0068e150
#pragma alias sSflEpisodeAigisEffectArchivePath DAT_0068e170
#pragma alias sSflEffectArchivePath DAT_0068e1a0
#pragma alias sSflTutorialArchivePath DAT_0068e1c0
#pragma alias sSflPersonaChangeSpritePath DAT_0068e1e0


static SflResourceManager* sSflRes; // DAT_007ce2f0
extern char sSflTutorialArchivePath[];
extern char sSflPersonaChangeSpritePath[];
extern char sSflBaseArchivePath[];
extern char sSflGroundArchivePath[];
extern char sSflEpisodeAigisEffectArchivePath[];
extern char sSflEffectArchivePath[];

extern const RwV3d DAT_0068e108;
extern void* (*DAT_00960178[])(u32 size, u32 heap);
extern void (*DAT_0096017c[])(void* memory);
extern void (*DAT_00960090[])(u32 state, u32 value);
extern u16 D_00875A90[];
extern void* func_004c38c0(void);
extern RwMatrix* func_004c31b0(RwMatrix* matrix, const RwV3d* axis, f32 angle, u32 combine);
extern void func_004c3880(void* matrix);
extern void func_004f1ed0(void* vertices, u32 count, void* matrix, u32 stride);
extern void func_004f1fd0(u32 primitive, void* indices, u32 count);
extern void func_004f1f80(void);
extern void func_004cde90(void* resource);
extern void func_0021b4a0(void* resource);
extern void* bpTexCreateTmxRaster(void* tmxMemory);
extern void* func_0021c9f0(void* tmxMemory);
extern void* memcpy(void* destination, const void* source, u32 size);
void sflResLoadGroundRasters(void* resource);
void sflResDestroyTutorialFiles(void);
void sflResDestroyPersonaChangeSprite(void);



static void sflResRequire(void)
{
    K_ASSERT(sSflRes != NULL, 0x65);
}

static void sflResLoadRaster(u32 request, s32 fileIndex, u32* destination)
{
    u32 fileSize;
    void* file;

    file = H_Cdvd_ArchiveGetFile((void*)request, fileIndex, &fileSize);
    *destination = (u32)bpTexCreateTmxRaster(file);
}

static void sflResCopyFile(u32 request, s32 fileIndex, u32* destination)
{
    u32 fileSize;
    void* file;
    void* copy;

    file = H_Cdvd_ArchiveGetFile((void*)request, fileIndex, &fileSize);
    copy = (*DAT_00960178)(fileSize, 0x40000);
    if (copy != NULL && file != NULL) {
        memcpy(copy, file, fileSize);
    }
    *destination = (u32)copy;
}

/* W419 probes: first alpha casts `(u8)(u32)` gave nd2486/4136B (window4304, rate .601064) and a direct first-block cast nd2483/4060B (rate .611576); `<=`, schedule toggles, and D_0068E0A0_abs all stayed nd2420/4064B (rate .595472), reverted. */
// FUN_0020b250
#ifndef PC_BUILD
asm void func_0020b250(void* work)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x8c820004
  .word 0x04400004
  .word 0x00000000
  .word 0x28420003
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e0a0
  .word 0x240502a6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e830004
  .word 0x24020002
  .word 0x10620010
  .word 0x00000000
  .word 0x1060000a
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0280a82d
  .word 0x269100e0
  .word 0x10000007
  .word 0x00000000
  .word 0x0280902d
  .word 0x269100e0
  .word 0x10000003
  .word 0x00000000
  .word 0x0280802d
  .word 0x269100e0
  .word 0x0c130e30
  .word 0x00000000
  .word 0x0040982d
  .word 0x0260202d
  .word 0x0280282d
  .word 0x0c0832a4
  .word 0x00000000
  .word 0x8e820000
  .word 0x30420004
  .word 0x1040010d
  .word 0x00000000
  .word 0x0220202d
  .word 0x26850040
  .word 0x0c083330
  .word 0x00000000
  .word 0x8e830004
  .word 0x24020002
  .word 0x106200fd
  .word 0x00000000
  .word 0x24020001
  .word 0x106200bb
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000fa
  .word 0x00000000
  .word 0x26440178
  .word 0x26850040
  .word 0x0c083330
  .word 0x00000000
  .word 0x26440208
  .word 0x26850040
  .word 0x0c083330
  .word 0x00000000
  .word 0x92850040
  .word 0x92840041
  .word 0x92830042
  .word 0x92820043
  .word 0xa3a5007c
  .word 0xa3a4007d
  .word 0xa3a3007e
  .word 0xa3a2007f
  .word 0x92820043
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
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
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
  .word 0xa3a3007f
  .word 0x26440298
  .word 0x27a5007c
  .word 0x0c083330
  .word 0x00000000
  .word 0x26440328
  .word 0x27a5007c
  .word 0x0c083330
  .word 0x00000000
  .word 0x92850040
  .word 0x92840041
  .word 0x92830042
  .word 0x92820043
  .word 0xa3a5007c
  .word 0xa3a4007d
  .word 0xa3a3007e
  .word 0xa3a2007f
  .word 0x3c02437f
  .word 0x44820800
  .word 0xc64005fc
  .word 0x46000842
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
  .word 0xa3a3007f
  .word 0x264403b8
  .word 0x27a5007c
  .word 0x0c083330
  .word 0x00000000
  .word 0x8e420170
  .word 0x30420001
  .word 0x10400012
  .word 0x00000000
  .word 0x27a5007c
  .word 0x92860040
  .word 0x92840041
  .word 0x92830042
  .word 0x92820043
  .word 0xa3a6007c
  .word 0xa3a4007d
  .word 0xa3a3007e
  .word 0xa3a2007f
  .word 0xa3a0007c
  .word 0xa3a0007d
  .word 0xa3a0007e
  .word 0x26440448
  .word 0x0c083330
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x26440448
  .word 0x26850040
  .word 0x0c083330
  .word 0x00000000
  .word 0x8e420170
  .word 0x30420001
  .word 0x10400010
  .word 0x00000000
  .word 0x27a5007c
  .word 0x92860040
  .word 0x92840041
  .word 0x92830042
  .word 0x92820043
  .word 0xa3a6007c
  .word 0xa3a4007d
  .word 0xa3a3007e
  .word 0xa3a2007f
  .word 0xa3a0007f
  .word 0x264404d8
  .word 0x0c083330
  .word 0x00000000
  .word 0x10000069
  .word 0x00000000
  .word 0x92850040
  .word 0x92840041
  .word 0x92830042
  .word 0x92820043
  .word 0xa3a5007c
  .word 0xa3a4007d
  .word 0xa3a3007e
  .word 0xa3a2007f
  .word 0x3c02437f
  .word 0x44820800
  .word 0xc64005f8
  .word 0x46000842
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
  .word 0xa3a3007f
  .word 0x264404d8
  .word 0x27a5007c
  .word 0x0c083330
  .word 0x00000000
  .word 0x10000044
  .word 0x00000000
  .word 0x26a40208
  .word 0x26850040
  .word 0x0c083330
  .word 0x00000000
  .word 0x26a40178
  .word 0x26850040
  .word 0x0c083330
  .word 0x00000000
  .word 0x92850040
  .word 0x92840041
  .word 0x92830042
  .word 0x92820043
  .word 0xa3a5007c
  .word 0xa3a4007d
  .word 0xa3a3007e
  .word 0xa3a2007f
  .word 0xa3a0007c
  .word 0xa3a0007d
  .word 0xa3a0007e
  .word 0x93a2007f
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
  .word 0xc6a00328
  .word 0x46000842
  .word 0xc6a0032c
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
  .word 0xa3a3007f
  .word 0x26a40298
  .word 0x27a5007c
  .word 0x0c083330
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x26040170
  .word 0x26850040
  .word 0x0c083330
  .word 0x00000000
  .word 0x8e830000
  .word 0x2402fffb
  .word 0x00621024
  .word 0xae820000
  .word 0x8e820004
  .word 0x10400003
  .word 0x00000000
  .word 0x10000076
  .word 0x00000000
  .word 0x92850040
  .word 0x92840041
  .word 0x92830042
  .word 0x92820043
  .word 0xa3a5007c
  .word 0xa3a4007d
  .word 0xa3a3007e
  .word 0xa3a2007f
  .word 0x3c02437f
  .word 0x44820800
  .word 0xc64005fc
  .word 0x46000842
  .word 0x92820043
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
  .word 0x46000842
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
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
  .word 0xa3a3007f
  .word 0x264403b8
  .word 0x27a5007c
  .word 0x0c083330
  .word 0x00000000
  .word 0x92850040
  .word 0x92840041
  .word 0x92830042
  .word 0x92820043
  .word 0xa3a5007c
  .word 0xa3a4007d
  .word 0xa3a3007e
  .word 0xa3a2007f
  .word 0x8e420170
  .word 0x30420001
  .word 0x10400004
  .word 0x00000000
  .word 0xa3a0007f
  .word 0x1000002c
  .word 0x00000000
  .word 0x3c02437f
  .word 0x44820800
  .word 0xc64005f8
  .word 0x46000842
  .word 0x92820043
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
  .word 0x46000842
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
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
  .word 0xa3a3007f
  .word 0x264404d8
  .word 0x27a5007c
  .word 0x0c083330
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040009
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040014
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e830004
  .word 0x24020002
  .word 0x10620126
  .word 0x00000000
  .word 0x1060002e
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000143
  .word 0x00000000
  .word 0x0200a82d
  .word 0x24040008
  .word 0x0000282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020003
  .word 0x344517f3
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x8e840170
  .word 0x8e850174
  .word 0x0c086920
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x26840178
  .word 0x24050004
  .word 0x0260302d
  .word 0x24070003
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a5e090
  .word 0x24060006
  .word 0x0c13c7f4
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x1000011b
  .word 0x00000000
  .word 0x0280902d
  .word 0x0200a82d
  .word 0x24040008
  .word 0x0000282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020003
  .word 0x344517f3
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x24050001
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x24050001
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c086ce8
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x26840178
  .word 0x24050004
  .word 0x0260302d
  .word 0x24070003
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a5e090
  .word 0x24060006
  .word 0x0c13c7f4
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040004
  .word 0x0c086ce8
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x268403b8
  .word 0x24050004
  .word 0x0260302d
  .word 0x24070003
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a5e090
  .word 0x24060006
  .word 0x0c13c7f4
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x96840174
  .word 0x0c086964
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26840448
  .word 0x24050004
  .word 0x0260302d
  .word 0x24070003
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a5e090
  .word 0x24060006
  .word 0x0c13c7f4
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x0c086ce8
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26840328
  .word 0x24050004
  .word 0x0260302d
  .word 0x24070003
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a5e090
  .word 0x24060006
  .word 0x0c13c7f4
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x0c086ce8
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26840298
  .word 0x24050004
  .word 0x0260302d
  .word 0x24070003
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a5e090
  .word 0x24060006
  .word 0x0c13c7f4
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x96840174
  .word 0x0c086964
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x268404d8
  .word 0x24050004
  .word 0x0260302d
  .word 0x24070003
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a5e090
  .word 0x24060006
  .word 0x0c13c7f4
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040001
  .word 0x0c086ce8
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26840208
  .word 0x24050004
  .word 0x0260302d
  .word 0x24070003
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a5e090
  .word 0x24060006
  .word 0x0c13c7f4
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x8e820000
  .word 0x30420002
  .word 0x1040004b
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x0080282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x24050003
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040005
  .word 0x0c086ce8
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26840568
  .word 0x24050004
  .word 0x0260302d
  .word 0x24070003
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a5e090
  .word 0x24060006
  .word 0x0c13c7f4
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x0200a82d
  .word 0x24040008
  .word 0x0000282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020003
  .word 0x344517f3
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x0c086904
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26840170
  .word 0x24050004
  .word 0x0260302d
  .word 0x24070003
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a5e090
  .word 0x24060006
  .word 0x0c13c7f4
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x8e820000
  .word 0x30420001
  .word 0x1040004c
  .word 0x00000000
  .word 0x8e820048
  .word 0x10400003
  .word 0x00000000
  .word 0x10000047
  .word 0x00000000
  .word 0x8e830004
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x24040002
  .word 0x2405006a
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040001
  .word 0x0c086ce8
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440208
  .word 0x24050004
  .word 0x0260302d
  .word 0x24070003
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a5e090
  .word 0x24060006
  .word 0x0c13c7f4
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x24040002
  .word 0x24050058
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x3c120096
  .word 0x26520090
  .word 0x24040004
  .word 0x24050003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0c086ce8
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2684004c
  .word 0x24050004
  .word 0x0260302d
  .word 0x24070003
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a5e090
  .word 0x24060006
  .word 0x0c13c7f4
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x24040004
  .word 0x24050001
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e830004
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000002c
  .word 0x00000000
  .word 0x3c120096
  .word 0x26520090
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040001
  .word 0x0c086d08
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26840298
  .word 0x24050004
  .word 0x0260302d
  .word 0x24070003
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a5e090
  .word 0x24060006
  .word 0x0c13c7f4
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x0c0868e8
  .word 0x00000000
  .word 0x3c120096
  .word 0x26520090
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050004
  .word 0x0260302d
  .word 0x24070003
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a5e090
  .word 0x24060006
  .word 0x0c13c7f4
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x8e820000
  .word 0x30420008
  .word 0x10400064
  .word 0x00000000
  .word 0x8e8200dc
  .word 0x8c420000
  .word 0x00401027
  .word 0x30420001
  .word 0x10400051
  .word 0x00000000
  .word 0x0240882d
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
  .word 0x2405006a
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x8e830004
  .word 0x24020002
  .word 0x10620027
  .word 0x00000000
  .word 0x24040001
  .word 0x10640014
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x0c086ce8
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26840208
  .word 0x24050004
  .word 0x0260302d
  .word 0x24070003
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c086d08
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26840208
  .word 0x24050004
  .word 0x0260302d
  .word 0x24070003
  .word 0x0c13c7b4
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c050069
  .word 0x24a5e090
  .word 0x24060006
  .word 0x0c13c7f4
  .word 0x00000000
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x24040002
  .word 0x24050058
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x8e8400dc
  .word 0x0260282d
  .word 0x0c083540
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c130e20
  .word 0x00000000
  .word 0xdfbf0060
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

// FUN_0020c320
void func_0020c320(s32 unused, const f32* source, f32 scale, void* viewport)
{
    s32 size[8];
    f32* camera;
    f32 panelScale = scale;
    f32* out = viewport;

    camera = (f32*)((u8*)kwlnGetMainCamera() + 0x68);
    func_004ca560(size, func_004ca5b0());
    out[0] = panelScale * (camera[0] * (1.0f + (-source[0] / (f32)(size[0] >> 1))));
    out[1] = panelScale * (camera[1] * (1.0f + (-source[1] / (f32)(size[1] >> 1))));
    out[2] = panelScale;
}

// FUN_0020c400
void func_0020c400(s32 unused, const f32* source, f32 scale, void* viewport)
{
    s32 size[8];
    f32* camera;
    f32 panelScale = scale;
    f32* out = viewport;

    camera = (f32*)((u8*)kwlnGetMainCamera() + 0x68);
    func_004ca560(size, func_004ca5b0());
    out[0] = panelScale * (camera[0] * (1.0f + (-(source[0] - 0.5f) / (f32)(size[0] >> 1))));
    out[1] = panelScale * (camera[1] * (1.0f + (-(source[1] - 0.5f) / (f32)(size[1] >> 1))));
    out[2] = panelScale;
}

// FUN_0020c500
f32 func_0020c500(const f32* value, f32 scale)
{
    s32 size[8];
    f32* camera;
    f32 panelScale = scale;

    camera = (f32*)((u8*)kwlnGetMainCamera() + 0x68);
    func_004ca560(size, func_004ca5b0());
    return (6.0f * value[11] * (f32)(size[0] >> 1)) / (panelScale * camera[0]);
}

// FUN_0020c590
void func_0020c590(void* work, s32 value)
{
    K_ASSERT(*(u32*)((u8*)work + 4) == 0, 0x489);
    *(s16*)((u8*)work + 0x174) = (s16)value;
}

// FUN_0020c5f0
void func_0020c5f0(void* work, u32 a, u32 b)
{
    K_ASSERT(*(u32*)((u8*)work + 4) == 1, 0x492);
    *(u32*)((u8*)work + 0x170) = a;
    *(u32*)((u8*)work + 0x174) = b;
}

// FUN_0020c660
f32 func_0020c660(s32 value, s32 mode)
{
    switch (mode) {
    case 2:
        return 220.0f + 200.0f * (f32)value / (f32)(mode - 1);
    case 6:
        return 70.0f + 500.0f * (f32)value / (f32)(mode - 1);
    case 3:
    case 4:
    case 5:
        return (f32)(value + 1) * (640.0f / (f32)(mode + 1));
    default:
        K_ASSERT(0, 0x4ae);
        return 0.0f;
    }
}

// FUN_0020c7a0
void func_0020c7a0(void* work, u32 value)
{
    *(u32*)((u8*)work + 0x38) = value;
}


/* Removing this loses FUN_0020d820 (MATCH nd0 -> MISMATCH nd2) - measured W161. */






















































static void panel_init_common(u8* work, u32 state)
{
    s32 i;

    func_00209ea0(work);
    *(u32*)(work + 4) = state;
    func_0020c7b0(work + 0xe0);
    for (i = 0; i < 4; i++) {
        work[0x184 + i] = 0xff;
        work[0x1a8 + i] = 0xff;
        work[0x1cc + i] = 0xff;
        work[0x1f0 + i] = 0xff;
    }
}






// Reconstructed state interpolation, UV projection, and corner rotation from retail control flow.
// Remaining excess is retained pending MWCCPS2 register-allocation and scheduling convergence.


// FUN_0020c7b0
void func_0020c7b0(u8* work)
{
    struct Vec3
    {
        f32 x;
        f32 y;
        f32 z;
    };
    struct Vec3 topRight;
    struct Vec3 bottomRight;
    struct Vec3 bottomLeft;
    struct Vec3 topLeft;

    topRight.x = 3.0f;
    topRight.y = fGpffff8318;
    topRight.z = 0.0f;
    *(struct Vec3*)(work + 0x00) = topRight;
    bottomRight.x = 3.0f;
    bottomRight.y = fGpffff831c;
    bottomRight.z = 0.0f;
    *(struct Vec3*)(work + 0x24) = bottomRight;
    bottomLeft.x = -3.0f;
    bottomLeft.y = fGpffff831c;
    bottomLeft.z = 0.0f;
    *(struct Vec3*)(work + 0x48) = bottomLeft;
    topLeft.x = -3.0f;
    topLeft.y = fGpffff8318;
    topLeft.z = 0.0f;
    *(struct Vec3*)(work + 0x6c) = topLeft;

    work[0x0c] = 0xff;
    work[0x0d] = 0xff;
    work[0x0e] = 0xff;
    work[0x0f] = 0xff;
    work[0x30] = 0xff;
    work[0x31] = 0xff;
    work[0x32] = 0xff;
    work[0x33] = 0xff;
    work[0x54] = 0xff;
    work[0x55] = 0xff;
    work[0x56] = 0xff;
    work[0x57] = 0xff;
    work[0x78] = 0xff;
    work[0x79] = 0xff;
    work[0x7a] = 0xff;
    work[0x7b] = 0xff;

    *(u32*)(work + 0x1c) = 0x3f7e0000;
    *(u32*)(work + 0x40) = 0x3f7e0000;
    *(u32*)(work + 0x64) = 0;
    *(u32*)(work + 0x88) = 0;
    *(u32*)(work + 0x20) = 0x3c000000;
    *(u32*)(work + 0x44) = 0x3f230000;
    *(u32*)(work + 0x68) = 0x3f230000;
    *(u32*)(work + 0x8c) = 0x3c000000;
}

// FUN_0020c8d0
void func_0020c8d0(void)
{
    u16* indices;
    s32 cursor;
    s32 col;
    s32 row;
    s32 i;
    s32 alternating;
    s32 cursorPlusEight;

    printf(D_0068E0B0);
    cursor = 0;
    indices = (u16*)D_00875A90;
    for (row = 0; row < 8; row++)
    {
        col = 0;
        alternating = ~row & 1;
        while (col < 6)
        {
            if (alternating != 0)
            {
                indices[0] = cursor;
                indices[1] = cursor + 1;
                indices[2] = cursor + 8;
                indices[3] = cursor + 1;
                indices[4] = cursor + 9;
                indices[5] = cursor + 8;
                indices += 6;
                cursor++;
            }
            else
            {
                indices[0] = cursor;
                cursorPlusEight = cursor + 8;
                indices[1] = cursorPlusEight;
                indices[2] = cursor + 7;
                indices[3] = cursor;
                cursor++;
                indices[4] = cursor;
                indices[5] = cursorPlusEight;
                indices += 6;
            }
            col++;
        }
        if (alternating != 0)
        {
            indices[0] = cursor;
            indices[1] = cursor + 1;
            indices[2] = cursor + 8;
            indices += 3;
            cursor += 2;
        }
        else
        {
            indices[0] = cursor;
            indices[1] = cursor + 8;
            indices[2] = cursor + 7;
            indices += 3;
            cursor++;
        }
    }
    for (i = 0; i < 0x138; i++)
    {
        K_ASSERT(D_00875A90[i] < 0x44, 0x515);
    }
    K_ASSERT(indices - (u16*)D_00875A90 == 0x138, 0x517);
}

// FUN_0020ca90
void func_0020ca90(PanelMatrix* output, const PanelTransform* transform)
{
    const PanelVec3* cameraScale;
    PanelMatrix* rotation;
    PanelVec3 scale;
    PanelVideoMode viewport;
    f32 aspectRatio;
    f32 factor;
    f32 scaledX;
    f32 scaledY;
    f32 scaledZ;
    f32 xx;
    f32 yy;
    f32 zz;
    f32 xy;
    f32 xz;
    f32 yz;
    f32 xw;
    f32 yw;
    f32 zw;
    void* camera;
    void* viewportData;

    camera = kwlnGetMainCamera();
    cameraScale = (const PanelVec3*)((u8*)camera + 0x68);
    viewportData = func_004ca5b0();
    func_004ca560(&viewport, viewportData);

    aspectRatio = (f32)viewport.width * cameraScale->y /
                  ((f32)viewport.height * cameraScale->x);
    scale.x = transform->scale.x;
    scale.y = aspectRatio * transform->scale.y;
    scale.z = transform->scale.z;
    RwMatrixScale((RwMatrix*)output, (const RwV3d*)&scale, 0);

    rotation = (PanelMatrix*)func_004c38c0();
    factor = 2.0f /
             (transform->rotation.x * transform->rotation.x +
              transform->rotation.y * transform->rotation.y +
              transform->rotation.z * transform->rotation.z +
              transform->rotation.w * transform->rotation.w);
    scaledX = transform->rotation.x * factor;
    scaledY = transform->rotation.y * factor;
    scaledZ = transform->rotation.z * factor;
    xw = scaledX * transform->rotation.w;
    yw = scaledY * transform->rotation.w;
    zw = scaledZ * transform->rotation.w;
    xx = transform->rotation.x * scaledX;
    yy = transform->rotation.y * scaledY;
    zz = transform->rotation.z * scaledZ;
    yz = transform->rotation.y * scaledZ;
    xz = transform->rotation.z * scaledX;
    xy = transform->rotation.x * scaledY;

    rotation->right.x = 1.0f - (yy + zz);
    rotation->right.y = xy + zw;
    rotation->right.z = xz - yw;
    rotation->up.x = xy - zw;
    rotation->up.y = 1.0f - (zz + xx);
    rotation->up.z = yz + xw;
    rotation->at.x = xz + yw;
    rotation->at.y = yz - xw;
    rotation->at.z = 1.0f - (xx + yy);
    rotation->pos.x = 0.0f;
    rotation->pos.y = 0.0f;
    rotation->pos.z = 0.0f;
    rotation->flags = 3;

    func_004c3760(output, rotation, 2);
    func_004c3880(rotation);
    RwMatrixTranslate((RwMatrix*)output, (const RwV3d*)&transform->translation, 2);
    if (transform->model != NULL)
    {
        func_004c3760(output, func_004cb2f0(transform->model), 2);
    }
}

// FUN_0020cc80
void func_0020cc80(void* work, const u8* color)
{
    struct Color {
        u8 red;
        u8 green;
        u8 blue;
        u8 alpha;
    };
    struct Panel {
        u32 flags;
        u8 pad[0x3c];
        struct Color color;
    };
    struct Panel* panel = (struct Panel*)work;
    const struct Color* rgba = (const struct Color*)color;

    panel->color = *rgba;
    panel->flags |= 4;
}

// FUN_0020ccc0
void func_0020ccc0(void* work, const u8* color)
{
    u8* panel = (u8*)work;

    panel[0x0c] = color[0];
    panel[0x0d] = color[1];
    panel[0x0e] = color[2];
    panel[0x0f] = color[3];
    panel[0x30] = color[0];
    panel[0x31] = color[1];
    panel[0x32] = color[2];
    panel[0x33] = color[3];
    panel[0x54] = color[0];
    panel[0x55] = color[1];
    panel[0x56] = color[2];
    panel[0x57] = color[3];
    panel[0x78] = color[0];
    panel[0x79] = color[1];
    panel[0x7a] = color[2];
    panel[0x7b] = color[3];
}

// FUN_0020cd50
void func_0020cd50(void* work, void* resource)
{
    func_0020cda0(resource);
    *(void**)((u8*)work + 0xdc) = resource;
    *(u32*)work |= 8;
}

#pragma push
/* Removing this worsens FUN_0020cda0 (nd12 -> nd259) and 1 more - measured W161. */
#pragma opt_loop_invariants on
/* W389 preheader direct-global rewrite nd12/384B -> nd12/384B (neutral); reverted, residual is hoist order. */
/* W414 full fndiff/JAL review: retail and candidate each call K_ASSERT once; direct-global/preheader probes stayed nd12/384B (window 384B), reverted. Remaining rows are preheader hoist-order differences. */
/* W419 static-inline gcMul(rowStep, row) operand-order probe stayed nd12/384B (window384, rate .031250), reverted. */
// FUN_0020cda0
#ifndef PC_BUILD
asm void func_0020cda0(u8* work)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0000
  .word 0xac800000
  .word 0x3c053f00
  .word 0xac8509a0
  .word 0x3c033ec0
  .word 0xac8309a4
  .word 0x248c0004
  .word 0x0000502d
  .word 0x24060007
  .word 0x24080008
  .word 0xc7888338
  .word 0xc7878318
  .word 0x44852000
  .word 0x3c0340c0
  .word 0x44832800
  .word 0x44803000
  .word 0x3c034040
  .word 0x44831800
  .word 0x10000038
  .word 0x00000000
  .word 0x01401827
  .word 0x30690001
  .word 0x11200004
  .word 0x00000000
  .word 0x0100382d
  .word 0x10000002
  .word 0x00000000
  .word 0x00c0382d
  .word 0x0000582d
  .word 0x448a0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46004002
  .word 0x46070241
  .word 0x24e5ffff
  .word 0x10000023
  .word 0x00000000
  .word 0x11200012
  .word 0x00000000
  .word 0x15600004
  .word 0x00000000
  .word 0x46003006
  .word 0x10000010
  .word 0x00000000
  .word 0x15650004
  .word 0x00000000
  .word 0x46002806
  .word 0x1000000b
  .word 0x00000000
  .word 0x2563ffff
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46002000
  .word 0x10000004
  .word 0x00000000
  .word 0x448b0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46030001
  .word 0xe7a00010
  .word 0xe7a90014
  .word 0xafa00018
  .word 0xc7a20010
  .word 0xc7a10014
  .word 0xc7a00018
  .word 0xe5820000
  .word 0xe5810004
  .word 0xe5800008
  .word 0x256b0001
  .word 0x258c0024
  .word 0x0167182a
  .word 0x1460ffdc
  .word 0x00000000
  .word 0x254a0001
  .word 0x29430009
  .word 0x1460ffc7
  .word 0x00000000
  .word 0x24830004
  .word 0x01832023
  .word 0x24030024
  .word 0x0083001a
  .word 0x00002012
  .word 0x24030044
  .word 0x10830006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e0a0
  .word 0x24050591
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma push
static inline f32 gcModelMul(f32 left, f32 right)
{
    return left * right;
}

#pragma opt_lifetimes on
// FUN_0020cf20
#ifndef PC_BUILD
asm void func_0020cf20(void* destination, PanelTransform* transform)
{
  .set noreorder
  .word 0x27bdfec0
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
  .word 0x0080a02d
  .word 0x00a0902d
  .word 0x3c020069
  .word 0xdc43e0c8
  .word 0x3c020069
  .word 0xc440e0d0
  .word 0xffa30130
  .word 0xe7a00138
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x24500030
  .word 0x3c020069
  .word 0xdc43e0d8
  .word 0x3c020069
  .word 0xc440e0e0
  .word 0xffa300d0
  .word 0xe7a000d8
  .word 0x3c020069
  .word 0xdc43e0e8
  .word 0x3c020069
  .word 0xc440e0f0
  .word 0xffa300c0
  .word 0xe7a000c8
  .word 0x3c020069
  .word 0xdc43e0f8
  .word 0x3c020069
  .word 0xc440e100
  .word 0xffa300b0
  .word 0xe7a000b8
  .word 0x0c130e30
  .word 0x00000000
  .word 0x0040882d
  .word 0x0220202d
  .word 0x0240282d
  .word 0x0c0832a4
  .word 0x00000000
  .word 0x27a400d0
  .word 0x0080282d
  .word 0x0220302d
  .word 0x0c131b18
  .word 0x00000000
  .word 0xc6820994
  .word 0xc6810998
  .word 0xc680099c
  .word 0xe7a200e0
  .word 0xe7a100e4
  .word 0xe7a000e8
  .word 0x8e440038
  .word 0x1080000a
  .word 0x00000000
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x27a40100
  .word 0x26450020
  .word 0x0040302d
  .word 0x0c131af8
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0xc6420020
  .word 0xc6410024
  .word 0xc6400028
  .word 0xe7a20100
  .word 0xe7a10104
  .word 0xe7a00108
  .word 0xc6010008
  .word 0xc7a00108
  .word 0x46000941
  .word 0xc7a400d8
  .word 0xc6010000
  .word 0xc7a00100
  .word 0x460008c1
  .word 0xc7a200d0
  .word 0xc6010004
  .word 0xc7a00104
  .word 0x46000841
  .word 0xc7a000d4
  .word 0x4601001a
  .word 0x44800800
  .word 0x4603101e
  .word 0x4605201c
  .word 0x8e830000
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae820000
  .word 0x46010034
  .word 0x4500000b
  .word 0x00000000
  .word 0x3c024334
  .word 0x44826000
  .word 0x0220202d
  .word 0x27a500c0
  .word 0x24060001
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x8e820000
  .word 0x34420001
  .word 0xae820000
  .word 0x265e0040
  .word 0xafa00100
  .word 0xafa00104
  .word 0x3c0242c8
  .word 0xafa20108
  .word 0x27a40100
  .word 0x0080282d
  .word 0x0220302d
  .word 0x0c131af8
  .word 0x00000000
  .word 0x27a400b0
  .word 0x27a50130
  .word 0x0220302d
  .word 0x0c131b18
  .word 0x00000000
  .word 0x27a400b0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x26920004
  .word 0x0000a82d
  .word 0xc7b500e4
  .word 0xc7b400e8
  .word 0x100000d7
  .word 0x00000000
  .word 0x02a01027
  .word 0x30570001
  .word 0x12e00004
  .word 0x00000000
  .word 0x24160008
  .word 0x10000002
  .word 0x00000000
  .word 0x24160007
  .word 0x0000982d
  .word 0x100000c8
  .word 0x00000000
  .word 0x12e00017
  .word 0x00000000
  .word 0x16600004
  .word 0x00000000
  .word 0x44800800
  .word 0x10000015
  .word 0x00000000
  .word 0x26c2ffff
  .word 0x16620005
  .word 0x00000000
  .word 0x3c0240c0
  .word 0x44820800
  .word 0x1000000e
  .word 0x00000000
  .word 0x2662ffff
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x10000004
  .word 0x00000000
  .word 0x44930000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a00100
  .word 0x44950000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46000841
  .word 0xc7808330
  .word 0x46010002
  .word 0xe7a00104
  .word 0xafa00108
  .word 0x27a400f0
  .word 0x27a50100
  .word 0x0220302d
  .word 0x0c131af8
  .word 0x00000000
  .word 0xc7a100f0
  .word 0xc6000000
  .word 0x46000801
  .word 0xe7a00110
  .word 0xc6010004
  .word 0xc7a000f4
  .word 0x46010001
  .word 0xe7a00114
  .word 0xc6010008
  .word 0xc7a000f8
  .word 0x46010001
  .word 0xe7a00118
  .word 0x27a40110
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a100f0
  .word 0xc7a000e0
  .word 0x46000801
  .word 0xe7a00120
  .word 0xc7a000f4
  .word 0x46150001
  .word 0xe7a00124
  .word 0xc7a000f8
  .word 0x46140001
  .word 0xe7a00128
  .word 0x27a40120
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a40134
  .word 0xc7a80114
  .word 0xc7a20130
  .word 0xc7a70110
  .word 0xc7a10138
  .word 0xc7a30118
  .word 0x4604401a
  .word 0x4480b000
  .word 0x4602381e
  .word 0x4601181c
  .word 0x46001082
  .word 0x46002182
  .word 0x46000842
  .word 0x46030801
  .word 0x46000940
  .word 0xc7a40128
  .word 0x46071001
  .word 0x460010c0
  .word 0xc7a20120
  .word 0x46083001
  .word 0x46003040
  .word 0xc7a00124
  .word 0x4601001a
  .word 0x4603101e
  .word 0x4605205c
  .word 0x46160836
  .word 0x45000003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x46010802
  .word 0x46000802
  .word 0x46000802
  .word 0x46000802
  .word 0x46000d82
  .word 0xc7a100e0
  .word 0xc7a000f0
  .word 0x46000801
  .word 0xe7a00120
  .word 0xc7a000f4
  .word 0x4600a801
  .word 0xe7a00124
  .word 0xc7a000f8
  .word 0x4600a001
  .word 0xe7a00128
  .word 0x27a40120
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a60128
  .word 0xc7a500b8
  .word 0xc7a40120
  .word 0xc7a300b0
  .word 0xc7a10124
  .word 0xc7a000b4
  .word 0x4600081a
  .word 0x44801000
  .word 0x00000000
  .word 0x4603201e
  .word 0x4605301c
  .word 0xc68109a0
  .word 0x46020036
  .word 0x45000003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x46000086
  .word 0xc68009a4
  .word 0x4600101a
  .word 0x4601b05c
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010002
  .word 0x00000000
  .word 0x46000046
  .word 0x93c20003
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
  .word 0xa243000c
  .word 0xa243000d
  .word 0xa243000e
  .word 0xa243000f
  .word 0x26730001
  .word 0x26520024
  .word 0x0276102a
  .word 0x1440ff37
  .word 0x00000000
  .word 0x26b50001
  .word 0x2aa20009
  .word 0x1440ff28
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c130e20
  .word 0x00000000
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
  .word 0x27bd0140
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_lifetimes reset
#pragma pop

// FUN_0020d500
void sflResDrawIndexedMesh(u32* work, const f32* vertices)
{
    RwV3d axis;
    RwMatrix* matrix;
    u32* destination;
    s32 count;
    const u32* source;
    u32 x;
    u32 y;

    axis = DAT_0068e108;
    if ((*work & 1) != 0) {
        matrix = (RwMatrix*)func_004c38c0();
        count = 8;
        source = (const u32*)vertices;
        destination = (u32*)matrix;
        do {
            x = source[0];
            y = source[1];
            source += 2;
            count -= 1;
            destination[0] = x;
            destination[1] = y;
            destination += 2;
        } while (count > 0);
        func_004c31b0(matrix, &axis, 180.0f, 1);
    } else {
        matrix = (RwMatrix*)vertices;
    }
    func_004f1ed0(work + 1, 0x44, matrix, 3);
    (*DAT_00960090)(1, 0);
    func_004f1fd0(3, D_00875A90, 0x138);
    func_004f1f80();
    if ((*work & 1) != 0) {
        func_004c3880(matrix);
    }
}

// FUN_0020D630
void sflResSetSpriteScale(void* work, const f32* value)
{
    *(RwV3d*)((u8*)work + 0x2c) = *(const RwV3d*)value;
}

// FUN_0020D650
void sflResSetSpritePosition(void* work, const f32* value)
{
    *(RwV3d*)((u8*)work + 0x20) = *(const RwV3d*)value;
}

// FUN_0020D670
void sflResGetSpritePosition(const void* work, f32* value)
{
    *(RwV3d*)value = *(const RwV3d*)((const u8*)work + 0x20);
}

// FUN_0020d690
void sflResSetSpriteRotation(void* work, const f32* value)
{
    *(RwV4d*)((u8*)work + 0x10) = *(const RwV4d*)value;
}

// FUN_0020d6c0
void sflRes0020d6c0(void* work)
{
    K_ASSERT(*(u32*)((u8*)work + 4) == 0, 0x677);
    *(u32*)((u8*)work + 0x170) |= 1;
}

// FUN_0020d710
void sflRes0020d710(u32* work)
{
    K_ASSERT(work[1] == 0, 0x67e);
    work[0x5c] |= 2;
    work[0] |= 2;
}
/* W389 measured opt_lifetimes on: nd632/1492B -> nd627/1492B (window 1504B). */
// FUN_0020d770
void sflRes0020d770(void* work, f32 value)
{
    K_ASSERT(*(u32*)((u8*)work + 4) == 1, 0x686);
    *(f32*)((u8*)work + 0x328) = value;
}
