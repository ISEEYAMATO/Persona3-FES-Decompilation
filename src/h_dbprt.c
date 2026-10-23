#include "h_dbprt.h"
#include "h_cdvd.h"
#include "Kernel/Kwln/kwln.h"
#include "temporary.h"

#pragma alias printf_y2 printf
#pragma alias D_009600A0_y2 D_009600A0


typedef char* va_list;
#define va_start(ap, last) (ap = ((va_list)__builtin_next_arg(last) - (__builtin_args_info(2) >= 8 ? 0 : (8 - __builtin_args_info(2)) * 8)))
#define va_end(ap) ((void)0)
extern int vsprintf(char* buffer, const char* fmt, va_list args);

#define HDBPRT_LOG_MAXLINE 15
#define HDBPRT_LOG_MAXCHAR 256
#define HDBPRT_GRID_WIDTH  (640 / 12)
#define HDBPRT_GRID_HEIGHT (480 / 12)

const RwV2d sLogBoxPos = {28.0f, 42.0f};
const RwV2d sLogStringsPos = {36.0f, 50.0f};

static RwRaster* sFontRaster;
#pragma alias D_00960090_abs D_00960090
extern u8 D_00960090_abs[];
#pragma alias D_00960088_abs D_00960088
extern volatile /* Removing this file's qualifier batch loses 0 MATCH(es) and worsens 1 other function(s) - measured W170. */ f32 D_00960088_abs[];
extern RwIm2DRenderPrimitiveFunction D_009600A0_abs[];
#pragma alias hDbprtDrawPrimitiveSlot D_009600A0
extern RwIm2DRenderPrimitiveFunction hDbprtDrawPrimitiveSlot[];

extern void (*D_00960090)(u32 state, u32 value);
extern f32 D_00960088;
extern RwBool (*D_009600A0)(RwPrimitiveType primitiveType,
                            RwIm2DVertex* vertices, s32 vertexCount);
static RwImage* sFontImage;
static HDbText3D* sText3DList;
static s8 sLogLine;
static u32 sDrawLogEnabled;
static char sGrid[HDBPRT_GRID_HEIGHT][HDBPRT_GRID_WIDTH];
static char sLogs[HDBPRT_LOG_MAXLINE][HDBPRT_LOG_MAXCHAR];



static void H_Dbprt_DrawText3D(void);
static f32 H_Dbprt_CalculateScreenZ(f32 zOffset);
static void H_Dbprt_DrawLog(void);
static void H_Dbprt_AppendText3D(HDbText3D* text);


#include "h_chrdsp.h"
#include "Main/g_data.h"
#define HCHRDP_WORK_COUNT 3
#define HCHRDP_LAYER_COUNT 3
#define HCHRDP_QUAD_COUNT  5
#define rwTEXTUREADDRESSBORDER 4
typedef struct HChrdspTexture
{
    RwRaster* raster;
    u8 reserved04[0x4c];
    u32 renderFlags;
} HChrdspTexture;
extern HChrdspWork D_007E2680[HCHRDP_WORK_COUNT];
typedef void (*HChrdspDrawPrimitive)(s32 primitiveType, RwIm2DVertex* vertices,
                                     s32 vertexCount);
extern HChrdspDrawPrimitive hChrdspDrawPrimitiveSlot[];
extern void* D_007E2BA8[][0x19C];
extern void* D_007E2BC8[][0x19C];
extern s16 D_007E2684[][0x338];
extern s16 D_007E2688[][0x338];
extern s16 D_007E268A[][0x338];
extern s32 D_007E2BCC[][0x19C];
extern u8 D_007E2BA0[][0x670];
extern u8 D_007E2BA1[][0x670];
extern u8 D_007E2BA2[][0x670];
extern u8 D_007E2BA3[][0x670];
extern f32 D_007E2BAC[][0x19C];
extern f32 D_007E2BB0[][0x19C];
extern u32 D_007E2BE4[][0x19C];
extern const char* D_005D3350[];
extern const char D_005D3CB0[];
extern const char D_005D3CD0[];
extern const char D_005D3CF0[];
extern const char D_005D3D10[];
extern const char D_005D3D30[];
extern const char D_005D3D50[];
extern const char D_005D3D70[];
extern const char D_005D3D90[];
extern const char D_005D3DB0[];
extern const char D_005D3DD0[];
extern const char D_005D3DF0[];
extern const char D_005D3E10[];
extern const char D_005D3E30[];
extern const char D_005D3E50[];
extern const char D_005D3E70[];
extern const char* func_001022e0(HCdvd* cdvd, s32 entryIndex);
extern void* func_0010c1a0(s32 kind, const char* name, const char* path,
                            s32 requestFlags, void* source, void* buffer,
                            s32 byteCount, const char* cacheName,
                            void* result2, void* result3, void* result4);
extern void* func_0010c3a0(void* request, u32* isReady, s32* byteCount);
extern s32 sprintf(char* buffer, const char* format, ...);
extern s32 printf(const char* format, ...);
extern char* strcpy(char* destination, const char* source);
extern s32 strcmp(const char* lhs, const char* rhs);
extern void func_00133d30(void* stream, HCdvd* cdvd);
extern void func_004d0f00(void* resource);
#include "h_pad.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Kernel/h_malloc.h"
#include "Kosaka/k_assert.h"
#define HPAD_PAD_STATE_FIND_CTP1 2
#define HPAD_PAD_STATE_STABLE    6
typedef struct HPadRwAllocation
{
    u32 size;
    u32 alignment;
    u32 serial;
    u32 hint;
} HPadRwAllocation;
extern s32 scePadGetState(s32 port, s32 slot);
extern s32 scePadSetMainMode(s32 port, s32 slot, s32 mode, s32 lock);
extern s32 scePadInfoAct(s32 port, s32 slot, s32 actuator, s32 command);
extern s32 scePadSetActAlign(s32 port, s32 slot, u8* align);
extern s32 scePadGetReqState(s32 port, s32 slot);
extern s32 scePadRead(s32 port, s32 slot, u8* data);
extern s32 scePadSetActDirect(s32 port, s32 slot, u8* data);
extern void* func_00520728(size_t size);
extern void func_00520748(void* memory);
extern const char D_005CEAE0[];
extern const char D_005CEAE0_sda[] __attribute__((section(".sdata")));
extern const char D_005CEAF0[];
extern const char D_005CEB10[];
extern const char D_005CEB30[];
HPad gWorkPads[HPAD_PORT_MAX]; // 007e09b0
HPad gPads[HPAD_PORT_MAX];     // 007e0940
static u_long128 sAddrPort1[scePadDmaBufferMax] __attribute__((aligned(64))); // 007e0840
static u_long128 sAddrPort2[scePadDmaBufferMax] __attribute__((aligned(64))); // 007e0740
static u8 sRDataPort2[32]; // 007e0720
static u8 sRDataPort1[32]; // 007e0700
extern u8 gWorkPads_abs[];
extern u8 gPads_abs[];
extern u8 sAddrPort1_abs[];
extern u8 sAddrPort2_abs[];
static s16 sRumbleState;
static union
{
    u16 h;
    u8 b;
} sRumbleIntensity;
static s16 sRumblePhase;
static s16 sRumbleOffFrames;
static s16 sRumbleOnFrames;
static s16 sRumbleCadence;
static s16 sRumbleDuration;
static s32 sRwAllocatedBytes;
static u32 sRwAllocationCount;
static u32 sRwCallocCount;
static u32 sRwReallocCount;
static u32 sRwAllocationHint;
static RwMemoryFunctions sRwMemoryFunctions;
#pragma alias sRwReallocCount_sda sRwReallocCount
extern u32 sRwReallocCount_sda __attribute__((section(".sdata")));

