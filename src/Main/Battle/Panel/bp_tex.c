#include "Main/Battle/Panel/bp_tex.h"
#include "Kosaka/k_assert.h"
#include "rw/rwplcore.h"
#include "rw/rwcore.h"

static u32* sBcmPanel;
extern u8 D_00960090_abs[];
extern u8 D_0096009C_abs[];
extern void (*D_0096009C)(u32*, u32, u32, u32, u32);
#pragma alias D_0096009C_u32 D_0096009C
extern u32 D_0096009C_u32[];
u32 FUN_0021c3f0();
u32 FUN_0021cca0();
void FUN_0021d3b0();
u32 FUN_0021cce0();
void FUN_00226320();
void FUN_00222d60();
void FUN_0021e380();
void FUN_00222b90();
void FUN_002230e0();
u32 FUN_0021c450();
void FUN_0021d950(void* destination, const u8* color);
void FUN_0021d8e0(void* destination, const f32* rect);
void FUN_00224860();
void FUN_00225670();
void FUN_00227d10();
void FUN_00238980();
void bpIFont00238bf0(void* glyphs, s32 capacity, const char* text, s32 font, const float* origin);
void FUN_00238dc0(void* destination, s32 count, u32 value, s32 mode, const f32* layout);
extern int FUN_003b1360(void *param_1, u32 param_2, u32 param_3);
extern u32 FUN_00239140(s32);
extern void FUN_003b0d70(u32 resource, s32 x, s32 y);
extern void FUN_003b0e20(u32 resource, u32 color);
extern void FUN_0021dd60(void* destination, const u8* colors);
extern f32 fGpffff83e8;
void FUN_0022C210();
static u8* bcm_panel_record(u32 index);
#define BCM_29_STATE(...) (*setStatePtr)(__VA_ARGS__)
#define BCM_29_QUAD(...) (*setQuadPtr)(__VA_ARGS__)
#define BCM_29_STATE2(...) (*setStatePtr2)(__VA_ARGS__)
#define BCM_2AE_STATE(...) (*pRender)(__VA_ARGS__)
#define BCM_2AE_QUAD(...) (*pQuad)(__VA_ARGS__)


typedef struct RtQuat RtQuat;

extern u32* DAT_007ce354;
#define BP_TEX_GLOBAL DAT_007ce354
#define BP_TEX_U32(base, offset) (*(u32*)((u8*)(base) + (offset)))
#define BP_TEX_S32(base, offset) (*(s32*)((u8*)(base) + (offset)))
#define BP_TEX_F32(base, offset) (*(f32*)((u8*)(base) + (offset)))
#define BP_TEX_PTR(base, offset) (*(u32**)((u8*)(base) + (offset)))
#define BP_TEX_NODE_FLAGS(node) ((node)[0])
#define BP_TEX_NODE_NEXT(node) ((u32*)(node)[0x3f1])
#define BP_TEX_NODE_PREV(node) ((u32*)(node)[0x3f0])
#define BP_TEX_NODE_OWNER(node) ((u32*)(node)[0x3f2])

extern void* func_00198590(void);
extern RwMatrix* func_004cb2f0(void* frame);
extern f32 func_004c6ac0(const RwV3d* value);
extern void func_0021a920(u32 value, u32 arg);
extern void func_0021ab80(u16 value);
extern void func_0020b250(void* value);
extern void func_0020cc80(void* value, const void* color);
extern void func_0020ac90(void* value);
extern void func_0024dc90(void* value);
extern void func_0024f090(void* value);
extern void func_0024f2c0(void* state, f32 value);
extern void func_0024f960(void* state, void* value);
extern void func_0024f9f0(void* state, void* value);
extern void func_0024faf0(void* state, void* value);
extern void func_0024fba0(void* state, void* value);
extern void func_0024fc40(void* state, void* value);
extern void func_0024fda0(void* value);
extern void func_0024fe00(void* value);
extern void func_00250ef0(f32 value, void* state);
extern void func_0024da60(void* state);
extern void func_0024daf0(void* state);
extern u32 func_00250b90(void* state);
extern void func_00251030(void* state);
extern f32 func_0020c660(u32 index, s32 count);
extern void func_00250cf0(u32* work, void* target, f32 startAngle, f32 endAngle, s32 frames);
extern void func_002505b0(void* state, void* value, s32 duration, const f32* offsets);
extern void func_005225a8(u32 id, ...);
extern void func_004bdde0(s32 mode, void* value, void* pos, s32 flags);
extern u32 func_00488f30(void);
extern s32 func_0051e0e0(s32 value);
extern f32 func_0052e878(f32 value);
extern f32 func_0052e6d8(f32 value);
extern f32 func_0020c500(void* object, f32 value);
extern void func_0020c400(void* object, const f32* position, f32 scale, void* output);
extern void func_00259190(void* node, void* values, s32* count);
extern void func_00258f80(void* node);
extern void func_00258630(void* node);
extern void func_00257d00(void* out, u32 index, void* source, s32 count);
extern void func_00257d90(void* out, void* source);
extern void func_00256f20(void* node, void* values, s32* count);
extern void func_00256fa0(void* node, void* values, s32* count);
extern void func_002564c0(void* node);
extern void func_00250a30(void* state, void* value, u32 duration);
extern void func_002508c0(void* state, void* value, s32 duration);
extern void func_00255b20(void);
extern void func_0025b300(void);
extern void func_0025b3b0(void);
extern void FUN_0010a4e0(u32, u32, u32, u32);
extern void func_0019d3f0(const char* file, s32 line);
extern void func_004c69f0(void* output, const void* input);
extern void func_0034ff90(void* resource, const void* color);
extern void func_0034ff70(void* resource, f32 scalar);
extern void func_0034fdf0(void* resource, const void* position);
extern void func_0034fe30(void* resource, u32 a, u32 b, u32 c);
extern void func_0034fd30(void* resource);
extern void func_0034fd70(void* resource, u32 layer);
extern f32 DAT_007cad60;
extern f32 DAT_007cc470;
extern f32 DAT_007caf38;
extern u64 D_0068EA30;
#pragma alias D_0068EA30_abs D_0068EA30
extern volatile u8 D_0068EA30_abs[];
extern f32 D_0068EA38;
#pragma alias D_0068EA38_abs D_0068EA38
extern volatile u8 D_0068EA38_abs[];
extern u8 D_0068EA00;
#pragma alias D_0068EA00_abs D_0068EA00
extern volatile u8 D_0068EA00_abs[];
extern u64 D_0068EA90;
#pragma alias D_0068EA90_abs D_0068EA90
extern volatile u8 D_0068EA90_abs[];
extern f32 D_0068EA98;
#pragma alias D_0068EA98_abs D_0068EA98
extern volatile u8 D_0068EA98_abs[];

extern u32 jtbl_00960178[];
extern void (*jtbl_0096017C)(void* memory);
#pragma alias jtbl_0096017C_abs jtbl_0096017C
extern u32 jtbl_0096017C_abs[];
extern void func_004cde90(void* resource);
extern RwCamera* kwlnGetMainCamera(void);
extern f32 func_0052ea18(f32 x, f32 y);
extern f32 D_00960088;
#pragma alias D_00960088_abs D_00960088
extern volatile /* Removing this file's qualifier batch loses 0 MATCH(es) and worsens 1 other function(s) - measured W170. */ f32 D_00960088_abs[];
extern f32 sqrtf(f32 value);
extern RwRaster* func_004ce0f0(u32 width, u32 height, u32 depth, u32 flags);
extern void* func_004cdf30(RwRaster* raster, u32 palette);
extern void* func_004ce200(RwRaster* raster, void* mipData, u32 level);
extern void func_004cde40(RwRaster* raster);
extern void func_004cde00(RwRaster* raster);
extern void* memcpy(void* destination, const void* source, u32 size);
typedef struct BpTexFrameData
{
    u32 texture;
    u32 id;
    u32 rasterIndex;
    s32 width;
    s32 height;
    s32 x;
    s32 y;
    u8 color[16];
} BpTexFrameData;

typedef struct BpTexTexture
{
    u32 unused;
    BpTexFrameData* frames;
    u32* rasters;
    u32 rasterCount;
    u32 frameCount;
} BpTexTexture;




static inline u32 bpTexByteToFloatBits(u8 value)
{
    f32 converted;

    converted = (f32)value;
    return *(u32*)&converted;
}

static void bpTexWriteColor(void* destination, const u8* color)
{
    BP_TEX_U32(destination, 0x20) = bpTexByteToFloatBits(color[0]);
    BP_TEX_U32(destination, 0x24) = bpTexByteToFloatBits(color[1]);
    BP_TEX_U32(destination, 0x28) = bpTexByteToFloatBits(color[2]);
    BP_TEX_U32(destination, 0x2c) = bpTexByteToFloatBits(color[3]);
}

static void bpTexWriteVertex(void* destination,
                             f32 u,
                             f32 v,
                             const u8* color,
                             f32 depth,
                             f32 reciprocalDepth)
{
    BP_TEX_F32(destination, 0x10) = u;
    BP_TEX_F32(destination, 0x14) = v;
    BP_TEX_F32(destination, 0x18) = reciprocalDepth;
    BP_TEX_F32(destination, 0x08) = depth;
    bpTexWriteColor(destination, color);
}
#define BP_TEX_WRITE_COLOR_INLINE(destination, baseOffset, color) do { \
    f32 converted; \
    converted = (f32)(color)[0]; \
    BP_TEX_F32(destination, (baseOffset) + 0x20) = converted; \
    converted = (f32)(color)[1]; \
    BP_TEX_F32(destination, (baseOffset) + 0x24) = converted; \
    converted = (f32)(color)[2]; \
    BP_TEX_F32(destination, (baseOffset) + 0x28) = converted; \
    converted = (f32)(color)[3]; \
    BP_TEX_F32(destination, (baseOffset) + 0x2c) = converted; \
} while (0)
#define BP_TEX_WRITE_VERTEX_INLINE(destination, baseOffset, u, v, color, depth, reciprocalDepth) do { \
    BP_TEX_F32(destination, (baseOffset) + 0x10) = (u); \
    BP_TEX_F32(destination, (baseOffset) + 0x14) = (v); \
    BP_TEX_F32(destination, (baseOffset) + 0x18) = (reciprocalDepth); \
    BP_TEX_F32(destination, (baseOffset) + 0x08) = (depth); \
    BP_TEX_WRITE_COLOR_INLINE(destination, baseOffset, color); \
} while (0)
/* W357 measured bpTex0021c9f0: optimization_level 3 nd121/556B -> nd0/556B. */

extern u8* DAT_007ce308;
extern u8* DAT_007ce408;
#define BP_PANEL_GLOBAL DAT_007ce308
extern void* func_0021c3f0(s32 texture);
extern void* func_0021cca0(void* texture, s32 frame);
extern u32 func_0021cce0(void* frame);
extern void func_0021d3b0(void* destination, void* frame);
extern void func_0021d8e0(void* destination, const f32* rect);
extern void func_0021d890(void* destination, const f32* vertices);
extern void func_0021d950(void* destination, const u8* color);
extern u32 func_002d1a70(void);
extern void bcmPanel0022b580(void);
extern void func_0022b630(void);
extern void func_002265d0(void);
extern void func_00227f30(void);
extern void func_0022c2d0(void);
extern void func_00228e40(void);
extern void func_0022a2b0(void);
extern void func_00224940(void);
extern void func_00223290(void);
extern void func_002257f0(void);
extern void func_0022bcf0(void);
extern void func_00227800(void);
extern void func_0022c5a0(void);
extern void func_00229b40(void);
extern void func_0022ae80(void);
extern void func_00225040(void);
extern void func_00224150(void);
extern void func_002289b0(void);
extern void func_00226040(void);
extern void (*D_00960090)(u32, u32);
extern u8 D_00960090_abs[];
extern void (*D_0096009C)(u32*, u32, u32, u32, u32);
extern u8 D_0096009C_abs[];

static void bpTexSetUvAxis(f32 start,
                            f32 end,
                            s32 size,
                            u32 flip,
                            u32 mode,
                            f32* first,
                            f32* second)
{
    f32 extent;

    extent = (f32)size;
    if (mode == 2)
    {
        if ((flip & 1) != 0)
        {
            *first = (start + 1.0f) / extent;
            *second = start / extent;
        }
        else
        {
            *first = (end - 1.0f) / extent;
            *second = end / extent;
        }
    }
    else if (mode == 1)
    {
        if ((flip & 1) != 0)
        {
            *first = end / extent;
            *second = (end - 1.0f) / extent;
        }
        else
        {
            *first = start / extent;
            *second = (start + 1.0f) / extent;
        }
    }
    else if ((flip & 1) != 0)
    {
        *first = end / extent;
        *second = start / extent;
    }
    else
    {
        *first = start / extent;
        *second = end / extent;
    }
}
static u32* bpTexWork(void)
{
    u32* work;

    work = BP_TEX_GLOBAL;
    K_ASSERT(work != NULL, 0xbc);
    return work;
}
static inline u32* bpTexNodeNext(u32* node)
{
    return (u32*)node[0x3f1];
}
static u32* bpTexFindNode(u32 ordinal)
{
    u32* node;

    for (node = BP_TEX_PTR(bpTexWork(), 0x1265c);
         node != NULL;
         node = bpTexNodeNext(node))
    {
        if ((node[0] & 2) == 0 && node[4] == ordinal)
        {
            return node;
        }
    }

    K_ASSERT(false, 0x47a);
    return NULL;
}
static s32 bpTexNodeCount(void)
{
    s32 count;
    u32* node;

    count = 0;
    for (node = BP_TEX_PTR(bpTexWork(), 0x1265c);
         node != NULL;
         node = bpTexNodeNext(node))
    {
        if ((node[0] & 2) == 0)
        {
            count++;
        }
    }
    return count;
}
static inline void bpTexCollect(void* node, u32** values, s32* count)
{
    func_00256fa0(node, values, count);
}
static u32* bpTexActionRecord(void)
{
    u32* work;
    u32 index;

    work = bpTexWork();
    index = BP_TEX_U32(work, 0x127a8);
    return (u32*)((u8*)work + 0x12688 + index * 0x24);
}
static void bpTexQueueNodeAction(u32 type, u32* node, u32 duration)
{
    u32* work;
    u32* action;

    work = bpTexWork();
    action = bpTexActionRecord();
    action[0] = type;
    action[1] = duration;
    action[2] = (u32)node;
    action[3] = 0;
    BP_TEX_U32(work, 0x127a8)++;
}
static inline u8* bcm_panel_bytes(void)
{
    return (u8*)sBcmPanel;
}
static u32 bcm_panel_read(u32 offset)
{
    return *(u32*)(bcm_panel_bytes() + offset);
}
static void bcm_panel_write(u32 offset, u32 value)
{
    *(u32*)(bcm_panel_bytes() + offset) = value;
}
static u8* bcm_panel_record(u32 index)
{
    return bcm_panel_bytes() + 0x4660 + index * 0x420;
}
static u8* bcm_panel_overlay(u32 index)
{
    return bcm_panel_bytes() + 0x6080 + index * 0x110;
}
static inline void bcm_panel_set_resource(u8* dst, u32 resource, u32 id)
{
    u32 table;
    table = FUN_0021c3f0(resource);
    FUN_0021d3b0(dst, FUN_0021cca0(table, id));
}
static void bcm_panel_set_colour(u8* dst, u32 colour)
{
    *(u32*)(dst + 0x18c4) = colour;
    *(u32*)(dst + 0x18c8) = (colour ^ 0xffffffffu) & 0x00ffffffu;
    *(u32*)(dst + 0x18cc) = ((colour ^ 0xffffffffu) & 0x00ffffffu) | 0xff000000u;
}
static void bcm_panel_layout_record(u8* record, u32 row, u32 alpha)
{
    /* The four command quads are laid out on a 48-pixel baseline. */
    *(u32*)(record + 0x18d0) = 0x424c0000u + row * 48u;
    *(u32*)(record + 0x18d4) = 0x41980000u;
    *(u32*)(record + 0x18d8) = 0x432b0000u + row * 48u;
    *(u32*)(record + 0x18dc) = 0x41980000u;
    bcm_panel_set_colour(record, (alpha & 0xffu) | 0xffffff00u);
}
static void bcm_panel_refresh_records(void)
{
    u32 i;
    u32 count = bcm_panel_read(0x6070);
    for (i = 0; i < count; ++i) {
        u8* record = bcm_panel_record(i);
        u32 state = *(u32*)record;
        if (state == 0 || state == 2) {
            bcm_panel_set_resource(record + 0x10, 0, 0x2f);
        } else if (state == 1) {
            bcm_panel_set_resource(record + 0x10, 0, 0x29);
            bcm_panel_set_resource(record + 0x110, 0, 0x29);
            bcm_panel_set_resource(record + 0x210, 0, 0x2a);
            bcm_panel_set_resource(record + 0x310, 0, 0x2a);
        }
    }
}
static inline s32 bpPanelFrameWidth(void* frame)
{
    return *(s32*)((u8*)frame + 0x0c);
}
static inline s32 bpPanelFrameHeight(void* frame)
{
    return *(s32*)((u8*)frame + 0x10);
}
static inline int bpPanelInTransition(u32 value)
{
    return value >= 1 && value <= 4;
}
static inline u8 bpPanelColor(f32 value)
{
    return (u8)value;
}
static inline void bpPanelSetRect(void* destination, f32 x, f32 y, void* frame)
{
    f32 rect[4];

    rect[0] = x;
    rect[1] = y;
    rect[2] = (f32)bpPanelFrameWidth(frame);
    rect[3] = (f32)bpPanelFrameHeight(frame);
    func_0021d8e0(destination, rect);
}
static inline void bpPanelSetRectBuffered(void* destination, f32* rect,
                                          f32 x, f32 y, void* frame)
{
    rect[0] = x;
    rect[1] = y;
    rect[2] = (f32)bpPanelFrameWidth(frame);
    rect[3] = (f32)bpPanelFrameHeight(frame);
    func_0021d8e0(destination, rect);
}
static inline void bpPanelSetColor(void* destination, u8 red, u8 green, u8 blue, f32 alpha)
{
    u8 color[4];

    color[0] = red;
    color[1] = green;
    color[2] = blue;
    color[3] = bpPanelColor(alpha);
    func_0021d950(destination, color);
}
static inline void bpPanelSetColorUnsigned(void* destination, u8* color,
                                           u8 red, u8 green, u8 blue, f32 alpha)
{

    color[0] = red;
    color[1] = green;
    color[2] = blue;
    color[3] = (u8)alpha;
    func_0021d950(destination, color);
}
static inline void bpPanelGetCenter(u8* work, u32 mode, u32 sub, f32 timer, f32* x, f32* y)
{
    if (sub != 0 && !bpPanelInTransition(sub))
    {
        K_ASSERT(false, 0x185);
        *x = 103.0f;
        *y = 361.0f;
    }
    else if (mode == 3)
    {
        if (sub == 0)
        {
            *x = 61.5f + 41.5f * timer / 3.0f;
            *y = 388.5f - 27.5f * timer / 3.0f;
        }
        else
        {
            *x = 103.0f - 41.5f * timer / 3.0f;
            *y = 361.0f + 27.5f * timer / 3.0f;
        }
    }
    else if (sub == 0)
    {
        *x = 103.0f;
        *y = 361.0f;
    }
    else
    {
        *x = 61.5f;
        *y = 388.5f;
    }
    (void)work;
}
static inline void bpPanelGetCommandPosition(u32 mode, u32 sub, f32 timer, f32* x, f32* y)
{
    if (mode == 3)
    {
        if (sub == 0)
        {
            *x = 82.0f - 68.0f * timer / 3.0f;
            *y = 369.0f - 23.0f * timer / 3.0f;
        }
        else if (bpPanelInTransition(sub))
        {
            *x = 14.0f + 68.0f * timer / 3.0f;
            *y = 346.0f + 23.0f * timer / 3.0f;
        }
        else
        {
            *x = 14.0f;
            *y = 346.0f;
        }
    }
    else if (sub == 0)
    {
        *x = 14.0f;
        *y = 346.0f;
    }
    else
    {
        *x = 82.0f;
        *y = 369.0f;
    }
}
static void bpPanelSetCenteredRect(void* destination, f32 x, f32 y, void* frame)
{
    f32 halfWidth;
    f32 halfHeight;

    halfWidth = (f32)(bpPanelFrameWidth(frame) / 2);
    halfHeight = (f32)(bpPanelFrameHeight(frame) / 2);
    bpPanelSetRect(destination, x - halfWidth, y - halfHeight, frame);
}
static inline void bpPanelSetRotatedQuad(void* destination,
                                  f32 centerX,
                                  f32 centerY,
                                  f32 left,
                                  f32 top,
                                  void* frame,
                                  f32 angle)
{
    f32 vertices[8];
    f32 width;
    f32 height;
    f32 sine;
    f32 cosine;
    f32 sourceX[4];
    f32 sourceY[4];
    s32 i;

    width = (f32)bpPanelFrameWidth(frame);
    height = (f32)bpPanelFrameHeight(frame);
    sourceX[0] = left;
    sourceY[0] = top;
    sourceX[1] = left + width;
    sourceY[1] = top;
    sourceX[2] = left + width;
    sourceY[2] = top + height;
    sourceX[3] = left;
    sourceY[3] = top + height;
    for (i = 0; i < 4; i += 2)
    {
        sine = func_0052e878(angle);
        cosine = func_0052e6d8(angle);
        vertices[i * 2] = centerX + (sourceX[i] - centerX) * cosine -
                          (sourceY[i] - centerY) * sine;
        vertices[i * 2 + 1] = centerY + (sourceX[i] - centerX) * sine +
                              (sourceY[i] - centerY) * cosine;
        sine = func_0052e878(angle);
        cosine = func_0052e6d8(angle);
        vertices[(i + 1) * 2] = centerX + (sourceX[i + 1] - centerX) * cosine -
                                (sourceY[i + 1] - centerY) * sine;
        vertices[(i + 1) * 2 + 1] =
            centerY + (sourceX[i + 1] - centerX) * sine +
            (sourceY[i + 1] - centerY) * cosine;
    }
    func_0021d890(destination, vertices);
}
static inline void bpPanelSetRotatedQuadBuffered(void* destination,
                                                  f32* vertices,
                                                  f32* sourceX,
                                                  f32* sourceY,
                                                  f32 centerX,
                                                  f32 centerY,
                                                  f32 left,
                                                  f32 top,
                                                  void* frame,
                                                  f32 angle)
{
    f32 width;
    f32 height;
    f32 sine;
    f32 cosine;
    s32 i;

    width = (f32)bpPanelFrameWidth(frame);
    height = (f32)bpPanelFrameHeight(frame);
    sourceX[0] = left;
    sourceY[0] = top;
    sourceX[1] = left + width;
    sourceY[1] = top;
    sourceX[2] = left + width;
    sourceY[2] = top + height;
    sourceX[3] = left;
    sourceY[3] = top + height;
    for (i = 0; i < 4; i += 2)
    {
        sine = func_0052e878(angle);
        cosine = func_0052e6d8(angle);
        vertices[i * 2] = centerX + (sourceX[i] - centerX) * cosine -
                          (sourceY[i] - centerY) * sine;
        vertices[i * 2 + 1] = centerY + (sourceX[i] - centerX) * sine +
                              (sourceY[i] - centerY) * cosine;
        sine = func_0052e878(angle);
        cosine = func_0052e6d8(angle);
        vertices[(i + 1) * 2] = centerX + (sourceX[i + 1] - centerX) * cosine -
                                (sourceY[i + 1] - centerY) * sine;
        vertices[(i + 1) * 2 + 1] =
            centerY + (sourceX[i + 1] - centerX) * sine +
            (sourceY[i + 1] - centerY) * cosine;
    }
    func_0021d890(destination, vertices);
}
static inline void bpPanelBindAndDraw(u8* work, u32 offset, void* frame)
{
    D_00960090(1, func_0021cce0(frame));
    RpSkyRenderStateSet(3, (void*)0x717fb);
    RpSkyRenderStateSet(2, (void*)0x44);
    D_0096009C((u32*)(work + offset), 4, 0, 1, 2);
    D_0096009C((u32*)(work + offset), 4, 0, 2, 3);
}
static void bpPanelDrawBridgeQuad(u8* work, u32 offset, void* texture, s32 frameId)
{
    void* frame;

    frame = func_0021cca0(texture, frameId);
    bpPanelBindAndDraw(work, offset, frame);
}

#pragma optimization_level 3
#pragma push
#pragma schedule off
/*
 * Retail orders the raster/frame pointer arithmetic differently from MWCCPS2.
 * The reconstructed allocation, raster loop, frame fields, and color loop are complete.
 */
// FUN_0021c9f0
void* bpTex0021c9f0(void* sprMemory)
{
    u8* source;
    u8* texture;
    u8* frameBase;
    u8* rasterTable;
    u8* frameTable;
    s32 i;
    u32 allocationSize;

    source = (u8*)sprMemory;
    allocationSize = 0;
    allocationSize += 0x14;
    allocationSize +=
        (u32)*(u16*)(source + 0x16) * sizeof(BpTexFrameData);
    allocationSize += (u32)*(u16*)(source + 0x14) * 4;
    texture = (u8*)(*(void* (**)(u32, u32))jtbl_00960178)(
        allocationSize, 0x40000);
    frameBase = texture + 0x14;
    BP_TEX_U32(texture, 4) = (u32)frameBase;
    BP_TEX_U32(texture, 8) =
        (u32)(frameBase +
              (u32)*(u16*)(source + 0x16) * sizeof(BpTexFrameData));
    BP_TEX_U32(texture, 0x10) = *(u16*)(source + 0x16);
    BP_TEX_U32(texture, 0x0c) = *(u16*)(source + 0x14);

    rasterTable = source + *(u32*)(source + 0x18);
    for (i = 0; i < *(u16*)(source + 0x14); i++)
    {
        u8* entry;
        void* raster;

        entry = rasterTable + i * 8;
        raster = bpTexCreateTmxRaster(source + *(u32*)(entry + 4));
        ((BpTexTexture*)texture)->rasters[i] = (u32)raster;
    }

    frameTable = source + *(u32*)(source + 0x1c);
    for (i = 0; i < *(u16*)(source + 0x16); i++)
    {
        u8* entry;
        BpTexFrameData* frame;
        u8* frameSource;
        u32 color;
        s32 j;

        entry = frameTable + i * 8;
        frameSource = source + *(u32*)(entry + 4);
        frame = (BpTexFrameData*)(*(u32*)(texture + 4)) + i;
        frame->texture = (u32)texture;
        frame->rasterIndex = *(u32*)(frameSource + 0x14);
        frame->id = *(u32*)(frameSource + 0x18);
        frame->width = *(s32*)(frameSource + 0x5c) -
                       *(s32*)(frameSource + 0x54);
        frame->height = *(s32*)(frameSource + 0x60) -
                        *(s32*)(frameSource + 0x58);
        frame->x = *(s32*)(frameSource + 0x54);
        frame->y = *(s32*)(frameSource + 0x58);
        j = 0;
        goto color_check;
color_body:
        color = *(u32*)(frameSource + 0x64 + j * 4);
        frame->color[j * 4 + 0] = (u8)(((color >> 24) * 0xff) >> 7);
        frame->color[j * 4 + 1] =
            (u8)((((color >> 16) & 0xff) * 0xff) >> 7);
        frame->color[j * 4 + 2] =
            (u8)((((color >> 8) & 0xff) * 0xff) >> 7);
        frame->color[j * 4 + 3] =
            (u8)(((color & 0xff) * 0xff) >> 7);
        j++;
color_check:
        if (j < 4)
            goto color_body;
    }

    return texture;
}
#pragma pop
#pragma optimization_level 2
#pragma opt_common_subs on


// FUN_0021cc20
void func_0021cc20(void* texture)
{
    s32 i;

    for (i = 0; i < BP_TEX_S32(texture, 0x0c); i++)
    {
        func_004cde90((void*)BP_TEX_PTR(texture, 8)[i]);
    }
    (*(void (**)(void*))jtbl_0096017C_abs)(texture);
}
// FUN_0021cca0
void* func_0021cca0(void* texture, s32 index)
{
    if (texture == NULL)
    {
        return NULL;
    }
    return (u8*)BP_TEX_PTR(texture, 4) + index * (s32)sizeof(BpTexFrameData);
}

// FUN_0021cce0
u32 func_0021cce0(void* frameData)
{
    u8* frame;
    u8* texture;
    u32* rasterList;

    frame = (u8*)frameData;
    texture = (u8*)(uintptr_t)BP_TEX_U32(frame, 0);
    rasterList = BP_TEX_PTR(texture, 8);
    return rasterList[BP_TEX_U32(frame, 8)];
}

