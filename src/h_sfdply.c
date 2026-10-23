#include "Kernel/Kwln/kwln.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Script/scrTraceCode.h"
#include "h_dbprt.h"
#include "h_fade.h"
#include "h_cdvd.h"
#include "h_sfdply.h"
#include "rw/rwplcore.h"
#include "temporary.h"
#pragma alias rwGlobals_abs rwGlobals
extern u8 rwGlobals_abs[];
extern u8 D_0077e4e0[];
extern u8 D_00803640[];
#pragma alias D_00960090_abs D_00960090
extern u8 D_00960090_abs[];
#pragma alias D_00960088_abs D_00960088
extern f32 D_00960088_abs[];
extern void (*D_00960090)(u32 state, u32 value);
extern void (*D_00960094)(u32 state, void* value);
extern void (*D_009600A0)(u32 primitive, void* vertices, s32 count);
extern void* (*D_00960178)(u32 size, u32 flags);
extern void* (*D_00960184)(u32 count, u32 size, u32 flags);
extern void (*D_0096017c)(void* memory);
#pragma alias D_00960178_abs D_00960178
extern void* (*D_00960178_abs[])(u32 size, u32 flags);
#pragma alias D_0096017c_abs D_0096017c
extern void (*D_0096017c_abs[])(void* memory);
#pragma alias D_00960184_abs D_00960184
extern void* (*D_00960184_abs[])(u32 count, u32 size, u32 flags);
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
extern int printf(const char* format, ...);
extern void* memcpy(void* destination, const void* source, u32 size);
#define HSFD_TABLE(base, index) ((u8*)(base) + ((index) * 0x28))
extern f32 gUnk_007cadd0;
extern void func_004aa390(f32 nearPlane);
extern void func_004aa3d0(f32 farPlane);
extern void func_004a9f20(f32 x, f32 y, f32 z, f32 w);
extern void func_004aa410(RwCamera* camera);
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
extern void* func_004b45b0(s32 mode, const void* source);
extern void func_00100ec0(void* request);
extern void func_00503080(void);
extern void* func_004ac570(void);
extern void func_004ac5f0(void* image);
extern void func_004ab1b0(void* image);
extern void func_004a62e0(void* image, void* data);
extern void func_004a6200(void* image, s32* out0, f32* out1,
                          f32* out2, s32* out3);
extern void func_004ab6a0(void* image);
extern void func_004ac710(void* image);
extern void func_004ace70(void* image, void* quad);
extern void func_004a6600(void* image, void* quad);
extern void func_004aaa60(void);
extern void func_004a9bf0(void);
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
extern void func_8051DBC0(s32 a0, void* a1, void* a2, u32 a3);
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
extern void func_004cde90(void* renderTarget);
extern void* func_004c58a0(s32 source, s32 mode, void* stream);
extern s32 func_004c5250(void* stream, void* dst, u32 bytes);
extern void func_004c5780(void* stream, s32 mode);
extern HSfdImage* func_004cbe00(u32 width, u32 height, u32 bits);
extern void func_0010c7d0(HSfdQueueSlot* slot);
extern void func_004cbf20(HSfdImage* image);
extern void FlushCache(s32 mode);

extern void func_0010d950(s16 index);
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
        func_004cde90(work->renderTarget);
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