static inline void H_Dbprt_AppendText3D(HDbText3D* text)
{
    HDbText3D* last;

    if (sText3DList == NULL)
    {
        sText3DList = text;
        return;
    }

    last = sText3DList;
    for (;;)
    {
        if (last->next == NULL)
        {
            last->next = text;
            break;
        }
        last = last->next;
    }
}
static void H_Chrdsp_BuildQuad(RwIm2DVertex* vertices, f32 x, f32 y, f32 width,
                                f32 height, f32 z, f32 recipZ, const RwRGBA* color)
{
    s32 vertexIndex;

    for (vertexIndex = 0; vertexIndex < 4; vertexIndex++)
    {
        vertices[vertexIndex].u.els.scrVertex.z = z;
        vertices[vertexIndex].u.els.recipZ = recipZ;
        vertices[vertexIndex].u.els.color.r = (f32)color->r;
        vertices[vertexIndex].u.els.color.g = (f32)color->g;
        vertices[vertexIndex].u.els.color.b = (f32)color->b;
        vertices[vertexIndex].u.els.color.a = (f32)color->a;
    }

    vertices[0].u.els.scrVertex.x = x;
    vertices[0].u.els.scrVertex.y = y;
    vertices[0].u.els.u = 0.0f;
    vertices[0].u.els.v = 0.0f;

    vertices[1].u.els.scrVertex.x = x + width;
    vertices[1].u.els.scrVertex.y = y;
    vertices[1].u.els.u = 1.0f;
    vertices[1].u.els.v = 0.0f;

    vertices[2].u.els.scrVertex.x = x;
    vertices[2].u.els.scrVertex.y = y + height;
    vertices[2].u.els.u = 0.0f;
    vertices[2].u.els.v = 1.0f;

    vertices[3].u.els.scrVertex.x = x + width;
    vertices[3].u.els.scrVertex.y = y + height;
    vertices[3].u.els.u = 1.0f;
    vertices[3].u.els.v = 1.0f;
}
static void H_Chrdsp_RenderTexture(HChrdspTexture* texture, RwIm2DVertex* vertices)
{
    RwRenderStateSet(rwRENDERSTATETEXTURERASTER, texture->raster);
    RwIm2DRenderPrimitive(rwPRIMTYPETRISTRIP, vertices, 4);
}
static s32 H_Chrdsp_GetFadeFrames(s32 index)
{
    switch (index)
    {
    case 0:
        return 3;
    case 1:
        return 100;
    case 2:
    case 3:
    case 4:
        return 2;
    default:
        return 80;
    }
}
static f32 H_Chrdsp_GetOverlayYOffset(const HChrdspWork* work)
{
    switch (work->characterId)
    {
    case 15:
        return 189.0f;
    case 10:
        return 149.0f;
    case 39:
        return 81.0f;
    case 30:
        return 100.0f;
    case 42:
        return 76.0f;
    case 48:
        return 97.0f;
    case 12:
        return 134.0f;
    case 9:
        return 122.0f;
    case 5:
        if ((work->variant == 4) || (work->variant == 5) || (work->variant == 6))
        {
            return 101.0f;
        }
        return 111.0f;
    case 8:
        return 130.0f;
    case 6:
        return 116.0f;
    case 13:
        return 119.0f;
    case 27:
        return 136.0f;
    default:
        return 111.0f;
    }
}
static void H_Chrdsp_AdvanceAlphaTimer(HChrdspWork* work)
{
    work->alphaTimer--;
    if (work->alphaTimer > 0)
    {
        return;
    }

    work->alphaPhase = work->alphaPhase == 0;
    work->alphaIndex++;
    if (work->alphaIndex >= 6)
    {
        work->alphaIndex = 0;
    }
    work->alphaTimer = H_Chrdsp_GetFadeFrames(work->alphaIndex);
}
static void H_Chrdsp_Draw(HChrdspWork* work)
{
    RwIm2DVertex overlayVertices[4];
    RwCamera* camera;
    RwV2d position;
    f32 recipZ;
    f32 z;
    f32 primaryWidth;
    f32 primaryHeight;
    f32 overlayWidth;
    f32 overlayHeight;
    f32 overlayYOffset;
    s32 quadIndex;

    camera = kwlnGetMainCamera();
    recipZ = 1.0f / camera->nearPlane;
    z = RwIm2DGetNearScreenZ() - work->zOffset;
    position = work->position;
    if (work->characterId == 39)
    {
        position.y += 48.0f;
    }

    primaryWidth = work->layerWidth * 4.0f;
    primaryHeight = work->layerHeight * 4.0f;
    for (quadIndex = 0; quadIndex < HCHRDP_QUAD_COUNT; quadIndex++)
    {
        H_Chrdsp_BuildQuad(work->vertices[quadIndex],
                            position.x + 256.0f - primaryWidth / 2.0f,
                            position.y + 256.0f - primaryHeight / 2.0f,
                            primaryWidth - 1.0f, primaryHeight - 1.0f,
                            z, recipZ, &work->color);
    }
    H_Chrdsp_RenderTexture((HChrdspTexture*)work->resources[0], work->vertices[0]);

    if ((work->resourceIndex < 2) || (work->color.a != 255) || (work->drawMiddleLayer == 0))
    {
        return;
    }

    H_Chrdsp_AdvanceAlphaTimer(work);

    overlayWidth = work->layerWidth * 4.0f;
    overlayHeight = work->layerHeight * 128.0f;
    overlayYOffset = H_Chrdsp_GetOverlayYOffset(work);
    H_Chrdsp_BuildQuad(overlayVertices,
                        position.x + 256.0f - overlayWidth / 2.0f,
                        position.y + 32.0f - overlayHeight / 2.0f + overlayYOffset,
                        overlayWidth - 1.0f, overlayHeight - 1.0f,
                        z, recipZ, &work->color);
    H_Chrdsp_RenderTexture((HChrdspTexture*)work->resources[1], overlayVertices);

    if ((work->resourceIndex < HCHRDP_LAYER_COUNT) || (work->color.a != 255) ||
        (work->drawTopLayer == 0))
    {
        return;
    }

    H_Chrdsp_BuildQuad(overlayVertices,
                        position.x + 256.0f - overlayWidth / 2.0f,
                        position.y + 32.0f - overlayHeight / 2.0f + overlayYOffset + 155.0f,
                        overlayWidth - 1.0f, overlayHeight - 1.0f,
                        z, recipZ, &work->color);
    H_Chrdsp_RenderTexture((HChrdspTexture*)work->resources[2], overlayVertices);
}
static void H_Chrdsp_LoadArchiveLayer(HChrdspWork* work)
{
    char archivePath[256];
    const char* archiveEntry;

    if (H_Cdvd_IsFileLoaded(work->archive) == 0)
    {
        return;
    }

    if (work->usesCustomPath == 0)
    {
        if ((datGetScenarioMode() != 0) && (work->characterId == 9))
        {
            sprintf(archivePath, "test/char/i_bust29_%1d", work->resourceIndex);
        }
        else
        {
            sprintf(archivePath, "test/char/i_bust%02d_%1d", work->characterId,
                    work->resourceIndex);
        }
    }

    archiveEntry = func_001022e0(work->archive, work->resourceIndex);
    if (archiveEntry == NULL)
    {
        H_Cdvd_Destroy(work->archive);
        work->archive = NULL;
        work->state = HCHRDP_STATE_UNAVAILABLE;
        return;
    }

    sprintf(work->texturePath, "bustup/%s", archiveEntry);
    work->asyncRequest = func_0010c1a0(0, work->texturePath, NULL, 0, NULL, NULL, 0,
                                       NULL, "h_chrdsp.c", NULL, (void*)0x9F);
    work->state = HCHRDP_STATE_PARSE_LAYER;
}
static void H_Chrdsp_ParseLayer(HChrdspWork* work)
{
    HChrdspTexture* texture;
    u32 isReady;

    isReady = false;
    texture = (HChrdspTexture*)func_0010c3a0(work->asyncRequest, &isReady, NULL);
    work->resources[work->resourceIndex] = texture;
    if (isReady == false)
    {
        return;
    }

    texture->renderFlags = (texture->renderFlags & 0xFFFF00FF) | 0x00003300;
    work->asyncRequest = NULL;
    work->resourceIndex++;
    work->state = HCHRDP_STATE_LOAD_ARCHIVE;
}

// FUN_00103DA0
void* H_Pad_RwAllocateRaw(size_t size, RwUInt32 hint)
{
    HPadRwAllocation* allocation;
    s32 intrState;

    if (size == 0xAC)
    {
        printf(D_005CEAE0_sda);
    }

    sRwAllocatedBytes += size;
    intrState = func_0050d3a0();
    allocation = (HPadRwAllocation*)func_00520728(size + sizeof(HPadRwAllocation));
    if (intrState != 0)
    {
        func_0050d3f0();
    }

    if (allocation == (HPadRwAllocation*)0x014CCBC8)
    {
        printf(D_005CEAE0);
    }
    if (allocation == NULL)
    {
        printf(D_005CEAF0);
        printf(D_005CEAF0);
        printf(D_005CEAF0);
        printf(D_005CEAF0);
        printf(D_005CEB10, size, sRwAllocatedBytes);
        printf(D_005CEAF0);
        printf(D_005CEAF0);
        printf(D_005CEAF0);
        printf(D_005CEAF0);
        if (datGetFlag(0x141A) != 0)
        {
            return NULL;
        }

        K_Assert(D_005CEB30, 671);
        return NULL;
    }

    allocation->size = size;
    sRwAllocationCount++;
    allocation->serial = sRwAllocationCount;
    allocation->hint = sRwAllocationHint;
    return allocation + 1;
}

/* W419 probe: moving copySize into the else block stayed nd6,obj228/window240 (same as baseline). */
/* W421 row classification: verify nd6, object228/window240, rate0.026316.
 * Offsets 0x30/0x58/0x5c/0x68/0x88/0xac are respectively
 * move $s0,$v0 / move $s1,$v0; lw $s1,-4($s4) / lw $s0,-4($s4);
 * sltu $at,$s3,$s1 / sltu $at,$s3,$s0; move $s1,$s3 / move $s0,$s3;
 * move $a2,$s1 / move $a2,$s0; and beqz $s0,0x10400c / beqz $s1,0x10400c
 * (candidate / retail): register-role colouring only. */