// FUN_0021cd00
void func_0021cd00(void* frameData, f32* uv)
{
    BpTexFrameData* frame;
    u8* texture;
    u32* rasterList;
    u8* raster;

    frame = (BpTexFrameData*)frameData;
    texture = (u8*)(uintptr_t)frame->texture;
    rasterList = BP_TEX_PTR(texture, 8);
    raster = (u8*)(uintptr_t)rasterList[frame->rasterIndex];
    {
        f32 xRange[2] = {0};

        xRange[0] = (f32)frame->x;
        xRange[1] = (f32)(frame->x + frame->width);
        {
            f32 yRange[2] = {0};
            s32 rasterWidth;
            s32 rasterHeight;

            yRange[0] = (f32)frame->y;
            yRange[1] = (f32)(frame->y + frame->height);
            rasterWidth = *(s32*)(raster + 0x0c);
            rasterHeight = *(s32*)(raster + 0x10);

            if ((~frame->id & 1) != 0)
            {
                uv[0] = xRange[0] / (f32)rasterWidth;
                uv[2] = xRange[1] / (f32)rasterWidth;
            }
            else
            {
                uv[0] = xRange[1] / (f32)rasterWidth;
                uv[2] = xRange[0] / (f32)rasterWidth;
            }

            if ((~frame->id & 2) != 0)
            {
                uv[1] = yRange[0] / (f32)rasterHeight;
                uv[3] = yRange[1] / (f32)rasterHeight;
            }
            else
            {
                uv[1] = yRange[1] / (f32)rasterHeight;
                uv[3] = yRange[0] / (f32)rasterHeight;
            }
        }
    }
}


// FUN_0021cec0
void func_0021cec0(void* frameData, f32* uv, u32 mode)
{
    BpTexFrameData* frame;
    u8* texture;
    u32* rasterList;
    u8* raster;

    frame = (BpTexFrameData*)frameData;
    texture = (u8*)(uintptr_t)frame->texture;
    rasterList = BP_TEX_PTR(texture, 8);
    raster = (u8*)(uintptr_t)rasterList[frame->rasterIndex];
    {
        f32 xRange[2] = {0};

        xRange[0] = (f32)frame->x;
        xRange[1] = (f32)(frame->x + frame->width);
        {
            f32 yRange[2] = {0};
            s32 rasterWidth;
            s32 rasterHeight;
            u32 xMode;
            u32 yMode;

            yRange[0] = (f32)frame->y;
            yRange[1] = (f32)(frame->y + frame->height);
            rasterWidth = *(s32*)(raster + 0x0c);
            rasterHeight = *(s32*)(raster + 0x10);

            switch (mode)
            {
            case 0:
                xMode = 0;
                yMode = 1;
                break;
            case 1:
                xMode = 2;
                yMode = 0;
                break;
            case 2:
                xMode = 0;
                yMode = 2;
                break;
            case 3:
                xMode = 1;
                yMode = 0;
                break;
            case 4:
                xMode = 2;
                yMode = 1;
                break;
            case 5:
                xMode = 2;
                yMode = 2;
                break;
            case 6:
                xMode = 2;
                yMode = 1;
                break;
            case 7:
                xMode = 1;
                yMode = 1;
                break;
            }

            switch (xMode)
            {
            case 0:
                if ((~frame->id & 1) != 0)
                {
                    uv[0] = xRange[0] / (f32)rasterWidth;
                    uv[2] = xRange[1] / (f32)rasterWidth;
                }
                else
                {
                    uv[0] = xRange[1] / (f32)rasterWidth;
                    uv[2] = xRange[0] / (f32)rasterWidth;
                }
                break;
            case 1:
                if ((~frame->id & 1) != 0)
                {
                    uv[0] = xRange[0] / (f32)rasterWidth;
                    uv[2] = (xRange[0] + 1.0f) / (f32)rasterWidth;
                }
                else
                {
                    uv[0] = xRange[1] / (f32)rasterWidth;
                    uv[2] = (xRange[1] - 1.0f) / (f32)rasterWidth;
                }
                break;
            case 2:
                if ((~frame->id & 1) != 0)
                {
                    uv[0] = (xRange[1] - 1.0f) / (f32)rasterWidth;
                    uv[2] = xRange[1] / (f32)rasterWidth;
                }
                else
                {
                    uv[0] = (xRange[0] + 1.0f) / (f32)rasterWidth;
                    uv[2] = xRange[0] / (f32)rasterWidth;
                }
                break;
            }

            switch (yMode)
            {
            case 0:
                if ((~frame->id & 2) != 0)
                {
                    uv[1] = yRange[0] / (f32)rasterHeight;
                    uv[3] = yRange[1] / (f32)rasterHeight;
                }
                else
                {
                    uv[1] = yRange[1] / (f32)rasterHeight;
                    uv[3] = yRange[0] / (f32)rasterHeight;
                }
                break;
            case 1:
                if ((~frame->id & 2) != 0)
                {
                    uv[1] = yRange[0] / (f32)rasterHeight;
                    uv[3] = (yRange[0] + 1.0f) / (f32)rasterHeight;
                }
                else
                {
                    uv[1] = yRange[1] / (f32)rasterHeight;
                    uv[3] = (yRange[1] - 1.0f) / (f32)rasterHeight;
                }
                break;
            case 2:
                if ((~frame->id & 2) != 0)
                {
                    uv[1] = (yRange[1] - 1.0f) / (f32)rasterHeight;
                    uv[3] = yRange[1] / (f32)rasterHeight;
                }
                else
                {
                    uv[1] = (yRange[0] + 1.0f) / (f32)rasterHeight;
                    uv[3] = yRange[0] / (f32)rasterHeight;
                }
                break;
            }
        }
    }
}

// FUN_0021d3b0
void func_0021d3b0(void* destination, void* frameData)
{
    BpTexFrameData* frame;
    RwCamera* camera;
    f32 uv[4];
    f32 reciprocalDepth;
    u32 depthAddress;

    frame = (BpTexFrameData*)frameData;
    camera = kwlnGetMainCamera();
    reciprocalDepth = 1.0f / *(f32*)((u8*)camera + 0x80);
    func_0021cd00(frame, uv);
    BP_TEX_F32(destination, 0x10) = uv[0];
    BP_TEX_F32(destination, 0x14) = uv[1];
    BP_TEX_F32(destination, 0x18) = reciprocalDepth;
    depthAddress = (u32)D_00960088_abs;
    BP_TEX_F32(destination, 0x08) = *(f32*)depthAddress;
    BP_TEX_WRITE_COLOR_INLINE(destination, 0, frame->color);
    BP_TEX_WRITE_VERTEX_INLINE(destination, 0x40, uv[2], uv[1], frame->color + 4,
                               *(f32*)depthAddress, reciprocalDepth);
    BP_TEX_WRITE_VERTEX_INLINE(destination, 0x80, uv[2], uv[3], frame->color + 8,
                               *(f32*)depthAddress, reciprocalDepth);
    BP_TEX_WRITE_VERTEX_INLINE(destination, 0xc0, uv[0], uv[3], frame->color + 12,
                               *(f32*)depthAddress, reciprocalDepth);
}

// FUN_0021d890
void func_0021d890(void* destination, const f32* vertices)
{
    BP_TEX_F32(destination, 0) = vertices[0];
    BP_TEX_F32(destination, 4) = vertices[1];
    BP_TEX_F32(destination, 0x40) = vertices[2];
    BP_TEX_F32(destination, 0x44) = vertices[3];
    BP_TEX_F32(destination, 0x80) = vertices[4];
    BP_TEX_F32(destination, 0x84) = vertices[5];
    BP_TEX_F32(destination, 0xc0) = vertices[6];
    BP_TEX_F32(destination, 0xc4) = vertices[7];
}

// FUN_0021d8e0
void func_0021d8e0(void* destination, const f32* rect)
{
    BP_TEX_F32(destination, 0) = rect[0];
    BP_TEX_F32(destination, 4) = rect[1];
    BP_TEX_F32(destination, 0x40) = rect[0] + rect[2];
    BP_TEX_F32(destination, 0x44) = rect[1];
    BP_TEX_F32(destination, 0x80) = rect[0] + rect[2];
    BP_TEX_F32(destination, 0x84) = rect[1] + rect[3];
    BP_TEX_F32(destination, 0xc0) = rect[0];
    BP_TEX_F32(destination, 0xc4) = rect[1] + rect[3];
}

// FUN_0021d950
void func_0021d950(void* destination, const u8* color)
{
    f32 converted;

    converted = (f32)color[0];
    BP_TEX_F32(destination, 0x20) = converted;
    converted = (f32)color[1];
    BP_TEX_F32(destination, 0x24) = converted;
    converted = (f32)color[2];
    BP_TEX_F32(destination, 0x28) = converted;
    converted = (f32)color[3];
    BP_TEX_F32(destination, 0x2c) = converted;

    converted = (f32)color[0];
    BP_TEX_F32(destination, 0x60) = converted;
    converted = (f32)color[1];
    BP_TEX_F32(destination, 0x64) = converted;
    converted = (f32)color[2];
    BP_TEX_F32(destination, 0x68) = converted;
    converted = (f32)color[3];
    BP_TEX_F32(destination, 0x6c) = converted;

    converted = (f32)color[0];
    BP_TEX_F32(destination, 0xa0) = converted;
    converted = (f32)color[1];
    BP_TEX_F32(destination, 0xa4) = converted;
    converted = (f32)color[2];
    BP_TEX_F32(destination, 0xa8) = converted;
    converted = (f32)color[3];
    BP_TEX_F32(destination, 0xac) = converted;

    converted = (f32)color[0];
    BP_TEX_F32(destination, 0xe0) = converted;
    converted = (f32)color[1];
    BP_TEX_F32(destination, 0xe4) = converted;
    converted = (f32)color[2];
    BP_TEX_F32(destination, 0xe8) = converted;
    converted = (f32)color[3];
    BP_TEX_F32(destination, 0xec) = converted;
}

// FUN_0021dd60
void func_0021dd60(void* destination, const u8* colors)
{
    f32 converted;

    converted = (f32)colors[0];
    BP_TEX_F32(destination, 0x20) = converted;
    converted = (f32)colors[1];
    BP_TEX_F32(destination, 0x24) = converted;
    converted = (f32)colors[2];
    BP_TEX_F32(destination, 0x28) = converted;
    converted = (f32)colors[3];
    BP_TEX_F32(destination, 0x2c) = converted;

    converted = (f32)colors[4];
    BP_TEX_F32(destination, 0x60) = converted;
    converted = (f32)colors[5];
    BP_TEX_F32(destination, 0x64) = converted;
    converted = (f32)colors[6];
    BP_TEX_F32(destination, 0x68) = converted;
    converted = (f32)colors[7];
    BP_TEX_F32(destination, 0x6c) = converted;

    converted = (f32)colors[8];
    BP_TEX_F32(destination, 0xa0) = converted;
    converted = (f32)colors[9];
    BP_TEX_F32(destination, 0xa4) = converted;
    converted = (f32)colors[10];
    BP_TEX_F32(destination, 0xa8) = converted;
    converted = (f32)colors[11];
    BP_TEX_F32(destination, 0xac) = converted;

    converted = (f32)colors[12];
    BP_TEX_F32(destination, 0xe0) = converted;
    converted = (f32)colors[13];
    BP_TEX_F32(destination, 0xe4) = converted;
    converted = (f32)colors[14];
    BP_TEX_F32(destination, 0xe8) = converted;
    converted = (f32)colors[15];
    BP_TEX_F32(destination, 0xec) = converted;
}

// FUN_0021e170
void func_0021e170(void* destination,
                   const f32* center,
                   const f32* direction,
                   const f32* size)
{
    f32 sourcePoints[4][2];
    f32* nextPoint;
    f32* point;
    f32 length;
    f32 angle;
    f32 sine;
    f32 cosine;
    f32 y;
    f32 x;
    f32 rotatedX;
    f32 rotatedY;
    f32 cx;
    f32 cy;
    s32 i;
    s32 j;

    length = sqrtf(direction[0] * direction[0] +
                   direction[1] * direction[1]);
    angle = func_0052ea18(direction[0] / length,
                          -(direction[1] / length));
    sourcePoints[0][0] = -size[0] / 2.0f;
    sourcePoints[0][1] = -size[1] / 2.0f;
    sourcePoints[1][0] = size[0] / 2.0f;
    sourcePoints[1][1] = sourcePoints[0][1];
    sourcePoints[2][0] = sourcePoints[1][0];
    sourcePoints[2][1] = size[1] / 2.0f;
    sourcePoints[3][0] = sourcePoints[0][0];
    sourcePoints[3][1] = sourcePoints[2][1];
    for (i = 0; i < 4; i++)
    {
        point = sourcePoints[i];
        nextPoint = point + 1;
        y = *nextPoint;
        x = *point;
        sine = func_0052e878(angle);
        cosine = func_0052e6d8(angle);
        rotatedX = x * cosine - y * sine;
        sine = func_0052e878(angle);
        cosine = func_0052e6d8(angle);
        rotatedY = x * sine + y * cosine;
        nextPoint[0] = (point[0] = rotatedX, rotatedY);
    }
    j = 0;
    cx = center[0];
    cy = center[1];
    while (j < 4)
    {
        point = sourcePoints[j];
        point[0] += cx;
        point[1] += cy;
        j++;
    }
    BP_TEX_F32(destination, 0x00) = sourcePoints[0][0];
    BP_TEX_F32(destination, 0x04) = sourcePoints[0][1];
    BP_TEX_F32(destination, 0x40) = sourcePoints[1][0];
    BP_TEX_F32(destination, 0x44) = sourcePoints[1][1];
    BP_TEX_F32(destination, 0x80) = sourcePoints[2][0];
    BP_TEX_F32(destination, 0x84) = sourcePoints[2][1];
    BP_TEX_F32(destination, 0xc0) = sourcePoints[3][0];
    BP_TEX_F32(destination, 0xc4) = sourcePoints[3][1];
}

// FUN_0021e380
void func_0021e380(void* destination, void* frameData, u32 mode)
{
    BpTexFrameData* frame;
    RwCamera* camera;
    const u8* firstColor;
    const u8* secondColor;
    const u8* thirdColor;
    const u8* fourthColor;
    f32 uv[4];
    f32 reciprocalDepth;
    u32 depthAddress;

    camera = kwlnGetMainCamera();
    frame = (BpTexFrameData*)frameData;
    reciprocalDepth = 1.0f / *(f32*)((u8*)camera + 0x80);
    switch (mode)
    {
        case 0:
            func_0021cec0(frame, uv, 0);
            firstColor = frame->color;
            secondColor = frame->color + 4;
            thirdColor = frame->color + 4;
            fourthColor = frame->color;
            break;
        case 1:
            func_0021cec0(frame, uv, 1);
            firstColor = frame->color + 4;
            secondColor = frame->color + 4;
            thirdColor = frame->color + 8;
            fourthColor = frame->color + 8;
            break;
        case 2:
            func_0021cec0(frame, uv, 2);
            firstColor = frame->color + 12;
            secondColor = frame->color + 8;
            thirdColor = frame->color + 8;
            fourthColor = frame->color + 12;
            break;
        case 3:
            func_0021cec0(frame, uv, 3);
            firstColor = frame->color;
            secondColor = frame->color;
            thirdColor = frame->color + 12;
            fourthColor = frame->color + 12;
            break;
        case 4:
            func_0021cec0(frame, uv, 4);
            firstColor = frame->color + 4;
            secondColor = frame->color + 4;
            thirdColor = frame->color + 4;
            fourthColor = frame->color + 4;
            break;
        case 5:
            func_0021cec0(frame, uv, 5);
            firstColor = frame->color + 8;
            secondColor = frame->color + 8;
            thirdColor = frame->color + 8;
            fourthColor = frame->color + 8;
            break;
        case 6:
            func_0021cec0(frame, uv, 6);
            firstColor = frame->color + 12;
            secondColor = frame->color + 12;
            thirdColor = frame->color + 12;
            fourthColor = frame->color + 12;
            break;
        case 7:
            func_0021cec0(frame, uv, 7);
            firstColor = frame->color;
            secondColor = frame->color;
            thirdColor = frame->color;
            fourthColor = frame->color;
            break;
    }
    BP_TEX_F32(destination, 0x10) = uv[0];
    BP_TEX_F32(destination, 0x14) = uv[1];
    BP_TEX_F32(destination, 0x18) = reciprocalDepth;
    depthAddress = (u32)D_00960088_abs;
    BP_TEX_F32(destination, 0x08) = *(f32*)depthAddress;
    BP_TEX_WRITE_COLOR_INLINE(destination, 0, firstColor);
    BP_TEX_WRITE_VERTEX_INLINE(destination, 0x40, uv[2], uv[1], secondColor,
                               *(f32*)depthAddress, reciprocalDepth);
    BP_TEX_WRITE_VERTEX_INLINE(destination, 0x80, uv[2], uv[3], thirdColor,
                               *(f32*)depthAddress, reciprocalDepth);
    BP_TEX_WRITE_VERTEX_INLINE(destination, 0xc0, uv[0], uv[3], fourthColor,
                               *(f32*)depthAddress, reciprocalDepth);
}

// FUN_0021ea00
f32 func_0021ea00(s32 duration)
{
    RwCamera* camera;
    f32 nearPlane;
    f32 maxDepth;
    f32 farPlane;
    f32 value;
    u32 unsignedDuration;

    camera = kwlnGetMainCamera();
    nearPlane = *(f32*)((u8*)camera + 0x80);
    camera = kwlnGetMainCamera();
    farPlane = *(f32*)((u8*)camera + 0x84);
    unsignedDuration = (u32)duration;
    maxDepth = 65535.0f;
    value = (f32)unsignedDuration;
    return ((-maxDepth * nearPlane) * farPlane) /
           ((-maxDepth * farPlane) -
            (value - maxDepth) * (farPlane - nearPlane));
}

// FUN_0021eac0
void func_0021eac0(void* destination, f32 value)
{
    BP_TEX_F32(destination, 8) = value;
    BP_TEX_F32(destination, 0x48) = value;
    BP_TEX_F32(destination, 0x88) = value;
    BP_TEX_F32(destination, 0xc8) = value;
}

// FUN_0021eae0
void func_0021eae0(void* destination, const f32* rect)
{
    RwCamera* camera;
    f32 reciprocalDepth;

    camera = kwlnGetMainCamera();
    reciprocalDepth = 1.0f / *(f32*)((u8*)camera + 0x80);
    BP_TEX_F32(destination, 0x10) = rect[0];
    BP_TEX_F32(destination, 0x14) = rect[1];
    BP_TEX_F32(destination, 0x18) = reciprocalDepth;
    BP_TEX_F32(destination, 0x50) = rect[2];
    BP_TEX_F32(destination, 0x54) = rect[1];
    BP_TEX_F32(destination, 0x58) = reciprocalDepth;
    BP_TEX_F32(destination, 0x90) = rect[2];
    BP_TEX_F32(destination, 0x94) = rect[3];
    BP_TEX_F32(destination, 0x98) = reciprocalDepth;
    BP_TEX_F32(destination, 0xd0) = rect[0];
    BP_TEX_F32(destination, 0xd4) = rect[3];
    BP_TEX_F32(destination, 0xd8) = reciprocalDepth;
}

// FUN_0021eb80
void func_0021eb80(void* destination, const f32* rect)
{
    RwCamera* camera;
    f32 reciprocalDepth;

    camera = kwlnGetMainCamera();
    reciprocalDepth = 1.0f / *(f32*)((u8*)camera + 0x80);
    BP_TEX_F32(destination, 0x10) = rect[0];
    BP_TEX_F32(destination, 0x14) = rect[1];
    BP_TEX_F32(destination, 0x18) = reciprocalDepth;
    BP_TEX_F32(destination, 0x50) = rect[0] + rect[2];
    BP_TEX_F32(destination, 0x54) = rect[1];
    BP_TEX_F32(destination, 0x58) = reciprocalDepth;
    BP_TEX_F32(destination, 0x90) = rect[0] + rect[2];
    BP_TEX_F32(destination, 0x94) = rect[1] + rect[3];
    BP_TEX_F32(destination, 0x98) = reciprocalDepth;
    BP_TEX_F32(destination, 0xd0) = rect[0];
    BP_TEX_F32(destination, 0xd4) = rect[1] + rect[3];
    BP_TEX_F32(destination, 0xd8) = reciprocalDepth;
}


/* Retail 0x0021ec40-0x0021f080: TMX format selection, palette upload, and
 * format-specific row-major pixel copies. */
/* W310 measured: opt_common_subs off nd599->583, object 1140/1152; reset nd599. */
#pragma opt_common_subs off
// FUN_0021ec40
#ifndef PC_BUILD
asm RwRaster* bpTexCreateTmxRaster(void* tmxMemory)
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
  .word 0x0000882d
  .word 0x0080802d
  .word 0x0200a82d
  .word 0x0000982d
  .word 0x90830016
  .word 0x2402002c
  .word 0x10620026
  .word 0x00000000
  .word 0x24020024
  .word 0x10620023
  .word 0x00000000
  .word 0x24020014
  .word 0x10620020
  .word 0x00000000
  .word 0x2402001b
  .word 0x1062001a
  .word 0x00000000
  .word 0x24020013
  .word 0x10620017
  .word 0x00000000
  .word 0x2402000a
  .word 0x10620011
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000e
  .word 0x00000000
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x24130020
  .word 0x1000000b
  .word 0x00000000
  .word 0x24130018
  .word 0x10000008
  .word 0x00000000
  .word 0x24130010
  .word 0x10000005
  .word 0x00000000
  .word 0x24130008
  .word 0x10000002
  .word 0x00000000
  .word 0x24130004
  .word 0x16600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e370
  .word 0x24050065
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x26100040
  .word 0x24020004
  .word 0x1262000d
  .word 0x00000000
  .word 0x24020008
  .word 0x12620003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x0200902d
  .word 0x92a20010
  .word 0x00021280
  .word 0x02028021
  .word 0x36310001
  .word 0x10000006
  .word 0x00000000
  .word 0x0200902d
  .word 0x92a20010
  .word 0x00021180
  .word 0x02028021
  .word 0x36310001
  .word 0x0000a02d
  .word 0x36940004
  .word 0x24020004
  .word 0x12620015
  .word 0x00000000
  .word 0x24020008
  .word 0x1262000f
  .word 0x00000000
  .word 0x24020018
  .word 0x12620009
  .word 0x00000000
  .word 0x24020020
  .word 0x12620003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x36940500
  .word 0x1000000f
  .word 0x00000000
  .word 0x36940600
  .word 0x1000000c
  .word 0x00000000
  .word 0x36942500
  .word 0x10000009
  .word 0x00000000
  .word 0x36944500
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e370
  .word 0x2405008d
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96a40012
  .word 0x96a50014
  .word 0x0260302d
  .word 0x0280382d
  .word 0x0c13383c
  .word 0x00000000
  .word 0x0040a02d
  .word 0x32220001
  .word 0x10400028
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050001
  .word 0x0c1337cc
  .word 0x00000000
  .word 0x24030004
  .word 0x12630013
  .word 0x00000000
  .word 0x24030008
  .word 0x12630003
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x0000202d
  .word 0x10000006
  .word 0x00000000
  .word 0x8e430000
  .word 0xac430000
  .word 0x26520004
  .word 0x24420004
  .word 0x24840001
  .word 0x28830100
  .word 0x1460fff9
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x0000202d
  .word 0x10000006
  .word 0x00000000
  .word 0x8e430000
  .word 0xac430000
  .word 0x26520004
  .word 0x24420004
  .word 0x24840001
  .word 0x28830010
  .word 0x1460fff9
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c133790
  .word 0x00000000
  .word 0x0280202d
  .word 0x0000282d
  .word 0x24060001
  .word 0x0c133880
  .word 0x00000000
  .word 0x24030004
  .word 0x12630050
  .word 0x00000000
  .word 0x24030008
  .word 0x12630037
  .word 0x00000000
  .word 0x24030018
  .word 0x1263001c
  .word 0x00000000
  .word 0x24030020
  .word 0x12630003
  .word 0x00000000
  .word 0x1000005a
  .word 0x00000000
  .word 0x0000202d
  .word 0x1000000e
  .word 0x00000000
  .word 0x0000282d
  .word 0x10000006
  .word 0x00000000
  .word 0x8e030000
  .word 0xac430000
  .word 0x26100004
  .word 0x24420004
  .word 0x24a50001
  .word 0x96a30012
  .word 0x00a3182a
  .word 0x1460fff8
  .word 0x00000000
  .word 0x24840001
  .word 0x96a30014
  .word 0x0083182a
  .word 0x1460fff0
  .word 0x00000000
  .word 0x10000044
  .word 0x00000000
  .word 0x0000302d
  .word 0x10000010
  .word 0x00000000
  .word 0x0000282d
  .word 0x10000006
  .word 0x00000000
  .word 0x92030000
  .word 0xa0430000
  .word 0x26100001
  .word 0x24420001
  .word 0x24a50001
  .word 0x96a40012
  .word 0x00041840
  .word 0x00641821
  .word 0x00a3182a
  .word 0x1460fff6
  .word 0x00000000
  .word 0x24c60001
  .word 0x96a30014
  .word 0x00c3182a
  .word 0x1460ffee
  .word 0x00000000
  .word 0x1000002c
  .word 0x00000000
  .word 0x0000282d
  .word 0x1000000e
  .word 0x00000000
  .word 0x0000202d
  .word 0x10000006
  .word 0x00000000
  .word 0x92030000
  .word 0xa0430000
  .word 0x26100001
  .word 0x24420001
  .word 0x24840001
  .word 0x96a30012
  .word 0x0083182a
  .word 0x1460fff8
  .word 0x00000000
  .word 0x24a50001
  .word 0x96a30014
  .word 0x00a3182a
  .word 0x1460fff0
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x0000282d
  .word 0x1000000f
  .word 0x00000000
  .word 0x0000202d
  .word 0x10000006
  .word 0x00000000
  .word 0x8e030000
  .word 0xac430000
  .word 0x26100004
  .word 0x24420004
  .word 0x24840001
  .word 0x96a30012
  .word 0x000318c3
  .word 0x0083182a
  .word 0x1460fff7
  .word 0x00000000
  .word 0x24a50001
  .word 0x96a30014
  .word 0x00a3182a
  .word 0x1460ffef
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c133780
  .word 0x00000000
  .word 0x0280102d
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
#pragma opt_common_subs on







// FUN_0021f0c0
void func_0021f0c0(void* work)
{
    u32* words;
    s32 i;

    K_ASSERT(BP_PANEL_GLOBAL == NULL, 0xee);
    words = (u32*)work;
    words[0] = 0;
    words[1] = 0;
    for (i = 0; i < 7; i++)
    {
        *(u32*)((u8*)work + 0x1210 + i * 4) = 0;
    }
    BP_PANEL_GLOBAL = (u8*)work;
}

// FUN_0021F140
void func_0021f140(void)
{
    DAT_007ce408 = NULL;
}



// FUN_0021f150
void func_0021f150(u32 selection)
{
    u8* work;
    void* texture;
    void* frame;
    u32* words;
    s32 i;

    K_ASSERT(BP_PANEL_GLOBAL != NULL, 0xe6);
    work = BP_PANEL_GLOBAL;
    words = (u32*)work;
    texture = func_0021c3f0(0);
    K_ASSERT((~words[0]) & 1, 0x103);
    words[0] &= ~0x10;
    if (func_002d1a70() == 0)
    {
        words[0] |= 0x10;
    }
    frame = func_0021cca0(texture, 0x10);
    func_0021d3b0(work + 0x10, frame);
    frame = func_0021cca0(texture, 0x1b);
    func_0021d3b0(work + 0x110, frame);
    frame = func_0021cca0(texture, 0x1c);
    func_0021d3b0(work + 0x210, frame);
    frame = func_0021cca0(texture, 0x22);
    func_0021d3b0(work + 0x1430, frame);
    frame = func_0021cca0(texture, 0x0e);
    func_0021d3b0(work + 0x310, frame);
    frame = func_0021cca0(texture, (s32)selection);
    func_0021d3b0(work + 0x1230, frame);
    for (i = 0; i < 7; i++)
    {
        if (*(u32*)(work + 0x1210 + i * 4) & 1)
        {
            frame = func_0021cca0(texture, 0x11);
        }
        else
        {
            frame = func_0021cca0(texture, 0x41);
        }
        func_0021d3b0(work + 0x410 + i * 0x100, frame);
    }
    for (i = 0; i < 7; i++)
    {
        frame = func_0021cca0(texture, i + 0x14);
        func_0021d3b0(work + 0xb10 + i * 0x100, frame);
    }
    bcmPanel0022b580();
    *(u32*)(work + 0x4634) = selection;
    *(u32*)(work + 0x4638) = 0xffffffff;
    *(u32*)(work + 0x463c) = 0;
    *(u32*)(work + 0x4640) = 0xffffffff;
    *(u32*)(work + 0x4630) = 0;
    words[0] |= 1;
}

// FUN_0021f3c0
void func_0021f3c0(void)
{
    u32* words;

    K_ASSERT(BP_PANEL_GLOBAL != NULL, 0xe6);
    words = (u32*)BP_PANEL_GLOBAL;
    words[0] &= ~1;
}

