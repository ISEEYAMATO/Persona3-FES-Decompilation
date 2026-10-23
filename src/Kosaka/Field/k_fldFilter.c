#include "Kosaka/Field/k_fldFilter.h"
#include "Kosaka/Field/k_fldCamera.h"
#include "Kosaka/Field/k_fldFrame.h"
#include "Kosaka/Field/k_field.h"
#include "Kernel/Kwln/kwln.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Scene/resrcManager.h"
#include "Kosaka/k_draw.h"
#include "Kosaka/k_assert.h"
#include "rw/rwcore.h"
#include "h_cdvd.h"
#include "temporary.h"

#define FLDFILTER_FILE_SIZE 74752 // in bytes

// num of pixels in a single quad
#define FLDFILTER_QUAD_XPIXELS 80
#define FLDFILTER_QUAD_YPIXELS 64
#define FLDFILTER_GRID_WIDTH  (SCREEN_WIDTH / FLDFILTER_QUAD_XPIXELS)  // 8
#define FLDFILTER_GRID_HEIGHT (SCREEN_HEIGHT / FLDFILTER_QUAD_YPIXELS) // 7

// 256 bytes
typedef struct
{
    RwIm2DVertex vert[4]; // 0x00
} FilterQuad;

/* The filter controller keeps the first six words in the small-BSS block. */
extern void* sFilterFile;
extern s32 sFilterColorOffset;
extern s32 sFilterCurrent;
extern f32 sFilterPrevious;
extern f32 sFilterBlend;
extern s32 sFilterBlendDuration;
extern FilterQuad sFilterGrid[FLDFILTER_GRID_HEIGHT][FLDFILTER_GRID_WIDTH];
#pragma alias sFilterGrid_abs sFilterGrid
extern u8 sFilterGrid_abs[];

/* This word belongs to the neighbouring field-resource work block. */
extern s32 gp0xffff95d8;
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
extern void func_004c69f0(RwV3d* output, const RwV3d* input);
extern void func_004cb420(RwFrame* parent, RwFrame* child);
extern void func_004cb590(RwFrame* frame);
extern RwFrame* func_004caf10(void);
extern RwFrame* func_004caf80(RwFrame* frame);
extern void func_004cb930(RwFrame* frame);
extern void func_004cb750(RwFrame* frame, const RwV3d* translation, RwOpCombineType combine);
extern void FUN_001a1210(RwCamera* camera, const RwV3d* at, const RwV3d* position, const RwV3d* up);
extern void* FUN_0048d480(f32 frame, void* curve, s32 flags, RwV3d* output, s32 unused);
extern s32 func_00530da0(f32 value);
extern const char D_00683A48[];
extern const char D_007CC2CC[];

/* Work data for the field camera controller (the public header intentionally
 * keeps the post-camera fields opaque). */
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