// FUN_00103F50
#ifndef PC_BUILD
asm void* H_Pad_RwRealloc(void* memory, RwUInt32 newSize, RwUInt32 hint)
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
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x0040882d
  .word 0x16800008
  .word 0x00000000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0c041050
  .word 0x00000000
  .word 0x0040902d
  .word 0x10000016
  .word 0x00000000
  .word 0x8e90fffc
  .word 0x0270082b
  .word 0x10200002
  .word 0x00000000
  .word 0x0260802d
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0c041050
  .word 0x00000000
  .word 0x0040902d
  .word 0x0240202d
  .word 0x0280282d
  .word 0x0200302d
  .word 0x0c148494
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0410a0
  .word 0x00000000
  .word 0x8f82b1c0
  .word 0x24420001
  .word 0xaf82b1c0
  .word 0x12200003
  .word 0x00000000
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0240102d
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
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma optimization_level 2
// FUN_00104040 MATCHING
void* H_Pad_RwCalloc(RwUInt32 elementCount, RwUInt32 elementSize, RwUInt32 hint)
{
    void* memory;
    RwUInt32 size;
    s32 intrState;

    intrState = func_0050d3a0();
    size = elementSize * elementCount;
    if ((memory = H_Pad_RwMalloc(size, hint)) != NULL)
    {
        memset(memory, 0, size);
        sRwCallocCount++;
    }
    if (intrState != 0)
    {
        func_0050d3f0();
    }
    return memory;
}



/* W389 pragma: opt_propagation off; without nd=1000/object=1500, with nd=966/object=1468; window=1536. */
// FUN_001040F0
RwMemoryFunctions* H_Pad_GetRwMemoryFunctions(void)
{
    sRwMemoryFunctions.RwMalloc = H_Pad_RwMalloc;
    sRwMemoryFunctions.RwFree = H_Pad_RwFree;
    sRwMemoryFunctions.RwRealloc = H_Pad_RwRealloc;
    sRwMemoryFunctions.RwCalloc = H_Pad_RwCalloc;
    return &sRwMemoryFunctions;
}

/* W389 residual: stack-address scheduling (candidate materializes sp+0x60 then adds character; retail adds character to sp then applies +0x60). Baseline nd=7/object=416 at the window; loop-invariants/common-subs exceeded the window (nd=314/424 and 261/428), other singles and all pairs were neutral. Volatile-cast and integer-address spellings stayed nd=7; array indexing regressed to nd=125/object=412 and was reverted. */
// FUN_00104140
void* H_Pad_RwMalloc(RwUInt32 size, RwUInt32 hint)
{
    HPadRwAllocation* allocation;
    u8* alignmentBase;
    u8* alignedMemory;
    s32 intrState;

    if (kwlnTaskGetUpdating() != NULL) {
        if (strcmp("H_CutInDraw", (const char*)kwlnTaskGetUpdating()) == 0) {
            if (size == 0x27d8) goto pr;
            if (size == 0x1fe0) goto pr;
            if (size == 0x27d8) {
pr:
                printf(D_005CEAE0_sda);
            }
        }
    }

    intrState = func_0050d3a0();
    allocation = (HPadRwAllocation*)H_Pad_RwAllocateRaw(size + 0x14, hint);
    if (allocation == NULL) {
        if (intrState != 0) {
            func_0050d3f0();
        }
        return NULL;
    }

    allocation[-1].alignment = 16;
    alignmentBase = (u8*)allocation + 4;
    alignedMemory = alignmentBase + (16 - ((uintptr_t)alignmentBase & 0xF));
    *(void**)(alignedMemory - sizeof(void*)) = allocation;

    if (intrState != 0) {
        func_0050d3f0();
    }

    if (kwlnTaskGetUpdating() != NULL) {
        if (size == 0x50) {
            strcmp("\n", (const char*)kwlnTaskGetUpdating());
        }
    }

    return alignedMemory;
}


// FUN_00104280
void H_Pad_RwFree(void* memory)
{
    s32 intrState;

    if (memory != NULL)
    {
        intrState = func_0050d3a0();
        H_Pad_RwFreeRaw(*(void**)((u8*)memory - sizeof(void*)));
        if (intrState != 0)
        {
            func_0050d3f0();
        }
    }
}

// FUN_001042E0
void H_Dbprt_Init()
{
    HCdvd* cdvd;
    RwRaster* raster;

    cdvd = H_Cdvd_Request("font/size12/f11_001.tmx", HCDVD_FILENORMAL);
    H_Cdvd_ReadSync(cdvd);

    sFontImage = RwImageRead("font/size12/f11_001.tmx");

    H_Cdvd_Destroy(cdvd);

    raster = RwRasterCreate(sFontImage->width,
                            sFontImage->height,
                            4,
                            rwRASTERTYPETEXTURE |
                            rwRASTERFORMATPAL4 |
                            rwRASTERFORMAT8888);
    sFontRaster = raster;
    RwRasterSetFromImage(raster, sFontImage);

    RwImageDestroy(sFontImage);
    sFontImage = NULL;

    H_Cdvd_001007f0();

    memset(sGrid, ' ', sizeof(sGrid));
    sText3DList = NULL;
}

// FUN_001043B0
void H_Dbprt_Flush()
{
    HDbText3D* curr;
    HDbText3D* next;

    memset(sGrid, ' ', sizeof(sGrid));

    curr = sText3DList;
    sText3DList = NULL;
    while (true)
    {
        if (curr == NULL)
        {
            break;
        }

        next = curr->next;
        RwFree(curr);
        curr = next;
    }
}