// Deep reconstruction pass restored per-state HSFD_TABLE lookups to use
// work->id directly (matching retail) instead of a cached movieId local,
// removed several dead/duplicate locals (decoder, rasterTarget, redundant
// config declaration, unused state local), and typed the render-state
// function pointer table access explicitly. object_size grew toward the
// retail window as genuine logic was restored; normalized_diff moved
// slightly worse, which is expected for this class of fix. W415 removed the
// retail-nonexistent default-state cleanup: calls 77 -> 73, nd 2966 -> 2921,
// object 4768 -> 4600 within the 4768-byte window.
// W419 moving work to the end of the local declarations was neutral: nd 2686, object 4656/window4768.
// FUN_0010A860
#ifndef PC_BUILD
asm void* H_SfdPlay_UpdateTask(KwlnTask* sfdPlayTask)
{
  .set noreorder
  .word 0x27bdff00
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8c93003c
  .word 0x866201e4
  .word 0x2c41000c
  .word 0x10200491
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24635250
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e6201fc
  .word 0x1040000d
  .word 0x00000000
  .word 0xae6001fc
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c12a954
  .word 0x00000000
  .word 0x0c12d8d4
  .word 0x00000000
  .word 0x3c040078
  .word 0x2484e4e0
  .word 0x0c12dd8c
  .word 0x00000000
  .word 0x8e6201f4
  .word 0x10400478
  .word 0x00000000
  .word 0xae600204
  .word 0xae600208
  .word 0x24020002
  .word 0xa66201e4
  .word 0x10000472
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000d03
  .word 0x00000000
  .word 0x2402ffff
  .word 0xa782b228
  .word 0x0c0421c4
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000463
  .word 0x00000000
  .word 0x866201ee
  .word 0x24420001
  .word 0xa66201ee
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x24020001
  .word 0x1462000b
  .word 0x00000000
  .word 0x0c12d940
  .word 0x00000000
  .word 0x0c12a970
  .word 0x00000000
  .word 0x24020001
  .word 0xae6201fc
  .word 0x0c073638
  .word 0x00000000
  .word 0x0c09f088
  .word 0x00000000
  .word 0x866301ee
  .word 0x24020003
  .word 0x14620003
  .word 0x00000000
  .word 0x0c0ed6ac
  .word 0x00000000
  .word 0x866301ee
  .word 0x24020006
  .word 0x14620010
  .word 0x00000000
  .word 0x3c020078
  .word 0x8c44e4f0
  .word 0x0c130848
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x3c04005d
  .word 0x24845250
  .word 0x24050180
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3c040078
  .word 0x2484e4e0
  .word 0x0c12dda4
  .word 0x00000000
  .word 0x866301ee
  .word 0x2402000a
  .word 0x14620433
  .word 0x00000000
  .word 0x3c04005d
  .word 0x24845260
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0000202d
  .word 0x2405ffff
  .word 0x0000302d
  .word 0x00a0382d
  .word 0x0c040f3c
  .word 0x00000000
  .word 0x24041407
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x866301ea
  .word 0x00031080
  .word 0x00431021
  .word 0x000218c0
  .word 0x3c02005d
  .word 0x24424b84
  .word 0x00431021
  .word 0x8c420000
  .word 0xae6200d8
  .word 0x26700008
  .word 0x0200202d
  .word 0x0000282d
  .word 0x24060030
  .word 0x0c148502
  .word 0x00000000
  .word 0x24020011
  .word 0xae020020
  .word 0x24040001
  .word 0xae040000
  .word 0x3c02004c
  .word 0x34424b40
  .word 0xae020004
  .word 0x866301ea
  .word 0x00031080
  .word 0x00431021
  .word 0x000218c0
  .word 0x3c02005d
  .word 0x24424b7c
  .word 0x00431021
  .word 0x8c420000
  .word 0xae020008
  .word 0x866301ea
  .word 0x00031080
  .word 0x00431021
  .word 0x000218c0
  .word 0x3c02005d
  .word 0x24424b80
  .word 0x00431021
  .word 0x8c420000
  .word 0xae02000c
  .word 0x24020002
  .word 0xae020010
  .word 0xae040014
  .word 0xae020024
  .word 0x0200202d
  .word 0x0c15f1a0
  .word 0x00000000
  .word 0xae02001c
  .word 0x2404141a
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x8e02001c
  .word 0x24440040
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0xae6201e0
  .word 0x24040001
  .word 0x3c020011
  .word 0x34458000
  .word 0x3c060004
  .word 0x3c020096
  .word 0x8c420184
  .word 0x0040f809
  .word 0x00000000
  .word 0xae620200
  .word 0x2404141a
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x8e6301e0
  .word 0x10600004
  .word 0x00000000
  .word 0x8e620200
  .word 0x14400033
  .word 0x00000000
  .word 0x8e6201f4
  .word 0x10400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x100003d1
  .word 0x00000000
  .word 0x8e640004
  .word 0x1080000a
  .word 0x00000000
  .word 0x8e6200d8
  .word 0x10400003
  .word 0x00000000
  .word 0x0c1610ce
  .word 0x00000000
  .word 0x8e640004
  .word 0x0c15f6d6
  .word 0x00000000
  .word 0xae600004
  .word 0x8e6401e0
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae6001e0
  .word 0x8e640200
  .word 0x10800007
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae600200
  .word 0xaf80b220
  .word 0x8e6400d0
  .word 0x10800004
  .word 0x00000000
  .word 0x0c1337a4
  .word 0x00000000
  .word 0xae6000d0
  .word 0x24041407
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0xa66001ee
  .word 0xa66001e4
  .word 0x0000102d
  .word 0x100003a5
  .word 0x00000000
  .word 0xae030018
  .word 0xae6300d4
  .word 0x0200202d
  .word 0x0c15f576
  .word 0x00000000
  .word 0x0040802d
  .word 0x16000010
  .word 0x00000000
  .word 0x3c110096
  .word 0x2631017c
  .word 0x8e6401e0
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0xae6001e0
  .word 0x8e640200
  .word 0x10800006
  .word 0x00000000
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0xae600200
  .word 0xaf80b220
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c15f8de
  .word 0x00000000
  .word 0xae700004
  .word 0x8e6200d8
  .word 0x1040000f
  .word 0x00000000
  .word 0x866301ea
  .word 0x00031080
  .word 0x00431021
  .word 0x000218c0
  .word 0x3c02005d
  .word 0x24424b74
  .word 0x00431021
  .word 0x0200202d
  .word 0x8c450000
  .word 0x24060001
  .word 0x0c0408fc
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x866301ea
  .word 0x00031080
  .word 0x00431021
  .word 0x000218c0
  .word 0x3c02005d
  .word 0x24424b74
  .word 0x00431021
  .word 0x0200202d
  .word 0x8c450000
  .word 0x0000302d
  .word 0x0c0408fc
  .word 0x00000000
  .word 0x2404141a
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x866301ea
  .word 0x00031080
  .word 0x00431021
  .word 0x000218c0
  .word 0x3c02005d
  .word 0x24424b70
  .word 0x00431021
  .word 0x84430000
  .word 0x24020006
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020005
  .word 0x10620003
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x24040280
  .word 0x240501c0
  .word 0x24060020
  .word 0x24070584
  .word 0x0c13383c
  .word 0x00000000
  .word 0xae6200d0
  .word 0x10000008
  .word 0x00000000
  .word 0x24040280
  .word 0x24050170
  .word 0x24060020
  .word 0x24070584
  .word 0x0c13383c
  .word 0x00000000
  .word 0xae6200d0
  .word 0x2404141a
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x8e6200d0
  .word 0x14400033
  .word 0x00000000
  .word 0x8e6201f4
  .word 0x10400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000033b
  .word 0x00000000
  .word 0x8e640004
  .word 0x1080000a
  .word 0x00000000
  .word 0x8e6200d8
  .word 0x10400003
  .word 0x00000000
  .word 0x0c1610ce
  .word 0x00000000
  .word 0x8e640004
  .word 0x0c15f6d6
  .word 0x00000000
  .word 0xae600004
  .word 0x8e6401e0
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae6001e0
  .word 0x8e640200
  .word 0x10800007
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae600200
  .word 0xaf80b220
  .word 0x8e6400d0
  .word 0x10800004
  .word 0x00000000
  .word 0x0c1337a4
  .word 0x00000000
  .word 0xae6000d0
  .word 0x24041407
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0xa66001ee
  .word 0xa66001e4
  .word 0x0000102d
  .word 0x1000030f
  .word 0x00000000
  .word 0x0000482d
  .word 0x3c020096
  .word 0x3c07005d
  .word 0x24e74b70
  .word 0x3c06437f
  .word 0x24040003
  .word 0x10000027
  .word 0x00000000
  .word 0x00091c3c
  .word 0x00031c3f
  .word 0x00031980
  .word 0x02634021
  .word 0xc4400088
  .word 0xe50000e8
  .word 0xe51400f8
  .word 0x866501ea
  .word 0x00051880
  .word 0x00651821
  .word 0x000318c0
  .word 0x00e31821
  .word 0x8c63001c
  .word 0x10600010
  .word 0x00000000
  .word 0xad060100
  .word 0xad060104
  .word 0xad060108
  .word 0xad00010c
  .word 0x866501ea
  .word 0x00051880
  .word 0x00651821
  .word 0x000318c0
  .word 0x00e31821
  .word 0x84630022
  .word 0xa66301e6
  .word 0xa66001e8
  .word 0xa66401e4
  .word 0x10000006
  .word 0x00000000
  .word 0xad060100
  .word 0xad060104
  .word 0xad060108
  .word 0xad06010c
  .word 0xa66401e4
  .word 0x25230001
  .word 0x00034c3c
  .word 0x00094c3f
  .word 0x00091c3c
  .word 0x00031c3f
  .word 0x28630004
  .word 0x1460ffd6
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c420060
  .word 0xc440000c
  .word 0x46800560
  .word 0x0c066164
  .word 0x00000000
  .word 0x8c420060
  .word 0xc4400010
  .word 0x46800520
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000883
  .word 0x866301ea
  .word 0x00031080
  .word 0x00431021
  .word 0x000218c0
  .word 0x3c02005d
  .word 0x24424b70
  .word 0x00431021
  .word 0x84430000
  .word 0x24020005
  .word 0x1462000b
  .word 0x00000000
  .word 0xae6000e0
  .word 0xae600120
  .word 0xe6750160
  .word 0xe67501a0
  .word 0xae6000e4
  .word 0xe6740124
  .word 0xae600164
  .word 0xe67401a4
  .word 0x1000000c
  .word 0x00000000
  .word 0xae6000e0
  .word 0xae600120
  .word 0xe6750160
  .word 0xe67501a0
  .word 0x3c024220
  .word 0x44820000
  .word 0xae6200e4
  .word 0x4600a001
  .word 0xe6600124
  .word 0xae620164
  .word 0xe66001a4
  .word 0x3c020096
  .word 0x24420088
  .word 0xc4400000
  .word 0xe66000e8
  .word 0xc4400000
  .word 0xe6600128
  .word 0xc4400000
  .word 0xe6600168
  .word 0xc4400000
  .word 0xe66001a8
  .word 0x24060010
  .word 0x00c0282d
  .word 0x866301ea
  .word 0x00031080
  .word 0x00431021
  .word 0x000220c0
  .word 0x3c02005d
  .word 0x24424b7c
  .word 0x00441021
  .word 0x8c420000
  .word 0x24430001
  .word 0x3c02005d
  .word 0x24424b80
  .word 0x00441021
  .word 0x8c420000
  .word 0x24420001
  .word 0x10000002
  .word 0x00000000
  .word 0x00063040
  .word 0x00c3082a
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1420fffa
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x00052840
  .word 0x00a2082a
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1420fffa
  .word 0x00000000
  .word 0xae6000f0
  .word 0xae600130
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x44860000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0xe6600170
  .word 0xe66001b0
  .word 0xae6000f4
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0xe6600134
  .word 0xae600174
  .word 0xe66001b4
  .word 0xe66200f8
  .word 0xe6620138
  .word 0xe6620178
  .word 0xe66201b8
  .word 0x10000263
  .word 0x00000000
  .word 0x866301ea
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x24020023
  .word 0x1462000a
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x304209ff
  .word 0x10400015
  .word 0x00000000
  .word 0x24020006
  .word 0xa66201e4
  .word 0x10000011
  .word 0x00000000
  .word 0x24020020
  .word 0x1062000e
  .word 0x00000000
  .word 0x24020021
  .word 0x1062000b
  .word 0x00000000
  .word 0x2402002a
  .word 0x10620008
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420800
  .word 0x10400003
  .word 0x00000000
  .word 0x24020006
  .word 0xa66201e4
  .word 0x8e640004
  .word 0x27a50060
  .word 0x0c15f94c
  .word 0x00000000
  .word 0x8fa20060
  .word 0x104000f4
  .word 0x00000000
  .word 0x866301e4
  .word 0x24020004
  .word 0x14620040
  .word 0x00000000
  .word 0x866501ea
  .word 0x00051080
  .word 0x00451021
  .word 0x000220c0
  .word 0x3c02005d
  .word 0x24424b8c
  .word 0x00441021
  .word 0x8c420000
  .word 0x10400036
  .word 0x00000000
  .word 0x8fa30084
  .word 0x3c02005d
  .word 0x24424b90
  .word 0x00441021
  .word 0x84420000
  .word 0x0062102a
  .word 0x1440002e
  .word 0x00000000
  .word 0x24020018
  .word 0x10a20007
  .word 0x00000000
  .word 0x2402001c
  .word 0x10a20004
  .word 0x00000000
  .word 0x24020029
  .word 0x14a2000b
  .word 0x00000000
  .word 0x24040008
  .word 0x0c04219c
  .word 0x00000000
  .word 0x240400ff
  .word 0x0080282d
  .word 0x0080302d
  .word 0x0c0421a0
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x24020017
  .word 0x10a20007
  .word 0x00000000
  .word 0x2402000a
  .word 0x10a20004
  .word 0x00000000
  .word 0x2402000f
  .word 0x14a20009
  .word 0x00000000
  .word 0x24040008
  .word 0x0c04219c
  .word 0x00000000
  .word 0x2404000f
  .word 0x2405001f
  .word 0x24060028
  .word 0x0c0421a0
  .word 0x00000000
  .word 0xae600204
  .word 0x24020005
  .word 0xa66201e4
  .word 0x8783b228
  .word 0x2402ffff
  .word 0x10620003
  .word 0x00000000
  .word 0xa783b218
  .word 0xa782b228
  .word 0x8fa2006c
  .word 0xae620210
  .word 0x8fa20070
  .word 0xae620214
  .word 0x8fa20074
  .word 0xaf82b230
  .word 0x8fa20078
  .word 0xaf82b22c
  .word 0x24040002
  .word 0x0c13ea3c
  .word 0x00000000
  .word 0x0040202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c13ebb0
  .word 0x00000000
  .word 0x8e630210
  .word 0x8e620214
  .word 0x00621018
  .word 0x00023080
  .word 0x8e640200
  .word 0x8fa50060
  .word 0x0c148494
  .word 0x00000000
  .word 0x8e620200
  .word 0xaf82b220
  .word 0x27a60060
  .word 0x26650040
  .word 0x24040009
  .word 0xdcc30000
  .word 0xdcc20008
  .word 0x24c60010
  .word 0x2484ffff
  .word 0xfca30000
  .word 0xfca20008
  .word 0x24a50010
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x866301e4
  .word 0x24020003
  .word 0x1462004a
  .word 0x00000000
  .word 0x866301ea
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x3c05005d
  .word 0x24a54b94
  .word 0x00a21021
  .word 0x84420000
  .word 0x14400004
  .word 0x00000000
  .word 0x640700ff
  .word 0x1000001c
  .word 0x00000000
  .word 0x8e620208
  .word 0x24440001
  .word 0xae640208
  .word 0x866301ea
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x00a21021
  .word 0x84420000
  .word 0x14820003
  .word 0x00000000
  .word 0x24020004
  .word 0xa66201e4
  .word 0x866301ea
  .word 0x00031080
  .word 0x00431021
  .word 0x000218c0
  .word 0x3c02005d
  .word 0x24424b94
  .word 0x00431021
  .word 0x84440000
  .word 0x8e630208
  .word 0x00031200
  .word 0x00431023
  .word 0x0044001a
  .word 0x00001012
  .word 0x304700ff
  .word 0x0000302d
  .word 0x3c04437f
  .word 0x30e30001
  .word 0x44870800
  .word 0x10000017
  .word 0x00000000
  .word 0x0006143c
  .word 0x0002143f
  .word 0x00021180
  .word 0x02622821
  .word 0xaca40100
  .word 0xaca40104
  .word 0xaca40108
  .word 0x04e00004
  .word 0x00000000
  .word 0x46800820
  .word 0x10000007
  .word 0x00000000
  .word 0x00071042
  .word 0x00431025
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4a0010c
  .word 0x24c20001
  .word 0x0002343c
  .word 0x0006343f
  .word 0x0006143c
  .word 0x0002143f
  .word 0x28420004
  .word 0x1440ffe6
  .word 0x00000000
  .word 0x866301e4
  .word 0x24020005
  .word 0x1462003a
  .word 0x00000000
  .word 0x8e620204
  .word 0x24450001
  .word 0xae650204
  .word 0x866301ea
  .word 0x00031080
  .word 0x00431021
  .word 0x000218c0
  .word 0x3c02005d
  .word 0x24424b92
  .word 0x00431021
  .word 0x84440000
  .word 0x00051200
  .word 0x00451023
  .word 0x0044001a
  .word 0x00001012
  .word 0x304300ff
  .word 0x240200ff
  .word 0x00431023
  .word 0x304600ff
  .word 0x00a4102a
  .word 0x14400003
  .word 0x00000000
  .word 0x24020006
  .word 0xa66201e4
  .word 0x0000382d
  .word 0x3c04437f
  .word 0x30c30001
  .word 0x44860800
  .word 0x10000017
  .word 0x00000000
  .word 0x0007143c
  .word 0x0002143f
  .word 0x00021180
  .word 0x02622821
  .word 0xaca40100
  .word 0xaca40104
  .word 0xaca40108
  .word 0x04c00004
  .word 0x00000000
  .word 0x46800820
  .word 0x10000007
  .word 0x00000000
  .word 0x00061042
  .word 0x00431025
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4a0010c
  .word 0x24e20001
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0007143c
  .word 0x0002143f
  .word 0x28420004
  .word 0x1440ffe6
  .word 0x00000000
  .word 0x8e640004
  .word 0x0c15fb94
  .word 0x00000000
  .word 0x8e640004
  .word 0x0c160610
  .word 0x00000000
  .word 0x0040902d
  .word 0x2642fffd
  .word 0x2c410002
  .word 0x10200005
  .word 0x00000000
  .word 0x24020006
  .word 0xa66201e4
  .word 0x1000013a
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x10400133
  .word 0x00000000
  .word 0x2404000e
  .word 0x27a500fc
  .word 0x3c020096
  .word 0x8c420094
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c110096
  .word 0x26310090
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e6400d0
  .word 0x24050001
  .word 0x0c13c5e0
  .word 0x00000000
  .word 0x8f85b220
  .word 0x10a00041
  .word 0x00000000
  .word 0x8e6400d0
  .word 0x8f86b230
  .word 0x8f87b22c
  .word 0x0c06475c
  .word 0x00000000
  .word 0x0220802d
  .word 0x24040014
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0xae720038
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
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050005
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000b
  .word 0x24050009
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
  .word 0x24040002
  .word 0x24050003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x8e6500d0
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x266500e0
  .word 0x0080302d
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e6400d0
  .word 0x0000282d
  .word 0x0c13c5e0
  .word 0x00000000
  .word 0x2404000e
  .word 0x8fa500fc
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x100000cf
  .word 0x00000000
  .word 0x8783b228
  .word 0x2402ffff
  .word 0x10620003
  .word 0x00000000
  .word 0xa783b218
  .word 0xa782b228
  .word 0x866301ea
  .word 0x24020018
  .word 0x10620004
  .word 0x00000000
  .word 0x2402001c
  .word 0x14620009
  .word 0x00000000
  .word 0x24040008
  .word 0x0c04219c
  .word 0x00000000
  .word 0x240400ff
  .word 0x0080282d
  .word 0x0080302d
  .word 0x0c0421a0
  .word 0x00000000
  .word 0x8e6201f4
  .word 0x10400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x100000b5
  .word 0x00000000
  .word 0x8e640004
  .word 0x1080000a
  .word 0x00000000
  .word 0x8e6200d8
  .word 0x10400003
  .word 0x00000000
  .word 0x0c1610ce
  .word 0x00000000
  .word 0x8e640004
  .word 0x0c15f6d6
  .word 0x00000000
  .word 0xae600004
  .word 0x8e6401e0
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae6001e0
  .word 0x8e640200
  .word 0x10800007
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae600200
  .word 0xaf80b220
  .word 0x8e6400d0
  .word 0x10800004
  .word 0x00000000
  .word 0x0c1337a4
  .word 0x00000000
  .word 0xae6000d0
  .word 0x24041407
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0xa66001ee
  .word 0xa66001e4
  .word 0x10000089
  .word 0x00000000
  .word 0x2402001e
  .word 0xa66201ee
  .word 0x24020008
  .word 0xa66201e4
  .word 0x24020009
  .word 0xa66201e4
  .word 0x2402000a
  .word 0xa66201e4
  .word 0x866201ee
  .word 0x2442ffff
  .word 0xa66201ee
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1440007a
  .word 0x00000000
  .word 0x8e6201f4
  .word 0x10400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000075
  .word 0x00000000
  .word 0x8e640004
  .word 0x1080000a
  .word 0x00000000
  .word 0x8e6200d8
  .word 0x10400003
  .word 0x00000000
  .word 0x0c1610ce
  .word 0x00000000
  .word 0x8e640004
  .word 0x0c15f6d6
  .word 0x00000000
  .word 0xae600004
  .word 0x8e6401e0
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae6001e0
  .word 0x8e640200
  .word 0x10800007
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae600200
  .word 0xaf80b220
  .word 0x8e6400d0
  .word 0x10800004
  .word 0x00000000
  .word 0x0c1337a4
  .word 0x00000000
  .word 0xae6000d0
  .word 0x24041407
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0xa66001ee
  .word 0xa66001e4
  .word 0x10000049
  .word 0x00000000
  .word 0x3c024000
  .word 0xafa200f0
  .word 0x3c024120
  .word 0xafa200f4
  .word 0xdfa400f0
  .word 0x3c05005d
  .word 0x24a55280
  .word 0x0c041344
  .word 0x00000000
  .word 0x3c024000
  .word 0xafa200f0
  .word 0x3c024130
  .word 0xafa200f4
  .word 0xdfa400f0
  .word 0x27858860
  .word 0x0c041344
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420010
  .word 0x10400033
  .word 0x00000000
  .word 0x8e6201f4
  .word 0x10400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000002e
  .word 0x00000000
  .word 0x8e640004
  .word 0x1080000a
  .word 0x00000000
  .word 0x8e6200d8
  .word 0x10400003
  .word 0x00000000
  .word 0x0c1610ce
  .word 0x00000000
  .word 0x8e640004
  .word 0x0c15f6d6
  .word 0x00000000
  .word 0xae600004
  .word 0x8e6401e0
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae6001e0
  .word 0x8e640200
  .word 0x10800007
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae600200
  .word 0xaf80b220
  .word 0x8e6400d0
  .word 0x10800004
  .word 0x00000000
  .word 0x0c1337a4
  .word 0x00000000
  .word 0xae6000d0
  .word 0x24041407
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0xa66001ee
  .word 0xa66001e4
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0100
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_0010BB00
void H_SfdPlay_DestroyTask(KwlnTask* sfdPlayTask)
{
    HSfd* work;

    work = (HSfd*)sfdPlayTask->workData;

    if (work->decoder != NULL)
    {
        if (work->streamAux != NULL)
        {
            func_00584338(work->decoder);
        }
        func_0057db58(work->decoder);
        work->decoder = NULL;
    }

    if (work->compressedFrameBuffer != NULL)
    {
        (*(void (**)(void*))((u8*)rwGlobals_abs + 0x17c))(work->compressedFrameBuffer);
        work->compressedFrameBuffer = NULL;
    }

    if (work->displayBuffer != NULL)
    {
        (*(void (**)(void*))((u8*)rwGlobals_abs + 0x17c))(work->displayBuffer);
        work->displayBuffer = NULL;
        sSfdFrameIndex = 0;
    }

    if (work->renderTarget != NULL)
    {
        func_004cde90(work->renderTarget);
        work->renderTarget = NULL;
    }

    datSetFlag(0x1407, 0);

    if (work->isStart == 0)
    {
        sSfdPlayTask = NULL;
    }

    if (work->ownsCamera != 0)
    {
        work->ownsCamera = 0;
        FUN_004aa550(kwlnGetMainCamera());
        FUN_004b6350();
        FUN_004b7630(D_0077e4e0);
    }

    (*(void (**)(void*))((u8*)rwGlobals_abs + 0x17c))(work);
}

// FUN_0010BC20
KwlnTask* func_0010bc20(KwlnTask* parent, s32 id)
{
    HSfd* work;
    KwlnTask* task;

    work = RwCalloc(1, sizeof(HSfd), HSFD_STREAM_HINT);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreate(parent, "H_SfdPlay", 7383, H_SfdPlay_UpdateTask,
                          H_SfdPlay_DestroyTask, work);
    if (task == NULL)
    {
        return NULL;
    }

    work->isStart = true;
    work->id = id;
    return task;
}

// FUN_0010BCE0
KwlnTask* func_0010bce0(KwlnTask* parent, s32 id)
{
    HSfd* work;
    KwlnTask* task;

    work = RwCalloc(1, sizeof(HSfd), HSFD_STREAM_HINT);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreate(parent, "H_SfdPlay", 7383, H_SfdPlay_UpdateTask,
                          H_SfdPlay_DestroyTask, work);
    if (task == NULL)
    {
        return NULL;
    }

    work->isStart = true;
    work->id = id;
    work->ownsCamera = false;
    return task;
}

// FUN_0010BDA0
KwlnTask* H_SfdPlay_CreateTaskIdle(KwlnTask* parent)
{
    HSfd* work;
    KwlnTask* task;

    work = RwCalloc(1, sizeof(HSfd), HSFD_STREAM_HINT);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreate(parent, "H_SfdPlay", 7383, H_SfdPlay_UpdateTask,
                          H_SfdPlay_DestroyTask, work);
    if (task == NULL)
    {
        return NULL;
    }

    work->id = HSFD_ORPHEUSAWAKENING;
    work->isStart = false;
    work->ownsCamera = false;
    sSfdPlayTask = task;
    return task;
}

// FUN_0010BE60
u32 H_SfdPlayCmd_CALL_MOVIE(void)
{
    HSfd* work;
    HSfd* newWork;
    KwlnTask* task;
    s32 id;

    id = scrGetIntPara(0);
    if (sSfdPlayTask == NULL)
    {
        newWork = RwCalloc(1, sizeof(HSfd), HSFD_STREAM_HINT);
        if (newWork != NULL)
        {
            task = kwlnTaskCreate(NULL, "H_SfdPlay", 7383, H_SfdPlay_UpdateTask,
                                  H_SfdPlay_DestroyTask, newWork);
            if (task != NULL)
            {
                newWork->id = HSFD_ORPHEUSAWAKENING;
                newWork->isStart = false;
                newWork->ownsCamera = false;
                sSfdPlayTask = task;
            }
        }
    }

    work = (HSfd*)sSfdPlayTask->workData;
    work->id = id;
    work->stateTimer = 0;
    work->fadeFrame = 0;
    work->playbackFrame = 0;
    work->state = HSFD_STATE_WAIT_FOR_FADE;
    work->streamFlags = 0;
    return true;
}

// FUN_0010BF40
u32 H_SfdPlayCmd_MOVIE_SYNC(void)
{
    if (sSfdPlayTask == NULL)
    {
        return true;
    }

    return ((HSfd*)sSfdPlayTask->workData)->state == HSFD_STATE_IDLE;
}

// FUN_0010BF70
void func_0010bf70(void)
{
    s32 wasEnabled;
    EeThreadStatus threadStatus;

    wasEnabled = FUN_0050d3f0();
    if (sSfdResumePending != 0)
    {
        func_00503060(sSfdResumeThreadId, &threadStatus);
        if ((threadStatus.status != 0xc) && (threadStatus.status != 8))
        {
            func_005030d0(sSfdResumeThreadId);
        }
    }
    if (wasEnabled == 0)
    {
        FUN_0050d3a0();
    }
}

// FUN_0010BFF0
void func_0010bff0(void)
{
    s32 wasEnabled;

    wasEnabled = FUN_0050d3f0();
    if (sSfdResumePending != 0)
    {
        func_005030f0(sSfdResumeThreadId);
    }
    if (wasEnabled == 0)
    {
        FUN_0050d3a0();
    }
}

// FUN_0010C050
void func_0010c050(void)
{
    typedef struct HSfdThreadParam
    {
        s32 status;
        void (*function)(HSfdQueueSlot*);
        void* stack;
        s32 stackSize;
        void* gpReg;
        s32 initialPriority;
        s32 currentPriority;
        u32 attributes;
        u32 option;
    } HSfdThreadParam;
    HSfdAsyncEntry* entries;
    HSfdQueueEntry* queueEntry;
    s16 entryIndex;
    s16 queueIndex;
    s32* threadIdSlot;
    HSfdThreadParam thread;

    entryIndex = 0;
    entries = sSfdEntries;
    while (entryIndex < HSFD_ENTRY_COUNT)
    {
        entries[entryIndex].next = NULL;
        entryIndex++;
    }

    for (queueIndex = 0; queueIndex < HSFD_QUEUE_COUNT; queueIndex++)
    {
        queueEntry = &sSfdQueueEntries[queueIndex];
        queueEntry->next = NULL;
        queueEntry->queue = NULL;
        sSfdQueue[queueIndex].state = 0;
        thread.function = func_0010c7d0;
        thread.stack = D_00803640;
        thread.stackSize = 0x20000;
        thread.gpReg = &_mips_gp0_value;
        thread.initialPriority = 0x1C;
        threadIdSlot = &sSfdThreadIds[queueIndex];
        *threadIdSlot = func_00502f60(&thread);
        func_005042a0(*threadIdSlot, &sSfdQueue[queueIndex]);
    }
    uGpffffb230 = 1;
}

/* W318 measured: opt_loop_invariants on changes c1a0 nd25->0. */
#pragma opt_loop_invariants on
// FUN_0010C1A0
HSfdAsyncEntry* func_0010c1a0(s32 kind, const char* name, const char* path,
                               s32 requestFlags, void* source, void* buffer,
                               s32 byteCount, const char* cacheName,
                               void* result2, void* result3, void* result4)
{
    HSfdAsyncEntry** link;
    HSfdAsyncEntry* entry;
    s16 index;
    s32 enabled;

    link = &sSfdQueueEntries[0].next;
    enabled = FUN_0050d3a0();
link_check:
    if (*link != NULL)
    {
        goto link_next;
    }
    index = 0;
    goto pool_check;
pool_body:
    if (((HSfdPoolEntry*)sSfdEntries)[index].state == 0)
    {
        ((HSfdPoolEntry*)sSfdEntries)[index].state = 1;
        entry = (HSfdAsyncEntry*)((HSfdPoolEntry*)sSfdEntries)[index].entry;
        memset(entry, 0, 0x1d8);
        goto entry_found;
    }
    index++;
pool_check:
    if (index < HSFD_ENTRY_COUNT)
    {
        goto pool_body;
    }
    entry = NULL;

entry_found:
    entry->next = NULL;
    entry->name[0] = '\0';
    if (name != NULL)
    {
        strcpy(entry->name, name);
    }
    entry->path[0] = '\0';
    if (path != NULL)
    {
        strcpy(entry->path, path);
    }
    entry->source = source;
    entry->state = 0;
    entry->requestFlags = requestFlags;
    entry->kind = kind;
    entry->buffer = buffer;
    entry->byteCount = byteCount;
    entry->cacheName[0] = '\0';
    *(void**)((u8*)entry + 0x20) = result2;
    entry->result3 = result3;
    entry->age = 0;
    if (cacheName != NULL)
    {
        strcpy(entry->cacheName, cacheName);
    }
    entry->queue = (HSfdQueueSlot*)link;
    *link = entry;
    if (enabled != 0)
    {
        FUN_0050d3f0();
    }
    return entry;
link_next:
    link = &(*link)->next;
    goto link_check;
}
#pragma opt_loop_invariants off

// FUN_0010C3A0
#ifndef PC_BUILD
asm void* func_0010c3a0(HSfdAsyncEntry* entry, u32* wasReady, s32* byteCount)
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
  .word 0x16800004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000007d
  .word 0x00000000
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x0040802d
  .word 0x8e8301a4
  .word 0x24020003
  .word 0x14620070
  .word 0x00000000
  .word 0x8e830004
  .word 0x1060006d
  .word 0x00000000
  .word 0x8e820000
  .word 0xac620000
  .word 0x8e820000
  .word 0x10400002
  .word 0x00000000
  .word 0xac430004
  .word 0x8e8201ac
  .word 0x2c41000a
  .word 0x1020003e
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24635280
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e9101b4
  .word 0x10000034
  .word 0x00000000
  .word 0x8e910010
  .word 0x8e820008
  .word 0xae420000
  .word 0x1000002f
  .word 0x00000000
  .word 0x8e82000c
  .word 0x8c440004
  .word 0x0c132c9c
  .word 0x00000000
  .word 0x8e91000c
  .word 0x12400028
  .word 0x00000000
  .word 0x8e820008
  .word 0xae420000
  .word 0x10000024
  .word 0x00000000
  .word 0x8e910014
  .word 0x10000021
  .word 0x00000000
  .word 0x8e9101b8
  .word 0x1240001e
  .word 0x00000000
  .word 0x8e820008
  .word 0xae420000
  .word 0x1000001a
  .word 0x00000000
  .word 0x8e910018
  .word 0x12400017
  .word 0x00000000
  .word 0x8e820008
  .word 0xae420000
  .word 0x10000013
  .word 0x00000000
  .word 0x8e91001c
  .word 0x10000010
  .word 0x00000000
  .word 0x8e9101c4
  .word 0x1240000d
  .word 0x00000000
  .word 0x8e820008
  .word 0xae420000
  .word 0x10000009
  .word 0x00000000
  .word 0x8e9101cc
  .word 0x12400006
  .word 0x00000000
  .word 0x8e820008
  .word 0xae420000
  .word 0x10000002
  .word 0x00000000
  .word 0x8e9101d4
  .word 0x0000282d
  .word 0x3c04007e
  .word 0x24845a40
  .word 0x10000013
  .word 0x00000000
  .word 0x00031100
  .word 0x00431821
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x00821821
  .word 0x8c620000
  .word 0x10400007
  .word 0x00000000
  .word 0x24620004
  .word 0x16820004
  .word 0x00000000
  .word 0xac600000
  .word 0x10000009
  .word 0x00000000
  .word 0x24a20001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x00051c3c
  .word 0x00031c3f
  .word 0x28620100
  .word 0x1440ffea
  .word 0x00000000
  .word 0x24020001
  .word 0xae620000
  .word 0x12000003
  .word 0x00000000
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0220102d
  .word 0x10000007
  .word 0x00000000
  .word 0xae600000
  .word 0x12000003
  .word 0x00000000
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0000102d
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

// FUN_0010C5F0
#ifndef PC_BUILD
asm void func_0010c5f0(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0000902d
  .word 0x10000063
  .word 0x00000000
  .word 0x00032100
  .word 0x00832023
  .word 0x00042080
  .word 0x00831823
  .word 0x000320c0
  .word 0x3c03007e
  .word 0x24635860
  .word 0x00641821
  .word 0x8c710000
  .word 0x12200055
  .word 0x00000000
  .word 0x24030003
  .word 0x8e2401a4
  .word 0x1083004a
  .word 0x00000000
  .word 0x24030002
  .word 0x10830042
  .word 0x00000000
  .word 0x24030001
  .word 0x1083001c
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000047
  .word 0x00000000
  .word 0x822200a4
  .word 0x10400011
  .word 0x00000000
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x0040802d
  .word 0x262400a4
  .word 0x8e2501a8
  .word 0x0c040360
  .word 0x00000000
  .word 0xae2201b0
  .word 0x12000003
  .word 0x00000000
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x24030001
  .word 0xae2301a4
  .word 0x10000034
  .word 0x00000000
  .word 0xae2001b0
  .word 0x0000802d
  .word 0x1000000e
  .word 0x00000000
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x0040802d
  .word 0x8e2401b0
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x10400016
  .word 0x00000000
  .word 0x12000003
  .word 0x00000000
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0000802d
  .word 0x0012243c
  .word 0x0004243f
  .word 0x000418c0
  .word 0x2782b240
  .word 0x00431821
  .word 0x24020001
  .word 0xa4620000
  .word 0xac710004
  .word 0x24020002
  .word 0xae2201a4
  .word 0x00041880
  .word 0x2782b238
  .word 0x00431021
  .word 0x8c440000
  .word 0x0c140c24
  .word 0x00000000
  .word 0x12000011
  .word 0x00000000
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x862301d0
  .word 0x24630001
  .word 0xa62301d0
  .word 0x10000008
  .word 0x00000000
  .word 0x8e310000
  .word 0x1220000c
  .word 0x00000000
  .word 0x12200003
  .word 0x00000000
  .word 0x1000ffae
  .word 0x00000000
  .word 0x26430001
  .word 0x0003943c
  .word 0x0012943f
  .word 0x00121c3c
  .word 0x00031c3f
  .word 0x1860ff9b
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
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* W318 measured: opt_common_subs off changes c7d0 nd406->385; object676/window752. */
/* W418 six local declaration orders were neutral: nd385,obj676/window752. */
#pragma opt_common_subs off
// FUN_0010C7D0
#ifndef PC_BUILD
asm void func_0010c7d0(HSfdQueueSlot* slot)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x0c140c20
  .word 0x00000000
  .word 0x86030000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x1060fff9
  .word 0x00000000
  .word 0x1000fff7
  .word 0x00000000
  .word 0x8e060004
  .word 0x8cc201ac
  .word 0x2c41000a
  .word 0x10200076
  .word 0x00000000
  .word 0x3c03007b
  .word 0x246352b0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x80c20124
  .word 0x10400004
  .word 0x00000000
  .word 0x24c40124
  .word 0x0c133170
  .word 0x00000000
  .word 0x8e020004
  .word 0x24440024
  .word 0x0000282d
  .word 0x0c134498
  .word 0x00000000
  .word 0x8e030004
  .word 0xac6201b4
  .word 0x27848868
  .word 0x0c133170
  .word 0x00000000
  .word 0x1000005d
  .word 0x00000000
  .word 0x80c20124
  .word 0x10400004
  .word 0x00000000
  .word 0x24c40124
  .word 0x0c133170
  .word 0x00000000
  .word 0x8e020004
  .word 0x8c440008
  .word 0x0c124014
  .word 0x00000000
  .word 0x8e030004
  .word 0xac620010
  .word 0x27848868
  .word 0x0c133170
  .word 0x00000000
  .word 0x1000004c
  .word 0x00000000
  .word 0x80c20124
  .word 0x10400004
  .word 0x00000000
  .word 0x24c40124
  .word 0x0c133170
  .word 0x00000000
  .word 0x8e020004
  .word 0x8c4501c8
  .word 0x10a00005
  .word 0x00000000
  .word 0x3c040078
  .word 0x2484e4e0
  .word 0x0c12ddd8
  .word 0x00000000
  .word 0x8e020004
  .word 0x8c440008
  .word 0x0c124828
  .word 0x00000000
  .word 0x8e030004
  .word 0xac62000c
  .word 0x27848868
  .word 0x0c133170
  .word 0x00000000
  .word 0x10000033
  .word 0x00000000
  .word 0x24c40024
  .word 0x0c12da6c
  .word 0x00000000
  .word 0x8e030004
  .word 0xac620014
  .word 0x1000002c
  .word 0x00000000
  .word 0x8cc40008
  .word 0x8cc501c0
  .word 0x8cc601bc
  .word 0x0c131494
  .word 0x00000000
  .word 0x8e030004
  .word 0xac6201b8
  .word 0x8e020004
  .word 0x8c440008
  .word 0x0c119150
  .word 0x00000000
  .word 0x8e030004
  .word 0xac620018
  .word 0x1000001d
  .word 0x00000000
  .word 0x24c40024
  .word 0x0c123658
  .word 0x00000000
  .word 0x8e030004
  .word 0xac62001c
  .word 0x10000016
  .word 0x00000000
  .word 0x8cc40020
  .word 0x8cc50008
  .word 0x0c12de74
  .word 0x00000000
  .word 0x8e030004
  .word 0xac6201c4
  .word 0x1000000e
  .word 0x00000000
  .word 0x8cc40008
  .word 0x0c1321a0
  .word 0x00000000
  .word 0x8e030004
  .word 0xac6201cc
  .word 0x10000007
  .word 0x00000000
  .word 0x0000202d
  .word 0x8cc50008
  .word 0x0c12d16c
  .word 0x00000000
  .word 0x8e030004
  .word 0xac6201d4
  .word 0x8e020004
  .word 0x8c4201b0
  .word 0x1040000e
  .word 0x00000000
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e020004
  .word 0x8c4401b0
  .word 0x0c0403b0
  .word 0x00000000
  .word 0x8e020004
  .word 0xac4001b0
  .word 0x12200003
  .word 0x00000000
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x24040003
  .word 0x8e030004
  .word 0xac6401a4
  .word 0x8e030004
  .word 0x8c640000
  .word 0x10800010
  .word 0x00000000
  .word 0x8c8301a4
  .word 0x1460000d
  .word 0x00000000
  .word 0x808300a4
  .word 0x1460000a
  .word 0x00000000
  .word 0x24030002
  .word 0xac8301a4
  .word 0xae040004
  .word 0x1040ff62
  .word 0x00000000
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x1000ff5e
  .word 0x00000000
  .word 0xa6000000
  .word 0x1040ff51
  .word 0x00000000
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x1000ff4d
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_common_subs reset
/* W419 probes: all six declaration orders of i/slots/j, plus absolute aliases on every sSfdDecodeSlots use, stayed nd8,obj532/window544. */
/* W421 row classification: verify nd8, object532/window544, rate0.015038.
 * Offsets 0xe8/0xec are lui $a0,0 / lui $v1,0x83 and
 * addiu $a0,$a0,0 / addiu $v1,$v1,0x3710; 0xf8/0xfc are
 * dsll32 $v1,$a1,0x10 / dsll32 $a0,$a1,0x10 and
 * dsra32 $v1,$v1,0x10 / dsra32 $a0,$a0,0x10; 0x100/0x104 are
 * sll $v0,$v1,4 / sll $v0,$a0,4 and addu $v0,$v0,$v1 / addu $v0,$v0,$a0;
 * 0x10c is addu $v0,$a0,$v0 / addu $v0,$v1,$v0 (candidate / retail):
 * global-base/index register colouring. */

// FUN_0010CAC0
#ifndef PC_BUILD
asm void func_0010cac0(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x0c144a1a
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c147692
  .word 0x00000000
  .word 0x24040020
  .word 0x0c147694
  .word 0x00000000
  .word 0x3c040083
  .word 0x248438b0
  .word 0x24050020
  .word 0x0000302d
  .word 0x0c14756c
  .word 0x00000000
  .word 0x0000202d
  .word 0x2405008f
  .word 0x0000302d
  .word 0x0c1476c0
  .word 0x00000000
  .word 0x24040003
  .word 0x24050083
  .word 0x24060105
  .word 0x2407003c
  .word 0x0000402d
  .word 0x0c1476c0
  .word 0x00000000
  .word 0x24040003
  .word 0x24050084
  .word 0x2406003c
  .word 0x00c0382d
  .word 0x0c1476c0
  .word 0x00000000
  .word 0x24040003
  .word 0x24050082
  .word 0x24060001
  .word 0x0c1476c0
  .word 0x00000000
  .word 0x24040001
  .word 0x34058010
  .word 0x24060800
  .word 0x24070fc0
  .word 0x0c144a70
  .word 0x00000000
  .word 0x24040001
  .word 0x34058010
  .word 0x24060801
  .word 0x24070fcc
  .word 0x0c144a70
  .word 0x00000000
  .word 0x24040003
  .word 0x24050080
  .word 0x2406007f
  .word 0x00c0382d
  .word 0x0c1476c0
  .word 0x00000000
  .word 0x0000282d
  .word 0x3c030083
  .word 0x24633710
  .word 0x1000000e
  .word 0x00000000
  .word 0x0005243c
  .word 0x0004243f
  .word 0x00041100
  .word 0x00441021
  .word 0x00021080
  .word 0x00621021
  .word 0xa4400000
  .word 0xac400004
  .word 0xac400018
  .word 0xa445000a
  .word 0x24a20001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0005143c
  .word 0x0002143f
  .word 0x28420006
  .word 0x1440ffef
  .word 0x00000000
  .word 0x0000182d
  .word 0x3c020083
  .word 0xac403698
  .word 0x10000004
  .word 0x00000000
  .word 0x24620001
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x0003143c
  .word 0x0002143f
  .word 0x28420010
  .word 0x1440fff9
  .word 0x00000000
  .word 0x3c020009
  .word 0x34446000
  .word 0x0c1475be
  .word 0x00000000
  .word 0x3c030083
  .word 0xac623734
  .word 0x3c02000a
  .word 0x3444f000
  .word 0x0c1475be
  .word 0x00000000
  .word 0x3c030083
  .word 0xac623778
  .word 0x3c020001
  .word 0x34449000
  .word 0x0c1475be
  .word 0x00000000
  .word 0x3c030083
  .word 0xac6237bc
  .word 0x3c020001
  .word 0x34449000
  .word 0x0c1475be
  .word 0x00000000
  .word 0x3c030083
  .word 0xac623800
  .word 0x3c020001
  .word 0x34449000
  .word 0x0c1475be
  .word 0x00000000
  .word 0x3c030083
  .word 0xac623844
  .word 0x3c020001
  .word 0x34449000
  .word 0x0c1475be
  .word 0x00000000
  .word 0x3c030083
  .word 0xac623888
  .word 0xdfbf0000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants reset


/* W318 measured: opt_loop_invariants on changes cdd0 nd1487->1332; object2032/window2336. */






/* W318 measured: opt_loop_invariants on changes dd10 nd67->0; ddc0 nd48->0; de40 nd79->0. */


/* W318 measured: opt_loop_invariants on changes df60 nd69->14; object stays 168/176. */

/* W318 measured: opt_loop_invariants on changes e0d0 nd689->672; object1064/window1072. */



/* W318 measured: opt_loop_invariants on changes e630 nd411->330; object524/window592. */


// Reconstructed from the retail window. The opening is the same render-state
// prologue the sibling func_0010f6c0 already carries: two indirect calls
// through the D_00960090 render-state hook, near/far plane setup, a full
// 640x448 viewport, camera bind, then the 0x4e4 flag selecting between two
// RpSkyRenderStateSet pairs. Retail then gates the whole body on work[0] == 3
// (bne $a0, 3 branches to the tail); that body is fully reconstructed here
// as an element-loop over frame commands with color processing.

// Retail 0x10fbe4-0x110250 re-fetches command pointers and carries the prior
// endpoint into command-2 rectangles; preserve those conversions and spill slots.
/* W375 measured opt_loop_invariants off for FUN_0010F6C0: default nd2034/object3060; off nd2031/object3060; retained. */