/* W454 frame work: buffered rect/quad scratch and direct previous reads
 * reduced this function from 0x1f0/496B, nd7333 to 0x110/272B, nd7288.
 * Retail remains 0xd0/208B; the frame excess is now s5-s7 vs f28-f31. */
// FUN_0021f410
#ifndef PC_BUILD
asm void func_0021f410(void)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf0080
  .word 0x7fb40070
  .word 0x7fb30060
  .word 0x7fb20050
  .word 0x7fb10040
  .word 0x7fb00030
  .word 0xe7bf002c
  .word 0xe7be0028
  .word 0xe7bd0024
  .word 0xe7bc0020
  .word 0xe7bb001c
  .word 0xe7ba0018
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f82b618
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x240500e6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f90b618
  .word 0x0000202d
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e020000
  .word 0x30420001
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x24050151
  .word 0x0c0674fc
  .word 0x00000000
  .word 0xc6187214
  .word 0x0c08ad8c
  .word 0x00000000
  .word 0x8e024630
  .word 0x2c410009
  .word 0x1020002e
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637630
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e02464c
  .word 0x28410004
  .word 0x10200023
  .word 0x00000000
  .word 0x24420001
  .word 0xae02464c
  .word 0x1000001f
  .word 0x00000000
  .word 0x8e024650
  .word 0x28410003
  .word 0x10200003
  .word 0x00000000
  .word 0x24420001
  .word 0xae024650
  .word 0x8e034650
  .word 0x24020003
  .word 0x14620015
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fffd
  .word 0x00621024
  .word 0xae020000
  .word 0x1000000f
  .word 0x00000000
  .word 0x8e024658
  .word 0x28410006
  .word 0x10200003
  .word 0x00000000
  .word 0x24420001
  .word 0xae024658
  .word 0x8e034658
  .word 0x24020006
  .word 0x14620005
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fff7
  .word 0x00621024
  .word 0xae020000
  .word 0x8e024630
  .word 0x24040003
  .word 0x10440003
  .word 0x00000000
  .word 0x1000004a
  .word 0x00000000
  .word 0x8e03463c
  .word 0x24020004
  .word 0x10620025
  .word 0x00000000
  .word 0x10640023
  .word 0x00000000
  .word 0x24020002
  .word 0x10620020
  .word 0x00000000
  .word 0x24020001
  .word 0x1062001d
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000033
  .word 0x00000000
  .word 0xc6004650
  .word 0x3c024226
  .word 0x44820800
  .word 0x00000000
  .word 0x468000e0
  .word 0x46030802
  .word 0x3c024040
  .word 0x44821000
  .word 0x00000000
  .word 0x46020043
  .word 0x3c024276
  .word 0x44820000
  .word 0x00000000
  .word 0x460105c0
  .word 0x3c02c1dc
  .word 0x44820000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x00000000
  .word 0xc78083ec
  .word 0x46010580
  .word 0x1000003d
  .word 0x00000000
  .word 0xc6004650
  .word 0x3c02c226
  .word 0x44820800
  .word 0x00000000
  .word 0x468000e0
  .word 0x46030802
  .word 0x3c024040
  .word 0x44821000
  .word 0x00000000
  .word 0x46020043
  .word 0x3c0242ce
  .word 0x44820000
  .word 0x00000000
  .word 0x460105c0
  .word 0x3c0241dc
  .word 0x44820000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x24020169
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010580
  .word 0x10000023
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x24050185
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x1000001c
  .word 0x00000000
  .word 0x8e03463c
  .word 0x24020004
  .word 0x10620015
  .word 0x00000000
  .word 0x10640013
  .word 0x00000000
  .word 0x24020002
  .word 0x10620010
  .word 0x00000000
  .word 0x24020001
  .word 0x1062000d
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x3c0242ce
  .word 0x4482b800
  .word 0x24020169
  .word 0x44820000
  .word 0x00000000
  .word 0x468005a0
  .word 0x10000004
  .word 0x00000000
  .word 0x3c024276
  .word 0x4482b800
  .word 0xc79683ec
  .word 0x3c024320
  .word 0x44820000
  .word 0x00000000
  .word 0x46170040
  .word 0x3c0242ce
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d41
  .word 0x24020169
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x46160800
  .word 0x46010501
  .word 0x3c02427a
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bf81
  .word 0x4600b701
  .word 0x0220202d
  .word 0x24050010
  .word 0x0c087328
  .word 0x00000000
  .word 0xe7be0090
  .word 0xe7bc0094
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00098
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0009c
  .word 0x26040010
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200cc
  .word 0xa3a200cd
  .word 0xa3a200ce
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46180702
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x461c0036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600e024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600e001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300cf
  .word 0x26040010
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e024630
  .word 0x24040003
  .word 0x10440003
  .word 0x00000000
  .word 0x10000044
  .word 0x00000000
  .word 0x8e03463c
  .word 0x24020004
  .word 0x10620027
  .word 0x00000000
  .word 0x10640025
  .word 0x00000000
  .word 0x24020002
  .word 0x10620022
  .word 0x00000000
  .word 0x24020001
  .word 0x1062001f
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000050
  .word 0x00000000
  .word 0xc6004650
  .word 0x3c02c288
  .word 0x44820800
  .word 0x00000000
  .word 0x468000e0
  .word 0x46030802
  .word 0x3c024040
  .word 0x44821000
  .word 0x00000000
  .word 0x46020043
  .word 0x3c0242a4
  .word 0x44820000
  .word 0x00000000
  .word 0x46010740
  .word 0x3c02c1b8
  .word 0x44820000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x24020171
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x460106c0
  .word 0x10000036
  .word 0x00000000
  .word 0xc6004650
  .word 0x3c024288
  .word 0x44820800
  .word 0x00000000
  .word 0x468000e0
  .word 0x46030802
  .word 0x3c024040
  .word 0x44821000
  .word 0x00000000
  .word 0x46020043
  .word 0x3c024160
  .word 0x44820000
  .word 0x00000000
  .word 0x46010740
  .word 0x3c0241b8
  .word 0x44820000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c0243ad
  .word 0x44820000
  .word 0x00000000
  .word 0x460106c0
  .word 0x1000001d
  .word 0x00000000
  .word 0x8e03463c
  .word 0x24020004
  .word 0x10620013
  .word 0x00000000
  .word 0x10640011
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000e
  .word 0x00000000
  .word 0x24020001
  .word 0x1062000b
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x3c024160
  .word 0x4482e800
  .word 0x3c0243ad
  .word 0x4482d800
  .word 0x10000007
  .word 0x00000000
  .word 0x3c0242a4
  .word 0x4482e800
  .word 0x24020171
  .word 0x44820000
  .word 0x00000000
  .word 0x468006e0
  .word 0x0220202d
  .word 0x8e054634
  .word 0x0c087328
  .word 0x00000000
  .word 0xe7bd0090
  .word 0xe7bb0094
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00098
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0009c
  .word 0x26041230
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e034630
  .word 0x24020008
  .word 0x10620009
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x8e03464c
  .word 0x24020004
  .word 0x10620023
  .word 0x00000000
  .word 0x0220202d
  .word 0x8e054638
  .word 0x0c087328
  .word 0x00000000
  .word 0xe7bd0090
  .word 0xe7bb0094
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00098
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0009c
  .word 0x26041330
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x0220202d
  .word 0x8e054634
  .word 0x0c087328
  .word 0x00000000
  .word 0xe7bd0090
  .word 0xe7bb0094
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00098
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0009c
  .word 0x26041330
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200cc
  .word 0xa3a200cd
  .word 0xa3a200ce
  .word 0x8e034630
  .word 0x24060003
  .word 0x10660067
  .word 0x00000000
  .word 0x24020008
  .word 0x10620009
  .word 0x00000000
  .word 0x24050002
  .word 0x10650006
  .word 0x00000000
  .word 0x24040001
  .word 0x10640003
  .word 0x00000000
  .word 0x10000100
  .word 0x00000000
  .word 0x8e024634
  .word 0x00021080
  .word 0x00501021
  .word 0x8c421210
  .word 0x30420001
  .word 0x1040000b
  .word 0x00000000
  .word 0x3c024080
  .word 0x4482d800
  .word 0xc600464c
  .word 0x46800020
  .word 0x461b0643
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x3c024080
  .word 0x4482d800
  .word 0xc600464c
  .word 0x46800060
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0x461b0643
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46190002
  .word 0x46180042
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
  .word 0xa3a300cf
  .word 0x26041230
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e03464c
  .word 0x24020004
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x461b0643
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46190002
  .word 0x46180042
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
  .word 0xa3a300cf
  .word 0x26041330
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x10000119
  .word 0x00000000
  .word 0x8e03463c
  .word 0x24020004
  .word 0x10620057
  .word 0x00000000
  .word 0x10660055
  .word 0x00000000
  .word 0x24020002
  .word 0x10620052
  .word 0x00000000
  .word 0x24020001
  .word 0x1062004f
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000109
  .word 0x00000000
  .word 0xc6004650
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0x46180042
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
  .word 0xa3a300cf
  .word 0x26041230
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e034650
  .word 0x24020003
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e43
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46190002
  .word 0x46180042
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
  .word 0xa3a300cf
  .word 0x26041330
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x100000bf
  .word 0x00000000
  .word 0x8e034650
  .word 0x24020003
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0x46180042
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
  .word 0xa3a300cf
  .word 0x26041230
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0xc6004650
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e43
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46190002
  .word 0x46180042
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
  .word 0xa3a300cf
  .word 0x26041330
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x10000075
  .word 0x00000000
  .word 0x8e03463c
  .word 0x24020004
  .word 0x1062003e
  .word 0x00000000
  .word 0x1066003c
  .word 0x00000000
  .word 0x1065003a
  .word 0x00000000
  .word 0x10640038
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000067
  .word 0x00000000
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x461c0036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600e024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600e001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300cf
  .word 0x26041230
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x4480c800
  .word 0x00000000
  .word 0x4618c842
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
  .word 0xa3a300cf
  .word 0x26041330
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x10000034
  .word 0x00000000
  .word 0x44800000
  .word 0x00000000
  .word 0x46180042
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
  .word 0xa3a300cf
  .word 0x26041230
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482c800
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x461c0036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600e024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600e001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300cf
  .word 0x26041330
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x0220202d
  .word 0x2405001b
  .word 0x0c087328
  .word 0x00000000
  .word 0x8e034630
  .word 0x24050003
  .word 0x10650003
  .word 0x00000000
  .word 0x1000002e
  .word 0x00000000
  .word 0x8e04463c
  .word 0x24030004
  .word 0x1083001d
  .word 0x00000000
  .word 0x1085001b
  .word 0x00000000
  .word 0x24030002
  .word 0x10830018
  .word 0x00000000
  .word 0x24030001
  .word 0x10830015
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000032
  .word 0x00000000
  .word 0x8e034650
  .word 0x00a31823
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0xc78083f0
  .word 0x46010042
  .word 0x3c034040
  .word 0x44830000
  .word 0x00000000
  .word 0x46000e83
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0xc6004650
  .word 0x46800060
  .word 0xc78083f0
  .word 0x46010042
  .word 0x3c034040
  .word 0x44830000
  .word 0x00000000
  .word 0x46000e83
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x8e04463c
  .word 0x24030004
  .word 0x10830010
  .word 0x00000000
  .word 0x1085000e
  .word 0x00000000
  .word 0x24030002
  .word 0x1083000b
  .word 0x00000000
  .word 0x24030001
  .word 0x10830008
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x4480d000
  .word 0x10000002
  .word 0x00000000
  .word 0xc79a83f0
  .word 0x3c0342b6
  .word 0x44830000
  .word 0x00000000
  .word 0x4600b801
  .word 0x3c033f00
  .word 0x44830800
  .word 0x00000000
  .word 0x46010081
  .word 0x3c0342b4
  .word 0x44830000
  .word 0x00000000
  .word 0x4600b001
  .word 0x46010041
  .word 0xe7a200a0
  .word 0xe7a100a4
  .word 0xc440000c
  .word 0x46800020
  .word 0x46001000
  .word 0xe7a000a8
  .word 0xe7a100ac
  .word 0xe7a000b0
  .word 0xc4400010
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000b4
  .word 0xe7a200b8
  .word 0xe7a000bc
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200a0
  .word 0xc4400000
  .word 0x46170001
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46160001
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000001c
  .word 0x00000000
  .word 0x001210c0
  .word 0x005d1021
  .word 0x245400a0
  .word 0xc69e0000
  .word 0x26930004
  .word 0xc69d0004
  .word 0x4600d306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x460006c6
  .word 0x4600d306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x4600f01a
  .word 0x461beedd
  .word 0x4600d306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x460007c6
  .word 0x4600d306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x4600e81a
  .word 0x461ff01c
  .word 0xe69b0000
  .word 0xe6600000
  .word 0x26520001
  .word 0x2a420004
  .word 0x1440ffe3
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200a0
  .word 0xc4400000
  .word 0x46170000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46160000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x26040110
  .word 0x27a500a0
  .word 0x0c087624
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200cc
  .word 0xa3a200cd
  .word 0xa3a200ce
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x461c0036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600e024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600e001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300cf
  .word 0x26040110
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x0220202d
  .word 0x2405001c
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c03429e
  .word 0x44830000
  .word 0x00000000
  .word 0x4600b801
  .word 0x3c033f00
  .word 0x44830800
  .word 0x00000000
  .word 0x46010081
  .word 0x3c0342aa
  .word 0x44830000
  .word 0x00000000
  .word 0x4600b001
  .word 0x46010041
  .word 0xe7a200a0
  .word 0xe7a100a4
  .word 0xc440000c
  .word 0x46800020
  .word 0x46001000
  .word 0xe7a000a8
  .word 0xe7a100ac
  .word 0xe7a000b0
  .word 0xc4400010
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000b4
  .word 0xe7a200b8
  .word 0xe7a000bc
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200a0
  .word 0xc4400000
  .word 0x46170001
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46160001
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000001c
  .word 0x00000000
  .word 0x001210c0
  .word 0x005d1021
  .word 0x245400a0
  .word 0xc69e0000
  .word 0x26930004
  .word 0xc69d0004
  .word 0x4600d306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x460006c6
  .word 0x4600d306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x4600f01a
  .word 0x461bef1d
  .word 0x4600d306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x460006c6
  .word 0x4600d306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x4600e81a
  .word 0x461bf01c
  .word 0xe69c0000
  .word 0xe6600000
  .word 0x26520001
  .word 0x2a420004
  .word 0x1440ffe3
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200a0
  .word 0xc4400000
  .word 0x46170000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46160000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x26040210
  .word 0x27a500a0
  .word 0x0c087624
  .word 0x00000000
  .word 0x8e024630
  .word 0x24040003
  .word 0x10440003
  .word 0x00000000
  .word 0x1000002b
  .word 0x00000000
  .word 0x8e03463c
  .word 0x24020004
  .word 0x10620018
  .word 0x00000000
  .word 0x10640016
  .word 0x00000000
  .word 0x24020002
  .word 0x10620013
  .word 0x00000000
  .word 0x24020001
  .word 0x10620010
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000030
  .word 0x00000000
  .word 0xc6004650
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x8e034650
  .word 0x24020003
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x8e03463c
  .word 0x24020004
  .word 0x10620011
  .word 0x00000000
  .word 0x1064000f
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020001
  .word 0x10620009
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482c800
  .word 0x10000002
  .word 0x00000000
  .word 0x4480c800
  .word 0x240200ff
  .word 0xa3a200cc
  .word 0xa3a200cd
  .word 0xa3a200ce
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46190002
  .word 0x46180042
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
  .word 0xa3a300cf
  .word 0x26040210
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050022
  .word 0x0c087328
  .word 0x00000000
  .word 0x8e034630
  .word 0x24050003
  .word 0x10650003
  .word 0x00000000
  .word 0x1000002f
  .word 0x00000000
  .word 0x8e04463c
  .word 0x24030004
  .word 0x1083001a
  .word 0x00000000
  .word 0x10850018
  .word 0x00000000
  .word 0x24030002
  .word 0x10830015
  .word 0x00000000
  .word 0x24030001
  .word 0x10830012
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000020
  .word 0x00000000
  .word 0xc6004650
  .word 0x46800060
  .word 0xc78083f4
  .word 0x46010042
  .word 0x3c034040
  .word 0x44830000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0xc78083f8
  .word 0x46010680
  .word 0x10000013
  .word 0x00000000
  .word 0x8e044650
  .word 0x24030003
  .word 0x00641823
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0xc78083f4
  .word 0x46010042
  .word 0x3c034040
  .word 0x44830000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0xc78083f8
  .word 0x46010680
  .word 0x10000002
  .word 0x00000000
  .word 0xc79a83f8
  .word 0x3c034248
  .word 0x44830000
  .word 0x00000000
  .word 0x4600b801
  .word 0x3c033f00
  .word 0x44830800
  .word 0x00000000
  .word 0x46010081
  .word 0x3c0341f0
  .word 0x44830000
  .word 0x00000000
  .word 0x4600b001
  .word 0x46010041
  .word 0xe7a200a0
  .word 0xe7a100a4
  .word 0xc440000c
  .word 0x46800020
  .word 0x46001000
  .word 0xe7a000a8
  .word 0xe7a100ac
  .word 0xe7a000b0
  .word 0xc4400010
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000b4
  .word 0xe7a200b8
  .word 0xe7a000bc
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200a0
  .word 0xc4400000
  .word 0x46170001
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46160001
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000001c
  .word 0x00000000
  .word 0x001210c0
  .word 0x005d1021
  .word 0x245400a0
  .word 0xc69e0000
  .word 0x26930004
  .word 0xc69d0004
  .word 0x4600d306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x460006c6
  .word 0x4600d306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x4600f01a
  .word 0x461bef1d
  .word 0x4600d306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x460006c6
  .word 0x4600d306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x4600e81a
  .word 0x461bf01c
  .word 0xe69c0000
  .word 0xe6600000
  .word 0x26520001
  .word 0x2a420004
  .word 0x1440ffe3
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000b
  .word 0x00000000
  .word 0x000310c0
  .word 0x005d1021
  .word 0x244200a0
  .word 0xc4400000
  .word 0x46170000
  .word 0xe4400000
  .word 0xc4400004
  .word 0x46160000
  .word 0xe4400004
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff4
  .word 0x00000000
  .word 0x26041430
  .word 0x27a500a0
  .word 0x0c087624
  .word 0x00000000
  .word 0x8e024630
  .word 0x24040003
  .word 0x10440003
  .word 0x00000000
  .word 0x1000002a
  .word 0x00000000
  .word 0x8e03463c
  .word 0x24020004
  .word 0x1062001b
  .word 0x00000000
  .word 0x10640019
  .word 0x00000000
  .word 0x24020002
  .word 0x10620016
  .word 0x00000000
  .word 0x24020001
  .word 0x10620013
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000002f
  .word 0x00000000
  .word 0x8e024650
  .word 0x00821023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000021
  .word 0x00000000
  .word 0xc6004650
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x8e03463c
  .word 0x24020004
  .word 0x10620010
  .word 0x00000000
  .word 0x1064000e
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000b
  .word 0x00000000
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x4480c800
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482c800
  .word 0x240200ff
  .word 0xa3a200cc
  .word 0xa3a200cd
  .word 0xa3a200ce
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46190002
  .word 0x46180042
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
  .word 0xa3a300cf
  .word 0x26041430
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x0000982d
  .word 0x3c024264
  .word 0x44820000
  .word 0x00000000
  .word 0x46000707
  .word 0x100000b1
  .word 0x00000000
  .word 0x8e034630
  .word 0x24020002
  .word 0x10620020
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000035
  .word 0x00000000
  .word 0xc600464c
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0xc6004634
  .word 0x46800060
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010041
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020041
  .word 0x3c0240e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0xc600464c
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000883
  .word 0xc6004634
  .word 0x46800060
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010041
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0x46001040
  .word 0x3c0240e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0xc6004634
  .word 0x46800060
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010041
  .word 0x3c0240e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010682
  .word 0x4600d306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x4600e6c2
  .word 0x4600d306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x4600e682
  .word 0x00131080
  .word 0x02021021
  .word 0x8c421210
  .word 0x30420001
  .word 0x10400007
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050011
  .word 0x0c087328
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050041
  .word 0x0c087328
  .word 0x00000000
  .word 0x8c44000c
  .word 0x00041843
  .word 0x04810003
  .word 0x00000000
  .word 0x24830001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600d841
  .word 0x8c440010
  .word 0x00041843
  .word 0x04810003
  .word 0x00000000
  .word 0x24830001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600d001
  .word 0x46150840
  .word 0x46140000
  .word 0xe7a10090
  .word 0xe7a00094
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00098
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0009c
  .word 0x00131200
  .word 0x02029021
  .word 0x26440410
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0x26650014
  .word 0x0220202d
  .word 0x0c087328
  .word 0x00000000
  .word 0x8c44000c
  .word 0x00041843
  .word 0x04810003
  .word 0x00000000
  .word 0x24830001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600d841
  .word 0x8c440010
  .word 0x00041843
  .word 0x04810003
  .word 0x00000000
  .word 0x24830001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600d001
  .word 0x46150840
  .word 0x46140000
  .word 0xe7a10090
  .word 0xe7a00094
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00098
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0009c
  .word 0x26440b10
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620007
  .word 0x1440ff4e
  .word 0x00000000
  .word 0x8e02463c
  .word 0x24060004
  .word 0x1046002b
  .word 0x00000000
  .word 0x24050003
  .word 0x10450028
  .word 0x00000000
  .word 0x24040002
  .word 0x10440025
  .word 0x00000000
  .word 0x24030001
  .word 0x10430022
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000028
  .word 0x00000000
  .word 0x8e024640
  .word 0x10440007
  .word 0x00000000
  .word 0x10430005
  .word 0x00000000
  .word 0x10460003
  .word 0x00000000
  .word 0x14450011
  .word 0x00000000
  .word 0x8e034650
  .word 0x24020003
  .word 0x1062000d
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482c800
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e034650
  .word 0x24020003
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e43
  .word 0x0220202d
  .word 0x2405000e
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0342fc
  .word 0x44830000
  .word 0x00000000
  .word 0x46170040
  .word 0x3c0342ce
  .word 0x44830000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a00090
  .word 0x3c0343b0
  .word 0x44830000
  .word 0x00000000
  .word 0x46160040
  .word 0x24030169
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000801
  .word 0xe7a00094
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00098
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0009c
  .word 0x26040310
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200cc
  .word 0xa3a200cd
  .word 0xa3a200ce
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46190502
  .word 0x4618a042
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
  .word 0xa3a300cf
  .word 0x26040310
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000209
  .word 0x00000000
  .word 0x8e034630
  .word 0x24020002
  .word 0x10620020
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000035
  .word 0x00000000
  .word 0xc600464c
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d83
  .word 0xc6004634
  .word 0x46800060
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010041
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46160041
  .word 0x3c0240e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000027
  .word 0x00000000
  .word 0xc600464c
  .word 0x46800060
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d83
  .word 0xc6004634
  .word 0x46800060
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010041
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0x4600b040
  .word 0x3c0240e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0xc6004634
  .word 0x46800060
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010041
  .word 0x3c0240e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c023f80
  .word 0x4482b000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0xc7808248
  .word 0x46010302
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x4600e042
  .word 0x3c0242e4
  .word 0x44821000
  .word 0x3c024264
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0x46001041
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0x46020043
  .word 0x3c024282
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x8e024634
  .word 0x164200a9
  .word 0x00000000
  .word 0x00121080
  .word 0x02021021
  .word 0x8c421210
  .word 0x30420001
  .word 0x1040005a
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x461600c1
  .word 0x3c02c34c
  .word 0x44821000
  .word 0x3c02437f
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602185c
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
  .word 0xa3a300cc
  .word 0x3c02c214
  .word 0x44821000
  .word 0x3c0242f0
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602185c
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
  .word 0xa3a300cd
  .word 0x3c02c2aa
  .word 0x44821000
  .word 0x3c02432f
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602185c
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
  .word 0xa3a300ce
  .word 0x3c023f80
  .word 0x44820800
  .word 0x10000008
  .word 0x00000000
  .word 0x24020073
  .word 0xa3a200cc
  .word 0x24020074
  .word 0xa3a200cd
  .word 0xa3a200ce
  .word 0x3c023f80
  .word 0x44820800
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46150542
  .word 0x4601a802
  .word 0x4600c042
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
  .word 0xa3a300cf
  .word 0x00121200
  .word 0x02028821
  .word 0x26240b10
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200cc
  .word 0xa3a200cd
  .word 0xa3a200ce
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46160001
  .word 0x4600a802
  .word 0x4600c042
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
  .word 0xa3a300cf
  .word 0x26240410
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x100000f5
  .word 0x00000000
  .word 0x8e024638
  .word 0x164200a3
  .word 0x00000000
  .word 0x00121080
  .word 0x02021021
  .word 0x8c421210
  .word 0x30420001
  .word 0x10400056
  .word 0x00000000
  .word 0x3c02c34c
  .word 0x44821000
  .word 0x3c02437f
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602b05c
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
  .word 0xa3a300cc
  .word 0x3c02c214
  .word 0x44821000
  .word 0x3c0242f0
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602b05c
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
  .word 0xa3a300cd
  .word 0x3c02c2aa
  .word 0x44821000
  .word 0x3c02432f
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602b05c
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
  .word 0xa3a300ce
  .word 0x3c023f80
  .word 0x44820800
  .word 0x10000008
  .word 0x00000000
  .word 0x24020073
  .word 0xa3a200cc
  .word 0x24020074
  .word 0xa3a200cd
  .word 0xa3a200ce
  .word 0x3c023f80
  .word 0x44820800
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46150002
  .word 0x46190002
  .word 0x46000802
  .word 0x4600c042
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
  .word 0xa3a300cf
  .word 0x00121200
  .word 0x02028821
  .word 0x26240b10
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200cc
  .word 0xa3a200cd
  .word 0xa3a200ce
  .word 0x4615a002
  .word 0x4600b002
  .word 0x4600c042
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
  .word 0xa3a300cf
  .word 0x26240410
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x10000050
  .word 0x00000000
  .word 0x00121080
  .word 0x02021021
  .word 0x8c421210
  .word 0x30420001
  .word 0x1040000b
  .word 0x00000000
  .word 0x2402003c
  .word 0xa3a200cc
  .word 0x2402005e
  .word 0xa3a200cd
  .word 0x24020064
  .word 0xa3a200ce
  .word 0x3c023f80
  .word 0x44820000
  .word 0x10000008
  .word 0x00000000
  .word 0x24020073
  .word 0xa3a200cc
  .word 0x24020074
  .word 0xa3a200cd
  .word 0xa3a200ce
  .word 0x3c023f80
  .word 0x44820000
  .word 0x4600a002
  .word 0x4600c042
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
  .word 0xa3a300cf
  .word 0x00121200
  .word 0x02028821
  .word 0x26240b10
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200cc
  .word 0xa3a200cd
  .word 0xa3a200ce
  .word 0x4615a002
  .word 0x4600c042
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
  .word 0xa3a300cf
  .word 0x26240410
  .word 0x27a500cc
  .word 0x0c087654
  .word 0x00000000
  .word 0x26520001
  .word 0x2a430007
  .word 0x1460fdf6
  .word 0x00000000
  .word 0x8e04463c
  .word 0x10800013
  .word 0x00000000
  .word 0x24030004
  .word 0x1083000c
  .word 0x00000000
  .word 0x24030003
  .word 0x10830009
  .word 0x00000000
  .word 0x24030001
  .word 0x10830006
  .word 0x00000000
  .word 0x24030002
  .word 0x10830003
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x0c089974
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x8e044640
  .word 0x24030002
  .word 0x1083000a
  .word 0x00000000
  .word 0x24030001
  .word 0x10830007
  .word 0x00000000
  .word 0x24030004
  .word 0x10830004
  .word 0x00000000
  .word 0x24030003
  .word 0x14830007
  .word 0x00000000
  .word 0x8e044650
  .word 0x24030003
  .word 0x10830003
  .word 0x00000000
  .word 0x0c089974
  .word 0x00000000
  .word 0x8e04463c
  .word 0x24030003
  .word 0x10830003
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x8e044644
  .word 0x1080000a
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x0c089fcc
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e044648
  .word 0x24030001
  .word 0x14830007
  .word 0x00000000
  .word 0x8e044658
  .word 0x24030006
  .word 0x10830003
  .word 0x00000000
  .word 0x0c089fcc
  .word 0x00000000
  .word 0x8e04463c
  .word 0x24030001
  .word 0x10830006
  .word 0x00000000
  .word 0x24030002
  .word 0x10830003
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x8e044644
  .word 0x24030004
  .word 0x10830008
  .word 0x00000000
  .word 0x24030003
  .word 0x10830005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0c08b0b4
  .word 0x00000000
  .word 0x8e05463c
  .word 0x24040002
  .word 0x10a4000a
  .word 0x00000000
  .word 0x14a0000c
  .word 0x00000000
  .word 0x8e034640
  .word 0x14640009
  .word 0x00000000
  .word 0x8e034650
  .word 0x28610003
  .word 0x10200005
  .word 0x00000000
  .word 0x0c08a390
  .word 0x00000000
  .word 0x1000002f
  .word 0x00000000
  .word 0x24040001
  .word 0x10a4000a
  .word 0x00000000
  .word 0x14a0000c
  .word 0x00000000
  .word 0x8e034640
  .word 0x14640009
  .word 0x00000000
  .word 0x8e034650
  .word 0x28610003
  .word 0x10200005
  .word 0x00000000
  .word 0x0c08a8ac
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x24040004
  .word 0x10a4000a
  .word 0x00000000
  .word 0x14a0000c
  .word 0x00000000
  .word 0x8e034640
  .word 0x14640009
  .word 0x00000000
  .word 0x8e034650
  .word 0x28610003
  .word 0x10200005
  .word 0x00000000
  .word 0x0c089250
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x24040003
  .word 0x10a4000a
  .word 0x00000000
  .word 0x14a0000a
  .word 0x00000000
  .word 0x8e034640
  .word 0x14640007
  .word 0x00000000
  .word 0x8e034650
  .word 0x28610003
  .word 0x10200003
  .word 0x00000000
  .word 0x0c088ca4
  .word 0x00000000
  .word 0x8e04463c
  .word 0x24030003
  .word 0x10830003
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x8e034644
  .word 0x24050002
  .word 0x10650015
  .word 0x00000000
  .word 0x24040001
  .word 0x10640012
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x8e034648
  .word 0x10640003
  .word 0x00000000
  .word 0x1465000b
  .word 0x00000000
  .word 0x8e034658
  .word 0x28610006
  .word 0x10200007
  .word 0x00000000
  .word 0x0c0895fc
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0c0895fc
  .word 0x00000000
  .word 0xdfbf0080
  .word 0x7bb40070
  .word 0x7bb30060
  .word 0x7bb20050
  .word 0x7bb10040
  .word 0x7bb00030
  .word 0xc7bf002c
  .word 0xc7be0028
  .word 0xc7bd0024
  .word 0xc7bc0020
  .word 0xc7bb001c
  .word 0xc7ba0018
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00221b60
void func_00221b60(void)
{
    u8* work;
    void* texture;
    s32 mask;
    void* currentFrame;
    void* previousFrame;
    void* frame;
    void (**setState)(u32, u32);
    u32 mode;
    u32 sub;
    u32 previousSub;
    u32 timer;
    u32 i;

    K_ASSERT(BP_PANEL_GLOBAL != NULL, 0xe6);
    work = BP_PANEL_GLOBAL;
    texture = func_0021c3f0(0);
    K_ASSERT((*(u32*)work & 1) != 0, 0x47b);

    mask = 0;
    setState = (void (**)(u32, u32))D_00960090_abs;
    (*setState)(9, 2);
    (*setState)(0x14, 2);
    (*setState)(8, 0);
    (*setState)(6, 1);
    (*setState)(0x0e, 0);
    (*setState)(0x0c, 1);
    func_0022bcf0();

    {
        void (**setQuad)(u32*, u32, u32, u32, u32);

        frame = func_0021cca0(texture, 0x10);
        (*setState)(1, func_0021cce0(frame));
        RpSkyRenderStateSet(3, (void*)0x717fb);
        RpSkyRenderStateSet(2, (void*)0x44);
        setQuad = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
        (*setQuad)((u32*)(work + 0x10), 4, 0, 1, 2);
        (*setQuad)((u32*)(work + 0x10), 4, 0, 2, 3);

        frame = func_0021cca0(texture, 0x1b);
        (*setState)(1, func_0021cce0(frame));
        RpSkyRenderStateSet(3, (void*)0x717fb);
        RpSkyRenderStateSet(2, (void*)0x44);
        (*setQuad)((u32*)(work + 0x110), 4, 0, 1, 2);
        (*setQuad)((u32*)(work + 0x110), 4, 0, 2, 3);

        frame = func_0021cca0(texture, 0x1c);
        (*setState)(1, func_0021cce0(frame));
        RpSkyRenderStateSet(3, (void*)0x717fb);
        RpSkyRenderStateSet(2, (void*)0x44);
        (*setQuad)((u32*)(work + 0x210), 4, 0, 1, 2);
        (*setQuad)((u32*)(work + 0x210), 4, 0, 2, 3);

        frame = func_0021cca0(texture, 0x22);
        (*setState)(1, func_0021cce0(frame));
        RpSkyRenderStateSet(3, (void*)0x717fb);
        RpSkyRenderStateSet(2, (void*)0x44);
        (*setQuad)((u32*)(work + 0x1430), 4, 0, 1, 2);
        (*setQuad)((u32*)(work + 0x1430), 4, 0, 2, 3);
    }

    mode = *(u32*)(work + 0x4630);
    switch (mode)
    {
    case 1:
    case 2:
        frame = texture;
        currentFrame = func_0021cca0(frame, *(s32*)(work + 0x4634));
        previousFrame = func_0021cca0(texture, *(s32*)(work + 0x4638));
        mask |= 1;
        if (*(u32*)(work + 0x464c) != 4)
        {
            mask |= 2;
        }
        break;
    case 3:
        currentFrame = func_0021cca0(texture, *(s32*)(work + 0x4634));
        previousFrame = func_0021cca0(texture, (s32)*(u32*)(work + 0x4634) + 7);
        sub = *(u32*)(work + 0x463c);
        switch (sub)
        {
        case 0:
            mask |= 1;
            if (*(u32*)(work + 0x4650) != 3)
            {
                mask |= 2;
            }
            break;
        case 1:
        case 2:
        case 3:
        case 4:
            mask |= 2;
            if (*(u32*)(work + 0x4650) != 3)
            {
                mask |= 1;
            }
            break;
        }
        break;
    default:
        sub = *(u32*)(work + 0x463c);
        switch (sub)
        {
        case 0:
            currentFrame = func_0021cca0(texture, *(s32*)(work + 0x4634));
            mask |= 1;
            break;
        case 1:
        case 2:
        case 3:
        case 4:
            previousFrame = func_0021cca0(texture, (s32)*(u32*)(work + 0x4634) + 7);
            mask |= 2;
            break;
        }
        break;
    }

    if ((mask & 1) != 0)
    {
        void (**setQuad)(u32*, u32, u32, u32, u32);

        (*setState)(1, func_0021cce0(currentFrame));
        RpSkyRenderStateSet(3, (void*)0x717fb);
        RpSkyRenderStateSet(2, (void*)0x44);
        setQuad = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
        (*setQuad)((u32*)(work + 0x1230), 4, 0, 1, 2);
        (*setQuad)((u32*)(work + 0x1230), 4, 0, 2, 3);
    }
    if ((mask & 2) != 0)
    {
        void (**setQuad)(u32*, u32, u32, u32, u32);

        (*setState)(1, func_0021cce0(previousFrame));
        RpSkyRenderStateSet(3, (void*)0x717fb);
        RpSkyRenderStateSet(2, (void*)0x44);
        setQuad = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
        (*setQuad)((u32*)(work + 0x1330), 4, 0, 1, 2);
        (*setQuad)((u32*)(work + 0x1330), 4, 0, 2, 3);
    }
    if ((~*(u32*)work & 0x10) != 0)
    {
        void (**setQuad)(u32*, u32, u32, u32, u32);

        frame = func_0021cca0(texture, 0x0e);
        (*setState)(1, func_0021cce0(frame));
        RpSkyRenderStateSet(3, (void*)0x717fb);
        RpSkyRenderStateSet(2, (void*)0x44);
        setQuad = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
        (*setQuad)((u32*)(work + 0x310), 4, 0, 1, 2);
        (*setQuad)((u32*)(work + 0x310), 4, 0, 2, 3);
    }

    RpSkyRenderStateSet(3, (void*)0x717fb);
    RpSkyRenderStateSet(2, (void*)0x44);
    {
        void (**setQuad)(u32*, u32, u32, u32, u32);
        u32* destination;

        for (mask = 0; mask < 7; mask++)
        {
            if ((*(u32*)(work + 0x1210 + mask * 4) & 1) != 0)
            {
                frame = func_0021cca0(texture, 0x11);
            }
            else
            {
                frame = func_0021cca0(texture, 0x41);
            }
            (*setState)(1, func_0021cce0(frame));
            destination = (u32*)(work + 0x410 + mask * 0x100);
            setQuad = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
            (*setQuad)(destination, 4, 0, 1, 2);
            (*setQuad)(destination, 4, 0, 2, 3);
        }
    }
    {
        void (**setQuad)(u32*, u32, u32, u32, u32);
        u32* destination;
        s32 j;

        for (j = 0; j < 7; j++)
        {
            frame = func_0021cca0(texture, (s32)(j + 0x14));
            (*setState)(1, func_0021cce0(frame));
            RpSkyRenderStateSet(3, (void*)0x717fb);
            RpSkyRenderStateSet(2, (void*)0x44);
            destination = (u32*)(work + 0xb10 + j * 0x100);
            setQuad = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
            (*setQuad)(destination, 4, 0, 1, 2);
            (*setQuad)(destination, 4, 0, 2, 3);
        }
    }

    sub = *(u32*)(work + 0x463c);
    switch (sub)
    {
    case 3:
    case 4:
        goto bpTexSubOuterBody;
    case 0:
        goto bpTexSubPreviousPath;
    }
    goto bpTexSubAfter;
bpTexSubOuterBody:
    func_00227800();
    goto bpTexSubAfter;
bpTexSubPreviousPath:
    previousSub = *(u32*)(work + 0x4640);
    if (previousSub == 4)
    {
        goto bpTexSubTimerPath;
    }
    if (previousSub != 3)
    {
        goto bpTexSubAfter;
    }
bpTexSubTimerPath:
    if (*(u32*)(work + 0x4650) == 3)
    {
        goto bpTexSubAfter;
    }
    func_00227800();
bpTexSubAfter:

    sub = *(u32*)(work + 0x463c);
    if (sub == 2 ||
        (sub == 0 && *(u32*)(work + 0x4640) == 2 &&
         *(s32*)(work + 0x4650) < 3))
    {
        switch (*(u32*)(work + 0x4644))
        {
        case 0:
            func_00227800();
            break;
        case 3:
            func_0022c5a0();
            break;
        }
        func_00229b40();
    }
    else if (sub == 1 ||
             (sub == 0 && *(u32*)(work + 0x4640) == 1 &&
              *(s32*)(work + 0x4650) < 3))
    {
        switch (*(u32*)(work + 0x4644))
        {
        case 0:
            func_00227800();
            break;
        case 4:
            func_0022c5a0();
            break;
        }
        func_0022ae80();
    }
    else if (sub == 4 ||
             (sub == 0 && *(u32*)(work + 0x4640) == 4 &&
              *(s32*)(work + 0x4650) < 3))
    {
        func_00225040();
    }

    sub = *(u32*)(work + 0x463c);
    switch (sub)
    {
    case 3:
        goto bpTexSub3Body;
    }
    if (sub != 0)
    {
        goto bpTexSub3After;
    }
    previousSub = *(u32*)(work + 0x4640);
    if (previousSub != 3)
    {
        goto bpTexSub3After;
    }
    if (*(s32*)(work + 0x4650) >= 3)
    {
        goto bpTexSub3After;
    }
bpTexSub3Body:
    func_00224150();
bpTexSub3After:

    sub = *(u32*)(work + 0x463c);
    switch (sub)
    {
    case 3:
        goto bpTexMode3FrameBody;
    }
    goto bpTexMode3FrameAfter;
bpTexMode3FrameBody:
    switch (*(u32*)(work + 0x4644))
    {
    case 1:
        func_002289b0();
        break;
    case 0:
        if (*(u32*)(work + 0x4648) == 1 &&
            *(u32*)(work + 0x4658) != 6)
        {
            func_002289b0();
        }
        break;
    }
bpTexMode3FrameAfter:

    sub = *(u32*)(work + 0x463c);
    switch (sub)
    {
    case 3:
        goto bpTexFinalSub3;
    default:
        goto bpTexFinalAfter;
    }
bpTexFinalSub3:
    switch (*(u32*)(work + 0x4644))
    {
    case 0:
        goto bpTexFinalFrame0;
    case 1:
    case 2:
        goto bpTexFinalFrame12;
    default:
        goto bpTexFinalAfter;
    }
bpTexFinalFrame0:
    if (*(u32*)(work + 0x4648) != 1 &&
        *(u32*)(work + 0x4648) != 2)
    {
        goto bpTexFinalAfter;
    }
    if (*(s32*)(work + 0x4658) >= 6)
    {
        goto bpTexFinalAfter;
    }
    func_00226040();
    goto bpTexFinalAfter;
bpTexFinalFrame12:
    func_00226040();
bpTexFinalAfter:
    return;
}