// FUN_001d4460
#ifndef PC_BUILD
asm static void K_FldFilter_InitQuads(RwCamera* camera)
{
  .set noreorder
  .word 0xc4850080
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46050103
  .word 0x0000482d
  .word 0x3c070087
  .word 0x24e72240
  .word 0x10000031
  .word 0x00000000
  .word 0x0000402d
  .word 0x00091ac0
  .word 0x00e33021
  .word 0x00092180
  .word 0x24830040
  .word 0x44840000
  .word 0x00000000
  .word 0x468000a0
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000020
  .word 0x00000000
  .word 0x00081880
  .word 0x00681821
  .word 0x00032900
  .word 0x00081a00
  .word 0x00c32021
  .word 0x44850800
  .word 0x00000000
  .word 0x468008e0
  .word 0xe4830000
  .word 0xe4820004
  .word 0xe4850008
  .word 0x25080001
  .word 0x00081880
  .word 0x00681821
  .word 0x00031900
  .word 0x44830800
  .word 0x00000000
  .word 0x46800860
  .word 0xe4810040
  .word 0xe4820044
  .word 0xe4850048
  .word 0xe4830080
  .word 0xe4800084
  .word 0xe4850088
  .word 0xe48100c0
  .word 0xe48000c4
  .word 0xe48500c8
  .word 0xe4840018
  .word 0xe4840058
  .word 0xe4840098
  .word 0xe48400d8
  .word 0x29030008
  .word 0x1460ffdf
  .word 0x00000000
  .word 0x25290001
  .word 0x29230007
  .word 0x1460ffce
  .word 0x00000000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001d4560
void K_FldFilter_Init()
{
    HCdvd* cdvd;

    if (sFilterFile == NULL)
    {
        sFilterFile = RwCalloc(1, FLDFILTER_FILE_SIZE, rwMEMHINTDUR_GLOBAL);
    }

    cdvd = H_Cdvd_Request("field/FILTER.FLD", HCDVD_FILENORMAL);
    H_Cdvd_ReadSync(cdvd);

    memcpy(sFilterFile, cdvd->fileMemory, FLDFILTER_FILE_SIZE);

    H_Cdvd_Destroy(cdvd);

    K_FldFilter_InitQuads(kwlnGetMainCamera());
}

// FUN_001d4610
#ifndef PC_BUILD
asm void K_FldFilter_Main()
{
  .set noreorder
  .word 0x27bdfe40
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
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f92b5b0
  .word 0x1240028b
  .word 0x00000000
  .word 0xc782b5b8
  .word 0x3c023f80
  .word 0x44820800
  .word 0x00000000
  .word 0x46011034
  .word 0x4500000b
  .word 0x00000000
  .word 0xc780b5bc
  .word 0x00000000
  .word 0x46000803
  .word 0x46001000
  .word 0xe780b5b8
  .word 0x46010036
  .word 0x45010003
  .word 0x00000000
  .word 0xe781b5b8
  .word 0xaf92b5b4
  .word 0x8f91b5b4
  .word 0xc795b5b8
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46150501
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521021
  .word 0x000210c0
  .word 0x00521021
  .word 0x00021080
  .word 0xafa201a0
  .word 0x8f83b5a8
  .word 0x00621021
  .word 0x8c430000
  .word 0x24020003
  .word 0x1062001a
  .word 0x00000000
  .word 0x24040002
  .word 0x10640012
  .word 0x00000000
  .word 0x24020001
  .word 0x1062000a
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x24050042
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x24040002
  .word 0x24050006
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x0000802d
  .word 0x001110c0
  .word 0x00511021
  .word 0x000210c0
  .word 0x00511021
  .word 0x00021080
  .word 0x7fa20190
  .word 0x10000216
  .word 0x00000000
  .word 0x0000882d
  .word 0x001010c0
  .word 0x00501021
  .word 0x00021880
  .word 0x8fa201a0
  .word 0x00431021
  .word 0x7fa20180
  .word 0x7ba20190
  .word 0x00431021
  .word 0x7fa20170
  .word 0x00101ac0
  .word 0x3c020087
  .word 0x24422240
  .word 0x00431021
  .word 0x7fa20160
  .word 0x10000201
  .word 0x00000000
  .word 0x8f83b5a8
  .word 0x7ba20180
  .word 0x00431821
  .word 0x00111080
  .word 0x00622021
  .word 0x8c830004
  .word 0x307200ff
  .word 0x00031203
  .word 0x305900ff
  .word 0x00031403
  .word 0x305800ff
  .word 0x00031603
  .word 0x304700ff
  .word 0x8c830008
  .word 0x306e00ff
  .word 0x00031203
  .word 0x304d00ff
  .word 0x00031403
  .word 0x304c00ff
  .word 0x00031603
  .word 0x304300ff
  .word 0x8c85002c
  .word 0x30aa00ff
  .word 0x00051203
  .word 0x304900ff
  .word 0x00051403
  .word 0x304800ff
  .word 0x00051603
  .word 0x304200ff
  .word 0x8c8b0028
  .word 0x316600ff
  .word 0x000b2203
  .word 0x308500ff
  .word 0x000b2403
  .word 0x308400ff
  .word 0x000b5e03
  .word 0x317400ff
  .word 0x8f93b5ac
  .word 0x00f37821
  .word 0x00735821
  .word 0x00533821
  .word 0x02931821
  .word 0x05e10002
  .word 0x00000000
  .word 0x0000782d
  .word 0x29e10100
  .word 0x14200002
  .word 0x00000000
  .word 0x240f00ff
  .word 0x05610002
  .word 0x00000000
  .word 0x0000582d
  .word 0x29610100
  .word 0x14200002
  .word 0x00000000
  .word 0x240b00ff
  .word 0x04e10002
  .word 0x00000000
  .word 0x0000382d
  .word 0x28e10100
  .word 0x14200002
  .word 0x00000000
  .word 0x240700ff
  .word 0xc781b5b8
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x450000f6
  .word 0x00000000
  .word 0x8f93b5a8
  .word 0x7ba20170
  .word 0x00539821
  .word 0x00111080
  .word 0x02621021
  .word 0x8c530004
  .word 0x327400ff
  .word 0x7fb40150
  .word 0x0013a203
  .word 0x329400ff
  .word 0x7fb40140
  .word 0x0013a403
  .word 0x329400ff
  .word 0x7fb40130
  .word 0x00139e03
  .word 0x327300ff
  .word 0x7fb30120
  .word 0x8c530008
  .word 0x327400ff
  .word 0x7fb40110
  .word 0x0013a203
  .word 0x329400ff
  .word 0x7fb40100
  .word 0x0013a403
  .word 0x329400ff
  .word 0x7fb400f0
  .word 0x00139e03
  .word 0x327500ff
  .word 0x8c53002c
  .word 0x327400ff
  .word 0x7fb400e0
  .word 0x0013a203
  .word 0x329400ff
  .word 0x7fb400d0
  .word 0x0013a403
  .word 0x329400ff
  .word 0x7fb400c0
  .word 0x00139e03
  .word 0x327400ff
  .word 0x8c420028
  .word 0x305300ff
  .word 0x7fb300b0
  .word 0x00029a03
  .word 0x327e00ff
  .word 0x00029c03
  .word 0x327700ff
  .word 0x00021603
  .word 0x305600ff
  .word 0x8f93b5ac
  .word 0x7ba20120
  .word 0x00531021
  .word 0x02b3a821
  .word 0x0293a021
  .word 0x02d39821
  .word 0x04410002
  .word 0x00000000
  .word 0x0000102d
  .word 0x28410100
  .word 0x14200002
  .word 0x00000000
  .word 0x240200ff
  .word 0x06a10002
  .word 0x00000000
  .word 0x0000a82d
  .word 0x2aa10100
  .word 0x14200002
  .word 0x00000000
  .word 0x241500ff
  .word 0x06810002
  .word 0x00000000
  .word 0x0000a02d
  .word 0x2a810100
  .word 0x14200002
  .word 0x00000000
  .word 0x241400ff
  .word 0x44920000
  .word 0x00000000
  .word 0x46800060
  .word 0x7bb20150
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x4614001a
  .word 0x4615081c
  .word 0x46000024
  .word 0x44120000
  .word 0x44990000
  .word 0x00000000
  .word 0x46800060
  .word 0x7bb60140
  .word 0x44960000
  .word 0x00000000
  .word 0x46800020
  .word 0x4614001a
  .word 0x4615081c
  .word 0x46000024
  .word 0x44190000
  .word 0x44980000
  .word 0x00000000
  .word 0x46800060
  .word 0x7bb60130
  .word 0x44960000
  .word 0x00000000
  .word 0x46800020
  .word 0x4614001a
  .word 0x4615081c
  .word 0x46000024
  .word 0x44180000
  .word 0x448f0000
  .word 0x00000000
  .word 0x46800060
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4614001a
  .word 0x4615081c
  .word 0x46000024
  .word 0x440f0000
  .word 0x448e0000
  .word 0x00000000
  .word 0x46800060
  .word 0x7ba20110
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4614001a
  .word 0x4615081c
  .word 0x46000024
  .word 0x440e0000
  .word 0x448d0000
  .word 0x00000000
  .word 0x46800060
  .word 0x7ba20100
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4614001a
  .word 0x4615081c
  .word 0x46000024
  .word 0x440d0000
  .word 0x448c0000
  .word 0x00000000
  .word 0x46800060
  .word 0x7ba200f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4614001a
  .word 0x4615081c
  .word 0x46000024
  .word 0x440c0000
  .word 0x448b0000
  .word 0x00000000
  .word 0x46800060
  .word 0x44950000
  .word 0x00000000
  .word 0x46800020
  .word 0x4614001a
  .word 0x4615081c
  .word 0x46000024
  .word 0x440b0000
  .word 0x448a0000
  .word 0x00000000
  .word 0x46800060
  .word 0x7ba200e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4614001a
  .word 0x4615081c
  .word 0x46000024
  .word 0x440a0000
  .word 0x44890000
  .word 0x00000000
  .word 0x46800060
  .word 0x7ba200d0
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4614001a
  .word 0x4615081c
  .word 0x46000024
  .word 0x44090000
  .word 0x44880000
  .word 0x00000000
  .word 0x46800060
  .word 0x7ba200c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4614001a
  .word 0x4615081c
  .word 0x46000024
  .word 0x44080000
  .word 0x44870000
  .word 0x00000000
  .word 0x46800060
  .word 0x44940000
  .word 0x00000000
  .word 0x46800020
  .word 0x4614001a
  .word 0x4615081c
  .word 0x46000024
  .word 0x44070000
  .word 0x44860000
  .word 0x00000000
  .word 0x46800060
  .word 0x7ba200b0
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4614001a
  .word 0x4615081c
  .word 0x46000024
  .word 0x44060000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800060
  .word 0x449e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x4614001a
  .word 0x4615081c
  .word 0x46000024
  .word 0x44050000
  .word 0x44840000
  .word 0x00000000
  .word 0x46800060
  .word 0x44970000
  .word 0x00000000
  .word 0x46800020
  .word 0x4614001a
  .word 0x4615081c
  .word 0x46000024
  .word 0x44040000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x4614001a
  .word 0x4615081c
  .word 0x46000024
  .word 0x44030000
  .word 0x8f9395d8
  .word 0x240200ff
  .word 0x12620051
  .word 0x00000000
  .word 0x02539018
  .word 0x0242001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00009012
  .word 0x7333a018
  .word 0x0282001a
  .word 0x00000000
  .word 0x00000000
  .word 0x0000c812
  .word 0x7313a018
  .word 0x0282001a
  .word 0x00000000
  .word 0x00000000
  .word 0x0000c012
  .word 0x71f37818
  .word 0x01e2001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00007812
  .word 0x71d37018
  .word 0x01c2001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00007012
  .word 0x71b36818
  .word 0x01a2001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00006812
  .word 0x71936018
  .word 0x0182001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00006012
  .word 0x71735818
  .word 0x0162001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00005812
  .word 0x71535018
  .word 0x0142001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00005012
  .word 0x71334818
  .word 0x0122001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00004812
  .word 0x71134018
  .word 0x0102001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00004012
  .word 0x70f33818
  .word 0x00e2001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00003812
  .word 0x70d33018
  .word 0x00c2001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00003012
  .word 0x70b32818
  .word 0x00a2001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00002812
  .word 0x70932018
  .word 0x0082001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00002012
  .word 0x70731818
  .word 0x0062001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001812
  .word 0x27b301b0
  .word 0x24020010
  .word 0x12600008
  .word 0x00000000
  .word 0xa2600000
  .word 0x26730001
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0xa3b201b0
  .word 0xa3b901b1
  .word 0xa3b801b2
  .word 0xa3af01b3
  .word 0xa3ae01b4
  .word 0xa3ad01b5
  .word 0xa3ac01b6
  .word 0xa3ab01b7
  .word 0xa3a601b8
  .word 0xa3a501b9
  .word 0xa3a401ba
  .word 0xa3a301bb
  .word 0xa3aa01bc
  .word 0xa3a901bd
  .word 0xa3a801be
  .word 0xa3a701bf
  .word 0x0000102d
  .word 0x00112200
  .word 0x7ba30160
  .word 0x00642821
  .word 0x10000047
  .word 0x00000000
  .word 0x00021880
  .word 0x007d1821
  .word 0x246701b0
  .word 0x00021980
  .word 0x00a33021
  .word 0x90e30000
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
  .word 0xe4c00020
  .word 0x90e30001
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
  .word 0xe4c00024
  .word 0x90e30002
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
  .word 0xe4c00028
  .word 0x90e30003
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
  .word 0xe4c0002c
  .word 0x24420001
  .word 0x28430004
  .word 0x1460ffb8
  .word 0x00000000
  .word 0x24040004
  .word 0x0080302d
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0x26310001
  .word 0x2a220008
  .word 0x1440fdfe
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020007
  .word 0x1440fde9
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
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd01c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001d50c0
void FUN_001d50c0(s32 index, u32 type, s32 duration)
{
    if (duration == 0)
    {
        sFilterBlend = 1.0f;
        sFilterBlendDuration = index;
        sFilterPrevious = 1.0f;
    }
    else
    {
        sFilterBlend = 0.0f;
        sFilterBlendDuration = sFilterCurrent;
        sFilterPrevious = (f32)duration;
    }
    sFilterCurrent = index;
    *(u32*)((u8*)sFilterFile + index * 0x124) = type;
}

// FUN_001d5130
void FUN_001d5130(u32 alpha)
{
    FLDFILTER_ALPHA = alpha;
}

/* Return the closest camera point to the controlled character. */
// FUN_001d5140
s32 FUN_001d5140(KwlnTask* cameraTask)
{
    s32 bestIndex;
    FldFilterCameraWork* work;
    FldFilterCameraWork* indexedWork;
    struct
    {
        RwV3d playerPos;
        u32 alignment;
        RwV3d pointCopy;
    } scratch;
#define playerPos scratch.playerPos
#define pointCopy scratch.pointCopy
    f32 bestDistance;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 distance;
    f32 pointY;
    f32 pointZ;
    f32 pointX;
    s32 index;

    work = (FldFilterCameraWork*)cameraTask->workData;
    K_FldFrame_CtlCopyPos(&playerPos, work->playerResrc->collisCtlTask);
    pointCopy = playerPos;
    bestDistance = fGpffff8248;
    index = 0;
    pointY = pointCopy.y;
    pointZ = pointCopy.z;
    pointX = pointCopy.x;
    for (; index < 9; index++)
    {
        indexedWork = work;
        indexedWork = (FldFilterCameraWork*)((s32)indexedWork + index * sizeof(RwV3d));
        dx = indexedWork->cameraPoints[0].x - pointX;
        dy = indexedWork->cameraPoints[0].y - pointY;
        dz = indexedWork->cameraPoints[0].z - pointZ;
        distance = sqrtf(dx * dx + dy * dy + dz * dz);
        if (bestDistance > distance)
        {
            bestDistance = distance;
            bestIndex = index;
        }
    }
    return bestIndex;
#undef pointCopy
#undef playerPos
}
// FUN_001d5220
#pragma push
#pragma schedule on
#ifndef PC_BUILD
asm void* FUN_001d5220(KwlnTask* cameraTask)
{
  .set noreorder
  .word 0x27bdfec0
  .word 0xffbf00a0
  .word 0x7fb70090
  .word 0x7fb60080
  .word 0x7fb50070
  .word 0x7fb40060
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
  .word 0x0080a02d
  .word 0x8c92003c
  .word 0x8e4500cc
  .word 0x14a00004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100001c3
  .word 0x00000000
  .word 0x8e430000
  .word 0x24020001
  .word 0x106201be
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100001ba
  .word 0x00000000
  .word 0x8e420008
  .word 0x2c410006
  .word 0x1020019a
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636c60
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x27a400c0
  .word 0x8ca501e0
  .word 0x0c06b650
  .word 0x00000000
  .word 0xc7a200c0
  .word 0xc7a100c4
  .word 0xc7a000c8
  .word 0xe7a20130
  .word 0xe7a10134
  .word 0xe7a00138
  .word 0x0280202d
  .word 0x0c075784
  .word 0x00000000
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a20120
  .word 0xe7a10124
  .word 0xe7a00128
  .word 0x0000802d
  .word 0x8e430008
  .word 0x10600004
  .word 0x00000000
  .word 0x24020005
  .word 0x14620019
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c420004
  .word 0x8c430004
  .word 0x8e420010
  .word 0x14620029
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132d64
  .word 0x00000000
  .word 0x8e440010
  .word 0x8e45000c
  .word 0x0c132d08
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8e44000c
  .word 0x8c450004
  .word 0x0c132d08
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c420004
  .word 0x8c420004
  .word 0x10400006
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c132d64
  .word 0x00000000
  .word 0x8e44000c
  .word 0x8c820004
  .word 0x10400003
  .word 0x00000000
  .word 0x0c132d64
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8e440010
  .word 0x8c450004
  .word 0x0c132d08
  .word 0x00000000
  .word 0xc6410014
  .word 0xc7a00130
  .word 0x46010080
  .word 0xe7a20130
  .word 0xc6410018
  .word 0xc7a00134
  .word 0x460100c0
  .word 0xe7a30134
  .word 0xc641001c
  .word 0xc7a00138
  .word 0x46010040
  .word 0xe7a10138
  .word 0xc7a00120
  .word 0x46001081
  .word 0xe7a20110
  .word 0xc7a00124
  .word 0x46001d01
  .word 0xe7b40114
  .word 0xc7a00128
  .word 0x46000801
  .word 0xe7a00118
  .word 0x4600001a
  .word 0x44800800
  .word 0x4602101c
  .word 0x46000084
  .word 0x00000000
  .word 0xc6400020
  .word 0x46001036
  .word 0x45010016
  .word 0x00000000
  .word 0x46001541
  .word 0xe7a10114
  .word 0x27a40110
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00110
  .word 0x46150002
  .word 0xe7a00110
  .word 0xc7a00114
  .word 0x46150002
  .word 0xe7a00114
  .word 0xc7a00118
  .word 0x46150002
  .word 0xe7a00118
  .word 0x8e44000c
  .word 0x27a50110
  .word 0x24060002
  .word 0x0c132dd4
  .word 0x00000000
  .word 0x24100001
  .word 0xe7b40114
  .word 0x44800000
  .word 0x00000000
  .word 0x4600a034
  .word 0x45000005
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0xc6410024
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010014
  .word 0x00000000
  .word 0x4600a081
  .word 0x44800800
  .word 0xafa00110
  .word 0xafa00118
  .word 0xc7a00114
  .word 0x46010034
  .word 0x45000005
  .word 0x00000000
  .word 0x46001007
  .word 0xe7a00114
  .word 0x10000002
  .word 0x00000000
  .word 0xe7a20114
  .word 0x8e44000c
  .word 0x27a50110
  .word 0x24060002
  .word 0x0c132dd4
  .word 0x00000000
  .word 0x24100001
  .word 0x24020001
  .word 0x160200ed
  .word 0x00000000
  .word 0x8e430008
  .word 0x24020002
  .word 0x146200e9
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c420004
  .word 0xc4420040
  .word 0xc4410044
  .word 0xc4400048
  .word 0xe7a20100
  .word 0xe7a10104
  .word 0xe7a00108
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040802d
  .word 0x0280202d
  .word 0x0c075784
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a50100
  .word 0x0040302d
  .word 0x0000382d
  .word 0x0c068484
  .word 0x00000000
  .word 0x100000d2
  .word 0x00000000
  .word 0x27a400b0
  .word 0x8ca501e0
  .word 0x0c06b650
  .word 0x00000000
  .word 0xc7a200b0
  .word 0xc7a100b4
  .word 0xc7a000b8
  .word 0xe7a200f0
  .word 0xe7a100f4
  .word 0xe7a000f8
  .word 0x0280202d
  .word 0x0c075450
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x8c420a1c
  .word 0x104000be
  .word 0x00000000
  .word 0x2613ffff
  .word 0x06610002
  .word 0x00000000
  .word 0x0000982d
  .word 0x26040001
  .word 0x28810009
  .word 0x14200002
  .word 0x00000000
  .word 0x24040008
  .word 0x00131040
  .word 0x00531021
  .word 0x00028880
  .word 0x02321821
  .word 0x00041040
  .word 0x00441021
  .word 0x00028080
  .word 0x02121021
  .word 0xc4400060
  .word 0xc4670060
  .word 0x46070601
  .word 0xe7b800e0
  .word 0xc4400064
  .word 0xc4660064
  .word 0x46060641
  .word 0xe7b900e4
  .word 0xc4400068
  .word 0xc4650068
  .word 0x460505c1
  .word 0xe7b700e8
  .word 0xc7a000f0
  .word 0x46003881
  .word 0xc7a000f4
  .word 0x46003041
  .word 0xc7a000f8
  .word 0x46002801
  .word 0x4619081a
  .word 0x44802000
  .word 0x4618101e
  .word 0x4617001c
  .word 0x46000047
  .word 0x4619c8c2
  .word 0x46032018
  .word 0x4618c01e
  .word 0x4617b81c
  .word 0x46000803
  .word 0x46072018
  .word 0x4600c09c
  .word 0x46062018
  .word 0x4600c85c
  .word 0x46052018
  .word 0x4600b81c
  .word 0xe7b800e0
  .word 0xe7b900e4
  .word 0xe7b700e8
  .word 0x46071581
  .word 0x46060d41
  .word 0x46050501
  .word 0x46032018
  .word 0x4618c01e
  .word 0x4617b81c
  .word 0x46000304
  .word 0x4615a81a
  .word 0x4616b01e
  .word 0x4614a01c
  .word 0x460006c4
  .word 0x00000000
  .word 0x00000000
  .word 0x460cde83
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040a82d
  .word 0x4600db06
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040b02d
  .word 0x4600d306
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040b82d
  .word 0x4615c81a
  .word 0x4616c01e
  .word 0x4614bb1c
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c040068
  .word 0x24843a48
  .word 0x02a0282d
  .word 0x02c0302d
  .word 0x02e0382d
  .word 0x0040402d
  .word 0x0c14896a
  .word 0x00000000
  .word 0xc7a200e8
  .word 0xc7a100e0
  .word 0xc7a000e4
  .word 0x4615001a
  .word 0x4480a800
  .word 0x4616081e
  .word 0x4614101c
  .word 0x46150034
  .word 0x45000003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x4600d546
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a836
  .word 0x45010002
  .word 0x00000000
  .word 0x46000546
  .word 0x44800000
  .word 0x00000000
  .word 0x4600a834
  .word 0x45000002
  .word 0x00000000
  .word 0x46000546
  .word 0x3c023e80
  .word 0x44820000
  .word 0x00000000
  .word 0x4600ad42
  .word 0x4600ab06
  .word 0x0c14c368
  .word 0x00000000
  .word 0x278495dc
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c023e00
  .word 0x44820800
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000b02
  .word 0x460cad40
  .word 0x0c14c368
  .word 0x00000000
  .word 0x278495dc
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x4600ab06
  .word 0x0c14c368
  .word 0x00000000
  .word 0x278495dc
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a836
  .word 0x45010002
  .word 0x00000000
  .word 0x46000546
  .word 0x44800000
  .word 0x00000000
  .word 0x4600a834
  .word 0x45000002
  .word 0x00000000
  .word 0x46000546
  .word 0x0c06e448
  .word 0x00000000
  .word 0x8c42116c
  .word 0x8c440a1c
  .word 0x2405000a
  .word 0x4600ab06
  .word 0x27a600e0
  .word 0x0000382d
  .word 0x0c123520
  .word 0x00000000
  .word 0x8e440044
  .word 0x27a500e0
  .word 0x0c0691e0
  .word 0x00000000
  .word 0x02511021
  .word 0x8e440048
  .word 0x24450060
  .word 0x0c0691e0
  .word 0x00000000
  .word 0x02501021
  .word 0x8e44004c
  .word 0x24450060
  .word 0x0c0691e0
  .word 0x00000000
  .word 0x8e430004
  .word 0x3c028000
  .word 0x00621024
  .word 0x0002282b
  .word 0x8e840050
  .word 0x0c069238
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c075784
  .word 0x00000000
  .word 0x27a500d0
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe7a200d0
  .word 0xe7a100d4
  .word 0xe7a000d8
  .word 0x8e840050
  .word 0x0c06923c
  .word 0x00000000
  .word 0x8e840050
  .word 0xc64c0020
  .word 0x0c069248
  .word 0x00000000
  .word 0x8e840050
  .word 0xc64c0024
  .word 0x0c06924c
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf00a0
  .word 0x7bb70090
  .word 0x7bb60080
  .word 0x7bb50070
  .word 0x7bb40060
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
  .word 0x27bd0140
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop

// FUN_001d59e0
void FUN_001d59e0(KwlnTask* cameraTask)
{
    FldFilterCameraWork* work;

    work = (FldFilterCameraWork*)cameraTask->workData;
    if (((RwFrame*)kwlnGetMainCamera()->object.object.parent)->object.parent != NULL)
    {
        func_004cb590((RwFrame*)kwlnGetMainCamera()->object.object.parent);
    }
    if (work->frame->object.parent != NULL)
    {
        func_004cb590(work->frame);
    }
    func_004caf80(work->frame);
    func_004cb420(work->parentFrame, kwlnGetMainCamera()->object.object.parent);
    (*(void (**)(void*))D_0096017c_abs)(cameraTask->workData);
}

// W419 rejected probes (verify.py; nd/object/window and nd/object rate):
// K_FldFilter_InitQuads dependent rightOffset expression: 16/252/256 (0.0635) -> 78/244/256 (0.3197).
// K_FldFilter_Main stateFunc/vertices declaration swap: 1769/2732/2736 (0.6475) -> 1769/2732/2736 (no change).
// filter camera task state guard: 1230/1656/1984 (0.7428) -> 1232/1672/1984 (0.7368); aggregate-line local: 1254/1716/1984 (0.7308); both rejected.
// W420 state guard reconstruction: 1230/1656/1984 (0.7428) -> 1244/1680/1984 (0.7405), verified rate improvement.
/* W421 K_FldFilter_InitQuads probes: top/bottom materialization order
 * nd24/object252/window256 (0.095238); float declaration order
 * nd17/252/256 (0.067460); float locals first nd31/252/256 (0.123016);
 * integer declaration order stayed nd16/252/256 (0.063492). */