#pragma opt_lifetimes on
/* Removing this worsens FUN_00104420 (nd244 -> nd268) - measured W161. */
#pragma opt_loop_invariants on
// FUN_00104420
#ifndef PC_BUILD
asm void H_Dbprt_Main()
{
  .set noreorder
  .word 0x27bdfe90
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000d03
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
  .word 0x0c0659dc
  .word 0x00000000
  .word 0x24040001
  .word 0x8f85b1e0
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000202d
  .word 0x3c03437f
  .word 0x3c020096
  .word 0xc4400088
  .word 0x1000000b
  .word 0x00000000
  .word 0x00041180
  .word 0x005d1021
  .word 0x24420050
  .word 0xe4540018
  .word 0xac430020
  .word 0xac430024
  .word 0xac430028
  .word 0xac43002c
  .word 0xe4400008
  .word 0x24840001
  .word 0x28820004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000068
  .word 0x00000000
  .word 0x0000902d
  .word 0x24020035
  .word 0x02221818
  .word 0x3c02007e
  .word 0x24421e30
  .word 0x00438021
  .word 0x3c024140
  .word 0x44820800
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000d42
  .word 0x3c024130
  .word 0x44820000
  .word 0x00000000
  .word 0x46150500
  .word 0x10000052
  .word 0x00000000
  .word 0x02121021
  .word 0x90430000
  .word 0x24020020
  .word 0x1062004c
  .word 0x00000000
  .word 0x3c024140
  .word 0x44820800
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000842
  .word 0xe7a10050
  .word 0xe7b50054
  .word 0x3c024130
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00090
  .word 0xe7b50094
  .word 0xe7a100d0
  .word 0xe7b400d4
  .word 0xe7a00110
  .word 0xe7b40114
  .word 0x2464ffe0
  .word 0x308200ff
  .word 0x3043000f
  .word 0x04410004
  .word 0x00000000
  .word 0x10600002
  .word 0x00000000
  .word 0x2463fff0
  .word 0x3c023d80
  .word 0x44820800
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x460008c2
  .word 0xe7a30150
  .word 0x308200ff
  .word 0x00021102
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000882
  .word 0xe7a20154
  .word 0x3c023d40
  .word 0x44820000
  .word 0x00000000
  .word 0x46030040
  .word 0xe7a10158
  .word 0xe7a2015c
  .word 0xe7a30160
  .word 0x46020000
  .word 0xe7a00164
  .word 0xe7a10168
  .word 0xe7a0016c
  .word 0x0000202d
  .word 0x1000000c
  .word 0x00000000
  .word 0x000410c0
  .word 0x005d1021
  .word 0x24430150
  .word 0x00041180
  .word 0x005d1021
  .word 0x24420050
  .word 0xc4600000
  .word 0xe4400010
  .word 0xc4600004
  .word 0xe4400014
  .word 0x24840001
  .word 0x28820004
  .word 0x1440fff3
  .word 0x00000000
  .word 0x24040004
  .word 0x27a50050
  .word 0x0080302d
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420035
  .word 0x1440ffad
  .word 0x00000000
  .word 0x26310001
  .word 0x2a220028
  .word 0x1440ff97
  .word 0x00000000
  .word 0x0c0411c4
  .word 0x00000000
  .word 0x0c0414fc
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0170
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_loop_invariants reset
#pragma opt_lifetimes reset
#pragma push
#pragma opt_propagation off
// FUN_00104710
asm static void H_Dbprt_DrawText3D(void)
{
  .set noreorder
  .word 0x27bdfea0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x8f91b1d8
  .word 0x0c0659dc
  .word 0x00000000
  .word 0x24040001
  .word 0x8f85b1e0
  .word 0x3c020096
  .word 0x8c420090
  .word 0x0040f809
  .word 0x00000000
  .word 0x12200159
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0xc62c000c
  .word 0x44800000
  .word 0x00000000
  .word 0x460c0032
  .word 0x45010004
  .word 0x00000000
  .word 0x0c041484
  .word 0x00000000
  .word 0x46000506
  .word 0x0000802d
  .word 0x10000143
  .word 0x00000000
  .word 0x02301821
  .word 0x80640010
  .word 0x10800142
  .word 0x00000000
  .word 0x24030020
  .word 0x1083013b
  .word 0x00000000
  .word 0xc621000c
  .word 0x44800000
  .word 0x00000000
  .word 0x46010032
  .word 0x4500009e
  .word 0x00000000
  .word 0x3c024140
  .word 0x44820800
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000842
  .word 0xc6200004
  .word 0x460100c0
  .word 0xe7a30040
  .word 0xc6220008
  .word 0xe7a20044
  .word 0x3c024130
  .word 0x44820000
  .word 0x00000000
  .word 0x46030040
  .word 0xe7a10080
  .word 0xe7a20084
  .word 0xe7a300c0
  .word 0x46020000
  .word 0xe7a000c4
  .word 0xe7a10100
  .word 0xe7a00104
  .word 0x2482ffe0
  .word 0x0002263c
  .word 0x0004263f
  .word 0x3083000f
  .word 0x04810004
  .word 0x00000000
  .word 0x10600002
  .word 0x00000000
  .word 0x2463fff0
  .word 0x3c023d80
  .word 0x44820800
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x460008c2
  .word 0xe7a30140
  .word 0x00041903
  .word 0x04810003
  .word 0x00000000
  .word 0x2482000f
  .word 0x00021903
  .word 0x3c023d80
  .word 0x44820800
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000882
  .word 0xe7a20144
  .word 0x3c023d40
  .word 0x44820000
  .word 0x00000000
  .word 0x46030040
  .word 0xe7a10148
  .word 0xe7a2014c
  .word 0xe7a30150
  .word 0x46020000
  .word 0xe7a00154
  .word 0xe7a10158
  .word 0xe7a0015c
  .word 0x0000282d
  .word 0x3c020096
  .word 0xc4410088
  .word 0x10000050
  .word 0x00000000
  .word 0x00051180
  .word 0x005d1021
  .word 0x24440040
  .word 0xc6200110
  .word 0x46000801
  .word 0xe4800008
  .word 0x92220114
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
  .word 0xe4800020
  .word 0x92220115
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
  .word 0xe4800024
  .word 0x92220116
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
  .word 0xe4800028
  .word 0x92220117
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
  .word 0xe480002c
  .word 0xe4950018
  .word 0x000510c0
  .word 0x005d1021
  .word 0x24420140
  .word 0xc4400000
  .word 0xe4800010
  .word 0xc4400004
  .word 0xe4800014
  .word 0x24a50001
  .word 0x28a20004
  .word 0x1440ffaf
  .word 0x00000000
  .word 0x24040004
  .word 0x27a50040
  .word 0x0080302d
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000098
  .word 0x00000000
  .word 0x3c024140
  .word 0x44820800
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000842
  .word 0xc6200004
  .word 0x460100c0
  .word 0xe7a30040
  .word 0xc6220008
  .word 0xe7a20044
  .word 0x3c024130
  .word 0x44820000
  .word 0x00000000
  .word 0x46030040
  .word 0xe7a10080
  .word 0xe7a20084
  .word 0xe7a300c0
  .word 0x46020000
  .word 0xe7a000c4
  .word 0xe7a10100
  .word 0xe7a00104
  .word 0x2482ffe0
  .word 0x0002263c
  .word 0x0004263f
  .word 0x3083000f
  .word 0x04810004
  .word 0x00000000
  .word 0x10600002
  .word 0x00000000
  .word 0x2463fff0
  .word 0x3c023d80
  .word 0x44820800
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x460008c2
  .word 0xe7a30140
  .word 0x00041903
  .word 0x04810003
  .word 0x00000000
  .word 0x2482000f
  .word 0x00021903
  .word 0x3c023d80
  .word 0x44820800
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000882
  .word 0xe7a20144
  .word 0x3c023d40
  .word 0x44820000
  .word 0x00000000
  .word 0x46030040
  .word 0xe7a10148
  .word 0xe7a2014c
  .word 0xe7a30150
  .word 0x46020000
  .word 0xe7a00154
  .word 0xe7a10158
  .word 0xe7a0015c
  .word 0x0000282d
  .word 0x1000004e
  .word 0x00000000
  .word 0x00051180
  .word 0x005d1021
  .word 0x24440040
  .word 0xe4940008
  .word 0x92220114
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
  .word 0xe4800020
  .word 0x92220115
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
  .word 0xe4800024
  .word 0x92220116
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
  .word 0xe4800028
  .word 0x92220117
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
  .word 0xe480002c
  .word 0xe4950018
  .word 0x000510c0
  .word 0x005d1021
  .word 0x24420140
  .word 0xc4400000
  .word 0xe4800010
  .word 0xc4400004
  .word 0xe4800014
  .word 0x24a50001
  .word 0x28a20004
  .word 0x1440ffb1
  .word 0x00000000
  .word 0x24040004
  .word 0x27a50040
  .word 0x0080302d
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0x26100001
  .word 0x2a030100
  .word 0x1460febc
  .word 0x00000000
  .word 0x8e310000
  .word 0x1000fea7
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0160
  .word 0x03e00008
  .word 0x00000000
}
#pragma pop
#pragma opt_propagation reset

/* W421 row classification: verify nd7, object416/window416, rate0.016827.
 * Offsets 0xf0 and 0xf4 are:
 * 0xf0 addiu $v1,$sp,0x60 / addu $v1,$s3,$sp;
 * 0xf4 addu $v1,$s3,$v1 / addiu $v1,$v1,0x60 (candidate / retail):
 * stack-address scheduling. */

// FUN_00104D10
#ifndef PC_BUILD
asm void H_Dbprt_FmtAt(volatile /* Removing this qualifier worsens H_Dbprt_FmtAt (NONMATCHING nd170 -> NONMATCHING nd290, size 412 -> 424) - measured W170. */ RwV2d pos, const char* fmt, ...)
{
  .set noreorder
  .word 0x27bdfe50
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0xffa40160
  .word 0xafa50170
  .word 0xffa60180
  .word 0xffa70188
  .word 0xffa80190
  .word 0xffa90198
  .word 0xffaa01a0
  .word 0xffab01a8
  .word 0xc7b40164
  .word 0x24030002
  .word 0x28620008
  .word 0x14400004
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000004
  .word 0x00000000
  .word 0x24020008
  .word 0x00431023
  .word 0x000218c0
  .word 0x27a201b0
  .word 0x00433023
  .word 0x27a40060
  .word 0x8fa50170
  .word 0x0c14a232
  .word 0x00000000
  .word 0xc7a00160
  .word 0x46000024
  .word 0x44120000
  .word 0x4600a024
  .word 0x44110000
  .word 0x0000982d
  .word 0x0240802d
  .word 0x10000034
  .word 0x00000000
  .word 0xc7a10160
  .word 0x3c034254
  .word 0x44830000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000030
  .word 0x00000000
  .word 0x3c034220
  .word 0x44830000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4500002a
  .word 0x00000000
  .word 0x2a410035
  .word 0x10200027
  .word 0x00000000
  .word 0x2a210028
  .word 0x10200024
  .word 0x00000000
  .word 0x027d1821
  .word 0x24630060
  .word 0x80650000
  .word 0x10a0001f
  .word 0x00000000
  .word 0x2403000a
  .word 0x14a30005
  .word 0x00000000
  .word 0x0200902d
  .word 0x26310001
  .word 0x10000014
  .word 0x00000000
  .word 0x24030027
  .word 0x16230009
  .word 0x00000000
  .word 0x2a430035
  .word 0x14600006
  .word 0x00000000
  .word 0x27848598
  .word 0x0c14896a
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x24030035
  .word 0x02232018
  .word 0x3c03007e
  .word 0x24631e30
  .word 0x00641821
  .word 0x02431821
  .word 0xa0650000
  .word 0x26520001
  .word 0x26730001
  .word 0x2a630100
  .word 0x1460ffcb
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd01b0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */










#pragma alias hChrdspDrawPrimitiveSlot D_009600A0_y2










/* Removing this loses FUN_00105800 (MATCH nd0 -> MISMATCH nd42) - measured W161. */
// FUN_00104EB0
void H_Dbprt_FmtCol3D(RwV2d pos, RwRGBA color, const char* fmt, ...)
{
    HDbText3D* text;
    va_list args;

    text = RwCalloc(1, sizeof(HDbText3D), rwMEMHINTDUR_GLOBAL);
    va_start(args, fmt);
    vsprintf(text->text, fmt, args);

    text->pos.x = pos.x;
    text->pos.y = pos.y;
    text->pos.z = 0.0f;
    text->color = color;
    text->zOffset = 0.0f;

    H_Dbprt_AppendText3D(text);
}
// FUN_00104FD0
void H_Dbprt_Fmt3D(RwV2d pos, const char* fmt, ...)
{
    HDbText3D* text;
    va_list args;

    text = RwCalloc(1, sizeof(HDbText3D), rwMEMHINTDUR_GLOBAL);
    va_start(args, fmt);
    vsprintf(text->text, fmt, args);

    text->pos.x = pos.x;
    text->pos.y = pos.y;
    text->pos.z = 0.0f;
    text->zOffset = 0.0f;
    text->color.a = 255;
    text->color.b = 255;
    text->color.g = 255;
    text->color.r = 255;

    H_Dbprt_AppendText3D(text);
}

/* Removing this worsens FUN_001059b0 (nd2207 -> nd2247) - measured W161. */
// FUN_001050E0
void H_Dbprt_FmtZOff3D(RwV2d pos, f32 zOffset, RwRGBA color, const char* fmt, ...)
{
    HDbText3D* text;
    va_list args;

    text = RwCalloc(1, sizeof(HDbText3D), rwMEMHINTDUR_GLOBAL);
    va_start(args, fmt);
    vsprintf(text->text, fmt, args);

    text->pos.x = pos.x;
    text->pos.y = pos.y;
    text->pos.z = 0.0f;
    text->zOffset = zOffset;
    text->color = color;

    H_Dbprt_AppendText3D(text);
}

// FUN_00105210
static f32 H_Dbprt_CalculateScreenZ(f32 zOffset)
{
    f32 zBufferFar;
    f32 zBufferNear;
    f32 farPlane;
    f32 nearPlane;
    f32 z;

    zBufferFar = rwGlobals.device.zBufferFar;
    zBufferNear = rwGlobals.device.zBufferNear;
    farPlane = kwlnGetMainCamera()->farPlane;
    nearPlane = kwlnGetMainCamera()->nearPlane;

    z = 0.0f + zBufferFar + (nearPlane / zOffset) *
                                ((zOffset - farPlane) * ((zBufferNear - zBufferFar) / (nearPlane - farPlane)));
    if (z < 0.0f)
    {
        z = 0.0f;
    }

    return z;
}

// FUN_001052B0
void H_Dbprt_FmtLog(const char* fmt, ...)
{
    char buffer[HDBPRT_LOG_MAXCHAR];
    s32 i;
    s32 line;
    va_list args;

    for (line = 0; line < HDBPRT_LOG_MAXCHAR; line++)
    {
        buffer[line] = 0;
    }

    va_start(args, fmt);
    vsprintf(buffer, fmt, args);

    if (sLogLine == HDBPRT_LOG_MAXLINE)
    {
        for (i = 1; i < HDBPRT_LOG_MAXLINE; i++)
        {
            memcpy(sLogs[i - 1], sLogs[i], HDBPRT_LOG_MAXCHAR);
        }
        sLogLine--;
    }

    memcpy(sLogs[sLogLine], buffer, HDBPRT_LOG_MAXCHAR);
    sLogLine++;
}

// FUN_001053F0
asm static void H_Dbprt_DrawLog(void)
{
  .set noreorder
  .word 0x27bdfe70
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x8f83b1d0
  .word 0x106000e8
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
  .word 0xdf8285a0
  .word 0xffa20188
  .word 0x0c0659dc
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000282d
  .word 0x3c044280
  .word 0x3c034300
  .word 0x3c020096
  .word 0xc4400088
  .word 0x1000000b
  .word 0x00000000
  .word 0x00051180
  .word 0x005d1021
  .word 0x24420060
  .word 0xe4540018
  .word 0xac440020
  .word 0xac440024
  .word 0xac440028
  .word 0xac43002c
  .word 0xe4400008
  .word 0x24a50001
  .word 0x28a20004
  .word 0x1440fff4
  .word 0x00000000
  .word 0xc7a40188
  .word 0xe7a40060
  .word 0xc7a3018c
  .word 0xe7a30064
  .word 0x3c0243f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46040000
  .word 0x3c024180
  .word 0x44821000
  .word 0x00000000
  .word 0x46001040
  .word 0xe7a100a0
  .word 0xe7a300a4
  .word 0xe7a400e0
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46030000
  .word 0x46001000
  .word 0xe7a000e4
  .word 0xe7a10120
  .word 0xe7a00124
  .word 0x3c110096
  .word 0x263100a0
  .word 0x24040004
  .word 0x27a50060
  .word 0x0080302d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0c0659dc
  .word 0x00000000
  .word 0x24040001
  .word 0x8f85b1e0
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000282d
  .word 0x3c04437f
  .word 0x3c030096
  .word 0xc4600088
  .word 0x1000000b
  .word 0x00000000
  .word 0x00051980
  .word 0x007d1821
  .word 0x24630060
  .word 0xe4740018
  .word 0xac640020
  .word 0xac640024
  .word 0xac640028
  .word 0xac64002c
  .word 0xe4600008
  .word 0x24a50001
  .word 0x28a30004
  .word 0x1460fff4
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000070
  .word 0x00000000
  .word 0x00122200
  .word 0x3c03007e
  .word 0x24630a30
  .word 0x00648021
  .word 0x0000982d
  .word 0x3c034140
  .word 0x44830800
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000d42
  .word 0x3c034130
  .word 0x44830000
  .word 0x00000000
  .word 0x46150500
  .word 0x1000005b
  .word 0x00000000
  .word 0xdf8385a8
  .word 0xffa30180
  .word 0x02131821
  .word 0x90640000
  .word 0x10800058
  .word 0x00000000
  .word 0x24030020
  .word 0x10830051
  .word 0x00000000
  .word 0x3c024140
  .word 0x44820800
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000942
  .word 0xc7a10180
  .word 0x46012900
  .word 0xe7a40060
  .word 0xc7a30184
  .word 0x4603a880
  .word 0xe7a20064
  .word 0x3c024130
  .word 0x44820000
  .word 0x00000000
  .word 0x46050000
  .word 0x46010040
  .word 0xe7a100a0
  .word 0xe7a200a4
  .word 0xe7a400e0
  .word 0x4603a000
  .word 0xe7a000e4
  .word 0xe7a10120
  .word 0xe7a00124
  .word 0x2484ffe0
  .word 0x308200ff
  .word 0x3043000f
  .word 0x04410004
  .word 0x00000000
  .word 0x10600002
  .word 0x00000000
  .word 0x2463fff0
  .word 0x3c023d80
  .word 0x44820800
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x460008c2
  .word 0xe7a30160
  .word 0x308200ff
  .word 0x00021102
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000882
  .word 0xe7a20164
  .word 0x3c023d40
  .word 0x44820000
  .word 0x00000000
  .word 0x46030040
  .word 0xe7a10168
  .word 0xe7a2016c
  .word 0xe7a30170
  .word 0x46020000
  .word 0xe7a00174
  .word 0xe7a10178
  .word 0xe7a0017c
  .word 0x0000202d
  .word 0x1000000c
  .word 0x00000000
  .word 0x000410c0
  .word 0x005d1021
  .word 0x24430160
  .word 0x00041180
  .word 0x005d1021
  .word 0x24420060
  .word 0xc4600000
  .word 0xe4400010
  .word 0xc4600004
  .word 0xe4400014
  .word 0x24840001
  .word 0x28820004
  .word 0x1440fff3
  .word 0x00000000
  .word 0x24040004
  .word 0x27a50060
  .word 0x0080302d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x2a630035
  .word 0x1460ffa4
  .word 0x00000000
  .word 0x26520001
  .word 0x8383b1d4
  .word 0x0243182a
  .word 0x1460ff8e
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0190
  .word 0x03e00008
  .word 0x00000000
}

#pragma opt_loop_invariants on
// FUN_00105800
void H_Chrdsp_Init(void)
{
    s16 workIndex;
    s16 resourceIndex;
    s32 offset;
    HChrdspWork* work;

    for (workIndex = 0; workIndex < HCHRDP_WORK_COUNT; workIndex++)
    {
        offset = (long)workIndex;
        offset *= 0x670;
        work = (HChrdspWork*)((u8*)D_007E2680 + offset);
        work->state = HCHRDP_STATE_IDLE;
        work->drawMiddleLayer = 0;
        work->drawTopLayer = 0;

        for (resourceIndex = 0; resourceIndex < HCHRDP_LAYER_COUNT; resourceIndex++)
        {
            work->resources[resourceIndex] = NULL;
        }
    }
}
#pragma opt_loop_invariants reset

// FUN_001058A0
void H_Chrdsp_Main(void)
{
    s16 workIndex;
    void (**setRenderState)(u32 state, u32 value);
    setRenderState = (void (**)(u32, u32))D_00960090_abs;
    (*setRenderState)(6, 1);
    (*setRenderState)(7, 2);
    (*setRenderState)(8, 1);
    (*setRenderState)(0xB, 6);
    (*setRenderState)(0xA, 5);
    (*setRenderState)(9, 1);
    (*setRenderState)(0xC, 1);
    (*setRenderState)(2, 4);

    for (workIndex = 0; workIndex < HCHRDP_WORK_COUNT; workIndex++)
    {
        H_Chrdsp_UpdateWork(&D_007E2680[workIndex]);
    }
}

#pragma opt_loop_invariants on
/* W377 six-knob/pair probe: opt_dead_assignments off improved H_Chrdsp_UpdateWork from nd2476/object3180 to nd2469/object3160; window=3456. */
#pragma opt_dead_assignments off
// Retail draws the middle quad only while alphaPhase is nonzero, duplicates the six-step timer update for both phases, and then draws the top quad; 8 bytes remain (3448/3456 bytes, 99.8%).
// FUN_001059B0
#ifndef PC_BUILD
asm void H_Chrdsp_UpdateWork(HChrdspWork* work)
{
  .set noreorder
  .word 0x27bdfd80
  .word 0xffbf0060
  .word 0x7fb20050
  .word 0x7fb10040
  .word 0x7fb00030
  .word 0xe7b40020
  .word 0x0080802d
  .word 0x84840000
  .word 0x24030004
  .word 0x10830081
  .word 0x00000000
  .word 0x24030003
  .word 0x10830349
  .word 0x00000000
  .word 0x24030002
  .word 0x1083005d
  .word 0x00000000
  .word 0x24030001
  .word 0x10830005
  .word 0x00000000
  .word 0x10800341
  .word 0x00000000
  .word 0x1000033f
  .word 0x00000000
  .word 0x8e040528
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x1040033a
  .word 0x00000000
  .word 0x8e020564
  .word 0x14400020
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x1440000a
  .word 0x00000000
  .word 0x86060004
  .word 0x27a40070
  .word 0x3c05005d
  .word 0x24a53c50
  .word 0x8e07054c
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x86060004
  .word 0x24020009
  .word 0x14c20009
  .word 0x00000000
  .word 0x27a40070
  .word 0x3c05005d
  .word 0x24a53c70
  .word 0x8e06054c
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x27a40070
  .word 0x3c05005d
  .word 0x24a53c50
  .word 0x8e07054c
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x8e040528
  .word 0x8e05054c
  .word 0x0c0408b8
  .word 0x00000000
  .word 0x10400021
  .word 0x00000000
  .word 0x8e040528
  .word 0x8e05054c
  .word 0x0c0408b8
  .word 0x00000000
  .word 0x26040568
  .word 0x3c05005d
  .word 0x24a53c88
  .word 0x0040302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005d
  .word 0x24423c98
  .word 0xffa20010
  .word 0x2402009f
  .word 0xffa20018
  .word 0x0000202d
  .word 0x26050568
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020548
  .word 0x24030002
  .word 0xa6030000
  .word 0x100002f2
  .word 0x00000000
  .word 0x8e040528
  .word 0x0c0403b0
  .word 0x00000000
  .word 0xae000528
  .word 0x24030003
  .word 0xa6030000
  .word 0x100002ea
  .word 0x00000000
  .word 0x8e040548
  .word 0x27a5027c
  .word 0x0000302d
  .word 0x0c0430e8
  .word 0x00000000
  .word 0x8e03054c
  .word 0x00031880
  .word 0x00701821
  .word 0xac620014
  .word 0x8fa3027c
  .word 0x106002de
  .word 0x00000000
  .word 0x8e03054c
  .word 0x00031880
  .word 0x00701821
  .word 0x8c650014
  .word 0x8ca40050
  .word 0x3c03ffff
  .word 0x346300ff
  .word 0x00831824
  .word 0x34633300
  .word 0xaca30050
  .word 0xae000548
  .word 0x8e03054c
  .word 0x24630001
  .word 0xae03054c
  .word 0x24030001
  .word 0xa6030000
  .word 0x100002cc
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000d03
  .word 0xc601000c
  .word 0xc6000010
  .word 0xe7a10270
  .word 0xe7a00274
  .word 0x86030004
  .word 0x24020027
  .word 0x14620007
  .word 0x00000000
  .word 0xc7a10274
  .word 0x3c024240
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00274
  .word 0x0000182d
  .word 0x3c024380
  .word 0x44821000
  .word 0xc7a00270
  .word 0x46001040
  .word 0xc7a00274
  .word 0x46001000
  .word 0x3c050096
  .word 0x3c024400
  .word 0x44825000
  .word 0x3c024000
  .word 0x44824800
  .word 0x44803000
  .word 0x3c073f80
  .word 0x44872000
  .word 0x1000007c
  .word 0x00000000
  .word 0x0000202d
  .word 0x00061200
  .word 0x02021021
  .word 0x1000004d
  .word 0x00000000
  .word 0x0004343c
  .word 0x0006343f
  .word 0x00063180
  .word 0x00464821
  .word 0x92060520
  .word 0x04c00006
  .word 0x00000000
  .word 0x44861000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00064042
  .word 0x30c60001
  .word 0x01064025
  .word 0x44881000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe5220040
  .word 0x92060521
  .word 0x04c00006
  .word 0x00000000
  .word 0x44861000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00064042
  .word 0x30c60001
  .word 0x01064025
  .word 0x44881000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe5220044
  .word 0x92060522
  .word 0x04c00006
  .word 0x00000000
  .word 0x44861000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00064042
  .word 0x30c60001
  .word 0x01064025
  .word 0x44881000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe5220048
  .word 0x92060523
  .word 0x04c00006
  .word 0x00000000
  .word 0x44861000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00064042
  .word 0x30c60001
  .word 0x01064025
  .word 0x44881000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe522004c
  .word 0xc4a30088
  .word 0xc6020524
  .word 0x46021881
  .word 0xe5220028
  .word 0xe5340038
  .word 0x24840001
  .word 0x0004243c
  .word 0x0004243f
  .word 0x0004343c
  .word 0x0006343f
  .word 0x28c60004
  .word 0x14c0ffb0
  .word 0x00000000
  .word 0xc602052c
  .word 0x46025082
  .word 0x460910c3
  .word 0xc6020530
  .word 0x46025082
  .word 0x46091203
  .word 0x460309c1
  .word 0x0003143c
  .word 0x0002143f
  .word 0x00021200
  .word 0x02021021
  .word 0xe4470020
  .word 0x46080081
  .word 0x46023140
  .word 0xe4450024
  .word 0x46030880
  .word 0x460410c1
  .word 0xe4430060
  .word 0xe4450064
  .word 0xe44700a0
  .word 0x46080080
  .word 0x46041081
  .word 0x46023080
  .word 0xe44200a4
  .word 0xe44300e0
  .word 0xe44200e4
  .word 0xac400030
  .word 0xac400034
  .word 0xac470070
  .word 0xac400074
  .word 0xac4000b0
  .word 0xac4700b4
  .word 0xac4700f0
  .word 0xac4700f4
  .word 0x24620001
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x0003343c
  .word 0x0006343f
  .word 0x28c20005
  .word 0x1440ff81
  .word 0x00000000
  .word 0x3c120096
  .word 0x26520090
  .word 0x8e020014
  .word 0x24040001
  .word 0x8c450000
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c110096
  .word 0x263100a0
  .word 0x24040004
  .word 0x26050020
  .word 0x0080302d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e03054c
  .word 0x28630002
  .word 0x14600170
  .word 0x00000000
  .word 0x92040523
  .word 0x240300ff
  .word 0x1483016c
  .word 0x00000000
  .word 0x8e030550
  .word 0x10600169
  .word 0x00000000
  .word 0x8e030558
  .word 0x10600137
  .word 0x00000000
  .word 0x0000102d
  .word 0x3c030096
  .word 0xc4610088
  .word 0x1000004d
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x00031980
  .word 0x007d1821
  .word 0x24650170
  .word 0x92030520
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
  .word 0xe4a00020
  .word 0x92030521
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
  .word 0xe4a00024
  .word 0x92030522
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
  .word 0xe4a00028
  .word 0x92030523
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
  .word 0xe4a0002c
  .word 0xc6000524
  .word 0x46000801
  .word 0xe4a00008
  .word 0xe4b40018
  .word 0x24420001
  .word 0x0002143c
  .word 0x0002143f
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x28630004
  .word 0x1460ffb0
  .word 0x00000000
  .word 0x86030004
  .word 0x2402000f
  .word 0x14620005
  .word 0x00000000
  .word 0x3c02433d
  .word 0x44824800
  .word 0x10000068
  .word 0x00000000
  .word 0x2402000a
  .word 0x14620005
  .word 0x00000000
  .word 0x3c024315
  .word 0x44824800
  .word 0x10000061
  .word 0x00000000
  .word 0x24020027
  .word 0x14620005
  .word 0x00000000
  .word 0x3c0242a2
  .word 0x44824800
  .word 0x1000005a
  .word 0x00000000
  .word 0x2402001e
  .word 0x14620005
  .word 0x00000000
  .word 0x3c0242c8
  .word 0x44824800
  .word 0x10000053
  .word 0x00000000
  .word 0x2402002a
  .word 0x14620005
  .word 0x00000000
  .word 0x3c024298
  .word 0x44824800
  .word 0x1000004c
  .word 0x00000000
  .word 0x24020030
  .word 0x14620005
  .word 0x00000000
  .word 0x3c0242c2
  .word 0x44824800
  .word 0x10000045
  .word 0x00000000
  .word 0x2402000c
  .word 0x14620005
  .word 0x00000000
  .word 0x3c024306
  .word 0x44824800
  .word 0x1000003e
  .word 0x00000000
  .word 0x24020009
  .word 0x14620005
  .word 0x00000000
  .word 0x3c0242f4
  .word 0x44824800
  .word 0x10000037
  .word 0x00000000
  .word 0x14620005
  .word 0x00000000
  .word 0x3c0242f4
  .word 0x44824800
  .word 0x10000031
  .word 0x00000000
  .word 0x24040005
  .word 0x14640010
  .word 0x00000000
  .word 0x3c0242de
  .word 0x44824800
  .word 0x8603000a
  .word 0x24020004
  .word 0x10620006
  .word 0x00000000
  .word 0x10640004
  .word 0x00000000
  .word 0x24020006
  .word 0x14620023
  .word 0x00000000
  .word 0x3c0242ca
  .word 0x44824800
  .word 0x1000001f
  .word 0x00000000
  .word 0x24020008
  .word 0x14620005
  .word 0x00000000
  .word 0x3c024302
  .word 0x44824800
  .word 0x10000018
  .word 0x00000000
  .word 0x24020006
  .word 0x14620005
  .word 0x00000000
  .word 0x3c0242e8
  .word 0x44824800
  .word 0x10000011
  .word 0x00000000
  .word 0x2402000d
  .word 0x14620005
  .word 0x00000000
  .word 0x3c0242ee
  .word 0x44824800
  .word 0x1000000a
  .word 0x00000000
  .word 0x2402001b
  .word 0x14620005
  .word 0x00000000
  .word 0x3c024308
  .word 0x44824800
  .word 0x10000003
  .word 0x00000000
  .word 0x3c0242de
  .word 0x44824800
  .word 0x3c024400
  .word 0x44820800
  .word 0xc600052c
  .word 0x46000802
  .word 0x3c024000
  .word 0x44821000
  .word 0x00000000
  .word 0x46020203
  .word 0x3c024280
  .word 0x44820800
  .word 0xc6000530
  .word 0x46000802
  .word 0x460201c3
  .word 0x3c024380
  .word 0x44820800
  .word 0xc7a00270
  .word 0x46000880
  .word 0x46081181
  .word 0xe7a60170
  .word 0xc7a10274
  .word 0x3c024200
  .word 0x44820000
  .word 0x00000000
  .word 0x46010140
  .word 0x46072801
  .word 0x46004800
  .word 0x44802000
  .word 0x00000000
  .word 0x460020c0
  .word 0xe7a30174
  .word 0x46081000
  .word 0x3c023f80
  .word 0x44821000
  .word 0x00000000
  .word 0x46020041
  .word 0xe7a101b0
  .word 0xe7a301b4
  .word 0xe7a601f0
  .word 0x46072800
  .word 0x46004800
  .word 0x46020001
  .word 0x46002000
  .word 0xe7a001f4
  .word 0xe7a10230
  .word 0xe7a00234
  .word 0xafa00180
  .word 0xafa00184
  .word 0xafa201c0
  .word 0xafa001c4
  .word 0xafa00200
  .word 0xafa20204
  .word 0xafa20240
  .word 0xafa20244
  .word 0x8e020018
  .word 0x24040001
  .word 0x8c450000
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x27a50170
  .word 0x0080302d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e03055c
  .word 0x2463ffff
  .word 0xae03055c
  .word 0x1c60005b
  .word 0x00000000
  .word 0xae000558
  .word 0x8e030560
  .word 0x24630001
  .word 0xae030560
  .word 0x28610006
  .word 0x14200002
  .word 0x00000000
  .word 0xae000560
  .word 0x8e030560
  .word 0x2c610006
  .word 0x1020004f
  .word 0x00000000
  .word 0x3c04007b
  .word 0x248451a0
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x24030003
  .word 0xae03055c
  .word 0x10000044
  .word 0x00000000
  .word 0x24030064
  .word 0xae03055c
  .word 0x10000040
  .word 0x00000000
  .word 0x24030002
  .word 0xae03055c
  .word 0x1000003c
  .word 0x00000000
  .word 0x24030002
  .word 0xae03055c
  .word 0x10000038
  .word 0x00000000
  .word 0x24030002
  .word 0xae03055c
  .word 0x10000034
  .word 0x00000000
  .word 0x24030050
  .word 0xae03055c
  .word 0x10000030
  .word 0x00000000
  .word 0x8e03055c
  .word 0x2463ffff
  .word 0xae03055c
  .word 0x1c60002b
  .word 0x00000000
  .word 0x24030001
  .word 0xae030558
  .word 0x8e030560
  .word 0x24630001
  .word 0xae030560
  .word 0x28610006
  .word 0x14200002
  .word 0x00000000
  .word 0xae000560
  .word 0x8e030560
  .word 0x2c610006
  .word 0x1020001e
  .word 0x00000000
  .word 0x3c04007b
  .word 0x24845180
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x24030003
  .word 0xae03055c
  .word 0x10000013
  .word 0x00000000
  .word 0x24030064
  .word 0xae03055c
  .word 0x1000000f
  .word 0x00000000
  .word 0x24030002
  .word 0xae03055c
  .word 0x1000000b
  .word 0x00000000
  .word 0x24030002
  .word 0xae03055c
  .word 0x10000007
  .word 0x00000000
  .word 0x24030002
  .word 0xae03055c
  .word 0x10000003
  .word 0x00000000
  .word 0x24030050
  .word 0xae03055c
  .word 0x8e03054c
  .word 0x28630003
  .word 0x146000a0
  .word 0x00000000
  .word 0x92040523
  .word 0x240300ff
  .word 0x1483009c
  .word 0x00000000
  .word 0x8e030554
  .word 0x10600099
  .word 0x00000000
  .word 0x0000282d
  .word 0x3c020096
  .word 0xc4410088
  .word 0x1000004d
  .word 0x00000000
  .word 0x0005143c
  .word 0x0002143f
  .word 0x00021180
  .word 0x005d1021
  .word 0x24440170
  .word 0x92020520
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
  .word 0xe4800020
  .word 0x92020521
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
  .word 0xe4800024
  .word 0x92020522
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
  .word 0xe4800028
  .word 0x92020523
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
  .word 0xe480002c
  .word 0xc6000524
  .word 0x46000801
  .word 0xe4800008
  .word 0xe4940018
  .word 0x24a20001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0005143c
  .word 0x0002143f
  .word 0x28420004
  .word 0x1440ffb0
  .word 0x00000000
  .word 0x3c024400
  .word 0x44820800
  .word 0xc600052c
  .word 0x46000802
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010243
  .word 0x3c024280
  .word 0x44824000
  .word 0xc6000530
  .word 0x46004002
  .word 0x460101c3
  .word 0x3c02437f
  .word 0x44820800
  .word 0xc7a00270
  .word 0x46000880
  .word 0x46091181
  .word 0xe7a60170
  .word 0xc7a10274
  .word 0x3c024200
  .word 0x44820000
  .word 0x00000000
  .word 0x46010140
  .word 0x46072801
  .word 0x3c02431b
  .word 0x44822000
  .word 0x00000000
  .word 0x46002000
  .word 0x460040c0
  .word 0xe7a30174
  .word 0x46091000
  .word 0x3c023f80
  .word 0x44821000
  .word 0x00000000
  .word 0x46020041
  .word 0xe7a101b0
  .word 0xe7a301b4
  .word 0xe7a601f0
  .word 0x46072800
  .word 0x46002000
  .word 0x46004000
  .word 0x46020001
  .word 0xe7a001f4
  .word 0xe7a10230
  .word 0xe7a00234
  .word 0xafa00180
  .word 0xafa00184
  .word 0xafa201c0
  .word 0xafa001c4
  .word 0xafa00200
  .word 0xafa20204
  .word 0xafa20240
  .word 0xafa20244
  .word 0x8e02001c
  .word 0x24040001
  .word 0x8c450000
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x27a50170
  .word 0x0080302d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb20050
  .word 0x7bb10040
  .word 0x7bb00030
  .word 0xc7b40020
  .word 0x27bd0280
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_dead_assignments reset
#pragma opt_loop_invariants reset

// FUN_00106730
void func_00106730(s16 index)
{
    s16 originalIndex;
    s32 resourceIndex;
    HChrdspWork* work;

    originalIndex = index;
    printf(D_005D3CB0, originalIndex);
    if (*(void**)((u8*)D_007E2BC8 + originalIndex * 0x670) != NULL)
    {
        func_00133d30(*(void**)((u8*)D_007E2BC8 + originalIndex * 0x670),
                      *(void**)((u8*)D_007E2BA8 + originalIndex * 0x670));
        *(void**)((u8*)D_007E2BC8 + originalIndex * 0x670) = NULL;
        *(void**)((u8*)D_007E2BA8 + originalIndex * 0x670) = NULL;
    }
    else if (*(void**)((u8*)D_007E2BA8 + originalIndex * 0x670) != NULL)
    {
        H_Cdvd_Destroy(*(HCdvd**)((u8*)D_007E2BA8 + originalIndex * 0x670));
        *(void**)((u8*)D_007E2BA8 + originalIndex * 0x670) = NULL;
    }

    resourceIndex = 0;
    work = (HChrdspWork*)((u8*)D_007E2680 + originalIndex * 0x670);
    while (resourceIndex < HCHRDP_LAYER_COUNT)
    {
        void** resource;

        resource = (void**)((u8*)work + 0x14 + resourceIndex * 4);
        if (*resource != NULL)
        {
            func_004d0f00(*resource);
            *resource = NULL;
        }
        resourceIndex++;
    }
    work->state = HCHRDP_STATE_IDLE;
}

// FUN_00106860
void func_00106860(s16 index, s16 characterId, s16 layer, s16 variant)
{
    char path[256];
    s16 originalIndex;
    s32 signedIndex;
    s32 entryIndex;
    s32 offset;

    originalIndex = index;
    signedIndex = originalIndex;
    printf(D_005D3CD0, signedIndex);

    offset = signedIndex * 0x670;
    *(s32*)((u8*)D_007E2BCC + offset) = 0;
    *(s16*)((u8*)D_007E2684 + offset) = characterId;
    *(s16*)((u8*)D_007E2688 + offset) = layer;
    *(s16*)((u8*)D_007E268A + offset) = variant;
    func_00106730(originalIndex);

    if (layer < HCHRDP_LAYER_COUNT)
    {
        if (clndIsDateInRange(6, 1, 9, 30) != 0)
        {
            if (datGetScenarioMode() == SCENARIO_MODE_JOURNEY)
            {
                sprintf(path, D_005D3CF0, characterId, layer, variant);
            }
            else if (characterId == 9)
            {
                sprintf(path, D_005D3D10, layer, variant);
            }
            else
            {
                sprintf(path, D_005D3CF0, characterId, layer, variant);
            }
        }
        else if (datGetScenarioMode() == SCENARIO_MODE_JOURNEY)
        {
            sprintf(path, D_005D3D30, characterId, layer, variant);
        }
        else if (characterId == 9)
        {
            sprintf(path, D_005D3D50, layer, variant);
        }
        else
        {
            sprintf(path, D_005D3D30, characterId, layer, variant);
        }
    }
    else if (datGetScenarioMode() == SCENARIO_MODE_JOURNEY)
    {
        sprintf(path, D_005D3D70, characterId, layer, variant);
    }
    else if (characterId == 9)
    {
        sprintf(path, D_005D3D90, layer, variant);
    }
    else
    {
        sprintf(path, D_005D3D70, characterId, layer, variant);
    }

    for (entryIndex = 0; entryIndex < 0x1388; entryIndex++)
    {
        if (D_005D3350[entryIndex][0] == '\0')
        {
            sprintf(path, D_005D3DB0);
            break;
        }

        if (strcmp(D_005D3350[entryIndex], path) == 0)
        {
            if (layer < HCHRDP_LAYER_COUNT)
            {
                if (clndIsDateInRange(6, 1, 9, 30) != 0)
                {
                    if (datGetScenarioMode() == SCENARIO_MODE_JOURNEY)
                    {
                        sprintf(path, D_005D3DD0, characterId, layer, variant);
                    }
                    else if (characterId == 9)
                    {
                        sprintf(path, D_005D3DF0, layer, variant);
                    }
                    else
                    {
                        sprintf(path, D_005D3DD0, characterId, layer, variant);
                    }
                }
                else if (datGetScenarioMode() == SCENARIO_MODE_JOURNEY)
                {
                    sprintf(path, D_005D3E10, characterId, layer, variant);
                }
                else if (characterId == 9)
                {
                    sprintf(path, D_005D3E30, layer, variant);
                }
                else
                {
                    sprintf(path, D_005D3E10, characterId, layer, variant);
                }
            }
            else if (datGetScenarioMode() == SCENARIO_MODE_JOURNEY)
            {
                sprintf(path, D_005D3E50, characterId, layer, variant);
            }
            else if (characterId == 9)
            {
                sprintf(path, D_005D3E70, layer, variant);
            }
            else
            {
                sprintf(path, D_005D3E50, characterId, layer, variant);
            }
            break;
        }
    }

    strcpy((char*)((u8*)D_007E2680 + originalIndex * 0x670 + 0x568), path);
    *(s16*)((u8*)D_007E2680 + originalIndex * 0x670) = HCHRDP_STATE_LOAD_ARCHIVE;
    *(void**)((u8*)D_007E2BA8 + originalIndex * 0x670) =
        H_Cdvd_Request((char*)((u8*)D_007E2680 + originalIndex * 0x670 + 0x568),
                       HCDVD_FILEARCHIVE);
    *(u8*)((u8*)D_007E2BA0 + originalIndex * 0x670) = 255;
    *(u8*)((u8*)D_007E2BA1 + originalIndex * 0x670) = 255;
    *(u8*)((u8*)D_007E2BA2 + originalIndex * 0x670) = 255;
    *(u8*)((u8*)D_007E2BA3 + originalIndex * 0x670) = 255;
    *(f32*)((u8*)D_007E2BAC + originalIndex * 0x670) = 1.0f;
    *(f32*)((u8*)D_007E2BB0 + originalIndex * 0x670) = 1.0f;
    *(u32*)((u8*)D_007E2BE4 + originalIndex * 0x670) = true;
}





#pragma alias D_005CEAE0_sda D_005CEAE0


#pragma alias gWorkPads_abs gWorkPads
#pragma alias gPads_abs gPads
#pragma alias sAddrPort1_abs sAddrPort1
#pragma alias sAddrPort2_abs sAddrPort2



/* Removing this loses FUN_00103000 (MATCH nd0 -> MISMATCH nd48) - measured W161. */











// FUN_00106e90
void func_00106e90(s16 index, u8 alpha)
{
    D_007E2680[index].color.a = alpha;
}

/* W389 residual: callee-saved register-coloring cycle (retail keeps intrState in $s1/copySize in $s0; candidate swaps them). Baseline nd=6/object=228/window=240; propagation off worsened nd=13, the other singles and all pairs were neutral; declaration and type swaps were neutral. */
// FUN_00106ec0
void func_00106ec0(s16 index, void* request)
{
    D_007E2680[index].asyncRequest = request;
    if (request != NULL)
    {
        D_007E2680[index].alphaPhase = 1;
        D_007E2680[index].alphaIndex = 0;
        D_007E2680[index].alphaTimer = 2;
    }
}
// FUN_00106f30
void func_00106f30(s16 index, s32 resourceIndex)
{
    D_007E2680[index].resourceIndex = resourceIndex;
}

// FUN_00106f60
void func_00106f60(s16 index, s16 value)
{
    if (D_007E2680[index].state == HCHRDP_STATE_UNAVAILABLE)
    {
        D_007E2680[index].state = HCHRDP_STATE_DRAW;
    }
    D_007E2680[index].reserved02 = value;
}

// Previous body omitted retail's debug-name checks (two kwlnTaskGetUpdating
// + strcmp guards bracketing the allocation) and the interrupt-disable
// pair around H_Pad_RwAllocateRaw. That callee was also missing its real
// second parameter (hint) - added as an unused param (its body never
// reads it) since the caller passes it in $a1 per retail. obj 88B->312B/
// 320B; residual is a small OR-condition register-choice floor.
// FUN_00106fb0
void func_00106fb0(s16 index, RwV2d position)
{
    D_007E2680[index].position = position;
}

// FUN_00106ff0
u32 func_00106ff0(s16 index)
{
    return D_007E2680[index].state == HCHRDP_STATE_UNAVAILABLE;
}