// FUN_002226f0
void bcmPanel002226f0(u32 param_1)
{
    int iVar1;
    u32 uVar2;
    u32 uVar3;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    iVar1 = (int)sBcmPanel;
    uVar2 = FUN_0021c3f0(0);
    *(u32*)(iVar1 + 0x4630) = 1;
    *(u32*)(iVar1 + 0x4638) = *(u32*)(iVar1 + 0x4634);
    *(u32*)(iVar1 + 0x4634) = param_1;
    *(u32*)(iVar1 + 0x464c) = 0;
    uVar3 = FUN_0021cca0(uVar2, *(u32*)(iVar1 + 0x4634));
    FUN_0021d3b0(iVar1 + 0x1230, uVar3);
    uVar3 = FUN_0021cca0(uVar2, *(u32*)(iVar1 + 0x4638));
    FUN_0021d3b0(iVar1 + 0x1330, uVar3);
}
/*
 * The command panel stores all of its render records in one work area.  The
 * retail code uses the records as packed byte arrays; keeping the addressing
 * in these small helpers makes the state-machine routines below considerably
 * easier to audit than a collection of magic pointer casts.
 */









/* Removing this loses FUN_002230e0 (MATCH nd0 -> MISMATCH nd19) - measured W302. */



// FUN_002227b0
void bcmPanel002227b0(u32 param_1)
{
    int iVar1;
    u32 uVar2;
    u32 uVar3;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    iVar1 = (int)sBcmPanel;
    uVar2 = FUN_0021c3f0(0);
    *(u32*)(iVar1 + 0x4630) = 2;
    *(u32*)(iVar1 + 0x4638) = *(u32*)(iVar1 + 0x4634);
    *(u32*)(iVar1 + 0x4634) = param_1;
    *(u32*)(iVar1 + 0x464c) = 0;
    uVar3 = FUN_0021cca0(uVar2, *(u32*)(iVar1 + 0x4634));
    FUN_0021d3b0(iVar1 + 0x1230, uVar3);
    uVar3 = FUN_0021cca0(uVar2, *(u32*)(iVar1 + 0x4638));
    FUN_0021d3b0(iVar1 + 0x1330, uVar3);
}

// FUN_00222870
void bcmPanel00222870(void)
{
    int iVar1;
    u32 uVar2;
    u32 uVar3;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    iVar1 = (int)sBcmPanel;
    uVar2 = FUN_0021c3f0(0);
    *(u32*)(iVar1 + 0x4630) = 8;
    *(u32*)(iVar1 + 0x4638) = *(u32*)(iVar1 + 0x4634);
    *(u32*)(iVar1 + 0x4634) = 0;
    *(u32*)(iVar1 + 0x464c) = 0;
    uVar3 = FUN_0021cca0(uVar2, *(u32*)(iVar1 + 0x4634));
    FUN_0021d3b0(iVar1 + 0x1230, uVar3);
    uVar3 = FUN_0021cca0(uVar2, *(u32*)(iVar1 + 0x4638));
    FUN_0021d3b0(iVar1 + 0x1330, uVar3);
}

// FUN_00222930
void bcmPanel00222930(void)
{
    u32* puVar1;
    u32 uVar2;
    u32 uVar3;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    puVar1 = sBcmPanel;
    uVar2 = FUN_0021c3f0(0);
    *puVar1 |= 2;
    puVar1[1] = 0;
    puVar1[1] |= 1;
    puVar1[0x118c] = 3;
    puVar1[0x1190] = puVar1[0x118f];
    puVar1[0x118f] = 1;
    puVar1[0x1194] = 0;
    puVar1[0x1191] = 0;
    uVar3 = FUN_0021cca0(uVar2, puVar1[0x118d]);
    FUN_0021d3b0(puVar1 + 0x48c, uVar3);
    uVar3 = FUN_0021cca0(uVar2, puVar1[0x118d] + 7);
    FUN_0021d3b0(puVar1 + 0x4cc, uVar3);
    FUN_00226320();
    uVar3 = FUN_0021cca0(uVar2, 0x23);
    FUN_0021d3b0(puVar1 + 0x108c, uVar3);
    uVar3 = FUN_0021cca0(uVar2, 0x23);
    FUN_0021e380(puVar1 + 0x10cc, uVar3, 1);
    FUN_00222d60();
}
// FUN_00222a60
void bcmPanel00222a60(void)
{
    u32* puVar1;
    u32 uVar2;
    u32 uVar3;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    puVar1 = sBcmPanel;
    uVar2 = FUN_0021c3f0(0);
    *puVar1 |= 2;
    puVar1[1] = 0;
    puVar1[1] |= 2;
    puVar1[0x118c] = 3;
    puVar1[0x1190] = puVar1[0x118f];
    puVar1[0x118f] = 2;
    puVar1[0x1194] = 0;
    puVar1[0x1191] = 0;
    uVar3 = FUN_0021cca0(uVar2, puVar1[0x118d]);
    FUN_0021d3b0(puVar1 + 0x48c, uVar3);
    uVar3 = FUN_0021cca0(uVar2, puVar1[0x118d] + 7);
    FUN_0021d3b0(puVar1 + 0x4cc, uVar3);
    FUN_00226320();
    uVar3 = FUN_0021cca0(uVar2, 0x23);
    FUN_0021d3b0(puVar1 + 0x108c, uVar3);
    uVar3 = FUN_0021cca0(uVar2, 0x23);
    FUN_0021e380(puVar1 + 0x10cc, uVar3, 1);
    FUN_00222b90();
}

// Previous body was a wrong-helper stub unrelated to retail (1296B window).
// Rewritten from disasm: retail dispatches per-record state via a switch
// (case 0/2 shared, case 1 loops 4 quad slots), using the same
// D_00960090_abs/D_0096009C_abs vtable style as this file's other draw
// functions. Key finding: D_0096009C_abs must be re-cast to a fresh local
// inside both the state==1 loop and the case 0/2 body, matching retail's
// W389 measured first-use swap (slot0 before records): nd11/1292B -> nd16/1292B
// (window 1296B), reverted. Residual is the 2-variable register-bank swap
// (slot0/setQuad), unfixable per the declaration/statement-order floor.
// FUN_00222b90
void FUN_00222b90(void)
{
    u32 table0;
    u32 resource;
    s32 i;
    u32 table6;
    u32 state;
    u8* record;
    u8* records;
    u8* work;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    work = (u8*)sBcmPanel;
    table0 = FUN_0021c3f0(0);
    records = work + 0x4660;
    table6 = FUN_0021c3f0(6);
    K_ASSERT((*(u32*)(work + 4) & 2) != 0, 0x60d);
    i = 0;
    while (i < *(s32*)(work + 0x6070)) {
        record = records + i * 0x510;
        state = *(u32*)(record + 8);
        switch (state) {
        case 0:
            resource = FUN_0021cca0(table0, 0x30);
            break;
        case 1:
            resource = FUN_0021cca0(table0, 0x31);
            break;
        }
        FUN_0021d3b0(record + 0x10, resource);
        FUN_00238980(record + 0x110, 3, *(u32*)(record + 0xc), 1);
        resource = FUN_0021cca0(table6, 0x2b);
        FUN_0021d3b0(record + 0x410, resource);
        i++;
    }
    if (*(u32*)(work + 0x68f8) != 0) {
        resource = FUN_0021cca0(table6, *(u32*)(work + 0x68f4) + 0x20);
        FUN_0021d3b0(work + 0x6900, resource);
    }
}

// FUN_00222d60
void FUN_00222d60(void)
{
    u32 table0;
    u32 table6;
    s32 i;
    u8* work;
    u8* records;
    u8* record;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    work = (u8*)sBcmPanel;
    table0 = FUN_0021c3f0(0);
    table6 = FUN_0021c3f0(6);
    records = work + 0x4660;
    K_ASSERT((*(u32*)(work + 4) & 1) != 0, 0x63c);
    i = 0;
    while (i < *(s32*)(work + 0x6070)) {
        record = records + i * 0x410;
        FUN_0021d3b0(record + 0x10, FUN_0021cca0(table0, 0x28));
        FUN_00238980(record + 0x110, 2, *(u32*)(record + 4), 1);
        FUN_0021d3b0(record + 0x310, FUN_0021cca0(table6, 0x1a));
        i++;
    }
    if (*(u32*)(work + 0x68f8) != 0) {
        FUN_0021d3b0(work + 0x6900,
                     FUN_0021cca0(table6, *(u32*)(work + 0x68f4) + 0x20));
    }
}

// FUN_00222ed0
void bcmPanel00222ed0(void)
{
    u32* puVar1;
    u32 uVar2;
    u32 uVar3;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    puVar1 = sBcmPanel;
    uVar2 = FUN_0021c3f0(0);
    *puVar1 |= 2;
    puVar1[0x118c] = 3;
    puVar1[0x1190] = puVar1[0x118f];
    puVar1[0x118f] = 0;
    puVar1[0x1194] = 0;
    uVar3 = FUN_0021cca0(uVar2, puVar1[0x118d]);
    FUN_0021d3b0(puVar1 + 0x48c, uVar3);
    uVar3 = FUN_0021cca0(uVar2, puVar1[0x118d] + 7);
    FUN_0021d3b0(puVar1 + 0x4cc, uVar3);
}

/* W389 measured opt_dead_assignments off: nd1212/1760B -> nd1211/1748B (window 1792B). */
// FUN_00222fa0
void bcmPanel00222fa0(void)
{
    u32* puVar1;
    u32 uVar2;
    u32 uVar3;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    puVar1 = sBcmPanel;
    uVar2 = FUN_0021c3f0(0);
    *puVar1 |= 2;
    puVar1[1] = 0;
    puVar1[1] |= 4;
    puVar1[0x118c] = 3;
    puVar1[0x1190] = puVar1[0x118f];
    puVar1[0x118f] = 3;
    puVar1[0x1191] = 0;
    puVar1[0x1192] = 0xffffffff;
    puVar1[0x1194] = 0;
    puVar1[0x1196] = 0;
    uVar3 = FUN_0021cca0(uVar2, puVar1[0x118d]);
    FUN_0021d3b0(puVar1 + 0x48c, uVar3);
    uVar3 = FUN_0021cca0(uVar2, puVar1[0x118d] + 7);
    FUN_0021d3b0(puVar1 + 0x4cc, uVar3);
    FUN_00226320();
    uVar3 = FUN_0021cca0(uVar2, 0x24);
    FUN_0021d3b0(puVar1 + 0x108c, uVar3);
    uVar3 = FUN_0021cca0(uVar2, 0x24);
    FUN_0021e380(puVar1 + 0x10cc, uVar3, 1);
    FUN_002230e0();
}

// Previous body was a wrong-helper stub unrelated to retail (1120B window).
// Rewritten from disasm: retail draws each record's icon then 2 status
// quads (state==1 draws 4), then a table3 and table1 resource pair,
// using the same D_00960090_abs/D_0096009C_abs vtable style as this
// file's other draw functions; table3 is stack-spilled (not register-
// resident) since it's needed after many intervening calls.
// nd 153->705 raw obj-growth artifact (obj 1104B/1120B, was 248B wrong
// stub); content-diff (register-agnostic) confirms 100% correct call
// sequence/offsets/constants. Residual is that MWCC does not allocate a
// persistent register to the D_00960090_abs/D_0096009C_abs casts at any
// of the 4 sites here (recomputes transiently in $v0 instead), unlike
// the otherwise-identical pattern in FUN_00224150 above - 6 declaration/
// statement-reorder attempts confirmed this is unfixable from C source.
// FUN_002230e0
/* W357 measured FUN_002230e0: optimization_level 1 nd19/432B -> nd0/432B. */
#pragma optimization_level 1
void FUN_002230e0(void)
{
    s32 j;
    u8* work;
    u8* records;
    u8* record;
    u32 table0;
    s32 i;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    work = (u8*)sBcmPanel;
    table0 = FUN_0021c3f0(0);
    records = work + 0x4660;
    K_ASSERT((*(u32*)(work + 4) & 4) != 0, 0x699);
    i = 0;
    while (i < *(s32*)(work + 0x6070)) {
        record = records + i * 0x420;
        switch (*(u32*)record) {
        case 0:
        case 2:
            FUN_0021d3b0(record + 0x10,
                         FUN_0021cca0(table0, 0x2f));
            break;
        case 1:
            j = 0;
            while (j < 2) {
                FUN_0021d3b0(record + 0x10 + (j << 8),
                             FUN_0021cca0(table0, 0x29));
                j++;
            }
            j = 2;
            while (j < 4) {
                FUN_0021d3b0(record + 0x10 + (j << 8),
                             FUN_0021cca0(table0, 0x2a));
                j++;
            }
            break;
        }
        i++;
    }
}

#pragma optimization_level 2

/* W357 measured FUN_00223290: opt_propagation off nd2166/3392B -> nd2127/3224B,
 * window 3776B. W419 coordinate-store recovery: nd2127/3224B ->
 * nd2128/3240B, window 3776B, rate 0.659739 -> 0.656790. Moving
 * coordinates plus colours before the frame call was rejected: nd2148/3268B,
 * window 3776B, rate 0.657895. */
#pragma opt_propagation off
/* W420 selector-kind declaration reorder: nd2128/3240B, window 3776B, rate
 * 0.656790 -> nd2144/3224B, rate 0.665012; reverted. */
/* W421 reconstruction probes (all reverted): colour[4] nd2129/3240B,
 * rate 0.657099; duplicated selector path nd2525/3720B, rate 0.678763;
 * common-render rewrite nd2426/3564B, rate 0.680696; signed selector
 * index nd2286/3388B, rate 0.674734; selector case-body reorder
 * nd2289/3372B, rate 0.678826; selector reload expressions
 * nd2317/3388B, rate 0.683884. Baseline retained at nd2128/3240B,
 * window 3776B, rate 0.656790. */
// FUN_00223290
#ifndef PC_BUILD
asm void FUN_00223290(void)
{
  .set noreorder
  .word 0x27bdfeb0
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
  .word 0x8f82b618
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x240500e6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f93b618
  .word 0x0000202d
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040b82d
  .word 0x26724660
  .word 0xc6747214
  .word 0x8e63463c
  .word 0x1060003b
  .word 0x00000000
  .word 0x24020003
  .word 0x10620003
  .word 0x00000000
  .word 0x10000040
  .word 0x00000000
  .word 0x8e624644
  .word 0x24040002
  .word 0x10440028
  .word 0x00000000
  .word 0x24030001
  .word 0x10430025
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x1000003a
  .word 0x00000000
  .word 0x8e624648
  .word 0x10430003
  .word 0x00000000
  .word 0x14440011
  .word 0x00000000
  .word 0x8e624658
  .word 0x28410006
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0xc6604650
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x8e624658
  .word 0x24030006
  .word 0x00621023
  .word 0x0043001a
  .word 0x00001012
  .word 0x44820000
  .word 0x00000000
  .word 0x46800560
  .word 0x10000010
  .word 0x00000000
  .word 0x8e624650
  .word 0x24030003
  .word 0x00621023
  .word 0x0043001a
  .word 0x00001012
  .word 0x44820000
  .word 0x00000000
  .word 0x46800560
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x240506e5
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46150002
  .word 0x46140002
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x305600ff
  .word 0x26716050
  .word 0x02e0202d
  .word 0x24050024
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c03423c
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a00130
  .word 0x8e646068
  .word 0x8e63606c
  .word 0x00832023
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0x00031840
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0xc6210004
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020000
  .word 0xe7a00134
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00138
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0013c
  .word 0x26644230
  .word 0x27a50130
  .word 0x0c087638
  .word 0x00000000
  .word 0x02e0202d
  .word 0x24050024
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c03423c
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000840
  .word 0xc440000c
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a00130
  .word 0x8e646068
  .word 0x8e63606c
  .word 0x00832023
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0x00031840
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0xc6210004
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020000
  .word 0xe7a00134
  .word 0x3c03439c
  .word 0xafa30138
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0013c
  .word 0x26644330
  .word 0x27a50130
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2014c
  .word 0xa3a2014d
  .word 0xa3a2014e
  .word 0xa3b6014f
  .word 0x26644230
  .word 0x27a5014c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26644330
  .word 0x27a5014c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8e640000
  .word 0x2403fffb
  .word 0x00831824
  .word 0xae630000
  .word 0x8e64463c
  .word 0x24030003
  .word 0x10830003
  .word 0x00000000
  .word 0x100000ec
  .word 0x00000000
  .word 0x8e634644
  .word 0x24050002
  .word 0x10650082
  .word 0x00000000
  .word 0x24040001
  .word 0x1064007f
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000e1
  .word 0x00000000
  .word 0x8e634648
  .word 0x10640003
  .word 0x00000000
  .word 0x146500dc
  .word 0x00000000
  .word 0x8e634658
  .word 0x28610006
  .word 0x102000d8
  .word 0x00000000
  .word 0x8e630004
  .word 0x30630004
  .word 0x14600006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x24050711
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x32c400ff
  .word 0x2405ff00
  .word 0x00851825
  .word 0xae4318c4
  .word 0x240300ff
  .word 0x00642023
  .word 0x3c03ff9d
  .word 0x34639d00
  .word 0x00831825
  .word 0xae4318c8
  .word 0x00851825
  .word 0xae4318cc
  .word 0x8e4418c0
  .word 0x00041940
  .word 0x00641821
  .word 0x00031940
  .word 0x02432821
  .word 0x8ca40000
  .word 0x24030001
  .word 0x1083001f
  .word 0x00000000
  .word 0x24030002
  .word 0x10830005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000003d
  .word 0x00000000
  .word 0x3c03424c
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe64018d0
  .word 0xc6210004
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0x8e4418c0
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0x00031840
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe64018d4
  .word 0x10000026
  .word 0x00000000
  .word 0x8ca40008
  .word 0x0c0ec674
  .word 0x00000000
  .word 0x00021843
  .word 0x04410003
  .word 0x00000000
  .word 0x24430001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0x3c0342e0
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000840
  .word 0x3c03428d
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020001
  .word 0xe64018d0
  .word 0xc6210004
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0x8e4418c0
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0x00031840
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe64018d4
  .word 0x3c03432b
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe64018d8
  .word 0xc6210004
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0xe64018dc
  .word 0x8e630000
  .word 0x34630004
  .word 0xae630000
  .word 0x10000067
  .word 0x00000000
  .word 0x32c400ff
  .word 0x2405ff00
  .word 0x00851825
  .word 0xae4318c4
  .word 0x240300ff
  .word 0x00642023
  .word 0x3c03ff9d
  .word 0x34639d00
  .word 0x00831825
  .word 0xae4318c8
  .word 0x00851825
  .word 0xae4318cc
  .word 0x8e4418c0
  .word 0x00041940
  .word 0x00641821
  .word 0x00031940
  .word 0x02432821
  .word 0x8ca40000
  .word 0x24030001
  .word 0x1083001f
  .word 0x00000000
  .word 0x24030002
  .word 0x10830005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000003d
  .word 0x00000000
  .word 0x3c03424c
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe64018d0
  .word 0xc6210004
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0x8e4418c0
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0x00031840
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe64018d4
  .word 0x10000026
  .word 0x00000000
  .word 0x8ca40008
  .word 0x0c0ec674
  .word 0x00000000
  .word 0x00021843
  .word 0x04410003
  .word 0x00000000
  .word 0x24430001
  .word 0x00031843
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0x3c0342e0
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000840
  .word 0x3c03428d
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020001
  .word 0xe64018d0
  .word 0xc6210004
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0x8e4418c0
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0x00031840
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe64018d4
  .word 0x3c03432b
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe64018d8
  .word 0xc6210004
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0xe64018dc
  .word 0x8e630000
  .word 0x34630004
  .word 0xae630000
  .word 0x8e630000
  .word 0x30630004
  .word 0x1060002a
  .word 0x00000000
  .word 0x02e0202d
  .word 0x2405002f
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x264418f0
  .word 0x0200282d
  .word 0x0c0874ec
  .word 0x00000000
  .word 0x3c024332
  .word 0x44820800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a00130
  .word 0xc6210004
  .word 0x3c02425c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00134
  .word 0xc600000c
  .word 0x46800020
  .word 0xe7a00138
  .word 0xc6000010
  .word 0x46800020
  .word 0xe7a0013c
  .word 0x264418f0
  .word 0x27a50130
  .word 0x0c087638
  .word 0x00000000
  .word 0x240300ff
  .word 0xa3a3014c
  .word 0xa3a3014d
  .word 0xa3a3014e
  .word 0x32c200ff
  .word 0x00621023
  .word 0xa3a2014f
  .word 0x264418f0
  .word 0x27a5014c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0000a82d
  .word 0x32c500ff
  .word 0x2403ff00
  .word 0x00a31825
  .word 0xafa30120
  .word 0x3c03beff
  .word 0x3463d200
  .word 0x00a31825
  .word 0xafa30110
  .word 0x000521c0
  .word 0x240300ff
  .word 0x0083001a
  .word 0x00001812
  .word 0x7fa300e0
  .word 0x3c03cccc
  .word 0x3463cc00
  .word 0x00a31825
  .word 0xafa30100
  .word 0x3c0364cc
  .word 0x34636400
  .word 0x00a31825
  .word 0xafa300f0
  .word 0x10000197
  .word 0x00000000
  .word 0x00151940
  .word 0x00751821
  .word 0x00031940
  .word 0x02438021
  .word 0x8e040000
  .word 0x24030001
  .word 0x108300c6
  .word 0x00000000
  .word 0x24030002
  .word 0x10830005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000187
  .word 0x00000000
  .word 0x8e1e0008
  .word 0x3c02424c
  .word 0x44820800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a00130
  .word 0x00151040
  .word 0x00551021
  .word 0x00021080
  .word 0x00551021
  .word 0x00021840
  .word 0xc6210004
  .word 0x3c024198
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a00134
  .word 0x8e636068
  .word 0x8e62606c
  .word 0x00621023
  .word 0x16a20024
  .word 0x00000000
  .word 0x8e020410
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e030000
  .word 0x24020002
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000003a
  .word 0x00000000
  .word 0x8fb40120
  .word 0x10000037
  .word 0x00000000
  .word 0x8fb40110
  .word 0x10000034
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2014c
  .word 0xa3a2014d
  .word 0xa3a2014e
  .word 0x7ba200e0
  .word 0xa3a2014f
  .word 0x93a2014c
  .word 0x00021e00
  .word 0x93a2014d
  .word 0x00021400
  .word 0x00621825
  .word 0x93a2014e
  .word 0x00021200
  .word 0x00431825
  .word 0x93a2014f
  .word 0x0043a025
  .word 0x10000022
  .word 0x00000000
  .word 0x8e020410
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e030000
  .word 0x24020002
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x8fb40100
  .word 0x10000014
  .word 0x00000000
  .word 0x8fb400f0
  .word 0x10000011
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2014c
  .word 0xa3a2014d
  .word 0xa3a2014e
  .word 0x7ba200e0
  .word 0xa3a2014f
  .word 0x93a2014c
  .word 0x00021e00
  .word 0x93a2014d
  .word 0x00021400
  .word 0x00621825
  .word 0x93a2014e
  .word 0x00021200
  .word 0x00431825
  .word 0x93a2014f
  .word 0x0043a025
  .word 0xc7a00130
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00022900
  .word 0xc7a00134
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x000230c0
  .word 0x03c0202d
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x03c0202d
  .word 0x0280282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x8e1e000c
  .word 0x3c024336
  .word 0x44820800
  .word 0xc6200000
  .word 0x46000880
  .word 0xe7a20130
  .word 0x00151040
  .word 0x00551021
  .word 0x00021080
  .word 0x00551021
  .word 0x00021040
  .word 0x7fa200d0
  .word 0xc6210004
  .word 0x3c024198
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x7ba200d0
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000840
  .word 0xe7a10134
  .word 0x46001024
  .word 0x44020000
  .word 0x00000000
  .word 0x00022900
  .word 0x46000824
  .word 0x44020000
  .word 0x00000000
  .word 0x000230c0
  .word 0x03c0202d
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x03c0202d
  .word 0x0280282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x02e0202d
  .word 0x2405002f
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c03432b
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a00130
  .word 0xc6210004
  .word 0x3c0341e0
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0x7ba300d0
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a00134
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00138
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0013c
  .word 0x26040010
  .word 0x27a50130
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2014c
  .word 0xa3a2014d
  .word 0xa3a2014e
  .word 0xa3b6014f
  .word 0x26040010
  .word 0x27a5014c
  .word 0x0c087654
  .word 0x00000000
  .word 0x100000c9
  .word 0x00000000
  .word 0x8e1e0008
  .word 0x03c0202d
  .word 0x0c0ec674
  .word 0x00000000
  .word 0x00021843
  .word 0x04410003
  .word 0x00000000
  .word 0x24420001
  .word 0x00021843
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0x3c0242e0
  .word 0x44820800
  .word 0xc6200000
  .word 0x46000840
  .word 0x3c02428d
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020001
  .word 0xe7a00130
  .word 0x00151040
  .word 0x00551021
  .word 0x00021080
  .word 0x00551021
  .word 0x00021840
  .word 0xc6210004
  .word 0x3c024198
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a00134
  .word 0x8e636068
  .word 0x8e62606c
  .word 0x00621023
  .word 0x16a20004
  .word 0x00000000
  .word 0x8fb40120
  .word 0x10000002
  .word 0x00000000
  .word 0x8fb40100
  .word 0xc7a00130
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00022900
  .word 0xc7a00134
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x000230c0
  .word 0x03c0202d
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x03c0202d
  .word 0x0280282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x02e0202d
  .word 0x24050029
  .word 0x0c087328
  .word 0x00000000
  .word 0x7fa200c0
  .word 0x3c03429e
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a00130
  .word 0x00151840
  .word 0x00751821
  .word 0x00031880
  .word 0x00751821
  .word 0x0003f040
  .word 0xc6210004
  .word 0x3c0341e8
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0x449e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a00134
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00138
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0013c
  .word 0x26040010
  .word 0x27a50130
  .word 0x0c087638
  .word 0x00000000
  .word 0x3c0242c6
  .word 0x44820800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a00130
  .word 0xc6210004
  .word 0x3c0241e8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x449e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a00134
  .word 0x7ba200c0
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00138
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0013c
  .word 0x26040110
  .word 0x27a50130
  .word 0x0c087638
  .word 0x00000000
  .word 0x02e0202d
  .word 0x2405002a
  .word 0x0c087328
  .word 0x00000000
  .word 0x7fa200b0
  .word 0x3c03437d
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a00130
  .word 0xc6210004
  .word 0x3c0341e8
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0x449e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a00134
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00138
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0013c
  .word 0x26040210
  .word 0x27a50130
  .word 0x0c087638
  .word 0x00000000
  .word 0x24020111
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a00130
  .word 0xc6210004
  .word 0x3c0241e8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x449e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a00134
  .word 0x7ba200b0
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00138
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0013c
  .word 0x26040310
  .word 0x27a50130
  .word 0x0c087638
  .word 0x00000000
  .word 0x0000f02d
  .word 0x1000000d
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2014c
  .word 0xa3a2014d
  .word 0xa3a2014e
  .word 0xa3b6014f
  .word 0x001e1200
  .word 0x02021021
  .word 0x24440010
  .word 0x27a5014c
  .word 0x0c087654
  .word 0x00000000
  .word 0x27de0001
  .word 0x2bc30004
  .word 0x1460fff2
  .word 0x00000000
  .word 0x26b50001
  .word 0x8e636070
  .word 0x02a3182a
  .word 0x1460fe67
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
  .word 0x27bd0150
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_propagation reset

/* W414 named D_0096009C_abs alias-placement probes (top-level and secondary declaration sites) stayed nd11/1292B (window 1296B); reverted. Residual is the documented slot0/setQuad register-bank floor. */
/* W420 operand-order helper probes: nd11/1292B, window 1296B, rate 0.008514
 * -> nd23/1292B, rate 0.017802 and nd19/1292B, rate 0.014706 in the two
 * directions; both reverted. */
/* W421 row classification: offsets 100, 160, 164, 188, 220, 252, 284,
 * 468 and 500 are candidate s0/s3 colouring substitutions (for example,
 * candidate addiu $s3,$s2,0x6080 versus retail addiu $s0,$s2,0x6080,
 * and candidate lw $v0,($s0) versus retail lw $v0,($s3)); offsets 512
 * and 532 likewise select the alternate pointer register. No commutative
 * operation differs. */
// FUN_00224150
#ifndef PC_BUILD
asm void FUN_00224150(void)
{
  .set noreorder
  .word 0x27bdff60
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
  .word 0x8f82b618
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x240500e6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f92b618
  .word 0x0000202d
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040a82d
  .word 0x26514660
  .word 0x26506080
  .word 0x02a0202d
  .word 0x24050023
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c160096
  .word 0x26d60090
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c130096
  .word 0x2673009c
  .word 0x26444230
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26444230
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26444330
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26444330
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e430000
  .word 0x30630004
  .word 0x1060003f
  .word 0x00000000
  .word 0x8e2318c0
  .word 0x00031140
  .word 0x00431021
  .word 0x00021140
  .word 0x02221021
  .word 0x8c430000
  .word 0x24020001
  .word 0x1062002a
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000026
  .word 0x00000000
  .word 0x02a0202d
  .word 0x2405002f
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ec20000
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
  .word 0x262418f0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x262418f0
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e040560
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0ec4d8
  .word 0x00000000
  .word 0x8e040564
  .word 0x10800005
  .word 0x00000000
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0ec4d8
  .word 0x00000000
  .word 0x0000a02d
  .word 0x100000a4
  .word 0x00000000
  .word 0x00141940
  .word 0x00741821
  .word 0x00031940
  .word 0x02238021
  .word 0x8e040000
  .word 0x24050001
  .word 0x1085005d
  .word 0x00000000
  .word 0x24030002
  .word 0x10830005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000094
  .word 0x00000000
  .word 0x8e436068
  .word 0x8e42606c
  .word 0x00621023
  .word 0x1682000c
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
  .word 0x1000000a
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050042
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x8e040008
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0ec4d8
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
  .word 0x8e04000c
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0ec4d8
  .word 0x00000000
  .word 0x02a0202d
  .word 0x2405002f
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ec20000
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
  .word 0x3c130096
  .word 0x2673009c
  .word 0x26040010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x1000003f
  .word 0x00000000
  .word 0x8e040008
  .word 0x0000302d
  .word 0x0c0ec4d8
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000035
  .word 0x00000000
  .word 0x2a610002
  .word 0x10200007
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050029
  .word 0x0c087328
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x02a0202d
  .word 0x2405002a
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ec20000
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
  .word 0x00131200
  .word 0x02021021
  .word 0x24570010
  .word 0x3c1e0096
  .word 0x27de009c
  .word 0x02e0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8fc20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02e0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8fc20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x2a630004
  .word 0x1460ffca
  .word 0x00000000
  .word 0x26940001
  .word 0x8e436070
  .word 0x0283182a
  .word 0x1460ff5a
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
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// Previous body used bcm_panel_read/write's wrong work-relative base for
// the 0x55c/0x550 count/progress fields (should be overlay0-relative,
// same bug class as FUN_00224150/FUN_00225040) and fabricated the
// interpolated y-offset via raw integer bit-pattern arithmetic instead
// of retail's genuine float divide. The enlarged local rectangle preserves
// retail's 0x70-byte frame, while explicit temporaries preserve mul ordering.
// FUN_00224660
void FUN_00224660(void)
{
    u8* work;
    u8* records;
    u32 table0;
    u32 table1;
    u32 table3;
    s32 i;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    work = (u8*)sBcmPanel;
    table0 = FUN_0021c3f0(0);
    table1 = FUN_0021c3f0(1);
    table3 = FUN_0021c3f0(3);
    records = work + 0x4660;
    *(u32*)work |= 2;
    *(u32*)(work + 4) = 0;
    *(u32*)(work + 4) |= 8;
    *(u32*)(work + 0x4630) = 3;
    *(u32*)(work + 0x4640) = *(u32*)(work + 0x463c);
    *(u32*)(work + 0x463c) = 4;
    *(u32*)(work + 0x4650) = 0;
    FUN_00226320();
    FUN_0021d3b0(work + 0x1230,
                 FUN_0021cca0(table0, *(u32*)(work + 0x4634)));
    FUN_0021d3b0(work + 0x1330,
                 FUN_0021cca0(table0, *(u32*)(work + 0x4634) + 7));
    FUN_0021d3b0(work + 0x4230, FUN_0021cca0(table0, 0x24));
    FUN_0021e380(work + 0x4330, FUN_0021cca0(table0, 0x24), 1);
    FUN_0021d3b0(records + 0xf50, FUN_0021cca0(table3, 0x13));
    FUN_0021d3b0(records + 0x1050, FUN_0021cca0(table1, 0x4b));
    i = 0;
    while (i < *(s32*)(work + 0x6070)) {
        FUN_0021d3b0(records + i * 0x310,
                     FUN_0021cca0(table0, 0x44));
        i++;
    }
    FUN_00224860();
}

// Previous body was a wrong-helper stub unrelated to retail (2128B window).
// Rewritten from disasm: retail computes a safe float-to-byte alpha via
// a magic-2^31 overflow-guarded cast, draws two frame quads, an N-slot
// overlay strip with a per-record colour switch, then (mode==3 only) a
// pair of icon draws whose x/y scale differs between the mode-0 (shift)
// and mode-1/2 (float multiply) paths despite sharing constants. obj
// 356B->2096B/2128B (98.5%); register-agnostic content-diff confirms
// correct call sequence/offsets/constants throughout. Residual is a
// handful of register-bank/scheduling floors, the largest being that
// the alpha byte does not keep a persistent register as far into the
// function as retail's build does at the two mode==3 tail call sites.
// FUN_00224860
void FUN_00224860(void)
{
    u8* base;
    u8* records;
    s32 i;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    base = (u8*)sBcmPanel;
    FUN_0021c3f0(0);
    records = base + 0x4660;
    K_ASSERT((*(u32*)(base + 4) & 8) != 0, 0x88e);
    for (i = 0; i < *(s32*)(base + 0x6070); ++i) {
        u8* record = records + i * 0x310;
        FUN_00238980(record + 0x100, 2, *(u32*)(record + 0x304), 1);
    }
}

#pragma push
#pragma opt_dead_assignments off
// FUN_00224940
#ifndef PC_BUILD
asm void FUN_00224940(void)
{
  .set noreorder
  .word 0x27bdfef0
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
  .word 0x8f82b618
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x240500e6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f93b618
  .word 0x0000202d
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040f02d
  .word 0x24040001
  .word 0x0c0870fc
  .word 0x00000000
  .word 0xafa200ec
  .word 0x24040003
  .word 0x0c0870fc
  .word 0x00000000
  .word 0xafa200e8
  .word 0x26724660
  .word 0xc6757214
  .word 0x8e63463c
  .word 0x10600011
  .word 0x00000000
  .word 0x24020004
  .word 0x10620003
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0xc6604650
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x8e634650
  .word 0x24020003
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x240508b3
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46140002
  .word 0x46150042
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
  .word 0x307100ff
  .word 0x26706050
  .word 0x03c0202d
  .word 0x24050024
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c03423c
  .word 0x44830800
  .word 0xc6000000
  .word 0x46000800
  .word 0xe7a000f0
  .word 0x8e646068
  .word 0x8e63606c
  .word 0x00832023
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0x00031840
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0xc6010004
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020000
  .word 0xe7a000f4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000f8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000fc
  .word 0x26644230
  .word 0x27a500f0
  .word 0x0c087638
  .word 0x00000000
  .word 0x03c0202d
  .word 0x24050024
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c03423c
  .word 0x44830800
  .word 0xc6000000
  .word 0x46000840
  .word 0xc440000c
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000f0
  .word 0x8e646068
  .word 0x8e63606c
  .word 0x00832023
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0x00031840
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0xc6010004
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020000
  .word 0xe7a000f4
  .word 0x3c03439c
  .word 0xafa300f8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000fc
  .word 0x26644330
  .word 0x27a500f0
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2010c
  .word 0xa3a2010d
  .word 0xa3a2010e
  .word 0xa3b1010f
  .word 0x26644230
  .word 0x27a5010c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26644330
  .word 0x27a5010c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0000a02d
  .word 0x322200ff
  .word 0x7fa200c0
  .word 0x2403ff00
  .word 0x00431025
  .word 0xafa200d0
  .word 0x100000a0
  .word 0x00000000
  .word 0x001410c0
  .word 0x00541823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021100
  .word 0x0242a821
  .word 0x8eb60300
  .word 0x3c02430f
  .word 0x44820800
  .word 0xc6000000
  .word 0x46000800
  .word 0xe7a000f0
  .word 0x00141040
  .word 0x00541021
  .word 0x00021080
  .word 0x00541021
  .word 0x0002b840
  .word 0xc6010004
  .word 0x3c024198
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x44970000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000f4
  .word 0x8ec2001c
  .word 0x10400009
  .word 0x00000000
  .word 0x8c430010
  .word 0x2402ff00
  .word 0x00621824
  .word 0x7ba200c0
  .word 0x00621025
  .word 0x7fa200b0
  .word 0x10000003
  .word 0x00000000
  .word 0x8fa200d0
  .word 0x7fa200b0
  .word 0xc7a000f0
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00022900
  .word 0xc7a000f4
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x000230c0
  .word 0x02c0202d
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x02c0202d
  .word 0x7ba500b0
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x03c0202d
  .word 0x24050044
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c03426c
  .word 0x44830800
  .word 0xc6000000
  .word 0x46000800
  .word 0xe7a000f0
  .word 0xc6010004
  .word 0x3c0341f0
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0x44970000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000f4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000f8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000fc
  .word 0x02a0202d
  .word 0x27a500f0
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e636068
  .word 0x8e62606c
  .word 0x00621023
  .word 0x16820008
  .word 0x00000000
  .word 0x240200f5
  .word 0xa3a2010c
  .word 0xa3a2010d
  .word 0x240200ff
  .word 0xa3a2010e
  .word 0x10000005
  .word 0x00000000
  .word 0x2402005a
  .word 0xa3a2010c
  .word 0xa3a2010d
  .word 0xa3a2010e
  .word 0xa3b1010f
  .word 0x02a0202d
  .word 0x27a5010c
  .word 0x0c087654
  .word 0x00000000
  .word 0x3c0242be
  .word 0x44820800
  .word 0xc6000000
  .word 0x46000800
  .word 0xe7a000f0
  .word 0xc6010004
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x44970000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000f4
  .word 0x26a40100
  .word 0x24050002
  .word 0x8ea60304
  .word 0x24070001
  .word 0x27a800f0
  .word 0x0c08e370
  .word 0x00000000
  .word 0x8e636068
  .word 0x8e62606c
  .word 0x00621023
  .word 0x16820007
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2010c
  .word 0xa3a2010d
  .word 0xa3a2010e
  .word 0x10000005
  .word 0x00000000
  .word 0x2402005a
  .word 0xa3a2010c
  .word 0xa3a2010d
  .word 0xa3a2010e
  .word 0xa3b1010f
  .word 0x0000b02d
  .word 0x10000008
  .word 0x00000000
  .word 0x00161200
  .word 0x02a21021
  .word 0x24440100
  .word 0x27a5010c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26d60001
  .word 0x2ac20002
  .word 0x1440fff7
  .word 0x00000000
  .word 0x26940001
  .word 0x8e626070
  .word 0x0282102a
  .word 0x1440ff5e
  .word 0x00000000
  .word 0x26706050
  .word 0x8fa400e8
  .word 0x24050013
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034384
  .word 0x44830800
  .word 0xc6000000
  .word 0x46000800
  .word 0xe7a000f0
  .word 0xc6010004
  .word 0x3c0342fc
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a000f4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000f8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000fc
  .word 0x26440f50
  .word 0x27a500f0
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2010c
  .word 0xa3a2010d
  .word 0xa3a2010e
  .word 0xa3b1010f
  .word 0x26440f50
  .word 0x27a5010c
  .word 0x0c087654
  .word 0x00000000
  .word 0x8fa400ec
  .word 0x2405004b
  .word 0x0c087328
  .word 0x00000000
  .word 0x2403011f
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0xc6000000
  .word 0x46000800
  .word 0xe7a000f0
  .word 0xc6010004
  .word 0x3c0342fc
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a000f4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000f8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000fc
  .word 0x26441050
  .word 0x27a500f0
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2010c
  .word 0xa3a2010d
  .word 0xa3a2010e
  .word 0xa3b1010f
  .word 0x26441050
  .word 0x27a5010c
  .word 0x0c087654
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
  .word 0x27bd0110
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_dead_assignments reset

// FUN_00225040
#ifndef PC_BUILD
asm void FUN_00225040(void)
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
  .word 0x8f82b618
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x240500e6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b618
  .word 0x0000202d
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040b82d
  .word 0x24040001
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040f02d
  .word 0x24040003
  .word 0x0c0870fc
  .word 0x00000000
  .word 0xafa200ac
  .word 0x26304660
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x02e0202d
  .word 0x24050023
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c120096
  .word 0x26520090
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c120096
  .word 0x2652009c
  .word 0x26244230
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26244230
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26244330
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26244330
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000063
  .word 0x00000000
  .word 0x001410c0
  .word 0x00541823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021100
  .word 0x0202a821
  .word 0x8ea40300
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0ec4d8
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
  .word 0x02e0202d
  .word 0x24050044
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c130096
  .word 0x26730090
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c120096
  .word 0x2652009c
  .word 0x02a0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0c08e450
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e620000
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
  .word 0x0000982d
  .word 0x10000017
  .word 0x00000000
  .word 0x00131200
  .word 0x02a21021
  .word 0x24520100
  .word 0x3c160096
  .word 0x26d6009c
  .word 0x0240202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620002
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x26940001
  .word 0x8e226070
  .word 0x0282102a
  .word 0x1440ff9b
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
  .word 0x8fa400ac
  .word 0x24050013
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c120096
  .word 0x26520090
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c110096
  .word 0x2631009c
  .word 0x26040f50
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26040f50
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x03c0202d
  .word 0x2405004b
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26041050
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26041050
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e220000
  .word 0x0040f809
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
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002254A0
void FUN_002254A0(void)
{
    u8* work;
    u8* records;
    u32 table0;
    u32 current;
    u32 resource;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    work = (u8*)sBcmPanel;
    records = work + 0x4660;
    table0 = FUN_0021c3f0(0);

    K_ASSERT((*(u32*)(work + 4) & 4) != 0, 0x973);

    current = *(u32*)(work + 0x6068) - *(u32*)(work + 0x606c);
    *(u32*)(records + 0x18c0) = current;
    *(u32*)(records + 0x18e0) = *(u32*)(records + current * 0x420 + 0xc);
    *(u32*)(work + 0x4630) = 4;
    *(u32*)(work + 0x4658) = 0;
    *(u32*)work |= 8;
    *(u32*)(work + 0x4644) = 1;
    FUN_00227d10();

    resource = FUN_0021cca0(table0, 0x25);
    FUN_0021d3b0(work + 0x4430, resource);

    resource = FUN_0021cca0(table0, 0x25);
    FUN_0021e380(work + 0x4530, resource, 1);

    resource = FUN_0021cca0(table0, 0x2f);
    FUN_0021d3b0(records + 0x18f0, resource);

    FUN_00225670();
}

// Previous body was a wrong-helper stub (232B) unrelated to retail (1296B
// window). Rewritten from disasm: retail does a 9-entry jump-table
// resource dispatch + per-slot D_00960090/D_0096009C_u32 indirect-vtable
// quad-draw calls (matching FUN_00229B40's style), not the guessed
// bcm_panel_* helpers. obj now 1292B/1296B; residual is a single
// register-bank choice (retail s3/mine s4 for `work`) cascading through
// the whole body - 2 declaration-order attempts had no effect (floor).
/* W389 measured opt_lifetimes on: nd562/1296B -> nd217/1280B (window 1296B). */
// FUN_002255F0
void FUN_002255F0(void)
{
    u32* puVar1;
    u32 uVar2;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    puVar1 = sBcmPanel;
    uVar2 = FUN_0021c3f0(0);
    puVar1[0x118c] = 5;
    puVar1[0x1196] = 0;
    puVar1[0] |= 8;
    puVar1[0x1191] = 0;
    puVar1[0x1192] = 1;
}

// FUN_00225670 MATCHING
void FUN_00225670(void)
{
    u8* work;
    u8* overlay0;
    u8* overlayI;
    u32 table0;
    u32 resource;
    void* frame;
    f32 rect[8];
    f32 scale;
    f32 value;
    f32 offsetY;
    s32 i;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    work = (u8*)sBcmPanel;
    table0 = FUN_0021c3f0(0);
    overlay0 = work + 0x6080;

    for (i = 0; i < *(s32*)(overlay0 + 0x55c); ++i) {
        resource = FUN_0021cca0(table0, 0x29);
        overlayI = overlay0 + i * 0x110;
        FUN_0021d3b0(overlayI + 0x10, resource);
    }

    frame = (void*)FUN_0021cca0(table0, 0x1d);
    {
        s32 count = *(s32*)(overlay0 + 0x55c);
        s32 progress = *(s32*)(overlay0 + 0x550);
        if (count < progress) {
            value = (f32)*(s32*)(overlay0 + 0x558);
            scale = 55.0f;
            offsetY = 36.0f + (value * scale) / (f32)(progress - count);
        } else {
            offsetY = 36.0f;
        }
    }
    rect[0] = 60.0f;
    rect[1] = 237.0f + offsetY;
    rect[2] = (f32)*(s32*)((u8*)frame + 0xc);
    rect[3] = (f32)*(s32*)((u8*)frame + 0x10);
    FUN_0021d8e0(work + 0x3730, rect);
}

/* W420 obj2-local elimination/reuse: nd390/2108B, window 2128B, rate
 * 0.185009 unchanged; reverted. */
// FUN_002257F0
#ifndef PC_BUILD
asm void FUN_002257F0(void)
{
  .set noreorder
  .word 0x27bdfeb0
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
  .word 0x8f82b618
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x240500e6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f94b618
  .word 0x0000202d
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040f02d
  .word 0x26936080
  .word 0xc6957214
  .word 0x26926058
  .word 0x26916050
  .word 0x8e834644
  .word 0x10600014
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0xc6804658
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x8e834658
  .word 0x24020006
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x240509e0
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46140002
  .word 0x46150042
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
  .word 0x306200ff
  .word 0x7fa200c0
  .word 0x03c0202d
  .word 0x24050024
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c03423c
  .word 0x44830800
  .word 0xc6400000
  .word 0x46000800
  .word 0xe7a00130
  .word 0x8e640554
  .word 0x8e630558
  .word 0x00832023
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0x00031840
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0xc6410004
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020000
  .word 0xe7a00134
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00138
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0013c
  .word 0x26844430
  .word 0x27a50130
  .word 0x0c087638
  .word 0x00000000
  .word 0x03c0202d
  .word 0x24050024
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c03423c
  .word 0x44830800
  .word 0xc6400000
  .word 0x46000840
  .word 0xc440000c
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a00130
  .word 0x8e640554
  .word 0x8e630558
  .word 0x00832023
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0x00031840
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0xc6410004
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020000
  .word 0xe7a00134
  .word 0x3c03438a
  .word 0xafa30138
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0013c
  .word 0x26844530
  .word 0x27a50130
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2014c
  .word 0xa3a2014d
  .word 0xa3a2014e
  .word 0x7ba200c0
  .word 0xa3a2014f
  .word 0x26844430
  .word 0x27a5014c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26844530
  .word 0x27a5014c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0000a82d
  .word 0x7ba300c0
  .word 0x307000ff
  .word 0x2403ff00
  .word 0x02032025
  .word 0xafa40110
  .word 0x3c04cccc
  .word 0x3484cc00
  .word 0x02042025
  .word 0xafa40100
  .word 0x3c04beff
  .word 0x3484d200
  .word 0x02042025
  .word 0xafa400f0
  .word 0x3c0464cc
  .word 0x34846400
  .word 0x02042025
  .word 0xafa400e0
  .word 0x00102080
  .word 0x00902821
  .word 0x00052080
  .word 0x00a42021
  .word 0x00042840
  .word 0x24040064
  .word 0x00a4001a
  .word 0x00002012
  .word 0x00831825
  .word 0xafa300d0
  .word 0x10000077
  .word 0x00000000
  .word 0x00151100
  .word 0x00551021
  .word 0x00021100
  .word 0x0262b821
  .word 0x8ee20004
  .word 0xafa20120
  .word 0x3c0242ce
  .word 0x44820800
  .word 0xc6400000
  .word 0x46000880
  .word 0xe7a20130
  .word 0x00151040
  .word 0x00551021
  .word 0x00021080
  .word 0x00551021
  .word 0x00021040
  .word 0x7fa200b0
  .word 0xc6410004
  .word 0x3c024198
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x7ba200b0
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000840
  .word 0xe7a10134
  .word 0x46001024
  .word 0x44020000
  .word 0x00000000
  .word 0x00022900
  .word 0x46000824
  .word 0x44020000
  .word 0x00000000
  .word 0x000230c0
  .word 0x8fa40120
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x8ee30000
  .word 0x24020001
  .word 0x1062001e
  .word 0x00000000
  .word 0x24020002
  .word 0x10620010
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x8e630554
  .word 0x8e620558
  .word 0x00621023
  .word 0x16a20004
  .word 0x00000000
  .word 0x8fb60110
  .word 0x10000010
  .word 0x00000000
  .word 0x8fb60100
  .word 0x1000000d
  .word 0x00000000
  .word 0x8e630554
  .word 0x8e620558
  .word 0x00621023
  .word 0x16a20004
  .word 0x00000000
  .word 0x8fb600f0
  .word 0x10000005
  .word 0x00000000
  .word 0x8fb600e0
  .word 0x10000002
  .word 0x00000000
  .word 0x8fb600d0
  .word 0x8fa40120
  .word 0x02c0282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x03c0202d
  .word 0x24050029
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0342ac
  .word 0x44830800
  .word 0xc6400000
  .word 0x46000800
  .word 0xe7a00130
  .word 0xc6410004
  .word 0x3c0341e8
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0x7ba300b0
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a00134
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00138
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0013c
  .word 0x26e40010
  .word 0x27a50130
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2014c
  .word 0xa3a2014d
  .word 0xa3a2014e
  .word 0x7ba200c0
  .word 0xa3a2014f
  .word 0x26e40010
  .word 0x27a5014c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26b50001
  .word 0x8e63055c
  .word 0x02a3182a
  .word 0x1460ff87
  .word 0x00000000
  .word 0x8e84463c
  .word 0x24030003
  .word 0x10830003
  .word 0x00000000
  .word 0x100000aa
  .word 0x00000000
  .word 0x8e834644
  .word 0x24050002
  .word 0x1065005f
  .word 0x00000000
  .word 0x24040001
  .word 0x1064005c
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000009f
  .word 0x00000000
  .word 0x8e834648
  .word 0x10640003
  .word 0x00000000
  .word 0x1465009a
  .word 0x00000000
  .word 0x8e834658
  .word 0x28610006
  .word 0x10200096
  .word 0x00000000
  .word 0x8e820004
  .word 0x30420004
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x24050a38
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e720560
  .word 0x3c02ff9d
  .word 0x34429d00
  .word 0x02022825
  .word 0x0240202d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x3c02432b
  .word 0x44820800
  .word 0xc6200000
  .word 0x46000880
  .word 0xe7a20130
  .word 0xc6210004
  .word 0x3c024198
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0xe7a10134
  .word 0x46001024
  .word 0x44020000
  .word 0x00000000
  .word 0x00022900
  .word 0x46000824
  .word 0x44020000
  .word 0x00000000
  .word 0x000230c0
  .word 0x0240202d
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x8e720564
  .word 0x1240006d
  .word 0x00000000
  .word 0x2402ff00
  .word 0x02022825
  .word 0x0240202d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x3c02432b
  .word 0x44820800
  .word 0xc6200000
  .word 0x46000840
  .word 0x3c0241d8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010080
  .word 0xe7a20130
  .word 0xc6210004
  .word 0x3c024198
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c0241d0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0xe7a10134
  .word 0x46001024
  .word 0x44020000
  .word 0x00000000
  .word 0x00022900
  .word 0x46000824
  .word 0x44020000
  .word 0x00000000
  .word 0x000230c0
  .word 0x0240202d
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x10000048
  .word 0x00000000
  .word 0x8e720560
  .word 0x3c02ff9d
  .word 0x34429d00
  .word 0x02022825
  .word 0x0240202d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x3c02432b
  .word 0x44820800
  .word 0xc6200000
  .word 0x46000880
  .word 0xe7a20130
  .word 0xc6210004
  .word 0x3c024198
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0xe7a10134
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46020002
  .word 0x46000024
  .word 0x44050000
  .word 0x3c024100
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0x46000024
  .word 0x44060000
  .word 0x0240202d
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x8e720564
  .word 0x12400024
  .word 0x00000000
  .word 0x2402ff00
  .word 0x02022825
  .word 0x0240202d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x3c02432b
  .word 0x44820800
  .word 0xc6200000
  .word 0x46000840
  .word 0x3c0241d8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010080
  .word 0xe7a20130
  .word 0xc6210004
  .word 0x3c024198
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c0241d0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0xe7a10134
  .word 0x46001024
  .word 0x44020000
  .word 0x00000000
  .word 0x00022900
  .word 0x46000824
  .word 0x44020000
  .word 0x00000000
  .word 0x000230c0
  .word 0x0240202d
  .word 0x0c0ec35c
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
  .word 0x27bd0150
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// Previous body was a wrong-helper stub unrelated to retail (1168B window).
// Rewritten from disasm: retail sets a fixed initial vtable state(9,2),
// draws a 6-slot resource strip, then 4 single quads reusing/refreshing
// the vtable casts per retail's own re-materialization points, a 4-slot
// double-quad loop, then a final 2-quad pair - all via the established
// D_00960090_abs/D_0096009C_abs style. nd 198->16 (obj 1156B/1168B);
// residual is a table0/loop-counter register-bank swap, unfixable per
// the usual declaration-order floor (2 attempts tried).
// FUN_00226040
void FUN_00226040(void)
{
    u8* work;
    u8* overlay0;
    u8* overlayI;
    u32 table0;
    u32 resource;
    u32 texture;
    s32 i;
    void (**setState)(u32, u32);
    void (**setQuad)(u32*, u32, u32, u32, u32);
    void (**setQuad2)(u32*, u32, u32, u32, u32);
    void (**setQuad3)(u32*, u32, u32, u32, u32);

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    work = (u8*)sBcmPanel;
    table0 = FUN_0021c3f0(0);
    overlay0 = work + 0x6080;

    resource = FUN_0021cca0(table0, 0x23);
    setState = (void (**)(u32, u32))D_00960090_abs;
    texture = FUN_0021cce0(resource);
    (*setState)(1, texture);

    setQuad = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
    (*setQuad)((u32*)(work + 0x4430), 4, 0, 1, 2);
    (*setQuad)((u32*)(work + 0x4430), 4, 0, 2, 3);
    (*setQuad)((u32*)(work + 0x4530), 4, 0, 1, 2);
    (*setQuad)((u32*)(work + 0x4530), 4, 0, 2, 3);

    for (i = 0; i < *(s32*)(overlay0 + 0x55c); ++i) {
        overlayI = overlay0 + i * 0x110;
        func_003b1360(*(u32*)(overlayI + 4), 1, 0);

        resource = FUN_0021cca0(table0, 0x29);
        texture = FUN_0021cce0(resource);
        (*setState)(1, texture);
        RpSkyRenderStateSet(3, (void*)0x717fb);
        RpSkyRenderStateSet(2, (void*)0x44);

        setQuad2 = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
        (*setQuad2)((u32*)(overlayI + 0x10), 4, 0, 1, 2);
        (*setQuad2)((u32*)(overlayI + 0x10), 4, 0, 2, 3);
    }

    if (*(s32*)(overlay0 + 0x55c) < *(s32*)(overlay0 + 0x550)) {
        RpSkyRenderStateSet(3, (void*)0x717fb);
        RpSkyRenderStateSet(2, (void*)0x44);

        resource = FUN_0021cca0(table0, 0x1d);
        texture = FUN_0021cce0(resource);
        (*setState)(1, texture);

        setQuad3 = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
        (*setQuad3)((u32*)(work + 0x3730), 4, 0, 1, 2);
        (*setQuad3)((u32*)(work + 0x3730), 4, 0, 2, 3);
    }
}

// FUN_00226320
void FUN_00226320(void)
{
    u32 table;
    u8* base;
    u32 state;
    s32 i;
    u32 resource;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    base = (u8*)sBcmPanel;
    table = FUN_0021c3f0(0);
    state = *(u32*)(base + 0x7210);
    if (state == 2) {
        goto panel_setup;
    }
    if (state == 1) {
        goto panel_setup;
    }
    switch (state) {
    case 0:
        goto panel_setup;
    default:
        goto panel_tail;
    }
panel_setup:
    FUN_0021d3b0(base + 0x1530, FUN_0021cca0(table, 0x1e));
    FUN_0021d3b0(base + 0x1630, FUN_0021cca0(table, 0x1f));
    FUN_0021d3b0(base + 0x1730, FUN_0021cca0(table, 0x20));
    FUN_0021d3b0(base + 0x1830, FUN_0021cca0(table, 0x21));
    FUN_0021e380(base + 0x1930, FUN_0021cca0(table, 0x1e), 1);
    FUN_0021e380(base + 0x1a30, FUN_0021cca0(table, 0x1f), 1);
    FUN_0021e380(base + 0x1b30, FUN_0021cca0(table, 0x1f), 0);
    FUN_0021e380(base + 0x1c30, FUN_0021cca0(table, 0x21), 0);
    FUN_0021e380(base + 0x1d30, FUN_0021cca0(table, 0x1f), 4);
panel_tail:
    FUN_0021d3b0(base + 0x2130, FUN_0021cca0(table, 0x1d));
    FUN_0021d3b0(base + 0x1e30, FUN_0021cca0(table, 0x26));
    FUN_0021d3b0(base + 0x1f30, FUN_0021cca0(table, 0x27));
    FUN_0021e380(base + 0x2030, FUN_0021cca0(table, 0x26), 2);
    resource = FUN_0021cca0(table, 0x2c);
    for (i = 0; i < 6; ++i) {
        u8* slot = base + i * 0x200;
        FUN_0021d3b0(slot + 0x2230, resource);
        FUN_0021e380(slot + 0x2330, resource, 1);
    }
}


// FUN_002265D0
#ifndef PC_BUILD
asm void FUN_002265D0(void)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0070
  .word 0x7fb30060
  .word 0x7fb20050
  .word 0x7fb10040
  .word 0x7fb00030
  .word 0xe7bc0020
  .word 0xe7bb001c
  .word 0xe7ba0018
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8f82b618
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x240500e6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b618
  .word 0x0000202d
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040982d
  .word 0xc63a7214
  .word 0xc6207210
  .word 0x3c02c1d0
  .word 0x44821000
  .word 0x46800060
  .word 0x46011702
  .word 0x3c0241d0
  .word 0x44820000
  .word 0x00000000
  .word 0x460106c2
  .word 0x8e22463c
  .word 0x24030003
  .word 0x10430041
  .word 0x00000000
  .word 0x10400024
  .word 0x00000000
  .word 0x24030004
  .word 0x10430009
  .word 0x00000000
  .word 0x24030001
  .word 0x10430006
  .word 0x00000000
  .word 0x24030002
  .word 0x10430003
  .word 0x00000000
  .word 0x10000093
  .word 0x00000000
  .word 0xc6204650
  .word 0x3c034218
  .word 0x44830800
  .word 0x00000000
  .word 0x468000a0
  .word 0x46020802
  .word 0x3c034040
  .word 0x44830800
  .word 0x00000000
  .word 0x46010003
  .word 0xe7a00090
  .word 0x3c03c220
  .word 0x44830000
  .word 0x00000000
  .word 0x46020002
  .word 0x46010043
  .word 0x24030115
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0xe7a00094
  .word 0x1000007b
  .word 0x00000000
  .word 0xc6204650
  .word 0x3c03c218
  .word 0x44830800
  .word 0x00000000
  .word 0x468000e0
  .word 0x46030802
  .word 0x3c034040
  .word 0x44831000
  .word 0x00000000
  .word 0x46020043
  .word 0x3c034218
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00090
  .word 0x3c034220
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c03436d
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00094
  .word 0x10000060
  .word 0x00000000
  .word 0x8e244644
  .word 0x10800022
  .word 0x00000000
  .word 0x24030002
  .word 0x10830006
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x10000055
  .word 0x00000000
  .word 0xc6204658
  .word 0x46800060
  .word 0x3c0340c0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000d43
  .word 0x3c03c33f
  .word 0x44830800
  .word 0x3c034218
  .word 0x44830000
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4615081c
  .word 0xe7a00090
  .word 0x3c03c284
  .word 0x44830800
  .word 0x3c03436d
  .word 0x44830000
  .word 0x00000000
  .word 0x46001018
  .word 0x4615081c
  .word 0xe7a00094
  .word 0x1000003c
  .word 0x00000000
  .word 0x8e244648
  .word 0x24030001
  .word 0x10830004
  .word 0x00000000
  .word 0x24030002
  .word 0x1483001f
  .word 0x00000000
  .word 0x8e234658
  .word 0x28610006
  .word 0x1020001b
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0340c0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000d43
  .word 0x3c03433f
  .word 0x44830800
  .word 0x3c03c319
  .word 0x44830000
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4615081c
  .word 0xe7a00090
  .word 0x3c034284
  .word 0x44830800
  .word 0x3c03432b
  .word 0x44830000
  .word 0x00000000
  .word 0x46001018
  .word 0x4615081c
  .word 0xe7a00094
  .word 0x10000017
  .word 0x00000000
  .word 0xc6204650
  .word 0x3c034218
  .word 0x44830800
  .word 0x00000000
  .word 0x468000a0
  .word 0x46020802
  .word 0x3c034040
  .word 0x44830800
  .word 0x00000000
  .word 0x46010003
  .word 0xe7a00090
  .word 0x3c03c220
  .word 0x44830000
  .word 0x00000000
  .word 0x46020002
  .word 0x46010043
  .word 0x24030115
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0xe7a00094
  .word 0x24040003
  .word 0x10440022
  .word 0x00000000
  .word 0x10400017
  .word 0x00000000
  .word 0x24030004
  .word 0x10430009
  .word 0x00000000
  .word 0x24030001
  .word 0x10430006
  .word 0x00000000
  .word 0x24030002
  .word 0x10430003
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0xc6204650
  .word 0x46800060
  .word 0x3c034040
  .word 0x44830000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x8e234650
  .word 0x00831823
  .word 0x0064001a
  .word 0x00001812
  .word 0x44830000
  .word 0x00000000
  .word 0x46800520
  .word 0x10000010
  .word 0x00000000
  .word 0xc6204650
  .word 0x46800060
  .word 0x3c034040
  .word 0x44830000
  .word 0x00000000
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x8e244644
  .word 0x10800005
  .word 0x00000000
  .word 0x24030002
  .word 0x10830002
  .word 0x00000000
  .word 0x24030001
  .word 0x24030003
  .word 0x10430003
  .word 0x00000000
  .word 0x10000036
  .word 0x00000000
  .word 0x8e234644
  .word 0x10600018
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000002d
  .word 0x00000000
  .word 0x8e234658
  .word 0x24020006
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001e
  .word 0x00000000
  .word 0x8e234648
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x24020002
  .word 0x14620011
  .word 0x00000000
  .word 0x8e224658
  .word 0x28410006
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x461500c1
  .word 0x4600e087
  .word 0xc7a10094
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181c
  .word 0xe7a00094
  .word 0x461c0640
  .word 0xe7b90094
  .word 0xc7a10090
  .word 0xc7a00094
  .word 0xe6216050
  .word 0xe6206054
  .word 0x0000802d
  .word 0x3c024296
  .word 0x44820000
  .word 0x00000000
  .word 0x461b0580
  .word 0x100000a3
  .word 0x00000000
  .word 0x2e010006
  .word 0x10200014
  .word 0x00000000
  .word 0x3c03007b
  .word 0x246376c0
  .word 0x00101080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x2605001e
  .word 0x0260202d
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040902d
  .word 0x10000006
  .word 0x00000000
  .word 0x2605001a
  .word 0x0260202d
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040902d
  .word 0xc7a10090
  .word 0x4600c806
  .word 0x2e010009
  .word 0x10200057
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637690
  .word 0x00101080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3c024130
  .word 0x44820000
  .word 0x00000000
  .word 0x46000840
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x4600c800
  .word 0x10000046
  .word 0x00000000
  .word 0x3c024130
  .word 0x44820000
  .word 0x00000000
  .word 0x46000840
  .word 0x4616c800
  .word 0x1000003f
  .word 0x00000000
  .word 0x3c024371
  .word 0x44820000
  .word 0x00000000
  .word 0x46000840
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x4600c800
  .word 0x10000035
  .word 0x00000000
  .word 0x3c024371
  .word 0x44820000
  .word 0x00000000
  .word 0x46000840
  .word 0x4616c800
  .word 0x1000002e
  .word 0x00000000
  .word 0x3c02431f
  .word 0x44820000
  .word 0x00000000
  .word 0x46000840
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x4600c800
  .word 0x10000024
  .word 0x00000000
  .word 0x3c02431f
  .word 0x44820000
  .word 0x00000000
  .word 0x46000840
  .word 0x4616c800
  .word 0x1000001d
  .word 0x00000000
  .word 0x3c024130
  .word 0x44820000
  .word 0x00000000
  .word 0x46000840
  .word 0x3c024296
  .word 0x44820000
  .word 0x00000000
  .word 0x4600c800
  .word 0x10000013
  .word 0x00000000
  .word 0x3c024371
  .word 0x44820000
  .word 0x00000000
  .word 0x46000840
  .word 0x3c024296
  .word 0x44820000
  .word 0x00000000
  .word 0x4600c800
  .word 0x10000009
  .word 0x00000000
  .word 0x3c02431f
  .word 0x44820000
  .word 0x00000000
  .word 0x46000840
  .word 0x3c024296
  .word 0x44820000
  .word 0x00000000
  .word 0x4600c800
  .word 0x2e010009
  .word 0x10200028
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637660
  .word 0x00101080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0xe7a10080
  .word 0xe7a00084
  .word 0xc640000c
  .word 0x46800020
  .word 0xe7a00088
  .word 0xc6400010
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x10000017
  .word 0x00000000
  .word 0xe7a10080
  .word 0xe7a00084
  .word 0x3c0242a4
  .word 0xafa20088
  .word 0xc6400010
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x1000000e
  .word 0x00000000
  .word 0xe7a10080
  .word 0xe7a00084
  .word 0xc640000c
  .word 0x46800020
  .word 0xe7a00088
  .word 0xe7bb008c
  .word 0x10000006
  .word 0x00000000
  .word 0xe7a10080
  .word 0xe7a00084
  .word 0x3c0242a4
  .word 0xafa20088
  .word 0xe7bb008c
  .word 0x00101200
  .word 0x02221021
  .word 0x24441530
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020009
  .word 0x1440ff5c
  .word 0x00000000
  .word 0x8e23463c
  .word 0x24020003
  .word 0x10620003
  .word 0x00000000
  .word 0x10000036
  .word 0x00000000
  .word 0x8e234644
  .word 0x10600018
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000002d
  .word 0x00000000
  .word 0x8e234658
  .word 0x24020006
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001e
  .word 0x00000000
  .word 0x8e234648
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x24020002
  .word 0x14620011
  .word 0x00000000
  .word 0x8e224658
  .word 0x28410006
  .word 0x1020000d
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x3c024357
  .word 0x44820000
  .word 0x00000000
  .word 0x46150042
  .word 0x3c024220
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
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
  .word 0xa3a3009c
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
  .word 0xa3a3009d
  .word 0x3c024361
  .word 0x44821000
  .word 0x3c0241f0
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4615105c
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
  .word 0xa3a3009e
  .word 0x3c0241a0
  .word 0x44821000
  .word 0x3c0242a0
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4615105c
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x46140002
  .word 0x4600d042
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
  .word 0xa3a3009f
  .word 0x0000802d
  .word 0x10000008
  .word 0x00000000
  .word 0x00101200
  .word 0x02221021
  .word 0x24441530
  .word 0x27a5009c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020009
  .word 0x1440fff7
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050026
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0341a0
  .word 0x44830800
  .word 0xc7a00090
  .word 0x46000e00
  .word 0xe7b80080
  .word 0xc7b70094
  .word 0x3c034200
  .word 0x44830000
  .word 0x00000000
  .word 0x46170580
  .word 0x3c034040
  .word 0x44830000
  .word 0x00000000
  .word 0x4600b001
  .word 0xe7a00084
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00088
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x26241e30
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050027
  .word 0x0c087328
  .word 0x00000000
  .word 0xe7b80080
  .word 0x3c0342cc
  .word 0x44830000
  .word 0x00000000
  .word 0x46170000
  .word 0x461b0000
  .word 0xe7a00084
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00088
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x26241f30
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050026
  .word 0x0c087328
  .word 0x00000000
  .word 0xe7b80080
  .word 0x3c034180
  .word 0x44830000
  .word 0x00000000
  .word 0x46160040
  .word 0x3c034040
  .word 0x44830000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a00084
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00088
  .word 0x3c024264
  .word 0x44820000
  .word 0x00000000
  .word 0x461b0000
  .word 0xe7a0008c
  .word 0x26242030
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405001d
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034210
  .word 0x44830000
  .word 0x00000000
  .word 0x46170000
  .word 0x461c0040
  .word 0x3c034040
  .word 0x44830000
  .word 0x00000000
  .word 0x460008c1
  .word 0x3c0342b6
  .word 0x44830000
  .word 0x00000000
  .word 0x46170000
  .word 0x461c0080
  .word 0x3c0341b0
  .word 0x44830800
  .word 0xc7a00090
  .word 0x46000800
  .word 0xe7a00080
  .word 0x8e236074
  .word 0x28610005
  .word 0x1420000f
  .word 0x00000000
  .word 0xc620606c
  .word 0x46800060
  .word 0x46031001
  .word 0x46000842
  .word 0x2463fffc
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0x00000000
  .word 0x46001800
  .word 0xe7a00084
  .word 0x10000002
  .word 0x00000000
  .word 0xe7a30084
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00088
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x26242130
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2009c
  .word 0xa3a2009d
  .word 0xa3a2009e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46140002
  .word 0x461a0042
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
  .word 0xa3a3009f
  .word 0x0000802d
  .word 0x10000008
  .word 0x00000000
  .word 0x00101200
  .word 0x02221021
  .word 0x24441e30
  .word 0x27a5009c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020003
  .word 0x1440fff7
  .word 0x00000000
  .word 0x26242130
  .word 0x27a5009c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405002c
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x0000902d
  .word 0x3c03423c
  .word 0x44830800
  .word 0xc7a00090
  .word 0x46000e00
  .word 0x3c03422c
  .word 0x44830000
  .word 0x00000000
  .word 0x461905c0
  .word 0x1000002a
  .word 0x00000000
  .word 0xe7b80080
  .word 0x00121040
  .word 0x00521021
  .word 0x00021080
  .word 0x00521021
  .word 0x00021040
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600bd80
  .word 0xe7b60084
  .word 0xc600000c
  .word 0x46800020
  .word 0xe7a00088
  .word 0xc6000010
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x00121240
  .word 0x02229821
  .word 0x26642230
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0xc600000c
  .word 0x46800020
  .word 0x4600c000
  .word 0xe7a00080
  .word 0xe7b60084
  .word 0x24020137
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00088
  .word 0xc6000010
  .word 0x46800020
  .word 0xe7a0008c
  .word 0x26642330
  .word 0x27a50080
  .word 0x0c087638
  .word 0x00000000
  .word 0x26520001
  .word 0x2a430006
  .word 0x1460ffd5
  .word 0x00000000
  .word 0x8e24463c
  .word 0x24030003
  .word 0x1083000b
  .word 0x00000000
  .word 0x1080003c
  .word 0x00000000
  .word 0x24030001
  .word 0x10830039
  .word 0x00000000
  .word 0x24030002
  .word 0x10830036
  .word 0x00000000
  .word 0x10000034
  .word 0x00000000
  .word 0x8e244644
  .word 0x10800018
  .word 0x00000000
  .word 0x24030002
  .word 0x10830006
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x8e244658
  .word 0x24030006
  .word 0x00641823
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0340c0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x8e244648
  .word 0x24030001
  .word 0x10830004
  .word 0x00000000
  .word 0x24030002
  .word 0x14830011
  .word 0x00000000
  .word 0x8e234658
  .word 0x28610006
  .word 0x1020000d
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0340c0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c033f80
  .word 0x4483a800
  .word 0x3c034361
  .word 0x44831000
  .word 0x3c0341f0
  .word 0x44830800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4615105c
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44040000
  .word 0x00000000
  .word 0x308400ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x308400ff
  .word 0x308500ff
  .word 0x240300ff
  .word 0xa3a3009c
  .word 0xa3a3009d
  .word 0xa3a3009e
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x4600a002
  .word 0x4600d042
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44040000
  .word 0x00000000
  .word 0x308400ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x308400ff
  .word 0xa3a4009f
  .word 0x0000902d
  .word 0x1000000c
  .word 0x00000000
  .word 0x00121240
  .word 0x02228021
  .word 0x26042230
  .word 0x27a5009c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26042330
  .word 0x27a5009c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26520001
  .word 0x2a430002
  .word 0x1460fff3
  .word 0x00000000
  .word 0x3c03437f
  .word 0x44830000
  .word 0x00000000
  .word 0x46150042
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44040000
  .word 0x00000000
  .word 0x308400ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x308400ff
  .word 0x308500ff
  .word 0x240300ff
  .word 0xa3a3009c
  .word 0xa3a3009d
  .word 0xa3a3009e
  .word 0x04a00006
  .word 0x00000000
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00052042
  .word 0x30a30001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x4600a002
  .word 0x4600d042
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44040000
  .word 0x00000000
  .word 0x308400ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x308400ff
  .word 0xa3a4009f
  .word 0x24120002
  .word 0x1000000c
  .word 0x00000000
  .word 0x00121240
  .word 0x02228021
  .word 0x26042230
  .word 0x27a5009c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26042330
  .word 0x27a5009c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26520001
  .word 0x2a430006
  .word 0x1460fff3
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb30060
  .word 0x7bb20050
  .word 0x7bb10040
  .word 0x7bb00030
  .word 0xc7bc0020
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
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* W389 measured opt_loop_invariants on: nd1997/2852B -> nd1941/2732B (window 3024B). */
#pragma push
#pragma opt_lifetimes on
/* W420 direct positive-branch probe: nd175/1280B, window 1296B, rate 0.136719
 * unchanged; moving setQuad3 before the switch instead produced nd218/1280B,
 * rate 0.170313; both reverted. */
// FUN_00227800
void FUN_00227800(void)
{
    void (**setState)(u32, u32);
    u32 table0;
    u8* work;
    u32 texture;
    u32 resource;
    u32* quad;
    s32 i;
    s32 j;
    s32 loopCount;
    u8* record;
    void (**setQuad)(u32*, u32, u32, u32, u32);
    void (**setState2)(u32, u32);
    void (**setQuad2)(u32*, u32, u32, u32, u32);

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    work = (u8*)sBcmPanel;
    table0 = FUN_0021c3f0(0);
    RpSkyRenderStateSet(3, (void*)0x717fb);
    RpSkyRenderStateSet(2, (void*)0x44);

    for (i = 0; i < 9; i++) {
        switch (i) {
        case 0: case 1: case 2: case 3:
            resource = FUN_0021cca0(table0, i + 0x1e);
            break;
        case 4: case 5:
            resource = FUN_0021cca0(table0, i + 0x1a);
            break;
        case 6:
            resource = FUN_0021cca0(table0, 0x1f);
            break;
        case 7:
            resource = FUN_0021cca0(table0, 0x21);
            break;
        case 8:
            resource = FUN_0021cca0(table0, 0x1f);
            break;
        }
        texture = FUN_0021cce0(resource);
        setState = (void (**)(u32, u32))D_00960090_abs;
        (*setState)(1, texture);
        record = work + i * 0x100 + 0x1530;
        setQuad = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
        (*setQuad)((u32*)record, 4, 0, 1, 2);
        (*setQuad)((u32*)record, 4, 0, 2, 3);
    }

    resource = FUN_0021cca0(table0, 0x26);
    setState2 = (void (**)(u32, u32))D_00960090_abs;
    (*setState2)(1, FUN_0021cce0(resource));
    setQuad2 = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
    (*setQuad2)((u32*)(work + 0x1e30), 4, 0, 1, 2);
    (*setQuad2)((u32*)(work + 0x1e30), 4, 0, 2, 3);

    resource = FUN_0021cca0(table0, 0x27);
    (*setState2)(1, FUN_0021cce0(resource));
    (*setQuad2)((u32*)(work + 0x1f30), 4, 0, 1, 2);
    (*setQuad2)((u32*)(work + 0x1f30), 4, 0, 2, 3);

    resource = FUN_0021cca0(table0, 0x26);
    (*setState2)(1, FUN_0021cce0(resource));
    (*setQuad2)((u32*)(work + 0x2030), 4, 0, 1, 2);
    (*setQuad2)((u32*)(work + 0x2030), 4, 0, 2, 3);

    if (*(u32*)(work + 0x463c) != 3 && *(s32*)(work + 0x6074) > 4) {
        resource = FUN_0021cca0(table0, 0x1d);
        (*setState2)(1, FUN_0021cce0(resource));
        (*setQuad2)((u32*)(work + 0x2130), 4, 0, 1, 2);
        (*setQuad2)((u32*)(work + 0x2130), 4, 0, 2, 3);
    }

    resource = FUN_0021cca0(table0, 0x2c);
    (*setState2)(1, FUN_0021cce0(resource));

    switch (*(u32*)(work + 0x7210)) {
    case 0:
        loopCount = 4;
        break;
    case 1:
        loopCount = 5;
        break;
    case 2:
        loopCount = 6;
        break;
    }

    for (j = 0; j < loopCount; j++) {
        record = work + (j << 9);
        quad = (u32*)(record + 0x2230);
        setQuad2 = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
        (*setQuad2)(quad, 4, 0, 1, 2);
        (*setQuad2)(quad, 4, 0, 2, 3);
        quad = (u32*)(record + 0x2330);
        (*setQuad2)(quad, 4, 0, 1, 2);
        (*setQuad2)(quad, 4, 0, 2, 3);
    }
}
#pragma pop
#pragma opt_lifetimes reset


// FUN_00227D10
void FUN_00227D10(void)
{
    s32 i;
    u8* base;
    u32 table;
    u32 resource;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    base = (u8*)sBcmPanel;
    table = FUN_0021c3f0(0);
    FUN_0021d3b0(base + 0x2e30, FUN_0021cca0(table, 0x1e));
    FUN_0021d3b0(base + 0x2f30, FUN_0021cca0(table, 0x1f));
    FUN_0021d3b0(base + 0x3030, FUN_0021cca0(table, 0x20));
    FUN_0021d3b0(base + 0x3130, FUN_0021cca0(table, 0x21));
    FUN_0021e380(base + 0x3230, FUN_0021cca0(table, 0x1e), 1);
    FUN_0021e380(base + 0x3330, FUN_0021cca0(table, 0x1f), 1);
    FUN_0021d3b0(base + 0x3730, FUN_0021cca0(table, 0x1d));
    FUN_0021d3b0(base + 0x3430, FUN_0021cca0(table, 0x26));
    FUN_0021d3b0(base + 0x3530, FUN_0021cca0(table, 0x27));
    FUN_0021e380(base + 0x3630, FUN_0021cca0(table, 0x26), 2);
    resource = FUN_0021cca0(table, 0x2c);
    for (i = 0; i < 5; ++i) {
        u8* record = base + (i << 9);
        FUN_0021d3b0(record + 0x3830, resource);
        FUN_0021e380(record + 0x3930, resource, 1);
    }
}




























/* Retail rebuild: six panel slots, state alpha, frame/scrollbar, and four two-part list rows are implemented. */
// FUN_00227F30
#ifndef PC_BUILD
asm void FUN_00227F30(void)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0060
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
  .word 0x8f82b618
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x240500e6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b618
  .word 0x0000202d
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040982d
  .word 0xc6397214
  .word 0x3c024218
  .word 0xafa20080
  .word 0x3c02436d
  .word 0x4482b800
  .word 0xafa20084
  .word 0xc7a10080
  .word 0xc7a00084
  .word 0xe6216058
  .word 0xe620605c
  .word 0x0000802d
  .word 0x10000085
  .word 0x00000000
  .word 0x2e010006
  .word 0x10200014
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637750
  .word 0x00101080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x2605001e
  .word 0x0260202d
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040902d
  .word 0x10000006
  .word 0x00000000
  .word 0x2605001a
  .word 0x0260202d
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040902d
  .word 0xc7a20080
  .word 0x4600b806
  .word 0x2e010006
  .word 0x10200048
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637730
  .word 0x00101080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3c024130
  .word 0x44820000
  .word 0x00000000
  .word 0x46001080
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b800
  .word 0x10000037
  .word 0x00000000
  .word 0x3c024130
  .word 0x44820000
  .word 0x00000000
  .word 0x46001080
  .word 0x3c024296
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b800
  .word 0x1000002d
  .word 0x00000000
  .word 0x3c024349
  .word 0x44820000
  .word 0x00000000
  .word 0x46001080
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b800
  .word 0x10000023
  .word 0x00000000
  .word 0x3c024349
  .word 0x44820000
  .word 0x00000000
  .word 0x46001080
  .word 0x3c024296
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b800
  .word 0x10000019
  .word 0x00000000
  .word 0xc640000c
  .word 0x46800060
  .word 0x3c024130
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46001080
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b800
  .word 0x1000000c
  .word 0x00000000
  .word 0xc640000c
  .word 0x46800060
  .word 0x3c024130
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46001080
  .word 0x3c024296
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b800
  .word 0x2e010006
  .word 0x10200019
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637710
  .word 0x00101080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0xe7a20070
  .word 0xe7a00074
  .word 0xc640000c
  .word 0x46800020
  .word 0xe7a00078
  .word 0xc6400010
  .word 0x46800020
  .word 0xe7a0007c
  .word 0x10000008
  .word 0x00000000
  .word 0xe7a20070
  .word 0xe7a00074
  .word 0x3c024228
  .word 0xafa20078
  .word 0xc6400010
  .word 0x46800020
  .word 0xe7a0007c
  .word 0x00101200
  .word 0x02221021
  .word 0x24442e30
  .word 0x27a50070
  .word 0x0c087638
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020006
  .word 0x1440ff7a
  .word 0x00000000
  .word 0x8e24463c
  .word 0x24030003
  .word 0x10830024
  .word 0x00000000
  .word 0x10800014
  .word 0x00000000
  .word 0x24020001
  .word 0x10820006
  .word 0x00000000
  .word 0x24020002
  .word 0x10820003
  .word 0x00000000
  .word 0x10000040
  .word 0x00000000
  .word 0xc6204650
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000035
  .word 0x00000000
  .word 0x8e224650
  .word 0x00621023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000027
  .word 0x00000000
  .word 0x8e234644
  .word 0x10600014
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000001c
  .word 0x00000000
  .word 0xc6204658
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x8e234658
  .word 0x24020006
  .word 0x14620005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482c000
  .word 0x10000009
  .word 0x00000000
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46180002
  .word 0x46190042
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
  .word 0x306500ff
  .word 0x8e234644
  .word 0x10600015
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x8e224658
  .word 0x24040006
  .word 0x00821823
  .word 0x00031200
  .word 0x00431023
  .word 0x0044001a
  .word 0x00001012
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0x1000000a
  .word 0x00000000
  .word 0x8e234658
  .word 0x00031200
  .word 0x00431823
  .word 0x24020006
  .word 0x0062001a
  .word 0x00001012
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0x240200ff
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0xa3a5008f
  .word 0x0000802d
  .word 0x10000008
  .word 0x00000000
  .word 0x00101200
  .word 0x02221021
  .word 0x24442e30
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020006
  .word 0x1440fff7
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050026
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c0341a0
  .word 0x44830800
  .word 0xc7a00080
  .word 0x46000d80
  .word 0xe7b60070
  .word 0xc7b50084
  .word 0x3c034200
  .word 0x44830000
  .word 0x00000000
  .word 0x46150500
  .word 0xe7b40074
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00078
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0007c
  .word 0x26243430
  .word 0x27a50070
  .word 0x0c087638
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050027
  .word 0x0c087328
  .word 0x00000000
  .word 0xe7b60070
  .word 0x3c0342cc
  .word 0x44830000
  .word 0x00000000
  .word 0x46150000
  .word 0xe7a00074
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00078
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0007c
  .word 0x26243530
  .word 0x27a50070
  .word 0x0c087638
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050026
  .word 0x0c087328
  .word 0x00000000
  .word 0xe7b60070
  .word 0x3c034180
  .word 0x44830000
  .word 0x00000000
  .word 0x46140000
  .word 0xe7a00074
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00078
  .word 0x3c024258
  .word 0xafa2007c
  .word 0x26243630
  .word 0x27a50070
  .word 0x0c087638
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405001d
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034210
  .word 0x44830000
  .word 0x00000000
  .word 0x46150000
  .word 0x3c034040
  .word 0x44830800
  .word 0x00000000
  .word 0x460100c1
  .word 0x3c0342b6
  .word 0x44830000
  .word 0x00000000
  .word 0x46150000
  .word 0x46010081
  .word 0x3c0341b0
  .word 0x44830800
  .word 0xc7a00080
  .word 0x46000800
  .word 0xe7a00070
  .word 0x8e236074
  .word 0x28610005
  .word 0x1420000f
  .word 0x00000000
  .word 0xc620606c
  .word 0x46800060
  .word 0x46031001
  .word 0x46000842
  .word 0x2463fffc
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0x00000000
  .word 0x46001800
  .word 0xe7a00074
  .word 0x10000002
  .word 0x00000000
  .word 0xe7a30074
  .word 0x8c44000c
  .word 0x00041880
  .word 0x00641821
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00078
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0007c
  .word 0x240200ff
  .word 0xa3a2008c
  .word 0xa3a2008d
  .word 0xa3a2008e
  .word 0x8e23463c
  .word 0x10600017
  .word 0x00000000
  .word 0x24020003
  .word 0x10620009
  .word 0x00000000
  .word 0x24020001
  .word 0x10620006
  .word 0x00000000
  .word 0x24020002
  .word 0x10620003
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0xc6204650
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e234650
  .word 0x24020003
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46180002
  .word 0x46190042
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
  .word 0xa3a3008f
  .word 0x0000802d
  .word 0x10000008
  .word 0x00000000
  .word 0x00101200
  .word 0x02221021
  .word 0x24443430
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020003
  .word 0x1440fff7
  .word 0x00000000
  .word 0x26243730
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405002c
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x0000902d
  .word 0x3c03423c
  .word 0x44830800
  .word 0xc7a00080
  .word 0x46000d40
  .word 0x3c03422c
  .word 0x44830000
  .word 0x00000000
  .word 0x46170500
  .word 0x10000027
  .word 0x00000000
  .word 0xe7b50070
  .word 0x00121040
  .word 0x00521021
  .word 0x00021080
  .word 0x00521021
  .word 0x00021040
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600a580
  .word 0xe7b60074
  .word 0xc600000c
  .word 0x46800020
  .word 0xe7a00078
  .word 0xc6000010
  .word 0x46800020
  .word 0xe7a0007c
  .word 0x00121240
  .word 0x02229821
  .word 0x26643830
  .word 0x27a50070
  .word 0x0c087638
  .word 0x00000000
  .word 0xc600000c
  .word 0x46800020
  .word 0x4600a800
  .word 0xe7a00070
  .word 0xe7b60074
  .word 0x3c02438a
  .word 0xafa20078
  .word 0xc6000010
  .word 0x46800020
  .word 0xe7a0007c
  .word 0x26643930
  .word 0x27a50070
  .word 0x0c087638
  .word 0x00000000
  .word 0x26520001
  .word 0x2a430004
  .word 0x1460ffd8
  .word 0x00000000
  .word 0x240300ff
  .word 0xa3a3008c
  .word 0xa3a3008d
  .word 0xa3a3008e
  .word 0x0000802d
  .word 0x10000047
  .word 0x00000000
  .word 0x8e23463c
  .word 0x10600017
  .word 0x00000000
  .word 0x24020003
  .word 0x10620009
  .word 0x00000000
  .word 0x24020001
  .word 0x10620006
  .word 0x00000000
  .word 0x24020002
  .word 0x10620003
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0xc6204650
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e234650
  .word 0x24020003
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000e03
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46180002
  .word 0x46190042
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
  .word 0xa3a3008f
  .word 0x00101240
  .word 0x02229021
  .word 0x26443830
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26443930
  .word 0x27a5008c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26100001
  .word 0x2a030004
  .word 0x1460ffb8
  .word 0x00000000
  .word 0xdfbf0060
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
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002289B0
void FUN_002289B0(void)
{
    u8* work;
    u8* base;
    u32 table0;
    s32 i;
    u8* target;
    u8* target2;
    u32 resource;
    u32 texture;
    s32 j;
    void (**setState)(u32, u32);
    void (**setState2)(u32, u32);
    void (**setQuad)(u32*, u32, u32, u32, u32);
    void (**setQuadA)(u32*, u32, u32, u32, u32);
    void (**setQuadB)(u32*, u32, u32, u32, u32);
    void (**setQuadC)(u32*, u32, u32, u32, u32);

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    work = (u8*)sBcmPanel;
    table0 = FUN_0021c3f0(0);

    setState = (void (**)(u32, u32))D_00960090_abs;
    (*setState)(9, 2);
    RpSkyRenderStateSet(3, (void*)0x717fb);
    RpSkyRenderStateSet(2, (void*)0x44);

    for (i = 0; i < 6; ++i) {
        if (i < 4) {
            resource = FUN_0021cca0(table0, i + 0x1e);
        } else {
            resource = FUN_0021cca0(table0, i + 0x1a);
        }
        texture = FUN_0021cce0(resource);
        (*setState)(1, texture);

        target = work + i * 0x100 + 0x2e30;
        setQuad = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
        (*setQuad)((u32*)target, 4, 0, 1, 2);
        (*setQuad)((u32*)target, 4, 0, 2, 3);
    }

    resource = FUN_0021cca0(table0, 0x26);
    setState2 = (void (**)(u32, u32))D_00960090_abs;
    texture = FUN_0021cce0(resource);
    (*setState2)(1, texture);

    setQuadA = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
    (*setQuadA)((u32*)(work + 0x3430), 4, 0, 1, 2);
    (*setQuadA)((u32*)(work + 0x3430), 4, 0, 2, 3);

    resource = FUN_0021cca0(table0, 0x27);
    texture = FUN_0021cce0(resource);
    (*setState2)(1, texture);

    (*setQuadA)((u32*)(work + 0x3530), 4, 0, 1, 2);
    (*setQuadA)((u32*)(work + 0x3530), 4, 0, 2, 3);

    resource = FUN_0021cca0(table0, 0x26);
    texture = FUN_0021cce0(resource);
    (*setState2)(1, texture);

    (*setQuadA)((u32*)(work + 0x3630), 4, 0, 1, 2);
    (*setQuadA)((u32*)(work + 0x3630), 4, 0, 2, 3);

    resource = FUN_0021cca0(table0, 0x2c);
    texture = FUN_0021cce0(resource);
    (*setState2)(1, texture);

    for (j = 0; j < 4; ++j) {
        base = work + j * 0x200;
        target2 = base + 0x3830;
        setQuadB = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
        (*setQuadB)((u32*)target2, 4, 0, 1, 2);
        (*setQuadB)((u32*)target2, 4, 0, 2, 3);

        target2 = base + 0x3930;
        (*setQuadB)((u32*)target2, 4, 0, 1, 2);
        (*setQuadB)((u32*)target2, 4, 0, 2, 3);
    }

    resource = FUN_0021cca0(table0, 0x23);
    texture = FUN_0021cce0(resource);
    (*setState)(1, texture);

    setQuadC = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
    (*setQuadC)((u32*)(work + 0x4230), 4, 0, 1, 2);
    (*setQuadC)((u32*)(work + 0x4230), 4, 0, 2, 3);
    (*setQuadC)((u32*)(work + 0x4330), 4, 0, 1, 2);
    (*setQuadC)((u32*)(work + 0x4330), 4, 0, 2, 3);
}

#pragma push
/* W389 measured opt_lifetimes on: nd1910/3296B -> nd1908/3296B (window 3328B). */
#pragma opt_lifetimes on
// FUN_00228E40
#ifndef PC_BUILD
asm void FUN_00228E40(void)
{
  .set noreorder
  .word 0x27bdfef0
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
  .word 0x8f82b618
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x240500e6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f92b618
  .word 0x0000202d
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040a82d
  .word 0x24040006
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040a02d
  .word 0x26424660
  .word 0x7fa200b0
  .word 0x26516050
  .word 0xc6557214
  .word 0x8e43463c
  .word 0x10600011
  .word 0x00000000
  .word 0x24020002
  .word 0x10620003
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0xc6404650
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d83
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x8e434650
  .word 0x24020003
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d83
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x24050e59
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e434644
  .word 0x24020003
  .word 0x10620009
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x10000002
  .word 0x00000000
  .word 0x4480a000
  .word 0x4614b502
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46140581
  .word 0x02a0202d
  .word 0x24050023
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c03423c
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a000f0
  .word 0x8e446068
  .word 0x8e43606c
  .word 0x00832023
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0x00031840
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0xc6210004
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020000
  .word 0xe7a000f4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000f8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000fc
  .word 0x26444230
  .word 0x27a500f0
  .word 0x0c087638
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050023
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c03423c
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000840
  .word 0xc440000c
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000f0
  .word 0x8e446068
  .word 0x8e43606c
  .word 0x00832023
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0x00031840
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0xc6210004
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020000
  .word 0xe7a000f4
  .word 0x3c03439c
  .word 0xafa300f8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000fc
  .word 0x26444330
  .word 0x27a500f0
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2010c
  .word 0xa3a2010d
  .word 0xa3a2010e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46140002
  .word 0x46150502
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3010f
  .word 0x26444230
  .word 0x27a5010c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26444330
  .word 0x27a5010c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0000982d
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44040000
  .word 0x00000000
  .word 0x308400ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x308400ff
  .word 0x308400ff
  .word 0x00041880
  .word 0x00642021
  .word 0x00041880
  .word 0x00831821
  .word 0x00032040
  .word 0x24030064
  .word 0x0083001a
  .word 0x00002012
  .word 0x2403ff00
  .word 0x00831825
  .word 0xafa300e0
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010005
  .word 0x00000000
  .word 0x4600a024
  .word 0x44040000
  .word 0x10000006
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x2403ff00
  .word 0x00831825
  .word 0xafa300d0
  .word 0x3c03cccc
  .word 0x3463cc00
  .word 0x00831825
  .word 0xafa300c0
  .word 0x10000120
  .word 0x00000000
  .word 0x001310c0
  .word 0x00531821
  .word 0x000310c0
  .word 0x00621021
  .word 0x00021900
  .word 0x7ba200b0
  .word 0x00438021
  .word 0x0280202d
  .word 0x2405002b
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040b02d
  .word 0x8e170004
  .word 0x3c034282
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000840
  .word 0xc440000c
  .word 0x46800020
  .word 0x46000880
  .word 0xe7a200f0
  .word 0x00131040
  .word 0x00531021
  .word 0x00021080
  .word 0x00531021
  .word 0x0002f040
  .word 0xc6210004
  .word 0x3c024198
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x449e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000840
  .word 0xe7a100f4
  .word 0x46001024
  .word 0x44020000
  .word 0x00000000
  .word 0x00022900
  .word 0x46000824
  .word 0x44020000
  .word 0x00000000
  .word 0x000230c0
  .word 0x02e0202d
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420001
  .word 0x10400004
  .word 0x00000000
  .word 0x8fa500e0
  .word 0x1000000a
  .word 0x00000000
  .word 0x8e436068
  .word 0x8e42606c
  .word 0x00621023
  .word 0x16620004
  .word 0x00000000
  .word 0x8fa500d0
  .word 0x10000002
  .word 0x00000000
  .word 0x8fa500c0
  .word 0x02e0202d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x8e030008
  .word 0x24020001
  .word 0x1062000c
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050030
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040b02d
  .word 0x10000006
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050031
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040b02d
  .word 0x24020147
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a000f0
  .word 0x00131040
  .word 0x00531021
  .word 0x00021080
  .word 0x00531021
  .word 0x0002b840
  .word 0xc6210004
  .word 0x3c024200
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x44970000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000f4
  .word 0xc6c0000c
  .word 0x46800020
  .word 0xe7a000f8
  .word 0xc6c00010
  .word 0x46800020
  .word 0xe7a000fc
  .word 0x26040010
  .word 0x27a500f0
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2010c
  .word 0xa3a2010d
  .word 0xa3a2010e
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3010f
  .word 0x26040010
  .word 0x27a5010c
  .word 0x0c087654
  .word 0x00000000
  .word 0x24020119
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a000f0
  .word 0xc6210004
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x44970000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000f4
  .word 0x26040110
  .word 0x24050003
  .word 0x8e06000c
  .word 0x24070001
  .word 0x27a800f0
  .word 0x0c08e2fc
  .word 0x00000000
  .word 0x8e436068
  .word 0x8e42606c
  .word 0x00621023
  .word 0x16620007
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2010c
  .word 0xa3a2010d
  .word 0xa3a2010e
  .word 0x10000005
  .word 0x00000000
  .word 0x2402005a
  .word 0xa3a2010c
  .word 0xa3a2010d
  .word 0xa3a2010e
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3010f
  .word 0x26040110
  .word 0x27a5010c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26040210
  .word 0x27a5010c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26040310
  .word 0x27a5010c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405002b
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034260
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a000f0
  .word 0xc6210004
  .word 0x3c034180
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0x449e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000f4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000f8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000fc
  .word 0x26040410
  .word 0x27a500f0
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e436068
  .word 0x8e42606c
  .word 0x00621023
  .word 0x16620009
  .word 0x00000000
  .word 0x240200c7
  .word 0xa3a2010c
  .word 0x240200d3
  .word 0xa3a2010d
  .word 0x240200e3
  .word 0xa3a2010e
  .word 0x10000007
  .word 0x00000000
  .word 0x24020044
  .word 0xa3a2010c
  .word 0x2402004e
  .word 0xa3a2010d
  .word 0x24020050
  .word 0xa3a2010e
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3010f
  .word 0x26040410
  .word 0x27a5010c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26730001
  .word 0x8e436070
  .word 0x0263182a
  .word 0x1460fede
  .word 0x00000000
  .word 0x8e444644
  .word 0x24030003
  .word 0x10830003
  .word 0x00000000
  .word 0x10000103
  .word 0x00000000
  .word 0x26526d00
  .word 0x0280202d
  .word 0x2405002b
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040982d
  .word 0x8e500004
  .word 0x3c034282
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000840
  .word 0xc440000c
  .word 0x46800020
  .word 0x46000880
  .word 0xe7a200f0
  .word 0xc6210004
  .word 0x3c024198
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c02429a
  .word 0x44820000
  .word 0x00000000
  .word 0x46000840
  .word 0xe7a100f4
  .word 0x46001024
  .word 0x44020000
  .word 0x00000000
  .word 0x00022900
  .word 0x46000824
  .word 0x44020000
  .word 0x00000000
  .word 0x000230c0
  .word 0x0200202d
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46160002
  .word 0x46150042
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010005
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x10000006
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x2402ff00
  .word 0x00622825
  .word 0x0200202d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x8e430008
  .word 0x24020001
  .word 0x1062000c
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050030
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040982d
  .word 0x10000006
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050031
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040982d
  .word 0x24020147
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a000f0
  .word 0xc6210004
  .word 0x3c024204
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c02429a
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a000f4
  .word 0xc660000c
  .word 0x46800020
  .word 0xe7a000f8
  .word 0xc6600010
  .word 0x46800020
  .word 0xe7a000fc
  .word 0x26440010
  .word 0x27a500f0
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2010c
  .word 0xa3a2010d
  .word 0xa3a2010e
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46160002
  .word 0x46150502
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3010f
  .word 0x26440010
  .word 0x27a5010c
  .word 0x0c087654
  .word 0x00000000
  .word 0x24020119
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a000f0
  .word 0xc6210004
  .word 0x3c0241f8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c02429a
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a000f4
  .word 0x26440110
  .word 0x24050003
  .word 0x8e46000c
  .word 0x24070001
  .word 0x27a800f0
  .word 0x0c08e2fc
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2010c
  .word 0xa3a2010d
  .word 0xa3a2010e
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3010f
  .word 0x26440110
  .word 0x27a5010c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26440210
  .word 0x27a5010c
  .word 0x0c087654
  .word 0x00000000
  .word 0x26440310
  .word 0x27a5010c
  .word 0x0c087654
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405002b
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c034260
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a000f0
  .word 0xc6210004
  .word 0x3c034180
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c03429a
  .word 0x44830000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a000f4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000f8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000fc
  .word 0x26440410
  .word 0x27a500f0
  .word 0x0c087638
  .word 0x00000000
  .word 0x9202001c
  .word 0xa3a2010c
  .word 0x9202001d
  .word 0xa3a2010d
  .word 0x9202001e
  .word 0xa3a2010e
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3010f
  .word 0x26440410
  .word 0x27a5010c
  .word 0x0c087654
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
  .word 0x27bd0110
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_lifetimes reset

/* W389 measured opt_loop_invariants on: nd797/1676B -> nd716/1676B (window 1728B). */
// FUN_00229B40
#ifndef PC_BUILD
asm void FUN_00229B40(void)
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
  .word 0x8f82b618
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x240500e6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f92b618
  .word 0x0000202d
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040a82d
  .word 0x24040006
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040b02d
  .word 0x26424660
  .word 0x7fa200a0
  .word 0x02a0202d
  .word 0x24050023
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c170096
  .word 0x26f70090
  .word 0x0280202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ee20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26444230
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26444230
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26444330
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26444330
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000982d
  .word 0x100000c7
  .word 0x00000000
  .word 0x001310c0
  .word 0x00531821
  .word 0x000310c0
  .word 0x00621021
  .word 0x00021900
  .word 0x7ba200a0
  .word 0x00438821
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x8e240004
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0ec4d8
  .word 0x00000000
  .word 0x8e230008
  .word 0x24020001
  .word 0x1062000c
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050030
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040a02d
  .word 0x10000006
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050031
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0280202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ee20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e436068
  .word 0x8e42606c
  .word 0x00621023
  .word 0x1662000c
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
  .word 0x1000000a
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
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26240010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c1e0096
  .word 0x27de0090
  .word 0x24040001
  .word 0x0c08e450
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8fc20000
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
  .word 0x26240110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240210
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240210
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02c0202d
  .word 0x2405002b
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0280202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8fc20000
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
  .word 0x26240410
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240410
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x8e436070
  .word 0x0263182a
  .word 0x1460ff37
  .word 0x00000000
  .word 0x8e434644
  .word 0x24040003
  .word 0x10640003
  .word 0x00000000
  .word 0x100000ae
  .word 0x00000000
  .word 0x26526d00
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x8e440004
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0ec4d8
  .word 0x00000000
  .word 0x8e430008
  .word 0x24020001
  .word 0x1062000c
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050030
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040a02d
  .word 0x10000006
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050031
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040a02d
  .word 0x3c110096
  .word 0x26310090
  .word 0x0280202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
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
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26440010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0c08e450
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
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
  .word 0x26440110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440210
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440210
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x02c0202d
  .word 0x2405002b
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
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
  .word 0x26440410
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26440410
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
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
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#undef BCM_29_STATE
#undef BCM_29_STATE2
#undef BCM_29_QUAD
 

// Previous body was a wrong-helper stub unrelated to retail (624B window).
// Rewritten from disasm: retail loops 3 quad-setter calls, then computes a
// flag from state fields 0x463c/0x4644, gating func_003b1360 + a resource
// draw, matching FUN_0022C5A0's D_00960090_abs/D_0096009C_abs style.
// nd 89->7 (obj 612B/624B); residual is the state-1 loop's register-bank
// Fixed: swapping i and record declaration order resolved the s3/s4 register coloring.
#pragma push
#pragma opt_loop_invariants on
// FUN_0022A2B0
#ifndef PC_BUILD
asm void FUN_0022A2B0(void)
{
  .set noreorder
  .word 0x27bdff00
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
  .word 0x8f82b618
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x240500e6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f92b618
  .word 0x0000202d
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040a82d
  .word 0x24040006
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040a02d
  .word 0x26424660
  .word 0x7fa200b0
  .word 0x26516050
  .word 0xc6557214
  .word 0x8e43463c
  .word 0x10600011
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0xc6404650
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d83
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x8e434650
  .word 0x24020003
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d83
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x24050fb4
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e434644
  .word 0x24020004
  .word 0x10620009
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x10000002
  .word 0x00000000
  .word 0x4480a000
  .word 0x4614b502
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46140581
  .word 0x02a0202d
  .word 0x24050023
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c03423c
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a000e0
  .word 0x8e446068
  .word 0x8e43606c
  .word 0x00832023
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0x00031840
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0xc6210004
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020000
  .word 0xe7a000e4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000e8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000ec
  .word 0x26444230
  .word 0x27a500e0
  .word 0x0c087638
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050023
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c03423c
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000840
  .word 0xc440000c
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000e0
  .word 0x8e446068
  .word 0x8e43606c
  .word 0x00832023
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0x00031840
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0xc6210004
  .word 0x3c034198
  .word 0x44830000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020000
  .word 0xe7a000e4
  .word 0x3c03439c
  .word 0xafa300e8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000ec
  .word 0x26444330
  .word 0x27a500e0
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46140002
  .word 0x46150502
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300ff
  .word 0x26444230
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x26444330
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x0000982d
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010005
  .word 0x00000000
  .word 0x4600a024
  .word 0x44040000
  .word 0x10000006
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x2403ff00
  .word 0x00831825
  .word 0xafa300d0
  .word 0x3c03cccc
  .word 0x3463cc00
  .word 0x00831825
  .word 0xafa300c0
  .word 0x10000107
  .word 0x00000000
  .word 0x00131180
  .word 0x00531021
  .word 0x00021900
  .word 0x7ba200b0
  .word 0x00438021
  .word 0x0280202d
  .word 0x2405001a
  .word 0x0c087328
  .word 0x00000000
  .word 0x8e160000
  .word 0x3c034282
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000840
  .word 0xc440000c
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000e0
  .word 0x00131040
  .word 0x00531021
  .word 0x00021080
  .word 0x00531021
  .word 0x0002f040
  .word 0xc6210004
  .word 0x3c024198
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x449e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000e4
  .word 0x8e436068
  .word 0x8e42606c
  .word 0x00621023
  .word 0x16620004
  .word 0x00000000
  .word 0x8fb700d0
  .word 0x10000002
  .word 0x00000000
  .word 0x8fb700c0
  .word 0xc7a000e0
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00022900
  .word 0xc7a000e4
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x000230c0
  .word 0x02c0202d
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x02c0202d
  .word 0x02e0282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050028
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034393
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a000e0
  .word 0x00131840
  .word 0x00731821
  .word 0x00031880
  .word 0x00731821
  .word 0x0003b040
  .word 0xc6210004
  .word 0x3c0341f8
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0x44960000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000e4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000e8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000ec
  .word 0x26040010
  .word 0x27a500e0
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300ff
  .word 0x26040010
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x2402013b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a000e0
  .word 0xc6210004
  .word 0x3c0241e8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x44960000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000e4
  .word 0x26040110
  .word 0x24050002
  .word 0x8e060004
  .word 0x24070001
  .word 0x27a800e0
  .word 0x0c08e2fc
  .word 0x00000000
  .word 0x8e436068
  .word 0x8e42606c
  .word 0x00621023
  .word 0x16620007
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
  .word 0x10000005
  .word 0x00000000
  .word 0x2402005a
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300ff
  .word 0x26040110
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x26040210
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x26040310
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405001a
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034260
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a000e0
  .word 0xc6210004
  .word 0x3c034180
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0x449e0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000e4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000e8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000ec
  .word 0x26040310
  .word 0x27a500e0
  .word 0x0c087638
  .word 0x00000000
  .word 0x8e436068
  .word 0x8e42606c
  .word 0x00621023
  .word 0x16620009
  .word 0x00000000
  .word 0x240200c7
  .word 0xa3a200fc
  .word 0x240200d3
  .word 0xa3a200fd
  .word 0x240200e3
  .word 0xa3a200fe
  .word 0x10000007
  .word 0x00000000
  .word 0x24020044
  .word 0xa3a200fc
  .word 0x2402004e
  .word 0xa3a200fd
  .word 0x24020050
  .word 0xa3a200fe
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300ff
  .word 0x26040310
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x26730001
  .word 0x8e436070
  .word 0x0263182a
  .word 0x1460fef7
  .word 0x00000000
  .word 0x8e444644
  .word 0x24030004
  .word 0x10830003
  .word 0x00000000
  .word 0x100000ee
  .word 0x00000000
  .word 0x26526d00
  .word 0x0280202d
  .word 0x2405001a
  .word 0x0c087328
  .word 0x00000000
  .word 0x8e530000
  .word 0x3c034282
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000840
  .word 0xc440000c
  .word 0x46800020
  .word 0x46000800
  .word 0xe7a000e0
  .word 0xc6210004
  .word 0x3c024198
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c02429a
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a000e4
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46160002
  .word 0x46150502
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010005
  .word 0x00000000
  .word 0x4600a024
  .word 0x44030000
  .word 0x10000006
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x2402ff00
  .word 0x00628025
  .word 0xc7a000e0
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00022900
  .word 0xc7a000e4
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x000230c0
  .word 0x0260202d
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x0260202d
  .word 0x0200282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050028
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034393
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a000e0
  .word 0xc6210004
  .word 0x3c034204
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c03429a
  .word 0x44830000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a000e4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000e8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000ec
  .word 0x26440010
  .word 0x27a500e0
  .word 0x0c087638
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300ff
  .word 0x26440010
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x2402013b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a000e0
  .word 0xc6210004
  .word 0x3c0241f8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c02429a
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a000e4
  .word 0x26440110
  .word 0x24050002
  .word 0x8e460004
  .word 0x24070001
  .word 0x27a800e0
  .word 0x0c08e2fc
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200fc
  .word 0xa3a200fd
  .word 0xa3a200fe
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300ff
  .word 0x26440110
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x26440210
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x26440310
  .word 0x27a500fc
  .word 0x0c087654
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405001a
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c034260
  .word 0x44830800
  .word 0xc6200000
  .word 0x46000800
  .word 0xe7a000e0
  .word 0xc6210004
  .word 0x3c034180
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c03429a
  .word 0x44830000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a000e4
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a000e8
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a000ec
  .word 0x26440310
  .word 0x27a500e0
  .word 0x0c087638
  .word 0x00000000
  .word 0x9202001c
  .word 0xa3a200fc
  .word 0x9202001d
  .word 0xa3a200fd
  .word 0x9202001e
  .word 0xa3a200fe
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a300ff
  .word 0x26440310
  .word 0x27a500fc
  .word 0x0c087654
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
  .word 0x27bd0100
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_loop_invariants reset

// FUN_0022AE80
#ifndef PC_BUILD
asm void FUN_0022AE80(void)
{
  .set noreorder
  .word 0x27bdff60
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
  .word 0x8f82b618
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x240500e6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f92b618
  .word 0x0000202d
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040a82d
  .word 0x24040006
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040a02d
  .word 0x265e4660
  .word 0x02a0202d
  .word 0x24050023
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c170096
  .word 0x26f70090
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ee20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26444230
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26444230
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26444330
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26444330
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0000982d
  .word 0x1000009a
  .word 0x00000000
  .word 0x00131180
  .word 0x00531021
  .word 0x00021100
  .word 0x03c28821
  .word 0x8e240000
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0ec4d8
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050028
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c160096
  .word 0x26d60090
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ec20000
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
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26240010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0c08e450
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ec20000
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
  .word 0x26240110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240210
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240210
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405001a
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8ee20000
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
  .word 0x26240310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26240310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26730001
  .word 0x8e436070
  .word 0x0263182a
  .word 0x1460ff64
  .word 0x00000000
  .word 0x8e444644
  .word 0x24030004
  .word 0x10830003
  .word 0x00000000
  .word 0x10000096
  .word 0x00000000
  .word 0x26536d00
  .word 0x8e446d00
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0ec4d8
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050028
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c110096
  .word 0x26310090
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
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
  .word 0x3c100096
  .word 0x2610009c
  .word 0x26640010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26640010
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0c08e450
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
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
  .word 0x26640110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26640110
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26640210
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26640210
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26640310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26640310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405001a
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c087338
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x8e220000
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
  .word 0x26640310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070001
  .word 0x24080002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x26640310
  .word 0x24050004
  .word 0x0000302d
  .word 0x24070002
  .word 0x24080003
  .word 0x8e020000
  .word 0x0040f809
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
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#undef BCM_2AE_STATE
#undef BCM_2AE_QUAD
// FUN_0022b4e0
u32 bcmPanel0022b4e0(void)
{
    K_ASSERT(sBcmPanel != NULL, 0xe6);
    return *sBcmPanel & 2;
}

// FUN_0022b530
u32 bcmPanel0022b530(void)
{
    K_ASSERT(sBcmPanel != NULL, 0xe6);
    return *sBcmPanel & 8;
}

// FUN_0022b580
void bcmPanel0022b580(void)
{
    int iVar1;
    u32 uVar2;
    u32 uVar3;
    int iVar4;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    iVar1 = (int)sBcmPanel;
    uVar2 = FUN_0021c3f0(0);
    for (iVar4 = 0; iVar4 < 3; iVar4++) {
        uVar3 = FUN_0021cca0(uVar2, iVar4 + 0x3e);
        FUN_0021d3b0(iVar1 + iVar4 * 0x100 + 0x65f0, uVar3);
    }
}

#pragma push
#pragma opt_loop_invariants on
// FUN_0022B630
#ifndef PC_BUILD
asm void FUN_0022B630(void)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x8f82b618
  .word 0x14400006
  .word 0x00000000
  .word 0x3c040069
  .word 0x2484e380
  .word 0x240500e6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f91b618
  .word 0x0000202d
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040a02d
  .word 0x24040006
  .word 0x0c0870fc
  .word 0x00000000
  .word 0x0040a82d
  .word 0xc6347214
  .word 0x0000982d
  .word 0x100000ab
  .word 0x00000000
  .word 0x2665003e
  .word 0x0280202d
  .word 0x0c087328
  .word 0x00000000
  .word 0x0040802d
  .word 0x8e24463c
  .word 0x24020004
  .word 0x10820034
  .word 0x00000000
  .word 0x24020003
  .word 0x10820031
  .word 0x00000000
  .word 0x24030001
  .word 0x1083002e
  .word 0x00000000
  .word 0x24020002
  .word 0x1082002b
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000004d
  .word 0x00000000
  .word 0x12620019
  .word 0x00000000
  .word 0x1263000e
  .word 0x00000000
  .word 0x12600003
  .word 0x00000000
  .word 0x10000045
  .word 0x00000000
  .word 0x3c024369
  .word 0xafa20090
  .word 0x2402017b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00094
  .word 0x1000003c
  .word 0x00000000
  .word 0x3c0242c4
  .word 0xafa20090
  .word 0x2402017b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00094
  .word 0x10000033
  .word 0x00000000
  .word 0x240201e5
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00090
  .word 0x2402017b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00094
  .word 0x10000027
  .word 0x00000000
  .word 0x24020002
  .word 0x1262001a
  .word 0x00000000
  .word 0x24020001
  .word 0x1262000e
  .word 0x00000000
  .word 0x12600003
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0x3c024341
  .word 0xafa20090
  .word 0x2402017b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00094
  .word 0x10000014
  .word 0x00000000
  .word 0x3c024268
  .word 0xafa20090
  .word 0x2402017b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00094
  .word 0x1000000b
  .word 0x00000000
  .word 0x240201bd
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00090
  .word 0x2402017b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00094
  .word 0xc600000c
  .word 0x46800020
  .word 0xe7a00098
  .word 0xc6000010
  .word 0x46800020
  .word 0xe7a0009c
  .word 0x00131200
  .word 0x02221021
  .word 0x245265f0
  .word 0x0240202d
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0x0000482d
  .word 0x3c024f00
  .word 0x44820800
  .word 0x3c038000
  .word 0x1000002e
  .word 0x00000000
  .word 0x00091080
  .word 0x02024021
  .word 0x005d1021
  .word 0x24470080
  .word 0x9106001c
  .word 0x9105001d
  .word 0x9104001e
  .word 0x9102001f
  .word 0xa0e60000
  .word 0xa0e50001
  .word 0xa0e40002
  .word 0xa0e20003
  .word 0x9102001f
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00022042
  .word 0x30420001
  .word 0x00822025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x46140002
  .word 0x46000836
  .word 0x45010007
  .word 0x00000000
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x304200ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46010001
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00431025
  .word 0x304200ff
  .word 0xa0e20003
  .word 0x25290001
  .word 0x29220004
  .word 0x1440ffd1
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50080
  .word 0x0c087758
  .word 0x00000000
  .word 0x26730001
  .word 0x2a630003
  .word 0x1460ff54
  .word 0x00000000
  .word 0x240300c6
  .word 0xa3a300ac
  .word 0x240300ca
  .word 0xa3a300ad
  .word 0x240300db
  .word 0xa3a300ae
  .word 0xc78083e8
  .word 0x46140042
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44040000
  .word 0x00000000
  .word 0x308400ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x308400ff
  .word 0xa3a400af
  .word 0x93a300ac
  .word 0x00032600
  .word 0x93a300ad
  .word 0x00031c00
  .word 0x00832025
  .word 0x93a300ae
  .word 0x00031a00
  .word 0x00642025
  .word 0x93a300af
  .word 0x00648025
  .word 0x8e24463c
  .word 0x24030003
  .word 0x10830088
  .word 0x00000000
  .word 0x24030001
  .word 0x1083002b
  .word 0x00000000
  .word 0x24030002
  .word 0x10830028
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x100000a8
  .word 0x00000000
  .word 0x8e2268f0
  .word 0x8c440024
  .word 0x10800015
  .word 0x00000000
  .word 0x24051020
  .word 0x24060be8
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x8e2468f0
  .word 0x24051020
  .word 0x24060c98
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x8e2268f0
  .word 0x8c440024
  .word 0x0200282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x8e2468f0
  .word 0x0200282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x10000090
  .word 0x00000000
  .word 0x0040202d
  .word 0x24051020
  .word 0x24060be8
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x8e2468f0
  .word 0x0200282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x10000085
  .word 0x00000000
  .word 0x8e2268f0
  .word 0x8c440024
  .word 0x10800015
  .word 0x00000000
  .word 0x24050c60
  .word 0x24060be8
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x8e2468f0
  .word 0x24050c60
  .word 0x24060c98
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x8e2268f0
  .word 0x8c440024
  .word 0x0200282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x8e2468f0
  .word 0x0200282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050c60
  .word 0x24060be8
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x8e2468f0
  .word 0x0200282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x8e2368f8
  .word 0x10600061
  .word 0x00000000
  .word 0x8e2268f4
  .word 0x24450020
  .word 0x02a0202d
  .word 0x0c087328
  .word 0x00000000
  .word 0x3c034321
  .word 0xafa30090
  .word 0x3c0343be
  .word 0xafa30094
  .word 0xc440000c
  .word 0x46800020
  .word 0xe7a00098
  .word 0xc4400010
  .word 0x46800020
  .word 0xe7a0009c
  .word 0x26246900
  .word 0x27a50090
  .word 0x0c087638
  .word 0x00000000
  .word 0x2402008c
  .word 0xa3a200ac
  .word 0x24020096
  .word 0xa3a200ad
  .word 0x240200b4
  .word 0xa3a200ae
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46140042
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
  .word 0xa3a300af
  .word 0x26246900
  .word 0x27a500ac
  .word 0x0c087654
  .word 0x00000000
  .word 0x1000002b
  .word 0x00000000
  .word 0x8e244644
  .word 0x24030002
  .word 0x10830006
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0x8e2268f0
  .word 0x8c440024
  .word 0x10800015
  .word 0x00000000
  .word 0x24050c60
  .word 0x24060be8
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x8e2468f0
  .word 0x24050c60
  .word 0x24060c98
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x8e2268f0
  .word 0x8c440024
  .word 0x0200282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x8e2468f0
  .word 0x0200282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050c60
  .word 0x24060be8
  .word 0x0c0ec35c
  .word 0x00000000
  .word 0x8e2468f0
  .word 0x0200282d
  .word 0x0c0ec388
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_loop_invariants reset

// Previous body was a wrong-helper stub unrelated to retail (720B window).
// Rewritten from disasm: retail draws 3 rects (2 sharing a resource fetch)
// with a shared alpha255=255*weight computed once and reused, matching
// FUN_0022BCF0
void FUN_0022BCF0(void)
{
    u8* work;
    u32 table6;
    u32 resource;
    u32 texture;
    s32 i;
    u32 state1;
    u32 state2;
    u32 flag;
    u8* record;
    void (**setState)(u32, u32);
    void (**setQuad)(u32*, u32, u32, u32, u32);

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    work = (u8*)sBcmPanel;
    FUN_0021c3f0(0);
    table6 = FUN_0021c3f0(6);
    setState = (void (**)(u32, u32))D_00960090_abs;
    (*setState)(1, 0);
    RpSkyRenderStateSet(3, (void*)0x717fb);
    RpSkyRenderStateSet(2, (void*)0x44);

    for (i = 0; i < 3; i++) {
        record = work + i * 0x100 + 0x65f0;
        setQuad = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
        (*setQuad)((u32*)record, 4, 0, 1, 2);
        (*setQuad)((u32*)record, 4, 0, 2, 3);
    }

    state1 = *(u32*)(work + 0x463c);
    flag = 0;
    switch (state1) {
    case 0:
    case 2:
    case 1:
        flag = 1;
        break;
    case 3:
        state2 = *(u32*)(work + 0x4644);
        switch (state2) {
        case 1:
            flag = 1;
            break;
        }
        break;
    }

    if (flag != 0) {
        func_003b1360(*(u32*)(work + 0x68f0), 1, 0);
        if (*(u32*)(work + 0x68f8) != 0) {
            resource = FUN_0021cca0(table6, *(u32*)(work + 0x68f4) + 0x20);
            texture = FUN_0021cce0(resource);
            (*setState)(1, texture);
            RpSkyRenderStateSet(3, (void*)0x717fb);
            RpSkyRenderStateSet(2, (void*)0x44);
            setQuad = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_abs;
            (*setQuad)((u32*)(work + 0x6900), 4, 0, 1, 2);
            (*setQuad)((u32*)(work + 0x6900), 4, 0, 2, 3);
        }
    }
}

// FUN_0022BF60
void FUN_0022BF60(void)
{
    u8* base;
    u8* slot;
    u32 table0;
    u32 table6;
    u32 resource;
    u32 state;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    base = (u8*)sBcmPanel;
    table0 = FUN_0021c3f0(0);
    table6 = FUN_0021c3f0(6);
    FUN_0022C210();
    slot = base + 0x6d00;
    state = *(u32*)(slot + 8);
    if (state == 1) {
        goto panel_resource_31;
    }
    switch (state) {
    case 0:
        goto panel_resource_30;
    default:
        goto panel_resource_done;
    }
panel_resource_30:
    resource = FUN_0021cca0(table0, 0x30);
    goto panel_resource_done;
panel_resource_31:
    resource = FUN_0021cca0(table0, 0x31);
panel_resource_done:
    FUN_0021d3b0(slot + 0x10, resource);
    FUN_00238980(slot + 0x110, 3, *(u32*)(slot + 0xc), 1);
    resource = FUN_0021cca0(table6, 0x2b);
    FUN_0021d3b0(slot + 0x410, resource);
    *(u32*)(base + 0x4644) = 3;
}

// FUN_0022C0A0
void FUN_0022C0A0(void)
{
    K_ASSERT(sBcmPanel != NULL, 0xe6);
    *(u32*)((int)sBcmPanel + 0x4644) = 0;
}














/* W389 measured opt_lifetimes on: nd442/636B -> nd441/636B (window 640B). */



/* W310/W357 measured bpTexBeginRender: optimization_level 1 nd85/288B -> nd0/320B. */




/* W357 measured bpTexFindFreeNode: optimization_level 3 nd18/168B -> nd0/168B. */


/* Retail queueing performs its root census and action-record writes inline. */
/* W310 measured: opt_common_subs off nd434->407, object 668/672; reset nd434. */







/* W357 debt: bpTexUpdateNode at honest -O2 is 2860B vs 2656B window
 * (nd2145), 204B over. optimization_level 3 measures 2516B/2656
 * (nd1915) and preserves link layout; real repair needs retail frame
 * comparison, ordered helper call census, and the ABS_f32 stub sweep. */


/*
 * Retail offsets 0x9ec-0xbc4 count unowned roots, locate each by index, and redraw leaves.
 */
/* W310 measured: opt_loop_invariants on nd2267->2266, object 2908/3024; reset nd2267. */





/*
 * The command-panel work area lives in the same GP slot used by bcm_panel.c.
 */









// FUN_0022C0E0
void FUN_0022C0E0(void)
{
    u8* base;
    u8* slot;
    u32 table0;
    u32 table6;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    base = (u8*)sBcmPanel;
    table0 = FUN_0021c3f0(0);
    table6 = FUN_0021c3f0(6);
    FUN_0022C210();
    slot = base + 0x6d00;
    FUN_0021d3b0(slot + 0x10,
                 FUN_0021cca0(table0, 0x28));
    FUN_00238980(slot + 0x110, 2,
                 *(u32*)(slot + 4), 1);
    FUN_0021d3b0(slot + 0x310,
                 FUN_0021cca0(table6, 0x1a));
    *(u32*)(base + 0x4644) = 4;
}

// FUN_0022C1D0
void FUN_0022C1D0(void)
{
    K_ASSERT(sBcmPanel != NULL, 0xe6);
    *(u32*)((int)sBcmPanel + 0x4644) = 0;
}

// FUN_0022C210
void FUN_0022C210(void)
{
    u8* base;
    u32 table;
    u32 resource;

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    base = (u8*)sBcmPanel;
    table = FUN_0021c3f0(0);
    resource = FUN_0021cca0(table, 0x42);
    FUN_0021d3b0(base + 0x6a00, resource);
    FUN_0021e380(base + 0x6b00, resource, 1);
    FUN_0021d3b0(base + 0x6c00,
                 FUN_0021cca0(table, 0x43));
}

// FUN_0022C2D0
void FUN_0022C2D0(void)
{
    u8* work;
    u32 table0;
    u32 resourceA;
    f32 weight;
    f32 alpha;
    s32 alphaInt;
    f32 rect[4];
    u8 color[4];

    K_ASSERT(sBcmPanel != NULL, 0xe6);
    work = (u8*)sBcmPanel;
    table0 = FUN_0021c3f0(0);
    weight = *(f32*)(work + 0x7214);

    resourceA = FUN_0021cca0(table0, 0x42);
    rect[0] = 57.0f;
    rect[1] = (f32)0x13d;
    rect[2] = (f32)*(s32*)(resourceA + 0xc);
    rect[3] = (f32)*(s32*)(resourceA + 0x10);
    FUN_0021d8e0(work + 0x6a00, rect);

    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = (u8)(255.0f * weight);
    FUN_0021d950(work + 0x6a00, color);
 
    rect[0] = 57.0f + (f32)*(s32*)(resourceA + 0xc);
    rect[1] = (f32)0x13d;
    rect[2] = 133.0f;
    rect[3] = (f32)*(s32*)(resourceA + 0x10);
    FUN_0021d8e0(work + 0x6b00, rect);
 
    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = (u8)(255.0f * weight);
    FUN_0021d950(work + 0x6b00, color);
 
    resourceA = FUN_0021cca0(table0, 0x43);
    rect[0] = 400.0f;
    rect[1] = (f32)0x13d;
    rect[2] = (f32)*(s32*)(resourceA + 0xc);
    rect[3] = (f32)*(s32*)(resourceA + 0x10);
    FUN_0021d8e0(work + 0x6c00, rect);
 
    color[0] = 0xff;
    color[1] = 0xff;
    color[2] = 0xff;
    color[3] = (u8)(255.0f * weight);
    FUN_0021d950(work + 0x6c00, color);
}
#pragma alias D_00960090_abs D_00960090
#pragma alias D_0096009C_abs D_0096009C







// FUN_0022C5A0
void FUN_0022C5A0(void)
{
    u8* base;
    u32 resource;
    void (**setColour)(u32*, u32, u32, u32, u32);
    K_ASSERT(sBcmPanel != NULL, 0xe6);
    base = (u8*)sBcmPanel;
    resource = FUN_0021cca0(FUN_0021c3f0(0), 0x42);
    (*(void (**)(u32, u32))D_00960090_abs)(1, FUN_0021cce0(resource));
    RpSkyRenderStateSet(3, (void*)0x717fb);
    RpSkyRenderStateSet(2, (void*)0x44);
    setColour = (void (**)(u32*, u32, u32, u32, u32))D_0096009C_u32;
    (*setColour)((u32*)(base + 0x6a00), 4, 0, 1, 2);
    (*setColour)((u32*)(base + 0x6a00), 4, 0, 2, 3);
    (*setColour)((u32*)(base + 0x6b00), 4, 0, 1, 2);
    (*setColour)((u32*)(base + 0x6b00), 4, 0, 2, 3);
    (*setColour)((u32*)(base + 0x6c00), 4, 0, 1, 2);
    (*setColour)((u32*)(base + 0x6c00), 4, 0, 2, 3);
}



// FUN_0022c720
void FUN_0022c720(u32* object, u32 style)
{
    u32 table;
    u32 resource;

    object[0] = 0;
    table = FUN_0021c3f0(3);
    *(f32*)((u8*)object + 0x510) = 100.0f;
    *(f32*)((u8*)object + 0x514) = 100.0f;
    *(u16*)((u8*)object + 4) = (u16)style;
    resource = FUN_0021c450(style);
    FUN_0021d3b0((u8*)object + 0x10,
                 FUN_0021cca0(resource, 0));
    resource = FUN_0021cca0(resource, 1);
    FUN_0021d3b0((u8*)object + 0x110, resource);
    FUN_0021d3b0((u8*)object + 0x210, resource);
    FUN_0021d3b0((u8*)object + 0x310, resource);
    FUN_0021d3b0((u8*)object + 0x410, resource);
    resource = FUN_0021cca0(table, 0xa);
    FUN_0021d3b0((u8*)object + 0x630, resource);
    FUN_0021d3b0((u8*)object + 0x730, resource);
    *(u32*)((u8*)object + 0x850) = 0;
    *(u32*)((u8*)object + 0x854) = 0;
    object[0] |= 1;
}

#pragma opt_common_subs reset
